/*===========================================================================*/
/*   (Unsafe/rsa.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Unsafe/rsa.scm -indent -o objs/obj_u/Unsafe/rsa.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_gcdbxz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_modzd2inversezd2zz__rsaz00(obj_t, obj_t);
	extern obj_t BGl_u8vectorzd2ze3listz31zz__srfi4z00(obj_t);
	extern obj_t BGl_makezd2u8vectorzd2zz__srfi4z00(long, uint8_t);
	BGL_EXPORTED_DECL obj_t BGl_rsazd2encryptzd2stringz00zz__rsaz00(obj_t, obj_t);
	extern obj_t bgl_bignum_quotient(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__rsaz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_PKCS1zd2unpadzd2zz__rsaz00(obj_t);
	static obj_t BGl_u8vectorzd2appendzd2zz__rsaz00(obj_t, obj_t);
	static obj_t BGl_z62publiczd2rsazd2keyz62zz__rsaz00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_listzd2ze3u8vectorz31zz__srfi4z00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__rsaz00();
	static obj_t BGl_randomzd2primezd2zz__rsaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__rsaz00();
	extern long bgl_bignum_to_long(obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t bgl_bignum_remainder(obj_t, obj_t);
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__rsaz00();
	extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	extern obj_t bgl_bignum_mul(obj_t, obj_t);
	static obj_t BGl_list2207z00zz__rsaz00 = BUNSPEC;
	extern bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rsazd2decryptzd2stringz00zz__rsaz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_publiczd2rsazd2keyz00zz__rsaz00(obj_t);
	extern obj_t bgl_bignum_add(obj_t, obj_t);
	static obj_t BGl_list2224z00zz__rsaz00 = BUNSPEC;
	static obj_t BGl__makezd2rsazd2keyzd2pairzd2zz__rsaz00(obj_t, obj_t);
	extern bool_t bgl_bignum_even(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t bgl_rand_bignum(obj_t);
	static obj_t BGl_z62PKCS1zd2unpadzb0zz__rsaz00(obj_t, obj_t);
	static obj_t BGl_z62rsazd2keyzd3z63zz__rsaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__rsaz00();
	static obj_t BGl_z62rsazd2decryptzd2u8vectorz62zz__rsaz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rsazd2decryptzd2u8vectorz00zz__rsaz00(obj_t,
		obj_t);
	extern obj_t bgl_bignum_sub(obj_t, obj_t);
	extern obj_t BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	extern obj_t bgl_long_to_bignum(long);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_keyword2208z00zz__rsaz00 = BUNSPEC;
	static obj_t BGl_keyword2210z00zz__rsaz00 = BUNSPEC;
	extern long BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(long, long);
	static obj_t BGl_z62PKCS1zd2padzb0zz__rsaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_u8vectorzd2ze3bignumz31zz__rsaz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2rsazd2keyzd2pairzd2zz__rsaz00(obj_t,
		obj_t);
	static obj_t BGl_gcdzd2extzd2zz__rsaz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__rsaz00(long,
		char *);
	static obj_t BGl_z62rsazd2encryptzd2stringz62zz__rsaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_subu8vectorz00zz__rsaz00(obj_t, long, long);
	static obj_t BGl_symbol2204z00zz__rsaz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_rsazd2keyzd3z01zz__rsaz00(obj_t, obj_t);
	static obj_t BGl_symbol2212z00zz__rsaz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_PKCS1zd2padzd2zz__rsaz00(obj_t, obj_t);
	static obj_t BGl_symbol2219z00zz__rsaz00 = BUNSPEC;
	extern obj_t create_struct(obj_t, int);
	static obj_t BGl_cnstzd2initzd2zz__rsaz00();
	static obj_t BGl_exptzd2modze70z35zz__rsaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2221z00zz__rsaz00 = BUNSPEC;
	static obj_t BGl_symbol2225z00zz__rsaz00 = BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zz__rsaz00();
	static obj_t BGl_z62rsazd2encryptzd2u8vectorz62zz__rsaz00(obj_t, obj_t, obj_t,
		obj_t);
	extern bool_t bgl_bignum_odd(obj_t);
	static obj_t BGl_z62rsazd2decryptzd2stringz62zz__rsaz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rsazd2encryptzd2u8vectorz00zz__rsaz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_bignumzd2ze3u8vectorz31zz__rsaz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_privatezd2rsazd2keyz00zz__rsaz00(obj_t);
	static obj_t BGl_z62privatezd2rsazd2keyz62zz__rsaz00(obj_t, obj_t);
	extern obj_t bstring_to_keyword(obj_t);
	extern int bgl_bignum_cmp(obj_t, obj_t);
	extern bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2202z00zz__rsaz00,
		BgL_bgl_string2202za700za7za7_2231za7, ".", 1);
	      DEFINE_STRING(BGl_string2203z00zz__rsaz00,
		BgL_bgl_string2203za700za7za7_2232za7, "+", 1);
	      DEFINE_STRING(BGl_string2205z00zz__rsaz00,
		BgL_bgl_string2205za700za7za7_2233za7, "mod-inverse", 11);
	      DEFINE_STRING(BGl_string2206z00zz__rsaz00,
		BgL_bgl_string2206za700za7za7_2234za7,
		"internal error, numbers are not relatively prime", 48);
	      DEFINE_STRING(BGl_string2209z00zz__rsaz00,
		BgL_bgl_string2209za700za7za7_2235za7, "show-trace", 10);
	      DEFINE_STRING(BGl_string2211z00zz__rsaz00,
		BgL_bgl_string2211za700za7za7_2236za7, "size", 4);
	      DEFINE_STRING(BGl_string2213z00zz__rsaz00,
		BgL_bgl_string2213za700za7za7_2237za7, "make-rsa-key-pair", 17);
	      DEFINE_STRING(BGl_string2214z00zz__rsaz00,
		BgL_bgl_string2214za700za7za7_2238za7, "Illegal keyword argument", 24);
	      DEFINE_STRING(BGl_string2215z00zz__rsaz00,
		BgL_bgl_string2215za700za7za7_2239za7,
		"wrong number of arguments: [0..2] expected, provided", 52);
	      DEFINE_STRING(BGl_string2216z00zz__rsaz00,
		BgL_bgl_string2216za700za7za7_2240za7, "/tmp/4.4a/runtime/Unsafe/rsa.scm",
		32);
	      DEFINE_STRING(BGl_string2217z00zz__rsaz00,
		BgL_bgl_string2217za700za7za7_2241za7, "_make-rsa-key-pair", 18);
	      DEFINE_STRING(BGl_string2218z00zz__rsaz00,
		BgL_bgl_string2218za700za7za7_2242za7, "bint", 4);
	      DEFINE_STRING(BGl_string2220z00zz__rsaz00,
		BgL_bgl_string2220za700za7za7_2243za7, "rsa-key", 7);
	      DEFINE_STRING(BGl_string2222z00zz__rsaz00,
		BgL_bgl_string2222za700za7za7_2244za7, "PKCS1-pad", 9);
	      DEFINE_STRING(BGl_string2223z00zz__rsaz00,
		BgL_bgl_string2223za700za7za7_2245za7,
		"not enough space is available for proper padding", 48);
	      DEFINE_STRING(BGl_string2226z00zz__rsaz00,
		BgL_bgl_string2226za700za7za7_2246za7, "PKCS1-unpad", 11);
	      DEFINE_STRING(BGl_string2227z00zz__rsaz00,
		BgL_bgl_string2227za700za7za7_2247za7, "improperly padded message", 25);
	      DEFINE_STRING(BGl_string2228z00zz__rsaz00,
		BgL_bgl_string2228za700za7za7_2248za7, "&rsa-encrypt-string", 19);
	      DEFINE_STRING(BGl_string2229z00zz__rsaz00,
		BgL_bgl_string2229za700za7za7_2249za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2230z00zz__rsaz00,
		BgL_bgl_string2230za700za7za7_2250za7, "&rsa-decrypt-string", 19);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_PKCS1zd2padzd2envz00zz__rsaz00,
		BgL_bgl_za762pkcs1za7d2padza7b2251za7, BGl_z62PKCS1zd2padzb0zz__rsaz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_publiczd2rsazd2keyzd2envzd2zz__rsaz00,
		BgL_bgl_za762publicza7d2rsaza72252za7,
		BGl_z62publiczd2rsazd2keyz62zz__rsaz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_privatezd2rsazd2keyzd2envzd2zz__rsaz00,
		BgL_bgl_za762privateza7d2rsa2253z00,
		BGl_z62privatezd2rsazd2keyz62zz__rsaz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rsazd2encryptzd2u8vectorzd2envzd2zz__rsaz00,
		BgL_bgl_za762rsaza7d2encrypt2254z00,
		BGl_z62rsazd2encryptzd2u8vectorz62zz__rsaz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rsazd2decryptzd2stringzd2envzd2zz__rsaz00,
		BgL_bgl_za762rsaza7d2decrypt2255z00,
		BGl_z62rsazd2decryptzd2stringz62zz__rsaz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rsazd2encryptzd2stringzd2envzd2zz__rsaz00,
		BgL_bgl_za762rsaza7d2encrypt2256z00,
		BGl_z62rsazd2encryptzd2stringz62zz__rsaz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rsazd2keyzd2pairzd2envz00zz__rsaz00,
		BgL_bgl__makeza7d2rsaza7d2ke2257z00, opt_generic_entry,
		BGl__makezd2rsazd2keyzd2pairzd2zz__rsaz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rsazd2keyzd3zd2envzd3zz__rsaz00,
		BgL_bgl_za762rsaza7d2keyza7d3za72258z00, BGl_z62rsazd2keyzd3z63zz__rsaz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rsazd2decryptzd2u8vectorzd2envzd2zz__rsaz00,
		BgL_bgl_za762rsaza7d2decrypt2259z00,
		BGl_z62rsazd2decryptzd2u8vectorz62zz__rsaz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_PKCS1zd2unpadzd2envz00zz__rsaz00,
		BgL_bgl_za762pkcs1za7d2unpad2260z00, BGl_z62PKCS1zd2unpadzb0zz__rsaz00, 0L,
		BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__rsaz00));
		     ADD_ROOT((void *) (&BGl_list2207z00zz__rsaz00));
		     ADD_ROOT((void *) (&BGl_list2224z00zz__rsaz00));
		     ADD_ROOT((void *) (&BGl_keyword2208z00zz__rsaz00));
		     ADD_ROOT((void *) (&BGl_keyword2210z00zz__rsaz00));
		     ADD_ROOT((void *) (&BGl_symbol2204z00zz__rsaz00));
		     ADD_ROOT((void *) (&BGl_symbol2212z00zz__rsaz00));
		     ADD_ROOT((void *) (&BGl_symbol2219z00zz__rsaz00));
		     ADD_ROOT((void *) (&BGl_symbol2221z00zz__rsaz00));
		     ADD_ROOT((void *) (&BGl_symbol2225z00zz__rsaz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__rsaz00(long
		BgL_checksumz00_3361, char *BgL_fromz00_3362)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__rsaz00))
				{
					BGl_requirezd2initializa7ationz75zz__rsaz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__rsaz00();
					BGl_cnstzd2initzd2zz__rsaz00();
					return BGl_toplevelzd2initzd2zz__rsaz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__rsaz00()
	{
		{	/* Unsafe/rsa.scm 16 */
			BGl_symbol2204z00zz__rsaz00 =
				bstring_to_symbol(BGl_string2205z00zz__rsaz00);
			BGl_keyword2208z00zz__rsaz00 =
				bstring_to_keyword(BGl_string2209z00zz__rsaz00);
			BGl_keyword2210z00zz__rsaz00 =
				bstring_to_keyword(BGl_string2211z00zz__rsaz00);
			BGl_list2207z00zz__rsaz00 =
				MAKE_YOUNG_PAIR(BGl_keyword2208z00zz__rsaz00,
				MAKE_YOUNG_PAIR(BGl_keyword2210z00zz__rsaz00, BNIL));
			BGl_symbol2212z00zz__rsaz00 =
				bstring_to_symbol(BGl_string2213z00zz__rsaz00);
			BGl_symbol2219z00zz__rsaz00 =
				bstring_to_symbol(BGl_string2220z00zz__rsaz00);
			BGl_symbol2221z00zz__rsaz00 =
				bstring_to_symbol(BGl_string2222z00zz__rsaz00);
			BGl_list2224z00zz__rsaz00 = MAKE_YOUNG_PAIR(BINT(((long) 0)), BNIL);
			return (BGl_symbol2225z00zz__rsaz00 =
				bstring_to_symbol(BGl_string2226z00zz__rsaz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__rsaz00()
	{
		{	/* Unsafe/rsa.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__rsaz00()
	{
		{	/* Unsafe/rsa.scm 16 */
			return BUNSPEC;
		}

	}



/* random-prime */
	obj_t BGl_randomzd2primezd2zz__rsaz00(obj_t BgL_startz00_17,
		obj_t BgL_endz00_18, obj_t BgL_showzd2tracezd2_19)
	{
		{	/* Unsafe/rsa.scm 84 */
			{
				long BgL_nz00_1352;

				if (CBOOL(BgL_showzd2tracezd2_19))
					{	/* Unsafe/rsa.scm 96 */
						{	/* Unsafe/rsa.scm 97 */
							obj_t BgL_arg1250z00_1321;

							{	/* Unsafe/rsa.scm 97 */
								obj_t BgL_res1944z00_2321;

								{	/* Unsafe/rsa.scm 97 */
									obj_t BgL_tmpz00_3383;

									BgL_tmpz00_3383 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1944z00_2321 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_3383);
								}
								BgL_arg1250z00_1321 = BgL_res1944z00_2321;
							}
							bgl_display_string(BGl_string2202z00zz__rsaz00,
								BgL_arg1250z00_1321);
						}
						{	/* Unsafe/rsa.scm 98 */
							obj_t BgL_arg1252z00_1322;

							{	/* Unsafe/rsa.scm 98 */
								obj_t BgL_res1945z00_2325;

								{	/* Unsafe/rsa.scm 98 */
									obj_t BgL_tmpz00_3387;

									BgL_tmpz00_3387 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1945z00_2325 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_3387);
								}
								BgL_arg1252z00_1322 = BgL_res1945z00_2325;
							}
							bgl_flush_output_port(BgL_arg1252z00_1322);
						}
					}
				else
					{	/* Unsafe/rsa.scm 96 */
						BFALSE;
					}
				{	/* Unsafe/rsa.scm 100 */
					obj_t BgL_prodzd2smallzd2primesz00_1323;

					BgL_nz00_1352 = ((long) 300);
					{	/* Unsafe/rsa.scm 87 */
						long BgL_g1042z00_1354;

						BgL_g1042z00_1354 = (BgL_nz00_1352 - ((long) 1));
						{
							long BgL_nz00_2285;
							obj_t BgL_pz00_2286;
							long BgL_iz00_2287;

							BgL_nz00_2285 = BgL_g1042z00_1354;
							BgL_pz00_2286 = (bgl_string_to_bignum("2", 16));
							BgL_iz00_2287 = ((long) 3);
						BgL_loopz00_2284:
							if ((BgL_nz00_2285 == ((long) 0)))
								{	/* Unsafe/rsa.scm 89 */
									BgL_prodzd2smallzd2primesz00_1323 = BgL_pz00_2286;
								}
							else
								{	/* Unsafe/rsa.scm 91 */
									bool_t BgL_test2264z00_3394;

									{	/* Unsafe/rsa.scm 91 */
										obj_t BgL_arg1291z00_2292;

										{	/* Unsafe/rsa.scm 91 */
											obj_t BgL_arg1292z00_2293;

											BgL_arg1292z00_2293 = bgl_long_to_bignum(BgL_iz00_2287);
											{	/* Unsafe/rsa.scm 91 */
												obj_t BgL_list1293z00_2296;

												{	/* Unsafe/rsa.scm 91 */
													obj_t BgL_arg1295z00_2297;

													BgL_arg1295z00_2297 =
														MAKE_YOUNG_PAIR(BgL_pz00_2286, BNIL);
													BgL_list1293z00_2296 =
														MAKE_YOUNG_PAIR(BgL_arg1292z00_2293,
														BgL_arg1295z00_2297);
												}
												BgL_arg1291z00_2292 =
													BGl_gcdbxz00zz__r4_numbers_6_5_fixnumz00
													(BgL_list1293z00_2296);
											}
										}
										BgL_test2264z00_3394 =
											(
											(long) (bgl_bignum_cmp((bgl_string_to_bignum("1", 16)),
													BgL_arg1291z00_2292)) == ((long) 0));
									}
									if (BgL_test2264z00_3394)
										{
											long BgL_iz00_3407;
											obj_t BgL_pz00_3404;
											long BgL_nz00_3402;

											BgL_nz00_3402 = (BgL_nz00_2285 - ((long) 1));
											BgL_pz00_3404 =
												bgl_bignum_mul(BgL_pz00_2286,
												bgl_long_to_bignum(BgL_iz00_2287));
											BgL_iz00_3407 = (BgL_iz00_2287 + ((long) 2));
											BgL_iz00_2287 = BgL_iz00_3407;
											BgL_pz00_2286 = BgL_pz00_3404;
											BgL_nz00_2285 = BgL_nz00_3402;
											goto BgL_loopz00_2284;
										}
									else
										{
											long BgL_iz00_3409;

											BgL_iz00_3409 = (BgL_iz00_2287 + ((long) 2));
											BgL_iz00_2287 = BgL_iz00_3409;
											goto BgL_loopz00_2284;
										}
								}
						}
					}
					{
						obj_t BgL_nz00_1343;

						{
							long BgL_iz00_1326;

							BgL_iz00_1326 = ((long) 1);
						BgL_zc3z04anonymousza31253ze3z87_1327:
							if (CBOOL(BgL_showzd2tracezd2_19))
								{	/* Unsafe/rsa.scm 107 */
									{	/* Unsafe/rsa.scm 108 */
										obj_t BgL_arg1254z00_1328;

										{	/* Unsafe/rsa.scm 108 */
											obj_t BgL_res1953z00_2343;

											{	/* Unsafe/rsa.scm 108 */
												obj_t BgL_tmpz00_3413;

												BgL_tmpz00_3413 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res1953z00_2343 =
													BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_3413);
											}
											BgL_arg1254z00_1328 = BgL_res1953z00_2343;
										}
										bgl_display_string(BGl_string2203z00zz__rsaz00,
											BgL_arg1254z00_1328);
									}
									{	/* Unsafe/rsa.scm 109 */
										obj_t BgL_arg1256z00_1329;

										{	/* Unsafe/rsa.scm 109 */
											obj_t BgL_res1954z00_2347;

											{	/* Unsafe/rsa.scm 109 */
												obj_t BgL_tmpz00_3417;

												BgL_tmpz00_3417 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res1954z00_2347 =
													BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_3417);
											}
											BgL_arg1256z00_1329 = BgL_res1954z00_2347;
										}
										bgl_flush_output_port(BgL_arg1256z00_1329);
									}
								}
							else
								{	/* Unsafe/rsa.scm 107 */
									BFALSE;
								}
							{	/* Unsafe/rsa.scm 110 */
								obj_t BgL_xz00_1330;

								{	/* Unsafe/rsa.scm 110 */
									obj_t BgL_arg1268z00_1340;

									{	/* Unsafe/rsa.scm 110 */
										obj_t BgL_arg1270z00_1341;

										BgL_arg1270z00_1341 =
											bgl_bignum_sub(BgL_endz00_18, BgL_startz00_17);
										{	/* Unsafe/rsa.scm 110 */
											obj_t BgL_res1958z00_2360;

											if (
												((long) (bgl_bignum_cmp(BgL_arg1270z00_1341,
															(bgl_string_to_bignum("0", 16)))) == ((long) 0)))
												{	/* Unsafe/rsa.scm 110 */
													BgL_res1958z00_2360 = (bgl_string_to_bignum("0", 16));
												}
											else
												{	/* Unsafe/rsa.scm 110 */
													BgL_res1958z00_2360 =
														bgl_rand_bignum(BgL_arg1270z00_1341);
												}
											BgL_arg1268z00_1340 = BgL_res1958z00_2360;
										}
									}
									BgL_xz00_1330 =
										bgl_bignum_add(BgL_startz00_17, BgL_arg1268z00_1340);
								}
								{	/* Unsafe/rsa.scm 110 */
									obj_t BgL_nz00_1331;

									if (bgl_bignum_odd(BgL_xz00_1330))
										{	/* Unsafe/rsa.scm 111 */
											BgL_nz00_1331 = BgL_xz00_1330;
										}
									else
										{	/* Unsafe/rsa.scm 111 */
											BgL_nz00_1331 =
												bgl_bignum_add(BgL_xz00_1330, (bgl_string_to_bignum("1",
														16)));
										}
									{	/* Unsafe/rsa.scm 111 */

										{	/* Unsafe/rsa.scm 112 */
											bool_t BgL_test2268z00_3431;

											if (
												((long) (bgl_bignum_cmp(BgL_nz00_1331,
															BgL_endz00_18)) >= ((long) 0)))
												{	/* Unsafe/rsa.scm 112 */
													BgL_test2268z00_3431 = ((bool_t) 1);
												}
											else
												{	/* Unsafe/rsa.scm 112 */
													bool_t BgL_test2270z00_3436;

													BgL_nz00_1343 = BgL_nz00_1331;
													{	/* Unsafe/rsa.scm 103 */
														bool_t BgL_test2271z00_3437;

														{	/* Unsafe/rsa.scm 103 */
															obj_t BgL_arg1275z00_1348;

															{	/* Unsafe/rsa.scm 103 */
																obj_t BgL_list1276z00_1349;

																{	/* Unsafe/rsa.scm 103 */
																	obj_t BgL_arg1277z00_1350;

																	BgL_arg1277z00_1350 =
																		MAKE_YOUNG_PAIR
																		(BgL_prodzd2smallzd2primesz00_1323, BNIL);
																	BgL_list1276z00_1349 =
																		MAKE_YOUNG_PAIR(BgL_nz00_1343,
																		BgL_arg1277z00_1350);
																}
																BgL_arg1275z00_1348 =
																	BGl_gcdbxz00zz__r4_numbers_6_5_fixnumz00
																	(BgL_list1276z00_1349);
															}
															BgL_test2271z00_3437 =
																(
																(long) (bgl_bignum_cmp((bgl_string_to_bignum
																			("1", 16)),
																		BgL_arg1275z00_1348)) == ((long) 0));
														}
														if (BgL_test2271z00_3437)
															{	/* Unsafe/rsa.scm 103 */
																BgL_test2270z00_3436 =
																	(
																	(long) (bgl_bignum_cmp((bgl_string_to_bignum
																				("1", 16)),
																			BGl_exptzd2modze70z35zz__rsaz00(
																				(bgl_string_to_bignum("2", 16)),
																				bgl_bignum_sub(BgL_nz00_1343,
																					(bgl_string_to_bignum("1", 16))),
																				BgL_nz00_1343))) == ((long) 0));
															}
														else
															{	/* Unsafe/rsa.scm 103 */
																BgL_test2270z00_3436 = ((bool_t) 0);
															}
													}
													if (BgL_test2270z00_3436)
														{	/* Unsafe/rsa.scm 112 */
															BgL_test2268z00_3431 = ((bool_t) 0);
														}
													else
														{	/* Unsafe/rsa.scm 112 */
															BgL_test2268z00_3431 = ((bool_t) 1);
														}
												}
											if (BgL_test2268z00_3431)
												{
													long BgL_iz00_3449;

													BgL_iz00_3449 = (BgL_iz00_1326 + ((long) 1));
													BgL_iz00_1326 = BgL_iz00_3449;
													goto BgL_zc3z04anonymousza31253ze3z87_1327;
												}
											else
												{	/* Unsafe/rsa.scm 112 */
													return BgL_nz00_1331;
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



/* gcd-ext */
	obj_t BGl_gcdzd2extzd2zz__rsaz00(obj_t BgL_xz00_20, obj_t BgL_yz00_21)
	{
		{	/* Unsafe/rsa.scm 119 */
			{
				obj_t BgL_xz00_2441;
				obj_t BgL_yz00_2442;
				obj_t BgL_u1z00_2443;
				obj_t BgL_u2z00_2444;
				obj_t BgL_v1z00_2445;
				obj_t BgL_v2z00_2446;

				BgL_xz00_2441 = BgL_xz00_20;
				BgL_yz00_2442 = BgL_yz00_21;
				BgL_u1z00_2443 = (bgl_string_to_bignum("1", 16));
				BgL_u2z00_2444 = (bgl_string_to_bignum("0", 16));
				BgL_v1z00_2445 = (bgl_string_to_bignum("0", 16));
				BgL_v2z00_2446 = (bgl_string_to_bignum("1", 16));
			BgL_loopz00_2440:
				if (BXZERO(BgL_yz00_2442))
					{	/* Unsafe/rsa.scm 127 */
						obj_t BgL_list1298z00_2458;

						{	/* Unsafe/rsa.scm 127 */
							obj_t BgL_arg1299z00_2459;

							{	/* Unsafe/rsa.scm 127 */
								obj_t BgL_arg1300z00_2460;

								BgL_arg1300z00_2460 = MAKE_YOUNG_PAIR(BgL_v1z00_2445, BNIL);
								BgL_arg1299z00_2459 =
									MAKE_YOUNG_PAIR(BgL_u1z00_2443, BgL_arg1300z00_2460);
							}
							BgL_list1298z00_2458 =
								MAKE_YOUNG_PAIR(BgL_xz00_2441, BgL_arg1299z00_2459);
						}
						return BgL_list1298z00_2458;
					}
				else
					{	/* Unsafe/rsa.scm 128 */
						obj_t BgL_qz00_2461;
						obj_t BgL_rz00_2462;

						BgL_qz00_2461 = bgl_bignum_quotient(BgL_xz00_2441, BgL_yz00_2442);
						BgL_rz00_2462 = bgl_bignum_remainder(BgL_xz00_2441, BgL_yz00_2442);
						{
							obj_t BgL_v2z00_3465;
							obj_t BgL_v1z00_3464;
							obj_t BgL_u2z00_3461;
							obj_t BgL_u1z00_3460;
							obj_t BgL_yz00_3459;
							obj_t BgL_xz00_3458;

							BgL_xz00_3458 = BgL_yz00_2442;
							BgL_yz00_3459 = BgL_rz00_2462;
							BgL_u1z00_3460 = BgL_u2z00_2444;
							BgL_u2z00_3461 =
								bgl_bignum_sub(BgL_u1z00_2443,
								bgl_bignum_mul(BgL_qz00_2461, BgL_u2z00_2444));
							BgL_v1z00_3464 = BgL_v2z00_2446;
							BgL_v2z00_3465 =
								bgl_bignum_sub(BgL_v1z00_2445,
								bgl_bignum_mul(BgL_qz00_2461, BgL_v2z00_2446));
							BgL_v2z00_2446 = BgL_v2z00_3465;
							BgL_v1z00_2445 = BgL_v1z00_3464;
							BgL_u2z00_2444 = BgL_u2z00_3461;
							BgL_u1z00_2443 = BgL_u1z00_3460;
							BgL_yz00_2442 = BgL_yz00_3459;
							BgL_xz00_2441 = BgL_xz00_3458;
							goto BgL_loopz00_2440;
						}
					}
			}
		}

	}



/* mod-inverse */
	obj_t BGl_modzd2inversezd2zz__rsaz00(obj_t BgL_xz00_22, obj_t BgL_bz00_23)
	{
		{	/* Unsafe/rsa.scm 135 */
			{	/* Unsafe/rsa.scm 136 */
				obj_t BgL_x1z00_1396;

				BgL_x1z00_1396 =
					BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_22, BgL_bz00_23);
				{	/* Unsafe/rsa.scm 136 */
					obj_t BgL_gz00_1397;

					BgL_gz00_1397 =
						BGl_gcdzd2extzd2zz__rsaz00(BgL_x1z00_1396, BgL_bz00_23);
					{	/* Unsafe/rsa.scm 137 */

						{	/* Unsafe/rsa.scm 138 */
							bool_t BgL_test2273z00_3470;

							{	/* Unsafe/rsa.scm 138 */
								obj_t BgL_n1z00_2489;

								BgL_n1z00_2489 = CAR(((obj_t) BgL_gz00_1397));
								BgL_test2273z00_3470 =
									(
									(long) (bgl_bignum_cmp(BgL_n1z00_2489,
											(bgl_string_to_bignum("1", 16)))) == ((long) 0));
							}
							if (BgL_test2273z00_3470)
								{	/* Unsafe/rsa.scm 142 */
									obj_t BgL_auxz00_3476;

									{	/* Unsafe/rsa.scm 142 */
										obj_t BgL_pairz00_2498;

										BgL_pairz00_2498 = CDR(((obj_t) BgL_gz00_1397));
										BgL_auxz00_3476 = CAR(BgL_pairz00_2498);
									}
									return
										BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_3476,
										BgL_bz00_23);
								}
							else
								{	/* Unsafe/rsa.scm 141 */
									obj_t BgL_arg1309z00_1401;

									BgL_arg1309z00_1401 =
										MAKE_YOUNG_PAIR(BgL_xz00_22, BgL_bz00_23);
									return
										BGl_errorz00zz__errorz00(BGl_symbol2204z00zz__rsaz00,
										BGl_string2206z00zz__rsaz00, BgL_arg1309z00_1401);
								}
						}
					}
				}
			}
		}

	}



/* _make-rsa-key-pair */
	obj_t BGl__makezd2rsazd2keyzd2pairzd2zz__rsaz00(obj_t BgL_env1137z00_27,
		obj_t BgL_opt1136z00_26)
	{
		{	/* Unsafe/rsa.scm 147 */
			{	/* Unsafe/rsa.scm 147 */

				{	/* Unsafe/rsa.scm 147 */
					obj_t BgL_showzd2tracezd2_1407;

					BgL_showzd2tracezd2_1407 = BFALSE;
					{	/* Unsafe/rsa.scm 147 */
						obj_t BgL_siza7eza7_1408;

						BgL_siza7eza7_1408 = BINT(((long) 1024));
						{	/* Unsafe/rsa.scm 147 */

							{
								long BgL_iz00_1409;

								BgL_iz00_1409 = ((long) 0);
							BgL_check1140z00_1410:
								if ((BgL_iz00_1409 == VECTOR_LENGTH(BgL_opt1136z00_26)))
									{	/* Unsafe/rsa.scm 147 */
										BNIL;
									}
								else
									{	/* Unsafe/rsa.scm 147 */
										bool_t BgL_test2275z00_3487;

										{	/* Unsafe/rsa.scm 147 */
											obj_t BgL_arg1316z00_1416;

											BgL_arg1316z00_1416 =
												VECTOR_REF(BgL_opt1136z00_26, BgL_iz00_1409);
											BgL_test2275z00_3487 =
												CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
												(BgL_arg1316z00_1416, BGl_list2207z00zz__rsaz00));
										}
										if (BgL_test2275z00_3487)
											{
												long BgL_iz00_3491;

												BgL_iz00_3491 = (BgL_iz00_1409 + ((long) 2));
												BgL_iz00_1409 = BgL_iz00_3491;
												goto BgL_check1140z00_1410;
											}
										else
											{	/* Unsafe/rsa.scm 147 */
												obj_t BgL_arg1315z00_1415;

												BgL_arg1315z00_1415 =
													VECTOR_REF(BgL_opt1136z00_26, BgL_iz00_1409);
												BGl_errorz00zz__errorz00(BGl_symbol2212z00zz__rsaz00,
													BGl_string2214z00zz__rsaz00, BgL_arg1315z00_1415);
											}
									}
							}
							{	/* Unsafe/rsa.scm 147 */
								obj_t BgL_index1142z00_1417;

								{
									long BgL_iz00_2522;

									BgL_iz00_2522 = ((long) 0);
								BgL_search1139z00_2521:
									if ((BgL_iz00_2522 == VECTOR_LENGTH(BgL_opt1136z00_26)))
										{	/* Unsafe/rsa.scm 147 */
											BgL_index1142z00_1417 = BINT(((long) -1));
										}
									else
										{	/* Unsafe/rsa.scm 147 */
											if (
												(BgL_iz00_2522 ==
													(VECTOR_LENGTH(BgL_opt1136z00_26) - ((long) 1))))
												{	/* Unsafe/rsa.scm 147 */
													BgL_index1142z00_1417 =
														BGl_errorz00zz__errorz00
														(BGl_symbol2212z00zz__rsaz00,
														BGl_string2215z00zz__rsaz00,
														BINT(VECTOR_LENGTH(BgL_opt1136z00_26)));
												}
											else
												{	/* Unsafe/rsa.scm 147 */
													obj_t BgL_vz00_2535;

													BgL_vz00_2535 =
														VECTOR_REF(BgL_opt1136z00_26, BgL_iz00_2522);
													if ((BgL_vz00_2535 == BGl_keyword2208z00zz__rsaz00))
														{	/* Unsafe/rsa.scm 147 */
															BgL_index1142z00_1417 =
																BINT((BgL_iz00_2522 + ((long) 1)));
														}
													else
														{
															long BgL_iz00_3511;

															BgL_iz00_3511 = (BgL_iz00_2522 + ((long) 2));
															BgL_iz00_2522 = BgL_iz00_3511;
															goto BgL_search1139z00_2521;
														}
												}
										}
								}
								{	/* Unsafe/rsa.scm 147 */
									bool_t BgL_test2279z00_3513;

									{	/* Unsafe/rsa.scm 147 */
										long BgL_n1z00_2542;

										{	/* Unsafe/rsa.scm 147 */
											obj_t BgL_tmpz00_3514;

											if (INTEGERP(BgL_index1142z00_1417))
												{	/* Unsafe/rsa.scm 147 */
													BgL_tmpz00_3514 = BgL_index1142z00_1417;
												}
											else
												{
													obj_t BgL_auxz00_3517;

													BgL_auxz00_3517 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2216z00zz__rsaz00, BINT(((long) 5113)),
														BGl_string2217z00zz__rsaz00,
														BGl_string2218z00zz__rsaz00, BgL_index1142z00_1417);
													FAILURE(BgL_auxz00_3517, BFALSE, BFALSE);
												}
											BgL_n1z00_2542 = (long) CINT(BgL_tmpz00_3514);
										}
										BgL_test2279z00_3513 = (BgL_n1z00_2542 >= ((long) 0));
									}
									if (BgL_test2279z00_3513)
										{
											long BgL_auxz00_3523;

											{	/* Unsafe/rsa.scm 147 */
												obj_t BgL_tmpz00_3524;

												if (INTEGERP(BgL_index1142z00_1417))
													{	/* Unsafe/rsa.scm 147 */
														BgL_tmpz00_3524 = BgL_index1142z00_1417;
													}
												else
													{
														obj_t BgL_auxz00_3527;

														BgL_auxz00_3527 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2216z00zz__rsaz00, BINT(((long) 5113)),
															BGl_string2217z00zz__rsaz00,
															BGl_string2218z00zz__rsaz00,
															BgL_index1142z00_1417);
														FAILURE(BgL_auxz00_3527, BFALSE, BFALSE);
													}
												BgL_auxz00_3523 = (long) CINT(BgL_tmpz00_3524);
											}
											BgL_showzd2tracezd2_1407 =
												VECTOR_REF(BgL_opt1136z00_26, BgL_auxz00_3523);
										}
									else
										{	/* Unsafe/rsa.scm 147 */
											BFALSE;
										}
								}
							}
							{	/* Unsafe/rsa.scm 147 */
								obj_t BgL_index1143z00_1419;

								{
									long BgL_iz00_2545;

									BgL_iz00_2545 = ((long) 0);
								BgL_search1139z00_2544:
									if ((BgL_iz00_2545 == VECTOR_LENGTH(BgL_opt1136z00_26)))
										{	/* Unsafe/rsa.scm 147 */
											BgL_index1143z00_1419 = BINT(((long) -1));
										}
									else
										{	/* Unsafe/rsa.scm 147 */
											if (
												(BgL_iz00_2545 ==
													(VECTOR_LENGTH(BgL_opt1136z00_26) - ((long) 1))))
												{	/* Unsafe/rsa.scm 147 */
													BgL_index1143z00_1419 =
														BGl_errorz00zz__errorz00
														(BGl_symbol2212z00zz__rsaz00,
														BGl_string2215z00zz__rsaz00,
														BINT(VECTOR_LENGTH(BgL_opt1136z00_26)));
												}
											else
												{	/* Unsafe/rsa.scm 147 */
													obj_t BgL_vz00_2558;

													BgL_vz00_2558 =
														VECTOR_REF(BgL_opt1136z00_26, BgL_iz00_2545);
													if ((BgL_vz00_2558 == BGl_keyword2210z00zz__rsaz00))
														{	/* Unsafe/rsa.scm 147 */
															BgL_index1143z00_1419 =
																BINT((BgL_iz00_2545 + ((long) 1)));
														}
													else
														{
															long BgL_iz00_3549;

															BgL_iz00_3549 = (BgL_iz00_2545 + ((long) 2));
															BgL_iz00_2545 = BgL_iz00_3549;
															goto BgL_search1139z00_2544;
														}
												}
										}
								}
								{	/* Unsafe/rsa.scm 147 */
									bool_t BgL_test2285z00_3551;

									{	/* Unsafe/rsa.scm 147 */
										long BgL_n1z00_2565;

										{	/* Unsafe/rsa.scm 147 */
											obj_t BgL_tmpz00_3552;

											if (INTEGERP(BgL_index1143z00_1419))
												{	/* Unsafe/rsa.scm 147 */
													BgL_tmpz00_3552 = BgL_index1143z00_1419;
												}
											else
												{
													obj_t BgL_auxz00_3555;

													BgL_auxz00_3555 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2216z00zz__rsaz00, BINT(((long) 5113)),
														BGl_string2217z00zz__rsaz00,
														BGl_string2218z00zz__rsaz00, BgL_index1143z00_1419);
													FAILURE(BgL_auxz00_3555, BFALSE, BFALSE);
												}
											BgL_n1z00_2565 = (long) CINT(BgL_tmpz00_3552);
										}
										BgL_test2285z00_3551 = (BgL_n1z00_2565 >= ((long) 0));
									}
									if (BgL_test2285z00_3551)
										{
											long BgL_auxz00_3561;

											{	/* Unsafe/rsa.scm 147 */
												obj_t BgL_tmpz00_3562;

												if (INTEGERP(BgL_index1143z00_1419))
													{	/* Unsafe/rsa.scm 147 */
														BgL_tmpz00_3562 = BgL_index1143z00_1419;
													}
												else
													{
														obj_t BgL_auxz00_3565;

														BgL_auxz00_3565 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2216z00zz__rsaz00, BINT(((long) 5113)),
															BGl_string2217z00zz__rsaz00,
															BGl_string2218z00zz__rsaz00,
															BgL_index1143z00_1419);
														FAILURE(BgL_auxz00_3565, BFALSE, BFALSE);
													}
												BgL_auxz00_3561 = (long) CINT(BgL_tmpz00_3562);
											}
											BgL_siza7eza7_1408 =
												VECTOR_REF(BgL_opt1136z00_26, BgL_auxz00_3561);
										}
									else
										{	/* Unsafe/rsa.scm 147 */
											BFALSE;
										}
								}
							}
							{	/* Unsafe/rsa.scm 147 */
								obj_t BgL_showzd2tracezd2_1421;

								BgL_showzd2tracezd2_1421 = BgL_showzd2tracezd2_1407;
								return
									BGl_makezd2rsazd2keyzd2pairzd2zz__rsaz00
									(BgL_showzd2tracezd2_1421, BgL_siza7eza7_1408);
							}
						}
					}
				}
			}
		}

	}



/* make-rsa-key-pair */
	BGL_EXPORTED_DEF obj_t BGl_makezd2rsazd2keyzd2pairzd2zz__rsaz00(obj_t
		BgL_showzd2tracezd2_24, obj_t BgL_siza7eza7_25)
	{
		{	/* Unsafe/rsa.scm 147 */
			{	/* Unsafe/rsa.scm 148 */
				long BgL_siza7ezd2pz75_1431;

				{	/* Unsafe/rsa.scm 148 */
					long BgL_res2003z00_2568;

					{	/* Unsafe/rsa.scm 148 */
						long BgL_tmpz00_3572;

						BgL_tmpz00_3572 = (long) CINT(BgL_siza7eza7_25);
						BgL_res2003z00_2568 = (BgL_tmpz00_3572 / ((long) 2));
					}
					BgL_siza7ezd2pz75_1431 = BgL_res2003z00_2568;
				}
				{	/* Unsafe/rsa.scm 148 */
					obj_t BgL_startzd2pzd2_1432;

					BgL_startzd2pzd2_1432 =
						BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00((bgl_string_to_bignum("2",
								16)), bgl_long_to_bignum(BgL_siza7ezd2pz75_1431));
					{	/* Unsafe/rsa.scm 149 */
						obj_t BgL_endzd2pzd2_1433;

						BgL_endzd2pzd2_1433 =
							bgl_bignum_mul(BgL_startzd2pzd2_1432, (bgl_string_to_bignum("2",
									16)));
						{	/* Unsafe/rsa.scm 150 */
							obj_t BgL_pz00_1434;

							BgL_pz00_1434 =
								BGl_randomzd2primezd2zz__rsaz00(BgL_startzd2pzd2_1432,
								BgL_endzd2pzd2_1433, BgL_showzd2tracezd2_24);
							{	/* Unsafe/rsa.scm 151 */
								obj_t BgL_startzd2nzd2_1435;

								BgL_startzd2nzd2_1435 =
									BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(
									(bgl_string_to_bignum("2", 16)),
									bgl_long_to_bignum((long) CINT(BgL_siza7eza7_25)));
								{	/* Unsafe/rsa.scm 152 */
									obj_t BgL_endzd2nzd2_1436;

									BgL_endzd2nzd2_1436 =
										bgl_bignum_mul(BgL_startzd2nzd2_1435,
										(bgl_string_to_bignum("2", 16)));
									{	/* Unsafe/rsa.scm 153 */
										obj_t BgL_startzd2qzd2_1437;

										BgL_startzd2qzd2_1437 =
											bgl_bignum_add(bgl_bignum_quotient(bgl_bignum_sub
												(BgL_startzd2nzd2_1435, (bgl_string_to_bignum("1",
															16))), BgL_pz00_1434), (bgl_string_to_bignum("1",
													16)));
										{	/* Unsafe/rsa.scm 154 */
											obj_t BgL_endzd2qzd2_1438;

											BgL_endzd2qzd2_1438 =
												bgl_bignum_quotient(BgL_endzd2nzd2_1436, BgL_pz00_1434);
											{	/* Unsafe/rsa.scm 155 */

												{

												BgL_zc3z04anonymousza31328ze3z87_1440:
													{	/* Unsafe/rsa.scm 157 */
														obj_t BgL_qz00_1441;

														BgL_qz00_1441 =
															BGl_randomzd2primezd2zz__rsaz00
															(BgL_startzd2qzd2_1437, BgL_endzd2qzd2_1438,
															BgL_showzd2tracezd2_24);
														{	/* Unsafe/rsa.scm 158 */
															bool_t BgL_test2288z00_3588;

															{	/* Unsafe/rsa.scm 158 */
																obj_t BgL_arg1350z00_1471;

																{	/* Unsafe/rsa.scm 158 */
																	obj_t BgL_list1351z00_1472;

																	{	/* Unsafe/rsa.scm 158 */
																		obj_t BgL_arg1352z00_1473;

																		BgL_arg1352z00_1473 =
																			MAKE_YOUNG_PAIR(BgL_qz00_1441, BNIL);
																		BgL_list1351z00_1472 =
																			MAKE_YOUNG_PAIR(BgL_pz00_1434,
																			BgL_arg1352z00_1473);
																	}
																	BgL_arg1350z00_1471 =
																		BGl_gcdbxz00zz__r4_numbers_6_5_fixnumz00
																		(BgL_list1351z00_1472);
																}
																BgL_test2288z00_3588 =
																	(
																	(long) (bgl_bignum_cmp(BgL_arg1350z00_1471,
																			(bgl_string_to_bignum("1",
																					16)))) == ((long) 0));
															}
															if (BgL_test2288z00_3588)
																{	/* Unsafe/rsa.scm 160 */
																	obj_t BgL_nz00_1446;

																	BgL_nz00_1446 =
																		bgl_bignum_mul(BgL_pz00_1434,
																		BgL_qz00_1441);
																	{	/* Unsafe/rsa.scm 160 */
																		obj_t BgL_pzd21zd2_1447;

																		BgL_pzd21zd2_1447 =
																			bgl_bignum_sub(BgL_pz00_1434,
																			(bgl_string_to_bignum("1", 16)));
																		{	/* Unsafe/rsa.scm 161 */
																			obj_t BgL_qzd21zd2_1448;

																			BgL_qzd21zd2_1448 =
																				bgl_bignum_sub(BgL_qz00_1441,
																				(bgl_string_to_bignum("1", 16)));
																			{	/* Unsafe/rsa.scm 162 */
																				obj_t BgL_phiz00_1449;

																				{	/* Unsafe/rsa.scm 163 */
																					obj_t BgL_arg1345z00_1467;
																					obj_t BgL_arg1346z00_1468;

																					BgL_arg1345z00_1467 =
																						bgl_bignum_mul(BgL_pzd21zd2_1447,
																						BgL_qzd21zd2_1448);
																					{	/* Unsafe/rsa.scm 163 */
																						obj_t BgL_list1347z00_1469;

																						{	/* Unsafe/rsa.scm 163 */
																							obj_t BgL_arg1348z00_1470;

																							BgL_arg1348z00_1470 =
																								MAKE_YOUNG_PAIR
																								(BgL_qzd21zd2_1448, BNIL);
																							BgL_list1347z00_1469 =
																								MAKE_YOUNG_PAIR
																								(BgL_pzd21zd2_1447,
																								BgL_arg1348z00_1470);
																						}
																						BgL_arg1346z00_1468 =
																							BGl_gcdbxz00zz__r4_numbers_6_5_fixnumz00
																							(BgL_list1347z00_1469);
																					}
																					BgL_phiz00_1449 =
																						bgl_bignum_quotient
																						(BgL_arg1345z00_1467,
																						BgL_arg1346z00_1468);
																				}
																				{	/* Unsafe/rsa.scm 163 */
																					obj_t BgL_ez00_1450;

																					{
																						obj_t BgL_ez00_2622;

																						BgL_ez00_2622 =
																							(bgl_string_to_bignum("10001",
																								16));
																					BgL_loopz00_2621:
																						{	/* Unsafe/rsa.scm 165 */
																							bool_t BgL_test2289z00_3603;

																							{	/* Unsafe/rsa.scm 165 */
																								obj_t BgL_arg1342z00_2624;

																								{	/* Unsafe/rsa.scm 165 */
																									obj_t BgL_list1343z00_2625;

																									{	/* Unsafe/rsa.scm 165 */
																										obj_t BgL_arg1344z00_2626;

																										BgL_arg1344z00_2626 =
																											MAKE_YOUNG_PAIR
																											(BgL_phiz00_1449, BNIL);
																										BgL_list1343z00_2625 =
																											MAKE_YOUNG_PAIR
																											(BgL_ez00_2622,
																											BgL_arg1344z00_2626);
																									}
																									BgL_arg1342z00_2624 =
																										BGl_gcdbxz00zz__r4_numbers_6_5_fixnumz00
																										(BgL_list1343z00_2625);
																								}
																								BgL_test2289z00_3603 =
																									(
																									(long) (bgl_bignum_cmp(
																											(bgl_string_to_bignum("1",
																													16)),
																											BgL_arg1342z00_2624)) ==
																									((long) 0));
																							}
																							if (BgL_test2289z00_3603)
																								{	/* Unsafe/rsa.scm 165 */
																									BgL_ez00_1450 = BgL_ez00_2622;
																								}
																							else
																								{
																									obj_t BgL_ez00_3610;

																									BgL_ez00_3610 =
																										bgl_bignum_add
																										(BgL_ez00_2622,
																										(bgl_string_to_bignum("2",
																												16)));
																									BgL_ez00_2622 = BgL_ez00_3610;
																									goto BgL_loopz00_2621;
																								}
																						}
																					}
																					{	/* Unsafe/rsa.scm 164 */
																						obj_t BgL_dz00_1451;

																						BgL_dz00_1451 =
																							BGl_modzd2inversezd2zz__rsaz00
																							(BgL_ez00_1450, BgL_phiz00_1449);
																						{	/* Unsafe/rsa.scm 168 */

																							if (CBOOL(BgL_showzd2tracezd2_24))
																								{	/* Unsafe/rsa.scm 169 */
																									obj_t BgL_arg1333z00_1452;

																									{	/* Unsafe/rsa.scm 169 */
																										obj_t BgL_res2022z00_2638;

																										{	/* Unsafe/rsa.scm 169 */
																											obj_t BgL_tmpz00_3615;

																											BgL_tmpz00_3615 =
																												BGL_CURRENT_DYNAMIC_ENV
																												();
																											BgL_res2022z00_2638 =
																												BGL_ENV_CURRENT_OUTPUT_PORT
																												(BgL_tmpz00_3615);
																										}
																										BgL_arg1333z00_1452 =
																											BgL_res2022z00_2638;
																									}
																									bgl_display_char(((unsigned
																												char) 10),
																										BgL_arg1333z00_1452);
																								}
																							else
																								{	/* Unsafe/rsa.scm 169 */
																									BFALSE;
																								}
																							{	/* Unsafe/rsa.scm 171 */
																								obj_t BgL_arg1334z00_1453;
																								obj_t BgL_arg1335z00_1454;

																								{	/* Unsafe/rsa.scm 79 */
																									obj_t BgL_newz00_2640;

																									BgL_newz00_2640 =
																										create_struct
																										(BGl_symbol2219z00zz__rsaz00,
																										(int) (((long) 3)));
																									{	/* Unsafe/rsa.scm 79 */
																										int BgL_tmpz00_3621;

																										BgL_tmpz00_3621 =
																											(int) (((long) 2));
																										STRUCT_SET(BgL_newz00_2640,
																											BgL_tmpz00_3621,
																											BgL_ez00_1450);
																									}
																									{	/* Unsafe/rsa.scm 79 */
																										int BgL_tmpz00_3624;

																										BgL_tmpz00_3624 =
																											(int) (((long) 1));
																										STRUCT_SET(BgL_newz00_2640,
																											BgL_tmpz00_3624,
																											BgL_nz00_1446);
																									}
																									{	/* Unsafe/rsa.scm 79 */
																										int BgL_tmpz00_3627;

																										BgL_tmpz00_3627 =
																											(int) (((long) 0));
																										STRUCT_SET(BgL_newz00_2640,
																											BgL_tmpz00_3627,
																											BgL_siza7eza7_25);
																									}
																									BgL_arg1334z00_1453 =
																										BgL_newz00_2640;
																								}
																								{	/* Unsafe/rsa.scm 79 */
																									obj_t BgL_newz00_2644;

																									BgL_newz00_2644 =
																										create_struct
																										(BGl_symbol2219z00zz__rsaz00,
																										(int) (((long) 3)));
																									{	/* Unsafe/rsa.scm 79 */
																										int BgL_tmpz00_3632;

																										BgL_tmpz00_3632 =
																											(int) (((long) 2));
																										STRUCT_SET(BgL_newz00_2644,
																											BgL_tmpz00_3632,
																											BgL_dz00_1451);
																									}
																									{	/* Unsafe/rsa.scm 79 */
																										int BgL_tmpz00_3635;

																										BgL_tmpz00_3635 =
																											(int) (((long) 1));
																										STRUCT_SET(BgL_newz00_2644,
																											BgL_tmpz00_3635,
																											BgL_nz00_1446);
																									}
																									{	/* Unsafe/rsa.scm 79 */
																										int BgL_tmpz00_3638;

																										BgL_tmpz00_3638 =
																											(int) (((long) 0));
																										STRUCT_SET(BgL_newz00_2644,
																											BgL_tmpz00_3638,
																											BgL_siza7eza7_25);
																									}
																									BgL_arg1335z00_1454 =
																										BgL_newz00_2644;
																								}
																								return
																									MAKE_YOUNG_PAIR
																									(BgL_arg1334z00_1453,
																									BgL_arg1335z00_1454);
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															else
																{	/* Unsafe/rsa.scm 158 */
																	goto BgL_zc3z04anonymousza31328ze3z87_1440;
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



/* public-rsa-key */
	BGL_EXPORTED_DEF obj_t BGl_publiczd2rsazd2keyz00zz__rsaz00(obj_t
		BgL_rsazd2keyzd2pairz00_28)
	{
		{	/* Unsafe/rsa.scm 177 */
			return CAR(((obj_t) BgL_rsazd2keyzd2pairz00_28));
		}

	}



/* &public-rsa-key */
	obj_t BGl_z62publiczd2rsazd2keyz62zz__rsaz00(obj_t BgL_envz00_3309,
		obj_t BgL_rsazd2keyzd2pairz00_3310)
	{
		{	/* Unsafe/rsa.scm 177 */
			return BGl_publiczd2rsazd2keyz00zz__rsaz00(BgL_rsazd2keyzd2pairz00_3310);
		}

	}



/* private-rsa-key */
	BGL_EXPORTED_DEF obj_t BGl_privatezd2rsazd2keyz00zz__rsaz00(obj_t
		BgL_rsazd2keyzd2pairz00_29)
	{
		{	/* Unsafe/rsa.scm 183 */
			return CDR(((obj_t) BgL_rsazd2keyzd2pairz00_29));
		}

	}



/* &private-rsa-key */
	obj_t BGl_z62privatezd2rsazd2keyz62zz__rsaz00(obj_t BgL_envz00_3311,
		obj_t BgL_rsazd2keyzd2pairz00_3312)
	{
		{	/* Unsafe/rsa.scm 183 */
			return BGl_privatezd2rsazd2keyz00zz__rsaz00(BgL_rsazd2keyzd2pairz00_3312);
		}

	}



/* rsa-key= */
	BGL_EXPORTED_DEF obj_t BGl_rsazd2keyzd3z01zz__rsaz00(obj_t
		BgL_rsazd2key1zd2_30, obj_t BgL_rsazd2key2zd2_31)
	{
		{	/* Unsafe/rsa.scm 189 */
			if (
				((long) CINT(STRUCT_REF(
							((obj_t) BgL_rsazd2key1zd2_30),
							(int) (((long) 0)))) ==
					(long) CINT(STRUCT_REF(
							((obj_t) BgL_rsazd2key2zd2_31), (int) (((long) 0))))))
				{	/* Unsafe/rsa.scm 191 */
					bool_t BgL_test2292z00_3658;

					{	/* Unsafe/rsa.scm 191 */
						obj_t BgL_n1z00_2657;
						obj_t BgL_n2z00_2658;

						BgL_n1z00_2657 =
							STRUCT_REF(((obj_t) BgL_rsazd2key1zd2_30), (int) (((long) 1)));
						BgL_n2z00_2658 =
							STRUCT_REF(((obj_t) BgL_rsazd2key2zd2_31), (int) (((long) 1)));
						BgL_test2292z00_3658 =
							(
							(long) (bgl_bignum_cmp(BgL_n1z00_2657,
									BgL_n2z00_2658)) == ((long) 0));
					}
					if (BgL_test2292z00_3658)
						{	/* Unsafe/rsa.scm 192 */
							obj_t BgL_n1z00_2665;
							obj_t BgL_n2z00_2666;

							BgL_n1z00_2665 =
								STRUCT_REF(((obj_t) BgL_rsazd2key1zd2_30), (int) (((long) 2)));
							BgL_n2z00_2666 =
								STRUCT_REF(((obj_t) BgL_rsazd2key2zd2_31), (int) (((long) 2)));
							return
								BBOOL(
								((long) (bgl_bignum_cmp(BgL_n1z00_2665,
											BgL_n2z00_2666)) == ((long) 0)));
						}
					else
						{	/* Unsafe/rsa.scm 191 */
							return BFALSE;
						}
				}
			else
				{	/* Unsafe/rsa.scm 190 */
					return BFALSE;
				}
		}

	}



/* &rsa-key= */
	obj_t BGl_z62rsazd2keyzd3z63zz__rsaz00(obj_t BgL_envz00_3313,
		obj_t BgL_rsazd2key1zd2_3314, obj_t BgL_rsazd2key2zd2_3315)
	{
		{	/* Unsafe/rsa.scm 189 */
			return
				BGl_rsazd2keyzd3z01zz__rsaz00(BgL_rsazd2key1zd2_3314,
				BgL_rsazd2key2zd2_3315);
		}

	}



/* PKCS1-pad */
	BGL_EXPORTED_DEF obj_t BGl_PKCS1zd2padzd2zz__rsaz00(obj_t BgL_u8vectz00_32,
		obj_t BgL_finalzd2lenzd2_33)
	{
		{	/* Unsafe/rsa.scm 224 */
			{	/* Unsafe/rsa.scm 225 */
				long BgL_lenz00_1487;

				{	/* Unsafe/rsa.scm 225 */
					long BgL_res2028z00_2672;

					{	/* Unsafe/rsa.scm 225 */
						obj_t BgL_tmpz00_3679;

						BgL_tmpz00_3679 = ((obj_t) BgL_u8vectz00_32);
						BgL_res2028z00_2672 = BGL_HVECTOR_LENGTH(BgL_tmpz00_3679);
					}
					BgL_lenz00_1487 = BgL_res2028z00_2672;
				}
				{	/* Unsafe/rsa.scm 225 */
					obj_t BgL_nz00_1488;

					BgL_nz00_1488 =
						BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_finalzd2lenzd2_33,
						BINT((BgL_lenz00_1487 + ((long) 3))));
					{	/* Unsafe/rsa.scm 226 */

						{	/* Unsafe/rsa.scm 227 */
							bool_t BgL_test2293z00_3685;

							if (INTEGERP(BgL_nz00_1488))
								{	/* Unsafe/rsa.scm 227 */
									BgL_test2293z00_3685 =
										((long) CINT(BgL_nz00_1488) < ((long) 8));
								}
							else
								{	/* Unsafe/rsa.scm 227 */
									BgL_test2293z00_3685 =
										BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_nz00_1488,
										BINT(((long) 8)));
								}
							if (BgL_test2293z00_3685)
								{	/* Unsafe/rsa.scm 227 */
									return
										BGl_errorz00zz__errorz00(BGl_symbol2221z00zz__rsaz00,
										BGl_string2223z00zz__rsaz00, BgL_nz00_1488);
								}
							else
								{	/* Unsafe/rsa.scm 231 */
									obj_t BgL_padz00_1491;

									{	/* Unsafe/rsa.scm 232 */
										obj_t BgL_g1047z00_1492;

										BgL_g1047z00_1492 = BGl_list2224z00zz__rsaz00;
										{
											obj_t BgL_lstz00_1494;
											long BgL_iz00_1495;

											BgL_lstz00_1494 = BgL_g1047z00_1492;
											BgL_iz00_1495 = ((long) 0);
										BgL_zc3z04anonymousza31366ze3z87_1496:
											if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1495),
													BgL_nz00_1488))
												{	/* Unsafe/rsa.scm 234 */
													obj_t BgL_arg1368z00_1498;
													long BgL_arg1370z00_1499;

													{	/* Unsafe/rsa.scm 234 */
														long BgL_arg1371z00_1500;

														{	/* Unsafe/rsa.scm 234 */
															long BgL_arg1372z00_1501;

															{	/* Unsafe/rsa.scm 234 */
																long BgL_res2034z00_2682;

																{	/* Unsafe/rsa.scm 234 */
																	int BgL_arg1783z00_2680;

																	BgL_arg1783z00_2680 = rand();
																	BgL_res2034z00_2682 =
																		BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
																		(long) (BgL_arg1783z00_2680), ((long) 255));
																}
																BgL_arg1372z00_1501 = BgL_res2034z00_2682;
															}
															BgL_arg1371z00_1500 =
																(long)
																CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT((
																			(long) 1)), BINT(BgL_arg1372z00_1501)));
														}
														BgL_arg1368z00_1498 =
															MAKE_YOUNG_PAIR(BINT(BgL_arg1371z00_1500),
															BgL_lstz00_1494);
													}
													BgL_arg1370z00_1499 = (BgL_iz00_1495 + ((long) 1));
													{
														long BgL_iz00_3707;
														obj_t BgL_lstz00_3706;

														BgL_lstz00_3706 = BgL_arg1368z00_1498;
														BgL_iz00_3707 = BgL_arg1370z00_1499;
														BgL_iz00_1495 = BgL_iz00_3707;
														BgL_lstz00_1494 = BgL_lstz00_3706;
														goto BgL_zc3z04anonymousza31366ze3z87_1496;
													}
												}
											else
												{	/* Unsafe/rsa.scm 235 */
													obj_t BgL_arg1374z00_1503;

													{	/* Unsafe/rsa.scm 235 */
														obj_t BgL_arg1375z00_1504;

														BgL_arg1375z00_1504 =
															MAKE_YOUNG_PAIR(BINT(((long) 2)),
															BgL_lstz00_1494);
														BgL_arg1374z00_1503 =
															MAKE_YOUNG_PAIR(BINT(((long) 0)),
															BgL_arg1375z00_1504);
													}
													BgL_padz00_1491 =
														BGl_listzd2ze3u8vectorz31zz__srfi4z00
														(BgL_arg1374z00_1503);
									}}}
									return
										BGl_u8vectorzd2appendzd2zz__rsaz00(BgL_padz00_1491,
										BgL_u8vectz00_32);
								}
						}
					}
				}
			}
		}

	}



/* &PKCS1-pad */
	obj_t BGl_z62PKCS1zd2padzb0zz__rsaz00(obj_t BgL_envz00_3316,
		obj_t BgL_u8vectz00_3317, obj_t BgL_finalzd2lenzd2_3318)
	{
		{	/* Unsafe/rsa.scm 224 */
			return
				BGl_PKCS1zd2padzd2zz__rsaz00(BgL_u8vectz00_3317,
				BgL_finalzd2lenzd2_3318);
		}

	}



/* PKCS1-unpad */
	BGL_EXPORTED_DEF obj_t BGl_PKCS1zd2unpadzd2zz__rsaz00(obj_t BgL_u8vectz00_34)
	{
		{	/* Unsafe/rsa.scm 241 */
			{	/* Unsafe/rsa.scm 246 */
				long BgL_lenz00_1510;

				{	/* Unsafe/rsa.scm 246 */
					long BgL_res2037z00_2687;

					{	/* Unsafe/rsa.scm 246 */
						obj_t BgL_tmpz00_3715;

						BgL_tmpz00_3715 = ((obj_t) BgL_u8vectz00_34);
						BgL_res2037z00_2687 = BGL_HVECTOR_LENGTH(BgL_tmpz00_3715);
					}
					BgL_lenz00_1510 = BgL_res2037z00_2687;
				}
				{
					long BgL_iz00_1512;

					BgL_iz00_1512 = ((long) 0);
				BgL_zc3z04anonymousza31378ze3z87_1513:
					if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BINT(BgL_iz00_1512),
							BINT(BgL_lenz00_1510)))
						{	/* Unsafe/rsa.scm 248 */
							return
								BGl_errorz00zz__errorz00(BGl_symbol2225z00zz__rsaz00,
								BGl_string2227z00zz__rsaz00, BgL_u8vectz00_34);
						}
					else
						{	/* Unsafe/rsa.scm 250 */
							long BgL_xz00_1515;

							{	/* Unsafe/rsa.scm 250 */
								uint8_t BgL_arg1399z00_1543;

								{	/* Unsafe/rsa.scm 250 */
									uint8_t BgL_res2038z00_2690;

									{	/* Unsafe/rsa.scm 250 */
										obj_t BgL_tmpz00_3723;

										BgL_tmpz00_3723 = ((obj_t) BgL_u8vectz00_34);
										BgL_res2038z00_2690 =
											BGL_U8VREF(BgL_tmpz00_3723, BgL_iz00_1512);
									}
									BgL_arg1399z00_1543 = BgL_res2038z00_2690;
								}
								{	/* Unsafe/rsa.scm 250 */
									long BgL_res2040z00_2695;

									{	/* Unsafe/rsa.scm 250 */
										long BgL_arg1902z00_2692;

										BgL_arg1902z00_2692 = (long) (BgL_arg1399z00_1543);
										{	/* Unsafe/rsa.scm 250 */
											long BgL_res2039z00_2694;

											BgL_res2039z00_2694 = (long) (BgL_arg1902z00_2692);
											BgL_res2040z00_2695 = BgL_res2039z00_2694;
									}}
									BgL_xz00_1515 = BgL_res2040z00_2695;
							}}
							if ((BgL_xz00_1515 == ((long) 0)))
								{
									long BgL_iz00_3730;

									BgL_iz00_3730 = (BgL_iz00_1512 + ((long) 1));
									BgL_iz00_1512 = BgL_iz00_3730;
									goto BgL_zc3z04anonymousza31378ze3z87_1513;
								}
							else
								{	/* Unsafe/rsa.scm 251 */
									if ((BgL_xz00_1515 == ((long) 2)))
										{	/* Unsafe/rsa.scm 256 */
											long BgL_g1048z00_1522;

											BgL_g1048z00_1522 = (BgL_iz00_1512 + ((long) 1));
											{
												long BgL_jz00_1524;

												BgL_jz00_1524 = BgL_g1048z00_1522;
											BgL_zc3z04anonymousza31386ze3z87_1525:
												if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BINT
														(BgL_jz00_1524), BINT(BgL_lenz00_1510)))
													{	/* Unsafe/rsa.scm 257 */
														return
															BGl_errorz00zz__errorz00
															(BGl_symbol2225z00zz__rsaz00,
															BGl_string2227z00zz__rsaz00, BgL_u8vectz00_34);
													}
												else
													{	/* Unsafe/rsa.scm 259 */
														long BgL_xz00_1527;

														{	/* Unsafe/rsa.scm 259 */
															uint8_t BgL_arg1397z00_1538;

															{	/* Unsafe/rsa.scm 259 */
																uint8_t BgL_res2049z00_2710;

																{	/* Unsafe/rsa.scm 259 */
																	obj_t BgL_tmpz00_3740;

																	BgL_tmpz00_3740 = ((obj_t) BgL_u8vectz00_34);
																	BgL_res2049z00_2710 =
																		BGL_U8VREF(BgL_tmpz00_3740, BgL_jz00_1524);
																}
																BgL_arg1397z00_1538 = BgL_res2049z00_2710;
															}
															{	/* Unsafe/rsa.scm 259 */
																long BgL_res2051z00_2715;

																{	/* Unsafe/rsa.scm 259 */
																	long BgL_arg1902z00_2712;

																	BgL_arg1902z00_2712 =
																		(long) (BgL_arg1397z00_1538);
																	{	/* Unsafe/rsa.scm 259 */
																		long BgL_res2050z00_2714;

																		BgL_res2050z00_2714 =
																			(long) (BgL_arg1902z00_2712);
																		BgL_res2051z00_2715 = BgL_res2050z00_2714;
																}}
																BgL_xz00_1527 = BgL_res2051z00_2715;
														}}
														if ((BgL_xz00_1527 == ((long) 0)))
															{	/* Unsafe/rsa.scm 261 */
																if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(
																			(long)
																			CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT
																					(BgL_jz00_1524),
																					BINT(BgL_iz00_1512)))),
																		BINT(((long) 8))))
																	{	/* Unsafe/rsa.scm 263 */
																		return
																			BGl_errorz00zz__errorz00
																			(BGl_symbol2225z00zz__rsaz00,
																			BGl_string2227z00zz__rsaz00,
																			BgL_u8vectz00_34);
																	}
																else
																	{	/* Unsafe/rsa.scm 263 */
																		return
																			BGl_subu8vectorz00zz__rsaz00
																			(BgL_u8vectz00_34,
																			(BgL_jz00_1524 + ((long) 1)),
																			BgL_lenz00_1510);
															}}
														else
															{
																long BgL_jz00_3758;

																BgL_jz00_3758 = (BgL_jz00_1524 + ((long) 1));
																BgL_jz00_1524 = BgL_jz00_3758;
																goto BgL_zc3z04anonymousza31386ze3z87_1525;
															}
													}
											}
										}
									else
										{	/* Unsafe/rsa.scm 253 */
											return
												BGl_errorz00zz__errorz00(BGl_symbol2225z00zz__rsaz00,
												BGl_string2227z00zz__rsaz00, BgL_u8vectz00_34);
										}
								}
						}
				}
			}
		}

	}



/* &PKCS1-unpad */
	obj_t BGl_z62PKCS1zd2unpadzb0zz__rsaz00(obj_t BgL_envz00_3319,
		obj_t BgL_u8vectz00_3320)
	{
		{	/* Unsafe/rsa.scm 241 */
			return BGl_PKCS1zd2unpadzd2zz__rsaz00(BgL_u8vectz00_3320);
		}

	}



/* rsa-encrypt-u8vector */
	BGL_EXPORTED_DEF obj_t BGl_rsazd2encryptzd2u8vectorz00zz__rsaz00(obj_t
		BgL_u8vectz00_37, obj_t BgL_rsazd2keyzd2_38, obj_t BgL_finalzd2lenzd2_39)
	{
		{	/* Unsafe/rsa.scm 280 */
			{	/* Unsafe/rsa.scm 283 */
				obj_t BgL_arg1404z00_2729;

				{	/* Unsafe/rsa.scm 283 */
					obj_t BgL_arg1405z00_2730;

					BgL_arg1405z00_2730 =
						BGl_u8vectorzd2ze3bignumz31zz__rsaz00(BGl_PKCS1zd2padzd2zz__rsaz00
						(BgL_u8vectz00_37, BgL_finalzd2lenzd2_39));
					BgL_arg1404z00_2729 =
						BGl_exptzd2modze70z35zz__rsaz00(BgL_arg1405z00_2730,
						STRUCT_REF(((obj_t) BgL_rsazd2keyzd2_38), (int) (((long) 2))),
						STRUCT_REF(((obj_t) BgL_rsazd2keyzd2_38), (int) (((long) 1))));
				}
				return BGl_bignumzd2ze3u8vectorz31zz__rsaz00(BgL_arg1404z00_2729);
			}
		}

	}



/* &rsa-encrypt-u8vector */
	obj_t BGl_z62rsazd2encryptzd2u8vectorz62zz__rsaz00(obj_t BgL_envz00_3321,
		obj_t BgL_u8vectz00_3322, obj_t BgL_rsazd2keyzd2_3323,
		obj_t BgL_finalzd2lenzd2_3324)
	{
		{	/* Unsafe/rsa.scm 280 */
			return
				BGl_rsazd2encryptzd2u8vectorz00zz__rsaz00(BgL_u8vectz00_3322,
				BgL_rsazd2keyzd2_3323, BgL_finalzd2lenzd2_3324);
		}

	}



/* rsa-decrypt-u8vector */
	BGL_EXPORTED_DEF obj_t BGl_rsazd2decryptzd2u8vectorz00zz__rsaz00(obj_t
		BgL_u8vectz00_40, obj_t BgL_rsazd2keyzd2_41)
	{
		{	/* Unsafe/rsa.scm 289 */
			{	/* Unsafe/rsa.scm 293 */
				obj_t BgL_arg1407z00_2736;

				{	/* Unsafe/rsa.scm 293 */
					obj_t BgL_arg1409z00_2737;

					{	/* Unsafe/rsa.scm 293 */
						obj_t BgL_arg1410z00_2738;

						BgL_arg1410z00_2738 =
							BGl_u8vectorzd2ze3bignumz31zz__rsaz00(BgL_u8vectz00_40);
						BgL_arg1409z00_2737 =
							BGl_exptzd2modze70z35zz__rsaz00(BgL_arg1410z00_2738,
							STRUCT_REF(
								((obj_t) BgL_rsazd2keyzd2_41),
								(int) (((long) 2))),
							STRUCT_REF(((obj_t) BgL_rsazd2keyzd2_41), (int) (((long) 1))));
					}
					BgL_arg1407z00_2736 =
						BGl_bignumzd2ze3u8vectorz31zz__rsaz00(BgL_arg1409z00_2737);
				}
				return BGl_PKCS1zd2unpadzd2zz__rsaz00(BgL_arg1407z00_2736);
			}
		}

	}



/* &rsa-decrypt-u8vector */
	obj_t BGl_z62rsazd2decryptzd2u8vectorz62zz__rsaz00(obj_t BgL_envz00_3325,
		obj_t BgL_u8vectz00_3326, obj_t BgL_rsazd2keyzd2_3327)
	{
		{	/* Unsafe/rsa.scm 289 */
			return
				BGl_rsazd2decryptzd2u8vectorz00zz__rsaz00(BgL_u8vectz00_3326,
				BgL_rsazd2keyzd2_3327);
		}

	}



/* expt-mod~0 */
	obj_t BGl_exptzd2modze70z35zz__rsaz00(obj_t BgL_nz00_1587,
		obj_t BgL_ez00_1588, obj_t BgL_mz00_1589)
	{
		{	/* Unsafe/rsa.scm 402 */
		BGl_exptzd2modze70z35zz__rsaz00:
			{	/* Unsafe/rsa.scm 397 */
				bool_t BgL_test2302z00_3784;

				{	/* Unsafe/rsa.scm 397 */
					obj_t BgL_tmpz00_3785;

					BgL_tmpz00_3785 = ((obj_t) BgL_ez00_1588);
					BgL_test2302z00_3784 = BXZERO(BgL_tmpz00_3785);
				}
				if (BgL_test2302z00_3784)
					{	/* Unsafe/rsa.scm 397 */
						return (bgl_string_to_bignum("1", 16));
					}
				else
					{	/* Unsafe/rsa.scm 397 */
						if (bgl_bignum_even(((obj_t) BgL_ez00_1588)))
							{
								obj_t BgL_ez00_3794;
								obj_t BgL_nz00_3791;

								BgL_nz00_3791 =
									BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(bgl_bignum_mul
									(BgL_nz00_1587, BgL_nz00_1587), BgL_mz00_1589);
								BgL_ez00_3794 =
									bgl_bignum_quotient(((obj_t) BgL_ez00_1588),
									(bgl_string_to_bignum("2", 16)));
								BgL_ez00_1588 = BgL_ez00_3794;
								BgL_nz00_1587 = BgL_nz00_3791;
								goto BGl_exptzd2modze70z35zz__rsaz00;
							}
						else
							{	/* Unsafe/rsa.scm 399 */
								return
									BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(bgl_bignum_mul
									(BgL_nz00_1587, BGl_exptzd2modze70z35zz__rsaz00(BgL_nz00_1587,
											bgl_bignum_sub(((obj_t) BgL_ez00_1588),
												(bgl_string_to_bignum("1", 16))), BgL_mz00_1589)),
									BgL_mz00_1589);
							}
					}
			}
		}

	}



/* u8vector-append */
	obj_t BGl_u8vectorzd2appendzd2zz__rsaz00(obj_t BgL_v1z00_48,
		obj_t BgL_v2z00_49)
	{
		{	/* Unsafe/rsa.scm 409 */
			{	/* Unsafe/rsa.scm 410 */
				long BgL_len1z00_1600;

				{	/* Unsafe/rsa.scm 410 */
					long BgL_res2064z00_2760;

					BgL_res2064z00_2760 = BGL_HVECTOR_LENGTH(BgL_v1z00_48);
					BgL_len1z00_1600 = BgL_res2064z00_2760;
				}
				{	/* Unsafe/rsa.scm 410 */
					long BgL_len2z00_1601;

					{	/* Unsafe/rsa.scm 411 */
						long BgL_res2065z00_2762;

						BgL_res2065z00_2762 = BGL_HVECTOR_LENGTH(BgL_v2z00_49);
						BgL_len2z00_1601 = BgL_res2065z00_2762;
					}
					{	/* Unsafe/rsa.scm 411 */
						long BgL_lenz00_1602;

						BgL_lenz00_1602 = (BgL_len1z00_1600 + BgL_len2z00_1601);
						{	/* Unsafe/rsa.scm 412 */
							obj_t BgL_resz00_1603;

							{	/* Llib/srfi4.scm 447 */

								BgL_resz00_1603 =
									BGl_makezd2u8vectorzd2zz__srfi4z00(BgL_lenz00_1602,
									(uint8_t) (0));
							}
							{	/* Unsafe/rsa.scm 413 */

								{
									long BgL_iz00_1605;

									BgL_iz00_1605 = ((long) 0);
								BgL_zc3z04anonymousza31440ze3z87_1606:
									if ((BgL_iz00_1605 < BgL_len1z00_1600))
										{	/* Unsafe/rsa.scm 415 */
											{	/* Unsafe/rsa.scm 417 */
												long BgL_arg1442z00_1608;

												{	/* Unsafe/rsa.scm 417 */
													uint8_t BgL_arg1443z00_1609;

													{	/* Unsafe/rsa.scm 417 */
														uint8_t BgL_res2068z00_2771;

														BgL_res2068z00_2771 =
															BGL_U8VREF(BgL_v1z00_48, BgL_iz00_1605);
														BgL_arg1443z00_1609 = BgL_res2068z00_2771;
													}
													{	/* Unsafe/rsa.scm 417 */
														long BgL_res2070z00_2776;

														{	/* Unsafe/rsa.scm 417 */
															long BgL_arg1902z00_2773;

															BgL_arg1902z00_2773 =
																(long) (BgL_arg1443z00_1609);
															{	/* Unsafe/rsa.scm 417 */
																long BgL_res2069z00_2775;

																BgL_res2069z00_2775 =
																	(long) (BgL_arg1902z00_2773);
																BgL_res2070z00_2776 = BgL_res2069z00_2775;
														}}
														BgL_arg1442z00_1608 = BgL_res2070z00_2776;
												}}
												{	/* Unsafe/rsa.scm 417 */
													uint8_t BgL_tmpz00_3811;

													BgL_tmpz00_3811 = (uint8_t) (BgL_arg1442z00_1608);
													BGL_U8VSET(BgL_resz00_1603, BgL_iz00_1605,
														BgL_tmpz00_3811);
												} BUNSPEC;
											}
											{
												long BgL_iz00_3814;

												BgL_iz00_3814 = (BgL_iz00_1605 + ((long) 1));
												BgL_iz00_1605 = BgL_iz00_3814;
												goto BgL_zc3z04anonymousza31440ze3z87_1606;
											}
										}
									else
										{
											long BgL_jz00_1612;

											BgL_jz00_1612 = ((long) 0);
										BgL_zc3z04anonymousza31445ze3z87_1613:
											if ((BgL_jz00_1612 < BgL_len2z00_1601))
												{	/* Unsafe/rsa.scm 420 */
													{	/* Unsafe/rsa.scm 422 */
														long BgL_arg1448z00_1615;
														long BgL_arg1449z00_1616;

														BgL_arg1448z00_1615 =
															(BgL_jz00_1612 + BgL_iz00_1605);
														{	/* Unsafe/rsa.scm 422 */
															uint8_t BgL_arg1451z00_1617;

															{	/* Unsafe/rsa.scm 422 */
																uint8_t BgL_res2074z00_2787;

																BgL_res2074z00_2787 =
																	BGL_U8VREF(BgL_v2z00_49, BgL_jz00_1612);
																BgL_arg1451z00_1617 = BgL_res2074z00_2787;
															}
															{	/* Unsafe/rsa.scm 422 */
																long BgL_res2076z00_2792;

																{	/* Unsafe/rsa.scm 422 */
																	long BgL_arg1902z00_2789;

																	BgL_arg1902z00_2789 =
																		(long) (BgL_arg1451z00_1617);
																	{	/* Unsafe/rsa.scm 422 */
																		long BgL_res2075z00_2791;

																		BgL_res2075z00_2791 =
																			(long) (BgL_arg1902z00_2789);
																		BgL_res2076z00_2792 = BgL_res2075z00_2791;
																}}
																BgL_arg1449z00_1616 = BgL_res2076z00_2792;
														}}
														{	/* Unsafe/rsa.scm 422 */
															uint8_t BgL_tmpz00_3822;

															BgL_tmpz00_3822 = (uint8_t) (BgL_arg1449z00_1616);
															BGL_U8VSET(BgL_resz00_1603, BgL_arg1448z00_1615,
																BgL_tmpz00_3822);
														} BUNSPEC;
													}
													{
														long BgL_jz00_3825;

														BgL_jz00_3825 = (BgL_jz00_1612 + ((long) 1));
														BgL_jz00_1612 = BgL_jz00_3825;
														goto BgL_zc3z04anonymousza31445ze3z87_1613;
													}
												}
											else
												{	/* Unsafe/rsa.scm 420 */
													return BgL_resz00_1603;
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



/* subu8vector */
	obj_t BGl_subu8vectorz00zz__rsaz00(obj_t BgL_vz00_50, long BgL_startz00_51,
		long BgL_endz00_52)
	{
		{	/* Unsafe/rsa.scm 429 */
			{	/* Unsafe/rsa.scm 430 */
				long BgL_lenz00_1623;

				BgL_lenz00_1623 = (BgL_endz00_52 - BgL_startz00_51);
				{	/* Unsafe/rsa.scm 430 */
					obj_t BgL_resz00_1624;

					{	/* Llib/srfi4.scm 447 */

						BgL_resz00_1624 =
							BGl_makezd2u8vectorzd2zz__srfi4z00(BgL_lenz00_1623,
							(uint8_t) (0));
					}
					{	/* Unsafe/rsa.scm 431 */

						{
							long BgL_iz00_1626;

							BgL_iz00_1626 = BgL_startz00_51;
						BgL_zc3z04anonymousza31453ze3z87_1627:
							if ((BgL_iz00_1626 < BgL_endz00_52))
								{	/* Unsafe/rsa.scm 433 */
									{	/* Unsafe/rsa.scm 435 */
										long BgL_arg1455z00_1629;
										long BgL_arg1456z00_1630;

										BgL_arg1455z00_1629 = (BgL_iz00_1626 - BgL_startz00_51);
										{	/* Unsafe/rsa.scm 435 */
											uint8_t BgL_arg1457z00_1631;

											{	/* Unsafe/rsa.scm 435 */
												uint8_t BgL_res2081z00_2806;

												BgL_res2081z00_2806 =
													BGL_U8VREF(BgL_vz00_50, BgL_iz00_1626);
												BgL_arg1457z00_1631 = BgL_res2081z00_2806;
											}
											{	/* Unsafe/rsa.scm 435 */
												long BgL_res2083z00_2811;

												{	/* Unsafe/rsa.scm 435 */
													long BgL_arg1902z00_2808;

													BgL_arg1902z00_2808 = (long) (BgL_arg1457z00_1631);
													{	/* Unsafe/rsa.scm 435 */
														long BgL_res2082z00_2810;

														BgL_res2082z00_2810 = (long) (BgL_arg1902z00_2808);
														BgL_res2083z00_2811 = BgL_res2082z00_2810;
												}}
												BgL_arg1456z00_1630 = BgL_res2083z00_2811;
										}}
										{	/* Unsafe/rsa.scm 435 */
											uint8_t BgL_tmpz00_3835;

											BgL_tmpz00_3835 = (uint8_t) (BgL_arg1456z00_1630);
											BGL_U8VSET(BgL_resz00_1624, BgL_arg1455z00_1629,
												BgL_tmpz00_3835);
										} BUNSPEC;
									}
									{
										long BgL_iz00_3838;

										BgL_iz00_3838 = (BgL_iz00_1626 + ((long) 1));
										BgL_iz00_1626 = BgL_iz00_3838;
										goto BgL_zc3z04anonymousza31453ze3z87_1627;
									}
								}
							else
								{	/* Unsafe/rsa.scm 433 */
									return BgL_resz00_1624;
								}
						}
					}
				}
			}
		}

	}



/* bignum->u8vector */
	obj_t BGl_bignumzd2ze3u8vectorz31zz__rsaz00(obj_t BgL_nz00_54)
	{
		{	/* Unsafe/rsa.scm 461 */
			{
				obj_t BgL_nz00_1691;

				{	/* Unsafe/rsa.scm 470 */
					long BgL_siza7eza7_1677;

					BgL_nz00_1691 = BgL_nz00_54;
					{
						long BgL_siza7eza7_2843;
						obj_t BgL_accz00_2844;

						BgL_siza7eza7_2843 = ((long) 1);
						BgL_accz00_2844 = (bgl_string_to_bignum("ff", 16));
					BgL_loopz00_2842:
						if (
							((long) (bgl_bignum_cmp(BgL_nz00_1691,
										BgL_accz00_2844)) > ((long) 0)))
							{
								obj_t BgL_accz00_3846;
								long BgL_siza7eza7_3844;

								BgL_siza7eza7_3844 = (BgL_siza7eza7_2843 + ((long) 1));
								BgL_accz00_3846 =
									bgl_bignum_mul(BgL_accz00_2844, (bgl_string_to_bignum("ff",
											16)));
								BgL_accz00_2844 = BgL_accz00_3846;
								BgL_siza7eza7_2843 = BgL_siza7eza7_3844;
								goto BgL_loopz00_2842;
							}
						else
							{	/* Unsafe/rsa.scm 466 */
								BgL_siza7eza7_1677 = BgL_siza7eza7_2843;
							}
					}
					{	/* Unsafe/rsa.scm 470 */
						obj_t BgL_resz00_1678;

						{	/* Llib/srfi4.scm 447 */

							BgL_resz00_1678 =
								BGl_makezd2u8vectorzd2zz__srfi4z00(BgL_siza7eza7_1677,
								(uint8_t) (0));
						}
						{	/* Unsafe/rsa.scm 471 */

							{
								long BgL_iz00_2876;
								obj_t BgL_vz00_2877;

								BgL_iz00_2876 = ((long) 0);
								BgL_vz00_2877 = BgL_nz00_54;
							BgL_loopz00_2875:
								if ((BgL_iz00_2876 == BgL_siza7eza7_1677))
									{	/* Unsafe/rsa.scm 474 */
										return BgL_resz00_1678;
									}
								else
									{	/* Unsafe/rsa.scm 474 */
										{	/* Unsafe/rsa.scm 477 */
											long BgL_arg1480z00_2882;

											BgL_arg1480z00_2882 =
												bgl_bignum_to_long(bgl_bignum_remainder(BgL_vz00_2877,
													(bgl_string_to_bignum("100", 16))));
											{	/* Unsafe/rsa.scm 477 */
												uint8_t BgL_tmpz00_3853;

												BgL_tmpz00_3853 = (uint8_t) (BgL_arg1480z00_2882);
												BGL_U8VSET(BgL_resz00_1678, BgL_iz00_2876,
													BgL_tmpz00_3853);
											} BUNSPEC;
										}
										{
											obj_t BgL_vz00_3858;
											long BgL_iz00_3856;

											BgL_iz00_3856 = (BgL_iz00_2876 + ((long) 1));
											BgL_vz00_3858 =
												bgl_bignum_quotient(BgL_vz00_2877,
												(bgl_string_to_bignum("100", 16)));
											BgL_vz00_2877 = BgL_vz00_3858;
											BgL_iz00_2876 = BgL_iz00_3856;
											goto BgL_loopz00_2875;
										}
									}
							}
						}
					}
				}
			}
		}

	}



/* u8vector->bignum */
	obj_t BGl_u8vectorzd2ze3bignumz31zz__rsaz00(obj_t BgL_u8vectz00_55)
	{
		{	/* Unsafe/rsa.scm 483 */
			{	/* Unsafe/rsa.scm 484 */
				long BgL_g1050z00_1702;

				{	/* Unsafe/rsa.scm 484 */
					long BgL_arg1500z00_1715;

					{	/* Unsafe/rsa.scm 484 */
						long BgL_res2102z00_2897;

						BgL_res2102z00_2897 = BGL_HVECTOR_LENGTH(BgL_u8vectz00_55);
						BgL_arg1500z00_1715 = BgL_res2102z00_2897;
					}
					BgL_g1050z00_1702 = (BgL_arg1500z00_1715 - ((long) 1));
				}
				{
					long BgL_iz00_2921;
					obj_t BgL_az00_2922;

					BgL_iz00_2921 = BgL_g1050z00_1702;
					BgL_az00_2922 = (bgl_string_to_bignum("0", 16));
				BgL_loopz00_2920:
					if ((BgL_iz00_2921 == ((long) -1)))
						{	/* Unsafe/rsa.scm 486 */
							return BgL_az00_2922;
						}
					else
						{	/* Unsafe/rsa.scm 488 */
							obj_t BgL_dz00_2926;

							{	/* Unsafe/rsa.scm 488 */
								long BgL_arg1497z00_2927;

								{	/* Unsafe/rsa.scm 488 */
									uint8_t BgL_arg1498z00_2928;

									{	/* Unsafe/rsa.scm 488 */
										uint8_t BgL_res2105z00_2929;

										BgL_res2105z00_2929 =
											BGL_U8VREF(BgL_u8vectz00_55, BgL_iz00_2921);
										BgL_arg1498z00_2928 = BgL_res2105z00_2929;
									}
									{	/* Unsafe/rsa.scm 488 */
										long BgL_res2107z00_2932;

										{	/* Unsafe/rsa.scm 488 */
											long BgL_arg1902z00_2934;

											BgL_arg1902z00_2934 = (long) (BgL_arg1498z00_2928);
											{	/* Unsafe/rsa.scm 488 */
												long BgL_res2106z00_2935;

												BgL_res2106z00_2935 = (long) (BgL_arg1902z00_2934);
												BgL_res2107z00_2932 = BgL_res2106z00_2935;
										}}
										BgL_arg1497z00_2927 = BgL_res2107z00_2932;
								}}
								BgL_dz00_2926 = bgl_long_to_bignum(BgL_arg1497z00_2927);
							}
							{
								obj_t BgL_az00_3870;
								long BgL_iz00_3868;

								BgL_iz00_3868 = (BgL_iz00_2921 - ((long) 1));
								BgL_az00_3870 =
									bgl_bignum_add(bgl_bignum_mul(BgL_az00_2922,
										(bgl_string_to_bignum("100", 16))), BgL_dz00_2926);
								BgL_az00_2922 = BgL_az00_3870;
								BgL_iz00_2921 = BgL_iz00_3868;
								goto BgL_loopz00_2920;
							}
						}
				}
			}
		}

	}



/* rsa-encrypt-string */
	BGL_EXPORTED_DEF obj_t BGl_rsazd2encryptzd2stringz00zz__rsaz00(obj_t
		BgL_strz00_57, obj_t BgL_keyz00_58)
	{
		{	/* Unsafe/rsa.scm 520 */
			{	/* Unsafe/rsa.scm 521 */
				obj_t BgL_runner1533z00_1775;

				{	/* Unsafe/rsa.scm 522 */
					obj_t BgL_l01113z00_1752;

					{	/* Unsafe/rsa.scm 525 */
						obj_t BgL_arg1521z00_1761;

						{	/* Unsafe/rsa.scm 525 */
							obj_t BgL_arg1523z00_1762;
							long BgL_arg1524z00_1763;

							{	/* Unsafe/rsa.scm 525 */
								obj_t BgL_arg1525z00_1764;

								{	/* Unsafe/rsa.scm 525 */
									obj_t BgL_l01110z00_1765;

									BgL_l01110z00_1765 =
										BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(BgL_strz00_57);
									{
										obj_t BgL_l1109z00_1767;

										BgL_l1109z00_1767 = BgL_l01110z00_1765;
									BgL_zc3z04anonymousza31526ze3z87_1768:
										if (NULLP(BgL_l1109z00_1767))
											{	/* Unsafe/rsa.scm 525 */
												BgL_arg1525z00_1764 = BgL_l01110z00_1765;
											}
										else
											{	/* Unsafe/rsa.scm 525 */
												{	/* Unsafe/rsa.scm 525 */
													long BgL_arg1528z00_1770;

													BgL_arg1528z00_1770 =
														(CCHAR(CAR(((obj_t) BgL_l1109z00_1767))));
													{	/* Unsafe/rsa.scm 525 */
														obj_t BgL_auxz00_3882;
														obj_t BgL_tmpz00_3880;

														BgL_auxz00_3882 = BINT(BgL_arg1528z00_1770);
														BgL_tmpz00_3880 = ((obj_t) BgL_l1109z00_1767);
														SET_CAR(BgL_tmpz00_3880, BgL_auxz00_3882);
												}}
												{	/* Unsafe/rsa.scm 525 */
													obj_t BgL_arg1531z00_1772;

													BgL_arg1531z00_1772 =
														CDR(((obj_t) BgL_l1109z00_1767));
													{
														obj_t BgL_l1109z00_3887;

														BgL_l1109z00_3887 = BgL_arg1531z00_1772;
														BgL_l1109z00_1767 = BgL_l1109z00_3887;
														goto BgL_zc3z04anonymousza31526ze3z87_1768;
													}
												}
											}
									}
								}
								BgL_arg1523z00_1762 =
									BGl_listzd2ze3u8vectorz31zz__srfi4z00(BgL_arg1525z00_1764);
							}
							BgL_arg1524z00_1763 =
								(STRING_LENGTH(BgL_strz00_57) + ((long) 12));
							{	/* Unsafe/rsa.scm 283 */
								obj_t BgL_arg1404z00_2960;

								{	/* Unsafe/rsa.scm 283 */
									obj_t BgL_arg1405z00_2961;

									BgL_arg1405z00_2961 =
										BGl_u8vectorzd2ze3bignumz31zz__rsaz00
										(BGl_PKCS1zd2padzd2zz__rsaz00(BgL_arg1523z00_1762,
											BINT(BgL_arg1524z00_1763)));
									BgL_arg1404z00_2960 =
										BGl_exptzd2modze70z35zz__rsaz00(BgL_arg1405z00_2961,
										STRUCT_REF(((obj_t) BgL_keyz00_58), (int) (((long) 2))),
										STRUCT_REF(((obj_t) BgL_keyz00_58), (int) (((long) 1))));
								}
								BgL_arg1521z00_1761 =
									BGl_bignumzd2ze3u8vectorz31zz__rsaz00(BgL_arg1404z00_2960);
						}}
						BgL_l01113z00_1752 =
							BGl_u8vectorzd2ze3listz31zz__srfi4z00(BgL_arg1521z00_1761);
					}
					{
						obj_t BgL_l1112z00_1754;

						BgL_l1112z00_1754 = BgL_l01113z00_1752;
					BgL_zc3z04anonymousza31516ze3z87_1755:
						if (NULLP(BgL_l1112z00_1754))
							{	/* Unsafe/rsa.scm 523 */
								BgL_runner1533z00_1775 = BgL_l01113z00_1752;
							}
						else
							{	/* Unsafe/rsa.scm 523 */
								{	/* Unsafe/rsa.scm 523 */
									unsigned char BgL_arg1518z00_1757;

									BgL_arg1518z00_1757 =
										((long) CINT(CAR(((obj_t) BgL_l1112z00_1754))));
									{	/* Unsafe/rsa.scm 523 */
										obj_t BgL_auxz00_3911;
										obj_t BgL_tmpz00_3909;

										BgL_auxz00_3911 = BCHAR(BgL_arg1518z00_1757);
										BgL_tmpz00_3909 = ((obj_t) BgL_l1112z00_1754);
										SET_CAR(BgL_tmpz00_3909, BgL_auxz00_3911);
								}}
								{	/* Unsafe/rsa.scm 523 */
									obj_t BgL_arg1520z00_1759;

									BgL_arg1520z00_1759 = CDR(((obj_t) BgL_l1112z00_1754));
									{
										obj_t BgL_l1112z00_3916;

										BgL_l1112z00_3916 = BgL_arg1520z00_1759;
										BgL_l1112z00_1754 = BgL_l1112z00_3916;
										goto BgL_zc3z04anonymousza31516ze3z87_1755;
									}
								}
							}
					}
				}
				return
					BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_runner1533z00_1775);
			}
		}

	}



/* &rsa-encrypt-string */
	obj_t BGl_z62rsazd2encryptzd2stringz62zz__rsaz00(obj_t BgL_envz00_3328,
		obj_t BgL_strz00_3329, obj_t BgL_keyz00_3330)
	{
		{	/* Unsafe/rsa.scm 520 */
			{	/* Unsafe/rsa.scm 521 */
				obj_t BgL_auxz00_3918;

				if (STRINGP(BgL_strz00_3329))
					{	/* Unsafe/rsa.scm 521 */
						BgL_auxz00_3918 = BgL_strz00_3329;
					}
				else
					{
						obj_t BgL_auxz00_3921;

						BgL_auxz00_3921 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2216z00zz__rsaz00,
							BINT(((long) 21891)), BGl_string2228z00zz__rsaz00,
							BGl_string2229z00zz__rsaz00, BgL_strz00_3329);
						FAILURE(BgL_auxz00_3921, BFALSE, BFALSE);
					}
				return
					BGl_rsazd2encryptzd2stringz00zz__rsaz00(BgL_auxz00_3918,
					BgL_keyz00_3330);
			}
		}

	}



/* rsa-decrypt-string */
	BGL_EXPORTED_DEF obj_t BGl_rsazd2decryptzd2stringz00zz__rsaz00(obj_t
		BgL_strz00_59, obj_t BgL_keyz00_60)
	{
		{	/* Unsafe/rsa.scm 532 */
			{	/* Unsafe/rsa.scm 533 */
				obj_t BgL_runner1553z00_1797;

				{	/* Unsafe/rsa.scm 534 */
					obj_t BgL_l01119z00_1776;

					{	/* Unsafe/rsa.scm 537 */
						obj_t BgL_arg1541z00_1785;

						{	/* Unsafe/rsa.scm 537 */
							obj_t BgL_arg1542z00_1786;

							{	/* Unsafe/rsa.scm 537 */
								obj_t BgL_arg1544z00_1787;

								{	/* Unsafe/rsa.scm 537 */
									obj_t BgL_l01116z00_1788;

									BgL_l01116z00_1788 =
										BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(BgL_strz00_59);
									{
										obj_t BgL_l1115z00_1790;

										BgL_l1115z00_1790 = BgL_l01116z00_1788;
									BgL_zc3z04anonymousza31545ze3z87_1791:
										if (NULLP(BgL_l1115z00_1790))
											{	/* Unsafe/rsa.scm 537 */
												BgL_arg1544z00_1787 = BgL_l01116z00_1788;
											}
										else
											{	/* Unsafe/rsa.scm 537 */
												{	/* Unsafe/rsa.scm 537 */
													long BgL_arg1547z00_1793;

													BgL_arg1547z00_1793 =
														(CCHAR(CAR(((obj_t) BgL_l1115z00_1790))));
													{	/* Unsafe/rsa.scm 537 */
														obj_t BgL_auxz00_3935;
														obj_t BgL_tmpz00_3933;

														BgL_auxz00_3935 = BINT(BgL_arg1547z00_1793);
														BgL_tmpz00_3933 = ((obj_t) BgL_l1115z00_1790);
														SET_CAR(BgL_tmpz00_3933, BgL_auxz00_3935);
												}}
												{	/* Unsafe/rsa.scm 537 */
													obj_t BgL_arg1552z00_1795;

													BgL_arg1552z00_1795 =
														CDR(((obj_t) BgL_l1115z00_1790));
													{
														obj_t BgL_l1115z00_3940;

														BgL_l1115z00_3940 = BgL_arg1552z00_1795;
														BgL_l1115z00_1790 = BgL_l1115z00_3940;
														goto BgL_zc3z04anonymousza31545ze3z87_1791;
													}
												}
											}
									}
								}
								BgL_arg1542z00_1786 =
									BGl_listzd2ze3u8vectorz31zz__srfi4z00(BgL_arg1544z00_1787);
							}
							{	/* Unsafe/rsa.scm 293 */
								obj_t BgL_arg1407z00_2980;

								{	/* Unsafe/rsa.scm 293 */
									obj_t BgL_arg1409z00_2981;

									{	/* Unsafe/rsa.scm 293 */
										obj_t BgL_arg1410z00_2982;

										BgL_arg1410z00_2982 =
											BGl_u8vectorzd2ze3bignumz31zz__rsaz00
											(BgL_arg1542z00_1786);
										BgL_arg1409z00_2981 =
											BGl_exptzd2modze70z35zz__rsaz00(BgL_arg1410z00_2982,
											STRUCT_REF(((obj_t) BgL_keyz00_60), (int) (((long) 2))),
											STRUCT_REF(((obj_t) BgL_keyz00_60), (int) (((long) 1))));
									}
									BgL_arg1407z00_2980 =
										BGl_bignumzd2ze3u8vectorz31zz__rsaz00(BgL_arg1409z00_2981);
								}
								BgL_arg1541z00_1785 =
									BGl_PKCS1zd2unpadzd2zz__rsaz00(BgL_arg1407z00_2980);
						}}
						BgL_l01119z00_1776 =
							BGl_u8vectorzd2ze3listz31zz__srfi4z00(BgL_arg1541z00_1785);
					}
					{
						obj_t BgL_l1118z00_1778;

						BgL_l1118z00_1778 = BgL_l01119z00_1776;
					BgL_zc3z04anonymousza31534ze3z87_1779:
						if (NULLP(BgL_l1118z00_1778))
							{	/* Unsafe/rsa.scm 535 */
								BgL_runner1553z00_1797 = BgL_l01119z00_1776;
							}
						else
							{	/* Unsafe/rsa.scm 535 */
								{	/* Unsafe/rsa.scm 535 */
									unsigned char BgL_arg1536z00_1781;

									BgL_arg1536z00_1781 =
										((long) CINT(CAR(((obj_t) BgL_l1118z00_1778))));
									{	/* Unsafe/rsa.scm 535 */
										obj_t BgL_auxz00_3961;
										obj_t BgL_tmpz00_3959;

										BgL_auxz00_3961 = BCHAR(BgL_arg1536z00_1781);
										BgL_tmpz00_3959 = ((obj_t) BgL_l1118z00_1778);
										SET_CAR(BgL_tmpz00_3959, BgL_auxz00_3961);
								}}
								{	/* Unsafe/rsa.scm 535 */
									obj_t BgL_arg1540z00_1783;

									BgL_arg1540z00_1783 = CDR(((obj_t) BgL_l1118z00_1778));
									{
										obj_t BgL_l1118z00_3966;

										BgL_l1118z00_3966 = BgL_arg1540z00_1783;
										BgL_l1118z00_1778 = BgL_l1118z00_3966;
										goto BgL_zc3z04anonymousza31534ze3z87_1779;
									}
								}
							}
					}
				}
				return
					BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_runner1553z00_1797);
			}
		}

	}



/* &rsa-decrypt-string */
	obj_t BGl_z62rsazd2decryptzd2stringz62zz__rsaz00(obj_t BgL_envz00_3331,
		obj_t BgL_strz00_3332, obj_t BgL_keyz00_3333)
	{
		{	/* Unsafe/rsa.scm 532 */
			{	/* Unsafe/rsa.scm 533 */
				obj_t BgL_auxz00_3968;

				if (STRINGP(BgL_strz00_3332))
					{	/* Unsafe/rsa.scm 533 */
						BgL_auxz00_3968 = BgL_strz00_3332;
					}
				else
					{
						obj_t BgL_auxz00_3971;

						BgL_auxz00_3971 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2216z00zz__rsaz00,
							BINT(((long) 22352)), BGl_string2230z00zz__rsaz00,
							BGl_string2229z00zz__rsaz00, BgL_strz00_3332);
						FAILURE(BgL_auxz00_3971, BFALSE, BFALSE);
					}
				return
					BGl_rsazd2decryptzd2stringz00zz__rsaz00(BgL_auxz00_3968,
					BgL_keyz00_3333);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__rsaz00()
	{
		{	/* Unsafe/rsa.scm 16 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__rsaz00()
	{
		{	/* Unsafe/rsa.scm 16 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__rsaz00()
	{
		{	/* Unsafe/rsa.scm 16 */
			return BUNSPEC;
		}

	}

#ifdef __cplusplus
}
#endif
