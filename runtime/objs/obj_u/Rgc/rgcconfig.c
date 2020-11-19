/*===========================================================================*/
/*   (Rgc/rgcconfig.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Rgc/rgcconfig.scm -indent -o objs/obj_u/Rgc/rgcconfig.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62rgczd2upcasezb0zz__rgc_configz00(obj_t, obj_t);
	static obj_t BGl_symbol1673z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol1676z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol1679z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol1682z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol1687z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31201ze3ze5zz__rgc_configz00(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol1693z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol1696z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol1699z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31211ze3ze5zz__rgc_configz00(obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__rgc_configz00();
	BGL_EXPORTED_DEF obj_t BGl_za2rgczd2optimza2zd2zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__rgc_configz00();
	static obj_t BGl_z62rgczd2downcasezb0zz__rgc_configz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31222ze3ze5zz__rgc_configz00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zz__rgc_configz00();
	static obj_t BGl_za2asciizd2configza2zd2zz__rgc_configz00 = BUNSPEC;
	extern bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62rgczd2envzb0zz__rgc_configz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__rgc_configz00();
	static obj_t BGl_z62rgczd2maxzd2charz62zz__rgc_configz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rgczd2alphabeticzf3z21zz__rgc_configz00(obj_t);
	static obj_t BGl_z62rgczd2alphabeticzf3z43zz__rgc_configz00(obj_t, obj_t);
	static obj_t BGl_list1701z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1702z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1704z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1707z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1710z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1711z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1713z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1716z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1717z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1718z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1720z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1723z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1725z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1728z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1730z00zz__rgc_configz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__rgc_configz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_list1671z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1672z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1675z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1678z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1681z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1684z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1686z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1689z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1690z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1692z00zz__rgc_configz00 = BUNSPEC;
	extern obj_t create_struct(obj_t, int);
	static obj_t BGl_list1695z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_list1698z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zz__rgc_configz00();
	static obj_t BGl_gczd2rootszd2initz00zz__rgc_configz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__rgc_configz00();
	static obj_t BGl_z62rgczd2charzf3z43zz__rgc_configz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31198ze3ze5zz__rgc_configz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgczd2downcasezd2zz__rgc_configz00(obj_t);
	static obj_t BGl_za2rgczd2configza2zd2zz__rgc_configz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_rgczd2envzd2zz__rgc_configz00();
	static obj_t BGl_symbol1705z00zz__rgc_configz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_rgczd2charzf3z21zz__rgc_configz00(obj_t);
	static obj_t BGl_symbol1708z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol1714z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol1721z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol1726z00zz__rgc_configz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_rgczd2upcasezd2zz__rgc_configz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgczd2maxzd2charz00zz__rgc_configz00();
	static obj_t BGl_symbol1731z00zz__rgc_configz00 = BUNSPEC;
	static obj_t BGl_symbol1733z00zz__rgc_configz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2alphabeticzf3zd2envzf3zz__rgc_configz00,
		BgL_bgl_za762rgcza7d2alphabe1737z00,
		BGl_z62rgczd2alphabeticzf3z43zz__rgc_configz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2envzd2envz00zz__rgc_configz00,
		BgL_bgl_za762rgcza7d2envza7b0za71738z00,
		BGl_z62rgczd2envzb0zz__rgc_configz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2upcasezd2envz00zz__rgc_configz00,
		BgL_bgl_za762rgcza7d2upcaseza71739za7,
		BGl_z62rgczd2upcasezb0zz__rgc_configz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2maxzd2charzd2envzd2zz__rgc_configz00,
		BgL_bgl_za762rgcza7d2maxza7d2c1740za7,
		BGl_z62rgczd2maxzd2charz62zz__rgc_configz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1700z00zz__rgc_configz00,
		BgL_bgl_string1700za700za7za7_1741za7, "digit", 5);
	      DEFINE_STRING(BGl_string1703z00zz__rgc_configz00,
		BgL_bgl_string1703za700za7za7_1742za7, "09", 2);
	      DEFINE_STRING(BGl_string1706z00zz__rgc_configz00,
		BgL_bgl_string1706za700za7za7_1743za7, "xdigit", 6);
	      DEFINE_STRING(BGl_string1709z00zz__rgc_configz00,
		BgL_bgl_string1709za700za7za7_1744za7, "uncase", 6);
	      DEFINE_STRING(BGl_string1712z00zz__rgc_configz00,
		BgL_bgl_string1712za700za7za7_1745za7, "af09", 4);
	      DEFINE_STRING(BGl_string1715z00zz__rgc_configz00,
		BgL_bgl_string1715za700za7za7_1746za7, "alnum", 5);
	      DEFINE_STRING(BGl_string1719z00zz__rgc_configz00,
		BgL_bgl_string1719za700za7za7_1747za7, "az09", 4);
	      DEFINE_STRING(BGl_string1722z00zz__rgc_configz00,
		BgL_bgl_string1722za700za7za7_1748za7, "punct", 5);
	      DEFINE_STRING(BGl_string1724z00zz__rgc_configz00,
		BgL_bgl_string1724za700za7za7_1749za7, ".,;!?", 5);
	      DEFINE_STRING(BGl_string1727z00zz__rgc_configz00,
		BgL_bgl_string1727za700za7za7_1750za7, "blank", 5);
	      DEFINE_STRING(BGl_string1729z00zz__rgc_configz00,
		BgL_bgl_string1729za700za7za7_1751za7, " \t\n", 3);
	      DEFINE_STRING(BGl_string1732z00zz__rgc_configz00,
		BgL_bgl_string1732za700za7za7_1752za7, "space", 5);
	      DEFINE_STRING(BGl_string1734z00zz__rgc_configz00,
		BgL_bgl_string1734za700za7za7_1753za7, "rgc-config", 10);
	      DEFINE_STRING(BGl_string1735z00zz__rgc_configz00,
		BgL_bgl_string1735za700za7za7_1754za7, "ascii", 5);
	      DEFINE_STRING(BGl_string1736z00zz__rgc_configz00,
		BgL_bgl_string1736za700za7za7_1755za7, "__rgc_config", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2downcasezd2envz00zz__rgc_configz00,
		BgL_bgl_za762rgcza7d2downcas1756z00,
		BGl_z62rgczd2downcasezb0zz__rgc_configz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1667z00zz__rgc_configz00,
		BgL_bgl_za762za7c3za704anonymo1757za7,
		BGl_z62zc3z04anonymousza31222ze3ze5zz__rgc_configz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1668z00zz__rgc_configz00,
		BgL_bgl_za762za7c3za704anonymo1758za7,
		BGl_z62zc3z04anonymousza31211ze3ze5zz__rgc_configz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1669z00zz__rgc_configz00,
		BgL_bgl_za762za7c3za704anonymo1759za7,
		BGl_z62zc3z04anonymousza31201ze3ze5zz__rgc_configz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1674z00zz__rgc_configz00,
		BgL_bgl_string1674za700za7za7_1760za7, "all", 3);
	      DEFINE_STRING(BGl_string1677z00zz__rgc_configz00,
		BgL_bgl_string1677za700za7za7_1761za7, "out", 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1670z00zz__rgc_configz00,
		BgL_bgl_za762za7c3za704anonymo1762za7,
		BGl_z62zc3z04anonymousza31198ze3ze5zz__rgc_configz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1680z00zz__rgc_configz00,
		BgL_bgl_string1680za700za7za7_1763za7, "lower", 5);
	      DEFINE_STRING(BGl_string1683z00zz__rgc_configz00,
		BgL_bgl_string1683za700za7za7_1764za7, "in", 2);
	      DEFINE_STRING(BGl_string1685z00zz__rgc_configz00,
		BgL_bgl_string1685za700za7za7_1765za7, "az", 2);
	      DEFINE_STRING(BGl_string1688z00zz__rgc_configz00,
		BgL_bgl_string1688za700za7za7_1766za7, "upper", 5);
	      DEFINE_STRING(BGl_string1691z00zz__rgc_configz00,
		BgL_bgl_string1691za700za7za7_1767za7, "AZ", 2);
	      DEFINE_STRING(BGl_string1694z00zz__rgc_configz00,
		BgL_bgl_string1694za700za7za7_1768za7, "alpha", 5);
	      DEFINE_STRING(BGl_string1697z00zz__rgc_configz00,
		BgL_bgl_string1697za700za7za7_1769za7, "or", 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2charzf3zd2envzf3zz__rgc_configz00,
		BgL_bgl_za762rgcza7d2charza7f31770za7,
		BGl_z62rgczd2charzf3z43zz__rgc_configz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol1673z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_symbol1676z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_symbol1679z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_symbol1682z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_symbol1687z00zz__rgc_configz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_symbol1693z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_symbol1696z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_symbol1699z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_za2rgczd2optimza2zd2zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_za2asciizd2configza2zd2zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1701z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1702z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1704z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1707z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1710z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1711z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1713z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1716z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1717z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1718z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1720z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1723z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1725z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1728z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1730z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1671z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1672z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1675z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1678z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1681z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1684z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1686z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1689z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1690z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1692z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1695z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_list1698z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_za2rgczd2configza2zd2zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_symbol1705z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_symbol1708z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_symbol1714z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_symbol1721z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_symbol1726z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_symbol1731z00zz__rgc_configz00));
		     ADD_ROOT((void *) (&BGl_symbol1733z00zz__rgc_configz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__rgc_configz00(long
		BgL_checksumz00_2013, char *BgL_fromz00_2014)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__rgc_configz00))
				{
					BGl_requirezd2initializa7ationz75zz__rgc_configz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__rgc_configz00();
					BGl_cnstzd2initzd2zz__rgc_configz00();
					BGl_importedzd2moduleszd2initz00zz__rgc_configz00();
					return BGl_toplevelzd2initzd2zz__rgc_configz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__rgc_configz00()
	{
		{	/* Rgc/rgcconfig.scm 14 */
			BGl_symbol1673z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string1674z00zz__rgc_configz00);
			BGl_symbol1676z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string1677z00zz__rgc_configz00);
			BGl_list1675z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL));
			BGl_list1672z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1673z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BGl_list1675z00zz__rgc_configz00, BNIL));
			BGl_symbol1679z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string1680z00zz__rgc_configz00);
			BGl_symbol1682z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string1683z00zz__rgc_configz00);
			BGl_list1684z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_string1685z00zz__rgc_configz00, BNIL);
			BGl_list1681z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1682z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BGl_list1684z00zz__rgc_configz00, BNIL));
			BGl_list1678z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1679z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BGl_list1681z00zz__rgc_configz00, BNIL));
			BGl_symbol1687z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string1688z00zz__rgc_configz00);
			BGl_list1690z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_string1691z00zz__rgc_configz00, BNIL);
			BGl_list1689z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1682z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BGl_list1690z00zz__rgc_configz00, BNIL));
			BGl_list1686z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1687z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BGl_list1689z00zz__rgc_configz00, BNIL));
			BGl_symbol1693z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string1694z00zz__rgc_configz00);
			BGl_symbol1696z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string1697z00zz__rgc_configz00);
			BGl_list1695z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1696z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BGl_symbol1679z00zz__rgc_configz00,
					MAKE_YOUNG_PAIR(BGl_symbol1687z00zz__rgc_configz00, BNIL)));
			BGl_list1692z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1693z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BGl_list1695z00zz__rgc_configz00, BNIL));
			BGl_symbol1699z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string1700z00zz__rgc_configz00);
			BGl_list1702z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_string1703z00zz__rgc_configz00, BNIL);
			BGl_list1701z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1682z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BGl_list1702z00zz__rgc_configz00, BNIL));
			BGl_list1698z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1699z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BGl_list1701z00zz__rgc_configz00, BNIL));
			BGl_symbol1705z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string1706z00zz__rgc_configz00);
			BGl_symbol1708z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string1709z00zz__rgc_configz00);
			BGl_list1711z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_string1712z00zz__rgc_configz00, BNIL);
			BGl_list1710z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1682z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BGl_list1711z00zz__rgc_configz00, BNIL));
			BGl_list1707z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1708z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BGl_list1710z00zz__rgc_configz00, BNIL));
			BGl_list1704z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1705z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BGl_list1707z00zz__rgc_configz00, BNIL));
			BGl_symbol1714z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string1715z00zz__rgc_configz00);
			BGl_list1718z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_string1719z00zz__rgc_configz00, BNIL);
			BGl_list1717z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1682z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BGl_list1718z00zz__rgc_configz00, BNIL));
			BGl_list1716z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1708z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BGl_list1717z00zz__rgc_configz00, BNIL));
			BGl_list1713z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1714z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BGl_list1716z00zz__rgc_configz00, BNIL));
			BGl_symbol1721z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string1722z00zz__rgc_configz00);
			BGl_list1723z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1682z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BGl_string1724z00zz__rgc_configz00, BNIL));
			BGl_list1720z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1721z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BGl_list1723z00zz__rgc_configz00, BNIL));
			BGl_symbol1726z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string1727z00zz__rgc_configz00);
			BGl_list1728z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1682z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BGl_string1729z00zz__rgc_configz00, BNIL));
			BGl_list1725z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1726z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BGl_list1728z00zz__rgc_configz00, BNIL));
			BGl_symbol1731z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string1732z00zz__rgc_configz00);
			BGl_list1730z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1731z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BCHAR(((unsigned char) ' ')), BNIL));
			BGl_list1671z00zz__rgc_configz00 =
				MAKE_YOUNG_PAIR(BGl_list1672z00zz__rgc_configz00,
				MAKE_YOUNG_PAIR(BGl_list1678z00zz__rgc_configz00,
					MAKE_YOUNG_PAIR(BGl_list1686z00zz__rgc_configz00,
						MAKE_YOUNG_PAIR(BGl_list1692z00zz__rgc_configz00,
							MAKE_YOUNG_PAIR(BGl_list1698z00zz__rgc_configz00,
								MAKE_YOUNG_PAIR(BGl_list1704z00zz__rgc_configz00,
									MAKE_YOUNG_PAIR(BGl_list1713z00zz__rgc_configz00,
										MAKE_YOUNG_PAIR(BGl_list1720z00zz__rgc_configz00,
											MAKE_YOUNG_PAIR(BGl_list1725z00zz__rgc_configz00,
												MAKE_YOUNG_PAIR(BGl_list1730z00zz__rgc_configz00,
													BNIL))))))))));
			return (BGl_symbol1733z00zz__rgc_configz00 =
				bstring_to_symbol(BGl_string1734z00zz__rgc_configz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__rgc_configz00()
	{
		{	/* Rgc/rgcconfig.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__rgc_configz00()
	{
		{	/* Rgc/rgcconfig.scm 14 */
			BGl_za2rgczd2optimza2zd2zz__rgc_configz00 = BTRUE;
			{	/* Rgc/rgcconfig.scm 116 */
				obj_t BgL_envz00_1654;

				BgL_envz00_1654 = BGl_list1671z00zz__rgc_configz00;
				{	/* Rgc/rgcconfig.scm 63 */
					obj_t BgL_newz00_1655;

					BgL_newz00_1655 =
						create_struct(BGl_symbol1733z00zz__rgc_configz00,
						(int) (((long) 7)));
					{	/* Rgc/rgcconfig.scm 63 */
						int BgL_tmpz00_2100;

						BgL_tmpz00_2100 = (int) (((long) 6));
						STRUCT_SET(BgL_newz00_1655, BgL_tmpz00_2100, BgL_envz00_1654);
					}
					{	/* Rgc/rgcconfig.scm 63 */
						int BgL_tmpz00_2103;

						BgL_tmpz00_2103 = (int) (((long) 5));
						STRUCT_SET(BgL_newz00_1655, BgL_tmpz00_2103,
							BGl_proc1667z00zz__rgc_configz00);
					}
					{	/* Rgc/rgcconfig.scm 63 */
						int BgL_tmpz00_2106;

						BgL_tmpz00_2106 = (int) (((long) 4));
						STRUCT_SET(BgL_newz00_1655, BgL_tmpz00_2106,
							BGl_proc1668z00zz__rgc_configz00);
					}
					{	/* Rgc/rgcconfig.scm 63 */
						int BgL_tmpz00_2109;

						BgL_tmpz00_2109 = (int) (((long) 3));
						STRUCT_SET(BgL_newz00_1655, BgL_tmpz00_2109,
							BGl_proc1669z00zz__rgc_configz00);
					}
					{	/* Rgc/rgcconfig.scm 63 */
						int BgL_tmpz00_2112;

						BgL_tmpz00_2112 = (int) (((long) 2));
						STRUCT_SET(BgL_newz00_1655, BgL_tmpz00_2112,
							BGl_proc1670z00zz__rgc_configz00);
					}
					{	/* Rgc/rgcconfig.scm 63 */
						obj_t BgL_auxz00_2117;
						int BgL_tmpz00_2115;

						BgL_auxz00_2117 = BINT(((long) 256));
						BgL_tmpz00_2115 = (int) (((long) 1));
						STRUCT_SET(BgL_newz00_1655, BgL_tmpz00_2115, BgL_auxz00_2117);
					}
					{	/* Rgc/rgcconfig.scm 63 */
						int BgL_tmpz00_2120;

						BgL_tmpz00_2120 = (int) (((long) 0));
						STRUCT_SET(BgL_newz00_1655, BgL_tmpz00_2120,
							BGl_string1735z00zz__rgc_configz00);
					}
					BGl_za2asciizd2configza2zd2zz__rgc_configz00 = BgL_newz00_1655;
			}}
			return (BGl_za2rgczd2configza2zd2zz__rgc_configz00 =
				BGl_za2asciizd2configza2zd2zz__rgc_configz00, BUNSPEC);
		}

	}



/* &<@anonymous:1198> */
	obj_t BGl_z62zc3z04anonymousza31198ze3ze5zz__rgc_configz00(obj_t
		BgL_envz00_1992, obj_t BgL_xz00_1993)
	{
		{	/* Rgc/rgcconfig.scm 118 */
			{	/* Rgc/rgcconfig.scm 119 */
				bool_t BgL_tmpz00_2123;

				{	/* Rgc/rgcconfig.scm 119 */
					bool_t BgL_test1772z00_2124;

					if (INTEGERP(BgL_xz00_1993))
						{	/* Rgc/rgcconfig.scm 119 */
							BgL_test1772z00_2124 = ((long) CINT(BgL_xz00_1993) > ((long) 0));
						}
					else
						{	/* Rgc/rgcconfig.scm 119 */
							BgL_test1772z00_2124 =
								BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_1993,
								BINT(((long) 0)));
						}
					if (BgL_test1772z00_2124)
						{	/* Rgc/rgcconfig.scm 119 */
							bool_t BgL_test1774z00_2131;

							if (INTEGERP(BgL_xz00_1993))
								{	/* Rgc/rgcconfig.scm 119 */
									BgL_test1774z00_2131 =
										((long) CINT(BgL_xz00_1993) < ((long) 256));
								}
							else
								{	/* Rgc/rgcconfig.scm 119 */
									BgL_test1774z00_2131 =
										BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_xz00_1993,
										BINT(((long) 256)));
								}
							if (BgL_test1774z00_2131)
								{	/* Rgc/rgcconfig.scm 119 */
									BgL_tmpz00_2123 = CHARP(BgL_xz00_1993);
								}
							else
								{	/* Rgc/rgcconfig.scm 119 */
									BgL_tmpz00_2123 = ((bool_t) 0);
								}
						}
					else
						{	/* Rgc/rgcconfig.scm 119 */
							BgL_tmpz00_2123 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_2123);
			}
		}

	}



/* &<@anonymous:1201> */
	obj_t BGl_z62zc3z04anonymousza31201ze3ze5zz__rgc_configz00(obj_t
		BgL_envz00_1994, obj_t BgL_xz00_1995)
	{
		{	/* Rgc/rgcconfig.scm 120 */
			{	/* Rgc/rgcconfig.scm 121 */
				bool_t BgL_tmpz00_2140;

				{	/* Rgc/rgcconfig.scm 121 */
					bool_t BgL_test1776z00_2141;

					if (INTEGERP(BgL_xz00_1995))
						{	/* Rgc/rgcconfig.scm 121 */
							BgL_test1776z00_2141 = ((long) CINT(BgL_xz00_1995) > ((long) 0));
						}
					else
						{	/* Rgc/rgcconfig.scm 121 */
							BgL_test1776z00_2141 =
								BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_1995,
								BINT(((long) 0)));
						}
					if (BgL_test1776z00_2141)
						{	/* Rgc/rgcconfig.scm 121 */
							bool_t BgL_test1778z00_2148;

							if (INTEGERP(BgL_xz00_1995))
								{	/* Rgc/rgcconfig.scm 121 */
									BgL_test1778z00_2148 =
										((long) CINT(BgL_xz00_1995) < ((long) 256));
								}
							else
								{	/* Rgc/rgcconfig.scm 121 */
									BgL_test1778z00_2148 =
										BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_xz00_1995,
										BINT(((long) 256)));
								}
							if (BgL_test1778z00_2148)
								{	/* Rgc/rgcconfig.scm 121 */
									unsigned char BgL_arg1208z00_2011;

									BgL_arg1208z00_2011 = ((long) CINT(BgL_xz00_1995));
									{	/* Rgc/rgcconfig.scm 121 */
										bool_t BgL_res1601z00_2012;

										BgL_res1601z00_2012 = isalpha(BgL_arg1208z00_2011);
										BgL_tmpz00_2140 = BgL_res1601z00_2012;
								}}
							else
								{	/* Rgc/rgcconfig.scm 121 */
									BgL_tmpz00_2140 = ((bool_t) 0);
								}
						}
					else
						{	/* Rgc/rgcconfig.scm 121 */
							BgL_tmpz00_2140 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_2140);
			}
		}

	}



/* &<@anonymous:1211> */
	obj_t BGl_z62zc3z04anonymousza31211ze3ze5zz__rgc_configz00(obj_t
		BgL_envz00_1996, obj_t BgL_xz00_1997)
	{
		{	/* Rgc/rgcconfig.scm 122 */
			return BINT((toupper(((long) CINT(BgL_xz00_1997)))));
		}

	}



/* &<@anonymous:1222> */
	obj_t BGl_z62zc3z04anonymousza31222ze3ze5zz__rgc_configz00(obj_t
		BgL_envz00_1998, obj_t BgL_xz00_1999)
	{
		{	/* Rgc/rgcconfig.scm 124 */
			return BINT((tolower(((long) CINT(BgL_xz00_1999)))));
		}

	}



/* rgc-max-char */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2maxzd2charz00zz__rgc_configz00()
	{
		{	/* Rgc/rgcconfig.scm 77 */
			return
				STRUCT_REF(BGl_za2rgczd2configza2zd2zz__rgc_configz00,
				(int) (((long) 1)));
		}

	}



/* &rgc-max-char */
	obj_t BGl_z62rgczd2maxzd2charz62zz__rgc_configz00(obj_t BgL_envz00_2000)
	{
		{	/* Rgc/rgcconfig.scm 77 */
			return BGl_rgczd2maxzd2charz00zz__rgc_configz00();
		}

	}



/* rgc-char? */
	BGL_EXPORTED_DEF bool_t BGl_rgczd2charzf3z21zz__rgc_configz00(obj_t
		BgL_charz00_33)
	{
		{	/* Rgc/rgcconfig.scm 83 */
			{	/* Rgc/rgcconfig.scm 84 */
				obj_t BgL_fun1253z00_1686;

				BgL_fun1253z00_1686 =
					STRUCT_REF(BGl_za2rgczd2configza2zd2zz__rgc_configz00,
					(int) (((long) 2)));
				return
					CBOOL(PROCEDURE_ENTRY(BgL_fun1253z00_1686) (BgL_fun1253z00_1686,
						BgL_charz00_33, BEOA));
			}
		}

	}



/* &rgc-char? */
	obj_t BGl_z62rgczd2charzf3z43zz__rgc_configz00(obj_t BgL_envz00_2001,
		obj_t BgL_charz00_2002)
	{
		{	/* Rgc/rgcconfig.scm 83 */
			return BBOOL(BGl_rgczd2charzf3z21zz__rgc_configz00(BgL_charz00_2002));
		}

	}



/* rgc-alphabetic? */
	BGL_EXPORTED_DEF bool_t BGl_rgczd2alphabeticzf3z21zz__rgc_configz00(obj_t
		BgL_charz00_34)
	{
		{	/* Rgc/rgcconfig.scm 89 */
			{	/* Rgc/rgcconfig.scm 90 */
				obj_t BgL_fun1254z00_1689;

				BgL_fun1254z00_1689 =
					STRUCT_REF(BGl_za2rgczd2configza2zd2zz__rgc_configz00,
					(int) (((long) 3)));
				return
					CBOOL(PROCEDURE_ENTRY(BgL_fun1254z00_1689) (BgL_fun1254z00_1689,
						BgL_charz00_34, BEOA));
			}
		}

	}



/* &rgc-alphabetic? */
	obj_t BGl_z62rgczd2alphabeticzf3z43zz__rgc_configz00(obj_t BgL_envz00_2003,
		obj_t BgL_charz00_2004)
	{
		{	/* Rgc/rgcconfig.scm 89 */
			return
				BBOOL(BGl_rgczd2alphabeticzf3z21zz__rgc_configz00(BgL_charz00_2004));
		}

	}



/* rgc-upcase */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2upcasezd2zz__rgc_configz00(obj_t
		BgL_charz00_35)
	{
		{	/* Rgc/rgcconfig.scm 95 */
			{	/* Rgc/rgcconfig.scm 96 */
				obj_t BgL_fun1255z00_1692;

				BgL_fun1255z00_1692 =
					STRUCT_REF(BGl_za2rgczd2configza2zd2zz__rgc_configz00,
					(int) (((long) 4)));
				return
					PROCEDURE_ENTRY(BgL_fun1255z00_1692) (BgL_fun1255z00_1692,
					BgL_charz00_35, BEOA);
			}
		}

	}



/* &rgc-upcase */
	obj_t BGl_z62rgczd2upcasezb0zz__rgc_configz00(obj_t BgL_envz00_2005,
		obj_t BgL_charz00_2006)
	{
		{	/* Rgc/rgcconfig.scm 95 */
			return BGl_rgczd2upcasezd2zz__rgc_configz00(BgL_charz00_2006);
		}

	}



/* rgc-downcase */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2downcasezd2zz__rgc_configz00(obj_t
		BgL_charz00_36)
	{
		{	/* Rgc/rgcconfig.scm 101 */
			{	/* Rgc/rgcconfig.scm 102 */
				obj_t BgL_fun1256z00_1695;

				BgL_fun1256z00_1695 =
					STRUCT_REF(BGl_za2rgczd2configza2zd2zz__rgc_configz00,
					(int) (((long) 5)));
				return
					PROCEDURE_ENTRY(BgL_fun1256z00_1695) (BgL_fun1256z00_1695,
					BgL_charz00_36, BEOA);
			}
		}

	}



/* &rgc-downcase */
	obj_t BGl_z62rgczd2downcasezb0zz__rgc_configz00(obj_t BgL_envz00_2007,
		obj_t BgL_charz00_2008)
	{
		{	/* Rgc/rgcconfig.scm 101 */
			return BGl_rgczd2downcasezd2zz__rgc_configz00(BgL_charz00_2008);
		}

	}



/* rgc-env */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2envzd2zz__rgc_configz00()
	{
		{	/* Rgc/rgcconfig.scm 107 */
			return
				STRUCT_REF(BGl_za2rgczd2configza2zd2zz__rgc_configz00,
				(int) (((long) 6)));
		}

	}



/* &rgc-env */
	obj_t BGl_z62rgczd2envzb0zz__rgc_configz00(obj_t BgL_envz00_2009)
	{
		{	/* Rgc/rgcconfig.scm 107 */
			return BGl_rgczd2envzd2zz__rgc_configz00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__rgc_configz00()
	{
		{	/* Rgc/rgcconfig.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__rgc_configz00()
	{
		{	/* Rgc/rgcconfig.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__rgc_configz00()
	{
		{	/* Rgc/rgcconfig.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__rgc_configz00()
	{
		{	/* Rgc/rgcconfig.scm 14 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1736z00zz__rgc_configz00));
		}

	}

#ifdef __cplusplus
}
#endif
