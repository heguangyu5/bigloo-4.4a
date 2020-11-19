/*===========================================================================*/
/*   (Integrate/definition.scm)                                              */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/definition.scm) */
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

	typedef struct BgL_valuez00_bgl
	{
		header_t header;
		obj_t widening;
	}               *BgL_valuez00_bglt;

	typedef struct BgL_variablez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		long BgL_occurrencewz00;
		bool_t BgL_userzf3zf3;
	}                  *BgL_variablez00_bglt;

	typedef struct BgL_globalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		long BgL_occurrencewz00;
		bool_t BgL_userzf3zf3;
		obj_t BgL_modulez00;
		obj_t BgL_importz00;
		bool_t BgL_evaluablezf3zf3;
		bool_t BgL_evalzf3zf3;
		obj_t BgL_libraryz00;
		obj_t BgL_pragmaz00;
		obj_t BgL_srcz00;
		obj_t BgL_jvmzd2typezd2namez00;
		obj_t BgL_initz00;
		obj_t BgL_aliasz00;
	}                *BgL_globalz00_bglt;

	typedef struct BgL_localz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		long BgL_occurrencewz00;
		bool_t BgL_userzf3zf3;
		long BgL_keyz00;
	}               *BgL_localz00_bglt;

	typedef struct BgL_sfunz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_failsafez00;
		obj_t BgL_argszd2noescapezd2;
		obj_t BgL_propertyz00;
		obj_t BgL_argsz00;
		obj_t BgL_argszd2namezd2;
		obj_t BgL_bodyz00;
		obj_t BgL_classz00;
		obj_t BgL_dssslzd2keywordszd2;
		obj_t BgL_locz00;
		obj_t BgL_optionalsz00;
		obj_t BgL_keysz00;
		obj_t BgL_thezd2closurezd2globalz00;
		obj_t BgL_strengthz00;
		obj_t BgL_stackablez00;
	}              *BgL_sfunz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_sfunzf2iinfozf2_bgl
	{
		obj_t BgL_ownerz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
		obj_t BgL_cfromz00;
		obj_t BgL_ctoz00;
		obj_t BgL_kz00;
		obj_t BgL_kza2za2;
		obj_t BgL_uz00;
		obj_t BgL_cnz00;
		obj_t BgL_ctz00;
		obj_t BgL_kontz00;
		bool_t BgL_gzf3zf3;
		bool_t BgL_forcegzf3zf3;
		obj_t BgL_lz00;
		obj_t BgL_ledz00;
		obj_t BgL_istampz00;
		obj_t BgL_globalz00;
		obj_t BgL_kapturedz00;
		obj_t BgL_tailzd2coercionzd2;
		bool_t BgL_xhdlzf3zf3;
	}                      *BgL_sfunzf2iinfozf2_bglt;


	extern obj_t BGl_setzd2kapturedz12zc0zzintegrate_kapturedz00(obj_t);
	extern obj_t BGl_Cnz62Ctz12z70zzintegrate_ctnz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzintegrate_definitionz00();
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzintegrate_definitionz00();
	extern obj_t
		BGl_integratezd2globaliza7ez12z67zzintegrate_nodez00(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_za2verboseza2z00zzengine_paramz00;
	static obj_t BGl_gczd2rootszd2initz00zzintegrate_definitionz00();
	extern obj_t BGl_Gz12z12zzintegrate_gz00(obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_Kz12z12zzintegrate_kkz00(obj_t, BgL_globalz00_bglt);
	extern obj_t
		BGl_localzd2ze3globalz31zzintegrate_localzd2ze3globalz31(BgL_localz00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_definitionz00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_integratezd2definitionz12zc0zzintegrate_definitionz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzintegrate_definitionz00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t
		BGl_z62integratezd2definitionz12za2zzintegrate_definitionz00(obj_t, obj_t);
	extern obj_t BGl_Uz12z12zzintegrate_uz00();
	static bool_t BGl_verbzd2globaliza7ationz75zzintegrate_definitionz00(obj_t,
		obj_t);
	extern obj_t BGl_Az00zzintegrate_az00(BgL_globalz00_bglt, BgL_nodez00_bglt);
	extern obj_t BGl_displacezd2letzd2funz12z12zzintegrate_letzd2funzd2(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_definitionz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_localzd2ze3globalz31(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_nodez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_letzd2funzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_kapturedz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_gz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_ctnz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_uz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_kkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_az00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_definitionz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_definitionz00();
	extern obj_t BGl_Kza2z12zb0zzintegrate_kkz00(obj_t);
	BGL_IMPORT bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_za2phiza2z00zzintegrate_az00;
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1433z00zzintegrate_definitionz00,
		BgL_bgl_string1433za700za7za7i1436za7, " -->", 4);
	      DEFINE_STRING(BGl_string1434z00zzintegrate_definitionz00,
		BgL_bgl_string1434za700za7za7i1437za7, "           ", 11);
	      DEFINE_STRING(BGl_string1435z00zzintegrate_definitionz00,
		BgL_bgl_string1435za700za7za7i1438za7, "integrate_definition", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_integratezd2definitionz12zd2envz12zzintegrate_definitionz00,
		BgL_bgl_za762integrateza7d2d1439z00,
		BGl_z62integratezd2definitionz12za2zzintegrate_definitionz00, 0L, BUNSPEC,
		1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzintegrate_definitionz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_definitionz00(long
		BgL_checksumz00_1805, char *BgL_fromz00_1806)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_definitionz00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_definitionz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzintegrate_definitionz00();
					BGl_libraryzd2moduleszd2initz00zzintegrate_definitionz00();
					BGl_importedzd2moduleszd2initz00zzintegrate_definitionz00();
					return BGl_methodzd2initzd2zzintegrate_definitionz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_definitionz00()
	{
		{	/* Integrate/definition.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"integrate_definition");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"integrate_definition");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_definition");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"integrate_definition");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzintegrate_definitionz00()
	{
		{	/* Integrate/definition.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* integrate-definition! */
	BGL_EXPORTED_DEF obj_t
		BGl_integratezd2definitionz12zc0zzintegrate_definitionz00(obj_t
		BgL_globalz00_3)
	{
		{	/* Integrate/definition.scm 58 */
			{	/* Integrate/definition.scm 63 */
				BgL_valuez00_bglt BgL_funz00_1518;

				BgL_funz00_1518 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_globalz00_bglt) BgL_globalz00_3))))->BgL_valuez00);
				{	/* Integrate/definition.scm 63 */
					obj_t BgL_bodyz00_1519;

					BgL_bodyz00_1519 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_1518)))->BgL_bodyz00);
					{	/* Integrate/definition.scm 64 */
						obj_t BgL_az00_1520;

						BgL_az00_1520 =
							BGl_Az00zzintegrate_az00(
							((BgL_globalz00_bglt) BgL_globalz00_3),
							((BgL_nodez00_bglt) BgL_bodyz00_1519));
						{	/* Integrate/definition.scm 65 */

							{	/* Integrate/definition.scm 66 */
								obj_t BgL_arg1253z00_1521;

								BgL_arg1253z00_1521 =
									BGl_Kz12z12zzintegrate_kkz00(BgL_az00_1520,
									((BgL_globalz00_bglt) BgL_globalz00_3));
								BGl_Kza2z12zb0zzintegrate_kkz00(BgL_arg1253z00_1521);
							}
							BGl_Uz12z12zzintegrate_uz00();
							{	/* Integrate/definition.scm 68 */
								obj_t BgL_gz00_1522;

								BgL_gz00_1522 =
									BGl_Gz12z12zzintegrate_gz00
									(BGl_Cnz62Ctz12z70zzintegrate_ctnz00(BgL_az00_1520));
								if (NULLP(BgL_gz00_1522))
									{	/* Integrate/definition.scm 74 */
										obj_t BgL_list1255z00_1524;

										BgL_list1255z00_1524 =
											MAKE_YOUNG_PAIR(BgL_globalz00_3, BNIL);
										return BgL_list1255z00_1524;
									}
								else
									{	/* Integrate/definition.scm 72 */
										BGl_verbzd2globaliza7ationz75zzintegrate_definitionz00
											(BgL_globalz00_3, BgL_gz00_1522);
										{
											obj_t BgL_l1234z00_1526;

											BgL_l1234z00_1526 = BGl_za2phiza2z00zzintegrate_az00;
										BgL_zc3z04anonymousza31256ze3z87_1527:
											if (PAIRP(BgL_l1234z00_1526))
												{	/* Integrate/definition.scm 78 */
													{	/* Integrate/definition.scm 80 */
														obj_t BgL_fz00_1529;

														BgL_fz00_1529 = CAR(BgL_l1234z00_1526);
														{	/* Integrate/definition.scm 80 */
															bool_t BgL_test1443z00_1840;

															if (BGl_isazf3zf3zz__objectz00(BgL_fz00_1529,
																	BGl_localz00zzast_varz00))
																{	/* Integrate/definition.scm 80 */
																	bool_t BgL_test1445z00_1843;

																	{	/* Integrate/definition.scm 80 */
																		BgL_sfunz00_bglt BgL_oz00_1772;

																		BgL_oz00_1772 =
																			((BgL_sfunz00_bglt)
																			(((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							((BgL_localz00_bglt)
																								BgL_fz00_1529))))->
																				BgL_valuez00));
																		{
																			BgL_sfunzf2iinfozf2_bglt BgL_auxz00_1848;

																			{
																				obj_t BgL_auxz00_1849;

																				{	/* Integrate/definition.scm 80 */
																					BgL_objectz00_bglt BgL_tmpz00_1850;

																					BgL_tmpz00_1850 =
																						((BgL_objectz00_bglt)
																						BgL_oz00_1772);
																					BgL_auxz00_1849 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_1850);
																				}
																				BgL_auxz00_1848 =
																					((BgL_sfunzf2iinfozf2_bglt)
																					BgL_auxz00_1849);
																			}
																			BgL_test1445z00_1843 =
																				(((BgL_sfunzf2iinfozf2_bglt)
																					COBJECT(BgL_auxz00_1848))->
																				BgL_gzf3zf3);
																		}
																	}
																	if (BgL_test1445z00_1843)
																		{	/* Integrate/definition.scm 80 */
																			BgL_test1443z00_1840 = ((bool_t) 0);
																		}
																	else
																		{	/* Integrate/definition.scm 80 */
																			BgL_test1443z00_1840 = ((bool_t) 1);
																		}
																}
															else
																{	/* Integrate/definition.scm 80 */
																	BgL_test1443z00_1840 = ((bool_t) 0);
																}
															if (BgL_test1443z00_1840)
																{	/* Integrate/definition.scm 81 */
																	obj_t BgL_gz00_1535;

																	{	/* Integrate/definition.scm 81 */
																		BgL_sfunz00_bglt BgL_oz00_1775;

																		BgL_oz00_1775 =
																			((BgL_sfunz00_bglt)
																			(((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							((BgL_localz00_bglt)
																								BgL_fz00_1529))))->
																				BgL_valuez00));
																		{
																			BgL_sfunzf2iinfozf2_bglt BgL_auxz00_1859;

																			{
																				obj_t BgL_auxz00_1860;

																				{	/* Integrate/definition.scm 81 */
																					BgL_objectz00_bglt BgL_tmpz00_1861;

																					BgL_tmpz00_1861 =
																						((BgL_objectz00_bglt)
																						BgL_oz00_1775);
																					BgL_auxz00_1860 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_1861);
																				}
																				BgL_auxz00_1859 =
																					((BgL_sfunzf2iinfozf2_bglt)
																					BgL_auxz00_1860);
																			}
																			BgL_gz00_1535 =
																				(((BgL_sfunzf2iinfozf2_bglt)
																					COBJECT(BgL_auxz00_1859))->BgL_lz00);
																		}
																	}
																	{	/* Integrate/definition.scm 81 */
																		BgL_valuez00_bglt BgL_ifuz00_1536;

																		BgL_ifuz00_1536 =
																			(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						BgL_gz00_1535)))->BgL_valuez00);
																		{	/* Integrate/definition.scm 82 */

																			{	/* Integrate/definition.scm 85 */
																				obj_t BgL_arg1270z00_1537;

																				{	/* Integrate/definition.scm 85 */
																					obj_t BgL_arg1271z00_1538;

																					{
																						BgL_sfunzf2iinfozf2_bglt
																							BgL_auxz00_1868;
																						{
																							obj_t BgL_auxz00_1869;

																							{	/* Integrate/definition.scm 85 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_1870;
																								BgL_tmpz00_1870 =
																									((BgL_objectz00_bglt) (
																										(BgL_sfunz00_bglt)
																										BgL_ifuz00_1536));
																								BgL_auxz00_1869 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_1870);
																							}
																							BgL_auxz00_1868 =
																								((BgL_sfunzf2iinfozf2_bglt)
																								BgL_auxz00_1869);
																						}
																						BgL_arg1271z00_1538 =
																							(((BgL_sfunzf2iinfozf2_bglt)
																								COBJECT(BgL_auxz00_1868))->
																							BgL_ledz00);
																					}
																					BgL_arg1270z00_1537 =
																						MAKE_YOUNG_PAIR(BgL_fz00_1529,
																						BgL_arg1271z00_1538);
																				}
																				{
																					BgL_sfunzf2iinfozf2_bglt
																						BgL_auxz00_1877;
																					{
																						obj_t BgL_auxz00_1878;

																						{	/* Integrate/definition.scm 83 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_1879;
																							BgL_tmpz00_1879 =
																								((BgL_objectz00_bglt) (
																									(BgL_sfunz00_bglt)
																									BgL_ifuz00_1536));
																							BgL_auxz00_1878 =
																								BGL_OBJECT_WIDENING
																								(BgL_tmpz00_1879);
																						}
																						BgL_auxz00_1877 =
																							((BgL_sfunzf2iinfozf2_bglt)
																							BgL_auxz00_1878);
																					}
																					((((BgL_sfunzf2iinfozf2_bglt)
																								COBJECT(BgL_auxz00_1877))->
																							BgL_ledz00) =
																						((obj_t) BgL_arg1270z00_1537),
																						BUNSPEC);
																				}
																			}
																		}
																	}
																}
															else
																{	/* Integrate/definition.scm 80 */
																	BFALSE;
																}
														}
													}
													{
														obj_t BgL_l1234z00_1885;

														BgL_l1234z00_1885 = CDR(BgL_l1234z00_1526);
														BgL_l1234z00_1526 = BgL_l1234z00_1885;
														goto BgL_zc3z04anonymousza31256ze3z87_1527;
													}
												}
											else
												{	/* Integrate/definition.scm 78 */
													((bool_t) 1);
												}
										}
										{
											obj_t BgL_l1236z00_1546;

											BgL_l1236z00_1546 = BgL_gz00_1522;
										BgL_zc3z04anonymousza31276ze3z87_1547:
											if (PAIRP(BgL_l1236z00_1546))
												{	/* Integrate/definition.scm 89 */
													BGl_displacezd2letzd2funz12z12zzintegrate_letzd2funzd2
														(CAR(BgL_l1236z00_1546));
													{
														obj_t BgL_l1236z00_1891;

														BgL_l1236z00_1891 = CDR(BgL_l1236z00_1546);
														BgL_l1236z00_1546 = BgL_l1236z00_1891;
														goto BgL_zc3z04anonymousza31276ze3z87_1547;
													}
												}
											else
												{	/* Integrate/definition.scm 89 */
													((bool_t) 1);
												}
										}
										BGl_displacezd2letzd2funz12z12zzintegrate_letzd2funzd2
											(BgL_globalz00_3);
										BGl_setzd2kapturedz12zc0zzintegrate_kapturedz00
											(BgL_gz00_1522);
										{	/* Integrate/definition.scm 98 */
											obj_t BgL_newzd2gzd2_1552;

											{	/* Integrate/definition.scm 98 */
												obj_t BgL_head1240z00_1556;

												{	/* Integrate/definition.scm 98 */
													obj_t BgL_arg1289z00_1568;

													{	/* Integrate/definition.scm 98 */
														obj_t BgL_arg1290z00_1569;

														BgL_arg1290z00_1569 = CAR(((obj_t) BgL_gz00_1522));
														BgL_arg1289z00_1568 =
															BGl_localzd2ze3globalz31zzintegrate_localzd2ze3globalz31
															(((BgL_localz00_bglt) BgL_arg1290z00_1569));
													}
													{	/* Integrate/definition.scm 98 */
														obj_t BgL_res1429z00_1788;

														BgL_res1429z00_1788 =
															MAKE_YOUNG_PAIR(BgL_arg1289z00_1568, BNIL);
														BgL_head1240z00_1556 = BgL_res1429z00_1788;
													}
												}
												{	/* Integrate/definition.scm 98 */
													obj_t BgL_g1243z00_1557;

													BgL_g1243z00_1557 = CDR(((obj_t) BgL_gz00_1522));
													{
														obj_t BgL_l1238z00_1559;
														obj_t BgL_tail1241z00_1560;

														BgL_l1238z00_1559 = BgL_g1243z00_1557;
														BgL_tail1241z00_1560 = BgL_head1240z00_1556;
													BgL_zc3z04anonymousza31284ze3z87_1561:
														if (NULLP(BgL_l1238z00_1559))
															{	/* Integrate/definition.scm 98 */
																BgL_newzd2gzd2_1552 = BgL_head1240z00_1556;
															}
														else
															{	/* Integrate/definition.scm 98 */
																obj_t BgL_newtail1242z00_1563;

																{	/* Integrate/definition.scm 98 */
																	obj_t BgL_arg1287z00_1565;

																	{	/* Integrate/definition.scm 98 */
																		obj_t BgL_arg1288z00_1566;

																		BgL_arg1288z00_1566 =
																			CAR(((obj_t) BgL_l1238z00_1559));
																		BgL_arg1287z00_1565 =
																			BGl_localzd2ze3globalz31zzintegrate_localzd2ze3globalz31
																			(((BgL_localz00_bglt)
																				BgL_arg1288z00_1566));
																	}
																	{	/* Integrate/definition.scm 98 */
																		obj_t BgL_res1431z00_1792;

																		BgL_res1431z00_1792 =
																			MAKE_YOUNG_PAIR(BgL_arg1287z00_1565,
																			BNIL);
																		BgL_newtail1242z00_1563 =
																			BgL_res1431z00_1792;
																	}
																}
																SET_CDR(BgL_tail1241z00_1560,
																	BgL_newtail1242z00_1563);
																{	/* Integrate/definition.scm 98 */
																	obj_t BgL_arg1286z00_1564;

																	BgL_arg1286z00_1564 =
																		CDR(((obj_t) BgL_l1238z00_1559));
																	{
																		obj_t BgL_tail1241z00_1913;
																		obj_t BgL_l1238z00_1912;

																		BgL_l1238z00_1912 = BgL_arg1286z00_1564;
																		BgL_tail1241z00_1913 =
																			BgL_newtail1242z00_1563;
																		BgL_tail1241z00_1560 = BgL_tail1241z00_1913;
																		BgL_l1238z00_1559 = BgL_l1238z00_1912;
																		goto BgL_zc3z04anonymousza31284ze3z87_1561;
																	}
																}
															}
													}
												}
											}
											{	/* Integrate/definition.scm 99 */
												obj_t BgL_arg1282z00_1553;

												BgL_arg1282z00_1553 =
													BGl_integratezd2globaliza7ez12z67zzintegrate_nodez00(
													((BgL_nodez00_bglt) BgL_bodyz00_1519),
													((BgL_variablez00_bglt) BgL_globalz00_3), BNIL);
												((((BgL_sfunz00_bglt) COBJECT(
																((BgL_sfunz00_bglt) BgL_funz00_1518)))->
														BgL_bodyz00) =
													((obj_t) BgL_arg1282z00_1553), BUNSPEC);
											}
											return
												MAKE_YOUNG_PAIR(BgL_globalz00_3, BgL_newzd2gzd2_1552);
										}
									}
							}
						}
					}
				}
			}
		}

	}



/* &integrate-definition! */
	obj_t BGl_z62integratezd2definitionz12za2zzintegrate_definitionz00(obj_t
		BgL_envz00_1803, obj_t BgL_globalz00_1804)
	{
		{	/* Integrate/definition.scm 58 */
			return
				BGl_integratezd2definitionz12zc0zzintegrate_definitionz00
				(BgL_globalz00_1804);
		}

	}



/* verb-globalization */
	bool_t BGl_verbzd2globaliza7ationz75zzintegrate_definitionz00(obj_t
		BgL_globalz00_4, obj_t BgL_gz00_5)
	{
		{	/* Integrate/definition.scm 106 */
			{
				obj_t BgL_l1244z00_1572;

				BgL_l1244z00_1572 = BgL_gz00_5;
			BgL_zc3z04anonymousza31292ze3z87_1573:
				if (PAIRP(BgL_l1244z00_1572))
					{	/* Integrate/definition.scm 110 */
						{	/* Integrate/definition.scm 111 */
							obj_t BgL_localz00_1575;

							BgL_localz00_1575 = CAR(BgL_l1244z00_1572);
							if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT(((long) 3)),
									BGl_za2verboseza2z00zzengine_paramz00))
								{	/* Integrate/definition.scm 111 */
									if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT(((long) 3)),
											BGl_za2verboseza2z00zzengine_paramz00))
										{	/* Integrate/definition.scm 111 */
											obj_t BgL_arg1296z00_1580;

											BgL_arg1296z00_1580 =
												BGl_shapez00zztools_shapez00(BgL_localz00_1575);
											{	/* Integrate/definition.scm 111 */
												obj_t BgL_list1297z00_1581;

												{	/* Integrate/definition.scm 111 */
													obj_t BgL_arg1298z00_1582;

													{	/* Integrate/definition.scm 111 */
														obj_t BgL_arg1299z00_1583;

														{	/* Integrate/definition.scm 111 */
															obj_t BgL_arg1300z00_1584;

															BgL_arg1300z00_1584 =
																MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)),
																BNIL);
															BgL_arg1299z00_1583 =
																MAKE_YOUNG_PAIR
																(BGl_string1433z00zzintegrate_definitionz00,
																BgL_arg1300z00_1584);
														}
														BgL_arg1298z00_1582 =
															MAKE_YOUNG_PAIR(BgL_arg1296z00_1580,
															BgL_arg1299z00_1583);
													}
													BgL_list1297z00_1581 =
														MAKE_YOUNG_PAIR
														(BGl_string1434z00zzintegrate_definitionz00,
														BgL_arg1298z00_1582);
												}
												BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
													BgL_list1297z00_1581);
										}}
									else
										{	/* Integrate/definition.scm 111 */
											BUNSPEC;
										}
								}
							else
								{	/* Integrate/definition.scm 111 */
									BFALSE;
								}
						}
						{
							obj_t BgL_l1244z00_1938;

							BgL_l1244z00_1938 = CDR(BgL_l1244z00_1572);
							BgL_l1244z00_1572 = BgL_l1244z00_1938;
							goto BgL_zc3z04anonymousza31292ze3z87_1573;
						}
					}
				else
					{	/* Integrate/definition.scm 110 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzintegrate_definitionz00()
	{
		{	/* Integrate/definition.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_definitionz00()
	{
		{	/* Integrate/definition.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_definitionz00()
	{
		{	/* Integrate/definition.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_definitionz00()
	{
		{	/* Integrate/definition.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1435z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1435z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1435z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1435z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1435z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 383247839),
				BSTRING_TO_STRING(BGl_string1435z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1435z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1435z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string1435z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzintegrate_az00(((long) 523633215),
				BSTRING_TO_STRING(BGl_string1435z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzintegrate_kkz00(((long) 75634325),
				BSTRING_TO_STRING(BGl_string1435z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzintegrate_uz00(((long) 147062279),
				BSTRING_TO_STRING(BGl_string1435z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzintegrate_ctnz00(((long) 240374540),
				BSTRING_TO_STRING(BGl_string1435z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzintegrate_gz00(((long) 52380304),
				BSTRING_TO_STRING(BGl_string1435z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzintegrate_kapturedz00(((long) 70748951),
				BSTRING_TO_STRING(BGl_string1435z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzintegrate_letzd2funzd2(((long)
					450800319),
				BSTRING_TO_STRING(BGl_string1435z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzintegrate_nodez00(((long) 347237018),
				BSTRING_TO_STRING(BGl_string1435z00zzintegrate_definitionz00));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_localzd2ze3globalz31(((long)
					143977821),
				BSTRING_TO_STRING(BGl_string1435z00zzintegrate_definitionz00));
		}

	}

#ifdef __cplusplus
}
#endif
