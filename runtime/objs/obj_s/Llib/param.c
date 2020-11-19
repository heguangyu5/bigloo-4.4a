/*===========================================================================*/
/*   (Llib/param.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/param.scm -indent -o objs/obj_s/Llib/param.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_z62bigloozd2loadzd2readerzd2setz12za2zz__paramz00(obj_t, obj_t);
static long BGl_za2bigloozd2tracezd2stackzd2depthza2zd2zz__paramz00;
static obj_t BGl_symbol1750z00zz__paramz00 = BUNSPEC;
static obj_t BGl_z62bigloozd2profilezb0zz__paramz00(obj_t);
static obj_t BGl_z62bigloozd2loadzd2modulezd2setz12za2zz__paramz00(obj_t, obj_t);
static obj_t BGl_z62bigloozd2debugzd2modulezd2setz12za2zz__paramz00(obj_t, obj_t);
static obj_t BGl_za2parameterzd2mutexza2zd2zz__paramz00 = BUNSPEC;
BGL_EXPORTED_DECL int BGl_bigloozd2warningzd2zz__paramz00();
static bool_t BGl_za2bigloozd2evalzd2strictzd2moduleza2zd2zz__paramz00;
static obj_t BGl_z62bigloozd2debugzd2setz12z70zz__paramz00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__paramz00 = BUNSPEC;
static obj_t BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00 = BUNSPEC;
static obj_t BGl_z62bigloozd2debugzd2modulez62zz__paramz00(obj_t);
static obj_t BGl_za2bigloozd2profileza2zd2zz__paramz00 = BUNSPEC;
static obj_t BGl_z62bigloozd2debugzb0zz__paramz00(obj_t);
static obj_t BGl_za2bigloozd2warningza2zd2zz__paramz00 = BUNSPEC;
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62bigloozd2evalzd2strictzd2modulezb0zz__paramz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2compilerzd2debugzd2setz12zc0zz__paramz00(int);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zc0zz__paramz00(long);
static obj_t BGl_z62bigloozd2dnszd2enablezd2cachezd2setz12z70zz__paramz00(obj_t, obj_t);
static obj_t BGl_z62bigloozd2loadzd2readerz62zz__paramz00(obj_t);
static obj_t BGl_z62bigloozd2evalzd2strictzd2modulezd2setz12z70zz__paramz00(obj_t, obj_t);
BGL_EXPORTED_DECL long bgl_dns_cache_validity_timeout();
static obj_t BGl_toplevelzd2initzd2zz__paramz00();
extern obj_t BGl_getenvz00zz__osz00(obj_t);
static obj_t BGl_za2bigloozd2loadzd2readerza2z00zz__paramz00 = BUNSPEC;
static obj_t BGl_z62bigloozd2warningzd2setz12z70zz__paramz00(obj_t, obj_t);
static obj_t BGl_z62bigloozd2compilerzd2debugzd2setz12za2zz__paramz00(obj_t, obj_t);
static obj_t BGl_z62bigloozd2loadzd2modulez62zz__paramz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2casezd2sensitivezd2setz12zc0zz__paramz00(obj_t);
static obj_t BGl_z62bigloozd2dnszd2enablezd2cachezb0zz__paramz00(obj_t);
BGL_EXPORTED_DECL int BGl_bigloozd2profilezd2zz__paramz00();
static obj_t BGl_genericzd2initzd2zz__paramz00();
static obj_t BGl_objectzd2initzd2zz__paramz00();
BGL_EXPORTED_DECL bool_t BGl_bigloozd2evalzd2strictzd2modulezd2zz__paramz00();
extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2tracezd2zz__paramz00();
static obj_t BGl_z62bigloozd2casezd2sensitivezd2setz12za2zz__paramz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2libraryzd2pathzd2setz12zc0zz__paramz00(obj_t);
static obj_t BGl_za2bigloozd2modulezd2extensionzd2handlerza2zd2zz__paramz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_bigloozd2tracezd2colorz00zz__paramz00();
extern obj_t bstring_to_symbol(obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2evalzd2strictzd2modulezd2setz12z12zz__paramz00(bool_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2debugzd2modulezd2setz12zc0zz__paramz00(int);
BGL_EXPORTED_DECL int BGl_bigloozd2debugzd2modulez00zz__paramz00();
static obj_t BGl_methodzd2initzd2zz__paramz00();
static obj_t BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00 = BUNSPEC;
extern obj_t BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2warningzd2setz12z12zz__paramz00(int);
static obj_t BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00 = BUNSPEC;
static obj_t BGl_z62bigloozd2initializa7edz12z05zz__paramz00(obj_t);
static obj_t BGl_z62bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12za2zz__paramz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2tracezd2colorzd2setz12zc0zz__paramz00(bool_t);
static obj_t BGl_z62bigloozd2initializa7edzf3ze4zz__paramz00(obj_t);
static obj_t BGl_za2bigloozd2traceza2zd2zz__paramz00 = BUNSPEC;
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2loadzd2readerzd2setz12zc0zz__paramz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2loadzd2modulezd2setz12zc0zz__paramz00(obj_t);
extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62bigloozd2dnszd2cachezd2validityzd2timeoutz62zz__paramz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2tracezd2setz12z12zz__paramz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00();
static obj_t BGl_z62bigloozd2profilezd2setz12z70zz__paramz00(obj_t, obj_t);
static obj_t BGl_list1738z00zz__paramz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_bigloozd2loadzd2readerz00zz__paramz00();
static obj_t BGl_z62bigloozd2tracezd2stackzd2depthzd2setz12z70zz__paramz00(obj_t, obj_t);
static obj_t BGl_z62bigloozd2tracezd2stackzd2depthzb0zz__paramz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2loadzd2modulez00zz__paramz00();
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
static obj_t BGl_za2bigloozd2debugza2zd2zz__paramz00 = BUNSPEC;
static obj_t BGl_z62bigloozd2strictzd2r5rszd2stringszb0zz__paramz00(obj_t);
BGL_EXPORTED_DECL int bgl_debug();
static bool_t BGl_za2bigloozd2dnszd2enablezd2cacheza2zd2zz__paramz00;
BGL_EXPORTED_DECL obj_t BGl_bigloozd2initializa7edz12z67zz__paramz00();
BGL_EXPORTED_DECL obj_t BGl_bigloozd2dnszd2enablezd2cachezd2setz12z12zz__paramz00(bool_t);
BGL_EXPORTED_DECL bool_t bgl_dns_enable_cache();
BGL_EXPORTED_DECL obj_t bgl_debug_set(int);
extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_cnstzd2initzd2zz__paramz00();
static obj_t BGl_z62bigloozd2tracezb0zz__paramz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_bigloozd2initializa7edzf3z86zz__paramz00();
static obj_t BGl_gczd2rootszd2initz00zz__paramz00();
static obj_t BGl_importedzd2moduleszd2initz00zz__paramz00();
static obj_t BGl_z62bigloozd2libraryzd2pathz62zz__paramz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00();
static obj_t BGl_z62bigloozd2modulezd2extensionzd2handlerzb0zz__paramz00(obj_t);
static bool_t BGl_za2bigloozd2tracezd2colorza2z00zz__paramz00;
extern obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
extern obj_t BGl_stringzd2splitzd2zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2casezd2sensitivez00zz__paramz00();
BGL_EXPORTED_DECL obj_t BGl_bigloozd2profilezd2setz12z12zz__paramz00(int);
static obj_t BGl_za2bigloozd2loadzd2moduleza2z00zz__paramz00 = BUNSPEC;
BGL_EXPORTED_DECL int BGl_bigloozd2compilerzd2debugz00zz__paramz00();
static obj_t BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00 = BUNSPEC;
static obj_t BGl_z62bigloozd2modulezd2extensionzd2handlerzd2setz12z70zz__paramz00(obj_t, obj_t);
static obj_t BGl_symbol1702z00zz__paramz00 = BUNSPEC;
static obj_t BGl_symbol1704z00zz__paramz00 = BUNSPEC;
static long BGl_za2bigloozd2dnszd2cachezd2validityzd2timeoutza2z00zz__paramz00;
static obj_t BGl_symbol1709z00zz__paramz00 = BUNSPEC;
static obj_t BGl_z62bigloozd2warningzb0zz__paramz00(obj_t);
static bool_t BGl_za2bigloozd2initializa7edpza2z75zz__paramz00;
static obj_t BGl_z62bigloozd2tracezd2colorz62zz__paramz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2strictzd2r5rszd2stringszd2setz12z12zz__paramz00(bool_t);
static obj_t BGl_symbol1714z00zz__paramz00 = BUNSPEC;
static obj_t BGl_symbol1718z00zz__paramz00 = BUNSPEC;
static obj_t BGl_z62bigloozd2strictzd2r5rszd2stringszd2setz12z70zz__paramz00(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00();
BGL_EXPORTED_DECL obj_t BGl_bigloozd2modulezd2extensionzd2handlerzd2setz12z12zz__paramz00(obj_t);
static obj_t BGl_z62bigloozd2casezd2sensitivez62zz__paramz00(obj_t);
static obj_t BGl_z62bigloozd2tracezd2setz12z70zz__paramz00(obj_t, obj_t);
static obj_t BGl_symbol1723z00zz__paramz00 = BUNSPEC;
static obj_t BGl_symbol1728z00zz__paramz00 = BUNSPEC;
static bool_t BGl_za2bigloozd2strictzd2r5rszd2stringsza2zd2zz__paramz00;
static obj_t BGl_z62bigloozd2libraryzd2pathzd2setz12za2zz__paramz00(obj_t, obj_t);
static obj_t BGl_symbol1739z00zz__paramz00 = BUNSPEC;
static obj_t BGl_z62bigloozd2compilerzd2debugz62zz__paramz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00(int);
static obj_t BGl_z62bigloozd2tracezd2colorzd2setz12za2zz__paramz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2libraryzd2pathz00zz__paramz00();
static obj_t BGl_symbol1741z00zz__paramz00 = BUNSPEC;
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2dnszd2enablezd2cachezd2envz00zz__paramz00, BgL_bgl_za762biglooza7d2dnsza71759za7, BGl_z62bigloozd2dnszd2enablezd2cachezb0zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2loadzd2modulezd2envzd2zz__paramz00, BgL_bgl_za762biglooza7d2load1760z00, BGl_z62bigloozd2loadzd2modulez62zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zd2envz12zz__paramz00, BgL_bgl_za762biglooza7d2dnsza71761za7, BGl_z62bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12za2zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2tracezd2colorzd2setz12zd2envz12zz__paramz00, BgL_bgl_za762biglooza7d2trac1762z00, BGl_z62bigloozd2tracezd2colorzd2setz12za2zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2modulezd2extensionzd2handlerzd2envz00zz__paramz00, BgL_bgl_za762biglooza7d2modu1763z00, BGl_z62bigloozd2modulezd2extensionzd2handlerzb0zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2tracezd2envz00zz__paramz00, BgL_bgl_za762biglooza7d2trac1764z00, BGl_z62bigloozd2tracezb0zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2loadzd2modulezd2setz12zd2envz12zz__paramz00, BgL_bgl_za762biglooza7d2load1765z00, BGl_z62bigloozd2loadzd2modulezd2setz12za2zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1700z00zz__paramz00, BgL_bgl_string1700za700za7za7_1766za7, "list", 4 );
DEFINE_STRING( BGl_string1701z00zz__paramz00, BgL_bgl_string1701za700za7za7_1767za7, "BIGLOOSTACKDEPTH", 16 );
DEFINE_STRING( BGl_string1703z00zz__paramz00, BgL_bgl_string1703za700za7za7_1768za7, "sensitive", 9 );
DEFINE_STRING( BGl_string1705z00zz__paramz00, BgL_bgl_string1705za700za7za7_1769za7, "library-directory", 17 );
DEFINE_STRING( BGl_string1706z00zz__paramz00, BgL_bgl_string1706za700za7za7_1770za7, ".", 1 );
DEFINE_STRING( BGl_string1707z00zz__paramz00, BgL_bgl_string1707za700za7za7_1771za7, "bigloo-compiler-debug", 21 );
DEFINE_STRING( BGl_string1708z00zz__paramz00, BgL_bgl_string1708za700za7za7_1772za7, "bint", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2casezd2sensitivezd2envzd2zz__paramz00, BgL_bgl_za762biglooza7d2case1773z00, BGl_z62bigloozd2casezd2sensitivez62zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2profilezd2setz12zd2envzc0zz__paramz00, BgL_bgl_za762biglooza7d2prof1774z00, BGl_z62bigloozd2profilezd2setz12z70zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1710z00zz__paramz00, BgL_bgl_string1710za700za7za7_1775za7, "bigloo-compiler-debug-set!", 26 );
DEFINE_STRING( BGl_string1711z00zz__paramz00, BgL_bgl_string1711za700za7za7_1776za7, "Illegal debug level", 19 );
DEFINE_STRING( BGl_string1712z00zz__paramz00, BgL_bgl_string1712za700za7za7_1777za7, "&bigloo-compiler-debug-set!", 27 );
DEFINE_STRING( BGl_string1713z00zz__paramz00, BgL_bgl_string1713za700za7za7_1778za7, "bigloo-debug", 12 );
DEFINE_STRING( BGl_string1715z00zz__paramz00, BgL_bgl_string1715za700za7za7_1779za7, "bigloo-debug-set!", 17 );
DEFINE_STRING( BGl_string1716z00zz__paramz00, BgL_bgl_string1716za700za7za7_1780za7, "&bigloo-debug-set!", 18 );
DEFINE_STRING( BGl_string1717z00zz__paramz00, BgL_bgl_string1717za700za7za7_1781za7, "bigloo-debug-module", 19 );
DEFINE_STRING( BGl_string1719z00zz__paramz00, BgL_bgl_string1719za700za7za7_1782za7, "bigloo-debug-module-set!", 24 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2dnszd2enablezd2cachezd2setz12zd2envzc0zz__paramz00, BgL_bgl_za762biglooza7d2dnsza71783za7, BGl_z62bigloozd2dnszd2enablezd2cachezd2setz12z70zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1720z00zz__paramz00, BgL_bgl_string1720za700za7za7_1784za7, "Illegal debug module level", 26 );
DEFINE_STRING( BGl_string1721z00zz__paramz00, BgL_bgl_string1721za700za7za7_1785za7, "&bigloo-debug-module-set!", 25 );
DEFINE_STRING( BGl_string1722z00zz__paramz00, BgL_bgl_string1722za700za7za7_1786za7, "bigloo-warning", 14 );
DEFINE_STRING( BGl_string1724z00zz__paramz00, BgL_bgl_string1724za700za7za7_1787za7, "bigloo-warning-set!", 19 );
DEFINE_STRING( BGl_string1725z00zz__paramz00, BgL_bgl_string1725za700za7za7_1788za7, "Illegal warning level", 21 );
DEFINE_STRING( BGl_string1726z00zz__paramz00, BgL_bgl_string1726za700za7za7_1789za7, "&bigloo-warning-set!", 20 );
DEFINE_STRING( BGl_string1727z00zz__paramz00, BgL_bgl_string1727za700za7za7_1790za7, "bigloo-profile", 14 );
DEFINE_STRING( BGl_string1729z00zz__paramz00, BgL_bgl_string1729za700za7za7_1791za7, "bigloo-profile-set!", 19 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2compilerzd2debugzd2setz12zd2envz12zz__paramz00, BgL_bgl_za762biglooza7d2comp1792z00, BGl_z62bigloozd2compilerzd2debugzd2setz12za2zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1730z00zz__paramz00, BgL_bgl_string1730za700za7za7_1793za7, "Illegal profile level", 21 );
DEFINE_STRING( BGl_string1731z00zz__paramz00, BgL_bgl_string1731za700za7za7_1794za7, "&bigloo-profile-set!", 20 );
DEFINE_STRING( BGl_string1732z00zz__paramz00, BgL_bgl_string1732za700za7za7_1795za7, "bigloo-trace", 12 );
DEFINE_STRING( BGl_string1733z00zz__paramz00, BgL_bgl_string1733za700za7za7_1796za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string1734z00zz__paramz00, BgL_bgl_string1734za700za7za7_1797za7, "&bigloo-trace-set!", 18 );
DEFINE_STRING( BGl_string1735z00zz__paramz00, BgL_bgl_string1735za700za7za7_1798za7, "&bigloo-trace-stack-depth-set!", 30 );
DEFINE_STRING( BGl_string1736z00zz__paramz00, BgL_bgl_string1736za700za7za7_1799za7, "bigloo-case-sensitive", 21 );
DEFINE_STRING( BGl_string1737z00zz__paramz00, BgL_bgl_string1737za700za7za7_1800za7, "symbol", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2strictzd2r5rszd2stringszd2setz12zd2envzc0zz__paramz00, BgL_bgl_za762biglooza7d2stri1801z00, BGl_z62bigloozd2strictzd2r5rszd2stringszd2setz12z70zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1740z00zz__paramz00, BgL_bgl_string1740za700za7za7_1802za7, "downcase", 8 );
DEFINE_STRING( BGl_string1742z00zz__paramz00, BgL_bgl_string1742za700za7za7_1803za7, "upcase", 6 );
DEFINE_STRING( BGl_string1743z00zz__paramz00, BgL_bgl_string1743za700za7za7_1804za7, "bigloo-sensitivity-set!", 23 );
DEFINE_STRING( BGl_string1744z00zz__paramz00, BgL_bgl_string1744za700za7za7_1805za7, "Illegal sensitive value", 23 );
DEFINE_STRING( BGl_string1745z00zz__paramz00, BgL_bgl_string1745za700za7za7_1806za7, "&bigloo-case-sensitive-set!", 27 );
DEFINE_STRING( BGl_string1746z00zz__paramz00, BgL_bgl_string1746za700za7za7_1807za7, "bigloo-library-path", 19 );
DEFINE_STRING( BGl_string1747z00zz__paramz00, BgL_bgl_string1747za700za7za7_1808za7, "every", 5 );
DEFINE_STRING( BGl_string1748z00zz__paramz00, BgL_bgl_string1748za700za7za7_1809za7, "<@anonymous:1217>", 17 );
DEFINE_STRING( BGl_string1749z00zz__paramz00, BgL_bgl_string1749za700za7za7_1810za7, "pair", 4 );
DEFINE_STRING( BGl_string1751z00zz__paramz00, BgL_bgl_string1751za700za7za7_1811za7, "bigloo-library-path-set!", 24 );
DEFINE_STRING( BGl_string1752z00zz__paramz00, BgL_bgl_string1752za700za7za7_1812za7, "Illegal values", 14 );
DEFINE_STRING( BGl_string1753z00zz__paramz00, BgL_bgl_string1753za700za7za7_1813za7, "Illegal list", 12 );
DEFINE_STRING( BGl_string1754z00zz__paramz00, BgL_bgl_string1754za700za7za7_1814za7, "&bigloo-library-path-set!", 25 );
DEFINE_STRING( BGl_string1755z00zz__paramz00, BgL_bgl_string1755za700za7za7_1815za7, "&bigloo-dns-cache-validity-timeout-set!", 39 );
DEFINE_STRING( BGl_string1756z00zz__paramz00, BgL_bgl_string1756za700za7za7_1816za7, "__param", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2profilezd2envz00zz__paramz00, BgL_bgl_za762biglooza7d2prof1817z00, BGl_z62bigloozd2profilezb0zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2initializa7edzf3zd2envz54zz__paramz00, BgL_bgl_za762biglooza7d2init1818z00, BGl_z62bigloozd2initializa7edzf3ze4zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2evalzd2strictzd2modulezd2envz00zz__paramz00, BgL_bgl_za762biglooza7d2eval1819z00, BGl_z62bigloozd2evalzd2strictzd2modulezb0zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string1693z00zz__paramz00, BgL_bgl_string1693za700za7za7_1820za7, "param", 5 );
DEFINE_STRING( BGl_string1694z00zz__paramz00, BgL_bgl_string1694za700za7za7_1821za7, "BIGLOOTRACE", 11 );
DEFINE_STRING( BGl_string1695z00zz__paramz00, BgL_bgl_string1695za700za7za7_1822za7, "/tmp/4.4a/runtime/Llib/param.scm", 32 );
DEFINE_STRING( BGl_string1696z00zz__paramz00, BgL_bgl_string1696za700za7za7_1823za7, "toplevel-init", 13 );
DEFINE_STRING( BGl_string1697z00zz__paramz00, BgL_bgl_string1697za700za7za7_1824za7, "bstring", 7 );
DEFINE_STRING( BGl_string1698z00zz__paramz00, BgL_bgl_string1698za700za7za7_1825za7, "<@anonymous:1164>", 17 );
DEFINE_STRING( BGl_string1699z00zz__paramz00, BgL_bgl_string1699za700za7za7_1826za7, "map", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2libraryzd2pathzd2setz12zd2envz12zz__paramz00, BgL_bgl_za762biglooza7d2libr1827z00, BGl_z62bigloozd2libraryzd2pathzd2setz12za2zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2tracezd2stackzd2depthzd2envz00zz__paramz00, BgL_bgl_za762biglooza7d2trac1828z00, BGl_z62bigloozd2tracezd2stackzd2depthzb0zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2warningzd2setz12zd2envzc0zz__paramz00, BgL_bgl_za762biglooza7d2warn1829z00, BGl_z62bigloozd2warningzd2setz12z70zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2debugzd2envz00zz__paramz00, BgL_bgl_za762biglooza7d2debu1830z00, BGl_z62bigloozd2debugzb0zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2modulezd2extensionzd2handlerzd2setz12zd2envzc0zz__paramz00, BgL_bgl_za762biglooza7d2modu1831z00, BGl_z62bigloozd2modulezd2extensionzd2handlerzd2setz12z70zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2initializa7edz12zd2envzb5zz__paramz00, BgL_bgl_za762biglooza7d2init1832z00, BGl_z62bigloozd2initializa7edz12z05zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2loadzd2readerzd2envzd2zz__paramz00, BgL_bgl_za762biglooza7d2load1833z00, BGl_z62bigloozd2loadzd2readerz62zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2debugzd2modulezd2envzd2zz__paramz00, BgL_bgl_za762biglooza7d2debu1834z00, BGl_z62bigloozd2debugzd2modulez62zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2tracezd2setz12zd2envzc0zz__paramz00, BgL_bgl_za762biglooza7d2trac1835z00, BGl_z62bigloozd2tracezd2setz12z70zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2strictzd2r5rszd2stringszd2envz00zz__paramz00, BgL_bgl_za762biglooza7d2stri1836z00, BGl_z62bigloozd2strictzd2r5rszd2stringszb0zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2tracezd2colorzd2envzd2zz__paramz00, BgL_bgl_za762biglooza7d2trac1837z00, BGl_z62bigloozd2tracezd2colorz62zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2evalzd2strictzd2modulezd2setz12zd2envzc0zz__paramz00, BgL_bgl_za762biglooza7d2eval1838z00, BGl_z62bigloozd2evalzd2strictzd2modulezd2setz12z70zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2compilerzd2debugzd2envzd2zz__paramz00, BgL_bgl_za762biglooza7d2comp1839z00, BGl_z62bigloozd2compilerzd2debugz62zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2tracezd2stackzd2depthzd2setz12zd2envzc0zz__paramz00, BgL_bgl_za762biglooza7d2trac1840z00, BGl_z62bigloozd2tracezd2stackzd2depthzd2setz12z70zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2loadzd2readerzd2setz12zd2envz12zz__paramz00, BgL_bgl_za762biglooza7d2load1841z00, BGl_z62bigloozd2loadzd2readerzd2setz12za2zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2dnszd2cachezd2validityzd2timeoutzd2envzd2zz__paramz00, BgL_bgl_za762biglooza7d2dnsza71842za7, BGl_z62bigloozd2dnszd2cachezd2validityzd2timeoutz62zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2warningzd2envz00zz__paramz00, BgL_bgl_za762biglooza7d2warn1843z00, BGl_z62bigloozd2warningzb0zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2debugzd2setz12zd2envzc0zz__paramz00, BgL_bgl_za762biglooza7d2debu1844z00, BGl_z62bigloozd2debugzd2setz12z70zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2casezd2sensitivezd2setz12zd2envz12zz__paramz00, BgL_bgl_za762biglooza7d2case1845z00, BGl_z62bigloozd2casezd2sensitivezd2setz12za2zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2debugzd2modulezd2setz12zd2envz12zz__paramz00, BgL_bgl_za762biglooza7d2debu1846z00, BGl_z62bigloozd2debugzd2modulezd2setz12za2zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2libraryzd2pathzd2envzd2zz__paramz00, BgL_bgl_za762biglooza7d2libr1847z00, BGl_z62bigloozd2libraryzd2pathz62zz__paramz00, 0L, BUNSPEC, 0 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_symbol1750z00zz__paramz00) );
ADD_ROOT( (void *)(&BGl_za2parameterzd2mutexza2zd2zz__paramz00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__paramz00) );
ADD_ROOT( (void *)(&BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00) );
ADD_ROOT( (void *)(&BGl_za2bigloozd2profileza2zd2zz__paramz00) );
ADD_ROOT( (void *)(&BGl_za2bigloozd2warningza2zd2zz__paramz00) );
ADD_ROOT( (void *)(&BGl_za2bigloozd2loadzd2readerza2z00zz__paramz00) );
ADD_ROOT( (void *)(&BGl_za2bigloozd2modulezd2extensionzd2handlerza2zd2zz__paramz00) );
ADD_ROOT( (void *)(&BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00) );
ADD_ROOT( (void *)(&BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00) );
ADD_ROOT( (void *)(&BGl_za2bigloozd2traceza2zd2zz__paramz00) );
ADD_ROOT( (void *)(&BGl_list1738z00zz__paramz00) );
ADD_ROOT( (void *)(&BGl_za2bigloozd2debugza2zd2zz__paramz00) );
ADD_ROOT( (void *)(&BGl_za2bigloozd2loadzd2moduleza2z00zz__paramz00) );
ADD_ROOT( (void *)(&BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00) );
ADD_ROOT( (void *)(&BGl_symbol1702z00zz__paramz00) );
ADD_ROOT( (void *)(&BGl_symbol1704z00zz__paramz00) );
ADD_ROOT( (void *)(&BGl_symbol1709z00zz__paramz00) );
ADD_ROOT( (void *)(&BGl_symbol1714z00zz__paramz00) );
ADD_ROOT( (void *)(&BGl_symbol1718z00zz__paramz00) );
ADD_ROOT( (void *)(&BGl_symbol1723z00zz__paramz00) );
ADD_ROOT( (void *)(&BGl_symbol1728z00zz__paramz00) );
ADD_ROOT( (void *)(&BGl_symbol1739z00zz__paramz00) );
ADD_ROOT( (void *)(&BGl_symbol1741z00zz__paramz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long BgL_checksumz00_1922, char * BgL_fromz00_1923)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__paramz00))
{ 
BGl_requirezd2initializa7ationz75zz__paramz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__paramz00(); 
BGl_cnstzd2initzd2zz__paramz00(); 
BGl_importedzd2moduleszd2initz00zz__paramz00(); 
return 
BGl_toplevelzd2initzd2zz__paramz00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__paramz00()
{
{ /* Llib/param.scm 15 */
BGl_symbol1702z00zz__paramz00 = 
bstring_to_symbol(BGl_string1703z00zz__paramz00); 
BGl_symbol1704z00zz__paramz00 = 
bstring_to_symbol(BGl_string1705z00zz__paramz00); 
BGl_symbol1709z00zz__paramz00 = 
bstring_to_symbol(BGl_string1710z00zz__paramz00); 
BGl_symbol1714z00zz__paramz00 = 
bstring_to_symbol(BGl_string1715z00zz__paramz00); 
BGl_symbol1718z00zz__paramz00 = 
bstring_to_symbol(BGl_string1719z00zz__paramz00); 
BGl_symbol1723z00zz__paramz00 = 
bstring_to_symbol(BGl_string1724z00zz__paramz00); 
BGl_symbol1728z00zz__paramz00 = 
bstring_to_symbol(BGl_string1729z00zz__paramz00); 
BGl_symbol1739z00zz__paramz00 = 
bstring_to_symbol(BGl_string1740z00zz__paramz00); 
BGl_symbol1741z00zz__paramz00 = 
bstring_to_symbol(BGl_string1742z00zz__paramz00); 
BGl_list1738z00zz__paramz00 = 
MAKE_YOUNG_PAIR(BGl_symbol1702z00zz__paramz00, 
MAKE_YOUNG_PAIR(BGl_symbol1739z00zz__paramz00, 
MAKE_YOUNG_PAIR(BGl_symbol1741z00zz__paramz00, BNIL))); 
return ( 
BGl_symbol1750z00zz__paramz00 = 
bstring_to_symbol(BGl_string1751z00zz__paramz00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__paramz00()
{
{ /* Llib/param.scm 15 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__paramz00()
{
{ /* Llib/param.scm 15 */
{ /* Llib/param.scm 110 */
obj_t BgL_res1568z00_1517;
BgL_res1568z00_1517 = 
bgl_make_mutex(BGl_string1693z00zz__paramz00); 
BGl_za2parameterzd2mutexza2zd2zz__paramz00 = BgL_res1568z00_1517; } 
BGl_za2bigloozd2strictzd2r5rszd2stringsza2zd2zz__paramz00 = ((bool_t)0); 
BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00 = 
BINT(((long)0)); 
BGl_za2bigloozd2debugza2zd2zz__paramz00 = 
BINT(((long)0)); 
BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00 = 
BINT(((long)0)); 
BGl_za2bigloozd2warningza2zd2zz__paramz00 = 
BINT(((long)1)); 
BGl_za2bigloozd2profileza2zd2zz__paramz00 = 
BINT(((long)0)); 
BGl_za2bigloozd2tracezd2colorza2z00zz__paramz00 = ((bool_t)1); 
{ /* Llib/param.scm 206 */
obj_t BgL_envzd2valuezd2_1037;
BgL_envzd2valuezd2_1037 = 
BGl_getenvz00zz__osz00(BGl_string1694z00zz__paramz00); 
if(
STRINGP(BgL_envzd2valuezd2_1037))
{ /* Llib/param.scm 208 */
obj_t BgL_l1069z00_1039;
BgL_l1069z00_1039 = 
BGl_stringzd2splitzd2zz__r4_strings_6_7z00(BgL_envzd2valuezd2_1037, BNIL); 
if(
NULLP(BgL_l1069z00_1039))
{ /* Llib/param.scm 208 */
BGl_za2bigloozd2traceza2zd2zz__paramz00 = BNIL; }  else 
{ /* Llib/param.scm 208 */
obj_t BgL_head1071z00_1041;
{ /* Llib/param.scm 208 */
obj_t BgL_arg1172z00_1054;
{ /* Llib/param.scm 208 */
obj_t BgL_arg1174z00_1055;
BgL_arg1174z00_1055 = 
CAR(BgL_l1069z00_1039); 
{ /* Llib/param.scm 208 */
obj_t BgL_res1571z00_1522;
{ /* Llib/param.scm 208 */
obj_t BgL_stringz00_1521;
if(
STRINGP(BgL_arg1174z00_1055))
{ /* Llib/param.scm 208 */
BgL_stringz00_1521 = BgL_arg1174z00_1055; }  else 
{ 
obj_t BgL_auxz00_1960;
BgL_auxz00_1960 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)7799)), BGl_string1696z00zz__paramz00, BGl_string1697z00zz__paramz00, BgL_arg1174z00_1055); 
FAILURE(BgL_auxz00_1960,BFALSE,BFALSE);} 
BgL_res1571z00_1522 = 
bstring_to_symbol(BgL_stringz00_1521); } 
BgL_arg1172z00_1054 = BgL_res1571z00_1522; } } 
{ /* Llib/param.scm 208 */
obj_t BgL_res1572z00_1523;
BgL_res1572z00_1523 = 
MAKE_YOUNG_PAIR(BgL_arg1172z00_1054, BNIL); 
BgL_head1071z00_1041 = BgL_res1572z00_1523; } } 
{ /* Llib/param.scm 208 */
obj_t BgL_g1074z00_1042;
BgL_g1074z00_1042 = 
CDR(BgL_l1069z00_1039); 
{ 
obj_t BgL_l1069z00_1044;obj_t BgL_tail1072z00_1045;
BgL_l1069z00_1044 = BgL_g1074z00_1042; 
BgL_tail1072z00_1045 = BgL_head1071z00_1041; 
BgL_zc3z04anonymousza31164ze3z87_1046:
if(
PAIRP(BgL_l1069z00_1044))
{ /* Llib/param.scm 208 */
obj_t BgL_newtail1073z00_1048;
{ /* Llib/param.scm 208 */
obj_t BgL_arg1167z00_1050;
{ /* Llib/param.scm 208 */
obj_t BgL_arg1169z00_1051;
BgL_arg1169z00_1051 = 
CAR(BgL_l1069z00_1044); 
{ /* Llib/param.scm 208 */
obj_t BgL_res1574z00_1528;
{ /* Llib/param.scm 208 */
obj_t BgL_stringz00_1527;
if(
STRINGP(BgL_arg1169z00_1051))
{ /* Llib/param.scm 208 */
BgL_stringz00_1527 = BgL_arg1169z00_1051; }  else 
{ 
obj_t BgL_auxz00_1972;
BgL_auxz00_1972 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)7799)), BGl_string1698z00zz__paramz00, BGl_string1697z00zz__paramz00, BgL_arg1169z00_1051); 
FAILURE(BgL_auxz00_1972,BFALSE,BFALSE);} 
BgL_res1574z00_1528 = 
bstring_to_symbol(BgL_stringz00_1527); } 
BgL_arg1167z00_1050 = BgL_res1574z00_1528; } } 
{ /* Llib/param.scm 208 */
obj_t BgL_res1575z00_1529;
BgL_res1575z00_1529 = 
MAKE_YOUNG_PAIR(BgL_arg1167z00_1050, BNIL); 
BgL_newtail1073z00_1048 = BgL_res1575z00_1529; } } 
SET_CDR(BgL_tail1072z00_1045, BgL_newtail1073z00_1048); 
{ 
obj_t BgL_tail1072z00_1981;obj_t BgL_l1069z00_1979;
BgL_l1069z00_1979 = 
CDR(BgL_l1069z00_1044); 
BgL_tail1072z00_1981 = BgL_newtail1073z00_1048; 
BgL_tail1072z00_1045 = BgL_tail1072z00_1981; 
BgL_l1069z00_1044 = BgL_l1069z00_1979; 
goto BgL_zc3z04anonymousza31164ze3z87_1046;} }  else 
{ /* Llib/param.scm 208 */
if(
NULLP(BgL_l1069z00_1044))
{ /* Llib/param.scm 208 */
BGl_za2bigloozd2traceza2zd2zz__paramz00 = BgL_head1071z00_1041; }  else 
{ /* Llib/param.scm 208 */
BGl_za2bigloozd2traceza2zd2zz__paramz00 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string1699z00zz__paramz00, BGl_string1700z00zz__paramz00, BgL_l1069z00_1044, BGl_string1695z00zz__paramz00, 
BINT(((long)7799))); } } } } } }  else 
{ /* Llib/param.scm 207 */
BGl_za2bigloozd2traceza2zd2zz__paramz00 = BNIL; } } 
{ /* Llib/param.scm 217 */
obj_t BgL_envzd2valuezd2_1057;
BgL_envzd2valuezd2_1057 = 
BGl_getenvz00zz__osz00(BGl_string1701z00zz__paramz00); 
if(
STRINGP(BgL_envzd2valuezd2_1057))
{ /* Llib/param.scm 219 */
char * BgL_tmpz00_1989;
BgL_tmpz00_1989 = 
BSTRING_TO_STRING(BgL_envzd2valuezd2_1057); 
BGl_za2bigloozd2tracezd2stackzd2depthza2zd2zz__paramz00 = 
BGL_STRTOL(BgL_tmpz00_1989, ((long)0), ((long)10)); }  else 
{ /* Llib/param.scm 218 */
BGl_za2bigloozd2tracezd2stackzd2depthza2zd2zz__paramz00 = ((long)10); } } 
BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00 = BGl_symbol1702z00zz__paramz00; 
BGl_za2bigloozd2initializa7edpza2z75zz__paramz00 = ((bool_t)0); 
BGl_za2bigloozd2loadzd2readerza2z00zz__paramz00 = BFALSE; 
BGl_za2bigloozd2loadzd2moduleza2z00zz__paramz00 = BFALSE; 
BGl_za2bigloozd2modulezd2extensionzd2handlerza2zd2zz__paramz00 = BFALSE; 
BGl_za2bigloozd2evalzd2strictzd2moduleza2zd2zz__paramz00 = ((bool_t)1); 
{ /* Llib/param.scm 281 */
obj_t BgL_arg1177z00_1059;
BgL_arg1177z00_1059 = 
BGl_bigloozd2configzd2zz__configurez00(BGl_symbol1704z00zz__paramz00); 
{ /* Llib/param.scm 281 */
obj_t BgL_list1178z00_1060;
{ /* Llib/param.scm 281 */
obj_t BgL_arg1179z00_1061;
BgL_arg1179z00_1061 = 
MAKE_YOUNG_PAIR(BgL_arg1177z00_1059, BNIL); 
BgL_list1178z00_1060 = 
MAKE_YOUNG_PAIR(BGl_string1706z00zz__paramz00, BgL_arg1179z00_1061); } 
BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00 = BgL_list1178z00_1060; } } 
BGl_za2bigloozd2dnszd2enablezd2cacheza2zd2zz__paramz00 = ((bool_t)1); 
return ( 
BGl_za2bigloozd2dnszd2cachezd2validityzd2timeoutza2z00zz__paramz00 = ((long)20), BUNSPEC) ;} 

}



/* bigloo-strict-r5rs-strings */
BGL_EXPORTED_DEF bool_t BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00()
{
{ /* Llib/param.scm 135 */
return BGl_za2bigloozd2strictzd2r5rszd2stringsza2zd2zz__paramz00;} 

}



/* &bigloo-strict-r5rs-strings */
obj_t BGl_z62bigloozd2strictzd2r5rszd2stringszb0zz__paramz00(obj_t BgL_envz00_1813)
{
{ /* Llib/param.scm 135 */
return 
BBOOL(
BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00());} 

}



/* bigloo-strict-r5rs-strings-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2strictzd2r5rszd2stringszd2setz12z12zz__paramz00(bool_t BgL_vz00_3)
{
{ /* Llib/param.scm 135 */
BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
{ /* Llib/param.scm 135 */
obj_t BgL_tmp1856z00_1997;
BgL_tmp1856z00_1997 = ( 
BGl_za2bigloozd2strictzd2r5rszd2stringsza2zd2zz__paramz00 = BgL_vz00_3, BUNSPEC) ; 
BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); BgL_tmp1856z00_1997; } 
return 
BBOOL(BgL_vz00_3);} 

}



/* &bigloo-strict-r5rs-strings-set! */
obj_t BGl_z62bigloozd2strictzd2r5rszd2stringszd2setz12z70zz__paramz00(obj_t BgL_envz00_1814, obj_t BgL_vz00_1815)
{
{ /* Llib/param.scm 135 */
return 
BGl_bigloozd2strictzd2r5rszd2stringszd2setz12z12zz__paramz00(
CBOOL(BgL_vz00_1815));} 

}



/* bigloo-compiler-debug */
BGL_EXPORTED_DEF int BGl_bigloozd2compilerzd2debugz00zz__paramz00()
{
{ /* Llib/param.scm 142 */
{ /* Llib/param.scm 142 */
obj_t BgL_tmpz00_2003;
{ /* Llib/param.scm 142 */
obj_t BgL_aux1649z00_1870;
BgL_aux1649z00_1870 = BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00; 
if(
INTEGERP(BgL_aux1649z00_1870))
{ /* Llib/param.scm 142 */
BgL_tmpz00_2003 = BgL_aux1649z00_1870
; }  else 
{ 
obj_t BgL_auxz00_2006;
BgL_auxz00_2006 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)4860)), BGl_string1707z00zz__paramz00, BGl_string1708z00zz__paramz00, BgL_aux1649z00_1870); 
FAILURE(BgL_auxz00_2006,BFALSE,BFALSE);} } 
return 
CINT(BgL_tmpz00_2003);} } 

}



/* &bigloo-compiler-debug */
obj_t BGl_z62bigloozd2compilerzd2debugz62zz__paramz00(obj_t BgL_envz00_1816)
{
{ /* Llib/param.scm 142 */
return 
BINT(
BGl_bigloozd2compilerzd2debugz00zz__paramz00());} 

}



/* bigloo-compiler-debug-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2compilerzd2debugzd2setz12zc0zz__paramz00(int BgL_vz00_4)
{
{ /* Llib/param.scm 142 */
{ /* Llib/param.scm 142 */
obj_t BgL_top1859z00_2014;
BgL_top1859z00_2014 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
BGL_EXITD_PUSH_PROTECT(BgL_top1859z00_2014, BGl_za2parameterzd2mutexza2zd2zz__paramz00); BUNSPEC; 
{ /* Llib/param.scm 142 */
obj_t BgL_tmp1858z00_2013;
if(
(
(long)(BgL_vz00_4)<((long)0)))
{ /* Llib/param.scm 145 */
BgL_tmp1858z00_2013 = ( 
BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00 = 
BGl_errorz00zz__errorz00(BGl_symbol1709z00zz__paramz00, BGl_string1711z00zz__paramz00, 
BINT(BgL_vz00_4)), BUNSPEC) ; }  else 
{ /* Llib/param.scm 145 */
BgL_tmp1858z00_2013 = ( 
BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00 = 
BINT(BgL_vz00_4), BUNSPEC) ; } 
BGL_EXITD_POP_PROTECT(BgL_top1859z00_2014); BUNSPEC; 
BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); BgL_tmp1858z00_2013; } } 
return 
BINT(BgL_vz00_4);} 

}



/* &bigloo-compiler-debug-set! */
obj_t BGl_z62bigloozd2compilerzd2debugzd2setz12za2zz__paramz00(obj_t BgL_envz00_1817, obj_t BgL_vz00_1818)
{
{ /* Llib/param.scm 142 */
{ /* Llib/param.scm 142 */
int BgL_auxz00_2027;
{ /* Llib/param.scm 142 */
obj_t BgL_tmpz00_2028;
if(
INTEGERP(BgL_vz00_1818))
{ /* Llib/param.scm 142 */
BgL_tmpz00_2028 = BgL_vz00_1818
; }  else 
{ 
obj_t BgL_auxz00_2031;
BgL_auxz00_2031 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)4860)), BGl_string1712z00zz__paramz00, BGl_string1708z00zz__paramz00, BgL_vz00_1818); 
FAILURE(BgL_auxz00_2031,BFALSE,BFALSE);} 
BgL_auxz00_2027 = 
CINT(BgL_tmpz00_2028); } 
return 
BGl_bigloozd2compilerzd2debugzd2setz12zc0zz__paramz00(BgL_auxz00_2027);} } 

}



/* bigloo-debug */
BGL_EXPORTED_DEF int bgl_debug()
{
{ /* Llib/param.scm 154 */
{ /* Llib/param.scm 154 */
obj_t BgL_tmpz00_2037;
{ /* Llib/param.scm 154 */
obj_t BgL_aux1653z00_1874;
BgL_aux1653z00_1874 = BGl_za2bigloozd2debugza2zd2zz__paramz00; 
if(
INTEGERP(BgL_aux1653z00_1874))
{ /* Llib/param.scm 154 */
BgL_tmpz00_2037 = BgL_aux1653z00_1874
; }  else 
{ 
obj_t BgL_auxz00_2040;
BgL_auxz00_2040 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)5413)), BGl_string1713z00zz__paramz00, BGl_string1708z00zz__paramz00, BgL_aux1653z00_1874); 
FAILURE(BgL_auxz00_2040,BFALSE,BFALSE);} } 
return 
CINT(BgL_tmpz00_2037);} } 

}



/* &bigloo-debug */
obj_t BGl_z62bigloozd2debugzb0zz__paramz00(obj_t BgL_envz00_1819)
{
{ /* Llib/param.scm 154 */
return 
BINT(
bgl_debug());} 

}



/* bigloo-debug-set! */
BGL_EXPORTED_DEF obj_t bgl_debug_set(int BgL_vz00_5)
{
{ /* Llib/param.scm 154 */
{ /* Llib/param.scm 154 */
obj_t BgL_top1864z00_2048;
BgL_top1864z00_2048 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
BGL_EXITD_PUSH_PROTECT(BgL_top1864z00_2048, BGl_za2parameterzd2mutexza2zd2zz__paramz00); BUNSPEC; 
{ /* Llib/param.scm 154 */
obj_t BgL_tmp1863z00_2047;
if(
(
(long)(BgL_vz00_5)<((long)0)))
{ /* Llib/param.scm 157 */
BgL_tmp1863z00_2047 = ( 
BGl_za2bigloozd2debugza2zd2zz__paramz00 = 
BGl_errorz00zz__errorz00(BGl_symbol1714z00zz__paramz00, BGl_string1711z00zz__paramz00, 
BINT(BgL_vz00_5)), BUNSPEC) ; }  else 
{ /* Llib/param.scm 157 */
BgL_tmp1863z00_2047 = ( 
BGl_za2bigloozd2debugza2zd2zz__paramz00 = 
BINT(BgL_vz00_5), BUNSPEC) ; } 
BGL_EXITD_POP_PROTECT(BgL_top1864z00_2048); BUNSPEC; 
BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); BgL_tmp1863z00_2047; } } 
return 
BINT(BgL_vz00_5);} 

}



/* &bigloo-debug-set! */
obj_t BGl_z62bigloozd2debugzd2setz12z70zz__paramz00(obj_t BgL_envz00_1820, obj_t BgL_vz00_1821)
{
{ /* Llib/param.scm 154 */
{ /* Llib/param.scm 154 */
int BgL_auxz00_2061;
{ /* Llib/param.scm 154 */
obj_t BgL_tmpz00_2062;
if(
INTEGERP(BgL_vz00_1821))
{ /* Llib/param.scm 154 */
BgL_tmpz00_2062 = BgL_vz00_1821
; }  else 
{ 
obj_t BgL_auxz00_2065;
BgL_auxz00_2065 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)5413)), BGl_string1716z00zz__paramz00, BGl_string1708z00zz__paramz00, BgL_vz00_1821); 
FAILURE(BgL_auxz00_2065,BFALSE,BFALSE);} 
BgL_auxz00_2061 = 
CINT(BgL_tmpz00_2062); } 
return 
bgl_debug_set(BgL_auxz00_2061);} } 

}



/* bigloo-debug-module */
BGL_EXPORTED_DEF int BGl_bigloozd2debugzd2modulez00zz__paramz00()
{
{ /* Llib/param.scm 166 */
{ /* Llib/param.scm 166 */
obj_t BgL_tmpz00_2071;
{ /* Llib/param.scm 166 */
obj_t BgL_aux1657z00_1878;
BgL_aux1657z00_1878 = BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00; 
if(
INTEGERP(BgL_aux1657z00_1878))
{ /* Llib/param.scm 166 */
BgL_tmpz00_2071 = BgL_aux1657z00_1878
; }  else 
{ 
obj_t BgL_auxz00_2074;
BgL_auxz00_2074 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)5945)), BGl_string1717z00zz__paramz00, BGl_string1708z00zz__paramz00, BgL_aux1657z00_1878); 
FAILURE(BgL_auxz00_2074,BFALSE,BFALSE);} } 
return 
CINT(BgL_tmpz00_2071);} } 

}



/* &bigloo-debug-module */
obj_t BGl_z62bigloozd2debugzd2modulez62zz__paramz00(obj_t BgL_envz00_1822)
{
{ /* Llib/param.scm 166 */
return 
BINT(
BGl_bigloozd2debugzd2modulez00zz__paramz00());} 

}



/* bigloo-debug-module-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2debugzd2modulezd2setz12zc0zz__paramz00(int BgL_vz00_6)
{
{ /* Llib/param.scm 166 */
{ /* Llib/param.scm 166 */
obj_t BgL_top1869z00_2082;
BgL_top1869z00_2082 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
BGL_EXITD_PUSH_PROTECT(BgL_top1869z00_2082, BGl_za2parameterzd2mutexza2zd2zz__paramz00); BUNSPEC; 
{ /* Llib/param.scm 166 */
obj_t BgL_tmp1868z00_2081;
if(
(
(long)(BgL_vz00_6)<((long)0)))
{ /* Llib/param.scm 169 */
BgL_tmp1868z00_2081 = ( 
BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00 = 
BGl_errorz00zz__errorz00(BGl_symbol1718z00zz__paramz00, BGl_string1720z00zz__paramz00, 
BINT(BgL_vz00_6)), BUNSPEC) ; }  else 
{ /* Llib/param.scm 169 */
BgL_tmp1868z00_2081 = ( 
BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00 = 
BINT(BgL_vz00_6), BUNSPEC) ; } 
BGL_EXITD_POP_PROTECT(BgL_top1869z00_2082); BUNSPEC; 
BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); BgL_tmp1868z00_2081; } } 
return 
BINT(BgL_vz00_6);} 

}



/* &bigloo-debug-module-set! */
obj_t BGl_z62bigloozd2debugzd2modulezd2setz12za2zz__paramz00(obj_t BgL_envz00_1823, obj_t BgL_vz00_1824)
{
{ /* Llib/param.scm 166 */
{ /* Llib/param.scm 166 */
int BgL_auxz00_2095;
{ /* Llib/param.scm 166 */
obj_t BgL_tmpz00_2096;
if(
INTEGERP(BgL_vz00_1824))
{ /* Llib/param.scm 166 */
BgL_tmpz00_2096 = BgL_vz00_1824
; }  else 
{ 
obj_t BgL_auxz00_2099;
BgL_auxz00_2099 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)5945)), BGl_string1721z00zz__paramz00, BGl_string1708z00zz__paramz00, BgL_vz00_1824); 
FAILURE(BgL_auxz00_2099,BFALSE,BFALSE);} 
BgL_auxz00_2095 = 
CINT(BgL_tmpz00_2096); } 
return 
BGl_bigloozd2debugzd2modulezd2setz12zc0zz__paramz00(BgL_auxz00_2095);} } 

}



/* bigloo-warning */
BGL_EXPORTED_DEF int BGl_bigloozd2warningzd2zz__paramz00()
{
{ /* Llib/param.scm 178 */
{ /* Llib/param.scm 178 */
obj_t BgL_tmpz00_2105;
{ /* Llib/param.scm 178 */
obj_t BgL_aux1661z00_1882;
BgL_aux1661z00_1882 = BGl_za2bigloozd2warningza2zd2zz__paramz00; 
if(
INTEGERP(BgL_aux1661z00_1882))
{ /* Llib/param.scm 178 */
BgL_tmpz00_2105 = BgL_aux1661z00_1882
; }  else 
{ 
obj_t BgL_auxz00_2108;
BgL_auxz00_2108 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)6498)), BGl_string1722z00zz__paramz00, BGl_string1708z00zz__paramz00, BgL_aux1661z00_1882); 
FAILURE(BgL_auxz00_2108,BFALSE,BFALSE);} } 
return 
CINT(BgL_tmpz00_2105);} } 

}



/* &bigloo-warning */
obj_t BGl_z62bigloozd2warningzb0zz__paramz00(obj_t BgL_envz00_1825)
{
{ /* Llib/param.scm 178 */
return 
BINT(
BGl_bigloozd2warningzd2zz__paramz00());} 

}



/* bigloo-warning-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2warningzd2setz12z12zz__paramz00(int BgL_vz00_7)
{
{ /* Llib/param.scm 178 */
{ /* Llib/param.scm 178 */
obj_t BgL_top1874z00_2116;
BgL_top1874z00_2116 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
BGL_EXITD_PUSH_PROTECT(BgL_top1874z00_2116, BGl_za2parameterzd2mutexza2zd2zz__paramz00); BUNSPEC; 
{ /* Llib/param.scm 178 */
obj_t BgL_tmp1873z00_2115;
if(
(
(long)(BgL_vz00_7)<((long)0)))
{ /* Llib/param.scm 181 */
BgL_tmp1873z00_2115 = ( 
BGl_za2bigloozd2warningza2zd2zz__paramz00 = 
BGl_errorz00zz__errorz00(BGl_symbol1723z00zz__paramz00, BGl_string1725z00zz__paramz00, 
BINT(BgL_vz00_7)), BUNSPEC) ; }  else 
{ /* Llib/param.scm 181 */
BgL_tmp1873z00_2115 = ( 
BGl_za2bigloozd2warningza2zd2zz__paramz00 = 
BINT(BgL_vz00_7), BUNSPEC) ; } 
BGL_EXITD_POP_PROTECT(BgL_top1874z00_2116); BUNSPEC; 
BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); BgL_tmp1873z00_2115; } } 
return 
BINT(BgL_vz00_7);} 

}



/* &bigloo-warning-set! */
obj_t BGl_z62bigloozd2warningzd2setz12z70zz__paramz00(obj_t BgL_envz00_1826, obj_t BgL_vz00_1827)
{
{ /* Llib/param.scm 178 */
{ /* Llib/param.scm 178 */
int BgL_auxz00_2129;
{ /* Llib/param.scm 178 */
obj_t BgL_tmpz00_2130;
if(
INTEGERP(BgL_vz00_1827))
{ /* Llib/param.scm 178 */
BgL_tmpz00_2130 = BgL_vz00_1827
; }  else 
{ 
obj_t BgL_auxz00_2133;
BgL_auxz00_2133 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)6498)), BGl_string1726z00zz__paramz00, BGl_string1708z00zz__paramz00, BgL_vz00_1827); 
FAILURE(BgL_auxz00_2133,BFALSE,BFALSE);} 
BgL_auxz00_2129 = 
CINT(BgL_tmpz00_2130); } 
return 
BGl_bigloozd2warningzd2setz12z12zz__paramz00(BgL_auxz00_2129);} } 

}



/* bigloo-profile */
BGL_EXPORTED_DEF int BGl_bigloozd2profilezd2zz__paramz00()
{
{ /* Llib/param.scm 190 */
{ /* Llib/param.scm 190 */
obj_t BgL_tmpz00_2139;
{ /* Llib/param.scm 190 */
obj_t BgL_aux1665z00_1886;
BgL_aux1665z00_1886 = BGl_za2bigloozd2profileza2zd2zz__paramz00; 
if(
INTEGERP(BgL_aux1665z00_1886))
{ /* Llib/param.scm 190 */
BgL_tmpz00_2139 = BgL_aux1665z00_1886
; }  else 
{ 
obj_t BgL_auxz00_2142;
BgL_auxz00_2142 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)7036)), BGl_string1727z00zz__paramz00, BGl_string1708z00zz__paramz00, BgL_aux1665z00_1886); 
FAILURE(BgL_auxz00_2142,BFALSE,BFALSE);} } 
return 
CINT(BgL_tmpz00_2139);} } 

}



/* &bigloo-profile */
obj_t BGl_z62bigloozd2profilezb0zz__paramz00(obj_t BgL_envz00_1828)
{
{ /* Llib/param.scm 190 */
return 
BINT(
BGl_bigloozd2profilezd2zz__paramz00());} 

}



/* bigloo-profile-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2profilezd2setz12z12zz__paramz00(int BgL_vz00_8)
{
{ /* Llib/param.scm 190 */
{ /* Llib/param.scm 190 */
obj_t BgL_top1879z00_2150;
BgL_top1879z00_2150 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
BGL_EXITD_PUSH_PROTECT(BgL_top1879z00_2150, BGl_za2parameterzd2mutexza2zd2zz__paramz00); BUNSPEC; 
{ /* Llib/param.scm 190 */
obj_t BgL_tmp1878z00_2149;
if(
(
(long)(BgL_vz00_8)<((long)0)))
{ /* Llib/param.scm 193 */
BgL_tmp1878z00_2149 = ( 
BGl_za2bigloozd2profileza2zd2zz__paramz00 = 
BGl_errorz00zz__errorz00(BGl_symbol1728z00zz__paramz00, BGl_string1730z00zz__paramz00, 
BINT(BgL_vz00_8)), BUNSPEC) ; }  else 
{ /* Llib/param.scm 193 */
BgL_tmp1878z00_2149 = ( 
BGl_za2bigloozd2profileza2zd2zz__paramz00 = 
BINT(BgL_vz00_8), BUNSPEC) ; } 
BGL_EXITD_POP_PROTECT(BgL_top1879z00_2150); BUNSPEC; 
BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); BgL_tmp1878z00_2149; } } 
return 
BINT(BgL_vz00_8);} 

}



/* &bigloo-profile-set! */
obj_t BGl_z62bigloozd2profilezd2setz12z70zz__paramz00(obj_t BgL_envz00_1829, obj_t BgL_vz00_1830)
{
{ /* Llib/param.scm 190 */
{ /* Llib/param.scm 190 */
int BgL_auxz00_2163;
{ /* Llib/param.scm 190 */
obj_t BgL_tmpz00_2164;
if(
INTEGERP(BgL_vz00_1830))
{ /* Llib/param.scm 190 */
BgL_tmpz00_2164 = BgL_vz00_1830
; }  else 
{ 
obj_t BgL_auxz00_2167;
BgL_auxz00_2167 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)7036)), BGl_string1731z00zz__paramz00, BGl_string1708z00zz__paramz00, BgL_vz00_1830); 
FAILURE(BgL_auxz00_2167,BFALSE,BFALSE);} 
BgL_auxz00_2163 = 
CINT(BgL_tmpz00_2164); } 
return 
BGl_bigloozd2profilezd2setz12z12zz__paramz00(BgL_auxz00_2163);} } 

}



/* bigloo-trace-color */
BGL_EXPORTED_DEF bool_t BGl_bigloozd2tracezd2colorz00zz__paramz00()
{
{ /* Llib/param.scm 200 */
return BGl_za2bigloozd2tracezd2colorza2z00zz__paramz00;} 

}



/* &bigloo-trace-color */
obj_t BGl_z62bigloozd2tracezd2colorz62zz__paramz00(obj_t BgL_envz00_1831)
{
{ /* Llib/param.scm 200 */
return 
BBOOL(
BGl_bigloozd2tracezd2colorz00zz__paramz00());} 

}



/* bigloo-trace-color-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2tracezd2colorzd2setz12zc0zz__paramz00(bool_t BgL_vz00_9)
{
{ /* Llib/param.scm 200 */
BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
{ /* Llib/param.scm 200 */
obj_t BgL_tmp1882z00_2175;
BgL_tmp1882z00_2175 = ( 
BGl_za2bigloozd2tracezd2colorza2z00zz__paramz00 = BgL_vz00_9, BUNSPEC) ; 
BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); BgL_tmp1882z00_2175; } 
return 
BBOOL(BgL_vz00_9);} 

}



/* &bigloo-trace-color-set! */
obj_t BGl_z62bigloozd2tracezd2colorzd2setz12za2zz__paramz00(obj_t BgL_envz00_1832, obj_t BgL_vz00_1833)
{
{ /* Llib/param.scm 200 */
return 
BGl_bigloozd2tracezd2colorzd2setz12zc0zz__paramz00(
CBOOL(BgL_vz00_1833));} 

}



/* bigloo-trace */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2tracezd2zz__paramz00()
{
{ /* Llib/param.scm 205 */
{ /* Llib/param.scm 205 */
obj_t BgL_aux1669z00_1890;
BgL_aux1669z00_1890 = BGl_za2bigloozd2traceza2zd2zz__paramz00; 
{ /* Llib/param.scm 205 */
bool_t BgL_test1883z00_2181;
if(
PAIRP(BgL_aux1669z00_1890))
{ /* Llib/param.scm 205 */
BgL_test1883z00_2181 = ((bool_t)1)
; }  else 
{ /* Llib/param.scm 205 */
BgL_test1883z00_2181 = 
NULLP(BgL_aux1669z00_1890)
; } 
if(BgL_test1883z00_2181)
{ /* Llib/param.scm 205 */
return BgL_aux1669z00_1890;}  else 
{ 
obj_t BgL_auxz00_2185;
BgL_auxz00_2185 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)7690)), BGl_string1732z00zz__paramz00, BGl_string1733z00zz__paramz00, BgL_aux1669z00_1890); 
FAILURE(BgL_auxz00_2185,BFALSE,BFALSE);} } } } 

}



/* &bigloo-trace */
obj_t BGl_z62bigloozd2tracezb0zz__paramz00(obj_t BgL_envz00_1834)
{
{ /* Llib/param.scm 205 */
return 
BGl_bigloozd2tracezd2zz__paramz00();} 

}



/* bigloo-trace-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2tracezd2setz12z12zz__paramz00(obj_t BgL_vz00_10)
{
{ /* Llib/param.scm 205 */
BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
{ /* Llib/param.scm 205 */
obj_t BgL_tmp1885z00_2190;
BgL_tmp1885z00_2190 = ( 
BGl_za2bigloozd2traceza2zd2zz__paramz00 = BgL_vz00_10, BUNSPEC) ; 
BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); BgL_tmp1885z00_2190; } 
return BgL_vz00_10;} 

}



/* &bigloo-trace-set! */
obj_t BGl_z62bigloozd2tracezd2setz12z70zz__paramz00(obj_t BgL_envz00_1835, obj_t BgL_vz00_1836)
{
{ /* Llib/param.scm 205 */
{ /* Llib/param.scm 205 */
obj_t BgL_auxz00_2193;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_vz00_1836))
{ /* Llib/param.scm 205 */
BgL_auxz00_2193 = BgL_vz00_1836
; }  else 
{ 
obj_t BgL_auxz00_2196;
BgL_auxz00_2196 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)7690)), BGl_string1734z00zz__paramz00, BGl_string1733z00zz__paramz00, BgL_vz00_1836); 
FAILURE(BgL_auxz00_2196,BFALSE,BFALSE);} 
return 
BGl_bigloozd2tracezd2setz12z12zz__paramz00(BgL_auxz00_2193);} } 

}



/* bigloo-trace-stack-depth */
BGL_EXPORTED_DEF int BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00()
{
{ /* Llib/param.scm 216 */
return 
(int)(BGl_za2bigloozd2tracezd2stackzd2depthza2zd2zz__paramz00);} 

}



/* &bigloo-trace-stack-depth */
obj_t BGl_z62bigloozd2tracezd2stackzd2depthzb0zz__paramz00(obj_t BgL_envz00_1837)
{
{ /* Llib/param.scm 216 */
return 
BINT(
BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00());} 

}



/* bigloo-trace-stack-depth-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00(int BgL_vz00_11)
{
{ /* Llib/param.scm 216 */
BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
{ /* Llib/param.scm 216 */
obj_t BgL_tmp1887z00_2204;
BgL_tmp1887z00_2204 = ( 
BGl_za2bigloozd2tracezd2stackzd2depthza2zd2zz__paramz00 = 
(long)(BgL_vz00_11), BUNSPEC) ; 
BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); BgL_tmp1887z00_2204; } 
return 
BINT(BgL_vz00_11);} 

}



/* &bigloo-trace-stack-depth-set! */
obj_t BGl_z62bigloozd2tracezd2stackzd2depthzd2setz12z70zz__paramz00(obj_t BgL_envz00_1838, obj_t BgL_vz00_1839)
{
{ /* Llib/param.scm 216 */
{ /* Llib/param.scm 216 */
int BgL_auxz00_2209;
{ /* Llib/param.scm 216 */
obj_t BgL_tmpz00_2210;
if(
INTEGERP(BgL_vz00_1839))
{ /* Llib/param.scm 216 */
BgL_tmpz00_2210 = BgL_vz00_1839
; }  else 
{ 
obj_t BgL_auxz00_2213;
BgL_auxz00_2213 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)8226)), BGl_string1735z00zz__paramz00, BGl_string1708z00zz__paramz00, BgL_vz00_1839); 
FAILURE(BgL_auxz00_2213,BFALSE,BFALSE);} 
BgL_auxz00_2209 = 
CINT(BgL_tmpz00_2210); } 
return 
BGl_bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00(BgL_auxz00_2209);} } 

}



/* bigloo-case-sensitive */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2casezd2sensitivez00zz__paramz00()
{
{ /* Llib/param.scm 231 */
{ /* Llib/param.scm 231 */
obj_t BgL_aux1675z00_1896;
BgL_aux1675z00_1896 = BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00; 
if(
SYMBOLP(BgL_aux1675z00_1896))
{ /* Llib/param.scm 231 */
return BgL_aux1675z00_1896;}  else 
{ 
obj_t BgL_auxz00_2221;
BgL_auxz00_2221 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)9056)), BGl_string1736z00zz__paramz00, BGl_string1737z00zz__paramz00, BgL_aux1675z00_1896); 
FAILURE(BgL_auxz00_2221,BFALSE,BFALSE);} } } 

}



/* &bigloo-case-sensitive */
obj_t BGl_z62bigloozd2casezd2sensitivez62zz__paramz00(obj_t BgL_envz00_1840)
{
{ /* Llib/param.scm 231 */
return 
BGl_bigloozd2casezd2sensitivez00zz__paramz00();} 

}



/* bigloo-case-sensitive-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2casezd2sensitivezd2setz12zc0zz__paramz00(obj_t BgL_vz00_12)
{
{ /* Llib/param.scm 231 */
{ /* Llib/param.scm 231 */
obj_t BgL_top1891z00_2227;
BgL_top1891z00_2227 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
BGL_EXITD_PUSH_PROTECT(BgL_top1891z00_2227, BGl_za2parameterzd2mutexza2zd2zz__paramz00); BUNSPEC; 
{ /* Llib/param.scm 231 */
obj_t BgL_tmp1890z00_2226;
if(
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_vz00_12, BGl_list1738z00zz__paramz00)))
{ /* Llib/param.scm 235 */
BgL_tmp1890z00_2226 = ( 
BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00 = BgL_vz00_12, BUNSPEC) ; }  else 
{ /* Llib/param.scm 235 */
BgL_tmp1890z00_2226 = ( 
BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00 = 
BGl_errorz00zz__errorz00(BGl_string1743z00zz__paramz00, BGl_string1744z00zz__paramz00, BgL_vz00_12), BUNSPEC) ; } 
BGL_EXITD_POP_PROTECT(BgL_top1891z00_2227); BUNSPEC; 
BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); BgL_tmp1890z00_2226; } } 
return BgL_vz00_12;} 

}



/* &bigloo-case-sensitive-set! */
obj_t BGl_z62bigloozd2casezd2sensitivezd2setz12za2zz__paramz00(obj_t BgL_envz00_1841, obj_t BgL_vz00_1842)
{
{ /* Llib/param.scm 231 */
{ /* Llib/param.scm 231 */
obj_t BgL_auxz00_2237;
if(
SYMBOLP(BgL_vz00_1842))
{ /* Llib/param.scm 231 */
BgL_auxz00_2237 = BgL_vz00_1842
; }  else 
{ 
obj_t BgL_auxz00_2240;
BgL_auxz00_2240 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)9056)), BGl_string1745z00zz__paramz00, BGl_string1737z00zz__paramz00, BgL_vz00_1842); 
FAILURE(BgL_auxz00_2240,BFALSE,BFALSE);} 
return 
BGl_bigloozd2casezd2sensitivezd2setz12zc0zz__paramz00(BgL_auxz00_2237);} } 

}



/* bigloo-initialized! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2initializa7edz12z67zz__paramz00()
{
{ /* Llib/param.scm 248 */
return ( 
BGl_za2bigloozd2initializa7edpza2z75zz__paramz00 = ((bool_t)1), BUNSPEC) ;} 

}



/* &bigloo-initialized! */
obj_t BGl_z62bigloozd2initializa7edz12z05zz__paramz00(obj_t BgL_envz00_1843)
{
{ /* Llib/param.scm 248 */
return 
BGl_bigloozd2initializa7edz12z67zz__paramz00();} 

}



/* bigloo-initialized? */
BGL_EXPORTED_DEF bool_t BGl_bigloozd2initializa7edzf3z86zz__paramz00()
{
{ /* Llib/param.scm 254 */
return BGl_za2bigloozd2initializa7edpza2z75zz__paramz00;} 

}



/* &bigloo-initialized? */
obj_t BGl_z62bigloozd2initializa7edzf3ze4zz__paramz00(obj_t BgL_envz00_1844)
{
{ /* Llib/param.scm 254 */
return 
BBOOL(
BGl_bigloozd2initializa7edzf3z86zz__paramz00());} 

}



/* bigloo-load-reader */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2loadzd2readerz00zz__paramz00()
{
{ /* Llib/param.scm 260 */
return BGl_za2bigloozd2loadzd2readerza2z00zz__paramz00;} 

}



/* &bigloo-load-reader */
obj_t BGl_z62bigloozd2loadzd2readerz62zz__paramz00(obj_t BgL_envz00_1845)
{
{ /* Llib/param.scm 260 */
return 
BGl_bigloozd2loadzd2readerz00zz__paramz00();} 

}



/* bigloo-load-reader-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2loadzd2readerzd2setz12zc0zz__paramz00(obj_t BgL_vz00_13)
{
{ /* Llib/param.scm 260 */
BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
{ /* Llib/param.scm 260 */
obj_t BgL_tmp1894z00_2249;
BgL_tmp1894z00_2249 = ( 
BGl_za2bigloozd2loadzd2readerza2z00zz__paramz00 = BgL_vz00_13, BUNSPEC) ; 
BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); BgL_tmp1894z00_2249; } 
return BgL_vz00_13;} 

}



/* &bigloo-load-reader-set! */
obj_t BGl_z62bigloozd2loadzd2readerzd2setz12za2zz__paramz00(obj_t BgL_envz00_1846, obj_t BgL_vz00_1847)
{
{ /* Llib/param.scm 260 */
return 
BGl_bigloozd2loadzd2readerzd2setz12zc0zz__paramz00(BgL_vz00_1847);} 

}



/* bigloo-load-module */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2loadzd2modulez00zz__paramz00()
{
{ /* Llib/param.scm 265 */
return BGl_za2bigloozd2loadzd2moduleza2z00zz__paramz00;} 

}



/* &bigloo-load-module */
obj_t BGl_z62bigloozd2loadzd2modulez62zz__paramz00(obj_t BgL_envz00_1848)
{
{ /* Llib/param.scm 265 */
return 
BGl_bigloozd2loadzd2modulez00zz__paramz00();} 

}



/* bigloo-load-module-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2loadzd2modulezd2setz12zc0zz__paramz00(obj_t BgL_vz00_14)
{
{ /* Llib/param.scm 265 */
BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
{ /* Llib/param.scm 265 */
obj_t BgL_tmp1895z00_2254;
BgL_tmp1895z00_2254 = ( 
BGl_za2bigloozd2loadzd2moduleza2z00zz__paramz00 = BgL_vz00_14, BUNSPEC) ; 
BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); BgL_tmp1895z00_2254; } 
return BgL_vz00_14;} 

}



/* &bigloo-load-module-set! */
obj_t BGl_z62bigloozd2loadzd2modulezd2setz12za2zz__paramz00(obj_t BgL_envz00_1849, obj_t BgL_vz00_1850)
{
{ /* Llib/param.scm 265 */
return 
BGl_bigloozd2loadzd2modulezd2setz12zc0zz__paramz00(BgL_vz00_1850);} 

}



/* bigloo-module-extension-handler */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00()
{
{ /* Llib/param.scm 270 */
return BGl_za2bigloozd2modulezd2extensionzd2handlerza2zd2zz__paramz00;} 

}



/* &bigloo-module-extension-handler */
obj_t BGl_z62bigloozd2modulezd2extensionzd2handlerzb0zz__paramz00(obj_t BgL_envz00_1851)
{
{ /* Llib/param.scm 270 */
return 
BGl_bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00();} 

}



/* bigloo-module-extension-handler-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2modulezd2extensionzd2handlerzd2setz12z12zz__paramz00(obj_t BgL_vz00_15)
{
{ /* Llib/param.scm 270 */
BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
{ /* Llib/param.scm 270 */
obj_t BgL_tmp1896z00_2259;
BgL_tmp1896z00_2259 = ( 
BGl_za2bigloozd2modulezd2extensionzd2handlerza2zd2zz__paramz00 = BgL_vz00_15, BUNSPEC) ; 
BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); BgL_tmp1896z00_2259; } 
return BgL_vz00_15;} 

}



/* &bigloo-module-extension-handler-set! */
obj_t BGl_z62bigloozd2modulezd2extensionzd2handlerzd2setz12z70zz__paramz00(obj_t BgL_envz00_1852, obj_t BgL_vz00_1853)
{
{ /* Llib/param.scm 270 */
return 
BGl_bigloozd2modulezd2extensionzd2handlerzd2setz12z12zz__paramz00(BgL_vz00_1853);} 

}



/* bigloo-eval-strict-module */
BGL_EXPORTED_DEF bool_t BGl_bigloozd2evalzd2strictzd2modulezd2zz__paramz00()
{
{ /* Llib/param.scm 275 */
return BGl_za2bigloozd2evalzd2strictzd2moduleza2zd2zz__paramz00;} 

}



/* &bigloo-eval-strict-module */
obj_t BGl_z62bigloozd2evalzd2strictzd2modulezb0zz__paramz00(obj_t BgL_envz00_1854)
{
{ /* Llib/param.scm 275 */
return 
BBOOL(
BGl_bigloozd2evalzd2strictzd2modulezd2zz__paramz00());} 

}



/* bigloo-eval-strict-module-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2evalzd2strictzd2modulezd2setz12z12zz__paramz00(bool_t BgL_vz00_16)
{
{ /* Llib/param.scm 275 */
BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
{ /* Llib/param.scm 275 */
obj_t BgL_tmp1897z00_2265;
BgL_tmp1897z00_2265 = ( 
BGl_za2bigloozd2evalzd2strictzd2moduleza2zd2zz__paramz00 = BgL_vz00_16, BUNSPEC) ; 
BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); BgL_tmp1897z00_2265; } 
return 
BBOOL(BgL_vz00_16);} 

}



/* &bigloo-eval-strict-module-set! */
obj_t BGl_z62bigloozd2evalzd2strictzd2modulezd2setz12z70zz__paramz00(obj_t BgL_envz00_1855, obj_t BgL_vz00_1856)
{
{ /* Llib/param.scm 275 */
return 
BGl_bigloozd2evalzd2strictzd2modulezd2setz12z12zz__paramz00(
CBOOL(BgL_vz00_1856));} 

}



/* bigloo-library-path */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2libraryzd2pathz00zz__paramz00()
{
{ /* Llib/param.scm 280 */
{ /* Llib/param.scm 280 */
obj_t BgL_aux1679z00_1900;
BgL_aux1679z00_1900 = BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00; 
{ /* Llib/param.scm 280 */
bool_t BgL_test1898z00_2271;
if(
PAIRP(BgL_aux1679z00_1900))
{ /* Llib/param.scm 280 */
BgL_test1898z00_2271 = ((bool_t)1)
; }  else 
{ /* Llib/param.scm 280 */
BgL_test1898z00_2271 = 
NULLP(BgL_aux1679z00_1900)
; } 
if(BgL_test1898z00_2271)
{ /* Llib/param.scm 280 */
return BgL_aux1679z00_1900;}  else 
{ 
obj_t BgL_auxz00_2275;
BgL_auxz00_2275 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)11394)), BGl_string1746z00zz__paramz00, BGl_string1733z00zz__paramz00, BgL_aux1679z00_1900); 
FAILURE(BgL_auxz00_2275,BFALSE,BFALSE);} } } } 

}



/* &bigloo-library-path */
obj_t BGl_z62bigloozd2libraryzd2pathz62zz__paramz00(obj_t BgL_envz00_1857)
{
{ /* Llib/param.scm 280 */
return 
BGl_bigloozd2libraryzd2pathz00zz__paramz00();} 

}



/* bigloo-library-path-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2libraryzd2pathzd2setz12zc0zz__paramz00(obj_t BgL_vz00_17)
{
{ /* Llib/param.scm 280 */
{ /* Llib/param.scm 280 */
obj_t BgL_top1901z00_2281;
BgL_top1901z00_2281 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
BGL_EXITD_PUSH_PROTECT(BgL_top1901z00_2281, BGl_za2parameterzd2mutexza2zd2zz__paramz00); BUNSPEC; 
{ /* Llib/param.scm 280 */
obj_t BgL_tmp1900z00_2280;
if(
BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_vz00_17))
{ /* Llib/param.scm 286 */
bool_t BgL_test1903z00_2287;
{ 
obj_t BgL_l1075z00_1123;
{ /* Llib/param.scm 286 */
obj_t BgL_tmpz00_2288;
BgL_l1075z00_1123 = BgL_vz00_17; 
BgL_zc3z04anonymousza31226ze3z87_1124:
if(
NULLP(BgL_l1075z00_1123))
{ /* Llib/param.scm 286 */
BgL_tmpz00_2288 = BTRUE
; }  else 
{ /* Llib/param.scm 286 */
if(
PAIRP(BgL_l1075z00_1123))
{ /* Llib/param.scm 286 */
bool_t BgL_test1906z00_2293;
{ /* Llib/param.scm 286 */
obj_t BgL_tmpz00_2294;
BgL_tmpz00_2294 = 
CAR(BgL_l1075z00_1123); 
BgL_test1906z00_2293 = 
STRINGP(BgL_tmpz00_2294); } 
if(BgL_test1906z00_2293)
{ 
obj_t BgL_l1075z00_2297;
BgL_l1075z00_2297 = 
CDR(BgL_l1075z00_1123); 
BgL_l1075z00_1123 = BgL_l1075z00_2297; 
goto BgL_zc3z04anonymousza31226ze3z87_1124;}  else 
{ /* Llib/param.scm 286 */
BgL_tmpz00_2288 = BFALSE
; } }  else 
{ /* Llib/param.scm 286 */
BgL_tmpz00_2288 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string1747z00zz__paramz00, BGl_string1700z00zz__paramz00, BgL_l1075z00_1123, BGl_string1695z00zz__paramz00, 
BINT(((long)11596)))
; } } 
BgL_test1903z00_2287 = 
CBOOL(BgL_tmpz00_2288); } } 
if(BgL_test1903z00_2287)
{ /* Llib/param.scm 286 */
BgL_tmp1900z00_2280 = ( 
BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00 = BgL_vz00_17, BUNSPEC) ; }  else 
{ /* Llib/param.scm 289 */
obj_t BgL_arg1216z00_1105;
{ /* Llib/param.scm 289 */
obj_t BgL_hook1082z00_1106;
BgL_hook1082z00_1106 = 
MAKE_YOUNG_PAIR(BFALSE, BNIL); 
{ 
obj_t BgL_l1079z00_1108;obj_t BgL_h1080z00_1109;
BgL_l1079z00_1108 = BgL_vz00_17; 
BgL_h1080z00_1109 = BgL_hook1082z00_1106; 
BgL_zc3z04anonymousza31217ze3z87_1110:
if(
NULLP(BgL_l1079z00_1108))
{ /* Llib/param.scm 289 */
BgL_arg1216z00_1105 = 
CDR(BgL_hook1082z00_1106); }  else 
{ /* Llib/param.scm 289 */
bool_t BgL_test1908z00_2306;
{ /* Llib/param.scm 289 */
bool_t BgL_test1909z00_2307;
{ /* Llib/param.scm 289 */
obj_t BgL_tmpz00_2308;
{ /* Llib/param.scm 289 */
obj_t BgL_pairz00_1557;
if(
PAIRP(BgL_l1079z00_1108))
{ /* Llib/param.scm 289 */
BgL_pairz00_1557 = BgL_l1079z00_1108; }  else 
{ 
obj_t BgL_auxz00_2311;
BgL_auxz00_2311 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)11696)), BGl_string1748z00zz__paramz00, BGl_string1749z00zz__paramz00, BgL_l1079z00_1108); 
FAILURE(BgL_auxz00_2311,BFALSE,BFALSE);} 
BgL_tmpz00_2308 = 
CAR(BgL_pairz00_1557); } 
BgL_test1909z00_2307 = 
STRINGP(BgL_tmpz00_2308); } 
if(BgL_test1909z00_2307)
{ /* Llib/param.scm 289 */
BgL_test1908z00_2306 = ((bool_t)0)
; }  else 
{ /* Llib/param.scm 289 */
BgL_test1908z00_2306 = ((bool_t)1)
; } } 
if(BgL_test1908z00_2306)
{ /* Llib/param.scm 289 */
obj_t BgL_nh1081z00_1115;
{ /* Llib/param.scm 289 */
obj_t BgL_arg1223z00_1117;
{ /* Llib/param.scm 289 */
obj_t BgL_pairz00_1559;
if(
PAIRP(BgL_l1079z00_1108))
{ /* Llib/param.scm 289 */
BgL_pairz00_1559 = BgL_l1079z00_1108; }  else 
{ 
obj_t BgL_auxz00_2319;
BgL_auxz00_2319 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)11676)), BGl_string1748z00zz__paramz00, BGl_string1749z00zz__paramz00, BgL_l1079z00_1108); 
FAILURE(BgL_auxz00_2319,BFALSE,BFALSE);} 
BgL_arg1223z00_1117 = 
CAR(BgL_pairz00_1559); } 
{ /* Llib/param.scm 289 */
obj_t BgL_res1594z00_1560;
BgL_res1594z00_1560 = 
MAKE_YOUNG_PAIR(BgL_arg1223z00_1117, BNIL); 
BgL_nh1081z00_1115 = BgL_res1594z00_1560; } } 
SET_CDR(BgL_h1080z00_1109, BgL_nh1081z00_1115); 
{ /* Llib/param.scm 289 */
obj_t BgL_arg1221z00_1116;
{ /* Llib/param.scm 289 */
obj_t BgL_pairz00_1562;
if(
PAIRP(BgL_l1079z00_1108))
{ /* Llib/param.scm 289 */
BgL_pairz00_1562 = BgL_l1079z00_1108; }  else 
{ 
obj_t BgL_auxz00_2328;
BgL_auxz00_2328 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)11676)), BGl_string1748z00zz__paramz00, BGl_string1749z00zz__paramz00, BgL_l1079z00_1108); 
FAILURE(BgL_auxz00_2328,BFALSE,BFALSE);} 
BgL_arg1221z00_1116 = 
CDR(BgL_pairz00_1562); } 
{ 
obj_t BgL_h1080z00_2334;obj_t BgL_l1079z00_2333;
BgL_l1079z00_2333 = BgL_arg1221z00_1116; 
BgL_h1080z00_2334 = BgL_nh1081z00_1115; 
BgL_h1080z00_1109 = BgL_h1080z00_2334; 
BgL_l1079z00_1108 = BgL_l1079z00_2333; 
goto BgL_zc3z04anonymousza31217ze3z87_1110;} } }  else 
{ /* Llib/param.scm 289 */
obj_t BgL_arg1225z00_1118;
{ /* Llib/param.scm 289 */
obj_t BgL_pairz00_1563;
if(
PAIRP(BgL_l1079z00_1108))
{ /* Llib/param.scm 289 */
BgL_pairz00_1563 = BgL_l1079z00_1108; }  else 
{ 
obj_t BgL_auxz00_2337;
BgL_auxz00_2337 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)11676)), BGl_string1748z00zz__paramz00, BGl_string1749z00zz__paramz00, BgL_l1079z00_1108); 
FAILURE(BgL_auxz00_2337,BFALSE,BFALSE);} 
BgL_arg1225z00_1118 = 
CDR(BgL_pairz00_1563); } 
{ 
obj_t BgL_l1079z00_2342;
BgL_l1079z00_2342 = BgL_arg1225z00_1118; 
BgL_l1079z00_1108 = BgL_l1079z00_2342; 
goto BgL_zc3z04anonymousza31217ze3z87_1110;} } } } } 
BgL_tmp1900z00_2280 = ( 
BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00 = 
BGl_errorz00zz__errorz00(BGl_symbol1750z00zz__paramz00, BGl_string1752z00zz__paramz00, BgL_arg1216z00_1105), BUNSPEC) ; } }  else 
{ /* Llib/param.scm 284 */
BgL_tmp1900z00_2280 = ( 
BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00 = 
BGl_errorz00zz__errorz00(BGl_symbol1750z00zz__paramz00, BGl_string1753z00zz__paramz00, BgL_vz00_17), BUNSPEC) ; } 
BGL_EXITD_POP_PROTECT(BgL_top1901z00_2281); BUNSPEC; 
BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); BgL_tmp1900z00_2280; } } 
return BgL_vz00_17;} 

}



/* &bigloo-library-path-set! */
obj_t BGl_z62bigloozd2libraryzd2pathzd2setz12za2zz__paramz00(obj_t BgL_envz00_1858, obj_t BgL_vz00_1859)
{
{ /* Llib/param.scm 280 */
{ /* Llib/param.scm 280 */
obj_t BgL_auxz00_2347;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_vz00_1859))
{ /* Llib/param.scm 280 */
BgL_auxz00_2347 = BgL_vz00_1859
; }  else 
{ 
obj_t BgL_auxz00_2350;
BgL_auxz00_2350 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)11394)), BGl_string1754z00zz__paramz00, BGl_string1733z00zz__paramz00, BgL_vz00_1859); 
FAILURE(BgL_auxz00_2350,BFALSE,BFALSE);} 
return 
BGl_bigloozd2libraryzd2pathzd2setz12zc0zz__paramz00(BgL_auxz00_2347);} } 

}



/* bigloo-dns-enable-cache */
BGL_EXPORTED_DEF bool_t bgl_dns_enable_cache()
{
{ /* Llib/param.scm 296 */
return BGl_za2bigloozd2dnszd2enablezd2cacheza2zd2zz__paramz00;} 

}



/* &bigloo-dns-enable-cache */
obj_t BGl_z62bigloozd2dnszd2enablezd2cachezb0zz__paramz00(obj_t BgL_envz00_1860)
{
{ /* Llib/param.scm 296 */
return 
BBOOL(
bgl_dns_enable_cache());} 

}



/* bigloo-dns-enable-cache-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2dnszd2enablezd2cachezd2setz12z12zz__paramz00(bool_t BgL_vz00_18)
{
{ /* Llib/param.scm 296 */
BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
{ /* Llib/param.scm 296 */
obj_t BgL_tmp1915z00_2357;
BgL_tmp1915z00_2357 = ( 
BGl_za2bigloozd2dnszd2enablezd2cacheza2zd2zz__paramz00 = BgL_vz00_18, BUNSPEC) ; 
BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); BgL_tmp1915z00_2357; } 
return 
BBOOL(BgL_vz00_18);} 

}



/* &bigloo-dns-enable-cache-set! */
obj_t BGl_z62bigloozd2dnszd2enablezd2cachezd2setz12z70zz__paramz00(obj_t BgL_envz00_1861, obj_t BgL_vz00_1862)
{
{ /* Llib/param.scm 296 */
return 
BGl_bigloozd2dnszd2enablezd2cachezd2setz12z12zz__paramz00(
CBOOL(BgL_vz00_1862));} 

}



/* bigloo-dns-cache-validity-timeout */
BGL_EXPORTED_DEF long bgl_dns_cache_validity_timeout()
{
{ /* Llib/param.scm 301 */
return BGl_za2bigloozd2dnszd2cachezd2validityzd2timeoutza2z00zz__paramz00;} 

}



/* &bigloo-dns-cache-validity-timeout */
obj_t BGl_z62bigloozd2dnszd2cachezd2validityzd2timeoutz62zz__paramz00(obj_t BgL_envz00_1863)
{
{ /* Llib/param.scm 301 */
return 
BINT(
bgl_dns_cache_validity_timeout());} 

}



/* bigloo-dns-cache-validity-timeout-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zc0zz__paramz00(long BgL_vz00_19)
{
{ /* Llib/param.scm 301 */
BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
{ /* Llib/param.scm 301 */
obj_t BgL_tmp1916z00_2365;
BgL_tmp1916z00_2365 = ( 
BGl_za2bigloozd2dnszd2cachezd2validityzd2timeoutza2z00zz__paramz00 = BgL_vz00_19, BUNSPEC) ; 
BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00); BgL_tmp1916z00_2365; } 
return 
BINT(BgL_vz00_19);} 

}



/* &bigloo-dns-cache-validity-timeout-set! */
obj_t BGl_z62bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12za2zz__paramz00(obj_t BgL_envz00_1864, obj_t BgL_vz00_1865)
{
{ /* Llib/param.scm 301 */
{ /* Llib/param.scm 301 */
long BgL_auxz00_2369;
{ /* Llib/param.scm 301 */
obj_t BgL_tmpz00_2370;
if(
INTEGERP(BgL_vz00_1865))
{ /* Llib/param.scm 301 */
BgL_tmpz00_2370 = BgL_vz00_1865
; }  else 
{ 
obj_t BgL_auxz00_2373;
BgL_auxz00_2373 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1695z00zz__paramz00, 
BINT(((long)12233)), BGl_string1755z00zz__paramz00, BGl_string1708z00zz__paramz00, BgL_vz00_1865); 
FAILURE(BgL_auxz00_2373,BFALSE,BFALSE);} 
BgL_auxz00_2369 = 
(long)CINT(BgL_tmpz00_2370); } 
return 
BGl_bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zc0zz__paramz00(BgL_auxz00_2369);} } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__paramz00()
{
{ /* Llib/param.scm 15 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__paramz00()
{
{ /* Llib/param.scm 15 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__paramz00()
{
{ /* Llib/param.scm 15 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__paramz00()
{
{ /* Llib/param.scm 15 */
BGl_modulezd2initializa7ationz75zz__objectz00(((long)193422032), 
BSTRING_TO_STRING(BGl_string1756z00zz__paramz00)); 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)224967910), 
BSTRING_TO_STRING(BGl_string1756z00zz__paramz00)); 
return 
BGl_modulezd2initializa7ationz75zz__configurez00(((long)62374350), 
BSTRING_TO_STRING(BGl_string1756z00zz__paramz00));} 

}

#ifdef __cplusplus
}
#endif
