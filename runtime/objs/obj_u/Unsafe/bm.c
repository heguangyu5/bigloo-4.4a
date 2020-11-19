/*===========================================================================*/
/*   (Unsafe/bm.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Unsafe/bm.scm -indent -o objs/obj_u/Unsafe/bm.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62bmhzd2stringzb0zz__bmz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__bmz00 = BUNSPEC;
	BGL_EXPORTED_DECL long BGl_bmhzd2mmapzd2zz__bmz00(obj_t, obj_t, long);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL long BGl_bmzd2mmapzd2zz__bmz00(obj_t, obj_t, long);
	static obj_t BGl_genericzd2initzd2zz__bmz00();
	static bool_t BGl_iszd2prefixzf3z21zz__bmz00(obj_t, long);
	static obj_t BGl_objectzd2initzd2zz__bmz00();
	extern obj_t BGl_makezd2u32vectorzd2zz__srfi4z00(long, uint32_t);
	BGL_EXPORTED_DECL obj_t BGl_bmzd2tablezd2zz__bmz00(obj_t);
	static bool_t BGl_makezd2delta1zd2zz__bmz00(obj_t, obj_t);
	static bool_t BGl_makezd2delta2zd2zz__bmz00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static long BGl_suffixzd2lengthzd2zz__bmz00(obj_t, long);
	static obj_t BGl_methodzd2initzd2zz__bmz00();
	static obj_t BGl_z62bmhzd2tablezb0zz__bmz00(obj_t, obj_t);
	static obj_t BGl_z62bmzd2stringzb0zz__bmz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bmhzd2tablezd2zz__bmz00(obj_t);
	BGL_EXPORTED_DECL long BGl_bmzd2stringzd2zz__bmz00(obj_t, obj_t, long);
	static obj_t BGl_symbol2034z00zz__bmz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__bmz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62bmzd2mmapzb0zz__bmz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__bmz00();
	static obj_t BGl_gczd2rootszd2initz00zz__bmz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__bmz00();
	static obj_t BGl_z62bmhzd2mmapzb0zz__bmz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62bmzd2tablezb0zz__bmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_bmhzd2stringzd2zz__bmz00(obj_t, obj_t, long);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2040z00zz__bmz00,
		BgL_bgl_string2040za700za7za7_2048za7, "&bm-string", 10);
	      DEFINE_STRING(BGl_string2041z00zz__bmz00,
		BgL_bgl_string2041za700za7za7_2049za7, "bint", 4);
	      DEFINE_STRING(BGl_string2042z00zz__bmz00,
		BgL_bgl_string2042za700za7za7_2050za7, "&bmh-table", 10);
	      DEFINE_STRING(BGl_string2043z00zz__bmz00,
		BgL_bgl_string2043za700za7za7_2051za7, "bmh", 3);
	      DEFINE_STRING(BGl_string2044z00zz__bmz00,
		BgL_bgl_string2044za700za7za7_2052za7, "Illegal bmh-table", 17);
	      DEFINE_STRING(BGl_string2045z00zz__bmz00,
		BgL_bgl_string2045za700za7za7_2053za7, "&bmh-mmap", 9);
	      DEFINE_STRING(BGl_string2046z00zz__bmz00,
		BgL_bgl_string2046za700za7za7_2054za7, "&bmh-string", 11);
	      DEFINE_STRING(BGl_string2047z00zz__bmz00,
		BgL_bgl_string2047za700za7za7_2055za7, "__bm", 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bmhzd2stringzd2envz00zz__bmz00,
		BgL_bgl_za762bmhza7d2stringza72056za7, BGl_z62bmhzd2stringzb0zz__bmz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bmzd2tablezd2envz00zz__bmz00,
		BgL_bgl_za762bmza7d2tableza7b02057za7, BGl_z62bmzd2tablezb0zz__bmz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bmzd2stringzd2envz00zz__bmz00,
		BgL_bgl_za762bmza7d2stringza7b2058za7, BGl_z62bmzd2stringzb0zz__bmz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bmhzd2mmapzd2envz00zz__bmz00,
		BgL_bgl_za762bmhza7d2mmapza7b02059za7, BGl_z62bmhzd2mmapzb0zz__bmz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bmzd2mmapzd2envz00zz__bmz00,
		BgL_bgl_za762bmza7d2mmapza7b0za72060z00, BGl_z62bmzd2mmapzb0zz__bmz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2029z00zz__bmz00,
		BgL_bgl_string2029za700za7za7_2061za7, "/tmp/4.4a/runtime/Unsafe/bm.scm",
		31);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bmhzd2tablezd2envz00zz__bmz00,
		BgL_bgl_za762bmhza7d2tableza7b2062za7, BGl_z62bmhzd2tablezb0zz__bmz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2030z00zz__bmz00,
		BgL_bgl_string2030za700za7za7_2063za7, "&bm-table", 9);
	      DEFINE_STRING(BGl_string2031z00zz__bmz00,
		BgL_bgl_string2031za700za7za7_2064za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2032z00zz__bmz00,
		BgL_bgl_string2032za700za7za7_2065za7, "bm", 2);
	      DEFINE_STRING(BGl_string2033z00zz__bmz00,
		BgL_bgl_string2033za700za7za7_2066za7, "Illegal bm-table", 16);
	      DEFINE_STRING(BGl_string2035z00zz__bmz00,
		BgL_bgl_string2035za700za7za7_2067za7, "u32vector", 9);
	      DEFINE_STRING(BGl_string2036z00zz__bmz00,
		BgL_bgl_string2036za700za7za7_2068za7, "&bm-mmap", 8);
	      DEFINE_STRING(BGl_string2037z00zz__bmz00,
		BgL_bgl_string2037za700za7za7_2069za7, "epair", 5);
	      DEFINE_STRING(BGl_string2038z00zz__bmz00,
		BgL_bgl_string2038za700za7za7_2070za7, "mmap", 4);
	      DEFINE_STRING(BGl_string2039z00zz__bmz00,
		BgL_bgl_string2039za700za7za7_2071za7, "belong", 6);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__bmz00));
		     ADD_ROOT((void *) (&BGl_symbol2034z00zz__bmz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__bmz00(long
		BgL_checksumz00_2552, char *BgL_fromz00_2553)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__bmz00))
				{
					BGl_requirezd2initializa7ationz75zz__bmz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__bmz00();
					BGl_cnstzd2initzd2zz__bmz00();
					BGl_importedzd2moduleszd2initz00zz__bmz00();
					return BGl_methodzd2initzd2zz__bmz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__bmz00()
	{
		{	/* Unsafe/bm.scm 15 */
			return (BGl_symbol2034z00zz__bmz00 =
				bstring_to_symbol(BGl_string2035z00zz__bmz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__bmz00()
	{
		{	/* Unsafe/bm.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* make-delta1 */
	bool_t BGl_makezd2delta1zd2zz__bmz00(obj_t BgL_delta1z00_3,
		obj_t BgL_patz00_4)
	{
		{	/* Unsafe/bm.scm 101 */
			{	/* Unsafe/bm.scm 102 */
				uint32_t BgL_notzd2foundzd2_1160;
				long BgL_patlenzd21zd2_1161;

				{	/* Unsafe/bm.scm 102 */
					long BgL_arg1221z00_1180;

					BgL_arg1221z00_1180 = STRING_LENGTH(BgL_patz00_4);
					{	/* Unsafe/bm.scm 102 */
						uint32_t BgL_res1797z00_1859;

						BgL_res1797z00_1859 = (uint32_t) (BgL_arg1221z00_1180);
						BgL_notzd2foundzd2_1160 = BgL_res1797z00_1859;
				}}
				BgL_patlenzd21zd2_1161 = (STRING_LENGTH(BgL_patz00_4) - ((long) 1));
				{
					long BgL_iz00_1870;

					BgL_iz00_1870 = ((long) 0);
				BgL_for1046z00_1869:
					if ((BgL_iz00_1870 < ((long) 256)))
						{	/* Unsafe/bm.scm 104 */
							BGL_U32VSET(BgL_delta1z00_3, BgL_iz00_1870,
								BgL_notzd2foundzd2_1160);
							BUNSPEC;
							{
								long BgL_iz00_2570;

								BgL_iz00_2570 = (BgL_iz00_1870 + ((long) 1));
								BgL_iz00_1870 = BgL_iz00_2570;
								goto BgL_for1046z00_1869;
							}
						}
					else
						{	/* Unsafe/bm.scm 104 */
							((bool_t) 0);
						}
				}
				{
					long BgL_iz00_1171;

					BgL_iz00_1171 = ((long) 0);
				BgL_zc3z04anonymousza31195ze3z87_1172:
					if ((BgL_iz00_1171 < BgL_patlenzd21zd2_1161))
						{	/* Unsafe/bm.scm 106 */
							{	/* Unsafe/bm.scm 107 */
								long BgL_arg1197z00_1174;
								uint32_t BgL_arg1201z00_1175;

								BgL_arg1197z00_1174 = (STRING_REF(BgL_patz00_4, BgL_iz00_1171));
								{	/* Unsafe/bm.scm 108 */
									long BgL_arg1211z00_1177;

									BgL_arg1211z00_1177 =
										(BgL_patlenzd21zd2_1161 - BgL_iz00_1171);
									{	/* Unsafe/bm.scm 108 */
										uint32_t BgL_res1806z00_1890;

										BgL_res1806z00_1890 = (uint32_t) (BgL_arg1211z00_1177);
										BgL_arg1201z00_1175 = BgL_res1806z00_1890;
								}}
								BGL_U32VSET(BgL_delta1z00_3, BgL_arg1197z00_1174,
									BgL_arg1201z00_1175);
								BUNSPEC;
							}
							{
								long BgL_iz00_2579;

								BgL_iz00_2579 = (BgL_iz00_1171 + ((long) 1));
								BgL_iz00_1171 = BgL_iz00_2579;
								goto BgL_zc3z04anonymousza31195ze3z87_1172;
							}
						}
					else
						{	/* Unsafe/bm.scm 106 */
							return ((bool_t) 0);
						}
				}
			}
		}

	}



/* is-prefix? */
	bool_t BGl_iszd2prefixzf3z21zz__bmz00(obj_t BgL_wordz00_5, long BgL_posz00_6)
	{
		{	/* Unsafe/bm.scm 116 */
			{	/* Unsafe/bm.scm 117 */
				long BgL_suffixlenz00_1182;

				BgL_suffixlenz00_1182 = (STRING_LENGTH(BgL_wordz00_5) - BgL_posz00_6);
				{
					long BgL_iz00_1184;

					BgL_iz00_1184 = ((long) 0);
				BgL_zc3z04anonymousza31224ze3z87_1185:
					if ((BgL_iz00_1184 < BgL_suffixlenz00_1182))
						{	/* Unsafe/bm.scm 119 */
							if (
								(STRING_REF(BgL_wordz00_5, BgL_iz00_1184) ==
									STRING_REF(BgL_wordz00_5, (BgL_posz00_6 + BgL_iz00_1184))))
								{
									long BgL_iz00_2590;

									BgL_iz00_2590 = (BgL_iz00_1184 + ((long) 1));
									BgL_iz00_1184 = BgL_iz00_2590;
									goto BgL_zc3z04anonymousza31224ze3z87_1185;
								}
							else
								{	/* Unsafe/bm.scm 120 */
									return ((bool_t) 0);
								}
						}
					else
						{	/* Unsafe/bm.scm 119 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* suffix-length */
	long BGl_suffixzd2lengthzd2zz__bmz00(obj_t BgL_wordz00_7, long BgL_posz00_8)
	{
		{	/* Unsafe/bm.scm 130 */
			{	/* Unsafe/bm.scm 131 */
				long BgL_wordlenzd21zd2_1197;

				BgL_wordlenzd21zd2_1197 = (STRING_LENGTH(BgL_wordz00_7) - ((long) 1));
				{
					long BgL_iz00_1199;

					BgL_iz00_1199 = ((long) 0);
				BgL_zc3z04anonymousza31247ze3z87_1200:
					if (
						(STRING_REF(BgL_wordz00_7,
								(BgL_posz00_8 - BgL_iz00_1199)) ==
							STRING_REF(BgL_wordz00_7,
								(BgL_wordlenzd21zd2_1197 - BgL_iz00_1199))))
						{	/* Unsafe/bm.scm 133 */
							if ((BgL_iz00_1199 < BgL_posz00_8))
								{
									long BgL_iz00_2602;

									BgL_iz00_2602 = (BgL_iz00_1199 + ((long) 1));
									BgL_iz00_1199 = BgL_iz00_2602;
									goto BgL_zc3z04anonymousza31247ze3z87_1200;
								}
							else
								{	/* Unsafe/bm.scm 135 */
									return BgL_iz00_1199;
								}
						}
					else
						{	/* Unsafe/bm.scm 133 */
							return BgL_iz00_1199;
						}
				}
			}
		}

	}



/* make-delta2 */
	bool_t BGl_makezd2delta2zd2zz__bmz00(obj_t BgL_delta2z00_9,
		obj_t BgL_patz00_10)
	{
		{	/* Unsafe/bm.scm 179 */
			{	/* Unsafe/bm.scm 180 */
				long BgL_patlenzd21zd2_1214;

				BgL_patlenzd21zd2_1214 = (STRING_LENGTH(BgL_patz00_10) - ((long) 1));
				{	/* Unsafe/bm.scm 180 */
					long BgL_lastzd2prefixzd2indexz00_1215;

					BgL_lastzd2prefixzd2indexz00_1215 = BgL_patlenzd21zd2_1214;
					{	/* Unsafe/bm.scm 181 */

						{
							long BgL_pz00_1218;

							BgL_pz00_1218 = BgL_patlenzd21zd2_1214;
						BgL_zc3z04anonymousza31274ze3z87_1219:
							if ((BgL_pz00_1218 >= ((long) 0)))
								{	/* Unsafe/bm.scm 183 */
									if (BGl_iszd2prefixzf3z21zz__bmz00(BgL_patz00_10,
											(BgL_pz00_1218 + ((long) 1))))
										{	/* Unsafe/bm.scm 184 */
											BgL_lastzd2prefixzd2indexz00_1215 =
												(BgL_pz00_1218 + ((long) 1));
										}
									else
										{	/* Unsafe/bm.scm 184 */
											BFALSE;
										}
									{	/* Unsafe/bm.scm 187 */
										long BgL_arg1281z00_1224;

										BgL_arg1281z00_1224 =
											(BgL_lastzd2prefixzd2indexz00_1215 +
											(BgL_patlenzd21zd2_1214 - BgL_pz00_1218));
										{	/* Unsafe/bm.scm 186 */
											uint32_t BgL_tmpz00_2614;

											BgL_tmpz00_2614 = (uint32_t) (BgL_arg1281z00_1224);
											BGL_U32VSET(BgL_delta2z00_9, BgL_pz00_1218,
												BgL_tmpz00_2614);
										} BUNSPEC;
									}
									{
										long BgL_pz00_2617;

										BgL_pz00_2617 = (BgL_pz00_1218 - ((long) 1));
										BgL_pz00_1218 = BgL_pz00_2617;
										goto BgL_zc3z04anonymousza31274ze3z87_1219;
									}
								}
							else
								{	/* Unsafe/bm.scm 183 */
									((bool_t) 0);
								}
						}
						{
							long BgL_pz00_1230;

							BgL_pz00_1230 = ((long) 0);
						BgL_zc3z04anonymousza31285ze3z87_1231:
							if ((BgL_pz00_1230 < BgL_patlenzd21zd2_1214))
								{	/* Unsafe/bm.scm 189 */
									{	/* Unsafe/bm.scm 190 */
										long BgL_slenz00_1233;

										BgL_slenz00_1233 =
											BGl_suffixzd2lengthzd2zz__bmz00(BgL_patz00_10,
											BgL_pz00_1230);
										if ((STRING_REF(BgL_patz00_10,
													(BgL_pz00_1230 - BgL_slenz00_1233)) ==
												STRING_REF(BgL_patz00_10,
													(BgL_patlenzd21zd2_1214 - BgL_slenz00_1233))))
											{	/* Unsafe/bm.scm 191 */
												BFALSE;
											}
										else
											{	/* Unsafe/bm.scm 193 */
												long BgL_arg1292z00_1239;
												uint32_t BgL_arg1295z00_1240;

												BgL_arg1292z00_1239 =
													(BgL_patlenzd21zd2_1214 - BgL_slenz00_1233);
												{	/* Unsafe/bm.scm 195 */
													long BgL_arg1296z00_1241;

													BgL_arg1296z00_1241 =
														(
														(BgL_patlenzd21zd2_1214 - BgL_pz00_1230) +
														BgL_slenz00_1233);
													{	/* Unsafe/bm.scm 194 */
														uint32_t BgL_res1842z00_1986;

														BgL_res1842z00_1986 =
															(uint32_t) (BgL_arg1296z00_1241);
														BgL_arg1295z00_1240 = BgL_res1842z00_1986;
												}}
												BGL_U32VSET(BgL_delta2z00_9, BgL_arg1292z00_1239,
													BgL_arg1295z00_1240);
												BUNSPEC;
									}}
									{
										long BgL_pz00_2633;

										BgL_pz00_2633 = (BgL_pz00_1230 + ((long) 1));
										BgL_pz00_1230 = BgL_pz00_2633;
										goto BgL_zc3z04anonymousza31285ze3z87_1231;
									}
								}
							else
								{	/* Unsafe/bm.scm 189 */
									return ((bool_t) 0);
								}
						}
					}
				}
			}
		}

	}



/* bm-table */
	BGL_EXPORTED_DEF obj_t BGl_bmzd2tablezd2zz__bmz00(obj_t BgL_patz00_11)
	{
		{	/* Unsafe/bm.scm 200 */
			{	/* Unsafe/bm.scm 201 */
				obj_t BgL_delta1z00_1250;
				obj_t BgL_delta2z00_1251;

				{	/* Llib/srfi4.scm 451 */

					BgL_delta1z00_1250 =
						BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 256), (uint32_t) (0));
				}
				{	/* Unsafe/bm.scm 202 */
					long BgL_arg1306z00_1255;

					BgL_arg1306z00_1255 = STRING_LENGTH(BgL_patz00_11);
					{	/* Llib/srfi4.scm 451 */

						BgL_delta2z00_1251 =
							BGl_makezd2u32vectorzd2zz__srfi4z00(BgL_arg1306z00_1255,
							(uint32_t) (0));
				}}
				BGl_makezd2delta1zd2zz__bmz00(BgL_delta1z00_1250, BgL_patz00_11);
				BGl_makezd2delta2zd2zz__bmz00(BgL_delta2z00_1251, BgL_patz00_11);
				{	/* Unsafe/bm.scm 205 */
					obj_t BgL_res1845z00_1991;

					BgL_res1845z00_1991 =
						MAKE_YOUNG_EPAIR(BgL_delta1z00_1250, BgL_delta2z00_1251,
						BgL_patz00_11);
					return BgL_res1845z00_1991;
				}
			}
		}

	}



/* &bm-table */
	obj_t BGl_z62bmzd2tablezb0zz__bmz00(obj_t BgL_envz00_2504,
		obj_t BgL_patz00_2505)
	{
		{	/* Unsafe/bm.scm 200 */
			{	/* Unsafe/bm.scm 201 */
				obj_t BgL_auxz00_2641;

				if (STRINGP(BgL_patz00_2505))
					{	/* Unsafe/bm.scm 201 */
						BgL_auxz00_2641 = BgL_patz00_2505;
					}
				else
					{
						obj_t BgL_auxz00_2644;

						BgL_auxz00_2644 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2029z00zz__bmz00,
							BINT(((long) 9589)), BGl_string2030z00zz__bmz00,
							BGl_string2031z00zz__bmz00, BgL_patz00_2505);
						FAILURE(BgL_auxz00_2644, BFALSE, BFALSE);
					}
				return BGl_bmzd2tablezd2zz__bmz00(BgL_auxz00_2641);
			}
		}

	}



/* bm-mmap */
	BGL_EXPORTED_DEF long BGl_bmzd2mmapzd2zz__bmz00(obj_t BgL_tpz00_12,
		obj_t BgL_objz00_13, long BgL_mz00_14)
	{
		{	/* Unsafe/bm.scm 250 */
			{	/* Unsafe/bm.scm 251 */
				bool_t BgL_test2084z00_2649;

				{	/* Unsafe/bm.scm 251 */
					obj_t BgL_arg1343z00_1305;

					BgL_arg1343z00_1305 = CAR(BgL_tpz00_12);
					{	/* Unsafe/bm.scm 251 */
						bool_t BgL_res1846z00_1993;

						BgL_res1846z00_1993 = BGL_U32VECTORP(BgL_arg1343z00_1305);
						BgL_test2084z00_2649 = BgL_res1846z00_1993;
				}}
				if (BgL_test2084z00_2649)
					{	/* Unsafe/bm.scm 251 */
						bool_t BgL_test2085z00_2652;

						{	/* Unsafe/bm.scm 251 */
							obj_t BgL_arg1341z00_1303;

							BgL_arg1341z00_1303 = CDR(BgL_tpz00_12);
							{	/* Unsafe/bm.scm 251 */
								bool_t BgL_res1847z00_1995;

								BgL_res1847z00_1995 = BGL_U32VECTORP(BgL_arg1341z00_1303);
								BgL_test2085z00_2652 = BgL_res1847z00_1995;
							}
						}
						if (BgL_test2085z00_2652)
							{	/* Unsafe/bm.scm 251 */
								bool_t BgL_test2086z00_2655;

								{	/* Unsafe/bm.scm 251 */
									obj_t BgL_tmpz00_2656;

									BgL_tmpz00_2656 = CER(BgL_tpz00_12);
									BgL_test2086z00_2655 = STRINGP(BgL_tmpz00_2656);
								}
								if (BgL_test2086z00_2655)
									{	/* Unsafe/bm.scm 251 */
										obj_t BgL_patz00_1264;

										BgL_patz00_1264 = CER(BgL_tpz00_12);
										{	/* Unsafe/bm.scm 251 */
											long BgL_patlenz00_1265;

											BgL_patlenz00_1265 =
												STRING_LENGTH(((obj_t) BgL_patz00_1264));
											{	/* Unsafe/bm.scm 251 */

												if ((BgL_patlenz00_1265 == ((long) 0)))
													{	/* Unsafe/bm.scm 251 */
														return (long) (((long) -1));
													}
												else
													{	/* Unsafe/bm.scm 251 */
														obj_t BgL_delta1z00_1267;
														obj_t BgL_delta2z00_1268;
														long BgL_strlenz00_1269;

														BgL_delta1z00_1267 = CAR(BgL_tpz00_12);
														BgL_delta2z00_1268 = CDR(BgL_tpz00_12);
														{	/* Unsafe/bm.scm 251 */
															long BgL_res1851z00_2006;

															BgL_res1851z00_2006 =
																BGL_MMAP_LENGTH(BgL_objz00_13);
															BgL_strlenz00_1269 = BgL_res1851z00_2006;
														}
														{	/* Unsafe/bm.scm 251 */
															long BgL_g1057z00_1270;

															{	/* Unsafe/bm.scm 251 */
																long BgL_za71za7_2009;

																BgL_za71za7_2009 = (long) (BgL_mz00_14);
																BgL_g1057z00_1270 =
																	(BgL_za71za7_2009 +
																	(BgL_patlenz00_1265 - ((long) 1)));
															}
															{
																long BgL_iz00_1272;

																BgL_iz00_1272 = BgL_g1057z00_1270;
															BgL_zc3z04anonymousza31314ze3z87_1273:
																{	/* Unsafe/bm.scm 251 */
																	bool_t BgL_test2088z00_2671;

																	{	/* Unsafe/bm.scm 251 */
																		long BgL_n1z00_2012;
																		long BgL_n2z00_2013;

																		BgL_n1z00_2012 = BgL_iz00_1272;
																		BgL_n2z00_2013 =
																			(long) (BgL_strlenz00_1269);
																		BgL_test2088z00_2671 =
																			(BgL_n1z00_2012 < BgL_n2z00_2013);
																	}
																	if (BgL_test2088z00_2671)
																		{	/* Unsafe/bm.scm 251 */
																			long BgL_g1058z00_1275;

																			BgL_g1058z00_1275 =
																				(BgL_patlenz00_1265 - ((long) 1));
																			{
																				long BgL_jz00_1277;

																				BgL_jz00_1277 = BgL_g1058z00_1275;
																			BgL_zc3z04anonymousza31316ze3z87_1278:
																				if ((BgL_jz00_1277 < ((long) 0)))
																					{	/* Unsafe/bm.scm 251 */
																						long BgL_arg1318z00_1280;

																						BgL_arg1318z00_1280 =
																							(BgL_iz00_1272 + ((long) 1));
																						{	/* Unsafe/bm.scm 251 */
																							long BgL_res1858z00_2022;

																							BgL_res1858z00_2022 =
																								(long) (BgL_arg1318z00_1280);
																							return BgL_res1858z00_2022;
																						}
																					}
																				else
																					{	/* Unsafe/bm.scm 251 */
																						bool_t BgL_test2090z00_2679;

																						{	/* Unsafe/bm.scm 251 */
																							unsigned char BgL_arg1334z00_1295;
																							unsigned char BgL_arg1335z00_1296;

																							{	/* Unsafe/bm.scm 251 */
																								long BgL_arg1337z00_1297;

																								{	/* Unsafe/bm.scm 251 */
																									long BgL_res1859z00_2024;

																									BgL_res1859z00_2024 =
																										(long) (BgL_iz00_1272);
																									BgL_arg1337z00_1297 =
																										BgL_res1859z00_2024;
																								}
																								{	/* Unsafe/bm.scm 251 */
																									unsigned char
																										BgL_res1862z00_2035;
																									{	/* Unsafe/bm.scm 251 */
																										unsigned char BgL_cz00_2027;

																										BgL_cz00_2027 =
																											BGL_MMAP_REF
																											(BgL_objz00_13,
																											BgL_arg1337z00_1297);
																										{	/* Unsafe/bm.scm 251 */
																											long BgL_arg1792z00_2028;

																											BgL_arg1792z00_2028 =
																												(BgL_arg1337z00_1297 +
																												((long) 1));
																											{	/* Unsafe/bm.scm 251 */
																												long
																													BgL_res1861z00_2034;
																												BGL_MMAP_RP_SET
																													(BgL_objz00_13,
																													BgL_arg1792z00_2028);
																												BUNSPEC;
																												BgL_res1861z00_2034 =
																													BgL_arg1792z00_2028;
																												BgL_res1861z00_2034;
																										}}
																										BgL_res1862z00_2035 =
																											BgL_cz00_2027;
																									}
																									BgL_arg1334z00_1295 =
																										BgL_res1862z00_2035;
																							}}
																							BgL_arg1335z00_1296 =
																								STRING_REF(
																								((obj_t) BgL_patz00_1264),
																								BgL_jz00_1277);
																							BgL_test2090z00_2679 =
																								(BgL_arg1334z00_1295 ==
																								BgL_arg1335z00_1296);
																						}
																						if (BgL_test2090z00_2679)
																							{	/* Unsafe/bm.scm 251 */
																								BgL_iz00_1272 =
																									(BgL_iz00_1272 - ((long) 1));
																								{
																									long BgL_jz00_2688;

																									BgL_jz00_2688 =
																										(BgL_jz00_1277 -
																										((long) 1));
																									BgL_jz00_1277 = BgL_jz00_2688;
																									goto
																										BgL_zc3z04anonymousza31316ze3z87_1278;
																								}
																							}
																						else
																							{	/* Unsafe/bm.scm 251 */
																								long BgL_incz00_1286;

																								{	/* Unsafe/bm.scm 251 */
																									long BgL_az00_1288;
																									long BgL_bz00_1289;

																									{	/* Unsafe/bm.scm 251 */
																										uint32_t
																											BgL_arg1329z00_1291;
																										{	/* Unsafe/bm.scm 251 */
																											long BgL_arg1330z00_1292;

																											{	/* Unsafe/bm.scm 251 */
																												unsigned char
																													BgL_arg1331z00_1293;
																												{	/* Unsafe/bm.scm 251 */
																													unsigned char
																														BgL_res1869z00_2056;
																													{	/* Unsafe/bm.scm 251 */
																														long BgL_iz00_2047;

																														BgL_iz00_2047 =
																															(long)
																															(BgL_iz00_1272);
																														{	/* Unsafe/bm.scm 251 */
																															unsigned char
																																BgL_cz00_2048;
																															BgL_cz00_2048 =
																																BGL_MMAP_REF
																																(BgL_objz00_13,
																																BgL_iz00_2047);
																															{	/* Unsafe/bm.scm 251 */
																																long
																																	BgL_arg1792z00_2049;
																																BgL_arg1792z00_2049
																																	=
																																	(BgL_iz00_2047
																																	+ ((long) 1));
																																{	/* Unsafe/bm.scm 251 */
																																	long
																																		BgL_res1868z00_2055;
																																	BGL_MMAP_RP_SET
																																		(BgL_objz00_13,
																																		BgL_arg1792z00_2049);
																																	BUNSPEC;
																																	BgL_res1868z00_2055
																																		=
																																		BgL_arg1792z00_2049;
																																	BgL_res1868z00_2055;
																															}}
																															BgL_res1869z00_2056
																																= BgL_cz00_2048;
																													}}
																													BgL_arg1331z00_1293 =
																														BgL_res1869z00_2056;
																												}
																												BgL_arg1330z00_1292 =
																													(BgL_arg1331z00_1293);
																											}
																											BgL_arg1329z00_1291 =
																												BGL_U32VREF
																												(BgL_delta1z00_1267,
																												BgL_arg1330z00_1292);
																										}
																										{	/* Unsafe/bm.scm 251 */
																											long BgL_res1871z00_2060;

																											BgL_res1871z00_2060 =
																												(long)
																												(BgL_arg1329z00_1291);
																											BgL_az00_1288 =
																												BgL_res1871z00_2060;
																									}}
																									{	/* Unsafe/bm.scm 251 */
																										uint32_t
																											BgL_arg1333z00_1294;
																										BgL_arg1333z00_1294 =
																											BGL_U32VREF
																											(BgL_delta2z00_1268,
																											BgL_jz00_1277);
																										{	/* Unsafe/bm.scm 251 */
																											long BgL_res1872z00_2062;

																											BgL_res1872z00_2062 =
																												(long)
																												(BgL_arg1333z00_1294);
																											BgL_bz00_1289 =
																												BgL_res1872z00_2062;
																									}}
																									if (
																										(BgL_az00_1288 >
																											BgL_bz00_1289))
																										{	/* Unsafe/bm.scm 251 */
																											BgL_incz00_1286 =
																												BgL_az00_1288;
																										}
																									else
																										{	/* Unsafe/bm.scm 251 */
																											BgL_incz00_1286 =
																												BgL_bz00_1289;
																										}
																								}
																								{
																									long BgL_iz00_2701;

																									BgL_iz00_2701 =
																										(BgL_iz00_1272 +
																										BgL_incz00_1286);
																									BgL_iz00_1272 = BgL_iz00_2701;
																									goto
																										BgL_zc3z04anonymousza31314ze3z87_1273;
																								}
																							}
																					}
																			}
																		}
																	else
																		{	/* Unsafe/bm.scm 251 */
																			long BgL_res1875z00_2069;

																			BgL_res1875z00_2069 =
																				(long) (((long) -1));
																			return BgL_res1875z00_2069;
																		}
																}
															}
														}
													}
											}
										}
									}
								else
									{	/* Unsafe/bm.scm 251 */
										obj_t BgL_tmpz00_2704;

										BgL_tmpz00_2704 =
											BGl_errorz00zz__errorz00(BGl_string2032z00zz__bmz00,
											BGl_string2033z00zz__bmz00, BgL_tpz00_12);
										return BELONG_TO_LONG(BgL_tmpz00_2704);
									}
							}
						else
							{	/* Unsafe/bm.scm 251 */
								obj_t BgL_arg1340z00_1302;

								BgL_arg1340z00_1302 = CDR(BgL_tpz00_12);
								{	/* Unsafe/bm.scm 251 */
									obj_t BgL_tmpz00_2708;

									BgL_tmpz00_2708 =
										BGl_bigloozd2typezd2errorz00zz__errorz00
										(BGl_string2032z00zz__bmz00, BGl_symbol2034z00zz__bmz00,
										BgL_arg1340z00_1302);
									return BELONG_TO_LONG(BgL_tmpz00_2708);
								}
							}
					}
				else
					{	/* Unsafe/bm.scm 251 */
						obj_t BgL_arg1342z00_1304;

						BgL_arg1342z00_1304 = CAR(BgL_tpz00_12);
						{	/* Unsafe/bm.scm 251 */
							obj_t BgL_tmpz00_2712;

							BgL_tmpz00_2712 =
								BGl_bigloozd2typezd2errorz00zz__errorz00
								(BGl_string2032z00zz__bmz00, BGl_symbol2034z00zz__bmz00,
								BgL_arg1342z00_1304);
							return BELONG_TO_LONG(BgL_tmpz00_2712);
						}
					}
			}
		}

	}



/* &bm-mmap */
	obj_t BGl_z62bmzd2mmapzb0zz__bmz00(obj_t BgL_envz00_2506,
		obj_t BgL_tpz00_2507, obj_t BgL_objz00_2508, obj_t BgL_mz00_2509)
	{
		{	/* Unsafe/bm.scm 250 */
			{	/* Unsafe/bm.scm 251 */
				long BgL_tmpz00_2715;

				{	/* Unsafe/bm.scm 251 */
					long BgL_auxz00_2730;
					obj_t BgL_auxz00_2723;
					obj_t BgL_auxz00_2716;

					{	/* Unsafe/bm.scm 251 */
						obj_t BgL_tmpz00_2731;

						if (ELONGP(BgL_mz00_2509))
							{	/* Unsafe/bm.scm 251 */
								BgL_tmpz00_2731 = BgL_mz00_2509;
							}
						else
							{
								obj_t BgL_auxz00_2734;

								BgL_auxz00_2734 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2029z00zz__bmz00,
									BINT(((long) 11306)), BGl_string2036z00zz__bmz00,
									BGl_string2039z00zz__bmz00, BgL_mz00_2509);
								FAILURE(BgL_auxz00_2734, BFALSE, BFALSE);
							}
						BgL_auxz00_2730 = BELONG_TO_LONG(BgL_tmpz00_2731);
					}
					if (BGL_MMAPP(BgL_objz00_2508))
						{	/* Unsafe/bm.scm 251 */
							BgL_auxz00_2723 = BgL_objz00_2508;
						}
					else
						{
							obj_t BgL_auxz00_2726;

							BgL_auxz00_2726 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2029z00zz__bmz00,
								BINT(((long) 11306)), BGl_string2036z00zz__bmz00,
								BGl_string2038z00zz__bmz00, BgL_objz00_2508);
							FAILURE(BgL_auxz00_2726, BFALSE, BFALSE);
						}
					if (EPAIRP(BgL_tpz00_2507))
						{	/* Unsafe/bm.scm 251 */
							BgL_auxz00_2716 = BgL_tpz00_2507;
						}
					else
						{
							obj_t BgL_auxz00_2719;

							BgL_auxz00_2719 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2029z00zz__bmz00,
								BINT(((long) 11306)), BGl_string2036z00zz__bmz00,
								BGl_string2037z00zz__bmz00, BgL_tpz00_2507);
							FAILURE(BgL_auxz00_2719, BFALSE, BFALSE);
						}
					BgL_tmpz00_2715 =
						BGl_bmzd2mmapzd2zz__bmz00(BgL_auxz00_2716, BgL_auxz00_2723,
						BgL_auxz00_2730);
				}
				return make_belong(BgL_tmpz00_2715);
			}
		}

	}



/* bm-string */
	BGL_EXPORTED_DEF long BGl_bmzd2stringzd2zz__bmz00(obj_t BgL_tpz00_15,
		obj_t BgL_objz00_16, long BgL_mz00_17)
	{
		{	/* Unsafe/bm.scm 256 */
			{	/* Unsafe/bm.scm 257 */
				bool_t BgL_test2095z00_2741;

				{	/* Unsafe/bm.scm 257 */
					obj_t BgL_arg1376z00_1356;

					BgL_arg1376z00_1356 = CAR(BgL_tpz00_15);
					{	/* Unsafe/bm.scm 257 */
						bool_t BgL_res1876z00_2073;

						BgL_res1876z00_2073 = BGL_U32VECTORP(BgL_arg1376z00_1356);
						BgL_test2095z00_2741 = BgL_res1876z00_2073;
				}}
				if (BgL_test2095z00_2741)
					{	/* Unsafe/bm.scm 257 */
						bool_t BgL_test2096z00_2744;

						{	/* Unsafe/bm.scm 257 */
							obj_t BgL_arg1374z00_1354;

							BgL_arg1374z00_1354 = CDR(BgL_tpz00_15);
							{	/* Unsafe/bm.scm 257 */
								bool_t BgL_res1877z00_2075;

								BgL_res1877z00_2075 = BGL_U32VECTORP(BgL_arg1374z00_1354);
								BgL_test2096z00_2744 = BgL_res1877z00_2075;
							}
						}
						if (BgL_test2096z00_2744)
							{	/* Unsafe/bm.scm 257 */
								bool_t BgL_test2097z00_2747;

								{	/* Unsafe/bm.scm 257 */
									obj_t BgL_tmpz00_2748;

									BgL_tmpz00_2748 = CER(BgL_tpz00_15);
									BgL_test2097z00_2747 = STRINGP(BgL_tmpz00_2748);
								}
								if (BgL_test2097z00_2747)
									{	/* Unsafe/bm.scm 257 */
										obj_t BgL_patz00_1312;

										BgL_patz00_1312 = CER(BgL_tpz00_15);
										{	/* Unsafe/bm.scm 257 */
											long BgL_patlenz00_1313;

											BgL_patlenz00_1313 =
												STRING_LENGTH(((obj_t) BgL_patz00_1312));
											{	/* Unsafe/bm.scm 257 */

												if ((BgL_patlenz00_1313 == ((long) 0)))
													{	/* Unsafe/bm.scm 257 */
														return ((long) -1);
													}
												else
													{	/* Unsafe/bm.scm 257 */
														obj_t BgL_delta1z00_1315;
														obj_t BgL_delta2z00_1316;
														long BgL_strlenz00_1317;

														BgL_delta1z00_1315 = CAR(BgL_tpz00_15);
														BgL_delta2z00_1316 = CDR(BgL_tpz00_15);
														BgL_strlenz00_1317 = STRING_LENGTH(BgL_objz00_16);
														{	/* Unsafe/bm.scm 257 */
															long BgL_g1059z00_1318;

															BgL_g1059z00_1318 =
																(BgL_mz00_17 +
																(BgL_patlenz00_1313 - ((long) 1)));
															{
																long BgL_iz00_1320;

																BgL_iz00_1320 = BgL_g1059z00_1318;
															BgL_zc3z04anonymousza31351ze3z87_1321:
																if ((BgL_iz00_1320 < BgL_strlenz00_1317))
																	{	/* Unsafe/bm.scm 257 */
																		long BgL_g1060z00_1323;

																		BgL_g1060z00_1323 =
																			(BgL_patlenz00_1313 - ((long) 1));
																		{
																			long BgL_jz00_1325;

																			BgL_jz00_1325 = BgL_g1060z00_1323;
																		BgL_zc3z04anonymousza31353ze3z87_1326:
																			if ((BgL_jz00_1325 < ((long) 0)))
																				{	/* Unsafe/bm.scm 257 */
																					return (BgL_iz00_1320 + ((long) 1));
																				}
																			else
																				{	/* Unsafe/bm.scm 257 */
																					bool_t BgL_test2101z00_2767;

																					{	/* Unsafe/bm.scm 257 */
																						unsigned char BgL_arg1367z00_1344;

																						BgL_arg1367z00_1344 =
																							STRING_REF(BgL_objz00_16,
																							BgL_iz00_1320);
																						BgL_test2101z00_2767 =
																							(BgL_arg1367z00_1344 ==
																							STRING_REF(((obj_t)
																									BgL_patz00_1312),
																								BgL_jz00_1325));
																					}
																					if (BgL_test2101z00_2767)
																						{	/* Unsafe/bm.scm 257 */
																							BgL_iz00_1320 =
																								(BgL_iz00_1320 - ((long) 1));
																							{
																								long BgL_jz00_2773;

																								BgL_jz00_2773 =
																									(BgL_jz00_1325 - ((long) 1));
																								BgL_jz00_1325 = BgL_jz00_2773;
																								goto
																									BgL_zc3z04anonymousza31353ze3z87_1326;
																							}
																						}
																					else
																						{	/* Unsafe/bm.scm 257 */
																							long BgL_incz00_1335;

																							{	/* Unsafe/bm.scm 257 */
																								long BgL_az00_1337;
																								long BgL_bz00_1338;

																								{	/* Unsafe/bm.scm 257 */
																									uint32_t BgL_arg1362z00_1340;

																									{	/* Unsafe/bm.scm 257 */
																										long BgL_tmpz00_2775;

																										BgL_tmpz00_2775 =
																											(STRING_REF(BgL_objz00_16,
																												BgL_iz00_1320));
																										BgL_arg1362z00_1340 =
																											BGL_U32VREF
																											(BgL_delta1z00_1315,
																											BgL_tmpz00_2775);
																									}
																									{	/* Unsafe/bm.scm 257 */
																										long BgL_res1895z00_2120;

																										BgL_res1895z00_2120 =
																											(long)
																											(BgL_arg1362z00_1340);
																										BgL_az00_1337 =
																											BgL_res1895z00_2120;
																								}}
																								{	/* Unsafe/bm.scm 257 */
																									uint32_t BgL_arg1365z00_1343;

																									BgL_arg1365z00_1343 =
																										BGL_U32VREF
																										(BgL_delta2z00_1316,
																										BgL_jz00_1325);
																									{	/* Unsafe/bm.scm 257 */
																										long BgL_res1896z00_2122;

																										BgL_res1896z00_2122 =
																											(long)
																											(BgL_arg1365z00_1343);
																										BgL_bz00_1338 =
																											BgL_res1896z00_2122;
																								}}
																								if (
																									(BgL_az00_1337 >
																										BgL_bz00_1338))
																									{	/* Unsafe/bm.scm 257 */
																										BgL_incz00_1335 =
																											BgL_az00_1337;
																									}
																								else
																									{	/* Unsafe/bm.scm 257 */
																										BgL_incz00_1335 =
																											BgL_bz00_1338;
																									}
																							}
																							{
																								long BgL_iz00_2784;

																								BgL_iz00_2784 =
																									(BgL_iz00_1320 +
																									BgL_incz00_1335);
																								BgL_iz00_1320 = BgL_iz00_2784;
																								goto
																									BgL_zc3z04anonymousza31351ze3z87_1321;
																							}
																						}
																				}
																		}
																	}
																else
																	{	/* Unsafe/bm.scm 257 */
																		return ((long) -1);
									}}}}}}}
								else
									{	/* Unsafe/bm.scm 257 */
										return
											(long)
											CINT(BGl_errorz00zz__errorz00(BGl_string2032z00zz__bmz00,
												BGl_string2033z00zz__bmz00, BgL_tpz00_15));
							}}
						else
							{	/* Unsafe/bm.scm 257 */
								obj_t BgL_arg1373z00_1353;

								BgL_arg1373z00_1353 = CDR(BgL_tpz00_15);
								return
									(long)
									CINT(BGl_bigloozd2typezd2errorz00zz__errorz00
									(BGl_string2032z00zz__bmz00, BGl_symbol2034z00zz__bmz00,
										BgL_arg1373z00_1353));
					}}
				else
					{	/* Unsafe/bm.scm 257 */
						obj_t BgL_arg1375z00_1355;

						BgL_arg1375z00_1355 = CAR(BgL_tpz00_15);
						return
							(long)
							CINT(BGl_bigloozd2typezd2errorz00zz__errorz00
							(BGl_string2032z00zz__bmz00, BGl_symbol2034z00zz__bmz00,
								BgL_arg1375z00_1355));
		}}}

	}



/* &bm-string */
	obj_t BGl_z62bmzd2stringzb0zz__bmz00(obj_t BgL_envz00_2510,
		obj_t BgL_tpz00_2511, obj_t BgL_objz00_2512, obj_t BgL_mz00_2513)
	{
		{	/* Unsafe/bm.scm 256 */
			{	/* Unsafe/bm.scm 257 */
				long BgL_tmpz00_2794;

				{	/* Unsafe/bm.scm 257 */
					long BgL_auxz00_2809;
					obj_t BgL_auxz00_2802;
					obj_t BgL_auxz00_2795;

					{	/* Unsafe/bm.scm 257 */
						obj_t BgL_tmpz00_2810;

						if (INTEGERP(BgL_mz00_2513))
							{	/* Unsafe/bm.scm 257 */
								BgL_tmpz00_2810 = BgL_mz00_2513;
							}
						else
							{
								obj_t BgL_auxz00_2813;

								BgL_auxz00_2813 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2029z00zz__bmz00,
									BINT(((long) 11609)), BGl_string2040z00zz__bmz00,
									BGl_string2041z00zz__bmz00, BgL_mz00_2513);
								FAILURE(BgL_auxz00_2813, BFALSE, BFALSE);
							}
						BgL_auxz00_2809 = (long) CINT(BgL_tmpz00_2810);
					}
					if (STRINGP(BgL_objz00_2512))
						{	/* Unsafe/bm.scm 257 */
							BgL_auxz00_2802 = BgL_objz00_2512;
						}
					else
						{
							obj_t BgL_auxz00_2805;

							BgL_auxz00_2805 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2029z00zz__bmz00,
								BINT(((long) 11609)), BGl_string2040z00zz__bmz00,
								BGl_string2031z00zz__bmz00, BgL_objz00_2512);
							FAILURE(BgL_auxz00_2805, BFALSE, BFALSE);
						}
					if (EPAIRP(BgL_tpz00_2511))
						{	/* Unsafe/bm.scm 257 */
							BgL_auxz00_2795 = BgL_tpz00_2511;
						}
					else
						{
							obj_t BgL_auxz00_2798;

							BgL_auxz00_2798 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2029z00zz__bmz00,
								BINT(((long) 11609)), BGl_string2040z00zz__bmz00,
								BGl_string2037z00zz__bmz00, BgL_tpz00_2511);
							FAILURE(BgL_auxz00_2798, BFALSE, BFALSE);
						}
					BgL_tmpz00_2794 =
						BGl_bmzd2stringzd2zz__bmz00(BgL_auxz00_2795, BgL_auxz00_2802,
						BgL_auxz00_2809);
				}
				return BINT(BgL_tmpz00_2794);
			}
		}

	}



/* bmh-table */
	BGL_EXPORTED_DEF obj_t BGl_bmhzd2tablezd2zz__bmz00(obj_t BgL_patz00_18)
	{
		{	/* Unsafe/bm.scm 262 */
			{	/* Unsafe/bm.scm 263 */
				obj_t BgL_delta1z00_2131;

				{	/* Unsafe/bm.scm 263 */

					BgL_delta1z00_2131 =
						BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 256), (uint32_t) (0));
				}
				BGl_makezd2delta1zd2zz__bmz00(BgL_delta1z00_2131, BgL_patz00_18);
				return MAKE_YOUNG_PAIR(BgL_delta1z00_2131, BgL_patz00_18);
			}
		}

	}



/* &bmh-table */
	obj_t BGl_z62bmhzd2tablezb0zz__bmz00(obj_t BgL_envz00_2514,
		obj_t BgL_patz00_2515)
	{
		{	/* Unsafe/bm.scm 262 */
			{	/* Unsafe/bm.scm 263 */
				obj_t BgL_auxz00_2823;

				if (STRINGP(BgL_patz00_2515))
					{	/* Unsafe/bm.scm 263 */
						BgL_auxz00_2823 = BgL_patz00_2515;
					}
				else
					{
						obj_t BgL_auxz00_2826;

						BgL_auxz00_2826 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2029z00zz__bmz00,
							BINT(((long) 11921)), BGl_string2042z00zz__bmz00,
							BGl_string2031z00zz__bmz00, BgL_patz00_2515);
						FAILURE(BgL_auxz00_2826, BFALSE, BFALSE);
					}
				return BGl_bmhzd2tablezd2zz__bmz00(BgL_auxz00_2823);
			}
		}

	}



/* bmh-mmap */
	BGL_EXPORTED_DEF long BGl_bmhzd2mmapzd2zz__bmz00(obj_t BgL_tpz00_19,
		obj_t BgL_objz00_20, long BgL_mz00_21)
	{
		{	/* Unsafe/bm.scm 327 */
			{	/* Unsafe/bm.scm 328 */
				bool_t BgL_test2107z00_2831;

				{	/* Unsafe/bm.scm 328 */
					obj_t BgL_arg1407z00_1400;

					BgL_arg1407z00_1400 = CAR(BgL_tpz00_19);
					{	/* Unsafe/bm.scm 328 */
						bool_t BgL_res1899z00_2136;

						BgL_res1899z00_2136 = BGL_U32VECTORP(BgL_arg1407z00_1400);
						BgL_test2107z00_2831 = BgL_res1899z00_2136;
				}}
				if (BgL_test2107z00_2831)
					{	/* Unsafe/bm.scm 328 */
						bool_t BgL_test2108z00_2834;

						{	/* Unsafe/bm.scm 328 */
							obj_t BgL_tmpz00_2835;

							BgL_tmpz00_2835 = CDR(BgL_tpz00_19);
							BgL_test2108z00_2834 = STRINGP(BgL_tmpz00_2835);
						}
						if (BgL_test2108z00_2834)
							{	/* Unsafe/bm.scm 328 */
								obj_t BgL_patz00_1365;

								BgL_patz00_1365 = CDR(BgL_tpz00_19);
								{	/* Unsafe/bm.scm 328 */
									long BgL_patlenz00_1366;

									BgL_patlenz00_1366 = STRING_LENGTH(((obj_t) BgL_patz00_1365));
									{	/* Unsafe/bm.scm 328 */

										if ((BgL_patlenz00_1366 == ((long) 0)))
											{	/* Unsafe/bm.scm 328 */
												return (long) (((long) -1));
											}
										else
											{	/* Unsafe/bm.scm 328 */
												obj_t BgL_delta1z00_1368;
												long BgL_strlenz00_1369;

												BgL_delta1z00_1368 = CAR(BgL_tpz00_19);
												{	/* Unsafe/bm.scm 328 */
													long BgL_res1903z00_2146;

													BgL_res1903z00_2146 = BGL_MMAP_LENGTH(BgL_objz00_20);
													BgL_strlenz00_1369 = BgL_res1903z00_2146;
												}
												{
													long BgL_skipz00_1371;

													BgL_skipz00_1371 = ((long) 0);
												BgL_zc3z04anonymousza31383ze3z87_1372:
													{	/* Unsafe/bm.scm 328 */
														bool_t BgL_test2110z00_2846;

														{	/* Unsafe/bm.scm 328 */
															long BgL_tmpz00_2847;

															{	/* Unsafe/bm.scm 328 */
																long BgL_za71za7_2147;

																BgL_za71za7_2147 = (long) (BgL_strlenz00_1369);
																BgL_tmpz00_2847 =
																	(BgL_za71za7_2147 - BgL_skipz00_1371);
															}
															BgL_test2110z00_2846 =
																(BgL_tmpz00_2847 >= BgL_patlenz00_1366);
														}
														if (BgL_test2110z00_2846)
															{	/* Unsafe/bm.scm 328 */
																long BgL_g1064z00_1375;

																BgL_g1064z00_1375 =
																	(BgL_patlenz00_1366 - ((long) 1));
																{
																	long BgL_iz00_1377;

																	BgL_iz00_1377 = BgL_g1064z00_1375;
																BgL_zc3z04anonymousza31386ze3z87_1378:
																	{	/* Unsafe/bm.scm 328 */
																		bool_t BgL_test2111z00_2852;

																		{	/* Unsafe/bm.scm 328 */
																			unsigned char BgL_arg1400z00_1392;
																			unsigned char BgL_arg1401z00_1393;

																			{	/* Unsafe/bm.scm 328 */
																				long BgL_arg1402z00_1394;

																				BgL_arg1402z00_1394 =
																					(BgL_skipz00_1371 + BgL_iz00_1377);
																				{	/* Unsafe/bm.scm 328 */
																					unsigned char BgL_res1910z00_2168;

																					{	/* Unsafe/bm.scm 328 */
																						long BgL_iz00_2159;

																						BgL_iz00_2159 =
																							(long) (BgL_arg1402z00_1394);
																						{	/* Unsafe/bm.scm 328 */
																							unsigned char BgL_cz00_2160;

																							BgL_cz00_2160 =
																								BGL_MMAP_REF(BgL_objz00_20,
																								BgL_iz00_2159);
																							{	/* Unsafe/bm.scm 328 */
																								long BgL_arg1792z00_2161;

																								BgL_arg1792z00_2161 =
																									(BgL_iz00_2159 + ((long) 1));
																								{	/* Unsafe/bm.scm 328 */
																									long BgL_res1909z00_2167;

																									BGL_MMAP_RP_SET(BgL_objz00_20,
																										BgL_arg1792z00_2161);
																									BUNSPEC;
																									BgL_res1909z00_2167 =
																										BgL_arg1792z00_2161;
																									BgL_res1909z00_2167;
																							}}
																							BgL_res1910z00_2168 =
																								BgL_cz00_2160;
																					}}
																					BgL_arg1400z00_1392 =
																						BgL_res1910z00_2168;
																			}}
																			BgL_arg1401z00_1393 =
																				STRING_REF(
																				((obj_t) BgL_patz00_1365),
																				BgL_iz00_1377);
																			BgL_test2111z00_2852 =
																				(BgL_arg1400z00_1392 ==
																				BgL_arg1401z00_1393);
																		}
																		if (BgL_test2111z00_2852)
																			{	/* Unsafe/bm.scm 328 */
																				if ((BgL_iz00_1377 == ((long) 0)))
																					{	/* Unsafe/bm.scm 328 */
																						long BgL_res1914z00_2178;

																						BgL_res1914z00_2178 =
																							(long) (BgL_skipz00_1371);
																						return BgL_res1914z00_2178;
																					}
																				else
																					{
																						long BgL_iz00_2864;

																						BgL_iz00_2864 =
																							(BgL_iz00_1377 - ((long) 1));
																						BgL_iz00_1377 = BgL_iz00_2864;
																						goto
																							BgL_zc3z04anonymousza31386ze3z87_1378;
																					}
																			}
																		else
																			{	/* Unsafe/bm.scm 328 */
																				long BgL_arg1393z00_1385;

																				{	/* Unsafe/bm.scm 328 */
																					long BgL_arg1394z00_1386;

																					{	/* Unsafe/bm.scm 328 */
																						uint32_t BgL_arg1395z00_1387;

																						{	/* Unsafe/bm.scm 328 */
																							long BgL_arg1396z00_1388;

																							{	/* Unsafe/bm.scm 328 */
																								unsigned char
																									BgL_arg1397z00_1389;
																								{	/* Unsafe/bm.scm 328 */
																									long BgL_arg1398z00_1390;

																									BgL_arg1398z00_1390 =
																										(BgL_skipz00_1371 +
																										(BgL_patlenz00_1366 -
																											((long) 1)));
																									{	/* Unsafe/bm.scm 328 */
																										unsigned char
																											BgL_res1920z00_2196;
																										{	/* Unsafe/bm.scm 328 */
																											long BgL_iz00_2187;

																											BgL_iz00_2187 =
																												(long)
																												(BgL_arg1398z00_1390);
																											{	/* Unsafe/bm.scm 328 */
																												unsigned char
																													BgL_cz00_2188;
																												BgL_cz00_2188 =
																													BGL_MMAP_REF
																													(BgL_objz00_20,
																													BgL_iz00_2187);
																												{	/* Unsafe/bm.scm 328 */
																													long
																														BgL_arg1792z00_2189;
																													BgL_arg1792z00_2189 =
																														(BgL_iz00_2187 +
																														((long) 1));
																													{	/* Unsafe/bm.scm 328 */
																														long
																															BgL_res1919z00_2195;
																														BGL_MMAP_RP_SET
																															(BgL_objz00_20,
																															BgL_arg1792z00_2189);
																														BUNSPEC;
																														BgL_res1919z00_2195
																															=
																															BgL_arg1792z00_2189;
																														BgL_res1919z00_2195;
																												}}
																												BgL_res1920z00_2196 =
																													BgL_cz00_2188;
																										}}
																										BgL_arg1397z00_1389 =
																											BgL_res1920z00_2196;
																								}}
																								BgL_arg1396z00_1388 =
																									(BgL_arg1397z00_1389);
																							}
																							BgL_arg1395z00_1387 =
																								BGL_U32VREF(BgL_delta1z00_1368,
																								BgL_arg1396z00_1388);
																						}
																						{	/* Unsafe/bm.scm 328 */
																							long BgL_res1922z00_2200;

																							BgL_res1922z00_2200 =
																								(long) (BgL_arg1395z00_1387);
																							BgL_arg1394z00_1386 =
																								BgL_res1922z00_2200;
																					}}
																					BgL_arg1393z00_1385 =
																						(BgL_skipz00_1371 +
																						BgL_arg1394z00_1386);
																				}
																				{
																					long BgL_skipz00_2876;

																					BgL_skipz00_2876 =
																						BgL_arg1393z00_1385;
																					BgL_skipz00_1371 = BgL_skipz00_2876;
																					goto
																						BgL_zc3z04anonymousza31383ze3z87_1372;
																				}
																			}
																	}
																}
															}
														else
															{	/* Unsafe/bm.scm 328 */
																long BgL_res1924z00_2204;

																BgL_res1924z00_2204 = (long) (((long) -1));
																return BgL_res1924z00_2204;
															}
													}
												}
											}
									}
								}
							}
						else
							{	/* Unsafe/bm.scm 328 */
								obj_t BgL_tmpz00_2878;

								BgL_tmpz00_2878 =
									BGl_errorz00zz__errorz00(BGl_string2043z00zz__bmz00,
									BGl_string2044z00zz__bmz00, BgL_tpz00_19);
								return BELONG_TO_LONG(BgL_tmpz00_2878);
							}
					}
				else
					{	/* Unsafe/bm.scm 328 */
						obj_t BgL_arg1406z00_1399;

						BgL_arg1406z00_1399 = CAR(BgL_tpz00_19);
						{	/* Unsafe/bm.scm 328 */
							obj_t BgL_tmpz00_2882;

							BgL_tmpz00_2882 =
								BGl_bigloozd2typezd2errorz00zz__errorz00
								(BGl_string2043z00zz__bmz00, BGl_symbol2034z00zz__bmz00,
								BgL_arg1406z00_1399);
							return BELONG_TO_LONG(BgL_tmpz00_2882);
						}
					}
			}
		}

	}



/* &bmh-mmap */
	obj_t BGl_z62bmhzd2mmapzb0zz__bmz00(obj_t BgL_envz00_2516,
		obj_t BgL_tpz00_2517, obj_t BgL_objz00_2518, obj_t BgL_mz00_2519)
	{
		{	/* Unsafe/bm.scm 327 */
			{	/* Unsafe/bm.scm 328 */
				long BgL_tmpz00_2885;

				{	/* Unsafe/bm.scm 328 */
					long BgL_auxz00_2900;
					obj_t BgL_auxz00_2893;
					obj_t BgL_auxz00_2886;

					{	/* Unsafe/bm.scm 328 */
						obj_t BgL_tmpz00_2901;

						if (ELONGP(BgL_mz00_2519))
							{	/* Unsafe/bm.scm 328 */
								BgL_tmpz00_2901 = BgL_mz00_2519;
							}
						else
							{
								obj_t BgL_auxz00_2904;

								BgL_auxz00_2904 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2029z00zz__bmz00,
									BINT(((long) 14503)), BGl_string2045z00zz__bmz00,
									BGl_string2039z00zz__bmz00, BgL_mz00_2519);
								FAILURE(BgL_auxz00_2904, BFALSE, BFALSE);
							}
						BgL_auxz00_2900 = BELONG_TO_LONG(BgL_tmpz00_2901);
					}
					if (BGL_MMAPP(BgL_objz00_2518))
						{	/* Unsafe/bm.scm 328 */
							BgL_auxz00_2893 = BgL_objz00_2518;
						}
					else
						{
							obj_t BgL_auxz00_2896;

							BgL_auxz00_2896 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2029z00zz__bmz00,
								BINT(((long) 14503)), BGl_string2045z00zz__bmz00,
								BGl_string2038z00zz__bmz00, BgL_objz00_2518);
							FAILURE(BgL_auxz00_2896, BFALSE, BFALSE);
						}
					if (EPAIRP(BgL_tpz00_2517))
						{	/* Unsafe/bm.scm 328 */
							BgL_auxz00_2886 = BgL_tpz00_2517;
						}
					else
						{
							obj_t BgL_auxz00_2889;

							BgL_auxz00_2889 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2029z00zz__bmz00,
								BINT(((long) 14503)), BGl_string2045z00zz__bmz00,
								BGl_string2037z00zz__bmz00, BgL_tpz00_2517);
							FAILURE(BgL_auxz00_2889, BFALSE, BFALSE);
						}
					BgL_tmpz00_2885 =
						BGl_bmhzd2mmapzd2zz__bmz00(BgL_auxz00_2886, BgL_auxz00_2893,
						BgL_auxz00_2900);
				}
				return make_belong(BgL_tmpz00_2885);
			}
		}

	}



/* bmh-string */
	BGL_EXPORTED_DEF long BGl_bmhzd2stringzd2zz__bmz00(obj_t BgL_tpz00_22,
		obj_t BgL_objz00_23, long BgL_mz00_24)
	{
		{	/* Unsafe/bm.scm 333 */
			{	/* Unsafe/bm.scm 334 */
				bool_t BgL_test2116z00_2911;

				{	/* Unsafe/bm.scm 334 */
					obj_t BgL_arg1438z00_1442;

					BgL_arg1438z00_1442 = CAR(BgL_tpz00_22);
					{	/* Unsafe/bm.scm 334 */
						bool_t BgL_res1925z00_2207;

						BgL_res1925z00_2207 = BGL_U32VECTORP(BgL_arg1438z00_1442);
						BgL_test2116z00_2911 = BgL_res1925z00_2207;
				}}
				if (BgL_test2116z00_2911)
					{	/* Unsafe/bm.scm 334 */
						bool_t BgL_test2117z00_2914;

						{	/* Unsafe/bm.scm 334 */
							obj_t BgL_tmpz00_2915;

							BgL_tmpz00_2915 = CDR(BgL_tpz00_22);
							BgL_test2117z00_2914 = STRINGP(BgL_tmpz00_2915);
						}
						if (BgL_test2117z00_2914)
							{	/* Unsafe/bm.scm 334 */
								obj_t BgL_patz00_1405;

								BgL_patz00_1405 = CDR(BgL_tpz00_22);
								{	/* Unsafe/bm.scm 334 */
									long BgL_patlenz00_1406;

									BgL_patlenz00_1406 = STRING_LENGTH(((obj_t) BgL_patz00_1405));
									{	/* Unsafe/bm.scm 334 */

										if ((BgL_patlenz00_1406 == ((long) 0)))
											{	/* Unsafe/bm.scm 334 */
												return ((long) -1);
											}
										else
											{	/* Unsafe/bm.scm 334 */
												obj_t BgL_delta1z00_1408;
												long BgL_strlenz00_1409;

												BgL_delta1z00_1408 = CAR(BgL_tpz00_22);
												BgL_strlenz00_1409 = STRING_LENGTH(BgL_objz00_23);
												{
													long BgL_skipz00_1411;

													BgL_skipz00_1411 = ((long) 0);
												BgL_zc3z04anonymousza31414ze3z87_1412:
													if (
														((BgL_strlenz00_1409 - BgL_skipz00_1411) >=
															BgL_patlenz00_1406))
														{	/* Unsafe/bm.scm 334 */
															long BgL_g1065z00_1415;

															BgL_g1065z00_1415 =
																(BgL_patlenz00_1406 - ((long) 1));
															{
																long BgL_iz00_1417;

																BgL_iz00_1417 = BgL_g1065z00_1415;
															BgL_zc3z04anonymousza31417ze3z87_1418:
																if (
																	(STRING_REF(BgL_objz00_23,
																			(BgL_skipz00_1411 + BgL_iz00_1417)) ==
																		STRING_REF(
																			((obj_t) BgL_patz00_1405),
																			BgL_iz00_1417)))
																	{	/* Unsafe/bm.scm 334 */
																		if ((BgL_iz00_1417 == ((long) 0)))
																			{	/* Unsafe/bm.scm 334 */
																				return BgL_skipz00_1411;
																			}
																		else
																			{
																				long BgL_iz00_2937;

																				BgL_iz00_2937 =
																					(BgL_iz00_1417 - ((long) 1));
																				BgL_iz00_1417 = BgL_iz00_2937;
																				goto
																					BgL_zc3z04anonymousza31417ze3z87_1418;
																			}
																	}
																else
																	{	/* Unsafe/bm.scm 334 */
																		long BgL_arg1425z00_1426;

																		{	/* Unsafe/bm.scm 334 */
																			long BgL_arg1426z00_1427;

																			{	/* Unsafe/bm.scm 334 */
																				uint32_t BgL_arg1427z00_1428;

																				{	/* Unsafe/bm.scm 334 */
																					long BgL_tmpz00_2939;

																					BgL_tmpz00_2939 =
																						(STRING_REF(BgL_objz00_23,
																							(BgL_skipz00_1411 +
																								(BgL_patlenz00_1406 -
																									((long) 1)))));
																					BgL_arg1427z00_1428 =
																						BGL_U32VREF(BgL_delta1z00_1408,
																						BgL_tmpz00_2939);
																				}
																				{	/* Unsafe/bm.scm 334 */
																					long BgL_res1943z00_2253;

																					BgL_res1943z00_2253 =
																						(long) (BgL_arg1427z00_1428);
																					BgL_arg1426z00_1427 =
																						BgL_res1943z00_2253;
																			}}
																			BgL_arg1425z00_1426 =
																				(BgL_skipz00_1411 +
																				BgL_arg1426z00_1427);
																		}
																		{
																			long BgL_skipz00_2947;

																			BgL_skipz00_2947 = BgL_arg1425z00_1426;
																			BgL_skipz00_1411 = BgL_skipz00_2947;
																			goto
																				BgL_zc3z04anonymousza31414ze3z87_1412;
																		}
																	}
															}
														}
													else
														{	/* Unsafe/bm.scm 334 */
															return ((long) -1);
							}}}}}}
						else
							{	/* Unsafe/bm.scm 334 */
								return
									(long)
									CINT(BGl_errorz00zz__errorz00(BGl_string2043z00zz__bmz00,
										BGl_string2044z00zz__bmz00, BgL_tpz00_22));
					}}
				else
					{	/* Unsafe/bm.scm 334 */
						obj_t BgL_arg1437z00_1441;

						BgL_arg1437z00_1441 = CAR(BgL_tpz00_22);
						return
							(long)
							CINT(BGl_bigloozd2typezd2errorz00zz__errorz00
							(BGl_string2043z00zz__bmz00, BGl_symbol2034z00zz__bmz00,
								BgL_arg1437z00_1441));
		}}}

	}



/* &bmh-string */
	obj_t BGl_z62bmhzd2stringzb0zz__bmz00(obj_t BgL_envz00_2520,
		obj_t BgL_tpz00_2521, obj_t BgL_objz00_2522, obj_t BgL_mz00_2523)
	{
		{	/* Unsafe/bm.scm 333 */
			{	/* Unsafe/bm.scm 334 */
				long BgL_tmpz00_2953;

				{	/* Unsafe/bm.scm 334 */
					long BgL_auxz00_2968;
					obj_t BgL_auxz00_2961;
					obj_t BgL_auxz00_2954;

					{	/* Unsafe/bm.scm 334 */
						obj_t BgL_tmpz00_2969;

						if (INTEGERP(BgL_mz00_2523))
							{	/* Unsafe/bm.scm 334 */
								BgL_tmpz00_2969 = BgL_mz00_2523;
							}
						else
							{
								obj_t BgL_auxz00_2972;

								BgL_auxz00_2972 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2029z00zz__bmz00,
									BINT(((long) 14808)), BGl_string2046z00zz__bmz00,
									BGl_string2041z00zz__bmz00, BgL_mz00_2523);
								FAILURE(BgL_auxz00_2972, BFALSE, BFALSE);
							}
						BgL_auxz00_2968 = (long) CINT(BgL_tmpz00_2969);
					}
					if (STRINGP(BgL_objz00_2522))
						{	/* Unsafe/bm.scm 334 */
							BgL_auxz00_2961 = BgL_objz00_2522;
						}
					else
						{
							obj_t BgL_auxz00_2964;

							BgL_auxz00_2964 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2029z00zz__bmz00,
								BINT(((long) 14808)), BGl_string2046z00zz__bmz00,
								BGl_string2031z00zz__bmz00, BgL_objz00_2522);
							FAILURE(BgL_auxz00_2964, BFALSE, BFALSE);
						}
					if (EPAIRP(BgL_tpz00_2521))
						{	/* Unsafe/bm.scm 334 */
							BgL_auxz00_2954 = BgL_tpz00_2521;
						}
					else
						{
							obj_t BgL_auxz00_2957;

							BgL_auxz00_2957 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2029z00zz__bmz00,
								BINT(((long) 14808)), BGl_string2046z00zz__bmz00,
								BGl_string2037z00zz__bmz00, BgL_tpz00_2521);
							FAILURE(BgL_auxz00_2957, BFALSE, BFALSE);
						}
					BgL_tmpz00_2953 =
						BGl_bmhzd2stringzd2zz__bmz00(BgL_auxz00_2954, BgL_auxz00_2961,
						BgL_auxz00_2968);
				}
				return BINT(BgL_tmpz00_2953);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__bmz00()
	{
		{	/* Unsafe/bm.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__bmz00()
	{
		{	/* Unsafe/bm.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__bmz00()
	{
		{	/* Unsafe/bm.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__bmz00()
	{
		{	/* Unsafe/bm.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2047z00zz__bmz00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2047z00zz__bmz00));
		}

	}

#ifdef __cplusplus
}
#endif
