/*===========================================================================*/
/*   (Foreign/cenum.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Foreign/cenum.scm) */
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

	typedef struct BgL_cenumz00_bgl
	{
		struct BgL_typez00_bgl *BgL_btypez00;
		obj_t BgL_literalsz00;
	}               *BgL_cenumz00_bglt;


	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzforeign_cenumz00();
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zzforeign_cenumz00();
	extern obj_t
		BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00(obj_t);
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	extern obj_t BGl_makezd2protozd2inlinez00zzforeign_libraryz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzforeign_cenumz00();
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzforeign_cenumz00 = BUNSPEC;
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzforeign_cenumz00();
	static obj_t BGl_genericzd2initzd2zzforeign_cenumz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzforeign_cenumz00(long, char *);
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
	static obj_t BGl_cnstzd2initzd2zzforeign_cenumz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzforeign_cenumz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzforeign_cenumz00();
	static obj_t BGl_z62makezd2ctypezd2accessesz121090z70zzforeign_cenumz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2definezd2inlinez00zzforeign_libraryz00(obj_t, obj_t);
	extern obj_t BGl_cenumz00zzforeign_ctypez00;
	static obj_t __cnst[23];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1323z00zzforeign_cenumz00,
		BgL_bgl_za762makeza7d2ctypeza71333za7,
		BGl_z62makezd2ctypezd2accessesz121090z70zzforeign_cenumz00, 0L, BUNSPEC, 3);
	extern obj_t BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00;
	   
		 
		DEFINE_STRING(BGl_string1324z00zzforeign_cenumz00,
		BgL_bgl_string1324za700za7za7f1334za7, "make-ctype-accesses!", 20);
	      DEFINE_STRING(BGl_string1325z00zzforeign_cenumz00,
		BgL_bgl_string1325za700za7za7f1335za7, "(", 1);
	      DEFINE_STRING(BGl_string1326z00zzforeign_cenumz00,
		BgL_bgl_string1326za700za7za7f1336za7, ")FOREIGN_TO_COBJ", 16);
	      DEFINE_STRING(BGl_string1327z00zzforeign_cenumz00,
		BgL_bgl_string1327za700za7za7f1337za7, "CENUM_TO_FOREIGN", 16);
	      DEFINE_STRING(BGl_string1328z00zzforeign_cenumz00,
		BgL_bgl_string1328za700za7za7f1338za7, "foreign_cenum", 13);
	      DEFINE_STRING(BGl_string1329z00zzforeign_cenumz00,
		BgL_bgl_string1329za700za7za7f1339za7,
		"predicate-of static ::obj foreign symbol macro if eq? quote foreign-id foreign? o o::obj (pragma::bool \"($1 == $2)\" o1 o2) o2 o1 = ?::bool pragma - ::bool ? -> ",
		160);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzforeign_cenumz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzforeign_cenumz00(long
		BgL_checksumz00_881, char *BgL_fromz00_882)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzforeign_cenumz00))
				{
					BGl_requirezd2initializa7ationz75zzforeign_cenumz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzforeign_cenumz00();
					BGl_libraryzd2moduleszd2initz00zzforeign_cenumz00();
					BGl_cnstzd2initzd2zzforeign_cenumz00();
					BGl_importedzd2moduleszd2initz00zzforeign_cenumz00();
					BGl_methodzd2initzd2zzforeign_cenumz00();
					return BGl_toplevelzd2initzd2zzforeign_cenumz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzforeign_cenumz00()
	{
		{	/* Foreign/cenum.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"foreign_cenum");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"foreign_cenum");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"foreign_cenum");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"foreign_cenum");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"foreign_cenum");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"foreign_cenum");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzforeign_cenumz00()
	{
		{	/* Foreign/cenum.scm 15 */
			{	/* Foreign/cenum.scm 15 */
				obj_t BgL_cportz00_751;

				{	/* Foreign/cenum.scm 15 */
					obj_t BgL_stringz00_759;

					BgL_stringz00_759 = BGl_string1329z00zzforeign_cenumz00;
					{	/* Foreign/cenum.scm 15 */
						obj_t BgL_startz00_760;

						BgL_startz00_760 = BINT(((long) 0));
						{	/* Foreign/cenum.scm 15 */
							obj_t BgL_endz00_761;

							BgL_endz00_761 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_759)));
							{	/* Foreign/cenum.scm 15 */

								BgL_cportz00_751 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_759, BgL_startz00_760, BgL_endz00_761);
				}}}}
				{
					long BgL_iz00_752;

					BgL_iz00_752 = ((long) 22);
				BgL_loopz00_753:
					if ((BgL_iz00_752 == ((long) -1)))
						{	/* Foreign/cenum.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Foreign/cenum.scm 15 */
							{	/* Foreign/cenum.scm 15 */
								obj_t BgL_arg1331z00_755;

								{	/* Foreign/cenum.scm 15 */

									{	/* Foreign/cenum.scm 15 */
										obj_t BgL_locationz00_757;

										BgL_locationz00_757 = BBOOL(((bool_t) 0));
										{	/* Foreign/cenum.scm 15 */

											BgL_arg1331z00_755 =
												BGl_readz00zz__readerz00(BgL_cportz00_751,
												BgL_locationz00_757);
										}
									}
								}
								{	/* Foreign/cenum.scm 15 */
									int BgL_tmpz00_907;

									BgL_tmpz00_907 = (int) (BgL_iz00_752);
									CNST_TABLE_SET(BgL_tmpz00_907, BgL_arg1331z00_755);
							}}
							{	/* Foreign/cenum.scm 15 */
								int BgL_auxz00_758;

								BgL_auxz00_758 = (int) ((BgL_iz00_752 - ((long) 1)));
								{
									long BgL_iz00_912;

									BgL_iz00_912 = (long) (BgL_auxz00_758);
									BgL_iz00_752 = BgL_iz00_912;
									goto BgL_loopz00_753;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzforeign_cenumz00()
	{
		{	/* Foreign/cenum.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzforeign_cenumz00()
	{
		{	/* Foreign/cenum.scm 15 */
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzforeign_cenumz00()
	{
		{	/* Foreign/cenum.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzforeign_cenumz00()
	{
		{	/* Foreign/cenum.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzforeign_cenumz00()
	{
		{	/* Foreign/cenum.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
				BGl_cenumz00zzforeign_ctypez00, BGl_proc1323z00zzforeign_cenumz00,
				BGl_string1324z00zzforeign_cenumz00);
		}

	}



/* &make-ctype-accesses!1090 */
	obj_t BGl_z62makezd2ctypezd2accessesz121090z70zzforeign_cenumz00(obj_t
		BgL_envz00_743, obj_t BgL_whatz00_744, obj_t BgL_whoz00_745,
		obj_t BgL_locz00_746)
	{
		{	/* Foreign/cenum.scm 28 */
			{	/* Foreign/cenum.scm 29 */
				BgL_typez00_bglt BgL_btypez00_766;

				{
					BgL_cenumz00_bglt BgL_auxz00_916;

					{
						obj_t BgL_auxz00_917;

						{	/* Foreign/cenum.scm 29 */
							BgL_objectz00_bglt BgL_tmpz00_918;

							BgL_tmpz00_918 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_whatz00_744));
							BgL_auxz00_917 = BGL_OBJECT_WIDENING(BgL_tmpz00_918);
						}
						BgL_auxz00_916 = ((BgL_cenumz00_bglt) BgL_auxz00_917);
					}
					BgL_btypez00_766 =
						(((BgL_cenumz00_bglt) COBJECT(BgL_auxz00_916))->BgL_btypez00);
				}
				{	/* Foreign/cenum.scm 29 */
					obj_t BgL_idz00_767;

					BgL_idz00_767 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_whoz00_745)))->BgL_idz00);
					{	/* Foreign/cenum.scm 30 */
						obj_t BgL_widz00_768;

						BgL_widz00_768 =
							(((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt)
										((BgL_typez00_bglt) BgL_whatz00_744))))->BgL_idz00);
						{	/* Foreign/cenum.scm 31 */
							obj_t BgL_bidz00_769;

							BgL_bidz00_769 =
								(((BgL_typez00_bglt) COBJECT(BgL_btypez00_766))->BgL_idz00);
							{	/* Foreign/cenum.scm 32 */
								obj_t BgL_idzd2ze3bidz31_770;

								{	/* Foreign/cenum.scm 33 */
									obj_t BgL_list1290z00_771;

									{	/* Foreign/cenum.scm 33 */
										obj_t BgL_arg1291z00_772;

										{	/* Foreign/cenum.scm 33 */
											obj_t BgL_arg1292z00_773;

											BgL_arg1292z00_773 =
												MAKE_YOUNG_PAIR(BgL_bidz00_769, BNIL);
											BgL_arg1291z00_772 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
												BgL_arg1292z00_773);
										}
										BgL_list1290z00_771 =
											MAKE_YOUNG_PAIR(BgL_idz00_767, BgL_arg1291z00_772);
									}
									BgL_idzd2ze3bidz31_770 =
										BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
										(BgL_list1290z00_771);
								}
								{	/* Foreign/cenum.scm 33 */
									obj_t BgL_bidzd2ze3idz31_774;

									{	/* Foreign/cenum.scm 34 */
										obj_t BgL_list1287z00_775;

										{	/* Foreign/cenum.scm 34 */
											obj_t BgL_arg1288z00_776;

											{	/* Foreign/cenum.scm 34 */
												obj_t BgL_arg1289z00_777;

												BgL_arg1289z00_777 =
													MAKE_YOUNG_PAIR(BgL_idz00_767, BNIL);
												BgL_arg1288z00_776 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
													BgL_arg1289z00_777);
											}
											BgL_list1287z00_775 =
												MAKE_YOUNG_PAIR(BgL_bidz00_769, BgL_arg1288z00_776);
										}
										BgL_bidzd2ze3idz31_774 =
											BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
											(BgL_list1287z00_775);
									}
									{	/* Foreign/cenum.scm 34 */
										obj_t BgL_bidzf3zf3_778;

										{	/* Foreign/cenum.scm 35 */
											obj_t BgL_arg1284z00_779;

											{	/* Foreign/cenum.scm 35 */
												obj_t BgL_arg1285z00_780;
												obj_t BgL_arg1286z00_781;

												{	/* Foreign/cenum.scm 35 */
													obj_t BgL_res1313z00_782;

													{	/* Foreign/cenum.scm 35 */
														obj_t BgL_arg1466z00_783;

														BgL_arg1466z00_783 =
															SYMBOL_TO_STRING(BgL_idz00_767);
														BgL_res1313z00_782 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_783);
													}
													BgL_arg1285z00_780 = BgL_res1313z00_782;
												}
												{	/* Foreign/cenum.scm 35 */
													obj_t BgL_res1314z00_784;

													{	/* Foreign/cenum.scm 35 */
														obj_t BgL_symbolz00_785;

														BgL_symbolz00_785 = CNST_TABLE_REF(((long) 1));
														{	/* Foreign/cenum.scm 35 */
															obj_t BgL_arg1466z00_786;

															BgL_arg1466z00_786 =
																SYMBOL_TO_STRING(BgL_symbolz00_785);
															BgL_res1314z00_784 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_786);
													}}
													BgL_arg1286z00_781 = BgL_res1314z00_784;
												}
												BgL_arg1284z00_779 =
													string_append(BgL_arg1285z00_780, BgL_arg1286z00_781);
											}
											BgL_bidzf3zf3_778 = bstring_to_symbol(BgL_arg1284z00_779);
										}
										{	/* Foreign/cenum.scm 35 */
											obj_t BgL_bidzf3zd2boolz21_787;

											{	/* Foreign/cenum.scm 36 */
												obj_t BgL_arg1280z00_788;

												{	/* Foreign/cenum.scm 36 */
													obj_t BgL_arg1281z00_789;
													obj_t BgL_arg1282z00_790;

													{	/* Foreign/cenum.scm 36 */
														obj_t BgL_res1316z00_791;

														{	/* Foreign/cenum.scm 36 */
															obj_t BgL_arg1466z00_792;

															BgL_arg1466z00_792 =
																SYMBOL_TO_STRING(BgL_bidzf3zf3_778);
															BgL_res1316z00_791 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_792);
														}
														BgL_arg1281z00_789 = BgL_res1316z00_791;
													}
													{	/* Foreign/cenum.scm 36 */
														obj_t BgL_res1317z00_793;

														{	/* Foreign/cenum.scm 36 */
															obj_t BgL_symbolz00_794;

															BgL_symbolz00_794 = CNST_TABLE_REF(((long) 2));
															{	/* Foreign/cenum.scm 36 */
																obj_t BgL_arg1466z00_795;

																BgL_arg1466z00_795 =
																	SYMBOL_TO_STRING(BgL_symbolz00_794);
																BgL_res1317z00_793 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg1466z00_795);
														}}
														BgL_arg1282z00_790 = BgL_res1317z00_793;
													}
													BgL_arg1280z00_788 =
														string_append(BgL_arg1281z00_789,
														BgL_arg1282z00_790);
												}
												BgL_bidzf3zd2boolz21_787 =
													bstring_to_symbol(BgL_arg1280z00_788);
											}
											{	/* Foreign/cenum.scm 36 */
												obj_t BgL_namez00_796;

												BgL_namez00_796 =
													(((BgL_typez00_bglt) COBJECT(
															((BgL_typez00_bglt) BgL_whoz00_745)))->
													BgL_namez00);
												{	/* Foreign/cenum.scm 37 */
													obj_t BgL_namezd2sanszd2z42z42_797;

													BgL_namezd2sanszd2z42z42_797 =
														BGl_stringzd2sanszd2z42z42zztype_toolsz00
														(BgL_namez00_796);
													{	/* Foreign/cenum.scm 38 */
														obj_t BgL_literalsz00_798;

														{
															BgL_cenumz00_bglt BgL_auxz00_957;

															{
																obj_t BgL_auxz00_958;

																{	/* Foreign/cenum.scm 39 */
																	BgL_objectz00_bglt BgL_tmpz00_959;

																	BgL_tmpz00_959 =
																		((BgL_objectz00_bglt)
																		((BgL_typez00_bglt) BgL_whatz00_744));
																	BgL_auxz00_958 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_959);
																}
																BgL_auxz00_957 =
																	((BgL_cenumz00_bglt) BgL_auxz00_958);
															}
															BgL_literalsz00_798 =
																(((BgL_cenumz00_bglt) COBJECT(BgL_auxz00_957))->
																BgL_literalsz00);
														}
														{	/* Foreign/cenum.scm 39 */

															{

																{	/* Foreign/cenum.scm 88 */
																	obj_t BgL_arg1100z00_858;

																	{	/* Foreign/cenum.scm 88 */
																		obj_t BgL_list1104z00_859;

																		{	/* Foreign/cenum.scm 88 */
																			obj_t BgL_arg1109z00_860;

																			{	/* Foreign/cenum.scm 88 */
																				obj_t BgL_arg1110z00_861;

																				BgL_arg1110z00_861 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							1)), BNIL);
																				BgL_arg1109z00_860 =
																					MAKE_YOUNG_PAIR(BgL_idz00_767,
																					BgL_arg1110z00_861);
																			}
																			BgL_list1104z00_859 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						6)), BgL_arg1109z00_860);
																		}
																		BgL_arg1100z00_858 =
																			BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																			(BgL_list1104z00_859);
																	}
																	{	/* Foreign/cenum.scm 86 */
																		obj_t BgL_list1101z00_862;

																		{	/* Foreign/cenum.scm 86 */
																			obj_t BgL_arg1103z00_863;

																			BgL_arg1103z00_863 =
																				MAKE_YOUNG_PAIR(BgL_arg1100z00_858,
																				BNIL);
																			BgL_list1101z00_862 =
																				MAKE_YOUNG_PAIR(BgL_bidzf3zf3_778,
																				BgL_arg1103z00_863);
																		}
																		BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00
																			(BgL_list1101z00_862);
																}}
																{	/* Foreign/cenum.scm 91 */
																	obj_t BgL_arg1113z00_864;

																	{	/* Foreign/cenum.scm 91 */
																		obj_t BgL_arg1114z00_865;

																		{	/* Foreign/cenum.scm 91 */
																			obj_t BgL_arg1115z00_866;
																			obj_t BgL_arg1116z00_867;

																			{	/* Foreign/cenum.scm 45 */
																				obj_t BgL_arg1155z00_852;

																				{	/* Foreign/cenum.scm 45 */
																					obj_t BgL_arg1156z00_853;

																					{	/* Foreign/cenum.scm 45 */
																						obj_t BgL_arg1165z00_854;

																						{	/* Foreign/cenum.scm 45 */
																							obj_t BgL_arg1166z00_855;
																							obj_t BgL_arg1167z00_856;

																							{	/* Foreign/cenum.scm 45 */
																								obj_t BgL_arg1169z00_857;

																								BgL_arg1169z00_857 =
																									MAKE_YOUNG_PAIR(BgL_idz00_767,
																									BNIL);
																								BgL_arg1166z00_855 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 18)),
																									BgL_arg1169z00_857);
																							}
																							BgL_arg1167z00_856 =
																								MAKE_YOUNG_PAIR
																								(BGl_string1327z00zzforeign_cenumz00,
																								BNIL);
																							BgL_arg1165z00_854 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1166z00_855,
																								BgL_arg1167z00_856);
																						}
																						BgL_arg1156z00_853 =
																							MAKE_YOUNG_PAIR
																							(BgL_idzd2ze3bidz31_770,
																							BgL_arg1165z00_854);
																					}
																					BgL_arg1155z00_852 =
																						MAKE_YOUNG_PAIR(BgL_bidz00_769,
																						BgL_arg1156z00_853);
																				}
																				BgL_arg1115z00_866 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							17)), BgL_arg1155z00_852);
																			}
																			{	/* Foreign/cenum.scm 91 */
																				obj_t BgL_tmpz00_983;

																				{	/* Foreign/cenum.scm 48 */
																					obj_t BgL_mnamez00_846;

																					BgL_mnamez00_846 =
																						string_append_3
																						(BGl_string1325z00zzforeign_cenumz00,
																						BgL_namezd2sanszd2z42z42_797,
																						BGl_string1326z00zzforeign_cenumz00);
																					{	/* Foreign/cenum.scm 49 */
																						obj_t BgL_arg1172z00_847;

																						{	/* Foreign/cenum.scm 49 */
																							obj_t BgL_arg1174z00_848;

																							{	/* Foreign/cenum.scm 49 */
																								obj_t BgL_arg1175z00_849;

																								{	/* Foreign/cenum.scm 49 */
																									obj_t BgL_arg1176z00_850;
																									obj_t BgL_arg1177z00_851;

																									BgL_arg1176z00_850 =
																										MAKE_YOUNG_PAIR
																										(BgL_bidz00_769, BNIL);
																									BgL_arg1177z00_851 =
																										MAKE_YOUNG_PAIR
																										(BgL_mnamez00_846, BNIL);
																									BgL_arg1175z00_849 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1176z00_850,
																										BgL_arg1177z00_851);
																								}
																								BgL_arg1174z00_848 =
																									MAKE_YOUNG_PAIR
																									(BgL_bidzd2ze3idz31_774,
																									BgL_arg1175z00_849);
																							}
																							BgL_arg1172z00_847 =
																								MAKE_YOUNG_PAIR(BgL_idz00_767,
																								BgL_arg1174z00_848);
																						}
																						BgL_tmpz00_983 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 17)),
																							BgL_arg1172z00_847);
																				}}
																				BgL_arg1116z00_867 =
																					MAKE_YOUNG_PAIR(BgL_tmpz00_983, BNIL);
																			}
																			BgL_arg1114z00_865 =
																				MAKE_YOUNG_PAIR(BgL_arg1115z00_866,
																				BgL_arg1116z00_867);
																		}
																		BgL_arg1113z00_864 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					19)), BgL_arg1114z00_865);
																	}
																	BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																		(BgL_arg1113z00_864);
																}
																{	/* Foreign/cenum.scm 94 */
																	obj_t BgL_arg1118z00_868;

																	{	/* Foreign/cenum.scm 94 */
																		obj_t BgL_arg1121z00_869;

																		{	/* Foreign/cenum.scm 94 */
																			obj_t BgL_arg1122z00_870;

																			{	/* Foreign/cenum.scm 94 */
																				obj_t BgL_arg1123z00_871;

																				{	/* Foreign/cenum.scm 94 */
																					obj_t BgL_arg1124z00_872;

																					BgL_arg1124z00_872 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 20)), BNIL);
																					BgL_arg1123z00_871 =
																						MAKE_YOUNG_PAIR
																						(BgL_bidzf3zd2boolz21_787,
																						BgL_arg1124z00_872);
																				}
																				BgL_arg1122z00_870 =
																					BGl_makezd2protozd2inlinez00zzforeign_libraryz00
																					(BgL_arg1123z00_871);
																			}
																			BgL_arg1121z00_869 =
																				MAKE_YOUNG_PAIR(BgL_arg1122z00_870,
																				BNIL);
																		}
																		BgL_arg1118z00_868 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					21)), BgL_arg1121z00_869);
																	}
																	BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																		(BgL_arg1118z00_868);
																}
																{	/* Foreign/cenum.scm 95 */
																	obj_t BgL_arg1125z00_873;

																	{	/* Foreign/cenum.scm 95 */
																		obj_t BgL_arg1126z00_874;

																		{	/* Foreign/cenum.scm 95 */
																			obj_t BgL_arg1127z00_875;

																			{	/* Foreign/cenum.scm 95 */
																				obj_t BgL_arg1128z00_876;

																				{	/* Foreign/cenum.scm 95 */
																					obj_t BgL_arg1129z00_877;

																					{	/* Foreign/cenum.scm 95 */
																						obj_t BgL_arg1133z00_878;

																						BgL_arg1133z00_878 =
																							MAKE_YOUNG_PAIR(BgL_bidz00_769,
																							BNIL);
																						BgL_arg1129z00_877 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 22)),
																							BgL_arg1133z00_878);
																					}
																					BgL_arg1128z00_876 =
																						MAKE_YOUNG_PAIR(BgL_arg1129z00_877,
																						BNIL);
																				}
																				BgL_arg1127z00_875 =
																					MAKE_YOUNG_PAIR(BgL_bidzf3zf3_778,
																					BgL_arg1128z00_876);
																			}
																			BgL_arg1126z00_874 =
																				MAKE_YOUNG_PAIR(BgL_arg1127z00_875,
																				BNIL);
																		}
																		BgL_arg1125z00_873 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					4)), BgL_arg1126z00_874);
																	}
																	BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																		(BgL_arg1125z00_873);
																}
																{	/* Foreign/cenum.scm 98 */
																	obj_t BgL_arg1134z00_879;
																	obj_t BgL_arg1140z00_880;

																	{	/* Foreign/cenum.scm 62 */
																		obj_t BgL_arg1239z00_823;

																		{	/* Foreign/cenum.scm 62 */
																			obj_t BgL_arg1242z00_824;
																			obj_t BgL_arg1243z00_825;

																			{	/* Foreign/cenum.scm 62 */
																				obj_t BgL_list1244z00_826;

																				{	/* Foreign/cenum.scm 62 */
																					obj_t BgL_arg1245z00_827;

																					{	/* Foreign/cenum.scm 62 */
																						obj_t BgL_arg1246z00_828;

																						BgL_arg1246z00_828 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 5)), BNIL);
																						BgL_arg1245z00_827 =
																							MAKE_YOUNG_PAIR(BgL_idz00_767,
																							BgL_arg1246z00_828);
																					}
																					BgL_list1244z00_826 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 6)), BgL_arg1245z00_827);
																				}
																				BgL_arg1242z00_824 =
																					BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																					(BgL_list1244z00_826);
																			}
																			{	/* Foreign/cenum.scm 63 */
																				obj_t BgL_arg1247z00_829;
																				obj_t BgL_arg1250z00_830;

																				BgL_arg1247z00_829 =
																					BGl_makezd2typedzd2identz00zzast_identz00
																					(CNST_TABLE_REF(((long) 7)),
																					BgL_idz00_767);
																				BgL_arg1250z00_830 =
																					MAKE_YOUNG_PAIR
																					(BGl_makezd2typedzd2identz00zzast_identz00
																					(CNST_TABLE_REF(((long) 8)),
																						BgL_idz00_767), BNIL);
																				BgL_arg1243z00_825 =
																					MAKE_YOUNG_PAIR(BgL_arg1247z00_829,
																					BgL_arg1250z00_830);
																			}
																			BgL_arg1239z00_823 =
																				MAKE_YOUNG_PAIR(BgL_arg1242z00_824,
																				BgL_arg1243z00_825);
																		}
																		BgL_arg1134z00_879 =
																			BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																			(BgL_arg1239z00_823,
																			CNST_TABLE_REF(((long) 9)));
																	}
																	{	/* Foreign/cenum.scm 98 */
																		obj_t BgL_auxz00_1054;
																		obj_t BgL_tmpz00_1029;

																		{
																			obj_t BgL_literalsz00_805;
																			obj_t BgL_resz00_806;

																			BgL_literalsz00_805 = BgL_literalsz00_798;
																			BgL_resz00_806 = BNIL;
																		BgL_loopz00_804:
																			if (NULLP(BgL_literalsz00_805))
																				{	/* Foreign/cenum.scm 71 */
																					BgL_auxz00_1054 = BgL_resz00_806;
																				}
																			else
																				{	/* Foreign/cenum.scm 73 */
																					obj_t BgL_literalz00_807;

																					BgL_literalz00_807 =
																						CAR(((obj_t) BgL_literalsz00_805));
																					{	/* Foreign/cenum.scm 73 */
																						obj_t BgL_literalzd2idzd2_808;

																						BgL_literalzd2idzd2_808 =
																							CAR(((obj_t) BgL_literalz00_807));
																						{	/* Foreign/cenum.scm 74 */
																							obj_t BgL_literalzd2namezd2_809;

																							{	/* Foreign/cenum.scm 75 */
																								obj_t BgL_pairz00_810;

																								BgL_pairz00_810 =
																									CDR(
																									((obj_t) BgL_literalz00_807));
																								BgL_literalzd2namezd2_809 =
																									CAR(BgL_pairz00_810);
																							}
																							{	/* Foreign/cenum.scm 75 */
																								obj_t BgL_accesszd2idzd2_811;

																								{	/* Foreign/cenum.scm 76 */
																									obj_t BgL_list1275z00_812;

																									{	/* Foreign/cenum.scm 76 */
																										obj_t BgL_arg1276z00_813;

																										{	/* Foreign/cenum.scm 76 */
																											obj_t BgL_arg1277z00_814;

																											BgL_arg1277z00_814 =
																												MAKE_YOUNG_PAIR
																												(BgL_literalzd2idzd2_808,
																												BNIL);
																											BgL_arg1276z00_813 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														3)),
																												BgL_arg1277z00_814);
																										}
																										BgL_list1275z00_812 =
																											MAKE_YOUNG_PAIR
																											(BgL_idz00_767,
																											BgL_arg1276z00_813);
																									}
																									BgL_accesszd2idzd2_811 =
																										BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																										(BgL_list1275z00_812);
																								}
																								{	/* Foreign/cenum.scm 76 */
																									obj_t BgL_accessz00_815;

																									{	/* Foreign/cenum.scm 78 */
																										obj_t BgL_arg1268z00_816;
																										obj_t BgL_arg1270z00_817;

																										BgL_arg1268z00_816 =
																											MAKE_YOUNG_PAIR
																											(BGl_makezd2typedzd2identz00zzast_identz00
																											(BgL_accesszd2idzd2_811,
																												BgL_widz00_768), BNIL);
																										{	/* Foreign/cenum.scm 79 */
																											obj_t BgL_arg1273z00_818;
																											obj_t BgL_arg1274z00_819;

																											BgL_arg1273z00_818 =
																												BGl_makezd2typedzd2identz00zzast_identz00
																												(CNST_TABLE_REF(((long)
																														4)),
																												BgL_widz00_768);
																											BgL_arg1274z00_819 =
																												MAKE_YOUNG_PAIR
																												(BgL_literalzd2namezd2_809,
																												BNIL);
																											BgL_arg1270z00_817 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1273z00_818,
																												BgL_arg1274z00_819);
																										}
																										BgL_accessz00_815 =
																											BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																											(BgL_arg1268z00_816,
																											BgL_arg1270z00_817);
																									}
																									{	/* Foreign/cenum.scm 77 */

																										{	/* Foreign/cenum.scm 81 */
																											obj_t BgL_list1256z00_820;

																											BgL_list1256z00_820 =
																												MAKE_YOUNG_PAIR
																												(BgL_accesszd2idzd2_811,
																												BNIL);
																											BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00
																												(BgL_list1256z00_820);
																										}
																										{	/* Foreign/cenum.scm 82 */
																											obj_t BgL_arg1258z00_821;
																											obj_t BgL_arg1263z00_822;

																											BgL_arg1258z00_821 =
																												CDR(
																												((obj_t)
																													BgL_literalsz00_805));
																											BgL_arg1263z00_822 =
																												MAKE_YOUNG_PAIR
																												(BgL_accessz00_815,
																												BgL_resz00_806);
																											{
																												obj_t BgL_resz00_1082;
																												obj_t
																													BgL_literalsz00_1081;
																												BgL_literalsz00_1081 =
																													BgL_arg1258z00_821;
																												BgL_resz00_1082 =
																													BgL_arg1263z00_822;
																												BgL_resz00_806 =
																													BgL_resz00_1082;
																												BgL_literalsz00_805 =
																													BgL_literalsz00_1081;
																												goto BgL_loopz00_804;
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																		}
																		{	/* Foreign/cenum.scm 54 */
																			obj_t BgL_arg1179z00_831;
																			obj_t BgL_arg1186z00_832;

																			{	/* Foreign/cenum.scm 54 */
																				obj_t BgL_arg1190z00_833;

																				BgL_arg1190z00_833 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							10)), BNIL);
																				BgL_arg1179z00_831 =
																					MAKE_YOUNG_PAIR
																					(BgL_bidzf3zd2boolz21_787,
																					BgL_arg1190z00_833);
																			}
																			{	/* Foreign/cenum.scm 55 */
																				obj_t BgL_arg1194z00_834;

																				{	/* Foreign/cenum.scm 55 */
																					obj_t BgL_arg1197z00_835;
																					obj_t BgL_arg1201z00_836;

																					{	/* Foreign/cenum.scm 55 */
																						obj_t BgL_arg1208z00_837;

																						BgL_arg1208z00_837 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 11)), BNIL);
																						BgL_arg1197z00_835 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 12)),
																							BgL_arg1208z00_837);
																					}
																					{	/* Foreign/cenum.scm 56 */
																						obj_t BgL_arg1211z00_838;
																						obj_t BgL_arg1216z00_839;

																						{	/* Foreign/cenum.scm 56 */
																							obj_t BgL_arg1221z00_840;

																							{	/* Foreign/cenum.scm 56 */
																								obj_t BgL_arg1223z00_841;
																								obj_t BgL_arg1225z00_842;

																								{	/* Foreign/cenum.scm 56 */
																									obj_t BgL_arg1227z00_843;

																									BgL_arg1227z00_843 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												11)), BNIL);
																									BgL_arg1223z00_841 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												13)),
																										BgL_arg1227z00_843);
																								}
																								{	/* Foreign/cenum.scm 56 */
																									obj_t BgL_arg1229z00_844;

																									{	/* Foreign/cenum.scm 56 */
																										obj_t BgL_arg1232z00_845;

																										BgL_arg1232z00_845 =
																											MAKE_YOUNG_PAIR
																											(BgL_bidz00_769, BNIL);
																										BgL_arg1229z00_844 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													14)),
																											BgL_arg1232z00_845);
																									}
																									BgL_arg1225z00_842 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1229z00_844, BNIL);
																								}
																								BgL_arg1221z00_840 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1223z00_841,
																									BgL_arg1225z00_842);
																							}
																							BgL_arg1211z00_838 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 15)),
																								BgL_arg1221z00_840);
																						}
																						BgL_arg1216z00_839 =
																							MAKE_YOUNG_PAIR(BFALSE, BNIL);
																						BgL_arg1201z00_836 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1211z00_838,
																							BgL_arg1216z00_839);
																					}
																					BgL_arg1194z00_834 =
																						MAKE_YOUNG_PAIR(BgL_arg1197z00_835,
																						BgL_arg1201z00_836);
																				}
																				BgL_arg1186z00_832 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							16)), BgL_arg1194z00_834);
																			}
																			BgL_tmpz00_1029 =
																				BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																				(BgL_arg1179z00_831,
																				BgL_arg1186z00_832);
																		}
																		BgL_arg1140z00_880 =
																			MAKE_YOUNG_PAIR(BgL_tmpz00_1029,
																			BgL_auxz00_1054);
																	}
																	return
																		MAKE_YOUNG_PAIR(BgL_arg1134z00_879,
																		BgL_arg1140z00_880);
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



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzforeign_cenumz00()
	{
		{	/* Foreign/cenum.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1328z00zzforeign_cenumz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string1328z00zzforeign_cenumz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1328z00zzforeign_cenumz00));
			BGl_modulezd2initializa7ationz75zzforeign_ctypez00(((long) 396356902),
				BSTRING_TO_STRING(BGl_string1328z00zzforeign_cenumz00));
			BGl_modulezd2initializa7ationz75zzforeign_accessz00(((long) 471073690),
				BSTRING_TO_STRING(BGl_string1328z00zzforeign_cenumz00));
			BGl_modulezd2initializa7ationz75zzforeign_libraryz00(((long) 419430923),
				BSTRING_TO_STRING(BGl_string1328z00zzforeign_cenumz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1328z00zzforeign_cenumz00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1328z00zzforeign_cenumz00));
		}

	}

#ifdef __cplusplus
}
#endif
