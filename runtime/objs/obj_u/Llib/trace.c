/*===========================================================================*/
/*   (Llib/trace.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/trace.scm -indent -o objs/obj_u/Llib/trace.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_tracezd2activezf3z21zz__tracez00(obj_t);
	static obj_t BGl_z62tracezd2stringzb0zz__tracez00(obj_t, obj_t);
	static obj_t BGl_symbol1750z00zz__tracez00 = BUNSPEC;
	static obj_t BGl_symbol1753z00zz__tracez00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__tracez00 = BUNSPEC;
	extern obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31203ze3ze5zz__tracez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tracezd2portzd2zz__tracez00();
	static obj_t BGl_toplevelzd2initzd2zz__tracez00();
	extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__tracez00();
	extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_z62tracezd2portzb0zz__tracez00(obj_t);
	static obj_t BGl_objectzd2initzd2zz__tracez00();
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_bigloozd2tracezd2zz__paramz00();
	BGL_EXPORTED_DECL obj_t BGl_tracezd2colorzd2zz__tracez00(int, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31305ze3ze5zz__tracez00(obj_t);
	extern bool_t BGl_bigloozd2tracezd2colorz00zz__paramz00();
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31307ze3ze5zz__tracez00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31226ze3ze5zz__tracez00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__tracez00();
	BGL_EXPORTED_DECL obj_t BGl_tracezd2itemzd2zz__tracez00(obj_t);
	static obj_t BGl_z62tracezd2marginzb0zz__tracez00(obj_t);
	static obj_t BGl_z62tracezd2itemzb0zz__tracez00(obj_t, obj_t);
	extern obj_t string_append(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31246ze3ze5zz__tracez00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31255ze3ze5zz__tracez00(obj_t);
	static obj_t BGl_z62tracezd2colorzb0zz__tracez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tracezd2marginzd2setz12z12zz__tracez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_z52withzd2tracez80zz__tracez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tracezd2stringzd2zz__tracez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tracezd2boldzd2zz__tracez00(obj_t);
	extern obj_t BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__tracez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	static obj_t BGl_z62tracezd2activezf3z43zz__tracez00(obj_t, obj_t);
	extern int bgl_debug();
	static obj_t BGl_tracezd2alistzd2zz__tracez00();
	static obj_t BGl_z62tracezd2boldzb0zz__tracez00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__tracez00();
	static obj_t BGl_gczd2rootszd2initz00zz__tracez00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__tracez00();
	extern obj_t BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	extern obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
	static obj_t BGl_z62z52withzd2traceze2zz__tracez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31289ze3ze5zz__tracez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tracezd2portzd2setz12z12zz__tracez00(obj_t);
	static obj_t BGl_z62tracezd2portzd2setz12z70zz__tracez00(obj_t, obj_t);
	extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	static obj_t BGl_za2tracezd2mutexza2zd2zz__tracez00 = BUNSPEC;
	static obj_t BGl_z62tracezd2marginzd2setz12z70zz__tracez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tracezd2marginzd2zz__tracez00();
	static obj_t BGl_symbol1741z00zz__tracez00 = BUNSPEC;
	static obj_t BGl_symbol1743z00zz__tracez00 = BUNSPEC;
	static obj_t BGl_symbol1745z00zz__tracez00 = BUNSPEC;
	static obj_t BGl_symbol1748z00zz__tracez00 = BUNSPEC;
	static obj_t BGl_ttyzd2tracezd2colorz00zz__tracez00(int, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tracezd2marginzd2setz12zd2envzc0zz__tracez00,
		BgL_bgl_za762traceza7d2margi1772z00,
		BGl_z62tracezd2marginzd2setz12z70zz__tracez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52withzd2tracezd2envz52zz__tracez00,
		BgL_bgl_za762za752withza7d2tra1773za7,
		BGl_z62z52withzd2traceze2zz__tracez00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tracezd2marginzd2envz00zz__tracez00,
		BgL_bgl_za762traceza7d2margi1774z00, BGl_z62tracezd2marginzb0zz__tracez00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tracezd2portzd2setz12zd2envzc0zz__tracez00,
		BgL_bgl_za762traceza7d2portza71775za7,
		BGl_z62tracezd2portzd2setz12z70zz__tracez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tracezd2boldzd2envz00zz__tracez00,
		BgL_bgl_za762traceza7d2boldza71776za7, va_generic_entry,
		BGl_z62tracezd2boldzb0zz__tracez00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tracezd2portzd2envz00zz__tracez00,
		BgL_bgl_za762traceza7d2portza71777za7, BGl_z62tracezd2portzb0zz__tracez00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1740z00zz__tracez00,
		BgL_bgl_string1740za700za7za7_1778za7, "trace", 5);
	      DEFINE_STRING(BGl_string1742z00zz__tracez00,
		BgL_bgl_string1742za700za7za7_1779za7, "port", 4);
	      DEFINE_STRING(BGl_string1744z00zz__tracez00,
		BgL_bgl_string1744za700za7za7_1780za7, "depth", 5);
	      DEFINE_STRING(BGl_string1746z00zz__tracez00,
		BgL_bgl_string1746za700za7za7_1781za7, "margin", 6);
	      DEFINE_STRING(BGl_string1747z00zz__tracez00,
		BgL_bgl_string1747za700za7za7_1782za7, "", 0);
	      DEFINE_STRING(BGl_string1749z00zz__tracez00,
		BgL_bgl_string1749za700za7za7_1783za7, "margin-level", 12);
	      DEFINE_STRING(BGl_string1751z00zz__tracez00,
		BgL_bgl_string1751za700za7za7_1784za7, "trace-alist-get", 15);
	      DEFINE_STRING(BGl_string1752z00zz__tracez00,
		BgL_bgl_string1752za700za7za7_1785za7, "Can't find trace-value", 22);
	      DEFINE_STRING(BGl_string1754z00zz__tracez00,
		BgL_bgl_string1754za700za7za7_1786za7, "trace-alist-set!", 16);
	      DEFINE_STRING(BGl_string1755z00zz__tracez00,
		BgL_bgl_string1755za700za7za7_1787za7, "/tmp/4.4a/runtime/Llib/trace.scm",
		32);
	      DEFINE_STRING(BGl_string1756z00zz__tracez00,
		BgL_bgl_string1756za700za7za7_1788za7, "&trace-port-set!", 16);
	      DEFINE_STRING(BGl_string1757z00zz__tracez00,
		BgL_bgl_string1757za700za7za7_1789za7, "output-port", 11);
	      DEFINE_STRING(BGl_string1758z00zz__tracez00,
		BgL_bgl_string1758za700za7za7_1790za7, "&trace-margin-set!", 18);
	      DEFINE_STRING(BGl_string1759z00zz__tracez00,
		BgL_bgl_string1759za700za7za7_1791za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1760z00zz__tracez00,
		BgL_bgl_string1760za700za7za7_1792za7, "&trace-color", 12);
	      DEFINE_STRING(BGl_string1761z00zz__tracez00,
		BgL_bgl_string1761za700za7za7_1793za7, "bint", 4);
	      DEFINE_STRING(BGl_string1762z00zz__tracez00,
		BgL_bgl_string1762za700za7za7_1794za7, "m", 1);
	      DEFINE_STRING(BGl_string1763z00zz__tracez00,
		BgL_bgl_string1763za700za7za7_1795za7, "\033[0m\033[1;", 8);
	      DEFINE_STRING(BGl_string1764z00zz__tracez00,
		BgL_bgl_string1764za700za7za7_1796za7, "\033[0m", 4);
	      DEFINE_STRING(BGl_string1765z00zz__tracez00,
		BgL_bgl_string1765za700za7za7_1797za7, "- ", 2);
	      DEFINE_STRING(BGl_string1766z00zz__tracez00,
		BgL_bgl_string1766za700za7za7_1798za7, "  |", 3);
	      DEFINE_STRING(BGl_string1767z00zz__tracez00,
		BgL_bgl_string1767za700za7za7_1799za7, "&%with-trace", 12);
	      DEFINE_STRING(BGl_string1768z00zz__tracez00,
		BgL_bgl_string1768za700za7za7_1800za7, "procedure", 9);
	      DEFINE_STRING(BGl_string1769z00zz__tracez00,
		BgL_bgl_string1769za700za7za7_1801za7, "+ ", 2);
	      DEFINE_STRING(BGl_string1770z00zz__tracez00,
		BgL_bgl_string1770za700za7za7_1802za7, "--+ ", 4);
	      DEFINE_STRING(BGl_string1771z00zz__tracez00,
		BgL_bgl_string1771za700za7za7_1803za7, "__trace", 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tracezd2colorzd2envz00zz__tracez00,
		BgL_bgl_za762traceza7d2color1804z00, va_generic_entry,
		BGl_z62tracezd2colorzb0zz__tracez00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tracezd2itemzd2envz00zz__tracez00,
		BgL_bgl_za762traceza7d2itemza71805za7, va_generic_entry,
		BGl_z62tracezd2itemzb0zz__tracez00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tracezd2activezf3zd2envzf3zz__tracez00,
		BgL_bgl_za762traceza7d2activ1806z00,
		BGl_z62tracezd2activezf3z43zz__tracez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tracezd2stringzd2envz00zz__tracez00,
		BgL_bgl_za762traceza7d2strin1807z00, BGl_z62tracezd2stringzb0zz__tracez00,
		0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol1750z00zz__tracez00));
		     ADD_ROOT((void *) (&BGl_symbol1753z00zz__tracez00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__tracez00));
		     ADD_ROOT((void *) (&BGl_za2tracezd2mutexza2zd2zz__tracez00));
		     ADD_ROOT((void *) (&BGl_symbol1741z00zz__tracez00));
		     ADD_ROOT((void *) (&BGl_symbol1743z00zz__tracez00));
		     ADD_ROOT((void *) (&BGl_symbol1745z00zz__tracez00));
		     ADD_ROOT((void *) (&BGl_symbol1748z00zz__tracez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__tracez00(long
		BgL_checksumz00_2135, char *BgL_fromz00_2136)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__tracez00))
				{
					BGl_requirezd2initializa7ationz75zz__tracez00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__tracez00();
					BGl_cnstzd2initzd2zz__tracez00();
					BGl_importedzd2moduleszd2initz00zz__tracez00();
					return BGl_toplevelzd2initzd2zz__tracez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__tracez00()
	{
		{	/* Llib/trace.scm 15 */
			BGl_symbol1741z00zz__tracez00 =
				bstring_to_symbol(BGl_string1742z00zz__tracez00);
			BGl_symbol1743z00zz__tracez00 =
				bstring_to_symbol(BGl_string1744z00zz__tracez00);
			BGl_symbol1745z00zz__tracez00 =
				bstring_to_symbol(BGl_string1746z00zz__tracez00);
			BGl_symbol1748z00zz__tracez00 =
				bstring_to_symbol(BGl_string1749z00zz__tracez00);
			BGl_symbol1750z00zz__tracez00 =
				bstring_to_symbol(BGl_string1751z00zz__tracez00);
			return (BGl_symbol1753z00zz__tracez00 =
				bstring_to_symbol(BGl_string1754z00zz__tracez00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__tracez00()
	{
		{	/* Llib/trace.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__tracez00()
	{
		{	/* Llib/trace.scm 15 */
			{	/* Llib/trace.scm 71 */
				obj_t BgL_res1629z00_1580;

				BgL_res1629z00_1580 = bgl_make_mutex(BGl_string1740z00zz__tracez00);
				return (BGl_za2tracezd2mutexza2zd2zz__tracez00 =
					BgL_res1629z00_1580, BUNSPEC);
			}
		}

	}



/* trace-alist */
	obj_t BGl_tracezd2alistzd2zz__tracez00()
	{
		{	/* Llib/trace.scm 82 */
			{	/* Llib/trace.scm 83 */
				obj_t BgL_alz00_1061;

				BgL_alz00_1061 = BGL_DEBUG_ALIST_GET();
				if (NULLP(BgL_alz00_1061))
					{	/* Llib/trace.scm 86 */
						obj_t BgL_newzd2alzd2_1063;

						{	/* Llib/trace.scm 86 */
							obj_t BgL_arg1169z00_1064;
							obj_t BgL_arg1170z00_1065;
							obj_t BgL_arg1172z00_1066;
							obj_t BgL_arg1174z00_1067;

							{	/* Llib/trace.scm 86 */
								obj_t BgL_arg1179z00_1072;

								{	/* Llib/trace.scm 86 */
									obj_t BgL_res1631z00_1583;

									{	/* Llib/trace.scm 86 */
										obj_t BgL_tmpz00_2155;

										BgL_tmpz00_2155 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res1631z00_1583 =
											BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2155);
									}
									BgL_arg1179z00_1072 = BgL_res1631z00_1583;
								}
								BgL_arg1169z00_1064 =
									MAKE_YOUNG_PAIR(BGl_symbol1741z00zz__tracez00,
									BgL_arg1179z00_1072);
							}
							BgL_arg1170z00_1065 =
								MAKE_YOUNG_PAIR(BGl_symbol1743z00zz__tracez00,
								BINT(((long) 0)));
							BgL_arg1172z00_1066 =
								MAKE_YOUNG_PAIR(BGl_symbol1745z00zz__tracez00,
								BGl_string1747z00zz__tracez00);
							BgL_arg1174z00_1067 =
								MAKE_YOUNG_PAIR(BGl_symbol1748z00zz__tracez00,
								BINT(((long) 0)));
							{	/* Llib/trace.scm 86 */
								obj_t BgL_list1175z00_1068;

								{	/* Llib/trace.scm 86 */
									obj_t BgL_arg1176z00_1069;

									{	/* Llib/trace.scm 86 */
										obj_t BgL_arg1177z00_1070;

										{	/* Llib/trace.scm 86 */
											obj_t BgL_arg1178z00_1071;

											BgL_arg1178z00_1071 =
												MAKE_YOUNG_PAIR(BgL_arg1174z00_1067, BNIL);
											BgL_arg1177z00_1070 =
												MAKE_YOUNG_PAIR(BgL_arg1172z00_1066,
												BgL_arg1178z00_1071);
										}
										BgL_arg1176z00_1069 =
											MAKE_YOUNG_PAIR(BgL_arg1170z00_1065, BgL_arg1177z00_1070);
									}
									BgL_list1175z00_1068 =
										MAKE_YOUNG_PAIR(BgL_arg1169z00_1064, BgL_arg1176z00_1069);
								}
								BgL_newzd2alzd2_1063 = BgL_list1175z00_1068;
						}}
						BGL_DEBUG_ALIST_SET(BgL_newzd2alzd2_1063);
						BUNSPEC;
						return BgL_newzd2alzd2_1063;
					}
				else
					{	/* Llib/trace.scm 84 */
						return BgL_alz00_1061;
					}
			}
		}

	}



/* trace-port */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2portzd2zz__tracez00()
	{
		{	/* Llib/trace.scm 114 */
			{	/* Llib/trace.scm 115 */
				obj_t BgL_arg1186z00_1593;

				BgL_arg1186z00_1593 = BGl_tracezd2alistzd2zz__tracez00();
				{	/* Llib/trace.scm 115 */
					obj_t BgL_keyz00_1594;

					BgL_keyz00_1594 = BGl_symbol1741z00zz__tracez00;
					{	/* Llib/trace.scm 97 */
						obj_t BgL_cz00_1595;

						BgL_cz00_1595 =
							BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1594,
							BgL_arg1186z00_1593);
						if (PAIRP(BgL_cz00_1595))
							{	/* Llib/trace.scm 98 */
								return CDR(BgL_cz00_1595);
							}
						else
							{	/* Llib/trace.scm 98 */
								return
									BGl_errorz00zz__errorz00(BGl_symbol1750z00zz__tracez00,
									BGl_string1752z00zz__tracez00, BgL_keyz00_1594);
							}
					}
				}
			}
		}

	}



/* &trace-port */
	obj_t BGl_z62tracezd2portzb0zz__tracez00(obj_t BgL_envz00_2033)
	{
		{	/* Llib/trace.scm 114 */
			return BGl_tracezd2portzd2zz__tracez00();
		}

	}



/* trace-port-set! */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2portzd2setz12z12zz__tracez00(obj_t
		BgL_pz00_8)
	{
		{	/* Llib/trace.scm 120 */
			{	/* Llib/trace.scm 121 */
				obj_t BgL_arg1190z00_1599;

				BgL_arg1190z00_1599 = BGl_tracezd2alistzd2zz__tracez00();
				{	/* Llib/trace.scm 121 */
					obj_t BgL_keyz00_1600;

					BgL_keyz00_1600 = BGl_symbol1741z00zz__tracez00;
					{	/* Llib/trace.scm 106 */
						obj_t BgL_cz00_1601;

						BgL_cz00_1601 =
							BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1600,
							BgL_arg1190z00_1599);
						if (PAIRP(BgL_cz00_1601))
							{	/* Llib/trace.scm 107 */
								return SET_CDR(BgL_cz00_1601, BgL_pz00_8);
							}
						else
							{	/* Llib/trace.scm 107 */
								return
									BGl_errorz00zz__errorz00(BGl_symbol1753z00zz__tracez00,
									BGl_string1752z00zz__tracez00, BgL_keyz00_1600);
							}
					}
				}
			}
		}

	}



/* &trace-port-set! */
	obj_t BGl_z62tracezd2portzd2setz12z70zz__tracez00(obj_t BgL_envz00_2034,
		obj_t BgL_pz00_2035)
	{
		{	/* Llib/trace.scm 120 */
			{	/* Llib/trace.scm 121 */
				obj_t BgL_auxz00_2182;

				if (OUTPUT_PORTP(BgL_pz00_2035))
					{	/* Llib/trace.scm 121 */
						BgL_auxz00_2182 = BgL_pz00_2035;
					}
				else
					{
						obj_t BgL_auxz00_2185;

						BgL_auxz00_2185 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1755z00zz__tracez00,
							BINT(((long) 4543)), BGl_string1756z00zz__tracez00,
							BGl_string1757z00zz__tracez00, BgL_pz00_2035);
						FAILURE(BgL_auxz00_2185, BFALSE, BFALSE);
					}
				return BGl_tracezd2portzd2setz12z12zz__tracez00(BgL_auxz00_2182);
			}
		}

	}



/* trace-margin */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2marginzd2zz__tracez00()
	{
		{	/* Llib/trace.scm 126 */
			{	/* Llib/trace.scm 127 */
				obj_t BgL_arg1194z00_1605;

				BgL_arg1194z00_1605 = BGl_tracezd2alistzd2zz__tracez00();
				{	/* Llib/trace.scm 127 */
					obj_t BgL_keyz00_1606;

					BgL_keyz00_1606 = BGl_symbol1745z00zz__tracez00;
					{	/* Llib/trace.scm 97 */
						obj_t BgL_cz00_1607;

						BgL_cz00_1607 =
							BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1606,
							BgL_arg1194z00_1605);
						if (PAIRP(BgL_cz00_1607))
							{	/* Llib/trace.scm 98 */
								return CDR(BgL_cz00_1607);
							}
						else
							{	/* Llib/trace.scm 98 */
								return
									BGl_errorz00zz__errorz00(BGl_symbol1750z00zz__tracez00,
									BGl_string1752z00zz__tracez00, BgL_keyz00_1606);
							}
					}
				}
			}
		}

	}



/* &trace-margin */
	obj_t BGl_z62tracezd2marginzb0zz__tracez00(obj_t BgL_envz00_2036)
	{
		{	/* Llib/trace.scm 126 */
			return BGl_tracezd2marginzd2zz__tracez00();
		}

	}



/* trace-margin-set! */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2marginzd2setz12z12zz__tracez00(obj_t
		BgL_mz00_9)
	{
		{	/* Llib/trace.scm 132 */
			{	/* Llib/trace.scm 133 */
				obj_t BgL_arg1197z00_1611;

				BgL_arg1197z00_1611 = BGl_tracezd2alistzd2zz__tracez00();
				{	/* Llib/trace.scm 133 */
					obj_t BgL_keyz00_1612;

					BgL_keyz00_1612 = BGl_symbol1745z00zz__tracez00;
					{	/* Llib/trace.scm 106 */
						obj_t BgL_cz00_1613;

						BgL_cz00_1613 =
							BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1612,
							BgL_arg1197z00_1611);
						if (PAIRP(BgL_cz00_1613))
							{	/* Llib/trace.scm 107 */
								return SET_CDR(BgL_cz00_1613, BgL_mz00_9);
							}
						else
							{	/* Llib/trace.scm 107 */
								return
									BGl_errorz00zz__errorz00(BGl_symbol1753z00zz__tracez00,
									BGl_string1752z00zz__tracez00, BgL_keyz00_1612);
							}
					}
				}
			}
		}

	}



/* &trace-margin-set! */
	obj_t BGl_z62tracezd2marginzd2setz12z70zz__tracez00(obj_t BgL_envz00_2037,
		obj_t BgL_mz00_2038)
	{
		{	/* Llib/trace.scm 132 */
			{	/* Llib/trace.scm 133 */
				obj_t BgL_auxz00_2203;

				if (STRINGP(BgL_mz00_2038))
					{	/* Llib/trace.scm 133 */
						BgL_auxz00_2203 = BgL_mz00_2038;
					}
				else
					{
						obj_t BgL_auxz00_2206;

						BgL_auxz00_2206 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1755z00zz__tracez00,
							BINT(((long) 5131)), BGl_string1758z00zz__tracez00,
							BGl_string1759z00zz__tracez00, BgL_mz00_2038);
						FAILURE(BgL_auxz00_2206, BFALSE, BFALSE);
					}
				return BGl_tracezd2marginzd2setz12z12zz__tracez00(BgL_auxz00_2203);
			}
		}

	}



/* trace-color */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2colorzd2zz__tracez00(int BgL_colz00_10,
		obj_t BgL_oz00_11)
	{
		{	/* Llib/trace.scm 138 */
			{	/* Llib/trace.scm 140 */
				obj_t BgL_arg1201z00_1081;

				if (BGl_bigloozd2tracezd2colorz00zz__paramz00())
					{	/* Llib/trace.scm 141 */
						obj_t BgL_zc3z04anonymousza31203ze3z87_2039;

						BgL_zc3z04anonymousza31203ze3z87_2039 =
							MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31203ze3ze5zz__tracez00,
							(int) (((long) 0)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31203ze3z87_2039,
							(int) (((long) 0)), BINT(BgL_colz00_10));
						PROCEDURE_SET(BgL_zc3z04anonymousza31203ze3z87_2039,
							(int) (((long) 1)), BgL_oz00_11);
						BgL_arg1201z00_1081 = BgL_zc3z04anonymousza31203ze3z87_2039;
					}
				else
					{	/* Llib/trace.scm 145 */
						obj_t BgL_zc3z04anonymousza31226ze3z87_2040;

						BgL_zc3z04anonymousza31226ze3z87_2040 =
							MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31226ze3ze5zz__tracez00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31226ze3z87_2040,
							(int) (((long) 0)), BgL_oz00_11);
						BgL_arg1201z00_1081 = BgL_zc3z04anonymousza31226ze3z87_2040;
					}
				return
					BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
					(BgL_arg1201z00_1081);
			}
		}

	}



/* &trace-color */
	obj_t BGl_z62tracezd2colorzb0zz__tracez00(obj_t BgL_envz00_2041,
		obj_t BgL_colz00_2042, obj_t BgL_oz00_2043)
	{
		{	/* Llib/trace.scm 138 */
			{	/* Llib/trace.scm 140 */
				int BgL_auxz00_2227;

				{	/* Llib/trace.scm 140 */
					obj_t BgL_tmpz00_2228;

					if (INTEGERP(BgL_colz00_2042))
						{	/* Llib/trace.scm 140 */
							BgL_tmpz00_2228 = BgL_colz00_2042;
						}
					else
						{
							obj_t BgL_auxz00_2231;

							BgL_auxz00_2231 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1755z00zz__tracez00,
								BINT(((long) 5447)), BGl_string1760z00zz__tracez00,
								BGl_string1761z00zz__tracez00, BgL_colz00_2042);
							FAILURE(BgL_auxz00_2231, BFALSE, BFALSE);
						}
					BgL_auxz00_2227 = CINT(BgL_tmpz00_2228);
				}
				return BGl_tracezd2colorzd2zz__tracez00(BgL_auxz00_2227, BgL_oz00_2043);
			}
		}

	}



/* &<@anonymous:1203> */
	obj_t BGl_z62zc3z04anonymousza31203ze3ze5zz__tracez00(obj_t BgL_envz00_2044)
	{
		{	/* Llib/trace.scm 141 */
			{	/* Llib/trace.scm 142 */
				int BgL_colz00_2045;
				obj_t BgL_oz00_2046;

				BgL_colz00_2045 =
					CINT(PROCEDURE_REF(BgL_envz00_2044, (int) (((long) 0))));
				BgL_oz00_2046 = PROCEDURE_REF(BgL_envz00_2044, (int) (((long) 1)));
				{	/* Llib/trace.scm 142 */
					long BgL_arg1208z00_2090;

					BgL_arg1208z00_2090 = (((long) 31) + (long) (BgL_colz00_2045));
					{	/* Llib/trace.scm 142 */
						obj_t BgL_list1209z00_2091;

						{	/* Llib/trace.scm 142 */
							obj_t BgL_arg1211z00_2092;

							{	/* Llib/trace.scm 142 */
								obj_t BgL_arg1216z00_2093;

								BgL_arg1216z00_2093 =
									MAKE_YOUNG_PAIR(BGl_string1762z00zz__tracez00, BNIL);
								BgL_arg1211z00_2092 =
									MAKE_YOUNG_PAIR(BINT(BgL_arg1208z00_2090),
									BgL_arg1216z00_2093);
							}
							BgL_list1209z00_2091 =
								MAKE_YOUNG_PAIR(BGl_string1763z00zz__tracez00,
								BgL_arg1211z00_2092);
						}
						BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list1209z00_2091);
				}}
				{
					obj_t BgL_l1073z00_2095;

					BgL_l1073z00_2095 = BgL_oz00_2046;
				BgL_zc3z04anonymousza31217ze3z87_2094:
					if (PAIRP(BgL_l1073z00_2095))
						{	/* Llib/trace.scm 143 */
							{	/* Llib/trace.scm 143 */
								obj_t BgL_arg1221z00_2096;

								BgL_arg1221z00_2096 = CAR(BgL_l1073z00_2095);
								{	/* Llib/trace.scm 143 */
									obj_t BgL_portz00_2097;

									{	/* Llib/trace.scm 143 */
										obj_t BgL_res1641z00_2098;

										{	/* Llib/trace.scm 143 */
											obj_t BgL_tmpz00_2252;

											BgL_tmpz00_2252 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res1641z00_2098 =
												BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2252);
										}
										BgL_portz00_2097 = BgL_res1641z00_2098;
									}
									{	/* Llib/trace.scm 143 */

										BGl_displayzd2circlezd2zz__pp_circlez00(BgL_arg1221z00_2096,
											BgL_portz00_2097);
									}
								}
							}
							{
								obj_t BgL_l1073z00_2256;

								BgL_l1073z00_2256 = CDR(BgL_l1073z00_2095);
								BgL_l1073z00_2095 = BgL_l1073z00_2256;
								goto BgL_zc3z04anonymousza31217ze3z87_2094;
							}
						}
					else
						{	/* Llib/trace.scm 143 */
							((bool_t) 1);
						}
				}
				{	/* Llib/trace.scm 144 */
					obj_t BgL_arg1225z00_2099;

					{	/* Llib/trace.scm 144 */
						obj_t BgL_res1642z00_2100;

						{	/* Llib/trace.scm 144 */
							obj_t BgL_tmpz00_2258;

							BgL_tmpz00_2258 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1642z00_2100 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2258);
						}
						BgL_arg1225z00_2099 = BgL_res1642z00_2100;
					}
					return
						bgl_display_string(BGl_string1764z00zz__tracez00,
						BgL_arg1225z00_2099);
				}
			}
		}

	}



/* &<@anonymous:1226> */
	obj_t BGl_z62zc3z04anonymousza31226ze3ze5zz__tracez00(obj_t BgL_envz00_2047)
	{
		{	/* Llib/trace.scm 145 */
			{	/* Llib/trace.scm 146 */
				obj_t BgL_oz00_2048;

				BgL_oz00_2048 = PROCEDURE_REF(BgL_envz00_2047, (int) (((long) 0)));
				{	/* Llib/trace.scm 146 */
					bool_t BgL_tmpz00_2264;

					{
						obj_t BgL_l1075z00_2102;

						BgL_l1075z00_2102 = BgL_oz00_2048;
					BgL_zc3z04anonymousza31227ze3z87_2101:
						if (PAIRP(BgL_l1075z00_2102))
							{	/* Llib/trace.scm 146 */
								{	/* Llib/trace.scm 146 */
									obj_t BgL_arg1229z00_2103;

									BgL_arg1229z00_2103 = CAR(BgL_l1075z00_2102);
									{	/* Llib/trace.scm 146 */
										obj_t BgL_portz00_2104;

										{	/* Llib/trace.scm 146 */
											obj_t BgL_res1644z00_2105;

											{	/* Llib/trace.scm 146 */
												obj_t BgL_tmpz00_2268;

												BgL_tmpz00_2268 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res1644z00_2105 =
													BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2268);
											}
											BgL_portz00_2104 = BgL_res1644z00_2105;
										}
										{	/* Llib/trace.scm 146 */

											BGl_displayzd2circlezd2zz__pp_circlez00
												(BgL_arg1229z00_2103, BgL_portz00_2104);
										}
									}
								}
								{
									obj_t BgL_l1075z00_2272;

									BgL_l1075z00_2272 = CDR(BgL_l1075z00_2102);
									BgL_l1075z00_2102 = BgL_l1075z00_2272;
									goto BgL_zc3z04anonymousza31227ze3z87_2101;
								}
							}
						else
							{	/* Llib/trace.scm 146 */
								BgL_tmpz00_2264 = ((bool_t) 1);
							}
					}
					return BBOOL(BgL_tmpz00_2264);
				}
			}
		}

	}



/* trace-bold */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2boldzd2zz__tracez00(obj_t BgL_oz00_12)
	{
		{	/* Llib/trace.scm 151 */
			{	/* Llib/trace.scm 152 */
				obj_t BgL_runner1235z00_1633;

				{	/* Llib/trace.scm 152 */
					obj_t BgL_list1233z00_1634;

					BgL_list1233z00_1634 = MAKE_YOUNG_PAIR(BgL_oz00_12, BNIL);
					BgL_runner1235z00_1633 =
						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) -30)),
						BgL_list1233z00_1634);
				}
				{	/* Llib/trace.scm 152 */
					int BgL_aux1234z00_1635;

					{	/* Llib/trace.scm 152 */
						obj_t BgL_pairz00_1636;

						BgL_pairz00_1636 = BgL_runner1235z00_1633;
						BgL_aux1234z00_1635 = CINT(CAR(BgL_pairz00_1636));
					}
					BgL_runner1235z00_1633 = CDR(BgL_runner1235z00_1633);
					return
						BGl_tracezd2colorzd2zz__tracez00(BgL_aux1234z00_1635,
						BgL_runner1235z00_1633);
				}
			}
		}

	}



/* &trace-bold */
	obj_t BGl_z62tracezd2boldzb0zz__tracez00(obj_t BgL_envz00_2049,
		obj_t BgL_oz00_2050)
	{
		{	/* Llib/trace.scm 151 */
			return BGl_tracezd2boldzd2zz__tracez00(BgL_oz00_2050);
		}

	}



/* tty-trace-color */
	obj_t BGl_ttyzd2tracezd2colorz00zz__tracez00(int BgL_colz00_13,
		obj_t BgL_oz00_14)
	{
		{	/* Llib/trace.scm 157 */
			{	/* Llib/trace.scm 158 */
				bool_t BgL_test1820z00_2283;

				{	/* Llib/trace.scm 158 */
					obj_t BgL_arg1253z00_1128;

					{	/* Llib/trace.scm 158 */
						obj_t BgL_res1646z00_1644;

						{	/* Llib/trace.scm 115 */
							obj_t BgL_arg1186z00_1638;

							BgL_arg1186z00_1638 = BGl_tracezd2alistzd2zz__tracez00();
							{	/* Llib/trace.scm 115 */
								obj_t BgL_keyz00_1639;

								BgL_keyz00_1639 = BGl_symbol1741z00zz__tracez00;
								{	/* Llib/trace.scm 97 */
									obj_t BgL_cz00_1640;

									BgL_cz00_1640 =
										BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1639,
										BgL_arg1186z00_1638);
									if (PAIRP(BgL_cz00_1640))
										{	/* Llib/trace.scm 98 */
											BgL_res1646z00_1644 = CDR(BgL_cz00_1640);
										}
									else
										{	/* Llib/trace.scm 98 */
											BgL_res1646z00_1644 =
												BGl_errorz00zz__errorz00(BGl_symbol1750z00zz__tracez00,
												BGl_string1752z00zz__tracez00, BgL_keyz00_1639);
										}
								}
							}
						}
						BgL_arg1253z00_1128 = BgL_res1646z00_1644;
					}
					{	/* Llib/trace.scm 158 */
						bool_t BgL_res1647z00_1646;

						BgL_res1647z00_1646 = bgl_port_isatty(BgL_arg1253z00_1128);
						BgL_test1820z00_2283 = BgL_res1647z00_1646;
					}
				}
				if (BgL_test1820z00_2283)
					{	/* Llib/trace.scm 159 */
						obj_t BgL_runner1243z00_1115;

						{	/* Llib/trace.scm 159 */
							obj_t BgL_list1241z00_1113;

							BgL_list1241z00_1113 = MAKE_YOUNG_PAIR(BgL_oz00_14, BNIL);
							BgL_runner1243z00_1115 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(BgL_colz00_13),
								BgL_list1241z00_1113);
						}
						{	/* Llib/trace.scm 159 */
							int BgL_aux1242z00_1114;

							{	/* Llib/trace.scm 159 */
								obj_t BgL_pairz00_1647;

								BgL_pairz00_1647 = BgL_runner1243z00_1115;
								BgL_aux1242z00_1114 = CINT(CAR(BgL_pairz00_1647));
							}
							BgL_runner1243z00_1115 = CDR(BgL_runner1243z00_1115);
							return
								BGl_tracezd2colorzd2zz__tracez00(BgL_aux1242z00_1114,
								BgL_runner1243z00_1115);
						}
					}
				else
					{	/* Llib/trace.scm 162 */
						obj_t BgL_zc3z04anonymousza31246ze3z87_2051;

						BgL_zc3z04anonymousza31246ze3z87_2051 =
							MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31246ze3ze5zz__tracez00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31246ze3z87_2051,
							(int) (((long) 0)), BgL_oz00_14);
						return
							BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
							(BgL_zc3z04anonymousza31246ze3z87_2051);
					}
			}
		}

	}



/* &<@anonymous:1246> */
	obj_t BGl_z62zc3z04anonymousza31246ze3ze5zz__tracez00(obj_t BgL_envz00_2052)
	{
		{	/* Llib/trace.scm 161 */
			{	/* Llib/trace.scm 162 */
				obj_t BgL_oz00_2053;

				BgL_oz00_2053 = PROCEDURE_REF(BgL_envz00_2052, (int) (((long) 0)));
				{	/* Llib/trace.scm 162 */
					bool_t BgL_tmpz00_2306;

					{
						obj_t BgL_l1077z00_2107;

						BgL_l1077z00_2107 = BgL_oz00_2053;
					BgL_zc3z04anonymousza31247ze3z87_2106:
						if (PAIRP(BgL_l1077z00_2107))
							{	/* Llib/trace.scm 162 */
								{	/* Llib/trace.scm 162 */
									obj_t BgL_arg1250z00_2108;

									BgL_arg1250z00_2108 = CAR(BgL_l1077z00_2107);
									{	/* Llib/trace.scm 162 */
										obj_t BgL_portz00_2109;

										{	/* Llib/trace.scm 162 */
											obj_t BgL_res1649z00_2110;

											{	/* Llib/trace.scm 162 */
												obj_t BgL_tmpz00_2310;

												BgL_tmpz00_2310 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res1649z00_2110 =
													BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2310);
											}
											BgL_portz00_2109 = BgL_res1649z00_2110;
										}
										{	/* Llib/trace.scm 162 */

											BGl_displayzd2circlezd2zz__pp_circlez00
												(BgL_arg1250z00_2108, BgL_portz00_2109);
										}
									}
								}
								{
									obj_t BgL_l1077z00_2314;

									BgL_l1077z00_2314 = CDR(BgL_l1077z00_2107);
									BgL_l1077z00_2107 = BgL_l1077z00_2314;
									goto BgL_zc3z04anonymousza31247ze3z87_2106;
								}
							}
						else
							{	/* Llib/trace.scm 162 */
								BgL_tmpz00_2306 = ((bool_t) 1);
							}
					}
					return BBOOL(BgL_tmpz00_2306);
				}
			}
		}

	}



/* trace-string */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2stringzd2zz__tracez00(obj_t BgL_oz00_15)
	{
		{	/* Llib/trace.scm 167 */
			{	/* Llib/trace.scm 170 */
				obj_t BgL_zc3z04anonymousza31255ze3z87_2054;

				BgL_zc3z04anonymousza31255ze3z87_2054 =
					MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31255ze3ze5zz__tracez00,
					(int) (((long) 0)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31255ze3z87_2054,
					(int) (((long) 0)), BgL_oz00_15);
				return
					BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
					(BgL_zc3z04anonymousza31255ze3z87_2054);
			}
		}

	}



/* &trace-string */
	obj_t BGl_z62tracezd2stringzb0zz__tracez00(obj_t BgL_envz00_2055,
		obj_t BgL_oz00_2056)
	{
		{	/* Llib/trace.scm 167 */
			return BGl_tracezd2stringzd2zz__tracez00(BgL_oz00_2056);
		}

	}



/* &<@anonymous:1255> */
	obj_t BGl_z62zc3z04anonymousza31255ze3ze5zz__tracez00(obj_t BgL_envz00_2057)
	{
		{	/* Llib/trace.scm 169 */
			return
				BGl_writez00zz__r4_output_6_10_3z00(PROCEDURE_REF(BgL_envz00_2057,
					(int) (((long) 0))), BNIL);
		}

	}



/* trace-item */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2itemzd2zz__tracez00(obj_t BgL_argsz00_16)
	{
		{	/* Llib/trace.scm 175 */
			{	/* Llib/trace.scm 176 */
				bool_t BgL_test1823z00_2327;

				{	/* Llib/trace.scm 176 */
					int BgL_arg1280z00_1153;

					BgL_arg1280z00_1153 = bgl_debug();
					BgL_test1823z00_2327 = ((long) (BgL_arg1280z00_1153) > ((long) 0));
				}
				if (BgL_test1823z00_2327)
					{	/* Llib/trace.scm 177 */
						obj_t BgL_alz00_1135;

						BgL_alz00_1135 = BGl_tracezd2alistzd2zz__tracez00();
						{	/* Llib/trace.scm 178 */
							bool_t BgL_test1824z00_2332;

							{	/* Llib/trace.scm 178 */
								obj_t BgL_arg1277z00_1152;

								{	/* Llib/trace.scm 178 */
									obj_t BgL_keyz00_1659;

									BgL_keyz00_1659 = BGl_symbol1748z00zz__tracez00;
									{	/* Llib/trace.scm 97 */
										obj_t BgL_cz00_1660;

										BgL_cz00_1660 =
											BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1659,
											BgL_alz00_1135);
										if (PAIRP(BgL_cz00_1660))
											{	/* Llib/trace.scm 98 */
												BgL_arg1277z00_1152 = CDR(BgL_cz00_1660);
											}
										else
											{	/* Llib/trace.scm 98 */
												BgL_arg1277z00_1152 =
													BGl_errorz00zz__errorz00
													(BGl_symbol1750z00zz__tracez00,
													BGl_string1752z00zz__tracez00, BgL_keyz00_1659);
											}
									}
								}
								BgL_test1824z00_2332 =
									CBOOL(BGl_tracezd2activezf3z21zz__tracez00
									(BgL_arg1277z00_1152));
							}
							if (BgL_test1824z00_2332)
								{	/* Llib/trace.scm 179 */
									obj_t BgL_pz00_1138;

									{	/* Llib/trace.scm 179 */
										obj_t BgL_res1653z00_1670;

										{	/* Llib/trace.scm 115 */
											obj_t BgL_arg1186z00_1664;

											BgL_arg1186z00_1664 = BGl_tracezd2alistzd2zz__tracez00();
											{	/* Llib/trace.scm 115 */
												obj_t BgL_keyz00_1665;

												BgL_keyz00_1665 = BGl_symbol1741z00zz__tracez00;
												{	/* Llib/trace.scm 97 */
													obj_t BgL_cz00_1666;

													BgL_cz00_1666 =
														BGl_assqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_keyz00_1665, BgL_arg1186z00_1664);
													if (PAIRP(BgL_cz00_1666))
														{	/* Llib/trace.scm 98 */
															BgL_res1653z00_1670 = CDR(BgL_cz00_1666);
														}
													else
														{	/* Llib/trace.scm 98 */
															BgL_res1653z00_1670 =
																BGl_errorz00zz__errorz00
																(BGl_symbol1750z00zz__tracez00,
																BGl_string1752z00zz__tracez00, BgL_keyz00_1665);
														}
												}
											}
										}
										BgL_pz00_1138 = BgL_res1653z00_1670;
									}
									{	/* Llib/trace.scm 180 */
										obj_t BgL_mutex1265z00_1139;

										BgL_mutex1265z00_1139 =
											BGl_za2tracezd2mutexza2zd2zz__tracez00;
										{	/* Llib/trace.scm 180 */
											obj_t BgL_top1828z00_2347;

											BgL_top1828z00_2347 = BGL_EXITD_TOP_AS_OBJ();
											BGL_MUTEX_LOCK(BgL_mutex1265z00_1139);
											BGL_EXITD_PUSH_PROTECT(BgL_top1828z00_2347,
												BgL_mutex1265z00_1139);
											BUNSPEC;
											{	/* Llib/trace.scm 180 */
												obj_t BgL_tmp1827z00_2346;

												{	/* Llib/trace.scm 181 */
													obj_t BgL_arg1268z00_1140;

													{	/* Llib/trace.scm 181 */
														obj_t BgL_keyz00_1671;

														BgL_keyz00_1671 = BGl_symbol1745z00zz__tracez00;
														{	/* Llib/trace.scm 97 */
															obj_t BgL_cz00_1672;

															BgL_cz00_1672 =
																BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																(BgL_keyz00_1671, BgL_alz00_1135);
															if (PAIRP(BgL_cz00_1672))
																{	/* Llib/trace.scm 98 */
																	BgL_arg1268z00_1140 = CDR(BgL_cz00_1672);
																}
															else
																{	/* Llib/trace.scm 98 */
																	BgL_arg1268z00_1140 =
																		BGl_errorz00zz__errorz00
																		(BGl_symbol1750z00zz__tracez00,
																		BGl_string1752z00zz__tracez00,
																		BgL_keyz00_1671);
																}
														}
													}
													bgl_display_obj(BgL_arg1268z00_1140, BgL_pz00_1138);
												}
												{	/* Llib/trace.scm 182 */
													obj_t BgL_arg1270z00_1141;

													{	/* Llib/trace.scm 182 */
														long BgL_arg1271z00_1142;

														{	/* Llib/trace.scm 182 */
															obj_t BgL_arg1273z00_1144;

															{	/* Llib/trace.scm 182 */
																obj_t BgL_keyz00_1676;

																BgL_keyz00_1676 = BGl_symbol1743z00zz__tracez00;
																{	/* Llib/trace.scm 97 */
																	obj_t BgL_cz00_1677;

																	BgL_cz00_1677 =
																		BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																		(BgL_keyz00_1676, BgL_alz00_1135);
																	if (PAIRP(BgL_cz00_1677))
																		{	/* Llib/trace.scm 98 */
																			BgL_arg1273z00_1144 = CDR(BgL_cz00_1677);
																		}
																	else
																		{	/* Llib/trace.scm 98 */
																			BgL_arg1273z00_1144 =
																				BGl_errorz00zz__errorz00
																				(BGl_symbol1750z00zz__tracez00,
																				BGl_string1752z00zz__tracez00,
																				BgL_keyz00_1676);
																		}
																}
															}
															BgL_arg1271z00_1142 =
																((long) CINT(BgL_arg1273z00_1144) - ((long) 1));
														}
														{	/* Llib/trace.scm 182 */
															obj_t BgL_list1272z00_1143;

															BgL_list1272z00_1143 =
																MAKE_YOUNG_PAIR(BGl_string1765z00zz__tracez00,
																BNIL);
															BgL_arg1270z00_1141 =
																BGl_ttyzd2tracezd2colorz00zz__tracez00((int)
																(BgL_arg1271z00_1142), BgL_list1272z00_1143);
													}}
													bgl_display_obj(BgL_arg1270z00_1141, BgL_pz00_1138);
												}
												{
													obj_t BgL_l1079z00_1696;

													BgL_l1079z00_1696 = BgL_argsz00_16;
												BgL_zc3z04anonymousza31274ze3z87_1695:
													if (PAIRP(BgL_l1079z00_1696))
														{	/* Llib/trace.scm 183 */
															BGl_displayzd2circlezd2zz__pp_circlez00(CAR
																(BgL_l1079z00_1696), BgL_pz00_1138);
															{
																obj_t BgL_l1079z00_2372;

																BgL_l1079z00_2372 = CDR(BgL_l1079z00_1696);
																BgL_l1079z00_1696 = BgL_l1079z00_2372;
																goto BgL_zc3z04anonymousza31274ze3z87_1695;
															}
														}
													else
														{	/* Llib/trace.scm 183 */
															((bool_t) 1);
														}
												}
												bgl_display_char(((unsigned char) 10), BgL_pz00_1138);
												BgL_tmp1827z00_2346 =
													bgl_flush_output_port(BgL_pz00_1138);
												BGL_EXITD_POP_PROTECT(BgL_top1828z00_2347);
												BUNSPEC;
												BGL_MUTEX_UNLOCK(BgL_mutex1265z00_1139);
												return BgL_tmp1827z00_2346;
											}
										}
									}
								}
							else
								{	/* Llib/trace.scm 178 */
									return BFALSE;
								}
						}
					}
				else
					{	/* Llib/trace.scm 176 */
						return BFALSE;
					}
			}
		}

	}



/* &trace-item */
	obj_t BGl_z62tracezd2itemzb0zz__tracez00(obj_t BgL_envz00_2059,
		obj_t BgL_argsz00_2060)
	{
		{	/* Llib/trace.scm 175 */
			return BGl_tracezd2itemzd2zz__tracez00(BgL_argsz00_2060);
		}

	}



/* trace-active? */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2activezf3z21zz__tracez00(obj_t
		BgL_lvlz00_17)
	{
		{	/* Llib/trace.scm 190 */
			if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_lvlz00_17))
				{	/* Llib/trace.scm 192 */
					int BgL_arg1282z00_1155;

					BgL_arg1282z00_1155 = bgl_debug();
					return
						BBOOL(((long) (BgL_arg1282z00_1155) >= (long) CINT(BgL_lvlz00_17)));
				}
			else
				{	/* Llib/trace.scm 192 */
					if (SYMBOLP(BgL_lvlz00_17))
						{	/* Llib/trace.scm 193 */
							return
								BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_lvlz00_17,
								BGl_bigloozd2tracezd2zz__paramz00());
						}
					else
						{	/* Llib/trace.scm 193 */
							return BFALSE;
						}
				}
		}

	}



/* &trace-active? */
	obj_t BGl_z62tracezd2activezf3z43zz__tracez00(obj_t BgL_envz00_2061,
		obj_t BgL_lvlz00_2062)
	{
		{	/* Llib/trace.scm 190 */
			return BGl_tracezd2activezf3z21zz__tracez00(BgL_lvlz00_2062);
		}

	}



/* %with-trace */
	BGL_EXPORTED_DEF obj_t BGl_z52withzd2tracez80zz__tracez00(obj_t BgL_lvlz00_18,
		obj_t BgL_lblz00_19, obj_t BgL_thunkz00_20)
	{
		{	/* Llib/trace.scm 198 */
			{	/* Llib/trace.scm 199 */
				obj_t BgL_alz00_1158;

				BgL_alz00_1158 = BGl_tracezd2alistzd2zz__tracez00();
				{	/* Llib/trace.scm 199 */
					obj_t BgL_olz00_1159;

					{	/* Llib/trace.scm 200 */
						obj_t BgL_keyz00_1712;

						BgL_keyz00_1712 = BGl_symbol1748z00zz__tracez00;
						{	/* Llib/trace.scm 97 */
							obj_t BgL_cz00_1713;

							BgL_cz00_1713 =
								BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1712,
								BgL_alz00_1158);
							if (PAIRP(BgL_cz00_1713))
								{	/* Llib/trace.scm 98 */
									BgL_olz00_1159 = CDR(BgL_cz00_1713);
								}
							else
								{	/* Llib/trace.scm 98 */
									BgL_olz00_1159 =
										BGl_errorz00zz__errorz00(BGl_symbol1750z00zz__tracez00,
										BGl_string1752z00zz__tracez00, BgL_keyz00_1712);
								}
						}
					}
					{	/* Llib/trace.scm 200 */

						{	/* Llib/trace.scm 201 */
							obj_t BgL_keyz00_1717;

							BgL_keyz00_1717 = BGl_symbol1748z00zz__tracez00;
							{	/* Llib/trace.scm 106 */
								obj_t BgL_cz00_1718;

								BgL_cz00_1718 =
									BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1717,
									BgL_alz00_1158);
								if (PAIRP(BgL_cz00_1718))
									{	/* Llib/trace.scm 107 */
										SET_CDR(BgL_cz00_1718, BgL_lvlz00_18);
									}
								else
									{	/* Llib/trace.scm 107 */
										BGl_errorz00zz__errorz00(BGl_symbol1753z00zz__tracez00,
											BGl_string1752z00zz__tracez00, BgL_keyz00_1717);
									}
							}
						}
						if (CBOOL(BGl_tracezd2activezf3z21zz__tracez00(BgL_lvlz00_18)))
							{	/* Llib/trace.scm 203 */
								obj_t BgL_dz00_1161;

								{	/* Llib/trace.scm 203 */
									obj_t BgL_keyz00_1722;

									BgL_keyz00_1722 = BGl_symbol1743z00zz__tracez00;
									{	/* Llib/trace.scm 97 */
										obj_t BgL_cz00_1723;

										BgL_cz00_1723 =
											BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1722,
											BgL_alz00_1158);
										if (PAIRP(BgL_cz00_1723))
											{	/* Llib/trace.scm 98 */
												BgL_dz00_1161 = CDR(BgL_cz00_1723);
											}
										else
											{	/* Llib/trace.scm 98 */
												BgL_dz00_1161 =
													BGl_errorz00zz__errorz00
													(BGl_symbol1750z00zz__tracez00,
													BGl_string1752z00zz__tracez00, BgL_keyz00_1722);
											}
									}
								}
								{	/* Llib/trace.scm 203 */
									obj_t BgL_omz00_1162;

									{	/* Llib/trace.scm 204 */
										obj_t BgL_keyz00_1727;

										BgL_keyz00_1727 = BGl_symbol1745z00zz__tracez00;
										{	/* Llib/trace.scm 97 */
											obj_t BgL_cz00_1728;

											BgL_cz00_1728 =
												BGl_assqz00zz__r4_pairs_and_lists_6_3z00
												(BgL_keyz00_1727, BgL_alz00_1158);
											if (PAIRP(BgL_cz00_1728))
												{	/* Llib/trace.scm 98 */
													BgL_omz00_1162 = CDR(BgL_cz00_1728);
												}
											else
												{	/* Llib/trace.scm 98 */
													BgL_omz00_1162 =
														BGl_errorz00zz__errorz00
														(BGl_symbol1750z00zz__tracez00,
														BGl_string1752z00zz__tracez00, BgL_keyz00_1727);
												}
										}
									}
									{	/* Llib/trace.scm 204 */
										obj_t BgL_maz00_1163;

										{	/* Llib/trace.scm 205 */
											obj_t BgL_list1306z00_1187;

											BgL_list1306z00_1187 =
												MAKE_YOUNG_PAIR(BGl_string1766z00zz__tracez00, BNIL);
											BgL_maz00_1163 =
												BGl_ttyzd2tracezd2colorz00zz__tracez00(CINT
												(BgL_dz00_1161), BgL_list1306z00_1187);
										}
										{	/* Llib/trace.scm 205 */

											{	/* Llib/trace.scm 206 */
												obj_t BgL_mutex1286z00_1164;

												BgL_mutex1286z00_1164 =
													BGl_za2tracezd2mutexza2zd2zz__tracez00;
												{	/* Llib/trace.scm 206 */
													obj_t BgL_top1840z00_2419;

													BgL_top1840z00_2419 = BGL_EXITD_TOP_AS_OBJ();
													BGL_MUTEX_LOCK(BgL_mutex1286z00_1164);
													BGL_EXITD_PUSH_PROTECT(BgL_top1840z00_2419,
														BgL_mutex1286z00_1164);
													BUNSPEC;
													{	/* Llib/trace.scm 206 */
														obj_t BgL_tmp1839z00_2418;

														{	/* Llib/trace.scm 207 */
															obj_t BgL_arg1287z00_1165;

															{	/* Llib/trace.scm 207 */
																obj_t BgL_res1667z00_1738;

																{	/* Llib/trace.scm 115 */
																	obj_t BgL_arg1186z00_1732;

																	BgL_arg1186z00_1732 =
																		BGl_tracezd2alistzd2zz__tracez00();
																	{	/* Llib/trace.scm 115 */
																		obj_t BgL_keyz00_1733;

																		BgL_keyz00_1733 =
																			BGl_symbol1741z00zz__tracez00;
																		{	/* Llib/trace.scm 97 */
																			obj_t BgL_cz00_1734;

																			BgL_cz00_1734 =
																				BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																				(BgL_keyz00_1733, BgL_arg1186z00_1732);
																			if (PAIRP(BgL_cz00_1734))
																				{	/* Llib/trace.scm 98 */
																					BgL_res1667z00_1738 =
																						CDR(BgL_cz00_1734);
																				}
																			else
																				{	/* Llib/trace.scm 98 */
																					BgL_res1667z00_1738 =
																						BGl_errorz00zz__errorz00
																						(BGl_symbol1750z00zz__tracez00,
																						BGl_string1752z00zz__tracez00,
																						BgL_keyz00_1733);
																				}
																		}
																	}
																}
																BgL_arg1287z00_1165 = BgL_res1667z00_1738;
															}
															{	/* Llib/trace.scm 209 */
																obj_t BgL_zc3z04anonymousza31289ze3z87_2064;

																BgL_zc3z04anonymousza31289ze3z87_2064 =
																	MAKE_FX_PROCEDURE
																	(BGl_z62zc3z04anonymousza31289ze3ze5zz__tracez00,
																	(int) (((long) 0)), (int) (((long) 3)));
																PROCEDURE_SET
																	(BgL_zc3z04anonymousza31289ze3z87_2064,
																	(int) (((long) 0)), BgL_alz00_1158);
																PROCEDURE_SET
																	(BgL_zc3z04anonymousza31289ze3z87_2064,
																	(int) (((long) 1)), BgL_lblz00_19);
																PROCEDURE_SET
																	(BgL_zc3z04anonymousza31289ze3z87_2064,
																	(int) (((long) 2)), BgL_dz00_1161);
																BgL_tmp1839z00_2418 =
																	BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00
																	(BgL_arg1287z00_1165,
																	BgL_zc3z04anonymousza31289ze3z87_2064);
														}}
														BGL_EXITD_POP_PROTECT(BgL_top1840z00_2419);
														BUNSPEC;
														BGL_MUTEX_UNLOCK(BgL_mutex1286z00_1164);
														BgL_tmp1839z00_2418;
											}}}
											{	/* Llib/trace.scm 215 */
												long BgL_arg1303z00_1180;

												BgL_arg1303z00_1180 =
													((long) CINT(BgL_dz00_1161) + ((long) 1));
												{	/* Llib/trace.scm 215 */
													obj_t BgL_keyz00_1758;

													BgL_keyz00_1758 = BGl_symbol1743z00zz__tracez00;
													{	/* Llib/trace.scm 106 */
														obj_t BgL_cz00_1759;

														BgL_cz00_1759 =
															BGl_assqz00zz__r4_pairs_and_lists_6_3z00
															(BgL_keyz00_1758, BgL_alz00_1158);
														if (PAIRP(BgL_cz00_1759))
															{	/* Llib/trace.scm 108 */
																obj_t BgL_tmpz00_2446;

																BgL_tmpz00_2446 = BINT(BgL_arg1303z00_1180);
																SET_CDR(BgL_cz00_1759, BgL_tmpz00_2446);
															}
														else
															{	/* Llib/trace.scm 107 */
																BGl_errorz00zz__errorz00
																	(BGl_symbol1753z00zz__tracez00,
																	BGl_string1752z00zz__tracez00,
																	BgL_keyz00_1758);
															}
													}
												}
											}
											{	/* Llib/trace.scm 216 */
												obj_t BgL_arg1304z00_1181;

												BgL_arg1304z00_1181 =
													string_append(BgL_omz00_1162, BgL_maz00_1163);
												{	/* Llib/trace.scm 216 */
													obj_t BgL_keyz00_1763;

													BgL_keyz00_1763 = BGl_symbol1745z00zz__tracez00;
													{	/* Llib/trace.scm 106 */
														obj_t BgL_cz00_1764;

														BgL_cz00_1764 =
															BGl_assqz00zz__r4_pairs_and_lists_6_3z00
															(BgL_keyz00_1763, BgL_alz00_1158);
														if (PAIRP(BgL_cz00_1764))
															{	/* Llib/trace.scm 107 */
																SET_CDR(BgL_cz00_1764, BgL_arg1304z00_1181);
															}
														else
															{	/* Llib/trace.scm 107 */
																BGl_errorz00zz__errorz00
																	(BGl_symbol1753z00zz__tracez00,
																	BGl_string1752z00zz__tracez00,
																	BgL_keyz00_1763);
															}
													}
												}
											}
											{	/* Llib/trace.scm 217 */
												obj_t BgL_exitd1039z00_1182;

												BgL_exitd1039z00_1182 = BGL_EXITD_TOP_AS_OBJ();
												{	/* Llib/trace.scm 220 */
													obj_t BgL_zc3z04anonymousza31305ze3z87_2063;

													BgL_zc3z04anonymousza31305ze3z87_2063 =
														MAKE_FX_PROCEDURE
														(BGl_z62zc3z04anonymousza31305ze3ze5zz__tracez00,
														(int) (((long) 0)), (int) (((long) 4)));
													PROCEDURE_SET(BgL_zc3z04anonymousza31305ze3z87_2063,
														(int) (((long) 0)), BgL_alz00_1158);
													PROCEDURE_SET(BgL_zc3z04anonymousza31305ze3z87_2063,
														(int) (((long) 1)), BgL_dz00_1161);
													PROCEDURE_SET(BgL_zc3z04anonymousza31305ze3z87_2063,
														(int) (((long) 2)), BgL_omz00_1162);
													PROCEDURE_SET(BgL_zc3z04anonymousza31305ze3z87_2063,
														(int) (((long) 3)), BgL_olz00_1159);
													BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
														(BgL_exitd1039z00_1182,
														BgL_zc3z04anonymousza31305ze3z87_2063);
													{	/* Llib/trace.scm 218 */
														obj_t BgL_tmp1041z00_1184;

														BgL_tmp1041z00_1184 =
															PROCEDURE_ENTRY(BgL_thunkz00_20) (BgL_thunkz00_20,
															BEOA);
														BGl_exitdzd2popzd2protectz12z12zz__bexitz00
															(BgL_exitd1039z00_1182);
														BGl_z62zc3z04anonymousza31305ze3ze5zz__tracez00
															(BgL_zc3z04anonymousza31305ze3z87_2063);
														return BgL_tmp1041z00_1184;
													}
												}
											}
										}
									}
								}
							}
						else
							{	/* Llib/trace.scm 223 */
								obj_t BgL_exitd1042z00_1188;

								BgL_exitd1042z00_1188 = BGL_EXITD_TOP_AS_OBJ();
								{	/* Llib/trace.scm 225 */
									obj_t BgL_zc3z04anonymousza31307ze3z87_2065;

									BgL_zc3z04anonymousza31307ze3z87_2065 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31307ze3ze5zz__tracez00,
										(int) (((long) 0)), (int) (((long) 2)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31307ze3z87_2065,
										(int) (((long) 0)), BgL_alz00_1158);
									PROCEDURE_SET(BgL_zc3z04anonymousza31307ze3z87_2065,
										(int) (((long) 1)), BgL_olz00_1159);
									BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
										(BgL_exitd1042z00_1188,
										BgL_zc3z04anonymousza31307ze3z87_2065);
									{	/* Llib/trace.scm 224 */
										obj_t BgL_tmp1044z00_1190;

										BgL_tmp1044z00_1190 =
											PROCEDURE_ENTRY(BgL_thunkz00_20) (BgL_thunkz00_20, BEOA);
										BGl_exitdzd2popzd2protectz12z12zz__bexitz00
											(BgL_exitd1042z00_1188);
										{	/* Llib/trace.scm 225 */
											obj_t BgL_keyz00_1788;

											BgL_keyz00_1788 = BGl_symbol1748z00zz__tracez00;
											{	/* Llib/trace.scm 106 */
												obj_t BgL_cz00_1789;

												BgL_cz00_1789 =
													BGl_assqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_keyz00_1788, BgL_alz00_1158);
												if (PAIRP(BgL_cz00_1789))
													{	/* Llib/trace.scm 107 */
														SET_CDR(BgL_cz00_1789, BgL_olz00_1159);
													}
												else
													{	/* Llib/trace.scm 107 */
														BGl_errorz00zz__errorz00
															(BGl_symbol1753z00zz__tracez00,
															BGl_string1752z00zz__tracez00, BgL_keyz00_1788);
													}
											}
										}
										return BgL_tmp1044z00_1190;
									}
								}
							}
					}
				}
			}
		}

	}



/* &%with-trace */
	obj_t BGl_z62z52withzd2traceze2zz__tracez00(obj_t BgL_envz00_2066,
		obj_t BgL_lvlz00_2067, obj_t BgL_lblz00_2068, obj_t BgL_thunkz00_2069)
	{
		{	/* Llib/trace.scm 198 */
			{	/* Llib/trace.scm 199 */
				obj_t BgL_auxz00_2492;

				if (PROCEDUREP(BgL_thunkz00_2069))
					{	/* Llib/trace.scm 199 */
						BgL_auxz00_2492 = BgL_thunkz00_2069;
					}
				else
					{
						obj_t BgL_auxz00_2495;

						BgL_auxz00_2495 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1755z00zz__tracez00,
							BINT(((long) 7925)), BGl_string1767z00zz__tracez00,
							BGl_string1768z00zz__tracez00, BgL_thunkz00_2069);
						FAILURE(BgL_auxz00_2495, BFALSE, BFALSE);
					}
				return
					BGl_z52withzd2tracez80zz__tracez00(BgL_lvlz00_2067, BgL_lblz00_2068,
					BgL_auxz00_2492);
			}
		}

	}



/* &<@anonymous:1305> */
	obj_t BGl_z62zc3z04anonymousza31305ze3ze5zz__tracez00(obj_t BgL_envz00_2070)
	{
		{	/* Llib/trace.scm 217 */
			{	/* Llib/trace.scm 220 */
				obj_t BgL_alz00_2071;
				obj_t BgL_dz00_2072;
				obj_t BgL_omz00_2073;
				obj_t BgL_olz00_2074;

				BgL_alz00_2071 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2070, (int) (((long) 0))));
				BgL_dz00_2072 = PROCEDURE_REF(BgL_envz00_2070, (int) (((long) 1)));
				BgL_omz00_2073 = PROCEDURE_REF(BgL_envz00_2070, (int) (((long) 2)));
				BgL_olz00_2074 = PROCEDURE_REF(BgL_envz00_2070, (int) (((long) 3)));
				{	/* Llib/trace.scm 220 */
					obj_t BgL_keyz00_2111;

					BgL_keyz00_2111 = BGl_symbol1743z00zz__tracez00;
					{	/* Llib/trace.scm 106 */
						obj_t BgL_cz00_2112;

						BgL_cz00_2112 =
							BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_2111,
							BgL_alz00_2071);
						if (PAIRP(BgL_cz00_2112))
							{	/* Llib/trace.scm 107 */
								SET_CDR(BgL_cz00_2112, BgL_dz00_2072);
							}
						else
							{	/* Llib/trace.scm 107 */
								BGl_errorz00zz__errorz00(BGl_symbol1753z00zz__tracez00,
									BGl_string1752z00zz__tracez00, BgL_keyz00_2111);
							}
					}
				}
				{	/* Llib/trace.scm 221 */
					obj_t BgL_keyz00_2113;

					BgL_keyz00_2113 = BGl_symbol1745z00zz__tracez00;
					{	/* Llib/trace.scm 106 */
						obj_t BgL_cz00_2114;

						BgL_cz00_2114 =
							BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_2113,
							BgL_alz00_2071);
						if (PAIRP(BgL_cz00_2114))
							{	/* Llib/trace.scm 107 */
								SET_CDR(BgL_cz00_2114, BgL_omz00_2073);
							}
						else
							{	/* Llib/trace.scm 107 */
								BGl_errorz00zz__errorz00(BGl_symbol1753z00zz__tracez00,
									BGl_string1752z00zz__tracez00, BgL_keyz00_2113);
							}
					}
				}
				{	/* Llib/trace.scm 222 */
					obj_t BgL_keyz00_2115;

					BgL_keyz00_2115 = BGl_symbol1748z00zz__tracez00;
					{	/* Llib/trace.scm 106 */
						obj_t BgL_cz00_2116;

						BgL_cz00_2116 =
							BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_2115,
							BgL_alz00_2071);
						if (PAIRP(BgL_cz00_2116))
							{	/* Llib/trace.scm 107 */
								return SET_CDR(BgL_cz00_2116, BgL_olz00_2074);
							}
						else
							{	/* Llib/trace.scm 107 */
								return
									BGl_errorz00zz__errorz00(BGl_symbol1753z00zz__tracez00,
									BGl_string1752z00zz__tracez00, BgL_keyz00_2115);
							}
					}
				}
			}
		}

	}



/* &<@anonymous:1289> */
	obj_t BGl_z62zc3z04anonymousza31289ze3ze5zz__tracez00(obj_t BgL_envz00_2075)
	{
		{	/* Llib/trace.scm 208 */
			{	/* Llib/trace.scm 209 */
				obj_t BgL_alz00_2076;
				obj_t BgL_lblz00_2077;
				obj_t BgL_dz00_2078;

				BgL_alz00_2076 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2075, (int) (((long) 0))));
				BgL_lblz00_2077 = PROCEDURE_REF(BgL_envz00_2075, (int) (((long) 1)));
				BgL_dz00_2078 = PROCEDURE_REF(BgL_envz00_2075, (int) (((long) 2)));
				{	/* Llib/trace.scm 209 */
					obj_t BgL_arg1290z00_2117;
					obj_t BgL_arg1291z00_2118;

					{	/* Llib/trace.scm 209 */
						obj_t BgL_keyz00_2119;

						BgL_keyz00_2119 = BGl_symbol1745z00zz__tracez00;
						{	/* Llib/trace.scm 97 */
							obj_t BgL_cz00_2120;

							BgL_cz00_2120 =
								BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_2119,
								BgL_alz00_2076);
							if (PAIRP(BgL_cz00_2120))
								{	/* Llib/trace.scm 98 */
									BgL_arg1290z00_2117 = CDR(BgL_cz00_2120);
								}
							else
								{	/* Llib/trace.scm 98 */
									BgL_arg1290z00_2117 =
										BGl_errorz00zz__errorz00(BGl_symbol1750z00zz__tracez00,
										BGl_string1752z00zz__tracez00, BgL_keyz00_2119);
								}
						}
					}
					{	/* Llib/trace.scm 209 */
						obj_t BgL_res1669z00_2121;

						{	/* Llib/trace.scm 209 */
							obj_t BgL_tmpz00_2536;

							BgL_tmpz00_2536 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1669z00_2121 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2536);
						}
						BgL_arg1291z00_2118 = BgL_res1669z00_2121;
					}
					bgl_display_obj(BgL_arg1290z00_2117, BgL_arg1291z00_2118);
				}
				{	/* Llib/trace.scm 210 */
					obj_t BgL_arg1292z00_2122;
					obj_t BgL_arg1295z00_2123;

					if (((long) CINT(BgL_dz00_2078) == ((long) 0)))
						{	/* Llib/trace.scm 211 */
							obj_t BgL_list1297z00_2124;

							{	/* Llib/trace.scm 211 */
								obj_t BgL_arg1298z00_2125;

								BgL_arg1298z00_2125 = MAKE_YOUNG_PAIR(BgL_lblz00_2077, BNIL);
								BgL_list1297z00_2124 =
									MAKE_YOUNG_PAIR(BGl_string1769z00zz__tracez00,
									BgL_arg1298z00_2125);
							}
							BgL_arg1292z00_2122 =
								BGl_ttyzd2tracezd2colorz00zz__tracez00(CINT(BgL_dz00_2078),
								BgL_list1297z00_2124);
						}
					else
						{	/* Llib/trace.scm 212 */
							obj_t BgL_list1299z00_2126;

							{	/* Llib/trace.scm 212 */
								obj_t BgL_arg1300z00_2127;

								BgL_arg1300z00_2127 = MAKE_YOUNG_PAIR(BgL_lblz00_2077, BNIL);
								BgL_list1299z00_2126 =
									MAKE_YOUNG_PAIR(BGl_string1770z00zz__tracez00,
									BgL_arg1300z00_2127);
							}
							BgL_arg1292z00_2122 =
								BGl_ttyzd2tracezd2colorz00zz__tracez00(CINT(BgL_dz00_2078),
								BgL_list1299z00_2126);
						}
					{	/* Llib/trace.scm 210 */
						obj_t BgL_res1671z00_2128;

						{	/* Llib/trace.scm 210 */
							obj_t BgL_tmpz00_2551;

							BgL_tmpz00_2551 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1671z00_2128 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2551);
						}
						BgL_arg1295z00_2123 = BgL_res1671z00_2128;
					}
					bgl_display_obj(BgL_arg1292z00_2122, BgL_arg1295z00_2123);
				}
				{	/* Llib/trace.scm 213 */
					obj_t BgL_arg1301z00_2129;

					{	/* Llib/trace.scm 213 */
						obj_t BgL_res1672z00_2130;

						{	/* Llib/trace.scm 213 */
							obj_t BgL_tmpz00_2555;

							BgL_tmpz00_2555 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1672z00_2130 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2555);
						}
						BgL_arg1301z00_2129 = BgL_res1672z00_2130;
					}
					bgl_display_char(((unsigned char) 10), BgL_arg1301z00_2129);
				}
				{	/* Llib/trace.scm 214 */
					obj_t BgL_arg1302z00_2131;

					{	/* Llib/trace.scm 214 */
						obj_t BgL_res1673z00_2132;

						{	/* Llib/trace.scm 214 */
							obj_t BgL_tmpz00_2559;

							BgL_tmpz00_2559 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1673z00_2132 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2559);
						}
						BgL_arg1302z00_2131 = BgL_res1673z00_2132;
					}
					return bgl_flush_output_port(BgL_arg1302z00_2131);
				}
			}
		}

	}



/* &<@anonymous:1307> */
	obj_t BGl_z62zc3z04anonymousza31307ze3ze5zz__tracez00(obj_t BgL_envz00_2079)
	{
		{	/* Llib/trace.scm 223 */
			{	/* Llib/trace.scm 225 */
				obj_t BgL_alz00_2080;
				obj_t BgL_olz00_2081;

				BgL_alz00_2080 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2079, (int) (((long) 0))));
				BgL_olz00_2081 = PROCEDURE_REF(BgL_envz00_2079, (int) (((long) 1)));
				{	/* Llib/trace.scm 225 */
					obj_t BgL_keyz00_2133;

					BgL_keyz00_2133 = BGl_symbol1748z00zz__tracez00;
					{	/* Llib/trace.scm 106 */
						obj_t BgL_cz00_2134;

						BgL_cz00_2134 =
							BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_2133,
							BgL_alz00_2080);
						if (PAIRP(BgL_cz00_2134))
							{	/* Llib/trace.scm 107 */
								return SET_CDR(BgL_cz00_2134, BgL_olz00_2081);
							}
						else
							{	/* Llib/trace.scm 107 */
								return
									BGl_errorz00zz__errorz00(BGl_symbol1753z00zz__tracez00,
									BGl_string1752z00zz__tracez00, BgL_keyz00_2133);
							}
					}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__tracez00()
	{
		{	/* Llib/trace.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__tracez00()
	{
		{	/* Llib/trace.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__tracez00()
	{
		{	/* Llib/trace.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__tracez00()
	{
		{	/* Llib/trace.scm 15 */
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1771z00zz__tracez00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1771z00zz__tracez00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1771z00zz__tracez00));
			return
				BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					86988972), BSTRING_TO_STRING(BGl_string1771z00zz__tracez00));
		}

	}

#ifdef __cplusplus
}
#endif
