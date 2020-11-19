/*===========================================================================*/
/*   (Rgc/rgcdfa.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Rgc/rgcdfa.scm -indent -o objs/obj_u/Rgc/rgcdfa.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_makezd2rgcsetzd2zz__rgc_setz00(long);
	extern obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	static obj_t BGl_symbol1750z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_za2statesza2z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol1757z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_makezd2statezd2zz__rgc_dfaz00(obj_t);
	extern obj_t BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_statezd2positionszd2zz__rgc_dfaz00(obj_t);
	static obj_t BGl_z62statezd2positionszb0zz__rgc_dfaz00(obj_t, obj_t);
	static obj_t BGl_symbol1760z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol1763z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol1765z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__rgc_dfaz00 = BUNSPEC;
	extern obj_t BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00(obj_t, obj_t);
	static obj_t BGl_z62statezf3z91zz__rgc_dfaz00(obj_t, obj_t);
	extern obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__rgc_dfaz00();
	static obj_t BGl_z62getzd2initialzd2statez62zz__rgc_dfaz00(obj_t);
	static obj_t BGl_z62statezd2transitionszb0zz__rgc_dfaz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__rgc_dfaz00();
	static obj_t BGl_z62zc3z04anonymousza31222ze3ze5zz__rgc_dfaz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__rgc_dfaz00();
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31224ze3ze5zz__rgc_dfaz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_statezd2namezd2zz__rgc_dfaz00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zz__rgc_dfaz00();
	static obj_t BGl_z62statezd2namezb0zz__rgc_dfaz00(obj_t, obj_t);
	static obj_t BGl_z62printzd2dfazb0zz__rgc_dfaz00(obj_t, obj_t);
	static obj_t BGl_za2initialzd2stateza2zd2zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list1706z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list1709z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list1712z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list1715z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list1719z00zz__rgc_dfaz00 = BUNSPEC;
	extern obj_t BGl_hashtablezd2ze3listz31zz__hashz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_printzd2dfazd2zz__rgc_dfaz00(obj_t);
	static obj_t BGl_list1723z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list1726z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list1729z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_z62nodezd2ze3dfaz53zz__rgc_dfaz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_list1732z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list1735z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list1736z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list1739z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list1742z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list1743z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list1746z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list1749z00zz__rgc_dfaz00 = BUNSPEC;
	extern obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__rgc_dfaz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_rulesz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_setz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_configz00(long, char *);
	static obj_t BGl_list1756z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list1759z00zz__rgc_dfaz00 = BUNSPEC;
	extern obj_t BGl_rgcsetzd2addz12zc0zz__rgc_setz00(obj_t, long);
	static obj_t BGl_list1762z00zz__rgc_dfaz00 = BUNSPEC;
	extern obj_t BGl_treezd2maxzd2charz00zz__rgc_rulesz00();
	static obj_t BGl_z62zc3z04anonymousza31276ze3ze5zz__rgc_dfaz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_nodezd2ze3dfaz31zz__rgc_dfaz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_resetzd2dfaz12zc0zz__rgc_dfaz00();
	extern obj_t create_struct(obj_t, int);
	static obj_t BGl_cnstzd2initzd2zz__rgc_dfaz00();
	static obj_t BGl_gczd2rootszd2initz00zz__rgc_dfaz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__rgc_dfaz00();
	static obj_t BGl_initzd2statesz12zc0zz__rgc_dfaz00();
	static obj_t BGl_z62resetzd2dfaz12za2zz__rgc_dfaz00(obj_t);
	static long BGl_bucketzd2lenzd2zz__rgc_dfaz00;
	BGL_EXPORTED_DECL bool_t BGl_statezf3zf3zz__rgc_dfaz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2initialzd2statez00zz__rgc_dfaz00();
	BGL_EXPORTED_DECL obj_t BGl_statezd2transitionszd2zz__rgc_dfaz00(obj_t);
	extern obj_t BGl_rgcsetzd2orz12zc0zz__rgc_setz00(obj_t, obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_za2statezd2numza2zd2zz__rgc_dfaz00 = BUNSPEC;
	extern obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol1700z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol1707z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol1710z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol1713z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol1716z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol1720z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol1724z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol1727z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol1730z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol1733z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol1737z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol1740z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol1744z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol1747z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_printzd2dfazd2envz00zz__rgc_dfaz00,
		BgL_bgl_za762printza7d2dfaza7b1769za7, BGl_z62printzd2dfazb0zz__rgc_dfaz00,
		0L, BUNSPEC, 1);
	extern obj_t BGl_rgcsetzd2ze3hashzd2envze3zz__rgc_setz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_nodezd2ze3dfazd2envze3zz__rgc_dfaz00,
		BgL_bgl_za762nodeza7d2za7e3dfa1770za7,
		BGl_z62nodezd2ze3dfaz53zz__rgc_dfaz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_resetzd2dfaz12zd2envz12zz__rgc_dfaz00,
		BgL_bgl_za762resetza7d2dfaza711771za7,
		BGl_z62resetzd2dfaz12za2zz__rgc_dfaz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_statezd2namezd2envz00zz__rgc_dfaz00,
		BgL_bgl_za762stateza7d2nameza71772za7, BGl_z62statezd2namezb0zz__rgc_dfaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1701z00zz__rgc_dfaz00,
		BgL_bgl_string1701za700za7za7_1773za7, "__state", 7);
	      DEFINE_STRING(BGl_string1702z00zz__rgc_dfaz00,
		BgL_bgl_string1702za700za7za7_1774za7, "STATE-", 6);
	      DEFINE_STRING(BGl_string1703z00zz__rgc_dfaz00,
		BgL_bgl_string1703za700za7za7_1775za7, "-", 1);
	      DEFINE_STRING(BGl_string1704z00zz__rgc_dfaz00,
		BgL_bgl_string1704za700za7za7_1776za7,
		"========= DFA ====================================", 50);
	      DEFINE_STRING(BGl_string1705z00zz__rgc_dfaz00,
		BgL_bgl_string1705za700za7za7_1777za7, "state: ", 7);
	      DEFINE_STRING(BGl_string1708z00zz__rgc_dfaz00,
		BgL_bgl_string1708za700za7za7_1778za7, "for-each", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_statezd2transitionszd2envz00zz__rgc_dfaz00,
		BgL_bgl_za762stateza7d2trans1779z00,
		BGl_z62statezd2transitionszb0zz__rgc_dfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1711z00zz__rgc_dfaz00,
		BgL_bgl_string1711za700za7za7_1780za7, "lambda", 6);
	      DEFINE_STRING(BGl_string1714z00zz__rgc_dfaz00,
		BgL_bgl_string1714za700za7za7_1781za7, "trans", 5);
	      DEFINE_STRING(BGl_string1717z00zz__rgc_dfaz00,
		BgL_bgl_string1717za700za7za7_1782za7, "print", 5);
	      DEFINE_STRING(BGl_string1718z00zz__rgc_dfaz00,
		BgL_bgl_string1718za700za7za7_1783za7, "   ", 3);
	      DEFINE_STRING(BGl_string1721z00zz__rgc_dfaz00,
		BgL_bgl_string1721za700za7za7_1784za7, "car", 3);
	      DEFINE_STRING(BGl_string1722z00zz__rgc_dfaz00,
		BgL_bgl_string1722za700za7za7_1785za7, " [", 2);
	      DEFINE_STRING(BGl_string1725z00zz__rgc_dfaz00,
		BgL_bgl_string1725za700za7za7_1786za7, "if", 2);
	      DEFINE_STRING(BGl_string1728z00zz__rgc_dfaz00,
		BgL_bgl_string1728za700za7za7_1787za7, "and", 3);
	      DEFINE_STRING(BGl_string1731z00zz__rgc_dfaz00,
		BgL_bgl_string1731za700za7za7_1788za7, "<", 1);
	      DEFINE_STRING(BGl_string1734z00zz__rgc_dfaz00,
		BgL_bgl_string1734za700za7za7_1789za7, "let", 3);
	      DEFINE_STRING(BGl_string1738z00zz__rgc_dfaz00,
		BgL_bgl_string1738za700za7za7_1790za7, "c", 1);
	      DEFINE_STRING(BGl_string1741z00zz__rgc_dfaz00,
		BgL_bgl_string1741za700za7za7_1791za7, "integer->char", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2initialzd2statezd2envzd2zz__rgc_dfaz00,
		BgL_bgl_za762getza7d2initial1792z00,
		BGl_z62getzd2initialzd2statez62zz__rgc_dfaz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1745z00zz__rgc_dfaz00,
		BgL_bgl_string1745za700za7za7_1793za7, "or", 2);
	      DEFINE_STRING(BGl_string1748z00zz__rgc_dfaz00,
		BgL_bgl_string1748za700za7za7_1794za7, "char-alphabetic?", 16);
	      DEFINE_STRING(BGl_string1751z00zz__rgc_dfaz00,
		BgL_bgl_string1751za700za7za7_1795za7, "char-numeric?", 13);
	      DEFINE_STRING(BGl_string1752z00zz__rgc_dfaz00,
		BgL_bgl_string1752za700za7za7_1796za7, "ascii", 5);
	      DEFINE_STRING(BGl_string1753z00zz__rgc_dfaz00,
		BgL_bgl_string1753za700za7za7_1797za7, "special", 7);
	      DEFINE_STRING(BGl_string1754z00zz__rgc_dfaz00,
		BgL_bgl_string1754za700za7za7_1798za7, "]", 1);
	      DEFINE_STRING(BGl_string1755z00zz__rgc_dfaz00,
		BgL_bgl_string1755za700za7za7_1799za7, "  -->  ", 7);
	      DEFINE_STRING(BGl_string1758z00zz__rgc_dfaz00,
		BgL_bgl_string1758za700za7za7_1800za7, "__state-number", 14);
	      DEFINE_STRING(BGl_string1761z00zz__rgc_dfaz00,
		BgL_bgl_string1761za700za7za7_1801za7, "cdr", 3);
	      DEFINE_STRING(BGl_string1764z00zz__rgc_dfaz00,
		BgL_bgl_string1764za700za7za7_1802za7, "__state-transitions", 19);
	      DEFINE_STRING(BGl_string1766z00zz__rgc_dfaz00,
		BgL_bgl_string1766za700za7za7_1803za7, "state", 5);
	      DEFINE_STRING(BGl_string1767z00zz__rgc_dfaz00,
		BgL_bgl_string1767za700za7za7_1804za7,
		"==================================================", 50);
	      DEFINE_STRING(BGl_string1768z00zz__rgc_dfaz00,
		BgL_bgl_string1768za700za7za7_1805za7, "__rgc_dfa", 9);
	      DEFINE_STRING(BGl_string1697z00zz__rgc_dfaz00,
		BgL_bgl_string1697za700za7za7_1806za7, "/tmp/4.4a/runtime/Rgc/rgcdfa.scm",
		32);
	      DEFINE_STRING(BGl_string1698z00zz__rgc_dfaz00,
		BgL_bgl_string1698za700za7za7_1807za7, "&node->dfa", 10);
	      DEFINE_STRING(BGl_string1699z00zz__rgc_dfaz00,
		BgL_bgl_string1699za700za7za7_1808za7, "vector", 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_statezf3zd2envz21zz__rgc_dfaz00,
		BgL_bgl_za762stateza7f3za791za7za71809za7, BGl_z62statezf3z91zz__rgc_dfaz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_statezd2positionszd2envz00zz__rgc_dfaz00,
		BgL_bgl_za762stateza7d2posit1810z00,
		BGl_z62statezd2positionszb0zz__rgc_dfaz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_rgcsetzd2equalzf3zd2envzf3zz__rgc_setz00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol1750z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_za2statesza2z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_symbol1757z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_symbol1760z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_symbol1763z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_symbol1765z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_za2initialzd2stateza2zd2zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_list1706z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_list1709z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_list1712z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_list1715z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_list1719z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_list1723z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_list1726z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_list1729z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_list1732z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_list1735z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_list1736z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_list1739z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_list1742z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_list1743z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_list1746z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_list1749z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_list1756z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_list1759z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_list1762z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_za2statezd2numza2zd2zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_symbol1700z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_symbol1707z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_symbol1710z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_symbol1713z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_symbol1716z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_symbol1720z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_symbol1724z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_symbol1727z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_symbol1730z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_symbol1733z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_symbol1737z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_symbol1740z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_symbol1744z00zz__rgc_dfaz00));
		     ADD_ROOT((void *) (&BGl_symbol1747z00zz__rgc_dfaz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__rgc_dfaz00(long
		BgL_checksumz00_2142, char *BgL_fromz00_2143)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__rgc_dfaz00))
				{
					BGl_requirezd2initializa7ationz75zz__rgc_dfaz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__rgc_dfaz00();
					BGl_cnstzd2initzd2zz__rgc_dfaz00();
					BGl_importedzd2moduleszd2initz00zz__rgc_dfaz00();
					return BGl_toplevelzd2initzd2zz__rgc_dfaz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__rgc_dfaz00()
	{
		{	/* Rgc/rgcdfa.scm 15 */
			BGl_symbol1700z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string1701z00zz__rgc_dfaz00);
			BGl_symbol1707z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string1708z00zz__rgc_dfaz00);
			BGl_symbol1710z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string1711z00zz__rgc_dfaz00);
			BGl_symbol1713z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string1714z00zz__rgc_dfaz00);
			BGl_list1712z00zz__rgc_dfaz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1713z00zz__rgc_dfaz00, BNIL);
			BGl_symbol1716z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string1717z00zz__rgc_dfaz00);
			BGl_symbol1720z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string1721z00zz__rgc_dfaz00);
			BGl_list1719z00zz__rgc_dfaz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1720z00zz__rgc_dfaz00,
				MAKE_YOUNG_PAIR(BGl_symbol1713z00zz__rgc_dfaz00, BNIL));
			BGl_symbol1724z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string1725z00zz__rgc_dfaz00);
			BGl_symbol1727z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string1728z00zz__rgc_dfaz00);
			BGl_symbol1730z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string1731z00zz__rgc_dfaz00);
			BGl_list1729z00zz__rgc_dfaz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1730z00zz__rgc_dfaz00,
				MAKE_YOUNG_PAIR(BGl_list1719z00zz__rgc_dfaz00,
					MAKE_YOUNG_PAIR(BINT(((long) 256)), BNIL)));
			BGl_symbol1733z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string1734z00zz__rgc_dfaz00);
			BGl_symbol1737z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string1738z00zz__rgc_dfaz00);
			BGl_symbol1740z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string1741z00zz__rgc_dfaz00);
			BGl_list1739z00zz__rgc_dfaz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1740z00zz__rgc_dfaz00,
				MAKE_YOUNG_PAIR(BGl_list1719z00zz__rgc_dfaz00, BNIL));
			BGl_list1736z00zz__rgc_dfaz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1737z00zz__rgc_dfaz00,
				MAKE_YOUNG_PAIR(BGl_list1739z00zz__rgc_dfaz00, BNIL));
			BGl_list1735z00zz__rgc_dfaz00 =
				MAKE_YOUNG_PAIR(BGl_list1736z00zz__rgc_dfaz00, BNIL);
			BGl_symbol1744z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string1745z00zz__rgc_dfaz00);
			BGl_symbol1747z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string1748z00zz__rgc_dfaz00);
			BGl_list1746z00zz__rgc_dfaz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1747z00zz__rgc_dfaz00,
				MAKE_YOUNG_PAIR(BGl_symbol1737z00zz__rgc_dfaz00, BNIL));
			BGl_symbol1750z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string1751z00zz__rgc_dfaz00);
			BGl_list1749z00zz__rgc_dfaz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1750z00zz__rgc_dfaz00,
				MAKE_YOUNG_PAIR(BGl_symbol1737z00zz__rgc_dfaz00, BNIL));
			BGl_list1743z00zz__rgc_dfaz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1744z00zz__rgc_dfaz00,
				MAKE_YOUNG_PAIR(BGl_list1746z00zz__rgc_dfaz00,
					MAKE_YOUNG_PAIR(BGl_list1749z00zz__rgc_dfaz00, BNIL)));
			BGl_list1742z00zz__rgc_dfaz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1724z00zz__rgc_dfaz00,
				MAKE_YOUNG_PAIR(BGl_list1743z00zz__rgc_dfaz00,
					MAKE_YOUNG_PAIR(BGl_symbol1737z00zz__rgc_dfaz00,
						MAKE_YOUNG_PAIR(BGl_string1752z00zz__rgc_dfaz00, BNIL))));
			BGl_list1732z00zz__rgc_dfaz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1733z00zz__rgc_dfaz00,
				MAKE_YOUNG_PAIR(BGl_list1735z00zz__rgc_dfaz00,
					MAKE_YOUNG_PAIR(BGl_list1742z00zz__rgc_dfaz00, BNIL)));
			BGl_list1726z00zz__rgc_dfaz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1727z00zz__rgc_dfaz00,
				MAKE_YOUNG_PAIR(BGl_list1729z00zz__rgc_dfaz00,
					MAKE_YOUNG_PAIR(BGl_list1732z00zz__rgc_dfaz00, BNIL)));
			BGl_list1723z00zz__rgc_dfaz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1724z00zz__rgc_dfaz00,
				MAKE_YOUNG_PAIR(BGl_list1726z00zz__rgc_dfaz00,
					MAKE_YOUNG_PAIR(BGl_string1753z00zz__rgc_dfaz00, BNIL)));
			BGl_symbol1757z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string1758z00zz__rgc_dfaz00);
			BGl_symbol1760z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string1761z00zz__rgc_dfaz00);
			BGl_list1759z00zz__rgc_dfaz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1760z00zz__rgc_dfaz00,
				MAKE_YOUNG_PAIR(BGl_symbol1713z00zz__rgc_dfaz00, BNIL));
			BGl_list1756z00zz__rgc_dfaz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1757z00zz__rgc_dfaz00,
				MAKE_YOUNG_PAIR(BGl_list1759z00zz__rgc_dfaz00, BNIL));
			BGl_list1715z00zz__rgc_dfaz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1716z00zz__rgc_dfaz00,
				MAKE_YOUNG_PAIR(BGl_string1718z00zz__rgc_dfaz00,
					MAKE_YOUNG_PAIR(BGl_list1719z00zz__rgc_dfaz00,
						MAKE_YOUNG_PAIR(BGl_string1722z00zz__rgc_dfaz00,
							MAKE_YOUNG_PAIR(BGl_list1723z00zz__rgc_dfaz00,
								MAKE_YOUNG_PAIR(BGl_string1754z00zz__rgc_dfaz00,
									MAKE_YOUNG_PAIR(BGl_string1755z00zz__rgc_dfaz00,
										MAKE_YOUNG_PAIR(BGl_list1756z00zz__rgc_dfaz00, BNIL))))))));
			BGl_list1709z00zz__rgc_dfaz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1710z00zz__rgc_dfaz00,
				MAKE_YOUNG_PAIR(BGl_list1712z00zz__rgc_dfaz00,
					MAKE_YOUNG_PAIR(BGl_list1715z00zz__rgc_dfaz00, BNIL)));
			BGl_symbol1763z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string1764z00zz__rgc_dfaz00);
			BGl_symbol1765z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string1766z00zz__rgc_dfaz00);
			BGl_list1762z00zz__rgc_dfaz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1763z00zz__rgc_dfaz00,
				MAKE_YOUNG_PAIR(BGl_symbol1765z00zz__rgc_dfaz00, BNIL));
			return (BGl_list1706z00zz__rgc_dfaz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1707z00zz__rgc_dfaz00,
					MAKE_YOUNG_PAIR(BGl_list1709z00zz__rgc_dfaz00,
						MAKE_YOUNG_PAIR(BGl_list1762z00zz__rgc_dfaz00, BNIL))), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__rgc_dfaz00()
	{
		{	/* Rgc/rgcdfa.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__rgc_dfaz00()
	{
		{	/* Rgc/rgcdfa.scm 15 */
			BGl_bucketzd2lenzd2zz__rgc_dfaz00 = ((long) 64);
			BGl_za2initialzd2stateza2zd2zz__rgc_dfaz00 = BUNSPEC;
			BGl_za2statesza2z00zz__rgc_dfaz00 = BUNSPEC;
			return (BGl_za2statezd2numza2zd2zz__rgc_dfaz00 = BUNSPEC, BUNSPEC);
		}

	}



/* node->dfa */
	BGL_EXPORTED_DEF obj_t BGl_nodezd2ze3dfaz31zz__rgc_dfaz00(obj_t
		BgL_rootz00_17, obj_t BgL_followposz00_18, obj_t BgL_positionsz00_19)
	{
		{	/* Rgc/rgcdfa.scm 71 */
			BGl_initzd2statesz12zc0zz__rgc_dfaz00();
			{	/* Rgc/rgcdfa.scm 78 */
				obj_t BgL_initialzd2statezd2_1182;

				{	/* Rgc/rgcdfa.scm 78 */
					obj_t BgL_arg1232z00_1213;

					BgL_arg1232z00_1213 =
						STRUCT_REF(((obj_t) BgL_rootz00_17), (int) (((long) 0)));
					BgL_initialzd2statezd2_1182 =
						BGl_makezd2statezd2zz__rgc_dfaz00(BgL_arg1232z00_1213);
				}
				BGl_za2initialzd2stateza2zd2zz__rgc_dfaz00 =
					BgL_initialzd2statezd2_1182;
				{	/* Rgc/rgcdfa.scm 81 */
					obj_t BgL_g1039z00_1184;

					{	/* Rgc/rgcdfa.scm 81 */
						obj_t BgL_list1231z00_1212;

						BgL_list1231z00_1212 =
							MAKE_YOUNG_PAIR(BgL_initialzd2statezd2_1182, BNIL);
						BgL_g1039z00_1184 = BgL_list1231z00_1212;
					}
					{
						obj_t BgL_dzd2stateszd2_1186;

						BgL_dzd2stateszd2_1186 = BgL_g1039z00_1184;
					BgL_zc3z04anonymousza31212ze3z87_1187:
						if (NULLP(BgL_dzd2stateszd2_1186))
							{	/* Rgc/rgcdfa.scm 83 */
								return
									BGl_hashtablezd2ze3listz31zz__hashz00
									(BGl_za2statesza2z00zz__rgc_dfaz00);
							}
						else
							{	/* Rgc/rgcdfa.scm 87 */
								obj_t BgL_newzd2dzd2statesz00_2104;

								{	/* Rgc/rgcdfa.scm 87 */
									obj_t BgL_cellvalz00_2232;

									BgL_cellvalz00_2232 = CDR(((obj_t) BgL_dzd2stateszd2_1186));
									BgL_newzd2dzd2statesz00_2104 = MAKE_CELL(BgL_cellvalz00_2232);
								}
								{	/* Rgc/rgcdfa.scm 87 */
									obj_t BgL_tz00_1190;

									BgL_tz00_1190 = CAR(((obj_t) BgL_dzd2stateszd2_1186));
									{	/* Rgc/rgcdfa.scm 88 */
										obj_t BgL_tzd2positionszd2_1191;

										BgL_tzd2positionszd2_1191 =
											STRUCT_REF(((obj_t) BgL_tz00_1190), (int) (((long) 3)));
										{	/* Rgc/rgcdfa.scm 89 */

											{	/* Rgc/rgcdfa.scm 95 */
												obj_t BgL_arg1221z00_1193;

												{	/* Rgc/rgcdfa.scm 245 */
													obj_t BgL_symbolzd2setzd2_1688;

													{	/* Rgc/rgcdfa.scm 245 */
														obj_t BgL_arg1280z00_1689;

														BgL_arg1280z00_1689 =
															BGl_treezd2maxzd2charz00zz__rgc_rulesz00();
														BgL_symbolzd2setzd2_1688 =
															BGl_makezd2rgcsetzd2zz__rgc_setz00(
															(long) CINT(BgL_arg1280z00_1689));
													}
													{	/* Rgc/rgcdfa.scm 247 */
														obj_t BgL_zc3z04anonymousza31276ze3z87_2076;

														BgL_zc3z04anonymousza31276ze3z87_2076 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31276ze3ze5zz__rgc_dfaz00,
															(int) (((long) 1)), (int) (((long) 2)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31276ze3z87_2076,
															(int) (((long) 0)), BgL_positionsz00_19);
														PROCEDURE_SET(BgL_zc3z04anonymousza31276ze3z87_2076,
															(int) (((long) 1)), BgL_symbolzd2setzd2_1688);
														BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00
															(BgL_zc3z04anonymousza31276ze3z87_2076,
															BgL_tzd2positionszd2_1191);
													}
													BgL_arg1221z00_1193 = BgL_symbolzd2setzd2_1688;
												}
												{	/* Rgc/rgcdfa.scm 96 */
													obj_t BgL_zc3z04anonymousza31222ze3z87_2075;

													BgL_zc3z04anonymousza31222ze3z87_2075 =
														MAKE_FX_PROCEDURE
														(BGl_z62zc3z04anonymousza31222ze3ze5zz__rgc_dfaz00,
														(int) (((long) 1)), (int) (((long) 6)));
													PROCEDURE_SET(BgL_zc3z04anonymousza31222ze3z87_2075,
														(int) (((long) 0)),
														BINT(VECTOR_LENGTH(BgL_positionsz00_19)));
													PROCEDURE_SET(BgL_zc3z04anonymousza31222ze3z87_2075,
														(int) (((long) 1)), BgL_followposz00_18);
													PROCEDURE_SET(BgL_zc3z04anonymousza31222ze3z87_2075,
														(int) (((long) 2)), BgL_positionsz00_19);
													PROCEDURE_SET(BgL_zc3z04anonymousza31222ze3z87_2075,
														(int) (((long) 3)), BgL_tzd2positionszd2_1191);
													PROCEDURE_SET(BgL_zc3z04anonymousza31222ze3z87_2075,
														(int) (((long) 4)),
														((obj_t) BgL_newzd2dzd2statesz00_2104));
													PROCEDURE_SET(BgL_zc3z04anonymousza31222ze3z87_2075,
														(int) (((long) 5)), BgL_tz00_1190);
													BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00
														(BgL_zc3z04anonymousza31222ze3z87_2075,
														BgL_arg1221z00_1193);
											}}
											{
												obj_t BgL_dzd2stateszd2_2270;

												BgL_dzd2stateszd2_2270 =
													CELL_REF(BgL_newzd2dzd2statesz00_2104);
												BgL_dzd2stateszd2_1186 = BgL_dzd2stateszd2_2270;
												goto BgL_zc3z04anonymousza31212ze3z87_1187;
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



/* &node->dfa */
	obj_t BGl_z62nodezd2ze3dfaz53zz__rgc_dfaz00(obj_t BgL_envz00_2077,
		obj_t BgL_rootz00_2078, obj_t BgL_followposz00_2079,
		obj_t BgL_positionsz00_2080)
	{
		{	/* Rgc/rgcdfa.scm 71 */
			{	/* Rgc/rgcdfa.scm 73 */
				obj_t BgL_auxz00_2278;
				obj_t BgL_auxz00_2271;

				if (VECTORP(BgL_positionsz00_2080))
					{	/* Rgc/rgcdfa.scm 73 */
						BgL_auxz00_2278 = BgL_positionsz00_2080;
					}
				else
					{
						obj_t BgL_auxz00_2281;

						BgL_auxz00_2281 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1697z00zz__rgc_dfaz00,
							BINT(((long) 2485)), BGl_string1698z00zz__rgc_dfaz00,
							BGl_string1699z00zz__rgc_dfaz00, BgL_positionsz00_2080);
						FAILURE(BgL_auxz00_2281, BFALSE, BFALSE);
					}
				if (VECTORP(BgL_followposz00_2079))
					{	/* Rgc/rgcdfa.scm 73 */
						BgL_auxz00_2271 = BgL_followposz00_2079;
					}
				else
					{
						obj_t BgL_auxz00_2274;

						BgL_auxz00_2274 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1697z00zz__rgc_dfaz00,
							BINT(((long) 2485)), BGl_string1698z00zz__rgc_dfaz00,
							BGl_string1699z00zz__rgc_dfaz00, BgL_followposz00_2079);
						FAILURE(BgL_auxz00_2274, BFALSE, BFALSE);
					}
				return
					BGl_nodezd2ze3dfaz31zz__rgc_dfaz00(BgL_rootz00_2078, BgL_auxz00_2271,
					BgL_auxz00_2278);
			}
		}

	}



/* &<@anonymous:1222> */
	obj_t BGl_z62zc3z04anonymousza31222ze3ze5zz__rgc_dfaz00(obj_t BgL_envz00_2081,
		obj_t BgL_az00_2088)
	{
		{	/* Rgc/rgcdfa.scm 95 */
			{	/* Rgc/rgcdfa.scm 96 */
				long BgL_positionszd2numzd2_2082;
				obj_t BgL_followposz00_2083;
				obj_t BgL_positionsz00_2084;
				obj_t BgL_tzd2positionszd2_2085;
				obj_t BgL_newzd2dzd2statesz00_2086;
				obj_t BgL_tz00_2087;

				BgL_positionszd2numzd2_2082 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_2081, (int) (((long) 0))));
				BgL_followposz00_2083 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2081, (int) (((long) 1))));
				BgL_positionsz00_2084 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2081, (int) (((long) 2))));
				BgL_tzd2positionszd2_2085 =
					PROCEDURE_REF(BgL_envz00_2081, (int) (((long) 3)));
				BgL_newzd2dzd2statesz00_2086 =
					PROCEDURE_REF(BgL_envz00_2081, (int) (((long) 4)));
				BgL_tz00_2087 = PROCEDURE_REF(BgL_envz00_2081, (int) (((long) 5)));
				{	/* Rgc/rgcdfa.scm 96 */
					obj_t BgL_uz00_2129;
					obj_t BgL_uzd2emptyzf3z21_2130;

					BgL_uz00_2129 =
						BGl_makezd2rgcsetzd2zz__rgc_setz00(BgL_positionszd2numzd2_2082);
					BgL_uzd2emptyzf3z21_2130 = MAKE_CELL(BTRUE);
					{	/* Rgc/rgcdfa.scm 100 */
						obj_t BgL_zc3z04anonymousza31224ze3z87_2131;

						BgL_zc3z04anonymousza31224ze3z87_2131 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31224ze3ze5zz__rgc_dfaz00,
							(int) (((long) 1)), (int) (((long) 5)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31224ze3z87_2131,
							(int) (((long) 0)), ((obj_t) BgL_uzd2emptyzf3z21_2130));
						PROCEDURE_SET(BgL_zc3z04anonymousza31224ze3z87_2131,
							(int) (((long) 1)), BgL_followposz00_2083);
						PROCEDURE_SET(BgL_zc3z04anonymousza31224ze3z87_2131,
							(int) (((long) 2)), BgL_uz00_2129);
						PROCEDURE_SET(BgL_zc3z04anonymousza31224ze3z87_2131,
							(int) (((long) 3)), BgL_positionsz00_2084);
						PROCEDURE_SET(BgL_zc3z04anonymousza31224ze3z87_2131,
							(int) (((long) 4)), BgL_az00_2088);
						BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00
							(BgL_zc3z04anonymousza31224ze3z87_2131,
							BgL_tzd2positionszd2_2085);
					}
					if (CBOOL(CELL_REF(BgL_uzd2emptyzf3z21_2130)))
						{	/* Rgc/rgcdfa.scm 107 */
							return BFALSE;
						}
					else
						{	/* Rgc/rgcdfa.scm 108 */
							obj_t BgL_usz00_2132;

							{	/* Rgc/rgcdfa.scm 108 */
								obj_t BgL_ostatez00_2133;

								BgL_ostatez00_2133 =
									BGl_hashtablezd2getzd2zz__hashz00
									(BGl_za2statesza2z00zz__rgc_dfaz00, BgL_uz00_2129);
								{	/* Rgc/rgcdfa.scm 110 */
									bool_t BgL_test1816z00_2320;

									if (STRUCTP(BgL_ostatez00_2133))
										{	/* Rgc/rgcdfa.scm 149 */
											BgL_test1816z00_2320 =
												(STRUCT_KEY(BgL_ostatez00_2133) ==
												BGl_symbol1700z00zz__rgc_dfaz00);
										}
									else
										{	/* Rgc/rgcdfa.scm 149 */
											BgL_test1816z00_2320 = ((bool_t) 0);
										}
									if (BgL_test1816z00_2320)
										{	/* Rgc/rgcdfa.scm 110 */
											BgL_usz00_2132 = BgL_ostatez00_2133;
										}
									else
										{	/* Rgc/rgcdfa.scm 111 */
											obj_t BgL_newzd2statezd2_2134;

											BgL_newzd2statezd2_2134 =
												BGl_makezd2statezd2zz__rgc_dfaz00(BgL_uz00_2129);
											{	/* Rgc/rgcdfa.scm 114 */
												obj_t BgL_auxz00_2135;

												BgL_auxz00_2135 =
													MAKE_YOUNG_PAIR(BgL_newzd2statezd2_2134,
													CELL_REF(BgL_newzd2dzd2statesz00_2086));
												CELL_SET(BgL_newzd2dzd2statesz00_2086, BgL_auxz00_2135);
											}
											BgL_usz00_2132 = BgL_newzd2statezd2_2134;
										}
								}
							}
							{	/* Rgc/rgcdfa.scm 239 */
								obj_t BgL_arg1271z00_2136;

								{	/* Rgc/rgcdfa.scm 239 */
									obj_t BgL_arg1273z00_2137;
									obj_t BgL_arg1274z00_2138;

									BgL_arg1273z00_2137 =
										MAKE_YOUNG_PAIR(BgL_az00_2088, BgL_usz00_2132);
									BgL_arg1274z00_2138 =
										STRUCT_REF(((obj_t) BgL_tz00_2087), (int) (((long) 2)));
									BgL_arg1271z00_2136 =
										MAKE_YOUNG_PAIR(BgL_arg1273z00_2137, BgL_arg1274z00_2138);
								}
								{	/* Rgc/rgcdfa.scm 149 */
									int BgL_auxz00_2334;
									obj_t BgL_tmpz00_2332;

									BgL_auxz00_2334 = (int) (((long) 2));
									BgL_tmpz00_2332 = ((obj_t) BgL_tz00_2087);
									return
										STRUCT_SET(BgL_tmpz00_2332, BgL_auxz00_2334,
										BgL_arg1271z00_2136);
								}
							}
						}
				}
			}
		}

	}



/* &<@anonymous:1224> */
	obj_t BGl_z62zc3z04anonymousza31224ze3ze5zz__rgc_dfaz00(obj_t BgL_envz00_2092,
		obj_t BgL_pz00_2098)
	{
		{	/* Rgc/rgcdfa.scm 99 */
			{	/* Rgc/rgcdfa.scm 100 */
				obj_t BgL_uzd2emptyzf3z21_2093;
				obj_t BgL_followposz00_2094;
				obj_t BgL_uz00_2095;
				obj_t BgL_positionsz00_2096;
				obj_t BgL_az00_2097;

				BgL_uzd2emptyzf3z21_2093 =
					PROCEDURE_REF(BgL_envz00_2092, (int) (((long) 0)));
				BgL_followposz00_2094 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2092, (int) (((long) 1))));
				BgL_uz00_2095 = PROCEDURE_REF(BgL_envz00_2092, (int) (((long) 2)));
				BgL_positionsz00_2096 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2092, (int) (((long) 3))));
				BgL_az00_2097 = PROCEDURE_REF(BgL_envz00_2092, (int) (((long) 4)));
				{	/* Rgc/rgcdfa.scm 100 */
					bool_t BgL_test1818z00_2349;

					{	/* Rgc/rgcdfa.scm 100 */
						obj_t BgL_arg1229z00_2139;

						BgL_arg1229z00_2139 =
							VECTOR_REF(BgL_positionsz00_2096, (long) CINT(BgL_pz00_2098));
						BgL_test1818z00_2349 =
							((long) CINT(BgL_az00_2097) == (long) CINT(BgL_arg1229z00_2139));
					}
					if (BgL_test1818z00_2349)
						{	/* Rgc/rgcdfa.scm 100 */
							{	/* Rgc/rgcdfa.scm 102 */
								obj_t BgL_auxz00_2140;

								BgL_auxz00_2140 = BFALSE;
								CELL_SET(BgL_uzd2emptyzf3z21_2093, BgL_auxz00_2140);
							}
							return
								BGl_rgcsetzd2orz12zc0zz__rgc_setz00(BgL_uz00_2095,
								VECTOR_REF(BgL_followposz00_2094, (long) CINT(BgL_pz00_2098)));
						}
					else
						{	/* Rgc/rgcdfa.scm 100 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &<@anonymous:1276> */
	obj_t BGl_z62zc3z04anonymousza31276ze3ze5zz__rgc_dfaz00(obj_t BgL_envz00_2100,
		obj_t BgL_iz00_2103)
	{
		{	/* Rgc/rgcdfa.scm 246 */
			{	/* Rgc/rgcdfa.scm 247 */
				obj_t BgL_positionsz00_2101;
				obj_t BgL_symbolzd2setzd2_2102;

				BgL_positionsz00_2101 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2100, (int) (((long) 0))));
				BgL_symbolzd2setzd2_2102 =
					PROCEDURE_REF(BgL_envz00_2100, (int) (((long) 1)));
				{	/* Rgc/rgcdfa.scm 247 */
					obj_t BgL_arg1277z00_2141;

					BgL_arg1277z00_2141 =
						VECTOR_REF(BgL_positionsz00_2101, (long) CINT(BgL_iz00_2103));
					return
						BGl_rgcsetzd2addz12zc0zz__rgc_setz00(BgL_symbolzd2setzd2_2102,
						(long) CINT(BgL_arg1277z00_2141));
		}}}

	}



/* reset-dfa! */
	BGL_EXPORTED_DEF obj_t BGl_resetzd2dfaz12zc0zz__rgc_dfaz00()
	{
		{	/* Rgc/rgcdfa.scm 128 */
			BGl_za2initialzd2stateza2zd2zz__rgc_dfaz00 = BUNSPEC;
			BGl_za2statesza2z00zz__rgc_dfaz00 = BUNSPEC;
			return (BGl_za2statezd2numza2zd2zz__rgc_dfaz00 = BUNSPEC, BUNSPEC);
		}

	}



/* &reset-dfa! */
	obj_t BGl_z62resetzd2dfaz12za2zz__rgc_dfaz00(obj_t BgL_envz00_2106)
	{
		{	/* Rgc/rgcdfa.scm 128 */
			return BGl_resetzd2dfaz12zc0zz__rgc_dfaz00();
		}

	}



/* get-initial-state */
	BGL_EXPORTED_DEF obj_t BGl_getzd2initialzd2statez00zz__rgc_dfaz00()
	{
		{	/* Rgc/rgcdfa.scm 141 */
			return BGl_za2initialzd2stateza2zd2zz__rgc_dfaz00;
		}

	}



/* &get-initial-state */
	obj_t BGl_z62getzd2initialzd2statez62zz__rgc_dfaz00(obj_t BgL_envz00_2107)
	{
		{	/* Rgc/rgcdfa.scm 141 */
			return BGl_getzd2initialzd2statez00zz__rgc_dfaz00();
		}

	}



/* init-states! */
	obj_t BGl_initzd2statesz12zc0zz__rgc_dfaz00()
	{
		{	/* Rgc/rgcdfa.scm 165 */
			BGl_za2statezd2numza2zd2zz__rgc_dfaz00 = BINT(((long) -1));
			{	/* Rgc/rgcdfa.scm 167 */
				obj_t BgL_list1253z00_1227;

				{	/* Rgc/rgcdfa.scm 167 */
					obj_t BgL_arg1254z00_1228;

					{	/* Rgc/rgcdfa.scm 167 */
						obj_t BgL_arg1256z00_1229;

						{	/* Rgc/rgcdfa.scm 167 */
							obj_t BgL_arg1258z00_1230;

							BgL_arg1258z00_1230 =
								MAKE_YOUNG_PAIR(BGl_rgcsetzd2ze3hashzd2envze3zz__rgc_setz00,
								BNIL);
							BgL_arg1256z00_1229 =
								MAKE_YOUNG_PAIR(BGl_rgcsetzd2equalzf3zd2envzf3zz__rgc_setz00,
								BgL_arg1258z00_1230);
						}
						BgL_arg1254z00_1228 =
							MAKE_YOUNG_PAIR(BINT(((long) 64)), BgL_arg1256z00_1229);
					}
					BgL_list1253z00_1227 =
						MAKE_YOUNG_PAIR(BINT(((long) 1024)), BgL_arg1254z00_1228);
				}
				return (BGl_za2statesza2z00zz__rgc_dfaz00 =
					BGl_makezd2hashtablezd2zz__hashz00(BgL_list1253z00_1227), BUNSPEC);
			}
		}

	}



/* make-state */
	obj_t BGl_makezd2statezd2zz__rgc_dfaz00(obj_t BgL_positionsz00_38)
	{
		{	/* Rgc/rgcdfa.scm 187 */
			{	/* Rgc/rgcdfa.scm 188 */
				obj_t BgL_numz00_1231;

				BGl_za2statezd2numza2zd2zz__rgc_dfaz00 =
					ADDFX(BGl_za2statezd2numza2zd2zz__rgc_dfaz00, BINT(((long) 1)));
				BgL_numz00_1231 = BGl_za2statezd2numza2zd2zz__rgc_dfaz00;
				{	/* Rgc/rgcdfa.scm 188 */
					obj_t BgL_namez00_1232;

					{	/* Rgc/rgcdfa.scm 189 */
						obj_t BgL_arg1268z00_1235;

						{	/* Rgc/rgcdfa.scm 189 */
							obj_t BgL_arg1270z00_1236;

							{	/* Ieee/number.scm 164 */

								BgL_arg1270z00_1236 =
									BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
									(BgL_numz00_1231, BINT(((long) 10)));
							}
							BgL_arg1268z00_1235 =
								string_append_3(BGl_string1702z00zz__rgc_dfaz00,
								BgL_arg1270z00_1236, BGl_string1703z00zz__rgc_dfaz00);
						}
						BgL_namez00_1232 =
							BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg1268z00_1235);
					}
					{	/* Rgc/rgcdfa.scm 189 */
						obj_t BgL_statez00_1233;

						{	/* Rgc/rgcdfa.scm 149 */
							obj_t BgL_newz00_1736;

							BgL_newz00_1736 =
								create_struct(BGl_symbol1700z00zz__rgc_dfaz00,
								(int) (((long) 4)));
							{	/* Rgc/rgcdfa.scm 149 */
								int BgL_tmpz00_2385;

								BgL_tmpz00_2385 = (int) (((long) 3));
								STRUCT_SET(BgL_newz00_1736, BgL_tmpz00_2385,
									BgL_positionsz00_38);
							}
							{	/* Rgc/rgcdfa.scm 149 */
								int BgL_tmpz00_2388;

								BgL_tmpz00_2388 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_1736, BgL_tmpz00_2388, BNIL);
							}
							{	/* Rgc/rgcdfa.scm 149 */
								int BgL_tmpz00_2391;

								BgL_tmpz00_2391 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_1736, BgL_tmpz00_2391, BgL_numz00_1231);
							}
							{	/* Rgc/rgcdfa.scm 149 */
								int BgL_tmpz00_2394;

								BgL_tmpz00_2394 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_1736, BgL_tmpz00_2394, BgL_namez00_1232);
							}
							BgL_statez00_1233 = BgL_newz00_1736;
						}
						{	/* Rgc/rgcdfa.scm 190 */

							{	/* Rgc/rgcdfa.scm 192 */
								obj_t BgL_arg1263z00_1234;

								BgL_arg1263z00_1234 =
									STRUCT_REF(BgL_statez00_1233, (int) (((long) 3)));
								BGl_hashtablezd2putz12zc0zz__hashz00
									(BGl_za2statesza2z00zz__rgc_dfaz00, BgL_arg1263z00_1234,
									BgL_statez00_1233);
							}
							return BgL_statez00_1233;
						}
					}
				}
			}
		}

	}



/* state-positions */
	BGL_EXPORTED_DEF obj_t BGl_statezd2positionszd2zz__rgc_dfaz00(obj_t
		BgL_statez00_40)
	{
		{	/* Rgc/rgcdfa.scm 206 */
			return STRUCT_REF(((obj_t) BgL_statez00_40), (int) (((long) 3)));
		}

	}



/* &state-positions */
	obj_t BGl_z62statezd2positionszb0zz__rgc_dfaz00(obj_t BgL_envz00_2113,
		obj_t BgL_statez00_2114)
	{
		{	/* Rgc/rgcdfa.scm 206 */
			return BGl_statezd2positionszd2zz__rgc_dfaz00(BgL_statez00_2114);
		}

	}



/* state-name */
	BGL_EXPORTED_DEF obj_t BGl_statezd2namezd2zz__rgc_dfaz00(obj_t
		BgL_statez00_41)
	{
		{	/* Rgc/rgcdfa.scm 212 */
			return STRUCT_REF(((obj_t) BgL_statez00_41), (int) (((long) 0)));
		}

	}



/* &state-name */
	obj_t BGl_z62statezd2namezb0zz__rgc_dfaz00(obj_t BgL_envz00_2115,
		obj_t BgL_statez00_2116)
	{
		{	/* Rgc/rgcdfa.scm 212 */
			return BGl_statezd2namezd2zz__rgc_dfaz00(BgL_statez00_2116);
		}

	}



/* state-transitions */
	BGL_EXPORTED_DEF obj_t BGl_statezd2transitionszd2zz__rgc_dfaz00(obj_t
		BgL_statez00_43)
	{
		{	/* Rgc/rgcdfa.scm 224 */
			return STRUCT_REF(((obj_t) BgL_statez00_43), (int) (((long) 2)));
		}

	}



/* &state-transitions */
	obj_t BGl_z62statezd2transitionszb0zz__rgc_dfaz00(obj_t BgL_envz00_2117,
		obj_t BgL_statez00_2118)
	{
		{	/* Rgc/rgcdfa.scm 224 */
			return BGl_statezd2transitionszd2zz__rgc_dfaz00(BgL_statez00_2118);
		}

	}



/* state? */
	BGL_EXPORTED_DEF bool_t BGl_statezf3zf3zz__rgc_dfaz00(obj_t BgL_objz00_44)
	{
		{	/* Rgc/rgcdfa.scm 230 */
			if (STRUCTP(BgL_objz00_44))
				{	/* Rgc/rgcdfa.scm 149 */
					return (STRUCT_KEY(BgL_objz00_44) == BGl_symbol1700z00zz__rgc_dfaz00);
				}
			else
				{	/* Rgc/rgcdfa.scm 149 */
					return ((bool_t) 0);
				}
		}

	}



/* &state? */
	obj_t BGl_z62statezf3z91zz__rgc_dfaz00(obj_t BgL_envz00_2119,
		obj_t BgL_objz00_2120)
	{
		{	/* Rgc/rgcdfa.scm 230 */
			return BBOOL(BGl_statezf3zf3zz__rgc_dfaz00(BgL_objz00_2120));
		}

	}



/* print-dfa */
	BGL_EXPORTED_DEF obj_t BGl_printzd2dfazd2zz__rgc_dfaz00(obj_t BgL_dfaz00_50)
	{
		{	/* Rgc/rgcdfa.scm 254 */
			{	/* Rgc/rgcdfa.scm 255 */
				obj_t BgL_port1085z00_1249;

				{	/* Rgc/rgcdfa.scm 255 */
					obj_t BgL_res1626z00_1764;

					{	/* Rgc/rgcdfa.scm 255 */
						obj_t BgL_tmpz00_2418;

						BgL_tmpz00_2418 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1626z00_1764 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2418);
					}
					BgL_port1085z00_1249 = BgL_res1626z00_1764;
				}
				bgl_display_string(BGl_string1704z00zz__rgc_dfaz00,
					BgL_port1085z00_1249);
				bgl_display_char(((unsigned char) 10), BgL_port1085z00_1249);
			}
			{
				obj_t BgL_l1087z00_1251;

				BgL_l1087z00_1251 = BgL_dfaz00_50;
			BgL_zc3z04anonymousza31281ze3z87_1252:
				if (PAIRP(BgL_l1087z00_1251))
					{	/* Rgc/rgcdfa.scm 256 */
						{	/* Rgc/rgcdfa.scm 257 */
							obj_t BgL_statez00_1254;

							BgL_statez00_1254 = CAR(BgL_l1087z00_1251);
							{	/* Rgc/rgcdfa.scm 257 */
								obj_t BgL_port1086z00_1255;

								{	/* Rgc/rgcdfa.scm 257 */
									obj_t BgL_res1628z00_1771;

									{	/* Rgc/rgcdfa.scm 257 */
										obj_t BgL_tmpz00_2426;

										BgL_tmpz00_2426 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res1628z00_1771 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2426);
									}
									BgL_port1086z00_1255 = BgL_res1628z00_1771;
								}
								bgl_display_string(BGl_string1705z00zz__rgc_dfaz00,
									BgL_port1086z00_1255);
								{	/* Rgc/rgcdfa.scm 257 */
									obj_t BgL_arg1284z00_1256;

									BgL_arg1284z00_1256 =
										STRUCT_REF(((obj_t) BgL_statez00_1254), (int) (((long) 1)));
									bgl_display_obj(BgL_arg1284z00_1256, BgL_port1086z00_1255);
								}
								bgl_display_char(((unsigned char) 10), BgL_port1086z00_1255);
							} BGl_list1706z00zz__rgc_dfaz00;
						}
						{
							obj_t BgL_l1087z00_2435;

							BgL_l1087z00_2435 = CDR(BgL_l1087z00_1251);
							BgL_l1087z00_1251 = BgL_l1087z00_2435;
							goto BgL_zc3z04anonymousza31281ze3z87_1252;
						}
					}
				else
					{	/* Rgc/rgcdfa.scm 256 */
						((bool_t) 1);
					}
			}
			{	/* Rgc/rgcdfa.scm 273 */
				obj_t BgL_port1089z00_1259;

				{	/* Rgc/rgcdfa.scm 273 */
					obj_t BgL_res1629z00_1778;

					{	/* Rgc/rgcdfa.scm 273 */
						obj_t BgL_tmpz00_2437;

						BgL_tmpz00_2437 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1629z00_1778 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2437);
					}
					BgL_port1089z00_1259 = BgL_res1629z00_1778;
				}
				bgl_display_string(BGl_string1767z00zz__rgc_dfaz00,
					BgL_port1089z00_1259);
				bgl_display_char(((unsigned char) 10), BgL_port1089z00_1259);
			}
			{	/* Rgc/rgcdfa.scm 274 */
				obj_t BgL_arg1286z00_1260;

				{	/* Rgc/rgcdfa.scm 274 */
					obj_t BgL_res1630z00_1783;

					{	/* Rgc/rgcdfa.scm 274 */
						obj_t BgL_tmpz00_2442;

						BgL_tmpz00_2442 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1630z00_1783 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2442);
					}
					BgL_arg1286z00_1260 = BgL_res1630z00_1783;
				}
				return bgl_display_char(((unsigned char) 10), BgL_arg1286z00_1260);
		}}

	}



/* &print-dfa */
	obj_t BGl_z62printzd2dfazb0zz__rgc_dfaz00(obj_t BgL_envz00_2121,
		obj_t BgL_dfaz00_2122)
	{
		{	/* Rgc/rgcdfa.scm 254 */
			return BGl_printzd2dfazd2zz__rgc_dfaz00(BgL_dfaz00_2122);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__rgc_dfaz00()
	{
		{	/* Rgc/rgcdfa.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__rgc_dfaz00()
	{
		{	/* Rgc/rgcdfa.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__rgc_dfaz00()
	{
		{	/* Rgc/rgcdfa.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__rgc_dfaz00()
	{
		{	/* Rgc/rgcdfa.scm 15 */
			BGl_modulezd2initializa7ationz75zz__rgc_configz00(((long) 428274706),
				BSTRING_TO_STRING(BGl_string1768z00zz__rgc_dfaz00));
			BGl_modulezd2initializa7ationz75zz__rgc_setz00(((long) 225075481),
				BSTRING_TO_STRING(BGl_string1768z00zz__rgc_dfaz00));
			BGl_modulezd2initializa7ationz75zz__rgc_rulesz00(((long) 181069196),
				BSTRING_TO_STRING(BGl_string1768z00zz__rgc_dfaz00));
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1768z00zz__rgc_dfaz00));
		}

	}

#ifdef __cplusplus
}
#endif
