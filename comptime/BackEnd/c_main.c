/*===========================================================================*/
/*   (BackEnd/c_main.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/c_main.scm) */
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;


	static obj_t BGl_objectzd2initzd2zzbackend_c_mainz00();
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzbackend_c_mainz00();
	BGL_EXPORTED_DECL obj_t BGl_makezd2bigloozd2mainz00zzbackend_c_mainz00();
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzbackend_c_mainz00();
	extern obj_t BGl_za2mainza2z00zzmodule_modulez00;
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_c_mainz00 = BUNSPEC;
	extern obj_t BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nodez00_bglt);
	static obj_t BGl_genericzd2initzd2zzbackend_c_mainz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzbackend_c_mainz00();
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_c_mainz00();
	static obj_t BGl_z62makezd2bigloozd2mainz62zzbackend_c_mainz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_c_mainz00();
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[17];


	   
		 
		DEFINE_STRING(BGl_string1482z00zzbackend_c_mainz00,
		BgL_bgl_string1482za700za7za7b1491za7, "bigloo_main", 11);
	      DEFINE_STRING(BGl_string1483z00zzbackend_c_mainz00,
		BgL_bgl_string1483za700za7za7b1492za7, "backend_c_main", 14);
	      DEFINE_STRING(BGl_string1484z00zzbackend_c_mainz00,
		BgL_bgl_string1484za700za7za7b1493za7,
		"export now bigloo-main-procedure sfun (argv::obj) bigloo_main::obj value let z z::bint $int->bint begin %exit @ bigloo-initialized! __param argv ",
		145);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2bigloozd2mainzd2envzd2zzbackend_c_mainz00,
		BgL_bgl_za762makeza7d2bigloo1494z00,
		BGl_z62makezd2bigloozd2mainz62zzbackend_c_mainz00, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzbackend_c_mainz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(long
		BgL_checksumz00_1854, char *BgL_fromz00_1855)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_c_mainz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_c_mainz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzbackend_c_mainz00();
					BGl_libraryzd2moduleszd2initz00zzbackend_c_mainz00();
					BGl_cnstzd2initzd2zzbackend_c_mainz00();
					BGl_importedzd2moduleszd2initz00zzbackend_c_mainz00();
					return BGl_methodzd2initzd2zzbackend_c_mainz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_c_mainz00()
	{
		{	/* BackEnd/c_main.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"backend_c_main");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"backend_c_main");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"backend_c_main");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"backend_c_main");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"backend_c_main");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"backend_c_main");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_c_mainz00()
	{
		{	/* BackEnd/c_main.scm 15 */
			{	/* BackEnd/c_main.scm 15 */
				obj_t BgL_cportz00_1841;

				{	/* BackEnd/c_main.scm 15 */
					obj_t BgL_stringz00_1849;

					BgL_stringz00_1849 = BGl_string1484z00zzbackend_c_mainz00;
					{	/* BackEnd/c_main.scm 15 */
						obj_t BgL_startz00_1850;

						BgL_startz00_1850 = BINT(((long) 0));
						{	/* BackEnd/c_main.scm 15 */
							obj_t BgL_endz00_1851;

							BgL_endz00_1851 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1849)));
							{	/* BackEnd/c_main.scm 15 */

								BgL_cportz00_1841 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1849, BgL_startz00_1850, BgL_endz00_1851);
				}}}}
				{
					long BgL_iz00_1842;

					BgL_iz00_1842 = ((long) 16);
				BgL_loopz00_1843:
					if ((BgL_iz00_1842 == ((long) -1)))
						{	/* BackEnd/c_main.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/c_main.scm 15 */
							{	/* BackEnd/c_main.scm 15 */
								obj_t BgL_arg1489z00_1845;

								{	/* BackEnd/c_main.scm 15 */

									{	/* BackEnd/c_main.scm 15 */
										obj_t BgL_locationz00_1847;

										BgL_locationz00_1847 = BBOOL(((bool_t) 0));
										{	/* BackEnd/c_main.scm 15 */

											BgL_arg1489z00_1845 =
												BGl_readz00zz__readerz00(BgL_cportz00_1841,
												BgL_locationz00_1847);
										}
									}
								}
								{	/* BackEnd/c_main.scm 15 */
									int BgL_tmpz00_1879;

									BgL_tmpz00_1879 = (int) (BgL_iz00_1842);
									CNST_TABLE_SET(BgL_tmpz00_1879, BgL_arg1489z00_1845);
							}}
							{	/* BackEnd/c_main.scm 15 */
								int BgL_auxz00_1848;

								BgL_auxz00_1848 = (int) ((BgL_iz00_1842 - ((long) 1)));
								{
									long BgL_iz00_1884;

									BgL_iz00_1884 = (long) (BgL_auxz00_1848);
									BgL_iz00_1842 = BgL_iz00_1884;
									goto BgL_loopz00_1843;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzbackend_c_mainz00()
	{
		{	/* BackEnd/c_main.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* make-bigloo-main */
	BGL_EXPORTED_DEF obj_t BGl_makezd2bigloozd2mainz00zzbackend_c_mainz00()
	{
		{	/* BackEnd/c_main.scm 37 */
			{	/* BackEnd/c_main.scm 38 */
				obj_t BgL_argsz00_1591;

				{	/* BackEnd/c_main.scm 38 */
					BgL_localz00_bglt BgL_arg1311z00_1641;

					BgL_arg1311z00_1641 =
						BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF(((long) 0)),
						((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
					{	/* BackEnd/c_main.scm 38 */
						obj_t BgL_list1312z00_1642;

						BgL_list1312z00_1642 =
							MAKE_YOUNG_PAIR(((obj_t) BgL_arg1311z00_1641), BNIL);
						BgL_argsz00_1591 = BgL_list1312z00_1642;
				}}
				{	/* BackEnd/c_main.scm 38 */
					obj_t BgL_mainzd2bodyzd2_1592;

					{	/* BackEnd/c_main.scm 39 */
						bool_t BgL_test1497z00_1892;

						{	/* BackEnd/c_main.scm 39 */
							bool_t BgL_res1479z00_1828;

							{	/* BackEnd/c_main.scm 39 */
								obj_t BgL_objz00_1827;

								BgL_objz00_1827 = BGl_za2mainza2z00zzmodule_modulez00;
								BgL_res1479z00_1828 =
									BGl_isazf3zf3zz__objectz00(BgL_objz00_1827,
									BGl_globalz00zzast_varz00);
							}
							BgL_test1497z00_1892 = BgL_res1479z00_1828;
						}
						if (BgL_test1497z00_1892)
							{	/* BackEnd/c_main.scm 41 */
								obj_t BgL_arg1245z00_1597;

								{	/* BackEnd/c_main.scm 41 */
									obj_t BgL_arg1246z00_1598;
									obj_t BgL_arg1247z00_1599;

									{	/* BackEnd/c_main.scm 41 */
										obj_t BgL_arg1250z00_1600;
										obj_t BgL_arg1252z00_1601;

										BgL_arg1250z00_1600 =
											BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00
											(BGl_za2moduleza2z00zzmodule_modulez00);
										{	/* BackEnd/c_main.scm 43 */
											obj_t BgL_arg1253z00_1602;

											{	/* BackEnd/c_main.scm 43 */
												obj_t BgL_arg1254z00_1603;

												{	/* BackEnd/c_main.scm 43 */
													obj_t BgL_res1480z00_1831;

													{	/* BackEnd/c_main.scm 43 */
														obj_t BgL_symbolz00_1829;

														BgL_symbolz00_1829 =
															BGl_za2moduleza2z00zzmodule_modulez00;
														{	/* BackEnd/c_main.scm 43 */
															obj_t BgL_arg1466z00_1830;

															BgL_arg1466z00_1830 =
																SYMBOL_TO_STRING(BgL_symbolz00_1829);
															BgL_res1480z00_1831 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_1830);
														}
													}
													BgL_arg1254z00_1603 = BgL_res1480z00_1831;
												}
												BgL_arg1253z00_1602 =
													MAKE_YOUNG_PAIR(BgL_arg1254z00_1603, BNIL);
											}
											BgL_arg1252z00_1601 =
												MAKE_YOUNG_PAIR(BINT(((long) 0)), BgL_arg1253z00_1602);
										}
										BgL_arg1246z00_1598 =
											MAKE_YOUNG_PAIR(BgL_arg1250z00_1600, BgL_arg1252z00_1601);
									}
									{	/* BackEnd/c_main.scm 44 */
										obj_t BgL_arg1256z00_1604;
										obj_t BgL_arg1258z00_1605;

										{	/* BackEnd/c_main.scm 44 */
											obj_t BgL_arg1263z00_1606;

											{	/* BackEnd/c_main.scm 44 */
												obj_t BgL_arg1268z00_1607;

												{	/* BackEnd/c_main.scm 44 */
													obj_t BgL_arg1270z00_1608;

													BgL_arg1270z00_1608 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)), BNIL);
													BgL_arg1268z00_1607 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
														BgL_arg1270z00_1608);
												}
												BgL_arg1263z00_1606 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
													BgL_arg1268z00_1607);
											}
											BgL_arg1256z00_1604 =
												MAKE_YOUNG_PAIR(BgL_arg1263z00_1606, BNIL);
										}
										{	/* BackEnd/c_main.scm 45 */
											obj_t BgL_arg1271z00_1609;

											{	/* BackEnd/c_main.scm 45 */
												obj_t BgL_arg1273z00_1610;

												{	/* BackEnd/c_main.scm 45 */
													obj_t BgL_arg1274z00_1611;

													{	/* BackEnd/c_main.scm 45 */
														obj_t BgL_arg1275z00_1612;
														obj_t BgL_arg1276z00_1613;

														{	/* BackEnd/c_main.scm 45 */
															obj_t BgL_arg1277z00_1614;

															{	/* BackEnd/c_main.scm 45 */
																obj_t BgL_arg1280z00_1615;
																obj_t BgL_arg1281z00_1616;

																{	/* BackEnd/c_main.scm 45 */
																	BgL_globalz00_bglt BgL_oz00_1832;

																	BgL_oz00_1832 =
																		((BgL_globalz00_bglt)
																		BGl_za2mainza2z00zzmodule_modulez00);
																	BgL_arg1280z00_1615 =
																		(((BgL_variablez00_bglt)
																			COBJECT(((BgL_variablez00_bglt)
																					BgL_oz00_1832)))->BgL_idz00);
																}
																{	/* BackEnd/c_main.scm 46 */
																	obj_t BgL_arg1282z00_1617;

																	{	/* BackEnd/c_main.scm 46 */
																		BgL_globalz00_bglt BgL_oz00_1833;

																		BgL_oz00_1833 =
																			((BgL_globalz00_bglt)
																			BGl_za2mainza2z00zzmodule_modulez00);
																		BgL_arg1282z00_1617 =
																			(((BgL_globalz00_bglt)
																				COBJECT(BgL_oz00_1833))->BgL_modulez00);
																	}
																	BgL_arg1281z00_1616 =
																		MAKE_YOUNG_PAIR(BgL_arg1282z00_1617, BNIL);
																}
																BgL_arg1277z00_1614 =
																	MAKE_YOUNG_PAIR(BgL_arg1280z00_1615,
																	BgL_arg1281z00_1616);
															}
															BgL_arg1275z00_1612 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
																BgL_arg1277z00_1614);
														}
														BgL_arg1276z00_1613 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
														BgL_arg1274z00_1611 =
															MAKE_YOUNG_PAIR(BgL_arg1275z00_1612,
															BgL_arg1276z00_1613);
													}
													BgL_arg1273z00_1610 =
														MAKE_YOUNG_PAIR(BgL_arg1274z00_1611, BNIL);
												}
												BgL_arg1271z00_1609 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
													BgL_arg1273z00_1610);
											}
											BgL_arg1258z00_1605 =
												MAKE_YOUNG_PAIR(BgL_arg1271z00_1609, BNIL);
										}
										BgL_arg1247z00_1599 =
											MAKE_YOUNG_PAIR(BgL_arg1256z00_1604, BgL_arg1258z00_1605);
									}
									BgL_arg1245z00_1597 =
										MAKE_YOUNG_PAIR(BgL_arg1246z00_1598, BgL_arg1247z00_1599);
								}
								BgL_mainzd2bodyzd2_1592 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
									BgL_arg1245z00_1597);
							}
						else
							{	/* BackEnd/c_main.scm 49 */
								obj_t BgL_arg1284z00_1618;

								{	/* BackEnd/c_main.scm 49 */
									obj_t BgL_arg1285z00_1619;
									obj_t BgL_arg1286z00_1620;

									{	/* BackEnd/c_main.scm 49 */
										obj_t BgL_arg1287z00_1621;
										obj_t BgL_arg1288z00_1622;

										BgL_arg1287z00_1621 =
											BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00
											(BGl_za2moduleza2z00zzmodule_modulez00);
										{	/* BackEnd/c_main.scm 51 */
											obj_t BgL_arg1289z00_1623;

											{	/* BackEnd/c_main.scm 51 */
												obj_t BgL_arg1290z00_1624;

												{	/* BackEnd/c_main.scm 51 */
													obj_t BgL_res1481z00_1836;

													{	/* BackEnd/c_main.scm 51 */
														obj_t BgL_symbolz00_1834;

														BgL_symbolz00_1834 =
															BGl_za2moduleza2z00zzmodule_modulez00;
														{	/* BackEnd/c_main.scm 51 */
															obj_t BgL_arg1466z00_1835;

															BgL_arg1466z00_1835 =
																SYMBOL_TO_STRING(BgL_symbolz00_1834);
															BgL_res1481z00_1836 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_1835);
														}
													}
													BgL_arg1290z00_1624 = BgL_res1481z00_1836;
												}
												BgL_arg1289z00_1623 =
													MAKE_YOUNG_PAIR(BgL_arg1290z00_1624, BNIL);
											}
											BgL_arg1288z00_1622 =
												MAKE_YOUNG_PAIR(BINT(((long) 0)), BgL_arg1289z00_1623);
										}
										BgL_arg1285z00_1619 =
											MAKE_YOUNG_PAIR(BgL_arg1287z00_1621, BgL_arg1288z00_1622);
									}
									{	/* BackEnd/c_main.scm 52 */
										obj_t BgL_arg1291z00_1625;
										obj_t BgL_arg1292z00_1626;

										{	/* BackEnd/c_main.scm 52 */
											obj_t BgL_arg1295z00_1627;

											{	/* BackEnd/c_main.scm 52 */
												obj_t BgL_arg1296z00_1628;

												{	/* BackEnd/c_main.scm 52 */
													obj_t BgL_arg1297z00_1629;

													BgL_arg1297z00_1629 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)), BNIL);
													BgL_arg1296z00_1628 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
														BgL_arg1297z00_1629);
												}
												BgL_arg1295z00_1627 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
													BgL_arg1296z00_1628);
											}
											BgL_arg1291z00_1625 =
												MAKE_YOUNG_PAIR(BgL_arg1295z00_1627, BNIL);
										}
										{	/* BackEnd/c_main.scm 53 */
											obj_t BgL_arg1298z00_1630;
											obj_t BgL_arg1299z00_1631;

											{	/* BackEnd/c_main.scm 53 */
												obj_t BgL_arg1300z00_1632;

												{	/* BackEnd/c_main.scm 53 */
													obj_t BgL_arg1301z00_1633;
													obj_t BgL_arg1303z00_1634;

													{	/* BackEnd/c_main.scm 53 */
														obj_t BgL_arg1304z00_1635;

														{	/* BackEnd/c_main.scm 53 */
															obj_t BgL_arg1306z00_1636;

															{	/* BackEnd/c_main.scm 53 */
																obj_t BgL_arg1307z00_1637;

																{	/* BackEnd/c_main.scm 53 */
																	obj_t BgL_arg1308z00_1638;

																	BgL_arg1308z00_1638 =
																		MAKE_YOUNG_PAIR(BINT(((long) 0)), BNIL);
																	BgL_arg1307z00_1637 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
																		BgL_arg1308z00_1638);
																}
																BgL_arg1306z00_1636 =
																	MAKE_YOUNG_PAIR(BgL_arg1307z00_1637, BNIL);
															}
															BgL_arg1304z00_1635 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
																BgL_arg1306z00_1636);
														}
														BgL_arg1301z00_1633 =
															MAKE_YOUNG_PAIR(BgL_arg1304z00_1635, BNIL);
													}
													{	/* BackEnd/c_main.scm 54 */
														obj_t BgL_arg1309z00_1639;

														{	/* BackEnd/c_main.scm 54 */
															obj_t BgL_arg1310z00_1640;

															BgL_arg1310z00_1640 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
																BNIL);
															BgL_arg1309z00_1639 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
																BgL_arg1310z00_1640);
														}
														BgL_arg1303z00_1634 =
															MAKE_YOUNG_PAIR(BgL_arg1309z00_1639, BNIL);
													}
													BgL_arg1300z00_1632 =
														MAKE_YOUNG_PAIR(BgL_arg1301z00_1633,
														BgL_arg1303z00_1634);
												}
												BgL_arg1298z00_1630 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
													BgL_arg1300z00_1632);
											}
											BgL_arg1299z00_1631 = MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
											BgL_arg1292z00_1626 =
												MAKE_YOUNG_PAIR(BgL_arg1298z00_1630,
												BgL_arg1299z00_1631);
										}
										BgL_arg1286z00_1620 =
											MAKE_YOUNG_PAIR(BgL_arg1291z00_1625, BgL_arg1292z00_1626);
									}
									BgL_arg1284z00_1618 =
										MAKE_YOUNG_PAIR(BgL_arg1285z00_1619, BgL_arg1286z00_1620);
								}
								BgL_mainzd2bodyzd2_1592 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
									BgL_arg1284z00_1618);
					}}
					{	/* BackEnd/c_main.scm 39 */
						BgL_nodez00_bglt BgL_nodez00_1593;

						{	/* BackEnd/c_main.scm 56 */
							BgL_nodez00_bglt BgL_nodez00_1595;

							BgL_nodez00_1595 =
								BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_mainzd2bodyzd2_1592,
								BgL_argsz00_1591, BFALSE, CNST_TABLE_REF(((long) 10)));
							BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nodez00_1595);
							BgL_nodez00_1593 = BgL_nodez00_1595;
						}
						{	/* BackEnd/c_main.scm 56 */
							BgL_globalz00_bglt BgL_bigloozd2mainzd2_1594;

							BgL_bigloozd2mainzd2_1594 =
								BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2(CNST_TABLE_REF((
										(long) 11)), CNST_TABLE_REF(((long) 12)), BgL_argsz00_1591,
								BGl_za2moduleza2z00zzmodule_modulez00,
								CNST_TABLE_REF(((long) 13)), CNST_TABLE_REF(((long) 14)),
								CNST_TABLE_REF(((long) 15)), ((obj_t) BgL_nodez00_1593));
							{	/* BackEnd/c_main.scm 59 */

								{	/* BackEnd/c_main.scm 67 */
									obj_t BgL_vz00_1838;

									BgL_vz00_1838 = CNST_TABLE_REF(((long) 16));
									((((BgL_globalz00_bglt) COBJECT(BgL_bigloozd2mainzd2_1594))->
											BgL_importz00) = ((obj_t) BgL_vz00_1838), BUNSPEC);
								}
								((((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_bigloozd2mainzd2_1594)))->
										BgL_namez00) =
									((obj_t) BGl_string1482z00zzbackend_c_mainz00), BUNSPEC);
								return ((obj_t) BgL_bigloozd2mainzd2_1594);
							}
						}
					}
				}
			}
		}

	}



/* &make-bigloo-main */
	obj_t BGl_z62makezd2bigloozd2mainz62zzbackend_c_mainz00(obj_t BgL_envz00_1840)
	{
		{	/* BackEnd/c_main.scm 37 */
			return BGl_makezd2bigloozd2mainz00zzbackend_c_mainz00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbackend_c_mainz00()
	{
		{	/* BackEnd/c_main.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_c_mainz00()
	{
		{	/* BackEnd/c_main.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_c_mainz00()
	{
		{	/* BackEnd/c_main.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_c_mainz00()
	{
		{	/* BackEnd/c_main.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1483z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1483z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1483z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1483z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1483z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string1483z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1483z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1483z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1483z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1483z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1483z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(((long) 44601778),
				BSTRING_TO_STRING(BGl_string1483z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string1483z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1483z00zzbackend_c_mainz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					364917924), BSTRING_TO_STRING(BGl_string1483z00zzbackend_c_mainz00));
			return BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long)
					395790731), BSTRING_TO_STRING(BGl_string1483z00zzbackend_c_mainz00));
		}

	}

#ifdef __cplusplus
}
#endif
