/*===========================================================================*/
/*   (Llib/custom.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/custom.scm -indent -o objs/obj_s/Llib/custom.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_z62customzf3z91zz__customz00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__customz00 = BUNSPEC;
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_customzd2nilzd2zz__customz00();
static obj_t BGl_z62customzd2hashzb0zz__customz00(obj_t, obj_t, obj_t);
static obj_t BGl_genericzd2initzd2zz__customz00();
static obj_t BGl_objectzd2initzd2zz__customz00();
static obj_t BGl_z62customzd2nilzb0zz__customz00(obj_t);
static obj_t BGl_methodzd2initzd2zz__customz00();
BGL_EXPORTED_DECL char * BGl_customzd2identifierzd2zz__customz00(obj_t);
static obj_t BGl_z62customzd2equalzf3z43zz__customz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_customzf3zf3zz__customz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__customz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL obj_t BGl_customzd2identifierzd2setz12z12zz__customz00(obj_t, char *);
static obj_t BGl_gczd2rootszd2initz00zz__customz00();
static obj_t BGl_importedzd2moduleszd2initz00zz__customz00();
extern obj_t bgl_custom_nil();
static obj_t BGl_z62customzd2identifierzb0zz__customz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_customzd2equalzf3z21zz__customz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_customzd2hashzd2zz__customz00(obj_t, int);
static obj_t BGl_z62customzd2identifierzd2setz12z70zz__customz00(obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_STRING( BGl_string1614z00zz__customz00, BgL_bgl_string1614za700za7za7_1623za7, "/tmp/4.4a/runtime/Llib/custom.scm", 33 );
DEFINE_STRING( BGl_string1615z00zz__customz00, BgL_bgl_string1615za700za7za7_1624za7, "&custom-equal?", 14 );
DEFINE_STRING( BGl_string1616z00zz__customz00, BgL_bgl_string1616za700za7za7_1625za7, "custom", 6 );
DEFINE_STRING( BGl_string1617z00zz__customz00, BgL_bgl_string1617za700za7za7_1626za7, "&custom-identifier", 18 );
DEFINE_STRING( BGl_string1618z00zz__customz00, BgL_bgl_string1618za700za7za7_1627za7, "&custom-identifier-set!", 23 );
DEFINE_STRING( BGl_string1619z00zz__customz00, BgL_bgl_string1619za700za7za7_1628za7, "bstring", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_customzd2identifierzd2setz12zd2envzc0zz__customz00, BgL_bgl_za762customza7d2iden1629z00, BGl_z62customzd2identifierzd2setz12z70zz__customz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1620z00zz__customz00, BgL_bgl_string1620za700za7za7_1630za7, "&custom-hash", 12 );
DEFINE_STRING( BGl_string1621z00zz__customz00, BgL_bgl_string1621za700za7za7_1631za7, "bint", 4 );
DEFINE_STRING( BGl_string1622z00zz__customz00, BgL_bgl_string1622za700za7za7_1632za7, "__custom", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_customzd2hashzd2envz00zz__customz00, BgL_bgl_za762customza7d2hash1633z00, BGl_z62customzd2hashzb0zz__customz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_customzd2nilzd2envz00zz__customz00, BgL_bgl_za762customza7d2nilza71634za7, BGl_z62customzd2nilzb0zz__customz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_customzd2equalzf3zd2envzf3zz__customz00, BgL_bgl_za762customza7d2equa1635z00, BGl_z62customzd2equalzf3z43zz__customz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_customzd2identifierzd2envz00zz__customz00, BgL_bgl_za762customza7d2iden1636z00, BGl_z62customzd2identifierzb0zz__customz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_customzf3zd2envz21zz__customz00, BgL_bgl_za762customza7f3za791za71637z00, BGl_z62customzf3z91zz__customz00, 0L, BUNSPEC, 1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__customz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__customz00(long BgL_checksumz00_1763, char * BgL_fromz00_1764)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__customz00))
{ 
BGl_requirezd2initializa7ationz75zz__customz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__customz00(); 
BGl_importedzd2moduleszd2initz00zz__customz00(); 
return 
BGl_methodzd2initzd2zz__customz00();}  else 
{ 
return BUNSPEC;} } 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__customz00()
{
{ /* Llib/custom.scm 14 */
return 
bgl_gc_roots_register();} 

}



/* custom? */
BGL_EXPORTED_DEF bool_t BGl_customzf3zf3zz__customz00(obj_t BgL_objz00_3)
{
{ /* Llib/custom.scm 84 */
return 
CUSTOMP(BgL_objz00_3);} 

}



/* &custom? */
obj_t BGl_z62customzf3z91zz__customz00(obj_t BgL_envz00_1735, obj_t BgL_objz00_1736)
{
{ /* Llib/custom.scm 84 */
return 
BBOOL(
BGl_customzf3zf3zz__customz00(BgL_objz00_1736));} 

}



/* custom-nil */
BGL_EXPORTED_DEF obj_t BGl_customzd2nilzd2zz__customz00()
{
{ /* Llib/custom.scm 90 */
return 
bgl_custom_nil();} 

}



/* &custom-nil */
obj_t BGl_z62customzd2nilzb0zz__customz00(obj_t BgL_envz00_1737)
{
{ /* Llib/custom.scm 90 */
return 
BGl_customzd2nilzd2zz__customz00();} 

}



/* custom-equal? */
BGL_EXPORTED_DEF bool_t BGl_customzd2equalzf3z21zz__customz00(obj_t BgL_obj1z00_4, obj_t BgL_obj2z00_5)
{
{ /* Llib/custom.scm 96 */
return 
CUSTOM_CMP(BgL_obj1z00_4, BgL_obj2z00_5);} 

}



/* &custom-equal? */
obj_t BGl_z62customzd2equalzf3z43zz__customz00(obj_t BgL_envz00_1738, obj_t BgL_obj1z00_1739, obj_t BgL_obj2z00_1740)
{
{ /* Llib/custom.scm 96 */
{ /* Llib/custom.scm 97 */
bool_t BgL_tmpz00_1778;
{ /* Llib/custom.scm 97 */
obj_t BgL_auxz00_1786;obj_t BgL_auxz00_1779;
if(
CUSTOMP(BgL_obj2z00_1740))
{ /* Llib/custom.scm 97 */
BgL_auxz00_1786 = BgL_obj2z00_1740
; }  else 
{ 
obj_t BgL_auxz00_1789;
BgL_auxz00_1789 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1614z00zz__customz00, 
BINT(((long)3593)), BGl_string1615z00zz__customz00, BGl_string1616z00zz__customz00, BgL_obj2z00_1740); 
FAILURE(BgL_auxz00_1789,BFALSE,BFALSE);} 
if(
CUSTOMP(BgL_obj1z00_1739))
{ /* Llib/custom.scm 97 */
BgL_auxz00_1779 = BgL_obj1z00_1739
; }  else 
{ 
obj_t BgL_auxz00_1782;
BgL_auxz00_1782 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1614z00zz__customz00, 
BINT(((long)3593)), BGl_string1615z00zz__customz00, BGl_string1616z00zz__customz00, BgL_obj1z00_1739); 
FAILURE(BgL_auxz00_1782,BFALSE,BFALSE);} 
BgL_tmpz00_1778 = 
BGl_customzd2equalzf3z21zz__customz00(BgL_auxz00_1779, BgL_auxz00_1786); } 
return 
BBOOL(BgL_tmpz00_1778);} } 

}



/* custom-identifier */
BGL_EXPORTED_DEF char * BGl_customzd2identifierzd2zz__customz00(obj_t BgL_customz00_6)
{
{ /* Llib/custom.scm 102 */
return 
CUSTOM_IDENTIFIER(BgL_customz00_6);} 

}



/* &custom-identifier */
obj_t BGl_z62customzd2identifierzb0zz__customz00(obj_t BgL_envz00_1741, obj_t BgL_customz00_1742)
{
{ /* Llib/custom.scm 102 */
{ /* Llib/custom.scm 103 */
char * BgL_tmpz00_1796;
{ /* Llib/custom.scm 103 */
obj_t BgL_auxz00_1797;
if(
CUSTOMP(BgL_customz00_1742))
{ /* Llib/custom.scm 103 */
BgL_auxz00_1797 = BgL_customz00_1742
; }  else 
{ 
obj_t BgL_auxz00_1800;
BgL_auxz00_1800 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1614z00zz__customz00, 
BINT(((long)3906)), BGl_string1617z00zz__customz00, BGl_string1616z00zz__customz00, BgL_customz00_1742); 
FAILURE(BgL_auxz00_1800,BFALSE,BFALSE);} 
BgL_tmpz00_1796 = 
BGl_customzd2identifierzd2zz__customz00(BgL_auxz00_1797); } 
return 
string_to_bstring(BgL_tmpz00_1796);} } 

}



/* custom-identifier-set! */
BGL_EXPORTED_DEF obj_t BGl_customzd2identifierzd2setz12z12zz__customz00(obj_t BgL_customz00_7, char * BgL_strz00_8)
{
{ /* Llib/custom.scm 108 */
return 
CUSTOM_IDENTIFIER_SET(BgL_customz00_7, BgL_strz00_8);} 

}



/* &custom-identifier-set! */
obj_t BGl_z62customzd2identifierzd2setz12z70zz__customz00(obj_t BgL_envz00_1743, obj_t BgL_customz00_1744, obj_t BgL_strz00_1745)
{
{ /* Llib/custom.scm 108 */
{ /* Llib/custom.scm 109 */
char * BgL_auxz00_1814;obj_t BgL_auxz00_1807;
{ /* Llib/custom.scm 109 */
obj_t BgL_tmpz00_1815;
if(
STRINGP(BgL_strz00_1745))
{ /* Llib/custom.scm 109 */
BgL_tmpz00_1815 = BgL_strz00_1745
; }  else 
{ 
obj_t BgL_auxz00_1818;
BgL_auxz00_1818 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1614z00zz__customz00, 
BINT(((long)4229)), BGl_string1618z00zz__customz00, BGl_string1619z00zz__customz00, BgL_strz00_1745); 
FAILURE(BgL_auxz00_1818,BFALSE,BFALSE);} 
BgL_auxz00_1814 = 
BSTRING_TO_STRING(BgL_tmpz00_1815); } 
if(
CUSTOMP(BgL_customz00_1744))
{ /* Llib/custom.scm 109 */
BgL_auxz00_1807 = BgL_customz00_1744
; }  else 
{ 
obj_t BgL_auxz00_1810;
BgL_auxz00_1810 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1614z00zz__customz00, 
BINT(((long)4229)), BGl_string1618z00zz__customz00, BGl_string1616z00zz__customz00, BgL_customz00_1744); 
FAILURE(BgL_auxz00_1810,BFALSE,BFALSE);} 
return 
BGl_customzd2identifierzd2setz12z12zz__customz00(BgL_auxz00_1807, BgL_auxz00_1814);} } 

}



/* custom-hash */
BGL_EXPORTED_DEF obj_t BGl_customzd2hashzd2zz__customz00(obj_t BgL_customz00_9, int BgL_modz00_10)
{
{ /* Llib/custom.scm 114 */
{ /* Llib/custom.scm 115 */
int BgL_numz00_1447;
BgL_numz00_1447 = 
CUSTOM_HASH_NUMBER(BgL_customz00_9); 
{ /* Llib/custom.scm 116 */
long BgL_res1543z00_1466;
{ /* Llib/custom.scm 116 */
long BgL_n1z00_1448;long BgL_n2z00_1449;
BgL_n1z00_1448 = 
(long)(BgL_numz00_1447); 
BgL_n2z00_1449 = 
(long)(BgL_modz00_10); 
{ /* Llib/custom.scm 116 */
bool_t BgL_test1644z00_1827;
{ /* Llib/custom.scm 116 */
long BgL_arg1384z00_1451;
BgL_arg1384z00_1451 = 
(((BgL_n1z00_1448) | (BgL_n2z00_1449)) & -2147483648); 
BgL_test1644z00_1827 = 
(BgL_arg1384z00_1451==((long)0)); } 
if(BgL_test1644z00_1827)
{ /* Llib/custom.scm 116 */
int32_t BgL_arg1381z00_1452;
{ /* Llib/custom.scm 116 */
int32_t BgL_arg1382z00_1453;int32_t BgL_arg1383z00_1454;
{ /* Llib/custom.scm 116 */
int32_t BgL_res1539z00_1458;
BgL_res1539z00_1458 = 
(int32_t)(BgL_n1z00_1448); 
BgL_arg1382z00_1453 = BgL_res1539z00_1458; } 
{ /* Llib/custom.scm 116 */
int32_t BgL_res1540z00_1460;
BgL_res1540z00_1460 = 
(int32_t)(BgL_n2z00_1449); 
BgL_arg1383z00_1454 = BgL_res1540z00_1460; } 
BgL_arg1381z00_1452 = 
(BgL_arg1382z00_1453%BgL_arg1383z00_1454); } 
{ /* Llib/custom.scm 116 */
long BgL_res1542z00_1465;
{ /* Llib/custom.scm 116 */
long BgL_arg1480z00_1462;
BgL_arg1480z00_1462 = 
(long)(BgL_arg1381z00_1452); 
{ /* Llib/custom.scm 116 */
long BgL_res1541z00_1464;
BgL_res1541z00_1464 = 
(long)(BgL_arg1480z00_1462); 
BgL_res1542z00_1465 = BgL_res1541z00_1464; } } 
BgL_res1543z00_1466 = BgL_res1542z00_1465; } }  else 
{ /* Llib/custom.scm 116 */
BgL_res1543z00_1466 = 
(BgL_n1z00_1448%BgL_n2z00_1449); } } } 
return 
BINT(BgL_res1543z00_1466);} } } 

}



/* &custom-hash */
obj_t BGl_z62customzd2hashzb0zz__customz00(obj_t BgL_envz00_1746, obj_t BgL_customz00_1747, obj_t BgL_modz00_1748)
{
{ /* Llib/custom.scm 114 */
{ /* Llib/custom.scm 115 */
int BgL_auxz00_1844;obj_t BgL_auxz00_1837;
{ /* Llib/custom.scm 115 */
obj_t BgL_tmpz00_1845;
if(
INTEGERP(BgL_modz00_1748))
{ /* Llib/custom.scm 115 */
BgL_tmpz00_1845 = BgL_modz00_1748
; }  else 
{ 
obj_t BgL_auxz00_1848;
BgL_auxz00_1848 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1614z00zz__customz00, 
BINT(((long)4540)), BGl_string1620z00zz__customz00, BGl_string1621z00zz__customz00, BgL_modz00_1748); 
FAILURE(BgL_auxz00_1848,BFALSE,BFALSE);} 
BgL_auxz00_1844 = 
CINT(BgL_tmpz00_1845); } 
if(
CUSTOMP(BgL_customz00_1747))
{ /* Llib/custom.scm 115 */
BgL_auxz00_1837 = BgL_customz00_1747
; }  else 
{ 
obj_t BgL_auxz00_1840;
BgL_auxz00_1840 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1614z00zz__customz00, 
BINT(((long)4540)), BGl_string1620z00zz__customz00, BGl_string1616z00zz__customz00, BgL_customz00_1747); 
FAILURE(BgL_auxz00_1840,BFALSE,BFALSE);} 
return 
BGl_customzd2hashzd2zz__customz00(BgL_auxz00_1837, BgL_auxz00_1844);} } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__customz00()
{
{ /* Llib/custom.scm 14 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__customz00()
{
{ /* Llib/custom.scm 14 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__customz00()
{
{ /* Llib/custom.scm 14 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__customz00()
{
{ /* Llib/custom.scm 14 */
return 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string1622z00zz__customz00));} 

}

#ifdef __cplusplus
}
#endif
