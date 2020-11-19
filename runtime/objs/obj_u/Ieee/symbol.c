/*===========================================================================*/
/*   (Ieee/symbol.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Ieee/symbol.scm -indent -o objs/obj_u/Ieee/symbol.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2ze3symbolzd2cize3zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rempropz12z70zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_keywordzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_symbols_6_4z00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_keywordzf3zf3zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t
		BGl_keywordzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_z62keywordzd2ze3stringz53zz__r4_symbols_6_4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__r4_symbols_6_4z00();
	static obj_t BGl_z62symbolzd2ze3keywordz53zz__r4_symbols_6_4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_symbolzf3zf3zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_z62symbolzd2plistzb0zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_z62symbolzf3z91zz__r4_symbols_6_4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_z62stringzd2ze3keywordz53zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_z62putpropz12z70zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zz__r4_symbols_6_4z00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62symbolzd2ze3stringz53zz__r4_symbols_6_4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_symbolzd2plistzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__r4_symbols_6_4z00();
	static obj_t BGl_z62keywordzd2ze3stringz12z41zz__r4_symbols_6_4z00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_symbols_6_4z00();
	static obj_t BGl_objectzd2initzd2zz__r4_symbols_6_4z00();
	extern obj_t string_to_keyword(char *);
	static obj_t BGl_symbolzd2appendze70z35zz__r4_symbols_6_4z00(obj_t);
	extern obj_t bgl_gensym(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_z62getpropz62zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62symbolzd2appendzb0zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_z62keywordzf3z91zz__r4_symbols_6_4z00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static long BGl_za2gensymzd2counterza2zd2zz__r4_symbols_6_4z00;
	BGL_EXPORTED_DECL obj_t
		BGl_symbolzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rempropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_z62symbolzd2ze3stringz12z41zz__r4_symbols_6_4z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__r4_symbols_6_4z00();
	BGL_EXPORTED_DECL obj_t
		BGl_keywordzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_z62keywordzd2ze3symbolz53zz__r4_symbols_6_4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_symbolzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_z62stringzd2ze3symbolzd2ciz81zz__r4_symbols_6_4z00(obj_t,
		obj_t);
	static obj_t BGl__gensymz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_z62stringzd2ze3symbolz53zz__r4_symbols_6_4z00(obj_t, obj_t);
	extern obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_symbolzd2appendzd2envz00zz__r4_symbols_6_4z00,
		BgL_bgl_za762symbolza7d2appe1701z00, va_generic_entry,
		BGl_z62symbolzd2appendzb0zz__r4_symbols_6_4z00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2ze3keywordzd2envze3zz__r4_symbols_6_4z00,
		BgL_bgl_za762stringza7d2za7e3k1702za7,
		BGl_z62stringzd2ze3keywordz53zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rempropz12zd2envzc0zz__r4_symbols_6_4z00,
		BgL_bgl_za762rempropza712za7701703za7,
		BGl_z62rempropz12z70zz__r4_symbols_6_4z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_symbolzd2plistzd2envz00zz__r4_symbols_6_4z00,
		BgL_bgl_za762symbolza7d2plis1704z00,
		BGl_z62symbolzd2plistzb0zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_keywordzf3zd2envz21zz__r4_symbols_6_4z00,
		BgL_bgl_za762keywordza7f3za7911705za7,
		BGl_z62keywordzf3z91zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_keywordzd2ze3symbolzd2envze3zz__r4_symbols_6_4z00,
		BgL_bgl_za762keywordza7d2za7e31706za7,
		BGl_z62keywordzd2ze3symbolz53zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2ze3symbolzd2cizd2envz31zz__r4_symbols_6_4z00,
		BgL_bgl_za762stringza7d2za7e3s1707za7,
		BGl_z62stringzd2ze3symbolzd2ciz81zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2ze3symbolzd2envze3zz__r4_symbols_6_4z00,
		BgL_bgl_za762stringza7d2za7e3s1708za7,
		BGl_z62stringzd2ze3symbolz53zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_gensymzd2envzd2zz__r4_symbols_6_4z00,
		BgL_bgl__gensymza700za7za7__r41709za7, opt_generic_entry,
		BGl__gensymz00zz__r4_symbols_6_4z00, BFALSE, -1);
	      DEFINE_STRING(BGl_string1700z00zz__r4_symbols_6_4z00,
		BgL_bgl_string1700za700za7za7_1710za7, "__r4_symbols_6_4", 16);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_symbolzf3zd2envz21zz__r4_symbols_6_4z00,
		BgL_bgl_za762symbolza7f3za791za71711z00,
		BGl_z62symbolzf3z91zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_putpropz12zd2envzc0zz__r4_symbols_6_4z00,
		BgL_bgl_za762putpropza712za7701712za7,
		BGl_z62putpropz12z70zz__r4_symbols_6_4z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_symbolzd2ze3stringzd2envze3zz__r4_symbols_6_4z00,
		BgL_bgl_za762symbolza7d2za7e3s1713za7,
		BGl_z62symbolzd2ze3stringz53zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_symbolzd2ze3keywordzd2envze3zz__r4_symbols_6_4z00,
		BgL_bgl_za762symbolza7d2za7e3k1714za7,
		BGl_z62symbolzd2ze3keywordz53zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getpropzd2envzd2zz__r4_symbols_6_4z00,
		BgL_bgl_za762getpropza762za7za7_1715z00,
		BGl_z62getpropz62zz__r4_symbols_6_4z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_symbolzd2ze3stringz12zd2envzf1zz__r4_symbols_6_4z00,
		BgL_bgl_za762symbolza7d2za7e3s1716za7,
		BGl_z62symbolzd2ze3stringz12z41zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1681z00zz__r4_symbols_6_4z00,
		BgL_bgl_string1681za700za7za7_1717za7, "/tmp/4.4a/runtime/Ieee/symbol.scm",
		33);
	      DEFINE_STRING(BGl_string1682z00zz__r4_symbols_6_4z00,
		BgL_bgl_string1682za700za7za7_1718za7, "&symbol->string", 15);
	      DEFINE_STRING(BGl_string1683z00zz__r4_symbols_6_4z00,
		BgL_bgl_string1683za700za7za7_1719za7, "symbol", 6);
	      DEFINE_STRING(BGl_string1684z00zz__r4_symbols_6_4z00,
		BgL_bgl_string1684za700za7za7_1720za7, "&symbol->string!", 16);
	      DEFINE_STRING(BGl_string1685z00zz__r4_symbols_6_4z00,
		BgL_bgl_string1685za700za7za7_1721za7, "&string->symbol", 15);
	      DEFINE_STRING(BGl_string1686z00zz__r4_symbols_6_4z00,
		BgL_bgl_string1686za700za7za7_1722za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1687z00zz__r4_symbols_6_4z00,
		BgL_bgl_string1687za700za7za7_1723za7, "&string->symbol-ci", 18);
	      DEFINE_STRING(BGl_string1688z00zz__r4_symbols_6_4z00,
		BgL_bgl_string1688za700za7za7_1724za7, "", 0);
	      DEFINE_STRING(BGl_string1689z00zz__r4_symbols_6_4z00,
		BgL_bgl_string1689za700za7za7_1725za7, "gensym", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_keywordzd2ze3stringzd2envze3zz__r4_symbols_6_4z00,
		BgL_bgl_za762keywordza7d2za7e31726za7,
		BGl_z62keywordzd2ze3stringz53zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1690z00zz__r4_symbols_6_4z00,
		BgL_bgl_string1690za700za7za7_1727za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string1691z00zz__r4_symbols_6_4z00,
		BgL_bgl_string1691za700za7za7_1728za7, "symbol-plist", 12);
	      DEFINE_STRING(BGl_string1692z00zz__r4_symbols_6_4z00,
		BgL_bgl_string1692za700za7za7_1729za7,
		"argument is neither a symbol nor a keyword", 42);
	      DEFINE_STRING(BGl_string1693z00zz__r4_symbols_6_4z00,
		BgL_bgl_string1693za700za7za7_1730za7, "getprop", 7);
	      DEFINE_STRING(BGl_string1694z00zz__r4_symbols_6_4z00,
		BgL_bgl_string1694za700za7za7_1731za7, "&keyword->string", 16);
	      DEFINE_STRING(BGl_string1695z00zz__r4_symbols_6_4z00,
		BgL_bgl_string1695za700za7za7_1732za7, "keyword", 7);
	      DEFINE_STRING(BGl_string1696z00zz__r4_symbols_6_4z00,
		BgL_bgl_string1696za700za7za7_1733za7, "&keyword->string!", 17);
	      DEFINE_STRING(BGl_string1697z00zz__r4_symbols_6_4z00,
		BgL_bgl_string1697za700za7za7_1734za7, "&string->keyword", 16);
	      DEFINE_STRING(BGl_string1698z00zz__r4_symbols_6_4z00,
		BgL_bgl_string1698za700za7za7_1735za7, "&symbol->keyword", 16);
	      DEFINE_STRING(BGl_string1699z00zz__r4_symbols_6_4z00,
		BgL_bgl_string1699za700za7za7_1736za7, "&keyword->symbol", 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_keywordzd2ze3stringz12zd2envzf1zz__r4_symbols_6_4z00,
		BgL_bgl_za762keywordza7d2za7e31737za7,
		BGl_z62keywordzd2ze3stringz12z41zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__r4_symbols_6_4z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long
		BgL_checksumz00_1903, char *BgL_fromz00_1904)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_symbols_6_4z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_symbols_6_4z00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__r4_symbols_6_4z00();
					BGl_importedzd2moduleszd2initz00zz__r4_symbols_6_4z00();
					return BGl_toplevelzd2initzd2zz__r4_symbols_6_4z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__r4_symbols_6_4z00()
	{
		{	/* Ieee/symbol.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__r4_symbols_6_4z00()
	{
		{	/* Ieee/symbol.scm 14 */
			return (BGl_za2gensymzd2counterza2zd2zz__r4_symbols_6_4z00 =
				((long) 999), BUNSPEC);
		}

	}



/* symbol? */
	BGL_EXPORTED_DEF bool_t BGl_symbolzf3zf3zz__r4_symbols_6_4z00(obj_t
		BgL_objz00_3)
	{
		{	/* Ieee/symbol.scm 131 */
			return SYMBOLP(BgL_objz00_3);
		}

	}



/* &symbol? */
	obj_t BGl_z62symbolzf3z91zz__r4_symbols_6_4z00(obj_t BgL_envz00_1847,
		obj_t BgL_objz00_1848)
	{
		{	/* Ieee/symbol.scm 131 */
			return BBOOL(BGl_symbolzf3zf3zz__r4_symbols_6_4z00(BgL_objz00_1848));
		}

	}



/* symbol->string */
	BGL_EXPORTED_DEF obj_t BGl_symbolzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t
		BgL_symbolz00_4)
	{
		{	/* Ieee/symbol.scm 137 */
			{	/* Ieee/symbol.scm 138 */
				obj_t BgL_arg1167z00_1901;

				BgL_arg1167z00_1901 = SYMBOL_TO_STRING(BgL_symbolz00_4);
				return BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1167z00_1901);
			}
		}

	}



/* &symbol->string */
	obj_t BGl_z62symbolzd2ze3stringz53zz__r4_symbols_6_4z00(obj_t BgL_envz00_1849,
		obj_t BgL_symbolz00_1850)
	{
		{	/* Ieee/symbol.scm 137 */
			{	/* Ieee/symbol.scm 138 */
				obj_t BgL_auxz00_1917;

				if (SYMBOLP(BgL_symbolz00_1850))
					{	/* Ieee/symbol.scm 138 */
						BgL_auxz00_1917 = BgL_symbolz00_1850;
					}
				else
					{
						obj_t BgL_auxz00_1920;

						BgL_auxz00_1920 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1681z00zz__r4_symbols_6_4z00, BINT(((long) 5685)),
							BGl_string1682z00zz__r4_symbols_6_4z00,
							BGl_string1683z00zz__r4_symbols_6_4z00, BgL_symbolz00_1850);
						FAILURE(BgL_auxz00_1920, BFALSE, BFALSE);
					}
				return BGl_symbolzd2ze3stringz31zz__r4_symbols_6_4z00(BgL_auxz00_1917);
			}
		}

	}



/* symbol->string! */
	BGL_EXPORTED_DEF obj_t BGl_symbolzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t
		BgL_symbolz00_5)
	{
		{	/* Ieee/symbol.scm 143 */
			return SYMBOL_TO_STRING(BgL_symbolz00_5);
		}

	}



/* &symbol->string! */
	obj_t BGl_z62symbolzd2ze3stringz12z41zz__r4_symbols_6_4z00(obj_t
		BgL_envz00_1851, obj_t BgL_symbolz00_1852)
	{
		{	/* Ieee/symbol.scm 143 */
			{	/* Ieee/symbol.scm 144 */
				obj_t BgL_auxz00_1926;

				if (SYMBOLP(BgL_symbolz00_1852))
					{	/* Ieee/symbol.scm 144 */
						BgL_auxz00_1926 = BgL_symbolz00_1852;
					}
				else
					{
						obj_t BgL_auxz00_1929;

						BgL_auxz00_1929 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1681z00zz__r4_symbols_6_4z00, BINT(((long) 5979)),
							BGl_string1684z00zz__r4_symbols_6_4z00,
							BGl_string1683z00zz__r4_symbols_6_4z00, BgL_symbolz00_1852);
						FAILURE(BgL_auxz00_1929, BFALSE, BFALSE);
					}
				return
					BGl_symbolzd2ze3stringz12z23zz__r4_symbols_6_4z00(BgL_auxz00_1926);
			}
		}

	}



/* string->symbol */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t
		BgL_stringz00_6)
	{
		{	/* Ieee/symbol.scm 149 */
			return bstring_to_symbol(BgL_stringz00_6);
		}

	}



/* &string->symbol */
	obj_t BGl_z62stringzd2ze3symbolz53zz__r4_symbols_6_4z00(obj_t BgL_envz00_1853,
		obj_t BgL_stringz00_1854)
	{
		{	/* Ieee/symbol.scm 149 */
			{	/* Ieee/symbol.scm 150 */
				obj_t BgL_auxz00_1935;

				if (STRINGP(BgL_stringz00_1854))
					{	/* Ieee/symbol.scm 150 */
						BgL_auxz00_1935 = BgL_stringz00_1854;
					}
				else
					{
						obj_t BgL_auxz00_1938;

						BgL_auxz00_1938 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1681z00zz__r4_symbols_6_4z00, BINT(((long) 6271)),
							BGl_string1685z00zz__r4_symbols_6_4z00,
							BGl_string1686z00zz__r4_symbols_6_4z00, BgL_stringz00_1854);
						FAILURE(BgL_auxz00_1938, BFALSE, BFALSE);
					}
				return BGl_stringzd2ze3symbolz31zz__r4_symbols_6_4z00(BgL_auxz00_1935);
			}
		}

	}



/* string->symbol-ci */
	BGL_EXPORTED_DEF obj_t
		BGl_stringzd2ze3symbolzd2cize3zz__r4_symbols_6_4z00(obj_t BgL_stringz00_7)
	{
		{	/* Ieee/symbol.scm 155 */
			return
				bstring_to_symbol(BGl_stringzd2upcasezd2zz__r4_strings_6_7z00
				(BgL_stringz00_7));
		}

	}



/* &string->symbol-ci */
	obj_t BGl_z62stringzd2ze3symbolzd2ciz81zz__r4_symbols_6_4z00(obj_t
		BgL_envz00_1855, obj_t BgL_stringz00_1856)
	{
		{	/* Ieee/symbol.scm 155 */
			{	/* Ieee/symbol.scm 156 */
				obj_t BgL_auxz00_1945;

				if (STRINGP(BgL_stringz00_1856))
					{	/* Ieee/symbol.scm 156 */
						BgL_auxz00_1945 = BgL_stringz00_1856;
					}
				else
					{
						obj_t BgL_auxz00_1948;

						BgL_auxz00_1948 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1681z00zz__r4_symbols_6_4z00, BINT(((long) 6579)),
							BGl_string1687z00zz__r4_symbols_6_4z00,
							BGl_string1686z00zz__r4_symbols_6_4z00, BgL_stringz00_1856);
						FAILURE(BgL_auxz00_1948, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2ze3symbolzd2cize3zz__r4_symbols_6_4z00(BgL_auxz00_1945);
			}
		}

	}



/* symbol-append */
	BGL_EXPORTED_DEF obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t
		BgL_listz00_8)
	{
		{	/* Ieee/symbol.scm 161 */
			{	/* Ieee/symbol.scm 163 */
				obj_t BgL_arg1170z00_1042;

				if (NULLP(BgL_listz00_8))
					{	/* Ieee/symbol.scm 163 */
						BgL_arg1170z00_1042 = BGl_string1688z00zz__r4_symbols_6_4z00;
					}
				else
					{	/* Ieee/symbol.scm 163 */
						BgL_arg1170z00_1042 =
							BGl_symbolzd2appendze70z35zz__r4_symbols_6_4z00(BgL_listz00_8);
					}
				return bstring_to_symbol(BgL_arg1170z00_1042);
			}
		}

	}



/* symbol-append~0 */
	obj_t BGl_symbolzd2appendze70z35zz__r4_symbols_6_4z00(obj_t BgL_listz00_1045)
	{
		{	/* Ieee/symbol.scm 165 */
			if (NULLP(CDR(((obj_t) BgL_listz00_1045))))
				{	/* Ieee/symbol.scm 167 */
					obj_t BgL_arg1176z00_1049;

					BgL_arg1176z00_1049 = CAR(((obj_t) BgL_listz00_1045));
					{	/* Ieee/symbol.scm 167 */
						obj_t BgL_res1581z00_1510;

						{	/* Ieee/symbol.scm 138 */
							obj_t BgL_arg1167z00_1509;

							BgL_arg1167z00_1509 =
								SYMBOL_TO_STRING(((obj_t) BgL_arg1176z00_1049));
							BgL_res1581z00_1510 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1167z00_1509);
						}
						return BgL_res1581z00_1510;
					}
				}
			else
				{	/* Ieee/symbol.scm 168 */
					obj_t BgL_arg1177z00_1050;
					obj_t BgL_arg1178z00_1051;

					{	/* Ieee/symbol.scm 168 */
						obj_t BgL_arg1179z00_1052;

						BgL_arg1179z00_1052 = CAR(((obj_t) BgL_listz00_1045));
						{	/* Ieee/symbol.scm 168 */
							obj_t BgL_res1582z00_1514;

							{	/* Ieee/symbol.scm 138 */
								obj_t BgL_arg1167z00_1513;

								BgL_arg1167z00_1513 =
									SYMBOL_TO_STRING(((obj_t) BgL_arg1179z00_1052));
								BgL_res1582z00_1514 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1167z00_1513);
							}
							BgL_arg1177z00_1050 = BgL_res1582z00_1514;
						}
					}
					{	/* Ieee/symbol.scm 169 */
						obj_t BgL_arg1186z00_1053;

						BgL_arg1186z00_1053 = CDR(((obj_t) BgL_listz00_1045));
						BgL_arg1178z00_1051 =
							BGl_symbolzd2appendze70z35zz__r4_symbols_6_4z00
							(BgL_arg1186z00_1053);
					}
					return string_append(BgL_arg1177z00_1050, BgL_arg1178z00_1051);
				}
		}

	}



/* &symbol-append */
	obj_t BGl_z62symbolzd2appendzb0zz__r4_symbols_6_4z00(obj_t BgL_envz00_1857,
		obj_t BgL_listz00_1858)
	{
		{	/* Ieee/symbol.scm 161 */
			return BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_listz00_1858);
		}

	}



/* _gensym */
	obj_t BGl__gensymz00zz__r4_symbols_6_4z00(obj_t BgL_env1087z00_11,
		obj_t BgL_opt1086z00_10)
	{
		{	/* Ieee/symbol.scm 179 */
			{	/* Ieee/symbol.scm 179 */

				switch (VECTOR_LENGTH(BgL_opt1086z00_10))
					{
					case ((long) 0):

						{	/* Ieee/symbol.scm 179 */

							return BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
						}
						break;
					case ((long) 1):

						{	/* Ieee/symbol.scm 179 */
							obj_t BgL_argz00_1060;

							BgL_argz00_1060 = VECTOR_REF(BgL_opt1086z00_10, ((long) 0));
							{	/* Ieee/symbol.scm 179 */

								return BGl_gensymz00zz__r4_symbols_6_4z00(BgL_argz00_1060);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* gensym */
	BGL_EXPORTED_DEF obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t BgL_argz00_9)
	{
		{	/* Ieee/symbol.scm 179 */
			{	/* Ieee/symbol.scm 182 */
				obj_t BgL_argz00_1061;

				if (CBOOL(BgL_argz00_9))
					{	/* Ieee/symbol.scm 183 */
						if (SYMBOLP(BgL_argz00_9))
							{	/* Ieee/symbol.scm 184 */
								obj_t BgL_res1585z00_1521;

								{	/* Ieee/symbol.scm 138 */
									obj_t BgL_arg1167z00_1520;

									BgL_arg1167z00_1520 = SYMBOL_TO_STRING(BgL_argz00_9);
									BgL_res1585z00_1521 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1167z00_1520);
								}
								BgL_argz00_1061 = BgL_res1585z00_1521;
							}
						else
							{	/* Ieee/symbol.scm 184 */
								if (STRINGP(BgL_argz00_9))
									{	/* Ieee/symbol.scm 185 */
										BgL_argz00_1061 = BgL_argz00_9;
									}
								else
									{	/* Ieee/symbol.scm 185 */
										BgL_argz00_1061 =
											BGl_errorz00zz__errorz00
											(BGl_string1689z00zz__r4_symbols_6_4z00,
											BGl_string1690z00zz__r4_symbols_6_4z00, BgL_argz00_9);
									}
							}
					}
				else
					{	/* Ieee/symbol.scm 183 */
						BgL_argz00_1061 = BgL_argz00_9;
					}
				return bgl_gensym(BgL_argz00_1061);
			}
		}

	}



/* symbol-plist */
	BGL_EXPORTED_DEF obj_t BGl_symbolzd2plistzd2zz__r4_symbols_6_4z00(obj_t
		BgL_symbolz00_12)
	{
		{	/* Ieee/symbol.scm 205 */
			if (SYMBOLP(BgL_symbolz00_12))
				{	/* Ieee/symbol.scm 207 */
					return GET_SYMBOL_PLIST(BgL_symbolz00_12);
				}
			else
				{	/* Ieee/symbol.scm 207 */
					if (KEYWORDP(BgL_symbolz00_12))
						{	/* Ieee/symbol.scm 209 */
							return GET_KEYWORD_PLIST(BgL_symbolz00_12);
						}
					else
						{	/* Ieee/symbol.scm 209 */
							return
								BGl_errorz00zz__errorz00(BGl_string1691z00zz__r4_symbols_6_4z00,
								BGl_string1692z00zz__r4_symbols_6_4z00, BgL_symbolz00_12);
						}
				}
		}

	}



/* &symbol-plist */
	obj_t BGl_z62symbolzd2plistzb0zz__r4_symbols_6_4z00(obj_t BgL_envz00_1859,
		obj_t BgL_symbolz00_1860)
	{
		{	/* Ieee/symbol.scm 205 */
			return BGl_symbolzd2plistzd2zz__r4_symbols_6_4z00(BgL_symbolz00_1860);
		}

	}



/* getprop */
	BGL_EXPORTED_DEF obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t
		BgL_symbolz00_13, obj_t BgL_keyz00_14)
	{
		{	/* Ieee/symbol.scm 219 */
			{	/* Ieee/symbol.scm 220 */
				bool_t BgL_test1750z00_1999;

				if (SYMBOLP(BgL_symbolz00_13))
					{	/* Ieee/symbol.scm 220 */
						BgL_test1750z00_1999 = ((bool_t) 1);
					}
				else
					{	/* Ieee/symbol.scm 220 */
						BgL_test1750z00_1999 = KEYWORDP(BgL_symbolz00_13);
					}
				if (BgL_test1750z00_1999)
					{	/* Ieee/symbol.scm 221 */
						obj_t BgL_g1040z00_1068;

						if (SYMBOLP(BgL_symbolz00_13))
							{	/* Ieee/symbol.scm 207 */
								BgL_g1040z00_1068 = GET_SYMBOL_PLIST(BgL_symbolz00_13);
							}
						else
							{	/* Ieee/symbol.scm 207 */
								if (KEYWORDP(BgL_symbolz00_13))
									{	/* Ieee/symbol.scm 209 */
										BgL_g1040z00_1068 = GET_KEYWORD_PLIST(BgL_symbolz00_13);
									}
								else
									{	/* Ieee/symbol.scm 209 */
										BgL_g1040z00_1068 =
											BGl_errorz00zz__errorz00
											(BGl_string1691z00zz__r4_symbols_6_4z00,
											BGl_string1692z00zz__r4_symbols_6_4z00, BgL_symbolz00_13);
									}
							}
						{
							obj_t BgL_plz00_1070;

							BgL_plz00_1070 = BgL_g1040z00_1068;
						BgL_zc3z04anonymousza31198ze3z87_1071:
							if (NULLP(BgL_plz00_1070))
								{	/* Ieee/symbol.scm 223 */
									return BFALSE;
								}
							else
								{	/* Ieee/symbol.scm 223 */
									if ((CAR(((obj_t) BgL_plz00_1070)) == BgL_keyz00_14))
										{	/* Ieee/symbol.scm 226 */
											obj_t BgL_pairz00_1538;

											BgL_pairz00_1538 = CDR(((obj_t) BgL_plz00_1070));
											return CAR(BgL_pairz00_1538);
										}
									else
										{	/* Ieee/symbol.scm 228 */
											obj_t BgL_arg1208z00_1075;

											{	/* Ieee/symbol.scm 228 */
												obj_t BgL_pairz00_1542;

												BgL_pairz00_1542 = CDR(((obj_t) BgL_plz00_1070));
												BgL_arg1208z00_1075 = CDR(BgL_pairz00_1542);
											}
											{
												obj_t BgL_plz00_2022;

												BgL_plz00_2022 = BgL_arg1208z00_1075;
												BgL_plz00_1070 = BgL_plz00_2022;
												goto BgL_zc3z04anonymousza31198ze3z87_1071;
											}
										}
								}
						}
					}
				else
					{	/* Ieee/symbol.scm 220 */
						return
							BGl_errorz00zz__errorz00(BGl_string1693z00zz__r4_symbols_6_4z00,
							BGl_string1692z00zz__r4_symbols_6_4z00, BgL_symbolz00_13);
					}
			}
		}

	}



/* &getprop */
	obj_t BGl_z62getpropz62zz__r4_symbols_6_4z00(obj_t BgL_envz00_1861,
		obj_t BgL_symbolz00_1862, obj_t BgL_keyz00_1863)
	{
		{	/* Ieee/symbol.scm 219 */
			return
				BGl_getpropz00zz__r4_symbols_6_4z00(BgL_symbolz00_1862,
				BgL_keyz00_1863);
		}

	}



/* putprop! */
	BGL_EXPORTED_DEF obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t
		BgL_symbolz00_15, obj_t BgL_keyz00_16, obj_t BgL_valz00_17)
	{
		{	/* Ieee/symbol.scm 234 */
			{	/* Ieee/symbol.scm 235 */
				bool_t BgL_test1756z00_2025;

				if (SYMBOLP(BgL_symbolz00_15))
					{	/* Ieee/symbol.scm 235 */
						BgL_test1756z00_2025 = ((bool_t) 1);
					}
				else
					{	/* Ieee/symbol.scm 235 */
						BgL_test1756z00_2025 = KEYWORDP(BgL_symbolz00_15);
					}
				if (BgL_test1756z00_2025)
					{	/* Ieee/symbol.scm 236 */
						obj_t BgL_g1041z00_1081;

						if (SYMBOLP(BgL_symbolz00_15))
							{	/* Ieee/symbol.scm 207 */
								BgL_g1041z00_1081 = GET_SYMBOL_PLIST(BgL_symbolz00_15);
							}
						else
							{	/* Ieee/symbol.scm 207 */
								if (KEYWORDP(BgL_symbolz00_15))
									{	/* Ieee/symbol.scm 209 */
										BgL_g1041z00_1081 = GET_KEYWORD_PLIST(BgL_symbolz00_15);
									}
								else
									{	/* Ieee/symbol.scm 209 */
										BgL_g1041z00_1081 =
											BGl_errorz00zz__errorz00
											(BGl_string1691z00zz__r4_symbols_6_4z00,
											BGl_string1692z00zz__r4_symbols_6_4z00, BgL_symbolz00_15);
									}
							}
						{
							obj_t BgL_plz00_1083;

							BgL_plz00_1083 = BgL_g1041z00_1081;
						BgL_zc3z04anonymousza31214ze3z87_1084:
							if (NULLP(BgL_plz00_1083))
								{	/* Ieee/symbol.scm 239 */
									obj_t BgL_newz00_1086;

									{	/* Ieee/symbol.scm 239 */
										obj_t BgL_arg1221z00_1088;

										{	/* Ieee/symbol.scm 239 */
											obj_t BgL_arg1223z00_1089;

											if (SYMBOLP(BgL_symbolz00_15))
												{	/* Ieee/symbol.scm 207 */
													BgL_arg1223z00_1089 =
														GET_SYMBOL_PLIST(BgL_symbolz00_15);
												}
											else
												{	/* Ieee/symbol.scm 207 */
													if (KEYWORDP(BgL_symbolz00_15))
														{	/* Ieee/symbol.scm 209 */
															BgL_arg1223z00_1089 =
																GET_KEYWORD_PLIST(BgL_symbolz00_15);
														}
													else
														{	/* Ieee/symbol.scm 209 */
															BgL_arg1223z00_1089 =
																BGl_errorz00zz__errorz00
																(BGl_string1691z00zz__r4_symbols_6_4z00,
																BGl_string1692z00zz__r4_symbols_6_4z00,
																BgL_symbolz00_15);
														}
												}
											BgL_arg1221z00_1088 =
												MAKE_YOUNG_PAIR(BgL_valz00_17, BgL_arg1223z00_1089);
										}
										BgL_newz00_1086 =
											MAKE_YOUNG_PAIR(BgL_keyz00_16, BgL_arg1221z00_1088);
									}
									if (SYMBOLP(BgL_symbolz00_15))
										{	/* Ieee/symbol.scm 240 */
											SET_SYMBOL_PLIST(BgL_symbolz00_15, BgL_newz00_1086);
										}
									else
										{	/* Ieee/symbol.scm 240 */
											SET_KEYWORD_PLIST(BgL_symbolz00_15, BgL_newz00_1086);
										}
									return BgL_newz00_1086;
								}
							else
								{	/* Ieee/symbol.scm 238 */
									if ((CAR(((obj_t) BgL_plz00_1083)) == BgL_keyz00_16))
										{	/* Ieee/symbol.scm 245 */
											obj_t BgL_arg1227z00_1092;

											BgL_arg1227z00_1092 = CDR(((obj_t) BgL_plz00_1083));
											{	/* Ieee/symbol.scm 245 */
												obj_t BgL_tmpz00_2057;

												BgL_tmpz00_2057 = ((obj_t) BgL_arg1227z00_1092);
												return SET_CAR(BgL_tmpz00_2057, BgL_valz00_17);
											}
										}
									else
										{	/* Ieee/symbol.scm 247 */
											obj_t BgL_arg1229z00_1093;

											{	/* Ieee/symbol.scm 247 */
												obj_t BgL_pairz00_1561;

												BgL_pairz00_1561 = CDR(((obj_t) BgL_plz00_1083));
												BgL_arg1229z00_1093 = CDR(BgL_pairz00_1561);
											}
											{
												obj_t BgL_plz00_2063;

												BgL_plz00_2063 = BgL_arg1229z00_1093;
												BgL_plz00_1083 = BgL_plz00_2063;
												goto BgL_zc3z04anonymousza31214ze3z87_1084;
											}
										}
								}
						}
					}
				else
					{	/* Ieee/symbol.scm 235 */
						return
							BGl_errorz00zz__errorz00(BGl_string1693z00zz__r4_symbols_6_4z00,
							BGl_string1692z00zz__r4_symbols_6_4z00, BgL_symbolz00_15);
					}
			}
		}

	}



/* &putprop! */
	obj_t BGl_z62putpropz12z70zz__r4_symbols_6_4z00(obj_t BgL_envz00_1864,
		obj_t BgL_symbolz00_1865, obj_t BgL_keyz00_1866, obj_t BgL_valz00_1867)
	{
		{	/* Ieee/symbol.scm 234 */
			return
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_symbolz00_1865,
				BgL_keyz00_1866, BgL_valz00_1867);
		}

	}



/* remprop! */
	BGL_EXPORTED_DEF obj_t BGl_rempropz12z12zz__r4_symbols_6_4z00(obj_t
		BgL_symbolz00_18, obj_t BgL_keyz00_19)
	{
		{	/* Ieee/symbol.scm 253 */
			{	/* Ieee/symbol.scm 254 */
				bool_t BgL_test1765z00_2066;

				if (SYMBOLP(BgL_symbolz00_18))
					{	/* Ieee/symbol.scm 254 */
						BgL_test1765z00_2066 = ((bool_t) 1);
					}
				else
					{	/* Ieee/symbol.scm 254 */
						BgL_test1765z00_2066 = KEYWORDP(BgL_symbolz00_18);
					}
				if (BgL_test1765z00_2066)
					{	/* Ieee/symbol.scm 255 */
						obj_t BgL_g1043z00_1100;

						if (SYMBOLP(BgL_symbolz00_18))
							{	/* Ieee/symbol.scm 207 */
								BgL_g1043z00_1100 = GET_SYMBOL_PLIST(BgL_symbolz00_18);
							}
						else
							{	/* Ieee/symbol.scm 207 */
								if (KEYWORDP(BgL_symbolz00_18))
									{	/* Ieee/symbol.scm 209 */
										BgL_g1043z00_1100 = GET_KEYWORD_PLIST(BgL_symbolz00_18);
									}
								else
									{	/* Ieee/symbol.scm 209 */
										BgL_g1043z00_1100 =
											BGl_errorz00zz__errorz00
											(BGl_string1691z00zz__r4_symbols_6_4z00,
											BGl_string1692z00zz__r4_symbols_6_4z00, BgL_symbolz00_18);
									}
							}
						{
							obj_t BgL_oldz00_1102;
							obj_t BgL_lz00_1103;

							BgL_oldz00_1102 = BNIL;
							BgL_lz00_1103 = BgL_g1043z00_1100;
						BgL_zc3z04anonymousza31235ze3z87_1104:
							if (NULLP(BgL_lz00_1103))
								{	/* Ieee/symbol.scm 258 */
									return BFALSE;
								}
							else
								{	/* Ieee/symbol.scm 258 */
									if ((CAR(((obj_t) BgL_lz00_1103)) == BgL_keyz00_19))
										{	/* Ieee/symbol.scm 260 */
											if (PAIRP(BgL_oldz00_1102))
												{	/* Ieee/symbol.scm 263 */
													obj_t BgL_arg1242z00_1109;
													obj_t BgL_arg1243z00_1110;

													BgL_arg1242z00_1109 = CDR(BgL_oldz00_1102);
													{	/* Ieee/symbol.scm 263 */
														obj_t BgL_pairz00_1575;

														BgL_pairz00_1575 = CDR(((obj_t) BgL_lz00_1103));
														BgL_arg1243z00_1110 = CDR(BgL_pairz00_1575);
													}
													{	/* Ieee/symbol.scm 263 */
														obj_t BgL_tmpz00_2089;

														BgL_tmpz00_2089 = ((obj_t) BgL_arg1242z00_1109);
														return
															SET_CDR(BgL_tmpz00_2089, BgL_arg1243z00_1110);
													}
												}
											else
												{	/* Ieee/symbol.scm 262 */
													if (SYMBOLP(BgL_symbolz00_18))
														{	/* Ieee/symbol.scm 266 */
															obj_t BgL_arg1245z00_1112;

															{	/* Ieee/symbol.scm 266 */
																obj_t BgL_pairz00_1581;

																BgL_pairz00_1581 = CDR(((obj_t) BgL_lz00_1103));
																BgL_arg1245z00_1112 = CDR(BgL_pairz00_1581);
															}
															return
																SET_SYMBOL_PLIST(BgL_symbolz00_18,
																BgL_arg1245z00_1112);
														}
													else
														{	/* Ieee/symbol.scm 267 */
															obj_t BgL_arg1246z00_1113;

															{	/* Ieee/symbol.scm 267 */
																obj_t BgL_pairz00_1585;

																BgL_pairz00_1585 = CDR(((obj_t) BgL_lz00_1103));
																BgL_arg1246z00_1113 = CDR(BgL_pairz00_1585);
															}
															return
																SET_KEYWORD_PLIST(BgL_symbolz00_18,
																BgL_arg1246z00_1113);
														}
												}
										}
									else
										{	/* Ieee/symbol.scm 269 */
											obj_t BgL_arg1247z00_1114;

											{	/* Ieee/symbol.scm 269 */
												obj_t BgL_pairz00_1589;

												BgL_pairz00_1589 = CDR(((obj_t) BgL_lz00_1103));
												BgL_arg1247z00_1114 = CDR(BgL_pairz00_1589);
											}
											{
												obj_t BgL_lz00_2106;
												obj_t BgL_oldz00_2105;

												BgL_oldz00_2105 = BgL_lz00_1103;
												BgL_lz00_2106 = BgL_arg1247z00_1114;
												BgL_lz00_1103 = BgL_lz00_2106;
												BgL_oldz00_1102 = BgL_oldz00_2105;
												goto BgL_zc3z04anonymousza31235ze3z87_1104;
											}
										}
								}
						}
					}
				else
					{	/* Ieee/symbol.scm 254 */
						return
							BGl_errorz00zz__errorz00(BGl_string1693z00zz__r4_symbols_6_4z00,
							BGl_string1692z00zz__r4_symbols_6_4z00, BgL_symbolz00_18);
					}
			}
		}

	}



/* &remprop! */
	obj_t BGl_z62rempropz12z70zz__r4_symbols_6_4z00(obj_t BgL_envz00_1868,
		obj_t BgL_symbolz00_1869, obj_t BgL_keyz00_1870)
	{
		{	/* Ieee/symbol.scm 253 */
			return
				BGl_rempropz12z12zz__r4_symbols_6_4z00(BgL_symbolz00_1869,
				BgL_keyz00_1870);
		}

	}



/* keyword? */
	BGL_EXPORTED_DEF bool_t BGl_keywordzf3zf3zz__r4_symbols_6_4z00(obj_t
		BgL_objz00_20)
	{
		{	/* Ieee/symbol.scm 275 */
			return KEYWORDP(BgL_objz00_20);
		}

	}



/* &keyword? */
	obj_t BGl_z62keywordzf3z91zz__r4_symbols_6_4z00(obj_t BgL_envz00_1871,
		obj_t BgL_objz00_1872)
	{
		{	/* Ieee/symbol.scm 275 */
			return BBOOL(BGl_keywordzf3zf3zz__r4_symbols_6_4z00(BgL_objz00_1872));
		}

	}



/* keyword->string */
	BGL_EXPORTED_DEF obj_t BGl_keywordzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t
		BgL_keywordz00_21)
	{
		{	/* Ieee/symbol.scm 281 */
			{	/* Ieee/symbol.scm 282 */
				obj_t BgL_arg1252z00_1902;

				BgL_arg1252z00_1902 = KEYWORD_TO_STRING(BgL_keywordz00_21);
				return BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1252z00_1902);
			}
		}

	}



/* &keyword->string */
	obj_t BGl_z62keywordzd2ze3stringz53zz__r4_symbols_6_4z00(obj_t
		BgL_envz00_1873, obj_t BgL_keywordz00_1874)
	{
		{	/* Ieee/symbol.scm 281 */
			{	/* Ieee/symbol.scm 282 */
				obj_t BgL_auxz00_2114;

				if (KEYWORDP(BgL_keywordz00_1874))
					{	/* Ieee/symbol.scm 282 */
						BgL_auxz00_2114 = BgL_keywordz00_1874;
					}
				else
					{
						obj_t BgL_auxz00_2117;

						BgL_auxz00_2117 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1681z00zz__r4_symbols_6_4z00, BINT(((long) 11283)),
							BGl_string1694z00zz__r4_symbols_6_4z00,
							BGl_string1695z00zz__r4_symbols_6_4z00, BgL_keywordz00_1874);
						FAILURE(BgL_auxz00_2117, BFALSE, BFALSE);
					}
				return BGl_keywordzd2ze3stringz31zz__r4_symbols_6_4z00(BgL_auxz00_2114);
			}
		}

	}



/* keyword->string! */
	BGL_EXPORTED_DEF obj_t
		BGl_keywordzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t BgL_keywordz00_22)
	{
		{	/* Ieee/symbol.scm 287 */
			return KEYWORD_TO_STRING(BgL_keywordz00_22);
		}

	}



/* &keyword->string! */
	obj_t BGl_z62keywordzd2ze3stringz12z41zz__r4_symbols_6_4z00(obj_t
		BgL_envz00_1875, obj_t BgL_keywordz00_1876)
	{
		{	/* Ieee/symbol.scm 287 */
			{	/* Ieee/symbol.scm 288 */
				obj_t BgL_auxz00_2123;

				if (KEYWORDP(BgL_keywordz00_1876))
					{	/* Ieee/symbol.scm 288 */
						BgL_auxz00_2123 = BgL_keywordz00_1876;
					}
				else
					{
						obj_t BgL_auxz00_2126;

						BgL_auxz00_2126 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1681z00zz__r4_symbols_6_4z00, BINT(((long) 11581)),
							BGl_string1696z00zz__r4_symbols_6_4z00,
							BGl_string1695z00zz__r4_symbols_6_4z00, BgL_keywordz00_1876);
						FAILURE(BgL_auxz00_2126, BFALSE, BFALSE);
					}
				return
					BGl_keywordzd2ze3stringz12z23zz__r4_symbols_6_4z00(BgL_auxz00_2123);
			}
		}

	}



/* string->keyword */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t
		BgL_stringz00_23)
	{
		{	/* Ieee/symbol.scm 293 */
			return string_to_keyword(BSTRING_TO_STRING(BgL_stringz00_23));
		}

	}



/* &string->keyword */
	obj_t BGl_z62stringzd2ze3keywordz53zz__r4_symbols_6_4z00(obj_t
		BgL_envz00_1877, obj_t BgL_stringz00_1878)
	{
		{	/* Ieee/symbol.scm 293 */
			{	/* Ieee/symbol.scm 294 */
				obj_t BgL_auxz00_2133;

				if (STRINGP(BgL_stringz00_1878))
					{	/* Ieee/symbol.scm 294 */
						BgL_auxz00_2133 = BgL_stringz00_1878;
					}
				else
					{
						obj_t BgL_auxz00_2136;

						BgL_auxz00_2136 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1681z00zz__r4_symbols_6_4z00, BINT(((long) 11876)),
							BGl_string1697z00zz__r4_symbols_6_4z00,
							BGl_string1686z00zz__r4_symbols_6_4z00, BgL_stringz00_1878);
						FAILURE(BgL_auxz00_2136, BFALSE, BFALSE);
					}
				return BGl_stringzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_auxz00_2133);
			}
		}

	}



/* symbol->keyword */
	BGL_EXPORTED_DEF obj_t BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t
		BgL_symbolz00_24)
	{
		{	/* Ieee/symbol.scm 299 */
			{	/* Ieee/symbol.scm 300 */
				obj_t BgL_arg1253z00_1591;

				{	/* Ieee/symbol.scm 300 */
					obj_t BgL_res1609z00_1594;

					{	/* Ieee/symbol.scm 138 */
						obj_t BgL_arg1167z00_1593;

						BgL_arg1167z00_1593 = SYMBOL_TO_STRING(BgL_symbolz00_24);
						BgL_res1609z00_1594 =
							BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1167z00_1593);
					}
					BgL_arg1253z00_1591 = BgL_res1609z00_1594;
				}
				return string_to_keyword(BSTRING_TO_STRING(BgL_arg1253z00_1591));
			}
		}

	}



/* &symbol->keyword */
	obj_t BGl_z62symbolzd2ze3keywordz53zz__r4_symbols_6_4z00(obj_t
		BgL_envz00_1879, obj_t BgL_symbolz00_1880)
	{
		{	/* Ieee/symbol.scm 299 */
			{	/* Ieee/symbol.scm 300 */
				obj_t BgL_auxz00_2145;

				if (SYMBOLP(BgL_symbolz00_1880))
					{	/* Ieee/symbol.scm 300 */
						BgL_auxz00_2145 = BgL_symbolz00_1880;
					}
				else
					{
						obj_t BgL_auxz00_2148;

						BgL_auxz00_2148 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1681z00zz__r4_symbols_6_4z00, BINT(((long) 12180)),
							BGl_string1698z00zz__r4_symbols_6_4z00,
							BGl_string1683z00zz__r4_symbols_6_4z00, BgL_symbolz00_1880);
						FAILURE(BgL_auxz00_2148, BFALSE, BFALSE);
					}
				return BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_auxz00_2145);
			}
		}

	}



/* keyword->symbol */
	BGL_EXPORTED_DEF obj_t BGl_keywordzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t
		BgL_keywordz00_25)
	{
		{	/* Ieee/symbol.scm 305 */
			{	/* Ieee/symbol.scm 306 */
				obj_t BgL_arg1254z00_1597;

				{	/* Ieee/symbol.scm 306 */
					obj_t BgL_res1611z00_1600;

					{	/* Ieee/symbol.scm 282 */
						obj_t BgL_arg1252z00_1599;

						BgL_arg1252z00_1599 = KEYWORD_TO_STRING(BgL_keywordz00_25);
						BgL_res1611z00_1600 =
							BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1252z00_1599);
					}
					BgL_arg1254z00_1597 = BgL_res1611z00_1600;
				}
				return bstring_to_symbol(BgL_arg1254z00_1597);
			}
		}

	}



/* &keyword->symbol */
	obj_t BGl_z62keywordzd2ze3symbolz53zz__r4_symbols_6_4z00(obj_t
		BgL_envz00_1881, obj_t BgL_keywordz00_1882)
	{
		{	/* Ieee/symbol.scm 305 */
			{	/* Ieee/symbol.scm 306 */
				obj_t BgL_auxz00_2156;

				if (KEYWORDP(BgL_keywordz00_1882))
					{	/* Ieee/symbol.scm 306 */
						BgL_auxz00_2156 = BgL_keywordz00_1882;
					}
				else
					{
						obj_t BgL_auxz00_2159;

						BgL_auxz00_2159 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1681z00zz__r4_symbols_6_4z00, BINT(((long) 12482)),
							BGl_string1699z00zz__r4_symbols_6_4z00,
							BGl_string1695z00zz__r4_symbols_6_4z00, BgL_keywordz00_1882);
						FAILURE(BgL_auxz00_2159, BFALSE, BFALSE);
					}
				return BGl_keywordzd2ze3symbolz31zz__r4_symbols_6_4z00(BgL_auxz00_2156);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__r4_symbols_6_4z00()
	{
		{	/* Ieee/symbol.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__r4_symbols_6_4z00()
	{
		{	/* Ieee/symbol.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__r4_symbols_6_4z00()
	{
		{	/* Ieee/symbol.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_symbols_6_4z00()
	{
		{	/* Ieee/symbol.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1700z00zz__r4_symbols_6_4z00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1700z00zz__r4_symbols_6_4z00));
		}

	}

#ifdef __cplusplus
}
#endif
