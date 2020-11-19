/*===========================================================================*/
/*   (Foreign/copaque.scm)                                                   */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Foreign/copaque.scm) */
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

	typedef struct BgL_copaquez00_bgl
	{
		struct BgL_typez00_bgl *BgL_btypez00;
	}                 *BgL_copaquez00_bglt;


	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzforeign_copaquez00();
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zzforeign_copaquez00();
	extern obj_t
		BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00(obj_t);
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	extern obj_t BGl_makezd2protozd2inlinez00zzforeign_libraryz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzforeign_copaquez00();
	extern obj_t BGl_copaquez00zzforeign_ctypez00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzforeign_copaquez00 = BUNSPEC;
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzforeign_copaquez00();
	static obj_t BGl_genericzd2initzd2zzforeign_copaquez00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzforeign_copaquez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_ctypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
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
	static obj_t BGl_cnstzd2initzd2zzforeign_copaquez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzforeign_copaquez00();
	static obj_t
		BGl_z62makezd2ctypezd2accessesz121088z70zzforeign_copaquez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzforeign_copaquez00();
	extern obj_t BGl_makezd2definezd2inlinez00zzforeign_libraryz00(obj_t, obj_t);
	static obj_t __cnst[23];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1306z00zzforeign_copaquez00,
		BgL_bgl_za762makeza7d2ctypeza71316za7,
		BGl_z62makezd2ctypezd2accessesz121088z70zzforeign_copaquez00, 0L, BUNSPEC,
		3);
	extern obj_t BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00;
	   
		 
		DEFINE_STRING(BGl_string1307z00zzforeign_copaquez00,
		BgL_bgl_string1307za700za7za7f1317za7, "make-ctype-accesses!", 20);
	      DEFINE_STRING(BGl_string1308z00zzforeign_copaquez00,
		BgL_bgl_string1308za700za7za7f1318za7, "(", 1);
	      DEFINE_STRING(BGl_string1309z00zzforeign_copaquez00,
		BgL_bgl_string1309za700za7za7f1319za7, ")FOREIGN_TO_COBJ", 16);
	      DEFINE_STRING(BGl_string1310z00zzforeign_copaquez00,
		BgL_bgl_string1310za700za7za7f1320za7, "cobj_to_foreign", 15);
	      DEFINE_STRING(BGl_string1311z00zzforeign_copaquez00,
		BgL_bgl_string1311za700za7za7f1321za7, "foreign_copaque", 15);
	      DEFINE_STRING(BGl_string1312z00zzforeign_copaquez00,
		BgL_bgl_string1312za700za7za7f1322za7,
		"pragma predicate-of static ::obj foreign symbol macro if eq? quote foreign-id foreign? o o::obj (pragma::bool \"($1 == $2)\" o1 o2) o2 void* o1 = ?::bool ::bool ? -> ",
		164);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzforeign_copaquez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzforeign_copaquez00(long
		BgL_checksumz00_824, char *BgL_fromz00_825)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzforeign_copaquez00))
				{
					BGl_requirezd2initializa7ationz75zzforeign_copaquez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzforeign_copaquez00();
					BGl_libraryzd2moduleszd2initz00zzforeign_copaquez00();
					BGl_cnstzd2initzd2zzforeign_copaquez00();
					BGl_importedzd2moduleszd2initz00zzforeign_copaquez00();
					BGl_methodzd2initzd2zzforeign_copaquez00();
					return BGl_toplevelzd2initzd2zzforeign_copaquez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzforeign_copaquez00()
	{
		{	/* Foreign/copaque.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"foreign_copaque");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"foreign_copaque");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"foreign_copaque");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"foreign_copaque");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"foreign_copaque");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"foreign_copaque");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzforeign_copaquez00()
	{
		{	/* Foreign/copaque.scm 15 */
			{	/* Foreign/copaque.scm 15 */
				obj_t BgL_cportz00_714;

				{	/* Foreign/copaque.scm 15 */
					obj_t BgL_stringz00_722;

					BgL_stringz00_722 = BGl_string1312z00zzforeign_copaquez00;
					{	/* Foreign/copaque.scm 15 */
						obj_t BgL_startz00_723;

						BgL_startz00_723 = BINT(((long) 0));
						{	/* Foreign/copaque.scm 15 */
							obj_t BgL_endz00_724;

							BgL_endz00_724 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_722)));
							{	/* Foreign/copaque.scm 15 */

								BgL_cportz00_714 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_722, BgL_startz00_723, BgL_endz00_724);
				}}}}
				{
					long BgL_iz00_715;

					BgL_iz00_715 = ((long) 22);
				BgL_loopz00_716:
					if ((BgL_iz00_715 == ((long) -1)))
						{	/* Foreign/copaque.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Foreign/copaque.scm 15 */
							{	/* Foreign/copaque.scm 15 */
								obj_t BgL_arg1314z00_718;

								{	/* Foreign/copaque.scm 15 */

									{	/* Foreign/copaque.scm 15 */
										obj_t BgL_locationz00_720;

										BgL_locationz00_720 = BBOOL(((bool_t) 0));
										{	/* Foreign/copaque.scm 15 */

											BgL_arg1314z00_718 =
												BGl_readz00zz__readerz00(BgL_cportz00_714,
												BgL_locationz00_720);
										}
									}
								}
								{	/* Foreign/copaque.scm 15 */
									int BgL_tmpz00_850;

									BgL_tmpz00_850 = (int) (BgL_iz00_715);
									CNST_TABLE_SET(BgL_tmpz00_850, BgL_arg1314z00_718);
							}}
							{	/* Foreign/copaque.scm 15 */
								int BgL_auxz00_721;

								BgL_auxz00_721 = (int) ((BgL_iz00_715 - ((long) 1)));
								{
									long BgL_iz00_855;

									BgL_iz00_855 = (long) (BgL_auxz00_721);
									BgL_iz00_715 = BgL_iz00_855;
									goto BgL_loopz00_716;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzforeign_copaquez00()
	{
		{	/* Foreign/copaque.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzforeign_copaquez00()
	{
		{	/* Foreign/copaque.scm 15 */
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzforeign_copaquez00()
	{
		{	/* Foreign/copaque.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzforeign_copaquez00()
	{
		{	/* Foreign/copaque.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzforeign_copaquez00()
	{
		{	/* Foreign/copaque.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
				BGl_copaquez00zzforeign_ctypez00, BGl_proc1306z00zzforeign_copaquez00,
				BGl_string1307z00zzforeign_copaquez00);
		}

	}



/* &make-ctype-accesses!1088 */
	obj_t BGl_z62makezd2ctypezd2accessesz121088z70zzforeign_copaquez00(obj_t
		BgL_envz00_706, obj_t BgL_whatz00_707, obj_t BgL_whoz00_708,
		obj_t BgL_locz00_709)
	{
		{	/* Foreign/copaque.scm 28 */
			{	/* Foreign/copaque.scm 29 */
				BgL_typez00_bglt BgL_btypez00_729;

				{
					BgL_copaquez00_bglt BgL_auxz00_859;

					{
						obj_t BgL_auxz00_860;

						{	/* Foreign/copaque.scm 29 */
							BgL_objectz00_bglt BgL_tmpz00_861;

							BgL_tmpz00_861 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_whatz00_707));
							BgL_auxz00_860 = BGL_OBJECT_WIDENING(BgL_tmpz00_861);
						}
						BgL_auxz00_859 = ((BgL_copaquez00_bglt) BgL_auxz00_860);
					}
					BgL_btypez00_729 =
						(((BgL_copaquez00_bglt) COBJECT(BgL_auxz00_859))->BgL_btypez00);
				}
				{	/* Foreign/copaque.scm 29 */
					obj_t BgL_idz00_730;

					BgL_idz00_730 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_whoz00_708)))->BgL_idz00);
					{	/* Foreign/copaque.scm 31 */
						obj_t BgL_bidz00_731;

						BgL_bidz00_731 =
							(((BgL_typez00_bglt) COBJECT(BgL_btypez00_729))->BgL_idz00);
						{	/* Foreign/copaque.scm 32 */
							obj_t BgL_idzd2ze3bidz31_732;

							{	/* Foreign/copaque.scm 33 */
								obj_t BgL_list1272z00_733;

								{	/* Foreign/copaque.scm 33 */
									obj_t BgL_arg1273z00_734;

									{	/* Foreign/copaque.scm 33 */
										obj_t BgL_arg1274z00_735;

										BgL_arg1274z00_735 = MAKE_YOUNG_PAIR(BgL_bidz00_731, BNIL);
										BgL_arg1273z00_734 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
											BgL_arg1274z00_735);
									}
									BgL_list1272z00_733 =
										MAKE_YOUNG_PAIR(BgL_idz00_730, BgL_arg1273z00_734);
								}
								BgL_idzd2ze3bidz31_732 =
									BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
									(BgL_list1272z00_733);
							}
							{	/* Foreign/copaque.scm 33 */
								obj_t BgL_bidzd2ze3idz31_736;

								{	/* Foreign/copaque.scm 34 */
									obj_t BgL_list1269z00_737;

									{	/* Foreign/copaque.scm 34 */
										obj_t BgL_arg1270z00_738;

										{	/* Foreign/copaque.scm 34 */
											obj_t BgL_arg1271z00_739;

											BgL_arg1271z00_739 = MAKE_YOUNG_PAIR(BgL_idz00_730, BNIL);
											BgL_arg1270z00_738 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
												BgL_arg1271z00_739);
										}
										BgL_list1269z00_737 =
											MAKE_YOUNG_PAIR(BgL_bidz00_731, BgL_arg1270z00_738);
									}
									BgL_bidzd2ze3idz31_736 =
										BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
										(BgL_list1269z00_737);
								}
								{	/* Foreign/copaque.scm 34 */
									obj_t BgL_bidzf3zf3_740;

									{	/* Foreign/copaque.scm 35 */
										obj_t BgL_arg1258z00_741;

										{	/* Foreign/copaque.scm 35 */
											obj_t BgL_arg1263z00_742;
											obj_t BgL_arg1268z00_743;

											{	/* Foreign/copaque.scm 35 */
												obj_t BgL_res1296z00_744;

												{	/* Foreign/copaque.scm 35 */
													obj_t BgL_arg1466z00_745;

													BgL_arg1466z00_745 = SYMBOL_TO_STRING(BgL_idz00_730);
													BgL_res1296z00_744 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_745);
												}
												BgL_arg1263z00_742 = BgL_res1296z00_744;
											}
											{	/* Foreign/copaque.scm 35 */
												obj_t BgL_res1297z00_746;

												{	/* Foreign/copaque.scm 35 */
													obj_t BgL_symbolz00_747;

													BgL_symbolz00_747 = CNST_TABLE_REF(((long) 1));
													{	/* Foreign/copaque.scm 35 */
														obj_t BgL_arg1466z00_748;

														BgL_arg1466z00_748 =
															SYMBOL_TO_STRING(BgL_symbolz00_747);
														BgL_res1297z00_746 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_748);
												}}
												BgL_arg1268z00_743 = BgL_res1297z00_746;
											}
											BgL_arg1258z00_741 =
												string_append(BgL_arg1263z00_742, BgL_arg1268z00_743);
										}
										BgL_bidzf3zf3_740 = bstring_to_symbol(BgL_arg1258z00_741);
									}
									{	/* Foreign/copaque.scm 35 */
										obj_t BgL_bidzf3zd2boolz21_749;

										{	/* Foreign/copaque.scm 36 */
											obj_t BgL_arg1253z00_750;

											{	/* Foreign/copaque.scm 36 */
												obj_t BgL_arg1254z00_751;
												obj_t BgL_arg1256z00_752;

												{	/* Foreign/copaque.scm 36 */
													obj_t BgL_res1299z00_753;

													{	/* Foreign/copaque.scm 36 */
														obj_t BgL_arg1466z00_754;

														BgL_arg1466z00_754 =
															SYMBOL_TO_STRING(BgL_bidzf3zf3_740);
														BgL_res1299z00_753 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_754);
													}
													BgL_arg1254z00_751 = BgL_res1299z00_753;
												}
												{	/* Foreign/copaque.scm 36 */
													obj_t BgL_res1300z00_755;

													{	/* Foreign/copaque.scm 36 */
														obj_t BgL_symbolz00_756;

														BgL_symbolz00_756 = CNST_TABLE_REF(((long) 2));
														{	/* Foreign/copaque.scm 36 */
															obj_t BgL_arg1466z00_757;

															BgL_arg1466z00_757 =
																SYMBOL_TO_STRING(BgL_symbolz00_756);
															BgL_res1300z00_755 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_757);
													}}
													BgL_arg1256z00_752 = BgL_res1300z00_755;
												}
												BgL_arg1253z00_750 =
													string_append(BgL_arg1254z00_751, BgL_arg1256z00_752);
											}
											BgL_bidzf3zd2boolz21_749 =
												bstring_to_symbol(BgL_arg1253z00_750);
										}
										{	/* Foreign/copaque.scm 36 */
											obj_t BgL_namez00_758;

											BgL_namez00_758 =
												(((BgL_typez00_bglt) COBJECT(
														((BgL_typez00_bglt) BgL_whoz00_708)))->BgL_namez00);
											{	/* Foreign/copaque.scm 37 */
												obj_t BgL_namezd2sanszd2z42z42_759;

												BgL_namezd2sanszd2z42z42_759 =
													BGl_stringzd2sanszd2z42z42zztype_toolsz00
													(BgL_namez00_758);
												{	/* Foreign/copaque.scm 38 */

													{

														{	/* Foreign/copaque.scm 69 */
															obj_t BgL_arg1100z00_799;

															{	/* Foreign/copaque.scm 69 */
																obj_t BgL_list1104z00_800;

																{	/* Foreign/copaque.scm 69 */
																	obj_t BgL_arg1109z00_801;

																	{	/* Foreign/copaque.scm 69 */
																		obj_t BgL_arg1110z00_802;

																		BgL_arg1110z00_802 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					1)), BNIL);
																		BgL_arg1109z00_801 =
																			MAKE_YOUNG_PAIR(BgL_idz00_730,
																			BgL_arg1110z00_802);
																	}
																	BgL_list1104z00_800 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
																		BgL_arg1109z00_801);
																}
																BgL_arg1100z00_799 =
																	BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																	(BgL_list1104z00_800);
															}
															{	/* Foreign/copaque.scm 67 */
																obj_t BgL_list1101z00_803;

																{	/* Foreign/copaque.scm 67 */
																	obj_t BgL_arg1103z00_804;

																	BgL_arg1103z00_804 =
																		MAKE_YOUNG_PAIR(BgL_arg1100z00_799, BNIL);
																	BgL_list1101z00_803 =
																		MAKE_YOUNG_PAIR(BgL_bidzf3zf3_740,
																		BgL_arg1103z00_804);
																}
																BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00
																	(BgL_list1101z00_803);
														}}
														{	/* Foreign/copaque.scm 72 */
															obj_t BgL_arg1113z00_805;

															{	/* Foreign/copaque.scm 72 */
																obj_t BgL_arg1114z00_806;

																{	/* Foreign/copaque.scm 72 */
																	obj_t BgL_arg1115z00_807;
																	obj_t BgL_arg1116z00_808;

																	{	/* Foreign/copaque.scm 44 */
																		obj_t BgL_arg1155z00_793;

																		{	/* Foreign/copaque.scm 44 */
																			obj_t BgL_arg1156z00_794;

																			{	/* Foreign/copaque.scm 44 */
																				obj_t BgL_arg1165z00_795;

																				{	/* Foreign/copaque.scm 44 */
																					obj_t BgL_arg1166z00_796;
																					obj_t BgL_arg1167z00_797;

																					{	/* Foreign/copaque.scm 44 */
																						obj_t BgL_arg1169z00_798;

																						BgL_arg1169z00_798 =
																							MAKE_YOUNG_PAIR(BgL_idz00_730,
																							BNIL);
																						BgL_arg1166z00_796 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 17)),
																							BgL_arg1169z00_798);
																					}
																					BgL_arg1167z00_797 =
																						MAKE_YOUNG_PAIR
																						(BGl_string1310z00zzforeign_copaquez00,
																						BNIL);
																					BgL_arg1165z00_795 =
																						MAKE_YOUNG_PAIR(BgL_arg1166z00_796,
																						BgL_arg1167z00_797);
																				}
																				BgL_arg1156z00_794 =
																					MAKE_YOUNG_PAIR
																					(BgL_idzd2ze3bidz31_732,
																					BgL_arg1165z00_795);
																			}
																			BgL_arg1155z00_793 =
																				MAKE_YOUNG_PAIR(BgL_bidz00_731,
																				BgL_arg1156z00_794);
																		}
																		BgL_arg1115z00_807 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					16)), BgL_arg1155z00_793);
																	}
																	{	/* Foreign/copaque.scm 72 */
																		obj_t BgL_tmpz00_915;

																		{	/* Foreign/copaque.scm 47 */
																			obj_t BgL_mnamez00_787;

																			BgL_mnamez00_787 =
																				string_append_3
																				(BGl_string1308z00zzforeign_copaquez00,
																				BgL_namezd2sanszd2z42z42_759,
																				BGl_string1309z00zzforeign_copaquez00);
																			{	/* Foreign/copaque.scm 48 */
																				obj_t BgL_arg1172z00_788;

																				{	/* Foreign/copaque.scm 48 */
																					obj_t BgL_arg1174z00_789;

																					{	/* Foreign/copaque.scm 48 */
																						obj_t BgL_arg1175z00_790;

																						{	/* Foreign/copaque.scm 48 */
																							obj_t BgL_arg1176z00_791;
																							obj_t BgL_arg1177z00_792;

																							BgL_arg1176z00_791 =
																								MAKE_YOUNG_PAIR(BgL_bidz00_731,
																								BNIL);
																							BgL_arg1177z00_792 =
																								MAKE_YOUNG_PAIR
																								(BgL_mnamez00_787, BNIL);
																							BgL_arg1175z00_790 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1176z00_791,
																								BgL_arg1177z00_792);
																						}
																						BgL_arg1174z00_789 =
																							MAKE_YOUNG_PAIR
																							(BgL_bidzd2ze3idz31_736,
																							BgL_arg1175z00_790);
																					}
																					BgL_arg1172z00_788 =
																						MAKE_YOUNG_PAIR(BgL_idz00_730,
																						BgL_arg1174z00_789);
																				}
																				BgL_tmpz00_915 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							16)), BgL_arg1172z00_788);
																		}}
																		BgL_arg1116z00_808 =
																			MAKE_YOUNG_PAIR(BgL_tmpz00_915, BNIL);
																	}
																	BgL_arg1114z00_806 =
																		MAKE_YOUNG_PAIR(BgL_arg1115z00_807,
																		BgL_arg1116z00_808);
																}
																BgL_arg1113z00_805 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
																	BgL_arg1114z00_806);
															}
															BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																(BgL_arg1113z00_805);
														}
														{	/* Foreign/copaque.scm 75 */
															obj_t BgL_arg1118z00_809;

															{	/* Foreign/copaque.scm 75 */
																obj_t BgL_arg1121z00_810;

																{	/* Foreign/copaque.scm 75 */
																	obj_t BgL_arg1122z00_811;

																	{	/* Foreign/copaque.scm 75 */
																		obj_t BgL_arg1123z00_812;

																		{	/* Foreign/copaque.scm 75 */
																			obj_t BgL_arg1124z00_813;

																			BgL_arg1124z00_813 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						19)), BNIL);
																			BgL_arg1123z00_812 =
																				MAKE_YOUNG_PAIR
																				(BgL_bidzf3zd2boolz21_749,
																				BgL_arg1124z00_813);
																		}
																		BgL_arg1122z00_811 =
																			BGl_makezd2protozd2inlinez00zzforeign_libraryz00
																			(BgL_arg1123z00_812);
																	}
																	BgL_arg1121z00_810 =
																		MAKE_YOUNG_PAIR(BgL_arg1122z00_811, BNIL);
																}
																BgL_arg1118z00_809 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 20)),
																	BgL_arg1121z00_810);
															}
															BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																(BgL_arg1118z00_809);
														}
														{	/* Foreign/copaque.scm 76 */
															obj_t BgL_arg1125z00_814;

															{	/* Foreign/copaque.scm 76 */
																obj_t BgL_arg1126z00_815;

																{	/* Foreign/copaque.scm 76 */
																	obj_t BgL_arg1127z00_816;

																	{	/* Foreign/copaque.scm 76 */
																		obj_t BgL_arg1128z00_817;

																		{	/* Foreign/copaque.scm 76 */
																			obj_t BgL_arg1129z00_818;

																			{	/* Foreign/copaque.scm 76 */
																				obj_t BgL_arg1133z00_819;

																				BgL_arg1133z00_819 =
																					MAKE_YOUNG_PAIR(BgL_bidz00_731, BNIL);
																				BgL_arg1129z00_818 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							21)), BgL_arg1133z00_819);
																			}
																			BgL_arg1128z00_817 =
																				MAKE_YOUNG_PAIR(BgL_arg1129z00_818,
																				BNIL);
																		}
																		BgL_arg1127z00_816 =
																			MAKE_YOUNG_PAIR(BgL_bidzf3zf3_740,
																			BgL_arg1128z00_817);
																	}
																	BgL_arg1126z00_815 =
																		MAKE_YOUNG_PAIR(BgL_arg1127z00_816, BNIL);
																}
																BgL_arg1125z00_814 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 22)),
																	BgL_arg1126z00_815);
															}
															BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																(BgL_arg1125z00_814);
														}
														{	/* Foreign/copaque.scm 79 */
															obj_t BgL_arg1134z00_820;
															obj_t BgL_arg1140z00_821;

															{	/* Foreign/copaque.scm 61 */
																obj_t BgL_arg1239z00_764;

																{	/* Foreign/copaque.scm 61 */
																	obj_t BgL_arg1242z00_765;
																	obj_t BgL_arg1243z00_766;

																	{	/* Foreign/copaque.scm 61 */
																		obj_t BgL_list1244z00_767;

																		{	/* Foreign/copaque.scm 61 */
																			obj_t BgL_arg1245z00_768;

																			{	/* Foreign/copaque.scm 61 */
																				obj_t BgL_arg1246z00_769;

																				BgL_arg1246z00_769 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							3)), BNIL);
																				BgL_arg1245z00_768 =
																					MAKE_YOUNG_PAIR(BgL_idz00_730,
																					BgL_arg1246z00_769);
																			}
																			BgL_list1244z00_767 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						4)), BgL_arg1245z00_768);
																		}
																		BgL_arg1242z00_765 =
																			BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																			(BgL_list1244z00_767);
																	}
																	{	/* Foreign/copaque.scm 62 */
																		obj_t BgL_arg1247z00_770;
																		obj_t BgL_arg1250z00_771;

																		BgL_arg1247z00_770 =
																			BGl_makezd2typedzd2identz00zzast_identz00
																			(CNST_TABLE_REF(((long) 5)),
																			CNST_TABLE_REF(((long) 6)));
																		BgL_arg1250z00_771 =
																			MAKE_YOUNG_PAIR
																			(BGl_makezd2typedzd2identz00zzast_identz00
																			(CNST_TABLE_REF(((long) 7)),
																				CNST_TABLE_REF(((long) 6))), BNIL);
																		BgL_arg1243z00_766 =
																			MAKE_YOUNG_PAIR(BgL_arg1247z00_770,
																			BgL_arg1250z00_771);
																	}
																	BgL_arg1239z00_764 =
																		MAKE_YOUNG_PAIR(BgL_arg1242z00_765,
																		BgL_arg1243z00_766);
																}
																BgL_arg1134z00_820 =
																	BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																	(BgL_arg1239z00_764,
																	CNST_TABLE_REF(((long) 8)));
															}
															{	/* Foreign/copaque.scm 53 */
																obj_t BgL_arg1179z00_772;
																obj_t BgL_arg1186z00_773;

																{	/* Foreign/copaque.scm 53 */
																	obj_t BgL_arg1190z00_774;

																	BgL_arg1190z00_774 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
																		BNIL);
																	BgL_arg1179z00_772 =
																		MAKE_YOUNG_PAIR(BgL_bidzf3zd2boolz21_749,
																		BgL_arg1190z00_774);
																}
																{	/* Foreign/copaque.scm 54 */
																	obj_t BgL_arg1194z00_775;

																	{	/* Foreign/copaque.scm 54 */
																		obj_t BgL_arg1197z00_776;
																		obj_t BgL_arg1201z00_777;

																		{	/* Foreign/copaque.scm 54 */
																			obj_t BgL_arg1208z00_778;

																			BgL_arg1208z00_778 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						10)), BNIL);
																			BgL_arg1197z00_776 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						11)), BgL_arg1208z00_778);
																		}
																		{	/* Foreign/copaque.scm 55 */
																			obj_t BgL_arg1211z00_779;
																			obj_t BgL_arg1216z00_780;

																			{	/* Foreign/copaque.scm 55 */
																				obj_t BgL_arg1221z00_781;

																				{	/* Foreign/copaque.scm 55 */
																					obj_t BgL_arg1223z00_782;
																					obj_t BgL_arg1225z00_783;

																					{	/* Foreign/copaque.scm 55 */
																						obj_t BgL_arg1227z00_784;

																						BgL_arg1227z00_784 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 10)), BNIL);
																						BgL_arg1223z00_782 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 12)),
																							BgL_arg1227z00_784);
																					}
																					{	/* Foreign/copaque.scm 55 */
																						obj_t BgL_arg1229z00_785;

																						{	/* Foreign/copaque.scm 55 */
																							obj_t BgL_arg1232z00_786;

																							BgL_arg1232z00_786 =
																								MAKE_YOUNG_PAIR(BgL_bidz00_731,
																								BNIL);
																							BgL_arg1229z00_785 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 13)),
																								BgL_arg1232z00_786);
																						}
																						BgL_arg1225z00_783 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1229z00_785, BNIL);
																					}
																					BgL_arg1221z00_781 =
																						MAKE_YOUNG_PAIR(BgL_arg1223z00_782,
																						BgL_arg1225z00_783);
																				}
																				BgL_arg1211z00_779 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							14)), BgL_arg1221z00_781);
																			}
																			BgL_arg1216z00_780 =
																				MAKE_YOUNG_PAIR(BFALSE, BNIL);
																			BgL_arg1201z00_777 =
																				MAKE_YOUNG_PAIR(BgL_arg1211z00_779,
																				BgL_arg1216z00_780);
																		}
																		BgL_arg1194z00_775 =
																			MAKE_YOUNG_PAIR(BgL_arg1197z00_776,
																			BgL_arg1201z00_777);
																	}
																	BgL_arg1186z00_773 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)),
																		BgL_arg1194z00_775);
																}
																BgL_arg1140z00_821 =
																	BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																	(BgL_arg1179z00_772, BgL_arg1186z00_773);
															}
															{	/* Foreign/copaque.scm 79 */
																obj_t BgL_list1141z00_822;

																{	/* Foreign/copaque.scm 79 */
																	obj_t BgL_arg1145z00_823;

																	BgL_arg1145z00_823 =
																		MAKE_YOUNG_PAIR(BgL_arg1140z00_821, BNIL);
																	BgL_list1141z00_822 =
																		MAKE_YOUNG_PAIR(BgL_arg1134z00_820,
																		BgL_arg1145z00_823);
																}
																return BgL_list1141z00_822;
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



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzforeign_copaquez00()
	{
		{	/* Foreign/copaque.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1311z00zzforeign_copaquez00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string1311z00zzforeign_copaquez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1311z00zzforeign_copaquez00));
			BGl_modulezd2initializa7ationz75zzforeign_ctypez00(((long) 396356902),
				BSTRING_TO_STRING(BGl_string1311z00zzforeign_copaquez00));
			BGl_modulezd2initializa7ationz75zzforeign_accessz00(((long) 471073690),
				BSTRING_TO_STRING(BGl_string1311z00zzforeign_copaquez00));
			BGl_modulezd2initializa7ationz75zzforeign_libraryz00(((long) 419430923),
				BSTRING_TO_STRING(BGl_string1311z00zzforeign_copaquez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1311z00zzforeign_copaquez00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1311z00zzforeign_copaquez00));
		}

	}

#ifdef __cplusplus
}
#endif
