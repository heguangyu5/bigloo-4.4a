/*===========================================================================*/
/*   (Eval/everror.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/everror.scm -indent -o objs/obj_u/Eval/everror.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_z62exceptionz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
	}                      *BgL_z62exceptionz62_bglt;

	typedef struct BgL_z62warningz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_argsz00;
	}                    *BgL_z62warningz62_bglt;

	typedef struct BgL_z62evalzd2warningzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_argsz00;
	}                           *BgL_z62evalzd2warningzb0_bglt;


	static obj_t BGl_requirezd2initializa7ationz75zz__everrorz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__everrorz00();
	BGL_EXPORTED_DECL obj_t BGl_evtypezd2errorzd2zz__everrorz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__everrorz00();
	extern obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62evarityzd2errorzb0zz__everrorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__everrorz00();
	BGL_EXPORTED_DECL obj_t BGl_everrorz00zz__everrorz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_z62evalzd2warningzb0zz__objectz00;
	static obj_t BGl_z62evwarningz62zz__everrorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__everrorz00(long,
		char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	static obj_t BGl_z62evtypezd2errorzb0zz__everrorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__everrorz00();
	BGL_EXPORTED_DECL obj_t BGl_evarityzd2errorzd2zz__everrorz00(obj_t, obj_t,
		int, int);
	extern obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evwarningz00zz__everrorz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__everrorz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__everrorz00();
	extern obj_t BGl_warningzd2notifyzd2zz__errorz00(obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol1636z00zz__everrorz00 = BUNSPEC;
	static obj_t BGl_z62everrorz62zz__everrorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_evarityzd2errorzd2envz00zz__everrorz00,
		BgL_bgl_za762evarityza7d2err1644z00,
		BGl_z62evarityzd2errorzb0zz__everrorz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string1637z00zz__everrorz00,
		BgL_bgl_string1637za700za7za7_1645za7, "at", 2);
	      DEFINE_STRING(BGl_string1638z00zz__everrorz00,
		BgL_bgl_string1638za700za7za7_1646za7,
		"Wrong number of arguments: ~a expected, ~a provided ", 52);
	      DEFINE_STRING(BGl_string1639z00zz__everrorz00,
		BgL_bgl_string1639za700za7za7_1647za7, "eval", 4);
	      DEFINE_STRING(BGl_string1640z00zz__everrorz00,
		BgL_bgl_string1640za700za7za7_1648za7, "/tmp/4.4a/runtime/Eval/everror.scm",
		34);
	      DEFINE_STRING(BGl_string1641z00zz__everrorz00,
		BgL_bgl_string1641za700za7za7_1649za7, "&evarity-error", 14);
	      DEFINE_STRING(BGl_string1642z00zz__everrorz00,
		BgL_bgl_string1642za700za7za7_1650za7, "bint", 4);
	      DEFINE_STRING(BGl_string1643z00zz__everrorz00,
		BgL_bgl_string1643za700za7za7_1651za7, "__everror", 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evtypezd2errorzd2envz00zz__everrorz00,
		BgL_bgl_za762evtypeza7d2erro1652z00, BGl_z62evtypezd2errorzb0zz__everrorz00,
		0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evwarningzd2envzd2zz__everrorz00,
		BgL_bgl_za762evwarningza762za71653za7, va_generic_entry,
		BGl_z62evwarningz62zz__everrorz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_everrorzd2envzd2zz__everrorz00,
		BgL_bgl_za762everrorza762za7za7_1654z00, BGl_z62everrorz62zz__everrorz00,
		0L, BUNSPEC, 4);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__everrorz00));
		     ADD_ROOT((void *) (&BGl_symbol1636z00zz__everrorz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__everrorz00(long
		BgL_checksumz00_1829, char *BgL_fromz00_1830)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__everrorz00))
				{
					BGl_requirezd2initializa7ationz75zz__everrorz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__everrorz00();
					BGl_cnstzd2initzd2zz__everrorz00();
					BGl_importedzd2moduleszd2initz00zz__everrorz00();
					return BGl_methodzd2initzd2zz__everrorz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__everrorz00()
	{
		{	/* Eval/everror.scm 15 */
			return (BGl_symbol1636z00zz__everrorz00 =
				bstring_to_symbol(BGl_string1637z00zz__everrorz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__everrorz00()
	{
		{	/* Eval/everror.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* everror */
	BGL_EXPORTED_DEF obj_t BGl_everrorz00zz__everrorz00(obj_t BgL_locz00_3,
		obj_t BgL_procz00_4, obj_t BgL_mesz00_5, obj_t BgL_objz00_6)
	{
		{	/* Eval/everror.scm 55 */
			if (PAIRP(BgL_locz00_3))
				{	/* Eval/everror.scm 56 */
					obj_t BgL_cdrzd2109zd2_1073;

					BgL_cdrzd2109zd2_1073 = CDR(BgL_locz00_3);
					if ((CAR(BgL_locz00_3) == BGl_symbol1636z00zz__everrorz00))
						{	/* Eval/everror.scm 56 */
							if (PAIRP(BgL_cdrzd2109zd2_1073))
								{	/* Eval/everror.scm 56 */
									obj_t BgL_cdrzd2113zd2_1077;

									BgL_cdrzd2113zd2_1077 = CDR(BgL_cdrzd2109zd2_1073);
									if (PAIRP(BgL_cdrzd2113zd2_1077))
										{	/* Eval/everror.scm 56 */
											if (NULLP(CDR(BgL_cdrzd2113zd2_1077)))
												{	/* Eval/everror.scm 56 */
													return
														BGl_errorzf2locationzf2zz__errorz00(BgL_procz00_4,
														BgL_mesz00_5, BgL_objz00_6,
														CAR(BgL_cdrzd2109zd2_1073),
														CAR(BgL_cdrzd2113zd2_1077));
												}
											else
												{	/* Eval/everror.scm 56 */
													return
														BGl_errorz00zz__errorz00(BgL_procz00_4,
														BgL_mesz00_5, BgL_objz00_6);
												}
										}
									else
										{	/* Eval/everror.scm 56 */
											return
												BGl_errorz00zz__errorz00(BgL_procz00_4, BgL_mesz00_5,
												BgL_objz00_6);
										}
								}
							else
								{	/* Eval/everror.scm 56 */
									return
										BGl_errorz00zz__errorz00(BgL_procz00_4, BgL_mesz00_5,
										BgL_objz00_6);
								}
						}
					else
						{	/* Eval/everror.scm 56 */
							return
								BGl_errorz00zz__errorz00(BgL_procz00_4, BgL_mesz00_5,
								BgL_objz00_6);
						}
				}
			else
				{	/* Eval/everror.scm 56 */
					return
						BGl_errorz00zz__errorz00(BgL_procz00_4, BgL_mesz00_5, BgL_objz00_6);
				}
		}

	}



/* &everror */
	obj_t BGl_z62everrorz62zz__everrorz00(obj_t BgL_envz00_1807,
		obj_t BgL_locz00_1808, obj_t BgL_procz00_1809, obj_t BgL_mesz00_1810,
		obj_t BgL_objz00_1811)
	{
		{	/* Eval/everror.scm 55 */
			return
				BGl_everrorz00zz__everrorz00(BgL_locz00_1808, BgL_procz00_1809,
				BgL_mesz00_1810, BgL_objz00_1811);
		}

	}



/* evtype-error */
	BGL_EXPORTED_DEF obj_t BGl_evtypezd2errorzd2zz__everrorz00(obj_t BgL_locz00_7,
		obj_t BgL_procz00_8, obj_t BgL_mesz00_9, obj_t BgL_objz00_10)
	{
		{	/* Eval/everror.scm 65 */
			if (PAIRP(BgL_locz00_7))
				{	/* Eval/everror.scm 66 */
					obj_t BgL_cdrzd2127zd2_1091;

					BgL_cdrzd2127zd2_1091 = CDR(BgL_locz00_7);
					if ((CAR(BgL_locz00_7) == BGl_symbol1636z00zz__everrorz00))
						{	/* Eval/everror.scm 66 */
							if (PAIRP(BgL_cdrzd2127zd2_1091))
								{	/* Eval/everror.scm 66 */
									obj_t BgL_cdrzd2131zd2_1095;

									BgL_cdrzd2131zd2_1095 = CDR(BgL_cdrzd2127zd2_1091);
									if (PAIRP(BgL_cdrzd2131zd2_1095))
										{	/* Eval/everror.scm 66 */
											if (NULLP(CDR(BgL_cdrzd2131zd2_1095)))
												{	/* Eval/everror.scm 66 */
													return
														BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00
														(BgL_procz00_8, BgL_mesz00_9, BgL_objz00_10,
														CAR(BgL_cdrzd2127zd2_1091),
														CAR(BgL_cdrzd2131zd2_1095));
												}
											else
												{	/* Eval/everror.scm 66 */
													return
														BGl_bigloozd2typezd2errorz00zz__errorz00
														(BgL_procz00_8, BgL_mesz00_9, BgL_objz00_10);
												}
										}
									else
										{	/* Eval/everror.scm 66 */
											return
												BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_procz00_8,
												BgL_mesz00_9, BgL_objz00_10);
										}
								}
							else
								{	/* Eval/everror.scm 66 */
									return
										BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_procz00_8,
										BgL_mesz00_9, BgL_objz00_10);
								}
						}
					else
						{	/* Eval/everror.scm 66 */
							return
								BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_procz00_8,
								BgL_mesz00_9, BgL_objz00_10);
						}
				}
			else
				{	/* Eval/everror.scm 66 */
					return
						BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_procz00_8,
						BgL_mesz00_9, BgL_objz00_10);
				}
		}

	}



/* &evtype-error */
	obj_t BGl_z62evtypezd2errorzb0zz__everrorz00(obj_t BgL_envz00_1812,
		obj_t BgL_locz00_1813, obj_t BgL_procz00_1814, obj_t BgL_mesz00_1815,
		obj_t BgL_objz00_1816)
	{
		{	/* Eval/everror.scm 65 */
			return
				BGl_evtypezd2errorzd2zz__everrorz00(BgL_locz00_1813, BgL_procz00_1814,
				BgL_mesz00_1815, BgL_objz00_1816);
		}

	}



/* evarity-error */
	BGL_EXPORTED_DEF obj_t BGl_evarityzd2errorzd2zz__everrorz00(obj_t
		BgL_locz00_11, obj_t BgL_namez00_12, int BgL_providez00_13,
		int BgL_expectz00_14)
	{
		{	/* Eval/everror.scm 75 */
			{	/* Eval/everror.scm 76 */
				obj_t BgL_msgz00_1548;

				{	/* Eval/everror.scm 76 */
					obj_t BgL_list1209z00_1549;

					{	/* Eval/everror.scm 76 */
						obj_t BgL_arg1211z00_1550;

						BgL_arg1211z00_1550 =
							MAKE_YOUNG_PAIR(BINT(BgL_providez00_13), BNIL);
						BgL_list1209z00_1549 =
							MAKE_YOUNG_PAIR(BINT(BgL_expectz00_14), BgL_arg1211z00_1550);
					}
					BgL_msgz00_1548 =
						BGl_formatz00zz__r4_output_6_10_3z00
						(BGl_string1638z00zz__everrorz00, BgL_list1209z00_1549);
				}
				return
					BGl_everrorz00zz__everrorz00(BgL_locz00_11,
					BGl_string1639z00zz__everrorz00, BgL_msgz00_1548, BgL_namez00_12);
			}
		}

	}



/* &evarity-error */
	obj_t BGl_z62evarityzd2errorzb0zz__everrorz00(obj_t BgL_envz00_1817,
		obj_t BgL_locz00_1818, obj_t BgL_namez00_1819, obj_t BgL_providez00_1820,
		obj_t BgL_expectz00_1821)
	{
		{	/* Eval/everror.scm 75 */
			{	/* Eval/everror.scm 76 */
				int BgL_auxz00_1901;
				int BgL_auxz00_1892;

				{	/* Eval/everror.scm 76 */
					obj_t BgL_tmpz00_1902;

					if (INTEGERP(BgL_expectz00_1821))
						{	/* Eval/everror.scm 76 */
							BgL_tmpz00_1902 = BgL_expectz00_1821;
						}
					else
						{
							obj_t BgL_auxz00_1905;

							BgL_auxz00_1905 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1640z00zz__everrorz00,
								BINT(((long) 2808)), BGl_string1641z00zz__everrorz00,
								BGl_string1642z00zz__everrorz00, BgL_expectz00_1821);
							FAILURE(BgL_auxz00_1905, BFALSE, BFALSE);
						}
					BgL_auxz00_1901 = CINT(BgL_tmpz00_1902);
				}
				{	/* Eval/everror.scm 76 */
					obj_t BgL_tmpz00_1893;

					if (INTEGERP(BgL_providez00_1820))
						{	/* Eval/everror.scm 76 */
							BgL_tmpz00_1893 = BgL_providez00_1820;
						}
					else
						{
							obj_t BgL_auxz00_1896;

							BgL_auxz00_1896 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1640z00zz__everrorz00,
								BINT(((long) 2808)), BGl_string1641z00zz__everrorz00,
								BGl_string1642z00zz__everrorz00, BgL_providez00_1820);
							FAILURE(BgL_auxz00_1896, BFALSE, BFALSE);
						}
					BgL_auxz00_1892 = CINT(BgL_tmpz00_1893);
				}
				return
					BGl_evarityzd2errorzd2zz__everrorz00(BgL_locz00_1818,
					BgL_namez00_1819, BgL_auxz00_1892, BgL_auxz00_1901);
			}
		}

	}



/* evwarning */
	BGL_EXPORTED_DEF obj_t BGl_evwarningz00zz__everrorz00(obj_t BgL_locz00_15,
		obj_t BgL_argsz00_16)
	{
		{	/* Eval/everror.scm 83 */
			{
				obj_t BgL_fnamez00_1106;
				obj_t BgL_locz00_1107;

				if (PAIRP(BgL_locz00_15))
					{	/* Eval/everror.scm 84 */
						obj_t BgL_cdrzd2145zd2_1112;

						BgL_cdrzd2145zd2_1112 = CDR(BgL_locz00_15);
						if ((CAR(BgL_locz00_15) == BGl_symbol1636z00zz__everrorz00))
							{	/* Eval/everror.scm 84 */
								if (PAIRP(BgL_cdrzd2145zd2_1112))
									{	/* Eval/everror.scm 84 */
										obj_t BgL_cdrzd2149zd2_1116;

										BgL_cdrzd2149zd2_1116 = CDR(BgL_cdrzd2145zd2_1112);
										if (PAIRP(BgL_cdrzd2149zd2_1116))
											{	/* Eval/everror.scm 84 */
												if (NULLP(CDR(BgL_cdrzd2149zd2_1116)))
													{	/* Eval/everror.scm 84 */
														BgL_fnamez00_1106 = CAR(BgL_cdrzd2145zd2_1112);
														BgL_locz00_1107 = CAR(BgL_cdrzd2149zd2_1116);
														{	/* Eval/everror.scm 87 */
															BgL_z62evalzd2warningzb0_bglt BgL_arg1232z00_1124;

															{	/* Eval/everror.scm 87 */
																BgL_z62evalzd2warningzb0_bglt
																	BgL_new1040z00_1125;
																{	/* Eval/everror.scm 88 */
																	BgL_z62evalzd2warningzb0_bglt
																		BgL_new1039z00_1127;
																	BgL_new1039z00_1127 =
																		((BgL_z62evalzd2warningzb0_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_z62evalzd2warningzb0_bgl))));
																	{	/* Eval/everror.scm 88 */
																		long BgL_arg1239z00_1128;

																		{	/* Eval/everror.scm 88 */
																			long BgL_res1576z00_1552;

																			BgL_res1576z00_1552 =
																				BGL_CLASS_INDEX
																				(BGl_z62evalzd2warningzb0zz__objectz00);
																			BgL_arg1239z00_1128 = BgL_res1576z00_1552;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1039z00_1127),
																			BgL_arg1239z00_1128);
																	}
																	BgL_new1040z00_1125 = BgL_new1039z00_1127;
																}
																((((BgL_z62exceptionz62_bglt) COBJECT(
																				((BgL_z62exceptionz62_bglt)
																					BgL_new1040z00_1125)))->
																		BgL_fnamez00) =
																	((obj_t) BgL_fnamez00_1106), BUNSPEC);
																((((BgL_z62exceptionz62_bglt)
																			COBJECT(((BgL_z62exceptionz62_bglt)
																					BgL_new1040z00_1125)))->
																		BgL_locationz00) =
																	((obj_t) BgL_locz00_1107), BUNSPEC);
																{
																	obj_t BgL_auxz00_1933;

																	{	/* Eval/everror.scm 90 */

																		{	/* Eval/everror.scm 90 */

																			BgL_auxz00_1933 =
																				BGl_getzd2tracezd2stackz00zz__errorz00
																				(BFALSE);
																	}}
																	((((BgL_z62exceptionz62_bglt) COBJECT(
																					((BgL_z62exceptionz62_bglt)
																						BgL_new1040z00_1125)))->
																			BgL_stackz00) =
																		((obj_t) BgL_auxz00_1933), BUNSPEC);
																}
																((((BgL_z62warningz62_bglt) COBJECT(
																				((BgL_z62warningz62_bglt)
																					BgL_new1040z00_1125)))->BgL_argsz00) =
																	((obj_t) BgL_argsz00_16), BUNSPEC);
																BgL_arg1232z00_1124 = BgL_new1040z00_1125;
															}
															return
																BGl_warningzd2notifyzd2zz__errorz00(
																((obj_t) BgL_arg1232z00_1124));
														}
													}
												else
													{	/* Eval/everror.scm 84 */
													BgL_tagzd2138zd2_1109:
														{	/* Eval/everror.scm 94 */
															BgL_z62evalzd2warningzb0_bglt BgL_arg1242z00_1129;

															{	/* Eval/everror.scm 94 */
																BgL_z62evalzd2warningzb0_bglt
																	BgL_new1042z00_1130;
																{	/* Eval/everror.scm 95 */
																	BgL_z62evalzd2warningzb0_bglt
																		BgL_new1041z00_1132;
																	BgL_new1041z00_1132 =
																		((BgL_z62evalzd2warningzb0_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_z62evalzd2warningzb0_bgl))));
																	{	/* Eval/everror.scm 95 */
																		long BgL_arg1243z00_1133;

																		{	/* Eval/everror.scm 95 */
																			long BgL_res1577z00_1556;

																			BgL_res1577z00_1556 =
																				BGL_CLASS_INDEX
																				(BGl_z62evalzd2warningzb0zz__objectz00);
																			BgL_arg1243z00_1133 = BgL_res1577z00_1556;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1041z00_1132),
																			BgL_arg1243z00_1133);
																	}
																	BgL_new1042z00_1130 = BgL_new1041z00_1132;
																}
																((((BgL_z62exceptionz62_bglt) COBJECT(
																				((BgL_z62exceptionz62_bglt)
																					BgL_new1042z00_1130)))->
																		BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
																((((BgL_z62exceptionz62_bglt)
																			COBJECT(((BgL_z62exceptionz62_bglt)
																					BgL_new1042z00_1130)))->
																		BgL_locationz00) =
																	((obj_t) BFALSE), BUNSPEC);
																{
																	obj_t BgL_auxz00_1951;

																	{	/* Eval/everror.scm 97 */

																		{	/* Eval/everror.scm 97 */

																			BgL_auxz00_1951 =
																				BGl_getzd2tracezd2stackz00zz__errorz00
																				(BFALSE);
																	}}
																	((((BgL_z62exceptionz62_bglt) COBJECT(
																					((BgL_z62exceptionz62_bglt)
																						BgL_new1042z00_1130)))->
																			BgL_stackz00) =
																		((obj_t) BgL_auxz00_1951), BUNSPEC);
																}
																((((BgL_z62warningz62_bglt) COBJECT(
																				((BgL_z62warningz62_bglt)
																					BgL_new1042z00_1130)))->BgL_argsz00) =
																	((obj_t) BgL_argsz00_16), BUNSPEC);
																BgL_arg1242z00_1129 = BgL_new1042z00_1130;
															}
															return
																BGl_warningzd2notifyzd2zz__errorz00(
																((obj_t) BgL_arg1242z00_1129));
														}
													}
											}
										else
											{	/* Eval/everror.scm 84 */
												goto BgL_tagzd2138zd2_1109;
											}
									}
								else
									{	/* Eval/everror.scm 84 */
										goto BgL_tagzd2138zd2_1109;
									}
							}
						else
							{	/* Eval/everror.scm 84 */
								goto BgL_tagzd2138zd2_1109;
							}
					}
				else
					{	/* Eval/everror.scm 84 */
						goto BgL_tagzd2138zd2_1109;
					}
			}
		}

	}



/* &evwarning */
	obj_t BGl_z62evwarningz62zz__everrorz00(obj_t BgL_envz00_1822,
		obj_t BgL_locz00_1823, obj_t BgL_argsz00_1824)
	{
		{	/* Eval/everror.scm 83 */
			return BGl_evwarningz00zz__everrorz00(BgL_locz00_1823, BgL_argsz00_1824);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__everrorz00()
	{
		{	/* Eval/everror.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__everrorz00()
	{
		{	/* Eval/everror.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__everrorz00()
	{
		{	/* Eval/everror.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__everrorz00()
	{
		{	/* Eval/everror.scm 15 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 121046386),
				BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 251315035),
				BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 439352636),
				BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581), BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945), BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874), BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048), BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694), BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845), BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
			return BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					86988972), BSTRING_TO_STRING(BGl_string1643z00zz__everrorz00));
		}

	}

#ifdef __cplusplus
}
#endif
