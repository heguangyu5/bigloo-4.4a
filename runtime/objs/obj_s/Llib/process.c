/*===========================================================================*/
/*   (Llib/process.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/process.scm -indent -o objs/obj_s/Llib/process.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
extern obj_t c_process_xstatus(obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__processz00 = BUNSPEC;
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62processzd2killzb0zz__processz00(obj_t, obj_t);
static obj_t BGl_z62runzd2processzb0zz__processz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62processzd2errorzd2portz62zz__processz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_processzf3zf3zz__processz00(obj_t);
static obj_t BGl_genericzd2initzd2zz__processz00();
BGL_EXPORTED_DECL bool_t BGl_processzd2waitzd2zz__processz00(obj_t);
extern obj_t c_process_kill(obj_t);
BGL_EXPORTED_DECL obj_t BGl_processzd2nilzd2zz__processz00();
BGL_EXPORTED_DECL obj_t BGl_processzd2stopzd2zz__processz00(obj_t);
static obj_t BGl_objectzd2initzd2zz__processz00();
extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern obj_t bgl_reverse_bang(obj_t);
extern obj_t bgl_process_nil();
static obj_t BGl_z62processzd2inputzd2portz62zz__processz00(obj_t, obj_t);
extern obj_t c_process_continue(obj_t);
BGL_EXPORTED_DECL int BGl_processzd2pidzd2zz__processz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_unregisterzd2processzd2zz__processz00(obj_t);
static obj_t BGl_methodzd2initzd2zz__processz00();
extern obj_t bgl_close_input_port(obj_t);
static obj_t BGl_z62processzd2listzb0zz__processz00(obj_t);
static obj_t BGl_z62processzd2nilzb0zz__processz00(obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
extern bool_t c_process_alivep(obj_t);
extern obj_t bgl_close_output_port(obj_t);
extern obj_t c_process_list();
static obj_t BGl_list1731z00zz__processz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_processzd2errorzd2portz00zz__processz00(obj_t);
static obj_t BGl_z62processzd2pidzb0zz__processz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__processz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_z62processzd2waitzb0zz__processz00(obj_t, obj_t);
static obj_t BGl_z62processzd2sendzd2signalz62zz__processz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_processzd2killzd2zz__processz00(obj_t);
static obj_t BGl_z62processzd2stopzb0zz__processz00(obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__processz00();
static obj_t BGl_z62processzd2outputzd2portz62zz__processz00(obj_t, obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__processz00();
static obj_t BGl_importedzd2moduleszd2initz00zz__processz00();
BGL_EXPORTED_DECL obj_t BGl_processzd2inputzd2portz00zz__processz00(obj_t);
static obj_t BGl_z62closezd2processzd2portsz62zz__processz00(obj_t, obj_t);
static obj_t BGl_z62processzd2exitzd2statusz62zz__processz00(obj_t, obj_t);
extern obj_t c_process_wait(obj_t);
extern obj_t c_process_stop(obj_t);
static obj_t BGl_z62processzd2alivezf3z43zz__processz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_processzd2continuezd2zz__processz00(obj_t);
static obj_t BGl_keyword1732z00zz__processz00 = BUNSPEC;
static obj_t BGl_keyword1736z00zz__processz00 = BUNSPEC;
static obj_t BGl_keyword1740z00zz__processz00 = BUNSPEC;
static obj_t BGl_keyword1742z00zz__processz00 = BUNSPEC;
static obj_t BGl_keyword1744z00zz__processz00 = BUNSPEC;
static obj_t BGl_keyword1746z00zz__processz00 = BUNSPEC;
static obj_t BGl_keyword1748z00zz__processz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_runzd2processzd2zz__processz00(obj_t, obj_t);
static obj_t BGl_z62processzf3z91zz__processz00(obj_t, obj_t);
static obj_t BGl_keyword1750z00zz__processz00 = BUNSPEC;
static obj_t BGl_keyword1752z00zz__processz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_processzd2sendzd2signalz00zz__processz00(obj_t, int);
extern obj_t c_unregister_process(obj_t);
extern obj_t c_run_process(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t bstring_to_keyword(obj_t);
static obj_t BGl_z62unregisterzd2processzb0zz__processz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_processzd2outputzd2portz00zz__processz00(obj_t);
extern obj_t c_process_send_signal(obj_t, int);
BGL_EXPORTED_DECL bool_t BGl_processzd2alivezf3z21zz__processz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_closezd2processzd2portsz00zz__processz00(obj_t);
static obj_t BGl_z62processzd2continuezb0zz__processz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_processzd2exitzd2statusz00zz__processz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_processzd2listzd2zz__processz00();
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2nilzd2envz00zz__processz00, BgL_bgl_za762processza7d2nil1762z00, BGl_z62processzd2nilzb0zz__processz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string1717z00zz__processz00, BgL_bgl_string1717za700za7za7_1763za7, "/tmp/4.4a/runtime/Llib/process.scm", 34 );
DEFINE_STRING( BGl_string1718z00zz__processz00, BgL_bgl_string1718za700za7za7_1764za7, "&process-pid", 12 );
DEFINE_STRING( BGl_string1719z00zz__processz00, BgL_bgl_string1719za700za7za7_1765za7, "process", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2waitzd2envz00zz__processz00, BgL_bgl_za762processza7d2wai1766z00, BGl_z62processzd2waitzb0zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1720z00zz__processz00, BgL_bgl_string1720za700za7za7_1767za7, "&process-output-port", 20 );
DEFINE_STRING( BGl_string1721z00zz__processz00, BgL_bgl_string1721za700za7za7_1768za7, "&process-input-port", 19 );
DEFINE_STRING( BGl_string1722z00zz__processz00, BgL_bgl_string1722za700za7za7_1769za7, "&process-error-port", 19 );
DEFINE_STRING( BGl_string1723z00zz__processz00, BgL_bgl_string1723za700za7za7_1770za7, "&process-alive?", 15 );
DEFINE_STRING( BGl_string1724z00zz__processz00, BgL_bgl_string1724za700za7za7_1771za7, "&process-wait", 13 );
DEFINE_STRING( BGl_string1725z00zz__processz00, BgL_bgl_string1725za700za7za7_1772za7, "&process-exit-status", 20 );
DEFINE_STRING( BGl_string1726z00zz__processz00, BgL_bgl_string1726za700za7za7_1773za7, "&process-send-signal", 20 );
DEFINE_STRING( BGl_string1727z00zz__processz00, BgL_bgl_string1727za700za7za7_1774za7, "bint", 4 );
DEFINE_STRING( BGl_string1728z00zz__processz00, BgL_bgl_string1728za700za7za7_1775za7, "&process-kill", 13 );
DEFINE_STRING( BGl_string1729z00zz__processz00, BgL_bgl_string1729za700za7za7_1776za7, "&process-stop", 13 );
DEFINE_STRING( BGl_string1730z00zz__processz00, BgL_bgl_string1730za700za7za7_1777za7, "&process-continue", 17 );
DEFINE_STRING( BGl_string1733z00zz__processz00, BgL_bgl_string1733za700za7za7_1778za7, "pipe", 4 );
DEFINE_STRING( BGl_string1734z00zz__processz00, BgL_bgl_string1734za700za7za7_1779za7, "loop", 4 );
DEFINE_STRING( BGl_string1735z00zz__processz00, BgL_bgl_string1735za700za7za7_1780za7, "pair", 4 );
DEFINE_STRING( BGl_string1737z00zz__processz00, BgL_bgl_string1737za700za7za7_1781za7, "wait", 4 );
DEFINE_STRING( BGl_string1738z00zz__processz00, BgL_bgl_string1738za700za7za7_1782za7, "run-process", 11 );
DEFINE_STRING( BGl_string1739z00zz__processz00, BgL_bgl_string1739za700za7za7_1783za7, "Illegal argument", 16 );
DEFINE_STRING( BGl_string1741z00zz__processz00, BgL_bgl_string1741za700za7za7_1784za7, "fork", 4 );
DEFINE_STRING( BGl_string1743z00zz__processz00, BgL_bgl_string1743za700za7za7_1785za7, "input", 5 );
DEFINE_STRING( BGl_string1745z00zz__processz00, BgL_bgl_string1745za700za7za7_1786za7, "output", 6 );
DEFINE_STRING( BGl_string1747z00zz__processz00, BgL_bgl_string1747za700za7za7_1787za7, "null", 4 );
DEFINE_STRING( BGl_string1749z00zz__processz00, BgL_bgl_string1749za700za7za7_1788za7, "error", 5 );
DEFINE_STRING( BGl_string1751z00zz__processz00, BgL_bgl_string1751za700za7za7_1789za7, "host", 4 );
DEFINE_STRING( BGl_string1753z00zz__processz00, BgL_bgl_string1753za700za7za7_1790za7, "env", 3 );
DEFINE_STRING( BGl_string1754z00zz__processz00, BgL_bgl_string1754za700za7za7_1791za7, "&run-process", 12 );
DEFINE_STRING( BGl_string1755z00zz__processz00, BgL_bgl_string1755za700za7za7_1792za7, "bstring", 7 );
DEFINE_STRING( BGl_string1756z00zz__processz00, BgL_bgl_string1756za700za7za7_1793za7, "close-process-ports", 19 );
DEFINE_STRING( BGl_string1757z00zz__processz00, BgL_bgl_string1757za700za7za7_1794za7, "output-port", 11 );
DEFINE_STRING( BGl_string1758z00zz__processz00, BgL_bgl_string1758za700za7za7_1795za7, "input-port", 10 );
DEFINE_STRING( BGl_string1759z00zz__processz00, BgL_bgl_string1759za700za7za7_1796za7, "&close-process-ports", 20 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2alivezf3zd2envzf3zz__processz00, BgL_bgl_za762processza7d2ali1797z00, BGl_z62processzd2alivezf3z43zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2pidzd2envz00zz__processz00, BgL_bgl_za762processza7d2pid1798z00, BGl_z62processzd2pidzb0zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1760z00zz__processz00, BgL_bgl_string1760za700za7za7_1799za7, "&unregister-process", 19 );
DEFINE_STRING( BGl_string1761z00zz__processz00, BgL_bgl_string1761za700za7za7_1800za7, "__process", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2stopzd2envz00zz__processz00, BgL_bgl_za762processza7d2sto1801z00, BGl_z62processzd2stopzb0zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2inputzd2portzd2envzd2zz__processz00, BgL_bgl_za762processza7d2inp1802z00, BGl_z62processzd2inputzd2portz62zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2errorzd2portzd2envzd2zz__processz00, BgL_bgl_za762processza7d2err1803z00, BGl_z62processzd2errorzd2portz62zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2killzd2envz00zz__processz00, BgL_bgl_za762processza7d2kil1804z00, BGl_z62processzd2killzb0zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2outputzd2portzd2envzd2zz__processz00, BgL_bgl_za762processza7d2out1805z00, BGl_z62processzd2outputzd2portz62zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_closezd2processzd2portszd2envzd2zz__processz00, BgL_bgl_za762closeza7d2proce1806z00, BGl_z62closezd2processzd2portsz62zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_unregisterzd2processzd2envz00zz__processz00, BgL_bgl_za762unregisterza7d21807z00, BGl_z62unregisterzd2processzb0zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2exitzd2statuszd2envzd2zz__processz00, BgL_bgl_za762processza7d2exi1808z00, BGl_z62processzd2exitzd2statusz62zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2continuezd2envz00zz__processz00, BgL_bgl_za762processza7d2con1809z00, BGl_z62processzd2continuezb0zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzf3zd2envz21zz__processz00, BgL_bgl_za762processza7f3za7911810za7, BGl_z62processzf3z91zz__processz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_runzd2processzd2envz00zz__processz00, BgL_bgl_za762runza7d2process1811z00, va_generic_entry, BGl_z62runzd2processzb0zz__processz00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2listzd2envz00zz__processz00, BgL_bgl_za762processza7d2lis1812z00, BGl_z62processzd2listzb0zz__processz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_processzd2sendzd2signalzd2envzd2zz__processz00, BgL_bgl_za762processza7d2sen1813z00, BGl_z62processzd2sendzd2signalz62zz__processz00, 0L, BUNSPEC, 2 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__processz00) );
ADD_ROOT( (void *)(&BGl_list1731z00zz__processz00) );
ADD_ROOT( (void *)(&BGl_keyword1732z00zz__processz00) );
ADD_ROOT( (void *)(&BGl_keyword1736z00zz__processz00) );
ADD_ROOT( (void *)(&BGl_keyword1740z00zz__processz00) );
ADD_ROOT( (void *)(&BGl_keyword1742z00zz__processz00) );
ADD_ROOT( (void *)(&BGl_keyword1744z00zz__processz00) );
ADD_ROOT( (void *)(&BGl_keyword1746z00zz__processz00) );
ADD_ROOT( (void *)(&BGl_keyword1748z00zz__processz00) );
ADD_ROOT( (void *)(&BGl_keyword1750z00zz__processz00) );
ADD_ROOT( (void *)(&BGl_keyword1752z00zz__processz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__processz00(long BgL_checksumz00_1921, char * BgL_fromz00_1922)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__processz00))
{ 
BGl_requirezd2initializa7ationz75zz__processz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__processz00(); 
BGl_cnstzd2initzd2zz__processz00(); 
BGl_importedzd2moduleszd2initz00zz__processz00(); 
return 
BGl_methodzd2initzd2zz__processz00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__processz00()
{
{ /* Llib/process.scm 15 */
BGl_keyword1732z00zz__processz00 = 
bstring_to_keyword(BGl_string1733z00zz__processz00); 
BGl_list1731z00zz__processz00 = 
MAKE_YOUNG_PAIR(BGl_keyword1732z00zz__processz00, BNIL); 
BGl_keyword1736z00zz__processz00 = 
bstring_to_keyword(BGl_string1737z00zz__processz00); 
BGl_keyword1740z00zz__processz00 = 
bstring_to_keyword(BGl_string1741z00zz__processz00); 
BGl_keyword1742z00zz__processz00 = 
bstring_to_keyword(BGl_string1743z00zz__processz00); 
BGl_keyword1744z00zz__processz00 = 
bstring_to_keyword(BGl_string1745z00zz__processz00); 
BGl_keyword1746z00zz__processz00 = 
bstring_to_keyword(BGl_string1747z00zz__processz00); 
BGl_keyword1748z00zz__processz00 = 
bstring_to_keyword(BGl_string1749z00zz__processz00); 
BGl_keyword1750z00zz__processz00 = 
bstring_to_keyword(BGl_string1751z00zz__processz00); 
return ( 
BGl_keyword1752z00zz__processz00 = 
bstring_to_keyword(BGl_string1753z00zz__processz00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__processz00()
{
{ /* Llib/process.scm 15 */
return 
bgl_gc_roots_register();} 

}



/* process? */
BGL_EXPORTED_DEF bool_t BGl_processzf3zf3zz__processz00(obj_t BgL_objz00_3)
{
{ /* Llib/process.scm 123 */
return 
PROCESSP(BgL_objz00_3);} 

}



/* &process? */
obj_t BGl_z62processzf3z91zz__processz00(obj_t BgL_envz00_1829, obj_t BgL_objz00_1830)
{
{ /* Llib/process.scm 123 */
return 
BBOOL(
BGl_processzf3zf3zz__processz00(BgL_objz00_1830));} 

}



/* process-nil */
BGL_EXPORTED_DEF obj_t BGl_processzd2nilzd2zz__processz00()
{
{ /* Llib/process.scm 129 */
return 
bgl_process_nil();} 

}



/* &process-nil */
obj_t BGl_z62processzd2nilzb0zz__processz00(obj_t BgL_envz00_1831)
{
{ /* Llib/process.scm 129 */
return 
BGl_processzd2nilzd2zz__processz00();} 

}



/* process-pid */
BGL_EXPORTED_DEF int BGl_processzd2pidzd2zz__processz00(obj_t BgL_procz00_4)
{
{ /* Llib/process.scm 135 */
return 
PROCESS_PID(BgL_procz00_4);} 

}



/* &process-pid */
obj_t BGl_z62processzd2pidzb0zz__processz00(obj_t BgL_envz00_1832, obj_t BgL_procz00_1833)
{
{ /* Llib/process.scm 135 */
{ /* Llib/process.scm 136 */
int BgL_tmpz00_1947;
{ /* Llib/process.scm 136 */
obj_t BgL_auxz00_1948;
if(
PROCESSP(BgL_procz00_1833))
{ /* Llib/process.scm 136 */
BgL_auxz00_1948 = BgL_procz00_1833
; }  else 
{ 
obj_t BgL_auxz00_1951;
BgL_auxz00_1951 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)5714)), BGl_string1718z00zz__processz00, BGl_string1719z00zz__processz00, BgL_procz00_1833); 
FAILURE(BgL_auxz00_1951,BFALSE,BFALSE);} 
BgL_tmpz00_1947 = 
BGl_processzd2pidzd2zz__processz00(BgL_auxz00_1948); } 
return 
BINT(BgL_tmpz00_1947);} } 

}



/* process-output-port */
BGL_EXPORTED_DEF obj_t BGl_processzd2outputzd2portz00zz__processz00(obj_t BgL_procz00_5)
{
{ /* Llib/process.scm 141 */
return 
PROCESS_OUTPUT_PORT(BgL_procz00_5);} 

}



/* &process-output-port */
obj_t BGl_z62processzd2outputzd2portz62zz__processz00(obj_t BgL_envz00_1834, obj_t BgL_procz00_1835)
{
{ /* Llib/process.scm 141 */
{ /* Llib/process.scm 142 */
obj_t BgL_auxz00_1958;
if(
PROCESSP(BgL_procz00_1835))
{ /* Llib/process.scm 142 */
BgL_auxz00_1958 = BgL_procz00_1835
; }  else 
{ 
obj_t BgL_auxz00_1961;
BgL_auxz00_1961 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)6004)), BGl_string1720z00zz__processz00, BGl_string1719z00zz__processz00, BgL_procz00_1835); 
FAILURE(BgL_auxz00_1961,BFALSE,BFALSE);} 
return 
BGl_processzd2outputzd2portz00zz__processz00(BgL_auxz00_1958);} } 

}



/* process-input-port */
BGL_EXPORTED_DEF obj_t BGl_processzd2inputzd2portz00zz__processz00(obj_t BgL_procz00_6)
{
{ /* Llib/process.scm 147 */
return 
PROCESS_INPUT_PORT(BgL_procz00_6);} 

}



/* &process-input-port */
obj_t BGl_z62processzd2inputzd2portz62zz__processz00(obj_t BgL_envz00_1836, obj_t BgL_procz00_1837)
{
{ /* Llib/process.scm 147 */
{ /* Llib/process.scm 148 */
obj_t BgL_auxz00_1967;
if(
PROCESSP(BgL_procz00_1837))
{ /* Llib/process.scm 148 */
BgL_auxz00_1967 = BgL_procz00_1837
; }  else 
{ 
obj_t BgL_auxz00_1970;
BgL_auxz00_1970 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)6301)), BGl_string1721z00zz__processz00, BGl_string1719z00zz__processz00, BgL_procz00_1837); 
FAILURE(BgL_auxz00_1970,BFALSE,BFALSE);} 
return 
BGl_processzd2inputzd2portz00zz__processz00(BgL_auxz00_1967);} } 

}



/* process-error-port */
BGL_EXPORTED_DEF obj_t BGl_processzd2errorzd2portz00zz__processz00(obj_t BgL_procz00_7)
{
{ /* Llib/process.scm 153 */
return 
PROCESS_ERROR_PORT(BgL_procz00_7);} 

}



/* &process-error-port */
obj_t BGl_z62processzd2errorzd2portz62zz__processz00(obj_t BgL_envz00_1838, obj_t BgL_procz00_1839)
{
{ /* Llib/process.scm 153 */
{ /* Llib/process.scm 154 */
obj_t BgL_auxz00_1976;
if(
PROCESSP(BgL_procz00_1839))
{ /* Llib/process.scm 154 */
BgL_auxz00_1976 = BgL_procz00_1839
; }  else 
{ 
obj_t BgL_auxz00_1979;
BgL_auxz00_1979 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)6597)), BGl_string1722z00zz__processz00, BGl_string1719z00zz__processz00, BgL_procz00_1839); 
FAILURE(BgL_auxz00_1979,BFALSE,BFALSE);} 
return 
BGl_processzd2errorzd2portz00zz__processz00(BgL_auxz00_1976);} } 

}



/* process-alive? */
BGL_EXPORTED_DEF bool_t BGl_processzd2alivezf3z21zz__processz00(obj_t BgL_procz00_8)
{
{ /* Llib/process.scm 159 */
return 
c_process_alivep(BgL_procz00_8);} 

}



/* &process-alive? */
obj_t BGl_z62processzd2alivezf3z43zz__processz00(obj_t BgL_envz00_1840, obj_t BgL_procz00_1841)
{
{ /* Llib/process.scm 159 */
{ /* Llib/process.scm 160 */
bool_t BgL_tmpz00_1985;
{ /* Llib/process.scm 160 */
obj_t BgL_auxz00_1986;
if(
PROCESSP(BgL_procz00_1841))
{ /* Llib/process.scm 160 */
BgL_auxz00_1986 = BgL_procz00_1841
; }  else 
{ 
obj_t BgL_auxz00_1989;
BgL_auxz00_1989 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)6889)), BGl_string1723z00zz__processz00, BGl_string1719z00zz__processz00, BgL_procz00_1841); 
FAILURE(BgL_auxz00_1989,BFALSE,BFALSE);} 
BgL_tmpz00_1985 = 
BGl_processzd2alivezf3z21zz__processz00(BgL_auxz00_1986); } 
return 
BBOOL(BgL_tmpz00_1985);} } 

}



/* process-wait */
BGL_EXPORTED_DEF bool_t BGl_processzd2waitzd2zz__processz00(obj_t BgL_procz00_9)
{
{ /* Llib/process.scm 165 */
if(
c_process_alivep(BgL_procz00_9))
{ /* Llib/process.scm 166 */
return 
CBOOL(
c_process_wait(BgL_procz00_9));}  else 
{ /* Llib/process.scm 166 */
return ((bool_t)0);} } 

}



/* &process-wait */
obj_t BGl_z62processzd2waitzb0zz__processz00(obj_t BgL_envz00_1842, obj_t BgL_procz00_1843)
{
{ /* Llib/process.scm 165 */
{ /* Llib/process.scm 166 */
bool_t BgL_tmpz00_1999;
{ /* Llib/process.scm 166 */
obj_t BgL_auxz00_2000;
if(
PROCESSP(BgL_procz00_1843))
{ /* Llib/process.scm 166 */
BgL_auxz00_2000 = BgL_procz00_1843
; }  else 
{ 
obj_t BgL_auxz00_2003;
BgL_auxz00_2003 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)7175)), BGl_string1724z00zz__processz00, BGl_string1719z00zz__processz00, BgL_procz00_1843); 
FAILURE(BgL_auxz00_2003,BFALSE,BFALSE);} 
BgL_tmpz00_1999 = 
BGl_processzd2waitzd2zz__processz00(BgL_auxz00_2000); } 
return 
BBOOL(BgL_tmpz00_1999);} } 

}



/* process-exit-status */
BGL_EXPORTED_DEF obj_t BGl_processzd2exitzd2statusz00zz__processz00(obj_t BgL_procz00_10)
{
{ /* Llib/process.scm 172 */
return 
c_process_xstatus(BgL_procz00_10);} 

}



/* &process-exit-status */
obj_t BGl_z62processzd2exitzd2statusz62zz__processz00(obj_t BgL_envz00_1844, obj_t BgL_procz00_1845)
{
{ /* Llib/process.scm 172 */
{ /* Llib/process.scm 173 */
obj_t BgL_auxz00_2010;
if(
PROCESSP(BgL_procz00_1845))
{ /* Llib/process.scm 173 */
BgL_auxz00_2010 = BgL_procz00_1845
; }  else 
{ 
obj_t BgL_auxz00_2013;
BgL_auxz00_2013 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)7500)), BGl_string1725z00zz__processz00, BGl_string1719z00zz__processz00, BgL_procz00_1845); 
FAILURE(BgL_auxz00_2013,BFALSE,BFALSE);} 
return 
BGl_processzd2exitzd2statusz00zz__processz00(BgL_auxz00_2010);} } 

}



/* process-send-signal */
BGL_EXPORTED_DEF obj_t BGl_processzd2sendzd2signalz00zz__processz00(obj_t BgL_procz00_11, int BgL_signalz00_12)
{
{ /* Llib/process.scm 178 */
return 
c_process_send_signal(BgL_procz00_11, BgL_signalz00_12);} 

}



/* &process-send-signal */
obj_t BGl_z62processzd2sendzd2signalz62zz__processz00(obj_t BgL_envz00_1846, obj_t BgL_procz00_1847, obj_t BgL_signalz00_1848)
{
{ /* Llib/process.scm 178 */
{ /* Llib/process.scm 179 */
int BgL_auxz00_2026;obj_t BgL_auxz00_2019;
{ /* Llib/process.scm 179 */
obj_t BgL_tmpz00_2027;
if(
INTEGERP(BgL_signalz00_1848))
{ /* Llib/process.scm 179 */
BgL_tmpz00_2027 = BgL_signalz00_1848
; }  else 
{ 
obj_t BgL_auxz00_2030;
BgL_auxz00_2030 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)7805)), BGl_string1726z00zz__processz00, BGl_string1727z00zz__processz00, BgL_signalz00_1848); 
FAILURE(BgL_auxz00_2030,BFALSE,BFALSE);} 
BgL_auxz00_2026 = 
CINT(BgL_tmpz00_2027); } 
if(
PROCESSP(BgL_procz00_1847))
{ /* Llib/process.scm 179 */
BgL_auxz00_2019 = BgL_procz00_1847
; }  else 
{ 
obj_t BgL_auxz00_2022;
BgL_auxz00_2022 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)7805)), BGl_string1726z00zz__processz00, BGl_string1719z00zz__processz00, BgL_procz00_1847); 
FAILURE(BgL_auxz00_2022,BFALSE,BFALSE);} 
return 
BGl_processzd2sendzd2signalz00zz__processz00(BgL_auxz00_2019, BgL_auxz00_2026);} } 

}



/* process-kill */
BGL_EXPORTED_DEF obj_t BGl_processzd2killzd2zz__processz00(obj_t BgL_procz00_13)
{
{ /* Llib/process.scm 184 */
c_process_kill(BgL_procz00_13); 
return 
BGl_closezd2processzd2portsz00zz__processz00(BgL_procz00_13);} 

}



/* &process-kill */
obj_t BGl_z62processzd2killzb0zz__processz00(obj_t BgL_envz00_1849, obj_t BgL_procz00_1850)
{
{ /* Llib/process.scm 184 */
{ /* Llib/process.scm 185 */
obj_t BgL_auxz00_2038;
if(
PROCESSP(BgL_procz00_1850))
{ /* Llib/process.scm 185 */
BgL_auxz00_2038 = BgL_procz00_1850
; }  else 
{ 
obj_t BgL_auxz00_2041;
BgL_auxz00_2041 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)8123)), BGl_string1728z00zz__processz00, BGl_string1719z00zz__processz00, BgL_procz00_1850); 
FAILURE(BgL_auxz00_2041,BFALSE,BFALSE);} 
return 
BGl_processzd2killzd2zz__processz00(BgL_auxz00_2038);} } 

}



/* process-stop */
BGL_EXPORTED_DEF obj_t BGl_processzd2stopzd2zz__processz00(obj_t BgL_procz00_14)
{
{ /* Llib/process.scm 191 */
return 
c_process_stop(BgL_procz00_14);} 

}



/* &process-stop */
obj_t BGl_z62processzd2stopzb0zz__processz00(obj_t BgL_envz00_1851, obj_t BgL_procz00_1852)
{
{ /* Llib/process.scm 191 */
{ /* Llib/process.scm 192 */
obj_t BgL_auxz00_2047;
if(
PROCESSP(BgL_procz00_1852))
{ /* Llib/process.scm 192 */
BgL_auxz00_2047 = BgL_procz00_1852
; }  else 
{ 
obj_t BgL_auxz00_2050;
BgL_auxz00_2050 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)8417)), BGl_string1729z00zz__processz00, BGl_string1719z00zz__processz00, BgL_procz00_1852); 
FAILURE(BgL_auxz00_2050,BFALSE,BFALSE);} 
return 
BGl_processzd2stopzd2zz__processz00(BgL_auxz00_2047);} } 

}



/* process-continue */
BGL_EXPORTED_DEF obj_t BGl_processzd2continuezd2zz__processz00(obj_t BgL_procz00_15)
{
{ /* Llib/process.scm 197 */
return 
c_process_continue(BgL_procz00_15);} 

}



/* &process-continue */
obj_t BGl_z62processzd2continuezb0zz__processz00(obj_t BgL_envz00_1853, obj_t BgL_procz00_1854)
{
{ /* Llib/process.scm 197 */
{ /* Llib/process.scm 198 */
obj_t BgL_auxz00_2056;
if(
PROCESSP(BgL_procz00_1854))
{ /* Llib/process.scm 198 */
BgL_auxz00_2056 = BgL_procz00_1854
; }  else 
{ 
obj_t BgL_auxz00_2059;
BgL_auxz00_2059 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)8705)), BGl_string1730z00zz__processz00, BGl_string1719z00zz__processz00, BgL_procz00_1854); 
FAILURE(BgL_auxz00_2059,BFALSE,BFALSE);} 
return 
BGl_processzd2continuezd2zz__processz00(BgL_auxz00_2056);} } 

}



/* process-list */
BGL_EXPORTED_DEF obj_t BGl_processzd2listzd2zz__processz00()
{
{ /* Llib/process.scm 203 */
return 
c_process_list();} 

}



/* &process-list */
obj_t BGl_z62processzd2listzb0zz__processz00(obj_t BgL_envz00_1855)
{
{ /* Llib/process.scm 203 */
return 
BGl_processzd2listzd2zz__processz00();} 

}



/* run-process */
BGL_EXPORTED_DEF obj_t BGl_runzd2processzd2zz__processz00(obj_t BgL_commandz00_16, obj_t BgL_restz00_17)
{
{ /* Llib/process.scm 212 */
{ /* Llib/process.scm 213 */
bool_t BgL_forkz00_1062;bool_t BgL_waitz00_1063;obj_t BgL_inputz00_1064;obj_t BgL_outputz00_1065;obj_t BgL_errorz00_1066;obj_t BgL_hostz00_1067;obj_t BgL_pipesz00_1068;obj_t BgL_argsz00_1069;obj_t BgL_envz00_1070;
BgL_forkz00_1062 = ((bool_t)1); 
BgL_waitz00_1063 = ((bool_t)0); 
BgL_inputz00_1064 = BUNSPEC; 
BgL_outputz00_1065 = BUNSPEC; 
BgL_errorz00_1066 = BUNSPEC; 
BgL_hostz00_1067 = BUNSPEC; 
BgL_pipesz00_1068 = BGl_list1731z00zz__processz00; 
BgL_argsz00_1069 = BNIL; 
BgL_envz00_1070 = BNIL; 
{ 
obj_t BgL_restz00_1073;
{ /* Llib/process.scm 224 */
obj_t BgL_aux1703z00_1907;
BgL_restz00_1073 = BgL_restz00_17; 
BgL_zc3z04anonymousza31158ze3z87_1074:
if(
NULLP(BgL_restz00_1073))
{ /* Llib/process.scm 229 */
obj_t BgL_arg1165z00_1076;
BgL_arg1165z00_1076 = 
bgl_reverse_bang(BgL_argsz00_1069); 
BgL_aux1703z00_1907 = 
c_run_process(BgL_hostz00_1067, 
BBOOL(BgL_forkz00_1062), 
BBOOL(BgL_waitz00_1063), BgL_inputz00_1064, BgL_outputz00_1065, BgL_errorz00_1066, BgL_commandz00_16, BgL_arg1165z00_1076, BgL_envz00_1070); }  else 
{ /* Llib/process.scm 230 */
bool_t BgL_test1829z00_2072;
{ /* Llib/process.scm 230 */
bool_t BgL_test1830z00_2073;
{ /* Llib/process.scm 230 */
obj_t BgL_tmpz00_2074;
{ /* Llib/process.scm 230 */
obj_t BgL_pairz00_1532;
if(
PAIRP(BgL_restz00_1073))
{ /* Llib/process.scm 230 */
BgL_pairz00_1532 = BgL_restz00_1073; }  else 
{ 
obj_t BgL_auxz00_2077;
BgL_auxz00_2077 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)9937)), BGl_string1734z00zz__processz00, BGl_string1735z00zz__processz00, BgL_restz00_1073); 
FAILURE(BgL_auxz00_2077,BFALSE,BFALSE);} 
BgL_tmpz00_2074 = 
CAR(BgL_pairz00_1532); } 
BgL_test1830z00_2073 = 
KEYWORDP(BgL_tmpz00_2074); } 
if(BgL_test1830z00_2073)
{ /* Llib/process.scm 230 */
obj_t BgL_tmpz00_2083;
{ /* Llib/process.scm 230 */
obj_t BgL_pairz00_1534;
if(
PAIRP(BgL_restz00_1073))
{ /* Llib/process.scm 230 */
BgL_pairz00_1534 = BgL_restz00_1073; }  else 
{ 
obj_t BgL_auxz00_2086;
BgL_auxz00_2086 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)9956)), BGl_string1734z00zz__processz00, BGl_string1735z00zz__processz00, BgL_restz00_1073); 
FAILURE(BgL_auxz00_2086,BFALSE,BFALSE);} 
BgL_tmpz00_2083 = 
CDR(BgL_pairz00_1534); } 
BgL_test1829z00_2072 = 
PAIRP(BgL_tmpz00_2083); }  else 
{ /* Llib/process.scm 230 */
BgL_test1829z00_2072 = ((bool_t)0)
; } } 
if(BgL_test1829z00_2072)
{ /* Llib/process.scm 231 */
obj_t BgL_valz00_1082;
{ /* Llib/process.scm 231 */
obj_t BgL_pairz00_1536;
if(
PAIRP(BgL_restz00_1073))
{ /* Llib/process.scm 231 */
BgL_pairz00_1536 = BgL_restz00_1073; }  else 
{ 
obj_t BgL_auxz00_2094;
BgL_auxz00_2094 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)9987)), BGl_string1734z00zz__processz00, BGl_string1735z00zz__processz00, BgL_restz00_1073); 
FAILURE(BgL_auxz00_2094,BFALSE,BFALSE);} 
{ /* Llib/process.scm 231 */
obj_t BgL_pairz00_1539;
{ /* Llib/process.scm 231 */
obj_t BgL_aux1689z00_1893;
BgL_aux1689z00_1893 = 
CDR(BgL_pairz00_1536); 
if(
PAIRP(BgL_aux1689z00_1893))
{ /* Llib/process.scm 231 */
BgL_pairz00_1539 = BgL_aux1689z00_1893; }  else 
{ 
obj_t BgL_auxz00_2101;
BgL_auxz00_2101 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)9981)), BGl_string1734z00zz__processz00, BGl_string1735z00zz__processz00, BgL_aux1689z00_1893); 
FAILURE(BgL_auxz00_2101,BFALSE,BFALSE);} } 
BgL_valz00_1082 = 
CAR(BgL_pairz00_1539); } } 
{ /* Llib/process.scm 232 */
obj_t BgL_casezd2valuezd2_1083;
{ /* Llib/process.scm 232 */
obj_t BgL_pairz00_1540;
if(
PAIRP(BgL_restz00_1073))
{ /* Llib/process.scm 232 */
BgL_pairz00_1540 = BgL_restz00_1073; }  else 
{ 
obj_t BgL_auxz00_2108;
BgL_auxz00_2108 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)10008)), BGl_string1734z00zz__processz00, BGl_string1735z00zz__processz00, BgL_restz00_1073); 
FAILURE(BgL_auxz00_2108,BFALSE,BFALSE);} 
BgL_casezd2valuezd2_1083 = 
CAR(BgL_pairz00_1540); } 
if(
(BgL_casezd2valuezd2_1083==BGl_keyword1736z00zz__processz00))
{ /* Llib/process.scm 232 */
if(
BOOLEANP(BgL_valz00_1082))
{ /* Llib/process.scm 234 */
BgL_waitz00_1063 = 
CBOOL(BgL_valz00_1082); }  else 
{ /* Llib/process.scm 234 */
BGl_errorz00zz__errorz00(BGl_string1738z00zz__processz00, BGl_string1739z00zz__processz00, BgL_restz00_1073); } }  else 
{ /* Llib/process.scm 232 */
if(
(BgL_casezd2valuezd2_1083==BGl_keyword1740z00zz__processz00))
{ /* Llib/process.scm 232 */
if(
BOOLEANP(BgL_valz00_1082))
{ /* Llib/process.scm 238 */
BgL_forkz00_1062 = 
CBOOL(BgL_valz00_1082); }  else 
{ /* Llib/process.scm 238 */
BGl_errorz00zz__errorz00(BGl_string1738z00zz__processz00, BGl_string1739z00zz__processz00, BgL_restz00_1073); } }  else 
{ /* Llib/process.scm 232 */
if(
(BgL_casezd2valuezd2_1083==BGl_keyword1742z00zz__processz00))
{ /* Llib/process.scm 242 */
bool_t BgL_test1841z00_2127;
if(
STRINGP(BgL_valz00_1082))
{ /* Llib/process.scm 242 */
BgL_test1841z00_2127 = ((bool_t)1)
; }  else 
{ /* Llib/process.scm 242 */
BgL_test1841z00_2127 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_valz00_1082, BgL_pipesz00_1068))
; } 
if(BgL_test1841z00_2127)
{ /* Llib/process.scm 242 */
BgL_inputz00_1064 = BgL_valz00_1082; }  else 
{ /* Llib/process.scm 242 */
BGl_errorz00zz__errorz00(BGl_string1738z00zz__processz00, BGl_string1739z00zz__processz00, BgL_restz00_1073); } }  else 
{ /* Llib/process.scm 232 */
if(
(BgL_casezd2valuezd2_1083==BGl_keyword1744z00zz__processz00))
{ /* Llib/process.scm 246 */
bool_t BgL_test1844z00_2135;
if(
STRINGP(BgL_valz00_1082))
{ /* Llib/process.scm 246 */
BgL_test1844z00_2135 = ((bool_t)1)
; }  else 
{ /* Llib/process.scm 246 */
if(
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_valz00_1082, BgL_pipesz00_1068)))
{ /* Llib/process.scm 246 */
BgL_test1844z00_2135 = ((bool_t)1)
; }  else 
{ /* Llib/process.scm 246 */
BgL_test1844z00_2135 = 
(BgL_valz00_1082==BGl_keyword1746z00zz__processz00)
; } } 
if(BgL_test1844z00_2135)
{ /* Llib/process.scm 246 */
BgL_outputz00_1065 = BgL_valz00_1082; }  else 
{ /* Llib/process.scm 246 */
BGl_errorz00zz__errorz00(BGl_string1738z00zz__processz00, BGl_string1739z00zz__processz00, BgL_restz00_1073); } }  else 
{ /* Llib/process.scm 232 */
if(
(BgL_casezd2valuezd2_1083==BGl_keyword1748z00zz__processz00))
{ /* Llib/process.scm 250 */
bool_t BgL_test1848z00_2145;
if(
STRINGP(BgL_valz00_1082))
{ /* Llib/process.scm 250 */
BgL_test1848z00_2145 = ((bool_t)1)
; }  else 
{ /* Llib/process.scm 250 */
if(
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_valz00_1082, BgL_pipesz00_1068)))
{ /* Llib/process.scm 250 */
BgL_test1848z00_2145 = ((bool_t)1)
; }  else 
{ /* Llib/process.scm 250 */
BgL_test1848z00_2145 = 
(BgL_valz00_1082==BGl_keyword1746z00zz__processz00)
; } } 
if(BgL_test1848z00_2145)
{ /* Llib/process.scm 250 */
BgL_errorz00_1066 = BgL_valz00_1082; }  else 
{ /* Llib/process.scm 250 */
BGl_errorz00zz__errorz00(BGl_string1738z00zz__processz00, BGl_string1739z00zz__processz00, BgL_restz00_1073); } }  else 
{ /* Llib/process.scm 232 */
if(
(BgL_casezd2valuezd2_1083==BGl_keyword1750z00zz__processz00))
{ /* Llib/process.scm 232 */
if(
STRINGP(BgL_valz00_1082))
{ /* Llib/process.scm 254 */
BgL_hostz00_1067 = BgL_valz00_1082; }  else 
{ /* Llib/process.scm 254 */
BGl_errorz00zz__errorz00(BGl_string1738z00zz__processz00, BGl_string1739z00zz__processz00, BgL_restz00_1073); } }  else 
{ /* Llib/process.scm 232 */
if(
(BgL_casezd2valuezd2_1083==BGl_keyword1752z00zz__processz00))
{ /* Llib/process.scm 232 */
if(
STRINGP(BgL_valz00_1082))
{ /* Llib/process.scm 258 */
BgL_envz00_1070 = 
MAKE_YOUNG_PAIR(BgL_valz00_1082, BgL_envz00_1070); }  else 
{ /* Llib/process.scm 258 */
BGl_errorz00zz__errorz00(BGl_string1738z00zz__processz00, BGl_string1739z00zz__processz00, BgL_restz00_1073); } }  else 
{ /* Llib/process.scm 232 */
BGl_errorz00zz__errorz00(BGl_string1738z00zz__processz00, BGl_string1739z00zz__processz00, BgL_restz00_1073); } } } } } } } } 
{ /* Llib/process.scm 263 */
obj_t BgL_arg1194z00_1108;
{ /* Llib/process.scm 263 */
obj_t BgL_pairz00_1563;
{ /* Llib/process.scm 263 */
obj_t BgL_pairz00_1562;
if(
PAIRP(BgL_restz00_1073))
{ /* Llib/process.scm 263 */
BgL_pairz00_1562 = BgL_restz00_1073; }  else 
{ 
obj_t BgL_auxz00_2167;
BgL_auxz00_2167 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)10738)), BGl_string1734z00zz__processz00, BGl_string1735z00zz__processz00, BgL_restz00_1073); 
FAILURE(BgL_auxz00_2167,BFALSE,BFALSE);} 
{ /* Llib/process.scm 263 */
obj_t BgL_aux1695z00_1899;
BgL_aux1695z00_1899 = 
CDR(BgL_pairz00_1562); 
if(
PAIRP(BgL_aux1695z00_1899))
{ /* Llib/process.scm 263 */
BgL_pairz00_1563 = BgL_aux1695z00_1899; }  else 
{ 
obj_t BgL_auxz00_2174;
BgL_auxz00_2174 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)10733)), BGl_string1734z00zz__processz00, BGl_string1735z00zz__processz00, BgL_aux1695z00_1899); 
FAILURE(BgL_auxz00_2174,BFALSE,BFALSE);} } } 
BgL_arg1194z00_1108 = 
CDR(BgL_pairz00_1563); } 
{ 
obj_t BgL_restz00_2179;
BgL_restz00_2179 = BgL_arg1194z00_1108; 
BgL_restz00_1073 = BgL_restz00_2179; 
goto BgL_zc3z04anonymousza31158ze3z87_1074;} } }  else 
{ /* Llib/process.scm 264 */
bool_t BgL_test1857z00_2180;
{ /* Llib/process.scm 264 */
obj_t BgL_tmpz00_2181;
{ /* Llib/process.scm 264 */
obj_t BgL_pairz00_1564;
if(
PAIRP(BgL_restz00_1073))
{ /* Llib/process.scm 264 */
BgL_pairz00_1564 = BgL_restz00_1073; }  else 
{ 
obj_t BgL_auxz00_2184;
BgL_auxz00_2184 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)10768)), BGl_string1734z00zz__processz00, BGl_string1735z00zz__processz00, BgL_restz00_1073); 
FAILURE(BgL_auxz00_2184,BFALSE,BFALSE);} 
BgL_tmpz00_2181 = 
CAR(BgL_pairz00_1564); } 
BgL_test1857z00_2180 = 
STRINGP(BgL_tmpz00_2181); } 
if(BgL_test1857z00_2180)
{ /* Llib/process.scm 264 */
{ /* Llib/process.scm 265 */
obj_t BgL_arg1208z00_1112;
{ /* Llib/process.scm 265 */
obj_t BgL_pairz00_1566;
if(
PAIRP(BgL_restz00_1073))
{ /* Llib/process.scm 265 */
BgL_pairz00_1566 = BgL_restz00_1073; }  else 
{ 
obj_t BgL_auxz00_2192;
BgL_auxz00_2192 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)10803)), BGl_string1734z00zz__processz00, BGl_string1735z00zz__processz00, BgL_restz00_1073); 
FAILURE(BgL_auxz00_2192,BFALSE,BFALSE);} 
BgL_arg1208z00_1112 = 
CAR(BgL_pairz00_1566); } 
BgL_argsz00_1069 = 
MAKE_YOUNG_PAIR(BgL_arg1208z00_1112, BgL_argsz00_1069); } 
{ /* Llib/process.scm 266 */
obj_t BgL_arg1211z00_1113;
{ /* Llib/process.scm 266 */
obj_t BgL_pairz00_1567;
if(
PAIRP(BgL_restz00_1073))
{ /* Llib/process.scm 266 */
BgL_pairz00_1567 = BgL_restz00_1073; }  else 
{ 
obj_t BgL_auxz00_2200;
BgL_auxz00_2200 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)10833)), BGl_string1734z00zz__processz00, BGl_string1735z00zz__processz00, BgL_restz00_1073); 
FAILURE(BgL_auxz00_2200,BFALSE,BFALSE);} 
BgL_arg1211z00_1113 = 
CDR(BgL_pairz00_1567); } 
{ 
obj_t BgL_restz00_2205;
BgL_restz00_2205 = BgL_arg1211z00_1113; 
BgL_restz00_1073 = BgL_restz00_2205; 
goto BgL_zc3z04anonymousza31158ze3z87_1074;} } }  else 
{ /* Llib/process.scm 264 */
BgL_aux1703z00_1907 = 
BGl_errorz00zz__errorz00(BGl_string1738z00zz__processz00, BGl_string1739z00zz__processz00, BgL_restz00_1073); } } } 
if(
PROCESSP(BgL_aux1703z00_1907))
{ /* Llib/process.scm 224 */
return BgL_aux1703z00_1907;}  else 
{ 
obj_t BgL_auxz00_2209;
BgL_auxz00_2209 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)9761)), BGl_string1738z00zz__processz00, BGl_string1719z00zz__processz00, BgL_aux1703z00_1907); 
FAILURE(BgL_auxz00_2209,BFALSE,BFALSE);} } } } } 

}



/* &run-process */
obj_t BGl_z62runzd2processzb0zz__processz00(obj_t BgL_envz00_1856, obj_t BgL_commandz00_1857, obj_t BgL_restz00_1858)
{
{ /* Llib/process.scm 212 */
{ /* Llib/process.scm 213 */
obj_t BgL_auxz00_2213;
if(
STRINGP(BgL_commandz00_1857))
{ /* Llib/process.scm 213 */
BgL_auxz00_2213 = BgL_commandz00_1857
; }  else 
{ 
obj_t BgL_auxz00_2216;
BgL_auxz00_2216 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)9491)), BGl_string1754z00zz__processz00, BGl_string1755z00zz__processz00, BgL_commandz00_1857); 
FAILURE(BgL_auxz00_2216,BFALSE,BFALSE);} 
return 
BGl_runzd2processzd2zz__processz00(BgL_auxz00_2213, BgL_restz00_1858);} } 

}



/* close-process-ports */
BGL_EXPORTED_DEF obj_t BGl_closezd2processzd2portsz00zz__processz00(obj_t BgL_procz00_18)
{
{ /* Llib/process.scm 273 */
{ /* Llib/process.scm 274 */
bool_t BgL_test1863z00_2221;
{ /* Llib/process.scm 274 */
obj_t BgL_tmpz00_2222;
BgL_tmpz00_2222 = 
PROCESS_INPUT_PORT(BgL_procz00_18); 
BgL_test1863z00_2221 = 
OUTPUT_PORTP(BgL_tmpz00_2222); } 
if(BgL_test1863z00_2221)
{ /* Llib/process.scm 275 */
obj_t BgL_arg1227z00_1124;
BgL_arg1227z00_1124 = 
PROCESS_INPUT_PORT(BgL_procz00_18); 
{ /* Llib/process.scm 275 */
obj_t BgL_portz00_1570;
if(
OUTPUT_PORTP(BgL_arg1227z00_1124))
{ /* Llib/process.scm 275 */
BgL_portz00_1570 = BgL_arg1227z00_1124; }  else 
{ 
obj_t BgL_auxz00_2228;
BgL_auxz00_2228 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)11236)), BGl_string1756z00zz__processz00, BGl_string1757z00zz__processz00, BgL_arg1227z00_1124); 
FAILURE(BgL_auxz00_2228,BFALSE,BFALSE);} 
bgl_close_output_port(BgL_portz00_1570); } }  else 
{ /* Llib/process.scm 274 */BFALSE; } } 
{ /* Llib/process.scm 276 */
bool_t BgL_test1865z00_2233;
{ /* Llib/process.scm 276 */
obj_t BgL_tmpz00_2234;
BgL_tmpz00_2234 = 
PROCESS_ERROR_PORT(BgL_procz00_18); 
BgL_test1865z00_2233 = 
INPUT_PORTP(BgL_tmpz00_2234); } 
if(BgL_test1865z00_2233)
{ /* Llib/process.scm 277 */
obj_t BgL_arg1239z00_1128;
BgL_arg1239z00_1128 = 
PROCESS_ERROR_PORT(BgL_procz00_18); 
{ /* Llib/process.scm 277 */
obj_t BgL_portz00_1573;
if(
INPUT_PORTP(BgL_arg1239z00_1128))
{ /* Llib/process.scm 277 */
BgL_portz00_1573 = BgL_arg1239z00_1128; }  else 
{ 
obj_t BgL_auxz00_2240;
BgL_auxz00_2240 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)11336)), BGl_string1756z00zz__processz00, BGl_string1758z00zz__processz00, BgL_arg1239z00_1128); 
FAILURE(BgL_auxz00_2240,BFALSE,BFALSE);} 
bgl_close_input_port(BgL_portz00_1573); } }  else 
{ /* Llib/process.scm 276 */BFALSE; } } 
{ /* Llib/process.scm 278 */
bool_t BgL_test1867z00_2245;
{ /* Llib/process.scm 278 */
obj_t BgL_tmpz00_2246;
BgL_tmpz00_2246 = 
PROCESS_OUTPUT_PORT(BgL_procz00_18); 
BgL_test1867z00_2245 = 
INPUT_PORTP(BgL_tmpz00_2246); } 
if(BgL_test1867z00_2245)
{ /* Llib/process.scm 279 */
obj_t BgL_arg1245z00_1132;
BgL_arg1245z00_1132 = 
PROCESS_OUTPUT_PORT(BgL_procz00_18); 
{ /* Llib/process.scm 279 */
obj_t BgL_portz00_1576;
if(
INPUT_PORTP(BgL_arg1245z00_1132))
{ /* Llib/process.scm 279 */
BgL_portz00_1576 = BgL_arg1245z00_1132; }  else 
{ 
obj_t BgL_auxz00_2252;
BgL_auxz00_2252 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)11438)), BGl_string1756z00zz__processz00, BGl_string1758z00zz__processz00, BgL_arg1245z00_1132); 
FAILURE(BgL_auxz00_2252,BFALSE,BFALSE);} 
return 
bgl_close_input_port(BgL_portz00_1576);} }  else 
{ /* Llib/process.scm 278 */
return BFALSE;} } } 

}



/* &close-process-ports */
obj_t BGl_z62closezd2processzd2portsz62zz__processz00(obj_t BgL_envz00_1859, obj_t BgL_procz00_1860)
{
{ /* Llib/process.scm 273 */
{ /* Llib/process.scm 275 */
obj_t BgL_auxz00_2257;
if(
PROCESSP(BgL_procz00_1860))
{ /* Llib/process.scm 275 */
BgL_auxz00_2257 = BgL_procz00_1860
; }  else 
{ 
obj_t BgL_auxz00_2260;
BgL_auxz00_2260 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)11238)), BGl_string1759z00zz__processz00, BGl_string1719z00zz__processz00, BgL_procz00_1860); 
FAILURE(BgL_auxz00_2260,BFALSE,BFALSE);} 
return 
BGl_closezd2processzd2portsz00zz__processz00(BgL_auxz00_2257);} } 

}



/* unregister-process */
BGL_EXPORTED_DEF obj_t BGl_unregisterzd2processzd2zz__processz00(obj_t BgL_procz00_19)
{
{ /* Llib/process.scm 284 */
return 
c_unregister_process(BgL_procz00_19);} 

}



/* &unregister-process */
obj_t BGl_z62unregisterzd2processzb0zz__processz00(obj_t BgL_envz00_1861, obj_t BgL_procz00_1862)
{
{ /* Llib/process.scm 284 */
{ /* Llib/process.scm 285 */
obj_t BgL_auxz00_2266;
if(
PROCESSP(BgL_procz00_1862))
{ /* Llib/process.scm 285 */
BgL_auxz00_2266 = BgL_procz00_1862
; }  else 
{ 
obj_t BgL_auxz00_2269;
BgL_auxz00_2269 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1717z00zz__processz00, 
BINT(((long)11710)), BGl_string1760z00zz__processz00, BGl_string1719z00zz__processz00, BgL_procz00_1862); 
FAILURE(BgL_auxz00_2269,BFALSE,BFALSE);} 
return 
BGl_unregisterzd2processzd2zz__processz00(BgL_auxz00_2266);} } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__processz00()
{
{ /* Llib/process.scm 15 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__processz00()
{
{ /* Llib/process.scm 15 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__processz00()
{
{ /* Llib/process.scm 15 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__processz00()
{
{ /* Llib/process.scm 15 */
return 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string1761z00zz__processz00));} 

}

#ifdef __cplusplus
}
#endif
