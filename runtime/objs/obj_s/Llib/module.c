/*===========================================================================*/
/*   (Llib/module.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/module.scm -indent -o objs/obj_s/Llib/module.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
extern obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__modulez00 = BUNSPEC;
static obj_t BGl_symbol1854z00zz__modulez00 = BUNSPEC;
extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol1860z00zz__modulez00 = BUNSPEC;
static obj_t BGl_symbol1862z00zz__modulez00 = BUNSPEC;
static obj_t BGl_symbol1864z00zz__modulez00 = BUNSPEC;
static obj_t BGl_symbol1866z00zz__modulez00 = BUNSPEC;
extern obj_t BGl_warningz00zz__errorz00(obj_t);
extern obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_toplevelzd2initzd2zz__modulez00();
static obj_t BGl_symbol1887z00zz__modulez00 = BUNSPEC;
static obj_t BGl_symbol1889z00zz__modulez00 = BUNSPEC;
extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_genericzd2initzd2zz__modulez00();
extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_symbol1891z00zz__modulez00 = BUNSPEC;
static obj_t BGl_objectzd2initzd2zz__modulez00();
static obj_t BGl_z52bigloozd2modulezd2resolverz52zz__modulez00 = BUNSPEC;
extern obj_t BGl_dirnamez00zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2abasezd2setz12z12zz__modulez00(obj_t);
extern obj_t bstring_to_symbol(obj_t);
extern obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2modulezd2resolverzd2setz12zc0zz__modulez00(obj_t);
extern obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
static obj_t BGl_modulezd2addzd2accesszd2innerz12zc0zz__modulez00(obj_t, obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zz__modulez00();
static obj_t BGl_modulezd2readzd2accesszd2filezd2zz__modulez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2abasezd2zz__modulez00();
extern obj_t BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62modulezd2defaultzd2resolverz62zz__modulez00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62modulezd2loadzd2accesszd2filezb0zz__modulez00(obj_t, obj_t);
static obj_t BGl_resolvezd2abaseza2z70zz__modulez00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31318ze3ze5zz__modulez00(obj_t, obj_t);
extern obj_t string_append(obj_t, obj_t);
static obj_t BGl_z62zc3z04z52bigloozd2modulezd2res1172ze3z14zz__modulez00(obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_moduleszd2mutexzd2zz__modulez00 = BUNSPEC;
static obj_t BGl_z62modulezd2addzd2accessz12z70zz__modulez00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62bigloozd2modulezd2resolverzd2setz12za2zz__modulez00(obj_t, obj_t);
static obj_t BGl_resolvezd2abasezf2bucketz20zz__modulez00(obj_t, obj_t);
static obj_t BGl_za2afileszd2tableza2zd2zz__modulez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_bigloozd2modulezd2resolverz00zz__modulez00();
extern obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long, char *);
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
static obj_t BGl_list1859z00zz__modulez00 = BUNSPEC;
extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_cnstzd2initzd2zz__modulez00();
static obj_t BGl_gczd2rootszd2initz00zz__modulez00();
static obj_t BGl_importedzd2moduleszd2initz00zz__modulez00();
static obj_t BGl_list1886z00zz__modulez00 = BUNSPEC;
extern bool_t bgl_directoryp(char *);
extern obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62modulezd2abasezb0zz__modulez00(obj_t);
extern obj_t BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, int, int);
static obj_t BGl_z62bigloozd2modulezd2resolverz62zz__modulez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(obj_t);
static obj_t BGl_afilezd2tablezd2zz__modulez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_modulezd2addzd2accessz12z12zz__modulez00(obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_modulezd2abasezd2envz00zz__modulez00, BgL_bgl_za762moduleza7d2abas1914z00, BGl_z62modulezd2abasezb0zz__modulez00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2modulezd2resolverzd2setz12zd2envz12zz__modulez00, BgL_bgl_za762biglooza7d2modu1915z00, BGl_z62bigloozd2modulezd2resolverzd2setz12za2zz__modulez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2modulezd2resolverzd2envzd2zz__modulez00, BgL_bgl_za762biglooza7d2modu1916z00, BGl_z62bigloozd2modulezd2resolverz62zz__modulez00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string1900z00zz__modulez00, BgL_bgl_string1900za700za7za7_1917za7, ".afile", 6 );
DEFINE_STRING( BGl_string1901z00zz__modulez00, BgL_bgl_string1901za700za7za7_1918za7, "&module-load-access-file", 24 );
DEFINE_STRING( BGl_string1902z00zz__modulez00, BgL_bgl_string1902za700za7za7_1919za7, "", 0 );
DEFINE_STRING( BGl_string1903z00zz__modulez00, BgL_bgl_string1903za700za7za7_1920za7, "string-ref", 10 );
DEFINE_STRING( BGl_string1904z00zz__modulez00, BgL_bgl_string1904za700za7za7_1921za7, "relative-path", 13 );
DEFINE_STRING( BGl_string1905z00zz__modulez00, BgL_bgl_string1905za700za7za7_1922za7, "<@anonymous:1318>", 17 );
DEFINE_STRING( BGl_string1906z00zz__modulez00, BgL_bgl_string1906za700za7za7_1923za7, "<@anonymous:1319>", 17 );
DEFINE_STRING( BGl_string1907z00zz__modulez00, BgL_bgl_string1907za700za7za7_1924za7, "<@anonymous:1324>", 17 );
DEFINE_STRING( BGl_string1908z00zz__modulez00, BgL_bgl_string1908za700za7za7_1925za7, "for-each", 8 );
DEFINE_STRING( BGl_string1909z00zz__modulez00, BgL_bgl_string1909za700za7za7_1926za7, "list", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_modulezd2abasezd2setz12zd2envzc0zz__modulez00, BgL_bgl_za762moduleza7d2abas1927z00, BGl_z62modulezd2abasezd2setz12z70zz__modulez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1910z00zz__modulez00, BgL_bgl_string1910za700za7za7_1928za7, "__module", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_modulezd2addzd2accessz12zd2envzc0zz__modulez00, BgL_bgl_za762moduleza7d2addza71929za7, BGl_z62modulezd2addzd2accessz12z70zz__modulez00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string1850z00zz__modulez00, BgL_bgl_string1850za700za7za7_1930za7, "modules", 7 );
DEFINE_STRING( BGl_string1851z00zz__modulez00, BgL_bgl_string1851za700za7za7_1931za7, "/tmp/4.4a/runtime/Llib/module.scm", 33 );
DEFINE_STRING( BGl_string1852z00zz__modulez00, BgL_bgl_string1852za700za7za7_1932za7, "bigloo-module-resolver", 22 );
DEFINE_STRING( BGl_string1853z00zz__modulez00, BgL_bgl_string1853za700za7za7_1933za7, "procedure", 9 );
DEFINE_STRING( BGl_string1855z00zz__modulez00, BgL_bgl_string1855za700za7za7_1934za7, "bigloo-module-resolver-set!", 27 );
DEFINE_STRING( BGl_string1856z00zz__modulez00, BgL_bgl_string1856za700za7za7_1935za7, "Illegal resolver", 16 );
DEFINE_STRING( BGl_string1857z00zz__modulez00, BgL_bgl_string1857za700za7za7_1936za7, "&bigloo-module-resolver-set!", 28 );
DEFINE_STRING( BGl_string1858z00zz__modulez00, BgL_bgl_string1858za700za7za7_1937za7, "<@%bigloo-module-res1172>:Wrong number of arguments", 51 );
DEFINE_STRING( BGl_string1861z00zz__modulez00, BgL_bgl_string1861za700za7za7_1938za7, "funcall", 7 );
DEFINE_STRING( BGl_string1863z00zz__modulez00, BgL_bgl_string1863za700za7za7_1939za7, "resolve", 7 );
DEFINE_STRING( BGl_string1865z00zz__modulez00, BgL_bgl_string1865za700za7za7_1940za7, "module", 6 );
DEFINE_STRING( BGl_string1867z00zz__modulez00, BgL_bgl_string1867za700za7za7_1941za7, "abase", 5 );
DEFINE_STRING( BGl_string1868z00zz__modulez00, BgL_bgl_string1868za700za7za7_1942za7, ".", 1 );
DEFINE_STRING( BGl_string1869z00zz__modulez00, BgL_bgl_string1869za700za7za7_1943za7, "module-default-resolver", 23 );
DEFINE_STRING( BGl_string1870z00zz__modulez00, BgL_bgl_string1870za700za7za7_1944za7, "bstring", 7 );
DEFINE_STRING( BGl_string1871z00zz__modulez00, BgL_bgl_string1871za700za7za7_1945za7, "&module-default-resolver", 24 );
DEFINE_STRING( BGl_string1872z00zz__modulez00, BgL_bgl_string1872za700za7za7_1946za7, "symbol", 6 );
DEFINE_STRING( BGl_string1873z00zz__modulez00, BgL_bgl_string1873za700za7za7_1947za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string1874z00zz__modulez00, BgL_bgl_string1874za700za7za7_1948za7, "loop", 4 );
DEFINE_STRING( BGl_string1875z00zz__modulez00, BgL_bgl_string1875za700za7za7_1949za7, "pair", 4 );
DEFINE_STRING( BGl_string1876z00zz__modulez00, BgL_bgl_string1876za700za7za7_1950za7, "resolve-abase/bucket", 20 );
DEFINE_STRING( BGl_string1877z00zz__modulez00, BgL_bgl_string1877za700za7za7_1951za7, "<@anonymous:1200>", 17 );
DEFINE_STRING( BGl_string1878z00zz__modulez00, BgL_bgl_string1878za700za7za7_1952za7, ".scm", 4 );
DEFINE_STRING( BGl_string1879z00zz__modulez00, BgL_bgl_string1879za700za7za7_1953za7, "module-add-access-inner!", 24 );
DEFINE_STRING( BGl_string1880z00zz__modulez00, BgL_bgl_string1880za700za7za7_1954za7, "\"", 1 );
DEFINE_STRING( BGl_string1881z00zz__modulez00, BgL_bgl_string1881za700za7za7_1955za7, "] in directory \"", 16 );
DEFINE_STRING( BGl_string1882z00zz__modulez00, BgL_bgl_string1882za700za7za7_1956za7, " ", 1 );
DEFINE_STRING( BGl_string1883z00zz__modulez00, BgL_bgl_string1883za700za7za7_1957za7, " [", 2 );
DEFINE_STRING( BGl_string1884z00zz__modulez00, BgL_bgl_string1884za700za7za7_1958za7, "access redefinition -- ", 23 );
DEFINE_STRING( BGl_string1885z00zz__modulez00, BgL_bgl_string1885za700za7za7_1959za7, "add-access!", 11 );
DEFINE_STRING( BGl_string1888z00zz__modulez00, BgL_bgl_string1888za700za7za7_1960za7, "set-cdr!", 8 );
DEFINE_STRING( BGl_string1890z00zz__modulez00, BgL_bgl_string1890za700za7za7_1961za7, "cell", 4 );
DEFINE_STRING( BGl_string1892z00zz__modulez00, BgL_bgl_string1892za700za7za7_1962za7, "files", 5 );
DEFINE_STRING( BGl_string1893z00zz__modulez00, BgL_bgl_string1893za700za7za7_1963za7, "&module-add-access!", 19 );
DEFINE_STRING( BGl_string1894z00zz__modulez00, BgL_bgl_string1894za700za7za7_1964za7, "module-read-access-file", 23 );
DEFINE_STRING( BGl_string1895z00zz__modulez00, BgL_bgl_string1895za700za7za7_1965za7, "input-port", 10 );
DEFINE_STRING( BGl_string1896z00zz__modulez00, BgL_bgl_string1896za700za7za7_1966za7, "<@anonymous:1276>", 17 );
DEFINE_STRING( BGl_string1897z00zz__modulez00, BgL_bgl_string1897za700za7za7_1967za7, "Illegal entry -- ", 17 );
DEFINE_STRING( BGl_string1898z00zz__modulez00, BgL_bgl_string1898za700za7za7_1968za7, "module-load-access-file", 23 );
DEFINE_STRING( BGl_string1899z00zz__modulez00, BgL_bgl_string1899za700za7za7_1969za7, "struct", 6 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_modulezd2defaultzd2resolverzd2envzd2zz__modulez00, BgL_bgl_za762moduleza7d2defa1970z00, BGl_z62modulezd2defaultzd2resolverz62zz__modulez00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_modulezd2loadzd2accesszd2filezd2envz00zz__modulez00, BgL_bgl_za762moduleza7d2load1971z00, BGl_z62modulezd2loadzd2accesszd2filezb0zz__modulez00, 0L, BUNSPEC, 1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__modulez00) );
ADD_ROOT( (void *)(&BGl_symbol1854z00zz__modulez00) );
ADD_ROOT( (void *)(&BGl_symbol1860z00zz__modulez00) );
ADD_ROOT( (void *)(&BGl_symbol1862z00zz__modulez00) );
ADD_ROOT( (void *)(&BGl_symbol1864z00zz__modulez00) );
ADD_ROOT( (void *)(&BGl_symbol1866z00zz__modulez00) );
ADD_ROOT( (void *)(&BGl_symbol1887z00zz__modulez00) );
ADD_ROOT( (void *)(&BGl_symbol1889z00zz__modulez00) );
ADD_ROOT( (void *)(&BGl_symbol1891z00zz__modulez00) );
ADD_ROOT( (void *)(&BGl_z52bigloozd2modulezd2resolverz52zz__modulez00) );
ADD_ROOT( (void *)(&BGl_moduleszd2mutexzd2zz__modulez00) );
ADD_ROOT( (void *)(&BGl_za2afileszd2tableza2zd2zz__modulez00) );
ADD_ROOT( (void *)(&BGl_list1859z00zz__modulez00) );
ADD_ROOT( (void *)(&BGl_list1886z00zz__modulez00) );
ADD_ROOT( (void *)(&BGl_afilezd2tablezd2zz__modulez00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long BgL_checksumz00_2209, char * BgL_fromz00_2210)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__modulez00))
{ 
BGl_requirezd2initializa7ationz75zz__modulez00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__modulez00(); 
BGl_cnstzd2initzd2zz__modulez00(); 
BGl_importedzd2moduleszd2initz00zz__modulez00(); 
return 
BGl_toplevelzd2initzd2zz__modulez00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__modulez00()
{
{ /* Llib/module.scm 17 */
BGl_symbol1854z00zz__modulez00 = 
bstring_to_symbol(BGl_string1855z00zz__modulez00); 
BGl_symbol1860z00zz__modulez00 = 
bstring_to_symbol(BGl_string1861z00zz__modulez00); 
BGl_symbol1862z00zz__modulez00 = 
bstring_to_symbol(BGl_string1863z00zz__modulez00); 
BGl_symbol1864z00zz__modulez00 = 
bstring_to_symbol(BGl_string1865z00zz__modulez00); 
BGl_symbol1866z00zz__modulez00 = 
bstring_to_symbol(BGl_string1867z00zz__modulez00); 
BGl_list1859z00zz__modulez00 = 
MAKE_YOUNG_PAIR(BGl_symbol1860z00zz__modulez00, 
MAKE_YOUNG_PAIR(BGl_symbol1862z00zz__modulez00, 
MAKE_YOUNG_PAIR(BGl_symbol1862z00zz__modulez00, 
MAKE_YOUNG_PAIR(BGl_symbol1864z00zz__modulez00, 
MAKE_YOUNG_PAIR(BGl_symbol1866z00zz__modulez00, BNIL))))); 
BGl_symbol1887z00zz__modulez00 = 
bstring_to_symbol(BGl_string1888z00zz__modulez00); 
BGl_symbol1889z00zz__modulez00 = 
bstring_to_symbol(BGl_string1890z00zz__modulez00); 
BGl_symbol1891z00zz__modulez00 = 
bstring_to_symbol(BGl_string1892z00zz__modulez00); 
return ( 
BGl_list1886z00zz__modulez00 = 
MAKE_YOUNG_PAIR(BGl_symbol1887z00zz__modulez00, 
MAKE_YOUNG_PAIR(BGl_symbol1889z00zz__modulez00, 
MAKE_YOUNG_PAIR(BGl_symbol1891z00zz__modulez00, BNIL))), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__modulez00()
{
{ /* Llib/module.scm 17 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__modulez00()
{
{ /* Llib/module.scm 17 */
{ /* Llib/module.scm 70 */
obj_t BgL_res1665z00_1647;
BgL_res1665z00_1647 = 
bgl_make_mutex(BGl_string1850z00zz__modulez00); 
BGl_moduleszd2mutexzd2zz__modulez00 = BgL_res1665z00_1647; } 
BGl_afilezd2tablezd2zz__modulez00 = BNIL; 
BGl_z52bigloozd2modulezd2resolverz52zz__modulez00 = BGl_modulezd2defaultzd2resolverzd2envzd2zz__modulez00; 
{ /* Llib/module.scm 209 */
obj_t BgL_list1165z00_1066;
BgL_list1165z00_1066 = 
MAKE_YOUNG_PAIR(
BINT(((long)256)), BNIL); 
return ( 
BGl_za2afileszd2tableza2zd2zz__modulez00 = 
BGl_makezd2hashtablezd2zz__hashz00(BgL_list1165z00_1066), BUNSPEC) ;} } 

}



/* module-abase */
BGL_EXPORTED_DEF obj_t BGl_modulezd2abasezd2zz__modulez00()
{
{ /* Llib/module.scm 75 */
return 
BGL_ABASE();} 

}



/* &module-abase */
obj_t BGl_z62modulezd2abasezb0zz__modulez00(obj_t BgL_envz00_2051)
{
{ /* Llib/module.scm 75 */
return 
BGl_modulezd2abasezd2zz__modulez00();} 

}



/* module-abase-set! */
BGL_EXPORTED_DEF obj_t BGl_modulezd2abasezd2setz12z12zz__modulez00(obj_t BgL_valz00_3)
{
{ /* Llib/module.scm 78 */
return 
BGL_ABASE_SET(BgL_valz00_3);} 

}



/* &module-abase-set! */
obj_t BGl_z62modulezd2abasezd2setz12z70zz__modulez00(obj_t BgL_envz00_2052, obj_t BgL_valz00_2053)
{
{ /* Llib/module.scm 78 */
return 
BGl_modulezd2abasezd2setz12z12zz__modulez00(BgL_valz00_2053);} 

}



/* bigloo-module-resolver */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2modulezd2resolverz00zz__modulez00()
{
{ /* Llib/module.scm 91 */
{ /* Llib/module.scm 91 */
obj_t BgL_aux1774z00_2080;
BgL_aux1774z00_2080 = BGl_z52bigloozd2modulezd2resolverz52zz__modulez00; 
if(
PROCEDUREP(BgL_aux1774z00_2080))
{ /* Llib/module.scm 91 */
return BgL_aux1774z00_2080;}  else 
{ 
obj_t BgL_auxz00_2245;
BgL_auxz00_2245 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)3416)), BGl_string1852z00zz__modulez00, BGl_string1853z00zz__modulez00, BgL_aux1774z00_2080); 
FAILURE(BgL_auxz00_2245,BFALSE,BFALSE);} } } 

}



/* &bigloo-module-resolver */
obj_t BGl_z62bigloozd2modulezd2resolverz62zz__modulez00(obj_t BgL_envz00_2054)
{
{ /* Llib/module.scm 91 */
return 
BGl_bigloozd2modulezd2resolverz00zz__modulez00();} 

}



/* bigloo-module-resolver-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2modulezd2resolverzd2setz12zc0zz__modulez00(obj_t BgL_resolvez00_4)
{
{ /* Llib/module.scm 94 */
{ /* Llib/module.scm 95 */
obj_t BgL_top1975z00_2251;
BgL_top1975z00_2251 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BGl_moduleszd2mutexzd2zz__modulez00); 
BGL_EXITD_PUSH_PROTECT(BgL_top1975z00_2251, BGl_moduleszd2mutexzd2zz__modulez00); BUNSPEC; 
{ /* Llib/module.scm 95 */
obj_t BgL_tmp1974z00_2250;
if(
PROCEDURE_CORRECT_ARITYP(BgL_resolvez00_4, 
(int)(((long)2))))
{ /* Llib/module.scm 100 */
obj_t BgL_zc3z04z52bigloozd2modulezd2res1172ze3z76_2055;
BgL_zc3z04z52bigloozd2modulezd2res1172ze3z76_2055 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04z52bigloozd2modulezd2res1172ze3z14zz__modulez00, 
(int)(((long)3)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04z52bigloozd2modulezd2res1172ze3z76_2055, 
(int)(((long)0)), BgL_resolvez00_4); 
BgL_tmp1974z00_2250 = ( 
BGl_z52bigloozd2modulezd2resolverz52zz__modulez00 = BgL_zc3z04z52bigloozd2modulezd2res1172ze3z76_2055, BUNSPEC) ; }  else 
{ /* Llib/module.scm 97 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_resolvez00_4, 
(int)(((long)3))))
{ /* Llib/module.scm 101 */
BgL_tmp1974z00_2250 = ( 
BGl_z52bigloozd2modulezd2resolverz52zz__modulez00 = BgL_resolvez00_4, BUNSPEC) ; }  else 
{ /* Llib/module.scm 101 */
BgL_tmp1974z00_2250 = 
BGl_errorz00zz__errorz00(BGl_symbol1854z00zz__modulez00, BGl_string1856z00zz__modulez00, BgL_resolvez00_4); } } 
BGL_EXITD_POP_PROTECT(BgL_top1975z00_2251); BUNSPEC; 
BGL_MUTEX_UNLOCK(BGl_moduleszd2mutexzd2zz__modulez00); 
return BgL_tmp1974z00_2250;} } } 

}



/* &bigloo-module-resolver-set! */
obj_t BGl_z62bigloozd2modulezd2resolverzd2setz12za2zz__modulez00(obj_t BgL_envz00_2056, obj_t BgL_resolvez00_2057)
{
{ /* Llib/module.scm 94 */
{ /* Llib/module.scm 95 */
obj_t BgL_auxz00_2269;
if(
PROCEDUREP(BgL_resolvez00_2057))
{ /* Llib/module.scm 95 */
BgL_auxz00_2269 = BgL_resolvez00_2057
; }  else 
{ 
obj_t BgL_auxz00_2272;
BgL_auxz00_2272 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)3527)), BGl_string1857z00zz__modulez00, BGl_string1853z00zz__modulez00, BgL_resolvez00_2057); 
FAILURE(BgL_auxz00_2272,BFALSE,BFALSE);} 
return 
BGl_bigloozd2modulezd2resolverzd2setz12zc0zz__modulez00(BgL_auxz00_2269);} } 

}



/* &<@%bigloo-module-res1172> */
obj_t BGl_z62zc3z04z52bigloozd2modulezd2res1172ze3z14zz__modulez00(obj_t BgL_envz00_2058, obj_t BgL_modulez00_2060, obj_t BgL_filesz00_2061, obj_t BgL_abasez00_2062)
{
{ /* Llib/module.scm 100 */
{ /* Llib/module.scm 100 */
obj_t BgL_resolvez00_2059;
BgL_resolvez00_2059 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_2058, 
(int)(((long)0)))); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_resolvez00_2059, ((long)2)))
{ /* Llib/module.scm 100 */
return 
PROCEDURE_ENTRY(BgL_resolvez00_2059)(BgL_resolvez00_2059, BgL_modulez00_2060, BgL_abasez00_2062, BEOA);}  else 
{ /* Llib/module.scm 100 */
FAILURE(BGl_string1858z00zz__modulez00,BGl_list1859z00zz__modulez00,BgL_resolvez00_2059);} } } 

}



/* &module-default-resolver */
obj_t BGl_z62modulezd2defaultzd2resolverz62zz__modulez00(obj_t BgL_envz00_2047, obj_t BgL_modz00_2048, obj_t BgL_filesz00_2049, obj_t BgL_abasez00_2050)
{
{ /* Llib/module.scm 113 */
{ /* Llib/module.scm 114 */
obj_t BgL_modz00_2161;obj_t BgL_filesz00_2162;
if(
SYMBOLP(BgL_modz00_2048))
{ /* Llib/module.scm 114 */
BgL_modz00_2161 = BgL_modz00_2048; }  else 
{ 
obj_t BgL_auxz00_2290;
BgL_auxz00_2290 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)4515)), BGl_string1871z00zz__modulez00, BGl_string1872z00zz__modulez00, BgL_modz00_2048); 
FAILURE(BgL_auxz00_2290,BFALSE,BFALSE);} 
{ /* Llib/module.scm 114 */
bool_t BgL_test1981z00_2294;
if(
PAIRP(BgL_filesz00_2049))
{ /* Llib/module.scm 114 */
BgL_test1981z00_2294 = ((bool_t)1)
; }  else 
{ /* Llib/module.scm 114 */
BgL_test1981z00_2294 = 
NULLP(BgL_filesz00_2049)
; } 
if(BgL_test1981z00_2294)
{ /* Llib/module.scm 114 */
BgL_filesz00_2162 = BgL_filesz00_2049; }  else 
{ 
obj_t BgL_auxz00_2298;
BgL_auxz00_2298 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)4515)), BGl_string1871z00zz__modulez00, BGl_string1873z00zz__modulez00, BgL_filesz00_2049); 
FAILURE(BgL_auxz00_2298,BFALSE,BFALSE);} } 
{ /* Llib/module.scm 114 */
obj_t BgL_top1984z00_2303;
BgL_top1984z00_2303 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BGl_moduleszd2mutexzd2zz__modulez00); 
BGL_EXITD_PUSH_PROTECT(BgL_top1984z00_2303, BGl_moduleszd2mutexzd2zz__modulez00); BUNSPEC; 
{ /* Llib/module.scm 114 */
obj_t BgL_tmp1983z00_2302;
if(
NULLP(BgL_filesz00_2162))
{ /* Llib/module.scm 116 */
if(
NULLP(BgL_abasez00_2050))
{ /* Llib/module.scm 150 */
obj_t BgL_basez00_2163;
BgL_basez00_2163 = 
BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BGl_string1868z00zz__modulez00, BGl_afilezd2tablezd2zz__modulez00); 
if(
PAIRP(BgL_basez00_2163))
{ /* Llib/module.scm 151 */
BgL_tmp1983z00_2302 = 
BGl_resolvezd2abasezf2bucketz20zz__modulez00(BgL_modz00_2161, BgL_basez00_2163); }  else 
{ /* Llib/module.scm 151 */
BgL_tmp1983z00_2302 = BNIL; } }  else 
{ /* Llib/module.scm 119 */
if(
STRINGP(BgL_abasez00_2050))
{ /* Llib/module.scm 150 */
obj_t BgL_basez00_2164;
BgL_basez00_2164 = 
BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_abasez00_2050, BGl_afilezd2tablezd2zz__modulez00); 
if(
PAIRP(BgL_basez00_2164))
{ /* Llib/module.scm 151 */
BgL_tmp1983z00_2302 = 
BGl_resolvezd2abasezf2bucketz20zz__modulez00(BgL_modz00_2161, BgL_basez00_2164); }  else 
{ /* Llib/module.scm 151 */
BgL_tmp1983z00_2302 = BNIL; } }  else 
{ /* Llib/module.scm 121 */
if(
PAIRP(BgL_abasez00_2050))
{ 
obj_t BgL_abasez00_2166;
BgL_abasez00_2166 = BgL_abasez00_2050; 
BgL_loopz00_2165:
if(
PAIRP(BgL_abasez00_2166))
{ /* Llib/module.scm 126 */
obj_t BgL_resolvez00_2167;
{ /* Llib/module.scm 126 */
obj_t BgL_arg1190z00_2168;
BgL_arg1190z00_2168 = 
CAR(BgL_abasez00_2166); 
{ /* Llib/module.scm 150 */
obj_t BgL_basez00_2169;
BgL_basez00_2169 = 
BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1190z00_2168, BGl_afilezd2tablezd2zz__modulez00); 
if(
PAIRP(BgL_basez00_2169))
{ /* Llib/module.scm 151 */
BgL_resolvez00_2167 = 
BGl_resolvezd2abasezf2bucketz20zz__modulez00(BgL_modz00_2161, BgL_basez00_2169); }  else 
{ /* Llib/module.scm 151 */
BgL_resolvez00_2167 = BNIL; } } } 
if(
PAIRP(BgL_resolvez00_2167))
{ /* Llib/module.scm 127 */
BgL_tmp1983z00_2302 = BgL_resolvez00_2167; }  else 
{ 
obj_t BgL_abasez00_2332;
BgL_abasez00_2332 = 
CDR(BgL_abasez00_2166); 
BgL_abasez00_2166 = BgL_abasez00_2332; 
goto BgL_loopz00_2165;} }  else 
{ /* Llib/module.scm 125 */
BgL_tmp1983z00_2302 = BNIL; } }  else 
{ /* Llib/module.scm 123 */
BgL_tmp1983z00_2302 = 
BGl_resolvezd2abaseza2z70zz__modulez00(BgL_modz00_2161); } } } }  else 
{ /* Llib/module.scm 116 */
{ /* Llib/module.scm 117 */
obj_t BgL_abasez00_2170;
if(
STRINGP(BgL_abasez00_2050))
{ /* Llib/module.scm 117 */
BgL_abasez00_2170 = BgL_abasez00_2050; }  else 
{ 
obj_t BgL_auxz00_2337;
BgL_auxz00_2337 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)4604)), BGl_string1869z00zz__modulez00, BGl_string1870z00zz__modulez00, BgL_abasez00_2050); 
FAILURE(BgL_auxz00_2337,BFALSE,BFALSE);} 
{ /* Llib/module.scm 190 */
obj_t BgL_top1996z00_2342;
BgL_top1996z00_2342 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BGl_moduleszd2mutexzd2zz__modulez00); 
BGL_EXITD_PUSH_PROTECT(BgL_top1996z00_2342, BGl_moduleszd2mutexzd2zz__modulez00); BUNSPEC; 
{ /* Llib/module.scm 190 */
obj_t BgL_tmp1995z00_2341;
BgL_tmp1995z00_2341 = 
BGl_modulezd2addzd2accesszd2innerz12zc0zz__modulez00(BgL_modz00_2161, BgL_filesz00_2162, BgL_abasez00_2170); 
BGL_EXITD_POP_PROTECT(BgL_top1996z00_2342); BUNSPEC; 
BGL_MUTEX_UNLOCK(BGl_moduleszd2mutexzd2zz__modulez00); BgL_tmp1995z00_2341; } } } 
BgL_tmp1983z00_2302 = BgL_filesz00_2162; } 
BGL_EXITD_POP_PROTECT(BgL_top1984z00_2303); BUNSPEC; 
BGL_MUTEX_UNLOCK(BGl_moduleszd2mutexzd2zz__modulez00); 
return BgL_tmp1983z00_2302;} } } } 

}



/* resolve-abase* */
obj_t BGl_resolvezd2abaseza2z70zz__modulez00(obj_t BgL_modz00_8)
{
{ /* Llib/module.scm 137 */
{ 
obj_t BgL_afilez00_1099;
BgL_afilez00_1099 = BGl_afilezd2tablezd2zz__modulez00; 
BgL_zc3z04anonymousza31191ze3z87_1100:
if(
NULLP(BgL_afilez00_1099))
{ /* Llib/module.scm 139 */
return BNIL;}  else 
{ /* Llib/module.scm 141 */
obj_t BgL_fz00_1102;
{ /* Llib/module.scm 141 */
obj_t BgL_arg1197z00_1105;
{ /* Llib/module.scm 141 */
obj_t BgL_pairz00_1671;
if(
PAIRP(BgL_afilez00_1099))
{ /* Llib/module.scm 141 */
BgL_pairz00_1671 = BgL_afilez00_1099; }  else 
{ 
obj_t BgL_auxz00_2355;
BgL_auxz00_2355 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)5305)), BGl_string1874z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_afilez00_1099); 
FAILURE(BgL_auxz00_2355,BFALSE,BFALSE);} 
BgL_arg1197z00_1105 = 
CAR(BgL_pairz00_1671); } 
BgL_fz00_1102 = 
BGl_resolvezd2abasezf2bucketz20zz__modulez00(BgL_modz00_8, BgL_arg1197z00_1105); } 
if(
PAIRP(BgL_fz00_1102))
{ /* Llib/module.scm 142 */
return BgL_fz00_1102;}  else 
{ /* Llib/module.scm 144 */
obj_t BgL_arg1194z00_1104;
{ /* Llib/module.scm 144 */
obj_t BgL_pairz00_1673;
if(
PAIRP(BgL_afilez00_1099))
{ /* Llib/module.scm 144 */
BgL_pairz00_1673 = BgL_afilez00_1099; }  else 
{ 
obj_t BgL_auxz00_2365;
BgL_auxz00_2365 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)5354)), BGl_string1874z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_afilez00_1099); 
FAILURE(BgL_auxz00_2365,BFALSE,BFALSE);} 
BgL_arg1194z00_1104 = 
CDR(BgL_pairz00_1673); } 
{ 
obj_t BgL_afilez00_2370;
BgL_afilez00_2370 = BgL_arg1194z00_1104; 
BgL_afilez00_1099 = BgL_afilez00_2370; 
goto BgL_zc3z04anonymousza31191ze3z87_1100;} } } } } 

}



/* resolve-abase/bucket */
obj_t BGl_resolvezd2abasezf2bucketz20zz__modulez00(obj_t BgL_modz00_11, obj_t BgL_basez00_12)
{
{ /* Llib/module.scm 158 */
{ /* Llib/module.scm 159 */
obj_t BgL_cellz00_1109;
{ /* Llib/module.scm 159 */
obj_t BgL_auxz00_2371;
{ /* Llib/module.scm 159 */
obj_t BgL_pairz00_1677;
if(
PAIRP(BgL_basez00_12))
{ /* Llib/module.scm 159 */
BgL_pairz00_1677 = BgL_basez00_12; }  else 
{ 
obj_t BgL_auxz00_2374;
BgL_auxz00_2374 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)6028)), BGl_string1876z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_basez00_12); 
FAILURE(BgL_auxz00_2374,BFALSE,BFALSE);} 
{ /* Llib/module.scm 159 */
obj_t BgL_aux1792z00_2099;
BgL_aux1792z00_2099 = 
CDR(BgL_pairz00_1677); 
{ /* Llib/module.scm 159 */
bool_t BgL_test2002z00_2379;
if(
PAIRP(BgL_aux1792z00_2099))
{ /* Llib/module.scm 159 */
BgL_test2002z00_2379 = ((bool_t)1)
; }  else 
{ /* Llib/module.scm 159 */
BgL_test2002z00_2379 = 
NULLP(BgL_aux1792z00_2099)
; } 
if(BgL_test2002z00_2379)
{ /* Llib/module.scm 159 */
BgL_auxz00_2371 = BgL_aux1792z00_2099
; }  else 
{ 
obj_t BgL_auxz00_2383;
BgL_auxz00_2383 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)6023)), BGl_string1876z00zz__modulez00, BGl_string1873z00zz__modulez00, BgL_aux1792z00_2099); 
FAILURE(BgL_auxz00_2383,BFALSE,BFALSE);} } } } 
BgL_cellz00_1109 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_modz00_11, BgL_auxz00_2371); } 
if(
PAIRP(BgL_cellz00_1109))
{ /* Llib/module.scm 161 */
obj_t BgL_hook1071z00_1111;
BgL_hook1071z00_1111 = 
MAKE_YOUNG_PAIR(BFALSE, BNIL); 
{ /* Llib/module.scm 161 */
obj_t BgL_g1072z00_1112;
BgL_g1072z00_1112 = 
CDR(BgL_cellz00_1109); 
{ 
obj_t BgL_l1068z00_1114;obj_t BgL_h1069z00_1115;
BgL_l1068z00_1114 = BgL_g1072z00_1112; 
BgL_h1069z00_1115 = BgL_hook1071z00_1111; 
BgL_zc3z04anonymousza31200ze3z87_1116:
if(
NULLP(BgL_l1068z00_1114))
{ /* Llib/module.scm 161 */
return 
CDR(BgL_hook1071z00_1111);}  else 
{ /* Llib/module.scm 161 */
bool_t BgL_test2006z00_2395;
{ /* Llib/module.scm 161 */
obj_t BgL_tmpz00_2396;
{ /* Llib/module.scm 161 */
obj_t BgL_pairz00_1682;
if(
PAIRP(BgL_l1068z00_1114))
{ /* Llib/module.scm 161 */
BgL_pairz00_1682 = BgL_l1068z00_1114; }  else 
{ 
obj_t BgL_auxz00_2399;
BgL_auxz00_2399 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)6079)), BGl_string1877z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_l1068z00_1114); 
FAILURE(BgL_auxz00_2399,BFALSE,BFALSE);} 
BgL_tmpz00_2396 = 
CAR(BgL_pairz00_1682); } 
BgL_test2006z00_2395 = 
STRINGP(BgL_tmpz00_2396); } 
if(BgL_test2006z00_2395)
{ /* Llib/module.scm 161 */
obj_t BgL_nh1070z00_1120;
{ /* Llib/module.scm 161 */
obj_t BgL_arg1216z00_1122;
{ /* Llib/module.scm 161 */
obj_t BgL_pairz00_1684;
if(
PAIRP(BgL_l1068z00_1114))
{ /* Llib/module.scm 161 */
BgL_pairz00_1684 = BgL_l1068z00_1114; }  else 
{ 
obj_t BgL_auxz00_2407;
BgL_auxz00_2407 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)6079)), BGl_string1877z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_l1068z00_1114); 
FAILURE(BgL_auxz00_2407,BFALSE,BFALSE);} 
BgL_arg1216z00_1122 = 
CAR(BgL_pairz00_1684); } 
{ /* Llib/module.scm 161 */
obj_t BgL_res1683z00_1685;
BgL_res1683z00_1685 = 
MAKE_YOUNG_PAIR(BgL_arg1216z00_1122, BNIL); 
BgL_nh1070z00_1120 = BgL_res1683z00_1685; } } 
SET_CDR(BgL_h1069z00_1115, BgL_nh1070z00_1120); 
{ /* Llib/module.scm 161 */
obj_t BgL_arg1211z00_1121;
{ /* Llib/module.scm 161 */
obj_t BgL_pairz00_1687;
if(
PAIRP(BgL_l1068z00_1114))
{ /* Llib/module.scm 161 */
BgL_pairz00_1687 = BgL_l1068z00_1114; }  else 
{ 
obj_t BgL_auxz00_2416;
BgL_auxz00_2416 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)6079)), BGl_string1877z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_l1068z00_1114); 
FAILURE(BgL_auxz00_2416,BFALSE,BFALSE);} 
BgL_arg1211z00_1121 = 
CDR(BgL_pairz00_1687); } 
{ 
obj_t BgL_h1069z00_2422;obj_t BgL_l1068z00_2421;
BgL_l1068z00_2421 = BgL_arg1211z00_1121; 
BgL_h1069z00_2422 = BgL_nh1070z00_1120; 
BgL_h1069z00_1115 = BgL_h1069z00_2422; 
BgL_l1068z00_1114 = BgL_l1068z00_2421; 
goto BgL_zc3z04anonymousza31200ze3z87_1116;} } }  else 
{ /* Llib/module.scm 161 */
obj_t BgL_arg1221z00_1123;
{ /* Llib/module.scm 161 */
obj_t BgL_pairz00_1688;
if(
PAIRP(BgL_l1068z00_1114))
{ /* Llib/module.scm 161 */
BgL_pairz00_1688 = BgL_l1068z00_1114; }  else 
{ 
obj_t BgL_auxz00_2425;
BgL_auxz00_2425 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)6079)), BGl_string1877z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_l1068z00_1114); 
FAILURE(BgL_auxz00_2425,BFALSE,BFALSE);} 
BgL_arg1221z00_1123 = 
CDR(BgL_pairz00_1688); } 
{ 
obj_t BgL_l1068z00_2430;
BgL_l1068z00_2430 = BgL_arg1221z00_1123; 
BgL_l1068z00_1114 = BgL_l1068z00_2430; 
goto BgL_zc3z04anonymousza31200ze3z87_1116;} } } } } }  else 
{ /* Llib/module.scm 162 */
obj_t BgL_fz00_1126;
{ /* Llib/module.scm 162 */
obj_t BgL_arg1227z00_1129;
{ /* Llib/module.scm 162 */
obj_t BgL_res1684z00_1691;
{ /* Llib/module.scm 162 */
obj_t BgL_arg1396z00_1690;
BgL_arg1396z00_1690 = 
SYMBOL_TO_STRING(BgL_modz00_11); 
BgL_res1684z00_1691 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1396z00_1690); } 
BgL_arg1227z00_1129 = BgL_res1684z00_1691; } 
BgL_fz00_1126 = 
string_append(BgL_arg1227z00_1129, BGl_string1878z00zz__modulez00); } 
if(
fexists(
BSTRING_TO_STRING(BgL_fz00_1126)))
{ /* Llib/module.scm 164 */
obj_t BgL_list1225z00_1128;
BgL_list1225z00_1128 = 
MAKE_YOUNG_PAIR(BgL_fz00_1126, BNIL); 
return BgL_list1225z00_1128;}  else 
{ /* Llib/module.scm 163 */
return BNIL;} } } } 

}



/* module-add-access-inner! */
obj_t BGl_modulezd2addzd2accesszd2innerz12zc0zz__modulez00(obj_t BgL_modulez00_13, obj_t BgL_filesz00_14, obj_t BgL_abasez00_15)
{
{ /* Llib/module.scm 170 */
{ /* Llib/module.scm 171 */
obj_t BgL_basez00_1131;
BgL_basez00_1131 = 
BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_abasez00_15, BGl_afilezd2tablezd2zz__modulez00); 
if(
CBOOL(BgL_basez00_1131))
{ /* Llib/module.scm 175 */
obj_t BgL_cellz00_1132;
{ /* Llib/module.scm 175 */
obj_t BgL_auxz00_2441;
{ /* Llib/module.scm 175 */
obj_t BgL_pairz00_1695;
if(
PAIRP(BgL_basez00_1131))
{ /* Llib/module.scm 175 */
BgL_pairz00_1695 = BgL_basez00_1131; }  else 
{ 
obj_t BgL_auxz00_2444;
BgL_auxz00_2444 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)6657)), BGl_string1879z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_basez00_1131); 
FAILURE(BgL_auxz00_2444,BFALSE,BFALSE);} 
{ /* Llib/module.scm 175 */
obj_t BgL_aux1804z00_2111;
BgL_aux1804z00_2111 = 
CDR(BgL_pairz00_1695); 
{ /* Llib/module.scm 175 */
bool_t BgL_test2014z00_2449;
if(
PAIRP(BgL_aux1804z00_2111))
{ /* Llib/module.scm 175 */
BgL_test2014z00_2449 = ((bool_t)1)
; }  else 
{ /* Llib/module.scm 175 */
BgL_test2014z00_2449 = 
NULLP(BgL_aux1804z00_2111)
; } 
if(BgL_test2014z00_2449)
{ /* Llib/module.scm 175 */
BgL_auxz00_2441 = BgL_aux1804z00_2111
; }  else 
{ 
obj_t BgL_auxz00_2453;
BgL_auxz00_2453 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)6652)), BGl_string1879z00zz__modulez00, BGl_string1873z00zz__modulez00, BgL_aux1804z00_2111); 
FAILURE(BgL_auxz00_2453,BFALSE,BFALSE);} } } } 
BgL_cellz00_1132 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_modulez00_13, BgL_auxz00_2441); } 
if(
CBOOL(BgL_cellz00_1132))
{ /* Llib/module.scm 178 */
bool_t BgL_test2017z00_2460;
{ /* Llib/module.scm 178 */
obj_t BgL_auxz00_2461;
{ /* Llib/module.scm 178 */
obj_t BgL_pairz00_1696;
if(
PAIRP(BgL_cellz00_1132))
{ /* Llib/module.scm 178 */
BgL_pairz00_1696 = BgL_cellz00_1132; }  else 
{ 
obj_t BgL_auxz00_2464;
BgL_auxz00_2464 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)6768)), BGl_string1879z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_cellz00_1132); 
FAILURE(BgL_auxz00_2464,BFALSE,BFALSE);} 
BgL_auxz00_2461 = 
CDR(BgL_pairz00_1696); } 
BgL_test2017z00_2460 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_auxz00_2461, BgL_filesz00_14); } 
if(BgL_test2017z00_2460)
{ /* Llib/module.scm 178 */
return BFALSE;}  else 
{ /* Llib/module.scm 178 */
{ /* Llib/module.scm 181 */
obj_t BgL_arg1239z00_1135;
{ /* Llib/module.scm 181 */
obj_t BgL_pairz00_1697;
if(
PAIRP(BgL_cellz00_1132))
{ /* Llib/module.scm 181 */
BgL_pairz00_1697 = BgL_cellz00_1132; }  else 
{ 
obj_t BgL_auxz00_2472;
BgL_auxz00_2472 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)6869)), BGl_string1879z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_cellz00_1132); 
FAILURE(BgL_auxz00_2472,BFALSE,BFALSE);} 
BgL_arg1239z00_1135 = 
CDR(BgL_pairz00_1697); } 
{ /* Llib/module.scm 179 */
obj_t BgL_list1240z00_1136;
{ /* Llib/module.scm 179 */
obj_t BgL_arg1242z00_1137;
{ /* Llib/module.scm 179 */
obj_t BgL_arg1243z00_1138;
{ /* Llib/module.scm 179 */
obj_t BgL_arg1245z00_1139;
{ /* Llib/module.scm 179 */
obj_t BgL_arg1246z00_1140;
{ /* Llib/module.scm 179 */
obj_t BgL_arg1247z00_1141;
{ /* Llib/module.scm 179 */
obj_t BgL_arg1250z00_1142;
{ /* Llib/module.scm 179 */
obj_t BgL_arg1252z00_1143;
{ /* Llib/module.scm 179 */
obj_t BgL_arg1253z00_1144;
{ /* Llib/module.scm 179 */
obj_t BgL_arg1254z00_1145;
BgL_arg1254z00_1145 = 
MAKE_YOUNG_PAIR(BGl_string1880z00zz__modulez00, BNIL); 
BgL_arg1253z00_1144 = 
MAKE_YOUNG_PAIR(BgL_abasez00_15, BgL_arg1254z00_1145); } 
BgL_arg1252z00_1143 = 
MAKE_YOUNG_PAIR(BGl_string1881z00zz__modulez00, BgL_arg1253z00_1144); } 
BgL_arg1250z00_1142 = 
MAKE_YOUNG_PAIR(BgL_filesz00_14, BgL_arg1252z00_1143); } 
BgL_arg1247z00_1141 = 
MAKE_YOUNG_PAIR(BGl_string1882z00zz__modulez00, BgL_arg1250z00_1142); } 
BgL_arg1246z00_1140 = 
MAKE_YOUNG_PAIR(BgL_arg1239z00_1135, BgL_arg1247z00_1141); } 
BgL_arg1245z00_1139 = 
MAKE_YOUNG_PAIR(BGl_string1883z00zz__modulez00, BgL_arg1246z00_1140); } 
BgL_arg1243z00_1138 = 
MAKE_YOUNG_PAIR(BgL_modulez00_13, BgL_arg1245z00_1139); } 
BgL_arg1242z00_1137 = 
MAKE_YOUNG_PAIR(BGl_string1884z00zz__modulez00, BgL_arg1243z00_1138); } 
BgL_list1240z00_1136 = 
MAKE_YOUNG_PAIR(BGl_string1885z00zz__modulez00, BgL_arg1242z00_1137); } 
BGl_warningz00zz__errorz00(BgL_list1240z00_1136); } } 
return BGl_list1886z00zz__modulez00;} }  else 
{ /* Llib/module.scm 177 */
obj_t BgL_arg1258z00_1147;
{ /* Llib/module.scm 177 */
obj_t BgL_arg1263z00_1148;obj_t BgL_arg1268z00_1149;
BgL_arg1263z00_1148 = 
MAKE_YOUNG_PAIR(BgL_modulez00_13, BgL_filesz00_14); 
{ /* Llib/module.scm 177 */
obj_t BgL_pairz00_1698;
if(
PAIRP(BgL_basez00_1131))
{ /* Llib/module.scm 177 */
BgL_pairz00_1698 = BgL_basez00_1131; }  else 
{ 
obj_t BgL_auxz00_2491;
BgL_auxz00_2491 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)6736)), BGl_string1879z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_basez00_1131); 
FAILURE(BgL_auxz00_2491,BFALSE,BFALSE);} 
BgL_arg1268z00_1149 = 
CDR(BgL_pairz00_1698); } 
BgL_arg1258z00_1147 = 
MAKE_YOUNG_PAIR(BgL_arg1263z00_1148, BgL_arg1268z00_1149); } 
{ /* Llib/module.scm 177 */
obj_t BgL_pairz00_1699;
if(
PAIRP(BgL_basez00_1131))
{ /* Llib/module.scm 177 */
BgL_pairz00_1699 = BgL_basez00_1131; }  else 
{ 
obj_t BgL_auxz00_2499;
BgL_auxz00_2499 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)6700)), BGl_string1879z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_basez00_1131); 
FAILURE(BgL_auxz00_2499,BFALSE,BFALSE);} 
return 
SET_CDR(BgL_pairz00_1699, BgL_arg1258z00_1147);} } }  else 
{ /* Llib/module.scm 174 */
obj_t BgL_arg1271z00_1151;
{ /* Llib/module.scm 174 */
obj_t BgL_arg1273z00_1152;
{ /* Llib/module.scm 174 */
obj_t BgL_arg1274z00_1153;
BgL_arg1274z00_1153 = 
MAKE_YOUNG_PAIR(BgL_modulez00_13, BgL_filesz00_14); 
{ /* Llib/module.scm 174 */
obj_t BgL_list1275z00_1154;
BgL_list1275z00_1154 = 
MAKE_YOUNG_PAIR(BgL_arg1274z00_1153, BNIL); 
BgL_arg1273z00_1152 = BgL_list1275z00_1154; } } 
BgL_arg1271z00_1151 = 
MAKE_YOUNG_PAIR(BgL_abasez00_15, BgL_arg1273z00_1152); } 
return ( 
BGl_afilezd2tablezd2zz__modulez00 = 
MAKE_YOUNG_PAIR(BgL_arg1271z00_1151, BGl_afilezd2tablezd2zz__modulez00), BUNSPEC) ;} } } 

}



/* module-add-access! */
BGL_EXPORTED_DEF obj_t BGl_modulezd2addzd2accessz12z12zz__modulez00(obj_t BgL_modulez00_16, obj_t BgL_filesz00_17, obj_t BgL_abasez00_18)
{
{ /* Llib/module.scm 189 */
{ /* Llib/module.scm 190 */
obj_t BgL_top2023z00_2509;
BgL_top2023z00_2509 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BGl_moduleszd2mutexzd2zz__modulez00); 
BGL_EXITD_PUSH_PROTECT(BgL_top2023z00_2509, BGl_moduleszd2mutexzd2zz__modulez00); BUNSPEC; 
{ /* Llib/module.scm 190 */
obj_t BgL_tmp2022z00_2508;
BgL_tmp2022z00_2508 = 
BGl_modulezd2addzd2accesszd2innerz12zc0zz__modulez00(BgL_modulez00_16, BgL_filesz00_17, BgL_abasez00_18); 
BGL_EXITD_POP_PROTECT(BgL_top2023z00_2509); BUNSPEC; 
BGL_MUTEX_UNLOCK(BGl_moduleszd2mutexzd2zz__modulez00); 
return BgL_tmp2022z00_2508;} } } 

}



/* &module-add-access! */
obj_t BGl_z62modulezd2addzd2accessz12z70zz__modulez00(obj_t BgL_envz00_2063, obj_t BgL_modulez00_2064, obj_t BgL_filesz00_2065, obj_t BgL_abasez00_2066)
{
{ /* Llib/module.scm 189 */
{ /* Llib/module.scm 190 */
obj_t BgL_auxz00_2530;obj_t BgL_auxz00_2523;obj_t BgL_auxz00_2516;
if(
STRINGP(BgL_abasez00_2066))
{ /* Llib/module.scm 190 */
BgL_auxz00_2530 = BgL_abasez00_2066
; }  else 
{ 
obj_t BgL_auxz00_2533;
BgL_auxz00_2533 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)7284)), BGl_string1893z00zz__modulez00, BGl_string1870z00zz__modulez00, BgL_abasez00_2066); 
FAILURE(BgL_auxz00_2533,BFALSE,BFALSE);} 
if(
PAIRP(BgL_filesz00_2065))
{ /* Llib/module.scm 190 */
BgL_auxz00_2523 = BgL_filesz00_2065
; }  else 
{ 
obj_t BgL_auxz00_2526;
BgL_auxz00_2526 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)7284)), BGl_string1893z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_filesz00_2065); 
FAILURE(BgL_auxz00_2526,BFALSE,BFALSE);} 
if(
SYMBOLP(BgL_modulez00_2064))
{ /* Llib/module.scm 190 */
BgL_auxz00_2516 = BgL_modulez00_2064
; }  else 
{ 
obj_t BgL_auxz00_2519;
BgL_auxz00_2519 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)7284)), BGl_string1893z00zz__modulez00, BGl_string1872z00zz__modulez00, BgL_modulez00_2064); 
FAILURE(BgL_auxz00_2519,BFALSE,BFALSE);} 
return 
BGl_modulezd2addzd2accessz12z12zz__modulez00(BgL_auxz00_2516, BgL_auxz00_2523, BgL_auxz00_2530);} } 

}



/* module-read-access-file */
obj_t BGl_modulezd2readzd2accesszd2filezd2zz__modulez00(obj_t BgL_portz00_19)
{
{ /* Llib/module.scm 196 */
{ /* Llib/module.scm 197 */
obj_t BgL_hook1077z00_1155;
BgL_hook1077z00_1155 = 
MAKE_YOUNG_PAIR(BFALSE, BNIL); 
{ /* Llib/module.scm 203 */
obj_t BgL_g1078z00_1156;
{ /* Llib/module.scm 203 */

{ /* Llib/module.scm 203 */
obj_t BgL_iportz00_1191;
if(
INPUT_PORTP(BgL_portz00_19))
{ /* Llib/module.scm 203 */
BgL_iportz00_1191 = BgL_portz00_19; }  else 
{ 
obj_t BgL_auxz00_2541;
BgL_auxz00_2541 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)7811)), BGl_string1894z00zz__modulez00, BGl_string1895z00zz__modulez00, BgL_portz00_19); 
FAILURE(BgL_auxz00_2541,BFALSE,BFALSE);} 
{ /* Llib/module.scm 203 */

BgL_g1078z00_1156 = 
BGl_readz00zz__readerz00(BgL_iportz00_1191, BFALSE); } } } 
{ 
obj_t BgL_l1074z00_1158;obj_t BgL_h1075z00_1159;
BgL_l1074z00_1158 = BgL_g1078z00_1156; 
BgL_h1075z00_1159 = BgL_hook1077z00_1155; 
BgL_zc3z04anonymousza31276ze3z87_1160:
if(
NULLP(BgL_l1074z00_1158))
{ /* Llib/module.scm 203 */
return 
CDR(BgL_hook1077z00_1155);}  else 
{ /* Llib/module.scm 203 */
bool_t BgL_test2029z00_2549;
{ /* Llib/module.scm 198 */
obj_t BgL_xz00_1181;
{ /* Llib/module.scm 198 */
obj_t BgL_pairz00_1703;
if(
PAIRP(BgL_l1074z00_1158))
{ /* Llib/module.scm 198 */
BgL_pairz00_1703 = BgL_l1074z00_1158; }  else 
{ 
obj_t BgL_auxz00_2552;
BgL_auxz00_2552 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)7657)), BGl_string1896z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_l1074z00_1158); 
FAILURE(BgL_auxz00_2552,BFALSE,BFALSE);} 
BgL_xz00_1181 = 
CAR(BgL_pairz00_1703); } 
{ /* Llib/module.scm 198 */
bool_t BgL_test2031z00_2557;
if(
PAIRP(BgL_xz00_1181))
{ /* Llib/module.scm 198 */
bool_t BgL_test2033z00_2560;
{ /* Llib/module.scm 198 */
obj_t BgL_tmpz00_2561;
BgL_tmpz00_2561 = 
CAR(BgL_xz00_1181); 
BgL_test2033z00_2560 = 
SYMBOLP(BgL_tmpz00_2561); } 
if(BgL_test2033z00_2560)
{ /* Llib/module.scm 198 */
BgL_test2031z00_2557 = 
BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(
CDR(BgL_xz00_1181))
; }  else 
{ /* Llib/module.scm 198 */
BgL_test2031z00_2557 = ((bool_t)0)
; } }  else 
{ /* Llib/module.scm 198 */
BgL_test2031z00_2557 = ((bool_t)0)
; } 
if(BgL_test2031z00_2557)
{ /* Llib/module.scm 198 */
BgL_test2029z00_2549 = ((bool_t)1)
; }  else 
{ /* Llib/module.scm 198 */
{ /* Llib/module.scm 201 */
obj_t BgL_list1297z00_1183;
{ /* Llib/module.scm 201 */
obj_t BgL_arg1298z00_1184;
{ /* Llib/module.scm 201 */
obj_t BgL_arg1299z00_1185;
BgL_arg1299z00_1185 = 
MAKE_YOUNG_PAIR(BgL_xz00_1181, BNIL); 
BgL_arg1298z00_1184 = 
MAKE_YOUNG_PAIR(BGl_string1897z00zz__modulez00, BgL_arg1299z00_1185); } 
BgL_list1297z00_1183 = 
MAKE_YOUNG_PAIR(BGl_string1894z00zz__modulez00, BgL_arg1298z00_1184); } 
BGl_warningz00zz__errorz00(BgL_list1297z00_1183); } 
BgL_test2029z00_2549 = ((bool_t)0); } } } 
if(BgL_test2029z00_2549)
{ /* Llib/module.scm 203 */
obj_t BgL_nh1076z00_1177;
{ /* Llib/module.scm 203 */
obj_t BgL_arg1295z00_1179;
{ /* Llib/module.scm 203 */
obj_t BgL_pairz00_1708;
if(
PAIRP(BgL_l1074z00_1158))
{ /* Llib/module.scm 203 */
BgL_pairz00_1708 = BgL_l1074z00_1158; }  else 
{ 
obj_t BgL_auxz00_2572;
BgL_auxz00_2572 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)7811)), BGl_string1896z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_l1074z00_1158); 
FAILURE(BgL_auxz00_2572,BFALSE,BFALSE);} 
BgL_arg1295z00_1179 = 
CAR(BgL_pairz00_1708); } 
{ /* Llib/module.scm 203 */
obj_t BgL_res1691z00_1709;
BgL_res1691z00_1709 = 
MAKE_YOUNG_PAIR(BgL_arg1295z00_1179, BNIL); 
BgL_nh1076z00_1177 = BgL_res1691z00_1709; } } 
SET_CDR(BgL_h1075z00_1159, BgL_nh1076z00_1177); 
{ /* Llib/module.scm 203 */
obj_t BgL_arg1292z00_1178;
{ /* Llib/module.scm 203 */
obj_t BgL_pairz00_1711;
if(
PAIRP(BgL_l1074z00_1158))
{ /* Llib/module.scm 203 */
BgL_pairz00_1711 = BgL_l1074z00_1158; }  else 
{ 
obj_t BgL_auxz00_2581;
BgL_auxz00_2581 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)7811)), BGl_string1896z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_l1074z00_1158); 
FAILURE(BgL_auxz00_2581,BFALSE,BFALSE);} 
BgL_arg1292z00_1178 = 
CDR(BgL_pairz00_1711); } 
{ 
obj_t BgL_h1075z00_2587;obj_t BgL_l1074z00_2586;
BgL_l1074z00_2586 = BgL_arg1292z00_1178; 
BgL_h1075z00_2587 = BgL_nh1076z00_1177; 
BgL_h1075z00_1159 = BgL_h1075z00_2587; 
BgL_l1074z00_1158 = BgL_l1074z00_2586; 
goto BgL_zc3z04anonymousza31276ze3z87_1160;} } }  else 
{ /* Llib/module.scm 203 */
obj_t BgL_arg1296z00_1180;
{ /* Llib/module.scm 203 */
obj_t BgL_pairz00_1712;
if(
PAIRP(BgL_l1074z00_1158))
{ /* Llib/module.scm 203 */
BgL_pairz00_1712 = BgL_l1074z00_1158; }  else 
{ 
obj_t BgL_auxz00_2590;
BgL_auxz00_2590 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)7811)), BGl_string1896z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_l1074z00_1158); 
FAILURE(BgL_auxz00_2590,BFALSE,BFALSE);} 
BgL_arg1296z00_1180 = 
CDR(BgL_pairz00_1712); } 
{ 
obj_t BgL_l1074z00_2595;
BgL_l1074z00_2595 = BgL_arg1296z00_1180; 
BgL_l1074z00_1158 = BgL_l1074z00_2595; 
goto BgL_zc3z04anonymousza31276ze3z87_1160;} } } } } } } 

}



/* module-load-access-file */
BGL_EXPORTED_DEF obj_t BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(obj_t BgL_pathz00_20)
{
{ /* Llib/module.scm 214 */
{ 
obj_t BgL_filez00_1218;obj_t BgL_dirz00_1219;obj_t BgL_abasez00_1220;
{ /* Llib/module.scm 236 */
obj_t BgL_top2038z00_2597;
BgL_top2038z00_2597 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BGl_moduleszd2mutexzd2zz__modulez00); 
BGL_EXITD_PUSH_PROTECT(BgL_top2038z00_2597, BGl_moduleszd2mutexzd2zz__modulez00); BUNSPEC; 
{ /* Llib/module.scm 236 */
obj_t BgL_tmp2037z00_2596;
{ /* Llib/module.scm 237 */
bool_t BgL_test2039z00_2601;
{ /* Llib/module.scm 237 */
obj_t BgL_tmpz00_2602;
{ /* Llib/module.scm 237 */
obj_t BgL_auxz00_2603;
{ /* Llib/module.scm 237 */
obj_t BgL_aux1830z00_2137;
BgL_aux1830z00_2137 = BGl_za2afileszd2tableza2zd2zz__modulez00; 
if(
STRUCTP(BgL_aux1830z00_2137))
{ /* Llib/module.scm 237 */
BgL_auxz00_2603 = BgL_aux1830z00_2137
; }  else 
{ 
obj_t BgL_auxz00_2606;
BgL_auxz00_2606 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)9026)), BGl_string1898z00zz__modulez00, BGl_string1899z00zz__modulez00, BgL_aux1830z00_2137); 
FAILURE(BgL_auxz00_2606,BFALSE,BFALSE);} } 
BgL_tmpz00_2602 = 
BGl_hashtablezd2getzd2zz__hashz00(BgL_auxz00_2603, BgL_pathz00_20); } 
BgL_test2039z00_2601 = 
CBOOL(BgL_tmpz00_2602); } 
if(BgL_test2039z00_2601)
{ /* Llib/module.scm 237 */
BgL_tmp2037z00_2596 = BFALSE; }  else 
{ /* Llib/module.scm 237 */
if(
bgl_directoryp(
BSTRING_TO_STRING(BgL_pathz00_20)))
{ 
obj_t BgL_dz00_1198;
BgL_dz00_1198 = BgL_pathz00_20; 
BgL_zc3z04anonymousza31304ze3z87_1199:
{ /* Llib/module.scm 241 */
obj_t BgL_filez00_1200;
BgL_filez00_1200 = 
BGl_makezd2filezd2namez00zz__osz00(BgL_dz00_1198, BGl_string1900z00zz__modulez00); 
if(
fexists(
BSTRING_TO_STRING(BgL_filez00_1200)))
{ /* Llib/module.scm 242 */
BgL_filez00_1218 = BgL_filez00_1200; 
BgL_dirz00_1219 = BgL_dz00_1198; 
BgL_abasez00_1220 = BgL_pathz00_20; 
BgL_zc3z04anonymousza31316ze3z87_1221:
{ /* Llib/module.scm 225 */
obj_t BgL_zc3z04anonymousza31318ze3z87_2067;
BgL_zc3z04anonymousza31318ze3z87_2067 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31318ze3ze5zz__modulez00, 
(int)(((long)1)), 
(int)(((long)4))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31318ze3z87_2067, 
(int)(((long)0)), BgL_pathz00_20); 
PROCEDURE_SET(BgL_zc3z04anonymousza31318ze3z87_2067, 
(int)(((long)1)), BgL_filez00_1218); 
PROCEDURE_SET(BgL_zc3z04anonymousza31318ze3z87_2067, 
(int)(((long)2)), BgL_dirz00_1219); 
PROCEDURE_SET(BgL_zc3z04anonymousza31318ze3z87_2067, 
(int)(((long)3)), BgL_abasez00_1220); 
BgL_tmp2037z00_2596 = 
BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(BgL_filez00_1218, BgL_zc3z04anonymousza31318ze3z87_2067); } }  else 
{ /* Llib/module.scm 244 */
obj_t BgL_parentz00_1202;
BgL_parentz00_1202 = 
BGl_dirnamez00zz__osz00(BgL_dz00_1198); 
{ /* Llib/module.scm 245 */
bool_t BgL_test2043z00_2632;
{ /* Llib/module.scm 245 */
bool_t BgL_res1714z00_1781;
{ /* Llib/module.scm 245 */
long BgL_l1z00_1768;
BgL_l1z00_1768 = 
STRING_LENGTH(BgL_parentz00_1202); 
if(
(BgL_l1z00_1768==
STRING_LENGTH(BgL_dz00_1198)))
{ /* Llib/module.scm 245 */
int BgL_arg1388z00_1771;
{ /* Llib/module.scm 245 */
char * BgL_auxz00_2639;char * BgL_tmpz00_2637;
BgL_auxz00_2639 = 
BSTRING_TO_STRING(BgL_dz00_1198); 
BgL_tmpz00_2637 = 
BSTRING_TO_STRING(BgL_parentz00_1202); 
BgL_arg1388z00_1771 = 
memcmp(BgL_tmpz00_2637, BgL_auxz00_2639, BgL_l1z00_1768); } 
BgL_res1714z00_1781 = 
(
(long)(BgL_arg1388z00_1771)==((long)0)); }  else 
{ /* Llib/module.scm 245 */
BgL_res1714z00_1781 = ((bool_t)0); } } 
BgL_test2043z00_2632 = BgL_res1714z00_1781; } 
if(BgL_test2043z00_2632)
{ /* Llib/module.scm 245 */
BgL_tmp2037z00_2596 = BFALSE; }  else 
{ 
obj_t BgL_dz00_2644;
BgL_dz00_2644 = BgL_parentz00_1202; 
BgL_dz00_1198 = BgL_dz00_2644; 
goto BgL_zc3z04anonymousza31304ze3z87_1199;} } } } }  else 
{ /* Llib/module.scm 239 */
if(
fexists(
BSTRING_TO_STRING(BgL_pathz00_20)))
{ /* Llib/module.scm 248 */
obj_t BgL_dirz00_1206;
BgL_dirz00_1206 = 
BGl_dirnamez00zz__osz00(BgL_pathz00_20); 
{ 
obj_t BgL_abasez00_2651;obj_t BgL_dirz00_2650;obj_t BgL_filez00_2649;
BgL_filez00_2649 = BgL_pathz00_20; 
BgL_dirz00_2650 = BgL_dirz00_1206; 
BgL_abasez00_2651 = BgL_dirz00_1206; 
BgL_abasez00_1220 = BgL_abasez00_2651; 
BgL_dirz00_1219 = BgL_dirz00_2650; 
BgL_filez00_1218 = BgL_filez00_2649; 
goto BgL_zc3z04anonymousza31316ze3z87_1221;} }  else 
{ /* Llib/module.scm 247 */
BgL_tmp2037z00_2596 = BFALSE; } } } } 
BGL_EXITD_POP_PROTECT(BgL_top2038z00_2597); BUNSPEC; 
BGL_MUTEX_UNLOCK(BGl_moduleszd2mutexzd2zz__modulez00); 
return BgL_tmp2037z00_2596;} } } } 

}



/* &module-load-access-file */
obj_t BGl_z62modulezd2loadzd2accesszd2filezb0zz__modulez00(obj_t BgL_envz00_2068, obj_t BgL_pathz00_2069)
{
{ /* Llib/module.scm 214 */
{ /* Llib/module.scm 218 */
obj_t BgL_auxz00_2654;
if(
STRINGP(BgL_pathz00_2069))
{ /* Llib/module.scm 218 */
BgL_auxz00_2654 = BgL_pathz00_2069
; }  else 
{ 
obj_t BgL_auxz00_2657;
BgL_auxz00_2657 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)8411)), BGl_string1901z00zz__modulez00, BGl_string1870z00zz__modulez00, BgL_pathz00_2069); 
FAILURE(BgL_auxz00_2657,BFALSE,BFALSE);} 
return 
BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(BgL_auxz00_2654);} } 

}



/* &<@anonymous:1318> */
obj_t BGl_z62zc3z04anonymousza31318ze3ze5zz__modulez00(obj_t BgL_envz00_2070, obj_t BgL_portz00_2075)
{
{ /* Llib/module.scm 224 */
{ /* Llib/module.scm 225 */
obj_t BgL_pathz00_2071;obj_t BgL_filez00_2072;obj_t BgL_dirz00_2073;obj_t BgL_abasez00_2074;
BgL_pathz00_2071 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_2070, 
(int)(((long)0)))); 
BgL_filez00_2072 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_2070, 
(int)(((long)1)))); 
BgL_dirz00_2073 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_2070, 
(int)(((long)2)))); 
BgL_abasez00_2074 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_2070, 
(int)(((long)3)))); 
{ 
obj_t BgL_fz00_2180;obj_t BgL_abasez00_2181;
{ /* Llib/module.scm 225 */
obj_t BgL_auxz00_2674;
{ /* Llib/module.scm 225 */
obj_t BgL_aux1836z00_2187;
BgL_aux1836z00_2187 = BGl_za2afileszd2tableza2zd2zz__modulez00; 
if(
STRUCTP(BgL_aux1836z00_2187))
{ /* Llib/module.scm 225 */
BgL_auxz00_2674 = BgL_aux1836z00_2187
; }  else 
{ 
obj_t BgL_auxz00_2677;
BgL_auxz00_2677 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)8653)), BGl_string1905z00zz__modulez00, BGl_string1899z00zz__modulez00, BgL_aux1836z00_2187); 
FAILURE(BgL_auxz00_2677,BFALSE,BFALSE);} } 
BGl_hashtablezd2putz12zc0zz__hashz00(BgL_auxz00_2674, BgL_pathz00_2071, BgL_filez00_2072); } 
{ /* Llib/module.scm 226 */
obj_t BgL_g1085z00_2188;
BgL_g1085z00_2188 = 
BGl_modulezd2readzd2accesszd2filezd2zz__modulez00(BgL_portz00_2075); 
{ 
obj_t BgL_l1083z00_2190;
BgL_l1083z00_2190 = BgL_g1085z00_2188; 
BgL_zc3z04anonymousza31319ze3z87_2189:
if(
PAIRP(BgL_l1083z00_2190))
{ /* Llib/module.scm 234 */
{ /* Llib/module.scm 227 */
obj_t BgL_accessz00_2191;
BgL_accessz00_2191 = 
CAR(BgL_l1083z00_2190); 
{ /* Llib/module.scm 227 */
obj_t BgL_infoz00_2192;
{ /* Llib/module.scm 227 */
bool_t BgL_test2049z00_2686;
{ /* Llib/module.scm 227 */
bool_t BgL_res1705z00_2193;
{ /* Llib/module.scm 227 */
long BgL_l1z00_2194;
BgL_l1z00_2194 = 
STRING_LENGTH(BgL_dirz00_2073); 
if(
(BgL_l1z00_2194==((long)1)))
{ /* Llib/module.scm 227 */
int BgL_arg1388z00_2195;
{ /* Llib/module.scm 227 */
char * BgL_auxz00_2692;char * BgL_tmpz00_2690;
BgL_auxz00_2692 = 
BSTRING_TO_STRING(BGl_string1868z00zz__modulez00); 
BgL_tmpz00_2690 = 
BSTRING_TO_STRING(BgL_dirz00_2073); 
BgL_arg1388z00_2195 = 
memcmp(BgL_tmpz00_2690, BgL_auxz00_2692, BgL_l1z00_2194); } 
BgL_res1705z00_2193 = 
(
(long)(BgL_arg1388z00_2195)==((long)0)); }  else 
{ /* Llib/module.scm 227 */
BgL_res1705z00_2193 = ((bool_t)0); } } 
BgL_test2049z00_2686 = BgL_res1705z00_2193; } 
if(BgL_test2049z00_2686)
{ /* Llib/module.scm 228 */
obj_t BgL_pairz00_2196;
if(
PAIRP(BgL_accessz00_2191))
{ /* Llib/module.scm 228 */
BgL_pairz00_2196 = BgL_accessz00_2191; }  else 
{ 
obj_t BgL_auxz00_2699;
BgL_auxz00_2699 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)8761)), BGl_string1906z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_accessz00_2191); 
FAILURE(BgL_auxz00_2699,BFALSE,BFALSE);} 
BgL_infoz00_2192 = 
CDR(BgL_pairz00_2196); }  else 
{ /* Llib/module.scm 229 */
obj_t BgL_l01081z00_2197;
{ /* Llib/module.scm 231 */
obj_t BgL_pairz00_2198;
if(
PAIRP(BgL_accessz00_2191))
{ /* Llib/module.scm 231 */
BgL_pairz00_2198 = BgL_accessz00_2191; }  else 
{ 
obj_t BgL_auxz00_2706;
BgL_auxz00_2706 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)8838)), BGl_string1906z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_accessz00_2191); 
FAILURE(BgL_auxz00_2706,BFALSE,BFALSE);} 
BgL_l01081z00_2197 = 
CDR(BgL_pairz00_2198); } 
{ 
obj_t BgL_l1080z00_2200;
BgL_l1080z00_2200 = BgL_l01081z00_2197; 
BgL_zc3z04anonymousza31324ze3z87_2199:
if(
NULLP(BgL_l1080z00_2200))
{ /* Llib/module.scm 231 */
BgL_infoz00_2192 = BgL_l01081z00_2197; }  else 
{ /* Llib/module.scm 231 */
{ /* Llib/module.scm 230 */
obj_t BgL_arg1326z00_2201;
{ /* Llib/module.scm 230 */
obj_t BgL_fz00_2202;
{ /* Llib/module.scm 230 */
obj_t BgL_pairz00_2203;
if(
PAIRP(BgL_l1080z00_2200))
{ /* Llib/module.scm 230 */
BgL_pairz00_2203 = BgL_l1080z00_2200; }  else 
{ 
obj_t BgL_auxz00_2715;
BgL_auxz00_2715 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)8801)), BGl_string1907z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_l1080z00_2200); 
FAILURE(BgL_auxz00_2715,BFALSE,BFALSE);} 
BgL_fz00_2202 = 
CAR(BgL_pairz00_2203); } 
BgL_fz00_2180 = BgL_fz00_2202; 
BgL_abasez00_2181 = BgL_dirz00_2073; 
if(
STRINGP(BgL_fz00_2180))
{ /* Llib/module.scm 219 */
bool_t BgL_test2056z00_2722;
{ /* Llib/module.scm 219 */
bool_t BgL_test2057z00_2723;
{ /* Llib/module.scm 219 */
bool_t BgL_res1697z00_2182;
{ /* Llib/module.scm 219 */
long BgL_l1z00_2183;
BgL_l1z00_2183 = 
STRING_LENGTH(BgL_fz00_2180); 
if(
(BgL_l1z00_2183==((long)0)))
{ /* Llib/module.scm 219 */
int BgL_arg1388z00_2184;
{ /* Llib/module.scm 219 */
char * BgL_auxz00_2729;char * BgL_tmpz00_2727;
BgL_auxz00_2729 = 
BSTRING_TO_STRING(BGl_string1902z00zz__modulez00); 
BgL_tmpz00_2727 = 
BSTRING_TO_STRING(BgL_fz00_2180); 
BgL_arg1388z00_2184 = 
memcmp(BgL_tmpz00_2727, BgL_auxz00_2729, BgL_l1z00_2183); } 
BgL_res1697z00_2182 = 
(
(long)(BgL_arg1388z00_2184)==((long)0)); }  else 
{ /* Llib/module.scm 219 */
BgL_res1697z00_2182 = ((bool_t)0); } } 
BgL_test2057z00_2723 = BgL_res1697z00_2182; } 
if(BgL_test2057z00_2723)
{ /* Llib/module.scm 219 */
BgL_test2056z00_2722 = ((bool_t)1)
; }  else 
{ /* Llib/module.scm 219 */
unsigned char BgL_char2z00_2185;
BgL_char2z00_2185 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/module.scm 219 */
unsigned char BgL_tmpz00_2735;
{ /* Llib/module.scm 219 */
long BgL_l1772z00_2186;
BgL_l1772z00_2186 = 
STRING_LENGTH(BgL_fz00_2180); 
if(
BOUND_CHECK(((long)0), BgL_l1772z00_2186))
{ /* Llib/module.scm 219 */
BgL_tmpz00_2735 = 
STRING_REF(BgL_fz00_2180, ((long)0))
; }  else 
{ 
obj_t BgL_auxz00_2740;
BgL_auxz00_2740 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)8464)), BGl_string1903z00zz__modulez00, BgL_fz00_2180, 
(int)(BgL_l1772z00_2186), 
(int)(((long)0))); 
FAILURE(BgL_auxz00_2740,BFALSE,BFALSE);} } 
BgL_test2056z00_2722 = 
(BgL_tmpz00_2735==BgL_char2z00_2185); } } } 
if(BgL_test2056z00_2722)
{ /* Llib/module.scm 219 */
BgL_arg1326z00_2201 = BgL_fz00_2180; }  else 
{ /* Llib/module.scm 220 */
obj_t BgL_auxz00_2747;
if(
STRINGP(BgL_abasez00_2181))
{ /* Llib/module.scm 220 */
BgL_auxz00_2747 = BgL_abasez00_2181
; }  else 
{ 
obj_t BgL_auxz00_2750;
BgL_auxz00_2750 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)8527)), BGl_string1904z00zz__modulez00, BGl_string1870z00zz__modulez00, BgL_abasez00_2181); 
FAILURE(BgL_auxz00_2750,BFALSE,BFALSE);} 
BgL_arg1326z00_2201 = 
BGl_makezd2filezd2namez00zz__osz00(BgL_auxz00_2747, BgL_fz00_2180); } }  else 
{ /* Llib/module.scm 218 */
BgL_arg1326z00_2201 = BgL_fz00_2180; } } 
{ /* Llib/module.scm 231 */
obj_t BgL_pairz00_2204;
if(
PAIRP(BgL_l1080z00_2200))
{ /* Llib/module.scm 231 */
BgL_pairz00_2204 = BgL_l1080z00_2200; }  else 
{ 
obj_t BgL_auxz00_2757;
BgL_auxz00_2757 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)8833)), BGl_string1907z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_l1080z00_2200); 
FAILURE(BgL_auxz00_2757,BFALSE,BFALSE);} 
SET_CAR(BgL_pairz00_2204, BgL_arg1326z00_2201); } } 
{ /* Llib/module.scm 231 */
obj_t BgL_arg1327z00_2205;
{ /* Llib/module.scm 231 */
obj_t BgL_pairz00_2206;
if(
PAIRP(BgL_l1080z00_2200))
{ /* Llib/module.scm 231 */
BgL_pairz00_2206 = BgL_l1080z00_2200; }  else 
{ 
obj_t BgL_auxz00_2764;
BgL_auxz00_2764 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)8833)), BGl_string1907z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_l1080z00_2200); 
FAILURE(BgL_auxz00_2764,BFALSE,BFALSE);} 
BgL_arg1327z00_2205 = 
CDR(BgL_pairz00_2206); } 
{ 
obj_t BgL_l1080z00_2769;
BgL_l1080z00_2769 = BgL_arg1327z00_2205; 
BgL_l1080z00_2200 = BgL_l1080z00_2769; 
goto BgL_zc3z04anonymousza31324ze3z87_2199;} } } } } } 
{ /* Llib/module.scm 233 */
obj_t BgL_arg1322z00_2207;
{ /* Llib/module.scm 233 */
obj_t BgL_pairz00_2208;
if(
PAIRP(BgL_accessz00_2191))
{ /* Llib/module.scm 233 */
BgL_pairz00_2208 = BgL_accessz00_2191; }  else 
{ 
obj_t BgL_auxz00_2772;
BgL_auxz00_2772 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1851z00zz__modulez00, 
BINT(((long)8898)), BGl_string1906z00zz__modulez00, BGl_string1875z00zz__modulez00, BgL_accessz00_2191); 
FAILURE(BgL_auxz00_2772,BFALSE,BFALSE);} 
BgL_arg1322z00_2207 = 
CAR(BgL_pairz00_2208); } 
BGl_modulezd2addzd2accesszd2innerz12zc0zz__modulez00(BgL_arg1322z00_2207, BgL_infoz00_2192, BgL_abasez00_2074); } } } 
{ 
obj_t BgL_l1083z00_2778;
BgL_l1083z00_2778 = 
CDR(BgL_l1083z00_2190); 
BgL_l1083z00_2190 = BgL_l1083z00_2778; 
goto BgL_zc3z04anonymousza31319ze3z87_2189;} }  else 
{ /* Llib/module.scm 234 */
if(
NULLP(BgL_l1083z00_2190))
{ /* Llib/module.scm 234 */
return BTRUE;}  else 
{ /* Llib/module.scm 234 */
return 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string1908z00zz__modulez00, BGl_string1909z00zz__modulez00, BgL_l1083z00_2190, BGl_string1851z00zz__modulez00, 
BINT(((long)8684)));} } } } } } } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__modulez00()
{
{ /* Llib/module.scm 17 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__modulez00()
{
{ /* Llib/module.scm 17 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__modulez00()
{
{ /* Llib/module.scm 17 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__modulez00()
{
{ /* Llib/module.scm 17 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string1910z00zz__modulez00)); 
BGl_modulezd2initializa7ationz75zz__configurez00(((long)62374350), 
BSTRING_TO_STRING(BGl_string1910z00zz__modulez00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string1910z00zz__modulez00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)193422032), 
BSTRING_TO_STRING(BGl_string1910z00zz__modulez00)); 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)224967910), 
BSTRING_TO_STRING(BGl_string1910z00zz__modulez00)); 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)340267996), 
BSTRING_TO_STRING(BGl_string1910z00zz__modulez00)); 
BGl_modulezd2initializa7ationz75zz__readerz00(((long)220647683), 
BSTRING_TO_STRING(BGl_string1910z00zz__modulez00)); 
return 
BGl_modulezd2initializa7ationz75zz__hashz00(((long)214649622), 
BSTRING_TO_STRING(BGl_string1910z00zz__modulez00));} 

}

#ifdef __cplusplus
}
#endif
