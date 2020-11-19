/*===========================================================================*/
/*   (Llib/ucs2.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/ucs2.scm -indent -o objs/obj_s/Llib/ucs2.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_z62ucs2ze3zf3z72zz__ucs2z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2cizc3zf3ze2zz__ucs2z00(ucs2_t, ucs2_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zc3zd3zf3ze3zz__ucs2z00(ucs2_t, ucs2_t);
static obj_t BGl_z62ucs2zd2upcasezb0zz__ucs2z00(obj_t, obj_t);
static obj_t BGl_z62ucs2zc3zd3zf3z81zz__ucs2z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62ucs2zd2lowerzd2casezf3z91zz__ucs2z00(obj_t, obj_t);
static obj_t BGl_z62ucs2zd2ze3charz53zz__ucs2z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2cizd3zf3zf2zz__ucs2z00(ucs2_t, ucs2_t);
static obj_t BGl_z62integerzd2ze3ucs2zd2urz81zz__ucs2z00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__ucs2z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2cize3zf3zc2zz__ucs2z00(ucs2_t, ucs2_t);
BGL_EXPORTED_DECL ucs2_t BGl_integerzd2ze3ucs2z31zz__ucs2z00(int);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__ucs2z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL bool_t BGl_ucs2zc3zf3z30zz__ucs2z00(ucs2_t, ucs2_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zf3zf3zz__ucs2z00(obj_t);
static obj_t BGl_z62ucs2zd2alphabeticzf3z43zz__ucs2z00(obj_t, obj_t);
extern bool_t ucs2_digitp(ucs2_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2ze3zd3zf3zc3zz__ucs2z00(ucs2_t, ucs2_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd3zf3z20zz__ucs2z00(ucs2_t, ucs2_t);
BGL_EXPORTED_DECL int BGl_ucs2zd2ze3integerz31zz__ucs2z00(ucs2_t);
static obj_t BGl_z62ucs2ze3zd3zf3za1zz__ucs2z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2numericzf3z21zz__ucs2z00(ucs2_t);
BGL_EXPORTED_DECL ucs2_t BGl_ucs2zd2downcasezd2zz__ucs2z00(ucs2_t);
BGL_EXPORTED_DECL ucs2_t BGl_charzd2ze3ucs2z31zz__ucs2z00(unsigned char);
BGL_EXPORTED_DECL bool_t BGl_ucs2ze3zf3z10zz__ucs2z00(ucs2_t, ucs2_t);
static obj_t BGl_cnstzd2initzd2zz__ucs2z00();
extern unsigned char BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2upperzd2casezf3zf3zz__ucs2z00(ucs2_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2cizc3zd3zf3z31zz__ucs2z00(ucs2_t, ucs2_t);
static obj_t BGl_gczd2rootszd2initz00zz__ucs2z00();
extern ucs2_t ucs2_tolower(ucs2_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__ucs2z00();
static obj_t BGl_z62integerzd2ze3ucs2z53zz__ucs2z00(obj_t, obj_t);
static obj_t BGl_z62charzd2ze3ucs2z53zz__ucs2z00(obj_t, obj_t);
static obj_t BGl_z62ucs2zf3z91zz__ucs2z00(obj_t, obj_t);
BGL_EXPORTED_DECL ucs2_t BGl_ucs2zd2upcasezd2zz__ucs2z00(ucs2_t);
static obj_t BGl_z62ucs2zd2cizc3zd3zf3z53zz__ucs2z00(obj_t, obj_t, obj_t);
extern bool_t ucs2_upperp(ucs2_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2whitespacezf3z21zz__ucs2z00(ucs2_t);
static obj_t BGl_z62ucs2zd2ze3integerz53zz__ucs2z00(obj_t, obj_t);
static obj_t BGl_z62ucs2zd2numericzf3z43zz__ucs2z00(obj_t, obj_t);
static obj_t BGl_z62ucs2zd2downcasezb0zz__ucs2z00(obj_t, obj_t);
extern bool_t ucs2_definedp(int);
extern obj_t bstring_to_symbol(obj_t);
extern ucs2_t ucs2_toupper(ucs2_t);
extern bool_t ucs2_whitespacep(ucs2_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2cize3zd3zf3z11zz__ucs2z00(ucs2_t, ucs2_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2lowerzd2casezf3zf3zz__ucs2z00(ucs2_t);
BGL_EXPORTED_DECL ucs2_t BGl_integerzd2ze3ucs2zd2urze3zz__ucs2z00(int);
static obj_t BGl_symbol1559z00zz__ucs2z00 = BUNSPEC;
static obj_t BGl_z62ucs2zd2upperzd2casezf3z91zz__ucs2z00(obj_t, obj_t);
extern bool_t ucs2_lowerp(ucs2_t);
static obj_t BGl_z62ucs2zd2cize3zd3zf3z73zz__ucs2z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62ucs2zd2cizc3zf3z80zz__ucs2z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol1569z00zz__ucs2z00 = BUNSPEC;
extern bool_t ucs2_letterp(ucs2_t);
static obj_t BGl_z62ucs2zd2cizd3zf3z90zz__ucs2z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62ucs2zc3zf3z52zz__ucs2z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2alphabeticzf3z21zz__ucs2z00(ucs2_t);
static obj_t BGl_z62ucs2zd2cize3zf3za0zz__ucs2z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62ucs2zd3zf3z42zz__ucs2z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62ucs2zd2whitespacezf3z43zz__ucs2z00(obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL unsigned char BGl_ucs2zd2ze3charz31zz__ucs2z00(ucs2_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2whitespacezf3zd2envzf3zz__ucs2z00, BgL_bgl_za762ucs2za7d2whites1574z00, BGl_z62ucs2zd2whitespacezf3z43zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_integerzd2ze3ucs2zd2urzd2envz31zz__ucs2z00, BgL_bgl_za762integerza7d2za7e31575za7, BGl_z62integerzd2ze3ucs2zd2urz81zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zc3zf3zd2envze2zz__ucs2z00, BgL_bgl_za762ucs2za7c3za7f3za7521576z00, BGl_z62ucs2zc3zf3z52zz__ucs2z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zf3zd2envz21zz__ucs2z00, BgL_bgl_za762ucs2za7f3za791za7za7_1577za7, BGl_z62ucs2zf3z91zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2upcasezd2envz00zz__ucs2z00, BgL_bgl_za762ucs2za7d2upcase1578z00, BGl_z62ucs2zd2upcasezb0zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2cizc3zf3zd2envz30zz__ucs2z00, BgL_bgl_za762ucs2za7d2ciza7c3za71579z00, BGl_z62ucs2zd2cizc3zf3z80zz__ucs2z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zc3zd3zf3zd2envz31zz__ucs2z00, BgL_bgl_za762ucs2za7c3za7d3za7f31580z00, BGl_z62ucs2zc3zd3zf3z81zz__ucs2z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2numericzf3zd2envzf3zz__ucs2z00, BgL_bgl_za762ucs2za7d2numeri1581z00, BGl_z62ucs2zd2numericzf3z43zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2alphabeticzf3zd2envzf3zz__ucs2z00, BgL_bgl_za762ucs2za7d2alphab1582z00, BGl_z62ucs2zd2alphabeticzf3z43zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2lowerzd2casezf3zd2envz21zz__ucs2z00, BgL_bgl_za762ucs2za7d2lowerza71583za7, BGl_z62ucs2zd2lowerzd2casezf3z91zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2ze3charzd2envze3zz__ucs2z00, BgL_bgl_za762ucs2za7d2za7e3cha1584za7, BGl_z62ucs2zd2ze3charz53zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1540z00zz__ucs2z00, BgL_bgl_string1540za700za7za7_1585za7, "/tmp/4.4a/runtime/Llib/ucs2.scm", 31 );
DEFINE_STRING( BGl_string1541z00zz__ucs2z00, BgL_bgl_string1541za700za7za7_1586za7, "&ucs2=?", 7 );
DEFINE_STRING( BGl_string1542z00zz__ucs2z00, BgL_bgl_string1542za700za7za7_1587za7, "bucs2", 5 );
DEFINE_STRING( BGl_string1543z00zz__ucs2z00, BgL_bgl_string1543za700za7za7_1588za7, "&ucs2<?", 7 );
DEFINE_STRING( BGl_string1544z00zz__ucs2z00, BgL_bgl_string1544za700za7za7_1589za7, "&ucs2>?", 7 );
DEFINE_STRING( BGl_string1545z00zz__ucs2z00, BgL_bgl_string1545za700za7za7_1590za7, "&ucs2<=?", 8 );
DEFINE_STRING( BGl_string1546z00zz__ucs2z00, BgL_bgl_string1546za700za7za7_1591za7, "&ucs2>=?", 8 );
DEFINE_STRING( BGl_string1547z00zz__ucs2z00, BgL_bgl_string1547za700za7za7_1592za7, "&ucs2-ci=?", 10 );
DEFINE_STRING( BGl_string1548z00zz__ucs2z00, BgL_bgl_string1548za700za7za7_1593za7, "&ucs2-ci<?", 10 );
DEFINE_STRING( BGl_string1549z00zz__ucs2z00, BgL_bgl_string1549za700za7za7_1594za7, "&ucs2-ci>?", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd3zf3zd2envzf2zz__ucs2z00, BgL_bgl_za762ucs2za7d3za7f3za7421595z00, BGl_z62ucs2zd3zf3z42zz__ucs2z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1550z00zz__ucs2z00, BgL_bgl_string1550za700za7za7_1596za7, "&ucs2-ci<=?", 11 );
DEFINE_STRING( BGl_string1551z00zz__ucs2z00, BgL_bgl_string1551za700za7za7_1597za7, "&ucs2-ci>=?", 11 );
DEFINE_STRING( BGl_string1552z00zz__ucs2z00, BgL_bgl_string1552za700za7za7_1598za7, "&ucs2-alphabetic?", 17 );
DEFINE_STRING( BGl_string1553z00zz__ucs2z00, BgL_bgl_string1553za700za7za7_1599za7, "&ucs2-numeric?", 14 );
DEFINE_STRING( BGl_string1554z00zz__ucs2z00, BgL_bgl_string1554za700za7za7_1600za7, "&ucs2-whitespace?", 17 );
DEFINE_STRING( BGl_string1555z00zz__ucs2z00, BgL_bgl_string1555za700za7za7_1601za7, "&ucs2-upper-case?", 17 );
DEFINE_STRING( BGl_string1556z00zz__ucs2z00, BgL_bgl_string1556za700za7za7_1602za7, "&ucs2-lower-case?", 17 );
DEFINE_STRING( BGl_string1557z00zz__ucs2z00, BgL_bgl_string1557za700za7za7_1603za7, "&ucs2-upcase", 12 );
DEFINE_STRING( BGl_string1558z00zz__ucs2z00, BgL_bgl_string1558za700za7za7_1604za7, "&ucs2-downcase", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2cizd3zf3zd2envz20zz__ucs2z00, BgL_bgl_za762ucs2za7d2ciza7d3za71605z00, BGl_z62ucs2zd2cizd3zf3z90zz__ucs2z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1560z00zz__ucs2z00, BgL_bgl_string1560za700za7za7_1606za7, "integer->ucs2", 13 );
DEFINE_STRING( BGl_string1561z00zz__ucs2z00, BgL_bgl_string1561za700za7za7_1607za7, "Undefined UCS-2 character", 25 );
DEFINE_STRING( BGl_string1562z00zz__ucs2z00, BgL_bgl_string1562za700za7za7_1608za7, "integer out of range or ", 24 );
DEFINE_STRING( BGl_string1563z00zz__ucs2z00, BgL_bgl_string1563za700za7za7_1609za7, "&integer->ucs2", 14 );
DEFINE_STRING( BGl_string1564z00zz__ucs2z00, BgL_bgl_string1564za700za7za7_1610za7, "bint", 4 );
DEFINE_STRING( BGl_string1565z00zz__ucs2z00, BgL_bgl_string1565za700za7za7_1611za7, "&integer->ucs2-ur", 17 );
DEFINE_STRING( BGl_string1566z00zz__ucs2z00, BgL_bgl_string1566za700za7za7_1612za7, "&ucs2->integer", 14 );
DEFINE_STRING( BGl_string1567z00zz__ucs2z00, BgL_bgl_string1567za700za7za7_1613za7, "&char->ucs2", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2cize3zd3zf3zd2envzc3zz__ucs2z00, BgL_bgl_za762ucs2za7d2ciza7e3za71614z00, BGl_z62ucs2zd2cize3zd3zf3z73zz__ucs2z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1568z00zz__ucs2z00, BgL_bgl_string1568za700za7za7_1615za7, "bchar", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_integerzd2ze3ucs2zd2envze3zz__ucs2z00, BgL_bgl_za762integerza7d2za7e31616za7, BGl_z62integerzd2ze3ucs2z53zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1570z00zz__ucs2z00, BgL_bgl_string1570za700za7za7_1617za7, "ucs2->char", 10 );
DEFINE_STRING( BGl_string1571z00zz__ucs2z00, BgL_bgl_string1571za700za7za7_1618za7, "UCS-2 character out of ISO-LATIN-1 range", 40 );
DEFINE_STRING( BGl_string1572z00zz__ucs2z00, BgL_bgl_string1572za700za7za7_1619za7, "&ucs2->char", 11 );
DEFINE_STRING( BGl_string1573z00zz__ucs2z00, BgL_bgl_string1573za700za7za7_1620za7, "__ucs2", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2ze3integerzd2envze3zz__ucs2z00, BgL_bgl_za762ucs2za7d2za7e3int1621za7, BGl_z62ucs2zd2ze3integerz53zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2downcasezd2envz00zz__ucs2z00, BgL_bgl_za762ucs2za7d2downca1622z00, BGl_z62ucs2zd2downcasezb0zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2ze3ucs2zd2envze3zz__ucs2z00, BgL_bgl_za762charza7d2za7e3ucs1623za7, BGl_z62charzd2ze3ucs2z53zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2ze3zf3zd2envzc2zz__ucs2z00, BgL_bgl_za762ucs2za7e3za7f3za7721624z00, BGl_z62ucs2ze3zf3z72zz__ucs2z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2upperzd2casezf3zd2envz21zz__ucs2z00, BgL_bgl_za762ucs2za7d2upperza71625za7, BGl_z62ucs2zd2upperzd2casezf3z91zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2cizc3zd3zf3zd2envze3zz__ucs2z00, BgL_bgl_za762ucs2za7d2ciza7c3za71626z00, BGl_z62ucs2zd2cizc3zd3zf3z53zz__ucs2z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2cize3zf3zd2envz10zz__ucs2z00, BgL_bgl_za762ucs2za7d2ciza7e3za71627z00, BGl_z62ucs2zd2cize3zf3za0zz__ucs2z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2ze3zd3zf3zd2envz11zz__ucs2z00, BgL_bgl_za762ucs2za7e3za7d3za7f31628z00, BGl_z62ucs2ze3zd3zf3za1zz__ucs2z00, 0L, BUNSPEC, 2 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__ucs2z00) );
ADD_ROOT( (void *)(&BGl_symbol1559z00zz__ucs2z00) );
ADD_ROOT( (void *)(&BGl_symbol1569z00zz__ucs2z00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__ucs2z00(long BgL_checksumz00_1285, char * BgL_fromz00_1286)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__ucs2z00))
{ 
BGl_requirezd2initializa7ationz75zz__ucs2z00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__ucs2z00(); 
BGl_cnstzd2initzd2zz__ucs2z00(); 
return 
BGl_importedzd2moduleszd2initz00zz__ucs2z00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__ucs2z00()
{
{ /* Llib/ucs2.scm 14 */
BGl_symbol1559z00zz__ucs2z00 = 
bstring_to_symbol(BGl_string1560z00zz__ucs2z00); 
return ( 
BGl_symbol1569z00zz__ucs2z00 = 
bstring_to_symbol(BGl_string1570z00zz__ucs2z00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__ucs2z00()
{
{ /* Llib/ucs2.scm 14 */
return 
bgl_gc_roots_register();} 

}



/* ucs2? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zf3zf3zz__ucs2z00(obj_t BgL_objz00_3)
{
{ /* Llib/ucs2.scm 146 */
return 
UCS2P(BgL_objz00_3);} 

}



/* &ucs2? */
obj_t BGl_z62ucs2zf3z91zz__ucs2z00(obj_t BgL_envz00_1159, obj_t BgL_objz00_1160)
{
{ /* Llib/ucs2.scm 146 */
return 
BBOOL(
BGl_ucs2zf3zf3zz__ucs2z00(BgL_objz00_1160));} 

}



/* ucs2=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd3zf3z20zz__ucs2z00(ucs2_t BgL_ucs2az00_4, ucs2_t BgL_ucs2bz00_5)
{
{ /* Llib/ucs2.scm 152 */
return 
(BgL_ucs2az00_4==BgL_ucs2bz00_5);} 

}



/* &ucs2=? */
obj_t BGl_z62ucs2zd3zf3z42zz__ucs2z00(obj_t BgL_envz00_1161, obj_t BgL_ucs2az00_1162, obj_t BgL_ucs2bz00_1163)
{
{ /* Llib/ucs2.scm 152 */
{ /* Llib/ucs2.scm 153 */
bool_t BgL_tmpz00_1300;
{ /* Llib/ucs2.scm 153 */
ucs2_t BgL_auxz00_1310;ucs2_t BgL_auxz00_1301;
{ /* Llib/ucs2.scm 153 */
obj_t BgL_tmpz00_1311;
if(
UCS2P(BgL_ucs2bz00_1163))
{ /* Llib/ucs2.scm 153 */
BgL_tmpz00_1311 = BgL_ucs2bz00_1163
; }  else 
{ 
obj_t BgL_auxz00_1314;
BgL_auxz00_1314 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)6361)), BGl_string1541z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2bz00_1163); 
FAILURE(BgL_auxz00_1314,BFALSE,BFALSE);} 
BgL_auxz00_1310 = 
CUCS2(BgL_tmpz00_1311); } 
{ /* Llib/ucs2.scm 153 */
obj_t BgL_tmpz00_1302;
if(
UCS2P(BgL_ucs2az00_1162))
{ /* Llib/ucs2.scm 153 */
BgL_tmpz00_1302 = BgL_ucs2az00_1162
; }  else 
{ 
obj_t BgL_auxz00_1305;
BgL_auxz00_1305 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)6361)), BGl_string1541z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2az00_1162); 
FAILURE(BgL_auxz00_1305,BFALSE,BFALSE);} 
BgL_auxz00_1301 = 
CUCS2(BgL_tmpz00_1302); } 
BgL_tmpz00_1300 = 
BGl_ucs2zd3zf3z20zz__ucs2z00(BgL_auxz00_1301, BgL_auxz00_1310); } 
return 
BBOOL(BgL_tmpz00_1300);} } 

}



/* ucs2<? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zc3zf3z30zz__ucs2z00(ucs2_t BgL_ucs2az00_6, ucs2_t BgL_ucs2bz00_7)
{
{ /* Llib/ucs2.scm 158 */
return 
(BgL_ucs2az00_6<BgL_ucs2bz00_7);} 

}



/* &ucs2<? */
obj_t BGl_z62ucs2zc3zf3z52zz__ucs2z00(obj_t BgL_envz00_1164, obj_t BgL_ucs2az00_1165, obj_t BgL_ucs2bz00_1166)
{
{ /* Llib/ucs2.scm 158 */
{ /* Llib/ucs2.scm 159 */
bool_t BgL_tmpz00_1322;
{ /* Llib/ucs2.scm 159 */
ucs2_t BgL_auxz00_1332;ucs2_t BgL_auxz00_1323;
{ /* Llib/ucs2.scm 159 */
obj_t BgL_tmpz00_1333;
if(
UCS2P(BgL_ucs2bz00_1166))
{ /* Llib/ucs2.scm 159 */
BgL_tmpz00_1333 = BgL_ucs2bz00_1166
; }  else 
{ 
obj_t BgL_auxz00_1336;
BgL_auxz00_1336 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)6647)), BGl_string1543z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2bz00_1166); 
FAILURE(BgL_auxz00_1336,BFALSE,BFALSE);} 
BgL_auxz00_1332 = 
CUCS2(BgL_tmpz00_1333); } 
{ /* Llib/ucs2.scm 159 */
obj_t BgL_tmpz00_1324;
if(
UCS2P(BgL_ucs2az00_1165))
{ /* Llib/ucs2.scm 159 */
BgL_tmpz00_1324 = BgL_ucs2az00_1165
; }  else 
{ 
obj_t BgL_auxz00_1327;
BgL_auxz00_1327 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)6647)), BGl_string1543z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2az00_1165); 
FAILURE(BgL_auxz00_1327,BFALSE,BFALSE);} 
BgL_auxz00_1323 = 
CUCS2(BgL_tmpz00_1324); } 
BgL_tmpz00_1322 = 
BGl_ucs2zc3zf3z30zz__ucs2z00(BgL_auxz00_1323, BgL_auxz00_1332); } 
return 
BBOOL(BgL_tmpz00_1322);} } 

}



/* ucs2>? */
BGL_EXPORTED_DEF bool_t BGl_ucs2ze3zf3z10zz__ucs2z00(ucs2_t BgL_ucs2az00_8, ucs2_t BgL_ucs2bz00_9)
{
{ /* Llib/ucs2.scm 164 */
return 
(BgL_ucs2az00_8>BgL_ucs2bz00_9);} 

}



/* &ucs2>? */
obj_t BGl_z62ucs2ze3zf3z72zz__ucs2z00(obj_t BgL_envz00_1167, obj_t BgL_ucs2az00_1168, obj_t BgL_ucs2bz00_1169)
{
{ /* Llib/ucs2.scm 164 */
{ /* Llib/ucs2.scm 165 */
bool_t BgL_tmpz00_1344;
{ /* Llib/ucs2.scm 165 */
ucs2_t BgL_auxz00_1354;ucs2_t BgL_auxz00_1345;
{ /* Llib/ucs2.scm 165 */
obj_t BgL_tmpz00_1355;
if(
UCS2P(BgL_ucs2bz00_1169))
{ /* Llib/ucs2.scm 165 */
BgL_tmpz00_1355 = BgL_ucs2bz00_1169
; }  else 
{ 
obj_t BgL_auxz00_1358;
BgL_auxz00_1358 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)6934)), BGl_string1544z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2bz00_1169); 
FAILURE(BgL_auxz00_1358,BFALSE,BFALSE);} 
BgL_auxz00_1354 = 
CUCS2(BgL_tmpz00_1355); } 
{ /* Llib/ucs2.scm 165 */
obj_t BgL_tmpz00_1346;
if(
UCS2P(BgL_ucs2az00_1168))
{ /* Llib/ucs2.scm 165 */
BgL_tmpz00_1346 = BgL_ucs2az00_1168
; }  else 
{ 
obj_t BgL_auxz00_1349;
BgL_auxz00_1349 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)6934)), BGl_string1544z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2az00_1168); 
FAILURE(BgL_auxz00_1349,BFALSE,BFALSE);} 
BgL_auxz00_1345 = 
CUCS2(BgL_tmpz00_1346); } 
BgL_tmpz00_1344 = 
BGl_ucs2ze3zf3z10zz__ucs2z00(BgL_auxz00_1345, BgL_auxz00_1354); } 
return 
BBOOL(BgL_tmpz00_1344);} } 

}



/* ucs2<=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zc3zd3zf3ze3zz__ucs2z00(ucs2_t BgL_ucs2az00_10, ucs2_t BgL_ucs2bz00_11)
{
{ /* Llib/ucs2.scm 170 */
return 
(BgL_ucs2az00_10<=BgL_ucs2bz00_11);} 

}



/* &ucs2<=? */
obj_t BGl_z62ucs2zc3zd3zf3z81zz__ucs2z00(obj_t BgL_envz00_1170, obj_t BgL_ucs2az00_1171, obj_t BgL_ucs2bz00_1172)
{
{ /* Llib/ucs2.scm 170 */
{ /* Llib/ucs2.scm 171 */
bool_t BgL_tmpz00_1366;
{ /* Llib/ucs2.scm 171 */
ucs2_t BgL_auxz00_1376;ucs2_t BgL_auxz00_1367;
{ /* Llib/ucs2.scm 171 */
obj_t BgL_tmpz00_1377;
if(
UCS2P(BgL_ucs2bz00_1172))
{ /* Llib/ucs2.scm 171 */
BgL_tmpz00_1377 = BgL_ucs2bz00_1172
; }  else 
{ 
obj_t BgL_auxz00_1380;
BgL_auxz00_1380 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)7221)), BGl_string1545z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2bz00_1172); 
FAILURE(BgL_auxz00_1380,BFALSE,BFALSE);} 
BgL_auxz00_1376 = 
CUCS2(BgL_tmpz00_1377); } 
{ /* Llib/ucs2.scm 171 */
obj_t BgL_tmpz00_1368;
if(
UCS2P(BgL_ucs2az00_1171))
{ /* Llib/ucs2.scm 171 */
BgL_tmpz00_1368 = BgL_ucs2az00_1171
; }  else 
{ 
obj_t BgL_auxz00_1371;
BgL_auxz00_1371 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)7221)), BGl_string1545z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2az00_1171); 
FAILURE(BgL_auxz00_1371,BFALSE,BFALSE);} 
BgL_auxz00_1367 = 
CUCS2(BgL_tmpz00_1368); } 
BgL_tmpz00_1366 = 
BGl_ucs2zc3zd3zf3ze3zz__ucs2z00(BgL_auxz00_1367, BgL_auxz00_1376); } 
return 
BBOOL(BgL_tmpz00_1366);} } 

}



/* ucs2>=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2ze3zd3zf3zc3zz__ucs2z00(ucs2_t BgL_ucs2az00_12, ucs2_t BgL_ucs2bz00_13)
{
{ /* Llib/ucs2.scm 176 */
return 
(BgL_ucs2az00_12>=BgL_ucs2bz00_13);} 

}



/* &ucs2>=? */
obj_t BGl_z62ucs2ze3zd3zf3za1zz__ucs2z00(obj_t BgL_envz00_1173, obj_t BgL_ucs2az00_1174, obj_t BgL_ucs2bz00_1175)
{
{ /* Llib/ucs2.scm 176 */
{ /* Llib/ucs2.scm 177 */
bool_t BgL_tmpz00_1388;
{ /* Llib/ucs2.scm 177 */
ucs2_t BgL_auxz00_1398;ucs2_t BgL_auxz00_1389;
{ /* Llib/ucs2.scm 177 */
obj_t BgL_tmpz00_1399;
if(
UCS2P(BgL_ucs2bz00_1175))
{ /* Llib/ucs2.scm 177 */
BgL_tmpz00_1399 = BgL_ucs2bz00_1175
; }  else 
{ 
obj_t BgL_auxz00_1402;
BgL_auxz00_1402 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)7510)), BGl_string1546z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2bz00_1175); 
FAILURE(BgL_auxz00_1402,BFALSE,BFALSE);} 
BgL_auxz00_1398 = 
CUCS2(BgL_tmpz00_1399); } 
{ /* Llib/ucs2.scm 177 */
obj_t BgL_tmpz00_1390;
if(
UCS2P(BgL_ucs2az00_1174))
{ /* Llib/ucs2.scm 177 */
BgL_tmpz00_1390 = BgL_ucs2az00_1174
; }  else 
{ 
obj_t BgL_auxz00_1393;
BgL_auxz00_1393 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)7510)), BGl_string1546z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2az00_1174); 
FAILURE(BgL_auxz00_1393,BFALSE,BFALSE);} 
BgL_auxz00_1389 = 
CUCS2(BgL_tmpz00_1390); } 
BgL_tmpz00_1388 = 
BGl_ucs2ze3zd3zf3zc3zz__ucs2z00(BgL_auxz00_1389, BgL_auxz00_1398); } 
return 
BBOOL(BgL_tmpz00_1388);} } 

}



/* ucs2-ci=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2cizd3zf3zf2zz__ucs2z00(ucs2_t BgL_ucs2az00_14, ucs2_t BgL_ucs2bz00_15)
{
{ /* Llib/ucs2.scm 182 */
return 
(
ucs2_toupper(BgL_ucs2az00_14)==
ucs2_toupper(BgL_ucs2bz00_15));} 

}



/* &ucs2-ci=? */
obj_t BGl_z62ucs2zd2cizd3zf3z90zz__ucs2z00(obj_t BgL_envz00_1176, obj_t BgL_ucs2az00_1177, obj_t BgL_ucs2bz00_1178)
{
{ /* Llib/ucs2.scm 182 */
{ /* Llib/ucs2.scm 183 */
bool_t BgL_tmpz00_1412;
{ /* Llib/ucs2.scm 183 */
ucs2_t BgL_auxz00_1422;ucs2_t BgL_auxz00_1413;
{ /* Llib/ucs2.scm 183 */
obj_t BgL_tmpz00_1423;
if(
UCS2P(BgL_ucs2bz00_1178))
{ /* Llib/ucs2.scm 183 */
BgL_tmpz00_1423 = BgL_ucs2bz00_1178
; }  else 
{ 
obj_t BgL_auxz00_1426;
BgL_auxz00_1426 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)7808)), BGl_string1547z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2bz00_1178); 
FAILURE(BgL_auxz00_1426,BFALSE,BFALSE);} 
BgL_auxz00_1422 = 
CUCS2(BgL_tmpz00_1423); } 
{ /* Llib/ucs2.scm 183 */
obj_t BgL_tmpz00_1414;
if(
UCS2P(BgL_ucs2az00_1177))
{ /* Llib/ucs2.scm 183 */
BgL_tmpz00_1414 = BgL_ucs2az00_1177
; }  else 
{ 
obj_t BgL_auxz00_1417;
BgL_auxz00_1417 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)7808)), BGl_string1547z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2az00_1177); 
FAILURE(BgL_auxz00_1417,BFALSE,BFALSE);} 
BgL_auxz00_1413 = 
CUCS2(BgL_tmpz00_1414); } 
BgL_tmpz00_1412 = 
BGl_ucs2zd2cizd3zf3zf2zz__ucs2z00(BgL_auxz00_1413, BgL_auxz00_1422); } 
return 
BBOOL(BgL_tmpz00_1412);} } 

}



/* ucs2-ci<? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2cizc3zf3ze2zz__ucs2z00(ucs2_t BgL_ucs2az00_16, ucs2_t BgL_ucs2bz00_17)
{
{ /* Llib/ucs2.scm 188 */
return 
(
ucs2_toupper(BgL_ucs2az00_16)<
ucs2_toupper(BgL_ucs2bz00_17));} 

}



/* &ucs2-ci<? */
obj_t BGl_z62ucs2zd2cizc3zf3z80zz__ucs2z00(obj_t BgL_envz00_1179, obj_t BgL_ucs2az00_1180, obj_t BgL_ucs2bz00_1181)
{
{ /* Llib/ucs2.scm 188 */
{ /* Llib/ucs2.scm 189 */
bool_t BgL_tmpz00_1436;
{ /* Llib/ucs2.scm 189 */
ucs2_t BgL_auxz00_1446;ucs2_t BgL_auxz00_1437;
{ /* Llib/ucs2.scm 189 */
obj_t BgL_tmpz00_1447;
if(
UCS2P(BgL_ucs2bz00_1181))
{ /* Llib/ucs2.scm 189 */
BgL_tmpz00_1447 = BgL_ucs2bz00_1181
; }  else 
{ 
obj_t BgL_auxz00_1450;
BgL_auxz00_1450 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)8123)), BGl_string1548z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2bz00_1181); 
FAILURE(BgL_auxz00_1450,BFALSE,BFALSE);} 
BgL_auxz00_1446 = 
CUCS2(BgL_tmpz00_1447); } 
{ /* Llib/ucs2.scm 189 */
obj_t BgL_tmpz00_1438;
if(
UCS2P(BgL_ucs2az00_1180))
{ /* Llib/ucs2.scm 189 */
BgL_tmpz00_1438 = BgL_ucs2az00_1180
; }  else 
{ 
obj_t BgL_auxz00_1441;
BgL_auxz00_1441 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)8123)), BGl_string1548z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2az00_1180); 
FAILURE(BgL_auxz00_1441,BFALSE,BFALSE);} 
BgL_auxz00_1437 = 
CUCS2(BgL_tmpz00_1438); } 
BgL_tmpz00_1436 = 
BGl_ucs2zd2cizc3zf3ze2zz__ucs2z00(BgL_auxz00_1437, BgL_auxz00_1446); } 
return 
BBOOL(BgL_tmpz00_1436);} } 

}



/* ucs2-ci>? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2cize3zf3zc2zz__ucs2z00(ucs2_t BgL_ucs2az00_18, ucs2_t BgL_ucs2bz00_19)
{
{ /* Llib/ucs2.scm 194 */
return 
(
ucs2_toupper(BgL_ucs2az00_18)>
ucs2_toupper(BgL_ucs2bz00_19));} 

}



/* &ucs2-ci>? */
obj_t BGl_z62ucs2zd2cize3zf3za0zz__ucs2z00(obj_t BgL_envz00_1182, obj_t BgL_ucs2az00_1183, obj_t BgL_ucs2bz00_1184)
{
{ /* Llib/ucs2.scm 194 */
{ /* Llib/ucs2.scm 195 */
bool_t BgL_tmpz00_1460;
{ /* Llib/ucs2.scm 195 */
ucs2_t BgL_auxz00_1470;ucs2_t BgL_auxz00_1461;
{ /* Llib/ucs2.scm 195 */
obj_t BgL_tmpz00_1471;
if(
UCS2P(BgL_ucs2bz00_1184))
{ /* Llib/ucs2.scm 195 */
BgL_tmpz00_1471 = BgL_ucs2bz00_1184
; }  else 
{ 
obj_t BgL_auxz00_1474;
BgL_auxz00_1474 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)8440)), BGl_string1549z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2bz00_1184); 
FAILURE(BgL_auxz00_1474,BFALSE,BFALSE);} 
BgL_auxz00_1470 = 
CUCS2(BgL_tmpz00_1471); } 
{ /* Llib/ucs2.scm 195 */
obj_t BgL_tmpz00_1462;
if(
UCS2P(BgL_ucs2az00_1183))
{ /* Llib/ucs2.scm 195 */
BgL_tmpz00_1462 = BgL_ucs2az00_1183
; }  else 
{ 
obj_t BgL_auxz00_1465;
BgL_auxz00_1465 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)8440)), BGl_string1549z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2az00_1183); 
FAILURE(BgL_auxz00_1465,BFALSE,BFALSE);} 
BgL_auxz00_1461 = 
CUCS2(BgL_tmpz00_1462); } 
BgL_tmpz00_1460 = 
BGl_ucs2zd2cize3zf3zc2zz__ucs2z00(BgL_auxz00_1461, BgL_auxz00_1470); } 
return 
BBOOL(BgL_tmpz00_1460);} } 

}



/* ucs2-ci<=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2cizc3zd3zf3z31zz__ucs2z00(ucs2_t BgL_ucs2az00_20, ucs2_t BgL_ucs2bz00_21)
{
{ /* Llib/ucs2.scm 200 */
return 
(
ucs2_toupper(BgL_ucs2az00_20)<=
ucs2_toupper(BgL_ucs2bz00_21));} 

}



/* &ucs2-ci<=? */
obj_t BGl_z62ucs2zd2cizc3zd3zf3z53zz__ucs2z00(obj_t BgL_envz00_1185, obj_t BgL_ucs2az00_1186, obj_t BgL_ucs2bz00_1187)
{
{ /* Llib/ucs2.scm 200 */
{ /* Llib/ucs2.scm 201 */
bool_t BgL_tmpz00_1484;
{ /* Llib/ucs2.scm 201 */
ucs2_t BgL_auxz00_1494;ucs2_t BgL_auxz00_1485;
{ /* Llib/ucs2.scm 201 */
obj_t BgL_tmpz00_1495;
if(
UCS2P(BgL_ucs2bz00_1187))
{ /* Llib/ucs2.scm 201 */
BgL_tmpz00_1495 = BgL_ucs2bz00_1187
; }  else 
{ 
obj_t BgL_auxz00_1498;
BgL_auxz00_1498 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)8757)), BGl_string1550z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2bz00_1187); 
FAILURE(BgL_auxz00_1498,BFALSE,BFALSE);} 
BgL_auxz00_1494 = 
CUCS2(BgL_tmpz00_1495); } 
{ /* Llib/ucs2.scm 201 */
obj_t BgL_tmpz00_1486;
if(
UCS2P(BgL_ucs2az00_1186))
{ /* Llib/ucs2.scm 201 */
BgL_tmpz00_1486 = BgL_ucs2az00_1186
; }  else 
{ 
obj_t BgL_auxz00_1489;
BgL_auxz00_1489 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)8757)), BGl_string1550z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2az00_1186); 
FAILURE(BgL_auxz00_1489,BFALSE,BFALSE);} 
BgL_auxz00_1485 = 
CUCS2(BgL_tmpz00_1486); } 
BgL_tmpz00_1484 = 
BGl_ucs2zd2cizc3zd3zf3z31zz__ucs2z00(BgL_auxz00_1485, BgL_auxz00_1494); } 
return 
BBOOL(BgL_tmpz00_1484);} } 

}



/* ucs2-ci>=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2cize3zd3zf3z11zz__ucs2z00(ucs2_t BgL_ucs2az00_22, ucs2_t BgL_ucs2bz00_23)
{
{ /* Llib/ucs2.scm 206 */
return 
(
ucs2_toupper(BgL_ucs2az00_22)>=
ucs2_toupper(BgL_ucs2bz00_23));} 

}



/* &ucs2-ci>=? */
obj_t BGl_z62ucs2zd2cize3zd3zf3z73zz__ucs2z00(obj_t BgL_envz00_1188, obj_t BgL_ucs2az00_1189, obj_t BgL_ucs2bz00_1190)
{
{ /* Llib/ucs2.scm 206 */
{ /* Llib/ucs2.scm 207 */
bool_t BgL_tmpz00_1508;
{ /* Llib/ucs2.scm 207 */
ucs2_t BgL_auxz00_1518;ucs2_t BgL_auxz00_1509;
{ /* Llib/ucs2.scm 207 */
obj_t BgL_tmpz00_1519;
if(
UCS2P(BgL_ucs2bz00_1190))
{ /* Llib/ucs2.scm 207 */
BgL_tmpz00_1519 = BgL_ucs2bz00_1190
; }  else 
{ 
obj_t BgL_auxz00_1522;
BgL_auxz00_1522 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)9074)), BGl_string1551z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2bz00_1190); 
FAILURE(BgL_auxz00_1522,BFALSE,BFALSE);} 
BgL_auxz00_1518 = 
CUCS2(BgL_tmpz00_1519); } 
{ /* Llib/ucs2.scm 207 */
obj_t BgL_tmpz00_1510;
if(
UCS2P(BgL_ucs2az00_1189))
{ /* Llib/ucs2.scm 207 */
BgL_tmpz00_1510 = BgL_ucs2az00_1189
; }  else 
{ 
obj_t BgL_auxz00_1513;
BgL_auxz00_1513 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)9074)), BGl_string1551z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2az00_1189); 
FAILURE(BgL_auxz00_1513,BFALSE,BFALSE);} 
BgL_auxz00_1509 = 
CUCS2(BgL_tmpz00_1510); } 
BgL_tmpz00_1508 = 
BGl_ucs2zd2cize3zd3zf3z11zz__ucs2z00(BgL_auxz00_1509, BgL_auxz00_1518); } 
return 
BBOOL(BgL_tmpz00_1508);} } 

}



/* ucs2-alphabetic? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2alphabeticzf3z21zz__ucs2z00(ucs2_t BgL_ucs2z00_24)
{
{ /* Llib/ucs2.scm 212 */
return 
ucs2_letterp(BgL_ucs2z00_24);} 

}



/* &ucs2-alphabetic? */
obj_t BGl_z62ucs2zd2alphabeticzf3z43zz__ucs2z00(obj_t BgL_envz00_1191, obj_t BgL_ucs2z00_1192)
{
{ /* Llib/ucs2.scm 212 */
{ /* Llib/ucs2.scm 213 */
bool_t BgL_tmpz00_1530;
{ /* Llib/ucs2.scm 213 */
ucs2_t BgL_auxz00_1531;
{ /* Llib/ucs2.scm 213 */
obj_t BgL_tmpz00_1532;
if(
UCS2P(BgL_ucs2z00_1192))
{ /* Llib/ucs2.scm 213 */
BgL_tmpz00_1532 = BgL_ucs2z00_1192
; }  else 
{ 
obj_t BgL_auxz00_1535;
BgL_auxz00_1535 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)9381)), BGl_string1552z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2z00_1192); 
FAILURE(BgL_auxz00_1535,BFALSE,BFALSE);} 
BgL_auxz00_1531 = 
CUCS2(BgL_tmpz00_1532); } 
BgL_tmpz00_1530 = 
BGl_ucs2zd2alphabeticzf3z21zz__ucs2z00(BgL_auxz00_1531); } 
return 
BBOOL(BgL_tmpz00_1530);} } 

}



/* ucs2-numeric? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2numericzf3z21zz__ucs2z00(ucs2_t BgL_ucs2z00_25)
{
{ /* Llib/ucs2.scm 218 */
return 
ucs2_digitp(BgL_ucs2z00_25);} 

}



/* &ucs2-numeric? */
obj_t BGl_z62ucs2zd2numericzf3z43zz__ucs2z00(obj_t BgL_envz00_1193, obj_t BgL_ucs2z00_1194)
{
{ /* Llib/ucs2.scm 218 */
{ /* Llib/ucs2.scm 219 */
bool_t BgL_tmpz00_1543;
{ /* Llib/ucs2.scm 219 */
ucs2_t BgL_auxz00_1544;
{ /* Llib/ucs2.scm 219 */
obj_t BgL_tmpz00_1545;
if(
UCS2P(BgL_ucs2z00_1194))
{ /* Llib/ucs2.scm 219 */
BgL_tmpz00_1545 = BgL_ucs2z00_1194
; }  else 
{ 
obj_t BgL_auxz00_1548;
BgL_auxz00_1548 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)9666)), BGl_string1553z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2z00_1194); 
FAILURE(BgL_auxz00_1548,BFALSE,BFALSE);} 
BgL_auxz00_1544 = 
CUCS2(BgL_tmpz00_1545); } 
BgL_tmpz00_1543 = 
BGl_ucs2zd2numericzf3z21zz__ucs2z00(BgL_auxz00_1544); } 
return 
BBOOL(BgL_tmpz00_1543);} } 

}



/* ucs2-whitespace? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2whitespacezf3z21zz__ucs2z00(ucs2_t BgL_ucs2z00_26)
{
{ /* Llib/ucs2.scm 224 */
return 
ucs2_whitespacep(BgL_ucs2z00_26);} 

}



/* &ucs2-whitespace? */
obj_t BGl_z62ucs2zd2whitespacezf3z43zz__ucs2z00(obj_t BgL_envz00_1195, obj_t BgL_ucs2z00_1196)
{
{ /* Llib/ucs2.scm 224 */
{ /* Llib/ucs2.scm 225 */
bool_t BgL_tmpz00_1556;
{ /* Llib/ucs2.scm 225 */
ucs2_t BgL_auxz00_1557;
{ /* Llib/ucs2.scm 225 */
obj_t BgL_tmpz00_1558;
if(
UCS2P(BgL_ucs2z00_1196))
{ /* Llib/ucs2.scm 225 */
BgL_tmpz00_1558 = BgL_ucs2z00_1196
; }  else 
{ 
obj_t BgL_auxz00_1561;
BgL_auxz00_1561 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)9953)), BGl_string1554z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2z00_1196); 
FAILURE(BgL_auxz00_1561,BFALSE,BFALSE);} 
BgL_auxz00_1557 = 
CUCS2(BgL_tmpz00_1558); } 
BgL_tmpz00_1556 = 
BGl_ucs2zd2whitespacezf3z21zz__ucs2z00(BgL_auxz00_1557); } 
return 
BBOOL(BgL_tmpz00_1556);} } 

}



/* ucs2-upper-case? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2upperzd2casezf3zf3zz__ucs2z00(ucs2_t BgL_ucs2z00_27)
{
{ /* Llib/ucs2.scm 230 */
return 
ucs2_upperp(BgL_ucs2z00_27);} 

}



/* &ucs2-upper-case? */
obj_t BGl_z62ucs2zd2upperzd2casezf3z91zz__ucs2z00(obj_t BgL_envz00_1197, obj_t BgL_ucs2z00_1198)
{
{ /* Llib/ucs2.scm 230 */
{ /* Llib/ucs2.scm 231 */
bool_t BgL_tmpz00_1569;
{ /* Llib/ucs2.scm 231 */
ucs2_t BgL_auxz00_1570;
{ /* Llib/ucs2.scm 231 */
obj_t BgL_tmpz00_1571;
if(
UCS2P(BgL_ucs2z00_1198))
{ /* Llib/ucs2.scm 231 */
BgL_tmpz00_1571 = BgL_ucs2z00_1198
; }  else 
{ 
obj_t BgL_auxz00_1574;
BgL_auxz00_1574 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)10245)), BGl_string1555z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2z00_1198); 
FAILURE(BgL_auxz00_1574,BFALSE,BFALSE);} 
BgL_auxz00_1570 = 
CUCS2(BgL_tmpz00_1571); } 
BgL_tmpz00_1569 = 
BGl_ucs2zd2upperzd2casezf3zf3zz__ucs2z00(BgL_auxz00_1570); } 
return 
BBOOL(BgL_tmpz00_1569);} } 

}



/* ucs2-lower-case? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2lowerzd2casezf3zf3zz__ucs2z00(ucs2_t BgL_ucs2z00_28)
{
{ /* Llib/ucs2.scm 236 */
return 
ucs2_lowerp(BgL_ucs2z00_28);} 

}



/* &ucs2-lower-case? */
obj_t BGl_z62ucs2zd2lowerzd2casezf3z91zz__ucs2z00(obj_t BgL_envz00_1199, obj_t BgL_ucs2z00_1200)
{
{ /* Llib/ucs2.scm 236 */
{ /* Llib/ucs2.scm 237 */
bool_t BgL_tmpz00_1582;
{ /* Llib/ucs2.scm 237 */
ucs2_t BgL_auxz00_1583;
{ /* Llib/ucs2.scm 237 */
obj_t BgL_tmpz00_1584;
if(
UCS2P(BgL_ucs2z00_1200))
{ /* Llib/ucs2.scm 237 */
BgL_tmpz00_1584 = BgL_ucs2z00_1200
; }  else 
{ 
obj_t BgL_auxz00_1587;
BgL_auxz00_1587 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)10532)), BGl_string1556z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2z00_1200); 
FAILURE(BgL_auxz00_1587,BFALSE,BFALSE);} 
BgL_auxz00_1583 = 
CUCS2(BgL_tmpz00_1584); } 
BgL_tmpz00_1582 = 
BGl_ucs2zd2lowerzd2casezf3zf3zz__ucs2z00(BgL_auxz00_1583); } 
return 
BBOOL(BgL_tmpz00_1582);} } 

}



/* ucs2-upcase */
BGL_EXPORTED_DEF ucs2_t BGl_ucs2zd2upcasezd2zz__ucs2z00(ucs2_t BgL_ucs2z00_29)
{
{ /* Llib/ucs2.scm 242 */
return 
ucs2_toupper(BgL_ucs2z00_29);} 

}



/* &ucs2-upcase */
obj_t BGl_z62ucs2zd2upcasezb0zz__ucs2z00(obj_t BgL_envz00_1201, obj_t BgL_ucs2z00_1202)
{
{ /* Llib/ucs2.scm 242 */
{ /* Llib/ucs2.scm 243 */
ucs2_t BgL_tmpz00_1595;
{ /* Llib/ucs2.scm 243 */
ucs2_t BgL_auxz00_1596;
{ /* Llib/ucs2.scm 243 */
obj_t BgL_tmpz00_1597;
if(
UCS2P(BgL_ucs2z00_1202))
{ /* Llib/ucs2.scm 243 */
BgL_tmpz00_1597 = BgL_ucs2z00_1202
; }  else 
{ 
obj_t BgL_auxz00_1600;
BgL_auxz00_1600 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)10814)), BGl_string1557z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2z00_1202); 
FAILURE(BgL_auxz00_1600,BFALSE,BFALSE);} 
BgL_auxz00_1596 = 
CUCS2(BgL_tmpz00_1597); } 
BgL_tmpz00_1595 = 
BGl_ucs2zd2upcasezd2zz__ucs2z00(BgL_auxz00_1596); } 
return 
BUCS2(BgL_tmpz00_1595);} } 

}



/* ucs2-downcase */
BGL_EXPORTED_DEF ucs2_t BGl_ucs2zd2downcasezd2zz__ucs2z00(ucs2_t BgL_ucs2z00_30)
{
{ /* Llib/ucs2.scm 248 */
return 
ucs2_tolower(BgL_ucs2z00_30);} 

}



/* &ucs2-downcase */
obj_t BGl_z62ucs2zd2downcasezb0zz__ucs2z00(obj_t BgL_envz00_1203, obj_t BgL_ucs2z00_1204)
{
{ /* Llib/ucs2.scm 248 */
{ /* Llib/ucs2.scm 249 */
ucs2_t BgL_tmpz00_1608;
{ /* Llib/ucs2.scm 249 */
ucs2_t BgL_auxz00_1609;
{ /* Llib/ucs2.scm 249 */
obj_t BgL_tmpz00_1610;
if(
UCS2P(BgL_ucs2z00_1204))
{ /* Llib/ucs2.scm 249 */
BgL_tmpz00_1610 = BgL_ucs2z00_1204
; }  else 
{ 
obj_t BgL_auxz00_1613;
BgL_auxz00_1613 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)11098)), BGl_string1558z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2z00_1204); 
FAILURE(BgL_auxz00_1613,BFALSE,BFALSE);} 
BgL_auxz00_1609 = 
CUCS2(BgL_tmpz00_1610); } 
BgL_tmpz00_1608 = 
BGl_ucs2zd2downcasezd2zz__ucs2z00(BgL_auxz00_1609); } 
return 
BUCS2(BgL_tmpz00_1608);} } 

}



/* integer->ucs2 */
BGL_EXPORTED_DEF ucs2_t BGl_integerzd2ze3ucs2z31zz__ucs2z00(int BgL_intz00_31)
{
{ /* Llib/ucs2.scm 254 */
{ /* Llib/ucs2.scm 255 */
bool_t BgL_test1657z00_1620;
if(
(
(long)(BgL_intz00_31)>=((long)0)))
{ /* Llib/ucs2.scm 255 */
BgL_test1657z00_1620 = 
(
(long)(BgL_intz00_31)<((long)65536))
; }  else 
{ /* Llib/ucs2.scm 255 */
BgL_test1657z00_1620 = ((bool_t)0)
; } 
if(BgL_test1657z00_1620)
{ /* Llib/ucs2.scm 255 */
if(
ucs2_definedp(BgL_intz00_31))
{ /* Llib/ucs2.scm 256 */
return 
BGL_INT_TO_UCS2(BgL_intz00_31);}  else 
{ /* Llib/ucs2.scm 258 */
obj_t BgL_tmpz00_1629;
{ /* Llib/ucs2.scm 258 */
obj_t BgL_aux1524z00_1269;
BgL_aux1524z00_1269 = 
BGl_errorz00zz__errorz00(BGl_symbol1559z00zz__ucs2z00, BGl_string1561z00zz__ucs2z00, 
BINT(BgL_intz00_31)); 
if(
UCS2P(BgL_aux1524z00_1269))
{ /* Llib/ucs2.scm 258 */
BgL_tmpz00_1629 = BgL_aux1524z00_1269
; }  else 
{ 
obj_t BgL_auxz00_1634;
BgL_auxz00_1634 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)11496)), BGl_string1560z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_aux1524z00_1269); 
FAILURE(BgL_auxz00_1634,BFALSE,BFALSE);} } 
return 
CUCS2(BgL_tmpz00_1629);} }  else 
{ /* Llib/ucs2.scm 259 */
obj_t BgL_tmpz00_1639;
{ /* Llib/ucs2.scm 259 */
obj_t BgL_aux1526z00_1271;
BgL_aux1526z00_1271 = 
BGl_errorz00zz__errorz00(BGl_symbol1559z00zz__ucs2z00, BGl_string1562z00zz__ucs2z00, 
BINT(BgL_intz00_31)); 
if(
UCS2P(BgL_aux1526z00_1271))
{ /* Llib/ucs2.scm 259 */
BgL_tmpz00_1639 = BgL_aux1526z00_1271
; }  else 
{ 
obj_t BgL_auxz00_1644;
BgL_auxz00_1644 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)11559)), BGl_string1560z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_aux1526z00_1271); 
FAILURE(BgL_auxz00_1644,BFALSE,BFALSE);} } 
return 
CUCS2(BgL_tmpz00_1639);} } } 

}



/* &integer->ucs2 */
obj_t BGl_z62integerzd2ze3ucs2z53zz__ucs2z00(obj_t BgL_envz00_1205, obj_t BgL_intz00_1206)
{
{ /* Llib/ucs2.scm 254 */
{ /* Llib/ucs2.scm 255 */
ucs2_t BgL_tmpz00_1649;
{ /* Llib/ucs2.scm 255 */
int BgL_auxz00_1650;
{ /* Llib/ucs2.scm 255 */
obj_t BgL_tmpz00_1651;
if(
INTEGERP(BgL_intz00_1206))
{ /* Llib/ucs2.scm 255 */
BgL_tmpz00_1651 = BgL_intz00_1206
; }  else 
{ 
obj_t BgL_auxz00_1654;
BgL_auxz00_1654 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)11394)), BGl_string1563z00zz__ucs2z00, BGl_string1564z00zz__ucs2z00, BgL_intz00_1206); 
FAILURE(BgL_auxz00_1654,BFALSE,BFALSE);} 
BgL_auxz00_1650 = 
CINT(BgL_tmpz00_1651); } 
BgL_tmpz00_1649 = 
BGl_integerzd2ze3ucs2z31zz__ucs2z00(BgL_auxz00_1650); } 
return 
BUCS2(BgL_tmpz00_1649);} } 

}



/* integer->ucs2-ur */
BGL_EXPORTED_DEF ucs2_t BGl_integerzd2ze3ucs2zd2urze3zz__ucs2z00(int BgL_intz00_32)
{
{ /* Llib/ucs2.scm 264 */
return 
BGL_INT_TO_UCS2(BgL_intz00_32);} 

}



/* &integer->ucs2-ur */
obj_t BGl_z62integerzd2ze3ucs2zd2urz81zz__ucs2z00(obj_t BgL_envz00_1207, obj_t BgL_intz00_1208)
{
{ /* Llib/ucs2.scm 264 */
{ /* Llib/ucs2.scm 265 */
ucs2_t BgL_tmpz00_1662;
{ /* Llib/ucs2.scm 265 */
int BgL_auxz00_1663;
{ /* Llib/ucs2.scm 265 */
obj_t BgL_tmpz00_1664;
if(
INTEGERP(BgL_intz00_1208))
{ /* Llib/ucs2.scm 265 */
BgL_tmpz00_1664 = BgL_intz00_1208
; }  else 
{ 
obj_t BgL_auxz00_1667;
BgL_auxz00_1667 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)11890)), BGl_string1565z00zz__ucs2z00, BGl_string1564z00zz__ucs2z00, BgL_intz00_1208); 
FAILURE(BgL_auxz00_1667,BFALSE,BFALSE);} 
BgL_auxz00_1663 = 
CINT(BgL_tmpz00_1664); } 
BgL_tmpz00_1662 = 
BGl_integerzd2ze3ucs2zd2urze3zz__ucs2z00(BgL_auxz00_1663); } 
return 
BUCS2(BgL_tmpz00_1662);} } 

}



/* ucs2->integer */
BGL_EXPORTED_DEF int BGl_ucs2zd2ze3integerz31zz__ucs2z00(ucs2_t BgL_ucs2z00_33)
{
{ /* Llib/ucs2.scm 270 */
{ /* Llib/ucs2.scm 271 */
obj_t BgL_tmpz00_1674;
BgL_tmpz00_1674 = 
BUCS2(BgL_ucs2z00_33); 
return 
CUCS2(BgL_tmpz00_1674);} } 

}



/* &ucs2->integer */
obj_t BGl_z62ucs2zd2ze3integerz53zz__ucs2z00(obj_t BgL_envz00_1209, obj_t BgL_ucs2z00_1210)
{
{ /* Llib/ucs2.scm 270 */
{ /* Llib/ucs2.scm 271 */
int BgL_tmpz00_1677;
{ /* Llib/ucs2.scm 271 */
ucs2_t BgL_auxz00_1678;
{ /* Llib/ucs2.scm 271 */
obj_t BgL_tmpz00_1679;
if(
UCS2P(BgL_ucs2z00_1210))
{ /* Llib/ucs2.scm 271 */
BgL_tmpz00_1679 = BgL_ucs2z00_1210
; }  else 
{ 
obj_t BgL_auxz00_1682;
BgL_auxz00_1682 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)12186)), BGl_string1566z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2z00_1210); 
FAILURE(BgL_auxz00_1682,BFALSE,BFALSE);} 
BgL_auxz00_1678 = 
CUCS2(BgL_tmpz00_1679); } 
BgL_tmpz00_1677 = 
BGl_ucs2zd2ze3integerz31zz__ucs2z00(BgL_auxz00_1678); } 
return 
BINT(BgL_tmpz00_1677);} } 

}



/* char->ucs2 */
BGL_EXPORTED_DEF ucs2_t BGl_charzd2ze3ucs2z31zz__ucs2z00(unsigned char BgL_charz00_34)
{
{ /* Llib/ucs2.scm 276 */
{ /* Llib/ucs2.scm 265 */
int BgL_tmpz00_1689;
BgL_tmpz00_1689 = 
(int)(
(
(unsigned char)(BgL_charz00_34))); 
return 
BGL_INT_TO_UCS2(BgL_tmpz00_1689);} } 

}



/* &char->ucs2 */
obj_t BGl_z62charzd2ze3ucs2z53zz__ucs2z00(obj_t BgL_envz00_1211, obj_t BgL_charz00_1212)
{
{ /* Llib/ucs2.scm 276 */
{ /* Llib/ucs2.scm 277 */
ucs2_t BgL_tmpz00_1694;
{ /* Llib/ucs2.scm 277 */
unsigned char BgL_auxz00_1695;
{ /* Llib/ucs2.scm 277 */
obj_t BgL_tmpz00_1696;
if(
CHARP(BgL_charz00_1212))
{ /* Llib/ucs2.scm 277 */
BgL_tmpz00_1696 = BgL_charz00_1212
; }  else 
{ 
obj_t BgL_auxz00_1699;
BgL_auxz00_1699 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)12499)), BGl_string1567z00zz__ucs2z00, BGl_string1568z00zz__ucs2z00, BgL_charz00_1212); 
FAILURE(BgL_auxz00_1699,BFALSE,BFALSE);} 
BgL_auxz00_1695 = 
CCHAR(BgL_tmpz00_1696); } 
BgL_tmpz00_1694 = 
BGl_charzd2ze3ucs2z31zz__ucs2z00(BgL_auxz00_1695); } 
return 
BUCS2(BgL_tmpz00_1694);} } 

}



/* ucs2->char */
BGL_EXPORTED_DEF unsigned char BGl_ucs2zd2ze3charz31zz__ucs2z00(ucs2_t BgL_ucs2z00_35)
{
{ /* Llib/ucs2.scm 282 */
{ /* Llib/ucs2.scm 283 */
int BgL_intz00_764;
{ /* Llib/ucs2.scm 283 */
int BgL_res1452z00_1079;
{ /* Llib/ucs2.scm 271 */
obj_t BgL_tmpz00_1706;
BgL_tmpz00_1706 = 
BUCS2(BgL_ucs2z00_35); 
BgL_res1452z00_1079 = 
CUCS2(BgL_tmpz00_1706); } 
BgL_intz00_764 = BgL_res1452z00_1079; } 
if(
(
(long)(BgL_intz00_764)<((long)256)))
{ /* Llib/ucs2.scm 284 */
return 
(char)(
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(long)(BgL_intz00_764)));}  else 
{ /* Llib/ucs2.scm 286 */
obj_t BgL_tmpz00_1715;
{ /* Llib/ucs2.scm 286 */
obj_t BgL_aux1536z00_1281;
BgL_aux1536z00_1281 = 
BGl_errorz00zz__errorz00(BGl_symbol1569z00zz__ucs2z00, BGl_string1571z00zz__ucs2z00, 
BUCS2(BgL_ucs2z00_35)); 
if(
CHARP(BgL_aux1536z00_1281))
{ /* Llib/ucs2.scm 286 */
BgL_tmpz00_1715 = BgL_aux1536z00_1281
; }  else 
{ 
obj_t BgL_auxz00_1720;
BgL_auxz00_1720 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)12870)), BGl_string1570z00zz__ucs2z00, BGl_string1568z00zz__ucs2z00, BgL_aux1536z00_1281); 
FAILURE(BgL_auxz00_1720,BFALSE,BFALSE);} } 
return 
CCHAR(BgL_tmpz00_1715);} } } 

}



/* &ucs2->char */
obj_t BGl_z62ucs2zd2ze3charz53zz__ucs2z00(obj_t BgL_envz00_1213, obj_t BgL_ucs2z00_1214)
{
{ /* Llib/ucs2.scm 282 */
{ /* Llib/ucs2.scm 283 */
unsigned char BgL_tmpz00_1725;
{ /* Llib/ucs2.scm 283 */
ucs2_t BgL_auxz00_1726;
{ /* Llib/ucs2.scm 283 */
obj_t BgL_tmpz00_1727;
if(
UCS2P(BgL_ucs2z00_1214))
{ /* Llib/ucs2.scm 283 */
BgL_tmpz00_1727 = BgL_ucs2z00_1214
; }  else 
{ 
obj_t BgL_auxz00_1730;
BgL_auxz00_1730 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1540z00zz__ucs2z00, 
BINT(((long)12786)), BGl_string1572z00zz__ucs2z00, BGl_string1542z00zz__ucs2z00, BgL_ucs2z00_1214); 
FAILURE(BgL_auxz00_1730,BFALSE,BFALSE);} 
BgL_auxz00_1726 = 
CUCS2(BgL_tmpz00_1727); } 
BgL_tmpz00_1725 = 
BGl_ucs2zd2ze3charz31zz__ucs2z00(BgL_auxz00_1726); } 
return 
BCHAR(BgL_tmpz00_1725);} } 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__ucs2z00()
{
{ /* Llib/ucs2.scm 14 */
return 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string1573z00zz__ucs2z00));} 

}

#ifdef __cplusplus
}
#endif
