/*===========================================================================*/
/*   (Llib/bexit.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/bexit.scm -indent -o objs/obj_s/Llib/bexit.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_symbol1675z00zz__bexitz00 = BUNSPEC;
static obj_t BGl_requirezd2initializa7ationz75zz__bexitz00 = BUNSPEC;
static obj_t BGl_z62valzd2fromzd2exitzf3z91zz__bexitz00(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t bgl_failsafe_mutex_profile();
BGL_EXPORTED_DECL obj_t unwind_stack_until(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_exitdzd2execzd2protectz00zz__bexitz00(obj_t);
extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl_genericzd2initzd2zz__bexitz00();
BGL_EXPORTED_DECL obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
static obj_t BGl_z62defaultzd2uncaughtzd2exceptionzd2handlerzb0zz__bexitz00(obj_t, obj_t);
static obj_t BGl_objectzd2initzd2zz__bexitz00();
static obj_t BGl_exitdzd2execzd2andzd2popzd2protectsz12z12zz__bexitz00(obj_t);
static obj_t BGl_z62unwindzd2stackzd2valuezf3z91zz__bexitz00(obj_t, obj_t);
static obj_t BGl_z62unwindzd2untilz12za2zz__bexitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_methodzd2initzd2zz__bexitz00();
static obj_t BGl_z62exitdzd2popzd2protectz12z70zz__bexitz00(obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t unwind_stack_value_p(obj_t);
static obj_t BGl_list1655z00zz__bexitz00 = BUNSPEC;
static obj_t BGl_list1662z00zz__bexitz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_list1674z00zz__bexitz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t bgl_uncaught_exception_handler(obj_t);
static obj_t BGl_z62z42failsafezd2mutexzd2profilez20zz__bexitz00(obj_t);
extern obj_t BGl_evaluate2zd2restorezd2statez12z12zz__evaluatez00(obj_t);
static obj_t BGl_cnstzd2initzd2zz__bexitz00();
static obj_t BGl_gczd2rootszd2initz00zz__bexitz00();
static obj_t BGl_importedzd2moduleszd2initz00zz__bexitz00();
extern obj_t BGl_evaluate2zd2restorezd2bpz12z12zz__evaluatez00(int);
BGL_EXPORTED_DECL obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
static obj_t BGl_z62z42exitdzd2mutexzd2profilez20zz__bexitz00(obj_t);
static obj_t BGl_z62unwindzd2stackzd2untilz12z70zz__bexitz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol1656z00zz__bexitz00 = BUNSPEC;
static obj_t BGl_symbol1658z00zz__bexitz00 = BUNSPEC;
static obj_t BGl_z62exitdzd2pushzd2protectz12z70zz__bexitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t bgl_exitd_mutex_profile();
static obj_t BGl_symbol1660z00zz__bexitz00 = BUNSPEC;
static obj_t BGl_symbol1663z00zz__bexitz00 = BUNSPEC;
static obj_t *__cnst;


DEFINE_STRING( BGl_string1654z00zz__bexitz00, BgL_bgl_string1654za700za7za7_1683za7, "loop:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string1657z00zz__bexitz00, BgL_bgl_string1657za700za7za7_1684za7, "funcall", 7 );
DEFINE_STRING( BGl_string1659z00zz__bexitz00, BgL_bgl_string1659za700za7za7_1685za7, "proc-bottom", 11 );
DEFINE_STRING( BGl_string1661z00zz__bexitz00, BgL_bgl_string1661za700za7za7_1686za7, "val", 3 );
DEFINE_STRING( BGl_string1664z00zz__bexitz00, BgL_bgl_string1664za700za7za7_1687za7, "hdl", 3 );
DEFINE_STRING( BGl_string1665z00zz__bexitz00, BgL_bgl_string1665za700za7za7_1688za7, "unwind-protect", 14 );
DEFINE_STRING( BGl_string1666z00zz__bexitz00, BgL_bgl_string1666za700za7za7_1689za7, "exit out of dynamic scope", 25 );
DEFINE_STRING( BGl_string1667z00zz__bexitz00, BgL_bgl_string1667za700za7za7_1690za7, "/tmp/4.4a/runtime/Llib/bexit.scm", 32 );
DEFINE_STRING( BGl_string1668z00zz__bexitz00, BgL_bgl_string1668za700za7za7_1691za7, "loop", 4 );
DEFINE_STRING( BGl_string1669z00zz__bexitz00, BgL_bgl_string1669za700za7za7_1692za7, "bint", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_unwindzd2stackzd2untilz12zd2envzc0zz__bexitz00, BgL_bgl_za762unwindza7d2stac1693z00, BGl_z62unwindzd2stackzd2untilz12z70zz__bexitz00, 0L, BUNSPEC, 4 );
DEFINE_STRING( BGl_string1670z00zz__bexitz00, BgL_bgl_string1670za700za7za7_1694za7, "pair", 4 );
DEFINE_STRING( BGl_string1671z00zz__bexitz00, BgL_bgl_string1671za700za7za7_1695za7, "exitd-exec-protect", 18 );
DEFINE_STRING( BGl_string1672z00zz__bexitz00, BgL_bgl_string1672za700za7za7_1696za7, "mutex", 5 );
DEFINE_STRING( BGl_string1673z00zz__bexitz00, BgL_bgl_string1673za700za7za7_1697za7, "exitd-exec-protect:Wrong number of arguments", 44 );
DEFINE_STRING( BGl_string1676z00zz__bexitz00, BgL_bgl_string1676za700za7za7_1698za7, "p", 1 );
DEFINE_STRING( BGl_string1677z00zz__bexitz00, BgL_bgl_string1677za700za7za7_1699za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string1678z00zz__bexitz00, BgL_bgl_string1678za700za7za7_1700za7, "exitd-pop-protect!", 18 );
DEFINE_STRING( BGl_string1679z00zz__bexitz00, BgL_bgl_string1679za700za7za7_1701za7, "__bexit", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_exitdzd2pushzd2protectz12zd2envzc0zz__bexitz00, BgL_bgl_za762exitdza7d2pushza71702za7, BGl_z62exitdzd2pushzd2protectz12z70zz__bexitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_unwindzd2untilz12zd2envz12zz__bexitz00, BgL_bgl_za762unwindza7d2unti1703z00, BGl_z62unwindzd2untilz12za2zz__bexitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_valzd2fromzd2exitzf3zd2envz21zz__bexitz00, BgL_bgl_za762valza7d2fromza7d21704za7, BGl_z62valzd2fromzd2exitzf3z91zz__bexitz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_unwindzd2stackzd2valuezf3zd2envz21zz__bexitz00, BgL_bgl_za762unwindza7d2stac1705z00, BGl_z62unwindzd2stackzd2valuezf3z91zz__bexitz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_defaultzd2uncaughtzd2exceptionzd2handlerzd2envz00zz__bexitz00, BgL_bgl_za762defaultza7d2unc1706z00, BGl_z62defaultzd2uncaughtzd2exceptionzd2handlerzb0zz__bexitz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_z42failsafezd2mutexzd2profilezd2envz90zz__bexitz00, BgL_bgl_za762za742failsafeza7d1707za7, BGl_z62z42failsafezd2mutexzd2profilez20zz__bexitz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_z42exitdzd2mutexzd2profilezd2envz90zz__bexitz00, BgL_bgl_za762za742exitdza7d2mu1708za7, BGl_z62z42exitdzd2mutexzd2profilez20zz__bexitz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_exitdzd2popzd2protectz12zd2envzc0zz__bexitz00, BgL_bgl_za762exitdza7d2popza7d1709za7, BGl_z62exitdzd2popzd2protectz12z70zz__bexitz00, 0L, BUNSPEC, 1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_symbol1675z00zz__bexitz00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__bexitz00) );
ADD_ROOT( (void *)(&BGl_list1655z00zz__bexitz00) );
ADD_ROOT( (void *)(&BGl_list1662z00zz__bexitz00) );
ADD_ROOT( (void *)(&BGl_list1674z00zz__bexitz00) );
ADD_ROOT( (void *)(&BGl_symbol1656z00zz__bexitz00) );
ADD_ROOT( (void *)(&BGl_symbol1658z00zz__bexitz00) );
ADD_ROOT( (void *)(&BGl_symbol1660z00zz__bexitz00) );
ADD_ROOT( (void *)(&BGl_symbol1663z00zz__bexitz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long BgL_checksumz00_1802, char * BgL_fromz00_1803)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__bexitz00))
{ 
BGl_requirezd2initializa7ationz75zz__bexitz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__bexitz00(); 
BGl_cnstzd2initzd2zz__bexitz00(); 
BGl_importedzd2moduleszd2initz00zz__bexitz00(); 
return 
BGl_methodzd2initzd2zz__bexitz00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__bexitz00()
{
{ /* Llib/bexit.scm 14 */
BGl_symbol1656z00zz__bexitz00 = 
bstring_to_symbol(BGl_string1657z00zz__bexitz00); 
BGl_symbol1658z00zz__bexitz00 = 
bstring_to_symbol(BGl_string1659z00zz__bexitz00); 
BGl_symbol1660z00zz__bexitz00 = 
bstring_to_symbol(BGl_string1661z00zz__bexitz00); 
BGl_list1655z00zz__bexitz00 = 
MAKE_YOUNG_PAIR(BGl_symbol1656z00zz__bexitz00, 
MAKE_YOUNG_PAIR(BGl_symbol1658z00zz__bexitz00, 
MAKE_YOUNG_PAIR(BGl_symbol1658z00zz__bexitz00, 
MAKE_YOUNG_PAIR(BGl_symbol1660z00zz__bexitz00, BNIL)))); 
BGl_symbol1663z00zz__bexitz00 = 
bstring_to_symbol(BGl_string1664z00zz__bexitz00); 
BGl_list1662z00zz__bexitz00 = 
MAKE_YOUNG_PAIR(BGl_symbol1656z00zz__bexitz00, 
MAKE_YOUNG_PAIR(BGl_symbol1663z00zz__bexitz00, 
MAKE_YOUNG_PAIR(BGl_symbol1663z00zz__bexitz00, 
MAKE_YOUNG_PAIR(BGl_symbol1660z00zz__bexitz00, BNIL)))); 
BGl_symbol1675z00zz__bexitz00 = 
bstring_to_symbol(BGl_string1676z00zz__bexitz00); 
return ( 
BGl_list1674z00zz__bexitz00 = 
MAKE_YOUNG_PAIR(BGl_symbol1656z00zz__bexitz00, 
MAKE_YOUNG_PAIR(BGl_symbol1675z00zz__bexitz00, 
MAKE_YOUNG_PAIR(BGl_symbol1675z00zz__bexitz00, BNIL))), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__bexitz00()
{
{ /* Llib/bexit.scm 14 */
return 
bgl_gc_roots_register();} 

}



/* val-from-exit? */
BGL_EXPORTED_DEF obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t BgL_valz00_3)
{
{ /* Llib/bexit.scm 133 */
{ /* Llib/bexit.scm 134 */
obj_t BgL_arg1165z00_1460;
BgL_arg1165z00_1460 = 
BGL_EXITD_VAL(); 
return 
BBOOL(
(BgL_valz00_3==BgL_arg1165z00_1460));} } 

}



/* &val-from-exit? */
obj_t BGl_z62valzd2fromzd2exitzf3z91zz__bexitz00(obj_t BgL_envz00_1741, obj_t BgL_valz00_1742)
{
{ /* Llib/bexit.scm 133 */
return 
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_valz00_1742);} 

}



/* unwind-stack-value? */
BGL_EXPORTED_DEF bool_t unwind_stack_value_p(obj_t BgL_valz00_4)
{
{ /* Llib/bexit.scm 144 */
{ /* Llib/bexit.scm 134 */
obj_t BgL_arg1165z00_1461;
BgL_arg1165z00_1461 = 
BGL_EXITD_VAL(); 
return 
(BgL_valz00_4==BgL_arg1165z00_1461);} } 

}



/* &unwind-stack-value? */
obj_t BGl_z62unwindzd2stackzd2valuezf3z91zz__bexitz00(obj_t BgL_envz00_1743, obj_t BgL_valz00_1744)
{
{ /* Llib/bexit.scm 144 */
return 
BBOOL(
unwind_stack_value_p(BgL_valz00_1744));} 

}



/* unwind-until! */
BGL_EXPORTED_DEF obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t BgL_exitdz00_5, obj_t BgL_valz00_6)
{
{ /* Llib/bexit.scm 154 */
if(
PAIRP(BgL_exitdz00_5))
{ /* Llib/bexit.scm 155 */
return 
unwind_stack_until(
CAR(BgL_exitdz00_5), BFALSE, BgL_valz00_6, 
CDR(BgL_exitdz00_5));}  else 
{ /* Llib/bexit.scm 155 */
return 
unwind_stack_until(BgL_exitdz00_5, BFALSE, BgL_valz00_6, BFALSE);} } 

}



/* &unwind-until! */
obj_t BGl_z62unwindzd2untilz12za2zz__bexitz00(obj_t BgL_envz00_1745, obj_t BgL_exitdz00_1746, obj_t BgL_valz00_1747)
{
{ /* Llib/bexit.scm 154 */
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_exitdz00_1746, BgL_valz00_1747);} 

}



/* unwind-stack-until! */
BGL_EXPORTED_DEF obj_t unwind_stack_until(obj_t BgL_exitdz00_7, obj_t BgL_estampz00_8, obj_t BgL_valz00_9, obj_t BgL_proczd2bottomzd2_10)
{
{ /* Llib/bexit.scm 167 */
{ 

BgL_zc3z04anonymousza31170ze3z87_1026:
{ /* Llib/bexit.scm 169 */
obj_t BgL_exitdzd2topzd2_1027;
BgL_exitdzd2topzd2_1027 = 
BGL_EXITD_TOP_AS_OBJ(); 
if(
BGL_EXITD_BOTTOMP(BgL_exitdzd2topzd2_1027))
{ /* Llib/bexit.scm 170 */
BGl_exitdzd2execzd2andzd2popzd2protectsz12z12zz__bexitz00(BgL_exitdzd2topzd2_1027); 
if(
PROCEDUREP(BgL_proczd2bottomzd2_10))
{ /* Llib/bexit.scm 173 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_proczd2bottomzd2_10, ((long)1)))
{ /* Llib/bexit.scm 174 */
return 
PROCEDURE_ENTRY(BgL_proczd2bottomzd2_10)(BgL_proczd2bottomzd2_10, BgL_valz00_9, BEOA);}  else 
{ /* Llib/bexit.scm 174 */
FAILURE(BGl_string1654z00zz__bexitz00,BGl_list1655z00zz__bexitz00,BgL_proczd2bottomzd2_10);} }  else 
{ /* Llib/bexit.scm 175 */
obj_t BgL_hdlz00_1030;
BgL_hdlz00_1030 = 
BGL_UNCAUGHT_EXCEPTION_HANDLER_GET(); 
if(
PROCEDUREP(BgL_hdlz00_1030))
{ /* Llib/bexit.scm 176 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_hdlz00_1030, ((long)1)))
{ /* Llib/bexit.scm 176 */
return 
PROCEDURE_ENTRY(BgL_hdlz00_1030)(BgL_hdlz00_1030, BgL_valz00_9, BEOA);}  else 
{ /* Llib/bexit.scm 176 */
FAILURE(BGl_string1654z00zz__bexitz00,BGl_list1662z00zz__bexitz00,BgL_hdlz00_1030);} }  else 
{ /* Llib/bexit.scm 176 */
return 
BGl_errorz00zz__errorz00(BGl_string1665z00zz__bexitz00, BGl_string1666z00zz__bexitz00, BgL_valz00_9);} } }  else 
{ /* Llib/bexit.scm 170 */
BGl_exitdzd2execzd2andzd2popzd2protectsz12z12zz__bexitz00(BgL_exitdzd2topzd2_1027); 
POP_EXIT(); 
{ /* Llib/bexit.scm 187 */
bool_t BgL_test1718z00_1869;
if(
(BgL_exitdzd2topzd2_1027==BgL_exitdz00_7))
{ /* Llib/bexit.scm 188 */
bool_t BgL__ortest_1039z00_1044;
if(
INTEGERP(BgL_estampz00_8))
{ /* Llib/bexit.scm 188 */
BgL__ortest_1039z00_1044 = ((bool_t)0); }  else 
{ /* Llib/bexit.scm 188 */
BgL__ortest_1039z00_1044 = ((bool_t)1); } 
if(BgL__ortest_1039z00_1044)
{ /* Llib/bexit.scm 188 */
BgL_test1718z00_1869 = BgL__ortest_1039z00_1044
; }  else 
{ /* Llib/bexit.scm 189 */
obj_t BgL_arg1194z00_1045;
BgL_arg1194z00_1045 = 
EXITD_STAMP(BgL_exitdzd2topzd2_1027); 
{ /* Llib/bexit.scm 189 */
long BgL_n1z00_1468;long BgL_n2z00_1469;
BgL_n1z00_1468 = 
(long)CINT(BgL_arg1194z00_1045); 
{ /* Llib/bexit.scm 189 */
obj_t BgL_tmpz00_1877;
if(
INTEGERP(BgL_estampz00_8))
{ /* Llib/bexit.scm 189 */
BgL_tmpz00_1877 = BgL_estampz00_8
; }  else 
{ 
obj_t BgL_auxz00_1880;
BgL_auxz00_1880 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__bexitz00, 
BINT(((long)7914)), BGl_string1668z00zz__bexitz00, BGl_string1669z00zz__bexitz00, BgL_estampz00_8); 
FAILURE(BgL_auxz00_1880,BFALSE,BFALSE);} 
BgL_n2z00_1469 = 
(long)CINT(BgL_tmpz00_1877); } 
BgL_test1718z00_1869 = 
(BgL_n1z00_1468==BgL_n2z00_1469); } } }  else 
{ /* Llib/bexit.scm 187 */
BgL_test1718z00_1869 = ((bool_t)0)
; } 
if(BgL_test1718z00_1869)
{ /* Llib/bexit.scm 187 */
if(
EXITD_CALLCCP(BgL_exitdzd2topzd2_1027))
{ /* Llib/bexit.scm 192 */
void * BgL_arg1179z00_1038;
BgL_arg1179z00_1038 = 
EXITD_TO_EXIT(BgL_exitdzd2topzd2_1027); 
CALLCC_JUMP_EXIT(BgL_arg1179z00_1038, BgL_valz00_9); }  else 
{ /* Llib/bexit.scm 190 */
JUMP_EXIT( 
EXITD_TO_EXIT(BgL_exitdzd2topzd2_1027),BgL_valz00_9)
; } 
return BUNSPEC;}  else 
{ /* Llib/bexit.scm 187 */
if(
EXITD_USERP(BgL_exitdzd2topzd2_1027))
{ /* Llib/bexit.scm 196 */
goto BgL_zc3z04anonymousza31170ze3z87_1026;}  else 
{ /* Llib/bexit.scm 196 */
{ /* Llib/bexit.scm 197 */
obj_t BgL_pz00_1040;
BgL_pz00_1040 = 
BGL_EXITD_VAL(); 
{ /* Llib/bexit.scm 198 */
obj_t BgL_arg1186z00_1041;
{ /* Llib/bexit.scm 198 */
obj_t BgL_pairz00_1471;
if(
PAIRP(BgL_pz00_1040))
{ /* Llib/bexit.scm 198 */
BgL_pairz00_1471 = BgL_pz00_1040; }  else 
{ 
obj_t BgL_auxz00_1898;
BgL_auxz00_1898 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__bexitz00, 
BINT(((long)8244)), BGl_string1668z00zz__bexitz00, BGl_string1670z00zz__bexitz00, BgL_pz00_1040); 
FAILURE(BgL_auxz00_1898,BFALSE,BFALSE);} 
BgL_arg1186z00_1041 = 
CAR(BgL_pairz00_1471); } 
{ /* Llib/bexit.scm 198 */
obj_t BgL_pairz00_1472;
if(
PAIRP(BgL_arg1186z00_1041))
{ /* Llib/bexit.scm 198 */
BgL_pairz00_1472 = BgL_arg1186z00_1041; }  else 
{ 
obj_t BgL_auxz00_1905;
BgL_auxz00_1905 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__bexitz00, 
BINT(((long)8245)), BGl_string1668z00zz__bexitz00, BGl_string1670z00zz__bexitz00, BgL_arg1186z00_1041); 
FAILURE(BgL_auxz00_1905,BFALSE,BFALSE);} 
SET_CAR(BgL_pairz00_1472, BgL_exitdz00_7); } } 
{ /* Llib/bexit.scm 199 */
obj_t BgL_arg1190z00_1042;
{ /* Llib/bexit.scm 199 */
obj_t BgL_pairz00_1473;
if(
PAIRP(BgL_pz00_1040))
{ /* Llib/bexit.scm 199 */
BgL_pairz00_1473 = BgL_pz00_1040; }  else 
{ 
obj_t BgL_auxz00_1912;
BgL_auxz00_1912 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__bexitz00, 
BINT(((long)8278)), BGl_string1668z00zz__bexitz00, BGl_string1670z00zz__bexitz00, BgL_pz00_1040); 
FAILURE(BgL_auxz00_1912,BFALSE,BFALSE);} 
BgL_arg1190z00_1042 = 
CAR(BgL_pairz00_1473); } 
{ /* Llib/bexit.scm 199 */
obj_t BgL_pairz00_1474;
if(
PAIRP(BgL_arg1190z00_1042))
{ /* Llib/bexit.scm 199 */
BgL_pairz00_1474 = BgL_arg1190z00_1042; }  else 
{ 
obj_t BgL_auxz00_1919;
BgL_auxz00_1919 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__bexitz00, 
BINT(((long)8279)), BGl_string1668z00zz__bexitz00, BGl_string1670z00zz__bexitz00, BgL_arg1190z00_1042); 
FAILURE(BgL_auxz00_1919,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_1474, BgL_proczd2bottomzd2_10); } } 
{ /* Llib/bexit.scm 200 */
obj_t BgL_pairz00_1475;
if(
PAIRP(BgL_pz00_1040))
{ /* Llib/bexit.scm 200 */
BgL_pairz00_1475 = BgL_pz00_1040; }  else 
{ 
obj_t BgL_auxz00_1926;
BgL_auxz00_1926 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__bexitz00, 
BINT(((long)8313)), BGl_string1668z00zz__bexitz00, BGl_string1670z00zz__bexitz00, BgL_pz00_1040); 
FAILURE(BgL_auxz00_1926,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_1475, BgL_valz00_9); } 
JUMP_EXIT( 
EXITD_TO_EXIT(BgL_exitdzd2topzd2_1027),BgL_pz00_1040); } 
return BUNSPEC;} } } } } } } 

}



/* &unwind-stack-until! */
obj_t BGl_z62unwindzd2stackzd2untilz12z70zz__bexitz00(obj_t BgL_envz00_1748, obj_t BgL_exitdz00_1749, obj_t BgL_estampz00_1750, obj_t BgL_valz00_1751, obj_t BgL_proczd2bottomzd2_1752)
{
{ /* Llib/bexit.scm 167 */
return 
unwind_stack_until(BgL_exitdz00_1749, BgL_estampz00_1750, BgL_valz00_1751, BgL_proczd2bottomzd2_1752);} 

}



/* exitd-exec-protect */
obj_t BGl_exitdzd2execzd2protectz00zz__bexitz00(obj_t BgL_pz00_11)
{
{ /* Llib/bexit.scm 209 */
{ /* Llib/bexit.scm 211 */
bool_t BgL_test1731z00_1935;
{ /* Llib/bexit.scm 211 */
bool_t BgL_res1569z00_1476;
BgL_res1569z00_1476 = 
BGL_MUTEXP(BgL_pz00_11); 
BgL_test1731z00_1935 = BgL_res1569z00_1476; } 
if(BgL_test1731z00_1935)
{ /* Llib/bexit.scm 211 */
obj_t BgL_mz00_1477;
if(
BGL_MUTEXP(BgL_pz00_11))
{ /* Llib/bexit.scm 211 */
BgL_mz00_1477 = BgL_pz00_11; }  else 
{ 
obj_t BgL_auxz00_1939;
BgL_auxz00_1939 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__bexitz00, 
BINT(((long)8716)), BGl_string1671z00zz__bexitz00, BGl_string1672z00zz__bexitz00, BgL_pz00_11); 
FAILURE(BgL_auxz00_1939,BFALSE,BFALSE);} 
{ /* Llib/bexit.scm 211 */
int BgL_arg1530z00_1478;
BgL_arg1530z00_1478 = 
BGL_MUTEX_UNLOCK(BgL_mz00_1477); 
return 
BBOOL(
(
(long)(BgL_arg1530z00_1478)==((long)0)));} }  else 
{ /* Llib/bexit.scm 211 */
if(
PROCEDUREP(BgL_pz00_11))
{ /* Llib/bexit.scm 212 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_pz00_11, ((long)0)))
{ /* Llib/bexit.scm 212 */
return 
PROCEDURE_ENTRY(BgL_pz00_11)(BgL_pz00_11, BEOA);}  else 
{ /* Llib/bexit.scm 212 */
FAILURE(BGl_string1673z00zz__bexitz00,BGl_list1674z00zz__bexitz00,BgL_pz00_11);} }  else 
{ /* Llib/bexit.scm 212 */
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_pz00_11))
{ /* Llib/bexit.scm 213 */
int BgL_auxz00_1957;
{ /* Llib/bexit.scm 213 */
obj_t BgL_tmpz00_1958;
if(
INTEGERP(BgL_pz00_11))
{ /* Llib/bexit.scm 213 */
BgL_tmpz00_1958 = BgL_pz00_11
; }  else 
{ 
obj_t BgL_auxz00_1961;
BgL_auxz00_1961 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__bexitz00, 
BINT(((long)8790)), BGl_string1671z00zz__bexitz00, BGl_string1669z00zz__bexitz00, BgL_pz00_11); 
FAILURE(BgL_auxz00_1961,BFALSE,BFALSE);} 
BgL_auxz00_1957 = 
CINT(BgL_tmpz00_1958); } 
return 
BGl_evaluate2zd2restorezd2bpz12z12zz__evaluatez00(BgL_auxz00_1957);}  else 
{ /* Llib/bexit.scm 213 */
if(
VECTORP(BgL_pz00_11))
{ /* Llib/bexit.scm 214 */
return 
BGl_evaluate2zd2restorezd2statez12z12zz__evaluatez00(BgL_pz00_11);}  else 
{ /* Llib/bexit.scm 214 */
return BFALSE;} } } } } } 

}



/* exitd-exec-and-pop-protects! */
obj_t BGl_exitdzd2execzd2andzd2popzd2protectsz12z12zz__bexitz00(obj_t BgL_exitdz00_12)
{
{ /* Llib/bexit.scm 222 */
{ /* Llib/bexit.scm 223 */
obj_t BgL_g1040z00_1052;
BgL_g1040z00_1052 = 
BGL_EXITD_PROTECTN(BgL_exitdz00_12); 
{ 
obj_t BgL_lz00_1054;
BgL_lz00_1054 = BgL_g1040z00_1052; 
BgL_zc3z04anonymousza31199ze3z87_1055:
if(
PAIRP(BgL_lz00_1054))
{ /* Llib/bexit.scm 225 */
obj_t BgL_pz00_1057;
BgL_pz00_1057 = 
CAR(BgL_lz00_1054); 
{ /* Llib/bexit.scm 226 */
obj_t BgL_arg1201z00_1058;
BgL_arg1201z00_1058 = 
CDR(BgL_lz00_1054); 
{ /* Llib/bexit.scm 226 */
obj_t BgL_tmpz00_1975;
{ /* Llib/bexit.scm 226 */
bool_t BgL_test1739z00_1976;
if(
PAIRP(BgL_arg1201z00_1058))
{ /* Llib/bexit.scm 226 */
BgL_test1739z00_1976 = ((bool_t)1)
; }  else 
{ /* Llib/bexit.scm 226 */
BgL_test1739z00_1976 = 
NULLP(BgL_arg1201z00_1058)
; } 
if(BgL_test1739z00_1976)
{ /* Llib/bexit.scm 226 */
BgL_tmpz00_1975 = BgL_arg1201z00_1058
; }  else 
{ 
obj_t BgL_auxz00_1980;
BgL_auxz00_1980 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__bexitz00, 
BINT(((long)9466)), BGl_string1668z00zz__bexitz00, BGl_string1677z00zz__bexitz00, BgL_arg1201z00_1058); 
FAILURE(BgL_auxz00_1980,BFALSE,BFALSE);} } 
BGL_EXITD_PROTECTN_SET(BgL_exitdz00_12, BgL_tmpz00_1975); } BUNSPEC; } 
BGl_exitdzd2execzd2protectz00zz__bexitz00(BgL_pz00_1057); 
{ 
obj_t BgL_lz00_1986;
BgL_lz00_1986 = 
CDR(BgL_lz00_1054); 
BgL_lz00_1054 = BgL_lz00_1986; 
goto BgL_zc3z04anonymousza31199ze3z87_1055;} }  else 
{ /* Llib/bexit.scm 224 */((bool_t)0); } } } 
{ /* Llib/bexit.scm 229 */
obj_t BgL_pz00_1061;
BgL_pz00_1061 = 
BGL_EXITD_PROTECT1(BgL_exitdz00_12); 
if(
CBOOL(BgL_pz00_1061))
{ /* Llib/bexit.scm 230 */
BGL_EXITD_PROTECT1_SET(BgL_exitdz00_12, BFALSE); BUNSPEC; 
BGl_exitdzd2execzd2protectz00zz__bexitz00(BgL_pz00_1061); }  else 
{ /* Llib/bexit.scm 230 */BFALSE; } } 
{ /* Llib/bexit.scm 233 */
obj_t BgL_pz00_1062;
BgL_pz00_1062 = 
BGL_EXITD_PROTECT0(BgL_exitdz00_12); 
BGL_EXITD_PROTECT0_SET(BgL_exitdz00_12, BFALSE); BUNSPEC; 
return 
BGl_exitdzd2execzd2protectz00zz__bexitz00(BgL_pz00_1062);} } 

}



/* exitd-push-protect! */
BGL_EXPORTED_DEF obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t BgL_exitdz00_13, obj_t BgL_mz00_14)
{
{ /* Llib/bexit.scm 244 */
if(
CBOOL(
BGL_EXITD_PROTECT0(BgL_exitdz00_13)))
{ /* Llib/bexit.scm 246 */
if(
CBOOL(
BGL_EXITD_PROTECT1(BgL_exitdz00_13)))
{ /* Llib/bexit.scm 251 */
obj_t BgL_arg1211z00_1065;
{ /* Llib/bexit.scm 251 */
obj_t BgL_arg1216z00_1066;
BgL_arg1216z00_1066 = 
BGL_EXITD_PROTECTN(BgL_exitdz00_13); 
BgL_arg1211z00_1065 = 
MAKE_YOUNG_PAIR(BgL_mz00_14, BgL_arg1216z00_1066); } 
BGL_EXITD_PROTECTN_SET(BgL_exitdz00_13, BgL_arg1211z00_1065); 
return BUNSPEC;}  else 
{ /* Llib/bexit.scm 248 */
BGL_EXITD_PROTECT1_SET(BgL_exitdz00_13, BgL_mz00_14); 
return BUNSPEC;} }  else 
{ /* Llib/bexit.scm 246 */
BGL_EXITD_PROTECT0_SET(BgL_exitdz00_13, BgL_mz00_14); 
return BUNSPEC;} } 

}



/* &exitd-push-protect! */
obj_t BGl_z62exitdzd2pushzd2protectz12z70zz__bexitz00(obj_t BgL_envz00_1753, obj_t BgL_exitdz00_1754, obj_t BgL_mz00_1755)
{
{ /* Llib/bexit.scm 244 */
return 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitdz00_1754, BgL_mz00_1755);} 

}



/* exitd-pop-protect! */
BGL_EXPORTED_DEF obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t BgL_exitdz00_15)
{
{ /* Llib/bexit.scm 256 */
if(
CBOOL(
BGL_EXITD_PROTECT1(BgL_exitdz00_15)))
{ /* Llib/bexit.scm 260 */
bool_t BgL_test1745z00_2011;
{ /* Llib/bexit.scm 260 */
obj_t BgL_arg1227z00_1072;
BgL_arg1227z00_1072 = 
BGL_EXITD_PROTECTN(BgL_exitdz00_15); 
BgL_test1745z00_2011 = 
NULLP(BgL_arg1227z00_1072); } 
if(BgL_test1745z00_2011)
{ /* Llib/bexit.scm 260 */
BGL_EXITD_PROTECT1_SET(BgL_exitdz00_15, BFALSE); 
return BUNSPEC;}  else 
{ /* Llib/bexit.scm 263 */
obj_t BgL_arg1223z00_1070;
{ /* Llib/bexit.scm 263 */
obj_t BgL_arg1225z00_1071;
BgL_arg1225z00_1071 = 
BGL_EXITD_PROTECTN(BgL_exitdz00_15); 
{ /* Llib/bexit.scm 263 */
obj_t BgL_pairz00_1488;
if(
PAIRP(BgL_arg1225z00_1071))
{ /* Llib/bexit.scm 263 */
BgL_pairz00_1488 = BgL_arg1225z00_1071; }  else 
{ 
obj_t BgL_auxz00_2018;
BgL_auxz00_2018 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__bexitz00, 
BINT(((long)11021)), BGl_string1678z00zz__bexitz00, BGl_string1670z00zz__bexitz00, BgL_arg1225z00_1071); 
FAILURE(BgL_auxz00_2018,BFALSE,BFALSE);} 
BgL_arg1223z00_1070 = 
CDR(BgL_pairz00_1488); } } 
{ /* Llib/bexit.scm 263 */
obj_t BgL_tmpz00_2023;
{ /* Llib/bexit.scm 263 */
bool_t BgL_test1747z00_2024;
if(
PAIRP(BgL_arg1223z00_1070))
{ /* Llib/bexit.scm 263 */
BgL_test1747z00_2024 = ((bool_t)1)
; }  else 
{ /* Llib/bexit.scm 263 */
BgL_test1747z00_2024 = 
NULLP(BgL_arg1223z00_1070)
; } 
if(BgL_test1747z00_2024)
{ /* Llib/bexit.scm 263 */
BgL_tmpz00_2023 = BgL_arg1223z00_1070
; }  else 
{ 
obj_t BgL_auxz00_2028;
BgL_auxz00_2028 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__bexitz00, 
BINT(((long)11022)), BGl_string1678z00zz__bexitz00, BGl_string1677z00zz__bexitz00, BgL_arg1223z00_1070); 
FAILURE(BgL_auxz00_2028,BFALSE,BFALSE);} } 
BGL_EXITD_PROTECTN_SET(BgL_exitdz00_15, BgL_tmpz00_2023); } 
return BUNSPEC;} }  else 
{ /* Llib/bexit.scm 258 */
BGL_EXITD_PROTECT0_SET(BgL_exitdz00_15, BFALSE); 
return BUNSPEC;} } 

}



/* &exitd-pop-protect! */
obj_t BGl_z62exitdzd2popzd2protectz12z70zz__bexitz00(obj_t BgL_envz00_1756, obj_t BgL_exitdz00_1757)
{
{ /* Llib/bexit.scm 256 */
return 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitdz00_1757);} 

}



/* default-uncaught-exception-handler */
BGL_EXPORTED_DEF obj_t bgl_uncaught_exception_handler(obj_t BgL_valz00_16)
{
{ /* Llib/bexit.scm 268 */
return 
BGl_errorz00zz__errorz00(BGl_string1665z00zz__bexitz00, BGl_string1666z00zz__bexitz00, BgL_valz00_16);} 

}



/* &default-uncaught-exception-handler */
obj_t BGl_z62defaultzd2uncaughtzd2exceptionzd2handlerzb0zz__bexitz00(obj_t BgL_envz00_1758, obj_t BgL_valz00_1759)
{
{ /* Llib/bexit.scm 268 */
return 
bgl_uncaught_exception_handler(BgL_valz00_1759);} 

}



/* $exitd-mutex-profile */
BGL_EXPORTED_DEF obj_t bgl_exitd_mutex_profile()
{
{ /* Llib/bexit.scm 279 */
return BUNSPEC;} 

}



/* &$exitd-mutex-profile */
obj_t BGl_z62z42exitdzd2mutexzd2profilez20zz__bexitz00(obj_t BgL_envz00_1760)
{
{ /* Llib/bexit.scm 279 */
return 
bgl_exitd_mutex_profile();} 

}



/* $failsafe-mutex-profile */
BGL_EXPORTED_DEF obj_t bgl_failsafe_mutex_profile()
{
{ /* Llib/bexit.scm 280 */
return BUNSPEC;} 

}



/* &$failsafe-mutex-profile */
obj_t BGl_z62z42failsafezd2mutexzd2profilez20zz__bexitz00(obj_t BgL_envz00_1761)
{
{ /* Llib/bexit.scm 280 */
return 
bgl_failsafe_mutex_profile();} 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__bexitz00()
{
{ /* Llib/bexit.scm 14 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__bexitz00()
{
{ /* Llib/bexit.scm 14 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__bexitz00()
{
{ /* Llib/bexit.scm 14 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__bexitz00()
{
{ /* Llib/bexit.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string1679z00zz__bexitz00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)193422032), 
BSTRING_TO_STRING(BGl_string1679z00zz__bexitz00)); 
return 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)224967910), 
BSTRING_TO_STRING(BGl_string1679z00zz__bexitz00));} 

}

#ifdef __cplusplus
}
#endif
