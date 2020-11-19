/*===========================================================================*/
/*   (SawMill/collapse.scm)                                                  */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/collapse.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_blockz00_bgl
	{
		header_t header;
		obj_t widening;
		int BgL_labelz00;
		obj_t BgL_predsz00;
		obj_t BgL_succsz00;
		obj_t BgL_firstz00;
	}               *BgL_blockz00_bglt;

	typedef struct BgL_collapsedz00_bgl
	{
		obj_t BgL_lastz00;
	}                   *BgL_collapsedz00_bglt;


	static obj_t BGl_objectzd2initzd2zzsaw_collapsez00();
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_collapsez00();
	static obj_t BGl_z62collapsez62zzsaw_collapsez00(obj_t, obj_t);
	extern obj_t BGl_substz00zzsaw_libz00(obj_t, obj_t, obj_t);
	static bool_t BGl_dfsze70ze7zzsaw_collapsez00(BgL_blockz00_bglt);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_collapsez00();
	static obj_t BGl_collapsedz00zzsaw_collapsez00 = BUNSPEC;
	static obj_t BGl_z62lambda1600z62zzsaw_collapsez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1601z62zzsaw_collapsez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_collapsez00zzsaw_collapsez00(BgL_blockz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31585ze3ze5zzsaw_collapsez00(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_collapsez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl_genericzd2initzd2zzsaw_collapsez00();
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_collapsez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzsaw_collapsez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_collapsez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_collapsez00();
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1576z62zzsaw_collapsez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1583z62zzsaw_collapsez00(obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1586z62zzsaw_collapsez00(obj_t, obj_t);
	extern obj_t BGl_blockz00zzsaw_defsz00;
	static obj_t __cnst[4];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_collapsezd2envzd2zzsaw_collapsez00,
		BgL_bgl_za762collapseza762za7za71870z00,
		BGl_z62collapsez62zzsaw_collapsez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1865z00zzsaw_collapsez00,
		BgL_bgl_string1865za700za7za7s1871za7, "saw_collapse", 12);
	      DEFINE_STRING(BGl_string1866z00zzsaw_collapsez00,
		BgL_bgl_string1866za700za7za7s1872za7, "saw_collapse collapsed obj last ",
		32);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1859z00zzsaw_collapsez00,
		BgL_bgl_za762lambda1601za7621873z00, BGl_z62lambda1601z62zzsaw_collapsez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1860z00zzsaw_collapsez00,
		BgL_bgl_za762lambda1600za7621874z00, BGl_z62lambda1600z62zzsaw_collapsez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1861z00zzsaw_collapsez00,
		BgL_bgl_za762lambda1586za7621875z00, BGl_z62lambda1586z62zzsaw_collapsez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1862z00zzsaw_collapsez00,
		BgL_bgl_za762za7c3za704anonymo1876za7,
		BGl_z62zc3z04anonymousza31585ze3ze5zzsaw_collapsez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1863z00zzsaw_collapsez00,
		BgL_bgl_za762lambda1583za7621877z00, BGl_z62lambda1583z62zzsaw_collapsez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1864z00zzsaw_collapsez00,
		BgL_bgl_za762lambda1576za7621878z00, BGl_z62lambda1576z62zzsaw_collapsez00,
		0L, BUNSPEC, 5);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_collapsedz00zzsaw_collapsez00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzsaw_collapsez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_collapsez00(long
		BgL_checksumz00_2304, char *BgL_fromz00_2305)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_collapsez00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_collapsez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_collapsez00();
					BGl_libraryzd2moduleszd2initz00zzsaw_collapsez00();
					BGl_cnstzd2initzd2zzsaw_collapsez00();
					BGl_importedzd2moduleszd2initz00zzsaw_collapsez00();
					BGl_objectzd2initzd2zzsaw_collapsez00();
					return BGl_methodzd2initzd2zzsaw_collapsez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_collapsez00()
	{
		{	/* SawMill/collapse.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_collapse");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_collapse");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_collapse");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_collapse");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_collapse");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_collapse");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_collapse");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_collapsez00()
	{
		{	/* SawMill/collapse.scm 1 */
			{	/* SawMill/collapse.scm 1 */
				obj_t BgL_cportz00_2264;

				{	/* SawMill/collapse.scm 1 */
					obj_t BgL_stringz00_2272;

					BgL_stringz00_2272 = BGl_string1866z00zzsaw_collapsez00;
					{	/* SawMill/collapse.scm 1 */
						obj_t BgL_startz00_2273;

						BgL_startz00_2273 = BINT(((long) 0));
						{	/* SawMill/collapse.scm 1 */
							obj_t BgL_endz00_2274;

							BgL_endz00_2274 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2272)));
							{	/* SawMill/collapse.scm 1 */

								BgL_cportz00_2264 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2272, BgL_startz00_2273, BgL_endz00_2274);
				}}}}
				{
					long BgL_iz00_2265;

					BgL_iz00_2265 = ((long) 3);
				BgL_loopz00_2266:
					if ((BgL_iz00_2265 == ((long) -1)))
						{	/* SawMill/collapse.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/collapse.scm 1 */
							{	/* SawMill/collapse.scm 1 */
								obj_t BgL_arg1868z00_2268;

								{	/* SawMill/collapse.scm 1 */

									{	/* SawMill/collapse.scm 1 */
										obj_t BgL_locationz00_2270;

										BgL_locationz00_2270 = BBOOL(((bool_t) 0));
										{	/* SawMill/collapse.scm 1 */

											BgL_arg1868z00_2268 =
												BGl_readz00zz__readerz00(BgL_cportz00_2264,
												BgL_locationz00_2270);
										}
									}
								}
								{	/* SawMill/collapse.scm 1 */
									int BgL_tmpz00_2331;

									BgL_tmpz00_2331 = (int) (BgL_iz00_2265);
									CNST_TABLE_SET(BgL_tmpz00_2331, BgL_arg1868z00_2268);
							}}
							{	/* SawMill/collapse.scm 1 */
								int BgL_auxz00_2271;

								BgL_auxz00_2271 = (int) ((BgL_iz00_2265 - ((long) 1)));
								{
									long BgL_iz00_2336;

									BgL_iz00_2336 = (long) (BgL_auxz00_2271);
									BgL_iz00_2265 = BgL_iz00_2336;
									goto BgL_loopz00_2266;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_collapsez00()
	{
		{	/* SawMill/collapse.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* collapse */
	BGL_EXPORTED_DEF obj_t BGl_collapsez00zzsaw_collapsez00(BgL_blockz00_bglt
		BgL_bz00_24)
	{
		{	/* SawMill/collapse.scm 14 */
			BGl_dfsze70ze7zzsaw_collapsez00(BgL_bz00_24);
			return BUNSPEC;
		}

	}



/* dfs~0 */
	bool_t BGl_dfsze70ze7zzsaw_collapsez00(BgL_blockz00_bglt BgL_bz00_1781)
	{
		{	/* SawMill/collapse.scm 15 */
			{	/* SawMill/collapse.scm 17 */
				BgL_collapsedz00_bglt BgL_wide1173z00_1786;

				BgL_wide1173z00_1786 =
					((BgL_collapsedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_collapsedz00_bgl))));
				{	/* SawMill/collapse.scm 17 */
					obj_t BgL_auxz00_2344;
					BgL_objectz00_bglt BgL_tmpz00_2341;

					BgL_auxz00_2344 = ((obj_t) BgL_wide1173z00_1786);
					BgL_tmpz00_2341 =
						((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1781));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2341, BgL_auxz00_2344);
				}
				((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1781));
				{	/* SawMill/collapse.scm 17 */
					long BgL_arg1421z00_1787;

					{	/* SawMill/collapse.scm 17 */
						long BgL_res1846z00_2174;

						BgL_res1846z00_2174 =
							BGL_CLASS_INDEX(BGl_collapsedz00zzsaw_collapsez00);
						BgL_arg1421z00_1787 = BgL_res1846z00_2174;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt) BgL_bz00_1781)), BgL_arg1421z00_1787);
				}
				((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1781));
			}
			{
				BgL_collapsedz00_bglt BgL_auxz00_2355;

				{
					obj_t BgL_auxz00_2356;

					{	/* SawMill/collapse.scm 17 */
						BgL_objectz00_bglt BgL_tmpz00_2357;

						BgL_tmpz00_2357 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1781));
						BgL_auxz00_2356 = BGL_OBJECT_WIDENING(BgL_tmpz00_2357);
					}
					BgL_auxz00_2355 = ((BgL_collapsedz00_bglt) BgL_auxz00_2356);
				}
				((((BgL_collapsedz00_bglt) COBJECT(BgL_auxz00_2355))->BgL_lastz00) =
					((obj_t)
						BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(((
									(BgL_blockz00_bglt) COBJECT(BgL_bz00_1781))->BgL_firstz00))),
					BUNSPEC);
			}
			((BgL_blockz00_bglt) BgL_bz00_1781);
			{	/* SawMill/collapse.scm 18 */
				bool_t BgL_test1881z00_2366;

				if (NULLP((((BgL_blockz00_bglt) COBJECT(BgL_bz00_1781))->BgL_predsz00)))
					{	/* SawMill/collapse.scm 18 */
						BgL_test1881z00_2366 = ((bool_t) 0);
					}
				else
					{	/* SawMill/collapse.scm 18 */
						BgL_test1881z00_2366 =
							NULLP(CDR(
								(((BgL_blockz00_bglt) COBJECT(BgL_bz00_1781))->BgL_predsz00)));
					}
				if (BgL_test1881z00_2366)
					{	/* SawMill/collapse.scm 19 */
						obj_t BgL_pz00_1796;

						BgL_pz00_1796 =
							CAR((((BgL_blockz00_bglt) COBJECT(BgL_bz00_1781))->BgL_predsz00));
						{	/* SawMill/collapse.scm 19 */
							obj_t BgL_psz00_1797;

							BgL_psz00_1797 =
								(((BgL_blockz00_bglt) COBJECT(
										((BgL_blockz00_bglt) BgL_pz00_1796)))->BgL_succsz00);
							{	/* SawMill/collapse.scm 19 */

								if (NULLP(CDR(((obj_t) BgL_psz00_1797))))
									{	/* SawMill/collapse.scm 21 */
										{	/* SawMill/collapse.scm 24 */
											obj_t BgL_arg1474z00_1800;
											obj_t BgL_arg1476z00_1801;

											{
												BgL_collapsedz00_bglt BgL_auxz00_2381;

												{
													obj_t BgL_auxz00_2382;

													{	/* SawMill/collapse.scm 24 */
														BgL_objectz00_bglt BgL_tmpz00_2383;

														BgL_tmpz00_2383 =
															((BgL_objectz00_bglt)
															((BgL_blockz00_bglt) BgL_pz00_1796));
														BgL_auxz00_2382 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2383);
													}
													BgL_auxz00_2381 =
														((BgL_collapsedz00_bglt) BgL_auxz00_2382);
												}
												BgL_arg1474z00_1800 =
													(((BgL_collapsedz00_bglt) COBJECT(BgL_auxz00_2381))->
													BgL_lastz00);
											}
											BgL_arg1476z00_1801 =
												(((BgL_blockz00_bglt) COBJECT(BgL_bz00_1781))->
												BgL_firstz00);
											{	/* SawMill/collapse.scm 24 */
												obj_t BgL_tmpz00_2390;

												BgL_tmpz00_2390 = ((obj_t) BgL_arg1474z00_1800);
												SET_CDR(BgL_tmpz00_2390, BgL_arg1476z00_1801);
											}
										}
										{	/* SawMill/collapse.scm 25 */
											obj_t BgL_arg1477z00_1802;

											{
												BgL_collapsedz00_bglt BgL_auxz00_2393;

												{
													obj_t BgL_auxz00_2394;

													{	/* SawMill/collapse.scm 25 */
														BgL_objectz00_bglt BgL_tmpz00_2395;

														BgL_tmpz00_2395 =
															((BgL_objectz00_bglt)
															((BgL_blockz00_bglt) BgL_bz00_1781));
														BgL_auxz00_2394 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2395);
													}
													BgL_auxz00_2393 =
														((BgL_collapsedz00_bglt) BgL_auxz00_2394);
												}
												BgL_arg1477z00_1802 =
													(((BgL_collapsedz00_bglt) COBJECT(BgL_auxz00_2393))->
													BgL_lastz00);
											}
											{
												BgL_collapsedz00_bglt BgL_auxz00_2401;

												{
													obj_t BgL_auxz00_2402;

													{	/* SawMill/collapse.scm 25 */
														BgL_objectz00_bglt BgL_tmpz00_2403;

														BgL_tmpz00_2403 =
															((BgL_objectz00_bglt)
															((BgL_blockz00_bglt) BgL_pz00_1796));
														BgL_auxz00_2402 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2403);
													}
													BgL_auxz00_2401 =
														((BgL_collapsedz00_bglt) BgL_auxz00_2402);
												}
												((((BgL_collapsedz00_bglt) COBJECT(BgL_auxz00_2401))->
														BgL_lastz00) =
													((obj_t) BgL_arg1477z00_1802), BUNSPEC);
											}
										}
										{	/* SawMill/collapse.scm 26 */
											obj_t BgL_arg1489z00_1803;

											BgL_arg1489z00_1803 =
												(((BgL_blockz00_bglt) COBJECT(BgL_bz00_1781))->
												BgL_succsz00);
											((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
																BgL_pz00_1796)))->BgL_succsz00) =
												((obj_t) BgL_arg1489z00_1803), BUNSPEC);
										}
										{	/* SawMill/collapse.scm 27 */
											obj_t BgL_g1382z00_1804;

											BgL_g1382z00_1804 =
												(((BgL_blockz00_bglt) COBJECT(BgL_bz00_1781))->
												BgL_succsz00);
											{
												obj_t BgL_l1380z00_1806;

												BgL_l1380z00_1806 = BgL_g1382z00_1804;
											BgL_zc3z04anonymousza31490ze3z87_1807:
												if (PAIRP(BgL_l1380z00_1806))
													{	/* SawMill/collapse.scm 27 */
														{	/* SawMill/collapse.scm 28 */
															obj_t BgL_sz00_1809;

															BgL_sz00_1809 = CAR(BgL_l1380z00_1806);
															{
																obj_t BgL_auxz00_2416;

																{	/* SawMill/collapse.scm 29 */
																	obj_t BgL_arg1493z00_1811;

																	BgL_arg1493z00_1811 =
																		(((BgL_blockz00_bglt) COBJECT(
																				((BgL_blockz00_bglt) BgL_sz00_1809)))->
																		BgL_predsz00);
																	BgL_auxz00_2416 =
																		BGl_substz00zzsaw_libz00
																		(BgL_arg1493z00_1811,
																		((obj_t) BgL_bz00_1781), BgL_pz00_1796);
																}
																((((BgL_blockz00_bglt) COBJECT(
																				((BgL_blockz00_bglt) BgL_sz00_1809)))->
																		BgL_predsz00) =
																	((obj_t) BgL_auxz00_2416), BUNSPEC);
															}
														}
														{
															obj_t BgL_l1380z00_2423;

															BgL_l1380z00_2423 = CDR(BgL_l1380z00_1806);
															BgL_l1380z00_1806 = BgL_l1380z00_2423;
															goto BgL_zc3z04anonymousza31490ze3z87_1807;
														}
													}
												else
													{	/* SawMill/collapse.scm 27 */
														((bool_t) 1);
													}
											}
										}
									}
								else
									{	/* SawMill/collapse.scm 21 */
										((bool_t) 0);
									}
							}
						}
					}
				else
					{	/* SawMill/collapse.scm 18 */
						((bool_t) 0);
					}
			}
			{	/* SawMill/collapse.scm 31 */
				obj_t BgL_g1385z00_1820;

				BgL_g1385z00_1820 =
					(((BgL_blockz00_bglt) COBJECT(BgL_bz00_1781))->BgL_succsz00);
				{
					obj_t BgL_l1383z00_1822;

					BgL_l1383z00_1822 = BgL_g1385z00_1820;
				BgL_zc3z04anonymousza31537ze3z87_1823:
					if (PAIRP(BgL_l1383z00_1822))
						{	/* SawMill/collapse.scm 31 */
							{	/* SawMill/collapse.scm 32 */
								BgL_blockz00_bglt BgL_succz00_1825;

								BgL_succz00_1825 = ((BgL_blockz00_bglt) CAR(BgL_l1383z00_1822));
								{	/* SawMill/collapse.scm 32 */
									bool_t BgL_test1886z00_2430;

									{	/* SawMill/collapse.scm 32 */
										bool_t BgL_res1852z00_2202;

										BgL_res1852z00_2202 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_succz00_1825),
											BGl_collapsedz00zzsaw_collapsez00);
										BgL_test1886z00_2430 = BgL_res1852z00_2202;
									}
									if (BgL_test1886z00_2430)
										{	/* SawMill/collapse.scm 32 */
											((bool_t) 0);
										}
									else
										{	/* SawMill/collapse.scm 32 */
											BGl_dfsze70ze7zzsaw_collapsez00(BgL_succz00_1825);
										}
								}
							}
							{
								obj_t BgL_l1383z00_2434;

								BgL_l1383z00_2434 = CDR(BgL_l1383z00_1822);
								BgL_l1383z00_1822 = BgL_l1383z00_2434;
								goto BgL_zc3z04anonymousza31537ze3z87_1823;
							}
						}
					else
						{	/* SawMill/collapse.scm 31 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* &collapse */
	obj_t BGl_z62collapsez62zzsaw_collapsez00(obj_t BgL_envz00_2239,
		obj_t BgL_bz00_2240)
	{
		{	/* SawMill/collapse.scm 14 */
			return
				BGl_collapsez00zzsaw_collapsez00(((BgL_blockz00_bglt) BgL_bz00_2240));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_collapsez00()
	{
		{	/* SawMill/collapse.scm 1 */
			{	/* SawMill/collapse.scm 8 */
				obj_t BgL_arg1573z00_1834;
				obj_t BgL_arg1575z00_1835;

				{	/* SawMill/collapse.scm 8 */
					obj_t BgL_v1386z00_1861;

					BgL_v1386z00_1861 = create_vector(((long) 1));
					{	/* SawMill/collapse.scm 8 */
						obj_t BgL_arg1593z00_1862;

						BgL_arg1593z00_1862 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc1860z00zzsaw_collapsez00,
							BGl_proc1859z00zzsaw_collapsez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1386z00_1861, ((long) 0), BgL_arg1593z00_1862);
					}
					BgL_arg1573z00_1834 = BgL_v1386z00_1861;
				}
				{	/* SawMill/collapse.scm 8 */
					obj_t BgL_v1387z00_1872;

					BgL_v1387z00_1872 = create_vector(((long) 0));
					BgL_arg1575z00_1835 = BgL_v1387z00_1872;
				}
				return (BGl_collapsedz00zzsaw_collapsez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 2)),
						CNST_TABLE_REF(((long) 3)), BGl_blockz00zzsaw_defsz00,
						((long) 33801), BGl_proc1864z00zzsaw_collapsez00,
						BGl_proc1863z00zzsaw_collapsez00, BFALSE,
						BGl_proc1862z00zzsaw_collapsez00, BGl_proc1861z00zzsaw_collapsez00,
						BgL_arg1573z00_1834, BgL_arg1575z00_1835), BUNSPEC);
		}}

	}



/* &lambda1586 */
	BgL_blockz00_bglt BGl_z62lambda1586z62zzsaw_collapsez00(obj_t BgL_envz00_2247,
		obj_t BgL_o1154z00_2248)
	{
		{	/* SawMill/collapse.scm 8 */
			{	/* SawMill/collapse.scm 8 */
				long BgL_arg1588z00_2278;

				{	/* SawMill/collapse.scm 8 */
					obj_t BgL_arg1589z00_2279;

					{	/* SawMill/collapse.scm 8 */
						obj_t BgL_arg1592z00_2280;

						{	/* SawMill/collapse.scm 8 */
							long BgL_arg1816z00_2281;

							{	/* SawMill/collapse.scm 8 */
								long BgL_arg1817z00_2282;

								{	/* SawMill/collapse.scm 8 */
									long BgL_res1856z00_2283;

									BgL_res1856z00_2283 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_blockz00_bglt) BgL_o1154z00_2248)));
									BgL_arg1817z00_2282 = BgL_res1856z00_2283;
								}
								BgL_arg1816z00_2281 = (BgL_arg1817z00_2282 - OBJECT_TYPE);
							}
							BgL_arg1592z00_2280 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2281);
						}
						BgL_arg1589z00_2279 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1592z00_2280);
					}
					{	/* SawMill/collapse.scm 8 */
						long BgL_res1858z00_2284;

						{	/* SawMill/collapse.scm 8 */
							obj_t BgL_tmpz00_2453;

							BgL_tmpz00_2453 = ((obj_t) BgL_arg1589z00_2279);
							BgL_res1858z00_2284 = BGL_CLASS_INDEX(BgL_tmpz00_2453);
						}
						BgL_arg1588z00_2278 = BgL_res1858z00_2284;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) BgL_o1154z00_2248)), BgL_arg1588z00_2278);
			}
			{	/* SawMill/collapse.scm 8 */
				BgL_objectz00_bglt BgL_tmpz00_2459;

				BgL_tmpz00_2459 =
					((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1154z00_2248));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2459, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1154z00_2248));
			return ((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1154z00_2248));
		}

	}



/* &<@anonymous:1585> */
	obj_t BGl_z62zc3z04anonymousza31585ze3ze5zzsaw_collapsez00(obj_t
		BgL_envz00_2249, obj_t BgL_new1153z00_2250)
	{
		{	/* SawMill/collapse.scm 8 */
			{
				BgL_blockz00_bglt BgL_auxz00_2467;

				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt)
									((BgL_blockz00_bglt) BgL_new1153z00_2250))))->BgL_labelz00) =
					((int) (int) (((long) 0))), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1153z00_2250))))->BgL_predsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1153z00_2250))))->BgL_succsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1153z00_2250))))->BgL_firstz00) =
					((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				{
					BgL_collapsedz00_bglt BgL_auxz00_2482;

					{
						obj_t BgL_auxz00_2483;

						{	/* SawMill/collapse.scm 8 */
							BgL_objectz00_bglt BgL_tmpz00_2484;

							BgL_tmpz00_2484 =
								((BgL_objectz00_bglt)
								((BgL_blockz00_bglt) BgL_new1153z00_2250));
							BgL_auxz00_2483 = BGL_OBJECT_WIDENING(BgL_tmpz00_2484);
						}
						BgL_auxz00_2482 = ((BgL_collapsedz00_bglt) BgL_auxz00_2483);
					}
					((((BgL_collapsedz00_bglt) COBJECT(BgL_auxz00_2482))->BgL_lastz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_2467 = ((BgL_blockz00_bglt) BgL_new1153z00_2250);
				return ((obj_t) BgL_auxz00_2467);
			}
		}

	}



/* &lambda1583 */
	BgL_blockz00_bglt BGl_z62lambda1583z62zzsaw_collapsez00(obj_t BgL_envz00_2251,
		obj_t BgL_o1150z00_2252)
	{
		{	/* SawMill/collapse.scm 8 */
			{	/* SawMill/collapse.scm 8 */
				BgL_collapsedz00_bglt BgL_wide1152z00_2287;

				BgL_wide1152z00_2287 =
					((BgL_collapsedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_collapsedz00_bgl))));
				{	/* SawMill/collapse.scm 8 */
					obj_t BgL_auxz00_2497;
					BgL_objectz00_bglt BgL_tmpz00_2493;

					BgL_auxz00_2497 = ((obj_t) BgL_wide1152z00_2287);
					BgL_tmpz00_2493 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1150z00_2252)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2493, BgL_auxz00_2497);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1150z00_2252)));
				{	/* SawMill/collapse.scm 8 */
					long BgL_arg1584z00_2288;

					{	/* SawMill/collapse.scm 8 */
						long BgL_res1855z00_2289;

						BgL_res1855z00_2289 =
							BGL_CLASS_INDEX(BGl_collapsedz00zzsaw_collapsez00);
						BgL_arg1584z00_2288 = BgL_res1855z00_2289;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_o1150z00_2252))), BgL_arg1584z00_2288);
				}
				return
					((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1150z00_2252)));
			}
		}

	}



/* &lambda1576 */
	BgL_blockz00_bglt BGl_z62lambda1576z62zzsaw_collapsez00(obj_t BgL_envz00_2253,
		obj_t BgL_label1145z00_2254, obj_t BgL_preds1146z00_2255,
		obj_t BgL_succs1147z00_2256, obj_t BgL_first1148z00_2257,
		obj_t BgL_last1149z00_2258)
	{
		{	/* SawMill/collapse.scm 8 */
			{	/* SawMill/collapse.scm 8 */
				int BgL_label1145z00_2290;

				BgL_label1145z00_2290 = CINT(BgL_label1145z00_2254);
				{	/* SawMill/collapse.scm 8 */
					BgL_blockz00_bglt BgL_new1180z00_2294;

					{	/* SawMill/collapse.scm 8 */
						BgL_blockz00_bglt BgL_tmp1177z00_2295;
						BgL_collapsedz00_bglt BgL_wide1178z00_2296;

						{
							BgL_blockz00_bglt BgL_auxz00_2512;

							{	/* SawMill/collapse.scm 8 */
								BgL_blockz00_bglt BgL_new1176z00_2297;

								BgL_new1176z00_2297 =
									((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_blockz00_bgl))));
								{	/* SawMill/collapse.scm 8 */
									long BgL_arg1582z00_2298;

									{	/* SawMill/collapse.scm 8 */
										long BgL_res1853z00_2299;

										BgL_res1853z00_2299 =
											BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
										BgL_arg1582z00_2298 = BgL_res1853z00_2299;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1176z00_2297),
										BgL_arg1582z00_2298);
								}
								{	/* SawMill/collapse.scm 8 */
									BgL_objectz00_bglt BgL_tmpz00_2517;

									BgL_tmpz00_2517 = ((BgL_objectz00_bglt) BgL_new1176z00_2297);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2517, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1176z00_2297);
								BgL_auxz00_2512 = BgL_new1176z00_2297;
							}
							BgL_tmp1177z00_2295 = ((BgL_blockz00_bglt) BgL_auxz00_2512);
						}
						BgL_wide1178z00_2296 =
							((BgL_collapsedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_collapsedz00_bgl))));
						{	/* SawMill/collapse.scm 8 */
							obj_t BgL_auxz00_2525;
							BgL_objectz00_bglt BgL_tmpz00_2523;

							BgL_auxz00_2525 = ((obj_t) BgL_wide1178z00_2296);
							BgL_tmpz00_2523 = ((BgL_objectz00_bglt) BgL_tmp1177z00_2295);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2523, BgL_auxz00_2525);
						}
						((BgL_objectz00_bglt) BgL_tmp1177z00_2295);
						{	/* SawMill/collapse.scm 8 */
							long BgL_arg1578z00_2300;

							{	/* SawMill/collapse.scm 8 */
								long BgL_res1854z00_2301;

								BgL_res1854z00_2301 =
									BGL_CLASS_INDEX(BGl_collapsedz00zzsaw_collapsez00);
								BgL_arg1578z00_2300 = BgL_res1854z00_2301;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1177z00_2295),
								BgL_arg1578z00_2300);
						}
						BgL_new1180z00_2294 = ((BgL_blockz00_bglt) BgL_tmp1177z00_2295);
					}
					((((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_new1180z00_2294)))->BgL_labelz00) =
						((int) BgL_label1145z00_2290), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1180z00_2294)))->BgL_predsz00) =
						((obj_t) ((obj_t) BgL_preds1146z00_2255)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1180z00_2294)))->BgL_succsz00) =
						((obj_t) ((obj_t) BgL_succs1147z00_2256)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1180z00_2294)))->BgL_firstz00) =
						((obj_t) ((obj_t) BgL_first1148z00_2257)), BUNSPEC);
					{
						BgL_collapsedz00_bglt BgL_auxz00_2544;

						{
							obj_t BgL_auxz00_2545;

							{	/* SawMill/collapse.scm 8 */
								BgL_objectz00_bglt BgL_tmpz00_2546;

								BgL_tmpz00_2546 = ((BgL_objectz00_bglt) BgL_new1180z00_2294);
								BgL_auxz00_2545 = BGL_OBJECT_WIDENING(BgL_tmpz00_2546);
							}
							BgL_auxz00_2544 = ((BgL_collapsedz00_bglt) BgL_auxz00_2545);
						}
						((((BgL_collapsedz00_bglt) COBJECT(BgL_auxz00_2544))->BgL_lastz00) =
							((obj_t) BgL_last1149z00_2258), BUNSPEC);
					}
					return BgL_new1180z00_2294;
				}
			}
		}

	}



/* &lambda1601 */
	obj_t BGl_z62lambda1601z62zzsaw_collapsez00(obj_t BgL_envz00_2259,
		obj_t BgL_oz00_2260, obj_t BgL_vz00_2261)
	{
		{	/* SawMill/collapse.scm 8 */
			{
				BgL_collapsedz00_bglt BgL_auxz00_2551;

				{
					obj_t BgL_auxz00_2552;

					{	/* SawMill/collapse.scm 8 */
						BgL_objectz00_bglt BgL_tmpz00_2553;

						BgL_tmpz00_2553 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_2260));
						BgL_auxz00_2552 = BGL_OBJECT_WIDENING(BgL_tmpz00_2553);
					}
					BgL_auxz00_2551 = ((BgL_collapsedz00_bglt) BgL_auxz00_2552);
				}
				return
					((((BgL_collapsedz00_bglt) COBJECT(BgL_auxz00_2551))->BgL_lastz00) =
					((obj_t) BgL_vz00_2261), BUNSPEC);
			}
		}

	}



/* &lambda1600 */
	obj_t BGl_z62lambda1600z62zzsaw_collapsez00(obj_t BgL_envz00_2262,
		obj_t BgL_oz00_2263)
	{
		{	/* SawMill/collapse.scm 8 */
			{
				BgL_collapsedz00_bglt BgL_auxz00_2559;

				{
					obj_t BgL_auxz00_2560;

					{	/* SawMill/collapse.scm 8 */
						BgL_objectz00_bglt BgL_tmpz00_2561;

						BgL_tmpz00_2561 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_2263));
						BgL_auxz00_2560 = BGL_OBJECT_WIDENING(BgL_tmpz00_2561);
					}
					BgL_auxz00_2559 = ((BgL_collapsedz00_bglt) BgL_auxz00_2560);
				}
				return
					(((BgL_collapsedz00_bglt) COBJECT(BgL_auxz00_2559))->BgL_lastz00);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_collapsez00()
	{
		{	/* SawMill/collapse.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_collapsez00()
	{
		{	/* SawMill/collapse.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_collapsez00()
	{
		{	/* SawMill/collapse.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1865z00zzsaw_collapsez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1865z00zzsaw_collapsez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1865z00zzsaw_collapsez00));
			BGl_modulezd2initializa7ationz75zzsaw_libz00(((long) 57049159),
				BSTRING_TO_STRING(BGl_string1865z00zzsaw_collapsez00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string1865z00zzsaw_collapsez00));
		}

	}

#ifdef __cplusplus
}
#endif
