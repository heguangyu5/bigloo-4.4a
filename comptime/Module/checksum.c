/*===========================================================================*/
/*   (Module/checksum.scm)                                                   */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/checksum.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static long BGl_symbolzd2ze3numberz31zzmodule_checksumz00(obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl_atomzd2ze3numberz31zzmodule_checksumz00(obj_t, obj_t);
	static obj_t BGl_z62modulezd2checksumzb0zzmodule_checksumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzmodule_checksumz00();
	static obj_t BGl_methodzd2initzd2zzmodule_checksumz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t fexists(char *);
	static obj_t BGl_gczd2rootszd2initz00zzmodule_checksumz00();
	BGL_IMPORT obj_t BGl_za2loadzd2pathza2zd2zz__evalz00;
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	BGL_IMPORT obj_t bgl_find_runtime_type(obj_t);
	BGL_IMPORT obj_t bgl_real_to_string(double);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_checksumz00 = BUNSPEC;
	static obj_t BGl_externzd2clausezd2checksumz00zzmodule_checksumz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31026ze3ze5zzmodule_checksumz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzmodule_checksumz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_modulezd2checksumzd2zzmodule_checksumz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_listzd2ze3numberz31zzmodule_checksumz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_checksumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_clausezd2checksumzd2zzmodule_checksumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_checksumz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_checksumz00();
	static obj_t BGl_includezd2checksumzd2zzmodule_checksumz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT long bgl_last_modification_time(char *);
	BGL_IMPORT long BGl_getzd2hashnumberzd2zz__hashz00(obj_t);
	static obj_t __cnst[10];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2checksumzd2envz00zzmodule_checksumz00,
		BgL_bgl_za762moduleza7d2chec1362z00,
		BGl_z62modulezd2checksumzb0zzmodule_checksumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1355z00zzmodule_checksumz00,
		BgL_bgl_string1355za700za7za7m1363za7, "Can't find include file", 23);
	      DEFINE_STRING(BGl_string1356z00zzmodule_checksumz00,
		BgL_bgl_string1356za700za7za7m1364za7, " -- ", 4);
	      DEFINE_STRING(BGl_string1357z00zzmodule_checksumz00,
		BgL_bgl_string1357za700za7za7m1365za7, "module checksum:Unknown clause",
		30);
	      DEFINE_STRING(BGl_string1358z00zzmodule_checksumz00,
		BgL_bgl_string1358za700za7za7m1366za7,
		"info assert default include java extern foreign export include-checksum directives ",
		83);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzmodule_checksumz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzmodule_checksumz00(long
		BgL_checksumz00_496, char *BgL_fromz00_497)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_checksumz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_checksumz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzmodule_checksumz00();
					BGl_libraryzd2moduleszd2initz00zzmodule_checksumz00();
					BGl_cnstzd2initzd2zzmodule_checksumz00();
					return BGl_methodzd2initzd2zzmodule_checksumz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_checksumz00()
	{
		{	/* Module/checksum.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"module_checksum");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_checksum");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0),
				"module_checksum");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "module_checksum");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0),
				"module_checksum");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					0), "module_checksum");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_checksum");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_checksum");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0),
				"module_checksum");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"module_checksum");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"module_checksum");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"module_checksum");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long) 0),
				"module_checksum");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "module_checksum");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_checksum");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"module_checksum");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"module_checksum");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_checksum");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_checksumz00()
	{
		{	/* Module/checksum.scm 18 */
			{	/* Module/checksum.scm 18 */
				obj_t BgL_cportz00_483;

				{	/* Module/checksum.scm 18 */
					obj_t BgL_stringz00_491;

					BgL_stringz00_491 = BGl_string1358z00zzmodule_checksumz00;
					{	/* Module/checksum.scm 18 */
						obj_t BgL_startz00_492;

						BgL_startz00_492 = BINT(((long) 0));
						{	/* Module/checksum.scm 18 */
							obj_t BgL_endz00_493;

							BgL_endz00_493 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_491)));
							{	/* Module/checksum.scm 18 */

								BgL_cportz00_483 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_491, BgL_startz00_492, BgL_endz00_493);
				}}}}
				{
					long BgL_iz00_484;

					BgL_iz00_484 = ((long) 9);
				BgL_loopz00_485:
					if ((BgL_iz00_484 == ((long) -1)))
						{	/* Module/checksum.scm 18 */
							return BUNSPEC;
						}
					else
						{	/* Module/checksum.scm 18 */
							{	/* Module/checksum.scm 18 */
								obj_t BgL_arg1360z00_487;

								{	/* Module/checksum.scm 18 */

									{	/* Module/checksum.scm 18 */
										obj_t BgL_locationz00_489;

										BgL_locationz00_489 = BBOOL(((bool_t) 0));
										{	/* Module/checksum.scm 18 */

											BgL_arg1360z00_487 =
												BGl_readz00zz__readerz00(BgL_cportz00_483,
												BgL_locationz00_489);
										}
									}
								}
								{	/* Module/checksum.scm 18 */
									int BgL_tmpz00_532;

									BgL_tmpz00_532 = (int) (BgL_iz00_484);
									CNST_TABLE_SET(BgL_tmpz00_532, BgL_arg1360z00_487);
							}}
							{	/* Module/checksum.scm 18 */
								int BgL_auxz00_490;

								BgL_auxz00_490 = (int) ((BgL_iz00_484 - ((long) 1)));
								{
									long BgL_iz00_537;

									BgL_iz00_537 = (long) (BgL_auxz00_490);
									BgL_iz00_484 = BgL_iz00_537;
									goto BgL_loopz00_485;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzmodule_checksumz00()
	{
		{	/* Module/checksum.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* module-checksum */
	BGL_EXPORTED_DEF long BGl_modulezd2checksumzd2zzmodule_checksumz00(obj_t
		BgL_modulez00_3, obj_t BgL_includezd2pathzd2_4)
	{
		{	/* Module/checksum.scm 24 */
			{	/* Module/checksum.scm 25 */
				long BgL_arg1018z00_235;
				obj_t BgL_arg1019z00_236;

				BgL_arg1018z00_235 =
					BGl_symbolzd2ze3numberz31zzmodule_checksumz00(CAR(CDR
						(BgL_modulez00_3)));
				BgL_arg1019z00_236 = CDR(CDR(BgL_modulez00_3));
				return
					(long)
					CINT(BGl_clausezd2checksumzd2zzmodule_checksumz00(BINT
						(BgL_arg1018z00_235), BgL_arg1019z00_236, BgL_includezd2pathzd2_4));
		}}

	}



/* &module-checksum */
	obj_t BGl_z62modulezd2checksumzb0zzmodule_checksumz00(obj_t BgL_envz00_477,
		obj_t BgL_modulez00_478, obj_t BgL_includezd2pathzd2_479)
	{
		{	/* Module/checksum.scm 24 */
			return
				BINT(BGl_modulezd2checksumzd2zzmodule_checksumz00(BgL_modulez00_478,
					BgL_includezd2pathzd2_479));
		}

	}



/* include-checksum */
	obj_t BGl_includezd2checksumzd2zzmodule_checksumz00(obj_t BgL_includez00_5,
		obj_t BgL_checksumz00_6, obj_t BgL_includezd2pathzd2_7)
	{
		{	/* Module/checksum.scm 30 */
			{
				obj_t BgL_expz00_52;

				{	/* Module/checksum.scm 37 */
					obj_t BgL_fiz00_32;

					BgL_fiz00_32 =
						BGl_findzd2filezf2pathz20zz__osz00(BgL_includez00_5,
						BGl_za2loadzd2pathza2zd2zz__evalz00);
					{	/* Module/checksum.scm 38 */
						bool_t BgL_test1373z00_551;

						if (STRINGP(BgL_fiz00_32))
							{	/* Module/checksum.scm 38 */
								BgL_test1373z00_551 = fexists(BSTRING_TO_STRING(BgL_fiz00_32));
							}
						else
							{	/* Module/checksum.scm 38 */
								BgL_test1373z00_551 = ((bool_t) 0);
							}
						if (BgL_test1373z00_551)
							{	/* Module/checksum.scm 39 */
								obj_t BgL_portz00_35;

								{	/* Module/checksum.scm 39 */

									BgL_portz00_35 =
										BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
										(BgL_fiz00_32, BTRUE, BINT(((long) 5000000)));
								}
								{	/* Module/checksum.scm 39 */
									obj_t BgL_dirz00_36;

									{	/* Module/checksum.scm 40 */
										obj_t BgL_exitd1012z00_39;

										BgL_exitd1012z00_39 = BGL_EXITD_TOP_AS_OBJ();
										{	/* Module/checksum.scm 44 */
											obj_t BgL_zc3z04anonymousza31026ze3z87_480;

											BgL_zc3z04anonymousza31026ze3z87_480 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31026ze3ze5zzmodule_checksumz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31026ze3z87_480,
												(int) (((long) 0)), BgL_portz00_35);
											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
												(BgL_exitd1012z00_39,
												BgL_zc3z04anonymousza31026ze3z87_480);
											{	/* Module/checksum.scm 40 */
												obj_t BgL_tmp1014z00_41;

												{	/* Module/checksum.scm 40 */
													obj_t BgL_expz00_42;

													{	/* Module/checksum.scm 40 */

														{	/* Module/checksum.scm 40 */

															BgL_expz00_42 =
																BGl_readz00zz__readerz00(
																((obj_t) BgL_portz00_35), BFALSE);
													}}
													{	/* Module/checksum.scm 41 */
														bool_t BgL_test1375z00_567;

														BgL_expz00_52 = BgL_expz00_42;
														if (PAIRP(BgL_expz00_52))
															{	/* Module/checksum.scm 36 */
																BgL_test1375z00_567 =
																	(CAR(BgL_expz00_52) ==
																	CNST_TABLE_REF(((long) 0)));
															}
														else
															{	/* Module/checksum.scm 36 */
																BgL_test1375z00_567 = ((bool_t) 0);
															}
														if (BgL_test1375z00_567)
															{	/* Module/checksum.scm 41 */
																BgL_tmp1014z00_41 = BgL_expz00_42;
															}
														else
															{	/* Module/checksum.scm 41 */
																BgL_tmp1014z00_41 = BFALSE;
															}
													}
												}
												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
													(BgL_exitd1012z00_39);
												bgl_close_input_port(((obj_t) BgL_portz00_35));
												BgL_dirz00_36 = BgL_tmp1014z00_41;
											}
										}
									}
									{	/* Module/checksum.scm 40 */

										if (CBOOL(BgL_dirz00_36))
											{	/* Module/checksum.scm 46 */
												obj_t BgL_arg1023z00_37;
												obj_t BgL_arg1024z00_38;

												BgL_arg1023z00_37 =
													BGl_atomzd2ze3numberz31zzmodule_checksumz00
													(BgL_checksumz00_6, BgL_includez00_5);
												BgL_arg1024z00_38 = CDR(((obj_t) BgL_dirz00_36));
												return
													BGl_clausezd2checksumzd2zzmodule_checksumz00
													(BgL_arg1023z00_37, BgL_arg1024z00_38,
													BgL_includezd2pathzd2_7);
											}
										else
											{	/* Module/checksum.scm 45 */
												return BgL_checksumz00_6;
											}
									}
								}
							}
						else
							{	/* Module/checksum.scm 38 */
								return
									BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
									BGl_string1355z00zzmodule_checksumz00, BgL_includez00_5);
		}}}}}

	}



/* &<@anonymous:1026> */
	obj_t BGl_z62zc3z04anonymousza31026ze3ze5zzmodule_checksumz00(obj_t
		BgL_envz00_481)
	{
		{	/* Module/checksum.scm 40 */
			{	/* Module/checksum.scm 44 */
				obj_t BgL_portz00_482;

				BgL_portz00_482 = PROCEDURE_REF(BgL_envz00_481, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_portz00_482));
			}
		}

	}



/* clause-checksum */
	obj_t BGl_clausezd2checksumzd2zzmodule_checksumz00(obj_t BgL_checksumz00_8,
		obj_t BgL_clausesz00_9, obj_t BgL_includezd2pathzd2_10)
	{
		{	/* Module/checksum.scm 55 */
			{
				obj_t BgL_clausesz00_63;
				obj_t BgL_checksumz00_64;

				BgL_clausesz00_63 = BgL_clausesz00_9;
				BgL_checksumz00_64 = BgL_checksumz00_8;
			BgL_zc3z04anonymousza31032ze3z87_65:
				{
					obj_t BgL_filesz00_73;
					obj_t BgL_restz00_74;

					if (NULLP(BgL_clausesz00_63))
						{	/* Module/checksum.scm 56 */
							return BgL_checksumz00_64;
						}
					else
						{	/* Module/checksum.scm 56 */
							if (PAIRP(BgL_clausesz00_63))
								{	/* Module/checksum.scm 56 */
									obj_t BgL_carzd2120zd2_80;

									BgL_carzd2120zd2_80 = CAR(BgL_clausesz00_63);
									if (PAIRP(BgL_carzd2120zd2_80))
										{	/* Module/checksum.scm 56 */
											if (
												(CAR(BgL_carzd2120zd2_80) ==
													CNST_TABLE_REF(((long) 2))))
												{	/* Module/checksum.scm 56 */
													obj_t BgL_arg1038z00_84;
													obj_t BgL_arg1039z00_85;

													BgL_arg1038z00_84 = CDR(BgL_carzd2120zd2_80);
													BgL_arg1039z00_85 = CDR(BgL_clausesz00_63);
													{
														obj_t BgL_checksumz00_602;
														obj_t BgL_clausesz00_601;

														BgL_clausesz00_601 = BgL_arg1039z00_85;
														BgL_checksumz00_602 =
															BGl_listzd2ze3numberz31zzmodule_checksumz00
															(BgL_checksumz00_64, BgL_arg1038z00_84);
														BgL_checksumz00_64 = BgL_checksumz00_602;
														BgL_clausesz00_63 = BgL_clausesz00_601;
														goto BgL_zc3z04anonymousza31032ze3z87_65;
													}
												}
											else
												{	/* Module/checksum.scm 56 */
													obj_t BgL_cdrzd2133zd2_87;

													BgL_cdrzd2133zd2_87 = CDR(BgL_clausesz00_63);
													{	/* Module/checksum.scm 56 */
														obj_t BgL_carzd2135zd2_88;
														obj_t BgL_cdrzd2136zd2_89;

														BgL_carzd2135zd2_88 =
															CAR(((obj_t) BgL_carzd2120zd2_80));
														BgL_cdrzd2136zd2_89 =
															CDR(((obj_t) BgL_carzd2120zd2_80));
														if (
															(BgL_carzd2135zd2_88 ==
																CNST_TABLE_REF(((long) 3))))
															{
																obj_t BgL_checksumz00_613;
																obj_t BgL_clausesz00_612;

																BgL_clausesz00_612 = BgL_cdrzd2133zd2_87;
																BgL_checksumz00_613 =
																	BGl_externzd2clausezd2checksumz00zzmodule_checksumz00
																	(BgL_checksumz00_64, BgL_cdrzd2136zd2_89,
																	BgL_includezd2pathzd2_10);
																BgL_checksumz00_64 = BgL_checksumz00_613;
																BgL_clausesz00_63 = BgL_clausesz00_612;
																goto BgL_zc3z04anonymousza31032ze3z87_65;
															}
														else
															{	/* Module/checksum.scm 56 */
																if (
																	(BgL_carzd2135zd2_88 ==
																		CNST_TABLE_REF(((long) 4))))
																	{
																		obj_t BgL_checksumz00_619;
																		obj_t BgL_clausesz00_618;

																		BgL_clausesz00_618 = BgL_cdrzd2133zd2_87;
																		BgL_checksumz00_619 =
																			BGl_externzd2clausezd2checksumz00zzmodule_checksumz00
																			(BgL_checksumz00_64, BgL_cdrzd2136zd2_89,
																			BgL_includezd2pathzd2_10);
																		BgL_checksumz00_64 = BgL_checksumz00_619;
																		BgL_clausesz00_63 = BgL_clausesz00_618;
																		goto BgL_zc3z04anonymousza31032ze3z87_65;
																	}
																else
																	{	/* Module/checksum.scm 56 */
																		if (
																			(BgL_carzd2135zd2_88 ==
																				CNST_TABLE_REF(((long) 5))))
																			{
																				obj_t BgL_checksumz00_625;
																				obj_t BgL_clausesz00_624;

																				BgL_clausesz00_624 =
																					BgL_cdrzd2133zd2_87;
																				BgL_checksumz00_625 =
																					BGl_externzd2clausezd2checksumz00zzmodule_checksumz00
																					(BgL_checksumz00_64,
																					BgL_cdrzd2136zd2_89,
																					BgL_includezd2pathzd2_10);
																				BgL_checksumz00_64 =
																					BgL_checksumz00_625;
																				BgL_clausesz00_63 = BgL_clausesz00_624;
																				goto
																					BgL_zc3z04anonymousza31032ze3z87_65;
																			}
																		else
																			{	/* Module/checksum.scm 56 */
																				obj_t BgL_carzd2145zd2_93;

																				BgL_carzd2145zd2_93 =
																					CAR(BgL_clausesz00_63);
																				if (
																					(CAR(
																							((obj_t) BgL_carzd2145zd2_93)) ==
																						CNST_TABLE_REF(((long) 6))))
																					{	/* Module/checksum.scm 56 */
																						obj_t BgL_arg1045z00_96;
																						obj_t BgL_arg1047z00_97;

																						BgL_arg1045z00_96 =
																							CDR(
																							((obj_t) BgL_carzd2145zd2_93));
																						BgL_arg1047z00_97 =
																							CDR(BgL_clausesz00_63);
																						BgL_filesz00_73 = BgL_arg1045z00_96;
																						BgL_restz00_74 = BgL_arg1047z00_97;
																						{
																							obj_t BgL_filesz00_103;
																							obj_t BgL_checksumz00_104;

																							BgL_filesz00_103 =
																								BgL_filesz00_73;
																							BgL_checksumz00_104 =
																								BgL_checksumz00_64;
																						BgL_zc3z04anonymousza31052ze3z87_105:
																							if (NULLP
																								(BgL_filesz00_103))
																								{
																									obj_t BgL_checksumz00_639;
																									obj_t BgL_clausesz00_638;

																									BgL_clausesz00_638 =
																										BgL_restz00_74;
																									BgL_checksumz00_639 =
																										BgL_checksumz00_104;
																									BgL_checksumz00_64 =
																										BgL_checksumz00_639;
																									BgL_clausesz00_63 =
																										BgL_clausesz00_638;
																									goto
																										BgL_zc3z04anonymousza31032ze3z87_65;
																								}
																							else
																								{	/* Module/checksum.scm 70 */
																									obj_t BgL_arg1054z00_107;
																									obj_t BgL_arg1055z00_108;

																									BgL_arg1054z00_107 =
																										CDR(
																										((obj_t) BgL_filesz00_103));
																									{	/* Module/checksum.scm 70 */
																										obj_t BgL_arg1056z00_109;

																										BgL_arg1056z00_109 =
																											CAR(
																											((obj_t)
																												BgL_filesz00_103));
																										BgL_arg1055z00_108 =
																											BGl_includezd2checksumzd2zzmodule_checksumz00
																											(BgL_arg1056z00_109,
																											BgL_checksumz00_104,
																											BgL_includezd2pathzd2_10);
																									}
																									{
																										obj_t BgL_checksumz00_646;
																										obj_t BgL_filesz00_645;

																										BgL_filesz00_645 =
																											BgL_arg1054z00_107;
																										BgL_checksumz00_646 =
																											BgL_arg1055z00_108;
																										BgL_checksumz00_104 =
																											BgL_checksumz00_646;
																										BgL_filesz00_103 =
																											BgL_filesz00_645;
																										goto
																											BgL_zc3z04anonymousza31052ze3z87_105;
																									}
																								}
																						}
																					}
																				else
																					{	/* Module/checksum.scm 56 */
																					BgL_tagzd2110zd2_76:
																						{	/* Module/checksum.scm 74 */
																							obj_t BgL_arg1057z00_111;

																							BgL_arg1057z00_111 =
																								CDR(
																								((obj_t) BgL_clausesz00_63));
																							{
																								obj_t BgL_clausesz00_649;

																								BgL_clausesz00_649 =
																									BgL_arg1057z00_111;
																								BgL_clausesz00_63 =
																									BgL_clausesz00_649;
																								goto
																									BgL_zc3z04anonymousza31032ze3z87_65;
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
										{	/* Module/checksum.scm 56 */
											goto BgL_tagzd2110zd2_76;
										}
								}
							else
								{	/* Module/checksum.scm 56 */
									goto BgL_tagzd2110zd2_76;
								}
						}
				}
			}
		}

	}



/* symbol->number */
	long BGl_symbolzd2ze3numberz31zzmodule_checksumz00(obj_t BgL_symbolz00_11)
	{
		{	/* Module/checksum.scm 79 */
			{
				char *BgL_strz00_116;

				{	/* Module/checksum.scm 94 */
					char *BgL_arg1058z00_114;

					{	/* Module/checksum.scm 94 */
						obj_t BgL_arg1059z00_115;

						{	/* Module/checksum.scm 94 */
							obj_t BgL_res1274z00_306;

							{	/* Module/checksum.scm 94 */
								obj_t BgL_arg1466z00_305;

								BgL_arg1466z00_305 =
									SYMBOL_TO_STRING(((obj_t) BgL_symbolz00_11));
								BgL_res1274z00_306 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_305);
							}
							BgL_arg1059z00_115 = BgL_res1274z00_306;
						}
						BgL_strz00_116 = BSTRING_TO_STRING(BgL_arg1059z00_115);
						{	/* Module/checksum.scm 81 */
							long BgL_lenz00_118;

							BgL_lenz00_118 =
								(STRING_LENGTH(string_to_bstring(BgL_strz00_116)) - ((long) 1));
							{
								long BgL_iz00_120;
								bool_t BgL_armedzf3zf3_121;

								BgL_iz00_120 = ((long) 0);
								BgL_armedzf3zf3_121 = ((bool_t) 0);
							BgL_zc3z04anonymousza31061ze3z87_122:
								if ((BgL_iz00_120 == BgL_lenz00_118))
									{	/* Module/checksum.scm 86 */
										BgL_arg1058z00_114 = BgL_strz00_116;
									}
								else
									{	/* Module/checksum.scm 86 */
										if (
											(STRING_REF(string_to_bstring(BgL_strz00_116),
													BgL_iz00_120) == ((unsigned char) ':')))
											{	/* Module/checksum.scm 88 */
												if (BgL_armedzf3zf3_121)
													{	/* Module/checksum.scm 90 */
														long BgL_arg1065z00_126;
														long BgL_arg1073z00_127;

														BgL_arg1065z00_126 = (BgL_iz00_120 + ((long) 1));
														BgL_arg1073z00_127 = (BgL_lenz00_118 + ((long) 1));
														BgL_arg1058z00_114 =
															BSTRING_TO_STRING(c_substring(string_to_bstring
																(BgL_strz00_116), BgL_arg1065z00_126,
																BgL_arg1073z00_127));
													}
												else
													{
														bool_t BgL_armedzf3zf3_670;
														long BgL_iz00_668;

														BgL_iz00_668 = (BgL_iz00_120 + ((long) 1));
														BgL_armedzf3zf3_670 = ((bool_t) 1);
														BgL_armedzf3zf3_121 = BgL_armedzf3zf3_670;
														BgL_iz00_120 = BgL_iz00_668;
														goto BgL_zc3z04anonymousza31061ze3z87_122;
													}
											}
										else
											{
												bool_t BgL_armedzf3zf3_673;
												long BgL_iz00_671;

												BgL_iz00_671 = (BgL_iz00_120 + ((long) 1));
												BgL_armedzf3zf3_673 = ((bool_t) 0);
												BgL_armedzf3zf3_121 = BgL_armedzf3zf3_673;
												BgL_iz00_120 = BgL_iz00_671;
												goto BgL_zc3z04anonymousza31061ze3z87_122;
											}
									}
							}
						}
					}
					return
						BGl_getzd2hashnumberzd2zz__hashz00(string_to_bstring
						(BgL_arg1058z00_114));
				}
			}
		}

	}



/* atom->number */
	obj_t BGl_atomzd2ze3numberz31zzmodule_checksumz00(obj_t BgL_checksumz00_13,
		obj_t BgL_clausez00_14)
	{
		{	/* Module/checksum.scm 105 */
		BGl_atomzd2ze3numberz31zzmodule_checksumz00:
			if (INTEGERP(BgL_clausez00_14))
				{	/* Module/checksum.scm 107 */
					return
						BINT(
						((long) CINT(BgL_checksumz00_13) ^ (long) CINT(BgL_clausez00_14)));
				}
			else
				{	/* Module/checksum.scm 107 */
					if (REALP(BgL_clausez00_14))
						{	/* Module/checksum.scm 110 */
							obj_t BgL_arg1103z00_136;

							BgL_arg1103z00_136 =
								bgl_real_to_string(REAL_TO_DOUBLE(BgL_clausez00_14));
							{
								obj_t BgL_clausez00_687;

								BgL_clausez00_687 = BgL_arg1103z00_136;
								BgL_clausez00_14 = BgL_clausez00_687;
								goto BGl_atomzd2ze3numberz31zzmodule_checksumz00;
							}
						}
					else
						{	/* Module/checksum.scm 109 */
							if (CHARP(BgL_clausez00_14))
								{	/* Module/checksum.scm 111 */
									return
										BINT(
										((long) CINT(BgL_checksumz00_13) ^
											(((long) 23) + (CCHAR(BgL_clausez00_14)))));
								}
							else
								{	/* Module/checksum.scm 111 */
									if (CNSTP(BgL_clausez00_14))
										{	/* Module/checksum.scm 114 */
											long BgL_arg1113z00_141;

											BgL_arg1113z00_141 =
												(((long) 90) + CCNST(BgL_clausez00_14));
											return
												BINT(
												((long) CINT(BgL_checksumz00_13) ^ BgL_arg1113z00_141));
										}
									else
										{	/* Module/checksum.scm 113 */
											if (STRINGP(BgL_clausez00_14))
												{	/* Module/checksum.scm 116 */
													long BgL_arg1116z00_144;

													BgL_arg1116z00_144 =
														(((long) 4) +
														BGl_getzd2hashnumberzd2zz__hashz00
														(BgL_clausez00_14));
													return BINT(((long) CINT(BgL_checksumz00_13) ^
															BgL_arg1116z00_144));
												}
											else
												{	/* Module/checksum.scm 115 */
													if (SYMBOLP(BgL_clausez00_14))
														{	/* Module/checksum.scm 118 */
															long BgL_arg1121z00_147;

															BgL_arg1121z00_147 =
																(((long) 150) +
																BGl_symbolzd2ze3numberz31zzmodule_checksumz00
																(BgL_clausez00_14));
															return BINT(((long) CINT(BgL_checksumz00_13) ^
																	BgL_arg1121z00_147));
														}
													else
														{	/* Module/checksum.scm 117 */
															if (KEYWORDP(BgL_clausez00_14))
																{	/* Module/checksum.scm 119 */
																	return
																		BINT(
																		((long) CINT(BgL_checksumz00_13) ^
																			(((long) 151) + ((long) 0))));
																}
															else
																{	/* Module/checksum.scm 119 */
																	if (PAIRP(BgL_clausez00_14))
																		{	/* Module/checksum.scm 121 */
																			return
																				BGl_listzd2ze3numberz31zzmodule_checksumz00
																				(BgL_checksumz00_13, BgL_clausez00_14);
																		}
																	else
																		{	/* Module/checksum.scm 121 */
																			if (ELONGP(BgL_clausez00_14))
																				{	/* Module/checksum.scm 124 */
																					long BgL_arg1128z00_154;

																					{	/* Module/checksum.scm 124 */
																						long BgL_res1296z00_347;

																						{	/* Module/checksum.scm 124 */
																							long BgL_xz00_346;

																							BgL_xz00_346 =
																								BELONG_TO_LONG
																								(BgL_clausez00_14);
																							BgL_res1296z00_347 =
																								(long) (BgL_xz00_346);
																						}
																						BgL_arg1128z00_154 =
																							BgL_res1296z00_347;
																					}
																					return
																						BINT(
																						((long) CINT(BgL_checksumz00_13) ^
																							BgL_arg1128z00_154));
																				}
																			else
																				{	/* Module/checksum.scm 123 */
																					if (LLONGP(BgL_clausez00_14))
																						{	/* Module/checksum.scm 126 */
																							long BgL_xz00_361;
																							long BgL_yz00_362;

																							BgL_xz00_361 =
																								(long) CINT(BgL_checksumz00_13);
																							{	/* Module/checksum.scm 127 */
																								BGL_LONGLONG_T BgL_tmpz00_736;

																								BgL_tmpz00_736 =
																									(
																									(BLLONG_TO_LLONG
																										(BgL_clausez00_14) >>
																										(int) (((long) 32))) ^
																									((BLLONG_TO_LLONG
																											(BgL_clausez00_14) <<
																											(int) (((long) 32))) >>
																										(int) (((long) 32))));
																								BgL_yz00_362 =
																									LLONG_TO_LONG(BgL_tmpz00_736);
																							}
																							return
																								BINT(
																								(BgL_xz00_361 ^ BgL_yz00_362));
																						}
																					else
																						{	/* Module/checksum.scm 125 */
																							if (BGL_INT8P(BgL_clausez00_14))
																								{	/* Module/checksum.scm 130 */
																									long BgL_arg1155z00_161;

																									{	/* Module/checksum.scm 130 */
																										long BgL_res1306z00_369;

																										{	/* Module/checksum.scm 130 */
																											int8_t BgL_xz00_365;

																											BgL_xz00_365 =
																												BGL_BINT8_TO_INT8
																												(BgL_clausez00_14);
																											{	/* Module/checksum.scm 130 */
																												long BgL_arg1460z00_366;

																												BgL_arg1460z00_366 =
																													(long) (BgL_xz00_365);
																												{	/* Module/checksum.scm 130 */
																													long
																														BgL_res1305z00_368;
																													BgL_res1305z00_368 =
																														(long)
																														(BgL_arg1460z00_366);
																													BgL_res1306z00_369 =
																														BgL_res1305z00_368;
																										}}}
																										BgL_arg1155z00_161 =
																											BgL_res1306z00_369;
																									}
																									return
																										BINT(
																										((long)
																											CINT(BgL_checksumz00_13) ^
																											BgL_arg1155z00_161));
																								}
																							else
																								{	/* Module/checksum.scm 129 */
																									if (BGL_UINT8P
																										(BgL_clausez00_14))
																										{	/* Module/checksum.scm 132 */
																											long BgL_arg1165z00_163;

																											{	/* Module/checksum.scm 132 */
																												long BgL_res1310z00_378;

																												{	/* Module/checksum.scm 132 */
																													uint8_t BgL_xz00_374;

																													BgL_xz00_374 =
																														BGL_BUINT8_TO_UINT8
																														(BgL_clausez00_14);
																													{	/* Module/checksum.scm 132 */
																														long
																															BgL_arg1459z00_375;
																														BgL_arg1459z00_375 =
																															(long)
																															(BgL_xz00_374);
																														{	/* Module/checksum.scm 132 */
																															long
																																BgL_res1309z00_377;
																															BgL_res1309z00_377
																																=
																																(long)
																																(BgL_arg1459z00_375);
																															BgL_res1310z00_378
																																=
																																BgL_res1309z00_377;
																												}}}
																												BgL_arg1165z00_163 =
																													BgL_res1310z00_378;
																											}
																											return
																												BINT(
																												((long)
																													CINT
																													(BgL_checksumz00_13) ^
																													BgL_arg1165z00_163));
																										}
																									else
																										{	/* Module/checksum.scm 131 */
																											if (BGL_INT16P
																												(BgL_clausez00_14))
																												{	/* Module/checksum.scm 134 */
																													long
																														BgL_arg1167z00_165;
																													{	/* Module/checksum.scm 134 */
																														long
																															BgL_res1314z00_387;
																														{	/* Module/checksum.scm 134 */
																															int16_t
																																BgL_xz00_383;
																															BgL_xz00_383 =
																																BGL_BINT16_TO_INT16
																																(BgL_clausez00_14);
																															{	/* Module/checksum.scm 134 */
																																long
																																	BgL_arg1458z00_384;
																																BgL_arg1458z00_384
																																	=
																																	(long)
																																	(BgL_xz00_383);
																																{	/* Module/checksum.scm 134 */
																																	long
																																		BgL_res1313z00_386;
																																	BgL_res1313z00_386
																																		=
																																		(long)
																																		(BgL_arg1458z00_384);
																																	BgL_res1314z00_387
																																		=
																																		BgL_res1313z00_386;
																														}}}
																														BgL_arg1167z00_165 =
																															BgL_res1314z00_387;
																													}
																													return
																														BINT(
																														((long)
																															CINT
																															(BgL_checksumz00_13)
																															^
																															BgL_arg1167z00_165));
																												}
																											else
																												{	/* Module/checksum.scm 133 */
																													if (BGL_UINT16P
																														(BgL_clausez00_14))
																														{	/* Module/checksum.scm 136 */
																															long
																																BgL_arg1169z00_167;
																															{	/* Module/checksum.scm 136 */
																																long
																																	BgL_res1318z00_396;
																																{	/* Module/checksum.scm 136 */
																																	uint16_t
																																		BgL_xz00_392;
																																	BgL_xz00_392 =
																																		BGL_BUINT16_TO_UINT16
																																		(BgL_clausez00_14);
																																	{	/* Module/checksum.scm 136 */
																																		long
																																			BgL_arg1457z00_393;
																																		BgL_arg1457z00_393
																																			=
																																			(long)
																																			(BgL_xz00_392);
																																		{	/* Module/checksum.scm 136 */
																																			long
																																				BgL_res1317z00_395;
																																			BgL_res1317z00_395
																																				=
																																				(long)
																																				(BgL_arg1457z00_393);
																																			BgL_res1318z00_396
																																				=
																																				BgL_res1317z00_395;
																																}}}
																																BgL_arg1169z00_167
																																	=
																																	BgL_res1318z00_396;
																															}
																															return
																																BINT(
																																((long)
																																	CINT
																																	(BgL_checksumz00_13)
																																	^
																																	BgL_arg1169z00_167));
																														}
																													else
																														{	/* Module/checksum.scm 135 */
																															if (BGL_INT32P
																																(BgL_clausez00_14))
																																{	/* Module/checksum.scm 138 */
																																	long
																																		BgL_arg1172z00_169;
																																	{	/* Module/checksum.scm 138 */
																																		long
																																			BgL_res1322z00_405;
																																		{	/* Module/checksum.scm 138 */
																																			int32_t
																																				BgL_xz00_401;
																																			BgL_xz00_401
																																				=
																																				BGL_BINT32_TO_INT32
																																				(BgL_clausez00_14);
																																			{	/* Module/checksum.scm 138 */
																																				long
																																					BgL_arg1456z00_402;
																																				BgL_arg1456z00_402
																																					=
																																					(long)
																																					(BgL_xz00_401);
																																				{	/* Module/checksum.scm 138 */
																																					long
																																						BgL_res1321z00_404;
																																					BgL_res1321z00_404
																																						=
																																						(long)
																																						(BgL_arg1456z00_402);
																																					BgL_res1322z00_405
																																						=
																																						BgL_res1321z00_404;
																																		}}}
																																		BgL_arg1172z00_169
																																			=
																																			BgL_res1322z00_405;
																																	}
																																	return
																																		BINT(
																																		((long)
																																			CINT
																																			(BgL_checksumz00_13)
																																			^
																																			BgL_arg1172z00_169));
																																}
																															else
																																{	/* Module/checksum.scm 137 */
																																	if (BGL_UINT32P(BgL_clausez00_14))
																																		{	/* Module/checksum.scm 140 */
																																			long
																																				BgL_arg1174z00_171;
																																			{	/* Module/checksum.scm 140 */
																																				long
																																					BgL_res1325z00_411;
																																				{	/* Module/checksum.scm 140 */
																																					uint32_t
																																						BgL_xz00_410;
																																					BgL_xz00_410
																																						=
																																						BGL_BUINT32_TO_UINT32
																																						(BgL_clausez00_14);
																																					BgL_res1325z00_411
																																						=
																																						(long)
																																						(BgL_xz00_410);
																																				}
																																				BgL_arg1174z00_171
																																					=
																																					BgL_res1325z00_411;
																																			}
																																			return
																																				BINT(
																																				((long)
																																					CINT
																																					(BgL_checksumz00_13)
																																					^
																																					BgL_arg1174z00_171));
																																		}
																																	else
																																		{	/* Module/checksum.scm 139 */
																																			if (BGL_INT64P(BgL_clausez00_14))
																																				{	/* Module/checksum.scm 142 */
																																					long
																																						BgL_arg1176z00_173;
																																					{	/* Module/checksum.scm 142 */
																																						long
																																							BgL_res1329z00_420;
																																						{	/* Module/checksum.scm 142 */
																																							int64_t
																																								BgL_xz00_416;
																																							BgL_xz00_416
																																								=
																																								BGL_BINT64_TO_INT64
																																								(BgL_clausez00_14);
																																							{	/* Module/checksum.scm 142 */
																																								long
																																									BgL_arg1455z00_417;
																																								BgL_arg1455z00_417
																																									=
																																									(long)
																																									(BgL_xz00_416);
																																								{	/* Module/checksum.scm 142 */
																																									long
																																										BgL_res1328z00_419;
																																									BgL_res1328z00_419
																																										=
																																										(long)
																																										(BgL_arg1455z00_417);
																																									BgL_res1329z00_420
																																										=
																																										BgL_res1328z00_419;
																																						}}}
																																						BgL_arg1176z00_173
																																							=
																																							BgL_res1329z00_420;
																																					}
																																					return
																																						BINT
																																						(((long) CINT(BgL_checksumz00_13) ^ BgL_arg1176z00_173));
																																				}
																																			else
																																				{	/* Module/checksum.scm 141 */
																																					if (BGL_UINT64P(BgL_clausez00_14))
																																						{	/* Module/checksum.scm 144 */
																																							long
																																								BgL_arg1178z00_175;
																																							{	/* Module/checksum.scm 144 */
																																								long
																																									BgL_res1333z00_429;
																																								{	/* Module/checksum.scm 144 */
																																									uint64_t
																																										BgL_xz00_425;
																																									BgL_xz00_425
																																										=
																																										BGL_BINT64_TO_INT64
																																										(BgL_clausez00_14);
																																									{	/* Module/checksum.scm 144 */
																																										long
																																											BgL_arg1454z00_426;
																																										BgL_arg1454z00_426
																																											=
																																											(long)
																																											(BgL_xz00_425);
																																										{	/* Module/checksum.scm 144 */
																																											long
																																												BgL_res1332z00_428;
																																											BgL_res1332z00_428
																																												=
																																												(long)
																																												(BgL_arg1454z00_426);
																																											BgL_res1333z00_429
																																												=
																																												BgL_res1332z00_428;
																																								}}}
																																								BgL_arg1178z00_175
																																									=
																																									BgL_res1333z00_429;
																																							}
																																							return
																																								BINT
																																								(
																																								((long) CINT(BgL_checksumz00_13) ^ BgL_arg1178z00_175));
																																						}
																																					else
																																						{	/* Module/checksum.scm 143 */
																																							if (BGL_INT32P(BgL_clausez00_14))
																																								{	/* Module/checksum.scm 146 */
																																									long
																																										BgL_arg1186z00_177;
																																									{	/* Module/checksum.scm 146 */
																																										long
																																											BgL_res1337z00_438;
																																										{	/* Module/checksum.scm 146 */
																																											int32_t
																																												BgL_xz00_434;
																																											BgL_xz00_434
																																												=
																																												BGL_BINT32_TO_INT32
																																												(BgL_clausez00_14);
																																											{	/* Module/checksum.scm 146 */
																																												long
																																													BgL_arg1456z00_435;
																																												BgL_arg1456z00_435
																																													=
																																													(long)
																																													(BgL_xz00_434);
																																												{	/* Module/checksum.scm 146 */
																																													long
																																														BgL_res1336z00_437;
																																													BgL_res1336z00_437
																																														=
																																														(long)
																																														(BgL_arg1456z00_435);
																																													BgL_res1337z00_438
																																														=
																																														BgL_res1336z00_437;
																																										}}}
																																										BgL_arg1186z00_177
																																											=
																																											BgL_res1337z00_438;
																																									}
																																									return
																																										BINT
																																										(
																																										((long) CINT(BgL_checksumz00_13) ^ BgL_arg1186z00_177));
																																								}
																																							else
																																								{	/* Module/checksum.scm 145 */
																																									{	/* Module/checksum.scm 149 */
																																										obj_t
																																											BgL_arg1190z00_178;
																																										BgL_arg1190z00_178
																																											=
																																											bgl_find_runtime_type
																																											(BgL_clausez00_14);
																																										{	/* Module/checksum.scm 148 */
																																											obj_t
																																												BgL_list1191z00_179;
																																											{	/* Module/checksum.scm 148 */
																																												obj_t
																																													BgL_arg1194z00_180;
																																												{	/* Module/checksum.scm 148 */
																																													obj_t
																																														BgL_arg1197z00_181;
																																													{	/* Module/checksum.scm 148 */
																																														obj_t
																																															BgL_arg1201z00_182;
																																														BgL_arg1201z00_182
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BgL_arg1190z00_178,
																																															BNIL);
																																														BgL_arg1197z00_181
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BGl_string1356z00zzmodule_checksumz00,
																																															BgL_arg1201z00_182);
																																													}
																																													BgL_arg1194z00_180
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BgL_clausez00_14,
																																														BgL_arg1197z00_181);
																																												}
																																												BgL_list1191z00_179
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BGl_string1357z00zzmodule_checksumz00,
																																													BgL_arg1194z00_180);
																																											}
																																											BGl_warningz00zz__errorz00
																																												(BgL_list1191z00_179);
																																										}
																																									}
																																									return
																																										BINT
																																										(
																																										((long) 0));
		}}}}}}}}}}}}}}}}}}}}

	}



/* list->number */
	obj_t BGl_listzd2ze3numberz31zzmodule_checksumz00(obj_t BgL_checksumz00_15,
		obj_t BgL_clausez00_16)
	{
		{	/* Module/checksum.scm 155 */
		BGl_listzd2ze3numberz31zzmodule_checksumz00:
			{

				if (NULLP(BgL_clausez00_16))
					{	/* Module/checksum.scm 156 */
						return BgL_checksumz00_15;
					}
				else
					{	/* Module/checksum.scm 156 */
						if (PAIRP(BgL_clausez00_16))
							{	/* Module/checksum.scm 156 */
								obj_t BgL_carzd2174zd2_189;

								BgL_carzd2174zd2_189 = CAR(BgL_clausez00_16);
								if ((BgL_carzd2174zd2_189 == CNST_TABLE_REF(((long) 7))))
									{	/* Module/checksum.scm 156 */
										return BINT(((long) 0));
									}
								else
									{	/* Module/checksum.scm 156 */
										if ((BgL_carzd2174zd2_189 == CNST_TABLE_REF(((long) 8))))
											{	/* Module/checksum.scm 156 */
												return BINT(((long) 0));
											}
										else
											{	/* Module/checksum.scm 156 */
												if (
													(BgL_carzd2174zd2_189 == CNST_TABLE_REF(((long) 9))))
													{	/* Module/checksum.scm 156 */
														return BINT(((long) 0));
													}
												else
													{	/* Module/checksum.scm 156 */
													BgL_tagzd2172zd2_185:
														if (PAIRP(BgL_clausez00_16))
															{
																obj_t BgL_clausez00_849;
																obj_t BgL_checksumz00_846;

																BgL_checksumz00_846 =
																	BGl_atomzd2ze3numberz31zzmodule_checksumz00
																	(BgL_checksumz00_15, CAR(BgL_clausez00_16));
																BgL_clausez00_849 = CDR(BgL_clausez00_16);
																BgL_clausez00_16 = BgL_clausez00_849;
																BgL_checksumz00_15 = BgL_checksumz00_846;
																goto
																	BGl_listzd2ze3numberz31zzmodule_checksumz00;
															}
														else
															{	/* Module/checksum.scm 162 */
																return
																	BGl_atomzd2ze3numberz31zzmodule_checksumz00
																	(BgL_checksumz00_15, BgL_clausez00_16);
															}
													}
											}
									}
							}
						else
							{	/* Module/checksum.scm 156 */
								goto BgL_tagzd2172zd2_185;
							}
					}
			}
		}

	}



/* extern-clause-checksum */
	obj_t BGl_externzd2clausezd2checksumz00zzmodule_checksumz00(obj_t
		BgL_checksumz00_17, obj_t BgL_clausesz00_18, obj_t BgL_includezd2pathzd2_19)
	{
		{	/* Module/checksum.scm 169 */
			{
				obj_t BgL_clausesz00_199;
				obj_t BgL_checksumz00_200;

				BgL_clausesz00_199 = BgL_clausesz00_18;
				BgL_checksumz00_200 = BgL_checksumz00_17;
			BgL_zc3z04anonymousza31222ze3z87_201:
				{
					obj_t BgL_filez00_203;
					obj_t BgL_restz00_204;

					if (NULLP(BgL_clausesz00_199))
						{	/* Module/checksum.scm 170 */
							return BgL_checksumz00_200;
						}
					else
						{	/* Module/checksum.scm 170 */
							if (PAIRP(BgL_clausesz00_199))
								{	/* Module/checksum.scm 170 */
									obj_t BgL_carzd2188zd2_210;

									BgL_carzd2188zd2_210 = CAR(BgL_clausesz00_199);
									if (PAIRP(BgL_carzd2188zd2_210))
										{	/* Module/checksum.scm 170 */
											obj_t BgL_cdrzd2192zd2_212;

											BgL_cdrzd2192zd2_212 = CDR(BgL_carzd2188zd2_210);
											if (
												(CAR(BgL_carzd2188zd2_210) ==
													CNST_TABLE_REF(((long) 6))))
												{	/* Module/checksum.scm 170 */
													if (PAIRP(BgL_cdrzd2192zd2_212))
														{	/* Module/checksum.scm 170 */
															if (NULLP(CDR(BgL_cdrzd2192zd2_212)))
																{	/* Module/checksum.scm 170 */
																	BgL_filez00_203 = CAR(BgL_cdrzd2192zd2_212);
																	BgL_restz00_204 = CDR(BgL_clausesz00_199);
																	{	/* Module/checksum.scm 178 */
																		obj_t BgL_fullnamez00_222;

																		BgL_fullnamez00_222 =
																			BGl_findzd2filezf2pathz20zz__osz00
																			(BgL_filez00_203,
																			BgL_includezd2pathzd2_19);
																		{	/* Module/checksum.scm 178 */
																			long BgL_timez00_223;

																			{	/* Module/checksum.scm 179 */
																				bool_t BgL_test1431z00_870;

																				if (STRINGP(BgL_fullnamez00_222))
																					{	/* Module/checksum.scm 179 */
																						BgL_test1431z00_870 =
																							fexists(BSTRING_TO_STRING
																							(BgL_fullnamez00_222));
																					}
																				else
																					{	/* Module/checksum.scm 179 */
																						BgL_test1431z00_870 = ((bool_t) 0);
																					}
																				if (BgL_test1431z00_870)
																					{	/* Module/checksum.scm 182 */
																						double BgL_arg1250z00_228;

																						BgL_arg1250z00_228 =
																							(double)
																							(bgl_last_modification_time
																							(BSTRING_TO_STRING
																								(BgL_fullnamez00_222)));
																						BgL_timez00_223 =
																							(long) (BgL_arg1250z00_228);
																					}
																				else
																					{	/* Module/checksum.scm 179 */
																						BgL_timez00_223 = ((long) 0);
																			}}
																			{	/* Module/checksum.scm 179 */

																				{	/* Module/checksum.scm 184 */
																					obj_t BgL_arg1246z00_224;
																					obj_t BgL_arg1247z00_225;

																					BgL_arg1246z00_224 =
																						CDR(((obj_t) BgL_clausesz00_199));
																					BgL_arg1247z00_225 =
																						BGl_atomzd2ze3numberz31zzmodule_checksumz00
																						(BgL_checksumz00_200,
																						BINT(BgL_timez00_223));
																					{
																						obj_t BgL_checksumz00_884;
																						obj_t BgL_clausesz00_883;

																						BgL_clausesz00_883 =
																							BgL_arg1246z00_224;
																						BgL_checksumz00_884 =
																							BgL_arg1247z00_225;
																						BgL_checksumz00_200 =
																							BgL_checksumz00_884;
																						BgL_clausesz00_199 =
																							BgL_clausesz00_883;
																						goto
																							BgL_zc3z04anonymousza31222ze3z87_201;
																					}
																				}
																			}
																		}
																	}
																}
															else
																{	/* Module/checksum.scm 170 */
																BgL_tagzd2180zd2_206:
																	{	/* Module/checksum.scm 187 */
																		obj_t BgL_arg1253z00_231;
																		obj_t BgL_arg1254z00_232;

																		BgL_arg1253z00_231 =
																			CDR(((obj_t) BgL_clausesz00_199));
																		{	/* Module/checksum.scm 188 */
																			obj_t BgL_arg1256z00_233;

																			BgL_arg1256z00_233 =
																				CAR(((obj_t) BgL_clausesz00_199));
																			BgL_arg1254z00_232 =
																				BGl_atomzd2ze3numberz31zzmodule_checksumz00
																				(BgL_checksumz00_200,
																				BgL_arg1256z00_233);
																		}
																		{
																			obj_t BgL_checksumz00_893;
																			obj_t BgL_clausesz00_892;

																			BgL_clausesz00_892 = BgL_arg1253z00_231;
																			BgL_checksumz00_893 = BgL_arg1254z00_232;
																			BgL_checksumz00_200 = BgL_checksumz00_893;
																			BgL_clausesz00_199 = BgL_clausesz00_892;
																			goto BgL_zc3z04anonymousza31222ze3z87_201;
																		}
																	}
																}
														}
													else
														{	/* Module/checksum.scm 170 */
															goto BgL_tagzd2180zd2_206;
														}
												}
											else
												{	/* Module/checksum.scm 170 */
													goto BgL_tagzd2180zd2_206;
												}
										}
									else
										{	/* Module/checksum.scm 170 */
											goto BgL_tagzd2180zd2_206;
										}
								}
							else
								{	/* Module/checksum.scm 170 */
									goto BgL_tagzd2180zd2_206;
								}
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_checksumz00()
	{
		{	/* Module/checksum.scm 18 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_checksumz00()
	{
		{	/* Module/checksum.scm 18 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_checksumz00()
	{
		{	/* Module/checksum.scm 18 */
			return BUNSPEC;
		}

	}

#ifdef __cplusplus
}
#endif
