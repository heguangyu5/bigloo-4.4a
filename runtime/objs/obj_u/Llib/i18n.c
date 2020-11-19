/*===========================================================================*/
/*   (Llib/i18n.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/i18n.scm -indent -o objs/obj_u/Llib/i18n.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_requirezd2initializa7ationz75zz__i18nz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t bgl_utf8_string_locale_capitalize(obj_t);
	extern obj_t bgl_utf8_string_locale_upcase(obj_t);
	static obj_t BGl_genericzd2initzd2zz__i18nz00();
	static obj_t BGl_objectzd2initzd2zz__i18nz00();
	BGL_EXPORTED_DECL int
		BGl_utf8zd2stringzd2localezd2compare3zd2zz__i18nz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_utf8zd2stringzd2localezd2capitaliza7ez75zz__i18nz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__i18nz00();
	BGL_EXPORTED_DECL obj_t
		BGl_utf8zd2stringzd2localezd2downcasezd2zz__i18nz00(obj_t);
	static obj_t BGl_z62utf8zd2stringzd2localezd2compare3zb0zz__i18nz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__i18nz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62utf8zd2stringzd2localezd2downcasezb0zz__i18nz00(obj_t,
		obj_t);
	static obj_t BGl_z62utf8zd2stringzd2localezd2upcasezb0zz__i18nz00(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__i18nz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__i18nz00();
	BGL_EXPORTED_DECL obj_t
		BGl_utf8zd2stringzd2localezd2upcasezd2zz__i18nz00(obj_t);
	static obj_t BGl_z62utf8zd2stringzd2localezd2capitaliza7ez17zz__i18nz00(obj_t,
		obj_t);
	extern obj_t bgl_utf8_string_locale_downcase(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_utf8zd2stringzd2localezd2compare3zd2envz00zz__i18nz00,
		BgL_bgl_za762utf8za7d2string1619z00,
		BGl_z62utf8zd2stringzd2localezd2compare3zb0zz__i18nz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1612z00zz__i18nz00,
		BgL_bgl_string1612za700za7za7_1620za7, "/tmp/4.4a/runtime/Llib/i18n.scm",
		31);
	      DEFINE_STRING(BGl_string1613z00zz__i18nz00,
		BgL_bgl_string1613za700za7za7_1621za7, "&utf8-string-locale-compare3", 28);
	      DEFINE_STRING(BGl_string1614z00zz__i18nz00,
		BgL_bgl_string1614za700za7za7_1622za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1615z00zz__i18nz00,
		BgL_bgl_string1615za700za7za7_1623za7, "&utf8-string-locale-upcase", 26);
	      DEFINE_STRING(BGl_string1616z00zz__i18nz00,
		BgL_bgl_string1616za700za7za7_1624za7, "&utf8-string-locale-downcase", 28);
	      DEFINE_STRING(BGl_string1617z00zz__i18nz00,
		BgL_bgl_string1617za700za7za7_1625za7, "&utf8-string-locale-capitalize",
		30);
	      DEFINE_STRING(BGl_string1618z00zz__i18nz00,
		BgL_bgl_string1618za700za7za7_1626za7, "__i18n", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_utf8zd2stringzd2localezd2downcasezd2envz00zz__i18nz00,
		BgL_bgl_za762utf8za7d2string1627z00,
		BGl_z62utf8zd2stringzd2localezd2downcasezb0zz__i18nz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_utf8zd2stringzd2localezd2upcasezd2envz00zz__i18nz00,
		BgL_bgl_za762utf8za7d2string1628z00,
		BGl_z62utf8zd2stringzd2localezd2upcasezb0zz__i18nz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_utf8zd2stringzd2localezd2capitaliza7ezd2envza7zz__i18nz00,
		BgL_bgl_za762utf8za7d2string1629z00,
		BGl_z62utf8zd2stringzd2localezd2capitaliza7ez17zz__i18nz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__i18nz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__i18nz00(long
		BgL_checksumz00_1714, char *BgL_fromz00_1715)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__i18nz00))
				{
					BGl_requirezd2initializa7ationz75zz__i18nz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__i18nz00();
					BGl_importedzd2moduleszd2initz00zz__i18nz00();
					return BGl_methodzd2initzd2zz__i18nz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__i18nz00()
	{
		{	/* Llib/i18n.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* utf8-string-locale-compare3 */
	BGL_EXPORTED_DEF int BGl_utf8zd2stringzd2localezd2compare3zd2zz__i18nz00(obj_t
		BgL_leftz00_3, obj_t BgL_rightz00_4)
	{
		{	/* Llib/i18n.scm 77 */
			return BGL_UTF8_STRING_LOCALE_COMPARE3(BgL_leftz00_3, BgL_rightz00_4);
		}

	}



/* &utf8-string-locale-compare3 */
	obj_t BGl_z62utf8zd2stringzd2localezd2compare3zb0zz__i18nz00(obj_t
		BgL_envz00_1695, obj_t BgL_leftz00_1696, obj_t BgL_rightz00_1697)
	{
		{	/* Llib/i18n.scm 77 */
			{	/* Llib/i18n.scm 78 */
				int BgL_tmpz00_1724;

				{	/* Llib/i18n.scm 78 */
					obj_t BgL_auxz00_1732;
					obj_t BgL_auxz00_1725;

					if (STRINGP(BgL_rightz00_1697))
						{	/* Llib/i18n.scm 78 */
							BgL_auxz00_1732 = BgL_rightz00_1697;
						}
					else
						{
							obj_t BgL_auxz00_1735;

							BgL_auxz00_1735 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1612z00zz__i18nz00,
								BINT(((long) 2946)), BGl_string1613z00zz__i18nz00,
								BGl_string1614z00zz__i18nz00, BgL_rightz00_1697);
							FAILURE(BgL_auxz00_1735, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_leftz00_1696))
						{	/* Llib/i18n.scm 78 */
							BgL_auxz00_1725 = BgL_leftz00_1696;
						}
					else
						{
							obj_t BgL_auxz00_1728;

							BgL_auxz00_1728 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1612z00zz__i18nz00,
								BINT(((long) 2946)), BGl_string1613z00zz__i18nz00,
								BGl_string1614z00zz__i18nz00, BgL_leftz00_1696);
							FAILURE(BgL_auxz00_1728, BFALSE, BFALSE);
						}
					BgL_tmpz00_1724 =
						BGl_utf8zd2stringzd2localezd2compare3zd2zz__i18nz00(BgL_auxz00_1725,
						BgL_auxz00_1732);
				}
				return BINT(BgL_tmpz00_1724);
			}
		}

	}



/* utf8-string-locale-upcase */
	BGL_EXPORTED_DEF obj_t BGl_utf8zd2stringzd2localezd2upcasezd2zz__i18nz00(obj_t
		BgL_strz00_5)
	{
		{	/* Llib/i18n.scm 83 */
			return bgl_utf8_string_locale_upcase(BgL_strz00_5);
		}

	}



/* &utf8-string-locale-upcase */
	obj_t BGl_z62utf8zd2stringzd2localezd2upcasezb0zz__i18nz00(obj_t
		BgL_envz00_1698, obj_t BgL_strz00_1699)
	{
		{	/* Llib/i18n.scm 83 */
			{	/* Llib/i18n.scm 86 */
				obj_t BgL_auxz00_1742;

				if (STRINGP(BgL_strz00_1699))
					{	/* Llib/i18n.scm 86 */
						BgL_auxz00_1742 = BgL_strz00_1699;
					}
				else
					{
						obj_t BgL_auxz00_1745;

						BgL_auxz00_1745 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1612z00zz__i18nz00,
							BINT(((long) 3326)), BGl_string1615z00zz__i18nz00,
							BGl_string1614z00zz__i18nz00, BgL_strz00_1699);
						FAILURE(BgL_auxz00_1745, BFALSE, BFALSE);
					}
				return
					BGl_utf8zd2stringzd2localezd2upcasezd2zz__i18nz00(BgL_auxz00_1742);
			}
		}

	}



/* utf8-string-locale-downcase */
	BGL_EXPORTED_DEF obj_t
		BGl_utf8zd2stringzd2localezd2downcasezd2zz__i18nz00(obj_t BgL_strz00_6)
	{
		{	/* Llib/i18n.scm 91 */
			return bgl_utf8_string_locale_downcase(BgL_strz00_6);
		}

	}



/* &utf8-string-locale-downcase */
	obj_t BGl_z62utf8zd2stringzd2localezd2downcasezb0zz__i18nz00(obj_t
		BgL_envz00_1700, obj_t BgL_strz00_1701)
	{
		{	/* Llib/i18n.scm 91 */
			{	/* Llib/i18n.scm 94 */
				obj_t BgL_auxz00_1751;

				if (STRINGP(BgL_strz00_1701))
					{	/* Llib/i18n.scm 94 */
						BgL_auxz00_1751 = BgL_strz00_1701;
					}
				else
					{
						obj_t BgL_auxz00_1754;

						BgL_auxz00_1754 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1612z00zz__i18nz00,
							BINT(((long) 3703)), BGl_string1616z00zz__i18nz00,
							BGl_string1614z00zz__i18nz00, BgL_strz00_1701);
						FAILURE(BgL_auxz00_1754, BFALSE, BFALSE);
					}
				return
					BGl_utf8zd2stringzd2localezd2downcasezd2zz__i18nz00(BgL_auxz00_1751);
			}
		}

	}



/* utf8-string-locale-capitalize */
	BGL_EXPORTED_DEF obj_t
		BGl_utf8zd2stringzd2localezd2capitaliza7ez75zz__i18nz00(obj_t BgL_strz00_7)
	{
		{	/* Llib/i18n.scm 99 */
			return bgl_utf8_string_locale_capitalize(BgL_strz00_7);
		}

	}



/* &utf8-string-locale-capitalize */
	obj_t BGl_z62utf8zd2stringzd2localezd2capitaliza7ez17zz__i18nz00(obj_t
		BgL_envz00_1702, obj_t BgL_strz00_1703)
	{
		{	/* Llib/i18n.scm 99 */
			{	/* Llib/i18n.scm 102 */
				obj_t BgL_auxz00_1760;

				if (STRINGP(BgL_strz00_1703))
					{	/* Llib/i18n.scm 102 */
						BgL_auxz00_1760 = BgL_strz00_1703;
					}
				else
					{
						obj_t BgL_auxz00_1763;

						BgL_auxz00_1763 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1612z00zz__i18nz00,
							BINT(((long) 4086)), BGl_string1617z00zz__i18nz00,
							BGl_string1614z00zz__i18nz00, BgL_strz00_1703);
						FAILURE(BgL_auxz00_1763, BFALSE, BFALSE);
					}
				return
					BGl_utf8zd2stringzd2localezd2capitaliza7ez75zz__i18nz00
					(BgL_auxz00_1760);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__i18nz00()
	{
		{	/* Llib/i18n.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__i18nz00()
	{
		{	/* Llib/i18n.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__i18nz00()
	{
		{	/* Llib/i18n.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__i18nz00()
	{
		{	/* Llib/i18n.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1618z00zz__i18nz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1618z00zz__i18nz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1618z00zz__i18nz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1618z00zz__i18nz00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1618z00zz__i18nz00));
		}

	}

#ifdef __cplusplus
}
#endif
