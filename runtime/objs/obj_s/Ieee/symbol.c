/*===========================================================================*/
/*   (Ieee/symbol.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Ieee/symbol.scm -indent -o objs/obj_s/Ieee/symbol.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3symbolzd2cize3zz__r4_symbols_6_4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62rempropz12z70zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_keywordzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__r4_symbols_6_4z00 = BUNSPEC;
static obj_t BGl_symbol1771z00zz__r4_symbols_6_4z00 = BUNSPEC;
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_keywordzf3zf3zz__r4_symbols_6_4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL obj_t BGl_keywordzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl_z62keywordzd2ze3stringz53zz__r4_symbols_6_4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl_toplevelzd2initzd2zz__r4_symbols_6_4z00();
static obj_t BGl_z62symbolzd2ze3keywordz53zz__r4_symbols_6_4z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_symbolzf3zf3zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl_z62symbolzd2plistzb0zz__r4_symbols_6_4z00(obj_t, obj_t);
static obj_t BGl_z62symbolzf3z91zz__r4_symbols_6_4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl_z62stringzd2ze3keywordz53zz__r4_symbols_6_4z00(obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__r4_symbols_6_4z00();
static obj_t BGl_z62putpropz12z70zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_genericzd2initzd2zz__r4_symbols_6_4z00();
extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_z62symbolzd2ze3stringz53zz__r4_symbols_6_4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_symbolzd2plistzd2zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__r4_symbols_6_4z00();
static obj_t BGl_z62keywordzd2ze3stringz12z41zz__r4_symbols_6_4z00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_symbols_6_4z00();
static obj_t BGl_objectzd2initzd2zz__r4_symbols_6_4z00();
extern obj_t string_to_keyword(char *);
static obj_t BGl_symbolzd2appendze70z35zz__r4_symbols_6_4z00(obj_t);
extern obj_t bgl_gensym(obj_t);
BGL_EXPORTED_DECL obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
static obj_t BGl_z62getpropz62zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62symbolzd2appendzb0zz__r4_symbols_6_4z00(obj_t, obj_t);
static obj_t BGl_z62keywordzf3z91zz__r4_symbols_6_4z00(obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
static long BGl_za2gensymzd2counterza2zd2zz__r4_symbols_6_4z00;
BGL_EXPORTED_DECL obj_t BGl_symbolzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_rempropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t);
static obj_t BGl_z62symbolzd2ze3stringz12z41zz__r4_symbols_6_4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl_methodzd2initzd2zz__r4_symbols_6_4z00();
BGL_EXPORTED_DECL obj_t BGl_keywordzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl_z62keywordzd2ze3symbolz53zz__r4_symbols_6_4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_symbolzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl_z62stringzd2ze3symbolzd2ciz81zz__r4_symbols_6_4z00(obj_t, obj_t);
static obj_t BGl__gensymz00zz__r4_symbols_6_4z00(obj_t, obj_t);
static obj_t BGl_z62stringzd2ze3symbolz53zz__r4_symbols_6_4z00(obj_t, obj_t);
extern obj_t string_append(obj_t, obj_t);
extern obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_symbolzd2appendzd2envz00zz__r4_symbols_6_4z00, BgL_bgl_za762symbolza7d2appe1786z00, va_generic_entry, BGl_z62symbolzd2appendzb0zz__r4_symbols_6_4z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ze3keywordzd2envze3zz__r4_symbols_6_4z00, BgL_bgl_za762stringza7d2za7e3k1787za7, BGl_z62stringzd2ze3keywordz53zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_rempropz12zd2envzc0zz__r4_symbols_6_4z00, BgL_bgl_za762rempropza712za7701788za7, BGl_z62rempropz12z70zz__r4_symbols_6_4z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_symbolzd2plistzd2envz00zz__r4_symbols_6_4z00, BgL_bgl_za762symbolza7d2plis1789z00, BGl_z62symbolzd2plistzb0zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_keywordzf3zd2envz21zz__r4_symbols_6_4z00, BgL_bgl_za762keywordza7f3za7911790za7, BGl_z62keywordzf3z91zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_keywordzd2ze3symbolzd2envze3zz__r4_symbols_6_4z00, BgL_bgl_za762keywordza7d2za7e31791za7, BGl_z62keywordzd2ze3symbolz53zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ze3symbolzd2cizd2envz31zz__r4_symbols_6_4z00, BgL_bgl_za762stringza7d2za7e3s1792za7, BGl_z62stringzd2ze3symbolzd2ciz81zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ze3symbolzd2envze3zz__r4_symbols_6_4z00, BgL_bgl_za762stringza7d2za7e3s1793za7, BGl_z62stringzd2ze3symbolz53zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_gensymzd2envzd2zz__r4_symbols_6_4z00, BgL_bgl__gensymza700za7za7__r41794za7, opt_generic_entry, BGl__gensymz00zz__r4_symbols_6_4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_symbolzf3zd2envz21zz__r4_symbols_6_4z00, BgL_bgl_za762symbolza7f3za791za71795z00, BGl_z62symbolzf3z91zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_putpropz12zd2envzc0zz__r4_symbols_6_4z00, BgL_bgl_za762putpropza712za7701796za7, BGl_z62putpropz12z70zz__r4_symbols_6_4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_symbolzd2ze3stringzd2envze3zz__r4_symbols_6_4z00, BgL_bgl_za762symbolza7d2za7e3s1797za7, BGl_z62symbolzd2ze3stringz53zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_symbolzd2ze3keywordzd2envze3zz__r4_symbols_6_4z00, BgL_bgl_za762symbolza7d2za7e3k1798za7, BGl_z62symbolzd2ze3keywordz53zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getpropzd2envzd2zz__r4_symbols_6_4z00, BgL_bgl_za762getpropza762za7za7_1799z00, BGl_z62getpropz62zz__r4_symbols_6_4z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_symbolzd2ze3stringz12zd2envzf1zz__r4_symbols_6_4z00, BgL_bgl_za762symbolza7d2za7e3s1800za7, BGl_z62symbolzd2ze3stringz12z41zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1761z00zz__r4_symbols_6_4z00, BgL_bgl_string1761za700za7za7_1801za7, "/tmp/4.4a/runtime/Ieee/symbol.scm", 33 );
DEFINE_STRING( BGl_string1762z00zz__r4_symbols_6_4z00, BgL_bgl_string1762za700za7za7_1802za7, "&symbol->string", 15 );
DEFINE_STRING( BGl_string1763z00zz__r4_symbols_6_4z00, BgL_bgl_string1763za700za7za7_1803za7, "symbol", 6 );
DEFINE_STRING( BGl_string1764z00zz__r4_symbols_6_4z00, BgL_bgl_string1764za700za7za7_1804za7, "&symbol->string!", 16 );
DEFINE_STRING( BGl_string1765z00zz__r4_symbols_6_4z00, BgL_bgl_string1765za700za7za7_1805za7, "&string->symbol", 15 );
DEFINE_STRING( BGl_string1766z00zz__r4_symbols_6_4z00, BgL_bgl_string1766za700za7za7_1806za7, "bstring", 7 );
DEFINE_STRING( BGl_string1767z00zz__r4_symbols_6_4z00, BgL_bgl_string1767za700za7za7_1807za7, "&string->symbol-ci", 18 );
DEFINE_STRING( BGl_string1768z00zz__r4_symbols_6_4z00, BgL_bgl_string1768za700za7za7_1808za7, "", 0 );
DEFINE_STRING( BGl_string1769z00zz__r4_symbols_6_4z00, BgL_bgl_string1769za700za7za7_1809za7, "symbol-append~0", 15 );
DEFINE_STRING( BGl_string1770z00zz__r4_symbols_6_4z00, BgL_bgl_string1770za700za7za7_1810za7, "pair", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_keywordzd2ze3stringzd2envze3zz__r4_symbols_6_4z00, BgL_bgl_za762keywordza7d2za7e31811za7, BGl_z62keywordzd2ze3stringz53zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1772z00zz__r4_symbols_6_4z00, BgL_bgl_string1772za700za7za7_1812za7, "gensym", 6 );
DEFINE_STRING( BGl_string1773z00zz__r4_symbols_6_4z00, BgL_bgl_string1773za700za7za7_1813za7, "wrong number of arguments: [0..1] expected, provided", 52 );
DEFINE_STRING( BGl_string1774z00zz__r4_symbols_6_4z00, BgL_bgl_string1774za700za7za7_1814za7, "Illegal argument", 16 );
DEFINE_STRING( BGl_string1775z00zz__r4_symbols_6_4z00, BgL_bgl_string1775za700za7za7_1815za7, "symbol-plist", 12 );
DEFINE_STRING( BGl_string1776z00zz__r4_symbols_6_4z00, BgL_bgl_string1776za700za7za7_1816za7, "argument is neither a symbol nor a keyword", 42 );
DEFINE_STRING( BGl_string1777z00zz__r4_symbols_6_4z00, BgL_bgl_string1777za700za7za7_1817za7, "loop", 4 );
DEFINE_STRING( BGl_string1778z00zz__r4_symbols_6_4z00, BgL_bgl_string1778za700za7za7_1818za7, "getprop", 7 );
DEFINE_STRING( BGl_string1779z00zz__r4_symbols_6_4z00, BgL_bgl_string1779za700za7za7_1819za7, "&keyword->string", 16 );
DEFINE_STRING( BGl_string1780z00zz__r4_symbols_6_4z00, BgL_bgl_string1780za700za7za7_1820za7, "keyword", 7 );
DEFINE_STRING( BGl_string1781z00zz__r4_symbols_6_4z00, BgL_bgl_string1781za700za7za7_1821za7, "&keyword->string!", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_keywordzd2ze3stringz12zd2envzf1zz__r4_symbols_6_4z00, BgL_bgl_za762keywordza7d2za7e31822za7, BGl_z62keywordzd2ze3stringz12z41zz__r4_symbols_6_4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1782z00zz__r4_symbols_6_4z00, BgL_bgl_string1782za700za7za7_1823za7, "&string->keyword", 16 );
DEFINE_STRING( BGl_string1783z00zz__r4_symbols_6_4z00, BgL_bgl_string1783za700za7za7_1824za7, "&symbol->keyword", 16 );
DEFINE_STRING( BGl_string1784z00zz__r4_symbols_6_4z00, BgL_bgl_string1784za700za7za7_1825za7, "&keyword->symbol", 16 );
DEFINE_STRING( BGl_string1785z00zz__r4_symbols_6_4z00, BgL_bgl_string1785za700za7za7_1826za7, "__r4_symbols_6_4", 16 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__r4_symbols_6_4z00) );
ADD_ROOT( (void *)(&BGl_symbol1771z00zz__r4_symbols_6_4z00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long BgL_checksumz00_1979, char * BgL_fromz00_1980)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_symbols_6_4z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_symbols_6_4z00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__r4_symbols_6_4z00(); 
BGl_cnstzd2initzd2zz__r4_symbols_6_4z00(); 
BGl_importedzd2moduleszd2initz00zz__r4_symbols_6_4z00(); 
return 
BGl_toplevelzd2initzd2zz__r4_symbols_6_4z00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r4_symbols_6_4z00()
{
{ /* Ieee/symbol.scm 14 */
return ( 
BGl_symbol1771z00zz__r4_symbols_6_4z00 = 
bstring_to_symbol(BGl_string1772z00zz__r4_symbols_6_4z00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__r4_symbols_6_4z00()
{
{ /* Ieee/symbol.scm 14 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__r4_symbols_6_4z00()
{
{ /* Ieee/symbol.scm 14 */
return ( 
BGl_za2gensymzd2counterza2zd2zz__r4_symbols_6_4z00 = ((long)999), BUNSPEC) ;} 

}



/* symbol? */
BGL_EXPORTED_DEF bool_t BGl_symbolzf3zf3zz__r4_symbols_6_4z00(obj_t BgL_objz00_3)
{
{ /* Ieee/symbol.scm 131 */
return 
SYMBOLP(BgL_objz00_3);} 

}



/* &symbol? */
obj_t BGl_z62symbolzf3z91zz__r4_symbols_6_4z00(obj_t BgL_envz00_1871, obj_t BgL_objz00_1872)
{
{ /* Ieee/symbol.scm 131 */
return 
BBOOL(
BGl_symbolzf3zf3zz__r4_symbols_6_4z00(BgL_objz00_1872));} 

}



/* symbol->string */
BGL_EXPORTED_DEF obj_t BGl_symbolzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t BgL_symbolz00_4)
{
{ /* Ieee/symbol.scm 137 */
{ /* Ieee/symbol.scm 138 */
obj_t BgL_arg1167z00_1977;
BgL_arg1167z00_1977 = 
SYMBOL_TO_STRING(BgL_symbolz00_4); 
return 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1167z00_1977);} } 

}



/* &symbol->string */
obj_t BGl_z62symbolzd2ze3stringz53zz__r4_symbols_6_4z00(obj_t BgL_envz00_1873, obj_t BgL_symbolz00_1874)
{
{ /* Ieee/symbol.scm 137 */
{ /* Ieee/symbol.scm 138 */
obj_t BgL_auxz00_1995;
if(
SYMBOLP(BgL_symbolz00_1874))
{ /* Ieee/symbol.scm 138 */
BgL_auxz00_1995 = BgL_symbolz00_1874
; }  else 
{ 
obj_t BgL_auxz00_1998;
BgL_auxz00_1998 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)5685)), BGl_string1762z00zz__r4_symbols_6_4z00, BGl_string1763z00zz__r4_symbols_6_4z00, BgL_symbolz00_1874); 
FAILURE(BgL_auxz00_1998,BFALSE,BFALSE);} 
return 
BGl_symbolzd2ze3stringz31zz__r4_symbols_6_4z00(BgL_auxz00_1995);} } 

}



/* symbol->string! */
BGL_EXPORTED_DEF obj_t BGl_symbolzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t BgL_symbolz00_5)
{
{ /* Ieee/symbol.scm 143 */
return 
SYMBOL_TO_STRING(BgL_symbolz00_5);} 

}



/* &symbol->string! */
obj_t BGl_z62symbolzd2ze3stringz12z41zz__r4_symbols_6_4z00(obj_t BgL_envz00_1875, obj_t BgL_symbolz00_1876)
{
{ /* Ieee/symbol.scm 143 */
{ /* Ieee/symbol.scm 144 */
obj_t BgL_auxz00_2004;
if(
SYMBOLP(BgL_symbolz00_1876))
{ /* Ieee/symbol.scm 144 */
BgL_auxz00_2004 = BgL_symbolz00_1876
; }  else 
{ 
obj_t BgL_auxz00_2007;
BgL_auxz00_2007 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)5979)), BGl_string1764z00zz__r4_symbols_6_4z00, BGl_string1763z00zz__r4_symbols_6_4z00, BgL_symbolz00_1876); 
FAILURE(BgL_auxz00_2007,BFALSE,BFALSE);} 
return 
BGl_symbolzd2ze3stringz12z23zz__r4_symbols_6_4z00(BgL_auxz00_2004);} } 

}



/* string->symbol */
BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t BgL_stringz00_6)
{
{ /* Ieee/symbol.scm 149 */
return 
bstring_to_symbol(BgL_stringz00_6);} 

}



/* &string->symbol */
obj_t BGl_z62stringzd2ze3symbolz53zz__r4_symbols_6_4z00(obj_t BgL_envz00_1877, obj_t BgL_stringz00_1878)
{
{ /* Ieee/symbol.scm 149 */
{ /* Ieee/symbol.scm 150 */
obj_t BgL_auxz00_2013;
if(
STRINGP(BgL_stringz00_1878))
{ /* Ieee/symbol.scm 150 */
BgL_auxz00_2013 = BgL_stringz00_1878
; }  else 
{ 
obj_t BgL_auxz00_2016;
BgL_auxz00_2016 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)6271)), BGl_string1765z00zz__r4_symbols_6_4z00, BGl_string1766z00zz__r4_symbols_6_4z00, BgL_stringz00_1878); 
FAILURE(BgL_auxz00_2016,BFALSE,BFALSE);} 
return 
BGl_stringzd2ze3symbolz31zz__r4_symbols_6_4z00(BgL_auxz00_2013);} } 

}



/* string->symbol-ci */
BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3symbolzd2cize3zz__r4_symbols_6_4z00(obj_t BgL_stringz00_7)
{
{ /* Ieee/symbol.scm 155 */
return 
bstring_to_symbol(
BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(BgL_stringz00_7));} 

}



/* &string->symbol-ci */
obj_t BGl_z62stringzd2ze3symbolzd2ciz81zz__r4_symbols_6_4z00(obj_t BgL_envz00_1879, obj_t BgL_stringz00_1880)
{
{ /* Ieee/symbol.scm 155 */
{ /* Ieee/symbol.scm 156 */
obj_t BgL_auxz00_2023;
if(
STRINGP(BgL_stringz00_1880))
{ /* Ieee/symbol.scm 156 */
BgL_auxz00_2023 = BgL_stringz00_1880
; }  else 
{ 
obj_t BgL_auxz00_2026;
BgL_auxz00_2026 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)6579)), BGl_string1767z00zz__r4_symbols_6_4z00, BGl_string1766z00zz__r4_symbols_6_4z00, BgL_stringz00_1880); 
FAILURE(BgL_auxz00_2026,BFALSE,BFALSE);} 
return 
BGl_stringzd2ze3symbolzd2cize3zz__r4_symbols_6_4z00(BgL_auxz00_2023);} } 

}



/* symbol-append */
BGL_EXPORTED_DEF obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t BgL_listz00_8)
{
{ /* Ieee/symbol.scm 161 */
{ /* Ieee/symbol.scm 163 */
obj_t BgL_arg1170z00_1042;
if(
NULLP(BgL_listz00_8))
{ /* Ieee/symbol.scm 163 */
BgL_arg1170z00_1042 = BGl_string1768z00zz__r4_symbols_6_4z00; }  else 
{ /* Ieee/symbol.scm 163 */
BgL_arg1170z00_1042 = 
BGl_symbolzd2appendze70z35zz__r4_symbols_6_4z00(BgL_listz00_8); } 
return 
bstring_to_symbol(BgL_arg1170z00_1042);} } 

}



/* symbol-append~0 */
obj_t BGl_symbolzd2appendze70z35zz__r4_symbols_6_4z00(obj_t BgL_listz00_1045)
{
{ /* Ieee/symbol.scm 165 */
{ /* Ieee/symbol.scm 166 */
bool_t BgL_test1833z00_2035;
{ /* Ieee/symbol.scm 166 */
obj_t BgL_tmpz00_2036;
{ /* Ieee/symbol.scm 166 */
obj_t BgL_pairz00_1518;
if(
PAIRP(BgL_listz00_1045))
{ /* Ieee/symbol.scm 166 */
BgL_pairz00_1518 = BgL_listz00_1045; }  else 
{ 
obj_t BgL_auxz00_2039;
BgL_auxz00_2039 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)6956)), BGl_string1769z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_listz00_1045); 
FAILURE(BgL_auxz00_2039,BFALSE,BFALSE);} 
BgL_tmpz00_2036 = 
CDR(BgL_pairz00_1518); } 
BgL_test1833z00_2035 = 
NULLP(BgL_tmpz00_2036); } 
if(BgL_test1833z00_2035)
{ /* Ieee/symbol.scm 167 */
obj_t BgL_arg1176z00_1049;
{ /* Ieee/symbol.scm 167 */
obj_t BgL_pairz00_1520;
if(
PAIRP(BgL_listz00_1045))
{ /* Ieee/symbol.scm 167 */
BgL_pairz00_1520 = BgL_listz00_1045; }  else 
{ 
obj_t BgL_auxz00_2047;
BgL_auxz00_2047 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)6992)), BGl_string1769z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_listz00_1045); 
FAILURE(BgL_auxz00_2047,BFALSE,BFALSE);} 
BgL_arg1176z00_1049 = 
CAR(BgL_pairz00_1520); } 
{ /* Ieee/symbol.scm 167 */
obj_t BgL_res1609z00_1523;
{ /* Ieee/symbol.scm 167 */
obj_t BgL_symbolz00_1521;
if(
SYMBOLP(BgL_arg1176z00_1049))
{ /* Ieee/symbol.scm 167 */
BgL_symbolz00_1521 = BgL_arg1176z00_1049; }  else 
{ 
obj_t BgL_auxz00_2054;
BgL_auxz00_2054 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)6996)), BGl_string1769z00zz__r4_symbols_6_4z00, BGl_string1763z00zz__r4_symbols_6_4z00, BgL_arg1176z00_1049); 
FAILURE(BgL_auxz00_2054,BFALSE,BFALSE);} 
{ /* Ieee/symbol.scm 138 */
obj_t BgL_arg1167z00_1522;
BgL_arg1167z00_1522 = 
SYMBOL_TO_STRING(BgL_symbolz00_1521); 
BgL_res1609z00_1523 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1167z00_1522); } } 
return BgL_res1609z00_1523;} }  else 
{ /* Ieee/symbol.scm 168 */
obj_t BgL_arg1177z00_1050;obj_t BgL_arg1178z00_1051;
{ /* Ieee/symbol.scm 168 */
obj_t BgL_arg1179z00_1052;
{ /* Ieee/symbol.scm 168 */
obj_t BgL_pairz00_1524;
if(
PAIRP(BgL_listz00_1045))
{ /* Ieee/symbol.scm 168 */
BgL_pairz00_1524 = BgL_listz00_1045; }  else 
{ 
obj_t BgL_auxz00_2062;
BgL_auxz00_2062 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)7044)), BGl_string1769z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_listz00_1045); 
FAILURE(BgL_auxz00_2062,BFALSE,BFALSE);} 
BgL_arg1179z00_1052 = 
CAR(BgL_pairz00_1524); } 
{ /* Ieee/symbol.scm 168 */
obj_t BgL_res1610z00_1527;
{ /* Ieee/symbol.scm 168 */
obj_t BgL_symbolz00_1525;
if(
SYMBOLP(BgL_arg1179z00_1052))
{ /* Ieee/symbol.scm 168 */
BgL_symbolz00_1525 = BgL_arg1179z00_1052; }  else 
{ 
obj_t BgL_auxz00_2069;
BgL_auxz00_2069 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)7048)), BGl_string1769z00zz__r4_symbols_6_4z00, BGl_string1763z00zz__r4_symbols_6_4z00, BgL_arg1179z00_1052); 
FAILURE(BgL_auxz00_2069,BFALSE,BFALSE);} 
{ /* Ieee/symbol.scm 138 */
obj_t BgL_arg1167z00_1526;
BgL_arg1167z00_1526 = 
SYMBOL_TO_STRING(BgL_symbolz00_1525); 
BgL_res1610z00_1527 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1167z00_1526); } } 
BgL_arg1177z00_1050 = BgL_res1610z00_1527; } } 
{ /* Ieee/symbol.scm 169 */
obj_t BgL_arg1186z00_1053;
{ /* Ieee/symbol.scm 169 */
obj_t BgL_pairz00_1528;
if(
PAIRP(BgL_listz00_1045))
{ /* Ieee/symbol.scm 169 */
BgL_pairz00_1528 = BgL_listz00_1045; }  else 
{ 
obj_t BgL_auxz00_2077;
BgL_auxz00_2077 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)7081)), BGl_string1769z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_listz00_1045); 
FAILURE(BgL_auxz00_2077,BFALSE,BFALSE);} 
BgL_arg1186z00_1053 = 
CDR(BgL_pairz00_1528); } 
BgL_arg1178z00_1051 = 
BGl_symbolzd2appendze70z35zz__r4_symbols_6_4z00(BgL_arg1186z00_1053); } 
return 
string_append(BgL_arg1177z00_1050, BgL_arg1178z00_1051);} } } 

}



/* &symbol-append */
obj_t BGl_z62symbolzd2appendzb0zz__r4_symbols_6_4z00(obj_t BgL_envz00_1881, obj_t BgL_listz00_1882)
{
{ /* Ieee/symbol.scm 161 */
return 
BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_listz00_1882);} 

}



/* _gensym */
obj_t BGl__gensymz00zz__r4_symbols_6_4z00(obj_t BgL_env1087z00_11, obj_t BgL_opt1086z00_10)
{
{ /* Ieee/symbol.scm 179 */
{ /* Ieee/symbol.scm 179 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1086z00_10)) { case ((long)0) : 

{ /* Ieee/symbol.scm 179 */

return 
BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);} break;case ((long)1) : 

{ /* Ieee/symbol.scm 179 */
obj_t BgL_argz00_1060;
BgL_argz00_1060 = 
VECTOR_REF(BgL_opt1086z00_10,((long)0)); 
{ /* Ieee/symbol.scm 179 */

return 
BGl_gensymz00zz__r4_symbols_6_4z00(BgL_argz00_1060);} } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol1771z00zz__r4_symbols_6_4z00, BGl_string1773z00zz__r4_symbols_6_4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1086z00_10)));} } } } 

}



/* gensym */
BGL_EXPORTED_DEF obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t BgL_argz00_9)
{
{ /* Ieee/symbol.scm 179 */
{ /* Ieee/symbol.scm 182 */
obj_t BgL_argz00_1062;
if(
CBOOL(BgL_argz00_9))
{ /* Ieee/symbol.scm 183 */
if(
SYMBOLP(BgL_argz00_9))
{ /* Ieee/symbol.scm 184 */
obj_t BgL_res1613z00_1534;
{ /* Ieee/symbol.scm 138 */
obj_t BgL_arg1167z00_1533;
BgL_arg1167z00_1533 = 
SYMBOL_TO_STRING(BgL_argz00_9); 
BgL_res1613z00_1534 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1167z00_1533); } 
BgL_argz00_1062 = BgL_res1613z00_1534; }  else 
{ /* Ieee/symbol.scm 184 */
if(
STRINGP(BgL_argz00_9))
{ /* Ieee/symbol.scm 185 */
BgL_argz00_1062 = BgL_argz00_9; }  else 
{ /* Ieee/symbol.scm 185 */
BgL_argz00_1062 = 
BGl_errorz00zz__errorz00(BGl_string1772z00zz__r4_symbols_6_4z00, BGl_string1774z00zz__r4_symbols_6_4z00, BgL_argz00_9); } } }  else 
{ /* Ieee/symbol.scm 183 */
BgL_argz00_1062 = BgL_argz00_9; } 
return 
bgl_gensym(BgL_argz00_1062);} } 

}



/* symbol-plist */
BGL_EXPORTED_DEF obj_t BGl_symbolzd2plistzd2zz__r4_symbols_6_4z00(obj_t BgL_symbolz00_12)
{
{ /* Ieee/symbol.scm 205 */
if(
SYMBOLP(BgL_symbolz00_12))
{ /* Ieee/symbol.scm 207 */
return 
GET_SYMBOL_PLIST(BgL_symbolz00_12);}  else 
{ /* Ieee/symbol.scm 207 */
if(
KEYWORDP(BgL_symbolz00_12))
{ /* Ieee/symbol.scm 209 */
return 
GET_KEYWORD_PLIST(BgL_symbolz00_12);}  else 
{ /* Ieee/symbol.scm 209 */
return 
BGl_errorz00zz__errorz00(BGl_string1775z00zz__r4_symbols_6_4z00, BGl_string1776z00zz__r4_symbols_6_4z00, BgL_symbolz00_12);} } } 

}



/* &symbol-plist */
obj_t BGl_z62symbolzd2plistzb0zz__r4_symbols_6_4z00(obj_t BgL_envz00_1883, obj_t BgL_symbolz00_1884)
{
{ /* Ieee/symbol.scm 205 */
return 
BGl_symbolzd2plistzd2zz__r4_symbols_6_4z00(BgL_symbolz00_1884);} 

}



/* getprop */
BGL_EXPORTED_DEF obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t BgL_symbolz00_13, obj_t BgL_keyz00_14)
{
{ /* Ieee/symbol.scm 219 */
{ /* Ieee/symbol.scm 220 */
bool_t BgL_test1845z00_2111;
if(
SYMBOLP(BgL_symbolz00_13))
{ /* Ieee/symbol.scm 220 */
BgL_test1845z00_2111 = ((bool_t)1)
; }  else 
{ /* Ieee/symbol.scm 220 */
BgL_test1845z00_2111 = 
KEYWORDP(BgL_symbolz00_13)
; } 
if(BgL_test1845z00_2111)
{ /* Ieee/symbol.scm 221 */
obj_t BgL_g1040z00_1069;
if(
SYMBOLP(BgL_symbolz00_13))
{ /* Ieee/symbol.scm 207 */
BgL_g1040z00_1069 = 
GET_SYMBOL_PLIST(BgL_symbolz00_13); }  else 
{ /* Ieee/symbol.scm 207 */
if(
KEYWORDP(BgL_symbolz00_13))
{ /* Ieee/symbol.scm 209 */
BgL_g1040z00_1069 = 
GET_KEYWORD_PLIST(BgL_symbolz00_13); }  else 
{ /* Ieee/symbol.scm 209 */
BgL_g1040z00_1069 = 
BGl_errorz00zz__errorz00(BGl_string1775z00zz__r4_symbols_6_4z00, BGl_string1776z00zz__r4_symbols_6_4z00, BgL_symbolz00_13); } } 
{ 
obj_t BgL_plz00_1071;
BgL_plz00_1071 = BgL_g1040z00_1069; 
BgL_zc3z04anonymousza31201ze3z87_1072:
if(
NULLP(BgL_plz00_1071))
{ /* Ieee/symbol.scm 223 */
return BFALSE;}  else 
{ /* Ieee/symbol.scm 225 */
bool_t BgL_test1850z00_2124;
{ /* Ieee/symbol.scm 225 */
obj_t BgL_tmpz00_2125;
{ /* Ieee/symbol.scm 225 */
obj_t BgL_pairz00_1547;
if(
PAIRP(BgL_plz00_1071))
{ /* Ieee/symbol.scm 225 */
BgL_pairz00_1547 = BgL_plz00_1071; }  else 
{ 
obj_t BgL_auxz00_2128;
BgL_auxz00_2128 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)9133)), BGl_string1777z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_plz00_1071); 
FAILURE(BgL_auxz00_2128,BFALSE,BFALSE);} 
BgL_tmpz00_2125 = 
CAR(BgL_pairz00_1547); } 
BgL_test1850z00_2124 = 
(BgL_tmpz00_2125==BgL_keyz00_14); } 
if(BgL_test1850z00_2124)
{ /* Ieee/symbol.scm 226 */
obj_t BgL_pairz00_1548;
if(
PAIRP(BgL_plz00_1071))
{ /* Ieee/symbol.scm 226 */
BgL_pairz00_1548 = BgL_plz00_1071; }  else 
{ 
obj_t BgL_auxz00_2136;
BgL_auxz00_2136 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)9155)), BGl_string1777z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_plz00_1071); 
FAILURE(BgL_auxz00_2136,BFALSE,BFALSE);} 
{ /* Ieee/symbol.scm 226 */
obj_t BgL_pairz00_1551;
{ /* Ieee/symbol.scm 226 */
obj_t BgL_aux1715z00_1931;
BgL_aux1715z00_1931 = 
CDR(BgL_pairz00_1548); 
if(
PAIRP(BgL_aux1715z00_1931))
{ /* Ieee/symbol.scm 226 */
BgL_pairz00_1551 = BgL_aux1715z00_1931; }  else 
{ 
obj_t BgL_auxz00_2143;
BgL_auxz00_2143 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)9149)), BGl_string1777z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_aux1715z00_1931); 
FAILURE(BgL_auxz00_2143,BFALSE,BFALSE);} } 
return 
CAR(BgL_pairz00_1551);} }  else 
{ /* Ieee/symbol.scm 228 */
obj_t BgL_arg1211z00_1076;
{ /* Ieee/symbol.scm 228 */
obj_t BgL_pairz00_1552;
if(
PAIRP(BgL_plz00_1071))
{ /* Ieee/symbol.scm 228 */
BgL_pairz00_1552 = BgL_plz00_1071; }  else 
{ 
obj_t BgL_auxz00_2150;
BgL_auxz00_2150 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)9191)), BGl_string1777z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_plz00_1071); 
FAILURE(BgL_auxz00_2150,BFALSE,BFALSE);} 
{ /* Ieee/symbol.scm 228 */
obj_t BgL_pairz00_1555;
{ /* Ieee/symbol.scm 228 */
obj_t BgL_aux1719z00_1935;
BgL_aux1719z00_1935 = 
CDR(BgL_pairz00_1552); 
if(
PAIRP(BgL_aux1719z00_1935))
{ /* Ieee/symbol.scm 228 */
BgL_pairz00_1555 = BgL_aux1719z00_1935; }  else 
{ 
obj_t BgL_auxz00_2157;
BgL_auxz00_2157 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)9185)), BGl_string1777z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_aux1719z00_1935); 
FAILURE(BgL_auxz00_2157,BFALSE,BFALSE);} } 
BgL_arg1211z00_1076 = 
CDR(BgL_pairz00_1555); } } 
{ 
obj_t BgL_plz00_2162;
BgL_plz00_2162 = BgL_arg1211z00_1076; 
BgL_plz00_1071 = BgL_plz00_2162; 
goto BgL_zc3z04anonymousza31201ze3z87_1072;} } } } }  else 
{ /* Ieee/symbol.scm 220 */
return 
BGl_errorz00zz__errorz00(BGl_string1778z00zz__r4_symbols_6_4z00, BGl_string1776z00zz__r4_symbols_6_4z00, BgL_symbolz00_13);} } } 

}



/* &getprop */
obj_t BGl_z62getpropz62zz__r4_symbols_6_4z00(obj_t BgL_envz00_1885, obj_t BgL_symbolz00_1886, obj_t BgL_keyz00_1887)
{
{ /* Ieee/symbol.scm 219 */
return 
BGl_getpropz00zz__r4_symbols_6_4z00(BgL_symbolz00_1886, BgL_keyz00_1887);} 

}



/* putprop! */
BGL_EXPORTED_DEF obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t BgL_symbolz00_15, obj_t BgL_keyz00_16, obj_t BgL_valz00_17)
{
{ /* Ieee/symbol.scm 234 */
{ /* Ieee/symbol.scm 235 */
bool_t BgL_test1856z00_2165;
if(
SYMBOLP(BgL_symbolz00_15))
{ /* Ieee/symbol.scm 235 */
BgL_test1856z00_2165 = ((bool_t)1)
; }  else 
{ /* Ieee/symbol.scm 235 */
BgL_test1856z00_2165 = 
KEYWORDP(BgL_symbolz00_15)
; } 
if(BgL_test1856z00_2165)
{ /* Ieee/symbol.scm 236 */
obj_t BgL_g1041z00_1082;
if(
SYMBOLP(BgL_symbolz00_15))
{ /* Ieee/symbol.scm 207 */
BgL_g1041z00_1082 = 
GET_SYMBOL_PLIST(BgL_symbolz00_15); }  else 
{ /* Ieee/symbol.scm 207 */
if(
KEYWORDP(BgL_symbolz00_15))
{ /* Ieee/symbol.scm 209 */
BgL_g1041z00_1082 = 
GET_KEYWORD_PLIST(BgL_symbolz00_15); }  else 
{ /* Ieee/symbol.scm 209 */
BgL_g1041z00_1082 = 
BGl_errorz00zz__errorz00(BGl_string1775z00zz__r4_symbols_6_4z00, BGl_string1776z00zz__r4_symbols_6_4z00, BgL_symbolz00_15); } } 
{ 
obj_t BgL_plz00_1084;
BgL_plz00_1084 = BgL_g1041z00_1082; 
BgL_zc3z04anonymousza31219ze3z87_1085:
if(
NULLP(BgL_plz00_1084))
{ /* Ieee/symbol.scm 239 */
obj_t BgL_newz00_1087;
{ /* Ieee/symbol.scm 239 */
obj_t BgL_arg1223z00_1089;
{ /* Ieee/symbol.scm 239 */
obj_t BgL_arg1225z00_1090;
if(
SYMBOLP(BgL_symbolz00_15))
{ /* Ieee/symbol.scm 207 */
BgL_arg1225z00_1090 = 
GET_SYMBOL_PLIST(BgL_symbolz00_15); }  else 
{ /* Ieee/symbol.scm 207 */
if(
KEYWORDP(BgL_symbolz00_15))
{ /* Ieee/symbol.scm 209 */
BgL_arg1225z00_1090 = 
GET_KEYWORD_PLIST(BgL_symbolz00_15); }  else 
{ /* Ieee/symbol.scm 209 */
BgL_arg1225z00_1090 = 
BGl_errorz00zz__errorz00(BGl_string1775z00zz__r4_symbols_6_4z00, BGl_string1776z00zz__r4_symbols_6_4z00, BgL_symbolz00_15); } } 
BgL_arg1223z00_1089 = 
MAKE_YOUNG_PAIR(BgL_valz00_17, BgL_arg1225z00_1090); } 
BgL_newz00_1087 = 
MAKE_YOUNG_PAIR(BgL_keyz00_16, BgL_arg1223z00_1089); } 
if(
SYMBOLP(BgL_symbolz00_15))
{ /* Ieee/symbol.scm 240 */
SET_SYMBOL_PLIST(BgL_symbolz00_15, BgL_newz00_1087); }  else 
{ /* Ieee/symbol.scm 240 */
SET_KEYWORD_PLIST(BgL_symbolz00_15, BgL_newz00_1087); } 
return BgL_newz00_1087;}  else 
{ /* Ieee/symbol.scm 244 */
bool_t BgL_test1864z00_2191;
{ /* Ieee/symbol.scm 244 */
obj_t BgL_tmpz00_2192;
{ /* Ieee/symbol.scm 244 */
obj_t BgL_pairz00_1568;
if(
PAIRP(BgL_plz00_1084))
{ /* Ieee/symbol.scm 244 */
BgL_pairz00_1568 = BgL_plz00_1084; }  else 
{ 
obj_t BgL_auxz00_2195;
BgL_auxz00_2195 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)9839)), BGl_string1777z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_plz00_1084); 
FAILURE(BgL_auxz00_2195,BFALSE,BFALSE);} 
BgL_tmpz00_2192 = 
CAR(BgL_pairz00_1568); } 
BgL_test1864z00_2191 = 
(BgL_tmpz00_2192==BgL_keyz00_16); } 
if(BgL_test1864z00_2191)
{ /* Ieee/symbol.scm 245 */
obj_t BgL_arg1229z00_1093;
{ /* Ieee/symbol.scm 245 */
obj_t BgL_pairz00_1569;
if(
PAIRP(BgL_plz00_1084))
{ /* Ieee/symbol.scm 245 */
BgL_pairz00_1569 = BgL_plz00_1084; }  else 
{ 
obj_t BgL_auxz00_2203;
BgL_auxz00_2203 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)9870)), BGl_string1777z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_plz00_1084); 
FAILURE(BgL_auxz00_2203,BFALSE,BFALSE);} 
BgL_arg1229z00_1093 = 
CDR(BgL_pairz00_1569); } 
{ /* Ieee/symbol.scm 245 */
obj_t BgL_pairz00_1570;
if(
PAIRP(BgL_arg1229z00_1093))
{ /* Ieee/symbol.scm 245 */
BgL_pairz00_1570 = BgL_arg1229z00_1093; }  else 
{ 
obj_t BgL_auxz00_2210;
BgL_auxz00_2210 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)9872)), BGl_string1777z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_arg1229z00_1093); 
FAILURE(BgL_auxz00_2210,BFALSE,BFALSE);} 
return 
SET_CAR(BgL_pairz00_1570, BgL_valz00_17);} }  else 
{ /* Ieee/symbol.scm 247 */
obj_t BgL_arg1232z00_1094;
{ /* Ieee/symbol.scm 247 */
obj_t BgL_pairz00_1571;
if(
PAIRP(BgL_plz00_1084))
{ /* Ieee/symbol.scm 247 */
BgL_pairz00_1571 = BgL_plz00_1084; }  else 
{ 
obj_t BgL_auxz00_2217;
BgL_auxz00_2217 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)9911)), BGl_string1777z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_plz00_1084); 
FAILURE(BgL_auxz00_2217,BFALSE,BFALSE);} 
{ /* Ieee/symbol.scm 247 */
obj_t BgL_pairz00_1574;
{ /* Ieee/symbol.scm 247 */
obj_t BgL_aux1729z00_1945;
BgL_aux1729z00_1945 = 
CDR(BgL_pairz00_1571); 
if(
PAIRP(BgL_aux1729z00_1945))
{ /* Ieee/symbol.scm 247 */
BgL_pairz00_1574 = BgL_aux1729z00_1945; }  else 
{ 
obj_t BgL_auxz00_2224;
BgL_auxz00_2224 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)9905)), BGl_string1777z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_aux1729z00_1945); 
FAILURE(BgL_auxz00_2224,BFALSE,BFALSE);} } 
BgL_arg1232z00_1094 = 
CDR(BgL_pairz00_1574); } } 
{ 
obj_t BgL_plz00_2229;
BgL_plz00_2229 = BgL_arg1232z00_1094; 
BgL_plz00_1084 = BgL_plz00_2229; 
goto BgL_zc3z04anonymousza31219ze3z87_1085;} } } } }  else 
{ /* Ieee/symbol.scm 235 */
return 
BGl_errorz00zz__errorz00(BGl_string1778z00zz__r4_symbols_6_4z00, BGl_string1776z00zz__r4_symbols_6_4z00, BgL_symbolz00_15);} } } 

}



/* &putprop! */
obj_t BGl_z62putpropz12z70zz__r4_symbols_6_4z00(obj_t BgL_envz00_1888, obj_t BgL_symbolz00_1889, obj_t BgL_keyz00_1890, obj_t BgL_valz00_1891)
{
{ /* Ieee/symbol.scm 234 */
return 
BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_symbolz00_1889, BgL_keyz00_1890, BgL_valz00_1891);} 

}



/* remprop! */
BGL_EXPORTED_DEF obj_t BGl_rempropz12z12zz__r4_symbols_6_4z00(obj_t BgL_symbolz00_18, obj_t BgL_keyz00_19)
{
{ /* Ieee/symbol.scm 253 */
{ /* Ieee/symbol.scm 254 */
bool_t BgL_test1870z00_2232;
if(
SYMBOLP(BgL_symbolz00_18))
{ /* Ieee/symbol.scm 254 */
BgL_test1870z00_2232 = ((bool_t)1)
; }  else 
{ /* Ieee/symbol.scm 254 */
BgL_test1870z00_2232 = 
KEYWORDP(BgL_symbolz00_18)
; } 
if(BgL_test1870z00_2232)
{ /* Ieee/symbol.scm 255 */
obj_t BgL_g1043z00_1101;
if(
SYMBOLP(BgL_symbolz00_18))
{ /* Ieee/symbol.scm 207 */
BgL_g1043z00_1101 = 
GET_SYMBOL_PLIST(BgL_symbolz00_18); }  else 
{ /* Ieee/symbol.scm 207 */
if(
KEYWORDP(BgL_symbolz00_18))
{ /* Ieee/symbol.scm 209 */
BgL_g1043z00_1101 = 
GET_KEYWORD_PLIST(BgL_symbolz00_18); }  else 
{ /* Ieee/symbol.scm 209 */
BgL_g1043z00_1101 = 
BGl_errorz00zz__errorz00(BGl_string1775z00zz__r4_symbols_6_4z00, BGl_string1776z00zz__r4_symbols_6_4z00, BgL_symbolz00_18); } } 
{ 
obj_t BgL_oldz00_1103;obj_t BgL_lz00_1104;
BgL_oldz00_1103 = BNIL; 
BgL_lz00_1104 = BgL_g1043z00_1101; 
BgL_zc3z04anonymousza31242ze3z87_1105:
if(
NULLP(BgL_lz00_1104))
{ /* Ieee/symbol.scm 258 */
return BFALSE;}  else 
{ /* Ieee/symbol.scm 260 */
bool_t BgL_test1875z00_2245;
{ /* Ieee/symbol.scm 260 */
obj_t BgL_tmpz00_2246;
{ /* Ieee/symbol.scm 260 */
obj_t BgL_pairz00_1582;
if(
PAIRP(BgL_lz00_1104))
{ /* Ieee/symbol.scm 260 */
BgL_pairz00_1582 = BgL_lz00_1104; }  else 
{ 
obj_t BgL_auxz00_2249;
BgL_auxz00_2249 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)10413)), BGl_string1777z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_lz00_1104); 
FAILURE(BgL_auxz00_2249,BFALSE,BFALSE);} 
BgL_tmpz00_2246 = 
CAR(BgL_pairz00_1582); } 
BgL_test1875z00_2245 = 
(BgL_tmpz00_2246==BgL_keyz00_19); } 
if(BgL_test1875z00_2245)
{ /* Ieee/symbol.scm 260 */
if(
PAIRP(BgL_oldz00_1103))
{ /* Ieee/symbol.scm 263 */
obj_t BgL_arg1250z00_1110;obj_t BgL_arg1252z00_1111;
BgL_arg1250z00_1110 = 
CDR(BgL_oldz00_1103); 
{ /* Ieee/symbol.scm 263 */
obj_t BgL_pairz00_1585;
if(
PAIRP(BgL_lz00_1104))
{ /* Ieee/symbol.scm 263 */
BgL_pairz00_1585 = BgL_lz00_1104; }  else 
{ 
obj_t BgL_auxz00_2260;
BgL_auxz00_2260 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)10480)), BGl_string1777z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_lz00_1104); 
FAILURE(BgL_auxz00_2260,BFALSE,BFALSE);} 
{ /* Ieee/symbol.scm 263 */
obj_t BgL_pairz00_1588;
{ /* Ieee/symbol.scm 263 */
obj_t BgL_aux1735z00_1951;
BgL_aux1735z00_1951 = 
CDR(BgL_pairz00_1585); 
if(
PAIRP(BgL_aux1735z00_1951))
{ /* Ieee/symbol.scm 263 */
BgL_pairz00_1588 = BgL_aux1735z00_1951; }  else 
{ 
obj_t BgL_auxz00_2267;
BgL_auxz00_2267 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)10474)), BGl_string1777z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_aux1735z00_1951); 
FAILURE(BgL_auxz00_2267,BFALSE,BFALSE);} } 
BgL_arg1252z00_1111 = 
CDR(BgL_pairz00_1588); } } 
{ /* Ieee/symbol.scm 263 */
obj_t BgL_pairz00_1589;
if(
PAIRP(BgL_arg1250z00_1110))
{ /* Ieee/symbol.scm 263 */
BgL_pairz00_1589 = BgL_arg1250z00_1110; }  else 
{ 
obj_t BgL_auxz00_2274;
BgL_auxz00_2274 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)10472)), BGl_string1777z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_arg1250z00_1110); 
FAILURE(BgL_auxz00_2274,BFALSE,BFALSE);} 
return 
SET_CDR(BgL_pairz00_1589, BgL_arg1252z00_1111);} }  else 
{ /* Ieee/symbol.scm 262 */
if(
SYMBOLP(BgL_symbolz00_18))
{ /* Ieee/symbol.scm 266 */
obj_t BgL_arg1254z00_1113;
{ /* Ieee/symbol.scm 266 */
obj_t BgL_pairz00_1591;
if(
PAIRP(BgL_lz00_1104))
{ /* Ieee/symbol.scm 266 */
BgL_pairz00_1591 = BgL_lz00_1104; }  else 
{ 
obj_t BgL_auxz00_2283;
BgL_auxz00_2283 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)10558)), BGl_string1777z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_lz00_1104); 
FAILURE(BgL_auxz00_2283,BFALSE,BFALSE);} 
{ /* Ieee/symbol.scm 266 */
obj_t BgL_pairz00_1594;
{ /* Ieee/symbol.scm 266 */
obj_t BgL_aux1741z00_1957;
BgL_aux1741z00_1957 = 
CDR(BgL_pairz00_1591); 
if(
PAIRP(BgL_aux1741z00_1957))
{ /* Ieee/symbol.scm 266 */
BgL_pairz00_1594 = BgL_aux1741z00_1957; }  else 
{ 
obj_t BgL_auxz00_2290;
BgL_auxz00_2290 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)10552)), BGl_string1777z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_aux1741z00_1957); 
FAILURE(BgL_auxz00_2290,BFALSE,BFALSE);} } 
BgL_arg1254z00_1113 = 
CDR(BgL_pairz00_1594); } } 
return 
SET_SYMBOL_PLIST(BgL_symbolz00_18, BgL_arg1254z00_1113);}  else 
{ /* Ieee/symbol.scm 267 */
obj_t BgL_arg1256z00_1114;
{ /* Ieee/symbol.scm 267 */
obj_t BgL_pairz00_1595;
if(
PAIRP(BgL_lz00_1104))
{ /* Ieee/symbol.scm 267 */
BgL_pairz00_1595 = BgL_lz00_1104; }  else 
{ 
obj_t BgL_auxz00_2298;
BgL_auxz00_2298 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)10602)), BGl_string1777z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_lz00_1104); 
FAILURE(BgL_auxz00_2298,BFALSE,BFALSE);} 
{ /* Ieee/symbol.scm 267 */
obj_t BgL_pairz00_1598;
{ /* Ieee/symbol.scm 267 */
obj_t BgL_aux1745z00_1961;
BgL_aux1745z00_1961 = 
CDR(BgL_pairz00_1595); 
if(
PAIRP(BgL_aux1745z00_1961))
{ /* Ieee/symbol.scm 267 */
BgL_pairz00_1598 = BgL_aux1745z00_1961; }  else 
{ 
obj_t BgL_auxz00_2305;
BgL_auxz00_2305 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)10596)), BGl_string1777z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_aux1745z00_1961); 
FAILURE(BgL_auxz00_2305,BFALSE,BFALSE);} } 
BgL_arg1256z00_1114 = 
CDR(BgL_pairz00_1598); } } 
return 
SET_KEYWORD_PLIST(BgL_symbolz00_18, BgL_arg1256z00_1114);} } }  else 
{ /* Ieee/symbol.scm 269 */
obj_t BgL_arg1258z00_1115;
{ /* Ieee/symbol.scm 269 */
obj_t BgL_pairz00_1599;
if(
PAIRP(BgL_lz00_1104))
{ /* Ieee/symbol.scm 269 */
BgL_pairz00_1599 = BgL_lz00_1104; }  else 
{ 
obj_t BgL_auxz00_2313;
BgL_auxz00_2313 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)10643)), BGl_string1777z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_lz00_1104); 
FAILURE(BgL_auxz00_2313,BFALSE,BFALSE);} 
{ /* Ieee/symbol.scm 269 */
obj_t BgL_pairz00_1602;
{ /* Ieee/symbol.scm 269 */
obj_t BgL_aux1749z00_1965;
BgL_aux1749z00_1965 = 
CDR(BgL_pairz00_1599); 
if(
PAIRP(BgL_aux1749z00_1965))
{ /* Ieee/symbol.scm 269 */
BgL_pairz00_1602 = BgL_aux1749z00_1965; }  else 
{ 
obj_t BgL_auxz00_2320;
BgL_auxz00_2320 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)10637)), BGl_string1777z00zz__r4_symbols_6_4z00, BGl_string1770z00zz__r4_symbols_6_4z00, BgL_aux1749z00_1965); 
FAILURE(BgL_auxz00_2320,BFALSE,BFALSE);} } 
BgL_arg1258z00_1115 = 
CDR(BgL_pairz00_1602); } } 
{ 
obj_t BgL_lz00_2326;obj_t BgL_oldz00_2325;
BgL_oldz00_2325 = BgL_lz00_1104; 
BgL_lz00_2326 = BgL_arg1258z00_1115; 
BgL_lz00_1104 = BgL_lz00_2326; 
BgL_oldz00_1103 = BgL_oldz00_2325; 
goto BgL_zc3z04anonymousza31242ze3z87_1105;} } } } }  else 
{ /* Ieee/symbol.scm 254 */
return 
BGl_errorz00zz__errorz00(BGl_string1778z00zz__r4_symbols_6_4z00, BGl_string1776z00zz__r4_symbols_6_4z00, BgL_symbolz00_18);} } } 

}



/* &remprop! */
obj_t BGl_z62rempropz12z70zz__r4_symbols_6_4z00(obj_t BgL_envz00_1892, obj_t BgL_symbolz00_1893, obj_t BgL_keyz00_1894)
{
{ /* Ieee/symbol.scm 253 */
return 
BGl_rempropz12z12zz__r4_symbols_6_4z00(BgL_symbolz00_1893, BgL_keyz00_1894);} 

}



/* keyword? */
BGL_EXPORTED_DEF bool_t BGl_keywordzf3zf3zz__r4_symbols_6_4z00(obj_t BgL_objz00_20)
{
{ /* Ieee/symbol.scm 275 */
return 
KEYWORDP(BgL_objz00_20);} 

}



/* &keyword? */
obj_t BGl_z62keywordzf3z91zz__r4_symbols_6_4z00(obj_t BgL_envz00_1895, obj_t BgL_objz00_1896)
{
{ /* Ieee/symbol.scm 275 */
return 
BBOOL(
BGl_keywordzf3zf3zz__r4_symbols_6_4z00(BgL_objz00_1896));} 

}



/* keyword->string */
BGL_EXPORTED_DEF obj_t BGl_keywordzd2ze3stringz31zz__r4_symbols_6_4z00(obj_t BgL_keywordz00_21)
{
{ /* Ieee/symbol.scm 281 */
{ /* Ieee/symbol.scm 282 */
obj_t BgL_arg1268z00_1978;
BgL_arg1268z00_1978 = 
KEYWORD_TO_STRING(BgL_keywordz00_21); 
return 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1268z00_1978);} } 

}



/* &keyword->string */
obj_t BGl_z62keywordzd2ze3stringz53zz__r4_symbols_6_4z00(obj_t BgL_envz00_1897, obj_t BgL_keywordz00_1898)
{
{ /* Ieee/symbol.scm 281 */
{ /* Ieee/symbol.scm 282 */
obj_t BgL_auxz00_2334;
if(
KEYWORDP(BgL_keywordz00_1898))
{ /* Ieee/symbol.scm 282 */
BgL_auxz00_2334 = BgL_keywordz00_1898
; }  else 
{ 
obj_t BgL_auxz00_2337;
BgL_auxz00_2337 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)11283)), BGl_string1779z00zz__r4_symbols_6_4z00, BGl_string1780z00zz__r4_symbols_6_4z00, BgL_keywordz00_1898); 
FAILURE(BgL_auxz00_2337,BFALSE,BFALSE);} 
return 
BGl_keywordzd2ze3stringz31zz__r4_symbols_6_4z00(BgL_auxz00_2334);} } 

}



/* keyword->string! */
BGL_EXPORTED_DEF obj_t BGl_keywordzd2ze3stringz12z23zz__r4_symbols_6_4z00(obj_t BgL_keywordz00_22)
{
{ /* Ieee/symbol.scm 287 */
return 
KEYWORD_TO_STRING(BgL_keywordz00_22);} 

}



/* &keyword->string! */
obj_t BGl_z62keywordzd2ze3stringz12z41zz__r4_symbols_6_4z00(obj_t BgL_envz00_1899, obj_t BgL_keywordz00_1900)
{
{ /* Ieee/symbol.scm 287 */
{ /* Ieee/symbol.scm 288 */
obj_t BgL_auxz00_2343;
if(
KEYWORDP(BgL_keywordz00_1900))
{ /* Ieee/symbol.scm 288 */
BgL_auxz00_2343 = BgL_keywordz00_1900
; }  else 
{ 
obj_t BgL_auxz00_2346;
BgL_auxz00_2346 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)11581)), BGl_string1781z00zz__r4_symbols_6_4z00, BGl_string1780z00zz__r4_symbols_6_4z00, BgL_keywordz00_1900); 
FAILURE(BgL_auxz00_2346,BFALSE,BFALSE);} 
return 
BGl_keywordzd2ze3stringz12z23zz__r4_symbols_6_4z00(BgL_auxz00_2343);} } 

}



/* string->keyword */
BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t BgL_stringz00_23)
{
{ /* Ieee/symbol.scm 293 */
return 
string_to_keyword(
BSTRING_TO_STRING(BgL_stringz00_23));} 

}



/* &string->keyword */
obj_t BGl_z62stringzd2ze3keywordz53zz__r4_symbols_6_4z00(obj_t BgL_envz00_1901, obj_t BgL_stringz00_1902)
{
{ /* Ieee/symbol.scm 293 */
{ /* Ieee/symbol.scm 294 */
obj_t BgL_auxz00_2353;
if(
STRINGP(BgL_stringz00_1902))
{ /* Ieee/symbol.scm 294 */
BgL_auxz00_2353 = BgL_stringz00_1902
; }  else 
{ 
obj_t BgL_auxz00_2356;
BgL_auxz00_2356 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)11876)), BGl_string1782z00zz__r4_symbols_6_4z00, BGl_string1766z00zz__r4_symbols_6_4z00, BgL_stringz00_1902); 
FAILURE(BgL_auxz00_2356,BFALSE,BFALSE);} 
return 
BGl_stringzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_auxz00_2353);} } 

}



/* symbol->keyword */
BGL_EXPORTED_DEF obj_t BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t BgL_symbolz00_24)
{
{ /* Ieee/symbol.scm 299 */
{ /* Ieee/symbol.scm 300 */
obj_t BgL_arg1270z00_1604;
{ /* Ieee/symbol.scm 300 */
obj_t BgL_res1637z00_1607;
{ /* Ieee/symbol.scm 138 */
obj_t BgL_arg1167z00_1606;
BgL_arg1167z00_1606 = 
SYMBOL_TO_STRING(BgL_symbolz00_24); 
BgL_res1637z00_1607 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1167z00_1606); } 
BgL_arg1270z00_1604 = BgL_res1637z00_1607; } 
return 
string_to_keyword(
BSTRING_TO_STRING(BgL_arg1270z00_1604));} } 

}



/* &symbol->keyword */
obj_t BGl_z62symbolzd2ze3keywordz53zz__r4_symbols_6_4z00(obj_t BgL_envz00_1903, obj_t BgL_symbolz00_1904)
{
{ /* Ieee/symbol.scm 299 */
{ /* Ieee/symbol.scm 300 */
obj_t BgL_auxz00_2365;
if(
SYMBOLP(BgL_symbolz00_1904))
{ /* Ieee/symbol.scm 300 */
BgL_auxz00_2365 = BgL_symbolz00_1904
; }  else 
{ 
obj_t BgL_auxz00_2368;
BgL_auxz00_2368 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)12180)), BGl_string1783z00zz__r4_symbols_6_4z00, BGl_string1763z00zz__r4_symbols_6_4z00, BgL_symbolz00_1904); 
FAILURE(BgL_auxz00_2368,BFALSE,BFALSE);} 
return 
BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_auxz00_2365);} } 

}



/* keyword->symbol */
BGL_EXPORTED_DEF obj_t BGl_keywordzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t BgL_keywordz00_25)
{
{ /* Ieee/symbol.scm 305 */
{ /* Ieee/symbol.scm 306 */
obj_t BgL_arg1271z00_1610;
{ /* Ieee/symbol.scm 306 */
obj_t BgL_res1639z00_1613;
{ /* Ieee/symbol.scm 282 */
obj_t BgL_arg1268z00_1612;
BgL_arg1268z00_1612 = 
KEYWORD_TO_STRING(BgL_keywordz00_25); 
BgL_res1639z00_1613 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1268z00_1612); } 
BgL_arg1271z00_1610 = BgL_res1639z00_1613; } 
return 
bstring_to_symbol(BgL_arg1271z00_1610);} } 

}



/* &keyword->symbol */
obj_t BGl_z62keywordzd2ze3symbolz53zz__r4_symbols_6_4z00(obj_t BgL_envz00_1905, obj_t BgL_keywordz00_1906)
{
{ /* Ieee/symbol.scm 305 */
{ /* Ieee/symbol.scm 306 */
obj_t BgL_auxz00_2376;
if(
KEYWORDP(BgL_keywordz00_1906))
{ /* Ieee/symbol.scm 306 */
BgL_auxz00_2376 = BgL_keywordz00_1906
; }  else 
{ 
obj_t BgL_auxz00_2379;
BgL_auxz00_2379 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1761z00zz__r4_symbols_6_4z00, 
BINT(((long)12482)), BGl_string1784z00zz__r4_symbols_6_4z00, BGl_string1780z00zz__r4_symbols_6_4z00, BgL_keywordz00_1906); 
FAILURE(BgL_auxz00_2379,BFALSE,BFALSE);} 
return 
BGl_keywordzd2ze3symbolz31zz__r4_symbols_6_4z00(BgL_auxz00_2376);} } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__r4_symbols_6_4z00()
{
{ /* Ieee/symbol.scm 14 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__r4_symbols_6_4z00()
{
{ /* Ieee/symbol.scm 14 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__r4_symbols_6_4z00()
{
{ /* Ieee/symbol.scm 14 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_symbols_6_4z00()
{
{ /* Ieee/symbol.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string1785z00zz__r4_symbols_6_4z00)); 
return 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string1785z00zz__r4_symbols_6_4z00));} 

}

#ifdef __cplusplus
}
#endif
