/*===========================================================================*/
/*   (Ieee/control5.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Ieee/control5.scm -indent -o objs/obj_s/Ieee/control5.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_symbol1911z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1830z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1750z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1913z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1832z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1670z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_list1802z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1752z00zz__r5_control_features_6_4z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_z52getzd2mvalueszd2valz52zz__r5_control_features_6_4z00(int);
static obj_t BGl_symbol1915z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1834z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1754z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1917z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1836z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1674z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1756z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1919z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1838z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1676z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1758z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1678z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1921z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1840z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1760z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1923z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1842z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_list1730z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1925z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1844z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1763z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1683z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1927z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1846z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1765z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1929z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1848z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1767z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1686z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1769z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1688z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_requirezd2initializa7ationz75zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1931z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1851z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1933z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1771z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1853z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1691z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1935z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1773z00zz__r5_control_features_6_4z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_callzd2withzd2valuesz00zz__r5_control_features_6_4z00(obj_t, obj_t);
static obj_t BGl_symbol1855z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1693z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_list1906z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_list1825z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1775z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1857z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_list1745z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1695z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1777z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_list1665z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1859z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1779z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1698z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_z62z52getzd2mvalueszd2numberz30zz__r5_control_features_6_4z00(obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol1861z00zz__r5_control_features_6_4z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_symbol1863z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1782z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1865z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1784z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_list1673z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1867z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1786z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1869z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1788z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1871z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1790z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1873z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1792z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_list1680z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_list1762z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_list1681z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1875z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1794z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_list1682z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1796z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1878z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_list1685z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1798z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1880z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_list1850z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1882z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_list1690z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1884z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1886z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1888z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_list1697z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_cnstzd2initzd2zz__r5_control_features_6_4z00();
static obj_t BGl_z62z52setzd2mvalueszd2valz12z22zz__r5_control_features_6_4z00(obj_t, obj_t, obj_t);
extern long bgl_list_length(obj_t);
static obj_t BGl_symbol1890z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1892z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_list1781z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1894z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_z62z52getzd2mvalueszd2valz30zz__r5_control_features_6_4z00(obj_t, obj_t);
static obj_t BGl_symbol1896z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1898z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_gczd2rootszd2initz00zz__r5_control_features_6_4z00();
static obj_t BGl_importedzd2moduleszd2initz00zz__r5_control_features_6_4z00();
static obj_t BGl_list1877z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_z62callzd2withzd2valuesz62zz__r5_control_features_6_4z00(obj_t, obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_z62valuesz62zz__r5_control_features_6_4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_z52setzd2mvalueszd2valz12z40zz__r5_control_features_6_4z00(int, obj_t);
BGL_EXPORTED_DECL int BGl_z52getzd2mvalueszd2numberz52zz__r5_control_features_6_4z00();
static obj_t BGl_symbol1700z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1702z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1704z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1707z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1709z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1711z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1713z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_z62z52setzd2mvalueszd2numberz12z22zz__r5_control_features_6_4z00(obj_t, obj_t);
static obj_t BGl_symbol1715z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1718z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1800z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1720z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1803z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1722z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1805z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1724z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1807z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1726z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1809z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1728z00zz__r5_control_features_6_4z00 = BUNSPEC;
BGL_EXPORTED_DECL int BGl_z52setzd2mvalueszd2numberz12z40zz__r5_control_features_6_4z00(int);
static obj_t BGl_symbol1811z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1731z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1813z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1733z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1815z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1735z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1817z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1737z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_list1706z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1819z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1739z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1900z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1902z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1821z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1741z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1904z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1823z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1743z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1907z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1826z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1746z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1909z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1828z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1666z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1748z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_list1717z00zz__r5_control_features_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1668z00zz__r5_control_features_6_4z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_valuesz00zz__r5_control_features_6_4z00(obj_t);
static obj_t *__cnst;


DEFINE_STRING( BGl_string1789z00zz__r5_control_features_6_4z00, BgL_bgl_string1789za700za7za7_1940za7, "arg1211", 7 );
DEFINE_STRING( BGl_string1870z00zz__r5_control_features_6_4z00, BgL_bgl_string1870za700za7za7_1941za7, "arg1291", 7 );
DEFINE_STRING( BGl_string1872z00zz__r5_control_features_6_4z00, BgL_bgl_string1872za700za7za7_1942za7, "arg1292", 7 );
DEFINE_STRING( BGl_string1791z00zz__r5_control_features_6_4z00, BgL_bgl_string1791za700za7za7_1943za7, "arg1216", 7 );
DEFINE_STRING( BGl_string1874z00zz__r5_control_features_6_4z00, BgL_bgl_string1874za700za7za7_1944za7, "arg1295", 7 );
DEFINE_STRING( BGl_string1793z00zz__r5_control_features_6_4z00, BgL_bgl_string1793za700za7za7_1945za7, "arg1221", 7 );
DEFINE_STRING( BGl_string1876z00zz__r5_control_features_6_4z00, BgL_bgl_string1876za700za7za7_1946za7, "arg1296", 7 );
DEFINE_STRING( BGl_string1795z00zz__r5_control_features_6_4z00, BgL_bgl_string1795za700za7za7_1947za7, "arg1223", 7 );
DEFINE_STRING( BGl_string1797z00zz__r5_control_features_6_4z00, BgL_bgl_string1797za700za7za7_1948za7, "arg1225", 7 );
DEFINE_STRING( BGl_string1879z00zz__r5_control_features_6_4z00, BgL_bgl_string1879za700za7za7_1949za7, "arg1297", 7 );
DEFINE_STRING( BGl_string1799z00zz__r5_control_features_6_4z00, BgL_bgl_string1799za700za7za7_1950za7, "arg1227", 7 );
DEFINE_STRING( BGl_string1881z00zz__r5_control_features_6_4z00, BgL_bgl_string1881za700za7za7_1951za7, "arg1298", 7 );
DEFINE_STRING( BGl_string1883z00zz__r5_control_features_6_4z00, BgL_bgl_string1883za700za7za7_1952za7, "arg1299", 7 );
DEFINE_STRING( BGl_string1885z00zz__r5_control_features_6_4z00, BgL_bgl_string1885za700za7za7_1953za7, "arg1300", 7 );
DEFINE_STRING( BGl_string1887z00zz__r5_control_features_6_4z00, BgL_bgl_string1887za700za7za7_1954za7, "arg1301", 7 );
DEFINE_STRING( BGl_string1889z00zz__r5_control_features_6_4z00, BgL_bgl_string1889za700za7za7_1955za7, "arg1302", 7 );
DEFINE_STRING( BGl_string1891z00zz__r5_control_features_6_4z00, BgL_bgl_string1891za700za7za7_1956za7, "arg1303", 7 );
DEFINE_STRING( BGl_string1893z00zz__r5_control_features_6_4z00, BgL_bgl_string1893za700za7za7_1957za7, "arg1304", 7 );
DEFINE_STRING( BGl_string1895z00zz__r5_control_features_6_4z00, BgL_bgl_string1895za700za7za7_1958za7, "arg1306", 7 );
DEFINE_STRING( BGl_string1897z00zz__r5_control_features_6_4z00, BgL_bgl_string1897za700za7za7_1959za7, "arg1307", 7 );
DEFINE_STRING( BGl_string1899z00zz__r5_control_features_6_4z00, BgL_bgl_string1899za700za7za7_1960za7, "arg1308", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_z52setzd2mvalueszd2numberz12zd2envz92zz__r5_control_features_6_4z00, BgL_bgl_za762za752setza7d2mval1961za7, BGl_z62z52setzd2mvalueszd2numberz12z22zz__r5_control_features_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1701z00zz__r5_control_features_6_4z00, BgL_bgl_string1701za700za7za7_1962za7, "arg1110", 7 );
DEFINE_STRING( BGl_string1703z00zz__r5_control_features_6_4z00, BgL_bgl_string1703za700za7za7_1963za7, "arg1113", 7 );
DEFINE_STRING( BGl_string1705z00zz__r5_control_features_6_4z00, BgL_bgl_string1705za700za7za7_1964za7, "arg1114", 7 );
DEFINE_STRING( BGl_string1708z00zz__r5_control_features_6_4z00, BgL_bgl_string1708za700za7za7_1965za7, "arg1115", 7 );
DEFINE_STRING( BGl_string1710z00zz__r5_control_features_6_4z00, BgL_bgl_string1710za700za7za7_1966za7, "arg1116", 7 );
DEFINE_STRING( BGl_string1712z00zz__r5_control_features_6_4z00, BgL_bgl_string1712za700za7za7_1967za7, "arg1117", 7 );
DEFINE_STRING( BGl_string1714z00zz__r5_control_features_6_4z00, BgL_bgl_string1714za700za7za7_1968za7, "arg1118", 7 );
DEFINE_STRING( BGl_string1716z00zz__r5_control_features_6_4z00, BgL_bgl_string1716za700za7za7_1969za7, "arg1121", 7 );
DEFINE_STRING( BGl_string1719z00zz__r5_control_features_6_4z00, BgL_bgl_string1719za700za7za7_1970za7, "arg1122", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_z52setzd2mvalueszd2valz12zd2envz92zz__r5_control_features_6_4z00, BgL_bgl_za762za752setza7d2mval1971za7, BGl_z62z52setzd2mvalueszd2valz12z22zz__r5_control_features_6_4z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1801z00zz__r5_control_features_6_4z00, BgL_bgl_string1801za700za7za7_1972za7, "arg1229", 7 );
DEFINE_STRING( BGl_string1721z00zz__r5_control_features_6_4z00, BgL_bgl_string1721za700za7za7_1973za7, "arg1123", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_callzd2withzd2valueszd2envzd2zz__r5_control_features_6_4z00, BgL_bgl_za762callza7d2withza7d1974za7, BGl_z62callzd2withzd2valuesz62zz__r5_control_features_6_4z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1804z00zz__r5_control_features_6_4z00, BgL_bgl_string1804za700za7za7_1975za7, "arg1232", 7 );
DEFINE_STRING( BGl_string1723z00zz__r5_control_features_6_4z00, BgL_bgl_string1723za700za7za7_1976za7, "arg1124", 7 );
DEFINE_STRING( BGl_string1806z00zz__r5_control_features_6_4z00, BgL_bgl_string1806za700za7za7_1977za7, "arg1239", 7 );
DEFINE_STRING( BGl_string1725z00zz__r5_control_features_6_4z00, BgL_bgl_string1725za700za7za7_1978za7, "arg1125", 7 );
DEFINE_STRING( BGl_string1808z00zz__r5_control_features_6_4z00, BgL_bgl_string1808za700za7za7_1979za7, "arg1242", 7 );
DEFINE_STRING( BGl_string1727z00zz__r5_control_features_6_4z00, BgL_bgl_string1727za700za7za7_1980za7, "arg1126", 7 );
DEFINE_STRING( BGl_string1729z00zz__r5_control_features_6_4z00, BgL_bgl_string1729za700za7za7_1981za7, "arg1127", 7 );
DEFINE_STRING( BGl_string1810z00zz__r5_control_features_6_4z00, BgL_bgl_string1810za700za7za7_1982za7, "arg1243", 7 );
DEFINE_STRING( BGl_string1812z00zz__r5_control_features_6_4z00, BgL_bgl_string1812za700za7za7_1983za7, "arg1245", 7 );
DEFINE_STRING( BGl_string1732z00zz__r5_control_features_6_4z00, BgL_bgl_string1732za700za7za7_1984za7, "arg1128", 7 );
DEFINE_STRING( BGl_string1814z00zz__r5_control_features_6_4z00, BgL_bgl_string1814za700za7za7_1985za7, "arg1246", 7 );
DEFINE_STRING( BGl_string1734z00zz__r5_control_features_6_4z00, BgL_bgl_string1734za700za7za7_1986za7, "arg1129", 7 );
DEFINE_STRING( BGl_string1816z00zz__r5_control_features_6_4z00, BgL_bgl_string1816za700za7za7_1987za7, "arg1247", 7 );
DEFINE_STRING( BGl_string1736z00zz__r5_control_features_6_4z00, BgL_bgl_string1736za700za7za7_1988za7, "arg1133", 7 );
DEFINE_STRING( BGl_string1818z00zz__r5_control_features_6_4z00, BgL_bgl_string1818za700za7za7_1989za7, "arg1250", 7 );
DEFINE_STRING( BGl_string1656z00zz__r5_control_features_6_4z00, BgL_bgl_string1656za700za7za7_1990za7, "/tmp/4.4a/runtime/Ieee/control5.scm", 35 );
DEFINE_STRING( BGl_string1738z00zz__r5_control_features_6_4z00, BgL_bgl_string1738za700za7za7_1991za7, "arg1134", 7 );
DEFINE_STRING( BGl_string1657z00zz__r5_control_features_6_4z00, BgL_bgl_string1657za700za7za7_1992za7, "&%set-mvalues-number!", 21 );
DEFINE_STRING( BGl_string1658z00zz__r5_control_features_6_4z00, BgL_bgl_string1658za700za7za7_1993za7, "bint", 4 );
DEFINE_STRING( BGl_string1659z00zz__r5_control_features_6_4z00, BgL_bgl_string1659za700za7za7_1994za7, "&%get-mvalues-val", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_z52getzd2mvalueszd2valzd2envz80zz__r5_control_features_6_4z00, BgL_bgl_za762za752getza7d2mval1995za7, BGl_z62z52getzd2mvalueszd2valz30zz__r5_control_features_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1901z00zz__r5_control_features_6_4z00, BgL_bgl_string1901za700za7za7_1996za7, "arg1309", 7 );
DEFINE_STRING( BGl_string1820z00zz__r5_control_features_6_4z00, BgL_bgl_string1820za700za7za7_1997za7, "arg1252", 7 );
DEFINE_STRING( BGl_string1740z00zz__r5_control_features_6_4z00, BgL_bgl_string1740za700za7za7_1998za7, "arg1140", 7 );
DEFINE_STRING( BGl_string1903z00zz__r5_control_features_6_4z00, BgL_bgl_string1903za700za7za7_1999za7, "arg1310", 7 );
DEFINE_STRING( BGl_string1822z00zz__r5_control_features_6_4z00, BgL_bgl_string1822za700za7za7_2000za7, "arg1253", 7 );
DEFINE_STRING( BGl_string1660z00zz__r5_control_features_6_4z00, BgL_bgl_string1660za700za7za7_2001za7, "&%set-mvalues-val!", 18 );
DEFINE_STRING( BGl_string1742z00zz__r5_control_features_6_4z00, BgL_bgl_string1742za700za7za7_2002za7, "arg1145", 7 );
DEFINE_STRING( BGl_string1661z00zz__r5_control_features_6_4z00, BgL_bgl_string1661za700za7za7_2003za7, "values", 6 );
DEFINE_STRING( BGl_string1905z00zz__r5_control_features_6_4z00, BgL_bgl_string1905za700za7za7_2004za7, "arg1311", 7 );
DEFINE_STRING( BGl_string1824z00zz__r5_control_features_6_4z00, BgL_bgl_string1824za700za7za7_2005za7, "arg1254", 7 );
DEFINE_STRING( BGl_string1662z00zz__r5_control_features_6_4z00, BgL_bgl_string1662za700za7za7_2006za7, "pair", 4 );
DEFINE_STRING( BGl_string1744z00zz__r5_control_features_6_4z00, BgL_bgl_string1744za700za7za7_2007za7, "arg1146", 7 );
DEFINE_STRING( BGl_string1663z00zz__r5_control_features_6_4z00, BgL_bgl_string1663za700za7za7_2008za7, "loop", 4 );
DEFINE_STRING( BGl_string1664z00zz__r5_control_features_6_4z00, BgL_bgl_string1664za700za7za7_2009za7, "call-with-values:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string1908z00zz__r5_control_features_6_4z00, BgL_bgl_string1908za700za7za7_2010za7, "arg1312", 7 );
DEFINE_STRING( BGl_string1827z00zz__r5_control_features_6_4z00, BgL_bgl_string1827za700za7za7_2011za7, "arg1256", 7 );
DEFINE_STRING( BGl_string1747z00zz__r5_control_features_6_4z00, BgL_bgl_string1747za700za7za7_2012za7, "arg1155", 7 );
DEFINE_STRING( BGl_string1829z00zz__r5_control_features_6_4z00, BgL_bgl_string1829za700za7za7_2013za7, "arg1258", 7 );
DEFINE_STRING( BGl_string1667z00zz__r5_control_features_6_4z00, BgL_bgl_string1667za700za7za7_2014za7, "funcall", 7 );
DEFINE_STRING( BGl_string1749z00zz__r5_control_features_6_4z00, BgL_bgl_string1749za700za7za7_2015za7, "arg1156", 7 );
DEFINE_STRING( BGl_string1669z00zz__r5_control_features_6_4z00, BgL_bgl_string1669za700za7za7_2016za7, "producer", 8 );
DEFINE_STRING( BGl_string1910z00zz__r5_control_features_6_4z00, BgL_bgl_string1910za700za7za7_2017za7, "arg1313", 7 );
DEFINE_STRING( BGl_string1912z00zz__r5_control_features_6_4z00, BgL_bgl_string1912za700za7za7_2018za7, "arg1314", 7 );
DEFINE_STRING( BGl_string1831z00zz__r5_control_features_6_4z00, BgL_bgl_string1831za700za7za7_2019za7, "arg1263", 7 );
DEFINE_STRING( BGl_string1751z00zz__r5_control_features_6_4z00, BgL_bgl_string1751za700za7za7_2020za7, "arg1165", 7 );
DEFINE_STRING( BGl_string1914z00zz__r5_control_features_6_4z00, BgL_bgl_string1914za700za7za7_2021za7, "arg1315", 7 );
DEFINE_STRING( BGl_string1833z00zz__r5_control_features_6_4z00, BgL_bgl_string1833za700za7za7_2022za7, "arg1268", 7 );
DEFINE_STRING( BGl_string1671z00zz__r5_control_features_6_4z00, BgL_bgl_string1671za700za7za7_2023za7, "call-with-values", 16 );
DEFINE_STRING( BGl_string1753z00zz__r5_control_features_6_4z00, BgL_bgl_string1753za700za7za7_2024za7, "arg1166", 7 );
DEFINE_STRING( BGl_string1672z00zz__r5_control_features_6_4z00, BgL_bgl_string1672za700za7za7_2025za7, "Wrong number of arguments", 25 );
DEFINE_STRING( BGl_string1916z00zz__r5_control_features_6_4z00, BgL_bgl_string1916za700za7za7_2026za7, "arg1316", 7 );
DEFINE_STRING( BGl_string1835z00zz__r5_control_features_6_4z00, BgL_bgl_string1835za700za7za7_2027za7, "arg1270", 7 );
DEFINE_STRING( BGl_string1755z00zz__r5_control_features_6_4z00, BgL_bgl_string1755za700za7za7_2028za7, "arg1167", 7 );
DEFINE_STRING( BGl_string1918z00zz__r5_control_features_6_4z00, BgL_bgl_string1918za700za7za7_2029za7, "arg1317", 7 );
DEFINE_STRING( BGl_string1837z00zz__r5_control_features_6_4z00, BgL_bgl_string1837za700za7za7_2030za7, "arg1271", 7 );
DEFINE_STRING( BGl_string1675z00zz__r5_control_features_6_4z00, BgL_bgl_string1675za700za7za7_2031za7, "apply", 5 );
DEFINE_STRING( BGl_string1757z00zz__r5_control_features_6_4z00, BgL_bgl_string1757za700za7za7_2032za7, "arg1169", 7 );
DEFINE_STRING( BGl_string1839z00zz__r5_control_features_6_4z00, BgL_bgl_string1839za700za7za7_2033za7, "arg1273", 7 );
DEFINE_STRING( BGl_string1677z00zz__r5_control_features_6_4z00, BgL_bgl_string1677za700za7za7_2034za7, "consumer", 8 );
DEFINE_STRING( BGl_string1759z00zz__r5_control_features_6_4z00, BgL_bgl_string1759za700za7za7_2035za7, "arg1170", 7 );
DEFINE_STRING( BGl_string1679z00zz__r5_control_features_6_4z00, BgL_bgl_string1679za700za7za7_2036za7, "res0", 4 );
DEFINE_STRING( BGl_string1920z00zz__r5_control_features_6_4z00, BgL_bgl_string1920za700za7za7_2037za7, "arg1318", 7 );
DEFINE_STRING( BGl_string1922z00zz__r5_control_features_6_4z00, BgL_bgl_string1922za700za7za7_2038za7, "arg1319", 7 );
DEFINE_STRING( BGl_string1841z00zz__r5_control_features_6_4z00, BgL_bgl_string1841za700za7za7_2039za7, "arg1274", 7 );
DEFINE_STRING( BGl_string1761z00zz__r5_control_features_6_4z00, BgL_bgl_string1761za700za7za7_2040za7, "arg1172", 7 );
DEFINE_STRING( BGl_string1924z00zz__r5_control_features_6_4z00, BgL_bgl_string1924za700za7za7_2041za7, "arg1322", 7 );
DEFINE_STRING( BGl_string1843z00zz__r5_control_features_6_4z00, BgL_bgl_string1843za700za7za7_2042za7, "arg1275", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_z52getzd2mvalueszd2numberzd2envz80zz__r5_control_features_6_4z00, BgL_bgl_za762za752getza7d2mval2043za7, BGl_z62z52getzd2mvalueszd2numberz30zz__r5_control_features_6_4z00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string1926z00zz__r5_control_features_6_4z00, BgL_bgl_string1926za700za7za7_2044za7, "arg1324", 7 );
DEFINE_STRING( BGl_string1845z00zz__r5_control_features_6_4z00, BgL_bgl_string1845za700za7za7_2045za7, "arg1276", 7 );
DEFINE_STRING( BGl_string1764z00zz__r5_control_features_6_4z00, BgL_bgl_string1764za700za7za7_2046za7, "arg1174", 7 );
DEFINE_STRING( BGl_string1684z00zz__r5_control_features_6_4z00, BgL_bgl_string1684za700za7za7_2047za7, "arg1078", 7 );
DEFINE_STRING( BGl_string1928z00zz__r5_control_features_6_4z00, BgL_bgl_string1928za700za7za7_2048za7, "arg1325", 7 );
DEFINE_STRING( BGl_string1847z00zz__r5_control_features_6_4z00, BgL_bgl_string1847za700za7za7_2049za7, "arg1277", 7 );
DEFINE_STRING( BGl_string1766z00zz__r5_control_features_6_4z00, BgL_bgl_string1766za700za7za7_2050za7, "arg1175", 7 );
DEFINE_STRING( BGl_string1849z00zz__r5_control_features_6_4z00, BgL_bgl_string1849za700za7za7_2051za7, "arg1280", 7 );
DEFINE_STRING( BGl_string1768z00zz__r5_control_features_6_4z00, BgL_bgl_string1768za700za7za7_2052za7, "arg1176", 7 );
DEFINE_STRING( BGl_string1687z00zz__r5_control_features_6_4z00, BgL_bgl_string1687za700za7za7_2053za7, "arg1095", 7 );
DEFINE_STRING( BGl_string1689z00zz__r5_control_features_6_4z00, BgL_bgl_string1689za700za7za7_2054za7, "arg1099", 7 );
DEFINE_STRING( BGl_string1930z00zz__r5_control_features_6_4z00, BgL_bgl_string1930za700za7za7_2055za7, "arg1326", 7 );
DEFINE_STRING( BGl_string1932z00zz__r5_control_features_6_4z00, BgL_bgl_string1932za700za7za7_2056za7, "arg1327", 7 );
DEFINE_STRING( BGl_string1770z00zz__r5_control_features_6_4z00, BgL_bgl_string1770za700za7za7_2057za7, "arg1177", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_valueszd2envzd2zz__r5_control_features_6_4z00, BgL_bgl_za762valuesza762za7za7__2058z00, va_generic_entry, BGl_z62valuesz62zz__r5_control_features_6_4z00, BUNSPEC, -1 );
DEFINE_STRING( BGl_string1852z00zz__r5_control_features_6_4z00, BgL_bgl_string1852za700za7za7_2059za7, "arg1281", 7 );
DEFINE_STRING( BGl_string1934z00zz__r5_control_features_6_4z00, BgL_bgl_string1934za700za7za7_2060za7, "arg1328", 7 );
DEFINE_STRING( BGl_string1772z00zz__r5_control_features_6_4z00, BgL_bgl_string1772za700za7za7_2061za7, "arg1178", 7 );
DEFINE_STRING( BGl_string1854z00zz__r5_control_features_6_4z00, BgL_bgl_string1854za700za7za7_2062za7, "arg1282", 7 );
DEFINE_STRING( BGl_string1692z00zz__r5_control_features_6_4z00, BgL_bgl_string1692za700za7za7_2063za7, "arg1100", 7 );
DEFINE_STRING( BGl_string1936z00zz__r5_control_features_6_4z00, BgL_bgl_string1936za700za7za7_2064za7, "arg1329", 7 );
DEFINE_STRING( BGl_string1774z00zz__r5_control_features_6_4z00, BgL_bgl_string1774za700za7za7_2065za7, "arg1179", 7 );
DEFINE_STRING( BGl_string1937z00zz__r5_control_features_6_4z00, BgL_bgl_string1937za700za7za7_2066za7, "&call-with-values", 17 );
DEFINE_STRING( BGl_string1856z00zz__r5_control_features_6_4z00, BgL_bgl_string1856za700za7za7_2067za7, "arg1284", 7 );
DEFINE_STRING( BGl_string1694z00zz__r5_control_features_6_4z00, BgL_bgl_string1694za700za7za7_2068za7, "arg1101", 7 );
DEFINE_STRING( BGl_string1938z00zz__r5_control_features_6_4z00, BgL_bgl_string1938za700za7za7_2069za7, "procedure", 9 );
DEFINE_STRING( BGl_string1776z00zz__r5_control_features_6_4z00, BgL_bgl_string1776za700za7za7_2070za7, "arg1186", 7 );
DEFINE_STRING( BGl_string1939z00zz__r5_control_features_6_4z00, BgL_bgl_string1939za700za7za7_2071za7, "__r5_control_features_6_4", 25 );
DEFINE_STRING( BGl_string1858z00zz__r5_control_features_6_4z00, BgL_bgl_string1858za700za7za7_2072za7, "arg1285", 7 );
DEFINE_STRING( BGl_string1696z00zz__r5_control_features_6_4z00, BgL_bgl_string1696za700za7za7_2073za7, "arg1103", 7 );
DEFINE_STRING( BGl_string1778z00zz__r5_control_features_6_4z00, BgL_bgl_string1778za700za7za7_2074za7, "arg1190", 7 );
DEFINE_STRING( BGl_string1699z00zz__r5_control_features_6_4z00, BgL_bgl_string1699za700za7za7_2075za7, "arg1109", 7 );
DEFINE_STRING( BGl_string1860z00zz__r5_control_features_6_4z00, BgL_bgl_string1860za700za7za7_2076za7, "arg1286", 7 );
DEFINE_STRING( BGl_string1780z00zz__r5_control_features_6_4z00, BgL_bgl_string1780za700za7za7_2077za7, "arg1194", 7 );
DEFINE_STRING( BGl_string1862z00zz__r5_control_features_6_4z00, BgL_bgl_string1862za700za7za7_2078za7, "arg1287", 7 );
DEFINE_STRING( BGl_string1864z00zz__r5_control_features_6_4z00, BgL_bgl_string1864za700za7za7_2079za7, "arg1288", 7 );
DEFINE_STRING( BGl_string1783z00zz__r5_control_features_6_4z00, BgL_bgl_string1783za700za7za7_2080za7, "arg1197", 7 );
DEFINE_STRING( BGl_string1866z00zz__r5_control_features_6_4z00, BgL_bgl_string1866za700za7za7_2081za7, "arg1289", 7 );
DEFINE_STRING( BGl_string1785z00zz__r5_control_features_6_4z00, BgL_bgl_string1785za700za7za7_2082za7, "arg1201", 7 );
DEFINE_STRING( BGl_string1868z00zz__r5_control_features_6_4z00, BgL_bgl_string1868za700za7za7_2083za7, "arg1290", 7 );
DEFINE_STRING( BGl_string1787z00zz__r5_control_features_6_4z00, BgL_bgl_string1787za700za7za7_2084za7, "arg1208", 7 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_symbol1911z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1830z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1750z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1913z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1832z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1670z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_list1802z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1752z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1915z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1834z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1754z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1917z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1836z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1674z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1756z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1919z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1838z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1676z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1758z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1678z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1921z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1840z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1760z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1923z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1842z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_list1730z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1925z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1844z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1763z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1683z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1927z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1846z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1765z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1929z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1848z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1767z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1686z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1769z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1688z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1931z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1851z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1933z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1771z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1853z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1691z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1935z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1773z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1855z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1693z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_list1906z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_list1825z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1775z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1857z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_list1745z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1695z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1777z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_list1665z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1859z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1779z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1698z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1861z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1863z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1782z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1865z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1784z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_list1673z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1867z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1786z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1869z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1788z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1871z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1790z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1873z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1792z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_list1680z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_list1762z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_list1681z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1875z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1794z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_list1682z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1796z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1878z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_list1685z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1798z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1880z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_list1850z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1882z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_list1690z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1884z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1886z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1888z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_list1697z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1890z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1892z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_list1781z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1894z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1896z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1898z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_list1877z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1700z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1702z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1704z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1707z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1709z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1711z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1713z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1715z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1718z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1800z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1720z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1803z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1722z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1805z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1724z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1807z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1726z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1809z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1728z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1811z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1731z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1813z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1733z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1815z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1735z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1817z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1737z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_list1706z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1819z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1739z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1900z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1902z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1821z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1741z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1904z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1823z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1743z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1907z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1826z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1746z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1909z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1828z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1666z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1748z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_list1717z00zz__r5_control_features_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1668z00zz__r5_control_features_6_4z00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long BgL_checksumz00_1275, char * BgL_fromz00_1276)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r5_control_features_6_4z00))
{ 
BGl_requirezd2initializa7ationz75zz__r5_control_features_6_4z00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__r5_control_features_6_4z00(); 
BGl_cnstzd2initzd2zz__r5_control_features_6_4z00(); 
return 
BGl_importedzd2moduleszd2initz00zz__r5_control_features_6_4z00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r5_control_features_6_4z00()
{
{ /* Ieee/control5.scm 14 */
BGl_symbol1666z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1667z00zz__r5_control_features_6_4z00); 
BGl_symbol1668z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1669z00zz__r5_control_features_6_4z00); 
BGl_list1665z00zz__r5_control_features_6_4z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1666z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1668z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1668z00zz__r5_control_features_6_4z00, BNIL))); 
BGl_symbol1670z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1671z00zz__r5_control_features_6_4z00); 
BGl_symbol1674z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1675z00zz__r5_control_features_6_4z00); 
BGl_symbol1676z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1677z00zz__r5_control_features_6_4z00); 
BGl_symbol1678z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1679z00zz__r5_control_features_6_4z00); 
BGl_list1673z00zz__r5_control_features_6_4z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1674z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1678z00zz__r5_control_features_6_4z00, BNIL))); 
BGl_list1680z00zz__r5_control_features_6_4z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1666z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, BNIL))); 
BGl_list1681z00zz__r5_control_features_6_4z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1666z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1678z00zz__r5_control_features_6_4z00, BNIL)))); 
BGl_symbol1683z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1684z00zz__r5_control_features_6_4z00); 
BGl_list1682z00zz__r5_control_features_6_4z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1666z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1678z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1683z00zz__r5_control_features_6_4z00, BNIL))))); 
BGl_symbol1686z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1687z00zz__r5_control_features_6_4z00); 
BGl_symbol1688z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1689z00zz__r5_control_features_6_4z00); 
BGl_list1685z00zz__r5_control_features_6_4z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1666z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1678z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1686z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1688z00zz__r5_control_features_6_4z00, BNIL)))))); 
BGl_symbol1691z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1692z00zz__r5_control_features_6_4z00); 
BGl_symbol1693z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1694z00zz__r5_control_features_6_4z00); 
BGl_symbol1695z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1696z00zz__r5_control_features_6_4z00); 
BGl_list1690z00zz__r5_control_features_6_4z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1666z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1678z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1691z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1693z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1695z00zz__r5_control_features_6_4z00, BNIL))))))); 
BGl_symbol1698z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1699z00zz__r5_control_features_6_4z00); 
BGl_symbol1700z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1701z00zz__r5_control_features_6_4z00); 
BGl_symbol1702z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1703z00zz__r5_control_features_6_4z00); 
BGl_symbol1704z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1705z00zz__r5_control_features_6_4z00); 
BGl_list1697z00zz__r5_control_features_6_4z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1666z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1678z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1698z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1700z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1702z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1704z00zz__r5_control_features_6_4z00, BNIL)))))))); 
BGl_symbol1707z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1708z00zz__r5_control_features_6_4z00); 
BGl_symbol1709z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1710z00zz__r5_control_features_6_4z00); 
BGl_symbol1711z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1712z00zz__r5_control_features_6_4z00); 
BGl_symbol1713z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1714z00zz__r5_control_features_6_4z00); 
BGl_symbol1715z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1716z00zz__r5_control_features_6_4z00); 
BGl_list1706z00zz__r5_control_features_6_4z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1666z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1678z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1707z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1709z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1711z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1713z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1715z00zz__r5_control_features_6_4z00, BNIL))))))))); 
BGl_symbol1718z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1719z00zz__r5_control_features_6_4z00); 
BGl_symbol1720z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1721z00zz__r5_control_features_6_4z00); 
BGl_symbol1722z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1723z00zz__r5_control_features_6_4z00); 
BGl_symbol1724z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1725z00zz__r5_control_features_6_4z00); 
BGl_symbol1726z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1727z00zz__r5_control_features_6_4z00); 
BGl_symbol1728z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1729z00zz__r5_control_features_6_4z00); 
BGl_list1717z00zz__r5_control_features_6_4z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1666z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1678z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1718z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1720z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1722z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1724z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1726z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1728z00zz__r5_control_features_6_4z00, BNIL)))))))))); 
BGl_symbol1731z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1732z00zz__r5_control_features_6_4z00); 
BGl_symbol1733z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1734z00zz__r5_control_features_6_4z00); 
BGl_symbol1735z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1736z00zz__r5_control_features_6_4z00); 
BGl_symbol1737z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1738z00zz__r5_control_features_6_4z00); 
BGl_symbol1739z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1740z00zz__r5_control_features_6_4z00); 
BGl_symbol1741z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1742z00zz__r5_control_features_6_4z00); 
BGl_symbol1743z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1744z00zz__r5_control_features_6_4z00); 
BGl_list1730z00zz__r5_control_features_6_4z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1666z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1678z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1731z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1733z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1735z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1737z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1739z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1741z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1743z00zz__r5_control_features_6_4z00, BNIL))))))))))); 
BGl_symbol1746z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1747z00zz__r5_control_features_6_4z00); 
BGl_symbol1748z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1749z00zz__r5_control_features_6_4z00); 
BGl_symbol1750z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1751z00zz__r5_control_features_6_4z00); 
BGl_symbol1752z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1753z00zz__r5_control_features_6_4z00); 
BGl_symbol1754z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1755z00zz__r5_control_features_6_4z00); 
BGl_symbol1756z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1757z00zz__r5_control_features_6_4z00); 
BGl_symbol1758z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1759z00zz__r5_control_features_6_4z00); 
BGl_symbol1760z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1761z00zz__r5_control_features_6_4z00); 
BGl_list1745z00zz__r5_control_features_6_4z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1666z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1678z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1746z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1748z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1750z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1752z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1754z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1756z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1758z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1760z00zz__r5_control_features_6_4z00, BNIL)))))))))))); 
BGl_symbol1763z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1764z00zz__r5_control_features_6_4z00); 
BGl_symbol1765z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1766z00zz__r5_control_features_6_4z00); 
BGl_symbol1767z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1768z00zz__r5_control_features_6_4z00); 
BGl_symbol1769z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1770z00zz__r5_control_features_6_4z00); 
BGl_symbol1771z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1772z00zz__r5_control_features_6_4z00); 
BGl_symbol1773z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1774z00zz__r5_control_features_6_4z00); 
BGl_symbol1775z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1776z00zz__r5_control_features_6_4z00); 
BGl_symbol1777z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1778z00zz__r5_control_features_6_4z00); 
BGl_symbol1779z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1780z00zz__r5_control_features_6_4z00); 
BGl_list1762z00zz__r5_control_features_6_4z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1666z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1678z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1763z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1765z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1767z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1769z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1771z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1773z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1775z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1777z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1779z00zz__r5_control_features_6_4z00, BNIL))))))))))))); 
BGl_symbol1782z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1783z00zz__r5_control_features_6_4z00); 
BGl_symbol1784z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1785z00zz__r5_control_features_6_4z00); 
BGl_symbol1786z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1787z00zz__r5_control_features_6_4z00); 
BGl_symbol1788z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1789z00zz__r5_control_features_6_4z00); 
BGl_symbol1790z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1791z00zz__r5_control_features_6_4z00); 
BGl_symbol1792z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1793z00zz__r5_control_features_6_4z00); 
BGl_symbol1794z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1795z00zz__r5_control_features_6_4z00); 
BGl_symbol1796z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1797z00zz__r5_control_features_6_4z00); 
BGl_symbol1798z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1799z00zz__r5_control_features_6_4z00); 
BGl_symbol1800z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1801z00zz__r5_control_features_6_4z00); 
BGl_list1781z00zz__r5_control_features_6_4z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1666z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1678z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1782z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1784z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1786z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1788z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1790z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1792z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1794z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1796z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1798z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1800z00zz__r5_control_features_6_4z00, BNIL)))))))))))))); 
BGl_symbol1803z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1804z00zz__r5_control_features_6_4z00); 
BGl_symbol1805z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1806z00zz__r5_control_features_6_4z00); 
BGl_symbol1807z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1808z00zz__r5_control_features_6_4z00); 
BGl_symbol1809z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1810z00zz__r5_control_features_6_4z00); 
BGl_symbol1811z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1812z00zz__r5_control_features_6_4z00); 
BGl_symbol1813z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1814z00zz__r5_control_features_6_4z00); 
BGl_symbol1815z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1816z00zz__r5_control_features_6_4z00); 
BGl_symbol1817z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1818z00zz__r5_control_features_6_4z00); 
BGl_symbol1819z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1820z00zz__r5_control_features_6_4z00); 
BGl_symbol1821z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1822z00zz__r5_control_features_6_4z00); 
BGl_symbol1823z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1824z00zz__r5_control_features_6_4z00); 
BGl_list1802z00zz__r5_control_features_6_4z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1666z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1678z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1803z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1805z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1807z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1809z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1811z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1813z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1815z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1817z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1819z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1821z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1823z00zz__r5_control_features_6_4z00, BNIL))))))))))))))); 
BGl_symbol1826z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1827z00zz__r5_control_features_6_4z00); 
BGl_symbol1828z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1829z00zz__r5_control_features_6_4z00); 
BGl_symbol1830z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1831z00zz__r5_control_features_6_4z00); 
BGl_symbol1832z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1833z00zz__r5_control_features_6_4z00); 
BGl_symbol1834z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1835z00zz__r5_control_features_6_4z00); 
BGl_symbol1836z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1837z00zz__r5_control_features_6_4z00); 
BGl_symbol1838z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1839z00zz__r5_control_features_6_4z00); 
BGl_symbol1840z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1841z00zz__r5_control_features_6_4z00); 
BGl_symbol1842z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1843z00zz__r5_control_features_6_4z00); 
BGl_symbol1844z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1845z00zz__r5_control_features_6_4z00); 
BGl_symbol1846z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1847z00zz__r5_control_features_6_4z00); 
BGl_symbol1848z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1849z00zz__r5_control_features_6_4z00); 
BGl_list1825z00zz__r5_control_features_6_4z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1666z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1678z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1826z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1828z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1830z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1832z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1834z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1836z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1838z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1840z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1842z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1844z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1846z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1848z00zz__r5_control_features_6_4z00, BNIL)))))))))))))))); 
BGl_symbol1851z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1852z00zz__r5_control_features_6_4z00); 
BGl_symbol1853z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1854z00zz__r5_control_features_6_4z00); 
BGl_symbol1855z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1856z00zz__r5_control_features_6_4z00); 
BGl_symbol1857z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1858z00zz__r5_control_features_6_4z00); 
BGl_symbol1859z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1860z00zz__r5_control_features_6_4z00); 
BGl_symbol1861z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1862z00zz__r5_control_features_6_4z00); 
BGl_symbol1863z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1864z00zz__r5_control_features_6_4z00); 
BGl_symbol1865z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1866z00zz__r5_control_features_6_4z00); 
BGl_symbol1867z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1868z00zz__r5_control_features_6_4z00); 
BGl_symbol1869z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1870z00zz__r5_control_features_6_4z00); 
BGl_symbol1871z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1872z00zz__r5_control_features_6_4z00); 
BGl_symbol1873z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1874z00zz__r5_control_features_6_4z00); 
BGl_symbol1875z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1876z00zz__r5_control_features_6_4z00); 
BGl_list1850z00zz__r5_control_features_6_4z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1666z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1678z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1851z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1853z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1855z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1857z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1859z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1861z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1863z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1865z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1867z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1869z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1871z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1873z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1875z00zz__r5_control_features_6_4z00, BNIL))))))))))))))))); 
BGl_symbol1878z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1879z00zz__r5_control_features_6_4z00); 
BGl_symbol1880z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1881z00zz__r5_control_features_6_4z00); 
BGl_symbol1882z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1883z00zz__r5_control_features_6_4z00); 
BGl_symbol1884z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1885z00zz__r5_control_features_6_4z00); 
BGl_symbol1886z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1887z00zz__r5_control_features_6_4z00); 
BGl_symbol1888z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1889z00zz__r5_control_features_6_4z00); 
BGl_symbol1890z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1891z00zz__r5_control_features_6_4z00); 
BGl_symbol1892z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1893z00zz__r5_control_features_6_4z00); 
BGl_symbol1894z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1895z00zz__r5_control_features_6_4z00); 
BGl_symbol1896z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1897z00zz__r5_control_features_6_4z00); 
BGl_symbol1898z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1899z00zz__r5_control_features_6_4z00); 
BGl_symbol1900z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1901z00zz__r5_control_features_6_4z00); 
BGl_symbol1902z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1903z00zz__r5_control_features_6_4z00); 
BGl_symbol1904z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1905z00zz__r5_control_features_6_4z00); 
BGl_list1877z00zz__r5_control_features_6_4z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1666z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1678z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1878z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1880z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1882z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1884z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1886z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1888z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1890z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1892z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1894z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1896z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1898z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1900z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1902z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1904z00zz__r5_control_features_6_4z00, BNIL)))))))))))))))))); 
BGl_symbol1907z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1908z00zz__r5_control_features_6_4z00); 
BGl_symbol1909z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1910z00zz__r5_control_features_6_4z00); 
BGl_symbol1911z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1912z00zz__r5_control_features_6_4z00); 
BGl_symbol1913z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1914z00zz__r5_control_features_6_4z00); 
BGl_symbol1915z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1916z00zz__r5_control_features_6_4z00); 
BGl_symbol1917z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1918z00zz__r5_control_features_6_4z00); 
BGl_symbol1919z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1920z00zz__r5_control_features_6_4z00); 
BGl_symbol1921z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1922z00zz__r5_control_features_6_4z00); 
BGl_symbol1923z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1924z00zz__r5_control_features_6_4z00); 
BGl_symbol1925z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1926z00zz__r5_control_features_6_4z00); 
BGl_symbol1927z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1928z00zz__r5_control_features_6_4z00); 
BGl_symbol1929z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1930z00zz__r5_control_features_6_4z00); 
BGl_symbol1931z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1932z00zz__r5_control_features_6_4z00); 
BGl_symbol1933z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1934z00zz__r5_control_features_6_4z00); 
BGl_symbol1935z00zz__r5_control_features_6_4z00 = 
bstring_to_symbol(BGl_string1936z00zz__r5_control_features_6_4z00); 
return ( 
BGl_list1906z00zz__r5_control_features_6_4z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1666z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1676z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1678z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1907z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1909z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1911z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1913z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1915z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1917z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1919z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1921z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1923z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1925z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1927z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1929z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1931z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1933z00zz__r5_control_features_6_4z00, 
MAKE_YOUNG_PAIR(BGl_symbol1935z00zz__r5_control_features_6_4z00, BNIL))))))))))))))))))), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__r5_control_features_6_4z00()
{
{ /* Ieee/control5.scm 14 */
return 
bgl_gc_roots_register();} 

}



/* %get-mvalues-number */
BGL_EXPORTED_DEF int BGl_z52getzd2mvalueszd2numberz52zz__r5_control_features_6_4z00()
{
{ /* Ieee/control5.scm 66 */
return 
BGL_MVALUES_NUMBER();} 

}



/* &%get-mvalues-number */
obj_t BGl_z62z52getzd2mvalueszd2numberz30zz__r5_control_features_6_4z00(obj_t BgL_envz00_1178)
{
{ /* Ieee/control5.scm 66 */
return 
BINT(
BGl_z52getzd2mvalueszd2numberz52zz__r5_control_features_6_4z00());} 

}



/* %set-mvalues-number! */
BGL_EXPORTED_DEF int BGl_z52setzd2mvalueszd2numberz12z40zz__r5_control_features_6_4z00(int BgL_nz00_3)
{
{ /* Ieee/control5.scm 72 */
return 
BGL_MVALUES_NUMBER_SET(BgL_nz00_3);} 

}



/* &%set-mvalues-number! */
obj_t BGl_z62z52setzd2mvalueszd2numberz12z22zz__r5_control_features_6_4z00(obj_t BgL_envz00_1179, obj_t BgL_nz00_1180)
{
{ /* Ieee/control5.scm 72 */
{ /* Ieee/control5.scm 73 */
int BgL_tmpz00_1607;
{ /* Ieee/control5.scm 73 */
int BgL_auxz00_1608;
{ /* Ieee/control5.scm 73 */
obj_t BgL_tmpz00_1609;
if(
INTEGERP(BgL_nz00_1180))
{ /* Ieee/control5.scm 73 */
BgL_tmpz00_1609 = BgL_nz00_1180
; }  else 
{ 
obj_t BgL_auxz00_1612;
BgL_auxz00_1612 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1656z00zz__r5_control_features_6_4z00, 
BINT(((long)2768)), BGl_string1657z00zz__r5_control_features_6_4z00, BGl_string1658z00zz__r5_control_features_6_4z00, BgL_nz00_1180); 
FAILURE(BgL_auxz00_1612,BFALSE,BFALSE);} 
BgL_auxz00_1608 = 
CINT(BgL_tmpz00_1609); } 
BgL_tmpz00_1607 = 
BGl_z52setzd2mvalueszd2numberz12z40zz__r5_control_features_6_4z00(BgL_auxz00_1608); } 
return 
BINT(BgL_tmpz00_1607);} } 

}



/* %get-mvalues-val */
BGL_EXPORTED_DEF obj_t BGl_z52getzd2mvalueszd2valz52zz__r5_control_features_6_4z00(int BgL_nz00_4)
{
{ /* Ieee/control5.scm 78 */
return 
BGL_MVALUES_VAL(BgL_nz00_4);} 

}



/* &%get-mvalues-val */
obj_t BGl_z62z52getzd2mvalueszd2valz30zz__r5_control_features_6_4z00(obj_t BgL_envz00_1181, obj_t BgL_nz00_1182)
{
{ /* Ieee/control5.scm 78 */
{ /* Ieee/control5.scm 79 */
int BgL_auxz00_1620;
{ /* Ieee/control5.scm 79 */
obj_t BgL_tmpz00_1621;
if(
INTEGERP(BgL_nz00_1182))
{ /* Ieee/control5.scm 79 */
BgL_tmpz00_1621 = BgL_nz00_1182
; }  else 
{ 
obj_t BgL_auxz00_1624;
BgL_auxz00_1624 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1656z00zz__r5_control_features_6_4z00, 
BINT(((long)3056)), BGl_string1659z00zz__r5_control_features_6_4z00, BGl_string1658z00zz__r5_control_features_6_4z00, BgL_nz00_1182); 
FAILURE(BgL_auxz00_1624,BFALSE,BFALSE);} 
BgL_auxz00_1620 = 
CINT(BgL_tmpz00_1621); } 
return 
BGl_z52getzd2mvalueszd2valz52zz__r5_control_features_6_4z00(BgL_auxz00_1620);} } 

}



/* %set-mvalues-val! */
BGL_EXPORTED_DEF obj_t BGl_z52setzd2mvalueszd2valz12z40zz__r5_control_features_6_4z00(int BgL_nz00_5, obj_t BgL_oz00_6)
{
{ /* Ieee/control5.scm 84 */
return 
BGL_MVALUES_VAL_SET(BgL_nz00_5, BgL_oz00_6);} 

}



/* &%set-mvalues-val! */
obj_t BGl_z62z52setzd2mvalueszd2valz12z22zz__r5_control_features_6_4z00(obj_t BgL_envz00_1183, obj_t BgL_nz00_1184, obj_t BgL_oz00_1185)
{
{ /* Ieee/control5.scm 84 */
{ /* Ieee/control5.scm 85 */
int BgL_auxz00_1631;
{ /* Ieee/control5.scm 85 */
obj_t BgL_tmpz00_1632;
if(
INTEGERP(BgL_nz00_1184))
{ /* Ieee/control5.scm 85 */
BgL_tmpz00_1632 = BgL_nz00_1184
; }  else 
{ 
obj_t BgL_auxz00_1635;
BgL_auxz00_1635 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1656z00zz__r5_control_features_6_4z00, 
BINT(((long)3343)), BGl_string1660z00zz__r5_control_features_6_4z00, BGl_string1658z00zz__r5_control_features_6_4z00, BgL_nz00_1184); 
FAILURE(BgL_auxz00_1635,BFALSE,BFALSE);} 
BgL_auxz00_1631 = 
CINT(BgL_tmpz00_1632); } 
return 
BGl_z52setzd2mvalueszd2valz12z40zz__r5_control_features_6_4z00(BgL_auxz00_1631, BgL_oz00_1185);} } 

}



/* values */
BGL_EXPORTED_DEF obj_t BGl_valuesz00zz__r5_control_features_6_4z00(obj_t BgL_argsz00_7)
{
{ /* Ieee/control5.scm 92 */
if(
NULLP(BgL_argsz00_7))
{ /* Ieee/control5.scm 94 */
int BgL_res1568z00_1081;
{ /* Ieee/control5.scm 73 */
int BgL_tmpz00_1643;
BgL_tmpz00_1643 = 
(int)(((long)0)); 
BgL_res1568z00_1081 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_1643); } 
return 
BINT(BgL_res1568z00_1081);}  else 
{ /* Ieee/control5.scm 95 */
bool_t BgL_test2090z00_1647;
{ /* Ieee/control5.scm 95 */
obj_t BgL_tmpz00_1648;
{ /* Ieee/control5.scm 95 */
obj_t BgL_pairz00_1082;
if(
PAIRP(BgL_argsz00_7))
{ /* Ieee/control5.scm 95 */
BgL_pairz00_1082 = BgL_argsz00_7; }  else 
{ 
obj_t BgL_auxz00_1651;
BgL_auxz00_1651 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1656z00zz__r5_control_features_6_4z00, 
BINT(((long)3838)), BGl_string1661z00zz__r5_control_features_6_4z00, BGl_string1662z00zz__r5_control_features_6_4z00, BgL_argsz00_7); 
FAILURE(BgL_auxz00_1651,BFALSE,BFALSE);} 
BgL_tmpz00_1648 = 
CDR(BgL_pairz00_1082); } 
BgL_test2090z00_1647 = 
NULLP(BgL_tmpz00_1648); } 
if(BgL_test2090z00_1647)
{ /* Ieee/control5.scm 95 */
{ /* Ieee/control5.scm 97 */
int BgL_res1570z00_1084;
{ /* Ieee/control5.scm 73 */
int BgL_tmpz00_1657;
BgL_tmpz00_1657 = 
(int)(((long)1)); 
BgL_res1570z00_1084 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_1657); } BgL_res1570z00_1084; } 
{ /* Ieee/control5.scm 98 */
obj_t BgL_pairz00_1085;
if(
PAIRP(BgL_argsz00_7))
{ /* Ieee/control5.scm 98 */
BgL_pairz00_1085 = BgL_argsz00_7; }  else 
{ 
obj_t BgL_auxz00_1662;
BgL_auxz00_1662 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1656z00zz__r5_control_features_6_4z00, 
BINT(((long)3900)), BGl_string1661z00zz__r5_control_features_6_4z00, BGl_string1662z00zz__r5_control_features_6_4z00, BgL_argsz00_7); 
FAILURE(BgL_auxz00_1662,BFALSE,BFALSE);} 
return 
CAR(BgL_pairz00_1085);} }  else 
{ /* Ieee/control5.scm 99 */
obj_t BgL_res0z00_694;
{ /* Ieee/control5.scm 99 */
obj_t BgL_pairz00_1086;
if(
PAIRP(BgL_argsz00_7))
{ /* Ieee/control5.scm 99 */
BgL_pairz00_1086 = BgL_argsz00_7; }  else 
{ 
obj_t BgL_auxz00_1669;
BgL_auxz00_1669 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1656z00zz__r5_control_features_6_4z00, 
BINT(((long)3928)), BGl_string1661z00zz__r5_control_features_6_4z00, BGl_string1662z00zz__r5_control_features_6_4z00, BgL_argsz00_7); 
FAILURE(BgL_auxz00_1669,BFALSE,BFALSE);} 
BgL_res0z00_694 = 
CAR(BgL_pairz00_1086); } 
{ /* Ieee/control5.scm 101 */
obj_t BgL_g1012z00_696;
{ /* Ieee/control5.scm 102 */
obj_t BgL_pairz00_1087;
if(
PAIRP(BgL_argsz00_7))
{ /* Ieee/control5.scm 102 */
BgL_pairz00_1087 = BgL_argsz00_7; }  else 
{ 
obj_t BgL_auxz00_1676;
BgL_auxz00_1676 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1656z00zz__r5_control_features_6_4z00, 
BINT(((long)3994)), BGl_string1661z00zz__r5_control_features_6_4z00, BGl_string1662z00zz__r5_control_features_6_4z00, BgL_argsz00_7); 
FAILURE(BgL_auxz00_1676,BFALSE,BFALSE);} 
BgL_g1012z00_696 = 
CDR(BgL_pairz00_1087); } 
{ 
long BgL_iz00_698;obj_t BgL_argsz00_699;
BgL_iz00_698 = ((long)1); 
BgL_argsz00_699 = BgL_g1012z00_696; 
BgL_zc3z04anonymousza31060ze3z87_700:
if(
NULLP(BgL_argsz00_699))
{ /* Ieee/control5.scm 104 */
{ /* Ieee/control5.scm 105 */
int BgL_res1572z00_1090;
{ /* Ieee/control5.scm 73 */
int BgL_tmpz00_1683;
BgL_tmpz00_1683 = 
(int)(BgL_iz00_698); 
BgL_res1572z00_1090 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_1683); } BgL_res1572z00_1090; } 
return BgL_res0z00_694;}  else 
{ /* Ieee/control5.scm 104 */
if(
(BgL_iz00_698==((long)16)))
{ /* Ieee/control5.scm 107 */
{ /* Ieee/control5.scm 108 */
int BgL_res1574z00_1093;
{ /* Ieee/control5.scm 73 */
int BgL_tmpz00_1688;
BgL_tmpz00_1688 = 
(int)(((long)-1)); 
BgL_res1574z00_1093 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_1688); } BgL_res1574z00_1093; } 
return BgL_argsz00_7;}  else 
{ /* Ieee/control5.scm 107 */
{ /* Ieee/control5.scm 111 */
obj_t BgL_arg1063z00_703;
{ /* Ieee/control5.scm 111 */
obj_t BgL_pairz00_1094;
if(
PAIRP(BgL_argsz00_699))
{ /* Ieee/control5.scm 111 */
BgL_pairz00_1094 = BgL_argsz00_699; }  else 
{ 
obj_t BgL_auxz00_1693;
BgL_auxz00_1693 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1656z00zz__r5_control_features_6_4z00, 
BINT(((long)4189)), BGl_string1663z00zz__r5_control_features_6_4z00, BGl_string1662z00zz__r5_control_features_6_4z00, BgL_argsz00_699); 
FAILURE(BgL_auxz00_1693,BFALSE,BFALSE);} 
BgL_arg1063z00_703 = 
CAR(BgL_pairz00_1094); } 
{ /* Ieee/control5.scm 85 */
int BgL_tmpz00_1698;
BgL_tmpz00_1698 = 
(int)(BgL_iz00_698); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_1698, BgL_arg1063z00_703); } } 
{ /* Ieee/control5.scm 112 */
long BgL_arg1064z00_704;obj_t BgL_arg1065z00_705;
BgL_arg1064z00_704 = 
(BgL_iz00_698+((long)1)); 
{ /* Ieee/control5.scm 112 */
obj_t BgL_pairz00_1098;
if(
PAIRP(BgL_argsz00_699))
{ /* Ieee/control5.scm 112 */
BgL_pairz00_1098 = BgL_argsz00_699; }  else 
{ 
obj_t BgL_auxz00_1704;
BgL_auxz00_1704 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1656z00zz__r5_control_features_6_4z00, 
BINT(((long)4224)), BGl_string1663z00zz__r5_control_features_6_4z00, BGl_string1662z00zz__r5_control_features_6_4z00, BgL_argsz00_699); 
FAILURE(BgL_auxz00_1704,BFALSE,BFALSE);} 
BgL_arg1065z00_705 = 
CDR(BgL_pairz00_1098); } 
{ 
obj_t BgL_argsz00_1710;long BgL_iz00_1709;
BgL_iz00_1709 = BgL_arg1064z00_704; 
BgL_argsz00_1710 = BgL_arg1065z00_705; 
BgL_argsz00_699 = BgL_argsz00_1710; 
BgL_iz00_698 = BgL_iz00_1709; 
goto BgL_zc3z04anonymousza31060ze3z87_700;} } } } } } } } } 

}



/* &values */
obj_t BGl_z62valuesz62zz__r5_control_features_6_4z00(obj_t BgL_envz00_1186, obj_t BgL_argsz00_1187)
{
{ /* Ieee/control5.scm 92 */
return 
BGl_valuesz00zz__r5_control_features_6_4z00(BgL_argsz00_1187);} 

}



/* call-with-values */
BGL_EXPORTED_DEF obj_t BGl_callzd2withzd2valuesz00zz__r5_control_features_6_4z00(obj_t BgL_producerz00_8, obj_t BgL_consumerz00_9)
{
{ /* Ieee/control5.scm 117 */
{ /* Ieee/control5.scm 118 */
int BgL_res1576z00_1099;
{ /* Ieee/control5.scm 73 */
int BgL_tmpz00_1712;
BgL_tmpz00_1712 = 
(int)(((long)1)); 
BgL_res1576z00_1099 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_1712); } BgL_res1576z00_1099; } 
{ /* Ieee/control5.scm 119 */
obj_t BgL_res0z00_708;
if(
PROCEDURE_CORRECT_ARITYP(BgL_producerz00_8, ((long)0)))
{ /* Ieee/control5.scm 119 */
BgL_res0z00_708 = 
PROCEDURE_ENTRY(BgL_producerz00_8)(BgL_producerz00_8, BEOA); }  else 
{ /* Ieee/control5.scm 119 */
FAILURE(BGl_string1664z00zz__r5_control_features_6_4z00,BGl_list1665z00zz__r5_control_features_6_4z00,BgL_producerz00_8);} 
{ /* Ieee/control5.scm 120 */
int BgL_aux1014z00_710;
{ /* Ieee/control5.scm 120 */
int BgL_res1577z00_1100;
BgL_res1577z00_1100 = 
BGL_MVALUES_NUMBER(); 
BgL_aux1014z00_710 = BgL_res1577z00_1100; } 
switch( 
(long)(BgL_aux1014z00_710)) { case ((long)-1) : 

{ /* Ieee/control5.scm 122 */
int BgL_len1614z00_1214;
BgL_len1614z00_1214 = 
(int)(
bgl_list_length(
((obj_t)BgL_res0z00_708))); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_consumerz00_9, BgL_len1614z00_1214))
{ /* Ieee/control5.scm 122 */
return 
apply(BgL_consumerz00_9, 
((obj_t)BgL_res0z00_708));}  else 
{ /* Ieee/control5.scm 122 */
FAILURE(BGl_symbol1670z00zz__r5_control_features_6_4z00,BGl_string1672z00zz__r5_control_features_6_4z00,BGl_list1673z00zz__r5_control_features_6_4z00);} } break;case ((long)0) : 

if(
PROCEDURE_CORRECT_ARITYP(BgL_consumerz00_9, ((long)0)))
{ /* Ieee/control5.scm 124 */
return 
PROCEDURE_ENTRY(BgL_consumerz00_9)(BgL_consumerz00_9, BEOA);}  else 
{ /* Ieee/control5.scm 124 */
FAILURE(BGl_string1664z00zz__r5_control_features_6_4z00,BGl_list1680z00zz__r5_control_features_6_4z00,BgL_consumerz00_9);} break;case ((long)1) : 

if(
PROCEDURE_CORRECT_ARITYP(BgL_consumerz00_9, ((long)1)))
{ /* Ieee/control5.scm 126 */
return 
PROCEDURE_ENTRY(BgL_consumerz00_9)(BgL_consumerz00_9, BgL_res0z00_708, BEOA);}  else 
{ /* Ieee/control5.scm 126 */
FAILURE(BGl_string1664z00zz__r5_control_features_6_4z00,BGl_list1681z00zz__r5_control_features_6_4z00,BgL_consumerz00_9);} break;case ((long)2) : 

{ /* Ieee/control5.scm 129 */
obj_t BgL_arg1078z00_712;
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1744;
BgL_tmpz00_1744 = 
(int)(((long)1)); 
BgL_arg1078z00_712 = 
BGL_MVALUES_VAL(BgL_tmpz00_1744); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_consumerz00_9, ((long)2)))
{ /* Ieee/control5.scm 128 */
return 
PROCEDURE_ENTRY(BgL_consumerz00_9)(BgL_consumerz00_9, BgL_res0z00_708, BgL_arg1078z00_712, BEOA);}  else 
{ /* Ieee/control5.scm 128 */
FAILURE(BGl_string1664z00zz__r5_control_features_6_4z00,BGl_list1682z00zz__r5_control_features_6_4z00,BgL_consumerz00_9);} } break;case ((long)3) : 

{ /* Ieee/control5.scm 132 */
obj_t BgL_arg1095z00_713;obj_t BgL_arg1099z00_714;
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1755;
BgL_tmpz00_1755 = 
(int)(((long)1)); 
BgL_arg1095z00_713 = 
BGL_MVALUES_VAL(BgL_tmpz00_1755); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1758;
BgL_tmpz00_1758 = 
(int)(((long)2)); 
BgL_arg1099z00_714 = 
BGL_MVALUES_VAL(BgL_tmpz00_1758); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_consumerz00_9, ((long)3)))
{ /* Ieee/control5.scm 131 */
return 
PROCEDURE_ENTRY(BgL_consumerz00_9)(BgL_consumerz00_9, BgL_res0z00_708, BgL_arg1095z00_713, BgL_arg1099z00_714, BEOA);}  else 
{ /* Ieee/control5.scm 131 */
FAILURE(BGl_string1664z00zz__r5_control_features_6_4z00,BGl_list1685z00zz__r5_control_features_6_4z00,BgL_consumerz00_9);} } break;case ((long)4) : 

{ /* Ieee/control5.scm 136 */
obj_t BgL_arg1100z00_715;obj_t BgL_arg1101z00_716;obj_t BgL_arg1103z00_717;
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1770;
BgL_tmpz00_1770 = 
(int)(((long)1)); 
BgL_arg1100z00_715 = 
BGL_MVALUES_VAL(BgL_tmpz00_1770); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1773;
BgL_tmpz00_1773 = 
(int)(((long)2)); 
BgL_arg1101z00_716 = 
BGL_MVALUES_VAL(BgL_tmpz00_1773); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1776;
BgL_tmpz00_1776 = 
(int)(((long)3)); 
BgL_arg1103z00_717 = 
BGL_MVALUES_VAL(BgL_tmpz00_1776); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_consumerz00_9, ((long)4)))
{ /* Ieee/control5.scm 135 */
return 
PROCEDURE_ENTRY(BgL_consumerz00_9)(BgL_consumerz00_9, BgL_res0z00_708, BgL_arg1100z00_715, BgL_arg1101z00_716, BgL_arg1103z00_717, BEOA);}  else 
{ /* Ieee/control5.scm 135 */
FAILURE(BGl_string1664z00zz__r5_control_features_6_4z00,BGl_list1690z00zz__r5_control_features_6_4z00,BgL_consumerz00_9);} } break;case ((long)5) : 

{ /* Ieee/control5.scm 141 */
obj_t BgL_arg1109z00_718;obj_t BgL_arg1110z00_719;obj_t BgL_arg1113z00_720;obj_t BgL_arg1114z00_721;
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1789;
BgL_tmpz00_1789 = 
(int)(((long)1)); 
BgL_arg1109z00_718 = 
BGL_MVALUES_VAL(BgL_tmpz00_1789); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1792;
BgL_tmpz00_1792 = 
(int)(((long)2)); 
BgL_arg1110z00_719 = 
BGL_MVALUES_VAL(BgL_tmpz00_1792); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1795;
BgL_tmpz00_1795 = 
(int)(((long)3)); 
BgL_arg1113z00_720 = 
BGL_MVALUES_VAL(BgL_tmpz00_1795); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1798;
BgL_tmpz00_1798 = 
(int)(((long)4)); 
BgL_arg1114z00_721 = 
BGL_MVALUES_VAL(BgL_tmpz00_1798); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_consumerz00_9, ((long)5)))
{ /* Ieee/control5.scm 140 */
return 
PROCEDURE_ENTRY(BgL_consumerz00_9)(BgL_consumerz00_9, BgL_res0z00_708, BgL_arg1109z00_718, BgL_arg1110z00_719, BgL_arg1113z00_720, BgL_arg1114z00_721, BEOA);}  else 
{ /* Ieee/control5.scm 140 */
FAILURE(BGl_string1664z00zz__r5_control_features_6_4z00,BGl_list1697z00zz__r5_control_features_6_4z00,BgL_consumerz00_9);} } break;case ((long)6) : 

{ /* Ieee/control5.scm 147 */
obj_t BgL_arg1115z00_722;obj_t BgL_arg1116z00_723;obj_t BgL_arg1117z00_724;obj_t BgL_arg1118z00_725;obj_t BgL_arg1121z00_726;
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1812;
BgL_tmpz00_1812 = 
(int)(((long)1)); 
BgL_arg1115z00_722 = 
BGL_MVALUES_VAL(BgL_tmpz00_1812); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1815;
BgL_tmpz00_1815 = 
(int)(((long)2)); 
BgL_arg1116z00_723 = 
BGL_MVALUES_VAL(BgL_tmpz00_1815); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1818;
BgL_tmpz00_1818 = 
(int)(((long)3)); 
BgL_arg1117z00_724 = 
BGL_MVALUES_VAL(BgL_tmpz00_1818); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1821;
BgL_tmpz00_1821 = 
(int)(((long)4)); 
BgL_arg1118z00_725 = 
BGL_MVALUES_VAL(BgL_tmpz00_1821); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1824;
BgL_tmpz00_1824 = 
(int)(((long)5)); 
BgL_arg1121z00_726 = 
BGL_MVALUES_VAL(BgL_tmpz00_1824); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_consumerz00_9, ((long)6)))
{ /* Ieee/control5.scm 146 */
return 
PROCEDURE_ENTRY(BgL_consumerz00_9)(BgL_consumerz00_9, BgL_res0z00_708, BgL_arg1115z00_722, BgL_arg1116z00_723, BgL_arg1117z00_724, BgL_arg1118z00_725, BgL_arg1121z00_726, BEOA);}  else 
{ /* Ieee/control5.scm 146 */
FAILURE(BGl_string1664z00zz__r5_control_features_6_4z00,BGl_list1706z00zz__r5_control_features_6_4z00,BgL_consumerz00_9);} } break;case ((long)7) : 

{ /* Ieee/control5.scm 154 */
obj_t BgL_arg1122z00_727;obj_t BgL_arg1123z00_728;obj_t BgL_arg1124z00_729;obj_t BgL_arg1125z00_730;obj_t BgL_arg1126z00_731;obj_t BgL_arg1127z00_732;
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1839;
BgL_tmpz00_1839 = 
(int)(((long)1)); 
BgL_arg1122z00_727 = 
BGL_MVALUES_VAL(BgL_tmpz00_1839); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1842;
BgL_tmpz00_1842 = 
(int)(((long)2)); 
BgL_arg1123z00_728 = 
BGL_MVALUES_VAL(BgL_tmpz00_1842); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1845;
BgL_tmpz00_1845 = 
(int)(((long)3)); 
BgL_arg1124z00_729 = 
BGL_MVALUES_VAL(BgL_tmpz00_1845); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1848;
BgL_tmpz00_1848 = 
(int)(((long)4)); 
BgL_arg1125z00_730 = 
BGL_MVALUES_VAL(BgL_tmpz00_1848); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1851;
BgL_tmpz00_1851 = 
(int)(((long)5)); 
BgL_arg1126z00_731 = 
BGL_MVALUES_VAL(BgL_tmpz00_1851); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1854;
BgL_tmpz00_1854 = 
(int)(((long)6)); 
BgL_arg1127z00_732 = 
BGL_MVALUES_VAL(BgL_tmpz00_1854); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_consumerz00_9, ((long)7)))
{ /* Ieee/control5.scm 153 */
return 
PROCEDURE_ENTRY(BgL_consumerz00_9)(BgL_consumerz00_9, BgL_res0z00_708, BgL_arg1122z00_727, BgL_arg1123z00_728, BgL_arg1124z00_729, BgL_arg1125z00_730, BgL_arg1126z00_731, BgL_arg1127z00_732, BEOA);}  else 
{ /* Ieee/control5.scm 153 */
FAILURE(BGl_string1664z00zz__r5_control_features_6_4z00,BGl_list1717z00zz__r5_control_features_6_4z00,BgL_consumerz00_9);} } break;case ((long)8) : 

{ /* Ieee/control5.scm 162 */
obj_t BgL_arg1128z00_733;obj_t BgL_arg1129z00_734;obj_t BgL_arg1133z00_735;obj_t BgL_arg1134z00_736;obj_t BgL_arg1140z00_737;obj_t BgL_arg1145z00_738;obj_t BgL_arg1146z00_739;
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1870;
BgL_tmpz00_1870 = 
(int)(((long)1)); 
BgL_arg1128z00_733 = 
BGL_MVALUES_VAL(BgL_tmpz00_1870); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1873;
BgL_tmpz00_1873 = 
(int)(((long)2)); 
BgL_arg1129z00_734 = 
BGL_MVALUES_VAL(BgL_tmpz00_1873); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1876;
BgL_tmpz00_1876 = 
(int)(((long)3)); 
BgL_arg1133z00_735 = 
BGL_MVALUES_VAL(BgL_tmpz00_1876); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1879;
BgL_tmpz00_1879 = 
(int)(((long)4)); 
BgL_arg1134z00_736 = 
BGL_MVALUES_VAL(BgL_tmpz00_1879); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1882;
BgL_tmpz00_1882 = 
(int)(((long)5)); 
BgL_arg1140z00_737 = 
BGL_MVALUES_VAL(BgL_tmpz00_1882); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1885;
BgL_tmpz00_1885 = 
(int)(((long)6)); 
BgL_arg1145z00_738 = 
BGL_MVALUES_VAL(BgL_tmpz00_1885); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1888;
BgL_tmpz00_1888 = 
(int)(((long)7)); 
BgL_arg1146z00_739 = 
BGL_MVALUES_VAL(BgL_tmpz00_1888); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_consumerz00_9, ((long)8)))
{ /* Ieee/control5.scm 161 */
return 
PROCEDURE_ENTRY(BgL_consumerz00_9)(BgL_consumerz00_9, BgL_res0z00_708, BgL_arg1128z00_733, BgL_arg1129z00_734, BgL_arg1133z00_735, BgL_arg1134z00_736, BgL_arg1140z00_737, BgL_arg1145z00_738, BgL_arg1146z00_739, BEOA);}  else 
{ /* Ieee/control5.scm 161 */
FAILURE(BGl_string1664z00zz__r5_control_features_6_4z00,BGl_list1730z00zz__r5_control_features_6_4z00,BgL_consumerz00_9);} } break;case ((long)9) : 

{ /* Ieee/control5.scm 171 */
obj_t BgL_arg1155z00_740;obj_t BgL_arg1156z00_741;obj_t BgL_arg1165z00_742;obj_t BgL_arg1166z00_743;obj_t BgL_arg1167z00_744;obj_t BgL_arg1169z00_745;obj_t BgL_arg1170z00_746;obj_t BgL_arg1172z00_747;
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1905;
BgL_tmpz00_1905 = 
(int)(((long)1)); 
BgL_arg1155z00_740 = 
BGL_MVALUES_VAL(BgL_tmpz00_1905); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1908;
BgL_tmpz00_1908 = 
(int)(((long)2)); 
BgL_arg1156z00_741 = 
BGL_MVALUES_VAL(BgL_tmpz00_1908); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1911;
BgL_tmpz00_1911 = 
(int)(((long)3)); 
BgL_arg1165z00_742 = 
BGL_MVALUES_VAL(BgL_tmpz00_1911); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1914;
BgL_tmpz00_1914 = 
(int)(((long)4)); 
BgL_arg1166z00_743 = 
BGL_MVALUES_VAL(BgL_tmpz00_1914); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1917;
BgL_tmpz00_1917 = 
(int)(((long)5)); 
BgL_arg1167z00_744 = 
BGL_MVALUES_VAL(BgL_tmpz00_1917); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1920;
BgL_tmpz00_1920 = 
(int)(((long)6)); 
BgL_arg1169z00_745 = 
BGL_MVALUES_VAL(BgL_tmpz00_1920); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1923;
BgL_tmpz00_1923 = 
(int)(((long)7)); 
BgL_arg1170z00_746 = 
BGL_MVALUES_VAL(BgL_tmpz00_1923); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1926;
BgL_tmpz00_1926 = 
(int)(((long)8)); 
BgL_arg1172z00_747 = 
BGL_MVALUES_VAL(BgL_tmpz00_1926); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_consumerz00_9, ((long)9)))
{ /* Ieee/control5.scm 170 */
return 
PROCEDURE_ENTRY(BgL_consumerz00_9)(BgL_consumerz00_9, BgL_res0z00_708, BgL_arg1155z00_740, BgL_arg1156z00_741, BgL_arg1165z00_742, BgL_arg1166z00_743, BgL_arg1167z00_744, BgL_arg1169z00_745, BgL_arg1170z00_746, BgL_arg1172z00_747, BEOA);}  else 
{ /* Ieee/control5.scm 170 */
FAILURE(BGl_string1664z00zz__r5_control_features_6_4z00,BGl_list1745z00zz__r5_control_features_6_4z00,BgL_consumerz00_9);} } break;case ((long)10) : 

{ /* Ieee/control5.scm 181 */
obj_t BgL_arg1174z00_748;obj_t BgL_arg1175z00_749;obj_t BgL_arg1176z00_750;obj_t BgL_arg1177z00_751;obj_t BgL_arg1178z00_752;obj_t BgL_arg1179z00_753;obj_t BgL_arg1186z00_754;obj_t BgL_arg1190z00_755;obj_t BgL_arg1194z00_756;
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1944;
BgL_tmpz00_1944 = 
(int)(((long)1)); 
BgL_arg1174z00_748 = 
BGL_MVALUES_VAL(BgL_tmpz00_1944); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1947;
BgL_tmpz00_1947 = 
(int)(((long)2)); 
BgL_arg1175z00_749 = 
BGL_MVALUES_VAL(BgL_tmpz00_1947); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1950;
BgL_tmpz00_1950 = 
(int)(((long)3)); 
BgL_arg1176z00_750 = 
BGL_MVALUES_VAL(BgL_tmpz00_1950); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1953;
BgL_tmpz00_1953 = 
(int)(((long)4)); 
BgL_arg1177z00_751 = 
BGL_MVALUES_VAL(BgL_tmpz00_1953); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1956;
BgL_tmpz00_1956 = 
(int)(((long)5)); 
BgL_arg1178z00_752 = 
BGL_MVALUES_VAL(BgL_tmpz00_1956); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1959;
BgL_tmpz00_1959 = 
(int)(((long)6)); 
BgL_arg1179z00_753 = 
BGL_MVALUES_VAL(BgL_tmpz00_1959); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1962;
BgL_tmpz00_1962 = 
(int)(((long)7)); 
BgL_arg1186z00_754 = 
BGL_MVALUES_VAL(BgL_tmpz00_1962); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1965;
BgL_tmpz00_1965 = 
(int)(((long)8)); 
BgL_arg1190z00_755 = 
BGL_MVALUES_VAL(BgL_tmpz00_1965); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1968;
BgL_tmpz00_1968 = 
(int)(((long)9)); 
BgL_arg1194z00_756 = 
BGL_MVALUES_VAL(BgL_tmpz00_1968); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_consumerz00_9, ((long)10)))
{ /* Ieee/control5.scm 180 */
return 
PROCEDURE_ENTRY(BgL_consumerz00_9)(BgL_consumerz00_9, BgL_res0z00_708, BgL_arg1174z00_748, BgL_arg1175z00_749, BgL_arg1176z00_750, BgL_arg1177z00_751, BgL_arg1178z00_752, BgL_arg1179z00_753, BgL_arg1186z00_754, BgL_arg1190z00_755, BgL_arg1194z00_756, BEOA);}  else 
{ /* Ieee/control5.scm 180 */
FAILURE(BGl_string1664z00zz__r5_control_features_6_4z00,BGl_list1762z00zz__r5_control_features_6_4z00,BgL_consumerz00_9);} } break;case ((long)11) : 

{ /* Ieee/control5.scm 192 */
obj_t BgL_arg1197z00_757;obj_t BgL_arg1201z00_758;obj_t BgL_arg1208z00_759;obj_t BgL_arg1211z00_760;obj_t BgL_arg1216z00_761;obj_t BgL_arg1221z00_762;obj_t BgL_arg1223z00_763;obj_t BgL_arg1225z00_764;obj_t BgL_arg1227z00_765;obj_t BgL_arg1229z00_766;
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1987;
BgL_tmpz00_1987 = 
(int)(((long)1)); 
BgL_arg1197z00_757 = 
BGL_MVALUES_VAL(BgL_tmpz00_1987); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1990;
BgL_tmpz00_1990 = 
(int)(((long)2)); 
BgL_arg1201z00_758 = 
BGL_MVALUES_VAL(BgL_tmpz00_1990); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1993;
BgL_tmpz00_1993 = 
(int)(((long)3)); 
BgL_arg1208z00_759 = 
BGL_MVALUES_VAL(BgL_tmpz00_1993); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1996;
BgL_tmpz00_1996 = 
(int)(((long)4)); 
BgL_arg1211z00_760 = 
BGL_MVALUES_VAL(BgL_tmpz00_1996); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_1999;
BgL_tmpz00_1999 = 
(int)(((long)5)); 
BgL_arg1216z00_761 = 
BGL_MVALUES_VAL(BgL_tmpz00_1999); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2002;
BgL_tmpz00_2002 = 
(int)(((long)6)); 
BgL_arg1221z00_762 = 
BGL_MVALUES_VAL(BgL_tmpz00_2002); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2005;
BgL_tmpz00_2005 = 
(int)(((long)7)); 
BgL_arg1223z00_763 = 
BGL_MVALUES_VAL(BgL_tmpz00_2005); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2008;
BgL_tmpz00_2008 = 
(int)(((long)8)); 
BgL_arg1225z00_764 = 
BGL_MVALUES_VAL(BgL_tmpz00_2008); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2011;
BgL_tmpz00_2011 = 
(int)(((long)9)); 
BgL_arg1227z00_765 = 
BGL_MVALUES_VAL(BgL_tmpz00_2011); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2014;
BgL_tmpz00_2014 = 
(int)(((long)10)); 
BgL_arg1229z00_766 = 
BGL_MVALUES_VAL(BgL_tmpz00_2014); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_consumerz00_9, ((long)11)))
{ /* Ieee/control5.scm 191 */
return 
PROCEDURE_ENTRY(BgL_consumerz00_9)(BgL_consumerz00_9, BgL_res0z00_708, BgL_arg1197z00_757, BgL_arg1201z00_758, BgL_arg1208z00_759, BgL_arg1211z00_760, BgL_arg1216z00_761, BgL_arg1221z00_762, BgL_arg1223z00_763, BgL_arg1225z00_764, BgL_arg1227z00_765, BgL_arg1229z00_766, BEOA);}  else 
{ /* Ieee/control5.scm 191 */
FAILURE(BGl_string1664z00zz__r5_control_features_6_4z00,BGl_list1781z00zz__r5_control_features_6_4z00,BgL_consumerz00_9);} } break;case ((long)12) : 

{ /* Ieee/control5.scm 204 */
obj_t BgL_arg1232z00_767;obj_t BgL_arg1239z00_768;obj_t BgL_arg1242z00_769;obj_t BgL_arg1243z00_770;obj_t BgL_arg1245z00_771;obj_t BgL_arg1246z00_772;obj_t BgL_arg1247z00_773;obj_t BgL_arg1250z00_774;obj_t BgL_arg1252z00_775;obj_t BgL_arg1253z00_776;obj_t BgL_arg1254z00_777;
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2034;
BgL_tmpz00_2034 = 
(int)(((long)1)); 
BgL_arg1232z00_767 = 
BGL_MVALUES_VAL(BgL_tmpz00_2034); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2037;
BgL_tmpz00_2037 = 
(int)(((long)2)); 
BgL_arg1239z00_768 = 
BGL_MVALUES_VAL(BgL_tmpz00_2037); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2040;
BgL_tmpz00_2040 = 
(int)(((long)3)); 
BgL_arg1242z00_769 = 
BGL_MVALUES_VAL(BgL_tmpz00_2040); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2043;
BgL_tmpz00_2043 = 
(int)(((long)4)); 
BgL_arg1243z00_770 = 
BGL_MVALUES_VAL(BgL_tmpz00_2043); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2046;
BgL_tmpz00_2046 = 
(int)(((long)5)); 
BgL_arg1245z00_771 = 
BGL_MVALUES_VAL(BgL_tmpz00_2046); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2049;
BgL_tmpz00_2049 = 
(int)(((long)6)); 
BgL_arg1246z00_772 = 
BGL_MVALUES_VAL(BgL_tmpz00_2049); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2052;
BgL_tmpz00_2052 = 
(int)(((long)7)); 
BgL_arg1247z00_773 = 
BGL_MVALUES_VAL(BgL_tmpz00_2052); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2055;
BgL_tmpz00_2055 = 
(int)(((long)8)); 
BgL_arg1250z00_774 = 
BGL_MVALUES_VAL(BgL_tmpz00_2055); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2058;
BgL_tmpz00_2058 = 
(int)(((long)9)); 
BgL_arg1252z00_775 = 
BGL_MVALUES_VAL(BgL_tmpz00_2058); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2061;
BgL_tmpz00_2061 = 
(int)(((long)10)); 
BgL_arg1253z00_776 = 
BGL_MVALUES_VAL(BgL_tmpz00_2061); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2064;
BgL_tmpz00_2064 = 
(int)(((long)11)); 
BgL_arg1254z00_777 = 
BGL_MVALUES_VAL(BgL_tmpz00_2064); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_consumerz00_9, ((long)12)))
{ /* Ieee/control5.scm 203 */
return 
PROCEDURE_ENTRY(BgL_consumerz00_9)(BgL_consumerz00_9, BgL_res0z00_708, BgL_arg1232z00_767, BgL_arg1239z00_768, BgL_arg1242z00_769, BgL_arg1243z00_770, BgL_arg1245z00_771, BgL_arg1246z00_772, BgL_arg1247z00_773, BgL_arg1250z00_774, BgL_arg1252z00_775, BgL_arg1253z00_776, BgL_arg1254z00_777, BEOA);}  else 
{ /* Ieee/control5.scm 203 */
FAILURE(BGl_string1664z00zz__r5_control_features_6_4z00,BGl_list1802z00zz__r5_control_features_6_4z00,BgL_consumerz00_9);} } break;case ((long)13) : 

{ /* Ieee/control5.scm 217 */
obj_t BgL_arg1256z00_778;obj_t BgL_arg1258z00_779;obj_t BgL_arg1263z00_780;obj_t BgL_arg1268z00_781;obj_t BgL_arg1270z00_782;obj_t BgL_arg1271z00_783;obj_t BgL_arg1273z00_784;obj_t BgL_arg1274z00_785;obj_t BgL_arg1275z00_786;obj_t BgL_arg1276z00_787;obj_t BgL_arg1277z00_788;obj_t BgL_arg1280z00_789;
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2085;
BgL_tmpz00_2085 = 
(int)(((long)1)); 
BgL_arg1256z00_778 = 
BGL_MVALUES_VAL(BgL_tmpz00_2085); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2088;
BgL_tmpz00_2088 = 
(int)(((long)2)); 
BgL_arg1258z00_779 = 
BGL_MVALUES_VAL(BgL_tmpz00_2088); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2091;
BgL_tmpz00_2091 = 
(int)(((long)3)); 
BgL_arg1263z00_780 = 
BGL_MVALUES_VAL(BgL_tmpz00_2091); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2094;
BgL_tmpz00_2094 = 
(int)(((long)4)); 
BgL_arg1268z00_781 = 
BGL_MVALUES_VAL(BgL_tmpz00_2094); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2097;
BgL_tmpz00_2097 = 
(int)(((long)5)); 
BgL_arg1270z00_782 = 
BGL_MVALUES_VAL(BgL_tmpz00_2097); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2100;
BgL_tmpz00_2100 = 
(int)(((long)6)); 
BgL_arg1271z00_783 = 
BGL_MVALUES_VAL(BgL_tmpz00_2100); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2103;
BgL_tmpz00_2103 = 
(int)(((long)7)); 
BgL_arg1273z00_784 = 
BGL_MVALUES_VAL(BgL_tmpz00_2103); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2106;
BgL_tmpz00_2106 = 
(int)(((long)8)); 
BgL_arg1274z00_785 = 
BGL_MVALUES_VAL(BgL_tmpz00_2106); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2109;
BgL_tmpz00_2109 = 
(int)(((long)9)); 
BgL_arg1275z00_786 = 
BGL_MVALUES_VAL(BgL_tmpz00_2109); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2112;
BgL_tmpz00_2112 = 
(int)(((long)10)); 
BgL_arg1276z00_787 = 
BGL_MVALUES_VAL(BgL_tmpz00_2112); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2115;
BgL_tmpz00_2115 = 
(int)(((long)11)); 
BgL_arg1277z00_788 = 
BGL_MVALUES_VAL(BgL_tmpz00_2115); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2118;
BgL_tmpz00_2118 = 
(int)(((long)12)); 
BgL_arg1280z00_789 = 
BGL_MVALUES_VAL(BgL_tmpz00_2118); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_consumerz00_9, ((long)13)))
{ /* Ieee/control5.scm 216 */
return 
PROCEDURE_ENTRY(BgL_consumerz00_9)(BgL_consumerz00_9, BgL_res0z00_708, BgL_arg1256z00_778, BgL_arg1258z00_779, BgL_arg1263z00_780, BgL_arg1268z00_781, BgL_arg1270z00_782, BgL_arg1271z00_783, BgL_arg1273z00_784, BgL_arg1274z00_785, BgL_arg1275z00_786, BgL_arg1276z00_787, BgL_arg1277z00_788, BgL_arg1280z00_789, BEOA);}  else 
{ /* Ieee/control5.scm 216 */
FAILURE(BGl_string1664z00zz__r5_control_features_6_4z00,BGl_list1825z00zz__r5_control_features_6_4z00,BgL_consumerz00_9);} } break;case ((long)14) : 

{ /* Ieee/control5.scm 231 */
obj_t BgL_arg1281z00_790;obj_t BgL_arg1282z00_791;obj_t BgL_arg1284z00_792;obj_t BgL_arg1285z00_793;obj_t BgL_arg1286z00_794;obj_t BgL_arg1287z00_795;obj_t BgL_arg1288z00_796;obj_t BgL_arg1289z00_797;obj_t BgL_arg1290z00_798;obj_t BgL_arg1291z00_799;obj_t BgL_arg1292z00_800;obj_t BgL_arg1295z00_801;obj_t BgL_arg1296z00_802;
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2140;
BgL_tmpz00_2140 = 
(int)(((long)1)); 
BgL_arg1281z00_790 = 
BGL_MVALUES_VAL(BgL_tmpz00_2140); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2143;
BgL_tmpz00_2143 = 
(int)(((long)2)); 
BgL_arg1282z00_791 = 
BGL_MVALUES_VAL(BgL_tmpz00_2143); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2146;
BgL_tmpz00_2146 = 
(int)(((long)3)); 
BgL_arg1284z00_792 = 
BGL_MVALUES_VAL(BgL_tmpz00_2146); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2149;
BgL_tmpz00_2149 = 
(int)(((long)4)); 
BgL_arg1285z00_793 = 
BGL_MVALUES_VAL(BgL_tmpz00_2149); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2152;
BgL_tmpz00_2152 = 
(int)(((long)5)); 
BgL_arg1286z00_794 = 
BGL_MVALUES_VAL(BgL_tmpz00_2152); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2155;
BgL_tmpz00_2155 = 
(int)(((long)6)); 
BgL_arg1287z00_795 = 
BGL_MVALUES_VAL(BgL_tmpz00_2155); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2158;
BgL_tmpz00_2158 = 
(int)(((long)7)); 
BgL_arg1288z00_796 = 
BGL_MVALUES_VAL(BgL_tmpz00_2158); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2161;
BgL_tmpz00_2161 = 
(int)(((long)8)); 
BgL_arg1289z00_797 = 
BGL_MVALUES_VAL(BgL_tmpz00_2161); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2164;
BgL_tmpz00_2164 = 
(int)(((long)9)); 
BgL_arg1290z00_798 = 
BGL_MVALUES_VAL(BgL_tmpz00_2164); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2167;
BgL_tmpz00_2167 = 
(int)(((long)10)); 
BgL_arg1291z00_799 = 
BGL_MVALUES_VAL(BgL_tmpz00_2167); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2170;
BgL_tmpz00_2170 = 
(int)(((long)11)); 
BgL_arg1292z00_800 = 
BGL_MVALUES_VAL(BgL_tmpz00_2170); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2173;
BgL_tmpz00_2173 = 
(int)(((long)12)); 
BgL_arg1295z00_801 = 
BGL_MVALUES_VAL(BgL_tmpz00_2173); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2176;
BgL_tmpz00_2176 = 
(int)(((long)13)); 
BgL_arg1296z00_802 = 
BGL_MVALUES_VAL(BgL_tmpz00_2176); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_consumerz00_9, ((long)14)))
{ /* Ieee/control5.scm 230 */
return 
PROCEDURE_ENTRY(BgL_consumerz00_9)(BgL_consumerz00_9, BgL_res0z00_708, BgL_arg1281z00_790, BgL_arg1282z00_791, BgL_arg1284z00_792, BgL_arg1285z00_793, BgL_arg1286z00_794, BgL_arg1287z00_795, BgL_arg1288z00_796, BgL_arg1289z00_797, BgL_arg1290z00_798, BgL_arg1291z00_799, BgL_arg1292z00_800, BgL_arg1295z00_801, BgL_arg1296z00_802, BEOA);}  else 
{ /* Ieee/control5.scm 230 */
FAILURE(BGl_string1664z00zz__r5_control_features_6_4z00,BGl_list1850z00zz__r5_control_features_6_4z00,BgL_consumerz00_9);} } break;case ((long)15) : 

{ /* Ieee/control5.scm 246 */
obj_t BgL_arg1297z00_803;obj_t BgL_arg1298z00_804;obj_t BgL_arg1299z00_805;obj_t BgL_arg1300z00_806;obj_t BgL_arg1301z00_807;obj_t BgL_arg1302z00_808;obj_t BgL_arg1303z00_809;obj_t BgL_arg1304z00_810;obj_t BgL_arg1306z00_811;obj_t BgL_arg1307z00_812;obj_t BgL_arg1308z00_813;obj_t BgL_arg1309z00_814;obj_t BgL_arg1310z00_815;obj_t BgL_arg1311z00_816;
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2199;
BgL_tmpz00_2199 = 
(int)(((long)1)); 
BgL_arg1297z00_803 = 
BGL_MVALUES_VAL(BgL_tmpz00_2199); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2202;
BgL_tmpz00_2202 = 
(int)(((long)2)); 
BgL_arg1298z00_804 = 
BGL_MVALUES_VAL(BgL_tmpz00_2202); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2205;
BgL_tmpz00_2205 = 
(int)(((long)3)); 
BgL_arg1299z00_805 = 
BGL_MVALUES_VAL(BgL_tmpz00_2205); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2208;
BgL_tmpz00_2208 = 
(int)(((long)4)); 
BgL_arg1300z00_806 = 
BGL_MVALUES_VAL(BgL_tmpz00_2208); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2211;
BgL_tmpz00_2211 = 
(int)(((long)5)); 
BgL_arg1301z00_807 = 
BGL_MVALUES_VAL(BgL_tmpz00_2211); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2214;
BgL_tmpz00_2214 = 
(int)(((long)6)); 
BgL_arg1302z00_808 = 
BGL_MVALUES_VAL(BgL_tmpz00_2214); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2217;
BgL_tmpz00_2217 = 
(int)(((long)7)); 
BgL_arg1303z00_809 = 
BGL_MVALUES_VAL(BgL_tmpz00_2217); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2220;
BgL_tmpz00_2220 = 
(int)(((long)8)); 
BgL_arg1304z00_810 = 
BGL_MVALUES_VAL(BgL_tmpz00_2220); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2223;
BgL_tmpz00_2223 = 
(int)(((long)9)); 
BgL_arg1306z00_811 = 
BGL_MVALUES_VAL(BgL_tmpz00_2223); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2226;
BgL_tmpz00_2226 = 
(int)(((long)10)); 
BgL_arg1307z00_812 = 
BGL_MVALUES_VAL(BgL_tmpz00_2226); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2229;
BgL_tmpz00_2229 = 
(int)(((long)11)); 
BgL_arg1308z00_813 = 
BGL_MVALUES_VAL(BgL_tmpz00_2229); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2232;
BgL_tmpz00_2232 = 
(int)(((long)12)); 
BgL_arg1309z00_814 = 
BGL_MVALUES_VAL(BgL_tmpz00_2232); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2235;
BgL_tmpz00_2235 = 
(int)(((long)13)); 
BgL_arg1310z00_815 = 
BGL_MVALUES_VAL(BgL_tmpz00_2235); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2238;
BgL_tmpz00_2238 = 
(int)(((long)14)); 
BgL_arg1311z00_816 = 
BGL_MVALUES_VAL(BgL_tmpz00_2238); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_consumerz00_9, ((long)15)))
{ /* Ieee/control5.scm 245 */
return 
PROCEDURE_ENTRY(BgL_consumerz00_9)(BgL_consumerz00_9, BgL_res0z00_708, BgL_arg1297z00_803, BgL_arg1298z00_804, BgL_arg1299z00_805, BgL_arg1300z00_806, BgL_arg1301z00_807, BgL_arg1302z00_808, BgL_arg1303z00_809, BgL_arg1304z00_810, BgL_arg1306z00_811, BgL_arg1307z00_812, BgL_arg1308z00_813, BgL_arg1309z00_814, BgL_arg1310z00_815, BgL_arg1311z00_816, BEOA);}  else 
{ /* Ieee/control5.scm 245 */
FAILURE(BGl_string1664z00zz__r5_control_features_6_4z00,BGl_list1877z00zz__r5_control_features_6_4z00,BgL_consumerz00_9);} } break;case ((long)16) : 

{ /* Ieee/control5.scm 262 */
obj_t BgL_arg1312z00_817;obj_t BgL_arg1313z00_818;obj_t BgL_arg1314z00_819;obj_t BgL_arg1315z00_820;obj_t BgL_arg1316z00_821;obj_t BgL_arg1317z00_822;obj_t BgL_arg1318z00_823;obj_t BgL_arg1319z00_824;obj_t BgL_arg1322z00_825;obj_t BgL_arg1324z00_826;obj_t BgL_arg1325z00_827;obj_t BgL_arg1326z00_828;obj_t BgL_arg1327z00_829;obj_t BgL_arg1328z00_830;obj_t BgL_arg1329z00_831;
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2262;
BgL_tmpz00_2262 = 
(int)(((long)1)); 
BgL_arg1312z00_817 = 
BGL_MVALUES_VAL(BgL_tmpz00_2262); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2265;
BgL_tmpz00_2265 = 
(int)(((long)2)); 
BgL_arg1313z00_818 = 
BGL_MVALUES_VAL(BgL_tmpz00_2265); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2268;
BgL_tmpz00_2268 = 
(int)(((long)3)); 
BgL_arg1314z00_819 = 
BGL_MVALUES_VAL(BgL_tmpz00_2268); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2271;
BgL_tmpz00_2271 = 
(int)(((long)4)); 
BgL_arg1315z00_820 = 
BGL_MVALUES_VAL(BgL_tmpz00_2271); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2274;
BgL_tmpz00_2274 = 
(int)(((long)5)); 
BgL_arg1316z00_821 = 
BGL_MVALUES_VAL(BgL_tmpz00_2274); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2277;
BgL_tmpz00_2277 = 
(int)(((long)6)); 
BgL_arg1317z00_822 = 
BGL_MVALUES_VAL(BgL_tmpz00_2277); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2280;
BgL_tmpz00_2280 = 
(int)(((long)7)); 
BgL_arg1318z00_823 = 
BGL_MVALUES_VAL(BgL_tmpz00_2280); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2283;
BgL_tmpz00_2283 = 
(int)(((long)8)); 
BgL_arg1319z00_824 = 
BGL_MVALUES_VAL(BgL_tmpz00_2283); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2286;
BgL_tmpz00_2286 = 
(int)(((long)9)); 
BgL_arg1322z00_825 = 
BGL_MVALUES_VAL(BgL_tmpz00_2286); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2289;
BgL_tmpz00_2289 = 
(int)(((long)10)); 
BgL_arg1324z00_826 = 
BGL_MVALUES_VAL(BgL_tmpz00_2289); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2292;
BgL_tmpz00_2292 = 
(int)(((long)11)); 
BgL_arg1325z00_827 = 
BGL_MVALUES_VAL(BgL_tmpz00_2292); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2295;
BgL_tmpz00_2295 = 
(int)(((long)12)); 
BgL_arg1326z00_828 = 
BGL_MVALUES_VAL(BgL_tmpz00_2295); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2298;
BgL_tmpz00_2298 = 
(int)(((long)13)); 
BgL_arg1327z00_829 = 
BGL_MVALUES_VAL(BgL_tmpz00_2298); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2301;
BgL_tmpz00_2301 = 
(int)(((long)14)); 
BgL_arg1328z00_830 = 
BGL_MVALUES_VAL(BgL_tmpz00_2301); } 
{ /* Ieee/control5.scm 79 */
int BgL_tmpz00_2304;
BgL_tmpz00_2304 = 
(int)(((long)15)); 
BgL_arg1329z00_831 = 
BGL_MVALUES_VAL(BgL_tmpz00_2304); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_consumerz00_9, ((long)16)))
{ /* Ieee/control5.scm 261 */
return 
PROCEDURE_ENTRY(BgL_consumerz00_9)(BgL_consumerz00_9, BgL_res0z00_708, BgL_arg1312z00_817, BgL_arg1313z00_818, BgL_arg1314z00_819, BgL_arg1315z00_820, BgL_arg1316z00_821, BgL_arg1317z00_822, BgL_arg1318z00_823, BgL_arg1319z00_824, BgL_arg1322z00_825, BgL_arg1324z00_826, BgL_arg1325z00_827, BgL_arg1326z00_828, BgL_arg1327z00_829, BgL_arg1328z00_830, BgL_arg1329z00_831, BEOA);}  else 
{ /* Ieee/control5.scm 261 */
FAILURE(BGl_string1664z00zz__r5_control_features_6_4z00,BGl_list1906z00zz__r5_control_features_6_4z00,BgL_consumerz00_9);} } break;
default: 
{ /* Ieee/control5.scm 278 */
int BgL_len1650z00_1269;
BgL_len1650z00_1269 = 
(int)(
bgl_list_length(
((obj_t)BgL_res0z00_708))); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_consumerz00_9, BgL_len1650z00_1269))
{ /* Ieee/control5.scm 278 */
return 
apply(BgL_consumerz00_9, 
((obj_t)BgL_res0z00_708));}  else 
{ /* Ieee/control5.scm 278 */
FAILURE(BGl_symbol1670z00zz__r5_control_features_6_4z00,BGl_string1672z00zz__r5_control_features_6_4z00,BGl_list1673z00zz__r5_control_features_6_4z00);} } } } } } 

}



/* &call-with-values */
obj_t BGl_z62callzd2withzd2valuesz62zz__r5_control_features_6_4z00(obj_t BgL_envz00_1188, obj_t BgL_producerz00_1189, obj_t BgL_consumerz00_1190)
{
{ /* Ieee/control5.scm 117 */
{ /* Ieee/control5.scm 118 */
obj_t BgL_auxz00_2347;obj_t BgL_auxz00_2340;
if(
PROCEDUREP(BgL_consumerz00_1190))
{ /* Ieee/control5.scm 118 */
BgL_auxz00_2347 = BgL_consumerz00_1190
; }  else 
{ 
obj_t BgL_auxz00_2350;
BgL_auxz00_2350 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1656z00zz__r5_control_features_6_4z00, 
BINT(((long)4539)), BGl_string1937z00zz__r5_control_features_6_4z00, BGl_string1938z00zz__r5_control_features_6_4z00, BgL_consumerz00_1190); 
FAILURE(BgL_auxz00_2350,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_producerz00_1189))
{ /* Ieee/control5.scm 118 */
BgL_auxz00_2340 = BgL_producerz00_1189
; }  else 
{ 
obj_t BgL_auxz00_2343;
BgL_auxz00_2343 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1656z00zz__r5_control_features_6_4z00, 
BINT(((long)4539)), BGl_string1937z00zz__r5_control_features_6_4z00, BGl_string1938z00zz__r5_control_features_6_4z00, BgL_producerz00_1189); 
FAILURE(BgL_auxz00_2343,BFALSE,BFALSE);} 
return 
BGl_callzd2withzd2valuesz00zz__r5_control_features_6_4z00(BgL_auxz00_2340, BgL_auxz00_2347);} } 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r5_control_features_6_4z00()
{
{ /* Ieee/control5.scm 14 */
return 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string1939z00zz__r5_control_features_6_4z00));} 

}

#ifdef __cplusplus
}
#endif
