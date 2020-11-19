/*===========================================================================*/
/*   (Module/load.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/load.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_ccompz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_producerz00;
		obj_t BgL_consumerz00;
		obj_t BgL_finaliza7erza7;
	}               *BgL_ccompz00_bglt;


	static obj_t BGl_z62makezd2loadzd2compilerz62zzmodule_loadz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzmodule_loadz00();
	BGL_IMPORT obj_t BGl_dirnamez00zz__osz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzmodule_loadz00();
	BGL_EXPORTED_DECL obj_t BGl_makezd2loadzd2compilerz00zzmodule_loadz00();
	extern obj_t BGl_ccompz00zzmodule_modulez00;
	BGL_IMPORT obj_t BGl_bigloozd2modulezd2resolverz00zz__modulez00();
	static obj_t BGl_gczd2rootszd2initz00zzmodule_loadz00();
	extern obj_t BGl_za2accesszd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_loadz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzmodule_loadz00();
	static obj_t BGl_loadzd2parserzd2zzmodule_loadz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_loadzd2modulezd2zzread_loadz00(obj_t, obj_t);
	static obj_t BGl_z62loadzd2producerzb0zzmodule_loadz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzmodule_loadz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_loadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzmodule_loadz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_loadz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_loadz00();
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31101ze3ze5zzmodule_loadz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31102ze3ze5zzmodule_loadz00(obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_loadzd2producerzd2envz00zzmodule_loadz00,
		BgL_bgl_za762loadza7d2produc1234z00,
		BGl_z62loadzd2producerzb0zzmodule_loadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1220z00zzmodule_loadz00,
		BgL_bgl_za762za7c3za704anonymo1235za7,
		BGl_z62zc3z04anonymousza31101ze3ze5zzmodule_loadz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1221z00zzmodule_loadz00,
		BgL_bgl_za762za7c3za704anonymo1236za7,
		BGl_z62zc3z04anonymousza31102ze3ze5zzmodule_loadz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2loadzd2compilerzd2envzd2zzmodule_loadz00,
		BgL_bgl_za762makeza7d2loadza7d1237za7,
		BGl_z62makezd2loadzd2compilerz62zzmodule_loadz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1222z00zzmodule_loadz00,
		BgL_bgl_string1222za700za7za7m1238za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string1223z00zzmodule_loadz00,
		BgL_bgl_string1223za700za7za7m1239za7, "Illegal `load' clause", 21);
	      DEFINE_STRING(BGl_string1224z00zzmodule_loadz00,
		BgL_bgl_string1224za700za7za7m1240za7, "Illegal load clause", 19);
	      DEFINE_STRING(BGl_string1225z00zzmodule_loadz00,
		BgL_bgl_string1225za700za7za7m1241za7, "load", 4);
	      DEFINE_STRING(BGl_string1226z00zzmodule_loadz00,
		BgL_bgl_string1226za700za7za7m1242za7, "Can't load module", 17);
	      DEFINE_STRING(BGl_string1227z00zzmodule_loadz00,
		BgL_bgl_string1227za700za7za7m1243za7, "module_load", 11);
	      DEFINE_STRING(BGl_string1228z00zzmodule_loadz00,
		BgL_bgl_string1228za700za7za7m1244za7, "void load ", 10);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzmodule_loadz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_loadz00(long
		BgL_checksumz00_617, char *BgL_fromz00_618)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_loadz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_loadz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzmodule_loadz00();
					BGl_libraryzd2moduleszd2initz00zzmodule_loadz00();
					BGl_cnstzd2initzd2zzmodule_loadz00();
					BGl_importedzd2moduleszd2initz00zzmodule_loadz00();
					return BGl_methodzd2initzd2zzmodule_loadz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_loadz00()
	{
		{	/* Module/load.scm 15 */
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "module_load");
			BGl_modulezd2initializa7ationz75zz__modulez00(((long) 0), "module_load");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "module_load");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_load");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_load");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_load");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_load");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "module_load");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_loadz00()
	{
		{	/* Module/load.scm 15 */
			{	/* Module/load.scm 15 */
				obj_t BgL_cportz00_597;

				{	/* Module/load.scm 15 */
					obj_t BgL_stringz00_605;

					BgL_stringz00_605 = BGl_string1228z00zzmodule_loadz00;
					{	/* Module/load.scm 15 */
						obj_t BgL_startz00_606;

						BgL_startz00_606 = BINT(((long) 0));
						{	/* Module/load.scm 15 */
							obj_t BgL_endz00_607;

							BgL_endz00_607 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_605)));
							{	/* Module/load.scm 15 */

								BgL_cportz00_597 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_605, BgL_startz00_606, BgL_endz00_607);
				}}}}
				{
					long BgL_iz00_598;

					BgL_iz00_598 = ((long) 1);
				BgL_loopz00_599:
					if ((BgL_iz00_598 == ((long) -1)))
						{	/* Module/load.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/load.scm 15 */
							{	/* Module/load.scm 15 */
								obj_t BgL_arg1232z00_601;

								{	/* Module/load.scm 15 */

									{	/* Module/load.scm 15 */
										obj_t BgL_locationz00_603;

										BgL_locationz00_603 = BBOOL(((bool_t) 0));
										{	/* Module/load.scm 15 */

											BgL_arg1232z00_601 =
												BGl_readz00zz__readerz00(BgL_cportz00_597,
												BgL_locationz00_603);
										}
									}
								}
								{	/* Module/load.scm 15 */
									int BgL_tmpz00_644;

									BgL_tmpz00_644 = (int) (BgL_iz00_598);
									CNST_TABLE_SET(BgL_tmpz00_644, BgL_arg1232z00_601);
							}}
							{	/* Module/load.scm 15 */
								int BgL_auxz00_604;

								BgL_auxz00_604 = (int) ((BgL_iz00_598 - ((long) 1)));
								{
									long BgL_iz00_649;

									BgL_iz00_649 = (long) (BgL_auxz00_604);
									BgL_iz00_598 = BgL_iz00_649;
									goto BgL_loopz00_599;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzmodule_loadz00()
	{
		{	/* Module/load.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* make-load-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2loadzd2compilerz00zzmodule_loadz00()
	{
		{	/* Module/load.scm 30 */
			{	/* Module/load.scm 31 */
				BgL_ccompz00_bglt BgL_new1061z00_438;

				{	/* Module/load.scm 31 */
					BgL_ccompz00_bglt BgL_new1060z00_443;

					BgL_new1060z00_443 =
						((BgL_ccompz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccompz00_bgl))));
					{	/* Module/load.scm 31 */
						long BgL_arg1103z00_444;

						{	/* Module/load.scm 31 */
							long BgL_res1202z00_554;

							BgL_res1202z00_554 =
								BGL_CLASS_INDEX(BGl_ccompz00zzmodule_modulez00);
							BgL_arg1103z00_444 = BgL_res1202z00_554;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1060z00_443), BgL_arg1103z00_444);
					}
					BgL_new1061z00_438 = BgL_new1060z00_443;
				}
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1061z00_438))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1061z00_438))->BgL_producerz00) =
					((obj_t) BGl_loadzd2producerzd2envz00zzmodule_loadz00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1061z00_438))->BgL_consumerz00) =
					((obj_t) BGl_proc1220z00zzmodule_loadz00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1061z00_438))->
						BgL_finaliza7erza7) =
					((obj_t) BGl_proc1221z00zzmodule_loadz00), BUNSPEC);
				return ((obj_t) BgL_new1061z00_438);
			}
		}

	}



/* &make-load-compiler */
	obj_t BGl_z62makezd2loadzd2compilerz62zzmodule_loadz00(obj_t BgL_envz00_590)
	{
		{	/* Module/load.scm 30 */
			return BGl_makezd2loadzd2compilerz00zzmodule_loadz00();
		}

	}



/* &<@anonymous:1102> */
	obj_t BGl_z62zc3z04anonymousza31102ze3ze5zzmodule_loadz00(obj_t
		BgL_envz00_591)
	{
		{	/* Module/module.scm 55 */
			return CNST_TABLE_REF(((long) 1));
		}

	}



/* &<@anonymous:1101> */
	obj_t BGl_z62zc3z04anonymousza31101ze3ze5zzmodule_loadz00(obj_t
		BgL_envz00_592, obj_t BgL_mz00_593, obj_t BgL_cz00_594)
	{
		{	/* Module/module.scm 53 */
			return BNIL;
		}

	}



/* &load-producer */
	obj_t BGl_z62loadzd2producerzb0zzmodule_loadz00(obj_t BgL_envz00_595,
		obj_t BgL_clausez00_596)
	{
		{	/* Module/load.scm 37 */
			{
				obj_t BgL_protosz00_612;

				if (PAIRP(BgL_clausez00_596))
					{	/* Module/load.scm 38 */
						obj_t BgL_arg1109z00_616;

						BgL_arg1109z00_616 = CDR(BgL_clausez00_596);
						{	/* Module/load.scm 38 */
							bool_t BgL_tmpz00_667;

							BgL_protosz00_612 = BgL_arg1109z00_616;
							{
								obj_t BgL_l1090z00_614;

								BgL_l1090z00_614 = BgL_protosz00_612;
							BgL_zc3z04anonymousza31110ze3z87_613:
								if (PAIRP(BgL_l1090z00_614))
									{	/* Module/load.scm 40 */
										BGl_loadzd2parserzd2zzmodule_loadz00(CAR(BgL_l1090z00_614),
											BgL_clausez00_596);
										{
											obj_t BgL_l1090z00_672;

											BgL_l1090z00_672 = CDR(BgL_l1090z00_614);
											BgL_l1090z00_614 = BgL_l1090z00_672;
											goto BgL_zc3z04anonymousza31110ze3z87_613;
										}
									}
								else
									{	/* Module/load.scm 40 */
										BgL_tmpz00_667 = ((bool_t) 1);
									}
							}
							return BBOOL(BgL_tmpz00_667);
						}
					}
				else
					{	/* Module/load.scm 38 */
						{	/* Module/load.scm 42 */
							obj_t BgL_list1114z00_615;

							BgL_list1114z00_615 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							return
								BGl_userzd2errorzd2zztools_errorz00
								(BGl_string1222z00zzmodule_loadz00,
								BGl_string1223z00zzmodule_loadz00, BgL_clausez00_596,
								BgL_list1114z00_615);
						}
					}
			}
		}

	}



/* load-parser */
	obj_t BGl_loadzd2parserzd2zzmodule_loadz00(obj_t BgL_protoz00_4,
		obj_t BgL_clausez00_5)
	{
		{	/* Module/load.scm 50 */
			{
				obj_t BgL_modulez00_459;
				obj_t BgL_filez00_460;
				obj_t BgL_filesz00_461;

				if (PAIRP(BgL_protoz00_4))
					{	/* Module/load.scm 51 */
						obj_t BgL_carzd2119zd2_467;
						obj_t BgL_cdrzd2120zd2_468;

						BgL_carzd2119zd2_467 = CAR(BgL_protoz00_4);
						BgL_cdrzd2120zd2_468 = CDR(BgL_protoz00_4);
						if (SYMBOLP(BgL_carzd2119zd2_467))
							{	/* Module/load.scm 51 */
								if (PAIRP(BgL_cdrzd2120zd2_468))
									{	/* Module/load.scm 51 */
										obj_t BgL_carzd2125zd2_471;

										BgL_carzd2125zd2_471 = CAR(BgL_cdrzd2120zd2_468);
										if (STRINGP(BgL_carzd2125zd2_471))
											{	/* Module/load.scm 51 */
												BgL_modulez00_459 = BgL_carzd2119zd2_467;
												BgL_filez00_460 = BgL_carzd2125zd2_471;
												BgL_filesz00_461 = CDR(BgL_cdrzd2120zd2_468);
												{
													obj_t BgL_fz00_479;

													BgL_fz00_479 = BgL_filesz00_461;
												BgL_zc3z04anonymousza31126ze3z87_480:
													if (NULLP(BgL_fz00_479))
														{	/* Module/load.scm 56 */
															obj_t BgL_arg1128z00_482;

															BgL_arg1128z00_482 =
																MAKE_YOUNG_PAIR(BgL_filez00_460,
																BgL_filesz00_461);
															return
																BGl_loadzd2modulezd2zzread_loadz00
																(BgL_modulez00_459, BgL_arg1128z00_482);
														}
													else
														{	/* Module/load.scm 57 */
															bool_t BgL_test1254z00_692;

															{	/* Module/load.scm 57 */
																obj_t BgL_tmpz00_693;

																BgL_tmpz00_693 = CAR(((obj_t) BgL_fz00_479));
																BgL_test1254z00_692 = STRINGP(BgL_tmpz00_693);
															}
															if (BgL_test1254z00_692)
																{	/* Module/load.scm 60 */
																	obj_t BgL_arg1133z00_485;

																	BgL_arg1133z00_485 =
																		CDR(((obj_t) BgL_fz00_479));
																	{
																		obj_t BgL_fz00_699;

																		BgL_fz00_699 = BgL_arg1133z00_485;
																		BgL_fz00_479 = BgL_fz00_699;
																		goto BgL_zc3z04anonymousza31126ze3z87_480;
																	}
																}
															else
																{	/* Module/load.scm 58 */
																	obj_t BgL_list1134z00_486;

																	BgL_list1134z00_486 =
																		MAKE_YOUNG_PAIR(BNIL, BNIL);
																	return
																		BGl_userzd2errorzd2zztools_errorz00
																		(BGl_string1222z00zzmodule_loadz00,
																		BGl_string1224z00zzmodule_loadz00,
																		BgL_clausez00_5, BgL_list1134z00_486);
																}
														}
												}
											}
										else
											{	/* Module/load.scm 51 */
											BgL_tagzd2111zd2_464:
												{	/* Module/load.scm 68 */
													obj_t BgL_list1168z00_510;

													BgL_list1168z00_510 = MAKE_YOUNG_PAIR(BNIL, BNIL);
													return
														BGl_userzd2errorzd2zztools_errorz00
														(BGl_string1222z00zzmodule_loadz00,
														BGl_string1224z00zzmodule_loadz00, BgL_clausez00_5,
														BgL_list1168z00_510);
												}
											}
									}
								else
									{	/* Module/load.scm 51 */
										goto BgL_tagzd2111zd2_464;
									}
							}
						else
							{	/* Module/load.scm 51 */
								goto BgL_tagzd2111zd2_464;
							}
					}
				else
					{	/* Module/load.scm 51 */
						if (SYMBOLP(BgL_protoz00_4))
							{	/* Module/load.scm 51 */
								{	/* Module/load.scm 62 */
									obj_t BgL_abasez00_489;

									{	/* Module/load.scm 62 */
										obj_t BgL_l1092z00_494;

										BgL_l1092z00_494 =
											BGl_za2accesszd2filesza2zd2zzengine_paramz00;
										if (NULLP(BgL_l1092z00_494))
											{	/* Module/load.scm 62 */
												BgL_abasez00_489 = BNIL;
											}
										else
											{	/* Module/load.scm 62 */
												obj_t BgL_head1094z00_496;

												{	/* Module/load.scm 62 */
													obj_t BgL_arg1166z00_508;

													{	/* Module/load.scm 62 */
														obj_t BgL_arg1167z00_509;

														BgL_arg1167z00_509 =
															CAR(((obj_t) BgL_l1092z00_494));
														BgL_arg1166z00_508 =
															BGl_dirnamez00zz__osz00(BgL_arg1167z00_509);
													}
													{	/* Module/load.scm 62 */
														obj_t BgL_res1208z00_568;

														BgL_res1208z00_568 =
															MAKE_YOUNG_PAIR(BgL_arg1166z00_508, BNIL);
														BgL_head1094z00_496 = BgL_res1208z00_568;
													}
												}
												{	/* Module/load.scm 62 */
													obj_t BgL_g1097z00_497;

													BgL_g1097z00_497 = CDR(((obj_t) BgL_l1092z00_494));
													{
														obj_t BgL_l1092z00_499;
														obj_t BgL_tail1095z00_500;

														BgL_l1092z00_499 = BgL_g1097z00_497;
														BgL_tail1095z00_500 = BgL_head1094z00_496;
													BgL_zc3z04anonymousza31145ze3z87_501:
														if (NULLP(BgL_l1092z00_499))
															{	/* Module/load.scm 62 */
																BgL_abasez00_489 = BgL_head1094z00_496;
															}
														else
															{	/* Module/load.scm 62 */
																obj_t BgL_newtail1096z00_503;

																{	/* Module/load.scm 62 */
																	obj_t BgL_arg1156z00_505;

																	{	/* Module/load.scm 62 */
																		obj_t BgL_arg1165z00_506;

																		BgL_arg1165z00_506 =
																			CAR(((obj_t) BgL_l1092z00_499));
																		BgL_arg1156z00_505 =
																			BGl_dirnamez00zz__osz00
																			(BgL_arg1165z00_506);
																	}
																	{	/* Module/load.scm 62 */
																		obj_t BgL_res1210z00_572;

																		BgL_res1210z00_572 =
																			MAKE_YOUNG_PAIR(BgL_arg1156z00_505, BNIL);
																		BgL_newtail1096z00_503 = BgL_res1210z00_572;
																	}
																}
																SET_CDR(BgL_tail1095z00_500,
																	BgL_newtail1096z00_503);
																{	/* Module/load.scm 62 */
																	obj_t BgL_arg1155z00_504;

																	BgL_arg1155z00_504 =
																		CDR(((obj_t) BgL_l1092z00_499));
																	{
																		obj_t BgL_tail1095z00_725;
																		obj_t BgL_l1092z00_724;

																		BgL_l1092z00_724 = BgL_arg1155z00_504;
																		BgL_tail1095z00_725 =
																			BgL_newtail1096z00_503;
																		BgL_tail1095z00_500 = BgL_tail1095z00_725;
																		BgL_l1092z00_499 = BgL_l1092z00_724;
																		goto BgL_zc3z04anonymousza31145ze3z87_501;
																	}
																}
															}
													}
												}
											}
									}
									{	/* Module/load.scm 62 */
										obj_t BgL_bz00_490;

										{	/* Module/load.scm 63 */
											obj_t BgL_fun1143z00_493;

											BgL_fun1143z00_493 =
												BGl_bigloozd2modulezd2resolverz00zz__modulez00();
											BgL_bz00_490 =
												PROCEDURE_ENTRY(BgL_fun1143z00_493) (BgL_fun1143z00_493,
												BgL_protoz00_4, BNIL, BgL_abasez00_489, BEOA);
										}
										{	/* Module/load.scm 63 */

											if (PAIRP(BgL_bz00_490))
												{	/* Module/load.scm 64 */
													return
														BGl_loadzd2modulezd2zzread_loadz00(BgL_protoz00_4,
														BgL_bz00_490);
												}
											else
												{	/* Module/load.scm 64 */
													return
														BGl_userzd2errorzd2zztools_errorz00
														(BGl_string1225z00zzmodule_loadz00,
														BGl_string1226z00zzmodule_loadz00, BgL_protoz00_4,
														BNIL);
												}
										}
									}
								}
							}
						else
							{	/* Module/load.scm 51 */
								goto BgL_tagzd2111zd2_464;
							}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_loadz00()
	{
		{	/* Module/load.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_loadz00()
	{
		{	/* Module/load.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_loadz00()
	{
		{	/* Module/load.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_loadz00()
	{
		{	/* Module/load.scm 15 */
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1227z00zzmodule_loadz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1227z00zzmodule_loadz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1227z00zzmodule_loadz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1227z00zzmodule_loadz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1227z00zzmodule_loadz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1227z00zzmodule_loadz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1227z00zzmodule_loadz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1227z00zzmodule_loadz00));
			return
				BGl_modulezd2initializa7ationz75zzread_loadz00(((long) 52515295),
				BSTRING_TO_STRING(BGl_string1227z00zzmodule_loadz00));
		}

	}

#ifdef __cplusplus
}
#endif
