/*===========================================================================*/
/*   (Jas/wide.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Jas/wide.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_jastypez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
	}                 *BgL_jastypez00_bglt;

	typedef struct BgL_jasfunz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
		struct BgL_jastypez00_bgl *BgL_tretz00;
		obj_t BgL_targsz00;
	}                *BgL_jasfunz00_bglt;

	typedef struct BgL_classez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_poolz00;
	}                *BgL_classez00_bglt;

	typedef struct BgL_fieldzd2orzd2methodz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}                             *BgL_fieldzd2orzd2methodz00_bglt;

	typedef struct BgL_fieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}               *BgL_fieldz00_bglt;

	typedef struct BgL_methodz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}                *BgL_methodz00_bglt;

	typedef struct BgL_classfilez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_currentzd2methodzd2;
		obj_t BgL_globalsz00;
		obj_t BgL_poolz00;
		obj_t BgL_poolzd2siza7ez75;
		obj_t BgL_pooledzd2nameszd2;
		obj_t BgL_flagsz00;
		obj_t BgL_mez00;
		obj_t BgL_superz00;
		obj_t BgL_interfacesz00;
		obj_t BgL_fieldsz00;
		obj_t BgL_methodsz00;
		obj_t BgL_attributesz00;
	}                   *BgL_classfilez00_bglt;


	BGL_EXPORTED_DEF obj_t BGl_resolvezd2widezd2zzjas_widez00 = BUNSPEC;
	static obj_t BGl_z62zc3z04resolvezd2wideza31208ze3z37zzjas_widez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzjas_widez00();
	extern int BGl_poolzd2stringzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t);
	extern int
		BGl_poolzd2interfacezd2methodz00zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_methodz00_bglt);
	static obj_t BGl_appendzd221011zd2zzjas_widez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzjas_widez00();
	extern obj_t BGl_u2z00zzjas_libz00(int);
	extern int BGl_poolzd2floatzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		float);
	extern int BGl_poolzd2uint32zd2zzjas_classfilez00(BgL_classfilez00_bglt,
		uint32_t);
	extern int BGl_poolzd2methodzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_methodz00_bglt);
	extern int BGl_poolzd2longzd2zzjas_classfilez00(BgL_classfilez00_bglt, long);
	extern int BGl_poolzd2intzd2zzjas_classfilez00(BgL_classfilez00_bglt, int);
	extern int BGl_poolzd2uint64zd2zzjas_classfilez00(BgL_classfilez00_bglt,
		uint64_t);
	static obj_t BGl_gczd2rootszd2initz00zzjas_widez00();
	extern int BGl_poolzd2elongzd2zzjas_classfilez00(BgL_classfilez00_bglt, long);
	extern int BGl_poolzd2int32zd2zzjas_classfilez00(BgL_classfilez00_bglt,
		int32_t);
	extern int BGl_poolzd2fieldzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_fieldz00_bglt);
	extern int BGl_poolzd2int64zd2zzjas_classfilez00(BgL_classfilez00_bglt,
		int64_t);
	static obj_t BGl_requirezd2initializa7ationz75zzjas_widez00 = BUNSPEC;
	extern int BGl_poolzd2doublezd2zzjas_classfilez00(BgL_classfilez00_bglt,
		double);
	extern int
		BGl_poolzd2classzd2byzd2reftypezd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_jastypez00_bglt);
	static obj_t BGl_widez00zzjas_widez00(obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzjas_widez00();
	BGL_IMPORT obj_t BGl_absz00zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_genericzd2initzd2zzjas_widez00();
	BGL_IMPORT obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzjas_widez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_classfilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_libz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern int BGl_typezd2siza7ez75zzjas_classfilez00(BgL_jastypez00_bglt);
	extern int BGl_poolzd2llongzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BGL_LONGLONG_T);
	static obj_t BGl_libraryzd2moduleszd2initz00zzjas_widez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzjas_widez00();
	extern obj_t BGl_jaszd2errorzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t, obj_t);
	extern int BGl_poolzd2classzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_classez00_bglt);
	extern int BGl_poolzd2namezd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1591z00zzjas_widez00,
		BgL_bgl_za762za7c3za704resolve1598za7,
		BGl_z62zc3z04resolvezd2wideza31208ze3z37zzjas_widez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1592z00zzjas_widez00,
		BgL_bgl_string1592za700za7za7j1599za7, "bad immediate value (ldc)", 25);
	      DEFINE_STRING(BGl_string1593z00zzjas_widez00,
		BgL_bgl_string1593za700za7za7j1600za7, "bad immediate value (ldc2)", 26);
	      DEFINE_STRING(BGl_string1594z00zzjas_widez00,
		BgL_bgl_string1594za700za7za7j1601za7, "too much locals", 15);
	      DEFINE_STRING(BGl_string1595z00zzjas_widez00,
		BgL_bgl_string1595za700za7za7j1602za7, "too large increment in iinc", 27);
	      DEFINE_STRING(BGl_string1596z00zzjas_widez00,
		BgL_bgl_string1596za700za7za7j1603za7, "bad localvar args", 17);
	      DEFINE_STRING(BGl_string1597z00zzjas_widez00,
		BgL_bgl_string1597za700za7za7j1604za7, "jas_wide", 8);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_resolvezd2widezd2zzjas_widez00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzjas_widez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzjas_widez00(long
		BgL_checksumz00_728, char *BgL_fromz00_729)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzjas_widez00))
				{
					BGl_requirezd2initializa7ationz75zzjas_widez00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzjas_widez00();
					BGl_libraryzd2moduleszd2initz00zzjas_widez00();
					BGl_importedzd2moduleszd2initz00zzjas_widez00();
					return BGl_toplevelzd2initzd2zzjas_widez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzjas_widez00()
	{
		{	/* Jas/wide.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"jas_wide");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"jas_wide");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long) 0),
				"jas_wide");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"jas_wide");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"jas_wide");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "jas_wide");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzjas_widez00()
	{
		{	/* Jas/wide.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzjas_widez00()
	{
		{	/* Jas/wide.scm 1 */
			return (BGl_resolvezd2widezd2zzjas_widez00 =
				BGl_proc1591z00zzjas_widez00, BUNSPEC);
		}

	}



/* &<@resolve-wide:1208> */
	obj_t BGl_z62zc3z04resolvezd2wideza31208ze3z37zzjas_widez00(obj_t
		BgL_envz00_715, obj_t BgL_classfilez00_716, obj_t BgL_codez00_717)
	{
		{	/* Jas/wide.scm 8 */
			if (NULLP(BgL_codez00_717))
				{	/* Jas/wide.scm 9 */
					return BNIL;
				}
			else
				{	/* Jas/wide.scm 9 */
					obj_t BgL_head1199z00_718;

					{	/* Jas/wide.scm 9 */
						obj_t BgL_res1539z00_719;

						BgL_res1539z00_719 = MAKE_YOUNG_PAIR(BNIL, BNIL);
						BgL_head1199z00_718 = BgL_res1539z00_719;
					}
					{
						obj_t BgL_l1197z00_721;
						obj_t BgL_tail1200z00_722;

						BgL_l1197z00_721 = BgL_codez00_717;
						BgL_tail1200z00_722 = BgL_head1199z00_718;
					BgL_zc3z04anonymousza31210ze3z87_720:
						if (NULLP(BgL_l1197z00_721))
							{	/* Jas/wide.scm 9 */
								return CDR(BgL_head1199z00_718);
							}
						else
							{	/* Jas/wide.scm 9 */
								obj_t BgL_newtail1201z00_723;

								{	/* Jas/wide.scm 9 */
									obj_t BgL_arg1221z00_724;

									{	/* Jas/wide.scm 9 */
										obj_t BgL_xz00_725;

										BgL_xz00_725 = CAR(((obj_t) BgL_l1197z00_721));
										if (PAIRP(BgL_xz00_725))
											{	/* Jas/wide.scm 9 */
												BgL_arg1221z00_724 =
													BGl_widez00zzjas_widez00(BgL_classfilez00_716,
													CAR(BgL_xz00_725), CDR(BgL_xz00_725));
											}
										else
											{	/* Jas/wide.scm 9 */
												BgL_arg1221z00_724 = BgL_xz00_725;
											}
									}
									{	/* Jas/wide.scm 9 */
										obj_t BgL_res1542z00_726;

										BgL_res1542z00_726 =
											MAKE_YOUNG_PAIR(BgL_arg1221z00_724, BNIL);
										BgL_newtail1201z00_723 = BgL_res1542z00_726;
									}
								}
								SET_CDR(BgL_tail1200z00_722, BgL_newtail1201z00_723);
								{	/* Jas/wide.scm 9 */
									obj_t BgL_arg1216z00_727;

									BgL_arg1216z00_727 = CDR(((obj_t) BgL_l1197z00_721));
									{
										obj_t BgL_tail1200z00_762;
										obj_t BgL_l1197z00_761;

										BgL_l1197z00_761 = BgL_arg1216z00_727;
										BgL_tail1200z00_762 = BgL_newtail1201z00_723;
										BgL_tail1200z00_722 = BgL_tail1200z00_762;
										BgL_l1197z00_721 = BgL_l1197z00_761;
										goto BgL_zc3z04anonymousza31210ze3z87_720;
									}
								}
							}
					}
				}
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzjas_widez00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_271;

				BgL_headz00_271 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_272;
					obj_t BgL_tailz00_273;

					BgL_prevz00_272 = BgL_headz00_271;
					BgL_tailz00_273 = BgL_l1z00_1;
				BgL_loopz00_274:
					if (PAIRP(BgL_tailz00_273))
						{
							obj_t BgL_newzd2prevzd2_276;

							BgL_newzd2prevzd2_276 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_273), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_272, BgL_newzd2prevzd2_276);
							{
								obj_t BgL_tailz00_770;
								obj_t BgL_prevz00_769;

								BgL_prevz00_769 = BgL_newzd2prevzd2_276;
								BgL_tailz00_770 = CDR(BgL_tailz00_273);
								BgL_tailz00_273 = BgL_tailz00_770;
								BgL_prevz00_272 = BgL_prevz00_769;
								goto BgL_loopz00_274;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_271);
				}
			}
		}

	}



/* wide */
	obj_t BGl_widez00zzjas_widez00(obj_t BgL_classfilez00_3, obj_t BgL_copz00_4,
		obj_t BgL_argsz00_5)
	{
		{	/* Jas/wide.scm 12 */
			if (INTEGERP(BgL_copz00_4))
				{	/* Jas/wide.scm 13 */
					switch ((long) CINT(BgL_copz00_4))
						{
						case ((long) 17):

							{	/* Jas/wide.scm 15 */
								obj_t BgL_arg1239z00_282;

								{	/* Jas/wide.scm 15 */
									obj_t BgL_arg1242z00_283;

									BgL_arg1242z00_283 = CAR(((obj_t) BgL_argsz00_5));
									BgL_arg1239z00_282 =
										BGl_u2z00zzjas_libz00(CINT(BgL_arg1242z00_283));
								}
								return MAKE_YOUNG_PAIR(BgL_copz00_4, BgL_arg1239z00_282);
							}
							break;
						case ((long) 18):

							{	/* Jas/wide.scm 17 */
								obj_t BgL_vz00_284;

								BgL_vz00_284 = CAR(((obj_t) BgL_argsz00_5));
								{
									int BgL_nz00_296;

									if (INTEGERP(BgL_vz00_284))
										{	/* Jas/wide.scm 19 */
											int BgL_arg1245z00_287;

											BgL_arg1245z00_287 =
												BGl_poolzd2intzd2zzjas_classfilez00(
												((BgL_classfilez00_bglt) BgL_classfilez00_3),
												CINT(BgL_vz00_284));
											BgL_nz00_296 = BgL_arg1245z00_287;
										BgL_zc3z04anonymousza31255ze3z87_297:
											if (((long) (BgL_nz00_296) < ((long) 256)))
												{	/* Jas/wide.scm 18 */
													obj_t BgL_list1257z00_299;

													{	/* Jas/wide.scm 18 */
														obj_t BgL_arg1258z00_300;

														BgL_arg1258z00_300 =
															MAKE_YOUNG_PAIR(BINT(BgL_nz00_296), BNIL);
														BgL_list1257z00_299 =
															MAKE_YOUNG_PAIR(BINT(((long) 18)),
															BgL_arg1258z00_300);
													}
													return BgL_list1257z00_299;
												}
											else
												{	/* Jas/wide.scm 18 */
													return
														MAKE_YOUNG_PAIR(BINT(((long) 19)),
														BGl_u2z00zzjas_libz00(BgL_nz00_296));
										}}
									else
										{	/* Jas/wide.scm 19 */
											if (BGL_INT32P(BgL_vz00_284))
												{	/* Jas/wide.scm 21 */
													int BgL_arg1247z00_289;

													BgL_arg1247z00_289 =
														BGl_poolzd2int32zd2zzjas_classfilez00(
														((BgL_classfilez00_bglt) BgL_classfilez00_3),
														BGL_BINT32_TO_INT32(BgL_vz00_284));
													{
														int BgL_nz00_802;

														BgL_nz00_802 = BgL_arg1247z00_289;
														BgL_nz00_296 = BgL_nz00_802;
														goto BgL_zc3z04anonymousza31255ze3z87_297;
													}
												}
											else
												{	/* Jas/wide.scm 21 */
													if (BGL_UINT32P(BgL_vz00_284))
														{	/* Jas/wide.scm 22 */
															int BgL_arg1250z00_291;

															BgL_arg1250z00_291 =
																BGl_poolzd2uint32zd2zzjas_classfilez00(
																((BgL_classfilez00_bglt) BgL_classfilez00_3),
																BGL_BUINT32_TO_UINT32(BgL_vz00_284));
															{
																int BgL_nz00_808;

																BgL_nz00_808 = BgL_arg1250z00_291;
																BgL_nz00_296 = BgL_nz00_808;
																goto BgL_zc3z04anonymousza31255ze3z87_297;
															}
														}
													else
														{	/* Jas/wide.scm 22 */
															if (REALP(BgL_vz00_284))
																{	/* Jas/wide.scm 23 */
																	int BgL_arg1252z00_293;

																	BgL_arg1252z00_293 =
																		BGl_poolzd2floatzd2zzjas_classfilez00(
																		((BgL_classfilez00_bglt)
																			BgL_classfilez00_3),
																		REAL_TO_FLOAT(BgL_vz00_284));
																	{
																		int BgL_nz00_814;

																		BgL_nz00_814 = BgL_arg1252z00_293;
																		BgL_nz00_296 = BgL_nz00_814;
																		goto BgL_zc3z04anonymousza31255ze3z87_297;
																	}
																}
															else
																{	/* Jas/wide.scm 23 */
																	if (STRINGP(BgL_vz00_284))
																		{	/* Jas/wide.scm 24 */
																			int BgL_arg1254z00_295;

																			BgL_arg1254z00_295 =
																				BGl_poolzd2stringzd2zzjas_classfilez00(
																				((BgL_classfilez00_bglt)
																					BgL_classfilez00_3), BgL_vz00_284);
																			{
																				int BgL_nz00_819;

																				BgL_nz00_819 = BgL_arg1254z00_295;
																				BgL_nz00_296 = BgL_nz00_819;
																				goto
																					BgL_zc3z04anonymousza31255ze3z87_297;
																			}
																		}
																	else
																		{	/* Jas/wide.scm 24 */
																			return
																				BGl_jaszd2errorzd2zzjas_classfilez00(
																				((BgL_classfilez00_bglt)
																					BgL_classfilez00_3),
																				BGl_string1592z00zzjas_widez00,
																				BgL_vz00_284);
																		}
																}
														}
												}
										}
								}
							}
							break;
						case ((long) 20):

							{	/* Jas/wide.scm 27 */
								obj_t BgL_vz00_303;

								BgL_vz00_303 = CAR(((obj_t) BgL_argsz00_5));
								if (INTEGERP(BgL_vz00_303))
									{	/* Jas/wide.scm 28 */
										obj_t BgL_arg1268z00_305;

										{	/* Jas/wide.scm 28 */
											int BgL_arg1270z00_306;

											BgL_arg1270z00_306 =
												BGl_poolzd2longzd2zzjas_classfilez00(
												((BgL_classfilez00_bglt) BgL_classfilez00_3),
												(long) CINT(BgL_vz00_303));
											BgL_arg1268z00_305 =
												BGl_u2z00zzjas_libz00(BgL_arg1270z00_306);
										}
										return
											MAKE_YOUNG_PAIR(BINT(((long) 20)), BgL_arg1268z00_305);
									}
								else
									{	/* Jas/wide.scm 28 */
										if (REALP(BgL_vz00_303))
											{	/* Jas/wide.scm 29 */
												obj_t BgL_arg1273z00_308;

												{	/* Jas/wide.scm 29 */
													int BgL_arg1274z00_309;

													BgL_arg1274z00_309 =
														BGl_poolzd2doublezd2zzjas_classfilez00(
														((BgL_classfilez00_bglt) BgL_classfilez00_3),
														REAL_TO_DOUBLE(BgL_vz00_303));
													BgL_arg1273z00_308 =
														BGl_u2z00zzjas_libz00(BgL_arg1274z00_309);
												}
												return
													MAKE_YOUNG_PAIR(BINT(((long) 20)),
													BgL_arg1273z00_308);
											}
										else
											{	/* Jas/wide.scm 29 */
												if (ELONGP(BgL_vz00_303))
													{	/* Jas/wide.scm 30 */
														obj_t BgL_arg1276z00_311;

														{	/* Jas/wide.scm 30 */
															int BgL_arg1277z00_312;

															BgL_arg1277z00_312 =
																BGl_poolzd2elongzd2zzjas_classfilez00(
																((BgL_classfilez00_bglt) BgL_classfilez00_3),
																BELONG_TO_LONG(BgL_vz00_303));
															BgL_arg1276z00_311 =
																BGl_u2z00zzjas_libz00(BgL_arg1277z00_312);
														}
														return
															MAKE_YOUNG_PAIR(BINT(((long) 20)),
															BgL_arg1276z00_311);
													}
												else
													{	/* Jas/wide.scm 30 */
														if (LLONGP(BgL_vz00_303))
															{	/* Jas/wide.scm 31 */
																obj_t BgL_arg1280z00_314;

																{	/* Jas/wide.scm 31 */
																	int BgL_arg1281z00_315;

																	BgL_arg1281z00_315 =
																		BGl_poolzd2llongzd2zzjas_classfilez00(
																		((BgL_classfilez00_bglt)
																			BgL_classfilez00_3),
																		BLLONG_TO_LLONG(BgL_vz00_303));
																	BgL_arg1280z00_314 =
																		BGl_u2z00zzjas_libz00(BgL_arg1281z00_315);
																}
																return
																	MAKE_YOUNG_PAIR(BINT(((long) 20)),
																	BgL_arg1280z00_314);
															}
														else
															{	/* Jas/wide.scm 31 */
																if (BGL_INT64P(BgL_vz00_303))
																	{	/* Jas/wide.scm 32 */
																		obj_t BgL_arg1284z00_317;

																		{	/* Jas/wide.scm 32 */
																			int BgL_arg1285z00_318;

																			BgL_arg1285z00_318 =
																				BGl_poolzd2int64zd2zzjas_classfilez00(
																				((BgL_classfilez00_bglt)
																					BgL_classfilez00_3),
																				BGL_BINT64_TO_INT64(BgL_vz00_303));
																			BgL_arg1284z00_317 =
																				BGl_u2z00zzjas_libz00
																				(BgL_arg1285z00_318);
																		}
																		return
																			MAKE_YOUNG_PAIR(BINT(((long) 20)),
																			BgL_arg1284z00_317);
																	}
																else
																	{	/* Jas/wide.scm 32 */
																		if (BGL_UINT64P(BgL_vz00_303))
																			{	/* Jas/wide.scm 33 */
																				obj_t BgL_arg1287z00_320;

																				{	/* Jas/wide.scm 33 */
																					int BgL_arg1288z00_321;

																					BgL_arg1288z00_321 =
																						BGl_poolzd2uint64zd2zzjas_classfilez00
																						(((BgL_classfilez00_bglt)
																							BgL_classfilez00_3),
																						BGL_BINT64_TO_INT64(BgL_vz00_303));
																					BgL_arg1287z00_320 =
																						BGl_u2z00zzjas_libz00
																						(BgL_arg1288z00_321);
																				}
																				return
																					MAKE_YOUNG_PAIR(BINT(((long) 20)),
																					BgL_arg1287z00_320);
																			}
																		else
																			{	/* Jas/wide.scm 33 */
																				return
																					BGl_jaszd2errorzd2zzjas_classfilez00(
																					((BgL_classfilez00_bglt)
																						BgL_classfilez00_3),
																					BGl_string1593z00zzjas_widez00,
																					BgL_vz00_303);
																			}
																	}
															}
													}
											}
									}
							}
							break;
						case ((long) 21):
						case ((long) 22):
						case ((long) 23):
						case ((long) 24):
						case ((long) 25):
						case ((long) 54):
						case ((long) 55):
						case ((long) 56):
						case ((long) 57):
						case ((long) 58):

							{	/* Jas/wide.scm 36 */
								obj_t BgL_indexz00_322;

								BgL_indexz00_322 = CAR(((obj_t) BgL_argsz00_5));
								{	/* Jas/wide.scm 36 */
									long BgL_basez00_323;

									if (((long) CINT(BgL_copz00_4) > ((long) 50)))
										{	/* Jas/wide.scm 37 */
											BgL_basez00_323 = ((long) 54);
										}
									else
										{	/* Jas/wide.scm 37 */
											BgL_basez00_323 = ((long) 21);
										}
									{	/* Jas/wide.scm 37 */
										long BgL_ismallz00_324;

										BgL_ismallz00_324 =
											(
											(BgL_basez00_323 + ((long) 5)) +
											(((long) CINT(BgL_copz00_4) -
													BgL_basez00_323) * ((long) 4)));
										{	/* Jas/wide.scm 38 */

											if (((long) CINT(BgL_indexz00_322) < ((long) 4)))
												{	/* Jas/wide.scm 39 */
													obj_t BgL_arg1290z00_326;

													BgL_arg1290z00_326 =
														BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
														(BgL_ismallz00_324), BgL_indexz00_322);
													{	/* Jas/wide.scm 39 */
														obj_t BgL_list1291z00_327;

														BgL_list1291z00_327 =
															MAKE_YOUNG_PAIR(BgL_arg1290z00_326, BNIL);
														return BgL_list1291z00_327;
													}
												}
											else
												{	/* Jas/wide.scm 39 */
													if (((long) CINT(BgL_indexz00_322) < ((long) 256)))
														{	/* Jas/wide.scm 40 */
															obj_t BgL_list1293z00_329;

															{	/* Jas/wide.scm 40 */
																obj_t BgL_arg1295z00_330;

																BgL_arg1295z00_330 =
																	MAKE_YOUNG_PAIR(BgL_indexz00_322, BNIL);
																BgL_list1293z00_329 =
																	MAKE_YOUNG_PAIR(BgL_copz00_4,
																	BgL_arg1295z00_330);
															}
															return BgL_list1293z00_329;
														}
													else
														{	/* Jas/wide.scm 40 */
															if (
																((long) CINT(BgL_indexz00_322) <
																	((long) 65536)))
																{	/* Jas/wide.scm 41 */
																	obj_t BgL_arg1297z00_332;

																	BgL_arg1297z00_332 =
																		MAKE_YOUNG_PAIR(BgL_copz00_4,
																		BGl_u2z00zzjas_libz00(CINT
																			(BgL_indexz00_322)));
																	return MAKE_YOUNG_PAIR(BINT(((long) 196)),
																		BgL_arg1297z00_332);
																}
															else
																{	/* Jas/wide.scm 41 */
																	return
																		BGl_jaszd2errorzd2zzjas_classfilez00(
																		((BgL_classfilez00_bglt)
																			BgL_classfilez00_3),
																		BGl_string1594z00zzjas_widez00,
																		BgL_indexz00_322);
																}
														}
												}
										}
									}
								}
							}
							break;
						case ((long) 132):

							{	/* Jas/wide.scm 45 */
								obj_t BgL_indexz00_338;
								obj_t BgL_nz00_339;

								BgL_indexz00_338 = CAR(((obj_t) BgL_argsz00_5));
								{	/* Jas/wide.scm 45 */
									obj_t BgL_pairz00_649;

									BgL_pairz00_649 = CDR(((obj_t) BgL_argsz00_5));
									BgL_nz00_339 = CAR(BgL_pairz00_649);
								}
								{	/* Jas/wide.scm 47 */
									bool_t BgL_test1632z00_910;

									if (((long) CINT(BgL_indexz00_338) < ((long) 256)))
										{	/* Jas/wide.scm 47 */
											if (((long) CINT(BgL_nz00_339) > ((long) -129)))
												{	/* Jas/wide.scm 47 */
													BgL_test1632z00_910 =
														((long) CINT(BgL_nz00_339) < ((long) 128));
												}
											else
												{	/* Jas/wide.scm 47 */
													BgL_test1632z00_910 = ((bool_t) 0);
												}
										}
									else
										{	/* Jas/wide.scm 47 */
											BgL_test1632z00_910 = ((bool_t) 0);
										}
									if (BgL_test1632z00_910)
										{	/* Jas/wide.scm 48 */
											obj_t BgL_list1306z00_343;

											{	/* Jas/wide.scm 48 */
												obj_t BgL_arg1307z00_344;

												{	/* Jas/wide.scm 48 */
													obj_t BgL_arg1308z00_345;

													BgL_arg1308z00_345 =
														MAKE_YOUNG_PAIR(BgL_nz00_339, BNIL);
													BgL_arg1307z00_344 =
														MAKE_YOUNG_PAIR(BgL_indexz00_338,
														BgL_arg1308z00_345);
												}
												BgL_list1306z00_343 =
													MAKE_YOUNG_PAIR(BINT(((long) 132)),
													BgL_arg1307z00_344);
											}
											return BgL_list1306z00_343;
										}
									else
										{	/* Jas/wide.scm 47 */
											if (((long) CINT(BgL_indexz00_338) >= ((long) 65536)))
												{	/* Jas/wide.scm 49 */
													return
														BGl_jaszd2errorzd2zzjas_classfilez00(
														((BgL_classfilez00_bglt) BgL_classfilez00_3),
														BGl_string1594z00zzjas_widez00, BgL_indexz00_338);
												}
											else
												{	/* Jas/wide.scm 49 */
													if (
														((long)
															CINT(BGl_absz00zz__r4_numbers_6_5z00
																(BgL_nz00_339)) >= ((long) 32768)))
														{	/* Jas/wide.scm 51 */
															return
																BGl_jaszd2errorzd2zzjas_classfilez00(
																((BgL_classfilez00_bglt) BgL_classfilez00_3),
																BGl_string1595z00zzjas_widez00, BgL_nz00_339);
														}
													else
														{	/* Jas/wide.scm 53 */
															obj_t BgL_arg1312z00_349;

															{	/* Jas/wide.scm 53 */
																obj_t BgL_arg1314z00_350;

																BgL_arg1314z00_350 =
																	MAKE_YOUNG_PAIR(BGl_u2z00zzjas_libz00(CINT
																		(BgL_indexz00_338)),
																	BGl_u2z00zzjas_libz00(CINT(BgL_nz00_339)));
																BgL_arg1312z00_349 =
																	MAKE_YOUNG_PAIR(BINT(((long) 132)),
																	BgL_arg1314z00_350);
															}
															return
																MAKE_YOUNG_PAIR(BINT(((long) 196)),
																BgL_arg1312z00_349);
							}}}}} break;
						case ((long) 169):

							{	/* Jas/wide.scm 55 */
								obj_t BgL_indexz00_356;

								BgL_indexz00_356 = CAR(((obj_t) BgL_argsz00_5));
								if (((long) CINT(BgL_indexz00_356) < ((long) 256)))
									{	/* Jas/wide.scm 56 */
										obj_t BgL_list1319z00_358;

										{	/* Jas/wide.scm 56 */
											obj_t BgL_arg1322z00_359;

											BgL_arg1322z00_359 =
												MAKE_YOUNG_PAIR(BgL_indexz00_356, BNIL);
											BgL_list1319z00_358 =
												MAKE_YOUNG_PAIR(BINT(((long) 169)), BgL_arg1322z00_359);
										}
										return BgL_list1319z00_358;
									}
								else
									{	/* Jas/wide.scm 56 */
										if (((long) CINT(BgL_indexz00_356) < ((long) 65536)))
											{	/* Jas/wide.scm 57 */
												obj_t BgL_arg1324z00_361;

												BgL_arg1324z00_361 =
													MAKE_YOUNG_PAIR(BINT(((long) 169)),
													BGl_u2z00zzjas_libz00(CINT(BgL_indexz00_356)));
												return
													MAKE_YOUNG_PAIR(BINT(((long) 196)),
													BgL_arg1324z00_361);
											}
										else
											{	/* Jas/wide.scm 57 */
												return
													BGl_jaszd2errorzd2zzjas_classfilez00(
													((BgL_classfilez00_bglt) BgL_classfilez00_3),
													BGl_string1594z00zzjas_widez00, BgL_indexz00_356);
											}
									}
							}
							break;
						case ((long) 178):
						case ((long) 179):
						case ((long) 180):
						case ((long) 181):

							{	/* Jas/wide.scm 61 */
								obj_t BgL_arg1326z00_363;

								{	/* Jas/wide.scm 61 */
									int BgL_arg1327z00_364;

									{	/* Jas/wide.scm 61 */
										obj_t BgL_arg1328z00_365;

										BgL_arg1328z00_365 = CAR(((obj_t) BgL_argsz00_5));
										BgL_arg1327z00_364 =
											BGl_poolzd2fieldzd2zzjas_classfilez00(
											((BgL_classfilez00_bglt) BgL_classfilez00_3),
											((BgL_fieldz00_bglt) BgL_arg1328z00_365));
									}
									BgL_arg1326z00_363 =
										BGl_u2z00zzjas_libz00(BgL_arg1327z00_364);
								}
								return MAKE_YOUNG_PAIR(BgL_copz00_4, BgL_arg1326z00_363);
							}
							break;
						case ((long) 182):
						case ((long) 183):
						case ((long) 184):

							{	/* Jas/wide.scm 63 */
								obj_t BgL_arg1329z00_366;

								{	/* Jas/wide.scm 63 */
									int BgL_arg1330z00_367;

									{	/* Jas/wide.scm 63 */
										obj_t BgL_arg1331z00_368;

										BgL_arg1331z00_368 = CAR(((obj_t) BgL_argsz00_5));
										BgL_arg1330z00_367 =
											BGl_poolzd2methodzd2zzjas_classfilez00(
											((BgL_classfilez00_bglt) BgL_classfilez00_3),
											((BgL_methodz00_bglt) BgL_arg1331z00_368));
									}
									BgL_arg1329z00_366 =
										BGl_u2z00zzjas_libz00(BgL_arg1330z00_367);
								}
								return MAKE_YOUNG_PAIR(BgL_copz00_4, BgL_arg1329z00_366);
							}
							break;
						case ((long) 185):

							{	/* Jas/wide.scm 65 */
								obj_t BgL_mz00_369;

								BgL_mz00_369 = CAR(((obj_t) BgL_argsz00_5));
								{	/* Jas/wide.scm 66 */
									BgL_jasfunz00_bglt BgL_i1058z00_370;

									BgL_i1058z00_370 =
										((BgL_jasfunz00_bglt)
										(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
													((BgL_fieldzd2orzd2methodz00_bglt)
														((BgL_methodz00_bglt) BgL_mz00_369))))->
											BgL_typez00));
									{	/* Jas/wide.scm 67 */
										obj_t BgL_arg1334z00_371;

										{	/* Jas/wide.scm 67 */
											obj_t BgL_arg1335z00_372;
											obj_t BgL_arg1337z00_373;

											{	/* Jas/wide.scm 67 */
												int BgL_arg1338z00_374;

												BgL_arg1338z00_374 =
													BGl_poolzd2interfacezd2methodz00zzjas_classfilez00(
													((BgL_classfilez00_bglt) BgL_classfilez00_3),
													((BgL_methodz00_bglt) BgL_mz00_369));
												BgL_arg1335z00_372 =
													BGl_u2z00zzjas_libz00(BgL_arg1338z00_374);
											}
											{	/* Jas/wide.scm 68 */
												long BgL_arg1339z00_375;

												{	/* Jas/wide.scm 68 */
													obj_t BgL_arg1345z00_378;

													{	/* Jas/wide.scm 68 */
														obj_t BgL_runner1365z00_395;

														{	/* Jas/wide.scm 68 */
															obj_t BgL_l1202z00_379;

															BgL_l1202z00_379 =
																(((BgL_jasfunz00_bglt)
																	COBJECT(BgL_i1058z00_370))->BgL_targsz00);
															if (NULLP(BgL_l1202z00_379))
																{	/* Jas/wide.scm 68 */
																	BgL_runner1365z00_395 = BNIL;
																}
															else
																{	/* Jas/wide.scm 68 */
																	obj_t BgL_head1204z00_381;

																	{	/* Jas/wide.scm 68 */
																		int BgL_arg1363z00_393;

																		{	/* Jas/wide.scm 68 */
																			obj_t BgL_arg1364z00_394;

																			BgL_arg1364z00_394 =
																				CAR(((obj_t) BgL_l1202z00_379));
																			BgL_arg1363z00_393 =
																				BGl_typezd2siza7ez75zzjas_classfilez00(
																				((BgL_jastypez00_bglt)
																					BgL_arg1364z00_394));
																		}
																		{	/* Jas/wide.scm 68 */
																			obj_t BgL_res1577z00_674;

																			BgL_res1577z00_674 =
																				MAKE_YOUNG_PAIR(BINT
																				(BgL_arg1363z00_393), BNIL);
																			BgL_head1204z00_381 = BgL_res1577z00_674;
																	}}
																	{	/* Jas/wide.scm 68 */
																		obj_t BgL_g1207z00_382;

																		BgL_g1207z00_382 =
																			CDR(((obj_t) BgL_l1202z00_379));
																		{
																			obj_t BgL_l1202z00_384;
																			obj_t BgL_tail1205z00_385;

																			BgL_l1202z00_384 = BgL_g1207z00_382;
																			BgL_tail1205z00_385 = BgL_head1204z00_381;
																		BgL_zc3z04anonymousza31351ze3z87_386:
																			if (NULLP(BgL_l1202z00_384))
																				{	/* Jas/wide.scm 68 */
																					BgL_runner1365z00_395 =
																						BgL_head1204z00_381;
																				}
																			else
																				{	/* Jas/wide.scm 68 */
																					obj_t BgL_newtail1206z00_388;

																					{	/* Jas/wide.scm 68 */
																						int BgL_arg1360z00_390;

																						{	/* Jas/wide.scm 68 */
																							obj_t BgL_arg1361z00_391;

																							BgL_arg1361z00_391 =
																								CAR(((obj_t) BgL_l1202z00_384));
																							BgL_arg1360z00_390 =
																								BGl_typezd2siza7ez75zzjas_classfilez00
																								(((BgL_jastypez00_bglt)
																									BgL_arg1361z00_391));
																						}
																						{	/* Jas/wide.scm 68 */
																							obj_t BgL_res1579z00_678;

																							BgL_res1579z00_678 =
																								MAKE_YOUNG_PAIR(BINT
																								(BgL_arg1360z00_390), BNIL);
																							BgL_newtail1206z00_388 =
																								BgL_res1579z00_678;
																					}}
																					SET_CDR(BgL_tail1205z00_385,
																						BgL_newtail1206z00_388);
																					{	/* Jas/wide.scm 68 */
																						obj_t BgL_arg1357z00_389;

																						BgL_arg1357z00_389 =
																							CDR(((obj_t) BgL_l1202z00_384));
																						{
																							obj_t BgL_tail1205z00_1009;
																							obj_t BgL_l1202z00_1008;

																							BgL_l1202z00_1008 =
																								BgL_arg1357z00_389;
																							BgL_tail1205z00_1009 =
																								BgL_newtail1206z00_388;
																							BgL_tail1205z00_385 =
																								BgL_tail1205z00_1009;
																							BgL_l1202z00_384 =
																								BgL_l1202z00_1008;
																							goto
																								BgL_zc3z04anonymousza31351ze3z87_386;
																						}
																					}
																				}
																		}
																	}
																}
														}
														BgL_arg1345z00_378 =
															BGl_zb2zb2zz__r4_numbers_6_5z00
															(BgL_runner1365z00_395);
													}
													BgL_arg1339z00_375 =
														(((long) 1) + (long) CINT(BgL_arg1345z00_378));
												}
												{	/* Jas/wide.scm 68 */
													obj_t BgL_list1340z00_376;

													{	/* Jas/wide.scm 68 */
														obj_t BgL_arg1344z00_377;

														BgL_arg1344z00_377 =
															MAKE_YOUNG_PAIR(BINT(((long) 0)), BNIL);
														BgL_list1340z00_376 =
															MAKE_YOUNG_PAIR(BINT(BgL_arg1339z00_375),
															BgL_arg1344z00_377);
													}
													BgL_arg1337z00_373 = BgL_list1340z00_376;
											}}
											BgL_arg1334z00_371 =
												BGl_appendzd221011zd2zzjas_widez00(BgL_arg1335z00_372,
												BgL_arg1337z00_373);
										}
										return MAKE_YOUNG_PAIR(BgL_copz00_4, BgL_arg1334z00_371);
									}
								}
							}
							break;
						case ((long) 187):

							{	/* Jas/wide.scm 71 */
								obj_t BgL_arg1367z00_396;

								{	/* Jas/wide.scm 71 */
									int BgL_arg1370z00_397;

									{	/* Jas/wide.scm 71 */
										obj_t BgL_arg1371z00_398;

										BgL_arg1371z00_398 = CAR(((obj_t) BgL_argsz00_5));
										BgL_arg1370z00_397 =
											BGl_poolzd2classzd2zzjas_classfilez00(
											((BgL_classfilez00_bglt) BgL_classfilez00_3),
											((BgL_classez00_bglt) BgL_arg1371z00_398));
									}
									BgL_arg1367z00_396 =
										BGl_u2z00zzjas_libz00(BgL_arg1370z00_397);
								}
								return MAKE_YOUNG_PAIR(BgL_copz00_4, BgL_arg1367z00_396);
							}
							break;
						case ((long) 189):
						case ((long) 192):
						case ((long) 193):

							{	/* Jas/wide.scm 73 */
								obj_t BgL_arg1372z00_399;

								{	/* Jas/wide.scm 73 */
									int BgL_arg1381z00_400;

									{	/* Jas/wide.scm 73 */
										obj_t BgL_arg1382z00_401;

										BgL_arg1382z00_401 = CAR(((obj_t) BgL_argsz00_5));
										BgL_arg1381z00_400 =
											BGl_poolzd2classzd2byzd2reftypezd2zzjas_classfilez00(
											((BgL_classfilez00_bglt) BgL_classfilez00_3),
											((BgL_jastypez00_bglt) BgL_arg1382z00_401));
									}
									BgL_arg1372z00_399 =
										BGl_u2z00zzjas_libz00(BgL_arg1381z00_400);
								}
								return MAKE_YOUNG_PAIR(BgL_copz00_4, BgL_arg1372z00_399);
							}
							break;
						case ((long) 197):

							{	/* Jas/wide.scm 75 */
								obj_t BgL_arg1383z00_402;

								{	/* Jas/wide.scm 75 */
									obj_t BgL_arg1384z00_403;
									obj_t BgL_arg1385z00_404;

									{	/* Jas/wide.scm 75 */
										int BgL_arg1386z00_405;

										{	/* Jas/wide.scm 75 */
											obj_t BgL_arg1387z00_406;

											BgL_arg1387z00_406 = CAR(((obj_t) BgL_argsz00_5));
											BgL_arg1386z00_405 =
												BGl_poolzd2classzd2byzd2reftypezd2zzjas_classfilez00(
												((BgL_classfilez00_bglt) BgL_classfilez00_3),
												((BgL_jastypez00_bglt) BgL_arg1387z00_406));
										}
										BgL_arg1384z00_403 =
											BGl_u2z00zzjas_libz00(BgL_arg1386z00_405);
									}
									{	/* Jas/wide.scm 76 */
										obj_t BgL_arg1388z00_407;

										{	/* Jas/wide.scm 76 */
											obj_t BgL_pairz00_690;

											BgL_pairz00_690 = CDR(((obj_t) BgL_argsz00_5));
											BgL_arg1388z00_407 = CAR(BgL_pairz00_690);
										}
										{	/* Jas/wide.scm 76 */
											obj_t BgL_list1389z00_408;

											BgL_list1389z00_408 =
												MAKE_YOUNG_PAIR(BgL_arg1388z00_407, BNIL);
											BgL_arg1385z00_404 = BgL_list1389z00_408;
									}}
									BgL_arg1383z00_402 =
										BGl_appendzd221011zd2zzjas_widez00(BgL_arg1384z00_403,
										BgL_arg1385z00_404);
								}
								return MAKE_YOUNG_PAIR(BgL_copz00_4, BgL_arg1383z00_402);
							}
							break;
						case ((long) 205):

							{
								obj_t BgL_begz00_409;
								obj_t BgL_endz00_410;
								obj_t BgL_namez00_411;
								obj_t BgL_typez00_412;
								obj_t BgL_indexz00_413;

								if (PAIRP(BgL_argsz00_5))
									{	/* Jas/wide.scm 77 */
										obj_t BgL_cdrzd2115zd2_418;

										BgL_cdrzd2115zd2_418 = CDR(BgL_argsz00_5);
										if (PAIRP(BgL_cdrzd2115zd2_418))
											{	/* Jas/wide.scm 77 */
												obj_t BgL_cdrzd2122zd2_420;

												BgL_cdrzd2122zd2_420 = CDR(BgL_cdrzd2115zd2_418);
												if (PAIRP(BgL_cdrzd2122zd2_420))
													{	/* Jas/wide.scm 77 */
														obj_t BgL_cdrzd2128zd2_422;

														BgL_cdrzd2128zd2_422 = CDR(BgL_cdrzd2122zd2_420);
														if (PAIRP(BgL_cdrzd2128zd2_422))
															{	/* Jas/wide.scm 77 */
																obj_t BgL_cdrzd2133zd2_424;

																BgL_cdrzd2133zd2_424 =
																	CDR(BgL_cdrzd2128zd2_422);
																if (PAIRP(BgL_cdrzd2133zd2_424))
																	{	/* Jas/wide.scm 77 */
																		if (NULLP(CDR(BgL_cdrzd2133zd2_424)))
																			{	/* Jas/wide.scm 77 */
																				BgL_begz00_409 = CAR(BgL_argsz00_5);
																				BgL_endz00_410 =
																					CAR(BgL_cdrzd2115zd2_418);
																				BgL_namez00_411 =
																					CAR(BgL_cdrzd2122zd2_420);
																				BgL_typez00_412 =
																					CAR(BgL_cdrzd2128zd2_422);
																				BgL_indexz00_413 =
																					CAR(BgL_cdrzd2133zd2_424);
																				{	/* Jas/wide.scm 80 */
																					int BgL_arg1448z00_434;
																					int BgL_arg1449z00_435;

																					BgL_arg1448z00_434 =
																						BGl_poolzd2namezd2zzjas_classfilez00
																						(((BgL_classfilez00_bglt)
																							BgL_classfilez00_3),
																						BgL_namez00_411);
																					{	/* Jas/wide.scm 81 */
																						obj_t BgL_arg1476z00_442;

																						BgL_arg1476z00_442 =
																							(((BgL_jastypez00_bglt) COBJECT(
																									((BgL_jastypez00_bglt)
																										BgL_typez00_412)))->
																							BgL_codez00);
																						BgL_arg1449z00_435 =
																							BGl_poolzd2namezd2zzjas_classfilez00
																							(((BgL_classfilez00_bglt)
																								BgL_classfilez00_3),
																							BgL_arg1476z00_442);
																					}
																					{	/* Jas/wide.scm 80 */
																						obj_t BgL_list1450z00_436;

																						{	/* Jas/wide.scm 80 */
																							obj_t BgL_arg1461z00_437;

																							{	/* Jas/wide.scm 80 */
																								obj_t BgL_arg1462z00_438;

																								{	/* Jas/wide.scm 80 */
																									obj_t BgL_arg1464z00_439;

																									{	/* Jas/wide.scm 80 */
																										obj_t BgL_arg1465z00_440;

																										{	/* Jas/wide.scm 80 */
																											obj_t BgL_arg1474z00_441;

																											BgL_arg1474z00_441 =
																												MAKE_YOUNG_PAIR
																												(BgL_indexz00_413,
																												BNIL);
																											BgL_arg1465z00_440 =
																												MAKE_YOUNG_PAIR(BINT
																												(BgL_arg1449z00_435),
																												BgL_arg1474z00_441);
																										}
																										BgL_arg1464z00_439 =
																											MAKE_YOUNG_PAIR(BINT
																											(BgL_arg1448z00_434),
																											BgL_arg1465z00_440);
																									}
																									BgL_arg1462z00_438 =
																										MAKE_YOUNG_PAIR
																										(BgL_endz00_410,
																										BgL_arg1464z00_439);
																								}
																								BgL_arg1461z00_437 =
																									MAKE_YOUNG_PAIR
																									(BgL_begz00_409,
																									BgL_arg1462z00_438);
																							}
																							BgL_list1450z00_436 =
																								MAKE_YOUNG_PAIR(BgL_copz00_4,
																								BgL_arg1461z00_437);
																						}
																						return BgL_list1450z00_436;
																					}
																				}
																			}
																		else
																			{	/* Jas/wide.scm 77 */
																			BgL_tagzd2102zd2_415:
																				return
																					BGl_jaszd2errorzd2zzjas_classfilez00(
																					((BgL_classfilez00_bglt)
																						BgL_classfilez00_3),
																					BGl_string1596z00zzjas_widez00,
																					BgL_argsz00_5);
																			}
																	}
																else
																	{	/* Jas/wide.scm 77 */
																		goto BgL_tagzd2102zd2_415;
																	}
															}
														else
															{	/* Jas/wide.scm 77 */
																goto BgL_tagzd2102zd2_415;
															}
													}
												else
													{	/* Jas/wide.scm 77 */
														goto BgL_tagzd2102zd2_415;
													}
											}
										else
											{	/* Jas/wide.scm 77 */
												goto BgL_tagzd2102zd2_415;
											}
									}
								else
									{	/* Jas/wide.scm 77 */
										goto BgL_tagzd2102zd2_415;
									}
							}
							break;
						default:
							return MAKE_YOUNG_PAIR(BgL_copz00_4, BgL_argsz00_5);
						}
				}
			else
				{	/* Jas/wide.scm 13 */
					return MAKE_YOUNG_PAIR(BgL_copz00_4, BgL_argsz00_5);
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzjas_widez00()
	{
		{	/* Jas/wide.scm 1 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzjas_widez00()
	{
		{	/* Jas/wide.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzjas_widez00()
	{
		{	/* Jas/wide.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzjas_widez00()
	{
		{	/* Jas/wide.scm 1 */
			BGl_modulezd2initializa7ationz75zzjas_libz00(((long) 267157983),
				BSTRING_TO_STRING(BGl_string1597z00zzjas_widez00));
			return
				BGl_modulezd2initializa7ationz75zzjas_classfilez00(((long) 135093979),
				BSTRING_TO_STRING(BGl_string1597z00zzjas_widez00));
		}

	}

#ifdef __cplusplus
}
#endif
