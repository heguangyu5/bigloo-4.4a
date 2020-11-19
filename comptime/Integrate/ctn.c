/*===========================================================================*/
/*   (Integrate/ctn.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/ctn.scm) */
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


	BGL_EXPORTED_DECL obj_t BGl_Cnz62Ctz12z70zzintegrate_ctnz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzintegrate_ctnz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzintegrate_ctnz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzintegrate_ctnz00();
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_ctnz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzintegrate_ctnz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62Cnz62Ctz12z12zzintegrate_ctnz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_ctnz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_az00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzintegrate_ctnz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_ctnz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_ctnz00();
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_Cnz62Ctz12zd2envza2zzintegrate_ctnz00,
		BgL_bgl_za762cnza762ctza712za7121398z00,
		BGl_z62Cnz62Ctz12z12zzintegrate_ctnz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1391z00zzintegrate_ctnz00,
		BgL_bgl_string1391za700za7za7i1399za7, "SHould not be here", 18);
	      DEFINE_STRING(BGl_string1392z00zzintegrate_ctnz00,
		BgL_bgl_string1392za700za7za7i1400za7, "integrate_ctn", 13);
	      DEFINE_STRING(BGl_string1393z00zzintegrate_ctnz00,
		BgL_bgl_string1393za700za7za7i1401za7, "Cn&Ct! escape tail ", 19);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzintegrate_ctnz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzintegrate_ctnz00(long
		BgL_checksumz00_1829, char *BgL_fromz00_1830)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_ctnz00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_ctnz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzintegrate_ctnz00();
					BGl_libraryzd2moduleszd2initz00zzintegrate_ctnz00();
					BGl_cnstzd2initzd2zzintegrate_ctnz00();
					BGl_importedzd2moduleszd2initz00zzintegrate_ctnz00();
					return BGl_methodzd2initzd2zzintegrate_ctnz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_ctnz00()
	{
		{	/* Integrate/ctn.scm 17 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_ctn");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"integrate_ctn");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "integrate_ctn");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"integrate_ctn");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"integrate_ctn");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"integrate_ctn");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzintegrate_ctnz00()
	{
		{	/* Integrate/ctn.scm 17 */
			{	/* Integrate/ctn.scm 17 */
				obj_t BgL_cportz00_1816;

				{	/* Integrate/ctn.scm 17 */
					obj_t BgL_stringz00_1824;

					BgL_stringz00_1824 = BGl_string1393z00zzintegrate_ctnz00;
					{	/* Integrate/ctn.scm 17 */
						obj_t BgL_startz00_1825;

						BgL_startz00_1825 = BINT(((long) 0));
						{	/* Integrate/ctn.scm 17 */
							obj_t BgL_endz00_1826;

							BgL_endz00_1826 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1824)));
							{	/* Integrate/ctn.scm 17 */

								BgL_cportz00_1816 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1824, BgL_startz00_1825, BgL_endz00_1826);
				}}}}
				{
					long BgL_iz00_1817;

					BgL_iz00_1817 = ((long) 2);
				BgL_loopz00_1818:
					if ((BgL_iz00_1817 == ((long) -1)))
						{	/* Integrate/ctn.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Integrate/ctn.scm 17 */
							{	/* Integrate/ctn.scm 17 */
								obj_t BgL_arg1396z00_1820;

								{	/* Integrate/ctn.scm 17 */

									{	/* Integrate/ctn.scm 17 */
										obj_t BgL_locationz00_1822;

										BgL_locationz00_1822 = BBOOL(((bool_t) 0));
										{	/* Integrate/ctn.scm 17 */

											BgL_arg1396z00_1820 =
												BGl_readz00zz__readerz00(BgL_cportz00_1816,
												BgL_locationz00_1822);
										}
									}
								}
								{	/* Integrate/ctn.scm 17 */
									int BgL_tmpz00_1854;

									BgL_tmpz00_1854 = (int) (BgL_iz00_1817);
									CNST_TABLE_SET(BgL_tmpz00_1854, BgL_arg1396z00_1820);
							}}
							{	/* Integrate/ctn.scm 17 */
								int BgL_auxz00_1823;

								BgL_auxz00_1823 = (int) ((BgL_iz00_1817 - ((long) 1)));
								{
									long BgL_iz00_1859;

									BgL_iz00_1859 = (long) (BgL_auxz00_1823);
									BgL_iz00_1817 = BgL_iz00_1859;
									goto BgL_loopz00_1818;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzintegrate_ctnz00()
	{
		{	/* Integrate/ctn.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* Cn&Ct! */
	BGL_EXPORTED_DEF obj_t BGl_Cnz62Ctz12z70zzintegrate_ctnz00(obj_t BgL_az00_3)
	{
		{	/* Integrate/ctn.scm 33 */
			{
				obj_t BgL_asz00_1518;
				obj_t BgL_gzf2cnzf2_1519;

				BgL_asz00_1518 = BgL_az00_3;
				BgL_gzf2cnzf2_1519 = BNIL;
			BgL_zc3z04anonymousza31243ze3z87_1520:
				if (NULLP(BgL_asz00_1518))
					{	/* Integrate/ctn.scm 36 */
						return BgL_gzf2cnzf2_1519;
					}
				else
					{	/* Integrate/ctn.scm 40 */
						obj_t BgL_az00_1522;

						BgL_az00_1522 = CAR(((obj_t) BgL_asz00_1518));
						{	/* Integrate/ctn.scm 40 */
							obj_t BgL_fz00_1523;

							BgL_fz00_1523 = CAR(((obj_t) BgL_az00_1522));
							{	/* Integrate/ctn.scm 41 */
								obj_t BgL_gz00_1524;

								{	/* Integrate/ctn.scm 42 */
									obj_t BgL_pairz00_1749;

									BgL_pairz00_1749 = CDR(((obj_t) BgL_az00_1522));
									BgL_gz00_1524 = CAR(BgL_pairz00_1749);
								}
								{	/* Integrate/ctn.scm 42 */
									obj_t BgL_kz00_1525;

									{	/* Integrate/ctn.scm 43 */
										obj_t BgL_pairz00_1755;

										{	/* Integrate/ctn.scm 43 */
											obj_t BgL_pairz00_1754;

											BgL_pairz00_1754 = CDR(((obj_t) BgL_az00_1522));
											BgL_pairz00_1755 = CDR(BgL_pairz00_1754);
										}
										BgL_kz00_1525 = CAR(BgL_pairz00_1755);
									}
									{	/* Integrate/ctn.scm 43 */
										BgL_valuez00_bglt BgL_fiz00_1526;

										BgL_fiz00_1526 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_fz00_1523)))->
											BgL_valuez00);
										{	/* Integrate/ctn.scm 44 */
											BgL_valuez00_bglt BgL_giz00_1527;

											BgL_giz00_1527 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_gz00_1524)))->
												BgL_valuez00);
											{	/* Integrate/ctn.scm 45 */

												if (BGl_isazf3zf3zz__objectz00(BgL_gz00_1524,
														BGl_globalz00zzast_varz00))
													{	/* Integrate/ctn.scm 48 */
														obj_t BgL_arg1246z00_1529;

														BgL_arg1246z00_1529 = CDR(((obj_t) BgL_asz00_1518));
														{
															obj_t BgL_asz00_1883;

															BgL_asz00_1883 = BgL_arg1246z00_1529;
															BgL_asz00_1518 = BgL_asz00_1883;
															goto BgL_zc3z04anonymousza31243ze3z87_1520;
														}
													}
												else
													{	/* Integrate/ctn.scm 49 */
														bool_t BgL_test1406z00_1884;

														{
															BgL_sfunzf2iinfozf2_bglt BgL_auxz00_1885;

															{
																obj_t BgL_auxz00_1886;

																{	/* Integrate/ctn.scm 49 */
																	BgL_objectz00_bglt BgL_tmpz00_1887;

																	BgL_tmpz00_1887 =
																		((BgL_objectz00_bglt)
																		((BgL_sfunz00_bglt) BgL_giz00_1527));
																	BgL_auxz00_1886 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_1887);
																}
																BgL_auxz00_1885 =
																	((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_1886);
															}
															BgL_test1406z00_1884 =
																(((BgL_sfunzf2iinfozf2_bglt)
																	COBJECT(BgL_auxz00_1885))->BgL_forcegzf3zf3);
														}
														if (BgL_test1406z00_1884)
															{	/* Integrate/ctn.scm 51 */
																bool_t BgL_test1407z00_1893;

																{
																	BgL_sfunzf2iinfozf2_bglt BgL_auxz00_1894;

																	{
																		obj_t BgL_auxz00_1895;

																		{	/* Integrate/ctn.scm 51 */
																			BgL_objectz00_bglt BgL_tmpz00_1896;

																			BgL_tmpz00_1896 =
																				((BgL_objectz00_bglt)
																				((BgL_sfunz00_bglt) BgL_giz00_1527));
																			BgL_auxz00_1895 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_1896);
																		}
																		BgL_auxz00_1894 =
																			((BgL_sfunzf2iinfozf2_bglt)
																			BgL_auxz00_1895);
																	}
																	BgL_test1407z00_1893 =
																		(((BgL_sfunzf2iinfozf2_bglt)
																			COBJECT(BgL_auxz00_1894))->BgL_gzf3zf3);
																}
																if (BgL_test1407z00_1893)
																	{	/* Integrate/ctn.scm 55 */
																		obj_t BgL_arg1250z00_1532;

																		BgL_arg1250z00_1532 =
																			CDR(((obj_t) BgL_asz00_1518));
																		{
																			obj_t BgL_asz00_1904;

																			BgL_asz00_1904 = BgL_arg1250z00_1532;
																			BgL_asz00_1518 = BgL_asz00_1904;
																			goto
																				BgL_zc3z04anonymousza31243ze3z87_1520;
																		}
																	}
																else
																	{	/* Integrate/ctn.scm 51 */
																		{
																			BgL_sfunzf2iinfozf2_bglt BgL_auxz00_1905;

																			{
																				obj_t BgL_auxz00_1906;

																				{	/* Integrate/ctn.scm 53 */
																					BgL_objectz00_bglt BgL_tmpz00_1907;

																					BgL_tmpz00_1907 =
																						((BgL_objectz00_bglt)
																						((BgL_sfunz00_bglt)
																							BgL_giz00_1527));
																					BgL_auxz00_1906 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_1907);
																				}
																				BgL_auxz00_1905 =
																					((BgL_sfunzf2iinfozf2_bglt)
																					BgL_auxz00_1906);
																			}
																			((((BgL_sfunzf2iinfozf2_bglt)
																						COBJECT(BgL_auxz00_1905))->
																					BgL_gzf3zf3) =
																				((bool_t) ((bool_t) 1)), BUNSPEC);
																		}
																		{	/* Integrate/ctn.scm 54 */
																			obj_t BgL_arg1252z00_1533;
																			obj_t BgL_arg1253z00_1534;

																			BgL_arg1252z00_1533 =
																				CDR(((obj_t) BgL_asz00_1518));
																			BgL_arg1253z00_1534 =
																				MAKE_YOUNG_PAIR(BgL_gz00_1524,
																				BgL_gzf2cnzf2_1519);
																			{
																				obj_t BgL_gzf2cnzf2_1917;
																				obj_t BgL_asz00_1916;

																				BgL_asz00_1916 = BgL_arg1252z00_1533;
																				BgL_gzf2cnzf2_1917 =
																					BgL_arg1253z00_1534;
																				BgL_gzf2cnzf2_1519 = BgL_gzf2cnzf2_1917;
																				BgL_asz00_1518 = BgL_asz00_1916;
																				goto
																					BgL_zc3z04anonymousza31243ze3z87_1520;
																			}
																		}
																	}
															}
														else
															{	/* Integrate/ctn.scm 49 */
																if (
																	(BgL_kz00_1525 == CNST_TABLE_REF(((long) 0))))
																	{	/* Integrate/ctn.scm 56 */
																		{	/* Integrate/ctn.scm 57 */
																			obj_t BgL_arg1256z00_1536;

																			{	/* Integrate/ctn.scm 57 */
																				obj_t BgL_arg1258z00_1537;

																				{
																					BgL_sfunzf2iinfozf2_bglt
																						BgL_auxz00_1921;
																					{
																						obj_t BgL_auxz00_1922;

																						{	/* Integrate/ctn.scm 57 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_1923;
																							BgL_tmpz00_1923 =
																								((BgL_objectz00_bglt) (
																									(BgL_sfunz00_bglt)
																									BgL_fiz00_1526));
																							BgL_auxz00_1922 =
																								BGL_OBJECT_WIDENING
																								(BgL_tmpz00_1923);
																						}
																						BgL_auxz00_1921 =
																							((BgL_sfunzf2iinfozf2_bglt)
																							BgL_auxz00_1922);
																					}
																					BgL_arg1258z00_1537 =
																						(((BgL_sfunzf2iinfozf2_bglt)
																							COBJECT(BgL_auxz00_1921))->
																						BgL_ctz00);
																				}
																				BgL_arg1256z00_1536 =
																					MAKE_YOUNG_PAIR(BgL_gz00_1524,
																					BgL_arg1258z00_1537);
																			}
																			{
																				BgL_sfunzf2iinfozf2_bglt
																					BgL_auxz00_1930;
																				{
																					obj_t BgL_auxz00_1931;

																					{	/* Integrate/ctn.scm 57 */
																						BgL_objectz00_bglt BgL_tmpz00_1932;

																						BgL_tmpz00_1932 =
																							((BgL_objectz00_bglt)
																							((BgL_sfunz00_bglt)
																								BgL_fiz00_1526));
																						BgL_auxz00_1931 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_1932);
																					}
																					BgL_auxz00_1930 =
																						((BgL_sfunzf2iinfozf2_bglt)
																						BgL_auxz00_1931);
																				}
																				((((BgL_sfunzf2iinfozf2_bglt)
																							COBJECT(BgL_auxz00_1930))->
																						BgL_ctz00) =
																					((obj_t) BgL_arg1256z00_1536),
																					BUNSPEC);
																		}}
																		{	/* Integrate/ctn.scm 58 */
																			bool_t BgL_test1409z00_1938;

																			if ((BgL_fz00_1523 == BgL_gz00_1524))
																				{	/* Integrate/ctn.scm 58 */
																					BgL_test1409z00_1938 = ((bool_t) 0);
																				}
																			else
																				{	/* Integrate/ctn.scm 59 */
																					bool_t BgL_test1411z00_1941;

																					{	/* Integrate/ctn.scm 59 */
																						obj_t BgL_arg1273z00_1547;

																						{
																							BgL_sfunzf2iinfozf2_bglt
																								BgL_auxz00_1942;
																							{
																								obj_t BgL_auxz00_1943;

																								{	/* Integrate/ctn.scm 59 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_1944;
																									BgL_tmpz00_1944 =
																										((BgL_objectz00_bglt) (
																											(BgL_sfunz00_bglt)
																											BgL_fiz00_1526));
																									BgL_auxz00_1943 =
																										BGL_OBJECT_WIDENING
																										(BgL_tmpz00_1944);
																								}
																								BgL_auxz00_1942 =
																									((BgL_sfunzf2iinfozf2_bglt)
																									BgL_auxz00_1943);
																							}
																							BgL_arg1273z00_1547 =
																								(((BgL_sfunzf2iinfozf2_bglt)
																									COBJECT(BgL_auxz00_1942))->
																								BgL_kontz00);
																						}
																						BgL_test1411z00_1941 =
																							CBOOL
																							(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																							(BgL_gz00_1524,
																								BgL_arg1273z00_1547));
																					}
																					if (BgL_test1411z00_1941)
																						{	/* Integrate/ctn.scm 59 */
																							BgL_test1409z00_1938 =
																								((bool_t) 0);
																						}
																					else
																						{	/* Integrate/ctn.scm 59 */
																							BgL_test1409z00_1938 =
																								((bool_t) 1);
																						}
																				}
																			if (BgL_test1409z00_1938)
																				{	/* Integrate/ctn.scm 60 */
																					obj_t BgL_arg1270z00_1543;

																					{	/* Integrate/ctn.scm 60 */
																						obj_t BgL_arg1271z00_1544;

																						{
																							BgL_sfunzf2iinfozf2_bglt
																								BgL_auxz00_1952;
																							{
																								obj_t BgL_auxz00_1953;

																								{	/* Integrate/ctn.scm 60 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_1954;
																									BgL_tmpz00_1954 =
																										((BgL_objectz00_bglt) (
																											(BgL_sfunz00_bglt)
																											BgL_fiz00_1526));
																									BgL_auxz00_1953 =
																										BGL_OBJECT_WIDENING
																										(BgL_tmpz00_1954);
																								}
																								BgL_auxz00_1952 =
																									((BgL_sfunzf2iinfozf2_bglt)
																									BgL_auxz00_1953);
																							}
																							BgL_arg1271z00_1544 =
																								(((BgL_sfunzf2iinfozf2_bglt)
																									COBJECT(BgL_auxz00_1952))->
																								BgL_kontz00);
																						}
																						BgL_arg1270z00_1543 =
																							MAKE_YOUNG_PAIR(BgL_gz00_1524,
																							BgL_arg1271z00_1544);
																					}
																					{
																						BgL_sfunzf2iinfozf2_bglt
																							BgL_auxz00_1961;
																						{
																							obj_t BgL_auxz00_1962;

																							{	/* Integrate/ctn.scm 60 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_1963;
																								BgL_tmpz00_1963 =
																									((BgL_objectz00_bglt) (
																										(BgL_sfunz00_bglt)
																										BgL_fiz00_1526));
																								BgL_auxz00_1962 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_1963);
																							}
																							BgL_auxz00_1961 =
																								((BgL_sfunzf2iinfozf2_bglt)
																								BgL_auxz00_1962);
																						}
																						((((BgL_sfunzf2iinfozf2_bglt)
																									COBJECT(BgL_auxz00_1961))->
																								BgL_kontz00) =
																							((obj_t) BgL_arg1270z00_1543),
																							BUNSPEC);
																					}
																				}
																			else
																				{	/* Integrate/ctn.scm 58 */
																					BFALSE;
																				}
																		}
																		{	/* Integrate/ctn.scm 61 */
																			obj_t BgL_arg1274z00_1548;

																			BgL_arg1274z00_1548 =
																				CDR(((obj_t) BgL_asz00_1518));
																			{
																				obj_t BgL_asz00_1971;

																				BgL_asz00_1971 = BgL_arg1274z00_1548;
																				BgL_asz00_1518 = BgL_asz00_1971;
																				goto
																					BgL_zc3z04anonymousza31243ze3z87_1520;
																			}
																		}
																	}
																else
																	{	/* Integrate/ctn.scm 56 */
																		if (
																			(BgL_kz00_1525 ==
																				CNST_TABLE_REF(((long) 1))))
																			{	/* Integrate/ctn.scm 62 */
																				return
																					BGl_errorz00zz__errorz00
																					(CNST_TABLE_REF(((long) 2)),
																					BGl_string1391z00zzintegrate_ctnz00,
																					BgL_az00_1522);
																			}
																		else
																			{	/* Integrate/ctn.scm 64 */
																				bool_t BgL_test1413z00_1977;

																				{	/* Integrate/ctn.scm 64 */
																					obj_t BgL_tmpz00_1978;

																					{
																						BgL_sfunzf2iinfozf2_bglt
																							BgL_auxz00_1979;
																						{
																							obj_t BgL_auxz00_1980;

																							{	/* Integrate/ctn.scm 64 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_1981;
																								BgL_tmpz00_1981 =
																									((BgL_objectz00_bglt) (
																										(BgL_sfunz00_bglt)
																										BgL_giz00_1527));
																								BgL_auxz00_1980 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_1981);
																							}
																							BgL_auxz00_1979 =
																								((BgL_sfunzf2iinfozf2_bglt)
																								BgL_auxz00_1980);
																						}
																						BgL_tmpz00_1978 =
																							(((BgL_sfunzf2iinfozf2_bglt)
																								COBJECT(BgL_auxz00_1979))->
																							BgL_uz00);
																					}
																					BgL_test1413z00_1977 =
																						CBOOL(BgL_tmpz00_1978);
																				}
																				if (BgL_test1413z00_1977)
																					{	/* Integrate/ctn.scm 64 */
																						{	/* Integrate/ctn.scm 65 */
																							obj_t BgL_arg1277z00_1551;

																							{	/* Integrate/ctn.scm 65 */
																								obj_t BgL_arg1280z00_1552;

																								{
																									BgL_sfunzf2iinfozf2_bglt
																										BgL_auxz00_1988;
																									{
																										obj_t BgL_auxz00_1989;

																										{	/* Integrate/ctn.scm 65 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_1990;
																											BgL_tmpz00_1990 =
																												((BgL_objectz00_bglt) (
																													(BgL_sfunz00_bglt)
																													BgL_fiz00_1526));
																											BgL_auxz00_1989 =
																												BGL_OBJECT_WIDENING
																												(BgL_tmpz00_1990);
																										}
																										BgL_auxz00_1988 =
																											(
																											(BgL_sfunzf2iinfozf2_bglt)
																											BgL_auxz00_1989);
																									}
																									BgL_arg1280z00_1552 =
																										(((BgL_sfunzf2iinfozf2_bglt)
																											COBJECT
																											(BgL_auxz00_1988))->
																										BgL_ctz00);
																								}
																								BgL_arg1277z00_1551 =
																									MAKE_YOUNG_PAIR(BgL_gz00_1524,
																									BgL_arg1280z00_1552);
																							}
																							{
																								BgL_sfunzf2iinfozf2_bglt
																									BgL_auxz00_1997;
																								{
																									obj_t BgL_auxz00_1998;

																									{	/* Integrate/ctn.scm 65 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_1999;
																										BgL_tmpz00_1999 =
																											((BgL_objectz00_bglt) (
																												(BgL_sfunz00_bglt)
																												BgL_fiz00_1526));
																										BgL_auxz00_1998 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_1999);
																									}
																									BgL_auxz00_1997 =
																										((BgL_sfunzf2iinfozf2_bglt)
																										BgL_auxz00_1998);
																								}
																								((((BgL_sfunzf2iinfozf2_bglt)
																											COBJECT
																											(BgL_auxz00_1997))->
																										BgL_ctz00) =
																									((obj_t) BgL_arg1277z00_1551),
																									BUNSPEC);
																							}
																						}
																						{	/* Integrate/ctn.scm 66 */
																							bool_t BgL_test1414z00_2005;

																							{	/* Integrate/ctn.scm 66 */
																								obj_t BgL_arg1286z00_1557;

																								{
																									BgL_sfunzf2iinfozf2_bglt
																										BgL_auxz00_2006;
																									{
																										obj_t BgL_auxz00_2007;

																										{	/* Integrate/ctn.scm 66 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_2008;
																											BgL_tmpz00_2008 =
																												((BgL_objectz00_bglt) (
																													(BgL_sfunz00_bglt)
																													BgL_fiz00_1526));
																											BgL_auxz00_2007 =
																												BGL_OBJECT_WIDENING
																												(BgL_tmpz00_2008);
																										}
																										BgL_auxz00_2006 =
																											(
																											(BgL_sfunzf2iinfozf2_bglt)
																											BgL_auxz00_2007);
																									}
																									BgL_arg1286z00_1557 =
																										(((BgL_sfunzf2iinfozf2_bglt)
																											COBJECT
																											(BgL_auxz00_2006))->
																										BgL_kontz00);
																								}
																								BgL_test1414z00_2005 =
																									CBOOL
																									(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																									(BgL_gz00_1524,
																										BgL_arg1286z00_1557));
																							}
																							if (BgL_test1414z00_2005)
																								{	/* Integrate/ctn.scm 66 */
																									BFALSE;
																								}
																							else
																								{	/* Integrate/ctn.scm 67 */
																									obj_t BgL_arg1284z00_1555;

																									{	/* Integrate/ctn.scm 67 */
																										obj_t BgL_arg1285z00_1556;

																										{
																											BgL_sfunzf2iinfozf2_bglt
																												BgL_auxz00_2016;
																											{
																												obj_t BgL_auxz00_2017;

																												{	/* Integrate/ctn.scm 67 */
																													BgL_objectz00_bglt
																														BgL_tmpz00_2018;
																													BgL_tmpz00_2018 =
																														(
																														(BgL_objectz00_bglt)
																														((BgL_sfunz00_bglt)
																															BgL_fiz00_1526));
																													BgL_auxz00_2017 =
																														BGL_OBJECT_WIDENING
																														(BgL_tmpz00_2018);
																												}
																												BgL_auxz00_2016 =
																													(
																													(BgL_sfunzf2iinfozf2_bglt)
																													BgL_auxz00_2017);
																											}
																											BgL_arg1285z00_1556 =
																												(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2016))->BgL_kontz00);
																										}
																										BgL_arg1284z00_1555 =
																											MAKE_YOUNG_PAIR
																											(BgL_gz00_1524,
																											BgL_arg1285z00_1556);
																									}
																									{
																										BgL_sfunzf2iinfozf2_bglt
																											BgL_auxz00_2025;
																										{
																											obj_t BgL_auxz00_2026;

																											{	/* Integrate/ctn.scm 67 */
																												BgL_objectz00_bglt
																													BgL_tmpz00_2027;
																												BgL_tmpz00_2027 =
																													((BgL_objectz00_bglt)
																													((BgL_sfunz00_bglt)
																														BgL_fiz00_1526));
																												BgL_auxz00_2026 =
																													BGL_OBJECT_WIDENING
																													(BgL_tmpz00_2027);
																											}
																											BgL_auxz00_2025 =
																												(
																												(BgL_sfunzf2iinfozf2_bglt)
																												BgL_auxz00_2026);
																										}
																										((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2025))->BgL_kontz00) = ((obj_t) BgL_arg1284z00_1555), BUNSPEC);
																									}
																								}
																						}
																						{	/* Integrate/ctn.scm 68 */
																							obj_t BgL_arg1287z00_1558;

																							BgL_arg1287z00_1558 =
																								CDR(((obj_t) BgL_asz00_1518));
																							{
																								obj_t BgL_asz00_2035;

																								BgL_asz00_2035 =
																									BgL_arg1287z00_1558;
																								BgL_asz00_1518 = BgL_asz00_2035;
																								goto
																									BgL_zc3z04anonymousza31243ze3z87_1520;
																							}
																						}
																					}
																				else
																					{	/* Integrate/ctn.scm 64 */
																						{	/* Integrate/ctn.scm 70 */
																							obj_t BgL_arg1288z00_1559;

																							{	/* Integrate/ctn.scm 70 */
																								obj_t BgL_arg1289z00_1560;

																								{
																									BgL_sfunzf2iinfozf2_bglt
																										BgL_auxz00_2036;
																									{
																										obj_t BgL_auxz00_2037;

																										{	/* Integrate/ctn.scm 70 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_2038;
																											BgL_tmpz00_2038 =
																												((BgL_objectz00_bglt) (
																													(BgL_sfunz00_bglt)
																													BgL_fiz00_1526));
																											BgL_auxz00_2037 =
																												BGL_OBJECT_WIDENING
																												(BgL_tmpz00_2038);
																										}
																										BgL_auxz00_2036 =
																											(
																											(BgL_sfunzf2iinfozf2_bglt)
																											BgL_auxz00_2037);
																									}
																									BgL_arg1289z00_1560 =
																										(((BgL_sfunzf2iinfozf2_bglt)
																											COBJECT
																											(BgL_auxz00_2036))->
																										BgL_cnz00);
																								}
																								BgL_arg1288z00_1559 =
																									MAKE_YOUNG_PAIR(BgL_gz00_1524,
																									BgL_arg1289z00_1560);
																							}
																							{
																								BgL_sfunzf2iinfozf2_bglt
																									BgL_auxz00_2045;
																								{
																									obj_t BgL_auxz00_2046;

																									{	/* Integrate/ctn.scm 70 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_2047;
																										BgL_tmpz00_2047 =
																											((BgL_objectz00_bglt) (
																												(BgL_sfunz00_bglt)
																												BgL_fiz00_1526));
																										BgL_auxz00_2046 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_2047);
																									}
																									BgL_auxz00_2045 =
																										((BgL_sfunzf2iinfozf2_bglt)
																										BgL_auxz00_2046);
																								}
																								((((BgL_sfunzf2iinfozf2_bglt)
																											COBJECT
																											(BgL_auxz00_2045))->
																										BgL_cnz00) =
																									((obj_t) BgL_arg1288z00_1559),
																									BUNSPEC);
																							}
																						}
																						{	/* Integrate/ctn.scm 71 */
																							bool_t BgL_test1415z00_2053;

																							{
																								BgL_sfunzf2iinfozf2_bglt
																									BgL_auxz00_2054;
																								{
																									obj_t BgL_auxz00_2055;

																									{	/* Integrate/ctn.scm 71 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_2056;
																										BgL_tmpz00_2056 =
																											((BgL_objectz00_bglt) (
																												(BgL_sfunz00_bglt)
																												BgL_giz00_1527));
																										BgL_auxz00_2055 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_2056);
																									}
																									BgL_auxz00_2054 =
																										((BgL_sfunzf2iinfozf2_bglt)
																										BgL_auxz00_2055);
																								}
																								BgL_test1415z00_2053 =
																									(((BgL_sfunzf2iinfozf2_bglt)
																										COBJECT(BgL_auxz00_2054))->
																									BgL_gzf3zf3);
																							}
																							if (BgL_test1415z00_2053)
																								{	/* Integrate/ctn.scm 75 */
																									obj_t BgL_arg1291z00_1562;

																									BgL_arg1291z00_1562 =
																										CDR(
																										((obj_t) BgL_asz00_1518));
																									{
																										obj_t BgL_asz00_2064;

																										BgL_asz00_2064 =
																											BgL_arg1291z00_1562;
																										BgL_asz00_1518 =
																											BgL_asz00_2064;
																										goto
																											BgL_zc3z04anonymousza31243ze3z87_1520;
																									}
																								}
																							else
																								{	/* Integrate/ctn.scm 71 */
																									{
																										BgL_sfunzf2iinfozf2_bglt
																											BgL_auxz00_2065;
																										{
																											obj_t BgL_auxz00_2066;

																											{	/* Integrate/ctn.scm 73 */
																												BgL_objectz00_bglt
																													BgL_tmpz00_2067;
																												BgL_tmpz00_2067 =
																													((BgL_objectz00_bglt)
																													((BgL_sfunz00_bglt)
																														BgL_giz00_1527));
																												BgL_auxz00_2066 =
																													BGL_OBJECT_WIDENING
																													(BgL_tmpz00_2067);
																											}
																											BgL_auxz00_2065 =
																												(
																												(BgL_sfunzf2iinfozf2_bglt)
																												BgL_auxz00_2066);
																										}
																										((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2065))->BgL_gzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
																									}
																									{	/* Integrate/ctn.scm 74 */
																										obj_t BgL_arg1292z00_1563;
																										obj_t BgL_arg1295z00_1564;

																										BgL_arg1292z00_1563 =
																											CDR(
																											((obj_t) BgL_asz00_1518));
																										BgL_arg1295z00_1564 =
																											MAKE_YOUNG_PAIR
																											(BgL_gz00_1524,
																											BgL_gzf2cnzf2_1519);
																										{
																											obj_t BgL_gzf2cnzf2_2077;
																											obj_t BgL_asz00_2076;

																											BgL_asz00_2076 =
																												BgL_arg1292z00_1563;
																											BgL_gzf2cnzf2_2077 =
																												BgL_arg1295z00_1564;
																											BgL_gzf2cnzf2_1519 =
																												BgL_gzf2cnzf2_2077;
																											BgL_asz00_1518 =
																												BgL_asz00_2076;
																											goto
																												BgL_zc3z04anonymousza31243ze3z87_1520;
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
								}
							}
						}
					}
			}
		}

	}



/* &Cn&Ct! */
	obj_t BGl_z62Cnz62Ctz12z12zzintegrate_ctnz00(obj_t BgL_envz00_1814,
		obj_t BgL_az00_1815)
	{
		{	/* Integrate/ctn.scm 33 */
			return BGl_Cnz62Ctz12z70zzintegrate_ctnz00(BgL_az00_1815);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzintegrate_ctnz00()
	{
		{	/* Integrate/ctn.scm 17 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_ctnz00()
	{
		{	/* Integrate/ctn.scm 17 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_ctnz00()
	{
		{	/* Integrate/ctn.scm 17 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_ctnz00()
	{
		{	/* Integrate/ctn.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1392z00zzintegrate_ctnz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1392z00zzintegrate_ctnz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1392z00zzintegrate_ctnz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1392z00zzintegrate_ctnz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1392z00zzintegrate_ctnz00));
			BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string1392z00zzintegrate_ctnz00));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_az00(((long) 523633215),
				BSTRING_TO_STRING(BGl_string1392z00zzintegrate_ctnz00));
		}

	}

#ifdef __cplusplus
}
#endif
