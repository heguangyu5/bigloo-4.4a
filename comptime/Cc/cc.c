/*===========================================================================*/
/*   (Cc/cc.scm)                                                             */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cc/cc.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_win32zd2cczd2zzcc_ccz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_IMPORT obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzcc_ccz00();
	BGL_IMPORT obj_t BGl_dirnamez00zz__osz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzcc_ccz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcc_ccz00();
	extern obj_t BGl_za2ccza2z00zzengine_paramz00;
	extern obj_t BGl_unixzd2filenamezd2zzcc_execz00(obj_t);
	extern obj_t BGl_za2cczd2ozd2optionza2z00zzengine_paramz00;
	static obj_t BGl_z62ccz62zzcc_ccz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2cflagsza2z00zzengine_paramz00;
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00;
	static obj_t BGl_gczd2rootszd2initz00zzcc_ccz00();
	extern obj_t BGl_za2cczd2moveza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t bigloo_mangle(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_za2czd2debugzd2optionza2z00zzengine_paramz00;
	static obj_t BGl_loopze70ze7zzcc_ccz00(obj_t);
	static obj_t BGl_loopze71ze7zzcc_ccz00(obj_t);
	static obj_t BGl_loopze72ze7zzcc_ccz00(obj_t);
	extern obj_t BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00;
	extern obj_t BGl_stringzd2splitzd2charz00zztools_miscz00(obj_t, obj_t);
	extern obj_t BGl_za2czd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcc_ccz00 = BUNSPEC;
	extern obj_t BGl_za2cczd2optionsza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_md5sumz00zz__md5z00(obj_t);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcc_ccz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_basenamez00zz__osz00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_execz00zzcc_execz00(obj_t, bool_t, obj_t);
	static obj_t BGl_unixzd2cczd2zzcc_ccz00(obj_t, obj_t, bool_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcc_ccz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_execz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__md5z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__processz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2bigloozd2argsza2zd2zzengine_paramz00;
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	static obj_t BGl_cnstzd2initzd2zzcc_ccz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcc_ccz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcc_ccz00();
	static obj_t BGl_zc3z04anonymousza31475ze3ze70z60zzcc_ccz00(obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	BGL_IMPORT obj_t BGl_pwdz00zz__osz00();
	static obj_t BGl_commandzd2linezd2ze3stringze3zzcc_ccz00(obj_t);
	BGL_IMPORT bool_t bgl_directoryp(char *);
	BGL_EXPORTED_DECL obj_t BGl_ccz00zzcc_ccz00(obj_t, obj_t, bool_t);
	BGL_IMPORT obj_t BGl_runzd2processzd2zz__processz00(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_mingwzd2cczd2zzcc_ccz00(obj_t, obj_t, bool_t);
	static obj_t __cnst[7];


	   
		 
		DEFINE_STRING(BGl_string1668z00zzcc_ccz00,
		BgL_bgl_string1668za700za7za7c1698za7, "unix", 4);
	      DEFINE_STRING(BGl_string1669z00zzcc_ccz00,
		BgL_bgl_string1669za700za7za7c1699za7, "win32", 5);
	      DEFINE_STRING(BGl_string1670z00zzcc_ccz00,
		BgL_bgl_string1670za700za7za7c1700za7, "mingw", 5);
	      DEFINE_STRING(BGl_string1671z00zzcc_ccz00,
		BgL_bgl_string1671za700za7za7c1701za7, "cc", 2);
	      DEFINE_STRING(BGl_string1672z00zzcc_ccz00,
		BgL_bgl_string1672za700za7za7c1702za7, "Unknown os", 10);
	      DEFINE_STRING(BGl_string1673z00zzcc_ccz00,
		BgL_bgl_string1673za700za7za7c1703za7, "~a", 2);
	      DEFINE_STRING(BGl_string1674z00zzcc_ccz00,
		BgL_bgl_string1674za700za7za7c1704za7, ")", 1);
	      DEFINE_STRING(BGl_string1675z00zzcc_ccz00,
		BgL_bgl_string1675za700za7za7c1705za7, "   . cc (", 9);
	      DEFINE_STRING(BGl_string1676z00zzcc_ccz00,
		BgL_bgl_string1676za700za7za7c1706za7, ".", 1);
	      DEFINE_STRING(BGl_string1677z00zzcc_ccz00,
		BgL_bgl_string1677za700za7za7c1707za7, "", 0);
	      DEFINE_STRING(BGl_string1678z00zzcc_ccz00,
		BgL_bgl_string1678za700za7za7c1708za7, "~( )", 4);
	      DEFINE_STRING(BGl_string1679z00zzcc_ccz00,
		BgL_bgl_string1679za700za7za7c1709za7, " ", 1);
	      DEFINE_STRING(BGl_string1680z00zzcc_ccz00,
		BgL_bgl_string1680za700za7za7c1710za7, ".c", 2);
	      DEFINE_STRING(BGl_string1681z00zzcc_ccz00,
		BgL_bgl_string1681za700za7za7c1711za7, " -I. ", 5);
	      DEFINE_STRING(BGl_string1682z00zzcc_ccz00,
		BgL_bgl_string1682za700za7za7c1712za7, " -c ", 4);
	      DEFINE_STRING(BGl_string1683z00zzcc_ccz00,
		BgL_bgl_string1683za700za7za7c1713za7, "&& ", 3);
	      DEFINE_STRING(BGl_string1684z00zzcc_ccz00,
		BgL_bgl_string1684za700za7za7c1714za7, " 2>&1 >/dev/null ", 17);
	      DEFINE_STRING(BGl_string1685z00zzcc_ccz00,
		BgL_bgl_string1685za700za7za7c1715za7, "      [", 7);
	      DEFINE_STRING(BGl_string1686z00zzcc_ccz00,
		BgL_bgl_string1686za700za7za7c1716za7, "can't process cc on stdout", 26);
	      DEFINE_STRING(BGl_string1687z00zzcc_ccz00,
		BgL_bgl_string1687za700za7za7c1717za7, "-I", 2);
	      DEFINE_STRING(BGl_string1688z00zzcc_ccz00,
		BgL_bgl_string1688za700za7za7c1718za7, ".c ", 3);
	      DEFINE_STRING(BGl_string1689z00zzcc_ccz00,
		BgL_bgl_string1689za700za7za7c1719za7, "      ", 6);
	      DEFINE_STRING(BGl_string1690z00zzcc_ccz00,
		BgL_bgl_string1690za700za7za7c1720za7, "cc_cc", 5);
	      DEFINE_STRING(BGl_string1691z00zzcc_ccz00,
		BgL_bgl_string1691za700za7za7c1721za7,
		"(:wait #t) (\"-c\") (\"-I.\") shell-mv shell-rm c-nan-flag c-pic-flag ",
		66);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cczd2envzd2zzcc_ccz00,
		BgL_bgl_za762ccza762za7za7cc_ccza71722za7, BGl_z62ccz62zzcc_ccz00, 0L,
		BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcc_ccz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcc_ccz00(long
		BgL_checksumz00_541, char *BgL_fromz00_542)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcc_ccz00))
				{
					BGl_requirezd2initializa7ationz75zzcc_ccz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcc_ccz00();
					BGl_libraryzd2moduleszd2initz00zzcc_ccz00();
					BGl_cnstzd2initzd2zzcc_ccz00();
					BGl_importedzd2moduleszd2initz00zzcc_ccz00();
					return BGl_methodzd2initzd2zzcc_ccz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcc_ccz00()
	{
		{	/* Cc/cc.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cc_cc");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cc_cc");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"cc_cc");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "cc_cc");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cc_cc");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "cc_cc");
			BGl_modulezd2initializa7ationz75zz__md5z00(((long) 0), "cc_cc");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cc_cc");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cc_cc");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cc_cc");
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 0), "cc_cc");
			BGl_modulezd2initializa7ationz75zz__processz00(((long) 0), "cc_cc");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"cc_cc");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"cc_cc");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"cc_cc");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cc_cc");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcc_ccz00()
	{
		{	/* Cc/cc.scm 15 */
			{	/* Cc/cc.scm 15 */
				obj_t BgL_cportz00_526;

				{	/* Cc/cc.scm 15 */
					obj_t BgL_stringz00_534;

					BgL_stringz00_534 = BGl_string1691z00zzcc_ccz00;
					{	/* Cc/cc.scm 15 */
						obj_t BgL_startz00_535;

						BgL_startz00_535 = BINT(((long) 0));
						{	/* Cc/cc.scm 15 */
							obj_t BgL_endz00_536;

							BgL_endz00_536 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_534)));
							{	/* Cc/cc.scm 15 */

								BgL_cportz00_526 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_534, BgL_startz00_535, BgL_endz00_536);
				}}}}
				{
					long BgL_iz00_527;

					BgL_iz00_527 = ((long) 6);
				BgL_loopz00_528:
					if ((BgL_iz00_527 == ((long) -1)))
						{	/* Cc/cc.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cc/cc.scm 15 */
							{	/* Cc/cc.scm 15 */
								obj_t BgL_arg1695z00_530;

								{	/* Cc/cc.scm 15 */

									{	/* Cc/cc.scm 15 */
										obj_t BgL_locationz00_532;

										BgL_locationz00_532 = BBOOL(((bool_t) 0));
										{	/* Cc/cc.scm 15 */

											BgL_arg1695z00_530 =
												BGl_readz00zz__readerz00(BgL_cportz00_526,
												BgL_locationz00_532);
										}
									}
								}
								{	/* Cc/cc.scm 15 */
									int BgL_tmpz00_576;

									BgL_tmpz00_576 = (int) (BgL_iz00_527);
									CNST_TABLE_SET(BgL_tmpz00_576, BgL_arg1695z00_530);
							}}
							{	/* Cc/cc.scm 15 */
								int BgL_auxz00_533;

								BgL_auxz00_533 = (int) ((BgL_iz00_527 - ((long) 1)));
								{
									long BgL_iz00_581;

									BgL_iz00_581 = (long) (BgL_auxz00_533);
									BgL_iz00_527 = BgL_iz00_581;
									goto BgL_loopz00_528;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcc_ccz00()
	{
		{	/* Cc/cc.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzcc_ccz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_24;

				BgL_headz00_24 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_25;
					obj_t BgL_tailz00_26;

					BgL_prevz00_25 = BgL_headz00_24;
					BgL_tailz00_26 = BgL_l1z00_1;
				BgL_loopz00_27:
					if (PAIRP(BgL_tailz00_26))
						{
							obj_t BgL_newzd2prevzd2_29;

							BgL_newzd2prevzd2_29 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_26), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_25, BgL_newzd2prevzd2_29);
							{
								obj_t BgL_tailz00_591;
								obj_t BgL_prevz00_590;

								BgL_prevz00_590 = BgL_newzd2prevzd2_29;
								BgL_tailz00_591 = CDR(BgL_tailz00_26);
								BgL_tailz00_26 = BgL_tailz00_591;
								BgL_prevz00_25 = BgL_prevz00_590;
								goto BgL_loopz00_27;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_24);
				}
			}
		}

	}



/* cc */
	BGL_EXPORTED_DEF obj_t BGl_ccz00zzcc_ccz00(obj_t BgL_namez00_3,
		obj_t BgL_onamez00_4, bool_t BgL_needzd2tozd2returnz00_5)
	{
		{	/* Cc/cc.scm 27 */
			{	/* Cc/cc.scm 29 */
				bool_t BgL_test1727z00_594;

				{	/* Cc/cc.scm 29 */
					bool_t BgL_res1598z00_320;

					{	/* Cc/cc.scm 29 */
						obj_t BgL_string1z00_305;

						BgL_string1z00_305 = string_to_bstring(OS_CLASS);
						{	/* Cc/cc.scm 29 */
							long BgL_l1z00_307;

							BgL_l1z00_307 = STRING_LENGTH(BgL_string1z00_305);
							if ((BgL_l1z00_307 == ((long) 4)))
								{	/* Cc/cc.scm 29 */
									int BgL_arg1267z00_310;

									{	/* Cc/cc.scm 29 */
										char *BgL_auxz00_601;
										char *BgL_tmpz00_599;

										BgL_auxz00_601 =
											BSTRING_TO_STRING(BGl_string1668z00zzcc_ccz00);
										BgL_tmpz00_599 = BSTRING_TO_STRING(BgL_string1z00_305);
										BgL_arg1267z00_310 =
											memcmp(BgL_tmpz00_599, BgL_auxz00_601, BgL_l1z00_307);
									}
									BgL_res1598z00_320 =
										((long) (BgL_arg1267z00_310) == ((long) 0));
								}
							else
								{	/* Cc/cc.scm 29 */
									BgL_res1598z00_320 = ((bool_t) 0);
								}
						}
					}
					BgL_test1727z00_594 = BgL_res1598z00_320;
				}
				if (BgL_test1727z00_594)
					{	/* Cc/cc.scm 29 */
						return
							BGl_unixzd2cczd2zzcc_ccz00(BgL_namez00_3, BgL_onamez00_4,
							BgL_needzd2tozd2returnz00_5);
					}
				else
					{	/* Cc/cc.scm 31 */
						bool_t BgL_test1730z00_607;

						{	/* Cc/cc.scm 31 */
							bool_t BgL_res1603z00_336;

							{	/* Cc/cc.scm 31 */
								obj_t BgL_string1z00_321;

								BgL_string1z00_321 = string_to_bstring(OS_CLASS);
								{	/* Cc/cc.scm 31 */
									long BgL_l1z00_323;

									BgL_l1z00_323 = STRING_LENGTH(BgL_string1z00_321);
									if ((BgL_l1z00_323 == ((long) 5)))
										{	/* Cc/cc.scm 31 */
											int BgL_arg1267z00_326;

											{	/* Cc/cc.scm 31 */
												char *BgL_auxz00_614;
												char *BgL_tmpz00_612;

												BgL_auxz00_614 =
													BSTRING_TO_STRING(BGl_string1669z00zzcc_ccz00);
												BgL_tmpz00_612 = BSTRING_TO_STRING(BgL_string1z00_321);
												BgL_arg1267z00_326 =
													memcmp(BgL_tmpz00_612, BgL_auxz00_614, BgL_l1z00_323);
											}
											BgL_res1603z00_336 =
												((long) (BgL_arg1267z00_326) == ((long) 0));
										}
									else
										{	/* Cc/cc.scm 31 */
											BgL_res1603z00_336 = ((bool_t) 0);
										}
								}
							}
							BgL_test1730z00_607 = BgL_res1603z00_336;
						}
						if (BgL_test1730z00_607)
							{	/* Cc/cc.scm 31 */
								return
									BGl_win32zd2cczd2zzcc_ccz00(BgL_namez00_3, BgL_onamez00_4);
							}
						else
							{	/* Cc/cc.scm 33 */
								bool_t BgL_test1732z00_620;

								{	/* Cc/cc.scm 33 */
									bool_t BgL_res1608z00_352;

									{	/* Cc/cc.scm 33 */
										obj_t BgL_string1z00_337;

										BgL_string1z00_337 = string_to_bstring(OS_CLASS);
										{	/* Cc/cc.scm 33 */
											long BgL_l1z00_339;

											BgL_l1z00_339 = STRING_LENGTH(BgL_string1z00_337);
											if ((BgL_l1z00_339 == ((long) 5)))
												{	/* Cc/cc.scm 33 */
													int BgL_arg1267z00_342;

													{	/* Cc/cc.scm 33 */
														char *BgL_auxz00_627;
														char *BgL_tmpz00_625;

														BgL_auxz00_627 =
															BSTRING_TO_STRING(BGl_string1670z00zzcc_ccz00);
														BgL_tmpz00_625 =
															BSTRING_TO_STRING(BgL_string1z00_337);
														BgL_arg1267z00_342 =
															memcmp(BgL_tmpz00_625, BgL_auxz00_627,
															BgL_l1z00_339);
													}
													BgL_res1608z00_352 =
														((long) (BgL_arg1267z00_342) == ((long) 0));
												}
											else
												{	/* Cc/cc.scm 33 */
													BgL_res1608z00_352 = ((bool_t) 0);
												}
										}
									}
									BgL_test1732z00_620 = BgL_res1608z00_352;
								}
								if (BgL_test1732z00_620)
									{	/* Cc/cc.scm 33 */
										return
											BGl_mingwzd2cczd2zzcc_ccz00(BgL_namez00_3, BgL_onamez00_4,
											BgL_needzd2tozd2returnz00_5);
									}
								else
									{	/* Cc/cc.scm 33 */
										return
											BGl_userzd2errorzd2zztools_errorz00
											(BGl_string1671z00zzcc_ccz00, BGl_string1672z00zzcc_ccz00,
											string_to_bstring(OS_CLASS), BNIL);
									}
							}
					}
			}
		}

	}



/* &cc */
	obj_t BGl_z62ccz62zzcc_ccz00(obj_t BgL_envz00_522, obj_t BgL_namez00_523,
		obj_t BgL_onamez00_524, obj_t BgL_needzd2tozd2returnz00_525)
	{
		{	/* Cc/cc.scm 27 */
			return
				BGl_ccz00zzcc_ccz00(BgL_namez00_523, BgL_onamez00_524,
				CBOOL(BgL_needzd2tozd2returnz00_525));
		}

	}



/* command-line->string */
	obj_t BGl_commandzd2linezd2ze3stringze3zzcc_ccz00(obj_t BgL_lz00_6)
	{
		{	/* Cc/cc.scm 41 */
			{	/* Cc/cc.scm 42 */
				obj_t BgL_arg1095z00_43;

				{	/* Cc/cc.scm 42 */
					obj_t BgL_list1096z00_44;

					BgL_list1096z00_44 = MAKE_YOUNG_PAIR(BgL_lz00_6, BNIL);
					BgL_arg1095z00_43 =
						BGl_formatz00zz__r4_output_6_10_3z00(BGl_string1673z00zzcc_ccz00,
						BgL_list1096z00_44);
				}
				return BGl_md5sumz00zz__md5z00(BgL_arg1095z00_43);
			}
		}

	}



/* unix-cc */
	obj_t BGl_unixzd2cczd2zzcc_ccz00(obj_t BgL_namez00_7, obj_t BgL_onamez00_8,
		bool_t BgL_needzd2tozd2returnz00_9)
	{
		{	/* Cc/cc.scm 47 */
			{	/* Cc/cc.scm 48 */
				obj_t BgL_list1097z00_45;

				{	/* Cc/cc.scm 48 */
					obj_t BgL_arg1099z00_46;

					{	/* Cc/cc.scm 48 */
						obj_t BgL_arg1100z00_47;

						{	/* Cc/cc.scm 48 */
							obj_t BgL_arg1101z00_48;

							BgL_arg1101z00_48 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
							BgL_arg1100z00_47 =
								MAKE_YOUNG_PAIR(BGl_string1674z00zzcc_ccz00, BgL_arg1101z00_48);
						}
						BgL_arg1099z00_46 =
							MAKE_YOUNG_PAIR(BGl_za2ccza2z00zzengine_paramz00,
							BgL_arg1100z00_47);
					}
					BgL_list1097z00_45 =
						MAKE_YOUNG_PAIR(BGl_string1675z00zzcc_ccz00, BgL_arg1099z00_46);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1097z00_45);
			}
			if (STRINGP(BgL_namez00_7))
				{	/* Cc/cc.scm 53 */
					obj_t BgL_objnamez00_50;

					if (STRINGP(BgL_onamez00_8))
						{	/* Cc/cc.scm 53 */
							BgL_objnamez00_50 = BgL_onamez00_8;
						}
					else
						{	/* Cc/cc.scm 53 */
							BgL_objnamez00_50 = BgL_namez00_7;
						}
					{	/* Cc/cc.scm 53 */
						obj_t BgL_basenamez00_51;

						BgL_basenamez00_51 = BGl_basenamez00zz__osz00(BgL_objnamez00_50);
						{	/* Cc/cc.scm 54 */
							bool_t BgL_needzd2ozd2_52;

							{	/* Cc/cc.scm 55 */
								bool_t BgL_test1739z00_652;

								{	/* Cc/cc.scm 55 */
									bool_t BgL_res1615z00_370;

									{	/* Cc/cc.scm 55 */
										long BgL_l1z00_357;

										BgL_l1z00_357 = STRING_LENGTH(BgL_basenamez00_51);
										if ((BgL_l1z00_357 == STRING_LENGTH(BgL_objnamez00_50)))
											{	/* Cc/cc.scm 55 */
												int BgL_arg1267z00_360;

												{	/* Cc/cc.scm 55 */
													char *BgL_auxz00_659;
													char *BgL_tmpz00_657;

													BgL_auxz00_659 = BSTRING_TO_STRING(BgL_objnamez00_50);
													BgL_tmpz00_657 =
														BSTRING_TO_STRING(BgL_basenamez00_51);
													BgL_arg1267z00_360 =
														memcmp(BgL_tmpz00_657, BgL_auxz00_659,
														BgL_l1z00_357);
												}
												BgL_res1615z00_370 =
													((long) (BgL_arg1267z00_360) == ((long) 0));
											}
										else
											{	/* Cc/cc.scm 55 */
												BgL_res1615z00_370 = ((bool_t) 0);
											}
									}
									BgL_test1739z00_652 = BgL_res1615z00_370;
								}
								if (BgL_test1739z00_652)
									{	/* Cc/cc.scm 55 */
										BgL_needzd2ozd2_52 = ((bool_t) 0);
									}
								else
									{	/* Cc/cc.scm 56 */
										bool_t BgL_test1741z00_664;

										{	/* Cc/cc.scm 56 */
											obj_t BgL_arg1284z00_150;
											obj_t BgL_arg1285z00_151;

											BgL_arg1284z00_150 = BGl_pwdz00zz__osz00();
											BgL_arg1285z00_151 =
												BGl_dirnamez00zz__osz00(BgL_objnamez00_50);
											{	/* Cc/cc.scm 56 */
												bool_t BgL_res1620z00_386;

												{	/* Cc/cc.scm 56 */
													long BgL_l1z00_373;

													BgL_l1z00_373 =
														STRING_LENGTH(((obj_t) BgL_arg1284z00_150));
													if (
														(BgL_l1z00_373 ==
															STRING_LENGTH(BgL_arg1285z00_151)))
														{	/* Cc/cc.scm 56 */
															int BgL_arg1267z00_376;

															{	/* Cc/cc.scm 56 */
																char *BgL_auxz00_675;
																char *BgL_tmpz00_672;

																BgL_auxz00_675 =
																	BSTRING_TO_STRING(BgL_arg1285z00_151);
																BgL_tmpz00_672 =
																	BSTRING_TO_STRING(
																	((obj_t) BgL_arg1284z00_150));
																BgL_arg1267z00_376 =
																	memcmp(BgL_tmpz00_672, BgL_auxz00_675,
																	BgL_l1z00_373);
															}
															BgL_res1620z00_386 =
																((long) (BgL_arg1267z00_376) == ((long) 0));
														}
													else
														{	/* Cc/cc.scm 56 */
															BgL_res1620z00_386 = ((bool_t) 0);
														}
												}
												BgL_test1741z00_664 = BgL_res1620z00_386;
											}
										}
										if (BgL_test1741z00_664)
											{	/* Cc/cc.scm 56 */
												BgL_needzd2ozd2_52 = ((bool_t) 0);
											}
										else
											{	/* Cc/cc.scm 57 */
												bool_t BgL_test1744z00_680;

												{	/* Cc/cc.scm 57 */
													obj_t BgL_arg1282z00_149;

													BgL_arg1282z00_149 =
														BGl_dirnamez00zz__osz00(BgL_objnamez00_50);
													{	/* Cc/cc.scm 57 */
														bool_t BgL_res1625z00_402;

														if (
															(((long) 1) == STRING_LENGTH(BgL_arg1282z00_149)))
															{	/* Cc/cc.scm 57 */
																int BgL_arg1267z00_392;

																{	/* Cc/cc.scm 57 */
																	char *BgL_auxz00_687;
																	char *BgL_tmpz00_685;

																	BgL_auxz00_687 =
																		BSTRING_TO_STRING(BgL_arg1282z00_149);
																	BgL_tmpz00_685 =
																		BSTRING_TO_STRING
																		(BGl_string1676z00zzcc_ccz00);
																	BgL_arg1267z00_392 =
																		memcmp(BgL_tmpz00_685, BgL_auxz00_687,
																		((long) 1));
																}
																BgL_res1625z00_402 =
																	((long) (BgL_arg1267z00_392) == ((long) 0));
															}
														else
															{	/* Cc/cc.scm 57 */
																BgL_res1625z00_402 = ((bool_t) 0);
															}
														BgL_test1744z00_680 = BgL_res1625z00_402;
													}
												}
												if (BgL_test1744z00_680)
													{	/* Cc/cc.scm 57 */
														BgL_needzd2ozd2_52 = ((bool_t) 0);
													}
												else
													{	/* Cc/cc.scm 57 */
														BgL_needzd2ozd2_52 = ((bool_t) 1);
													}
											}
									}
							}
							{	/* Cc/cc.scm 55 */
								obj_t BgL_needmvz00_53;

								if (BgL_needzd2ozd2_52)
									{	/* Cc/cc.scm 58 */
										obj_t BgL__ortest_1050z00_144;

										BgL__ortest_1050z00_144 =
											BGl_za2cczd2moveza2zd2zzengine_paramz00;
										if (CBOOL(BgL__ortest_1050z00_144))
											{	/* Cc/cc.scm 58 */
												BgL_needmvz00_53 = BgL__ortest_1050z00_144;
											}
										else
											{	/* Cc/cc.scm 58 */
												bool_t BgL_res1630z00_418;

												{	/* Cc/cc.scm 58 */
													obj_t BgL_string1z00_403;

													BgL_string1z00_403 =
														BGl_za2cczd2ozd2optionza2z00zzengine_paramz00;
													{	/* Cc/cc.scm 58 */
														long BgL_l1z00_405;

														BgL_l1z00_405 = STRING_LENGTH(BgL_string1z00_403);
														if ((BgL_l1z00_405 == ((long) 0)))
															{	/* Cc/cc.scm 58 */
																int BgL_arg1267z00_408;

																{	/* Cc/cc.scm 58 */
																	char *BgL_auxz00_700;
																	char *BgL_tmpz00_698;

																	BgL_auxz00_700 =
																		BSTRING_TO_STRING
																		(BGl_string1677z00zzcc_ccz00);
																	BgL_tmpz00_698 =
																		BSTRING_TO_STRING(BgL_string1z00_403);
																	BgL_arg1267z00_408 =
																		memcmp(BgL_tmpz00_698, BgL_auxz00_700,
																		BgL_l1z00_405);
																}
																BgL_res1630z00_418 =
																	((long) (BgL_arg1267z00_408) == ((long) 0));
															}
														else
															{	/* Cc/cc.scm 58 */
																BgL_res1630z00_418 = ((bool_t) 0);
															}
													}
												}
												BgL_needmvz00_53 = BBOOL(BgL_res1630z00_418);
											}
									}
								else
									{	/* Cc/cc.scm 58 */
										BgL_needmvz00_53 = BFALSE;
									}
								{	/* Cc/cc.scm 58 */
									obj_t BgL_objz00_54;

									if (BgL_needzd2ozd2_52)
										{	/* Cc/cc.scm 60 */
											if (CBOOL(BgL_needmvz00_53))
												{	/* Cc/cc.scm 65 */
													obj_t BgL_arg1268z00_132;

													{	/* Cc/cc.scm 65 */
														obj_t BgL_arg1270z00_134;
														obj_t BgL_arg1271z00_135;

														{	/* Cc/cc.scm 65 */
															obj_t BgL_arg1276z00_140;

															{	/* Cc/cc.scm 65 */
																obj_t BgL_res1631z00_421;

																{	/* Cc/cc.scm 65 */
																	obj_t BgL_symbolz00_419;

																	BgL_symbolz00_419 =
																		BGl_za2moduleza2z00zzmodule_modulez00;
																	{	/* Cc/cc.scm 65 */
																		obj_t BgL_arg1466z00_420;

																		BgL_arg1466z00_420 =
																			SYMBOL_TO_STRING(BgL_symbolz00_419);
																		BgL_res1631z00_421 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg1466z00_420);
																	}
																}
																BgL_arg1276z00_140 = BgL_res1631z00_421;
															}
															BgL_arg1270z00_134 =
																bigloo_mangle(BgL_arg1276z00_140);
														}
														BgL_arg1271z00_135 =
															BGl_commandzd2linezd2ze3stringze3zzcc_ccz00
															(BGl_za2bigloozd2argsza2zd2zzengine_paramz00);
														{	/* Cc/cc.scm 64 */
															obj_t BgL_list1272z00_136;

															{	/* Cc/cc.scm 64 */
																obj_t BgL_arg1273z00_137;

																{	/* Cc/cc.scm 64 */
																	obj_t BgL_arg1274z00_138;

																	{	/* Cc/cc.scm 64 */
																		obj_t BgL_arg1275z00_139;

																		BgL_arg1275z00_139 =
																			MAKE_YOUNG_PAIR
																			(BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00,
																			BNIL);
																		BgL_arg1274z00_138 =
																			MAKE_YOUNG_PAIR
																			(BGl_string1676z00zzcc_ccz00,
																			BgL_arg1275z00_139);
																	}
																	BgL_arg1273z00_137 =
																		MAKE_YOUNG_PAIR(BgL_arg1271z00_135,
																		BgL_arg1274z00_138);
																}
																BgL_list1272z00_136 =
																	MAKE_YOUNG_PAIR(BgL_arg1270z00_134,
																	BgL_arg1273z00_137);
															}
															BgL_arg1268z00_132 =
																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																(BgL_list1272z00_136);
														}
													}
													{	/* Cc/cc.scm 63 */
														obj_t BgL_list1269z00_133;

														BgL_list1269z00_133 =
															MAKE_YOUNG_PAIR(BgL_arg1268z00_132, BNIL);
														BgL_objz00_54 =
															BGl_unixzd2filenamezd2zzcc_execz00
															(BgL_list1269z00_133);
													}
												}
											else
												{	/* Cc/cc.scm 71 */
													obj_t BgL_arg1277z00_141;

													BgL_arg1277z00_141 =
														string_append_3(BgL_objnamez00_50,
														BGl_string1676z00zzcc_ccz00,
														BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00);
													{	/* Cc/cc.scm 70 */
														obj_t BgL_list1278z00_142;

														BgL_list1278z00_142 =
															MAKE_YOUNG_PAIR(BgL_arg1277z00_141, BNIL);
														BgL_objz00_54 =
															BGl_unixzd2filenamezd2zzcc_execz00
															(BgL_list1278z00_142);
													}
												}
										}
									else
										{	/* Cc/cc.scm 60 */
											BgL_objz00_54 = BGl_string1677z00zzcc_ccz00;
										}
									{	/* Cc/cc.scm 59 */
										obj_t BgL_ccz00_55;

										{	/* Cc/cc.scm 76 */
											obj_t BgL_arg1156z00_84;
											obj_t BgL_arg1165z00_85;
											obj_t BgL_arg1166z00_86;
											obj_t BgL_arg1167z00_87;
											obj_t BgL_arg1169z00_88;
											obj_t BgL_arg1170z00_89;
											obj_t BgL_arg1172z00_90;

											{	/* Cc/cc.scm 76 */
												obj_t BgL_list1228z00_110;

												BgL_list1228z00_110 =
													MAKE_YOUNG_PAIR
													(BGl_za2cczd2optionsza2zd2zzengine_paramz00, BNIL);
												BgL_arg1156z00_84 =
													BGl_formatz00zz__r4_output_6_10_3z00
													(BGl_string1678z00zzcc_ccz00, BgL_list1228z00_110);
											}
											BgL_arg1165z00_85 =
												string_append(BGl_string1679z00zzcc_ccz00,
												BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
															(long) 0))));
											BgL_arg1166z00_86 =
												string_append(BGl_string1679z00zzcc_ccz00,
												BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
															(long) 1))));
											if (BgL_needzd2ozd2_52)
												{	/* Cc/cc.scm 84 */
													BgL_arg1167z00_87 =
														BGl_za2cczd2ozd2optionza2z00zzengine_paramz00;
												}
											else
												{	/* Cc/cc.scm 84 */
													BgL_arg1167z00_87 = BGl_string1677z00zzcc_ccz00;
												}
											BgL_arg1169z00_88 =
												BGl_loopze72ze7zzcc_ccz00
												(BGl_za2libzd2dirza2zd2zzengine_paramz00);
											{	/* Cc/cc.scm 99 */
												bool_t BgL_test1754z00_733;

												if (CBOOL(BGl_za2czd2debugza2zd2zzengine_paramz00))
													{	/* Cc/cc.scm 99 */
														BgL_test1754z00_733 = ((bool_t) 1);
													}
												else
													{	/* Cc/cc.scm 99 */
														BgL_test1754z00_733 =
															(
															(long)
															CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >
															((long) 0));
													}
												if (BgL_test1754z00_733)
													{	/* Cc/cc.scm 99 */
														BgL_arg1170z00_89 =
															string_append(BGl_string1679z00zzcc_ccz00,
															BGl_za2czd2debugzd2optionza2z00zzengine_paramz00);
													}
												else
													{	/* Cc/cc.scm 99 */
														BgL_arg1170z00_89 = BGl_string1677z00zzcc_ccz00;
													}
											}
											{	/* Cc/cc.scm 102 */
												obj_t BgL_list1259z00_130;

												{	/* Cc/cc.scm 102 */
													obj_t BgL_arg1263z00_131;

													BgL_arg1263z00_131 =
														MAKE_YOUNG_PAIR(BGl_string1680z00zzcc_ccz00, BNIL);
													BgL_list1259z00_130 =
														MAKE_YOUNG_PAIR(BgL_namez00_7, BgL_arg1263z00_131);
												}
												BgL_arg1172z00_90 =
													BGl_unixzd2filenamezd2zzcc_execz00
													(BgL_list1259z00_130);
											}
											{	/* Cc/cc.scm 74 */
												obj_t BgL_list1173z00_91;

												{	/* Cc/cc.scm 74 */
													obj_t BgL_arg1174z00_92;

													{	/* Cc/cc.scm 74 */
														obj_t BgL_arg1175z00_93;

														{	/* Cc/cc.scm 74 */
															obj_t BgL_arg1176z00_94;

															{	/* Cc/cc.scm 74 */
																obj_t BgL_arg1177z00_95;

																{	/* Cc/cc.scm 74 */
																	obj_t BgL_arg1178z00_96;

																	{	/* Cc/cc.scm 74 */
																		obj_t BgL_arg1179z00_97;

																		{	/* Cc/cc.scm 74 */
																			obj_t BgL_arg1186z00_98;

																			{	/* Cc/cc.scm 74 */
																				obj_t BgL_arg1190z00_99;

																				{	/* Cc/cc.scm 74 */
																					obj_t BgL_arg1194z00_100;

																					{	/* Cc/cc.scm 74 */
																						obj_t BgL_arg1197z00_101;

																						{	/* Cc/cc.scm 74 */
																							obj_t BgL_arg1201z00_102;

																							{	/* Cc/cc.scm 74 */
																								obj_t BgL_arg1208z00_103;

																								{	/* Cc/cc.scm 74 */
																									obj_t BgL_arg1211z00_104;

																									{	/* Cc/cc.scm 74 */
																										obj_t BgL_arg1216z00_105;

																										{	/* Cc/cc.scm 74 */
																											obj_t BgL_arg1221z00_106;

																											{	/* Cc/cc.scm 74 */
																												obj_t
																													BgL_arg1223z00_107;
																												{	/* Cc/cc.scm 74 */
																													obj_t
																														BgL_arg1225z00_108;
																													{	/* Cc/cc.scm 74 */
																														obj_t
																															BgL_arg1227z00_109;
																														BgL_arg1227z00_109 =
																															MAKE_YOUNG_PAIR
																															(BGl_string1679z00zzcc_ccz00,
																															BNIL);
																														BgL_arg1225z00_108 =
																															MAKE_YOUNG_PAIR
																															(BgL_arg1172z00_90,
																															BgL_arg1227z00_109);
																													}
																													BgL_arg1223z00_107 =
																														MAKE_YOUNG_PAIR
																														(BGl_string1679z00zzcc_ccz00,
																														BgL_arg1225z00_108);
																												}
																												BgL_arg1221z00_106 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1170z00_89,
																													BgL_arg1223z00_107);
																											}
																											BgL_arg1216z00_105 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1169z00_88,
																												BgL_arg1221z00_106);
																										}
																										BgL_arg1211z00_104 =
																											MAKE_YOUNG_PAIR
																											(BGl_string1681z00zzcc_ccz00,
																											BgL_arg1216z00_105);
																									}
																									BgL_arg1208z00_103 =
																										MAKE_YOUNG_PAIR
																										(BgL_objz00_54,
																										BgL_arg1211z00_104);
																								}
																								BgL_arg1201z00_102 =
																									MAKE_YOUNG_PAIR
																									(BGl_string1679z00zzcc_ccz00,
																									BgL_arg1208z00_103);
																							}
																							BgL_arg1197z00_101 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1167z00_87,
																								BgL_arg1201z00_102);
																						}
																						BgL_arg1194z00_100 =
																							MAKE_YOUNG_PAIR
																							(BGl_string1682z00zzcc_ccz00,
																							BgL_arg1197z00_101);
																					}
																					BgL_arg1190z00_99 =
																						MAKE_YOUNG_PAIR
																						(BGl_string1679z00zzcc_ccz00,
																						BgL_arg1194z00_100);
																				}
																				BgL_arg1186z00_98 =
																					MAKE_YOUNG_PAIR(BgL_arg1166z00_86,
																					BgL_arg1190z00_99);
																			}
																			BgL_arg1179z00_97 =
																				MAKE_YOUNG_PAIR(BgL_arg1165z00_85,
																				BgL_arg1186z00_98);
																		}
																		BgL_arg1178z00_96 =
																			MAKE_YOUNG_PAIR
																			(BGl_string1679z00zzcc_ccz00,
																			BgL_arg1179z00_97);
																	}
																	BgL_arg1177z00_95 =
																		MAKE_YOUNG_PAIR
																		(BGl_za2cflagsza2z00zzengine_paramz00,
																		BgL_arg1178z00_96);
																}
																BgL_arg1176z00_94 =
																	MAKE_YOUNG_PAIR(BGl_string1679z00zzcc_ccz00,
																	BgL_arg1177z00_95);
															}
															BgL_arg1175z00_93 =
																MAKE_YOUNG_PAIR(BgL_arg1156z00_84,
																BgL_arg1176z00_94);
														}
														BgL_arg1174z00_92 =
															MAKE_YOUNG_PAIR(BGl_string1679z00zzcc_ccz00,
															BgL_arg1175z00_93);
													}
													BgL_list1173z00_91 =
														MAKE_YOUNG_PAIR(BGl_za2ccza2z00zzengine_paramz00,
														BgL_arg1174z00_92);
												}
												BgL_ccz00_55 =
													BGl_stringzd2appendzd2zz__r4_strings_6_7z00
													(BgL_list1173z00_91);
											}
										}
										{	/* Cc/cc.scm 74 */
											obj_t BgL_rmzd2csrczd2_56;

											if (CBOOL(BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00))
												{	/* Cc/cc.scm 105 */
													obj_t BgL_arg1128z00_75;
													obj_t BgL_arg1129z00_76;

													BgL_arg1128z00_75 =
														BGl_bigloozd2configzd2zz__configurez00
														(CNST_TABLE_REF(((long) 2)));
													{	/* Cc/cc.scm 107 */
														obj_t BgL_list1146z00_82;

														{	/* Cc/cc.scm 107 */
															obj_t BgL_arg1155z00_83;

															BgL_arg1155z00_83 =
																MAKE_YOUNG_PAIR(BGl_string1680z00zzcc_ccz00,
																BNIL);
															BgL_list1146z00_82 =
																MAKE_YOUNG_PAIR(BgL_namez00_7,
																BgL_arg1155z00_83);
														}
														BgL_arg1129z00_76 =
															BGl_unixzd2filenamezd2zzcc_execz00
															(BgL_list1146z00_82);
													}
													{	/* Cc/cc.scm 104 */
														obj_t BgL_list1130z00_77;

														{	/* Cc/cc.scm 104 */
															obj_t BgL_arg1133z00_78;

															{	/* Cc/cc.scm 104 */
																obj_t BgL_arg1134z00_79;

																{	/* Cc/cc.scm 104 */
																	obj_t BgL_arg1140z00_80;

																	{	/* Cc/cc.scm 104 */
																		obj_t BgL_arg1145z00_81;

																		BgL_arg1145z00_81 =
																			MAKE_YOUNG_PAIR
																			(BGl_string1679z00zzcc_ccz00, BNIL);
																		BgL_arg1140z00_80 =
																			MAKE_YOUNG_PAIR(BgL_arg1129z00_76,
																			BgL_arg1145z00_81);
																	}
																	BgL_arg1134z00_79 =
																		MAKE_YOUNG_PAIR(BGl_string1679z00zzcc_ccz00,
																		BgL_arg1140z00_80);
																}
																BgL_arg1133z00_78 =
																	MAKE_YOUNG_PAIR(BgL_arg1128z00_75,
																	BgL_arg1134z00_79);
															}
															BgL_list1130z00_77 =
																MAKE_YOUNG_PAIR(BGl_string1683z00zzcc_ccz00,
																BgL_arg1133z00_78);
														}
														BgL_rmzd2csrczd2_56 =
															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
															(BgL_list1130z00_77);
												}}
											else
												{	/* Cc/cc.scm 103 */
													BgL_rmzd2csrczd2_56 = BGl_string1677z00zzcc_ccz00;
												}
											{	/* Cc/cc.scm 103 */
												obj_t BgL_mvzd2objzd2_57;

												if (CBOOL(BgL_needmvz00_53))
													{	/* Cc/cc.scm 111 */
														obj_t BgL_arg1114z00_63;
														obj_t BgL_arg1115z00_64;

														BgL_arg1114z00_63 =
															BGl_bigloozd2configzd2zz__configurez00
															(CNST_TABLE_REF(((long) 3)));
														{	/* Cc/cc.scm 115 */
															obj_t BgL_list1125z00_72;

															{	/* Cc/cc.scm 115 */
																obj_t BgL_arg1126z00_73;

																{	/* Cc/cc.scm 115 */
																	obj_t BgL_arg1127z00_74;

																	BgL_arg1127z00_74 =
																		MAKE_YOUNG_PAIR
																		(BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00,
																		BNIL);
																	BgL_arg1126z00_73 =
																		MAKE_YOUNG_PAIR(BGl_string1676z00zzcc_ccz00,
																		BgL_arg1127z00_74);
																}
																BgL_list1125z00_72 =
																	MAKE_YOUNG_PAIR(BgL_objnamez00_50,
																	BgL_arg1126z00_73);
															}
															BgL_arg1115z00_64 =
																BGl_unixzd2filenamezd2zzcc_execz00
																(BgL_list1125z00_72);
														}
														{	/* Cc/cc.scm 110 */
															obj_t BgL_list1116z00_65;

															{	/* Cc/cc.scm 110 */
																obj_t BgL_arg1117z00_66;

																{	/* Cc/cc.scm 110 */
																	obj_t BgL_arg1118z00_67;

																	{	/* Cc/cc.scm 110 */
																		obj_t BgL_arg1121z00_68;

																		{	/* Cc/cc.scm 110 */
																			obj_t BgL_arg1122z00_69;

																			{	/* Cc/cc.scm 110 */
																				obj_t BgL_arg1123z00_70;

																				{	/* Cc/cc.scm 110 */
																					obj_t BgL_arg1124z00_71;

																					BgL_arg1124z00_71 =
																						MAKE_YOUNG_PAIR
																						(BGl_string1684z00zzcc_ccz00, BNIL);
																					BgL_arg1123z00_70 =
																						MAKE_YOUNG_PAIR(BgL_arg1115z00_64,
																						BgL_arg1124z00_71);
																				}
																				BgL_arg1122z00_69 =
																					MAKE_YOUNG_PAIR
																					(BGl_string1679z00zzcc_ccz00,
																					BgL_arg1123z00_70);
																			}
																			BgL_arg1121z00_68 =
																				MAKE_YOUNG_PAIR(BgL_objz00_54,
																				BgL_arg1122z00_69);
																		}
																		BgL_arg1118z00_67 =
																			MAKE_YOUNG_PAIR
																			(BGl_string1679z00zzcc_ccz00,
																			BgL_arg1121z00_68);
																	}
																	BgL_arg1117z00_66 =
																		MAKE_YOUNG_PAIR(BgL_arg1114z00_63,
																		BgL_arg1118z00_67);
																}
																BgL_list1116z00_65 =
																	MAKE_YOUNG_PAIR(BGl_string1683z00zzcc_ccz00,
																	BgL_arg1117z00_66);
															}
															BgL_mvzd2objzd2_57 =
																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																(BgL_list1116z00_65);
													}}
												else
													{	/* Cc/cc.scm 109 */
														BgL_mvzd2objzd2_57 = BGl_string1677z00zzcc_ccz00;
													}
												{	/* Cc/cc.scm 109 */
													obj_t BgL_cmdz00_58;

													BgL_cmdz00_58 =
														string_append_3(BgL_ccz00_55, BgL_mvzd2objzd2_57,
														BgL_rmzd2csrczd2_56);
													{	/* Cc/cc.scm 120 */

														{	/* Cc/cc.scm 121 */
															obj_t BgL_list1103z00_59;

															{	/* Cc/cc.scm 121 */
																obj_t BgL_arg1109z00_60;

																{	/* Cc/cc.scm 121 */
																	obj_t BgL_arg1110z00_61;

																	{	/* Cc/cc.scm 121 */
																		obj_t BgL_arg1113z00_62;

																		BgL_arg1113z00_62 =
																			MAKE_YOUNG_PAIR(BCHAR(((unsigned char)
																					10)), BNIL);
																		BgL_arg1110z00_61 =
																			MAKE_YOUNG_PAIR(BCHAR(((unsigned char)
																					']')), BgL_arg1113z00_62);
																	}
																	BgL_arg1109z00_60 =
																		MAKE_YOUNG_PAIR(BgL_cmdz00_58,
																		BgL_arg1110z00_61);
																}
																BgL_list1103z00_59 =
																	MAKE_YOUNG_PAIR(BGl_string1685z00zzcc_ccz00,
																	BgL_arg1109z00_60);
															}
															BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
																BgL_list1103z00_59);
														}
														return
															BGl_execz00zzcc_execz00(BgL_cmdz00_58,
															BgL_needzd2tozd2returnz00_9,
															BGl_string1671z00zzcc_ccz00);
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
			else
				{	/* Cc/cc.scm 50 */
					return
						BGl_errorz00zz__errorz00(BGl_string1671z00zzcc_ccz00,
						BGl_string1686z00zzcc_ccz00, BgL_namez00_7);
				}
		}

	}



/* loop~2 */
	obj_t BGl_loopze72ze7zzcc_ccz00(obj_t BgL_pathz00_114)
	{
		{	/* Cc/cc.scm 88 */
		BGl_loopze72ze7zzcc_ccz00:
			if (NULLP(BgL_pathz00_114))
				{	/* Cc/cc.scm 90 */
					return BGl_string1677z00zzcc_ccz00;
				}
			else
				{	/* Cc/cc.scm 92 */
					bool_t BgL_test1760z00_804;

					{	/* Cc/cc.scm 92 */
						obj_t BgL_arg1256z00_127;

						BgL_arg1256z00_127 = CAR(((obj_t) BgL_pathz00_114));
						BgL_test1760z00_804 =
							bgl_directoryp(BSTRING_TO_STRING(BgL_arg1256z00_127));
					}
					if (BgL_test1760z00_804)
						{	/* Cc/cc.scm 94 */
							obj_t BgL_arg1243z00_119;
							obj_t BgL_arg1245z00_120;

							BgL_arg1243z00_119 = CAR(((obj_t) BgL_pathz00_114));
							{	/* Cc/cc.scm 96 */
								obj_t BgL_arg1253z00_125;

								BgL_arg1253z00_125 = CDR(((obj_t) BgL_pathz00_114));
								BgL_arg1245z00_120 =
									BGl_loopze72ze7zzcc_ccz00(BgL_arg1253z00_125);
							}
							{	/* Cc/cc.scm 93 */
								obj_t BgL_list1246z00_121;

								{	/* Cc/cc.scm 93 */
									obj_t BgL_arg1247z00_122;

									{	/* Cc/cc.scm 93 */
										obj_t BgL_arg1250z00_123;

										{	/* Cc/cc.scm 93 */
											obj_t BgL_arg1252z00_124;

											BgL_arg1252z00_124 =
												MAKE_YOUNG_PAIR(BgL_arg1245z00_120, BNIL);
											BgL_arg1250z00_123 =
												MAKE_YOUNG_PAIR(BGl_string1679z00zzcc_ccz00,
												BgL_arg1252z00_124);
										}
										BgL_arg1247z00_122 =
											MAKE_YOUNG_PAIR(BgL_arg1243z00_119, BgL_arg1250z00_123);
									}
									BgL_list1246z00_121 =
										MAKE_YOUNG_PAIR(BGl_string1687z00zzcc_ccz00,
										BgL_arg1247z00_122);
								}
								return
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list1246z00_121);
							}
						}
					else
						{	/* Cc/cc.scm 98 */
							obj_t BgL_arg1254z00_126;

							BgL_arg1254z00_126 = CDR(((obj_t) BgL_pathz00_114));
							{
								obj_t BgL_pathz00_821;

								BgL_pathz00_821 = BgL_arg1254z00_126;
								BgL_pathz00_114 = BgL_pathz00_821;
								goto BGl_loopze72ze7zzcc_ccz00;
							}
						}
				}
		}

	}



/* mingw-cc */
	obj_t BGl_mingwzd2cczd2zzcc_ccz00(obj_t BgL_namez00_10, obj_t BgL_onamez00_11,
		bool_t BgL_needzd2tozd2returnz00_12)
	{
		{	/* Cc/cc.scm 127 */
			{	/* Cc/cc.scm 128 */
				obj_t BgL_list1287z00_153;

				{	/* Cc/cc.scm 128 */
					obj_t BgL_arg1288z00_154;

					{	/* Cc/cc.scm 128 */
						obj_t BgL_arg1289z00_155;

						{	/* Cc/cc.scm 128 */
							obj_t BgL_arg1290z00_156;

							BgL_arg1290z00_156 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
							BgL_arg1289z00_155 =
								MAKE_YOUNG_PAIR(BGl_string1674z00zzcc_ccz00,
								BgL_arg1290z00_156);
						}
						BgL_arg1288z00_154 =
							MAKE_YOUNG_PAIR(BGl_za2ccza2z00zzengine_paramz00,
							BgL_arg1289z00_155);
					}
					BgL_list1287z00_153 =
						MAKE_YOUNG_PAIR(BGl_string1675z00zzcc_ccz00, BgL_arg1288z00_154);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1287z00_153);
			}
			if (STRINGP(BgL_namez00_10))
				{	/* Cc/cc.scm 133 */
					obj_t BgL_onamez00_158;

					if (STRINGP(BgL_onamez00_11))
						{	/* Cc/cc.scm 133 */
							BgL_onamez00_158 = BgL_onamez00_11;
						}
					else
						{	/* Cc/cc.scm 133 */
							BgL_onamez00_158 = BgL_namez00_10;
						}
					{	/* Cc/cc.scm 133 */
						obj_t BgL_destzd2objzd2_159;

						if (CBOOL(BGl_za2cczd2moveza2zd2zzengine_paramz00))
							{	/* Cc/cc.scm 134 */
								BgL_destzd2objzd2_159 = BGl_string1677z00zzcc_ccz00;
							}
						else
							{	/* Cc/cc.scm 137 */
								obj_t BgL_arg1360z00_222;

								{	/* Cc/cc.scm 137 */
									obj_t BgL_list1362z00_224;

									{	/* Cc/cc.scm 137 */
										obj_t BgL_arg1363z00_225;

										{	/* Cc/cc.scm 137 */
											obj_t BgL_arg1364z00_226;

											{	/* Cc/cc.scm 137 */
												obj_t BgL_arg1367z00_227;

												BgL_arg1367z00_227 =
													MAKE_YOUNG_PAIR
													(BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00,
													BNIL);
												BgL_arg1364z00_226 =
													MAKE_YOUNG_PAIR(BGl_string1676z00zzcc_ccz00,
													BgL_arg1367z00_227);
											}
											BgL_arg1363z00_225 =
												MAKE_YOUNG_PAIR(BgL_onamez00_158, BgL_arg1364z00_226);
										}
										BgL_list1362z00_224 =
											MAKE_YOUNG_PAIR
											(BGl_za2cczd2ozd2optionza2z00zzengine_paramz00,
											BgL_arg1363z00_225);
									}
									BgL_arg1360z00_222 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list1362z00_224);
								}
								{	/* Cc/cc.scm 136 */
									obj_t BgL_list1361z00_223;

									BgL_list1361z00_223 =
										MAKE_YOUNG_PAIR(BgL_arg1360z00_222, BNIL);
									BgL_destzd2objzd2_159 =
										BGl_unixzd2filenamezd2zzcc_execz00(BgL_list1361z00_223);
								}
							}
						{	/* Cc/cc.scm 134 */
							obj_t BgL_ccz00_160;

							{	/* Cc/cc.scm 141 */
								obj_t BgL_arg1317z00_189;
								obj_t BgL_arg1319z00_190;
								obj_t BgL_arg1322z00_191;
								obj_t BgL_arg1324z00_192;

								{	/* Cc/cc.scm 141 */
									obj_t BgL_list1341z00_206;

									BgL_list1341z00_206 =
										MAKE_YOUNG_PAIR(BGl_za2cczd2optionsza2zd2zzengine_paramz00,
										BNIL);
									BgL_arg1317z00_189 =
										BGl_formatz00zz__r4_output_6_10_3z00
										(BGl_string1678z00zzcc_ccz00, BgL_list1341z00_206);
								}
								BgL_arg1319z00_190 =
									BGl_loopze71ze7zzcc_ccz00
									(BGl_za2libzd2dirza2zd2zzengine_paramz00);
								{	/* Cc/cc.scm 154 */
									bool_t BgL_test1765z00_845;

									if (CBOOL(BGl_za2czd2debugza2zd2zzengine_paramz00))
										{	/* Cc/cc.scm 154 */
											BgL_test1765z00_845 = ((bool_t) 1);
										}
									else
										{	/* Cc/cc.scm 154 */
											BgL_test1765z00_845 =
												(
												(long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >
												((long) 0));
										}
									if (BgL_test1765z00_845)
										{	/* Cc/cc.scm 154 */
											BgL_arg1322z00_191 =
												string_append(BGl_string1679z00zzcc_ccz00,
												BGl_za2czd2debugzd2optionza2z00zzengine_paramz00);
										}
									else
										{	/* Cc/cc.scm 154 */
											BgL_arg1322z00_191 = BGl_string1677z00zzcc_ccz00;
										}
								}
								{	/* Cc/cc.scm 157 */
									obj_t BgL_list1354z00_220;

									{	/* Cc/cc.scm 157 */
										obj_t BgL_arg1357z00_221;

										BgL_arg1357z00_221 =
											MAKE_YOUNG_PAIR(BGl_string1680z00zzcc_ccz00, BNIL);
										BgL_list1354z00_220 =
											MAKE_YOUNG_PAIR(BgL_namez00_10, BgL_arg1357z00_221);
									}
									BgL_arg1324z00_192 =
										BGl_unixzd2filenamezd2zzcc_execz00(BgL_list1354z00_220);
								}
								{	/* Cc/cc.scm 139 */
									obj_t BgL_list1325z00_193;

									{	/* Cc/cc.scm 139 */
										obj_t BgL_arg1326z00_194;

										{	/* Cc/cc.scm 139 */
											obj_t BgL_arg1327z00_195;

											{	/* Cc/cc.scm 139 */
												obj_t BgL_arg1328z00_196;

												{	/* Cc/cc.scm 139 */
													obj_t BgL_arg1329z00_197;

													{	/* Cc/cc.scm 139 */
														obj_t BgL_arg1330z00_198;

														{	/* Cc/cc.scm 139 */
															obj_t BgL_arg1331z00_199;

															{	/* Cc/cc.scm 139 */
																obj_t BgL_arg1334z00_200;

																{	/* Cc/cc.scm 139 */
																	obj_t BgL_arg1335z00_201;

																	{	/* Cc/cc.scm 139 */
																		obj_t BgL_arg1337z00_202;

																		{	/* Cc/cc.scm 139 */
																			obj_t BgL_arg1338z00_203;

																			{	/* Cc/cc.scm 139 */
																				obj_t BgL_arg1339z00_204;

																				{	/* Cc/cc.scm 139 */
																					obj_t BgL_arg1340z00_205;

																					BgL_arg1340z00_205 =
																						MAKE_YOUNG_PAIR
																						(BGl_string1679z00zzcc_ccz00, BNIL);
																					BgL_arg1339z00_204 =
																						MAKE_YOUNG_PAIR(BgL_arg1324z00_192,
																						BgL_arg1340z00_205);
																				}
																				BgL_arg1338z00_203 =
																					MAKE_YOUNG_PAIR
																					(BGl_string1679z00zzcc_ccz00,
																					BgL_arg1339z00_204);
																			}
																			BgL_arg1337z00_202 =
																				MAKE_YOUNG_PAIR(BgL_arg1322z00_191,
																				BgL_arg1338z00_203);
																		}
																		BgL_arg1335z00_201 =
																			MAKE_YOUNG_PAIR(BgL_arg1319z00_190,
																			BgL_arg1337z00_202);
																	}
																	BgL_arg1334z00_200 =
																		MAKE_YOUNG_PAIR(BGl_string1681z00zzcc_ccz00,
																		BgL_arg1335z00_201);
																}
																BgL_arg1331z00_199 =
																	MAKE_YOUNG_PAIR(BgL_destzd2objzd2_159,
																	BgL_arg1334z00_200);
															}
															BgL_arg1330z00_198 =
																MAKE_YOUNG_PAIR(BGl_string1682z00zzcc_ccz00,
																BgL_arg1331z00_199);
														}
														BgL_arg1329z00_197 =
															MAKE_YOUNG_PAIR
															(BGl_za2cflagsza2z00zzengine_paramz00,
															BgL_arg1330z00_198);
													}
													BgL_arg1328z00_196 =
														MAKE_YOUNG_PAIR(BGl_string1679z00zzcc_ccz00,
														BgL_arg1329z00_197);
												}
												BgL_arg1327z00_195 =
													MAKE_YOUNG_PAIR(BgL_arg1317z00_189,
													BgL_arg1328z00_196);
											}
											BgL_arg1326z00_194 =
												MAKE_YOUNG_PAIR(BGl_string1679z00zzcc_ccz00,
												BgL_arg1327z00_195);
										}
										BgL_list1325z00_193 =
											MAKE_YOUNG_PAIR(BGl_za2ccza2z00zzengine_paramz00,
											BgL_arg1326z00_194);
									}
									BgL_ccz00_160 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list1325z00_193);
								}
							}
							{	/* Cc/cc.scm 139 */
								obj_t BgL_basenamez00_161;

								BgL_basenamez00_161 =
									BGl_basenamez00zz__osz00(BgL_onamez00_158);
								{	/* Cc/cc.scm 160 */
									obj_t BgL_cmdz00_164;

									BgL_cmdz00_164 =
										string_append_3(BgL_ccz00_160, BGl_string1677z00zzcc_ccz00,
										BGl_string1677z00zzcc_ccz00);
									{	/* Cc/cc.scm 161 */

										{	/* Cc/cc.scm 162 */
											obj_t BgL_port1053z00_165;

											{	/* Cc/cc.scm 162 */
												obj_t BgL_res1639z00_439;

												{	/* Cc/cc.scm 162 */
													obj_t BgL_tmpz00_870;

													BgL_tmpz00_870 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res1639z00_439 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_870);
												}
												BgL_port1053z00_165 = BgL_res1639z00_439;
											}
											bgl_display_obj(BgL_cmdz00_164, BgL_port1053z00_165);
											bgl_display_char(((unsigned char) 10),
												BgL_port1053z00_165);
										}
										{	/* Cc/cc.scm 163 */
											obj_t BgL_list1292z00_166;

											{	/* Cc/cc.scm 163 */
												obj_t BgL_arg1295z00_167;

												{	/* Cc/cc.scm 163 */
													obj_t BgL_arg1296z00_168;

													{	/* Cc/cc.scm 163 */
														obj_t BgL_arg1297z00_169;

														BgL_arg1297z00_169 =
															MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)),
															BNIL);
														BgL_arg1296z00_168 =
															MAKE_YOUNG_PAIR(BCHAR(((unsigned char) ']')),
															BgL_arg1297z00_169);
													}
													BgL_arg1295z00_167 =
														MAKE_YOUNG_PAIR(BgL_cmdz00_164, BgL_arg1296z00_168);
												}
												BgL_list1292z00_166 =
													MAKE_YOUNG_PAIR(BGl_string1685z00zzcc_ccz00,
													BgL_arg1295z00_167);
											}
											BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
												BgL_list1292z00_166);
										}
										BGl_execz00zzcc_execz00(BgL_cmdz00_164,
											BgL_needzd2tozd2returnz00_12,
											BGl_string1671z00zzcc_ccz00);
										{	/* Cc/cc.scm 165 */
											bool_t BgL_test1767z00_884;

											if (CBOOL(BGl_za2cczd2moveza2zd2zzengine_paramz00))
												{	/* Cc/cc.scm 166 */
													bool_t BgL_test1770z00_887;

													{	/* Cc/cc.scm 166 */
														bool_t BgL_res1644z00_456;

														{	/* Cc/cc.scm 166 */
															long BgL_l1z00_443;

															BgL_l1z00_443 =
																STRING_LENGTH(BgL_basenamez00_161);
															if (
																(BgL_l1z00_443 ==
																	STRING_LENGTH(BgL_onamez00_158)))
																{	/* Cc/cc.scm 166 */
																	int BgL_arg1267z00_446;

																	{	/* Cc/cc.scm 166 */
																		char *BgL_auxz00_894;
																		char *BgL_tmpz00_892;

																		BgL_auxz00_894 =
																			BSTRING_TO_STRING(BgL_onamez00_158);
																		BgL_tmpz00_892 =
																			BSTRING_TO_STRING(BgL_basenamez00_161);
																		BgL_arg1267z00_446 =
																			memcmp(BgL_tmpz00_892, BgL_auxz00_894,
																			BgL_l1z00_443);
																	}
																	BgL_res1644z00_456 =
																		((long) (BgL_arg1267z00_446) == ((long) 0));
																}
															else
																{	/* Cc/cc.scm 166 */
																	BgL_res1644z00_456 = ((bool_t) 0);
																}
														}
														BgL_test1770z00_887 = BgL_res1644z00_456;
													}
													if (BgL_test1770z00_887)
														{	/* Cc/cc.scm 166 */
															BgL_test1767z00_884 = ((bool_t) 0);
														}
													else
														{	/* Cc/cc.scm 167 */
															bool_t BgL_test1772z00_899;

															{	/* Cc/cc.scm 167 */
																obj_t BgL_arg1314z00_186;
																obj_t BgL_arg1315z00_187;

																BgL_arg1314z00_186 = BGl_pwdz00zz__osz00();
																BgL_arg1315z00_187 =
																	BGl_dirnamez00zz__osz00(BgL_onamez00_158);
																{	/* Cc/cc.scm 167 */
																	bool_t BgL_res1649z00_472;

																	{	/* Cc/cc.scm 167 */
																		long BgL_l1z00_459;

																		BgL_l1z00_459 =
																			STRING_LENGTH(
																			((obj_t) BgL_arg1314z00_186));
																		if (
																			(BgL_l1z00_459 ==
																				STRING_LENGTH(BgL_arg1315z00_187)))
																			{	/* Cc/cc.scm 167 */
																				int BgL_arg1267z00_462;

																				{	/* Cc/cc.scm 167 */
																					char *BgL_auxz00_910;
																					char *BgL_tmpz00_907;

																					BgL_auxz00_910 =
																						BSTRING_TO_STRING
																						(BgL_arg1315z00_187);
																					BgL_tmpz00_907 =
																						BSTRING_TO_STRING(((obj_t)
																							BgL_arg1314z00_186));
																					BgL_arg1267z00_462 =
																						memcmp(BgL_tmpz00_907,
																						BgL_auxz00_910, BgL_l1z00_459);
																				}
																				BgL_res1649z00_472 =
																					(
																					(long) (BgL_arg1267z00_462) ==
																					((long) 0));
																			}
																		else
																			{	/* Cc/cc.scm 167 */
																				BgL_res1649z00_472 = ((bool_t) 0);
																			}
																	}
																	BgL_test1772z00_899 = BgL_res1649z00_472;
																}
															}
															if (BgL_test1772z00_899)
																{	/* Cc/cc.scm 167 */
																	BgL_test1767z00_884 = ((bool_t) 0);
																}
															else
																{	/* Cc/cc.scm 168 */
																	bool_t BgL_test1774z00_915;

																	{	/* Cc/cc.scm 168 */
																		obj_t BgL_arg1312z00_185;

																		BgL_arg1312z00_185 =
																			BGl_dirnamez00zz__osz00(BgL_onamez00_158);
																		{	/* Cc/cc.scm 168 */
																			bool_t BgL_res1654z00_488;

																			if (
																				(((long) 1) ==
																					STRING_LENGTH(BgL_arg1312z00_185)))
																				{	/* Cc/cc.scm 168 */
																					int BgL_arg1267z00_478;

																					{	/* Cc/cc.scm 168 */
																						char *BgL_auxz00_922;
																						char *BgL_tmpz00_920;

																						BgL_auxz00_922 =
																							BSTRING_TO_STRING
																							(BgL_arg1312z00_185);
																						BgL_tmpz00_920 =
																							BSTRING_TO_STRING
																							(BGl_string1676z00zzcc_ccz00);
																						BgL_arg1267z00_478 =
																							memcmp(BgL_tmpz00_920,
																							BgL_auxz00_922, ((long) 1));
																					}
																					BgL_res1654z00_488 =
																						(
																						(long) (BgL_arg1267z00_478) ==
																						((long) 0));
																				}
																			else
																				{	/* Cc/cc.scm 168 */
																					BgL_res1654z00_488 = ((bool_t) 0);
																				}
																			BgL_test1774z00_915 = BgL_res1654z00_488;
																		}
																	}
																	if (BgL_test1774z00_915)
																		{	/* Cc/cc.scm 168 */
																			BgL_test1767z00_884 = ((bool_t) 0);
																		}
																	else
																		{	/* Cc/cc.scm 168 */
																			BgL_test1767z00_884 = ((bool_t) 1);
																		}
																}
														}
												}
											else
												{	/* Cc/cc.scm 165 */
													BgL_test1767z00_884 = ((bool_t) 0);
												}
											if (BgL_test1767z00_884)
												{	/* Cc/cc.scm 169 */
													obj_t BgL_arg1310z00_180;
													obj_t BgL_arg1311z00_181;

													BgL_arg1310z00_180 =
														string_append_3(BgL_basenamez00_161,
														BGl_string1676z00zzcc_ccz00,
														BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00);
													BgL_arg1311z00_181 =
														string_append_3(BgL_onamez00_158,
														BGl_string1676z00zzcc_ccz00,
														BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00);
													{	/* Cc/cc.scm 169 */
														bool_t BgL_res1656z00_494;

														{	/* Cc/cc.scm 169 */
															char *BgL_string1z00_489;
															char *BgL_string2z00_490;

															BgL_string1z00_489 =
																BSTRING_TO_STRING(BgL_arg1310z00_180);
															BgL_string2z00_490 =
																BSTRING_TO_STRING(BgL_arg1311z00_181);
															{	/* Cc/cc.scm 169 */
																int BgL_arg1236z00_492;

																BgL_arg1236z00_492 =
																	rename(BgL_string1z00_489,
																	BgL_string2z00_490);
																BgL_res1656z00_494 =
																	((long) (BgL_arg1236z00_492) == ((long) 0));
														}} BgL_res1656z00_494;
												}}
											else
												{	/* Cc/cc.scm 165 */
													((bool_t) 0);
												}
										}
										if (CBOOL(BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00))
											{	/* Cc/cc.scm 172 */
												obj_t BgL_arg1316z00_188;

												BgL_arg1316z00_188 =
													string_append(BgL_namez00_10,
													BGl_string1688z00zzcc_ccz00);
												{	/* Cc/cc.scm 172 */
													char *BgL_stringz00_495;

													BgL_stringz00_495 =
														BSTRING_TO_STRING(BgL_arg1316z00_188);
													if (unlink(BgL_stringz00_495))
														{	/* Cc/cc.scm 172 */
															return BFALSE;
														}
													else
														{	/* Cc/cc.scm 172 */
															return BTRUE;
														}
												}
											}
										else
											{	/* Cc/cc.scm 171 */
												return BFALSE;
											}
									}
								}
							}
						}
					}
				}
			else
				{	/* Cc/cc.scm 130 */
					return
						BGl_errorz00zz__errorz00(BGl_string1671z00zzcc_ccz00,
						BGl_string1686z00zzcc_ccz00, BgL_namez00_10);
				}
		}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zzcc_ccz00(obj_t BgL_pathz00_208)
	{
		{	/* Cc/cc.scm 147 */
			if (NULLP(BgL_pathz00_208))
				{	/* Cc/cc.scm 148 */
					return BGl_string1677z00zzcc_ccz00;
				}
			else
				{	/* Cc/cc.scm 151 */
					obj_t BgL_arg1344z00_211;
					obj_t BgL_arg1345z00_212;

					BgL_arg1344z00_211 = CAR(((obj_t) BgL_pathz00_208));
					{	/* Cc/cc.scm 153 */
						obj_t BgL_arg1352z00_217;

						BgL_arg1352z00_217 = CDR(((obj_t) BgL_pathz00_208));
						BgL_arg1345z00_212 = BGl_loopze71ze7zzcc_ccz00(BgL_arg1352z00_217);
					}
					{	/* Cc/cc.scm 150 */
						obj_t BgL_list1346z00_213;

						{	/* Cc/cc.scm 150 */
							obj_t BgL_arg1347z00_214;

							{	/* Cc/cc.scm 150 */
								obj_t BgL_arg1348z00_215;

								{	/* Cc/cc.scm 150 */
									obj_t BgL_arg1351z00_216;

									BgL_arg1351z00_216 =
										MAKE_YOUNG_PAIR(BgL_arg1345z00_212, BNIL);
									BgL_arg1348z00_215 =
										MAKE_YOUNG_PAIR(BGl_string1679z00zzcc_ccz00,
										BgL_arg1351z00_216);
								}
								BgL_arg1347z00_214 =
									MAKE_YOUNG_PAIR(BgL_arg1344z00_211, BgL_arg1348z00_215);
							}
							BgL_list1346z00_213 =
								MAKE_YOUNG_PAIR(BGl_string1687z00zzcc_ccz00,
								BgL_arg1347z00_214);
						}
						return
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1346z00_213);
					}
				}
		}

	}



/* win32-cc */
	obj_t BGl_win32zd2cczd2zzcc_ccz00(obj_t BgL_namez00_13, obj_t BgL_onamez00_14)
	{
		{	/* Cc/cc.scm 177 */
			{	/* Cc/cc.scm 178 */
				obj_t BgL_list1369z00_229;

				{	/* Cc/cc.scm 178 */
					obj_t BgL_arg1370z00_230;

					{	/* Cc/cc.scm 178 */
						obj_t BgL_arg1371z00_231;

						{	/* Cc/cc.scm 178 */
							obj_t BgL_arg1372z00_232;

							BgL_arg1372z00_232 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
							BgL_arg1371z00_231 =
								MAKE_YOUNG_PAIR(BGl_string1674z00zzcc_ccz00,
								BgL_arg1372z00_232);
						}
						BgL_arg1370z00_230 =
							MAKE_YOUNG_PAIR(BGl_za2ccza2z00zzengine_paramz00,
							BgL_arg1371z00_231);
					}
					BgL_list1369z00_229 =
						MAKE_YOUNG_PAIR(BGl_string1675z00zzcc_ccz00, BgL_arg1370z00_230);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1369z00_229);
			}
			if (STRINGP(BgL_namez00_13))
				{	/* Cc/cc.scm 183 */
					obj_t BgL_onamez00_234;

					if (STRINGP(BgL_onamez00_14))
						{	/* Cc/cc.scm 183 */
							BgL_onamez00_234 = BgL_onamez00_14;
						}
					else
						{	/* Cc/cc.scm 183 */
							BgL_onamez00_234 = BgL_namez00_13;
						}
					{	/* Cc/cc.scm 183 */
						obj_t BgL_cczd2argszd2_235;

						{	/* Cc/cc.scm 184 */
							obj_t BgL_arg1396z00_245;
							obj_t BgL_arg1417z00_246;
							obj_t BgL_arg1418z00_247;
							obj_t BgL_arg1421z00_248;
							obj_t BgL_arg1422z00_249;
							obj_t BgL_arg1441z00_250;

							BgL_arg1396z00_245 =
								BGl_zc3z04anonymousza31475ze3ze70z60zzcc_ccz00
								(BGl_za2cczd2optionsza2zd2zzengine_paramz00);
							BgL_arg1417z00_246 =
								BGl_stringzd2splitzd2charz00zztools_miscz00
								(BGl_za2cflagsza2z00zzengine_paramz00,
								BCHAR(((unsigned char) ' ')));
							BgL_arg1418z00_247 =
								BGl_loopze70ze7zzcc_ccz00
								(BGl_za2libzd2dirza2zd2zzengine_paramz00);
							{	/* Cc/cc.scm 195 */
								bool_t BgL_test1782z00_968;

								if (CBOOL(BGl_za2czd2debugza2zd2zzengine_paramz00))
									{	/* Cc/cc.scm 195 */
										BgL_test1782z00_968 = ((bool_t) 1);
									}
								else
									{	/* Cc/cc.scm 195 */
										BgL_test1782z00_968 =
											(
											(long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >
											((long) 0));
									}
								if (BgL_test1782z00_968)
									{	/* Cc/cc.scm 195 */
										BgL_arg1421z00_248 =
											BGl_stringzd2splitzd2charz00zztools_miscz00
											(BGl_za2czd2debugzd2optionza2z00zzengine_paramz00,
											BCHAR(((unsigned char) ' ')));
									}
								else
									{	/* Cc/cc.scm 195 */
										BgL_arg1421z00_248 = BNIL;
									}
							}
							{	/* Cc/cc.scm 198 */
								obj_t BgL_arg1536z00_278;

								BgL_arg1536z00_278 =
									string_append(BgL_namez00_13, BGl_string1680z00zzcc_ccz00);
								{	/* Cc/cc.scm 198 */
									obj_t BgL_list1537z00_279;

									BgL_list1537z00_279 =
										MAKE_YOUNG_PAIR(BgL_arg1536z00_278, BNIL);
									BgL_arg1422z00_249 = BgL_list1537z00_279;
								}
							}
							{	/* Cc/cc.scm 199 */
								bool_t BgL_test1784z00_977;

								{	/* Cc/cc.scm 200 */
									unsigned char BgL_arg1582z00_293;

									{	/* Cc/cc.scm 200 */
										obj_t BgL_arg1584z00_294;

										{	/* Cc/cc.scm 200 */
											obj_t BgL_auxz00_978;

											{	/* Cc/cc.scm 200 */
												obj_t BgL_stringz00_508;

												BgL_stringz00_508 =
													BGl_za2cczd2ozd2optionza2z00zzengine_paramz00;
												BgL_auxz00_978 = BINT(STRING_LENGTH(BgL_stringz00_508));
											}
											BgL_arg1584z00_294 =
												BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_auxz00_978,
												BINT(((long) 1)));
										}
										BgL_arg1582z00_293 =
											STRING_REF(BGl_za2cczd2ozd2optionza2z00zzengine_paramz00,
											(long) CINT(BgL_arg1584z00_294));
									}
									BgL_test1784z00_977 =
										(BgL_arg1582z00_293 == ((unsigned char) ' '));
								}
								if (BgL_test1784z00_977)
									{	/* Cc/cc.scm 203 */
										obj_t BgL_arg1558z00_284;

										BgL_arg1558z00_284 =
											string_append_3(BgL_onamez00_234,
											BGl_string1676z00zzcc_ccz00,
											BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00);
										{	/* Cc/cc.scm 202 */
											obj_t BgL_list1559z00_285;

											{	/* Cc/cc.scm 202 */
												obj_t BgL_arg1561z00_286;

												BgL_arg1561z00_286 =
													MAKE_YOUNG_PAIR(BgL_arg1558z00_284, BNIL);
												BgL_list1559z00_285 =
													MAKE_YOUNG_PAIR
													(BGl_za2cczd2ozd2optionza2z00zzengine_paramz00,
													BgL_arg1561z00_286);
											}
											BgL_arg1441z00_250 = BgL_list1559z00_285;
										}
									}
								else
									{	/* Cc/cc.scm 204 */
										obj_t BgL_arg1564z00_287;

										{	/* Cc/cc.scm 204 */
											obj_t BgL_list1566z00_289;

											{	/* Cc/cc.scm 204 */
												obj_t BgL_arg1573z00_290;

												{	/* Cc/cc.scm 204 */
													obj_t BgL_arg1575z00_291;

													{	/* Cc/cc.scm 204 */
														obj_t BgL_arg1578z00_292;

														BgL_arg1578z00_292 =
															MAKE_YOUNG_PAIR
															(BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00,
															BNIL);
														BgL_arg1575z00_291 =
															MAKE_YOUNG_PAIR(BGl_string1676z00zzcc_ccz00,
															BgL_arg1578z00_292);
													}
													BgL_arg1573z00_290 =
														MAKE_YOUNG_PAIR(BgL_onamez00_234,
														BgL_arg1575z00_291);
												}
												BgL_list1566z00_289 =
													MAKE_YOUNG_PAIR
													(BGl_za2cczd2ozd2optionza2z00zzengine_paramz00,
													BgL_arg1573z00_290);
											}
											BgL_arg1564z00_287 =
												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
												(BgL_list1566z00_289);
										}
										{	/* Cc/cc.scm 204 */
											obj_t BgL_list1565z00_288;

											BgL_list1565z00_288 =
												MAKE_YOUNG_PAIR(BgL_arg1564z00_287, BNIL);
											BgL_arg1441z00_250 = BgL_list1565z00_288;
										}
									}
							}
							{	/* Cc/cc.scm 184 */
								obj_t BgL_list1442z00_251;

								{	/* Cc/cc.scm 184 */
									obj_t BgL_arg1448z00_252;

									{	/* Cc/cc.scm 184 */
										obj_t BgL_arg1449z00_253;

										{	/* Cc/cc.scm 184 */
											obj_t BgL_arg1461z00_254;

											{	/* Cc/cc.scm 184 */
												obj_t BgL_arg1462z00_255;

												{	/* Cc/cc.scm 184 */
													obj_t BgL_arg1464z00_256;

													{	/* Cc/cc.scm 184 */
														obj_t BgL_arg1465z00_257;

														{	/* Cc/cc.scm 184 */
															obj_t BgL_arg1474z00_258;

															BgL_arg1474z00_258 =
																MAKE_YOUNG_PAIR(BgL_arg1441z00_250, BNIL);
															BgL_arg1465z00_257 =
																MAKE_YOUNG_PAIR(BgL_arg1422z00_249,
																BgL_arg1474z00_258);
														}
														BgL_arg1464z00_256 =
															MAKE_YOUNG_PAIR(BgL_arg1421z00_248,
															BgL_arg1465z00_257);
													}
													BgL_arg1462z00_255 =
														MAKE_YOUNG_PAIR(BgL_arg1418z00_247,
														BgL_arg1464z00_256);
												}
												BgL_arg1461z00_254 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
													BgL_arg1462z00_255);
											}
											BgL_arg1449z00_253 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
												BgL_arg1461z00_254);
										}
										BgL_arg1448z00_252 =
											MAKE_YOUNG_PAIR(BgL_arg1417z00_246, BgL_arg1449z00_253);
									}
									BgL_list1442z00_251 =
										MAKE_YOUNG_PAIR(BgL_arg1396z00_245, BgL_arg1448z00_252);
								}
								BgL_cczd2argszd2_235 =
									BGl_appendz00zz__r4_pairs_and_lists_6_3z00
									(BgL_list1442z00_251);
						}}
						{	/* Cc/cc.scm 184 */

							{	/* Cc/cc.scm 205 */
								obj_t BgL_arg1381z00_236;

								BgL_arg1381z00_236 =
									MAKE_YOUNG_PAIR(BGl_za2ccza2z00zzengine_paramz00,
									BgL_cczd2argszd2_235);
								{	/* Cc/cc.scm 205 */
									obj_t BgL_list1382z00_237;

									{	/* Cc/cc.scm 205 */
										obj_t BgL_arg1383z00_238;

										{	/* Cc/cc.scm 205 */
											obj_t BgL_arg1384z00_239;

											BgL_arg1384z00_239 =
												MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
											BgL_arg1383z00_238 =
												MAKE_YOUNG_PAIR(BgL_arg1381z00_236, BgL_arg1384z00_239);
										}
										BgL_list1382z00_237 =
											MAKE_YOUNG_PAIR(BGl_string1689z00zzcc_ccz00,
											BgL_arg1383z00_238);
									}
									BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
										BgL_list1382z00_237);
							}}
							{	/* Cc/cc.scm 206 */
								obj_t BgL_runner1388z00_243;

								{	/* Cc/cc.scm 206 */
									obj_t BgL_arg1385z00_240;

									BgL_arg1385z00_240 =
										BGl_appendzd221011zd2zzcc_ccz00(BgL_cczd2argszd2_235,
										CNST_TABLE_REF(((long) 6)));
									{	/* Cc/cc.scm 206 */
										obj_t BgL_list1386z00_241;

										BgL_list1386z00_241 =
											MAKE_YOUNG_PAIR(BgL_arg1385z00_240, BNIL);
										BgL_runner1388z00_243 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BGl_za2ccza2z00zzengine_paramz00, BgL_list1386z00_241);
								}}
								{	/* Cc/cc.scm 206 */
									obj_t BgL_aux1387z00_242;

									BgL_aux1387z00_242 = CAR(BgL_runner1388z00_243);
									BgL_runner1388z00_243 = CDR(BgL_runner1388z00_243);
									BGl_runzd2processzd2zz__processz00(BgL_aux1387z00_242,
										BgL_runner1388z00_243);
							}}
							if (CBOOL(BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00))
								{	/* Cc/cc.scm 208 */
									obj_t BgL_arg1394z00_244;

									BgL_arg1394z00_244 =
										string_append(BgL_namez00_13, BGl_string1688z00zzcc_ccz00);
									{	/* Cc/cc.scm 208 */
										char *BgL_stringz00_520;

										BgL_stringz00_520 = BSTRING_TO_STRING(BgL_arg1394z00_244);
										if (unlink(BgL_stringz00_520))
											{	/* Cc/cc.scm 208 */
												return BFALSE;
											}
										else
											{	/* Cc/cc.scm 208 */
												return BTRUE;
											}
									}
								}
							else
								{	/* Cc/cc.scm 207 */
									return BFALSE;
								}
						}
					}
				}
			else
				{	/* Cc/cc.scm 180 */
					return
						BGl_errorz00zz__errorz00(BGl_string1671z00zzcc_ccz00,
						BGl_string1686z00zzcc_ccz00, BgL_namez00_13);
				}
		}

	}



/* <@anonymous:1475>~0 */
	obj_t BGl_zc3z04anonymousza31475ze3ze70z60zzcc_ccz00(obj_t BgL_l1055z00_260)
	{
		{	/* Cc/cc.scm 184 */
			if (NULLP(BgL_l1055z00_260))
				{	/* Cc/cc.scm 184 */
					return BNIL;
				}
			else
				{	/* Cc/cc.scm 185 */
					obj_t BgL_arg1477z00_263;
					obj_t BgL_arg1489z00_264;

					{	/* Cc/cc.scm 185 */
						obj_t BgL_oz00_265;

						BgL_oz00_265 = CAR(((obj_t) BgL_l1055z00_260));
						BgL_arg1477z00_263 =
							BGl_stringzd2splitzd2charz00zztools_miscz00(BgL_oz00_265,
							BCHAR(((unsigned char) ' ')));
					}
					{	/* Cc/cc.scm 184 */
						obj_t BgL_arg1493z00_266;

						BgL_arg1493z00_266 = CDR(((obj_t) BgL_l1055z00_260));
						BgL_arg1489z00_264 =
							BGl_zc3z04anonymousza31475ze3ze70z60zzcc_ccz00
							(BgL_arg1493z00_266);
					}
					return bgl_append2(BgL_arg1477z00_263, BgL_arg1489z00_264);
				}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zzcc_ccz00(obj_t BgL_pathz00_269)
	{
		{	/* Cc/cc.scm 190 */
			if (NULLP(BgL_pathz00_269))
				{	/* Cc/cc.scm 191 */
					return BNIL;
				}
			else
				{	/* Cc/cc.scm 193 */
					obj_t BgL_arg1497z00_272;
					obj_t BgL_arg1518z00_273;

					{	/* Cc/cc.scm 193 */
						obj_t BgL_arg1521z00_274;

						BgL_arg1521z00_274 = CAR(((obj_t) BgL_pathz00_269));
						BgL_arg1497z00_272 =
							string_append(BGl_string1687z00zzcc_ccz00, BgL_arg1521z00_274);
					}
					{	/* Cc/cc.scm 194 */
						obj_t BgL_arg1528z00_275;

						BgL_arg1528z00_275 = CDR(((obj_t) BgL_pathz00_269));
						BgL_arg1518z00_273 = BGl_loopze70ze7zzcc_ccz00(BgL_arg1528z00_275);
					}
					return MAKE_YOUNG_PAIR(BgL_arg1497z00_272, BgL_arg1518z00_273);
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcc_ccz00()
	{
		{	/* Cc/cc.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcc_ccz00()
	{
		{	/* Cc/cc.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcc_ccz00()
	{
		{	/* Cc/cc.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcc_ccz00()
	{
		{	/* Cc/cc.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1690z00zzcc_ccz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1690z00zzcc_ccz00));
			BGl_modulezd2initializa7ationz75zzcc_execz00(((long) 367900556),
				BSTRING_TO_STRING(BGl_string1690z00zzcc_ccz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1690z00zzcc_ccz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1690z00zzcc_ccz00));
			return
				BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1690z00zzcc_ccz00));
		}

	}

#ifdef __cplusplus
}
#endif
