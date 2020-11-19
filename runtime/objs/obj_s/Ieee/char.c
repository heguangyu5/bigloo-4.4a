/*===========================================================================*/
/*   (Ieee/char.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Ieee/char.scm -indent -o objs/obj_s/Ieee/char.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_z62charzd2lowerzd2casezf3z91zz__r4_characters_6_6z00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_charzd2ze3integerz31zz__r4_characters_6_6z00(unsigned char);
BGL_EXPORTED_DECL unsigned char BGl_charzd2andzd2zz__r4_characters_6_6z00(unsigned char, unsigned char);
BGL_EXPORTED_DECL bool_t BGl_charzd2numericzf3z21zz__r4_characters_6_6z00(unsigned char);
BGL_EXPORTED_DECL unsigned char BGl_charzd2downcasezd2zz__r4_characters_6_6z00(unsigned char);
BGL_EXPORTED_DECL unsigned char BGl_integerzd2ze3charzd2urze3zz__r4_characters_6_6z00(long);
static obj_t BGl_z62charzd2cizc3zd3zf3z53zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__r4_characters_6_6z00 = BUNSPEC;
BGL_EXPORTED_DECL unsigned char BGl_charzd2upcasezd2zz__r4_characters_6_6z00(unsigned char);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62charzc3zf3z52zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62charzd2notzb0zz__r4_characters_6_6z00(obj_t, obj_t);
static obj_t BGl_z62charzd2alphabeticzf3z43zz__r4_characters_6_6z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL bool_t BGl_charzd2cize3zd3zf3z11zz__r4_characters_6_6z00(unsigned char, unsigned char);
static obj_t BGl_z62charzd3zf3z42zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62charzd2cizc3zf3z80zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62charze3zf3z72zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62charzd2ze3integerz53zz__r4_characters_6_6z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_charzd2upperzd2casezf3zf3zz__r4_characters_6_6z00(unsigned char);
static obj_t BGl_z62charzd2numericzf3z43zz__r4_characters_6_6z00(obj_t, obj_t);
static obj_t BGl_z62charzd2downcasezb0zz__r4_characters_6_6z00(obj_t, obj_t);
static obj_t BGl_z62charzd2cize3zd3zf3z73zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62charzd2cizd3zf3z90zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL unsigned char BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long);
static obj_t BGl_gczd2rootszd2initz00zz__r4_characters_6_6z00();
BGL_EXPORTED_DECL bool_t BGl_charzc3zd3zf3ze3zz__r4_characters_6_6z00(unsigned char, unsigned char);
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_characters_6_6z00();
static obj_t BGl_z62charzd2cize3zf3za0zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62charzc3zd3zf3z81zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62charzd2andzb0zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62integerzd2ze3charzd2urz81zz__r4_characters_6_6z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_charzf3zf3zz__r4_characters_6_6z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_charzd2whitespacezf3z21zz__r4_characters_6_6z00(unsigned char);
BGL_EXPORTED_DECL bool_t BGl_charzd2cizc3zf3ze2zz__r4_characters_6_6z00(unsigned char, unsigned char);
BGL_EXPORTED_DECL bool_t BGl_charzc3zf3z30zz__r4_characters_6_6z00(unsigned char, unsigned char);
BGL_EXPORTED_DECL bool_t BGl_charzd2cizd3zf3zf2zz__r4_characters_6_6z00(unsigned char, unsigned char);
BGL_EXPORTED_DECL bool_t BGl_charzd3zf3z20zz__r4_characters_6_6z00(unsigned char, unsigned char);
static obj_t BGl_z62integerzd2ze3charz53zz__r4_characters_6_6z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_charzd2lowerzd2casezf3zf3zz__r4_characters_6_6z00(unsigned char);
BGL_EXPORTED_DECL bool_t BGl_charzd2cize3zf3zc2zz__r4_characters_6_6z00(unsigned char, unsigned char);
static obj_t BGl_z62charzd2upcasezb0zz__r4_characters_6_6z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_charze3zd3zf3zc3zz__r4_characters_6_6z00(unsigned char, unsigned char);
BGL_EXPORTED_DECL bool_t BGl_charze3zf3z10zz__r4_characters_6_6z00(unsigned char, unsigned char);
static obj_t BGl_z62charze3zd3zf3za1zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62charzd2upperzd2casezf3z91zz__r4_characters_6_6z00(obj_t, obj_t);
static obj_t BGl_z62charzf3z91zz__r4_characters_6_6z00(obj_t, obj_t);
BGL_EXPORTED_DECL unsigned char BGl_charzd2notzd2zz__r4_characters_6_6z00(unsigned char);
BGL_EXPORTED_DECL bool_t BGl_charzd2alphabeticzf3z21zz__r4_characters_6_6z00(unsigned char);
BGL_EXPORTED_DECL unsigned char BGl_charzd2orzd2zz__r4_characters_6_6z00(unsigned char, unsigned char);
static obj_t BGl_z62charzd2orzb0zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62charzd2whitespacezf3z43zz__r4_characters_6_6z00(obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_charzd2cizc3zd3zf3z31zz__r4_characters_6_6z00(unsigned char, unsigned char);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2upperzd2casezf3zd2envz21zz__r4_characters_6_6z00, BgL_bgl_za762charza7d2upperza71548za7, BGl_z62charzd2upperzd2casezf3z91zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd3zf3zd2envzf2zz__r4_characters_6_6z00, BgL_bgl_za762charza7d3za7f3za7421549z00, BGl_z62charzd3zf3z42zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_integerzd2ze3charzd2envze3zz__r4_characters_6_6z00, BgL_bgl_za762integerza7d2za7e31550za7, BGl_z62integerzd2ze3charz53zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2upcasezd2envz00zz__r4_characters_6_6z00, BgL_bgl_za762charza7d2upcase1551z00, BGl_z62charzd2upcasezb0zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2whitespacezf3zd2envzf3zz__r4_characters_6_6z00, BgL_bgl_za762charza7d2whites1552z00, BGl_z62charzd2whitespacezf3z43zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2numericzf3zd2envzf3zz__r4_characters_6_6z00, BgL_bgl_za762charza7d2numeri1553z00, BGl_z62charzd2numericzf3z43zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1519z00zz__r4_characters_6_6z00, BgL_bgl_string1519za700za7za7_1554za7, "/tmp/4.4a/runtime/Ieee/char.scm", 31 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2cizd3zf3zd2envz20zz__r4_characters_6_6z00, BgL_bgl_za762charza7d2ciza7d3za71555z00, BGl_z62charzd2cizd3zf3z90zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1520z00zz__r4_characters_6_6z00, BgL_bgl_string1520za700za7za7_1556za7, "&char=?", 7 );
DEFINE_STRING( BGl_string1521z00zz__r4_characters_6_6z00, BgL_bgl_string1521za700za7za7_1557za7, "bchar", 5 );
DEFINE_STRING( BGl_string1522z00zz__r4_characters_6_6z00, BgL_bgl_string1522za700za7za7_1558za7, "&char<?", 7 );
DEFINE_STRING( BGl_string1523z00zz__r4_characters_6_6z00, BgL_bgl_string1523za700za7za7_1559za7, "&char>?", 7 );
DEFINE_STRING( BGl_string1524z00zz__r4_characters_6_6z00, BgL_bgl_string1524za700za7za7_1560za7, "&char<=?", 8 );
DEFINE_STRING( BGl_string1525z00zz__r4_characters_6_6z00, BgL_bgl_string1525za700za7za7_1561za7, "&char>=?", 8 );
DEFINE_STRING( BGl_string1526z00zz__r4_characters_6_6z00, BgL_bgl_string1526za700za7za7_1562za7, "&char-ci=?", 10 );
DEFINE_STRING( BGl_string1527z00zz__r4_characters_6_6z00, BgL_bgl_string1527za700za7za7_1563za7, "&char-ci<?", 10 );
DEFINE_STRING( BGl_string1528z00zz__r4_characters_6_6z00, BgL_bgl_string1528za700za7za7_1564za7, "&char-ci>?", 10 );
DEFINE_STRING( BGl_string1529z00zz__r4_characters_6_6z00, BgL_bgl_string1529za700za7za7_1565za7, "&char-ci<=?", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charze3zf3zd2envzc2zz__r4_characters_6_6z00, BgL_bgl_za762charza7e3za7f3za7721566z00, BGl_z62charze3zf3z72zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1530z00zz__r4_characters_6_6z00, BgL_bgl_string1530za700za7za7_1567za7, "&char-ci>=?", 11 );
DEFINE_STRING( BGl_string1531z00zz__r4_characters_6_6z00, BgL_bgl_string1531za700za7za7_1568za7, "&char-alphabetic?", 17 );
DEFINE_STRING( BGl_string1532z00zz__r4_characters_6_6z00, BgL_bgl_string1532za700za7za7_1569za7, "&char-numeric?", 14 );
DEFINE_STRING( BGl_string1533z00zz__r4_characters_6_6z00, BgL_bgl_string1533za700za7za7_1570za7, "&char-whitespace?", 17 );
DEFINE_STRING( BGl_string1534z00zz__r4_characters_6_6z00, BgL_bgl_string1534za700za7za7_1571za7, "&char-upper-case?", 17 );
DEFINE_STRING( BGl_string1535z00zz__r4_characters_6_6z00, BgL_bgl_string1535za700za7za7_1572za7, "&char-lower-case?", 17 );
DEFINE_STRING( BGl_string1536z00zz__r4_characters_6_6z00, BgL_bgl_string1536za700za7za7_1573za7, "&char->integer", 14 );
DEFINE_STRING( BGl_string1537z00zz__r4_characters_6_6z00, BgL_bgl_string1537za700za7za7_1574za7, "integer->char", 13 );
DEFINE_STRING( BGl_string1538z00zz__r4_characters_6_6z00, BgL_bgl_string1538za700za7za7_1575za7, "integer out of range", 20 );
DEFINE_STRING( BGl_string1539z00zz__r4_characters_6_6z00, BgL_bgl_string1539za700za7za7_1576za7, "&integer->char", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2cize3zd3zf3zd2envzc3zz__r4_characters_6_6z00, BgL_bgl_za762charza7d2ciza7e3za71577z00, BGl_z62charzd2cize3zd3zf3z73zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1540z00zz__r4_characters_6_6z00, BgL_bgl_string1540za700za7za7_1578za7, "bint", 4 );
DEFINE_STRING( BGl_string1541z00zz__r4_characters_6_6z00, BgL_bgl_string1541za700za7za7_1579za7, "&integer->char-ur", 17 );
DEFINE_STRING( BGl_string1542z00zz__r4_characters_6_6z00, BgL_bgl_string1542za700za7za7_1580za7, "&char-upcase", 12 );
DEFINE_STRING( BGl_string1543z00zz__r4_characters_6_6z00, BgL_bgl_string1543za700za7za7_1581za7, "&char-downcase", 14 );
DEFINE_STRING( BGl_string1544z00zz__r4_characters_6_6z00, BgL_bgl_string1544za700za7za7_1582za7, "&char-or", 8 );
DEFINE_STRING( BGl_string1545z00zz__r4_characters_6_6z00, BgL_bgl_string1545za700za7za7_1583za7, "&char-and", 9 );
DEFINE_STRING( BGl_string1546z00zz__r4_characters_6_6z00, BgL_bgl_string1546za700za7za7_1584za7, "&char-not", 9 );
DEFINE_STRING( BGl_string1547z00zz__r4_characters_6_6z00, BgL_bgl_string1547za700za7za7_1585za7, "__r4_characters_6_6", 19 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2andzd2envz00zz__r4_characters_6_6z00, BgL_bgl_za762charza7d2andza7b01586za7, BGl_z62charzd2andzb0zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2alphabeticzf3zd2envzf3zz__r4_characters_6_6z00, BgL_bgl_za762charza7d2alphab1587z00, BGl_z62charzd2alphabeticzf3z43zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2lowerzd2casezf3zd2envz21zz__r4_characters_6_6z00, BgL_bgl_za762charza7d2lowerza71588za7, BGl_z62charzd2lowerzd2casezf3z91zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2cize3zf3zd2envz10zz__r4_characters_6_6z00, BgL_bgl_za762charza7d2ciza7e3za71589z00, BGl_z62charzd2cize3zf3za0zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charze3zd3zf3zd2envz11zz__r4_characters_6_6z00, BgL_bgl_za762charza7e3za7d3za7f31590z00, BGl_z62charze3zd3zf3za1zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2cizc3zd3zf3zd2envze3zz__r4_characters_6_6z00, BgL_bgl_za762charza7d2ciza7c3za71591z00, BGl_z62charzd2cizc3zd3zf3z53zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzf3zd2envz21zz__r4_characters_6_6z00, BgL_bgl_za762charza7f3za791za7za7_1592za7, BGl_z62charzf3z91zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzc3zf3zd2envze2zz__r4_characters_6_6z00, BgL_bgl_za762charza7c3za7f3za7521593z00, BGl_z62charzc3zf3z52zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2notzd2envz00zz__r4_characters_6_6z00, BgL_bgl_za762charza7d2notza7b01594za7, BGl_z62charzd2notzb0zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2ze3integerzd2envze3zz__r4_characters_6_6z00, BgL_bgl_za762charza7d2za7e3int1595za7, BGl_z62charzd2ze3integerz53zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2downcasezd2envz00zz__r4_characters_6_6z00, BgL_bgl_za762charza7d2downca1596z00, BGl_z62charzd2downcasezb0zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2orzd2envz00zz__r4_characters_6_6z00, BgL_bgl_za762charza7d2orza7b0za71597z00, BGl_z62charzd2orzb0zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_integerzd2ze3charzd2urzd2envz31zz__r4_characters_6_6z00, BgL_bgl_za762integerza7d2za7e31598za7, BGl_z62integerzd2ze3charzd2urz81zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzc3zd3zf3zd2envz31zz__r4_characters_6_6z00, BgL_bgl_za762charza7c3za7d3za7f31599z00, BGl_z62charzc3zd3zf3z81zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2cizc3zf3zd2envz30zz__r4_characters_6_6z00, BgL_bgl_za762charza7d2ciza7c3za71600z00, BGl_z62charzd2cizc3zf3z80zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__r4_characters_6_6z00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long BgL_checksumz00_1224, char * BgL_fromz00_1225)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_characters_6_6z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_characters_6_6z00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__r4_characters_6_6z00(); 
return 
BGl_importedzd2moduleszd2initz00zz__r4_characters_6_6z00();}  else 
{ 
return BUNSPEC;} } 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__r4_characters_6_6z00()
{
{ /* Ieee/char.scm 14 */
return 
bgl_gc_roots_register();} 

}



/* char? */
BGL_EXPORTED_DEF bool_t BGl_charzf3zf3zz__r4_characters_6_6z00(obj_t BgL_objz00_3)
{
{ /* Ieee/char.scm 131 */
return 
CHARP(BgL_objz00_3);} 

}



/* &char? */
obj_t BGl_z62charzf3z91zz__r4_characters_6_6z00(obj_t BgL_envz00_1092, obj_t BgL_objz00_1093)
{
{ /* Ieee/char.scm 131 */
return 
BBOOL(
BGl_charzf3zf3zz__r4_characters_6_6z00(BgL_objz00_1093));} 

}



/* char=? */
BGL_EXPORTED_DEF bool_t BGl_charzd3zf3z20zz__r4_characters_6_6z00(unsigned char BgL_char1z00_4, unsigned char BgL_char2z00_5)
{
{ /* Ieee/char.scm 137 */
return 
(BgL_char1z00_4==BgL_char2z00_5);} 

}



/* &char=? */
obj_t BGl_z62charzd3zf3z42zz__r4_characters_6_6z00(obj_t BgL_envz00_1094, obj_t BgL_char1z00_1095, obj_t BgL_char2z00_1096)
{
{ /* Ieee/char.scm 137 */
{ /* Ieee/char.scm 138 */
bool_t BgL_tmpz00_1236;
{ /* Ieee/char.scm 138 */
unsigned char BgL_auxz00_1246;unsigned char BgL_auxz00_1237;
{ /* Ieee/char.scm 138 */
obj_t BgL_tmpz00_1247;
if(
CHARP(BgL_char2z00_1096))
{ /* Ieee/char.scm 138 */
BgL_tmpz00_1247 = BgL_char2z00_1096
; }  else 
{ 
obj_t BgL_auxz00_1250;
BgL_auxz00_1250 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)6542)), BGl_string1520z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char2z00_1096); 
FAILURE(BgL_auxz00_1250,BFALSE,BFALSE);} 
BgL_auxz00_1246 = 
CCHAR(BgL_tmpz00_1247); } 
{ /* Ieee/char.scm 138 */
obj_t BgL_tmpz00_1238;
if(
CHARP(BgL_char1z00_1095))
{ /* Ieee/char.scm 138 */
BgL_tmpz00_1238 = BgL_char1z00_1095
; }  else 
{ 
obj_t BgL_auxz00_1241;
BgL_auxz00_1241 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)6542)), BGl_string1520z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char1z00_1095); 
FAILURE(BgL_auxz00_1241,BFALSE,BFALSE);} 
BgL_auxz00_1237 = 
CCHAR(BgL_tmpz00_1238); } 
BgL_tmpz00_1236 = 
BGl_charzd3zf3z20zz__r4_characters_6_6z00(BgL_auxz00_1237, BgL_auxz00_1246); } 
return 
BBOOL(BgL_tmpz00_1236);} } 

}



/* char<? */
BGL_EXPORTED_DEF bool_t BGl_charzc3zf3z30zz__r4_characters_6_6z00(unsigned char BgL_char1z00_6, unsigned char BgL_char2z00_7)
{
{ /* Ieee/char.scm 143 */
return 
(BgL_char1z00_6<BgL_char2z00_7);} 

}



/* &char<? */
obj_t BGl_z62charzc3zf3z52zz__r4_characters_6_6z00(obj_t BgL_envz00_1097, obj_t BgL_char1z00_1098, obj_t BgL_char2z00_1099)
{
{ /* Ieee/char.scm 143 */
{ /* Ieee/char.scm 144 */
bool_t BgL_tmpz00_1258;
{ /* Ieee/char.scm 144 */
unsigned char BgL_auxz00_1268;unsigned char BgL_auxz00_1259;
{ /* Ieee/char.scm 144 */
obj_t BgL_tmpz00_1269;
if(
CHARP(BgL_char2z00_1099))
{ /* Ieee/char.scm 144 */
BgL_tmpz00_1269 = BgL_char2z00_1099
; }  else 
{ 
obj_t BgL_auxz00_1272;
BgL_auxz00_1272 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)6828)), BGl_string1522z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char2z00_1099); 
FAILURE(BgL_auxz00_1272,BFALSE,BFALSE);} 
BgL_auxz00_1268 = 
CCHAR(BgL_tmpz00_1269); } 
{ /* Ieee/char.scm 144 */
obj_t BgL_tmpz00_1260;
if(
CHARP(BgL_char1z00_1098))
{ /* Ieee/char.scm 144 */
BgL_tmpz00_1260 = BgL_char1z00_1098
; }  else 
{ 
obj_t BgL_auxz00_1263;
BgL_auxz00_1263 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)6828)), BGl_string1522z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char1z00_1098); 
FAILURE(BgL_auxz00_1263,BFALSE,BFALSE);} 
BgL_auxz00_1259 = 
CCHAR(BgL_tmpz00_1260); } 
BgL_tmpz00_1258 = 
BGl_charzc3zf3z30zz__r4_characters_6_6z00(BgL_auxz00_1259, BgL_auxz00_1268); } 
return 
BBOOL(BgL_tmpz00_1258);} } 

}



/* char>? */
BGL_EXPORTED_DEF bool_t BGl_charze3zf3z10zz__r4_characters_6_6z00(unsigned char BgL_char1z00_8, unsigned char BgL_char2z00_9)
{
{ /* Ieee/char.scm 149 */
return 
(BgL_char1z00_8>BgL_char2z00_9);} 

}



/* &char>? */
obj_t BGl_z62charze3zf3z72zz__r4_characters_6_6z00(obj_t BgL_envz00_1100, obj_t BgL_char1z00_1101, obj_t BgL_char2z00_1102)
{
{ /* Ieee/char.scm 149 */
{ /* Ieee/char.scm 150 */
bool_t BgL_tmpz00_1280;
{ /* Ieee/char.scm 150 */
unsigned char BgL_auxz00_1290;unsigned char BgL_auxz00_1281;
{ /* Ieee/char.scm 150 */
obj_t BgL_tmpz00_1291;
if(
CHARP(BgL_char2z00_1102))
{ /* Ieee/char.scm 150 */
BgL_tmpz00_1291 = BgL_char2z00_1102
; }  else 
{ 
obj_t BgL_auxz00_1294;
BgL_auxz00_1294 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)7115)), BGl_string1523z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char2z00_1102); 
FAILURE(BgL_auxz00_1294,BFALSE,BFALSE);} 
BgL_auxz00_1290 = 
CCHAR(BgL_tmpz00_1291); } 
{ /* Ieee/char.scm 150 */
obj_t BgL_tmpz00_1282;
if(
CHARP(BgL_char1z00_1101))
{ /* Ieee/char.scm 150 */
BgL_tmpz00_1282 = BgL_char1z00_1101
; }  else 
{ 
obj_t BgL_auxz00_1285;
BgL_auxz00_1285 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)7115)), BGl_string1523z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char1z00_1101); 
FAILURE(BgL_auxz00_1285,BFALSE,BFALSE);} 
BgL_auxz00_1281 = 
CCHAR(BgL_tmpz00_1282); } 
BgL_tmpz00_1280 = 
BGl_charze3zf3z10zz__r4_characters_6_6z00(BgL_auxz00_1281, BgL_auxz00_1290); } 
return 
BBOOL(BgL_tmpz00_1280);} } 

}



/* char<=? */
BGL_EXPORTED_DEF bool_t BGl_charzc3zd3zf3ze3zz__r4_characters_6_6z00(unsigned char BgL_char1z00_10, unsigned char BgL_char2z00_11)
{
{ /* Ieee/char.scm 155 */
return 
(BgL_char1z00_10<=BgL_char2z00_11);} 

}



/* &char<=? */
obj_t BGl_z62charzc3zd3zf3z81zz__r4_characters_6_6z00(obj_t BgL_envz00_1103, obj_t BgL_char1z00_1104, obj_t BgL_char2z00_1105)
{
{ /* Ieee/char.scm 155 */
{ /* Ieee/char.scm 156 */
bool_t BgL_tmpz00_1302;
{ /* Ieee/char.scm 156 */
unsigned char BgL_auxz00_1312;unsigned char BgL_auxz00_1303;
{ /* Ieee/char.scm 156 */
obj_t BgL_tmpz00_1313;
if(
CHARP(BgL_char2z00_1105))
{ /* Ieee/char.scm 156 */
BgL_tmpz00_1313 = BgL_char2z00_1105
; }  else 
{ 
obj_t BgL_auxz00_1316;
BgL_auxz00_1316 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)7402)), BGl_string1524z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char2z00_1105); 
FAILURE(BgL_auxz00_1316,BFALSE,BFALSE);} 
BgL_auxz00_1312 = 
CCHAR(BgL_tmpz00_1313); } 
{ /* Ieee/char.scm 156 */
obj_t BgL_tmpz00_1304;
if(
CHARP(BgL_char1z00_1104))
{ /* Ieee/char.scm 156 */
BgL_tmpz00_1304 = BgL_char1z00_1104
; }  else 
{ 
obj_t BgL_auxz00_1307;
BgL_auxz00_1307 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)7402)), BGl_string1524z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char1z00_1104); 
FAILURE(BgL_auxz00_1307,BFALSE,BFALSE);} 
BgL_auxz00_1303 = 
CCHAR(BgL_tmpz00_1304); } 
BgL_tmpz00_1302 = 
BGl_charzc3zd3zf3ze3zz__r4_characters_6_6z00(BgL_auxz00_1303, BgL_auxz00_1312); } 
return 
BBOOL(BgL_tmpz00_1302);} } 

}



/* char>=? */
BGL_EXPORTED_DEF bool_t BGl_charze3zd3zf3zc3zz__r4_characters_6_6z00(unsigned char BgL_char1z00_12, unsigned char BgL_char2z00_13)
{
{ /* Ieee/char.scm 161 */
return 
(BgL_char1z00_12>=BgL_char2z00_13);} 

}



/* &char>=? */
obj_t BGl_z62charze3zd3zf3za1zz__r4_characters_6_6z00(obj_t BgL_envz00_1106, obj_t BgL_char1z00_1107, obj_t BgL_char2z00_1108)
{
{ /* Ieee/char.scm 161 */
{ /* Ieee/char.scm 162 */
bool_t BgL_tmpz00_1324;
{ /* Ieee/char.scm 162 */
unsigned char BgL_auxz00_1334;unsigned char BgL_auxz00_1325;
{ /* Ieee/char.scm 162 */
obj_t BgL_tmpz00_1335;
if(
CHARP(BgL_char2z00_1108))
{ /* Ieee/char.scm 162 */
BgL_tmpz00_1335 = BgL_char2z00_1108
; }  else 
{ 
obj_t BgL_auxz00_1338;
BgL_auxz00_1338 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)7690)), BGl_string1525z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char2z00_1108); 
FAILURE(BgL_auxz00_1338,BFALSE,BFALSE);} 
BgL_auxz00_1334 = 
CCHAR(BgL_tmpz00_1335); } 
{ /* Ieee/char.scm 162 */
obj_t BgL_tmpz00_1326;
if(
CHARP(BgL_char1z00_1107))
{ /* Ieee/char.scm 162 */
BgL_tmpz00_1326 = BgL_char1z00_1107
; }  else 
{ 
obj_t BgL_auxz00_1329;
BgL_auxz00_1329 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)7690)), BGl_string1525z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char1z00_1107); 
FAILURE(BgL_auxz00_1329,BFALSE,BFALSE);} 
BgL_auxz00_1325 = 
CCHAR(BgL_tmpz00_1326); } 
BgL_tmpz00_1324 = 
BGl_charze3zd3zf3zc3zz__r4_characters_6_6z00(BgL_auxz00_1325, BgL_auxz00_1334); } 
return 
BBOOL(BgL_tmpz00_1324);} } 

}



/* char-ci=? */
BGL_EXPORTED_DEF bool_t BGl_charzd2cizd3zf3zf2zz__r4_characters_6_6z00(unsigned char BgL_char1z00_14, unsigned char BgL_char2z00_15)
{
{ /* Ieee/char.scm 167 */
return 
(
toupper(BgL_char1z00_14)==
toupper(BgL_char2z00_15));} 

}



/* &char-ci=? */
obj_t BGl_z62charzd2cizd3zf3z90zz__r4_characters_6_6z00(obj_t BgL_envz00_1109, obj_t BgL_char1z00_1110, obj_t BgL_char2z00_1111)
{
{ /* Ieee/char.scm 167 */
{ /* Ieee/char.scm 168 */
bool_t BgL_tmpz00_1348;
{ /* Ieee/char.scm 168 */
unsigned char BgL_auxz00_1358;unsigned char BgL_auxz00_1349;
{ /* Ieee/char.scm 168 */
obj_t BgL_tmpz00_1359;
if(
CHARP(BgL_char2z00_1111))
{ /* Ieee/char.scm 168 */
BgL_tmpz00_1359 = BgL_char2z00_1111
; }  else 
{ 
obj_t BgL_auxz00_1362;
BgL_auxz00_1362 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)7988)), BGl_string1526z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char2z00_1111); 
FAILURE(BgL_auxz00_1362,BFALSE,BFALSE);} 
BgL_auxz00_1358 = 
CCHAR(BgL_tmpz00_1359); } 
{ /* Ieee/char.scm 168 */
obj_t BgL_tmpz00_1350;
if(
CHARP(BgL_char1z00_1110))
{ /* Ieee/char.scm 168 */
BgL_tmpz00_1350 = BgL_char1z00_1110
; }  else 
{ 
obj_t BgL_auxz00_1353;
BgL_auxz00_1353 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)7988)), BGl_string1526z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char1z00_1110); 
FAILURE(BgL_auxz00_1353,BFALSE,BFALSE);} 
BgL_auxz00_1349 = 
CCHAR(BgL_tmpz00_1350); } 
BgL_tmpz00_1348 = 
BGl_charzd2cizd3zf3zf2zz__r4_characters_6_6z00(BgL_auxz00_1349, BgL_auxz00_1358); } 
return 
BBOOL(BgL_tmpz00_1348);} } 

}



/* char-ci<? */
BGL_EXPORTED_DEF bool_t BGl_charzd2cizc3zf3ze2zz__r4_characters_6_6z00(unsigned char BgL_char1z00_16, unsigned char BgL_char2z00_17)
{
{ /* Ieee/char.scm 173 */
return 
(
toupper(BgL_char1z00_16)<
toupper(BgL_char2z00_17));} 

}



/* &char-ci<? */
obj_t BGl_z62charzd2cizc3zf3z80zz__r4_characters_6_6z00(obj_t BgL_envz00_1112, obj_t BgL_char1z00_1113, obj_t BgL_char2z00_1114)
{
{ /* Ieee/char.scm 173 */
{ /* Ieee/char.scm 174 */
bool_t BgL_tmpz00_1372;
{ /* Ieee/char.scm 174 */
unsigned char BgL_auxz00_1382;unsigned char BgL_auxz00_1373;
{ /* Ieee/char.scm 174 */
obj_t BgL_tmpz00_1383;
if(
CHARP(BgL_char2z00_1114))
{ /* Ieee/char.scm 174 */
BgL_tmpz00_1383 = BgL_char2z00_1114
; }  else 
{ 
obj_t BgL_auxz00_1386;
BgL_auxz00_1386 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)8305)), BGl_string1527z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char2z00_1114); 
FAILURE(BgL_auxz00_1386,BFALSE,BFALSE);} 
BgL_auxz00_1382 = 
CCHAR(BgL_tmpz00_1383); } 
{ /* Ieee/char.scm 174 */
obj_t BgL_tmpz00_1374;
if(
CHARP(BgL_char1z00_1113))
{ /* Ieee/char.scm 174 */
BgL_tmpz00_1374 = BgL_char1z00_1113
; }  else 
{ 
obj_t BgL_auxz00_1377;
BgL_auxz00_1377 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)8305)), BGl_string1527z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char1z00_1113); 
FAILURE(BgL_auxz00_1377,BFALSE,BFALSE);} 
BgL_auxz00_1373 = 
CCHAR(BgL_tmpz00_1374); } 
BgL_tmpz00_1372 = 
BGl_charzd2cizc3zf3ze2zz__r4_characters_6_6z00(BgL_auxz00_1373, BgL_auxz00_1382); } 
return 
BBOOL(BgL_tmpz00_1372);} } 

}



/* char-ci>? */
BGL_EXPORTED_DEF bool_t BGl_charzd2cize3zf3zc2zz__r4_characters_6_6z00(unsigned char BgL_char1z00_18, unsigned char BgL_char2z00_19)
{
{ /* Ieee/char.scm 179 */
return 
(
toupper(BgL_char1z00_18)>
toupper(BgL_char2z00_19));} 

}



/* &char-ci>? */
obj_t BGl_z62charzd2cize3zf3za0zz__r4_characters_6_6z00(obj_t BgL_envz00_1115, obj_t BgL_char1z00_1116, obj_t BgL_char2z00_1117)
{
{ /* Ieee/char.scm 179 */
{ /* Ieee/char.scm 180 */
bool_t BgL_tmpz00_1396;
{ /* Ieee/char.scm 180 */
unsigned char BgL_auxz00_1406;unsigned char BgL_auxz00_1397;
{ /* Ieee/char.scm 180 */
obj_t BgL_tmpz00_1407;
if(
CHARP(BgL_char2z00_1117))
{ /* Ieee/char.scm 180 */
BgL_tmpz00_1407 = BgL_char2z00_1117
; }  else 
{ 
obj_t BgL_auxz00_1410;
BgL_auxz00_1410 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)8624)), BGl_string1528z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char2z00_1117); 
FAILURE(BgL_auxz00_1410,BFALSE,BFALSE);} 
BgL_auxz00_1406 = 
CCHAR(BgL_tmpz00_1407); } 
{ /* Ieee/char.scm 180 */
obj_t BgL_tmpz00_1398;
if(
CHARP(BgL_char1z00_1116))
{ /* Ieee/char.scm 180 */
BgL_tmpz00_1398 = BgL_char1z00_1116
; }  else 
{ 
obj_t BgL_auxz00_1401;
BgL_auxz00_1401 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)8624)), BGl_string1528z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char1z00_1116); 
FAILURE(BgL_auxz00_1401,BFALSE,BFALSE);} 
BgL_auxz00_1397 = 
CCHAR(BgL_tmpz00_1398); } 
BgL_tmpz00_1396 = 
BGl_charzd2cize3zf3zc2zz__r4_characters_6_6z00(BgL_auxz00_1397, BgL_auxz00_1406); } 
return 
BBOOL(BgL_tmpz00_1396);} } 

}



/* char-ci<=? */
BGL_EXPORTED_DEF bool_t BGl_charzd2cizc3zd3zf3z31zz__r4_characters_6_6z00(unsigned char BgL_char1z00_20, unsigned char BgL_char2z00_21)
{
{ /* Ieee/char.scm 185 */
return 
(
toupper(BgL_char1z00_20)<=
toupper(BgL_char2z00_21));} 

}



/* &char-ci<=? */
obj_t BGl_z62charzd2cizc3zd3zf3z53zz__r4_characters_6_6z00(obj_t BgL_envz00_1118, obj_t BgL_char1z00_1119, obj_t BgL_char2z00_1120)
{
{ /* Ieee/char.scm 185 */
{ /* Ieee/char.scm 186 */
bool_t BgL_tmpz00_1420;
{ /* Ieee/char.scm 186 */
unsigned char BgL_auxz00_1430;unsigned char BgL_auxz00_1421;
{ /* Ieee/char.scm 186 */
obj_t BgL_tmpz00_1431;
if(
CHARP(BgL_char2z00_1120))
{ /* Ieee/char.scm 186 */
BgL_tmpz00_1431 = BgL_char2z00_1120
; }  else 
{ 
obj_t BgL_auxz00_1434;
BgL_auxz00_1434 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)8943)), BGl_string1529z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char2z00_1120); 
FAILURE(BgL_auxz00_1434,BFALSE,BFALSE);} 
BgL_auxz00_1430 = 
CCHAR(BgL_tmpz00_1431); } 
{ /* Ieee/char.scm 186 */
obj_t BgL_tmpz00_1422;
if(
CHARP(BgL_char1z00_1119))
{ /* Ieee/char.scm 186 */
BgL_tmpz00_1422 = BgL_char1z00_1119
; }  else 
{ 
obj_t BgL_auxz00_1425;
BgL_auxz00_1425 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)8943)), BGl_string1529z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char1z00_1119); 
FAILURE(BgL_auxz00_1425,BFALSE,BFALSE);} 
BgL_auxz00_1421 = 
CCHAR(BgL_tmpz00_1422); } 
BgL_tmpz00_1420 = 
BGl_charzd2cizc3zd3zf3z31zz__r4_characters_6_6z00(BgL_auxz00_1421, BgL_auxz00_1430); } 
return 
BBOOL(BgL_tmpz00_1420);} } 

}



/* char-ci>=? */
BGL_EXPORTED_DEF bool_t BGl_charzd2cize3zd3zf3z11zz__r4_characters_6_6z00(unsigned char BgL_char1z00_22, unsigned char BgL_char2z00_23)
{
{ /* Ieee/char.scm 191 */
return 
(
toupper(BgL_char1z00_22)>=
toupper(BgL_char2z00_23));} 

}



/* &char-ci>=? */
obj_t BGl_z62charzd2cize3zd3zf3z73zz__r4_characters_6_6z00(obj_t BgL_envz00_1121, obj_t BgL_char1z00_1122, obj_t BgL_char2z00_1123)
{
{ /* Ieee/char.scm 191 */
{ /* Ieee/char.scm 192 */
bool_t BgL_tmpz00_1444;
{ /* Ieee/char.scm 192 */
unsigned char BgL_auxz00_1454;unsigned char BgL_auxz00_1445;
{ /* Ieee/char.scm 192 */
obj_t BgL_tmpz00_1455;
if(
CHARP(BgL_char2z00_1123))
{ /* Ieee/char.scm 192 */
BgL_tmpz00_1455 = BgL_char2z00_1123
; }  else 
{ 
obj_t BgL_auxz00_1458;
BgL_auxz00_1458 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)9262)), BGl_string1530z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char2z00_1123); 
FAILURE(BgL_auxz00_1458,BFALSE,BFALSE);} 
BgL_auxz00_1454 = 
CCHAR(BgL_tmpz00_1455); } 
{ /* Ieee/char.scm 192 */
obj_t BgL_tmpz00_1446;
if(
CHARP(BgL_char1z00_1122))
{ /* Ieee/char.scm 192 */
BgL_tmpz00_1446 = BgL_char1z00_1122
; }  else 
{ 
obj_t BgL_auxz00_1449;
BgL_auxz00_1449 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)9262)), BGl_string1530z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char1z00_1122); 
FAILURE(BgL_auxz00_1449,BFALSE,BFALSE);} 
BgL_auxz00_1445 = 
CCHAR(BgL_tmpz00_1446); } 
BgL_tmpz00_1444 = 
BGl_charzd2cize3zd3zf3z11zz__r4_characters_6_6z00(BgL_auxz00_1445, BgL_auxz00_1454); } 
return 
BBOOL(BgL_tmpz00_1444);} } 

}



/* char-alphabetic? */
BGL_EXPORTED_DEF bool_t BGl_charzd2alphabeticzf3z21zz__r4_characters_6_6z00(unsigned char BgL_charz00_24)
{
{ /* Ieee/char.scm 197 */
return 
isalpha(BgL_charz00_24);} 

}



/* &char-alphabetic? */
obj_t BGl_z62charzd2alphabeticzf3z43zz__r4_characters_6_6z00(obj_t BgL_envz00_1124, obj_t BgL_charz00_1125)
{
{ /* Ieee/char.scm 197 */
{ /* Ieee/char.scm 199 */
bool_t BgL_tmpz00_1466;
{ /* Ieee/char.scm 199 */
unsigned char BgL_auxz00_1467;
{ /* Ieee/char.scm 199 */
obj_t BgL_tmpz00_1468;
if(
CHARP(BgL_charz00_1125))
{ /* Ieee/char.scm 199 */
BgL_tmpz00_1468 = BgL_charz00_1125
; }  else 
{ 
obj_t BgL_auxz00_1471;
BgL_auxz00_1471 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)9598)), BGl_string1531z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_charz00_1125); 
FAILURE(BgL_auxz00_1471,BFALSE,BFALSE);} 
BgL_auxz00_1467 = 
CCHAR(BgL_tmpz00_1468); } 
BgL_tmpz00_1466 = 
BGl_charzd2alphabeticzf3z21zz__r4_characters_6_6z00(BgL_auxz00_1467); } 
return 
BBOOL(BgL_tmpz00_1466);} } 

}



/* char-numeric? */
BGL_EXPORTED_DEF bool_t BGl_charzd2numericzf3z21zz__r4_characters_6_6z00(unsigned char BgL_charz00_25)
{
{ /* Ieee/char.scm 208 */
return 
isdigit(BgL_charz00_25);} 

}



/* &char-numeric? */
obj_t BGl_z62charzd2numericzf3z43zz__r4_characters_6_6z00(obj_t BgL_envz00_1126, obj_t BgL_charz00_1127)
{
{ /* Ieee/char.scm 208 */
{ /* Ieee/char.scm 210 */
bool_t BgL_tmpz00_1479;
{ /* Ieee/char.scm 210 */
unsigned char BgL_auxz00_1480;
{ /* Ieee/char.scm 210 */
obj_t BgL_tmpz00_1481;
if(
CHARP(BgL_charz00_1127))
{ /* Ieee/char.scm 210 */
BgL_tmpz00_1481 = BgL_charz00_1127
; }  else 
{ 
obj_t BgL_auxz00_1484;
BgL_auxz00_1484 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)10040)), BGl_string1532z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_charz00_1127); 
FAILURE(BgL_auxz00_1484,BFALSE,BFALSE);} 
BgL_auxz00_1480 = 
CCHAR(BgL_tmpz00_1481); } 
BgL_tmpz00_1479 = 
BGl_charzd2numericzf3z21zz__r4_characters_6_6z00(BgL_auxz00_1480); } 
return 
BBOOL(BgL_tmpz00_1479);} } 

}



/* char-whitespace? */
BGL_EXPORTED_DEF bool_t BGl_charzd2whitespacezf3z21zz__r4_characters_6_6z00(unsigned char BgL_charz00_26)
{
{ /* Ieee/char.scm 218 */
return 
isspace(BgL_charz00_26);} 

}



/* &char-whitespace? */
obj_t BGl_z62charzd2whitespacezf3z43zz__r4_characters_6_6z00(obj_t BgL_envz00_1128, obj_t BgL_charz00_1129)
{
{ /* Ieee/char.scm 218 */
{ /* Ieee/char.scm 220 */
bool_t BgL_tmpz00_1492;
{ /* Ieee/char.scm 220 */
unsigned char BgL_auxz00_1493;
{ /* Ieee/char.scm 220 */
obj_t BgL_tmpz00_1494;
if(
CHARP(BgL_charz00_1129))
{ /* Ieee/char.scm 220 */
BgL_tmpz00_1494 = BgL_charz00_1129
; }  else 
{ 
obj_t BgL_auxz00_1497;
BgL_auxz00_1497 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)10423)), BGl_string1533z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_charz00_1129); 
FAILURE(BgL_auxz00_1497,BFALSE,BFALSE);} 
BgL_auxz00_1493 = 
CCHAR(BgL_tmpz00_1494); } 
BgL_tmpz00_1492 = 
BGl_charzd2whitespacezf3z21zz__r4_characters_6_6z00(BgL_auxz00_1493); } 
return 
BBOOL(BgL_tmpz00_1492);} } 

}



/* char-upper-case? */
BGL_EXPORTED_DEF bool_t BGl_charzd2upperzd2casezf3zf3zz__r4_characters_6_6z00(unsigned char BgL_charz00_27)
{
{ /* Ieee/char.scm 229 */
return 
isupper(BgL_charz00_27);} 

}



/* &char-upper-case? */
obj_t BGl_z62charzd2upperzd2casezf3z91zz__r4_characters_6_6z00(obj_t BgL_envz00_1130, obj_t BgL_charz00_1131)
{
{ /* Ieee/char.scm 229 */
{ /* Ieee/char.scm 231 */
bool_t BgL_tmpz00_1505;
{ /* Ieee/char.scm 231 */
unsigned char BgL_auxz00_1506;
{ /* Ieee/char.scm 231 */
obj_t BgL_tmpz00_1507;
if(
CHARP(BgL_charz00_1131))
{ /* Ieee/char.scm 231 */
BgL_tmpz00_1507 = BgL_charz00_1131
; }  else 
{ 
obj_t BgL_auxz00_1510;
BgL_auxz00_1510 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)10859)), BGl_string1534z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_charz00_1131); 
FAILURE(BgL_auxz00_1510,BFALSE,BFALSE);} 
BgL_auxz00_1506 = 
CCHAR(BgL_tmpz00_1507); } 
BgL_tmpz00_1505 = 
BGl_charzd2upperzd2casezf3zf3zz__r4_characters_6_6z00(BgL_auxz00_1506); } 
return 
BBOOL(BgL_tmpz00_1505);} } 

}



/* char-lower-case? */
BGL_EXPORTED_DEF bool_t BGl_charzd2lowerzd2casezf3zf3zz__r4_characters_6_6z00(unsigned char BgL_charz00_28)
{
{ /* Ieee/char.scm 239 */
return 
islower(BgL_charz00_28);} 

}



/* &char-lower-case? */
obj_t BGl_z62charzd2lowerzd2casezf3z91zz__r4_characters_6_6z00(obj_t BgL_envz00_1132, obj_t BgL_charz00_1133)
{
{ /* Ieee/char.scm 239 */
{ /* Ieee/char.scm 241 */
bool_t BgL_tmpz00_1518;
{ /* Ieee/char.scm 241 */
unsigned char BgL_auxz00_1519;
{ /* Ieee/char.scm 241 */
obj_t BgL_tmpz00_1520;
if(
CHARP(BgL_charz00_1133))
{ /* Ieee/char.scm 241 */
BgL_tmpz00_1520 = BgL_charz00_1133
; }  else 
{ 
obj_t BgL_auxz00_1523;
BgL_auxz00_1523 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)11245)), BGl_string1535z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_charz00_1133); 
FAILURE(BgL_auxz00_1523,BFALSE,BFALSE);} 
BgL_auxz00_1519 = 
CCHAR(BgL_tmpz00_1520); } 
BgL_tmpz00_1518 = 
BGl_charzd2lowerzd2casezf3zf3zz__r4_characters_6_6z00(BgL_auxz00_1519); } 
return 
BBOOL(BgL_tmpz00_1518);} } 

}



/* char->integer */
BGL_EXPORTED_DEF long BGl_charzd2ze3integerz31zz__r4_characters_6_6z00(unsigned char BgL_charz00_29)
{
{ /* Ieee/char.scm 249 */
return 
(BgL_charz00_29);} 

}



/* &char->integer */
obj_t BGl_z62charzd2ze3integerz53zz__r4_characters_6_6z00(obj_t BgL_envz00_1134, obj_t BgL_charz00_1135)
{
{ /* Ieee/char.scm 249 */
{ /* Ieee/char.scm 250 */
long BgL_tmpz00_1531;
{ /* Ieee/char.scm 250 */
unsigned char BgL_auxz00_1532;
{ /* Ieee/char.scm 250 */
obj_t BgL_tmpz00_1533;
if(
CHARP(BgL_charz00_1135))
{ /* Ieee/char.scm 250 */
BgL_tmpz00_1533 = BgL_charz00_1135
; }  else 
{ 
obj_t BgL_auxz00_1536;
BgL_auxz00_1536 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)11599)), BGl_string1536z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_charz00_1135); 
FAILURE(BgL_auxz00_1536,BFALSE,BFALSE);} 
BgL_auxz00_1532 = 
CCHAR(BgL_tmpz00_1533); } 
BgL_tmpz00_1531 = 
BGl_charzd2ze3integerz31zz__r4_characters_6_6z00(BgL_auxz00_1532); } 
return 
BINT(BgL_tmpz00_1531);} } 

}



/* integer->char */
BGL_EXPORTED_DEF unsigned char BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long BgL_intz00_30)
{
{ /* Ieee/char.scm 255 */
{ /* Ieee/char.scm 256 */
bool_t BgL_test1628z00_1543;
if(
(BgL_intz00_30>=((long)0)))
{ /* Ieee/char.scm 256 */
BgL_test1628z00_1543 = 
(BgL_intz00_30<=((long)255))
; }  else 
{ /* Ieee/char.scm 256 */
BgL_test1628z00_1543 = ((bool_t)0)
; } 
if(BgL_test1628z00_1543)
{ /* Ieee/char.scm 256 */
return 
(BgL_intz00_30);}  else 
{ /* Ieee/char.scm 258 */
obj_t BgL_tmpz00_1548;
{ /* Ieee/char.scm 258 */
obj_t BgL_aux1499z00_1204;
BgL_aux1499z00_1204 = 
BGl_errorz00zz__errorz00(BGl_string1537z00zz__r4_characters_6_6z00, BGl_string1538z00zz__r4_characters_6_6z00, 
BINT(BgL_intz00_30)); 
if(
CHARP(BgL_aux1499z00_1204))
{ /* Ieee/char.scm 258 */
BgL_tmpz00_1548 = BgL_aux1499z00_1204
; }  else 
{ 
obj_t BgL_auxz00_1553;
BgL_auxz00_1553 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)11951)), BGl_string1537z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_aux1499z00_1204); 
FAILURE(BgL_auxz00_1553,BFALSE,BFALSE);} } 
return 
CCHAR(BgL_tmpz00_1548);} } } 

}



/* &integer->char */
obj_t BGl_z62integerzd2ze3charz53zz__r4_characters_6_6z00(obj_t BgL_envz00_1136, obj_t BgL_intz00_1137)
{
{ /* Ieee/char.scm 255 */
{ /* Ieee/char.scm 256 */
unsigned char BgL_tmpz00_1558;
{ /* Ieee/char.scm 256 */
long BgL_auxz00_1559;
{ /* Ieee/char.scm 256 */
obj_t BgL_tmpz00_1560;
if(
INTEGERP(BgL_intz00_1137))
{ /* Ieee/char.scm 256 */
BgL_tmpz00_1560 = BgL_intz00_1137
; }  else 
{ 
obj_t BgL_auxz00_1563;
BgL_auxz00_1563 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)11877)), BGl_string1539z00zz__r4_characters_6_6z00, BGl_string1540z00zz__r4_characters_6_6z00, BgL_intz00_1137); 
FAILURE(BgL_auxz00_1563,BFALSE,BFALSE);} 
BgL_auxz00_1559 = 
(long)CINT(BgL_tmpz00_1560); } 
BgL_tmpz00_1558 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_auxz00_1559); } 
return 
BCHAR(BgL_tmpz00_1558);} } 

}



/* integer->char-ur */
BGL_EXPORTED_DEF unsigned char BGl_integerzd2ze3charzd2urze3zz__r4_characters_6_6z00(long BgL_intz00_31)
{
{ /* Ieee/char.scm 263 */
return 
(BgL_intz00_31);} 

}



/* &integer->char-ur */
obj_t BGl_z62integerzd2ze3charzd2urz81zz__r4_characters_6_6z00(obj_t BgL_envz00_1138, obj_t BgL_intz00_1139)
{
{ /* Ieee/char.scm 263 */
{ /* Ieee/char.scm 264 */
unsigned char BgL_tmpz00_1571;
{ /* Ieee/char.scm 264 */
long BgL_auxz00_1572;
{ /* Ieee/char.scm 264 */
obj_t BgL_tmpz00_1573;
if(
INTEGERP(BgL_intz00_1139))
{ /* Ieee/char.scm 264 */
BgL_tmpz00_1573 = BgL_intz00_1139
; }  else 
{ 
obj_t BgL_auxz00_1576;
BgL_auxz00_1576 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)12268)), BGl_string1541z00zz__r4_characters_6_6z00, BGl_string1540z00zz__r4_characters_6_6z00, BgL_intz00_1139); 
FAILURE(BgL_auxz00_1576,BFALSE,BFALSE);} 
BgL_auxz00_1572 = 
(long)CINT(BgL_tmpz00_1573); } 
BgL_tmpz00_1571 = 
BGl_integerzd2ze3charzd2urze3zz__r4_characters_6_6z00(BgL_auxz00_1572); } 
return 
BCHAR(BgL_tmpz00_1571);} } 

}



/* char-upcase */
BGL_EXPORTED_DEF unsigned char BGl_charzd2upcasezd2zz__r4_characters_6_6z00(unsigned char BgL_charz00_32)
{
{ /* Ieee/char.scm 269 */
return 
toupper(BgL_charz00_32);} 

}



/* &char-upcase */
obj_t BGl_z62charzd2upcasezb0zz__r4_characters_6_6z00(obj_t BgL_envz00_1140, obj_t BgL_charz00_1141)
{
{ /* Ieee/char.scm 269 */
{ /* Ieee/char.scm 270 */
unsigned char BgL_tmpz00_1584;
{ /* Ieee/char.scm 270 */
unsigned char BgL_auxz00_1585;
{ /* Ieee/char.scm 270 */
obj_t BgL_tmpz00_1586;
if(
CHARP(BgL_charz00_1141))
{ /* Ieee/char.scm 270 */
BgL_tmpz00_1586 = BgL_charz00_1141
; }  else 
{ 
obj_t BgL_auxz00_1589;
BgL_auxz00_1589 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)12552)), BGl_string1542z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_charz00_1141); 
FAILURE(BgL_auxz00_1589,BFALSE,BFALSE);} 
BgL_auxz00_1585 = 
CCHAR(BgL_tmpz00_1586); } 
BgL_tmpz00_1584 = 
BGl_charzd2upcasezd2zz__r4_characters_6_6z00(BgL_auxz00_1585); } 
return 
BCHAR(BgL_tmpz00_1584);} } 

}



/* char-downcase */
BGL_EXPORTED_DEF unsigned char BGl_charzd2downcasezd2zz__r4_characters_6_6z00(unsigned char BgL_charz00_33)
{
{ /* Ieee/char.scm 275 */
return 
tolower(BgL_charz00_33);} 

}



/* &char-downcase */
obj_t BGl_z62charzd2downcasezb0zz__r4_characters_6_6z00(obj_t BgL_envz00_1142, obj_t BgL_charz00_1143)
{
{ /* Ieee/char.scm 275 */
{ /* Ieee/char.scm 276 */
unsigned char BgL_tmpz00_1597;
{ /* Ieee/char.scm 276 */
unsigned char BgL_auxz00_1598;
{ /* Ieee/char.scm 276 */
obj_t BgL_tmpz00_1599;
if(
CHARP(BgL_charz00_1143))
{ /* Ieee/char.scm 276 */
BgL_tmpz00_1599 = BgL_charz00_1143
; }  else 
{ 
obj_t BgL_auxz00_1602;
BgL_auxz00_1602 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)12837)), BGl_string1543z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_charz00_1143); 
FAILURE(BgL_auxz00_1602,BFALSE,BFALSE);} 
BgL_auxz00_1598 = 
CCHAR(BgL_tmpz00_1599); } 
BgL_tmpz00_1597 = 
BGl_charzd2downcasezd2zz__r4_characters_6_6z00(BgL_auxz00_1598); } 
return 
BCHAR(BgL_tmpz00_1597);} } 

}



/* char-or */
BGL_EXPORTED_DEF unsigned char BGl_charzd2orzd2zz__r4_characters_6_6z00(unsigned char BgL_char1z00_34, unsigned char BgL_char2z00_35)
{
{ /* Ieee/char.scm 281 */
return 
(BgL_char1z00_34|BgL_char2z00_35);} 

}



/* &char-or */
obj_t BGl_z62charzd2orzb0zz__r4_characters_6_6z00(obj_t BgL_envz00_1144, obj_t BgL_char1z00_1145, obj_t BgL_char2z00_1146)
{
{ /* Ieee/char.scm 281 */
{ /* Ieee/char.scm 282 */
unsigned char BgL_tmpz00_1610;
{ /* Ieee/char.scm 282 */
unsigned char BgL_auxz00_1620;unsigned char BgL_auxz00_1611;
{ /* Ieee/char.scm 282 */
obj_t BgL_tmpz00_1621;
if(
CHARP(BgL_char2z00_1146))
{ /* Ieee/char.scm 282 */
BgL_tmpz00_1621 = BgL_char2z00_1146
; }  else 
{ 
obj_t BgL_auxz00_1624;
BgL_auxz00_1624 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)13131)), BGl_string1544z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char2z00_1146); 
FAILURE(BgL_auxz00_1624,BFALSE,BFALSE);} 
BgL_auxz00_1620 = 
CCHAR(BgL_tmpz00_1621); } 
{ /* Ieee/char.scm 282 */
obj_t BgL_tmpz00_1612;
if(
CHARP(BgL_char1z00_1145))
{ /* Ieee/char.scm 282 */
BgL_tmpz00_1612 = BgL_char1z00_1145
; }  else 
{ 
obj_t BgL_auxz00_1615;
BgL_auxz00_1615 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)13131)), BGl_string1544z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char1z00_1145); 
FAILURE(BgL_auxz00_1615,BFALSE,BFALSE);} 
BgL_auxz00_1611 = 
CCHAR(BgL_tmpz00_1612); } 
BgL_tmpz00_1610 = 
BGl_charzd2orzd2zz__r4_characters_6_6z00(BgL_auxz00_1611, BgL_auxz00_1620); } 
return 
BCHAR(BgL_tmpz00_1610);} } 

}



/* char-and */
BGL_EXPORTED_DEF unsigned char BGl_charzd2andzd2zz__r4_characters_6_6z00(unsigned char BgL_char1z00_36, unsigned char BgL_char2z00_37)
{
{ /* Ieee/char.scm 287 */
return 
(BgL_char1z00_36&BgL_char2z00_37);} 

}



/* &char-and */
obj_t BGl_z62charzd2andzb0zz__r4_characters_6_6z00(obj_t BgL_envz00_1147, obj_t BgL_char1z00_1148, obj_t BgL_char2z00_1149)
{
{ /* Ieee/char.scm 287 */
{ /* Ieee/char.scm 288 */
unsigned char BgL_tmpz00_1632;
{ /* Ieee/char.scm 288 */
unsigned char BgL_auxz00_1642;unsigned char BgL_auxz00_1633;
{ /* Ieee/char.scm 288 */
obj_t BgL_tmpz00_1643;
if(
CHARP(BgL_char2z00_1149))
{ /* Ieee/char.scm 288 */
BgL_tmpz00_1643 = BgL_char2z00_1149
; }  else 
{ 
obj_t BgL_auxz00_1646;
BgL_auxz00_1646 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)13420)), BGl_string1545z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char2z00_1149); 
FAILURE(BgL_auxz00_1646,BFALSE,BFALSE);} 
BgL_auxz00_1642 = 
CCHAR(BgL_tmpz00_1643); } 
{ /* Ieee/char.scm 288 */
obj_t BgL_tmpz00_1634;
if(
CHARP(BgL_char1z00_1148))
{ /* Ieee/char.scm 288 */
BgL_tmpz00_1634 = BgL_char1z00_1148
; }  else 
{ 
obj_t BgL_auxz00_1637;
BgL_auxz00_1637 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)13420)), BGl_string1545z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char1z00_1148); 
FAILURE(BgL_auxz00_1637,BFALSE,BFALSE);} 
BgL_auxz00_1633 = 
CCHAR(BgL_tmpz00_1634); } 
BgL_tmpz00_1632 = 
BGl_charzd2andzd2zz__r4_characters_6_6z00(BgL_auxz00_1633, BgL_auxz00_1642); } 
return 
BCHAR(BgL_tmpz00_1632);} } 

}



/* char-not */
BGL_EXPORTED_DEF unsigned char BGl_charzd2notzd2zz__r4_characters_6_6z00(unsigned char BgL_char1z00_38)
{
{ /* Ieee/char.scm 293 */
return 
~(BgL_char1z00_38);} 

}



/* &char-not */
obj_t BGl_z62charzd2notzb0zz__r4_characters_6_6z00(obj_t BgL_envz00_1150, obj_t BgL_char1z00_1151)
{
{ /* Ieee/char.scm 293 */
{ /* Ieee/char.scm 294 */
unsigned char BgL_tmpz00_1654;
{ /* Ieee/char.scm 294 */
unsigned char BgL_auxz00_1655;
{ /* Ieee/char.scm 294 */
obj_t BgL_tmpz00_1656;
if(
CHARP(BgL_char1z00_1151))
{ /* Ieee/char.scm 294 */
BgL_tmpz00_1656 = BgL_char1z00_1151
; }  else 
{ 
obj_t BgL_auxz00_1659;
BgL_auxz00_1659 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1519z00zz__r4_characters_6_6z00, 
BINT(((long)13704)), BGl_string1546z00zz__r4_characters_6_6z00, BGl_string1521z00zz__r4_characters_6_6z00, BgL_char1z00_1151); 
FAILURE(BgL_auxz00_1659,BFALSE,BFALSE);} 
BgL_auxz00_1655 = 
CCHAR(BgL_tmpz00_1656); } 
BgL_tmpz00_1654 = 
BGl_charzd2notzd2zz__r4_characters_6_6z00(BgL_auxz00_1655); } 
return 
BCHAR(BgL_tmpz00_1654);} } 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_characters_6_6z00()
{
{ /* Ieee/char.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string1547z00zz__r4_characters_6_6z00)); 
return 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string1547z00zz__r4_characters_6_6z00));} 

}

#ifdef __cplusplus
}
#endif
