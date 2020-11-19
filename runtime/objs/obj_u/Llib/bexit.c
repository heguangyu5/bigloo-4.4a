/*===========================================================================*/
/*   (Llib/bexit.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/bexit.scm -indent -o objs/obj_u/Llib/bexit.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_requirezd2initializa7ationz75zz__bexitz00 = BUNSPEC;
	static obj_t BGl_z62valzd2fromzd2exitzf3z91zz__bexitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_failsafe_mutex_profile();
	BGL_EXPORTED_DECL obj_t unwind_stack_until(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_exitdzd2execzd2protectz00zz__bexitz00(obj_t);
	extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__bexitz00();
	BGL_EXPORTED_DECL obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62defaultzd2uncaughtzd2exceptionzd2handlerzb0zz__bexitz00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zz__bexitz00();
	static obj_t BGl_exitdzd2execzd2andzd2popzd2protectsz12z12zz__bexitz00(obj_t);
	static obj_t BGl_z62unwindzd2stackzd2valuezf3z91zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_z62unwindzd2untilz12za2zz__bexitz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__bexitz00();
	static obj_t BGl_z62exitdzd2popzd2protectz12z70zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t unwind_stack_value_p(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_uncaught_exception_handler(obj_t);
	static obj_t BGl_z62z42failsafezd2mutexzd2profilez20zz__bexitz00(obj_t);
	extern obj_t BGl_evaluate2zd2restorezd2statez12z12zz__evaluatez00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__bexitz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__bexitz00();
	extern obj_t BGl_evaluate2zd2restorezd2bpz12z12zz__evaluatez00(int);
	BGL_EXPORTED_DECL obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	static obj_t BGl_z62z42exitdzd2mutexzd2profilez20zz__bexitz00(obj_t);
	static obj_t BGl_z62unwindzd2stackzd2untilz12z70zz__bexitz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62exitdzd2pushzd2protectz12z70zz__bexitz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t bgl_exitd_mutex_profile();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1610z00zz__bexitz00,
		BgL_bgl_string1610za700za7za7_1613za7, "unwind-protect", 14);
	      DEFINE_STRING(BGl_string1611z00zz__bexitz00,
		BgL_bgl_string1611za700za7za7_1614za7, "exit out of dynamic scope", 25);
	      DEFINE_STRING(BGl_string1612z00zz__bexitz00,
		BgL_bgl_string1612za700za7za7_1615za7, "__bexit", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unwindzd2stackzd2untilz12zd2envzc0zz__bexitz00,
		BgL_bgl_za762unwindza7d2stac1616z00,
		BGl_z62unwindzd2stackzd2untilz12z70zz__bexitz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_exitdzd2pushzd2protectz12zd2envzc0zz__bexitz00,
		BgL_bgl_za762exitdza7d2pushza71617za7,
		BGl_z62exitdzd2pushzd2protectz12z70zz__bexitz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_unwindzd2untilz12zd2envz12zz__bexitz00,
		BgL_bgl_za762unwindza7d2unti1618z00,
		BGl_z62unwindzd2untilz12za2zz__bexitz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_valzd2fromzd2exitzf3zd2envz21zz__bexitz00,
		BgL_bgl_za762valza7d2fromza7d21619za7,
		BGl_z62valzd2fromzd2exitzf3z91zz__bexitz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unwindzd2stackzd2valuezf3zd2envz21zz__bexitz00,
		BgL_bgl_za762unwindza7d2stac1620z00,
		BGl_z62unwindzd2stackzd2valuezf3z91zz__bexitz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_defaultzd2uncaughtzd2exceptionzd2handlerzd2envz00zz__bexitz00,
		BgL_bgl_za762defaultza7d2unc1621z00,
		BGl_z62defaultzd2uncaughtzd2exceptionzd2handlerzb0zz__bexitz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z42failsafezd2mutexzd2profilezd2envz90zz__bexitz00,
		BgL_bgl_za762za742failsafeza7d1622za7,
		BGl_z62z42failsafezd2mutexzd2profilez20zz__bexitz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z42exitdzd2mutexzd2profilezd2envz90zz__bexitz00,
		BgL_bgl_za762za742exitdza7d2mu1623za7,
		BGl_z62z42exitdzd2mutexzd2profilez20zz__bexitz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_exitdzd2popzd2protectz12zd2envzc0zz__bexitz00,
		BgL_bgl_za762exitdza7d2popza7d1624za7,
		BGl_z62exitdzd2popzd2protectz12z70zz__bexitz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__bexitz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long
		BgL_checksumz00_1742, char *BgL_fromz00_1743)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__bexitz00))
				{
					BGl_requirezd2initializa7ationz75zz__bexitz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__bexitz00();
					BGl_importedzd2moduleszd2initz00zz__bexitz00();
					return BGl_methodzd2initzd2zz__bexitz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__bexitz00()
	{
		{	/* Llib/bexit.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* val-from-exit? */
	BGL_EXPORTED_DEF obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t
		BgL_valz00_3)
	{
		{	/* Llib/bexit.scm 133 */
			{	/* Llib/bexit.scm 134 */
				obj_t BgL_arg1165z00_1448;

				BgL_arg1165z00_1448 = BGL_EXITD_VAL();
				return BBOOL((BgL_valz00_3 == BgL_arg1165z00_1448));
			}
		}

	}



/* &val-from-exit? */
	obj_t BGl_z62valzd2fromzd2exitzf3z91zz__bexitz00(obj_t BgL_envz00_1721,
		obj_t BgL_valz00_1722)
	{
		{	/* Llib/bexit.scm 133 */
			return BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_valz00_1722);
		}

	}



/* unwind-stack-value? */
	BGL_EXPORTED_DEF bool_t unwind_stack_value_p(obj_t BgL_valz00_4)
	{
		{	/* Llib/bexit.scm 144 */
			{	/* Llib/bexit.scm 134 */
				obj_t BgL_arg1165z00_1449;

				BgL_arg1165z00_1449 = BGL_EXITD_VAL();
				return (BgL_valz00_4 == BgL_arg1165z00_1449);
			}
		}

	}



/* &unwind-stack-value? */
	obj_t BGl_z62unwindzd2stackzd2valuezf3z91zz__bexitz00(obj_t BgL_envz00_1723,
		obj_t BgL_valz00_1724)
	{
		{	/* Llib/bexit.scm 144 */
			return BBOOL(unwind_stack_value_p(BgL_valz00_1724));
		}

	}



/* unwind-until! */
	BGL_EXPORTED_DEF obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t
		BgL_exitdz00_5, obj_t BgL_valz00_6)
	{
		{	/* Llib/bexit.scm 154 */
			if (PAIRP(BgL_exitdz00_5))
				{	/* Llib/bexit.scm 155 */
					return
						unwind_stack_until(CAR(BgL_exitdz00_5), BFALSE, BgL_valz00_6,
						CDR(BgL_exitdz00_5));
				}
			else
				{	/* Llib/bexit.scm 155 */
					return
						unwind_stack_until(BgL_exitdz00_5, BFALSE, BgL_valz00_6, BFALSE);
				}
		}

	}



/* &unwind-until! */
	obj_t BGl_z62unwindzd2untilz12za2zz__bexitz00(obj_t BgL_envz00_1725,
		obj_t BgL_exitdz00_1726, obj_t BgL_valz00_1727)
	{
		{	/* Llib/bexit.scm 154 */
			return
				BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_exitdz00_1726,
				BgL_valz00_1727);
		}

	}



/* unwind-stack-until! */
	BGL_EXPORTED_DEF obj_t unwind_stack_until(obj_t BgL_exitdz00_7,
		obj_t BgL_estampz00_8, obj_t BgL_valz00_9, obj_t BgL_proczd2bottomzd2_10)
	{
		{	/* Llib/bexit.scm 167 */
			{

			BgL_zc3z04anonymousza31170ze3z87_1026:
				{	/* Llib/bexit.scm 169 */
					obj_t BgL_exitdzd2topzd2_1027;

					BgL_exitdzd2topzd2_1027 = BGL_EXITD_TOP_AS_OBJ();
					if (BGL_EXITD_BOTTOMP(BgL_exitdzd2topzd2_1027))
						{	/* Llib/bexit.scm 170 */
							BGl_exitdzd2execzd2andzd2popzd2protectsz12z12zz__bexitz00
								(BgL_exitdzd2topzd2_1027);
							if (PROCEDUREP(BgL_proczd2bottomzd2_10))
								{	/* Llib/bexit.scm 173 */
									return
										PROCEDURE_ENTRY(BgL_proczd2bottomzd2_10)
										(BgL_proczd2bottomzd2_10, BgL_valz00_9, BEOA);
								}
							else
								{	/* Llib/bexit.scm 175 */
									obj_t BgL_hdlz00_1030;

									BgL_hdlz00_1030 = BGL_UNCAUGHT_EXCEPTION_HANDLER_GET();
									if (PROCEDUREP(BgL_hdlz00_1030))
										{	/* Llib/bexit.scm 176 */
											return
												PROCEDURE_ENTRY(BgL_hdlz00_1030) (BgL_hdlz00_1030,
												BgL_valz00_9, BEOA);
										}
									else
										{	/* Llib/bexit.scm 176 */
											return
												BGl_errorz00zz__errorz00(BGl_string1610z00zz__bexitz00,
												BGl_string1611z00zz__bexitz00, BgL_valz00_9);
										}
								}
						}
					else
						{	/* Llib/bexit.scm 170 */
							BGl_exitdzd2execzd2andzd2popzd2protectsz12z12zz__bexitz00
								(BgL_exitdzd2topzd2_1027);
							POP_EXIT();
							{	/* Llib/bexit.scm 187 */
								bool_t BgL_test1630z00_1786;

								if ((BgL_exitdzd2topzd2_1027 == BgL_exitdz00_7))
									{	/* Llib/bexit.scm 188 */
										bool_t BgL__ortest_1039z00_1044;

										if (INTEGERP(BgL_estampz00_8))
											{	/* Llib/bexit.scm 188 */
												BgL__ortest_1039z00_1044 = ((bool_t) 0);
											}
										else
											{	/* Llib/bexit.scm 188 */
												BgL__ortest_1039z00_1044 = ((bool_t) 1);
											}
										if (BgL__ortest_1039z00_1044)
											{	/* Llib/bexit.scm 188 */
												BgL_test1630z00_1786 = BgL__ortest_1039z00_1044;
											}
										else
											{	/* Llib/bexit.scm 189 */
												obj_t BgL_arg1194z00_1045;

												BgL_arg1194z00_1045 =
													EXITD_STAMP(BgL_exitdzd2topzd2_1027);
												BgL_test1630z00_1786 =
													(
													(long) CINT(BgL_arg1194z00_1045) ==
													(long) CINT(BgL_estampz00_8));
									}}
								else
									{	/* Llib/bexit.scm 187 */
										BgL_test1630z00_1786 = ((bool_t) 0);
									}
								if (BgL_test1630z00_1786)
									{	/* Llib/bexit.scm 187 */
										if (EXITD_CALLCCP(BgL_exitdzd2topzd2_1027))
											{	/* Llib/bexit.scm 192 */
												void *BgL_arg1179z00_1038;

												BgL_arg1179z00_1038 =
													EXITD_TO_EXIT(BgL_exitdzd2topzd2_1027);
												CALLCC_JUMP_EXIT(BgL_arg1179z00_1038, BgL_valz00_9);
											}
										else
											{	/* Llib/bexit.scm 190 */
												JUMP_EXIT(EXITD_TO_EXIT(BgL_exitdzd2topzd2_1027),
													BgL_valz00_9);
											}
										return BUNSPEC;
									}
								else
									{	/* Llib/bexit.scm 187 */
										if (EXITD_USERP(BgL_exitdzd2topzd2_1027))
											{	/* Llib/bexit.scm 196 */
												goto BgL_zc3z04anonymousza31170ze3z87_1026;
											}
										else
											{	/* Llib/bexit.scm 196 */
												{	/* Llib/bexit.scm 197 */
													obj_t BgL_pz00_1040;

													BgL_pz00_1040 = BGL_EXITD_VAL();
													{	/* Llib/bexit.scm 198 */
														obj_t BgL_arg1186z00_1041;

														BgL_arg1186z00_1041 = CAR(((obj_t) BgL_pz00_1040));
														{	/* Llib/bexit.scm 198 */
															obj_t BgL_tmpz00_1808;

															BgL_tmpz00_1808 = ((obj_t) BgL_arg1186z00_1041);
															SET_CAR(BgL_tmpz00_1808, BgL_exitdz00_7);
														}
													}
													{	/* Llib/bexit.scm 199 */
														obj_t BgL_arg1190z00_1042;

														BgL_arg1190z00_1042 = CAR(((obj_t) BgL_pz00_1040));
														{	/* Llib/bexit.scm 199 */
															obj_t BgL_tmpz00_1813;

															BgL_tmpz00_1813 = ((obj_t) BgL_arg1190z00_1042);
															SET_CDR(BgL_tmpz00_1813, BgL_proczd2bottomzd2_10);
														}
													}
													{	/* Llib/bexit.scm 200 */
														obj_t BgL_tmpz00_1816;

														BgL_tmpz00_1816 = ((obj_t) BgL_pz00_1040);
														SET_CDR(BgL_tmpz00_1816, BgL_valz00_9);
													}
													JUMP_EXIT(EXITD_TO_EXIT(BgL_exitdzd2topzd2_1027),
														BgL_pz00_1040);
												}
												return BUNSPEC;
											}
									}
							}
						}
				}
			}
		}

	}



/* &unwind-stack-until! */
	obj_t BGl_z62unwindzd2stackzd2untilz12z70zz__bexitz00(obj_t BgL_envz00_1728,
		obj_t BgL_exitdz00_1729, obj_t BgL_estampz00_1730, obj_t BgL_valz00_1731,
		obj_t BgL_proczd2bottomzd2_1732)
	{
		{	/* Llib/bexit.scm 167 */
			return
				unwind_stack_until(BgL_exitdz00_1729, BgL_estampz00_1730,
				BgL_valz00_1731, BgL_proczd2bottomzd2_1732);
		}

	}



/* exitd-exec-protect */
	obj_t BGl_exitdzd2execzd2protectz00zz__bexitz00(obj_t BgL_pz00_11)
	{
		{	/* Llib/bexit.scm 209 */
			{	/* Llib/bexit.scm 211 */
				bool_t BgL_test1636z00_1823;

				{	/* Llib/bexit.scm 211 */
					bool_t BgL_res1553z00_1467;

					BgL_res1553z00_1467 = BGL_MUTEXP(BgL_pz00_11);
					BgL_test1636z00_1823 = BgL_res1553z00_1467;
				}
				if (BgL_test1636z00_1823)
					{	/* Llib/bexit.scm 211 */
						int BgL_arg1521z00_1469;

						{	/* Llib/bexit.scm 211 */
							obj_t BgL_tmpz00_1825;

							BgL_tmpz00_1825 = ((obj_t) BgL_pz00_11);
							BgL_arg1521z00_1469 = BGL_MUTEX_UNLOCK(BgL_tmpz00_1825);
						}
						return BBOOL(((long) (BgL_arg1521z00_1469) == ((long) 0)));
					}
				else
					{	/* Llib/bexit.scm 211 */
						if (PROCEDUREP(BgL_pz00_11))
							{	/* Llib/bexit.scm 212 */
								return PROCEDURE_ENTRY(BgL_pz00_11) (BgL_pz00_11, BEOA);
							}
						else
							{	/* Llib/bexit.scm 212 */
								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_pz00_11))
									{	/* Llib/bexit.scm 213 */
										return
											BGl_evaluate2zd2restorezd2bpz12z12zz__evaluatez00(CINT
											(BgL_pz00_11));
									}
								else
									{	/* Llib/bexit.scm 213 */
										if (VECTORP(BgL_pz00_11))
											{	/* Llib/bexit.scm 214 */
												return
													BGl_evaluate2zd2restorezd2statez12z12zz__evaluatez00
													(BgL_pz00_11);
											}
										else
											{	/* Llib/bexit.scm 214 */
												return BFALSE;
											}
									}
							}
					}
			}
		}

	}



/* exitd-exec-and-pop-protects! */
	obj_t BGl_exitdzd2execzd2andzd2popzd2protectsz12z12zz__bexitz00(obj_t
		BgL_exitdz00_12)
	{
		{	/* Llib/bexit.scm 222 */
			{	/* Llib/bexit.scm 223 */
				obj_t BgL_g1040z00_1052;

				BgL_g1040z00_1052 = BGL_EXITD_PROTECTN(BgL_exitdz00_12);
				{
					obj_t BgL_lz00_1054;

					BgL_lz00_1054 = BgL_g1040z00_1052;
				BgL_zc3z04anonymousza31199ze3z87_1055:
					if (PAIRP(BgL_lz00_1054))
						{	/* Llib/bexit.scm 225 */
							obj_t BgL_pz00_1057;

							BgL_pz00_1057 = CAR(BgL_lz00_1054);
							{	/* Llib/bexit.scm 226 */
								obj_t BgL_arg1201z00_1058;

								BgL_arg1201z00_1058 = CDR(BgL_lz00_1054);
								BGL_EXITD_PROTECTN_SET(BgL_exitdz00_12, BgL_arg1201z00_1058);
								BUNSPEC;
							}
							BGl_exitdzd2execzd2protectz00zz__bexitz00(BgL_pz00_1057);
							{
								obj_t BgL_lz00_1850;

								BgL_lz00_1850 = CDR(BgL_lz00_1054);
								BgL_lz00_1054 = BgL_lz00_1850;
								goto BgL_zc3z04anonymousza31199ze3z87_1055;
							}
						}
					else
						{	/* Llib/bexit.scm 224 */
							((bool_t) 0);
						}
				}
			}
			{	/* Llib/bexit.scm 229 */
				obj_t BgL_pz00_1061;

				BgL_pz00_1061 = BGL_EXITD_PROTECT1(BgL_exitdz00_12);
				if (CBOOL(BgL_pz00_1061))
					{	/* Llib/bexit.scm 230 */
						BGL_EXITD_PROTECT1_SET(BgL_exitdz00_12, BFALSE);
						BUNSPEC;
						BGl_exitdzd2execzd2protectz00zz__bexitz00(BgL_pz00_1061);
					}
				else
					{	/* Llib/bexit.scm 230 */
						BFALSE;
					}
			}
			{	/* Llib/bexit.scm 233 */
				obj_t BgL_pz00_1062;

				BgL_pz00_1062 = BGL_EXITD_PROTECT0(BgL_exitdz00_12);
				BGL_EXITD_PROTECT0_SET(BgL_exitdz00_12, BFALSE);
				BUNSPEC;
				return BGl_exitdzd2execzd2protectz00zz__bexitz00(BgL_pz00_1062);
			}
		}

	}



/* exitd-push-protect! */
	BGL_EXPORTED_DEF obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t
		BgL_exitdz00_13, obj_t BgL_mz00_14)
	{
		{	/* Llib/bexit.scm 244 */
			if (CBOOL(BGL_EXITD_PROTECT0(BgL_exitdz00_13)))
				{	/* Llib/bexit.scm 246 */
					if (CBOOL(BGL_EXITD_PROTECT1(BgL_exitdz00_13)))
						{	/* Llib/bexit.scm 251 */
							obj_t BgL_arg1211z00_1065;

							{	/* Llib/bexit.scm 251 */
								obj_t BgL_arg1216z00_1066;

								BgL_arg1216z00_1066 = BGL_EXITD_PROTECTN(BgL_exitdz00_13);
								BgL_arg1211z00_1065 =
									MAKE_YOUNG_PAIR(BgL_mz00_14, BgL_arg1216z00_1066);
							}
							BGL_EXITD_PROTECTN_SET(BgL_exitdz00_13, BgL_arg1211z00_1065);
							return BUNSPEC;
						}
					else
						{	/* Llib/bexit.scm 248 */
							BGL_EXITD_PROTECT1_SET(BgL_exitdz00_13, BgL_mz00_14);
							return BUNSPEC;
						}
				}
			else
				{	/* Llib/bexit.scm 246 */
					BGL_EXITD_PROTECT0_SET(BgL_exitdz00_13, BgL_mz00_14);
					return BUNSPEC;
				}
		}

	}



/* &exitd-push-protect! */
	obj_t BGl_z62exitdzd2pushzd2protectz12z70zz__bexitz00(obj_t BgL_envz00_1733,
		obj_t BgL_exitdz00_1734, obj_t BgL_mz00_1735)
	{
		{	/* Llib/bexit.scm 244 */
			return
				BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitdz00_1734,
				BgL_mz00_1735);
		}

	}



/* exitd-pop-protect! */
	BGL_EXPORTED_DEF obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t
		BgL_exitdz00_15)
	{
		{	/* Llib/bexit.scm 256 */
			if (CBOOL(BGL_EXITD_PROTECT1(BgL_exitdz00_15)))
				{	/* Llib/bexit.scm 260 */
					bool_t BgL_test1645z00_1875;

					{	/* Llib/bexit.scm 260 */
						obj_t BgL_arg1227z00_1072;

						BgL_arg1227z00_1072 = BGL_EXITD_PROTECTN(BgL_exitdz00_15);
						BgL_test1645z00_1875 = NULLP(BgL_arg1227z00_1072);
					}
					if (BgL_test1645z00_1875)
						{	/* Llib/bexit.scm 260 */
							BGL_EXITD_PROTECT1_SET(BgL_exitdz00_15, BFALSE);
							return BUNSPEC;
						}
					else
						{	/* Llib/bexit.scm 263 */
							obj_t BgL_arg1223z00_1070;

							{	/* Llib/bexit.scm 263 */
								obj_t BgL_arg1225z00_1071;

								BgL_arg1225z00_1071 = BGL_EXITD_PROTECTN(BgL_exitdz00_15);
								BgL_arg1223z00_1070 = CDR(((obj_t) BgL_arg1225z00_1071));
							}
							BGL_EXITD_PROTECTN_SET(BgL_exitdz00_15, BgL_arg1223z00_1070);
							return BUNSPEC;
						}
				}
			else
				{	/* Llib/bexit.scm 258 */
					BGL_EXITD_PROTECT0_SET(BgL_exitdz00_15, BFALSE);
					return BUNSPEC;
				}
		}

	}



/* &exitd-pop-protect! */
	obj_t BGl_z62exitdzd2popzd2protectz12z70zz__bexitz00(obj_t BgL_envz00_1736,
		obj_t BgL_exitdz00_1737)
	{
		{	/* Llib/bexit.scm 256 */
			return BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitdz00_1737);
		}

	}



/* default-uncaught-exception-handler */
	BGL_EXPORTED_DEF obj_t bgl_uncaught_exception_handler(obj_t BgL_valz00_16)
	{
		{	/* Llib/bexit.scm 268 */
			return
				BGl_errorz00zz__errorz00(BGl_string1610z00zz__bexitz00,
				BGl_string1611z00zz__bexitz00, BgL_valz00_16);
		}

	}



/* &default-uncaught-exception-handler */
	obj_t BGl_z62defaultzd2uncaughtzd2exceptionzd2handlerzb0zz__bexitz00(obj_t
		BgL_envz00_1738, obj_t BgL_valz00_1739)
	{
		{	/* Llib/bexit.scm 268 */
			return bgl_uncaught_exception_handler(BgL_valz00_1739);
		}

	}



/* $exitd-mutex-profile */
	BGL_EXPORTED_DEF obj_t bgl_exitd_mutex_profile()
	{
		{	/* Llib/bexit.scm 279 */
			return BUNSPEC;
		}

	}



/* &$exitd-mutex-profile */
	obj_t BGl_z62z42exitdzd2mutexzd2profilez20zz__bexitz00(obj_t BgL_envz00_1740)
	{
		{	/* Llib/bexit.scm 279 */
			return bgl_exitd_mutex_profile();
		}

	}



/* $failsafe-mutex-profile */
	BGL_EXPORTED_DEF obj_t bgl_failsafe_mutex_profile()
	{
		{	/* Llib/bexit.scm 280 */
			return BUNSPEC;
		}

	}



/* &$failsafe-mutex-profile */
	obj_t BGl_z62z42failsafezd2mutexzd2profilez20zz__bexitz00(obj_t
		BgL_envz00_1741)
	{
		{	/* Llib/bexit.scm 280 */
			return bgl_failsafe_mutex_profile();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__bexitz00()
	{
		{	/* Llib/bexit.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__bexitz00()
	{
		{	/* Llib/bexit.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__bexitz00()
	{
		{	/* Llib/bexit.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__bexitz00()
	{
		{	/* Llib/bexit.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1612z00zz__bexitz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1612z00zz__bexitz00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1612z00zz__bexitz00));
		}

	}

#ifdef __cplusplus
}
#endif
