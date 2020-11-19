/*===========================================================================*/
/*   (Llib/module.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/module.scm -indent -o objs/obj_u/Llib/module.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__modulez00 = BUNSPEC;
	static obj_t BGl_symbol1771z00zz__modulez00 = BUNSPEC;
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol1789z00zz__modulez00 = BUNSPEC;
	extern obj_t BGl_warningz00zz__errorz00(obj_t);
	extern obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol1791z00zz__modulez00 = BUNSPEC;
	static obj_t BGl_symbol1793z00zz__modulez00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zz__modulez00();
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__modulez00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_objectzd2initzd2zz__modulez00();
	static obj_t BGl_z52bigloozd2modulezd2resolverz52zz__modulez00 = BUNSPEC;
	extern obj_t BGl_dirnamez00zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2abasezd2setz12z12zz__modulez00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2modulezd2resolverzd2setz12zc0zz__modulez00(obj_t);
	extern obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	static obj_t BGl_modulezd2addzd2accesszd2innerz12zc0zz__modulez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__modulez00();
	static obj_t BGl_modulezd2readzd2accesszd2filezd2zz__modulez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2abasezd2zz__modulez00();
	static obj_t BGl_z62modulezd2defaultzd2resolverz62zz__modulez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62modulezd2loadzd2accesszd2filezb0zz__modulez00(obj_t,
		obj_t);
	static obj_t BGl_resolvezd2abaseza2z70zz__modulez00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31318ze3ze5zz__modulez00(obj_t, obj_t);
	extern obj_t string_append(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04z52bigloozd2modulezd2res1172ze3z14zz__modulez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_moduleszd2mutexzd2zz__modulez00 = BUNSPEC;
	static obj_t BGl_z62modulezd2addzd2accessz12z70zz__modulez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62bigloozd2modulezd2resolverzd2setz12za2zz__modulez00(obj_t,
		obj_t);
	static obj_t BGl_resolvezd2abasezf2bucketz20zz__modulez00(obj_t, obj_t);
	static obj_t BGl_za2afileszd2tableza2zd2zz__modulez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2modulezd2resolverz00zz__modulez00();
	extern obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern bool_t fexists(char *);
	static obj_t BGl_z62modulezd2abasezd2setz12z70zz__modulez00(obj_t, obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__modulez00();
	static obj_t BGl_list1788z00zz__modulez00 = BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zz__modulez00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__modulez00();
	extern bool_t bgl_directoryp(char *);
	extern obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62modulezd2abasezb0zz__modulez00(obj_t);
	extern obj_t BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_z62bigloozd2modulezd2resolverz62zz__modulez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(obj_t);
	static obj_t BGl_afilezd2tablezd2zz__modulez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2addzd2accessz12z12zz__modulez00(obj_t,
		obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_modulezd2abasezd2envz00zz__modulez00,
		BgL_bgl_za762moduleza7d2abas1805z00, BGl_z62modulezd2abasezb0zz__modulez00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2modulezd2resolverzd2setz12zd2envz12zz__modulez00,
		BgL_bgl_za762biglooza7d2modu1806z00,
		BGl_z62bigloozd2modulezd2resolverzd2setz12za2zz__modulez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1800z00zz__modulez00,
		BgL_bgl_string1800za700za7za7_1807za7, ".afile", 6);
	      DEFINE_STRING(BGl_string1801z00zz__modulez00,
		BgL_bgl_string1801za700za7za7_1808za7, "&module-load-access-file", 24);
	      DEFINE_STRING(BGl_string1802z00zz__modulez00,
		BgL_bgl_string1802za700za7za7_1809za7, "", 0);
	      DEFINE_STRING(BGl_string1803z00zz__modulez00,
		BgL_bgl_string1803za700za7za7_1810za7, "__module", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2modulezd2resolverzd2envzd2zz__modulez00,
		BgL_bgl_za762biglooza7d2modu1811z00,
		BGl_z62bigloozd2modulezd2resolverz62zz__modulez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2abasezd2setz12zd2envzc0zz__modulez00,
		BgL_bgl_za762moduleza7d2abas1812z00,
		BGl_z62modulezd2abasezd2setz12z70zz__modulez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2addzd2accessz12zd2envzc0zz__modulez00,
		BgL_bgl_za762moduleza7d2addza71813za7,
		BGl_z62modulezd2addzd2accessz12z70zz__modulez00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string1770z00zz__modulez00,
		BgL_bgl_string1770za700za7za7_1814za7, "modules", 7);
	      DEFINE_STRING(BGl_string1772z00zz__modulez00,
		BgL_bgl_string1772za700za7za7_1815za7, "bigloo-module-resolver-set!", 27);
	      DEFINE_STRING(BGl_string1773z00zz__modulez00,
		BgL_bgl_string1773za700za7za7_1816za7, "Illegal resolver", 16);
	      DEFINE_STRING(BGl_string1774z00zz__modulez00,
		BgL_bgl_string1774za700za7za7_1817za7, "/tmp/4.4a/runtime/Llib/module.scm",
		33);
	      DEFINE_STRING(BGl_string1775z00zz__modulez00,
		BgL_bgl_string1775za700za7za7_1818za7, "&bigloo-module-resolver-set!", 28);
	      DEFINE_STRING(BGl_string1776z00zz__modulez00,
		BgL_bgl_string1776za700za7za7_1819za7, "procedure", 9);
	      DEFINE_STRING(BGl_string1777z00zz__modulez00,
		BgL_bgl_string1777za700za7za7_1820za7, ".", 1);
	      DEFINE_STRING(BGl_string1778z00zz__modulez00,
		BgL_bgl_string1778za700za7za7_1821za7, "&module-default-resolver", 24);
	      DEFINE_STRING(BGl_string1779z00zz__modulez00,
		BgL_bgl_string1779za700za7za7_1822za7, "symbol", 6);
	      DEFINE_STRING(BGl_string1780z00zz__modulez00,
		BgL_bgl_string1780za700za7za7_1823za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string1781z00zz__modulez00,
		BgL_bgl_string1781za700za7za7_1824za7, ".scm", 4);
	      DEFINE_STRING(BGl_string1782z00zz__modulez00,
		BgL_bgl_string1782za700za7za7_1825za7, "\"", 1);
	      DEFINE_STRING(BGl_string1783z00zz__modulez00,
		BgL_bgl_string1783za700za7za7_1826za7, "] in directory \"", 16);
	      DEFINE_STRING(BGl_string1784z00zz__modulez00,
		BgL_bgl_string1784za700za7za7_1827za7, " ", 1);
	      DEFINE_STRING(BGl_string1785z00zz__modulez00,
		BgL_bgl_string1785za700za7za7_1828za7, " [", 2);
	      DEFINE_STRING(BGl_string1786z00zz__modulez00,
		BgL_bgl_string1786za700za7za7_1829za7, "access redefinition -- ", 23);
	      DEFINE_STRING(BGl_string1787z00zz__modulez00,
		BgL_bgl_string1787za700za7za7_1830za7, "add-access!", 11);
	      DEFINE_STRING(BGl_string1790z00zz__modulez00,
		BgL_bgl_string1790za700za7za7_1831za7, "set-cdr!", 8);
	      DEFINE_STRING(BGl_string1792z00zz__modulez00,
		BgL_bgl_string1792za700za7za7_1832za7, "cell", 4);
	      DEFINE_STRING(BGl_string1794z00zz__modulez00,
		BgL_bgl_string1794za700za7za7_1833za7, "files", 5);
	      DEFINE_STRING(BGl_string1795z00zz__modulez00,
		BgL_bgl_string1795za700za7za7_1834za7, "&module-add-access!", 19);
	      DEFINE_STRING(BGl_string1796z00zz__modulez00,
		BgL_bgl_string1796za700za7za7_1835za7, "pair", 4);
	      DEFINE_STRING(BGl_string1797z00zz__modulez00,
		BgL_bgl_string1797za700za7za7_1836za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1798z00zz__modulez00,
		BgL_bgl_string1798za700za7za7_1837za7, "Illegal entry -- ", 17);
	      DEFINE_STRING(BGl_string1799z00zz__modulez00,
		BgL_bgl_string1799za700za7za7_1838za7, "module-read-access-file", 23);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_modulezd2defaultzd2resolverzd2envzd2zz__modulez00,
		BgL_bgl_za762moduleza7d2defa1839z00,
		BGl_z62modulezd2defaultzd2resolverz62zz__modulez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2loadzd2accesszd2filezd2envz00zz__modulez00,
		BgL_bgl_za762moduleza7d2load1840z00,
		BGl_z62modulezd2loadzd2accesszd2filezb0zz__modulez00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__modulez00));
		     ADD_ROOT((void *) (&BGl_symbol1771z00zz__modulez00));
		     ADD_ROOT((void *) (&BGl_symbol1789z00zz__modulez00));
		     ADD_ROOT((void *) (&BGl_symbol1791z00zz__modulez00));
		     ADD_ROOT((void *) (&BGl_symbol1793z00zz__modulez00));
		   
			 ADD_ROOT((void *) (&BGl_z52bigloozd2modulezd2resolverz52zz__modulez00));
		     ADD_ROOT((void *) (&BGl_moduleszd2mutexzd2zz__modulez00));
		     ADD_ROOT((void *) (&BGl_za2afileszd2tableza2zd2zz__modulez00));
		     ADD_ROOT((void *) (&BGl_list1788z00zz__modulez00));
		     ADD_ROOT((void *) (&BGl_afilezd2tablezd2zz__modulez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long
		BgL_checksumz00_2099, char *BgL_fromz00_2100)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__modulez00))
				{
					BGl_requirezd2initializa7ationz75zz__modulez00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__modulez00();
					BGl_cnstzd2initzd2zz__modulez00();
					BGl_importedzd2moduleszd2initz00zz__modulez00();
					return BGl_toplevelzd2initzd2zz__modulez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__modulez00()
	{
		{	/* Llib/module.scm 17 */
			BGl_symbol1771z00zz__modulez00 =
				bstring_to_symbol(BGl_string1772z00zz__modulez00);
			BGl_symbol1789z00zz__modulez00 =
				bstring_to_symbol(BGl_string1790z00zz__modulez00);
			BGl_symbol1791z00zz__modulez00 =
				bstring_to_symbol(BGl_string1792z00zz__modulez00);
			BGl_symbol1793z00zz__modulez00 =
				bstring_to_symbol(BGl_string1794z00zz__modulez00);
			return (BGl_list1788z00zz__modulez00 =
				MAKE_YOUNG_PAIR(BGl_symbol1789z00zz__modulez00,
					MAKE_YOUNG_PAIR(BGl_symbol1791z00zz__modulez00,
						MAKE_YOUNG_PAIR(BGl_symbol1793z00zz__modulez00, BNIL))), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__modulez00()
	{
		{	/* Llib/module.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__modulez00()
	{
		{	/* Llib/module.scm 17 */
			{	/* Llib/module.scm 70 */
				obj_t BgL_res1652z00_1634;

				BgL_res1652z00_1634 = bgl_make_mutex(BGl_string1770z00zz__modulez00);
				BGl_moduleszd2mutexzd2zz__modulez00 = BgL_res1652z00_1634;
			}
			BGl_afilezd2tablezd2zz__modulez00 = BNIL;
			BGl_z52bigloozd2modulezd2resolverz52zz__modulez00 =
				BGl_modulezd2defaultzd2resolverzd2envzd2zz__modulez00;
			{	/* Llib/module.scm 209 */
				obj_t BgL_list1165z00_1066;

				BgL_list1165z00_1066 = MAKE_YOUNG_PAIR(BINT(((long) 256)), BNIL);
				return (BGl_za2afileszd2tableza2zd2zz__modulez00 =
					BGl_makezd2hashtablezd2zz__hashz00(BgL_list1165z00_1066), BUNSPEC);
			}
		}

	}



/* module-abase */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2abasezd2zz__modulez00()
	{
		{	/* Llib/module.scm 75 */
			return BGL_ABASE();
		}

	}



/* &module-abase */
	obj_t BGl_z62modulezd2abasezb0zz__modulez00(obj_t BgL_envz00_2026)
	{
		{	/* Llib/module.scm 75 */
			return BGl_modulezd2abasezd2zz__modulez00();
		}

	}



/* module-abase-set! */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2abasezd2setz12z12zz__modulez00(obj_t
		BgL_valz00_3)
	{
		{	/* Llib/module.scm 78 */
			return BGL_ABASE_SET(BgL_valz00_3);
		}

	}



/* &module-abase-set! */
	obj_t BGl_z62modulezd2abasezd2setz12z70zz__modulez00(obj_t BgL_envz00_2027,
		obj_t BgL_valz00_2028)
	{
		{	/* Llib/module.scm 78 */
			return BGl_modulezd2abasezd2setz12z12zz__modulez00(BgL_valz00_2028);
		}

	}



/* bigloo-module-resolver */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2modulezd2resolverz00zz__modulez00()
	{
		{	/* Llib/module.scm 91 */
			return BGl_z52bigloozd2modulezd2resolverz52zz__modulez00;
		}

	}



/* &bigloo-module-resolver */
	obj_t BGl_z62bigloozd2modulezd2resolverz62zz__modulez00(obj_t BgL_envz00_2029)
	{
		{	/* Llib/module.scm 91 */
			return BGl_bigloozd2modulezd2resolverz00zz__modulez00();
		}

	}



/* bigloo-module-resolver-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2modulezd2resolverzd2setz12zc0zz__modulez00(obj_t
		BgL_resolvez00_4)
	{
		{	/* Llib/module.scm 94 */
			{	/* Llib/module.scm 95 */
				obj_t BgL_top1843z00_2126;

				BgL_top1843z00_2126 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_moduleszd2mutexzd2zz__modulez00);
				BGL_EXITD_PUSH_PROTECT(BgL_top1843z00_2126,
					BGl_moduleszd2mutexzd2zz__modulez00);
				BUNSPEC;
				{	/* Llib/module.scm 95 */
					obj_t BgL_tmp1842z00_2125;

					if (PROCEDURE_CORRECT_ARITYP(BgL_resolvez00_4, (int) (((long) 2))))
						{	/* Llib/module.scm 100 */
							obj_t BgL_zc3z04z52bigloozd2modulezd2res1172ze3z76_2030;

							BgL_zc3z04z52bigloozd2modulezd2res1172ze3z76_2030 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04z52bigloozd2modulezd2res1172ze3z14zz__modulez00,
								(int) (((long) 3)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3z04z52bigloozd2modulezd2res1172ze3z76_2030,
								(int) (((long) 0)), BgL_resolvez00_4);
							BgL_tmp1842z00_2125 =
								(BGl_z52bigloozd2modulezd2resolverz52zz__modulez00 =
								BgL_zc3z04z52bigloozd2modulezd2res1172ze3z76_2030, BUNSPEC);
						}
					else
						{	/* Llib/module.scm 97 */
							if (PROCEDURE_CORRECT_ARITYP(BgL_resolvez00_4,
									(int) (((long) 3))))
								{	/* Llib/module.scm 101 */
									BgL_tmp1842z00_2125 =
										(BGl_z52bigloozd2modulezd2resolverz52zz__modulez00 =
										BgL_resolvez00_4, BUNSPEC);
								}
							else
								{	/* Llib/module.scm 101 */
									BgL_tmp1842z00_2125 =
										BGl_errorz00zz__errorz00(BGl_symbol1771z00zz__modulez00,
										BGl_string1773z00zz__modulez00, BgL_resolvez00_4);
								}
						}
					BGL_EXITD_POP_PROTECT(BgL_top1843z00_2126);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_moduleszd2mutexzd2zz__modulez00);
					return BgL_tmp1842z00_2125;
				}
			}
		}

	}



/* &bigloo-module-resolver-set! */
	obj_t BGl_z62bigloozd2modulezd2resolverzd2setz12za2zz__modulez00(obj_t
		BgL_envz00_2031, obj_t BgL_resolvez00_2032)
	{
		{	/* Llib/module.scm 94 */
			{	/* Llib/module.scm 95 */
				obj_t BgL_auxz00_2144;

				if (PROCEDUREP(BgL_resolvez00_2032))
					{	/* Llib/module.scm 95 */
						BgL_auxz00_2144 = BgL_resolvez00_2032;
					}
				else
					{
						obj_t BgL_auxz00_2147;

						BgL_auxz00_2147 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1774z00zz__modulez00,
							BINT(((long) 3527)), BGl_string1775z00zz__modulez00,
							BGl_string1776z00zz__modulez00, BgL_resolvez00_2032);
						FAILURE(BgL_auxz00_2147, BFALSE, BFALSE);
					}
				return
					BGl_bigloozd2modulezd2resolverzd2setz12zc0zz__modulez00
					(BgL_auxz00_2144);
			}
		}

	}



/* &<@%bigloo-module-res1172> */
	obj_t BGl_z62zc3z04z52bigloozd2modulezd2res1172ze3z14zz__modulez00(obj_t
		BgL_envz00_2033, obj_t BgL_modulez00_2035, obj_t BgL_filesz00_2036,
		obj_t BgL_abasez00_2037)
	{
		{	/* Llib/module.scm 100 */
			{	/* Llib/module.scm 100 */
				obj_t BgL_resolvez00_2034;

				BgL_resolvez00_2034 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2033, (int) (((long) 0))));
				return
					PROCEDURE_ENTRY(BgL_resolvez00_2034) (BgL_resolvez00_2034,
					BgL_modulez00_2035, BgL_abasez00_2037, BEOA);
			}
		}

	}



/* &module-default-resolver */
	obj_t BGl_z62modulezd2defaultzd2resolverz62zz__modulez00(obj_t
		BgL_envz00_2022, obj_t BgL_modz00_2023, obj_t BgL_filesz00_2024,
		obj_t BgL_abasez00_2025)
	{
		{	/* Llib/module.scm 113 */
			{	/* Llib/module.scm 114 */
				obj_t BgL_modz00_2069;
				obj_t BgL_filesz00_2070;

				if (SYMBOLP(BgL_modz00_2023))
					{	/* Llib/module.scm 114 */
						BgL_modz00_2069 = BgL_modz00_2023;
					}
				else
					{
						obj_t BgL_auxz00_2162;

						BgL_auxz00_2162 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1774z00zz__modulez00,
							BINT(((long) 4515)), BGl_string1778z00zz__modulez00,
							BGl_string1779z00zz__modulez00, BgL_modz00_2023);
						FAILURE(BgL_auxz00_2162, BFALSE, BFALSE);
					}
				{	/* Llib/module.scm 114 */
					bool_t BgL_test1848z00_2166;

					if (PAIRP(BgL_filesz00_2024))
						{	/* Llib/module.scm 114 */
							BgL_test1848z00_2166 = ((bool_t) 1);
						}
					else
						{	/* Llib/module.scm 114 */
							BgL_test1848z00_2166 = NULLP(BgL_filesz00_2024);
						}
					if (BgL_test1848z00_2166)
						{	/* Llib/module.scm 114 */
							BgL_filesz00_2070 = BgL_filesz00_2024;
						}
					else
						{
							obj_t BgL_auxz00_2170;

							BgL_auxz00_2170 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1774z00zz__modulez00,
								BINT(((long) 4515)), BGl_string1778z00zz__modulez00,
								BGl_string1780z00zz__modulez00, BgL_filesz00_2024);
							FAILURE(BgL_auxz00_2170, BFALSE, BFALSE);
				}}
				{	/* Llib/module.scm 114 */
					obj_t BgL_top1851z00_2175;

					BgL_top1851z00_2175 = BGL_EXITD_TOP_AS_OBJ();
					BGL_MUTEX_LOCK(BGl_moduleszd2mutexzd2zz__modulez00);
					BGL_EXITD_PUSH_PROTECT(BgL_top1851z00_2175,
						BGl_moduleszd2mutexzd2zz__modulez00);
					BUNSPEC;
					{	/* Llib/module.scm 114 */
						obj_t BgL_tmp1850z00_2174;

						if (NULLP(BgL_filesz00_2070))
							{	/* Llib/module.scm 116 */
								if (NULLP(BgL_abasez00_2025))
									{	/* Llib/module.scm 150 */
										obj_t BgL_basez00_2071;

										BgL_basez00_2071 =
											BGl_assocz00zz__r4_pairs_and_lists_6_3z00
											(BGl_string1777z00zz__modulez00,
											BGl_afilezd2tablezd2zz__modulez00);
										if (PAIRP(BgL_basez00_2071))
											{	/* Llib/module.scm 151 */
												BgL_tmp1850z00_2174 =
													BGl_resolvezd2abasezf2bucketz20zz__modulez00
													(BgL_modz00_2069, BgL_basez00_2071);
											}
										else
											{	/* Llib/module.scm 151 */
												BgL_tmp1850z00_2174 = BNIL;
											}
									}
								else
									{	/* Llib/module.scm 119 */
										if (STRINGP(BgL_abasez00_2025))
											{	/* Llib/module.scm 150 */
												obj_t BgL_basez00_2072;

												BgL_basez00_2072 =
													BGl_assocz00zz__r4_pairs_and_lists_6_3z00
													(BgL_abasez00_2025,
													BGl_afilezd2tablezd2zz__modulez00);
												if (PAIRP(BgL_basez00_2072))
													{	/* Llib/module.scm 151 */
														BgL_tmp1850z00_2174 =
															BGl_resolvezd2abasezf2bucketz20zz__modulez00
															(BgL_modz00_2069, BgL_basez00_2072);
													}
												else
													{	/* Llib/module.scm 151 */
														BgL_tmp1850z00_2174 = BNIL;
													}
											}
										else
											{	/* Llib/module.scm 121 */
												if (PAIRP(BgL_abasez00_2025))
													{
														obj_t BgL_abasez00_2074;

														BgL_abasez00_2074 = BgL_abasez00_2025;
													BgL_loopz00_2073:
														if (PAIRP(BgL_abasez00_2074))
															{	/* Llib/module.scm 126 */
																obj_t BgL_resolvez00_2075;

																{	/* Llib/module.scm 126 */
																	obj_t BgL_arg1190z00_2076;

																	BgL_arg1190z00_2076 = CAR(BgL_abasez00_2074);
																	{	/* Llib/module.scm 150 */
																		obj_t BgL_basez00_2077;

																		BgL_basez00_2077 =
																			BGl_assocz00zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg1190z00_2076,
																			BGl_afilezd2tablezd2zz__modulez00);
																		if (PAIRP(BgL_basez00_2077))
																			{	/* Llib/module.scm 151 */
																				BgL_resolvez00_2075 =
																					BGl_resolvezd2abasezf2bucketz20zz__modulez00
																					(BgL_modz00_2069, BgL_basez00_2077);
																			}
																		else
																			{	/* Llib/module.scm 151 */
																				BgL_resolvez00_2075 = BNIL;
																			}
																	}
																}
																if (PAIRP(BgL_resolvez00_2075))
																	{	/* Llib/module.scm 127 */
																		BgL_tmp1850z00_2174 = BgL_resolvez00_2075;
																	}
																else
																	{
																		obj_t BgL_abasez00_2204;

																		BgL_abasez00_2204 = CDR(BgL_abasez00_2074);
																		BgL_abasez00_2074 = BgL_abasez00_2204;
																		goto BgL_loopz00_2073;
																	}
															}
														else
															{	/* Llib/module.scm 125 */
																BgL_tmp1850z00_2174 = BNIL;
															}
													}
												else
													{	/* Llib/module.scm 123 */
														BgL_tmp1850z00_2174 =
															BGl_resolvezd2abaseza2z70zz__modulez00
															(BgL_modz00_2069);
													}
											}
									}
							}
						else
							{	/* Llib/module.scm 116 */
								{	/* Llib/module.scm 190 */
									obj_t BgL_top1862z00_2208;

									BgL_top1862z00_2208 = BGL_EXITD_TOP_AS_OBJ();
									BGL_MUTEX_LOCK(BGl_moduleszd2mutexzd2zz__modulez00);
									BGL_EXITD_PUSH_PROTECT(BgL_top1862z00_2208,
										BGl_moduleszd2mutexzd2zz__modulez00);
									BUNSPEC;
									{	/* Llib/module.scm 190 */
										obj_t BgL_tmp1861z00_2207;

										BgL_tmp1861z00_2207 =
											BGl_modulezd2addzd2accesszd2innerz12zc0zz__modulez00
											(BgL_modz00_2069, BgL_filesz00_2070,
											((obj_t) BgL_abasez00_2025));
										BGL_EXITD_POP_PROTECT(BgL_top1862z00_2208);
										BUNSPEC;
										BGL_MUTEX_UNLOCK(BGl_moduleszd2mutexzd2zz__modulez00);
										BgL_tmp1861z00_2207;
									}
								}
								BgL_tmp1850z00_2174 = BgL_filesz00_2070;
							}
						BGL_EXITD_POP_PROTECT(BgL_top1851z00_2175);
						BUNSPEC;
						BGL_MUTEX_UNLOCK(BGl_moduleszd2mutexzd2zz__modulez00);
						return BgL_tmp1850z00_2174;
					}
				}
			}
		}

	}



/* resolve-abase* */
	obj_t BGl_resolvezd2abaseza2z70zz__modulez00(obj_t BgL_modz00_8)
	{
		{	/* Llib/module.scm 137 */
			{
				obj_t BgL_afilez00_1099;

				BgL_afilez00_1099 = BGl_afilezd2tablezd2zz__modulez00;
			BgL_zc3z04anonymousza31191ze3z87_1100:
				if (NULLP(BgL_afilez00_1099))
					{	/* Llib/module.scm 139 */
						return BNIL;
					}
				else
					{	/* Llib/module.scm 141 */
						obj_t BgL_fz00_1102;

						{	/* Llib/module.scm 141 */
							obj_t BgL_arg1197z00_1105;

							BgL_arg1197z00_1105 = CAR(((obj_t) BgL_afilez00_1099));
							BgL_fz00_1102 =
								BGl_resolvezd2abasezf2bucketz20zz__modulez00(BgL_modz00_8,
								BgL_arg1197z00_1105);
						}
						if (PAIRP(BgL_fz00_1102))
							{	/* Llib/module.scm 142 */
								return BgL_fz00_1102;
							}
						else
							{	/* Llib/module.scm 144 */
								obj_t BgL_arg1194z00_1104;

								BgL_arg1194z00_1104 = CDR(((obj_t) BgL_afilez00_1099));
								{
									obj_t BgL_afilez00_2227;

									BgL_afilez00_2227 = BgL_arg1194z00_1104;
									BgL_afilez00_1099 = BgL_afilez00_2227;
									goto BgL_zc3z04anonymousza31191ze3z87_1100;
								}
							}
					}
			}
		}

	}



/* resolve-abase/bucket */
	obj_t BGl_resolvezd2abasezf2bucketz20zz__modulez00(obj_t BgL_modz00_11,
		obj_t BgL_basez00_12)
	{
		{	/* Llib/module.scm 158 */
			{	/* Llib/module.scm 159 */
				obj_t BgL_cellz00_1109;

				BgL_cellz00_1109 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_modz00_11,
					CDR(((obj_t) BgL_basez00_12)));
				if (PAIRP(BgL_cellz00_1109))
					{	/* Llib/module.scm 161 */
						obj_t BgL_hook1071z00_1111;

						BgL_hook1071z00_1111 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
						{	/* Llib/module.scm 161 */
							obj_t BgL_g1072z00_1112;

							BgL_g1072z00_1112 = CDR(BgL_cellz00_1109);
							{
								obj_t BgL_l1068z00_1114;
								obj_t BgL_h1069z00_1115;

								BgL_l1068z00_1114 = BgL_g1072z00_1112;
								BgL_h1069z00_1115 = BgL_hook1071z00_1111;
							BgL_zc3z04anonymousza31200ze3z87_1116:
								if (NULLP(BgL_l1068z00_1114))
									{	/* Llib/module.scm 161 */
										return CDR(BgL_hook1071z00_1111);
									}
								else
									{	/* Llib/module.scm 161 */
										bool_t BgL_test1867z00_2238;

										{	/* Llib/module.scm 161 */
											obj_t BgL_tmpz00_2239;

											BgL_tmpz00_2239 = CAR(((obj_t) BgL_l1068z00_1114));
											BgL_test1867z00_2238 = STRINGP(BgL_tmpz00_2239);
										}
										if (BgL_test1867z00_2238)
											{	/* Llib/module.scm 161 */
												obj_t BgL_nh1070z00_1120;

												{	/* Llib/module.scm 161 */
													obj_t BgL_arg1216z00_1122;

													BgL_arg1216z00_1122 =
														CAR(((obj_t) BgL_l1068z00_1114));
													{	/* Llib/module.scm 161 */
														obj_t BgL_res1670z00_1672;

														BgL_res1670z00_1672 =
															MAKE_YOUNG_PAIR(BgL_arg1216z00_1122, BNIL);
														BgL_nh1070z00_1120 = BgL_res1670z00_1672;
													}
												}
												SET_CDR(BgL_h1069z00_1115, BgL_nh1070z00_1120);
												{	/* Llib/module.scm 161 */
													obj_t BgL_arg1211z00_1121;

													BgL_arg1211z00_1121 =
														CDR(((obj_t) BgL_l1068z00_1114));
													{
														obj_t BgL_h1069z00_2250;
														obj_t BgL_l1068z00_2249;

														BgL_l1068z00_2249 = BgL_arg1211z00_1121;
														BgL_h1069z00_2250 = BgL_nh1070z00_1120;
														BgL_h1069z00_1115 = BgL_h1069z00_2250;
														BgL_l1068z00_1114 = BgL_l1068z00_2249;
														goto BgL_zc3z04anonymousza31200ze3z87_1116;
													}
												}
											}
										else
											{	/* Llib/module.scm 161 */
												obj_t BgL_arg1221z00_1123;

												BgL_arg1221z00_1123 = CDR(((obj_t) BgL_l1068z00_1114));
												{
													obj_t BgL_l1068z00_2253;

													BgL_l1068z00_2253 = BgL_arg1221z00_1123;
													BgL_l1068z00_1114 = BgL_l1068z00_2253;
													goto BgL_zc3z04anonymousza31200ze3z87_1116;
												}
											}
									}
							}
						}
					}
				else
					{	/* Llib/module.scm 162 */
						obj_t BgL_fz00_1126;

						{	/* Llib/module.scm 162 */
							obj_t BgL_arg1227z00_1129;

							{	/* Llib/module.scm 162 */
								obj_t BgL_res1671z00_1678;

								{	/* Llib/module.scm 162 */
									obj_t BgL_arg1393z00_1677;

									BgL_arg1393z00_1677 = SYMBOL_TO_STRING(BgL_modz00_11);
									BgL_res1671z00_1678 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1393z00_1677);
								}
								BgL_arg1227z00_1129 = BgL_res1671z00_1678;
							}
							BgL_fz00_1126 =
								string_append(BgL_arg1227z00_1129,
								BGl_string1781z00zz__modulez00);
						}
						if (fexists(BSTRING_TO_STRING(BgL_fz00_1126)))
							{	/* Llib/module.scm 164 */
								obj_t BgL_list1225z00_1128;

								BgL_list1225z00_1128 = MAKE_YOUNG_PAIR(BgL_fz00_1126, BNIL);
								return BgL_list1225z00_1128;
							}
						else
							{	/* Llib/module.scm 163 */
								return BNIL;
							}
					}
			}
		}

	}



/* module-add-access-inner! */
	obj_t BGl_modulezd2addzd2accesszd2innerz12zc0zz__modulez00(obj_t
		BgL_modulez00_13, obj_t BgL_filesz00_14, obj_t BgL_abasez00_15)
	{
		{	/* Llib/module.scm 170 */
			{	/* Llib/module.scm 171 */
				obj_t BgL_basez00_1131;

				BgL_basez00_1131 =
					BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_abasez00_15,
					BGl_afilezd2tablezd2zz__modulez00);
				if (CBOOL(BgL_basez00_1131))
					{	/* Llib/module.scm 175 */
						obj_t BgL_cellz00_1132;

						BgL_cellz00_1132 =
							BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_modulez00_13,
							CDR(((obj_t) BgL_basez00_1131)));
						if (CBOOL(BgL_cellz00_1132))
							{	/* Llib/module.scm 176 */
								if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(CDR(
											((obj_t) BgL_cellz00_1132)), BgL_filesz00_14))
									{	/* Llib/module.scm 178 */
										return BFALSE;
									}
								else
									{	/* Llib/module.scm 178 */
										{	/* Llib/module.scm 181 */
											obj_t BgL_arg1239z00_1135;

											BgL_arg1239z00_1135 = CDR(((obj_t) BgL_cellz00_1132));
											{	/* Llib/module.scm 179 */
												obj_t BgL_list1240z00_1136;

												{	/* Llib/module.scm 179 */
													obj_t BgL_arg1242z00_1137;

													{	/* Llib/module.scm 179 */
														obj_t BgL_arg1243z00_1138;

														{	/* Llib/module.scm 179 */
															obj_t BgL_arg1245z00_1139;

															{	/* Llib/module.scm 179 */
																obj_t BgL_arg1246z00_1140;

																{	/* Llib/module.scm 179 */
																	obj_t BgL_arg1247z00_1141;

																	{	/* Llib/module.scm 179 */
																		obj_t BgL_arg1250z00_1142;

																		{	/* Llib/module.scm 179 */
																			obj_t BgL_arg1252z00_1143;

																			{	/* Llib/module.scm 179 */
																				obj_t BgL_arg1253z00_1144;

																				{	/* Llib/module.scm 179 */
																					obj_t BgL_arg1254z00_1145;

																					BgL_arg1254z00_1145 =
																						MAKE_YOUNG_PAIR
																						(BGl_string1782z00zz__modulez00,
																						BNIL);
																					BgL_arg1253z00_1144 =
																						MAKE_YOUNG_PAIR(BgL_abasez00_15,
																						BgL_arg1254z00_1145);
																				}
																				BgL_arg1252z00_1143 =
																					MAKE_YOUNG_PAIR
																					(BGl_string1783z00zz__modulez00,
																					BgL_arg1253z00_1144);
																			}
																			BgL_arg1250z00_1142 =
																				MAKE_YOUNG_PAIR(BgL_filesz00_14,
																				BgL_arg1252z00_1143);
																		}
																		BgL_arg1247z00_1141 =
																			MAKE_YOUNG_PAIR
																			(BGl_string1784z00zz__modulez00,
																			BgL_arg1250z00_1142);
																	}
																	BgL_arg1246z00_1140 =
																		MAKE_YOUNG_PAIR(BgL_arg1239z00_1135,
																		BgL_arg1247z00_1141);
																}
																BgL_arg1245z00_1139 =
																	MAKE_YOUNG_PAIR
																	(BGl_string1785z00zz__modulez00,
																	BgL_arg1246z00_1140);
															}
															BgL_arg1243z00_1138 =
																MAKE_YOUNG_PAIR(BgL_modulez00_13,
																BgL_arg1245z00_1139);
														}
														BgL_arg1242z00_1137 =
															MAKE_YOUNG_PAIR(BGl_string1786z00zz__modulez00,
															BgL_arg1243z00_1138);
													}
													BgL_list1240z00_1136 =
														MAKE_YOUNG_PAIR(BGl_string1787z00zz__modulez00,
														BgL_arg1242z00_1137);
												}
												BGl_warningz00zz__errorz00(BgL_list1240z00_1136);
											}
										}
										return BGl_list1788z00zz__modulez00;
									}
							}
						else
							{	/* Llib/module.scm 177 */
								obj_t BgL_arg1258z00_1147;

								{	/* Llib/module.scm 177 */
									obj_t BgL_arg1263z00_1148;
									obj_t BgL_arg1268z00_1149;

									BgL_arg1263z00_1148 =
										MAKE_YOUNG_PAIR(BgL_modulez00_13, BgL_filesz00_14);
									BgL_arg1268z00_1149 = CDR(((obj_t) BgL_basez00_1131));
									BgL_arg1258z00_1147 =
										MAKE_YOUNG_PAIR(BgL_arg1263z00_1148, BgL_arg1268z00_1149);
								}
								{	/* Llib/module.scm 177 */
									obj_t BgL_tmpz00_2290;

									BgL_tmpz00_2290 = ((obj_t) BgL_basez00_1131);
									return SET_CDR(BgL_tmpz00_2290, BgL_arg1258z00_1147);
								}
							}
					}
				else
					{	/* Llib/module.scm 174 */
						obj_t BgL_arg1271z00_1151;

						{	/* Llib/module.scm 174 */
							obj_t BgL_arg1273z00_1152;

							{	/* Llib/module.scm 174 */
								obj_t BgL_arg1274z00_1153;

								BgL_arg1274z00_1153 =
									MAKE_YOUNG_PAIR(BgL_modulez00_13, BgL_filesz00_14);
								{	/* Llib/module.scm 174 */
									obj_t BgL_list1275z00_1154;

									BgL_list1275z00_1154 =
										MAKE_YOUNG_PAIR(BgL_arg1274z00_1153, BNIL);
									BgL_arg1273z00_1152 = BgL_list1275z00_1154;
								}
							}
							BgL_arg1271z00_1151 =
								MAKE_YOUNG_PAIR(BgL_abasez00_15, BgL_arg1273z00_1152);
						}
						return (BGl_afilezd2tablezd2zz__modulez00 =
							MAKE_YOUNG_PAIR(BgL_arg1271z00_1151,
								BGl_afilezd2tablezd2zz__modulez00), BUNSPEC);
					}
			}
		}

	}



/* module-add-access! */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2addzd2accessz12z12zz__modulez00(obj_t
		BgL_modulez00_16, obj_t BgL_filesz00_17, obj_t BgL_abasez00_18)
	{
		{	/* Llib/module.scm 189 */
			{	/* Llib/module.scm 190 */
				obj_t BgL_top1873z00_2298;

				BgL_top1873z00_2298 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_moduleszd2mutexzd2zz__modulez00);
				BGL_EXITD_PUSH_PROTECT(BgL_top1873z00_2298,
					BGl_moduleszd2mutexzd2zz__modulez00);
				BUNSPEC;
				{	/* Llib/module.scm 190 */
					obj_t BgL_tmp1872z00_2297;

					BgL_tmp1872z00_2297 =
						BGl_modulezd2addzd2accesszd2innerz12zc0zz__modulez00
						(BgL_modulez00_16, BgL_filesz00_17, BgL_abasez00_18);
					BGL_EXITD_POP_PROTECT(BgL_top1873z00_2298);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_moduleszd2mutexzd2zz__modulez00);
					return BgL_tmp1872z00_2297;
				}
			}
		}

	}



/* &module-add-access! */
	obj_t BGl_z62modulezd2addzd2accessz12z70zz__modulez00(obj_t BgL_envz00_2038,
		obj_t BgL_modulez00_2039, obj_t BgL_filesz00_2040, obj_t BgL_abasez00_2041)
	{
		{	/* Llib/module.scm 189 */
			{	/* Llib/module.scm 190 */
				obj_t BgL_auxz00_2319;
				obj_t BgL_auxz00_2312;
				obj_t BgL_auxz00_2305;

				if (STRINGP(BgL_abasez00_2041))
					{	/* Llib/module.scm 190 */
						BgL_auxz00_2319 = BgL_abasez00_2041;
					}
				else
					{
						obj_t BgL_auxz00_2322;

						BgL_auxz00_2322 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1774z00zz__modulez00,
							BINT(((long) 7284)), BGl_string1795z00zz__modulez00,
							BGl_string1797z00zz__modulez00, BgL_abasez00_2041);
						FAILURE(BgL_auxz00_2322, BFALSE, BFALSE);
					}
				if (PAIRP(BgL_filesz00_2040))
					{	/* Llib/module.scm 190 */
						BgL_auxz00_2312 = BgL_filesz00_2040;
					}
				else
					{
						obj_t BgL_auxz00_2315;

						BgL_auxz00_2315 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1774z00zz__modulez00,
							BINT(((long) 7284)), BGl_string1795z00zz__modulez00,
							BGl_string1796z00zz__modulez00, BgL_filesz00_2040);
						FAILURE(BgL_auxz00_2315, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_modulez00_2039))
					{	/* Llib/module.scm 190 */
						BgL_auxz00_2305 = BgL_modulez00_2039;
					}
				else
					{
						obj_t BgL_auxz00_2308;

						BgL_auxz00_2308 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1774z00zz__modulez00,
							BINT(((long) 7284)), BGl_string1795z00zz__modulez00,
							BGl_string1779z00zz__modulez00, BgL_modulez00_2039);
						FAILURE(BgL_auxz00_2308, BFALSE, BFALSE);
					}
				return
					BGl_modulezd2addzd2accessz12z12zz__modulez00(BgL_auxz00_2305,
					BgL_auxz00_2312, BgL_auxz00_2319);
			}
		}

	}



/* module-read-access-file */
	obj_t BGl_modulezd2readzd2accesszd2filezd2zz__modulez00(obj_t BgL_portz00_19)
	{
		{	/* Llib/module.scm 196 */
			{	/* Llib/module.scm 197 */
				obj_t BgL_hook1077z00_1155;

				BgL_hook1077z00_1155 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
				{	/* Llib/module.scm 203 */
					obj_t BgL_g1078z00_1156;

					{	/* Llib/module.scm 203 */

						{	/* Llib/module.scm 203 */

							BgL_g1078z00_1156 =
								BGl_readz00zz__readerz00(((obj_t) BgL_portz00_19), BFALSE);
						}
					}
					{
						obj_t BgL_l1074z00_1158;
						obj_t BgL_h1075z00_1159;

						BgL_l1074z00_1158 = BgL_g1078z00_1156;
						BgL_h1075z00_1159 = BgL_hook1077z00_1155;
					BgL_zc3z04anonymousza31276ze3z87_1160:
						if (NULLP(BgL_l1074z00_1158))
							{	/* Llib/module.scm 203 */
								return CDR(BgL_hook1077z00_1155);
							}
						else
							{	/* Llib/module.scm 203 */
								bool_t BgL_test1878z00_2333;

								{	/* Llib/module.scm 198 */
									obj_t BgL_xz00_1181;

									BgL_xz00_1181 = CAR(((obj_t) BgL_l1074z00_1158));
									{	/* Llib/module.scm 198 */
										bool_t BgL_test1879z00_2336;

										if (PAIRP(BgL_xz00_1181))
											{	/* Llib/module.scm 198 */
												bool_t BgL_test1881z00_2339;

												{	/* Llib/module.scm 198 */
													obj_t BgL_tmpz00_2340;

													BgL_tmpz00_2340 = CAR(BgL_xz00_1181);
													BgL_test1881z00_2339 = SYMBOLP(BgL_tmpz00_2340);
												}
												if (BgL_test1881z00_2339)
													{	/* Llib/module.scm 198 */
														BgL_test1879z00_2336 =
															BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(CDR
															(BgL_xz00_1181));
													}
												else
													{	/* Llib/module.scm 198 */
														BgL_test1879z00_2336 = ((bool_t) 0);
													}
											}
										else
											{	/* Llib/module.scm 198 */
												BgL_test1879z00_2336 = ((bool_t) 0);
											}
										if (BgL_test1879z00_2336)
											{	/* Llib/module.scm 198 */
												BgL_test1878z00_2333 = ((bool_t) 1);
											}
										else
											{	/* Llib/module.scm 198 */
												{	/* Llib/module.scm 201 */
													obj_t BgL_list1297z00_1183;

													{	/* Llib/module.scm 201 */
														obj_t BgL_arg1298z00_1184;

														{	/* Llib/module.scm 201 */
															obj_t BgL_arg1299z00_1185;

															BgL_arg1299z00_1185 =
																MAKE_YOUNG_PAIR(BgL_xz00_1181, BNIL);
															BgL_arg1298z00_1184 =
																MAKE_YOUNG_PAIR(BGl_string1798z00zz__modulez00,
																BgL_arg1299z00_1185);
														}
														BgL_list1297z00_1183 =
															MAKE_YOUNG_PAIR(BGl_string1799z00zz__modulez00,
															BgL_arg1298z00_1184);
													}
													BGl_warningz00zz__errorz00(BgL_list1297z00_1183);
												}
												BgL_test1878z00_2333 = ((bool_t) 0);
											}
									}
								}
								if (BgL_test1878z00_2333)
									{	/* Llib/module.scm 203 */
										obj_t BgL_nh1076z00_1177;

										{	/* Llib/module.scm 203 */
											obj_t BgL_arg1295z00_1179;

											BgL_arg1295z00_1179 = CAR(((obj_t) BgL_l1074z00_1158));
											{	/* Llib/module.scm 203 */
												obj_t BgL_res1678z00_1696;

												BgL_res1678z00_1696 =
													MAKE_YOUNG_PAIR(BgL_arg1295z00_1179, BNIL);
												BgL_nh1076z00_1177 = BgL_res1678z00_1696;
											}
										}
										SET_CDR(BgL_h1075z00_1159, BgL_nh1076z00_1177);
										{	/* Llib/module.scm 203 */
											obj_t BgL_arg1292z00_1178;

											BgL_arg1292z00_1178 = CDR(((obj_t) BgL_l1074z00_1158));
											{
												obj_t BgL_h1075z00_2356;
												obj_t BgL_l1074z00_2355;

												BgL_l1074z00_2355 = BgL_arg1292z00_1178;
												BgL_h1075z00_2356 = BgL_nh1076z00_1177;
												BgL_h1075z00_1159 = BgL_h1075z00_2356;
												BgL_l1074z00_1158 = BgL_l1074z00_2355;
												goto BgL_zc3z04anonymousza31276ze3z87_1160;
											}
										}
									}
								else
									{	/* Llib/module.scm 203 */
										obj_t BgL_arg1296z00_1180;

										BgL_arg1296z00_1180 = CDR(((obj_t) BgL_l1074z00_1158));
										{
											obj_t BgL_l1074z00_2359;

											BgL_l1074z00_2359 = BgL_arg1296z00_1180;
											BgL_l1074z00_1158 = BgL_l1074z00_2359;
											goto BgL_zc3z04anonymousza31276ze3z87_1160;
										}
									}
							}
					}
				}
			}
		}

	}



/* module-load-access-file */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(obj_t
		BgL_pathz00_20)
	{
		{	/* Llib/module.scm 214 */
			{
				obj_t BgL_filez00_1218;
				obj_t BgL_dirz00_1219;
				obj_t BgL_abasez00_1220;

				{	/* Llib/module.scm 236 */
					obj_t BgL_top1883z00_2361;

					BgL_top1883z00_2361 = BGL_EXITD_TOP_AS_OBJ();
					BGL_MUTEX_LOCK(BGl_moduleszd2mutexzd2zz__modulez00);
					BGL_EXITD_PUSH_PROTECT(BgL_top1883z00_2361,
						BGl_moduleszd2mutexzd2zz__modulez00);
					BUNSPEC;
					{	/* Llib/module.scm 236 */
						obj_t BgL_tmp1882z00_2360;

						if (CBOOL(BGl_hashtablezd2getzd2zz__hashz00
								(BGl_za2afileszd2tableza2zd2zz__modulez00, BgL_pathz00_20)))
							{	/* Llib/module.scm 237 */
								BgL_tmp1882z00_2360 = BFALSE;
							}
						else
							{	/* Llib/module.scm 237 */
								if (bgl_directoryp(BSTRING_TO_STRING(BgL_pathz00_20)))
									{
										obj_t BgL_dz00_1198;

										BgL_dz00_1198 = BgL_pathz00_20;
									BgL_zc3z04anonymousza31304ze3z87_1199:
										{	/* Llib/module.scm 241 */
											obj_t BgL_filez00_1200;

											BgL_filez00_1200 =
												BGl_makezd2filezd2namez00zz__osz00(BgL_dz00_1198,
												BGl_string1800z00zz__modulez00);
											if (fexists(BSTRING_TO_STRING(BgL_filez00_1200)))
												{	/* Llib/module.scm 242 */
													BgL_filez00_1218 = BgL_filez00_1200;
													BgL_dirz00_1219 = BgL_dz00_1198;
													BgL_abasez00_1220 = BgL_pathz00_20;
												BgL_zc3z04anonymousza31316ze3z87_1221:
													{	/* Llib/module.scm 225 */
														obj_t BgL_zc3z04anonymousza31318ze3z87_2042;

														BgL_zc3z04anonymousza31318ze3z87_2042 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31318ze3ze5zz__modulez00,
															(int) (((long) 1)), (int) (((long) 4)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31318ze3z87_2042,
															(int) (((long) 0)), BgL_pathz00_20);
														PROCEDURE_SET(BgL_zc3z04anonymousza31318ze3z87_2042,
															(int) (((long) 1)), BgL_filez00_1218);
														PROCEDURE_SET(BgL_zc3z04anonymousza31318ze3z87_2042,
															(int) (((long) 2)), BgL_dirz00_1219);
														PROCEDURE_SET(BgL_zc3z04anonymousza31318ze3z87_2042,
															(int) (((long) 3)), BgL_abasez00_1220);
														BgL_tmp1882z00_2360 =
															BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00
															(BgL_filez00_1218,
															BgL_zc3z04anonymousza31318ze3z87_2042);
												}}
											else
												{	/* Llib/module.scm 244 */
													obj_t BgL_parentz00_1202;

													BgL_parentz00_1202 =
														BGl_dirnamez00zz__osz00(BgL_dz00_1198);
													{	/* Llib/module.scm 245 */
														bool_t BgL_test1887z00_2388;

														{	/* Llib/module.scm 245 */
															bool_t BgL_res1700z00_1767;

															{	/* Llib/module.scm 245 */
																long BgL_l1z00_1754;

																BgL_l1z00_1754 =
																	STRING_LENGTH(BgL_parentz00_1202);
																if (
																	(BgL_l1z00_1754 ==
																		STRING_LENGTH(BgL_dz00_1198)))
																	{	/* Llib/module.scm 245 */
																		int BgL_arg1386z00_1757;

																		{	/* Llib/module.scm 245 */
																			char *BgL_auxz00_2395;
																			char *BgL_tmpz00_2393;

																			BgL_auxz00_2395 =
																				BSTRING_TO_STRING(BgL_dz00_1198);
																			BgL_tmpz00_2393 =
																				BSTRING_TO_STRING(BgL_parentz00_1202);
																			BgL_arg1386z00_1757 =
																				memcmp(BgL_tmpz00_2393, BgL_auxz00_2395,
																				BgL_l1z00_1754);
																		}
																		BgL_res1700z00_1767 =
																			(
																			(long) (BgL_arg1386z00_1757) ==
																			((long) 0));
																	}
																else
																	{	/* Llib/module.scm 245 */
																		BgL_res1700z00_1767 = ((bool_t) 0);
																	}
															}
															BgL_test1887z00_2388 = BgL_res1700z00_1767;
														}
														if (BgL_test1887z00_2388)
															{	/* Llib/module.scm 245 */
																BgL_tmp1882z00_2360 = BFALSE;
															}
														else
															{
																obj_t BgL_dz00_2400;

																BgL_dz00_2400 = BgL_parentz00_1202;
																BgL_dz00_1198 = BgL_dz00_2400;
																goto BgL_zc3z04anonymousza31304ze3z87_1199;
															}
													}
												}
										}
									}
								else
									{	/* Llib/module.scm 239 */
										if (fexists(BSTRING_TO_STRING(BgL_pathz00_20)))
											{	/* Llib/module.scm 248 */
												obj_t BgL_dirz00_1206;

												BgL_dirz00_1206 =
													BGl_dirnamez00zz__osz00(BgL_pathz00_20);
												{
													obj_t BgL_abasez00_2407;
													obj_t BgL_dirz00_2406;
													obj_t BgL_filez00_2405;

													BgL_filez00_2405 = BgL_pathz00_20;
													BgL_dirz00_2406 = BgL_dirz00_1206;
													BgL_abasez00_2407 = BgL_dirz00_1206;
													BgL_abasez00_1220 = BgL_abasez00_2407;
													BgL_dirz00_1219 = BgL_dirz00_2406;
													BgL_filez00_1218 = BgL_filez00_2405;
													goto BgL_zc3z04anonymousza31316ze3z87_1221;
												}
											}
										else
											{	/* Llib/module.scm 247 */
												BgL_tmp1882z00_2360 = BFALSE;
											}
									}
							}
						BGL_EXITD_POP_PROTECT(BgL_top1883z00_2361);
						BUNSPEC;
						BGL_MUTEX_UNLOCK(BGl_moduleszd2mutexzd2zz__modulez00);
						return BgL_tmp1882z00_2360;
					}
				}
			}
		}

	}



/* &module-load-access-file */
	obj_t BGl_z62modulezd2loadzd2accesszd2filezb0zz__modulez00(obj_t
		BgL_envz00_2043, obj_t BgL_pathz00_2044)
	{
		{	/* Llib/module.scm 214 */
			{	/* Llib/module.scm 218 */
				obj_t BgL_auxz00_2410;

				if (STRINGP(BgL_pathz00_2044))
					{	/* Llib/module.scm 218 */
						BgL_auxz00_2410 = BgL_pathz00_2044;
					}
				else
					{
						obj_t BgL_auxz00_2413;

						BgL_auxz00_2413 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1774z00zz__modulez00,
							BINT(((long) 8411)), BGl_string1801z00zz__modulez00,
							BGl_string1797z00zz__modulez00, BgL_pathz00_2044);
						FAILURE(BgL_auxz00_2413, BFALSE, BFALSE);
					}
				return
					BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(BgL_auxz00_2410);
			}
		}

	}



/* &<@anonymous:1318> */
	obj_t BGl_z62zc3z04anonymousza31318ze3ze5zz__modulez00(obj_t BgL_envz00_2045,
		obj_t BgL_portz00_2050)
	{
		{	/* Llib/module.scm 224 */
			{	/* Llib/module.scm 225 */
				obj_t BgL_pathz00_2046;
				obj_t BgL_filez00_2047;
				obj_t BgL_dirz00_2048;
				obj_t BgL_abasez00_2049;

				BgL_pathz00_2046 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2045, (int) (((long) 0))));
				BgL_filez00_2047 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2045, (int) (((long) 1))));
				BgL_dirz00_2048 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2045, (int) (((long) 2))));
				BgL_abasez00_2049 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2045, (int) (((long) 3))));
				{	/* Llib/module.scm 225 */
					bool_t BgL_tmpz00_2430;

					{
						obj_t BgL_fz00_2079;
						obj_t BgL_abasez00_2080;

						BGl_hashtablezd2putz12zc0zz__hashz00
							(BGl_za2afileszd2tableza2zd2zz__modulez00, BgL_pathz00_2046,
							BgL_filez00_2047);
						{	/* Llib/module.scm 226 */
							obj_t BgL_g1085z00_2084;

							BgL_g1085z00_2084 =
								BGl_modulezd2readzd2accesszd2filezd2zz__modulez00
								(BgL_portz00_2050);
							{
								obj_t BgL_l1083z00_2086;

								BgL_l1083z00_2086 = BgL_g1085z00_2084;
							BgL_zc3z04anonymousza31319ze3z87_2085:
								if (PAIRP(BgL_l1083z00_2086))
									{	/* Llib/module.scm 234 */
										{	/* Llib/module.scm 227 */
											obj_t BgL_accessz00_2087;

											BgL_accessz00_2087 = CAR(BgL_l1083z00_2086);
											{	/* Llib/module.scm 227 */
												obj_t BgL_infoz00_2088;

												{	/* Llib/module.scm 227 */
													bool_t BgL_test1892z00_2436;

													{	/* Llib/module.scm 227 */
														bool_t BgL_res1692z00_2089;

														{	/* Llib/module.scm 227 */
															long BgL_l1z00_2090;

															BgL_l1z00_2090 = STRING_LENGTH(BgL_dirz00_2048);
															if ((BgL_l1z00_2090 == ((long) 1)))
																{	/* Llib/module.scm 227 */
																	int BgL_arg1386z00_2091;

																	{	/* Llib/module.scm 227 */
																		char *BgL_auxz00_2442;
																		char *BgL_tmpz00_2440;

																		BgL_auxz00_2442 =
																			BSTRING_TO_STRING
																			(BGl_string1777z00zz__modulez00);
																		BgL_tmpz00_2440 =
																			BSTRING_TO_STRING(BgL_dirz00_2048);
																		BgL_arg1386z00_2091 =
																			memcmp(BgL_tmpz00_2440, BgL_auxz00_2442,
																			BgL_l1z00_2090);
																	}
																	BgL_res1692z00_2089 =
																		(
																		(long) (BgL_arg1386z00_2091) == ((long) 0));
																}
															else
																{	/* Llib/module.scm 227 */
																	BgL_res1692z00_2089 = ((bool_t) 0);
																}
														}
														BgL_test1892z00_2436 = BgL_res1692z00_2089;
													}
													if (BgL_test1892z00_2436)
														{	/* Llib/module.scm 227 */
															BgL_infoz00_2088 =
																CDR(((obj_t) BgL_accessz00_2087));
														}
													else
														{	/* Llib/module.scm 229 */
															obj_t BgL_l01081z00_2092;

															BgL_l01081z00_2092 =
																CDR(((obj_t) BgL_accessz00_2087));
															{
																obj_t BgL_l1080z00_2094;

																BgL_l1080z00_2094 = BgL_l01081z00_2092;
															BgL_zc3z04anonymousza31324ze3z87_2093:
																if (NULLP(BgL_l1080z00_2094))
																	{	/* Llib/module.scm 231 */
																		BgL_infoz00_2088 = BgL_l01081z00_2092;
																	}
																else
																	{	/* Llib/module.scm 231 */
																		{	/* Llib/module.scm 230 */
																			obj_t BgL_arg1326z00_2095;

																			{	/* Llib/module.scm 230 */
																				obj_t BgL_fz00_2096;

																				BgL_fz00_2096 =
																					CAR(((obj_t) BgL_l1080z00_2094));
																				BgL_fz00_2079 = BgL_fz00_2096;
																				BgL_abasez00_2080 = BgL_dirz00_2048;
																				if (STRINGP(BgL_fz00_2079))
																					{	/* Llib/module.scm 219 */
																						bool_t BgL_test1896z00_2457;

																						{	/* Llib/module.scm 219 */
																							bool_t BgL_test1897z00_2458;

																							{	/* Llib/module.scm 219 */
																								bool_t BgL_res1684z00_2081;

																								{	/* Llib/module.scm 219 */
																									long BgL_l1z00_2082;

																									BgL_l1z00_2082 =
																										STRING_LENGTH
																										(BgL_fz00_2079);
																									if ((BgL_l1z00_2082 ==
																											((long) 0)))
																										{	/* Llib/module.scm 219 */
																											int BgL_arg1386z00_2083;

																											{	/* Llib/module.scm 219 */
																												char *BgL_auxz00_2464;
																												char *BgL_tmpz00_2462;

																												BgL_auxz00_2464 =
																													BSTRING_TO_STRING
																													(BGl_string1802z00zz__modulez00);
																												BgL_tmpz00_2462 =
																													BSTRING_TO_STRING
																													(BgL_fz00_2079);
																												BgL_arg1386z00_2083 =
																													memcmp
																													(BgL_tmpz00_2462,
																													BgL_auxz00_2464,
																													BgL_l1z00_2082);
																											}
																											BgL_res1684z00_2081 =
																												(
																												(long)
																												(BgL_arg1386z00_2083) ==
																												((long) 0));
																										}
																									else
																										{	/* Llib/module.scm 219 */
																											BgL_res1684z00_2081 =
																												((bool_t) 0);
																										}
																								}
																								BgL_test1897z00_2458 =
																									BgL_res1684z00_2081;
																							}
																							if (BgL_test1897z00_2458)
																								{	/* Llib/module.scm 219 */
																									BgL_test1896z00_2457 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Llib/module.scm 219 */
																									BgL_test1896z00_2457 =
																										(STRING_REF(BgL_fz00_2079,
																											((long) 0)) ==
																										(unsigned
																											char) (FILE_SEPARATOR));
																						}}
																						if (BgL_test1896z00_2457)
																							{	/* Llib/module.scm 219 */
																								BgL_arg1326z00_2095 =
																									BgL_fz00_2079;
																							}
																						else
																							{	/* Llib/module.scm 219 */
																								BgL_arg1326z00_2095 =
																									BGl_makezd2filezd2namez00zz__osz00
																									(BgL_abasez00_2080,
																									BgL_fz00_2079);
																							}
																					}
																				else
																					{	/* Llib/module.scm 218 */
																						BgL_arg1326z00_2095 = BgL_fz00_2079;
																					}
																			}
																			{	/* Llib/module.scm 231 */
																				obj_t BgL_tmpz00_2473;

																				BgL_tmpz00_2473 =
																					((obj_t) BgL_l1080z00_2094);
																				SET_CAR(BgL_tmpz00_2473,
																					BgL_arg1326z00_2095);
																			}
																		}
																		{	/* Llib/module.scm 231 */
																			obj_t BgL_arg1327z00_2097;

																			BgL_arg1327z00_2097 =
																				CDR(((obj_t) BgL_l1080z00_2094));
																			{
																				obj_t BgL_l1080z00_2478;

																				BgL_l1080z00_2478 = BgL_arg1327z00_2097;
																				BgL_l1080z00_2094 = BgL_l1080z00_2478;
																				goto
																					BgL_zc3z04anonymousza31324ze3z87_2093;
																			}
																		}
																	}
															}
														}
												}
												{	/* Llib/module.scm 233 */
													obj_t BgL_arg1322z00_2098;

													BgL_arg1322z00_2098 =
														CAR(((obj_t) BgL_accessz00_2087));
													BGl_modulezd2addzd2accesszd2innerz12zc0zz__modulez00
														(BgL_arg1322z00_2098, BgL_infoz00_2088,
														BgL_abasez00_2049);
												}
											}
										}
										{
											obj_t BgL_l1083z00_2482;

											BgL_l1083z00_2482 = CDR(BgL_l1083z00_2086);
											BgL_l1083z00_2086 = BgL_l1083z00_2482;
											goto BgL_zc3z04anonymousza31319ze3z87_2085;
										}
									}
								else
									{	/* Llib/module.scm 234 */
										BgL_tmpz00_2430 = ((bool_t) 1);
									}
							}
						}
					}
					return BBOOL(BgL_tmpz00_2430);
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__modulez00()
	{
		{	/* Llib/module.scm 17 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__modulez00()
	{
		{	/* Llib/module.scm 17 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__modulez00()
	{
		{	/* Llib/module.scm 17 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__modulez00()
	{
		{	/* Llib/module.scm 17 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1803z00zz__modulez00));
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 62374350),
				BSTRING_TO_STRING(BGl_string1803z00zz__modulez00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1803z00zz__modulez00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1803z00zz__modulez00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1803z00zz__modulez00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1803z00zz__modulez00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 220647683),
				BSTRING_TO_STRING(BGl_string1803z00zz__modulez00));
			return
				BGl_modulezd2initializa7ationz75zz__hashz00(((long) 214649622),
				BSTRING_TO_STRING(BGl_string1803z00zz__modulez00));
		}

	}

#ifdef __cplusplus
}
#endif
