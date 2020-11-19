/*===========================================================================*/
/*   (Globalize/integration.scm)                                             */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/integration.scm) */
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

	typedef struct BgL_sfunzf2ginfozf2_bgl
	{
		bool_t BgL_gzf3zf3;
		obj_t BgL_cfromz00;
		obj_t BgL_cfromza2za2;
		obj_t BgL_ctoz00;
		obj_t BgL_ctoza2za2;
		obj_t BgL_efunctionsz00;
		obj_t BgL_integratorz00;
		obj_t BgL_imarkz00;
		obj_t BgL_ownerz00;
		obj_t BgL_integratedz00;
		obj_t BgL_pluggedzd2inzd2;
		long BgL_markz00;
		obj_t BgL_freezd2markzd2;
		obj_t BgL_thezd2globalzd2;
		obj_t BgL_kapturedz00;
		obj_t BgL_newzd2bodyzd2;
		long BgL_bmarkz00;
		long BgL_umarkz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
	}                      *BgL_sfunzf2ginfozf2_bglt;

	typedef struct BgL_localzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		bool_t BgL_globaliza7edzf3z54;
	}                       *BgL_localzf2ginfozf2_bglt;


	static obj_t
		BGl_traversezd2callzd2toz12z12zzglobaliza7e_integrationza7(obj_t);
	BGL_IMPORT obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzglobaliza7e_integrationza7();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzglobaliza7e_integrationza7(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_integrationza7();
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_integrationza7();
	static obj_t BGl_z62setzd2integrationz12za2zzglobaliza7e_integrationza7(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_integrationza7 =
		BUNSPEC;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_integrationza7();
	static obj_t BGl_integratezd2inz12zc0zzglobaliza7e_integrationza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31311ze3ze5zzglobaliza7e_integrationza7(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2integrationz12zc0zzglobaliza7e_integrationza7(BgL_globalz00_bglt,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_integrationza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_kaptureza7(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_globaliza7ez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_integrationza7();
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_integrationza7();
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2integrationz12zd2envz12zzglobaliza7e_integrationza7,
		BgL_bgl_za762setza7d2integra1638z00,
		BGl_z62setzd2integrationz12za2zzglobaliza7e_integrationza7, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string1635z00zzglobaliza7e_integrationza7,
		BgL_bgl_string1635za700za7za7g1639za7, "set-integration!", 16);
	      DEFINE_STRING(BGl_string1636z00zzglobaliza7e_integrationza7,
		BgL_bgl_string1636za700za7za7g1640za7, "No integration for ", 19);
	      DEFINE_STRING(BGl_string1637z00zzglobaliza7e_integrationza7,
		BgL_bgl_string1637za700za7za7g1641za7, "globalize_integration", 21);
	BGL_IMPORT obj_t BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzglobaliza7e_integrationza7));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_integrationza7(long
		BgL_checksumz00_2113, char *BgL_fromz00_2114)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_integrationza7))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_integrationza7 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzglobaliza7e_integrationza7();
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_integrationza7();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_integrationza7();
					return BGl_methodzd2initzd2zzglobaliza7e_integrationza7();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_integrationza7()
	{
		{	/* Globalize/integration.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_integration");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_integration");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"globalize_integration");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"globalize_integration");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"globalize_integration");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_integration");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_integrationza7()
	{
		{	/* Globalize/integration.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzglobaliza7e_integrationza7(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1668;

				BgL_headz00_1668 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1669;
					obj_t BgL_tailz00_1670;

					BgL_prevz00_1669 = BgL_headz00_1668;
					BgL_tailz00_1670 = BgL_l1z00_1;
				BgL_loopz00_1671:
					if (PAIRP(BgL_tailz00_1670))
						{
							obj_t BgL_newzd2prevzd2_1673;

							BgL_newzd2prevzd2_1673 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1670), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1669, BgL_newzd2prevzd2_1673);
							{
								obj_t BgL_tailz00_2136;
								obj_t BgL_prevz00_2135;

								BgL_prevz00_2135 = BgL_newzd2prevzd2_1673;
								BgL_tailz00_2136 = CDR(BgL_tailz00_1670);
								BgL_tailz00_1670 = BgL_tailz00_2136;
								BgL_prevz00_1669 = BgL_prevz00_2135;
								goto BgL_loopz00_1671;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1668);
				}
			}
		}

	}



/* set-integration! */
	BGL_EXPORTED_DEF obj_t
		BGl_setzd2integrationz12zc0zzglobaliza7e_integrationza7(BgL_globalz00_bglt
		BgL_globalz00_3, obj_t BgL_ez00_4, obj_t BgL_g0z00_5, obj_t BgL_g1z00_6)
	{
		{	/* Globalize/integration.scm 31 */
			{
				obj_t BgL_l1251z00_1677;

				BgL_l1251z00_1677 = BgL_ez00_4;
			BgL_zc3z04anonymousza31274ze3z87_1678:
				if (PAIRP(BgL_l1251z00_1677))
					{	/* Globalize/integration.scm 34 */
						{	/* Globalize/integration.scm 35 */
							obj_t BgL_fz00_1680;

							BgL_fz00_1680 = CAR(BgL_l1251z00_1677);
							{
								BgL_localzf2ginfozf2_bglt BgL_auxz00_2142;

								{
									obj_t BgL_auxz00_2143;

									{	/* Globalize/integration.scm 36 */
										BgL_objectz00_bglt BgL_tmpz00_2144;

										BgL_tmpz00_2144 =
											((BgL_objectz00_bglt)
											((BgL_localz00_bglt) BgL_fz00_1680));
										BgL_auxz00_2143 = BGL_OBJECT_WIDENING(BgL_tmpz00_2144);
									}
									BgL_auxz00_2142 =
										((BgL_localzf2ginfozf2_bglt) BgL_auxz00_2143);
								}
								((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2142))->
										BgL_globaliza7edzf3z54) = ((bool_t) ((bool_t) 1)), BUNSPEC);
							}
						}
						{
							obj_t BgL_l1251z00_2150;

							BgL_l1251z00_2150 = CDR(BgL_l1251z00_1677);
							BgL_l1251z00_1677 = BgL_l1251z00_2150;
							goto BgL_zc3z04anonymousza31274ze3z87_1678;
						}
					}
				else
					{	/* Globalize/integration.scm 34 */
						((bool_t) 1);
					}
			}
			{	/* Globalize/integration.scm 40 */
				obj_t BgL_g1110z00_1684;

				BgL_g1110z00_1684 =
					MAKE_YOUNG_PAIR(((obj_t) BgL_globalz00_3), BgL_ez00_4);
				{
					obj_t BgL_fnsz00_1686;

					BgL_fnsz00_1686 = BgL_g1110z00_1684;
				BgL_zc3z04anonymousza31277ze3z87_1687:
					if (NULLP(BgL_fnsz00_1686))
						{	/* Globalize/integration.scm 41 */
							((bool_t) 0);
						}
					else
						{	/* Globalize/integration.scm 44 */
							obj_t BgL_arg1280z00_1689;

							{	/* Globalize/integration.scm 44 */
								obj_t BgL_arg1281z00_1690;

								{	/* Globalize/integration.scm 44 */
									obj_t BgL_runner1290z00_1709;

									{	/* Globalize/integration.scm 44 */
										obj_t BgL_head1255z00_1695;

										{	/* Globalize/integration.scm 44 */
											obj_t BgL_arg1288z00_1707;

											BgL_arg1288z00_1707 =
												BGl_traversezd2callzd2toz12z12zzglobaliza7e_integrationza7
												(CAR(BgL_fnsz00_1686));
											{	/* Globalize/integration.scm 44 */
												obj_t BgL_res1616z00_1990;

												BgL_res1616z00_1990 =
													MAKE_YOUNG_PAIR(BgL_arg1288z00_1707, BNIL);
												BgL_head1255z00_1695 = BgL_res1616z00_1990;
											}
										}
										{	/* Globalize/integration.scm 44 */
											obj_t BgL_g1259z00_1696;

											BgL_g1259z00_1696 = CDR(BgL_fnsz00_1686);
											{
												obj_t BgL_l1253z00_1698;
												obj_t BgL_tail1256z00_1699;

												BgL_l1253z00_1698 = BgL_g1259z00_1696;
												BgL_tail1256z00_1699 = BgL_head1255z00_1695;
											BgL_zc3z04anonymousza31283ze3z87_1700:
												if (NULLP(BgL_l1253z00_1698))
													{	/* Globalize/integration.scm 44 */
														BgL_runner1290z00_1709 = BgL_head1255z00_1695;
													}
												else
													{	/* Globalize/integration.scm 44 */
														obj_t BgL_newtail1257z00_1702;

														{	/* Globalize/integration.scm 44 */
															obj_t BgL_arg1286z00_1704;

															{	/* Globalize/integration.scm 44 */
																obj_t BgL_arg1287z00_1705;

																BgL_arg1287z00_1705 =
																	CAR(((obj_t) BgL_l1253z00_1698));
																BgL_arg1286z00_1704 =
																	BGl_traversezd2callzd2toz12z12zzglobaliza7e_integrationza7
																	(BgL_arg1287z00_1705);
															}
															{	/* Globalize/integration.scm 44 */
																obj_t BgL_res1618z00_1994;

																BgL_res1618z00_1994 =
																	MAKE_YOUNG_PAIR(BgL_arg1286z00_1704, BNIL);
																BgL_newtail1257z00_1702 = BgL_res1618z00_1994;
															}
														}
														SET_CDR(BgL_tail1256z00_1699,
															BgL_newtail1257z00_1702);
														{	/* Globalize/integration.scm 44 */
															obj_t BgL_arg1285z00_1703;

															BgL_arg1285z00_1703 =
																CDR(((obj_t) BgL_l1253z00_1698));
															{
																obj_t BgL_tail1256z00_2170;
																obj_t BgL_l1253z00_2169;

																BgL_l1253z00_2169 = BgL_arg1285z00_1703;
																BgL_tail1256z00_2170 = BgL_newtail1257z00_1702;
																BgL_tail1256z00_1699 = BgL_tail1256z00_2170;
																BgL_l1253z00_1698 = BgL_l1253z00_2169;
																goto BgL_zc3z04anonymousza31283ze3z87_1700;
															}
														}
													}
											}
										}
									}
									BgL_arg1281z00_1690 =
										BGl_appendz00zz__r4_pairs_and_lists_6_3z00
										(BgL_runner1290z00_1709);
								}
								{	/* Globalize/integration.scm 43 */

									BgL_arg1280z00_1689 =
										BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1281z00_1690,
										BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);
								}
							}
							{
								obj_t BgL_fnsz00_2173;

								BgL_fnsz00_2173 = BgL_arg1280z00_1689;
								BgL_fnsz00_1686 = BgL_fnsz00_2173;
								goto BgL_zc3z04anonymousza31277ze3z87_1687;
							}
						}
				}
			}
			{
				obj_t BgL_l1260z00_1712;

				BgL_l1260z00_1712 = BgL_g1z00_6;
			BgL_zc3z04anonymousza31291ze3z87_1713:
				if (PAIRP(BgL_l1260z00_1712))
					{	/* Globalize/integration.scm 46 */
						{	/* Globalize/integration.scm 47 */
							obj_t BgL_fz00_1715;

							BgL_fz00_1715 = CAR(BgL_l1260z00_1712);
							{	/* Globalize/integration.scm 47 */
								bool_t BgL_test1648z00_2177;

								{	/* Globalize/integration.scm 108 */
									bool_t BgL__ortest_1116z00_1999;

									BgL__ortest_1116z00_1999 =
										BGl_isazf3zf3zz__objectz00(BgL_fz00_1715,
										BGl_globalz00zzast_varz00);
									if (BgL__ortest_1116z00_1999)
										{	/* Globalize/integration.scm 108 */
											BgL_test1648z00_2177 = BgL__ortest_1116z00_1999;
										}
									else
										{
											BgL_localzf2ginfozf2_bglt BgL_auxz00_2180;

											{
												obj_t BgL_auxz00_2181;

												{	/* Globalize/integration.scm 108 */
													BgL_objectz00_bglt BgL_tmpz00_2182;

													BgL_tmpz00_2182 =
														((BgL_objectz00_bglt)
														((BgL_localz00_bglt) BgL_fz00_1715));
													BgL_auxz00_2181 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2182);
												}
												BgL_auxz00_2180 =
													((BgL_localzf2ginfozf2_bglt) BgL_auxz00_2181);
											}
											BgL_test1648z00_2177 =
												(((BgL_localzf2ginfozf2_bglt)
													COBJECT(BgL_auxz00_2180))->BgL_globaliza7edzf3z54);
										}
								}
								if (BgL_test1648z00_2177)
									{	/* Globalize/integration.scm 47 */
										BFALSE;
									}
								else
									{	/* Globalize/integration.scm 51 */
										BgL_sfunz00_bglt BgL_i1112z00_1718;

										BgL_i1112z00_1718 =
											((BgL_sfunz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_fz00_1715))))->
												BgL_valuez00));
										{
											obj_t BgL_auxz00_2198;
											BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2192;

											{	/* Globalize/integration.scm 52 */
												obj_t BgL_arg1295z00_1719;

												{
													BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2199;

													{
														obj_t BgL_auxz00_2200;

														{	/* Globalize/integration.scm 52 */
															BgL_objectz00_bglt BgL_tmpz00_2201;

															BgL_tmpz00_2201 =
																((BgL_objectz00_bglt) BgL_i1112z00_1718);
															BgL_auxz00_2200 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_2201);
														}
														BgL_auxz00_2199 =
															((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2200);
													}
													BgL_arg1295z00_1719 =
														(((BgL_sfunzf2ginfozf2_bglt)
															COBJECT(BgL_auxz00_2199))->BgL_imarkz00);
												}
												BgL_auxz00_2198 = CAR(((obj_t) BgL_arg1295z00_1719));
											}
											{
												obj_t BgL_auxz00_2193;

												{	/* Globalize/integration.scm 52 */
													BgL_objectz00_bglt BgL_tmpz00_2194;

													BgL_tmpz00_2194 =
														((BgL_objectz00_bglt) BgL_i1112z00_1718);
													BgL_auxz00_2193 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2194);
												}
												BgL_auxz00_2192 =
													((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2193);
											}
											((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2192))->
													BgL_integratorz00) =
												((obj_t) BgL_auxz00_2198), BUNSPEC);
										}
									}
							}
						}
						{
							obj_t BgL_l1260z00_2209;

							BgL_l1260z00_2209 = CDR(BgL_l1260z00_1712);
							BgL_l1260z00_1712 = BgL_l1260z00_2209;
							goto BgL_zc3z04anonymousza31291ze3z87_1713;
						}
					}
				else
					{	/* Globalize/integration.scm 46 */
						((bool_t) 1);
					}
			}
			{
				obj_t BgL_l1262z00_1723;

				{	/* Globalize/integration.scm 55 */
					bool_t BgL_tmpz00_2211;

					BgL_l1262z00_1723 = BgL_g1z00_6;
				BgL_zc3z04anonymousza31297ze3z87_1724:
					if (PAIRP(BgL_l1262z00_1723))
						{	/* Globalize/integration.scm 55 */
							{	/* Globalize/integration.scm 56 */
								obj_t BgL_fz00_1726;

								BgL_fz00_1726 = CAR(BgL_l1262z00_1723);
								{	/* Globalize/integration.scm 56 */
									BgL_sfunz00_bglt BgL_i1113z00_1727;

									BgL_i1113z00_1727 =
										((BgL_sfunz00_bglt)
										(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt) BgL_fz00_1726))))->
											BgL_valuez00));
									{	/* Globalize/integration.scm 59 */
										bool_t BgL_test1651z00_2219;

										{	/* Globalize/integration.scm 108 */
											bool_t BgL__ortest_1116z00_2011;

											BgL__ortest_1116z00_2011 =
												BGl_isazf3zf3zz__objectz00(BgL_fz00_1726,
												BGl_globalz00zzast_varz00);
											if (BgL__ortest_1116z00_2011)
												{	/* Globalize/integration.scm 108 */
													BgL_test1651z00_2219 = BgL__ortest_1116z00_2011;
												}
											else
												{
													BgL_localzf2ginfozf2_bglt BgL_auxz00_2222;

													{
														obj_t BgL_auxz00_2223;

														{	/* Globalize/integration.scm 108 */
															BgL_objectz00_bglt BgL_tmpz00_2224;

															BgL_tmpz00_2224 =
																((BgL_objectz00_bglt)
																((BgL_localz00_bglt) BgL_fz00_1726));
															BgL_auxz00_2223 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_2224);
														}
														BgL_auxz00_2222 =
															((BgL_localzf2ginfozf2_bglt) BgL_auxz00_2223);
													}
													BgL_test1651z00_2219 =
														(((BgL_localzf2ginfozf2_bglt)
															COBJECT(BgL_auxz00_2222))->
														BgL_globaliza7edzf3z54);
												}
										}
										if (BgL_test1651z00_2219)
											{	/* Globalize/integration.scm 59 */
												{	/* Globalize/integration.scm 114 */
													BgL_valuez00_bglt BgL_arg1348z00_2015;

													BgL_arg1348z00_2015 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_fz00_1726))))->
														BgL_valuez00);
													{
														BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2233;

														{
															obj_t BgL_auxz00_2234;

															{	/* Globalize/integration.scm 114 */
																BgL_objectz00_bglt BgL_tmpz00_2235;

																BgL_tmpz00_2235 =
																	((BgL_objectz00_bglt)
																	((BgL_sfunz00_bglt) BgL_arg1348z00_2015));
																BgL_auxz00_2234 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_2235);
															}
															BgL_auxz00_2233 =
																((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2234);
														}
														((((BgL_sfunzf2ginfozf2_bglt)
																	COBJECT(BgL_auxz00_2233))->
																BgL_integratorz00) = ((obj_t) BFALSE), BUNSPEC);
													}
												}
											}
										else
											{	/* Globalize/integration.scm 62 */
												bool_t BgL_test1653z00_2241;

												{	/* Globalize/integration.scm 62 */
													obj_t BgL_arg1306z00_1733;

													{
														BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2242;

														{
															obj_t BgL_auxz00_2243;

															{	/* Globalize/integration.scm 62 */
																BgL_objectz00_bglt BgL_tmpz00_2244;

																BgL_tmpz00_2244 =
																	((BgL_objectz00_bglt) BgL_i1113z00_1727);
																BgL_auxz00_2243 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_2244);
															}
															BgL_auxz00_2242 =
																((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2243);
														}
														BgL_arg1306z00_1733 =
															(((BgL_sfunzf2ginfozf2_bglt)
																COBJECT(BgL_auxz00_2242))->BgL_integratorz00);
													}
													BgL_test1653z00_2241 =
														BGl_isazf3zf3zz__objectz00(BgL_arg1306z00_1733,
														BGl_variablez00zzast_varz00);
												}
												if (BgL_test1653z00_2241)
													{	/* Globalize/integration.scm 62 */
														{	/* Globalize/integration.scm 66 */
															obj_t BgL_arg1303z00_1731;

															{
																BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2250;

																{
																	obj_t BgL_auxz00_2251;

																	{	/* Globalize/integration.scm 66 */
																		BgL_objectz00_bglt BgL_tmpz00_2252;

																		BgL_tmpz00_2252 =
																			((BgL_objectz00_bglt) BgL_i1113z00_1727);
																		BgL_auxz00_2251 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_2252);
																	}
																	BgL_auxz00_2250 =
																		((BgL_sfunzf2ginfozf2_bglt)
																		BgL_auxz00_2251);
																}
																BgL_arg1303z00_1731 =
																	(((BgL_sfunzf2ginfozf2_bglt)
																		COBJECT(BgL_auxz00_2250))->
																	BgL_integratorz00);
															}
															BGl_integratezd2inz12zc0zzglobaliza7e_integrationza7
																(BgL_fz00_1726, BgL_arg1303z00_1731);
														}
													}
												else
													{	/* Globalize/integration.scm 62 */
														BGl_internalzd2errorzd2zztools_errorz00
															(BGl_string1635z00zzglobaliza7e_integrationza7,
															BGl_string1636z00zzglobaliza7e_integrationza7,
															BGl_shapez00zztools_shapez00(BgL_fz00_1726));
													}
											}
									}
								}
							}
							{
								obj_t BgL_l1262z00_2260;

								BgL_l1262z00_2260 = CDR(BgL_l1262z00_1723);
								BgL_l1262z00_1723 = BgL_l1262z00_2260;
								goto BgL_zc3z04anonymousza31297ze3z87_1724;
							}
						}
					else
						{	/* Globalize/integration.scm 55 */
							BgL_tmpz00_2211 = ((bool_t) 1);
						}
					return BBOOL(BgL_tmpz00_2211);
				}
			}
		}

	}



/* &set-integration! */
	obj_t BGl_z62setzd2integrationz12za2zzglobaliza7e_integrationza7(obj_t
		BgL_envz00_2083, obj_t BgL_globalz00_2084, obj_t BgL_ez00_2085,
		obj_t BgL_g0z00_2086, obj_t BgL_g1z00_2087)
	{
		{	/* Globalize/integration.scm 31 */
			return
				BGl_setzd2integrationz12zc0zzglobaliza7e_integrationza7(
				((BgL_globalz00_bglt) BgL_globalz00_2084), BgL_ez00_2085,
				BgL_g0z00_2086, BgL_g1z00_2087);
		}

	}



/* traverse-call-to! */
	obj_t BGl_traversezd2callzd2toz12z12zzglobaliza7e_integrationza7(obj_t
		BgL_fz00_7)
	{
		{	/* Globalize/integration.scm 77 */
			{	/* Globalize/integration.scm 78 */
				obj_t BgL_integratorsz00_1736;

				{	/* Globalize/integration.scm 78 */
					bool_t BgL_test1654z00_2265;

					{	/* Globalize/integration.scm 108 */
						bool_t BgL__ortest_1116z00_2023;

						BgL__ortest_1116z00_2023 =
							BGl_isazf3zf3zz__objectz00(BgL_fz00_7, BGl_globalz00zzast_varz00);
						if (BgL__ortest_1116z00_2023)
							{	/* Globalize/integration.scm 108 */
								BgL_test1654z00_2265 = BgL__ortest_1116z00_2023;
							}
						else
							{
								BgL_localzf2ginfozf2_bglt BgL_auxz00_2268;

								{
									obj_t BgL_auxz00_2269;

									{	/* Globalize/integration.scm 108 */
										BgL_objectz00_bglt BgL_tmpz00_2270;

										BgL_tmpz00_2270 =
											((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_fz00_7));
										BgL_auxz00_2269 = BGL_OBJECT_WIDENING(BgL_tmpz00_2270);
									}
									BgL_auxz00_2268 =
										((BgL_localzf2ginfozf2_bglt) BgL_auxz00_2269);
								}
								BgL_test1654z00_2265 =
									(((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2268))->
									BgL_globaliza7edzf3z54);
							}
					}
					if (BgL_test1654z00_2265)
						{	/* Globalize/integration.scm 79 */
							obj_t BgL_list1342z00_1777;

							BgL_list1342z00_1777 = MAKE_YOUNG_PAIR(BgL_fz00_7, BNIL);
							BgL_integratorsz00_1736 = BgL_list1342z00_1777;
						}
					else
						{	/* Globalize/integration.scm 80 */
							obj_t BgL_arg1344z00_1778;
							obj_t BgL_arg1345z00_1779;

							{	/* Globalize/integration.scm 80 */
								BgL_sfunz00_bglt BgL_oz00_2029;

								BgL_oz00_2029 =
									((BgL_sfunz00_bglt)
									(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_fz00_7))))->BgL_valuez00));
								{
									BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2281;

									{
										obj_t BgL_auxz00_2282;

										{	/* Globalize/integration.scm 80 */
											BgL_objectz00_bglt BgL_tmpz00_2283;

											BgL_tmpz00_2283 = ((BgL_objectz00_bglt) BgL_oz00_2029);
											BgL_auxz00_2282 = BGL_OBJECT_WIDENING(BgL_tmpz00_2283);
										}
										BgL_auxz00_2281 =
											((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2282);
									}
									BgL_arg1344z00_1778 =
										(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2281))->
										BgL_imarkz00);
								}
							}
							{	/* Globalize/integration.scm 80 */
								obj_t BgL_list1347z00_1781;

								BgL_list1347z00_1781 = MAKE_YOUNG_PAIR(BgL_fz00_7, BNIL);
								BgL_arg1345z00_1779 = BgL_list1347z00_1781;
							}
							BgL_integratorsz00_1736 =
								BGl_appendzd221011zd2zzglobaliza7e_integrationza7
								(BgL_arg1344z00_1778, BgL_arg1345z00_1779);
						}
				}
				{	/* Globalize/integration.scm 81 */
					obj_t BgL_arg1309z00_1738;

					{	/* Globalize/integration.scm 98 */
						BgL_sfunz00_bglt BgL_oz00_2033;

						BgL_oz00_2033 =
							((BgL_sfunz00_bglt)
							(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_fz00_7)))->BgL_valuez00));
						{
							BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2293;

							{
								obj_t BgL_auxz00_2294;

								{	/* Globalize/integration.scm 98 */
									BgL_objectz00_bglt BgL_tmpz00_2295;

									BgL_tmpz00_2295 = ((BgL_objectz00_bglt) BgL_oz00_2033);
									BgL_auxz00_2294 = BGL_OBJECT_WIDENING(BgL_tmpz00_2295);
								}
								BgL_auxz00_2293 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2294);
							}
							BgL_arg1309z00_1738 =
								(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2293))->
								BgL_ctoz00);
						}
					}
					{	/* Globalize/integration.scm 83 */
						obj_t BgL_zc3z04anonymousza31311ze3z87_2091;

						BgL_zc3z04anonymousza31311ze3z87_2091 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31311ze3ze5zzglobaliza7e_integrationza7,
							(int) (((long) 1)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31311ze3z87_2091,
							(int) (((long) 0)), BgL_integratorsz00_1736);
						PROCEDURE_SET(BgL_zc3z04anonymousza31311ze3z87_2091,
							(int) (((long) 1)), BgL_fz00_7);
						{	/* Globalize/integration.scm 81 */
							obj_t BgL_list1310z00_1739;

							BgL_list1310z00_1739 = MAKE_YOUNG_PAIR(BgL_arg1309z00_1738, BNIL);
							return
								BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
								(BgL_zc3z04anonymousza31311ze3z87_2091, BgL_list1310z00_1739);
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1311> */
	obj_t BGl_z62zc3z04anonymousza31311ze3ze5zzglobaliza7e_integrationza7(obj_t
		BgL_envz00_2092, obj_t BgL_gz00_2095)
	{
		{	/* Globalize/integration.scm 81 */
			{	/* Globalize/integration.scm 83 */
				obj_t BgL_integratorsz00_2093;
				obj_t BgL_fz00_2094;

				BgL_integratorsz00_2093 =
					PROCEDURE_REF(BgL_envz00_2092, (int) (((long) 0)));
				BgL_fz00_2094 = PROCEDURE_REF(BgL_envz00_2092, (int) (((long) 1)));
				{	/* Globalize/integration.scm 83 */
					bool_t BgL_test1656z00_2313;

					{	/* Globalize/integration.scm 83 */
						bool_t BgL_test1657z00_2314;

						{	/* Globalize/integration.scm 108 */
							bool_t BgL__ortest_1116z00_2096;

							BgL__ortest_1116z00_2096 =
								BGl_isazf3zf3zz__objectz00(BgL_gz00_2095,
								BGl_globalz00zzast_varz00);
							if (BgL__ortest_1116z00_2096)
								{	/* Globalize/integration.scm 108 */
									BgL_test1657z00_2314 = BgL__ortest_1116z00_2096;
								}
							else
								{
									BgL_localzf2ginfozf2_bglt BgL_auxz00_2317;

									{
										obj_t BgL_auxz00_2318;

										{	/* Globalize/integration.scm 108 */
											BgL_objectz00_bglt BgL_tmpz00_2319;

											BgL_tmpz00_2319 =
												((BgL_objectz00_bglt)
												((BgL_localz00_bglt) BgL_gz00_2095));
											BgL_auxz00_2318 = BGL_OBJECT_WIDENING(BgL_tmpz00_2319);
										}
										BgL_auxz00_2317 =
											((BgL_localzf2ginfozf2_bglt) BgL_auxz00_2318);
									}
									BgL_test1657z00_2314 =
										(((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2317))->
										BgL_globaliza7edzf3z54);
								}
						}
						if (BgL_test1657z00_2314)
							{	/* Globalize/integration.scm 83 */
								BgL_test1656z00_2313 = ((bool_t) 1);
							}
						else
							{	/* Globalize/integration.scm 83 */
								BgL_test1656z00_2313 = (BgL_fz00_2094 == BgL_gz00_2095);
							}
					}
					if (BgL_test1656z00_2313)
						{	/* Globalize/integration.scm 83 */
							return BFALSE;
						}
					else
						{	/* Globalize/integration.scm 84 */
							BgL_sfunz00_bglt BgL_i1115z00_2097;

							BgL_i1115z00_2097 =
								((BgL_sfunz00_bglt)
								(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_localz00_bglt) BgL_gz00_2095))))->BgL_valuez00));
							{	/* Globalize/integration.scm 85 */
								bool_t BgL_test1659z00_2330;

								{	/* Globalize/integration.scm 85 */
									obj_t BgL_arg1335z00_2098;

									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2331;

										{
											obj_t BgL_auxz00_2332;

											{	/* Globalize/integration.scm 85 */
												BgL_objectz00_bglt BgL_tmpz00_2333;

												BgL_tmpz00_2333 =
													((BgL_objectz00_bglt) BgL_i1115z00_2097);
												BgL_auxz00_2332 = BGL_OBJECT_WIDENING(BgL_tmpz00_2333);
											}
											BgL_auxz00_2331 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2332);
										}
										BgL_arg1335z00_2098 =
											(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2331))->
											BgL_imarkz00);
									}
									BgL_test1659z00_2330 = (BgL_arg1335z00_2098 == BNIL);
								}
								if (BgL_test1659z00_2330)
									{	/* Globalize/integration.scm 85 */
										{
											BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2339;

											{
												obj_t BgL_auxz00_2340;

												{	/* Globalize/integration.scm 87 */
													BgL_objectz00_bglt BgL_tmpz00_2341;

													BgL_tmpz00_2341 =
														((BgL_objectz00_bglt) BgL_i1115z00_2097);
													BgL_auxz00_2340 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2341);
												}
												BgL_auxz00_2339 =
													((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2340);
											}
											((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2339))->
													BgL_imarkz00) =
												((obj_t) BgL_integratorsz00_2093), BUNSPEC);
										}
										return BgL_gz00_2095;
									}
								else
									{	/* Globalize/integration.scm 89 */
										obj_t BgL_nimarkz00_2099;

										{	/* Globalize/integration.scm 89 */
											obj_t BgL_hook1268z00_2100;

											BgL_hook1268z00_2100 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
											{	/* Globalize/integration.scm 89 */
												obj_t BgL_g1269z00_2101;

												{
													BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2347;

													{
														obj_t BgL_auxz00_2348;

														{	/* Globalize/integration.scm 89 */
															BgL_objectz00_bglt BgL_tmpz00_2349;

															BgL_tmpz00_2349 =
																((BgL_objectz00_bglt) BgL_i1115z00_2097);
															BgL_auxz00_2348 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_2349);
														}
														BgL_auxz00_2347 =
															((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2348);
													}
													BgL_g1269z00_2101 =
														(((BgL_sfunzf2ginfozf2_bglt)
															COBJECT(BgL_auxz00_2347))->BgL_imarkz00);
												}
												{
													obj_t BgL_l1265z00_2103;
													obj_t BgL_h1266z00_2104;

													BgL_l1265z00_2103 = BgL_g1269z00_2101;
													BgL_h1266z00_2104 = BgL_hook1268z00_2100;
												BgL_zc3z04anonymousza31327ze3z87_2102:
													if (NULLP(BgL_l1265z00_2103))
														{	/* Globalize/integration.scm 89 */
															BgL_nimarkz00_2099 = CDR(BgL_hook1268z00_2100);
														}
													else
														{	/* Globalize/integration.scm 89 */
															if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																	(CAR(((obj_t) BgL_l1265z00_2103)),
																		BgL_integratorsz00_2093)))
																{	/* Globalize/integration.scm 89 */
																	obj_t BgL_nh1267z00_2105;

																	{	/* Globalize/integration.scm 89 */
																		obj_t BgL_arg1331z00_2106;

																		BgL_arg1331z00_2106 =
																			CAR(((obj_t) BgL_l1265z00_2103));
																		{	/* Globalize/integration.scm 89 */
																			obj_t BgL_res1629z00_2107;

																			BgL_res1629z00_2107 =
																				MAKE_YOUNG_PAIR(BgL_arg1331z00_2106,
																				BNIL);
																			BgL_nh1267z00_2105 = BgL_res1629z00_2107;
																		}
																	}
																	SET_CDR(BgL_h1266z00_2104,
																		BgL_nh1267z00_2105);
																	{	/* Globalize/integration.scm 89 */
																		obj_t BgL_arg1330z00_2108;

																		BgL_arg1330z00_2108 =
																			CDR(((obj_t) BgL_l1265z00_2103));
																		{
																			obj_t BgL_h1266z00_2369;
																			obj_t BgL_l1265z00_2368;

																			BgL_l1265z00_2368 = BgL_arg1330z00_2108;
																			BgL_h1266z00_2369 = BgL_nh1267z00_2105;
																			BgL_h1266z00_2104 = BgL_h1266z00_2369;
																			BgL_l1265z00_2103 = BgL_l1265z00_2368;
																			goto
																				BgL_zc3z04anonymousza31327ze3z87_2102;
																		}
																	}
																}
															else
																{	/* Globalize/integration.scm 89 */
																	obj_t BgL_arg1334z00_2109;

																	BgL_arg1334z00_2109 =
																		CDR(((obj_t) BgL_l1265z00_2103));
																	{
																		obj_t BgL_l1265z00_2372;

																		BgL_l1265z00_2372 = BgL_arg1334z00_2109;
																		BgL_l1265z00_2103 = BgL_l1265z00_2372;
																		goto BgL_zc3z04anonymousza31327ze3z87_2102;
																	}
																}
														}
												}
											}
										}
										if (NULLP(BgL_nimarkz00_2099))
											{	/* Globalize/integration.scm 91 */
												{
													BgL_localzf2ginfozf2_bglt BgL_auxz00_2375;

													{
														obj_t BgL_auxz00_2376;

														{	/* Globalize/integration.scm 92 */
															BgL_objectz00_bglt BgL_tmpz00_2377;

															BgL_tmpz00_2377 =
																((BgL_objectz00_bglt)
																((BgL_localz00_bglt) BgL_gz00_2095));
															BgL_auxz00_2376 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_2377);
														}
														BgL_auxz00_2375 =
															((BgL_localzf2ginfozf2_bglt) BgL_auxz00_2376);
													}
													((((BgL_localzf2ginfozf2_bglt)
																COBJECT(BgL_auxz00_2375))->
															BgL_globaliza7edzf3z54) =
														((bool_t) ((bool_t) 1)), BUNSPEC);
												}
												{
													BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2383;

													{
														obj_t BgL_auxz00_2384;

														{	/* Globalize/integration.scm 93 */
															BgL_objectz00_bglt BgL_tmpz00_2385;

															BgL_tmpz00_2385 =
																((BgL_objectz00_bglt) BgL_i1115z00_2097);
															BgL_auxz00_2384 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_2385);
														}
														BgL_auxz00_2383 =
															((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2384);
													}
													((((BgL_sfunzf2ginfozf2_bglt)
																COBJECT(BgL_auxz00_2383))->BgL_imarkz00) =
														((obj_t) BNIL), BUNSPEC);
												}
												return BgL_gz00_2095;
											}
										else
											{	/* Globalize/integration.scm 95 */
												bool_t BgL_test1663z00_2390;

												{	/* Globalize/integration.scm 95 */
													long BgL_arg1324z00_2110;
													long BgL_arg1325z00_2111;

													BgL_arg1324z00_2110 =
														bgl_list_length(BgL_nimarkz00_2099);
													{	/* Globalize/integration.scm 95 */
														obj_t BgL_arg1326z00_2112;

														{
															BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2392;

															{
																obj_t BgL_auxz00_2393;

																{	/* Globalize/integration.scm 95 */
																	BgL_objectz00_bglt BgL_tmpz00_2394;

																	BgL_tmpz00_2394 =
																		((BgL_objectz00_bglt) BgL_i1115z00_2097);
																	BgL_auxz00_2393 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_2394);
																}
																BgL_auxz00_2392 =
																	((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2393);
															}
															BgL_arg1326z00_2112 =
																(((BgL_sfunzf2ginfozf2_bglt)
																	COBJECT(BgL_auxz00_2392))->BgL_imarkz00);
														}
														BgL_arg1325z00_2111 =
															bgl_list_length(BgL_arg1326z00_2112);
													}
													BgL_test1663z00_2390 =
														(BgL_arg1324z00_2110 == BgL_arg1325z00_2111);
												}
												if (BgL_test1663z00_2390)
													{	/* Globalize/integration.scm 95 */
														return BFALSE;
													}
												else
													{	/* Globalize/integration.scm 95 */
														{
															BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2401;

															{
																obj_t BgL_auxz00_2402;

																{	/* Globalize/integration.scm 96 */
																	BgL_objectz00_bglt BgL_tmpz00_2403;

																	BgL_tmpz00_2403 =
																		((BgL_objectz00_bglt) BgL_i1115z00_2097);
																	BgL_auxz00_2402 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_2403);
																}
																BgL_auxz00_2401 =
																	((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2402);
															}
															((((BgL_sfunzf2ginfozf2_bglt)
																		COBJECT(BgL_auxz00_2401))->BgL_imarkz00) =
																((obj_t) BgL_nimarkz00_2099), BUNSPEC);
														}
														return BgL_gz00_2095;
													}
											}
									}
							}
						}
				}
			}
		}

	}



/* integrate-in! */
	obj_t BGl_integratezd2inz12zc0zzglobaliza7e_integrationza7(obj_t BgL_fz00_10,
		obj_t BgL_integratorz00_11)
	{
		{	/* Globalize/integration.scm 119 */
			{	/* Globalize/integration.scm 121 */
				BgL_valuez00_bglt BgL_arg1351z00_1785;

				BgL_arg1351z00_1785 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_localz00_bglt) BgL_fz00_10))))->BgL_valuez00);
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2411;

					{
						obj_t BgL_auxz00_2412;

						{	/* Globalize/integration.scm 121 */
							BgL_objectz00_bglt BgL_tmpz00_2413;

							BgL_tmpz00_2413 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_arg1351z00_1785));
							BgL_auxz00_2412 = BGL_OBJECT_WIDENING(BgL_tmpz00_2413);
						}
						BgL_auxz00_2411 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2412);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2411))->
							BgL_integratorz00) = ((obj_t) BgL_integratorz00_11), BUNSPEC);
				}
			}
			{	/* Globalize/integration.scm 122 */
				BgL_valuez00_bglt BgL_arg1352z00_1786;

				BgL_arg1352z00_1786 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_localz00_bglt) BgL_fz00_10))))->BgL_valuez00);
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2422;

					{
						obj_t BgL_auxz00_2423;

						{	/* Globalize/integration.scm 122 */
							BgL_objectz00_bglt BgL_tmpz00_2424;

							BgL_tmpz00_2424 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_arg1352z00_1786));
							BgL_auxz00_2423 = BGL_OBJECT_WIDENING(BgL_tmpz00_2424);
						}
						BgL_auxz00_2422 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2423);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2422))->
							BgL_gzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
			}
			{	/* Globalize/integration.scm 123 */
				BgL_sfunz00_bglt BgL_i1118z00_1787;

				BgL_i1118z00_1787 =
					((BgL_sfunz00_bglt)
					(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_integratorz00_11)))->BgL_valuez00));
				{
					obj_t BgL_auxz00_2439;
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2433;

					{	/* Globalize/integration.scm 124 */
						obj_t BgL_arg1357z00_1788;

						{
							BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2440;

							{
								obj_t BgL_auxz00_2441;

								{	/* Globalize/integration.scm 124 */
									BgL_objectz00_bglt BgL_tmpz00_2442;

									BgL_tmpz00_2442 = ((BgL_objectz00_bglt) BgL_i1118z00_1787);
									BgL_auxz00_2441 = BGL_OBJECT_WIDENING(BgL_tmpz00_2442);
								}
								BgL_auxz00_2440 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2441);
							}
							BgL_arg1357z00_1788 =
								(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2440))->
								BgL_integratedz00);
						}
						BgL_auxz00_2439 = MAKE_YOUNG_PAIR(BgL_fz00_10, BgL_arg1357z00_1788);
					}
					{
						obj_t BgL_auxz00_2434;

						{	/* Globalize/integration.scm 124 */
							BgL_objectz00_bglt BgL_tmpz00_2435;

							BgL_tmpz00_2435 = ((BgL_objectz00_bglt) BgL_i1118z00_1787);
							BgL_auxz00_2434 = BGL_OBJECT_WIDENING(BgL_tmpz00_2435);
						}
						BgL_auxz00_2433 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2434);
					}
					return
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2433))->
							BgL_integratedz00) = ((obj_t) BgL_auxz00_2439), BUNSPEC);
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzglobaliza7e_integrationza7()
	{
		{	/* Globalize/integration.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_integrationza7()
	{
		{	/* Globalize/integration.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_integrationza7()
	{
		{	/* Globalize/integration.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_integrationza7()
	{
		{	/* Globalize/integration.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1637z00zzglobaliza7e_integrationza7));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1637z00zzglobaliza7e_integrationza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1637z00zzglobaliza7e_integrationza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1637z00zzglobaliza7e_integrationza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1637z00zzglobaliza7e_integrationza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1637z00zzglobaliza7e_integrationza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string1637z00zzglobaliza7e_integrationza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_globaliza7ez00(((long)
					34590557),
				BSTRING_TO_STRING(BGl_string1637z00zzglobaliza7e_integrationza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_kaptureza7(((long)
					459830974),
				BSTRING_TO_STRING(BGl_string1637z00zzglobaliza7e_integrationza7));
			return BGl_modulezd2initializa7ationz75zztools_errorz00(((long)
					300504034),
				BSTRING_TO_STRING(BGl_string1637z00zzglobaliza7e_integrationza7));
		}

	}

#ifdef __cplusplus
}
#endif
