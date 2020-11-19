/*===========================================================================*/
/*   (SawMill/gotos.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/gotos.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_typez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_siza7eza7;
		obj_t BgL_classz00;
		obj_t BgL_coercezd2tozd2;
		obj_t BgL_parentsz00;
		bool_t BgL_initzf3zf3;
		bool_t BgL_magiczf3zf3;
		obj_t BgL_z42z42;
		obj_t BgL_aliasz00;
		obj_t BgL_pointedzd2tozd2byz00;
		obj_t BgL_tvectorz00;
		obj_t BgL_locationz00;
		obj_t BgL_importzd2locationzd2;
		int BgL_occurrencez00;
	}              *BgL_typez00_bglt;

	typedef struct BgL_rtl_funz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_funz00_bglt;

	typedef struct BgL_rtl_ifz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                *BgL_rtl_ifz00_bglt;

	typedef struct BgL_rtl_selectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_patternsz00;
	}                    *BgL_rtl_selectz00_bglt;

	typedef struct BgL_rtl_switchz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_patternsz00;
		obj_t BgL_labelsz00;
	}                    *BgL_rtl_switchz00_bglt;

	typedef struct BgL_rtl_ifeqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_thenz00;
	}                  *BgL_rtl_ifeqz00_bglt;

	typedef struct BgL_rtl_ifnez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_thenz00;
	}                  *BgL_rtl_ifnez00_bglt;

	typedef struct BgL_rtl_goz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_toz00;
	}                *BgL_rtl_goz00_bglt;

	typedef struct BgL_rtl_insz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_z52spillz52;
		obj_t BgL_destz00;
		struct BgL_rtl_funz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}                 *BgL_rtl_insz00_bglt;

	typedef struct BgL_blockz00_bgl
	{
		header_t header;
		obj_t widening;
		int BgL_labelz00;
		obj_t BgL_predsz00;
		obj_t BgL_succsz00;
		obj_t BgL_firstz00;
	}               *BgL_blockz00_bglt;


	extern obj_t BGl_rtl_insz00zzsaw_defsz00;
	static obj_t BGl__ifeqz12z12zzsaw_gotosz00(BgL_rtl_insz00_bglt,
		BgL_blockz00_bglt);
	static obj_t BGl_objectzd2initzd2zzsaw_gotosz00();
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62addzd2gotoszb0zzsaw_gotosz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_gotosz00();
	extern obj_t BGl_rtl_goz00zzsaw_defsz00;
	extern obj_t BGl_rtl_switchz00zzsaw_defsz00;
	BGL_EXPORTED_DECL obj_t BGl_addzd2gotoszd2zzsaw_gotosz00(obj_t);
	extern obj_t BGl_rtl_ifz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__switchz12z12zzsaw_gotosz00(BgL_rtl_selectz00_bglt,
		BgL_rtl_insz00_bglt, obj_t);
	static BgL_rtl_insz00_bglt BGl__gotoz00zzsaw_gotosz00(BgL_blockz00_bglt);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_gotosz00();
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_gotosz00 = BUNSPEC;
	extern obj_t BGl_rtl_ifeqz00zzsaw_defsz00;
	static obj_t BGl_genericzd2initzd2zzsaw_gotosz00();
	static obj_t BGl__ifz00zzsaw_gotosz00(BgL_rtl_ifz00_bglt, BgL_rtl_insz00_bglt,
		obj_t, obj_t);
	static obj_t BGl__ifnez12z12zzsaw_gotosz00(BgL_rtl_insz00_bglt,
		BgL_blockz00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_ifnez00zzsaw_defsz00;
	extern obj_t BGl_rtl_selectz00zzsaw_defsz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_gotosz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzsaw_gotosz00();
	static obj_t BGl_makezd2gotozd2zzsaw_gotosz00(BgL_blockz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_gotosz00();
	static obj_t BGl_addzd2gotozd2zzsaw_gotosz00(BgL_blockz00_bglt, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_gotosz00();
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_STRING(BGl_string1842z00zzsaw_gotosz00,
		BgL_bgl_string1842za700za7za7s1848za7, "CARE", 4);
	      DEFINE_STRING(BGl_string1843z00zzsaw_gotosz00,
		BgL_bgl_string1843za700za7za7s1849za7, "saw_gotos", 9);
	      DEFINE_STRING(BGl_string1844z00zzsaw_gotosz00,
		BgL_bgl_string1844za700za7za7s1850za7, "add-goto ", 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_addzd2gotoszd2envz00zzsaw_gotosz00,
		BgL_bgl_za762addza7d2gotosza7b1851za7, BGl_z62addzd2gotoszb0zzsaw_gotosz00,
		0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzsaw_gotosz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_gotosz00(long
		BgL_checksumz00_2189, char *BgL_fromz00_2190)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_gotosz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_gotosz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_gotosz00();
					BGl_libraryzd2moduleszd2initz00zzsaw_gotosz00();
					BGl_cnstzd2initzd2zzsaw_gotosz00();
					BGl_importedzd2moduleszd2initz00zzsaw_gotosz00();
					return BGl_methodzd2initzd2zzsaw_gotosz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_gotosz00()
	{
		{	/* SawMill/gotos.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_gotos");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "saw_gotos");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_gotos");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_gotos");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_gotos");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_gotos");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_gotosz00()
	{
		{	/* SawMill/gotos.scm 1 */
			{	/* SawMill/gotos.scm 1 */
				obj_t BgL_cportz00_2176;

				{	/* SawMill/gotos.scm 1 */
					obj_t BgL_stringz00_2184;

					BgL_stringz00_2184 = BGl_string1844z00zzsaw_gotosz00;
					{	/* SawMill/gotos.scm 1 */
						obj_t BgL_startz00_2185;

						BgL_startz00_2185 = BINT(((long) 0));
						{	/* SawMill/gotos.scm 1 */
							obj_t BgL_endz00_2186;

							BgL_endz00_2186 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2184)));
							{	/* SawMill/gotos.scm 1 */

								BgL_cportz00_2176 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2184, BgL_startz00_2185, BgL_endz00_2186);
				}}}}
				{
					long BgL_iz00_2177;

					BgL_iz00_2177 = ((long) 0);
				BgL_loopz00_2178:
					if ((BgL_iz00_2177 == ((long) -1)))
						{	/* SawMill/gotos.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/gotos.scm 1 */
							{	/* SawMill/gotos.scm 1 */
								obj_t BgL_arg1846z00_2180;

								{	/* SawMill/gotos.scm 1 */

									{	/* SawMill/gotos.scm 1 */
										obj_t BgL_locationz00_2182;

										BgL_locationz00_2182 = BBOOL(((bool_t) 0));
										{	/* SawMill/gotos.scm 1 */

											BgL_arg1846z00_2180 =
												BGl_readz00zz__readerz00(BgL_cportz00_2176,
												BgL_locationz00_2182);
										}
									}
								}
								{	/* SawMill/gotos.scm 1 */
									int BgL_tmpz00_2214;

									BgL_tmpz00_2214 = (int) (BgL_iz00_2177);
									CNST_TABLE_SET(BgL_tmpz00_2214, BgL_arg1846z00_2180);
							}}
							{	/* SawMill/gotos.scm 1 */
								int BgL_auxz00_2183;

								BgL_auxz00_2183 = (int) ((BgL_iz00_2177 - ((long) 1)));
								{
									long BgL_iz00_2219;

									BgL_iz00_2219 = (long) (BgL_auxz00_2183);
									BgL_iz00_2177 = BgL_iz00_2219;
									goto BgL_loopz00_2178;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_gotosz00()
	{
		{	/* SawMill/gotos.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* add-gotos */
	BGL_EXPORTED_DEF obj_t BGl_addzd2gotoszd2zzsaw_gotosz00(obj_t BgL_lz00_3)
	{
		{	/* SawMill/gotos.scm 9 */
			{
				obj_t BgL_lz00_1761;

				BgL_lz00_1761 = BgL_lz00_3;
			BgL_zc3z04anonymousza31362ze3z87_1762:
				if (PAIRP(BgL_lz00_1761))
					{	/* SawMill/gotos.scm 12 */
						obj_t BgL_rz00_1764;

						BgL_rz00_1764 = CDR(BgL_lz00_1761);
						{	/* SawMill/gotos.scm 13 */
							obj_t BgL_arg1364z00_1765;

							BgL_arg1364z00_1765 = CAR(BgL_lz00_1761);
							BGl_addzd2gotozd2zzsaw_gotosz00(
								((BgL_blockz00_bglt) BgL_arg1364z00_1765), BgL_rz00_1764);
						}
						{
							obj_t BgL_lz00_2228;

							BgL_lz00_2228 = BgL_rz00_1764;
							BgL_lz00_1761 = BgL_lz00_2228;
							goto BgL_zc3z04anonymousza31362ze3z87_1762;
						}
					}
				else
					{	/* SawMill/gotos.scm 11 */
						return BUNSPEC;
					}
			}
		}

	}



/* &add-gotos */
	obj_t BGl_z62addzd2gotoszb0zzsaw_gotosz00(obj_t BgL_envz00_2174,
		obj_t BgL_lz00_2175)
	{
		{	/* SawMill/gotos.scm 9 */
			return BGl_addzd2gotoszd2zzsaw_gotosz00(BgL_lz00_2175);
		}

	}



/* add-goto */
	obj_t BGl_addzd2gotozd2zzsaw_gotosz00(BgL_blockz00_bglt BgL_bz00_4,
		obj_t BgL_lz00_5)
	{
		{	/* SawMill/gotos.scm 20 */
			{	/* SawMill/gotos.scm 21 */
				obj_t BgL_lastz00_1767;

				BgL_lastz00_1767 =
					BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
					(((BgL_blockz00_bglt) COBJECT(BgL_bz00_4))->BgL_firstz00));
				{	/* SawMill/gotos.scm 22 */
					obj_t BgL_addedz00_1768;

					BgL_addedz00_1768 =
						BGl_makezd2gotozd2zzsaw_gotosz00(BgL_bz00_4,
						CAR(BgL_lastz00_1767), BgL_lz00_5);
					if (NULLP(BgL_addedz00_1768))
						{	/* SawMill/gotos.scm 23 */
							return BFALSE;
						}
					else
						{	/* SawMill/gotos.scm 23 */
							return SET_CDR(BgL_lastz00_1767, BgL_addedz00_1768);
						}
				}
			}
		}

	}



/* make-goto */
	obj_t BGl_makezd2gotozd2zzsaw_gotosz00(BgL_blockz00_bglt BgL_bz00_6,
		obj_t BgL_insz00_7, obj_t BgL_lz00_8)
	{
		{	/* SawMill/gotos.scm 29 */
			if (NULLP((((BgL_blockz00_bglt) COBJECT(BgL_bz00_6))->BgL_succsz00)))
				{	/* SawMill/gotos.scm 31 */
					return BNIL;
				}
			else
				{	/* SawMill/gotos.scm 31 */
					if (NULLP(CDR(
								(((BgL_blockz00_bglt) COBJECT(BgL_bz00_6))->BgL_succsz00))))
						{	/* SawMill/gotos.scm 34 */
							obj_t BgL_sz00_1778;

							BgL_sz00_1778 =
								CAR((((BgL_blockz00_bglt) COBJECT(BgL_bz00_6))->BgL_succsz00));
							{	/* SawMill/gotos.scm 35 */
								bool_t BgL_test1858z00_2246;

								if (NULLP(BgL_lz00_8))
									{	/* SawMill/gotos.scm 35 */
										BgL_test1858z00_2246 = ((bool_t) 1);
									}
								else
									{	/* SawMill/gotos.scm 35 */
										if ((CAR(BgL_lz00_8) == BgL_sz00_1778))
											{	/* SawMill/gotos.scm 35 */
												BgL_test1858z00_2246 = ((bool_t) 0);
											}
										else
											{	/* SawMill/gotos.scm 35 */
												BgL_test1858z00_2246 = ((bool_t) 1);
											}
									}
								if (BgL_test1858z00_2246)
									{	/* SawMill/gotos.scm 36 */
										BgL_rtl_insz00_bglt BgL_arg1417z00_1784;

										BgL_arg1417z00_1784 =
											BGl__gotoz00zzsaw_gotosz00(
											((BgL_blockz00_bglt) BgL_sz00_1778));
										return MAKE_YOUNG_PAIR(((obj_t) BgL_arg1417z00_1784), BNIL);
									}
								else
									{	/* SawMill/gotos.scm 35 */
										return BNIL;
									}
							}
						}
					else
						{	/* SawMill/gotos.scm 41 */
							bool_t BgL_test1861z00_2256;

							{	/* SawMill/gotos.scm 41 */
								BgL_rtl_funz00_bglt BgL_arg1465z00_1799;

								BgL_arg1465z00_1799 =
									(((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt) BgL_insz00_7)))->BgL_funz00);
								{	/* SawMill/gotos.scm 41 */
									bool_t BgL_res1834z00_2137;

									BgL_res1834z00_2137 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_arg1465z00_1799),
										BGl_rtl_selectz00zzsaw_defsz00);
									BgL_test1861z00_2256 = BgL_res1834z00_2137;
								}
							}
							if (BgL_test1861z00_2256)
								{	/* SawMill/gotos.scm 41 */
									{	/* SawMill/gotos.scm 42 */
										BgL_rtl_funz00_bglt BgL_arg1441z00_1792;
										obj_t BgL_arg1442z00_1793;

										BgL_arg1441z00_1792 =
											(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt) BgL_insz00_7)))->BgL_funz00);
										BgL_arg1442z00_1793 =
											(((BgL_blockz00_bglt) COBJECT(BgL_bz00_6))->BgL_succsz00);
										BGl__switchz12z12zzsaw_gotosz00(
											((BgL_rtl_selectz00_bglt) BgL_arg1441z00_1792),
											((BgL_rtl_insz00_bglt) BgL_insz00_7),
											BgL_arg1442z00_1793);
									}
									return BNIL;
								}
							else
								{	/* SawMill/gotos.scm 44 */
									bool_t BgL_test1862z00_2267;

									{	/* SawMill/gotos.scm 44 */
										BgL_rtl_funz00_bglt BgL_arg1464z00_1798;

										BgL_arg1464z00_1798 =
											(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt) BgL_insz00_7)))->BgL_funz00);
										{	/* SawMill/gotos.scm 44 */
											bool_t BgL_res1835z00_2138;

											BgL_res1835z00_2138 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_arg1464z00_1798),
												BGl_rtl_ifz00zzsaw_defsz00);
											BgL_test1862z00_2267 = BgL_res1835z00_2138;
										}
									}
									if (BgL_test1862z00_2267)
										{	/* SawMill/gotos.scm 45 */
											BgL_rtl_funz00_bglt BgL_arg1461z00_1796;
											obj_t BgL_arg1462z00_1797;

											BgL_arg1461z00_1796 =
												(((BgL_rtl_insz00_bglt) COBJECT(
														((BgL_rtl_insz00_bglt) BgL_insz00_7)))->BgL_funz00);
											BgL_arg1462z00_1797 =
												(((BgL_blockz00_bglt) COBJECT(BgL_bz00_6))->
												BgL_succsz00);
											return BGl__ifz00zzsaw_gotosz00(((BgL_rtl_ifz00_bglt)
													BgL_arg1461z00_1796),
												((BgL_rtl_insz00_bglt) BgL_insz00_7),
												BgL_arg1462z00_1797, BgL_lz00_8);
										}
									else
										{	/* SawMill/gotos.scm 44 */
											return
												BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
												BGl_string1842z00zzsaw_gotosz00, BgL_insz00_7);
		}}}}}

	}



/* _goto */
	BgL_rtl_insz00_bglt BGl__gotoz00zzsaw_gotosz00(BgL_blockz00_bglt BgL_bz00_9)
	{
		{	/* SawMill/gotos.scm 49 */
			{	/* SawMill/gotos.scm 50 */
				BgL_rtl_insz00_bglt BgL_new1147z00_1803;

				{	/* SawMill/gotos.scm 50 */
					BgL_rtl_insz00_bglt BgL_new1146z00_1807;

					BgL_new1146z00_1807 =
						((BgL_rtl_insz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_insz00_bgl))));
					{	/* SawMill/gotos.scm 50 */
						long BgL_arg1493z00_1808;

						{	/* SawMill/gotos.scm 50 */
							long BgL_res1836z00_2140;

							BgL_res1836z00_2140 =
								BGL_CLASS_INDEX(BGl_rtl_insz00zzsaw_defsz00);
							BgL_arg1493z00_1808 = BgL_res1836z00_2140;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1146z00_1807), BgL_arg1493z00_1808);
					}
					{	/* SawMill/gotos.scm 50 */
						BgL_objectz00_bglt BgL_tmpz00_2284;

						BgL_tmpz00_2284 = ((BgL_objectz00_bglt) BgL_new1146z00_1807);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2284, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1146z00_1807);
					BgL_new1147z00_1803 = BgL_new1146z00_1807;
				}
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1147z00_1803))->BgL_locz00) =
					((obj_t) BFALSE), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1147z00_1803))->
						BgL_z52spillz52) = ((obj_t) BNIL), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1147z00_1803))->BgL_destz00) =
					((obj_t) BFALSE), BUNSPEC);
				{
					BgL_rtl_funz00_bglt BgL_auxz00_2291;

					{	/* SawMill/gotos.scm 51 */
						BgL_rtl_goz00_bglt BgL_new1149z00_1804;

						{	/* SawMill/gotos.scm 51 */
							BgL_rtl_goz00_bglt BgL_new1148z00_1805;

							BgL_new1148z00_1805 =
								((BgL_rtl_goz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_goz00_bgl))));
							{	/* SawMill/gotos.scm 51 */
								long BgL_arg1489z00_1806;

								{	/* SawMill/gotos.scm 51 */
									long BgL_res1837z00_2145;

									{	/* SawMill/gotos.scm 51 */
										obj_t BgL_classz00_2144;

										BgL_classz00_2144 = BGl_rtl_goz00zzsaw_defsz00;
										BgL_res1837z00_2145 = BGL_CLASS_INDEX(BgL_classz00_2144);
									}
									BgL_arg1489z00_1806 = BgL_res1837z00_2145;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1148z00_1805),
									BgL_arg1489z00_1806);
							}
							BgL_new1149z00_1804 = BgL_new1148z00_1805;
						}
						((((BgL_rtl_funz00_bglt) COBJECT(
										((BgL_rtl_funz00_bglt) BgL_new1149z00_1804)))->BgL_locz00) =
							((obj_t) BFALSE), BUNSPEC);
						((((BgL_rtl_goz00_bglt) COBJECT(BgL_new1149z00_1804))->BgL_toz00) =
							((BgL_blockz00_bglt) BgL_bz00_9), BUNSPEC);
						BgL_auxz00_2291 = ((BgL_rtl_funz00_bglt) BgL_new1149z00_1804);
					}
					((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1147z00_1803))->BgL_funz00) =
						((BgL_rtl_funz00_bglt) BgL_auxz00_2291), BUNSPEC);
				}
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1147z00_1803))->BgL_argsz00) =
					((obj_t) BNIL), BUNSPEC);
				return BgL_new1147z00_1803;
			}
		}

	}



/* _switch! */
	obj_t BGl__switchz12z12zzsaw_gotosz00(BgL_rtl_selectz00_bglt BgL_funz00_10,
		BgL_rtl_insz00_bglt BgL_insz00_11, obj_t BgL_succsz00_12)
	{
		{	/* SawMill/gotos.scm 55 */
			{	/* SawMill/gotos.scm 58 */
				BgL_rtl_switchz00_bglt BgL_arg1495z00_1810;

				{	/* SawMill/gotos.scm 58 */
					BgL_rtl_switchz00_bglt BgL_new1152z00_1811;

					{	/* SawMill/gotos.scm 58 */
						BgL_rtl_switchz00_bglt BgL_new1151z00_1812;

						BgL_new1151z00_1812 =
							((BgL_rtl_switchz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rtl_switchz00_bgl))));
						{	/* SawMill/gotos.scm 58 */
							long BgL_arg1497z00_1813;

							{	/* SawMill/gotos.scm 58 */
								long BgL_res1838z00_2149;

								BgL_res1838z00_2149 =
									BGL_CLASS_INDEX(BGl_rtl_switchz00zzsaw_defsz00);
								BgL_arg1497z00_1813 = BgL_res1838z00_2149;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1151z00_1812),
								BgL_arg1497z00_1813);
						}
						BgL_new1152z00_1811 = BgL_new1151z00_1812;
					}
					((((BgL_rtl_funz00_bglt) COBJECT(
									((BgL_rtl_funz00_bglt) BgL_new1152z00_1811)))->BgL_locz00) =
						((obj_t) BFALSE), BUNSPEC);
					((((BgL_rtl_selectz00_bglt) COBJECT(((BgL_rtl_selectz00_bglt)
										BgL_new1152z00_1811)))->BgL_typez00) =
						((BgL_typez00_bglt) (((BgL_rtl_selectz00_bglt)
									COBJECT(BgL_funz00_10))->BgL_typez00)), BUNSPEC);
					((((BgL_rtl_selectz00_bglt) COBJECT(((BgL_rtl_selectz00_bglt)
										BgL_new1152z00_1811)))->BgL_patternsz00) =
						((obj_t) (((BgL_rtl_selectz00_bglt) COBJECT(BgL_funz00_10))->
								BgL_patternsz00)), BUNSPEC);
					((((BgL_rtl_switchz00_bglt) COBJECT(BgL_new1152z00_1811))->
							BgL_labelsz00) = ((obj_t) BgL_succsz00_12), BUNSPEC);
					BgL_arg1495z00_1810 = BgL_new1152z00_1811;
				}
				return
					((((BgL_rtl_insz00_bglt) COBJECT(BgL_insz00_11))->BgL_funz00) =
					((BgL_rtl_funz00_bglt) ((BgL_rtl_funz00_bglt) BgL_arg1495z00_1810)),
					BUNSPEC);
			}
		}

	}



/* _if */
	obj_t BGl__ifz00zzsaw_gotosz00(BgL_rtl_ifz00_bglt BgL_funz00_13,
		BgL_rtl_insz00_bglt BgL_insz00_14, obj_t BgL_succsz00_15,
		obj_t BgL_nextsz00_16)
	{
		{	/* SawMill/gotos.scm 64 */
			{	/* SawMill/gotos.scm 65 */
				obj_t BgL_thenz00_1814;
				obj_t BgL_elsez00_1815;

				BgL_thenz00_1814 = CAR(((obj_t) BgL_succsz00_15));
				{	/* SawMill/gotos.scm 65 */
					obj_t BgL_pairz00_2158;

					BgL_pairz00_2158 = CDR(((obj_t) BgL_succsz00_15));
					BgL_elsez00_1815 = CAR(BgL_pairz00_2158);
				}
				if (NULLP(BgL_nextsz00_16))
					{	/* SawMill/gotos.scm 66 */
						BGl__ifeqz12z12zzsaw_gotosz00(BgL_insz00_14,
							((BgL_blockz00_bglt) BgL_elsez00_1815));
						{	/* SawMill/gotos.scm 68 */
							BgL_rtl_insz00_bglt BgL_arg1518z00_1817;

							BgL_arg1518z00_1817 =
								BGl__gotoz00zzsaw_gotosz00(
								((BgL_blockz00_bglt) BgL_thenz00_1814));
							return MAKE_YOUNG_PAIR(((obj_t) BgL_arg1518z00_1817), BNIL);
						}
					}
				else
					{	/* SawMill/gotos.scm 66 */
						if ((BgL_thenz00_1814 == CAR(BgL_nextsz00_16)))
							{	/* SawMill/gotos.scm 69 */
								BGl__ifeqz12z12zzsaw_gotosz00(BgL_insz00_14,
									((BgL_blockz00_bglt) BgL_elsez00_1815));
								return BNIL;
							}
						else
							{	/* SawMill/gotos.scm 69 */
								if ((BgL_elsez00_1815 == CAR(BgL_nextsz00_16)))
									{	/* SawMill/gotos.scm 72 */
										BGl__ifnez12z12zzsaw_gotosz00(BgL_insz00_14,
											((BgL_blockz00_bglt) BgL_thenz00_1814));
										return BNIL;
									}
								else
									{	/* SawMill/gotos.scm 72 */
										BGl__ifeqz12z12zzsaw_gotosz00(BgL_insz00_14,
											((BgL_blockz00_bglt) BgL_elsez00_1815));
										{	/* SawMill/gotos.scm 77 */
											BgL_rtl_insz00_bglt BgL_arg1536z00_1822;

											BgL_arg1536z00_1822 =
												BGl__gotoz00zzsaw_gotosz00(
												((BgL_blockz00_bglt) BgL_thenz00_1814));
											return
												MAKE_YOUNG_PAIR(((obj_t) BgL_arg1536z00_1822), BNIL);
										}
									}
							}
					}
			}
		}

	}



/* _ifeq! */
	obj_t BGl__ifeqz12z12zzsaw_gotosz00(BgL_rtl_insz00_bglt BgL_insz00_17,
		BgL_blockz00_bglt BgL_thenz00_18)
	{
		{	/* SawMill/gotos.scm 79 */
			{	/* SawMill/gotos.scm 80 */
				BgL_rtl_ifeqz00_bglt BgL_arg1552z00_1825;

				{	/* SawMill/gotos.scm 80 */
					BgL_rtl_ifeqz00_bglt BgL_new1154z00_1826;

					{	/* SawMill/gotos.scm 80 */
						BgL_rtl_ifeqz00_bglt BgL_new1153z00_1827;

						BgL_new1153z00_1827 =
							((BgL_rtl_ifeqz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rtl_ifeqz00_bgl))));
						{	/* SawMill/gotos.scm 80 */
							long BgL_arg1558z00_1828;

							{	/* SawMill/gotos.scm 80 */
								long BgL_res1840z00_2163;

								BgL_res1840z00_2163 =
									BGL_CLASS_INDEX(BGl_rtl_ifeqz00zzsaw_defsz00);
								BgL_arg1558z00_1828 = BgL_res1840z00_2163;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1153z00_1827),
								BgL_arg1558z00_1828);
						}
						BgL_new1154z00_1826 = BgL_new1153z00_1827;
					}
					((((BgL_rtl_funz00_bglt) COBJECT(
									((BgL_rtl_funz00_bglt) BgL_new1154z00_1826)))->BgL_locz00) =
						((obj_t) BFALSE), BUNSPEC);
					((((BgL_rtl_ifeqz00_bglt) COBJECT(BgL_new1154z00_1826))->
							BgL_thenz00) = ((BgL_blockz00_bglt) BgL_thenz00_18), BUNSPEC);
					BgL_arg1552z00_1825 = BgL_new1154z00_1826;
				}
				return
					((((BgL_rtl_insz00_bglt) COBJECT(BgL_insz00_17))->BgL_funz00) =
					((BgL_rtl_funz00_bglt) ((BgL_rtl_funz00_bglt) BgL_arg1552z00_1825)),
					BUNSPEC);
			}
		}

	}



/* _ifne! */
	obj_t BGl__ifnez12z12zzsaw_gotosz00(BgL_rtl_insz00_bglt BgL_insz00_19,
		BgL_blockz00_bglt BgL_thenz00_20)
	{
		{	/* SawMill/gotos.scm 82 */
			{	/* SawMill/gotos.scm 83 */
				BgL_rtl_ifnez00_bglt BgL_arg1561z00_1829;

				{	/* SawMill/gotos.scm 83 */
					BgL_rtl_ifnez00_bglt BgL_new1157z00_1830;

					{	/* SawMill/gotos.scm 83 */
						BgL_rtl_ifnez00_bglt BgL_new1156z00_1831;

						BgL_new1156z00_1831 =
							((BgL_rtl_ifnez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rtl_ifnez00_bgl))));
						{	/* SawMill/gotos.scm 83 */
							long BgL_arg1564z00_1832;

							{	/* SawMill/gotos.scm 83 */
								long BgL_res1841z00_2169;

								BgL_res1841z00_2169 =
									BGL_CLASS_INDEX(BGl_rtl_ifnez00zzsaw_defsz00);
								BgL_arg1564z00_1832 = BgL_res1841z00_2169;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1156z00_1831),
								BgL_arg1564z00_1832);
						}
						BgL_new1157z00_1830 = BgL_new1156z00_1831;
					}
					((((BgL_rtl_funz00_bglt) COBJECT(
									((BgL_rtl_funz00_bglt) BgL_new1157z00_1830)))->BgL_locz00) =
						((obj_t) BFALSE), BUNSPEC);
					((((BgL_rtl_ifnez00_bglt) COBJECT(BgL_new1157z00_1830))->
							BgL_thenz00) = ((BgL_blockz00_bglt) BgL_thenz00_20), BUNSPEC);
					BgL_arg1561z00_1829 = BgL_new1157z00_1830;
				}
				return
					((((BgL_rtl_insz00_bglt) COBJECT(BgL_insz00_19))->BgL_funz00) =
					((BgL_rtl_funz00_bglt) ((BgL_rtl_funz00_bglt) BgL_arg1561z00_1829)),
					BUNSPEC);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_gotosz00()
	{
		{	/* SawMill/gotos.scm 1 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_gotosz00()
	{
		{	/* SawMill/gotos.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_gotosz00()
	{
		{	/* SawMill/gotos.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_gotosz00()
	{
		{	/* SawMill/gotos.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1843z00zzsaw_gotosz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1843z00zzsaw_gotosz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1843z00zzsaw_gotosz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string1843z00zzsaw_gotosz00));
		}

	}

#ifdef __cplusplus
}
#endif
