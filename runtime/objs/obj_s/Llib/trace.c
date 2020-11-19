/*===========================================================================*/
/*   (Llib/trace.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/trace.scm -indent -o objs/obj_s/Llib/trace.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL obj_t BGl_tracezd2activezf3z21zz__tracez00(obj_t);
static obj_t BGl_z62tracezd2stringzb0zz__tracez00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__tracez00 = BUNSPEC;
static obj_t BGl_symbol1851z00zz__tracez00 = BUNSPEC;
static obj_t BGl_symbol1853z00zz__tracez00 = BUNSPEC;
extern obj_t bgl_display_obj(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31203ze3ze5zz__tracez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_tracezd2portzd2zz__tracez00();
static obj_t BGl_toplevelzd2initzd2zz__tracez00();
extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_genericzd2initzd2zz__tracez00();
extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
static obj_t BGl_z62tracezd2portzb0zz__tracez00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31311ze3ze5zz__tracez00(obj_t);
static obj_t BGl_objectzd2initzd2zz__tracez00();
extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern obj_t BGl_bigloozd2tracezd2zz__paramz00();
BGL_EXPORTED_DECL obj_t BGl_tracezd2colorzd2zz__tracez00(int, obj_t);
extern bool_t BGl_bigloozd2tracezd2colorz00zz__paramz00();
extern obj_t bstring_to_symbol(obj_t);
extern obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31226ze3ze5zz__tracez00(obj_t);
static obj_t BGl_methodzd2initzd2zz__tracez00();
BGL_EXPORTED_DECL obj_t BGl_tracezd2itemzd2zz__tracez00(obj_t);
static obj_t BGl_z62tracezd2marginzb0zz__tracez00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31309ze3ze5zz__tracez00(obj_t);
extern obj_t BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62tracezd2itemzb0zz__tracez00(obj_t, obj_t);
extern obj_t string_append(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31246ze3ze5zz__tracez00(obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62tracezd2colorzb0zz__tracez00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_tracezd2marginzd2setz12z12zz__tracez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_z52withzd2tracez80zz__tracez00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_tracezd2stringzd2zz__tracez00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31257ze3ze5zz__tracez00(obj_t);
static obj_t BGl_tracezd2alistzd2getz00zz__tracez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_tracezd2boldzd2zz__tracez00(obj_t);
extern obj_t BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__tracez00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
static obj_t BGl_z62tracezd2activezf3z43zz__tracez00(obj_t, obj_t);
extern int bgl_debug();
static obj_t BGl_tracezd2alistzd2zz__tracez00();
static obj_t BGl_z62tracezd2boldzb0zz__tracez00(obj_t, obj_t);
static obj_t BGl_list1850z00zz__tracez00 = BUNSPEC;
static obj_t BGl_cnstzd2initzd2zz__tracez00();
static obj_t BGl_z62zc3z04anonymousza31293ze3ze5zz__tracez00(obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__tracez00();
static obj_t BGl_importedzd2moduleszd2initz00zz__tracez00();
extern obj_t BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
extern obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
static obj_t BGl_z62z52withzd2traceze2zz__tracez00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_tracezd2portzd2setz12z12zz__tracez00(obj_t);
static obj_t BGl_z62tracezd2portzd2setz12z70zz__tracez00(obj_t, obj_t);
extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
static obj_t BGl_za2tracezd2mutexza2zd2zz__tracez00 = BUNSPEC;
static obj_t BGl_z62tracezd2marginzd2setz12z70zz__tracez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_tracezd2marginzd2zz__tracez00();
static obj_t BGl_symbol1812z00zz__tracez00 = BUNSPEC;
static obj_t BGl_symbol1814z00zz__tracez00 = BUNSPEC;
static obj_t BGl_symbol1816z00zz__tracez00 = BUNSPEC;
static obj_t BGl_symbol1819z00zz__tracez00 = BUNSPEC;
static obj_t BGl_symbol1821z00zz__tracez00 = BUNSPEC;
static obj_t BGl_symbol1827z00zz__tracez00 = BUNSPEC;
static obj_t BGl_ttyzd2tracezd2colorz00zz__tracez00(int, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_tracezd2marginzd2setz12zd2envzc0zz__tracez00, BgL_bgl_za762traceza7d2margi1861z00, BGl_z62tracezd2marginzd2setz12z70zz__tracez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_z52withzd2tracezd2envz52zz__tracez00, BgL_bgl_za762za752withza7d2tra1862za7, BGl_z62z52withzd2traceze2zz__tracez00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tracezd2marginzd2envz00zz__tracez00, BgL_bgl_za762traceza7d2margi1863z00, BGl_z62tracezd2marginzb0zz__tracez00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tracezd2portzd2setz12zd2envzc0zz__tracez00, BgL_bgl_za762traceza7d2portza71864za7, BGl_z62tracezd2portzd2setz12z70zz__tracez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tracezd2boldzd2envz00zz__tracez00, BgL_bgl_za762traceza7d2boldza71865za7, va_generic_entry, BGl_z62tracezd2boldzb0zz__tracez00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tracezd2portzd2envz00zz__tracez00, BgL_bgl_za762traceza7d2portza71866za7, BGl_z62tracezd2portzb0zz__tracez00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string1811z00zz__tracez00, BgL_bgl_string1811za700za7za7_1867za7, "trace", 5 );
DEFINE_STRING( BGl_string1813z00zz__tracez00, BgL_bgl_string1813za700za7za7_1868za7, "port", 4 );
DEFINE_STRING( BGl_string1815z00zz__tracez00, BgL_bgl_string1815za700za7za7_1869za7, "depth", 5 );
DEFINE_STRING( BGl_string1817z00zz__tracez00, BgL_bgl_string1817za700za7za7_1870za7, "margin", 6 );
DEFINE_STRING( BGl_string1818z00zz__tracez00, BgL_bgl_string1818za700za7za7_1871za7, "", 0 );
DEFINE_STRING( BGl_string1820z00zz__tracez00, BgL_bgl_string1820za700za7za7_1872za7, "margin-level", 12 );
DEFINE_STRING( BGl_string1822z00zz__tracez00, BgL_bgl_string1822za700za7za7_1873za7, "trace-alist-get", 15 );
DEFINE_STRING( BGl_string1823z00zz__tracez00, BgL_bgl_string1823za700za7za7_1874za7, "Can't find trace-value", 22 );
DEFINE_STRING( BGl_string1824z00zz__tracez00, BgL_bgl_string1824za700za7za7_1875za7, "/tmp/4.4a/runtime/Llib/trace.scm", 32 );
DEFINE_STRING( BGl_string1825z00zz__tracez00, BgL_bgl_string1825za700za7za7_1876za7, "trace-port", 10 );
DEFINE_STRING( BGl_string1826z00zz__tracez00, BgL_bgl_string1826za700za7za7_1877za7, "output-port", 11 );
DEFINE_STRING( BGl_string1828z00zz__tracez00, BgL_bgl_string1828za700za7za7_1878za7, "trace-alist-set!", 16 );
DEFINE_STRING( BGl_string1829z00zz__tracez00, BgL_bgl_string1829za700za7za7_1879za7, "&trace-port-set!", 16 );
DEFINE_STRING( BGl_string1830z00zz__tracez00, BgL_bgl_string1830za700za7za7_1880za7, "trace-margin", 12 );
DEFINE_STRING( BGl_string1831z00zz__tracez00, BgL_bgl_string1831za700za7za7_1881za7, "bstring", 7 );
DEFINE_STRING( BGl_string1832z00zz__tracez00, BgL_bgl_string1832za700za7za7_1882za7, "&trace-margin-set!", 18 );
DEFINE_STRING( BGl_string1833z00zz__tracez00, BgL_bgl_string1833za700za7za7_1883za7, "&trace-color", 12 );
DEFINE_STRING( BGl_string1834z00zz__tracez00, BgL_bgl_string1834za700za7za7_1884za7, "bint", 4 );
DEFINE_STRING( BGl_string1835z00zz__tracez00, BgL_bgl_string1835za700za7za7_1885za7, "&<@anonymous:1203>", 18 );
DEFINE_STRING( BGl_string1836z00zz__tracez00, BgL_bgl_string1836za700za7za7_1886za7, "m", 1 );
DEFINE_STRING( BGl_string1837z00zz__tracez00, BgL_bgl_string1837za700za7za7_1887za7, "\033[0m\033[1;", 8 );
DEFINE_STRING( BGl_string1838z00zz__tracez00, BgL_bgl_string1838za700za7za7_1888za7, "for-each", 8 );
DEFINE_STRING( BGl_string1839z00zz__tracez00, BgL_bgl_string1839za700za7za7_1889za7, "list", 4 );
DEFINE_STRING( BGl_string1840z00zz__tracez00, BgL_bgl_string1840za700za7za7_1890za7, "\033[0m", 4 );
DEFINE_STRING( BGl_string1841z00zz__tracez00, BgL_bgl_string1841za700za7za7_1891za7, "trace-bold", 10 );
DEFINE_STRING( BGl_string1842z00zz__tracez00, BgL_bgl_string1842za700za7za7_1892za7, "pair", 4 );
DEFINE_STRING( BGl_string1843z00zz__tracez00, BgL_bgl_string1843za700za7za7_1893za7, "tty-trace-color", 15 );
DEFINE_STRING( BGl_string1844z00zz__tracez00, BgL_bgl_string1844za700za7za7_1894za7, "trace-item", 10 );
DEFINE_STRING( BGl_string1845z00zz__tracez00, BgL_bgl_string1845za700za7za7_1895za7, "- ", 2 );
DEFINE_STRING( BGl_string1846z00zz__tracez00, BgL_bgl_string1846za700za7za7_1896za7, "trace-active?", 13 );
DEFINE_STRING( BGl_string1847z00zz__tracez00, BgL_bgl_string1847za700za7za7_1897za7, "  |", 3 );
DEFINE_STRING( BGl_string1848z00zz__tracez00, BgL_bgl_string1848za700za7za7_1898za7, "%with-trace", 11 );
DEFINE_STRING( BGl_string1849z00zz__tracez00, BgL_bgl_string1849za700za7za7_1899za7, "%with-trace:Wrong number of arguments", 37 );
DEFINE_STRING( BGl_string1852z00zz__tracez00, BgL_bgl_string1852za700za7za7_1900za7, "funcall", 7 );
DEFINE_STRING( BGl_string1854z00zz__tracez00, BgL_bgl_string1854za700za7za7_1901za7, "thunk", 5 );
DEFINE_STRING( BGl_string1855z00zz__tracez00, BgL_bgl_string1855za700za7za7_1902za7, "&%with-trace", 12 );
DEFINE_STRING( BGl_string1856z00zz__tracez00, BgL_bgl_string1856za700za7za7_1903za7, "procedure", 9 );
DEFINE_STRING( BGl_string1857z00zz__tracez00, BgL_bgl_string1857za700za7za7_1904za7, "<@anonymous:1293>", 17 );
DEFINE_STRING( BGl_string1858z00zz__tracez00, BgL_bgl_string1858za700za7za7_1905za7, "+ ", 2 );
DEFINE_STRING( BGl_string1859z00zz__tracez00, BgL_bgl_string1859za700za7za7_1906za7, "--+ ", 4 );
DEFINE_STRING( BGl_string1860z00zz__tracez00, BgL_bgl_string1860za700za7za7_1907za7, "__trace", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tracezd2colorzd2envz00zz__tracez00, BgL_bgl_za762traceza7d2color1908z00, va_generic_entry, BGl_z62tracezd2colorzb0zz__tracez00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tracezd2itemzd2envz00zz__tracez00, BgL_bgl_za762traceza7d2itemza71909za7, va_generic_entry, BGl_z62tracezd2itemzb0zz__tracez00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tracezd2activezf3zd2envzf3zz__tracez00, BgL_bgl_za762traceza7d2activ1910z00, BGl_z62tracezd2activezf3z43zz__tracez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tracezd2stringzd2envz00zz__tracez00, BgL_bgl_za762traceza7d2strin1911z00, BGl_z62tracezd2stringzb0zz__tracez00, 0L, BUNSPEC, 1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__tracez00) );
ADD_ROOT( (void *)(&BGl_symbol1851z00zz__tracez00) );
ADD_ROOT( (void *)(&BGl_symbol1853z00zz__tracez00) );
ADD_ROOT( (void *)(&BGl_list1850z00zz__tracez00) );
ADD_ROOT( (void *)(&BGl_za2tracezd2mutexza2zd2zz__tracez00) );
ADD_ROOT( (void *)(&BGl_symbol1812z00zz__tracez00) );
ADD_ROOT( (void *)(&BGl_symbol1814z00zz__tracez00) );
ADD_ROOT( (void *)(&BGl_symbol1816z00zz__tracez00) );
ADD_ROOT( (void *)(&BGl_symbol1819z00zz__tracez00) );
ADD_ROOT( (void *)(&BGl_symbol1821z00zz__tracez00) );
ADD_ROOT( (void *)(&BGl_symbol1827z00zz__tracez00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__tracez00(long BgL_checksumz00_2179, char * BgL_fromz00_2180)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__tracez00))
{ 
BGl_requirezd2initializa7ationz75zz__tracez00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__tracez00(); 
BGl_cnstzd2initzd2zz__tracez00(); 
BGl_importedzd2moduleszd2initz00zz__tracez00(); 
return 
BGl_toplevelzd2initzd2zz__tracez00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__tracez00()
{
{ /* Llib/trace.scm 15 */
BGl_symbol1812z00zz__tracez00 = 
bstring_to_symbol(BGl_string1813z00zz__tracez00); 
BGl_symbol1814z00zz__tracez00 = 
bstring_to_symbol(BGl_string1815z00zz__tracez00); 
BGl_symbol1816z00zz__tracez00 = 
bstring_to_symbol(BGl_string1817z00zz__tracez00); 
BGl_symbol1819z00zz__tracez00 = 
bstring_to_symbol(BGl_string1820z00zz__tracez00); 
BGl_symbol1821z00zz__tracez00 = 
bstring_to_symbol(BGl_string1822z00zz__tracez00); 
BGl_symbol1827z00zz__tracez00 = 
bstring_to_symbol(BGl_string1828z00zz__tracez00); 
BGl_symbol1851z00zz__tracez00 = 
bstring_to_symbol(BGl_string1852z00zz__tracez00); 
BGl_symbol1853z00zz__tracez00 = 
bstring_to_symbol(BGl_string1854z00zz__tracez00); 
return ( 
BGl_list1850z00zz__tracez00 = 
MAKE_YOUNG_PAIR(BGl_symbol1851z00zz__tracez00, 
MAKE_YOUNG_PAIR(BGl_symbol1853z00zz__tracez00, 
MAKE_YOUNG_PAIR(BGl_symbol1853z00zz__tracez00, BNIL))), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__tracez00()
{
{ /* Llib/trace.scm 15 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__tracez00()
{
{ /* Llib/trace.scm 15 */
{ /* Llib/trace.scm 71 */
obj_t BgL_res1653z00_1596;
BgL_res1653z00_1596 = 
bgl_make_mutex(BGl_string1811z00zz__tracez00); 
return ( 
BGl_za2tracezd2mutexza2zd2zz__tracez00 = BgL_res1653z00_1596, BUNSPEC) ;} } 

}



/* trace-alist */
obj_t BGl_tracezd2alistzd2zz__tracez00()
{
{ /* Llib/trace.scm 82 */
{ /* Llib/trace.scm 83 */
obj_t BgL_alz00_1061;
BgL_alz00_1061 = 
BGL_DEBUG_ALIST_GET(); 
if(
NULLP(BgL_alz00_1061))
{ /* Llib/trace.scm 86 */
obj_t BgL_newzd2alzd2_1063;
{ /* Llib/trace.scm 86 */
obj_t BgL_arg1169z00_1064;obj_t BgL_arg1170z00_1065;obj_t BgL_arg1172z00_1066;obj_t BgL_arg1174z00_1067;
{ /* Llib/trace.scm 86 */
obj_t BgL_arg1179z00_1072;
{ /* Llib/trace.scm 86 */
obj_t BgL_res1655z00_1599;
{ /* Llib/trace.scm 86 */
obj_t BgL_tmpz00_2204;
BgL_tmpz00_2204 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res1655z00_1599 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2204); } 
BgL_arg1179z00_1072 = BgL_res1655z00_1599; } 
BgL_arg1169z00_1064 = 
MAKE_YOUNG_PAIR(BGl_symbol1812z00zz__tracez00, BgL_arg1179z00_1072); } 
BgL_arg1170z00_1065 = 
MAKE_YOUNG_PAIR(BGl_symbol1814z00zz__tracez00, 
BINT(((long)0))); 
BgL_arg1172z00_1066 = 
MAKE_YOUNG_PAIR(BGl_symbol1816z00zz__tracez00, BGl_string1818z00zz__tracez00); 
BgL_arg1174z00_1067 = 
MAKE_YOUNG_PAIR(BGl_symbol1819z00zz__tracez00, 
BINT(((long)0))); 
{ /* Llib/trace.scm 86 */
obj_t BgL_list1175z00_1068;
{ /* Llib/trace.scm 86 */
obj_t BgL_arg1176z00_1069;
{ /* Llib/trace.scm 86 */
obj_t BgL_arg1177z00_1070;
{ /* Llib/trace.scm 86 */
obj_t BgL_arg1178z00_1071;
BgL_arg1178z00_1071 = 
MAKE_YOUNG_PAIR(BgL_arg1174z00_1067, BNIL); 
BgL_arg1177z00_1070 = 
MAKE_YOUNG_PAIR(BgL_arg1172z00_1066, BgL_arg1178z00_1071); } 
BgL_arg1176z00_1069 = 
MAKE_YOUNG_PAIR(BgL_arg1170z00_1065, BgL_arg1177z00_1070); } 
BgL_list1175z00_1068 = 
MAKE_YOUNG_PAIR(BgL_arg1169z00_1064, BgL_arg1176z00_1069); } 
BgL_newzd2alzd2_1063 = BgL_list1175z00_1068; } } 
BGL_DEBUG_ALIST_SET(BgL_newzd2alzd2_1063); BUNSPEC; 
return BgL_newzd2alzd2_1063;}  else 
{ /* Llib/trace.scm 84 */
return BgL_alz00_1061;} } } 

}



/* trace-alist-get */
obj_t BGl_tracezd2alistzd2getz00zz__tracez00(obj_t BgL_alistz00_3, obj_t BgL_keyz00_4)
{
{ /* Llib/trace.scm 96 */
{ /* Llib/trace.scm 97 */
obj_t BgL_cz00_1601;
BgL_cz00_1601 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_4, BgL_alistz00_3); 
if(
PAIRP(BgL_cz00_1601))
{ /* Llib/trace.scm 98 */
return 
CDR(BgL_cz00_1601);}  else 
{ /* Llib/trace.scm 98 */
return 
BGl_errorz00zz__errorz00(BGl_symbol1821z00zz__tracez00, BGl_string1823z00zz__tracez00, BgL_keyz00_4);} } } 

}



/* trace-port */
BGL_EXPORTED_DEF obj_t BGl_tracezd2portzd2zz__tracez00()
{
{ /* Llib/trace.scm 114 */
{ /* Llib/trace.scm 115 */
obj_t BgL_arg1186z00_1609;
BgL_arg1186z00_1609 = 
BGl_tracezd2alistzd2zz__tracez00(); 
{ /* Llib/trace.scm 115 */
obj_t BgL_keyz00_1610;
BgL_keyz00_1610 = BGl_symbol1812z00zz__tracez00; 
{ /* Llib/trace.scm 97 */
obj_t BgL_cz00_1611;
BgL_cz00_1611 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1610, BgL_arg1186z00_1609); 
if(
PAIRP(BgL_cz00_1611))
{ /* Llib/trace.scm 99 */
obj_t BgL_aux1755z00_2075;
BgL_aux1755z00_2075 = 
CDR(BgL_cz00_1611); 
if(
OUTPUT_PORTP(BgL_aux1755z00_2075))
{ /* Llib/trace.scm 99 */
return BgL_aux1755z00_2075;}  else 
{ 
obj_t BgL_auxz00_2230;
BgL_auxz00_2230 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)3521)), BGl_string1825z00zz__tracez00, BGl_string1826z00zz__tracez00, BgL_aux1755z00_2075); 
FAILURE(BgL_auxz00_2230,BFALSE,BFALSE);} }  else 
{ /* Llib/trace.scm 100 */
obj_t BgL_aux1757z00_2077;
BgL_aux1757z00_2077 = 
BGl_errorz00zz__errorz00(BGl_symbol1821z00zz__tracez00, BGl_string1823z00zz__tracez00, BgL_keyz00_1610); 
if(
OUTPUT_PORTP(BgL_aux1757z00_2077))
{ /* Llib/trace.scm 100 */
return BgL_aux1757z00_2077;}  else 
{ 
obj_t BgL_auxz00_2237;
BgL_auxz00_2237 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)3532)), BGl_string1825z00zz__tracez00, BGl_string1826z00zz__tracez00, BgL_aux1757z00_2077); 
FAILURE(BgL_auxz00_2237,BFALSE,BFALSE);} } } } } } 

}



/* &trace-port */
obj_t BGl_z62tracezd2portzb0zz__tracez00(obj_t BgL_envz00_2026)
{
{ /* Llib/trace.scm 114 */
return 
BGl_tracezd2portzd2zz__tracez00();} 

}



/* trace-port-set! */
BGL_EXPORTED_DEF obj_t BGl_tracezd2portzd2setz12z12zz__tracez00(obj_t BgL_pz00_8)
{
{ /* Llib/trace.scm 120 */
{ /* Llib/trace.scm 121 */
obj_t BgL_arg1190z00_1615;
BgL_arg1190z00_1615 = 
BGl_tracezd2alistzd2zz__tracez00(); 
{ /* Llib/trace.scm 121 */
obj_t BgL_keyz00_1616;
BgL_keyz00_1616 = BGl_symbol1812z00zz__tracez00; 
{ /* Llib/trace.scm 106 */
obj_t BgL_cz00_1617;
BgL_cz00_1617 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1616, BgL_arg1190z00_1615); 
if(
PAIRP(BgL_cz00_1617))
{ /* Llib/trace.scm 107 */
return 
SET_CDR(BgL_cz00_1617, BgL_pz00_8);}  else 
{ /* Llib/trace.scm 107 */
return 
BGl_errorz00zz__errorz00(BGl_symbol1827z00zz__tracez00, BGl_string1823z00zz__tracez00, BgL_keyz00_1616);} } } } } 

}



/* &trace-port-set! */
obj_t BGl_z62tracezd2portzd2setz12z70zz__tracez00(obj_t BgL_envz00_2027, obj_t BgL_pz00_2028)
{
{ /* Llib/trace.scm 120 */
{ /* Llib/trace.scm 121 */
obj_t BgL_auxz00_2248;
if(
OUTPUT_PORTP(BgL_pz00_2028))
{ /* Llib/trace.scm 121 */
BgL_auxz00_2248 = BgL_pz00_2028
; }  else 
{ 
obj_t BgL_auxz00_2251;
BgL_auxz00_2251 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)4543)), BGl_string1829z00zz__tracez00, BGl_string1826z00zz__tracez00, BgL_pz00_2028); 
FAILURE(BgL_auxz00_2251,BFALSE,BFALSE);} 
return 
BGl_tracezd2portzd2setz12z12zz__tracez00(BgL_auxz00_2248);} } 

}



/* trace-margin */
BGL_EXPORTED_DEF obj_t BGl_tracezd2marginzd2zz__tracez00()
{
{ /* Llib/trace.scm 126 */
{ /* Llib/trace.scm 127 */
obj_t BgL_arg1194z00_1621;
BgL_arg1194z00_1621 = 
BGl_tracezd2alistzd2zz__tracez00(); 
{ /* Llib/trace.scm 127 */
obj_t BgL_keyz00_1622;
BgL_keyz00_1622 = BGl_symbol1816z00zz__tracez00; 
{ /* Llib/trace.scm 97 */
obj_t BgL_cz00_1623;
BgL_cz00_1623 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1622, BgL_arg1194z00_1621); 
if(
PAIRP(BgL_cz00_1623))
{ /* Llib/trace.scm 99 */
obj_t BgL_aux1761z00_2081;
BgL_aux1761z00_2081 = 
CDR(BgL_cz00_1623); 
if(
STRINGP(BgL_aux1761z00_2081))
{ /* Llib/trace.scm 99 */
return BgL_aux1761z00_2081;}  else 
{ 
obj_t BgL_auxz00_2263;
BgL_auxz00_2263 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)3521)), BGl_string1830z00zz__tracez00, BGl_string1831z00zz__tracez00, BgL_aux1761z00_2081); 
FAILURE(BgL_auxz00_2263,BFALSE,BFALSE);} }  else 
{ /* Llib/trace.scm 100 */
obj_t BgL_aux1763z00_2083;
BgL_aux1763z00_2083 = 
BGl_errorz00zz__errorz00(BGl_symbol1821z00zz__tracez00, BGl_string1823z00zz__tracez00, BgL_keyz00_1622); 
if(
STRINGP(BgL_aux1763z00_2083))
{ /* Llib/trace.scm 100 */
return BgL_aux1763z00_2083;}  else 
{ 
obj_t BgL_auxz00_2270;
BgL_auxz00_2270 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)3532)), BGl_string1830z00zz__tracez00, BGl_string1831z00zz__tracez00, BgL_aux1763z00_2083); 
FAILURE(BgL_auxz00_2270,BFALSE,BFALSE);} } } } } } 

}



/* &trace-margin */
obj_t BGl_z62tracezd2marginzb0zz__tracez00(obj_t BgL_envz00_2029)
{
{ /* Llib/trace.scm 126 */
return 
BGl_tracezd2marginzd2zz__tracez00();} 

}



/* trace-margin-set! */
BGL_EXPORTED_DEF obj_t BGl_tracezd2marginzd2setz12z12zz__tracez00(obj_t BgL_mz00_9)
{
{ /* Llib/trace.scm 132 */
{ /* Llib/trace.scm 133 */
obj_t BgL_arg1197z00_1627;
BgL_arg1197z00_1627 = 
BGl_tracezd2alistzd2zz__tracez00(); 
{ /* Llib/trace.scm 133 */
obj_t BgL_keyz00_1628;
BgL_keyz00_1628 = BGl_symbol1816z00zz__tracez00; 
{ /* Llib/trace.scm 106 */
obj_t BgL_cz00_1629;
BgL_cz00_1629 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1628, BgL_arg1197z00_1627); 
if(
PAIRP(BgL_cz00_1629))
{ /* Llib/trace.scm 107 */
return 
SET_CDR(BgL_cz00_1629, BgL_mz00_9);}  else 
{ /* Llib/trace.scm 107 */
return 
BGl_errorz00zz__errorz00(BGl_symbol1827z00zz__tracez00, BGl_string1823z00zz__tracez00, BgL_keyz00_1628);} } } } } 

}



/* &trace-margin-set! */
obj_t BGl_z62tracezd2marginzd2setz12z70zz__tracez00(obj_t BgL_envz00_2030, obj_t BgL_mz00_2031)
{
{ /* Llib/trace.scm 132 */
{ /* Llib/trace.scm 133 */
obj_t BgL_auxz00_2281;
if(
STRINGP(BgL_mz00_2031))
{ /* Llib/trace.scm 133 */
BgL_auxz00_2281 = BgL_mz00_2031
; }  else 
{ 
obj_t BgL_auxz00_2284;
BgL_auxz00_2284 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)5131)), BGl_string1832z00zz__tracez00, BGl_string1831z00zz__tracez00, BgL_mz00_2031); 
FAILURE(BgL_auxz00_2284,BFALSE,BFALSE);} 
return 
BGl_tracezd2marginzd2setz12z12zz__tracez00(BgL_auxz00_2281);} } 

}



/* trace-color */
BGL_EXPORTED_DEF obj_t BGl_tracezd2colorzd2zz__tracez00(int BgL_colz00_10, obj_t BgL_oz00_11)
{
{ /* Llib/trace.scm 138 */
{ /* Llib/trace.scm 140 */
obj_t BgL_arg1201z00_1081;
if(
BGl_bigloozd2tracezd2colorz00zz__paramz00())
{ /* Llib/trace.scm 141 */
obj_t BgL_zc3z04anonymousza31203ze3z87_2032;
BgL_zc3z04anonymousza31203ze3z87_2032 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31203ze3ze5zz__tracez00, 
(int)(((long)0)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31203ze3z87_2032, 
(int)(((long)0)), 
BINT(BgL_colz00_10)); 
PROCEDURE_SET(BgL_zc3z04anonymousza31203ze3z87_2032, 
(int)(((long)1)), BgL_oz00_11); 
BgL_arg1201z00_1081 = BgL_zc3z04anonymousza31203ze3z87_2032; }  else 
{ /* Llib/trace.scm 145 */
obj_t BgL_zc3z04anonymousza31226ze3z87_2033;
BgL_zc3z04anonymousza31226ze3z87_2033 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31226ze3ze5zz__tracez00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31226ze3z87_2033, 
(int)(((long)0)), BgL_oz00_11); 
BgL_arg1201z00_1081 = BgL_zc3z04anonymousza31226ze3z87_2033; } 
return 
BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(BgL_arg1201z00_1081);} } 

}



/* &trace-color */
obj_t BGl_z62tracezd2colorzb0zz__tracez00(obj_t BgL_envz00_2034, obj_t BgL_colz00_2035, obj_t BgL_oz00_2036)
{
{ /* Llib/trace.scm 138 */
{ /* Llib/trace.scm 140 */
int BgL_auxz00_2305;
{ /* Llib/trace.scm 140 */
obj_t BgL_tmpz00_2306;
if(
INTEGERP(BgL_colz00_2035))
{ /* Llib/trace.scm 140 */
BgL_tmpz00_2306 = BgL_colz00_2035
; }  else 
{ 
obj_t BgL_auxz00_2309;
BgL_auxz00_2309 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)5447)), BGl_string1833z00zz__tracez00, BGl_string1834z00zz__tracez00, BgL_colz00_2035); 
FAILURE(BgL_auxz00_2309,BFALSE,BFALSE);} 
BgL_auxz00_2305 = 
CINT(BgL_tmpz00_2306); } 
return 
BGl_tracezd2colorzd2zz__tracez00(BgL_auxz00_2305, BgL_oz00_2036);} } 

}



/* &<@anonymous:1203> */
obj_t BGl_z62zc3z04anonymousza31203ze3ze5zz__tracez00(obj_t BgL_envz00_2037)
{
{ /* Llib/trace.scm 141 */
{ /* Llib/trace.scm 142 */
int BgL_colz00_2038;obj_t BgL_oz00_2039;
{ /* Llib/trace.scm 142 */
obj_t BgL_tmpz00_2315;
{ /* Llib/trace.scm 142 */
obj_t BgL_aux1769z00_2089;
BgL_aux1769z00_2089 = 
PROCEDURE_REF(BgL_envz00_2037, 
(int)(((long)0))); 
if(
INTEGERP(BgL_aux1769z00_2089))
{ /* Llib/trace.scm 142 */
BgL_tmpz00_2315 = BgL_aux1769z00_2089
; }  else 
{ 
obj_t BgL_auxz00_2320;
BgL_auxz00_2320 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)5492)), BGl_string1835z00zz__tracez00, BGl_string1834z00zz__tracez00, BgL_aux1769z00_2089); 
FAILURE(BgL_auxz00_2320,BFALSE,BFALSE);} } 
BgL_colz00_2038 = 
CINT(BgL_tmpz00_2315); } 
BgL_oz00_2039 = 
PROCEDURE_REF(BgL_envz00_2037, 
(int)(((long)1))); 
{ /* Llib/trace.scm 142 */
long BgL_arg1208z00_2133;
BgL_arg1208z00_2133 = 
(((long)31)+
(long)(BgL_colz00_2038)); 
{ /* Llib/trace.scm 142 */
obj_t BgL_list1209z00_2134;
{ /* Llib/trace.scm 142 */
obj_t BgL_arg1211z00_2135;
{ /* Llib/trace.scm 142 */
obj_t BgL_arg1216z00_2136;
BgL_arg1216z00_2136 = 
MAKE_YOUNG_PAIR(BGl_string1836z00zz__tracez00, BNIL); 
BgL_arg1211z00_2135 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg1208z00_2133), BgL_arg1216z00_2136); } 
BgL_list1209z00_2134 = 
MAKE_YOUNG_PAIR(BGl_string1837z00zz__tracez00, BgL_arg1211z00_2135); } 
BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list1209z00_2134); } } 
{ 
obj_t BgL_l1073z00_2138;
BgL_l1073z00_2138 = BgL_oz00_2039; 
BgL_zc3z04anonymousza31217ze3z87_2137:
if(
PAIRP(BgL_l1073z00_2138))
{ /* Llib/trace.scm 143 */
{ /* Llib/trace.scm 143 */
obj_t BgL_arg1221z00_2139;
BgL_arg1221z00_2139 = 
CAR(BgL_l1073z00_2138); 
{ /* Llib/trace.scm 143 */
obj_t BgL_portz00_2140;
{ /* Llib/trace.scm 143 */
obj_t BgL_res1665z00_2141;
{ /* Llib/trace.scm 143 */
obj_t BgL_tmpz00_2337;
BgL_tmpz00_2337 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res1665z00_2141 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2337); } 
BgL_portz00_2140 = BgL_res1665z00_2141; } 
{ /* Llib/trace.scm 143 */

BGl_displayzd2circlezd2zz__pp_circlez00(BgL_arg1221z00_2139, BgL_portz00_2140); } } } 
{ 
obj_t BgL_l1073z00_2341;
BgL_l1073z00_2341 = 
CDR(BgL_l1073z00_2138); 
BgL_l1073z00_2138 = BgL_l1073z00_2341; 
goto BgL_zc3z04anonymousza31217ze3z87_2137;} }  else 
{ /* Llib/trace.scm 143 */
if(
NULLP(BgL_l1073z00_2138))
{ /* Llib/trace.scm 143 */BTRUE; }  else 
{ /* Llib/trace.scm 143 */
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string1838z00zz__tracez00, BGl_string1839z00zz__tracez00, BgL_l1073z00_2138, BGl_string1824z00zz__tracez00, 
BINT(((long)5537))); } } } 
{ /* Llib/trace.scm 144 */
obj_t BgL_arg1225z00_2142;
{ /* Llib/trace.scm 144 */
obj_t BgL_res1667z00_2143;
{ /* Llib/trace.scm 144 */
obj_t BgL_tmpz00_2347;
BgL_tmpz00_2347 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res1667z00_2143 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2347); } 
BgL_arg1225z00_2142 = BgL_res1667z00_2143; } 
return 
bgl_display_string(BGl_string1840z00zz__tracez00, BgL_arg1225z00_2142);} } } 

}



/* &<@anonymous:1226> */
obj_t BGl_z62zc3z04anonymousza31226ze3ze5zz__tracez00(obj_t BgL_envz00_2040)
{
{ /* Llib/trace.scm 145 */
{ /* Llib/trace.scm 146 */
obj_t BgL_oz00_2041;
BgL_oz00_2041 = 
PROCEDURE_REF(BgL_envz00_2040, 
(int)(((long)0))); 
{ 
obj_t BgL_l1075z00_2145;
BgL_l1075z00_2145 = BgL_oz00_2041; 
BgL_zc3z04anonymousza31227ze3z87_2144:
if(
PAIRP(BgL_l1075z00_2145))
{ /* Llib/trace.scm 146 */
{ /* Llib/trace.scm 146 */
obj_t BgL_arg1229z00_2146;
BgL_arg1229z00_2146 = 
CAR(BgL_l1075z00_2145); 
{ /* Llib/trace.scm 146 */
obj_t BgL_portz00_2147;
{ /* Llib/trace.scm 146 */
obj_t BgL_res1669z00_2148;
{ /* Llib/trace.scm 146 */
obj_t BgL_tmpz00_2356;
BgL_tmpz00_2356 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res1669z00_2148 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2356); } 
BgL_portz00_2147 = BgL_res1669z00_2148; } 
{ /* Llib/trace.scm 146 */

BGl_displayzd2circlezd2zz__pp_circlez00(BgL_arg1229z00_2146, BgL_portz00_2147); } } } 
{ 
obj_t BgL_l1075z00_2360;
BgL_l1075z00_2360 = 
CDR(BgL_l1075z00_2145); 
BgL_l1075z00_2145 = BgL_l1075z00_2360; 
goto BgL_zc3z04anonymousza31227ze3z87_2144;} }  else 
{ /* Llib/trace.scm 146 */
if(
NULLP(BgL_l1075z00_2145))
{ /* Llib/trace.scm 146 */
return BTRUE;}  else 
{ /* Llib/trace.scm 146 */
return 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string1838z00zz__tracez00, BGl_string1839z00zz__tracez00, BgL_l1075z00_2145, BGl_string1824z00zz__tracez00, 
BINT(((long)5609)));} } } } } 

}



/* trace-bold */
BGL_EXPORTED_DEF obj_t BGl_tracezd2boldzd2zz__tracez00(obj_t BgL_oz00_12)
{
{ /* Llib/trace.scm 151 */
{ /* Llib/trace.scm 152 */
obj_t BgL_runner1236z00_1112;
{ /* Llib/trace.scm 152 */
obj_t BgL_list1234z00_1110;
BgL_list1234z00_1110 = 
MAKE_YOUNG_PAIR(BgL_oz00_12, BNIL); 
BgL_runner1236z00_1112 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
BINT(((long)-30)), BgL_list1234z00_1110); } 
{ /* Llib/trace.scm 152 */
int BgL_aux1235z00_1111;
{ /* Llib/trace.scm 152 */
obj_t BgL_pairz00_1651;
{ /* Llib/trace.scm 152 */
obj_t BgL_aux1771z00_2091;
BgL_aux1771z00_2091 = BgL_runner1236z00_1112; 
if(
PAIRP(BgL_aux1771z00_2091))
{ /* Llib/trace.scm 152 */
BgL_pairz00_1651 = BgL_aux1771z00_2091; }  else 
{ 
obj_t BgL_auxz00_2371;
BgL_auxz00_2371 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)5892)), BGl_string1841z00zz__tracez00, BGl_string1842z00zz__tracez00, BgL_aux1771z00_2091); 
FAILURE(BgL_auxz00_2371,BFALSE,BFALSE);} } 
{ /* Llib/trace.scm 152 */
obj_t BgL_tmpz00_2375;
{ /* Llib/trace.scm 152 */
obj_t BgL_aux1773z00_2093;
BgL_aux1773z00_2093 = 
CAR(BgL_pairz00_1651); 
if(
INTEGERP(BgL_aux1773z00_2093))
{ /* Llib/trace.scm 152 */
BgL_tmpz00_2375 = BgL_aux1773z00_2093
; }  else 
{ 
obj_t BgL_auxz00_2379;
BgL_auxz00_2379 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)5892)), BGl_string1841z00zz__tracez00, BGl_string1834z00zz__tracez00, BgL_aux1773z00_2093); 
FAILURE(BgL_auxz00_2379,BFALSE,BFALSE);} } 
BgL_aux1235z00_1111 = 
CINT(BgL_tmpz00_2375); } } 
{ /* Llib/trace.scm 152 */
obj_t BgL_pairz00_1652;
{ /* Llib/trace.scm 152 */
obj_t BgL_aux1775z00_2095;
BgL_aux1775z00_2095 = BgL_runner1236z00_1112; 
if(
PAIRP(BgL_aux1775z00_2095))
{ /* Llib/trace.scm 152 */
BgL_pairz00_1652 = BgL_aux1775z00_2095; }  else 
{ 
obj_t BgL_auxz00_2386;
BgL_auxz00_2386 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)5892)), BGl_string1841z00zz__tracez00, BGl_string1842z00zz__tracez00, BgL_aux1775z00_2095); 
FAILURE(BgL_auxz00_2386,BFALSE,BFALSE);} } 
BgL_runner1236z00_1112 = 
CDR(BgL_pairz00_1652); } 
return 
BGl_tracezd2colorzd2zz__tracez00(BgL_aux1235z00_1111, BgL_runner1236z00_1112);} } } 

}



/* &trace-bold */
obj_t BGl_z62tracezd2boldzb0zz__tracez00(obj_t BgL_envz00_2042, obj_t BgL_oz00_2043)
{
{ /* Llib/trace.scm 151 */
return 
BGl_tracezd2boldzd2zz__tracez00(BgL_oz00_2043);} 

}



/* tty-trace-color */
obj_t BGl_ttyzd2tracezd2colorz00zz__tracez00(int BgL_colz00_13, obj_t BgL_oz00_14)
{
{ /* Llib/trace.scm 157 */
{ /* Llib/trace.scm 158 */
bool_t BgL_test1935z00_2393;
{ /* Llib/trace.scm 158 */
obj_t BgL_arg1254z00_1131;
{ /* Llib/trace.scm 158 */
obj_t BgL_res1671z00_1654;
{ /* Llib/trace.scm 115 */
obj_t BgL_arg1186z00_1653;
BgL_arg1186z00_1653 = 
BGl_tracezd2alistzd2zz__tracez00(); 
{ /* Llib/trace.scm 115 */
obj_t BgL_aux1777z00_2097;
BgL_aux1777z00_2097 = 
BGl_tracezd2alistzd2getz00zz__tracez00(BgL_arg1186z00_1653, BGl_symbol1812z00zz__tracez00); 
if(
OUTPUT_PORTP(BgL_aux1777z00_2097))
{ /* Llib/trace.scm 115 */
BgL_res1671z00_1654 = BgL_aux1777z00_2097; }  else 
{ 
obj_t BgL_auxz00_2398;
BgL_auxz00_2398 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)4232)), BGl_string1843z00zz__tracez00, BGl_string1826z00zz__tracez00, BgL_aux1777z00_2097); 
FAILURE(BgL_auxz00_2398,BFALSE,BFALSE);} } } 
BgL_arg1254z00_1131 = BgL_res1671z00_1654; } 
{ /* Llib/trace.scm 158 */
bool_t BgL_res1672z00_1656;
BgL_res1672z00_1656 = 
bgl_port_isatty(BgL_arg1254z00_1131); 
BgL_test1935z00_2393 = BgL_res1672z00_1656; } } 
if(BgL_test1935z00_2393)
{ /* Llib/trace.scm 159 */
obj_t BgL_runner1243z00_1117;
{ /* Llib/trace.scm 159 */
obj_t BgL_list1241z00_1115;
BgL_list1241z00_1115 = 
MAKE_YOUNG_PAIR(BgL_oz00_14, BNIL); 
BgL_runner1243z00_1117 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
BINT(BgL_colz00_13), BgL_list1241z00_1115); } 
{ /* Llib/trace.scm 159 */
int BgL_aux1242z00_1116;
{ /* Llib/trace.scm 159 */
obj_t BgL_pairz00_1657;
{ /* Llib/trace.scm 159 */
obj_t BgL_aux1779z00_2099;
BgL_aux1779z00_2099 = BgL_runner1243z00_1117; 
if(
PAIRP(BgL_aux1779z00_2099))
{ /* Llib/trace.scm 159 */
BgL_pairz00_1657 = BgL_aux1779z00_2099; }  else 
{ 
obj_t BgL_auxz00_2408;
BgL_auxz00_2408 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)6230)), BGl_string1843z00zz__tracez00, BGl_string1842z00zz__tracez00, BgL_aux1779z00_2099); 
FAILURE(BgL_auxz00_2408,BFALSE,BFALSE);} } 
{ /* Llib/trace.scm 159 */
obj_t BgL_tmpz00_2412;
{ /* Llib/trace.scm 159 */
obj_t BgL_aux1781z00_2101;
BgL_aux1781z00_2101 = 
CAR(BgL_pairz00_1657); 
if(
INTEGERP(BgL_aux1781z00_2101))
{ /* Llib/trace.scm 159 */
BgL_tmpz00_2412 = BgL_aux1781z00_2101
; }  else 
{ 
obj_t BgL_auxz00_2416;
BgL_auxz00_2416 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)6230)), BGl_string1843z00zz__tracez00, BGl_string1834z00zz__tracez00, BgL_aux1781z00_2101); 
FAILURE(BgL_auxz00_2416,BFALSE,BFALSE);} } 
BgL_aux1242z00_1116 = 
CINT(BgL_tmpz00_2412); } } 
{ /* Llib/trace.scm 159 */
obj_t BgL_pairz00_1658;
{ /* Llib/trace.scm 159 */
obj_t BgL_aux1783z00_2103;
BgL_aux1783z00_2103 = BgL_runner1243z00_1117; 
if(
PAIRP(BgL_aux1783z00_2103))
{ /* Llib/trace.scm 159 */
BgL_pairz00_1658 = BgL_aux1783z00_2103; }  else 
{ 
obj_t BgL_auxz00_2423;
BgL_auxz00_2423 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)6230)), BGl_string1843z00zz__tracez00, BGl_string1842z00zz__tracez00, BgL_aux1783z00_2103); 
FAILURE(BgL_auxz00_2423,BFALSE,BFALSE);} } 
BgL_runner1243z00_1117 = 
CDR(BgL_pairz00_1658); } 
return 
BGl_tracezd2colorzd2zz__tracez00(BgL_aux1242z00_1116, BgL_runner1243z00_1117);} }  else 
{ /* Llib/trace.scm 162 */
obj_t BgL_zc3z04anonymousza31246ze3z87_2044;
BgL_zc3z04anonymousza31246ze3z87_2044 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31246ze3ze5zz__tracez00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31246ze3z87_2044, 
(int)(((long)0)), BgL_oz00_14); 
return 
BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(BgL_zc3z04anonymousza31246ze3z87_2044);} } } 

}



/* &<@anonymous:1246> */
obj_t BGl_z62zc3z04anonymousza31246ze3ze5zz__tracez00(obj_t BgL_envz00_2045)
{
{ /* Llib/trace.scm 161 */
{ /* Llib/trace.scm 162 */
obj_t BgL_oz00_2046;
BgL_oz00_2046 = 
PROCEDURE_REF(BgL_envz00_2045, 
(int)(((long)0))); 
{ 
obj_t BgL_l1077z00_2150;
BgL_l1077z00_2150 = BgL_oz00_2046; 
BgL_zc3z04anonymousza31247ze3z87_2149:
if(
PAIRP(BgL_l1077z00_2150))
{ /* Llib/trace.scm 162 */
{ /* Llib/trace.scm 162 */
obj_t BgL_arg1250z00_2151;
BgL_arg1250z00_2151 = 
CAR(BgL_l1077z00_2150); 
{ /* Llib/trace.scm 162 */
obj_t BgL_portz00_2152;
{ /* Llib/trace.scm 162 */
obj_t BgL_res1674z00_2153;
{ /* Llib/trace.scm 162 */
obj_t BgL_tmpz00_2440;
BgL_tmpz00_2440 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res1674z00_2153 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2440); } 
BgL_portz00_2152 = BgL_res1674z00_2153; } 
{ /* Llib/trace.scm 162 */

BGl_displayzd2circlezd2zz__pp_circlez00(BgL_arg1250z00_2151, BgL_portz00_2152); } } } 
{ 
obj_t BgL_l1077z00_2444;
BgL_l1077z00_2444 = 
CDR(BgL_l1077z00_2150); 
BgL_l1077z00_2150 = BgL_l1077z00_2444; 
goto BgL_zc3z04anonymousza31247ze3z87_2149;} }  else 
{ /* Llib/trace.scm 162 */
if(
NULLP(BgL_l1077z00_2150))
{ /* Llib/trace.scm 162 */
return BTRUE;}  else 
{ /* Llib/trace.scm 162 */
return 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string1838z00zz__tracez00, BGl_string1839z00zz__tracez00, BgL_l1077z00_2150, BGl_string1824z00zz__tracez00, 
BINT(((long)6306)));} } } } } 

}



/* trace-string */
BGL_EXPORTED_DEF obj_t BGl_tracezd2stringzd2zz__tracez00(obj_t BgL_oz00_15)
{
{ /* Llib/trace.scm 167 */
{ /* Llib/trace.scm 170 */
obj_t BgL_zc3z04anonymousza31257ze3z87_2047;
BgL_zc3z04anonymousza31257ze3z87_2047 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31257ze3ze5zz__tracez00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31257ze3z87_2047, 
(int)(((long)0)), BgL_oz00_15); 
return 
BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(BgL_zc3z04anonymousza31257ze3z87_2047);} } 

}



/* &trace-string */
obj_t BGl_z62tracezd2stringzb0zz__tracez00(obj_t BgL_envz00_2048, obj_t BgL_oz00_2049)
{
{ /* Llib/trace.scm 167 */
return 
BGl_tracezd2stringzd2zz__tracez00(BgL_oz00_2049);} 

}



/* &<@anonymous:1257> */
obj_t BGl_z62zc3z04anonymousza31257ze3ze5zz__tracez00(obj_t BgL_envz00_2050)
{
{ /* Llib/trace.scm 169 */
return 
BGl_writez00zz__r4_output_6_10_3z00(
PROCEDURE_REF(BgL_envz00_2050, 
(int)(((long)0))), BNIL);} 

}



/* trace-item */
BGL_EXPORTED_DEF obj_t BGl_tracezd2itemzd2zz__tracez00(obj_t BgL_argsz00_16)
{
{ /* Llib/trace.scm 175 */
{ /* Llib/trace.scm 176 */
bool_t BgL_test1942z00_2460;
{ /* Llib/trace.scm 176 */
int BgL_arg1284z00_1157;
BgL_arg1284z00_1157 = 
bgl_debug(); 
BgL_test1942z00_2460 = 
(
(long)(BgL_arg1284z00_1157)>((long)0)); } 
if(BgL_test1942z00_2460)
{ /* Llib/trace.scm 177 */
obj_t BgL_alz00_1138;
BgL_alz00_1138 = 
BGl_tracezd2alistzd2zz__tracez00(); 
{ /* Llib/trace.scm 178 */
bool_t BgL_test1943z00_2465;
{ /* Llib/trace.scm 178 */
obj_t BgL_arg1282z00_1156;
{ /* Llib/trace.scm 178 */
obj_t BgL_keyz00_1670;
BgL_keyz00_1670 = BGl_symbol1819z00zz__tracez00; 
{ /* Llib/trace.scm 97 */
obj_t BgL_cz00_1671;
BgL_cz00_1671 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1670, BgL_alz00_1138); 
if(
PAIRP(BgL_cz00_1671))
{ /* Llib/trace.scm 98 */
BgL_arg1282z00_1156 = 
CDR(BgL_cz00_1671); }  else 
{ /* Llib/trace.scm 98 */
BgL_arg1282z00_1156 = 
BGl_errorz00zz__errorz00(BGl_symbol1821z00zz__tracez00, BGl_string1823z00zz__tracez00, BgL_keyz00_1670); } } } 
BgL_test1943z00_2465 = 
CBOOL(
BGl_tracezd2activezf3z21zz__tracez00(BgL_arg1282z00_1156)); } 
if(BgL_test1943z00_2465)
{ /* Llib/trace.scm 179 */
obj_t BgL_pz00_1141;
{ /* Llib/trace.scm 179 */
obj_t BgL_res1678z00_1676;
{ /* Llib/trace.scm 115 */
obj_t BgL_arg1186z00_1675;
BgL_arg1186z00_1675 = 
BGl_tracezd2alistzd2zz__tracez00(); 
{ /* Llib/trace.scm 115 */
obj_t BgL_aux1785z00_2105;
BgL_aux1785z00_2105 = 
BGl_tracezd2alistzd2getz00zz__tracez00(BgL_arg1186z00_1675, BGl_symbol1812z00zz__tracez00); 
if(
OUTPUT_PORTP(BgL_aux1785z00_2105))
{ /* Llib/trace.scm 115 */
BgL_res1678z00_1676 = BgL_aux1785z00_2105; }  else 
{ 
obj_t BgL_auxz00_2477;
BgL_auxz00_2477 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)4232)), BGl_string1844z00zz__tracez00, BGl_string1826z00zz__tracez00, BgL_aux1785z00_2105); 
FAILURE(BgL_auxz00_2477,BFALSE,BFALSE);} } } 
BgL_pz00_1141 = BgL_res1678z00_1676; } 
{ /* Llib/trace.scm 180 */
obj_t BgL_mutex1270z00_1142;
BgL_mutex1270z00_1142 = BGl_za2tracezd2mutexza2zd2zz__tracez00; 
{ /* Llib/trace.scm 180 */
obj_t BgL_top1947z00_2482;
BgL_top1947z00_2482 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BgL_mutex1270z00_1142); 
BGL_EXITD_PUSH_PROTECT(BgL_top1947z00_2482, BgL_mutex1270z00_1142); BUNSPEC; 
{ /* Llib/trace.scm 180 */
obj_t BgL_tmp1946z00_2481;
{ /* Llib/trace.scm 181 */
obj_t BgL_arg1271z00_1143;
{ /* Llib/trace.scm 181 */
obj_t BgL_keyz00_1677;
BgL_keyz00_1677 = BGl_symbol1816z00zz__tracez00; 
{ /* Llib/trace.scm 97 */
obj_t BgL_cz00_1678;
BgL_cz00_1678 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1677, BgL_alz00_1138); 
if(
PAIRP(BgL_cz00_1678))
{ /* Llib/trace.scm 98 */
BgL_arg1271z00_1143 = 
CDR(BgL_cz00_1678); }  else 
{ /* Llib/trace.scm 98 */
BgL_arg1271z00_1143 = 
BGl_errorz00zz__errorz00(BGl_symbol1821z00zz__tracez00, BGl_string1823z00zz__tracez00, BgL_keyz00_1677); } } } 
bgl_display_obj(BgL_arg1271z00_1143, BgL_pz00_1141); } 
{ /* Llib/trace.scm 182 */
obj_t BgL_arg1273z00_1144;
{ /* Llib/trace.scm 182 */
long BgL_arg1274z00_1145;
{ /* Llib/trace.scm 182 */
obj_t BgL_arg1276z00_1147;
{ /* Llib/trace.scm 182 */
obj_t BgL_keyz00_1682;
BgL_keyz00_1682 = BGl_symbol1814z00zz__tracez00; 
{ /* Llib/trace.scm 97 */
obj_t BgL_cz00_1683;
BgL_cz00_1683 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1682, BgL_alz00_1138); 
if(
PAIRP(BgL_cz00_1683))
{ /* Llib/trace.scm 98 */
BgL_arg1276z00_1147 = 
CDR(BgL_cz00_1683); }  else 
{ /* Llib/trace.scm 98 */
BgL_arg1276z00_1147 = 
BGl_errorz00zz__errorz00(BGl_symbol1821z00zz__tracez00, BGl_string1823z00zz__tracez00, BgL_keyz00_1682); } } } 
{ /* Llib/trace.scm 182 */
long BgL_za71za7_1687;
{ /* Llib/trace.scm 182 */
obj_t BgL_tmpz00_2497;
if(
INTEGERP(BgL_arg1276z00_1147))
{ /* Llib/trace.scm 182 */
BgL_tmpz00_2497 = BgL_arg1276z00_1147
; }  else 
{ 
obj_t BgL_auxz00_2500;
BgL_auxz00_2500 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)7188)), BGl_string1844z00zz__tracez00, BGl_string1834z00zz__tracez00, BgL_arg1276z00_1147); 
FAILURE(BgL_auxz00_2500,BFALSE,BFALSE);} 
BgL_za71za7_1687 = 
(long)CINT(BgL_tmpz00_2497); } 
BgL_arg1274z00_1145 = 
(BgL_za71za7_1687-((long)1)); } } 
{ /* Llib/trace.scm 182 */
obj_t BgL_list1275z00_1146;
BgL_list1275z00_1146 = 
MAKE_YOUNG_PAIR(BGl_string1845z00zz__tracez00, BNIL); 
BgL_arg1273z00_1144 = 
BGl_ttyzd2tracezd2colorz00zz__tracez00(
(int)(BgL_arg1274z00_1145), BgL_list1275z00_1146); } } 
bgl_display_obj(BgL_arg1273z00_1144, BgL_pz00_1141); } 
{ 
obj_t BgL_l1079z00_1149;
BgL_l1079z00_1149 = BgL_argsz00_16; 
BgL_zc3z04anonymousza31277ze3z87_1150:
if(
PAIRP(BgL_l1079z00_1149))
{ /* Llib/trace.scm 183 */
BGl_displayzd2circlezd2zz__pp_circlez00(
CAR(BgL_l1079z00_1149), BgL_pz00_1141); 
{ 
obj_t BgL_l1079z00_2514;
BgL_l1079z00_2514 = 
CDR(BgL_l1079z00_1149); 
BgL_l1079z00_1149 = BgL_l1079z00_2514; 
goto BgL_zc3z04anonymousza31277ze3z87_1150;} }  else 
{ /* Llib/trace.scm 183 */
if(
NULLP(BgL_l1079z00_1149))
{ /* Llib/trace.scm 183 */BTRUE; }  else 
{ /* Llib/trace.scm 183 */
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string1838z00zz__tracez00, BGl_string1839z00zz__tracez00, BgL_l1079z00_1149, BGl_string1824z00zz__tracez00, 
BINT(((long)7206))); } } } 
bgl_display_char(((unsigned char)10), BgL_pz00_1141); 
BgL_tmp1946z00_2481 = 
bgl_flush_output_port(BgL_pz00_1141); 
BGL_EXITD_POP_PROTECT(BgL_top1947z00_2482); BUNSPEC; 
BGL_MUTEX_UNLOCK(BgL_mutex1270z00_1142); 
return BgL_tmp1946z00_2481;} } } }  else 
{ /* Llib/trace.scm 178 */
return BFALSE;} } }  else 
{ /* Llib/trace.scm 176 */
return BFALSE;} } } 

}



/* &trace-item */
obj_t BGl_z62tracezd2itemzb0zz__tracez00(obj_t BgL_envz00_2052, obj_t BgL_argsz00_2053)
{
{ /* Llib/trace.scm 175 */
return 
BGl_tracezd2itemzd2zz__tracez00(BgL_argsz00_2053);} 

}



/* trace-active? */
BGL_EXPORTED_DEF obj_t BGl_tracezd2activezf3z21zz__tracez00(obj_t BgL_lvlz00_17)
{
{ /* Llib/trace.scm 190 */
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_lvlz00_17))
{ /* Llib/trace.scm 192 */
int BgL_arg1286z00_1159;
BgL_arg1286z00_1159 = 
bgl_debug(); 
{ /* Llib/trace.scm 192 */
long BgL_n1z00_1695;long BgL_n2z00_1696;
BgL_n1z00_1695 = 
(long)(BgL_arg1286z00_1159); 
{ /* Llib/trace.scm 192 */
obj_t BgL_tmpz00_2529;
if(
INTEGERP(BgL_lvlz00_17))
{ /* Llib/trace.scm 192 */
BgL_tmpz00_2529 = BgL_lvlz00_17
; }  else 
{ 
obj_t BgL_auxz00_2532;
BgL_auxz00_2532 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)7607)), BGl_string1846z00zz__tracez00, BGl_string1834z00zz__tracez00, BgL_lvlz00_17); 
FAILURE(BgL_auxz00_2532,BFALSE,BFALSE);} 
BgL_n2z00_1696 = 
(long)CINT(BgL_tmpz00_2529); } 
return 
BBOOL(
(BgL_n1z00_1695>=BgL_n2z00_1696));} }  else 
{ /* Llib/trace.scm 192 */
if(
SYMBOLP(BgL_lvlz00_17))
{ /* Llib/trace.scm 193 */
return 
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_lvlz00_17, 
BGl_bigloozd2tracezd2zz__paramz00());}  else 
{ /* Llib/trace.scm 193 */
return BFALSE;} } } 

}



/* &trace-active? */
obj_t BGl_z62tracezd2activezf3z43zz__tracez00(obj_t BgL_envz00_2054, obj_t BgL_lvlz00_2055)
{
{ /* Llib/trace.scm 190 */
return 
BGl_tracezd2activezf3z21zz__tracez00(BgL_lvlz00_2055);} 

}



/* %with-trace */
BGL_EXPORTED_DEF obj_t BGl_z52withzd2tracez80zz__tracez00(obj_t BgL_lvlz00_18, obj_t BgL_lblz00_19, obj_t BgL_thunkz00_20)
{
{ /* Llib/trace.scm 198 */
{ /* Llib/trace.scm 199 */
obj_t BgL_alz00_1162;
BgL_alz00_1162 = 
BGl_tracezd2alistzd2zz__tracez00(); 
{ /* Llib/trace.scm 199 */
obj_t BgL_olz00_1163;
{ /* Llib/trace.scm 200 */
obj_t BgL_keyz00_1699;
BgL_keyz00_1699 = BGl_symbol1819z00zz__tracez00; 
{ /* Llib/trace.scm 97 */
obj_t BgL_cz00_1700;
BgL_cz00_1700 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1699, BgL_alz00_1162); 
if(
PAIRP(BgL_cz00_1700))
{ /* Llib/trace.scm 98 */
BgL_olz00_1163 = 
CDR(BgL_cz00_1700); }  else 
{ /* Llib/trace.scm 98 */
BgL_olz00_1163 = 
BGl_errorz00zz__errorz00(BGl_symbol1821z00zz__tracez00, BGl_string1823z00zz__tracez00, BgL_keyz00_1699); } } } 
{ /* Llib/trace.scm 200 */

{ /* Llib/trace.scm 201 */
obj_t BgL_keyz00_1704;
BgL_keyz00_1704 = BGl_symbol1819z00zz__tracez00; 
{ /* Llib/trace.scm 106 */
obj_t BgL_cz00_1705;
BgL_cz00_1705 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1704, BgL_alz00_1162); 
if(
PAIRP(BgL_cz00_1705))
{ /* Llib/trace.scm 107 */
SET_CDR(BgL_cz00_1705, BgL_lvlz00_18); }  else 
{ /* Llib/trace.scm 107 */
BGl_errorz00zz__errorz00(BGl_symbol1827z00zz__tracez00, BGl_string1823z00zz__tracez00, BgL_keyz00_1704); } } } 
if(
CBOOL(
BGl_tracezd2activezf3z21zz__tracez00(BgL_lvlz00_18)))
{ /* Llib/trace.scm 203 */
obj_t BgL_dz00_1165;
{ /* Llib/trace.scm 203 */
obj_t BgL_keyz00_1709;
BgL_keyz00_1709 = BGl_symbol1814z00zz__tracez00; 
{ /* Llib/trace.scm 97 */
obj_t BgL_cz00_1710;
BgL_cz00_1710 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1709, BgL_alz00_1162); 
if(
PAIRP(BgL_cz00_1710))
{ /* Llib/trace.scm 98 */
BgL_dz00_1165 = 
CDR(BgL_cz00_1710); }  else 
{ /* Llib/trace.scm 98 */
BgL_dz00_1165 = 
BGl_errorz00zz__errorz00(BGl_symbol1821z00zz__tracez00, BGl_string1823z00zz__tracez00, BgL_keyz00_1709); } } } 
{ /* Llib/trace.scm 203 */
obj_t BgL_omz00_1166;
{ /* Llib/trace.scm 204 */
obj_t BgL_keyz00_1714;
BgL_keyz00_1714 = BGl_symbol1816z00zz__tracez00; 
{ /* Llib/trace.scm 97 */
obj_t BgL_cz00_1715;
BgL_cz00_1715 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1714, BgL_alz00_1162); 
if(
PAIRP(BgL_cz00_1715))
{ /* Llib/trace.scm 98 */
BgL_omz00_1166 = 
CDR(BgL_cz00_1715); }  else 
{ /* Llib/trace.scm 98 */
BgL_omz00_1166 = 
BGl_errorz00zz__errorz00(BGl_symbol1821z00zz__tracez00, BGl_string1823z00zz__tracez00, BgL_keyz00_1714); } } } 
{ /* Llib/trace.scm 204 */
obj_t BgL_maz00_1167;
{ /* Llib/trace.scm 205 */
obj_t BgL_list1310z00_1191;
BgL_list1310z00_1191 = 
MAKE_YOUNG_PAIR(BGl_string1847z00zz__tracez00, BNIL); 
{ /* Llib/trace.scm 205 */
int BgL_auxz00_2569;
{ /* Llib/trace.scm 205 */
obj_t BgL_tmpz00_2570;
if(
INTEGERP(BgL_dz00_1165))
{ /* Llib/trace.scm 205 */
BgL_tmpz00_2570 = BgL_dz00_1165
; }  else 
{ 
obj_t BgL_auxz00_2573;
BgL_auxz00_2573 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)8157)), BGl_string1848z00zz__tracez00, BGl_string1834z00zz__tracez00, BgL_dz00_1165); 
FAILURE(BgL_auxz00_2573,BFALSE,BFALSE);} 
BgL_auxz00_2569 = 
CINT(BgL_tmpz00_2570); } 
BgL_maz00_1167 = 
BGl_ttyzd2tracezd2colorz00zz__tracez00(BgL_auxz00_2569, BgL_list1310z00_1191); } } 
{ /* Llib/trace.scm 205 */

{ /* Llib/trace.scm 206 */
obj_t BgL_mutex1290z00_1168;
BgL_mutex1290z00_1168 = BGl_za2tracezd2mutexza2zd2zz__tracez00; 
{ /* Llib/trace.scm 206 */
obj_t BgL_top1963z00_2580;
BgL_top1963z00_2580 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BgL_mutex1290z00_1168); 
BGL_EXITD_PUSH_PROTECT(BgL_top1963z00_2580, BgL_mutex1290z00_1168); BUNSPEC; 
{ /* Llib/trace.scm 206 */
obj_t BgL_tmp1962z00_2579;
{ /* Llib/trace.scm 207 */
obj_t BgL_arg1291z00_1169;
{ /* Llib/trace.scm 207 */
obj_t BgL_res1690z00_1720;
{ /* Llib/trace.scm 115 */
obj_t BgL_arg1186z00_1719;
BgL_arg1186z00_1719 = 
BGl_tracezd2alistzd2zz__tracez00(); 
{ /* Llib/trace.scm 115 */
obj_t BgL_aux1793z00_2113;
BgL_aux1793z00_2113 = 
BGl_tracezd2alistzd2getz00zz__tracez00(BgL_arg1186z00_1719, BGl_symbol1812z00zz__tracez00); 
if(
OUTPUT_PORTP(BgL_aux1793z00_2113))
{ /* Llib/trace.scm 115 */
BgL_res1690z00_1720 = BgL_aux1793z00_2113; }  else 
{ 
obj_t BgL_auxz00_2588;
BgL_auxz00_2588 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)4232)), BGl_string1848z00zz__tracez00, BGl_string1826z00zz__tracez00, BgL_aux1793z00_2113); 
FAILURE(BgL_auxz00_2588,BFALSE,BFALSE);} } } 
BgL_arg1291z00_1169 = BgL_res1690z00_1720; } 
{ /* Llib/trace.scm 209 */
obj_t BgL_zc3z04anonymousza31293ze3z87_2057;
BgL_zc3z04anonymousza31293ze3z87_2057 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31293ze3ze5zz__tracez00, 
(int)(((long)0)), 
(int)(((long)3))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31293ze3z87_2057, 
(int)(((long)0)), BgL_alz00_1162); 
PROCEDURE_SET(BgL_zc3z04anonymousza31293ze3z87_2057, 
(int)(((long)1)), BgL_lblz00_19); 
PROCEDURE_SET(BgL_zc3z04anonymousza31293ze3z87_2057, 
(int)(((long)2)), BgL_dz00_1165); 
BgL_tmp1962z00_2579 = 
BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(BgL_arg1291z00_1169, BgL_zc3z04anonymousza31293ze3z87_2057); } } 
BGL_EXITD_POP_PROTECT(BgL_top1963z00_2580); BUNSPEC; 
BGL_MUTEX_UNLOCK(BgL_mutex1290z00_1168); BgL_tmp1962z00_2579; } } } 
{ /* Llib/trace.scm 215 */
long BgL_arg1307z00_1184;
{ /* Llib/trace.scm 215 */
long BgL_za71za7_1738;
{ /* Llib/trace.scm 215 */
obj_t BgL_tmpz00_2604;
if(
INTEGERP(BgL_dz00_1165))
{ /* Llib/trace.scm 215 */
BgL_tmpz00_2604 = BgL_dz00_1165
; }  else 
{ 
obj_t BgL_auxz00_2607;
BgL_auxz00_2607 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)8534)), BGl_string1848z00zz__tracez00, BGl_string1834z00zz__tracez00, BgL_dz00_1165); 
FAILURE(BgL_auxz00_2607,BFALSE,BFALSE);} 
BgL_za71za7_1738 = 
(long)CINT(BgL_tmpz00_2604); } 
BgL_arg1307z00_1184 = 
(BgL_za71za7_1738+((long)1)); } 
{ /* Llib/trace.scm 215 */
obj_t BgL_keyz00_1740;
BgL_keyz00_1740 = BGl_symbol1814z00zz__tracez00; 
{ /* Llib/trace.scm 106 */
obj_t BgL_cz00_1741;
BgL_cz00_1741 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1740, BgL_alz00_1162); 
if(
PAIRP(BgL_cz00_1741))
{ /* Llib/trace.scm 108 */
obj_t BgL_tmpz00_2616;
BgL_tmpz00_2616 = 
BINT(BgL_arg1307z00_1184); 
SET_CDR(BgL_cz00_1741, BgL_tmpz00_2616); }  else 
{ /* Llib/trace.scm 107 */
BGl_errorz00zz__errorz00(BGl_symbol1827z00zz__tracez00, BGl_string1823z00zz__tracez00, BgL_keyz00_1740); } } } } 
{ /* Llib/trace.scm 216 */
obj_t BgL_arg1308z00_1185;
{ /* Llib/trace.scm 216 */
obj_t BgL_tmpz00_2620;
if(
STRINGP(BgL_omz00_1166))
{ /* Llib/trace.scm 216 */
BgL_tmpz00_2620 = BgL_omz00_1166
; }  else 
{ 
obj_t BgL_auxz00_2623;
BgL_auxz00_2623 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)8575)), BGl_string1848z00zz__tracez00, BGl_string1831z00zz__tracez00, BgL_omz00_1166); 
FAILURE(BgL_auxz00_2623,BFALSE,BFALSE);} 
BgL_arg1308z00_1185 = 
string_append(BgL_tmpz00_2620, BgL_maz00_1167); } 
{ /* Llib/trace.scm 216 */
obj_t BgL_keyz00_1745;
BgL_keyz00_1745 = BGl_symbol1816z00zz__tracez00; 
{ /* Llib/trace.scm 106 */
obj_t BgL_cz00_1746;
BgL_cz00_1746 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1745, BgL_alz00_1162); 
if(
PAIRP(BgL_cz00_1746))
{ /* Llib/trace.scm 107 */
SET_CDR(BgL_cz00_1746, BgL_arg1308z00_1185); }  else 
{ /* Llib/trace.scm 107 */
BGl_errorz00zz__errorz00(BGl_symbol1827z00zz__tracez00, BGl_string1823z00zz__tracez00, BgL_keyz00_1745); } } } } 
{ /* Llib/trace.scm 217 */
obj_t BgL_exitd1039z00_1186;
BgL_exitd1039z00_1186 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Llib/trace.scm 220 */
obj_t BgL_zc3z04anonymousza31309ze3z87_2056;
BgL_zc3z04anonymousza31309ze3z87_2056 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31309ze3ze5zz__tracez00, 
(int)(((long)0)), 
(int)(((long)4))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31309ze3z87_2056, 
(int)(((long)0)), BgL_alz00_1162); 
PROCEDURE_SET(BgL_zc3z04anonymousza31309ze3z87_2056, 
(int)(((long)1)), BgL_dz00_1165); 
PROCEDURE_SET(BgL_zc3z04anonymousza31309ze3z87_2056, 
(int)(((long)2)), BgL_omz00_1166); 
PROCEDURE_SET(BgL_zc3z04anonymousza31309ze3z87_2056, 
(int)(((long)3)), BgL_olz00_1163); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1039z00_1186, BgL_zc3z04anonymousza31309ze3z87_2056); 
{ /* Llib/trace.scm 218 */
obj_t BgL_tmp1041z00_1188;
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_20, ((long)0)))
{ /* Llib/trace.scm 218 */
BgL_tmp1041z00_1188 = 
PROCEDURE_ENTRY(BgL_thunkz00_20)(BgL_thunkz00_20, BEOA); }  else 
{ /* Llib/trace.scm 218 */
FAILURE(BGl_string1849z00zz__tracez00,BGl_list1850z00zz__tracez00,BgL_thunkz00_20);} 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1039z00_1186); 
BGl_z62zc3z04anonymousza31309ze3ze5zz__tracez00(BgL_zc3z04anonymousza31309ze3z87_2056); 
return BgL_tmp1041z00_1188;} } } } } } }  else 
{ /* Llib/trace.scm 223 */
obj_t BgL_exitd1042z00_1192;
BgL_exitd1042z00_1192 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Llib/trace.scm 225 */
obj_t BgL_zc3z04anonymousza31311ze3z87_2058;
BgL_zc3z04anonymousza31311ze3z87_2058 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31311ze3ze5zz__tracez00, 
(int)(((long)0)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31311ze3z87_2058, 
(int)(((long)0)), BgL_alz00_1162); 
PROCEDURE_SET(BgL_zc3z04anonymousza31311ze3z87_2058, 
(int)(((long)1)), BgL_olz00_1163); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1042z00_1192, BgL_zc3z04anonymousza31311ze3z87_2058); 
{ /* Llib/trace.scm 224 */
obj_t BgL_tmp1044z00_1194;
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_20, ((long)0)))
{ /* Llib/trace.scm 224 */
BgL_tmp1044z00_1194 = 
PROCEDURE_ENTRY(BgL_thunkz00_20)(BgL_thunkz00_20, BEOA); }  else 
{ /* Llib/trace.scm 224 */
FAILURE(BGl_string1849z00zz__tracez00,BGl_list1850z00zz__tracez00,BgL_thunkz00_20);} 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1042z00_1192); 
{ /* Llib/trace.scm 225 */
obj_t BgL_keyz00_1770;
BgL_keyz00_1770 = BGl_symbol1819z00zz__tracez00; 
{ /* Llib/trace.scm 106 */
obj_t BgL_cz00_1771;
BgL_cz00_1771 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1770, BgL_alz00_1162); 
if(
PAIRP(BgL_cz00_1771))
{ /* Llib/trace.scm 107 */
SET_CDR(BgL_cz00_1771, BgL_olz00_1163); }  else 
{ /* Llib/trace.scm 107 */
BGl_errorz00zz__errorz00(BGl_symbol1827z00zz__tracez00, BGl_string1823z00zz__tracez00, BgL_keyz00_1770); } } } 
return BgL_tmp1044z00_1194;} } } } } } } 

}



/* &%with-trace */
obj_t BGl_z62z52withzd2traceze2zz__tracez00(obj_t BgL_envz00_2059, obj_t BgL_lvlz00_2060, obj_t BgL_lblz00_2061, obj_t BgL_thunkz00_2062)
{
{ /* Llib/trace.scm 198 */
{ /* Llib/trace.scm 199 */
obj_t BgL_auxz00_2675;
if(
PROCEDUREP(BgL_thunkz00_2062))
{ /* Llib/trace.scm 199 */
BgL_auxz00_2675 = BgL_thunkz00_2062
; }  else 
{ 
obj_t BgL_auxz00_2678;
BgL_auxz00_2678 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)7925)), BGl_string1855z00zz__tracez00, BGl_string1856z00zz__tracez00, BgL_thunkz00_2062); 
FAILURE(BgL_auxz00_2678,BFALSE,BFALSE);} 
return 
BGl_z52withzd2tracez80zz__tracez00(BgL_lvlz00_2060, BgL_lblz00_2061, BgL_auxz00_2675);} } 

}



/* &<@anonymous:1309> */
obj_t BGl_z62zc3z04anonymousza31309ze3ze5zz__tracez00(obj_t BgL_envz00_2063)
{
{ /* Llib/trace.scm 217 */
{ /* Llib/trace.scm 220 */
obj_t BgL_alz00_2064;obj_t BgL_dz00_2065;obj_t BgL_omz00_2066;obj_t BgL_olz00_2067;
BgL_alz00_2064 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_2063, 
(int)(((long)0)))); 
BgL_dz00_2065 = 
PROCEDURE_REF(BgL_envz00_2063, 
(int)(((long)1))); 
BgL_omz00_2066 = 
PROCEDURE_REF(BgL_envz00_2063, 
(int)(((long)2))); 
BgL_olz00_2067 = 
PROCEDURE_REF(BgL_envz00_2063, 
(int)(((long)3))); 
{ /* Llib/trace.scm 220 */
obj_t BgL_keyz00_2154;
BgL_keyz00_2154 = BGl_symbol1814z00zz__tracez00; 
{ /* Llib/trace.scm 106 */
obj_t BgL_cz00_2155;
BgL_cz00_2155 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_2154, BgL_alz00_2064); 
if(
PAIRP(BgL_cz00_2155))
{ /* Llib/trace.scm 107 */
SET_CDR(BgL_cz00_2155, BgL_dz00_2065); }  else 
{ /* Llib/trace.scm 107 */
BGl_errorz00zz__errorz00(BGl_symbol1827z00zz__tracez00, BGl_string1823z00zz__tracez00, BgL_keyz00_2154); } } } 
{ /* Llib/trace.scm 221 */
obj_t BgL_keyz00_2156;
BgL_keyz00_2156 = BGl_symbol1816z00zz__tracez00; 
{ /* Llib/trace.scm 106 */
obj_t BgL_cz00_2157;
BgL_cz00_2157 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_2156, BgL_alz00_2064); 
if(
PAIRP(BgL_cz00_2157))
{ /* Llib/trace.scm 107 */
SET_CDR(BgL_cz00_2157, BgL_omz00_2066); }  else 
{ /* Llib/trace.scm 107 */
BGl_errorz00zz__errorz00(BGl_symbol1827z00zz__tracez00, BGl_string1823z00zz__tracez00, BgL_keyz00_2156); } } } 
{ /* Llib/trace.scm 222 */
obj_t BgL_keyz00_2158;
BgL_keyz00_2158 = BGl_symbol1819z00zz__tracez00; 
{ /* Llib/trace.scm 106 */
obj_t BgL_cz00_2159;
BgL_cz00_2159 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_2158, BgL_alz00_2064); 
if(
PAIRP(BgL_cz00_2159))
{ /* Llib/trace.scm 107 */
return 
SET_CDR(BgL_cz00_2159, BgL_olz00_2067);}  else 
{ /* Llib/trace.scm 107 */
return 
BGl_errorz00zz__errorz00(BGl_symbol1827z00zz__tracez00, BGl_string1823z00zz__tracez00, BgL_keyz00_2158);} } } } } 

}



/* &<@anonymous:1293> */
obj_t BGl_z62zc3z04anonymousza31293ze3ze5zz__tracez00(obj_t BgL_envz00_2068)
{
{ /* Llib/trace.scm 208 */
{ /* Llib/trace.scm 209 */
obj_t BgL_alz00_2069;obj_t BgL_lblz00_2070;obj_t BgL_dz00_2071;
BgL_alz00_2069 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_2068, 
(int)(((long)0)))); 
BgL_lblz00_2070 = 
PROCEDURE_REF(BgL_envz00_2068, 
(int)(((long)1))); 
BgL_dz00_2071 = 
PROCEDURE_REF(BgL_envz00_2068, 
(int)(((long)2))); 
{ /* Llib/trace.scm 209 */
obj_t BgL_arg1295z00_2160;obj_t BgL_arg1296z00_2161;
{ /* Llib/trace.scm 209 */
obj_t BgL_keyz00_2162;
BgL_keyz00_2162 = BGl_symbol1816z00zz__tracez00; 
{ /* Llib/trace.scm 97 */
obj_t BgL_cz00_2163;
BgL_cz00_2163 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_2162, BgL_alz00_2069); 
if(
PAIRP(BgL_cz00_2163))
{ /* Llib/trace.scm 98 */
BgL_arg1295z00_2160 = 
CDR(BgL_cz00_2163); }  else 
{ /* Llib/trace.scm 98 */
BgL_arg1295z00_2160 = 
BGl_errorz00zz__errorz00(BGl_symbol1821z00zz__tracez00, BGl_string1823z00zz__tracez00, BgL_keyz00_2162); } } } 
{ /* Llib/trace.scm 209 */
obj_t BgL_res1692z00_2164;
{ /* Llib/trace.scm 209 */
obj_t BgL_tmpz00_2719;
BgL_tmpz00_2719 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res1692z00_2164 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2719); } 
BgL_arg1296z00_2161 = BgL_res1692z00_2164; } 
bgl_display_obj(BgL_arg1295z00_2160, BgL_arg1296z00_2161); } 
{ /* Llib/trace.scm 210 */
obj_t BgL_arg1297z00_2165;obj_t BgL_arg1298z00_2166;
{ /* Llib/trace.scm 210 */
bool_t BgL_test1977z00_2723;
{ /* Llib/trace.scm 210 */
long BgL_n1z00_2167;
{ /* Llib/trace.scm 210 */
obj_t BgL_tmpz00_2724;
if(
INTEGERP(BgL_dz00_2071))
{ /* Llib/trace.scm 210 */
BgL_tmpz00_2724 = BgL_dz00_2071
; }  else 
{ 
obj_t BgL_auxz00_2727;
BgL_auxz00_2727 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)8343)), BGl_string1857z00zz__tracez00, BGl_string1834z00zz__tracez00, BgL_dz00_2071); 
FAILURE(BgL_auxz00_2727,BFALSE,BFALSE);} 
BgL_n1z00_2167 = 
(long)CINT(BgL_tmpz00_2724); } 
BgL_test1977z00_2723 = 
(BgL_n1z00_2167==((long)0)); } 
if(BgL_test1977z00_2723)
{ /* Llib/trace.scm 211 */
obj_t BgL_list1300z00_2168;
{ /* Llib/trace.scm 211 */
obj_t BgL_arg1301z00_2169;
BgL_arg1301z00_2169 = 
MAKE_YOUNG_PAIR(BgL_lblz00_2070, BNIL); 
BgL_list1300z00_2168 = 
MAKE_YOUNG_PAIR(BGl_string1858z00zz__tracez00, BgL_arg1301z00_2169); } 
{ /* Llib/trace.scm 211 */
int BgL_auxz00_2735;
{ /* Llib/trace.scm 211 */
obj_t BgL_tmpz00_2736;
if(
INTEGERP(BgL_dz00_2071))
{ /* Llib/trace.scm 211 */
BgL_tmpz00_2736 = BgL_dz00_2071
; }  else 
{ 
obj_t BgL_auxz00_2739;
BgL_auxz00_2739 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)8355)), BGl_string1857z00zz__tracez00, BGl_string1834z00zz__tracez00, BgL_dz00_2071); 
FAILURE(BgL_auxz00_2739,BFALSE,BFALSE);} 
BgL_auxz00_2735 = 
CINT(BgL_tmpz00_2736); } 
BgL_arg1297z00_2165 = 
BGl_ttyzd2tracezd2colorz00zz__tracez00(BgL_auxz00_2735, BgL_list1300z00_2168); } }  else 
{ /* Llib/trace.scm 212 */
obj_t BgL_list1302z00_2170;
{ /* Llib/trace.scm 212 */
obj_t BgL_arg1303z00_2171;
BgL_arg1303z00_2171 = 
MAKE_YOUNG_PAIR(BgL_lblz00_2070, BNIL); 
BgL_list1302z00_2170 = 
MAKE_YOUNG_PAIR(BGl_string1859z00zz__tracez00, BgL_arg1303z00_2171); } 
{ /* Llib/trace.scm 212 */
int BgL_auxz00_2747;
{ /* Llib/trace.scm 212 */
obj_t BgL_tmpz00_2748;
if(
INTEGERP(BgL_dz00_2071))
{ /* Llib/trace.scm 212 */
BgL_tmpz00_2748 = BgL_dz00_2071
; }  else 
{ 
obj_t BgL_auxz00_2751;
BgL_auxz00_2751 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1824z00zz__tracez00, 
BINT(((long)8391)), BGl_string1857z00zz__tracez00, BGl_string1834z00zz__tracez00, BgL_dz00_2071); 
FAILURE(BgL_auxz00_2751,BFALSE,BFALSE);} 
BgL_auxz00_2747 = 
CINT(BgL_tmpz00_2748); } 
BgL_arg1297z00_2165 = 
BGl_ttyzd2tracezd2colorz00zz__tracez00(BgL_auxz00_2747, BgL_list1302z00_2170); } } } 
{ /* Llib/trace.scm 210 */
obj_t BgL_res1694z00_2172;
{ /* Llib/trace.scm 210 */
obj_t BgL_tmpz00_2757;
BgL_tmpz00_2757 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res1694z00_2172 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2757); } 
BgL_arg1298z00_2166 = BgL_res1694z00_2172; } 
bgl_display_obj(BgL_arg1297z00_2165, BgL_arg1298z00_2166); } 
{ /* Llib/trace.scm 213 */
obj_t BgL_arg1304z00_2173;
{ /* Llib/trace.scm 213 */
obj_t BgL_res1695z00_2174;
{ /* Llib/trace.scm 213 */
obj_t BgL_tmpz00_2761;
BgL_tmpz00_2761 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res1695z00_2174 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2761); } 
BgL_arg1304z00_2173 = BgL_res1695z00_2174; } 
bgl_display_char(((unsigned char)10), BgL_arg1304z00_2173); } 
{ /* Llib/trace.scm 214 */
obj_t BgL_arg1306z00_2175;
{ /* Llib/trace.scm 214 */
obj_t BgL_res1696z00_2176;
{ /* Llib/trace.scm 214 */
obj_t BgL_tmpz00_2765;
BgL_tmpz00_2765 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res1696z00_2176 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2765); } 
BgL_arg1306z00_2175 = BgL_res1696z00_2176; } 
return 
bgl_flush_output_port(BgL_arg1306z00_2175);} } } 

}



/* &<@anonymous:1311> */
obj_t BGl_z62zc3z04anonymousza31311ze3ze5zz__tracez00(obj_t BgL_envz00_2072)
{
{ /* Llib/trace.scm 223 */
{ /* Llib/trace.scm 225 */
obj_t BgL_alz00_2073;obj_t BgL_olz00_2074;
BgL_alz00_2073 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_2072, 
(int)(((long)0)))); 
BgL_olz00_2074 = 
PROCEDURE_REF(BgL_envz00_2072, 
(int)(((long)1))); 
{ /* Llib/trace.scm 225 */
obj_t BgL_keyz00_2177;
BgL_keyz00_2177 = BGl_symbol1819z00zz__tracez00; 
{ /* Llib/trace.scm 106 */
obj_t BgL_cz00_2178;
BgL_cz00_2178 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_2177, BgL_alz00_2073); 
if(
PAIRP(BgL_cz00_2178))
{ /* Llib/trace.scm 107 */
return 
SET_CDR(BgL_cz00_2178, BgL_olz00_2074);}  else 
{ /* Llib/trace.scm 107 */
return 
BGl_errorz00zz__errorz00(BGl_symbol1827z00zz__tracez00, BGl_string1823z00zz__tracez00, BgL_keyz00_2177);} } } } } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__tracez00()
{
{ /* Llib/trace.scm 15 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__tracez00()
{
{ /* Llib/trace.scm 15 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__tracez00()
{
{ /* Llib/trace.scm 15 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__tracez00()
{
{ /* Llib/trace.scm 15 */
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string1860z00zz__tracez00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)193422032), 
BSTRING_TO_STRING(BGl_string1860z00zz__tracez00)); 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)224967910), 
BSTRING_TO_STRING(BGl_string1860z00zz__tracez00)); 
return 
BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)86988972), 
BSTRING_TO_STRING(BGl_string1860z00zz__tracez00));} 

}

#ifdef __cplusplus
}
#endif
