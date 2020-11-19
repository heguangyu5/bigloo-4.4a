/*===========================================================================*/
/*   (Llib/weakhash.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/weakhash.scm -indent -o objs/obj_u/Llib/weakhash.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62weakzd2hashtablezd2containszf3z91zz__weakhashz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_weakzd2hashtablezd2clearz12z12zz__weakhashz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2addz12z12zz__weakhashz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2putz12z12zz__weakhashz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62weakzd2hashtablezd2forzd2eachzb0zz__weakhashz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62weakzd2hashtablezd2keyzd2listzb0zz__weakhashz00(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__weakhashz00 = BUNSPEC;
	static obj_t BGl_traversezd2bucketszd2zz__weakhashz00(obj_t, obj_t, long,
		obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62weakzd2hashtablezd2getz62zz__weakhashz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_weakzd2hashtablezd2updatez12z12zz__weakhashz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_removez00zz__weakhashz00 = BUNSPEC;
	extern obj_t weakptr_data(obj_t);
	static obj_t BGl_z62weakzd2hashtablezd2clearz12z70zz__weakhashz00(obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__weakhashz00();
	static obj_t BGl_keepgoingz00zz__weakhashz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__weakhashz00();
	extern obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__weakhashz00();
	extern obj_t BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(obj_t, long);
	static obj_t BGl_z62weakzd2hashtablezd2ze3listz81zz__weakhashz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_weakzd2hashtablezd2containszf3zf3zz__weakhashz00(obj_t, obj_t);
	extern obj_t make_vector(long, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31420ze3ze5zz__weakhashz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_weakzd2hashtablezd2ze3listze3zz__weakhashz00(obj_t);
	static obj_t BGl_z62weakzd2hashtablezd2mapz62zz__weakhashz00(obj_t, obj_t,
		obj_t);
	static bool_t BGl_traversezd2hashzd2zz__weakhashz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__weakhashz00();
	BGL_EXPORTED_DECL obj_t
		BGl_weakzd2hashtablezd2removez12z12zz__weakhashz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(obj_t);
	static obj_t BGl_z62weakzd2hashtablezd2updatez12z70zz__weakhashz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_removestopz00zz__weakhashz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31415ze3ze5zz__weakhashz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00(obj_t, obj_t);
	extern bool_t BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2getz00zz__weakhashz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31443ze3ze5zz__weakhashz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__weakhashz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern long BGl_hashtablezd2siza7ez75zz__hashz00(obj_t);
	extern bool_t BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31390ze3ze5zz__weakhashz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31463ze3ze5zz__weakhashz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62weakzd2hashtablezd2removez12z70zz__weakhashz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62weakzd2hashtablezd2ze3vectorz81zz__weakhashz00(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__weakhashz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__weakhashz00();
	extern obj_t make_weakptr(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31376ze3ze5zz__weakhashz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62weakzd2hashtablezd2expandz12z70zz__weakhashz00(obj_t,
		obj_t);
	static obj_t BGl_z62weakzd2hashtablezd2addz12z70zz__weakhashz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62weakzd2hashtablezd2filterz12z70zz__weakhashz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2mapz00zz__weakhashz00(obj_t,
		obj_t);
	static obj_t BGl_z62weakzd2hashtablezd2putz12z70zz__weakhashz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31369ze3ze5zz__weakhashz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31378ze3ze5zz__weakhashz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31395ze3ze5zz__weakhashz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31485ze3ze5zz__weakhashz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31494ze3ze5zz__weakhashz00(obj_t, obj_t,
		obj_t, obj_t);
	extern long BGl_getzd2hashnumberzd2zz__hashz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31399ze3ze5zz__weakhashz00(obj_t, obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2filterz12zd2envzc0zz__weakhashz00,
		BgL_bgl_za762weakza7d2hashta2298z00,
		BGl_z62weakzd2hashtablezd2filterz12z70zz__weakhashz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2ze3vectorzd2envz31zz__weakhashz00,
		BgL_bgl_za762weakza7d2hashta2299z00,
		BGl_z62weakzd2hashtablezd2ze3vectorz81zz__weakhashz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2279z00zz__weakhashz00,
		BgL_bgl_string2279za700za7za7_2300za7,
		"/tmp/4.4a/runtime/Llib/weakhash.scm", 35);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2mapzd2envzd2zz__weakhashz00,
		BgL_bgl_za762weakza7d2hashta2301z00,
		BGl_z62weakzd2hashtablezd2mapz62zz__weakhashz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2getzd2envzd2zz__weakhashz00,
		BgL_bgl_za762weakza7d2hashta2302z00,
		BGl_z62weakzd2hashtablezd2getz62zz__weakhashz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2280z00zz__weakhashz00,
		BgL_bgl_string2280za700za7za7_2303za7, "&weak-hashtable->vector", 23);
	      DEFINE_STRING(BGl_string2281z00zz__weakhashz00,
		BgL_bgl_string2281za700za7za7_2304za7, "struct", 6);
	      DEFINE_STRING(BGl_string2282z00zz__weakhashz00,
		BgL_bgl_string2282za700za7za7_2305za7, "&weak-hashtable->list", 21);
	      DEFINE_STRING(BGl_string2283z00zz__weakhashz00,
		BgL_bgl_string2283za700za7za7_2306za7, "&weak-hashtable-key-list", 24);
	      DEFINE_STRING(BGl_string2284z00zz__weakhashz00,
		BgL_bgl_string2284za700za7za7_2307za7, "&weak-hashtable-map", 19);
	      DEFINE_STRING(BGl_string2285z00zz__weakhashz00,
		BgL_bgl_string2285za700za7za7_2308za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2286z00zz__weakhashz00,
		BgL_bgl_string2286za700za7za7_2309za7, "&weak-hashtable-for-each", 24);
	      DEFINE_STRING(BGl_string2287z00zz__weakhashz00,
		BgL_bgl_string2287za700za7za7_2310za7, "&weak-hashtable-filter!", 23);
	      DEFINE_STRING(BGl_string2289z00zz__weakhashz00,
		BgL_bgl_string2289za700za7za7_2311za7, "&weak-hashtable-clear!", 22);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2expandz12zd2envzc0zz__weakhashz00,
		BgL_bgl_za762weakza7d2hashta2312z00,
		BGl_z62weakzd2hashtablezd2expandz12z70zz__weakhashz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2290z00zz__weakhashz00,
		BgL_bgl_string2290za700za7za7_2313za7, "&weak-hashtable-contains?", 25);
	      DEFINE_STRING(BGl_string2291z00zz__weakhashz00,
		BgL_bgl_string2291za700za7za7_2314za7, "&weak-hashtable-get", 19);
	      DEFINE_STRING(BGl_string2292z00zz__weakhashz00,
		BgL_bgl_string2292za700za7za7_2315za7, "&weak-hashtable-put!", 20);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2288z00zz__weakhashz00,
		BgL_bgl_za762za7c3za704anonymo2316za7,
		BGl_z62zc3z04anonymousza31399ze3ze5zz__weakhashz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2293z00zz__weakhashz00,
		BgL_bgl_string2293za700za7za7_2317za7, "&weak-hashtable-update!", 23);
	      DEFINE_STRING(BGl_string2294z00zz__weakhashz00,
		BgL_bgl_string2294za700za7za7_2318za7, "&weak-hashtable-add!", 20);
	      DEFINE_STRING(BGl_string2295z00zz__weakhashz00,
		BgL_bgl_string2295za700za7za7_2319za7, "&weak-hashtable-remove!", 23);
	      DEFINE_STRING(BGl_string2296z00zz__weakhashz00,
		BgL_bgl_string2296za700za7za7_2320za7, "&weak-hashtable-expand!", 23);
	      DEFINE_STRING(BGl_string2297z00zz__weakhashz00,
		BgL_bgl_string2297za700za7za7_2321za7, "__weakhash", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2ze3listzd2envz31zz__weakhashz00,
		BgL_bgl_za762weakza7d2hashta2322z00,
		BGl_z62weakzd2hashtablezd2ze3listz81zz__weakhashz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2updatez12zd2envzc0zz__weakhashz00,
		BgL_bgl_za762weakza7d2hashta2323z00,
		BGl_z62weakzd2hashtablezd2updatez12z70zz__weakhashz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2keyzd2listzd2envz00zz__weakhashz00,
		BgL_bgl_za762weakza7d2hashta2324z00,
		BGl_z62weakzd2hashtablezd2keyzd2listzb0zz__weakhashz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2clearz12zd2envzc0zz__weakhashz00,
		BgL_bgl_za762weakza7d2hashta2325z00,
		BGl_z62weakzd2hashtablezd2clearz12z70zz__weakhashz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2containszf3zd2envz21zz__weakhashz00,
		BgL_bgl_za762weakza7d2hashta2326z00,
		BGl_z62weakzd2hashtablezd2containszf3z91zz__weakhashz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2forzd2eachzd2envz00zz__weakhashz00,
		BgL_bgl_za762weakza7d2hashta2327z00,
		BGl_z62weakzd2hashtablezd2forzd2eachzb0zz__weakhashz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2addz12zd2envzc0zz__weakhashz00,
		BgL_bgl_za762weakza7d2hashta2328z00,
		BGl_z62weakzd2hashtablezd2addz12z70zz__weakhashz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2removez12zd2envzc0zz__weakhashz00,
		BgL_bgl_za762weakza7d2hashta2329z00,
		BGl_z62weakzd2hashtablezd2removez12z70zz__weakhashz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakzd2hashtablezd2putz12zd2envzc0zz__weakhashz00,
		BgL_bgl_za762weakza7d2hashta2330z00,
		BGl_z62weakzd2hashtablezd2putz12z70zz__weakhashz00, 0L, BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__weakhashz00));
		     ADD_ROOT((void *) (&BGl_removez00zz__weakhashz00));
		     ADD_ROOT((void *) (&BGl_keepgoingz00zz__weakhashz00));
		     ADD_ROOT((void *) (&BGl_removestopz00zz__weakhashz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__weakhashz00(long
		BgL_checksumz00_3763, char *BgL_fromz00_3764)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__weakhashz00))
				{
					BGl_requirezd2initializa7ationz75zz__weakhashz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__weakhashz00();
					BGl_importedzd2moduleszd2initz00zz__weakhashz00();
					return BGl_toplevelzd2initzd2zz__weakhashz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__weakhashz00()
	{
		{	/* Llib/weakhash.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__weakhashz00()
	{
		{	/* Llib/weakhash.scm 18 */
			BGl_keepgoingz00zz__weakhashz00 = MAKE_YOUNG_PAIR(BUNSPEC, BUNSPEC);
			BGl_removez00zz__weakhashz00 = MAKE_YOUNG_PAIR(BUNSPEC, BUNSPEC);
			return (BGl_removestopz00zz__weakhashz00 =
				MAKE_YOUNG_PAIR(BUNSPEC, BUNSPEC), BUNSPEC);
		}

	}



/* traverse-buckets */
	obj_t BGl_traversezd2bucketszd2zz__weakhashz00(obj_t BgL_tablez00_47,
		obj_t BgL_bucketsz00_48, long BgL_iz00_49, obj_t BgL_funz00_50)
	{
		{	/* Llib/weakhash.scm 134 */
			if (
				(((long) 1) ==
					(long) CINT(STRUCT_REF(BgL_tablez00_47, (int) (((long) 5))))))
				{	/* Llib/weakhash.scm 135 */
					obj_t BgL_g1057z00_1189;

					BgL_g1057z00_1189 =
						VECTOR_REF(((obj_t) BgL_bucketsz00_48), BgL_iz00_49);
					{
						obj_t BgL_bucketz00_1191;
						obj_t BgL_lastzd2bucketzd2_1192;

						BgL_bucketz00_1191 = BgL_g1057z00_1189;
						BgL_lastzd2bucketzd2_1192 = BFALSE;
					BgL_zc3z04anonymousza31248ze3z87_1193:
						if (NULLP(BgL_bucketz00_1191))
							{	/* Llib/weakhash.scm 135 */
								return BGl_keepgoingz00zz__weakhashz00;
							}
						else
							{	/* Llib/weakhash.scm 135 */
								obj_t BgL_retz00_1195;

								{	/* Llib/weakhash.scm 143 */
									obj_t BgL_keyz00_1201;

									{	/* Llib/weakhash.scm 143 */
										obj_t BgL_arg1263z00_1204;

										{	/* Llib/weakhash.scm 143 */
											obj_t BgL_pairz00_2215;

											BgL_pairz00_2215 = CAR(((obj_t) BgL_bucketz00_1191));
											BgL_arg1263z00_1204 = CAR(BgL_pairz00_2215);
										}
										BgL_keyz00_1201 =
											weakptr_data(((obj_t) BgL_arg1263z00_1204));
									}
									if ((BgL_keyz00_1201 == BUNSPEC))
										{	/* Llib/weakhash.scm 144 */
											BgL_retz00_1195 = BGl_removez00zz__weakhashz00;
										}
									else
										{	/* Llib/weakhash.scm 146 */
											obj_t BgL_arg1258z00_1203;

											{	/* Llib/weakhash.scm 146 */
												obj_t BgL_pairz00_2220;

												BgL_pairz00_2220 = CAR(((obj_t) BgL_bucketz00_1191));
												BgL_arg1258z00_1203 = CDR(BgL_pairz00_2220);
											}
											BgL_retz00_1195 =
												PROCEDURE_L_ENTRY(BgL_funz00_50) (BgL_funz00_50,
												BgL_keyz00_1201, BgL_arg1258z00_1203,
												BgL_bucketz00_1191);
										}
								}
								if ((BgL_retz00_1195 == BGl_keepgoingz00zz__weakhashz00))
									{	/* Llib/weakhash.scm 135 */
										obj_t BgL_arg1252z00_1197;

										BgL_arg1252z00_1197 = CDR(((obj_t) BgL_bucketz00_1191));
										{
											obj_t BgL_lastzd2bucketzd2_3805;
											obj_t BgL_bucketz00_3804;

											BgL_bucketz00_3804 = BgL_arg1252z00_1197;
											BgL_lastzd2bucketzd2_3805 = BgL_bucketz00_1191;
											BgL_lastzd2bucketzd2_1192 = BgL_lastzd2bucketzd2_3805;
											BgL_bucketz00_1191 = BgL_bucketz00_3804;
											goto BgL_zc3z04anonymousza31248ze3z87_1193;
										}
									}
								else
									{	/* Llib/weakhash.scm 135 */
										if ((BgL_retz00_1195 == BGl_removez00zz__weakhashz00))
											{	/* Llib/weakhash.scm 135 */
												{	/* Llib/weakhash.scm 124 */
													long BgL_arg1239z00_2222;

													BgL_arg1239z00_2222 =
														(
														(long) CINT(STRUCT_REF(BgL_tablez00_47,
																(int) (((long) 0)))) - ((long) 1));
													{	/* Llib/weakhash.scm 124 */
														obj_t BgL_auxz00_3814;
														int BgL_tmpz00_3812;

														BgL_auxz00_3814 = BINT(BgL_arg1239z00_2222);
														BgL_tmpz00_3812 = (int) (((long) 0));
														STRUCT_SET(BgL_tablez00_47, BgL_tmpz00_3812,
															BgL_auxz00_3814);
												}}
												if (CBOOL(BgL_lastzd2bucketzd2_1192))
													{	/* Llib/weakhash.scm 126 */
														obj_t BgL_arg1243z00_2224;

														BgL_arg1243z00_2224 =
															CDR(((obj_t) BgL_bucketz00_1191));
														{	/* Llib/weakhash.scm 126 */
															obj_t BgL_tmpz00_3821;

															BgL_tmpz00_3821 =
																((obj_t) BgL_lastzd2bucketzd2_1192);
															SET_CDR(BgL_tmpz00_3821, BgL_arg1243z00_2224);
														}
													}
												else
													{	/* Llib/weakhash.scm 127 */
														obj_t BgL_arg1245z00_2225;

														BgL_arg1245z00_2225 =
															CDR(((obj_t) BgL_bucketz00_1191));
														VECTOR_SET(
															((obj_t) BgL_bucketsz00_48), BgL_iz00_49,
															BgL_arg1245z00_2225);
													}
												BGl_keepgoingz00zz__weakhashz00;
												{	/* Llib/weakhash.scm 135 */
													obj_t BgL_arg1254z00_1199;

													BgL_arg1254z00_1199 =
														CDR(((obj_t) BgL_bucketz00_1191));
													{
														obj_t BgL_bucketz00_3830;

														BgL_bucketz00_3830 = BgL_arg1254z00_1199;
														BgL_bucketz00_1191 = BgL_bucketz00_3830;
														goto BgL_zc3z04anonymousza31248ze3z87_1193;
													}
												}
											}
										else
											{	/* Llib/weakhash.scm 135 */
												if (
													(BgL_retz00_1195 == BGl_removestopz00zz__weakhashz00))
													{	/* Llib/weakhash.scm 135 */
														{	/* Llib/weakhash.scm 124 */
															long BgL_arg1239z00_2236;

															BgL_arg1239z00_2236 =
																(
																(long) CINT(STRUCT_REF(BgL_tablez00_47,
																		(int) (((long) 0)))) - ((long) 1));
															{	/* Llib/weakhash.scm 124 */
																obj_t BgL_auxz00_3839;
																int BgL_tmpz00_3837;

																BgL_auxz00_3839 = BINT(BgL_arg1239z00_2236);
																BgL_tmpz00_3837 = (int) (((long) 0));
																STRUCT_SET(BgL_tablez00_47, BgL_tmpz00_3837,
																	BgL_auxz00_3839);
														}}
														if (CBOOL(BgL_lastzd2bucketzd2_1192))
															{	/* Llib/weakhash.scm 126 */
																obj_t BgL_arg1243z00_2238;

																BgL_arg1243z00_2238 =
																	CDR(((obj_t) BgL_bucketz00_1191));
																{	/* Llib/weakhash.scm 126 */
																	obj_t BgL_tmpz00_3846;

																	BgL_tmpz00_3846 =
																		((obj_t) BgL_lastzd2bucketzd2_1192);
																	SET_CDR(BgL_tmpz00_3846, BgL_arg1243z00_2238);
																}
															}
														else
															{	/* Llib/weakhash.scm 127 */
																obj_t BgL_arg1245z00_2239;

																BgL_arg1245z00_2239 =
																	CDR(((obj_t) BgL_bucketz00_1191));
																VECTOR_SET(
																	((obj_t) BgL_bucketsz00_48), BgL_iz00_49,
																	BgL_arg1245z00_2239);
															}
														return BGl_keepgoingz00zz__weakhashz00;
													}
												else
													{	/* Llib/weakhash.scm 135 */
														return BgL_retz00_1195;
													}
											}
									}
							}
					}
				}
			else
				{	/* Llib/weakhash.scm 135 */
					if (
						(((long) 2) ==
							(long) CINT(STRUCT_REF(BgL_tablez00_47, (int) (((long) 5))))))
						{	/* Llib/weakhash.scm 135 */
							obj_t BgL_g1058z00_1208;

							BgL_g1058z00_1208 =
								VECTOR_REF(((obj_t) BgL_bucketsz00_48), BgL_iz00_49);
							{
								obj_t BgL_bucketz00_1210;
								obj_t BgL_lastzd2bucketzd2_1211;

								BgL_bucketz00_1210 = BgL_g1058z00_1208;
								BgL_lastzd2bucketzd2_1211 = BFALSE;
							BgL_zc3z04anonymousza31270ze3z87_1212:
								if (NULLP(BgL_bucketz00_1210))
									{	/* Llib/weakhash.scm 135 */
										return BGl_keepgoingz00zz__weakhashz00;
									}
								else
									{	/* Llib/weakhash.scm 135 */
										obj_t BgL_retz00_1214;

										{	/* Llib/weakhash.scm 149 */
											obj_t BgL_dataz00_1220;

											{	/* Llib/weakhash.scm 149 */
												obj_t BgL_arg1281z00_1223;

												{	/* Llib/weakhash.scm 149 */
													obj_t BgL_pairz00_2258;

													BgL_pairz00_2258 = CAR(((obj_t) BgL_bucketz00_1210));
													BgL_arg1281z00_1223 = CDR(BgL_pairz00_2258);
												}
												BgL_dataz00_1220 =
													weakptr_data(((obj_t) BgL_arg1281z00_1223));
											}
											if ((BgL_dataz00_1220 == BUNSPEC))
												{	/* Llib/weakhash.scm 150 */
													BgL_retz00_1214 = BGl_removez00zz__weakhashz00;
												}
											else
												{	/* Llib/weakhash.scm 152 */
													obj_t BgL_arg1280z00_1222;

													{	/* Llib/weakhash.scm 152 */
														obj_t BgL_pairz00_2263;

														BgL_pairz00_2263 =
															CAR(((obj_t) BgL_bucketz00_1210));
														BgL_arg1280z00_1222 = CAR(BgL_pairz00_2263);
													}
													BgL_retz00_1214 =
														PROCEDURE_L_ENTRY(BgL_funz00_50) (BgL_funz00_50,
														BgL_arg1280z00_1222, BgL_dataz00_1220,
														BgL_bucketz00_1210);
												}
										}
										if ((BgL_retz00_1214 == BGl_keepgoingz00zz__weakhashz00))
											{	/* Llib/weakhash.scm 135 */
												obj_t BgL_arg1273z00_1216;

												BgL_arg1273z00_1216 = CDR(((obj_t) BgL_bucketz00_1210));
												{
													obj_t BgL_lastzd2bucketzd2_3883;
													obj_t BgL_bucketz00_3882;

													BgL_bucketz00_3882 = BgL_arg1273z00_1216;
													BgL_lastzd2bucketzd2_3883 = BgL_bucketz00_1210;
													BgL_lastzd2bucketzd2_1211 = BgL_lastzd2bucketzd2_3883;
													BgL_bucketz00_1210 = BgL_bucketz00_3882;
													goto BgL_zc3z04anonymousza31270ze3z87_1212;
												}
											}
										else
											{	/* Llib/weakhash.scm 135 */
												if ((BgL_retz00_1214 == BGl_removez00zz__weakhashz00))
													{	/* Llib/weakhash.scm 135 */
														{	/* Llib/weakhash.scm 124 */
															long BgL_arg1239z00_2265;

															BgL_arg1239z00_2265 =
																(
																(long) CINT(STRUCT_REF(BgL_tablez00_47,
																		(int) (((long) 0)))) - ((long) 1));
															{	/* Llib/weakhash.scm 124 */
																obj_t BgL_auxz00_3892;
																int BgL_tmpz00_3890;

																BgL_auxz00_3892 = BINT(BgL_arg1239z00_2265);
																BgL_tmpz00_3890 = (int) (((long) 0));
																STRUCT_SET(BgL_tablez00_47, BgL_tmpz00_3890,
																	BgL_auxz00_3892);
														}}
														if (CBOOL(BgL_lastzd2bucketzd2_1211))
															{	/* Llib/weakhash.scm 126 */
																obj_t BgL_arg1243z00_2267;

																BgL_arg1243z00_2267 =
																	CDR(((obj_t) BgL_bucketz00_1210));
																{	/* Llib/weakhash.scm 126 */
																	obj_t BgL_tmpz00_3899;

																	BgL_tmpz00_3899 =
																		((obj_t) BgL_lastzd2bucketzd2_1211);
																	SET_CDR(BgL_tmpz00_3899, BgL_arg1243z00_2267);
																}
															}
														else
															{	/* Llib/weakhash.scm 127 */
																obj_t BgL_arg1245z00_2268;

																BgL_arg1245z00_2268 =
																	CDR(((obj_t) BgL_bucketz00_1210));
																VECTOR_SET(
																	((obj_t) BgL_bucketsz00_48), BgL_iz00_49,
																	BgL_arg1245z00_2268);
															}
														BGl_keepgoingz00zz__weakhashz00;
														{	/* Llib/weakhash.scm 135 */
															obj_t BgL_arg1275z00_1218;

															BgL_arg1275z00_1218 =
																CDR(((obj_t) BgL_bucketz00_1210));
															{
																obj_t BgL_bucketz00_3908;

																BgL_bucketz00_3908 = BgL_arg1275z00_1218;
																BgL_bucketz00_1210 = BgL_bucketz00_3908;
																goto BgL_zc3z04anonymousza31270ze3z87_1212;
															}
														}
													}
												else
													{	/* Llib/weakhash.scm 135 */
														if (
															(BgL_retz00_1214 ==
																BGl_removestopz00zz__weakhashz00))
															{	/* Llib/weakhash.scm 135 */
																{	/* Llib/weakhash.scm 124 */
																	long BgL_arg1239z00_2279;

																	BgL_arg1239z00_2279 =
																		(
																		(long) CINT(STRUCT_REF(BgL_tablez00_47,
																				(int) (((long) 0)))) - ((long) 1));
																	{	/* Llib/weakhash.scm 124 */
																		obj_t BgL_auxz00_3917;
																		int BgL_tmpz00_3915;

																		BgL_auxz00_3917 = BINT(BgL_arg1239z00_2279);
																		BgL_tmpz00_3915 = (int) (((long) 0));
																		STRUCT_SET(BgL_tablez00_47, BgL_tmpz00_3915,
																			BgL_auxz00_3917);
																}}
																if (CBOOL(BgL_lastzd2bucketzd2_1211))
																	{	/* Llib/weakhash.scm 126 */
																		obj_t BgL_arg1243z00_2281;

																		BgL_arg1243z00_2281 =
																			CDR(((obj_t) BgL_bucketz00_1210));
																		{	/* Llib/weakhash.scm 126 */
																			obj_t BgL_tmpz00_3924;

																			BgL_tmpz00_3924 =
																				((obj_t) BgL_lastzd2bucketzd2_1211);
																			SET_CDR(BgL_tmpz00_3924,
																				BgL_arg1243z00_2281);
																		}
																	}
																else
																	{	/* Llib/weakhash.scm 127 */
																		obj_t BgL_arg1245z00_2282;

																		BgL_arg1245z00_2282 =
																			CDR(((obj_t) BgL_bucketz00_1210));
																		VECTOR_SET(
																			((obj_t) BgL_bucketsz00_48), BgL_iz00_49,
																			BgL_arg1245z00_2282);
																	}
																return BGl_keepgoingz00zz__weakhashz00;
															}
														else
															{	/* Llib/weakhash.scm 135 */
																return BgL_retz00_1214;
															}
													}
											}
									}
							}
						}
					else
						{	/* Llib/weakhash.scm 135 */
							if (
								(((long) 3) ==
									(long) CINT(STRUCT_REF(BgL_tablez00_47, (int) (((long) 5))))))
								{	/* Llib/weakhash.scm 135 */
									obj_t BgL_g1059z00_1227;

									BgL_g1059z00_1227 =
										VECTOR_REF(((obj_t) BgL_bucketsz00_48), BgL_iz00_49);
									{
										obj_t BgL_bucketz00_1229;
										obj_t BgL_lastzd2bucketzd2_1230;

										BgL_bucketz00_1229 = BgL_g1059z00_1227;
										BgL_lastzd2bucketzd2_1230 = BFALSE;
									BgL_zc3z04anonymousza31284ze3z87_1231:
										if (NULLP(BgL_bucketz00_1229))
											{	/* Llib/weakhash.scm 135 */
												return BGl_keepgoingz00zz__weakhashz00;
											}
										else
											{	/* Llib/weakhash.scm 135 */
												obj_t BgL_retz00_1233;

												{	/* Llib/weakhash.scm 155 */
													obj_t BgL_keyz00_1239;
													obj_t BgL_dataz00_1240;

													{	/* Llib/weakhash.scm 155 */
														obj_t BgL_arg1295z00_1244;

														{	/* Llib/weakhash.scm 155 */
															obj_t BgL_pairz00_2301;

															BgL_pairz00_2301 =
																CAR(((obj_t) BgL_bucketz00_1229));
															BgL_arg1295z00_1244 = CAR(BgL_pairz00_2301);
														}
														BgL_keyz00_1239 =
															weakptr_data(((obj_t) BgL_arg1295z00_1244));
													}
													{	/* Llib/weakhash.scm 156 */
														obj_t BgL_arg1296z00_1245;

														{	/* Llib/weakhash.scm 156 */
															obj_t BgL_pairz00_2306;

															BgL_pairz00_2306 =
																CAR(((obj_t) BgL_bucketz00_1229));
															BgL_arg1296z00_1245 = CDR(BgL_pairz00_2306);
														}
														BgL_dataz00_1240 =
															weakptr_data(((obj_t) BgL_arg1296z00_1245));
													}
													{	/* Llib/weakhash.scm 157 */
														bool_t BgL_test2350z00_3950;

														if ((BgL_keyz00_1239 == BUNSPEC))
															{	/* Llib/weakhash.scm 157 */
																BgL_test2350z00_3950 = ((bool_t) 1);
															}
														else
															{	/* Llib/weakhash.scm 157 */
																BgL_test2350z00_3950 =
																	(BgL_dataz00_1240 == BUNSPEC);
															}
														if (BgL_test2350z00_3950)
															{	/* Llib/weakhash.scm 157 */
																BgL_retz00_1233 = BGl_removez00zz__weakhashz00;
															}
														else
															{	/* Llib/weakhash.scm 157 */
																BgL_retz00_1233 =
																	PROCEDURE_L_ENTRY(BgL_funz00_50)
																	(BgL_funz00_50, BgL_keyz00_1239,
																	BgL_dataz00_1240, BgL_bucketz00_1229);
															}
													}
												}
												if (
													(BgL_retz00_1233 == BGl_keepgoingz00zz__weakhashz00))
													{	/* Llib/weakhash.scm 135 */
														obj_t BgL_arg1287z00_1235;

														BgL_arg1287z00_1235 =
															CDR(((obj_t) BgL_bucketz00_1229));
														{
															obj_t BgL_lastzd2bucketzd2_3965;
															obj_t BgL_bucketz00_3964;

															BgL_bucketz00_3964 = BgL_arg1287z00_1235;
															BgL_lastzd2bucketzd2_3965 = BgL_bucketz00_1229;
															BgL_lastzd2bucketzd2_1230 =
																BgL_lastzd2bucketzd2_3965;
															BgL_bucketz00_1229 = BgL_bucketz00_3964;
															goto BgL_zc3z04anonymousza31284ze3z87_1231;
														}
													}
												else
													{	/* Llib/weakhash.scm 135 */
														if (
															(BgL_retz00_1233 == BGl_removez00zz__weakhashz00))
															{	/* Llib/weakhash.scm 135 */
																{	/* Llib/weakhash.scm 124 */
																	long BgL_arg1239z00_2309;

																	BgL_arg1239z00_2309 =
																		(
																		(long) CINT(STRUCT_REF(BgL_tablez00_47,
																				(int) (((long) 0)))) - ((long) 1));
																	{	/* Llib/weakhash.scm 124 */
																		obj_t BgL_auxz00_3974;
																		int BgL_tmpz00_3972;

																		BgL_auxz00_3974 = BINT(BgL_arg1239z00_2309);
																		BgL_tmpz00_3972 = (int) (((long) 0));
																		STRUCT_SET(BgL_tablez00_47, BgL_tmpz00_3972,
																			BgL_auxz00_3974);
																}}
																if (CBOOL(BgL_lastzd2bucketzd2_1230))
																	{	/* Llib/weakhash.scm 126 */
																		obj_t BgL_arg1243z00_2311;

																		BgL_arg1243z00_2311 =
																			CDR(((obj_t) BgL_bucketz00_1229));
																		{	/* Llib/weakhash.scm 126 */
																			obj_t BgL_tmpz00_3981;

																			BgL_tmpz00_3981 =
																				((obj_t) BgL_lastzd2bucketzd2_1230);
																			SET_CDR(BgL_tmpz00_3981,
																				BgL_arg1243z00_2311);
																		}
																	}
																else
																	{	/* Llib/weakhash.scm 127 */
																		obj_t BgL_arg1245z00_2312;

																		BgL_arg1245z00_2312 =
																			CDR(((obj_t) BgL_bucketz00_1229));
																		VECTOR_SET(
																			((obj_t) BgL_bucketsz00_48), BgL_iz00_49,
																			BgL_arg1245z00_2312);
																	}
																BGl_keepgoingz00zz__weakhashz00;
																{	/* Llib/weakhash.scm 135 */
																	obj_t BgL_arg1289z00_1237;

																	BgL_arg1289z00_1237 =
																		CDR(((obj_t) BgL_bucketz00_1229));
																	{
																		obj_t BgL_bucketz00_3990;

																		BgL_bucketz00_3990 = BgL_arg1289z00_1237;
																		BgL_bucketz00_1229 = BgL_bucketz00_3990;
																		goto BgL_zc3z04anonymousza31284ze3z87_1231;
																	}
																}
															}
														else
															{	/* Llib/weakhash.scm 135 */
																if (
																	(BgL_retz00_1233 ==
																		BGl_removestopz00zz__weakhashz00))
																	{	/* Llib/weakhash.scm 135 */
																		{	/* Llib/weakhash.scm 124 */
																			long BgL_arg1239z00_2323;

																			BgL_arg1239z00_2323 =
																				(
																				(long) CINT(STRUCT_REF(BgL_tablez00_47,
																						(int) (((long) 0)))) - ((long) 1));
																			{	/* Llib/weakhash.scm 124 */
																				obj_t BgL_auxz00_3999;
																				int BgL_tmpz00_3997;

																				BgL_auxz00_3999 =
																					BINT(BgL_arg1239z00_2323);
																				BgL_tmpz00_3997 = (int) (((long) 0));
																				STRUCT_SET(BgL_tablez00_47,
																					BgL_tmpz00_3997, BgL_auxz00_3999);
																		}}
																		if (CBOOL(BgL_lastzd2bucketzd2_1230))
																			{	/* Llib/weakhash.scm 126 */
																				obj_t BgL_arg1243z00_2325;

																				BgL_arg1243z00_2325 =
																					CDR(((obj_t) BgL_bucketz00_1229));
																				{	/* Llib/weakhash.scm 126 */
																					obj_t BgL_tmpz00_4006;

																					BgL_tmpz00_4006 =
																						((obj_t) BgL_lastzd2bucketzd2_1230);
																					SET_CDR(BgL_tmpz00_4006,
																						BgL_arg1243z00_2325);
																				}
																			}
																		else
																			{	/* Llib/weakhash.scm 127 */
																				obj_t BgL_arg1245z00_2326;

																				BgL_arg1245z00_2326 =
																					CDR(((obj_t) BgL_bucketz00_1229));
																				VECTOR_SET(
																					((obj_t) BgL_bucketsz00_48),
																					BgL_iz00_49, BgL_arg1245z00_2326);
																			}
																		return BGl_keepgoingz00zz__weakhashz00;
																	}
																else
																	{	/* Llib/weakhash.scm 135 */
																		return BgL_retz00_1233;
																	}
															}
													}
											}
									}
								}
							else
								{	/* Llib/weakhash.scm 135 */
									obj_t BgL_g1060z00_1247;

									BgL_g1060z00_1247 =
										VECTOR_REF(((obj_t) BgL_bucketsz00_48), BgL_iz00_49);
									{
										obj_t BgL_bucketz00_1249;
										obj_t BgL_lastzd2bucketzd2_1250;

										BgL_bucketz00_1249 = BgL_g1060z00_1247;
										BgL_lastzd2bucketzd2_1250 = BFALSE;
									BgL_zc3z04anonymousza31297ze3z87_1251:
										if (NULLP(BgL_bucketz00_1249))
											{	/* Llib/weakhash.scm 135 */
												return BGl_keepgoingz00zz__weakhashz00;
											}
										else
											{	/* Llib/weakhash.scm 135 */
												obj_t BgL_retz00_1253;

												{	/* Llib/weakhash.scm 163 */
													obj_t BgL_arg1304z00_1259;
													obj_t BgL_arg1306z00_1260;

													{	/* Llib/weakhash.scm 163 */
														obj_t BgL_pairz00_2342;

														BgL_pairz00_2342 =
															CAR(((obj_t) BgL_bucketz00_1249));
														BgL_arg1304z00_1259 = CAR(BgL_pairz00_2342);
													}
													{	/* Llib/weakhash.scm 163 */
														obj_t BgL_pairz00_2346;

														BgL_pairz00_2346 =
															CAR(((obj_t) BgL_bucketz00_1249));
														BgL_arg1306z00_1260 = CDR(BgL_pairz00_2346);
													}
													BgL_retz00_1253 =
														PROCEDURE_L_ENTRY(BgL_funz00_50) (BgL_funz00_50,
														BgL_arg1304z00_1259, BgL_arg1306z00_1260,
														BgL_bucketz00_1249);
												}
												if (
													(BgL_retz00_1253 == BGl_keepgoingz00zz__weakhashz00))
													{	/* Llib/weakhash.scm 135 */
														obj_t BgL_arg1300z00_1255;

														BgL_arg1300z00_1255 =
															CDR(((obj_t) BgL_bucketz00_1249));
														{
															obj_t BgL_lastzd2bucketzd2_4034;
															obj_t BgL_bucketz00_4033;

															BgL_bucketz00_4033 = BgL_arg1300z00_1255;
															BgL_lastzd2bucketzd2_4034 = BgL_bucketz00_1249;
															BgL_lastzd2bucketzd2_1250 =
																BgL_lastzd2bucketzd2_4034;
															BgL_bucketz00_1249 = BgL_bucketz00_4033;
															goto BgL_zc3z04anonymousza31297ze3z87_1251;
														}
													}
												else
													{	/* Llib/weakhash.scm 135 */
														if (
															(BgL_retz00_1253 == BGl_removez00zz__weakhashz00))
															{	/* Llib/weakhash.scm 135 */
																{	/* Llib/weakhash.scm 124 */
																	long BgL_arg1239z00_2348;

																	BgL_arg1239z00_2348 =
																		(
																		(long) CINT(STRUCT_REF(BgL_tablez00_47,
																				(int) (((long) 0)))) - ((long) 1));
																	{	/* Llib/weakhash.scm 124 */
																		obj_t BgL_auxz00_4043;
																		int BgL_tmpz00_4041;

																		BgL_auxz00_4043 = BINT(BgL_arg1239z00_2348);
																		BgL_tmpz00_4041 = (int) (((long) 0));
																		STRUCT_SET(BgL_tablez00_47, BgL_tmpz00_4041,
																			BgL_auxz00_4043);
																}}
																if (CBOOL(BgL_lastzd2bucketzd2_1250))
																	{	/* Llib/weakhash.scm 126 */
																		obj_t BgL_arg1243z00_2350;

																		BgL_arg1243z00_2350 =
																			CDR(((obj_t) BgL_bucketz00_1249));
																		{	/* Llib/weakhash.scm 126 */
																			obj_t BgL_tmpz00_4050;

																			BgL_tmpz00_4050 =
																				((obj_t) BgL_lastzd2bucketzd2_1250);
																			SET_CDR(BgL_tmpz00_4050,
																				BgL_arg1243z00_2350);
																		}
																	}
																else
																	{	/* Llib/weakhash.scm 127 */
																		obj_t BgL_arg1245z00_2351;

																		BgL_arg1245z00_2351 =
																			CDR(((obj_t) BgL_bucketz00_1249));
																		VECTOR_SET(
																			((obj_t) BgL_bucketsz00_48), BgL_iz00_49,
																			BgL_arg1245z00_2351);
																	}
																BGl_keepgoingz00zz__weakhashz00;
																{	/* Llib/weakhash.scm 135 */
																	obj_t BgL_arg1302z00_1257;

																	BgL_arg1302z00_1257 =
																		CDR(((obj_t) BgL_bucketz00_1249));
																	{
																		obj_t BgL_bucketz00_4059;

																		BgL_bucketz00_4059 = BgL_arg1302z00_1257;
																		BgL_bucketz00_1249 = BgL_bucketz00_4059;
																		goto BgL_zc3z04anonymousza31297ze3z87_1251;
																	}
																}
															}
														else
															{	/* Llib/weakhash.scm 135 */
																if (
																	(BgL_retz00_1253 ==
																		BGl_removestopz00zz__weakhashz00))
																	{	/* Llib/weakhash.scm 135 */
																		{	/* Llib/weakhash.scm 124 */
																			long BgL_arg1239z00_2362;

																			BgL_arg1239z00_2362 =
																				(
																				(long) CINT(STRUCT_REF(BgL_tablez00_47,
																						(int) (((long) 0)))) - ((long) 1));
																			{	/* Llib/weakhash.scm 124 */
																				obj_t BgL_auxz00_4068;
																				int BgL_tmpz00_4066;

																				BgL_auxz00_4068 =
																					BINT(BgL_arg1239z00_2362);
																				BgL_tmpz00_4066 = (int) (((long) 0));
																				STRUCT_SET(BgL_tablez00_47,
																					BgL_tmpz00_4066, BgL_auxz00_4068);
																		}}
																		if (CBOOL(BgL_lastzd2bucketzd2_1250))
																			{	/* Llib/weakhash.scm 126 */
																				obj_t BgL_arg1243z00_2364;

																				BgL_arg1243z00_2364 =
																					CDR(((obj_t) BgL_bucketz00_1249));
																				{	/* Llib/weakhash.scm 126 */
																					obj_t BgL_tmpz00_4075;

																					BgL_tmpz00_4075 =
																						((obj_t) BgL_lastzd2bucketzd2_1250);
																					SET_CDR(BgL_tmpz00_4075,
																						BgL_arg1243z00_2364);
																				}
																			}
																		else
																			{	/* Llib/weakhash.scm 127 */
																				obj_t BgL_arg1245z00_2365;

																				BgL_arg1245z00_2365 =
																					CDR(((obj_t) BgL_bucketz00_1249));
																				VECTOR_SET(
																					((obj_t) BgL_bucketsz00_48),
																					BgL_iz00_49, BgL_arg1245z00_2365);
																			}
																		return BGl_keepgoingz00zz__weakhashz00;
																	}
																else
																	{	/* Llib/weakhash.scm 135 */
																		return BgL_retz00_1253;
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



/* traverse-hash */
	bool_t BGl_traversezd2hashzd2zz__weakhashz00(obj_t BgL_tablez00_51,
		obj_t BgL_funz00_52)
	{
		{	/* Llib/weakhash.scm 176 */
			if (
				(((long) 1) ==
					(long) CINT(STRUCT_REF(BgL_tablez00_51, (int) (((long) 5))))))
				{	/* Llib/weakhash.scm 177 */
					obj_t BgL_bucketsz00_1267;

					BgL_bucketsz00_1267 = STRUCT_REF(BgL_tablez00_51, (int) (((long) 2)));
					{	/* Llib/weakhash.scm 177 */

						{
							long BgL_iz00_1270;

							BgL_iz00_1270 = ((long) 0);
						BgL_zc3z04anonymousza31312ze3z87_1271:
							if (
								(BgL_iz00_1270 == VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1267))))
								{	/* Llib/weakhash.scm 177 */
									return ((bool_t) 0);
								}
							else
								{	/* Llib/weakhash.scm 177 */
									{	/* Llib/weakhash.scm 177 */
										obj_t BgL_g1061z00_1273;

										BgL_g1061z00_1273 =
											VECTOR_REF(((obj_t) BgL_bucketsz00_1267), BgL_iz00_1270);
										{
											obj_t BgL_bucketz00_1275;
											obj_t BgL_lastzd2bucketzd2_1276;

											BgL_bucketz00_1275 = BgL_g1061z00_1273;
											BgL_lastzd2bucketzd2_1276 = BFALSE;
										BgL_zc3z04anonymousza31314ze3z87_1277:
											if (NULLP(BgL_bucketz00_1275))
												{	/* Llib/weakhash.scm 177 */
													((bool_t) 0);
												}
											else
												{	/* Llib/weakhash.scm 188 */
													obj_t BgL_retz00_1279;

													{	/* Llib/weakhash.scm 188 */
														obj_t BgL_keyz00_1283;

														{	/* Llib/weakhash.scm 188 */
															obj_t BgL_arg1324z00_1286;

															{	/* Llib/weakhash.scm 188 */
																obj_t BgL_pairz00_2389;

																BgL_pairz00_2389 =
																	CAR(((obj_t) BgL_bucketz00_1275));
																BgL_arg1324z00_1286 = CAR(BgL_pairz00_2389);
															}
															BgL_keyz00_1283 =
																weakptr_data(((obj_t) BgL_arg1324z00_1286));
														}
														if ((BgL_keyz00_1283 == BUNSPEC))
															{	/* Llib/weakhash.scm 189 */
																BgL_retz00_1279 = BGl_removez00zz__weakhashz00;
															}
														else
															{	/* Llib/weakhash.scm 191 */
																obj_t BgL_arg1322z00_1285;

																{	/* Llib/weakhash.scm 191 */
																	obj_t BgL_pairz00_2394;

																	BgL_pairz00_2394 =
																		CAR(((obj_t) BgL_bucketz00_1275));
																	BgL_arg1322z00_1285 = CDR(BgL_pairz00_2394);
																}
																BgL_retz00_1279 =
																	PROCEDURE_ENTRY(BgL_funz00_52) (BgL_funz00_52,
																	BgL_keyz00_1283, BgL_arg1322z00_1285, BEOA);
															}
													}
													if ((BgL_retz00_1279 == BGl_removez00zz__weakhashz00))
														{	/* Llib/weakhash.scm 177 */
															{	/* Llib/weakhash.scm 124 */
																long BgL_arg1239z00_2395;

																BgL_arg1239z00_2395 =
																	(
																	(long) CINT(STRUCT_REF(BgL_tablez00_51,
																			(int) (((long) 0)))) - ((long) 1));
																{	/* Llib/weakhash.scm 124 */
																	obj_t BgL_auxz00_4120;
																	int BgL_tmpz00_4118;

																	BgL_auxz00_4120 = BINT(BgL_arg1239z00_2395);
																	BgL_tmpz00_4118 = (int) (((long) 0));
																	STRUCT_SET(BgL_tablez00_51, BgL_tmpz00_4118,
																		BgL_auxz00_4120);
															}}
															if (CBOOL(BgL_lastzd2bucketzd2_1276))
																{	/* Llib/weakhash.scm 126 */
																	obj_t BgL_arg1243z00_2397;

																	BgL_arg1243z00_2397 =
																		CDR(((obj_t) BgL_bucketz00_1275));
																	{	/* Llib/weakhash.scm 126 */
																		obj_t BgL_tmpz00_4127;

																		BgL_tmpz00_4127 =
																			((obj_t) BgL_lastzd2bucketzd2_1276);
																		SET_CDR(BgL_tmpz00_4127,
																			BgL_arg1243z00_2397);
																	}
																}
															else
																{	/* Llib/weakhash.scm 127 */
																	obj_t BgL_arg1245z00_2398;

																	BgL_arg1245z00_2398 =
																		CDR(((obj_t) BgL_bucketz00_1275));
																	VECTOR_SET(
																		((obj_t) BgL_bucketsz00_1267),
																		BgL_iz00_1270, BgL_arg1245z00_2398);
																}
															BGl_keepgoingz00zz__weakhashz00;
															{	/* Llib/weakhash.scm 177 */
																obj_t BgL_arg1317z00_1281;

																BgL_arg1317z00_1281 =
																	CDR(((obj_t) BgL_bucketz00_1275));
																{
																	obj_t BgL_bucketz00_4136;

																	BgL_bucketz00_4136 = BgL_arg1317z00_1281;
																	BgL_bucketz00_1275 = BgL_bucketz00_4136;
																	goto BgL_zc3z04anonymousza31314ze3z87_1277;
																}
															}
														}
													else
														{	/* Llib/weakhash.scm 177 */
															obj_t BgL_arg1318z00_1282;

															BgL_arg1318z00_1282 =
																CDR(((obj_t) BgL_bucketz00_1275));
															{
																obj_t BgL_lastzd2bucketzd2_4140;
																obj_t BgL_bucketz00_4139;

																BgL_bucketz00_4139 = BgL_arg1318z00_1282;
																BgL_lastzd2bucketzd2_4140 = BgL_bucketz00_1275;
																BgL_lastzd2bucketzd2_1276 =
																	BgL_lastzd2bucketzd2_4140;
																BgL_bucketz00_1275 = BgL_bucketz00_4139;
																goto BgL_zc3z04anonymousza31314ze3z87_1277;
															}
														}
												}
										}
									}
									{
										long BgL_iz00_4141;

										BgL_iz00_4141 = (BgL_iz00_1270 + ((long) 1));
										BgL_iz00_1270 = BgL_iz00_4141;
										goto BgL_zc3z04anonymousza31312ze3z87_1271;
									}
								}
						}
					}
				}
			else
				{	/* Llib/weakhash.scm 177 */
					if (
						(((long) 2) ==
							(long) CINT(STRUCT_REF(BgL_tablez00_51, (int) (((long) 5))))))
						{	/* Llib/weakhash.scm 177 */
							obj_t BgL_bucketsz00_1292;

							BgL_bucketsz00_1292 =
								STRUCT_REF(BgL_tablez00_51, (int) (((long) 2)));
							{	/* Llib/weakhash.scm 177 */

								{
									long BgL_iz00_1295;

									BgL_iz00_1295 = ((long) 0);
								BgL_zc3z04anonymousza31328ze3z87_1296:
									if (
										(BgL_iz00_1295 ==
											VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1292))))
										{	/* Llib/weakhash.scm 177 */
											return ((bool_t) 0);
										}
									else
										{	/* Llib/weakhash.scm 177 */
											{	/* Llib/weakhash.scm 177 */
												obj_t BgL_g1062z00_1298;

												BgL_g1062z00_1298 =
													VECTOR_REF(
													((obj_t) BgL_bucketsz00_1292), BgL_iz00_1295);
												{
													obj_t BgL_bucketz00_1300;
													obj_t BgL_lastzd2bucketzd2_1301;

													BgL_bucketz00_1300 = BgL_g1062z00_1298;
													BgL_lastzd2bucketzd2_1301 = BFALSE;
												BgL_zc3z04anonymousza31330ze3z87_1302:
													if (NULLP(BgL_bucketz00_1300))
														{	/* Llib/weakhash.scm 177 */
															((bool_t) 0);
														}
													else
														{	/* Llib/weakhash.scm 194 */
															obj_t BgL_retz00_1304;

															{	/* Llib/weakhash.scm 194 */
																obj_t BgL_dataz00_1308;

																{	/* Llib/weakhash.scm 194 */
																	obj_t BgL_arg1338z00_1311;

																	{	/* Llib/weakhash.scm 194 */
																		obj_t BgL_pairz00_2426;

																		BgL_pairz00_2426 =
																			CAR(((obj_t) BgL_bucketz00_1300));
																		BgL_arg1338z00_1311 = CDR(BgL_pairz00_2426);
																	}
																	BgL_dataz00_1308 =
																		weakptr_data(((obj_t) BgL_arg1338z00_1311));
																}
																if ((BgL_dataz00_1308 == BUNSPEC))
																	{	/* Llib/weakhash.scm 195 */
																		BgL_retz00_1304 =
																			BGl_removez00zz__weakhashz00;
																	}
																else
																	{	/* Llib/weakhash.scm 197 */
																		obj_t BgL_arg1337z00_1310;

																		{	/* Llib/weakhash.scm 197 */
																			obj_t BgL_pairz00_2431;

																			BgL_pairz00_2431 =
																				CAR(((obj_t) BgL_bucketz00_1300));
																			BgL_arg1337z00_1310 =
																				CAR(BgL_pairz00_2431);
																		}
																		BgL_retz00_1304 =
																			PROCEDURE_ENTRY(BgL_funz00_52)
																			(BgL_funz00_52, BgL_arg1337z00_1310,
																			BgL_dataz00_1308, BEOA);
																	}
															}
															if (
																(BgL_retz00_1304 ==
																	BGl_removez00zz__weakhashz00))
																{	/* Llib/weakhash.scm 177 */
																	{	/* Llib/weakhash.scm 124 */
																		long BgL_arg1239z00_2432;

																		BgL_arg1239z00_2432 =
																			(
																			(long) CINT(STRUCT_REF(BgL_tablez00_51,
																					(int) (((long) 0)))) - ((long) 1));
																		{	/* Llib/weakhash.scm 124 */
																			obj_t BgL_auxz00_4181;
																			int BgL_tmpz00_4179;

																			BgL_auxz00_4181 =
																				BINT(BgL_arg1239z00_2432);
																			BgL_tmpz00_4179 = (int) (((long) 0));
																			STRUCT_SET(BgL_tablez00_51,
																				BgL_tmpz00_4179, BgL_auxz00_4181);
																	}}
																	if (CBOOL(BgL_lastzd2bucketzd2_1301))
																		{	/* Llib/weakhash.scm 126 */
																			obj_t BgL_arg1243z00_2434;

																			BgL_arg1243z00_2434 =
																				CDR(((obj_t) BgL_bucketz00_1300));
																			{	/* Llib/weakhash.scm 126 */
																				obj_t BgL_tmpz00_4188;

																				BgL_tmpz00_4188 =
																					((obj_t) BgL_lastzd2bucketzd2_1301);
																				SET_CDR(BgL_tmpz00_4188,
																					BgL_arg1243z00_2434);
																			}
																		}
																	else
																		{	/* Llib/weakhash.scm 127 */
																			obj_t BgL_arg1245z00_2435;

																			BgL_arg1245z00_2435 =
																				CDR(((obj_t) BgL_bucketz00_1300));
																			VECTOR_SET(
																				((obj_t) BgL_bucketsz00_1292),
																				BgL_iz00_1295, BgL_arg1245z00_2435);
																		}
																	BGl_keepgoingz00zz__weakhashz00;
																	{	/* Llib/weakhash.scm 177 */
																		obj_t BgL_arg1333z00_1306;

																		BgL_arg1333z00_1306 =
																			CDR(((obj_t) BgL_bucketz00_1300));
																		{
																			obj_t BgL_bucketz00_4197;

																			BgL_bucketz00_4197 = BgL_arg1333z00_1306;
																			BgL_bucketz00_1300 = BgL_bucketz00_4197;
																			goto
																				BgL_zc3z04anonymousza31330ze3z87_1302;
																		}
																	}
																}
															else
																{	/* Llib/weakhash.scm 177 */
																	obj_t BgL_arg1334z00_1307;

																	BgL_arg1334z00_1307 =
																		CDR(((obj_t) BgL_bucketz00_1300));
																	{
																		obj_t BgL_lastzd2bucketzd2_4201;
																		obj_t BgL_bucketz00_4200;

																		BgL_bucketz00_4200 = BgL_arg1334z00_1307;
																		BgL_lastzd2bucketzd2_4201 =
																			BgL_bucketz00_1300;
																		BgL_lastzd2bucketzd2_1301 =
																			BgL_lastzd2bucketzd2_4201;
																		BgL_bucketz00_1300 = BgL_bucketz00_4200;
																		goto BgL_zc3z04anonymousza31330ze3z87_1302;
																	}
																}
														}
												}
											}
											{
												long BgL_iz00_4202;

												BgL_iz00_4202 = (BgL_iz00_1295 + ((long) 1));
												BgL_iz00_1295 = BgL_iz00_4202;
												goto BgL_zc3z04anonymousza31328ze3z87_1296;
											}
										}
								}
							}
						}
					else
						{	/* Llib/weakhash.scm 177 */
							if (
								(((long) 3) ==
									(long) CINT(STRUCT_REF(BgL_tablez00_51, (int) (((long) 5))))))
								{	/* Llib/weakhash.scm 177 */
									obj_t BgL_bucketsz00_1317;

									BgL_bucketsz00_1317 =
										STRUCT_REF(BgL_tablez00_51, (int) (((long) 2)));
									{	/* Llib/weakhash.scm 177 */

										{
											long BgL_iz00_1320;

											BgL_iz00_1320 = ((long) 0);
										BgL_zc3z04anonymousza31342ze3z87_1321:
											if (
												(BgL_iz00_1320 ==
													VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1317))))
												{	/* Llib/weakhash.scm 177 */
													return ((bool_t) 0);
												}
											else
												{	/* Llib/weakhash.scm 177 */
													{	/* Llib/weakhash.scm 177 */
														obj_t BgL_g1063z00_1323;

														BgL_g1063z00_1323 =
															VECTOR_REF(
															((obj_t) BgL_bucketsz00_1317), BgL_iz00_1320);
														{
															obj_t BgL_bucketz00_1325;
															obj_t BgL_lastzd2bucketzd2_1326;

															BgL_bucketz00_1325 = BgL_g1063z00_1323;
															BgL_lastzd2bucketzd2_1326 = BFALSE;
														BgL_zc3z04anonymousza31344ze3z87_1327:
															if (NULLP(BgL_bucketz00_1325))
																{	/* Llib/weakhash.scm 177 */
																	((bool_t) 0);
																}
															else
																{	/* Llib/weakhash.scm 200 */
																	obj_t BgL_retz00_1329;

																	{	/* Llib/weakhash.scm 200 */
																		obj_t BgL_keyz00_1333;
																		obj_t BgL_dataz00_1334;

																		{	/* Llib/weakhash.scm 200 */
																			obj_t BgL_arg1351z00_1338;

																			{	/* Llib/weakhash.scm 200 */
																				obj_t BgL_pairz00_2463;

																				BgL_pairz00_2463 =
																					CAR(((obj_t) BgL_bucketz00_1325));
																				BgL_arg1351z00_1338 =
																					CAR(BgL_pairz00_2463);
																			}
																			BgL_keyz00_1333 =
																				weakptr_data(
																				((obj_t) BgL_arg1351z00_1338));
																		}
																		{	/* Llib/weakhash.scm 201 */
																			obj_t BgL_arg1352z00_1339;

																			{	/* Llib/weakhash.scm 201 */
																				obj_t BgL_pairz00_2468;

																				BgL_pairz00_2468 =
																					CAR(((obj_t) BgL_bucketz00_1325));
																				BgL_arg1352z00_1339 =
																					CDR(BgL_pairz00_2468);
																			}
																			BgL_dataz00_1334 =
																				weakptr_data(
																				((obj_t) BgL_arg1352z00_1339));
																		}
																		{	/* Llib/weakhash.scm 202 */
																			bool_t BgL_test2378z00_4229;

																			if ((BgL_keyz00_1333 == BUNSPEC))
																				{	/* Llib/weakhash.scm 202 */
																					BgL_test2378z00_4229 = ((bool_t) 1);
																				}
																			else
																				{	/* Llib/weakhash.scm 202 */
																					BgL_test2378z00_4229 =
																						(BgL_dataz00_1334 == BUNSPEC);
																				}
																			if (BgL_test2378z00_4229)
																				{	/* Llib/weakhash.scm 202 */
																					BgL_retz00_1329 =
																						BGl_removez00zz__weakhashz00;
																				}
																			else
																				{	/* Llib/weakhash.scm 202 */
																					BgL_retz00_1329 =
																						PROCEDURE_ENTRY(BgL_funz00_52)
																						(BgL_funz00_52, BgL_keyz00_1333,
																						BgL_dataz00_1334, BEOA);
																				}
																		}
																	}
																	if (
																		(BgL_retz00_1329 ==
																			BGl_removez00zz__weakhashz00))
																		{	/* Llib/weakhash.scm 177 */
																			{	/* Llib/weakhash.scm 124 */
																				long BgL_arg1239z00_2470;

																				BgL_arg1239z00_2470 =
																					(
																					(long)
																					CINT(STRUCT_REF(BgL_tablez00_51,
																							(int) (((long) 0)))) -
																					((long) 1));
																				{	/* Llib/weakhash.scm 124 */
																					obj_t BgL_auxz00_4246;
																					int BgL_tmpz00_4244;

																					BgL_auxz00_4246 =
																						BINT(BgL_arg1239z00_2470);
																					BgL_tmpz00_4244 = (int) (((long) 0));
																					STRUCT_SET(BgL_tablez00_51,
																						BgL_tmpz00_4244, BgL_auxz00_4246);
																			}}
																			if (CBOOL(BgL_lastzd2bucketzd2_1326))
																				{	/* Llib/weakhash.scm 126 */
																					obj_t BgL_arg1243z00_2472;

																					BgL_arg1243z00_2472 =
																						CDR(((obj_t) BgL_bucketz00_1325));
																					{	/* Llib/weakhash.scm 126 */
																						obj_t BgL_tmpz00_4253;

																						BgL_tmpz00_4253 =
																							((obj_t)
																							BgL_lastzd2bucketzd2_1326);
																						SET_CDR(BgL_tmpz00_4253,
																							BgL_arg1243z00_2472);
																					}
																				}
																			else
																				{	/* Llib/weakhash.scm 127 */
																					obj_t BgL_arg1245z00_2473;

																					BgL_arg1245z00_2473 =
																						CDR(((obj_t) BgL_bucketz00_1325));
																					VECTOR_SET(
																						((obj_t) BgL_bucketsz00_1317),
																						BgL_iz00_1320, BgL_arg1245z00_2473);
																				}
																			BGl_keepgoingz00zz__weakhashz00;
																			{	/* Llib/weakhash.scm 177 */
																				obj_t BgL_arg1347z00_1331;

																				BgL_arg1347z00_1331 =
																					CDR(((obj_t) BgL_bucketz00_1325));
																				{
																					obj_t BgL_bucketz00_4262;

																					BgL_bucketz00_4262 =
																						BgL_arg1347z00_1331;
																					BgL_bucketz00_1325 =
																						BgL_bucketz00_4262;
																					goto
																						BgL_zc3z04anonymousza31344ze3z87_1327;
																				}
																			}
																		}
																	else
																		{	/* Llib/weakhash.scm 177 */
																			obj_t BgL_arg1348z00_1332;

																			BgL_arg1348z00_1332 =
																				CDR(((obj_t) BgL_bucketz00_1325));
																			{
																				obj_t BgL_lastzd2bucketzd2_4266;
																				obj_t BgL_bucketz00_4265;

																				BgL_bucketz00_4265 =
																					BgL_arg1348z00_1332;
																				BgL_lastzd2bucketzd2_4266 =
																					BgL_bucketz00_1325;
																				BgL_lastzd2bucketzd2_1326 =
																					BgL_lastzd2bucketzd2_4266;
																				BgL_bucketz00_1325 = BgL_bucketz00_4265;
																				goto
																					BgL_zc3z04anonymousza31344ze3z87_1327;
																			}
																		}
																}
														}
													}
													{
														long BgL_iz00_4267;

														BgL_iz00_4267 = (BgL_iz00_1320 + ((long) 1));
														BgL_iz00_1320 = BgL_iz00_4267;
														goto BgL_zc3z04anonymousza31342ze3z87_1321;
													}
												}
										}
									}
								}
							else
								{	/* Llib/weakhash.scm 177 */
									obj_t BgL_bucketsz00_1343;

									BgL_bucketsz00_1343 =
										STRUCT_REF(BgL_tablez00_51, (int) (((long) 2)));
									{	/* Llib/weakhash.scm 177 */

										{
											long BgL_iz00_1346;

											BgL_iz00_1346 = ((long) 0);
										BgL_zc3z04anonymousza31354ze3z87_1347:
											if (
												(BgL_iz00_1346 ==
													VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1343))))
												{	/* Llib/weakhash.scm 177 */
													return ((bool_t) 0);
												}
											else
												{	/* Llib/weakhash.scm 177 */
													{	/* Llib/weakhash.scm 177 */
														obj_t BgL_g1064z00_1349;

														BgL_g1064z00_1349 =
															VECTOR_REF(
															((obj_t) BgL_bucketsz00_1343), BgL_iz00_1346);
														{
															obj_t BgL_bucketz00_1351;
															obj_t BgL_lastzd2bucketzd2_1352;

															BgL_bucketz00_1351 = BgL_g1064z00_1349;
															BgL_lastzd2bucketzd2_1352 = BFALSE;
														BgL_zc3z04anonymousza31356ze3z87_1353:
															if (NULLP(BgL_bucketz00_1351))
																{	/* Llib/weakhash.scm 177 */
																	((bool_t) 0);
																}
															else
																{	/* Llib/weakhash.scm 208 */
																	obj_t BgL_retz00_1355;

																	{	/* Llib/weakhash.scm 208 */
																		obj_t BgL_arg1361z00_1359;
																		obj_t BgL_arg1362z00_1360;

																		{	/* Llib/weakhash.scm 208 */
																			obj_t BgL_pairz00_2498;

																			BgL_pairz00_2498 =
																				CAR(((obj_t) BgL_bucketz00_1351));
																			BgL_arg1361z00_1359 =
																				CAR(BgL_pairz00_2498);
																		}
																		{	/* Llib/weakhash.scm 208 */
																			obj_t BgL_pairz00_2502;

																			BgL_pairz00_2502 =
																				CAR(((obj_t) BgL_bucketz00_1351));
																			BgL_arg1362z00_1360 =
																				CDR(BgL_pairz00_2502);
																		}
																		BgL_retz00_1355 =
																			PROCEDURE_ENTRY(BgL_funz00_52)
																			(BgL_funz00_52, BgL_arg1361z00_1359,
																			BgL_arg1362z00_1360, BEOA);
																	}
																	if (
																		(BgL_retz00_1355 ==
																			BGl_removez00zz__weakhashz00))
																		{	/* Llib/weakhash.scm 177 */
																			{	/* Llib/weakhash.scm 124 */
																				long BgL_arg1239z00_2503;

																				BgL_arg1239z00_2503 =
																					(
																					(long)
																					CINT(STRUCT_REF(BgL_tablez00_51,
																							(int) (((long) 0)))) -
																					((long) 1));
																				{	/* Llib/weakhash.scm 124 */
																					obj_t BgL_auxz00_4298;
																					int BgL_tmpz00_4296;

																					BgL_auxz00_4298 =
																						BINT(BgL_arg1239z00_2503);
																					BgL_tmpz00_4296 = (int) (((long) 0));
																					STRUCT_SET(BgL_tablez00_51,
																						BgL_tmpz00_4296, BgL_auxz00_4298);
																			}}
																			if (CBOOL(BgL_lastzd2bucketzd2_1352))
																				{	/* Llib/weakhash.scm 126 */
																					obj_t BgL_arg1243z00_2505;

																					BgL_arg1243z00_2505 =
																						CDR(((obj_t) BgL_bucketz00_1351));
																					{	/* Llib/weakhash.scm 126 */
																						obj_t BgL_tmpz00_4305;

																						BgL_tmpz00_4305 =
																							((obj_t)
																							BgL_lastzd2bucketzd2_1352);
																						SET_CDR(BgL_tmpz00_4305,
																							BgL_arg1243z00_2505);
																					}
																				}
																			else
																				{	/* Llib/weakhash.scm 127 */
																					obj_t BgL_arg1245z00_2506;

																					BgL_arg1245z00_2506 =
																						CDR(((obj_t) BgL_bucketz00_1351));
																					VECTOR_SET(
																						((obj_t) BgL_bucketsz00_1343),
																						BgL_iz00_1346, BgL_arg1245z00_2506);
																				}
																			BGl_keepgoingz00zz__weakhashz00;
																			{	/* Llib/weakhash.scm 177 */
																				obj_t BgL_arg1359z00_1357;

																				BgL_arg1359z00_1357 =
																					CDR(((obj_t) BgL_bucketz00_1351));
																				{
																					obj_t BgL_bucketz00_4314;

																					BgL_bucketz00_4314 =
																						BgL_arg1359z00_1357;
																					BgL_bucketz00_1351 =
																						BgL_bucketz00_4314;
																					goto
																						BgL_zc3z04anonymousza31356ze3z87_1353;
																				}
																			}
																		}
																	else
																		{	/* Llib/weakhash.scm 177 */
																			obj_t BgL_arg1360z00_1358;

																			BgL_arg1360z00_1358 =
																				CDR(((obj_t) BgL_bucketz00_1351));
																			{
																				obj_t BgL_lastzd2bucketzd2_4318;
																				obj_t BgL_bucketz00_4317;

																				BgL_bucketz00_4317 =
																					BgL_arg1360z00_1358;
																				BgL_lastzd2bucketzd2_4318 =
																					BgL_bucketz00_1351;
																				BgL_lastzd2bucketzd2_1352 =
																					BgL_lastzd2bucketzd2_4318;
																				BgL_bucketz00_1351 = BgL_bucketz00_4317;
																				goto
																					BgL_zc3z04anonymousza31356ze3z87_1353;
																			}
																		}
																}
														}
													}
													{
														long BgL_iz00_4319;

														BgL_iz00_4319 = (BgL_iz00_1346 + ((long) 1));
														BgL_iz00_1346 = BgL_iz00_4319;
														goto BgL_zc3z04anonymousza31354ze3z87_1347;
													}
												}
										}
									}
								}
						}
				}
		}

	}



/* weak-hashtable->vector */
	BGL_EXPORTED_DEF obj_t
		BGl_weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(obj_t BgL_tablez00_53)
	{
		{	/* Llib/weakhash.scm 220 */
			{	/* Llib/weakhash.scm 221 */
				obj_t BgL_vecz00_1367;
				obj_t BgL_wz00_3547;

				BgL_vecz00_1367 =
					make_vector(BGl_hashtablezd2siza7ez75zz__hashz00(BgL_tablez00_53),
					BUNSPEC);
				BgL_wz00_3547 = MAKE_CELL(BINT(((long) 0)));
				{	/* Llib/weakhash.scm 225 */
					obj_t BgL_zc3z04anonymousza31369ze3z87_3538;

					BgL_zc3z04anonymousza31369ze3z87_3538 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31369ze3ze5zz__weakhashz00,
						(int) (((long) 2)), (int) (((long) 2)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31369ze3z87_3538,
						(int) (((long) 0)), BgL_vecz00_1367);
					PROCEDURE_SET(BgL_zc3z04anonymousza31369ze3z87_3538,
						(int) (((long) 1)), ((obj_t) BgL_wz00_3547));
					BGl_traversezd2hashzd2zz__weakhashz00(BgL_tablez00_53,
						BgL_zc3z04anonymousza31369ze3z87_3538);
				}
				{	/* Llib/weakhash.scm 227 */
					bool_t BgL_test2386z00_4333;

					{	/* Llib/weakhash.scm 227 */
						long BgL_arg1372z00_1376;

						BgL_arg1372z00_1376 =
							BGl_hashtablezd2siza7ez75zz__hashz00(BgL_tablez00_53);
						BgL_test2386z00_4333 =
							((long) CINT(CELL_REF(BgL_wz00_3547)) < BgL_arg1372z00_1376);
					}
					if (BgL_test2386z00_4333)
						{	/* Llib/weakhash.scm 227 */
							return
								BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(BgL_vecz00_1367,
								(long) CINT(CELL_REF(BgL_wz00_3547)));
						}
					else
						{	/* Llib/weakhash.scm 227 */
							return BgL_vecz00_1367;
						}
				}
			}
		}

	}



/* &weak-hashtable->vector */
	obj_t BGl_z62weakzd2hashtablezd2ze3vectorz81zz__weakhashz00(obj_t
		BgL_envz00_3539, obj_t BgL_tablez00_3540)
	{
		{	/* Llib/weakhash.scm 220 */
			{	/* Llib/weakhash.scm 221 */
				obj_t BgL_auxz00_4339;

				if (STRUCTP(BgL_tablez00_3540))
					{	/* Llib/weakhash.scm 221 */
						BgL_auxz00_4339 = BgL_tablez00_3540;
					}
				else
					{
						obj_t BgL_auxz00_4342;

						BgL_auxz00_4342 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2279z00zz__weakhashz00,
							BINT(((long) 8392)), BGl_string2280z00zz__weakhashz00,
							BGl_string2281z00zz__weakhashz00, BgL_tablez00_3540);
						FAILURE(BgL_auxz00_4342, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(BgL_auxz00_4339);
			}
		}

	}



/* &<@anonymous:1369> */
	obj_t BGl_z62zc3z04anonymousza31369ze3ze5zz__weakhashz00(obj_t
		BgL_envz00_3541, obj_t BgL_keyz00_3544, obj_t BgL_valz00_3545)
	{
		{	/* Llib/weakhash.scm 224 */
			{	/* Llib/weakhash.scm 225 */
				obj_t BgL_vecz00_3542;
				obj_t BgL_wz00_3543;

				BgL_vecz00_3542 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3541, (int) (((long) 0))));
				BgL_wz00_3543 = PROCEDURE_REF(BgL_envz00_3541, (int) (((long) 1)));
				{	/* Llib/weakhash.scm 225 */
					long BgL_kz00_3722;

					BgL_kz00_3722 = (long) CINT(CELL_REF(BgL_wz00_3543));
					VECTOR_SET(((obj_t) BgL_vecz00_3542), BgL_kz00_3722, BgL_valz00_3545);
				}
				{	/* Llib/weakhash.scm 226 */
					obj_t BgL_auxz00_3723;

					BgL_auxz00_3723 = ADDFX(CELL_REF(BgL_wz00_3543), BINT(((long) 1)));
					return CELL_SET(BgL_wz00_3543, BgL_auxz00_3723);
				}
			}
		}

	}



/* weak-hashtable->list */
	BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2ze3listze3zz__weakhashz00(obj_t
		BgL_tablez00_54)
	{
		{	/* Llib/weakhash.scm 234 */
			{	/* Llib/weakhash.scm 235 */
				obj_t BgL_resz00_3557;

				BgL_resz00_3557 = MAKE_CELL(BNIL);
				{	/* Llib/weakhash.scm 238 */
					obj_t BgL_zc3z04anonymousza31376ze3z87_3549;

					BgL_zc3z04anonymousza31376ze3z87_3549 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31376ze3ze5zz__weakhashz00,
						(int) (((long) 2)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31376ze3z87_3549,
						(int) (((long) 0)), ((obj_t) BgL_resz00_3557));
					BGl_traversezd2hashzd2zz__weakhashz00(BgL_tablez00_54,
						BgL_zc3z04anonymousza31376ze3z87_3549);
				}
				return CELL_REF(BgL_resz00_3557);
			}
		}

	}



/* &weak-hashtable->list */
	obj_t BGl_z62weakzd2hashtablezd2ze3listz81zz__weakhashz00(obj_t
		BgL_envz00_3550, obj_t BgL_tablez00_3551)
	{
		{	/* Llib/weakhash.scm 234 */
			{	/* Llib/weakhash.scm 235 */
				obj_t BgL_auxz00_4364;

				if (STRUCTP(BgL_tablez00_3551))
					{	/* Llib/weakhash.scm 235 */
						BgL_auxz00_4364 = BgL_tablez00_3551;
					}
				else
					{
						obj_t BgL_auxz00_4367;

						BgL_auxz00_4367 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2279z00zz__weakhashz00,
							BINT(((long) 8898)), BGl_string2282z00zz__weakhashz00,
							BGl_string2281z00zz__weakhashz00, BgL_tablez00_3551);
						FAILURE(BgL_auxz00_4367, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2ze3listze3zz__weakhashz00(BgL_auxz00_4364);
			}
		}

	}



/* &<@anonymous:1376> */
	obj_t BGl_z62zc3z04anonymousza31376ze3ze5zz__weakhashz00(obj_t
		BgL_envz00_3552, obj_t BgL_keyz00_3554, obj_t BgL_valz00_3555)
	{
		{	/* Llib/weakhash.scm 237 */
			{	/* Llib/weakhash.scm 238 */
				obj_t BgL_resz00_3553;

				BgL_resz00_3553 = PROCEDURE_REF(BgL_envz00_3552, (int) (((long) 0)));
				{	/* Llib/weakhash.scm 238 */
					obj_t BgL_auxz00_3724;

					BgL_auxz00_3724 =
						MAKE_YOUNG_PAIR(BgL_valz00_3555, CELL_REF(BgL_resz00_3553));
					return CELL_SET(BgL_resz00_3553, BgL_auxz00_3724);
				}
			}
		}

	}



/* weak-hashtable-key-list */
	BGL_EXPORTED_DEF obj_t
		BGl_weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(obj_t BgL_tablez00_55)
	{
		{	/* Llib/weakhash.scm 244 */
			{	/* Llib/weakhash.scm 245 */
				obj_t BgL_resz00_3567;

				BgL_resz00_3567 = MAKE_CELL(BNIL);
				{	/* Llib/weakhash.scm 248 */
					obj_t BgL_zc3z04anonymousza31378ze3z87_3559;

					BgL_zc3z04anonymousza31378ze3z87_3559 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31378ze3ze5zz__weakhashz00,
						(int) (((long) 2)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31378ze3z87_3559,
						(int) (((long) 0)), ((obj_t) BgL_resz00_3567));
					BGl_traversezd2hashzd2zz__weakhashz00(BgL_tablez00_55,
						BgL_zc3z04anonymousza31378ze3z87_3559);
				}
				return CELL_REF(BgL_resz00_3567);
			}
		}

	}



/* &weak-hashtable-key-list */
	obj_t BGl_z62weakzd2hashtablezd2keyzd2listzb0zz__weakhashz00(obj_t
		BgL_envz00_3560, obj_t BgL_tablez00_3561)
	{
		{	/* Llib/weakhash.scm 244 */
			{	/* Llib/weakhash.scm 245 */
				obj_t BgL_auxz00_4382;

				if (STRUCTP(BgL_tablez00_3561))
					{	/* Llib/weakhash.scm 245 */
						BgL_auxz00_4382 = BgL_tablez00_3561;
					}
				else
					{
						obj_t BgL_auxz00_4385;

						BgL_auxz00_4385 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2279z00zz__weakhashz00,
							BINT(((long) 9284)), BGl_string2283z00zz__weakhashz00,
							BGl_string2281z00zz__weakhashz00, BgL_tablez00_3561);
						FAILURE(BgL_auxz00_4385, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(BgL_auxz00_4382);
			}
		}

	}



/* &<@anonymous:1378> */
	obj_t BGl_z62zc3z04anonymousza31378ze3ze5zz__weakhashz00(obj_t
		BgL_envz00_3562, obj_t BgL_keyz00_3564, obj_t BgL_valz00_3565)
	{
		{	/* Llib/weakhash.scm 247 */
			{	/* Llib/weakhash.scm 248 */
				obj_t BgL_resz00_3563;

				BgL_resz00_3563 = PROCEDURE_REF(BgL_envz00_3562, (int) (((long) 0)));
				{	/* Llib/weakhash.scm 248 */
					obj_t BgL_auxz00_3725;

					BgL_auxz00_3725 =
						MAKE_YOUNG_PAIR(BgL_keyz00_3564, CELL_REF(BgL_resz00_3563));
					return CELL_SET(BgL_resz00_3563, BgL_auxz00_3725);
				}
			}
		}

	}



/* weak-hashtable-map */
	BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2mapz00zz__weakhashz00(obj_t
		BgL_tablez00_57, obj_t BgL_funz00_58)
	{
		{	/* Llib/weakhash.scm 271 */
			{	/* Llib/weakhash.scm 272 */
				obj_t BgL_resz00_3579;

				BgL_resz00_3579 = MAKE_CELL(BNIL);
				{	/* Llib/weakhash.scm 275 */
					obj_t BgL_zc3z04anonymousza31390ze3z87_3569;

					BgL_zc3z04anonymousza31390ze3z87_3569 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31390ze3ze5zz__weakhashz00,
						(int) (((long) 2)), (int) (((long) 2)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31390ze3z87_3569,
						(int) (((long) 0)), BgL_funz00_58);
					PROCEDURE_SET(BgL_zc3z04anonymousza31390ze3z87_3569,
						(int) (((long) 1)), ((obj_t) BgL_resz00_3579));
					BGl_traversezd2hashzd2zz__weakhashz00(BgL_tablez00_57,
						BgL_zc3z04anonymousza31390ze3z87_3569);
				}
				return CELL_REF(BgL_resz00_3579);
			}
		}

	}



/* &weak-hashtable-map */
	obj_t BGl_z62weakzd2hashtablezd2mapz62zz__weakhashz00(obj_t BgL_envz00_3570,
		obj_t BgL_tablez00_3571, obj_t BgL_funz00_3572)
	{
		{	/* Llib/weakhash.scm 271 */
			{	/* Llib/weakhash.scm 272 */
				obj_t BgL_auxz00_4409;
				obj_t BgL_auxz00_4402;

				if (PROCEDUREP(BgL_funz00_3572))
					{	/* Llib/weakhash.scm 272 */
						BgL_auxz00_4409 = BgL_funz00_3572;
					}
				else
					{
						obj_t BgL_auxz00_4412;

						BgL_auxz00_4412 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2279z00zz__weakhashz00,
							BINT(((long) 10328)), BGl_string2284z00zz__weakhashz00,
							BGl_string2285z00zz__weakhashz00, BgL_funz00_3572);
						FAILURE(BgL_auxz00_4412, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_tablez00_3571))
					{	/* Llib/weakhash.scm 272 */
						BgL_auxz00_4402 = BgL_tablez00_3571;
					}
				else
					{
						obj_t BgL_auxz00_4405;

						BgL_auxz00_4405 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2279z00zz__weakhashz00,
							BINT(((long) 10328)), BGl_string2284z00zz__weakhashz00,
							BGl_string2281z00zz__weakhashz00, BgL_tablez00_3571);
						FAILURE(BgL_auxz00_4405, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2mapz00zz__weakhashz00(BgL_auxz00_4402,
					BgL_auxz00_4409);
			}
		}

	}



/* &<@anonymous:1390> */
	obj_t BGl_z62zc3z04anonymousza31390ze3ze5zz__weakhashz00(obj_t
		BgL_envz00_3573, obj_t BgL_keyz00_3576, obj_t BgL_valz00_3577)
	{
		{	/* Llib/weakhash.scm 274 */
			{	/* Llib/weakhash.scm 275 */
				obj_t BgL_funz00_3574;
				obj_t BgL_resz00_3575;

				BgL_funz00_3574 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3573, (int) (((long) 0))));
				BgL_resz00_3575 = PROCEDURE_REF(BgL_envz00_3573, (int) (((long) 1)));
				{	/* Llib/weakhash.scm 275 */
					obj_t BgL_auxz00_3726;

					{	/* Llib/weakhash.scm 275 */
						obj_t BgL_arg1391z00_3727;

						BgL_arg1391z00_3727 =
							PROCEDURE_ENTRY(BgL_funz00_3574) (BgL_funz00_3574,
							BgL_keyz00_3576, BgL_valz00_3577, BEOA);
						BgL_auxz00_3726 =
							MAKE_YOUNG_PAIR(BgL_arg1391z00_3727, CELL_REF(BgL_resz00_3575));
					}
					return CELL_SET(BgL_resz00_3575, BgL_auxz00_3726);
				}
			}
		}

	}



/* weak-hashtable-for-each */
	BGL_EXPORTED_DEF obj_t
		BGl_weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(obj_t BgL_tablez00_59,
		obj_t BgL_funz00_60)
	{
		{	/* Llib/weakhash.scm 281 */
			return
				BBOOL(BGl_traversezd2hashzd2zz__weakhashz00(BgL_tablez00_59,
					BgL_funz00_60));
		}

	}



/* &weak-hashtable-for-each */
	obj_t BGl_z62weakzd2hashtablezd2forzd2eachzb0zz__weakhashz00(obj_t
		BgL_envz00_3581, obj_t BgL_tablez00_3582, obj_t BgL_funz00_3583)
	{
		{	/* Llib/weakhash.scm 281 */
			{	/* Llib/weakhash.scm 282 */
				obj_t BgL_auxz00_4437;
				obj_t BgL_auxz00_4430;

				if (PROCEDUREP(BgL_funz00_3583))
					{	/* Llib/weakhash.scm 282 */
						BgL_auxz00_4437 = BgL_funz00_3583;
					}
				else
					{
						obj_t BgL_auxz00_4440;

						BgL_auxz00_4440 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2279z00zz__weakhashz00,
							BINT(((long) 10739)), BGl_string2286z00zz__weakhashz00,
							BGl_string2285z00zz__weakhashz00, BgL_funz00_3583);
						FAILURE(BgL_auxz00_4440, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_tablez00_3582))
					{	/* Llib/weakhash.scm 282 */
						BgL_auxz00_4430 = BgL_tablez00_3582;
					}
				else
					{
						obj_t BgL_auxz00_4433;

						BgL_auxz00_4433 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2279z00zz__weakhashz00,
							BINT(((long) 10739)), BGl_string2286z00zz__weakhashz00,
							BGl_string2281z00zz__weakhashz00, BgL_tablez00_3582);
						FAILURE(BgL_auxz00_4433, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(BgL_auxz00_4430,
					BgL_auxz00_4437);
			}
		}

	}



/* weak-hashtable-filter! */
	BGL_EXPORTED_DEF obj_t
		BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00(obj_t BgL_tablez00_61,
		obj_t BgL_funz00_62)
	{
		{	/* Llib/weakhash.scm 287 */
			{	/* Llib/weakhash.scm 288 */
				obj_t BgL_bucketsz00_1421;

				BgL_bucketsz00_1421 = STRUCT_REF(BgL_tablez00_61, (int) (((long) 2)));
				{	/* Llib/weakhash.scm 289 */

					{
						long BgL_iz00_1424;

						{	/* Llib/weakhash.scm 290 */
							bool_t BgL_tmpz00_4447;

							BgL_iz00_1424 = ((long) 0);
						BgL_zc3z04anonymousza31392ze3z87_1425:
							if (
								(BgL_iz00_1424 < VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1421))))
								{	/* Llib/weakhash.scm 291 */
									{	/* Llib/weakhash.scm 295 */
										obj_t BgL_zc3z04anonymousza31395ze3z87_3584;

										{
											int BgL_tmpz00_4452;

											BgL_tmpz00_4452 = (int) (((long) 1));
											BgL_zc3z04anonymousza31395ze3z87_3584 =
												MAKE_L_PROCEDURE
												(BGl_z62zc3z04anonymousza31395ze3ze5zz__weakhashz00,
												BgL_tmpz00_4452);
										}
										PROCEDURE_L_SET(BgL_zc3z04anonymousza31395ze3z87_3584,
											(int) (((long) 0)), ((obj_t) BgL_funz00_62));
										BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_61,
											BgL_bucketsz00_1421, BgL_iz00_1424,
											BgL_zc3z04anonymousza31395ze3z87_3584);
									}
									{
										long BgL_iz00_4459;

										BgL_iz00_4459 = (BgL_iz00_1424 + ((long) 1));
										BgL_iz00_1424 = BgL_iz00_4459;
										goto BgL_zc3z04anonymousza31392ze3z87_1425;
									}
								}
							else
								{	/* Llib/weakhash.scm 291 */
									BgL_tmpz00_4447 = ((bool_t) 0);
								}
							return BBOOL(BgL_tmpz00_4447);
						}
					}
				}
			}
		}

	}



/* &weak-hashtable-filter! */
	obj_t BGl_z62weakzd2hashtablezd2filterz12z70zz__weakhashz00(obj_t
		BgL_envz00_3585, obj_t BgL_tablez00_3586, obj_t BgL_funz00_3587)
	{
		{	/* Llib/weakhash.scm 287 */
			{	/* Llib/weakhash.scm 288 */
				obj_t BgL_auxz00_4469;
				obj_t BgL_auxz00_4462;

				if (PROCEDUREP(BgL_funz00_3587))
					{	/* Llib/weakhash.scm 288 */
						BgL_auxz00_4469 = BgL_funz00_3587;
					}
				else
					{
						obj_t BgL_auxz00_4472;

						BgL_auxz00_4472 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2279z00zz__weakhashz00,
							BINT(((long) 11054)), BGl_string2287z00zz__weakhashz00,
							BGl_string2285z00zz__weakhashz00, BgL_funz00_3587);
						FAILURE(BgL_auxz00_4472, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_tablez00_3586))
					{	/* Llib/weakhash.scm 288 */
						BgL_auxz00_4462 = BgL_tablez00_3586;
					}
				else
					{
						obj_t BgL_auxz00_4465;

						BgL_auxz00_4465 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2279z00zz__weakhashz00,
							BINT(((long) 11054)), BGl_string2287z00zz__weakhashz00,
							BGl_string2281z00zz__weakhashz00, BgL_tablez00_3586);
						FAILURE(BgL_auxz00_4465, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00(BgL_auxz00_4462,
					BgL_auxz00_4469);
			}
		}

	}



/* &<@anonymous:1395> */
	obj_t BGl_z62zc3z04anonymousza31395ze3ze5zz__weakhashz00(obj_t
		BgL_envz00_3588, obj_t BgL_keyz00_3590, obj_t BgL_valz00_3591,
		obj_t BgL_bucketz00_3592)
	{
		{	/* Llib/weakhash.scm 294 */
			{	/* Llib/weakhash.scm 295 */
				obj_t BgL_funz00_3589;

				BgL_funz00_3589 = PROCEDURE_L_REF(BgL_envz00_3588, (int) (((long) 0)));
				if (CBOOL(PROCEDURE_ENTRY(BgL_funz00_3589) (BgL_funz00_3589,
							BgL_keyz00_3590, BgL_valz00_3591, BEOA)))
					{	/* Llib/weakhash.scm 295 */
						return BGl_keepgoingz00zz__weakhashz00;
					}
				else
					{	/* Llib/weakhash.scm 295 */
						return BGl_removez00zz__weakhashz00;
					}
			}
		}

	}



/* weak-hashtable-clear! */
	BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2clearz12z12zz__weakhashz00(obj_t
		BgL_tablez00_63)
	{
		{	/* Llib/weakhash.scm 303 */
			return
				BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00(BgL_tablez00_63,
				BGl_proc2288z00zz__weakhashz00);
		}

	}



/* &weak-hashtable-clear! */
	obj_t BGl_z62weakzd2hashtablezd2clearz12z70zz__weakhashz00(obj_t
		BgL_envz00_3594, obj_t BgL_tablez00_3595)
	{
		{	/* Llib/weakhash.scm 303 */
			{	/* Llib/weakhash.scm 304 */
				obj_t BgL_auxz00_4487;

				if (STRUCTP(BgL_tablez00_3595))
					{	/* Llib/weakhash.scm 304 */
						BgL_auxz00_4487 = BgL_tablez00_3595;
					}
				else
					{
						obj_t BgL_auxz00_4490;

						BgL_auxz00_4490 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2279z00zz__weakhashz00,
							BINT(((long) 11655)), BGl_string2289z00zz__weakhashz00,
							BGl_string2281z00zz__weakhashz00, BgL_tablez00_3595);
						FAILURE(BgL_auxz00_4490, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2clearz12z12zz__weakhashz00(BgL_auxz00_4487);
			}
		}

	}



/* &<@anonymous:1399> */
	obj_t BGl_z62zc3z04anonymousza31399ze3ze5zz__weakhashz00(obj_t
		BgL_envz00_3596, obj_t BgL_kz00_3597, obj_t BgL_vz00_3598)
	{
		{	/* Llib/weakhash.scm 304 */
			return BBOOL(((bool_t) 0));
		}

	}



/* weak-hashtable-contains? */
	BGL_EXPORTED_DEF bool_t
		BGl_weakzd2hashtablezd2containszf3zf3zz__weakhashz00(obj_t BgL_tablez00_66,
		obj_t BgL_keyz00_67)
	{
		{	/* Llib/weakhash.scm 328 */
			{	/* Llib/weakhash.scm 329 */
				obj_t BgL_bucketsz00_1464;

				BgL_bucketsz00_1464 = STRUCT_REF(BgL_tablez00_66, (int) (((long) 2)));
				{	/* Llib/weakhash.scm 330 */
					long BgL_bucketzd2numzd2_1466;

					{	/* Llib/weakhash.scm 331 */
						long BgL_arg1417z00_1476;

						{	/* Llib/weakhash.scm 331 */
							long BgL_res1976z00_2567;

							{	/* Llib/weakhash.scm 331 */
								obj_t BgL_hashnz00_2555;

								BgL_hashnz00_2555 =
									STRUCT_REF(BgL_tablez00_66, (int) (((long) 4)));
								if (PROCEDUREP(BgL_hashnz00_2555))
									{	/* Llib/weakhash.scm 331 */
										obj_t BgL_arg1232z00_2557;

										BgL_arg1232z00_2557 =
											PROCEDURE_ENTRY(BgL_hashnz00_2555) (BgL_hashnz00_2555,
											BgL_keyz00_67, BEOA);
										{	/* Llib/weakhash.scm 331 */
											long BgL_nz00_2560;

											BgL_nz00_2560 = (long) CINT(BgL_arg1232z00_2557);
											if ((BgL_nz00_2560 < ((long) 0)))
												{	/* Llib/weakhash.scm 331 */
													BgL_res1976z00_2567 = NEG(BgL_nz00_2560);
												}
											else
												{	/* Llib/weakhash.scm 331 */
													BgL_res1976z00_2567 = BgL_nz00_2560;
												}
										}
									}
								else
									{	/* Llib/weakhash.scm 331 */
										BgL_res1976z00_2567 =
											BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_67);
									}
							}
							BgL_arg1417z00_1476 = BgL_res1976z00_2567;
						}
						{	/* Llib/weakhash.scm 331 */
							long BgL_res1982z00_2586;

							{	/* Llib/weakhash.scm 331 */
								long BgL_n1z00_2568;
								long BgL_n2z00_2569;

								BgL_n1z00_2568 = BgL_arg1417z00_1476;
								BgL_n2z00_2569 = VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1464));
								{	/* Llib/weakhash.scm 331 */
									bool_t BgL_test2401z00_4513;

									{	/* Llib/weakhash.scm 331 */
										long BgL_arg1775z00_2571;

										BgL_arg1775z00_2571 =
											(((BgL_n1z00_2568) | (BgL_n2z00_2569)) & -2147483648);
										BgL_test2401z00_4513 = (BgL_arg1775z00_2571 == ((long) 0));
									}
									if (BgL_test2401z00_4513)
										{	/* Llib/weakhash.scm 331 */
											int32_t BgL_arg1772z00_2572;

											{	/* Llib/weakhash.scm 331 */
												int32_t BgL_arg1773z00_2573;
												int32_t BgL_arg1774z00_2574;

												{	/* Llib/weakhash.scm 331 */
													int32_t BgL_res1978z00_2578;

													BgL_res1978z00_2578 = (int32_t) (BgL_n1z00_2568);
													BgL_arg1773z00_2573 = BgL_res1978z00_2578;
												}
												{	/* Llib/weakhash.scm 331 */
													int32_t BgL_res1979z00_2580;

													BgL_res1979z00_2580 = (int32_t) (BgL_n2z00_2569);
													BgL_arg1774z00_2574 = BgL_res1979z00_2580;
												}
												BgL_arg1772z00_2572 =
													(BgL_arg1773z00_2573 % BgL_arg1774z00_2574);
											}
											{	/* Llib/weakhash.scm 331 */
												long BgL_res1981z00_2585;

												{	/* Llib/weakhash.scm 331 */
													long BgL_arg1879z00_2582;

													BgL_arg1879z00_2582 = (long) (BgL_arg1772z00_2572);
													{	/* Llib/weakhash.scm 331 */
														long BgL_res1980z00_2584;

														BgL_res1980z00_2584 = (long) (BgL_arg1879z00_2582);
														BgL_res1981z00_2585 = BgL_res1980z00_2584;
												}}
												BgL_res1982z00_2586 = BgL_res1981z00_2585;
										}}
									else
										{	/* Llib/weakhash.scm 331 */
											BgL_res1982z00_2586 = (BgL_n1z00_2568 % BgL_n2z00_2569);
										}
								}
							}
							BgL_bucketzd2numzd2_1466 = BgL_res1982z00_2586;
						}
					}
					{	/* Llib/weakhash.scm 331 */
						obj_t BgL_retz00_1467;

						{	/* Llib/weakhash.scm 334 */
							obj_t BgL_zc3z04anonymousza31415ze3z87_3599;

							{
								int BgL_tmpz00_4522;

								BgL_tmpz00_4522 = (int) (((long) 2));
								BgL_zc3z04anonymousza31415ze3z87_3599 =
									MAKE_L_PROCEDURE
									(BGl_z62zc3z04anonymousza31415ze3ze5zz__weakhashz00,
									BgL_tmpz00_4522);
							}
							PROCEDURE_L_SET(BgL_zc3z04anonymousza31415ze3z87_3599,
								(int) (((long) 0)), BgL_tablez00_66);
							PROCEDURE_L_SET(BgL_zc3z04anonymousza31415ze3z87_3599,
								(int) (((long) 1)), BgL_keyz00_67);
							BgL_retz00_1467 =
								BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_66,
								BgL_bucketsz00_1464, BgL_bucketzd2numzd2_1466,
								BgL_zc3z04anonymousza31415ze3z87_3599);
						}
						{	/* Llib/weakhash.scm 332 */

							if ((BgL_retz00_1467 == BGl_keepgoingz00zz__weakhashz00))
								{	/* Llib/weakhash.scm 337 */
									return ((bool_t) 0);
								}
							else
								{	/* Llib/weakhash.scm 337 */
									return ((bool_t) 1);
								}
						}
					}
				}
			}
		}

	}



/* &weak-hashtable-contains? */
	obj_t BGl_z62weakzd2hashtablezd2containszf3z91zz__weakhashz00(obj_t
		BgL_envz00_3600, obj_t BgL_tablez00_3601, obj_t BgL_keyz00_3602)
	{
		{	/* Llib/weakhash.scm 328 */
			{	/* Llib/weakhash.scm 329 */
				bool_t BgL_tmpz00_4532;

				{	/* Llib/weakhash.scm 329 */
					obj_t BgL_auxz00_4533;

					if (STRUCTP(BgL_tablez00_3601))
						{	/* Llib/weakhash.scm 329 */
							BgL_auxz00_4533 = BgL_tablez00_3601;
						}
					else
						{
							obj_t BgL_auxz00_4536;

							BgL_auxz00_4536 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2279z00zz__weakhashz00, BINT(((long) 12876)),
								BGl_string2290z00zz__weakhashz00,
								BGl_string2281z00zz__weakhashz00, BgL_tablez00_3601);
							FAILURE(BgL_auxz00_4536, BFALSE, BFALSE);
						}
					BgL_tmpz00_4532 =
						BGl_weakzd2hashtablezd2containszf3zf3zz__weakhashz00
						(BgL_auxz00_4533, BgL_keyz00_3602);
				}
				return BBOOL(BgL_tmpz00_4532);
			}
		}

	}



/* &<@anonymous:1415> */
	obj_t BGl_z62zc3z04anonymousza31415ze3ze5zz__weakhashz00(obj_t
		BgL_envz00_3603, obj_t BgL_bkeyz00_3606, obj_t BgL_valz00_3607,
		obj_t BgL_bucketz00_3608)
	{
		{	/* Llib/weakhash.scm 333 */
			{	/* Llib/weakhash.scm 334 */
				obj_t BgL_tablez00_3604;
				obj_t BgL_keyz00_3605;

				BgL_tablez00_3604 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_3603, (int) (((long) 0))));
				BgL_keyz00_3605 = PROCEDURE_L_REF(BgL_envz00_3603, (int) (((long) 1)));
				{	/* Llib/weakhash.scm 334 */
					bool_t BgL_test2404z00_4547;

					{	/* Llib/weakhash.scm 334 */
						obj_t BgL_eqtz00_3728;

						BgL_eqtz00_3728 = STRUCT_REF(BgL_tablez00_3604, (int) (((long) 3)));
						if (PROCEDUREP(BgL_eqtz00_3728))
							{	/* Llib/weakhash.scm 334 */
								BgL_test2404z00_4547 =
									CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_3728) (BgL_eqtz00_3728,
										BgL_keyz00_3605, BgL_bkeyz00_3606, BEOA));
							}
						else
							{	/* Llib/weakhash.scm 334 */
								if ((BgL_keyz00_3605 == BgL_bkeyz00_3606))
									{	/* Llib/weakhash.scm 334 */
										BgL_test2404z00_4547 = ((bool_t) 1);
									}
								else
									{	/* Llib/weakhash.scm 334 */
										if (STRINGP(BgL_keyz00_3605))
											{	/* Llib/weakhash.scm 334 */
												if (STRINGP(BgL_bkeyz00_3606))
													{	/* Llib/weakhash.scm 334 */
														bool_t BgL_res1990z00_3729;

														{	/* Llib/weakhash.scm 334 */
															long BgL_l1z00_3730;

															BgL_l1z00_3730 = STRING_LENGTH(BgL_keyz00_3605);
															if (
																(BgL_l1z00_3730 ==
																	STRING_LENGTH(BgL_bkeyz00_3606)))
																{	/* Llib/weakhash.scm 334 */
																	int BgL_arg1644z00_3731;

																	{	/* Llib/weakhash.scm 334 */
																		char *BgL_auxz00_4570;
																		char *BgL_tmpz00_4568;

																		BgL_auxz00_4570 =
																			BSTRING_TO_STRING(BgL_bkeyz00_3606);
																		BgL_tmpz00_4568 =
																			BSTRING_TO_STRING(BgL_keyz00_3605);
																		BgL_arg1644z00_3731 =
																			memcmp(BgL_tmpz00_4568, BgL_auxz00_4570,
																			BgL_l1z00_3730);
																	}
																	BgL_res1990z00_3729 =
																		(
																		(long) (BgL_arg1644z00_3731) == ((long) 0));
																}
															else
																{	/* Llib/weakhash.scm 334 */
																	BgL_res1990z00_3729 = ((bool_t) 0);
																}
														}
														BgL_test2404z00_4547 = BgL_res1990z00_3729;
													}
												else
													{	/* Llib/weakhash.scm 334 */
														BgL_test2404z00_4547 = ((bool_t) 0);
													}
											}
										else
											{	/* Llib/weakhash.scm 334 */
												BgL_test2404z00_4547 = ((bool_t) 0);
											}
									}
							}
					}
					if (BgL_test2404z00_4547)
						{	/* Llib/weakhash.scm 334 */
							return BTRUE;
						}
					else
						{	/* Llib/weakhash.scm 334 */
							return BGl_keepgoingz00zz__weakhashz00;
						}
				}
			}
		}

	}



/* weak-hashtable-get */
	BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2getz00zz__weakhashz00(obj_t
		BgL_tablez00_68, obj_t BgL_keyz00_69)
	{
		{	/* Llib/weakhash.scm 342 */
			{	/* Llib/weakhash.scm 343 */
				obj_t BgL_bucketsz00_1477;

				BgL_bucketsz00_1477 = STRUCT_REF(BgL_tablez00_68, (int) (((long) 2)));
				{	/* Llib/weakhash.scm 344 */
					long BgL_bucketzd2numzd2_1479;

					{	/* Llib/weakhash.scm 345 */
						long BgL_arg1422z00_1489;

						{	/* Llib/weakhash.scm 345 */
							long BgL_res1995z00_2627;

							{	/* Llib/weakhash.scm 345 */
								obj_t BgL_hashnz00_2615;

								BgL_hashnz00_2615 =
									STRUCT_REF(BgL_tablez00_68, (int) (((long) 4)));
								if (PROCEDUREP(BgL_hashnz00_2615))
									{	/* Llib/weakhash.scm 345 */
										obj_t BgL_arg1232z00_2617;

										BgL_arg1232z00_2617 =
											PROCEDURE_ENTRY(BgL_hashnz00_2615) (BgL_hashnz00_2615,
											BgL_keyz00_69, BEOA);
										{	/* Llib/weakhash.scm 345 */
											long BgL_nz00_2620;

											BgL_nz00_2620 = (long) CINT(BgL_arg1232z00_2617);
											if ((BgL_nz00_2620 < ((long) 0)))
												{	/* Llib/weakhash.scm 345 */
													BgL_res1995z00_2627 = NEG(BgL_nz00_2620);
												}
											else
												{	/* Llib/weakhash.scm 345 */
													BgL_res1995z00_2627 = BgL_nz00_2620;
												}
										}
									}
								else
									{	/* Llib/weakhash.scm 345 */
										BgL_res1995z00_2627 =
											BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_69);
									}
							}
							BgL_arg1422z00_1489 = BgL_res1995z00_2627;
						}
						{	/* Llib/weakhash.scm 345 */
							long BgL_res2001z00_2646;

							{	/* Llib/weakhash.scm 345 */
								long BgL_n1z00_2628;
								long BgL_n2z00_2629;

								BgL_n1z00_2628 = BgL_arg1422z00_1489;
								BgL_n2z00_2629 = VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1477));
								{	/* Llib/weakhash.scm 345 */
									bool_t BgL_test2412z00_4592;

									{	/* Llib/weakhash.scm 345 */
										long BgL_arg1775z00_2631;

										BgL_arg1775z00_2631 =
											(((BgL_n1z00_2628) | (BgL_n2z00_2629)) & -2147483648);
										BgL_test2412z00_4592 = (BgL_arg1775z00_2631 == ((long) 0));
									}
									if (BgL_test2412z00_4592)
										{	/* Llib/weakhash.scm 345 */
											int32_t BgL_arg1772z00_2632;

											{	/* Llib/weakhash.scm 345 */
												int32_t BgL_arg1773z00_2633;
												int32_t BgL_arg1774z00_2634;

												{	/* Llib/weakhash.scm 345 */
													int32_t BgL_res1997z00_2638;

													BgL_res1997z00_2638 = (int32_t) (BgL_n1z00_2628);
													BgL_arg1773z00_2633 = BgL_res1997z00_2638;
												}
												{	/* Llib/weakhash.scm 345 */
													int32_t BgL_res1998z00_2640;

													BgL_res1998z00_2640 = (int32_t) (BgL_n2z00_2629);
													BgL_arg1774z00_2634 = BgL_res1998z00_2640;
												}
												BgL_arg1772z00_2632 =
													(BgL_arg1773z00_2633 % BgL_arg1774z00_2634);
											}
											{	/* Llib/weakhash.scm 345 */
												long BgL_res2000z00_2645;

												{	/* Llib/weakhash.scm 345 */
													long BgL_arg1879z00_2642;

													BgL_arg1879z00_2642 = (long) (BgL_arg1772z00_2632);
													{	/* Llib/weakhash.scm 345 */
														long BgL_res1999z00_2644;

														BgL_res1999z00_2644 = (long) (BgL_arg1879z00_2642);
														BgL_res2000z00_2645 = BgL_res1999z00_2644;
												}}
												BgL_res2001z00_2646 = BgL_res2000z00_2645;
										}}
									else
										{	/* Llib/weakhash.scm 345 */
											BgL_res2001z00_2646 = (BgL_n1z00_2628 % BgL_n2z00_2629);
										}
								}
							}
							BgL_bucketzd2numzd2_1479 = BgL_res2001z00_2646;
						}
					}
					{	/* Llib/weakhash.scm 345 */
						obj_t BgL_retz00_1480;

						{	/* Llib/weakhash.scm 348 */
							obj_t BgL_zc3z04anonymousza31420ze3z87_3609;

							{
								int BgL_tmpz00_4601;

								BgL_tmpz00_4601 = (int) (((long) 2));
								BgL_zc3z04anonymousza31420ze3z87_3609 =
									MAKE_L_PROCEDURE
									(BGl_z62zc3z04anonymousza31420ze3ze5zz__weakhashz00,
									BgL_tmpz00_4601);
							}
							PROCEDURE_L_SET(BgL_zc3z04anonymousza31420ze3z87_3609,
								(int) (((long) 0)), BgL_tablez00_68);
							PROCEDURE_L_SET(BgL_zc3z04anonymousza31420ze3z87_3609,
								(int) (((long) 1)), BgL_keyz00_69);
							BgL_retz00_1480 =
								BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_68,
								BgL_bucketsz00_1477, BgL_bucketzd2numzd2_1479,
								BgL_zc3z04anonymousza31420ze3z87_3609);
						}
						{	/* Llib/weakhash.scm 346 */

							if ((BgL_retz00_1480 == BGl_keepgoingz00zz__weakhashz00))
								{	/* Llib/weakhash.scm 351 */
									return BFALSE;
								}
							else
								{	/* Llib/weakhash.scm 351 */
									return BgL_retz00_1480;
								}
						}
					}
				}
			}
		}

	}



/* &weak-hashtable-get */
	obj_t BGl_z62weakzd2hashtablezd2getz62zz__weakhashz00(obj_t BgL_envz00_3610,
		obj_t BgL_tablez00_3611, obj_t BgL_keyz00_3612)
	{
		{	/* Llib/weakhash.scm 342 */
			{	/* Llib/weakhash.scm 343 */
				obj_t BgL_auxz00_4611;

				if (STRUCTP(BgL_tablez00_3611))
					{	/* Llib/weakhash.scm 343 */
						BgL_auxz00_4611 = BgL_tablez00_3611;
					}
				else
					{
						obj_t BgL_auxz00_4614;

						BgL_auxz00_4614 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2279z00zz__weakhashz00,
							BINT(((long) 13502)), BGl_string2291z00zz__weakhashz00,
							BGl_string2281z00zz__weakhashz00, BgL_tablez00_3611);
						FAILURE(BgL_auxz00_4614, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2getz00zz__weakhashz00(BgL_auxz00_4611,
					BgL_keyz00_3612);
			}
		}

	}



/* &<@anonymous:1420> */
	obj_t BGl_z62zc3z04anonymousza31420ze3ze5zz__weakhashz00(obj_t
		BgL_envz00_3613, obj_t BgL_bkeyz00_3616, obj_t BgL_valz00_3617,
		obj_t BgL_bucketz00_3618)
	{
		{	/* Llib/weakhash.scm 347 */
			{	/* Llib/weakhash.scm 348 */
				obj_t BgL_tablez00_3614;
				obj_t BgL_keyz00_3615;

				BgL_tablez00_3614 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_3613, (int) (((long) 0))));
				BgL_keyz00_3615 = PROCEDURE_L_REF(BgL_envz00_3613, (int) (((long) 1)));
				{	/* Llib/weakhash.scm 348 */
					bool_t BgL_test2415z00_4624;

					{	/* Llib/weakhash.scm 348 */
						obj_t BgL_eqtz00_3732;

						BgL_eqtz00_3732 = STRUCT_REF(BgL_tablez00_3614, (int) (((long) 3)));
						if (PROCEDUREP(BgL_eqtz00_3732))
							{	/* Llib/weakhash.scm 348 */
								BgL_test2415z00_4624 =
									CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_3732) (BgL_eqtz00_3732,
										BgL_keyz00_3615, BgL_bkeyz00_3616, BEOA));
							}
						else
							{	/* Llib/weakhash.scm 348 */
								if ((BgL_keyz00_3615 == BgL_bkeyz00_3616))
									{	/* Llib/weakhash.scm 348 */
										BgL_test2415z00_4624 = ((bool_t) 1);
									}
								else
									{	/* Llib/weakhash.scm 348 */
										if (STRINGP(BgL_keyz00_3615))
											{	/* Llib/weakhash.scm 348 */
												if (STRINGP(BgL_bkeyz00_3616))
													{	/* Llib/weakhash.scm 348 */
														bool_t BgL_res2009z00_3733;

														{	/* Llib/weakhash.scm 348 */
															long BgL_l1z00_3734;

															BgL_l1z00_3734 = STRING_LENGTH(BgL_keyz00_3615);
															if (
																(BgL_l1z00_3734 ==
																	STRING_LENGTH(BgL_bkeyz00_3616)))
																{	/* Llib/weakhash.scm 348 */
																	int BgL_arg1644z00_3735;

																	{	/* Llib/weakhash.scm 348 */
																		char *BgL_auxz00_4647;
																		char *BgL_tmpz00_4645;

																		BgL_auxz00_4647 =
																			BSTRING_TO_STRING(BgL_bkeyz00_3616);
																		BgL_tmpz00_4645 =
																			BSTRING_TO_STRING(BgL_keyz00_3615);
																		BgL_arg1644z00_3735 =
																			memcmp(BgL_tmpz00_4645, BgL_auxz00_4647,
																			BgL_l1z00_3734);
																	}
																	BgL_res2009z00_3733 =
																		(
																		(long) (BgL_arg1644z00_3735) == ((long) 0));
																}
															else
																{	/* Llib/weakhash.scm 348 */
																	BgL_res2009z00_3733 = ((bool_t) 0);
																}
														}
														BgL_test2415z00_4624 = BgL_res2009z00_3733;
													}
												else
													{	/* Llib/weakhash.scm 348 */
														BgL_test2415z00_4624 = ((bool_t) 0);
													}
											}
										else
											{	/* Llib/weakhash.scm 348 */
												BgL_test2415z00_4624 = ((bool_t) 0);
											}
									}
							}
					}
					if (BgL_test2415z00_4624)
						{	/* Llib/weakhash.scm 348 */
							return BgL_valz00_3617;
						}
					else
						{	/* Llib/weakhash.scm 348 */
							return BGl_keepgoingz00zz__weakhashz00;
						}
				}
			}
		}

	}



/* weak-hashtable-put! */
	BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2putz12z12zz__weakhashz00(obj_t
		BgL_tablez00_72, obj_t BgL_keyz00_73, obj_t BgL_objz00_74)
	{
		{	/* Llib/weakhash.scm 375 */
			{	/* Llib/weakhash.scm 376 */
				obj_t BgL_bucketsz00_1504;

				BgL_bucketsz00_1504 = STRUCT_REF(BgL_tablez00_72, (int) (((long) 2)));
				{	/* Llib/weakhash.scm 377 */
					long BgL_bucketzd2numzd2_1506;

					{	/* Llib/weakhash.scm 378 */
						long BgL_arg1448z00_1533;

						{	/* Llib/weakhash.scm 378 */
							long BgL_res2014z00_2687;

							{	/* Llib/weakhash.scm 378 */
								obj_t BgL_hashnz00_2675;

								BgL_hashnz00_2675 =
									STRUCT_REF(BgL_tablez00_72, (int) (((long) 4)));
								if (PROCEDUREP(BgL_hashnz00_2675))
									{	/* Llib/weakhash.scm 378 */
										obj_t BgL_arg1232z00_2677;

										BgL_arg1232z00_2677 =
											PROCEDURE_ENTRY(BgL_hashnz00_2675) (BgL_hashnz00_2675,
											BgL_keyz00_73, BEOA);
										{	/* Llib/weakhash.scm 378 */
											long BgL_nz00_2680;

											BgL_nz00_2680 = (long) CINT(BgL_arg1232z00_2677);
											if ((BgL_nz00_2680 < ((long) 0)))
												{	/* Llib/weakhash.scm 378 */
													BgL_res2014z00_2687 = NEG(BgL_nz00_2680);
												}
											else
												{	/* Llib/weakhash.scm 378 */
													BgL_res2014z00_2687 = BgL_nz00_2680;
												}
										}
									}
								else
									{	/* Llib/weakhash.scm 378 */
										BgL_res2014z00_2687 =
											BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_73);
									}
							}
							BgL_arg1448z00_1533 = BgL_res2014z00_2687;
						}
						{	/* Llib/weakhash.scm 378 */
							long BgL_res2020z00_2706;

							{	/* Llib/weakhash.scm 378 */
								long BgL_n1z00_2688;
								long BgL_n2z00_2689;

								BgL_n1z00_2688 = BgL_arg1448z00_1533;
								BgL_n2z00_2689 = VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1504));
								{	/* Llib/weakhash.scm 378 */
									bool_t BgL_test2423z00_4669;

									{	/* Llib/weakhash.scm 378 */
										long BgL_arg1775z00_2691;

										BgL_arg1775z00_2691 =
											(((BgL_n1z00_2688) | (BgL_n2z00_2689)) & -2147483648);
										BgL_test2423z00_4669 = (BgL_arg1775z00_2691 == ((long) 0));
									}
									if (BgL_test2423z00_4669)
										{	/* Llib/weakhash.scm 378 */
											int32_t BgL_arg1772z00_2692;

											{	/* Llib/weakhash.scm 378 */
												int32_t BgL_arg1773z00_2693;
												int32_t BgL_arg1774z00_2694;

												{	/* Llib/weakhash.scm 378 */
													int32_t BgL_res2016z00_2698;

													BgL_res2016z00_2698 = (int32_t) (BgL_n1z00_2688);
													BgL_arg1773z00_2693 = BgL_res2016z00_2698;
												}
												{	/* Llib/weakhash.scm 378 */
													int32_t BgL_res2017z00_2700;

													BgL_res2017z00_2700 = (int32_t) (BgL_n2z00_2689);
													BgL_arg1774z00_2694 = BgL_res2017z00_2700;
												}
												BgL_arg1772z00_2692 =
													(BgL_arg1773z00_2693 % BgL_arg1774z00_2694);
											}
											{	/* Llib/weakhash.scm 378 */
												long BgL_res2019z00_2705;

												{	/* Llib/weakhash.scm 378 */
													long BgL_arg1879z00_2702;

													BgL_arg1879z00_2702 = (long) (BgL_arg1772z00_2692);
													{	/* Llib/weakhash.scm 378 */
														long BgL_res2018z00_2704;

														BgL_res2018z00_2704 = (long) (BgL_arg1879z00_2702);
														BgL_res2019z00_2705 = BgL_res2018z00_2704;
												}}
												BgL_res2020z00_2706 = BgL_res2019z00_2705;
										}}
									else
										{	/* Llib/weakhash.scm 378 */
											BgL_res2020z00_2706 = (BgL_n1z00_2688 % BgL_n2z00_2689);
										}
								}
							}
							BgL_bucketzd2numzd2_1506 = BgL_res2020z00_2706;
						}
					}
					{	/* Llib/weakhash.scm 378 */
						obj_t BgL_bucketz00_1507;

						BgL_bucketz00_1507 =
							VECTOR_REF(
							((obj_t) BgL_bucketsz00_1504), BgL_bucketzd2numzd2_1506);
						{	/* Llib/weakhash.scm 379 */
							obj_t BgL_maxzd2bucketzd2lenz00_1508;

							BgL_maxzd2bucketzd2lenz00_1508 =
								STRUCT_REF(BgL_tablez00_72, (int) (((long) 1)));
							{	/* Llib/weakhash.scm 380 */
								obj_t BgL_countz00_3633;

								BgL_countz00_3633 = MAKE_CELL(BINT(((long) 0)));
								{	/* Llib/weakhash.scm 381 */
									obj_t BgL_foundz00_1510;

									{	/* Llib/weakhash.scm 386 */
										obj_t BgL_zc3z04anonymousza31443ze3z87_3619;

										{
											int BgL_tmpz00_4683;

											BgL_tmpz00_4683 = (int) (((long) 4));
											BgL_zc3z04anonymousza31443ze3z87_3619 =
												MAKE_L_PROCEDURE
												(BGl_z62zc3z04anonymousza31443ze3ze5zz__weakhashz00,
												BgL_tmpz00_4683);
										}
										PROCEDURE_L_SET(BgL_zc3z04anonymousza31443ze3z87_3619,
											(int) (((long) 0)), ((obj_t) BgL_countz00_3633));
										PROCEDURE_L_SET(BgL_zc3z04anonymousza31443ze3z87_3619,
											(int) (((long) 1)), BgL_objz00_74);
										PROCEDURE_L_SET(BgL_zc3z04anonymousza31443ze3z87_3619,
											(int) (((long) 2)), BgL_tablez00_72);
										PROCEDURE_L_SET(BgL_zc3z04anonymousza31443ze3z87_3619,
											(int) (((long) 3)), BgL_keyz00_73);
										BgL_foundz00_1510 =
											BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_72,
											BgL_bucketsz00_1504, BgL_bucketzd2numzd2_1506,
											BgL_zc3z04anonymousza31443ze3z87_3619);
									}
									{	/* Llib/weakhash.scm 383 */

										if ((BgL_foundz00_1510 == BGl_keepgoingz00zz__weakhashz00))
											{	/* Llib/weakhash.scm 397 */
												{	/* Llib/weakhash.scm 400 */
													long BgL_arg1431z00_1512;

													BgL_arg1431z00_1512 =
														(
														(long) CINT(STRUCT_REF(BgL_tablez00_72,
																(int) (((long) 0)))) + ((long) 1));
													{	/* Llib/weakhash.scm 400 */
														obj_t BgL_auxz00_4704;
														int BgL_tmpz00_4702;

														BgL_auxz00_4704 = BINT(BgL_arg1431z00_1512);
														BgL_tmpz00_4702 = (int) (((long) 0));
														STRUCT_SET(BgL_tablez00_72, BgL_tmpz00_4702,
															BgL_auxz00_4704);
												}}
												{	/* Llib/weakhash.scm 402 */
													obj_t BgL_arg1433z00_1514;

													{	/* Llib/weakhash.scm 402 */
														obj_t BgL_arg1434z00_1515;
														obj_t BgL_arg1435z00_1516;

														{	/* Llib/weakhash.scm 402 */
															obj_t BgL_arg1436z00_1517;
															obj_t BgL_arg1437z00_1518;

															if (BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00
																(BgL_tablez00_72))
																{	/* Llib/weakhash.scm 402 */
																	BgL_arg1436z00_1517 =
																		make_weakptr(BgL_keyz00_73);
																}
															else
																{	/* Llib/weakhash.scm 402 */
																	BgL_arg1436z00_1517 = BgL_keyz00_73;
																}
															if (BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00
																(BgL_tablez00_72))
																{	/* Llib/weakhash.scm 405 */
																	BgL_arg1437z00_1518 =
																		make_weakptr(BgL_objz00_74);
																}
															else
																{	/* Llib/weakhash.scm 405 */
																	BgL_arg1437z00_1518 = BgL_objz00_74;
																}
															BgL_arg1434z00_1515 =
																MAKE_YOUNG_PAIR(BgL_arg1436z00_1517,
																BgL_arg1437z00_1518);
														}
														{	/* Llib/weakhash.scm 410 */
															obj_t BgL_arg1440z00_1521;

															BgL_arg1440z00_1521 =
																STRUCT_REF(BgL_tablez00_72, (int) (((long) 2)));
															BgL_arg1435z00_1516 =
																VECTOR_REF(
																((obj_t) BgL_arg1440z00_1521),
																BgL_bucketzd2numzd2_1506);
														}
														BgL_arg1433z00_1514 =
															MAKE_YOUNG_PAIR(BgL_arg1434z00_1515,
															BgL_arg1435z00_1516);
													}
													VECTOR_SET(
														((obj_t) BgL_bucketsz00_1504),
														BgL_bucketzd2numzd2_1506, BgL_arg1433z00_1514);
												}
												if (
													((long) CINT(CELL_REF(BgL_countz00_3633)) >
														(long) CINT(BgL_maxzd2bucketzd2lenz00_1508)))
													{	/* Llib/weakhash.scm 412 */
														BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00
															(BgL_tablez00_72);
													}
												else
													{	/* Llib/weakhash.scm 412 */
														BFALSE;
													}
												return BgL_objz00_74;
											}
										else
											{	/* Llib/weakhash.scm 397 */
												return BgL_foundz00_1510;
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



/* &weak-hashtable-put! */
	obj_t BGl_z62weakzd2hashtablezd2putz12z70zz__weakhashz00(obj_t
		BgL_envz00_3620, obj_t BgL_tablez00_3621, obj_t BgL_keyz00_3622,
		obj_t BgL_objz00_3623)
	{
		{	/* Llib/weakhash.scm 375 */
			{	/* Llib/weakhash.scm 376 */
				obj_t BgL_auxz00_4726;

				if (STRUCTP(BgL_tablez00_3621))
					{	/* Llib/weakhash.scm 376 */
						BgL_auxz00_4726 = BgL_tablez00_3621;
					}
				else
					{
						obj_t BgL_auxz00_4729;

						BgL_auxz00_4729 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2279z00zz__weakhashz00,
							BINT(((long) 14818)), BGl_string2292z00zz__weakhashz00,
							BGl_string2281z00zz__weakhashz00, BgL_tablez00_3621);
						FAILURE(BgL_auxz00_4729, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2putz12z12zz__weakhashz00(BgL_auxz00_4726,
					BgL_keyz00_3622, BgL_objz00_3623);
			}
		}

	}



/* &<@anonymous:1443> */
	obj_t BGl_z62zc3z04anonymousza31443ze3ze5zz__weakhashz00(obj_t
		BgL_envz00_3624, obj_t BgL_bkeyz00_3629, obj_t BgL_valz00_3630,
		obj_t BgL_bucketz00_3631)
	{
		{	/* Llib/weakhash.scm 385 */
			{	/* Llib/weakhash.scm 386 */
				obj_t BgL_countz00_3625;
				obj_t BgL_objz00_3626;
				obj_t BgL_tablez00_3627;
				obj_t BgL_keyz00_3628;

				BgL_countz00_3625 =
					PROCEDURE_L_REF(BgL_envz00_3624, (int) (((long) 0)));
				BgL_objz00_3626 = PROCEDURE_L_REF(BgL_envz00_3624, (int) (((long) 1)));
				BgL_tablez00_3627 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_3624, (int) (((long) 2))));
				BgL_keyz00_3628 = PROCEDURE_L_REF(BgL_envz00_3624, (int) (((long) 3)));
				{	/* Llib/weakhash.scm 386 */
					obj_t BgL_auxz00_3736;

					BgL_auxz00_3736 =
						ADDFX(CELL_REF(BgL_countz00_3625), BINT(((long) 1)));
					CELL_SET(BgL_countz00_3625, BgL_auxz00_3736);
				}
				{	/* Llib/weakhash.scm 387 */
					bool_t BgL_test2429z00_4745;

					{	/* Llib/weakhash.scm 387 */
						obj_t BgL_eqtz00_3737;

						BgL_eqtz00_3737 = STRUCT_REF(BgL_tablez00_3627, (int) (((long) 3)));
						if (PROCEDUREP(BgL_eqtz00_3737))
							{	/* Llib/weakhash.scm 387 */
								BgL_test2429z00_4745 =
									CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_3737) (BgL_eqtz00_3737,
										BgL_bkeyz00_3629, BgL_keyz00_3628, BEOA));
							}
						else
							{	/* Llib/weakhash.scm 387 */
								if ((BgL_bkeyz00_3629 == BgL_keyz00_3628))
									{	/* Llib/weakhash.scm 387 */
										BgL_test2429z00_4745 = ((bool_t) 1);
									}
								else
									{	/* Llib/weakhash.scm 387 */
										if (STRINGP(BgL_bkeyz00_3629))
											{	/* Llib/weakhash.scm 387 */
												if (STRINGP(BgL_keyz00_3628))
													{	/* Llib/weakhash.scm 387 */
														bool_t BgL_res2029z00_3738;

														{	/* Llib/weakhash.scm 387 */
															long BgL_l1z00_3739;

															BgL_l1z00_3739 = STRING_LENGTH(BgL_bkeyz00_3629);
															if (
																(BgL_l1z00_3739 ==
																	STRING_LENGTH(BgL_keyz00_3628)))
																{	/* Llib/weakhash.scm 387 */
																	int BgL_arg1644z00_3740;

																	{	/* Llib/weakhash.scm 387 */
																		char *BgL_auxz00_4768;
																		char *BgL_tmpz00_4766;

																		BgL_auxz00_4768 =
																			BSTRING_TO_STRING(BgL_keyz00_3628);
																		BgL_tmpz00_4766 =
																			BSTRING_TO_STRING(BgL_bkeyz00_3629);
																		BgL_arg1644z00_3740 =
																			memcmp(BgL_tmpz00_4766, BgL_auxz00_4768,
																			BgL_l1z00_3739);
																	}
																	BgL_res2029z00_3738 =
																		(
																		(long) (BgL_arg1644z00_3740) == ((long) 0));
																}
															else
																{	/* Llib/weakhash.scm 387 */
																	BgL_res2029z00_3738 = ((bool_t) 0);
																}
														}
														BgL_test2429z00_4745 = BgL_res2029z00_3738;
													}
												else
													{	/* Llib/weakhash.scm 387 */
														BgL_test2429z00_4745 = ((bool_t) 0);
													}
											}
										else
											{	/* Llib/weakhash.scm 387 */
												BgL_test2429z00_4745 = ((bool_t) 0);
											}
									}
							}
					}
					if (BgL_test2429z00_4745)
						{	/* Llib/weakhash.scm 387 */
							{	/* Llib/weakhash.scm 389 */
								obj_t BgL_arg1445z00_3741;
								obj_t BgL_arg1446z00_3742;

								BgL_arg1445z00_3741 = CAR(((obj_t) BgL_bucketz00_3631));
								if (BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00
									(BgL_tablez00_3627))
									{	/* Llib/weakhash.scm 390 */
										BgL_arg1446z00_3742 = make_weakptr(BgL_objz00_3626);
									}
								else
									{	/* Llib/weakhash.scm 390 */
										BgL_arg1446z00_3742 = BgL_objz00_3626;
									}
								{	/* Llib/weakhash.scm 389 */
									obj_t BgL_tmpz00_4778;

									BgL_tmpz00_4778 = ((obj_t) BgL_arg1445z00_3741);
									SET_CDR(BgL_tmpz00_4778, BgL_arg1446z00_3742);
								}
							}
							return BgL_valz00_3630;
						}
					else
						{	/* Llib/weakhash.scm 387 */
							return BGl_keepgoingz00zz__weakhashz00;
						}
				}
			}
		}

	}



/* weak-hashtable-update! */
	BGL_EXPORTED_DEF obj_t
		BGl_weakzd2hashtablezd2updatez12z12zz__weakhashz00(obj_t BgL_tablez00_75,
		obj_t BgL_keyz00_76, obj_t BgL_procz00_77, obj_t BgL_objz00_78)
	{
		{	/* Llib/weakhash.scm 419 */
			{	/* Llib/weakhash.scm 420 */
				obj_t BgL_bucketsz00_1534;

				BgL_bucketsz00_1534 = STRUCT_REF(BgL_tablez00_75, (int) (((long) 2)));
				{	/* Llib/weakhash.scm 421 */
					long BgL_bucketzd2numzd2_1536;

					{	/* Llib/weakhash.scm 422 */
						long BgL_arg1468z00_1564;

						{	/* Llib/weakhash.scm 422 */
							long BgL_res2039z00_2772;

							{	/* Llib/weakhash.scm 422 */
								obj_t BgL_hashnz00_2760;

								BgL_hashnz00_2760 =
									STRUCT_REF(BgL_tablez00_75, (int) (((long) 4)));
								if (PROCEDUREP(BgL_hashnz00_2760))
									{	/* Llib/weakhash.scm 422 */
										obj_t BgL_arg1232z00_2762;

										BgL_arg1232z00_2762 =
											PROCEDURE_ENTRY(BgL_hashnz00_2760) (BgL_hashnz00_2760,
											BgL_keyz00_76, BEOA);
										{	/* Llib/weakhash.scm 422 */
											long BgL_nz00_2765;

											BgL_nz00_2765 = (long) CINT(BgL_arg1232z00_2762);
											if ((BgL_nz00_2765 < ((long) 0)))
												{	/* Llib/weakhash.scm 422 */
													BgL_res2039z00_2772 = NEG(BgL_nz00_2765);
												}
											else
												{	/* Llib/weakhash.scm 422 */
													BgL_res2039z00_2772 = BgL_nz00_2765;
												}
										}
									}
								else
									{	/* Llib/weakhash.scm 422 */
										BgL_res2039z00_2772 =
											BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_76);
									}
							}
							BgL_arg1468z00_1564 = BgL_res2039z00_2772;
						}
						{	/* Llib/weakhash.scm 422 */
							long BgL_res2045z00_2791;

							{	/* Llib/weakhash.scm 422 */
								long BgL_n1z00_2773;
								long BgL_n2z00_2774;

								BgL_n1z00_2773 = BgL_arg1468z00_1564;
								BgL_n2z00_2774 = VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1534));
								{	/* Llib/weakhash.scm 422 */
									bool_t BgL_test2438z00_4798;

									{	/* Llib/weakhash.scm 422 */
										long BgL_arg1775z00_2776;

										BgL_arg1775z00_2776 =
											(((BgL_n1z00_2773) | (BgL_n2z00_2774)) & -2147483648);
										BgL_test2438z00_4798 = (BgL_arg1775z00_2776 == ((long) 0));
									}
									if (BgL_test2438z00_4798)
										{	/* Llib/weakhash.scm 422 */
											int32_t BgL_arg1772z00_2777;

											{	/* Llib/weakhash.scm 422 */
												int32_t BgL_arg1773z00_2778;
												int32_t BgL_arg1774z00_2779;

												{	/* Llib/weakhash.scm 422 */
													int32_t BgL_res2041z00_2783;

													BgL_res2041z00_2783 = (int32_t) (BgL_n1z00_2773);
													BgL_arg1773z00_2778 = BgL_res2041z00_2783;
												}
												{	/* Llib/weakhash.scm 422 */
													int32_t BgL_res2042z00_2785;

													BgL_res2042z00_2785 = (int32_t) (BgL_n2z00_2774);
													BgL_arg1774z00_2779 = BgL_res2042z00_2785;
												}
												BgL_arg1772z00_2777 =
													(BgL_arg1773z00_2778 % BgL_arg1774z00_2779);
											}
											{	/* Llib/weakhash.scm 422 */
												long BgL_res2044z00_2790;

												{	/* Llib/weakhash.scm 422 */
													long BgL_arg1879z00_2787;

													BgL_arg1879z00_2787 = (long) (BgL_arg1772z00_2777);
													{	/* Llib/weakhash.scm 422 */
														long BgL_res2043z00_2789;

														BgL_res2043z00_2789 = (long) (BgL_arg1879z00_2787);
														BgL_res2044z00_2790 = BgL_res2043z00_2789;
												}}
												BgL_res2045z00_2791 = BgL_res2044z00_2790;
										}}
									else
										{	/* Llib/weakhash.scm 422 */
											BgL_res2045z00_2791 = (BgL_n1z00_2773 % BgL_n2z00_2774);
										}
								}
							}
							BgL_bucketzd2numzd2_1536 = BgL_res2045z00_2791;
						}
					}
					{	/* Llib/weakhash.scm 422 */
						obj_t BgL_bucketz00_1537;

						BgL_bucketz00_1537 =
							VECTOR_REF(
							((obj_t) BgL_bucketsz00_1534), BgL_bucketzd2numzd2_1536);
						{	/* Llib/weakhash.scm 423 */
							obj_t BgL_maxzd2bucketzd2lenz00_1538;

							BgL_maxzd2bucketzd2lenz00_1538 =
								STRUCT_REF(BgL_tablez00_75, (int) (((long) 1)));
							{	/* Llib/weakhash.scm 424 */
								obj_t BgL_countz00_3650;

								BgL_countz00_3650 = MAKE_CELL(BINT(((long) 0)));
								{	/* Llib/weakhash.scm 425 */
									obj_t BgL_foundz00_1540;

									{	/* Llib/weakhash.scm 430 */
										obj_t BgL_zc3z04anonymousza31463ze3z87_3635;

										{
											int BgL_tmpz00_4812;

											BgL_tmpz00_4812 = (int) (((long) 4));
											BgL_zc3z04anonymousza31463ze3z87_3635 =
												MAKE_L_PROCEDURE
												(BGl_z62zc3z04anonymousza31463ze3ze5zz__weakhashz00,
												BgL_tmpz00_4812);
										}
										PROCEDURE_L_SET(BgL_zc3z04anonymousza31463ze3z87_3635,
											(int) (((long) 0)), ((obj_t) BgL_countz00_3650));
										PROCEDURE_L_SET(BgL_zc3z04anonymousza31463ze3z87_3635,
											(int) (((long) 1)), BgL_procz00_77);
										PROCEDURE_L_SET(BgL_zc3z04anonymousza31463ze3z87_3635,
											(int) (((long) 2)), BgL_tablez00_75);
										PROCEDURE_L_SET(BgL_zc3z04anonymousza31463ze3z87_3635,
											(int) (((long) 3)), BgL_keyz00_76);
										BgL_foundz00_1540 =
											BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_75,
											BgL_bucketsz00_1534, BgL_bucketzd2numzd2_1536,
											BgL_zc3z04anonymousza31463ze3z87_3635);
									}
									{	/* Llib/weakhash.scm 427 */

										if ((BgL_foundz00_1540 == BGl_keepgoingz00zz__weakhashz00))
											{	/* Llib/weakhash.scm 441 */
												{	/* Llib/weakhash.scm 444 */
													long BgL_arg1451z00_1542;

													BgL_arg1451z00_1542 =
														(
														(long) CINT(STRUCT_REF(BgL_tablez00_75,
																(int) (((long) 0)))) + ((long) 1));
													{	/* Llib/weakhash.scm 444 */
														obj_t BgL_auxz00_4833;
														int BgL_tmpz00_4831;

														BgL_auxz00_4833 = BINT(BgL_arg1451z00_1542);
														BgL_tmpz00_4831 = (int) (((long) 0));
														STRUCT_SET(BgL_tablez00_75, BgL_tmpz00_4831,
															BgL_auxz00_4833);
												}}
												{	/* Llib/weakhash.scm 446 */
													obj_t BgL_arg1453z00_1544;

													{	/* Llib/weakhash.scm 446 */
														obj_t BgL_arg1454z00_1545;
														obj_t BgL_arg1455z00_1546;

														{	/* Llib/weakhash.scm 446 */
															obj_t BgL_arg1456z00_1547;
															obj_t BgL_arg1457z00_1548;

															if (BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00
																(BgL_tablez00_75))
																{	/* Llib/weakhash.scm 446 */
																	BgL_arg1456z00_1547 =
																		make_weakptr(BgL_keyz00_76);
																}
															else
																{	/* Llib/weakhash.scm 446 */
																	BgL_arg1456z00_1547 = BgL_keyz00_76;
																}
															if (BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00
																(BgL_tablez00_75))
																{	/* Llib/weakhash.scm 449 */
																	BgL_arg1457z00_1548 =
																		make_weakptr(BgL_objz00_78);
																}
															else
																{	/* Llib/weakhash.scm 449 */
																	BgL_arg1457z00_1548 = BgL_objz00_78;
																}
															BgL_arg1454z00_1545 =
																MAKE_YOUNG_PAIR(BgL_arg1456z00_1547,
																BgL_arg1457z00_1548);
														}
														{	/* Llib/weakhash.scm 454 */
															obj_t BgL_arg1460z00_1551;

															BgL_arg1460z00_1551 =
																STRUCT_REF(BgL_tablez00_75, (int) (((long) 2)));
															BgL_arg1455z00_1546 =
																VECTOR_REF(
																((obj_t) BgL_arg1460z00_1551),
																BgL_bucketzd2numzd2_1536);
														}
														BgL_arg1453z00_1544 =
															MAKE_YOUNG_PAIR(BgL_arg1454z00_1545,
															BgL_arg1455z00_1546);
													}
													VECTOR_SET(
														((obj_t) BgL_bucketsz00_1534),
														BgL_bucketzd2numzd2_1536, BgL_arg1453z00_1544);
												}
												if (
													((long) CINT(CELL_REF(BgL_countz00_3650)) >
														(long) CINT(BgL_maxzd2bucketzd2lenz00_1538)))
													{	/* Llib/weakhash.scm 456 */
														BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00
															(BgL_tablez00_75);
													}
												else
													{	/* Llib/weakhash.scm 456 */
														BFALSE;
													}
												return BgL_objz00_78;
											}
										else
											{	/* Llib/weakhash.scm 441 */
												return BgL_foundz00_1540;
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



/* &weak-hashtable-update! */
	obj_t BGl_z62weakzd2hashtablezd2updatez12z70zz__weakhashz00(obj_t
		BgL_envz00_3636, obj_t BgL_tablez00_3637, obj_t BgL_keyz00_3638,
		obj_t BgL_procz00_3639, obj_t BgL_objz00_3640)
	{
		{	/* Llib/weakhash.scm 419 */
			{	/* Llib/weakhash.scm 420 */
				obj_t BgL_auxz00_4862;
				obj_t BgL_auxz00_4855;

				if (PROCEDUREP(BgL_procz00_3639))
					{	/* Llib/weakhash.scm 420 */
						BgL_auxz00_4862 = BgL_procz00_3639;
					}
				else
					{
						obj_t BgL_auxz00_4865;

						BgL_auxz00_4865 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2279z00zz__weakhashz00,
							BINT(((long) 16408)), BGl_string2293z00zz__weakhashz00,
							BGl_string2285z00zz__weakhashz00, BgL_procz00_3639);
						FAILURE(BgL_auxz00_4865, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_tablez00_3637))
					{	/* Llib/weakhash.scm 420 */
						BgL_auxz00_4855 = BgL_tablez00_3637;
					}
				else
					{
						obj_t BgL_auxz00_4858;

						BgL_auxz00_4858 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2279z00zz__weakhashz00,
							BINT(((long) 16408)), BGl_string2293z00zz__weakhashz00,
							BGl_string2281z00zz__weakhashz00, BgL_tablez00_3637);
						FAILURE(BgL_auxz00_4858, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2updatez12z12zz__weakhashz00(BgL_auxz00_4855,
					BgL_keyz00_3638, BgL_auxz00_4862, BgL_objz00_3640);
			}
		}

	}



/* &<@anonymous:1463> */
	obj_t BGl_z62zc3z04anonymousza31463ze3ze5zz__weakhashz00(obj_t
		BgL_envz00_3641, obj_t BgL_bkeyz00_3646, obj_t BgL_valz00_3647,
		obj_t BgL_bucketz00_3648)
	{
		{	/* Llib/weakhash.scm 429 */
			{	/* Llib/weakhash.scm 430 */
				obj_t BgL_countz00_3642;
				obj_t BgL_procz00_3643;
				obj_t BgL_tablez00_3644;
				obj_t BgL_keyz00_3645;

				BgL_countz00_3642 =
					PROCEDURE_L_REF(BgL_envz00_3641, (int) (((long) 0)));
				BgL_procz00_3643 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_3641, (int) (((long) 1))));
				BgL_tablez00_3644 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_3641, (int) (((long) 2))));
				BgL_keyz00_3645 = PROCEDURE_L_REF(BgL_envz00_3641, (int) (((long) 3)));
				{	/* Llib/weakhash.scm 430 */
					obj_t BgL_auxz00_3743;

					BgL_auxz00_3743 =
						ADDFX(CELL_REF(BgL_countz00_3642), BINT(((long) 1)));
					CELL_SET(BgL_countz00_3642, BgL_auxz00_3743);
				}
				{	/* Llib/weakhash.scm 431 */
					bool_t BgL_test2445z00_4882;

					{	/* Llib/weakhash.scm 431 */
						obj_t BgL_eqtz00_3744;

						BgL_eqtz00_3744 = STRUCT_REF(BgL_tablez00_3644, (int) (((long) 3)));
						if (PROCEDUREP(BgL_eqtz00_3744))
							{	/* Llib/weakhash.scm 431 */
								BgL_test2445z00_4882 =
									CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_3744) (BgL_eqtz00_3744,
										BgL_bkeyz00_3646, BgL_keyz00_3645, BEOA));
							}
						else
							{	/* Llib/weakhash.scm 431 */
								if ((BgL_bkeyz00_3646 == BgL_keyz00_3645))
									{	/* Llib/weakhash.scm 431 */
										BgL_test2445z00_4882 = ((bool_t) 1);
									}
								else
									{	/* Llib/weakhash.scm 431 */
										if (STRINGP(BgL_bkeyz00_3646))
											{	/* Llib/weakhash.scm 431 */
												if (STRINGP(BgL_keyz00_3645))
													{	/* Llib/weakhash.scm 431 */
														bool_t BgL_res2054z00_3745;

														{	/* Llib/weakhash.scm 431 */
															long BgL_l1z00_3746;

															BgL_l1z00_3746 = STRING_LENGTH(BgL_bkeyz00_3646);
															if (
																(BgL_l1z00_3746 ==
																	STRING_LENGTH(BgL_keyz00_3645)))
																{	/* Llib/weakhash.scm 431 */
																	int BgL_arg1644z00_3747;

																	{	/* Llib/weakhash.scm 431 */
																		char *BgL_auxz00_4905;
																		char *BgL_tmpz00_4903;

																		BgL_auxz00_4905 =
																			BSTRING_TO_STRING(BgL_keyz00_3645);
																		BgL_tmpz00_4903 =
																			BSTRING_TO_STRING(BgL_bkeyz00_3646);
																		BgL_arg1644z00_3747 =
																			memcmp(BgL_tmpz00_4903, BgL_auxz00_4905,
																			BgL_l1z00_3746);
																	}
																	BgL_res2054z00_3745 =
																		(
																		(long) (BgL_arg1644z00_3747) == ((long) 0));
																}
															else
																{	/* Llib/weakhash.scm 431 */
																	BgL_res2054z00_3745 = ((bool_t) 0);
																}
														}
														BgL_test2445z00_4882 = BgL_res2054z00_3745;
													}
												else
													{	/* Llib/weakhash.scm 431 */
														BgL_test2445z00_4882 = ((bool_t) 0);
													}
											}
										else
											{	/* Llib/weakhash.scm 431 */
												BgL_test2445z00_4882 = ((bool_t) 0);
											}
									}
							}
					}
					if (BgL_test2445z00_4882)
						{	/* Llib/weakhash.scm 432 */
							obj_t BgL_newvalz00_3748;

							BgL_newvalz00_3748 =
								PROCEDURE_ENTRY(BgL_procz00_3643) (BgL_procz00_3643,
								BgL_valz00_3647, BEOA);
							{	/* Llib/weakhash.scm 433 */
								obj_t BgL_arg1465z00_3749;
								obj_t BgL_arg1466z00_3750;

								BgL_arg1465z00_3749 = CAR(((obj_t) BgL_bucketz00_3648));
								if (BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00
									(BgL_tablez00_3644))
									{	/* Llib/weakhash.scm 434 */
										BgL_arg1466z00_3750 = make_weakptr(BgL_newvalz00_3748);
									}
								else
									{	/* Llib/weakhash.scm 434 */
										BgL_arg1466z00_3750 = BgL_newvalz00_3748;
									}
								{	/* Llib/weakhash.scm 433 */
									obj_t BgL_tmpz00_4919;

									BgL_tmpz00_4919 = ((obj_t) BgL_arg1465z00_3749);
									SET_CDR(BgL_tmpz00_4919, BgL_arg1466z00_3750);
								}
							}
							return BgL_newvalz00_3748;
						}
					else
						{	/* Llib/weakhash.scm 431 */
							return BGl_keepgoingz00zz__weakhashz00;
						}
				}
			}
		}

	}



/* weak-hashtable-add! */
	BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2addz12z12zz__weakhashz00(obj_t
		BgL_tablez00_79, obj_t BgL_keyz00_80, obj_t BgL_procz00_81,
		obj_t BgL_objz00_82, obj_t BgL_initz00_83)
	{
		{	/* Llib/weakhash.scm 463 */
			{	/* Llib/weakhash.scm 464 */
				obj_t BgL_bucketsz00_1565;

				BgL_bucketsz00_1565 = STRUCT_REF(BgL_tablez00_79, (int) (((long) 2)));
				{	/* Llib/weakhash.scm 465 */
					long BgL_bucketzd2numzd2_1567;

					{	/* Llib/weakhash.scm 466 */
						long BgL_arg1491z00_1597;

						{	/* Llib/weakhash.scm 466 */
							long BgL_res2064z00_2858;

							{	/* Llib/weakhash.scm 466 */
								obj_t BgL_hashnz00_2846;

								BgL_hashnz00_2846 =
									STRUCT_REF(BgL_tablez00_79, (int) (((long) 4)));
								if (PROCEDUREP(BgL_hashnz00_2846))
									{	/* Llib/weakhash.scm 466 */
										obj_t BgL_arg1232z00_2848;

										BgL_arg1232z00_2848 =
											PROCEDURE_ENTRY(BgL_hashnz00_2846) (BgL_hashnz00_2846,
											BgL_keyz00_80, BEOA);
										{	/* Llib/weakhash.scm 466 */
											long BgL_nz00_2851;

											BgL_nz00_2851 = (long) CINT(BgL_arg1232z00_2848);
											if ((BgL_nz00_2851 < ((long) 0)))
												{	/* Llib/weakhash.scm 466 */
													BgL_res2064z00_2858 = NEG(BgL_nz00_2851);
												}
											else
												{	/* Llib/weakhash.scm 466 */
													BgL_res2064z00_2858 = BgL_nz00_2851;
												}
										}
									}
								else
									{	/* Llib/weakhash.scm 466 */
										BgL_res2064z00_2858 =
											BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_80);
									}
							}
							BgL_arg1491z00_1597 = BgL_res2064z00_2858;
						}
						{	/* Llib/weakhash.scm 466 */
							long BgL_res2070z00_2877;

							{	/* Llib/weakhash.scm 466 */
								long BgL_n1z00_2859;
								long BgL_n2z00_2860;

								BgL_n1z00_2859 = BgL_arg1491z00_1597;
								BgL_n2z00_2860 = VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1565));
								{	/* Llib/weakhash.scm 466 */
									bool_t BgL_test2454z00_4939;

									{	/* Llib/weakhash.scm 466 */
										long BgL_arg1775z00_2862;

										BgL_arg1775z00_2862 =
											(((BgL_n1z00_2859) | (BgL_n2z00_2860)) & -2147483648);
										BgL_test2454z00_4939 = (BgL_arg1775z00_2862 == ((long) 0));
									}
									if (BgL_test2454z00_4939)
										{	/* Llib/weakhash.scm 466 */
											int32_t BgL_arg1772z00_2863;

											{	/* Llib/weakhash.scm 466 */
												int32_t BgL_arg1773z00_2864;
												int32_t BgL_arg1774z00_2865;

												{	/* Llib/weakhash.scm 466 */
													int32_t BgL_res2066z00_2869;

													BgL_res2066z00_2869 = (int32_t) (BgL_n1z00_2859);
													BgL_arg1773z00_2864 = BgL_res2066z00_2869;
												}
												{	/* Llib/weakhash.scm 466 */
													int32_t BgL_res2067z00_2871;

													BgL_res2067z00_2871 = (int32_t) (BgL_n2z00_2860);
													BgL_arg1774z00_2865 = BgL_res2067z00_2871;
												}
												BgL_arg1772z00_2863 =
													(BgL_arg1773z00_2864 % BgL_arg1774z00_2865);
											}
											{	/* Llib/weakhash.scm 466 */
												long BgL_res2069z00_2876;

												{	/* Llib/weakhash.scm 466 */
													long BgL_arg1879z00_2873;

													BgL_arg1879z00_2873 = (long) (BgL_arg1772z00_2863);
													{	/* Llib/weakhash.scm 466 */
														long BgL_res2068z00_2875;

														BgL_res2068z00_2875 = (long) (BgL_arg1879z00_2873);
														BgL_res2069z00_2876 = BgL_res2068z00_2875;
												}}
												BgL_res2070z00_2877 = BgL_res2069z00_2876;
										}}
									else
										{	/* Llib/weakhash.scm 466 */
											BgL_res2070z00_2877 = (BgL_n1z00_2859 % BgL_n2z00_2860);
										}
								}
							}
							BgL_bucketzd2numzd2_1567 = BgL_res2070z00_2877;
						}
					}
					{	/* Llib/weakhash.scm 466 */
						obj_t BgL_bucketz00_1568;

						BgL_bucketz00_1568 =
							VECTOR_REF(
							((obj_t) BgL_bucketsz00_1565), BgL_bucketzd2numzd2_1567);
						{	/* Llib/weakhash.scm 467 */
							obj_t BgL_maxzd2bucketzd2lenz00_1569;

							BgL_maxzd2bucketzd2lenz00_1569 =
								STRUCT_REF(BgL_tablez00_79, (int) (((long) 1)));
							{	/* Llib/weakhash.scm 468 */
								obj_t BgL_countz00_3668;

								BgL_countz00_3668 = MAKE_CELL(BINT(((long) 0)));
								{	/* Llib/weakhash.scm 469 */
									obj_t BgL_foundz00_1571;

									{	/* Llib/weakhash.scm 474 */
										obj_t BgL_zc3z04anonymousza31485ze3z87_3652;

										{
											int BgL_tmpz00_4953;

											BgL_tmpz00_4953 = (int) (((long) 4));
											BgL_zc3z04anonymousza31485ze3z87_3652 =
												MAKE_L_PROCEDURE
												(BGl_z62zc3z04anonymousza31485ze3ze5zz__weakhashz00,
												BgL_tmpz00_4953);
										}
										PROCEDURE_L_SET(BgL_zc3z04anonymousza31485ze3z87_3652,
											(int) (((long) 0)), ((obj_t) BgL_countz00_3668));
										PROCEDURE_L_SET(BgL_zc3z04anonymousza31485ze3z87_3652,
											(int) (((long) 1)), BgL_procz00_81);
										PROCEDURE_L_SET(BgL_zc3z04anonymousza31485ze3z87_3652,
											(int) (((long) 2)), BgL_tablez00_79);
										PROCEDURE_L_SET(BgL_zc3z04anonymousza31485ze3z87_3652,
											(int) (((long) 3)), BgL_keyz00_80);
										BgL_foundz00_1571 =
											BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_79,
											BgL_bucketsz00_1565, BgL_bucketzd2numzd2_1567,
											BgL_zc3z04anonymousza31485ze3z87_3652);
									}
									{	/* Llib/weakhash.scm 471 */

										if ((BgL_foundz00_1571 == BGl_keepgoingz00zz__weakhashz00))
											{	/* Llib/weakhash.scm 487 */
												obj_t BgL_vz00_1573;

												if (BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00
													(BgL_tablez00_79))
													{	/* Llib/weakhash.scm 488 */
														obj_t BgL_arg1480z00_1584;
														obj_t BgL_arg1483z00_1585;

														BgL_arg1480z00_1584 = make_weakptr(BgL_objz00_82);
														BgL_arg1483z00_1585 = make_weakptr(BgL_initz00_83);
														BgL_vz00_1573 =
															PROCEDURE_ENTRY(BgL_procz00_81) (BgL_procz00_81,
															BgL_arg1480z00_1584, BgL_arg1483z00_1585, BEOA);
													}
												else
													{	/* Llib/weakhash.scm 487 */
														BgL_vz00_1573 =
															PROCEDURE_ENTRY(BgL_procz00_81) (BgL_procz00_81,
															BgL_objz00_82, BgL_initz00_83, BEOA);
													}
												{	/* Llib/weakhash.scm 490 */
													long BgL_arg1470z00_1574;

													BgL_arg1470z00_1574 =
														(
														(long) CINT(STRUCT_REF(BgL_tablez00_79,
																(int) (((long) 0)))) + ((long) 1));
													{	/* Llib/weakhash.scm 490 */
														obj_t BgL_auxz00_4988;
														int BgL_tmpz00_4986;

														BgL_auxz00_4988 = BINT(BgL_arg1470z00_1574);
														BgL_tmpz00_4986 = (int) (((long) 0));
														STRUCT_SET(BgL_tablez00_79, BgL_tmpz00_4986,
															BgL_auxz00_4988);
												}}
												{	/* Llib/weakhash.scm 492 */
													obj_t BgL_arg1472z00_1576;

													{	/* Llib/weakhash.scm 492 */
														obj_t BgL_arg1473z00_1577;
														obj_t BgL_arg1474z00_1578;

														{	/* Llib/weakhash.scm 492 */
															obj_t BgL_arg1475z00_1579;

															if (BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00
																(BgL_tablez00_79))
																{	/* Llib/weakhash.scm 492 */
																	BgL_arg1475z00_1579 =
																		make_weakptr(BgL_keyz00_80);
																}
															else
																{	/* Llib/weakhash.scm 492 */
																	BgL_arg1475z00_1579 = BgL_keyz00_80;
																}
															BgL_arg1473z00_1577 =
																MAKE_YOUNG_PAIR(BgL_arg1475z00_1579,
																BgL_vz00_1573);
														}
														{	/* Llib/weakhash.scm 498 */
															obj_t BgL_arg1477z00_1581;

															BgL_arg1477z00_1581 =
																STRUCT_REF(BgL_tablez00_79, (int) (((long) 2)));
															BgL_arg1474z00_1578 =
																VECTOR_REF(
																((obj_t) BgL_arg1477z00_1581),
																BgL_bucketzd2numzd2_1567);
														}
														BgL_arg1472z00_1576 =
															MAKE_YOUNG_PAIR(BgL_arg1473z00_1577,
															BgL_arg1474z00_1578);
													}
													VECTOR_SET(
														((obj_t) BgL_bucketsz00_1565),
														BgL_bucketzd2numzd2_1567, BgL_arg1472z00_1576);
												}
												if (
													((long) CINT(CELL_REF(BgL_countz00_3668)) >
														(long) CINT(BgL_maxzd2bucketzd2lenz00_1569)))
													{	/* Llib/weakhash.scm 500 */
														BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00
															(BgL_tablez00_79);
													}
												else
													{	/* Llib/weakhash.scm 500 */
														BFALSE;
													}
												return BgL_vz00_1573;
											}
										else
											{	/* Llib/weakhash.scm 485 */
												return BgL_foundz00_1571;
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



/* &weak-hashtable-add! */
	obj_t BGl_z62weakzd2hashtablezd2addz12z70zz__weakhashz00(obj_t
		BgL_envz00_3653, obj_t BgL_tablez00_3654, obj_t BgL_keyz00_3655,
		obj_t BgL_procz00_3656, obj_t BgL_objz00_3657, obj_t BgL_initz00_3658)
	{
		{	/* Llib/weakhash.scm 463 */
			{	/* Llib/weakhash.scm 464 */
				obj_t BgL_auxz00_5014;
				obj_t BgL_auxz00_5007;

				if (PROCEDUREP(BgL_procz00_3656))
					{	/* Llib/weakhash.scm 464 */
						BgL_auxz00_5014 = BgL_procz00_3656;
					}
				else
					{
						obj_t BgL_auxz00_5017;

						BgL_auxz00_5017 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2279z00zz__weakhashz00,
							BINT(((long) 18029)), BGl_string2294z00zz__weakhashz00,
							BGl_string2285z00zz__weakhashz00, BgL_procz00_3656);
						FAILURE(BgL_auxz00_5017, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_tablez00_3654))
					{	/* Llib/weakhash.scm 464 */
						BgL_auxz00_5007 = BgL_tablez00_3654;
					}
				else
					{
						obj_t BgL_auxz00_5010;

						BgL_auxz00_5010 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2279z00zz__weakhashz00,
							BINT(((long) 18029)), BGl_string2294z00zz__weakhashz00,
							BGl_string2281z00zz__weakhashz00, BgL_tablez00_3654);
						FAILURE(BgL_auxz00_5010, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2addz12z12zz__weakhashz00(BgL_auxz00_5007,
					BgL_keyz00_3655, BgL_auxz00_5014, BgL_objz00_3657, BgL_initz00_3658);
			}
		}

	}



/* &<@anonymous:1485> */
	obj_t BGl_z62zc3z04anonymousza31485ze3ze5zz__weakhashz00(obj_t
		BgL_envz00_3659, obj_t BgL_bkeyz00_3664, obj_t BgL_valz00_3665,
		obj_t BgL_bucketz00_3666)
	{
		{	/* Llib/weakhash.scm 473 */
			{	/* Llib/weakhash.scm 474 */
				obj_t BgL_countz00_3660;
				obj_t BgL_procz00_3661;
				obj_t BgL_tablez00_3662;
				obj_t BgL_keyz00_3663;

				BgL_countz00_3660 =
					PROCEDURE_L_REF(BgL_envz00_3659, (int) (((long) 0)));
				BgL_procz00_3661 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_3659, (int) (((long) 1))));
				BgL_tablez00_3662 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_3659, (int) (((long) 2))));
				BgL_keyz00_3663 = PROCEDURE_L_REF(BgL_envz00_3659, (int) (((long) 3)));
				{	/* Llib/weakhash.scm 474 */
					obj_t BgL_auxz00_3751;

					BgL_auxz00_3751 =
						ADDFX(CELL_REF(BgL_countz00_3660), BINT(((long) 1)));
					CELL_SET(BgL_countz00_3660, BgL_auxz00_3751);
				}
				{	/* Llib/weakhash.scm 475 */
					bool_t BgL_test2461z00_5034;

					{	/* Llib/weakhash.scm 475 */
						obj_t BgL_eqtz00_3752;

						BgL_eqtz00_3752 = STRUCT_REF(BgL_tablez00_3662, (int) (((long) 3)));
						if (PROCEDUREP(BgL_eqtz00_3752))
							{	/* Llib/weakhash.scm 475 */
								BgL_test2461z00_5034 =
									CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_3752) (BgL_eqtz00_3752,
										BgL_bkeyz00_3664, BgL_keyz00_3663, BEOA));
							}
						else
							{	/* Llib/weakhash.scm 475 */
								if ((BgL_bkeyz00_3664 == BgL_keyz00_3663))
									{	/* Llib/weakhash.scm 475 */
										BgL_test2461z00_5034 = ((bool_t) 1);
									}
								else
									{	/* Llib/weakhash.scm 475 */
										if (STRINGP(BgL_bkeyz00_3664))
											{	/* Llib/weakhash.scm 475 */
												if (STRINGP(BgL_keyz00_3663))
													{	/* Llib/weakhash.scm 475 */
														bool_t BgL_res2079z00_3753;

														{	/* Llib/weakhash.scm 475 */
															long BgL_l1z00_3754;

															BgL_l1z00_3754 = STRING_LENGTH(BgL_bkeyz00_3664);
															if (
																(BgL_l1z00_3754 ==
																	STRING_LENGTH(BgL_keyz00_3663)))
																{	/* Llib/weakhash.scm 475 */
																	int BgL_arg1644z00_3755;

																	{	/* Llib/weakhash.scm 475 */
																		char *BgL_auxz00_5057;
																		char *BgL_tmpz00_5055;

																		BgL_auxz00_5057 =
																			BSTRING_TO_STRING(BgL_keyz00_3663);
																		BgL_tmpz00_5055 =
																			BSTRING_TO_STRING(BgL_bkeyz00_3664);
																		BgL_arg1644z00_3755 =
																			memcmp(BgL_tmpz00_5055, BgL_auxz00_5057,
																			BgL_l1z00_3754);
																	}
																	BgL_res2079z00_3753 =
																		(
																		(long) (BgL_arg1644z00_3755) == ((long) 0));
																}
															else
																{	/* Llib/weakhash.scm 475 */
																	BgL_res2079z00_3753 = ((bool_t) 0);
																}
														}
														BgL_test2461z00_5034 = BgL_res2079z00_3753;
													}
												else
													{	/* Llib/weakhash.scm 475 */
														BgL_test2461z00_5034 = ((bool_t) 0);
													}
											}
										else
											{	/* Llib/weakhash.scm 475 */
												BgL_test2461z00_5034 = ((bool_t) 0);
											}
									}
							}
					}
					if (BgL_test2461z00_5034)
						{	/* Llib/weakhash.scm 476 */
							obj_t BgL_newvalz00_3756;

							BgL_newvalz00_3756 =
								PROCEDURE_ENTRY(BgL_procz00_3661) (BgL_procz00_3661,
								BgL_valz00_3665, BEOA);
							{	/* Llib/weakhash.scm 477 */
								obj_t BgL_arg1487z00_3757;
								obj_t BgL_arg1489z00_3758;

								BgL_arg1487z00_3757 = CAR(((obj_t) BgL_bucketz00_3666));
								if (BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00
									(BgL_tablez00_3662))
									{	/* Llib/weakhash.scm 478 */
										BgL_arg1489z00_3758 = make_weakptr(BgL_newvalz00_3756);
									}
								else
									{	/* Llib/weakhash.scm 478 */
										BgL_arg1489z00_3758 = BgL_newvalz00_3756;
									}
								{	/* Llib/weakhash.scm 477 */
									obj_t BgL_tmpz00_5071;

									BgL_tmpz00_5071 = ((obj_t) BgL_arg1487z00_3757);
									SET_CDR(BgL_tmpz00_5071, BgL_arg1489z00_3758);
								}
							}
							return BgL_newvalz00_3756;
						}
					else
						{	/* Llib/weakhash.scm 475 */
							return BGl_keepgoingz00zz__weakhashz00;
						}
				}
			}
		}

	}



/* weak-hashtable-remove! */
	BGL_EXPORTED_DEF obj_t
		BGl_weakzd2hashtablezd2removez12z12zz__weakhashz00(obj_t BgL_tablez00_84,
		obj_t BgL_keyz00_85)
	{
		{	/* Llib/weakhash.scm 507 */
			{	/* Llib/weakhash.scm 508 */
				obj_t BgL_bucketsz00_1598;

				BgL_bucketsz00_1598 = STRUCT_REF(BgL_tablez00_84, (int) (((long) 2)));
				{	/* Llib/weakhash.scm 509 */
					long BgL_bucketzd2numzd2_1600;

					{	/* Llib/weakhash.scm 510 */
						long BgL_arg1496z00_1611;

						{	/* Llib/weakhash.scm 510 */
							long BgL_res2090z00_2945;

							{	/* Llib/weakhash.scm 510 */
								obj_t BgL_hashnz00_2933;

								BgL_hashnz00_2933 =
									STRUCT_REF(BgL_tablez00_84, (int) (((long) 4)));
								if (PROCEDUREP(BgL_hashnz00_2933))
									{	/* Llib/weakhash.scm 510 */
										obj_t BgL_arg1232z00_2935;

										BgL_arg1232z00_2935 =
											PROCEDURE_ENTRY(BgL_hashnz00_2933) (BgL_hashnz00_2933,
											BgL_keyz00_85, BEOA);
										{	/* Llib/weakhash.scm 510 */
											long BgL_nz00_2938;

											BgL_nz00_2938 = (long) CINT(BgL_arg1232z00_2935);
											if ((BgL_nz00_2938 < ((long) 0)))
												{	/* Llib/weakhash.scm 510 */
													BgL_res2090z00_2945 = NEG(BgL_nz00_2938);
												}
											else
												{	/* Llib/weakhash.scm 510 */
													BgL_res2090z00_2945 = BgL_nz00_2938;
												}
										}
									}
								else
									{	/* Llib/weakhash.scm 510 */
										BgL_res2090z00_2945 =
											BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_85);
									}
							}
							BgL_arg1496z00_1611 = BgL_res2090z00_2945;
						}
						{	/* Llib/weakhash.scm 510 */
							long BgL_res2096z00_2964;

							{	/* Llib/weakhash.scm 510 */
								long BgL_n1z00_2946;
								long BgL_n2z00_2947;

								BgL_n1z00_2946 = BgL_arg1496z00_1611;
								BgL_n2z00_2947 = VECTOR_LENGTH(((obj_t) BgL_bucketsz00_1598));
								{	/* Llib/weakhash.scm 510 */
									bool_t BgL_test2470z00_5091;

									{	/* Llib/weakhash.scm 510 */
										long BgL_arg1775z00_2949;

										BgL_arg1775z00_2949 =
											(((BgL_n1z00_2946) | (BgL_n2z00_2947)) & -2147483648);
										BgL_test2470z00_5091 = (BgL_arg1775z00_2949 == ((long) 0));
									}
									if (BgL_test2470z00_5091)
										{	/* Llib/weakhash.scm 510 */
											int32_t BgL_arg1772z00_2950;

											{	/* Llib/weakhash.scm 510 */
												int32_t BgL_arg1773z00_2951;
												int32_t BgL_arg1774z00_2952;

												{	/* Llib/weakhash.scm 510 */
													int32_t BgL_res2092z00_2956;

													BgL_res2092z00_2956 = (int32_t) (BgL_n1z00_2946);
													BgL_arg1773z00_2951 = BgL_res2092z00_2956;
												}
												{	/* Llib/weakhash.scm 510 */
													int32_t BgL_res2093z00_2958;

													BgL_res2093z00_2958 = (int32_t) (BgL_n2z00_2947);
													BgL_arg1774z00_2952 = BgL_res2093z00_2958;
												}
												BgL_arg1772z00_2950 =
													(BgL_arg1773z00_2951 % BgL_arg1774z00_2952);
											}
											{	/* Llib/weakhash.scm 510 */
												long BgL_res2095z00_2963;

												{	/* Llib/weakhash.scm 510 */
													long BgL_arg1879z00_2960;

													BgL_arg1879z00_2960 = (long) (BgL_arg1772z00_2950);
													{	/* Llib/weakhash.scm 510 */
														long BgL_res2094z00_2962;

														BgL_res2094z00_2962 = (long) (BgL_arg1879z00_2960);
														BgL_res2095z00_2963 = BgL_res2094z00_2962;
												}}
												BgL_res2096z00_2964 = BgL_res2095z00_2963;
										}}
									else
										{	/* Llib/weakhash.scm 510 */
											BgL_res2096z00_2964 = (BgL_n1z00_2946 % BgL_n2z00_2947);
										}
								}
							}
							BgL_bucketzd2numzd2_1600 = BgL_res2096z00_2964;
						}
					}
					{	/* Llib/weakhash.scm 510 */
						obj_t BgL_bucketz00_1601;

						BgL_bucketz00_1601 =
							VECTOR_REF(
							((obj_t) BgL_bucketsz00_1598), BgL_bucketzd2numzd2_1600);
						{	/* Llib/weakhash.scm 511 */
							obj_t BgL_foundz00_1602;

							{	/* Llib/weakhash.scm 515 */
								obj_t BgL_zc3z04anonymousza31494ze3z87_3670;

								{
									int BgL_tmpz00_5102;

									BgL_tmpz00_5102 = (int) (((long) 2));
									BgL_zc3z04anonymousza31494ze3z87_3670 =
										MAKE_L_PROCEDURE
										(BGl_z62zc3z04anonymousza31494ze3ze5zz__weakhashz00,
										BgL_tmpz00_5102);
								}
								PROCEDURE_L_SET(BgL_zc3z04anonymousza31494ze3z87_3670,
									(int) (((long) 0)), BgL_tablez00_84);
								PROCEDURE_L_SET(BgL_zc3z04anonymousza31494ze3z87_3670,
									(int) (((long) 1)), BgL_keyz00_85);
								BgL_foundz00_1602 =
									BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_84,
									BgL_bucketsz00_1598, BgL_bucketzd2numzd2_1600,
									BgL_zc3z04anonymousza31494ze3z87_3670);
							}
							{	/* Llib/weakhash.scm 512 */

								if ((BgL_foundz00_1602 == BGl_keepgoingz00zz__weakhashz00))
									{	/* Llib/weakhash.scm 518 */
										return BFALSE;
									}
								else
									{	/* Llib/weakhash.scm 518 */
										return BTRUE;
									}
							}
						}
					}
				}
			}
		}

	}



/* &weak-hashtable-remove! */
	obj_t BGl_z62weakzd2hashtablezd2removez12z70zz__weakhashz00(obj_t
		BgL_envz00_3671, obj_t BgL_tablez00_3672, obj_t BgL_keyz00_3673)
	{
		{	/* Llib/weakhash.scm 507 */
			{	/* Llib/weakhash.scm 508 */
				obj_t BgL_auxz00_5112;

				if (STRUCTP(BgL_tablez00_3672))
					{	/* Llib/weakhash.scm 508 */
						BgL_auxz00_5112 = BgL_tablez00_3672;
					}
				else
					{
						obj_t BgL_auxz00_5115;

						BgL_auxz00_5115 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2279z00zz__weakhashz00,
							BINT(((long) 19675)), BGl_string2295z00zz__weakhashz00,
							BGl_string2281z00zz__weakhashz00, BgL_tablez00_3672);
						FAILURE(BgL_auxz00_5115, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2removez12z12zz__weakhashz00(BgL_auxz00_5112,
					BgL_keyz00_3673);
			}
		}

	}



/* &<@anonymous:1494> */
	obj_t BGl_z62zc3z04anonymousza31494ze3ze5zz__weakhashz00(obj_t
		BgL_envz00_3674, obj_t BgL_bkeyz00_3677, obj_t BgL_valz00_3678,
		obj_t BgL_bucketz00_3679)
	{
		{	/* Llib/weakhash.scm 514 */
			{	/* Llib/weakhash.scm 515 */
				obj_t BgL_tablez00_3675;
				obj_t BgL_keyz00_3676;

				BgL_tablez00_3675 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_3674, (int) (((long) 0))));
				BgL_keyz00_3676 = PROCEDURE_L_REF(BgL_envz00_3674, (int) (((long) 1)));
				{	/* Llib/weakhash.scm 515 */
					bool_t BgL_test2473z00_5125;

					{	/* Llib/weakhash.scm 515 */
						obj_t BgL_eqtz00_3759;

						BgL_eqtz00_3759 = STRUCT_REF(BgL_tablez00_3675, (int) (((long) 3)));
						if (PROCEDUREP(BgL_eqtz00_3759))
							{	/* Llib/weakhash.scm 515 */
								BgL_test2473z00_5125 =
									CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_3759) (BgL_eqtz00_3759,
										BgL_keyz00_3676, BgL_bkeyz00_3677, BEOA));
							}
						else
							{	/* Llib/weakhash.scm 515 */
								if ((BgL_keyz00_3676 == BgL_bkeyz00_3677))
									{	/* Llib/weakhash.scm 515 */
										BgL_test2473z00_5125 = ((bool_t) 1);
									}
								else
									{	/* Llib/weakhash.scm 515 */
										if (STRINGP(BgL_keyz00_3676))
											{	/* Llib/weakhash.scm 515 */
												if (STRINGP(BgL_bkeyz00_3677))
													{	/* Llib/weakhash.scm 515 */
														bool_t BgL_res2104z00_3760;

														{	/* Llib/weakhash.scm 515 */
															long BgL_l1z00_3761;

															BgL_l1z00_3761 = STRING_LENGTH(BgL_keyz00_3676);
															if (
																(BgL_l1z00_3761 ==
																	STRING_LENGTH(BgL_bkeyz00_3677)))
																{	/* Llib/weakhash.scm 515 */
																	int BgL_arg1644z00_3762;

																	{	/* Llib/weakhash.scm 515 */
																		char *BgL_auxz00_5148;
																		char *BgL_tmpz00_5146;

																		BgL_auxz00_5148 =
																			BSTRING_TO_STRING(BgL_bkeyz00_3677);
																		BgL_tmpz00_5146 =
																			BSTRING_TO_STRING(BgL_keyz00_3676);
																		BgL_arg1644z00_3762 =
																			memcmp(BgL_tmpz00_5146, BgL_auxz00_5148,
																			BgL_l1z00_3761);
																	}
																	BgL_res2104z00_3760 =
																		(
																		(long) (BgL_arg1644z00_3762) == ((long) 0));
																}
															else
																{	/* Llib/weakhash.scm 515 */
																	BgL_res2104z00_3760 = ((bool_t) 0);
																}
														}
														BgL_test2473z00_5125 = BgL_res2104z00_3760;
													}
												else
													{	/* Llib/weakhash.scm 515 */
														BgL_test2473z00_5125 = ((bool_t) 0);
													}
											}
										else
											{	/* Llib/weakhash.scm 515 */
												BgL_test2473z00_5125 = ((bool_t) 0);
											}
									}
							}
					}
					if (BgL_test2473z00_5125)
						{	/* Llib/weakhash.scm 515 */
							return BGl_removestopz00zz__weakhashz00;
						}
					else
						{	/* Llib/weakhash.scm 515 */
							return BGl_keepgoingz00zz__weakhashz00;
						}
				}
			}
		}

	}



/* weak-hashtable-expand! */
	BGL_EXPORTED_DEF obj_t
		BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00(obj_t BgL_tablez00_86)
	{
		{	/* Llib/weakhash.scm 523 */
			if (
				(((long) 1) ==
					(long) CINT(STRUCT_REF(BgL_tablez00_86, (int) (((long) 5))))))
				{	/* Llib/weakhash.scm 524 */
					obj_t BgL_oldzd2buckszd2_1614;

					BgL_oldzd2buckszd2_1614 =
						STRUCT_REF(BgL_tablez00_86, (int) (((long) 2)));
					{	/* Llib/weakhash.scm 524 */
						long BgL_newzd2buckszd2lenz00_1616;

						BgL_newzd2buckszd2lenz00_1616 =
							(((long) 2) * VECTOR_LENGTH(((obj_t) BgL_oldzd2buckszd2_1614)));
						{	/* Llib/weakhash.scm 524 */
							obj_t BgL_newzd2buckszd2_1617;

							BgL_newzd2buckszd2_1617 =
								make_vector(BgL_newzd2buckszd2lenz00_1616, BNIL);
							{	/* Llib/weakhash.scm 524 */
								obj_t BgL_countz00_1618;

								BgL_countz00_1618 =
									STRUCT_REF(BgL_tablez00_86, (int) (((long) 0)));
								{	/* Llib/weakhash.scm 524 */

									{	/* Llib/weakhash.scm 524 */
										obj_t BgL_nmaxz00_1619;

										BgL_nmaxz00_1619 =
											BGl_2za2za2zz__r4_numbers_6_5z00(STRUCT_REF
											(BgL_tablez00_86, (int) (((long) 1))),
											STRUCT_REF(BgL_tablez00_86, (int) (((long) 7))));
										{	/* Llib/weakhash.scm 524 */
											obj_t BgL_arg1500z00_1620;

											if (REALP(BgL_nmaxz00_1619))
												{	/* Llib/weakhash.scm 524 */
													BgL_arg1500z00_1620 =
														BINT((long) (REAL_TO_DOUBLE(BgL_nmaxz00_1619)));
												}
											else
												{	/* Llib/weakhash.scm 524 */
													BgL_arg1500z00_1620 = BgL_nmaxz00_1619;
												}
											{	/* Llib/weakhash.scm 524 */
												int BgL_tmpz00_5176;

												BgL_tmpz00_5176 = (int) (((long) 1));
												STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_5176,
													BgL_arg1500z00_1620);
									}}}
									{	/* Llib/weakhash.scm 524 */
										int BgL_tmpz00_5179;

										BgL_tmpz00_5179 = (int) (((long) 2));
										STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_5179,
											BgL_newzd2buckszd2_1617);
									}
									{
										long BgL_iz00_1625;

										BgL_iz00_1625 = ((long) 0);
									BgL_zc3z04anonymousza31506ze3z87_1626:
										if (
											(BgL_iz00_1625 <
												VECTOR_LENGTH(((obj_t) BgL_oldzd2buckszd2_1614))))
											{	/* Llib/weakhash.scm 524 */
												{	/* Llib/weakhash.scm 524 */
													obj_t BgL_g1108z00_1628;

													BgL_g1108z00_1628 =
														VECTOR_REF(
														((obj_t) BgL_oldzd2buckszd2_1614), BgL_iz00_1625);
													{
														obj_t BgL_l1106z00_1630;

														BgL_l1106z00_1630 = BgL_g1108z00_1628;
													BgL_zc3z04anonymousza31508ze3z87_1631:
														if (PAIRP(BgL_l1106z00_1630))
															{	/* Llib/weakhash.scm 524 */
																{	/* Llib/weakhash.scm 542 */
																	obj_t BgL_cellz00_1633;

																	BgL_cellz00_1633 = CAR(BgL_l1106z00_1630);
																	{	/* Llib/weakhash.scm 542 */
																		obj_t BgL_keyz00_1634;

																		{	/* Llib/weakhash.scm 542 */
																			obj_t BgL_arg1514z00_1640;

																			BgL_arg1514z00_1640 =
																				CAR(((obj_t) BgL_cellz00_1633));
																			BgL_keyz00_1634 =
																				weakptr_data(
																				((obj_t) BgL_arg1514z00_1640));
																		}
																		if ((BgL_keyz00_1634 == BUNSPEC))
																			{	/* Llib/weakhash.scm 543 */
																				BgL_countz00_1618 =
																					SUBFX(BgL_countz00_1618,
																					BINT(((long) 1)));
																			}
																		else
																			{	/* Llib/weakhash.scm 545 */
																				long BgL_hz00_1636;

																				{	/* Llib/weakhash.scm 546 */
																					long BgL_arg1513z00_1639;

																					{	/* Llib/weakhash.scm 546 */
																						long BgL_res2116z00_3031;

																						{	/* Llib/weakhash.scm 546 */
																							obj_t BgL_hashnz00_3019;

																							BgL_hashnz00_3019 =
																								STRUCT_REF(BgL_tablez00_86,
																								(int) (((long) 4)));
																							if (PROCEDUREP(BgL_hashnz00_3019))
																								{	/* Llib/weakhash.scm 546 */
																									obj_t BgL_arg1232z00_3021;

																									BgL_arg1232z00_3021 =
																										PROCEDURE_ENTRY
																										(BgL_hashnz00_3019)
																										(BgL_hashnz00_3019,
																										BgL_keyz00_1634, BEOA);
																									{	/* Llib/weakhash.scm 546 */
																										long BgL_nz00_3024;

																										BgL_nz00_3024 =
																											(long)
																											CINT(BgL_arg1232z00_3021);
																										if ((BgL_nz00_3024 <
																												((long) 0)))
																											{	/* Llib/weakhash.scm 546 */
																												BgL_res2116z00_3031 =
																													NEG(BgL_nz00_3024);
																											}
																										else
																											{	/* Llib/weakhash.scm 546 */
																												BgL_res2116z00_3031 =
																													BgL_nz00_3024;
																											}
																									}
																								}
																							else
																								{	/* Llib/weakhash.scm 546 */
																									BgL_res2116z00_3031 =
																										BGl_getzd2hashnumberzd2zz__hashz00
																										(BgL_keyz00_1634);
																								}
																						}
																						BgL_arg1513z00_1639 =
																							BgL_res2116z00_3031;
																					}
																					{	/* Llib/weakhash.scm 545 */
																						long BgL_res2122z00_3050;

																						{	/* Llib/weakhash.scm 545 */
																							long BgL_n1z00_3032;
																							long BgL_n2z00_3033;

																							BgL_n1z00_3032 =
																								BgL_arg1513z00_1639;
																							BgL_n2z00_3033 =
																								BgL_newzd2buckszd2lenz00_1616;
																							{	/* Llib/weakhash.scm 545 */
																								bool_t BgL_test2486z00_5212;

																								{	/* Llib/weakhash.scm 545 */
																									long BgL_arg1775z00_3035;

																									BgL_arg1775z00_3035 =
																										(((BgL_n1z00_3032) |
																											(BgL_n2z00_3033)) &
																										-2147483648);
																									BgL_test2486z00_5212 =
																										(BgL_arg1775z00_3035 ==
																										((long) 0));
																								}
																								if (BgL_test2486z00_5212)
																									{	/* Llib/weakhash.scm 545 */
																										int32_t BgL_arg1772z00_3036;

																										{	/* Llib/weakhash.scm 545 */
																											int32_t
																												BgL_arg1773z00_3037;
																											int32_t
																												BgL_arg1774z00_3038;
																											{	/* Llib/weakhash.scm 545 */
																												int32_t
																													BgL_res2118z00_3042;
																												BgL_res2118z00_3042 =
																													(int32_t)
																													(BgL_n1z00_3032);
																												BgL_arg1773z00_3037 =
																													BgL_res2118z00_3042;
																											}
																											{	/* Llib/weakhash.scm 545 */
																												int32_t
																													BgL_res2119z00_3044;
																												BgL_res2119z00_3044 =
																													(int32_t)
																													(BgL_n2z00_3033);
																												BgL_arg1774z00_3038 =
																													BgL_res2119z00_3044;
																											}
																											BgL_arg1772z00_3036 =
																												(BgL_arg1773z00_3037 %
																												BgL_arg1774z00_3038);
																										}
																										{	/* Llib/weakhash.scm 545 */
																											long BgL_res2121z00_3049;

																											{	/* Llib/weakhash.scm 545 */
																												long
																													BgL_arg1879z00_3046;
																												BgL_arg1879z00_3046 =
																													(long)
																													(BgL_arg1772z00_3036);
																												{	/* Llib/weakhash.scm 545 */
																													long
																														BgL_res2120z00_3048;
																													BgL_res2120z00_3048 =
																														(long)
																														(BgL_arg1879z00_3046);
																													BgL_res2121z00_3049 =
																														BgL_res2120z00_3048;
																											}}
																											BgL_res2122z00_3050 =
																												BgL_res2121z00_3049;
																									}}
																								else
																									{	/* Llib/weakhash.scm 545 */
																										BgL_res2122z00_3050 =
																											(BgL_n1z00_3032 %
																											BgL_n2z00_3033);
																									}
																							}
																						}
																						BgL_hz00_1636 = BgL_res2122z00_3050;
																					}
																				}
																				{	/* Llib/weakhash.scm 551 */
																					obj_t BgL_arg1511z00_1637;

																					BgL_arg1511z00_1637 =
																						MAKE_YOUNG_PAIR(BgL_cellz00_1633,
																						VECTOR_REF(BgL_newzd2buckszd2_1617,
																							BgL_hz00_1636));
																					VECTOR_SET(BgL_newzd2buckszd2_1617,
																						BgL_hz00_1636, BgL_arg1511z00_1637);
																				}
																			}
																	}
																}
																{
																	obj_t BgL_l1106z00_5224;

																	BgL_l1106z00_5224 = CDR(BgL_l1106z00_1630);
																	BgL_l1106z00_1630 = BgL_l1106z00_5224;
																	goto BgL_zc3z04anonymousza31508ze3z87_1631;
																}
															}
														else
															{	/* Llib/weakhash.scm 524 */
																((bool_t) 1);
															}
													}
												}
												{
													long BgL_iz00_5226;

													BgL_iz00_5226 = (BgL_iz00_1625 + ((long) 1));
													BgL_iz00_1625 = BgL_iz00_5226;
													goto BgL_zc3z04anonymousza31506ze3z87_1626;
												}
											}
										else
											{	/* Llib/weakhash.scm 524 */
												((bool_t) 0);
											}
									}
									{	/* Llib/weakhash.scm 524 */
										int BgL_tmpz00_5228;

										BgL_tmpz00_5228 = (int) (((long) 0));
										return
											STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_5228,
											BgL_countz00_1618);
									}
								}
							}
						}
					}
				}
			else
				{	/* Llib/weakhash.scm 524 */
					if (
						(((long) 2) ==
							(long) CINT(STRUCT_REF(BgL_tablez00_86, (int) (((long) 5))))))
						{	/* Llib/weakhash.scm 524 */
							obj_t BgL_oldzd2buckszd2_1647;

							BgL_oldzd2buckszd2_1647 =
								STRUCT_REF(BgL_tablez00_86, (int) (((long) 2)));
							{	/* Llib/weakhash.scm 524 */
								long BgL_newzd2buckszd2lenz00_1649;

								BgL_newzd2buckszd2lenz00_1649 =
									(((long) 2) *
									VECTOR_LENGTH(((obj_t) BgL_oldzd2buckszd2_1647)));
								{	/* Llib/weakhash.scm 524 */
									obj_t BgL_newzd2buckszd2_1650;

									BgL_newzd2buckszd2_1650 =
										make_vector(BgL_newzd2buckszd2lenz00_1649, BNIL);
									{	/* Llib/weakhash.scm 524 */
										obj_t BgL_countz00_1651;

										BgL_countz00_1651 =
											STRUCT_REF(BgL_tablez00_86, (int) (((long) 0)));
										{	/* Llib/weakhash.scm 524 */

											{	/* Llib/weakhash.scm 524 */
												obj_t BgL_nmaxz00_1652;

												BgL_nmaxz00_1652 =
													BGl_2za2za2zz__r4_numbers_6_5z00(STRUCT_REF
													(BgL_tablez00_86, (int) (((long) 1))),
													STRUCT_REF(BgL_tablez00_86, (int) (((long) 7))));
												{	/* Llib/weakhash.scm 524 */
													obj_t BgL_arg1520z00_1653;

													if (REALP(BgL_nmaxz00_1652))
														{	/* Llib/weakhash.scm 524 */
															BgL_arg1520z00_1653 =
																BINT((long) (REAL_TO_DOUBLE(BgL_nmaxz00_1652)));
														}
													else
														{	/* Llib/weakhash.scm 524 */
															BgL_arg1520z00_1653 = BgL_nmaxz00_1652;
														}
													{	/* Llib/weakhash.scm 524 */
														int BgL_tmpz00_5254;

														BgL_tmpz00_5254 = (int) (((long) 1));
														STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_5254,
															BgL_arg1520z00_1653);
											}}}
											{	/* Llib/weakhash.scm 524 */
												int BgL_tmpz00_5257;

												BgL_tmpz00_5257 = (int) (((long) 2));
												STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_5257,
													BgL_newzd2buckszd2_1650);
											}
											{
												long BgL_iz00_1658;

												BgL_iz00_1658 = ((long) 0);
											BgL_zc3z04anonymousza31525ze3z87_1659:
												if (
													(BgL_iz00_1658 <
														VECTOR_LENGTH(((obj_t) BgL_oldzd2buckszd2_1647))))
													{	/* Llib/weakhash.scm 524 */
														{	/* Llib/weakhash.scm 524 */
															obj_t BgL_g1111z00_1661;

															BgL_g1111z00_1661 =
																VECTOR_REF(
																((obj_t) BgL_oldzd2buckszd2_1647),
																BgL_iz00_1658);
															{
																obj_t BgL_l1109z00_1663;

																BgL_l1109z00_1663 = BgL_g1111z00_1661;
															BgL_zc3z04anonymousza31527ze3z87_1664:
																if (PAIRP(BgL_l1109z00_1663))
																	{	/* Llib/weakhash.scm 524 */
																		{	/* Llib/weakhash.scm 555 */
																			obj_t BgL_cellz00_1666;

																			BgL_cellz00_1666 = CAR(BgL_l1109z00_1663);
																			{	/* Llib/weakhash.scm 555 */
																				obj_t BgL_dataz00_1667;

																				{	/* Llib/weakhash.scm 555 */
																					obj_t BgL_arg1534z00_1674;

																					BgL_arg1534z00_1674 =
																						CDR(((obj_t) BgL_cellz00_1666));
																					BgL_dataz00_1667 =
																						weakptr_data(
																						((obj_t) BgL_arg1534z00_1674));
																				}
																				if ((BgL_dataz00_1667 == BUNSPEC))
																					{	/* Llib/weakhash.scm 556 */
																						BgL_countz00_1651 =
																							SUBFX(BgL_countz00_1651,
																							BINT(((long) 1)));
																					}
																				else
																					{	/* Llib/weakhash.scm 558 */
																						long BgL_hz00_1669;

																						{	/* Llib/weakhash.scm 560 */
																							long BgL_arg1532z00_1672;

																							{	/* Llib/weakhash.scm 560 */
																								obj_t BgL_arg1533z00_1673;

																								BgL_arg1533z00_1673 =
																									CAR(
																									((obj_t) BgL_cellz00_1666));
																								{	/* Llib/weakhash.scm 559 */
																									long BgL_res2135z00_3099;

																									{	/* Llib/weakhash.scm 559 */
																										obj_t BgL_hashnz00_3087;

																										BgL_hashnz00_3087 =
																											STRUCT_REF
																											(BgL_tablez00_86,
																											(int) (((long) 4)));
																										if (PROCEDUREP
																											(BgL_hashnz00_3087))
																											{	/* Llib/weakhash.scm 559 */
																												obj_t
																													BgL_arg1232z00_3089;
																												BgL_arg1232z00_3089 =
																													PROCEDURE_ENTRY
																													(BgL_hashnz00_3087)
																													(BgL_hashnz00_3087,
																													BgL_arg1533z00_1673,
																													BEOA);
																												{	/* Llib/weakhash.scm 559 */
																													long BgL_nz00_3092;

																													BgL_nz00_3092 =
																														(long)
																														CINT
																														(BgL_arg1232z00_3089);
																													if ((BgL_nz00_3092 <
																															((long) 0)))
																														{	/* Llib/weakhash.scm 559 */
																															BgL_res2135z00_3099
																																=
																																NEG
																																(BgL_nz00_3092);
																														}
																													else
																														{	/* Llib/weakhash.scm 559 */
																															BgL_res2135z00_3099
																																= BgL_nz00_3092;
																														}
																												}
																											}
																										else
																											{	/* Llib/weakhash.scm 559 */
																												BgL_res2135z00_3099 =
																													BGl_getzd2hashnumberzd2zz__hashz00
																													(BgL_arg1533z00_1673);
																											}
																									}
																									BgL_arg1532z00_1672 =
																										BgL_res2135z00_3099;
																								}
																							}
																							{	/* Llib/weakhash.scm 558 */
																								long BgL_res2141z00_3118;

																								{	/* Llib/weakhash.scm 558 */
																									long BgL_n1z00_3100;
																									long BgL_n2z00_3101;

																									BgL_n1z00_3100 =
																										BgL_arg1532z00_1672;
																									BgL_n2z00_3101 =
																										BgL_newzd2buckszd2lenz00_1649;
																									{	/* Llib/weakhash.scm 558 */
																										bool_t BgL_test2494z00_5292;

																										{	/* Llib/weakhash.scm 558 */
																											long BgL_arg1775z00_3103;

																											BgL_arg1775z00_3103 =
																												(((BgL_n1z00_3100) |
																													(BgL_n2z00_3101)) &
																												-2147483648);
																											BgL_test2494z00_5292 =
																												(BgL_arg1775z00_3103 ==
																												((long) 0));
																										}
																										if (BgL_test2494z00_5292)
																											{	/* Llib/weakhash.scm 558 */
																												int32_t
																													BgL_arg1772z00_3104;
																												{	/* Llib/weakhash.scm 558 */
																													int32_t
																														BgL_arg1773z00_3105;
																													int32_t
																														BgL_arg1774z00_3106;
																													{	/* Llib/weakhash.scm 558 */
																														int32_t
																															BgL_res2137z00_3110;
																														BgL_res2137z00_3110
																															=
																															(int32_t)
																															(BgL_n1z00_3100);
																														BgL_arg1773z00_3105
																															=
																															BgL_res2137z00_3110;
																													}
																													{	/* Llib/weakhash.scm 558 */
																														int32_t
																															BgL_res2138z00_3112;
																														BgL_res2138z00_3112
																															=
																															(int32_t)
																															(BgL_n2z00_3101);
																														BgL_arg1774z00_3106
																															=
																															BgL_res2138z00_3112;
																													}
																													BgL_arg1772z00_3104 =
																														(BgL_arg1773z00_3105
																														%
																														BgL_arg1774z00_3106);
																												}
																												{	/* Llib/weakhash.scm 558 */
																													long
																														BgL_res2140z00_3117;
																													{	/* Llib/weakhash.scm 558 */
																														long
																															BgL_arg1879z00_3114;
																														BgL_arg1879z00_3114
																															=
																															(long)
																															(BgL_arg1772z00_3104);
																														{	/* Llib/weakhash.scm 558 */
																															long
																																BgL_res2139z00_3116;
																															BgL_res2139z00_3116
																																=
																																(long)
																																(BgL_arg1879z00_3114);
																															BgL_res2140z00_3117
																																=
																																BgL_res2139z00_3116;
																													}}
																													BgL_res2141z00_3118 =
																														BgL_res2140z00_3117;
																											}}
																										else
																											{	/* Llib/weakhash.scm 558 */
																												BgL_res2141z00_3118 =
																													(BgL_n1z00_3100 %
																													BgL_n2z00_3101);
																											}
																									}
																								}
																								BgL_hz00_1669 =
																									BgL_res2141z00_3118;
																							}
																						}
																						{	/* Llib/weakhash.scm 565 */
																							obj_t BgL_arg1530z00_1670;

																							BgL_arg1530z00_1670 =
																								MAKE_YOUNG_PAIR
																								(BgL_cellz00_1666,
																								VECTOR_REF
																								(BgL_newzd2buckszd2_1650,
																									BgL_hz00_1669));
																							VECTOR_SET
																								(BgL_newzd2buckszd2_1650,
																								BgL_hz00_1669,
																								BgL_arg1530z00_1670);
																						}
																					}
																			}
																		}
																		{
																			obj_t BgL_l1109z00_5304;

																			BgL_l1109z00_5304 =
																				CDR(BgL_l1109z00_1663);
																			BgL_l1109z00_1663 = BgL_l1109z00_5304;
																			goto
																				BgL_zc3z04anonymousza31527ze3z87_1664;
																		}
																	}
																else
																	{	/* Llib/weakhash.scm 524 */
																		((bool_t) 1);
																	}
															}
														}
														{
															long BgL_iz00_5306;

															BgL_iz00_5306 = (BgL_iz00_1658 + ((long) 1));
															BgL_iz00_1658 = BgL_iz00_5306;
															goto BgL_zc3z04anonymousza31525ze3z87_1659;
														}
													}
												else
													{	/* Llib/weakhash.scm 524 */
														((bool_t) 0);
													}
											}
											{	/* Llib/weakhash.scm 524 */
												int BgL_tmpz00_5308;

												BgL_tmpz00_5308 = (int) (((long) 0));
												return
													STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_5308,
													BgL_countz00_1651);
											}
										}
									}
								}
							}
						}
					else
						{	/* Llib/weakhash.scm 524 */
							if (
								(((long) 3) ==
									(long) CINT(STRUCT_REF(BgL_tablez00_86, (int) (((long) 5))))))
								{	/* Llib/weakhash.scm 524 */
									obj_t BgL_oldzd2buckszd2_1681;

									BgL_oldzd2buckszd2_1681 =
										STRUCT_REF(BgL_tablez00_86, (int) (((long) 2)));
									{	/* Llib/weakhash.scm 524 */
										long BgL_newzd2buckszd2lenz00_1683;

										BgL_newzd2buckszd2lenz00_1683 =
											(((long) 2) *
											VECTOR_LENGTH(((obj_t) BgL_oldzd2buckszd2_1681)));
										{	/* Llib/weakhash.scm 524 */
											obj_t BgL_newzd2buckszd2_1684;

											BgL_newzd2buckszd2_1684 =
												make_vector(BgL_newzd2buckszd2lenz00_1683, BNIL);
											{	/* Llib/weakhash.scm 524 */
												obj_t BgL_countz00_1685;

												BgL_countz00_1685 =
													STRUCT_REF(BgL_tablez00_86, (int) (((long) 0)));
												{	/* Llib/weakhash.scm 524 */

													{	/* Llib/weakhash.scm 524 */
														obj_t BgL_nmaxz00_1686;

														BgL_nmaxz00_1686 =
															BGl_2za2za2zz__r4_numbers_6_5z00(STRUCT_REF
															(BgL_tablez00_86, (int) (((long) 1))),
															STRUCT_REF(BgL_tablez00_86, (int) (((long) 7))));
														{	/* Llib/weakhash.scm 524 */
															obj_t BgL_arg1540z00_1687;

															if (REALP(BgL_nmaxz00_1686))
																{	/* Llib/weakhash.scm 524 */
																	BgL_arg1540z00_1687 =
																		BINT(
																		(long) (REAL_TO_DOUBLE(BgL_nmaxz00_1686)));
																}
															else
																{	/* Llib/weakhash.scm 524 */
																	BgL_arg1540z00_1687 = BgL_nmaxz00_1686;
																}
															{	/* Llib/weakhash.scm 524 */
																int BgL_tmpz00_5334;

																BgL_tmpz00_5334 = (int) (((long) 1));
																STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_5334,
																	BgL_arg1540z00_1687);
													}}}
													{	/* Llib/weakhash.scm 524 */
														int BgL_tmpz00_5337;

														BgL_tmpz00_5337 = (int) (((long) 2));
														STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_5337,
															BgL_newzd2buckszd2_1684);
													}
													{
														long BgL_iz00_1692;

														BgL_iz00_1692 = ((long) 0);
													BgL_zc3z04anonymousza31545ze3z87_1693:
														if (
															(BgL_iz00_1692 <
																VECTOR_LENGTH(
																	((obj_t) BgL_oldzd2buckszd2_1681))))
															{	/* Llib/weakhash.scm 524 */
																{	/* Llib/weakhash.scm 524 */
																	obj_t BgL_g1114z00_1695;

																	BgL_g1114z00_1695 =
																		VECTOR_REF(
																		((obj_t) BgL_oldzd2buckszd2_1681),
																		BgL_iz00_1692);
																	{
																		obj_t BgL_l1112z00_1697;

																		BgL_l1112z00_1697 = BgL_g1114z00_1695;
																	BgL_zc3z04anonymousza31547ze3z87_1698:
																		if (PAIRP(BgL_l1112z00_1697))
																			{	/* Llib/weakhash.scm 524 */
																				{	/* Llib/weakhash.scm 569 */
																					obj_t BgL_cellz00_1700;

																					BgL_cellz00_1700 =
																						CAR(BgL_l1112z00_1697);
																					{	/* Llib/weakhash.scm 569 */
																						obj_t BgL_keyz00_1701;
																						obj_t BgL_dataz00_1702;

																						{	/* Llib/weakhash.scm 569 */
																							obj_t BgL_arg1554z00_1710;

																							BgL_arg1554z00_1710 =
																								CAR(((obj_t) BgL_cellz00_1700));
																							BgL_keyz00_1701 =
																								weakptr_data(
																								((obj_t) BgL_arg1554z00_1710));
																						}
																						{	/* Llib/weakhash.scm 570 */
																							obj_t BgL_arg1556z00_1711;

																							BgL_arg1556z00_1711 =
																								CDR(((obj_t) BgL_cellz00_1700));
																							BgL_dataz00_1702 =
																								weakptr_data(
																								((obj_t) BgL_arg1556z00_1711));
																						}
																						{	/* Llib/weakhash.scm 571 */
																							bool_t BgL_test2499z00_5357;

																							if ((BgL_keyz00_1701 == BUNSPEC))
																								{	/* Llib/weakhash.scm 571 */
																									BgL_test2499z00_5357 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Llib/weakhash.scm 571 */
																									BgL_test2499z00_5357 =
																										(BgL_dataz00_1702 ==
																										BUNSPEC);
																								}
																							if (BgL_test2499z00_5357)
																								{	/* Llib/weakhash.scm 571 */
																									BgL_countz00_1685 =
																										SUBFX(BgL_countz00_1685,
																										BINT(((long) 1)));
																								}
																							else
																								{	/* Llib/weakhash.scm 574 */
																									long BgL_hz00_1705;

																									{	/* Llib/weakhash.scm 575 */
																										long BgL_arg1553z00_1708;

																										{	/* Llib/weakhash.scm 575 */
																											long BgL_res2154z00_3168;

																											{	/* Llib/weakhash.scm 575 */
																												obj_t BgL_hashnz00_3156;

																												BgL_hashnz00_3156 =
																													STRUCT_REF
																													(BgL_tablez00_86,
																													(int) (((long) 4)));
																												if (PROCEDUREP
																													(BgL_hashnz00_3156))
																													{	/* Llib/weakhash.scm 575 */
																														obj_t
																															BgL_arg1232z00_3158;
																														BgL_arg1232z00_3158
																															=
																															PROCEDURE_ENTRY
																															(BgL_hashnz00_3156)
																															(BgL_hashnz00_3156,
																															BgL_keyz00_1701,
																															BEOA);
																														{	/* Llib/weakhash.scm 575 */
																															long
																																BgL_nz00_3161;
																															BgL_nz00_3161 =
																																(long)
																																CINT
																																(BgL_arg1232z00_3158);
																															if ((BgL_nz00_3161
																																	< ((long) 0)))
																																{	/* Llib/weakhash.scm 575 */
																																	BgL_res2154z00_3168
																																		=
																																		NEG
																																		(BgL_nz00_3161);
																																}
																															else
																																{	/* Llib/weakhash.scm 575 */
																																	BgL_res2154z00_3168
																																		=
																																		BgL_nz00_3161;
																																}
																														}
																													}
																												else
																													{	/* Llib/weakhash.scm 575 */
																														BgL_res2154z00_3168
																															=
																															BGl_getzd2hashnumberzd2zz__hashz00
																															(BgL_keyz00_1701);
																													}
																											}
																											BgL_arg1553z00_1708 =
																												BgL_res2154z00_3168;
																										}
																										{	/* Llib/weakhash.scm 574 */
																											long BgL_res2160z00_3187;

																											{	/* Llib/weakhash.scm 574 */
																												long BgL_n1z00_3169;
																												long BgL_n2z00_3170;

																												BgL_n1z00_3169 =
																													BgL_arg1553z00_1708;
																												BgL_n2z00_3170 =
																													BgL_newzd2buckszd2lenz00_1683;
																												{	/* Llib/weakhash.scm 574 */
																													bool_t
																														BgL_test2503z00_5376;
																													{	/* Llib/weakhash.scm 574 */
																														long
																															BgL_arg1775z00_3172;
																														BgL_arg1775z00_3172
																															=
																															(((BgL_n1z00_3169)
																																|
																																(BgL_n2z00_3170))
																															& -2147483648);
																														BgL_test2503z00_5376
																															=
																															(BgL_arg1775z00_3172
																															== ((long) 0));
																													}
																													if (BgL_test2503z00_5376)
																														{	/* Llib/weakhash.scm 574 */
																															int32_t
																																BgL_arg1772z00_3173;
																															{	/* Llib/weakhash.scm 574 */
																																int32_t
																																	BgL_arg1773z00_3174;
																																int32_t
																																	BgL_arg1774z00_3175;
																																{	/* Llib/weakhash.scm 574 */
																																	int32_t
																																		BgL_res2156z00_3179;
																																	BgL_res2156z00_3179
																																		=
																																		(int32_t)
																																		(BgL_n1z00_3169);
																																	BgL_arg1773z00_3174
																																		=
																																		BgL_res2156z00_3179;
																																}
																																{	/* Llib/weakhash.scm 574 */
																																	int32_t
																																		BgL_res2157z00_3181;
																																	BgL_res2157z00_3181
																																		=
																																		(int32_t)
																																		(BgL_n2z00_3170);
																																	BgL_arg1774z00_3175
																																		=
																																		BgL_res2157z00_3181;
																																}
																																BgL_arg1772z00_3173
																																	=
																																	(BgL_arg1773z00_3174
																																	%
																																	BgL_arg1774z00_3175);
																															}
																															{	/* Llib/weakhash.scm 574 */
																																long
																																	BgL_res2159z00_3186;
																																{	/* Llib/weakhash.scm 574 */
																																	long
																																		BgL_arg1879z00_3183;
																																	BgL_arg1879z00_3183
																																		=
																																		(long)
																																		(BgL_arg1772z00_3173);
																																	{	/* Llib/weakhash.scm 574 */
																																		long
																																			BgL_res2158z00_3185;
																																		BgL_res2158z00_3185
																																			=
																																			(long)
																																			(BgL_arg1879z00_3183);
																																		BgL_res2159z00_3186
																																			=
																																			BgL_res2158z00_3185;
																																}}
																																BgL_res2160z00_3187
																																	=
																																	BgL_res2159z00_3186;
																														}}
																													else
																														{	/* Llib/weakhash.scm 574 */
																															BgL_res2160z00_3187
																																=
																																(BgL_n1z00_3169
																																%
																																BgL_n2z00_3170);
																														}
																												}
																											}
																											BgL_hz00_1705 =
																												BgL_res2160z00_3187;
																										}
																									}
																									{	/* Llib/weakhash.scm 580 */
																										obj_t BgL_arg1551z00_1706;

																										BgL_arg1551z00_1706 =
																											MAKE_YOUNG_PAIR
																											(BgL_cellz00_1700,
																											VECTOR_REF
																											(BgL_newzd2buckszd2_1684,
																												BgL_hz00_1705));
																										VECTOR_SET
																											(BgL_newzd2buckszd2_1684,
																											BgL_hz00_1705,
																											BgL_arg1551z00_1706);
																									}
																								}
																						}
																					}
																				}
																				{
																					obj_t BgL_l1112z00_5388;

																					BgL_l1112z00_5388 =
																						CDR(BgL_l1112z00_1697);
																					BgL_l1112z00_1697 = BgL_l1112z00_5388;
																					goto
																						BgL_zc3z04anonymousza31547ze3z87_1698;
																				}
																			}
																		else
																			{	/* Llib/weakhash.scm 524 */
																				((bool_t) 1);
																			}
																	}
																}
																{
																	long BgL_iz00_5390;

																	BgL_iz00_5390 = (BgL_iz00_1692 + ((long) 1));
																	BgL_iz00_1692 = BgL_iz00_5390;
																	goto BgL_zc3z04anonymousza31545ze3z87_1693;
																}
															}
														else
															{	/* Llib/weakhash.scm 524 */
																((bool_t) 0);
															}
													}
													{	/* Llib/weakhash.scm 524 */
														int BgL_tmpz00_5392;

														BgL_tmpz00_5392 = (int) (((long) 0));
														return
															STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_5392,
															BgL_countz00_1685);
													}
												}
											}
										}
									}
								}
							else
								{	/* Llib/weakhash.scm 524 */
									obj_t BgL_oldzd2buckszd2_1716;

									BgL_oldzd2buckszd2_1716 =
										STRUCT_REF(BgL_tablez00_86, (int) (((long) 2)));
									{	/* Llib/weakhash.scm 524 */
										long BgL_newzd2buckszd2lenz00_1718;

										BgL_newzd2buckszd2lenz00_1718 =
											(((long) 2) *
											VECTOR_LENGTH(((obj_t) BgL_oldzd2buckszd2_1716)));
										{	/* Llib/weakhash.scm 524 */
											obj_t BgL_newzd2buckszd2_1719;

											BgL_newzd2buckszd2_1719 =
												make_vector(BgL_newzd2buckszd2lenz00_1718, BNIL);
											{	/* Llib/weakhash.scm 524 */
												obj_t BgL_countz00_1720;

												BgL_countz00_1720 =
													STRUCT_REF(BgL_tablez00_86, (int) (((long) 0)));
												{	/* Llib/weakhash.scm 524 */

													{	/* Llib/weakhash.scm 524 */
														obj_t BgL_nmaxz00_1721;

														BgL_nmaxz00_1721 =
															BGl_2za2za2zz__r4_numbers_6_5z00(STRUCT_REF
															(BgL_tablez00_86, (int) (((long) 1))),
															STRUCT_REF(BgL_tablez00_86, (int) (((long) 7))));
														{	/* Llib/weakhash.scm 524 */
															obj_t BgL_arg1560z00_1722;

															if (REALP(BgL_nmaxz00_1721))
																{	/* Llib/weakhash.scm 524 */
																	BgL_arg1560z00_1722 =
																		BINT(
																		(long) (REAL_TO_DOUBLE(BgL_nmaxz00_1721)));
																}
															else
																{	/* Llib/weakhash.scm 524 */
																	BgL_arg1560z00_1722 = BgL_nmaxz00_1721;
																}
															{	/* Llib/weakhash.scm 524 */
																int BgL_tmpz00_5413;

																BgL_tmpz00_5413 = (int) (((long) 1));
																STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_5413,
																	BgL_arg1560z00_1722);
													}}}
													{	/* Llib/weakhash.scm 524 */
														int BgL_tmpz00_5416;

														BgL_tmpz00_5416 = (int) (((long) 2));
														STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_5416,
															BgL_newzd2buckszd2_1719);
													}
													{
														long BgL_iz00_1727;

														BgL_iz00_1727 = ((long) 0);
													BgL_zc3z04anonymousza31564ze3z87_1728:
														if (
															(BgL_iz00_1727 <
																VECTOR_LENGTH(
																	((obj_t) BgL_oldzd2buckszd2_1716))))
															{	/* Llib/weakhash.scm 524 */
																{	/* Llib/weakhash.scm 524 */
																	obj_t BgL_g1117z00_1730;

																	BgL_g1117z00_1730 =
																		VECTOR_REF(
																		((obj_t) BgL_oldzd2buckszd2_1716),
																		BgL_iz00_1727);
																	{
																		obj_t BgL_l1115z00_1732;

																		BgL_l1115z00_1732 = BgL_g1117z00_1730;
																	BgL_zc3z04anonymousza31566ze3z87_1733:
																		if (PAIRP(BgL_l1115z00_1732))
																			{	/* Llib/weakhash.scm 524 */
																				{	/* Llib/weakhash.scm 584 */
																					obj_t BgL_cellz00_1735;

																					BgL_cellz00_1735 =
																						CAR(BgL_l1115z00_1732);
																					{	/* Llib/weakhash.scm 584 */
																						long BgL_hz00_1736;

																						{	/* Llib/weakhash.scm 586 */
																							long BgL_arg1570z00_1739;

																							{	/* Llib/weakhash.scm 586 */
																								obj_t BgL_arg1573z00_1740;

																								BgL_arg1573z00_1740 =
																									CAR(
																									((obj_t) BgL_cellz00_1735));
																								{	/* Llib/weakhash.scm 585 */
																									long BgL_res2171z00_3229;

																									{	/* Llib/weakhash.scm 585 */
																										obj_t BgL_hashnz00_3217;

																										BgL_hashnz00_3217 =
																											STRUCT_REF
																											(BgL_tablez00_86,
																											(int) (((long) 4)));
																										if (PROCEDUREP
																											(BgL_hashnz00_3217))
																											{	/* Llib/weakhash.scm 585 */
																												obj_t
																													BgL_arg1232z00_3219;
																												BgL_arg1232z00_3219 =
																													PROCEDURE_ENTRY
																													(BgL_hashnz00_3217)
																													(BgL_hashnz00_3217,
																													BgL_arg1573z00_1740,
																													BEOA);
																												{	/* Llib/weakhash.scm 585 */
																													long BgL_nz00_3222;

																													BgL_nz00_3222 =
																														(long)
																														CINT
																														(BgL_arg1232z00_3219);
																													if ((BgL_nz00_3222 <
																															((long) 0)))
																														{	/* Llib/weakhash.scm 585 */
																															BgL_res2171z00_3229
																																=
																																NEG
																																(BgL_nz00_3222);
																														}
																													else
																														{	/* Llib/weakhash.scm 585 */
																															BgL_res2171z00_3229
																																= BgL_nz00_3222;
																														}
																												}
																											}
																										else
																											{	/* Llib/weakhash.scm 585 */
																												BgL_res2171z00_3229 =
																													BGl_getzd2hashnumberzd2zz__hashz00
																													(BgL_arg1573z00_1740);
																											}
																									}
																									BgL_arg1570z00_1739 =
																										BgL_res2171z00_3229;
																								}
																							}
																							{	/* Llib/weakhash.scm 584 */
																								long BgL_res2177z00_3248;

																								{	/* Llib/weakhash.scm 584 */
																									long BgL_n1z00_3230;
																									long BgL_n2z00_3231;

																									BgL_n1z00_3230 =
																										BgL_arg1570z00_1739;
																									BgL_n2z00_3231 =
																										BgL_newzd2buckszd2lenz00_1718;
																									{	/* Llib/weakhash.scm 584 */
																										bool_t BgL_test2509z00_5443;

																										{	/* Llib/weakhash.scm 584 */
																											long BgL_arg1775z00_3233;

																											BgL_arg1775z00_3233 =
																												(((BgL_n1z00_3230) |
																													(BgL_n2z00_3231)) &
																												-2147483648);
																											BgL_test2509z00_5443 =
																												(BgL_arg1775z00_3233 ==
																												((long) 0));
																										}
																										if (BgL_test2509z00_5443)
																											{	/* Llib/weakhash.scm 584 */
																												int32_t
																													BgL_arg1772z00_3234;
																												{	/* Llib/weakhash.scm 584 */
																													int32_t
																														BgL_arg1773z00_3235;
																													int32_t
																														BgL_arg1774z00_3236;
																													{	/* Llib/weakhash.scm 584 */
																														int32_t
																															BgL_res2173z00_3240;
																														BgL_res2173z00_3240
																															=
																															(int32_t)
																															(BgL_n1z00_3230);
																														BgL_arg1773z00_3235
																															=
																															BgL_res2173z00_3240;
																													}
																													{	/* Llib/weakhash.scm 584 */
																														int32_t
																															BgL_res2174z00_3242;
																														BgL_res2174z00_3242
																															=
																															(int32_t)
																															(BgL_n2z00_3231);
																														BgL_arg1774z00_3236
																															=
																															BgL_res2174z00_3242;
																													}
																													BgL_arg1772z00_3234 =
																														(BgL_arg1773z00_3235
																														%
																														BgL_arg1774z00_3236);
																												}
																												{	/* Llib/weakhash.scm 584 */
																													long
																														BgL_res2176z00_3247;
																													{	/* Llib/weakhash.scm 584 */
																														long
																															BgL_arg1879z00_3244;
																														BgL_arg1879z00_3244
																															=
																															(long)
																															(BgL_arg1772z00_3234);
																														{	/* Llib/weakhash.scm 584 */
																															long
																																BgL_res2175z00_3246;
																															BgL_res2175z00_3246
																																=
																																(long)
																																(BgL_arg1879z00_3244);
																															BgL_res2176z00_3247
																																=
																																BgL_res2175z00_3246;
																													}}
																													BgL_res2177z00_3248 =
																														BgL_res2176z00_3247;
																											}}
																										else
																											{	/* Llib/weakhash.scm 584 */
																												BgL_res2177z00_3248 =
																													(BgL_n1z00_3230 %
																													BgL_n2z00_3231);
																											}
																									}
																								}
																								BgL_hz00_1736 =
																									BgL_res2177z00_3248;
																							}
																						}
																						{	/* Llib/weakhash.scm 592 */
																							obj_t BgL_arg1568z00_1737;

																							BgL_arg1568z00_1737 =
																								MAKE_YOUNG_PAIR
																								(BgL_cellz00_1735,
																								VECTOR_REF
																								(BgL_newzd2buckszd2_1719,
																									BgL_hz00_1736));
																							VECTOR_SET
																								(BgL_newzd2buckszd2_1719,
																								BgL_hz00_1736,
																								BgL_arg1568z00_1737);
																						}
																					}
																				}
																				{
																					obj_t BgL_l1115z00_5455;

																					BgL_l1115z00_5455 =
																						CDR(BgL_l1115z00_1732);
																					BgL_l1115z00_1732 = BgL_l1115z00_5455;
																					goto
																						BgL_zc3z04anonymousza31566ze3z87_1733;
																				}
																			}
																		else
																			{	/* Llib/weakhash.scm 524 */
																				((bool_t) 1);
																			}
																	}
																}
																{
																	long BgL_iz00_5457;

																	BgL_iz00_5457 = (BgL_iz00_1727 + ((long) 1));
																	BgL_iz00_1727 = BgL_iz00_5457;
																	goto BgL_zc3z04anonymousza31564ze3z87_1728;
																}
															}
														else
															{	/* Llib/weakhash.scm 524 */
																((bool_t) 0);
															}
													}
													{	/* Llib/weakhash.scm 524 */
														int BgL_tmpz00_5459;

														BgL_tmpz00_5459 = (int) (((long) 0));
														return
															STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_5459,
															BgL_countz00_1720);
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



/* &weak-hashtable-expand! */
	obj_t BGl_z62weakzd2hashtablezd2expandz12z70zz__weakhashz00(obj_t
		BgL_envz00_3680, obj_t BgL_tablez00_3681)
	{
		{	/* Llib/weakhash.scm 523 */
			{	/* Llib/weakhash.scm 524 */
				obj_t BgL_auxz00_5462;

				if (STRUCTP(BgL_tablez00_3681))
					{	/* Llib/weakhash.scm 524 */
						BgL_auxz00_5462 = BgL_tablez00_3681;
					}
				else
					{
						obj_t BgL_auxz00_5465;

						BgL_auxz00_5465 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2279z00zz__weakhashz00,
							BINT(((long) 20385)), BGl_string2296z00zz__weakhashz00,
							BGl_string2281z00zz__weakhashz00, BgL_tablez00_3681);
						FAILURE(BgL_auxz00_5465, BFALSE, BFALSE);
					}
				return
					BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00(BgL_auxz00_5462);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__weakhashz00()
	{
		{	/* Llib/weakhash.scm 18 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__weakhashz00()
	{
		{	/* Llib/weakhash.scm 18 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__weakhashz00()
	{
		{	/* Llib/weakhash.scm 18 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__weakhashz00()
	{
		{	/* Llib/weakhash.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2297z00zz__weakhashz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string2297z00zz__weakhashz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2297z00zz__weakhashz00));
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 214649622),
				BSTRING_TO_STRING(BGl_string2297z00zz__weakhashz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string2297z00zz__weakhashz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2297z00zz__weakhashz00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string2297z00zz__weakhashz00));
		}

	}

#ifdef __cplusplus
}
#endif
