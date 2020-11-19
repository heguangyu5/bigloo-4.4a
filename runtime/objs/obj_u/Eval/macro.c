/*===========================================================================*/
/*   (Eval/macro.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/macro.scm -indent -o objs/obj_u/Eval/macro.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62installzd2compilerzd2expanderz62zz__macroz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__macroz00 = BUNSPEC;
	extern obj_t BGl_evalzd2modulezd2zz__evmodulez00();
	BGL_EXPORTED_DECL obj_t
		BGl_installzd2compilerzd2expanderz00zz__macroz00(obj_t, obj_t);
	static obj_t BGl_z62getzd2evalzd2expanderz62zz__macroz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__macroz00();
	BGL_EXPORTED_DECL obj_t BGl_getzd2compilerzd2expanderz00zz__macroz00(obj_t);
	static obj_t BGl_za2evalzd2macrozd2tableza2z00zz__macroz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__macroz00();
	static obj_t BGl_objectzd2initzd2zz__macroz00();
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_z62getzd2compilerzd2expanderz62zz__macroz00(obj_t, obj_t);
	extern obj_t BGl_evmodulezd2macrozd2tablez00zz__evmodulez00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__macroz00();
	static obj_t BGl_z62zc3z04anonymousza31187ze31603ze5zz__macroz00(obj_t,
		obj_t);
	static obj_t BGl_modulezd2macrozd2tablez00zz__macroz00();
	static obj_t BGl_za2evalzd2macrozd2mutexza2z00zz__macroz00 = BUNSPEC;
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2compilerzd2macrozd2tableza2z00zz__macroz00 = BUNSPEC;
	extern obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_installzd2expanderzd2zz__macroz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__macroz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__everrorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62zc3z04anonymousza31187ze3ze5zz__macroz00(obj_t, obj_t);
	extern obj_t BGl_evwarningz00zz__everrorz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__macroz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__macroz00();
	BGL_EXPORTED_DECL obj_t BGl_getzd2evalzd2expanderz00zz__macroz00(obj_t);
	extern bool_t BGl_evmodulezf3zf3zz__evmodulez00(obj_t);
	static obj_t BGl_z62installzd2expanderzb0zz__macroz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_installzd2evalzd2expanderz00zz__macroz00(obj_t,
		obj_t);
	static obj_t BGl_za2compilerzd2macrozd2mutexza2z00zz__macroz00 = BUNSPEC;
	extern obj_t BGl_hashtablezd2updatez12zc0zz__hashz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62installzd2evalzd2expanderz62zz__macroz00(obj_t, obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1604z00zz__macroz00,
		BgL_bgl_string1604za700za7za7_1615za7, "eval-macros", 11);
	      DEFINE_STRING(BGl_string1605z00zz__macroz00,
		BgL_bgl_string1605za700za7za7_1616za7, "compiler-macros", 15);
	      DEFINE_STRING(BGl_string1606z00zz__macroz00,
		BgL_bgl_string1606za700za7za7_1617za7, "install-eval-expander", 21);
	      DEFINE_STRING(BGl_string1607z00zz__macroz00,
		BgL_bgl_string1607za700za7za7_1618za7, "Illegal expander expander", 25);
	      DEFINE_STRING(BGl_string1608z00zz__macroz00,
		BgL_bgl_string1608za700za7za7_1619za7, "Illegal expander keyword", 24);
	      DEFINE_STRING(BGl_string1609z00zz__macroz00,
		BgL_bgl_string1609za700za7za7_1620za7, "Redefinition of ", 16);
	      DEFINE_STRING(BGl_string1610z00zz__macroz00,
		BgL_bgl_string1610za700za7za7_1621za7, "eval", 4);
	      DEFINE_STRING(BGl_string1611z00zz__macroz00,
		BgL_bgl_string1611za700za7za7_1622za7, " expander -- ", 13);
	      DEFINE_STRING(BGl_string1612z00zz__macroz00,
		BgL_bgl_string1612za700za7za7_1623za7, "install-expander", 16);
	      DEFINE_STRING(BGl_string1613z00zz__macroz00,
		BgL_bgl_string1613za700za7za7_1624za7, "compiler", 8);
	      DEFINE_STRING(BGl_string1614z00zz__macroz00,
		BgL_bgl_string1614za700za7za7_1625za7, "__macro", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_installzd2compilerzd2expanderzd2envzd2zz__macroz00,
		BgL_bgl_za762installza7d2com1626z00,
		BGl_z62installzd2compilerzd2expanderz62zz__macroz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2compilerzd2expanderzd2envzd2zz__macroz00,
		BgL_bgl_za762getza7d2compile1627z00,
		BGl_z62getzd2compilerzd2expanderz62zz__macroz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_installzd2evalzd2expanderzd2envzd2zz__macroz00,
		BgL_bgl_za762installza7d2eva1628z00,
		BGl_z62installzd2evalzd2expanderz62zz__macroz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2evalzd2expanderzd2envzd2zz__macroz00,
		BgL_bgl_za762getza7d2evalza7d21629za7,
		BGl_z62getzd2evalzd2expanderz62zz__macroz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_installzd2expanderzd2envz00zz__macroz00,
		BgL_bgl_za762installza7d2exp1630z00,
		BGl_z62installzd2expanderzb0zz__macroz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__macroz00));
		     ADD_ROOT((void *) (&BGl_za2evalzd2macrozd2tableza2z00zz__macroz00));
		     ADD_ROOT((void *) (&BGl_za2evalzd2macrozd2mutexza2z00zz__macroz00));
		   
			 ADD_ROOT((void *) (&BGl_za2compilerzd2macrozd2tableza2z00zz__macroz00));
		   
			 ADD_ROOT((void *) (&BGl_za2compilerzd2macrozd2mutexza2z00zz__macroz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__macroz00(long
		BgL_checksumz00_1813, char *BgL_fromz00_1814)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__macroz00))
				{
					BGl_requirezd2initializa7ationz75zz__macroz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__macroz00();
					BGl_importedzd2moduleszd2initz00zz__macroz00();
					return BGl_toplevelzd2initzd2zz__macroz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__macroz00()
	{
		{	/* Eval/macro.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__macroz00()
	{
		{	/* Eval/macro.scm 14 */
			{	/* Eval/macro.scm 59 */
				obj_t BgL_res1546z00_1517;

				BgL_res1546z00_1517 = bgl_make_mutex(BGl_string1604z00zz__macroz00);
				BGl_za2evalzd2macrozd2mutexza2z00zz__macroz00 = BgL_res1546z00_1517;
			}
			{	/* Eval/macro.scm 60 */
				obj_t BgL_res1547z00_1518;

				BgL_res1547z00_1518 = bgl_make_mutex(BGl_string1605z00zz__macroz00);
				BGl_za2compilerzd2macrozd2mutexza2z00zz__macroz00 = BgL_res1547z00_1518;
			}
			BGl_za2evalzd2macrozd2tableza2z00zz__macroz00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL);
			return (BGl_za2compilerzd2macrozd2tableza2z00zz__macroz00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL), BUNSPEC);
		}

	}



/* module-macro-table */
	obj_t BGl_modulezd2macrozd2tablez00zz__macroz00()
	{
		{	/* Eval/macro.scm 76 */
			{	/* Eval/macro.scm 77 */
				obj_t BgL_mz00_1102;

				BgL_mz00_1102 = BGl_evalzd2modulezd2zz__evmodulez00();
				if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_1102))
					{	/* Eval/macro.scm 78 */
						return
							BGl_evmodulezd2macrozd2tablez00zz__evmodulez00(BgL_mz00_1102);
					}
				else
					{	/* Eval/macro.scm 78 */
						return BFALSE;
					}
			}
		}

	}



/* install-eval-expander */
	BGL_EXPORTED_DEF obj_t BGl_installzd2evalzd2expanderz00zz__macroz00(obj_t
		BgL_keywordz00_21, obj_t BgL_expanderz00_22)
	{
		{	/* Eval/macro.scm 102 */
			if (SYMBOLP(BgL_keywordz00_21))
				{	/* Eval/macro.scm 104 */
					if (PROCEDUREP(BgL_expanderz00_22))
						{	/* Eval/macro.scm 109 */
							obj_t BgL_top1636z00_1835;

							BgL_top1636z00_1835 = BGL_EXITD_TOP_AS_OBJ();
							BGL_MUTEX_LOCK(BGl_za2evalzd2macrozd2mutexza2z00zz__macroz00);
							BGL_EXITD_PUSH_PROTECT(BgL_top1636z00_1835,
								BGl_za2evalzd2macrozd2mutexza2z00zz__macroz00);
							BUNSPEC;
							{	/* Eval/macro.scm 109 */
								obj_t BgL_tmp1635z00_1834;

								{	/* Eval/macro.scm 110 */
									obj_t BgL_arg1201z00_1114;

									{	/* Eval/macro.scm 110 */
										obj_t BgL__ortest_1039z00_1115;

										BgL__ortest_1039z00_1115 =
											BGl_modulezd2macrozd2tablez00zz__macroz00();
										if (CBOOL(BgL__ortest_1039z00_1115))
											{	/* Eval/macro.scm 110 */
												BgL_arg1201z00_1114 = BgL__ortest_1039z00_1115;
											}
										else
											{	/* Eval/macro.scm 110 */
												BgL_arg1201z00_1114 =
													BGl_za2evalzd2macrozd2tableza2z00zz__macroz00;
											}
									}
									{	/* Eval/macro.scm 88 */
										obj_t BgL_zc3z04anonymousza31187ze3z87_1781;

										BgL_zc3z04anonymousza31187ze3z87_1781 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31187ze3ze5zz__macroz00,
											(int) (((long) 1)), (int) (((long) 2)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31187ze3z87_1781,
											(int) (((long) 0)), BgL_keywordz00_21);
										PROCEDURE_SET(BgL_zc3z04anonymousza31187ze3z87_1781,
											(int) (((long) 1)), BgL_expanderz00_22);
										BgL_tmp1635z00_1834 =
											BGl_hashtablezd2updatez12zc0zz__hashz00
											(BgL_arg1201z00_1114, BgL_keywordz00_21,
											BgL_zc3z04anonymousza31187ze3z87_1781,
											BgL_expanderz00_22);
								}}
								BGL_EXITD_POP_PROTECT(BgL_top1636z00_1835);
								BUNSPEC;
								BGL_MUTEX_UNLOCK(BGl_za2evalzd2macrozd2mutexza2z00zz__macroz00);
								return BgL_tmp1635z00_1834;
							}
						}
					else
						{	/* Eval/macro.scm 106 */
							return
								BGl_errorz00zz__errorz00(BGl_string1606z00zz__macroz00,
								BGl_string1607z00zz__macroz00, BgL_expanderz00_22);
						}
				}
			else
				{	/* Eval/macro.scm 104 */
					return
						BGl_errorz00zz__errorz00(BGl_string1606z00zz__macroz00,
						BGl_string1608z00zz__macroz00, BgL_keywordz00_21);
				}
		}

	}



/* &install-eval-expander */
	obj_t BGl_z62installzd2evalzd2expanderz62zz__macroz00(obj_t BgL_envz00_1782,
		obj_t BgL_keywordz00_1783, obj_t BgL_expanderz00_1784)
	{
		{	/* Eval/macro.scm 102 */
			return
				BGl_installzd2evalzd2expanderz00zz__macroz00(BgL_keywordz00_1783,
				BgL_expanderz00_1784);
		}

	}



/* &<@anonymous:1187> */
	obj_t BGl_z62zc3z04anonymousza31187ze3ze5zz__macroz00(obj_t BgL_envz00_1785,
		obj_t BgL_xz00_1788)
	{
		{	/* Eval/macro.scm 87 */
			{	/* Eval/macro.scm 88 */
				obj_t BgL_keywordz00_1786;
				obj_t BgL_expanderz00_1787;

				BgL_keywordz00_1786 =
					PROCEDURE_REF(BgL_envz00_1785, (int) (((long) 0)));
				BgL_expanderz00_1787 =
					PROCEDURE_REF(BgL_envz00_1785, (int) (((long) 1)));
				{	/* Eval/macro.scm 90 */
					obj_t BgL_arg1190z00_1805;

					BgL_arg1190z00_1805 =
						string_append_3(BGl_string1609z00zz__macroz00,
						BGl_string1610z00zz__macroz00, BGl_string1611z00zz__macroz00);
					{	/* Eval/macro.scm 88 */
						obj_t BgL_list1191z00_1806;

						{	/* Eval/macro.scm 88 */
							obj_t BgL_arg1194z00_1807;

							{	/* Eval/macro.scm 88 */
								obj_t BgL_arg1197z00_1808;

								BgL_arg1197z00_1808 =
									MAKE_YOUNG_PAIR(BgL_keywordz00_1786, BNIL);
								BgL_arg1194z00_1807 =
									MAKE_YOUNG_PAIR(BgL_arg1190z00_1805, BgL_arg1197z00_1808);
							}
							BgL_list1191z00_1806 =
								MAKE_YOUNG_PAIR(BGl_string1612z00zz__macroz00,
								BgL_arg1194z00_1807);
						}
						BGl_evwarningz00zz__everrorz00(BFALSE, BgL_list1191z00_1806);
				}}
				return BgL_expanderz00_1787;
			}
		}

	}



/* install-compiler-expander */
	BGL_EXPORTED_DEF obj_t BGl_installzd2compilerzd2expanderz00zz__macroz00(obj_t
		BgL_keywordz00_23, obj_t BgL_expanderz00_24)
	{
		{	/* Eval/macro.scm 118 */
			if (SYMBOLP(BgL_keywordz00_23))
				{	/* Eval/macro.scm 120 */
					if (PROCEDUREP(BgL_expanderz00_24))
						{	/* Eval/macro.scm 125 */
							obj_t BgL_top1641z00_1869;

							BgL_top1641z00_1869 = BGL_EXITD_TOP_AS_OBJ();
							BGL_MUTEX_LOCK(BGl_za2compilerzd2macrozd2mutexza2z00zz__macroz00);
							BGL_EXITD_PUSH_PROTECT(BgL_top1641z00_1869,
								BGl_za2compilerzd2macrozd2mutexza2z00zz__macroz00);
							BUNSPEC;
							{	/* Eval/macro.scm 125 */
								obj_t BgL_tmp1640z00_1868;

								{	/* Eval/macro.scm 126 */
									obj_t BgL_tablez00_1536;

									BgL_tablez00_1536 =
										BGl_za2compilerzd2macrozd2tableza2z00zz__macroz00;
									{	/* Eval/macro.scm 88 */
										obj_t BgL_zc3z04anonymousza31187ze3z87_1789;

										BgL_zc3z04anonymousza31187ze3z87_1789 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31187ze31603ze5zz__macroz00,
											(int) (((long) 1)), (int) (((long) 2)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31187ze3z87_1789,
											(int) (((long) 0)), BgL_keywordz00_23);
										PROCEDURE_SET(BgL_zc3z04anonymousza31187ze3z87_1789,
											(int) (((long) 1)), BgL_expanderz00_24);
										BgL_tmp1640z00_1868 =
											BGl_hashtablezd2updatez12zc0zz__hashz00(BgL_tablez00_1536,
											BgL_keywordz00_23, BgL_zc3z04anonymousza31187ze3z87_1789,
											BgL_expanderz00_24);
								}}
								BGL_EXITD_POP_PROTECT(BgL_top1641z00_1869);
								BUNSPEC;
								BGL_MUTEX_UNLOCK
									(BGl_za2compilerzd2macrozd2mutexza2z00zz__macroz00);
								return BgL_tmp1640z00_1868;
							}
						}
					else
						{	/* Eval/macro.scm 122 */
							return
								BGl_errorz00zz__errorz00(BGl_string1606z00zz__macroz00,
								BGl_string1607z00zz__macroz00, BgL_expanderz00_24);
						}
				}
			else
				{	/* Eval/macro.scm 120 */
					return
						BGl_errorz00zz__errorz00(BGl_string1606z00zz__macroz00,
						BGl_string1608z00zz__macroz00, BgL_keywordz00_23);
				}
		}

	}



/* &install-compiler-expander */
	obj_t BGl_z62installzd2compilerzd2expanderz62zz__macroz00(obj_t
		BgL_envz00_1790, obj_t BgL_keywordz00_1791, obj_t BgL_expanderz00_1792)
	{
		{	/* Eval/macro.scm 118 */
			return
				BGl_installzd2compilerzd2expanderz00zz__macroz00(BgL_keywordz00_1791,
				BgL_expanderz00_1792);
		}

	}



/* &<@anonymous:1187>1603 */
	obj_t BGl_z62zc3z04anonymousza31187ze31603ze5zz__macroz00(obj_t
		BgL_envz00_1793, obj_t BgL_xz00_1796)
	{
		{	/* Eval/macro.scm 87 */
			{	/* Eval/macro.scm 88 */
				obj_t BgL_keywordz00_1794;
				obj_t BgL_expanderz00_1795;

				BgL_keywordz00_1794 =
					PROCEDURE_REF(BgL_envz00_1793, (int) (((long) 0)));
				BgL_expanderz00_1795 =
					PROCEDURE_REF(BgL_envz00_1793, (int) (((long) 1)));
				{	/* Eval/macro.scm 90 */
					obj_t BgL_arg1190z00_1809;

					BgL_arg1190z00_1809 =
						string_append_3(BGl_string1609z00zz__macroz00,
						BGl_string1613z00zz__macroz00, BGl_string1611z00zz__macroz00);
					{	/* Eval/macro.scm 88 */
						obj_t BgL_list1191z00_1810;

						{	/* Eval/macro.scm 88 */
							obj_t BgL_arg1194z00_1811;

							{	/* Eval/macro.scm 88 */
								obj_t BgL_arg1197z00_1812;

								BgL_arg1197z00_1812 =
									MAKE_YOUNG_PAIR(BgL_keywordz00_1794, BNIL);
								BgL_arg1194z00_1811 =
									MAKE_YOUNG_PAIR(BgL_arg1190z00_1809, BgL_arg1197z00_1812);
							}
							BgL_list1191z00_1810 =
								MAKE_YOUNG_PAIR(BGl_string1612z00zz__macroz00,
								BgL_arg1194z00_1811);
						}
						BGl_evwarningz00zz__everrorz00(BFALSE, BgL_list1191z00_1810);
				}}
				return BgL_expanderz00_1795;
			}
		}

	}



/* install-expander */
	BGL_EXPORTED_DEF obj_t BGl_installzd2expanderzd2zz__macroz00(obj_t
		BgL_keywordz00_25, obj_t BgL_expanderz00_26)
	{
		{	/* Eval/macro.scm 133 */
			BGl_installzd2evalzd2expanderz00zz__macroz00(BgL_keywordz00_25,
				BgL_expanderz00_26);
			return BGl_installzd2compilerzd2expanderz00zz__macroz00(BgL_keywordz00_25,
				BgL_expanderz00_26);
		}

	}



/* &install-expander */
	obj_t BGl_z62installzd2expanderzb0zz__macroz00(obj_t BgL_envz00_1797,
		obj_t BgL_keywordz00_1798, obj_t BgL_expanderz00_1799)
	{
		{	/* Eval/macro.scm 133 */
			return
				BGl_installzd2expanderzd2zz__macroz00(BgL_keywordz00_1798,
				BgL_expanderz00_1799);
		}

	}



/* get-eval-expander */
	BGL_EXPORTED_DEF obj_t BGl_getzd2evalzd2expanderz00zz__macroz00(obj_t
		BgL_keywordz00_27)
	{
		{	/* Eval/macro.scm 142 */
			{	/* Eval/macro.scm 143 */
				obj_t BgL_top1643z00_1899;

				BgL_top1643z00_1899 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2evalzd2macrozd2mutexza2z00zz__macroz00);
				BGL_EXITD_PUSH_PROTECT(BgL_top1643z00_1899,
					BGl_za2evalzd2macrozd2mutexza2z00zz__macroz00);
				BUNSPEC;
				{	/* Eval/macro.scm 143 */
					obj_t BgL_tmp1642z00_1898;

					{	/* Eval/macro.scm 144 */
						obj_t BgL_mtablez00_1118;

						BgL_mtablez00_1118 = BGl_modulezd2macrozd2tablez00zz__macroz00();
						{	/* Eval/macro.scm 145 */
							obj_t BgL__ortest_1040z00_1119;

							if (CBOOL(BgL_mtablez00_1118))
								{	/* Eval/macro.scm 145 */
									BgL__ortest_1040z00_1119 =
										BGl_hashtablezd2getzd2zz__hashz00(BgL_mtablez00_1118,
										BgL_keywordz00_27);
								}
							else
								{	/* Eval/macro.scm 145 */
									BgL__ortest_1040z00_1119 = BFALSE;
								}
							if (CBOOL(BgL__ortest_1040z00_1119))
								{	/* Eval/macro.scm 145 */
									BgL_tmp1642z00_1898 = BgL__ortest_1040z00_1119;
								}
							else
								{	/* Eval/macro.scm 145 */
									BgL_tmp1642z00_1898 =
										BGl_hashtablezd2getzd2zz__hashz00
										(BGl_za2evalzd2macrozd2tableza2z00zz__macroz00,
										BgL_keywordz00_27);
								}
						}
					}
					BGL_EXITD_POP_PROTECT(BgL_top1643z00_1899);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2evalzd2macrozd2mutexza2z00zz__macroz00);
					return BgL_tmp1642z00_1898;
				}
			}
		}

	}



/* &get-eval-expander */
	obj_t BGl_z62getzd2evalzd2expanderz62zz__macroz00(obj_t BgL_envz00_1800,
		obj_t BgL_keywordz00_1801)
	{
		{	/* Eval/macro.scm 142 */
			return BGl_getzd2evalzd2expanderz00zz__macroz00(BgL_keywordz00_1801);
		}

	}



/* get-compiler-expander */
	BGL_EXPORTED_DEF obj_t BGl_getzd2compilerzd2expanderz00zz__macroz00(obj_t
		BgL_keywordz00_28)
	{
		{	/* Eval/macro.scm 156 */
			{	/* Eval/macro.scm 157 */
				obj_t BgL_top1647z00_1914;

				BgL_top1647z00_1914 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2compilerzd2macrozd2mutexza2z00zz__macroz00);
				BGL_EXITD_PUSH_PROTECT(BgL_top1647z00_1914,
					BGl_za2compilerzd2macrozd2mutexza2z00zz__macroz00);
				BUNSPEC;
				{	/* Eval/macro.scm 157 */
					obj_t BgL_tmp1646z00_1913;

					BgL_tmp1646z00_1913 =
						BGl_hashtablezd2getzd2zz__hashz00
						(BGl_za2compilerzd2macrozd2tableza2z00zz__macroz00,
						BgL_keywordz00_28);
					BGL_EXITD_POP_PROTECT(BgL_top1647z00_1914);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2compilerzd2macrozd2mutexza2z00zz__macroz00);
					return BgL_tmp1646z00_1913;
				}
			}
		}

	}



/* &get-compiler-expander */
	obj_t BGl_z62getzd2compilerzd2expanderz62zz__macroz00(obj_t BgL_envz00_1802,
		obj_t BgL_keywordz00_1803)
	{
		{	/* Eval/macro.scm 156 */
			return BGl_getzd2compilerzd2expanderz00zz__macroz00(BgL_keywordz00_1803);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__macroz00()
	{
		{	/* Eval/macro.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__macroz00()
	{
		{	/* Eval/macro.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__macroz00()
	{
		{	/* Eval/macro.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__macroz00()
	{
		{	/* Eval/macro.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1614z00zz__macroz00));
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 214649622),
				BSTRING_TO_STRING(BGl_string1614z00zz__macroz00));
			BGl_modulezd2initializa7ationz75zz__everrorz00(((long) 375872251),
				BSTRING_TO_STRING(BGl_string1614z00zz__macroz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1614z00zz__macroz00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1614z00zz__macroz00));
		}

	}

#ifdef __cplusplus
}
#endif
