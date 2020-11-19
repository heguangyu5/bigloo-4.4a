/*===========================================================================*/
/*   (Ieee/vector.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Ieee/vector.scm -indent -o objs/obj_s/Ieee/vector.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_symbol2000z00zz__r4_vectors_6_8z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
static obj_t BGl_symbol2005z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_symbol2006z00zz__r4_vectors_6_8z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_vectorzd2copyz12zc0zz__r4_vectors_6_8z00(obj_t, long, obj_t, obj_t, obj_t);
static obj_t BGl_symbol2009z00zz__r4_vectors_6_8z00 = BUNSPEC;
extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl__vectorzd2fillz12zc0zz__r4_vectors_6_8z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_vectorzd2copy3zd2zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2011z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza31329ze3ze5zz__r4_vectors_6_8z00(obj_t, obj_t);
static obj_t BGl_symbol2016z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_symbol2019z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_z62sortz62zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
static obj_t BGl_vectorzd2mapNz12zc0zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31354ze3ze5zz__r4_vectors_6_8z00(obj_t, obj_t);
static obj_t BGl_symbol2103z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_requirezd2initializa7ationz75zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_symbol2024z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_symbol2027z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_z62listzd2ze3vectorz53zz__r4_vectors_6_8z00(obj_t, obj_t);
static obj_t BGl_symbol1933z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_innerzd2sortzd2zz__r4_vectors_6_8z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_vectorzd2shrinkz12zc0zz__r4_vectors_6_8z00(obj_t, long);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol2113z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2002z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2003z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_symbol2035z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2004z00zz__r4_vectors_6_8z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
static obj_t BGl_symbol2038z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2008z00zz__r4_vectors_6_8z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
static obj_t BGl_symbol2041z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_symbol2044z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2013z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2014z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2015z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_symbol2047z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2018z00zz__r4_vectors_6_8z00 = BUNSPEC;
BGL_EXPORTED_DECL long BGl_vectorzd2lengthzd2zz__r4_vectors_6_8z00(obj_t);
extern obj_t BGl_everyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol1952z00zz__r4_vectors_6_8z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00(obj_t, obj_t, long, long);
static obj_t BGl_vectorzd2map2z12zc0zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62vectorzd2setz12za2zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_vectorzd2appendzd2zz__r4_vectors_6_8z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_vectorzd2tagzd2setz12z12zz__r4_vectors_6_8z00(obj_t, int);
static obj_t BGl_list2100z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_symbol2050z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2101z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2102z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2021z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl__makezd2vectorzd2zz__r4_vectors_6_8z00(obj_t, obj_t);
static obj_t BGl_list2022z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2023z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2105z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_symbol2055z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_z62vectorzd2tagzd2setz12z70zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
static obj_t BGl_list2106z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2107z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2026z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2108z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_symbol2058z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2109z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2029z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_z62vectorzd2setzd2urz12z70zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol1968z00zz__r4_vectors_6_8z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_vectorzd2refzd2urz00zz__r4_vectors_6_8z00(obj_t, long);
static obj_t BGl_cnstzd2initzd2zz__r4_vectors_6_8z00();
static obj_t BGl_list2110z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_symbol2060z00zz__r4_vectors_6_8z00 = BUNSPEC;
extern long bgl_list_length(obj_t);
static obj_t BGl_list2111z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2112z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_symbol2063z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2032z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2033z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2115z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2034z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_symbol2066z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2037z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_z62vectorzd2mapz12za2zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t, obj_t);
extern obj_t sort_vector(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_vectorzf3zf3zz__r4_vectors_6_8z00(obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__r4_vectors_6_8z00();
static obj_t BGl_z62vectorz62zz__r4_vectors_6_8z00(obj_t, obj_t);
static obj_t BGl_z62vectorzf3z91zz__r4_vectors_6_8z00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_vectors_6_8z00();
BGL_EXPORTED_DECL obj_t BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(obj_t, long);
static obj_t BGl_list2040z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2043z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_z62vectorzd2copyzb0zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2076z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2046z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_symbol1980z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2049z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_symbol1982z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_symbol1984z00zz__r4_vectors_6_8z00 = BUNSPEC;
extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_vectorzd2tagzd2zz__r4_vectors_6_8z00(obj_t);
static bool_t BGl_vectorzd2forzd2each2z00zz__r4_vectors_6_8z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_vectorzd2refzd2zz__r4_vectors_6_8z00(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_makezd2vectorzd2zz__r4_vectors_6_8z00(long, obj_t);
static obj_t BGl_symbol2083z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2052z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2053z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2054z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2057z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_symbol2089z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_symbol1990z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_symbol1993z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_z62vectorzd2lengthzb0zz__r4_vectors_6_8z00(obj_t, obj_t);
static obj_t BGl_symbol1996z00zz__r4_vectors_6_8z00 = BUNSPEC;
static bool_t BGl_vectorzd2forzd2eachNz00zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62vectorzd2appendzb0zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2092z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2062z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2065z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_symbol2097z00zz__r4_vectors_6_8z00 = BUNSPEC;
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_list1979z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_z62vectorzd2refzd2urz62zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_vectorzd2mapzd2zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62vectorzd2tagzb0zz__r4_vectors_6_8z00(obj_t, obj_t);
static obj_t BGl_z62vectorzd2refzb0zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
extern obj_t make_vector(long, obj_t);
static obj_t BGl_list2075z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2079z00zz__r4_vectors_6_8z00 = BUNSPEC;
extern obj_t bgl_fill_vector(obj_t, long, long, obj_t);
static obj_t BGl_list2080z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2081z00zz__r4_vectors_6_8z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_vectorzd2setzd2urz12z12zz__r4_vectors_6_8z00(obj_t, long, obj_t);
static obj_t BGl_list2082z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2085z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2086z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2087z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2088z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list1992z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list1995z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list1998z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list1999z00zz__r4_vectors_6_8z00 = BUNSPEC;
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, int, int);
static obj_t BGl__vectorzd2copyz12zc0zz__r4_vectors_6_8z00(obj_t, obj_t);
static obj_t BGl_z62vectorzd2mapzb0zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list2091z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2094z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2095z00zz__r4_vectors_6_8z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_vectorzd2forzd2eachz00zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
static obj_t BGl_list2096z00zz__r4_vectors_6_8z00 = BUNSPEC;
static obj_t BGl_list2099z00zz__r4_vectors_6_8z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_vectorzd2setz12zc0zz__r4_vectors_6_8z00(obj_t, long, obj_t);
BGL_EXPORTED_DECL obj_t BGl_vectorz00zz__r4_vectors_6_8z00(obj_t);
static obj_t BGl_z62vectorzd2forzd2eachz62zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31317ze3ze5zz__r4_vectors_6_8z00(obj_t, obj_t);
extern obj_t BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62vectorzd2shrinkz12za2zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_vectorzd2mapz12zc0zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62vectorzd2ze3listz53zz__r4_vectors_6_8z00(obj_t, obj_t);
static obj_t BGl_z62vectorzd2copy3zb0zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_vectorzd2copyzd2zz__r4_vectors_6_8z00(obj_t, obj_t);
static obj_t BGl_z62copyzd2vectorzb0zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_STRING( BGl_string2120z00zz__r4_vectors_6_8z00, BgL_bgl_string2120za700za7za7_2122za7, "__r4_vectors_6_8", 16 );
DEFINE_STRING( BGl_string2042z00zz__r4_vectors_6_8z00, BgL_bgl_string2042za700za7za7_2123za7, "if", 2 );
DEFINE_STRING( BGl_string2045z00zz__r4_vectors_6_8z00, BgL_bgl_string2045za700za7za7_2124za7, "vref", 4 );
DEFINE_STRING( BGl_string2048z00zz__r4_vectors_6_8z00, BgL_bgl_string2048za700za7za7_2125za7, "failure", 7 );
DEFINE_STRING( BGl_string1950z00zz__r4_vectors_6_8z00, BgL_bgl_string1950za700za7za7_2126za7, "pair", 4 );
DEFINE_STRING( BGl_string1951z00zz__r4_vectors_6_8z00, BgL_bgl_string1951za700za7za7_2127za7, "&list->vector", 13 );
DEFINE_STRING( BGl_string1953z00zz__r4_vectors_6_8z00, BgL_bgl_string1953za700za7za7_2128za7, "vector-fill!", 12 );
DEFINE_STRING( BGl_string1954z00zz__r4_vectors_6_8z00, BgL_bgl_string1954za700za7za7_2129za7, "wrong number of arguments: [2..4] expected, provided", 52 );
DEFINE_STRING( BGl_string1955z00zz__r4_vectors_6_8z00, BgL_bgl_string1955za700za7za7_2130za7, "_vector-fill!", 13 );
DEFINE_STRING( BGl_string1956z00zz__r4_vectors_6_8z00, BgL_bgl_string1956za700za7za7_2131za7, "wrong negative start", 20 );
DEFINE_STRING( BGl_string1957z00zz__r4_vectors_6_8z00, BgL_bgl_string1957za700za7za7_2132za7, "end index too large", 19 );
DEFINE_STRING( BGl_string1958z00zz__r4_vectors_6_8z00, BgL_bgl_string1958za700za7za7_2133za7, "start index larger than end", 27 );
DEFINE_STRING( BGl_string1959z00zz__r4_vectors_6_8z00, BgL_bgl_string1959za700za7za7_2134za7, "&vector-tag", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2mapzd2envz00zz__r4_vectors_6_8z00, BgL_bgl_za762vectorza7d2mapza72135za7, va_generic_entry, BGl_z62vectorzd2mapzb0zz__r4_vectors_6_8z00, BUNSPEC, -3 );
DEFINE_STRING( BGl_string2051z00zz__r4_vectors_6_8z00, BgL_bgl_string2051za700za7za7_2136za7, "index-out-of-bounds-error", 25 );
DEFINE_STRING( BGl_string2056z00zz__r4_vectors_6_8z00, BgL_bgl_string2056za700za7za7_2137za7, "list1301", 8 );
DEFINE_STRING( BGl_string2059z00zz__r4_vectors_6_8z00, BgL_bgl_string2059za700za7za7_2138za7, "$cons", 5 );
DEFINE_STRING( BGl_string1960z00zz__r4_vectors_6_8z00, BgL_bgl_string1960za700za7za7_2139za7, "&vector-tag-set!", 16 );
DEFINE_STRING( BGl_string1961z00zz__r4_vectors_6_8z00, BgL_bgl_string1961za700za7za7_2140za7, "&copy-vector", 12 );
DEFINE_STRING( BGl_string1962z00zz__r4_vectors_6_8z00, BgL_bgl_string1962za700za7za7_2141za7, "vector-copy3", 12 );
DEFINE_STRING( BGl_string1963z00zz__r4_vectors_6_8z00, BgL_bgl_string1963za700za7za7_2142za7, "vector-copy", 11 );
DEFINE_STRING( BGl_string1964z00zz__r4_vectors_6_8z00, BgL_bgl_string1964za700za7za7_2143za7, "Illegal indexes", 15 );
DEFINE_STRING( BGl_string1965z00zz__r4_vectors_6_8z00, BgL_bgl_string1965za700za7za7_2144za7, "&vector-copy3", 13 );
DEFINE_STRING( BGl_string1966z00zz__r4_vectors_6_8z00, BgL_bgl_string1966za700za7za7_2145za7, "Illegal argument", 16 );
DEFINE_STRING( BGl_string1967z00zz__r4_vectors_6_8z00, BgL_bgl_string1967za700za7za7_2146za7, "&vector-copy", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2shrinkz12zd2envz12zz__r4_vectors_6_8z00, BgL_bgl_za762vectorza7d2shri2147z00, BGl_z62vectorzd2shrinkz12za2zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1969z00zz__r4_vectors_6_8z00, BgL_bgl_string1969za700za7za7_2148za7, "vector-copy!", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_copyzd2vectorzd2envz00zz__r4_vectors_6_8z00, BgL_bgl_za762copyza7d2vector2149z00, BGl_z62copyzd2vectorzb0zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sortzd2envzd2zz__r4_vectors_6_8z00, BgL_bgl_za762sortza762za7za7__r42150z00, BGl_z62sortz62zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2061z00zz__r4_vectors_6_8z00, BgL_bgl_string2061za700za7za7_2151za7, "args", 4 );
DEFINE_STRING( BGl_string2064z00zz__r4_vectors_6_8z00, BgL_bgl_string2064za700za7za7_2152za7, "quote", 5 );
DEFINE_STRING( BGl_string2067z00zz__r4_vectors_6_8z00, BgL_bgl_string2067za700za7za7_2153za7, "cons*", 5 );
DEFINE_STRING( BGl_string2068z00zz__r4_vectors_6_8z00, BgL_bgl_string2068za700za7za7_2154za7, "vector-map", 10 );
DEFINE_STRING( BGl_string2069z00zz__r4_vectors_6_8z00, BgL_bgl_string2069za700za7za7_2155za7, "Illegal arguments", 17 );
DEFINE_STRING( BGl_string1970z00zz__r4_vectors_6_8z00, BgL_bgl_string1970za700za7za7_2156za7, "wrong number of arguments: [3..5] expected, provided", 52 );
DEFINE_STRING( BGl_string1971z00zz__r4_vectors_6_8z00, BgL_bgl_string1971za700za7za7_2157za7, "_vector-copy!", 13 );
DEFINE_STRING( BGl_string1972z00zz__r4_vectors_6_8z00, BgL_bgl_string1972za700za7za7_2158za7, "&vector-append", 14 );
DEFINE_STRING( BGl_string1973z00zz__r4_vectors_6_8z00, BgL_bgl_string1973za700za7za7_2159za7, "sort", 4 );
DEFINE_STRING( BGl_string1974z00zz__r4_vectors_6_8z00, BgL_bgl_string1974za700za7za7_2160za7, "procedure", 9 );
DEFINE_STRING( BGl_string1975z00zz__r4_vectors_6_8z00, BgL_bgl_string1975za700za7za7_2161za7, "Object must be a list or a vector", 33 );
DEFINE_STRING( BGl_string1976z00zz__r4_vectors_6_8z00, BgL_bgl_string1976za700za7za7_2162za7, "inner-sort", 10 );
DEFINE_STRING( BGl_string1977z00zz__r4_vectors_6_8z00, BgL_bgl_string1977za700za7za7_2163za7, "vector-map2!", 12 );
DEFINE_STRING( BGl_string1978z00zz__r4_vectors_6_8z00, BgL_bgl_string1978za700za7za7_2164za7, "loop:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string2070z00zz__r4_vectors_6_8z00, BgL_bgl_string2070za700za7za7_2165za7, "&vector-map", 11 );
DEFINE_STRING( BGl_string2071z00zz__r4_vectors_6_8z00, BgL_bgl_string2071za700za7za7_2166za7, "&<@anonymous:1317>", 18 );
DEFINE_STRING( BGl_string2072z00zz__r4_vectors_6_8z00, BgL_bgl_string2072za700za7za7_2167za7, "vector-map!", 11 );
DEFINE_STRING( BGl_string2073z00zz__r4_vectors_6_8z00, BgL_bgl_string2073za700za7za7_2168za7, "&vector-map!", 12 );
DEFINE_STRING( BGl_string2074z00zz__r4_vectors_6_8z00, BgL_bgl_string2074za700za7za7_2169za7, "&<@anonymous:1329>", 18 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2fillz12zd2envz12zz__r4_vectors_6_8z00, BgL_bgl__vectorza7d2fillza712170z00, opt_generic_entry, BGl__vectorzd2fillz12zc0zz__r4_vectors_6_8z00, BFALSE, -1 );
DEFINE_STRING( BGl_string2077z00zz__r4_vectors_6_8z00, BgL_bgl_string2077za700za7za7_2171za7, "arg1333", 7 );
DEFINE_STRING( BGl_string2078z00zz__r4_vectors_6_8z00, BgL_bgl_string2078za700za7za7_2172za7, "<@anonymous:1341>", 17 );
DEFINE_STRING( BGl_string1981z00zz__r4_vectors_6_8z00, BgL_bgl_string1981za700za7za7_2173za7, "funcall", 7 );
DEFINE_STRING( BGl_string1983z00zz__r4_vectors_6_8z00, BgL_bgl_string1983za700za7za7_2174za7, "proc", 4 );
DEFINE_STRING( BGl_string1985z00zz__r4_vectors_6_8z00, BgL_bgl_string1985za700za7za7_2175za7, "arg1295", 7 );
DEFINE_STRING( BGl_string1986z00zz__r4_vectors_6_8z00, BgL_bgl_string1986za700za7za7_2176za7, "vector-mapN!", 12 );
DEFINE_STRING( BGl_string1987z00zz__r4_vectors_6_8z00, BgL_bgl_string1987za700za7za7_2177za7, "<@anonymous:1303>", 17 );
DEFINE_STRING( BGl_string1988z00zz__r4_vectors_6_8z00, BgL_bgl_string1988za700za7za7_2178za7, "map", 3 );
DEFINE_STRING( BGl_string1989z00zz__r4_vectors_6_8z00, BgL_bgl_string1989za700za7za7_2179za7, "list", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2appendzd2envz00zz__r4_vectors_6_8z00, BgL_bgl_za762vectorza7d2appe2180z00, va_generic_entry, BGl_z62vectorzd2appendzb0zz__r4_vectors_6_8z00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string2084z00zz__r4_vectors_6_8z00, BgL_bgl_string2084za700za7za7_2181za7, "arg1337", 7 );
DEFINE_STRING( BGl_string1991z00zz__r4_vectors_6_8z00, BgL_bgl_string1991za700za7za7_2182za7, "Wrong number of arguments", 25 );
DEFINE_STRING( BGl_string1994z00zz__r4_vectors_6_8z00, BgL_bgl_string1994za700za7za7_2183za7, "apply", 5 );
DEFINE_STRING( BGl_string1997z00zz__r4_vectors_6_8z00, BgL_bgl_string1997za700za7za7_2184za7, "let", 3 );
DEFINE_STRING( BGl_string2090z00zz__r4_vectors_6_8z00, BgL_bgl_string2090za700za7za7_2185za7, "v1719", 5 );
DEFINE_STRING( BGl_string2093z00zz__r4_vectors_6_8z00, BgL_bgl_string2093za700za7za7_2186za7, "i1720", 5 );
DEFINE_STRING( BGl_string2098z00zz__r4_vectors_6_8z00, BgL_bgl_string2098za700za7za7_2187za7, "l1721", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2tagzd2envz00zz__r4_vectors_6_8z00, BgL_bgl_za762vectorza7d2tagza72188za7, BGl_z62vectorzd2tagzb0zz__r4_vectors_6_8z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2ze3listzd2envze3zz__r4_vectors_6_8z00, BgL_bgl_za762vectorza7d2za7e3l2189za7, BGl_z62vectorzd2ze3listz53zz__r4_vectors_6_8z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2envzd2zz__r4_vectors_6_8z00, BgL_bgl_za762vectorza762za7za7__2190z00, va_generic_entry, BGl_z62vectorz62zz__r4_vectors_6_8z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2copy3zd2envz00zz__r4_vectors_6_8z00, BgL_bgl_za762vectorza7d2copy2191z00, BGl_z62vectorzd2copy3zb0zz__r4_vectors_6_8z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2refzd2urzd2envzd2zz__r4_vectors_6_8z00, BgL_bgl_za762vectorza7d2refza72192za7, BGl_z62vectorzd2refzd2urz62zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2mapz12zd2envz12zz__r4_vectors_6_8z00, BgL_bgl_za762vectorza7d2mapza72193za7, va_generic_entry, BGl_z62vectorzd2mapz12za2zz__r4_vectors_6_8z00, BUNSPEC, -3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2copyzd2envz00zz__r4_vectors_6_8z00, BgL_bgl_za762vectorza7d2copy2194z00, va_generic_entry, BGl_z62vectorzd2copyzb0zz__r4_vectors_6_8z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3vectorzd2envze3zz__r4_vectors_6_8z00, BgL_bgl_za762listza7d2za7e3vec2195za7, BGl_z62listzd2ze3vectorz53zz__r4_vectors_6_8z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2refzd2envz00zz__r4_vectors_6_8z00, BgL_bgl_za762vectorza7d2refza72196za7, BGl_z62vectorzd2refzb0zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2lengthzd2envz00zz__r4_vectors_6_8z00, BgL_bgl_za762vectorza7d2leng2197z00, BGl_z62vectorzd2lengthzb0zz__r4_vectors_6_8z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2tagzd2setz12zd2envzc0zz__r4_vectors_6_8z00, BgL_bgl_za762vectorza7d2tagza72198za7, BGl_z62vectorzd2tagzd2setz12z70zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2001z00zz__r4_vectors_6_8z00, BgL_bgl_string2001za700za7za7_2199za7, "arg1300", 7 );
DEFINE_STRING( BGl_string2007z00zz__r4_vectors_6_8z00, BgL_bgl_string2007za700za7za7_2200za7, "vsrc", 4 );
DEFINE_STRING( BGl_string2010z00zz__r4_vectors_6_8z00, BgL_bgl_string2010za700za7za7_2201za7, "k", 1 );
DEFINE_STRING( BGl_string2012z00zz__r4_vectors_6_8z00, BgL_bgl_string2012za700za7za7_2202za7, "i", 1 );
DEFINE_STRING( BGl_string2017z00zz__r4_vectors_6_8z00, BgL_bgl_string2017za700za7za7_2203za7, "v1711", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzf3zd2envz21zz__r4_vectors_6_8z00, BgL_bgl_za762vectorza7f3za791za72204z00, BGl_z62vectorzf3z91zz__r4_vectors_6_8z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2020z00zz__r4_vectors_6_8z00, BgL_bgl_string2020za700za7za7_2205za7, "i1712", 5 );
DEFINE_STRING( BGl_string2104z00zz__r4_vectors_6_8z00, BgL_bgl_string2104za700za7za7_2206za7, "test1722", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2setzd2urz12zd2envzc0zz__r4_vectors_6_8z00, BgL_bgl_za762vectorza7d2setza72207za7, BGl_z62vectorzd2setzd2urz12z70zz__r4_vectors_6_8z00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string2025z00zz__r4_vectors_6_8z00, BgL_bgl_string2025za700za7za7_2208za7, "l1713", 5 );
DEFINE_STRING( BGl_string2028z00zz__r4_vectors_6_8z00, BgL_bgl_string2028za700za7za7_2209za7, "vlength", 7 );
DEFINE_STRING( BGl_string1934z00zz__r4_vectors_6_8z00, BgL_bgl_string1934za700za7za7_2210za7, "make-vector", 11 );
DEFINE_STRING( BGl_string1935z00zz__r4_vectors_6_8z00, BgL_bgl_string1935za700za7za7_2211za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_STRING( BGl_string1936z00zz__r4_vectors_6_8z00, BgL_bgl_string1936za700za7za7_2212za7, "/tmp/4.4a/runtime/Ieee/vector.scm", 33 );
DEFINE_STRING( BGl_string1937z00zz__r4_vectors_6_8z00, BgL_bgl_string1937za700za7za7_2213za7, "_make-vector", 12 );
DEFINE_STRING( BGl_string1938z00zz__r4_vectors_6_8z00, BgL_bgl_string1938za700za7za7_2214za7, "bint", 4 );
DEFINE_STRING( BGl_string1939z00zz__r4_vectors_6_8z00, BgL_bgl_string1939za700za7za7_2215za7, "vector", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2copyz12zd2envz12zz__r4_vectors_6_8z00, BgL_bgl__vectorza7d2copyza712216z00, opt_generic_entry, BGl__vectorzd2copyz12zc0zz__r4_vectors_6_8z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2vectorzd2envz00zz__r4_vectors_6_8z00, BgL_bgl__makeza7d2vectorza7d2217z00, opt_generic_entry, BGl__makezd2vectorzd2zz__r4_vectors_6_8z00, BFALSE, -1 );
DEFINE_STRING( BGl_string2030z00zz__r4_vectors_6_8z00, BgL_bgl_string2030za700za7za7_2218za7, "ftype:", 6 );
DEFINE_STRING( BGl_string2031z00zz__r4_vectors_6_8z00, BgL_bgl_string2031za700za7za7_2219za7, "_", 1 );
DEFINE_STRING( BGl_string2114z00zz__r4_vectors_6_8z00, BgL_bgl_string2114za700za7za7_2220za7, "list1338", 8 );
DEFINE_STRING( BGl_string2116z00zz__r4_vectors_6_8z00, BgL_bgl_string2116za700za7za7_2221za7, "vector-for-each", 15 );
DEFINE_STRING( BGl_string2117z00zz__r4_vectors_6_8z00, BgL_bgl_string2117za700za7za7_2222za7, "&vector-for-each", 16 );
DEFINE_STRING( BGl_string2036z00zz__r4_vectors_6_8z00, BgL_bgl_string2036za700za7za7_2223za7, "test1714", 8 );
DEFINE_STRING( BGl_string2118z00zz__r4_vectors_6_8z00, BgL_bgl_string2118za700za7za7_2224za7, "&<@anonymous:1354>", 18 );
DEFINE_STRING( BGl_string2119z00zz__r4_vectors_6_8z00, BgL_bgl_string2119za700za7za7_2225za7, "&vector-shrink!", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2forzd2eachzd2envzd2zz__r4_vectors_6_8z00, BgL_bgl_za762vectorza7d2forza72226za7, va_generic_entry, BGl_z62vectorzd2forzd2eachz62zz__r4_vectors_6_8z00, BUNSPEC, -3 );
DEFINE_STRING( BGl_string2039z00zz__r4_vectors_6_8z00, BgL_bgl_string2039za700za7za7_2227za7, "$vector-bound-check?", 20 );
DEFINE_STRING( BGl_string1940z00zz__r4_vectors_6_8z00, BgL_bgl_string1940za700za7za7_2228za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string1941z00zz__r4_vectors_6_8z00, BgL_bgl_string1941za700za7za7_2229za7, "&vector-length", 14 );
DEFINE_STRING( BGl_string1942z00zz__r4_vectors_6_8z00, BgL_bgl_string1942za700za7za7_2230za7, "vector-ref", 10 );
DEFINE_STRING( BGl_string1943z00zz__r4_vectors_6_8z00, BgL_bgl_string1943za700za7za7_2231za7, "&vector-ref", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2setz12zd2envz12zz__r4_vectors_6_8z00, BgL_bgl_za762vectorza7d2setza72232za7, BGl_z62vectorzd2setz12za2zz__r4_vectors_6_8z00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string1944z00zz__r4_vectors_6_8z00, BgL_bgl_string1944za700za7za7_2233za7, "vector-set!", 11 );
DEFINE_STRING( BGl_string1945z00zz__r4_vectors_6_8z00, BgL_bgl_string1945za700za7za7_2234za7, "&vector-set!", 12 );
DEFINE_STRING( BGl_string1946z00zz__r4_vectors_6_8z00, BgL_bgl_string1946za700za7za7_2235za7, "&vector-ref-ur", 14 );
DEFINE_STRING( BGl_string1947z00zz__r4_vectors_6_8z00, BgL_bgl_string1947za700za7za7_2236za7, "&vector-set-ur!", 15 );
DEFINE_STRING( BGl_string1948z00zz__r4_vectors_6_8z00, BgL_bgl_string1948za700za7za7_2237za7, "&vector->list", 13 );
DEFINE_STRING( BGl_string1949z00zz__r4_vectors_6_8z00, BgL_bgl_string1949za700za7za7_2238za7, "loop", 4 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_symbol2000z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2005z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2006z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2009z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2011z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2016z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2019z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2103z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2024z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2027z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol1933z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2113z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2002z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2003z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2035z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2004z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2038z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2008z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2041z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2044z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2013z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2014z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2015z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2047z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2018z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol1952z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2100z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2050z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2101z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2102z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2021z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2022z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2023z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2105z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2055z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2106z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2107z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2026z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2108z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2058z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2109z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2029z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol1968z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2110z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2060z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2111z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2112z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2063z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2032z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2033z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2115z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2034z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2066z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2037z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2040z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2043z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2076z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2046z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol1980z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2049z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol1982z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol1984z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2083z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2052z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2053z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2054z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2057z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2089z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol1990z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol1993z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol1996z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2092z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2062z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2065z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_symbol2097z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list1979z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2075z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2079z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2080z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2081z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2082z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2085z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2086z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2087z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2088z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list1992z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list1995z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list1998z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list1999z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2091z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2094z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2095z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2096z00zz__r4_vectors_6_8z00) );
ADD_ROOT( (void *)(&BGl_list2099z00zz__r4_vectors_6_8z00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long BgL_checksumz00_2054, char * BgL_fromz00_2055)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_vectors_6_8z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_vectors_6_8z00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__r4_vectors_6_8z00(); 
BGl_cnstzd2initzd2zz__r4_vectors_6_8z00(); 
return 
BGl_importedzd2moduleszd2initz00zz__r4_vectors_6_8z00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r4_vectors_6_8z00()
{
{ /* Ieee/vector.scm 18 */
BGl_symbol1933z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string1934z00zz__r4_vectors_6_8z00); 
BGl_symbol1952z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string1953z00zz__r4_vectors_6_8z00); 
BGl_symbol1968z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string1969z00zz__r4_vectors_6_8z00); 
BGl_symbol1980z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string1981z00zz__r4_vectors_6_8z00); 
BGl_symbol1982z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string1983z00zz__r4_vectors_6_8z00); 
BGl_symbol1984z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string1985z00zz__r4_vectors_6_8z00); 
BGl_list1979z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1980z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol1982z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol1982z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol1984z00zz__r4_vectors_6_8z00, BNIL)))); 
BGl_symbol1990z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string1949z00zz__r4_vectors_6_8z00); 
BGl_symbol1993z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string1994z00zz__r4_vectors_6_8z00); 
BGl_symbol1996z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string1997z00zz__r4_vectors_6_8z00); 
BGl_symbol2000z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2001z00zz__r4_vectors_6_8z00); 
BGl_symbol2005z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string1939z00zz__r4_vectors_6_8z00); 
BGl_symbol2006z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2007z00zz__r4_vectors_6_8z00); 
BGl_list2004z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2005z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2006z00zz__r4_vectors_6_8z00, BNIL)); 
BGl_symbol2009z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2010z00zz__r4_vectors_6_8z00); 
BGl_symbol2011z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2012z00zz__r4_vectors_6_8z00); 
BGl_list2008z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2009z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2011z00zz__r4_vectors_6_8z00, BNIL)); 
BGl_list2003z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_list2004z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2008z00zz__r4_vectors_6_8z00, BNIL)); 
BGl_symbol2016z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2017z00zz__r4_vectors_6_8z00); 
BGl_list2015z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2016z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2005z00zz__r4_vectors_6_8z00, BNIL)); 
BGl_symbol2019z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2020z00zz__r4_vectors_6_8z00); 
BGl_list2018z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2019z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2009z00zz__r4_vectors_6_8z00, BNIL)); 
BGl_list2014z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_list2015z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2018z00zz__r4_vectors_6_8z00, BNIL)); 
BGl_symbol2024z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2025z00zz__r4_vectors_6_8z00); 
BGl_symbol2027z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2028z00zz__r4_vectors_6_8z00); 
BGl_list2029z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_string2030z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_string2031z00zz__r4_vectors_6_8z00, BNIL)); 
BGl_list2026z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2027z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2029z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2016z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_list2023z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2024z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2026z00zz__r4_vectors_6_8z00, BNIL)); 
BGl_list2022z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_list2023z00zz__r4_vectors_6_8z00, BNIL); 
BGl_symbol2035z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2036z00zz__r4_vectors_6_8z00); 
BGl_symbol2038z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2039z00zz__r4_vectors_6_8z00); 
BGl_list2037z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2038z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2019z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2024z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_list2034z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2035z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2037z00zz__r4_vectors_6_8z00, BNIL)); 
BGl_list2033z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_list2034z00zz__r4_vectors_6_8z00, BNIL); 
BGl_symbol2041z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2042z00zz__r4_vectors_6_8z00); 
BGl_symbol2044z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2045z00zz__r4_vectors_6_8z00); 
BGl_list2043z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2044z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2016z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2019z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_symbol2047z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2048z00zz__r4_vectors_6_8z00); 
BGl_symbol2050z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2051z00zz__r4_vectors_6_8z00); 
BGl_list2049z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2050z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_string1936z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(
BINT(((long)7298)), 
MAKE_YOUNG_PAIR(BGl_string1942z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2016z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2024z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2019z00zz__r4_vectors_6_8z00, BNIL))))))); 
BGl_list2046z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2047z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2049z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(
BBOOL(((bool_t)0)), 
MAKE_YOUNG_PAIR(
BBOOL(((bool_t)0)), BNIL)))); 
BGl_list2040z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2041z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2035z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2043z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2046z00zz__r4_vectors_6_8z00, BNIL)))); 
BGl_list2032z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1996z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2033z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2040z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_list2021z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1996z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2022z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2032z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_list2013z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1996z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2014z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2021z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_list2002z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1996z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2003z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2013z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_list1999z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2000z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2002z00zz__r4_vectors_6_8z00, BNIL)); 
BGl_list1998z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_list1999z00zz__r4_vectors_6_8z00, BNIL); 
BGl_symbol2055z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2056z00zz__r4_vectors_6_8z00); 
BGl_symbol2058z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2059z00zz__r4_vectors_6_8z00); 
BGl_symbol2060z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2061z00zz__r4_vectors_6_8z00); 
BGl_symbol2063z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2064z00zz__r4_vectors_6_8z00); 
BGl_list2062z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2063z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BNIL, BNIL)); 
BGl_list2057z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2058z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2060z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2062z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_list2054z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2055z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2057z00zz__r4_vectors_6_8z00, BNIL)); 
BGl_list2053z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_list2054z00zz__r4_vectors_6_8z00, BNIL); 
BGl_symbol2066z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2067z00zz__r4_vectors_6_8z00); 
BGl_list2065z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2066z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2000z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2055z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_list2052z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1996z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2053z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2065z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_list1995z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1996z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list1998z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2052z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_list1992z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1993z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol1982z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list1995z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_symbol2076z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2077z00zz__r4_vectors_6_8z00); 
BGl_list2075z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1980z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol1982z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol1982z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2076z00zz__r4_vectors_6_8z00, BNIL)))); 
BGl_symbol2083z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2084z00zz__r4_vectors_6_8z00); 
BGl_symbol2089z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2090z00zz__r4_vectors_6_8z00); 
BGl_list2088z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2089z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2005z00zz__r4_vectors_6_8z00, BNIL)); 
BGl_symbol2092z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2093z00zz__r4_vectors_6_8z00); 
BGl_list2091z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2092z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2009z00zz__r4_vectors_6_8z00, BNIL)); 
BGl_list2087z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_list2088z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2091z00zz__r4_vectors_6_8z00, BNIL)); 
BGl_symbol2097z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2098z00zz__r4_vectors_6_8z00); 
BGl_list2099z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2027z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2029z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2089z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_list2096z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2097z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2099z00zz__r4_vectors_6_8z00, BNIL)); 
BGl_list2095z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_list2096z00zz__r4_vectors_6_8z00, BNIL); 
BGl_symbol2103z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2104z00zz__r4_vectors_6_8z00); 
BGl_list2105z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2038z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2092z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2097z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_list2102z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2103z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2105z00zz__r4_vectors_6_8z00, BNIL)); 
BGl_list2101z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_list2102z00zz__r4_vectors_6_8z00, BNIL); 
BGl_list2107z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2044z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2089z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2092z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_list2109z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2050z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_string1936z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(
BINT(((long)7298)), 
MAKE_YOUNG_PAIR(BGl_string1942z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2089z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2097z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2092z00zz__r4_vectors_6_8z00, BNIL))))))); 
BGl_list2108z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2047z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2109z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(
BBOOL(((bool_t)0)), 
MAKE_YOUNG_PAIR(
BBOOL(((bool_t)0)), BNIL)))); 
BGl_list2106z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2041z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2103z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2107z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2108z00zz__r4_vectors_6_8z00, BNIL)))); 
BGl_list2100z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1996z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2101z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2106z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_list2094z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1996z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2095z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2100z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_list2086z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1996z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2087z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2094z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_list2085z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1996z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2003z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2086z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_list2082z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2083z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2085z00zz__r4_vectors_6_8z00, BNIL)); 
BGl_list2081z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_list2082z00zz__r4_vectors_6_8z00, BNIL); 
BGl_symbol2113z00zz__r4_vectors_6_8z00 = 
bstring_to_symbol(BGl_string2114z00zz__r4_vectors_6_8z00); 
BGl_list2112z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2113z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2057z00zz__r4_vectors_6_8z00, BNIL)); 
BGl_list2111z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_list2112z00zz__r4_vectors_6_8z00, BNIL); 
BGl_list2115z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2066z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2083z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol2113z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_list2110z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1996z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2111z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2115z00zz__r4_vectors_6_8z00, BNIL))); 
BGl_list2080z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1996z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2081z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2110z00zz__r4_vectors_6_8z00, BNIL))); 
return ( 
BGl_list2079z00zz__r4_vectors_6_8z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1993z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_symbol1982z00zz__r4_vectors_6_8z00, 
MAKE_YOUNG_PAIR(BGl_list2080z00zz__r4_vectors_6_8z00, BNIL))), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__r4_vectors_6_8z00()
{
{ /* Ieee/vector.scm 18 */
return 
bgl_gc_roots_register();} 

}



/* vector? */
BGL_EXPORTED_DEF bool_t BGl_vectorzf3zf3zz__r4_vectors_6_8z00(obj_t BgL_objz00_3)
{
{ /* Ieee/vector.scm 133 */
return 
VECTORP(BgL_objz00_3);} 

}



/* &vector? */
obj_t BGl_z62vectorzf3z91zz__r4_vectors_6_8z00(obj_t BgL_envz00_1728, obj_t BgL_objz00_1729)
{
{ /* Ieee/vector.scm 133 */
return 
BBOOL(
BGl_vectorzf3zf3zz__r4_vectors_6_8z00(BgL_objz00_1729));} 

}



/* _make-vector */
obj_t BGl__makezd2vectorzd2zz__r4_vectors_6_8z00(obj_t BgL_env1051z00_7, obj_t BgL_opt1050z00_6)
{
{ /* Ieee/vector.scm 139 */
{ /* Ieee/vector.scm 139 */
obj_t BgL_g1052z00_2043;
BgL_g1052z00_2043 = 
VECTOR_REF(BgL_opt1050z00_6,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1050z00_6)) { case ((long)1) : 

{ /* Ieee/vector.scm 139 */

{ /* Ieee/vector.scm 139 */
obj_t BgL_res1594z00_2045;
{ /* Ieee/vector.scm 139 */
long BgL_intz00_2046;
{ /* Ieee/vector.scm 139 */
obj_t BgL_tmpz00_2262;
if(
INTEGERP(BgL_g1052z00_2043))
{ /* Ieee/vector.scm 139 */
BgL_tmpz00_2262 = BgL_g1052z00_2043
; }  else 
{ 
obj_t BgL_auxz00_2265;
BgL_auxz00_2265 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)6376)), BGl_string1937z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_g1052z00_2043); 
FAILURE(BgL_auxz00_2265,BFALSE,BFALSE);} 
BgL_intz00_2046 = 
(long)CINT(BgL_tmpz00_2262); } 
BgL_res1594z00_2045 = 
make_vector(BgL_intz00_2046, BUNSPEC); } 
return BgL_res1594z00_2045;} } break;case ((long)2) : 

{ /* Ieee/vector.scm 139 */
obj_t BgL_fillz00_2047;
BgL_fillz00_2047 = 
VECTOR_REF(BgL_opt1050z00_6,((long)1)); 
{ /* Ieee/vector.scm 139 */

{ /* Ieee/vector.scm 139 */
obj_t BgL_res1595z00_2048;
{ /* Ieee/vector.scm 139 */
long BgL_intz00_2049;
{ /* Ieee/vector.scm 139 */
obj_t BgL_tmpz00_2272;
if(
INTEGERP(BgL_g1052z00_2043))
{ /* Ieee/vector.scm 139 */
BgL_tmpz00_2272 = BgL_g1052z00_2043
; }  else 
{ 
obj_t BgL_auxz00_2275;
BgL_auxz00_2275 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)6376)), BGl_string1937z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_g1052z00_2043); 
FAILURE(BgL_auxz00_2275,BFALSE,BFALSE);} 
BgL_intz00_2049 = 
(long)CINT(BgL_tmpz00_2272); } 
BgL_res1595z00_2048 = 
make_vector(BgL_intz00_2049, BgL_fillz00_2047); } 
return BgL_res1595z00_2048;} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol1933z00zz__r4_vectors_6_8z00, BGl_string1935z00zz__r4_vectors_6_8z00, 
BINT(
VECTOR_LENGTH(BgL_opt1050z00_6)));} } } } 

}



/* make-vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2vectorzd2zz__r4_vectors_6_8z00(long BgL_intz00_4, obj_t BgL_fillz00_5)
{
{ /* Ieee/vector.scm 139 */
return 
make_vector(BgL_intz00_4, BgL_fillz00_5);} 

}



/* vector */
BGL_EXPORTED_DEF obj_t BGl_vectorz00zz__r4_vectors_6_8z00(obj_t BgL_argsz00_8)
{
{ /* Ieee/vector.scm 145 */
{ /* Ieee/vector.scm 146 */
obj_t BgL_auxz00_2287;
{ /* Ieee/vector.scm 146 */
bool_t BgL_test2242z00_2288;
if(
PAIRP(BgL_argsz00_8))
{ /* Ieee/vector.scm 146 */
BgL_test2242z00_2288 = ((bool_t)1)
; }  else 
{ /* Ieee/vector.scm 146 */
BgL_test2242z00_2288 = 
NULLP(BgL_argsz00_8)
; } 
if(BgL_test2242z00_2288)
{ /* Ieee/vector.scm 146 */
BgL_auxz00_2287 = BgL_argsz00_8
; }  else 
{ 
obj_t BgL_auxz00_2292;
BgL_auxz00_2292 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)6739)), BGl_string1939z00zz__r4_vectors_6_8z00, BGl_string1940z00zz__r4_vectors_6_8z00, BgL_argsz00_8); 
FAILURE(BgL_auxz00_2292,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BgL_auxz00_2287);} } 

}



/* &vector */
obj_t BGl_z62vectorz62zz__r4_vectors_6_8z00(obj_t BgL_envz00_1730, obj_t BgL_argsz00_1731)
{
{ /* Ieee/vector.scm 145 */
return 
BGl_vectorz00zz__r4_vectors_6_8z00(BgL_argsz00_1731);} 

}



/* vector-length */
BGL_EXPORTED_DEF long BGl_vectorzd2lengthzd2zz__r4_vectors_6_8z00(obj_t BgL_vectorz00_9)
{
{ /* Ieee/vector.scm 151 */
return 
VECTOR_LENGTH(BgL_vectorz00_9);} 

}



/* &vector-length */
obj_t BGl_z62vectorzd2lengthzb0zz__r4_vectors_6_8z00(obj_t BgL_envz00_1732, obj_t BgL_vectorz00_1733)
{
{ /* Ieee/vector.scm 151 */
{ /* Ieee/vector.scm 152 */
long BgL_tmpz00_2299;
{ /* Ieee/vector.scm 152 */
obj_t BgL_auxz00_2300;
if(
VECTORP(BgL_vectorz00_1733))
{ /* Ieee/vector.scm 152 */
BgL_auxz00_2300 = BgL_vectorz00_1733
; }  else 
{ 
obj_t BgL_auxz00_2303;
BgL_auxz00_2303 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)7010)), BGl_string1941z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vectorz00_1733); 
FAILURE(BgL_auxz00_2303,BFALSE,BFALSE);} 
BgL_tmpz00_2299 = 
BGl_vectorzd2lengthzd2zz__r4_vectors_6_8z00(BgL_auxz00_2300); } 
return 
BINT(BgL_tmpz00_2299);} } 

}



/* vector-ref */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2refzd2zz__r4_vectors_6_8z00(obj_t BgL_vectorz00_10, long BgL_kz00_11)
{
{ /* Ieee/vector.scm 157 */
{ /* Ieee/vector.scm 158 */
bool_t BgL_test2245z00_2309;
{ /* Ieee/vector.scm 158 */
long BgL_tmpz00_2310;
BgL_tmpz00_2310 = 
VECTOR_LENGTH(BgL_vectorz00_10); 
BgL_test2245z00_2309 = 
BOUND_CHECK(BgL_kz00_11, BgL_tmpz00_2310); } 
if(BgL_test2245z00_2309)
{ /* Ieee/vector.scm 158 */
return 
VECTOR_REF(BgL_vectorz00_10,BgL_kz00_11);}  else 
{ 
obj_t BgL_auxz00_2314;
BgL_auxz00_2314 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)7298)), BGl_string1942z00zz__r4_vectors_6_8z00, BgL_vectorz00_10, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_10)), 
(int)(BgL_kz00_11)); 
FAILURE(BgL_auxz00_2314,BFALSE,BFALSE);} } } 

}



/* &vector-ref */
obj_t BGl_z62vectorzd2refzb0zz__r4_vectors_6_8z00(obj_t BgL_envz00_1734, obj_t BgL_vectorz00_1735, obj_t BgL_kz00_1736)
{
{ /* Ieee/vector.scm 157 */
{ /* Ieee/vector.scm 158 */
long BgL_auxz00_2328;obj_t BgL_auxz00_2321;
{ /* Ieee/vector.scm 158 */
obj_t BgL_tmpz00_2329;
if(
INTEGERP(BgL_kz00_1736))
{ /* Ieee/vector.scm 158 */
BgL_tmpz00_2329 = BgL_kz00_1736
; }  else 
{ 
obj_t BgL_auxz00_2332;
BgL_auxz00_2332 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)7298)), BGl_string1943z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_kz00_1736); 
FAILURE(BgL_auxz00_2332,BFALSE,BFALSE);} 
BgL_auxz00_2328 = 
(long)CINT(BgL_tmpz00_2329); } 
if(
VECTORP(BgL_vectorz00_1735))
{ /* Ieee/vector.scm 158 */
BgL_auxz00_2321 = BgL_vectorz00_1735
; }  else 
{ 
obj_t BgL_auxz00_2324;
BgL_auxz00_2324 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)7298)), BGl_string1943z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vectorz00_1735); 
FAILURE(BgL_auxz00_2324,BFALSE,BFALSE);} 
return 
BGl_vectorzd2refzd2zz__r4_vectors_6_8z00(BgL_auxz00_2321, BgL_auxz00_2328);} } 

}



/* vector-set! */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2setz12zc0zz__r4_vectors_6_8z00(obj_t BgL_vectorz00_12, long BgL_kz00_13, obj_t BgL_objz00_14)
{
{ /* Ieee/vector.scm 163 */
{ /* Ieee/vector.scm 164 */
bool_t BgL_test2248z00_2338;
{ /* Ieee/vector.scm 164 */
long BgL_tmpz00_2339;
BgL_tmpz00_2339 = 
VECTOR_LENGTH(BgL_vectorz00_12); 
BgL_test2248z00_2338 = 
BOUND_CHECK(BgL_kz00_13, BgL_tmpz00_2339); } 
if(BgL_test2248z00_2338)
{ /* Ieee/vector.scm 164 */
return 
VECTOR_SET(BgL_vectorz00_12,BgL_kz00_13,BgL_objz00_14);}  else 
{ 
obj_t BgL_auxz00_2343;
BgL_auxz00_2343 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)7590)), BGl_string1944z00zz__r4_vectors_6_8z00, BgL_vectorz00_12, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_12)), 
(int)(BgL_kz00_13)); 
FAILURE(BgL_auxz00_2343,BFALSE,BFALSE);} } } 

}



/* &vector-set! */
obj_t BGl_z62vectorzd2setz12za2zz__r4_vectors_6_8z00(obj_t BgL_envz00_1737, obj_t BgL_vectorz00_1738, obj_t BgL_kz00_1739, obj_t BgL_objz00_1740)
{
{ /* Ieee/vector.scm 163 */
{ /* Ieee/vector.scm 164 */
long BgL_auxz00_2357;obj_t BgL_auxz00_2350;
{ /* Ieee/vector.scm 164 */
obj_t BgL_tmpz00_2358;
if(
INTEGERP(BgL_kz00_1739))
{ /* Ieee/vector.scm 164 */
BgL_tmpz00_2358 = BgL_kz00_1739
; }  else 
{ 
obj_t BgL_auxz00_2361;
BgL_auxz00_2361 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)7590)), BGl_string1945z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_kz00_1739); 
FAILURE(BgL_auxz00_2361,BFALSE,BFALSE);} 
BgL_auxz00_2357 = 
(long)CINT(BgL_tmpz00_2358); } 
if(
VECTORP(BgL_vectorz00_1738))
{ /* Ieee/vector.scm 164 */
BgL_auxz00_2350 = BgL_vectorz00_1738
; }  else 
{ 
obj_t BgL_auxz00_2353;
BgL_auxz00_2353 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)7590)), BGl_string1945z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vectorz00_1738); 
FAILURE(BgL_auxz00_2353,BFALSE,BFALSE);} 
return 
BGl_vectorzd2setz12zc0zz__r4_vectors_6_8z00(BgL_auxz00_2350, BgL_auxz00_2357, BgL_objz00_1740);} } 

}



/* vector-ref-ur */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2refzd2urz00zz__r4_vectors_6_8z00(obj_t BgL_vectorz00_15, long BgL_kz00_16)
{
{ /* Ieee/vector.scm 169 */
return 
VECTOR_REF(BgL_vectorz00_15,BgL_kz00_16);} 

}



/* &vector-ref-ur */
obj_t BGl_z62vectorzd2refzd2urz62zz__r4_vectors_6_8z00(obj_t BgL_envz00_1741, obj_t BgL_vectorz00_1742, obj_t BgL_kz00_1743)
{
{ /* Ieee/vector.scm 169 */
{ /* Ieee/vector.scm 170 */
long BgL_auxz00_2375;obj_t BgL_auxz00_2368;
{ /* Ieee/vector.scm 170 */
obj_t BgL_tmpz00_2376;
if(
INTEGERP(BgL_kz00_1743))
{ /* Ieee/vector.scm 170 */
BgL_tmpz00_2376 = BgL_kz00_1743
; }  else 
{ 
obj_t BgL_auxz00_2379;
BgL_auxz00_2379 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)7885)), BGl_string1946z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_kz00_1743); 
FAILURE(BgL_auxz00_2379,BFALSE,BFALSE);} 
BgL_auxz00_2375 = 
(long)CINT(BgL_tmpz00_2376); } 
if(
VECTORP(BgL_vectorz00_1742))
{ /* Ieee/vector.scm 170 */
BgL_auxz00_2368 = BgL_vectorz00_1742
; }  else 
{ 
obj_t BgL_auxz00_2371;
BgL_auxz00_2371 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)7885)), BGl_string1946z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vectorz00_1742); 
FAILURE(BgL_auxz00_2371,BFALSE,BFALSE);} 
return 
BGl_vectorzd2refzd2urz00zz__r4_vectors_6_8z00(BgL_auxz00_2368, BgL_auxz00_2375);} } 

}



/* vector-set-ur! */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2setzd2urz12z12zz__r4_vectors_6_8z00(obj_t BgL_vectorz00_17, long BgL_kz00_18, obj_t BgL_objz00_19)
{
{ /* Ieee/vector.scm 175 */
return 
VECTOR_SET(BgL_vectorz00_17,BgL_kz00_18,BgL_objz00_19);} 

}



/* &vector-set-ur! */
obj_t BGl_z62vectorzd2setzd2urz12z70zz__r4_vectors_6_8z00(obj_t BgL_envz00_1744, obj_t BgL_vectorz00_1745, obj_t BgL_kz00_1746, obj_t BgL_objz00_1747)
{
{ /* Ieee/vector.scm 175 */
{ /* Ieee/vector.scm 176 */
long BgL_auxz00_2393;obj_t BgL_auxz00_2386;
{ /* Ieee/vector.scm 176 */
obj_t BgL_tmpz00_2394;
if(
INTEGERP(BgL_kz00_1746))
{ /* Ieee/vector.scm 176 */
BgL_tmpz00_2394 = BgL_kz00_1746
; }  else 
{ 
obj_t BgL_auxz00_2397;
BgL_auxz00_2397 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)8183)), BGl_string1947z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_kz00_1746); 
FAILURE(BgL_auxz00_2397,BFALSE,BFALSE);} 
BgL_auxz00_2393 = 
(long)CINT(BgL_tmpz00_2394); } 
if(
VECTORP(BgL_vectorz00_1745))
{ /* Ieee/vector.scm 176 */
BgL_auxz00_2386 = BgL_vectorz00_1745
; }  else 
{ 
obj_t BgL_auxz00_2389;
BgL_auxz00_2389 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)8183)), BGl_string1947z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vectorz00_1745); 
FAILURE(BgL_auxz00_2389,BFALSE,BFALSE);} 
return 
BGl_vectorzd2setzd2urz12z12zz__r4_vectors_6_8z00(BgL_auxz00_2386, BgL_auxz00_2393, BgL_objz00_1747);} } 

}



/* vector->list */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t BgL_vectorz00_20)
{
{ /* Ieee/vector.scm 181 */
if(
(
VECTOR_LENGTH(BgL_vectorz00_20)==((long)0)))
{ /* Ieee/vector.scm 183 */
return BNIL;}  else 
{ /* Ieee/vector.scm 185 */
long BgL_g1014z00_742;
BgL_g1014z00_742 = 
(
VECTOR_LENGTH(BgL_vectorz00_20)-((long)1)); 
{ 
long BgL_iz00_745;obj_t BgL_accz00_746;
BgL_iz00_745 = BgL_g1014z00_742; 
BgL_accz00_746 = BNIL; 
BgL_zc3z04anonymousza31103ze3z87_747:
if(
(BgL_iz00_745==((long)0)))
{ /* Ieee/vector.scm 187 */
return 
MAKE_YOUNG_PAIR(
VECTOR_REF(BgL_vectorz00_20,BgL_iz00_745), BgL_accz00_746);}  else 
{ /* Ieee/vector.scm 189 */
long BgL_arg1110z00_750;obj_t BgL_arg1113z00_751;
BgL_arg1110z00_750 = 
(BgL_iz00_745-((long)1)); 
BgL_arg1113z00_751 = 
MAKE_YOUNG_PAIR(
VECTOR_REF(BgL_vectorz00_20,BgL_iz00_745), BgL_accz00_746); 
{ 
obj_t BgL_accz00_2416;long BgL_iz00_2415;
BgL_iz00_2415 = BgL_arg1110z00_750; 
BgL_accz00_2416 = BgL_arg1113z00_751; 
BgL_accz00_746 = BgL_accz00_2416; 
BgL_iz00_745 = BgL_iz00_2415; 
goto BgL_zc3z04anonymousza31103ze3z87_747;} } } } } 

}



/* &vector->list */
obj_t BGl_z62vectorzd2ze3listz53zz__r4_vectors_6_8z00(obj_t BgL_envz00_1748, obj_t BgL_vectorz00_1749)
{
{ /* Ieee/vector.scm 181 */
{ /* Ieee/vector.scm 182 */
obj_t BgL_auxz00_2417;
if(
VECTORP(BgL_vectorz00_1749))
{ /* Ieee/vector.scm 182 */
BgL_auxz00_2417 = BgL_vectorz00_1749
; }  else 
{ 
obj_t BgL_auxz00_2420;
BgL_auxz00_2420 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)8471)), BGl_string1948z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vectorz00_1749); 
FAILURE(BgL_auxz00_2420,BFALSE,BFALSE);} 
return 
BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(BgL_auxz00_2417);} } 

}



/* list->vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t BgL_listz00_21)
{
{ /* Ieee/vector.scm 194 */
{ /* Ieee/vector.scm 195 */
long BgL_lenz00_754;
BgL_lenz00_754 = 
bgl_list_length(BgL_listz00_21); 
{ /* Ieee/vector.scm 195 */
obj_t BgL_vecz00_755;
BgL_vecz00_755 = 
create_vector(BgL_lenz00_754); 
{ /* Ieee/vector.scm 196 */

{ 
long BgL_iz00_1347;obj_t BgL_lz00_1348;
BgL_iz00_1347 = ((long)0); 
BgL_lz00_1348 = BgL_listz00_21; 
BgL_loopz00_1346:
if(
(BgL_iz00_1347==BgL_lenz00_754))
{ /* Ieee/vector.scm 199 */
return BgL_vecz00_755;}  else 
{ /* Ieee/vector.scm 199 */
{ /* Ieee/vector.scm 202 */
obj_t BgL_arg1117z00_1353;
{ /* Ieee/vector.scm 202 */
obj_t BgL_pairz00_1354;
if(
PAIRP(BgL_lz00_1348))
{ /* Ieee/vector.scm 202 */
BgL_pairz00_1354 = BgL_lz00_1348; }  else 
{ 
obj_t BgL_auxz00_2431;
BgL_auxz00_2431 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)9125)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1950z00zz__r4_vectors_6_8z00, BgL_lz00_1348); 
FAILURE(BgL_auxz00_2431,BFALSE,BFALSE);} 
BgL_arg1117z00_1353 = 
CAR(BgL_pairz00_1354); } 
VECTOR_SET(BgL_vecz00_755,BgL_iz00_1347,BgL_arg1117z00_1353); } 
{ /* Ieee/vector.scm 203 */
long BgL_arg1118z00_1357;obj_t BgL_arg1121z00_1358;
BgL_arg1118z00_1357 = 
(BgL_iz00_1347+((long)1)); 
{ /* Ieee/vector.scm 203 */
obj_t BgL_pairz00_1361;
if(
PAIRP(BgL_lz00_1348))
{ /* Ieee/vector.scm 203 */
BgL_pairz00_1361 = BgL_lz00_1348; }  else 
{ 
obj_t BgL_auxz00_2440;
BgL_auxz00_2440 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)9152)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1950z00zz__r4_vectors_6_8z00, BgL_lz00_1348); 
FAILURE(BgL_auxz00_2440,BFALSE,BFALSE);} 
BgL_arg1121z00_1358 = 
CDR(BgL_pairz00_1361); } 
{ 
obj_t BgL_lz00_2446;long BgL_iz00_2445;
BgL_iz00_2445 = BgL_arg1118z00_1357; 
BgL_lz00_2446 = BgL_arg1121z00_1358; 
BgL_lz00_1348 = BgL_lz00_2446; 
BgL_iz00_1347 = BgL_iz00_2445; 
goto BgL_loopz00_1346;} } } } } } } } 

}



/* &list->vector */
obj_t BGl_z62listzd2ze3vectorz53zz__r4_vectors_6_8z00(obj_t BgL_envz00_1750, obj_t BgL_listz00_1751)
{
{ /* Ieee/vector.scm 194 */
{ /* Ieee/vector.scm 195 */
obj_t BgL_auxz00_2447;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_listz00_1751))
{ /* Ieee/vector.scm 195 */
BgL_auxz00_2447 = BgL_listz00_1751
; }  else 
{ 
obj_t BgL_auxz00_2450;
BgL_auxz00_2450 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)8961)), BGl_string1951z00zz__r4_vectors_6_8z00, BGl_string1940z00zz__r4_vectors_6_8z00, BgL_listz00_1751); 
FAILURE(BgL_auxz00_2450,BFALSE,BFALSE);} 
return 
BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BgL_auxz00_2447);} } 

}



/* _vector-fill! */
obj_t BGl__vectorzd2fillz12zc0zz__r4_vectors_6_8z00(obj_t BgL_env1056z00_27, obj_t BgL_opt1055z00_26)
{
{ /* Ieee/vector.scm 208 */
{ /* Ieee/vector.scm 208 */
obj_t BgL_vecz00_765;obj_t BgL_fillz00_766;
BgL_vecz00_765 = 
VECTOR_REF(BgL_opt1055z00_26,((long)0)); 
BgL_fillz00_766 = 
VECTOR_REF(BgL_opt1055z00_26,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1055z00_26)) { case ((long)2) : 

{ /* Ieee/vector.scm 209 */
long BgL_endz00_771;
{ /* Ieee/vector.scm 209 */
obj_t BgL_vectorz00_1362;
if(
VECTORP(BgL_vecz00_765))
{ /* Ieee/vector.scm 209 */
BgL_vectorz00_1362 = BgL_vecz00_765; }  else 
{ 
obj_t BgL_auxz00_2459;
BgL_auxz00_2459 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)9472)), BGl_string1955z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vecz00_765); 
FAILURE(BgL_auxz00_2459,BFALSE,BFALSE);} 
BgL_endz00_771 = 
VECTOR_LENGTH(BgL_vectorz00_1362); } 
{ /* Ieee/vector.scm 208 */

{ /* Ieee/vector.scm 208 */
obj_t BgL_auxz00_2464;
if(
VECTORP(BgL_vecz00_765))
{ /* Ieee/vector.scm 208 */
BgL_auxz00_2464 = BgL_vecz00_765
; }  else 
{ 
obj_t BgL_auxz00_2467;
BgL_auxz00_2467 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)9384)), BGl_string1955z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vecz00_765); 
FAILURE(BgL_auxz00_2467,BFALSE,BFALSE);} 
return 
BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00(BgL_auxz00_2464, BgL_fillz00_766, ((long)0), BgL_endz00_771);} } } break;case ((long)3) : 

{ /* Ieee/vector.scm 208 */
obj_t BgL_startz00_772;
BgL_startz00_772 = 
VECTOR_REF(BgL_opt1055z00_26,((long)2)); 
{ /* Ieee/vector.scm 209 */
long BgL_endz00_773;
{ /* Ieee/vector.scm 209 */
obj_t BgL_vectorz00_1363;
if(
VECTORP(BgL_vecz00_765))
{ /* Ieee/vector.scm 209 */
BgL_vectorz00_1363 = BgL_vecz00_765; }  else 
{ 
obj_t BgL_auxz00_2475;
BgL_auxz00_2475 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)9472)), BGl_string1955z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vecz00_765); 
FAILURE(BgL_auxz00_2475,BFALSE,BFALSE);} 
BgL_endz00_773 = 
VECTOR_LENGTH(BgL_vectorz00_1363); } 
{ /* Ieee/vector.scm 208 */

{ /* Ieee/vector.scm 208 */
long BgL_auxz00_2487;obj_t BgL_auxz00_2480;
{ /* Ieee/vector.scm 208 */
obj_t BgL_tmpz00_2488;
if(
INTEGERP(BgL_startz00_772))
{ /* Ieee/vector.scm 208 */
BgL_tmpz00_2488 = BgL_startz00_772
; }  else 
{ 
obj_t BgL_auxz00_2491;
BgL_auxz00_2491 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)9384)), BGl_string1955z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_startz00_772); 
FAILURE(BgL_auxz00_2491,BFALSE,BFALSE);} 
BgL_auxz00_2487 = 
(long)CINT(BgL_tmpz00_2488); } 
if(
VECTORP(BgL_vecz00_765))
{ /* Ieee/vector.scm 208 */
BgL_auxz00_2480 = BgL_vecz00_765
; }  else 
{ 
obj_t BgL_auxz00_2483;
BgL_auxz00_2483 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)9384)), BGl_string1955z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vecz00_765); 
FAILURE(BgL_auxz00_2483,BFALSE,BFALSE);} 
return 
BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00(BgL_auxz00_2480, BgL_fillz00_766, BgL_auxz00_2487, BgL_endz00_773);} } } } break;case ((long)4) : 

{ /* Ieee/vector.scm 208 */
obj_t BgL_startz00_774;
BgL_startz00_774 = 
VECTOR_REF(BgL_opt1055z00_26,((long)2)); 
{ /* Ieee/vector.scm 208 */
obj_t BgL_endz00_775;
BgL_endz00_775 = 
VECTOR_REF(BgL_opt1055z00_26,((long)3)); 
{ /* Ieee/vector.scm 208 */

{ /* Ieee/vector.scm 208 */
long BgL_auxz00_2515;long BgL_auxz00_2506;obj_t BgL_auxz00_2499;
{ /* Ieee/vector.scm 208 */
obj_t BgL_tmpz00_2516;
if(
INTEGERP(BgL_endz00_775))
{ /* Ieee/vector.scm 208 */
BgL_tmpz00_2516 = BgL_endz00_775
; }  else 
{ 
obj_t BgL_auxz00_2519;
BgL_auxz00_2519 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)9384)), BGl_string1955z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_endz00_775); 
FAILURE(BgL_auxz00_2519,BFALSE,BFALSE);} 
BgL_auxz00_2515 = 
(long)CINT(BgL_tmpz00_2516); } 
{ /* Ieee/vector.scm 208 */
obj_t BgL_tmpz00_2507;
if(
INTEGERP(BgL_startz00_774))
{ /* Ieee/vector.scm 208 */
BgL_tmpz00_2507 = BgL_startz00_774
; }  else 
{ 
obj_t BgL_auxz00_2510;
BgL_auxz00_2510 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)9384)), BGl_string1955z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_startz00_774); 
FAILURE(BgL_auxz00_2510,BFALSE,BFALSE);} 
BgL_auxz00_2506 = 
(long)CINT(BgL_tmpz00_2507); } 
if(
VECTORP(BgL_vecz00_765))
{ /* Ieee/vector.scm 208 */
BgL_auxz00_2499 = BgL_vecz00_765
; }  else 
{ 
obj_t BgL_auxz00_2502;
BgL_auxz00_2502 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)9384)), BGl_string1955z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vecz00_765); 
FAILURE(BgL_auxz00_2502,BFALSE,BFALSE);} 
return 
BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00(BgL_auxz00_2499, BgL_fillz00_766, BgL_auxz00_2506, BgL_auxz00_2515);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol1952z00zz__r4_vectors_6_8z00, BGl_string1954z00zz__r4_vectors_6_8z00, 
BINT(
VECTOR_LENGTH(BgL_opt1055z00_26)));} } } } 

}



/* vector-fill! */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00(obj_t BgL_vecz00_22, obj_t BgL_fillz00_23, long BgL_startz00_24, long BgL_endz00_25)
{
{ /* Ieee/vector.scm 208 */
if(
(BgL_startz00_24<((long)0)))
{ /* Ieee/vector.scm 211 */
return 
BGl_errorz00zz__errorz00(BGl_string1953z00zz__r4_vectors_6_8z00, BGl_string1956z00zz__r4_vectors_6_8z00, 
BINT(BgL_startz00_24));}  else 
{ /* Ieee/vector.scm 211 */
if(
(BgL_endz00_25>
VECTOR_LENGTH(BgL_vecz00_22)))
{ /* Ieee/vector.scm 213 */
return 
BGl_errorz00zz__errorz00(BGl_string1953z00zz__r4_vectors_6_8z00, BGl_string1957z00zz__r4_vectors_6_8z00, 
BINT(BgL_endz00_25));}  else 
{ /* Ieee/vector.scm 213 */
if(
(BgL_startz00_24>=BgL_endz00_25))
{ /* Ieee/vector.scm 216 */
bool_t BgL_test2273z00_2541;
if(
(BgL_startz00_24==BgL_endz00_25))
{ /* Ieee/vector.scm 216 */
BgL_test2273z00_2541 = 
(BgL_startz00_24==((long)0))
; }  else 
{ /* Ieee/vector.scm 216 */
BgL_test2273z00_2541 = ((bool_t)0)
; } 
if(BgL_test2273z00_2541)
{ /* Ieee/vector.scm 216 */
return BUNSPEC;}  else 
{ /* Ieee/vector.scm 219 */
obj_t BgL_arg1133z00_783;
BgL_arg1133z00_783 = 
MAKE_YOUNG_PAIR(
BINT(BgL_startz00_24), 
BINT(BgL_endz00_25)); 
return 
BGl_errorz00zz__errorz00(BGl_string1953z00zz__r4_vectors_6_8z00, BGl_string1958z00zz__r4_vectors_6_8z00, BgL_arg1133z00_783);} }  else 
{ /* Ieee/vector.scm 215 */
return 
bgl_fill_vector(BgL_vecz00_22, BgL_startz00_24, BgL_endz00_25, BgL_fillz00_23);} } } } 

}



/* vector-tag */
BGL_EXPORTED_DEF int BGl_vectorzd2tagzd2zz__r4_vectors_6_8z00(obj_t BgL_vectorz00_28)
{
{ /* Ieee/vector.scm 226 */
return 
VECTOR_TAG(BgL_vectorz00_28);} 

}



/* &vector-tag */
obj_t BGl_z62vectorzd2tagzb0zz__r4_vectors_6_8z00(obj_t BgL_envz00_1752, obj_t BgL_vectorz00_1753)
{
{ /* Ieee/vector.scm 226 */
{ /* Ieee/vector.scm 227 */
int BgL_tmpz00_2551;
{ /* Ieee/vector.scm 227 */
obj_t BgL_auxz00_2552;
if(
VECTORP(BgL_vectorz00_1753))
{ /* Ieee/vector.scm 227 */
BgL_auxz00_2552 = BgL_vectorz00_1753
; }  else 
{ 
obj_t BgL_auxz00_2555;
BgL_auxz00_2555 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)10152)), BGl_string1959z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vectorz00_1753); 
FAILURE(BgL_auxz00_2555,BFALSE,BFALSE);} 
BgL_tmpz00_2551 = 
BGl_vectorzd2tagzd2zz__r4_vectors_6_8z00(BgL_auxz00_2552); } 
return 
BINT(BgL_tmpz00_2551);} } 

}



/* vector-tag-set! */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2tagzd2setz12z12zz__r4_vectors_6_8z00(obj_t BgL_vectorz00_29, int BgL_tagz00_30)
{
{ /* Ieee/vector.scm 232 */
return 
VECTOR_TAG_SET(BgL_vectorz00_29, BgL_tagz00_30);} 

}



/* &vector-tag-set! */
obj_t BGl_z62vectorzd2tagzd2setz12z70zz__r4_vectors_6_8z00(obj_t BgL_envz00_1754, obj_t BgL_vectorz00_1755, obj_t BgL_tagz00_1756)
{
{ /* Ieee/vector.scm 232 */
{ /* Ieee/vector.scm 233 */
int BgL_auxz00_2569;obj_t BgL_auxz00_2562;
{ /* Ieee/vector.scm 233 */
obj_t BgL_tmpz00_2570;
if(
INTEGERP(BgL_tagz00_1756))
{ /* Ieee/vector.scm 233 */
BgL_tmpz00_2570 = BgL_tagz00_1756
; }  else 
{ 
obj_t BgL_auxz00_2573;
BgL_auxz00_2573 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)10444)), BGl_string1960z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_tagz00_1756); 
FAILURE(BgL_auxz00_2573,BFALSE,BFALSE);} 
BgL_auxz00_2569 = 
CINT(BgL_tmpz00_2570); } 
if(
VECTORP(BgL_vectorz00_1755))
{ /* Ieee/vector.scm 233 */
BgL_auxz00_2562 = BgL_vectorz00_1755
; }  else 
{ 
obj_t BgL_auxz00_2565;
BgL_auxz00_2565 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)10444)), BGl_string1960z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vectorz00_1755); 
FAILURE(BgL_auxz00_2565,BFALSE,BFALSE);} 
return 
BGl_vectorzd2tagzd2setz12z12zz__r4_vectors_6_8z00(BgL_auxz00_2562, BgL_auxz00_2569);} } 

}



/* copy-vector */
BGL_EXPORTED_DEF obj_t BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(obj_t BgL_oldzd2veczd2_31, long BgL_newzd2lenzd2_32)
{
{ /* Ieee/vector.scm 238 */
{ /* Ieee/vector.scm 239 */
obj_t BgL_newzd2veczd2_787;
BgL_newzd2veczd2_787 = 
make_vector(BgL_newzd2lenzd2_32, BUNSPEC); 
{ /* Ieee/vector.scm 240 */
long BgL_minz00_788;
if(
(BgL_newzd2lenzd2_32<
VECTOR_LENGTH(BgL_oldzd2veczd2_31)))
{ /* Ieee/vector.scm 241 */
BgL_minz00_788 = BgL_newzd2lenzd2_32; }  else 
{ /* Ieee/vector.scm 241 */
BgL_minz00_788 = 
VECTOR_LENGTH(BgL_oldzd2veczd2_31); } 
{ /* Ieee/vector.scm 241 */

{ 
long BgL_iz00_790;
BgL_iz00_790 = ((long)0); 
BgL_zc3z04anonymousza31135ze3z87_791:
if(
(BgL_iz00_790==BgL_minz00_788))
{ /* Ieee/vector.scm 245 */
return BgL_newzd2veczd2_787;}  else 
{ /* Ieee/vector.scm 245 */
VECTOR_SET(BgL_newzd2veczd2_787,BgL_iz00_790,
VECTOR_REF(BgL_oldzd2veczd2_31,BgL_iz00_790)); 
{ 
long BgL_iz00_2588;
BgL_iz00_2588 = 
(BgL_iz00_790+((long)1)); 
BgL_iz00_790 = BgL_iz00_2588; 
goto BgL_zc3z04anonymousza31135ze3z87_791;} } } } } } } 

}



/* &copy-vector */
obj_t BGl_z62copyzd2vectorzb0zz__r4_vectors_6_8z00(obj_t BgL_envz00_1757, obj_t BgL_oldzd2veczd2_1758, obj_t BgL_newzd2lenzd2_1759)
{
{ /* Ieee/vector.scm 238 */
{ /* Ieee/vector.scm 239 */
long BgL_auxz00_2597;obj_t BgL_auxz00_2590;
{ /* Ieee/vector.scm 239 */
obj_t BgL_tmpz00_2598;
if(
INTEGERP(BgL_newzd2lenzd2_1759))
{ /* Ieee/vector.scm 239 */
BgL_tmpz00_2598 = BgL_newzd2lenzd2_1759
; }  else 
{ 
obj_t BgL_auxz00_2601;
BgL_auxz00_2601 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)10761)), BGl_string1961z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_newzd2lenzd2_1759); 
FAILURE(BgL_auxz00_2601,BFALSE,BFALSE);} 
BgL_auxz00_2597 = 
(long)CINT(BgL_tmpz00_2598); } 
if(
VECTORP(BgL_oldzd2veczd2_1758))
{ /* Ieee/vector.scm 239 */
BgL_auxz00_2590 = BgL_oldzd2veczd2_1758
; }  else 
{ 
obj_t BgL_auxz00_2593;
BgL_auxz00_2593 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)10761)), BGl_string1961z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_oldzd2veczd2_1758); 
FAILURE(BgL_auxz00_2593,BFALSE,BFALSE);} 
return 
BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(BgL_auxz00_2590, BgL_auxz00_2597);} } 

}



/* vector-copy3 */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2copy3zd2zz__r4_vectors_6_8z00(obj_t BgL_oldzd2veczd2_33, obj_t BgL_startz00_34, obj_t BgL_stopz00_35)
{
{ /* Ieee/vector.scm 254 */
{ /* Ieee/vector.scm 255 */
long BgL_newzd2lenzd2_799;
{ /* Ieee/vector.scm 256 */
long BgL_za71za7_1393;long BgL_za72za7_1394;
{ /* Ieee/vector.scm 256 */
obj_t BgL_tmpz00_2607;
if(
INTEGERP(BgL_stopz00_35))
{ /* Ieee/vector.scm 256 */
BgL_tmpz00_2607 = BgL_stopz00_35
; }  else 
{ 
obj_t BgL_auxz00_2610;
BgL_auxz00_2610 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)11402)), BGl_string1962z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_stopz00_35); 
FAILURE(BgL_auxz00_2610,BFALSE,BFALSE);} 
BgL_za71za7_1393 = 
(long)CINT(BgL_tmpz00_2607); } 
{ /* Ieee/vector.scm 256 */
obj_t BgL_tmpz00_2615;
if(
INTEGERP(BgL_startz00_34))
{ /* Ieee/vector.scm 256 */
BgL_tmpz00_2615 = BgL_startz00_34
; }  else 
{ 
obj_t BgL_auxz00_2618;
BgL_auxz00_2618 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)11407)), BGl_string1962z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_startz00_34); 
FAILURE(BgL_auxz00_2618,BFALSE,BFALSE);} 
BgL_za72za7_1394 = 
(long)CINT(BgL_tmpz00_2615); } 
BgL_newzd2lenzd2_799 = 
(BgL_za71za7_1393-BgL_za72za7_1394); } 
{ /* Ieee/vector.scm 256 */
obj_t BgL_newzd2veczd2_800;
BgL_newzd2veczd2_800 = 
make_vector(BgL_newzd2lenzd2_799, BUNSPEC); 
{ /* Ieee/vector.scm 258 */

{ /* Ieee/vector.scm 261 */
bool_t BgL_test2284z00_2625;
if(
(BgL_newzd2lenzd2_799<((long)0)))
{ /* Ieee/vector.scm 261 */
BgL_test2284z00_2625 = ((bool_t)1)
; }  else 
{ /* Ieee/vector.scm 261 */
bool_t BgL_test2286z00_2628;
{ /* Ieee/vector.scm 261 */
long BgL_n1z00_1402;
{ /* Ieee/vector.scm 261 */
obj_t BgL_tmpz00_2629;
if(
INTEGERP(BgL_startz00_34))
{ /* Ieee/vector.scm 261 */
BgL_tmpz00_2629 = BgL_startz00_34
; }  else 
{ 
obj_t BgL_auxz00_2632;
BgL_auxz00_2632 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)11548)), BGl_string1962z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_startz00_34); 
FAILURE(BgL_auxz00_2632,BFALSE,BFALSE);} 
BgL_n1z00_1402 = 
(long)CINT(BgL_tmpz00_2629); } 
BgL_test2286z00_2628 = 
(BgL_n1z00_1402>
VECTOR_LENGTH(BgL_oldzd2veczd2_33)); } 
if(BgL_test2286z00_2628)
{ /* Ieee/vector.scm 261 */
BgL_test2284z00_2625 = ((bool_t)1)
; }  else 
{ /* Ieee/vector.scm 261 */
long BgL_n1z00_1405;
{ /* Ieee/vector.scm 261 */
obj_t BgL_tmpz00_2639;
if(
INTEGERP(BgL_stopz00_35))
{ /* Ieee/vector.scm 261 */
BgL_tmpz00_2639 = BgL_stopz00_35
; }  else 
{ 
obj_t BgL_auxz00_2642;
BgL_auxz00_2642 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)11568)), BGl_string1962z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_stopz00_35); 
FAILURE(BgL_auxz00_2642,BFALSE,BFALSE);} 
BgL_n1z00_1405 = 
(long)CINT(BgL_tmpz00_2639); } 
BgL_test2284z00_2625 = 
(BgL_n1z00_1405>
VECTOR_LENGTH(BgL_oldzd2veczd2_33)); } } 
if(BgL_test2284z00_2625)
{ /* Ieee/vector.scm 262 */
obj_t BgL_arg1165z00_805;
BgL_arg1165z00_805 = 
MAKE_YOUNG_PAIR(BgL_startz00_34, BgL_stopz00_35); 
{ /* Ieee/vector.scm 262 */
obj_t BgL_aux1789z00_1892;
BgL_aux1789z00_1892 = 
BGl_errorz00zz__errorz00(BGl_string1963z00zz__r4_vectors_6_8z00, BGl_string1964z00zz__r4_vectors_6_8z00, BgL_arg1165z00_805); 
if(
VECTORP(BgL_aux1789z00_1892))
{ /* Ieee/vector.scm 262 */
return BgL_aux1789z00_1892;}  else 
{ 
obj_t BgL_auxz00_2653;
BgL_auxz00_2653 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)11586)), BGl_string1962z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_aux1789z00_1892); 
FAILURE(BgL_auxz00_2653,BFALSE,BFALSE);} } }  else 
{ 
obj_t BgL_rz00_1420;long BgL_wz00_1421;
BgL_rz00_1420 = BgL_startz00_34; 
BgL_wz00_1421 = ((long)0); 
BgL_loopz00_1419:
{ /* Ieee/vector.scm 265 */
bool_t BgL_test2290z00_2657;
{ /* Ieee/vector.scm 265 */
long BgL_n1z00_1424;long BgL_n2z00_1425;
{ /* Ieee/vector.scm 265 */
obj_t BgL_tmpz00_2658;
if(
INTEGERP(BgL_rz00_1420))
{ /* Ieee/vector.scm 265 */
BgL_tmpz00_2658 = BgL_rz00_1420
; }  else 
{ 
obj_t BgL_auxz00_2661;
BgL_auxz00_2661 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)11697)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_rz00_1420); 
FAILURE(BgL_auxz00_2661,BFALSE,BFALSE);} 
BgL_n1z00_1424 = 
(long)CINT(BgL_tmpz00_2658); } 
{ /* Ieee/vector.scm 265 */
obj_t BgL_tmpz00_2666;
if(
INTEGERP(BgL_stopz00_35))
{ /* Ieee/vector.scm 265 */
BgL_tmpz00_2666 = BgL_stopz00_35
; }  else 
{ 
obj_t BgL_auxz00_2669;
BgL_auxz00_2669 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)11699)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_stopz00_35); 
FAILURE(BgL_auxz00_2669,BFALSE,BFALSE);} 
BgL_n2z00_1425 = 
(long)CINT(BgL_tmpz00_2666); } 
BgL_test2290z00_2657 = 
(BgL_n1z00_1424==BgL_n2z00_1425); } 
if(BgL_test2290z00_2657)
{ /* Ieee/vector.scm 265 */
return BgL_newzd2veczd2_800;}  else 
{ /* Ieee/vector.scm 265 */
{ /* Ieee/vector.scm 268 */
obj_t BgL_arg1169z00_1426;
{ /* Ieee/vector.scm 268 */
long BgL_kz00_1428;
{ /* Ieee/vector.scm 268 */
obj_t BgL_tmpz00_2675;
if(
INTEGERP(BgL_rz00_1420))
{ /* Ieee/vector.scm 268 */
BgL_tmpz00_2675 = BgL_rz00_1420
; }  else 
{ 
obj_t BgL_auxz00_2678;
BgL_auxz00_2678 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)11781)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_rz00_1420); 
FAILURE(BgL_auxz00_2678,BFALSE,BFALSE);} 
BgL_kz00_1428 = 
(long)CINT(BgL_tmpz00_2675); } 
BgL_arg1169z00_1426 = 
VECTOR_REF(BgL_oldzd2veczd2_33,BgL_kz00_1428); } 
VECTOR_SET(BgL_newzd2veczd2_800,BgL_wz00_1421,BgL_arg1169z00_1426); } 
{ /* Ieee/vector.scm 269 */
long BgL_arg1170z00_1431;long BgL_arg1172z00_1432;
{ /* Ieee/vector.scm 269 */
long BgL_za71za7_1434;
{ /* Ieee/vector.scm 269 */
obj_t BgL_tmpz00_2685;
if(
INTEGERP(BgL_rz00_1420))
{ /* Ieee/vector.scm 269 */
BgL_tmpz00_2685 = BgL_rz00_1420
; }  else 
{ 
obj_t BgL_auxz00_2688;
BgL_auxz00_2688 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)11802)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_rz00_1420); 
FAILURE(BgL_auxz00_2688,BFALSE,BFALSE);} 
BgL_za71za7_1434 = 
(long)CINT(BgL_tmpz00_2685); } 
BgL_arg1170z00_1431 = 
(BgL_za71za7_1434+((long)1)); } 
BgL_arg1172z00_1432 = 
(BgL_wz00_1421+((long)1)); 
{ 
long BgL_wz00_2697;obj_t BgL_rz00_2695;
BgL_rz00_2695 = 
BINT(BgL_arg1170z00_1431); 
BgL_wz00_2697 = BgL_arg1172z00_1432; 
BgL_wz00_1421 = BgL_wz00_2697; 
BgL_rz00_1420 = BgL_rz00_2695; 
goto BgL_loopz00_1419;} } } } } } } } } } 

}



/* &vector-copy3 */
obj_t BGl_z62vectorzd2copy3zb0zz__r4_vectors_6_8z00(obj_t BgL_envz00_1760, obj_t BgL_oldzd2veczd2_1761, obj_t BgL_startz00_1762, obj_t BgL_stopz00_1763)
{
{ /* Ieee/vector.scm 254 */
{ /* Ieee/vector.scm 255 */
obj_t BgL_auxz00_2698;
if(
VECTORP(BgL_oldzd2veczd2_1761))
{ /* Ieee/vector.scm 255 */
BgL_auxz00_2698 = BgL_oldzd2veczd2_1761
; }  else 
{ 
obj_t BgL_auxz00_2701;
BgL_auxz00_2701 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)11344)), BGl_string1965z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_oldzd2veczd2_1761); 
FAILURE(BgL_auxz00_2701,BFALSE,BFALSE);} 
return 
BGl_vectorzd2copy3zd2zz__r4_vectors_6_8z00(BgL_auxz00_2698, BgL_startz00_1762, BgL_stopz00_1763);} } 

}



/* vector-copy */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2copyzd2zz__r4_vectors_6_8z00(obj_t BgL_oldzd2veczd2_36, obj_t BgL_argsz00_37)
{
{ /* Ieee/vector.scm 274 */
{ /* Ieee/vector.scm 275 */
obj_t BgL_startz00_820;
if(
PAIRP(BgL_argsz00_37))
{ /* Ieee/vector.scm 276 */
if(
INTEGERP(
CAR(BgL_argsz00_37)))
{ /* Ieee/vector.scm 277 */
BgL_startz00_820 = 
CAR(BgL_argsz00_37); }  else 
{ /* Ieee/vector.scm 277 */
BgL_startz00_820 = 
BGl_errorz00zz__errorz00(BGl_string1963z00zz__r4_vectors_6_8z00, BGl_string1966z00zz__r4_vectors_6_8z00, 
CAR(BgL_argsz00_37)); } }  else 
{ /* Ieee/vector.scm 276 */
BgL_startz00_820 = 
BINT(((long)0)); } 
{ /* Ieee/vector.scm 276 */
obj_t BgL_stopz00_821;
{ /* Ieee/vector.scm 281 */
bool_t BgL_test2298z00_2715;
if(
PAIRP(BgL_argsz00_37))
{ /* Ieee/vector.scm 281 */
obj_t BgL_tmpz00_2718;
BgL_tmpz00_2718 = 
CDR(BgL_argsz00_37); 
BgL_test2298z00_2715 = 
PAIRP(BgL_tmpz00_2718); }  else 
{ /* Ieee/vector.scm 281 */
BgL_test2298z00_2715 = ((bool_t)0)
; } 
if(BgL_test2298z00_2715)
{ /* Ieee/vector.scm 282 */
bool_t BgL_test2300z00_2721;
{ /* Ieee/vector.scm 282 */
bool_t BgL_test2301z00_2722;
{ /* Ieee/vector.scm 282 */
obj_t BgL_tmpz00_2723;
{ /* Ieee/vector.scm 282 */
obj_t BgL_pairz00_1449;
{ /* Ieee/vector.scm 282 */
obj_t BgL_aux1801z00_1904;
BgL_aux1801z00_1904 = 
CDR(BgL_argsz00_37); 
if(
PAIRP(BgL_aux1801z00_1904))
{ /* Ieee/vector.scm 282 */
BgL_pairz00_1449 = BgL_aux1801z00_1904; }  else 
{ 
obj_t BgL_auxz00_2727;
BgL_auxz00_2727 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)12358)), BGl_string1963z00zz__r4_vectors_6_8z00, BGl_string1950z00zz__r4_vectors_6_8z00, BgL_aux1801z00_1904); 
FAILURE(BgL_auxz00_2727,BFALSE,BFALSE);} } 
BgL_tmpz00_2723 = 
CDR(BgL_pairz00_1449); } 
BgL_test2301z00_2722 = 
PAIRP(BgL_tmpz00_2723); } 
if(BgL_test2301z00_2722)
{ /* Ieee/vector.scm 282 */
BgL_test2300z00_2721 = ((bool_t)1)
; }  else 
{ /* Ieee/vector.scm 283 */
bool_t BgL_test2303z00_2733;
{ /* Ieee/vector.scm 283 */
obj_t BgL_tmpz00_2734;
{ /* Ieee/vector.scm 283 */
obj_t BgL_pairz00_1454;
{ /* Ieee/vector.scm 283 */
obj_t BgL_aux1803z00_1906;
BgL_aux1803z00_1906 = 
CDR(BgL_argsz00_37); 
if(
PAIRP(BgL_aux1803z00_1906))
{ /* Ieee/vector.scm 283 */
BgL_pairz00_1454 = BgL_aux1803z00_1906; }  else 
{ 
obj_t BgL_auxz00_2738;
BgL_auxz00_2738 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)12392)), BGl_string1963z00zz__r4_vectors_6_8z00, BGl_string1950z00zz__r4_vectors_6_8z00, BgL_aux1803z00_1906); 
FAILURE(BgL_auxz00_2738,BFALSE,BFALSE);} } 
BgL_tmpz00_2734 = 
CAR(BgL_pairz00_1454); } 
BgL_test2303z00_2733 = 
INTEGERP(BgL_tmpz00_2734); } 
if(BgL_test2303z00_2733)
{ /* Ieee/vector.scm 283 */
BgL_test2300z00_2721 = ((bool_t)0)
; }  else 
{ /* Ieee/vector.scm 283 */
BgL_test2300z00_2721 = ((bool_t)1)
; } } } 
if(BgL_test2300z00_2721)
{ /* Ieee/vector.scm 282 */
BgL_stopz00_821 = 
BGl_errorz00zz__errorz00(BGl_string1963z00zz__r4_vectors_6_8z00, BGl_string1966z00zz__r4_vectors_6_8z00, 
CDR(BgL_argsz00_37)); }  else 
{ /* Ieee/vector.scm 285 */
obj_t BgL_pairz00_1460;
{ /* Ieee/vector.scm 285 */
obj_t BgL_aux1805z00_1908;
BgL_aux1805z00_1908 = 
CDR(BgL_argsz00_37); 
if(
PAIRP(BgL_aux1805z00_1908))
{ /* Ieee/vector.scm 285 */
BgL_pairz00_1460 = BgL_aux1805z00_1908; }  else 
{ 
obj_t BgL_auxz00_2749;
BgL_auxz00_2749 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)12465)), BGl_string1963z00zz__r4_vectors_6_8z00, BGl_string1950z00zz__r4_vectors_6_8z00, BgL_aux1805z00_1908); 
FAILURE(BgL_auxz00_2749,BFALSE,BFALSE);} } 
BgL_stopz00_821 = 
CAR(BgL_pairz00_1460); } }  else 
{ /* Ieee/vector.scm 281 */
BgL_stopz00_821 = 
BINT(
VECTOR_LENGTH(BgL_oldzd2veczd2_36)); } } 
{ /* Ieee/vector.scm 281 */

return 
BGl_vectorzd2copy3zd2zz__r4_vectors_6_8z00(BgL_oldzd2veczd2_36, BgL_startz00_820, BgL_stopz00_821);} } } } 

}



/* &vector-copy */
obj_t BGl_z62vectorzd2copyzb0zz__r4_vectors_6_8z00(obj_t BgL_envz00_1764, obj_t BgL_oldzd2veczd2_1765, obj_t BgL_argsz00_1766)
{
{ /* Ieee/vector.scm 274 */
{ /* Ieee/vector.scm 275 */
obj_t BgL_auxz00_2757;
if(
VECTORP(BgL_oldzd2veczd2_1765))
{ /* Ieee/vector.scm 275 */
BgL_auxz00_2757 = BgL_oldzd2veczd2_1765
; }  else 
{ 
obj_t BgL_auxz00_2760;
BgL_auxz00_2760 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)12103)), BGl_string1967z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_oldzd2veczd2_1765); 
FAILURE(BgL_auxz00_2760,BFALSE,BFALSE);} 
return 
BGl_vectorzd2copyzd2zz__r4_vectors_6_8z00(BgL_auxz00_2757, BgL_argsz00_1766);} } 

}



/* _vector-copy! */
obj_t BGl__vectorzd2copyz12zc0zz__r4_vectors_6_8z00(obj_t BgL_env1060z00_44, obj_t BgL_opt1059z00_43)
{
{ /* Ieee/vector.scm 292 */
{ /* Ieee/vector.scm 292 */
obj_t BgL_g1061z00_844;obj_t BgL_g1062z00_845;obj_t BgL_sourcez00_846;
BgL_g1061z00_844 = 
VECTOR_REF(BgL_opt1059z00_43,((long)0)); 
BgL_g1062z00_845 = 
VECTOR_REF(BgL_opt1059z00_43,((long)1)); 
BgL_sourcez00_846 = 
VECTOR_REF(BgL_opt1059z00_43,((long)2)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1059z00_43)) { case ((long)3) : 

{ /* Ieee/vector.scm 293 */
long BgL_sendz00_851;
{ /* Ieee/vector.scm 293 */
obj_t BgL_vectorz00_1461;
if(
VECTORP(BgL_sourcez00_846))
{ /* Ieee/vector.scm 293 */
BgL_vectorz00_1461 = BgL_sourcez00_846; }  else 
{ 
obj_t BgL_auxz00_2770;
BgL_auxz00_2770 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)12868)), BGl_string1971z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_sourcez00_846); 
FAILURE(BgL_auxz00_2770,BFALSE,BFALSE);} 
BgL_sendz00_851 = 
VECTOR_LENGTH(BgL_vectorz00_1461); } 
{ /* Ieee/vector.scm 292 */

{ /* Ieee/vector.scm 292 */
long BgL_auxz00_2782;obj_t BgL_auxz00_2775;
{ /* Ieee/vector.scm 292 */
obj_t BgL_tmpz00_2783;
if(
INTEGERP(BgL_g1062z00_845))
{ /* Ieee/vector.scm 292 */
BgL_tmpz00_2783 = BgL_g1062z00_845
; }  else 
{ 
obj_t BgL_auxz00_2786;
BgL_auxz00_2786 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)12760)), BGl_string1971z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_g1062z00_845); 
FAILURE(BgL_auxz00_2786,BFALSE,BFALSE);} 
BgL_auxz00_2782 = 
(long)CINT(BgL_tmpz00_2783); } 
if(
VECTORP(BgL_g1061z00_844))
{ /* Ieee/vector.scm 292 */
BgL_auxz00_2775 = BgL_g1061z00_844
; }  else 
{ 
obj_t BgL_auxz00_2778;
BgL_auxz00_2778 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)12760)), BGl_string1971z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_g1061z00_844); 
FAILURE(BgL_auxz00_2778,BFALSE,BFALSE);} 
return 
BGl_vectorzd2copyz12zc0zz__r4_vectors_6_8z00(BgL_auxz00_2775, BgL_auxz00_2782, BgL_sourcez00_846, 
BINT(((long)0)), 
BINT(BgL_sendz00_851));} } } break;case ((long)4) : 

{ /* Ieee/vector.scm 292 */
obj_t BgL_sstartz00_852;
BgL_sstartz00_852 = 
VECTOR_REF(BgL_opt1059z00_43,((long)3)); 
{ /* Ieee/vector.scm 293 */
long BgL_sendz00_853;
{ /* Ieee/vector.scm 293 */
obj_t BgL_vectorz00_1462;
if(
VECTORP(BgL_sourcez00_846))
{ /* Ieee/vector.scm 293 */
BgL_vectorz00_1462 = BgL_sourcez00_846; }  else 
{ 
obj_t BgL_auxz00_2797;
BgL_auxz00_2797 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)12868)), BGl_string1971z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_sourcez00_846); 
FAILURE(BgL_auxz00_2797,BFALSE,BFALSE);} 
BgL_sendz00_853 = 
VECTOR_LENGTH(BgL_vectorz00_1462); } 
{ /* Ieee/vector.scm 292 */

{ /* Ieee/vector.scm 292 */
long BgL_auxz00_2809;obj_t BgL_auxz00_2802;
{ /* Ieee/vector.scm 292 */
obj_t BgL_tmpz00_2810;
if(
INTEGERP(BgL_g1062z00_845))
{ /* Ieee/vector.scm 292 */
BgL_tmpz00_2810 = BgL_g1062z00_845
; }  else 
{ 
obj_t BgL_auxz00_2813;
BgL_auxz00_2813 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)12760)), BGl_string1971z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_g1062z00_845); 
FAILURE(BgL_auxz00_2813,BFALSE,BFALSE);} 
BgL_auxz00_2809 = 
(long)CINT(BgL_tmpz00_2810); } 
if(
VECTORP(BgL_g1061z00_844))
{ /* Ieee/vector.scm 292 */
BgL_auxz00_2802 = BgL_g1061z00_844
; }  else 
{ 
obj_t BgL_auxz00_2805;
BgL_auxz00_2805 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)12760)), BGl_string1971z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_g1061z00_844); 
FAILURE(BgL_auxz00_2805,BFALSE,BFALSE);} 
return 
BGl_vectorzd2copyz12zc0zz__r4_vectors_6_8z00(BgL_auxz00_2802, BgL_auxz00_2809, BgL_sourcez00_846, BgL_sstartz00_852, 
BINT(BgL_sendz00_853));} } } } break;case ((long)5) : 

{ /* Ieee/vector.scm 292 */
obj_t BgL_sstartz00_854;
BgL_sstartz00_854 = 
VECTOR_REF(BgL_opt1059z00_43,((long)3)); 
{ /* Ieee/vector.scm 292 */
obj_t BgL_sendz00_855;
BgL_sendz00_855 = 
VECTOR_REF(BgL_opt1059z00_43,((long)4)); 
{ /* Ieee/vector.scm 292 */

{ /* Ieee/vector.scm 292 */
long BgL_auxz00_2829;obj_t BgL_auxz00_2822;
{ /* Ieee/vector.scm 292 */
obj_t BgL_tmpz00_2830;
if(
INTEGERP(BgL_g1062z00_845))
{ /* Ieee/vector.scm 292 */
BgL_tmpz00_2830 = BgL_g1062z00_845
; }  else 
{ 
obj_t BgL_auxz00_2833;
BgL_auxz00_2833 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)12760)), BGl_string1971z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_g1062z00_845); 
FAILURE(BgL_auxz00_2833,BFALSE,BFALSE);} 
BgL_auxz00_2829 = 
(long)CINT(BgL_tmpz00_2830); } 
if(
VECTORP(BgL_g1061z00_844))
{ /* Ieee/vector.scm 292 */
BgL_auxz00_2822 = BgL_g1061z00_844
; }  else 
{ 
obj_t BgL_auxz00_2825;
BgL_auxz00_2825 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)12760)), BGl_string1971z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_g1061z00_844); 
FAILURE(BgL_auxz00_2825,BFALSE,BFALSE);} 
return 
BGl_vectorzd2copyz12zc0zz__r4_vectors_6_8z00(BgL_auxz00_2822, BgL_auxz00_2829, BgL_sourcez00_846, BgL_sstartz00_854, BgL_sendz00_855);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol1968z00zz__r4_vectors_6_8z00, BGl_string1970z00zz__r4_vectors_6_8z00, 
BINT(
VECTOR_LENGTH(BgL_opt1059z00_43)));} } } } 

}



/* vector-copy! */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2copyz12zc0zz__r4_vectors_6_8z00(obj_t BgL_targetz00_38, long BgL_tstartz00_39, obj_t BgL_sourcez00_40, obj_t BgL_sstartz00_41, obj_t BgL_sendz00_42)
{
{ /* Ieee/vector.scm 292 */
{ /* Ieee/vector.scm 294 */
obj_t BgL_endz00_857;
{ /* Ieee/vector.scm 294 */
long BgL_bz00_897;
{ /* Ieee/vector.scm 294 */
obj_t BgL_vectorz00_1463;
if(
VECTORP(BgL_sourcez00_40))
{ /* Ieee/vector.scm 294 */
BgL_vectorz00_1463 = BgL_sourcez00_40; }  else 
{ 
obj_t BgL_auxz00_2846;
BgL_auxz00_2846 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)12920)), BGl_string1969z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_sourcez00_40); 
FAILURE(BgL_auxz00_2846,BFALSE,BFALSE);} 
BgL_bz00_897 = 
VECTOR_LENGTH(BgL_vectorz00_1463); } 
{ /* Ieee/vector.scm 294 */
bool_t BgL_test2316z00_2851;
{ /* Ieee/vector.scm 294 */
long BgL_n1z00_1464;
{ /* Ieee/vector.scm 294 */
obj_t BgL_tmpz00_2852;
if(
INTEGERP(BgL_sendz00_42))
{ /* Ieee/vector.scm 294 */
BgL_tmpz00_2852 = BgL_sendz00_42
; }  else 
{ 
obj_t BgL_auxz00_2855;
BgL_auxz00_2855 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)12905)), BGl_string1969z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_sendz00_42); 
FAILURE(BgL_auxz00_2855,BFALSE,BFALSE);} 
BgL_n1z00_1464 = 
(long)CINT(BgL_tmpz00_2852); } 
BgL_test2316z00_2851 = 
(BgL_n1z00_1464<BgL_bz00_897); } 
if(BgL_test2316z00_2851)
{ /* Ieee/vector.scm 294 */
BgL_endz00_857 = BgL_sendz00_42; }  else 
{ /* Ieee/vector.scm 294 */
BgL_endz00_857 = 
BINT(BgL_bz00_897); } } } 
{ /* Ieee/vector.scm 294 */
long BgL_countz00_858;
{ /* Ieee/vector.scm 295 */
long BgL_za71za7_1467;long BgL_za72za7_1468;
{ /* Ieee/vector.scm 295 */
obj_t BgL_tmpz00_2862;
if(
INTEGERP(BgL_endz00_857))
{ /* Ieee/vector.scm 295 */
BgL_tmpz00_2862 = BgL_endz00_857
; }  else 
{ 
obj_t BgL_auxz00_2865;
BgL_auxz00_2865 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)12952)), BGl_string1969z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_endz00_857); 
FAILURE(BgL_auxz00_2865,BFALSE,BFALSE);} 
BgL_za71za7_1467 = 
(long)CINT(BgL_tmpz00_2862); } 
{ /* Ieee/vector.scm 295 */
obj_t BgL_tmpz00_2870;
if(
INTEGERP(BgL_sstartz00_41))
{ /* Ieee/vector.scm 295 */
BgL_tmpz00_2870 = BgL_sstartz00_41
; }  else 
{ 
obj_t BgL_auxz00_2873;
BgL_auxz00_2873 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)12956)), BGl_string1969z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_sstartz00_41); 
FAILURE(BgL_auxz00_2873,BFALSE,BFALSE);} 
BgL_za72za7_1468 = 
(long)CINT(BgL_tmpz00_2870); } 
BgL_countz00_858 = 
(BgL_za71za7_1467-BgL_za72za7_1468); } 
{ /* Ieee/vector.scm 295 */
long BgL_tendz00_859;
{ /* Ieee/vector.scm 296 */
long BgL_az00_893;
BgL_az00_893 = 
(BgL_tstartz00_39+BgL_countz00_858); 
if(
(BgL_az00_893<
VECTOR_LENGTH(BgL_targetz00_38)))
{ /* Ieee/vector.scm 296 */
BgL_tendz00_859 = BgL_az00_893; }  else 
{ /* Ieee/vector.scm 296 */
BgL_tendz00_859 = 
VECTOR_LENGTH(BgL_targetz00_38); } } 
{ /* Ieee/vector.scm 296 */

{ /* Ieee/vector.scm 297 */
bool_t BgL_test2321z00_2884;
if(
(BgL_targetz00_38==BgL_sourcez00_40))
{ /* Ieee/vector.scm 298 */
bool_t BgL_test2323z00_2887;
{ /* Ieee/vector.scm 298 */
long BgL_n1z00_1477;
{ /* Ieee/vector.scm 298 */
obj_t BgL_tmpz00_2888;
if(
INTEGERP(BgL_sstartz00_41))
{ /* Ieee/vector.scm 298 */
BgL_tmpz00_2888 = BgL_sstartz00_41
; }  else 
{ 
obj_t BgL_auxz00_2891;
BgL_auxz00_2891 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)13088)), BGl_string1969z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_sstartz00_41); 
FAILURE(BgL_auxz00_2891,BFALSE,BFALSE);} 
BgL_n1z00_1477 = 
(long)CINT(BgL_tmpz00_2888); } 
BgL_test2323z00_2887 = 
(BgL_n1z00_1477<BgL_tstartz00_39); } 
if(BgL_test2323z00_2887)
{ /* Ieee/vector.scm 299 */
long BgL_tmpz00_2897;
{ /* Ieee/vector.scm 299 */
long BgL_za71za7_1483;
{ /* Ieee/vector.scm 299 */
obj_t BgL_tmpz00_2898;
if(
INTEGERP(BgL_sstartz00_41))
{ /* Ieee/vector.scm 299 */
BgL_tmpz00_2898 = BgL_sstartz00_41
; }  else 
{ 
obj_t BgL_auxz00_2901;
BgL_auxz00_2901 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)13135)), BGl_string1969z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_sstartz00_41); 
FAILURE(BgL_auxz00_2901,BFALSE,BFALSE);} 
BgL_za71za7_1483 = 
(long)CINT(BgL_tmpz00_2898); } 
{ /* Ieee/vector.scm 299 */
long BgL_tmpz00_2906;
{ /* Ieee/vector.scm 299 */
long BgL_za71za7_1480;long BgL_za72za7_1481;
{ /* Ieee/vector.scm 299 */
obj_t BgL_tmpz00_2907;
if(
INTEGERP(BgL_sendz00_42))
{ /* Ieee/vector.scm 299 */
BgL_tmpz00_2907 = BgL_sendz00_42
; }  else 
{ 
obj_t BgL_auxz00_2910;
BgL_auxz00_2910 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)13147)), BGl_string1969z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_sendz00_42); 
FAILURE(BgL_auxz00_2910,BFALSE,BFALSE);} 
BgL_za71za7_1480 = 
(long)CINT(BgL_tmpz00_2907); } 
{ /* Ieee/vector.scm 299 */
obj_t BgL_tmpz00_2915;
if(
INTEGERP(BgL_sstartz00_41))
{ /* Ieee/vector.scm 299 */
BgL_tmpz00_2915 = BgL_sstartz00_41
; }  else 
{ 
obj_t BgL_auxz00_2918;
BgL_auxz00_2918 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)13152)), BGl_string1969z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_sstartz00_41); 
FAILURE(BgL_auxz00_2918,BFALSE,BFALSE);} 
BgL_za72za7_1481 = 
(long)CINT(BgL_tmpz00_2915); } 
BgL_tmpz00_2906 = 
(BgL_za71za7_1480-BgL_za72za7_1481); } 
BgL_tmpz00_2897 = 
(BgL_za71za7_1483+BgL_tmpz00_2906); } } 
BgL_test2321z00_2884 = 
(BgL_tstartz00_39<BgL_tmpz00_2897); }  else 
{ /* Ieee/vector.scm 298 */
BgL_test2321z00_2884 = ((bool_t)0)
; } }  else 
{ /* Ieee/vector.scm 297 */
BgL_test2321z00_2884 = ((bool_t)0)
; } 
if(BgL_test2321z00_2884)
{ /* Ieee/vector.scm 300 */
long BgL_g1018z00_865;long BgL_g1019z00_866;
{ /* Ieee/vector.scm 300 */
long BgL_za71za7_1489;
{ /* Ieee/vector.scm 300 */
obj_t BgL_tmpz00_2926;
if(
INTEGERP(BgL_endz00_857))
{ /* Ieee/vector.scm 300 */
BgL_tmpz00_2926 = BgL_endz00_857
; }  else 
{ 
obj_t BgL_auxz00_2929;
BgL_auxz00_2929 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)13193)), BGl_string1969z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_endz00_857); 
FAILURE(BgL_auxz00_2929,BFALSE,BFALSE);} 
BgL_za71za7_1489 = 
(long)CINT(BgL_tmpz00_2926); } 
BgL_g1018z00_865 = 
(BgL_za71za7_1489-((long)1)); } 
BgL_g1019z00_866 = 
(BgL_tendz00_859-((long)1)); 
{ 
long BgL_iz00_868;long BgL_jz00_869;
{ /* Ieee/vector.scm 300 */
bool_t BgL_tmpz00_2936;
BgL_iz00_868 = BgL_g1018z00_865; 
BgL_jz00_869 = BgL_g1019z00_866; 
BgL_zc3z04anonymousza31234ze3z87_870:
{ /* Ieee/vector.scm 302 */
bool_t BgL_test2329z00_2937;
{ /* Ieee/vector.scm 302 */
bool_t BgL_test2330z00_2938;
{ /* Ieee/vector.scm 302 */
long BgL_n2z00_1494;
{ /* Ieee/vector.scm 302 */
obj_t BgL_tmpz00_2939;
if(
INTEGERP(BgL_sstartz00_41))
{ /* Ieee/vector.scm 302 */
BgL_tmpz00_2939 = BgL_sstartz00_41
; }  else 
{ 
obj_t BgL_auxz00_2942;
BgL_auxz00_2942 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)13272)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_sstartz00_41); 
FAILURE(BgL_auxz00_2942,BFALSE,BFALSE);} 
BgL_n2z00_1494 = 
(long)CINT(BgL_tmpz00_2939); } 
BgL_test2330z00_2938 = 
(BgL_iz00_868>=BgL_n2z00_1494); } 
if(BgL_test2330z00_2938)
{ /* Ieee/vector.scm 302 */
BgL_test2329z00_2937 = 
(BgL_jz00_869>=BgL_tstartz00_39)
; }  else 
{ /* Ieee/vector.scm 302 */
BgL_test2329z00_2937 = ((bool_t)0)
; } } 
if(BgL_test2329z00_2937)
{ /* Ieee/vector.scm 302 */
{ /* Ieee/vector.scm 303 */
obj_t BgL_arg1239z00_873;
{ /* Ieee/vector.scm 303 */
obj_t BgL_vectorz00_1499;
if(
VECTORP(BgL_sourcez00_40))
{ /* Ieee/vector.scm 303 */
BgL_vectorz00_1499 = BgL_sourcez00_40; }  else 
{ 
obj_t BgL_auxz00_2951;
BgL_auxz00_2951 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)13353)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_sourcez00_40); 
FAILURE(BgL_auxz00_2951,BFALSE,BFALSE);} 
BgL_arg1239z00_873 = 
VECTOR_REF(BgL_vectorz00_1499,BgL_iz00_868); } 
VECTOR_SET(BgL_targetz00_38,BgL_jz00_869,BgL_arg1239z00_873); } 
{ 
long BgL_jz00_2959;long BgL_iz00_2957;
BgL_iz00_2957 = 
(BgL_iz00_868-((long)1)); 
BgL_jz00_2959 = 
(BgL_jz00_869-((long)1)); 
BgL_jz00_869 = BgL_jz00_2959; 
BgL_iz00_868 = BgL_iz00_2957; 
goto BgL_zc3z04anonymousza31234ze3z87_870;} }  else 
{ /* Ieee/vector.scm 302 */
BgL_tmpz00_2936 = ((bool_t)0)
; } } 
return 
BBOOL(BgL_tmpz00_2936);} } }  else 
{ 
obj_t BgL_iz00_879;long BgL_jz00_880;
{ /* Ieee/vector.scm 305 */
bool_t BgL_tmpz00_2962;
BgL_iz00_879 = BgL_sstartz00_41; 
BgL_jz00_880 = BgL_tstartz00_39; 
BgL_zc3z04anonymousza31244ze3z87_881:
{ /* Ieee/vector.scm 307 */
bool_t BgL_test2333z00_2963;
{ /* Ieee/vector.scm 307 */
bool_t BgL_test2334z00_2964;
{ /* Ieee/vector.scm 307 */
long BgL_n1z00_1507;long BgL_n2z00_1508;
{ /* Ieee/vector.scm 307 */
obj_t BgL_tmpz00_2965;
if(
INTEGERP(BgL_iz00_879))
{ /* Ieee/vector.scm 307 */
BgL_tmpz00_2965 = BgL_iz00_879
; }  else 
{ 
obj_t BgL_auxz00_2968;
BgL_auxz00_2968 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)13503)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_iz00_879); 
FAILURE(BgL_auxz00_2968,BFALSE,BFALSE);} 
BgL_n1z00_1507 = 
(long)CINT(BgL_tmpz00_2965); } 
{ /* Ieee/vector.scm 307 */
obj_t BgL_tmpz00_2973;
if(
INTEGERP(BgL_endz00_857))
{ /* Ieee/vector.scm 307 */
BgL_tmpz00_2973 = BgL_endz00_857
; }  else 
{ 
obj_t BgL_auxz00_2976;
BgL_auxz00_2976 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)13505)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_endz00_857); 
FAILURE(BgL_auxz00_2976,BFALSE,BFALSE);} 
BgL_n2z00_1508 = 
(long)CINT(BgL_tmpz00_2973); } 
BgL_test2334z00_2964 = 
(BgL_n1z00_1507<BgL_n2z00_1508); } 
if(BgL_test2334z00_2964)
{ /* Ieee/vector.scm 307 */
BgL_test2333z00_2963 = 
(BgL_jz00_880<BgL_tendz00_859)
; }  else 
{ /* Ieee/vector.scm 307 */
BgL_test2333z00_2963 = ((bool_t)0)
; } } 
if(BgL_test2333z00_2963)
{ /* Ieee/vector.scm 307 */
{ /* Ieee/vector.scm 308 */
obj_t BgL_arg1247z00_884;
{ /* Ieee/vector.scm 308 */
obj_t BgL_vectorz00_1513;long BgL_kz00_1514;
if(
VECTORP(BgL_sourcez00_40))
{ /* Ieee/vector.scm 308 */
BgL_vectorz00_1513 = BgL_sourcez00_40; }  else 
{ 
obj_t BgL_auxz00_2985;
BgL_auxz00_2985 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)13580)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_sourcez00_40); 
FAILURE(BgL_auxz00_2985,BFALSE,BFALSE);} 
{ /* Ieee/vector.scm 308 */
obj_t BgL_tmpz00_2989;
if(
INTEGERP(BgL_iz00_879))
{ /* Ieee/vector.scm 308 */
BgL_tmpz00_2989 = BgL_iz00_879
; }  else 
{ 
obj_t BgL_auxz00_2992;
BgL_auxz00_2992 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)13587)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_iz00_879); 
FAILURE(BgL_auxz00_2992,BFALSE,BFALSE);} 
BgL_kz00_1514 = 
(long)CINT(BgL_tmpz00_2989); } 
BgL_arg1247z00_884 = 
VECTOR_REF(BgL_vectorz00_1513,BgL_kz00_1514); } 
VECTOR_SET(BgL_targetz00_38,BgL_jz00_880,BgL_arg1247z00_884); } 
{ /* Ieee/vector.scm 309 */
long BgL_arg1250z00_885;long BgL_arg1252z00_886;
{ /* Ieee/vector.scm 309 */
long BgL_za71za7_1517;
{ /* Ieee/vector.scm 309 */
obj_t BgL_tmpz00_2999;
if(
INTEGERP(BgL_iz00_879))
{ /* Ieee/vector.scm 309 */
BgL_tmpz00_2999 = BgL_iz00_879
; }  else 
{ 
obj_t BgL_auxz00_3002;
BgL_auxz00_3002 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)13618)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_iz00_879); 
FAILURE(BgL_auxz00_3002,BFALSE,BFALSE);} 
BgL_za71za7_1517 = 
(long)CINT(BgL_tmpz00_2999); } 
BgL_arg1250z00_885 = 
(BgL_za71za7_1517+((long)1)); } 
BgL_arg1252z00_886 = 
(BgL_jz00_880+((long)1)); 
{ 
long BgL_jz00_3011;obj_t BgL_iz00_3009;
BgL_iz00_3009 = 
BINT(BgL_arg1250z00_885); 
BgL_jz00_3011 = BgL_arg1252z00_886; 
BgL_jz00_880 = BgL_jz00_3011; 
BgL_iz00_879 = BgL_iz00_3009; 
goto BgL_zc3z04anonymousza31244ze3z87_881;} } }  else 
{ /* Ieee/vector.scm 307 */
BgL_tmpz00_2962 = ((bool_t)0)
; } } 
return 
BBOOL(BgL_tmpz00_2962);} } } } } } } } 

}



/* vector-append */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2appendzd2zz__r4_vectors_6_8z00(obj_t BgL_vecz00_45, obj_t BgL_argsz00_46)
{
{ /* Ieee/vector.scm 314 */
{ 
long BgL_lenz00_901;obj_t BgL_vectsz00_902;
BgL_lenz00_901 = 
VECTOR_LENGTH(BgL_vecz00_45); 
BgL_vectsz00_902 = BgL_argsz00_46; 
BgL_zc3z04anonymousza31257ze3z87_903:
if(
NULLP(BgL_vectsz00_902))
{ /* Ieee/vector.scm 318 */
obj_t BgL_resz00_905;
BgL_resz00_905 = 
make_vector(BgL_lenz00_901, BUNSPEC); 
{ /* Ieee/vector.scm 110 */

BGl_vectorzd2copyz12zc0zz__r4_vectors_6_8z00(BgL_resz00_905, ((long)0), BgL_vecz00_45, 
BINT(((long)0)), 
BINT(
VECTOR_LENGTH(BgL_vecz00_45))); } 
{ 
long BgL_iz00_913;obj_t BgL_vectsz00_914;
BgL_iz00_913 = 
VECTOR_LENGTH(BgL_vecz00_45); 
BgL_vectsz00_914 = BgL_argsz00_46; 
BgL_zc3z04anonymousza31259ze3z87_915:
if(
NULLP(BgL_vectsz00_914))
{ /* Ieee/vector.scm 322 */
return BgL_resz00_905;}  else 
{ /* Ieee/vector.scm 324 */
obj_t BgL_vecz00_917;
{ /* Ieee/vector.scm 324 */
obj_t BgL_pairz00_1527;
if(
PAIRP(BgL_vectsz00_914))
{ /* Ieee/vector.scm 324 */
BgL_pairz00_1527 = BgL_vectsz00_914; }  else 
{ 
obj_t BgL_auxz00_3024;
BgL_auxz00_3024 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)14173)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1950z00zz__r4_vectors_6_8z00, BgL_vectsz00_914); 
FAILURE(BgL_auxz00_3024,BFALSE,BFALSE);} 
BgL_vecz00_917 = 
CAR(BgL_pairz00_1527); } 
{ /* Ieee/vector.scm 110 */
long BgL_sendz00_922;
{ /* Ieee/vector.scm 110 */
obj_t BgL_vectorz00_1528;
if(
VECTORP(BgL_vecz00_917))
{ /* Ieee/vector.scm 110 */
BgL_vectorz00_1528 = BgL_vecz00_917; }  else 
{ 
obj_t BgL_auxz00_3031;
BgL_auxz00_3031 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)4998)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vecz00_917); 
FAILURE(BgL_auxz00_3031,BFALSE,BFALSE);} 
BgL_sendz00_922 = 
VECTOR_LENGTH(BgL_vectorz00_1528); } 
{ /* Ieee/vector.scm 110 */

BGl_vectorzd2copyz12zc0zz__r4_vectors_6_8z00(BgL_resz00_905, BgL_iz00_913, BgL_vecz00_917, 
BINT(((long)0)), 
BINT(BgL_sendz00_922)); } } 
{ /* Ieee/vector.scm 326 */
long BgL_arg1263z00_923;obj_t BgL_arg1268z00_924;
{ /* Ieee/vector.scm 326 */
long BgL_arg1270z00_925;
{ /* Ieee/vector.scm 326 */
obj_t BgL_vectorz00_1529;
if(
VECTORP(BgL_vecz00_917))
{ /* Ieee/vector.scm 326 */
BgL_vectorz00_1529 = BgL_vecz00_917; }  else 
{ 
obj_t BgL_auxz00_3041;
BgL_auxz00_3041 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)14253)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vecz00_917); 
FAILURE(BgL_auxz00_3041,BFALSE,BFALSE);} 
BgL_arg1270z00_925 = 
VECTOR_LENGTH(BgL_vectorz00_1529); } 
BgL_arg1263z00_923 = 
(BgL_iz00_913+BgL_arg1270z00_925); } 
{ /* Ieee/vector.scm 326 */
obj_t BgL_pairz00_1533;
if(
PAIRP(BgL_vectsz00_914))
{ /* Ieee/vector.scm 326 */
BgL_pairz00_1533 = BgL_vectsz00_914; }  else 
{ 
obj_t BgL_auxz00_3049;
BgL_auxz00_3049 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)14264)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1950z00zz__r4_vectors_6_8z00, BgL_vectsz00_914); 
FAILURE(BgL_auxz00_3049,BFALSE,BFALSE);} 
BgL_arg1268z00_924 = 
CDR(BgL_pairz00_1533); } 
{ 
obj_t BgL_vectsz00_3055;long BgL_iz00_3054;
BgL_iz00_3054 = BgL_arg1263z00_923; 
BgL_vectsz00_3055 = BgL_arg1268z00_924; 
BgL_vectsz00_914 = BgL_vectsz00_3055; 
BgL_iz00_913 = BgL_iz00_3054; 
goto BgL_zc3z04anonymousza31259ze3z87_915;} } } } }  else 
{ /* Ieee/vector.scm 327 */
long BgL_arg1273z00_928;obj_t BgL_arg1274z00_929;
{ /* Ieee/vector.scm 327 */
long BgL_arg1275z00_930;
{ /* Ieee/vector.scm 327 */
obj_t BgL_arg1276z00_931;
{ /* Ieee/vector.scm 327 */
obj_t BgL_pairz00_1534;
if(
PAIRP(BgL_vectsz00_902))
{ /* Ieee/vector.scm 327 */
BgL_pairz00_1534 = BgL_vectsz00_902; }  else 
{ 
obj_t BgL_auxz00_3059;
BgL_auxz00_3059 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)14310)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1950z00zz__r4_vectors_6_8z00, BgL_vectsz00_902); 
FAILURE(BgL_auxz00_3059,BFALSE,BFALSE);} 
BgL_arg1276z00_931 = 
CAR(BgL_pairz00_1534); } 
{ /* Ieee/vector.scm 327 */
obj_t BgL_vectorz00_1535;
if(
VECTORP(BgL_arg1276z00_931))
{ /* Ieee/vector.scm 327 */
BgL_vectorz00_1535 = BgL_arg1276z00_931; }  else 
{ 
obj_t BgL_auxz00_3066;
BgL_auxz00_3066 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)14315)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_arg1276z00_931); 
FAILURE(BgL_auxz00_3066,BFALSE,BFALSE);} 
BgL_arg1275z00_930 = 
VECTOR_LENGTH(BgL_vectorz00_1535); } } 
BgL_arg1273z00_928 = 
(BgL_arg1275z00_930+BgL_lenz00_901); } 
{ /* Ieee/vector.scm 327 */
obj_t BgL_pairz00_1539;
if(
PAIRP(BgL_vectsz00_902))
{ /* Ieee/vector.scm 327 */
BgL_pairz00_1539 = BgL_vectsz00_902; }  else 
{ 
obj_t BgL_auxz00_3074;
BgL_auxz00_3074 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)14328)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1950z00zz__r4_vectors_6_8z00, BgL_vectsz00_902); 
FAILURE(BgL_auxz00_3074,BFALSE,BFALSE);} 
BgL_arg1274z00_929 = 
CDR(BgL_pairz00_1539); } 
{ 
obj_t BgL_vectsz00_3080;long BgL_lenz00_3079;
BgL_lenz00_3079 = BgL_arg1273z00_928; 
BgL_vectsz00_3080 = BgL_arg1274z00_929; 
BgL_vectsz00_902 = BgL_vectsz00_3080; 
BgL_lenz00_901 = BgL_lenz00_3079; 
goto BgL_zc3z04anonymousza31257ze3z87_903;} } } } 

}



/* &vector-append */
obj_t BGl_z62vectorzd2appendzb0zz__r4_vectors_6_8z00(obj_t BgL_envz00_1767, obj_t BgL_vecz00_1768, obj_t BgL_argsz00_1769)
{
{ /* Ieee/vector.scm 314 */
{ /* Ieee/vector.scm 315 */
obj_t BgL_auxz00_3082;
if(
VECTORP(BgL_vecz00_1768))
{ /* Ieee/vector.scm 315 */
BgL_auxz00_3082 = BgL_vecz00_1768
; }  else 
{ 
obj_t BgL_auxz00_3085;
BgL_auxz00_3085 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)13916)), BGl_string1972z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vecz00_1768); 
FAILURE(BgL_auxz00_3085,BFALSE,BFALSE);} 
return 
BGl_vectorzd2appendzd2zz__r4_vectors_6_8z00(BgL_auxz00_3082, BgL_argsz00_1769);} } 

}



/* sort */
BGL_EXPORTED_DEF obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t BgL_o1z00_47, obj_t BgL_o2z00_48)
{
{ /* Ieee/vector.scm 332 */
if(
PROCEDUREP(BgL_o1z00_47))
{ /* Ieee/vector.scm 333 */
return 
BGl_innerzd2sortzd2zz__r4_vectors_6_8z00(BgL_o2z00_48, BgL_o1z00_47);}  else 
{ /* Ieee/vector.scm 335 */
obj_t BgL_auxz00_3093;
if(
PROCEDUREP(BgL_o2z00_48))
{ /* Ieee/vector.scm 335 */
BgL_auxz00_3093 = BgL_o2z00_48
; }  else 
{ 
obj_t BgL_auxz00_3096;
BgL_auxz00_3096 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)14654)), BGl_string1973z00zz__r4_vectors_6_8z00, BGl_string1974z00zz__r4_vectors_6_8z00, BgL_o2z00_48); 
FAILURE(BgL_auxz00_3096,BFALSE,BFALSE);} 
return 
BGl_innerzd2sortzd2zz__r4_vectors_6_8z00(BgL_o1z00_47, BgL_auxz00_3093);} } 

}



/* &sort */
obj_t BGl_z62sortz62zz__r4_vectors_6_8z00(obj_t BgL_envz00_1770, obj_t BgL_o1z00_1771, obj_t BgL_o2z00_1772)
{
{ /* Ieee/vector.scm 332 */
return 
BGl_sortz00zz__r4_vectors_6_8z00(BgL_o1z00_1771, BgL_o2z00_1772);} 

}



/* inner-sort */
obj_t BGl_innerzd2sortzd2zz__r4_vectors_6_8z00(obj_t BgL_objz00_49, obj_t BgL_procz00_50)
{
{ /* Ieee/vector.scm 340 */
if(
NULLP(BgL_objz00_49))
{ /* Ieee/vector.scm 342 */
return BgL_objz00_49;}  else 
{ /* Ieee/vector.scm 344 */
bool_t BgL_test2353z00_3104;
if(
PAIRP(BgL_objz00_49))
{ /* Ieee/vector.scm 344 */
BgL_test2353z00_3104 = 
NULLP(
CDR(BgL_objz00_49))
; }  else 
{ /* Ieee/vector.scm 344 */
BgL_test2353z00_3104 = ((bool_t)0)
; } 
if(BgL_test2353z00_3104)
{ /* Ieee/vector.scm 344 */
return BgL_objz00_49;}  else 
{ /* Ieee/vector.scm 347 */
obj_t BgL_vecz00_938;
if(
VECTORP(BgL_objz00_49))
{ /* Ieee/vector.scm 349 */
obj_t BgL_newz00_943;
BgL_newz00_943 = 
create_vector(
VECTOR_LENGTH(BgL_objz00_49)); 
{ /* Ieee/vector.scm 350 */

{ 
long BgL_iz00_945;
BgL_iz00_945 = ((long)0); 
BgL_zc3z04anonymousza31284ze3z87_946:
if(
(BgL_iz00_945<
VECTOR_LENGTH(BgL_objz00_49)))
{ /* Ieee/vector.scm 352 */
{ /* Ieee/vector.scm 354 */
obj_t BgL_arg1286z00_948;
BgL_arg1286z00_948 = 
VECTOR_REF(
((obj_t)BgL_objz00_49),BgL_iz00_945); 
VECTOR_SET(BgL_newz00_943,BgL_iz00_945,BgL_arg1286z00_948); } 
{ 
long BgL_iz00_3119;
BgL_iz00_3119 = 
(BgL_iz00_945+((long)1)); 
BgL_iz00_945 = BgL_iz00_3119; 
goto BgL_zc3z04anonymousza31284ze3z87_946;} }  else 
{ /* Ieee/vector.scm 352 */((bool_t)0); } } 
BgL_vecz00_938 = BgL_newz00_943; } }  else 
{ /* Ieee/vector.scm 348 */
if(
PAIRP(BgL_objz00_49))
{ /* Ieee/vector.scm 357 */
BgL_vecz00_938 = 
BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BgL_objz00_49); }  else 
{ /* Ieee/vector.scm 357 */
BgL_vecz00_938 = 
BGl_errorz00zz__errorz00(BGl_string1973z00zz__r4_vectors_6_8z00, BGl_string1975z00zz__r4_vectors_6_8z00, BgL_objz00_49); } } 
{ /* Ieee/vector.scm 363 */
obj_t BgL_resz00_939;
{ /* Ieee/vector.scm 363 */
obj_t BgL_tmpz00_3125;
if(
VECTORP(BgL_vecz00_938))
{ /* Ieee/vector.scm 363 */
BgL_tmpz00_3125 = BgL_vecz00_938
; }  else 
{ 
obj_t BgL_auxz00_3128;
BgL_auxz00_3128 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)15471)), BGl_string1976z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vecz00_938); 
FAILURE(BgL_auxz00_3128,BFALSE,BFALSE);} 
BgL_resz00_939 = 
sort_vector(BgL_tmpz00_3125, BgL_procz00_50); } 
if(
PAIRP(BgL_objz00_49))
{ /* Ieee/vector.scm 364 */
return 
BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(BgL_resz00_939);}  else 
{ /* Ieee/vector.scm 364 */
return BgL_resz00_939;} } } } } 

}



/* vector-map2! */
obj_t BGl_vectorzd2map2z12zc0zz__r4_vectors_6_8z00(obj_t BgL_procz00_51, obj_t BgL_vdestz00_52, obj_t BgL_vsrcz00_53)
{
{ /* Ieee/vector.scm 371 */
{ /* Ieee/vector.scm 372 */
long BgL_lenz00_954;
{ /* Ieee/vector.scm 372 */
obj_t BgL_vectorz00_1559;
if(
VECTORP(BgL_vdestz00_52))
{ /* Ieee/vector.scm 372 */
BgL_vectorz00_1559 = BgL_vdestz00_52; }  else 
{ 
obj_t BgL_auxz00_3138;
BgL_auxz00_3138 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)15831)), BGl_string1977z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vdestz00_52); 
FAILURE(BgL_auxz00_3138,BFALSE,BFALSE);} 
BgL_lenz00_954 = 
VECTOR_LENGTH(BgL_vectorz00_1559); } 
{ 
long BgL_iz00_956;
BgL_iz00_956 = ((long)0); 
BgL_zc3z04anonymousza31290ze3z87_957:
if(
(BgL_iz00_956<BgL_lenz00_954))
{ /* Ieee/vector.scm 374 */
{ /* Ieee/vector.scm 376 */
obj_t BgL_arg1292z00_959;
{ /* Ieee/vector.scm 376 */
obj_t BgL_arg1295z00_960;
BgL_arg1295z00_960 = 
VECTOR_REF(BgL_vsrcz00_53,BgL_iz00_956); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_51, ((long)1)))
{ /* Ieee/vector.scm 376 */
BgL_arg1292z00_959 = 
PROCEDURE_ENTRY(BgL_procz00_51)(BgL_procz00_51, BgL_arg1295z00_960, BEOA); }  else 
{ /* Ieee/vector.scm 376 */
FAILURE(BGl_string1978z00zz__r4_vectors_6_8z00,BGl_list1979z00zz__r4_vectors_6_8z00,BgL_procz00_51);} } 
{ /* Ieee/vector.scm 376 */
obj_t BgL_vectorz00_1565;
if(
VECTORP(BgL_vdestz00_52))
{ /* Ieee/vector.scm 376 */
BgL_vectorz00_1565 = BgL_vdestz00_52; }  else 
{ 
obj_t BgL_auxz00_3155;
BgL_auxz00_3155 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)15913)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vdestz00_52); 
FAILURE(BgL_auxz00_3155,BFALSE,BFALSE);} 
VECTOR_SET(BgL_vectorz00_1565,BgL_iz00_956,BgL_arg1292z00_959); } } 
{ 
long BgL_iz00_3160;
BgL_iz00_3160 = 
(BgL_iz00_956+((long)1)); 
BgL_iz00_956 = BgL_iz00_3160; 
goto BgL_zc3z04anonymousza31290ze3z87_957;} }  else 
{ /* Ieee/vector.scm 374 */
return BgL_vdestz00_52;} } } } 

}



/* vector-mapN! */
obj_t BGl_vectorzd2mapNz12zc0zz__r4_vectors_6_8z00(obj_t BgL_procz00_54, obj_t BgL_vdestz00_55, obj_t BgL_vsrcz00_56, obj_t BgL_vrestz00_57)
{
{ /* Ieee/vector.scm 383 */
{ /* Ieee/vector.scm 384 */
long BgL_lenz00_963;
{ /* Ieee/vector.scm 384 */
obj_t BgL_vectorz00_1569;
if(
VECTORP(BgL_vdestz00_55))
{ /* Ieee/vector.scm 384 */
BgL_vectorz00_1569 = BgL_vdestz00_55; }  else 
{ 
obj_t BgL_auxz00_3164;
BgL_auxz00_3164 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)16285)), BGl_string1986z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vdestz00_55); 
FAILURE(BgL_auxz00_3164,BFALSE,BFALSE);} 
BgL_lenz00_963 = 
VECTOR_LENGTH(BgL_vectorz00_1569); } 
{ 
long BgL_iz00_965;
BgL_iz00_965 = ((long)0); 
BgL_zc3z04anonymousza31297ze3z87_966:
if(
(BgL_iz00_965<BgL_lenz00_963))
{ /* Ieee/vector.scm 387 */
obj_t BgL_argsz00_968;
if(
NULLP(BgL_vrestz00_57))
{ /* Ieee/vector.scm 387 */
BgL_argsz00_968 = BNIL; }  else 
{ /* Ieee/vector.scm 387 */
obj_t BgL_head1038z00_975;
{ /* Ieee/vector.scm 387 */
obj_t BgL_res1662z00_1574;
BgL_res1662z00_1574 = 
MAKE_YOUNG_PAIR(BNIL, BNIL); 
BgL_head1038z00_975 = BgL_res1662z00_1574; } 
{ 
obj_t BgL_l1036z00_977;obj_t BgL_tail1039z00_978;
BgL_l1036z00_977 = BgL_vrestz00_57; 
BgL_tail1039z00_978 = BgL_head1038z00_975; 
BgL_zc3z04anonymousza31303ze3z87_979:
if(
PAIRP(BgL_l1036z00_977))
{ /* Ieee/vector.scm 387 */
obj_t BgL_newtail1040z00_981;
{ /* Ieee/vector.scm 387 */
obj_t BgL_arg1307z00_983;
{ /* Ieee/vector.scm 387 */
obj_t BgL_vz00_984;
BgL_vz00_984 = 
CAR(BgL_l1036z00_977); 
{ /* Ieee/vector.scm 387 */
obj_t BgL_vectorz00_1577;
if(
VECTORP(BgL_vz00_984))
{ /* Ieee/vector.scm 387 */
BgL_vectorz00_1577 = BgL_vz00_984; }  else 
{ 
obj_t BgL_auxz00_3179;
BgL_auxz00_3179 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)16384)), BGl_string1987z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vz00_984); 
FAILURE(BgL_auxz00_3179,BFALSE,BFALSE);} 
{ /* Ieee/vector.scm 158 */
bool_t BgL_test2369z00_3183;
{ /* Ieee/vector.scm 158 */
long BgL_tmpz00_3184;
BgL_tmpz00_3184 = 
VECTOR_LENGTH(BgL_vectorz00_1577); 
BgL_test2369z00_3183 = 
BOUND_CHECK(BgL_iz00_965, BgL_tmpz00_3184); } 
if(BgL_test2369z00_3183)
{ /* Ieee/vector.scm 158 */
BgL_arg1307z00_983 = 
VECTOR_REF(BgL_vectorz00_1577,BgL_iz00_965); }  else 
{ 
obj_t BgL_auxz00_3188;
BgL_auxz00_3188 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)7298)), BGl_string1942z00zz__r4_vectors_6_8z00, BgL_vectorz00_1577, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_1577)), 
(int)(BgL_iz00_965)); 
FAILURE(BgL_auxz00_3188,BFALSE,BFALSE);} } } } 
{ /* Ieee/vector.scm 387 */
obj_t BgL_res1664z00_1579;
BgL_res1664z00_1579 = 
MAKE_YOUNG_PAIR(BgL_arg1307z00_983, BNIL); 
BgL_newtail1040z00_981 = BgL_res1664z00_1579; } } 
SET_CDR(BgL_tail1039z00_978, BgL_newtail1040z00_981); 
{ 
obj_t BgL_tail1039z00_3199;obj_t BgL_l1036z00_3197;
BgL_l1036z00_3197 = 
CDR(BgL_l1036z00_977); 
BgL_tail1039z00_3199 = BgL_newtail1040z00_981; 
BgL_tail1039z00_978 = BgL_tail1039z00_3199; 
BgL_l1036z00_977 = BgL_l1036z00_3197; 
goto BgL_zc3z04anonymousza31303ze3z87_979;} }  else 
{ /* Ieee/vector.scm 387 */
if(
NULLP(BgL_l1036z00_977))
{ /* Ieee/vector.scm 387 */
BgL_argsz00_968 = 
CDR(BgL_head1038z00_975); }  else 
{ /* Ieee/vector.scm 387 */
BgL_argsz00_968 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string1988z00zz__r4_vectors_6_8z00, BGl_string1989z00zz__r4_vectors_6_8z00, BgL_l1036z00_977, BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)16355))); } } } } 
{ /* Ieee/vector.scm 387 */
obj_t BgL_nvalz00_969;
{ /* Ieee/vector.scm 388 */
obj_t BgL_valz00_1995;
{ /* Ieee/vector.scm 388 */
obj_t BgL_arg1300z00_971;
{ /* Ieee/vector.scm 158 */
bool_t BgL_test2371z00_3205;
{ /* Ieee/vector.scm 158 */
long BgL_tmpz00_3206;
BgL_tmpz00_3206 = 
VECTOR_LENGTH(BgL_vsrcz00_56); 
BgL_test2371z00_3205 = 
BOUND_CHECK(BgL_iz00_965, BgL_tmpz00_3206); } 
if(BgL_test2371z00_3205)
{ /* Ieee/vector.scm 158 */
BgL_arg1300z00_971 = 
VECTOR_REF(BgL_vsrcz00_56,BgL_iz00_965); }  else 
{ 
obj_t BgL_auxz00_3210;
BgL_auxz00_3210 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)7298)), BGl_string1942z00zz__r4_vectors_6_8z00, BgL_vsrcz00_56, 
(int)(
VECTOR_LENGTH(BgL_vsrcz00_56)), 
(int)(BgL_iz00_965)); 
FAILURE(BgL_auxz00_3210,BFALSE,BFALSE);} } 
{ /* Ieee/vector.scm 388 */
obj_t BgL_list1301z00_972;
BgL_list1301z00_972 = 
MAKE_YOUNG_PAIR(BgL_argsz00_968, BNIL); 
BgL_valz00_1995 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg1300z00_971, BgL_list1301z00_972); } } 
{ /* Ieee/vector.scm 388 */
int BgL_len1889z00_1996;
BgL_len1889z00_1996 = 
(int)(
bgl_list_length(BgL_valz00_1995)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_54, BgL_len1889z00_1996))
{ /* Ieee/vector.scm 388 */
BgL_nvalz00_969 = 
apply(BgL_procz00_54, BgL_valz00_1995); }  else 
{ /* Ieee/vector.scm 388 */
FAILURE(BGl_symbol1990z00zz__r4_vectors_6_8z00,BGl_string1991z00zz__r4_vectors_6_8z00,BGl_list1992z00zz__r4_vectors_6_8z00);} } } 
{ /* Ieee/vector.scm 388 */

{ /* Ieee/vector.scm 389 */
obj_t BgL_vectorz00_1586;
if(
VECTORP(BgL_vdestz00_55))
{ /* Ieee/vector.scm 389 */
BgL_vectorz00_1586 = BgL_vdestz00_55; }  else 
{ 
obj_t BgL_auxz00_3228;
BgL_auxz00_3228 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)16468)), BGl_string1949z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vdestz00_55); 
FAILURE(BgL_auxz00_3228,BFALSE,BFALSE);} 
VECTOR_SET(BgL_vectorz00_1586,BgL_iz00_965,BgL_nvalz00_969); } 
{ 
long BgL_iz00_3233;
BgL_iz00_3233 = 
(BgL_iz00_965+((long)1)); 
BgL_iz00_965 = BgL_iz00_3233; 
goto BgL_zc3z04anonymousza31297ze3z87_966;} } } }  else 
{ /* Ieee/vector.scm 386 */
return BgL_vdestz00_55;} } } } 

}



/* vector-map */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2mapzd2zz__r4_vectors_6_8z00(obj_t BgL_procz00_58, obj_t BgL_vz00_59, obj_t BgL_restz00_60)
{
{ /* Ieee/vector.scm 396 */
{ /* Ieee/vector.scm 397 */
obj_t BgL_nvz00_989;
BgL_nvz00_989 = 
create_vector(
VECTOR_LENGTH(BgL_vz00_59)); 
{ /* Ieee/vector.scm 398 */

if(
NULLP(BgL_restz00_60))
{ /* Ieee/vector.scm 401 */
obj_t BgL_aux1893z00_2000;
BgL_aux1893z00_2000 = 
BGl_vectorzd2map2z12zc0zz__r4_vectors_6_8z00(BgL_procz00_58, BgL_nvz00_989, BgL_vz00_59); 
if(
VECTORP(BgL_aux1893z00_2000))
{ /* Ieee/vector.scm 401 */
return BgL_aux1893z00_2000;}  else 
{ 
obj_t BgL_auxz00_3242;
BgL_auxz00_3242 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)16871)), BGl_string2068z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_aux1893z00_2000); 
FAILURE(BgL_auxz00_3242,BFALSE,BFALSE);} }  else 
{ /* Ieee/vector.scm 402 */
bool_t BgL_test2376z00_3246;
{ /* Ieee/vector.scm 402 */
obj_t BgL_zc3z04anonymousza31317ze3z87_1773;
BgL_zc3z04anonymousza31317ze3z87_1773 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31317ze3ze5zz__r4_vectors_6_8z00, 
(int)(((long)1)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31317ze3z87_1773, 
(int)(((long)0)), 
BINT(
VECTOR_LENGTH(BgL_vz00_59))); 
BgL_test2376z00_3246 = 
CBOOL(
BGl_everyz00zz__r4_pairs_and_lists_6_3z00(BgL_zc3z04anonymousza31317ze3z87_1773, BNIL)); } 
if(BgL_test2376z00_3246)
{ /* Ieee/vector.scm 403 */
obj_t BgL_aux1895z00_2002;
BgL_aux1895z00_2002 = 
BGl_vectorzd2mapNz12zc0zz__r4_vectors_6_8z00(BgL_procz00_58, BgL_nvz00_989, BgL_vz00_59, BgL_restz00_60); 
if(
VECTORP(BgL_aux1895z00_2002))
{ /* Ieee/vector.scm 403 */
return BgL_aux1895z00_2002;}  else 
{ 
obj_t BgL_auxz00_3259;
BgL_auxz00_3259 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)16970)), BGl_string2068z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_aux1895z00_2002); 
FAILURE(BgL_auxz00_3259,BFALSE,BFALSE);} }  else 
{ /* Ieee/vector.scm 405 */
obj_t BgL_aux1897z00_2004;
BgL_aux1897z00_2004 = 
BGl_errorz00zz__errorz00(BGl_string2068z00zz__r4_vectors_6_8z00, BGl_string2069z00zz__r4_vectors_6_8z00, BgL_restz00_60); 
if(
VECTORP(BgL_aux1897z00_2004))
{ /* Ieee/vector.scm 405 */
return BgL_aux1897z00_2004;}  else 
{ 
obj_t BgL_auxz00_3266;
BgL_auxz00_3266 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)17012)), BGl_string2068z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_aux1897z00_2004); 
FAILURE(BgL_auxz00_3266,BFALSE,BFALSE);} } } } } } 

}



/* &vector-map */
obj_t BGl_z62vectorzd2mapzb0zz__r4_vectors_6_8z00(obj_t BgL_envz00_1774, obj_t BgL_procz00_1775, obj_t BgL_vz00_1776, obj_t BgL_restz00_1777)
{
{ /* Ieee/vector.scm 396 */
{ /* Ieee/vector.scm 397 */
obj_t BgL_auxz00_3277;obj_t BgL_auxz00_3270;
if(
VECTORP(BgL_vz00_1776))
{ /* Ieee/vector.scm 397 */
BgL_auxz00_3277 = BgL_vz00_1776
; }  else 
{ 
obj_t BgL_auxz00_3280;
BgL_auxz00_3280 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)16779)), BGl_string2070z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vz00_1776); 
FAILURE(BgL_auxz00_3280,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_procz00_1775))
{ /* Ieee/vector.scm 397 */
BgL_auxz00_3270 = BgL_procz00_1775
; }  else 
{ 
obj_t BgL_auxz00_3273;
BgL_auxz00_3273 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)16779)), BGl_string2070z00zz__r4_vectors_6_8z00, BGl_string1974z00zz__r4_vectors_6_8z00, BgL_procz00_1775); 
FAILURE(BgL_auxz00_3273,BFALSE,BFALSE);} 
return 
BGl_vectorzd2mapzd2zz__r4_vectors_6_8z00(BgL_auxz00_3270, BgL_auxz00_3277, BgL_restz00_1777);} } 

}



/* &<@anonymous:1317> */
obj_t BGl_z62zc3z04anonymousza31317ze3ze5zz__r4_vectors_6_8z00(obj_t BgL_envz00_1778, obj_t BgL_vz00_1780)
{
{ /* Ieee/vector.scm 402 */
{ /* Ieee/vector.scm 402 */
long BgL_lenz00_1779;
{ /* Ieee/vector.scm 402 */
obj_t BgL_tmpz00_3285;
{ /* Ieee/vector.scm 402 */
obj_t BgL_aux1903z00_2010;
BgL_aux1903z00_2010 = 
PROCEDURE_REF(BgL_envz00_1778, 
(int)(((long)0))); 
if(
INTEGERP(BgL_aux1903z00_2010))
{ /* Ieee/vector.scm 402 */
BgL_tmpz00_3285 = BgL_aux1903z00_2010
; }  else 
{ 
obj_t BgL_auxz00_3290;
BgL_auxz00_3290 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)16924)), BGl_string2071z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_aux1903z00_2010); 
FAILURE(BgL_auxz00_3290,BFALSE,BFALSE);} } 
BgL_lenz00_1779 = 
(long)CINT(BgL_tmpz00_3285); } 
{ /* Ieee/vector.scm 402 */
bool_t BgL_tmpz00_3295;
if(
VECTORP(BgL_vz00_1780))
{ /* Ieee/vector.scm 402 */
BgL_tmpz00_3295 = 
(
VECTOR_LENGTH(BgL_vz00_1780)==BgL_lenz00_1779)
; }  else 
{ /* Ieee/vector.scm 402 */
BgL_tmpz00_3295 = ((bool_t)0)
; } 
return 
BBOOL(BgL_tmpz00_3295);} } } 

}



/* vector-map! */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2mapz12zc0zz__r4_vectors_6_8z00(obj_t BgL_procz00_61, obj_t BgL_vz00_62, obj_t BgL_restz00_63)
{
{ /* Ieee/vector.scm 410 */
if(
NULLP(BgL_restz00_63))
{ /* Ieee/vector.scm 414 */
obj_t BgL_aux1905z00_2012;
BgL_aux1905z00_2012 = 
BGl_vectorzd2map2z12zc0zz__r4_vectors_6_8z00(BgL_procz00_61, BgL_vz00_62, BgL_vz00_62); 
if(
VECTORP(BgL_aux1905z00_2012))
{ /* Ieee/vector.scm 414 */
return BgL_aux1905z00_2012;}  else 
{ 
obj_t BgL_auxz00_3306;
BgL_auxz00_3306 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)17386)), BGl_string2072z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_aux1905z00_2012); 
FAILURE(BgL_auxz00_3306,BFALSE,BFALSE);} }  else 
{ /* Ieee/vector.scm 415 */
bool_t BgL_test2385z00_3310;
{ /* Ieee/vector.scm 415 */
obj_t BgL_zc3z04anonymousza31329ze3z87_1781;
BgL_zc3z04anonymousza31329ze3z87_1781 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31329ze3ze5zz__r4_vectors_6_8z00, 
(int)(((long)1)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31329ze3z87_1781, 
(int)(((long)0)), 
BINT(
VECTOR_LENGTH(BgL_vz00_62))); 
BgL_test2385z00_3310 = 
CBOOL(
BGl_everyz00zz__r4_pairs_and_lists_6_3z00(BgL_zc3z04anonymousza31329ze3z87_1781, BNIL)); } 
if(BgL_test2385z00_3310)
{ /* Ieee/vector.scm 416 */
obj_t BgL_aux1907z00_2014;
BgL_aux1907z00_2014 = 
BGl_vectorzd2mapNz12zc0zz__r4_vectors_6_8z00(BgL_procz00_61, BgL_vz00_62, BgL_vz00_62, BgL_restz00_63); 
if(
VECTORP(BgL_aux1907z00_2014))
{ /* Ieee/vector.scm 416 */
return BgL_aux1907z00_2014;}  else 
{ 
obj_t BgL_auxz00_3323;
BgL_auxz00_3323 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)17484)), BGl_string2072z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_aux1907z00_2014); 
FAILURE(BgL_auxz00_3323,BFALSE,BFALSE);} }  else 
{ /* Ieee/vector.scm 418 */
obj_t BgL_aux1909z00_2016;
BgL_aux1909z00_2016 = 
BGl_errorz00zz__errorz00(BGl_string2072z00zz__r4_vectors_6_8z00, BGl_string2069z00zz__r4_vectors_6_8z00, BgL_restz00_63); 
if(
VECTORP(BgL_aux1909z00_2016))
{ /* Ieee/vector.scm 418 */
return BgL_aux1909z00_2016;}  else 
{ 
obj_t BgL_auxz00_3330;
BgL_auxz00_3330 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)17525)), BGl_string2072z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_aux1909z00_2016); 
FAILURE(BgL_auxz00_3330,BFALSE,BFALSE);} } } } 

}



/* &vector-map! */
obj_t BGl_z62vectorzd2mapz12za2zz__r4_vectors_6_8z00(obj_t BgL_envz00_1782, obj_t BgL_procz00_1783, obj_t BgL_vz00_1784, obj_t BgL_restz00_1785)
{
{ /* Ieee/vector.scm 410 */
{ /* Ieee/vector.scm 411 */
obj_t BgL_auxz00_3341;obj_t BgL_auxz00_3334;
if(
VECTORP(BgL_vz00_1784))
{ /* Ieee/vector.scm 411 */
BgL_auxz00_3341 = BgL_vz00_1784
; }  else 
{ 
obj_t BgL_auxz00_3344;
BgL_auxz00_3344 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)17324)), BGl_string2073z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vz00_1784); 
FAILURE(BgL_auxz00_3344,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_procz00_1783))
{ /* Ieee/vector.scm 411 */
BgL_auxz00_3334 = BgL_procz00_1783
; }  else 
{ 
obj_t BgL_auxz00_3337;
BgL_auxz00_3337 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)17324)), BGl_string2073z00zz__r4_vectors_6_8z00, BGl_string1974z00zz__r4_vectors_6_8z00, BgL_procz00_1783); 
FAILURE(BgL_auxz00_3337,BFALSE,BFALSE);} 
return 
BGl_vectorzd2mapz12zc0zz__r4_vectors_6_8z00(BgL_auxz00_3334, BgL_auxz00_3341, BgL_restz00_1785);} } 

}



/* &<@anonymous:1329> */
obj_t BGl_z62zc3z04anonymousza31329ze3ze5zz__r4_vectors_6_8z00(obj_t BgL_envz00_1786, obj_t BgL_vz00_1788)
{
{ /* Ieee/vector.scm 415 */
{ /* Ieee/vector.scm 415 */
long BgL_lenz00_1787;
{ /* Ieee/vector.scm 415 */
obj_t BgL_tmpz00_3349;
{ /* Ieee/vector.scm 415 */
obj_t BgL_aux1915z00_2022;
BgL_aux1915z00_2022 = 
PROCEDURE_REF(BgL_envz00_1786, 
(int)(((long)0))); 
if(
INTEGERP(BgL_aux1915z00_2022))
{ /* Ieee/vector.scm 415 */
BgL_tmpz00_3349 = BgL_aux1915z00_2022
; }  else 
{ 
obj_t BgL_auxz00_3354;
BgL_auxz00_3354 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)17438)), BGl_string2074z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_aux1915z00_2022); 
FAILURE(BgL_auxz00_3354,BFALSE,BFALSE);} } 
BgL_lenz00_1787 = 
(long)CINT(BgL_tmpz00_3349); } 
{ /* Ieee/vector.scm 415 */
bool_t BgL_tmpz00_3359;
if(
VECTORP(BgL_vz00_1788))
{ /* Ieee/vector.scm 415 */
BgL_tmpz00_3359 = 
(
VECTOR_LENGTH(BgL_vz00_1788)==BgL_lenz00_1787)
; }  else 
{ /* Ieee/vector.scm 415 */
BgL_tmpz00_3359 = ((bool_t)0)
; } 
return 
BBOOL(BgL_tmpz00_3359);} } } 

}



/* vector-for-each2 */
bool_t BGl_vectorzd2forzd2each2z00zz__r4_vectors_6_8z00(obj_t BgL_procz00_64, obj_t BgL_vsrcz00_65)
{
{ /* Ieee/vector.scm 423 */
{ 
long BgL_iz00_1617;
BgL_iz00_1617 = ((long)0); 
BgL_loopz00_1616:
if(
(BgL_iz00_1617<
VECTOR_LENGTH(BgL_vsrcz00_65)))
{ /* Ieee/vector.scm 426 */
{ /* Ieee/vector.scm 427 */
obj_t BgL_arg1333z00_1622;
BgL_arg1333z00_1622 = 
VECTOR_REF(BgL_vsrcz00_65,BgL_iz00_1617); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_64, ((long)1)))
{ /* Ieee/vector.scm 427 */
PROCEDURE_ENTRY(BgL_procz00_64)(BgL_procz00_64, BgL_arg1333z00_1622, BEOA); }  else 
{ /* Ieee/vector.scm 427 */
FAILURE(BGl_string1978z00zz__r4_vectors_6_8z00,BGl_list2075z00zz__r4_vectors_6_8z00,BgL_procz00_64);} } 
{ 
long BgL_iz00_3376;
BgL_iz00_3376 = 
(BgL_iz00_1617+((long)1)); 
BgL_iz00_1617 = BgL_iz00_3376; 
goto BgL_loopz00_1616;} }  else 
{ /* Ieee/vector.scm 426 */
return ((bool_t)0);} } } 

}



/* vector-for-eachN */
bool_t BGl_vectorzd2forzd2eachNz00zz__r4_vectors_6_8z00(obj_t BgL_procz00_66, obj_t BgL_vsrcz00_67, obj_t BgL_vrestz00_68)
{
{ /* Ieee/vector.scm 433 */
{ 
long BgL_iz00_1033;
BgL_iz00_1033 = ((long)0); 
BgL_zc3z04anonymousza31335ze3z87_1034:
if(
(BgL_iz00_1033<
VECTOR_LENGTH(BgL_vsrcz00_67)))
{ /* Ieee/vector.scm 437 */
obj_t BgL_argsz00_1036;
if(
NULLP(BgL_vrestz00_68))
{ /* Ieee/vector.scm 437 */
BgL_argsz00_1036 = BNIL; }  else 
{ /* Ieee/vector.scm 437 */
obj_t BgL_head1043z00_1042;
{ /* Ieee/vector.scm 437 */
obj_t BgL_res1677z00_1633;
BgL_res1677z00_1633 = 
MAKE_YOUNG_PAIR(BNIL, BNIL); 
BgL_head1043z00_1042 = BgL_res1677z00_1633; } 
{ 
obj_t BgL_l1041z00_1044;obj_t BgL_tail1044z00_1045;
BgL_l1041z00_1044 = BgL_vrestz00_68; 
BgL_tail1044z00_1045 = BgL_head1043z00_1042; 
BgL_zc3z04anonymousza31341ze3z87_1046:
if(
PAIRP(BgL_l1041z00_1044))
{ /* Ieee/vector.scm 437 */
obj_t BgL_newtail1045z00_1048;
{ /* Ieee/vector.scm 437 */
obj_t BgL_arg1344z00_1050;
{ /* Ieee/vector.scm 437 */
obj_t BgL_vz00_1051;
BgL_vz00_1051 = 
CAR(BgL_l1041z00_1044); 
{ /* Ieee/vector.scm 437 */
obj_t BgL_vectorz00_1636;
if(
VECTORP(BgL_vz00_1051))
{ /* Ieee/vector.scm 437 */
BgL_vectorz00_1636 = BgL_vz00_1051; }  else 
{ 
obj_t BgL_auxz00_3389;
BgL_auxz00_3389 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)18371)), BGl_string2078z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vz00_1051); 
FAILURE(BgL_auxz00_3389,BFALSE,BFALSE);} 
{ /* Ieee/vector.scm 158 */
bool_t BgL_test2398z00_3393;
{ /* Ieee/vector.scm 158 */
long BgL_tmpz00_3394;
BgL_tmpz00_3394 = 
VECTOR_LENGTH(BgL_vectorz00_1636); 
BgL_test2398z00_3393 = 
BOUND_CHECK(BgL_iz00_1033, BgL_tmpz00_3394); } 
if(BgL_test2398z00_3393)
{ /* Ieee/vector.scm 158 */
BgL_arg1344z00_1050 = 
VECTOR_REF(BgL_vectorz00_1636,BgL_iz00_1033); }  else 
{ 
obj_t BgL_auxz00_3398;
BgL_auxz00_3398 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)7298)), BGl_string1942z00zz__r4_vectors_6_8z00, BgL_vectorz00_1636, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_1636)), 
(int)(BgL_iz00_1033)); 
FAILURE(BgL_auxz00_3398,BFALSE,BFALSE);} } } } 
{ /* Ieee/vector.scm 437 */
obj_t BgL_res1679z00_1638;
BgL_res1679z00_1638 = 
MAKE_YOUNG_PAIR(BgL_arg1344z00_1050, BNIL); 
BgL_newtail1045z00_1048 = BgL_res1679z00_1638; } } 
SET_CDR(BgL_tail1044z00_1045, BgL_newtail1045z00_1048); 
{ 
obj_t BgL_tail1044z00_3409;obj_t BgL_l1041z00_3407;
BgL_l1041z00_3407 = 
CDR(BgL_l1041z00_1044); 
BgL_tail1044z00_3409 = BgL_newtail1045z00_1048; 
BgL_tail1044z00_1045 = BgL_tail1044z00_3409; 
BgL_l1041z00_1044 = BgL_l1041z00_3407; 
goto BgL_zc3z04anonymousza31341ze3z87_1046;} }  else 
{ /* Ieee/vector.scm 437 */
if(
NULLP(BgL_l1041z00_1044))
{ /* Ieee/vector.scm 437 */
BgL_argsz00_1036 = 
CDR(BgL_head1043z00_1042); }  else 
{ /* Ieee/vector.scm 437 */
BgL_argsz00_1036 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string1988z00zz__r4_vectors_6_8z00, BGl_string1989z00zz__r4_vectors_6_8z00, BgL_l1041z00_1044, BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)18342))); } } } } 
{ /* Ieee/vector.scm 438 */
obj_t BgL_valz00_2030;
{ /* Ieee/vector.scm 438 */
obj_t BgL_arg1337z00_1037;
{ /* Ieee/vector.scm 158 */
bool_t BgL_test2400z00_3415;
{ /* Ieee/vector.scm 158 */
long BgL_tmpz00_3416;
BgL_tmpz00_3416 = 
VECTOR_LENGTH(BgL_vsrcz00_67); 
BgL_test2400z00_3415 = 
BOUND_CHECK(BgL_iz00_1033, BgL_tmpz00_3416); } 
if(BgL_test2400z00_3415)
{ /* Ieee/vector.scm 158 */
BgL_arg1337z00_1037 = 
VECTOR_REF(BgL_vsrcz00_67,BgL_iz00_1033); }  else 
{ 
obj_t BgL_auxz00_3420;
BgL_auxz00_3420 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)7298)), BGl_string1942z00zz__r4_vectors_6_8z00, BgL_vsrcz00_67, 
(int)(
VECTOR_LENGTH(BgL_vsrcz00_67)), 
(int)(BgL_iz00_1033)); 
FAILURE(BgL_auxz00_3420,BFALSE,BFALSE);} } 
{ /* Ieee/vector.scm 438 */
obj_t BgL_list1338z00_1038;
BgL_list1338z00_1038 = 
MAKE_YOUNG_PAIR(BgL_argsz00_1036, BNIL); 
BgL_valz00_2030 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg1337z00_1037, BgL_list1338z00_1038); } } 
{ /* Ieee/vector.scm 438 */
int BgL_len1921z00_2031;
BgL_len1921z00_2031 = 
(int)(
bgl_list_length(BgL_valz00_2030)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_66, BgL_len1921z00_2031))
{ /* Ieee/vector.scm 438 */
apply(BgL_procz00_66, BgL_valz00_2030); }  else 
{ /* Ieee/vector.scm 438 */
FAILURE(BGl_symbol1990z00zz__r4_vectors_6_8z00,BGl_string1991z00zz__r4_vectors_6_8z00,BGl_list2079z00zz__r4_vectors_6_8z00);} } } 
{ 
long BgL_iz00_3436;
BgL_iz00_3436 = 
(BgL_iz00_1033+((long)1)); 
BgL_iz00_1033 = BgL_iz00_3436; 
goto BgL_zc3z04anonymousza31335ze3z87_1034;} }  else 
{ /* Ieee/vector.scm 436 */
return ((bool_t)0);} } } 

}



/* vector-for-each */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2forzd2eachz00zz__r4_vectors_6_8z00(obj_t BgL_procz00_69, obj_t BgL_vz00_70, obj_t BgL_restz00_71)
{
{ /* Ieee/vector.scm 444 */
if(
NULLP(BgL_restz00_71))
{ /* Ieee/vector.scm 447 */
return 
BBOOL(
BGl_vectorzd2forzd2each2z00zz__r4_vectors_6_8z00(BgL_procz00_69, BgL_vz00_70));}  else 
{ /* Ieee/vector.scm 449 */
bool_t BgL_test2403z00_3442;
{ /* Ieee/vector.scm 449 */
obj_t BgL_zc3z04anonymousza31354ze3z87_1789;
BgL_zc3z04anonymousza31354ze3z87_1789 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31354ze3ze5zz__r4_vectors_6_8z00, 
(int)(((long)1)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31354ze3z87_1789, 
(int)(((long)0)), 
BINT(
VECTOR_LENGTH(BgL_vz00_70))); 
BgL_test2403z00_3442 = 
CBOOL(
BGl_everyz00zz__r4_pairs_and_lists_6_3z00(BgL_zc3z04anonymousza31354ze3z87_1789, BNIL)); } 
if(BgL_test2403z00_3442)
{ /* Ieee/vector.scm 449 */
return 
BBOOL(
BGl_vectorzd2forzd2eachNz00zz__r4_vectors_6_8z00(BgL_procz00_69, BgL_vz00_70, BgL_restz00_71));}  else 
{ /* Ieee/vector.scm 449 */
return 
BGl_errorz00zz__errorz00(BGl_string2116z00zz__r4_vectors_6_8z00, BGl_string2069z00zz__r4_vectors_6_8z00, BgL_restz00_71);} } } 

}



/* &vector-for-each */
obj_t BGl_z62vectorzd2forzd2eachz62zz__r4_vectors_6_8z00(obj_t BgL_envz00_1790, obj_t BgL_procz00_1791, obj_t BgL_vz00_1792, obj_t BgL_restz00_1793)
{
{ /* Ieee/vector.scm 444 */
{ /* Ieee/vector.scm 445 */
obj_t BgL_auxz00_3462;obj_t BgL_auxz00_3455;
if(
VECTORP(BgL_vz00_1792))
{ /* Ieee/vector.scm 445 */
BgL_auxz00_3462 = BgL_vz00_1792
; }  else 
{ 
obj_t BgL_auxz00_3465;
BgL_auxz00_3465 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)18728)), BGl_string2117z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vz00_1792); 
FAILURE(BgL_auxz00_3465,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_procz00_1791))
{ /* Ieee/vector.scm 445 */
BgL_auxz00_3455 = BgL_procz00_1791
; }  else 
{ 
obj_t BgL_auxz00_3458;
BgL_auxz00_3458 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)18728)), BGl_string2117z00zz__r4_vectors_6_8z00, BGl_string1974z00zz__r4_vectors_6_8z00, BgL_procz00_1791); 
FAILURE(BgL_auxz00_3458,BFALSE,BFALSE);} 
return 
BGl_vectorzd2forzd2eachz00zz__r4_vectors_6_8z00(BgL_auxz00_3455, BgL_auxz00_3462, BgL_restz00_1793);} } 

}



/* &<@anonymous:1354> */
obj_t BGl_z62zc3z04anonymousza31354ze3ze5zz__r4_vectors_6_8z00(obj_t BgL_envz00_1794, obj_t BgL_vz00_1796)
{
{ /* Ieee/vector.scm 449 */
{ /* Ieee/vector.scm 449 */
long BgL_lenz00_1795;
{ /* Ieee/vector.scm 449 */
obj_t BgL_tmpz00_3470;
{ /* Ieee/vector.scm 449 */
obj_t BgL_aux1927z00_2037;
BgL_aux1927z00_2037 = 
PROCEDURE_REF(BgL_envz00_1794, 
(int)(((long)0))); 
if(
INTEGERP(BgL_aux1927z00_2037))
{ /* Ieee/vector.scm 449 */
BgL_tmpz00_3470 = BgL_aux1927z00_2037
; }  else 
{ 
obj_t BgL_auxz00_3475;
BgL_auxz00_3475 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)18844)), BGl_string2118z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_aux1927z00_2037); 
FAILURE(BgL_auxz00_3475,BFALSE,BFALSE);} } 
BgL_lenz00_1795 = 
(long)CINT(BgL_tmpz00_3470); } 
{ /* Ieee/vector.scm 449 */
bool_t BgL_tmpz00_3480;
if(
VECTORP(BgL_vz00_1796))
{ /* Ieee/vector.scm 449 */
BgL_tmpz00_3480 = 
(
VECTOR_LENGTH(BgL_vz00_1796)==BgL_lenz00_1795)
; }  else 
{ /* Ieee/vector.scm 449 */
BgL_tmpz00_3480 = ((bool_t)0)
; } 
return 
BBOOL(BgL_tmpz00_3480);} } } 

}



/* vector-shrink! */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2shrinkz12zc0zz__r4_vectors_6_8z00(obj_t BgL_vecz00_72, long BgL_nlenz00_73)
{
{ /* Ieee/vector.scm 457 */
return 
BGL_VECTOR_SHRINK(BgL_vecz00_72, BgL_nlenz00_73);} 

}



/* &vector-shrink! */
obj_t BGl_z62vectorzd2shrinkz12za2zz__r4_vectors_6_8z00(obj_t BgL_envz00_1797, obj_t BgL_vecz00_1798, obj_t BgL_nlenz00_1799)
{
{ /* Ieee/vector.scm 457 */
{ /* Ieee/vector.scm 458 */
long BgL_auxz00_3494;obj_t BgL_auxz00_3487;
{ /* Ieee/vector.scm 458 */
obj_t BgL_tmpz00_3495;
if(
INTEGERP(BgL_nlenz00_1799))
{ /* Ieee/vector.scm 458 */
BgL_tmpz00_3495 = BgL_nlenz00_1799
; }  else 
{ 
obj_t BgL_auxz00_3498;
BgL_auxz00_3498 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)19255)), BGl_string2119z00zz__r4_vectors_6_8z00, BGl_string1938z00zz__r4_vectors_6_8z00, BgL_nlenz00_1799); 
FAILURE(BgL_auxz00_3498,BFALSE,BFALSE);} 
BgL_auxz00_3494 = 
(long)CINT(BgL_tmpz00_3495); } 
if(
VECTORP(BgL_vecz00_1798))
{ /* Ieee/vector.scm 458 */
BgL_auxz00_3487 = BgL_vecz00_1798
; }  else 
{ 
obj_t BgL_auxz00_3490;
BgL_auxz00_3490 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1936z00zz__r4_vectors_6_8z00, 
BINT(((long)19255)), BGl_string2119z00zz__r4_vectors_6_8z00, BGl_string1939z00zz__r4_vectors_6_8z00, BgL_vecz00_1798); 
FAILURE(BgL_auxz00_3490,BFALSE,BFALSE);} 
return 
BGl_vectorzd2shrinkz12zc0zz__r4_vectors_6_8z00(BgL_auxz00_3487, BgL_auxz00_3494);} } 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_vectors_6_8z00()
{
{ /* Ieee/vector.scm 18 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string2120z00zz__r4_vectors_6_8z00)); 
return 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string2120z00zz__r4_vectors_6_8z00));} 

}

#ifdef __cplusplus
}
#endif
