/*===========================================================================*/
/*   (Expand/lambda.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/lambda.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62zc3z04anonymousza31122ze3ze5zzexpand_lambdaz00(obj_t);
	static obj_t BGl_z62expandzd2argszb0zzexpand_lambdaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31125ze3ze5zzexpand_lambdaz00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzexpand_lambdaz00();
	BGL_EXPORTED_DECL obj_t BGl_expandzd2lambdazd2zzexpand_lambdaz00(obj_t,
		obj_t);
	static obj_t BGl_appendzd221011zd2zzexpand_lambdaz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzexpand_lambdaz00();
	BGL_EXPORTED_DECL obj_t
		BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_lambdazd2defineszd2zzexpand_lambdaz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31167ze3ze5zzexpand_lambdaz00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 =
		BUNSPEC;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_beginzd2bindingszd2zzexpand_lambdaz00(obj_t);
	BGL_IMPORT bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzexpand_lambdaz00();
	static obj_t BGl_z62expandzd2lambdazb0zzexpand_lambdaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_loopze70ze7zzexpand_lambdaz00(obj_t, obj_t);
	static obj_t BGl_z62internalzd2beginzd2expanderz62zzexpand_lambdaz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_lambdaz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzexpand_lambdaz00();
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zzexpand_lambdaz00();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31066ze3ze5zzexpand_lambdaz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31156ze3ze5zzexpand_lambdaz00(obj_t);
	extern obj_t BGl_replacez12z12zztools_miscz00(obj_t, obj_t);
	extern obj_t BGl_emapz00zztools_prognz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_withzd2lexicalzd2zzexpand_epsz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_lambdaz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_lambdaz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_lambdaz00();
	extern obj_t BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2argszd2zzexpand_lambdaz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31100ze3ze5zzexpand_lambdaz00(obj_t,
		obj_t, obj_t);
	static obj_t __cnst[4];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2argszd2envz00zzexpand_lambdaz00,
		BgL_bgl_za762expandza7d2args1305z00,
		BGl_z62expandzd2argszb0zzexpand_lambdaz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1296z00zzexpand_lambdaz00,
		BgL_bgl_string1296za700za7za7e1306za7, "expand", 6);
	      DEFINE_STRING(BGl_string1297z00zzexpand_lambdaz00,
		BgL_bgl_string1297za700za7za7e1307za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string1298z00zzexpand_lambdaz00,
		BgL_bgl_string1298za700za7za7e1308za7, "Illegal `lambda' form", 21);
	      DEFINE_STRING(BGl_string1299z00zzexpand_lambdaz00,
		BgL_bgl_string1299za700za7za7e1309za7, "Illegal `begin' form", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2lambdazd2envz00zzexpand_lambdaz00,
		BgL_bgl_za762expandza7d2lamb1310z00,
		BGl_z62expandzd2lambdazb0zzexpand_lambdaz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1300z00zzexpand_lambdaz00,
		BgL_bgl_string1300za700za7za7e1311za7, "expand_lambda", 13);
	      DEFINE_STRING(BGl_string1301z00zzexpand_lambdaz00,
		BgL_bgl_string1301za700za7za7e1312za7, "letrec* define begin _ ", 23);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_internalzd2beginzd2expanderzd2envzd2zzexpand_lambdaz00,
		BgL_bgl_za762internalza7d2be1313z00,
		BGl_z62internalzd2beginzd2expanderz62zzexpand_lambdaz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_internalzd2definitionzf3z21zzexpand_lambdaz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzexpand_lambdaz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(long
		BgL_checksumz00_367, char *BgL_fromz00_368)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_lambdaz00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_lambdaz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzexpand_lambdaz00();
					BGl_libraryzd2moduleszd2initz00zzexpand_lambdaz00();
					BGl_cnstzd2initzd2zzexpand_lambdaz00();
					BGl_importedzd2moduleszd2initz00zzexpand_lambdaz00();
					return BGl_toplevelzd2initzd2zzexpand_lambdaz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_lambdaz00()
	{
		{	/* Expand/lambda.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "expand_lambda");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_lambda");
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 0), "expand_lambda");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"expand_lambda");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"expand_lambda");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"expand_lambda");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_lambda");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_lambdaz00()
	{
		{	/* Expand/lambda.scm 15 */
			{	/* Expand/lambda.scm 15 */
				obj_t BgL_cportz00_330;

				{	/* Expand/lambda.scm 15 */
					obj_t BgL_stringz00_338;

					BgL_stringz00_338 = BGl_string1301z00zzexpand_lambdaz00;
					{	/* Expand/lambda.scm 15 */
						obj_t BgL_startz00_339;

						BgL_startz00_339 = BINT(((long) 0));
						{	/* Expand/lambda.scm 15 */
							obj_t BgL_endz00_340;

							BgL_endz00_340 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_338)));
							{	/* Expand/lambda.scm 15 */

								BgL_cportz00_330 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_338, BgL_startz00_339, BgL_endz00_340);
				}}}}
				{
					long BgL_iz00_331;

					BgL_iz00_331 = ((long) 3);
				BgL_loopz00_332:
					if ((BgL_iz00_331 == ((long) -1)))
						{	/* Expand/lambda.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/lambda.scm 15 */
							{	/* Expand/lambda.scm 15 */
								obj_t BgL_arg1303z00_334;

								{	/* Expand/lambda.scm 15 */

									{	/* Expand/lambda.scm 15 */
										obj_t BgL_locationz00_336;

										BgL_locationz00_336 = BBOOL(((bool_t) 0));
										{	/* Expand/lambda.scm 15 */

											BgL_arg1303z00_334 =
												BGl_readz00zz__readerz00(BgL_cportz00_330,
												BgL_locationz00_336);
										}
									}
								}
								{	/* Expand/lambda.scm 15 */
									int BgL_tmpz00_393;

									BgL_tmpz00_393 = (int) (BgL_iz00_331);
									CNST_TABLE_SET(BgL_tmpz00_393, BgL_arg1303z00_334);
							}}
							{	/* Expand/lambda.scm 15 */
								int BgL_auxz00_337;

								BgL_auxz00_337 = (int) ((BgL_iz00_331 - ((long) 1)));
								{
									long BgL_iz00_398;

									BgL_iz00_398 = (long) (BgL_auxz00_337);
									BgL_iz00_331 = BgL_iz00_398;
									goto BgL_loopz00_332;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzexpand_lambdaz00()
	{
		{	/* Expand/lambda.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzexpand_lambdaz00()
	{
		{	/* Expand/lambda.scm 15 */
			return (BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 =
				BFALSE, BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzexpand_lambdaz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_10;

				BgL_headz00_10 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_11;
					obj_t BgL_tailz00_12;

					BgL_prevz00_11 = BgL_headz00_10;
					BgL_tailz00_12 = BgL_l1z00_1;
				BgL_loopz00_13:
					if (PAIRP(BgL_tailz00_12))
						{
							obj_t BgL_newzd2prevzd2_15;

							BgL_newzd2prevzd2_15 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_12), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_11, BgL_newzd2prevzd2_15);
							{
								obj_t BgL_tailz00_408;
								obj_t BgL_prevz00_407;

								BgL_prevz00_407 = BgL_newzd2prevzd2_15;
								BgL_tailz00_408 = CDR(BgL_tailz00_12);
								BgL_tailz00_12 = BgL_tailz00_408;
								BgL_prevz00_11 = BgL_prevz00_407;
								goto BgL_loopz00_13;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_10);
				}
			}
		}

	}



/* expand-args */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2argszd2zzexpand_lambdaz00(obj_t
		BgL_argsz00_3, obj_t BgL_ez00_4)
	{
		{	/* Expand/lambda.scm 37 */
			return BGl_loopze70ze7zzexpand_lambdaz00(BgL_ez00_4, BgL_argsz00_3);
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zzexpand_lambdaz00(obj_t BgL_ez00_329,
		obj_t BgL_argsz00_19)
	{
		{	/* Expand/lambda.scm 38 */
			if (NULLP(BgL_argsz00_19))
				{	/* Expand/lambda.scm 40 */
					return BNIL;
				}
			else
				{	/* Expand/lambda.scm 40 */
					if (SYMBOLP(BgL_argsz00_19))
						{	/* Expand/lambda.scm 42 */
							return BgL_argsz00_19;
						}
					else
						{	/* Expand/lambda.scm 42 */
							if (PAIRP(BgL_argsz00_19))
								{	/* Expand/lambda.scm 46 */
									bool_t BgL_test1320z00_418;

									{	/* Expand/lambda.scm 46 */
										bool_t BgL_test1321z00_419;

										{	/* Expand/lambda.scm 46 */
											obj_t BgL_tmpz00_420;

											BgL_tmpz00_420 = CAR(BgL_argsz00_19);
											BgL_test1321z00_419 = PAIRP(BgL_tmpz00_420);
										}
										if (BgL_test1321z00_419)
											{	/* Expand/lambda.scm 47 */
												bool_t BgL_test1322z00_423;

												{	/* Expand/lambda.scm 47 */
													obj_t BgL_tmpz00_424;

													BgL_tmpz00_424 = CDR(CAR(BgL_argsz00_19));
													BgL_test1322z00_423 = PAIRP(BgL_tmpz00_424);
												}
												if (BgL_test1322z00_423)
													{	/* Expand/lambda.scm 48 */
														obj_t BgL_tmpz00_428;

														{	/* Expand/lambda.scm 48 */
															obj_t BgL_pairz00_229;

															BgL_pairz00_229 = CAR(BgL_argsz00_19);
															BgL_tmpz00_428 = CDR(CDR(BgL_pairz00_229));
														}
														BgL_test1320z00_418 = NULLP(BgL_tmpz00_428);
													}
												else
													{	/* Expand/lambda.scm 47 */
														BgL_test1320z00_418 = ((bool_t) 0);
													}
											}
										else
											{	/* Expand/lambda.scm 46 */
												BgL_test1320z00_418 = ((bool_t) 0);
											}
									}
									if (BgL_test1320z00_418)
										{	/* Expand/lambda.scm 51 */
											obj_t BgL_arg1039z00_35;
											obj_t BgL_arg1040z00_36;

											{	/* Expand/lambda.scm 51 */
												obj_t BgL_arg1041z00_37;
												obj_t BgL_arg1042z00_38;

												BgL_arg1041z00_37 = CAR(CAR(BgL_argsz00_19));
												{	/* Expand/lambda.scm 51 */
													obj_t BgL_arg1047z00_42;

													{	/* Expand/lambda.scm 51 */
														obj_t BgL_pairz00_237;

														BgL_pairz00_237 = CAR(BgL_argsz00_19);
														BgL_arg1047z00_42 = CAR(CDR(BgL_pairz00_237));
													}
													BgL_arg1042z00_38 =
														PROCEDURE_ENTRY(BgL_ez00_329) (BgL_ez00_329,
														BgL_arg1047z00_42, BgL_ez00_329, BEOA);
												}
												{	/* Expand/lambda.scm 51 */
													obj_t BgL_list1043z00_39;

													{	/* Expand/lambda.scm 51 */
														obj_t BgL_arg1044z00_40;

														BgL_arg1044z00_40 =
															MAKE_YOUNG_PAIR(BgL_arg1042z00_38, BNIL);
														BgL_list1043z00_39 =
															MAKE_YOUNG_PAIR(BgL_arg1041z00_37,
															BgL_arg1044z00_40);
													}
													BgL_arg1039z00_35 = BgL_list1043z00_39;
												}
											}
											BgL_arg1040z00_36 =
												BGl_loopze70ze7zzexpand_lambdaz00(BgL_ez00_329,
												CDR(BgL_argsz00_19));
											return
												MAKE_YOUNG_PAIR(BgL_arg1039z00_35, BgL_arg1040z00_36);
										}
									else
										{	/* Expand/lambda.scm 46 */
											return
												MAKE_YOUNG_PAIR(CAR(BgL_argsz00_19),
												BGl_loopze70ze7zzexpand_lambdaz00(BgL_ez00_329,
													CDR(BgL_argsz00_19)));
										}
								}
							else
								{	/* Expand/lambda.scm 44 */
									return
										BGl_errorz00zz__errorz00
										(BGl_string1296z00zzexpand_lambdaz00,
										BGl_string1297z00zzexpand_lambdaz00, BgL_argsz00_19);
								}
						}
				}
		}

	}



/* &expand-args */
	obj_t BGl_z62expandzd2argszb0zzexpand_lambdaz00(obj_t BgL_envz00_294,
		obj_t BgL_argsz00_295, obj_t BgL_ez00_296)
	{
		{	/* Expand/lambda.scm 37 */
			return
				BGl_expandzd2argszd2zzexpand_lambdaz00(BgL_argsz00_295, BgL_ez00_296);
		}

	}



/* expand-lambda */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2lambdazd2zzexpand_lambdaz00(obj_t
		BgL_xz00_5, obj_t BgL_ez00_6)
	{
		{	/* Expand/lambda.scm 57 */
			{	/* Expand/lambda.scm 58 */
				obj_t BgL_oldzd2internalzd2_56;

				BgL_oldzd2internalzd2_56 =
					BGl_internalzd2definitionzf3z21zzexpand_lambdaz00;
				BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BTRUE;
				{	/* Expand/lambda.scm 60 */
					obj_t BgL_resz00_57;

					{
						obj_t BgL_lamz00_58;
						obj_t BgL_argsz00_59;
						obj_t BgL_bodyz00_60;

						if (PAIRP(BgL_xz00_5))
							{	/* Expand/lambda.scm 60 */
								obj_t BgL_cdrzd2369zd2_65;

								BgL_cdrzd2369zd2_65 = CDR(BgL_xz00_5);
								if (PAIRP(BgL_cdrzd2369zd2_65))
									{	/* Expand/lambda.scm 60 */
										obj_t BgL_cdrzd2374zd2_67;

										BgL_cdrzd2374zd2_67 = CDR(BgL_cdrzd2369zd2_65);
										if (NULLP(BgL_cdrzd2374zd2_67))
											{	/* Expand/lambda.scm 60 */
											BgL_tagzd2360zd2_62:
												BgL_resz00_57 =
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string1298z00zzexpand_lambdaz00, BgL_xz00_5);
											}
										else
											{	/* Expand/lambda.scm 60 */
												BgL_lamz00_58 = CAR(BgL_xz00_5);
												BgL_argsz00_59 = CAR(BgL_cdrzd2369zd2_65);
												BgL_bodyz00_60 = BgL_cdrzd2374zd2_67;
												{	/* Expand/lambda.scm 62 */
													obj_t BgL_arg1063z00_71;
													obj_t BgL_arg1064z00_72;

													BgL_arg1063z00_71 =
														BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
														(BgL_argsz00_59);
													BgL_arg1064z00_72 =
														BGl_findzd2locationzd2zztools_locationz00
														(BgL_xz00_5);
													{	/* Expand/lambda.scm 66 */
														obj_t BgL_zc3z04anonymousza31066ze3z87_297;

														BgL_zc3z04anonymousza31066ze3z87_297 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31066ze3ze5zzexpand_lambdaz00,
															(int) (((long) 0)), (int) (((long) 4)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31066ze3z87_297,
															(int) (((long) 0)), BgL_ez00_6);
														PROCEDURE_SET(BgL_zc3z04anonymousza31066ze3z87_297,
															(int) (((long) 1)), BgL_argsz00_59);
														PROCEDURE_SET(BgL_zc3z04anonymousza31066ze3z87_297,
															(int) (((long) 2)), BgL_bodyz00_60);
														PROCEDURE_SET(BgL_zc3z04anonymousza31066ze3z87_297,
															(int) (((long) 3)), BgL_lamz00_58);
														BgL_resz00_57 =
															BGl_withzd2lexicalzd2zzexpand_epsz00
															(BgL_arg1063z00_71, CNST_TABLE_REF(((long) 0)),
															BgL_arg1064z00_72,
															BgL_zc3z04anonymousza31066ze3z87_297);
									}}}}
								else
									{	/* Expand/lambda.scm 60 */
										goto BgL_tagzd2360zd2_62;
									}
							}
						else
							{	/* Expand/lambda.scm 60 */
								goto BgL_tagzd2360zd2_62;
							}
					}
					BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 =
						BgL_oldzd2internalzd2_56;
					return BGl_replacez12z12zztools_miscz00(BgL_xz00_5, BgL_resz00_57);
				}
			}
		}

	}



/* &expand-lambda */
	obj_t BGl_z62expandzd2lambdazb0zzexpand_lambdaz00(obj_t BgL_envz00_298,
		obj_t BgL_xz00_299, obj_t BgL_ez00_300)
	{
		{	/* Expand/lambda.scm 57 */
			return
				BGl_expandzd2lambdazd2zzexpand_lambdaz00(BgL_xz00_299, BgL_ez00_300);
		}

	}



/* &<@anonymous:1066> */
	obj_t BGl_z62zc3z04anonymousza31066ze3ze5zzexpand_lambdaz00(obj_t
		BgL_envz00_301)
	{
		{	/* Expand/lambda.scm 65 */
			{	/* Expand/lambda.scm 66 */
				obj_t BgL_ez00_302;
				obj_t BgL_argsz00_303;
				obj_t BgL_bodyz00_304;
				obj_t BgL_lamz00_305;

				BgL_ez00_302 =
					((obj_t) PROCEDURE_REF(BgL_envz00_301, (int) (((long) 0))));
				BgL_argsz00_303 = PROCEDURE_REF(BgL_envz00_301, (int) (((long) 1)));
				BgL_bodyz00_304 = PROCEDURE_REF(BgL_envz00_301, (int) (((long) 2)));
				BgL_lamz00_305 = PROCEDURE_REF(BgL_envz00_301, (int) (((long) 3)));
				{	/* Expand/lambda.scm 66 */
					obj_t BgL_ez00_344;

					BgL_ez00_344 =
						BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(BgL_ez00_302);
					{	/* Expand/lambda.scm 67 */
						obj_t BgL_arg1073z00_345;

						{	/* Expand/lambda.scm 67 */
							obj_t BgL_arg1074z00_346;
							obj_t BgL_arg1078z00_347;

							BgL_arg1074z00_346 =
								BGl_loopze70ze7zzexpand_lambdaz00(BgL_ez00_344,
								BgL_argsz00_303);
							{	/* Expand/lambda.scm 68 */
								obj_t BgL_arg1095z00_349;

								{	/* Expand/lambda.scm 68 */
									obj_t BgL_arg1099z00_350;

									BgL_arg1099z00_350 =
										BGl_expandzd2prognzd2zz__prognz00(BgL_bodyz00_304);
									BgL_arg1095z00_349 =
										PROCEDURE_ENTRY(BgL_ez00_344) (BgL_ez00_344,
										BgL_arg1099z00_350, BgL_ez00_344, BEOA);
								}
								BgL_arg1078z00_347 = MAKE_YOUNG_PAIR(BgL_arg1095z00_349, BNIL);
							}
							BgL_arg1073z00_345 =
								MAKE_YOUNG_PAIR(BgL_arg1074z00_346, BgL_arg1078z00_347);
						}
						return MAKE_YOUNG_PAIR(BgL_lamz00_305, BgL_arg1073z00_345);
					}
				}
			}
		}

	}



/* internal-begin-expander */
	BGL_EXPORTED_DEF obj_t
		BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(obj_t
		BgL_oldzd2expanderzd2_7)
	{
		{	/* Expand/lambda.scm 77 */
			{	/* Expand/lambda.scm 78 */
				obj_t BgL_zc3z04anonymousza31100ze3z87_310;

				BgL_zc3z04anonymousza31100ze3z87_310 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31100ze3ze5zzexpand_lambdaz00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31100ze3z87_310, (int) (((long) 0)),
					BgL_oldzd2expanderzd2_7);
				return BgL_zc3z04anonymousza31100ze3z87_310;
			}
		}

	}



/* &internal-begin-expander */
	obj_t BGl_z62internalzd2beginzd2expanderz62zzexpand_lambdaz00(obj_t
		BgL_envz00_311, obj_t BgL_oldzd2expanderzd2_312)
	{
		{	/* Expand/lambda.scm 77 */
			return
				BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00
				(BgL_oldzd2expanderzd2_312);
		}

	}



/* &<@anonymous:1100> */
	obj_t BGl_z62zc3z04anonymousza31100ze3ze5zzexpand_lambdaz00(obj_t
		BgL_envz00_313, obj_t BgL_exprz00_315, obj_t BgL_expanderz00_316)
	{
		{	/* Expand/lambda.scm 78 */
			{	/* Expand/lambda.scm 78 */
				obj_t BgL_oldzd2expanderzd2_314;

				BgL_oldzd2expanderzd2_314 =
					((obj_t) PROCEDURE_REF(BgL_envz00_313, (int) (((long) 0))));
				{
					obj_t BgL_restz00_359;

					if (PAIRP(BgL_exprz00_315))
						{	/* Expand/lambda.scm 78 */
							if ((CAR(BgL_exprz00_315) == CNST_TABLE_REF(((long) 1))))
								{	/* Expand/lambda.scm 78 */
									if (NULLP(CDR(BgL_exprz00_315)))
										{	/* Expand/lambda.scm 78 */
											return BUNSPEC;
										}
									else
										{	/* Expand/lambda.scm 78 */
											BgL_restz00_359 = CDR(BgL_exprz00_315);
											if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
												(BgL_restz00_359))
												{	/* Expand/lambda.scm 86 */
													obj_t BgL_arg1117z00_360;
													obj_t BgL_arg1118z00_361;

													BgL_arg1117z00_360 =
														BGl_beginzd2bindingszd2zzexpand_lambdaz00
														(BgL_restz00_359);
													BgL_arg1118z00_361 =
														BGl_findzd2locationzd2zztools_locationz00
														(BgL_exprz00_315);
													{	/* Expand/lambda.scm 91 */
														obj_t BgL_zc3z04anonymousza31122ze3z87_362;

														BgL_zc3z04anonymousza31122ze3z87_362 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31122ze3ze5zzexpand_lambdaz00,
															(int) (((long) 0)), (int) (((long) 2)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31122ze3z87_362,
															(int) (((long) 0)), BgL_oldzd2expanderzd2_314);
														PROCEDURE_SET(BgL_zc3z04anonymousza31122ze3z87_362,
															(int) (((long) 1)), BgL_restz00_359);
														return
															BGl_withzd2lexicalzd2zzexpand_epsz00
															(BgL_arg1117z00_360, CNST_TABLE_REF(((long) 0)),
															BgL_arg1118z00_361,
															BgL_zc3z04anonymousza31122ze3z87_362);
												}}
											else
												{	/* Expand/lambda.scm 83 */
													return
														BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
														BGl_string1299z00zzexpand_lambdaz00,
														BgL_exprz00_315);
								}}}
							else
								{	/* Expand/lambda.scm 78 */
								BgL_tagzd2380zd2_351:
									{	/* Expand/lambda.scm 93 */
										obj_t BgL_nexprz00_353;

										BgL_nexprz00_353 =
											PROCEDURE_ENTRY(BgL_oldzd2expanderzd2_314)
											(BgL_oldzd2expanderzd2_314, BgL_exprz00_315,
											BgL_oldzd2expanderzd2_314, BEOA);
										{
											obj_t BgL_restz00_355;

											if (PAIRP(BgL_nexprz00_353))
												{	/* Expand/lambda.scm 94 */
													if (
														(CAR(BgL_nexprz00_353) ==
															CNST_TABLE_REF(((long) 1))))
														{	/* Expand/lambda.scm 94 */
															if (NULLP(CDR(BgL_nexprz00_353)))
																{	/* Expand/lambda.scm 94 */
																	return BUNSPEC;
																}
															else
																{	/* Expand/lambda.scm 94 */
																	BgL_restz00_355 = CDR(BgL_nexprz00_353);
																	if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_restz00_355))
																		{	/* Expand/lambda.scm 101 */
																			obj_t BgL_arg1145z00_356;
																			obj_t BgL_arg1146z00_357;

																			BgL_arg1145z00_356 =
																				BGl_beginzd2bindingszd2zzexpand_lambdaz00
																				(BgL_restz00_355);
																			BgL_arg1146z00_357 =
																				BGl_findzd2locationzd2zztools_locationz00
																				(BgL_exprz00_315);
																			{	/* Expand/lambda.scm 106 */
																				obj_t
																					BgL_zc3z04anonymousza31156ze3z87_358;
																				BgL_zc3z04anonymousza31156ze3z87_358 =
																					MAKE_FX_PROCEDURE
																					(BGl_z62zc3z04anonymousza31156ze3ze5zzexpand_lambdaz00,
																					(int) (((long) 0)),
																					(int) (((long) 2)));
																				PROCEDURE_SET
																					(BgL_zc3z04anonymousza31156ze3z87_358,
																					(int) (((long) 0)),
																					BgL_oldzd2expanderzd2_314);
																				PROCEDURE_SET
																					(BgL_zc3z04anonymousza31156ze3z87_358,
																					(int) (((long) 1)), BgL_restz00_355);
																				return
																					BGl_withzd2lexicalzd2zzexpand_epsz00
																					(BgL_arg1145z00_356,
																					CNST_TABLE_REF(((long) 0)),
																					BgL_arg1146z00_357,
																					BgL_zc3z04anonymousza31156ze3z87_358);
																		}}
																	else
																		{	/* Expand/lambda.scm 98 */
																			return
																				BGl_errorz00zz__errorz00(CNST_TABLE_REF(
																					((long) 1)),
																				BGl_string1299z00zzexpand_lambdaz00,
																				BgL_exprz00_315);
														}}}
													else
														{	/* Expand/lambda.scm 94 */
															return BgL_nexprz00_353;
														}
												}
											else
												{	/* Expand/lambda.scm 94 */
													return BgL_nexprz00_353;
												}
										}
									}
								}
						}
					else
						{	/* Expand/lambda.scm 78 */
							goto BgL_tagzd2380zd2_351;
						}
				}
			}
		}

	}



/* &<@anonymous:1156> */
	obj_t BGl_z62zc3z04anonymousza31156ze3ze5zzexpand_lambdaz00(obj_t
		BgL_envz00_317)
	{
		{	/* Expand/lambda.scm 104 */
			{	/* Expand/lambda.scm 106 */
				obj_t BgL_oldzd2expanderzd2_318;
				obj_t BgL_restz00_319;

				BgL_oldzd2expanderzd2_318 =
					((obj_t) PROCEDURE_REF(BgL_envz00_317, (int) (((long) 0))));
				BgL_restz00_319 = PROCEDURE_REF(BgL_envz00_317, (int) (((long) 1)));
				{	/* Expand/lambda.scm 106 */
					obj_t BgL_arg1165z00_363;

					{	/* Expand/lambda.scm 106 */
						obj_t BgL_zc3z04anonymousza31167ze3z87_364;

						BgL_zc3z04anonymousza31167ze3z87_364 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31167ze3ze5zzexpand_lambdaz00,
							(int) (((long) 1)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31167ze3z87_364,
							(int) (((long) 0)), BgL_oldzd2expanderzd2_318);
						BgL_arg1165z00_363 =
							BGl_emapz00zztools_prognz00(BgL_zc3z04anonymousza31167ze3z87_364,
							BgL_restz00_319);
					}
					return BGl_lambdazd2defineszd2zzexpand_lambdaz00(BgL_arg1165z00_363);
				}
			}
		}

	}



/* &<@anonymous:1167> */
	obj_t BGl_z62zc3z04anonymousza31167ze3ze5zzexpand_lambdaz00(obj_t
		BgL_envz00_320, obj_t BgL_xz00_322)
	{
		{	/* Expand/lambda.scm 106 */
			{	/* Expand/lambda.scm 106 */
				obj_t BgL_oldzd2expanderzd2_321;

				BgL_oldzd2expanderzd2_321 =
					((obj_t) PROCEDURE_REF(BgL_envz00_320, (int) (((long) 0))));
				return
					PROCEDURE_ENTRY(BgL_oldzd2expanderzd2_321) (BgL_oldzd2expanderzd2_321,
					BgL_xz00_322, BgL_oldzd2expanderzd2_321, BEOA);
			}
		}

	}



/* &<@anonymous:1122> */
	obj_t BGl_z62zc3z04anonymousza31122ze3ze5zzexpand_lambdaz00(obj_t
		BgL_envz00_323)
	{
		{	/* Expand/lambda.scm 89 */
			{	/* Expand/lambda.scm 91 */
				obj_t BgL_oldzd2expanderzd2_324;
				obj_t BgL_restz00_325;

				BgL_oldzd2expanderzd2_324 =
					((obj_t) PROCEDURE_REF(BgL_envz00_323, (int) (((long) 0))));
				BgL_restz00_325 = PROCEDURE_REF(BgL_envz00_323, (int) (((long) 1)));
				{	/* Expand/lambda.scm 91 */
					obj_t BgL_arg1123z00_365;

					{	/* Expand/lambda.scm 91 */
						obj_t BgL_zc3z04anonymousza31125ze3z87_366;

						BgL_zc3z04anonymousza31125ze3z87_366 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31125ze3ze5zzexpand_lambdaz00,
							(int) (((long) 1)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31125ze3z87_366,
							(int) (((long) 0)), BgL_oldzd2expanderzd2_324);
						BgL_arg1123z00_365 =
							BGl_emapz00zztools_prognz00(BgL_zc3z04anonymousza31125ze3z87_366,
							BgL_restz00_325);
					}
					return BGl_lambdazd2defineszd2zzexpand_lambdaz00(BgL_arg1123z00_365);
				}
			}
		}

	}



/* &<@anonymous:1125> */
	obj_t BGl_z62zc3z04anonymousza31125ze3ze5zzexpand_lambdaz00(obj_t
		BgL_envz00_326, obj_t BgL_xz00_328)
	{
		{	/* Expand/lambda.scm 91 */
			{	/* Expand/lambda.scm 91 */
				obj_t BgL_oldzd2expanderzd2_327;

				BgL_oldzd2expanderzd2_327 =
					((obj_t) PROCEDURE_REF(BgL_envz00_326, (int) (((long) 0))));
				return
					PROCEDURE_ENTRY(BgL_oldzd2expanderzd2_327) (BgL_oldzd2expanderzd2_327,
					BgL_xz00_328, BgL_oldzd2expanderzd2_327, BEOA);
			}
		}

	}



/* begin-bindings */
	obj_t BGl_beginzd2bindingszd2zzexpand_lambdaz00(obj_t BgL_bodyz00_8)
	{
		{	/* Expand/lambda.scm 113 */
			{
				obj_t BgL_oldformsz00_136;
				obj_t BgL_varsz00_137;

				BgL_oldformsz00_136 = BgL_bodyz00_8;
				BgL_varsz00_137 = BNIL;
			BgL_zc3z04anonymousza31168ze3z87_138:
				if (PAIRP(BgL_oldformsz00_136))
					{	/* Expand/lambda.scm 119 */
						obj_t BgL_formz00_140;

						BgL_formz00_140 = CAR(BgL_oldformsz00_136);
						{
							obj_t BgL_varz00_143;
							obj_t BgL_varz00_141;

							if (PAIRP(BgL_formz00_140))
								{	/* Expand/lambda.scm 120 */
									obj_t BgL_cdrzd2417zd2_148;

									BgL_cdrzd2417zd2_148 = CDR(BgL_formz00_140);
									if ((CAR(BgL_formz00_140) == CNST_TABLE_REF(((long) 2))))
										{	/* Expand/lambda.scm 120 */
											if (PAIRP(BgL_cdrzd2417zd2_148))
												{	/* Expand/lambda.scm 120 */
													obj_t BgL_carzd2419zd2_152;

													BgL_carzd2419zd2_152 = CAR(BgL_cdrzd2417zd2_148);
													if (PAIRP(BgL_carzd2419zd2_152))
														{	/* Expand/lambda.scm 120 */
															BgL_varz00_141 = CAR(BgL_carzd2419zd2_152);
															{	/* Expand/lambda.scm 122 */
																obj_t BgL_arg1186z00_158;
																obj_t BgL_arg1190z00_159;

																BgL_arg1186z00_158 =
																	CDR(((obj_t) BgL_oldformsz00_136));
																BgL_arg1190z00_159 =
																	MAKE_YOUNG_PAIR(BgL_varz00_141,
																	BgL_varsz00_137);
																{
																	obj_t BgL_varsz00_625;
																	obj_t BgL_oldformsz00_624;

																	BgL_oldformsz00_624 = BgL_arg1186z00_158;
																	BgL_varsz00_625 = BgL_arg1190z00_159;
																	BgL_varsz00_137 = BgL_varsz00_625;
																	BgL_oldformsz00_136 = BgL_oldformsz00_624;
																	goto BgL_zc3z04anonymousza31168ze3z87_138;
																}
															}
														}
													else
														{	/* Expand/lambda.scm 120 */
															obj_t BgL_arg1177z00_155;

															BgL_arg1177z00_155 =
																CAR(((obj_t) BgL_cdrzd2417zd2_148));
															BgL_varz00_143 = BgL_arg1177z00_155;
															{	/* Expand/lambda.scm 124 */
																obj_t BgL_arg1194z00_160;
																obj_t BgL_arg1197z00_161;

																BgL_arg1194z00_160 =
																	CDR(((obj_t) BgL_oldformsz00_136));
																BgL_arg1197z00_161 =
																	MAKE_YOUNG_PAIR(BgL_varz00_143,
																	BgL_varsz00_137);
																{
																	obj_t BgL_varsz00_633;
																	obj_t BgL_oldformsz00_632;

																	BgL_oldformsz00_632 = BgL_arg1194z00_160;
																	BgL_varsz00_633 = BgL_arg1197z00_161;
																	BgL_varsz00_137 = BgL_varsz00_633;
																	BgL_oldformsz00_136 = BgL_oldformsz00_632;
																	goto BgL_zc3z04anonymousza31168ze3z87_138;
																}
															}
														}
												}
											else
												{	/* Expand/lambda.scm 120 */
												BgL_tagzd2412zd2_145:
													{	/* Expand/lambda.scm 126 */
														obj_t BgL_arg1201z00_162;

														BgL_arg1201z00_162 =
															CDR(((obj_t) BgL_oldformsz00_136));
														{
															obj_t BgL_oldformsz00_636;

															BgL_oldformsz00_636 = BgL_arg1201z00_162;
															BgL_oldformsz00_136 = BgL_oldformsz00_636;
															goto BgL_zc3z04anonymousza31168ze3z87_138;
														}
													}
												}
										}
									else
										{	/* Expand/lambda.scm 120 */
											goto BgL_tagzd2412zd2_145;
										}
								}
							else
								{	/* Expand/lambda.scm 120 */
									goto BgL_tagzd2412zd2_145;
								}
						}
					}
				else
					{	/* Expand/lambda.scm 118 */
						return BgL_varsz00_137;
					}
			}
		}

	}



/* lambda-defines */
	obj_t BGl_lambdazd2defineszd2zzexpand_lambdaz00(obj_t BgL_bodyz00_9)
	{
		{	/* Expand/lambda.scm 132 */
			{
				obj_t BgL_oldformsz00_168;
				obj_t BgL_newformsz00_169;
				obj_t BgL_varsz00_170;
				obj_t BgL_declsz00_171;

				BgL_oldformsz00_168 = BgL_bodyz00_9;
				BgL_newformsz00_169 = BNIL;
				BgL_varsz00_170 = BNIL;
				BgL_declsz00_171 = BNIL;
			BgL_zc3z04anonymousza31202ze3z87_172:
				if (PAIRP(BgL_oldformsz00_168))
					{	/* Expand/lambda.scm 138 */
						obj_t BgL_formz00_174;

						BgL_formz00_174 = CAR(BgL_oldformsz00_168);
						{
							obj_t BgL_bodyz00_178;
							obj_t BgL_varz00_175;
							obj_t BgL_valz00_176;

							if (PAIRP(BgL_formz00_174))
								{	/* Expand/lambda.scm 139 */
									obj_t BgL_cdrzd2449zd2_183;

									BgL_cdrzd2449zd2_183 = CDR(BgL_formz00_174);
									if ((CAR(BgL_formz00_174) == CNST_TABLE_REF(((long) 2))))
										{	/* Expand/lambda.scm 139 */
											if (PAIRP(BgL_cdrzd2449zd2_183))
												{	/* Expand/lambda.scm 139 */
													obj_t BgL_cdrzd2453zd2_187;

													BgL_cdrzd2453zd2_187 = CDR(BgL_cdrzd2449zd2_183);
													if (PAIRP(BgL_cdrzd2453zd2_187))
														{	/* Expand/lambda.scm 139 */
															if (NULLP(CDR(BgL_cdrzd2453zd2_187)))
																{	/* Expand/lambda.scm 139 */
																	BgL_varz00_175 = CAR(BgL_cdrzd2449zd2_183);
																	BgL_valz00_176 = CAR(BgL_cdrzd2453zd2_187);
																	{	/* Expand/lambda.scm 141 */
																		obj_t BgL_arg1242z00_199;
																		obj_t BgL_arg1243z00_200;
																		obj_t BgL_arg1245z00_201;

																		BgL_arg1242z00_199 =
																			CDR(((obj_t) BgL_oldformsz00_168));
																		BgL_arg1243z00_200 =
																			MAKE_YOUNG_PAIR(BgL_varz00_175,
																			BgL_varsz00_170);
																		{	/* Expand/lambda.scm 144 */
																			obj_t BgL_arg1246z00_202;

																			{	/* Expand/lambda.scm 144 */
																				obj_t BgL_arg1247z00_203;

																				BgL_arg1247z00_203 =
																					MAKE_YOUNG_PAIR(BgL_valz00_176, BNIL);
																				BgL_arg1246z00_202 =
																					MAKE_YOUNG_PAIR(BgL_varz00_175,
																					BgL_arg1247z00_203);
																			}
																			BgL_arg1245z00_201 =
																				MAKE_YOUNG_PAIR(BgL_arg1246z00_202,
																				BgL_declsz00_171);
																		}
																		{
																			obj_t BgL_declsz00_663;
																			obj_t BgL_varsz00_662;
																			obj_t BgL_oldformsz00_661;

																			BgL_oldformsz00_661 = BgL_arg1242z00_199;
																			BgL_varsz00_662 = BgL_arg1243z00_200;
																			BgL_declsz00_663 = BgL_arg1245z00_201;
																			BgL_declsz00_171 = BgL_declsz00_663;
																			BgL_varsz00_170 = BgL_varsz00_662;
																			BgL_oldformsz00_168 = BgL_oldformsz00_661;
																			goto BgL_zc3z04anonymousza31202ze3z87_172;
																		}
																	}
																}
															else
																{	/* Expand/lambda.scm 139 */
																BgL_tagzd2441zd2_180:
																	{	/* Expand/lambda.scm 151 */
																		obj_t BgL_arg1253z00_206;
																		obj_t BgL_arg1254z00_207;

																		BgL_arg1253z00_206 =
																			CDR(((obj_t) BgL_oldformsz00_168));
																		BgL_arg1254z00_207 =
																			MAKE_YOUNG_PAIR(BgL_formz00_174,
																			BgL_newformsz00_169);
																		{
																			obj_t BgL_newformsz00_670;
																			obj_t BgL_oldformsz00_669;

																			BgL_oldformsz00_669 = BgL_arg1253z00_206;
																			BgL_newformsz00_670 = BgL_arg1254z00_207;
																			BgL_newformsz00_169 = BgL_newformsz00_670;
																			BgL_oldformsz00_168 = BgL_oldformsz00_669;
																			goto BgL_zc3z04anonymousza31202ze3z87_172;
																		}
																	}
																}
														}
													else
														{	/* Expand/lambda.scm 139 */
															goto BgL_tagzd2441zd2_180;
														}
												}
											else
												{	/* Expand/lambda.scm 139 */
													goto BgL_tagzd2441zd2_180;
												}
										}
									else
										{	/* Expand/lambda.scm 139 */
											if ((CAR(BgL_formz00_174) == CNST_TABLE_REF(((long) 1))))
												{	/* Expand/lambda.scm 139 */
													BgL_bodyz00_178 = BgL_cdrzd2449zd2_183;
													{	/* Expand/lambda.scm 146 */
														obj_t BgL_arg1250z00_204;

														{	/* Expand/lambda.scm 146 */
															obj_t BgL_arg1252z00_205;

															BgL_arg1252z00_205 =
																CDR(((obj_t) BgL_oldformsz00_168));
															BgL_arg1250z00_204 =
																BGl_appendzd221011zd2zzexpand_lambdaz00
																(BgL_bodyz00_178, BgL_arg1252z00_205);
														}
														{
															obj_t BgL_oldformsz00_678;

															BgL_oldformsz00_678 = BgL_arg1250z00_204;
															BgL_oldformsz00_168 = BgL_oldformsz00_678;
															goto BgL_zc3z04anonymousza31202ze3z87_172;
														}
													}
												}
											else
												{	/* Expand/lambda.scm 139 */
													goto BgL_tagzd2441zd2_180;
												}
										}
								}
							else
								{	/* Expand/lambda.scm 139 */
									goto BgL_tagzd2441zd2_180;
								}
						}
					}
				else
					{	/* Expand/lambda.scm 137 */
						if (NULLP(BgL_varsz00_170))
							{	/* Expand/lambda.scm 156 */
								return BGl_expandzd2prognzd2zz__prognz00(BgL_bodyz00_9);
							}
						else
							{	/* Expand/lambda.scm 157 */
								obj_t BgL_arg1256z00_209;

								{	/* Expand/lambda.scm 157 */
									obj_t BgL_arg1258z00_210;
									obj_t BgL_arg1263z00_211;

									BgL_arg1258z00_210 = bgl_reverse_bang(BgL_declsz00_171);
									BgL_arg1263z00_211 =
										MAKE_YOUNG_PAIR(BGl_expandzd2prognzd2zz__prognz00
										(bgl_reverse(BgL_newformsz00_169)), BNIL);
									BgL_arg1256z00_209 =
										MAKE_YOUNG_PAIR(BgL_arg1258z00_210, BgL_arg1263z00_211);
								}
								return
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
									BgL_arg1256z00_209);
		}}}}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzexpand_lambdaz00()
	{
		{	/* Expand/lambda.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_lambdaz00()
	{
		{	/* Expand/lambda.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_lambdaz00()
	{
		{	/* Expand/lambda.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_lambdaz00()
	{
		{	/* Expand/lambda.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1300z00zzexpand_lambdaz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string1300z00zzexpand_lambdaz00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 302006061),
				BSTRING_TO_STRING(BGl_string1300z00zzexpand_lambdaz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1300z00zzexpand_lambdaz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1300z00zzexpand_lambdaz00));
			BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 359337061),
				BSTRING_TO_STRING(BGl_string1300z00zzexpand_lambdaz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1300z00zzexpand_lambdaz00));
		}

	}

#ifdef __cplusplus
}
#endif
