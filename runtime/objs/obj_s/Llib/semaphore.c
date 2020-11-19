/*===========================================================================*/
/*   (Llib/semaphore.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/semaphore.scm -indent -o objs/obj_s/Llib/semaphore.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_requirezd2initializa7ationz75zz__semaphorez00 = BUNSPEC;
static obj_t BGl_genericzd2initzd2zz__semaphorez00();
static obj_t BGl_objectzd2initzd2zz__semaphorez00();
static obj_t BGl_methodzd2initzd2zz__semaphorez00();
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__semaphorez00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL bool_t BGl_semaphorezf3zf3zz__semaphorez00(obj_t);
static obj_t BGl_z62semaphorezf3z91zz__semaphorez00(obj_t, obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__semaphorez00();
static obj_t BGl_importedzd2moduleszd2initz00zz__semaphorez00();
static obj_t *__cnst;


DEFINE_STRING( BGl_string1575z00zz__semaphorez00, BgL_bgl_string1575za700za7za7_1576za7, "__semaphore", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_semaphorezf3zd2envz21zz__semaphorez00, BgL_bgl_za762semaphoreza7f3za71577za7, BGl_z62semaphorezf3z91zz__semaphorez00, 0L, BUNSPEC, 1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__semaphorez00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__semaphorez00(long BgL_checksumz00_1685, char * BgL_fromz00_1686)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__semaphorez00))
{ 
BGl_requirezd2initializa7ationz75zz__semaphorez00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__semaphorez00(); 
BGl_importedzd2moduleszd2initz00zz__semaphorez00(); 
return 
BGl_methodzd2initzd2zz__semaphorez00();}  else 
{ 
return BUNSPEC;} } 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__semaphorez00()
{
{ /* Llib/semaphore.scm 15 */
return 
bgl_gc_roots_register();} 

}



/* semaphore? */
BGL_EXPORTED_DEF bool_t BGl_semaphorezf3zf3zz__semaphorez00(obj_t BgL_oz00_3)
{
{ /* Llib/semaphore.scm 53 */
return 
BGL_SEMAPHOREP(BgL_oz00_3);} 

}



/* &semaphore? */
obj_t BGl_z62semaphorezf3z91zz__semaphorez00(obj_t BgL_envz00_1683, obj_t BgL_oz00_1684)
{
{ /* Llib/semaphore.scm 53 */
return 
BBOOL(
BGl_semaphorezf3zf3zz__semaphorez00(BgL_oz00_1684));} 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__semaphorez00()
{
{ /* Llib/semaphore.scm 15 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__semaphorez00()
{
{ /* Llib/semaphore.scm 15 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__semaphorez00()
{
{ /* Llib/semaphore.scm 15 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__semaphorez00()
{
{ /* Llib/semaphore.scm 15 */
return 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string1575z00zz__semaphorez00));} 

}

#ifdef __cplusplus
}
#endif
