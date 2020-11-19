/*===========================================================================*/
/*   (Llib/struct.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/struct.scm -indent -o objs/obj_s/Llib/struct.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL obj_t BGl_structzd2refzd2zz__structurez00(obj_t, int);
static obj_t BGl_z62makezd2structzb0zz__structurez00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__structurez00 = BUNSPEC;
static obj_t BGl_z62listzd2ze3structz53zz__structurez00(obj_t, obj_t);
static obj_t BGl_z62structzd2refzb0zz__structurez00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_structzd2lengthzd2zz__structurez00(obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_structzd2keyzd2zz__structurez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3structz31zz__structurez00(obj_t);
static obj_t BGl_z62structzd2keyzb0zz__structurez00(obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__structurez00();
extern long bgl_list_length(obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__structurez00();
static obj_t BGl_importedzd2moduleszd2initz00zz__structurez00();
BGL_EXPORTED_DECL bool_t BGl_recordzf3zf3zz__structurez00(obj_t);
static obj_t BGl_z62structzd2lengthzb0zz__structurez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_structzd2setz12zc0zz__structurez00(obj_t, int, obj_t);
static obj_t BGl_z62structzd2updatez12za2zz__structurez00(obj_t, obj_t, obj_t);
static obj_t BGl_z62recordzf3z91zz__structurez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2structzd2zz__structurez00(obj_t, int, obj_t);
BGL_EXPORTED_DECL bool_t BGl_structzf3zf3zz__structurez00(obj_t);
static obj_t BGl_z62structzf3z91zz__structurez00(obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_z62structzd2ze3listz53zz__structurez00(obj_t, obj_t);
extern obj_t make_struct(obj_t, int, obj_t);
BGL_EXPORTED_DECL obj_t BGl_structzd2keyzd2setz12z12zz__structurez00(obj_t, obj_t);
static obj_t BGl_z62structzd2keyzd2setz12z70zz__structurez00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol1556z00zz__structurez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_structzd2ze3listz31zz__structurez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_structzd2updatez12zc0zz__structurez00(obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62structzd2setz12za2zz__structurez00(obj_t, obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_structzd2lengthzd2envz00zz__structurez00, BgL_bgl_za762structza7d2leng1561z00, BGl_z62structzd2lengthzb0zz__structurez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_structzd2setz12zd2envz12zz__structurez00, BgL_bgl_za762structza7d2setza71562za7, BGl_z62structzd2setz12za2zz__structurez00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3structzd2envze3zz__structurez00, BgL_bgl_za762listza7d2za7e3str1563za7, BGl_z62listzd2ze3structz53zz__structurez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_structzd2updatez12zd2envz12zz__structurez00, BgL_bgl_za762structza7d2upda1564z00, BGl_z62structzd2updatez12za2zz__structurez00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1537z00zz__structurez00, BgL_bgl_string1537za700za7za7_1565za7, "/tmp/4.4a/runtime/Llib/struct.scm", 33 );
DEFINE_STRING( BGl_string1538z00zz__structurez00, BgL_bgl_string1538za700za7za7_1566za7, "&make-struct", 12 );
DEFINE_STRING( BGl_string1539z00zz__structurez00, BgL_bgl_string1539za700za7za7_1567za7, "symbol", 6 );
DEFINE_STRING( BGl_string1540z00zz__structurez00, BgL_bgl_string1540za700za7za7_1568za7, "bint", 4 );
DEFINE_STRING( BGl_string1541z00zz__structurez00, BgL_bgl_string1541za700za7za7_1569za7, "struct-key", 10 );
DEFINE_STRING( BGl_string1542z00zz__structurez00, BgL_bgl_string1542za700za7za7_1570za7, "&struct-key", 11 );
DEFINE_STRING( BGl_string1543z00zz__structurez00, BgL_bgl_string1543za700za7za7_1571za7, "struct", 6 );
DEFINE_STRING( BGl_string1544z00zz__structurez00, BgL_bgl_string1544za700za7za7_1572za7, "&struct-key-set!", 16 );
DEFINE_STRING( BGl_string1545z00zz__structurez00, BgL_bgl_string1545za700za7za7_1573za7, "&struct-length", 14 );
DEFINE_STRING( BGl_string1546z00zz__structurez00, BgL_bgl_string1546za700za7za7_1574za7, "&struct-ref", 11 );
DEFINE_STRING( BGl_string1547z00zz__structurez00, BgL_bgl_string1547za700za7za7_1575za7, "&struct-set!", 12 );
DEFINE_STRING( BGl_string1548z00zz__structurez00, BgL_bgl_string1548za700za7za7_1576za7, "struct-update!", 14 );
DEFINE_STRING( BGl_string1549z00zz__structurez00, BgL_bgl_string1549za700za7za7_1577za7, "Incompatible structures", 23 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2structzd2envz00zz__structurez00, BgL_bgl_za762makeza7d2struct1578z00, BGl_z62makezd2structzb0zz__structurez00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_structzf3zd2envz21zz__structurez00, BgL_bgl_za762structza7f3za791za71579z00, BGl_z62structzf3z91zz__structurez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1550z00zz__structurez00, BgL_bgl_string1550za700za7za7_1580za7, "&struct-update!", 15 );
DEFINE_STRING( BGl_string1551z00zz__structurez00, BgL_bgl_string1551za700za7za7_1581za7, "loop", 4 );
DEFINE_STRING( BGl_string1552z00zz__structurez00, BgL_bgl_string1552za700za7za7_1582za7, "&struct->list", 13 );
DEFINE_STRING( BGl_string1553z00zz__structurez00, BgL_bgl_string1553za700za7za7_1583za7, "list->struct", 12 );
DEFINE_STRING( BGl_string1554z00zz__structurez00, BgL_bgl_string1554za700za7za7_1584za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string1555z00zz__structurez00, BgL_bgl_string1555za700za7za7_1585za7, "pair", 4 );
DEFINE_STRING( BGl_string1557z00zz__structurez00, BgL_bgl_string1557za700za7za7_1586za7, "Illegal struct key", 18 );
DEFINE_STRING( BGl_string1558z00zz__structurez00, BgL_bgl_string1558za700za7za7_1587za7, "&list->struct", 13 );
DEFINE_STRING( BGl_string1559z00zz__structurez00, BgL_bgl_string1559za700za7za7_1588za7, "__structure", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_structzd2ze3listzd2envze3zz__structurez00, BgL_bgl_za762structza7d2za7e3l1589za7, BGl_z62structzd2ze3listz53zz__structurez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_structzd2refzd2envz00zz__structurez00, BgL_bgl_za762structza7d2refza71590za7, BGl_z62structzd2refzb0zz__structurez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_structzd2keyzd2setz12zd2envzc0zz__structurez00, BgL_bgl_za762structza7d2keyza71591za7, BGl_z62structzd2keyzd2setz12z70zz__structurez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_structzd2keyzd2envz00zz__structurez00, BgL_bgl_za762structza7d2keyza71592za7, BGl_z62structzd2keyzb0zz__structurez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_recordzf3zd2envz21zz__structurez00, BgL_bgl_za762recordza7f3za791za71593z00, BGl_z62recordzf3z91zz__structurez00, 0L, BUNSPEC, 1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__structurez00) );
ADD_ROOT( (void *)(&BGl_symbol1556z00zz__structurez00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long BgL_checksumz00_1273, char * BgL_fromz00_1274)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__structurez00))
{ 
BGl_requirezd2initializa7ationz75zz__structurez00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__structurez00(); 
BGl_cnstzd2initzd2zz__structurez00(); 
return 
BGl_importedzd2moduleszd2initz00zz__structurez00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__structurez00()
{
{ /* Llib/struct.scm 18 */
return ( 
BGl_symbol1556z00zz__structurez00 = 
bstring_to_symbol(BGl_string1553z00zz__structurez00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__structurez00()
{
{ /* Llib/struct.scm 18 */
return 
bgl_gc_roots_register();} 

}



/* make-struct */
BGL_EXPORTED_DEF obj_t BGl_makezd2structzd2zz__structurez00(obj_t BgL_keyz00_3, int BgL_lenz00_4, obj_t BgL_initz00_5)
{
{ /* Llib/struct.scm 119 */
return 
make_struct(BgL_keyz00_3, BgL_lenz00_4, BgL_initz00_5);} 

}



/* &make-struct */
obj_t BGl_z62makezd2structzb0zz__structurez00(obj_t BgL_envz00_1193, obj_t BgL_keyz00_1194, obj_t BgL_lenz00_1195, obj_t BgL_initz00_1196)
{
{ /* Llib/struct.scm 119 */
{ /* Llib/struct.scm 120 */
int BgL_auxz00_1291;obj_t BgL_auxz00_1284;
{ /* Llib/struct.scm 120 */
obj_t BgL_tmpz00_1292;
if(
INTEGERP(BgL_lenz00_1195))
{ /* Llib/struct.scm 120 */
BgL_tmpz00_1292 = BgL_lenz00_1195
; }  else 
{ 
obj_t BgL_auxz00_1295;
BgL_auxz00_1295 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)5074)), BGl_string1538z00zz__structurez00, BGl_string1540z00zz__structurez00, BgL_lenz00_1195); 
FAILURE(BgL_auxz00_1295,BFALSE,BFALSE);} 
BgL_auxz00_1291 = 
CINT(BgL_tmpz00_1292); } 
if(
SYMBOLP(BgL_keyz00_1194))
{ /* Llib/struct.scm 120 */
BgL_auxz00_1284 = BgL_keyz00_1194
; }  else 
{ 
obj_t BgL_auxz00_1287;
BgL_auxz00_1287 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)5074)), BGl_string1538z00zz__structurez00, BGl_string1539z00zz__structurez00, BgL_keyz00_1194); 
FAILURE(BgL_auxz00_1287,BFALSE,BFALSE);} 
return 
BGl_makezd2structzd2zz__structurez00(BgL_auxz00_1284, BgL_auxz00_1291, BgL_initz00_1196);} } 

}



/* struct? */
BGL_EXPORTED_DEF bool_t BGl_structzf3zf3zz__structurez00(obj_t BgL_oz00_6)
{
{ /* Llib/struct.scm 125 */
return 
STRUCTP(BgL_oz00_6);} 

}



/* &struct? */
obj_t BGl_z62structzf3z91zz__structurez00(obj_t BgL_envz00_1197, obj_t BgL_oz00_1198)
{
{ /* Llib/struct.scm 125 */
return 
BBOOL(
BGl_structzf3zf3zz__structurez00(BgL_oz00_1198));} 

}



/* record? */
BGL_EXPORTED_DEF bool_t BGl_recordzf3zf3zz__structurez00(obj_t BgL_oz00_7)
{
{ /* Llib/struct.scm 131 */
return 
STRUCTP(BgL_oz00_7);} 

}



/* &record? */
obj_t BGl_z62recordzf3z91zz__structurez00(obj_t BgL_envz00_1199, obj_t BgL_oz00_1200)
{
{ /* Llib/struct.scm 131 */
return 
BBOOL(
BGl_recordzf3zf3zz__structurez00(BgL_oz00_1200));} 

}



/* struct-key */
BGL_EXPORTED_DEF obj_t BGl_structzd2keyzd2zz__structurez00(obj_t BgL_sz00_8)
{
{ /* Llib/struct.scm 137 */
{ /* Llib/struct.scm 138 */
obj_t BgL_aux1495z00_1268;
BgL_aux1495z00_1268 = 
STRUCT_KEY(BgL_sz00_8); 
if(
SYMBOLP(BgL_aux1495z00_1268))
{ /* Llib/struct.scm 138 */
return BgL_aux1495z00_1268;}  else 
{ 
obj_t BgL_auxz00_1310;
BgL_auxz00_1310 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)5893)), BGl_string1541z00zz__structurez00, BGl_string1539z00zz__structurez00, BgL_aux1495z00_1268); 
FAILURE(BgL_auxz00_1310,BFALSE,BFALSE);} } } 

}



/* &struct-key */
obj_t BGl_z62structzd2keyzb0zz__structurez00(obj_t BgL_envz00_1201, obj_t BgL_sz00_1202)
{
{ /* Llib/struct.scm 137 */
{ /* Llib/struct.scm 138 */
obj_t BgL_auxz00_1314;
if(
STRUCTP(BgL_sz00_1202))
{ /* Llib/struct.scm 138 */
BgL_auxz00_1314 = BgL_sz00_1202
; }  else 
{ 
obj_t BgL_auxz00_1317;
BgL_auxz00_1317 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)5893)), BGl_string1542z00zz__structurez00, BGl_string1543z00zz__structurez00, BgL_sz00_1202); 
FAILURE(BgL_auxz00_1317,BFALSE,BFALSE);} 
return 
BGl_structzd2keyzd2zz__structurez00(BgL_auxz00_1314);} } 

}



/* struct-key-set! */
BGL_EXPORTED_DEF obj_t BGl_structzd2keyzd2setz12z12zz__structurez00(obj_t BgL_sz00_9, obj_t BgL_kz00_10)
{
{ /* Llib/struct.scm 143 */
return 
STRUCT_KEY_SET(BgL_sz00_9, BgL_kz00_10);} 

}



/* &struct-key-set! */
obj_t BGl_z62structzd2keyzd2setz12z70zz__structurez00(obj_t BgL_envz00_1203, obj_t BgL_sz00_1204, obj_t BgL_kz00_1205)
{
{ /* Llib/struct.scm 143 */
{ /* Llib/struct.scm 144 */
obj_t BgL_auxz00_1330;obj_t BgL_auxz00_1323;
if(
SYMBOLP(BgL_kz00_1205))
{ /* Llib/struct.scm 144 */
BgL_auxz00_1330 = BgL_kz00_1205
; }  else 
{ 
obj_t BgL_auxz00_1333;
BgL_auxz00_1333 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)6173)), BGl_string1544z00zz__structurez00, BGl_string1539z00zz__structurez00, BgL_kz00_1205); 
FAILURE(BgL_auxz00_1333,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_sz00_1204))
{ /* Llib/struct.scm 144 */
BgL_auxz00_1323 = BgL_sz00_1204
; }  else 
{ 
obj_t BgL_auxz00_1326;
BgL_auxz00_1326 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)6173)), BGl_string1544z00zz__structurez00, BGl_string1543z00zz__structurez00, BgL_sz00_1204); 
FAILURE(BgL_auxz00_1326,BFALSE,BFALSE);} 
return 
BGl_structzd2keyzd2setz12z12zz__structurez00(BgL_auxz00_1323, BgL_auxz00_1330);} } 

}



/* struct-length */
BGL_EXPORTED_DEF int BGl_structzd2lengthzd2zz__structurez00(obj_t BgL_sz00_11)
{
{ /* Llib/struct.scm 149 */
return 
STRUCT_LENGTH(BgL_sz00_11);} 

}



/* &struct-length */
obj_t BGl_z62structzd2lengthzb0zz__structurez00(obj_t BgL_envz00_1206, obj_t BgL_sz00_1207)
{
{ /* Llib/struct.scm 149 */
{ /* Llib/struct.scm 150 */
int BgL_tmpz00_1339;
{ /* Llib/struct.scm 150 */
obj_t BgL_auxz00_1340;
if(
STRUCTP(BgL_sz00_1207))
{ /* Llib/struct.scm 150 */
BgL_auxz00_1340 = BgL_sz00_1207
; }  else 
{ 
obj_t BgL_auxz00_1343;
BgL_auxz00_1343 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)6457)), BGl_string1545z00zz__structurez00, BGl_string1543z00zz__structurez00, BgL_sz00_1207); 
FAILURE(BgL_auxz00_1343,BFALSE,BFALSE);} 
BgL_tmpz00_1339 = 
BGl_structzd2lengthzd2zz__structurez00(BgL_auxz00_1340); } 
return 
BINT(BgL_tmpz00_1339);} } 

}



/* struct-ref */
BGL_EXPORTED_DEF obj_t BGl_structzd2refzd2zz__structurez00(obj_t BgL_sz00_12, int BgL_kz00_13)
{
{ /* Llib/struct.scm 155 */
return 
STRUCT_REF(BgL_sz00_12, BgL_kz00_13);} 

}



/* &struct-ref */
obj_t BGl_z62structzd2refzb0zz__structurez00(obj_t BgL_envz00_1208, obj_t BgL_sz00_1209, obj_t BgL_kz00_1210)
{
{ /* Llib/struct.scm 155 */
{ /* Llib/struct.scm 156 */
int BgL_auxz00_1357;obj_t BgL_auxz00_1350;
{ /* Llib/struct.scm 156 */
obj_t BgL_tmpz00_1358;
if(
INTEGERP(BgL_kz00_1210))
{ /* Llib/struct.scm 156 */
BgL_tmpz00_1358 = BgL_kz00_1210
; }  else 
{ 
obj_t BgL_auxz00_1361;
BgL_auxz00_1361 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)6739)), BGl_string1546z00zz__structurez00, BGl_string1540z00zz__structurez00, BgL_kz00_1210); 
FAILURE(BgL_auxz00_1361,BFALSE,BFALSE);} 
BgL_auxz00_1357 = 
CINT(BgL_tmpz00_1358); } 
if(
STRUCTP(BgL_sz00_1209))
{ /* Llib/struct.scm 156 */
BgL_auxz00_1350 = BgL_sz00_1209
; }  else 
{ 
obj_t BgL_auxz00_1353;
BgL_auxz00_1353 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)6739)), BGl_string1546z00zz__structurez00, BGl_string1543z00zz__structurez00, BgL_sz00_1209); 
FAILURE(BgL_auxz00_1353,BFALSE,BFALSE);} 
return 
BGl_structzd2refzd2zz__structurez00(BgL_auxz00_1350, BgL_auxz00_1357);} } 

}



/* struct-set! */
BGL_EXPORTED_DEF obj_t BGl_structzd2setz12zc0zz__structurez00(obj_t BgL_sz00_14, int BgL_kz00_15, obj_t BgL_oz00_16)
{
{ /* Llib/struct.scm 161 */
return 
STRUCT_SET(BgL_sz00_14, BgL_kz00_15, BgL_oz00_16);} 

}



/* &struct-set! */
obj_t BGl_z62structzd2setz12za2zz__structurez00(obj_t BgL_envz00_1211, obj_t BgL_sz00_1212, obj_t BgL_kz00_1213, obj_t BgL_oz00_1214)
{
{ /* Llib/struct.scm 161 */
{ /* Llib/struct.scm 162 */
int BgL_auxz00_1375;obj_t BgL_auxz00_1368;
{ /* Llib/struct.scm 162 */
obj_t BgL_tmpz00_1376;
if(
INTEGERP(BgL_kz00_1213))
{ /* Llib/struct.scm 162 */
BgL_tmpz00_1376 = BgL_kz00_1213
; }  else 
{ 
obj_t BgL_auxz00_1379;
BgL_auxz00_1379 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)7020)), BGl_string1547z00zz__structurez00, BGl_string1540z00zz__structurez00, BgL_kz00_1213); 
FAILURE(BgL_auxz00_1379,BFALSE,BFALSE);} 
BgL_auxz00_1375 = 
CINT(BgL_tmpz00_1376); } 
if(
STRUCTP(BgL_sz00_1212))
{ /* Llib/struct.scm 162 */
BgL_auxz00_1368 = BgL_sz00_1212
; }  else 
{ 
obj_t BgL_auxz00_1371;
BgL_auxz00_1371 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)7020)), BGl_string1547z00zz__structurez00, BGl_string1543z00zz__structurez00, BgL_sz00_1212); 
FAILURE(BgL_auxz00_1371,BFALSE,BFALSE);} 
return 
BGl_structzd2setz12zc0zz__structurez00(BgL_auxz00_1368, BgL_auxz00_1375, BgL_oz00_1214);} } 

}



/* struct-update! */
BGL_EXPORTED_DEF obj_t BGl_structzd2updatez12zc0zz__structurez00(obj_t BgL_dstz00_17, obj_t BgL_srcz00_18)
{
{ /* Llib/struct.scm 167 */
{ /* Llib/struct.scm 168 */
bool_t BgL_test1606z00_1385;
{ /* Llib/struct.scm 168 */
bool_t BgL_test1607z00_1386;
{ /* Llib/struct.scm 168 */
obj_t BgL_auxz00_1395;obj_t BgL_tmpz00_1387;
{ /* Llib/struct.scm 168 */
obj_t BgL_res1456z00_1052;
{ /* Llib/struct.scm 138 */
obj_t BgL_aux1515z00_1246;
BgL_aux1515z00_1246 = 
STRUCT_KEY(BgL_srcz00_18); 
if(
SYMBOLP(BgL_aux1515z00_1246))
{ /* Llib/struct.scm 138 */
BgL_res1456z00_1052 = BgL_aux1515z00_1246; }  else 
{ 
obj_t BgL_auxz00_1399;
BgL_auxz00_1399 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)5893)), BGl_string1548z00zz__structurez00, BGl_string1539z00zz__structurez00, BgL_aux1515z00_1246); 
FAILURE(BgL_auxz00_1399,BFALSE,BFALSE);} } 
BgL_auxz00_1395 = BgL_res1456z00_1052; } 
{ /* Llib/struct.scm 168 */
obj_t BgL_res1455z00_1050;
{ /* Llib/struct.scm 138 */
obj_t BgL_aux1513z00_1244;
BgL_aux1513z00_1244 = 
STRUCT_KEY(BgL_dstz00_17); 
if(
SYMBOLP(BgL_aux1513z00_1244))
{ /* Llib/struct.scm 138 */
BgL_res1455z00_1050 = BgL_aux1513z00_1244; }  else 
{ 
obj_t BgL_auxz00_1391;
BgL_auxz00_1391 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)5893)), BGl_string1548z00zz__structurez00, BGl_string1539z00zz__structurez00, BgL_aux1513z00_1244); 
FAILURE(BgL_auxz00_1391,BFALSE,BFALSE);} } 
BgL_tmpz00_1387 = BgL_res1455z00_1050; } 
BgL_test1607z00_1386 = 
(BgL_tmpz00_1387==BgL_auxz00_1395); } 
if(BgL_test1607z00_1386)
{ /* Llib/struct.scm 168 */
BgL_test1606z00_1385 = 
(
(long)(
STRUCT_LENGTH(BgL_dstz00_17))==
(long)(
STRUCT_LENGTH(BgL_srcz00_18)))
; }  else 
{ /* Llib/struct.scm 168 */
BgL_test1606z00_1385 = ((bool_t)0)
; } } 
if(BgL_test1606z00_1385)
{ /* Llib/struct.scm 170 */
long BgL_g1012z00_742;
BgL_g1012z00_742 = 
(
(long)(
STRUCT_LENGTH(BgL_dstz00_17))-((long)1)); 
{ 
long BgL_iz00_744;
BgL_iz00_744 = BgL_g1012z00_742; 
BgL_zc3z04anonymousza31066ze3z87_745:
if(
(BgL_iz00_744==((long)-1)))
{ /* Llib/struct.scm 171 */
return BgL_dstz00_17;}  else 
{ /* Llib/struct.scm 171 */
{ /* Llib/struct.scm 162 */
obj_t BgL_auxz00_1416;int BgL_tmpz00_1414;
BgL_auxz00_1416 = 
STRUCT_REF(BgL_srcz00_18, 
(int)(BgL_iz00_744)); 
BgL_tmpz00_1414 = 
(int)(BgL_iz00_744); 
STRUCT_SET(BgL_dstz00_17, BgL_tmpz00_1414, BgL_auxz00_1416); } 
{ 
long BgL_iz00_1420;
BgL_iz00_1420 = 
(BgL_iz00_744-((long)1)); 
BgL_iz00_744 = BgL_iz00_1420; 
goto BgL_zc3z04anonymousza31066ze3z87_745;} } } }  else 
{ /* Llib/struct.scm 176 */
obj_t BgL_arg1095z00_751;
{ /* Llib/struct.scm 176 */
obj_t BgL_list1096z00_752;
{ /* Llib/struct.scm 176 */
obj_t BgL_arg1099z00_753;
BgL_arg1099z00_753 = 
MAKE_YOUNG_PAIR(BgL_srcz00_18, BNIL); 
BgL_list1096z00_752 = 
MAKE_YOUNG_PAIR(BgL_dstz00_17, BgL_arg1099z00_753); } 
BgL_arg1095z00_751 = BgL_list1096z00_752; } 
return 
BGl_errorz00zz__errorz00(BGl_string1548z00zz__structurez00, BGl_string1549z00zz__structurez00, BgL_arg1095z00_751);} } } 

}



/* &struct-update! */
obj_t BGl_z62structzd2updatez12za2zz__structurez00(obj_t BgL_envz00_1215, obj_t BgL_dstz00_1216, obj_t BgL_srcz00_1217)
{
{ /* Llib/struct.scm 167 */
{ /* Llib/struct.scm 168 */
obj_t BgL_auxz00_1432;obj_t BgL_auxz00_1425;
if(
STRUCTP(BgL_srcz00_1217))
{ /* Llib/struct.scm 168 */
BgL_auxz00_1432 = BgL_srcz00_1217
; }  else 
{ 
obj_t BgL_auxz00_1435;
BgL_auxz00_1435 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)7301)), BGl_string1550z00zz__structurez00, BGl_string1543z00zz__structurez00, BgL_srcz00_1217); 
FAILURE(BgL_auxz00_1435,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_dstz00_1216))
{ /* Llib/struct.scm 168 */
BgL_auxz00_1425 = BgL_dstz00_1216
; }  else 
{ 
obj_t BgL_auxz00_1428;
BgL_auxz00_1428 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)7301)), BGl_string1550z00zz__structurez00, BGl_string1543z00zz__structurez00, BgL_dstz00_1216); 
FAILURE(BgL_auxz00_1428,BFALSE,BFALSE);} 
return 
BGl_structzd2updatez12zc0zz__structurez00(BgL_auxz00_1425, BgL_auxz00_1432);} } 

}



/* struct->list */
BGL_EXPORTED_DEF obj_t BGl_structzd2ze3listz31zz__structurez00(obj_t BgL_structz00_19)
{
{ /* Llib/struct.scm 181 */
{ /* Llib/struct.scm 182 */
long BgL_g1013z00_759;
BgL_g1013z00_759 = 
(
(long)(
STRUCT_LENGTH(BgL_structz00_19))-((long)1)); 
{ 
long BgL_iz00_762;obj_t BgL_rz00_763;
BgL_iz00_762 = BgL_g1013z00_759; 
BgL_rz00_763 = BNIL; 
BgL_zc3z04anonymousza31110ze3z87_764:
if(
(BgL_iz00_762==((long)-1)))
{ /* Llib/struct.scm 185 */
obj_t BgL_arg1113z00_766;
{ /* Llib/struct.scm 185 */
obj_t BgL_res1468z00_1080;
{ /* Llib/struct.scm 138 */
obj_t BgL_aux1521z00_1252;
BgL_aux1521z00_1252 = 
STRUCT_KEY(BgL_structz00_19); 
if(
SYMBOLP(BgL_aux1521z00_1252))
{ /* Llib/struct.scm 138 */
BgL_res1468z00_1080 = BgL_aux1521z00_1252; }  else 
{ 
obj_t BgL_auxz00_1448;
BgL_auxz00_1448 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)5893)), BGl_string1551z00zz__structurez00, BGl_string1539z00zz__structurez00, BgL_aux1521z00_1252); 
FAILURE(BgL_auxz00_1448,BFALSE,BFALSE);} } 
BgL_arg1113z00_766 = BgL_res1468z00_1080; } 
return 
MAKE_YOUNG_PAIR(BgL_arg1113z00_766, BgL_rz00_763);}  else 
{ /* Llib/struct.scm 186 */
long BgL_arg1114z00_767;obj_t BgL_arg1115z00_768;
BgL_arg1114z00_767 = 
(BgL_iz00_762-((long)1)); 
BgL_arg1115z00_768 = 
MAKE_YOUNG_PAIR(
STRUCT_REF(BgL_structz00_19, 
(int)(BgL_iz00_762)), BgL_rz00_763); 
{ 
obj_t BgL_rz00_1458;long BgL_iz00_1457;
BgL_iz00_1457 = BgL_arg1114z00_767; 
BgL_rz00_1458 = BgL_arg1115z00_768; 
BgL_rz00_763 = BgL_rz00_1458; 
BgL_iz00_762 = BgL_iz00_1457; 
goto BgL_zc3z04anonymousza31110ze3z87_764;} } } } } 

}



/* &struct->list */
obj_t BGl_z62structzd2ze3listz53zz__structurez00(obj_t BgL_envz00_1218, obj_t BgL_structz00_1219)
{
{ /* Llib/struct.scm 181 */
{ /* Llib/struct.scm 182 */
obj_t BgL_auxz00_1459;
if(
STRUCTP(BgL_structz00_1219))
{ /* Llib/struct.scm 182 */
BgL_auxz00_1459 = BgL_structz00_1219
; }  else 
{ 
obj_t BgL_auxz00_1462;
BgL_auxz00_1462 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)7892)), BGl_string1552z00zz__structurez00, BGl_string1543z00zz__structurez00, BgL_structz00_1219); 
FAILURE(BgL_auxz00_1462,BFALSE,BFALSE);} 
return 
BGl_structzd2ze3listz31zz__structurez00(BgL_auxz00_1459);} } 

}



/* list->struct */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3structz31zz__structurez00(obj_t BgL_lstz00_20)
{
{ /* Llib/struct.scm 191 */
{ /* Llib/struct.scm 195 */
bool_t BgL_test1616z00_1467;
{ /* Llib/struct.scm 195 */
obj_t BgL_tmpz00_1468;
BgL_tmpz00_1468 = 
CAR(BgL_lstz00_20); 
BgL_test1616z00_1467 = 
SYMBOLP(BgL_tmpz00_1468); } 
if(BgL_test1616z00_1467)
{ /* Llib/struct.scm 198 */
long BgL_lenz00_775;
{ /* Llib/struct.scm 198 */
obj_t BgL_auxz00_1471;
{ /* Llib/struct.scm 198 */
obj_t BgL_aux1525z00_1256;
BgL_aux1525z00_1256 = 
CDR(BgL_lstz00_20); 
{ /* Llib/struct.scm 198 */
bool_t BgL_test1617z00_1473;
if(
PAIRP(BgL_aux1525z00_1256))
{ /* Llib/struct.scm 198 */
BgL_test1617z00_1473 = ((bool_t)1)
; }  else 
{ /* Llib/struct.scm 198 */
BgL_test1617z00_1473 = 
NULLP(BgL_aux1525z00_1256)
; } 
if(BgL_test1617z00_1473)
{ /* Llib/struct.scm 198 */
BgL_auxz00_1471 = BgL_aux1525z00_1256
; }  else 
{ 
obj_t BgL_auxz00_1477;
BgL_auxz00_1477 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)8527)), BGl_string1553z00zz__structurez00, BGl_string1554z00zz__structurez00, BgL_aux1525z00_1256); 
FAILURE(BgL_auxz00_1477,BFALSE,BFALSE);} } } 
BgL_lenz00_775 = 
bgl_list_length(BgL_auxz00_1471); } 
{ /* Llib/struct.scm 198 */
obj_t BgL_structz00_776;
{ /* Llib/struct.scm 199 */
obj_t BgL_arg1128z00_787;
BgL_arg1128z00_787 = 
CAR(BgL_lstz00_20); 
{ /* Llib/struct.scm 199 */
obj_t BgL_res1472z00_1092;
{ /* Llib/struct.scm 199 */
obj_t BgL_keyz00_1090;int BgL_lenz00_1091;
if(
SYMBOLP(BgL_arg1128z00_787))
{ /* Llib/struct.scm 199 */
BgL_keyz00_1090 = BgL_arg1128z00_787; }  else 
{ 
obj_t BgL_auxz00_1485;
BgL_auxz00_1485 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)8575)), BGl_string1553z00zz__structurez00, BGl_string1539z00zz__structurez00, BgL_arg1128z00_787); 
FAILURE(BgL_auxz00_1485,BFALSE,BFALSE);} 
BgL_lenz00_1091 = 
(int)(BgL_lenz00_775); 
BgL_res1472z00_1092 = 
make_struct(BgL_keyz00_1090, BgL_lenz00_1091, BUNSPEC); } 
BgL_structz00_776 = BgL_res1472z00_1092; } } 
{ /* Llib/struct.scm 199 */

{ /* Llib/struct.scm 200 */
obj_t BgL_g1015z00_777;
BgL_g1015z00_777 = 
CDR(BgL_lstz00_20); 
{ 
long BgL_iz00_1102;obj_t BgL_lz00_1103;
BgL_iz00_1102 = ((long)0); 
BgL_lz00_1103 = BgL_g1015z00_777; 
BgL_loopz00_1101:
if(
NULLP(BgL_lz00_1103))
{ /* Llib/struct.scm 202 */
return BgL_structz00_776;}  else 
{ /* Llib/struct.scm 202 */
{ /* Llib/struct.scm 205 */
obj_t BgL_arg1125z00_1106;
{ /* Llib/struct.scm 205 */
obj_t BgL_pairz00_1107;
if(
PAIRP(BgL_lz00_1103))
{ /* Llib/struct.scm 205 */
BgL_pairz00_1107 = BgL_lz00_1103; }  else 
{ 
obj_t BgL_auxz00_1496;
BgL_auxz00_1496 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)8712)), BGl_string1551z00zz__structurez00, BGl_string1555z00zz__structurez00, BgL_lz00_1103); 
FAILURE(BgL_auxz00_1496,BFALSE,BFALSE);} 
BgL_arg1125z00_1106 = 
CAR(BgL_pairz00_1107); } 
{ /* Llib/struct.scm 162 */
int BgL_tmpz00_1501;
BgL_tmpz00_1501 = 
(int)(BgL_iz00_1102); 
STRUCT_SET(BgL_structz00_776, BgL_tmpz00_1501, BgL_arg1125z00_1106); } } 
{ /* Llib/struct.scm 206 */
long BgL_arg1126z00_1110;obj_t BgL_arg1127z00_1111;
BgL_arg1126z00_1110 = 
(BgL_iz00_1102+((long)1)); 
{ /* Llib/struct.scm 206 */
obj_t BgL_pairz00_1114;
if(
PAIRP(BgL_lz00_1103))
{ /* Llib/struct.scm 206 */
BgL_pairz00_1114 = BgL_lz00_1103; }  else 
{ 
obj_t BgL_auxz00_1507;
BgL_auxz00_1507 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)8743)), BGl_string1551z00zz__structurez00, BGl_string1555z00zz__structurez00, BgL_lz00_1103); 
FAILURE(BgL_auxz00_1507,BFALSE,BFALSE);} 
BgL_arg1127z00_1111 = 
CDR(BgL_pairz00_1114); } 
{ 
obj_t BgL_lz00_1513;long BgL_iz00_1512;
BgL_iz00_1512 = BgL_arg1126z00_1110; 
BgL_lz00_1513 = BgL_arg1127z00_1111; 
BgL_lz00_1103 = BgL_lz00_1513; 
BgL_iz00_1102 = BgL_iz00_1512; 
goto BgL_loopz00_1101;} } } } } } } }  else 
{ /* Llib/struct.scm 196 */
obj_t BgL_arg1133z00_789;
BgL_arg1133z00_789 = 
CAR(BgL_lstz00_20); 
{ /* Llib/struct.scm 196 */
obj_t BgL_aux1533z00_1264;
BgL_aux1533z00_1264 = 
BGl_errorz00zz__errorz00(BGl_symbol1556z00zz__structurez00, BGl_string1557z00zz__structurez00, BgL_arg1133z00_789); 
if(
STRUCTP(BgL_aux1533z00_1264))
{ /* Llib/struct.scm 196 */
return BgL_aux1533z00_1264;}  else 
{ 
obj_t BgL_auxz00_1518;
BgL_auxz00_1518 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)8434)), BGl_string1553z00zz__structurez00, BGl_string1543z00zz__structurez00, BgL_aux1533z00_1264); 
FAILURE(BgL_auxz00_1518,BFALSE,BFALSE);} } } } } 

}



/* &list->struct */
obj_t BGl_z62listzd2ze3structz53zz__structurez00(obj_t BgL_envz00_1220, obj_t BgL_lstz00_1221)
{
{ /* Llib/struct.scm 191 */
{ /* Llib/struct.scm 195 */
obj_t BgL_auxz00_1522;
if(
PAIRP(BgL_lstz00_1221))
{ /* Llib/struct.scm 195 */
BgL_auxz00_1522 = BgL_lstz00_1221
; }  else 
{ 
obj_t BgL_auxz00_1525;
BgL_auxz00_1525 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1537z00zz__structurez00, 
BINT(((long)8400)), BGl_string1558z00zz__structurez00, BGl_string1555z00zz__structurez00, BgL_lstz00_1221); 
FAILURE(BgL_auxz00_1525,BFALSE,BFALSE);} 
return 
BGl_listzd2ze3structz31zz__structurez00(BgL_auxz00_1522);} } 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__structurez00()
{
{ /* Llib/struct.scm 18 */
return 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string1559z00zz__structurez00));} 

}

#ifdef __cplusplus
}
#endif
