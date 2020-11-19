/*===========================================================================*/
/*   (Llib/bconfigure.scm)                                                   */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/bconfigure.scm -indent -o objs/obj_s/Llib/bconfigure.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_symbol1911z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1831z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1913z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1833z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1915z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1835z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1917z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1837z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1919z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1839z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1921z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1841z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1923z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1843z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1925z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1845z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1927z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1847z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1929z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1849z00zz__configurez00 = BUNSPEC;
static obj_t BGl_requirezd2initializa7ationz75zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1931z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1851z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1933z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1853z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1935z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1855z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1937z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1857z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1939z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1859z00zz__configurez00 = BUNSPEC;
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol1941z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1861z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1943z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1863z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1945z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1865z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1947z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1867z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1949z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1869z00zz__configurez00 = BUNSPEC;
static obj_t BGl_z62bigloozd2configurationzb0zz__configurez00(obj_t);
static obj_t BGl_symbol1951z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1871z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1953z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1873z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1955z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1875z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1957z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1877z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1959z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1879z00zz__configurez00 = BUNSPEC;
static obj_t BGl_toplevelzd2initzd2zz__configurez00();
static obj_t BGl_za2bigloozd2configurationza2zd2zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1961z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1881z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1963z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1883z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1965z00zz__configurez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_bigloozd2configurationzd2zz__configurez00();
static obj_t BGl_symbol1885z00zz__configurez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_bigloozd2configurationzd2addzd2entryz12zc0zz__configurez00(obj_t, obj_t);
static obj_t BGl_symbol1967z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1887z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1969z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1889z00zz__configurez00 = BUNSPEC;
extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62bigloozd2configurationzd2addzd2entryz12za2zz__configurez00(obj_t, obj_t, obj_t);
static obj_t BGl_gczd2namezd2zz__configurez00(int);
static obj_t BGl_genericzd2initzd2zz__configurez00();
static obj_t BGl_symbol1971z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1891z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1973z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1893z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1975z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1895z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1977z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1897z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1979z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1899z00zz__configurez00 = BUNSPEC;
static obj_t BGl_objectzd2initzd2zz__configurez00();
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_methodzd2initzd2zz__configurez00();
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
extern obj_t BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl__bigloozd2configzd2zz__configurez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_cnstzd2initzd2zz__configurez00();
static obj_t BGl_gczd2rootszd2initz00zz__configurez00();
static obj_t BGl_importedzd2moduleszd2initz00zz__configurez00();
BGL_EXPORTED_DECL obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
static obj_t BGl_symbol1901z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1903z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1905z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1825z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1907z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1827z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1909z00zz__configurez00 = BUNSPEC;
static obj_t BGl_symbol1829z00zz__configurez00 = BUNSPEC;
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2configurationzd2addzd2entryz12zd2envz12zz__configurez00, BgL_bgl_za762biglooza7d2conf1994z00, BGl_z62bigloozd2configurationzd2addzd2entryz12za2zz__configurez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2configurationzd2envz00zz__configurez00, BgL_bgl_za762biglooza7d2conf1995z00, BGl_z62bigloozd2configurationzb0zz__configurez00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string1900z00zz__configurez00, BgL_bgl_string1900za700za7za7_1996za7, "have-shared-library", 19 );
DEFINE_STRING( BGl_string1902z00zz__configurez00, BgL_bgl_string1902za700za7za7_1997za7, "shared-link-option", 18 );
DEFINE_STRING( BGl_string1904z00zz__configurez00, BgL_bgl_string1904za700za7za7_1998za7, "static-link-option", 18 );
DEFINE_STRING( BGl_string1906z00zz__configurez00, BgL_bgl_string1906za700za7za7_1999za7, "shared-lib-suffix", 17 );
DEFINE_STRING( BGl_string1826z00zz__configurez00, BgL_bgl_string1826za700za7za7_2000za7, "release-number", 14 );
DEFINE_STRING( BGl_string1908z00zz__configurez00, BgL_bgl_string1908za700za7za7_2001za7, "auto-finalizer", 14 );
DEFINE_STRING( BGl_string1828z00zz__configurez00, BgL_bgl_string1828za700za7za7_2002za7, "specific-version", 16 );
DEFINE_STRING( BGl_string1910z00zz__configurez00, BgL_bgl_string1910za700za7za7_2003za7, "have-dlopen", 11 );
DEFINE_STRING( BGl_string1830z00zz__configurez00, BgL_bgl_string1830za700za7za7_2004za7, "safe", 4 );
DEFINE_STRING( BGl_string1912z00zz__configurez00, BgL_bgl_string1912za700za7za7_2005za7, "dlopen-lib", 10 );
DEFINE_STRING( BGl_string1832z00zz__configurez00, BgL_bgl_string1832za700za7za7_2006za7, "library-safety", 14 );
DEFINE_STRING( BGl_string1914z00zz__configurez00, BgL_bgl_string1914za700za7za7_2007za7, "have-bigloo-abort", 17 );
DEFINE_STRING( BGl_string1834z00zz__configurez00, BgL_bgl_string1834za700za7za7_2008za7, "homeurl", 7 );
DEFINE_STRING( BGl_string1916z00zz__configurez00, BgL_bgl_string1916za700za7za7_2009za7, "java", 4 );
DEFINE_STRING( BGl_string1836z00zz__configurez00, BgL_bgl_string1836za700za7za7_2010za7, "shell", 5 );
DEFINE_STRING( BGl_string1918z00zz__configurez00, BgL_bgl_string1918za700za7za7_2011za7, "jar", 3 );
DEFINE_STRING( BGl_string1838z00zz__configurez00, BgL_bgl_string1838za700za7za7_2012za7, "c-compiler-style", 16 );
DEFINE_STRING( BGl_string1920z00zz__configurez00, BgL_bgl_string1920za700za7za7_2013za7, "java-shell", 10 );
DEFINE_STRING( BGl_string1840z00zz__configurez00, BgL_bgl_string1840za700za7za7_2014za7, "c-compiler", 10 );
DEFINE_STRING( BGl_string1922z00zz__configurez00, BgL_bgl_string1922za700za7za7_2015za7, "jflags", 6 );
DEFINE_STRING( BGl_string1842z00zz__configurez00, BgL_bgl_string1842za700za7za7_2016za7, "c-ld", 4 );
DEFINE_STRING( BGl_string1924z00zz__configurez00, BgL_bgl_string1924za700za7za7_2017za7, "jvflags", 7 );
DEFINE_STRING( BGl_string1844z00zz__configurez00, BgL_bgl_string1844za700za7za7_2018za7, "c-compiler-o-option", 19 );
DEFINE_STRING( BGl_string1926z00zz__configurez00, BgL_bgl_string1926za700za7za7_2019za7, "default-back-end", 16 );
DEFINE_STRING( BGl_string1846z00zz__configurez00, BgL_bgl_string1846za700za7za7_2020za7, "c-compiler-debug-option", 23 );
DEFINE_STRING( BGl_string1928z00zz__configurez00, BgL_bgl_string1928za700za7za7_2021za7, "gc-lib", 6 );
DEFINE_STRING( BGl_string1848z00zz__configurez00, BgL_bgl_string1848za700za7za7_2022za7, "c-compiler-optim-flag", 21 );
DEFINE_STRING( BGl_string1930z00zz__configurez00, BgL_bgl_string1930za700za7za7_2023za7, "gc-custom", 9 );
DEFINE_STRING( BGl_string1850z00zz__configurez00, BgL_bgl_string1850za700za7za7_2024za7, "c-compiler-rpath", 16 );
DEFINE_STRING( BGl_string1932z00zz__configurez00, BgL_bgl_string1932za700za7za7_2025za7, "gc", 2 );
DEFINE_STRING( BGl_string1852z00zz__configurez00, BgL_bgl_string1852za700za7za7_2026za7, "c-flags", 7 );
DEFINE_STRING( BGl_string1934z00zz__configurez00, BgL_bgl_string1934za700za7za7_2027za7, "have-bdb", 8 );
DEFINE_STRING( BGl_string1854z00zz__configurez00, BgL_bgl_string1854za700za7za7_2028za7, "c-pic-flag", 10 );
DEFINE_STRING( BGl_string1936z00zz__configurez00, BgL_bgl_string1936za700za7za7_2029za7, "dns-cache-enabled", 17 );
DEFINE_STRING( BGl_string1856z00zz__configurez00, BgL_bgl_string1856za700za7za7_2030za7, "c-nan-flag", 10 );
DEFINE_STRING( BGl_string1938z00zz__configurez00, BgL_bgl_string1938za700za7za7_2031za7, "shell-mv", 8 );
DEFINE_STRING( BGl_string1858z00zz__configurez00, BgL_bgl_string1858za700za7za7_2032za7, "c-strip-flag", 12 );
DEFINE_STRING( BGl_string1940z00zz__configurez00, BgL_bgl_string1940za700za7za7_2033za7, "shell-rm", 8 );
DEFINE_STRING( BGl_string1860z00zz__configurez00, BgL_bgl_string1860za700za7za7_2034za7, "c-prof-flag", 11 );
DEFINE_STRING( BGl_string1942z00zz__configurez00, BgL_bgl_string1942za700za7za7_2035za7, "big-endian", 10 );
DEFINE_STRING( BGl_string1862z00zz__configurez00, BgL_bgl_string1862za700za7za7_2036za7, "c-object-file-extension", 23 );
DEFINE_STRING( BGl_string1944z00zz__configurez00, BgL_bgl_string1944za700za7za7_2037za7, "little-endian", 13 );
DEFINE_STRING( BGl_string1864z00zz__configurez00, BgL_bgl_string1864za700za7za7_2038za7, "c-string-split", 14 );
DEFINE_STRING( BGl_string1946z00zz__configurez00, BgL_bgl_string1946za700za7za7_2039za7, "endianess", 9 );
DEFINE_STRING( BGl_string1866z00zz__configurez00, BgL_bgl_string1866za700za7za7_2040za7, "c-linker-style", 14 );
DEFINE_STRING( BGl_string1948z00zz__configurez00, BgL_bgl_string1948za700za7za7_2041za7, "regexp", 6 );
DEFINE_STRING( BGl_string1868z00zz__configurez00, BgL_bgl_string1868za700za7za7_2042za7, "c-linker-flags", 14 );
DEFINE_STRING( BGl_string1950z00zz__configurez00, BgL_bgl_string1950za700za7za7_2043za7, "int-size", 8 );
DEFINE_STRING( BGl_string1870z00zz__configurez00, BgL_bgl_string1870za700za7za7_2044za7, "c-linker-o-option", 17 );
DEFINE_STRING( BGl_string1952z00zz__configurez00, BgL_bgl_string1952za700za7za7_2045za7, "elong-size", 10 );
DEFINE_STRING( BGl_string1872z00zz__configurez00, BgL_bgl_string1872za700za7za7_2046za7, "c-linker-debug-option", 21 );
DEFINE_STRING( BGl_string1954z00zz__configurez00, BgL_bgl_string1954za700za7za7_2047za7, "nan-tagging", 11 );
DEFINE_STRING( BGl_string1874z00zz__configurez00, BgL_bgl_string1874za700za7za7_2048za7, "c-linker-optim-flags", 20 );
DEFINE_STRING( BGl_string1956z00zz__configurez00, BgL_bgl_string1956za700za7za7_2049za7, "have-unistring", 14 );
DEFINE_STRING( BGl_string1876z00zz__configurez00, BgL_bgl_string1876za700za7za7_2050za7, "c-linker-soname-option", 22 );
DEFINE_STRING( BGl_string1958z00zz__configurez00, BgL_bgl_string1958za700za7za7_2051za7, "have-syslog", 11 );
DEFINE_STRING( BGl_string1878z00zz__configurez00, BgL_bgl_string1878za700za7za7_2052za7, "c-linker-shared-option", 22 );
DEFINE_STRING( BGl_string1960z00zz__configurez00, BgL_bgl_string1960za700za7za7_2053za7, "have-overflow", 13 );
DEFINE_STRING( BGl_string1880z00zz__configurez00, BgL_bgl_string1880za700za7za7_2054za7, "ld-library-dir", 14 );
DEFINE_STRING( BGl_string1962z00zz__configurez00, BgL_bgl_string1962za700za7za7_2055za7, "class-display-min-size", 22 );
DEFINE_STRING( BGl_string1882z00zz__configurez00, BgL_bgl_string1882za700za7za7_2056za7, "library-directory", 17 );
DEFINE_STRING( BGl_string1964z00zz__configurez00, BgL_bgl_string1964za700za7za7_2057za7, "os-class", 8 );
DEFINE_STRING( BGl_string1884z00zz__configurez00, BgL_bgl_string1884za700za7za7_2058za7, "non-custom-gc-directory", 23 );
DEFINE_STRING( BGl_string1966z00zz__configurez00, BgL_bgl_string1966za700za7za7_2059za7, "os-name", 7 );
DEFINE_STRING( BGl_string1886z00zz__configurez00, BgL_bgl_string1886za700za7za7_2060za7, "zip-directory", 13 );
DEFINE_STRING( BGl_string1968z00zz__configurez00, BgL_bgl_string1968za700za7za7_2061za7, "os-arch", 7 );
DEFINE_STRING( BGl_string1888z00zz__configurez00, BgL_bgl_string1888za700za7za7_2062za7, "dll-directory", 13 );
DEFINE_STRING( BGl_string1970z00zz__configurez00, BgL_bgl_string1970za700za7za7_2063za7, "os-version", 10 );
DEFINE_STRING( BGl_string1890z00zz__configurez00, BgL_bgl_string1890za700za7za7_2064za7, "user-libraries", 14 );
DEFINE_STRING( BGl_string1972z00zz__configurez00, BgL_bgl_string1972za700za7za7_2065za7, "thread-local-storage", 20 );
DEFINE_STRING( BGl_string1892z00zz__configurez00, BgL_bgl_string1892za700za7za7_2066za7, "c-beautifier", 12 );
DEFINE_STRING( BGl_string1974z00zz__configurez00, BgL_bgl_string1974za700za7za7_2067za7, "have-spinlock", 13 );
DEFINE_STRING( BGl_string1894z00zz__configurez00, BgL_bgl_string1894za700za7za7_2068za7, "dirname-cmd", 11 );
DEFINE_STRING( BGl_string1976z00zz__configurez00, BgL_bgl_string1976za700za7za7_2069za7, "have-alloca", 11 );
DEFINE_STRING( BGl_string1896z00zz__configurez00, BgL_bgl_string1896za700za7za7_2070za7, "library-base-name", 17 );
DEFINE_STRING( BGl_string1978z00zz__configurez00, BgL_bgl_string1978za700za7za7_2071za7, "have-c99-stack-alloc", 20 );
DEFINE_STRING( BGl_string1898z00zz__configurez00, BgL_bgl_string1898za700za7za7_2072za7, "heap-debug-copt", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2configzd2envz00zz__configurez00, BgL_bgl__biglooza7d2config2073za7, opt_generic_entry, BGl__bigloozd2configzd2zz__configurez00, BFALSE, -1 );
DEFINE_STRING( BGl_string1980z00zz__configurez00, BgL_bgl_string1980za700za7za7_2074za7, "bigloo-config", 13 );
DEFINE_STRING( BGl_string1981z00zz__configurez00, BgL_bgl_string1981za700za7za7_2075za7, "wrong number of arguments: [0..1] expected, provided", 52 );
DEFINE_STRING( BGl_string1982z00zz__configurez00, BgL_bgl_string1982za700za7za7_2076za7, "/tmp/4.4a/runtime/Llib/bconfigure.scm", 37 );
DEFINE_STRING( BGl_string1983z00zz__configurez00, BgL_bgl_string1983za700za7za7_2077za7, "pair", 4 );
DEFINE_STRING( BGl_string1984z00zz__configurez00, BgL_bgl_string1984za700za7za7_2078za7, "bigloo-configuration", 20 );
DEFINE_STRING( BGl_string1985z00zz__configurez00, BgL_bgl_string1985za700za7za7_2079za7, "&bigloo-configuration-add-entry!", 32 );
DEFINE_STRING( BGl_string1986z00zz__configurez00, BgL_bgl_string1986za700za7za7_2080za7, "symbol", 6 );
DEFINE_STRING( BGl_string1987z00zz__configurez00, BgL_bgl_string1987za700za7za7_2081za7, "no", 2 );
DEFINE_STRING( BGl_string1988z00zz__configurez00, BgL_bgl_string1988za700za7za7_2082za7, "boehm", 5 );
DEFINE_STRING( BGl_string1989z00zz__configurez00, BgL_bgl_string1989za700za7za7_2083za7, "saw", 3 );
DEFINE_STRING( BGl_string1990z00zz__configurez00, BgL_bgl_string1990za700za7za7_2084za7, "unknown", 7 );
DEFINE_STRING( BGl_string1991z00zz__configurez00, BgL_bgl_string1991za700za7za7_2085za7, "__configure", 11 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_symbol1911z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1831z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1913z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1833z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1915z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1835z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1917z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1837z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1919z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1839z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1921z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1841z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1923z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1843z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1925z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1845z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1927z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1847z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1929z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1849z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1931z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1851z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1933z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1853z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1935z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1855z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1937z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1857z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1939z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1859z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1941z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1861z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1943z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1863z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1945z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1865z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1947z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1867z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1949z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1869z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1951z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1871z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1953z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1873z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1955z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1875z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1957z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1877z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1959z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1879z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_za2bigloozd2configurationza2zd2zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1961z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1881z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1963z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1883z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1965z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1885z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1967z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1887z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1969z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1889z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1971z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1891z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1973z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1893z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1975z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1895z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1977z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1897z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1979z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1899z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1901z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1903z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1905z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1825z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1907z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1827z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1909z00zz__configurez00) );
ADD_ROOT( (void *)(&BGl_symbol1829z00zz__configurez00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long BgL_checksumz00_1856, char * BgL_fromz00_1857)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__configurez00))
{ 
BGl_requirezd2initializa7ationz75zz__configurez00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__configurez00(); 
BGl_cnstzd2initzd2zz__configurez00(); 
BGl_importedzd2moduleszd2initz00zz__configurez00(); 
return 
BGl_toplevelzd2initzd2zz__configurez00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__configurez00()
{
{ /* Llib/bconfigure.scm 19 */
BGl_symbol1825z00zz__configurez00 = 
bstring_to_symbol(BGl_string1826z00zz__configurez00); 
BGl_symbol1827z00zz__configurez00 = 
bstring_to_symbol(BGl_string1828z00zz__configurez00); 
BGl_symbol1829z00zz__configurez00 = 
bstring_to_symbol(BGl_string1830z00zz__configurez00); 
BGl_symbol1831z00zz__configurez00 = 
bstring_to_symbol(BGl_string1832z00zz__configurez00); 
BGl_symbol1833z00zz__configurez00 = 
bstring_to_symbol(BGl_string1834z00zz__configurez00); 
BGl_symbol1835z00zz__configurez00 = 
bstring_to_symbol(BGl_string1836z00zz__configurez00); 
BGl_symbol1837z00zz__configurez00 = 
bstring_to_symbol(BGl_string1838z00zz__configurez00); 
BGl_symbol1839z00zz__configurez00 = 
bstring_to_symbol(BGl_string1840z00zz__configurez00); 
BGl_symbol1841z00zz__configurez00 = 
bstring_to_symbol(BGl_string1842z00zz__configurez00); 
BGl_symbol1843z00zz__configurez00 = 
bstring_to_symbol(BGl_string1844z00zz__configurez00); 
BGl_symbol1845z00zz__configurez00 = 
bstring_to_symbol(BGl_string1846z00zz__configurez00); 
BGl_symbol1847z00zz__configurez00 = 
bstring_to_symbol(BGl_string1848z00zz__configurez00); 
BGl_symbol1849z00zz__configurez00 = 
bstring_to_symbol(BGl_string1850z00zz__configurez00); 
BGl_symbol1851z00zz__configurez00 = 
bstring_to_symbol(BGl_string1852z00zz__configurez00); 
BGl_symbol1853z00zz__configurez00 = 
bstring_to_symbol(BGl_string1854z00zz__configurez00); 
BGl_symbol1855z00zz__configurez00 = 
bstring_to_symbol(BGl_string1856z00zz__configurez00); 
BGl_symbol1857z00zz__configurez00 = 
bstring_to_symbol(BGl_string1858z00zz__configurez00); 
BGl_symbol1859z00zz__configurez00 = 
bstring_to_symbol(BGl_string1860z00zz__configurez00); 
BGl_symbol1861z00zz__configurez00 = 
bstring_to_symbol(BGl_string1862z00zz__configurez00); 
BGl_symbol1863z00zz__configurez00 = 
bstring_to_symbol(BGl_string1864z00zz__configurez00); 
BGl_symbol1865z00zz__configurez00 = 
bstring_to_symbol(BGl_string1866z00zz__configurez00); 
BGl_symbol1867z00zz__configurez00 = 
bstring_to_symbol(BGl_string1868z00zz__configurez00); 
BGl_symbol1869z00zz__configurez00 = 
bstring_to_symbol(BGl_string1870z00zz__configurez00); 
BGl_symbol1871z00zz__configurez00 = 
bstring_to_symbol(BGl_string1872z00zz__configurez00); 
BGl_symbol1873z00zz__configurez00 = 
bstring_to_symbol(BGl_string1874z00zz__configurez00); 
BGl_symbol1875z00zz__configurez00 = 
bstring_to_symbol(BGl_string1876z00zz__configurez00); 
BGl_symbol1877z00zz__configurez00 = 
bstring_to_symbol(BGl_string1878z00zz__configurez00); 
BGl_symbol1879z00zz__configurez00 = 
bstring_to_symbol(BGl_string1880z00zz__configurez00); 
BGl_symbol1881z00zz__configurez00 = 
bstring_to_symbol(BGl_string1882z00zz__configurez00); 
BGl_symbol1883z00zz__configurez00 = 
bstring_to_symbol(BGl_string1884z00zz__configurez00); 
BGl_symbol1885z00zz__configurez00 = 
bstring_to_symbol(BGl_string1886z00zz__configurez00); 
BGl_symbol1887z00zz__configurez00 = 
bstring_to_symbol(BGl_string1888z00zz__configurez00); 
BGl_symbol1889z00zz__configurez00 = 
bstring_to_symbol(BGl_string1890z00zz__configurez00); 
BGl_symbol1891z00zz__configurez00 = 
bstring_to_symbol(BGl_string1892z00zz__configurez00); 
BGl_symbol1893z00zz__configurez00 = 
bstring_to_symbol(BGl_string1894z00zz__configurez00); 
BGl_symbol1895z00zz__configurez00 = 
bstring_to_symbol(BGl_string1896z00zz__configurez00); 
BGl_symbol1897z00zz__configurez00 = 
bstring_to_symbol(BGl_string1898z00zz__configurez00); 
BGl_symbol1899z00zz__configurez00 = 
bstring_to_symbol(BGl_string1900z00zz__configurez00); 
BGl_symbol1901z00zz__configurez00 = 
bstring_to_symbol(BGl_string1902z00zz__configurez00); 
BGl_symbol1903z00zz__configurez00 = 
bstring_to_symbol(BGl_string1904z00zz__configurez00); 
BGl_symbol1905z00zz__configurez00 = 
bstring_to_symbol(BGl_string1906z00zz__configurez00); 
BGl_symbol1907z00zz__configurez00 = 
bstring_to_symbol(BGl_string1908z00zz__configurez00); 
BGl_symbol1909z00zz__configurez00 = 
bstring_to_symbol(BGl_string1910z00zz__configurez00); 
BGl_symbol1911z00zz__configurez00 = 
bstring_to_symbol(BGl_string1912z00zz__configurez00); 
BGl_symbol1913z00zz__configurez00 = 
bstring_to_symbol(BGl_string1914z00zz__configurez00); 
BGl_symbol1915z00zz__configurez00 = 
bstring_to_symbol(BGl_string1916z00zz__configurez00); 
BGl_symbol1917z00zz__configurez00 = 
bstring_to_symbol(BGl_string1918z00zz__configurez00); 
BGl_symbol1919z00zz__configurez00 = 
bstring_to_symbol(BGl_string1920z00zz__configurez00); 
BGl_symbol1921z00zz__configurez00 = 
bstring_to_symbol(BGl_string1922z00zz__configurez00); 
BGl_symbol1923z00zz__configurez00 = 
bstring_to_symbol(BGl_string1924z00zz__configurez00); 
BGl_symbol1925z00zz__configurez00 = 
bstring_to_symbol(BGl_string1926z00zz__configurez00); 
BGl_symbol1927z00zz__configurez00 = 
bstring_to_symbol(BGl_string1928z00zz__configurez00); 
BGl_symbol1929z00zz__configurez00 = 
bstring_to_symbol(BGl_string1930z00zz__configurez00); 
BGl_symbol1931z00zz__configurez00 = 
bstring_to_symbol(BGl_string1932z00zz__configurez00); 
BGl_symbol1933z00zz__configurez00 = 
bstring_to_symbol(BGl_string1934z00zz__configurez00); 
BGl_symbol1935z00zz__configurez00 = 
bstring_to_symbol(BGl_string1936z00zz__configurez00); 
BGl_symbol1937z00zz__configurez00 = 
bstring_to_symbol(BGl_string1938z00zz__configurez00); 
BGl_symbol1939z00zz__configurez00 = 
bstring_to_symbol(BGl_string1940z00zz__configurez00); 
BGl_symbol1941z00zz__configurez00 = 
bstring_to_symbol(BGl_string1942z00zz__configurez00); 
BGl_symbol1943z00zz__configurez00 = 
bstring_to_symbol(BGl_string1944z00zz__configurez00); 
BGl_symbol1945z00zz__configurez00 = 
bstring_to_symbol(BGl_string1946z00zz__configurez00); 
BGl_symbol1947z00zz__configurez00 = 
bstring_to_symbol(BGl_string1948z00zz__configurez00); 
BGl_symbol1949z00zz__configurez00 = 
bstring_to_symbol(BGl_string1950z00zz__configurez00); 
BGl_symbol1951z00zz__configurez00 = 
bstring_to_symbol(BGl_string1952z00zz__configurez00); 
BGl_symbol1953z00zz__configurez00 = 
bstring_to_symbol(BGl_string1954z00zz__configurez00); 
BGl_symbol1955z00zz__configurez00 = 
bstring_to_symbol(BGl_string1956z00zz__configurez00); 
BGl_symbol1957z00zz__configurez00 = 
bstring_to_symbol(BGl_string1958z00zz__configurez00); 
BGl_symbol1959z00zz__configurez00 = 
bstring_to_symbol(BGl_string1960z00zz__configurez00); 
BGl_symbol1961z00zz__configurez00 = 
bstring_to_symbol(BGl_string1962z00zz__configurez00); 
BGl_symbol1963z00zz__configurez00 = 
bstring_to_symbol(BGl_string1964z00zz__configurez00); 
BGl_symbol1965z00zz__configurez00 = 
bstring_to_symbol(BGl_string1966z00zz__configurez00); 
BGl_symbol1967z00zz__configurez00 = 
bstring_to_symbol(BGl_string1968z00zz__configurez00); 
BGl_symbol1969z00zz__configurez00 = 
bstring_to_symbol(BGl_string1970z00zz__configurez00); 
BGl_symbol1971z00zz__configurez00 = 
bstring_to_symbol(BGl_string1972z00zz__configurez00); 
BGl_symbol1973z00zz__configurez00 = 
bstring_to_symbol(BGl_string1974z00zz__configurez00); 
BGl_symbol1975z00zz__configurez00 = 
bstring_to_symbol(BGl_string1976z00zz__configurez00); 
BGl_symbol1977z00zz__configurez00 = 
bstring_to_symbol(BGl_string1978z00zz__configurez00); 
return ( 
BGl_symbol1979z00zz__configurez00 = 
bstring_to_symbol(BGl_string1980z00zz__configurez00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__configurez00()
{
{ /* Llib/bconfigure.scm 19 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__configurez00()
{
{ /* Llib/bconfigure.scm 19 */
{ /* Llib/bconfigure.scm 215 */
obj_t BgL_arg1155z00_1015;obj_t BgL_arg1156z00_1016;
BgL_arg1155z00_1015 = 
MAKE_YOUNG_PAIR(BGl_symbol1825z00zz__configurez00, 
string_to_bstring(BGL_RELEASE_NUMBER)); 
{ /* Llib/bconfigure.scm 216 */
obj_t BgL_arg1165z00_1017;obj_t BgL_arg1166z00_1018;
BgL_arg1165z00_1017 = 
MAKE_YOUNG_PAIR(BGl_symbol1827z00zz__configurez00, 
string_to_bstring(BGL_SPECIFIC_VERSION)); 
{ /* Llib/bconfigure.scm 217 */
obj_t BgL_arg1167z00_1019;obj_t BgL_arg1169z00_1020;
{ /* Llib/bconfigure.scm 217 */
obj_t BgL_arg1170z00_1021;
BgL_arg1170z00_1021 = BGl_symbol1829z00zz__configurez00; 
BgL_arg1167z00_1019 = 
MAKE_YOUNG_PAIR(BGl_symbol1831z00zz__configurez00, BgL_arg1170z00_1021); } 
{ /* Llib/bconfigure.scm 218 */
obj_t BgL_arg1172z00_1022;obj_t BgL_arg1174z00_1023;
BgL_arg1172z00_1022 = 
MAKE_YOUNG_PAIR(BGl_symbol1833z00zz__configurez00, 
string_to_bstring(BGL_HOMEURL)); 
{ /* Llib/bconfigure.scm 219 */
obj_t BgL_arg1175z00_1024;obj_t BgL_arg1176z00_1025;
BgL_arg1175z00_1024 = 
MAKE_YOUNG_PAIR(BGl_symbol1835z00zz__configurez00, 
string_to_bstring(SHELL)); 
{ /* Llib/bconfigure.scm 220 */
obj_t BgL_arg1177z00_1026;obj_t BgL_arg1178z00_1027;
BgL_arg1177z00_1026 = 
MAKE_YOUNG_PAIR(BGl_symbol1837z00zz__configurez00, 
string_to_bstring(C_COMPILER_STYLE)); 
{ /* Llib/bconfigure.scm 221 */
obj_t BgL_arg1179z00_1028;obj_t BgL_arg1186z00_1029;
BgL_arg1179z00_1028 = 
MAKE_YOUNG_PAIR(BGl_symbol1839z00zz__configurez00, 
string_to_bstring(C_COMPILER)); 
{ /* Llib/bconfigure.scm 222 */
obj_t BgL_arg1190z00_1030;obj_t BgL_arg1194z00_1031;
BgL_arg1190z00_1030 = 
MAKE_YOUNG_PAIR(BGl_symbol1841z00zz__configurez00, 
string_to_bstring(C_LD)); 
{ /* Llib/bconfigure.scm 223 */
obj_t BgL_arg1197z00_1032;obj_t BgL_arg1201z00_1033;
BgL_arg1197z00_1032 = 
MAKE_YOUNG_PAIR(BGl_symbol1843z00zz__configurez00, 
string_to_bstring(C_COMPILER_O_OPTION)); 
{ /* Llib/bconfigure.scm 224 */
obj_t BgL_arg1208z00_1034;obj_t BgL_arg1211z00_1035;
BgL_arg1208z00_1034 = 
MAKE_YOUNG_PAIR(BGl_symbol1845z00zz__configurez00, 
string_to_bstring(C_COMPILER_DEBUG_OPTION)); 
{ /* Llib/bconfigure.scm 225 */
obj_t BgL_arg1216z00_1036;obj_t BgL_arg1221z00_1037;
BgL_arg1216z00_1036 = 
MAKE_YOUNG_PAIR(BGl_symbol1847z00zz__configurez00, 
string_to_bstring(C_COMPILER_OPTIM_FLAGS)); 
{ /* Llib/bconfigure.scm 226 */
obj_t BgL_arg1223z00_1038;obj_t BgL_arg1225z00_1039;
BgL_arg1223z00_1038 = 
MAKE_YOUNG_PAIR(BGl_symbol1849z00zz__configurez00, 
string_to_bstring(C_COMPILER_RPATH)); 
{ /* Llib/bconfigure.scm 227 */
obj_t BgL_arg1227z00_1040;obj_t BgL_arg1229z00_1041;
BgL_arg1227z00_1040 = 
MAKE_YOUNG_PAIR(BGl_symbol1851z00zz__configurez00, 
string_to_bstring(C_FLAGS)); 
{ /* Llib/bconfigure.scm 228 */
obj_t BgL_arg1232z00_1042;obj_t BgL_arg1239z00_1043;
BgL_arg1232z00_1042 = 
MAKE_YOUNG_PAIR(BGl_symbol1853z00zz__configurez00, 
string_to_bstring(C_PICFLAGS)); 
{ /* Llib/bconfigure.scm 229 */
obj_t BgL_arg1242z00_1044;obj_t BgL_arg1243z00_1045;
BgL_arg1242z00_1044 = 
MAKE_YOUNG_PAIR(BGl_symbol1855z00zz__configurez00, 
string_to_bstring(C_NANFLAGS)); 
{ /* Llib/bconfigure.scm 230 */
obj_t BgL_arg1245z00_1046;obj_t BgL_arg1246z00_1047;
BgL_arg1245z00_1046 = 
MAKE_YOUNG_PAIR(BGl_symbol1857z00zz__configurez00, 
string_to_bstring(C_STRIP_FLAGS)); 
{ /* Llib/bconfigure.scm 231 */
obj_t BgL_arg1247z00_1048;obj_t BgL_arg1250z00_1049;
BgL_arg1247z00_1048 = 
MAKE_YOUNG_PAIR(BGl_symbol1859z00zz__configurez00, 
string_to_bstring(C_PROFILE_FLAGS)); 
{ /* Llib/bconfigure.scm 232 */
obj_t BgL_arg1252z00_1050;obj_t BgL_arg1253z00_1051;
BgL_arg1252z00_1050 = 
MAKE_YOUNG_PAIR(BGl_symbol1861z00zz__configurez00, 
string_to_bstring(C_OBJECT_FILE_EXTENSION)); 
{ /* Llib/bconfigure.scm 233 */
obj_t BgL_arg1254z00_1052;obj_t BgL_arg1256z00_1053;
BgL_arg1254z00_1052 = 
MAKE_YOUNG_PAIR(BGl_symbol1863z00zz__configurez00, 
BBOOL(C_STRING_SPLIT)); 
{ /* Llib/bconfigure.scm 234 */
obj_t BgL_arg1258z00_1054;obj_t BgL_arg1263z00_1055;
BgL_arg1258z00_1054 = 
MAKE_YOUNG_PAIR(BGl_symbol1865z00zz__configurez00, 
string_to_bstring(C_LINKER_STYLE)); 
{ /* Llib/bconfigure.scm 235 */
obj_t BgL_arg1268z00_1056;obj_t BgL_arg1270z00_1057;
BgL_arg1268z00_1056 = 
MAKE_YOUNG_PAIR(BGl_symbol1867z00zz__configurez00, 
string_to_bstring(C_LINKER_FLAGS)); 
{ /* Llib/bconfigure.scm 236 */
obj_t BgL_arg1271z00_1058;obj_t BgL_arg1273z00_1059;
BgL_arg1271z00_1058 = 
MAKE_YOUNG_PAIR(BGl_symbol1869z00zz__configurez00, 
string_to_bstring(C_LINKER_O_OPTION)); 
{ /* Llib/bconfigure.scm 237 */
obj_t BgL_arg1274z00_1060;obj_t BgL_arg1275z00_1061;
BgL_arg1274z00_1060 = 
MAKE_YOUNG_PAIR(BGl_symbol1871z00zz__configurez00, 
string_to_bstring(C_LINKER_DEBUG_OPTION)); 
{ /* Llib/bconfigure.scm 238 */
obj_t BgL_arg1276z00_1062;obj_t BgL_arg1277z00_1063;
BgL_arg1276z00_1062 = 
MAKE_YOUNG_PAIR(BGl_symbol1873z00zz__configurez00, 
string_to_bstring(C_LINKER_OPTIM_FLAGS)); 
{ /* Llib/bconfigure.scm 239 */
obj_t BgL_arg1280z00_1064;obj_t BgL_arg1281z00_1065;
BgL_arg1280z00_1064 = 
MAKE_YOUNG_PAIR(BGl_symbol1875z00zz__configurez00, 
string_to_bstring(C_LINKER_SONAME_OPTION)); 
{ /* Llib/bconfigure.scm 240 */
obj_t BgL_arg1282z00_1066;obj_t BgL_arg1284z00_1067;
BgL_arg1282z00_1066 = 
MAKE_YOUNG_PAIR(BGl_symbol1877z00zz__configurez00, 
string_to_bstring(C_LINKER_SHARED_OPTION)); 
{ /* Llib/bconfigure.scm 241 */
obj_t BgL_arg1285z00_1068;obj_t BgL_arg1286z00_1069;
BgL_arg1285z00_1068 = 
MAKE_YOUNG_PAIR(BGl_symbol1879z00zz__configurez00, 
string_to_bstring(BGL_LD_LIBRARY_DIR)); 
{ /* Llib/bconfigure.scm 242 */
obj_t BgL_arg1287z00_1070;obj_t BgL_arg1288z00_1071;
BgL_arg1287z00_1070 = 
MAKE_YOUNG_PAIR(BGl_symbol1881z00zz__configurez00, 
string_to_bstring(LIBRARY_DIRECTORY)); 
{ /* Llib/bconfigure.scm 243 */
obj_t BgL_arg1289z00_1072;obj_t BgL_arg1290z00_1073;
BgL_arg1289z00_1072 = 
MAKE_YOUNG_PAIR(BGl_symbol1883z00zz__configurez00, 
string_to_bstring(BGL_NON_CUSTOM_GC_DIR)); 
{ /* Llib/bconfigure.scm 244 */
obj_t BgL_arg1291z00_1074;obj_t BgL_arg1292z00_1075;
BgL_arg1291z00_1074 = 
MAKE_YOUNG_PAIR(BGl_symbol1885z00zz__configurez00, 
string_to_bstring(ZIP_DIRECTORY)); 
{ /* Llib/bconfigure.scm 245 */
obj_t BgL_arg1295z00_1076;obj_t BgL_arg1296z00_1077;
BgL_arg1295z00_1076 = 
MAKE_YOUNG_PAIR(BGl_symbol1887z00zz__configurez00, 
string_to_bstring(DLL_DIRECTORY)); 
{ /* Llib/bconfigure.scm 246 */
obj_t BgL_arg1297z00_1078;obj_t BgL_arg1298z00_1079;
BgL_arg1297z00_1078 = 
MAKE_YOUNG_PAIR(BGl_symbol1889z00zz__configurez00, 
string_to_bstring(USER_LIBRARIES)); 
{ /* Llib/bconfigure.scm 247 */
obj_t BgL_arg1299z00_1080;obj_t BgL_arg1300z00_1081;
BgL_arg1299z00_1080 = 
MAKE_YOUNG_PAIR(BGl_symbol1891z00zz__configurez00, 
string_to_bstring(C_BEAUTIFIER)); 
{ /* Llib/bconfigure.scm 248 */
obj_t BgL_arg1301z00_1082;obj_t BgL_arg1302z00_1083;
BgL_arg1301z00_1082 = 
MAKE_YOUNG_PAIR(BGl_symbol1893z00zz__configurez00, 
string_to_bstring(DIRNAME_CMD)); 
{ /* Llib/bconfigure.scm 249 */
obj_t BgL_arg1303z00_1084;obj_t BgL_arg1304z00_1085;
BgL_arg1303z00_1084 = 
MAKE_YOUNG_PAIR(BGl_symbol1895z00zz__configurez00, 
string_to_bstring(LIBRARY_BASE_NAME)); 
{ /* Llib/bconfigure.scm 250 */
obj_t BgL_arg1306z00_1086;obj_t BgL_arg1307z00_1087;
BgL_arg1306z00_1086 = 
MAKE_YOUNG_PAIR(BGl_symbol1897z00zz__configurez00, 
string_to_bstring(BGL_HEAP_DEBUG_COPT)); 
{ /* Llib/bconfigure.scm 251 */
obj_t BgL_arg1308z00_1088;obj_t BgL_arg1309z00_1089;
BgL_arg1308z00_1088 = 
MAKE_YOUNG_PAIR(BGl_symbol1899z00zz__configurez00, 
BBOOL(HAVE_SHARED_LIBRARY)); 
{ /* Llib/bconfigure.scm 252 */
obj_t BgL_arg1310z00_1090;obj_t BgL_arg1311z00_1091;
BgL_arg1310z00_1090 = 
MAKE_YOUNG_PAIR(BGl_symbol1901z00zz__configurez00, 
string_to_bstring(ADDITIONAL_SHARED_LINK_OPTION)); 
{ /* Llib/bconfigure.scm 253 */
obj_t BgL_arg1312z00_1092;obj_t BgL_arg1313z00_1093;
BgL_arg1312z00_1092 = 
MAKE_YOUNG_PAIR(BGl_symbol1903z00zz__configurez00, 
string_to_bstring(ADDITIONAL_STATIC_LINK_OPTION)); 
{ /* Llib/bconfigure.scm 254 */
obj_t BgL_arg1314z00_1094;obj_t BgL_arg1315z00_1095;
BgL_arg1314z00_1094 = 
MAKE_YOUNG_PAIR(BGl_symbol1905z00zz__configurez00, 
string_to_bstring(SHARED_LIB_SUFFIX)); 
{ /* Llib/bconfigure.scm 255 */
obj_t BgL_arg1316z00_1096;obj_t BgL_arg1317z00_1097;
BgL_arg1316z00_1096 = 
MAKE_YOUNG_PAIR(BGl_symbol1907z00zz__configurez00, 
BBOOL(BGL_AUTO_FINALIZER)); 
{ /* Llib/bconfigure.scm 256 */
obj_t BgL_arg1318z00_1098;obj_t BgL_arg1319z00_1099;
BgL_arg1318z00_1098 = 
MAKE_YOUNG_PAIR(BGl_symbol1909z00zz__configurez00, 
BBOOL(HAVE_DLOPEN)); 
{ /* Llib/bconfigure.scm 257 */
obj_t BgL_arg1322z00_1100;obj_t BgL_arg1324z00_1101;
BgL_arg1322z00_1100 = 
MAKE_YOUNG_PAIR(BGl_symbol1911z00zz__configurez00, 
string_to_bstring(DLOPEN_LD_OPT)); 
{ /* Llib/bconfigure.scm 258 */
obj_t BgL_arg1325z00_1102;obj_t BgL_arg1326z00_1103;
BgL_arg1325z00_1102 = 
MAKE_YOUNG_PAIR(BGl_symbol1913z00zz__configurez00, 
BBOOL(BGL_HAVE_BIGLOO_ABORT)); 
{ /* Llib/bconfigure.scm 259 */
obj_t BgL_arg1327z00_1104;obj_t BgL_arg1328z00_1105;
BgL_arg1327z00_1104 = 
MAKE_YOUNG_PAIR(BGl_symbol1915z00zz__configurez00, 
string_to_bstring(BGL_JAVA)); 
{ /* Llib/bconfigure.scm 260 */
obj_t BgL_arg1329z00_1106;obj_t BgL_arg1330z00_1107;
BgL_arg1329z00_1106 = 
MAKE_YOUNG_PAIR(BGl_symbol1917z00zz__configurez00, 
string_to_bstring(BGL_JAR)); 
{ /* Llib/bconfigure.scm 261 */
obj_t BgL_arg1331z00_1108;obj_t BgL_arg1333z00_1109;
BgL_arg1331z00_1108 = 
MAKE_YOUNG_PAIR(BGl_symbol1919z00zz__configurez00, 
string_to_bstring(BGL_JAVA_SHELL)); 
{ /* Llib/bconfigure.scm 262 */
obj_t BgL_arg1334z00_1110;obj_t BgL_arg1335z00_1111;
BgL_arg1334z00_1110 = 
MAKE_YOUNG_PAIR(BGl_symbol1921z00zz__configurez00, 
string_to_bstring(BGL_JAVA_OPT)); 
{ /* Llib/bconfigure.scm 263 */
obj_t BgL_arg1337z00_1112;obj_t BgL_arg1338z00_1113;
BgL_arg1337z00_1112 = 
MAKE_YOUNG_PAIR(BGl_symbol1923z00zz__configurez00, 
string_to_bstring(BGL_JAVA_VOPT)); 
{ /* Llib/bconfigure.scm 264 */
obj_t BgL_arg1339z00_1114;obj_t BgL_arg1340z00_1115;
BgL_arg1339z00_1114 = 
MAKE_YOUNG_PAIR(BGl_symbol1925z00zz__configurez00, 
string_to_bstring(BGL_DEFAULT_BACK_END)); 
{ /* Llib/bconfigure.scm 265 */
obj_t BgL_arg1341z00_1116;obj_t BgL_arg1342z00_1117;
BgL_arg1341z00_1116 = 
MAKE_YOUNG_PAIR(BGl_symbol1927z00zz__configurez00, 
string_to_bstring(BGL_GC_LIBRARY)); 
{ /* Llib/bconfigure.scm 266 */
obj_t BgL_arg1343z00_1118;obj_t BgL_arg1344z00_1119;
BgL_arg1343z00_1118 = 
MAKE_YOUNG_PAIR(BGl_symbol1929z00zz__configurez00, 
BBOOL(BGL_GC_CUSTOM)); 
{ /* Llib/bconfigure.scm 267 */
obj_t BgL_arg1345z00_1120;obj_t BgL_arg1346z00_1121;
{ /* Llib/bconfigure.scm 267 */
obj_t BgL_arg1347z00_1122;
BgL_arg1347z00_1122 = 
BGl_gczd2namezd2zz__configurez00(BGL_GC); 
BgL_arg1345z00_1120 = 
MAKE_YOUNG_PAIR(BGl_symbol1931z00zz__configurez00, BgL_arg1347z00_1122); } 
{ /* Llib/bconfigure.scm 268 */
obj_t BgL_arg1348z00_1123;obj_t BgL_arg1350z00_1124;
BgL_arg1348z00_1123 = 
MAKE_YOUNG_PAIR(BGl_symbol1933z00zz__configurez00, 
BBOOL(BGL_HAVE_BDB)); 
{ /* Llib/bconfigure.scm 269 */
obj_t BgL_arg1351z00_1125;obj_t BgL_arg1352z00_1126;
BgL_arg1351z00_1125 = 
MAKE_YOUNG_PAIR(BGl_symbol1935z00zz__configurez00, 
BBOOL(BGL_DNS_CACHE)); 
{ /* Llib/bconfigure.scm 270 */
obj_t BgL_arg1353z00_1127;obj_t BgL_arg1354z00_1128;
BgL_arg1353z00_1127 = 
MAKE_YOUNG_PAIR(BGl_symbol1937z00zz__configurez00, 
string_to_bstring(BGL_SHELL_MV)); 
{ /* Llib/bconfigure.scm 271 */
obj_t BgL_arg1355z00_1129;obj_t BgL_arg1356z00_1130;
BgL_arg1355z00_1129 = 
MAKE_YOUNG_PAIR(BGl_symbol1939z00zz__configurez00, 
string_to_bstring(BGL_SHELL_RM)); 
{ /* Llib/bconfigure.scm 272 */
obj_t BgL_arg1357z00_1131;obj_t BgL_arg1359z00_1132;
{ /* Llib/bconfigure.scm 272 */
obj_t BgL_arg1360z00_1133;
if(BGL_BIG_ENDIAN)
{ /* Llib/bconfigure.scm 272 */
BgL_arg1360z00_1133 = BGl_symbol1941z00zz__configurez00; }  else 
{ /* Llib/bconfigure.scm 272 */
BgL_arg1360z00_1133 = BGl_symbol1943z00zz__configurez00; } 
BgL_arg1357z00_1131 = 
MAKE_YOUNG_PAIR(BGl_symbol1945z00zz__configurez00, BgL_arg1360z00_1133); } 
{ /* Llib/bconfigure.scm 273 */
obj_t BgL_arg1361z00_1134;obj_t BgL_arg1362z00_1135;
BgL_arg1361z00_1134 = 
MAKE_YOUNG_PAIR(BGl_symbol1947z00zz__configurez00, 
string_to_bstring(BGL_REGEXP_FAMILY)); 
{ /* Llib/bconfigure.scm 274 */
obj_t BgL_arg1363z00_1136;obj_t BgL_arg1364z00_1137;
BgL_arg1363z00_1136 = 
MAKE_YOUNG_PAIR(BGl_symbol1949z00zz__configurez00, 
BINT(BGL_INT_BIT_SIZE)); 
{ /* Llib/bconfigure.scm 275 */
obj_t BgL_arg1365z00_1138;obj_t BgL_arg1367z00_1139;
BgL_arg1365z00_1138 = 
MAKE_YOUNG_PAIR(BGl_symbol1951z00zz__configurez00, 
BINT(BGL_ELONG_BIT_SIZE)); 
{ /* Llib/bconfigure.scm 276 */
obj_t BgL_arg1368z00_1140;obj_t BgL_arg1370z00_1141;
BgL_arg1368z00_1140 = 
MAKE_YOUNG_PAIR(BGl_symbol1953z00zz__configurez00, 
BBOOL(BGL_NAN_TAGGING)); 
{ /* Llib/bconfigure.scm 277 */
obj_t BgL_arg1371z00_1142;obj_t BgL_arg1372z00_1143;
BgL_arg1371z00_1142 = 
MAKE_YOUNG_PAIR(BGl_symbol1955z00zz__configurez00, 
BBOOL(BGL_HAVE_UNISTRING)); 
{ /* Llib/bconfigure.scm 278 */
obj_t BgL_arg1373z00_1144;obj_t BgL_arg1374z00_1145;
BgL_arg1373z00_1144 = 
MAKE_YOUNG_PAIR(BGl_symbol1957z00zz__configurez00, 
BBOOL(BGL_HAVE_SYSLOG)); 
{ /* Llib/bconfigure.scm 279 */
obj_t BgL_arg1375z00_1146;obj_t BgL_arg1376z00_1147;
BgL_arg1375z00_1146 = 
MAKE_YOUNG_PAIR(BGl_symbol1959z00zz__configurez00, 
BBOOL(BGL_HAVE_OVERFLOW)); 
{ /* Llib/bconfigure.scm 280 */
obj_t BgL_arg1377z00_1148;obj_t BgL_arg1378z00_1149;
BgL_arg1377z00_1148 = 
MAKE_YOUNG_PAIR(BGl_symbol1961z00zz__configurez00, 
BINT(BGL_CLASS_DISPLAY_MIN_SIZE)); 
{ /* Llib/bconfigure.scm 281 */
obj_t BgL_arg1379z00_1150;obj_t BgL_arg1380z00_1151;
BgL_arg1379z00_1150 = 
MAKE_YOUNG_PAIR(BGl_symbol1963z00zz__configurez00, 
string_to_bstring(OS_CLASS)); 
{ /* Llib/bconfigure.scm 282 */
obj_t BgL_arg1381z00_1152;obj_t BgL_arg1382z00_1153;
BgL_arg1381z00_1152 = 
MAKE_YOUNG_PAIR(BGl_symbol1965z00zz__configurez00, 
string_to_bstring(OS_NAME)); 
{ /* Llib/bconfigure.scm 283 */
obj_t BgL_arg1383z00_1154;obj_t BgL_arg1384z00_1155;
BgL_arg1383z00_1154 = 
MAKE_YOUNG_PAIR(BGl_symbol1967z00zz__configurez00, 
string_to_bstring(OS_ARCH)); 
{ /* Llib/bconfigure.scm 284 */
obj_t BgL_arg1385z00_1156;obj_t BgL_arg1386z00_1157;
BgL_arg1385z00_1156 = 
MAKE_YOUNG_PAIR(BGl_symbol1969z00zz__configurez00, 
string_to_bstring(OS_VERSION)); 
{ /* Llib/bconfigure.scm 285 */
obj_t BgL_arg1387z00_1158;obj_t BgL_arg1388z00_1159;
BgL_arg1387z00_1158 = 
MAKE_YOUNG_PAIR(BGl_symbol1971z00zz__configurez00, 
BBOOL(BGL_HAS_THREAD_LOCALSTORAGE)); 
{ /* Llib/bconfigure.scm 286 */
obj_t BgL_arg1389z00_1160;obj_t BgL_arg1390z00_1161;
BgL_arg1389z00_1160 = 
MAKE_YOUNG_PAIR(BGl_symbol1973z00zz__configurez00, 
BBOOL(BGL_HAVE_SPINLOCK)); 
{ /* Llib/bconfigure.scm 287 */
obj_t BgL_arg1391z00_1162;obj_t BgL_arg1392z00_1163;
BgL_arg1391z00_1162 = 
MAKE_YOUNG_PAIR(BGl_symbol1975z00zz__configurez00, 
BBOOL(BGL_HAVE_ALLOCA)); 
{ /* Llib/bconfigure.scm 288 */
obj_t BgL_arg1393z00_1164;
BgL_arg1393z00_1164 = 
MAKE_YOUNG_PAIR(BGl_symbol1977z00zz__configurez00, 
BBOOL(BGL_HAVE_C99STACKALLOC)); 
BgL_arg1392z00_1163 = 
MAKE_YOUNG_PAIR(BgL_arg1393z00_1164, BNIL); } 
BgL_arg1390z00_1161 = 
MAKE_YOUNG_PAIR(BgL_arg1391z00_1162, BgL_arg1392z00_1163); } 
BgL_arg1388z00_1159 = 
MAKE_YOUNG_PAIR(BgL_arg1389z00_1160, BgL_arg1390z00_1161); } 
BgL_arg1386z00_1157 = 
MAKE_YOUNG_PAIR(BgL_arg1387z00_1158, BgL_arg1388z00_1159); } 
BgL_arg1384z00_1155 = 
MAKE_YOUNG_PAIR(BgL_arg1385z00_1156, BgL_arg1386z00_1157); } 
BgL_arg1382z00_1153 = 
MAKE_YOUNG_PAIR(BgL_arg1383z00_1154, BgL_arg1384z00_1155); } 
BgL_arg1380z00_1151 = 
MAKE_YOUNG_PAIR(BgL_arg1381z00_1152, BgL_arg1382z00_1153); } 
BgL_arg1378z00_1149 = 
MAKE_YOUNG_PAIR(BgL_arg1379z00_1150, BgL_arg1380z00_1151); } 
BgL_arg1376z00_1147 = 
MAKE_YOUNG_PAIR(BgL_arg1377z00_1148, BgL_arg1378z00_1149); } 
BgL_arg1374z00_1145 = 
MAKE_YOUNG_PAIR(BgL_arg1375z00_1146, BgL_arg1376z00_1147); } 
BgL_arg1372z00_1143 = 
MAKE_YOUNG_PAIR(BgL_arg1373z00_1144, BgL_arg1374z00_1145); } 
BgL_arg1370z00_1141 = 
MAKE_YOUNG_PAIR(BgL_arg1371z00_1142, BgL_arg1372z00_1143); } 
BgL_arg1367z00_1139 = 
MAKE_YOUNG_PAIR(BgL_arg1368z00_1140, BgL_arg1370z00_1141); } 
BgL_arg1364z00_1137 = 
MAKE_YOUNG_PAIR(BgL_arg1365z00_1138, BgL_arg1367z00_1139); } 
BgL_arg1362z00_1135 = 
MAKE_YOUNG_PAIR(BgL_arg1363z00_1136, BgL_arg1364z00_1137); } 
BgL_arg1359z00_1132 = 
MAKE_YOUNG_PAIR(BgL_arg1361z00_1134, BgL_arg1362z00_1135); } 
BgL_arg1356z00_1130 = 
MAKE_YOUNG_PAIR(BgL_arg1357z00_1131, BgL_arg1359z00_1132); } 
BgL_arg1354z00_1128 = 
MAKE_YOUNG_PAIR(BgL_arg1355z00_1129, BgL_arg1356z00_1130); } 
BgL_arg1352z00_1126 = 
MAKE_YOUNG_PAIR(BgL_arg1353z00_1127, BgL_arg1354z00_1128); } 
BgL_arg1350z00_1124 = 
MAKE_YOUNG_PAIR(BgL_arg1351z00_1125, BgL_arg1352z00_1126); } 
BgL_arg1346z00_1121 = 
MAKE_YOUNG_PAIR(BgL_arg1348z00_1123, BgL_arg1350z00_1124); } 
BgL_arg1344z00_1119 = 
MAKE_YOUNG_PAIR(BgL_arg1345z00_1120, BgL_arg1346z00_1121); } 
BgL_arg1342z00_1117 = 
MAKE_YOUNG_PAIR(BgL_arg1343z00_1118, BgL_arg1344z00_1119); } 
BgL_arg1340z00_1115 = 
MAKE_YOUNG_PAIR(BgL_arg1341z00_1116, BgL_arg1342z00_1117); } 
BgL_arg1338z00_1113 = 
MAKE_YOUNG_PAIR(BgL_arg1339z00_1114, BgL_arg1340z00_1115); } 
BgL_arg1335z00_1111 = 
MAKE_YOUNG_PAIR(BgL_arg1337z00_1112, BgL_arg1338z00_1113); } 
BgL_arg1333z00_1109 = 
MAKE_YOUNG_PAIR(BgL_arg1334z00_1110, BgL_arg1335z00_1111); } 
BgL_arg1330z00_1107 = 
MAKE_YOUNG_PAIR(BgL_arg1331z00_1108, BgL_arg1333z00_1109); } 
BgL_arg1328z00_1105 = 
MAKE_YOUNG_PAIR(BgL_arg1329z00_1106, BgL_arg1330z00_1107); } 
BgL_arg1326z00_1103 = 
MAKE_YOUNG_PAIR(BgL_arg1327z00_1104, BgL_arg1328z00_1105); } 
BgL_arg1324z00_1101 = 
MAKE_YOUNG_PAIR(BgL_arg1325z00_1102, BgL_arg1326z00_1103); } 
BgL_arg1319z00_1099 = 
MAKE_YOUNG_PAIR(BgL_arg1322z00_1100, BgL_arg1324z00_1101); } 
BgL_arg1317z00_1097 = 
MAKE_YOUNG_PAIR(BgL_arg1318z00_1098, BgL_arg1319z00_1099); } 
BgL_arg1315z00_1095 = 
MAKE_YOUNG_PAIR(BgL_arg1316z00_1096, BgL_arg1317z00_1097); } 
BgL_arg1313z00_1093 = 
MAKE_YOUNG_PAIR(BgL_arg1314z00_1094, BgL_arg1315z00_1095); } 
BgL_arg1311z00_1091 = 
MAKE_YOUNG_PAIR(BgL_arg1312z00_1092, BgL_arg1313z00_1093); } 
BgL_arg1309z00_1089 = 
MAKE_YOUNG_PAIR(BgL_arg1310z00_1090, BgL_arg1311z00_1091); } 
BgL_arg1307z00_1087 = 
MAKE_YOUNG_PAIR(BgL_arg1308z00_1088, BgL_arg1309z00_1089); } 
BgL_arg1304z00_1085 = 
MAKE_YOUNG_PAIR(BgL_arg1306z00_1086, BgL_arg1307z00_1087); } 
BgL_arg1302z00_1083 = 
MAKE_YOUNG_PAIR(BgL_arg1303z00_1084, BgL_arg1304z00_1085); } 
BgL_arg1300z00_1081 = 
MAKE_YOUNG_PAIR(BgL_arg1301z00_1082, BgL_arg1302z00_1083); } 
BgL_arg1298z00_1079 = 
MAKE_YOUNG_PAIR(BgL_arg1299z00_1080, BgL_arg1300z00_1081); } 
BgL_arg1296z00_1077 = 
MAKE_YOUNG_PAIR(BgL_arg1297z00_1078, BgL_arg1298z00_1079); } 
BgL_arg1292z00_1075 = 
MAKE_YOUNG_PAIR(BgL_arg1295z00_1076, BgL_arg1296z00_1077); } 
BgL_arg1290z00_1073 = 
MAKE_YOUNG_PAIR(BgL_arg1291z00_1074, BgL_arg1292z00_1075); } 
BgL_arg1288z00_1071 = 
MAKE_YOUNG_PAIR(BgL_arg1289z00_1072, BgL_arg1290z00_1073); } 
BgL_arg1286z00_1069 = 
MAKE_YOUNG_PAIR(BgL_arg1287z00_1070, BgL_arg1288z00_1071); } 
BgL_arg1284z00_1067 = 
MAKE_YOUNG_PAIR(BgL_arg1285z00_1068, BgL_arg1286z00_1069); } 
BgL_arg1281z00_1065 = 
MAKE_YOUNG_PAIR(BgL_arg1282z00_1066, BgL_arg1284z00_1067); } 
BgL_arg1277z00_1063 = 
MAKE_YOUNG_PAIR(BgL_arg1280z00_1064, BgL_arg1281z00_1065); } 
BgL_arg1275z00_1061 = 
MAKE_YOUNG_PAIR(BgL_arg1276z00_1062, BgL_arg1277z00_1063); } 
BgL_arg1273z00_1059 = 
MAKE_YOUNG_PAIR(BgL_arg1274z00_1060, BgL_arg1275z00_1061); } 
BgL_arg1270z00_1057 = 
MAKE_YOUNG_PAIR(BgL_arg1271z00_1058, BgL_arg1273z00_1059); } 
BgL_arg1263z00_1055 = 
MAKE_YOUNG_PAIR(BgL_arg1268z00_1056, BgL_arg1270z00_1057); } 
BgL_arg1256z00_1053 = 
MAKE_YOUNG_PAIR(BgL_arg1258z00_1054, BgL_arg1263z00_1055); } 
BgL_arg1253z00_1051 = 
MAKE_YOUNG_PAIR(BgL_arg1254z00_1052, BgL_arg1256z00_1053); } 
BgL_arg1250z00_1049 = 
MAKE_YOUNG_PAIR(BgL_arg1252z00_1050, BgL_arg1253z00_1051); } 
BgL_arg1246z00_1047 = 
MAKE_YOUNG_PAIR(BgL_arg1247z00_1048, BgL_arg1250z00_1049); } 
BgL_arg1243z00_1045 = 
MAKE_YOUNG_PAIR(BgL_arg1245z00_1046, BgL_arg1246z00_1047); } 
BgL_arg1239z00_1043 = 
MAKE_YOUNG_PAIR(BgL_arg1242z00_1044, BgL_arg1243z00_1045); } 
BgL_arg1229z00_1041 = 
MAKE_YOUNG_PAIR(BgL_arg1232z00_1042, BgL_arg1239z00_1043); } 
BgL_arg1225z00_1039 = 
MAKE_YOUNG_PAIR(BgL_arg1227z00_1040, BgL_arg1229z00_1041); } 
BgL_arg1221z00_1037 = 
MAKE_YOUNG_PAIR(BgL_arg1223z00_1038, BgL_arg1225z00_1039); } 
BgL_arg1211z00_1035 = 
MAKE_YOUNG_PAIR(BgL_arg1216z00_1036, BgL_arg1221z00_1037); } 
BgL_arg1201z00_1033 = 
MAKE_YOUNG_PAIR(BgL_arg1208z00_1034, BgL_arg1211z00_1035); } 
BgL_arg1194z00_1031 = 
MAKE_YOUNG_PAIR(BgL_arg1197z00_1032, BgL_arg1201z00_1033); } 
BgL_arg1186z00_1029 = 
MAKE_YOUNG_PAIR(BgL_arg1190z00_1030, BgL_arg1194z00_1031); } 
BgL_arg1178z00_1027 = 
MAKE_YOUNG_PAIR(BgL_arg1179z00_1028, BgL_arg1186z00_1029); } 
BgL_arg1176z00_1025 = 
MAKE_YOUNG_PAIR(BgL_arg1177z00_1026, BgL_arg1178z00_1027); } 
BgL_arg1174z00_1023 = 
MAKE_YOUNG_PAIR(BgL_arg1175z00_1024, BgL_arg1176z00_1025); } 
BgL_arg1169z00_1020 = 
MAKE_YOUNG_PAIR(BgL_arg1172z00_1022, BgL_arg1174z00_1023); } 
BgL_arg1166z00_1018 = 
MAKE_YOUNG_PAIR(BgL_arg1167z00_1019, BgL_arg1169z00_1020); } 
BgL_arg1156z00_1016 = 
MAKE_YOUNG_PAIR(BgL_arg1165z00_1017, BgL_arg1166z00_1018); } 
return ( 
BGl_za2bigloozd2configurationza2zd2zz__configurez00 = 
MAKE_YOUNG_PAIR(BgL_arg1155z00_1015, BgL_arg1156z00_1016), BUNSPEC) ;} } 

}



/* _bigloo-config */
obj_t BGl__bigloozd2configzd2zz__configurez00(obj_t BgL_env1082z00_5, obj_t BgL_opt1081z00_4)
{
{ /* Llib/bconfigure.scm 293 */
{ /* Llib/bconfigure.scm 293 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1081z00_4)) { case ((long)0) : 

{ /* Llib/bconfigure.scm 293 */

return 
BGl_bigloozd2configzd2zz__configurez00(BFALSE);} break;case ((long)1) : 

{ /* Llib/bconfigure.scm 293 */
obj_t BgL_configz00_1177;
BgL_configz00_1177 = 
VECTOR_REF(BgL_opt1081z00_4,((long)0)); 
{ /* Llib/bconfigure.scm 293 */

return 
BGl_bigloozd2configzd2zz__configurez00(BgL_configz00_1177);} } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol1979z00zz__configurez00, BGl_string1981z00zz__configurez00, 
BINT(
VECTOR_LENGTH(BgL_opt1081z00_4)));} } } } 

}



/* bigloo-config */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t BgL_configz00_3)
{
{ /* Llib/bconfigure.scm 293 */
if(
CBOOL(BgL_configz00_3))
{ /* Llib/bconfigure.scm 296 */
obj_t BgL_cz00_1179;
BgL_cz00_1179 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_configz00_3, BGl_za2bigloozd2configurationza2zd2zz__configurez00); 
if(
PAIRP(BgL_cz00_1179))
{ /* Llib/bconfigure.scm 297 */
return 
CDR(BgL_cz00_1179);}  else 
{ /* Llib/bconfigure.scm 297 */
return BUNSPEC;} }  else 
{ /* Llib/bconfigure.scm 295 */
obj_t BgL_res1764z00_1583;
{ /* Llib/bconfigure.scm 305 */
obj_t BgL_aux1819z00_1848;
BgL_aux1819z00_1848 = 
BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(BGl_za2bigloozd2configurationza2zd2zz__configurez00); 
if(
PAIRP(BgL_aux1819z00_1848))
{ /* Llib/bconfigure.scm 305 */
BgL_res1764z00_1583 = BgL_aux1819z00_1848; }  else 
{ 
obj_t BgL_auxz00_2182;
BgL_auxz00_2182 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1982z00zz__configurez00, 
BINT(((long)16250)), BGl_string1980z00zz__configurez00, BGl_string1983z00zz__configurez00, BgL_aux1819z00_1848); 
FAILURE(BgL_auxz00_2182,BFALSE,BFALSE);} } 
return BgL_res1764z00_1583;} } 

}



/* bigloo-configuration */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2configurationzd2zz__configurez00()
{
{ /* Llib/bconfigure.scm 304 */
{ /* Llib/bconfigure.scm 305 */
obj_t BgL_aux1821z00_1850;
BgL_aux1821z00_1850 = 
BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(BGl_za2bigloozd2configurationza2zd2zz__configurez00); 
if(
PAIRP(BgL_aux1821z00_1850))
{ /* Llib/bconfigure.scm 305 */
return BgL_aux1821z00_1850;}  else 
{ 
obj_t BgL_auxz00_2189;
BgL_auxz00_2189 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1982z00zz__configurez00, 
BINT(((long)16250)), BGl_string1984z00zz__configurez00, BGl_string1983z00zz__configurez00, BgL_aux1821z00_1850); 
FAILURE(BgL_auxz00_2189,BFALSE,BFALSE);} } } 

}



/* &bigloo-configuration */
obj_t BGl_z62bigloozd2configurationzb0zz__configurez00(obj_t BgL_envz00_1844)
{
{ /* Llib/bconfigure.scm 304 */
return 
BGl_bigloozd2configurationzd2zz__configurez00();} 

}



/* bigloo-configuration-add-entry! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2configurationzd2addzd2entryz12zc0zz__configurez00(obj_t BgL_keyz00_6, obj_t BgL_valz00_7)
{
{ /* Llib/bconfigure.scm 310 */
{ /* Llib/bconfigure.scm 311 */
obj_t BgL_oldz00_1181;
BgL_oldz00_1181 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_6, BGl_za2bigloozd2configurationza2zd2zz__configurez00); 
if(
PAIRP(BgL_oldz00_1181))
{ /* Llib/bconfigure.scm 312 */
return 
SET_CDR(BgL_oldz00_1181, BgL_valz00_7);}  else 
{ /* Llib/bconfigure.scm 315 */
obj_t BgL_arg1401z00_1183;
BgL_arg1401z00_1183 = 
MAKE_YOUNG_PAIR(BgL_keyz00_6, BgL_valz00_7); 
return ( 
BGl_za2bigloozd2configurationza2zd2zz__configurez00 = 
MAKE_YOUNG_PAIR(BgL_arg1401z00_1183, BGl_za2bigloozd2configurationza2zd2zz__configurez00), BUNSPEC) ;} } } 

}



/* &bigloo-configuration-add-entry! */
obj_t BGl_z62bigloozd2configurationzd2addzd2entryz12za2zz__configurez00(obj_t BgL_envz00_1845, obj_t BgL_keyz00_1846, obj_t BgL_valz00_1847)
{
{ /* Llib/bconfigure.scm 310 */
{ /* Llib/bconfigure.scm 311 */
obj_t BgL_auxz00_2200;
if(
SYMBOLP(BgL_keyz00_1846))
{ /* Llib/bconfigure.scm 311 */
BgL_auxz00_2200 = BgL_keyz00_1846
; }  else 
{ 
obj_t BgL_auxz00_2203;
BgL_auxz00_2203 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1982z00zz__configurez00, 
BINT(((long)16562)), BGl_string1985z00zz__configurez00, BGl_string1986z00zz__configurez00, BgL_keyz00_1846); 
FAILURE(BgL_auxz00_2203,BFALSE,BFALSE);} 
return 
BGl_bigloozd2configurationzd2addzd2entryz12zc0zz__configurez00(BgL_auxz00_2200, BgL_valz00_1847);} } 

}



/* gc-name */
obj_t BGl_gczd2namezd2zz__configurez00(int BgL_numz00_8)
{
{ /* Llib/bconfigure.scm 320 */
if(
(
(long)(BgL_numz00_8)==BGL_NO_GC))
{ /* Llib/bconfigure.scm 324 */
return BGl_string1987z00zz__configurez00;}  else 
{ /* Llib/bconfigure.scm 324 */
if(
(
(long)(BgL_numz00_8)==BGL_BOEHM_GC))
{ /* Llib/bconfigure.scm 325 */
return BGl_string1988z00zz__configurez00;}  else 
{ /* Llib/bconfigure.scm 325 */
if(
(
(long)(BgL_numz00_8)==BGL_SAW_GC))
{ /* Llib/bconfigure.scm 326 */
return BGl_string1989z00zz__configurez00;}  else 
{ /* Llib/bconfigure.scm 326 */
return BGl_string1990z00zz__configurez00;} } } } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__configurez00()
{
{ /* Llib/bconfigure.scm 19 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__configurez00()
{
{ /* Llib/bconfigure.scm 19 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__configurez00()
{
{ /* Llib/bconfigure.scm 19 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__configurez00()
{
{ /* Llib/bconfigure.scm 19 */
return 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string1991z00zz__configurez00));} 

}

#ifdef __cplusplus
}
#endif
