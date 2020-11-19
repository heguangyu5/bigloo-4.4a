/*===========================================================================*/
/*   (SawMill/InlineReturn.scm)                                              */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/InlineReturn.scm) */
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

	typedef struct BgL_rtl_regz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_varz00;
		obj_t BgL_onexprzf3zf3;
		obj_t BgL_namez00;
		obj_t BgL_keyz00;
		obj_t BgL_hardwarez00;
	}                 *BgL_rtl_regz00_bglt;

	typedef struct BgL_rtl_funz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_funz00_bglt;

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

	typedef struct BgL_dfsz00_bgl
	{
	}             *BgL_dfsz00_bglt;


	extern obj_t BGl_rtl_insz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_findzd2returnszd2zzsaw_inline_returnz00(BgL_blockz00_bglt);
	static obj_t BGl_objectzd2initzd2zzsaw_inline_returnz00();
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	static bool_t BGl_inlinezd2returnzd2zzsaw_inline_returnz00(BgL_blockz00_bglt);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzsaw_inline_returnz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_inline_returnz00();
	static obj_t BGl_dfsz00zzsaw_inline_returnz00 = BUNSPEC;
	static long BGl_za2inlinezd2depthza2zd2zzsaw_inline_returnz00;
	BGL_IMPORT obj_t bgl_remq_bang(obj_t, obj_t);
	static bool_t BGl_dfsze70ze7zzsaw_inline_returnz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_inline_returnz00();
	static obj_t BGl_z62inlinezd2returnszb0zzsaw_inline_returnz00(obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1627z62zzsaw_inline_returnz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1635z62zzsaw_inline_returnz00(obj_t,
		obj_t);
	static bool_t BGl_simplezd2returnzf3ze70zc6zzsaw_inline_returnz00(obj_t,
		long);
	static BgL_blockz00_bglt BGl_z62lambda1641z62zzsaw_inline_returnz00(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_inline_returnz00 =
		BUNSPEC;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl_toplevelzd2initzd2zzsaw_inline_returnz00();
	static obj_t BGl_genericzd2initzd2zzsaw_inline_returnz00();
	static obj_t BGl_reallocze70ze7zzsaw_inline_returnz00(obj_t, obj_t);
	static BgL_rtl_insz00_bglt BGl_renamezd2inszd2zzsaw_inline_returnz00(obj_t,
		obj_t);
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_lastz00zzsaw_defsz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_inline_returnz00(long, char *);
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
	static obj_t BGl_z62zc3z04anonymousza31640ze3ze5zzsaw_inline_returnz00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_inline_returnz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_inline_returnz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_inline_returnz00();
	BGL_IMPORT obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
	static BgL_rtl_regz00_bglt BGl_copyzd2regzd2zzsaw_inline_returnz00(obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inlinezd2returnszd2zzsaw_inline_returnz00(BgL_blockz00_bglt);
	extern obj_t BGl_blockz00zzsaw_defsz00;
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string1899z00zzsaw_inline_returnz00,
		BgL_bgl_string1899za700za7za7s1904za7, "saw_inline_return", 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inlinezd2returnszd2envz00zzsaw_inline_returnz00,
		BgL_bgl_za762inlineza7d2retu1905z00,
		BGl_z62inlinezd2returnszb0zzsaw_inline_returnz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1900z00zzsaw_inline_returnz00,
		BgL_bgl_string1900za700za7za7s1906za7, "saw_inline_return dfs ", 22);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1895z00zzsaw_inline_returnz00,
		BgL_bgl_za762lambda1641za7621907z00,
		BGl_z62lambda1641z62zzsaw_inline_returnz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1896z00zzsaw_inline_returnz00,
		BgL_bgl_za762za7c3za704anonymo1908za7,
		BGl_z62zc3z04anonymousza31640ze3ze5zzsaw_inline_returnz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1897z00zzsaw_inline_returnz00,
		BgL_bgl_za762lambda1635za7621909z00,
		BGl_z62lambda1635z62zzsaw_inline_returnz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1898z00zzsaw_inline_returnz00,
		BgL_bgl_za762lambda1627za7621910z00,
		BGl_z62lambda1627z62zzsaw_inline_returnz00, 0L, BUNSPEC, 4);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_dfsz00zzsaw_inline_returnz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzsaw_inline_returnz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzsaw_inline_returnz00(long
		BgL_checksumz00_2397, char *BgL_fromz00_2398)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_inline_returnz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_inline_returnz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_inline_returnz00();
					BGl_libraryzd2moduleszd2initz00zzsaw_inline_returnz00();
					BGl_cnstzd2initzd2zzsaw_inline_returnz00();
					BGl_importedzd2moduleszd2initz00zzsaw_inline_returnz00();
					BGl_objectzd2initzd2zzsaw_inline_returnz00();
					return BGl_toplevelzd2initzd2zzsaw_inline_returnz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_inline_returnz00()
	{
		{	/* SawMill/InlineReturn.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_inline_return");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_inline_return");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_inline_return");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_inline_return");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_inline_return");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_inline_return");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_inline_return");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_inline_returnz00()
	{
		{	/* SawMill/InlineReturn.scm 1 */
			{	/* SawMill/InlineReturn.scm 1 */
				obj_t BgL_cportz00_2359;

				{	/* SawMill/InlineReturn.scm 1 */
					obj_t BgL_stringz00_2367;

					BgL_stringz00_2367 = BGl_string1900z00zzsaw_inline_returnz00;
					{	/* SawMill/InlineReturn.scm 1 */
						obj_t BgL_startz00_2368;

						BgL_startz00_2368 = BINT(((long) 0));
						{	/* SawMill/InlineReturn.scm 1 */
							obj_t BgL_endz00_2369;

							BgL_endz00_2369 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2367)));
							{	/* SawMill/InlineReturn.scm 1 */

								BgL_cportz00_2359 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2367, BgL_startz00_2368, BgL_endz00_2369);
				}}}}
				{
					long BgL_iz00_2360;

					BgL_iz00_2360 = ((long) 1);
				BgL_loopz00_2361:
					if ((BgL_iz00_2360 == ((long) -1)))
						{	/* SawMill/InlineReturn.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/InlineReturn.scm 1 */
							{	/* SawMill/InlineReturn.scm 1 */
								obj_t BgL_arg1902z00_2363;

								{	/* SawMill/InlineReturn.scm 1 */

									{	/* SawMill/InlineReturn.scm 1 */
										obj_t BgL_locationz00_2365;

										BgL_locationz00_2365 = BBOOL(((bool_t) 0));
										{	/* SawMill/InlineReturn.scm 1 */

											BgL_arg1902z00_2363 =
												BGl_readz00zz__readerz00(BgL_cportz00_2359,
												BgL_locationz00_2365);
										}
									}
								}
								{	/* SawMill/InlineReturn.scm 1 */
									int BgL_tmpz00_2424;

									BgL_tmpz00_2424 = (int) (BgL_iz00_2360);
									CNST_TABLE_SET(BgL_tmpz00_2424, BgL_arg1902z00_2363);
							}}
							{	/* SawMill/InlineReturn.scm 1 */
								int BgL_auxz00_2366;

								BgL_auxz00_2366 = (int) ((BgL_iz00_2360 - ((long) 1)));
								{
									long BgL_iz00_2429;

									BgL_iz00_2429 = (long) (BgL_auxz00_2366);
									BgL_iz00_2360 = BgL_iz00_2429;
									goto BgL_loopz00_2361;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_inline_returnz00()
	{
		{	/* SawMill/InlineReturn.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_inline_returnz00()
	{
		{	/* SawMill/InlineReturn.scm 1 */
			return (BGl_za2inlinezd2depthza2zd2zzsaw_inline_returnz00 =
				((long) 2), BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzsaw_inline_returnz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1757;

				BgL_headz00_1757 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1758;
					obj_t BgL_tailz00_1759;

					BgL_prevz00_1758 = BgL_headz00_1757;
					BgL_tailz00_1759 = BgL_l1z00_1;
				BgL_loopz00_1760:
					if (PAIRP(BgL_tailz00_1759))
						{
							obj_t BgL_newzd2prevzd2_1762;

							BgL_newzd2prevzd2_1762 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1759), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1758, BgL_newzd2prevzd2_1762);
							{
								obj_t BgL_tailz00_2439;
								obj_t BgL_prevz00_2438;

								BgL_prevz00_2438 = BgL_newzd2prevzd2_1762;
								BgL_tailz00_2439 = CDR(BgL_tailz00_1759);
								BgL_tailz00_1759 = BgL_tailz00_2439;
								BgL_prevz00_1758 = BgL_prevz00_2438;
								goto BgL_loopz00_1760;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1757);
				}
			}
		}

	}



/* inline-returns */
	BGL_EXPORTED_DEF obj_t
		BGl_inlinezd2returnszd2zzsaw_inline_returnz00(BgL_blockz00_bglt BgL_bz00_20)
	{
		{	/* SawMill/InlineReturn.scm 8 */
			{	/* SawMill/InlineReturn.scm 9 */
				obj_t BgL_g1387z00_1779;

				BgL_g1387z00_1779 =
					BGl_findzd2returnszd2zzsaw_inline_returnz00(BgL_bz00_20);
				{
					obj_t BgL_l1385z00_1781;

					{	/* SawMill/InlineReturn.scm 9 */
						bool_t BgL_tmpz00_2443;

						BgL_l1385z00_1781 = BgL_g1387z00_1779;
					BgL_zc3z04anonymousza31423ze3z87_1782:
						if (PAIRP(BgL_l1385z00_1781))
							{	/* SawMill/InlineReturn.scm 9 */
								{	/* SawMill/InlineReturn.scm 9 */
									obj_t BgL_arg1441z00_1784;

									BgL_arg1441z00_1784 = CAR(BgL_l1385z00_1781);
									BGl_inlinezd2returnzd2zzsaw_inline_returnz00(
										((BgL_blockz00_bglt) BgL_arg1441z00_1784));
								}
								{
									obj_t BgL_l1385z00_2449;

									BgL_l1385z00_2449 = CDR(BgL_l1385z00_1781);
									BgL_l1385z00_1781 = BgL_l1385z00_2449;
									goto BgL_zc3z04anonymousza31423ze3z87_1782;
								}
							}
						else
							{	/* SawMill/InlineReturn.scm 9 */
								BgL_tmpz00_2443 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_2443);
					}
				}
			}
		}

	}



/* &inline-returns */
	obj_t BGl_z62inlinezd2returnszb0zzsaw_inline_returnz00(obj_t BgL_envz00_2338,
		obj_t BgL_bz00_2339)
	{
		{	/* SawMill/InlineReturn.scm 8 */
			return
				BGl_inlinezd2returnszd2zzsaw_inline_returnz00(
				((BgL_blockz00_bglt) BgL_bz00_2339));
		}

	}



/* inline-return */
	bool_t BGl_inlinezd2returnzd2zzsaw_inline_returnz00(BgL_blockz00_bglt
		BgL_bz00_21)
	{
		{	/* SawMill/InlineReturn.scm 17 */
			{
				BgL_blockz00_bglt BgL_bz00_1829;
				obj_t BgL_lz00_1830;
				BgL_blockz00_bglt BgL_sz00_1831;

				{	/* SawMill/InlineReturn.scm 37 */
					obj_t BgL_lz00_1790;

					BgL_lz00_1790 =
						(((BgL_blockz00_bglt) COBJECT(BgL_bz00_21))->BgL_firstz00);
					if (BGl_simplezd2returnzf3ze70zc6zzsaw_inline_returnz00(BgL_lz00_1790,
							((long) 2)))
						{	/* SawMill/InlineReturn.scm 39 */
							obj_t BgL_g1390z00_1792;

							BgL_g1390z00_1792 =
								(((BgL_blockz00_bglt) COBJECT(BgL_bz00_21))->BgL_predsz00);
							{
								obj_t BgL_l1388z00_1794;

								BgL_l1388z00_1794 = BgL_g1390z00_1792;
							BgL_zc3z04anonymousza31444ze3z87_1795:
								if (PAIRP(BgL_l1388z00_1794))
									{	/* SawMill/InlineReturn.scm 41 */
										{	/* SawMill/InlineReturn.scm 39 */
											obj_t BgL_pz00_1797;

											BgL_pz00_1797 = CAR(BgL_l1388z00_1794);
											{	/* SawMill/InlineReturn.scm 39 */
												bool_t BgL_test1917z00_2461;

												{	/* SawMill/InlineReturn.scm 39 */
													obj_t BgL_tmpz00_2462;

													{	/* SawMill/InlineReturn.scm 39 */
														obj_t BgL_pairz00_2261;

														BgL_pairz00_2261 =
															(((BgL_blockz00_bglt) COBJECT(
																	((BgL_blockz00_bglt) BgL_pz00_1797)))->
															BgL_succsz00);
														BgL_tmpz00_2462 = CDR(BgL_pairz00_2261);
													}
													BgL_test1917z00_2461 = NULLP(BgL_tmpz00_2462);
												}
												if (BgL_test1917z00_2461)
													{	/* SawMill/InlineReturn.scm 39 */
														BgL_bz00_1829 = ((BgL_blockz00_bglt) BgL_pz00_1797);
														BgL_lz00_1830 = BgL_lz00_1790;
														BgL_sz00_1831 = BgL_bz00_21;
														{	/* SawMill/InlineReturn.scm 33 */
															obj_t BgL_arg1536z00_1833;

															BgL_arg1536z00_1833 =
																BGl_reallocze70ze7zzsaw_inline_returnz00
																(BGl_appendzd221011zd2zzsaw_inline_returnz00(((
																			(BgL_blockz00_bglt)
																			COBJECT(BgL_bz00_1829))->BgL_firstz00),
																	BgL_lz00_1830), BNIL);
															((((BgL_blockz00_bglt) COBJECT(BgL_bz00_1829))->
																	BgL_firstz00) =
																((obj_t) ((obj_t) BgL_arg1536z00_1833)),
																BUNSPEC);
														}
														((((BgL_blockz00_bglt) COBJECT(BgL_bz00_1829))->
																BgL_succsz00) = ((obj_t) BNIL), BUNSPEC);
														{	/* SawMill/InlineReturn.scm 35 */
															obj_t BgL_arg1552z00_1836;

															{	/* SawMill/InlineReturn.scm 35 */
																obj_t BgL_arg1558z00_1837;

																BgL_arg1558z00_1837 =
																	(((BgL_blockz00_bglt)
																		COBJECT(BgL_sz00_1831))->BgL_predsz00);
																BgL_arg1552z00_1836 =
																	bgl_remq_bang(((obj_t) BgL_bz00_1829),
																	BgL_arg1558z00_1837);
															}
															((((BgL_blockz00_bglt) COBJECT(BgL_sz00_1831))->
																	BgL_predsz00) =
																((obj_t) BgL_arg1552z00_1836), BUNSPEC);
														}
														BGl_inlinezd2returnzd2zzsaw_inline_returnz00
															(BgL_bz00_1829);
													}
												else
													{	/* SawMill/InlineReturn.scm 39 */
														((bool_t) 0);
													}
											}
										}
										{
											obj_t BgL_l1388z00_2479;

											BgL_l1388z00_2479 = CDR(BgL_l1388z00_1794);
											BgL_l1388z00_1794 = BgL_l1388z00_2479;
											goto BgL_zc3z04anonymousza31444ze3z87_1795;
										}
									}
								else
									{	/* SawMill/InlineReturn.scm 41 */
										return ((bool_t) 1);
									}
							}
						}
					else
						{	/* SawMill/InlineReturn.scm 38 */
							return ((bool_t) 0);
						}
				}
			}
		}

	}



/* realloc~0 */
	obj_t BGl_reallocze70ze7zzsaw_inline_returnz00(obj_t BgL_lz00_1817,
		obj_t BgL_rmapz00_1818)
	{
		{	/* SawMill/InlineReturn.scm 31 */
			if (NULLP(BgL_lz00_1817))
				{	/* SawMill/InlineReturn.scm 26 */
					return BgL_lz00_1817;
				}
			else
				{	/* SawMill/InlineReturn.scm 28 */
					obj_t BgL_destz00_1821;

					BgL_destz00_1821 =
						(((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt)
									CAR(((obj_t) BgL_lz00_1817)))))->BgL_destz00);
					if (CBOOL(BgL_destz00_1821))
						{	/* SawMill/InlineReturn.scm 29 */
							obj_t BgL_arg1489z00_1822;

							{	/* SawMill/InlineReturn.scm 29 */
								BgL_rtl_regz00_bglt BgL_arg1493z00_1823;

								BgL_arg1493z00_1823 =
									BGl_copyzd2regzd2zzsaw_inline_returnz00(BgL_destz00_1821);
								BgL_arg1489z00_1822 =
									MAKE_YOUNG_PAIR(BgL_destz00_1821,
									((obj_t) BgL_arg1493z00_1823));
							}
							BgL_rmapz00_1818 =
								MAKE_YOUNG_PAIR(BgL_arg1489z00_1822, BgL_rmapz00_1818);
						}
					else
						{	/* SawMill/InlineReturn.scm 29 */
							BFALSE;
						}
					{	/* SawMill/InlineReturn.scm 30 */
						BgL_rtl_insz00_bglt BgL_arg1495z00_1824;
						obj_t BgL_arg1497z00_1825;

						{	/* SawMill/InlineReturn.scm 30 */
							obj_t BgL_arg1518z00_1826;

							BgL_arg1518z00_1826 = CAR(((obj_t) BgL_lz00_1817));
							BgL_arg1495z00_1824 =
								BGl_renamezd2inszd2zzsaw_inline_returnz00(BgL_arg1518z00_1826,
								BgL_rmapz00_1818);
						}
						{	/* SawMill/InlineReturn.scm 31 */
							obj_t BgL_arg1521z00_1827;

							BgL_arg1521z00_1827 = CDR(((obj_t) BgL_lz00_1817));
							BgL_arg1497z00_1825 =
								BGl_reallocze70ze7zzsaw_inline_returnz00(BgL_arg1521z00_1827,
								BgL_rmapz00_1818);
						}
						return
							MAKE_YOUNG_PAIR(
							((obj_t) BgL_arg1495z00_1824), BgL_arg1497z00_1825);
					}
				}
		}

	}



/* simple-return?~0 */
	bool_t BGl_simplezd2returnzf3ze70zc6zzsaw_inline_returnz00(obj_t
		BgL_lz00_1805, long BgL_nz00_1806)
	{
		{	/* SawMill/InlineReturn.scm 24 */
		BGl_simplezd2returnzf3ze70zc6zzsaw_inline_returnz00:
			{	/* SawMill/InlineReturn.scm 19 */
				obj_t BgL_rz00_1808;

				BgL_rz00_1808 = CDR(((obj_t) BgL_lz00_1805));
				{	/* SawMill/InlineReturn.scm 20 */
					bool_t BgL__ortest_1166z00_1809;

					BgL__ortest_1166z00_1809 = NULLP(BgL_rz00_1808);
					if (BgL__ortest_1166z00_1809)
						{	/* SawMill/InlineReturn.scm 20 */
							return BgL__ortest_1166z00_1809;
						}
					else
						{	/* SawMill/InlineReturn.scm 21 */
							bool_t BgL__ortest_1167z00_1810;

							{	/* SawMill/InlineReturn.scm 21 */
								bool_t BgL_test1921z00_2505;

								{	/* SawMill/InlineReturn.scm 21 */
									BgL_rtl_funz00_bglt BgL_arg1476z00_1815;

									BgL_arg1476z00_1815 =
										(((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt)
													CAR(((obj_t) BgL_lz00_1805)))))->BgL_funz00);
									{	/* SawMill/InlineReturn.scm 21 */
										bool_t BgL_res1870z00_2237;

										BgL_res1870z00_2237 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_arg1476z00_1815),
											BGl_rtl_movz00zzsaw_defsz00);
										BgL_test1921z00_2505 = BgL_res1870z00_2237;
									}
								}
								if (BgL_test1921z00_2505)
									{	/* SawMill/InlineReturn.scm 21 */
										BgL__ortest_1167z00_1810 =
											BGl_simplezd2returnzf3ze70zc6zzsaw_inline_returnz00
											(BgL_rz00_1808, BgL_nz00_1806);
									}
								else
									{	/* SawMill/InlineReturn.scm 21 */
										BgL__ortest_1167z00_1810 = ((bool_t) 0);
									}
							}
							if (BgL__ortest_1167z00_1810)
								{	/* SawMill/InlineReturn.scm 21 */
									return BgL__ortest_1167z00_1810;
								}
							else
								{	/* SawMill/InlineReturn.scm 21 */
									if ((BgL_nz00_1806 > ((long) 0)))
										{
											long BgL_nz00_2517;
											obj_t BgL_lz00_2516;

											BgL_lz00_2516 = BgL_rz00_1808;
											BgL_nz00_2517 = (BgL_nz00_1806 - ((long) 1));
											BgL_nz00_1806 = BgL_nz00_2517;
											BgL_lz00_1805 = BgL_lz00_2516;
											goto BGl_simplezd2returnzf3ze70zc6zzsaw_inline_returnz00;
										}
									else
										{	/* SawMill/InlineReturn.scm 23 */
											return ((bool_t) 0);
										}
								}
						}
				}
			}
		}

	}



/* find-returns */
	obj_t BGl_findzd2returnszd2zzsaw_inline_returnz00(BgL_blockz00_bglt
		BgL_bz00_22)
	{
		{	/* SawMill/InlineReturn.scm 46 */
			{	/* SawMill/InlineReturn.scm 47 */
				struct bgl_cell BgL_box1924_2357z00;
				obj_t BgL_retsz00_2357;

				BgL_retsz00_2357 = MAKE_CELL_STACK(BNIL, BgL_box1924_2357z00);
				BGl_dfsze70ze7zzsaw_inline_returnz00(BgL_retsz00_2357,
					((obj_t) BgL_bz00_22));
				return CELL_REF(BgL_retsz00_2357);
			}
		}

	}



/* dfs~0 */
	bool_t BGl_dfsze70ze7zzsaw_inline_returnz00(obj_t BgL_retsz00_2355,
		obj_t BgL_bz00_1843)
	{
		{	/* SawMill/InlineReturn.scm 48 */
			{	/* SawMill/InlineReturn.scm 49 */
				BgL_dfsz00_bglt BgL_wide1172z00_1847;

				BgL_wide1172z00_1847 =
					((BgL_dfsz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct BgL_dfsz00_bgl))));
				{	/* SawMill/InlineReturn.scm 49 */
					obj_t BgL_auxz00_2526;
					BgL_objectz00_bglt BgL_tmpz00_2522;

					BgL_auxz00_2526 = ((obj_t) BgL_wide1172z00_1847);
					BgL_tmpz00_2522 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1843)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2522, BgL_auxz00_2526);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1843)));
				{	/* SawMill/InlineReturn.scm 49 */
					long BgL_arg1561z00_1848;

					{	/* SawMill/InlineReturn.scm 49 */
						long BgL_res1877z00_2266;

						BgL_res1877z00_2266 =
							BGL_CLASS_INDEX(BGl_dfsz00zzsaw_inline_returnz00);
						BgL_arg1561z00_1848 = BgL_res1877z00_2266;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_bz00_1843))), BgL_arg1561z00_1848);
				}
				((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1843)));
			}
			((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1843));
			{	/* SawMill/InlineReturn.scm 50 */
				BgL_rtl_funz00_bglt BgL_funz00_1850;

				BgL_funz00_1850 =
					(((BgL_rtl_insz00_bglt) COBJECT(
							((BgL_rtl_insz00_bglt)
								CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
										(((BgL_blockz00_bglt) COBJECT(
													((BgL_blockz00_bglt) BgL_bz00_1843)))->
											BgL_firstz00))))))->BgL_funz00);
				{	/* SawMill/InlineReturn.scm 51 */
					bool_t BgL_test1925z00_2548;

					{	/* SawMill/InlineReturn.scm 51 */
						bool_t BgL_res1878z00_2272;

						BgL_res1878z00_2272 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_funz00_1850), BGl_rtl_lastz00zzsaw_defsz00);
						BgL_test1925z00_2548 = BgL_res1878z00_2272;
					}
					if (BgL_test1925z00_2548)
						{	/* SawMill/InlineReturn.scm 51 */
							obj_t BgL_auxz00_2356;

							BgL_auxz00_2356 =
								MAKE_YOUNG_PAIR(BgL_bz00_1843, CELL_REF(BgL_retsz00_2355));
							CELL_SET(BgL_retsz00_2355, BgL_auxz00_2356);
						}
					else
						{	/* SawMill/InlineReturn.scm 51 */
							BFALSE;
						}
				}
			}
			{	/* SawMill/InlineReturn.scm 52 */
				obj_t BgL_g1393z00_1855;

				BgL_g1393z00_1855 =
					(((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_bz00_1843)))->BgL_succsz00);
				{
					obj_t BgL_l1391z00_1857;

					BgL_l1391z00_1857 = BgL_g1393z00_1855;
				BgL_zc3z04anonymousza31574ze3z87_1858:
					if (PAIRP(BgL_l1391z00_1857))
						{	/* SawMill/InlineReturn.scm 52 */
							{	/* SawMill/InlineReturn.scm 52 */
								obj_t BgL_sz00_1860;

								BgL_sz00_1860 = CAR(BgL_l1391z00_1857);
								if (BGl_isazf3zf3zz__objectz00(BgL_sz00_1860,
										BGl_dfsz00zzsaw_inline_returnz00))
									{	/* SawMill/InlineReturn.scm 52 */
										((bool_t) 0);
									}
								else
									{	/* SawMill/InlineReturn.scm 52 */
										BGl_dfsze70ze7zzsaw_inline_returnz00(BgL_retsz00_2355,
											BgL_sz00_1860);
									}
							}
							{
								obj_t BgL_l1391z00_2560;

								BgL_l1391z00_2560 = CDR(BgL_l1391z00_1857);
								BgL_l1391z00_1857 = BgL_l1391z00_2560;
								goto BgL_zc3z04anonymousza31574ze3z87_1858;
							}
						}
					else
						{	/* SawMill/InlineReturn.scm 52 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* copy-reg */
	BgL_rtl_regz00_bglt BGl_copyzd2regzd2zzsaw_inline_returnz00(obj_t BgL_rz00_23)
	{
		{	/* SawMill/InlineReturn.scm 56 */
			{	/* SawMill/InlineReturn.scm 58 */
				BgL_rtl_regz00_bglt BgL_new1176z00_1866;

				{	/* SawMill/InlineReturn.scm 58 */
					BgL_rtl_regz00_bglt BgL_new1175z00_1871;

					BgL_new1175z00_1871 =
						((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_regz00_bgl))));
					{	/* SawMill/InlineReturn.scm 58 */
						long BgL_arg1592z00_1872;

						{	/* SawMill/InlineReturn.scm 58 */
							long BgL_res1881z00_2279;

							BgL_res1881z00_2279 =
								BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
							BgL_arg1592z00_1872 = BgL_res1881z00_2279;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1175z00_1871), BgL_arg1592z00_1872);
					}
					{	/* SawMill/InlineReturn.scm 58 */
						BgL_objectz00_bglt BgL_tmpz00_2566;

						BgL_tmpz00_2566 = ((BgL_objectz00_bglt) BgL_new1175z00_1871);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2566, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1175z00_1871);
					BgL_new1176z00_1866 = BgL_new1175z00_1871;
				}
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1176z00_1866))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_rtl_regz00_bglt)
								COBJECT(((BgL_rtl_regz00_bglt) BgL_rz00_23)))->BgL_typez00)),
					BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1176z00_1866))->BgL_varz00) =
					((obj_t) (((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
										BgL_rz00_23)))->BgL_varz00)), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1176z00_1866))->
						BgL_onexprzf3zf3) = ((obj_t) BFALSE), BUNSPEC);
				{
					obj_t BgL_auxz00_2577;

					{	/* SawMill/InlineReturn.scm 58 */
						obj_t BgL_arg1582z00_1867;

						{	/* SawMill/InlineReturn.scm 58 */
							obj_t BgL_arg1584z00_1868;

							{	/* SawMill/InlineReturn.scm 58 */
								obj_t BgL_res1882z00_2284;

								{	/* SawMill/InlineReturn.scm 58 */
									obj_t BgL_classz00_2283;

									BgL_classz00_2283 = BGl_rtl_regz00zzsaw_defsz00;
									BgL_res1882z00_2284 = BGL_CLASS_ALL_FIELDS(BgL_classz00_2283);
								}
								BgL_arg1584z00_1868 = BgL_res1882z00_2284;
							}
							BgL_arg1582z00_1867 = VECTOR_REF(BgL_arg1584z00_1868, ((long) 3));
						}
						BgL_auxz00_2577 =
							BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
							(BgL_arg1582z00_1867);
					}
					((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1176z00_1866))->BgL_namez00) =
						((obj_t) BgL_auxz00_2577), BUNSPEC);
				}
				{
					obj_t BgL_auxz00_2582;

					{	/* SawMill/InlineReturn.scm 58 */
						obj_t BgL_arg1588z00_1869;

						{	/* SawMill/InlineReturn.scm 58 */
							obj_t BgL_arg1589z00_1870;

							{	/* SawMill/InlineReturn.scm 58 */
								obj_t BgL_res1883z00_2287;

								{	/* SawMill/InlineReturn.scm 58 */
									obj_t BgL_classz00_2286;

									BgL_classz00_2286 = BGl_rtl_regz00zzsaw_defsz00;
									BgL_res1883z00_2287 = BGL_CLASS_ALL_FIELDS(BgL_classz00_2286);
								}
								BgL_arg1589z00_1870 = BgL_res1883z00_2287;
							}
							BgL_arg1588z00_1869 = VECTOR_REF(BgL_arg1589z00_1870, ((long) 4));
						}
						BgL_auxz00_2582 =
							BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
							(BgL_arg1588z00_1869);
					}
					((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1176z00_1866))->BgL_keyz00) =
						((obj_t) BgL_auxz00_2582), BUNSPEC);
				}
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1176z00_1866))->
						BgL_hardwarez00) = ((obj_t) BFALSE), BUNSPEC);
				return BgL_new1176z00_1866;
			}
		}

	}



/* rename-ins */
	BgL_rtl_insz00_bglt BGl_renamezd2inszd2zzsaw_inline_returnz00(obj_t
		BgL_insz00_24, obj_t BgL_rmapz00_25)
	{
		{	/* SawMill/InlineReturn.scm 60 */
			{	/* SawMill/InlineReturn.scm 65 */
				BgL_rtl_insz00_bglt BgL_new1180z00_1875;

				{	/* SawMill/InlineReturn.scm 65 */
					BgL_rtl_insz00_bglt BgL_new1178z00_1891;

					BgL_new1178z00_1891 =
						((BgL_rtl_insz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_insz00_bgl))));
					{	/* SawMill/InlineReturn.scm 65 */
						long BgL_arg1604z00_1892;

						{	/* SawMill/InlineReturn.scm 65 */
							long BgL_res1884z00_2292;

							BgL_res1884z00_2292 =
								BGL_CLASS_INDEX(BGl_rtl_insz00zzsaw_defsz00);
							BgL_arg1604z00_1892 = BgL_res1884z00_2292;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1178z00_1891), BgL_arg1604z00_1892);
					}
					{	/* SawMill/InlineReturn.scm 65 */
						BgL_objectz00_bglt BgL_tmpz00_2592;

						BgL_tmpz00_2592 = ((BgL_objectz00_bglt) BgL_new1178z00_1891);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2592, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1178z00_1891);
					BgL_new1180z00_1875 = BgL_new1178z00_1891;
				}
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1180z00_1875))->BgL_locz00) =
					((obj_t) (((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
										BgL_insz00_24)))->BgL_locz00)), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1180z00_1875))->
						BgL_z52spillz52) = ((obj_t) BNIL), BUNSPEC);
				{
					obj_t BgL_auxz00_2600;

					if (CBOOL(
							(((BgL_rtl_insz00_bglt) COBJECT(
										((BgL_rtl_insz00_bglt) BgL_insz00_24)))->BgL_destz00)))
						{	/* SawMill/InlineReturn.scm 66 */
							obj_t BgL_arg1593z00_1877;

							BgL_arg1593z00_1877 =
								(((BgL_rtl_insz00_bglt) COBJECT(
										((BgL_rtl_insz00_bglt) BgL_insz00_24)))->BgL_destz00);
							{	/* SawMill/InlineReturn.scm 62 */
								obj_t BgL_slotz00_2296;

								BgL_slotz00_2296 =
									BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1593z00_1877,
									BgL_rmapz00_25);
								if (CBOOL(BgL_slotz00_2296))
									{	/* SawMill/InlineReturn.scm 63 */
										BgL_auxz00_2600 = CDR(((obj_t) BgL_slotz00_2296));
									}
								else
									{	/* SawMill/InlineReturn.scm 63 */
										BgL_auxz00_2600 = BgL_arg1593z00_1877;
									}
							}
						}
					else
						{	/* SawMill/InlineReturn.scm 66 */
							BgL_auxz00_2600 = BFALSE;
						}
					((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1180z00_1875))->BgL_destz00) =
						((obj_t) BgL_auxz00_2600), BUNSPEC);
				}
				((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1180z00_1875))->BgL_funz00) =
					((BgL_rtl_funz00_bglt) (((BgL_rtl_insz00_bglt)
								COBJECT(((BgL_rtl_insz00_bglt) BgL_insz00_24)))->BgL_funz00)),
					BUNSPEC);
				{
					obj_t BgL_auxz00_2616;

					{	/* SawMill/InlineReturn.scm 68 */
						obj_t BgL_l1394z00_1878;

						BgL_l1394z00_1878 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_insz00_24)))->BgL_argsz00);
						if (NULLP(BgL_l1394z00_1878))
							{	/* SawMill/InlineReturn.scm 68 */
								BgL_auxz00_2616 = BNIL;
							}
						else
							{	/* SawMill/InlineReturn.scm 68 */
								obj_t BgL_head1396z00_1880;

								{	/* SawMill/InlineReturn.scm 68 */
									obj_t BgL_res1886z00_2299;

									BgL_res1886z00_2299 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1396z00_1880 = BgL_res1886z00_2299;
								}
								{
									obj_t BgL_l1394z00_1882;
									obj_t BgL_tail1397z00_1883;

									BgL_l1394z00_1882 = BgL_l1394z00_1878;
									BgL_tail1397z00_1883 = BgL_head1396z00_1880;
								BgL_zc3z04anonymousza31595ze3z87_1884:
									if (NULLP(BgL_l1394z00_1882))
										{	/* SawMill/InlineReturn.scm 68 */
											BgL_auxz00_2616 = CDR(BgL_head1396z00_1880);
										}
									else
										{	/* SawMill/InlineReturn.scm 68 */
											obj_t BgL_newtail1398z00_1886;

											{	/* SawMill/InlineReturn.scm 68 */
												obj_t BgL_arg1599z00_1888;

												{	/* SawMill/InlineReturn.scm 68 */
													obj_t BgL_az00_1889;

													BgL_az00_1889 = CAR(((obj_t) BgL_l1394z00_1882));
													{	/* SawMill/InlineReturn.scm 62 */
														obj_t BgL_slotz00_2303;

														BgL_slotz00_2303 =
															BGl_assqz00zz__r4_pairs_and_lists_6_3z00
															(BgL_az00_1889, BgL_rmapz00_25);
														if (CBOOL(BgL_slotz00_2303))
															{	/* SawMill/InlineReturn.scm 63 */
																BgL_arg1599z00_1888 =
																	CDR(((obj_t) BgL_slotz00_2303));
															}
														else
															{	/* SawMill/InlineReturn.scm 63 */
																BgL_arg1599z00_1888 = BgL_az00_1889;
															}
													}
												}
												{	/* SawMill/InlineReturn.scm 68 */
													obj_t BgL_res1888z00_2305;

													BgL_res1888z00_2305 =
														MAKE_YOUNG_PAIR(BgL_arg1599z00_1888, BNIL);
													BgL_newtail1398z00_1886 = BgL_res1888z00_2305;
												}
											}
											SET_CDR(BgL_tail1397z00_1883, BgL_newtail1398z00_1886);
											{	/* SawMill/InlineReturn.scm 68 */
												obj_t BgL_arg1597z00_1887;

												BgL_arg1597z00_1887 = CDR(((obj_t) BgL_l1394z00_1882));
												{
													obj_t BgL_tail1397z00_2637;
													obj_t BgL_l1394z00_2636;

													BgL_l1394z00_2636 = BgL_arg1597z00_1887;
													BgL_tail1397z00_2637 = BgL_newtail1398z00_1886;
													BgL_tail1397z00_1883 = BgL_tail1397z00_2637;
													BgL_l1394z00_1882 = BgL_l1394z00_2636;
													goto BgL_zc3z04anonymousza31595ze3z87_1884;
												}
											}
										}
								}
							}
					}
					((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1180z00_1875))->BgL_argsz00) =
						((obj_t) BgL_auxz00_2616), BUNSPEC);
				}
				return BgL_new1180z00_1875;
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_inline_returnz00()
	{
		{	/* SawMill/InlineReturn.scm 1 */
			{	/* SawMill/InlineReturn.scm 6 */
				obj_t BgL_arg1624z00_1902;
				obj_t BgL_arg1626z00_1903;

				{	/* SawMill/InlineReturn.scm 6 */
					obj_t BgL_v1399z00_1928;

					BgL_v1399z00_1928 = create_vector(((long) 0));
					BgL_arg1624z00_1902 = BgL_v1399z00_1928;
				}
				{	/* SawMill/InlineReturn.scm 6 */
					obj_t BgL_v1400z00_1929;

					BgL_v1400z00_1929 = create_vector(((long) 0));
					BgL_arg1626z00_1903 = BgL_v1400z00_1929;
				}
				return (BGl_dfsz00zzsaw_inline_returnz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 0)),
						CNST_TABLE_REF(((long) 1)), BGl_blockz00zzsaw_defsz00,
						((long) 64313), BGl_proc1898z00zzsaw_inline_returnz00,
						BGl_proc1897z00zzsaw_inline_returnz00, BFALSE,
						BGl_proc1896z00zzsaw_inline_returnz00,
						BGl_proc1895z00zzsaw_inline_returnz00, BgL_arg1624z00_1902,
						BgL_arg1626z00_1903), BUNSPEC);
		}}

	}



/* &lambda1641 */
	BgL_blockz00_bglt BGl_z62lambda1641z62zzsaw_inline_returnz00(obj_t
		BgL_envz00_2344, obj_t BgL_o1153z00_2345)
	{
		{	/* SawMill/InlineReturn.scm 6 */
			{	/* SawMill/InlineReturn.scm 6 */
				long BgL_arg1644z00_2373;

				{	/* SawMill/InlineReturn.scm 6 */
					obj_t BgL_arg1652z00_2374;

					{	/* SawMill/InlineReturn.scm 6 */
						obj_t BgL_arg1662z00_2375;

						{	/* SawMill/InlineReturn.scm 6 */
							long BgL_arg1816z00_2376;

							{	/* SawMill/InlineReturn.scm 6 */
								long BgL_arg1817z00_2377;

								{	/* SawMill/InlineReturn.scm 6 */
									long BgL_res1892z00_2378;

									BgL_res1892z00_2378 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_blockz00_bglt) BgL_o1153z00_2345)));
									BgL_arg1817z00_2377 = BgL_res1892z00_2378;
								}
								BgL_arg1816z00_2376 = (BgL_arg1817z00_2377 - OBJECT_TYPE);
							}
							BgL_arg1662z00_2375 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2376);
						}
						BgL_arg1652z00_2374 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1662z00_2375);
					}
					{	/* SawMill/InlineReturn.scm 6 */
						long BgL_res1894z00_2379;

						{	/* SawMill/InlineReturn.scm 6 */
							obj_t BgL_tmpz00_2650;

							BgL_tmpz00_2650 = ((obj_t) BgL_arg1652z00_2374);
							BgL_res1894z00_2379 = BGL_CLASS_INDEX(BgL_tmpz00_2650);
						}
						BgL_arg1644z00_2373 = BgL_res1894z00_2379;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) BgL_o1153z00_2345)), BgL_arg1644z00_2373);
			}
			{	/* SawMill/InlineReturn.scm 6 */
				BgL_objectz00_bglt BgL_tmpz00_2656;

				BgL_tmpz00_2656 =
					((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1153z00_2345));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2656, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1153z00_2345));
			return ((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1153z00_2345));
		}

	}



/* &<@anonymous:1640> */
	obj_t BGl_z62zc3z04anonymousza31640ze3ze5zzsaw_inline_returnz00(obj_t
		BgL_envz00_2346, obj_t BgL_new1152z00_2347)
	{
		{	/* SawMill/InlineReturn.scm 6 */
			{
				BgL_blockz00_bglt BgL_auxz00_2664;

				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt)
									((BgL_blockz00_bglt) BgL_new1152z00_2347))))->BgL_labelz00) =
					((int) (int) (((long) 0))), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1152z00_2347))))->BgL_predsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1152z00_2347))))->BgL_succsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1152z00_2347))))->BgL_firstz00) =
					((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				BgL_auxz00_2664 = ((BgL_blockz00_bglt) BgL_new1152z00_2347);
				return ((obj_t) BgL_auxz00_2664);
			}
		}

	}



/* &lambda1635 */
	BgL_blockz00_bglt BGl_z62lambda1635z62zzsaw_inline_returnz00(obj_t
		BgL_envz00_2348, obj_t BgL_o1149z00_2349)
	{
		{	/* SawMill/InlineReturn.scm 6 */
			{	/* SawMill/InlineReturn.scm 6 */
				BgL_dfsz00_bglt BgL_wide1151z00_2382;

				BgL_wide1151z00_2382 =
					((BgL_dfsz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct BgL_dfsz00_bgl))));
				{	/* SawMill/InlineReturn.scm 6 */
					obj_t BgL_auxz00_2686;
					BgL_objectz00_bglt BgL_tmpz00_2682;

					BgL_auxz00_2686 = ((obj_t) BgL_wide1151z00_2382);
					BgL_tmpz00_2682 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1149z00_2349)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2682, BgL_auxz00_2686);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1149z00_2349)));
				{	/* SawMill/InlineReturn.scm 6 */
					long BgL_arg1639z00_2383;

					{	/* SawMill/InlineReturn.scm 6 */
						long BgL_res1891z00_2384;

						BgL_res1891z00_2384 =
							BGL_CLASS_INDEX(BGl_dfsz00zzsaw_inline_returnz00);
						BgL_arg1639z00_2383 = BgL_res1891z00_2384;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_o1149z00_2349))), BgL_arg1639z00_2383);
				}
				return
					((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1149z00_2349)));
			}
		}

	}



/* &lambda1627 */
	BgL_blockz00_bglt BGl_z62lambda1627z62zzsaw_inline_returnz00(obj_t
		BgL_envz00_2350, obj_t BgL_label1145z00_2351, obj_t BgL_preds1146z00_2352,
		obj_t BgL_succs1147z00_2353, obj_t BgL_first1148z00_2354)
	{
		{	/* SawMill/InlineReturn.scm 6 */
			{	/* SawMill/InlineReturn.scm 6 */
				int BgL_label1145z00_2385;

				BgL_label1145z00_2385 = CINT(BgL_label1145z00_2351);
				{	/* SawMill/InlineReturn.scm 6 */
					BgL_blockz00_bglt BgL_new1186z00_2389;

					{	/* SawMill/InlineReturn.scm 6 */
						BgL_blockz00_bglt BgL_tmp1184z00_2390;
						BgL_dfsz00_bglt BgL_wide1185z00_2391;

						{
							BgL_blockz00_bglt BgL_auxz00_2701;

							{	/* SawMill/InlineReturn.scm 6 */
								BgL_blockz00_bglt BgL_new1183z00_2392;

								BgL_new1183z00_2392 =
									((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_blockz00_bgl))));
								{	/* SawMill/InlineReturn.scm 6 */
									long BgL_arg1634z00_2393;

									{	/* SawMill/InlineReturn.scm 6 */
										long BgL_res1889z00_2394;

										BgL_res1889z00_2394 =
											BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
										BgL_arg1634z00_2393 = BgL_res1889z00_2394;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1183z00_2392),
										BgL_arg1634z00_2393);
								}
								{	/* SawMill/InlineReturn.scm 6 */
									BgL_objectz00_bglt BgL_tmpz00_2706;

									BgL_tmpz00_2706 = ((BgL_objectz00_bglt) BgL_new1183z00_2392);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2706, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1183z00_2392);
								BgL_auxz00_2701 = BgL_new1183z00_2392;
							}
							BgL_tmp1184z00_2390 = ((BgL_blockz00_bglt) BgL_auxz00_2701);
						}
						BgL_wide1185z00_2391 =
							((BgL_dfsz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_dfsz00_bgl))));
						{	/* SawMill/InlineReturn.scm 6 */
							obj_t BgL_auxz00_2714;
							BgL_objectz00_bglt BgL_tmpz00_2712;

							BgL_auxz00_2714 = ((obj_t) BgL_wide1185z00_2391);
							BgL_tmpz00_2712 = ((BgL_objectz00_bglt) BgL_tmp1184z00_2390);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2712, BgL_auxz00_2714);
						}
						((BgL_objectz00_bglt) BgL_tmp1184z00_2390);
						{	/* SawMill/InlineReturn.scm 6 */
							long BgL_arg1631z00_2395;

							{	/* SawMill/InlineReturn.scm 6 */
								long BgL_res1890z00_2396;

								BgL_res1890z00_2396 =
									BGL_CLASS_INDEX(BGl_dfsz00zzsaw_inline_returnz00);
								BgL_arg1631z00_2395 = BgL_res1890z00_2396;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1184z00_2390),
								BgL_arg1631z00_2395);
						}
						BgL_new1186z00_2389 = ((BgL_blockz00_bglt) BgL_tmp1184z00_2390);
					}
					((((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_new1186z00_2389)))->BgL_labelz00) =
						((int) BgL_label1145z00_2385), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1186z00_2389)))->BgL_predsz00) =
						((obj_t) ((obj_t) BgL_preds1146z00_2352)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1186z00_2389)))->BgL_succsz00) =
						((obj_t) ((obj_t) BgL_succs1147z00_2353)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1186z00_2389)))->BgL_firstz00) =
						((obj_t) ((obj_t) BgL_first1148z00_2354)), BUNSPEC);
					return BgL_new1186z00_2389;
				}
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_inline_returnz00()
	{
		{	/* SawMill/InlineReturn.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_inline_returnz00()
	{
		{	/* SawMill/InlineReturn.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_inline_returnz00()
	{
		{	/* SawMill/InlineReturn.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1899z00zzsaw_inline_returnz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1899z00zzsaw_inline_returnz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1899z00zzsaw_inline_returnz00));
			BGl_modulezd2initializa7ationz75zzsaw_libz00(((long) 57049159),
				BSTRING_TO_STRING(BGl_string1899z00zzsaw_inline_returnz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string1899z00zzsaw_inline_returnz00));
		}

	}

#ifdef __cplusplus
}
#endif
