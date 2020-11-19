/*===========================================================================*/
/*   (Unsafe/sha1.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Unsafe/sha1.scm -indent -o objs/obj_u/Unsafe/sha1.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62sha1sumzd2stringzb0zz__sha1z00(obj_t, obj_t);
	static obj_t BGl_z62sha1sumzd2portzb0zz__sha1z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__sha1z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_sha1sumzd2filezd2zz__sha1z00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62sha1sumzd2mmapzb0zz__sha1z00(obj_t, obj_t);
	extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__sha1z00();
	static obj_t BGl_genericzd2initzd2zz__sha1z00();
	extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__sha1z00();
	extern obj_t BGl_2zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62hmaczd2sha1sumzd2stringz62zz__sha1z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sha1sumzd2stringzd2zz__sha1z00(obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_makezd2u32vectorzd2zz__srfi4z00(long, uint32_t);
	extern obj_t make_vector(long, obj_t);
	static obj_t BGl_methodzd2initzd2zz__sha1z00();
	BGL_EXPORTED_DECL obj_t BGl_sha1sumz00zz__sha1z00(obj_t);
	extern obj_t make_string(long, unsigned char);
	extern obj_t bgl_close_input_port(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hmaczd2sha1sumzd2stringz00zz__sha1z00(obj_t,
		obj_t);
	static obj_t BGl_Kz00zz__sha1z00 = BUNSPEC;
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_stringzd2fillz12zc0zz__r4_strings_6_7z00(obj_t,
		unsigned char);
	static uint32_t BGl_fz00zz__sha1z00(int, uint32_t, uint32_t, uint32_t);
	static obj_t BGl_z62sha1sumzd2filezb0zz__sha1z00(obj_t, obj_t);
	static obj_t BGl_sha1z00zz__sha1z00(long, obj_t);
	extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__sha1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hmacz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_openzd2mmapzd2zz__mmapz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sha1sumzd2portzd2zz__sha1z00(obj_t);
	extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	extern obj_t BGl_ceilingz00zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sha1sumzd2mmapzd2zz__sha1z00(obj_t);
	extern bool_t rgc_buffer_eof_p(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31471ze3ze5zz__sha1z00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__sha1z00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__sha1z00();
	static obj_t BGl_z62zc3z04anonymousza31472ze3ze5zz__sha1z00(obj_t);
	extern obj_t BGl_hmaczd2stringzd2zz__hmacz00(obj_t, obj_t, obj_t);
	extern long bgl_rgc_blit_string(obj_t, char *, long, long);
	extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	extern obj_t blit_string(obj_t, long, obj_t, long, long);
	static obj_t BGl_u32zd2fillz12zc0zz__sha1z00(obj_t, long, uint32_t);
	static obj_t BGl_z62sha1sumz62zz__sha1z00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sha1sumzd2portzd2envz00zz__sha1z00,
		BgL_bgl_za762sha1sumza7d2por2246z00, BGl_z62sha1sumzd2portzb0zz__sha1z00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2234z00zz__sha1z00,
		BgL_bgl_string2234za700za7za7_2247za7, "/tmp/4.4a/runtime/Unsafe/sha1.scm",
		33);
	      DEFINE_STRING(BGl_string2235z00zz__sha1z00,
		BgL_bgl_string2235za700za7za7_2248za7, "&sha1sum-string", 15);
	      DEFINE_STRING(BGl_string2236z00zz__sha1z00,
		BgL_bgl_string2236za700za7za7_2249za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2237z00zz__sha1z00,
		BgL_bgl_string2237za700za7za7_2250za7, "&sha1sum-mmap", 13);
	      DEFINE_STRING(BGl_string2238z00zz__sha1z00,
		BgL_bgl_string2238za700za7za7_2251za7, "mmap", 4);
	      DEFINE_STRING(BGl_string2239z00zz__sha1z00,
		BgL_bgl_string2239za700za7za7_2252za7, "&sha1sum-port", 13);
	      DEFINE_STRING(BGl_string2240z00zz__sha1z00,
		BgL_bgl_string2240za700za7za7_2253za7, "input-port", 10);
	      DEFINE_STRING(BGl_string2241z00zz__sha1z00,
		BgL_bgl_string2241za700za7za7_2254za7, "&sha1sum-file", 13);
	      DEFINE_STRING(BGl_string2242z00zz__sha1z00,
		BgL_bgl_string2242za700za7za7_2255za7, "sha1sum", 7);
	      DEFINE_STRING(BGl_string2243z00zz__sha1z00,
		BgL_bgl_string2243za700za7za7_2256za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string2244z00zz__sha1z00,
		BgL_bgl_string2244za700za7za7_2257za7, "&hmac-sha1sum-string", 20);
	      DEFINE_STRING(BGl_string2245z00zz__sha1z00,
		BgL_bgl_string2245za700za7za7_2258za7, "__sha1", 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sha1sumzd2envzd2zz__sha1z00,
		BgL_bgl_za762sha1sumza762za7za7_2259z00, BGl_z62sha1sumz62zz__sha1z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sha1sumzd2mmapzd2envz00zz__sha1z00,
		BgL_bgl_za762sha1sumza7d2mma2260z00, BGl_z62sha1sumzd2mmapzb0zz__sha1z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sha1sumzd2filezd2envz00zz__sha1z00,
		BgL_bgl_za762sha1sumza7d2fil2261z00, BGl_z62sha1sumzd2filezb0zz__sha1z00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hmaczd2sha1sumzd2stringzd2envzd2zz__sha1z00,
		BgL_bgl_za762hmacza7d2sha1su2262z00,
		BGl_z62hmaczd2sha1sumzd2stringz62zz__sha1z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sha1sumzd2stringzd2envz00zz__sha1z00,
		BgL_bgl_za762sha1sumza7d2str2263z00, BGl_z62sha1sumzd2stringzb0zz__sha1z00,
		0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__sha1z00));
		     ADD_ROOT((void *) (&BGl_Kz00zz__sha1z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__sha1z00(long
		BgL_checksumz00_3228, char *BgL_fromz00_3229)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__sha1z00))
				{
					BGl_requirezd2initializa7ationz75zz__sha1z00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__sha1z00();
					BGl_importedzd2moduleszd2initz00zz__sha1z00();
					return BGl_toplevelzd2initzd2zz__sha1z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__sha1z00()
	{
		{	/* Unsafe/sha1.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__sha1z00()
	{
		{	/* Unsafe/sha1.scm 17 */
			{	/* Unsafe/sha1.scm 129 */
				obj_t BgL_vz00_1245;

				{	/* Llib/srfi4.scm 451 */

					BgL_vz00_1245 =
						BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 4), (uint32_t) (0));
				}
				{	/* Unsafe/sha1.scm 130 */
					uint32_t BgL_arg1223z00_1246;

					{	/* Unsafe/sha1.scm 130 */
						uint32_t BgL_arg1225z00_1247;
						uint32_t BgL_arg1227z00_1248;

						{	/* Unsafe/sha1.scm 130 */
							uint32_t BgL_arg1229z00_1249;

							{	/* Unsafe/sha1.scm 130 */
								uint32_t BgL_res1836z00_2031;

								BgL_res1836z00_2031 = (uint32_t) (((long) 23170));
								BgL_arg1229z00_1249 = BgL_res1836z00_2031;
							}
							BgL_arg1225z00_1247 =
								(BgL_arg1229z00_1249 << (int) (((long) 16)));
						}
						{	/* Unsafe/sha1.scm 130 */
							uint32_t BgL_res1838z00_2034;

							BgL_res1838z00_2034 = (uint32_t) (((long) 31129));
							BgL_arg1227z00_1248 = BgL_res1838z00_2034;
						}
						BgL_arg1223z00_1246 = (BgL_arg1225z00_1247 | BgL_arg1227z00_1248);
					}
					BGL_U32VSET(BgL_vz00_1245, ((long) 0), BgL_arg1223z00_1246);
					BUNSPEC;
				}
				{	/* Unsafe/sha1.scm 131 */
					uint32_t BgL_arg1232z00_1250;

					{	/* Unsafe/sha1.scm 131 */
						uint32_t BgL_arg1239z00_1251;
						uint32_t BgL_arg1242z00_1252;

						{	/* Unsafe/sha1.scm 131 */
							uint32_t BgL_arg1243z00_1253;

							{	/* Unsafe/sha1.scm 131 */
								uint32_t BgL_res1840z00_2038;

								BgL_res1840z00_2038 = (uint32_t) (((long) 28377));
								BgL_arg1243z00_1253 = BgL_res1840z00_2038;
							}
							BgL_arg1239z00_1251 =
								(BgL_arg1243z00_1253 << (int) (((long) 16)));
						}
						{	/* Unsafe/sha1.scm 131 */
							uint32_t BgL_res1842z00_2041;

							BgL_res1842z00_2041 = (uint32_t) (((long) 60321));
							BgL_arg1242z00_1252 = BgL_res1842z00_2041;
						}
						BgL_arg1232z00_1250 = (BgL_arg1239z00_1251 | BgL_arg1242z00_1252);
					}
					BGL_U32VSET(BgL_vz00_1245, ((long) 1), BgL_arg1232z00_1250);
					BUNSPEC;
				}
				{	/* Unsafe/sha1.scm 132 */
					uint32_t BgL_arg1245z00_1254;

					{	/* Unsafe/sha1.scm 132 */
						uint32_t BgL_arg1246z00_1255;
						uint32_t BgL_arg1247z00_1256;

						{	/* Unsafe/sha1.scm 132 */
							uint32_t BgL_arg1250z00_1257;

							{	/* Unsafe/sha1.scm 132 */
								uint32_t BgL_res1844z00_2045;

								BgL_res1844z00_2045 = (uint32_t) (((long) 36635));
								BgL_arg1250z00_1257 = BgL_res1844z00_2045;
							}
							BgL_arg1246z00_1255 =
								(BgL_arg1250z00_1257 << (int) (((long) 16)));
						}
						{	/* Unsafe/sha1.scm 132 */
							uint32_t BgL_res1846z00_2048;

							BgL_res1846z00_2048 = (uint32_t) (((long) 48348));
							BgL_arg1247z00_1256 = BgL_res1846z00_2048;
						}
						BgL_arg1245z00_1254 = (BgL_arg1246z00_1255 | BgL_arg1247z00_1256);
					}
					BGL_U32VSET(BgL_vz00_1245, ((long) 2), BgL_arg1245z00_1254);
					BUNSPEC;
				}
				{	/* Unsafe/sha1.scm 133 */
					uint32_t BgL_arg1252z00_1258;

					{	/* Unsafe/sha1.scm 133 */
						uint32_t BgL_arg1253z00_1259;
						uint32_t BgL_arg1254z00_1260;

						{	/* Unsafe/sha1.scm 133 */
							uint32_t BgL_arg1256z00_1261;

							{	/* Unsafe/sha1.scm 133 */
								uint32_t BgL_res1848z00_2052;

								BgL_res1848z00_2052 = (uint32_t) (((long) 51810));
								BgL_arg1256z00_1261 = BgL_res1848z00_2052;
							}
							BgL_arg1253z00_1259 =
								(BgL_arg1256z00_1261 << (int) (((long) 16)));
						}
						{	/* Unsafe/sha1.scm 133 */
							uint32_t BgL_res1850z00_2055;

							BgL_res1850z00_2055 = (uint32_t) (((long) 49622));
							BgL_arg1254z00_1260 = BgL_res1850z00_2055;
						}
						BgL_arg1252z00_1258 = (BgL_arg1253z00_1259 | BgL_arg1254z00_1260);
					}
					BGL_U32VSET(BgL_vz00_1245, ((long) 3), BgL_arg1252z00_1258);
					BUNSPEC;
				}
				return (BGl_Kz00zz__sha1z00 = BgL_vz00_1245, BUNSPEC);
			}
		}

	}



/* u32-fill! */
	obj_t BGl_u32zd2fillz12zc0zz__sha1z00(obj_t BgL_strz00_5,
		long BgL_offsetz00_6, uint32_t BgL_wz00_7)
	{
		{	/* Unsafe/sha1.scm 105 */
			{	/* Unsafe/sha1.scm 106 */
				obj_t BgL_s1z00_1275;

				{	/* Unsafe/sha1.scm 106 */
					long BgL_arg1284z00_1286;

					{	/* Unsafe/sha1.scm 106 */
						uint32_t BgL_arg1285z00_1287;

						BgL_arg1285z00_1287 = (BgL_wz00_7 >> (int) (((long) 16)));
						{	/* Unsafe/sha1.scm 106 */
							long BgL_res1857z00_2076;

							BgL_res1857z00_2076 = (long) (BgL_arg1285z00_1287);
							BgL_arg1284z00_1286 = BgL_res1857z00_2076;
					}}
					BgL_s1z00_1275 =
						BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
						(BgL_arg1284z00_1286, ((long) 16));
				}
				{	/* Unsafe/sha1.scm 106 */
					long BgL_l1z00_1276;

					BgL_l1z00_1276 = STRING_LENGTH(BgL_s1z00_1275);
					{	/* Unsafe/sha1.scm 107 */
						obj_t BgL_s2z00_1277;

						{	/* Unsafe/sha1.scm 108 */
							long BgL_arg1281z00_1284;

							{	/* Unsafe/sha1.scm 108 */
								uint32_t BgL_arg1282z00_1285;

								BgL_arg1282z00_1285 = (BgL_wz00_7 & (uint32_t) (65535));
								{	/* Unsafe/sha1.scm 108 */
									long BgL_res1860z00_2083;

									BgL_res1860z00_2083 = (long) (BgL_arg1282z00_1285);
									BgL_arg1281z00_1284 = BgL_res1860z00_2083;
							}}
							BgL_s2z00_1277 =
								BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
								(BgL_arg1281z00_1284, ((long) 16));
						}
						{	/* Unsafe/sha1.scm 108 */
							long BgL_l2z00_1278;

							BgL_l2z00_1278 = STRING_LENGTH(BgL_s2z00_1277);
							{	/* Unsafe/sha1.scm 109 */

								blit_string(BgL_s1z00_1275, ((long) 0), BgL_strz00_5,
									(BgL_offsetz00_6 +
										(((long) 4) - BgL_l1z00_1276)), BgL_l1z00_1276);
								return
									blit_string(BgL_s2z00_1277, ((long) 0), BgL_strz00_5,
									(BgL_offsetz00_6 +
										(((long) 4) +
											(((long) 4) - BgL_l2z00_1278))), BgL_l2z00_1278);
		}}}}}}

	}



/* f */
	uint32_t BGl_fz00zz__sha1z00(int BgL_sz00_20, uint32_t BgL_xz00_21,
		uint32_t BgL_yz00_22, uint32_t BgL_za7za7_23)
	{
		{	/* Unsafe/sha1.scm 165 */
			{

				switch ((long) (BgL_sz00_20))
					{
					case ((long) 0):

						return
							((BgL_xz00_21 & BgL_yz00_22) ^ (~(BgL_xz00_21) & BgL_za7za7_23));
						break;
					case ((long) 1):
					case ((long) 3):

						return (BgL_xz00_21 ^ (BgL_yz00_22 ^ BgL_za7za7_23));
						break;
					default:
						return
							(
							((BgL_xz00_21 & BgL_yz00_22) ^
								(BgL_xz00_21 & BgL_za7za7_23)) ^ (BgL_yz00_22 & BgL_za7za7_23));
					}
			}
		}

	}



/* sha1 */
	obj_t BGl_sha1z00zz__sha1z00(long BgL_lenz00_24, obj_t BgL_mz00_25)
	{
		{	/* Unsafe/sha1.scm 178 */
			{	/* Unsafe/sha1.scm 180 */
				obj_t BgL_wz00_1311;

				BgL_wz00_1311 =
					BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 80),
					(uint32_t) (((long) 0)));
				{	/* Unsafe/sha1.scm 184 */
					obj_t BgL_vecz00_1313;

					{	/* Unsafe/sha1.scm 184 */
						long BgL_arg1306z00_1316;

						BgL_arg1306z00_1316 = (VECTOR_LENGTH(BgL_mz00_25) - ((long) 1));
						BgL_vecz00_1313 = VECTOR_REF(BgL_mz00_25, BgL_arg1306z00_1316);
					}
					{	/* Unsafe/sha1.scm 185 */
						long BgL_v15z00_1315;

						BgL_v15z00_1315 = (BgL_lenz00_24 * ((long) 8));
						{	/* Unsafe/sha1.scm 186 */

							{	/* Unsafe/sha1.scm 187 */
								uint32_t BgL_tmpz00_3297;

								BgL_tmpz00_3297 = (uint32_t) (((long) 0));
								BGL_U32VSET(BgL_vecz00_1313, ((long) 14), BgL_tmpz00_3297);
							} BUNSPEC;
							{	/* Unsafe/sha1.scm 188 */
								uint32_t BgL_tmpz00_3300;

								BgL_tmpz00_3300 = (uint32_t) (BgL_v15z00_1315);
								BGL_U32VSET(BgL_vecz00_1313, ((long) 15), BgL_tmpz00_3300);
							} BUNSPEC;
				}}}
				{	/* Unsafe/sha1.scm 191 */
					uint32_t BgL_h0z00_1317;

					{	/* Unsafe/sha1.scm 191 */
						uint32_t BgL_arg1380z00_1418;
						uint32_t BgL_arg1381z00_1419;

						{	/* Unsafe/sha1.scm 191 */
							uint32_t BgL_arg1382z00_1420;

							{	/* Unsafe/sha1.scm 191 */
								uint32_t BgL_res1895z00_2198;

								BgL_res1895z00_2198 = (uint32_t) (((long) 26437));
								BgL_arg1382z00_1420 = BgL_res1895z00_2198;
							}
							BgL_arg1380z00_1418 =
								(BgL_arg1382z00_1420 << (int) (((long) 16)));
						}
						{	/* Unsafe/sha1.scm 191 */
							uint32_t BgL_res1897z00_2201;

							BgL_res1897z00_2201 = (uint32_t) (((long) 8961));
							BgL_arg1381z00_1419 = BgL_res1897z00_2201;
						}
						BgL_h0z00_1317 = (BgL_arg1380z00_1418 | BgL_arg1381z00_1419);
					}
					{	/* Unsafe/sha1.scm 191 */
						uint32_t BgL_h1z00_1318;

						{	/* Unsafe/sha1.scm 192 */
							uint32_t BgL_arg1377z00_1415;
							uint32_t BgL_arg1378z00_1416;

							{	/* Unsafe/sha1.scm 192 */
								uint32_t BgL_arg1379z00_1417;

								{	/* Unsafe/sha1.scm 192 */
									uint32_t BgL_res1899z00_2205;

									BgL_res1899z00_2205 = (uint32_t) (((long) 61389));
									BgL_arg1379z00_1417 = BgL_res1899z00_2205;
								}
								BgL_arg1377z00_1415 =
									(BgL_arg1379z00_1417 << (int) (((long) 16)));
							}
							{	/* Unsafe/sha1.scm 192 */
								uint32_t BgL_res1901z00_2208;

								BgL_res1901z00_2208 = (uint32_t) (((long) 43913));
								BgL_arg1378z00_1416 = BgL_res1901z00_2208;
							}
							BgL_h1z00_1318 = (BgL_arg1377z00_1415 | BgL_arg1378z00_1416);
						}
						{	/* Unsafe/sha1.scm 192 */
							uint32_t BgL_h2z00_1319;

							{	/* Unsafe/sha1.scm 193 */
								uint32_t BgL_arg1374z00_1412;
								uint32_t BgL_arg1375z00_1413;

								{	/* Unsafe/sha1.scm 193 */
									uint32_t BgL_arg1376z00_1414;

									{	/* Unsafe/sha1.scm 193 */
										uint32_t BgL_res1903z00_2212;

										BgL_res1903z00_2212 = (uint32_t) (((long) 39098));
										BgL_arg1376z00_1414 = BgL_res1903z00_2212;
									}
									BgL_arg1374z00_1412 =
										(BgL_arg1376z00_1414 << (int) (((long) 16)));
								}
								{	/* Unsafe/sha1.scm 193 */
									uint32_t BgL_res1905z00_2215;

									BgL_res1905z00_2215 = (uint32_t) (((long) 56574));
									BgL_arg1375z00_1413 = BgL_res1905z00_2215;
								}
								BgL_h2z00_1319 = (BgL_arg1374z00_1412 | BgL_arg1375z00_1413);
							}
							{	/* Unsafe/sha1.scm 193 */
								uint32_t BgL_h3z00_1320;

								{	/* Unsafe/sha1.scm 194 */
									uint32_t BgL_arg1371z00_1409;
									uint32_t BgL_arg1372z00_1410;

									{	/* Unsafe/sha1.scm 194 */
										uint32_t BgL_arg1373z00_1411;

										{	/* Unsafe/sha1.scm 194 */
											uint32_t BgL_res1907z00_2219;

											BgL_res1907z00_2219 = (uint32_t) (((long) 4146));
											BgL_arg1373z00_1411 = BgL_res1907z00_2219;
										}
										BgL_arg1371z00_1409 =
											(BgL_arg1373z00_1411 << (int) (((long) 16)));
									}
									{	/* Unsafe/sha1.scm 194 */
										uint32_t BgL_res1909z00_2222;

										BgL_res1909z00_2222 = (uint32_t) (((long) 21622));
										BgL_arg1372z00_1410 = BgL_res1909z00_2222;
									}
									BgL_h3z00_1320 = (BgL_arg1371z00_1409 | BgL_arg1372z00_1410);
								}
								{	/* Unsafe/sha1.scm 194 */
									uint32_t BgL_h4z00_1321;

									{	/* Unsafe/sha1.scm 195 */
										uint32_t BgL_arg1367z00_1406;
										uint32_t BgL_arg1368z00_1407;

										{	/* Unsafe/sha1.scm 195 */
											uint32_t BgL_arg1370z00_1408;

											{	/* Unsafe/sha1.scm 195 */
												uint32_t BgL_res1911z00_2226;

												BgL_res1911z00_2226 = (uint32_t) (((long) 50130));
												BgL_arg1370z00_1408 = BgL_res1911z00_2226;
											}
											BgL_arg1367z00_1406 =
												(BgL_arg1370z00_1408 << (int) (((long) 16)));
										}
										{	/* Unsafe/sha1.scm 195 */
											uint32_t BgL_res1913z00_2229;

											BgL_res1913z00_2229 = (uint32_t) (((long) 57840));
											BgL_arg1368z00_1407 = BgL_res1913z00_2229;
										}
										BgL_h4z00_1321 =
											(BgL_arg1367z00_1406 | BgL_arg1368z00_1407);
									}
									{	/* Unsafe/sha1.scm 195 */

										{
											long BgL_iz00_1324;

											BgL_iz00_1324 = ((long) 0);
										BgL_zc3z04anonymousza31307ze3z87_1325:
											if ((BgL_iz00_1324 < VECTOR_LENGTH(BgL_mz00_25)))
												{	/* Unsafe/sha1.scm 198 */
													{
														long BgL_tz00_2249;

														BgL_tz00_2249 = ((long) 0);
													BgL_for1057z00_2248:
														if ((BgL_tz00_2249 < ((long) 16)))
															{	/* Unsafe/sha1.scm 201 */
																{	/* Unsafe/sha1.scm 202 */
																	uint32_t BgL_arg1311z00_2254;

																	{	/* Unsafe/sha1.scm 202 */
																		uint32_t BgL_res1917z00_2255;

																		{	/* Unsafe/sha1.scm 202 */
																			int BgL_iz00_2257;
																			int BgL_jz00_2258;

																			BgL_iz00_2257 = (int) (BgL_iz00_1324);
																			BgL_jz00_2258 = (int) (BgL_tz00_2249);
																			{	/* Unsafe/sha1.scm 160 */
																				long BgL_auxz00_3338;
																				obj_t BgL_tmpz00_3335;

																				BgL_auxz00_3338 =
																					(long) (BgL_jz00_2258);
																				BgL_tmpz00_3335 =
																					VECTOR_REF(BgL_mz00_25,
																					(long) (BgL_iz00_2257));
																				BgL_res1917z00_2255 =
																					BGL_U32VREF(BgL_tmpz00_3335,
																					BgL_auxz00_3338);
																		}}
																		BgL_arg1311z00_2254 = BgL_res1917z00_2255;
																	}
																	BGL_U32VSET(BgL_wz00_1311, BgL_tz00_2249,
																		BgL_arg1311z00_2254);
																	BUNSPEC;
																}
																{
																	long BgL_tz00_3342;

																	BgL_tz00_3342 = (BgL_tz00_2249 + ((long) 1));
																	BgL_tz00_2249 = BgL_tz00_3342;
																	goto BgL_for1057z00_2248;
																}
															}
														else
															{	/* Unsafe/sha1.scm 201 */
																((bool_t) 0);
															}
													}
													{
														long BgL_tz00_1337;

														BgL_tz00_1337 = ((long) 16);
													BgL_zc3z04anonymousza31313ze3z87_1338:
														if ((BgL_tz00_1337 < ((long) 80)))
															{	/* Unsafe/sha1.scm 203 */
																{	/* Unsafe/sha1.scm 204 */
																	uint32_t BgL_w0z00_1340;

																	{	/* Unsafe/sha1.scm 204 */
																		long BgL_tmpz00_3346;

																		BgL_tmpz00_3346 =
																			(BgL_tz00_1337 - ((long) 3));
																		BgL_w0z00_1340 =
																			BGL_U32VREF(BgL_wz00_1311,
																			BgL_tmpz00_3346);
																	}
																	{	/* Unsafe/sha1.scm 204 */
																		uint32_t BgL_w1z00_1341;

																		{	/* Unsafe/sha1.scm 205 */
																			long BgL_tmpz00_3349;

																			BgL_tmpz00_3349 =
																				(BgL_tz00_1337 - ((long) 8));
																			BgL_w1z00_1341 =
																				BGL_U32VREF(BgL_wz00_1311,
																				BgL_tmpz00_3349);
																		}
																		{	/* Unsafe/sha1.scm 205 */
																			uint32_t BgL_w2z00_1342;

																			{	/* Unsafe/sha1.scm 206 */
																				long BgL_tmpz00_3352;

																				BgL_tmpz00_3352 =
																					(BgL_tz00_1337 - ((long) 14));
																				BgL_w2z00_1342 =
																					BGL_U32VREF(BgL_wz00_1311,
																					BgL_tmpz00_3352);
																			}
																			{	/* Unsafe/sha1.scm 206 */
																				uint32_t BgL_w3z00_1343;

																				{	/* Unsafe/sha1.scm 207 */
																					long BgL_tmpz00_3355;

																					BgL_tmpz00_3355 =
																						(BgL_tz00_1337 - ((long) 16));
																					BgL_w3z00_1343 =
																						BGL_U32VREF(BgL_wz00_1311,
																						BgL_tmpz00_3355);
																				}
																				{	/* Unsafe/sha1.scm 207 */
																					uint32_t BgL_vz00_1344;

																					BgL_vz00_1344 =
																						(BgL_w0z00_1340 ^
																						(BgL_w1z00_1341 ^
																							(BgL_w2z00_1342 ^
																								BgL_w3z00_1343)));
																					{	/* Unsafe/sha1.scm 208 */

																						{	/* Unsafe/sha1.scm 209 */
																							uint32_t BgL_arg1315z00_1345;

																							BgL_arg1315z00_1345 =
																								(
																								(BgL_vz00_1344 <<
																									(int) (((long) 1))) |
																								(BgL_vz00_1344 >>
																									(int) (
																										(((long) 32) -
																											((long) 1)))));
																							BGL_U32VSET(BgL_wz00_1311,
																								BgL_tz00_1337,
																								BgL_arg1315z00_1345);
																							BUNSPEC;
																}}}}}}}
																{
																	long BgL_tz00_3368;

																	BgL_tz00_3368 = (BgL_tz00_1337 + ((long) 1));
																	BgL_tz00_1337 = BgL_tz00_3368;
																	goto BgL_zc3z04anonymousza31313ze3z87_1338;
																}
															}
														else
															{	/* Unsafe/sha1.scm 203 */
																((bool_t) 0);
															}
													}
													{	/* Unsafe/sha1.scm 213 */
														uint32_t BgL_az00_1354;
														uint32_t BgL_bz00_1355;
														uint32_t BgL_cz00_1356;
														uint32_t BgL_dz00_1357;
														uint32_t BgL_ez00_1358;

														BgL_az00_1354 = BgL_h0z00_1317;
														BgL_bz00_1355 = BgL_h1z00_1318;
														BgL_cz00_1356 = BgL_h2z00_1319;
														BgL_dz00_1357 = BgL_h3z00_1320;
														BgL_ez00_1358 = BgL_h4z00_1321;
														{
															long BgL_tz00_1361;

															BgL_tz00_1361 = ((long) 0);
														BgL_zc3z04anonymousza31326ze3z87_1362:
															if ((BgL_tz00_1361 < ((long) 80)))
																{	/* Unsafe/sha1.scm 220 */
																	{	/* Unsafe/sha1.scm 221 */
																		long BgL_sz00_1364;

																		BgL_sz00_1364 =
																			(BgL_tz00_1361 / ((long) 20));
																		{	/* Unsafe/sha1.scm 221 */
																			uint32_t BgL_a5z00_1365;

																			{	/* Unsafe/sha1.scm 222 */
																				uint32_t BgL_xz00_2306;

																				BgL_xz00_2306 = BgL_az00_1354;
																				BgL_a5z00_1365 =
																					(
																					(BgL_xz00_2306 <<
																						(int) (((long) 5))) |
																					(BgL_xz00_2306 >>
																						(int) (
																							(((long) 32) - ((long) 5)))));
																			}
																			{	/* Unsafe/sha1.scm 222 */
																				uint32_t BgL_fz00_1366;

																				BgL_fz00_1366 =
																					BGl_fz00zz__sha1z00(
																					(int) (BgL_sz00_1364), BgL_bz00_1355,
																					BgL_cz00_1356, BgL_dz00_1357);
																				{	/* Unsafe/sha1.scm 223 */
																					uint32_t BgL_kz00_1367;

																					BgL_kz00_1367 =
																						BGL_U32VREF(BGl_Kz00zz__sha1z00,
																						BgL_sz00_1364);
																					{	/* Unsafe/sha1.scm 224 */
																						uint32_t BgL_wz00_1368;

																						BgL_wz00_1368 =
																							BGL_U32VREF(BgL_wz00_1311,
																							BgL_tz00_1361);
																						{	/* Unsafe/sha1.scm 225 */
																							uint32_t BgL_yz00_1369;

																							BgL_yz00_1369 =
																								(BgL_a5z00_1365 +
																								(BgL_fz00_1366 +
																									(BgL_ez00_1358 +
																										(BgL_kz00_1367 +
																											BgL_wz00_1368))));
																							{	/* Unsafe/sha1.scm 226 */

																								BgL_ez00_1358 = BgL_dz00_1357;
																								BgL_dz00_1357 = BgL_cz00_1356;
																								{	/* Unsafe/sha1.scm 229 */
																									uint32_t BgL_xz00_2332;

																									BgL_xz00_2332 = BgL_bz00_1355;
																									BgL_cz00_1356 =
																										(
																										(BgL_xz00_2332 <<
																											(int) (((long) 30))) |
																										(BgL_xz00_2332 >>
																											(int) (
																												(((long) 32) -
																													((long) 30)))));
																								}
																								BgL_bz00_1355 = BgL_az00_1354;
																								{	/* Unsafe/sha1.scm 231 */
																									uint32_t BgL_arg1328z00_1370;

																									{	/* Unsafe/sha1.scm 231 */
																										uint32_t
																											BgL_arg1329z00_1371;
																										uint32_t
																											BgL_arg1330z00_1372;
																										{	/* Unsafe/sha1.scm 231 */
																											uint32_t
																												BgL_arg1331z00_1373;
																											{	/* Unsafe/sha1.scm 231 */
																												uint32_t
																													BgL_res1949z00_2346;
																												BgL_res1949z00_2346 =
																													(uint32_t) (((long)
																														65535));
																												BgL_arg1331z00_1373 =
																													BgL_res1949z00_2346;
																											}
																											BgL_arg1329z00_1371 =
																												(BgL_arg1331z00_1373 <<
																												(int) (((long) 16)));
																										}
																										{	/* Unsafe/sha1.scm 231 */
																											uint32_t
																												BgL_res1953z00_2349;
																											BgL_res1953z00_2349 =
																												(uint32_t) (((long)
																													65535));
																											BgL_arg1330z00_1372 =
																												BgL_res1953z00_2349;
																										}
																										BgL_arg1328z00_1370 =
																											(BgL_arg1329z00_1371 |
																											BgL_arg1330z00_1372);
																									}
																									BgL_az00_1354 =
																										(BgL_yz00_1369 &
																										BgL_arg1328z00_1370);
																	}}}}}}}}
																	{
																		long BgL_tz00_3399;

																		BgL_tz00_3399 =
																			(BgL_tz00_1361 + ((long) 1));
																		BgL_tz00_1361 = BgL_tz00_3399;
																		goto BgL_zc3z04anonymousza31326ze3z87_1362;
																	}
																}
															else
																{	/* Unsafe/sha1.scm 220 */
																	((bool_t) 0);
																}
														}
														{	/* Unsafe/sha1.scm 233 */
															uint32_t BgL_arg1338z00_1379;
															uint32_t BgL_arg1339z00_1380;

															BgL_arg1338z00_1379 =
																(BgL_h0z00_1317 + BgL_az00_1354);
															{	/* Unsafe/sha1.scm 233 */
																uint32_t BgL_arg1340z00_1381;
																uint32_t BgL_arg1341z00_1382;

																{	/* Unsafe/sha1.scm 233 */
																	uint32_t BgL_arg1342z00_1383;

																	{	/* Unsafe/sha1.scm 233 */
																		uint32_t BgL_res1958z00_2361;

																		BgL_res1958z00_2361 =
																			(uint32_t) (((long) 65535));
																		BgL_arg1342z00_1383 = BgL_res1958z00_2361;
																	}
																	BgL_arg1340z00_1381 =
																		(BgL_arg1342z00_1383 <<
																		(int) (((long) 16)));
																}
																{	/* Unsafe/sha1.scm 233 */
																	uint32_t BgL_res1960z00_2364;

																	BgL_res1960z00_2364 =
																		(uint32_t) (((long) 65535));
																	BgL_arg1341z00_1382 = BgL_res1960z00_2364;
																}
																BgL_arg1339z00_1380 =
																	(BgL_arg1340z00_1381 | BgL_arg1341z00_1382);
															}
															BgL_h0z00_1317 =
																(BgL_arg1338z00_1379 & BgL_arg1339z00_1380);
														}
														{	/* Unsafe/sha1.scm 234 */
															uint32_t BgL_arg1343z00_1384;
															uint32_t BgL_arg1344z00_1385;

															BgL_arg1343z00_1384 =
																(BgL_h1z00_1318 + BgL_bz00_1355);
															{	/* Unsafe/sha1.scm 234 */
																uint32_t BgL_arg1345z00_1386;
																uint32_t BgL_arg1346z00_1387;

																{	/* Unsafe/sha1.scm 234 */
																	uint32_t BgL_arg1347z00_1388;

																	{	/* Unsafe/sha1.scm 234 */
																		uint32_t BgL_res1964z00_2374;

																		BgL_res1964z00_2374 =
																			(uint32_t) (((long) 65535));
																		BgL_arg1347z00_1388 = BgL_res1964z00_2374;
																	}
																	BgL_arg1345z00_1386 =
																		(BgL_arg1347z00_1388 <<
																		(int) (((long) 16)));
																}
																{	/* Unsafe/sha1.scm 234 */
																	uint32_t BgL_res1967z00_2377;

																	BgL_res1967z00_2377 =
																		(uint32_t) (((long) 65535));
																	BgL_arg1346z00_1387 = BgL_res1967z00_2377;
																}
																BgL_arg1344z00_1385 =
																	(BgL_arg1345z00_1386 | BgL_arg1346z00_1387);
															}
															BgL_h1z00_1318 =
																(BgL_arg1343z00_1384 & BgL_arg1344z00_1385);
														}
														{	/* Unsafe/sha1.scm 235 */
															uint32_t BgL_arg1348z00_1389;
															uint32_t BgL_arg1350z00_1390;

															BgL_arg1348z00_1389 =
																(BgL_h2z00_1319 + BgL_cz00_1356);
															{	/* Unsafe/sha1.scm 235 */
																uint32_t BgL_arg1351z00_1391;
																uint32_t BgL_arg1352z00_1392;

																{	/* Unsafe/sha1.scm 235 */
																	uint32_t BgL_arg1353z00_1393;

																	{	/* Unsafe/sha1.scm 235 */
																		uint32_t BgL_res1972z00_2387;

																		BgL_res1972z00_2387 =
																			(uint32_t) (((long) 65535));
																		BgL_arg1353z00_1393 = BgL_res1972z00_2387;
																	}
																	BgL_arg1351z00_1391 =
																		(BgL_arg1353z00_1393 <<
																		(int) (((long) 16)));
																}
																{	/* Unsafe/sha1.scm 235 */
																	uint32_t BgL_res1974z00_2390;

																	BgL_res1974z00_2390 =
																		(uint32_t) (((long) 65535));
																	BgL_arg1352z00_1392 = BgL_res1974z00_2390;
																}
																BgL_arg1350z00_1390 =
																	(BgL_arg1351z00_1391 | BgL_arg1352z00_1392);
															}
															BgL_h2z00_1319 =
																(BgL_arg1348z00_1389 & BgL_arg1350z00_1390);
														}
														{	/* Unsafe/sha1.scm 236 */
															uint32_t BgL_arg1354z00_1394;
															uint32_t BgL_arg1355z00_1395;

															BgL_arg1354z00_1394 =
																(BgL_h3z00_1320 + BgL_dz00_1357);
															{	/* Unsafe/sha1.scm 236 */
																uint32_t BgL_arg1356z00_1396;
																uint32_t BgL_arg1357z00_1397;

																{	/* Unsafe/sha1.scm 236 */
																	uint32_t BgL_arg1359z00_1398;

																	{	/* Unsafe/sha1.scm 236 */
																		uint32_t BgL_res1978z00_2400;

																		BgL_res1978z00_2400 =
																			(uint32_t) (((long) 65535));
																		BgL_arg1359z00_1398 = BgL_res1978z00_2400;
																	}
																	BgL_arg1356z00_1396 =
																		(BgL_arg1359z00_1398 <<
																		(int) (((long) 16)));
																}
																{	/* Unsafe/sha1.scm 236 */
																	uint32_t BgL_res1980z00_2403;

																	BgL_res1980z00_2403 =
																		(uint32_t) (((long) 65535));
																	BgL_arg1357z00_1397 = BgL_res1980z00_2403;
																}
																BgL_arg1355z00_1395 =
																	(BgL_arg1356z00_1396 | BgL_arg1357z00_1397);
															}
															BgL_h3z00_1320 =
																(BgL_arg1354z00_1394 & BgL_arg1355z00_1395);
														}
														{	/* Unsafe/sha1.scm 237 */
															uint32_t BgL_arg1360z00_1399;
															uint32_t BgL_arg1361z00_1400;

															BgL_arg1360z00_1399 =
																(BgL_h4z00_1321 + BgL_ez00_1358);
															{	/* Unsafe/sha1.scm 237 */
																uint32_t BgL_arg1362z00_1401;
																uint32_t BgL_arg1363z00_1402;

																{	/* Unsafe/sha1.scm 237 */
																	uint32_t BgL_arg1364z00_1403;

																	{	/* Unsafe/sha1.scm 237 */
																		uint32_t BgL_res1984z00_2413;

																		BgL_res1984z00_2413 =
																			(uint32_t) (((long) 65535));
																		BgL_arg1364z00_1403 = BgL_res1984z00_2413;
																	}
																	BgL_arg1362z00_1401 =
																		(BgL_arg1364z00_1403 <<
																		(int) (((long) 16)));
																}
																{	/* Unsafe/sha1.scm 237 */
																	uint32_t BgL_res1986z00_2416;

																	BgL_res1986z00_2416 =
																		(uint32_t) (((long) 65535));
																	BgL_arg1363z00_1402 = BgL_res1986z00_2416;
																}
																BgL_arg1361z00_1400 =
																	(BgL_arg1362z00_1401 | BgL_arg1363z00_1402);
															}
															BgL_h4z00_1321 =
																(BgL_arg1360z00_1399 & BgL_arg1361z00_1400);
													}}
													{
														long BgL_iz00_3436;

														BgL_iz00_3436 = (BgL_iz00_1324 + ((long) 1));
														BgL_iz00_1324 = BgL_iz00_3436;
														goto BgL_zc3z04anonymousza31307ze3z87_1325;
													}
												}
											else
												{	/* Unsafe/sha1.scm 198 */
													((bool_t) 0);
												}
										}
										{	/* Unsafe/sha1.scm 239 */
											uint32_t BgL_w0z00_2425;
											uint32_t BgL_w1z00_2426;
											uint32_t BgL_w2z00_2427;
											uint32_t BgL_w3z00_2428;
											uint32_t BgL_w4z00_2429;

											BgL_w0z00_2425 = BgL_h0z00_1317;
											BgL_w1z00_2426 = BgL_h1z00_1318;
											BgL_w2z00_2427 = BgL_h2z00_1319;
											BgL_w3z00_2428 = BgL_h3z00_1320;
											BgL_w4z00_2429 = BgL_h4z00_1321;
											{	/* Unsafe/sha1.scm 117 */
												obj_t BgL_rz00_2430;

												BgL_rz00_2430 =
													make_string(((long) 40), ((unsigned char) '0'));
												BGl_u32zd2fillz12zc0zz__sha1z00(BgL_rz00_2430,
													((long) 0), BgL_w0z00_2425);
												BGl_u32zd2fillz12zc0zz__sha1z00(BgL_rz00_2430,
													((long) 8), BgL_w1z00_2426);
												BGl_u32zd2fillz12zc0zz__sha1z00(BgL_rz00_2430,
													((long) 16), BgL_w2z00_2427);
												BGl_u32zd2fillz12zc0zz__sha1z00(BgL_rz00_2430,
													((long) 24), BgL_w3z00_2428);
												BGl_u32zd2fillz12zc0zz__sha1z00(BgL_rz00_2430,
													((long) 32), BgL_w4z00_2429);
												return BgL_rz00_2430;
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



/* sha1sum-string */
	BGL_EXPORTED_DEF obj_t BGl_sha1sumzd2stringzd2zz__sha1z00(obj_t BgL_strz00_28)
	{
		{	/* Unsafe/sha1.scm 253 */
			{	/* Unsafe/sha1.scm 256 */
				long BgL_lenz00_1424;

				BgL_lenz00_1424 = STRING_LENGTH(BgL_strz00_28);
				{	/* Unsafe/sha1.scm 256 */
					long BgL_lz00_1425;

					{	/* Unsafe/sha1.scm 257 */
						long BgL_tmpz00_3445;

						{	/* Unsafe/sha1.scm 257 */
							obj_t BgL_tmpz00_3446;

							{	/* Unsafe/sha1.scm 245 */
								obj_t BgL_rz00_2442;

								BgL_rz00_2442 =
									BGl_2zf2zf2zz__r4_numbers_6_5z00(BINT(
										(BgL_lenz00_1424 + ((long) 1))), BINT(((long) 4)));
								if (INTEGERP(BgL_rz00_2442))
									{	/* Unsafe/sha1.scm 246 */
										BgL_tmpz00_3446 = BgL_rz00_2442;
									}
								else
									{	/* Unsafe/sha1.scm 246 */
										BgL_tmpz00_3446 =
											BINT(
											(long) (REAL_TO_DOUBLE(BGl_ceilingz00zz__r4_numbers_6_5z00
													(BgL_rz00_2442))));
							}}
							BgL_tmpz00_3445 = (long) CINT(BgL_tmpz00_3446);
						}
						BgL_lz00_1425 = (BgL_tmpz00_3445 + ((long) 2));
					}
					{	/* Unsafe/sha1.scm 257 */
						long BgL_nz00_1426;

						{	/* Unsafe/sha1.scm 245 */
							obj_t BgL_rz00_2451;

							BgL_rz00_2451 =
								BGl_2zf2zf2zz__r4_numbers_6_5z00(BINT(BgL_lz00_1425),
								BINT(((long) 16)));
							if (INTEGERP(BgL_rz00_2451))
								{	/* Unsafe/sha1.scm 246 */
									BgL_nz00_1426 = (long) CINT(BgL_rz00_2451);
								}
							else
								{	/* Unsafe/sha1.scm 246 */
									BgL_nz00_1426 =
										(long) (REAL_TO_DOUBLE(BGl_ceilingz00zz__r4_numbers_6_5z00
											(BgL_rz00_2451)));
						}}
						{	/* Unsafe/sha1.scm 258 */
							obj_t BgL_mz00_1427;

							BgL_mz00_1427 = make_vector(BgL_nz00_1426, BUNSPEC);
							{	/* Unsafe/sha1.scm 259 */

								{
									long BgL_iz00_1430;

									BgL_iz00_1430 = ((long) 0);
								BgL_zc3z04anonymousza31385ze3z87_1431:
									if ((BgL_iz00_1430 < BgL_nz00_1426))
										{	/* Unsafe/sha1.scm 261 */
											{	/* Unsafe/sha1.scm 262 */
												obj_t BgL_vecz00_1433;

												{	/* Llib/srfi4.scm 451 */

													BgL_vecz00_1433 =
														BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 16),
														(uint32_t) (0));
												}
												{
													long BgL_jz00_1436;

													BgL_jz00_1436 = ((long) 0);
												BgL_zc3z04anonymousza31387ze3z87_1437:
													if ((BgL_jz00_1436 < ((long) 16)))
														{	/* Unsafe/sha1.scm 263 */
															{	/* Unsafe/sha1.scm 264 */
																int BgL_nz00_1439;

																BgL_nz00_1439 =
																	(int) (
																	((BgL_iz00_1430 * ((long) 64)) +
																		(BgL_jz00_1436 * ((long) 4))));
																{	/* Unsafe/sha1.scm 264 */
																	uint32_t BgL_v0z00_1440;

																	{	/* Unsafe/sha1.scm 265 */
																		uint32_t BgL_res2014z00_2494;

																		{	/* Unsafe/sha1.scm 140 */
																			long BgL_lenz00_2474;

																			BgL_lenz00_2474 =
																				STRING_LENGTH(BgL_strz00_28);
																			if (
																				((long) (BgL_nz00_1439) <
																					BgL_lenz00_2474))
																				{	/* Unsafe/sha1.scm 142 */
																					long BgL_arg1287z00_2476;

																					BgL_arg1287z00_2476 =
																						(STRING_REF(BgL_strz00_28,
																							(long) (BgL_nz00_1439)));
																					{	/* Unsafe/sha1.scm 142 */
																						uint32_t BgL_res2012z00_2490;

																						BgL_res2012z00_2490 =
																							(uint32_t) (BgL_arg1287z00_2476);
																						BgL_res2014z00_2494 =
																							BgL_res2012z00_2490;
																				}}
																			else
																				{	/* Unsafe/sha1.scm 142 */
																					if (
																						((long) (BgL_nz00_1439) ==
																							BgL_lenz00_2474))
																						{	/* Unsafe/sha1.scm 143 */
																							BgL_res2014z00_2494 =
																								(uint32_t) (128);
																						}
																					else
																						{	/* Unsafe/sha1.scm 143 */
																							BgL_res2014z00_2494 =
																								(uint32_t) (0);
																						}
																				}
																		}
																		BgL_v0z00_1440 = BgL_res2014z00_2494;
																	}
																	{	/* Unsafe/sha1.scm 265 */
																		uint32_t BgL_v1z00_1441;

																		{	/* Unsafe/sha1.scm 266 */
																			long BgL_arg1400z00_1456;

																			BgL_arg1400z00_1456 =
																				((long) (BgL_nz00_1439) + ((long) 1));
																			{	/* Unsafe/sha1.scm 266 */
																				uint32_t BgL_res2022z00_2519;

																				{	/* Unsafe/sha1.scm 266 */
																					int BgL_iz00_2498;

																					BgL_iz00_2498 =
																						(int) (BgL_arg1400z00_1456);
																					{	/* Unsafe/sha1.scm 140 */
																						long BgL_lenz00_2499;

																						BgL_lenz00_2499 =
																							STRING_LENGTH(BgL_strz00_28);
																						if (
																							((long) (BgL_iz00_2498) <
																								BgL_lenz00_2499))
																							{	/* Unsafe/sha1.scm 142 */
																								long BgL_arg1287z00_2501;

																								BgL_arg1287z00_2501 =
																									(STRING_REF(BgL_strz00_28,
																										(long) (BgL_iz00_2498)));
																								{	/* Unsafe/sha1.scm 142 */
																									uint32_t BgL_res2020z00_2515;

																									BgL_res2020z00_2515 =
																										(uint32_t)
																										(BgL_arg1287z00_2501);
																									BgL_res2022z00_2519 =
																										BgL_res2020z00_2515;
																							}}
																						else
																							{	/* Unsafe/sha1.scm 142 */
																								if (
																									((long) (BgL_iz00_2498) ==
																										BgL_lenz00_2499))
																									{	/* Unsafe/sha1.scm 143 */
																										BgL_res2022z00_2519 =
																											(uint32_t) (128);
																									}
																								else
																									{	/* Unsafe/sha1.scm 143 */
																										BgL_res2022z00_2519 =
																											(uint32_t) (0);
																									}
																							}
																					}
																				}
																				BgL_v1z00_1441 = BgL_res2022z00_2519;
																			}
																		}
																		{	/* Unsafe/sha1.scm 266 */
																			uint32_t BgL_v2z00_1442;

																			{	/* Unsafe/sha1.scm 267 */
																				long BgL_arg1399z00_1455;

																				BgL_arg1399z00_1455 =
																					((long) (BgL_nz00_1439) + ((long) 2));
																				{	/* Unsafe/sha1.scm 267 */
																					uint32_t BgL_res2030z00_2544;

																					{	/* Unsafe/sha1.scm 267 */
																						int BgL_iz00_2523;

																						BgL_iz00_2523 =
																							(int) (BgL_arg1399z00_1455);
																						{	/* Unsafe/sha1.scm 140 */
																							long BgL_lenz00_2524;

																							BgL_lenz00_2524 =
																								STRING_LENGTH(BgL_strz00_28);
																							if (
																								((long) (BgL_iz00_2523) <
																									BgL_lenz00_2524))
																								{	/* Unsafe/sha1.scm 142 */
																									long BgL_arg1287z00_2526;

																									BgL_arg1287z00_2526 =
																										(STRING_REF(BgL_strz00_28,
																											(long) (BgL_iz00_2523)));
																									{	/* Unsafe/sha1.scm 142 */
																										uint32_t
																											BgL_res2028z00_2540;
																										BgL_res2028z00_2540 =
																											(uint32_t)
																											(BgL_arg1287z00_2526);
																										BgL_res2030z00_2544 =
																											BgL_res2028z00_2540;
																								}}
																							else
																								{	/* Unsafe/sha1.scm 142 */
																									if (
																										((long) (BgL_iz00_2523) ==
																											BgL_lenz00_2524))
																										{	/* Unsafe/sha1.scm 143 */
																											BgL_res2030z00_2544 =
																												(uint32_t) (128);
																										}
																									else
																										{	/* Unsafe/sha1.scm 143 */
																											BgL_res2030z00_2544 =
																												(uint32_t) (0);
																										}
																								}
																						}
																					}
																					BgL_v2z00_1442 = BgL_res2030z00_2544;
																				}
																			}
																			{	/* Unsafe/sha1.scm 267 */
																				uint32_t BgL_v3z00_1443;

																				{	/* Unsafe/sha1.scm 268 */
																					long BgL_arg1398z00_1454;

																					BgL_arg1398z00_1454 =
																						(
																						(long) (BgL_nz00_1439) +
																						((long) 3));
																					{	/* Unsafe/sha1.scm 268 */
																						uint32_t BgL_res2038z00_2569;

																						{	/* Unsafe/sha1.scm 268 */
																							int BgL_iz00_2548;

																							BgL_iz00_2548 =
																								(int) (BgL_arg1398z00_1454);
																							{	/* Unsafe/sha1.scm 140 */
																								long BgL_lenz00_2549;

																								BgL_lenz00_2549 =
																									STRING_LENGTH(BgL_strz00_28);
																								if (
																									((long) (BgL_iz00_2548) <
																										BgL_lenz00_2549))
																									{	/* Unsafe/sha1.scm 142 */
																										long BgL_arg1287z00_2551;

																										BgL_arg1287z00_2551 =
																											(STRING_REF(BgL_strz00_28,
																												(long)
																												(BgL_iz00_2548)));
																										{	/* Unsafe/sha1.scm 142 */
																											uint32_t
																												BgL_res2036z00_2565;
																											BgL_res2036z00_2565 =
																												(uint32_t)
																												(BgL_arg1287z00_2551);
																											BgL_res2038z00_2569 =
																												BgL_res2036z00_2565;
																									}}
																								else
																									{	/* Unsafe/sha1.scm 142 */
																										if (
																											((long) (BgL_iz00_2548) ==
																												BgL_lenz00_2549))
																											{	/* Unsafe/sha1.scm 143 */
																												BgL_res2038z00_2569 =
																													(uint32_t) (128);
																											}
																										else
																											{	/* Unsafe/sha1.scm 143 */
																												BgL_res2038z00_2569 =
																													(uint32_t) (0);
																											}
																									}
																							}
																						}
																						BgL_v3z00_1443 =
																							BgL_res2038z00_2569;
																					}
																				}
																				{	/* Unsafe/sha1.scm 268 */
																					uint32_t BgL_vz00_1444;

																					{	/* Unsafe/sha1.scm 269 */
																						uint32_t BgL_arg1389z00_1445;
																						uint32_t BgL_arg1390z00_1446;

																						{	/* Unsafe/sha1.scm 269 */
																							uint32_t BgL_arg1391z00_1447;

																							{	/* Unsafe/sha1.scm 269 */
																								long BgL_arg1392z00_1448;

																								{	/* Unsafe/sha1.scm 269 */
																									uint32_t BgL_arg1393z00_1449;

																									BgL_arg1393z00_1449 =
																										(
																										(BgL_v0z00_1440 <<
																											(int) (((long) 8))) |
																										BgL_v1z00_1441);
																									{	/* Unsafe/sha1.scm 269 */
																										long BgL_res2041z00_2576;

																										BgL_res2041z00_2576 =
																											(long)
																											(BgL_arg1393z00_1449);
																										BgL_arg1392z00_1448 =
																											BgL_res2041z00_2576;
																								}}
																								{	/* Unsafe/sha1.scm 269 */
																									uint32_t BgL_res2042z00_2578;

																									BgL_res2042z00_2578 =
																										(uint32_t)
																										(BgL_arg1392z00_1448);
																									BgL_arg1391z00_1447 =
																										BgL_res2042z00_2578;
																							}}
																							BgL_arg1389z00_1445 =
																								(BgL_arg1391z00_1447 <<
																								(int) (((long) 16)));
																						}
																						{	/* Unsafe/sha1.scm 269 */
																							long BgL_arg1395z00_1451;

																							{	/* Unsafe/sha1.scm 269 */
																								uint32_t BgL_arg1396z00_1452;

																								BgL_arg1396z00_1452 =
																									(
																									(BgL_v2z00_1442 <<
																										(int) (((long) 8))) |
																									BgL_v3z00_1443);
																								{	/* Unsafe/sha1.scm 269 */
																									long BgL_res2046z00_2587;

																									BgL_res2046z00_2587 =
																										(long)
																										(BgL_arg1396z00_1452);
																									BgL_arg1395z00_1451 =
																										BgL_res2046z00_2587;
																							}}
																							{	/* Unsafe/sha1.scm 269 */
																								uint32_t BgL_res2047z00_2589;

																								BgL_res2047z00_2589 =
																									(uint32_t)
																									(BgL_arg1395z00_1451);
																								BgL_arg1390z00_1446 =
																									BgL_res2047z00_2589;
																						}}
																						BgL_vz00_1444 =
																							(BgL_arg1389z00_1445 |
																							BgL_arg1390z00_1446);
																					}
																					{	/* Unsafe/sha1.scm 269 */

																						BGL_U32VSET(BgL_vecz00_1433,
																							BgL_jz00_1436, BgL_vz00_1444);
																						BUNSPEC;
															}}}}}}}
															VECTOR_SET(BgL_mz00_1427, BgL_iz00_1430,
																BgL_vecz00_1433);
															{
																long BgL_jz00_3546;

																BgL_jz00_3546 = (BgL_jz00_1436 + ((long) 1));
																BgL_jz00_1436 = BgL_jz00_3546;
																goto BgL_zc3z04anonymousza31387ze3z87_1437;
															}
														}
													else
														{	/* Unsafe/sha1.scm 263 */
															((bool_t) 0);
														}
												}
											}
											{
												long BgL_iz00_3548;

												BgL_iz00_3548 = (BgL_iz00_1430 + ((long) 1));
												BgL_iz00_1430 = BgL_iz00_3548;
												goto BgL_zc3z04anonymousza31385ze3z87_1431;
											}
										}
									else
										{	/* Unsafe/sha1.scm 261 */
											((bool_t) 0);
										}
								}
								return BGl_sha1z00zz__sha1z00(BgL_lenz00_1424, BgL_mz00_1427);
							}
						}
					}
				}
			}
		}

	}



/* &sha1sum-string */
	obj_t BGl_z62sha1sumzd2stringzb0zz__sha1z00(obj_t BgL_envz00_3195,
		obj_t BgL_strz00_3196)
	{
		{	/* Unsafe/sha1.scm 253 */
			{	/* Unsafe/sha1.scm 256 */
				obj_t BgL_auxz00_3551;

				if (STRINGP(BgL_strz00_3196))
					{	/* Unsafe/sha1.scm 256 */
						BgL_auxz00_3551 = BgL_strz00_3196;
					}
				else
					{
						obj_t BgL_auxz00_3554;

						BgL_auxz00_3554 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2234z00zz__sha1z00,
							BINT(((long) 10118)), BGl_string2235z00zz__sha1z00,
							BGl_string2236z00zz__sha1z00, BgL_strz00_3196);
						FAILURE(BgL_auxz00_3554, BFALSE, BFALSE);
					}
				return BGl_sha1sumzd2stringzd2zz__sha1z00(BgL_auxz00_3551);
			}
		}

	}



/* sha1sum-mmap */
	BGL_EXPORTED_DEF obj_t BGl_sha1sumzd2mmapzd2zz__sha1z00(obj_t BgL_strz00_29)
	{
		{	/* Unsafe/sha1.scm 278 */
			{	/* Unsafe/sha1.scm 281 */
				long BgL_lenz00_1468;

				{	/* Unsafe/sha1.scm 281 */
					long BgL_res2051z00_2600;

					BgL_res2051z00_2600 = BGL_MMAP_LENGTH(BgL_strz00_29);
					BgL_lenz00_1468 = (long) (BgL_res2051z00_2600);
				}
				{	/* Unsafe/sha1.scm 281 */
					long BgL_lz00_1469;

					{	/* Unsafe/sha1.scm 282 */
						long BgL_tmpz00_3561;

						{	/* Unsafe/sha1.scm 282 */
							obj_t BgL_tmpz00_3562;

							{	/* Unsafe/sha1.scm 245 */
								obj_t BgL_rz00_2603;

								BgL_rz00_2603 =
									BGl_2zf2zf2zz__r4_numbers_6_5z00(BINT(
										(BgL_lenz00_1468 + ((long) 1))), BINT(((long) 4)));
								if (INTEGERP(BgL_rz00_2603))
									{	/* Unsafe/sha1.scm 246 */
										BgL_tmpz00_3562 = BgL_rz00_2603;
									}
								else
									{	/* Unsafe/sha1.scm 246 */
										BgL_tmpz00_3562 =
											BINT(
											(long) (REAL_TO_DOUBLE(BGl_ceilingz00zz__r4_numbers_6_5z00
													(BgL_rz00_2603))));
							}}
							BgL_tmpz00_3561 = (long) CINT(BgL_tmpz00_3562);
						}
						BgL_lz00_1469 = (BgL_tmpz00_3561 + ((long) 2));
					}
					{	/* Unsafe/sha1.scm 282 */
						long BgL_nz00_1470;

						{	/* Unsafe/sha1.scm 245 */
							obj_t BgL_rz00_2612;

							BgL_rz00_2612 =
								BGl_2zf2zf2zz__r4_numbers_6_5z00(BINT(BgL_lz00_1469),
								BINT(((long) 16)));
							if (INTEGERP(BgL_rz00_2612))
								{	/* Unsafe/sha1.scm 246 */
									BgL_nz00_1470 = (long) CINT(BgL_rz00_2612);
								}
							else
								{	/* Unsafe/sha1.scm 246 */
									BgL_nz00_1470 =
										(long) (REAL_TO_DOUBLE(BGl_ceilingz00zz__r4_numbers_6_5z00
											(BgL_rz00_2612)));
						}}
						{	/* Unsafe/sha1.scm 283 */
							obj_t BgL_mz00_1471;

							BgL_mz00_1471 = make_vector(BgL_nz00_1470, BUNSPEC);
							{	/* Unsafe/sha1.scm 284 */

								{
									long BgL_iz00_1474;

									BgL_iz00_1474 = ((long) 0);
								BgL_zc3z04anonymousza31410ze3z87_1475:
									if ((BgL_iz00_1474 < BgL_nz00_1470))
										{	/* Unsafe/sha1.scm 286 */
											{	/* Unsafe/sha1.scm 287 */
												obj_t BgL_vecz00_1477;

												{	/* Llib/srfi4.scm 451 */

													BgL_vecz00_1477 =
														BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 16),
														(uint32_t) (0));
												}
												{
													long BgL_jz00_1480;

													BgL_jz00_1480 = ((long) 0);
												BgL_zc3z04anonymousza31412ze3z87_1481:
													if ((BgL_jz00_1480 < ((long) 16)))
														{	/* Unsafe/sha1.scm 288 */
															{	/* Unsafe/sha1.scm 289 */
																long BgL_nz00_1483;

																{	/* Unsafe/sha1.scm 289 */
																	long BgL_tmpz00_3590;

																	BgL_tmpz00_3590 =
																		(
																		(BgL_iz00_1474 * ((long) 64)) +
																		(BgL_jz00_1480 * ((long) 4)));
																	BgL_nz00_1483 = (long) (BgL_tmpz00_3590);
																}
																{	/* Unsafe/sha1.scm 289 */
																	uint32_t BgL_v0z00_1484;

																	{	/* Unsafe/sha1.scm 290 */
																		uint32_t BgL_res2074z00_2663;

																		{	/* Unsafe/sha1.scm 150 */
																			long BgL_lenz00_2635;

																			{	/* Unsafe/sha1.scm 150 */
																				long BgL_res2066z00_2641;

																				BgL_res2066z00_2641 =
																					BGL_MMAP_LENGTH(BgL_strz00_29);
																				BgL_lenz00_2635 = BgL_res2066z00_2641;
																			}
																			{	/* Unsafe/sha1.scm 152 */
																				bool_t BgL_test2286z00_3596;

																				{	/* Unsafe/sha1.scm 152 */
																					long BgL_n1z00_2642;
																					long BgL_n2z00_2643;

																					BgL_n1z00_2642 =
																						(long) (BgL_nz00_1483);
																					BgL_n2z00_2643 =
																						(long) (BgL_lenz00_2635);
																					BgL_test2286z00_3596 =
																						(BgL_n1z00_2642 < BgL_n2z00_2643);
																				}
																				if (BgL_test2286z00_3596)
																					{	/* Unsafe/sha1.scm 152 */
																						long BgL_arg1291z00_2637;

																						{	/* Unsafe/sha1.scm 152 */
																							unsigned char BgL_arg1292z00_2638;

																							{	/* Unsafe/sha1.scm 152 */
																								unsigned char
																									BgL_res2070z00_2655;
																								{	/* Unsafe/sha1.scm 152 */
																									unsigned char BgL_cz00_2647;

																									BgL_cz00_2647 =
																										BGL_MMAP_REF(BgL_strz00_29,
																										BgL_nz00_1483);
																									{	/* Unsafe/sha1.scm 152 */
																										long BgL_arg1509z00_2648;

																										BgL_arg1509z00_2648 =
																											(BgL_nz00_1483 +
																											((long) 1));
																										{	/* Unsafe/sha1.scm 152 */
																											long BgL_res2069z00_2654;

																											BGL_MMAP_RP_SET
																												(BgL_strz00_29,
																												BgL_arg1509z00_2648);
																											BUNSPEC;
																											BgL_res2069z00_2654 =
																												BgL_arg1509z00_2648;
																											BgL_res2069z00_2654;
																									}}
																									BgL_res2070z00_2655 =
																										BgL_cz00_2647;
																								}
																								BgL_arg1292z00_2638 =
																									BgL_res2070z00_2655;
																							}
																							BgL_arg1291z00_2637 =
																								(BgL_arg1292z00_2638);
																						}
																						{	/* Unsafe/sha1.scm 152 */
																							uint32_t BgL_res2072z00_2659;

																							BgL_res2072z00_2659 =
																								(uint32_t)
																								(BgL_arg1291z00_2637);
																							BgL_res2074z00_2663 =
																								BgL_res2072z00_2659;
																					}}
																				else
																					{	/* Unsafe/sha1.scm 153 */
																						bool_t BgL_test2287z00_3605;

																						{	/* Unsafe/sha1.scm 153 */
																							long BgL_n1z00_2660;
																							long BgL_n2z00_2661;

																							BgL_n1z00_2660 =
																								(long) (BgL_nz00_1483);
																							BgL_n2z00_2661 =
																								(long) (BgL_lenz00_2635);
																							BgL_test2287z00_3605 =
																								(BgL_n1z00_2660 ==
																								BgL_n2z00_2661);
																						}
																						if (BgL_test2287z00_3605)
																							{	/* Unsafe/sha1.scm 153 */
																								BgL_res2074z00_2663 =
																									(uint32_t) (128);
																							}
																						else
																							{	/* Unsafe/sha1.scm 153 */
																								BgL_res2074z00_2663 =
																									(uint32_t) (0);
																							}
																					}
																			}
																		}
																		BgL_v0z00_1484 = BgL_res2074z00_2663;
																	}
																	{	/* Unsafe/sha1.scm 290 */
																		uint32_t BgL_v1z00_1485;

																		{	/* Unsafe/sha1.scm 291 */
																			long BgL_arg1426z00_1500;

																			{	/* Unsafe/sha1.scm 291 */
																				long BgL_za71za7_2664;

																				BgL_za71za7_2664 =
																					(long) (BgL_nz00_1483);
																				BgL_arg1426z00_1500 =
																					(BgL_za71za7_2664 + ((long) 1));
																			}
																			{	/* Unsafe/sha1.scm 291 */
																				uint32_t BgL_res2084z00_2696;

																				{	/* Unsafe/sha1.scm 291 */
																					long BgL_iz00_2667;

																					BgL_iz00_2667 =
																						(long) (BgL_arg1426z00_1500);
																					{	/* Unsafe/sha1.scm 150 */
																						long BgL_lenz00_2668;

																						{	/* Unsafe/sha1.scm 150 */
																							long BgL_res2076z00_2674;

																							BgL_res2076z00_2674 =
																								BGL_MMAP_LENGTH(BgL_strz00_29);
																							BgL_lenz00_2668 =
																								BgL_res2076z00_2674;
																						}
																						{	/* Unsafe/sha1.scm 152 */
																							bool_t BgL_test2288z00_3613;

																							{	/* Unsafe/sha1.scm 152 */
																								long BgL_n1z00_2675;
																								long BgL_n2z00_2676;

																								BgL_n1z00_2675 =
																									(long) (BgL_iz00_2667);
																								BgL_n2z00_2676 =
																									(long) (BgL_lenz00_2668);
																								BgL_test2288z00_3613 =
																									(BgL_n1z00_2675 <
																									BgL_n2z00_2676);
																							}
																							if (BgL_test2288z00_3613)
																								{	/* Unsafe/sha1.scm 152 */
																									long BgL_arg1291z00_2670;

																									{	/* Unsafe/sha1.scm 152 */
																										unsigned char
																											BgL_arg1292z00_2671;
																										{	/* Unsafe/sha1.scm 152 */
																											unsigned char
																												BgL_res2080z00_2688;
																											{	/* Unsafe/sha1.scm 152 */
																												unsigned char
																													BgL_cz00_2680;
																												BgL_cz00_2680 =
																													BGL_MMAP_REF
																													(BgL_strz00_29,
																													BgL_iz00_2667);
																												{	/* Unsafe/sha1.scm 152 */
																													long
																														BgL_arg1509z00_2681;
																													BgL_arg1509z00_2681 =
																														(BgL_iz00_2667 +
																														((long) 1));
																													{	/* Unsafe/sha1.scm 152 */
																														long
																															BgL_res2079z00_2687;
																														BGL_MMAP_RP_SET
																															(BgL_strz00_29,
																															BgL_arg1509z00_2681);
																														BUNSPEC;
																														BgL_res2079z00_2687
																															=
																															BgL_arg1509z00_2681;
																														BgL_res2079z00_2687;
																												}}
																												BgL_res2080z00_2688 =
																													BgL_cz00_2680;
																											}
																											BgL_arg1292z00_2671 =
																												BgL_res2080z00_2688;
																										}
																										BgL_arg1291z00_2670 =
																											(BgL_arg1292z00_2671);
																									}
																									{	/* Unsafe/sha1.scm 152 */
																										uint32_t
																											BgL_res2082z00_2692;
																										BgL_res2082z00_2692 =
																											(uint32_t)
																											(BgL_arg1291z00_2670);
																										BgL_res2084z00_2696 =
																											BgL_res2082z00_2692;
																								}}
																							else
																								{	/* Unsafe/sha1.scm 153 */
																									bool_t BgL_test2289z00_3622;

																									{	/* Unsafe/sha1.scm 153 */
																										long BgL_n1z00_2693;
																										long BgL_n2z00_2694;

																										BgL_n1z00_2693 =
																											(long) (BgL_iz00_2667);
																										BgL_n2z00_2694 =
																											(long) (BgL_lenz00_2668);
																										BgL_test2289z00_3622 =
																											(BgL_n1z00_2693 ==
																											BgL_n2z00_2694);
																									}
																									if (BgL_test2289z00_3622)
																										{	/* Unsafe/sha1.scm 153 */
																											BgL_res2084z00_2696 =
																												(uint32_t) (128);
																										}
																									else
																										{	/* Unsafe/sha1.scm 153 */
																											BgL_res2084z00_2696 =
																												(uint32_t) (0);
																										}
																								}
																						}
																					}
																				}
																				BgL_v1z00_1485 = BgL_res2084z00_2696;
																			}
																		}
																		{	/* Unsafe/sha1.scm 291 */
																			uint32_t BgL_v2z00_1486;

																			{	/* Unsafe/sha1.scm 292 */
																				long BgL_arg1425z00_1499;

																				{	/* Unsafe/sha1.scm 292 */
																					long BgL_za71za7_2697;

																					BgL_za71za7_2697 =
																						(long) (BgL_nz00_1483);
																					BgL_arg1425z00_1499 =
																						(BgL_za71za7_2697 + ((long) 2));
																				}
																				{	/* Unsafe/sha1.scm 292 */
																					uint32_t BgL_res2094z00_2729;

																					{	/* Unsafe/sha1.scm 292 */
																						long BgL_iz00_2700;

																						BgL_iz00_2700 =
																							(long) (BgL_arg1425z00_1499);
																						{	/* Unsafe/sha1.scm 150 */
																							long BgL_lenz00_2701;

																							{	/* Unsafe/sha1.scm 150 */
																								long BgL_res2086z00_2707;

																								BgL_res2086z00_2707 =
																									BGL_MMAP_LENGTH
																									(BgL_strz00_29);
																								BgL_lenz00_2701 =
																									BgL_res2086z00_2707;
																							}
																							{	/* Unsafe/sha1.scm 152 */
																								bool_t BgL_test2290z00_3630;

																								{	/* Unsafe/sha1.scm 152 */
																									long BgL_n1z00_2708;
																									long BgL_n2z00_2709;

																									BgL_n1z00_2708 =
																										(long) (BgL_iz00_2700);
																									BgL_n2z00_2709 =
																										(long) (BgL_lenz00_2701);
																									BgL_test2290z00_3630 =
																										(BgL_n1z00_2708 <
																										BgL_n2z00_2709);
																								}
																								if (BgL_test2290z00_3630)
																									{	/* Unsafe/sha1.scm 152 */
																										long BgL_arg1291z00_2703;

																										{	/* Unsafe/sha1.scm 152 */
																											unsigned char
																												BgL_arg1292z00_2704;
																											{	/* Unsafe/sha1.scm 152 */
																												unsigned char
																													BgL_res2090z00_2721;
																												{	/* Unsafe/sha1.scm 152 */
																													unsigned char
																														BgL_cz00_2713;
																													BgL_cz00_2713 =
																														BGL_MMAP_REF
																														(BgL_strz00_29,
																														BgL_iz00_2700);
																													{	/* Unsafe/sha1.scm 152 */
																														long
																															BgL_arg1509z00_2714;
																														BgL_arg1509z00_2714
																															=
																															(BgL_iz00_2700 +
																															((long) 1));
																														{	/* Unsafe/sha1.scm 152 */
																															long
																																BgL_res2089z00_2720;
																															BGL_MMAP_RP_SET
																																(BgL_strz00_29,
																																BgL_arg1509z00_2714);
																															BUNSPEC;
																															BgL_res2089z00_2720
																																=
																																BgL_arg1509z00_2714;
																															BgL_res2089z00_2720;
																													}}
																													BgL_res2090z00_2721 =
																														BgL_cz00_2713;
																												}
																												BgL_arg1292z00_2704 =
																													BgL_res2090z00_2721;
																											}
																											BgL_arg1291z00_2703 =
																												(BgL_arg1292z00_2704);
																										}
																										{	/* Unsafe/sha1.scm 152 */
																											uint32_t
																												BgL_res2092z00_2725;
																											BgL_res2092z00_2725 =
																												(uint32_t)
																												(BgL_arg1291z00_2703);
																											BgL_res2094z00_2729 =
																												BgL_res2092z00_2725;
																									}}
																								else
																									{	/* Unsafe/sha1.scm 153 */
																										bool_t BgL_test2291z00_3639;

																										{	/* Unsafe/sha1.scm 153 */
																											long BgL_n1z00_2726;
																											long BgL_n2z00_2727;

																											BgL_n1z00_2726 =
																												(long) (BgL_iz00_2700);
																											BgL_n2z00_2727 =
																												(long)
																												(BgL_lenz00_2701);
																											BgL_test2291z00_3639 =
																												(BgL_n1z00_2726 ==
																												BgL_n2z00_2727);
																										}
																										if (BgL_test2291z00_3639)
																											{	/* Unsafe/sha1.scm 153 */
																												BgL_res2094z00_2729 =
																													(uint32_t) (128);
																											}
																										else
																											{	/* Unsafe/sha1.scm 153 */
																												BgL_res2094z00_2729 =
																													(uint32_t) (0);
																											}
																									}
																							}
																						}
																					}
																					BgL_v2z00_1486 = BgL_res2094z00_2729;
																				}
																			}
																			{	/* Unsafe/sha1.scm 292 */
																				uint32_t BgL_v3z00_1487;

																				{	/* Unsafe/sha1.scm 293 */
																					long BgL_arg1424z00_1498;

																					{	/* Unsafe/sha1.scm 293 */
																						long BgL_za71za7_2730;

																						BgL_za71za7_2730 =
																							(long) (BgL_nz00_1483);
																						BgL_arg1424z00_1498 =
																							(BgL_za71za7_2730 + ((long) 3));
																					}
																					{	/* Unsafe/sha1.scm 293 */
																						uint32_t BgL_res2104z00_2762;

																						{	/* Unsafe/sha1.scm 293 */
																							long BgL_iz00_2733;

																							BgL_iz00_2733 =
																								(long) (BgL_arg1424z00_1498);
																							{	/* Unsafe/sha1.scm 150 */
																								long BgL_lenz00_2734;

																								{	/* Unsafe/sha1.scm 150 */
																									long BgL_res2096z00_2740;

																									BgL_res2096z00_2740 =
																										BGL_MMAP_LENGTH
																										(BgL_strz00_29);
																									BgL_lenz00_2734 =
																										BgL_res2096z00_2740;
																								}
																								{	/* Unsafe/sha1.scm 152 */
																									bool_t BgL_test2292z00_3647;

																									{	/* Unsafe/sha1.scm 152 */
																										long BgL_n1z00_2741;
																										long BgL_n2z00_2742;

																										BgL_n1z00_2741 =
																											(long) (BgL_iz00_2733);
																										BgL_n2z00_2742 =
																											(long) (BgL_lenz00_2734);
																										BgL_test2292z00_3647 =
																											(BgL_n1z00_2741 <
																											BgL_n2z00_2742);
																									}
																									if (BgL_test2292z00_3647)
																										{	/* Unsafe/sha1.scm 152 */
																											long BgL_arg1291z00_2736;

																											{	/* Unsafe/sha1.scm 152 */
																												unsigned char
																													BgL_arg1292z00_2737;
																												{	/* Unsafe/sha1.scm 152 */
																													unsigned char
																														BgL_res2100z00_2754;
																													{	/* Unsafe/sha1.scm 152 */
																														unsigned char
																															BgL_cz00_2746;
																														BgL_cz00_2746 =
																															BGL_MMAP_REF
																															(BgL_strz00_29,
																															BgL_iz00_2733);
																														{	/* Unsafe/sha1.scm 152 */
																															long
																																BgL_arg1509z00_2747;
																															BgL_arg1509z00_2747
																																=
																																(BgL_iz00_2733 +
																																((long) 1));
																															{	/* Unsafe/sha1.scm 152 */
																																long
																																	BgL_res2099z00_2753;
																																BGL_MMAP_RP_SET
																																	(BgL_strz00_29,
																																	BgL_arg1509z00_2747);
																																BUNSPEC;
																																BgL_res2099z00_2753
																																	=
																																	BgL_arg1509z00_2747;
																																BgL_res2099z00_2753;
																														}}
																														BgL_res2100z00_2754
																															= BgL_cz00_2746;
																													}
																													BgL_arg1292z00_2737 =
																														BgL_res2100z00_2754;
																												}
																												BgL_arg1291z00_2736 =
																													(BgL_arg1292z00_2737);
																											}
																											{	/* Unsafe/sha1.scm 152 */
																												uint32_t
																													BgL_res2102z00_2758;
																												BgL_res2102z00_2758 =
																													(uint32_t)
																													(BgL_arg1291z00_2736);
																												BgL_res2104z00_2762 =
																													BgL_res2102z00_2758;
																										}}
																									else
																										{	/* Unsafe/sha1.scm 153 */
																											bool_t
																												BgL_test2293z00_3656;
																											{	/* Unsafe/sha1.scm 153 */
																												long BgL_n1z00_2759;
																												long BgL_n2z00_2760;

																												BgL_n1z00_2759 =
																													(long)
																													(BgL_iz00_2733);
																												BgL_n2z00_2760 =
																													(long)
																													(BgL_lenz00_2734);
																												BgL_test2293z00_3656 =
																													(BgL_n1z00_2759 ==
																													BgL_n2z00_2760);
																											}
																											if (BgL_test2293z00_3656)
																												{	/* Unsafe/sha1.scm 153 */
																													BgL_res2104z00_2762 =
																														(uint32_t) (128);
																												}
																											else
																												{	/* Unsafe/sha1.scm 153 */
																													BgL_res2104z00_2762 =
																														(uint32_t) (0);
																												}
																										}
																								}
																							}
																						}
																						BgL_v3z00_1487 =
																							BgL_res2104z00_2762;
																					}
																				}
																				{	/* Unsafe/sha1.scm 293 */
																					uint32_t BgL_vz00_1488;

																					{	/* Unsafe/sha1.scm 294 */
																						uint32_t BgL_arg1414z00_1489;
																						uint32_t BgL_arg1415z00_1490;

																						{	/* Unsafe/sha1.scm 294 */
																							uint32_t BgL_arg1416z00_1491;

																							{	/* Unsafe/sha1.scm 294 */
																								long BgL_arg1417z00_1492;

																								{	/* Unsafe/sha1.scm 294 */
																									uint32_t BgL_arg1418z00_1493;

																									BgL_arg1418z00_1493 =
																										(
																										(BgL_v0z00_1484 <<
																											(int) (((long) 8))) |
																										BgL_v1z00_1485);
																									{	/* Unsafe/sha1.scm 294 */
																										long BgL_res2107z00_2769;

																										BgL_res2107z00_2769 =
																											(long)
																											(BgL_arg1418z00_1493);
																										BgL_arg1417z00_1492 =
																											BgL_res2107z00_2769;
																								}}
																								{	/* Unsafe/sha1.scm 294 */
																									uint32_t BgL_res2108z00_2771;

																									BgL_res2108z00_2771 =
																										(uint32_t)
																										(BgL_arg1417z00_1492);
																									BgL_arg1416z00_1491 =
																										BgL_res2108z00_2771;
																							}}
																							BgL_arg1414z00_1489 =
																								(BgL_arg1416z00_1491 <<
																								(int) (((long) 16)));
																						}
																						{	/* Unsafe/sha1.scm 294 */
																							long BgL_arg1420z00_1495;

																							{	/* Unsafe/sha1.scm 294 */
																								uint32_t BgL_arg1421z00_1496;

																								BgL_arg1421z00_1496 =
																									(
																									(BgL_v2z00_1486 <<
																										(int) (((long) 8))) |
																									BgL_v3z00_1487);
																								{	/* Unsafe/sha1.scm 294 */
																									long BgL_res2112z00_2780;

																									BgL_res2112z00_2780 =
																										(long)
																										(BgL_arg1421z00_1496);
																									BgL_arg1420z00_1495 =
																										BgL_res2112z00_2780;
																							}}
																							{	/* Unsafe/sha1.scm 294 */
																								uint32_t BgL_res2113z00_2782;

																								BgL_res2113z00_2782 =
																									(uint32_t)
																									(BgL_arg1420z00_1495);
																								BgL_arg1415z00_1490 =
																									BgL_res2113z00_2782;
																						}}
																						BgL_vz00_1488 =
																							(BgL_arg1414z00_1489 |
																							BgL_arg1415z00_1490);
																					}
																					{	/* Unsafe/sha1.scm 294 */

																						BGL_U32VSET(BgL_vecz00_1477,
																							BgL_jz00_1480, BgL_vz00_1488);
																						BUNSPEC;
															}}}}}}}
															VECTOR_SET(BgL_mz00_1471, BgL_iz00_1474,
																BgL_vecz00_1477);
															{
																long BgL_jz00_3675;

																BgL_jz00_3675 = (BgL_jz00_1480 + ((long) 1));
																BgL_jz00_1480 = BgL_jz00_3675;
																goto BgL_zc3z04anonymousza31412ze3z87_1481;
															}
														}
													else
														{	/* Unsafe/sha1.scm 288 */
															((bool_t) 0);
														}
												}
											}
											{
												long BgL_iz00_3677;

												BgL_iz00_3677 = (BgL_iz00_1474 + ((long) 1));
												BgL_iz00_1474 = BgL_iz00_3677;
												goto BgL_zc3z04anonymousza31410ze3z87_1475;
											}
										}
									else
										{	/* Unsafe/sha1.scm 286 */
											((bool_t) 0);
										}
								}
								return BGl_sha1z00zz__sha1z00(BgL_lenz00_1468, BgL_mz00_1471);
							}
						}
					}
				}
			}
		}

	}



/* &sha1sum-mmap */
	obj_t BGl_z62sha1sumzd2mmapzb0zz__sha1z00(obj_t BgL_envz00_3197,
		obj_t BgL_strz00_3198)
	{
		{	/* Unsafe/sha1.scm 278 */
			{	/* Unsafe/sha1.scm 281 */
				obj_t BgL_auxz00_3680;

				if (BGL_MMAPP(BgL_strz00_3198))
					{	/* Unsafe/sha1.scm 281 */
						BgL_auxz00_3680 = BgL_strz00_3198;
					}
				else
					{
						obj_t BgL_auxz00_3683;

						BgL_auxz00_3683 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2234z00zz__sha1z00,
							BINT(((long) 11050)), BGl_string2237z00zz__sha1z00,
							BGl_string2238z00zz__sha1z00, BgL_strz00_3198);
						FAILURE(BgL_auxz00_3683, BFALSE, BFALSE);
					}
				return BGl_sha1sumzd2mmapzd2zz__sha1z00(BgL_auxz00_3680);
			}
		}

	}



/* sha1sum-port */
	BGL_EXPORTED_DEF obj_t BGl_sha1sumzd2portzd2zz__sha1z00(obj_t BgL_ipz00_30)
	{
		{	/* Unsafe/sha1.scm 303 */
			{	/* Unsafe/sha1.scm 306 */
				obj_t BgL_bufz00_1512;

				{	/* Ieee/string.scm 168 */

					BgL_bufz00_1512 = make_string(((long) 64), ((unsigned char) ' '));
				}
				{
					long BgL_lenz00_1515;
					obj_t BgL_lz00_1516;
					long BgL_nlz00_1517;

					BgL_lenz00_1515 = ((long) 0);
					BgL_lz00_1516 = BNIL;
					BgL_nlz00_1517 = ((long) 0);
				BgL_zc3z04anonymousza31434ze3z87_1518:
					BGl_stringzd2fillz12zc0zz__r4_strings_6_7z00(BgL_bufz00_1512,
						((unsigned char) '\000'));
					{	/* Unsafe/sha1.scm 312 */
						obj_t BgL_cz00_1519;

						{	/* Unsafe/sha1.scm 312 */
							long BgL_nz00_2795;

							BgL_nz00_2795 =
								bgl_rgc_blit_string(BgL_ipz00_30,
								BSTRING_TO_STRING(BgL_bufz00_1512), ((long) 0), ((long) 64));
							{	/* Unsafe/sha1.scm 312 */
								bool_t BgL_test2295z00_3692;

								if ((BgL_nz00_2795 == ((long) 0)))
									{	/* Unsafe/sha1.scm 312 */
										BgL_test2295z00_3692 = rgc_buffer_eof_p(BgL_ipz00_30);
									}
								else
									{	/* Unsafe/sha1.scm 312 */
										BgL_test2295z00_3692 = ((bool_t) 0);
									}
								if (BgL_test2295z00_3692)
									{	/* Unsafe/sha1.scm 312 */
										BgL_cz00_1519 = BEOF;
									}
								else
									{	/* Unsafe/sha1.scm 312 */
										BgL_cz00_1519 = BINT(BgL_nz00_2795);
									}
							}
						}
						{	/* Unsafe/sha1.scm 312 */
							obj_t BgL_lz00_1520;

							{	/* Unsafe/sha1.scm 313 */
								bool_t BgL_test2297z00_3697;

								{	/* Unsafe/sha1.scm 313 */
									bool_t BgL_res2119z00_2800;

									BgL_res2119z00_2800 = EOF_OBJECTP(BgL_cz00_1519);
									BgL_test2297z00_3697 = BgL_res2119z00_2800;
								}
								if (BgL_test2297z00_3697)
									{	/* Unsafe/sha1.scm 313 */
										BgL_lz00_1520 = BINT(((long) 0));
									}
								else
									{	/* Unsafe/sha1.scm 313 */
										BgL_lz00_1520 = BgL_cz00_1519;
									}
							}
							{	/* Unsafe/sha1.scm 313 */
								long BgL_nlenz00_1521;

								BgL_nlenz00_1521 =
									((long) CINT(BgL_lz00_1520) + BgL_lenz00_1515);
								{	/* Unsafe/sha1.scm 314 */
									obj_t BgL_vecz00_1522;

									BgL_vecz00_1522 =
										BGl_makezd2u32vectorzd2zz__srfi4z00(((long) 16),
										(uint32_t) (((long) 0)));
									{	/* Unsafe/sha1.scm 315 */

										if (((long) CINT(BgL_lz00_1520) < ((long) 64)))
											{	/* Unsafe/sha1.scm 316 */
												long BgL_tmpz00_3707;

												BgL_tmpz00_3707 = (long) CINT(BgL_lz00_1520);
												STRING_SET(BgL_bufz00_1512, BgL_tmpz00_3707,
													((unsigned char) 128));
											}
										else
											{	/* Unsafe/sha1.scm 316 */
												BFALSE;
											}
										{
											long BgL_jz00_1526;

											BgL_jz00_1526 = ((long) 0);
										BgL_zc3z04anonymousza31436ze3z87_1527:
											if ((BgL_jz00_1526 < ((long) 16)))
												{	/* Unsafe/sha1.scm 317 */
													{	/* Unsafe/sha1.scm 318 */
														int BgL_nz00_1529;

														BgL_nz00_1529 =
															(int) ((BgL_jz00_1526 * ((long) 4)));
														{	/* Unsafe/sha1.scm 318 */
															uint32_t BgL_v0z00_1530;

															{	/* Unsafe/sha1.scm 319 */
																long BgL_tmpz00_3714;

																BgL_tmpz00_3714 =
																	(STRING_REF(BgL_bufz00_1512,
																		(long) (BgL_nz00_1529)));
																BgL_v0z00_1530 = (uint32_t) (BgL_tmpz00_3714);
															}
															{	/* Unsafe/sha1.scm 319 */
																uint32_t BgL_v1z00_1531;

																{	/* Unsafe/sha1.scm 320 */
																	long BgL_tmpz00_3719;

																	BgL_tmpz00_3719 =
																		(STRING_REF(BgL_bufz00_1512,
																			((long) (BgL_nz00_1529) + ((long) 1))));
																	BgL_v1z00_1531 = (uint32_t) (BgL_tmpz00_3719);
																}
																{	/* Unsafe/sha1.scm 320 */
																	uint32_t BgL_v2z00_1532;

																	{	/* Unsafe/sha1.scm 321 */
																		long BgL_tmpz00_3725;

																		BgL_tmpz00_3725 =
																			(STRING_REF(BgL_bufz00_1512,
																				((long) (BgL_nz00_1529) + ((long) 2))));
																		BgL_v2z00_1532 =
																			(uint32_t) (BgL_tmpz00_3725);
																	}
																	{	/* Unsafe/sha1.scm 321 */
																		uint32_t BgL_v3z00_1533;

																		{	/* Unsafe/sha1.scm 322 */
																			long BgL_tmpz00_3731;

																			BgL_tmpz00_3731 =
																				(STRING_REF(BgL_bufz00_1512,
																					((long) (BgL_nz00_1529) +
																						((long) 3))));
																			BgL_v3z00_1533 =
																				(uint32_t) (BgL_tmpz00_3731);
																		}
																		{	/* Unsafe/sha1.scm 322 */
																			uint32_t BgL_vz00_1534;

																			{	/* Unsafe/sha1.scm 323 */
																				uint32_t BgL_arg1438z00_1535;
																				uint32_t BgL_arg1439z00_1536;

																				{	/* Unsafe/sha1.scm 323 */
																					uint32_t BgL_arg1440z00_1537;

																					{	/* Unsafe/sha1.scm 323 */
																						long BgL_arg1441z00_1538;

																						{	/* Unsafe/sha1.scm 323 */
																							uint32_t BgL_arg1442z00_1539;

																							BgL_arg1442z00_1539 =
																								(
																								(BgL_v0z00_1530 <<
																									(int) (((long) 8))) |
																								BgL_v1z00_1531);
																							{	/* Unsafe/sha1.scm 323 */
																								long BgL_res2137z00_2846;

																								BgL_res2137z00_2846 =
																									(long) (BgL_arg1442z00_1539);
																								BgL_arg1441z00_1538 =
																									BgL_res2137z00_2846;
																						}}
																						{	/* Unsafe/sha1.scm 323 */
																							uint32_t BgL_res2138z00_2848;

																							BgL_res2138z00_2848 =
																								(uint32_t)
																								(BgL_arg1441z00_1538);
																							BgL_arg1440z00_1537 =
																								BgL_res2138z00_2848;
																					}}
																					BgL_arg1438z00_1535 =
																						(BgL_arg1440z00_1537 <<
																						(int) (((long) 16)));
																				}
																				{	/* Unsafe/sha1.scm 323 */
																					long BgL_arg1444z00_1541;

																					{	/* Unsafe/sha1.scm 323 */
																						uint32_t BgL_arg1445z00_1542;

																						BgL_arg1445z00_1542 =
																							(
																							(BgL_v2z00_1532 <<
																								(int) (((long) 8))) |
																							BgL_v3z00_1533);
																						{	/* Unsafe/sha1.scm 323 */
																							long BgL_res2142z00_2857;

																							BgL_res2142z00_2857 =
																								(long) (BgL_arg1445z00_1542);
																							BgL_arg1444z00_1541 =
																								BgL_res2142z00_2857;
																					}}
																					{	/* Unsafe/sha1.scm 323 */
																						uint32_t BgL_res2143z00_2859;

																						BgL_res2143z00_2859 =
																							(uint32_t) (BgL_arg1444z00_1541);
																						BgL_arg1439z00_1536 =
																							BgL_res2143z00_2859;
																				}}
																				BgL_vz00_1534 =
																					(BgL_arg1438z00_1535 |
																					BgL_arg1439z00_1536);
																			}
																			{	/* Unsafe/sha1.scm 323 */

																				BGL_U32VSET(BgL_vecz00_1522,
																					BgL_jz00_1526, BgL_vz00_1534);
																				BUNSPEC;
													}}}}}}}
													{
														long BgL_jz00_3751;

														BgL_jz00_3751 = (BgL_jz00_1526 + ((long) 1));
														BgL_jz00_1526 = BgL_jz00_3751;
														goto BgL_zc3z04anonymousza31436ze3z87_1527;
													}
												}
											else
												{	/* Unsafe/sha1.scm 317 */
													((bool_t) 0);
												}
										}
										if (((long) CINT(BgL_lz00_1520) < ((long) 64)))
											{	/* Unsafe/sha1.scm 327 */
												long BgL_flz00_1554;

												{	/* Unsafe/sha1.scm 327 */
													long BgL_tmpz00_3756;

													{	/* Unsafe/sha1.scm 327 */
														obj_t BgL_tmpz00_3757;

														{	/* Unsafe/sha1.scm 245 */
															obj_t BgL_rz00_2869;

															BgL_rz00_2869 =
																BGl_2zf2zf2zz__r4_numbers_6_5z00(BINT(
																	(BgL_nlenz00_1521 + ((long) 1))),
																BINT(((long) 4)));
															if (INTEGERP(BgL_rz00_2869))
																{	/* Unsafe/sha1.scm 246 */
																	BgL_tmpz00_3757 = BgL_rz00_2869;
																}
															else
																{	/* Unsafe/sha1.scm 246 */
																	BgL_tmpz00_3757 =
																		BINT(
																		(long) (REAL_TO_DOUBLE
																			(BGl_ceilingz00zz__r4_numbers_6_5z00
																				(BgL_rz00_2869))));
														}}
														BgL_tmpz00_3756 = (long) CINT(BgL_tmpz00_3757);
													}
													BgL_flz00_1554 = (BgL_tmpz00_3756 + ((long) 2));
												}
												{	/* Unsafe/sha1.scm 327 */
													long BgL_nz00_1555;

													{	/* Unsafe/sha1.scm 245 */
														obj_t BgL_rz00_2878;

														BgL_rz00_2878 =
															BGl_2zf2zf2zz__r4_numbers_6_5z00(BINT
															(BgL_flz00_1554), BINT(((long) 16)));
														if (INTEGERP(BgL_rz00_2878))
															{	/* Unsafe/sha1.scm 246 */
																BgL_nz00_1555 = (long) CINT(BgL_rz00_2878);
															}
														else
															{	/* Unsafe/sha1.scm 246 */
																BgL_nz00_1555 =
																	(long) (REAL_TO_DOUBLE
																	(BGl_ceilingz00zz__r4_numbers_6_5z00
																		(BgL_rz00_2878)));
													}}
													{	/* Unsafe/sha1.scm 328 */
														obj_t BgL_mz00_1556;

														{	/* Unsafe/sha1.scm 331 */
															obj_t BgL_arg1458z00_1557;

															{	/* Unsafe/sha1.scm 331 */
																obj_t BgL_arg1459z00_1558;

																if (
																	(BgL_nz00_1555 >
																		(((long) 1) + BgL_nlz00_1517)))
																	{	/* Unsafe/sha1.scm 332 */
																		obj_t BgL_arg1462z00_1561;
																		obj_t BgL_arg1463z00_1562;

																		BgL_arg1462z00_1561 =
																			BGl_makezd2u32vectorzd2zz__srfi4z00((
																				(long) 16), (uint32_t) (0));
																		BgL_arg1463z00_1562 =
																			MAKE_YOUNG_PAIR(BgL_vecz00_1522,
																			BgL_lz00_1516);
																		BgL_arg1459z00_1558 =
																			MAKE_YOUNG_PAIR(BgL_arg1462z00_1561,
																			BgL_arg1463z00_1562);
																	}
																else
																	{	/* Unsafe/sha1.scm 331 */
																		BgL_arg1459z00_1558 =
																			MAKE_YOUNG_PAIR(BgL_vecz00_1522,
																			BgL_lz00_1516);
																	}
																BgL_arg1458z00_1557 =
																	bgl_reverse_bang(BgL_arg1459z00_1558);
															}
															BgL_mz00_1556 =
																BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
																(BgL_arg1458z00_1557);
														}
														{	/* Unsafe/sha1.scm 329 */

															return
																BGl_sha1z00zz__sha1z00(BgL_nlenz00_1521,
																BgL_mz00_1556);
														}
													}
												}
											}
										else
											{	/* Unsafe/sha1.scm 335 */
												obj_t BgL_arg1467z00_1566;
												long BgL_arg1468z00_1567;

												BgL_arg1467z00_1566 =
													MAKE_YOUNG_PAIR(BgL_vecz00_1522, BgL_lz00_1516);
												BgL_arg1468z00_1567 = (BgL_nlz00_1517 + ((long) 1));
												{
													long BgL_nlz00_3793;
													obj_t BgL_lz00_3792;
													long BgL_lenz00_3791;

													BgL_lenz00_3791 = BgL_nlenz00_1521;
													BgL_lz00_3792 = BgL_arg1467z00_1566;
													BgL_nlz00_3793 = BgL_arg1468z00_1567;
													BgL_nlz00_1517 = BgL_nlz00_3793;
													BgL_lz00_1516 = BgL_lz00_3792;
													BgL_lenz00_1515 = BgL_lenz00_3791;
													goto BgL_zc3z04anonymousza31434ze3z87_1518;
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



/* &sha1sum-port */
	obj_t BGl_z62sha1sumzd2portzb0zz__sha1z00(obj_t BgL_envz00_3199,
		obj_t BgL_ipz00_3200)
	{
		{	/* Unsafe/sha1.scm 303 */
			{	/* Unsafe/sha1.scm 306 */
				obj_t BgL_auxz00_3794;

				if (INPUT_PORTP(BgL_ipz00_3200))
					{	/* Unsafe/sha1.scm 306 */
						BgL_auxz00_3794 = BgL_ipz00_3200;
					}
				else
					{
						obj_t BgL_auxz00_3797;

						BgL_auxz00_3797 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2234z00zz__sha1z00,
							BINT(((long) 11985)), BGl_string2239z00zz__sha1z00,
							BGl_string2240z00zz__sha1z00, BgL_ipz00_3200);
						FAILURE(BgL_auxz00_3797, BFALSE, BFALSE);
					}
				return BGl_sha1sumzd2portzd2zz__sha1z00(BgL_auxz00_3794);
			}
		}

	}



/* sha1sum-file */
	BGL_EXPORTED_DEF obj_t BGl_sha1sumzd2filezd2zz__sha1z00(obj_t BgL_fnamez00_31)
	{
		{	/* Unsafe/sha1.scm 340 */
			{	/* Unsafe/sha1.scm 341 */
				obj_t BgL_mmz00_1572;

				BgL_mmz00_1572 =
					BGl_openzd2mmapzd2zz__mmapz00(BgL_fnamez00_31, BTRUE, BFALSE);
				{	/* Unsafe/sha1.scm 342 */
					bool_t BgL_test2305z00_3803;

					{	/* Unsafe/sha1.scm 342 */
						bool_t BgL_res2158z00_2892;

						BgL_res2158z00_2892 = BGL_MMAPP(BgL_mmz00_1572);
						BgL_test2305z00_3803 = BgL_res2158z00_2892;
					}
					if (BgL_test2305z00_3803)
						{	/* Unsafe/sha1.scm 343 */
							obj_t BgL_exitd1074z00_1574;

							BgL_exitd1074z00_1574 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Unsafe/sha1.scm 345 */
								obj_t BgL_zc3z04anonymousza31471ze3z87_3201;

								BgL_zc3z04anonymousza31471ze3z87_3201 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza31471ze3ze5zz__sha1z00,
									(int) (((long) 0)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_zc3z04anonymousza31471ze3z87_3201,
									(int) (((long) 0)), BgL_mmz00_1572);
								BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
									(BgL_exitd1074z00_1574,
									BgL_zc3z04anonymousza31471ze3z87_3201);
								{	/* Unsafe/sha1.scm 344 */
									obj_t BgL_tmp1076z00_1576;

									BgL_tmp1076z00_1576 =
										BGl_sha1sumzd2mmapzd2zz__sha1z00(BgL_mmz00_1572);
									BGl_exitdzd2popzd2protectz12z12zz__bexitz00
										(BgL_exitd1074z00_1574);
									bgl_close_mmap(BgL_mmz00_1572);
									return BgL_tmp1076z00_1576;
								}
							}
						}
					else
						{	/* Unsafe/sha1.scm 346 */
							obj_t BgL_pz00_1579;

							{	/* Ieee/port.scm 440 */

								BgL_pz00_1579 =
									BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
									(BgL_fnamez00_31, BTRUE, BINT(((long) 5000000)));
							}
							{	/* Unsafe/sha1.scm 347 */
								obj_t BgL_exitd1077z00_1580;

								BgL_exitd1077z00_1580 = BGL_EXITD_TOP_AS_OBJ();
								{	/* Unsafe/sha1.scm 349 */
									obj_t BgL_zc3z04anonymousza31472ze3z87_3202;

									BgL_zc3z04anonymousza31472ze3z87_3202 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31472ze3ze5zz__sha1z00,
										(int) (((long) 0)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31472ze3z87_3202,
										(int) (((long) 0)), BgL_pz00_1579);
									BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
										(BgL_exitd1077z00_1580,
										BgL_zc3z04anonymousza31472ze3z87_3202);
									{	/* Unsafe/sha1.scm 348 */
										obj_t BgL_tmp1079z00_1582;

										BgL_tmp1079z00_1582 =
											BGl_sha1sumzd2portzd2zz__sha1z00(BgL_pz00_1579);
										BGl_exitdzd2popzd2protectz12z12zz__bexitz00
											(BgL_exitd1077z00_1580);
										bgl_close_input_port(((obj_t) BgL_pz00_1579));
										return BgL_tmp1079z00_1582;
									}
								}
							}
						}
				}
			}
		}

	}



/* &sha1sum-file */
	obj_t BGl_z62sha1sumzd2filezb0zz__sha1z00(obj_t BgL_envz00_3203,
		obj_t BgL_fnamez00_3204)
	{
		{	/* Unsafe/sha1.scm 340 */
			{	/* Unsafe/sha1.scm 341 */
				obj_t BgL_auxz00_3828;

				if (STRINGP(BgL_fnamez00_3204))
					{	/* Unsafe/sha1.scm 341 */
						BgL_auxz00_3828 = BgL_fnamez00_3204;
					}
				else
					{
						obj_t BgL_auxz00_3831;

						BgL_auxz00_3831 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2234z00zz__sha1z00,
							BINT(((long) 13262)), BGl_string2241z00zz__sha1z00,
							BGl_string2236z00zz__sha1z00, BgL_fnamez00_3204);
						FAILURE(BgL_auxz00_3831, BFALSE, BFALSE);
					}
				return BGl_sha1sumzd2filezd2zz__sha1z00(BgL_auxz00_3828);
			}
		}

	}



/* &<@anonymous:1471> */
	obj_t BGl_z62zc3z04anonymousza31471ze3ze5zz__sha1z00(obj_t BgL_envz00_3205)
	{
		{	/* Unsafe/sha1.scm 343 */
			{	/* Unsafe/sha1.scm 345 */
				obj_t BgL_mmz00_3206;

				BgL_mmz00_3206 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3205, (int) (((long) 0))));
				return bgl_close_mmap(BgL_mmz00_3206);
			}
		}

	}



/* &<@anonymous:1472> */
	obj_t BGl_z62zc3z04anonymousza31472ze3ze5zz__sha1z00(obj_t BgL_envz00_3207)
	{
		{	/* Unsafe/sha1.scm 347 */
			{	/* Unsafe/sha1.scm 349 */
				obj_t BgL_pz00_3208;

				BgL_pz00_3208 = PROCEDURE_REF(BgL_envz00_3207, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_pz00_3208));
			}
		}

	}



/* sha1sum */
	BGL_EXPORTED_DEF obj_t BGl_sha1sumz00zz__sha1z00(obj_t BgL_objz00_32)
	{
		{	/* Unsafe/sha1.scm 354 */
			{	/* Unsafe/sha1.scm 356 */
				bool_t BgL_test2307z00_3844;

				{	/* Unsafe/sha1.scm 356 */
					bool_t BgL_res2159z00_2897;

					BgL_res2159z00_2897 = BGL_MMAPP(BgL_objz00_32);
					BgL_test2307z00_3844 = BgL_res2159z00_2897;
				}
				if (BgL_test2307z00_3844)
					{	/* Unsafe/sha1.scm 356 */
						return BGl_sha1sumzd2mmapzd2zz__sha1z00(BgL_objz00_32);
					}
				else
					{	/* Unsafe/sha1.scm 356 */
						if (STRINGP(BgL_objz00_32))
							{	/* Unsafe/sha1.scm 358 */
								return BGl_sha1sumzd2stringzd2zz__sha1z00(BgL_objz00_32);
							}
						else
							{	/* Unsafe/sha1.scm 358 */
								if (INPUT_PORTP(BgL_objz00_32))
									{	/* Unsafe/sha1.scm 360 */
										return BGl_sha1sumzd2portzd2zz__sha1z00(BgL_objz00_32);
									}
								else
									{	/* Unsafe/sha1.scm 360 */
										return
											BGl_errorz00zz__errorz00(BGl_string2242z00zz__sha1z00,
											BGl_string2243z00zz__sha1z00, BgL_objz00_32);
									}
							}
					}
			}
		}

	}



/* &sha1sum */
	obj_t BGl_z62sha1sumz62zz__sha1z00(obj_t BgL_envz00_3209,
		obj_t BgL_objz00_3210)
	{
		{	/* Unsafe/sha1.scm 354 */
			return BGl_sha1sumz00zz__sha1z00(BgL_objz00_3210);
		}

	}



/* hmac-sha1sum-string */
	BGL_EXPORTED_DEF obj_t BGl_hmaczd2sha1sumzd2stringz00zz__sha1z00(obj_t
		BgL_keyz00_33, obj_t BgL_messagez00_34)
	{
		{	/* Unsafe/sha1.scm 368 */
			return
				BGl_hmaczd2stringzd2zz__hmacz00(BgL_keyz00_33, BgL_messagez00_34,
				BGl_sha1sumzd2stringzd2envz00zz__sha1z00);
		}

	}



/* &hmac-sha1sum-string */
	obj_t BGl_z62hmaczd2sha1sumzd2stringz62zz__sha1z00(obj_t BgL_envz00_3211,
		obj_t BgL_keyz00_3212, obj_t BgL_messagez00_3213)
	{
		{	/* Unsafe/sha1.scm 368 */
			{	/* Unsafe/sha1.scm 369 */
				obj_t BgL_auxz00_3863;
				obj_t BgL_auxz00_3856;

				if (STRINGP(BgL_messagez00_3213))
					{	/* Unsafe/sha1.scm 369 */
						BgL_auxz00_3863 = BgL_messagez00_3213;
					}
				else
					{
						obj_t BgL_auxz00_3866;

						BgL_auxz00_3866 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2234z00zz__sha1z00,
							BINT(((long) 14229)), BGl_string2244z00zz__sha1z00,
							BGl_string2236z00zz__sha1z00, BgL_messagez00_3213);
						FAILURE(BgL_auxz00_3866, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_keyz00_3212))
					{	/* Unsafe/sha1.scm 369 */
						BgL_auxz00_3856 = BgL_keyz00_3212;
					}
				else
					{
						obj_t BgL_auxz00_3859;

						BgL_auxz00_3859 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2234z00zz__sha1z00,
							BINT(((long) 14229)), BGl_string2244z00zz__sha1z00,
							BGl_string2236z00zz__sha1z00, BgL_keyz00_3212);
						FAILURE(BgL_auxz00_3859, BFALSE, BFALSE);
					}
				return
					BGl_hmaczd2sha1sumzd2stringz00zz__sha1z00(BgL_auxz00_3856,
					BgL_auxz00_3863);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__sha1z00()
	{
		{	/* Unsafe/sha1.scm 17 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__sha1z00()
	{
		{	/* Unsafe/sha1.scm 17 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__sha1z00()
	{
		{	/* Unsafe/sha1.scm 17 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__sha1z00()
	{
		{	/* Unsafe/sha1.scm 17 */
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2245z00zz__sha1z00));
			return
				BGl_modulezd2initializa7ationz75zz__hmacz00(((long) 285132820),
				BSTRING_TO_STRING(BGl_string2245z00zz__sha1z00));
		}

	}

#ifdef __cplusplus
}
#endif
