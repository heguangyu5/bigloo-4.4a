/*===========================================================================*/
/*   (Llib/foreign.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/foreign.scm -indent -o objs/obj_s/Llib/foreign.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_z62foreignzd2eqzf3z43zz__foreignz00(obj_t, obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__foreignz00 = BUNSPEC;
static obj_t BGl_z62makezd2stringzd2ptrzd2nullzb0zz__foreignz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_foreignzf3zf3zz__foreignz00(obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_objzd2ze3cobjz31zz__foreignz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__foreignz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL char * BGl_makezd2stringzd2ptrzd2nullzd2zz__foreignz00();
static obj_t BGl_z62stringzd2ptrzd2nullzf3z91zz__foreignz00(obj_t, obj_t);
static obj_t BGl_z62voidza2zd2nullzf3ze1zz__foreignz00(obj_t, obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__foreignz00();
static obj_t BGl_importedzd2moduleszd2initz00zz__foreignz00();
static obj_t BGl_z62foreignzf3z91zz__foreignz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_foreignzd2nullzf3z21zz__foreignz00(obj_t);
extern obj_t void_star_to_obj(void *);
BGL_EXPORTED_DECL bool_t BGl_foreignzd2eqzf3z21zz__foreignz00(obj_t, obj_t);
BGL_EXPORTED_DECL void * BGl_makezd2voidza2zd2nullza2zz__foreignz00();
static obj_t BGl_z62makezd2voidza2zd2nullzc0zz__foreignz00(obj_t);
static obj_t BGl_z62foreignzd2nullzf3z43zz__foreignz00(obj_t, obj_t);
extern long obj_to_cobj(obj_t);
BGL_EXPORTED_DECL bool_t BGl_voidza2zd2nullzf3z83zz__foreignz00(void *);
BGL_EXPORTED_DECL bool_t BGl_stringzd2ptrzd2nullzf3zf3zz__foreignz00(char *);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62objzd2ze3cobjz53zz__foreignz00(obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ptrzd2nullzf3zd2envz21zz__foreignz00, BgL_bgl_za762stringza7d2ptrza71435za7, BGl_z62stringzd2ptrzd2nullzf3z91zz__foreignz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_objzd2ze3cobjzd2envze3zz__foreignz00, BgL_bgl_za762objza7d2za7e3cobj1436za7, BGl_z62objzd2ze3cobjz53zz__foreignz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1425z00zz__foreignz00, BgL_bgl_string1425za700za7za7_1437za7, "/tmp/4.4a/runtime/Llib/foreign.scm", 34 );
DEFINE_STRING( BGl_string1426z00zz__foreignz00, BgL_bgl_string1426za700za7za7_1438za7, "foreign-eq?", 11 );
DEFINE_STRING( BGl_string1427z00zz__foreignz00, BgL_bgl_string1427za700za7za7_1439za7, "foreign", 7 );
DEFINE_STRING( BGl_string1428z00zz__foreignz00, BgL_bgl_string1428za700za7za7_1440za7, "foreign-null?", 13 );
DEFINE_STRING( BGl_string1429z00zz__foreignz00, BgL_bgl_string1429za700za7za7_1441za7, "not a foreign object", 20 );
DEFINE_STRING( BGl_string1430z00zz__foreignz00, BgL_bgl_string1430za700za7za7_1442za7, "&string-ptr-null?", 17 );
DEFINE_STRING( BGl_string1431z00zz__foreignz00, BgL_bgl_string1431za700za7za7_1443za7, "bstring", 7 );
DEFINE_STRING( BGl_string1432z00zz__foreignz00, BgL_bgl_string1432za700za7za7_1444za7, "&void*-null?", 12 );
DEFINE_STRING( BGl_string1433z00zz__foreignz00, BgL_bgl_string1433za700za7za7_1445za7, "void*", 5 );
DEFINE_STRING( BGl_string1434z00zz__foreignz00, BgL_bgl_string1434za700za7za7_1446za7, "__foreign", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_foreignzf3zd2envz21zz__foreignz00, BgL_bgl_za762foreignza7f3za7911447za7, BGl_z62foreignzf3z91zz__foreignz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2voidza2zd2nullzd2envz70zz__foreignz00, BgL_bgl_za762makeza7d2voidza7a1448za7, BGl_z62makezd2voidza2zd2nullzc0zz__foreignz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2stringzd2ptrzd2nullzd2envz00zz__foreignz00, BgL_bgl_za762makeza7d2string1449z00, BGl_z62makezd2stringzd2ptrzd2nullzb0zz__foreignz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_foreignzd2eqzf3zd2envzf3zz__foreignz00, BgL_bgl_za762foreignza7d2eqza71450za7, BGl_z62foreignzd2eqzf3z43zz__foreignz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_voidza2zd2nullzf3zd2envz51zz__foreignz00, BgL_bgl_za762voidza7a2za7d2nul1451za7, BGl_z62voidza2zd2nullzf3ze1zz__foreignz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_foreignzd2nullzf3zd2envzf3zz__foreignz00, BgL_bgl_za762foreignza7d2nul1452z00, BGl_z62foreignzd2nullzf3z43zz__foreignz00, 0L, BUNSPEC, 1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__foreignz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__foreignz00(long BgL_checksumz00_1056, char * BgL_fromz00_1057)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__foreignz00))
{ 
BGl_requirezd2initializa7ationz75zz__foreignz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__foreignz00(); 
return 
BGl_importedzd2moduleszd2initz00zz__foreignz00();}  else 
{ 
return BUNSPEC;} } 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__foreignz00()
{
{ /* Llib/foreign.scm 18 */
return 
bgl_gc_roots_register();} 

}



/* foreign? */
BGL_EXPORTED_DEF bool_t BGl_foreignzf3zf3zz__foreignz00(obj_t BgL_objz00_3)
{
{ /* Llib/foreign.scm 91 */
return 
FOREIGNP(BgL_objz00_3);} 

}



/* &foreign? */
obj_t BGl_z62foreignzf3z91zz__foreignz00(obj_t BgL_envz00_1033, obj_t BgL_objz00_1034)
{
{ /* Llib/foreign.scm 91 */
return 
BBOOL(
BGl_foreignzf3zf3zz__foreignz00(BgL_objz00_1034));} 

}



/* foreign-eq? */
BGL_EXPORTED_DEF bool_t BGl_foreignzd2eqzf3z21zz__foreignz00(obj_t BgL_o1z00_4, obj_t BgL_o2z00_5)
{
{ /* Llib/foreign.scm 97 */
{ /* Llib/foreign.scm 98 */
obj_t BgL_auxz00_1074;obj_t BgL_tmpz00_1067;
if(
FOREIGNP(BgL_o2z00_5))
{ /* Llib/foreign.scm 98 */
BgL_auxz00_1074 = BgL_o2z00_5
; }  else 
{ 
obj_t BgL_auxz00_1077;
BgL_auxz00_1077 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1425z00zz__foreignz00, 
BINT(((long)4208)), BGl_string1426z00zz__foreignz00, BGl_string1427z00zz__foreignz00, BgL_o2z00_5); 
FAILURE(BgL_auxz00_1077,BFALSE,BFALSE);} 
if(
FOREIGNP(BgL_o1z00_4))
{ /* Llib/foreign.scm 98 */
BgL_tmpz00_1067 = BgL_o1z00_4
; }  else 
{ 
obj_t BgL_auxz00_1070;
BgL_auxz00_1070 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1425z00zz__foreignz00, 
BINT(((long)4205)), BGl_string1426z00zz__foreignz00, BGl_string1427z00zz__foreignz00, BgL_o1z00_4); 
FAILURE(BgL_auxz00_1070,BFALSE,BFALSE);} 
return 
FOREIGN_EQP(BgL_tmpz00_1067, BgL_auxz00_1074);} } 

}



/* &foreign-eq? */
obj_t BGl_z62foreignzd2eqzf3z43zz__foreignz00(obj_t BgL_envz00_1035, obj_t BgL_o1z00_1036, obj_t BgL_o2z00_1037)
{
{ /* Llib/foreign.scm 97 */
return 
BBOOL(
BGl_foreignzd2eqzf3z21zz__foreignz00(BgL_o1z00_1036, BgL_o2z00_1037));} 

}



/* foreign-null? */
BGL_EXPORTED_DEF bool_t BGl_foreignzd2nullzf3z21zz__foreignz00(obj_t BgL_objz00_6)
{
{ /* Llib/foreign.scm 103 */
if(
FOREIGNP(BgL_objz00_6))
{ /* Llib/foreign.scm 104 */
return 
FOREIGN_NULLP(BgL_objz00_6);}  else 
{ /* Llib/foreign.scm 104 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string1428z00zz__foreignz00, BGl_string1429z00zz__foreignz00, BgL_objz00_6));} } 

}



/* &foreign-null? */
obj_t BGl_z62foreignzd2nullzf3z43zz__foreignz00(obj_t BgL_envz00_1038, obj_t BgL_objz00_1039)
{
{ /* Llib/foreign.scm 103 */
return 
BBOOL(
BGl_foreignzd2nullzf3z21zz__foreignz00(BgL_objz00_1039));} 

}



/* string-ptr-null? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2ptrzd2nullzf3zf3zz__foreignz00(char * BgL_objz00_7)
{
{ /* Llib/foreign.scm 111 */
return 
STRING_PTR_NULL(BgL_objz00_7);} 

}



/* &string-ptr-null? */
obj_t BGl_z62stringzd2ptrzd2nullzf3z91zz__foreignz00(obj_t BgL_envz00_1040, obj_t BgL_objz00_1041)
{
{ /* Llib/foreign.scm 111 */
{ /* Llib/foreign.scm 112 */
bool_t BgL_tmpz00_1092;
{ /* Llib/foreign.scm 112 */
char * BgL_auxz00_1093;
{ /* Llib/foreign.scm 112 */
obj_t BgL_tmpz00_1094;
if(
STRINGP(BgL_objz00_1041))
{ /* Llib/foreign.scm 112 */
BgL_tmpz00_1094 = BgL_objz00_1041
; }  else 
{ 
obj_t BgL_auxz00_1097;
BgL_auxz00_1097 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1425z00zz__foreignz00, 
BINT(((long)4854)), BGl_string1430z00zz__foreignz00, BGl_string1431z00zz__foreignz00, BgL_objz00_1041); 
FAILURE(BgL_auxz00_1097,BFALSE,BFALSE);} 
BgL_auxz00_1093 = 
BSTRING_TO_STRING(BgL_tmpz00_1094); } 
BgL_tmpz00_1092 = 
BGl_stringzd2ptrzd2nullzf3zf3zz__foreignz00(BgL_auxz00_1093); } 
return 
BBOOL(BgL_tmpz00_1092);} } 

}



/* obj->cobj */
BGL_EXPORTED_DEF long BGl_objzd2ze3cobjz31zz__foreignz00(obj_t BgL_objz00_8)
{
{ /* Llib/foreign.scm 117 */
return 
obj_to_cobj(BgL_objz00_8);} 

}



/* &obj->cobj */
obj_t BGl_z62objzd2ze3cobjz53zz__foreignz00(obj_t BgL_envz00_1042, obj_t BgL_objz00_1043)
{
{ /* Llib/foreign.scm 117 */
return 
(obj_t)(
BGl_objzd2ze3cobjz31zz__foreignz00(BgL_objz00_1043));} 

}



/* void*-null? */
BGL_EXPORTED_DEF bool_t BGl_voidza2zd2nullzf3z83zz__foreignz00(void * BgL_objz00_9)
{
{ /* Llib/foreign.scm 123 */
return 
FOREIGN_PTR_NULL(BgL_objz00_9);} 

}



/* &void*-null? */
obj_t BGl_z62voidza2zd2nullzf3ze1zz__foreignz00(obj_t BgL_envz00_1044, obj_t BgL_objz00_1045)
{
{ /* Llib/foreign.scm 123 */
{ /* Llib/foreign.scm 124 */
bool_t BgL_tmpz00_1108;
{ /* Llib/foreign.scm 124 */
void * BgL_auxz00_1109;
if(
FOREIGNP(BgL_objz00_1045))
{ /* Llib/foreign.scm 124 */
BgL_auxz00_1109 = 
FOREIGN_TO_COBJ(BgL_objz00_1045)
; }  else 
{ 
obj_t BgL_auxz00_1113;
BgL_auxz00_1113 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1425z00zz__foreignz00, 
BINT(((long)5421)), BGl_string1432z00zz__foreignz00, BGl_string1433z00zz__foreignz00, BgL_objz00_1045); 
FAILURE(BgL_auxz00_1113,BFALSE,BFALSE);} 
BgL_tmpz00_1108 = 
BGl_voidza2zd2nullzf3z83zz__foreignz00(BgL_auxz00_1109); } 
return 
BBOOL(BgL_tmpz00_1108);} } 

}



/* make-string-ptr-null */
BGL_EXPORTED_DEF char * BGl_makezd2stringzd2ptrzd2nullzd2zz__foreignz00()
{
{ /* Llib/foreign.scm 129 */
return 
(0L);} 

}



/* &make-string-ptr-null */
obj_t BGl_z62makezd2stringzd2ptrzd2nullzb0zz__foreignz00(obj_t BgL_envz00_1046)
{
{ /* Llib/foreign.scm 129 */
return 
string_to_bstring(
BGl_makezd2stringzd2ptrzd2nullzd2zz__foreignz00());} 

}



/* make-void*-null */
BGL_EXPORTED_DEF void * BGl_makezd2voidza2zd2nullza2zz__foreignz00()
{
{ /* Llib/foreign.scm 135 */
return 
(0L);} 

}



/* &make-void*-null */
obj_t BGl_z62makezd2voidza2zd2nullzc0zz__foreignz00(obj_t BgL_envz00_1047)
{
{ /* Llib/foreign.scm 135 */
return 
void_star_to_obj(
BGl_makezd2voidza2zd2nullza2zz__foreignz00());} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__foreignz00()
{
{ /* Llib/foreign.scm 18 */
return 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string1434z00zz__foreignz00));} 

}

#ifdef __cplusplus
}
#endif
