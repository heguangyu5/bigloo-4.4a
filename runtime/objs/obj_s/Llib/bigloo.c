/*===========================================================================*/
/*   (Llib/bigloo.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/bigloo.scm -indent -o objs/obj_s/Llib/bigloo.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL bool_t BGl_cnstzf3zf3zz__biglooz00(obj_t);
static obj_t BGl_z62opaquezf3z91zz__biglooz00(obj_t, obj_t);
static obj_t BGl_z62bigloozd2classzd2mangledzf3z91zz__biglooz00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__biglooz00 = BUNSPEC;
static obj_t BGl_za2levelza2z00zz__biglooz00 = BUNSPEC;
static obj_t BGl_z62timez62zz__biglooz00(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static long BGl_getzd28bitszd2integerze70ze7zz__biglooz00(obj_t, obj_t);
static obj_t BGl_z62bigloozd2modulezd2manglez62zz__biglooz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bigloozd2exitzd2applyz62zz__biglooz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t bigloo_mangledp(obj_t);
BGL_EXPORTED_DECL obj_t BGl_timez00zz__biglooz00(obj_t);
static obj_t BGl_z62bigloozd2mangledzf3z43zz__biglooz00(obj_t, obj_t);
static obj_t BGl_toplevelzd2initzd2zz__biglooz00();
static obj_t BGl_z62bigloozd2exitzd2mutexz62zz__biglooz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_procedurezd2attrzd2setz12z12zz__biglooz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_checkzd2versionz12zc0zz__biglooz00(obj_t, char *, obj_t);
static obj_t BGl_z62cnstzf3z91zz__biglooz00(obj_t, obj_t);
extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
BGL_EXPORTED_DECL obj_t bigloo_module_mangle(obj_t, obj_t);
extern unsigned char BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long);
static obj_t BGl_genericzd2initzd2zz__biglooz00();
extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_objectzd2initzd2zz__biglooz00();
static obj_t BGl_z62bmemzd2resetz12za2zz__biglooz00(obj_t);
static obj_t BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00 = BUNSPEC;
extern void bgl_gc_verbose_set(bool_t);
static obj_t BGl_z62bigloozd2gczd2verbosezd2setz12za2zz__biglooz00(obj_t, obj_t);
static obj_t BGl_z62makezd2cellzb0zz__biglooz00(obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_methodzd2initzd2zz__biglooz00();
static obj_t BGl_z62bigloozd2manglezb0zz__biglooz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_registerzd2exitzd2functionz12z12zz__biglooz00(obj_t);
BGL_EXPORTED_DECL obj_t bigloo_class_demangle(obj_t);
static long BGl_manglezd2atz12zc0zz__biglooz00(obj_t, obj_t, long, long);
extern obj_t make_string(long, unsigned char);
BGL_EXPORTED_DECL obj_t BGl_makezd2cellzd2zz__biglooz00(obj_t);
static obj_t BGl_z62cellzd2refzb0zz__biglooz00(obj_t, obj_t);
extern obj_t string_append(obj_t, obj_t);
static obj_t BGl_list2195z00zz__biglooz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cellzf3zf3zz__biglooz00(obj_t);
extern bool_t bigloo_strncmp(obj_t, obj_t, long);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00(obj_t);
extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
static obj_t BGl_z62bigloozd2classzd2demanglez62zz__biglooz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_opaquezf3zf3zz__biglooz00(obj_t);
extern obj_t bgl_remq_bang(obj_t, obj_t);
static obj_t BGl_z62unregisterzd2exitzd2functionz12z70zz__biglooz00(obj_t, obj_t);
static obj_t BGl_z62cellzf3z91zz__biglooz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static long BGl_charzd2ze3digitze70zd6zz__biglooz00(unsigned char);
BGL_EXPORTED_DECL obj_t bigloo_demangle(obj_t);
static obj_t BGl_z62bigloozd2needzd2manglingzf3z91zz__biglooz00(obj_t, obj_t);
static obj_t BGl_z62bigloozd2demanglezb0zz__biglooz00(obj_t, obj_t);
static obj_t BGl_symbol2200z00zz__biglooz00 = BUNSPEC;
static obj_t BGl_symbol2202z00zz__biglooz00 = BUNSPEC;
static obj_t BGl_za2exitzd2mutexza2zd2zz__biglooz00 = BUNSPEC;
static obj_t BGl_z62nullzd2orzd2unspecifiedzf3z91zz__biglooz00(obj_t, obj_t);
static obj_t BGl_bigloozd2demanglezd2atze70ze7zz__biglooz00(obj_t, long, obj_t);
static obj_t BGl_z62cellzd2setz12za2zz__biglooz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_unspecifiedz00zz__biglooz00();
static obj_t BGl_cnstzd2initzd2zz__biglooz00();
BGL_EXPORTED_DECL bool_t BGl_nullzd2orzd2unspecifiedzf3zf3zz__biglooz00(obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__biglooz00();
BGL_EXPORTED_DECL obj_t BGl_unregisterzd2exitzd2functionz12z12zz__biglooz00(obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__biglooz00();
BGL_EXPORTED_DECL obj_t BGl_opaquezd2nilzd2zz__biglooz00();
static obj_t BGl_symbol2152z00zz__biglooz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t bigloo_mangle(obj_t);
BGL_EXPORTED_DECL obj_t BGl_cellzd2refzd2zz__biglooz00(obj_t);
BGL_EXPORTED_DECL obj_t bigloo_exit_apply(obj_t);
BGL_EXPORTED_DECL int BGl_procedurezd2lengthzd2zz__biglooz00(obj_t);
BGL_EXPORTED_DECL obj_t bgl_exit_mutex();
static obj_t BGl_za2releaseza2z00zz__biglooz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cellzd2setz12zc0zz__biglooz00(obj_t, obj_t);
static obj_t BGl_z62procedurezd2attrzb0zz__biglooz00(obj_t, obj_t);
extern obj_t bgl_bmem_reset();
static obj_t BGl_z62opaquezd2nilzb0zz__biglooz00(obj_t);
static obj_t BGl_symbol2196z00zz__biglooz00 = BUNSPEC;
static obj_t BGl_symbol2198z00zz__biglooz00 = BUNSPEC;
static obj_t BGl_z62registerzd2exitzd2functionz12z70zz__biglooz00(obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, int, int);
static obj_t BGl_z62procedurezd2attrzd2setz12z70zz__biglooz00(obj_t, obj_t, obj_t);
static obj_t BGl_za2modulesza2z00zz__biglooz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t bigloo_class_mangledp(obj_t);
static obj_t BGl_z62unspecifiedz62zz__biglooz00(obj_t);
BGL_EXPORTED_DECL int BGl_procedurezd2arityzd2zz__biglooz00(obj_t);
static obj_t BGl_z62procedurezd2lengthzb0zz__biglooz00(obj_t, obj_t);
static obj_t BGl_z62procedurezd2arityzb0zz__biglooz00(obj_t, obj_t);
extern obj_t BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t, long, obj_t, long, long);
BGL_EXPORTED_DECL obj_t BGl_bmemzd2resetz12zc0zz__biglooz00();
BGL_EXPORTED_DECL obj_t BGl_procedurezd2attrzd2zz__biglooz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2gczd2verbosezd2setz12zc0zz__biglooz00(bool_t);
static obj_t BGl_z62checkzd2versionz12za2zz__biglooz00(obj_t, obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_cellzd2setz12zd2envz12zz__biglooz00, BgL_bgl_za762cellza7d2setza7122207za7, BGl_z62cellzd2setz12za2zz__biglooz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2201z00zz__biglooz00, BgL_bgl_string2201za700za7za7_2208za7, "val", 3 );
DEFINE_STRING( BGl_string2203z00zz__biglooz00, BgL_bgl_string2203za700za7za7_2209za7, "time", 4 );
DEFINE_STRING( BGl_string2204z00zz__biglooz00, BgL_bgl_string2204za700za7za7_2210za7, "&time", 5 );
DEFINE_STRING( BGl_string2205z00zz__biglooz00, BgL_bgl_string2205za700za7za7_2211za7, "__bigloo", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_unregisterzd2exitzd2functionz12zd2envzc0zz__biglooz00, BgL_bgl_za762unregisterza7d22212z00, BGl_z62unregisterzd2exitzd2functionz12z70zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_procedurezd2attrzd2envz00zz__biglooz00, BgL_bgl_za762procedureza7d2a2213z00, BGl_z62procedurezd2attrzb0zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_opaquezd2nilzd2envz00zz__biglooz00, BgL_bgl_za762opaqueza7d2nilza72214za7, BGl_z62opaquezd2nilzb0zz__biglooz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2mangledzf3zd2envzf3zz__biglooz00, BgL_bgl_za762biglooza7d2mang2215z00, BGl_z62bigloozd2mangledzf3z43zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2153z00zz__biglooz00, BgL_bgl_string2153za700za7za7_2216za7, "bigloo-exit", 11 );
DEFINE_STRING( BGl_string2154z00zz__biglooz00, BgL_bgl_string2154za700za7za7_2217za7, " (level 0)", 10 );
DEFINE_STRING( BGl_string2155z00zz__biglooz00, BgL_bgl_string2155za700za7za7_2218za7, "/tmp/4.4a/runtime/Llib/bigloo.scm", 33 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2exitzd2mutexzd2envzd2zz__biglooz00, BgL_bgl_za762biglooza7d2exit2219z00, BGl_z62bigloozd2exitzd2mutexz62zz__biglooz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2156z00zz__biglooz00, BgL_bgl_string2156za700za7za7_2220za7, "string-set!", 11 );
DEFINE_STRING( BGl_string2157z00zz__biglooz00, BgL_bgl_string2157za700za7za7_2221za7, "Some modules have been compiled by: ", 36 );
DEFINE_STRING( BGl_string2158z00zz__biglooz00, BgL_bgl_string2158za700za7za7_2222za7, "and other by: ", 14 );
DEFINE_STRING( BGl_string2159z00zz__biglooz00, BgL_bgl_string2159za700za7za7_2223za7, "&check-version!", 15 );
DEFINE_STRING( BGl_string2160z00zz__biglooz00, BgL_bgl_string2160za700za7za7_2224za7, "bstring", 7 );
DEFINE_STRING( BGl_string2161z00zz__biglooz00, BgL_bgl_string2161za700za7za7_2225za7, "&procedure-arity", 16 );
DEFINE_STRING( BGl_string2162z00zz__biglooz00, BgL_bgl_string2162za700za7za7_2226za7, "procedure", 9 );
DEFINE_STRING( BGl_string2163z00zz__biglooz00, BgL_bgl_string2163za700za7za7_2227za7, "&procedure-length", 17 );
DEFINE_STRING( BGl_string2164z00zz__biglooz00, BgL_bgl_string2164za700za7za7_2228za7, "&procedure-attr", 15 );
DEFINE_STRING( BGl_string2165z00zz__biglooz00, BgL_bgl_string2165za700za7za7_2229za7, "&procedure-attr-set!", 20 );
DEFINE_STRING( BGl_string2166z00zz__biglooz00, BgL_bgl_string2166za700za7za7_2230za7, "0123456789abcdef", 16 );
DEFINE_STRING( BGl_string2167z00zz__biglooz00, BgL_bgl_string2167za700za7za7_2231za7, "string-ref", 10 );
DEFINE_STRING( BGl_string2168z00zz__biglooz00, BgL_bgl_string2168za700za7za7_2232za7, "bigloo-mangle-string", 20 );
DEFINE_STRING( BGl_string2169z00zz__biglooz00, BgL_bgl_string2169za700za7za7_2233za7, "Can't mangle empty string", 25 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2modulezd2manglezd2envzd2zz__biglooz00, BgL_bgl_za762biglooza7d2modu2234z00, BGl_z62bigloozd2modulezd2manglez62zz__biglooz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2170z00zz__biglooz00, BgL_bgl_string2170za700za7za7_2235za7, "bigloo-mangle", 13 );
DEFINE_STRING( BGl_string2171z00zz__biglooz00, BgL_bgl_string2171za700za7za7_2236za7, "BgL_", 4 );
DEFINE_STRING( BGl_string2172z00zz__biglooz00, BgL_bgl_string2172za700za7za7_2237za7, "&bigloo-mangle", 14 );
DEFINE_STRING( BGl_string2173z00zz__biglooz00, BgL_bgl_string2173za700za7za7_2238za7, "bigloo-module-mangle", 20 );
DEFINE_STRING( BGl_string2174z00zz__biglooz00, BgL_bgl_string2174za700za7za7_2239za7, "BGl_", 4 );
DEFINE_STRING( BGl_string2175z00zz__biglooz00, BgL_bgl_string2175za700za7za7_2240za7, "&bigloo-module-mangle", 21 );
DEFINE_STRING( BGl_string2176z00zz__biglooz00, BgL_bgl_string2176za700za7za7_2241za7, "&bigloo-mangled?", 16 );
DEFINE_STRING( BGl_string2177z00zz__biglooz00, BgL_bgl_string2177za700za7za7_2242za7, "&bigloo-need-mangling?", 22 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_nullzd2orzd2unspecifiedzf3zd2envz21zz__biglooz00, BgL_bgl_za762nullza7d2orza7d2u2243za7, BGl_z62nullzd2orzd2unspecifiedzf3z91zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2178z00zz__biglooz00, BgL_bgl_string2178za700za7za7_2244za7, "get-8bits-integer~0", 19 );
DEFINE_STRING( BGl_string2179z00zz__biglooz00, BgL_bgl_string2179za700za7za7_2245za7, "bint", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bmemzd2resetz12zd2envz12zz__biglooz00, BgL_bgl_za762bmemza7d2resetza72246za7, BGl_z62bmemzd2resetz12za2zz__biglooz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2180z00zz__biglooz00, BgL_bgl_string2180za700za7za7_2247za7, "loop", 4 );
DEFINE_STRING( BGl_string2181z00zz__biglooz00, BgL_bgl_string2181za700za7za7_2248za7, "bigloo-demangle", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2needzd2manglingzf3zd2envz21zz__biglooz00, BgL_bgl_za762biglooza7d2need2249z00, BGl_z62bigloozd2needzd2manglingzf3z91zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2182z00zz__biglooz00, BgL_bgl_string2182za700za7za7_2250za7, "Illegal mangling on", 19 );
DEFINE_STRING( BGl_string2183z00zz__biglooz00, BgL_bgl_string2183za700za7za7_2251za7, "&bigloo-demangle", 16 );
DEFINE_STRING( BGl_string2184z00zz__biglooz00, BgL_bgl_string2184za700za7za7_2252za7, "&bigloo-class-mangled?", 22 );
DEFINE_STRING( BGl_string2185z00zz__biglooz00, BgL_bgl_string2185za700za7za7_2253za7, "bigloo-class-demangle", 21 );
DEFINE_STRING( BGl_string2186z00zz__biglooz00, BgL_bgl_string2186za700za7za7_2254za7, "_bglt", 5 );
DEFINE_STRING( BGl_string2187z00zz__biglooz00, BgL_bgl_string2187za700za7za7_2255za7, "&bigloo-class-demangle", 22 );
DEFINE_STRING( BGl_string2188z00zz__biglooz00, BgL_bgl_string2188za700za7za7_2256za7, "bigloo-exit-register!", 21 );
DEFINE_STRING( BGl_string2189z00zz__biglooz00, BgL_bgl_string2189za700za7za7_2257za7, "Wrong procedure arity", 21 );
DEFINE_STRING( BGl_string2190z00zz__biglooz00, BgL_bgl_string2190za700za7za7_2258za7, "&register-exit-function!", 24 );
DEFINE_STRING( BGl_string2191z00zz__biglooz00, BgL_bgl_string2191za700za7za7_2259za7, "unregister-exit-function!", 25 );
DEFINE_STRING( BGl_string2192z00zz__biglooz00, BgL_bgl_string2192za700za7za7_2260za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string2193z00zz__biglooz00, BgL_bgl_string2193za700za7za7_2261za7, "&unregister-exit-function!", 26 );
DEFINE_STRING( BGl_string2194z00zz__biglooz00, BgL_bgl_string2194za700za7za7_2262za7, "loop:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string2197z00zz__biglooz00, BgL_bgl_string2197za700za7za7_2263za7, "funcall", 7 );
DEFINE_STRING( BGl_string2199z00zz__biglooz00, BgL_bgl_string2199za700za7za7_2264za7, "fun", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2classzd2mangledzf3zd2envz21zz__biglooz00, BgL_bgl_za762biglooza7d2clas2265z00, BGl_z62bigloozd2classzd2mangledzf3z91zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cellzf3zd2envz21zz__biglooz00, BgL_bgl_za762cellza7f3za791za7za7_2266za7, BGl_z62cellzf3z91zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2manglezd2envz00zz__biglooz00, BgL_bgl_za762biglooza7d2mang2267z00, BGl_z62bigloozd2manglezb0zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2demanglezd2envz00zz__biglooz00, BgL_bgl_za762biglooza7d2dema2268z00, BGl_z62bigloozd2demanglezb0zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_registerzd2exitzd2functionz12zd2envzc0zz__biglooz00, BgL_bgl_za762registerza7d2ex2269z00, BGl_z62registerzd2exitzd2functionz12z70zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_checkzd2versionz12zd2envz12zz__biglooz00, BgL_bgl_za762checkza7d2versi2270z00, BGl_z62checkzd2versionz12za2zz__biglooz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2exitzd2applyzd2envzd2zz__biglooz00, BgL_bgl_za762biglooza7d2exit2271z00, BGl_z62bigloozd2exitzd2applyz62zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2classzd2demanglezd2envzd2zz__biglooz00, BgL_bgl_za762biglooza7d2clas2272z00, BGl_z62bigloozd2classzd2demanglez62zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_procedurezd2attrzd2setz12zd2envzc0zz__biglooz00, BgL_bgl_za762procedureza7d2a2273z00, BGl_z62procedurezd2attrzd2setz12z70zz__biglooz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_unspecifiedzd2envzd2zz__biglooz00, BgL_bgl_za762unspecifiedza762274z00, BGl_z62unspecifiedz62zz__biglooz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_procedurezd2lengthzd2envz00zz__biglooz00, BgL_bgl_za762procedureza7d2l2275z00, BGl_z62procedurezd2lengthzb0zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_opaquezf3zd2envz21zz__biglooz00, BgL_bgl_za762opaqueza7f3za791za72276z00, BGl_z62opaquezf3z91zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2cellzd2envz00zz__biglooz00, BgL_bgl_za762makeza7d2cellza7b2277za7, BGl_z62makezd2cellzb0zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_procedurezd2arityzd2envz00zz__biglooz00, BgL_bgl_za762procedureza7d2a2278z00, BGl_z62procedurezd2arityzb0zz__biglooz00, 0L, BUNSPEC, 1 );
extern obj_t BGl_stringzd2envzd2zz__r4_strings_6_7z00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cnstzf3zd2envz21zz__biglooz00, BgL_bgl_za762cnstza7f3za791za7za7_2279za7, BGl_z62cnstzf3z91zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2gczd2verbosezd2setz12zd2envz12zz__biglooz00, BgL_bgl_za762biglooza7d2gcza7d2280za7, BGl_z62bigloozd2gczd2verbosezd2setz12za2zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cellzd2refzd2envz00zz__biglooz00, BgL_bgl_za762cellza7d2refza7b02281za7, BGl_z62cellzd2refzb0zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_timezd2envzd2zz__biglooz00, BgL_bgl_za762timeza762za7za7__bi2282z00, BGl_z62timez62zz__biglooz00, 0L, BUNSPEC, 1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__biglooz00) );
ADD_ROOT( (void *)(&BGl_za2levelza2z00zz__biglooz00) );
ADD_ROOT( (void *)(&BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00) );
ADD_ROOT( (void *)(&BGl_list2195z00zz__biglooz00) );
ADD_ROOT( (void *)(&BGl_symbol2200z00zz__biglooz00) );
ADD_ROOT( (void *)(&BGl_symbol2202z00zz__biglooz00) );
ADD_ROOT( (void *)(&BGl_za2exitzd2mutexza2zd2zz__biglooz00) );
ADD_ROOT( (void *)(&BGl_symbol2152z00zz__biglooz00) );
ADD_ROOT( (void *)(&BGl_za2releaseza2z00zz__biglooz00) );
ADD_ROOT( (void *)(&BGl_symbol2196z00zz__biglooz00) );
ADD_ROOT( (void *)(&BGl_symbol2198z00zz__biglooz00) );
ADD_ROOT( (void *)(&BGl_za2modulesza2z00zz__biglooz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long BgL_checksumz00_2666, char * BgL_fromz00_2667)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__biglooz00))
{ 
BGl_requirezd2initializa7ationz75zz__biglooz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__biglooz00(); 
BGl_cnstzd2initzd2zz__biglooz00(); 
BGl_importedzd2moduleszd2initz00zz__biglooz00(); 
return 
BGl_toplevelzd2initzd2zz__biglooz00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__biglooz00()
{
{ /* Llib/bigloo.scm 14 */
BGl_symbol2152z00zz__biglooz00 = 
bstring_to_symbol(BGl_string2153z00zz__biglooz00); 
BGl_symbol2196z00zz__biglooz00 = 
bstring_to_symbol(BGl_string2197z00zz__biglooz00); 
BGl_symbol2198z00zz__biglooz00 = 
bstring_to_symbol(BGl_string2199z00zz__biglooz00); 
BGl_symbol2200z00zz__biglooz00 = 
bstring_to_symbol(BGl_string2201z00zz__biglooz00); 
BGl_list2195z00zz__biglooz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2196z00zz__biglooz00, 
MAKE_YOUNG_PAIR(BGl_symbol2198z00zz__biglooz00, 
MAKE_YOUNG_PAIR(BGl_symbol2198z00zz__biglooz00, 
MAKE_YOUNG_PAIR(BGl_symbol2200z00zz__biglooz00, BNIL)))); 
return ( 
BGl_symbol2202z00zz__biglooz00 = 
bstring_to_symbol(BGl_string2203z00zz__biglooz00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__biglooz00()
{
{ /* Llib/bigloo.scm 14 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__biglooz00()
{
{ /* Llib/bigloo.scm 14 */
BGl_za2releaseza2z00zz__biglooz00 = BFALSE; 
BGl_za2levelza2z00zz__biglooz00 = BFALSE; 
BGl_za2modulesza2z00zz__biglooz00 = BNIL; 
{ /* Llib/bigloo.scm 619 */
obj_t BgL_res1740z00_1724;
BgL_res1740z00_1724 = 
bgl_make_mutex(BGl_symbol2152z00zz__biglooz00); 
BGl_za2exitzd2mutexza2zd2zz__biglooz00 = BgL_res1740z00_1724; } 
return ( 
BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00 = BNIL, BUNSPEC) ;} 

}



/* check-version! */
BGL_EXPORTED_DEF obj_t BGl_checkzd2versionz12zc0zz__biglooz00(obj_t BgL_modulez00_3, char * BgL_releasez00_4, obj_t BgL_levelz00_5)
{
{ /* Llib/bigloo.scm 329 */
if(
STRINGP(BGl_za2releaseza2z00zz__biglooz00))
{ /* Llib/bigloo.scm 335 */
bool_t BgL_test2285z00_2688;
{ /* Llib/bigloo.scm 335 */
bool_t BgL_test2286z00_2689;
{ /* Llib/bigloo.scm 335 */
long BgL_minz00_1089;
{ /* Llib/bigloo.scm 335 */
long BgL_arg1225z00_1092;
{ /* Llib/bigloo.scm 335 */
long BgL_az00_1093;long BgL_bz00_1094;
BgL_az00_1093 = 
STRING_LENGTH(
string_to_bstring(BgL_releasez00_4)); 
BgL_bz00_1094 = 
STRING_LENGTH(BGl_za2releaseza2z00zz__biglooz00); 
if(
(BgL_az00_1093<BgL_bz00_1094))
{ /* Llib/bigloo.scm 336 */
BgL_arg1225z00_1092 = BgL_az00_1093; }  else 
{ /* Llib/bigloo.scm 336 */
BgL_arg1225z00_1092 = BgL_bz00_1094; } } 
BgL_minz00_1089 = 
(BgL_arg1225z00_1092-((long)1)); } 
{ /* Llib/bigloo.scm 338 */
obj_t BgL_arg1221z00_1090;obj_t BgL_arg1223z00_1091;
BgL_arg1221z00_1090 = 
BGl_substringz00zz__r4_strings_6_7z00(
string_to_bstring(BgL_releasez00_4), ((long)0), BgL_minz00_1089); 
BgL_arg1223z00_1091 = 
BGl_substringz00zz__r4_strings_6_7z00(BGl_za2releaseza2z00zz__biglooz00, ((long)0), BgL_minz00_1089); 
{ /* Llib/bigloo.scm 338 */
bool_t BgL_res1750z00_1751;
{ /* Llib/bigloo.scm 338 */
long BgL_l1z00_1738;
BgL_l1z00_1738 = 
STRING_LENGTH(BgL_arg1221z00_1090); 
if(
(BgL_l1z00_1738==
STRING_LENGTH(BgL_arg1223z00_1091)))
{ /* Llib/bigloo.scm 338 */
int BgL_arg1445z00_1741;
{ /* Llib/bigloo.scm 338 */
char * BgL_auxz00_2705;char * BgL_tmpz00_2703;
BgL_auxz00_2705 = 
BSTRING_TO_STRING(BgL_arg1223z00_1091); 
BgL_tmpz00_2703 = 
BSTRING_TO_STRING(BgL_arg1221z00_1090); 
BgL_arg1445z00_1741 = 
memcmp(BgL_tmpz00_2703, BgL_auxz00_2705, BgL_l1z00_1738); } 
BgL_res1750z00_1751 = 
(
(long)(BgL_arg1445z00_1741)==((long)0)); }  else 
{ /* Llib/bigloo.scm 338 */
BgL_res1750z00_1751 = ((bool_t)0); } } 
BgL_test2286z00_2689 = BgL_res1750z00_1751; } } } 
if(BgL_test2286z00_2689)
{ /* Llib/bigloo.scm 335 */
if(
CHARP(BgL_levelz00_5))
{ /* Llib/bigloo.scm 340 */
if(
CHARP(BGl_za2levelza2z00zz__biglooz00))
{ /* Llib/bigloo.scm 340 */
if(
(
CCHAR(BGl_za2levelza2z00zz__biglooz00)==
CCHAR(BgL_levelz00_5)))
{ /* Llib/bigloo.scm 340 */
BgL_test2285z00_2688 = ((bool_t)0)
; }  else 
{ /* Llib/bigloo.scm 340 */
BgL_test2285z00_2688 = ((bool_t)1)
; } }  else 
{ /* Llib/bigloo.scm 340 */
BgL_test2285z00_2688 = ((bool_t)0)
; } }  else 
{ /* Llib/bigloo.scm 340 */
BgL_test2285z00_2688 = ((bool_t)0)
; } }  else 
{ /* Llib/bigloo.scm 335 */
BgL_test2285z00_2688 = ((bool_t)1)
; } } 
if(BgL_test2285z00_2688)
{ /* Llib/bigloo.scm 348 */
obj_t BgL_arg1197z00_1074;obj_t BgL_arg1201z00_1075;obj_t BgL_arg1208z00_1076;
{ /* Llib/bigloo.scm 348 */
obj_t BgL_arg1211z00_1077;
{ /* Llib/bigloo.scm 348 */
obj_t BgL_releasez00_1763;obj_t BgL_levelz00_1764;
BgL_releasez00_1763 = BGl_za2releaseza2z00zz__biglooz00; 
BgL_levelz00_1764 = BGl_za2levelza2z00zz__biglooz00; 
if(
CHARP(BgL_levelz00_1764))
{ /* Llib/bigloo.scm 343 */
obj_t BgL_sz00_1766;
BgL_sz00_1766 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BGl_string2154z00zz__biglooz00); 
{ /* Llib/bigloo.scm 344 */
unsigned char BgL_charz00_1769;
BgL_charz00_1769 = 
CCHAR(BgL_levelz00_1764); 
{ /* Llib/bigloo.scm 344 */
long BgL_l1952z00_2460;
BgL_l1952z00_2460 = 
STRING_LENGTH(BgL_sz00_1766); 
if(
BOUND_CHECK(((long)8), BgL_l1952z00_2460))
{ /* Llib/bigloo.scm 344 */
STRING_SET(BgL_sz00_1766, ((long)8), BgL_charz00_1769); }  else 
{ 
obj_t BgL_auxz00_2726;
BgL_auxz00_2726 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)12425)), BGl_string2156z00zz__biglooz00, BgL_sz00_1766, 
(int)(BgL_l1952z00_2460), 
(int)(((long)8))); 
FAILURE(BgL_auxz00_2726,BFALSE,BFALSE);} } } 
BgL_arg1211z00_1077 = 
string_append(BgL_releasez00_1763, BgL_sz00_1766); }  else 
{ /* Llib/bigloo.scm 342 */
BgL_arg1211z00_1077 = BgL_releasez00_1763; } } 
BgL_arg1197z00_1074 = 
string_append(BGl_string2157z00zz__biglooz00, BgL_arg1211z00_1077); } 
{ /* Llib/bigloo.scm 350 */
obj_t BgL_arg1216z00_1078;
if(
CHARP(BgL_levelz00_5))
{ /* Llib/bigloo.scm 343 */
obj_t BgL_sz00_1771;
BgL_sz00_1771 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BGl_string2154z00zz__biglooz00); 
{ /* Llib/bigloo.scm 344 */
unsigned char BgL_charz00_1774;
BgL_charz00_1774 = 
CCHAR(BgL_levelz00_5); 
{ /* Llib/bigloo.scm 344 */
long BgL_l1956z00_2464;
BgL_l1956z00_2464 = 
STRING_LENGTH(BgL_sz00_1771); 
if(
BOUND_CHECK(((long)8), BgL_l1956z00_2464))
{ /* Llib/bigloo.scm 344 */
STRING_SET(BgL_sz00_1771, ((long)8), BgL_charz00_1774); }  else 
{ 
obj_t BgL_auxz00_2742;
BgL_auxz00_2742 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)12425)), BGl_string2156z00zz__biglooz00, BgL_sz00_1771, 
(int)(BgL_l1956z00_2464), 
(int)(((long)8))); 
FAILURE(BgL_auxz00_2742,BFALSE,BFALSE);} } } 
BgL_arg1216z00_1078 = 
string_append(
string_to_bstring(BgL_releasez00_4), BgL_sz00_1771); }  else 
{ /* Llib/bigloo.scm 342 */
BgL_arg1216z00_1078 = 
string_to_bstring(BgL_releasez00_4); } 
BgL_arg1201z00_1075 = 
string_append(BGl_string2158z00zz__biglooz00, BgL_arg1216z00_1078); } 
BgL_arg1208z00_1076 = 
MAKE_YOUNG_PAIR(BgL_modulez00_3, BGl_za2modulesza2z00zz__biglooz00); 
return 
BGl_errorz00zz__errorz00(BgL_arg1197z00_1074, BgL_arg1201z00_1075, BgL_arg1208z00_1076);}  else 
{ /* Llib/bigloo.scm 335 */
return ( 
BGl_za2modulesza2z00zz__biglooz00 = 
MAKE_YOUNG_PAIR(BgL_modulez00_3, BGl_za2modulesza2z00zz__biglooz00), BUNSPEC) ;} }  else 
{ /* Llib/bigloo.scm 331 */
{ /* Llib/bigloo.scm 332 */
obj_t BgL_list1226z00_1096;
BgL_list1226z00_1096 = 
MAKE_YOUNG_PAIR(BgL_modulez00_3, BNIL); 
BGl_za2modulesza2z00zz__biglooz00 = BgL_list1226z00_1096; } 
BGl_za2releaseza2z00zz__biglooz00 = 
string_to_bstring(BgL_releasez00_4); 
return ( 
BGl_za2levelza2z00zz__biglooz00 = BgL_levelz00_5, BUNSPEC) ;} } 

}



/* &check-version! */
obj_t BGl_z62checkzd2versionz12za2zz__biglooz00(obj_t BgL_envz00_2396, obj_t BgL_modulez00_2397, obj_t BgL_releasez00_2398, obj_t BgL_levelz00_2399)
{
{ /* Llib/bigloo.scm 329 */
{ /* Llib/bigloo.scm 331 */
char * BgL_auxz00_2757;
{ /* Llib/bigloo.scm 331 */
obj_t BgL_tmpz00_2758;
if(
STRINGP(BgL_releasez00_2398))
{ /* Llib/bigloo.scm 331 */
BgL_tmpz00_2758 = BgL_releasez00_2398
; }  else 
{ 
obj_t BgL_auxz00_2761;
BgL_auxz00_2761 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)11907)), BGl_string2159z00zz__biglooz00, BGl_string2160z00zz__biglooz00, BgL_releasez00_2398); 
FAILURE(BgL_auxz00_2761,BFALSE,BFALSE);} 
BgL_auxz00_2757 = 
BSTRING_TO_STRING(BgL_tmpz00_2758); } 
return 
BGl_checkzd2versionz12zc0zz__biglooz00(BgL_modulez00_2397, BgL_auxz00_2757, BgL_levelz00_2399);} } 

}



/* procedure-arity */
BGL_EXPORTED_DEF int BGl_procedurezd2arityzd2zz__biglooz00(obj_t BgL_procz00_6)
{
{ /* Llib/bigloo.scm 365 */
return 
PROCEDURE_ARITY(BgL_procz00_6);} 

}



/* &procedure-arity */
obj_t BGl_z62procedurezd2arityzb0zz__biglooz00(obj_t BgL_envz00_2400, obj_t BgL_procz00_2401)
{
{ /* Llib/bigloo.scm 365 */
{ /* Llib/bigloo.scm 366 */
int BgL_tmpz00_2768;
{ /* Llib/bigloo.scm 366 */
obj_t BgL_auxz00_2769;
if(
PROCEDUREP(BgL_procz00_2401))
{ /* Llib/bigloo.scm 366 */
BgL_auxz00_2769 = BgL_procz00_2401
; }  else 
{ 
obj_t BgL_auxz00_2772;
BgL_auxz00_2772 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)13324)), BGl_string2161z00zz__biglooz00, BGl_string2162z00zz__biglooz00, BgL_procz00_2401); 
FAILURE(BgL_auxz00_2772,BFALSE,BFALSE);} 
BgL_tmpz00_2768 = 
BGl_procedurezd2arityzd2zz__biglooz00(BgL_auxz00_2769); } 
return 
BINT(BgL_tmpz00_2768);} } 

}



/* procedure-length */
BGL_EXPORTED_DEF int BGl_procedurezd2lengthzd2zz__biglooz00(obj_t BgL_procz00_7)
{
{ /* Llib/bigloo.scm 371 */
return 
PROCEDURE_LENGTH(BgL_procz00_7);} 

}



/* &procedure-length */
obj_t BGl_z62procedurezd2lengthzb0zz__biglooz00(obj_t BgL_envz00_2402, obj_t BgL_procz00_2403)
{
{ /* Llib/bigloo.scm 371 */
{ /* Llib/bigloo.scm 372 */
int BgL_tmpz00_2779;
{ /* Llib/bigloo.scm 372 */
obj_t BgL_auxz00_2780;
if(
PROCEDUREP(BgL_procz00_2403))
{ /* Llib/bigloo.scm 372 */
BgL_auxz00_2780 = BgL_procz00_2403
; }  else 
{ 
obj_t BgL_auxz00_2783;
BgL_auxz00_2783 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)13614)), BGl_string2163z00zz__biglooz00, BGl_string2162z00zz__biglooz00, BgL_procz00_2403); 
FAILURE(BgL_auxz00_2783,BFALSE,BFALSE);} 
BgL_tmpz00_2779 = 
BGl_procedurezd2lengthzd2zz__biglooz00(BgL_auxz00_2780); } 
return 
BINT(BgL_tmpz00_2779);} } 

}



/* procedure-attr */
BGL_EXPORTED_DEF obj_t BGl_procedurezd2attrzd2zz__biglooz00(obj_t BgL_procz00_8)
{
{ /* Llib/bigloo.scm 377 */
return 
PROCEDURE_ATTR(BgL_procz00_8);} 

}



/* &procedure-attr */
obj_t BGl_z62procedurezd2attrzb0zz__biglooz00(obj_t BgL_envz00_2404, obj_t BgL_procz00_2405)
{
{ /* Llib/bigloo.scm 377 */
{ /* Llib/bigloo.scm 378 */
obj_t BgL_auxz00_2790;
if(
PROCEDUREP(BgL_procz00_2405))
{ /* Llib/bigloo.scm 378 */
BgL_auxz00_2790 = BgL_procz00_2405
; }  else 
{ 
obj_t BgL_auxz00_2793;
BgL_auxz00_2793 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)13903)), BGl_string2164z00zz__biglooz00, BGl_string2162z00zz__biglooz00, BgL_procz00_2405); 
FAILURE(BgL_auxz00_2793,BFALSE,BFALSE);} 
return 
BGl_procedurezd2attrzd2zz__biglooz00(BgL_auxz00_2790);} } 

}



/* procedure-attr-set! */
BGL_EXPORTED_DEF obj_t BGl_procedurezd2attrzd2setz12z12zz__biglooz00(obj_t BgL_procz00_9, obj_t BgL_objz00_10)
{
{ /* Llib/bigloo.scm 383 */
PROCEDURE_ATTR_SET(BgL_procz00_9, BgL_objz00_10); 
return BgL_objz00_10;} 

}



/* &procedure-attr-set! */
obj_t BGl_z62procedurezd2attrzd2setz12z70zz__biglooz00(obj_t BgL_envz00_2406, obj_t BgL_procz00_2407, obj_t BgL_objz00_2408)
{
{ /* Llib/bigloo.scm 383 */
{ /* Llib/bigloo.scm 384 */
obj_t BgL_auxz00_2799;
if(
PROCEDUREP(BgL_procz00_2407))
{ /* Llib/bigloo.scm 384 */
BgL_auxz00_2799 = BgL_procz00_2407
; }  else 
{ 
obj_t BgL_auxz00_2802;
BgL_auxz00_2802 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)14229)), BGl_string2165z00zz__biglooz00, BGl_string2162z00zz__biglooz00, BgL_procz00_2407); 
FAILURE(BgL_auxz00_2802,BFALSE,BFALSE);} 
return 
BGl_procedurezd2attrzd2setz12z12zz__biglooz00(BgL_auxz00_2799, BgL_objz00_2408);} } 

}



/* unspecified */
BGL_EXPORTED_DEF obj_t BGl_unspecifiedz00zz__biglooz00()
{
{ /* Llib/bigloo.scm 390 */
return BUNSPEC;} 

}



/* &unspecified */
obj_t BGl_z62unspecifiedz62zz__biglooz00(obj_t BgL_envz00_2409)
{
{ /* Llib/bigloo.scm 390 */
return 
BGl_unspecifiedz00zz__biglooz00();} 

}



/* null-or-unspecified? */
BGL_EXPORTED_DEF bool_t BGl_nullzd2orzd2unspecifiedzf3zf3zz__biglooz00(obj_t BgL_objz00_11)
{
{ /* Llib/bigloo.scm 396 */
return 
BGL_NULL_OR_UNSPECIFIEDP(BgL_objz00_11);} 

}



/* &null-or-unspecified? */
obj_t BGl_z62nullzd2orzd2unspecifiedzf3z91zz__biglooz00(obj_t BgL_envz00_2410, obj_t BgL_objz00_2411)
{
{ /* Llib/bigloo.scm 396 */
return 
BBOOL(
BGl_nullzd2orzd2unspecifiedzf3zf3zz__biglooz00(BgL_objz00_2411));} 

}



/* cnst? */
BGL_EXPORTED_DEF bool_t BGl_cnstzf3zf3zz__biglooz00(obj_t BgL_objz00_12)
{
{ /* Llib/bigloo.scm 408 */
return 
CNSTP(BgL_objz00_12);} 

}



/* &cnst? */
obj_t BGl_z62cnstzf3z91zz__biglooz00(obj_t BgL_envz00_2412, obj_t BgL_objz00_2413)
{
{ /* Llib/bigloo.scm 408 */
return 
BBOOL(
BGl_cnstzf3zf3zz__biglooz00(BgL_objz00_2413));} 

}



/* opaque? */
BGL_EXPORTED_DEF bool_t BGl_opaquezf3zf3zz__biglooz00(obj_t BgL_objz00_13)
{
{ /* Llib/bigloo.scm 414 */
return 
OPAQUEP(BgL_objz00_13);} 

}



/* &opaque? */
obj_t BGl_z62opaquezf3z91zz__biglooz00(obj_t BgL_envz00_2414, obj_t BgL_objz00_2415)
{
{ /* Llib/bigloo.scm 414 */
return 
BBOOL(
BGl_opaquezf3zf3zz__biglooz00(BgL_objz00_2415));} 

}



/* opaque-nil */
BGL_EXPORTED_DEF obj_t BGl_opaquezd2nilzd2zz__biglooz00()
{
{ /* Llib/bigloo.scm 420 */
return 
BGL_OPAQUE_NIL();} 

}



/* &opaque-nil */
obj_t BGl_z62opaquezd2nilzb0zz__biglooz00(obj_t BgL_envz00_2416)
{
{ /* Llib/bigloo.scm 420 */
return 
BGl_opaquezd2nilzd2zz__biglooz00();} 

}



/* mangle-at! */
long BGl_manglezd2atz12zc0zz__biglooz00(obj_t BgL_newz00_15, obj_t BgL_oldz00_16, long BgL_lenz00_17, long BgL_offsetz00_18)
{
{ /* Llib/bigloo.scm 433 */
{ 
long BgL_rz00_1099;long BgL_wz00_1100;long BgL_newzd2lenzd2_1101;long BgL_checksumz00_1102;
BgL_rz00_1099 = ((long)0); 
BgL_wz00_1100 = BgL_offsetz00_18; 
BgL_newzd2lenzd2_1101 = BgL_offsetz00_18; 
BgL_checksumz00_1102 = ((long)0); 
BgL_zc3z04anonymousza31227ze3z87_1103:
if(
(BgL_rz00_1099==BgL_lenz00_17))
{ /* Llib/bigloo.scm 438 */
{ /* Llib/bigloo.scm 440 */
long BgL_l1960z00_2468;
BgL_l1960z00_2468 = 
STRING_LENGTH(BgL_newz00_15); 
if(
BOUND_CHECK(BgL_wz00_1100, BgL_l1960z00_2468))
{ /* Llib/bigloo.scm 440 */
STRING_SET(BgL_newz00_15, BgL_wz00_1100, ((unsigned char)'z')); }  else 
{ 
obj_t BgL_auxz00_2825;
BgL_auxz00_2825 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)16531)), BGl_string2156z00zz__biglooz00, BgL_newz00_15, 
(int)(BgL_l1960z00_2468), 
(int)(BgL_wz00_1100)); 
FAILURE(BgL_auxz00_2825,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 442 */
long BgL_arg1229z00_1105;unsigned char BgL_arg1232z00_1106;
BgL_arg1229z00_1105 = 
(BgL_wz00_1100+((long)1)); 
{ /* Llib/bigloo.scm 427 */
long BgL_i1963z00_2471;
BgL_i1963z00_2471 = 
(BgL_checksumz00_1102 & ((long)15)); 
if(
BOUND_CHECK(BgL_i1963z00_2471, ((long)16)))
{ /* Llib/bigloo.scm 428 */
BgL_arg1232z00_1106 = 
STRING_REF(BGl_string2166z00zz__biglooz00, BgL_i1963z00_2471); }  else 
{ 
obj_t BgL_auxz00_2836;
BgL_auxz00_2836 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)16123)), BGl_string2167z00zz__biglooz00, BGl_string2166z00zz__biglooz00, 
(int)(((long)16)), 
(int)(BgL_i1963z00_2471)); 
FAILURE(BgL_auxz00_2836,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 441 */
long BgL_l1968z00_2476;
BgL_l1968z00_2476 = 
STRING_LENGTH(BgL_newz00_15); 
if(
BOUND_CHECK(BgL_arg1229z00_1105, BgL_l1968z00_2476))
{ /* Llib/bigloo.scm 441 */
STRING_SET(BgL_newz00_15, BgL_arg1229z00_1105, BgL_arg1232z00_1106); }  else 
{ 
obj_t BgL_auxz00_2846;
BgL_auxz00_2846 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)16561)), BGl_string2156z00zz__biglooz00, BgL_newz00_15, 
(int)(BgL_l1968z00_2476), 
(int)(BgL_arg1229z00_1105)); 
FAILURE(BgL_auxz00_2846,BFALSE,BFALSE);} } } 
{ /* Llib/bigloo.scm 445 */
long BgL_arg1242z00_1108;unsigned char BgL_arg1243z00_1109;
BgL_arg1242z00_1108 = 
(BgL_wz00_1100+((long)2)); 
{ /* Llib/bigloo.scm 427 */
long BgL_i1971z00_2479;
BgL_i1971z00_2479 = 
(
(BgL_checksumz00_1102 >> 
(int)(((long)4))) & ((long)15)); 
if(
BOUND_CHECK(BgL_i1971z00_2479, ((long)16)))
{ /* Llib/bigloo.scm 428 */
BgL_arg1243z00_1109 = 
STRING_REF(BGl_string2166z00zz__biglooz00, BgL_i1971z00_2479); }  else 
{ 
obj_t BgL_auxz00_2859;
BgL_auxz00_2859 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)16123)), BGl_string2167z00zz__biglooz00, BGl_string2166z00zz__biglooz00, 
(int)(((long)16)), 
(int)(BgL_i1971z00_2479)); 
FAILURE(BgL_auxz00_2859,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 444 */
long BgL_l1976z00_2484;
BgL_l1976z00_2484 = 
STRING_LENGTH(BgL_newz00_15); 
if(
BOUND_CHECK(BgL_arg1242z00_1108, BgL_l1976z00_2484))
{ /* Llib/bigloo.scm 444 */
STRING_SET(BgL_newz00_15, BgL_arg1242z00_1108, BgL_arg1243z00_1109); }  else 
{ 
obj_t BgL_auxz00_2869;
BgL_auxz00_2869 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)16641)), BGl_string2156z00zz__biglooz00, BgL_newz00_15, 
(int)(BgL_l1976z00_2484), 
(int)(BgL_arg1242z00_1108)); 
FAILURE(BgL_auxz00_2869,BFALSE,BFALSE);} } } 
return 
(BgL_wz00_1100+((long)3));}  else 
{ /* Llib/bigloo.scm 448 */
unsigned char BgL_cz00_1112;
{ /* Llib/bigloo.scm 448 */
long BgL_l1980z00_2488;
BgL_l1980z00_2488 = 
STRING_LENGTH(BgL_oldz00_16); 
if(
BOUND_CHECK(BgL_rz00_1099, BgL_l1980z00_2488))
{ /* Llib/bigloo.scm 448 */
BgL_cz00_1112 = 
STRING_REF(BgL_oldz00_16, BgL_rz00_1099); }  else 
{ 
obj_t BgL_auxz00_2880;
BgL_auxz00_2880 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)16756)), BGl_string2167z00zz__biglooz00, BgL_oldz00_16, 
(int)(BgL_l1980z00_2488), 
(int)(BgL_rz00_1099)); 
FAILURE(BgL_auxz00_2880,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 449 */
bool_t BgL_test2308z00_2886;
{ /* Llib/bigloo.scm 449 */
bool_t BgL_test2309z00_2887;
{ /* Llib/bigloo.scm 449 */
bool_t BgL_test2310z00_2888;
{ /* Llib/bigloo.scm 449 */
bool_t BgL_res1769z00_1816;
BgL_res1769z00_1816 = 
isalpha(BgL_cz00_1112); 
BgL_test2310z00_2888 = BgL_res1769z00_1816; } 
if(BgL_test2310z00_2888)
{ /* Llib/bigloo.scm 449 */
if(
(BgL_cz00_1112==((unsigned char)'z')))
{ /* Llib/bigloo.scm 449 */
BgL_test2309z00_2887 = ((bool_t)0)
; }  else 
{ /* Llib/bigloo.scm 449 */
BgL_test2309z00_2887 = ((bool_t)1)
; } }  else 
{ /* Llib/bigloo.scm 449 */
BgL_test2309z00_2887 = ((bool_t)0)
; } } 
if(BgL_test2309z00_2887)
{ /* Llib/bigloo.scm 449 */
BgL_test2308z00_2886 = ((bool_t)1)
; }  else 
{ /* Llib/bigloo.scm 450 */
bool_t BgL_test2312z00_2892;
{ /* Llib/bigloo.scm 450 */
bool_t BgL_res1771z00_1821;
BgL_res1771z00_1821 = 
isdigit(BgL_cz00_1112); 
BgL_test2312z00_2892 = BgL_res1771z00_1821; } 
if(BgL_test2312z00_2892)
{ /* Llib/bigloo.scm 450 */
BgL_test2308z00_2886 = ((bool_t)1)
; }  else 
{ /* Llib/bigloo.scm 450 */
BgL_test2308z00_2886 = 
(BgL_cz00_1112==((unsigned char)'_'))
; } } } 
if(BgL_test2308z00_2886)
{ /* Llib/bigloo.scm 449 */
{ /* Llib/bigloo.scm 453 */
long BgL_l1984z00_2492;
BgL_l1984z00_2492 = 
STRING_LENGTH(BgL_newz00_15); 
if(
BOUND_CHECK(BgL_wz00_1100, BgL_l1984z00_2492))
{ /* Llib/bigloo.scm 453 */
STRING_SET(BgL_newz00_15, BgL_wz00_1100, BgL_cz00_1112); }  else 
{ 
obj_t BgL_auxz00_2899;
BgL_auxz00_2899 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)16904)), BGl_string2156z00zz__biglooz00, BgL_newz00_15, 
(int)(BgL_l1984z00_2492), 
(int)(BgL_wz00_1100)); 
FAILURE(BgL_auxz00_2899,BFALSE,BFALSE);} } 
{ 
long BgL_newzd2lenzd2_2909;long BgL_wz00_2907;long BgL_rz00_2905;
BgL_rz00_2905 = 
(BgL_rz00_1099+((long)1)); 
BgL_wz00_2907 = 
(BgL_wz00_1100+((long)1)); 
BgL_newzd2lenzd2_2909 = 
(BgL_newzd2lenzd2_1101+((long)1)); 
BgL_newzd2lenzd2_1101 = BgL_newzd2lenzd2_2909; 
BgL_wz00_1100 = BgL_wz00_2907; 
BgL_rz00_1099 = BgL_rz00_2905; 
goto BgL_zc3z04anonymousza31227ze3z87_1103;} }  else 
{ /* Llib/bigloo.scm 458 */
long BgL_icz00_1123;
BgL_icz00_1123 = 
(BgL_cz00_1112); 
{ /* Llib/bigloo.scm 459 */
long BgL_l1988z00_2496;
BgL_l1988z00_2496 = 
STRING_LENGTH(BgL_newz00_15); 
if(
BOUND_CHECK(BgL_wz00_1100, BgL_l1988z00_2496))
{ /* Llib/bigloo.scm 459 */
STRING_SET(BgL_newz00_15, BgL_wz00_1100, ((unsigned char)'z')); }  else 
{ 
obj_t BgL_auxz00_2916;
BgL_auxz00_2916 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)17039)), BGl_string2156z00zz__biglooz00, BgL_newz00_15, 
(int)(BgL_l1988z00_2496), 
(int)(BgL_wz00_1100)); 
FAILURE(BgL_auxz00_2916,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 461 */
long BgL_arg1256z00_1124;unsigned char BgL_arg1258z00_1125;
BgL_arg1256z00_1124 = 
(BgL_wz00_1100+((long)1)); 
{ /* Llib/bigloo.scm 427 */
long BgL_i1991z00_2499;
BgL_i1991z00_2499 = 
(BgL_icz00_1123 & ((long)15)); 
if(
BOUND_CHECK(BgL_i1991z00_2499, ((long)16)))
{ /* Llib/bigloo.scm 428 */
BgL_arg1258z00_1125 = 
STRING_REF(BGl_string2166z00zz__biglooz00, BgL_i1991z00_2499); }  else 
{ 
obj_t BgL_auxz00_2927;
BgL_auxz00_2927 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)16123)), BGl_string2167z00zz__biglooz00, BGl_string2166z00zz__biglooz00, 
(int)(((long)16)), 
(int)(BgL_i1991z00_2499)); 
FAILURE(BgL_auxz00_2927,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 460 */
long BgL_l1996z00_2504;
BgL_l1996z00_2504 = 
STRING_LENGTH(BgL_newz00_15); 
if(
BOUND_CHECK(BgL_arg1256z00_1124, BgL_l1996z00_2504))
{ /* Llib/bigloo.scm 460 */
STRING_SET(BgL_newz00_15, BgL_arg1256z00_1124, BgL_arg1258z00_1125); }  else 
{ 
obj_t BgL_auxz00_2937;
BgL_auxz00_2937 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)17069)), BGl_string2156z00zz__biglooz00, BgL_newz00_15, 
(int)(BgL_l1996z00_2504), 
(int)(BgL_arg1256z00_1124)); 
FAILURE(BgL_auxz00_2937,BFALSE,BFALSE);} } } 
{ /* Llib/bigloo.scm 464 */
long BgL_arg1268z00_1127;unsigned char BgL_arg1270z00_1128;
BgL_arg1268z00_1127 = 
(BgL_wz00_1100+((long)2)); 
{ /* Llib/bigloo.scm 427 */
long BgL_i1999z00_2507;
BgL_i1999z00_2507 = 
(
(BgL_icz00_1123 >> 
(int)(((long)4))) & ((long)15)); 
if(
BOUND_CHECK(BgL_i1999z00_2507, ((long)16)))
{ /* Llib/bigloo.scm 428 */
BgL_arg1270z00_1128 = 
STRING_REF(BGl_string2166z00zz__biglooz00, BgL_i1999z00_2507); }  else 
{ 
obj_t BgL_auxz00_2950;
BgL_auxz00_2950 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)16123)), BGl_string2167z00zz__biglooz00, BGl_string2166z00zz__biglooz00, 
(int)(((long)16)), 
(int)(BgL_i1999z00_2507)); 
FAILURE(BgL_auxz00_2950,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 463 */
long BgL_l2004z00_2512;
BgL_l2004z00_2512 = 
STRING_LENGTH(BgL_newz00_15); 
if(
BOUND_CHECK(BgL_arg1268z00_1127, BgL_l2004z00_2512))
{ /* Llib/bigloo.scm 463 */
STRING_SET(BgL_newz00_15, BgL_arg1268z00_1127, BgL_arg1270z00_1128); }  else 
{ 
obj_t BgL_auxz00_2960;
BgL_auxz00_2960 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)17143)), BGl_string2156z00zz__biglooz00, BgL_newz00_15, 
(int)(BgL_l2004z00_2512), 
(int)(BgL_arg1268z00_1127)); 
FAILURE(BgL_auxz00_2960,BFALSE,BFALSE);} } } 
{ 
long BgL_checksumz00_2972;long BgL_newzd2lenzd2_2970;long BgL_wz00_2968;long BgL_rz00_2966;
BgL_rz00_2966 = 
(BgL_rz00_1099+((long)1)); 
BgL_wz00_2968 = 
(BgL_wz00_1100+((long)3)); 
BgL_newzd2lenzd2_2970 = 
(BgL_newzd2lenzd2_1101+((long)3)); 
BgL_checksumz00_2972 = 
(BgL_checksumz00_1102 ^ 
(BgL_cz00_1112)); 
BgL_checksumz00_1102 = BgL_checksumz00_2972; 
BgL_newzd2lenzd2_1101 = BgL_newzd2lenzd2_2970; 
BgL_wz00_1100 = BgL_wz00_2968; 
BgL_rz00_1099 = BgL_rz00_2966; 
goto BgL_zc3z04anonymousza31227ze3z87_1103;} } } } } } 

}



/* bigloo-mangle */
BGL_EXPORTED_DEF obj_t bigloo_mangle(obj_t BgL_stringz00_19)
{
{ /* Llib/bigloo.scm 474 */
{ /* Llib/bigloo.scm 475 */
long BgL_lenz00_1141;
BgL_lenz00_1141 = 
STRING_LENGTH(BgL_stringz00_19); 
{ /* Llib/bigloo.scm 475 */
obj_t BgL_newz00_1142;
{ /* Llib/bigloo.scm 476 */
long BgL_arg1282z00_1145;
BgL_arg1282z00_1145 = 
(
(BgL_lenz00_1141*((long)3))+((long)7)); 
{ /* Ieee/string.scm 168 */

BgL_newz00_1142 = 
make_string(BgL_arg1282z00_1145, ((unsigned char)' ')); } } 
{ /* Llib/bigloo.scm 476 */

if(
(BgL_lenz00_1141==((long)0)))
{ /* Llib/bigloo.scm 478 */
obj_t BgL_aux2100z00_2609;
BgL_aux2100z00_2609 = 
BGl_errorz00zz__errorz00(BGl_string2168z00zz__biglooz00, BGl_string2169z00zz__biglooz00, BgL_stringz00_19); 
if(
STRINGP(BgL_aux2100z00_2609))
{ /* Llib/bigloo.scm 478 */
return BgL_aux2100z00_2609;}  else 
{ 
obj_t BgL_auxz00_2984;
BgL_auxz00_2984 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)17692)), BGl_string2170z00zz__biglooz00, BGl_string2160z00zz__biglooz00, BgL_aux2100z00_2609); 
FAILURE(BgL_auxz00_2984,BFALSE,BFALSE);} }  else 
{ /* Llib/bigloo.scm 479 */
long BgL_stopz00_1144;
BgL_stopz00_1144 = 
BGl_manglezd2atz12zc0zz__biglooz00(BgL_newz00_1142, BgL_stringz00_19, BgL_lenz00_1141, ((long)4)); 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BGl_string2171z00zz__biglooz00, ((long)0), BgL_newz00_1142, ((long)0), ((long)4)); 
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_newz00_1142, ((long)0), BgL_stopz00_1144);} } } } } 

}



/* &bigloo-mangle */
obj_t BGl_z62bigloozd2manglezb0zz__biglooz00(obj_t BgL_envz00_2417, obj_t BgL_stringz00_2418)
{
{ /* Llib/bigloo.scm 474 */
{ /* Llib/bigloo.scm 475 */
obj_t BgL_auxz00_2991;
if(
STRINGP(BgL_stringz00_2418))
{ /* Llib/bigloo.scm 475 */
BgL_auxz00_2991 = BgL_stringz00_2418
; }  else 
{ 
obj_t BgL_auxz00_2994;
BgL_auxz00_2994 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)17587)), BGl_string2172z00zz__biglooz00, BGl_string2160z00zz__biglooz00, BgL_stringz00_2418); 
FAILURE(BgL_auxz00_2994,BFALSE,BFALSE);} 
return 
bigloo_mangle(BgL_auxz00_2991);} } 

}



/* bigloo-module-mangle */
BGL_EXPORTED_DEF obj_t bigloo_module_mangle(obj_t BgL_idz00_20, obj_t BgL_modulez00_21)
{
{ /* Llib/bigloo.scm 486 */
{ /* Llib/bigloo.scm 487 */
long BgL_lenz00_1149;
BgL_lenz00_1149 = 
(
STRING_LENGTH(BgL_idz00_20)+
STRING_LENGTH(BgL_modulez00_21)); 
{ /* Llib/bigloo.scm 487 */
obj_t BgL_newz00_1150;
{ /* Llib/bigloo.scm 488 */
long BgL_arg1290z00_1158;
BgL_arg1290z00_1158 = 
(
(BgL_lenz00_1149*((long)3))+((long)12)); 
{ /* Ieee/string.scm 168 */

BgL_newz00_1150 = 
make_string(BgL_arg1290z00_1158, ((unsigned char)' ')); } } 
{ /* Llib/bigloo.scm 488 */

if(
(BgL_lenz00_1149==((long)0)))
{ /* Llib/bigloo.scm 490 */
obj_t BgL_aux2104z00_2613;
BgL_aux2104z00_2613 = 
BGl_errorz00zz__errorz00(BGl_string2168z00zz__biglooz00, BGl_string2169z00zz__biglooz00, BGl_stringzd2envzd2zz__r4_strings_6_7z00); 
if(
STRINGP(BgL_aux2104z00_2613))
{ /* Llib/bigloo.scm 490 */
return BgL_aux2104z00_2613;}  else 
{ 
obj_t BgL_auxz00_3010;
BgL_auxz00_3010 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)18274)), BGl_string2173z00zz__biglooz00, BGl_string2160z00zz__biglooz00, BgL_aux2104z00_2613); 
FAILURE(BgL_auxz00_3010,BFALSE,BFALSE);} }  else 
{ /* Llib/bigloo.scm 491 */
long BgL_modzd2startzd2_1152;
BgL_modzd2startzd2_1152 = 
BGl_manglezd2atz12zc0zz__biglooz00(BgL_newz00_1150, BgL_idz00_20, 
STRING_LENGTH(BgL_idz00_20), ((long)4)); 
{ /* Llib/bigloo.scm 492 */
long BgL_l2008z00_2516;
BgL_l2008z00_2516 = 
STRING_LENGTH(BgL_newz00_1150); 
if(
BOUND_CHECK(BgL_modzd2startzd2_1152, BgL_l2008z00_2516))
{ /* Llib/bigloo.scm 492 */
STRING_SET(BgL_newz00_1150, BgL_modzd2startzd2_1152, ((unsigned char)'z')); }  else 
{ 
obj_t BgL_auxz00_3020;
BgL_auxz00_3020 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)18409)), BGl_string2156z00zz__biglooz00, BgL_newz00_1150, 
(int)(BgL_l2008z00_2516), 
(int)(BgL_modzd2startzd2_1152)); 
FAILURE(BgL_auxz00_3020,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 493 */
long BgL_arg1286z00_1153;
BgL_arg1286z00_1153 = 
(((long)1)+BgL_modzd2startzd2_1152); 
{ /* Llib/bigloo.scm 493 */
long BgL_l2012z00_2520;
BgL_l2012z00_2520 = 
STRING_LENGTH(BgL_newz00_1150); 
if(
BOUND_CHECK(BgL_arg1286z00_1153, BgL_l2012z00_2520))
{ /* Llib/bigloo.scm 493 */
STRING_SET(BgL_newz00_1150, BgL_arg1286z00_1153, ((unsigned char)'z')); }  else 
{ 
obj_t BgL_auxz00_3031;
BgL_auxz00_3031 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)18447)), BGl_string2156z00zz__biglooz00, BgL_newz00_1150, 
(int)(BgL_l2012z00_2520), 
(int)(BgL_arg1286z00_1153)); 
FAILURE(BgL_auxz00_3031,BFALSE,BFALSE);} } } 
{ /* Llib/bigloo.scm 494 */
long BgL_stopz00_1154;
BgL_stopz00_1154 = 
BGl_manglezd2atz12zc0zz__biglooz00(BgL_newz00_1150, BgL_modulez00_21, 
STRING_LENGTH(BgL_modulez00_21), 
(BgL_modzd2startzd2_1152+((long)2))); 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BGl_string2174z00zz__biglooz00, ((long)0), BgL_newz00_1150, ((long)0), ((long)4)); 
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_newz00_1150, ((long)0), BgL_stopz00_1154);} } } } } } 

}



/* &bigloo-module-mangle */
obj_t BGl_z62bigloozd2modulezd2manglez62zz__biglooz00(obj_t BgL_envz00_2419, obj_t BgL_idz00_2420, obj_t BgL_modulez00_2421)
{
{ /* Llib/bigloo.scm 486 */
{ /* Llib/bigloo.scm 487 */
obj_t BgL_auxz00_3049;obj_t BgL_auxz00_3042;
if(
STRINGP(BgL_modulez00_2421))
{ /* Llib/bigloo.scm 487 */
BgL_auxz00_3049 = BgL_modulez00_2421
; }  else 
{ 
obj_t BgL_auxz00_3052;
BgL_auxz00_3052 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)18143)), BGl_string2175z00zz__biglooz00, BGl_string2160z00zz__biglooz00, BgL_modulez00_2421); 
FAILURE(BgL_auxz00_3052,BFALSE,BFALSE);} 
if(
STRINGP(BgL_idz00_2420))
{ /* Llib/bigloo.scm 487 */
BgL_auxz00_3042 = BgL_idz00_2420
; }  else 
{ 
obj_t BgL_auxz00_3045;
BgL_auxz00_3045 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)18143)), BGl_string2175z00zz__biglooz00, BGl_string2160z00zz__biglooz00, BgL_idz00_2420); 
FAILURE(BgL_auxz00_3045,BFALSE,BFALSE);} 
return 
bigloo_module_mangle(BgL_auxz00_3042, BgL_auxz00_3049);} } 

}



/* bigloo-mangled? */
BGL_EXPORTED_DEF bool_t bigloo_mangledp(obj_t BgL_stringz00_22)
{
{ /* Llib/bigloo.scm 503 */
{ /* Llib/bigloo.scm 504 */
long BgL_lenz00_1164;
BgL_lenz00_1164 = 
STRING_LENGTH(BgL_stringz00_22); 
if(
(BgL_lenz00_1164>((long)7)))
{ /* Llib/bigloo.scm 506 */
bool_t BgL_test2329z00_3060;
{ /* Llib/bigloo.scm 506 */
bool_t BgL__ortest_1045z00_1181;
BgL__ortest_1045z00_1181 = 
bigloo_strncmp(BgL_stringz00_22, BGl_string2171z00zz__biglooz00, ((long)4)); 
if(BgL__ortest_1045z00_1181)
{ /* Llib/bigloo.scm 506 */
BgL_test2329z00_3060 = BgL__ortest_1045z00_1181
; }  else 
{ /* Llib/bigloo.scm 506 */
BgL_test2329z00_3060 = 
bigloo_strncmp(BgL_stringz00_22, BGl_string2174z00zz__biglooz00, ((long)4))
; } } 
if(BgL_test2329z00_3060)
{ /* Llib/bigloo.scm 508 */
bool_t BgL_test2331z00_3064;
{ /* Llib/bigloo.scm 508 */
unsigned char BgL_tmpz00_3065;
{ /* Llib/bigloo.scm 508 */
long BgL_i2015z00_2523;
BgL_i2015z00_2523 = 
(BgL_lenz00_1164-((long)3)); 
if(
BOUND_CHECK(BgL_i2015z00_2523, BgL_lenz00_1164))
{ /* Llib/bigloo.scm 508 */
BgL_tmpz00_3065 = 
STRING_REF(BgL_stringz00_22, BgL_i2015z00_2523)
; }  else 
{ 
obj_t BgL_auxz00_3070;
BgL_auxz00_3070 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)19061)), BGl_string2167z00zz__biglooz00, BgL_stringz00_22, 
(int)(BgL_lenz00_1164), 
(int)(BgL_i2015z00_2523)); 
FAILURE(BgL_auxz00_3070,BFALSE,BFALSE);} } 
BgL_test2331z00_3064 = 
(BgL_tmpz00_3065==((unsigned char)'z')); } 
if(BgL_test2331z00_3064)
{ /* Llib/bigloo.scm 509 */
bool_t BgL_test2333z00_3077;
{ /* Llib/bigloo.scm 509 */
bool_t BgL__ortest_1046z00_1174;
{ /* Llib/bigloo.scm 509 */
unsigned char BgL_arg1302z00_1177;
{ /* Llib/bigloo.scm 509 */
long BgL_i2019z00_2527;
BgL_i2019z00_2527 = 
(BgL_lenz00_1164-((long)2)); 
{ /* Llib/bigloo.scm 509 */
long BgL_l2020z00_2528;
BgL_l2020z00_2528 = 
STRING_LENGTH(BgL_stringz00_22); 
if(
BOUND_CHECK(BgL_i2019z00_2527, BgL_l2020z00_2528))
{ /* Llib/bigloo.scm 509 */
BgL_arg1302z00_1177 = 
STRING_REF(BgL_stringz00_22, BgL_i2019z00_2527); }  else 
{ 
obj_t BgL_auxz00_3083;
BgL_auxz00_3083 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)19124)), BGl_string2167z00zz__biglooz00, BgL_stringz00_22, 
(int)(BgL_l2020z00_2528), 
(int)(BgL_i2019z00_2527)); 
FAILURE(BgL_auxz00_3083,BFALSE,BFALSE);} } } 
{ /* Llib/bigloo.scm 509 */
bool_t BgL_res1814z00_1937;
BgL_res1814z00_1937 = 
isalpha(BgL_arg1302z00_1177); 
BgL__ortest_1046z00_1174 = BgL_res1814z00_1937; } } 
if(BgL__ortest_1046z00_1174)
{ /* Llib/bigloo.scm 509 */
BgL_test2333z00_3077 = BgL__ortest_1046z00_1174
; }  else 
{ /* Llib/bigloo.scm 510 */
unsigned char BgL_arg1300z00_1175;
{ /* Llib/bigloo.scm 510 */
long BgL_i2023z00_2531;
BgL_i2023z00_2531 = 
(BgL_lenz00_1164-((long)2)); 
{ /* Llib/bigloo.scm 510 */
long BgL_l2024z00_2532;
BgL_l2024z00_2532 = 
STRING_LENGTH(BgL_stringz00_22); 
if(
BOUND_CHECK(BgL_i2023z00_2531, BgL_l2024z00_2532))
{ /* Llib/bigloo.scm 510 */
BgL_arg1300z00_1175 = 
STRING_REF(BgL_stringz00_22, BgL_i2023z00_2531); }  else 
{ 
obj_t BgL_auxz00_3096;
BgL_auxz00_3096 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)19180)), BGl_string2167z00zz__biglooz00, BgL_stringz00_22, 
(int)(BgL_l2024z00_2532), 
(int)(BgL_i2023z00_2531)); 
FAILURE(BgL_auxz00_3096,BFALSE,BFALSE);} } } 
{ /* Llib/bigloo.scm 510 */
bool_t BgL_res1817z00_1944;
BgL_res1817z00_1944 = 
isdigit(BgL_arg1300z00_1175); 
BgL_test2333z00_3077 = BgL_res1817z00_1944; } } } 
if(BgL_test2333z00_3077)
{ /* Llib/bigloo.scm 511 */
bool_t BgL__ortest_1047z00_1169;
{ /* Llib/bigloo.scm 511 */
unsigned char BgL_arg1298z00_1172;
{ /* Llib/bigloo.scm 511 */
long BgL_i2027z00_2535;
BgL_i2027z00_2535 = 
(BgL_lenz00_1164-((long)1)); 
{ /* Llib/bigloo.scm 511 */
long BgL_l2028z00_2536;
BgL_l2028z00_2536 = 
STRING_LENGTH(BgL_stringz00_22); 
if(
BOUND_CHECK(BgL_i2027z00_2535, BgL_l2028z00_2536))
{ /* Llib/bigloo.scm 511 */
BgL_arg1298z00_1172 = 
STRING_REF(BgL_stringz00_22, BgL_i2027z00_2535); }  else 
{ 
obj_t BgL_auxz00_3108;
BgL_auxz00_3108 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)19240)), BGl_string2167z00zz__biglooz00, BgL_stringz00_22, 
(int)(BgL_l2028z00_2536), 
(int)(BgL_i2027z00_2535)); 
FAILURE(BgL_auxz00_3108,BFALSE,BFALSE);} } } 
{ /* Llib/bigloo.scm 511 */
bool_t BgL_res1820z00_1951;
BgL_res1820z00_1951 = 
isalpha(BgL_arg1298z00_1172); 
BgL__ortest_1047z00_1169 = BgL_res1820z00_1951; } } 
if(BgL__ortest_1047z00_1169)
{ /* Llib/bigloo.scm 511 */
return BgL__ortest_1047z00_1169;}  else 
{ /* Llib/bigloo.scm 512 */
unsigned char BgL_arg1296z00_1170;
{ /* Llib/bigloo.scm 512 */
long BgL_i2031z00_2539;
BgL_i2031z00_2539 = 
(BgL_lenz00_1164-((long)1)); 
{ /* Llib/bigloo.scm 512 */
long BgL_l2032z00_2540;
BgL_l2032z00_2540 = 
STRING_LENGTH(BgL_stringz00_22); 
if(
BOUND_CHECK(BgL_i2031z00_2539, BgL_l2032z00_2540))
{ /* Llib/bigloo.scm 512 */
BgL_arg1296z00_1170 = 
STRING_REF(BgL_stringz00_22, BgL_i2031z00_2539); }  else 
{ 
obj_t BgL_auxz00_3121;
BgL_auxz00_3121 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)19296)), BGl_string2167z00zz__biglooz00, BgL_stringz00_22, 
(int)(BgL_l2032z00_2540), 
(int)(BgL_i2031z00_2539)); 
FAILURE(BgL_auxz00_3121,BFALSE,BFALSE);} } } 
{ /* Llib/bigloo.scm 512 */
bool_t BgL_res1823z00_1958;
BgL_res1823z00_1958 = 
isdigit(BgL_arg1296z00_1170); 
return BgL_res1823z00_1958;} } }  else 
{ /* Llib/bigloo.scm 509 */
return ((bool_t)0);} }  else 
{ /* Llib/bigloo.scm 508 */
return ((bool_t)0);} }  else 
{ /* Llib/bigloo.scm 506 */
return ((bool_t)0);} }  else 
{ /* Llib/bigloo.scm 505 */
return ((bool_t)0);} } } 

}



/* &bigloo-mangled? */
obj_t BGl_z62bigloozd2mangledzf3z43zz__biglooz00(obj_t BgL_envz00_2424, obj_t BgL_stringz00_2425)
{
{ /* Llib/bigloo.scm 503 */
{ /* Llib/bigloo.scm 504 */
bool_t BgL_tmpz00_3128;
{ /* Llib/bigloo.scm 504 */
obj_t BgL_auxz00_3129;
if(
STRINGP(BgL_stringz00_2425))
{ /* Llib/bigloo.scm 504 */
BgL_auxz00_3129 = BgL_stringz00_2425
; }  else 
{ 
obj_t BgL_auxz00_3132;
BgL_auxz00_3132 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)18913)), BGl_string2176z00zz__biglooz00, BGl_string2160z00zz__biglooz00, BgL_stringz00_2425); 
FAILURE(BgL_auxz00_3132,BFALSE,BFALSE);} 
BgL_tmpz00_3128 = 
bigloo_mangledp(BgL_auxz00_3129); } 
return 
BBOOL(BgL_tmpz00_3128);} } 

}



/* bigloo-need-mangling? */
BGL_EXPORTED_DEF bool_t BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00(obj_t BgL_stringz00_23)
{
{ /* Llib/bigloo.scm 517 */
{ /* Llib/bigloo.scm 518 */
long BgL_lenz00_1182;
BgL_lenz00_1182 = 
STRING_LENGTH(BgL_stringz00_23); 
if(
(BgL_lenz00_1182>((long)0)))
{ /* Llib/bigloo.scm 520 */
bool_t BgL__ortest_1049z00_1184;
{ /* Llib/bigloo.scm 520 */
bool_t BgL_test2342z00_3141;
{ /* Llib/bigloo.scm 520 */
bool_t BgL_test2343z00_3142;
{ /* Llib/bigloo.scm 520 */
unsigned char BgL_arg1319z00_1204;
if(
BOUND_CHECK(((long)0), BgL_lenz00_1182))
{ /* Llib/bigloo.scm 520 */
BgL_arg1319z00_1204 = 
STRING_REF(BgL_stringz00_23, ((long)0)); }  else 
{ 
obj_t BgL_auxz00_3146;
BgL_auxz00_3146 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)19692)), BGl_string2167z00zz__biglooz00, BgL_stringz00_23, 
(int)(BgL_lenz00_1182), 
(int)(((long)0))); 
FAILURE(BgL_auxz00_3146,BFALSE,BFALSE);} 
{ /* Llib/bigloo.scm 520 */
bool_t BgL_res1827z00_1966;
BgL_res1827z00_1966 = 
isalpha(BgL_arg1319z00_1204); 
BgL_test2343z00_3142 = BgL_res1827z00_1966; } } 
if(BgL_test2343z00_3142)
{ /* Llib/bigloo.scm 520 */
BgL_test2342z00_3141 = ((bool_t)1)
; }  else 
{ /* Llib/bigloo.scm 521 */
unsigned char BgL_tmpz00_3153;
{ /* Llib/bigloo.scm 521 */
long BgL_l2040z00_2548;
BgL_l2040z00_2548 = 
STRING_LENGTH(BgL_stringz00_23); 
if(
BOUND_CHECK(((long)0), BgL_l2040z00_2548))
{ /* Llib/bigloo.scm 521 */
BgL_tmpz00_3153 = 
STRING_REF(BgL_stringz00_23, ((long)0))
; }  else 
{ 
obj_t BgL_auxz00_3158;
BgL_auxz00_3158 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)19726)), BGl_string2167z00zz__biglooz00, BgL_stringz00_23, 
(int)(BgL_l2040z00_2548), 
(int)(((long)0))); 
FAILURE(BgL_auxz00_3158,BFALSE,BFALSE);} } 
BgL_test2342z00_3141 = 
(BgL_tmpz00_3153==((unsigned char)'_')); } } 
if(BgL_test2342z00_3141)
{ /* Llib/bigloo.scm 520 */
BgL__ortest_1049z00_1184 = ((bool_t)0); }  else 
{ /* Llib/bigloo.scm 520 */
BgL__ortest_1049z00_1184 = ((bool_t)1); } } 
if(BgL__ortest_1049z00_1184)
{ /* Llib/bigloo.scm 520 */
return BgL__ortest_1049z00_1184;}  else 
{ 
long BgL_iz00_1186;
BgL_iz00_1186 = ((long)1); 
BgL_zc3z04anonymousza31307ze3z87_1187:
if(
(BgL_iz00_1186>=BgL_lenz00_1182))
{ /* Llib/bigloo.scm 523 */
return ((bool_t)0);}  else 
{ /* Llib/bigloo.scm 525 */
unsigned char BgL_cz00_1189;
{ /* Llib/bigloo.scm 525 */
long BgL_l2044z00_2552;
BgL_l2044z00_2552 = 
STRING_LENGTH(BgL_stringz00_23); 
if(
BOUND_CHECK(BgL_iz00_1186, BgL_l2044z00_2552))
{ /* Llib/bigloo.scm 525 */
BgL_cz00_1189 = 
STRING_REF(BgL_stringz00_23, BgL_iz00_1186); }  else 
{ 
obj_t BgL_auxz00_3172;
BgL_auxz00_3172 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)19830)), BGl_string2167z00zz__biglooz00, BgL_stringz00_23, 
(int)(BgL_l2044z00_2552), 
(int)(BgL_iz00_1186)); 
FAILURE(BgL_auxz00_3172,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 526 */
bool_t BgL_test2349z00_3178;
{ /* Llib/bigloo.scm 526 */
bool_t BgL_test2350z00_3179;
{ /* Llib/bigloo.scm 526 */
bool_t BgL_res1832z00_1979;
BgL_res1832z00_1979 = 
isalpha(BgL_cz00_1189); 
BgL_test2350z00_3179 = BgL_res1832z00_1979; } 
if(BgL_test2350z00_3179)
{ /* Llib/bigloo.scm 526 */
BgL_test2349z00_3178 = ((bool_t)1)
; }  else 
{ /* Llib/bigloo.scm 527 */
bool_t BgL_test2351z00_3181;
{ /* Llib/bigloo.scm 527 */
bool_t BgL_res1833z00_1981;
BgL_res1833z00_1981 = 
isdigit(BgL_cz00_1189); 
BgL_test2351z00_3181 = BgL_res1833z00_1981; } 
if(BgL_test2351z00_3181)
{ /* Llib/bigloo.scm 527 */
BgL_test2349z00_3178 = ((bool_t)1)
; }  else 
{ /* Llib/bigloo.scm 527 */
BgL_test2349z00_3178 = 
(BgL_cz00_1189==((unsigned char)'_'))
; } } } 
if(BgL_test2349z00_3178)
{ 
long BgL_iz00_3184;
BgL_iz00_3184 = 
(BgL_iz00_1186+((long)1)); 
BgL_iz00_1186 = BgL_iz00_3184; 
goto BgL_zc3z04anonymousza31307ze3z87_1187;}  else 
{ /* Llib/bigloo.scm 526 */
return ((bool_t)1);} } } } }  else 
{ /* Llib/bigloo.scm 519 */
return ((bool_t)0);} } } 

}



/* &bigloo-need-mangling? */
obj_t BGl_z62bigloozd2needzd2manglingzf3z91zz__biglooz00(obj_t BgL_envz00_2426, obj_t BgL_stringz00_2427)
{
{ /* Llib/bigloo.scm 517 */
{ /* Llib/bigloo.scm 518 */
bool_t BgL_tmpz00_3186;
{ /* Llib/bigloo.scm 518 */
obj_t BgL_auxz00_3187;
if(
STRINGP(BgL_stringz00_2427))
{ /* Llib/bigloo.scm 518 */
BgL_auxz00_3187 = BgL_stringz00_2427
; }  else 
{ 
obj_t BgL_auxz00_3190;
BgL_auxz00_3190 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)19598)), BGl_string2177z00zz__biglooz00, BGl_string2160z00zz__biglooz00, BgL_stringz00_2427); 
FAILURE(BgL_auxz00_3190,BFALSE,BFALSE);} 
BgL_tmpz00_3186 = 
BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00(BgL_auxz00_3187); } 
return 
BBOOL(BgL_tmpz00_3186);} } 

}



/* bigloo-demangle */
BGL_EXPORTED_DEF obj_t bigloo_demangle(obj_t BgL_stringz00_24)
{
{ /* Llib/bigloo.scm 535 */
{ /* Llib/bigloo.scm 536 */
long BgL_lenz00_1205;
BgL_lenz00_1205 = 
STRING_LENGTH(BgL_stringz00_24); 
{ /* Llib/bigloo.scm 536 */
long BgL_clenz00_1206;
BgL_clenz00_1206 = 
(BgL_lenz00_1205-((long)3)); 
{ /* Llib/bigloo.scm 537 */

{ 

if(
(BgL_lenz00_1205<((long)8)))
{ /* Llib/bigloo.scm 586 */
return BgL_stringz00_24;}  else 
{ /* Llib/bigloo.scm 586 */
if(
bigloo_strncmp(BgL_stringz00_24, BGl_string2171z00zz__biglooz00, ((long)4)))
{ /* Llib/bigloo.scm 588 */
{ /* Llib/bigloo.scm 576 */
obj_t BgL_strz00_1267;
BgL_strz00_1267 = 
BGl_bigloozd2demanglezd2atze70ze7zz__biglooz00(BgL_stringz00_24, BgL_clenz00_1206, 
BINT(((long)4))); 
{ /* Llib/bigloo.scm 577 */
obj_t BgL_offsetz00_1268;
{ /* Llib/bigloo.scm 578 */
int BgL_tmpz00_3204;
BgL_tmpz00_3204 = 
(int)(((long)1)); 
BgL_offsetz00_1268 = 
BGL_MVALUES_VAL(BgL_tmpz00_3204); } 
{ /* Llib/bigloo.scm 578 */
int BgL_res1868z00_2065;
{ /* Llib/bigloo.scm 578 */
int BgL_tmpz00_3207;
BgL_tmpz00_3207 = 
(int)(((long)2)); 
BgL_res1868z00_2065 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3207); } BgL_res1868z00_2065; } 
{ /* Llib/bigloo.scm 578 */
int BgL_tmpz00_3210;
BgL_tmpz00_3210 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_3210, BUNSPEC); } 
return BgL_strz00_1267;} } }  else 
{ /* Llib/bigloo.scm 588 */
if(
bigloo_strncmp(BgL_stringz00_24, BGl_string2174z00zz__biglooz00, ((long)4)))
{ /* Llib/bigloo.scm 590 */
{ /* Llib/bigloo.scm 580 */
obj_t BgL_idz00_1272;
BgL_idz00_1272 = 
BGl_bigloozd2demanglezd2atze70ze7zz__biglooz00(BgL_stringz00_24, BgL_clenz00_1206, 
BINT(((long)4))); 
{ /* Llib/bigloo.scm 581 */
obj_t BgL_offsetz00_1273;
{ /* Llib/bigloo.scm 582 */
int BgL_tmpz00_3217;
BgL_tmpz00_3217 = 
(int)(((long)1)); 
BgL_offsetz00_1273 = 
BGL_MVALUES_VAL(BgL_tmpz00_3217); } 
{ /* Llib/bigloo.scm 582 */
obj_t BgL_modulez00_1274;
BgL_modulez00_1274 = 
BGl_bigloozd2demanglezd2atze70ze7zz__biglooz00(BgL_stringz00_24, BgL_clenz00_1206, BgL_offsetz00_1273); 
{ /* Llib/bigloo.scm 583 */
obj_t BgL_offsetz00_1275;
{ /* Llib/bigloo.scm 584 */
int BgL_tmpz00_3221;
BgL_tmpz00_3221 = 
(int)(((long)1)); 
BgL_offsetz00_1275 = 
BGL_MVALUES_VAL(BgL_tmpz00_3221); } 
{ /* Llib/bigloo.scm 584 */
int BgL_res1869z00_2066;
{ /* Llib/bigloo.scm 584 */
int BgL_tmpz00_3224;
BgL_tmpz00_3224 = 
(int)(((long)2)); 
BgL_res1869z00_2066 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3224); } BgL_res1869z00_2066; } 
{ /* Llib/bigloo.scm 584 */
int BgL_tmpz00_3227;
BgL_tmpz00_3227 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_3227, BgL_modulez00_1274); } 
return BgL_idz00_1272;} } } } }  else 
{ /* Llib/bigloo.scm 590 */
return BgL_stringz00_24;} } } } } } } } 

}



/* char->digit~0 */
long BGl_charzd2ze3digitze70zd6zz__biglooz00(unsigned char BgL_cz00_1217)
{
{ /* Llib/bigloo.scm 543 */
{ /* Llib/bigloo.scm 541 */
bool_t BgL_test2356z00_3230;
{ /* Llib/bigloo.scm 541 */
bool_t BgL_res1838z00_1992;
BgL_res1838z00_1992 = 
isdigit(BgL_cz00_1217); 
BgL_test2356z00_3230 = BgL_res1838z00_1992; } 
if(BgL_test2356z00_3230)
{ /* Llib/bigloo.scm 541 */
return 
(
(BgL_cz00_1217)-((long)48));}  else 
{ /* Llib/bigloo.scm 541 */
return 
(((long)10)+
(
(BgL_cz00_1217)-((long)97)));} } } 

}



/* get-8bits-integer~0 */
long BGl_getzd28bitszd2integerze70ze7zz__biglooz00(obj_t BgL_stringz00_2455, obj_t BgL_rz00_1223)
{
{ /* Llib/bigloo.scm 549 */
{ /* Llib/bigloo.scm 548 */

{ /* Llib/bigloo.scm 549 */
long BgL_auxz00_3259;long BgL_tmpz00_3237;
{ /* Llib/bigloo.scm 549 */
long BgL_tmpz00_3260;
{ /* Llib/bigloo.scm 548 */
unsigned char BgL_auxz00_3261;
{ /* Llib/bigloo.scm 546 */
long BgL_i2051z00_2559;
{ /* Llib/bigloo.scm 546 */
long BgL_za71za7_2008;
{ /* Llib/bigloo.scm 546 */
obj_t BgL_tmpz00_3262;
if(
INTEGERP(BgL_rz00_1223))
{ /* Llib/bigloo.scm 546 */
BgL_tmpz00_3262 = BgL_rz00_1223
; }  else 
{ 
obj_t BgL_auxz00_3265;
BgL_auxz00_3265 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)20653)), BGl_string2178z00zz__biglooz00, BGl_string2179z00zz__biglooz00, BgL_rz00_1223); 
FAILURE(BgL_auxz00_3265,BFALSE,BFALSE);} 
BgL_za71za7_2008 = 
(long)CINT(BgL_tmpz00_3262); } 
BgL_i2051z00_2559 = 
(BgL_za71za7_2008+((long)2)); } 
{ /* Llib/bigloo.scm 546 */
long BgL_l2052z00_2560;
BgL_l2052z00_2560 = 
STRING_LENGTH(BgL_stringz00_2455); 
if(
BOUND_CHECK(BgL_i2051z00_2559, BgL_l2052z00_2560))
{ /* Llib/bigloo.scm 546 */
BgL_auxz00_3261 = 
STRING_REF(BgL_stringz00_2455, BgL_i2051z00_2559)
; }  else 
{ 
obj_t BgL_auxz00_3275;
BgL_auxz00_3275 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)20629)), BGl_string2167z00zz__biglooz00, BgL_stringz00_2455, 
(int)(BgL_l2052z00_2560), 
(int)(BgL_i2051z00_2559)); 
FAILURE(BgL_auxz00_3275,BFALSE,BFALSE);} } } 
BgL_tmpz00_3260 = 
BGl_charzd2ze3digitze70zd6zz__biglooz00(BgL_auxz00_3261); } 
BgL_auxz00_3259 = 
(BgL_tmpz00_3260 << 
(int)(((long)4))); } 
{ /* Llib/bigloo.scm 547 */
unsigned char BgL_auxz00_3238;
{ /* Llib/bigloo.scm 545 */
long BgL_i2047z00_2555;
{ /* Llib/bigloo.scm 545 */
long BgL_za71za7_2003;
{ /* Llib/bigloo.scm 545 */
obj_t BgL_tmpz00_3239;
if(
INTEGERP(BgL_rz00_1223))
{ /* Llib/bigloo.scm 545 */
BgL_tmpz00_3239 = BgL_rz00_1223
; }  else 
{ 
obj_t BgL_auxz00_3242;
BgL_auxz00_3242 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)20616)), BGl_string2178z00zz__biglooz00, BGl_string2179z00zz__biglooz00, BgL_rz00_1223); 
FAILURE(BgL_auxz00_3242,BFALSE,BFALSE);} 
BgL_za71za7_2003 = 
(long)CINT(BgL_tmpz00_3239); } 
BgL_i2047z00_2555 = 
(BgL_za71za7_2003+((long)1)); } 
{ /* Llib/bigloo.scm 545 */
long BgL_l2048z00_2556;
BgL_l2048z00_2556 = 
STRING_LENGTH(BgL_stringz00_2455); 
if(
BOUND_CHECK(BgL_i2047z00_2555, BgL_l2048z00_2556))
{ /* Llib/bigloo.scm 545 */
BgL_auxz00_3238 = 
STRING_REF(BgL_stringz00_2455, BgL_i2047z00_2555)
; }  else 
{ 
obj_t BgL_auxz00_3252;
BgL_auxz00_3252 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)20592)), BGl_string2167z00zz__biglooz00, BgL_stringz00_2455, 
(int)(BgL_l2048z00_2556), 
(int)(BgL_i2047z00_2555)); 
FAILURE(BgL_auxz00_3252,BFALSE,BFALSE);} } } 
BgL_tmpz00_3237 = 
BGl_charzd2ze3digitze70zd6zz__biglooz00(BgL_auxz00_3238); } 
return 
(BgL_tmpz00_3237+BgL_auxz00_3259);} } } 

}



/* bigloo-demangle-at~0 */
obj_t BGl_bigloozd2demanglezd2atze70ze7zz__biglooz00(obj_t BgL_stringz00_2457, long BgL_clenz00_2456, obj_t BgL_offsetz00_1232)
{
{ /* Llib/bigloo.scm 574 */
{ /* Llib/bigloo.scm 551 */
obj_t BgL_newz00_1234;
{ /* Ieee/string.scm 168 */

BgL_newz00_1234 = 
make_string(BgL_clenz00_2456, ((unsigned char)' ')); } 
{ 
obj_t BgL_rz00_1236;long BgL_wz00_1237;long BgL_checksumz00_1238;
BgL_rz00_1236 = BgL_offsetz00_1232; 
BgL_wz00_1237 = ((long)0); 
BgL_checksumz00_1238 = ((long)0); 
BgL_zc3z04anonymousza31335ze3z87_1239:
{ /* Llib/bigloo.scm 555 */
bool_t BgL_test2361z00_3286;
{ /* Llib/bigloo.scm 555 */
long BgL_n1z00_2020;
{ /* Llib/bigloo.scm 555 */
obj_t BgL_tmpz00_3287;
if(
INTEGERP(BgL_rz00_1236))
{ /* Llib/bigloo.scm 555 */
BgL_tmpz00_3287 = BgL_rz00_1236
; }  else 
{ 
obj_t BgL_auxz00_3290;
BgL_auxz00_3290 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)20898)), BGl_string2180z00zz__biglooz00, BGl_string2179z00zz__biglooz00, BgL_rz00_1236); 
FAILURE(BgL_auxz00_3290,BFALSE,BFALSE);} 
BgL_n1z00_2020 = 
(long)CINT(BgL_tmpz00_3287); } 
BgL_test2361z00_3286 = 
(BgL_n1z00_2020==BgL_clenz00_2456); } 
if(BgL_test2361z00_3286)
{ /* Llib/bigloo.scm 555 */
if(
(BgL_checksumz00_1238==
BGl_getzd28bitszd2integerze70ze7zz__biglooz00(BgL_stringz00_2457, BgL_rz00_1236)))
{ /* Llib/bigloo.scm 558 */
obj_t BgL_val0_1084z00_1243;long BgL_val1_1085z00_1244;
BgL_val0_1084z00_1243 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_newz00_1234, ((long)0), BgL_wz00_1237); 
{ /* Llib/bigloo.scm 558 */
long BgL_za71za7_2026;
{ /* Llib/bigloo.scm 558 */
obj_t BgL_tmpz00_3300;
if(
INTEGERP(BgL_rz00_1236))
{ /* Llib/bigloo.scm 558 */
BgL_tmpz00_3300 = BgL_rz00_1236
; }  else 
{ 
obj_t BgL_auxz00_3303;
BgL_auxz00_3303 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)21038)), BGl_string2180z00zz__biglooz00, BGl_string2179z00zz__biglooz00, BgL_rz00_1236); 
FAILURE(BgL_auxz00_3303,BFALSE,BFALSE);} 
BgL_za71za7_2026 = 
(long)CINT(BgL_tmpz00_3300); } 
BgL_val1_1085z00_1244 = 
(BgL_za71za7_2026+((long)3)); } 
{ /* Llib/bigloo.scm 558 */
int BgL_res1854z00_2028;
{ /* Llib/bigloo.scm 558 */
int BgL_tmpz00_3309;
BgL_tmpz00_3309 = 
(int)(((long)2)); 
BgL_res1854z00_2028 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3309); } BgL_res1854z00_2028; } 
{ /* Llib/bigloo.scm 558 */
obj_t BgL_auxz00_3314;int BgL_tmpz00_3312;
BgL_auxz00_3314 = 
BINT(BgL_val1_1085z00_1244); 
BgL_tmpz00_3312 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_3312, BgL_auxz00_3314); } 
return BgL_val0_1084z00_1243;}  else 
{ /* Llib/bigloo.scm 557 */
return 
BGl_errorz00zz__errorz00(BGl_string2181z00zz__biglooz00, BGl_string2182z00zz__biglooz00, BgL_stringz00_2457);} }  else 
{ /* Llib/bigloo.scm 560 */
unsigned char BgL_cz00_1246;
{ /* Llib/bigloo.scm 560 */
long BgL_kz00_2030;
{ /* Llib/bigloo.scm 560 */
obj_t BgL_tmpz00_3318;
if(
INTEGERP(BgL_rz00_1236))
{ /* Llib/bigloo.scm 560 */
BgL_tmpz00_3318 = BgL_rz00_1236
; }  else 
{ 
obj_t BgL_auxz00_3321;
BgL_auxz00_3321 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)21093)), BGl_string2180z00zz__biglooz00, BGl_string2179z00zz__biglooz00, BgL_rz00_1236); 
FAILURE(BgL_auxz00_3321,BFALSE,BFALSE);} 
BgL_kz00_2030 = 
(long)CINT(BgL_tmpz00_3318); } 
{ /* Llib/bigloo.scm 560 */
long BgL_l2056z00_2564;
BgL_l2056z00_2564 = 
STRING_LENGTH(BgL_stringz00_2457); 
if(
BOUND_CHECK(BgL_kz00_2030, BgL_l2056z00_2564))
{ /* Llib/bigloo.scm 560 */
BgL_cz00_1246 = 
STRING_REF(BgL_stringz00_2457, BgL_kz00_2030); }  else 
{ 
obj_t BgL_auxz00_3330;
BgL_auxz00_3330 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)21074)), BGl_string2167z00zz__biglooz00, BgL_stringz00_2457, 
(int)(BgL_l2056z00_2564), 
(int)(BgL_kz00_2030)); 
FAILURE(BgL_auxz00_3330,BFALSE,BFALSE);} } } 
if(
(BgL_cz00_1246==((unsigned char)'z')))
{ /* Llib/bigloo.scm 562 */
bool_t BgL_test2368z00_3338;
{ /* Llib/bigloo.scm 562 */
unsigned char BgL_tmpz00_3339;
{ /* Llib/bigloo.scm 562 */
long BgL_i2059z00_2567;
{ /* Llib/bigloo.scm 562 */
long BgL_za71za7_2035;
{ /* Llib/bigloo.scm 562 */
obj_t BgL_tmpz00_3340;
if(
INTEGERP(BgL_rz00_1236))
{ /* Llib/bigloo.scm 562 */
BgL_tmpz00_3340 = BgL_rz00_1236
; }  else 
{ 
obj_t BgL_auxz00_3343;
BgL_auxz00_3343 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)21166)), BGl_string2180z00zz__biglooz00, BGl_string2179z00zz__biglooz00, BgL_rz00_1236); 
FAILURE(BgL_auxz00_3343,BFALSE,BFALSE);} 
BgL_za71za7_2035 = 
(long)CINT(BgL_tmpz00_3340); } 
BgL_i2059z00_2567 = 
(BgL_za71za7_2035+((long)1)); } 
{ /* Llib/bigloo.scm 562 */
long BgL_l2060z00_2568;
BgL_l2060z00_2568 = 
STRING_LENGTH(BgL_stringz00_2457); 
if(
BOUND_CHECK(BgL_i2059z00_2567, BgL_l2060z00_2568))
{ /* Llib/bigloo.scm 562 */
BgL_tmpz00_3339 = 
STRING_REF(BgL_stringz00_2457, BgL_i2059z00_2567)
; }  else 
{ 
obj_t BgL_auxz00_3353;
BgL_auxz00_3353 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)21142)), BGl_string2167z00zz__biglooz00, BgL_stringz00_2457, 
(int)(BgL_l2060z00_2568), 
(int)(BgL_i2059z00_2567)); 
FAILURE(BgL_auxz00_3353,BFALSE,BFALSE);} } } 
BgL_test2368z00_3338 = 
(BgL_tmpz00_3339==((unsigned char)'z')); } 
if(BgL_test2368z00_3338)
{ /* Llib/bigloo.scm 563 */
obj_t BgL_val0_1086z00_1251;long BgL_val1_1087z00_1252;
BgL_val0_1086z00_1251 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_newz00_1234, ((long)0), 
(BgL_wz00_1237-((long)1))); 
{ /* Llib/bigloo.scm 563 */
long BgL_za71za7_2045;
{ /* Llib/bigloo.scm 563 */
obj_t BgL_tmpz00_3362;
if(
INTEGERP(BgL_rz00_1236))
{ /* Llib/bigloo.scm 563 */
BgL_tmpz00_3362 = BgL_rz00_1236
; }  else 
{ 
obj_t BgL_auxz00_3365;
BgL_auxz00_3365 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)21227)), BGl_string2180z00zz__biglooz00, BGl_string2179z00zz__biglooz00, BgL_rz00_1236); 
FAILURE(BgL_auxz00_3365,BFALSE,BFALSE);} 
BgL_za71za7_2045 = 
(long)CINT(BgL_tmpz00_3362); } 
BgL_val1_1087z00_1252 = 
(BgL_za71za7_2045+((long)2)); } 
{ /* Llib/bigloo.scm 563 */
int BgL_res1862z00_2047;
{ /* Llib/bigloo.scm 563 */
int BgL_tmpz00_3371;
BgL_tmpz00_3371 = 
(int)(((long)2)); 
BgL_res1862z00_2047 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3371); } BgL_res1862z00_2047; } 
{ /* Llib/bigloo.scm 563 */
obj_t BgL_auxz00_3376;int BgL_tmpz00_3374;
BgL_auxz00_3376 = 
BINT(BgL_val1_1087z00_1252); 
BgL_tmpz00_3374 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_3374, BgL_auxz00_3376); } 
return BgL_val0_1086z00_1251;}  else 
{ /* Llib/bigloo.scm 564 */
long BgL_iz00_1254;
BgL_iz00_1254 = 
BGl_getzd28bitszd2integerze70ze7zz__biglooz00(BgL_stringz00_2457, BgL_rz00_1236); 
{ /* Llib/bigloo.scm 564 */
unsigned char BgL_ncz00_1255;
BgL_ncz00_1255 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_iz00_1254); 
{ /* Llib/bigloo.scm 565 */

{ /* Llib/bigloo.scm 566 */
long BgL_l2064z00_2572;
BgL_l2064z00_2572 = 
STRING_LENGTH(BgL_newz00_1234); 
if(
BOUND_CHECK(BgL_wz00_1237, BgL_l2064z00_2572))
{ /* Llib/bigloo.scm 566 */
STRING_SET(BgL_newz00_1234, BgL_wz00_1237, BgL_ncz00_1255); }  else 
{ 
obj_t BgL_auxz00_3385;
BgL_auxz00_3385 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)21313)), BGl_string2156z00zz__biglooz00, BgL_newz00_1234, 
(int)(BgL_l2064z00_2572), 
(int)(BgL_wz00_1237)); 
FAILURE(BgL_auxz00_3385,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 567 */
long BgL_arg1345z00_1256;long BgL_arg1346z00_1257;long BgL_arg1347z00_1258;
{ /* Llib/bigloo.scm 567 */
long BgL_za71za7_2051;
{ /* Llib/bigloo.scm 567 */
obj_t BgL_tmpz00_3391;
if(
INTEGERP(BgL_rz00_1236))
{ /* Llib/bigloo.scm 567 */
BgL_tmpz00_3391 = BgL_rz00_1236
; }  else 
{ 
obj_t BgL_auxz00_3394;
BgL_auxz00_3394 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)21352)), BGl_string2180z00zz__biglooz00, BGl_string2179z00zz__biglooz00, BgL_rz00_1236); 
FAILURE(BgL_auxz00_3394,BFALSE,BFALSE);} 
BgL_za71za7_2051 = 
(long)CINT(BgL_tmpz00_3391); } 
BgL_arg1345z00_1256 = 
(BgL_za71za7_2051+((long)3)); } 
BgL_arg1346z00_1257 = 
(BgL_wz00_1237+((long)1)); 
BgL_arg1347z00_1258 = 
(BgL_checksumz00_1238 ^ BgL_iz00_1254); 
{ 
long BgL_checksumz00_3405;long BgL_wz00_3404;obj_t BgL_rz00_3402;
BgL_rz00_3402 = 
BINT(BgL_arg1345z00_1256); 
BgL_wz00_3404 = BgL_arg1346z00_1257; 
BgL_checksumz00_3405 = BgL_arg1347z00_1258; 
BgL_checksumz00_1238 = BgL_checksumz00_3405; 
BgL_wz00_1237 = BgL_wz00_3404; 
BgL_rz00_1236 = BgL_rz00_3402; 
goto BgL_zc3z04anonymousza31335ze3z87_1239;} } } } } }  else 
{ /* Llib/bigloo.scm 561 */
{ /* Llib/bigloo.scm 571 */
long BgL_l2068z00_2576;
BgL_l2068z00_2576 = 
STRING_LENGTH(BgL_newz00_1234); 
if(
BOUND_CHECK(BgL_wz00_1237, BgL_l2068z00_2576))
{ /* Llib/bigloo.scm 571 */
STRING_SET(BgL_newz00_1234, BgL_wz00_1237, BgL_cz00_1246); }  else 
{ 
obj_t BgL_auxz00_3410;
BgL_auxz00_3410 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)21433)), BGl_string2156z00zz__biglooz00, BgL_newz00_1234, 
(int)(BgL_l2068z00_2576), 
(int)(BgL_wz00_1237)); 
FAILURE(BgL_auxz00_3410,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 572 */
long BgL_arg1351z00_1261;long BgL_arg1352z00_1262;
{ /* Llib/bigloo.scm 572 */
long BgL_za71za7_2061;
{ /* Llib/bigloo.scm 572 */
obj_t BgL_tmpz00_3416;
if(
INTEGERP(BgL_rz00_1236))
{ /* Llib/bigloo.scm 572 */
BgL_tmpz00_3416 = BgL_rz00_1236
; }  else 
{ 
obj_t BgL_auxz00_3419;
BgL_auxz00_3419 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)21474)), BGl_string2180z00zz__biglooz00, BGl_string2179z00zz__biglooz00, BgL_rz00_1236); 
FAILURE(BgL_auxz00_3419,BFALSE,BFALSE);} 
BgL_za71za7_2061 = 
(long)CINT(BgL_tmpz00_3416); } 
BgL_arg1351z00_1261 = 
(BgL_za71za7_2061+((long)1)); } 
BgL_arg1352z00_1262 = 
(BgL_wz00_1237+((long)1)); 
{ 
long BgL_wz00_3428;obj_t BgL_rz00_3426;
BgL_rz00_3426 = 
BINT(BgL_arg1351z00_1261); 
BgL_wz00_3428 = BgL_arg1352z00_1262; 
BgL_wz00_1237 = BgL_wz00_3428; 
BgL_rz00_1236 = BgL_rz00_3426; 
goto BgL_zc3z04anonymousza31335ze3z87_1239;} } } } } } } } 

}



/* &bigloo-demangle */
obj_t BGl_z62bigloozd2demanglezb0zz__biglooz00(obj_t BgL_envz00_2428, obj_t BgL_stringz00_2429)
{
{ /* Llib/bigloo.scm 535 */
{ /* Llib/bigloo.scm 536 */
obj_t BgL_auxz00_3429;
if(
STRINGP(BgL_stringz00_2429))
{ /* Llib/bigloo.scm 536 */
BgL_auxz00_3429 = BgL_stringz00_2429
; }  else 
{ 
obj_t BgL_auxz00_3432;
BgL_auxz00_3432 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)20241)), BGl_string2183z00zz__biglooz00, BGl_string2160z00zz__biglooz00, BgL_stringz00_2429); 
FAILURE(BgL_auxz00_3432,BFALSE,BFALSE);} 
return 
bigloo_demangle(BgL_auxz00_3429);} } 

}



/* bigloo-class-mangled? */
BGL_EXPORTED_DEF bool_t bigloo_class_mangledp(obj_t BgL_stringz00_25)
{
{ /* Llib/bigloo.scm 598 */
{ /* Llib/bigloo.scm 599 */
long BgL_lenz00_1284;
BgL_lenz00_1284 = 
STRING_LENGTH(BgL_stringz00_25); 
if(
(BgL_lenz00_1284>((long)8)))
{ /* Llib/bigloo.scm 601 */
bool_t BgL_test2378z00_3440;
{ /* Llib/bigloo.scm 601 */
unsigned char BgL_tmpz00_3441;
{ /* Llib/bigloo.scm 601 */
long BgL_i2071z00_2579;
BgL_i2071z00_2579 = 
(BgL_lenz00_1284-((long)1)); 
if(
BOUND_CHECK(BgL_i2071z00_2579, BgL_lenz00_1284))
{ /* Llib/bigloo.scm 601 */
BgL_tmpz00_3441 = 
STRING_REF(BgL_stringz00_25, BgL_i2071z00_2579)
; }  else 
{ 
obj_t BgL_auxz00_3446;
BgL_auxz00_3446 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)22386)), BGl_string2167z00zz__biglooz00, BgL_stringz00_25, 
(int)(BgL_lenz00_1284), 
(int)(BgL_i2071z00_2579)); 
FAILURE(BgL_auxz00_3446,BFALSE,BFALSE);} } 
BgL_test2378z00_3440 = 
(BgL_tmpz00_3441==((unsigned char)'t')); } 
if(BgL_test2378z00_3440)
{ /* Llib/bigloo.scm 602 */
bool_t BgL_test2380z00_3453;
{ /* Llib/bigloo.scm 602 */
unsigned char BgL_tmpz00_3454;
{ /* Llib/bigloo.scm 602 */
long BgL_i2075z00_2583;
BgL_i2075z00_2583 = 
(BgL_lenz00_1284-((long)2)); 
{ /* Llib/bigloo.scm 602 */
long BgL_l2076z00_2584;
BgL_l2076z00_2584 = 
STRING_LENGTH(BgL_stringz00_25); 
if(
BOUND_CHECK(BgL_i2075z00_2583, BgL_l2076z00_2584))
{ /* Llib/bigloo.scm 602 */
BgL_tmpz00_3454 = 
STRING_REF(BgL_stringz00_25, BgL_i2075z00_2583)
; }  else 
{ 
obj_t BgL_auxz00_3460;
BgL_auxz00_3460 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)22435)), BGl_string2167z00zz__biglooz00, BgL_stringz00_25, 
(int)(BgL_l2076z00_2584), 
(int)(BgL_i2075z00_2583)); 
FAILURE(BgL_auxz00_3460,BFALSE,BFALSE);} } } 
BgL_test2380z00_3453 = 
(BgL_tmpz00_3454==((unsigned char)'l')); } 
if(BgL_test2380z00_3453)
{ /* Llib/bigloo.scm 603 */
bool_t BgL_test2382z00_3467;
{ /* Llib/bigloo.scm 603 */
unsigned char BgL_tmpz00_3468;
{ /* Llib/bigloo.scm 603 */
long BgL_i2079z00_2587;
BgL_i2079z00_2587 = 
(BgL_lenz00_1284-((long)3)); 
{ /* Llib/bigloo.scm 603 */
long BgL_l2080z00_2588;
BgL_l2080z00_2588 = 
STRING_LENGTH(BgL_stringz00_25); 
if(
BOUND_CHECK(BgL_i2079z00_2587, BgL_l2080z00_2588))
{ /* Llib/bigloo.scm 603 */
BgL_tmpz00_3468 = 
STRING_REF(BgL_stringz00_25, BgL_i2079z00_2587)
; }  else 
{ 
obj_t BgL_auxz00_3474;
BgL_auxz00_3474 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)22484)), BGl_string2167z00zz__biglooz00, BgL_stringz00_25, 
(int)(BgL_l2080z00_2588), 
(int)(BgL_i2079z00_2587)); 
FAILURE(BgL_auxz00_3474,BFALSE,BFALSE);} } } 
BgL_test2382z00_3467 = 
(BgL_tmpz00_3468==((unsigned char)'g')); } 
if(BgL_test2382z00_3467)
{ /* Llib/bigloo.scm 604 */
bool_t BgL_test2384z00_3481;
{ /* Llib/bigloo.scm 604 */
unsigned char BgL_tmpz00_3482;
{ /* Llib/bigloo.scm 604 */
long BgL_i2083z00_2591;
BgL_i2083z00_2591 = 
(BgL_lenz00_1284-((long)4)); 
{ /* Llib/bigloo.scm 604 */
long BgL_l2084z00_2592;
BgL_l2084z00_2592 = 
STRING_LENGTH(BgL_stringz00_25); 
if(
BOUND_CHECK(BgL_i2083z00_2591, BgL_l2084z00_2592))
{ /* Llib/bigloo.scm 604 */
BgL_tmpz00_3482 = 
STRING_REF(BgL_stringz00_25, BgL_i2083z00_2591)
; }  else 
{ 
obj_t BgL_auxz00_3488;
BgL_auxz00_3488 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)22533)), BGl_string2167z00zz__biglooz00, BgL_stringz00_25, 
(int)(BgL_l2084z00_2592), 
(int)(BgL_i2083z00_2591)); 
FAILURE(BgL_auxz00_3488,BFALSE,BFALSE);} } } 
BgL_test2384z00_3481 = 
(BgL_tmpz00_3482==((unsigned char)'b')); } 
if(BgL_test2384z00_3481)
{ /* Llib/bigloo.scm 605 */
bool_t BgL_test2386z00_3495;
{ /* Llib/bigloo.scm 605 */
unsigned char BgL_tmpz00_3496;
{ /* Llib/bigloo.scm 605 */
long BgL_i2087z00_2595;
BgL_i2087z00_2595 = 
(BgL_lenz00_1284-((long)5)); 
{ /* Llib/bigloo.scm 605 */
long BgL_l2088z00_2596;
BgL_l2088z00_2596 = 
STRING_LENGTH(BgL_stringz00_25); 
if(
BOUND_CHECK(BgL_i2087z00_2595, BgL_l2088z00_2596))
{ /* Llib/bigloo.scm 605 */
BgL_tmpz00_3496 = 
STRING_REF(BgL_stringz00_25, BgL_i2087z00_2595)
; }  else 
{ 
obj_t BgL_auxz00_3502;
BgL_auxz00_3502 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)22582)), BGl_string2167z00zz__biglooz00, BgL_stringz00_25, 
(int)(BgL_l2088z00_2596), 
(int)(BgL_i2087z00_2595)); 
FAILURE(BgL_auxz00_3502,BFALSE,BFALSE);} } } 
BgL_test2386z00_3495 = 
(BgL_tmpz00_3496==((unsigned char)'_')); } 
if(BgL_test2386z00_3495)
{ /* Llib/bigloo.scm 605 */
return 
bigloo_mangledp(
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_25, ((long)0), 
(BgL_lenz00_1284-((long)5))));}  else 
{ /* Llib/bigloo.scm 605 */
return ((bool_t)0);} }  else 
{ /* Llib/bigloo.scm 604 */
return ((bool_t)0);} }  else 
{ /* Llib/bigloo.scm 603 */
return ((bool_t)0);} }  else 
{ /* Llib/bigloo.scm 602 */
return ((bool_t)0);} }  else 
{ /* Llib/bigloo.scm 601 */
return ((bool_t)0);} }  else 
{ /* Llib/bigloo.scm 600 */
return ((bool_t)0);} } } 

}



/* &bigloo-class-mangled? */
obj_t BGl_z62bigloozd2classzd2mangledzf3z91zz__biglooz00(obj_t BgL_envz00_2430, obj_t BgL_stringz00_2431)
{
{ /* Llib/bigloo.scm 598 */
{ /* Llib/bigloo.scm 599 */
bool_t BgL_tmpz00_3512;
{ /* Llib/bigloo.scm 599 */
obj_t BgL_auxz00_3513;
if(
STRINGP(BgL_stringz00_2431))
{ /* Llib/bigloo.scm 599 */
BgL_auxz00_3513 = BgL_stringz00_2431
; }  else 
{ 
obj_t BgL_auxz00_3516;
BgL_auxz00_3516 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)22315)), BGl_string2184z00zz__biglooz00, BGl_string2160z00zz__biglooz00, BgL_stringz00_2431); 
FAILURE(BgL_auxz00_3516,BFALSE,BFALSE);} 
BgL_tmpz00_3512 = 
bigloo_class_mangledp(BgL_auxz00_3513); } 
return 
BBOOL(BgL_tmpz00_3512);} } 

}



/* bigloo-class-demangle */
BGL_EXPORTED_DEF obj_t bigloo_class_demangle(obj_t BgL_stringz00_26)
{
{ /* Llib/bigloo.scm 611 */
{ /* Llib/bigloo.scm 613 */
obj_t BgL_arg1370z00_1303;
BgL_arg1370z00_1303 = 
bigloo_demangle(
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_26, ((long)0), 
(
STRING_LENGTH(BgL_stringz00_26)-((long)5)))); 
{ /* Llib/bigloo.scm 612 */
obj_t BgL_tmpz00_3526;
if(
STRINGP(BgL_arg1370z00_1303))
{ /* Llib/bigloo.scm 612 */
BgL_tmpz00_3526 = BgL_arg1370z00_1303
; }  else 
{ 
obj_t BgL_auxz00_3529;
BgL_auxz00_3529 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)22945)), BGl_string2185z00zz__biglooz00, BGl_string2160z00zz__biglooz00, BgL_arg1370z00_1303); 
FAILURE(BgL_auxz00_3529,BFALSE,BFALSE);} 
return 
string_append(BgL_tmpz00_3526, BGl_string2186z00zz__biglooz00);} } } 

}



/* &bigloo-class-demangle */
obj_t BGl_z62bigloozd2classzd2demanglez62zz__biglooz00(obj_t BgL_envz00_2432, obj_t BgL_stringz00_2433)
{
{ /* Llib/bigloo.scm 611 */
{ /* Llib/bigloo.scm 613 */
obj_t BgL_auxz00_3534;
if(
STRINGP(BgL_stringz00_2433))
{ /* Llib/bigloo.scm 613 */
BgL_auxz00_3534 = BgL_stringz00_2433
; }  else 
{ 
obj_t BgL_auxz00_3537;
BgL_auxz00_3537 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)23007)), BGl_string2187z00zz__biglooz00, BGl_string2160z00zz__biglooz00, BgL_stringz00_2433); 
FAILURE(BgL_auxz00_3537,BFALSE,BFALSE);} 
return 
bigloo_class_demangle(BgL_auxz00_3534);} } 

}



/* bigloo-exit-mutex */
BGL_EXPORTED_DEF obj_t bgl_exit_mutex()
{
{ /* Llib/bigloo.scm 624 */
return BGl_za2exitzd2mutexza2zd2zz__biglooz00;} 

}



/* &bigloo-exit-mutex */
obj_t BGl_z62bigloozd2exitzd2mutexz62zz__biglooz00(obj_t BgL_envz00_2434)
{
{ /* Llib/bigloo.scm 624 */
return 
bgl_exit_mutex();} 

}



/* register-exit-function! */
BGL_EXPORTED_DEF obj_t BGl_registerzd2exitzd2functionz12z12zz__biglooz00(obj_t BgL_funz00_27)
{
{ /* Llib/bigloo.scm 635 */
{ /* Llib/bigloo.scm 636 */
obj_t BgL_mutex1374z00_1307;
BgL_mutex1374z00_1307 = BGl_za2exitzd2mutexza2zd2zz__biglooz00; 
{ /* Llib/bigloo.scm 636 */
obj_t BgL_top2392z00_3544;
BgL_top2392z00_3544 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BgL_mutex1374z00_1307); 
BGL_EXITD_PUSH_PROTECT(BgL_top2392z00_3544, BgL_mutex1374z00_1307); BUNSPEC; 
{ /* Llib/bigloo.scm 636 */
obj_t BgL_tmp2391z00_3543;
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_27, 
(int)(((long)1))))
{ /* Llib/bigloo.scm 637 */
BgL_tmp2391z00_3543 = ( 
BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00 = 
MAKE_YOUNG_PAIR(BgL_funz00_27, BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00), BUNSPEC) ; }  else 
{ /* Llib/bigloo.scm 637 */
BgL_tmp2391z00_3543 = 
BGl_errorz00zz__errorz00(BGl_string2188z00zz__biglooz00, BGl_string2189z00zz__biglooz00, BgL_funz00_27); } 
BGL_EXITD_POP_PROTECT(BgL_top2392z00_3544); BUNSPEC; 
BGL_MUTEX_UNLOCK(BgL_mutex1374z00_1307); 
return BgL_tmp2391z00_3543;} } } } 

}



/* &register-exit-function! */
obj_t BGl_z62registerzd2exitzd2functionz12z70zz__biglooz00(obj_t BgL_envz00_2435, obj_t BgL_funz00_2436)
{
{ /* Llib/bigloo.scm 635 */
{ /* Llib/bigloo.scm 636 */
obj_t BgL_auxz00_3555;
if(
PROCEDUREP(BgL_funz00_2436))
{ /* Llib/bigloo.scm 636 */
BgL_auxz00_3555 = BgL_funz00_2436
; }  else 
{ 
obj_t BgL_auxz00_3558;
BgL_auxz00_3558 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)24112)), BGl_string2190z00zz__biglooz00, BGl_string2162z00zz__biglooz00, BgL_funz00_2436); 
FAILURE(BgL_auxz00_3558,BFALSE,BFALSE);} 
return 
BGl_registerzd2exitzd2functionz12z12zz__biglooz00(BgL_auxz00_3555);} } 

}



/* unregister-exit-function! */
BGL_EXPORTED_DEF obj_t BGl_unregisterzd2exitzd2functionz12z12zz__biglooz00(obj_t BgL_funz00_28)
{
{ /* Llib/bigloo.scm 646 */
{ /* Llib/bigloo.scm 647 */
obj_t BgL_mutex1376z00_2125;
BgL_mutex1376z00_2125 = BGl_za2exitzd2mutexza2zd2zz__biglooz00; 
{ /* Llib/bigloo.scm 647 */
obj_t BgL_top2396z00_3564;
BgL_top2396z00_3564 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BgL_mutex1376z00_2125); 
BGL_EXITD_PUSH_PROTECT(BgL_top2396z00_3564, BgL_mutex1376z00_2125); BUNSPEC; 
{ /* Llib/bigloo.scm 647 */
obj_t BgL_tmp2395z00_3563;
{ /* Llib/bigloo.scm 648 */
obj_t BgL_auxz00_3568;
{ /* Llib/bigloo.scm 648 */
obj_t BgL_aux2142z00_2651;
BgL_aux2142z00_2651 = BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00; 
{ /* Llib/bigloo.scm 648 */
bool_t BgL_test2397z00_3569;
if(
PAIRP(BgL_aux2142z00_2651))
{ /* Llib/bigloo.scm 648 */
BgL_test2397z00_3569 = ((bool_t)1)
; }  else 
{ /* Llib/bigloo.scm 648 */
BgL_test2397z00_3569 = 
NULLP(BgL_aux2142z00_2651)
; } 
if(BgL_test2397z00_3569)
{ /* Llib/bigloo.scm 648 */
BgL_auxz00_3568 = BgL_aux2142z00_2651
; }  else 
{ 
obj_t BgL_auxz00_3573;
BgL_auxz00_3573 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)24677)), BGl_string2191z00zz__biglooz00, BGl_string2192z00zz__biglooz00, BgL_aux2142z00_2651); 
FAILURE(BgL_auxz00_3573,BFALSE,BFALSE);} } } 
BgL_tmp2395z00_3563 = ( 
BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00 = 
bgl_remq_bang(BgL_funz00_28, BgL_auxz00_3568), BUNSPEC) ; } 
BGL_EXITD_POP_PROTECT(BgL_top2396z00_3564); BUNSPEC; 
BGL_MUTEX_UNLOCK(BgL_mutex1376z00_2125); 
return BgL_tmp2395z00_3563;} } } } 

}



/* &unregister-exit-function! */
obj_t BGl_z62unregisterzd2exitzd2functionz12z70zz__biglooz00(obj_t BgL_envz00_2437, obj_t BgL_funz00_2438)
{
{ /* Llib/bigloo.scm 646 */
{ /* Llib/bigloo.scm 647 */
obj_t BgL_auxz00_3580;
if(
PROCEDUREP(BgL_funz00_2438))
{ /* Llib/bigloo.scm 647 */
BgL_auxz00_3580 = BgL_funz00_2438
; }  else 
{ 
obj_t BgL_auxz00_3583;
BgL_auxz00_3583 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)24597)), BGl_string2193z00zz__biglooz00, BGl_string2162z00zz__biglooz00, BgL_funz00_2438); 
FAILURE(BgL_auxz00_3583,BFALSE,BFALSE);} 
return 
BGl_unregisterzd2exitzd2functionz12z12zz__biglooz00(BgL_auxz00_3580);} } 

}



/* bigloo-exit-apply */
BGL_EXPORTED_DEF obj_t bigloo_exit_apply(obj_t BgL_valz00_29)
{
{ /* Llib/bigloo.scm 653 */
{ /* Llib/bigloo.scm 654 */
obj_t BgL_mutz00_1310;
{ /* Llib/bigloo.scm 654 */
bool_t BgL_test2400z00_3588;
{ /* Llib/bigloo.scm 654 */
obj_t BgL_arg1384z00_1324;
BgL_arg1384z00_1324 = BGl_za2exitzd2mutexza2zd2zz__biglooz00; 
{ /* Llib/bigloo.scm 654 */
bool_t BgL_res1893z00_2126;
BgL_res1893z00_2126 = 
BGL_MUTEXP(BgL_arg1384z00_1324); 
BgL_test2400z00_3588 = BgL_res1893z00_2126; } } 
if(BgL_test2400z00_3588)
{ /* Llib/bigloo.scm 654 */
BgL_mutz00_1310 = BGl_za2exitzd2mutexza2zd2zz__biglooz00; }  else 
{ /* Llib/bigloo.scm 656 */
obj_t BgL_res1894z00_2128;
BgL_res1894z00_2128 = 
bgl_make_mutex(BGl_symbol2152z00zz__biglooz00); 
BgL_mutz00_1310 = BgL_res1894z00_2128; } } 
{ /* Llib/bigloo.scm 657 */
obj_t BgL_top2402z00_3592;
BgL_top2402z00_3592 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BgL_mutz00_1310); 
BGL_EXITD_PUSH_PROTECT(BgL_top2402z00_3592, BgL_mutz00_1310); BUNSPEC; 
{ /* Llib/bigloo.scm 657 */
obj_t BgL_tmp2401z00_3591;
{ 
obj_t BgL_valz00_1312;
BgL_valz00_1312 = BgL_valz00_29; 
BgL_zc3z04anonymousza31377ze3z87_1313:
{ /* Llib/bigloo.scm 659 */
obj_t BgL_valz00_1314;
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_valz00_1312))
{ /* Llib/bigloo.scm 659 */
BgL_valz00_1314 = BgL_valz00_1312; }  else 
{ /* Llib/bigloo.scm 659 */
BgL_valz00_1314 = 
BINT(((long)0)); } 
if(
PAIRP(BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00))
{ /* Llib/bigloo.scm 663 */
obj_t BgL_funz00_1316;
BgL_funz00_1316 = 
CAR(BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00); 
BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00 = 
CDR(BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00); 
{ /* Llib/bigloo.scm 666 */
obj_t BgL_nvalz00_1317;
{ /* Llib/bigloo.scm 666 */
obj_t BgL_funz00_2657;
if(
PROCEDUREP(BgL_funz00_1316))
{ /* Llib/bigloo.scm 666 */
BgL_funz00_2657 = BgL_funz00_1316; }  else 
{ 
obj_t BgL_auxz00_3605;
BgL_auxz00_3605 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)25352)), BGl_string2180z00zz__biglooz00, BGl_string2162z00zz__biglooz00, BgL_funz00_1316); 
FAILURE(BgL_auxz00_3605,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2657, ((long)1)))
{ /* Llib/bigloo.scm 666 */
BgL_nvalz00_1317 = 
PROCEDURE_ENTRY(BgL_funz00_2657)(BgL_funz00_1316, BgL_valz00_1314, BEOA); }  else 
{ /* Llib/bigloo.scm 666 */
FAILURE(BGl_string2194z00zz__biglooz00,BGl_list2195z00zz__biglooz00,BgL_funz00_2657);} } 
{ /* Llib/bigloo.scm 667 */
obj_t BgL_arg1379z00_1318;
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_nvalz00_1317))
{ /* Llib/bigloo.scm 667 */
BgL_arg1379z00_1318 = BgL_nvalz00_1317; }  else 
{ /* Llib/bigloo.scm 667 */
BgL_arg1379z00_1318 = BgL_valz00_1314; } 
{ 
obj_t BgL_valz00_3618;
BgL_valz00_3618 = BgL_arg1379z00_1318; 
BgL_valz00_1312 = BgL_valz00_3618; 
goto BgL_zc3z04anonymousza31377ze3z87_1313;} } } }  else 
{ /* Llib/bigloo.scm 662 */
BgL_tmp2401z00_3591 = BgL_valz00_1314; } } } 
BGL_EXITD_POP_PROTECT(BgL_top2402z00_3592); BUNSPEC; 
BGL_MUTEX_UNLOCK(BgL_mutz00_1310); 
return BgL_tmp2401z00_3591;} } } } 

}



/* &bigloo-exit-apply */
obj_t BGl_z62bigloozd2exitzd2applyz62zz__biglooz00(obj_t BgL_envz00_2439, obj_t BgL_valz00_2440)
{
{ /* Llib/bigloo.scm 653 */
return 
bigloo_exit_apply(BgL_valz00_2440);} 

}



/* time */
BGL_EXPORTED_DEF obj_t BGl_timez00zz__biglooz00(obj_t BgL_procz00_30)
{
{ /* Llib/bigloo.scm 673 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_30, 
(int)(((long)0))))
{ /* Llib/bigloo.scm 674 */
return 
bgl_time(BgL_procz00_30);}  else 
{ /* Llib/bigloo.scm 674 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2202z00zz__biglooz00, BGl_string2189z00zz__biglooz00, BgL_procz00_30);} } 

}



/* &time */
obj_t BGl_z62timez62zz__biglooz00(obj_t BgL_envz00_2441, obj_t BgL_procz00_2442)
{
{ /* Llib/bigloo.scm 673 */
{ /* Llib/bigloo.scm 674 */
obj_t BgL_auxz00_3627;
if(
PROCEDUREP(BgL_procz00_2442))
{ /* Llib/bigloo.scm 674 */
BgL_auxz00_3627 = BgL_procz00_2442
; }  else 
{ 
obj_t BgL_auxz00_3630;
BgL_auxz00_3630 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2155z00zz__biglooz00, 
BINT(((long)25668)), BGl_string2204z00zz__biglooz00, BGl_string2162z00zz__biglooz00, BgL_procz00_2442); 
FAILURE(BgL_auxz00_3630,BFALSE,BFALSE);} 
return 
BGl_timez00zz__biglooz00(BgL_auxz00_3627);} } 

}



/* bmem-reset! */
BGL_EXPORTED_DEF obj_t BGl_bmemzd2resetz12zc0zz__biglooz00()
{
{ /* Llib/bigloo.scm 685 */
return 
bgl_bmem_reset();} 

}



/* &bmem-reset! */
obj_t BGl_z62bmemzd2resetz12za2zz__biglooz00(obj_t BgL_envz00_2443)
{
{ /* Llib/bigloo.scm 685 */
return 
BGl_bmemzd2resetz12zc0zz__biglooz00();} 

}



/* bigloo-gc-verbose-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2gczd2verbosezd2setz12zc0zz__biglooz00(bool_t BgL_procz00_31)
{
{ /* Llib/bigloo.scm 693 */
bgl_gc_verbose_set(BgL_procz00_31); 
return BUNSPEC;} 

}



/* &bigloo-gc-verbose-set! */
obj_t BGl_z62bigloozd2gczd2verbosezd2setz12za2zz__biglooz00(obj_t BgL_envz00_2444, obj_t BgL_procz00_2445)
{
{ /* Llib/bigloo.scm 693 */
return 
BGl_bigloozd2gczd2verbosezd2setz12zc0zz__biglooz00(
CBOOL(BgL_procz00_2445));} 

}



/* make-cell */
BGL_EXPORTED_DEF obj_t BGl_makezd2cellzd2zz__biglooz00(obj_t BgL_valz00_32)
{
{ /* Llib/bigloo.scm 701 */
return 
MAKE_YOUNG_CELL(BgL_valz00_32);} 

}



/* &make-cell */
obj_t BGl_z62makezd2cellzb0zz__biglooz00(obj_t BgL_envz00_2446, obj_t BgL_valz00_2447)
{
{ /* Llib/bigloo.scm 701 */
return 
BGl_makezd2cellzd2zz__biglooz00(BgL_valz00_2447);} 

}



/* cell? */
BGL_EXPORTED_DEF obj_t BGl_cellzf3zf3zz__biglooz00(obj_t BgL_objz00_33)
{
{ /* Llib/bigloo.scm 707 */
return 
BBOOL(
CELLP(BgL_objz00_33));} 

}



/* &cell? */
obj_t BGl_z62cellzf3z91zz__biglooz00(obj_t BgL_envz00_2448, obj_t BgL_objz00_2449)
{
{ /* Llib/bigloo.scm 707 */
return 
BGl_cellzf3zf3zz__biglooz00(BgL_objz00_2449);} 

}



/* cell-ref */
BGL_EXPORTED_DEF obj_t BGl_cellzd2refzd2zz__biglooz00(obj_t BgL_cellz00_34)
{
{ /* Llib/bigloo.scm 713 */
return 
CELL_REF(BgL_cellz00_34);} 

}



/* &cell-ref */
obj_t BGl_z62cellzd2refzb0zz__biglooz00(obj_t BgL_envz00_2450, obj_t BgL_cellz00_2451)
{
{ /* Llib/bigloo.scm 713 */
return 
BGl_cellzd2refzd2zz__biglooz00(BgL_cellz00_2451);} 

}



/* cell-set! */
BGL_EXPORTED_DEF obj_t BGl_cellzd2setz12zc0zz__biglooz00(obj_t BgL_cellz00_35, obj_t BgL_valz00_36)
{
{ /* Llib/bigloo.scm 719 */
return 
CELL_SET(BgL_cellz00_35, BgL_valz00_36);} 

}



/* &cell-set! */
obj_t BGl_z62cellzd2setz12za2zz__biglooz00(obj_t BgL_envz00_2452, obj_t BgL_cellz00_2453, obj_t BgL_valz00_2454)
{
{ /* Llib/bigloo.scm 719 */
return 
BGl_cellzd2setz12zc0zz__biglooz00(BgL_cellz00_2453, BgL_valz00_2454);} 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__biglooz00()
{
{ /* Llib/bigloo.scm 14 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__biglooz00()
{
{ /* Llib/bigloo.scm 14 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__biglooz00()
{
{ /* Llib/bigloo.scm 14 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__biglooz00()
{
{ /* Llib/bigloo.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string2205z00zz__biglooz00)); 
BGl_modulezd2initializa7ationz75zz__configurez00(((long)62374350), 
BSTRING_TO_STRING(BGl_string2205z00zz__biglooz00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string2205z00zz__biglooz00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)193422032), 
BSTRING_TO_STRING(BGl_string2205z00zz__biglooz00)); 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)224967910), 
BSTRING_TO_STRING(BGl_string2205z00zz__biglooz00)); 
return 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)340267996), 
BSTRING_TO_STRING(BGl_string2205z00zz__biglooz00));} 

}

#ifdef __cplusplus
}
#endif
