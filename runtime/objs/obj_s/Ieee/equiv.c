/*===========================================================================*/
/*   (Ieee/equiv.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Ieee/equiv.scm -indent -o objs/obj_s/Ieee/equiv.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif

/* object type definitions */

static obj_t BGl_symbol1762z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_symbol1764z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_symbol1766z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_symbol1768z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_requirezd2initializa7ationz75zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_symbol1771z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_symbol1774z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_symbol1776z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_symbol1778z00zz__r4_equivalence_6_2z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t weakptr_data(obj_t);
extern bool_t ucs2_strcmp(obj_t, obj_t);
static obj_t BGl_genericzd2initzd2zz__r4_equivalence_6_2z00();
static obj_t BGl_objectzd2initzd2zz__r4_equivalence_6_2z00();
extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
extern bool_t BGl_objectzd2equalzf3z21zz__objectz00(BgL_objectz00_bglt, BgL_objectz00_bglt);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_methodzd2initzd2zz__r4_equivalence_6_2z00();
static obj_t BGl_z62equalzf3z91zz__r4_equivalence_6_2z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62eqvzf3z91zz__r4_equivalence_6_2z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
static obj_t BGl_z62eqzf3z91zz__r4_equivalence_6_2z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl_list1761z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_list1770z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_list1773z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_cnstzd2initzd2zz__r4_equivalence_6_2z00();
static obj_t BGl_gczd2rootszd2initz00zz__r4_equivalence_6_2z00();
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_equivalence_6_2z00();
extern obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_eqzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
extern long bgl_date_to_seconds(obj_t);
static obj_t *__cnst;


DEFINE_STRING( BGl_string1757z00zz__r4_equivalence_6_2z00, BgL_bgl_string1757za700za7za7_1783za7, "/tmp/4.4a/runtime/Ieee/equiv.scm", 32 );
DEFINE_STRING( BGl_string1758z00zz__r4_equivalence_6_2z00, BgL_bgl_string1758za700za7za7_1784za7, "test", 4 );
DEFINE_STRING( BGl_string1759z00zz__r4_equivalence_6_2z00, BgL_bgl_string1759za700za7za7_1785za7, "procedure", 9 );
DEFINE_STRING( BGl_string1760z00zz__r4_equivalence_6_2z00, BgL_bgl_string1760za700za7za7_1786za7, "test:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string1763z00zz__r4_equivalence_6_2z00, BgL_bgl_string1763za700za7za7_1787za7, "funcall", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_bgl_za762eqza7f3za791za7za7__r1788za7, BGl_z62eqzf3z91zz__r4_equivalence_6_2z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1765z00zz__r4_equivalence_6_2z00, BgL_bgl_string1765za700za7za7_1789za7, "get", 3 );
DEFINE_STRING( BGl_string1767z00zz__r4_equivalence_6_2z00, BgL_bgl_string1767za700za7za7_1790za7, "obj1", 4 );
DEFINE_STRING( BGl_string1769z00zz__r4_equivalence_6_2z00, BgL_bgl_string1769za700za7za7_1791za7, "i", 1 );
DEFINE_STRING( BGl_string1772z00zz__r4_equivalence_6_2z00, BgL_bgl_string1772za700za7za7_1792za7, "obj2", 4 );
DEFINE_STRING( BGl_string1775z00zz__r4_equivalence_6_2z00, BgL_bgl_string1775za700za7za7_1793za7, "cmp", 3 );
DEFINE_STRING( BGl_string1777z00zz__r4_equivalence_6_2z00, BgL_bgl_string1777za700za7za7_1794za7, "arg1190", 7 );
DEFINE_STRING( BGl_string1779z00zz__r4_equivalence_6_2z00, BgL_bgl_string1779za700za7za7_1795za7, "arg1194", 7 );
DEFINE_STRING( BGl_string1780z00zz__r4_equivalence_6_2z00, BgL_bgl_string1780za700za7za7_1796za7, "equal?", 6 );
DEFINE_STRING( BGl_string1781z00zz__r4_equivalence_6_2z00, BgL_bgl_string1781za700za7za7_1797za7, "custom", 6 );
DEFINE_STRING( BGl_string1782z00zz__r4_equivalence_6_2z00, BgL_bgl_string1782za700za7za7_1798za7, "__r4_equivalence_6_2", 20 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_eqvzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_bgl_za762eqvza7f3za791za7za7__1799za7, BGl_z62eqvzf3z91zz__r4_equivalence_6_2z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_bgl_za762equalza7f3za791za7za71800za7, BGl_z62equalzf3z91zz__r4_equivalence_6_2z00, 0L, BUNSPEC, 2 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_symbol1762z00zz__r4_equivalence_6_2z00) );
ADD_ROOT( (void *)(&BGl_symbol1764z00zz__r4_equivalence_6_2z00) );
ADD_ROOT( (void *)(&BGl_symbol1766z00zz__r4_equivalence_6_2z00) );
ADD_ROOT( (void *)(&BGl_symbol1768z00zz__r4_equivalence_6_2z00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__r4_equivalence_6_2z00) );
ADD_ROOT( (void *)(&BGl_symbol1771z00zz__r4_equivalence_6_2z00) );
ADD_ROOT( (void *)(&BGl_symbol1774z00zz__r4_equivalence_6_2z00) );
ADD_ROOT( (void *)(&BGl_symbol1776z00zz__r4_equivalence_6_2z00) );
ADD_ROOT( (void *)(&BGl_symbol1778z00zz__r4_equivalence_6_2z00) );
ADD_ROOT( (void *)(&BGl_list1761z00zz__r4_equivalence_6_2z00) );
ADD_ROOT( (void *)(&BGl_list1770z00zz__r4_equivalence_6_2z00) );
ADD_ROOT( (void *)(&BGl_list1773z00zz__r4_equivalence_6_2z00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long BgL_checksumz00_1989, char * BgL_fromz00_1990)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_equivalence_6_2z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_equivalence_6_2z00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__r4_equivalence_6_2z00(); 
BGl_cnstzd2initzd2zz__r4_equivalence_6_2z00(); 
BGl_importedzd2moduleszd2initz00zz__r4_equivalence_6_2z00(); 
return 
BGl_methodzd2initzd2zz__r4_equivalence_6_2z00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r4_equivalence_6_2z00()
{
{ /* Ieee/equiv.scm 14 */
BGl_symbol1762z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string1763z00zz__r4_equivalence_6_2z00); 
BGl_symbol1764z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string1765z00zz__r4_equivalence_6_2z00); 
BGl_symbol1766z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string1767z00zz__r4_equivalence_6_2z00); 
BGl_symbol1768z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string1769z00zz__r4_equivalence_6_2z00); 
BGl_list1761z00zz__r4_equivalence_6_2z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1762z00zz__r4_equivalence_6_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol1764z00zz__r4_equivalence_6_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol1764z00zz__r4_equivalence_6_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol1766z00zz__r4_equivalence_6_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol1768z00zz__r4_equivalence_6_2z00, BNIL))))); 
BGl_symbol1771z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string1772z00zz__r4_equivalence_6_2z00); 
BGl_list1770z00zz__r4_equivalence_6_2z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1762z00zz__r4_equivalence_6_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol1764z00zz__r4_equivalence_6_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol1764z00zz__r4_equivalence_6_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol1771z00zz__r4_equivalence_6_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol1768z00zz__r4_equivalence_6_2z00, BNIL))))); 
BGl_symbol1774z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string1775z00zz__r4_equivalence_6_2z00); 
BGl_symbol1776z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string1777z00zz__r4_equivalence_6_2z00); 
BGl_symbol1778z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string1779z00zz__r4_equivalence_6_2z00); 
return ( 
BGl_list1773z00zz__r4_equivalence_6_2z00 = 
MAKE_YOUNG_PAIR(BGl_symbol1762z00zz__r4_equivalence_6_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol1774z00zz__r4_equivalence_6_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol1774z00zz__r4_equivalence_6_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol1776z00zz__r4_equivalence_6_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol1778z00zz__r4_equivalence_6_2z00, BNIL))))), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__r4_equivalence_6_2z00()
{
{ /* Ieee/equiv.scm 14 */
return 
bgl_gc_roots_register();} 

}



/* eq? */
BGL_EXPORTED_DEF bool_t BGl_eqzf3zf3zz__r4_equivalence_6_2z00(obj_t BgL_obj1z00_3, obj_t BgL_obj2z00_4)
{
{ /* Ieee/equiv.scm 67 */
return 
(BgL_obj1z00_3==BgL_obj2z00_4);} 

}



/* &eq? */
obj_t BGl_z62eqzf3z91zz__r4_equivalence_6_2z00(obj_t BgL_envz00_1953, obj_t BgL_obj1z00_1954, obj_t BgL_obj2z00_1955)
{
{ /* Ieee/equiv.scm 67 */
return 
BBOOL(
BGl_eqzf3zf3zz__r4_equivalence_6_2z00(BgL_obj1z00_1954, BgL_obj2z00_1955));} 

}



/* eqv? */
BGL_EXPORTED_DEF bool_t BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t BgL_obj1z00_5, obj_t BgL_obj2z00_6)
{
{ /* Ieee/equiv.scm 73 */
BGl_eqvzf3zf3zz__r4_equivalence_6_2z00:
if(
(BgL_obj1z00_5==BgL_obj2z00_6))
{ /* Ieee/equiv.scm 75 */
return ((bool_t)1);}  else 
{ /* Ieee/equiv.scm 77 */
bool_t BgL_test1803z00_2027;
{ /* Ieee/equiv.scm 77 */
bool_t BgL__ortest_1076z00_1624;
BgL__ortest_1076z00_1624 = 
INTEGERP(BgL_obj1z00_5); 
if(BgL__ortest_1076z00_1624)
{ /* Ieee/equiv.scm 77 */
BgL_test1803z00_2027 = BgL__ortest_1076z00_1624
; }  else 
{ /* Ieee/equiv.scm 77 */
bool_t BgL__ortest_1077z00_1625;
BgL__ortest_1077z00_1625 = 
ELONGP(BgL_obj1z00_5); 
if(BgL__ortest_1077z00_1625)
{ /* Ieee/equiv.scm 77 */
BgL_test1803z00_2027 = BgL__ortest_1077z00_1625
; }  else 
{ /* Ieee/equiv.scm 77 */
bool_t BgL__ortest_1078z00_1626;
BgL__ortest_1078z00_1626 = 
LLONGP(BgL_obj1z00_5); 
if(BgL__ortest_1078z00_1626)
{ /* Ieee/equiv.scm 77 */
BgL_test1803z00_2027 = BgL__ortest_1078z00_1626
; }  else 
{ /* Ieee/equiv.scm 77 */
bool_t BgL__ortest_1079z00_1627;
BgL__ortest_1079z00_1627 = 
BGL_INT8P(BgL_obj1z00_5); 
if(BgL__ortest_1079z00_1627)
{ /* Ieee/equiv.scm 77 */
BgL_test1803z00_2027 = BgL__ortest_1079z00_1627
; }  else 
{ /* Ieee/equiv.scm 77 */
bool_t BgL__ortest_1080z00_1628;
BgL__ortest_1080z00_1628 = 
BGL_UINT8P(BgL_obj1z00_5); 
if(BgL__ortest_1080z00_1628)
{ /* Ieee/equiv.scm 77 */
BgL_test1803z00_2027 = BgL__ortest_1080z00_1628
; }  else 
{ /* Ieee/equiv.scm 77 */
bool_t BgL__ortest_1081z00_1629;
BgL__ortest_1081z00_1629 = 
BGL_INT16P(BgL_obj1z00_5); 
if(BgL__ortest_1081z00_1629)
{ /* Ieee/equiv.scm 77 */
BgL_test1803z00_2027 = BgL__ortest_1081z00_1629
; }  else 
{ /* Ieee/equiv.scm 77 */
bool_t BgL__ortest_1082z00_1630;
BgL__ortest_1082z00_1630 = 
BGL_UINT16P(BgL_obj1z00_5); 
if(BgL__ortest_1082z00_1630)
{ /* Ieee/equiv.scm 77 */
BgL_test1803z00_2027 = BgL__ortest_1082z00_1630
; }  else 
{ /* Ieee/equiv.scm 77 */
bool_t BgL__ortest_1083z00_1631;
BgL__ortest_1083z00_1631 = 
BGL_INT32P(BgL_obj1z00_5); 
if(BgL__ortest_1083z00_1631)
{ /* Ieee/equiv.scm 77 */
BgL_test1803z00_2027 = BgL__ortest_1083z00_1631
; }  else 
{ /* Ieee/equiv.scm 77 */
bool_t BgL__ortest_1084z00_1632;
BgL__ortest_1084z00_1632 = 
BGL_UINT32P(BgL_obj1z00_5); 
if(BgL__ortest_1084z00_1632)
{ /* Ieee/equiv.scm 77 */
BgL_test1803z00_2027 = BgL__ortest_1084z00_1632
; }  else 
{ /* Ieee/equiv.scm 77 */
bool_t BgL__ortest_1085z00_1633;
BgL__ortest_1085z00_1633 = 
BGL_INT64P(BgL_obj1z00_5); 
if(BgL__ortest_1085z00_1633)
{ /* Ieee/equiv.scm 77 */
BgL_test1803z00_2027 = BgL__ortest_1085z00_1633
; }  else 
{ /* Ieee/equiv.scm 77 */
bool_t BgL__ortest_1086z00_1634;
BgL__ortest_1086z00_1634 = 
BGL_UINT64P(BgL_obj1z00_5); 
if(BgL__ortest_1086z00_1634)
{ /* Ieee/equiv.scm 77 */
BgL_test1803z00_2027 = BgL__ortest_1086z00_1634
; }  else 
{ /* Ieee/equiv.scm 77 */
BgL_test1803z00_2027 = 
BIGNUMP(BgL_obj1z00_5)
; } } } } } } } } } } } } 
if(BgL_test1803z00_2027)
{ /* Ieee/equiv.scm 78 */
bool_t BgL_test1815z00_2051;
{ /* Ieee/equiv.scm 78 */
bool_t BgL__ortest_1076z00_1648;
BgL__ortest_1076z00_1648 = 
INTEGERP(BgL_obj2z00_6); 
if(BgL__ortest_1076z00_1648)
{ /* Ieee/equiv.scm 78 */
BgL_test1815z00_2051 = BgL__ortest_1076z00_1648
; }  else 
{ /* Ieee/equiv.scm 78 */
bool_t BgL__ortest_1077z00_1649;
BgL__ortest_1077z00_1649 = 
ELONGP(BgL_obj2z00_6); 
if(BgL__ortest_1077z00_1649)
{ /* Ieee/equiv.scm 78 */
BgL_test1815z00_2051 = BgL__ortest_1077z00_1649
; }  else 
{ /* Ieee/equiv.scm 78 */
bool_t BgL__ortest_1078z00_1650;
BgL__ortest_1078z00_1650 = 
LLONGP(BgL_obj2z00_6); 
if(BgL__ortest_1078z00_1650)
{ /* Ieee/equiv.scm 78 */
BgL_test1815z00_2051 = BgL__ortest_1078z00_1650
; }  else 
{ /* Ieee/equiv.scm 78 */
bool_t BgL__ortest_1079z00_1651;
BgL__ortest_1079z00_1651 = 
BGL_INT8P(BgL_obj2z00_6); 
if(BgL__ortest_1079z00_1651)
{ /* Ieee/equiv.scm 78 */
BgL_test1815z00_2051 = BgL__ortest_1079z00_1651
; }  else 
{ /* Ieee/equiv.scm 78 */
bool_t BgL__ortest_1080z00_1652;
BgL__ortest_1080z00_1652 = 
BGL_UINT8P(BgL_obj2z00_6); 
if(BgL__ortest_1080z00_1652)
{ /* Ieee/equiv.scm 78 */
BgL_test1815z00_2051 = BgL__ortest_1080z00_1652
; }  else 
{ /* Ieee/equiv.scm 78 */
bool_t BgL__ortest_1081z00_1653;
BgL__ortest_1081z00_1653 = 
BGL_INT16P(BgL_obj2z00_6); 
if(BgL__ortest_1081z00_1653)
{ /* Ieee/equiv.scm 78 */
BgL_test1815z00_2051 = BgL__ortest_1081z00_1653
; }  else 
{ /* Ieee/equiv.scm 78 */
bool_t BgL__ortest_1082z00_1654;
BgL__ortest_1082z00_1654 = 
BGL_UINT16P(BgL_obj2z00_6); 
if(BgL__ortest_1082z00_1654)
{ /* Ieee/equiv.scm 78 */
BgL_test1815z00_2051 = BgL__ortest_1082z00_1654
; }  else 
{ /* Ieee/equiv.scm 78 */
bool_t BgL__ortest_1083z00_1655;
BgL__ortest_1083z00_1655 = 
BGL_INT32P(BgL_obj2z00_6); 
if(BgL__ortest_1083z00_1655)
{ /* Ieee/equiv.scm 78 */
BgL_test1815z00_2051 = BgL__ortest_1083z00_1655
; }  else 
{ /* Ieee/equiv.scm 78 */
bool_t BgL__ortest_1084z00_1656;
BgL__ortest_1084z00_1656 = 
BGL_UINT32P(BgL_obj2z00_6); 
if(BgL__ortest_1084z00_1656)
{ /* Ieee/equiv.scm 78 */
BgL_test1815z00_2051 = BgL__ortest_1084z00_1656
; }  else 
{ /* Ieee/equiv.scm 78 */
bool_t BgL__ortest_1085z00_1657;
BgL__ortest_1085z00_1657 = 
BGL_INT64P(BgL_obj2z00_6); 
if(BgL__ortest_1085z00_1657)
{ /* Ieee/equiv.scm 78 */
BgL_test1815z00_2051 = BgL__ortest_1085z00_1657
; }  else 
{ /* Ieee/equiv.scm 78 */
bool_t BgL__ortest_1086z00_1658;
BgL__ortest_1086z00_1658 = 
BGL_UINT64P(BgL_obj2z00_6); 
if(BgL__ortest_1086z00_1658)
{ /* Ieee/equiv.scm 78 */
BgL_test1815z00_2051 = BgL__ortest_1086z00_1658
; }  else 
{ /* Ieee/equiv.scm 78 */
BgL_test1815z00_2051 = 
BIGNUMP(BgL_obj2z00_6)
; } } } } } } } } } } } } 
if(BgL_test1815z00_2051)
{ /* Ieee/equiv.scm 78 */
return 
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_obj1z00_5, BgL_obj2z00_6);}  else 
{ /* Ieee/equiv.scm 78 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 77 */
if(
REALP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 79 */
if(
REALP(BgL_obj2z00_6))
{ /* Ieee/equiv.scm 80 */
return 
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_obj1z00_5, BgL_obj2z00_6);}  else 
{ /* Ieee/equiv.scm 80 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 79 */
if(
SYMBOLP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 81 */
if(
SYMBOLP(BgL_obj2z00_6))
{ /* Ieee/equiv.scm 83 */
obj_t BgL_arg1134z00_1149;obj_t BgL_arg1140z00_1150;
{ /* Ieee/equiv.scm 83 */
obj_t BgL_res1632z00_1679;
BgL_res1632z00_1679 = 
SYMBOL_TO_STRING(BgL_obj1z00_5); 
BgL_arg1134z00_1149 = BgL_res1632z00_1679; } 
{ /* Ieee/equiv.scm 83 */
obj_t BgL_res1633z00_1681;
BgL_res1633z00_1681 = 
SYMBOL_TO_STRING(BgL_obj2z00_6); 
BgL_arg1140z00_1150 = BgL_res1633z00_1681; } 
{ /* Ieee/equiv.scm 83 */
bool_t BgL_res1638z00_1697;
{ /* Ieee/equiv.scm 83 */
long BgL_l1z00_1684;
BgL_l1z00_1684 = 
STRING_LENGTH(BgL_arg1134z00_1149); 
if(
(BgL_l1z00_1684==
STRING_LENGTH(BgL_arg1140z00_1150)))
{ /* Ieee/equiv.scm 83 */
int BgL_arg1268z00_1687;
{ /* Ieee/equiv.scm 83 */
char * BgL_auxz00_2093;char * BgL_tmpz00_2091;
BgL_auxz00_2093 = 
BSTRING_TO_STRING(BgL_arg1140z00_1150); 
BgL_tmpz00_2091 = 
BSTRING_TO_STRING(BgL_arg1134z00_1149); 
BgL_arg1268z00_1687 = 
memcmp(BgL_tmpz00_2091, BgL_auxz00_2093, BgL_l1z00_1684); } 
BgL_res1638z00_1697 = 
(
(long)(BgL_arg1268z00_1687)==((long)0)); }  else 
{ /* Ieee/equiv.scm 83 */
BgL_res1638z00_1697 = ((bool_t)0); } } 
return BgL_res1638z00_1697;} }  else 
{ /* Ieee/equiv.scm 82 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 81 */
if(
FOREIGNP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 84 */
if(
FOREIGNP(BgL_obj2z00_6))
{ /* Ieee/equiv.scm 85 */
return 
FOREIGN_EQP(BgL_obj1z00_5, BgL_obj2z00_6);}  else 
{ /* Ieee/equiv.scm 85 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 84 */
if(
BGL_WEAKPTRP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 86 */
if(
BGL_WEAKPTRP(BgL_obj2z00_6))
{ 
obj_t BgL_obj2z00_2109;obj_t BgL_obj1z00_2107;
BgL_obj1z00_2107 = 
weakptr_data(BgL_obj1z00_5); 
BgL_obj2z00_2109 = 
weakptr_data(BgL_obj2z00_6); 
BgL_obj2z00_6 = BgL_obj2z00_2109; 
BgL_obj1z00_5 = BgL_obj1z00_2107; 
goto BGl_eqvzf3zf3zz__r4_equivalence_6_2z00;}  else 
{ /* Ieee/equiv.scm 87 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 86 */
return ((bool_t)0);} } } } } } } 

}



/* &eqv? */
obj_t BGl_z62eqvzf3z91zz__r4_equivalence_6_2z00(obj_t BgL_envz00_1956, obj_t BgL_obj1z00_1957, obj_t BgL_obj2z00_1958)
{
{ /* Ieee/equiv.scm 73 */
return 
BBOOL(
BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(BgL_obj1z00_1957, BgL_obj2z00_1958));} 

}



/* equal? */
BGL_EXPORTED_DEF bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t BgL_obj1z00_7, obj_t BgL_obj2z00_8)
{
{ /* Ieee/equiv.scm 94 */
BGl_equalzf3zf3zz__r4_equivalence_6_2z00:
if(
(BgL_obj1z00_7==BgL_obj2z00_8))
{ /* Ieee/equiv.scm 96 */
return ((bool_t)1);}  else 
{ /* Ieee/equiv.scm 96 */
if(
STRINGP(BgL_obj1z00_7))
{ /* Ieee/equiv.scm 98 */
if(
STRINGP(BgL_obj2z00_8))
{ /* Ieee/equiv.scm 99 */
bool_t BgL_res1650z00_1722;
{ /* Ieee/equiv.scm 99 */
long BgL_l1z00_1709;
BgL_l1z00_1709 = 
STRING_LENGTH(BgL_obj1z00_7); 
if(
(BgL_l1z00_1709==
STRING_LENGTH(BgL_obj2z00_8)))
{ /* Ieee/equiv.scm 99 */
int BgL_arg1268z00_1712;
{ /* Ieee/equiv.scm 99 */
char * BgL_auxz00_2125;char * BgL_tmpz00_2123;
BgL_auxz00_2125 = 
BSTRING_TO_STRING(BgL_obj2z00_8); 
BgL_tmpz00_2123 = 
BSTRING_TO_STRING(BgL_obj1z00_7); 
BgL_arg1268z00_1712 = 
memcmp(BgL_tmpz00_2123, BgL_auxz00_2125, BgL_l1z00_1709); } 
BgL_res1650z00_1722 = 
(
(long)(BgL_arg1268z00_1712)==((long)0)); }  else 
{ /* Ieee/equiv.scm 99 */
BgL_res1650z00_1722 = ((bool_t)0); } } 
return BgL_res1650z00_1722;}  else 
{ /* Ieee/equiv.scm 99 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 98 */
if(
SYMBOLP(BgL_obj1z00_7))
{ /* Ieee/equiv.scm 100 */
return ((bool_t)0);}  else 
{ /* Ieee/equiv.scm 100 */
if(
PAIRP(BgL_obj1z00_7))
{ /* Ieee/equiv.scm 102 */
if(
PAIRP(BgL_obj2z00_8))
{ /* Ieee/equiv.scm 103 */
if(
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(
CAR(BgL_obj1z00_7), 
CAR(BgL_obj2z00_8)))
{ 
obj_t BgL_obj2z00_2142;obj_t BgL_obj1z00_2140;
BgL_obj1z00_2140 = 
CDR(BgL_obj1z00_7); 
BgL_obj2z00_2142 = 
CDR(BgL_obj2z00_8); 
BgL_obj2z00_8 = BgL_obj2z00_2142; 
BgL_obj1z00_7 = BgL_obj1z00_2140; 
goto BGl_equalzf3zf3zz__r4_equivalence_6_2z00;}  else 
{ /* Ieee/equiv.scm 104 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 103 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 102 */
if(
VECTORP(BgL_obj1z00_7))
{ /* Ieee/equiv.scm 106 */
if(
VECTORP(BgL_obj2z00_8))
{ /* Ieee/equiv.scm 108 */
if(
(
VECTOR_LENGTH(BgL_obj2z00_8)==
VECTOR_LENGTH(BgL_obj1z00_7)))
{ /* Ieee/equiv.scm 110 */
bool_t BgL_test1847z00_2152;
{ /* Ieee/equiv.scm 110 */
int BgL_arg1174z00_1182;int BgL_arg1175z00_1183;
{ /* Ieee/equiv.scm 110 */
int BgL_res1657z00_1738;
BgL_res1657z00_1738 = 
VECTOR_TAG(BgL_obj1z00_7); 
BgL_arg1174z00_1182 = BgL_res1657z00_1738; } 
{ /* Ieee/equiv.scm 110 */
int BgL_res1658z00_1740;
BgL_res1658z00_1740 = 
VECTOR_TAG(BgL_obj2z00_8); 
BgL_arg1175z00_1183 = BgL_res1658z00_1740; } 
BgL_test1847z00_2152 = 
(
(long)(BgL_arg1174z00_1182)==
(long)(BgL_arg1175z00_1183)); } 
if(BgL_test1847z00_2152)
{ 
long BgL_iz00_1174;
BgL_iz00_1174 = ((long)0); 
BgL_zc3z04anonymousza31168ze3z87_1175:
{ /* Ieee/equiv.scm 112 */
bool_t BgL__ortest_1047z00_1176;
BgL__ortest_1047z00_1176 = 
(BgL_iz00_1174==
VECTOR_LENGTH(BgL_obj1z00_7)); 
if(BgL__ortest_1047z00_1176)
{ /* Ieee/equiv.scm 112 */
return BgL__ortest_1047z00_1176;}  else 
{ /* Ieee/equiv.scm 113 */
bool_t BgL_test1849z00_2161;
{ /* Ieee/equiv.scm 113 */
obj_t BgL_arg1170z00_1179;obj_t BgL_arg1172z00_1180;
BgL_arg1170z00_1179 = 
VECTOR_REF(
((obj_t)BgL_obj1z00_7),BgL_iz00_1174); 
BgL_arg1172z00_1180 = 
VECTOR_REF(
((obj_t)BgL_obj2z00_8),BgL_iz00_1174); 
BgL_test1849z00_2161 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_arg1170z00_1179, BgL_arg1172z00_1180); } 
if(BgL_test1849z00_2161)
{ 
long BgL_iz00_2167;
BgL_iz00_2167 = 
(BgL_iz00_1174+((long)1)); 
BgL_iz00_1174 = BgL_iz00_2167; 
goto BgL_zc3z04anonymousza31168ze3z87_1175;}  else 
{ /* Ieee/equiv.scm 113 */
return ((bool_t)0);} } } }  else 
{ /* Ieee/equiv.scm 110 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 109 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 108 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 106 */
if(
BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(BgL_obj1z00_7, BgL_obj2z00_8))
{ /* Ieee/equiv.scm 116 */
return ((bool_t)1);}  else 
{ /* Ieee/equiv.scm 116 */
if(
INTEGERP(BgL_obj1z00_7))
{ /* Ieee/equiv.scm 118 */
return ((bool_t)0);}  else 
{ /* Ieee/equiv.scm 118 */
if(
BGL_HVECTORP(BgL_obj1z00_7))
{ /* Ieee/equiv.scm 121 */
long BgL_lobj1z00_1188;
BgL_lobj1z00_1188 = 
BGL_HVECTOR_LENGTH(BgL_obj1z00_7); 
if(
BGL_HVECTORP(BgL_obj2z00_8))
{ /* Ieee/equiv.scm 123 */
bool_t BgL_test1854z00_2178;
{ /* Ieee/equiv.scm 123 */
long BgL_arg1197z00_1211;
BgL_arg1197z00_1211 = 
BGL_HVECTOR_LENGTH(BgL_obj2z00_8); 
BgL_test1854z00_2178 = 
(BgL_arg1197z00_1211==BgL_lobj1z00_1188); } 
if(BgL_test1854z00_2178)
{ /* Ieee/equiv.scm 124 */
obj_t BgL_tag1z00_1191;
BgL_tag1z00_1191 = 
BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(BgL_obj1z00_7); 
{ /* Ieee/equiv.scm 125 */
obj_t BgL__z00_1192;obj_t BgL_getz00_1193;obj_t BgL__z00_1194;obj_t BgL_cmpz00_1195;
{ /* Ieee/equiv.scm 126 */
int BgL_tmpz00_2182;
BgL_tmpz00_2182 = 
(int)(((long)1)); 
BgL__z00_1192 = 
BGL_MVALUES_VAL(BgL_tmpz00_2182); } 
{ /* Ieee/equiv.scm 126 */
int BgL_tmpz00_2185;
BgL_tmpz00_2185 = 
(int)(((long)2)); 
BgL_getz00_1193 = 
BGL_MVALUES_VAL(BgL_tmpz00_2185); } 
{ /* Ieee/equiv.scm 126 */
int BgL_tmpz00_2188;
BgL_tmpz00_2188 = 
(int)(((long)3)); 
BgL__z00_1194 = 
BGL_MVALUES_VAL(BgL_tmpz00_2188); } 
{ /* Ieee/equiv.scm 126 */
int BgL_tmpz00_2191;
BgL_tmpz00_2191 = 
(int)(((long)4)); 
BgL_cmpz00_1195 = 
BGL_MVALUES_VAL(BgL_tmpz00_2191); } 
{ /* Ieee/equiv.scm 126 */
obj_t BgL_tag2z00_1196;
BgL_tag2z00_1196 = 
BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(BgL_obj2z00_8); 
{ /* Ieee/equiv.scm 127 */
obj_t BgL__z00_1197;obj_t BgL__z00_1198;obj_t BgL__z00_1199;obj_t BgL__z00_1200;
{ /* Ieee/equiv.scm 128 */
int BgL_tmpz00_2195;
BgL_tmpz00_2195 = 
(int)(((long)1)); 
BgL__z00_1197 = 
BGL_MVALUES_VAL(BgL_tmpz00_2195); } 
{ /* Ieee/equiv.scm 128 */
int BgL_tmpz00_2198;
BgL_tmpz00_2198 = 
(int)(((long)2)); 
BgL__z00_1198 = 
BGL_MVALUES_VAL(BgL_tmpz00_2198); } 
{ /* Ieee/equiv.scm 128 */
int BgL_tmpz00_2201;
BgL_tmpz00_2201 = 
(int)(((long)3)); 
BgL__z00_1199 = 
BGL_MVALUES_VAL(BgL_tmpz00_2201); } 
{ /* Ieee/equiv.scm 128 */
int BgL_tmpz00_2204;
BgL_tmpz00_2204 = 
(int)(((long)4)); 
BgL__z00_1200 = 
BGL_MVALUES_VAL(BgL_tmpz00_2204); } 
if(
(BgL_tag1z00_1191==BgL_tag2z00_1196))
{ 
long BgL_iz00_1203;
BgL_iz00_1203 = ((long)0); 
BgL_zc3z04anonymousza31180ze3z87_1204:
{ /* Ieee/equiv.scm 130 */
bool_t BgL__ortest_1052z00_1205;
BgL__ortest_1052z00_1205 = 
(BgL_iz00_1203==BgL_lobj1z00_1188); 
if(BgL__ortest_1052z00_1205)
{ /* Ieee/equiv.scm 130 */
return BgL__ortest_1052z00_1205;}  else 
{ /* Ieee/equiv.scm 131 */
obj_t BgL__andtest_1053z00_1206;
{ /* Ieee/equiv.scm 131 */
obj_t BgL_arg1190z00_1208;obj_t BgL_arg1194z00_1209;
{ /* Ieee/equiv.scm 131 */
obj_t BgL_funz00_1968;
if(
PROCEDUREP(BgL_getz00_1193))
{ /* Ieee/equiv.scm 131 */
BgL_funz00_1968 = BgL_getz00_1193; }  else 
{ 
obj_t BgL_auxz00_2213;
BgL_auxz00_2213 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1757z00zz__r4_equivalence_6_2z00, 
BINT(((long)4380)), BGl_string1758z00zz__r4_equivalence_6_2z00, BGl_string1759z00zz__r4_equivalence_6_2z00, BgL_getz00_1193); 
FAILURE(BgL_auxz00_2213,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1968, ((long)2)))
{ /* Ieee/equiv.scm 131 */
BgL_arg1190z00_1208 = 
PROCEDURE_ENTRY(BgL_funz00_1968)(BgL_getz00_1193, BgL_obj1z00_7, 
BINT(BgL_iz00_1203), BEOA); }  else 
{ /* Ieee/equiv.scm 131 */
FAILURE(BGl_string1760z00zz__r4_equivalence_6_2z00,BGl_list1761z00zz__r4_equivalence_6_2z00,BgL_funz00_1968);} } 
{ /* Ieee/equiv.scm 131 */
obj_t BgL_funz00_1973;
if(
PROCEDUREP(BgL_getz00_1193))
{ /* Ieee/equiv.scm 131 */
BgL_funz00_1973 = BgL_getz00_1193; }  else 
{ 
obj_t BgL_auxz00_2228;
BgL_auxz00_2228 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1757z00zz__r4_equivalence_6_2z00, 
BINT(((long)4393)), BGl_string1758z00zz__r4_equivalence_6_2z00, BGl_string1759z00zz__r4_equivalence_6_2z00, BgL_getz00_1193); 
FAILURE(BgL_auxz00_2228,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1973, ((long)2)))
{ /* Ieee/equiv.scm 131 */
BgL_arg1194z00_1209 = 
PROCEDURE_ENTRY(BgL_funz00_1973)(BgL_getz00_1193, BgL_obj2z00_8, 
BINT(BgL_iz00_1203), BEOA); }  else 
{ /* Ieee/equiv.scm 131 */
FAILURE(BGl_string1760z00zz__r4_equivalence_6_2z00,BGl_list1770z00zz__r4_equivalence_6_2z00,BgL_funz00_1973);} } 
{ /* Ieee/equiv.scm 131 */
obj_t BgL_funz00_1978;
if(
PROCEDUREP(BgL_cmpz00_1195))
{ /* Ieee/equiv.scm 131 */
BgL_funz00_1978 = BgL_cmpz00_1195; }  else 
{ 
obj_t BgL_auxz00_2243;
BgL_auxz00_2243 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1757z00zz__r4_equivalence_6_2z00, 
BINT(((long)4375)), BGl_string1758z00zz__r4_equivalence_6_2z00, BGl_string1759z00zz__r4_equivalence_6_2z00, BgL_cmpz00_1195); 
FAILURE(BgL_auxz00_2243,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1978, ((long)2)))
{ /* Ieee/equiv.scm 131 */
BgL__andtest_1053z00_1206 = 
PROCEDURE_ENTRY(BgL_funz00_1978)(BgL_cmpz00_1195, BgL_arg1190z00_1208, BgL_arg1194z00_1209, BEOA); }  else 
{ /* Ieee/equiv.scm 131 */
FAILURE(BGl_string1760z00zz__r4_equivalence_6_2z00,BGl_list1773z00zz__r4_equivalence_6_2z00,BgL_funz00_1978);} } } 
if(
CBOOL(BgL__andtest_1053z00_1206))
{ 
long BgL_iz00_2257;
BgL_iz00_2257 = 
(BgL_iz00_1203+((long)1)); 
BgL_iz00_1203 = BgL_iz00_2257; 
goto BgL_zc3z04anonymousza31180ze3z87_1204;}  else 
{ /* Ieee/equiv.scm 131 */
return ((bool_t)0);} } } }  else 
{ /* Ieee/equiv.scm 128 */
return ((bool_t)0);} } } } }  else 
{ /* Ieee/equiv.scm 123 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 122 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 120 */
if(
REALP(BgL_obj1z00_7))
{ /* Ieee/equiv.scm 133 */
return ((bool_t)0);}  else 
{ /* Ieee/equiv.scm 133 */
if(
STRUCTP(BgL_obj1z00_7))
{ /* Ieee/equiv.scm 136 */
int BgL_lobj1z00_1214;
BgL_lobj1z00_1214 = 
STRUCT_LENGTH(BgL_obj1z00_7); 
if(
STRUCTP(BgL_obj2z00_8))
{ /* Ieee/equiv.scm 137 */
if(
(
(long)(
STRUCT_LENGTH(BgL_obj2z00_8))==
(long)(BgL_lobj1z00_1214)))
{ 
long BgL_iz00_1218;
BgL_iz00_1218 = ((long)0); 
BgL_zc3z04anonymousza31200ze3z87_1219:
{ /* Ieee/equiv.scm 140 */
bool_t BgL__ortest_1056z00_1220;
BgL__ortest_1056z00_1220 = 
(BgL_iz00_1218==
(long)(BgL_lobj1z00_1214)); 
if(BgL__ortest_1056z00_1220)
{ /* Ieee/equiv.scm 140 */
return BgL__ortest_1056z00_1220;}  else 
{ /* Ieee/equiv.scm 141 */
bool_t BgL_test1869z00_2274;
{ /* Ieee/equiv.scm 141 */
obj_t BgL_arg1208z00_1223;obj_t BgL_arg1211z00_1224;
BgL_arg1208z00_1223 = 
STRUCT_REF(
((obj_t)BgL_obj1z00_7), 
(int)(BgL_iz00_1218)); 
BgL_arg1211z00_1224 = 
STRUCT_REF(
((obj_t)BgL_obj2z00_8), 
(int)(BgL_iz00_1218)); 
BgL_test1869z00_2274 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_arg1208z00_1223, BgL_arg1211z00_1224); } 
if(BgL_test1869z00_2274)
{ 
long BgL_iz00_2282;
BgL_iz00_2282 = 
(BgL_iz00_1218+((long)1)); 
BgL_iz00_1218 = BgL_iz00_2282; 
goto BgL_zc3z04anonymousza31200ze3z87_1219;}  else 
{ /* Ieee/equiv.scm 141 */
return ((bool_t)0);} } } }  else 
{ /* Ieee/equiv.scm 138 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 137 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 135 */
if(
CELLP(BgL_obj1z00_7))
{ /* Ieee/equiv.scm 143 */
if(
CELLP(BgL_obj2z00_8))
{ 
obj_t BgL_obj2z00_2290;obj_t BgL_obj1z00_2288;
BgL_obj1z00_2288 = 
CELL_REF(BgL_obj1z00_7); 
BgL_obj2z00_2290 = 
CELL_REF(BgL_obj2z00_8); 
BgL_obj2z00_8 = BgL_obj2z00_2290; 
BgL_obj1z00_7 = BgL_obj1z00_2288; 
goto BGl_equalzf3zf3zz__r4_equivalence_6_2z00;}  else 
{ /* Ieee/equiv.scm 144 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 143 */
if(
BGL_OBJECTP(BgL_obj1z00_7))
{ /* Ieee/equiv.scm 145 */
if(
BGL_OBJECTP(BgL_obj2z00_8))
{ /* Ieee/equiv.scm 146 */
return 
BGl_objectzd2equalzf3z21zz__objectz00(
((BgL_objectz00_bglt)BgL_obj1z00_7), 
((BgL_objectz00_bglt)BgL_obj2z00_8));}  else 
{ /* Ieee/equiv.scm 146 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 145 */
if(
UCS2_STRINGP(BgL_obj1z00_7))
{ /* Ieee/equiv.scm 147 */
if(
UCS2_STRINGP(BgL_obj2z00_8))
{ /* Ieee/equiv.scm 148 */
return 
ucs2_strcmp(BgL_obj1z00_7, BgL_obj2z00_8);}  else 
{ /* Ieee/equiv.scm 148 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 147 */
if(
CUSTOMP(BgL_obj1z00_7))
{ /* Ieee/equiv.scm 149 */
if(
CUSTOMP(BgL_obj2z00_8))
{ /* Ieee/equiv.scm 150 */
bool_t BgL_res1679z00_1792;
{ /* Ieee/equiv.scm 150 */
obj_t BgL_obj1z00_1790;obj_t BgL_obj2z00_1791;
if(
CUSTOMP(BgL_obj1z00_7))
{ /* Ieee/equiv.scm 150 */
BgL_obj1z00_1790 = BgL_obj1z00_7; }  else 
{ 
obj_t BgL_auxz00_2310;
BgL_auxz00_2310 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1757z00zz__r4_equivalence_6_2z00, 
BINT(((long)5063)), BGl_string1780z00zz__r4_equivalence_6_2z00, BGl_string1781z00zz__r4_equivalence_6_2z00, BgL_obj1z00_7); 
FAILURE(BgL_auxz00_2310,BFALSE,BFALSE);} 
if(
CUSTOMP(BgL_obj2z00_8))
{ /* Ieee/equiv.scm 150 */
BgL_obj2z00_1791 = BgL_obj2z00_8; }  else 
{ 
obj_t BgL_auxz00_2316;
BgL_auxz00_2316 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1757z00zz__r4_equivalence_6_2z00, 
BINT(((long)5068)), BGl_string1780z00zz__r4_equivalence_6_2z00, BGl_string1781z00zz__r4_equivalence_6_2z00, BgL_obj2z00_8); 
FAILURE(BgL_auxz00_2316,BFALSE,BFALSE);} 
BgL_res1679z00_1792 = 
CUSTOM_CMP(BgL_obj1z00_1790, BgL_obj2z00_1791); } 
return BgL_res1679z00_1792;}  else 
{ /* Ieee/equiv.scm 150 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 149 */
if(
UCS2P(BgL_obj1z00_7))
{ /* Ieee/equiv.scm 151 */
if(
UCS2P(BgL_obj2z00_8))
{ /* Ieee/equiv.scm 152 */
return 
(
CUCS2(BgL_obj1z00_7)==
CUCS2(BgL_obj2z00_8));}  else 
{ /* Ieee/equiv.scm 152 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 151 */
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_obj1z00_7))
{ /* Ieee/equiv.scm 153 */
return ((bool_t)0);}  else 
{ /* Ieee/equiv.scm 153 */
if(
BGL_DATEP(BgL_obj1z00_7))
{ /* Ieee/equiv.scm 155 */
if(
BGL_DATEP(BgL_obj2z00_8))
{ /* Ieee/equiv.scm 156 */
return 
(
bgl_date_to_seconds(BgL_obj1z00_7)==
bgl_date_to_seconds(BgL_obj2z00_8));}  else 
{ /* Ieee/equiv.scm 156 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 155 */
if(
FOREIGNP(BgL_obj1z00_7))
{ /* Ieee/equiv.scm 157 */
if(
FOREIGNP(BgL_obj2z00_8))
{ /* Ieee/equiv.scm 158 */
return 
FOREIGN_EQP(BgL_obj1z00_7, BgL_obj2z00_8);}  else 
{ /* Ieee/equiv.scm 158 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 157 */
if(
BGL_WEAKPTRP(BgL_obj1z00_7))
{ /* Ieee/equiv.scm 159 */
if(
BGL_WEAKPTRP(BgL_obj2z00_8))
{ 
obj_t BgL_obj2z00_2348;obj_t BgL_obj1z00_2346;
BgL_obj1z00_2346 = 
weakptr_data(BgL_obj1z00_7); 
BgL_obj2z00_2348 = 
weakptr_data(BgL_obj2z00_8); 
BgL_obj2z00_8 = BgL_obj2z00_2348; 
BgL_obj1z00_7 = BgL_obj1z00_2346; 
goto BGl_equalzf3zf3zz__r4_equivalence_6_2z00;}  else 
{ /* Ieee/equiv.scm 160 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 159 */
return ((bool_t)0);} } } } } } } } } } } } } } } } } } } } 

}



/* &equal? */
obj_t BGl_z62equalzf3z91zz__r4_equivalence_6_2z00(obj_t BgL_envz00_1959, obj_t BgL_obj1z00_1960, obj_t BgL_obj2z00_1961)
{
{ /* Ieee/equiv.scm 94 */
return 
BBOOL(
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_obj1z00_1960, BgL_obj2z00_1961));} 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__r4_equivalence_6_2z00()
{
{ /* Ieee/equiv.scm 14 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__r4_equivalence_6_2z00()
{
{ /* Ieee/equiv.scm 14 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__r4_equivalence_6_2z00()
{
{ /* Ieee/equiv.scm 14 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_equivalence_6_2z00()
{
{ /* Ieee/equiv.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string1782z00zz__r4_equivalence_6_2z00)); 
return 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string1782z00zz__r4_equivalence_6_2z00));} 

}

#ifdef __cplusplus
}
#endif
