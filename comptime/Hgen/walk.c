/*===========================================================================*/
/*   (Hgen/walk.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Hgen/walk.scm) */
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

	typedef struct BgL_tclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		struct BgL_globalz00_bgl *BgL_holderz00;
		obj_t BgL_wideningz00;
		long BgL_depthz00;
		bool_t BgL_finalzf3zf3;
		obj_t BgL_constructorz00;
		obj_t BgL_virtualzd2slotszd2numberz00;
		bool_t BgL_abstractzf3zf3;
		obj_t BgL_widezd2typezd2;
		obj_t BgL_subclassesz00;
	}                *BgL_tclassz00_bglt;

	typedef struct BgL_valuez00_bgl
	{
		header_t header;
		obj_t widening;
	}               *BgL_valuez00_bglt;

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


	extern obj_t BGl_stopzd2emissionz12zc0zzbackend_c_emitz00();
	static obj_t BGl_objectzd2initzd2zzhgen_walkz00();
	static obj_t BGl_z62hgenzd2walkzb0zzhgen_walkz00(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_emitzd2classzd2typesz00zzbackend_c_prototypez00(obj_t,
		obj_t);
	extern obj_t BGl_startzd2emissionz12zc0zzbackend_c_emitz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzhgen_walkz00();
	BGL_EXPORTED_DECL obj_t BGl_hgenzd2walkzd2zzhgen_walkz00();
	static obj_t BGl_z62zc3z04anonymousza31272ze3ze5zzhgen_walkz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzhgen_walkz00();
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_getzd2classzd2listz00zzobject_classz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzhgen_walkz00 = BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	extern obj_t BGl_za2czd2portza2zd2zzbackend_c_emitz00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzhgen_walkz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzhgen_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzhgen_walkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzhgen_walkz00();
	extern obj_t BGl_emitzd2headerzd2zzbackend_c_emitz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzhgen_walkz00();
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1389z00zzhgen_walkz00,
		BgL_bgl_za762za7c3za704anonymo1398za7,
		BGl_z62zc3z04anonymousza31272ze3ze5zzhgen_walkz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_hgenzd2walkzd2envz00zzhgen_walkz00,
		BgL_bgl_za762hgenza7d2walkza7b1399za7, BGl_z62hgenzd2walkzb0zzhgen_walkz00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1387z00zzhgen_walkz00,
		BgL_bgl_string1387za700za7za7h1400za7, "C headers generation", 20);
	      DEFINE_STRING(BGl_string1388z00zzhgen_walkz00,
		BgL_bgl_string1388za700za7za7h1401za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1390z00zzhgen_walkz00,
		BgL_bgl_string1390za700za7za7h1402za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1391z00zzhgen_walkz00,
		BgL_bgl_string1391za700za7za7h1403za7, ".h", 2);
	      DEFINE_STRING(BGl_string1392z00zzhgen_walkz00,
		BgL_bgl_string1392za700za7za7h1404za7, "hgen_walk", 9);
	      DEFINE_STRING(BGl_string1393z00zzhgen_walkz00,
		BgL_bgl_string1393za700za7za7h1405za7,
		"pass-started ((lambda () (start-emission! \".h\"))) ", 50);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzhgen_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzhgen_walkz00(long
		BgL_checksumz00_1816, char *BgL_fromz00_1817)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzhgen_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzhgen_walkz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzhgen_walkz00();
					BGl_libraryzd2moduleszd2initz00zzhgen_walkz00();
					BGl_cnstzd2initzd2zzhgen_walkz00();
					BGl_importedzd2moduleszd2initz00zzhgen_walkz00();
					return BGl_methodzd2initzd2zzhgen_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzhgen_walkz00()
	{
		{	/* Hgen/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "hgen_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "hgen_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"hgen_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"hgen_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"hgen_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzhgen_walkz00()
	{
		{	/* Hgen/walk.scm 15 */
			{	/* Hgen/walk.scm 15 */
				obj_t BgL_cportz00_1803;

				{	/* Hgen/walk.scm 15 */
					obj_t BgL_stringz00_1811;

					BgL_stringz00_1811 = BGl_string1393z00zzhgen_walkz00;
					{	/* Hgen/walk.scm 15 */
						obj_t BgL_startz00_1812;

						BgL_startz00_1812 = BINT(((long) 0));
						{	/* Hgen/walk.scm 15 */
							obj_t BgL_endz00_1813;

							BgL_endz00_1813 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1811)));
							{	/* Hgen/walk.scm 15 */

								BgL_cportz00_1803 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1811, BgL_startz00_1812, BgL_endz00_1813);
				}}}}
				{
					long BgL_iz00_1804;

					BgL_iz00_1804 = ((long) 1);
				BgL_loopz00_1805:
					if ((BgL_iz00_1804 == ((long) -1)))
						{	/* Hgen/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Hgen/walk.scm 15 */
							{	/* Hgen/walk.scm 15 */
								obj_t BgL_arg1396z00_1807;

								{	/* Hgen/walk.scm 15 */

									{	/* Hgen/walk.scm 15 */
										obj_t BgL_locationz00_1809;

										BgL_locationz00_1809 = BBOOL(((bool_t) 0));
										{	/* Hgen/walk.scm 15 */

											BgL_arg1396z00_1807 =
												BGl_readz00zz__readerz00(BgL_cportz00_1803,
												BgL_locationz00_1809);
										}
									}
								}
								{	/* Hgen/walk.scm 15 */
									int BgL_tmpz00_1840;

									BgL_tmpz00_1840 = (int) (BgL_iz00_1804);
									CNST_TABLE_SET(BgL_tmpz00_1840, BgL_arg1396z00_1807);
							}}
							{	/* Hgen/walk.scm 15 */
								int BgL_auxz00_1810;

								BgL_auxz00_1810 = (int) ((BgL_iz00_1804 - ((long) 1)));
								{
									long BgL_iz00_1845;

									BgL_iz00_1845 = (long) (BgL_auxz00_1810);
									BgL_iz00_1804 = BgL_iz00_1845;
									goto BgL_loopz00_1805;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzhgen_walkz00()
	{
		{	/* Hgen/walk.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* hgen-walk */
	BGL_EXPORTED_DEF obj_t BGl_hgenzd2walkzd2zzhgen_walkz00()
	{
		{	/* Hgen/walk.scm 30 */
			{	/* Hgen/walk.scm 31 */
				obj_t BgL_list1248z00_1558;

				{	/* Hgen/walk.scm 31 */
					obj_t BgL_arg1250z00_1559;

					{	/* Hgen/walk.scm 31 */
						obj_t BgL_arg1252z00_1560;

						BgL_arg1252z00_1560 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1250z00_1559 =
							MAKE_YOUNG_PAIR(BGl_string1387z00zzhgen_walkz00,
							BgL_arg1252z00_1560);
					}
					BgL_list1248z00_1558 =
						MAKE_YOUNG_PAIR(BGl_string1388z00zzhgen_walkz00,
						BgL_arg1250z00_1559);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1248z00_1558);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1387z00zzhgen_walkz00;
			{	/* Hgen/walk.scm 31 */
				obj_t BgL_g1108z00_1561;
				obj_t BgL_g1109z00_1562;

				{	/* Hgen/walk.scm 31 */
					obj_t BgL_list1271z00_1576;

					BgL_list1271z00_1576 =
						MAKE_YOUNG_PAIR(BGl_proc1389z00zzhgen_walkz00, BNIL);
					BgL_g1108z00_1561 = BgL_list1271z00_1576;
				}
				BgL_g1109z00_1562 = CNST_TABLE_REF(((long) 0));
				{
					obj_t BgL_hooksz00_1564;
					obj_t BgL_hnamesz00_1565;

					BgL_hooksz00_1564 = BgL_g1108z00_1561;
					BgL_hnamesz00_1565 = BgL_g1109z00_1562;
				BgL_zc3z04anonymousza31253ze3z87_1566:
					if (NULLP(BgL_hooksz00_1564))
						{	/* Hgen/walk.scm 31 */
							CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Hgen/walk.scm 31 */
							bool_t BgL_test1409z00_1860;

							{	/* Hgen/walk.scm 31 */
								obj_t BgL_fun1269z00_1573;

								BgL_fun1269z00_1573 = CAR(((obj_t) BgL_hooksz00_1564));
								BgL_test1409z00_1860 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1269z00_1573)
									(BgL_fun1269z00_1573, BEOA));
							}
							if (BgL_test1409z00_1860)
								{	/* Hgen/walk.scm 31 */
									obj_t BgL_arg1258z00_1570;
									obj_t BgL_arg1263z00_1571;

									BgL_arg1258z00_1570 = CDR(((obj_t) BgL_hooksz00_1564));
									BgL_arg1263z00_1571 = CDR(((obj_t) BgL_hnamesz00_1565));
									{
										obj_t BgL_hnamesz00_1872;
										obj_t BgL_hooksz00_1871;

										BgL_hooksz00_1871 = BgL_arg1258z00_1570;
										BgL_hnamesz00_1872 = BgL_arg1263z00_1571;
										BgL_hnamesz00_1565 = BgL_hnamesz00_1872;
										BgL_hooksz00_1564 = BgL_hooksz00_1871;
										goto BgL_zc3z04anonymousza31253ze3z87_1566;
									}
								}
							else
								{	/* Hgen/walk.scm 31 */
									obj_t BgL_arg1268z00_1572;

									BgL_arg1268z00_1572 = CAR(((obj_t) BgL_hnamesz00_1565));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1387z00zzhgen_walkz00,
										BGl_string1390z00zzhgen_walkz00, BgL_arg1268z00_1572);
								}
						}
				}
			}
			BGl_emitzd2headerzd2zzbackend_c_emitz00();
			{	/* Hgen/walk.scm 36 */
				obj_t BgL_clistz00_1579;

				{	/* Hgen/walk.scm 36 */
					obj_t BgL_hook1243z00_1580;

					BgL_hook1243z00_1580 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
					{	/* Hgen/walk.scm 40 */
						obj_t BgL_g1244z00_1581;

						BgL_g1244z00_1581 = BGl_getzd2classzd2listz00zzobject_classz00();
						{
							obj_t BgL_l1240z00_1583;
							obj_t BgL_h1241z00_1584;

							BgL_l1240z00_1583 = BgL_g1244z00_1581;
							BgL_h1241z00_1584 = BgL_hook1243z00_1580;
						BgL_zc3z04anonymousza31273ze3z87_1585:
							if (NULLP(BgL_l1240z00_1583))
								{	/* Hgen/walk.scm 40 */
									BgL_clistz00_1579 = CDR(BgL_hook1243z00_1580);
								}
							else
								{	/* Hgen/walk.scm 40 */
									bool_t BgL_test1411z00_1882;

									{	/* Hgen/walk.scm 37 */
										obj_t BgL_cz00_1596;

										BgL_cz00_1596 = CAR(((obj_t) BgL_l1240z00_1583));
										if (BGl_isazf3zf3zz__objectz00(BgL_cz00_1596,
												BGl_tclassz00zzobject_classz00))
											{	/* Hgen/walk.scm 38 */
												obj_t BgL_arg1284z00_1598;

												{	/* Hgen/walk.scm 38 */
													BgL_globalz00_bglt BgL_arg1285z00_1599;

													{
														BgL_tclassz00_bglt BgL_auxz00_1887;

														{
															obj_t BgL_auxz00_1888;

															{	/* Hgen/walk.scm 38 */
																BgL_objectz00_bglt BgL_tmpz00_1889;

																BgL_tmpz00_1889 =
																	((BgL_objectz00_bglt)
																	((BgL_typez00_bglt) BgL_cz00_1596));
																BgL_auxz00_1888 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_1889);
															}
															BgL_auxz00_1887 =
																((BgL_tclassz00_bglt) BgL_auxz00_1888);
														}
														BgL_arg1285z00_1599 =
															(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_1887))->
															BgL_holderz00);
													}
													BgL_arg1284z00_1598 =
														(((BgL_globalz00_bglt)
															COBJECT(BgL_arg1285z00_1599))->BgL_modulez00);
												}
												BgL_test1411z00_1882 =
													(BgL_arg1284z00_1598 ==
													BGl_za2moduleza2z00zzmodule_modulez00);
											}
										else
											{	/* Hgen/walk.scm 37 */
												BgL_test1411z00_1882 = ((bool_t) 0);
											}
									}
									if (BgL_test1411z00_1882)
										{	/* Hgen/walk.scm 40 */
											obj_t BgL_nh1242z00_1592;

											{	/* Hgen/walk.scm 40 */
												obj_t BgL_arg1281z00_1594;

												BgL_arg1281z00_1594 = CAR(((obj_t) BgL_l1240z00_1583));
												{	/* Hgen/walk.scm 40 */
													obj_t BgL_res1386z00_1795;

													BgL_res1386z00_1795 =
														MAKE_YOUNG_PAIR(BgL_arg1281z00_1594, BNIL);
													BgL_nh1242z00_1592 = BgL_res1386z00_1795;
												}
											}
											SET_CDR(BgL_h1241z00_1584, BgL_nh1242z00_1592);
											{	/* Hgen/walk.scm 40 */
												obj_t BgL_arg1280z00_1593;

												BgL_arg1280z00_1593 = CDR(((obj_t) BgL_l1240z00_1583));
												{
													obj_t BgL_h1241z00_1904;
													obj_t BgL_l1240z00_1903;

													BgL_l1240z00_1903 = BgL_arg1280z00_1593;
													BgL_h1241z00_1904 = BgL_nh1242z00_1592;
													BgL_h1241z00_1584 = BgL_h1241z00_1904;
													BgL_l1240z00_1583 = BgL_l1240z00_1903;
													goto BgL_zc3z04anonymousza31273ze3z87_1585;
												}
											}
										}
									else
										{	/* Hgen/walk.scm 40 */
											obj_t BgL_arg1282z00_1595;

											BgL_arg1282z00_1595 = CDR(((obj_t) BgL_l1240z00_1583));
											{
												obj_t BgL_l1240z00_1907;

												BgL_l1240z00_1907 = BgL_arg1282z00_1595;
												BgL_l1240z00_1583 = BgL_l1240z00_1907;
												goto BgL_zc3z04anonymousza31273ze3z87_1585;
											}
										}
								}
						}
					}
				}
				BGl_emitzd2classzd2typesz00zzbackend_c_prototypez00(BgL_clistz00_1579,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
			}
			return BGl_stopzd2emissionz12zc0zzbackend_c_emitz00();
		}

	}



/* &hgen-walk */
	obj_t BGl_z62hgenzd2walkzb0zzhgen_walkz00(obj_t BgL_envz00_1801)
	{
		{	/* Hgen/walk.scm 30 */
			return BGl_hgenzd2walkzd2zzhgen_walkz00();
		}

	}



/* &<@anonymous:1272> */
	obj_t BGl_z62zc3z04anonymousza31272ze3ze5zzhgen_walkz00(obj_t BgL_envz00_1802)
	{
		{	/* Hgen/walk.scm 31 */
			return
				BGl_startzd2emissionz12zc0zzbackend_c_emitz00
				(BGl_string1391z00zzhgen_walkz00);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzhgen_walkz00()
	{
		{	/* Hgen/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzhgen_walkz00()
	{
		{	/* Hgen/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzhgen_walkz00()
	{
		{	/* Hgen/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzhgen_walkz00()
	{
		{	/* Hgen/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1392z00zzhgen_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1392z00zzhgen_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1392z00zzhgen_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1392z00zzhgen_walkz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1392z00zzhgen_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1392z00zzhgen_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1392z00zzhgen_walkz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1392z00zzhgen_walkz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(((long) 349615937),
				BSTRING_TO_STRING(BGl_string1392z00zzhgen_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					364917924), BSTRING_TO_STRING(BGl_string1392z00zzhgen_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
