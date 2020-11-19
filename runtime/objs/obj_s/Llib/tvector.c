/*===========================================================================*/
/*   (Llib/tvector.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/tvector.scm -indent -o objs/obj_s/Llib/tvector.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_z62listzd2ze3tvectorz53zz__tvectorz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol1838z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_symbol1840z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_symbol1842z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_symbol1848z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_z62tvectorzf3z91zz__tvectorz00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__tvectorz00 = BUNSPEC;
static obj_t BGl_symbol1850z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_symbol1852z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_symbol1854z00zz__tvectorz00 = BUNSPEC;
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol1864z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_symbol1870z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_symbol1872z00zz__tvectorz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_vectorzd2ze3tvectorz31zz__tvectorz00(obj_t, obj_t);
static obj_t BGl_toplevelzd2initzd2zz__tvectorz00();
static obj_t BGl_z62vectorzd2ze3tvectorz53zz__tvectorz00(obj_t, obj_t, obj_t);
extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_genericzd2initzd2zz__tvectorz00();
BGL_EXPORTED_DECL obj_t BGl_tvectorzd2ze3vectorz31zz__tvectorz00(obj_t);
static obj_t BGl_z62tvectorzd2ze3vectorz53zz__tvectorz00(obj_t, obj_t);
static obj_t BGl_objectzd2initzd2zz__tvectorz00();
BGL_EXPORTED_DECL obj_t BGl_tvectorzd2refzd2zz__tvectorz00(obj_t);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_z62tvectorzd2lengthzb0zz__tvectorz00(obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zz__tvectorz00();
BGL_EXPORTED_DECL bool_t BGl_tvectorzf3zf3zz__tvectorz00(obj_t);
BGL_EXPORTED_DECL obj_t get_tvector_descriptor(obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3tvectorz31zz__tvectorz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_tvectorzd2idzd2zz__tvectorz00(obj_t);
static obj_t BGl_z62tvectorzd2idzb0zz__tvectorz00(obj_t, obj_t);
extern obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_za2tvectorzd2tableza2zd2zz__tvectorz00 = BUNSPEC;
extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62tvectorzd2refzb0zz__tvectorz00(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_tvectorzd2lengthzd2zz__tvectorz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_list1837z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_list1847z00zz__tvectorz00 = BUNSPEC;
extern obj_t create_struct(obj_t, int);
static obj_t BGl_z62getzd2tvectorzd2descriptorz62zz__tvectorz00(obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__tvectorz00();
extern long bgl_list_length(obj_t);
static obj_t BGl_list1863z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_list1869z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_gczd2rootszd2initz00zz__tvectorz00();
static obj_t BGl_importedzd2moduleszd2initz00zz__tvectorz00();
BGL_EXPORTED_DECL obj_t BGl_declarezd2tvectorz12zc0zz__tvectorz00(char *, obj_t, obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, int, int);
static obj_t BGl_z62declarezd2tvectorz12za2zz__tvectorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol1819z00zz__tvectorz00 = BUNSPEC;
extern obj_t BGl_bigloozd2casezd2sensitivityz00zz__readerz00();
extern obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_symbol1824z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_symbol1826z00zz__tvectorz00 = BUNSPEC;
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_tvectorzf3zd2envz21zz__tvectorz00, BgL_bgl_za762tvectorza7f3za7911877za7, BGl_z62tvectorzf3z91zz__tvectorz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3tvectorzd2envze3zz__tvectorz00, BgL_bgl_za762listza7d2za7e3tve1878za7, BGl_z62listzd2ze3tvectorz53zz__tvectorz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tvectorzd2lengthzd2envz00zz__tvectorz00, BgL_bgl_za762tvectorza7d2len1879z00, BGl_z62tvectorzd2lengthzb0zz__tvectorz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1813z00zz__tvectorz00, BgL_bgl_string1813za700za7za7_1880za7, "/tmp/4.4a/runtime/Llib/tvector.scm", 34 );
DEFINE_STRING( BGl_string1814z00zz__tvectorz00, BgL_bgl_string1814za700za7za7_1881za7, "&tvector-length", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_declarezd2tvectorz12zd2envz12zz__tvectorz00, BgL_bgl_za762declareza7d2tve1882z00, BGl_z62declarezd2tvectorz12za2zz__tvectorz00, 0L, BUNSPEC, 4 );
DEFINE_STRING( BGl_string1815z00zz__tvectorz00, BgL_bgl_string1815za700za7za7_1883za7, "tvector", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2tvectorzd2descriptorzd2envzd2zz__tvectorz00, BgL_bgl_za762getza7d2tvector1884z00, BGl_z62getzd2tvectorzd2descriptorz62zz__tvectorz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1816z00zz__tvectorz00, BgL_bgl_string1816za700za7za7_1885za7, "tvector-id", 10 );
DEFINE_STRING( BGl_string1817z00zz__tvectorz00, BgL_bgl_string1817za700za7za7_1886za7, "struct", 6 );
DEFINE_STRING( BGl_string1818z00zz__tvectorz00, BgL_bgl_string1818za700za7za7_1887za7, "symbol", 6 );
DEFINE_STRING( BGl_string1820z00zz__tvectorz00, BgL_bgl_string1820za700za7za7_1888za7, "tvect-descr", 11 );
DEFINE_STRING( BGl_string1821z00zz__tvectorz00, BgL_bgl_string1821za700za7za7_1889za7, "struct-ref:not an instance of", 29 );
DEFINE_STRING( BGl_string1822z00zz__tvectorz00, BgL_bgl_string1822za700za7za7_1890za7, "&tvector-id", 11 );
DEFINE_STRING( BGl_string1823z00zz__tvectorz00, BgL_bgl_string1823za700za7za7_1891za7, "&get-tvector-descriptor", 23 );
DEFINE_STRING( BGl_string1825z00zz__tvectorz00, BgL_bgl_string1825za700za7za7_1892za7, "upcase", 6 );
DEFINE_STRING( BGl_string1827z00zz__tvectorz00, BgL_bgl_string1827za700za7za7_1893za7, "downcase", 8 );
DEFINE_STRING( BGl_string1828z00zz__tvectorz00, BgL_bgl_string1828za700za7za7_1894za7, "declare-tvector!", 16 );
DEFINE_STRING( BGl_string1829z00zz__tvectorz00, BgL_bgl_string1829za700za7za7_1895za7, "struct-set!:not an instance of", 30 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tvectorzd2refzd2envz00zz__tvectorz00, BgL_bgl_za762tvectorza7d2ref1896z00, BGl_z62tvectorzd2refzb0zz__tvectorz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1830z00zz__tvectorz00, BgL_bgl_string1830za700za7za7_1897za7, "&declare-tvector!", 17 );
DEFINE_STRING( BGl_string1831z00zz__tvectorz00, BgL_bgl_string1831za700za7za7_1898za7, "bstring", 7 );
DEFINE_STRING( BGl_string1832z00zz__tvectorz00, BgL_bgl_string1832za700za7za7_1899za7, "procedure", 9 );
DEFINE_STRING( BGl_string1833z00zz__tvectorz00, BgL_bgl_string1833za700za7za7_1900za7, "tvector-ref", 11 );
DEFINE_STRING( BGl_string1834z00zz__tvectorz00, BgL_bgl_string1834za700za7za7_1901za7, "&tvector-ref", 12 );
DEFINE_STRING( BGl_string1835z00zz__tvectorz00, BgL_bgl_string1835za700za7za7_1902za7, "list->tvector", 13 );
DEFINE_STRING( BGl_string1836z00zz__tvectorz00, BgL_bgl_string1836za700za7za7_1903za7, "list->tvector:Wrong number of arguments", 39 );
DEFINE_STRING( BGl_string1839z00zz__tvectorz00, BgL_bgl_string1839za700za7za7_1904za7, "funcall", 7 );
DEFINE_STRING( BGl_string1841z00zz__tvectorz00, BgL_bgl_string1841za700za7za7_1905za7, "allocate", 8 );
DEFINE_STRING( BGl_string1843z00zz__tvectorz00, BgL_bgl_string1843za700za7za7_1906za7, "len", 3 );
DEFINE_STRING( BGl_string1844z00zz__tvectorz00, BgL_bgl_string1844za700za7za7_1907za7, "loop", 4 );
DEFINE_STRING( BGl_string1845z00zz__tvectorz00, BgL_bgl_string1845za700za7za7_1908za7, "pair", 4 );
DEFINE_STRING( BGl_string1846z00zz__tvectorz00, BgL_bgl_string1846za700za7za7_1909za7, "loop:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string1849z00zz__tvectorz00, BgL_bgl_string1849za700za7za7_1910za7, "set", 3 );
DEFINE_STRING( BGl_string1851z00zz__tvectorz00, BgL_bgl_string1851za700za7za7_1911za7, "tvec", 4 );
DEFINE_STRING( BGl_string1853z00zz__tvectorz00, BgL_bgl_string1853za700za7za7_1912za7, "i", 1 );
DEFINE_STRING( BGl_string1855z00zz__tvectorz00, BgL_bgl_string1855za700za7za7_1913za7, "arg1263", 7 );
DEFINE_STRING( BGl_string1856z00zz__tvectorz00, BgL_bgl_string1856za700za7za7_1914za7, "Unable to convert to such tvector", 33 );
DEFINE_STRING( BGl_string1857z00zz__tvectorz00, BgL_bgl_string1857za700za7za7_1915za7, "Undeclared tvector", 18 );
DEFINE_STRING( BGl_string1858z00zz__tvectorz00, BgL_bgl_string1858za700za7za7_1916za7, "&list->tvector", 14 );
DEFINE_STRING( BGl_string1859z00zz__tvectorz00, BgL_bgl_string1859za700za7za7_1917za7, "pair-nil", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tvectorzd2idzd2envz00zz__tvectorz00, BgL_bgl_za762tvectorza7d2idza71918za7, BGl_z62tvectorzd2idzb0zz__tvectorz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1860z00zz__tvectorz00, BgL_bgl_string1860za700za7za7_1919za7, "vector->tvector", 15 );
DEFINE_STRING( BGl_string1861z00zz__tvectorz00, BgL_bgl_string1861za700za7za7_1920za7, "vector->tvector:Wrong number of arguments", 41 );
DEFINE_STRING( BGl_string1862z00zz__tvectorz00, BgL_bgl_string1862za700za7za7_1921za7, "vector-ref", 10 );
DEFINE_STRING( BGl_string1865z00zz__tvectorz00, BgL_bgl_string1865za700za7za7_1922za7, "arg1274", 7 );
DEFINE_STRING( BGl_string1866z00zz__tvectorz00, BgL_bgl_string1866za700za7za7_1923za7, "&vector->tvector", 16 );
DEFINE_STRING( BGl_string1867z00zz__tvectorz00, BgL_bgl_string1867za700za7za7_1924za7, "vector", 6 );
DEFINE_STRING( BGl_string1868z00zz__tvectorz00, BgL_bgl_string1868za700za7za7_1925za7, "tvector->vector", 15 );
DEFINE_STRING( BGl_string1871z00zz__tvectorz00, BgL_bgl_string1871za700za7za7_1926za7, "ref", 3 );
DEFINE_STRING( BGl_string1873z00zz__tvectorz00, BgL_bgl_string1873za700za7za7_1927za7, "tv", 2 );
DEFINE_STRING( BGl_string1874z00zz__tvectorz00, BgL_bgl_string1874za700za7za7_1928za7, "vector-set!", 11 );
DEFINE_STRING( BGl_string1875z00zz__tvectorz00, BgL_bgl_string1875za700za7za7_1929za7, "&tvector->vector", 16 );
DEFINE_STRING( BGl_string1876z00zz__tvectorz00, BgL_bgl_string1876za700za7za7_1930za7, "__tvector", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2ze3tvectorzd2envze3zz__tvectorz00, BgL_bgl_za762vectorza7d2za7e3t1931za7, BGl_z62vectorzd2ze3tvectorz53zz__tvectorz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tvectorzd2ze3vectorzd2envze3zz__tvectorz00, BgL_bgl_za762tvectorza7d2za7e31932za7, BGl_z62tvectorzd2ze3vectorz53zz__tvectorz00, 0L, BUNSPEC, 1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_symbol1838z00zz__tvectorz00) );
ADD_ROOT( (void *)(&BGl_symbol1840z00zz__tvectorz00) );
ADD_ROOT( (void *)(&BGl_symbol1842z00zz__tvectorz00) );
ADD_ROOT( (void *)(&BGl_symbol1848z00zz__tvectorz00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__tvectorz00) );
ADD_ROOT( (void *)(&BGl_symbol1850z00zz__tvectorz00) );
ADD_ROOT( (void *)(&BGl_symbol1852z00zz__tvectorz00) );
ADD_ROOT( (void *)(&BGl_symbol1854z00zz__tvectorz00) );
ADD_ROOT( (void *)(&BGl_symbol1864z00zz__tvectorz00) );
ADD_ROOT( (void *)(&BGl_symbol1870z00zz__tvectorz00) );
ADD_ROOT( (void *)(&BGl_symbol1872z00zz__tvectorz00) );
ADD_ROOT( (void *)(&BGl_za2tvectorzd2tableza2zd2zz__tvectorz00) );
ADD_ROOT( (void *)(&BGl_list1837z00zz__tvectorz00) );
ADD_ROOT( (void *)(&BGl_list1847z00zz__tvectorz00) );
ADD_ROOT( (void *)(&BGl_list1863z00zz__tvectorz00) );
ADD_ROOT( (void *)(&BGl_list1869z00zz__tvectorz00) );
ADD_ROOT( (void *)(&BGl_symbol1819z00zz__tvectorz00) );
ADD_ROOT( (void *)(&BGl_symbol1824z00zz__tvectorz00) );
ADD_ROOT( (void *)(&BGl_symbol1826z00zz__tvectorz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long BgL_checksumz00_2115, char * BgL_fromz00_2116)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__tvectorz00))
{ 
BGl_requirezd2initializa7ationz75zz__tvectorz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__tvectorz00(); 
BGl_cnstzd2initzd2zz__tvectorz00(); 
BGl_importedzd2moduleszd2initz00zz__tvectorz00(); 
return 
BGl_toplevelzd2initzd2zz__tvectorz00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__tvectorz00()
{
{ /* Llib/tvector.scm 14 */
BGl_symbol1819z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string1820z00zz__tvectorz00); 
BGl_symbol1824z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string1825z00zz__tvectorz00); 
BGl_symbol1826z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string1827z00zz__tvectorz00); 
BGl_symbol1838z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string1839z00zz__tvectorz00); 
BGl_symbol1840z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string1841z00zz__tvectorz00); 
BGl_symbol1842z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string1843z00zz__tvectorz00); 
BGl_list1837z00zz__tvectorz00 = 
MAKE_YOUNG_PAIR(BGl_symbol1838z00zz__tvectorz00, 
MAKE_YOUNG_PAIR(BGl_symbol1840z00zz__tvectorz00, 
MAKE_YOUNG_PAIR(BGl_symbol1840z00zz__tvectorz00, 
MAKE_YOUNG_PAIR(BGl_symbol1842z00zz__tvectorz00, BNIL)))); 
BGl_symbol1848z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string1849z00zz__tvectorz00); 
BGl_symbol1850z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string1851z00zz__tvectorz00); 
BGl_symbol1852z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string1853z00zz__tvectorz00); 
BGl_symbol1854z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string1855z00zz__tvectorz00); 
BGl_list1847z00zz__tvectorz00 = 
MAKE_YOUNG_PAIR(BGl_symbol1838z00zz__tvectorz00, 
MAKE_YOUNG_PAIR(BGl_symbol1848z00zz__tvectorz00, 
MAKE_YOUNG_PAIR(BGl_symbol1848z00zz__tvectorz00, 
MAKE_YOUNG_PAIR(BGl_symbol1850z00zz__tvectorz00, 
MAKE_YOUNG_PAIR(BGl_symbol1852z00zz__tvectorz00, 
MAKE_YOUNG_PAIR(BGl_symbol1854z00zz__tvectorz00, BNIL)))))); 
BGl_symbol1864z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string1865z00zz__tvectorz00); 
BGl_list1863z00zz__tvectorz00 = 
MAKE_YOUNG_PAIR(BGl_symbol1838z00zz__tvectorz00, 
MAKE_YOUNG_PAIR(BGl_symbol1848z00zz__tvectorz00, 
MAKE_YOUNG_PAIR(BGl_symbol1848z00zz__tvectorz00, 
MAKE_YOUNG_PAIR(BGl_symbol1850z00zz__tvectorz00, 
MAKE_YOUNG_PAIR(BGl_symbol1852z00zz__tvectorz00, 
MAKE_YOUNG_PAIR(BGl_symbol1864z00zz__tvectorz00, BNIL)))))); 
BGl_symbol1870z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string1871z00zz__tvectorz00); 
BGl_symbol1872z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string1873z00zz__tvectorz00); 
return ( 
BGl_list1869z00zz__tvectorz00 = 
MAKE_YOUNG_PAIR(BGl_symbol1838z00zz__tvectorz00, 
MAKE_YOUNG_PAIR(BGl_symbol1870z00zz__tvectorz00, 
MAKE_YOUNG_PAIR(BGl_symbol1870z00zz__tvectorz00, 
MAKE_YOUNG_PAIR(BGl_symbol1872z00zz__tvectorz00, 
MAKE_YOUNG_PAIR(BGl_symbol1852z00zz__tvectorz00, BNIL))))), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__tvectorz00()
{
{ /* Llib/tvector.scm 14 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__tvectorz00()
{
{ /* Llib/tvector.scm 14 */
return ( 
BGl_za2tvectorzd2tableza2zd2zz__tvectorz00 = BNIL, BUNSPEC) ;} 

}



/* tvector? */
BGL_EXPORTED_DEF bool_t BGl_tvectorzf3zf3zz__tvectorz00(obj_t BgL_objz00_3)
{
{ /* Llib/tvector.scm 92 */
return 
TVECTORP(BgL_objz00_3);} 

}



/* &tvector? */
obj_t BGl_z62tvectorzf3z91zz__tvectorz00(obj_t BgL_envz00_1986, obj_t BgL_objz00_1987)
{
{ /* Llib/tvector.scm 92 */
return 
BBOOL(
BGl_tvectorzf3zf3zz__tvectorz00(BgL_objz00_1987));} 

}



/* tvector-length */
BGL_EXPORTED_DEF int BGl_tvectorzd2lengthzd2zz__tvectorz00(obj_t BgL_objz00_4)
{
{ /* Llib/tvector.scm 98 */
return 
TVECTOR_LENGTH(BgL_objz00_4);} 

}



/* &tvector-length */
obj_t BGl_z62tvectorzd2lengthzb0zz__tvectorz00(obj_t BgL_envz00_1988, obj_t BgL_objz00_1989)
{
{ /* Llib/tvector.scm 98 */
{ /* Llib/tvector.scm 99 */
int BgL_tmpz00_2163;
{ /* Llib/tvector.scm 99 */
obj_t BgL_auxz00_2164;
if(
TVECTORP(BgL_objz00_1989))
{ /* Llib/tvector.scm 99 */
BgL_auxz00_2164 = BgL_objz00_1989
; }  else 
{ 
obj_t BgL_auxz00_2167;
BgL_auxz00_2167 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)3558)), BGl_string1814z00zz__tvectorz00, BGl_string1815z00zz__tvectorz00, BgL_objz00_1989); 
FAILURE(BgL_auxz00_2167,BFALSE,BFALSE);} 
BgL_tmpz00_2163 = 
BGl_tvectorzd2lengthzd2zz__tvectorz00(BgL_auxz00_2164); } 
return 
BINT(BgL_tmpz00_2163);} } 

}



/* tvector-id */
BGL_EXPORTED_DEF obj_t BGl_tvectorzd2idzd2zz__tvectorz00(obj_t BgL_tvectz00_5)
{
{ /* Llib/tvector.scm 104 */
{ /* Llib/tvector.scm 105 */
obj_t BgL_arg1165z00_1572;
BgL_arg1165z00_1572 = 
TVECTOR_DESCR(BgL_tvectz00_5); 
{ /* Llib/tvector.scm 113 */
bool_t BgL_test1935z00_2174;
{ /* Llib/tvector.scm 113 */
obj_t BgL_tmpz00_2175;
{ /* Llib/tvector.scm 113 */
obj_t BgL_res1616z00_1576;
{ /* Llib/tvector.scm 113 */
obj_t BgL_sz00_1575;
if(
STRUCTP(BgL_arg1165z00_1572))
{ /* Llib/tvector.scm 113 */
BgL_sz00_1575 = BgL_arg1165z00_1572; }  else 
{ 
obj_t BgL_auxz00_2178;
BgL_auxz00_2178 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1816z00zz__tvectorz00, BGl_string1817z00zz__tvectorz00, BgL_arg1165z00_1572); 
FAILURE(BgL_auxz00_2178,BFALSE,BFALSE);} 
{ /* Llib/tvector.scm 113 */
obj_t BgL_aux1724z00_2022;
BgL_aux1724z00_2022 = 
STRUCT_KEY(BgL_sz00_1575); 
if(
SYMBOLP(BgL_aux1724z00_2022))
{ /* Llib/tvector.scm 113 */
BgL_res1616z00_1576 = BgL_aux1724z00_2022; }  else 
{ 
obj_t BgL_auxz00_2185;
BgL_auxz00_2185 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1816z00zz__tvectorz00, BGl_string1818z00zz__tvectorz00, BgL_aux1724z00_2022); 
FAILURE(BgL_auxz00_2185,BFALSE,BFALSE);} } } 
BgL_tmpz00_2175 = BgL_res1616z00_1576; } 
BgL_test1935z00_2174 = 
(BgL_tmpz00_2175==BGl_symbol1819z00zz__tvectorz00); } 
if(BgL_test1935z00_2174)
{ /* Llib/tvector.scm 113 */
int BgL_tmpz00_2190;
BgL_tmpz00_2190 = 
(int)(((long)0)); 
return 
STRUCT_REF(BgL_arg1165z00_1572, BgL_tmpz00_2190);}  else 
{ /* Llib/tvector.scm 113 */
return 
BGl_errorz00zz__errorz00(BGl_string1821z00zz__tvectorz00, BGl_string1820z00zz__tvectorz00, BgL_arg1165z00_1572);} } } } 

}



/* &tvector-id */
obj_t BGl_z62tvectorzd2idzb0zz__tvectorz00(obj_t BgL_envz00_1990, obj_t BgL_tvectz00_1991)
{
{ /* Llib/tvector.scm 104 */
{ /* Llib/tvector.scm 105 */
obj_t BgL_auxz00_2194;
if(
TVECTORP(BgL_tvectz00_1991))
{ /* Llib/tvector.scm 105 */
BgL_auxz00_2194 = BgL_tvectz00_1991
; }  else 
{ 
obj_t BgL_auxz00_2197;
BgL_auxz00_2197 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)3850)), BGl_string1822z00zz__tvectorz00, BGl_string1815z00zz__tvectorz00, BgL_tvectz00_1991); 
FAILURE(BgL_auxz00_2197,BFALSE,BFALSE);} 
return 
BGl_tvectorzd2idzd2zz__tvectorz00(BgL_auxz00_2194);} } 

}



/* get-tvector-descriptor */
BGL_EXPORTED_DEF obj_t get_tvector_descriptor(obj_t BgL_idz00_24)
{
{ /* Llib/tvector.scm 127 */
if(
NULLP(BGl_za2tvectorzd2tableza2zd2zz__tvectorz00))
{ /* Llib/tvector.scm 128 */
return BFALSE;}  else 
{ /* Llib/tvector.scm 129 */
obj_t BgL_cellz00_1116;
BgL_cellz00_1116 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_24, BGl_za2tvectorzd2tableza2zd2zz__tvectorz00); 
if(
PAIRP(BgL_cellz00_1116))
{ /* Llib/tvector.scm 130 */
return 
CDR(BgL_cellz00_1116);}  else 
{ /* Llib/tvector.scm 130 */
return BFALSE;} } } 

}



/* &get-tvector-descriptor */
obj_t BGl_z62getzd2tvectorzd2descriptorz62zz__tvectorz00(obj_t BgL_envz00_1992, obj_t BgL_idz00_1993)
{
{ /* Llib/tvector.scm 127 */
{ /* Llib/tvector.scm 128 */
obj_t BgL_auxz00_2208;
if(
SYMBOLP(BgL_idz00_1993))
{ /* Llib/tvector.scm 128 */
BgL_auxz00_2208 = BgL_idz00_1993
; }  else 
{ 
obj_t BgL_auxz00_2211;
BgL_auxz00_2211 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)5101)), BGl_string1823z00zz__tvectorz00, BGl_string1818z00zz__tvectorz00, BgL_idz00_1993); 
FAILURE(BgL_auxz00_2211,BFALSE,BFALSE);} 
return 
get_tvector_descriptor(BgL_auxz00_2208);} } 

}



/* declare-tvector! */
BGL_EXPORTED_DEF obj_t BGl_declarezd2tvectorz12zc0zz__tvectorz00(char * BgL_idz00_25, obj_t BgL_allocatez00_26, obj_t BgL_refz00_27, obj_t BgL_setz00_28)
{
{ /* Llib/tvector.scm 141 */
{ /* Llib/tvector.scm 142 */
obj_t BgL_idz00_1118;
{ /* Llib/tvector.scm 142 */
obj_t BgL_arg1252z00_1123;
{ /* Llib/tvector.scm 142 */
obj_t BgL_casezd2valuezd2_1124;
BgL_casezd2valuezd2_1124 = 
BGl_bigloozd2casezd2sensitivityz00zz__readerz00(); 
if(
(BgL_casezd2valuezd2_1124==BGl_symbol1824z00zz__tvectorz00))
{ /* Llib/tvector.scm 142 */
BgL_arg1252z00_1123 = 
BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(
string_to_bstring(BgL_idz00_25)); }  else 
{ /* Llib/tvector.scm 142 */
if(
(BgL_casezd2valuezd2_1124==BGl_symbol1826z00zz__tvectorz00))
{ /* Llib/tvector.scm 142 */
BgL_arg1252z00_1123 = 
BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(
string_to_bstring(BgL_idz00_25)); }  else 
{ /* Llib/tvector.scm 142 */
BgL_arg1252z00_1123 = 
string_to_bstring(BgL_idz00_25); } } } 
BgL_idz00_1118 = 
bstring_to_symbol(BgL_arg1252z00_1123); } 
{ /* Llib/tvector.scm 142 */
obj_t BgL_oldz00_1119;
BgL_oldz00_1119 = 
get_tvector_descriptor(BgL_idz00_1118); 
{ /* Llib/tvector.scm 149 */

{ /* Llib/tvector.scm 150 */
bool_t BgL_test1944z00_2228;
if(
STRUCTP(BgL_oldz00_1119))
{ /* Llib/tvector.scm 113 */
obj_t BgL_tmpz00_2231;
{ /* Llib/tvector.scm 113 */
obj_t BgL_res1637z00_1645;
{ /* Llib/tvector.scm 113 */
obj_t BgL_aux1731z00_2028;
BgL_aux1731z00_2028 = 
STRUCT_KEY(BgL_oldz00_1119); 
if(
SYMBOLP(BgL_aux1731z00_2028))
{ /* Llib/tvector.scm 113 */
BgL_res1637z00_1645 = BgL_aux1731z00_2028; }  else 
{ 
obj_t BgL_auxz00_2235;
BgL_auxz00_2235 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1828z00zz__tvectorz00, BGl_string1818z00zz__tvectorz00, BgL_aux1731z00_2028); 
FAILURE(BgL_auxz00_2235,BFALSE,BFALSE);} } 
BgL_tmpz00_2231 = BgL_res1637z00_1645; } 
BgL_test1944z00_2228 = 
(BgL_tmpz00_2231==BGl_symbol1819z00zz__tvectorz00); }  else 
{ /* Llib/tvector.scm 113 */
BgL_test1944z00_2228 = ((bool_t)0)
; } 
if(BgL_test1944z00_2228)
{ /* Llib/tvector.scm 150 */
return BgL_oldz00_1119;}  else 
{ /* Llib/tvector.scm 151 */
obj_t BgL_newz00_1121;
{ /* Llib/tvector.scm 113 */
obj_t BgL_newz00_1646;
BgL_newz00_1646 = 
create_struct(BGl_symbol1819z00zz__tvectorz00, 
(int)(((long)4))); 
{ /* Llib/tvector.scm 113 */
bool_t BgL_test1947z00_2242;
{ /* Llib/tvector.scm 113 */
obj_t BgL_tmpz00_2243;
{ /* Llib/tvector.scm 113 */
obj_t BgL_res1638z00_1650;
{ /* Llib/tvector.scm 113 */
obj_t BgL_aux1733z00_2030;
BgL_aux1733z00_2030 = 
STRUCT_KEY(BgL_newz00_1646); 
if(
SYMBOLP(BgL_aux1733z00_2030))
{ /* Llib/tvector.scm 113 */
BgL_res1638z00_1650 = BgL_aux1733z00_2030; }  else 
{ 
obj_t BgL_auxz00_2247;
BgL_auxz00_2247 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1828z00zz__tvectorz00, BGl_string1818z00zz__tvectorz00, BgL_aux1733z00_2030); 
FAILURE(BgL_auxz00_2247,BFALSE,BFALSE);} } 
BgL_tmpz00_2243 = BgL_res1638z00_1650; } 
BgL_test1947z00_2242 = 
(BgL_tmpz00_2243==BGl_symbol1819z00zz__tvectorz00); } 
if(BgL_test1947z00_2242)
{ /* Llib/tvector.scm 113 */
int BgL_tmpz00_2252;
BgL_tmpz00_2252 = 
(int)(((long)3)); 
STRUCT_SET(BgL_newz00_1646, BgL_tmpz00_2252, BgL_setz00_28); }  else 
{ /* Llib/tvector.scm 113 */
BGl_errorz00zz__errorz00(BGl_string1829z00zz__tvectorz00, BGl_string1820z00zz__tvectorz00, BgL_newz00_1646); } } 
{ /* Llib/tvector.scm 113 */
bool_t BgL_test1949z00_2256;
{ /* Llib/tvector.scm 113 */
obj_t BgL_tmpz00_2257;
{ /* Llib/tvector.scm 113 */
obj_t BgL_res1639z00_1654;
{ /* Llib/tvector.scm 113 */
obj_t BgL_aux1735z00_2032;
BgL_aux1735z00_2032 = 
STRUCT_KEY(BgL_newz00_1646); 
if(
SYMBOLP(BgL_aux1735z00_2032))
{ /* Llib/tvector.scm 113 */
BgL_res1639z00_1654 = BgL_aux1735z00_2032; }  else 
{ 
obj_t BgL_auxz00_2261;
BgL_auxz00_2261 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1828z00zz__tvectorz00, BGl_string1818z00zz__tvectorz00, BgL_aux1735z00_2032); 
FAILURE(BgL_auxz00_2261,BFALSE,BFALSE);} } 
BgL_tmpz00_2257 = BgL_res1639z00_1654; } 
BgL_test1949z00_2256 = 
(BgL_tmpz00_2257==BGl_symbol1819z00zz__tvectorz00); } 
if(BgL_test1949z00_2256)
{ /* Llib/tvector.scm 113 */
int BgL_tmpz00_2266;
BgL_tmpz00_2266 = 
(int)(((long)2)); 
STRUCT_SET(BgL_newz00_1646, BgL_tmpz00_2266, BgL_refz00_27); }  else 
{ /* Llib/tvector.scm 113 */
BGl_errorz00zz__errorz00(BGl_string1829z00zz__tvectorz00, BGl_string1820z00zz__tvectorz00, BgL_newz00_1646); } } 
{ /* Llib/tvector.scm 113 */
bool_t BgL_test1951z00_2270;
{ /* Llib/tvector.scm 113 */
obj_t BgL_tmpz00_2271;
{ /* Llib/tvector.scm 113 */
obj_t BgL_res1640z00_1658;
{ /* Llib/tvector.scm 113 */
obj_t BgL_aux1737z00_2034;
BgL_aux1737z00_2034 = 
STRUCT_KEY(BgL_newz00_1646); 
if(
SYMBOLP(BgL_aux1737z00_2034))
{ /* Llib/tvector.scm 113 */
BgL_res1640z00_1658 = BgL_aux1737z00_2034; }  else 
{ 
obj_t BgL_auxz00_2275;
BgL_auxz00_2275 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1828z00zz__tvectorz00, BGl_string1818z00zz__tvectorz00, BgL_aux1737z00_2034); 
FAILURE(BgL_auxz00_2275,BFALSE,BFALSE);} } 
BgL_tmpz00_2271 = BgL_res1640z00_1658; } 
BgL_test1951z00_2270 = 
(BgL_tmpz00_2271==BGl_symbol1819z00zz__tvectorz00); } 
if(BgL_test1951z00_2270)
{ /* Llib/tvector.scm 113 */
int BgL_tmpz00_2280;
BgL_tmpz00_2280 = 
(int)(((long)1)); 
STRUCT_SET(BgL_newz00_1646, BgL_tmpz00_2280, BgL_allocatez00_26); }  else 
{ /* Llib/tvector.scm 113 */
BGl_errorz00zz__errorz00(BGl_string1829z00zz__tvectorz00, BGl_string1820z00zz__tvectorz00, BgL_newz00_1646); } } 
{ /* Llib/tvector.scm 113 */
bool_t BgL_test1953z00_2284;
{ /* Llib/tvector.scm 113 */
obj_t BgL_tmpz00_2285;
{ /* Llib/tvector.scm 113 */
obj_t BgL_res1641z00_1662;
{ /* Llib/tvector.scm 113 */
obj_t BgL_aux1739z00_2036;
BgL_aux1739z00_2036 = 
STRUCT_KEY(BgL_newz00_1646); 
if(
SYMBOLP(BgL_aux1739z00_2036))
{ /* Llib/tvector.scm 113 */
BgL_res1641z00_1662 = BgL_aux1739z00_2036; }  else 
{ 
obj_t BgL_auxz00_2289;
BgL_auxz00_2289 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1828z00zz__tvectorz00, BGl_string1818z00zz__tvectorz00, BgL_aux1739z00_2036); 
FAILURE(BgL_auxz00_2289,BFALSE,BFALSE);} } 
BgL_tmpz00_2285 = BgL_res1641z00_1662; } 
BgL_test1953z00_2284 = 
(BgL_tmpz00_2285==BGl_symbol1819z00zz__tvectorz00); } 
if(BgL_test1953z00_2284)
{ /* Llib/tvector.scm 113 */
int BgL_tmpz00_2294;
BgL_tmpz00_2294 = 
(int)(((long)0)); 
STRUCT_SET(BgL_newz00_1646, BgL_tmpz00_2294, BgL_idz00_1118); }  else 
{ /* Llib/tvector.scm 113 */
BGl_errorz00zz__errorz00(BGl_string1829z00zz__tvectorz00, BGl_string1820z00zz__tvectorz00, BgL_newz00_1646); } } 
BgL_newz00_1121 = BgL_newz00_1646; } 
{ /* Llib/tvector.scm 152 */
obj_t BgL_arg1250z00_1122;
BgL_arg1250z00_1122 = 
MAKE_YOUNG_PAIR(BgL_idz00_1118, BgL_newz00_1121); 
BGl_za2tvectorzd2tableza2zd2zz__tvectorz00 = 
MAKE_YOUNG_PAIR(BgL_arg1250z00_1122, BGl_za2tvectorzd2tableza2zd2zz__tvectorz00); } 
return BgL_newz00_1121;} } } } } } 

}



/* &declare-tvector! */
obj_t BGl_z62declarezd2tvectorz12za2zz__tvectorz00(obj_t BgL_envz00_1994, obj_t BgL_idz00_1995, obj_t BgL_allocatez00_1996, obj_t BgL_refz00_1997, obj_t BgL_setz00_1998)
{
{ /* Llib/tvector.scm 141 */
{ /* Llib/tvector.scm 142 */
obj_t BgL_auxz00_2309;char * BgL_auxz00_2300;
if(
PROCEDUREP(BgL_allocatez00_1996))
{ /* Llib/tvector.scm 142 */
BgL_auxz00_2309 = BgL_allocatez00_1996
; }  else 
{ 
obj_t BgL_auxz00_2312;
BgL_auxz00_2312 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)5790)), BGl_string1830z00zz__tvectorz00, BGl_string1832z00zz__tvectorz00, BgL_allocatez00_1996); 
FAILURE(BgL_auxz00_2312,BFALSE,BFALSE);} 
{ /* Llib/tvector.scm 142 */
obj_t BgL_tmpz00_2301;
if(
STRINGP(BgL_idz00_1995))
{ /* Llib/tvector.scm 142 */
BgL_tmpz00_2301 = BgL_idz00_1995
; }  else 
{ 
obj_t BgL_auxz00_2304;
BgL_auxz00_2304 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)5790)), BGl_string1830z00zz__tvectorz00, BGl_string1831z00zz__tvectorz00, BgL_idz00_1995); 
FAILURE(BgL_auxz00_2304,BFALSE,BFALSE);} 
BgL_auxz00_2300 = 
BSTRING_TO_STRING(BgL_tmpz00_2301); } 
return 
BGl_declarezd2tvectorz12zc0zz__tvectorz00(BgL_auxz00_2300, BgL_auxz00_2309, BgL_refz00_1997, BgL_setz00_1998);} } 

}



/* tvector-ref */
BGL_EXPORTED_DEF obj_t BGl_tvectorzd2refzd2zz__tvectorz00(obj_t BgL_tvectorz00_29)
{
{ /* Llib/tvector.scm 159 */
{ /* Llib/tvector.scm 160 */
obj_t BgL_arg1258z00_1663;
BgL_arg1258z00_1663 = 
TVECTOR_DESCR(BgL_tvectorz00_29); 
{ /* Llib/tvector.scm 113 */
bool_t BgL_test1957z00_2318;
{ /* Llib/tvector.scm 113 */
obj_t BgL_tmpz00_2319;
{ /* Llib/tvector.scm 113 */
obj_t BgL_res1642z00_1667;
{ /* Llib/tvector.scm 113 */
obj_t BgL_sz00_1666;
if(
STRUCTP(BgL_arg1258z00_1663))
{ /* Llib/tvector.scm 113 */
BgL_sz00_1666 = BgL_arg1258z00_1663; }  else 
{ 
obj_t BgL_auxz00_2322;
BgL_auxz00_2322 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1833z00zz__tvectorz00, BGl_string1817z00zz__tvectorz00, BgL_arg1258z00_1663); 
FAILURE(BgL_auxz00_2322,BFALSE,BFALSE);} 
{ /* Llib/tvector.scm 113 */
obj_t BgL_aux1747z00_2044;
BgL_aux1747z00_2044 = 
STRUCT_KEY(BgL_sz00_1666); 
if(
SYMBOLP(BgL_aux1747z00_2044))
{ /* Llib/tvector.scm 113 */
BgL_res1642z00_1667 = BgL_aux1747z00_2044; }  else 
{ 
obj_t BgL_auxz00_2329;
BgL_auxz00_2329 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1833z00zz__tvectorz00, BGl_string1818z00zz__tvectorz00, BgL_aux1747z00_2044); 
FAILURE(BgL_auxz00_2329,BFALSE,BFALSE);} } } 
BgL_tmpz00_2319 = BgL_res1642z00_1667; } 
BgL_test1957z00_2318 = 
(BgL_tmpz00_2319==BGl_symbol1819z00zz__tvectorz00); } 
if(BgL_test1957z00_2318)
{ /* Llib/tvector.scm 113 */
int BgL_tmpz00_2334;
BgL_tmpz00_2334 = 
(int)(((long)2)); 
return 
STRUCT_REF(BgL_arg1258z00_1663, BgL_tmpz00_2334);}  else 
{ /* Llib/tvector.scm 113 */
return 
BGl_errorz00zz__errorz00(BGl_string1821z00zz__tvectorz00, BGl_string1820z00zz__tvectorz00, BgL_arg1258z00_1663);} } } } 

}



/* &tvector-ref */
obj_t BGl_z62tvectorzd2refzb0zz__tvectorz00(obj_t BgL_envz00_1999, obj_t BgL_tvectorz00_2000)
{
{ /* Llib/tvector.scm 159 */
{ /* Llib/tvector.scm 160 */
obj_t BgL_auxz00_2338;
if(
TVECTORP(BgL_tvectorz00_2000))
{ /* Llib/tvector.scm 160 */
BgL_auxz00_2338 = BgL_tvectorz00_2000
; }  else 
{ 
obj_t BgL_auxz00_2341;
BgL_auxz00_2341 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)6511)), BGl_string1834z00zz__tvectorz00, BGl_string1815z00zz__tvectorz00, BgL_tvectorz00_2000); 
FAILURE(BgL_auxz00_2341,BFALSE,BFALSE);} 
return 
BGl_tvectorzd2refzd2zz__tvectorz00(BgL_auxz00_2338);} } 

}



/* list->tvector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3tvectorz31zz__tvectorz00(obj_t BgL_idz00_30, obj_t BgL_lz00_31)
{
{ /* Llib/tvector.scm 165 */
{ /* Llib/tvector.scm 166 */
obj_t BgL_descrz00_1130;
BgL_descrz00_1130 = 
get_tvector_descriptor(BgL_idz00_30); 
if(
CBOOL(BgL_descrz00_1130))
{ /* Llib/tvector.scm 169 */
obj_t BgL_allocatez00_1131;obj_t BgL_setz00_1132;
{ /* Llib/tvector.scm 113 */
bool_t BgL_test1962z00_2349;
{ /* Llib/tvector.scm 113 */
obj_t BgL_tmpz00_2350;
{ /* Llib/tvector.scm 113 */
obj_t BgL_res1643z00_1671;
{ /* Llib/tvector.scm 113 */
obj_t BgL_sz00_1670;
if(
STRUCTP(BgL_descrz00_1130))
{ /* Llib/tvector.scm 113 */
BgL_sz00_1670 = BgL_descrz00_1130; }  else 
{ 
obj_t BgL_auxz00_2353;
BgL_auxz00_2353 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1835z00zz__tvectorz00, BGl_string1817z00zz__tvectorz00, BgL_descrz00_1130); 
FAILURE(BgL_auxz00_2353,BFALSE,BFALSE);} 
{ /* Llib/tvector.scm 113 */
obj_t BgL_aux1753z00_2050;
BgL_aux1753z00_2050 = 
STRUCT_KEY(BgL_sz00_1670); 
if(
SYMBOLP(BgL_aux1753z00_2050))
{ /* Llib/tvector.scm 113 */
BgL_res1643z00_1671 = BgL_aux1753z00_2050; }  else 
{ 
obj_t BgL_auxz00_2360;
BgL_auxz00_2360 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1835z00zz__tvectorz00, BGl_string1818z00zz__tvectorz00, BgL_aux1753z00_2050); 
FAILURE(BgL_auxz00_2360,BFALSE,BFALSE);} } } 
BgL_tmpz00_2350 = BgL_res1643z00_1671; } 
BgL_test1962z00_2349 = 
(BgL_tmpz00_2350==BGl_symbol1819z00zz__tvectorz00); } 
if(BgL_test1962z00_2349)
{ /* Llib/tvector.scm 113 */
int BgL_tmpz00_2365;
BgL_tmpz00_2365 = 
(int)(((long)1)); 
BgL_allocatez00_1131 = 
STRUCT_REF(BgL_descrz00_1130, BgL_tmpz00_2365); }  else 
{ /* Llib/tvector.scm 113 */
BgL_allocatez00_1131 = 
BGl_errorz00zz__errorz00(BGl_string1821z00zz__tvectorz00, BGl_string1820z00zz__tvectorz00, BgL_descrz00_1130); } } 
{ /* Llib/tvector.scm 113 */
bool_t BgL_test1965z00_2369;
{ /* Llib/tvector.scm 113 */
obj_t BgL_tmpz00_2370;
{ /* Llib/tvector.scm 113 */
obj_t BgL_res1644z00_1675;
{ /* Llib/tvector.scm 113 */
obj_t BgL_sz00_1674;
if(
STRUCTP(BgL_descrz00_1130))
{ /* Llib/tvector.scm 113 */
BgL_sz00_1674 = BgL_descrz00_1130; }  else 
{ 
obj_t BgL_auxz00_2373;
BgL_auxz00_2373 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1835z00zz__tvectorz00, BGl_string1817z00zz__tvectorz00, BgL_descrz00_1130); 
FAILURE(BgL_auxz00_2373,BFALSE,BFALSE);} 
{ /* Llib/tvector.scm 113 */
obj_t BgL_aux1757z00_2054;
BgL_aux1757z00_2054 = 
STRUCT_KEY(BgL_sz00_1674); 
if(
SYMBOLP(BgL_aux1757z00_2054))
{ /* Llib/tvector.scm 113 */
BgL_res1644z00_1675 = BgL_aux1757z00_2054; }  else 
{ 
obj_t BgL_auxz00_2380;
BgL_auxz00_2380 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1835z00zz__tvectorz00, BGl_string1818z00zz__tvectorz00, BgL_aux1757z00_2054); 
FAILURE(BgL_auxz00_2380,BFALSE,BFALSE);} } } 
BgL_tmpz00_2370 = BgL_res1644z00_1675; } 
BgL_test1965z00_2369 = 
(BgL_tmpz00_2370==BGl_symbol1819z00zz__tvectorz00); } 
if(BgL_test1965z00_2369)
{ /* Llib/tvector.scm 113 */
int BgL_tmpz00_2385;
BgL_tmpz00_2385 = 
(int)(((long)3)); 
BgL_setz00_1132 = 
STRUCT_REF(BgL_descrz00_1130, BgL_tmpz00_2385); }  else 
{ /* Llib/tvector.scm 113 */
BgL_setz00_1132 = 
BGl_errorz00zz__errorz00(BGl_string1821z00zz__tvectorz00, BGl_string1820z00zz__tvectorz00, BgL_descrz00_1130); } } 
if(
PROCEDUREP(BgL_setz00_1132))
{ /* Llib/tvector.scm 175 */
long BgL_lenz00_1134;
BgL_lenz00_1134 = 
bgl_list_length(BgL_lz00_31); 
{ /* Llib/tvector.scm 175 */
obj_t BgL_tvecz00_1135;
{ /* Llib/tvector.scm 176 */
obj_t BgL_funz00_2058;
if(
PROCEDUREP(BgL_allocatez00_1131))
{ /* Llib/tvector.scm 176 */
BgL_funz00_2058 = BgL_allocatez00_1131; }  else 
{ 
obj_t BgL_auxz00_2394;
BgL_auxz00_2394 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)7157)), BGl_string1835z00zz__tvectorz00, BGl_string1832z00zz__tvectorz00, BgL_allocatez00_1131); 
FAILURE(BgL_auxz00_2394,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2058, ((long)1)))
{ /* Llib/tvector.scm 176 */
BgL_tvecz00_1135 = 
PROCEDURE_ENTRY(BgL_funz00_2058)(BgL_allocatez00_1131, 
BINT(BgL_lenz00_1134), BEOA); }  else 
{ /* Llib/tvector.scm 176 */
FAILURE(BGl_string1836z00zz__tvectorz00,BGl_list1837z00zz__tvectorz00,BgL_funz00_2058);} } 
{ /* Llib/tvector.scm 176 */

{ 
obj_t BgL_lz00_1683;long BgL_iz00_1684;
BgL_lz00_1683 = BgL_lz00_31; 
BgL_iz00_1684 = ((long)0); 
BgL_loopz00_1682:
if(
NULLP(BgL_lz00_1683))
{ /* Llib/tvector.scm 179 */
return BgL_tvecz00_1135;}  else 
{ /* Llib/tvector.scm 179 */
{ /* Llib/tvector.scm 182 */
obj_t BgL_arg1263z00_1687;
{ /* Llib/tvector.scm 182 */
obj_t BgL_pairz00_1688;
if(
PAIRP(BgL_lz00_1683))
{ /* Llib/tvector.scm 182 */
BgL_pairz00_1688 = BgL_lz00_1683; }  else 
{ 
obj_t BgL_auxz00_2410;
BgL_auxz00_2410 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)7287)), BGl_string1844z00zz__tvectorz00, BGl_string1845z00zz__tvectorz00, BgL_lz00_1683); 
FAILURE(BgL_auxz00_2410,BFALSE,BFALSE);} 
BgL_arg1263z00_1687 = 
CAR(BgL_pairz00_1688); } 
if(
PROCEDURE_CORRECT_ARITYP(
((obj_t)BgL_setz00_1132), ((long)3)))
{ /* Llib/tvector.scm 182 */
obj_t BgL_tmpfunz00_2424;
BgL_tmpfunz00_2424 = 
((obj_t)BgL_setz00_1132); 
PROCEDURE_ENTRY(BgL_tmpfunz00_2424)(BgL_setz00_1132, BgL_tvecz00_1135, 
BINT(BgL_iz00_1684), BgL_arg1263z00_1687, BEOA); }  else 
{ 
obj_t BgL_auxz00_2426;
BgL_auxz00_2426 = 
((obj_t)BgL_setz00_1132); 
FAILURE(BGl_string1846z00zz__tvectorz00,BGl_list1847z00zz__tvectorz00,BgL_auxz00_2426);} } 
{ /* Llib/tvector.scm 183 */
obj_t BgL_arg1268z00_1689;long BgL_arg1270z00_1690;
{ /* Llib/tvector.scm 183 */
obj_t BgL_pairz00_1691;
if(
PAIRP(BgL_lz00_1683))
{ /* Llib/tvector.scm 183 */
BgL_pairz00_1691 = BgL_lz00_1683; }  else 
{ 
obj_t BgL_auxz00_2431;
BgL_auxz00_2431 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)7311)), BGl_string1844z00zz__tvectorz00, BGl_string1845z00zz__tvectorz00, BgL_lz00_1683); 
FAILURE(BgL_auxz00_2431,BFALSE,BFALSE);} 
BgL_arg1268z00_1689 = 
CDR(BgL_pairz00_1691); } 
BgL_arg1270z00_1690 = 
(BgL_iz00_1684+((long)1)); 
{ 
long BgL_iz00_2438;obj_t BgL_lz00_2437;
BgL_lz00_2437 = BgL_arg1268z00_1689; 
BgL_iz00_2438 = BgL_arg1270z00_1690; 
BgL_iz00_1684 = BgL_iz00_2438; 
BgL_lz00_1683 = BgL_lz00_2437; 
goto BgL_loopz00_1682;} } } } } } }  else 
{ /* Llib/tvector.scm 171 */
return 
BGl_errorz00zz__errorz00(BGl_string1835z00zz__tvectorz00, BGl_string1856z00zz__tvectorz00, BgL_idz00_30);} }  else 
{ /* Llib/tvector.scm 167 */
return 
BGl_errorz00zz__errorz00(BGl_string1835z00zz__tvectorz00, BGl_string1857z00zz__tvectorz00, BgL_idz00_30);} } } 

}



/* &list->tvector */
obj_t BGl_z62listzd2ze3tvectorz53zz__tvectorz00(obj_t BgL_envz00_2001, obj_t BgL_idz00_2002, obj_t BgL_lz00_2003)
{
{ /* Llib/tvector.scm 165 */
{ /* Llib/tvector.scm 166 */
obj_t BgL_auxz00_2448;obj_t BgL_auxz00_2441;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2003))
{ /* Llib/tvector.scm 166 */
BgL_auxz00_2448 = BgL_lz00_2003
; }  else 
{ 
obj_t BgL_auxz00_2451;
BgL_auxz00_2451 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)6812)), BGl_string1858z00zz__tvectorz00, BGl_string1859z00zz__tvectorz00, BgL_lz00_2003); 
FAILURE(BgL_auxz00_2451,BFALSE,BFALSE);} 
if(
SYMBOLP(BgL_idz00_2002))
{ /* Llib/tvector.scm 166 */
BgL_auxz00_2441 = BgL_idz00_2002
; }  else 
{ 
obj_t BgL_auxz00_2444;
BgL_auxz00_2444 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)6812)), BGl_string1858z00zz__tvectorz00, BGl_string1818z00zz__tvectorz00, BgL_idz00_2002); 
FAILURE(BgL_auxz00_2444,BFALSE,BFALSE);} 
return 
BGl_listzd2ze3tvectorz31zz__tvectorz00(BgL_auxz00_2441, BgL_auxz00_2448);} } 

}



/* vector->tvector */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2ze3tvectorz31zz__tvectorz00(obj_t BgL_idz00_32, obj_t BgL_vz00_33)
{
{ /* Llib/tvector.scm 188 */
{ /* Llib/tvector.scm 189 */
obj_t BgL_descrz00_1145;
BgL_descrz00_1145 = 
get_tvector_descriptor(BgL_idz00_32); 
if(
CBOOL(BgL_descrz00_1145))
{ /* Llib/tvector.scm 192 */
obj_t BgL_allocatez00_1146;obj_t BgL_setz00_1147;
{ /* Llib/tvector.scm 113 */
bool_t BgL_test1978z00_2459;
{ /* Llib/tvector.scm 113 */
obj_t BgL_tmpz00_2460;
{ /* Llib/tvector.scm 113 */
obj_t BgL_res1648z00_1697;
{ /* Llib/tvector.scm 113 */
obj_t BgL_sz00_1696;
if(
STRUCTP(BgL_descrz00_1145))
{ /* Llib/tvector.scm 113 */
BgL_sz00_1696 = BgL_descrz00_1145; }  else 
{ 
obj_t BgL_auxz00_2463;
BgL_auxz00_2463 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1860z00zz__tvectorz00, BGl_string1817z00zz__tvectorz00, BgL_descrz00_1145); 
FAILURE(BgL_auxz00_2463,BFALSE,BFALSE);} 
{ /* Llib/tvector.scm 113 */
obj_t BgL_aux1777z00_2076;
BgL_aux1777z00_2076 = 
STRUCT_KEY(BgL_sz00_1696); 
if(
SYMBOLP(BgL_aux1777z00_2076))
{ /* Llib/tvector.scm 113 */
BgL_res1648z00_1697 = BgL_aux1777z00_2076; }  else 
{ 
obj_t BgL_auxz00_2470;
BgL_auxz00_2470 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1860z00zz__tvectorz00, BGl_string1818z00zz__tvectorz00, BgL_aux1777z00_2076); 
FAILURE(BgL_auxz00_2470,BFALSE,BFALSE);} } } 
BgL_tmpz00_2460 = BgL_res1648z00_1697; } 
BgL_test1978z00_2459 = 
(BgL_tmpz00_2460==BGl_symbol1819z00zz__tvectorz00); } 
if(BgL_test1978z00_2459)
{ /* Llib/tvector.scm 113 */
int BgL_tmpz00_2475;
BgL_tmpz00_2475 = 
(int)(((long)1)); 
BgL_allocatez00_1146 = 
STRUCT_REF(BgL_descrz00_1145, BgL_tmpz00_2475); }  else 
{ /* Llib/tvector.scm 113 */
BgL_allocatez00_1146 = 
BGl_errorz00zz__errorz00(BGl_string1821z00zz__tvectorz00, BGl_string1820z00zz__tvectorz00, BgL_descrz00_1145); } } 
{ /* Llib/tvector.scm 113 */
bool_t BgL_test1981z00_2479;
{ /* Llib/tvector.scm 113 */
obj_t BgL_tmpz00_2480;
{ /* Llib/tvector.scm 113 */
obj_t BgL_res1649z00_1701;
{ /* Llib/tvector.scm 113 */
obj_t BgL_sz00_1700;
if(
STRUCTP(BgL_descrz00_1145))
{ /* Llib/tvector.scm 113 */
BgL_sz00_1700 = BgL_descrz00_1145; }  else 
{ 
obj_t BgL_auxz00_2483;
BgL_auxz00_2483 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1860z00zz__tvectorz00, BGl_string1817z00zz__tvectorz00, BgL_descrz00_1145); 
FAILURE(BgL_auxz00_2483,BFALSE,BFALSE);} 
{ /* Llib/tvector.scm 113 */
obj_t BgL_aux1781z00_2080;
BgL_aux1781z00_2080 = 
STRUCT_KEY(BgL_sz00_1700); 
if(
SYMBOLP(BgL_aux1781z00_2080))
{ /* Llib/tvector.scm 113 */
BgL_res1649z00_1701 = BgL_aux1781z00_2080; }  else 
{ 
obj_t BgL_auxz00_2490;
BgL_auxz00_2490 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1860z00zz__tvectorz00, BGl_string1818z00zz__tvectorz00, BgL_aux1781z00_2080); 
FAILURE(BgL_auxz00_2490,BFALSE,BFALSE);} } } 
BgL_tmpz00_2480 = BgL_res1649z00_1701; } 
BgL_test1981z00_2479 = 
(BgL_tmpz00_2480==BGl_symbol1819z00zz__tvectorz00); } 
if(BgL_test1981z00_2479)
{ /* Llib/tvector.scm 113 */
int BgL_tmpz00_2495;
BgL_tmpz00_2495 = 
(int)(((long)3)); 
BgL_setz00_1147 = 
STRUCT_REF(BgL_descrz00_1145, BgL_tmpz00_2495); }  else 
{ /* Llib/tvector.scm 113 */
BgL_setz00_1147 = 
BGl_errorz00zz__errorz00(BGl_string1821z00zz__tvectorz00, BGl_string1820z00zz__tvectorz00, BgL_descrz00_1145); } } 
if(
PROCEDUREP(BgL_setz00_1147))
{ /* Llib/tvector.scm 198 */
obj_t BgL_tvecz00_1150;
{ /* Llib/tvector.scm 199 */
obj_t BgL_funz00_2084;
if(
PROCEDUREP(BgL_allocatez00_1146))
{ /* Llib/tvector.scm 199 */
BgL_funz00_2084 = BgL_allocatez00_1146; }  else 
{ 
obj_t BgL_auxz00_2503;
BgL_auxz00_2503 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)7963)), BGl_string1860z00zz__tvectorz00, BGl_string1832z00zz__tvectorz00, BgL_allocatez00_1146); 
FAILURE(BgL_auxz00_2503,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2084, ((long)1)))
{ /* Llib/tvector.scm 199 */
BgL_tvecz00_1150 = 
PROCEDURE_ENTRY(BgL_funz00_2084)(BgL_allocatez00_1146, 
BINT(
VECTOR_LENGTH(BgL_vz00_33)), BEOA); }  else 
{ /* Llib/tvector.scm 199 */
FAILURE(BGl_string1861z00zz__tvectorz00,BGl_list1837z00zz__tvectorz00,BgL_funz00_2084);} } 
{ /* Llib/tvector.scm 199 */

{ /* Llib/tvector.scm 200 */
long BgL_g1040z00_1151;
BgL_g1040z00_1151 = 
(
VECTOR_LENGTH(BgL_vz00_33)-((long)1)); 
{ 
long BgL_iz00_1153;
BgL_iz00_1153 = BgL_g1040z00_1151; 
BgL_zc3z04anonymousza31272ze3z87_1154:
if(
(BgL_iz00_1153==((long)-1)))
{ /* Llib/tvector.scm 201 */
return BgL_tvecz00_1150;}  else 
{ /* Llib/tvector.scm 201 */
{ /* Llib/tvector.scm 204 */
obj_t BgL_arg1274z00_1156;
{ /* Llib/tvector.scm 204 */
bool_t BgL_test1988z00_2520;
{ /* Llib/tvector.scm 204 */
long BgL_tmpz00_2521;
BgL_tmpz00_2521 = 
VECTOR_LENGTH(BgL_vz00_33); 
BgL_test1988z00_2520 = 
BOUND_CHECK(BgL_iz00_1153, BgL_tmpz00_2521); } 
if(BgL_test1988z00_2520)
{ /* Llib/tvector.scm 204 */
BgL_arg1274z00_1156 = 
VECTOR_REF(BgL_vz00_33,BgL_iz00_1153); }  else 
{ 
obj_t BgL_auxz00_2525;
BgL_auxz00_2525 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)8083)), BGl_string1862z00zz__tvectorz00, BgL_vz00_33, 
(int)(
VECTOR_LENGTH(BgL_vz00_33)), 
(int)(BgL_iz00_1153)); 
FAILURE(BgL_auxz00_2525,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(
((obj_t)BgL_setz00_1147), ((long)3)))
{ /* Llib/tvector.scm 204 */
obj_t BgL_tmpfunz00_2541;
BgL_tmpfunz00_2541 = 
((obj_t)BgL_setz00_1147); 
PROCEDURE_ENTRY(BgL_tmpfunz00_2541)(BgL_setz00_1147, BgL_tvecz00_1150, 
BINT(BgL_iz00_1153), BgL_arg1274z00_1156, BEOA); }  else 
{ 
obj_t BgL_auxz00_2543;
BgL_auxz00_2543 = 
((obj_t)BgL_setz00_1147); 
FAILURE(BGl_string1846z00zz__tvectorz00,BGl_list1863z00zz__tvectorz00,BgL_auxz00_2543);} } 
{ 
long BgL_iz00_2546;
BgL_iz00_2546 = 
(BgL_iz00_1153-((long)1)); 
BgL_iz00_1153 = BgL_iz00_2546; 
goto BgL_zc3z04anonymousza31272ze3z87_1154;} } } } } }  else 
{ /* Llib/tvector.scm 194 */
return 
BGl_errorz00zz__errorz00(BGl_string1860z00zz__tvectorz00, BGl_string1856z00zz__tvectorz00, BgL_idz00_32);} }  else 
{ /* Llib/tvector.scm 190 */
return 
BGl_errorz00zz__errorz00(BGl_string1860z00zz__tvectorz00, BGl_string1857z00zz__tvectorz00, BgL_idz00_32);} } } 

}



/* &vector->tvector */
obj_t BGl_z62vectorzd2ze3tvectorz53zz__tvectorz00(obj_t BgL_envz00_2004, obj_t BgL_idz00_2005, obj_t BgL_vz00_2006)
{
{ /* Llib/tvector.scm 188 */
{ /* Llib/tvector.scm 189 */
obj_t BgL_auxz00_2557;obj_t BgL_auxz00_2550;
if(
VECTORP(BgL_vz00_2006))
{ /* Llib/tvector.scm 189 */
BgL_auxz00_2557 = BgL_vz00_2006
; }  else 
{ 
obj_t BgL_auxz00_2560;
BgL_auxz00_2560 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)7607)), BGl_string1866z00zz__tvectorz00, BGl_string1867z00zz__tvectorz00, BgL_vz00_2006); 
FAILURE(BgL_auxz00_2560,BFALSE,BFALSE);} 
if(
SYMBOLP(BgL_idz00_2005))
{ /* Llib/tvector.scm 189 */
BgL_auxz00_2550 = BgL_idz00_2005
; }  else 
{ 
obj_t BgL_auxz00_2553;
BgL_auxz00_2553 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)7607)), BGl_string1866z00zz__tvectorz00, BGl_string1818z00zz__tvectorz00, BgL_idz00_2005); 
FAILURE(BgL_auxz00_2553,BFALSE,BFALSE);} 
return 
BGl_vectorzd2ze3tvectorz31zz__tvectorz00(BgL_auxz00_2550, BgL_auxz00_2557);} } 

}



/* tvector->vector */
BGL_EXPORTED_DEF obj_t BGl_tvectorzd2ze3vectorz31zz__tvectorz00(obj_t BgL_tvz00_34)
{
{ /* Llib/tvector.scm 210 */
{ /* Llib/tvector.scm 211 */
obj_t BgL_descrz00_1159;
BgL_descrz00_1159 = 
TVECTOR_DESCR(BgL_tvz00_34); 
{ /* Llib/tvector.scm 212 */
obj_t BgL_allocatez00_1160;obj_t BgL_refz00_1161;
{ /* Llib/tvector.scm 113 */
bool_t BgL_test1992z00_2566;
{ /* Llib/tvector.scm 113 */
obj_t BgL_tmpz00_2567;
{ /* Llib/tvector.scm 113 */
obj_t BgL_res1654z00_1715;
{ /* Llib/tvector.scm 113 */
obj_t BgL_sz00_1714;
if(
STRUCTP(BgL_descrz00_1159))
{ /* Llib/tvector.scm 113 */
BgL_sz00_1714 = BgL_descrz00_1159; }  else 
{ 
obj_t BgL_auxz00_2570;
BgL_auxz00_2570 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1868z00zz__tvectorz00, BGl_string1817z00zz__tvectorz00, BgL_descrz00_1159); 
FAILURE(BgL_auxz00_2570,BFALSE,BFALSE);} 
{ /* Llib/tvector.scm 113 */
obj_t BgL_aux1797z00_2098;
BgL_aux1797z00_2098 = 
STRUCT_KEY(BgL_sz00_1714); 
if(
SYMBOLP(BgL_aux1797z00_2098))
{ /* Llib/tvector.scm 113 */
BgL_res1654z00_1715 = BgL_aux1797z00_2098; }  else 
{ 
obj_t BgL_auxz00_2577;
BgL_auxz00_2577 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1868z00zz__tvectorz00, BGl_string1818z00zz__tvectorz00, BgL_aux1797z00_2098); 
FAILURE(BgL_auxz00_2577,BFALSE,BFALSE);} } } 
BgL_tmpz00_2567 = BgL_res1654z00_1715; } 
BgL_test1992z00_2566 = 
(BgL_tmpz00_2567==BGl_symbol1819z00zz__tvectorz00); } 
if(BgL_test1992z00_2566)
{ /* Llib/tvector.scm 113 */
int BgL_tmpz00_2582;
BgL_tmpz00_2582 = 
(int)(((long)1)); 
BgL_allocatez00_1160 = 
STRUCT_REF(BgL_descrz00_1159, BgL_tmpz00_2582); }  else 
{ /* Llib/tvector.scm 113 */
BgL_allocatez00_1160 = 
BGl_errorz00zz__errorz00(BGl_string1821z00zz__tvectorz00, BGl_string1820z00zz__tvectorz00, BgL_descrz00_1159); } } 
{ /* Llib/tvector.scm 113 */
bool_t BgL_test1995z00_2586;
{ /* Llib/tvector.scm 113 */
obj_t BgL_tmpz00_2587;
{ /* Llib/tvector.scm 113 */
obj_t BgL_res1655z00_1719;
{ /* Llib/tvector.scm 113 */
obj_t BgL_sz00_1718;
if(
STRUCTP(BgL_descrz00_1159))
{ /* Llib/tvector.scm 113 */
BgL_sz00_1718 = BgL_descrz00_1159; }  else 
{ 
obj_t BgL_auxz00_2590;
BgL_auxz00_2590 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1868z00zz__tvectorz00, BGl_string1817z00zz__tvectorz00, BgL_descrz00_1159); 
FAILURE(BgL_auxz00_2590,BFALSE,BFALSE);} 
{ /* Llib/tvector.scm 113 */
obj_t BgL_aux1801z00_2102;
BgL_aux1801z00_2102 = 
STRUCT_KEY(BgL_sz00_1718); 
if(
SYMBOLP(BgL_aux1801z00_2102))
{ /* Llib/tvector.scm 113 */
BgL_res1655z00_1719 = BgL_aux1801z00_2102; }  else 
{ 
obj_t BgL_auxz00_2597;
BgL_auxz00_2597 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1868z00zz__tvectorz00, BGl_string1818z00zz__tvectorz00, BgL_aux1801z00_2102); 
FAILURE(BgL_auxz00_2597,BFALSE,BFALSE);} } } 
BgL_tmpz00_2587 = BgL_res1655z00_1719; } 
BgL_test1995z00_2586 = 
(BgL_tmpz00_2587==BGl_symbol1819z00zz__tvectorz00); } 
if(BgL_test1995z00_2586)
{ /* Llib/tvector.scm 113 */
int BgL_tmpz00_2602;
BgL_tmpz00_2602 = 
(int)(((long)2)); 
BgL_refz00_1161 = 
STRUCT_REF(BgL_descrz00_1159, BgL_tmpz00_2602); }  else 
{ /* Llib/tvector.scm 113 */
BgL_refz00_1161 = 
BGl_errorz00zz__errorz00(BGl_string1821z00zz__tvectorz00, BGl_string1820z00zz__tvectorz00, BgL_descrz00_1159); } } 
if(
PROCEDUREP(BgL_refz00_1161))
{ /* Llib/tvector.scm 218 */
int BgL_lenz00_1163;
BgL_lenz00_1163 = 
TVECTOR_LENGTH(BgL_tvz00_34); 
{ /* Llib/tvector.scm 218 */
obj_t BgL_vecz00_1164;
BgL_vecz00_1164 = 
create_vector(
(long)(BgL_lenz00_1163)); 
{ /* Llib/tvector.scm 219 */

{ /* Llib/tvector.scm 220 */
long BgL_g1041z00_1165;
BgL_g1041z00_1165 = 
(
(long)(BgL_lenz00_1163)-((long)1)); 
{ 
long BgL_iz00_1167;
BgL_iz00_1167 = BgL_g1041z00_1165; 
BgL_zc3z04anonymousza31277ze3z87_1168:
if(
(BgL_iz00_1167==((long)-1)))
{ /* Llib/tvector.scm 221 */
return BgL_vecz00_1164;}  else 
{ /* Llib/tvector.scm 221 */
{ /* Llib/tvector.scm 224 */
obj_t BgL_arg1280z00_1170;
if(
PROCEDURE_CORRECT_ARITYP(
((obj_t)BgL_refz00_1161), ((long)2)))
{ /* Llib/tvector.scm 224 */
obj_t BgL_tmpfunz00_2623;
BgL_tmpfunz00_2623 = 
((obj_t)BgL_refz00_1161); 
BgL_arg1280z00_1170 = 
PROCEDURE_ENTRY(BgL_tmpfunz00_2623)(BgL_refz00_1161, BgL_tvz00_34, 
BINT(BgL_iz00_1167), BEOA); }  else 
{ 
obj_t BgL_auxz00_2625;
BgL_auxz00_2625 = 
((obj_t)BgL_refz00_1161); 
FAILURE(BGl_string1846z00zz__tvectorz00,BGl_list1869z00zz__tvectorz00,BgL_auxz00_2625);} 
{ /* Llib/tvector.scm 224 */
bool_t BgL_test2001z00_2628;
{ /* Llib/tvector.scm 224 */
long BgL_tmpz00_2629;
BgL_tmpz00_2629 = 
VECTOR_LENGTH(BgL_vecz00_1164); 
BgL_test2001z00_2628 = 
BOUND_CHECK(BgL_iz00_1167, BgL_tmpz00_2629); } 
if(BgL_test2001z00_2628)
{ /* Llib/tvector.scm 224 */
VECTOR_SET(BgL_vecz00_1164,BgL_iz00_1167,BgL_arg1280z00_1170); }  else 
{ 
obj_t BgL_auxz00_2633;
BgL_auxz00_2633 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)8812)), BGl_string1874z00zz__tvectorz00, BgL_vecz00_1164, 
(int)(
VECTOR_LENGTH(BgL_vecz00_1164)), 
(int)(BgL_iz00_1167)); 
FAILURE(BgL_auxz00_2633,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_2640;
BgL_iz00_2640 = 
(BgL_iz00_1167-((long)1)); 
BgL_iz00_1167 = BgL_iz00_2640; 
goto BgL_zc3z04anonymousza31277ze3z87_1168;} } } } } } }  else 
{ /* Llib/tvector.scm 217 */
obj_t BgL_arg1282z00_1173;
{ /* Llib/tvector.scm 105 */
obj_t BgL_arg1165z00_1732;
BgL_arg1165z00_1732 = 
TVECTOR_DESCR(BgL_tvz00_34); 
{ /* Llib/tvector.scm 113 */
bool_t BgL_test2002z00_2643;
{ /* Llib/tvector.scm 113 */
obj_t BgL_tmpz00_2644;
{ /* Llib/tvector.scm 113 */
obj_t BgL_res1661z00_1736;
{ /* Llib/tvector.scm 113 */
obj_t BgL_sz00_1735;
if(
STRUCTP(BgL_arg1165z00_1732))
{ /* Llib/tvector.scm 113 */
BgL_sz00_1735 = BgL_arg1165z00_1732; }  else 
{ 
obj_t BgL_auxz00_2647;
BgL_auxz00_2647 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1868z00zz__tvectorz00, BGl_string1817z00zz__tvectorz00, BgL_arg1165z00_1732); 
FAILURE(BgL_auxz00_2647,BFALSE,BFALSE);} 
{ /* Llib/tvector.scm 113 */
obj_t BgL_aux1809z00_2111;
BgL_aux1809z00_2111 = 
STRUCT_KEY(BgL_sz00_1735); 
if(
SYMBOLP(BgL_aux1809z00_2111))
{ /* Llib/tvector.scm 113 */
BgL_res1661z00_1736 = BgL_aux1809z00_2111; }  else 
{ 
obj_t BgL_auxz00_2654;
BgL_auxz00_2654 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)4320)), BGl_string1868z00zz__tvectorz00, BGl_string1818z00zz__tvectorz00, BgL_aux1809z00_2111); 
FAILURE(BgL_auxz00_2654,BFALSE,BFALSE);} } } 
BgL_tmpz00_2644 = BgL_res1661z00_1736; } 
BgL_test2002z00_2643 = 
(BgL_tmpz00_2644==BGl_symbol1819z00zz__tvectorz00); } 
if(BgL_test2002z00_2643)
{ /* Llib/tvector.scm 113 */
int BgL_tmpz00_2659;
BgL_tmpz00_2659 = 
(int)(((long)0)); 
BgL_arg1282z00_1173 = 
STRUCT_REF(BgL_arg1165z00_1732, BgL_tmpz00_2659); }  else 
{ /* Llib/tvector.scm 113 */
BgL_arg1282z00_1173 = 
BGl_errorz00zz__errorz00(BGl_string1821z00zz__tvectorz00, BGl_string1820z00zz__tvectorz00, BgL_arg1165z00_1732); } } } 
return 
BGl_errorz00zz__errorz00(BGl_string1868z00zz__tvectorz00, BGl_string1856z00zz__tvectorz00, BgL_arg1282z00_1173);} } } } 

}



/* &tvector->vector */
obj_t BGl_z62tvectorzd2ze3vectorz53zz__tvectorz00(obj_t BgL_envz00_2007, obj_t BgL_tvz00_2008)
{
{ /* Llib/tvector.scm 210 */
{ /* Llib/tvector.scm 211 */
obj_t BgL_auxz00_2664;
if(
TVECTORP(BgL_tvz00_2008))
{ /* Llib/tvector.scm 211 */
BgL_auxz00_2664 = BgL_tvz00_2008
; }  else 
{ 
obj_t BgL_auxz00_2667;
BgL_auxz00_2667 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1813z00zz__tvectorz00, 
BINT(((long)8400)), BGl_string1875z00zz__tvectorz00, BGl_string1815z00zz__tvectorz00, BgL_tvz00_2008); 
FAILURE(BgL_auxz00_2667,BFALSE,BFALSE);} 
return 
BGl_tvectorzd2ze3vectorz31zz__tvectorz00(BgL_auxz00_2664);} } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__tvectorz00()
{
{ /* Llib/tvector.scm 14 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__tvectorz00()
{
{ /* Llib/tvector.scm 14 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__tvectorz00()
{
{ /* Llib/tvector.scm 14 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__tvectorz00()
{
{ /* Llib/tvector.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string1876z00zz__tvectorz00)); 
BGl_modulezd2initializa7ationz75zz__hashz00(((long)214649622), 
BSTRING_TO_STRING(BGl_string1876z00zz__tvectorz00)); 
BGl_modulezd2initializa7ationz75zz__readerz00(((long)220647683), 
BSTRING_TO_STRING(BGl_string1876z00zz__tvectorz00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string1876z00zz__tvectorz00)); 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)340267996), 
BSTRING_TO_STRING(BGl_string1876z00zz__tvectorz00)); 
BGl_modulezd2initializa7ationz75zz__bignumz00(((long)6519875), 
BSTRING_TO_STRING(BGl_string1876z00zz__tvectorz00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)193422032), 
BSTRING_TO_STRING(BGl_string1876z00zz__tvectorz00)); 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)224967910), 
BSTRING_TO_STRING(BGl_string1876z00zz__tvectorz00)); 
return 
BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long)460263341), 
BSTRING_TO_STRING(BGl_string1876z00zz__tvectorz00));} 

}

#ifdef __cplusplus
}
#endif
