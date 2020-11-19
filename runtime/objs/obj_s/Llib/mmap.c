/*===========================================================================*/
/*   (Llib/mmap.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/mmap.scm -indent -o objs/obj_s/Llib/mmap.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL obj_t BGl_mmapzd2putzd2charz12z12zz__mmapz00(obj_t, unsigned char);
extern obj_t BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62closezd2mmapzb0zz__mmapz00(obj_t, obj_t);
static obj_t BGl_symbol1923z00zz__mmapz00 = BUNSPEC;
static obj_t BGl_z62mmapzd2readzd2positionz62zz__mmapz00(obj_t, obj_t);
static obj_t BGl_z62mmapzf3z91zz__mmapz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_mmapzd2ze3bstringz31zz__mmapz00(obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__mmapz00 = BUNSPEC;
static obj_t BGl_symbol1930z00zz__mmapz00 = BUNSPEC;
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62mmapzd2lengthzb0zz__mmapz00(obj_t, obj_t);
static obj_t BGl_z62mmapzd2substringzd2setz12z70zz__mmapz00(obj_t, obj_t, obj_t, obj_t);
extern obj_t string_to_bstring_len(char *, int);
static obj_t BGl_symbol1950z00zz__mmapz00 = BUNSPEC;
static obj_t BGl_symbol1953z00zz__mmapz00 = BUNSPEC;
static obj_t BGl_symbol1956z00zz__mmapz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_mmapzd2getzd2stringz00zz__mmapz00(obj_t, long);
static obj_t BGl_z62mmapzd2getzd2stringz62zz__mmapz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol1965z00zz__mmapz00 = BUNSPEC;
static obj_t BGl_symbol1968z00zz__mmapz00 = BUNSPEC;
static obj_t BGl_z62mmapzd2ze3stringz53zz__mmapz00(obj_t, obj_t);
static obj_t BGl_genericzd2initzd2zz__mmapz00();
BGL_EXPORTED_DECL unsigned char BGl_mmapzd2refzd2zz__mmapz00(obj_t, long);
static obj_t BGl_z62mmapzd2writezd2positionz62zz__mmapz00(obj_t, obj_t);
extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_objectzd2initzd2zz__mmapz00();
extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62mmapzd2setzd2urz12z70zz__mmapz00(obj_t, obj_t, obj_t, obj_t);
extern obj_t string_append_3(obj_t, obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
BGL_EXPORTED_DECL obj_t BGl_mmapzd2substringzd2setz12z12zz__mmapz00(obj_t, long, obj_t);
static obj_t BGl_methodzd2initzd2zz__mmapz00();
BGL_EXPORTED_DECL unsigned char BGl_mmapzd2refzd2urz00zz__mmapz00(obj_t, long);
BGL_EXPORTED_DECL long BGl_mmapzd2readzd2positionzd2setz12zc0zz__mmapz00(obj_t, long);
extern obj_t string_append(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_mmapzd2writezd2positionz00zz__mmapz00(obj_t);
static obj_t BGl_z62mmapzd2writezd2positionzd2setz12za2zz__mmapz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_mmapzd2readzd2positionz00zz__mmapz00(obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62mmapzd2setz12za2zz__mmapz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__stringzd2ze3mmapz31zz__mmapz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_mmapzd2putzd2stringz12z12zz__mmapz00(obj_t, obj_t);
static obj_t BGl__openzd2mmapzd2zz__mmapz00(obj_t, obj_t);
static obj_t BGl_z62mmapzd2getzd2charz62zz__mmapz00(obj_t, obj_t);
static obj_t BGl_search1098ze70ze7zz__mmapz00(long, obj_t, obj_t, long);
static obj_t BGl_z62mmapzd2namezb0zz__mmapz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_mmapzd2setz12zc0zz__mmapz00(obj_t, long, unsigned char);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__mmapz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL obj_t BGl_openzd2mmapzd2zz__mmapz00(obj_t, obj_t, obj_t);
static obj_t BGl_list1918z00zz__mmapz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3mmapz31zz__mmapz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62mmapzd2refzd2urz62zz__mmapz00(obj_t, obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__mmapz00();
static obj_t BGl_z62mmapzd2ze3bstringz53zz__mmapz00(obj_t, obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__mmapz00();
static obj_t BGl_importedzd2moduleszd2initz00zz__mmapz00();
BGL_EXPORTED_DECL obj_t BGl_mmapzd2namezd2zz__mmapz00(obj_t);
static obj_t BGl_z62mmapzd2substringzb0zz__mmapz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL char * BGl_mmapzd2ze3stringz31zz__mmapz00(obj_t);
static obj_t BGl_z62mmapzd2putzd2stringz12z70zz__mmapz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_mmapzd2writezd2positionzd2setz12zc0zz__mmapz00(obj_t, long);
static obj_t BGl_search1107ze70ze7zz__mmapz00(long, obj_t, obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_mmapzd2setzd2urz12z12zz__mmapz00(obj_t, long, unsigned char);
static obj_t BGl_z62mmapzd2putzd2charz12z70zz__mmapz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_mmapzd2lengthzd2zz__mmapz00(obj_t);
static obj_t BGl_keyword1919z00zz__mmapz00 = BUNSPEC;
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, int, int);
static obj_t BGl_keyword1921z00zz__mmapz00 = BUNSPEC;
static obj_t BGl_z62mmapzd2refzb0zz__mmapz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_mmapzd2substringzd2zz__mmapz00(obj_t, long, long);
extern obj_t bstring_to_keyword(obj_t);
BGL_EXPORTED_DECL bool_t BGl_mmapzf3zf3zz__mmapz00(obj_t);
static obj_t BGl_z62mmapzd2readzd2positionzd2setz12za2zz__mmapz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL unsigned char BGl_mmapzd2getzd2charz00zz__mmapz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_closezd2mmapzd2zz__mmapz00(obj_t);
extern obj_t make_string_sans_fill(long);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2substringzd2envz00zz__mmapz00, BgL_bgl_za762mmapza7d2substr1976z00, BGl_z62mmapzd2substringzb0zz__mmapz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2writezd2positionzd2envzd2zz__mmapz00, BgL_bgl_za762mmapza7d2writeza71977za7, BGl_z62mmapzd2writezd2positionz62zz__mmapz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2lengthzd2envz00zz__mmapz00, BgL_bgl_za762mmapza7d2length1978z00, BGl_z62mmapzd2lengthzb0zz__mmapz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzf3zd2envz21zz__mmapz00, BgL_bgl_za762mmapza7f3za791za7za7_1979za7, BGl_z62mmapzf3z91zz__mmapz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2readzd2positionzd2envzd2zz__mmapz00, BgL_bgl_za762mmapza7d2readza7d1980za7, BGl_z62mmapzd2readzd2positionz62zz__mmapz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2setz12zd2envz12zz__mmapz00, BgL_bgl_za762mmapza7d2setza7121981za7, BGl_z62mmapzd2setz12za2zz__mmapz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ze3mmapzd2envze3zz__mmapz00, BgL_bgl__stringza7d2za7e3mma1982z00, opt_generic_entry, BGl__stringzd2ze3mmapz31zz__mmapz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2putzd2stringz12zd2envzc0zz__mmapz00, BgL_bgl_za762mmapza7d2putza7d21983za7, BGl_z62mmapzd2putzd2stringz12z70zz__mmapz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2getzd2charzd2envzd2zz__mmapz00, BgL_bgl_za762mmapza7d2getza7d21984za7, BGl_z62mmapzd2getzd2charz62zz__mmapz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2ze3stringzd2envze3zz__mmapz00, BgL_bgl_za762mmapza7d2za7e3str1985za7, BGl_z62mmapzd2ze3stringz53zz__mmapz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1916z00zz__mmapz00, BgL_bgl_string1916za700za7za7_1986za7, "/tmp/4.4a/runtime/Llib/mmap.scm", 31 );
DEFINE_STRING( BGl_string1917z00zz__mmapz00, BgL_bgl_string1917za700za7za7_1987za7, "vector-ref", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2readzd2positionzd2setz12zd2envz12zz__mmapz00, BgL_bgl_za762mmapza7d2readza7d1988za7, BGl_z62mmapzd2readzd2positionzd2setz12za2zz__mmapz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1920z00zz__mmapz00, BgL_bgl_string1920za700za7za7_1989za7, "read", 4 );
DEFINE_STRING( BGl_string1922z00zz__mmapz00, BgL_bgl_string1922za700za7za7_1990za7, "write", 5 );
DEFINE_STRING( BGl_string1924z00zz__mmapz00, BgL_bgl_string1924za700za7za7_1991za7, "open-mmap", 9 );
DEFINE_STRING( BGl_string1925z00zz__mmapz00, BgL_bgl_string1925za700za7za7_1992za7, "Illegal keyword argument", 24 );
DEFINE_STRING( BGl_string1926z00zz__mmapz00, BgL_bgl_string1926za700za7za7_1993za7, "_open-mmap", 10 );
DEFINE_STRING( BGl_string1927z00zz__mmapz00, BgL_bgl_string1927za700za7za7_1994za7, "bint", 4 );
DEFINE_STRING( BGl_string1928z00zz__mmapz00, BgL_bgl_string1928za700za7za7_1995za7, "bstring", 7 );
DEFINE_STRING( BGl_string1929z00zz__mmapz00, BgL_bgl_string1929za700za7za7_1996za7, "wrong number of arguments: [1..3] expected, provided", 52 );
DEFINE_STRING( BGl_string1931z00zz__mmapz00, BgL_bgl_string1931za700za7za7_1997za7, "string->mmap", 12 );
DEFINE_STRING( BGl_string1932z00zz__mmapz00, BgL_bgl_string1932za700za7za7_1998za7, "_string->mmap", 13 );
DEFINE_STRING( BGl_string1933z00zz__mmapz00, BgL_bgl_string1933za700za7za7_1999za7, "mmap-name", 9 );
DEFINE_STRING( BGl_string1934z00zz__mmapz00, BgL_bgl_string1934za700za7za7_2000za7, "&mmap-name", 10 );
DEFINE_STRING( BGl_string1935z00zz__mmapz00, BgL_bgl_string1935za700za7za7_2001za7, "mmap", 4 );
DEFINE_STRING( BGl_string1936z00zz__mmapz00, BgL_bgl_string1936za700za7za7_2002za7, "&mmap->string", 13 );
DEFINE_STRING( BGl_string1937z00zz__mmapz00, BgL_bgl_string1937za700za7za7_2003za7, "&mmap->bstring", 14 );
DEFINE_STRING( BGl_string1938z00zz__mmapz00, BgL_bgl_string1938za700za7za7_2004za7, "&close-mmap", 11 );
DEFINE_STRING( BGl_string1939z00zz__mmapz00, BgL_bgl_string1939za700za7za7_2005za7, "&mmap-length", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2refzd2urzd2envzd2zz__mmapz00, BgL_bgl_za762mmapza7d2refza7d22006za7, BGl_z62mmapzd2refzd2urz62zz__mmapz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1940z00zz__mmapz00, BgL_bgl_string1940za700za7za7_2007za7, "&mmap-read-position", 19 );
DEFINE_STRING( BGl_string1941z00zz__mmapz00, BgL_bgl_string1941za700za7za7_2008za7, "&mmap-read-position-set!", 24 );
DEFINE_STRING( BGl_string1942z00zz__mmapz00, BgL_bgl_string1942za700za7za7_2009za7, "belong", 6 );
DEFINE_STRING( BGl_string1943z00zz__mmapz00, BgL_bgl_string1943za700za7za7_2010za7, "&mmap-write-position", 20 );
DEFINE_STRING( BGl_string1944z00zz__mmapz00, BgL_bgl_string1944za700za7za7_2011za7, "&mmap-write-position-set!", 25 );
DEFINE_STRING( BGl_string1945z00zz__mmapz00, BgL_bgl_string1945za700za7za7_2012za7, "&mmap-ref-ur", 12 );
DEFINE_STRING( BGl_string1946z00zz__mmapz00, BgL_bgl_string1946za700za7za7_2013za7, "&mmap-set-ur!", 13 );
DEFINE_STRING( BGl_string1947z00zz__mmapz00, BgL_bgl_string1947za700za7za7_2014za7, "bchar", 5 );
DEFINE_STRING( BGl_string1948z00zz__mmapz00, BgL_bgl_string1948za700za7za7_2015za7, "index out of range [0..", 23 );
DEFINE_STRING( BGl_string1949z00zz__mmapz00, BgL_bgl_string1949za700za7za7_2016za7, "]", 1 );
DEFINE_STRING( BGl_string1951z00zz__mmapz00, BgL_bgl_string1951za700za7za7_2017za7, "mmap-ref", 8 );
DEFINE_STRING( BGl_string1952z00zz__mmapz00, BgL_bgl_string1952za700za7za7_2018za7, "&mmap-ref", 9 );
DEFINE_STRING( BGl_string1954z00zz__mmapz00, BgL_bgl_string1954za700za7za7_2019za7, "mmap-set!", 9 );
DEFINE_STRING( BGl_string1955z00zz__mmapz00, BgL_bgl_string1955za700za7za7_2020za7, "&mmap-set!", 10 );
DEFINE_STRING( BGl_string1957z00zz__mmapz00, BgL_bgl_string1957za700za7za7_2021za7, "mmap-substring", 14 );
DEFINE_STRING( BGl_string1958z00zz__mmapz00, BgL_bgl_string1958za700za7za7_2022za7, "length too small", 16 );
DEFINE_STRING( BGl_string1959z00zz__mmapz00, BgL_bgl_string1959za700za7za7_2023za7, "string-set!", 11 );
DEFINE_STRING( BGl_string1960z00zz__mmapz00, BgL_bgl_string1960za700za7za7_2024za7, "Illegal index", 13 );
DEFINE_STRING( BGl_string1961z00zz__mmapz00, BgL_bgl_string1961za700za7za7_2025za7, "start+length bigger than ", 25 );
DEFINE_STRING( BGl_string1962z00zz__mmapz00, BgL_bgl_string1962za700za7za7_2026za7, "&mmap-substring", 15 );
DEFINE_STRING( BGl_string1963z00zz__mmapz00, BgL_bgl_string1963za700za7za7_2027za7, "mmap-substring-set!", 19 );
DEFINE_STRING( BGl_string1964z00zz__mmapz00, BgL_bgl_string1964za700za7za7_2028za7, "string-ref", 10 );
DEFINE_STRING( BGl_string1966z00zz__mmapz00, BgL_bgl_string1966za700za7za7_2029za7, "mmap-sbustring-set!", 19 );
DEFINE_STRING( BGl_string1967z00zz__mmapz00, BgL_bgl_string1967za700za7za7_2030za7, "[", 1 );
DEFINE_STRING( BGl_string1969z00zz__mmapz00, BgL_bgl_string1969za700za7za7_2031za7, "&mmap-substring-set!", 20 );
DEFINE_STRING( BGl_string1970z00zz__mmapz00, BgL_bgl_string1970za700za7za7_2032za7, "mmap-get-char", 13 );
DEFINE_STRING( BGl_string1971z00zz__mmapz00, BgL_bgl_string1971za700za7za7_2033za7, "&mmap-get-char", 14 );
DEFINE_STRING( BGl_string1972z00zz__mmapz00, BgL_bgl_string1972za700za7za7_2034za7, "&mmap-put-char!", 15 );
DEFINE_STRING( BGl_string1973z00zz__mmapz00, BgL_bgl_string1973za700za7za7_2035za7, "&mmap-get-string", 16 );
DEFINE_STRING( BGl_string1974z00zz__mmapz00, BgL_bgl_string1974za700za7za7_2036za7, "&mmap-put-string!", 17 );
DEFINE_STRING( BGl_string1975z00zz__mmapz00, BgL_bgl_string1975za700za7za7_2037za7, "__mmap", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2putzd2charz12zd2envzc0zz__mmapz00, BgL_bgl_za762mmapza7d2putza7d22038za7, BGl_z62mmapzd2putzd2charz12z70zz__mmapz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2writezd2positionzd2setz12zd2envz12zz__mmapz00, BgL_bgl_za762mmapza7d2writeza72039za7, BGl_z62mmapzd2writezd2positionzd2setz12za2zz__mmapz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2getzd2stringzd2envzd2zz__mmapz00, BgL_bgl_za762mmapza7d2getza7d22040za7, BGl_z62mmapzd2getzd2stringz62zz__mmapz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_closezd2mmapzd2envz00zz__mmapz00, BgL_bgl_za762closeza7d2mmapza72041za7, BGl_z62closezd2mmapzb0zz__mmapz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2substringzd2setz12zd2envzc0zz__mmapz00, BgL_bgl_za762mmapza7d2substr2042z00, BGl_z62mmapzd2substringzd2setz12z70zz__mmapz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2refzd2envz00zz__mmapz00, BgL_bgl_za762mmapza7d2refza7b02043za7, BGl_z62mmapzd2refzb0zz__mmapz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2namezd2envz00zz__mmapz00, BgL_bgl_za762mmapza7d2nameza7b2044za7, BGl_z62mmapzd2namezb0zz__mmapz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2mmapzd2envz00zz__mmapz00, BgL_bgl__openza7d2mmapza7d2za72045za7, opt_generic_entry, BGl__openzd2mmapzd2zz__mmapz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2ze3bstringzd2envze3zz__mmapz00, BgL_bgl_za762mmapza7d2za7e3bst2046za7, BGl_z62mmapzd2ze3bstringz53zz__mmapz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2setzd2urz12zd2envzc0zz__mmapz00, BgL_bgl_za762mmapza7d2setza7d22047za7, BGl_z62mmapzd2setzd2urz12z70zz__mmapz00, 0L, BUNSPEC, 3 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_symbol1923z00zz__mmapz00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__mmapz00) );
ADD_ROOT( (void *)(&BGl_symbol1930z00zz__mmapz00) );
ADD_ROOT( (void *)(&BGl_symbol1950z00zz__mmapz00) );
ADD_ROOT( (void *)(&BGl_symbol1953z00zz__mmapz00) );
ADD_ROOT( (void *)(&BGl_symbol1956z00zz__mmapz00) );
ADD_ROOT( (void *)(&BGl_symbol1965z00zz__mmapz00) );
ADD_ROOT( (void *)(&BGl_symbol1968z00zz__mmapz00) );
ADD_ROOT( (void *)(&BGl_list1918z00zz__mmapz00) );
ADD_ROOT( (void *)(&BGl_keyword1919z00zz__mmapz00) );
ADD_ROOT( (void *)(&BGl_keyword1921z00zz__mmapz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__mmapz00(long BgL_checksumz00_2394, char * BgL_fromz00_2395)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__mmapz00))
{ 
BGl_requirezd2initializa7ationz75zz__mmapz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__mmapz00(); 
BGl_cnstzd2initzd2zz__mmapz00(); 
BGl_importedzd2moduleszd2initz00zz__mmapz00(); 
return 
BGl_methodzd2initzd2zz__mmapz00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__mmapz00()
{
{ /* Llib/mmap.scm 19 */
BGl_keyword1919z00zz__mmapz00 = 
bstring_to_keyword(BGl_string1920z00zz__mmapz00); 
BGl_keyword1921z00zz__mmapz00 = 
bstring_to_keyword(BGl_string1922z00zz__mmapz00); 
BGl_list1918z00zz__mmapz00 = 
MAKE_YOUNG_PAIR(BGl_keyword1919z00zz__mmapz00, 
MAKE_YOUNG_PAIR(BGl_keyword1921z00zz__mmapz00, BNIL)); 
BGl_symbol1923z00zz__mmapz00 = 
bstring_to_symbol(BGl_string1924z00zz__mmapz00); 
BGl_symbol1930z00zz__mmapz00 = 
bstring_to_symbol(BGl_string1931z00zz__mmapz00); 
BGl_symbol1950z00zz__mmapz00 = 
bstring_to_symbol(BGl_string1951z00zz__mmapz00); 
BGl_symbol1953z00zz__mmapz00 = 
bstring_to_symbol(BGl_string1954z00zz__mmapz00); 
BGl_symbol1956z00zz__mmapz00 = 
bstring_to_symbol(BGl_string1957z00zz__mmapz00); 
BGl_symbol1965z00zz__mmapz00 = 
bstring_to_symbol(BGl_string1966z00zz__mmapz00); 
return ( 
BGl_symbol1968z00zz__mmapz00 = 
bstring_to_symbol(BGl_string1963z00zz__mmapz00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__mmapz00()
{
{ /* Llib/mmap.scm 19 */
return 
bgl_gc_roots_register();} 

}



/* mmap? */
BGL_EXPORTED_DEF bool_t BGl_mmapzf3zf3zz__mmapz00(obj_t BgL_objz00_3)
{
{ /* Llib/mmap.scm 117 */
return 
BGL_MMAPP(BgL_objz00_3);} 

}



/* &mmap? */
obj_t BGl_z62mmapzf3z91zz__mmapz00(obj_t BgL_envz00_2152, obj_t BgL_objz00_2153)
{
{ /* Llib/mmap.scm 117 */
return 
BBOOL(
BGl_mmapzf3zf3zz__mmapz00(BgL_objz00_2153));} 

}



/* _open-mmap */
obj_t BGl__openzd2mmapzd2zz__mmapz00(obj_t BgL_env1096z00_8, obj_t BgL_opt1095z00_7)
{
{ /* Llib/mmap.scm 123 */
{ /* Llib/mmap.scm 123 */
obj_t BgL_g1103z00_1087;
BgL_g1103z00_1087 = 
VECTOR_REF(BgL_opt1095z00_7,((long)0)); 
{ /* Llib/mmap.scm 123 */
obj_t BgL_readz00_1088;
BgL_readz00_1088 = BTRUE; 
{ /* Llib/mmap.scm 123 */
obj_t BgL_writez00_1089;
BgL_writez00_1089 = BTRUE; 
{ /* Llib/mmap.scm 123 */

{ 
long BgL_iz00_1090;
BgL_iz00_1090 = ((long)1); 
BgL_check1099z00_1091:
if(
(BgL_iz00_1090==
VECTOR_LENGTH(BgL_opt1095z00_7)))
{ /* Llib/mmap.scm 123 */BNIL; }  else 
{ /* Llib/mmap.scm 123 */
bool_t BgL_test2050z00_2422;
{ /* Llib/mmap.scm 123 */
obj_t BgL_arg1208z00_1097;
{ /* Llib/mmap.scm 123 */
bool_t BgL_test2051z00_2423;
{ /* Llib/mmap.scm 123 */
long BgL_tmpz00_2424;
BgL_tmpz00_2424 = 
VECTOR_LENGTH(BgL_opt1095z00_7); 
BgL_test2051z00_2423 = 
BOUND_CHECK(BgL_iz00_1090, BgL_tmpz00_2424); } 
if(BgL_test2051z00_2423)
{ /* Llib/mmap.scm 123 */
BgL_arg1208z00_1097 = 
VECTOR_REF(BgL_opt1095z00_7,BgL_iz00_1090); }  else 
{ 
obj_t BgL_auxz00_2428;
BgL_auxz00_2428 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)5352)), BGl_string1917z00zz__mmapz00, BgL_opt1095z00_7, 
(int)(
VECTOR_LENGTH(BgL_opt1095z00_7)), 
(int)(BgL_iz00_1090)); 
FAILURE(BgL_auxz00_2428,BFALSE,BFALSE);} } 
BgL_test2050z00_2422 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1208z00_1097, BGl_list1918z00zz__mmapz00)); } 
if(BgL_test2050z00_2422)
{ 
long BgL_iz00_2437;
BgL_iz00_2437 = 
(BgL_iz00_1090+((long)2)); 
BgL_iz00_1090 = BgL_iz00_2437; 
goto BgL_check1099z00_1091;}  else 
{ /* Llib/mmap.scm 123 */
obj_t BgL_arg1201z00_1096;
{ /* Llib/mmap.scm 123 */
bool_t BgL_test2052z00_2439;
{ /* Llib/mmap.scm 123 */
long BgL_tmpz00_2440;
BgL_tmpz00_2440 = 
VECTOR_LENGTH(BgL_opt1095z00_7); 
BgL_test2052z00_2439 = 
BOUND_CHECK(BgL_iz00_1090, BgL_tmpz00_2440); } 
if(BgL_test2052z00_2439)
{ /* Llib/mmap.scm 123 */
BgL_arg1201z00_1096 = 
VECTOR_REF(BgL_opt1095z00_7,BgL_iz00_1090); }  else 
{ 
obj_t BgL_auxz00_2444;
BgL_auxz00_2444 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)5352)), BGl_string1917z00zz__mmapz00, BgL_opt1095z00_7, 
(int)(
VECTOR_LENGTH(BgL_opt1095z00_7)), 
(int)(BgL_iz00_1090)); 
FAILURE(BgL_auxz00_2444,BFALSE,BFALSE);} } 
BGl_errorz00zz__errorz00(BGl_symbol1923z00zz__mmapz00, BGl_string1925z00zz__mmapz00, BgL_arg1201z00_1096); } } } 
{ /* Llib/mmap.scm 123 */
obj_t BgL_index1101z00_1098;
BgL_index1101z00_1098 = 
BGl_search1098ze70ze7zz__mmapz00(
VECTOR_LENGTH(BgL_opt1095z00_7), BgL_opt1095z00_7, BGl_keyword1919z00zz__mmapz00, ((long)1)); 
{ /* Llib/mmap.scm 123 */
bool_t BgL_test2053z00_2454;
{ /* Llib/mmap.scm 123 */
long BgL_n1z00_1651;
{ /* Llib/mmap.scm 123 */
obj_t BgL_tmpz00_2455;
if(
INTEGERP(BgL_index1101z00_1098))
{ /* Llib/mmap.scm 123 */
BgL_tmpz00_2455 = BgL_index1101z00_1098
; }  else 
{ 
obj_t BgL_auxz00_2458;
BgL_auxz00_2458 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)5352)), BGl_string1926z00zz__mmapz00, BGl_string1927z00zz__mmapz00, BgL_index1101z00_1098); 
FAILURE(BgL_auxz00_2458,BFALSE,BFALSE);} 
BgL_n1z00_1651 = 
(long)CINT(BgL_tmpz00_2455); } 
BgL_test2053z00_2454 = 
(BgL_n1z00_1651>=((long)0)); } 
if(BgL_test2053z00_2454)
{ 
long BgL_auxz00_2464;
{ /* Llib/mmap.scm 123 */
obj_t BgL_tmpz00_2465;
if(
INTEGERP(BgL_index1101z00_1098))
{ /* Llib/mmap.scm 123 */
BgL_tmpz00_2465 = BgL_index1101z00_1098
; }  else 
{ 
obj_t BgL_auxz00_2468;
BgL_auxz00_2468 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)5352)), BGl_string1926z00zz__mmapz00, BGl_string1927z00zz__mmapz00, BgL_index1101z00_1098); 
FAILURE(BgL_auxz00_2468,BFALSE,BFALSE);} 
BgL_auxz00_2464 = 
(long)CINT(BgL_tmpz00_2465); } 
BgL_readz00_1088 = 
VECTOR_REF(BgL_opt1095z00_7,BgL_auxz00_2464); }  else 
{ /* Llib/mmap.scm 123 */BFALSE; } } } 
{ /* Llib/mmap.scm 123 */
obj_t BgL_index1102z00_1100;
BgL_index1102z00_1100 = 
BGl_search1098ze70ze7zz__mmapz00(
VECTOR_LENGTH(BgL_opt1095z00_7), BgL_opt1095z00_7, BGl_keyword1921z00zz__mmapz00, ((long)1)); 
{ /* Llib/mmap.scm 123 */
bool_t BgL_test2056z00_2476;
{ /* Llib/mmap.scm 123 */
long BgL_n1z00_1653;
{ /* Llib/mmap.scm 123 */
obj_t BgL_tmpz00_2477;
if(
INTEGERP(BgL_index1102z00_1100))
{ /* Llib/mmap.scm 123 */
BgL_tmpz00_2477 = BgL_index1102z00_1100
; }  else 
{ 
obj_t BgL_auxz00_2480;
BgL_auxz00_2480 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)5352)), BGl_string1926z00zz__mmapz00, BGl_string1927z00zz__mmapz00, BgL_index1102z00_1100); 
FAILURE(BgL_auxz00_2480,BFALSE,BFALSE);} 
BgL_n1z00_1653 = 
(long)CINT(BgL_tmpz00_2477); } 
BgL_test2056z00_2476 = 
(BgL_n1z00_1653>=((long)0)); } 
if(BgL_test2056z00_2476)
{ 
long BgL_auxz00_2486;
{ /* Llib/mmap.scm 123 */
obj_t BgL_tmpz00_2487;
if(
INTEGERP(BgL_index1102z00_1100))
{ /* Llib/mmap.scm 123 */
BgL_tmpz00_2487 = BgL_index1102z00_1100
; }  else 
{ 
obj_t BgL_auxz00_2490;
BgL_auxz00_2490 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)5352)), BGl_string1926z00zz__mmapz00, BGl_string1927z00zz__mmapz00, BgL_index1102z00_1100); 
FAILURE(BgL_auxz00_2490,BFALSE,BFALSE);} 
BgL_auxz00_2486 = 
(long)CINT(BgL_tmpz00_2487); } 
BgL_writez00_1089 = 
VECTOR_REF(BgL_opt1095z00_7,BgL_auxz00_2486); }  else 
{ /* Llib/mmap.scm 123 */BFALSE; } } } 
{ /* Llib/mmap.scm 123 */
obj_t BgL_arg1211z00_1102;
BgL_arg1211z00_1102 = 
VECTOR_REF(BgL_opt1095z00_7,((long)0)); 
{ /* Llib/mmap.scm 123 */
obj_t BgL_readz00_1103;
BgL_readz00_1103 = BgL_readz00_1088; 
{ /* Llib/mmap.scm 123 */
obj_t BgL_writez00_1104;
BgL_writez00_1104 = BgL_writez00_1089; 
{ /* Llib/mmap.scm 123 */
obj_t BgL_res1674z00_1656;
{ /* Llib/mmap.scm 123 */
obj_t BgL_namez00_1655;
if(
STRINGP(BgL_arg1211z00_1102))
{ /* Llib/mmap.scm 123 */
BgL_namez00_1655 = BgL_arg1211z00_1102; }  else 
{ 
obj_t BgL_auxz00_2499;
BgL_auxz00_2499 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)5352)), BGl_string1926z00zz__mmapz00, BGl_string1928z00zz__mmapz00, BgL_arg1211z00_1102); 
FAILURE(BgL_auxz00_2499,BFALSE,BFALSE);} 
{ /* Llib/mmap.scm 124 */
bool_t BgL_auxz00_2505;bool_t BgL_tmpz00_2503;
BgL_auxz00_2505 = 
CBOOL(BgL_writez00_1104); 
BgL_tmpz00_2503 = 
CBOOL(BgL_readz00_1103); 
BgL_res1674z00_1656 = 
bgl_open_mmap(BgL_namez00_1655, BgL_tmpz00_2503, BgL_auxz00_2505); } } 
return BgL_res1674z00_1656;} } } } } } } } } 

}



/* search1098~0 */
obj_t BGl_search1098ze70ze7zz__mmapz00(long BgL_l1097z00_2210, obj_t BgL_opt1095z00_2209, obj_t BgL_k1z00_1084, long BgL_iz00_1085)
{
{ /* Llib/mmap.scm 123 */
BGl_search1098ze70ze7zz__mmapz00:
if(
(BgL_iz00_1085==BgL_l1097z00_2210))
{ /* Llib/mmap.scm 123 */
return 
BINT(((long)-1));}  else 
{ /* Llib/mmap.scm 123 */
if(
(BgL_iz00_1085==
(BgL_l1097z00_2210-((long)1))))
{ /* Llib/mmap.scm 123 */
return 
BGl_errorz00zz__errorz00(BGl_symbol1923z00zz__mmapz00, BGl_string1929z00zz__mmapz00, 
BINT(
VECTOR_LENGTH(BgL_opt1095z00_2209)));}  else 
{ /* Llib/mmap.scm 123 */
obj_t BgL_vz00_1109;
BgL_vz00_1109 = 
VECTOR_REF(BgL_opt1095z00_2209,BgL_iz00_1085); 
if(
(BgL_vz00_1109==BgL_k1z00_1084))
{ /* Llib/mmap.scm 123 */
return 
BINT(
(BgL_iz00_1085+((long)1)));}  else 
{ 
long BgL_iz00_2522;
BgL_iz00_2522 = 
(BgL_iz00_1085+((long)2)); 
BgL_iz00_1085 = BgL_iz00_2522; 
goto BGl_search1098ze70ze7zz__mmapz00;} } } } 

}



/* open-mmap */
BGL_EXPORTED_DEF obj_t BGl_openzd2mmapzd2zz__mmapz00(obj_t BgL_namez00_4, obj_t BgL_readz00_5, obj_t BgL_writez00_6)
{
{ /* Llib/mmap.scm 123 */
{ /* Llib/mmap.scm 124 */
bool_t BgL_auxz00_2526;bool_t BgL_tmpz00_2524;
BgL_auxz00_2526 = 
CBOOL(BgL_writez00_6); 
BgL_tmpz00_2524 = 
CBOOL(BgL_readz00_5); 
return 
bgl_open_mmap(BgL_namez00_4, BgL_tmpz00_2524, BgL_auxz00_2526);} } 

}



/* _string->mmap */
obj_t BGl__stringzd2ze3mmapz31zz__mmapz00(obj_t BgL_env1105z00_13, obj_t BgL_opt1104z00_12)
{
{ /* Llib/mmap.scm 129 */
{ /* Llib/mmap.scm 129 */
obj_t BgL_g1112z00_1117;
BgL_g1112z00_1117 = 
VECTOR_REF(BgL_opt1104z00_12,((long)0)); 
{ /* Llib/mmap.scm 129 */
obj_t BgL_readz00_1118;
BgL_readz00_1118 = BTRUE; 
{ /* Llib/mmap.scm 129 */
obj_t BgL_writez00_1119;
BgL_writez00_1119 = BTRUE; 
{ /* Llib/mmap.scm 129 */

{ 
long BgL_iz00_1120;
BgL_iz00_1120 = ((long)1); 
BgL_check1108z00_1121:
if(
(BgL_iz00_1120==
VECTOR_LENGTH(BgL_opt1104z00_12)))
{ /* Llib/mmap.scm 129 */BNIL; }  else 
{ /* Llib/mmap.scm 129 */
bool_t BgL_test2064z00_2533;
{ /* Llib/mmap.scm 129 */
obj_t BgL_arg1239z00_1127;
{ /* Llib/mmap.scm 129 */
bool_t BgL_test2065z00_2534;
{ /* Llib/mmap.scm 129 */
long BgL_tmpz00_2535;
BgL_tmpz00_2535 = 
VECTOR_LENGTH(BgL_opt1104z00_12); 
BgL_test2065z00_2534 = 
BOUND_CHECK(BgL_iz00_1120, BgL_tmpz00_2535); } 
if(BgL_test2065z00_2534)
{ /* Llib/mmap.scm 129 */
BgL_arg1239z00_1127 = 
VECTOR_REF(BgL_opt1104z00_12,BgL_iz00_1120); }  else 
{ 
obj_t BgL_auxz00_2539;
BgL_auxz00_2539 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)5669)), BGl_string1917z00zz__mmapz00, BgL_opt1104z00_12, 
(int)(
VECTOR_LENGTH(BgL_opt1104z00_12)), 
(int)(BgL_iz00_1120)); 
FAILURE(BgL_auxz00_2539,BFALSE,BFALSE);} } 
BgL_test2064z00_2533 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1239z00_1127, BGl_list1918z00zz__mmapz00)); } 
if(BgL_test2064z00_2533)
{ 
long BgL_iz00_2548;
BgL_iz00_2548 = 
(BgL_iz00_1120+((long)2)); 
BgL_iz00_1120 = BgL_iz00_2548; 
goto BgL_check1108z00_1121;}  else 
{ /* Llib/mmap.scm 129 */
obj_t BgL_arg1232z00_1126;
{ /* Llib/mmap.scm 129 */
bool_t BgL_test2066z00_2550;
{ /* Llib/mmap.scm 129 */
long BgL_tmpz00_2551;
BgL_tmpz00_2551 = 
VECTOR_LENGTH(BgL_opt1104z00_12); 
BgL_test2066z00_2550 = 
BOUND_CHECK(BgL_iz00_1120, BgL_tmpz00_2551); } 
if(BgL_test2066z00_2550)
{ /* Llib/mmap.scm 129 */
BgL_arg1232z00_1126 = 
VECTOR_REF(BgL_opt1104z00_12,BgL_iz00_1120); }  else 
{ 
obj_t BgL_auxz00_2555;
BgL_auxz00_2555 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)5669)), BGl_string1917z00zz__mmapz00, BgL_opt1104z00_12, 
(int)(
VECTOR_LENGTH(BgL_opt1104z00_12)), 
(int)(BgL_iz00_1120)); 
FAILURE(BgL_auxz00_2555,BFALSE,BFALSE);} } 
BGl_errorz00zz__errorz00(BGl_symbol1930z00zz__mmapz00, BGl_string1925z00zz__mmapz00, BgL_arg1232z00_1126); } } } 
{ /* Llib/mmap.scm 129 */
obj_t BgL_index1110z00_1128;
BgL_index1110z00_1128 = 
BGl_search1107ze70ze7zz__mmapz00(
VECTOR_LENGTH(BgL_opt1104z00_12), BgL_opt1104z00_12, BGl_keyword1919z00zz__mmapz00, ((long)1)); 
{ /* Llib/mmap.scm 129 */
bool_t BgL_test2067z00_2565;
{ /* Llib/mmap.scm 129 */
long BgL_n1z00_1679;
{ /* Llib/mmap.scm 129 */
obj_t BgL_tmpz00_2566;
if(
INTEGERP(BgL_index1110z00_1128))
{ /* Llib/mmap.scm 129 */
BgL_tmpz00_2566 = BgL_index1110z00_1128
; }  else 
{ 
obj_t BgL_auxz00_2569;
BgL_auxz00_2569 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)5669)), BGl_string1932z00zz__mmapz00, BGl_string1927z00zz__mmapz00, BgL_index1110z00_1128); 
FAILURE(BgL_auxz00_2569,BFALSE,BFALSE);} 
BgL_n1z00_1679 = 
(long)CINT(BgL_tmpz00_2566); } 
BgL_test2067z00_2565 = 
(BgL_n1z00_1679>=((long)0)); } 
if(BgL_test2067z00_2565)
{ 
long BgL_auxz00_2575;
{ /* Llib/mmap.scm 129 */
obj_t BgL_tmpz00_2576;
if(
INTEGERP(BgL_index1110z00_1128))
{ /* Llib/mmap.scm 129 */
BgL_tmpz00_2576 = BgL_index1110z00_1128
; }  else 
{ 
obj_t BgL_auxz00_2579;
BgL_auxz00_2579 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)5669)), BGl_string1932z00zz__mmapz00, BGl_string1927z00zz__mmapz00, BgL_index1110z00_1128); 
FAILURE(BgL_auxz00_2579,BFALSE,BFALSE);} 
BgL_auxz00_2575 = 
(long)CINT(BgL_tmpz00_2576); } 
BgL_readz00_1118 = 
VECTOR_REF(BgL_opt1104z00_12,BgL_auxz00_2575); }  else 
{ /* Llib/mmap.scm 129 */BFALSE; } } } 
{ /* Llib/mmap.scm 129 */
obj_t BgL_index1111z00_1130;
BgL_index1111z00_1130 = 
BGl_search1107ze70ze7zz__mmapz00(
VECTOR_LENGTH(BgL_opt1104z00_12), BgL_opt1104z00_12, BGl_keyword1921z00zz__mmapz00, ((long)1)); 
{ /* Llib/mmap.scm 129 */
bool_t BgL_test2070z00_2587;
{ /* Llib/mmap.scm 129 */
long BgL_n1z00_1681;
{ /* Llib/mmap.scm 129 */
obj_t BgL_tmpz00_2588;
if(
INTEGERP(BgL_index1111z00_1130))
{ /* Llib/mmap.scm 129 */
BgL_tmpz00_2588 = BgL_index1111z00_1130
; }  else 
{ 
obj_t BgL_auxz00_2591;
BgL_auxz00_2591 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)5669)), BGl_string1932z00zz__mmapz00, BGl_string1927z00zz__mmapz00, BgL_index1111z00_1130); 
FAILURE(BgL_auxz00_2591,BFALSE,BFALSE);} 
BgL_n1z00_1681 = 
(long)CINT(BgL_tmpz00_2588); } 
BgL_test2070z00_2587 = 
(BgL_n1z00_1681>=((long)0)); } 
if(BgL_test2070z00_2587)
{ 
long BgL_auxz00_2597;
{ /* Llib/mmap.scm 129 */
obj_t BgL_tmpz00_2598;
if(
INTEGERP(BgL_index1111z00_1130))
{ /* Llib/mmap.scm 129 */
BgL_tmpz00_2598 = BgL_index1111z00_1130
; }  else 
{ 
obj_t BgL_auxz00_2601;
BgL_auxz00_2601 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)5669)), BGl_string1932z00zz__mmapz00, BGl_string1927z00zz__mmapz00, BgL_index1111z00_1130); 
FAILURE(BgL_auxz00_2601,BFALSE,BFALSE);} 
BgL_auxz00_2597 = 
(long)CINT(BgL_tmpz00_2598); } 
BgL_writez00_1119 = 
VECTOR_REF(BgL_opt1104z00_12,BgL_auxz00_2597); }  else 
{ /* Llib/mmap.scm 129 */BFALSE; } } } 
{ /* Llib/mmap.scm 129 */
obj_t BgL_arg1242z00_1132;
BgL_arg1242z00_1132 = 
VECTOR_REF(BgL_opt1104z00_12,((long)0)); 
{ /* Llib/mmap.scm 129 */
obj_t BgL_readz00_1133;
BgL_readz00_1133 = BgL_readz00_1118; 
{ /* Llib/mmap.scm 129 */
obj_t BgL_writez00_1134;
BgL_writez00_1134 = BgL_writez00_1119; 
{ /* Llib/mmap.scm 129 */
obj_t BgL_res1684z00_1684;
{ /* Llib/mmap.scm 129 */
obj_t BgL_sz00_1683;
if(
STRINGP(BgL_arg1242z00_1132))
{ /* Llib/mmap.scm 129 */
BgL_sz00_1683 = BgL_arg1242z00_1132; }  else 
{ 
obj_t BgL_auxz00_2610;
BgL_auxz00_2610 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)5669)), BGl_string1932z00zz__mmapz00, BGl_string1928z00zz__mmapz00, BgL_arg1242z00_1132); 
FAILURE(BgL_auxz00_2610,BFALSE,BFALSE);} 
{ /* Llib/mmap.scm 130 */
bool_t BgL_auxz00_2616;bool_t BgL_tmpz00_2614;
BgL_auxz00_2616 = 
CBOOL(BgL_writez00_1134); 
BgL_tmpz00_2614 = 
CBOOL(BgL_readz00_1133); 
BgL_res1684z00_1684 = 
bgl_string_to_mmap(BgL_sz00_1683, BgL_tmpz00_2614, BgL_auxz00_2616); } } 
return BgL_res1684z00_1684;} } } } } } } } } 

}



/* search1107~0 */
obj_t BGl_search1107ze70ze7zz__mmapz00(long BgL_l1106z00_2208, obj_t BgL_opt1104z00_2207, obj_t BgL_k1z00_1114, long BgL_iz00_1115)
{
{ /* Llib/mmap.scm 129 */
BGl_search1107ze70ze7zz__mmapz00:
if(
(BgL_iz00_1115==BgL_l1106z00_2208))
{ /* Llib/mmap.scm 129 */
return 
BINT(((long)-1));}  else 
{ /* Llib/mmap.scm 129 */
if(
(BgL_iz00_1115==
(BgL_l1106z00_2208-((long)1))))
{ /* Llib/mmap.scm 129 */
return 
BGl_errorz00zz__errorz00(BGl_symbol1930z00zz__mmapz00, BGl_string1929z00zz__mmapz00, 
BINT(
VECTOR_LENGTH(BgL_opt1104z00_2207)));}  else 
{ /* Llib/mmap.scm 129 */
obj_t BgL_vz00_1139;
BgL_vz00_1139 = 
VECTOR_REF(BgL_opt1104z00_2207,BgL_iz00_1115); 
if(
(BgL_vz00_1139==BgL_k1z00_1114))
{ /* Llib/mmap.scm 129 */
return 
BINT(
(BgL_iz00_1115+((long)1)));}  else 
{ 
long BgL_iz00_2633;
BgL_iz00_2633 = 
(BgL_iz00_1115+((long)2)); 
BgL_iz00_1115 = BgL_iz00_2633; 
goto BGl_search1107ze70ze7zz__mmapz00;} } } } 

}



/* string->mmap */
BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3mmapz31zz__mmapz00(obj_t BgL_sz00_9, obj_t BgL_readz00_10, obj_t BgL_writez00_11)
{
{ /* Llib/mmap.scm 129 */
{ /* Llib/mmap.scm 130 */
bool_t BgL_auxz00_2637;bool_t BgL_tmpz00_2635;
BgL_auxz00_2637 = 
CBOOL(BgL_writez00_11); 
BgL_tmpz00_2635 = 
CBOOL(BgL_readz00_10); 
return 
bgl_string_to_mmap(BgL_sz00_9, BgL_tmpz00_2635, BgL_auxz00_2637);} } 

}



/* mmap-name */
BGL_EXPORTED_DEF obj_t BGl_mmapzd2namezd2zz__mmapz00(obj_t BgL_mmapz00_14)
{
{ /* Llib/mmap.scm 135 */
{ /* Llib/mmap.scm 136 */
obj_t BgL_aux1836z00_2335;
BgL_aux1836z00_2335 = 
BGL_MMAP_NAME(BgL_mmapz00_14); 
if(
STRINGP(BgL_aux1836z00_2335))
{ /* Llib/mmap.scm 136 */
return BgL_aux1836z00_2335;}  else 
{ 
obj_t BgL_auxz00_2643;
BgL_auxz00_2643 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)6027)), BGl_string1933z00zz__mmapz00, BGl_string1928z00zz__mmapz00, BgL_aux1836z00_2335); 
FAILURE(BgL_auxz00_2643,BFALSE,BFALSE);} } } 

}



/* &mmap-name */
obj_t BGl_z62mmapzd2namezb0zz__mmapz00(obj_t BgL_envz00_2154, obj_t BgL_mmapz00_2155)
{
{ /* Llib/mmap.scm 135 */
{ /* Llib/mmap.scm 136 */
obj_t BgL_auxz00_2647;
if(
BGL_MMAPP(BgL_mmapz00_2155))
{ /* Llib/mmap.scm 136 */
BgL_auxz00_2647 = BgL_mmapz00_2155
; }  else 
{ 
obj_t BgL_auxz00_2650;
BgL_auxz00_2650 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)6027)), BGl_string1934z00zz__mmapz00, BGl_string1935z00zz__mmapz00, BgL_mmapz00_2155); 
FAILURE(BgL_auxz00_2650,BFALSE,BFALSE);} 
return 
BGl_mmapzd2namezd2zz__mmapz00(BgL_auxz00_2647);} } 

}



/* mmap->string */
BGL_EXPORTED_DEF char * BGl_mmapzd2ze3stringz31zz__mmapz00(obj_t BgL_mmapz00_15)
{
{ /* Llib/mmap.scm 141 */
return 
BGL_MMAP_TO_STRING(BgL_mmapz00_15);} 

}



/* &mmap->string */
obj_t BGl_z62mmapzd2ze3stringz53zz__mmapz00(obj_t BgL_envz00_2156, obj_t BgL_mmapz00_2157)
{
{ /* Llib/mmap.scm 141 */
{ /* Llib/mmap.scm 142 */
char * BgL_tmpz00_2656;
{ /* Llib/mmap.scm 142 */
obj_t BgL_auxz00_2657;
if(
BGL_MMAPP(BgL_mmapz00_2157))
{ /* Llib/mmap.scm 142 */
BgL_auxz00_2657 = BgL_mmapz00_2157
; }  else 
{ 
obj_t BgL_auxz00_2660;
BgL_auxz00_2660 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)6321)), BGl_string1936z00zz__mmapz00, BGl_string1935z00zz__mmapz00, BgL_mmapz00_2157); 
FAILURE(BgL_auxz00_2660,BFALSE,BFALSE);} 
BgL_tmpz00_2656 = 
BGl_mmapzd2ze3stringz31zz__mmapz00(BgL_auxz00_2657); } 
return 
string_to_bstring(BgL_tmpz00_2656);} } 

}



/* mmap->bstring */
BGL_EXPORTED_DEF obj_t BGl_mmapzd2ze3bstringz31zz__mmapz00(obj_t BgL_mmapz00_16)
{
{ /* Llib/mmap.scm 147 */
{ /* Llib/mmap.scm 148 */
int BgL_lenz00_2336;
{ /* Llib/mmap.scm 148 */
long BgL_arg1254z00_2337;
BgL_arg1254z00_2337 = 
BGL_MMAP_LENGTH(BgL_mmapz00_16); 
{ /* Llib/mmap.scm 148 */
long BgL_res1685z00_2338;
BgL_res1685z00_2338 = 
(long)(BgL_arg1254z00_2337); 
BgL_lenz00_2336 = 
(int)(BgL_res1685z00_2338); } } 
{ /* Llib/mmap.scm 149 */
char * BgL_arg1253z00_2339;
BgL_arg1253z00_2339 = 
BGL_MMAP_TO_STRING(BgL_mmapz00_16); 
return 
string_to_bstring_len(BgL_arg1253z00_2339, BgL_lenz00_2336);} } } 

}



/* &mmap->bstring */
obj_t BGl_z62mmapzd2ze3bstringz53zz__mmapz00(obj_t BgL_envz00_2158, obj_t BgL_mmapz00_2159)
{
{ /* Llib/mmap.scm 147 */
{ /* Llib/mmap.scm 148 */
obj_t BgL_auxz00_2671;
if(
BGL_MMAPP(BgL_mmapz00_2159))
{ /* Llib/mmap.scm 148 */
BgL_auxz00_2671 = BgL_mmapz00_2159
; }  else 
{ 
obj_t BgL_auxz00_2674;
BgL_auxz00_2674 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)6620)), BGl_string1937z00zz__mmapz00, BGl_string1935z00zz__mmapz00, BgL_mmapz00_2159); 
FAILURE(BgL_auxz00_2674,BFALSE,BFALSE);} 
return 
BGl_mmapzd2ze3bstringz31zz__mmapz00(BgL_auxz00_2671);} } 

}



/* close-mmap */
BGL_EXPORTED_DEF obj_t BGl_closezd2mmapzd2zz__mmapz00(obj_t BgL_mmapz00_17)
{
{ /* Llib/mmap.scm 154 */
return 
bgl_close_mmap(BgL_mmapz00_17);} 

}



/* &close-mmap */
obj_t BGl_z62closezd2mmapzb0zz__mmapz00(obj_t BgL_envz00_2160, obj_t BgL_mmapz00_2161)
{
{ /* Llib/mmap.scm 154 */
{ /* Llib/mmap.scm 155 */
obj_t BgL_auxz00_2680;
if(
BGL_MMAPP(BgL_mmapz00_2161))
{ /* Llib/mmap.scm 155 */
BgL_auxz00_2680 = BgL_mmapz00_2161
; }  else 
{ 
obj_t BgL_auxz00_2683;
BgL_auxz00_2683 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)6996)), BGl_string1938z00zz__mmapz00, BGl_string1935z00zz__mmapz00, BgL_mmapz00_2161); 
FAILURE(BgL_auxz00_2683,BFALSE,BFALSE);} 
return 
BGl_closezd2mmapzd2zz__mmapz00(BgL_auxz00_2680);} } 

}



/* mmap-length */
BGL_EXPORTED_DEF long BGl_mmapzd2lengthzd2zz__mmapz00(obj_t BgL_objz00_18)
{
{ /* Llib/mmap.scm 160 */
return 
BGL_MMAP_LENGTH(BgL_objz00_18);} 

}



/* &mmap-length */
obj_t BGl_z62mmapzd2lengthzb0zz__mmapz00(obj_t BgL_envz00_2162, obj_t BgL_objz00_2163)
{
{ /* Llib/mmap.scm 160 */
{ /* Llib/mmap.scm 161 */
long BgL_tmpz00_2689;
{ /* Llib/mmap.scm 161 */
obj_t BgL_auxz00_2690;
if(
BGL_MMAPP(BgL_objz00_2163))
{ /* Llib/mmap.scm 161 */
BgL_auxz00_2690 = BgL_objz00_2163
; }  else 
{ 
obj_t BgL_auxz00_2693;
BgL_auxz00_2693 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)7281)), BGl_string1939z00zz__mmapz00, BGl_string1935z00zz__mmapz00, BgL_objz00_2163); 
FAILURE(BgL_auxz00_2693,BFALSE,BFALSE);} 
BgL_tmpz00_2689 = 
BGl_mmapzd2lengthzd2zz__mmapz00(BgL_auxz00_2690); } 
return 
make_belong(BgL_tmpz00_2689);} } 

}



/* mmap-read-position */
BGL_EXPORTED_DEF long BGl_mmapzd2readzd2positionz00zz__mmapz00(obj_t BgL_mmz00_19)
{
{ /* Llib/mmap.scm 166 */
return 
BGL_MMAP_RP_GET(BgL_mmz00_19);} 

}



/* &mmap-read-position */
obj_t BGl_z62mmapzd2readzd2positionz62zz__mmapz00(obj_t BgL_envz00_2164, obj_t BgL_mmz00_2165)
{
{ /* Llib/mmap.scm 166 */
{ /* Llib/mmap.scm 167 */
long BgL_tmpz00_2700;
{ /* Llib/mmap.scm 167 */
obj_t BgL_auxz00_2701;
if(
BGL_MMAPP(BgL_mmz00_2165))
{ /* Llib/mmap.scm 167 */
BgL_auxz00_2701 = BgL_mmz00_2165
; }  else 
{ 
obj_t BgL_auxz00_2704;
BgL_auxz00_2704 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)7572)), BGl_string1940z00zz__mmapz00, BGl_string1935z00zz__mmapz00, BgL_mmz00_2165); 
FAILURE(BgL_auxz00_2704,BFALSE,BFALSE);} 
BgL_tmpz00_2700 = 
BGl_mmapzd2readzd2positionz00zz__mmapz00(BgL_auxz00_2701); } 
return 
make_belong(BgL_tmpz00_2700);} } 

}



/* mmap-read-position-set! */
BGL_EXPORTED_DEF long BGl_mmapzd2readzd2positionzd2setz12zc0zz__mmapz00(obj_t BgL_mmz00_20, long BgL_pz00_21)
{
{ /* Llib/mmap.scm 172 */
BGL_MMAP_RP_SET(BgL_mmz00_20, BgL_pz00_21); BUNSPEC; 
return BgL_pz00_21;} 

}



/* &mmap-read-position-set! */
obj_t BGl_z62mmapzd2readzd2positionzd2setz12za2zz__mmapz00(obj_t BgL_envz00_2166, obj_t BgL_mmz00_2167, obj_t BgL_pz00_2168)
{
{ /* Llib/mmap.scm 172 */
{ /* Llib/mmap.scm 173 */
long BgL_tmpz00_2711;
{ /* Llib/mmap.scm 173 */
long BgL_auxz00_2719;obj_t BgL_auxz00_2712;
{ /* Llib/mmap.scm 173 */
obj_t BgL_tmpz00_2720;
if(
ELONGP(BgL_pz00_2168))
{ /* Llib/mmap.scm 173 */
BgL_tmpz00_2720 = BgL_pz00_2168
; }  else 
{ 
obj_t BgL_auxz00_2723;
BgL_auxz00_2723 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)7884)), BGl_string1941z00zz__mmapz00, BGl_string1942z00zz__mmapz00, BgL_pz00_2168); 
FAILURE(BgL_auxz00_2723,BFALSE,BFALSE);} 
BgL_auxz00_2719 = 
BELONG_TO_LONG(BgL_tmpz00_2720); } 
if(
BGL_MMAPP(BgL_mmz00_2167))
{ /* Llib/mmap.scm 173 */
BgL_auxz00_2712 = BgL_mmz00_2167
; }  else 
{ 
obj_t BgL_auxz00_2715;
BgL_auxz00_2715 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)7884)), BGl_string1941z00zz__mmapz00, BGl_string1935z00zz__mmapz00, BgL_mmz00_2167); 
FAILURE(BgL_auxz00_2715,BFALSE,BFALSE);} 
BgL_tmpz00_2711 = 
BGl_mmapzd2readzd2positionzd2setz12zc0zz__mmapz00(BgL_auxz00_2712, BgL_auxz00_2719); } 
return 
make_belong(BgL_tmpz00_2711);} } 

}



/* mmap-write-position */
BGL_EXPORTED_DEF long BGl_mmapzd2writezd2positionz00zz__mmapz00(obj_t BgL_mmz00_22)
{
{ /* Llib/mmap.scm 179 */
return 
BGL_MMAP_WP_GET(BgL_mmz00_22);} 

}



/* &mmap-write-position */
obj_t BGl_z62mmapzd2writezd2positionz62zz__mmapz00(obj_t BgL_envz00_2169, obj_t BgL_mmz00_2170)
{
{ /* Llib/mmap.scm 179 */
{ /* Llib/mmap.scm 180 */
long BgL_tmpz00_2731;
{ /* Llib/mmap.scm 180 */
obj_t BgL_auxz00_2732;
if(
BGL_MMAPP(BgL_mmz00_2170))
{ /* Llib/mmap.scm 180 */
BgL_auxz00_2732 = BgL_mmz00_2170
; }  else 
{ 
obj_t BgL_auxz00_2735;
BgL_auxz00_2735 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)8164)), BGl_string1943z00zz__mmapz00, BGl_string1935z00zz__mmapz00, BgL_mmz00_2170); 
FAILURE(BgL_auxz00_2735,BFALSE,BFALSE);} 
BgL_tmpz00_2731 = 
BGl_mmapzd2writezd2positionz00zz__mmapz00(BgL_auxz00_2732); } 
return 
make_belong(BgL_tmpz00_2731);} } 

}



/* mmap-write-position-set! */
BGL_EXPORTED_DEF long BGl_mmapzd2writezd2positionzd2setz12zc0zz__mmapz00(obj_t BgL_mmz00_23, long BgL_pz00_24)
{
{ /* Llib/mmap.scm 185 */
BGL_MMAP_WP_SET(BgL_mmz00_23, BgL_pz00_24); BUNSPEC; 
return BgL_pz00_24;} 

}



/* &mmap-write-position-set! */
obj_t BGl_z62mmapzd2writezd2positionzd2setz12za2zz__mmapz00(obj_t BgL_envz00_2171, obj_t BgL_mmz00_2172, obj_t BgL_pz00_2173)
{
{ /* Llib/mmap.scm 185 */
{ /* Llib/mmap.scm 186 */
long BgL_tmpz00_2742;
{ /* Llib/mmap.scm 186 */
long BgL_auxz00_2750;obj_t BgL_auxz00_2743;
{ /* Llib/mmap.scm 186 */
obj_t BgL_tmpz00_2751;
if(
ELONGP(BgL_pz00_2173))
{ /* Llib/mmap.scm 186 */
BgL_tmpz00_2751 = BgL_pz00_2173
; }  else 
{ 
obj_t BgL_auxz00_2754;
BgL_auxz00_2754 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)8477)), BGl_string1944z00zz__mmapz00, BGl_string1942z00zz__mmapz00, BgL_pz00_2173); 
FAILURE(BgL_auxz00_2754,BFALSE,BFALSE);} 
BgL_auxz00_2750 = 
BELONG_TO_LONG(BgL_tmpz00_2751); } 
if(
BGL_MMAPP(BgL_mmz00_2172))
{ /* Llib/mmap.scm 186 */
BgL_auxz00_2743 = BgL_mmz00_2172
; }  else 
{ 
obj_t BgL_auxz00_2746;
BgL_auxz00_2746 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)8477)), BGl_string1944z00zz__mmapz00, BGl_string1935z00zz__mmapz00, BgL_mmz00_2172); 
FAILURE(BgL_auxz00_2746,BFALSE,BFALSE);} 
BgL_tmpz00_2742 = 
BGl_mmapzd2writezd2positionzd2setz12zc0zz__mmapz00(BgL_auxz00_2743, BgL_auxz00_2750); } 
return 
make_belong(BgL_tmpz00_2742);} } 

}



/* mmap-ref-ur */
BGL_EXPORTED_DEF unsigned char BGl_mmapzd2refzd2urz00zz__mmapz00(obj_t BgL_mmz00_25, long BgL_iz00_26)
{
{ /* Llib/mmap.scm 192 */
{ /* Llib/mmap.scm 193 */
unsigned char BgL_cz00_2340;
BgL_cz00_2340 = 
BGL_MMAP_REF(BgL_mmz00_25, BgL_iz00_26); 
{ /* Llib/mmap.scm 194 */
long BgL_arg1256z00_2341;
BgL_arg1256z00_2341 = 
(BgL_iz00_26+((long)1)); 
{ /* Llib/mmap.scm 194 */
long BgL_res1687z00_2342;
BGL_MMAP_RP_SET(BgL_mmz00_25, BgL_arg1256z00_2341); BUNSPEC; 
BgL_res1687z00_2342 = BgL_arg1256z00_2341; BgL_res1687z00_2342; } } 
return BgL_cz00_2340;} } 

}



/* &mmap-ref-ur */
obj_t BGl_z62mmapzd2refzd2urz62zz__mmapz00(obj_t BgL_envz00_2174, obj_t BgL_mmz00_2175, obj_t BgL_iz00_2176)
{
{ /* Llib/mmap.scm 192 */
{ /* Llib/mmap.scm 193 */
unsigned char BgL_tmpz00_2764;
{ /* Llib/mmap.scm 193 */
long BgL_auxz00_2772;obj_t BgL_auxz00_2765;
{ /* Llib/mmap.scm 193 */
obj_t BgL_tmpz00_2773;
if(
ELONGP(BgL_iz00_2176))
{ /* Llib/mmap.scm 193 */
BgL_tmpz00_2773 = BgL_iz00_2176
; }  else 
{ 
obj_t BgL_auxz00_2776;
BgL_auxz00_2776 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)8765)), BGl_string1945z00zz__mmapz00, BGl_string1942z00zz__mmapz00, BgL_iz00_2176); 
FAILURE(BgL_auxz00_2776,BFALSE,BFALSE);} 
BgL_auxz00_2772 = 
BELONG_TO_LONG(BgL_tmpz00_2773); } 
if(
BGL_MMAPP(BgL_mmz00_2175))
{ /* Llib/mmap.scm 193 */
BgL_auxz00_2765 = BgL_mmz00_2175
; }  else 
{ 
obj_t BgL_auxz00_2768;
BgL_auxz00_2768 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)8765)), BGl_string1945z00zz__mmapz00, BGl_string1935z00zz__mmapz00, BgL_mmz00_2175); 
FAILURE(BgL_auxz00_2768,BFALSE,BFALSE);} 
BgL_tmpz00_2764 = 
BGl_mmapzd2refzd2urz00zz__mmapz00(BgL_auxz00_2765, BgL_auxz00_2772); } 
return 
BCHAR(BgL_tmpz00_2764);} } 

}



/* mmap-set-ur! */
BGL_EXPORTED_DEF obj_t BGl_mmapzd2setzd2urz12z12zz__mmapz00(obj_t BgL_mmz00_27, long BgL_iz00_28, unsigned char BgL_cz00_29)
{
{ /* Llib/mmap.scm 200 */
BGL_MMAP_SET(BgL_mmz00_27, BgL_iz00_28, BgL_cz00_29); 
{ /* Llib/mmap.scm 202 */
long BgL_arg1258z00_2343;
BgL_arg1258z00_2343 = 
(BgL_iz00_28+((long)1)); 
{ /* Llib/mmap.scm 202 */
long BgL_res1689z00_2344;
BGL_MMAP_WP_SET(BgL_mmz00_27, BgL_arg1258z00_2343); BUNSPEC; 
BgL_res1689z00_2344 = BgL_arg1258z00_2343; 
return 
make_belong(BgL_res1689z00_2344);} } } 

}



/* &mmap-set-ur! */
obj_t BGl_z62mmapzd2setzd2urz12z70zz__mmapz00(obj_t BgL_envz00_2177, obj_t BgL_mmz00_2178, obj_t BgL_iz00_2179, obj_t BgL_cz00_2180)
{
{ /* Llib/mmap.scm 200 */
{ /* Llib/mmap.scm 201 */
unsigned char BgL_auxz00_2803;long BgL_auxz00_2794;obj_t BgL_auxz00_2787;
{ /* Llib/mmap.scm 201 */
obj_t BgL_tmpz00_2804;
if(
CHARP(BgL_cz00_2180))
{ /* Llib/mmap.scm 201 */
BgL_tmpz00_2804 = BgL_cz00_2180
; }  else 
{ 
obj_t BgL_auxz00_2807;
BgL_auxz00_2807 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)9159)), BGl_string1946z00zz__mmapz00, BGl_string1947z00zz__mmapz00, BgL_cz00_2180); 
FAILURE(BgL_auxz00_2807,BFALSE,BFALSE);} 
BgL_auxz00_2803 = 
CCHAR(BgL_tmpz00_2804); } 
{ /* Llib/mmap.scm 201 */
obj_t BgL_tmpz00_2795;
if(
ELONGP(BgL_iz00_2179))
{ /* Llib/mmap.scm 201 */
BgL_tmpz00_2795 = BgL_iz00_2179
; }  else 
{ 
obj_t BgL_auxz00_2798;
BgL_auxz00_2798 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)9159)), BGl_string1946z00zz__mmapz00, BGl_string1942z00zz__mmapz00, BgL_iz00_2179); 
FAILURE(BgL_auxz00_2798,BFALSE,BFALSE);} 
BgL_auxz00_2794 = 
BELONG_TO_LONG(BgL_tmpz00_2795); } 
if(
BGL_MMAPP(BgL_mmz00_2178))
{ /* Llib/mmap.scm 201 */
BgL_auxz00_2787 = BgL_mmz00_2178
; }  else 
{ 
obj_t BgL_auxz00_2790;
BgL_auxz00_2790 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)9159)), BGl_string1946z00zz__mmapz00, BGl_string1935z00zz__mmapz00, BgL_mmz00_2178); 
FAILURE(BgL_auxz00_2790,BFALSE,BFALSE);} 
return 
BGl_mmapzd2setzd2urz12z12zz__mmapz00(BgL_auxz00_2787, BgL_auxz00_2794, BgL_auxz00_2803);} } 

}



/* mmap-ref */
BGL_EXPORTED_DEF unsigned char BGl_mmapzd2refzd2zz__mmapz00(obj_t BgL_mmz00_30, long BgL_iz00_31)
{
{ /* Llib/mmap.scm 207 */
{ /* Llib/mmap.scm 208 */
bool_t BgL_test2094z00_2813;
{ /* Llib/mmap.scm 208 */
long BgL_arg1274z00_2345;
{ /* Llib/mmap.scm 208 */
long BgL_res1690z00_2346;
BgL_res1690z00_2346 = 
BGL_MMAP_LENGTH(BgL_mmz00_30); 
BgL_arg1274z00_2345 = BgL_res1690z00_2346; } 
BgL_test2094z00_2813 = 
BOUND_CHECK(BgL_iz00_31, BgL_arg1274z00_2345); } 
if(BgL_test2094z00_2813)
{ /* Llib/mmap.scm 209 */
unsigned char BgL_res1693z00_2347;
{ /* Llib/mmap.scm 193 */
unsigned char BgL_cz00_2348;
BgL_cz00_2348 = 
BGL_MMAP_REF(BgL_mmz00_30, BgL_iz00_31); 
{ /* Llib/mmap.scm 194 */
long BgL_arg1256z00_2349;
BgL_arg1256z00_2349 = 
(BgL_iz00_31+((long)1)); 
{ /* Llib/mmap.scm 194 */
long BgL_res1692z00_2350;
BGL_MMAP_RP_SET(BgL_mmz00_30, BgL_arg1256z00_2349); BUNSPEC; 
BgL_res1692z00_2350 = BgL_arg1256z00_2349; BgL_res1692z00_2350; } } 
BgL_res1693z00_2347 = BgL_cz00_2348; } 
return BgL_res1693z00_2347;}  else 
{ /* Llib/mmap.scm 212 */
obj_t BgL_arg1268z00_2351;
{ /* Llib/mmap.scm 212 */
obj_t BgL_arg1270z00_2352;
{ /* Llib/mmap.scm 212 */
obj_t BgL_arg1271z00_2353;
{ /* Llib/mmap.scm 212 */
long BgL_arg1273z00_2354;
{ /* Llib/mmap.scm 212 */
long BgL_res1694z00_2355;
BgL_res1694z00_2355 = 
BGL_MMAP_LENGTH(BgL_mmz00_30); 
BgL_arg1273z00_2354 = BgL_res1694z00_2355; } 
BgL_arg1271z00_2353 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(
make_belong(BgL_arg1273z00_2354), 
BINT(((long)1))); } 
{ /* Llib/mmap.scm 212 */

BgL_arg1270z00_2352 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg1271z00_2353, 
BINT(((long)10))); } } 
BgL_arg1268z00_2351 = 
string_append_3(BGl_string1948z00zz__mmapz00, BgL_arg1270z00_2352, BGl_string1949z00zz__mmapz00); } 
{ /* Llib/mmap.scm 210 */
obj_t BgL_tmpz00_2826;
{ /* Llib/mmap.scm 210 */
obj_t BgL_aux1870z00_2356;
BgL_aux1870z00_2356 = 
BGl_errorz00zz__errorz00(BGl_symbol1950z00zz__mmapz00, BgL_arg1268z00_2351, 
make_belong(BgL_iz00_31)); 
if(
CHARP(BgL_aux1870z00_2356))
{ /* Llib/mmap.scm 210 */
BgL_tmpz00_2826 = BgL_aux1870z00_2356
; }  else 
{ 
obj_t BgL_auxz00_2831;
BgL_auxz00_2831 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)9564)), BGl_string1951z00zz__mmapz00, BGl_string1947z00zz__mmapz00, BgL_aux1870z00_2356); 
FAILURE(BgL_auxz00_2831,BFALSE,BFALSE);} } 
return 
CCHAR(BgL_tmpz00_2826);} } } } 

}



/* &mmap-ref */
obj_t BGl_z62mmapzd2refzb0zz__mmapz00(obj_t BgL_envz00_2181, obj_t BgL_mmz00_2182, obj_t BgL_iz00_2183)
{
{ /* Llib/mmap.scm 207 */
{ /* Llib/mmap.scm 208 */
unsigned char BgL_tmpz00_2836;
{ /* Llib/mmap.scm 208 */
long BgL_auxz00_2844;obj_t BgL_auxz00_2837;
{ /* Llib/mmap.scm 208 */
obj_t BgL_tmpz00_2845;
if(
ELONGP(BgL_iz00_2183))
{ /* Llib/mmap.scm 208 */
BgL_tmpz00_2845 = BgL_iz00_2183
; }  else 
{ 
obj_t BgL_auxz00_2848;
BgL_auxz00_2848 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)9487)), BGl_string1952z00zz__mmapz00, BGl_string1942z00zz__mmapz00, BgL_iz00_2183); 
FAILURE(BgL_auxz00_2848,BFALSE,BFALSE);} 
BgL_auxz00_2844 = 
BELONG_TO_LONG(BgL_tmpz00_2845); } 
if(
BGL_MMAPP(BgL_mmz00_2182))
{ /* Llib/mmap.scm 208 */
BgL_auxz00_2837 = BgL_mmz00_2182
; }  else 
{ 
obj_t BgL_auxz00_2840;
BgL_auxz00_2840 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)9487)), BGl_string1952z00zz__mmapz00, BGl_string1935z00zz__mmapz00, BgL_mmz00_2182); 
FAILURE(BgL_auxz00_2840,BFALSE,BFALSE);} 
BgL_tmpz00_2836 = 
BGl_mmapzd2refzd2zz__mmapz00(BgL_auxz00_2837, BgL_auxz00_2844); } 
return 
BCHAR(BgL_tmpz00_2836);} } 

}



/* mmap-set! */
BGL_EXPORTED_DEF obj_t BGl_mmapzd2setz12zc0zz__mmapz00(obj_t BgL_mmz00_32, long BgL_iz00_33, unsigned char BgL_cz00_34)
{
{ /* Llib/mmap.scm 219 */
{ /* Llib/mmap.scm 220 */
bool_t BgL_test2098z00_2855;
{ /* Llib/mmap.scm 220 */
long BgL_arg1284z00_2357;
{ /* Llib/mmap.scm 220 */
long BgL_res1695z00_2358;
BgL_res1695z00_2358 = 
BGL_MMAP_LENGTH(BgL_mmz00_32); 
BgL_arg1284z00_2357 = BgL_res1695z00_2358; } 
BgL_test2098z00_2855 = 
BOUND_CHECK(BgL_iz00_33, BgL_arg1284z00_2357); } 
if(BgL_test2098z00_2855)
{ /* Llib/mmap.scm 220 */
BGL_MMAP_SET(BgL_mmz00_32, BgL_iz00_33, BgL_cz00_34); 
{ /* Llib/mmap.scm 202 */
long BgL_arg1258z00_2359;
BgL_arg1258z00_2359 = 
(BgL_iz00_33+((long)1)); 
{ /* Llib/mmap.scm 202 */
long BgL_res1697z00_2360;
BGL_MMAP_WP_SET(BgL_mmz00_32, BgL_arg1258z00_2359); BUNSPEC; 
BgL_res1697z00_2360 = BgL_arg1258z00_2359; 
return 
make_belong(BgL_res1697z00_2360);} } }  else 
{ /* Llib/mmap.scm 224 */
obj_t BgL_arg1277z00_2361;
{ /* Llib/mmap.scm 224 */
obj_t BgL_arg1280z00_2362;
{ /* Llib/mmap.scm 224 */
obj_t BgL_arg1281z00_2363;
{ /* Llib/mmap.scm 224 */
long BgL_arg1282z00_2364;
{ /* Llib/mmap.scm 224 */
long BgL_res1698z00_2365;
BgL_res1698z00_2365 = 
BGL_MMAP_LENGTH(BgL_mmz00_32); 
BgL_arg1282z00_2364 = BgL_res1698z00_2365; } 
BgL_arg1281z00_2363 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(
make_belong(BgL_arg1282z00_2364), 
BINT(((long)1))); } 
{ /* Llib/mmap.scm 224 */

BgL_arg1280z00_2362 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg1281z00_2363, 
BINT(((long)10))); } } 
BgL_arg1277z00_2361 = 
string_append_3(BGl_string1948z00zz__mmapz00, BgL_arg1280z00_2362, BGl_string1949z00zz__mmapz00); } 
return 
BGl_errorz00zz__errorz00(BGl_symbol1953z00zz__mmapz00, BgL_arg1277z00_2361, 
make_belong(BgL_iz00_33));} } } 

}



/* &mmap-set! */
obj_t BGl_z62mmapzd2setz12za2zz__mmapz00(obj_t BgL_envz00_2184, obj_t BgL_mmz00_2185, obj_t BgL_iz00_2186, obj_t BgL_cz00_2187)
{
{ /* Llib/mmap.scm 219 */
{ /* Llib/mmap.scm 220 */
unsigned char BgL_auxz00_2887;long BgL_auxz00_2878;obj_t BgL_auxz00_2871;
{ /* Llib/mmap.scm 220 */
obj_t BgL_tmpz00_2888;
if(
CHARP(BgL_cz00_2187))
{ /* Llib/mmap.scm 220 */
BgL_tmpz00_2888 = BgL_cz00_2187
; }  else 
{ 
obj_t BgL_auxz00_2891;
BgL_auxz00_2891 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)9987)), BGl_string1955z00zz__mmapz00, BGl_string1947z00zz__mmapz00, BgL_cz00_2187); 
FAILURE(BgL_auxz00_2891,BFALSE,BFALSE);} 
BgL_auxz00_2887 = 
CCHAR(BgL_tmpz00_2888); } 
{ /* Llib/mmap.scm 220 */
obj_t BgL_tmpz00_2879;
if(
ELONGP(BgL_iz00_2186))
{ /* Llib/mmap.scm 220 */
BgL_tmpz00_2879 = BgL_iz00_2186
; }  else 
{ 
obj_t BgL_auxz00_2882;
BgL_auxz00_2882 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)9987)), BGl_string1955z00zz__mmapz00, BGl_string1942z00zz__mmapz00, BgL_iz00_2186); 
FAILURE(BgL_auxz00_2882,BFALSE,BFALSE);} 
BgL_auxz00_2878 = 
BELONG_TO_LONG(BgL_tmpz00_2879); } 
if(
BGL_MMAPP(BgL_mmz00_2185))
{ /* Llib/mmap.scm 220 */
BgL_auxz00_2871 = BgL_mmz00_2185
; }  else 
{ 
obj_t BgL_auxz00_2874;
BgL_auxz00_2874 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)9987)), BGl_string1955z00zz__mmapz00, BGl_string1935z00zz__mmapz00, BgL_mmz00_2185); 
FAILURE(BgL_auxz00_2874,BFALSE,BFALSE);} 
return 
BGl_mmapzd2setz12zc0zz__mmapz00(BgL_auxz00_2871, BgL_auxz00_2878, BgL_auxz00_2887);} } 

}



/* mmap-substring */
BGL_EXPORTED_DEF obj_t BGl_mmapzd2substringzd2zz__mmapz00(obj_t BgL_mmz00_35, long BgL_startz00_36, long BgL_endz00_37)
{
{ /* Llib/mmap.scm 231 */
if(
(BgL_endz00_37<BgL_startz00_36))
{ /* Llib/mmap.scm 234 */
long BgL_arg1286z00_1168;
{ /* Llib/mmap.scm 234 */
long BgL_res1700z00_1755;
{ /* Llib/mmap.scm 234 */
long BgL_tmpz00_2899;
BgL_tmpz00_2899 = 
(BgL_endz00_37-BgL_startz00_36); 
BgL_res1700z00_1755 = 
(long)(BgL_tmpz00_2899); } 
BgL_arg1286z00_1168 = BgL_res1700z00_1755; } 
{ /* Llib/mmap.scm 234 */
obj_t BgL_aux1882z00_2301;
BgL_aux1882z00_2301 = 
BGl_errorz00zz__errorz00(BGl_symbol1956z00zz__mmapz00, BGl_string1958z00zz__mmapz00, 
make_belong(BgL_arg1286z00_1168)); 
if(
STRINGP(BgL_aux1882z00_2301))
{ /* Llib/mmap.scm 234 */
return BgL_aux1882z00_2301;}  else 
{ 
obj_t BgL_auxz00_2906;
BgL_auxz00_2906 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)10524)), BGl_string1957z00zz__mmapz00, BGl_string1928z00zz__mmapz00, BgL_aux1882z00_2301); 
FAILURE(BgL_auxz00_2906,BFALSE,BFALSE);} } }  else 
{ /* Llib/mmap.scm 235 */
bool_t BgL_test2104z00_2910;
{ /* Llib/mmap.scm 235 */
long BgL_arg1304z00_1192;
{ /* Llib/mmap.scm 235 */
long BgL_arg1306z00_1193;
{ /* Llib/mmap.scm 235 */
long BgL_res1701z00_1757;
BgL_res1701z00_1757 = 
BGL_MMAP_LENGTH(BgL_mmz00_35); 
BgL_arg1306z00_1193 = BgL_res1701z00_1757; } 
BgL_arg1304z00_1192 = 
(((long)1)+BgL_arg1306z00_1193); } 
BgL_test2104z00_2910 = 
BOUND_CHECK(BgL_endz00_37, BgL_arg1304z00_1192); } 
if(BgL_test2104z00_2910)
{ /* Llib/mmap.scm 240 */
bool_t BgL_test2105z00_2914;
{ /* Llib/mmap.scm 240 */
long BgL_arg1300z00_1186;
{ /* Llib/mmap.scm 240 */
long BgL_res1703z00_1762;
BgL_res1703z00_1762 = 
BGL_MMAP_LENGTH(BgL_mmz00_35); 
BgL_arg1300z00_1186 = BgL_res1703z00_1762; } 
BgL_test2105z00_2914 = 
BOUND_CHECK(BgL_startz00_36, BgL_arg1300z00_1186); } 
if(BgL_test2105z00_2914)
{ /* Llib/mmap.scm 243 */
obj_t BgL_rz00_1174;
{ /* Llib/mmap.scm 243 */
long BgL_arg1298z00_1184;
{ /* Llib/mmap.scm 243 */
long BgL_arg1299z00_1185;
{ /* Llib/mmap.scm 243 */
long BgL_res1704z00_1765;
{ /* Llib/mmap.scm 243 */
long BgL_tmpz00_2917;
BgL_tmpz00_2917 = 
(BgL_endz00_37-BgL_startz00_36); 
BgL_res1704z00_1765 = 
(long)(BgL_tmpz00_2917); } 
BgL_arg1299z00_1185 = BgL_res1704z00_1765; } 
{ /* Llib/mmap.scm 243 */
long BgL_res1705z00_1767;
BgL_res1705z00_1767 = 
(long)(BgL_arg1299z00_1185); 
BgL_arg1298z00_1184 = BgL_res1705z00_1767; } } 
BgL_rz00_1174 = 
make_string_sans_fill(BgL_arg1298z00_1184); } 
{ 
long BgL_iz00_1176;long BgL_jz00_1177;
BgL_iz00_1176 = BgL_startz00_36; 
BgL_jz00_1177 = ((long)0); 
BgL_zc3z04anonymousza31292ze3z87_1178:
if(
(BgL_iz00_1176==BgL_endz00_37))
{ /* Llib/mmap.scm 246 */
{ /* Llib/mmap.scm 248 */
long BgL_res1707z00_1773;
BGL_MMAP_RP_SET(BgL_mmz00_35, BgL_iz00_1176); BUNSPEC; 
BgL_res1707z00_1773 = BgL_iz00_1176; BgL_res1707z00_1773; } 
return BgL_rz00_1174;}  else 
{ /* Llib/mmap.scm 246 */
{ /* Llib/mmap.scm 251 */
unsigned char BgL_arg1295z00_1180;
{ /* Llib/mmap.scm 251 */
unsigned char BgL_res1710z00_1784;
{ /* Llib/mmap.scm 193 */
unsigned char BgL_cz00_1776;
BgL_cz00_1776 = 
BGL_MMAP_REF(BgL_mmz00_35, BgL_iz00_1176); 
{ /* Llib/mmap.scm 194 */
long BgL_arg1256z00_1777;
BgL_arg1256z00_1777 = 
(BgL_iz00_1176+((long)1)); 
{ /* Llib/mmap.scm 194 */
long BgL_res1709z00_1783;
BGL_MMAP_RP_SET(BgL_mmz00_35, BgL_arg1256z00_1777); BUNSPEC; 
BgL_res1709z00_1783 = BgL_arg1256z00_1777; BgL_res1709z00_1783; } } 
BgL_res1710z00_1784 = BgL_cz00_1776; } 
BgL_arg1295z00_1180 = BgL_res1710z00_1784; } 
{ /* Llib/mmap.scm 251 */
long BgL_l1810z00_2229;
BgL_l1810z00_2229 = 
STRING_LENGTH(BgL_rz00_1174); 
if(
BOUND_CHECK(BgL_jz00_1177, BgL_l1810z00_2229))
{ /* Llib/mmap.scm 251 */
STRING_SET(BgL_rz00_1174, BgL_jz00_1177, BgL_arg1295z00_1180); }  else 
{ 
obj_t BgL_auxz00_2932;
BgL_auxz00_2932 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)11125)), BGl_string1959z00zz__mmapz00, BgL_rz00_1174, 
(int)(BgL_l1810z00_2229), 
(int)(BgL_jz00_1177)); 
FAILURE(BgL_auxz00_2932,BFALSE,BFALSE);} } } 
{ /* Llib/mmap.scm 252 */
long BgL_arg1296z00_1181;long BgL_arg1297z00_1182;
BgL_arg1296z00_1181 = 
(BgL_iz00_1176+
(long)(((long)1))); 
BgL_arg1297z00_1182 = 
(BgL_jz00_1177+((long)1)); 
{ 
long BgL_jz00_2942;long BgL_iz00_2941;
BgL_iz00_2941 = BgL_arg1296z00_1181; 
BgL_jz00_2942 = BgL_arg1297z00_1182; 
BgL_jz00_1177 = BgL_jz00_2942; 
BgL_iz00_1176 = BgL_iz00_2941; 
goto BgL_zc3z04anonymousza31292ze3z87_1178;} } } } }  else 
{ /* Llib/mmap.scm 241 */
obj_t BgL_aux1884z00_2303;
BgL_aux1884z00_2303 = 
BGl_errorz00zz__errorz00(BGl_symbol1956z00zz__mmapz00, BGl_string1960z00zz__mmapz00, 
make_belong(BgL_startz00_36)); 
if(
STRINGP(BgL_aux1884z00_2303))
{ /* Llib/mmap.scm 241 */
return BgL_aux1884z00_2303;}  else 
{ 
obj_t BgL_auxz00_2947;
BgL_auxz00_2947 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)10855)), BGl_string1957z00zz__mmapz00, BGl_string1928z00zz__mmapz00, BgL_aux1884z00_2303); 
FAILURE(BgL_auxz00_2947,BFALSE,BFALSE);} } }  else 
{ /* Llib/mmap.scm 238 */
obj_t BgL_arg1301z00_1187;
{ /* Llib/mmap.scm 238 */
obj_t BgL_arg1302z00_1188;
{ /* Llib/mmap.scm 238 */
long BgL_arg1303z00_1189;
{ /* Llib/mmap.scm 238 */
long BgL_res1713z00_1794;
BgL_res1713z00_1794 = 
BGL_MMAP_LENGTH(BgL_mmz00_35); 
BgL_arg1303z00_1189 = BgL_res1713z00_1794; } 
{ /* Ieee/number.scm 164 */

BgL_arg1302z00_1188 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(
make_belong(BgL_arg1303z00_1189), 
BINT(((long)10))); } } 
BgL_arg1301z00_1187 = 
string_append(BGl_string1961z00zz__mmapz00, BgL_arg1302z00_1188); } 
{ /* Llib/mmap.scm 236 */
obj_t BgL_aux1886z00_2305;
BgL_aux1886z00_2305 = 
BGl_errorz00zz__errorz00(BGl_symbol1956z00zz__mmapz00, BgL_arg1301z00_1187, 
make_belong(BgL_endz00_37)); 
if(
STRINGP(BgL_aux1886z00_2305))
{ /* Llib/mmap.scm 236 */
return BgL_aux1886z00_2305;}  else 
{ 
obj_t BgL_auxz00_2960;
BgL_auxz00_2960 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)10662)), BGl_string1957z00zz__mmapz00, BGl_string1928z00zz__mmapz00, BgL_aux1886z00_2305); 
FAILURE(BgL_auxz00_2960,BFALSE,BFALSE);} } } } } 

}



/* &mmap-substring */
obj_t BGl_z62mmapzd2substringzb0zz__mmapz00(obj_t BgL_envz00_2188, obj_t BgL_mmz00_2189, obj_t BgL_startz00_2190, obj_t BgL_endz00_2191)
{
{ /* Llib/mmap.scm 231 */
{ /* Llib/mmap.scm 233 */
long BgL_auxz00_2980;long BgL_auxz00_2971;obj_t BgL_auxz00_2964;
{ /* Llib/mmap.scm 233 */
obj_t BgL_tmpz00_2981;
if(
ELONGP(BgL_endz00_2191))
{ /* Llib/mmap.scm 233 */
BgL_tmpz00_2981 = BgL_endz00_2191
; }  else 
{ 
obj_t BgL_auxz00_2984;
BgL_auxz00_2984 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)10497)), BGl_string1962z00zz__mmapz00, BGl_string1942z00zz__mmapz00, BgL_endz00_2191); 
FAILURE(BgL_auxz00_2984,BFALSE,BFALSE);} 
BgL_auxz00_2980 = 
BELONG_TO_LONG(BgL_tmpz00_2981); } 
{ /* Llib/mmap.scm 233 */
obj_t BgL_tmpz00_2972;
if(
ELONGP(BgL_startz00_2190))
{ /* Llib/mmap.scm 233 */
BgL_tmpz00_2972 = BgL_startz00_2190
; }  else 
{ 
obj_t BgL_auxz00_2975;
BgL_auxz00_2975 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)10497)), BGl_string1962z00zz__mmapz00, BGl_string1942z00zz__mmapz00, BgL_startz00_2190); 
FAILURE(BgL_auxz00_2975,BFALSE,BFALSE);} 
BgL_auxz00_2971 = 
BELONG_TO_LONG(BgL_tmpz00_2972); } 
if(
BGL_MMAPP(BgL_mmz00_2189))
{ /* Llib/mmap.scm 233 */
BgL_auxz00_2964 = BgL_mmz00_2189
; }  else 
{ 
obj_t BgL_auxz00_2967;
BgL_auxz00_2967 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)10497)), BGl_string1962z00zz__mmapz00, BGl_string1935z00zz__mmapz00, BgL_mmz00_2189); 
FAILURE(BgL_auxz00_2967,BFALSE,BFALSE);} 
return 
BGl_mmapzd2substringzd2zz__mmapz00(BgL_auxz00_2964, BgL_auxz00_2971, BgL_auxz00_2980);} } 

}



/* mmap-substring-set! */
BGL_EXPORTED_DEF obj_t BGl_mmapzd2substringzd2setz12z12zz__mmapz00(obj_t BgL_mmz00_38, long BgL_oz00_39, obj_t BgL_sz00_40)
{
{ /* Llib/mmap.scm 257 */
{ /* Llib/mmap.scm 258 */
long BgL_lenz00_1194;
BgL_lenz00_1194 = 
STRING_LENGTH(BgL_sz00_40); 
if(
(BgL_oz00_39<((long)0)))
{ /* Llib/mmap.scm 260 */
return 
BGl_errorz00zz__errorz00(BGl_string1963z00zz__mmapz00, BGl_string1960z00zz__mmapz00, 
make_belong(BgL_oz00_39));}  else 
{ /* Llib/mmap.scm 262 */
bool_t BgL_test2114z00_2995;
{ /* Llib/mmap.scm 262 */
long BgL_arg1337z00_1226;
{ /* Llib/mmap.scm 262 */
long BgL_arg1338z00_1227;
{ /* Llib/mmap.scm 262 */
long BgL_res1716z00_1801;
BgL_res1716z00_1801 = 
BGL_MMAP_LENGTH(BgL_mmz00_38); 
BgL_arg1338z00_1227 = BgL_res1716z00_1801; } 
BgL_arg1337z00_1226 = 
(BgL_arg1338z00_1227+((long)1)); } 
BgL_test2114z00_2995 = 
BOUND_CHECK(BgL_oz00_39, BgL_arg1337z00_1226); } 
if(BgL_test2114z00_2995)
{ /* Llib/mmap.scm 268 */
bool_t BgL_test2115z00_2999;
{ /* Llib/mmap.scm 268 */
long BgL_arg1328z00_1217;long BgL_arg1329z00_1218;
{ /* Llib/mmap.scm 268 */
long BgL_arg1330z00_1219;
{ /* Llib/mmap.scm 268 */
long BgL_res1718z00_1806;
BgL_res1718z00_1806 = 
(long)(BgL_lenz00_1194); 
BgL_arg1330z00_1219 = BgL_res1718z00_1806; } 
BgL_arg1328z00_1217 = 
(BgL_oz00_39+BgL_arg1330z00_1219); } 
{ /* Llib/mmap.scm 269 */
long BgL_arg1331z00_1220;
{ /* Llib/mmap.scm 269 */
long BgL_res1720z00_1811;
BgL_res1720z00_1811 = 
BGL_MMAP_LENGTH(BgL_mmz00_38); 
BgL_arg1331z00_1220 = BgL_res1720z00_1811; } 
BgL_arg1329z00_1218 = 
(BgL_arg1331z00_1220+((long)1)); } 
BgL_test2115z00_2999 = 
BOUND_CHECK(BgL_arg1328z00_1217, BgL_arg1329z00_1218); } 
if(BgL_test2115z00_2999)
{ 
long BgL_iz00_1205;long BgL_jz00_1206;
BgL_iz00_1205 = ((long)0); 
BgL_jz00_1206 = BgL_oz00_39; 
BgL_zc3z04anonymousza31316ze3z87_1207:
if(
(BgL_iz00_1205==BgL_lenz00_1194))
{ /* Llib/mmap.scm 278 */
{ /* Llib/mmap.scm 280 */
long BgL_res1723z00_1820;
BGL_MMAP_WP_SET(BgL_mmz00_38, BgL_jz00_1206); BUNSPEC; 
BgL_res1723z00_1820 = BgL_jz00_1206; BgL_res1723z00_1820; } 
return BgL_mmz00_38;}  else 
{ /* Llib/mmap.scm 278 */
{ /* Llib/mmap.scm 283 */
unsigned char BgL_arg1318z00_1209;
{ /* Llib/mmap.scm 283 */
long BgL_l1814z00_2233;
BgL_l1814z00_2233 = 
STRING_LENGTH(BgL_sz00_40); 
if(
BOUND_CHECK(BgL_iz00_1205, BgL_l1814z00_2233))
{ /* Llib/mmap.scm 283 */
BgL_arg1318z00_1209 = 
STRING_REF(BgL_sz00_40, BgL_iz00_1205); }  else 
{ 
obj_t BgL_auxz00_3012;
BgL_auxz00_3012 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)12191)), BGl_string1964z00zz__mmapz00, BgL_sz00_40, 
(int)(BgL_l1814z00_2233), 
(int)(BgL_iz00_1205)); 
FAILURE(BgL_auxz00_3012,BFALSE,BFALSE);} } 
BGL_MMAP_SET(BgL_mmz00_38, BgL_jz00_1206, BgL_arg1318z00_1209); 
{ /* Llib/mmap.scm 202 */
long BgL_arg1258z00_1827;
BgL_arg1258z00_1827 = 
(BgL_jz00_1206+((long)1)); 
{ /* Llib/mmap.scm 202 */
long BgL_res1726z00_1833;
BGL_MMAP_WP_SET(BgL_mmz00_38, BgL_arg1258z00_1827); BUNSPEC; 
BgL_res1726z00_1833 = BgL_arg1258z00_1827; BgL_res1726z00_1833; } } } 
{ /* Llib/mmap.scm 284 */
long BgL_arg1319z00_1210;long BgL_arg1322z00_1211;
BgL_arg1319z00_1210 = 
(BgL_iz00_1205+((long)1)); 
BgL_arg1322z00_1211 = 
(BgL_jz00_1206+
(long)(((long)1))); 
{ 
long BgL_jz00_3025;long BgL_iz00_3024;
BgL_iz00_3024 = BgL_arg1319z00_1210; 
BgL_jz00_3025 = BgL_arg1322z00_1211; 
BgL_jz00_1206 = BgL_jz00_3025; 
BgL_iz00_1205 = BgL_iz00_3024; 
goto BgL_zc3z04anonymousza31316ze3z87_1207;} } } }  else 
{ /* Llib/mmap.scm 272 */
obj_t BgL_arg1324z00_1213;obj_t BgL_arg1325z00_1214;
{ /* Llib/mmap.scm 272 */
obj_t BgL_arg1326z00_1215;
{ /* Llib/mmap.scm 272 */
long BgL_arg1327z00_1216;
{ /* Llib/mmap.scm 272 */
long BgL_res1729z00_1840;
BgL_res1729z00_1840 = 
BGL_MMAP_LENGTH(BgL_mmz00_38); 
BgL_arg1327z00_1216 = BgL_res1729z00_1840; } 
BgL_arg1326z00_1215 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(
make_belong(BgL_arg1327z00_1216), 
BINT(((long)1))); } 
BgL_arg1324z00_1213 = 
string_append_3(BGl_string1948z00zz__mmapz00, BgL_arg1326z00_1215, BGl_string1949z00zz__mmapz00); } 
BgL_arg1325z00_1214 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(
make_belong(BgL_oz00_39), 
BINT(BgL_lenz00_1194)); 
return 
BGl_errorz00zz__errorz00(BGl_symbol1965z00zz__mmapz00, BgL_arg1324z00_1213, BgL_arg1325z00_1214);} }  else 
{ /* Llib/mmap.scm 265 */
obj_t BgL_arg1333z00_1221;
{ /* Llib/mmap.scm 265 */
obj_t BgL_arg1334z00_1222;
{ /* Llib/mmap.scm 265 */
long BgL_arg1335z00_1223;
{ /* Llib/mmap.scm 265 */
long BgL_res1730z00_1842;
BgL_res1730z00_1842 = 
BGL_MMAP_LENGTH(BgL_mmz00_38); 
BgL_arg1335z00_1223 = BgL_res1730z00_1842; } 
{ /* Ieee/number.scm 164 */

BgL_arg1334z00_1222 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(
make_belong(BgL_arg1335z00_1223), 
BINT(((long)10))); } } 
BgL_arg1333z00_1221 = 
string_append_3(BGl_string1948z00zz__mmapz00, BgL_arg1334z00_1222, BGl_string1967z00zz__mmapz00); } 
return 
BGl_errorz00zz__errorz00(BGl_symbol1968z00zz__mmapz00, BgL_arg1333z00_1221, 
make_belong(BgL_oz00_39));} } } } 

}



/* &mmap-substring-set! */
obj_t BGl_z62mmapzd2substringzd2setz12z70zz__mmapz00(obj_t BgL_envz00_2192, obj_t BgL_mmz00_2193, obj_t BgL_oz00_2194, obj_t BgL_sz00_2195)
{
{ /* Llib/mmap.scm 257 */
{ /* Llib/mmap.scm 258 */
obj_t BgL_auxz00_3058;long BgL_auxz00_3049;obj_t BgL_auxz00_3042;
if(
STRINGP(BgL_sz00_2195))
{ /* Llib/mmap.scm 258 */
BgL_auxz00_3058 = BgL_sz00_2195
; }  else 
{ 
obj_t BgL_auxz00_3061;
BgL_auxz00_3061 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)11493)), BGl_string1969z00zz__mmapz00, BGl_string1928z00zz__mmapz00, BgL_sz00_2195); 
FAILURE(BgL_auxz00_3061,BFALSE,BFALSE);} 
{ /* Llib/mmap.scm 258 */
obj_t BgL_tmpz00_3050;
if(
ELONGP(BgL_oz00_2194))
{ /* Llib/mmap.scm 258 */
BgL_tmpz00_3050 = BgL_oz00_2194
; }  else 
{ 
obj_t BgL_auxz00_3053;
BgL_auxz00_3053 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)11493)), BGl_string1969z00zz__mmapz00, BGl_string1942z00zz__mmapz00, BgL_oz00_2194); 
FAILURE(BgL_auxz00_3053,BFALSE,BFALSE);} 
BgL_auxz00_3049 = 
BELONG_TO_LONG(BgL_tmpz00_3050); } 
if(
BGL_MMAPP(BgL_mmz00_2193))
{ /* Llib/mmap.scm 258 */
BgL_auxz00_3042 = BgL_mmz00_2193
; }  else 
{ 
obj_t BgL_auxz00_3045;
BgL_auxz00_3045 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)11493)), BGl_string1969z00zz__mmapz00, BGl_string1935z00zz__mmapz00, BgL_mmz00_2193); 
FAILURE(BgL_auxz00_3045,BFALSE,BFALSE);} 
return 
BGl_mmapzd2substringzd2setz12z12zz__mmapz00(BgL_auxz00_3042, BgL_auxz00_3049, BgL_auxz00_3058);} } 

}



/* mmap-get-char */
BGL_EXPORTED_DEF unsigned char BGl_mmapzd2getzd2charz00zz__mmapz00(obj_t BgL_mmz00_41)
{
{ /* Llib/mmap.scm 289 */
{ /* Llib/mmap.scm 290 */
long BgL_arg1339z00_2366;
BgL_arg1339z00_2366 = 
BGL_MMAP_RP_GET(BgL_mmz00_41); 
{ /* Llib/mmap.scm 290 */
unsigned char BgL_res1736z00_2367;
{ /* Llib/mmap.scm 208 */
bool_t BgL_test2121z00_3067;
{ /* Llib/mmap.scm 208 */
long BgL_arg1274z00_2368;
{ /* Llib/mmap.scm 208 */
long BgL_res1731z00_2369;
BgL_res1731z00_2369 = 
BGL_MMAP_LENGTH(BgL_mmz00_41); 
BgL_arg1274z00_2368 = BgL_res1731z00_2369; } 
BgL_test2121z00_3067 = 
BOUND_CHECK(BgL_arg1339z00_2366, BgL_arg1274z00_2368); } 
if(BgL_test2121z00_3067)
{ /* Llib/mmap.scm 209 */
unsigned char BgL_res1734z00_2370;
{ /* Llib/mmap.scm 193 */
unsigned char BgL_cz00_2371;
BgL_cz00_2371 = 
BGL_MMAP_REF(BgL_mmz00_41, BgL_arg1339z00_2366); 
{ /* Llib/mmap.scm 194 */
long BgL_arg1256z00_2372;
BgL_arg1256z00_2372 = 
(BgL_arg1339z00_2366+((long)1)); 
{ /* Llib/mmap.scm 194 */
long BgL_res1733z00_2373;
BGL_MMAP_RP_SET(BgL_mmz00_41, BgL_arg1256z00_2372); BUNSPEC; 
BgL_res1733z00_2373 = BgL_arg1256z00_2372; BgL_res1733z00_2373; } } 
BgL_res1734z00_2370 = BgL_cz00_2371; } 
BgL_res1736z00_2367 = BgL_res1734z00_2370; }  else 
{ /* Llib/mmap.scm 212 */
obj_t BgL_arg1268z00_2374;
{ /* Llib/mmap.scm 212 */
obj_t BgL_arg1270z00_2375;
{ /* Llib/mmap.scm 212 */
obj_t BgL_arg1271z00_2376;
{ /* Llib/mmap.scm 212 */
long BgL_arg1273z00_2377;
{ /* Llib/mmap.scm 212 */
long BgL_res1735z00_2378;
BgL_res1735z00_2378 = 
BGL_MMAP_LENGTH(BgL_mmz00_41); 
BgL_arg1273z00_2377 = BgL_res1735z00_2378; } 
BgL_arg1271z00_2376 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(
make_belong(BgL_arg1273z00_2377), 
BINT(((long)1))); } 
{ /* Llib/mmap.scm 212 */

BgL_arg1270z00_2375 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg1271z00_2376, 
BINT(((long)10))); } } 
BgL_arg1268z00_2374 = 
string_append_3(BGl_string1948z00zz__mmapz00, BgL_arg1270z00_2375, BGl_string1949z00zz__mmapz00); } 
{ /* Llib/mmap.scm 210 */
obj_t BgL_tmpz00_3080;
{ /* Llib/mmap.scm 210 */
obj_t BgL_aux1900z00_2379;
BgL_aux1900z00_2379 = 
BGl_errorz00zz__errorz00(BGl_symbol1950z00zz__mmapz00, BgL_arg1268z00_2374, 
make_belong(BgL_arg1339z00_2366)); 
if(
CHARP(BgL_aux1900z00_2379))
{ /* Llib/mmap.scm 210 */
BgL_tmpz00_3080 = BgL_aux1900z00_2379
; }  else 
{ 
obj_t BgL_auxz00_3085;
BgL_auxz00_3085 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)9564)), BGl_string1970z00zz__mmapz00, BGl_string1947z00zz__mmapz00, BgL_aux1900z00_2379); 
FAILURE(BgL_auxz00_3085,BFALSE,BFALSE);} } 
BgL_res1736z00_2367 = 
CCHAR(BgL_tmpz00_3080); } } } 
return BgL_res1736z00_2367;} } } 

}



/* &mmap-get-char */
obj_t BGl_z62mmapzd2getzd2charz62zz__mmapz00(obj_t BgL_envz00_2196, obj_t BgL_mmz00_2197)
{
{ /* Llib/mmap.scm 289 */
{ /* Llib/mmap.scm 290 */
unsigned char BgL_tmpz00_3090;
{ /* Llib/mmap.scm 290 */
obj_t BgL_auxz00_3091;
if(
BGL_MMAPP(BgL_mmz00_2197))
{ /* Llib/mmap.scm 290 */
BgL_auxz00_3091 = BgL_mmz00_2197
; }  else 
{ 
obj_t BgL_auxz00_3094;
BgL_auxz00_3094 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)12534)), BGl_string1971z00zz__mmapz00, BGl_string1935z00zz__mmapz00, BgL_mmz00_2197); 
FAILURE(BgL_auxz00_3094,BFALSE,BFALSE);} 
BgL_tmpz00_3090 = 
BGl_mmapzd2getzd2charz00zz__mmapz00(BgL_auxz00_3091); } 
return 
BCHAR(BgL_tmpz00_3090);} } 

}



/* mmap-put-char! */
BGL_EXPORTED_DEF obj_t BGl_mmapzd2putzd2charz12z12zz__mmapz00(obj_t BgL_mmz00_42, unsigned char BgL_cz00_43)
{
{ /* Llib/mmap.scm 295 */
{ /* Llib/mmap.scm 296 */
long BgL_arg1340z00_2380;
BgL_arg1340z00_2380 = 
BGL_MMAP_WP_GET(BgL_mmz00_42); 
{ /* Llib/mmap.scm 220 */
bool_t BgL_test2124z00_3101;
{ /* Llib/mmap.scm 220 */
long BgL_arg1284z00_2381;
{ /* Llib/mmap.scm 220 */
long BgL_res1737z00_2382;
BgL_res1737z00_2382 = 
BGL_MMAP_LENGTH(BgL_mmz00_42); 
BgL_arg1284z00_2381 = BgL_res1737z00_2382; } 
BgL_test2124z00_3101 = 
BOUND_CHECK(BgL_arg1340z00_2380, BgL_arg1284z00_2381); } 
if(BgL_test2124z00_3101)
{ /* Llib/mmap.scm 220 */
BGL_MMAP_SET(BgL_mmz00_42, BgL_arg1340z00_2380, BgL_cz00_43); 
{ /* Llib/mmap.scm 202 */
long BgL_arg1258z00_2383;
BgL_arg1258z00_2383 = 
(BgL_arg1340z00_2380+((long)1)); 
{ /* Llib/mmap.scm 202 */
long BgL_res1739z00_2384;
BGL_MMAP_WP_SET(BgL_mmz00_42, BgL_arg1258z00_2383); BUNSPEC; 
BgL_res1739z00_2384 = BgL_arg1258z00_2383; 
return 
make_belong(BgL_res1739z00_2384);} } }  else 
{ /* Llib/mmap.scm 224 */
obj_t BgL_arg1277z00_2385;
{ /* Llib/mmap.scm 224 */
obj_t BgL_arg1280z00_2386;
{ /* Llib/mmap.scm 224 */
obj_t BgL_arg1281z00_2387;
{ /* Llib/mmap.scm 224 */
long BgL_arg1282z00_2388;
{ /* Llib/mmap.scm 224 */
long BgL_res1740z00_2389;
BgL_res1740z00_2389 = 
BGL_MMAP_LENGTH(BgL_mmz00_42); 
BgL_arg1282z00_2388 = BgL_res1740z00_2389; } 
BgL_arg1281z00_2387 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(
make_belong(BgL_arg1282z00_2388), 
BINT(((long)1))); } 
{ /* Llib/mmap.scm 224 */

BgL_arg1280z00_2386 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg1281z00_2387, 
BINT(((long)10))); } } 
BgL_arg1277z00_2385 = 
string_append_3(BGl_string1948z00zz__mmapz00, BgL_arg1280z00_2386, BGl_string1949z00zz__mmapz00); } 
return 
BGl_errorz00zz__errorz00(BGl_symbol1953z00zz__mmapz00, BgL_arg1277z00_2385, 
make_belong(BgL_arg1340z00_2380));} } } } 

}



/* &mmap-put-char! */
obj_t BGl_z62mmapzd2putzd2charz12z70zz__mmapz00(obj_t BgL_envz00_2198, obj_t BgL_mmz00_2199, obj_t BgL_cz00_2200)
{
{ /* Llib/mmap.scm 295 */
{ /* Llib/mmap.scm 296 */
unsigned char BgL_auxz00_3124;obj_t BgL_auxz00_3117;
{ /* Llib/mmap.scm 296 */
obj_t BgL_tmpz00_3125;
if(
CHARP(BgL_cz00_2200))
{ /* Llib/mmap.scm 296 */
BgL_tmpz00_3125 = BgL_cz00_2200
; }  else 
{ 
obj_t BgL_auxz00_3128;
BgL_auxz00_3128 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)12833)), BGl_string1972z00zz__mmapz00, BGl_string1947z00zz__mmapz00, BgL_cz00_2200); 
FAILURE(BgL_auxz00_3128,BFALSE,BFALSE);} 
BgL_auxz00_3124 = 
CCHAR(BgL_tmpz00_3125); } 
if(
BGL_MMAPP(BgL_mmz00_2199))
{ /* Llib/mmap.scm 296 */
BgL_auxz00_3117 = BgL_mmz00_2199
; }  else 
{ 
obj_t BgL_auxz00_3120;
BgL_auxz00_3120 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)12833)), BGl_string1972z00zz__mmapz00, BGl_string1935z00zz__mmapz00, BgL_mmz00_2199); 
FAILURE(BgL_auxz00_3120,BFALSE,BFALSE);} 
return 
BGl_mmapzd2putzd2charz12z12zz__mmapz00(BgL_auxz00_3117, BgL_auxz00_3124);} } 

}



/* mmap-get-string */
BGL_EXPORTED_DEF obj_t BGl_mmapzd2getzd2stringz00zz__mmapz00(obj_t BgL_mmz00_44, long BgL_lenz00_45)
{
{ /* Llib/mmap.scm 301 */
{ /* Llib/mmap.scm 302 */
long BgL_arg1341z00_2390;long BgL_arg1342z00_2391;
BgL_arg1341z00_2390 = 
BGL_MMAP_RP_GET(BgL_mmz00_44); 
{ /* Llib/mmap.scm 302 */
long BgL_arg1343z00_2392;
BgL_arg1343z00_2392 = 
BGL_MMAP_RP_GET(BgL_mmz00_44); 
BgL_arg1342z00_2391 = 
(BgL_arg1343z00_2392+BgL_lenz00_45); } 
return 
BGl_mmapzd2substringzd2zz__mmapz00(BgL_mmz00_44, BgL_arg1341z00_2390, BgL_arg1342z00_2391);} } 

}



/* &mmap-get-string */
obj_t BGl_z62mmapzd2getzd2stringz62zz__mmapz00(obj_t BgL_envz00_2201, obj_t BgL_mmz00_2202, obj_t BgL_lenz00_2203)
{
{ /* Llib/mmap.scm 301 */
{ /* Llib/mmap.scm 302 */
long BgL_auxz00_3145;obj_t BgL_auxz00_3138;
{ /* Llib/mmap.scm 302 */
obj_t BgL_tmpz00_3146;
if(
ELONGP(BgL_lenz00_2203))
{ /* Llib/mmap.scm 302 */
BgL_tmpz00_3146 = BgL_lenz00_2203
; }  else 
{ 
obj_t BgL_auxz00_3149;
BgL_auxz00_3149 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)13142)), BGl_string1973z00zz__mmapz00, BGl_string1942z00zz__mmapz00, BgL_lenz00_2203); 
FAILURE(BgL_auxz00_3149,BFALSE,BFALSE);} 
BgL_auxz00_3145 = 
BELONG_TO_LONG(BgL_tmpz00_3146); } 
if(
BGL_MMAPP(BgL_mmz00_2202))
{ /* Llib/mmap.scm 302 */
BgL_auxz00_3138 = BgL_mmz00_2202
; }  else 
{ 
obj_t BgL_auxz00_3141;
BgL_auxz00_3141 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)13142)), BGl_string1973z00zz__mmapz00, BGl_string1935z00zz__mmapz00, BgL_mmz00_2202); 
FAILURE(BgL_auxz00_3141,BFALSE,BFALSE);} 
return 
BGl_mmapzd2getzd2stringz00zz__mmapz00(BgL_auxz00_3138, BgL_auxz00_3145);} } 

}



/* mmap-put-string! */
BGL_EXPORTED_DEF obj_t BGl_mmapzd2putzd2stringz12z12zz__mmapz00(obj_t BgL_mmz00_46, obj_t BgL_sz00_47)
{
{ /* Llib/mmap.scm 307 */
{ /* Llib/mmap.scm 308 */
long BgL_arg1344z00_2393;
BgL_arg1344z00_2393 = 
BGL_MMAP_WP_GET(BgL_mmz00_46); 
return 
BGl_mmapzd2substringzd2setz12z12zz__mmapz00(BgL_mmz00_46, BgL_arg1344z00_2393, BgL_sz00_47);} } 

}



/* &mmap-put-string! */
obj_t BGl_z62mmapzd2putzd2stringz12z70zz__mmapz00(obj_t BgL_envz00_2204, obj_t BgL_mmz00_2205, obj_t BgL_sz00_2206)
{
{ /* Llib/mmap.scm 307 */
{ /* Llib/mmap.scm 308 */
obj_t BgL_auxz00_3164;obj_t BgL_auxz00_3157;
if(
STRINGP(BgL_sz00_2206))
{ /* Llib/mmap.scm 308 */
BgL_auxz00_3164 = BgL_sz00_2206
; }  else 
{ 
obj_t BgL_auxz00_3167;
BgL_auxz00_3167 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)13480)), BGl_string1974z00zz__mmapz00, BGl_string1928z00zz__mmapz00, BgL_sz00_2206); 
FAILURE(BgL_auxz00_3167,BFALSE,BFALSE);} 
if(
BGL_MMAPP(BgL_mmz00_2205))
{ /* Llib/mmap.scm 308 */
BgL_auxz00_3157 = BgL_mmz00_2205
; }  else 
{ 
obj_t BgL_auxz00_3160;
BgL_auxz00_3160 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1916z00zz__mmapz00, 
BINT(((long)13480)), BGl_string1974z00zz__mmapz00, BGl_string1935z00zz__mmapz00, BgL_mmz00_2205); 
FAILURE(BgL_auxz00_3160,BFALSE,BFALSE);} 
return 
BGl_mmapzd2putzd2stringz12z12zz__mmapz00(BgL_auxz00_3157, BgL_auxz00_3164);} } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__mmapz00()
{
{ /* Llib/mmap.scm 19 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__mmapz00()
{
{ /* Llib/mmap.scm 19 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__mmapz00()
{
{ /* Llib/mmap.scm 19 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__mmapz00()
{
{ /* Llib/mmap.scm 19 */
return 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string1975z00zz__mmapz00));} 

}

#ifdef __cplusplus
}
#endif
