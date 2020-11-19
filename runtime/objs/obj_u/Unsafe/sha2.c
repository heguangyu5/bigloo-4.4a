/*===========================================================================*/
/*   (Unsafe/sha2.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Unsafe/sha2.scm -indent -o objs/obj_u/Unsafe/sha2.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_sha256sumzd2filezd2zz__sha2z00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__sha2z00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62sha256sumzd2stringzb0zz__sha2z00(obj_t, obj_t);
	static long BGl_z62fillzd2word32zd2stringz12z70zz__sha2z00(obj_t, obj_t, long,
		obj_t, long);
	static obj_t BGl_toplevelzd2initzd2zz__sha2z00();
	static obj_t BGl_genericzd2initzd2zz__sha2z00();
	extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__sha2z00();
	extern obj_t BGl_makezd2u32vectorzd2zz__srfi4z00(long, uint32_t);
	static obj_t BGl_methodzd2initzd2zz__sha2z00();
	static obj_t BGl_z62sha256sumz62zz__sha2z00(obj_t, obj_t);
	static obj_t BGl_statezd2ze3stringz31zz__sha2z00(obj_t);
	static obj_t BGl_z62sha256sumzd2portzb0zz__sha2z00(obj_t, obj_t);
	static uint32_t BGl_Sigma1zd2256zd2zz__sha2z00(uint32_t);
	static long BGl_z62fillzd2word32zd2portz12z70zz__sha2z00(obj_t, obj_t, long,
		obj_t, long);
	extern obj_t make_string(long, unsigned char);
	extern obj_t bgl_close_input_port(obj_t);
	static obj_t BGl_z62sha256sumzd2mmapzb0zz__sha2z00(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sha256sumz00zz__sha2z00(obj_t);
	static obj_t BGl_sha256zd2updatezd2zz__sha2z00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hmaczd2sha256sumzd2stringz00zz__sha2z00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31540ze3ze5zz__sha2z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sha256sumzd2portzd2zz__sha2z00(obj_t);
	extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__sha2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__srfi4z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hmacz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_openzd2mmapzd2zz__mmapz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sha256sumzd2mmapzd2zz__sha2z00(obj_t);
	static long BGl_z62fillzd2word32zd2mmapz12z70zz__sha2z00(obj_t, obj_t, long,
		obj_t, long);
	static uint32_t BGl_addu32z00zz__sha2z00(uint32_t, uint32_t);
	extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl_z62hmaczd2sha256sumzd2stringz62zz__sha2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__sha2z00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__sha2z00();
	extern obj_t BGl_hmaczd2stringzd2zz__hmacz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31539ze3ze5zz__sha2z00(obj_t);
	static obj_t BGl_sha256zd2initialzd2hashzd2valuezd2zz__sha2z00();
	static obj_t BGl_z62sha256sumzd2filezb0zz__sha2z00(obj_t, obj_t);
	extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	extern obj_t blit_string(obj_t, long, obj_t, long, long);
	static obj_t BGl_u32zd2fillz12zc0zz__sha2z00(obj_t, long, uint32_t);
	static obj_t BGl_K256z00zz__sha2z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_sha256sumzd2stringzd2zz__sha2z00(obj_t);
	static obj_t BGl_sha256zd2internalzd2transformz00zz__sha2z00(obj_t, obj_t);
	extern obj_t BGl_readzd2bytezd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sha256sumzd2stringzd2envz00zz__sha2z00,
		BgL_bgl_za762sha256sumza7d2s2397z00,
		BGl_z62sha256sumzd2stringzb0zz__sha2z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sha256sumzd2envzd2zz__sha2z00,
		BgL_bgl_za762sha256sumza762za72398za7, BGl_z62sha256sumz62zz__sha2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sha256sumzd2mmapzd2envz00zz__sha2z00,
		BgL_bgl_za762sha256sumza7d2m2399z00, BGl_z62sha256sumzd2mmapzb0zz__sha2z00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2384z00zz__sha2z00,
		BgL_bgl_string2384za700za7za7_2400za7, "/tmp/4.4a/runtime/Unsafe/sha2.scm",
		33);
	      DEFINE_STRING(BGl_string2385z00zz__sha2z00,
		BgL_bgl_string2385za700za7za7_2401za7, "&sha256sum-mmap", 15);
	      DEFINE_STRING(BGl_string2386z00zz__sha2z00,
		BgL_bgl_string2386za700za7za7_2402za7, "mmap", 4);
	      DEFINE_STRING(BGl_string2388z00zz__sha2z00,
		BgL_bgl_string2388za700za7za7_2403za7, "&sha256sum-string", 17);
	      DEFINE_STRING(BGl_string2389z00zz__sha2z00,
		BgL_bgl_string2389za700za7za7_2404za7, "bstring", 7);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc2383z00zz__sha2z00,
		BgL_bgl_za762fillza7d2word322405z00,
		BGl_z62fillzd2word32zd2mmapz12z70zz__sha2z00);
	      DEFINE_STRING(BGl_string2390z00zz__sha2z00,
		BgL_bgl_string2390za700za7za7_2406za7, "&sha256sum-port", 15);
	      DEFINE_STRING(BGl_string2391z00zz__sha2z00,
		BgL_bgl_string2391za700za7za7_2407za7, "input-port", 10);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc2387z00zz__sha2z00,
		BgL_bgl_za762fillza7d2word322408z00,
		BGl_z62fillzd2word32zd2stringz12z70zz__sha2z00);
	      DEFINE_STRING(BGl_string2392z00zz__sha2z00,
		BgL_bgl_string2392za700za7za7_2409za7, "&sha256sum-file", 15);
	      DEFINE_STRING(BGl_string2393z00zz__sha2z00,
		BgL_bgl_string2393za700za7za7_2410za7, "sha256sum", 9);
	      DEFINE_STRING(BGl_string2394z00zz__sha2z00,
		BgL_bgl_string2394za700za7za7_2411za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string2395z00zz__sha2z00,
		BgL_bgl_string2395za700za7za7_2412za7, "&hmac-sha256sum-string", 22);
	      DEFINE_STRING(BGl_string2396z00zz__sha2z00,
		BgL_bgl_string2396za700za7za7_2413za7, "__sha2", 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sha256sumzd2filezd2envz00zz__sha2z00,
		BgL_bgl_za762sha256sumza7d2f2414z00, BGl_z62sha256sumzd2filezb0zz__sha2z00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_hmaczd2sha256sumzd2stringzd2envzd2zz__sha2z00,
		BgL_bgl_za762hmacza7d2sha2562415z00,
		BGl_z62hmaczd2sha256sumzd2stringz62zz__sha2z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sha256sumzd2portzd2envz00zz__sha2z00,
		BgL_bgl_za762sha256sumza7d2p2416z00, BGl_z62sha256sumzd2portzb0zz__sha2z00,
		0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__sha2z00));
		     ADD_ROOT((void *) (&BGl_K256z00zz__sha2z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__sha2z00(long
		BgL_checksumz00_3870, char *BgL_fromz00_3871)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__sha2z00))
				{
					BGl_requirezd2initializa7ationz75zz__sha2z00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__sha2z00();
					BGl_importedzd2moduleszd2initz00zz__sha2z00();
					return BGl_toplevelzd2initzd2zz__sha2z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__sha2z00()
	{
		{	/* Unsafe/sha2.scm 50 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__sha2z00()
	{
		{	/* Unsafe/sha2.scm 50 */
			{	/* Unsafe/sha2.scm 208 */
				obj_t BgL_vz00_1266;

				{	/* Llib/srfi4.scm 451 */

					BgL_vz00_1266 =
						BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 64), (uint32_t) (0));
				}
				BGL_U32VSET(BgL_vz00_1266, ((long) 0), (uint32_t) (1116352408));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 1), (uint32_t) (1899447441));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 2), (uint32_t) (3049323471));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 3), (uint32_t) (3921009573));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 4), (uint32_t) (961987163));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 5), (uint32_t) (1508970993));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 6), (uint32_t) (2453635748));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 7), (uint32_t) (2870763221));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 8), (uint32_t) (3624381080));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 9), (uint32_t) (310598401));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 10), (uint32_t) (607225278));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 11), (uint32_t) (1426881987));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 12), (uint32_t) (1925078388));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 13), (uint32_t) (2162078206));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 14), (uint32_t) (2614888103));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 15), (uint32_t) (3248222580));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 16), (uint32_t) (3835390401));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 17), (uint32_t) (4022224774));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 18), (uint32_t) (264347078));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 19), (uint32_t) (604807628));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 20), (uint32_t) (770255983));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 21), (uint32_t) (1249150122));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 22), (uint32_t) (1555081692));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 23), (uint32_t) (1996064986));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 24), (uint32_t) (2554220882));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 25), (uint32_t) (2821834349));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 26), (uint32_t) (2952996808));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 27), (uint32_t) (3210313671));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 28), (uint32_t) (3336571891));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 29), (uint32_t) (3584528711));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 30), (uint32_t) (113926993));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 31), (uint32_t) (338241895));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 32), (uint32_t) (666307205));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 33), (uint32_t) (773529912));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 34), (uint32_t) (1294757372));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 35), (uint32_t) (1396182291));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 36), (uint32_t) (1695183700));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 37), (uint32_t) (1986661051));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 38), (uint32_t) (2177026350));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 39), (uint32_t) (2456956037));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 40), (uint32_t) (2730485921));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 41), (uint32_t) (2820302411));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 42), (uint32_t) (3259730800));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 43), (uint32_t) (3345764771));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 44), (uint32_t) (3516065817));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 45), (uint32_t) (3600352804));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 46), (uint32_t) (4094571909));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 47), (uint32_t) (275423344));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 48), (uint32_t) (430227734));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 49), (uint32_t) (506948616));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 50), (uint32_t) (659060556));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 51), (uint32_t) (883997877));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 52), (uint32_t) (958139571));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 53), (uint32_t) (1322822218));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 54), (uint32_t) (1537002063));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 55), (uint32_t) (1747873779));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 56), (uint32_t) (1955562222));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 57), (uint32_t) (2024104815));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 58), (uint32_t) (2227730452));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 59), (uint32_t) (2361852424));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 60), (uint32_t) (2428436474));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 61), (uint32_t) (2756734187));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 62), (uint32_t) (3204031479));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1266, ((long) 63), (uint32_t) (3329325298));
				BUNSPEC;
				return (BGl_K256z00zz__sha2z00 = BgL_vz00_1266, BUNSPEC);
			}
		}

	}



/* addu32 */
	uint32_t BGl_addu32z00zz__sha2z00(uint32_t BgL_n1z00_3, uint32_t BgL_n2z00_4)
	{
		{	/* Unsafe/sha2.scm 127 */
			{	/* Unsafe/sha2.scm 128 */
				uint32_t BgL_h1z00_1277;

				BgL_h1z00_1277 = (BgL_n1z00_3 >> (int) (((long) 16)));
				{	/* Unsafe/sha2.scm 128 */
					uint32_t BgL_h2z00_1278;

					BgL_h2z00_1278 = (BgL_n2z00_4 >> (int) (((long) 16)));
					{	/* Unsafe/sha2.scm 129 */
						uint32_t BgL_hz00_1279;

						{	/* Unsafe/sha2.scm 130 */
							uint32_t BgL_arg1225z00_1286;
							uint32_t BgL_arg1227z00_1287;

							{	/* Unsafe/sha2.scm 130 */
								uint32_t BgL_res1909z00_2201;

								BgL_res1909z00_2201 = (uint32_t) (((long) 65535));
								BgL_arg1225z00_1286 = BgL_res1909z00_2201;
							}
							BgL_arg1227z00_1287 = (BgL_h1z00_1277 + BgL_h2z00_1278);
							BgL_hz00_1279 = (BgL_arg1225z00_1286 & BgL_arg1227z00_1287);
						}
						{	/* Unsafe/sha2.scm 130 */
							uint32_t BgL_l1z00_1280;

							{	/* Unsafe/sha2.scm 131 */
								uint32_t BgL_arg1223z00_1285;

								{	/* Unsafe/sha2.scm 131 */
									uint32_t BgL_res1912z00_2208;

									BgL_res1912z00_2208 = (uint32_t) (((long) 65535));
									BgL_arg1223z00_1285 = BgL_res1912z00_2208;
								}
								BgL_l1z00_1280 = (BgL_n1z00_3 & BgL_arg1223z00_1285);
							}
							{	/* Unsafe/sha2.scm 131 */
								uint32_t BgL_l2z00_1281;

								{	/* Unsafe/sha2.scm 132 */
									uint32_t BgL_arg1221z00_1284;

									{	/* Unsafe/sha2.scm 132 */
										uint32_t BgL_res1914z00_2212;

										BgL_res1914z00_2212 = (uint32_t) (((long) 65535));
										BgL_arg1221z00_1284 = BgL_res1914z00_2212;
									}
									BgL_l2z00_1281 = (BgL_n2z00_4 & BgL_arg1221z00_1284);
								}
								{	/* Unsafe/sha2.scm 134 */

									return
										(
										(BgL_hz00_1279 <<
											(int) (((long) 16))) + (BgL_l1z00_1280 + BgL_l2z00_1281));
		}}}}}}}

	}



/* u32-fill! */
	obj_t BGl_u32zd2fillz12zc0zz__sha2z00(obj_t BgL_strz00_7,
		long BgL_offsetz00_8, uint32_t BgL_wz00_9)
	{
		{	/* Unsafe/sha2.scm 159 */
			{	/* Unsafe/sha2.scm 160 */
				obj_t BgL_s1z00_1291;

				{	/* Unsafe/sha2.scm 160 */
					long BgL_arg1254z00_1303;

					{	/* Unsafe/sha2.scm 160 */
						uint32_t BgL_arg1256z00_1304;

						BgL_arg1256z00_1304 = (BgL_wz00_9 >> (int) (((long) 16)));
						{	/* Unsafe/sha2.scm 160 */
							long BgL_res1924z00_2241;

							BgL_res1924z00_2241 = (long) (BgL_arg1256z00_1304);
							BgL_arg1254z00_1303 = BgL_res1924z00_2241;
					}}
					BgL_s1z00_1291 =
						BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
						(BgL_arg1254z00_1303, ((long) 16));
				}
				{	/* Unsafe/sha2.scm 160 */
					long BgL_l1z00_1292;

					BgL_l1z00_1292 = STRING_LENGTH(BgL_s1z00_1291);
					{	/* Unsafe/sha2.scm 161 */
						obj_t BgL_s2z00_1293;

						{	/* Unsafe/sha2.scm 162 */
							long BgL_arg1250z00_1300;

							{	/* Unsafe/sha2.scm 162 */
								uint32_t BgL_arg1252z00_1301;

								BgL_arg1252z00_1301 =
									(BgL_wz00_9 & ((uint32_t) (65536) - (uint32_t) (((long) 1))));
								{	/* Unsafe/sha2.scm 162 */
									long BgL_res1928z00_2251;

									BgL_res1928z00_2251 = (long) (BgL_arg1252z00_1301);
									BgL_arg1250z00_1300 = BgL_res1928z00_2251;
							}}
							BgL_s2z00_1293 =
								BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
								(BgL_arg1250z00_1300, ((long) 16));
						}
						{	/* Unsafe/sha2.scm 162 */
							long BgL_l2z00_1294;

							BgL_l2z00_1294 = STRING_LENGTH(BgL_s2z00_1293);
							{	/* Unsafe/sha2.scm 163 */

								blit_string(BgL_s1z00_1291, ((long) 0), BgL_strz00_7,
									(BgL_offsetz00_8 +
										(((long) 4) - BgL_l1z00_1292)), BgL_l1z00_1292);
								return
									blit_string(BgL_s2z00_1293, ((long) 0), BgL_strz00_7,
									(BgL_offsetz00_8 +
										(((long) 4) +
											(((long) 4) - BgL_l2z00_1294))), BgL_l2z00_1294);
		}}}}}}

	}



/* state->string */
	obj_t BGl_statezd2ze3stringz31zz__sha2z00(obj_t BgL_statez00_10)
	{
		{	/* Unsafe/sha2.scm 170 */
			{	/* Unsafe/sha2.scm 171 */
				obj_t BgL_rz00_1305;

				BgL_rz00_1305 = make_string(((long) 64), ((unsigned char) '0'));
				{	/* Unsafe/sha2.scm 172 */
					uint32_t BgL_arg1258z00_1306;

					BgL_arg1258z00_1306 = BGL_U32VREF(BgL_statez00_10, ((long) 0));
					BGl_u32zd2fillz12zc0zz__sha2z00(BgL_rz00_1305, ((long) 0),
						BgL_arg1258z00_1306);
				}
				{	/* Unsafe/sha2.scm 173 */
					uint32_t BgL_arg1263z00_1307;

					BgL_arg1263z00_1307 = BGL_U32VREF(BgL_statez00_10, ((long) 1));
					BGl_u32zd2fillz12zc0zz__sha2z00(BgL_rz00_1305, ((long) 8),
						BgL_arg1263z00_1307);
				}
				{	/* Unsafe/sha2.scm 174 */
					uint32_t BgL_arg1268z00_1308;

					BgL_arg1268z00_1308 = BGL_U32VREF(BgL_statez00_10, ((long) 2));
					BGl_u32zd2fillz12zc0zz__sha2z00(BgL_rz00_1305, ((long) 16),
						BgL_arg1268z00_1308);
				}
				{	/* Unsafe/sha2.scm 175 */
					uint32_t BgL_arg1270z00_1309;

					BgL_arg1270z00_1309 = BGL_U32VREF(BgL_statez00_10, ((long) 3));
					BGl_u32zd2fillz12zc0zz__sha2z00(BgL_rz00_1305, ((long) 24),
						BgL_arg1270z00_1309);
				}
				{	/* Unsafe/sha2.scm 176 */
					uint32_t BgL_arg1271z00_1310;

					BgL_arg1271z00_1310 = BGL_U32VREF(BgL_statez00_10, ((long) 4));
					BGl_u32zd2fillz12zc0zz__sha2z00(BgL_rz00_1305, ((long) 32),
						BgL_arg1271z00_1310);
				}
				{	/* Unsafe/sha2.scm 177 */
					uint32_t BgL_arg1273z00_1311;

					BgL_arg1273z00_1311 = BGL_U32VREF(BgL_statez00_10, ((long) 5));
					BGl_u32zd2fillz12zc0zz__sha2z00(BgL_rz00_1305, ((long) 40),
						BgL_arg1273z00_1311);
				}
				{	/* Unsafe/sha2.scm 178 */
					uint32_t BgL_arg1274z00_1312;

					BgL_arg1274z00_1312 = BGL_U32VREF(BgL_statez00_10, ((long) 6));
					BGl_u32zd2fillz12zc0zz__sha2z00(BgL_rz00_1305, ((long) 48),
						BgL_arg1274z00_1312);
				}
				{	/* Unsafe/sha2.scm 179 */
					uint32_t BgL_arg1275z00_1313;

					BgL_arg1275z00_1313 = BGL_U32VREF(BgL_statez00_10, ((long) 7));
					BGl_u32zd2fillz12zc0zz__sha2z00(BgL_rz00_1305, ((long) 56),
						BgL_arg1275z00_1313);
				}
				return BgL_rz00_1305;
			}
		}

	}



/* sha256-initial-hash-value */
	obj_t BGl_sha256zd2initialzd2hashzd2valuezd2zz__sha2z00()
	{
		{	/* Unsafe/sha2.scm 278 */
			{	/* Unsafe/sha2.scm 279 */
				obj_t BgL_vz00_1314;

				{	/* Llib/srfi4.scm 451 */

					BgL_vz00_1314 =
						BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 8), (uint32_t) (0));
				}
				BGL_U32VSET(BgL_vz00_1314, ((long) 0), (uint32_t) (1779033703));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1314, ((long) 1), (uint32_t) (3144134277));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1314, ((long) 2), (uint32_t) (1013904242));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1314, ((long) 3), (uint32_t) (2773480762));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1314, ((long) 4), (uint32_t) (1359893119));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1314, ((long) 5), (uint32_t) (2600822924));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1314, ((long) 6), (uint32_t) (528734635));
				BUNSPEC;
				BGL_U32VSET(BgL_vz00_1314, ((long) 7), (uint32_t) (1541459225));
				BUNSPEC;
				return BgL_vz00_1314;
			}
		}

	}



/* Sigma1-256 */
	uint32_t BGl_Sigma1zd2256zd2zz__sha2z00(uint32_t BgL_xz00_19)
	{
		{	/* Unsafe/sha2.scm 317 */
			return
				(
				((BgL_xz00_19 >>
						(int) (((long) 6))) |
					(BgL_xz00_19 <<
						(int) (
							(((long) 32) - ((long) 6))))) ^
				(((BgL_xz00_19 >>
							(int) (((long) 11))) |
						(BgL_xz00_19 <<
							(int) (
								(((long) 32) - ((long) 11))))) ^
					((BgL_xz00_19 >>
							(int) (((long) 25))) |
						(BgL_xz00_19 << (int) ((((long) 32) - ((long) 25)))))));
		}

	}



/* sha256-internal-transform */
	obj_t BGl_sha256zd2internalzd2transformz00zz__sha2z00(obj_t BgL_statez00_29,
		obj_t BgL_bufferz00_30)
	{
		{	/* Unsafe/sha2.scm 341 */
			{
				obj_t BgL_statez00_1435;
				uint32_t BgL_az00_1436;
				uint32_t BgL_bz00_1437;
				uint32_t BgL_cz00_1438;
				uint32_t BgL_dz00_1439;
				uint32_t BgL_ez00_1440;
				uint32_t BgL_fz00_1441;
				uint32_t BgL_gz00_1442;
				uint32_t BgL_hz00_1443;

				{	/* Unsafe/sha2.scm 378 */
					uint32_t BgL_g1051z00_1344;
					uint32_t BgL_g1052z00_1345;
					uint32_t BgL_g1053z00_1346;
					uint32_t BgL_g1054z00_1347;
					uint32_t BgL_g1055z00_1348;
					uint32_t BgL_g1056z00_1349;
					uint32_t BgL_g1057z00_1350;
					uint32_t BgL_g1058z00_1351;

					{	/* Unsafe/sha2.scm 378 */
						uint32_t BgL_res2041z00_2581;

						BgL_res2041z00_2581 = BGL_U32VREF(BgL_statez00_29, ((long) 0));
						BgL_g1051z00_1344 = BgL_res2041z00_2581;
					}
					{	/* Unsafe/sha2.scm 379 */
						uint32_t BgL_res2042z00_2582;

						BgL_res2042z00_2582 = BGL_U32VREF(BgL_statez00_29, ((long) 1));
						BgL_g1052z00_1345 = BgL_res2042z00_2582;
					}
					{	/* Unsafe/sha2.scm 380 */
						uint32_t BgL_res2043z00_2583;

						BgL_res2043z00_2583 = BGL_U32VREF(BgL_statez00_29, ((long) 2));
						BgL_g1053z00_1346 = BgL_res2043z00_2583;
					}
					{	/* Unsafe/sha2.scm 381 */
						uint32_t BgL_res2044z00_2584;

						BgL_res2044z00_2584 = BGL_U32VREF(BgL_statez00_29, ((long) 3));
						BgL_g1054z00_1347 = BgL_res2044z00_2584;
					}
					{	/* Unsafe/sha2.scm 382 */
						uint32_t BgL_res2045z00_2585;

						BgL_res2045z00_2585 = BGL_U32VREF(BgL_statez00_29, ((long) 4));
						BgL_g1055z00_1348 = BgL_res2045z00_2585;
					}
					{	/* Unsafe/sha2.scm 383 */
						uint32_t BgL_res2046z00_2586;

						BgL_res2046z00_2586 = BGL_U32VREF(BgL_statez00_29, ((long) 5));
						BgL_g1056z00_1349 = BgL_res2046z00_2586;
					}
					{	/* Unsafe/sha2.scm 384 */
						uint32_t BgL_res2047z00_2587;

						BgL_res2047z00_2587 = BGL_U32VREF(BgL_statez00_29, ((long) 6));
						BgL_g1057z00_1350 = BgL_res2047z00_2587;
					}
					{	/* Unsafe/sha2.scm 385 */
						uint32_t BgL_res2048z00_2588;

						BgL_res2048z00_2588 = BGL_U32VREF(BgL_statez00_29, ((long) 7));
						BgL_g1058z00_1351 = BgL_res2048z00_2588;
					}
					{
						uint32_t BgL_az00_1353;
						uint32_t BgL_bz00_1354;
						uint32_t BgL_cz00_1355;
						uint32_t BgL_dz00_1356;
						uint32_t BgL_ez00_1357;
						uint32_t BgL_fz00_1358;
						uint32_t BgL_gz00_1359;
						uint32_t BgL_hz00_1360;
						long BgL_jz00_1361;

						BgL_az00_1353 = BgL_g1051z00_1344;
						BgL_bz00_1354 = BgL_g1052z00_1345;
						BgL_cz00_1355 = BgL_g1053z00_1346;
						BgL_dz00_1356 = BgL_g1054z00_1347;
						BgL_ez00_1357 = BgL_g1055z00_1348;
						BgL_fz00_1358 = BgL_g1056z00_1349;
						BgL_gz00_1359 = BgL_g1057z00_1350;
						BgL_hz00_1360 = BgL_g1058z00_1351;
						BgL_jz00_1361 = ((long) 0);
					BgL_zc3z04anonymousza31304ze3z87_1362:
						if ((BgL_jz00_1361 < ((long) 16)))
							{	/* Unsafe/sha2.scm 389 */
								uint32_t BgL_wz00_1364;

								BgL_wz00_1364 = BGL_U32VREF(BgL_bufferz00_30, BgL_jz00_1361);
								{	/* Unsafe/sha2.scm 389 */
									uint32_t BgL_t1z00_1365;

									{	/* Unsafe/sha2.scm 344 */
										uint32_t BgL_arg1334z00_2592;

										{	/* Unsafe/sha2.scm 344 */
											uint32_t BgL_arg1335z00_2593;
											uint32_t BgL_arg1337z00_2594;

											BgL_arg1335z00_2593 =
												BGl_Sigma1zd2256zd2zz__sha2z00(BgL_ez00_1357);
											{	/* Unsafe/sha2.scm 344 */
												uint32_t BgL_arg1338z00_2595;
												uint32_t BgL_arg1339z00_2596;

												BgL_arg1338z00_2595 =
													(
													(BgL_ez00_1357 & BgL_fz00_1358) ^
													(~(BgL_ez00_1357) & BgL_gz00_1359));
												{	/* Unsafe/sha2.scm 345 */
													uint32_t BgL_arg1340z00_2597;

													BgL_arg1340z00_2597 =
														BGL_U32VREF(BGl_K256z00zz__sha2z00, BgL_jz00_1361);
													BgL_arg1339z00_2596 =
														BGl_addu32z00zz__sha2z00(BgL_arg1340z00_2597,
														BgL_wz00_1364);
												}
												BgL_arg1337z00_2594 =
													BGl_addu32z00zz__sha2z00(BgL_arg1338z00_2595,
													BgL_arg1339z00_2596);
											}
											BgL_arg1334z00_2592 =
												BGl_addu32z00zz__sha2z00(BgL_arg1335z00_2593,
												BgL_arg1337z00_2594);
										}
										BgL_t1z00_1365 =
											BGl_addu32z00zz__sha2z00(BgL_hz00_1360,
											BgL_arg1334z00_2592);
									}
									{	/* Unsafe/sha2.scm 390 */
										uint32_t BgL_t2z00_1366;

										BgL_t2z00_1366 =
											BGl_addu32z00zz__sha2z00(
											(((BgL_az00_1353 >>
														(int) (((long) 2))) |
													(BgL_az00_1353 <<
														(int) (
															(((long) 32) - ((long) 2))))) ^
												(((BgL_az00_1353 >>
															(int) (((long) 13))) |
														(BgL_az00_1353 <<
															(int) (
																(((long) 32) - ((long) 13))))) ^
													((BgL_az00_1353 >>
															(int) (((long) 22))) |
														(BgL_az00_1353 <<
															(int) (
																(((long) 32) - ((long) 22))))))),
											((BgL_az00_1353 & BgL_bz00_1354) ^
												((BgL_az00_1353 & BgL_cz00_1355) ^
													(BgL_bz00_1354 & BgL_cz00_1355))));
										{	/* Unsafe/sha2.scm 391 */

											{
												long BgL_jz00_4080;
												uint32_t BgL_hz00_4079;
												uint32_t BgL_gz00_4078;
												uint32_t BgL_fz00_4077;
												uint32_t BgL_ez00_4075;
												uint32_t BgL_dz00_4074;
												uint32_t BgL_cz00_4073;
												uint32_t BgL_bz00_4072;
												uint32_t BgL_az00_4070;

												BgL_az00_4070 =
													BGl_addu32z00zz__sha2z00(BgL_t1z00_1365,
													BgL_t2z00_1366);
												BgL_bz00_4072 = BgL_az00_1353;
												BgL_cz00_4073 = BgL_bz00_1354;
												BgL_dz00_4074 = BgL_cz00_1355;
												BgL_ez00_4075 =
													BGl_addu32z00zz__sha2z00(BgL_dz00_1356,
													BgL_t1z00_1365);
												BgL_fz00_4077 = BgL_ez00_1357;
												BgL_gz00_4078 = BgL_fz00_1358;
												BgL_hz00_4079 = BgL_gz00_1359;
												BgL_jz00_4080 = (BgL_jz00_1361 + ((long) 1));
												BgL_jz00_1361 = BgL_jz00_4080;
												BgL_hz00_1360 = BgL_hz00_4079;
												BgL_gz00_1359 = BgL_gz00_4078;
												BgL_fz00_1358 = BgL_fz00_4077;
												BgL_ez00_1357 = BgL_ez00_4075;
												BgL_dz00_1356 = BgL_dz00_4074;
												BgL_cz00_1355 = BgL_cz00_4073;
												BgL_bz00_1354 = BgL_bz00_4072;
												BgL_az00_1353 = BgL_az00_4070;
												goto BgL_zc3z04anonymousza31304ze3z87_1362;
											}
										}
									}
								}
							}
						else
							{	/* Unsafe/sha2.scm 388 */
								if ((BgL_jz00_1361 < ((long) 64)))
									{	/* Unsafe/sha2.scm 394 */
										uint32_t BgL_s0z00_1374;

										{	/* Unsafe/sha2.scm 394 */
											uint32_t BgL_arg1330z00_1394;

											{	/* Unsafe/sha2.scm 394 */
												long BgL_arg1331z00_1395;

												BgL_arg1331z00_1395 = (BgL_jz00_1361 + ((long) 1));
												{	/* Unsafe/sha2.scm 349 */
													long BgL_tmpz00_4085;

													BgL_tmpz00_4085 = (BgL_arg1331z00_1395 & ((long) 15));
													BgL_arg1330z00_1394 =
														BGL_U32VREF(BgL_bufferz00_30, BgL_tmpz00_4085);
											}}
											BgL_s0z00_1374 =
												(
												((BgL_arg1330z00_1394 >>
														(int) (((long) 7))) |
													(BgL_arg1330z00_1394 <<
														(int) (
															(((long) 32) - ((long) 7))))) ^
												(((BgL_arg1330z00_1394 >>
															(int) (((long) 18))) |
														(BgL_arg1330z00_1394 <<
															(int) (
																(((long) 32) - ((long) 18))))) ^
													(BgL_arg1330z00_1394 >> (int) (((long) 3)))));
										}
										{	/* Unsafe/sha2.scm 394 */
											uint32_t BgL_s1z00_1375;

											{	/* Unsafe/sha2.scm 395 */
												uint32_t BgL_arg1327z00_1391;

												{	/* Unsafe/sha2.scm 395 */
													long BgL_arg1328z00_1392;

													BgL_arg1328z00_1392 = (BgL_jz00_1361 + ((long) 14));
													{	/* Unsafe/sha2.scm 349 */
														long BgL_tmpz00_4105;

														BgL_tmpz00_4105 =
															(BgL_arg1328z00_1392 & ((long) 15));
														BgL_arg1327z00_1391 =
															BGL_U32VREF(BgL_bufferz00_30, BgL_tmpz00_4105);
												}}
												BgL_s1z00_1375 =
													(
													((BgL_arg1327z00_1391 >>
															(int) (((long) 17))) |
														(BgL_arg1327z00_1391 <<
															(int) (
																(((long) 32) - ((long) 17))))) ^
													(((BgL_arg1327z00_1391 >>
																(int) (((long) 19))) |
															(BgL_arg1327z00_1391 <<
																(int) (
																	(((long) 32) - ((long) 19))))) ^
														(BgL_arg1327z00_1391 >> (int) (((long) 10)))));
											}
											{	/* Unsafe/sha2.scm 395 */
												long BgL_ndxz00_1376;

												BgL_ndxz00_1376 =
													(BgL_jz00_1361 &
													LLONG_TO_LONG(((BGL_LONGLONG_T) 15)));
												{	/* Unsafe/sha2.scm 396 */
													uint32_t BgL_wz00_1377;

													{	/* Unsafe/sha2.scm 397 */
														uint32_t BgL_arg1319z00_1386;
														uint32_t BgL_arg1322z00_1387;

														{	/* Unsafe/sha2.scm 349 */
															long BgL_tmpz00_4126;

															BgL_tmpz00_4126 = (BgL_jz00_1361 & ((long) 15));
															BgL_arg1319z00_1386 =
																BGL_U32VREF(BgL_bufferz00_30, BgL_tmpz00_4126);
														}
														{	/* Unsafe/sha2.scm 397 */
															uint32_t BgL_arg1324z00_1388;

															{	/* Unsafe/sha2.scm 397 */
																uint32_t BgL_arg1325z00_1389;

																{	/* Unsafe/sha2.scm 397 */
																	long BgL_arg1326z00_1390;

																	BgL_arg1326z00_1390 =
																		(BgL_jz00_1361 + ((long) 9));
																	{	/* Unsafe/sha2.scm 349 */
																		long BgL_tmpz00_4130;

																		BgL_tmpz00_4130 =
																			(BgL_arg1326z00_1390 & ((long) 15));
																		BgL_arg1325z00_1389 =
																			BGL_U32VREF(BgL_bufferz00_30,
																			BgL_tmpz00_4130);
																}}
																BgL_arg1324z00_1388 =
																	BGl_addu32z00zz__sha2z00(BgL_arg1325z00_1389,
																	BgL_s0z00_1374);
															}
															BgL_arg1322z00_1387 =
																BGl_addu32z00zz__sha2z00(BgL_s1z00_1375,
																BgL_arg1324z00_1388);
														}
														BgL_wz00_1377 =
															BGl_addu32z00zz__sha2z00(BgL_arg1319z00_1386,
															BgL_arg1322z00_1387);
													}
													{	/* Unsafe/sha2.scm 397 */
														uint32_t BgL_t1z00_1378;

														{	/* Unsafe/sha2.scm 344 */
															uint32_t BgL_arg1334z00_2814;

															{	/* Unsafe/sha2.scm 344 */
																uint32_t BgL_arg1335z00_2815;
																uint32_t BgL_arg1337z00_2816;

																BgL_arg1335z00_2815 =
																	BGl_Sigma1zd2256zd2zz__sha2z00(BgL_ez00_1357);
																{	/* Unsafe/sha2.scm 344 */
																	uint32_t BgL_arg1338z00_2817;
																	uint32_t BgL_arg1339z00_2818;

																	BgL_arg1338z00_2817 =
																		(
																		(BgL_ez00_1357 & BgL_fz00_1358) ^
																		(~(BgL_ez00_1357) & BgL_gz00_1359));
																	{	/* Unsafe/sha2.scm 345 */
																		uint32_t BgL_arg1340z00_2819;

																		BgL_arg1340z00_2819 =
																			BGL_U32VREF(BGl_K256z00zz__sha2z00,
																			BgL_jz00_1361);
																		BgL_arg1339z00_2818 =
																			BGl_addu32z00zz__sha2z00
																			(BgL_arg1340z00_2819, BgL_wz00_1377);
																	}
																	BgL_arg1337z00_2816 =
																		BGl_addu32z00zz__sha2z00
																		(BgL_arg1338z00_2817, BgL_arg1339z00_2818);
																}
																BgL_arg1334z00_2814 =
																	BGl_addu32z00zz__sha2z00(BgL_arg1335z00_2815,
																	BgL_arg1337z00_2816);
															}
															BgL_t1z00_1378 =
																BGl_addu32z00zz__sha2z00(BgL_hz00_1360,
																BgL_arg1334z00_2814);
														}
														{	/* Unsafe/sha2.scm 398 */
															uint32_t BgL_t2z00_1379;

															BgL_t2z00_1379 =
																BGl_addu32z00zz__sha2z00(
																(((BgL_az00_1353 >>
																			(int) (((long) 2))) |
																		(BgL_az00_1353 <<
																			(int) (
																				(((long) 32) - ((long) 2))))) ^
																	(((BgL_az00_1353 >>
																				(int) (((long) 13))) |
																			(BgL_az00_1353 <<
																				(int) (
																					(((long) 32) - ((long) 13))))) ^
																		((BgL_az00_1353 >>
																				(int) (((long) 22))) |
																			(BgL_az00_1353 <<
																				(int) (
																					(((long) 32) - ((long) 22))))))),
																((BgL_az00_1353 & BgL_bz00_1354) ^
																	((BgL_az00_1353 & BgL_cz00_1355) ^
																		(BgL_bz00_1354 & BgL_cz00_1355))));
															{	/* Unsafe/sha2.scm 399 */

																BGL_U32VSET(BgL_bufferz00_30, BgL_ndxz00_1376,
																	BgL_wz00_1377);
																BUNSPEC;
																{
																	long BgL_jz00_4183;
																	uint32_t BgL_hz00_4182;
																	uint32_t BgL_gz00_4181;
																	uint32_t BgL_fz00_4180;
																	uint32_t BgL_ez00_4178;
																	uint32_t BgL_dz00_4177;
																	uint32_t BgL_cz00_4176;
																	uint32_t BgL_bz00_4175;
																	uint32_t BgL_az00_4173;

																	BgL_az00_4173 =
																		BGl_addu32z00zz__sha2z00(BgL_t1z00_1378,
																		BgL_t2z00_1379);
																	BgL_bz00_4175 = BgL_az00_1353;
																	BgL_cz00_4176 = BgL_bz00_1354;
																	BgL_dz00_4177 = BgL_cz00_1355;
																	BgL_ez00_4178 =
																		BGl_addu32z00zz__sha2z00(BgL_dz00_1356,
																		BgL_t1z00_1378);
																	BgL_fz00_4180 = BgL_ez00_1357;
																	BgL_gz00_4181 = BgL_fz00_1358;
																	BgL_hz00_4182 = BgL_gz00_1359;
																	BgL_jz00_4183 = (BgL_jz00_1361 + ((long) 1));
																	BgL_jz00_1361 = BgL_jz00_4183;
																	BgL_hz00_1360 = BgL_hz00_4182;
																	BgL_gz00_1359 = BgL_gz00_4181;
																	BgL_fz00_1358 = BgL_fz00_4180;
																	BgL_ez00_1357 = BgL_ez00_4178;
																	BgL_dz00_1356 = BgL_dz00_4177;
																	BgL_cz00_1355 = BgL_cz00_4176;
																	BgL_bz00_1354 = BgL_bz00_4175;
																	BgL_az00_1353 = BgL_az00_4173;
																	goto BgL_zc3z04anonymousza31304ze3z87_1362;
																}
															}
														}
													}
												}
											}
										}
									}
								else
									{	/* Unsafe/sha2.scm 393 */
										BgL_statez00_1435 = BgL_statez00_29;
										BgL_az00_1436 = BgL_az00_1353;
										BgL_bz00_1437 = BgL_bz00_1354;
										BgL_cz00_1438 = BgL_cz00_1355;
										BgL_dz00_1439 = BgL_dz00_1356;
										BgL_ez00_1440 = BgL_ez00_1357;
										BgL_fz00_1441 = BgL_fz00_1358;
										BgL_gz00_1442 = BgL_gz00_1359;
										BgL_hz00_1443 = BgL_hz00_1360;
										{	/* Unsafe/sha2.scm 360 */
											uint32_t BgL_oaz00_1445;
											uint32_t BgL_obz00_1446;
											uint32_t BgL_ocz00_1447;
											uint32_t BgL_odz00_1448;
											uint32_t BgL_oez00_1449;
											uint32_t BgL_ofz00_1450;
											uint32_t BgL_ogz00_1451;
											uint32_t BgL_ohz00_1452;

											{	/* Unsafe/sha2.scm 360 */
												uint32_t BgL_res2033z00_2573;

												BgL_res2033z00_2573 =
													BGL_U32VREF(BgL_statez00_1435, ((long) 0));
												BgL_oaz00_1445 = BgL_res2033z00_2573;
											}
											{	/* Unsafe/sha2.scm 361 */
												uint32_t BgL_res2034z00_2574;

												BgL_res2034z00_2574 =
													BGL_U32VREF(BgL_statez00_1435, ((long) 1));
												BgL_obz00_1446 = BgL_res2034z00_2574;
											}
											{	/* Unsafe/sha2.scm 362 */
												uint32_t BgL_res2035z00_2575;

												BgL_res2035z00_2575 =
													BGL_U32VREF(BgL_statez00_1435, ((long) 2));
												BgL_ocz00_1447 = BgL_res2035z00_2575;
											}
											{	/* Unsafe/sha2.scm 363 */
												uint32_t BgL_res2036z00_2576;

												BgL_res2036z00_2576 =
													BGL_U32VREF(BgL_statez00_1435, ((long) 3));
												BgL_odz00_1448 = BgL_res2036z00_2576;
											}
											{	/* Unsafe/sha2.scm 364 */
												uint32_t BgL_res2037z00_2577;

												BgL_res2037z00_2577 =
													BGL_U32VREF(BgL_statez00_1435, ((long) 4));
												BgL_oez00_1449 = BgL_res2037z00_2577;
											}
											{	/* Unsafe/sha2.scm 365 */
												uint32_t BgL_res2038z00_2578;

												BgL_res2038z00_2578 =
													BGL_U32VREF(BgL_statez00_1435, ((long) 5));
												BgL_ofz00_1450 = BgL_res2038z00_2578;
											}
											{	/* Unsafe/sha2.scm 366 */
												uint32_t BgL_res2039z00_2579;

												BgL_res2039z00_2579 =
													BGL_U32VREF(BgL_statez00_1435, ((long) 6));
												BgL_ogz00_1451 = BgL_res2039z00_2579;
											}
											{	/* Unsafe/sha2.scm 367 */
												uint32_t BgL_res2040z00_2580;

												BgL_res2040z00_2580 =
													BGL_U32VREF(BgL_statez00_1435, ((long) 7));
												BgL_ohz00_1452 = BgL_res2040z00_2580;
											}
											{	/* Unsafe/sha2.scm 369 */
												uint32_t BgL_arg1364z00_1454;

												BgL_arg1364z00_1454 =
													BGl_addu32z00zz__sha2z00(BgL_oaz00_1445,
													BgL_az00_1436);
												BGL_U32VSET(BgL_statez00_1435, ((long) 0),
													BgL_arg1364z00_1454);
												BUNSPEC;
											}
											{	/* Unsafe/sha2.scm 370 */
												uint32_t BgL_arg1365z00_1455;

												BgL_arg1365z00_1455 =
													BGl_addu32z00zz__sha2z00(BgL_obz00_1446,
													BgL_bz00_1437);
												BGL_U32VSET(BgL_statez00_1435, ((long) 1),
													BgL_arg1365z00_1455);
												BUNSPEC;
											}
											{	/* Unsafe/sha2.scm 371 */
												uint32_t BgL_arg1367z00_1456;

												BgL_arg1367z00_1456 =
													BGl_addu32z00zz__sha2z00(BgL_ocz00_1447,
													BgL_cz00_1438);
												BGL_U32VSET(BgL_statez00_1435, ((long) 2),
													BgL_arg1367z00_1456);
												BUNSPEC;
											}
											{	/* Unsafe/sha2.scm 372 */
												uint32_t BgL_arg1368z00_1457;

												BgL_arg1368z00_1457 =
													BGl_addu32z00zz__sha2z00(BgL_odz00_1448,
													BgL_dz00_1439);
												BGL_U32VSET(BgL_statez00_1435, ((long) 3),
													BgL_arg1368z00_1457);
												BUNSPEC;
											}
											{	/* Unsafe/sha2.scm 373 */
												uint32_t BgL_arg1370z00_1458;

												BgL_arg1370z00_1458 =
													BGl_addu32z00zz__sha2z00(BgL_oez00_1449,
													BgL_ez00_1440);
												BGL_U32VSET(BgL_statez00_1435, ((long) 4),
													BgL_arg1370z00_1458);
												BUNSPEC;
											}
											{	/* Unsafe/sha2.scm 374 */
												uint32_t BgL_arg1371z00_1459;

												BgL_arg1371z00_1459 =
													BGl_addu32z00zz__sha2z00(BgL_ofz00_1450,
													BgL_fz00_1441);
												BGL_U32VSET(BgL_statez00_1435, ((long) 5),
													BgL_arg1371z00_1459);
												BUNSPEC;
											}
											{	/* Unsafe/sha2.scm 375 */
												uint32_t BgL_arg1372z00_1460;

												BgL_arg1372z00_1460 =
													BGl_addu32z00zz__sha2z00(BgL_ogz00_1451,
													BgL_gz00_1442);
												BGL_U32VSET(BgL_statez00_1435, ((long) 6),
													BgL_arg1372z00_1460);
												BUNSPEC;
											}
											{	/* Unsafe/sha2.scm 376 */
												uint32_t BgL_arg1373z00_1461;

												BgL_arg1373z00_1461 =
													BGl_addu32z00zz__sha2z00(BgL_ohz00_1452,
													BgL_hz00_1443);
												BGL_U32VSET(BgL_statez00_1435, ((long) 7),
													BgL_arg1373z00_1461);
												BUNSPEC;
										}}
										return BgL_statez00_29;
									}
							}
					}
				}
			}
		}

	}



/* sha256-update */
	obj_t BGl_sha256zd2updatezd2zz__sha2z00(obj_t BgL_statez00_31,
		obj_t BgL_bufferz00_32, obj_t BgL_oz00_33, obj_t BgL_fillzd2wordz12zc0_34)
	{
		{	/* Unsafe/sha2.scm 409 */
			{
				obj_t BgL_bufferz00_1486;
				long BgL_iz00_1487;

				{
					long BgL_iz00_1469;
					long BgL_lz00_1470;

					BgL_iz00_1469 = ((long) 0);
					BgL_lz00_1470 = ((long) 0);
				BgL_zc3z04anonymousza31374ze3z87_1471:
					{	/* Unsafe/sha2.scm 429 */
						long BgL_bytesz00_1472;

						BgL_bufferz00_1486 = BgL_bufferz00_32;
						BgL_iz00_1487 = BgL_iz00_1469;
						{
							long BgL_jz00_2941;
							long BgL_iz00_2942;
							long BgL_nz00_2943;

							BgL_jz00_2941 = ((long) 0);
							BgL_iz00_2942 = BgL_iz00_1487;
							BgL_nz00_2943 = ((long) 0);
						BgL_loopz00_2940:
							if ((BgL_jz00_2941 < ((long) 16)))
								{	/* Unsafe/sha2.scm 418 */
									long BgL_arg1388z00_2950;
									long BgL_arg1389z00_2951;
									long BgL_arg1390z00_2952;

									BgL_arg1388z00_2950 = (BgL_jz00_2941 + ((long) 1));
									BgL_arg1389z00_2951 = (BgL_iz00_2942 + ((long) 4));
									{	/* Unsafe/sha2.scm 418 */
										long BgL_arg1391z00_2953;

										BgL_arg1391z00_2953 =
											((long (*)())
											PROCEDURE_L_ENTRY(BgL_fillzd2wordz12zc0_34))
											(BgL_fillzd2wordz12zc0_34, BgL_bufferz00_1486,
											BgL_jz00_2941, BgL_oz00_33, BgL_iz00_2942);
										BgL_arg1390z00_2952 =
											(long)
											CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(BgL_nz00_2943),
												BINT(BgL_arg1391z00_2953)));
									}
									{
										long BgL_nz00_4226;
										long BgL_iz00_4225;
										long BgL_jz00_4224;

										BgL_jz00_4224 = BgL_arg1388z00_2950;
										BgL_iz00_4225 = BgL_arg1389z00_2951;
										BgL_nz00_4226 = BgL_arg1390z00_2952;
										BgL_nz00_2943 = BgL_nz00_4226;
										BgL_iz00_2942 = BgL_iz00_4225;
										BgL_jz00_2941 = BgL_jz00_4224;
										goto BgL_loopz00_2940;
									}
								}
							else
								{	/* Unsafe/sha2.scm 417 */
									BgL_bytesz00_1472 = BgL_nz00_2943;
								}
						}
						if ((BgL_bytesz00_1472 == ((long) 64)))
							{	/* Unsafe/sha2.scm 431 */
								BGl_sha256zd2internalzd2transformz00zz__sha2z00(BgL_statez00_31,
									BgL_bufferz00_32);
								{
									long BgL_lz00_4232;
									long BgL_iz00_4230;

									BgL_iz00_4230 = (BgL_iz00_1469 + ((long) 64));
									BgL_lz00_4232 = (BgL_lz00_1470 + ((long) 64));
									BgL_lz00_1470 = BgL_lz00_4232;
									BgL_iz00_1469 = BgL_iz00_4230;
									goto BgL_zc3z04anonymousza31374ze3z87_1471;
								}
							}
						else
							{	/* Unsafe/sha2.scm 431 */
								if (((((long) 64) - BgL_bytesz00_1472) >= ((long) 8)))
									{	/* Unsafe/sha2.scm 435 */
										{	/* Unsafe/sha2.scm 438 */
											uint32_t BgL_ulenz00_1478;

											{	/* Unsafe/sha2.scm 438 */
												long BgL_tmpz00_4237;

												BgL_tmpz00_4237 =
													(((long) 8) *
													((BgL_lz00_1470 - ((long) 1)) + BgL_bytesz00_1472));
												BgL_ulenz00_1478 = (uint32_t) (BgL_tmpz00_4237);
											}
											BGL_U32VSET(BgL_bufferz00_32, ((long) 15),
												BgL_ulenz00_1478);
											BUNSPEC;
										}
										return
											BGl_sha256zd2internalzd2transformz00zz__sha2z00
											(BgL_statez00_31, BgL_bufferz00_32);
									}
								else
									{	/* Unsafe/sha2.scm 435 */
										BGl_sha256zd2internalzd2transformz00zz__sha2z00
											(BgL_statez00_31, BgL_bufferz00_32);
										{
											long BgL_iz00_2996;

											BgL_iz00_2996 = ((long) 0);
										BgL_loopz00_2995:
											if ((BgL_iz00_2996 < ((long) 15)))
												{	/* Unsafe/sha2.scm 423 */
													BGL_U32VSET(BgL_bufferz00_32, BgL_iz00_2996,
														(uint32_t) (0));
													BUNSPEC;
													{
														long BgL_iz00_4248;

														BgL_iz00_4248 = (BgL_iz00_2996 + ((long) 1));
														BgL_iz00_2996 = BgL_iz00_4248;
														goto BgL_loopz00_2995;
													}
												}
											else
												{	/* Unsafe/sha2.scm 423 */
													((bool_t) 0);
												}
										}
										{	/* Unsafe/sha2.scm 445 */
											uint32_t BgL_ulenz00_1481;

											{	/* Unsafe/sha2.scm 445 */
												long BgL_tmpz00_4250;

												BgL_tmpz00_4250 =
													(((long) 8) *
													((BgL_lz00_1470 - ((long) 1)) + BgL_bytesz00_1472));
												BgL_ulenz00_1481 = (uint32_t) (BgL_tmpz00_4250);
											}
											BGL_U32VSET(BgL_bufferz00_32, ((long) 15),
												BgL_ulenz00_1481);
											BUNSPEC;
										}
										return
											BGl_sha256zd2internalzd2transformz00zz__sha2z00
											(BgL_statez00_31, BgL_bufferz00_32);
									}
							}
					}
				}
			}
		}

	}



/* sha256sum-mmap */
	BGL_EXPORTED_DEF obj_t BGl_sha256sumzd2mmapzd2zz__sha2z00(obj_t BgL_mmz00_35)
	{
		{	/* Unsafe/sha2.scm 452 */
			{	/* Unsafe/sha2.scm 489 */
				obj_t BgL_statez00_1514;
				obj_t BgL_bufferz00_1515;

				BgL_statez00_1514 = BGl_sha256zd2initialzd2hashzd2valuezd2zz__sha2z00();
				{	/* Llib/srfi4.scm 451 */

					BgL_bufferz00_1515 =
						BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 16), (uint32_t) (0));
				}
				BGl_sha256zd2updatezd2zz__sha2z00(BgL_statez00_1514, BgL_bufferz00_1515,
					BgL_mmz00_35, BGl_proc2383z00zz__sha2z00);
				return BGl_statezd2ze3stringz31zz__sha2z00(BgL_statez00_1514);
			}
		}

	}



/* &sha256sum-mmap */
	obj_t BGl_z62sha256sumzd2mmapzb0zz__sha2z00(obj_t BgL_envz00_3632,
		obj_t BgL_mmz00_3633)
	{
		{	/* Unsafe/sha2.scm 452 */
			{	/* Unsafe/sha2.scm 455 */
				obj_t BgL_auxz00_4261;

				if (BGL_MMAPP(BgL_mmz00_3633))
					{	/* Unsafe/sha2.scm 455 */
						BgL_auxz00_4261 = BgL_mmz00_3633;
					}
				else
					{
						obj_t BgL_auxz00_4264;

						BgL_auxz00_4264 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2384z00zz__sha2z00,
							BINT(((long) 19399)), BGl_string2385z00zz__sha2z00,
							BGl_string2386z00zz__sha2z00, BgL_mmz00_3633);
						FAILURE(BgL_auxz00_4264, BFALSE, BFALSE);
					}
				return BGl_sha256sumzd2mmapzd2zz__sha2z00(BgL_auxz00_4261);
			}
		}

	}



/* &fill-word32-mmap! */
	long BGl_z62fillzd2word32zd2mmapz12z70zz__sha2z00(obj_t BgL_envz00_3634,
		obj_t BgL_v32z00_3635, long BgL_iz00_3636, obj_t BgL_mmz00_3637,
		long BgL_nz00_3638)
	{
		{	/* Unsafe/sha2.scm 487 */
			{	/* Unsafe/sha2.scm 458 */
				long BgL_lz00_3689;

				{	/* Unsafe/sha2.scm 458 */
					long BgL_res2176z00_3690;

					{	/* Unsafe/sha2.scm 458 */
						obj_t BgL_tmpz00_4269;

						BgL_tmpz00_4269 = ((obj_t) BgL_mmz00_3637);
						BgL_res2176z00_3690 = BGL_MMAP_LENGTH(BgL_tmpz00_4269);
					}
					BgL_lz00_3689 = BgL_res2176z00_3690;
				}
				{	/* Unsafe/sha2.scm 460 */
					bool_t BgL_test2425z00_4272;

					{	/* Unsafe/sha2.scm 460 */
						long BgL_n2z00_3691;

						BgL_n2z00_3691 = (long) (BgL_lz00_3689);
						BgL_test2425z00_4272 =
							((BgL_nz00_3638 + ((long) 4)) <= BgL_n2z00_3691);
					}
					if (BgL_test2425z00_4272)
						{	/* Unsafe/sha2.scm 461 */
							uint32_t BgL_v0z00_3692;

							{	/* Unsafe/sha2.scm 455 */
								unsigned char BgL_arg1397z00_3693;

								{	/* Unsafe/sha2.scm 455 */
									long BgL_auxz00_4278;
									obj_t BgL_tmpz00_4276;

									BgL_auxz00_4278 = (long) (BgL_nz00_3638);
									BgL_tmpz00_4276 = ((obj_t) BgL_mmz00_3637);
									BgL_arg1397z00_3693 =
										BGL_MMAP_REF(BgL_tmpz00_4276, BgL_auxz00_4278);
								}
								{	/* Unsafe/sha2.scm 455 */
									long BgL_tmpz00_4281;

									BgL_tmpz00_4281 = (BgL_arg1397z00_3693);
									BgL_v0z00_3692 = (uint32_t) (BgL_tmpz00_4281);
							}}
							{	/* Unsafe/sha2.scm 461 */
								uint32_t BgL_v1z00_3694;

								{	/* Unsafe/sha2.scm 462 */
									long BgL_arg1416z00_3695;

									BgL_arg1416z00_3695 = (BgL_nz00_3638 + ((long) 1));
									{	/* Unsafe/sha2.scm 455 */
										unsigned char BgL_arg1397z00_3696;

										{	/* Unsafe/sha2.scm 455 */
											long BgL_auxz00_4287;
											obj_t BgL_tmpz00_4285;

											BgL_auxz00_4287 = (long) (BgL_arg1416z00_3695);
											BgL_tmpz00_4285 = ((obj_t) BgL_mmz00_3637);
											BgL_arg1397z00_3696 =
												BGL_MMAP_REF(BgL_tmpz00_4285, BgL_auxz00_4287);
										}
										{	/* Unsafe/sha2.scm 455 */
											long BgL_tmpz00_4290;

											BgL_tmpz00_4290 = (BgL_arg1397z00_3696);
											BgL_v1z00_3694 = (uint32_t) (BgL_tmpz00_4290);
								}}}
								{	/* Unsafe/sha2.scm 462 */
									uint32_t BgL_v2z00_3697;

									{	/* Unsafe/sha2.scm 463 */
										long BgL_arg1415z00_3698;

										BgL_arg1415z00_3698 = (BgL_nz00_3638 + ((long) 2));
										{	/* Unsafe/sha2.scm 455 */
											unsigned char BgL_arg1397z00_3699;

											{	/* Unsafe/sha2.scm 455 */
												long BgL_auxz00_4296;
												obj_t BgL_tmpz00_4294;

												BgL_auxz00_4296 = (long) (BgL_arg1415z00_3698);
												BgL_tmpz00_4294 = ((obj_t) BgL_mmz00_3637);
												BgL_arg1397z00_3699 =
													BGL_MMAP_REF(BgL_tmpz00_4294, BgL_auxz00_4296);
											}
											{	/* Unsafe/sha2.scm 455 */
												long BgL_tmpz00_4299;

												BgL_tmpz00_4299 = (BgL_arg1397z00_3699);
												BgL_v2z00_3697 = (uint32_t) (BgL_tmpz00_4299);
									}}}
									{	/* Unsafe/sha2.scm 463 */
										uint32_t BgL_v3z00_3700;

										{	/* Unsafe/sha2.scm 464 */
											long BgL_arg1414z00_3701;

											BgL_arg1414z00_3701 = (BgL_nz00_3638 + ((long) 3));
											{	/* Unsafe/sha2.scm 455 */
												unsigned char BgL_arg1397z00_3702;

												{	/* Unsafe/sha2.scm 455 */
													long BgL_auxz00_4305;
													obj_t BgL_tmpz00_4303;

													BgL_auxz00_4305 = (long) (BgL_arg1414z00_3701);
													BgL_tmpz00_4303 = ((obj_t) BgL_mmz00_3637);
													BgL_arg1397z00_3702 =
														BGL_MMAP_REF(BgL_tmpz00_4303, BgL_auxz00_4305);
												}
												{	/* Unsafe/sha2.scm 455 */
													long BgL_tmpz00_4308;

													BgL_tmpz00_4308 = (BgL_arg1397z00_3702);
													BgL_v3z00_3700 = (uint32_t) (BgL_tmpz00_4308);
										}}}
										{	/* Unsafe/sha2.scm 464 */
											uint32_t BgL_vz00_3703;

											{	/* Unsafe/sha2.scm 465 */
												uint32_t BgL_arg1401z00_3704;
												uint32_t BgL_arg1402z00_3705;

												{	/* Unsafe/sha2.scm 465 */
													uint32_t BgL_arg1404z00_3706;

													{	/* Unsafe/sha2.scm 465 */
														long BgL_arg1405z00_3707;

														{	/* Unsafe/sha2.scm 465 */
															long BgL_arg1406z00_3708;
															long BgL_arg1407z00_3709;

															{	/* Unsafe/sha2.scm 465 */
																uint32_t BgL_arg1409z00_3710;

																BgL_arg1409z00_3710 =
																	(BgL_v0z00_3692 << (int) (((long) 8)));
																{	/* Unsafe/sha2.scm 465 */
																	long BgL_res2187z00_3711;

																	BgL_res2187z00_3711 =
																		(long) (BgL_arg1409z00_3710);
																	BgL_arg1406z00_3708 = BgL_res2187z00_3711;
															}}
															{	/* Unsafe/sha2.scm 465 */
																long BgL_res2188z00_3712;

																BgL_res2188z00_3712 = (long) (BgL_v1z00_3694);
																BgL_arg1407z00_3709 = BgL_res2188z00_3712;
															}
															BgL_arg1405z00_3707 =
																(BgL_arg1406z00_3708 | BgL_arg1407z00_3709);
														}
														{	/* Unsafe/sha2.scm 465 */
															uint32_t BgL_res2190z00_3713;

															BgL_res2190z00_3713 =
																(uint32_t) (BgL_arg1405z00_3707);
															BgL_arg1404z00_3706 = BgL_res2190z00_3713;
													}}
													BgL_arg1401z00_3704 =
														(BgL_arg1404z00_3706 << (int) (((long) 16)));
												}
												{	/* Unsafe/sha2.scm 465 */
													long BgL_arg1410z00_3714;

													{	/* Unsafe/sha2.scm 465 */
														long BgL_arg1411z00_3715;
														long BgL_arg1412z00_3716;

														{	/* Unsafe/sha2.scm 465 */
															uint32_t BgL_arg1413z00_3717;

															BgL_arg1413z00_3717 =
																(BgL_v2z00_3697 << (int) (((long) 8)));
															{	/* Unsafe/sha2.scm 465 */
																long BgL_res2193z00_3718;

																BgL_res2193z00_3718 =
																	(long) (BgL_arg1413z00_3717);
																BgL_arg1411z00_3715 = BgL_res2193z00_3718;
														}}
														{	/* Unsafe/sha2.scm 465 */
															long BgL_res2194z00_3719;

															BgL_res2194z00_3719 = (long) (BgL_v3z00_3700);
															BgL_arg1412z00_3716 = BgL_res2194z00_3719;
														}
														BgL_arg1410z00_3714 =
															(BgL_arg1411z00_3715 | BgL_arg1412z00_3716);
													}
													{	/* Unsafe/sha2.scm 465 */
														uint32_t BgL_res2196z00_3720;

														BgL_res2196z00_3720 =
															(uint32_t) (BgL_arg1410z00_3714);
														BgL_arg1402z00_3705 = BgL_res2196z00_3720;
												}}
												BgL_vz00_3703 =
													(BgL_arg1401z00_3704 | BgL_arg1402z00_3705);
											}
											{	/* Unsafe/sha2.scm 465 */

												BGL_U32VSET(BgL_v32z00_3635, BgL_iz00_3636,
													BgL_vz00_3703);
												BUNSPEC;
												return ((long) 4);
						}}}}}}
					else
						{	/* Unsafe/sha2.scm 468 */
							bool_t BgL_test2426z00_4327;

							{	/* Unsafe/sha2.scm 468 */
								long BgL_tmpz00_4328;

								{	/* Unsafe/sha2.scm 468 */
									long BgL_za72za7_3721;

									BgL_za72za7_3721 = (long) (BgL_lz00_3689);
									BgL_tmpz00_4328 = (((long) 1) + BgL_za72za7_3721);
								}
								BgL_test2426z00_4327 = (BgL_nz00_3638 >= BgL_tmpz00_4328);
							}
							if (BgL_test2426z00_4327)
								{	/* Unsafe/sha2.scm 468 */
									{	/* Unsafe/sha2.scm 469 */
										uint32_t BgL_tmpz00_4332;

										BgL_tmpz00_4332 = (uint32_t) (((long) 0));
										BGL_U32VSET(BgL_v32z00_3635, BgL_iz00_3636,
											BgL_tmpz00_4332);
									} BUNSPEC;
									return ((long) 0);
								}
							else
								{	/* Unsafe/sha2.scm 472 */
									obj_t BgL_vz00_3722;
									long BgL_kz00_3723;

									BgL_vz00_3722 =
										BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 4),
										(uint32_t) (((long) 0)));
									{	/* Unsafe/sha2.scm 473 */
										long BgL_tmpz00_4337;

										{	/* Unsafe/sha2.scm 473 */
											long BgL_za72za7_3724;

											BgL_za72za7_3724 = (long) (BgL_lz00_3689);
											BgL_tmpz00_4337 =
												((BgL_nz00_3638 + ((long) 4)) - BgL_za72za7_3724);
										}
										BgL_kz00_3723 = (((long) 4) - BgL_tmpz00_4337);
									}
									{
										long BgL_jz00_3726;

										BgL_jz00_3726 = ((long) 0);
									BgL_loopz00_3725:
										if ((BgL_jz00_3726 == BgL_kz00_3723))
											{	/* Unsafe/sha2.scm 475 */
												{	/* Unsafe/sha2.scm 477 */
													uint32_t BgL_tmpz00_4344;

													BgL_tmpz00_4344 = (uint32_t) (((long) 128));
													BGL_U32VSET(BgL_vz00_3722, BgL_jz00_3726,
														BgL_tmpz00_4344);
												} BUNSPEC;
												{	/* Unsafe/sha2.scm 478 */
													uint32_t BgL_v0z00_3727;

													BgL_v0z00_3727 =
														BGL_U32VREF(BgL_vz00_3722, ((long) 0));
													{	/* Unsafe/sha2.scm 478 */
														uint32_t BgL_v1z00_3728;

														BgL_v1z00_3728 =
															BGL_U32VREF(BgL_vz00_3722, ((long) 1));
														{	/* Unsafe/sha2.scm 479 */
															uint32_t BgL_v2z00_3729;

															BgL_v2z00_3729 =
																BGL_U32VREF(BgL_vz00_3722, ((long) 2));
															{	/* Unsafe/sha2.scm 480 */
																uint32_t BgL_v3z00_3730;

																BgL_v3z00_3730 =
																	BGL_U32VREF(BgL_vz00_3722, ((long) 3));
																{	/* Unsafe/sha2.scm 481 */
																	uint32_t BgL_vz00_3731;

																	{	/* Unsafe/sha2.scm 482 */
																		uint32_t BgL_arg1421z00_3732;
																		uint32_t BgL_arg1422z00_3733;

																		{	/* Unsafe/sha2.scm 482 */
																			uint32_t BgL_arg1424z00_3734;

																			{	/* Unsafe/sha2.scm 482 */
																				long BgL_arg1425z00_3735;

																				{	/* Unsafe/sha2.scm 482 */
																					long BgL_arg1426z00_3736;
																					long BgL_arg1427z00_3737;

																					{	/* Unsafe/sha2.scm 482 */
																						uint32_t BgL_arg1428z00_3738;

																						BgL_arg1428z00_3738 =
																							(BgL_v0z00_3727 <<
																							(int) (((long) 8)));
																						{	/* Unsafe/sha2.scm 482 */
																							long BgL_res2205z00_3739;

																							BgL_res2205z00_3739 =
																								(long) (BgL_arg1428z00_3738);
																							BgL_arg1426z00_3736 =
																								BgL_res2205z00_3739;
																					}}
																					{	/* Unsafe/sha2.scm 482 */
																						long BgL_res2206z00_3740;

																						BgL_res2206z00_3740 =
																							(long) (BgL_v1z00_3728);
																						BgL_arg1427z00_3737 =
																							BgL_res2206z00_3740;
																					}
																					BgL_arg1425z00_3735 =
																						(BgL_arg1426z00_3736 |
																						BgL_arg1427z00_3737);
																				}
																				{	/* Unsafe/sha2.scm 482 */
																					uint32_t BgL_res2208z00_3741;

																					BgL_res2208z00_3741 =
																						(uint32_t) (BgL_arg1425z00_3735);
																					BgL_arg1424z00_3734 =
																						BgL_res2208z00_3741;
																			}}
																			BgL_arg1421z00_3732 =
																				(BgL_arg1424z00_3734 <<
																				(int) (((long) 16)));
																		}
																		{	/* Unsafe/sha2.scm 482 */
																			long BgL_arg1429z00_3742;

																			{	/* Unsafe/sha2.scm 482 */
																				long BgL_arg1430z00_3743;
																				long BgL_arg1431z00_3744;

																				{	/* Unsafe/sha2.scm 482 */
																					uint32_t BgL_arg1432z00_3745;

																					BgL_arg1432z00_3745 =
																						(BgL_v2z00_3729 <<
																						(int) (((long) 8)));
																					{	/* Unsafe/sha2.scm 482 */
																						long BgL_res2211z00_3746;

																						BgL_res2211z00_3746 =
																							(long) (BgL_arg1432z00_3745);
																						BgL_arg1430z00_3743 =
																							BgL_res2211z00_3746;
																				}}
																				{	/* Unsafe/sha2.scm 482 */
																					long BgL_res2212z00_3747;

																					BgL_res2212z00_3747 =
																						(long) (BgL_v3z00_3730);
																					BgL_arg1431z00_3744 =
																						BgL_res2212z00_3747;
																				}
																				BgL_arg1429z00_3742 =
																					(BgL_arg1430z00_3743 |
																					BgL_arg1431z00_3744);
																			}
																			{	/* Unsafe/sha2.scm 482 */
																				uint32_t BgL_res2214z00_3748;

																				BgL_res2214z00_3748 =
																					(uint32_t) (BgL_arg1429z00_3742);
																				BgL_arg1422z00_3733 =
																					BgL_res2214z00_3748;
																		}}
																		BgL_vz00_3731 =
																			(BgL_arg1421z00_3732 |
																			BgL_arg1422z00_3733);
																	}
																	{	/* Unsafe/sha2.scm 482 */

																		BGL_U32VSET(BgL_v32z00_3635, BgL_iz00_3636,
																			BgL_vz00_3731);
																		BUNSPEC;
																		return (BgL_jz00_3726 + ((long) 1));
											}}}}}}}
										else
											{	/* Unsafe/sha2.scm 475 */
												{	/* Unsafe/sha2.scm 486 */
													long BgL_arg1433z00_3749;

													{	/* Unsafe/sha2.scm 486 */
														long BgL_arg1434z00_3750;

														BgL_arg1434z00_3750 =
															(long)
															CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
																(BgL_nz00_3638), BINT(BgL_jz00_3726)));
														{	/* Unsafe/sha2.scm 455 */
															unsigned char BgL_arg1397z00_3751;

															{	/* Unsafe/sha2.scm 455 */
																long BgL_auxz00_4374;
																obj_t BgL_tmpz00_4372;

																BgL_auxz00_4374 = (long) (BgL_arg1434z00_3750);
																BgL_tmpz00_4372 = ((obj_t) BgL_mmz00_3637);
																BgL_arg1397z00_3751 =
																	BGL_MMAP_REF(BgL_tmpz00_4372,
																	BgL_auxz00_4374);
															}
															BgL_arg1433z00_3749 = (BgL_arg1397z00_3751);
													}}
													{	/* Unsafe/sha2.scm 486 */
														uint32_t BgL_tmpz00_4378;

														BgL_tmpz00_4378 = (uint32_t) (BgL_arg1433z00_3749);
														BGL_U32VSET(BgL_vz00_3722, BgL_jz00_3726,
															BgL_tmpz00_4378);
													} BUNSPEC;
												}
												{
													long BgL_jz00_4381;

													BgL_jz00_4381 = (BgL_jz00_3726 + ((long) 1));
													BgL_jz00_3726 = BgL_jz00_4381;
													goto BgL_loopz00_3725;
												}
											}
									}
								}
						}
				}
			}
		}

	}



/* sha256sum-string */
	BGL_EXPORTED_DEF obj_t BGl_sha256sumzd2stringzd2zz__sha2z00(obj_t
		BgL_strz00_36)
	{
		{	/* Unsafe/sha2.scm 497 */
			{	/* Unsafe/sha2.scm 534 */
				obj_t BgL_statez00_1585;
				obj_t BgL_bufferz00_1586;

				BgL_statez00_1585 = BGl_sha256zd2initialzd2hashzd2valuezd2zz__sha2z00();
				{	/* Llib/srfi4.scm 451 */

					BgL_bufferz00_1586 =
						BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 16), (uint32_t) (0));
				}
				BGl_sha256zd2updatezd2zz__sha2z00(BgL_statez00_1585, BgL_bufferz00_1586,
					BgL_strz00_36, BGl_proc2387z00zz__sha2z00);
				return BGl_statezd2ze3stringz31zz__sha2z00(BgL_statez00_1585);
			}
		}

	}



/* &sha256sum-string */
	obj_t BGl_z62sha256sumzd2stringzb0zz__sha2z00(obj_t BgL_envz00_3640,
		obj_t BgL_strz00_3641)
	{
		{	/* Unsafe/sha2.scm 497 */
			{	/* Unsafe/sha2.scm 500 */
				obj_t BgL_auxz00_4387;

				if (STRINGP(BgL_strz00_3641))
					{	/* Unsafe/sha2.scm 500 */
						BgL_auxz00_4387 = BgL_strz00_3641;
					}
				else
					{
						obj_t BgL_auxz00_4390;

						BgL_auxz00_4390 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2384z00zz__sha2z00,
							BINT(((long) 20904)), BGl_string2388z00zz__sha2z00,
							BGl_string2389z00zz__sha2z00, BgL_strz00_3641);
						FAILURE(BgL_auxz00_4390, BFALSE, BFALSE);
					}
				return BGl_sha256sumzd2stringzd2zz__sha2z00(BgL_auxz00_4387);
			}
		}

	}



/* &fill-word32-string! */
	long BGl_z62fillzd2word32zd2stringz12z70zz__sha2z00(obj_t BgL_envz00_3642,
		obj_t BgL_v32z00_3643, long BgL_iz00_3644, obj_t BgL_strz00_3645,
		long BgL_nz00_3646)
	{
		{	/* Unsafe/sha2.scm 532 */
			{	/* Unsafe/sha2.scm 503 */
				long BgL_lz00_3756;

				BgL_lz00_3756 = STRING_LENGTH(((obj_t) BgL_strz00_3645));
				if (((BgL_nz00_3646 + ((long) 4)) <= BgL_lz00_3756))
					{	/* Unsafe/sha2.scm 506 */
						uint32_t BgL_v0z00_3757;

						{	/* Unsafe/sha2.scm 500 */
							long BgL_tmpz00_4400;

							BgL_tmpz00_4400 =
								(STRING_REF(((obj_t) BgL_strz00_3645), BgL_nz00_3646));
							BgL_v0z00_3757 = (uint32_t) (BgL_tmpz00_4400);
						}
						{	/* Unsafe/sha2.scm 506 */
							uint32_t BgL_v1z00_3758;

							{	/* Unsafe/sha2.scm 500 */
								long BgL_tmpz00_4405;

								BgL_tmpz00_4405 =
									(STRING_REF(
										((obj_t) BgL_strz00_3645), (BgL_nz00_3646 + ((long) 1))));
								BgL_v1z00_3758 = (uint32_t) (BgL_tmpz00_4405);
							}
							{	/* Unsafe/sha2.scm 507 */
								uint32_t BgL_v2z00_3759;

								{	/* Unsafe/sha2.scm 500 */
									long BgL_tmpz00_4411;

									BgL_tmpz00_4411 =
										(STRING_REF(
											((obj_t) BgL_strz00_3645), (BgL_nz00_3646 + ((long) 2))));
									BgL_v2z00_3759 = (uint32_t) (BgL_tmpz00_4411);
								}
								{	/* Unsafe/sha2.scm 508 */
									uint32_t BgL_v3z00_3760;

									{	/* Unsafe/sha2.scm 500 */
										long BgL_tmpz00_4417;

										BgL_tmpz00_4417 =
											(STRING_REF(
												((obj_t) BgL_strz00_3645),
												(BgL_nz00_3646 + ((long) 3))));
										BgL_v3z00_3760 = (uint32_t) (BgL_tmpz00_4417);
									}
									{	/* Unsafe/sha2.scm 509 */
										uint32_t BgL_vz00_3761;

										{	/* Unsafe/sha2.scm 510 */
											uint32_t BgL_arg1445z00_3762;
											uint32_t BgL_arg1446z00_3763;

											{	/* Unsafe/sha2.scm 510 */
												uint32_t BgL_arg1448z00_3764;

												{	/* Unsafe/sha2.scm 510 */
													long BgL_arg1449z00_3765;

													{	/* Unsafe/sha2.scm 510 */
														long BgL_arg1451z00_3766;
														long BgL_arg1452z00_3767;

														{	/* Unsafe/sha2.scm 510 */
															uint32_t BgL_arg1453z00_3768;

															BgL_arg1453z00_3768 =
																(BgL_v0z00_3757 << (int) (((long) 8)));
															{	/* Unsafe/sha2.scm 510 */
																long BgL_res2236z00_3769;

																BgL_res2236z00_3769 =
																	(long) (BgL_arg1453z00_3768);
																BgL_arg1451z00_3766 = BgL_res2236z00_3769;
														}}
														{	/* Unsafe/sha2.scm 510 */
															long BgL_res2237z00_3770;

															BgL_res2237z00_3770 = (long) (BgL_v1z00_3758);
															BgL_arg1452z00_3767 = BgL_res2237z00_3770;
														}
														BgL_arg1449z00_3765 =
															(BgL_arg1451z00_3766 | BgL_arg1452z00_3767);
													}
													{	/* Unsafe/sha2.scm 510 */
														uint32_t BgL_res2239z00_3771;

														BgL_res2239z00_3771 =
															(uint32_t) (BgL_arg1449z00_3765);
														BgL_arg1448z00_3764 = BgL_res2239z00_3771;
												}}
												BgL_arg1445z00_3762 =
													(BgL_arg1448z00_3764 << (int) (((long) 16)));
											}
											{	/* Unsafe/sha2.scm 510 */
												long BgL_arg1454z00_3772;

												{	/* Unsafe/sha2.scm 510 */
													long BgL_arg1455z00_3773;
													long BgL_arg1456z00_3774;

													{	/* Unsafe/sha2.scm 510 */
														uint32_t BgL_arg1457z00_3775;

														BgL_arg1457z00_3775 =
															(BgL_v2z00_3759 << (int) (((long) 8)));
														{	/* Unsafe/sha2.scm 510 */
															long BgL_res2242z00_3776;

															BgL_res2242z00_3776 =
																(long) (BgL_arg1457z00_3775);
															BgL_arg1455z00_3773 = BgL_res2242z00_3776;
													}}
													{	/* Unsafe/sha2.scm 510 */
														long BgL_res2243z00_3777;

														BgL_res2243z00_3777 = (long) (BgL_v3z00_3760);
														BgL_arg1456z00_3774 = BgL_res2243z00_3777;
													}
													BgL_arg1454z00_3772 =
														(BgL_arg1455z00_3773 | BgL_arg1456z00_3774);
												}
												{	/* Unsafe/sha2.scm 510 */
													uint32_t BgL_res2245z00_3778;

													BgL_res2245z00_3778 =
														(uint32_t) (BgL_arg1454z00_3772);
													BgL_arg1446z00_3763 = BgL_res2245z00_3778;
											}}
											BgL_vz00_3761 =
												(BgL_arg1445z00_3762 | BgL_arg1446z00_3763);
										}
										{	/* Unsafe/sha2.scm 510 */

											BGL_U32VSET(BgL_v32z00_3643, BgL_iz00_3644,
												BgL_vz00_3761);
											BUNSPEC;
											return ((long) 4);
					}}}}}}
				else
					{	/* Unsafe/sha2.scm 505 */
						if ((BgL_nz00_3646 >= (((long) 1) + BgL_lz00_3756)))
							{	/* Unsafe/sha2.scm 513 */
								{	/* Unsafe/sha2.scm 514 */
									uint32_t BgL_tmpz00_4442;

									BgL_tmpz00_4442 = (uint32_t) (((long) 0));
									BGL_U32VSET(BgL_v32z00_3643, BgL_iz00_3644, BgL_tmpz00_4442);
								} BUNSPEC;
								return ((long) 0);
							}
						else
							{	/* Unsafe/sha2.scm 517 */
								obj_t BgL_vz00_3779;
								long BgL_kz00_3780;

								BgL_vz00_3779 =
									BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 4),
									(uint32_t) (((long) 0)));
								BgL_kz00_3780 =
									(((long) 4) - ((BgL_nz00_3646 + ((long) 4)) - BgL_lz00_3756));
								{
									long BgL_jz00_3782;

									BgL_jz00_3782 = ((long) 0);
								BgL_loopz00_3781:
									if ((BgL_jz00_3782 == BgL_kz00_3780))
										{	/* Unsafe/sha2.scm 520 */
											{	/* Unsafe/sha2.scm 522 */
												uint32_t BgL_tmpz00_4452;

												BgL_tmpz00_4452 = (uint32_t) (((long) 128));
												BGL_U32VSET(BgL_vz00_3779, BgL_jz00_3782,
													BgL_tmpz00_4452);
											} BUNSPEC;
											{	/* Unsafe/sha2.scm 523 */
												uint32_t BgL_v0z00_3783;

												BgL_v0z00_3783 = BGL_U32VREF(BgL_vz00_3779, ((long) 0));
												{	/* Unsafe/sha2.scm 523 */
													uint32_t BgL_v1z00_3784;

													BgL_v1z00_3784 =
														BGL_U32VREF(BgL_vz00_3779, ((long) 1));
													{	/* Unsafe/sha2.scm 524 */
														uint32_t BgL_v2z00_3785;

														BgL_v2z00_3785 =
															BGL_U32VREF(BgL_vz00_3779, ((long) 2));
														{	/* Unsafe/sha2.scm 525 */
															uint32_t BgL_v3z00_3786;

															BgL_v3z00_3786 =
																BGL_U32VREF(BgL_vz00_3779, ((long) 3));
															{	/* Unsafe/sha2.scm 526 */
																uint32_t BgL_vz00_3787;

																{	/* Unsafe/sha2.scm 527 */
																	uint32_t BgL_arg1465z00_3788;
																	uint32_t BgL_arg1466z00_3789;

																	{	/* Unsafe/sha2.scm 527 */
																		uint32_t BgL_arg1467z00_3790;

																		{	/* Unsafe/sha2.scm 527 */
																			long BgL_arg1468z00_3791;

																			{	/* Unsafe/sha2.scm 527 */
																				long BgL_arg1469z00_3792;
																				long BgL_arg1470z00_3793;

																				{	/* Unsafe/sha2.scm 527 */
																					uint32_t BgL_arg1471z00_3794;

																					BgL_arg1471z00_3794 =
																						(BgL_v0z00_3783 <<
																						(int) (((long) 8)));
																					{	/* Unsafe/sha2.scm 527 */
																						long BgL_res2254z00_3795;

																						BgL_res2254z00_3795 =
																							(long) (BgL_arg1471z00_3794);
																						BgL_arg1469z00_3792 =
																							BgL_res2254z00_3795;
																				}}
																				{	/* Unsafe/sha2.scm 527 */
																					long BgL_res2255z00_3796;

																					BgL_res2255z00_3796 =
																						(long) (BgL_v1z00_3784);
																					BgL_arg1470z00_3793 =
																						BgL_res2255z00_3796;
																				}
																				BgL_arg1468z00_3791 =
																					(BgL_arg1469z00_3792 |
																					BgL_arg1470z00_3793);
																			}
																			{	/* Unsafe/sha2.scm 527 */
																				uint32_t BgL_res2257z00_3797;

																				BgL_res2257z00_3797 =
																					(uint32_t) (BgL_arg1468z00_3791);
																				BgL_arg1467z00_3790 =
																					BgL_res2257z00_3797;
																		}}
																		BgL_arg1465z00_3788 =
																			(BgL_arg1467z00_3790 <<
																			(int) (((long) 16)));
																	}
																	{	/* Unsafe/sha2.scm 527 */
																		long BgL_arg1472z00_3798;

																		{	/* Unsafe/sha2.scm 527 */
																			long BgL_arg1473z00_3799;
																			long BgL_arg1474z00_3800;

																			{	/* Unsafe/sha2.scm 527 */
																				uint32_t BgL_arg1475z00_3801;

																				BgL_arg1475z00_3801 =
																					(BgL_v2z00_3785 <<
																					(int) (((long) 8)));
																				{	/* Unsafe/sha2.scm 527 */
																					long BgL_res2260z00_3802;

																					BgL_res2260z00_3802 =
																						(long) (BgL_arg1475z00_3801);
																					BgL_arg1473z00_3799 =
																						BgL_res2260z00_3802;
																			}}
																			{	/* Unsafe/sha2.scm 527 */
																				long BgL_res2261z00_3803;

																				BgL_res2261z00_3803 =
																					(long) (BgL_v3z00_3786);
																				BgL_arg1474z00_3800 =
																					BgL_res2261z00_3803;
																			}
																			BgL_arg1472z00_3798 =
																				(BgL_arg1473z00_3799 |
																				BgL_arg1474z00_3800);
																		}
																		{	/* Unsafe/sha2.scm 527 */
																			uint32_t BgL_res2263z00_3804;

																			BgL_res2263z00_3804 =
																				(uint32_t) (BgL_arg1472z00_3798);
																			BgL_arg1466z00_3789 = BgL_res2263z00_3804;
																	}}
																	BgL_vz00_3787 =
																		(BgL_arg1465z00_3788 | BgL_arg1466z00_3789);
																}
																{	/* Unsafe/sha2.scm 527 */

																	BGL_U32VSET(BgL_v32z00_3643, BgL_iz00_3644,
																		BgL_vz00_3787);
																	BUNSPEC;
																	return (BgL_jz00_3782 + ((long) 1));
										}}}}}}}
									else
										{	/* Unsafe/sha2.scm 520 */
											{	/* Unsafe/sha2.scm 531 */
												long BgL_arg1476z00_3805;

												BgL_arg1476z00_3805 =
													(STRING_REF(
														((obj_t) BgL_strz00_3645),
														(long)
														CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
																(BgL_nz00_3646), BINT(BgL_jz00_3782)))));
												{	/* Unsafe/sha2.scm 531 */
													uint32_t BgL_tmpz00_4483;

													BgL_tmpz00_4483 = (uint32_t) (BgL_arg1476z00_3805);
													BGL_U32VSET(BgL_vz00_3779, BgL_jz00_3782,
														BgL_tmpz00_4483);
												} BUNSPEC;
											}
											{
												long BgL_jz00_4486;

												BgL_jz00_4486 = (BgL_jz00_3782 + ((long) 1));
												BgL_jz00_3782 = BgL_jz00_4486;
												goto BgL_loopz00_3781;
											}
										}
								}
							}
					}
			}
		}

	}



/* sha256sum-port */
	BGL_EXPORTED_DEF obj_t BGl_sha256sumzd2portzd2zz__sha2z00(obj_t BgL_pz00_37)
	{
		{	/* Unsafe/sha2.scm 542 */
			{	/* Unsafe/sha2.scm 542 */
				obj_t BgL_lenz00_3658;

				BgL_lenz00_3658 = MAKE_CELL(BINT(((long) 0)));
				{	/* Unsafe/sha2.scm 544 */
					obj_t BgL_bufz00_1655;

					{	/* Llib/srfi4.scm 451 */

						BgL_bufz00_1655 =
							BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 4), (uint32_t) (0));
					}
					{	/* Unsafe/sha2.scm 565 */
						obj_t BgL_fillzd2word32zd2portz12z12_3647;

						{
							int BgL_tmpz00_4490;

							BgL_tmpz00_4490 = (int) (((long) 2));
							BgL_fillzd2word32zd2portz12z12_3647 =
								MAKE_L_PROCEDURE(BGl_z62fillzd2word32zd2portz12z70zz__sha2z00,
								BgL_tmpz00_4490);
						}
						PROCEDURE_L_SET(BgL_fillzd2word32zd2portz12z12_3647,
							(int) (((long) 0)), BgL_bufz00_1655);
						PROCEDURE_L_SET(BgL_fillzd2word32zd2portz12z12_3647,
							(int) (((long) 1)), ((obj_t) BgL_lenz00_3658));
						{	/* Unsafe/sha2.scm 597 */
							obj_t BgL_statez00_1658;
							obj_t BgL_bufferz00_1659;

							BgL_statez00_1658 =
								BGl_sha256zd2initialzd2hashzd2valuezd2zz__sha2z00();
							{	/* Llib/srfi4.scm 451 */

								BgL_bufferz00_1659 =
									BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 16),
									(uint32_t) (0));
							}
							BGl_sha256zd2updatezd2zz__sha2z00(BgL_statez00_1658,
								BgL_bufferz00_1659, BgL_pz00_37,
								BgL_fillzd2word32zd2portz12z12_3647);
							return BGl_statezd2ze3stringz31zz__sha2z00(BgL_statez00_1658);
						}
					}
				}
			}
		}

	}



/* &sha256sum-port */
	obj_t BGl_z62sha256sumzd2portzb0zz__sha2z00(obj_t BgL_envz00_3648,
		obj_t BgL_pz00_3649)
	{
		{	/* Unsafe/sha2.scm 542 */
			{	/* Unsafe/sha2.scm 542 */
				obj_t BgL_auxz00_4502;

				if (INPUT_PORTP(BgL_pz00_3649))
					{	/* Unsafe/sha2.scm 542 */
						BgL_auxz00_4502 = BgL_pz00_3649;
					}
				else
					{
						obj_t BgL_auxz00_4505;

						BgL_auxz00_4505 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2384z00zz__sha2z00,
							BINT(((long) 22338)), BGl_string2390z00zz__sha2z00,
							BGl_string2391z00zz__sha2z00, BgL_pz00_3649);
						FAILURE(BgL_auxz00_4505, BFALSE, BFALSE);
					}
				return BGl_sha256sumzd2portzd2zz__sha2z00(BgL_auxz00_4502);
			}
		}

	}



/* &fill-word32-port! */
	long BGl_z62fillzd2word32zd2portz12z70zz__sha2z00(obj_t BgL_envz00_3650,
		obj_t BgL_v32z00_3653, long BgL_iz00_3654, obj_t BgL_pz00_3655,
		long BgL_nz00_3656)
	{
		{	/* Unsafe/sha2.scm 595 */
			{	/* Unsafe/sha2.scm 565 */
				obj_t BgL_bufz00_3651;
				obj_t BgL_lenz00_3652;

				BgL_bufz00_3651 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_3650, (int) (((long) 0))));
				BgL_lenz00_3652 = PROCEDURE_L_REF(BgL_envz00_3650, (int) (((long) 1)));
				{
					obj_t BgL_pz00_3811;

					{	/* Unsafe/sha2.scm 565 */
						long BgL_lz00_3819;

						BgL_pz00_3811 = ((obj_t) BgL_pz00_3655);
						{
							long BgL_iz00_3813;

							BgL_iz00_3813 = ((long) 0);
						BgL_loopz00_3812:
							if ((BgL_iz00_3813 == ((long) 4)))
								{	/* Unsafe/sha2.scm 550 */
									BgL_lz00_3819 = BgL_iz00_3813;
								}
							else
								{	/* Unsafe/sha2.scm 552 */
									obj_t BgL_cz00_3814;

									BgL_cz00_3814 =
										BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_pz00_3811);
									{	/* Unsafe/sha2.scm 553 */
										bool_t BgL_test2434z00_4518;

										{	/* Unsafe/sha2.scm 553 */
											bool_t BgL_res2270z00_3815;

											BgL_res2270z00_3815 = EOF_OBJECTP(BgL_cz00_3814);
											BgL_test2434z00_4518 = BgL_res2270z00_3815;
										}
										if (BgL_test2434z00_4518)
											{
												long BgL_jz00_3817;

												BgL_jz00_3817 = BgL_iz00_3813;
											BgL_liipz00_3816:
												if ((BgL_jz00_3817 == ((long) 4)))
													{	/* Unsafe/sha2.scm 555 */
														BgL_lz00_3819 = BgL_iz00_3813;
													}
												else
													{	/* Unsafe/sha2.scm 555 */
														{	/* Unsafe/sha2.scm 558 */
															uint32_t BgL_tmpz00_4522;

															BgL_tmpz00_4522 = (uint32_t) (((long) 0));
															BGL_U32VSET(BgL_bufz00_3651, BgL_jz00_3817,
																BgL_tmpz00_4522);
														} BUNSPEC;
														{
															long BgL_jz00_4525;

															BgL_jz00_4525 = (BgL_jz00_3817 + ((long) 1));
															BgL_jz00_3817 = BgL_jz00_4525;
															goto BgL_liipz00_3816;
														}
													}
											}
										else
											{	/* Unsafe/sha2.scm 553 */
												{	/* Unsafe/sha2.scm 561 */
													uint32_t BgL_arg1536z00_3818;

													{	/* Unsafe/sha2.scm 561 */
														char BgL_tmpz00_4527;

														BgL_tmpz00_4527 = (signed char) CINT(BgL_cz00_3814);
														BgL_arg1536z00_3818 = (uint32_t) (BgL_tmpz00_4527);
													}
													BGL_U32VSET(BgL_bufz00_3651, BgL_iz00_3813,
														BgL_arg1536z00_3818);
													BUNSPEC;
												}
												{
													long BgL_iz00_4531;

													BgL_iz00_4531 = (BgL_iz00_3813 + ((long) 1));
													BgL_iz00_3813 = BgL_iz00_4531;
													goto BgL_loopz00_3812;
												}
											}
									}
								}
						}
						{	/* Unsafe/sha2.scm 566 */
							obj_t BgL_auxz00_3820;

							BgL_auxz00_3820 =
								ADDFX(CELL_REF(BgL_lenz00_3652), BINT(BgL_lz00_3819));
							CELL_SET(BgL_lenz00_3652, BgL_auxz00_3820);
						}
						if (
							((BgL_nz00_3656 + ((long) 4)) <=
								(long) CINT(CELL_REF(BgL_lenz00_3652))))
							{	/* Unsafe/sha2.scm 569 */
								uint32_t BgL_v0z00_3821;

								BgL_v0z00_3821 = BGL_U32VREF(BgL_bufz00_3651, ((long) 0));
								{	/* Unsafe/sha2.scm 569 */
									uint32_t BgL_v1z00_3822;

									BgL_v1z00_3822 = BGL_U32VREF(BgL_bufz00_3651, ((long) 1));
									{	/* Unsafe/sha2.scm 570 */
										uint32_t BgL_v2z00_3823;

										BgL_v2z00_3823 = BGL_U32VREF(BgL_bufz00_3651, ((long) 2));
										{	/* Unsafe/sha2.scm 571 */
											uint32_t BgL_v3z00_3824;

											BgL_v3z00_3824 = BGL_U32VREF(BgL_bufz00_3651, ((long) 3));
											{	/* Unsafe/sha2.scm 572 */
												uint32_t BgL_vz00_3825;

												{	/* Unsafe/sha2.scm 573 */
													uint32_t BgL_arg1489z00_3826;
													uint32_t BgL_arg1491z00_3827;

													{	/* Unsafe/sha2.scm 573 */
														uint32_t BgL_arg1492z00_3828;

														{	/* Unsafe/sha2.scm 573 */
															long BgL_arg1493z00_3829;

															{	/* Unsafe/sha2.scm 573 */
																long BgL_arg1494z00_3830;
																long BgL_arg1495z00_3831;

																{	/* Unsafe/sha2.scm 573 */
																	uint32_t BgL_arg1496z00_3832;

																	BgL_arg1496z00_3832 =
																		(BgL_v0z00_3821 << (int) (((long) 8)));
																	{	/* Unsafe/sha2.scm 573 */
																		long BgL_res2278z00_3833;

																		BgL_res2278z00_3833 =
																			(long) (BgL_arg1496z00_3832);
																		BgL_arg1494z00_3830 = BgL_res2278z00_3833;
																}}
																{	/* Unsafe/sha2.scm 573 */
																	long BgL_res2279z00_3834;

																	BgL_res2279z00_3834 = (long) (BgL_v1z00_3822);
																	BgL_arg1495z00_3831 = BgL_res2279z00_3834;
																}
																BgL_arg1493z00_3829 =
																	(BgL_arg1494z00_3830 | BgL_arg1495z00_3831);
															}
															{	/* Unsafe/sha2.scm 573 */
																uint32_t BgL_res2281z00_3835;

																BgL_res2281z00_3835 =
																	(uint32_t) (BgL_arg1493z00_3829);
																BgL_arg1492z00_3828 = BgL_res2281z00_3835;
														}}
														BgL_arg1489z00_3826 =
															(BgL_arg1492z00_3828 << (int) (((long) 16)));
													}
													{	/* Unsafe/sha2.scm 573 */
														long BgL_arg1497z00_3836;

														{	/* Unsafe/sha2.scm 573 */
															long BgL_arg1498z00_3837;
															long BgL_arg1500z00_3838;

															{	/* Unsafe/sha2.scm 573 */
																uint32_t BgL_arg1502z00_3839;

																BgL_arg1502z00_3839 =
																	(BgL_v2z00_3823 << (int) (((long) 8)));
																{	/* Unsafe/sha2.scm 573 */
																	long BgL_res2284z00_3840;

																	BgL_res2284z00_3840 =
																		(long) (BgL_arg1502z00_3839);
																	BgL_arg1498z00_3837 = BgL_res2284z00_3840;
															}}
															{	/* Unsafe/sha2.scm 573 */
																long BgL_res2285z00_3841;

																BgL_res2285z00_3841 = (long) (BgL_v3z00_3824);
																BgL_arg1500z00_3838 = BgL_res2285z00_3841;
															}
															BgL_arg1497z00_3836 =
																(BgL_arg1498z00_3837 | BgL_arg1500z00_3838);
														}
														{	/* Unsafe/sha2.scm 573 */
															uint32_t BgL_res2287z00_3842;

															BgL_res2287z00_3842 =
																(uint32_t) (BgL_arg1497z00_3836);
															BgL_arg1491z00_3827 = BgL_res2287z00_3842;
													}}
													BgL_vz00_3825 =
														(BgL_arg1489z00_3826 | BgL_arg1491z00_3827);
												}
												{	/* Unsafe/sha2.scm 573 */

													BGL_U32VSET(BgL_v32z00_3653, BgL_iz00_3654,
														BgL_vz00_3825);
													BUNSPEC;
													return ((long) 4);
							}}}}}}
						else
							{	/* Unsafe/sha2.scm 568 */
								if (
									(BgL_nz00_3656 >=
										(((long) 1) + (long) CINT(CELL_REF(BgL_lenz00_3652)))))
									{	/* Unsafe/sha2.scm 576 */
										{	/* Unsafe/sha2.scm 577 */
											uint32_t BgL_tmpz00_4564;

											BgL_tmpz00_4564 = (uint32_t) (((long) 0));
											BGL_U32VSET(BgL_v32z00_3653, BgL_iz00_3654,
												BgL_tmpz00_4564);
										} BUNSPEC;
										return ((long) 0);
									}
								else
									{	/* Unsafe/sha2.scm 580 */
										obj_t BgL_vz00_3843;
										long BgL_kz00_3844;

										BgL_vz00_3843 =
											BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 4),
											(uint32_t) (((long) 0)));
										BgL_kz00_3844 =
											(((long) 4) -
											((BgL_nz00_3656 + ((long) 4)) -
												(long) CINT(CELL_REF(BgL_lenz00_3652))));
										{
											long BgL_jz00_3846;

											BgL_jz00_3846 = ((long) 0);
										BgL_loopz00_3845:
											if ((BgL_jz00_3846 == BgL_kz00_3844))
												{	/* Unsafe/sha2.scm 583 */
													{	/* Unsafe/sha2.scm 585 */
														uint32_t BgL_tmpz00_4575;

														BgL_tmpz00_4575 = (uint32_t) (((long) 128));
														BGL_U32VSET(BgL_vz00_3843, BgL_jz00_3846,
															BgL_tmpz00_4575);
													} BUNSPEC;
													{	/* Unsafe/sha2.scm 586 */
														uint32_t BgL_v0z00_3847;

														BgL_v0z00_3847 =
															BGL_U32VREF(BgL_vz00_3843, ((long) 0));
														{	/* Unsafe/sha2.scm 586 */
															uint32_t BgL_v1z00_3848;

															BgL_v1z00_3848 =
																BGL_U32VREF(BgL_vz00_3843, ((long) 1));
															{	/* Unsafe/sha2.scm 587 */
																uint32_t BgL_v2z00_3849;

																BgL_v2z00_3849 =
																	BGL_U32VREF(BgL_vz00_3843, ((long) 2));
																{	/* Unsafe/sha2.scm 588 */
																	uint32_t BgL_v3z00_3850;

																	BgL_v3z00_3850 =
																		BGL_U32VREF(BgL_vz00_3843, ((long) 3));
																	{	/* Unsafe/sha2.scm 589 */
																		uint32_t BgL_vz00_3851;

																		{	/* Unsafe/sha2.scm 590 */
																			uint32_t BgL_arg1509z00_3852;
																			uint32_t BgL_arg1510z00_3853;

																			{	/* Unsafe/sha2.scm 590 */
																				uint32_t BgL_arg1511z00_3854;

																				{	/* Unsafe/sha2.scm 590 */
																					long BgL_arg1512z00_3855;

																					{	/* Unsafe/sha2.scm 590 */
																						long BgL_arg1513z00_3856;
																						long BgL_arg1514z00_3857;

																						{	/* Unsafe/sha2.scm 590 */
																							uint32_t BgL_arg1515z00_3858;

																							BgL_arg1515z00_3858 =
																								(BgL_v0z00_3847 <<
																								(int) (((long) 8)));
																							{	/* Unsafe/sha2.scm 590 */
																								long BgL_res2296z00_3859;

																								BgL_res2296z00_3859 =
																									(long) (BgL_arg1515z00_3858);
																								BgL_arg1513z00_3856 =
																									BgL_res2296z00_3859;
																						}}
																						{	/* Unsafe/sha2.scm 590 */
																							long BgL_res2297z00_3860;

																							BgL_res2297z00_3860 =
																								(long) (BgL_v1z00_3848);
																							BgL_arg1514z00_3857 =
																								BgL_res2297z00_3860;
																						}
																						BgL_arg1512z00_3855 =
																							(BgL_arg1513z00_3856 |
																							BgL_arg1514z00_3857);
																					}
																					{	/* Unsafe/sha2.scm 590 */
																						uint32_t BgL_res2299z00_3861;

																						BgL_res2299z00_3861 =
																							(uint32_t) (BgL_arg1512z00_3855);
																						BgL_arg1511z00_3854 =
																							BgL_res2299z00_3861;
																				}}
																				BgL_arg1509z00_3852 =
																					(BgL_arg1511z00_3854 <<
																					(int) (((long) 16)));
																			}
																			{	/* Unsafe/sha2.scm 590 */
																				long BgL_arg1516z00_3862;

																				{	/* Unsafe/sha2.scm 590 */
																					long BgL_arg1518z00_3863;
																					long BgL_arg1519z00_3864;

																					{	/* Unsafe/sha2.scm 590 */
																						uint32_t BgL_arg1520z00_3865;

																						BgL_arg1520z00_3865 =
																							(BgL_v2z00_3849 <<
																							(int) (((long) 8)));
																						{	/* Unsafe/sha2.scm 590 */
																							long BgL_res2302z00_3866;

																							BgL_res2302z00_3866 =
																								(long) (BgL_arg1520z00_3865);
																							BgL_arg1518z00_3863 =
																								BgL_res2302z00_3866;
																					}}
																					{	/* Unsafe/sha2.scm 590 */
																						long BgL_res2303z00_3867;

																						BgL_res2303z00_3867 =
																							(long) (BgL_v3z00_3850);
																						BgL_arg1519z00_3864 =
																							BgL_res2303z00_3867;
																					}
																					BgL_arg1516z00_3862 =
																						(BgL_arg1518z00_3863 |
																						BgL_arg1519z00_3864);
																				}
																				{	/* Unsafe/sha2.scm 590 */
																					uint32_t BgL_res2305z00_3868;

																					BgL_res2305z00_3868 =
																						(uint32_t) (BgL_arg1516z00_3862);
																					BgL_arg1510z00_3853 =
																						BgL_res2305z00_3868;
																			}}
																			BgL_vz00_3851 =
																				(BgL_arg1509z00_3852 |
																				BgL_arg1510z00_3853);
																		}
																		{	/* Unsafe/sha2.scm 590 */

																			BGL_U32VSET(BgL_v32z00_3653,
																				BgL_iz00_3654, BgL_vz00_3851);
																			BUNSPEC;
																			return (BgL_jz00_3846 + ((long) 1));
												}}}}}}}
											else
												{	/* Unsafe/sha2.scm 583 */
													{	/* Unsafe/sha2.scm 594 */
														uint32_t BgL_arg1521z00_3869;

														BgL_arg1521z00_3869 =
															BGL_U32VREF(BgL_bufz00_3651, BgL_jz00_3846);
														BGL_U32VSET(BgL_vz00_3843, BgL_jz00_3846,
															BgL_arg1521z00_3869);
														BUNSPEC;
													}
													{
														long BgL_jz00_4601;

														BgL_jz00_4601 = (BgL_jz00_3846 + ((long) 1));
														BgL_jz00_3846 = BgL_jz00_4601;
														goto BgL_loopz00_3845;
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



/* sha256sum-file */
	BGL_EXPORTED_DEF obj_t BGl_sha256sumzd2filezd2zz__sha2z00(obj_t
		BgL_fnamez00_38)
	{
		{	/* Unsafe/sha2.scm 605 */
			{	/* Unsafe/sha2.scm 606 */
				obj_t BgL_mmz00_1738;

				BgL_mmz00_1738 =
					BGl_openzd2mmapzd2zz__mmapz00(BgL_fnamez00_38, BTRUE, BFALSE);
				{	/* Unsafe/sha2.scm 607 */
					bool_t BgL_test2439z00_4604;

					{	/* Unsafe/sha2.scm 607 */
						bool_t BgL_res2309z00_3336;

						BgL_res2309z00_3336 = BGL_MMAPP(BgL_mmz00_1738);
						BgL_test2439z00_4604 = BgL_res2309z00_3336;
					}
					if (BgL_test2439z00_4604)
						{	/* Unsafe/sha2.scm 608 */
							obj_t BgL_exitd1059z00_1740;

							BgL_exitd1059z00_1740 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Unsafe/sha2.scm 610 */
								obj_t BgL_zc3z04anonymousza31539ze3z87_3660;

								BgL_zc3z04anonymousza31539ze3z87_3660 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza31539ze3ze5zz__sha2z00,
									(int) (((long) 0)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_zc3z04anonymousza31539ze3z87_3660,
									(int) (((long) 0)), BgL_mmz00_1738);
								BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
									(BgL_exitd1059z00_1740,
									BgL_zc3z04anonymousza31539ze3z87_3660);
								{	/* Unsafe/sha2.scm 609 */
									obj_t BgL_tmp1061z00_1742;

									BgL_tmp1061z00_1742 =
										BGl_sha256sumzd2mmapzd2zz__sha2z00(BgL_mmz00_1738);
									BGl_exitdzd2popzd2protectz12z12zz__bexitz00
										(BgL_exitd1059z00_1740);
									bgl_close_mmap(BgL_mmz00_1738);
									return BgL_tmp1061z00_1742;
								}
							}
						}
					else
						{	/* Unsafe/sha2.scm 611 */
							obj_t BgL_pz00_1745;

							{	/* Ieee/port.scm 440 */

								BgL_pz00_1745 =
									BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
									(BgL_fnamez00_38, BTRUE, BINT(((long) 5000000)));
							}
							{	/* Unsafe/sha2.scm 612 */
								obj_t BgL_exitd1062z00_1746;

								BgL_exitd1062z00_1746 = BGL_EXITD_TOP_AS_OBJ();
								{	/* Unsafe/sha2.scm 614 */
									obj_t BgL_zc3z04anonymousza31540ze3z87_3661;

									BgL_zc3z04anonymousza31540ze3z87_3661 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31540ze3ze5zz__sha2z00,
										(int) (((long) 0)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31540ze3z87_3661,
										(int) (((long) 0)), BgL_pz00_1745);
									BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
										(BgL_exitd1062z00_1746,
										BgL_zc3z04anonymousza31540ze3z87_3661);
									{	/* Unsafe/sha2.scm 613 */
										obj_t BgL_tmp1064z00_1748;

										BgL_tmp1064z00_1748 =
											BGl_sha256sumzd2portzd2zz__sha2z00(BgL_pz00_1745);
										BGl_exitdzd2popzd2protectz12z12zz__bexitz00
											(BgL_exitd1062z00_1746);
										bgl_close_input_port(((obj_t) BgL_pz00_1745));
										return BgL_tmp1064z00_1748;
									}
								}
							}
						}
				}
			}
		}

	}



/* &sha256sum-file */
	obj_t BGl_z62sha256sumzd2filezb0zz__sha2z00(obj_t BgL_envz00_3662,
		obj_t BgL_fnamez00_3663)
	{
		{	/* Unsafe/sha2.scm 605 */
			{	/* Unsafe/sha2.scm 606 */
				obj_t BgL_auxz00_4629;

				if (STRINGP(BgL_fnamez00_3663))
					{	/* Unsafe/sha2.scm 606 */
						BgL_auxz00_4629 = BgL_fnamez00_3663;
					}
				else
					{
						obj_t BgL_auxz00_4632;

						BgL_auxz00_4632 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2384z00zz__sha2z00,
							BINT(((long) 24224)), BGl_string2392z00zz__sha2z00,
							BGl_string2389z00zz__sha2z00, BgL_fnamez00_3663);
						FAILURE(BgL_auxz00_4632, BFALSE, BFALSE);
					}
				return BGl_sha256sumzd2filezd2zz__sha2z00(BgL_auxz00_4629);
			}
		}

	}



/* &<@anonymous:1539> */
	obj_t BGl_z62zc3z04anonymousza31539ze3ze5zz__sha2z00(obj_t BgL_envz00_3664)
	{
		{	/* Unsafe/sha2.scm 608 */
			{	/* Unsafe/sha2.scm 610 */
				obj_t BgL_mmz00_3665;

				BgL_mmz00_3665 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3664, (int) (((long) 0))));
				return bgl_close_mmap(BgL_mmz00_3665);
			}
		}

	}



/* &<@anonymous:1540> */
	obj_t BGl_z62zc3z04anonymousza31540ze3ze5zz__sha2z00(obj_t BgL_envz00_3666)
	{
		{	/* Unsafe/sha2.scm 612 */
			{	/* Unsafe/sha2.scm 614 */
				obj_t BgL_pz00_3667;

				BgL_pz00_3667 = PROCEDURE_REF(BgL_envz00_3666, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_pz00_3667));
			}
		}

	}



/* sha256sum */
	BGL_EXPORTED_DEF obj_t BGl_sha256sumz00zz__sha2z00(obj_t BgL_objz00_39)
	{
		{	/* Unsafe/sha2.scm 619 */
			{	/* Unsafe/sha2.scm 621 */
				bool_t BgL_test2441z00_4645;

				{	/* Unsafe/sha2.scm 621 */
					bool_t BgL_res2310z00_3341;

					BgL_res2310z00_3341 = BGL_MMAPP(BgL_objz00_39);
					BgL_test2441z00_4645 = BgL_res2310z00_3341;
				}
				if (BgL_test2441z00_4645)
					{	/* Unsafe/sha2.scm 621 */
						return BGl_sha256sumzd2mmapzd2zz__sha2z00(BgL_objz00_39);
					}
				else
					{	/* Unsafe/sha2.scm 621 */
						if (STRINGP(BgL_objz00_39))
							{	/* Unsafe/sha2.scm 623 */
								return BGl_sha256sumzd2stringzd2zz__sha2z00(BgL_objz00_39);
							}
						else
							{	/* Unsafe/sha2.scm 623 */
								if (INPUT_PORTP(BgL_objz00_39))
									{	/* Unsafe/sha2.scm 625 */
										return BGl_sha256sumzd2portzd2zz__sha2z00(BgL_objz00_39);
									}
								else
									{	/* Unsafe/sha2.scm 625 */
										return
											BGl_errorz00zz__errorz00(BGl_string2393z00zz__sha2z00,
											BGl_string2394z00zz__sha2z00, BgL_objz00_39);
									}
							}
					}
			}
		}

	}



/* &sha256sum */
	obj_t BGl_z62sha256sumz62zz__sha2z00(obj_t BgL_envz00_3668,
		obj_t BgL_objz00_3669)
	{
		{	/* Unsafe/sha2.scm 619 */
			return BGl_sha256sumz00zz__sha2z00(BgL_objz00_3669);
		}

	}



/* hmac-sha256sum-string */
	BGL_EXPORTED_DEF obj_t BGl_hmaczd2sha256sumzd2stringz00zz__sha2z00(obj_t
		BgL_keyz00_40, obj_t BgL_msgz00_41)
	{
		{	/* Unsafe/sha2.scm 633 */
			return
				BGl_hmaczd2stringzd2zz__hmacz00(BgL_keyz00_40, BgL_msgz00_41,
				BGl_sha256sumzd2stringzd2envz00zz__sha2z00);
		}

	}



/* &hmac-sha256sum-string */
	obj_t BGl_z62hmaczd2sha256sumzd2stringz62zz__sha2z00(obj_t BgL_envz00_3670,
		obj_t BgL_keyz00_3671, obj_t BgL_msgz00_3672)
	{
		{	/* Unsafe/sha2.scm 633 */
			{	/* Unsafe/sha2.scm 634 */
				obj_t BgL_auxz00_4664;
				obj_t BgL_auxz00_4657;

				if (STRINGP(BgL_msgz00_3672))
					{	/* Unsafe/sha2.scm 634 */
						BgL_auxz00_4664 = BgL_msgz00_3672;
					}
				else
					{
						obj_t BgL_auxz00_4667;

						BgL_auxz00_4667 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2384z00zz__sha2z00,
							BINT(((long) 25203)), BGl_string2395z00zz__sha2z00,
							BGl_string2389z00zz__sha2z00, BgL_msgz00_3672);
						FAILURE(BgL_auxz00_4667, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_keyz00_3671))
					{	/* Unsafe/sha2.scm 634 */
						BgL_auxz00_4657 = BgL_keyz00_3671;
					}
				else
					{
						obj_t BgL_auxz00_4660;

						BgL_auxz00_4660 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2384z00zz__sha2z00,
							BINT(((long) 25203)), BGl_string2395z00zz__sha2z00,
							BGl_string2389z00zz__sha2z00, BgL_keyz00_3671);
						FAILURE(BgL_auxz00_4660, BFALSE, BFALSE);
					}
				return
					BGl_hmaczd2sha256sumzd2stringz00zz__sha2z00(BgL_auxz00_4657,
					BgL_auxz00_4664);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__sha2z00()
	{
		{	/* Unsafe/sha2.scm 50 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__sha2z00()
	{
		{	/* Unsafe/sha2.scm 50 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__sha2z00()
	{
		{	/* Unsafe/sha2.scm 50 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__sha2z00()
	{
		{	/* Unsafe/sha2.scm 50 */
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2396z00zz__sha2z00));
			BGl_modulezd2initializa7ationz75zz__hmacz00(((long) 285132820),
				BSTRING_TO_STRING(BGl_string2396z00zz__sha2z00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string2396z00zz__sha2z00));
			return
				BGl_modulezd2initializa7ationz75zz__srfi4z00(((long) 467925662),
				BSTRING_TO_STRING(BGl_string2396z00zz__sha2z00));
		}

	}

#ifdef __cplusplus
}
#endif
