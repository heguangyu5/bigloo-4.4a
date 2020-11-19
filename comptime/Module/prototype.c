/*===========================================================================*/
/*   (Module/prototype.scm)                                                  */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/prototype.scm) */
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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	static obj_t BGl_parsezd2classzd2zzmodule_prototypez00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzmodule_prototypez00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzmodule_prototypez00();
	extern obj_t BGl_za2allzd2exportzd2mutablezf3za2zf3zzmodule_evalz00;
	static obj_t BGl_parsezd2expanderzd2zzmodule_prototypez00(obj_t);
	static obj_t BGl_parsezd2functionzd2prototypez00zzmodule_prototypez00(obj_t,
		obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzmodule_prototypez00();
	static obj_t BGl_parsezd2classzd2slotz00zzmodule_prototypez00(obj_t, obj_t);
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_parsezd2prototypezd2zzmodule_prototypez00(obj_t);
	static obj_t BGl_parsezd2classzd2slotsze70ze7zzmodule_prototypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_prototypez00 = BUNSPEC;
	extern obj_t BGl_epairifyz00zztools_miscz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzmodule_prototypez00();
	extern BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00();
	static obj_t BGl_parsezd2syntaxzd2zzmodule_prototypez00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_parsezd2variablezd2prototypez00zzmodule_prototypez00(obj_t);
	static obj_t BGl_parsezd2macrozd2zzmodule_prototypez00(obj_t);
	extern bool_t BGl_dssslzd2checkzd2prototypezf3zf3zztools_dssslz00(obj_t);
	static bool_t BGl_correctzd2attributzf3z21zzmodule_prototypez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_prototypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern BgL_typez00_bglt BGl_typezd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_prototypez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_prototypez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_prototypez00();
	static obj_t BGl_z62parsezd2prototypezb0zzmodule_prototypez00(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t __cnst[22];


	   
		 
		DEFINE_STRING(BGl_string1558z00zzmodule_prototypez00,
		BgL_bgl_string1558za700za7za7m1575za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string1559z00zzmodule_prototypez00,
		BgL_bgl_string1559za700za7za7m1576za7, "Illegal class field definition",
		30);
	      DEFINE_STRING(BGl_string1560z00zzmodule_prototypez00,
		BgL_bgl_string1560za700za7za7m1577za7, "Illegal macro definition", 24);
	      DEFINE_STRING(BGl_string1561z00zzmodule_prototypez00,
		BgL_bgl_string1561za700za7za7m1578za7, "Illegal syntax definition", 25);
	      DEFINE_STRING(BGl_string1562z00zzmodule_prototypez00,
		BgL_bgl_string1562za700za7za7m1579za7, "Illegal expander definition", 27);
	      DEFINE_STRING(BGl_string1563z00zzmodule_prototypez00,
		BgL_bgl_string1563za700za7za7m1580za7, "module_prototype", 16);
	      DEFINE_STRING(BGl_string1564z00zzmodule_prototypez00,
		BgL_bgl_string1564za700za7za7m1581za7,
		"info default set get (read-only) * id define-macro svar expander syntax macro inline generic abstract-class wide-class final-class class sfun (main module-initialization) sifun sgfun ",
		183);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_parsezd2prototypezd2envz00zzmodule_prototypez00,
		BgL_bgl_za762parseza7d2proto1582z00,
		BGl_z62parsezd2prototypezb0zzmodule_prototypez00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzmodule_prototypez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzmodule_prototypez00(long
		BgL_checksumz00_594, char *BgL_fromz00_595)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_prototypez00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_prototypez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzmodule_prototypez00();
					BGl_libraryzd2moduleszd2initz00zzmodule_prototypez00();
					BGl_cnstzd2initzd2zzmodule_prototypez00();
					BGl_importedzd2moduleszd2initz00zzmodule_prototypez00();
					return BGl_methodzd2initzd2zzmodule_prototypez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_prototypez00()
	{
		{	/* Module/prototype.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_prototype");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_prototype");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_prototype");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_prototype");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_prototype");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"module_prototype");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_prototypez00()
	{
		{	/* Module/prototype.scm 15 */
			{	/* Module/prototype.scm 15 */
				obj_t BgL_cportz00_581;

				{	/* Module/prototype.scm 15 */
					obj_t BgL_stringz00_589;

					BgL_stringz00_589 = BGl_string1564z00zzmodule_prototypez00;
					{	/* Module/prototype.scm 15 */
						obj_t BgL_startz00_590;

						BgL_startz00_590 = BINT(((long) 0));
						{	/* Module/prototype.scm 15 */
							obj_t BgL_endz00_591;

							BgL_endz00_591 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_589)));
							{	/* Module/prototype.scm 15 */

								BgL_cportz00_581 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_589, BgL_startz00_590, BgL_endz00_591);
				}}}}
				{
					long BgL_iz00_582;

					BgL_iz00_582 = ((long) 21);
				BgL_loopz00_583:
					if ((BgL_iz00_582 == ((long) -1)))
						{	/* Module/prototype.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/prototype.scm 15 */
							{	/* Module/prototype.scm 15 */
								obj_t BgL_arg1573z00_585;

								{	/* Module/prototype.scm 15 */

									{	/* Module/prototype.scm 15 */
										obj_t BgL_locationz00_587;

										BgL_locationz00_587 = BBOOL(((bool_t) 0));
										{	/* Module/prototype.scm 15 */

											BgL_arg1573z00_585 =
												BGl_readz00zz__readerz00(BgL_cportz00_581,
												BgL_locationz00_587);
										}
									}
								}
								{	/* Module/prototype.scm 15 */
									int BgL_tmpz00_619;

									BgL_tmpz00_619 = (int) (BgL_iz00_582);
									CNST_TABLE_SET(BgL_tmpz00_619, BgL_arg1573z00_585);
							}}
							{	/* Module/prototype.scm 15 */
								int BgL_auxz00_588;

								BgL_auxz00_588 = (int) ((BgL_iz00_582 - ((long) 1)));
								{
									long BgL_iz00_624;

									BgL_iz00_624 = (long) (BgL_auxz00_588);
									BgL_iz00_582 = BgL_iz00_624;
									goto BgL_loopz00_583;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzmodule_prototypez00()
	{
		{	/* Module/prototype.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* parse-prototype */
	BGL_EXPORTED_DEF obj_t BGl_parsezd2prototypezd2zzmodule_prototypez00(obj_t
		BgL_protoz00_3)
	{
		{	/* Module/prototype.scm 30 */
			{
				obj_t BgL_idz00_89;

				if (PAIRP(BgL_protoz00_3))
					{	/* Module/prototype.scm 31 */
						obj_t BgL_carzd2113zd2_94;

						BgL_carzd2113zd2_94 = CAR(BgL_protoz00_3);
						if ((BgL_carzd2113zd2_94 == CNST_TABLE_REF(((long) 4))))
							{	/* Module/prototype.scm 33 */
								obj_t BgL_arg1109z00_412;

								BgL_arg1109z00_412 = CDR(((obj_t) BgL_protoz00_3));
								return
									BGl_parsezd2classzd2zzmodule_prototypez00(BgL_carzd2113zd2_94,
									BgL_arg1109z00_412);
							}
						else
							{	/* Module/prototype.scm 31 */
								if ((BgL_carzd2113zd2_94 == CNST_TABLE_REF(((long) 5))))
									{	/* Module/prototype.scm 33 */
										obj_t BgL_arg1109z00_416;

										BgL_arg1109z00_416 = CDR(((obj_t) BgL_protoz00_3));
										return
											BGl_parsezd2classzd2zzmodule_prototypez00
											(BgL_carzd2113zd2_94, BgL_arg1109z00_416);
									}
								else
									{	/* Module/prototype.scm 31 */
										if ((BgL_carzd2113zd2_94 == CNST_TABLE_REF(((long) 6))))
											{	/* Module/prototype.scm 33 */
												obj_t BgL_arg1109z00_420;

												BgL_arg1109z00_420 = CDR(((obj_t) BgL_protoz00_3));
												return
													BGl_parsezd2classzd2zzmodule_prototypez00
													(BgL_carzd2113zd2_94, BgL_arg1109z00_420);
											}
										else
											{	/* Module/prototype.scm 31 */
												if ((BgL_carzd2113zd2_94 == CNST_TABLE_REF(((long) 7))))
													{	/* Module/prototype.scm 33 */
														obj_t BgL_arg1109z00_424;

														BgL_arg1109z00_424 = CDR(((obj_t) BgL_protoz00_3));
														return
															BGl_parsezd2classzd2zzmodule_prototypez00
															(BgL_carzd2113zd2_94, BgL_arg1109z00_424);
													}
												else
													{	/* Module/prototype.scm 31 */
														if (
															(BgL_carzd2113zd2_94 ==
																CNST_TABLE_REF(((long) 8))))
															{	/* Module/prototype.scm 31 */
																{	/* Module/prototype.scm 35 */
																	obj_t BgL_arg1110z00_118;

																	BgL_arg1110z00_118 =
																		CDR(((obj_t) BgL_protoz00_3));
																	return
																		BGl_parsezd2functionzd2prototypez00zzmodule_prototypez00
																		(BgL_arg1110z00_118,
																		CNST_TABLE_REF(((long) 0)));
															}}
														else
															{	/* Module/prototype.scm 31 */
																if (
																	(CAR(BgL_protoz00_3) ==
																		CNST_TABLE_REF(((long) 9))))
																	{	/* Module/prototype.scm 31 */
																		{	/* Module/prototype.scm 37 */
																			obj_t BgL_arg1113z00_119;

																			BgL_arg1113z00_119 =
																				CDR(((obj_t) BgL_protoz00_3));
																			return
																				BGl_parsezd2functionzd2prototypez00zzmodule_prototypez00
																				(BgL_arg1113z00_119,
																				CNST_TABLE_REF(((long) 1)));
																	}}
																else
																	{	/* Module/prototype.scm 31 */
																		if (
																			(CAR(BgL_protoz00_3) ==
																				CNST_TABLE_REF(((long) 10))))
																			{	/* Module/prototype.scm 31 */
																				{	/* Module/prototype.scm 39 */
																					obj_t BgL_arg1114z00_120;

																					BgL_arg1114z00_120 =
																						CDR(((obj_t) BgL_protoz00_3));
																					return
																						BGl_parsezd2macrozd2zzmodule_prototypez00
																						(BgL_arg1114z00_120);
																				}
																			}
																		else
																			{	/* Module/prototype.scm 31 */
																				if (
																					(CAR(BgL_protoz00_3) ==
																						CNST_TABLE_REF(((long) 11))))
																					{	/* Module/prototype.scm 31 */
																						{	/* Module/prototype.scm 41 */
																							obj_t BgL_arg1115z00_121;

																							BgL_arg1115z00_121 =
																								CDR(((obj_t) BgL_protoz00_3));
																							return
																								BGl_parsezd2syntaxzd2zzmodule_prototypez00
																								(BgL_arg1115z00_121);
																						}
																					}
																				else
																					{	/* Module/prototype.scm 31 */
																						if (
																							(CAR(BgL_protoz00_3) ==
																								CNST_TABLE_REF(((long) 12))))
																							{	/* Module/prototype.scm 31 */
																								{	/* Module/prototype.scm 43 */
																									obj_t BgL_arg1116z00_122;

																									BgL_arg1116z00_122 =
																										CDR(
																										((obj_t) BgL_protoz00_3));
																									return
																										BGl_parsezd2expanderzd2zzmodule_prototypez00
																										(BgL_arg1116z00_122);
																								}
																							}
																						else
																							{	/* Module/prototype.scm 31 */
																								BgL_idz00_89 =
																									CAR(BgL_protoz00_3);
																								{	/* Module/prototype.scm 45 */
																									bool_t BgL_test1598z00_690;

																									if (CBOOL
																										(BGl_za2allzd2exportzd2mutablezf3za2zf3zzmodule_evalz00))
																										{	/* Module/prototype.scm 45 */
																											if (CBOOL
																												(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																													(BgL_idz00_89,
																														CNST_TABLE_REF((
																																(long) 2)))))
																												{	/* Module/prototype.scm 46 */
																													BgL_test1598z00_690 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Module/prototype.scm 47 */
																													bool_t
																														BgL_test1601z00_697;
																													{	/* Module/prototype.scm 47 */
																														BgL_typez00_bglt
																															BgL_arg1128z00_134;
																														BgL_typez00_bglt
																															BgL_arg1129z00_135;
																														BgL_arg1128z00_134 =
																															BGl_getzd2defaultzd2typez00zztype_cachez00
																															();
																														BgL_arg1129z00_135 =
																															BGl_typezd2ofzd2idz00zzast_identz00
																															(BgL_idz00_89,
																															BGl_findzd2locationzd2zztools_locationz00
																															(BgL_protoz00_3));
																														BgL_test1601z00_697
																															=
																															(((obj_t)
																																BgL_arg1128z00_134)
																															==
																															((obj_t)
																																BgL_arg1129z00_135));
																													}
																													if (BgL_test1601z00_697)
																														{	/* Module/prototype.scm 47 */
																															BgL_test1598z00_690
																																= ((bool_t) 0);
																														}
																													else
																														{	/* Module/prototype.scm 47 */
																															BgL_test1598z00_690
																																= ((bool_t) 1);
																														}
																												}
																										}
																									else
																										{	/* Module/prototype.scm 45 */
																											BgL_test1598z00_690 =
																												((bool_t) 1);
																										}
																									if (BgL_test1598z00_690)
																										{	/* Module/prototype.scm 45 */
																											return
																												BGl_parsezd2functionzd2prototypez00zzmodule_prototypez00
																												(BgL_protoz00_3,
																												CNST_TABLE_REF(((long)
																														3)));
																										}
																									else
																										{	/* Module/prototype.scm 45 */
																											return
																												BGl_parsezd2variablezd2prototypez00zzmodule_prototypez00
																												(BgL_idz00_89);
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
				else
					{	/* Module/prototype.scm 31 */
						return
							BGl_parsezd2variablezd2prototypez00zzmodule_prototypez00
							(BgL_protoz00_3);
					}
			}
		}

	}



/* &parse-prototype */
	obj_t BGl_z62parsezd2prototypezb0zzmodule_prototypez00(obj_t BgL_envz00_577,
		obj_t BgL_protoz00_578)
	{
		{	/* Module/prototype.scm 30 */
			return BGl_parsezd2prototypezd2zzmodule_prototypez00(BgL_protoz00_578);
		}

	}



/* parse-function-prototype */
	obj_t BGl_parsezd2functionzd2prototypez00zzmodule_prototypez00(obj_t
		BgL_protoz00_4, obj_t BgL_classz00_5)
	{
		{	/* Module/prototype.scm 57 */
			{
				obj_t BgL_idz00_137;
				obj_t BgL_thezd2argszd2_138;

				if (PAIRP(BgL_protoz00_4))
					{	/* Module/prototype.scm 58 */
						obj_t BgL_carzd2156zd2_143;

						BgL_carzd2156zd2_143 = CAR(BgL_protoz00_4);
						if (SYMBOLP(BgL_carzd2156zd2_143))
							{	/* Module/prototype.scm 58 */
								BgL_idz00_137 = BgL_carzd2156zd2_143;
								BgL_thezd2argszd2_138 = CDR(BgL_protoz00_4);
								if (BGl_dssslzd2checkzd2prototypezf3zf3zztools_dssslz00
									(BgL_thezd2argszd2_138))
									{	/* Module/prototype.scm 61 */
										obj_t BgL_list1142z00_147;

										{	/* Module/prototype.scm 61 */
											obj_t BgL_arg1145z00_148;

											{	/* Module/prototype.scm 61 */
												obj_t BgL_arg1146z00_149;

												BgL_arg1146z00_149 =
													MAKE_YOUNG_PAIR(BgL_thezd2argszd2_138, BNIL);
												BgL_arg1145z00_148 =
													MAKE_YOUNG_PAIR(BgL_idz00_137, BgL_arg1146z00_149);
											}
											BgL_list1142z00_147 =
												MAKE_YOUNG_PAIR(BgL_classz00_5, BgL_arg1145z00_148);
										}
										return BgL_list1142z00_147;
									}
								else
									{
										obj_t BgL_argsz00_151;

										BgL_argsz00_151 = BgL_thezd2argszd2_138;
									BgL_zc3z04anonymousza31147ze3z87_152:
										if (NULLP(BgL_argsz00_151))
											{	/* Module/prototype.scm 65 */
												obj_t BgL_list1149z00_154;

												{	/* Module/prototype.scm 65 */
													obj_t BgL_arg1155z00_155;

													{	/* Module/prototype.scm 65 */
														obj_t BgL_arg1156z00_156;

														BgL_arg1156z00_156 =
															MAKE_YOUNG_PAIR(BgL_thezd2argszd2_138, BNIL);
														BgL_arg1155z00_155 =
															MAKE_YOUNG_PAIR(BgL_idz00_137,
															BgL_arg1156z00_156);
													}
													BgL_list1149z00_154 =
														MAKE_YOUNG_PAIR(BgL_classz00_5, BgL_arg1155z00_155);
												}
												return BgL_list1149z00_154;
											}
										else
											{	/* Module/prototype.scm 64 */
												if (SYMBOLP(BgL_argsz00_151))
													{	/* Module/prototype.scm 67 */
														obj_t BgL_list1158z00_158;

														{	/* Module/prototype.scm 67 */
															obj_t BgL_arg1165z00_159;

															{	/* Module/prototype.scm 67 */
																obj_t BgL_arg1166z00_160;

																BgL_arg1166z00_160 =
																	MAKE_YOUNG_PAIR(BgL_thezd2argszd2_138, BNIL);
																BgL_arg1165z00_159 =
																	MAKE_YOUNG_PAIR(BgL_idz00_137,
																	BgL_arg1166z00_160);
															}
															BgL_list1158z00_158 =
																MAKE_YOUNG_PAIR(BgL_classz00_5,
																BgL_arg1165z00_159);
														}
														return BgL_list1158z00_158;
													}
												else
													{	/* Module/prototype.scm 66 */
														if (PAIRP(BgL_argsz00_151))
															{	/* Module/prototype.scm 70 */
																bool_t BgL_test1608z00_732;

																{	/* Module/prototype.scm 70 */
																	obj_t BgL_tmpz00_733;

																	BgL_tmpz00_733 = CAR(BgL_argsz00_151);
																	BgL_test1608z00_732 = SYMBOLP(BgL_tmpz00_733);
																}
																if (BgL_test1608z00_732)
																	{
																		obj_t BgL_argsz00_736;

																		BgL_argsz00_736 = CDR(BgL_argsz00_151);
																		BgL_argsz00_151 = BgL_argsz00_736;
																		goto BgL_zc3z04anonymousza31147ze3z87_152;
																	}
																else
																	{	/* Module/prototype.scm 70 */
																		return BFALSE;
																	}
															}
														else
															{	/* Module/prototype.scm 68 */
																return BFALSE;
															}
													}
											}
									}
							}
						else
							{	/* Module/prototype.scm 58 */
								return BFALSE;
							}
					}
				else
					{	/* Module/prototype.scm 58 */
						return BFALSE;
					}
			}
		}

	}



/* parse-variable-prototype */
	obj_t BGl_parsezd2variablezd2prototypez00zzmodule_prototypez00(obj_t
		BgL_protoz00_6)
	{
		{	/* Module/prototype.scm 80 */
			if (SYMBOLP(BgL_protoz00_6))
				{	/* Module/prototype.scm 82 */
					obj_t BgL_list1176z00_168;

					{	/* Module/prototype.scm 82 */
						obj_t BgL_arg1177z00_169;

						BgL_arg1177z00_169 = MAKE_YOUNG_PAIR(BgL_protoz00_6, BNIL);
						BgL_list1176z00_168 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)), BgL_arg1177z00_169);
					}
					return BgL_list1176z00_168;
				}
			else
				{	/* Module/prototype.scm 81 */
					return BFALSE;
				}
		}

	}



/* parse-class */
	obj_t BGl_parsezd2classzd2zzmodule_prototypez00(obj_t BgL_classz00_7,
		obj_t BgL_classzd2defzd2_8)
	{
		{	/* Module/prototype.scm 88 */
			{	/* Module/prototype.scm 89 */
				obj_t BgL_locz00_170;

				BgL_locz00_170 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_classzd2defzd2_8);
				if (PAIRP(BgL_classzd2defzd2_8))
					{	/* Module/prototype.scm 108 */
						obj_t BgL_carzd2171zd2_182;
						obj_t BgL_cdrzd2172zd2_183;

						BgL_carzd2171zd2_182 = CAR(BgL_classzd2defzd2_8);
						BgL_cdrzd2172zd2_183 = CDR(BgL_classzd2defzd2_8);
						if (SYMBOLP(BgL_carzd2171zd2_182))
							{	/* Module/prototype.scm 108 */
								if (PAIRP(BgL_cdrzd2172zd2_183))
									{	/* Module/prototype.scm 108 */
										obj_t BgL_carzd2177zd2_186;

										BgL_carzd2177zd2_186 = CAR(BgL_cdrzd2172zd2_183);
										if (PAIRP(BgL_carzd2177zd2_186))
											{	/* Module/prototype.scm 108 */
												if (NULLP(CDR(BgL_carzd2177zd2_186)))
													{	/* Module/prototype.scm 108 */
														obj_t BgL_arg1190z00_190;
														obj_t BgL_arg1194z00_191;

														BgL_arg1190z00_190 = CAR(BgL_carzd2177zd2_186);
														BgL_arg1194z00_191 = CDR(BgL_cdrzd2172zd2_183);
														{	/* Module/prototype.scm 110 */
															obj_t BgL_arg1221z00_471;

															{	/* Module/prototype.scm 110 */
																obj_t BgL_arg1223z00_472;

																BgL_arg1223z00_472 =
																	MAKE_YOUNG_PAIR(BgL_arg1190z00_190,
																	BGl_parsezd2classzd2slotsze70ze7zzmodule_prototypez00
																	(BgL_classzd2defzd2_8, BgL_locz00_170,
																		BgL_arg1194z00_191));
																BgL_arg1221z00_471 =
																	MAKE_YOUNG_PAIR(BgL_carzd2171zd2_182,
																	BgL_arg1223z00_472);
															}
															return
																MAKE_YOUNG_PAIR(BgL_classz00_7,
																BgL_arg1221z00_471);
														}
													}
												else
													{	/* Module/prototype.scm 112 */
														obj_t BgL_arg1227z00_477;

														{	/* Module/prototype.scm 112 */
															obj_t BgL_arg1229z00_478;

															BgL_arg1229z00_478 =
																MAKE_YOUNG_PAIR(BFALSE,
																BGl_parsezd2classzd2slotsze70ze7zzmodule_prototypez00
																(BgL_classzd2defzd2_8, BgL_locz00_170,
																	BgL_cdrzd2172zd2_183));
															BgL_arg1227z00_477 =
																MAKE_YOUNG_PAIR(BgL_carzd2171zd2_182,
																BgL_arg1229z00_478);
														}
														return
															MAKE_YOUNG_PAIR(BgL_classz00_7,
															BgL_arg1227z00_477);
													}
											}
										else
											{	/* Module/prototype.scm 112 */
												obj_t BgL_arg1227z00_483;

												{	/* Module/prototype.scm 112 */
													obj_t BgL_arg1229z00_484;

													BgL_arg1229z00_484 =
														MAKE_YOUNG_PAIR(BFALSE,
														BGl_parsezd2classzd2slotsze70ze7zzmodule_prototypez00
														(BgL_classzd2defzd2_8, BgL_locz00_170,
															BgL_cdrzd2172zd2_183));
													BgL_arg1227z00_483 =
														MAKE_YOUNG_PAIR(BgL_carzd2171zd2_182,
														BgL_arg1229z00_484);
												}
												return
													MAKE_YOUNG_PAIR(BgL_classz00_7, BgL_arg1227z00_483);
											}
									}
								else
									{	/* Module/prototype.scm 112 */
										obj_t BgL_arg1227z00_489;

										{	/* Module/prototype.scm 112 */
											obj_t BgL_arg1229z00_490;

											BgL_arg1229z00_490 =
												MAKE_YOUNG_PAIR(BFALSE,
												BGl_parsezd2classzd2slotsze70ze7zzmodule_prototypez00
												(BgL_classzd2defzd2_8, BgL_locz00_170,
													BgL_cdrzd2172zd2_183));
											BgL_arg1227z00_489 =
												MAKE_YOUNG_PAIR(BgL_carzd2171zd2_182,
												BgL_arg1229z00_490);
										}
										return MAKE_YOUNG_PAIR(BgL_classz00_7, BgL_arg1227z00_489);
									}
							}
						else
							{	/* Module/prototype.scm 108 */
								return BFALSE;
							}
					}
				else
					{	/* Module/prototype.scm 108 */
						return BFALSE;
					}
			}
		}

	}



/* parse-class-slots~0 */
	obj_t BGl_parsezd2classzd2slotsze70ze7zzmodule_prototypez00(obj_t
		BgL_classzd2defzd2_580, obj_t BgL_locz00_579, obj_t BgL_slotsz00_211)
	{
		{	/* Module/prototype.scm 107 */
			{
				obj_t BgL_slotsz00_215;
				obj_t BgL_resz00_216;

				BgL_slotsz00_215 = BgL_slotsz00_211;
				BgL_resz00_216 = BNIL;
			BgL_zc3z04anonymousza31234ze3z87_217:
				if (NULLP(BgL_slotsz00_215))
					{	/* Module/prototype.scm 94 */
						return bgl_reverse_bang(BgL_resz00_216);
					}
				else
					{	/* Module/prototype.scm 94 */
						if (PAIRP(BgL_slotsz00_215))
							{	/* Module/prototype.scm 99 */
								obj_t BgL_slotz00_220;

								BgL_slotz00_220 =
									BGl_parsezd2classzd2slotz00zzmodule_prototypez00(CAR
									(BgL_slotsz00_215), BgL_locz00_579);
								if (CBOOL(BgL_slotz00_220))
									{	/* Module/prototype.scm 106 */
										obj_t BgL_arg1243z00_221;
										obj_t BgL_arg1245z00_222;

										BgL_arg1243z00_221 = CDR(BgL_slotsz00_215);
										BgL_arg1245z00_222 =
											MAKE_YOUNG_PAIR(BgL_slotz00_220, BgL_resz00_216);
										{
											obj_t BgL_resz00_789;
											obj_t BgL_slotsz00_788;

											BgL_slotsz00_788 = BgL_arg1243z00_221;
											BgL_resz00_789 = BgL_arg1245z00_222;
											BgL_resz00_216 = BgL_resz00_789;
											BgL_slotsz00_215 = BgL_slotsz00_788;
											goto BgL_zc3z04anonymousza31234ze3z87_217;
										}
									}
								else
									{	/* Module/prototype.scm 103 */
										obj_t BgL_arg1246z00_223;

										{	/* Module/prototype.scm 103 */
											bool_t BgL_test1621z00_790;

											{	/* Module/prototype.scm 103 */
												obj_t BgL_tmpz00_791;

												BgL_tmpz00_791 = CAR(BgL_slotsz00_215);
												BgL_test1621z00_790 = PAIRP(BgL_tmpz00_791);
											}
											if (BgL_test1621z00_790)
												{	/* Module/prototype.scm 103 */
													BgL_arg1246z00_223 = CAR(BgL_slotsz00_215);
												}
											else
												{	/* Module/prototype.scm 103 */
													BgL_arg1246z00_223 = BgL_classzd2defzd2_580;
												}
										}
										return
											BGl_userzd2errorzd2zztools_errorz00
											(BGl_string1558z00zzmodule_prototypez00,
											BGl_string1559z00zzmodule_prototypez00,
											BgL_arg1246z00_223, BNIL);
									}
							}
						else
							{	/* Module/prototype.scm 96 */
								return BFALSE;
							}
					}
			}
		}

	}



/* parse-macro */
	obj_t BGl_parsezd2macrozd2zzmodule_prototypez00(obj_t BgL_macrozd2defzd2_9)
	{
		{	/* Module/prototype.scm 119 */
			{
				obj_t BgL_idz00_234;
				obj_t BgL_thezd2argszd2_235;
				obj_t BgL_bodyz00_236;
				obj_t BgL_idz00_231;
				obj_t BgL_restz00_232;

				if (PAIRP(BgL_macrozd2defzd2_9))
					{	/* Module/prototype.scm 120 */
						obj_t BgL_carzd2246zd2_241;

						BgL_carzd2246zd2_241 = CAR(BgL_macrozd2defzd2_9);
						if (SYMBOLP(BgL_carzd2246zd2_241))
							{	/* Module/prototype.scm 120 */
								BgL_idz00_231 = BgL_carzd2246zd2_241;
								BgL_restz00_232 = CDR(BgL_macrozd2defzd2_9);
								{
									obj_t BgL_argsz00_251;

									BgL_argsz00_251 = BgL_restz00_232;
								BgL_zc3z04anonymousza31269ze3z87_252:
									if (NULLP(BgL_argsz00_251))
										{	/* Module/prototype.scm 124 */
											return
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)),
												BgL_macrozd2defzd2_9);
										}
									else
										{	/* Module/prototype.scm 124 */
											if (SYMBOLP(BgL_argsz00_251))
												{	/* Module/prototype.scm 126 */
													return
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)),
														BgL_macrozd2defzd2_9);
												}
											else
												{	/* Module/prototype.scm 126 */
													if (PAIRP(BgL_argsz00_251))
														{	/* Module/prototype.scm 130 */
															bool_t BgL_test1629z00_811;

															{	/* Module/prototype.scm 130 */
																obj_t BgL_tmpz00_812;

																BgL_tmpz00_812 = CAR(BgL_argsz00_251);
																BgL_test1629z00_811 = SYMBOLP(BgL_tmpz00_812);
															}
															if (BgL_test1629z00_811)
																{
																	obj_t BgL_argsz00_815;

																	BgL_argsz00_815 = CDR(BgL_argsz00_251);
																	BgL_argsz00_251 = BgL_argsz00_815;
																	goto BgL_zc3z04anonymousza31269ze3z87_252;
																}
															else
																{	/* Module/prototype.scm 130 */
																	return
																		BGl_userzd2errorzd2zztools_errorz00
																		(BGl_string1558z00zzmodule_prototypez00,
																		BGl_string1560z00zzmodule_prototypez00,
																		BgL_macrozd2defzd2_9, BNIL);
																}
														}
													else
														{	/* Module/prototype.scm 128 */
															return
																BGl_userzd2errorzd2zztools_errorz00
																(BGl_string1558z00zzmodule_prototypez00,
																BGl_string1560z00zzmodule_prototypez00,
																BgL_macrozd2defzd2_9, BNIL);
														}
												}
										}
								}
							}
						else
							{	/* Module/prototype.scm 120 */
								if (PAIRP(BgL_carzd2246zd2_241))
									{	/* Module/prototype.scm 120 */
										obj_t BgL_carzd2261zd2_246;

										BgL_carzd2261zd2_246 = CAR(BgL_carzd2246zd2_241);
										if (SYMBOLP(BgL_carzd2261zd2_246))
											{	/* Module/prototype.scm 120 */
												BgL_idz00_234 = BgL_carzd2261zd2_246;
												BgL_thezd2argszd2_235 = CDR(BgL_carzd2246zd2_241);
												BgL_bodyz00_236 = CDR(BgL_macrozd2defzd2_9);
												{
													obj_t BgL_argsz00_264;

													BgL_argsz00_264 = BgL_thezd2argszd2_235;
												BgL_zc3z04anonymousza31279ze3z87_265:
													if (NULLP(BgL_bodyz00_236))
														{	/* Module/prototype.scm 137 */
															return
																BGl_userzd2errorzd2zztools_errorz00
																(BGl_string1558z00zzmodule_prototypez00,
																BGl_string1560z00zzmodule_prototypez00,
																BgL_macrozd2defzd2_9, BNIL);
														}
													else
														{	/* Module/prototype.scm 137 */
															if (NULLP(BgL_argsz00_264))
																{	/* Module/prototype.scm 139 */
																	return
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)),
																		BgL_macrozd2defzd2_9);
																}
															else
																{	/* Module/prototype.scm 139 */
																	if (SYMBOLP(BgL_argsz00_264))
																		{	/* Module/prototype.scm 141 */
																			return
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						14)), BgL_macrozd2defzd2_9);
																		}
																	else
																		{	/* Module/prototype.scm 141 */
																			if (PAIRP(BgL_argsz00_264))
																				{	/* Module/prototype.scm 145 */
																					bool_t BgL_test1636z00_838;

																					{	/* Module/prototype.scm 145 */
																						obj_t BgL_tmpz00_839;

																						BgL_tmpz00_839 =
																							CAR(BgL_argsz00_264);
																						BgL_test1636z00_838 =
																							SYMBOLP(BgL_tmpz00_839);
																					}
																					if (BgL_test1636z00_838)
																						{
																							obj_t BgL_argsz00_842;

																							BgL_argsz00_842 =
																								CDR(BgL_argsz00_264);
																							BgL_argsz00_264 = BgL_argsz00_842;
																							goto
																								BgL_zc3z04anonymousza31279ze3z87_265;
																						}
																					else
																						{	/* Module/prototype.scm 145 */
																							return
																								BGl_userzd2errorzd2zztools_errorz00
																								(BGl_string1558z00zzmodule_prototypez00,
																								BGl_string1560z00zzmodule_prototypez00,
																								BgL_macrozd2defzd2_9, BNIL);
																						}
																				}
																			else
																				{	/* Module/prototype.scm 143 */
																					return
																						BGl_userzd2errorzd2zztools_errorz00
																						(BGl_string1558z00zzmodule_prototypez00,
																						BGl_string1560z00zzmodule_prototypez00,
																						BgL_macrozd2defzd2_9, BNIL);
																				}
																		}
																}
														}
												}
											}
										else
											{	/* Module/prototype.scm 120 */
											BgL_tagzd2238zd2_238:
												return
													BGl_userzd2errorzd2zztools_errorz00
													(BGl_string1558z00zzmodule_prototypez00,
													BGl_string1560z00zzmodule_prototypez00,
													BgL_macrozd2defzd2_9, BNIL);
											}
									}
								else
									{	/* Module/prototype.scm 120 */
										goto BgL_tagzd2238zd2_238;
									}
							}
					}
				else
					{	/* Module/prototype.scm 120 */
						goto BgL_tagzd2238zd2_238;
					}
			}
		}

	}



/* parse-syntax */
	obj_t BGl_parsezd2syntaxzd2zzmodule_prototypez00(obj_t BgL_syntaxzd2defzd2_10)
	{
		{	/* Module/prototype.scm 155 */
			{

				if (PAIRP(BgL_syntaxzd2defzd2_10))
					{	/* Module/prototype.scm 156 */
						obj_t BgL_carzd2278zd2_284;

						BgL_carzd2278zd2_284 = CAR(BgL_syntaxzd2defzd2_10);
						if (SYMBOLP(BgL_carzd2278zd2_284))
							{	/* Module/prototype.scm 156 */
								if (NULLP(CDR(BgL_syntaxzd2defzd2_10)))
									{	/* Module/prototype.scm 156 */
										return
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
											BgL_syntaxzd2defzd2_10);
									}
								else
									{	/* Module/prototype.scm 156 */
									BgL_tagzd2274zd2_281:
										return
											BGl_userzd2errorzd2zztools_errorz00
											(BGl_string1558z00zzmodule_prototypez00,
											BGl_string1561z00zzmodule_prototypez00,
											BgL_syntaxzd2defzd2_10, BNIL);
									}
							}
						else
							{	/* Module/prototype.scm 156 */
								goto BgL_tagzd2274zd2_281;
							}
					}
				else
					{	/* Module/prototype.scm 156 */
						goto BgL_tagzd2274zd2_281;
					}
			}
		}

	}



/* parse-expander */
	obj_t BGl_parsezd2expanderzd2zzmodule_prototypez00(obj_t
		BgL_expanderzd2defzd2_11)
	{
		{	/* Module/prototype.scm 165 */
			{

				if (PAIRP(BgL_expanderzd2defzd2_11))
					{	/* Module/prototype.scm 166 */
						obj_t BgL_carzd2287zd2_295;

						BgL_carzd2287zd2_295 = CAR(BgL_expanderzd2defzd2_11);
						if (SYMBOLP(BgL_carzd2287zd2_295))
							{	/* Module/prototype.scm 166 */
								if (NULLP(CDR(BgL_expanderzd2defzd2_11)))
									{	/* Module/prototype.scm 166 */
										return
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
											BgL_expanderzd2defzd2_11);
									}
								else
									{	/* Module/prototype.scm 166 */
									BgL_tagzd2283zd2_292:
										return
											BGl_userzd2errorzd2zztools_errorz00
											(BGl_string1558z00zzmodule_prototypez00,
											BGl_string1562z00zzmodule_prototypez00,
											BgL_expanderzd2defzd2_11, BNIL);
									}
							}
						else
							{	/* Module/prototype.scm 166 */
								goto BgL_tagzd2283zd2_292;
							}
					}
				else
					{	/* Module/prototype.scm 166 */
						goto BgL_tagzd2283zd2_292;
					}
			}
		}

	}



/* parse-class-slot */
	obj_t BGl_parsezd2classzd2slotz00zzmodule_prototypez00(obj_t BgL_slotz00_12,
		obj_t BgL_locz00_13)
	{
		{	/* Module/prototype.scm 175 */
			{	/* Module/prototype.scm 176 */
				obj_t BgL_locz00_301;

				BgL_locz00_301 =
					BGl_findzd2locationzf2locz20zztools_locationz00(BgL_slotz00_12,
					BgL_locz00_13);
				{
					obj_t BgL_idz00_306;
					obj_t BgL_attz00_307;
					obj_t BgL_idz00_303;
					obj_t BgL_attz00_304;

					if (SYMBOLP(BgL_slotz00_12))
						{	/* Module/prototype.scm 177 */
							{	/* Module/prototype.scm 179 */
								obj_t BgL_arg1324z00_330;

								{	/* Module/prototype.scm 179 */
									obj_t BgL_arg1325z00_331;

									BgL_arg1325z00_331 =
										MAKE_YOUNG_PAIR(BGl_parsezd2idzd2zzast_identz00
										(BgL_slotz00_12, BgL_locz00_301), BNIL);
									BgL_arg1324z00_330 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)),
										BgL_arg1325z00_331);
								}
								return
									BGl_epairifyz00zztools_miscz00(BgL_arg1324z00_330,
									BgL_slotz00_12);
							}
						}
					else
						{	/* Module/prototype.scm 177 */
							if (PAIRP(BgL_slotz00_12))
								{	/* Module/prototype.scm 177 */
									obj_t BgL_cdrzd2303zd2_313;

									BgL_cdrzd2303zd2_313 = CDR(BgL_slotz00_12);
									if ((CAR(BgL_slotz00_12) == CNST_TABLE_REF(((long) 16))))
										{	/* Module/prototype.scm 177 */
											if (PAIRP(BgL_cdrzd2303zd2_313))
												{	/* Module/prototype.scm 177 */
													obj_t BgL_carzd2306zd2_317;

													BgL_carzd2306zd2_317 = CAR(BgL_cdrzd2303zd2_313);
													if (SYMBOLP(BgL_carzd2306zd2_317))
														{	/* Module/prototype.scm 177 */
															BgL_idz00_303 = BgL_carzd2306zd2_317;
															BgL_attz00_304 = CDR(BgL_cdrzd2303zd2_313);
															if (BGl_correctzd2attributzf3z21zzmodule_prototypez00(BgL_attz00_304))
																{	/* Module/prototype.scm 182 */
																	obj_t BgL_arg1328z00_334;

																	{	/* Module/prototype.scm 182 */
																		obj_t BgL_arg1329z00_335;

																		{	/* Module/prototype.scm 182 */
																			obj_t BgL_arg1330z00_336;
																			obj_t BgL_arg1331z00_337;

																			{	/* Module/prototype.scm 182 */
																				obj_t BgL_arg1334z00_338;

																				BgL_arg1334z00_338 =
																					MAKE_YOUNG_PAIR
																					(BGl_parsezd2idzd2zzast_identz00
																					(BgL_idz00_303, BgL_locz00_301),
																					BNIL);
																				BgL_arg1330z00_336 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							15)), BgL_arg1334z00_338);
																			}
																			BgL_arg1331z00_337 =
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_attz00_304, BNIL);
																			BgL_arg1329z00_335 =
																				MAKE_YOUNG_PAIR(BgL_arg1330z00_336,
																				BgL_arg1331z00_337);
																		}
																		BgL_arg1328z00_334 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					16)), BgL_arg1329z00_335);
																	}
																	return
																		BGl_epairifyz00zztools_miscz00
																		(BgL_arg1328z00_334, BgL_slotz00_12);
																}
															else
																{	/* Module/prototype.scm 181 */
																	return BFALSE;
																}
														}
													else
														{	/* Module/prototype.scm 177 */
															obj_t BgL_carzd2315zd2_320;

															BgL_carzd2315zd2_320 = CAR(BgL_slotz00_12);
															if (SYMBOLP(BgL_carzd2315zd2_320))
																{	/* Module/prototype.scm 177 */
																	BgL_idz00_306 = BgL_carzd2315zd2_320;
																	BgL_attz00_307 = BgL_cdrzd2303zd2_313;
																BgL_tagzd2293zd2_308:
																	if (BGl_correctzd2attributzf3z21zzmodule_prototypez00(BgL_attz00_307))
																		{	/* Module/prototype.scm 186 */
																			obj_t BgL_arg1337z00_341;

																			{	/* Module/prototype.scm 186 */
																				obj_t BgL_arg1338z00_342;
																				obj_t BgL_arg1339z00_343;

																				{	/* Module/prototype.scm 186 */
																					obj_t BgL_arg1340z00_344;

																					BgL_arg1340z00_344 =
																						MAKE_YOUNG_PAIR
																						(BGl_parsezd2idzd2zzast_identz00
																						(BgL_idz00_306, BgL_locz00_301),
																						BNIL);
																					BgL_arg1338z00_342 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 15)),
																						BgL_arg1340z00_344);
																				}
																				BgL_arg1339z00_343 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_attz00_307, BNIL);
																				BgL_arg1337z00_341 =
																					MAKE_YOUNG_PAIR(BgL_arg1338z00_342,
																					BgL_arg1339z00_343);
																			}
																			return
																				BGl_epairifyz00zztools_miscz00
																				(BgL_arg1337z00_341, BgL_slotz00_12);
																		}
																	else
																		{	/* Module/prototype.scm 185 */
																			return BFALSE;
																		}
																}
															else
																{	/* Module/prototype.scm 177 */
																	return BFALSE;
																}
														}
												}
											else
												{	/* Module/prototype.scm 177 */
													obj_t BgL_carzd2324zd2_323;

													BgL_carzd2324zd2_323 = CAR(BgL_slotz00_12);
													if (SYMBOLP(BgL_carzd2324zd2_323))
														{
															obj_t BgL_attz00_919;
															obj_t BgL_idz00_918;

															BgL_idz00_918 = BgL_carzd2324zd2_323;
															BgL_attz00_919 = BgL_cdrzd2303zd2_313;
															BgL_attz00_307 = BgL_attz00_919;
															BgL_idz00_306 = BgL_idz00_918;
															goto BgL_tagzd2293zd2_308;
														}
													else
														{	/* Module/prototype.scm 177 */
															return BFALSE;
														}
												}
										}
									else
										{	/* Module/prototype.scm 177 */
											obj_t BgL_carzd2333zd2_326;

											BgL_carzd2333zd2_326 = CAR(BgL_slotz00_12);
											if (SYMBOLP(BgL_carzd2333zd2_326))
												{
													obj_t BgL_attz00_924;
													obj_t BgL_idz00_923;

													BgL_idz00_923 = BgL_carzd2333zd2_326;
													BgL_attz00_924 = BgL_cdrzd2303zd2_313;
													BgL_attz00_307 = BgL_attz00_924;
													BgL_idz00_306 = BgL_idz00_923;
													goto BgL_tagzd2293zd2_308;
												}
											else
												{	/* Module/prototype.scm 177 */
													return BFALSE;
												}
										}
								}
							else
								{	/* Module/prototype.scm 177 */
									return BFALSE;
								}
						}
				}
			}
		}

	}



/* correct-attribut? */
	bool_t BGl_correctzd2attributzf3z21zzmodule_prototypez00(obj_t
		BgL_attributz00_14)
	{
		{	/* Module/prototype.scm 194 */
			{
				obj_t BgL_attributz00_347;

				BgL_attributz00_347 = BgL_attributz00_14;
			BgL_zc3z04anonymousza31345ze3z87_348:
				if (NULLP(BgL_attributz00_347))
					{	/* Module/prototype.scm 197 */
						return ((bool_t) 1);
					}
				else
					{	/* Module/prototype.scm 197 */
						if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR(
										((obj_t) BgL_attributz00_347)),
									CNST_TABLE_REF(((long) 17)))))
							{
								obj_t BgL_attributz00_933;

								BgL_attributz00_933 = CDR(((obj_t) BgL_attributz00_347));
								BgL_attributz00_347 = BgL_attributz00_933;
								goto BgL_zc3z04anonymousza31345ze3z87_348;
							}
						else
							{

								{	/* Module/prototype.scm 202 */
									obj_t BgL_ezd2347zd2_358;

									BgL_ezd2347zd2_358 = CAR(((obj_t) BgL_attributz00_347));
									if (PAIRP(BgL_ezd2347zd2_358))
										{	/* Module/prototype.scm 202 */
											obj_t BgL_cdrzd2349zd2_360;

											BgL_cdrzd2349zd2_360 = CDR(BgL_ezd2347zd2_358);
											if (
												(CAR(BgL_ezd2347zd2_358) ==
													CNST_TABLE_REF(((long) 18))))
												{	/* Module/prototype.scm 202 */
													if (PAIRP(BgL_cdrzd2349zd2_360))
														{	/* Module/prototype.scm 202 */
															if (NULLP(CDR(BgL_cdrzd2349zd2_360)))
																{	/* Module/prototype.scm 202 */
																	{
																		obj_t BgL_attributz00_950;

																		BgL_attributz00_950 =
																			CDR(((obj_t) BgL_attributz00_347));
																		BgL_attributz00_347 = BgL_attributz00_950;
																		goto BgL_zc3z04anonymousza31345ze3z87_348;
																	}
																}
															else
																{	/* Module/prototype.scm 202 */
																	return ((bool_t) 0);
																}
														}
													else
														{	/* Module/prototype.scm 202 */
															return ((bool_t) 0);
														}
												}
											else
												{	/* Module/prototype.scm 202 */
													if (
														(CAR(BgL_ezd2347zd2_358) ==
															CNST_TABLE_REF(((long) 19))))
														{	/* Module/prototype.scm 202 */
															if (PAIRP(BgL_cdrzd2349zd2_360))
																{	/* Module/prototype.scm 202 */
																	if (NULLP(CDR(BgL_cdrzd2349zd2_360)))
																		{	/* Module/prototype.scm 202 */
																			{
																				obj_t BgL_attributz00_962;

																				BgL_attributz00_962 =
																					CDR(((obj_t) BgL_attributz00_347));
																				BgL_attributz00_347 =
																					BgL_attributz00_962;
																				goto
																					BgL_zc3z04anonymousza31345ze3z87_348;
																			}
																		}
																	else
																		{	/* Module/prototype.scm 202 */
																			return ((bool_t) 0);
																		}
																}
															else
																{	/* Module/prototype.scm 202 */
																	return ((bool_t) 0);
																}
														}
													else
														{	/* Module/prototype.scm 202 */
															obj_t BgL_cdrzd2357zd2_374;

															BgL_cdrzd2357zd2_374 = CDR(BgL_ezd2347zd2_358);
															if (
																(CAR(BgL_ezd2347zd2_358) ==
																	CNST_TABLE_REF(((long) 20))))
																{	/* Module/prototype.scm 202 */
																	if (PAIRP(BgL_cdrzd2357zd2_374))
																		{	/* Module/prototype.scm 202 */
																			if (NULLP(CDR(BgL_cdrzd2357zd2_374)))
																				{	/* Module/prototype.scm 202 */
																					{
																						obj_t BgL_attributz00_975;

																						BgL_attributz00_975 =
																							CDR(
																							((obj_t) BgL_attributz00_347));
																						BgL_attributz00_347 =
																							BgL_attributz00_975;
																						goto
																							BgL_zc3z04anonymousza31345ze3z87_348;
																					}
																				}
																			else
																				{	/* Module/prototype.scm 202 */
																					return ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Module/prototype.scm 202 */
																			return ((bool_t) 0);
																		}
																}
															else
																{	/* Module/prototype.scm 202 */
																	if (
																		(CAR(BgL_ezd2347zd2_358) ==
																			CNST_TABLE_REF(((long) 21))))
																		{	/* Module/prototype.scm 202 */
																			if (PAIRP(BgL_cdrzd2357zd2_374))
																				{	/* Module/prototype.scm 202 */
																					if (NULLP(CDR(BgL_cdrzd2357zd2_374)))
																						{	/* Module/prototype.scm 202 */
																							{
																								obj_t BgL_attributz00_987;

																								BgL_attributz00_987 =
																									CDR(
																									((obj_t)
																										BgL_attributz00_347));
																								BgL_attributz00_347 =
																									BgL_attributz00_987;
																								goto
																									BgL_zc3z04anonymousza31345ze3z87_348;
																							}
																						}
																					else
																						{	/* Module/prototype.scm 202 */
																							return ((bool_t) 0);
																						}
																				}
																			else
																				{	/* Module/prototype.scm 202 */
																					return ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Module/prototype.scm 202 */
																			return ((bool_t) 0);
																		}
																}
														}
												}
										}
									else
										{	/* Module/prototype.scm 202 */
											return ((bool_t) 0);
										}
								}
							}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_prototypez00()
	{
		{	/* Module/prototype.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_prototypez00()
	{
		{	/* Module/prototype.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_prototypez00()
	{
		{	/* Module/prototype.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_prototypez00()
	{
		{	/* Module/prototype.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1563z00zzmodule_prototypez00));
			BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 275867862),
				BSTRING_TO_STRING(BGl_string1563z00zzmodule_prototypez00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1563z00zzmodule_prototypez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1563z00zzmodule_prototypez00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1563z00zzmodule_prototypez00));
			BGl_modulezd2initializa7ationz75zzmodule_evalz00(((long) 428236983),
				BSTRING_TO_STRING(BGl_string1563z00zzmodule_prototypez00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1563z00zzmodule_prototypez00));
			return
				BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1563z00zzmodule_prototypez00));
		}

	}

#ifdef __cplusplus
}
#endif
