/*===========================================================================*/
/*   (Eval/expdtry.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/expdtry.scm -indent -o objs/obj_u/Eval/expdtry.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_expandzd2errorzd2zz__expandz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_tryz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__expander_tryz00();
	static obj_t BGl_objectzd2initzd2zz__expander_tryz00();
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_tryz00();
	extern obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_tryz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2tryzd2zz__expander_tryz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__expander_tryz00();
	static obj_t BGl_gczd2rootszd2initz00zz__expander_tryz00();
	static obj_t BGl_z62expandzd2tryzb0zz__expander_tryz00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_tryz00();
	static obj_t BGl_symbol1601z00zz__expander_tryz00 = BUNSPEC;
	static obj_t BGl_symbol1603z00zz__expander_tryz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2tryzd2envz00zz__expander_tryz00,
		BgL_bgl_za762expandza7d2tryza71608za7,
		BGl_z62expandzd2tryzb0zz__expander_tryz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1602z00zz__expander_tryz00,
		BgL_bgl_string1602za700za7za7_1609za7, "lambda", 6);
	      DEFINE_STRING(BGl_string1604z00zz__expander_tryz00,
		BgL_bgl_string1604za700za7za7_1610za7, "&try", 4);
	      DEFINE_STRING(BGl_string1605z00zz__expander_tryz00,
		BgL_bgl_string1605za700za7za7_1611za7, "try", 3);
	      DEFINE_STRING(BGl_string1606z00zz__expander_tryz00,
		BgL_bgl_string1606za700za7za7_1612za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string1607z00zz__expander_tryz00,
		BgL_bgl_string1607za700za7za7_1613za7, "__expander_try", 14);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__expander_tryz00));
		     ADD_ROOT((void *) (&BGl_symbol1601z00zz__expander_tryz00));
		     ADD_ROOT((void *) (&BGl_symbol1603z00zz__expander_tryz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_tryz00(long
		BgL_checksumz00_1732, char *BgL_fromz00_1733)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_tryz00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_tryz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__expander_tryz00();
					BGl_cnstzd2initzd2zz__expander_tryz00();
					BGl_importedzd2moduleszd2initz00zz__expander_tryz00();
					return BGl_methodzd2initzd2zz__expander_tryz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_tryz00()
	{
		{	/* Eval/expdtry.scm 14 */
			BGl_symbol1601z00zz__expander_tryz00 =
				bstring_to_symbol(BGl_string1602z00zz__expander_tryz00);
			return (BGl_symbol1603z00zz__expander_tryz00 =
				bstring_to_symbol(BGl_string1604z00zz__expander_tryz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__expander_tryz00()
	{
		{	/* Eval/expdtry.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* expand-try */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2tryzd2zz__expander_tryz00(obj_t
		BgL_xz00_3, obj_t BgL_ez00_4)
	{
		{	/* Eval/expdtry.scm 54 */
			{
				obj_t BgL_bodyz00_1062;
				obj_t BgL_handlerz00_1063;

				if (PAIRP(BgL_xz00_3))
					{	/* Eval/expdtry.scm 55 */
						obj_t BgL_cdrzd2109zd2_1068;

						BgL_cdrzd2109zd2_1068 = CDR(BgL_xz00_3);
						if (PAIRP(BgL_cdrzd2109zd2_1068))
							{	/* Eval/expdtry.scm 55 */
								obj_t BgL_carzd2112zd2_1070;
								obj_t BgL_cdrzd2113zd2_1071;

								BgL_carzd2112zd2_1070 = CAR(BgL_cdrzd2109zd2_1068);
								BgL_cdrzd2113zd2_1071 = CDR(BgL_cdrzd2109zd2_1068);
								if (NULLP(BgL_carzd2112zd2_1070))
									{	/* Eval/expdtry.scm 55 */
										return
											BGl_expandzd2errorzd2zz__expandz00
											(BGl_string1605z00zz__expander_tryz00,
											BGl_string1606z00zz__expander_tryz00, BgL_xz00_3);
									}
								else
									{	/* Eval/expdtry.scm 55 */
										if (PAIRP(BgL_cdrzd2113zd2_1071))
											{	/* Eval/expdtry.scm 55 */
												if (NULLP(CDR(BgL_cdrzd2113zd2_1071)))
													{	/* Eval/expdtry.scm 55 */
														BgL_bodyz00_1062 = BgL_carzd2112zd2_1070;
														BgL_handlerz00_1063 = CAR(BgL_cdrzd2113zd2_1071);
														{	/* Eval/expdtry.scm 57 */
															obj_t BgL_nz00_1078;

															{	/* Eval/expdtry.scm 57 */
																obj_t BgL_arg1176z00_1079;

																{	/* Eval/expdtry.scm 57 */
																	obj_t BgL_arg1177z00_1080;

																	{	/* Eval/expdtry.scm 57 */
																		obj_t BgL_arg1178z00_1081;
																		obj_t BgL_arg1179z00_1082;

																		{	/* Eval/expdtry.scm 57 */
																			obj_t BgL_arg1186z00_1083;

																			{	/* Eval/expdtry.scm 57 */
																				obj_t BgL_arg1190z00_1084;

																				BgL_arg1190z00_1084 =
																					MAKE_YOUNG_PAIR(BgL_bodyz00_1062,
																					BNIL);
																				BgL_arg1186z00_1083 =
																					MAKE_YOUNG_PAIR(BNIL,
																					BgL_arg1190z00_1084);
																			}
																			BgL_arg1178z00_1081 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol1601z00zz__expander_tryz00,
																				BgL_arg1186z00_1083);
																		}
																		BgL_arg1179z00_1082 =
																			MAKE_YOUNG_PAIR(BgL_handlerz00_1063,
																			BNIL);
																		BgL_arg1177z00_1080 =
																			MAKE_YOUNG_PAIR(BgL_arg1178z00_1081,
																			BgL_arg1179z00_1082);
																	}
																	BgL_arg1176z00_1079 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol1603z00zz__expander_tryz00,
																		BgL_arg1177z00_1080);
																}
																BgL_nz00_1078 =
																	PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4,
																	BgL_arg1176z00_1079, BgL_ez00_4, BEOA);
															}
															return
																BGl_evepairifyz00zz__prognz00(BgL_nz00_1078,
																BgL_xz00_3);
														}
													}
												else
													{	/* Eval/expdtry.scm 55 */
														return
															BGl_expandzd2errorzd2zz__expandz00
															(BGl_string1605z00zz__expander_tryz00,
															BGl_string1606z00zz__expander_tryz00, BgL_xz00_3);
													}
											}
										else
											{	/* Eval/expdtry.scm 55 */
												return
													BGl_expandzd2errorzd2zz__expandz00
													(BGl_string1605z00zz__expander_tryz00,
													BGl_string1606z00zz__expander_tryz00, BgL_xz00_3);
											}
									}
							}
						else
							{	/* Eval/expdtry.scm 55 */
								return
									BGl_expandzd2errorzd2zz__expandz00
									(BGl_string1605z00zz__expander_tryz00,
									BGl_string1606z00zz__expander_tryz00, BgL_xz00_3);
							}
					}
				else
					{	/* Eval/expdtry.scm 55 */
						return
							BGl_expandzd2errorzd2zz__expandz00
							(BGl_string1605z00zz__expander_tryz00,
							BGl_string1606z00zz__expander_tryz00, BgL_xz00_3);
					}
			}
		}

	}



/* &expand-try */
	obj_t BGl_z62expandzd2tryzb0zz__expander_tryz00(obj_t BgL_envz00_1729,
		obj_t BgL_xz00_1730, obj_t BgL_ez00_1731)
	{
		{	/* Eval/expdtry.scm 54 */
			return
				BGl_expandzd2tryzd2zz__expander_tryz00(BgL_xz00_1730, BgL_ez00_1731);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__expander_tryz00()
	{
		{	/* Eval/expdtry.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_tryz00()
	{
		{	/* Eval/expdtry.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_tryz00()
	{
		{	/* Eval/expdtry.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_tryz00()
	{
		{	/* Eval/expdtry.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581), BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945), BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874), BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048), BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694), BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845), BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
			return BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string1607z00zz__expander_tryz00));
		}

	}

#ifdef __cplusplus
}
#endif
