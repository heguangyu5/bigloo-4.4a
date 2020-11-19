/*===========================================================================*/
/*   (Globalize/kapture.scm)                                                 */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/kapture.scm) */
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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

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

	typedef struct BgL_svarzf2ginfozf2_bgl
	{
		bool_t BgL_kapturedzf3zf3;
		long BgL_freezd2markzd2;
		long BgL_markz00;
		bool_t BgL_celledzf3zf3;
		bool_t BgL_stackablez00;
	}                      *BgL_svarzf2ginfozf2_bglt;


	BGL_EXPORTED_DECL obj_t
		BGl_setzd2kapturedz12zc0zzglobaliza7e_kaptureza7(obj_t);
	static obj_t BGl_objectzd2initzd2zzglobaliza7e_kaptureza7();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t
		BGl_ctozd2transitivezd2closurez12z12zzglobaliza7e_cloctoza7
		(BgL_localz00_bglt);
	static long BGl_za2unionzd2roundza2zd2zzglobaliza7e_kaptureza7;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzglobaliza7e_kaptureza7(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_kaptureza7();
	BGL_EXPORTED_DECL obj_t BGl_unionz00zzglobaliza7e_kaptureza7(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_kaptureza7();
	static obj_t BGl_z62setzd2kapturedz12za2zzglobaliza7e_kaptureza7(obj_t,
		obj_t);
	static obj_t BGl_getzd2onezd2kapturedz00zzglobaliza7e_kaptureza7(obj_t,
		obj_t);
	static obj_t
		BGl_setzd2onezd2kapturedz12z12zzglobaliza7e_kaptureza7(BgL_localz00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_kaptureza7 =
		BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	static obj_t BGl_toplevelzd2initzd2zzglobaliza7e_kaptureza7();
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_kaptureza7();
	extern obj_t BGl_getzd2freezd2varsz00zzglobaliza7e_freeza7(BgL_nodez00_bglt,
		BgL_localz00_bglt);
	extern obj_t BGl_freezd2fromzd2zzglobaliza7e_freeza7(obj_t,
		BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_kaptureza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_cloctoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_z62unionz62zzglobaliza7e_kaptureza7(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_kaptureza7();
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_kaptureza7();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1611z00zzglobaliza7e_kaptureza7,
		BgL_bgl_string1611za700za7za7g1614za7, "globalize_kapture", 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2kapturedz12zd2envz12zzglobaliza7e_kaptureza7,
		BgL_bgl_za762setza7d2kapture1615z00,
		BGl_z62setzd2kapturedz12za2zzglobaliza7e_kaptureza7, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_unionzd2envzd2zzglobaliza7e_kaptureza7,
		BgL_bgl_za762unionza762za7za7glo1616z00,
		BGl_z62unionz62zzglobaliza7e_kaptureza7, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzglobaliza7e_kaptureza7));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_kaptureza7(long
		BgL_checksumz00_2075, char *BgL_fromz00_2076)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_kaptureza7))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_kaptureza7 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzglobaliza7e_kaptureza7();
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_kaptureza7();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_kaptureza7();
					return BGl_toplevelzd2initzd2zzglobaliza7e_kaptureza7();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_kaptureza7()
	{
		{	/* Globalize/kapture.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_kapture");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_kapture");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"globalize_kapture");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_kapture");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_kaptureza7()
	{
		{	/* Globalize/kapture.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzglobaliza7e_kaptureza7()
	{
		{	/* Globalize/kapture.scm 15 */
			return (BGl_za2unionzd2roundza2zd2zzglobaliza7e_kaptureza7 =
				((long) 0), BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzglobaliza7e_kaptureza7(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1664;

				BgL_headz00_1664 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1665;
					obj_t BgL_tailz00_1666;

					BgL_prevz00_1665 = BgL_headz00_1664;
					BgL_tailz00_1666 = BgL_l1z00_1;
				BgL_loopz00_1667:
					if (PAIRP(BgL_tailz00_1666))
						{
							obj_t BgL_newzd2prevzd2_1669;

							BgL_newzd2prevzd2_1669 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1666), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1665, BgL_newzd2prevzd2_1669);
							{
								obj_t BgL_tailz00_2096;
								obj_t BgL_prevz00_2095;

								BgL_prevz00_2095 = BgL_newzd2prevzd2_1669;
								BgL_tailz00_2096 = CDR(BgL_tailz00_1666);
								BgL_tailz00_1666 = BgL_tailz00_2096;
								BgL_prevz00_1665 = BgL_prevz00_2095;
								goto BgL_loopz00_1667;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1664);
				}
			}
		}

	}



/* set-kaptured! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2kapturedz12zc0zzglobaliza7e_kaptureza7(obj_t
		BgL_localfunza2za2_3)
	{
		{	/* Globalize/kapture.scm 36 */
			{
				obj_t BgL_l1249z00_1673;

				BgL_l1249z00_1673 = BgL_localfunza2za2_3;
			BgL_zc3z04anonymousza31259ze3z87_1674:
				if (PAIRP(BgL_l1249z00_1673))
					{	/* Globalize/kapture.scm 39 */
						{	/* Globalize/kapture.scm 40 */
							obj_t BgL_localfunz00_1676;

							BgL_localfunz00_1676 = CAR(BgL_l1249z00_1673);
							BGl_ctozd2transitivezd2closurez12z12zzglobaliza7e_cloctoza7(
								((BgL_localz00_bglt) BgL_localfunz00_1676));
						}
						{
							obj_t BgL_l1249z00_2104;

							BgL_l1249z00_2104 = CDR(BgL_l1249z00_1673);
							BgL_l1249z00_1673 = BgL_l1249z00_2104;
							goto BgL_zc3z04anonymousza31259ze3z87_1674;
						}
					}
				else
					{	/* Globalize/kapture.scm 39 */
						((bool_t) 1);
					}
			}
			{
				obj_t BgL_l1251z00_1680;

				{	/* Globalize/kapture.scm 43 */
					bool_t BgL_tmpz00_2106;

					BgL_l1251z00_1680 = BgL_localfunza2za2_3;
				BgL_zc3z04anonymousza31264ze3z87_1681:
					if (PAIRP(BgL_l1251z00_1680))
						{	/* Globalize/kapture.scm 43 */
							{	/* Globalize/kapture.scm 43 */
								obj_t BgL_arg1268z00_1683;

								BgL_arg1268z00_1683 = CAR(BgL_l1251z00_1680);
								BGl_setzd2onezd2kapturedz12z12zzglobaliza7e_kaptureza7(
									((BgL_localz00_bglt) BgL_arg1268z00_1683));
							}
							{
								obj_t BgL_l1251z00_2112;

								BgL_l1251z00_2112 = CDR(BgL_l1251z00_1680);
								BgL_l1251z00_1680 = BgL_l1251z00_2112;
								goto BgL_zc3z04anonymousza31264ze3z87_1681;
							}
						}
					else
						{	/* Globalize/kapture.scm 43 */
							BgL_tmpz00_2106 = ((bool_t) 1);
						}
					return BBOOL(BgL_tmpz00_2106);
				}
			}
		}

	}



/* &set-kaptured! */
	obj_t BGl_z62setzd2kapturedz12za2zzglobaliza7e_kaptureza7(obj_t
		BgL_envz00_2065, obj_t BgL_localfunza2za2_2066)
	{
		{	/* Globalize/kapture.scm 36 */
			return
				BGl_setzd2kapturedz12zc0zzglobaliza7e_kaptureza7
				(BgL_localfunza2za2_2066);
		}

	}



/* set-one-kaptured! */
	obj_t BGl_setzd2onezd2kapturedz12z12zzglobaliza7e_kaptureza7(BgL_localz00_bglt
		BgL_localfunz00_4)
	{
		{	/* Globalize/kapture.scm 51 */
			{	/* Globalize/kapture.scm 55 */
				obj_t BgL_kapturedz00_1686;
				BgL_valuez00_bglt BgL_infoz00_1687;
				bool_t BgL_stackablez00_1688;

				BgL_kapturedz00_1686 =
					BGl_getzd2onezd2kapturedz00zzglobaliza7e_kaptureza7(
					((obj_t) BgL_localfunz00_4), BNIL);
				BgL_infoz00_1687 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_localfunz00_4)))->BgL_valuez00);
				BgL_stackablez00_1688 =
					(
					(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt)
									(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_localfunz00_4)))->
										BgL_valuez00))))->BgL_stackablez00) == BTRUE);
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2125;

					{
						obj_t BgL_auxz00_2126;

						{	/* Globalize/kapture.scm 58 */
							BgL_objectz00_bglt BgL_tmpz00_2127;

							BgL_tmpz00_2127 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_infoz00_1687));
							BgL_auxz00_2126 = BGL_OBJECT_WIDENING(BgL_tmpz00_2127);
						}
						BgL_auxz00_2125 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2126);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2125))->
							BgL_kapturedz00) = ((obj_t) BgL_kapturedz00_1686), BUNSPEC);
				}
				{
					obj_t BgL_l1253z00_1690;

					BgL_l1253z00_1690 = BgL_kapturedz00_1686;
				BgL_zc3z04anonymousza31271ze3z87_1691:
					if (PAIRP(BgL_l1253z00_1690))
						{	/* Globalize/kapture.scm 59 */
							{	/* Globalize/kapture.scm 60 */
								obj_t BgL_localz00_1693;

								BgL_localz00_1693 = CAR(BgL_l1253z00_1690);
								{	/* Globalize/kapture.scm 60 */
									BgL_valuez00_bglt BgL_lvz00_1694;

									BgL_lvz00_1694 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_localz00_1693))))->
										BgL_valuez00);
									{	/* Globalize/kapture.scm 64 */
										bool_t BgL_arg1273z00_1695;

										if (BgL_stackablez00_1688)
											{	/* Globalize/kapture.scm 64 */
												bool_t BgL_test1623z00_2140;

												{
													BgL_svarzf2ginfozf2_bglt BgL_auxz00_2141;

													{
														obj_t BgL_auxz00_2142;

														{	/* Globalize/kapture.scm 64 */
															BgL_objectz00_bglt BgL_tmpz00_2143;

															BgL_tmpz00_2143 =
																((BgL_objectz00_bglt)
																((BgL_svarz00_bglt) BgL_lvz00_1694));
															BgL_auxz00_2142 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_2143);
														}
														BgL_auxz00_2141 =
															((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2142);
													}
													BgL_test1623z00_2140 =
														(((BgL_svarzf2ginfozf2_bglt)
															COBJECT(BgL_auxz00_2141))->BgL_kapturedzf3zf3);
												}
												if (BgL_test1623z00_2140)
													{	/* Globalize/kapture.scm 64 */
														BgL_arg1273z00_1695 = ((bool_t) 0);
													}
												else
													{	/* Globalize/kapture.scm 64 */
														BgL_arg1273z00_1695 = ((bool_t) 1);
													}
											}
										else
											{	/* Globalize/kapture.scm 64 */
												BgL_arg1273z00_1695 = ((bool_t) 0);
											}
										{
											BgL_svarzf2ginfozf2_bglt BgL_auxz00_2149;

											{
												obj_t BgL_auxz00_2150;

												{	/* Globalize/kapture.scm 63 */
													BgL_objectz00_bglt BgL_tmpz00_2151;

													BgL_tmpz00_2151 =
														((BgL_objectz00_bglt)
														((BgL_svarz00_bglt) BgL_lvz00_1694));
													BgL_auxz00_2150 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2151);
												}
												BgL_auxz00_2149 =
													((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2150);
											}
											((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2149))->
													BgL_stackablez00) =
												((bool_t) BgL_arg1273z00_1695), BUNSPEC);
										}
									}
									{
										BgL_svarzf2ginfozf2_bglt BgL_auxz00_2157;

										{
											obj_t BgL_auxz00_2158;

											{	/* Globalize/kapture.scm 65 */
												BgL_objectz00_bglt BgL_tmpz00_2159;

												BgL_tmpz00_2159 =
													((BgL_objectz00_bglt)
													((BgL_svarz00_bglt) BgL_lvz00_1694));
												BgL_auxz00_2158 = BGL_OBJECT_WIDENING(BgL_tmpz00_2159);
											}
											BgL_auxz00_2157 =
												((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2158);
										}
										((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2157))->
												BgL_kapturedzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
									}
								}
							}
							{
								obj_t BgL_l1253z00_2165;

								BgL_l1253z00_2165 = CDR(BgL_l1253z00_1690);
								BgL_l1253z00_1690 = BgL_l1253z00_2165;
								goto BgL_zc3z04anonymousza31271ze3z87_1691;
							}
						}
					else
						{	/* Globalize/kapture.scm 59 */
							((bool_t) 1);
						}
				}
				return BgL_kapturedz00_1686;
			}
		}

	}



/* get-one-kaptured */
	obj_t BGl_getzd2onezd2kapturedz00zzglobaliza7e_kaptureza7(obj_t
		BgL_localz00_5, obj_t BgL_stackz00_6)
	{
		{	/* Globalize/kapture.scm 72 */
			{	/* Globalize/kapture.scm 78 */
				BgL_valuez00_bglt BgL_infoz00_1702;

				BgL_infoz00_1702 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_localz00_bglt) BgL_localz00_5))))->BgL_valuez00);
				{	/* Globalize/kapture.scm 78 */
					obj_t BgL_kapturedz00_1703;

					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2170;

						{
							obj_t BgL_auxz00_2171;

							{	/* Globalize/kapture.scm 79 */
								BgL_objectz00_bglt BgL_tmpz00_2172;

								BgL_tmpz00_2172 =
									((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_infoz00_1702));
								BgL_auxz00_2171 = BGL_OBJECT_WIDENING(BgL_tmpz00_2172);
							}
							BgL_auxz00_2170 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2171);
						}
						BgL_kapturedz00_1703 =
							(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2170))->
							BgL_kapturedz00);
					}
					{	/* Globalize/kapture.scm 79 */

						{	/* Globalize/kapture.scm 81 */
							bool_t BgL_test1625z00_2178;

							if (PAIRP(BgL_kapturedz00_1703))
								{	/* Globalize/kapture.scm 81 */
									BgL_test1625z00_2178 = ((bool_t) 1);
								}
							else
								{	/* Globalize/kapture.scm 81 */
									BgL_test1625z00_2178 = NULLP(BgL_kapturedz00_1703);
								}
							if (BgL_test1625z00_2178)
								{	/* Globalize/kapture.scm 81 */
									return BgL_kapturedz00_1703;
								}
							else
								{	/* Globalize/kapture.scm 81 */
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_localz00_5, BgL_stackz00_6)))
										{	/* Globalize/kapture.scm 87 */
											return BNIL;
										}
									else
										{	/* Globalize/kapture.scm 94 */
											obj_t BgL_g1111z00_1708;
											obj_t BgL_g1112z00_1709;

											{	/* Globalize/kapture.scm 95 */
												obj_t BgL_arg1298z00_1733;
												obj_t BgL_arg1299z00_1734;

												{
													BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2185;

													{
														obj_t BgL_auxz00_2186;

														{	/* Globalize/kapture.scm 95 */
															BgL_objectz00_bglt BgL_tmpz00_2187;

															BgL_tmpz00_2187 =
																((BgL_objectz00_bglt)
																((BgL_sfunz00_bglt) BgL_infoz00_1702));
															BgL_auxz00_2186 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_2187);
														}
														BgL_auxz00_2185 =
															((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2186);
													}
													BgL_arg1298z00_1733 =
														(((BgL_sfunzf2ginfozf2_bglt)
															COBJECT(BgL_auxz00_2185))->BgL_ctoza2za2);
												}
												{
													BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2193;

													{
														obj_t BgL_auxz00_2194;

														{	/* Globalize/kapture.scm 96 */
															BgL_objectz00_bglt BgL_tmpz00_2195;

															BgL_tmpz00_2195 =
																((BgL_objectz00_bglt)
																((BgL_sfunz00_bglt) BgL_infoz00_1702));
															BgL_auxz00_2194 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_2195);
														}
														BgL_auxz00_2193 =
															((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2194);
													}
													BgL_arg1299z00_1734 =
														(((BgL_sfunzf2ginfozf2_bglt)
															COBJECT(BgL_auxz00_2193))->BgL_efunctionsz00);
												}
												BgL_g1111z00_1708 =
													BGl_appendzd221011zd2zzglobaliza7e_kaptureza7
													(BgL_arg1298z00_1733, BgL_arg1299z00_1734);
											}
											BgL_g1112z00_1709 =
												MAKE_YOUNG_PAIR(BgL_localz00_5, BgL_stackz00_6);
											{
												obj_t BgL_kapturedz00_1711;
												obj_t BgL_ctoz00_1712;
												obj_t BgL_nstackz00_1713;

												BgL_kapturedz00_1711 = BNIL;
												BgL_ctoz00_1712 = BgL_g1111z00_1708;
												BgL_nstackz00_1713 = BgL_g1112z00_1709;
											BgL_zc3z04anonymousza31281ze3z87_1714:
												if (NULLP(BgL_ctoz00_1712))
													{	/* Globalize/kapture.scm 100 */
														obj_t BgL_newzd2bodyzd2_1716;

														{
															BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2205;

															{
																obj_t BgL_auxz00_2206;

																{	/* Globalize/kapture.scm 100 */
																	BgL_objectz00_bglt BgL_tmpz00_2207;

																	BgL_tmpz00_2207 =
																		((BgL_objectz00_bglt)
																		((BgL_sfunz00_bglt) BgL_infoz00_1702));
																	BgL_auxz00_2206 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_2207);
																}
																BgL_auxz00_2205 =
																	((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2206);
															}
															BgL_newzd2bodyzd2_1716 =
																(((BgL_sfunzf2ginfozf2_bglt)
																	COBJECT(BgL_auxz00_2205))->BgL_newzd2bodyzd2);
														}
														{	/* Globalize/kapture.scm 100 */
															obj_t BgL_freez00_1717;

															BgL_freez00_1717 =
																BGl_getzd2freezd2varsz00zzglobaliza7e_freeza7(
																((BgL_nodez00_bglt) BgL_newzd2bodyzd2_1716),
																((BgL_localz00_bglt) BgL_localz00_5));
															{	/* Globalize/kapture.scm 101 */
																obj_t BgL_fkapturedz00_1718;

																BgL_fkapturedz00_1718 =
																	BGl_freezd2fromzd2zzglobaliza7e_freeza7
																	(BgL_kapturedz00_1711,
																	((BgL_localz00_bglt) BgL_localz00_5));
																{	/* Globalize/kapture.scm 102 */

																	{	/* Globalize/kapture.scm 111 */
																		obj_t BgL_arg1284z00_1719;

																		BgL_arg1284z00_1719 =
																			MAKE_YOUNG_PAIR(BgL_freez00_1717,
																			BgL_fkapturedz00_1718);
																		return
																			BGl_unionz00zzglobaliza7e_kaptureza7
																			(BgL_arg1284z00_1719);
																	}
																}
															}
														}
													}
												else
													{	/* Globalize/kapture.scm 112 */
														bool_t BgL_test1630z00_2220;

														{	/* Globalize/kapture.scm 112 */
															BgL_sfunz00_bglt BgL_oz00_2013;

															BgL_oz00_2013 =
																((BgL_sfunz00_bglt)
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_localz00_bglt)
																					CAR(
																						((obj_t) BgL_ctoz00_1712))))))->
																	BgL_valuez00));
															{
																BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2227;

																{
																	obj_t BgL_auxz00_2228;

																	{	/* Globalize/kapture.scm 112 */
																		BgL_objectz00_bglt BgL_tmpz00_2229;

																		BgL_tmpz00_2229 =
																			((BgL_objectz00_bglt) BgL_oz00_2013);
																		BgL_auxz00_2228 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_2229);
																	}
																	BgL_auxz00_2227 =
																		((BgL_sfunzf2ginfozf2_bglt)
																		BgL_auxz00_2228);
																}
																BgL_test1630z00_2220 =
																	(((BgL_sfunzf2ginfozf2_bglt)
																		COBJECT(BgL_auxz00_2227))->BgL_gzf3zf3);
															}
														}
														if (BgL_test1630z00_2220)
															{	/* Globalize/kapture.scm 113 */
																obj_t BgL_otherzd2kapturedzd2_1723;

																{	/* Globalize/kapture.scm 113 */
																	obj_t BgL_arg1292z00_1728;

																	BgL_arg1292z00_1728 =
																		CAR(((obj_t) BgL_ctoz00_1712));
																	BgL_otherzd2kapturedzd2_1723 =
																		BGl_getzd2onezd2kapturedz00zzglobaliza7e_kaptureza7
																		(BgL_arg1292z00_1728, BgL_nstackz00_1713);
																}
																{	/* Globalize/kapture.scm 114 */
																	obj_t BgL_arg1288z00_1724;
																	obj_t BgL_arg1289z00_1725;
																	obj_t BgL_arg1290z00_1726;

																	BgL_arg1288z00_1724 =
																		MAKE_YOUNG_PAIR
																		(BgL_otherzd2kapturedzd2_1723,
																		BgL_kapturedz00_1711);
																	BgL_arg1289z00_1725 =
																		CDR(((obj_t) BgL_ctoz00_1712));
																	{	/* Globalize/kapture.scm 116 */
																		obj_t BgL_arg1291z00_1727;

																		BgL_arg1291z00_1727 =
																			CAR(((obj_t) BgL_ctoz00_1712));
																		BgL_arg1290z00_1726 =
																			MAKE_YOUNG_PAIR(BgL_arg1291z00_1727,
																			BgL_nstackz00_1713);
																	}
																	{
																		obj_t BgL_nstackz00_2245;
																		obj_t BgL_ctoz00_2244;
																		obj_t BgL_kapturedz00_2243;

																		BgL_kapturedz00_2243 = BgL_arg1288z00_1724;
																		BgL_ctoz00_2244 = BgL_arg1289z00_1725;
																		BgL_nstackz00_2245 = BgL_arg1290z00_1726;
																		BgL_nstackz00_1713 = BgL_nstackz00_2245;
																		BgL_ctoz00_1712 = BgL_ctoz00_2244;
																		BgL_kapturedz00_1711 = BgL_kapturedz00_2243;
																		goto BgL_zc3z04anonymousza31281ze3z87_1714;
																	}
																}
															}
														else
															{	/* Globalize/kapture.scm 118 */
																obj_t BgL_arg1295z00_1729;

																BgL_arg1295z00_1729 =
																	CDR(((obj_t) BgL_ctoz00_1712));
																{
																	obj_t BgL_ctoz00_2248;

																	BgL_ctoz00_2248 = BgL_arg1295z00_1729;
																	BgL_ctoz00_1712 = BgL_ctoz00_2248;
																	goto BgL_zc3z04anonymousza31281ze3z87_1714;
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



/* union */
	BGL_EXPORTED_DEF obj_t BGl_unionz00zzglobaliza7e_kaptureza7(obj_t
		BgL_setsz00_7)
	{
		{	/* Globalize/kapture.scm 128 */
			BGl_za2unionzd2roundza2zd2zzglobaliza7e_kaptureza7 =
				(((long) 1) + BGl_za2unionzd2roundza2zd2zzglobaliza7e_kaptureza7);
			{
				obj_t BgL_setsz00_1738;
				obj_t BgL_unionz00_1739;

				BgL_setsz00_1738 = BgL_setsz00_7;
				BgL_unionz00_1739 = BNIL;
			BgL_zc3z04anonymousza31300ze3z87_1740:
				if (NULLP(BgL_setsz00_1738))
					{	/* Globalize/kapture.scm 132 */
						return BgL_unionz00_1739;
					}
				else
					{	/* Globalize/kapture.scm 134 */
						obj_t BgL_g1117z00_1742;

						BgL_g1117z00_1742 = CAR(((obj_t) BgL_setsz00_1738));
						{
							obj_t BgL_setz00_1744;
							obj_t BgL_unionz00_1745;

							BgL_setz00_1744 = BgL_g1117z00_1742;
							BgL_unionz00_1745 = BgL_unionz00_1739;
						BgL_zc3z04anonymousza31302ze3z87_1746:
							if (NULLP(BgL_setz00_1744))
								{	/* Globalize/kapture.scm 138 */
									obj_t BgL_arg1304z00_1748;

									BgL_arg1304z00_1748 = CDR(((obj_t) BgL_setsz00_1738));
									{
										obj_t BgL_unionz00_2259;
										obj_t BgL_setsz00_2258;

										BgL_setsz00_2258 = BgL_arg1304z00_1748;
										BgL_unionz00_2259 = BgL_unionz00_1745;
										BgL_unionz00_1739 = BgL_unionz00_2259;
										BgL_setsz00_1738 = BgL_setsz00_2258;
										goto BgL_zc3z04anonymousza31300ze3z87_1740;
									}
								}
							else
								{	/* Globalize/kapture.scm 140 */
									bool_t BgL_test1633z00_2260;

									{	/* Globalize/kapture.scm 140 */
										BgL_valuez00_bglt BgL_arg1346z00_1778;

										BgL_arg1346z00_1778 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt)
															CAR(((obj_t) BgL_setz00_1744))))))->BgL_valuez00);
										{	/* Globalize/kapture.scm 140 */
											bool_t BgL_res1610z00_2027;

											BgL_res1610z00_2027 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_arg1346z00_1778), BGl_funz00zzast_varz00);
											BgL_test1633z00_2260 = BgL_res1610z00_2027;
										}
									}
									if (BgL_test1633z00_2260)
										{	/* Globalize/kapture.scm 141 */
											bool_t BgL_test1634z00_2268;

											{	/* Globalize/kapture.scm 141 */
												long BgL_arg1324z00_1762;

												{	/* Globalize/kapture.scm 141 */
													BgL_sfunz00_bglt BgL_oz00_2030;

													BgL_oz00_2030 =
														((BgL_sfunz00_bglt)
														(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt)
																			CAR(
																				((obj_t) BgL_setz00_1744))))))->
															BgL_valuez00));
													{
														BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2275;

														{
															obj_t BgL_auxz00_2276;

															{	/* Globalize/kapture.scm 141 */
																BgL_objectz00_bglt BgL_tmpz00_2277;

																BgL_tmpz00_2277 =
																	((BgL_objectz00_bglt) BgL_oz00_2030);
																BgL_auxz00_2276 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_2277);
															}
															BgL_auxz00_2275 =
																((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2276);
														}
														BgL_arg1324z00_1762 =
															(((BgL_sfunzf2ginfozf2_bglt)
																COBJECT(BgL_auxz00_2275))->BgL_umarkz00);
												}}
												BgL_test1634z00_2268 =
													(BgL_arg1324z00_1762 ==
													BGl_za2unionzd2roundza2zd2zzglobaliza7e_kaptureza7);
											}
											if (BgL_test1634z00_2268)
												{	/* Globalize/kapture.scm 143 */
													obj_t BgL_arg1314z00_1756;

													BgL_arg1314z00_1756 = CDR(((obj_t) BgL_setz00_1744));
													{
														obj_t BgL_setz00_2285;

														BgL_setz00_2285 = BgL_arg1314z00_1756;
														BgL_setz00_1744 = BgL_setz00_2285;
														goto BgL_zc3z04anonymousza31302ze3z87_1746;
													}
												}
											else
												{	/* Globalize/kapture.scm 141 */
													{	/* Globalize/kapture.scm 145 */
														BgL_valuez00_bglt BgL_arg1315z00_1757;

														BgL_arg1315z00_1757 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt)
																			CAR(
																				((obj_t) BgL_setz00_1744))))))->
															BgL_valuez00);
														{	/* Globalize/kapture.scm 145 */
															long BgL_vz00_2036;

															BgL_vz00_2036 =
																BGl_za2unionzd2roundza2zd2zzglobaliza7e_kaptureza7;
															{
																BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2291;

																{
																	obj_t BgL_auxz00_2292;

																	{	/* Globalize/kapture.scm 145 */
																		BgL_objectz00_bglt BgL_tmpz00_2293;

																		BgL_tmpz00_2293 =
																			((BgL_objectz00_bglt)
																			((BgL_sfunz00_bglt) BgL_arg1315z00_1757));
																		BgL_auxz00_2292 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_2293);
																	}
																	BgL_auxz00_2291 =
																		((BgL_sfunzf2ginfozf2_bglt)
																		BgL_auxz00_2292);
																}
																((((BgL_sfunzf2ginfozf2_bglt)
																			COBJECT(BgL_auxz00_2291))->BgL_umarkz00) =
																	((long) BgL_vz00_2036), BUNSPEC);
													}}}
													{	/* Globalize/kapture.scm 147 */
														obj_t BgL_arg1317z00_1759;
														obj_t BgL_arg1319z00_1760;

														BgL_arg1317z00_1759 =
															CDR(((obj_t) BgL_setz00_1744));
														{	/* Globalize/kapture.scm 148 */
															obj_t BgL_arg1322z00_1761;

															BgL_arg1322z00_1761 =
																CAR(((obj_t) BgL_setz00_1744));
															BgL_arg1319z00_1760 =
																MAKE_YOUNG_PAIR(BgL_arg1322z00_1761,
																BgL_unionz00_1745);
														}
														{
															obj_t BgL_unionz00_2305;
															obj_t BgL_setz00_2304;

															BgL_setz00_2304 = BgL_arg1317z00_1759;
															BgL_unionz00_2305 = BgL_arg1319z00_1760;
															BgL_unionz00_1745 = BgL_unionz00_2305;
															BgL_setz00_1744 = BgL_setz00_2304;
															goto BgL_zc3z04anonymousza31302ze3z87_1746;
														}
													}
												}
										}
									else
										{	/* Globalize/kapture.scm 149 */
											bool_t BgL_test1635z00_2306;

											{	/* Globalize/kapture.scm 149 */
												long BgL_arg1340z00_1775;

												{	/* Globalize/kapture.scm 149 */
													BgL_svarz00_bglt BgL_oz00_2042;

													BgL_oz00_2042 =
														((BgL_svarz00_bglt)
														(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt)
																			CAR(
																				((obj_t) BgL_setz00_1744))))))->
															BgL_valuez00));
													{
														BgL_svarzf2ginfozf2_bglt BgL_auxz00_2313;

														{
															obj_t BgL_auxz00_2314;

															{	/* Globalize/kapture.scm 149 */
																BgL_objectz00_bglt BgL_tmpz00_2315;

																BgL_tmpz00_2315 =
																	((BgL_objectz00_bglt) BgL_oz00_2042);
																BgL_auxz00_2314 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_2315);
															}
															BgL_auxz00_2313 =
																((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2314);
														}
														BgL_arg1340z00_1775 =
															(((BgL_svarzf2ginfozf2_bglt)
																COBJECT(BgL_auxz00_2313))->BgL_markz00);
												}}
												BgL_test1635z00_2306 =
													(BgL_arg1340z00_1775 ==
													BGl_za2unionzd2roundza2zd2zzglobaliza7e_kaptureza7);
											}
											if (BgL_test1635z00_2306)
												{	/* Globalize/kapture.scm 150 */
													obj_t BgL_arg1331z00_1769;

													BgL_arg1331z00_1769 = CDR(((obj_t) BgL_setz00_1744));
													{
														obj_t BgL_setz00_2323;

														BgL_setz00_2323 = BgL_arg1331z00_1769;
														BgL_setz00_1744 = BgL_setz00_2323;
														goto BgL_zc3z04anonymousza31302ze3z87_1746;
													}
												}
											else
												{	/* Globalize/kapture.scm 149 */
													{	/* Globalize/kapture.scm 152 */
														BgL_valuez00_bglt BgL_arg1334z00_1770;

														BgL_arg1334z00_1770 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt)
																			CAR(
																				((obj_t) BgL_setz00_1744))))))->
															BgL_valuez00);
														{	/* Globalize/kapture.scm 152 */
															long BgL_vz00_2048;

															BgL_vz00_2048 =
																BGl_za2unionzd2roundza2zd2zzglobaliza7e_kaptureza7;
															{
																BgL_svarzf2ginfozf2_bglt BgL_auxz00_2329;

																{
																	obj_t BgL_auxz00_2330;

																	{	/* Globalize/kapture.scm 152 */
																		BgL_objectz00_bglt BgL_tmpz00_2331;

																		BgL_tmpz00_2331 =
																			((BgL_objectz00_bglt)
																			((BgL_svarz00_bglt) BgL_arg1334z00_1770));
																		BgL_auxz00_2330 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_2331);
																	}
																	BgL_auxz00_2329 =
																		((BgL_svarzf2ginfozf2_bglt)
																		BgL_auxz00_2330);
																}
																((((BgL_svarzf2ginfozf2_bglt)
																			COBJECT(BgL_auxz00_2329))->BgL_markz00) =
																	((long) BgL_vz00_2048), BUNSPEC);
													}}}
													{	/* Globalize/kapture.scm 153 */
														obj_t BgL_arg1337z00_1772;
														obj_t BgL_arg1338z00_1773;

														BgL_arg1337z00_1772 =
															CDR(((obj_t) BgL_setz00_1744));
														{	/* Globalize/kapture.scm 154 */
															obj_t BgL_arg1339z00_1774;

															BgL_arg1339z00_1774 =
																CAR(((obj_t) BgL_setz00_1744));
															BgL_arg1338z00_1773 =
																MAKE_YOUNG_PAIR(BgL_arg1339z00_1774,
																BgL_unionz00_1745);
														}
														{
															obj_t BgL_unionz00_2343;
															obj_t BgL_setz00_2342;

															BgL_setz00_2342 = BgL_arg1337z00_1772;
															BgL_unionz00_2343 = BgL_arg1338z00_1773;
															BgL_unionz00_1745 = BgL_unionz00_2343;
															BgL_setz00_1744 = BgL_setz00_2342;
															goto BgL_zc3z04anonymousza31302ze3z87_1746;
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



/* &union */
	obj_t BGl_z62unionz62zzglobaliza7e_kaptureza7(obj_t BgL_envz00_2067,
		obj_t BgL_setsz00_2068)
	{
		{	/* Globalize/kapture.scm 128 */
			return BGl_unionz00zzglobaliza7e_kaptureza7(BgL_setsz00_2068);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzglobaliza7e_kaptureza7()
	{
		{	/* Globalize/kapture.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_kaptureza7()
	{
		{	/* Globalize/kapture.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_kaptureza7()
	{
		{	/* Globalize/kapture.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_kaptureza7()
	{
		{	/* Globalize/kapture.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1611z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1611z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1611z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string1611z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1611z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1611z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1611z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1611z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1611z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1611z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string1611z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(((long) 2706140),
				BSTRING_TO_STRING(BGl_string1611z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(((long) 244215773),
				BSTRING_TO_STRING(BGl_string1611z00zzglobaliza7e_kaptureza7));
			return
				BGl_modulezd2initializa7ationz75zzglobaliza7e_cloctoza7(((long)
					254520496),
				BSTRING_TO_STRING(BGl_string1611z00zzglobaliza7e_kaptureza7));
		}

	}

#ifdef __cplusplus
}
#endif
