/*===========================================================================*/
/*   (Llib/binary.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/binary.scm -indent -o objs/obj_s/Llib/binary.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_z62inputzd2stringzb0zz__binaryz00(obj_t, obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__binaryz00 = BUNSPEC;
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62outputzd2stringzb0zz__binaryz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62appendzd2outputzd2binaryzd2filezb0zz__binaryz00(obj_t, obj_t);
extern int bgl_input_fill_string(obj_t, obj_t);
extern obj_t output_obj(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_closezd2binaryzd2portz00zz__binaryz00(obj_t);
extern unsigned char BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long);
extern obj_t input_obj(obj_t);
static obj_t BGl_genericzd2initzd2zz__binaryz00();
static obj_t BGl_objectzd2initzd2zz__binaryz00();
extern obj_t open_input_binary_file(obj_t);
BGL_EXPORTED_DECL obj_t BGl_appendzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t);
BGL_EXPORTED_DECL int BGl_inputzd2fillzd2stringz12z12zz__binaryz00(obj_t, obj_t);
extern obj_t bgl_input_string(obj_t, int);
static obj_t BGl_z62binaryzd2portzf3z43zz__binaryz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2bytezd2zz__binaryz00(obj_t, char);
BGL_EXPORTED_DECL obj_t BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(obj_t);
extern int bgl_output_string(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t);
static obj_t BGl_methodzd2initzd2zz__binaryz00();
extern obj_t open_output_binary_file(obj_t);
BGL_EXPORTED_DECL obj_t BGl_flushzd2binaryzd2portz00zz__binaryz00(obj_t);
extern obj_t close_binary_port(obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2stringzd2zz__binaryz00(obj_t, obj_t);
static obj_t BGl_z62closezd2binaryzd2portz62zz__binaryz00(obj_t, obj_t);
static obj_t BGl_z62outputzd2bytezb0zz__binaryz00(obj_t, obj_t, obj_t);
extern obj_t append_output_binary_file(obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2stringzd2zz__binaryz00(obj_t, int);
static obj_t BGl_z62openzd2inputzd2binaryzd2filezb0zz__binaryz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__binaryz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__intextz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL obj_t BGl_outputzd2objzd2zz__binaryz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2charzd2zz__binaryz00(obj_t, unsigned char);
static obj_t BGl_gczd2rootszd2initz00zz__binaryz00();
extern obj_t bgl_flush_binary_port(obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__binaryz00();
static obj_t BGl_z62inputzd2objzb0zz__binaryz00(obj_t, obj_t);
static obj_t BGl_z62outputzd2objzb0zz__binaryz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62flushzd2binaryzd2portz62zz__binaryz00(obj_t, obj_t);
static obj_t BGl_z62inputzd2fillzd2stringz12z70zz__binaryz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_binaryzd2portzf3z21zz__binaryz00(obj_t);
static obj_t BGl_z62openzd2outputzd2binaryzd2filezb0zz__binaryz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2charzd2zz__binaryz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2objzd2zz__binaryz00(obj_t);
static obj_t BGl_z62inputzd2charzb0zz__binaryz00(obj_t, obj_t);
static obj_t BGl_z62outputzd2charzb0zz__binaryz00(obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2inputzd2binaryzd2filezd2envz00zz__binaryz00, BgL_bgl_za762openza7d2inputza71713za7, BGl_z62openzd2inputzd2binaryzd2filezb0zz__binaryz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2stringzd2envz00zz__binaryz00, BgL_bgl_za762inputza7d2strin1714z00, BGl_z62inputzd2stringzb0zz__binaryz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2stringzd2envz00zz__binaryz00, BgL_bgl_za762outputza7d2stri1715z00, BGl_z62outputzd2stringzb0zz__binaryz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_flushzd2binaryzd2portzd2envzd2zz__binaryz00, BgL_bgl_za762flushza7d2binar1716z00, BGl_z62flushzd2binaryzd2portz62zz__binaryz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2outputzd2binaryzd2filezd2envz00zz__binaryz00, BgL_bgl_za762openza7d2output1717z00, BGl_z62openzd2outputzd2binaryzd2filezb0zz__binaryz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2charzd2envz00zz__binaryz00, BgL_bgl_za762outputza7d2char1718z00, BGl_z62outputzd2charzb0zz__binaryz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2charzd2envz00zz__binaryz00, BgL_bgl_za762inputza7d2charza71719za7, BGl_z62inputzd2charzb0zz__binaryz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1700z00zz__binaryz00, BgL_bgl_string1700za700za7za7_1720za7, "binary-port", 11 );
DEFINE_STRING( BGl_string1701z00zz__binaryz00, BgL_bgl_string1701za700za7za7_1721za7, "&flush-binary-port", 18 );
DEFINE_STRING( BGl_string1702z00zz__binaryz00, BgL_bgl_string1702za700za7za7_1722za7, "&input-obj", 10 );
DEFINE_STRING( BGl_string1703z00zz__binaryz00, BgL_bgl_string1703za700za7za7_1723za7, "&output-obj", 11 );
DEFINE_STRING( BGl_string1704z00zz__binaryz00, BgL_bgl_string1704za700za7za7_1724za7, "&output-char", 12 );
DEFINE_STRING( BGl_string1705z00zz__binaryz00, BgL_bgl_string1705za700za7za7_1725za7, "bchar", 5 );
DEFINE_STRING( BGl_string1706z00zz__binaryz00, BgL_bgl_string1706za700za7za7_1726za7, "&output-byte", 12 );
DEFINE_STRING( BGl_string1707z00zz__binaryz00, BgL_bgl_string1707za700za7za7_1727za7, "bint", 4 );
DEFINE_STRING( BGl_string1708z00zz__binaryz00, BgL_bgl_string1708za700za7za7_1728za7, "&input-char", 11 );
DEFINE_STRING( BGl_string1709z00zz__binaryz00, BgL_bgl_string1709za700za7za7_1729za7, "&output-string", 14 );
DEFINE_STRING( BGl_string1710z00zz__binaryz00, BgL_bgl_string1710za700za7za7_1730za7, "&input-string", 13 );
DEFINE_STRING( BGl_string1711z00zz__binaryz00, BgL_bgl_string1711za700za7za7_1731za7, "&input-fill-string!", 19 );
DEFINE_STRING( BGl_string1712z00zz__binaryz00, BgL_bgl_string1712za700za7za7_1732za7, "__binary", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2fillzd2stringz12zd2envzc0zz__binaryz00, BgL_bgl_za762inputza7d2fillza71733za7, BGl_z62inputzd2fillzd2stringz12z70zz__binaryz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_closezd2binaryzd2portzd2envzd2zz__binaryz00, BgL_bgl_za762closeza7d2binar1734z00, BGl_z62closezd2binaryzd2portz62zz__binaryz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1694z00zz__binaryz00, BgL_bgl_string1694za700za7za7_1735za7, "/tmp/4.4a/runtime/Llib/binary.scm", 33 );
DEFINE_STRING( BGl_string1695z00zz__binaryz00, BgL_bgl_string1695za700za7za7_1736za7, "&open-output-binary-file", 24 );
DEFINE_STRING( BGl_string1696z00zz__binaryz00, BgL_bgl_string1696za700za7za7_1737za7, "bstring", 7 );
DEFINE_STRING( BGl_string1697z00zz__binaryz00, BgL_bgl_string1697za700za7za7_1738za7, "&append-output-binary-file", 26 );
DEFINE_STRING( BGl_string1698z00zz__binaryz00, BgL_bgl_string1698za700za7za7_1739za7, "&open-input-binary-file", 23 );
DEFINE_STRING( BGl_string1699z00zz__binaryz00, BgL_bgl_string1699za700za7za7_1740za7, "&close-binary-port", 18 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2bytezd2envz00zz__binaryz00, BgL_bgl_za762outputza7d2byte1741z00, BGl_z62outputzd2bytezb0zz__binaryz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_binaryzd2portzf3zd2envzf3zz__binaryz00, BgL_bgl_za762binaryza7d2port1742z00, BGl_z62binaryzd2portzf3z43zz__binaryz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2objzd2envz00zz__binaryz00, BgL_bgl_za762outputza7d2objza71743za7, BGl_z62outputzd2objzb0zz__binaryz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_appendzd2outputzd2binaryzd2filezd2envz00zz__binaryz00, BgL_bgl_za762appendza7d2outp1744z00, BGl_z62appendzd2outputzd2binaryzd2filezb0zz__binaryz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2objzd2envz00zz__binaryz00, BgL_bgl_za762inputza7d2objza7b1745za7, BGl_z62inputzd2objzb0zz__binaryz00, 0L, BUNSPEC, 1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__binaryz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__binaryz00(long BgL_checksumz00_2072, char * BgL_fromz00_2073)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__binaryz00))
{ 
BGl_requirezd2initializa7ationz75zz__binaryz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__binaryz00(); 
BGl_importedzd2moduleszd2initz00zz__binaryz00(); 
return 
BGl_methodzd2initzd2zz__binaryz00();}  else 
{ 
return BUNSPEC;} } 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__binaryz00()
{
{ /* Llib/binary.scm 15 */
return 
bgl_gc_roots_register();} 

}



/* binary-port? */
BGL_EXPORTED_DEF bool_t BGl_binaryzd2portzf3z21zz__binaryz00(obj_t BgL_objz00_3)
{
{ /* Llib/binary.scm 138 */
return 
BINARY_PORTP(BgL_objz00_3);} 

}



/* &binary-port? */
obj_t BGl_z62binaryzd2portzf3z43zz__binaryz00(obj_t BgL_envz00_2001, obj_t BgL_objz00_2002)
{
{ /* Llib/binary.scm 138 */
return 
BBOOL(
BGl_binaryzd2portzf3z21zz__binaryz00(BgL_objz00_2002));} 

}



/* open-output-binary-file */
BGL_EXPORTED_DEF obj_t BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t BgL_strz00_4)
{
{ /* Llib/binary.scm 144 */
return 
open_output_binary_file(BgL_strz00_4);} 

}



/* &open-output-binary-file */
obj_t BGl_z62openzd2outputzd2binaryzd2filezb0zz__binaryz00(obj_t BgL_envz00_2003, obj_t BgL_strz00_2004)
{
{ /* Llib/binary.scm 144 */
{ /* Llib/binary.scm 145 */
obj_t BgL_auxz00_2085;
if(
STRINGP(BgL_strz00_2004))
{ /* Llib/binary.scm 145 */
BgL_auxz00_2085 = BgL_strz00_2004
; }  else 
{ 
obj_t BgL_auxz00_2088;
BgL_auxz00_2088 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1694z00zz__binaryz00, 
BINT(((long)5623)), BGl_string1695z00zz__binaryz00, BGl_string1696z00zz__binaryz00, BgL_strz00_2004); 
FAILURE(BgL_auxz00_2088,BFALSE,BFALSE);} 
return 
BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(BgL_auxz00_2085);} } 

}



/* append-output-binary-file */
BGL_EXPORTED_DEF obj_t BGl_appendzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t BgL_strz00_5)
{
{ /* Llib/binary.scm 150 */
return 
append_output_binary_file(BgL_strz00_5);} 

}



/* &append-output-binary-file */
obj_t BGl_z62appendzd2outputzd2binaryzd2filezb0zz__binaryz00(obj_t BgL_envz00_2005, obj_t BgL_strz00_2006)
{
{ /* Llib/binary.scm 150 */
{ /* Llib/binary.scm 151 */
obj_t BgL_auxz00_2094;
if(
STRINGP(BgL_strz00_2006))
{ /* Llib/binary.scm 151 */
BgL_auxz00_2094 = BgL_strz00_2006
; }  else 
{ 
obj_t BgL_auxz00_2097;
BgL_auxz00_2097 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1694z00zz__binaryz00, 
BINT(((long)5921)), BGl_string1697z00zz__binaryz00, BGl_string1696z00zz__binaryz00, BgL_strz00_2006); 
FAILURE(BgL_auxz00_2097,BFALSE,BFALSE);} 
return 
BGl_appendzd2outputzd2binaryzd2filezd2zz__binaryz00(BgL_auxz00_2094);} } 

}



/* open-input-binary-file */
BGL_EXPORTED_DEF obj_t BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(obj_t BgL_strz00_6)
{
{ /* Llib/binary.scm 156 */
return 
open_input_binary_file(BgL_strz00_6);} 

}



/* &open-input-binary-file */
obj_t BGl_z62openzd2inputzd2binaryzd2filezb0zz__binaryz00(obj_t BgL_envz00_2007, obj_t BgL_strz00_2008)
{
{ /* Llib/binary.scm 156 */
{ /* Llib/binary.scm 157 */
obj_t BgL_auxz00_2103;
if(
STRINGP(BgL_strz00_2008))
{ /* Llib/binary.scm 157 */
BgL_auxz00_2103 = BgL_strz00_2008
; }  else 
{ 
obj_t BgL_auxz00_2106;
BgL_auxz00_2106 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1694z00zz__binaryz00, 
BINT(((long)6218)), BGl_string1698z00zz__binaryz00, BGl_string1696z00zz__binaryz00, BgL_strz00_2008); 
FAILURE(BgL_auxz00_2106,BFALSE,BFALSE);} 
return 
BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(BgL_auxz00_2103);} } 

}



/* close-binary-port */
BGL_EXPORTED_DEF obj_t BGl_closezd2binaryzd2portz00zz__binaryz00(obj_t BgL_portz00_7)
{
{ /* Llib/binary.scm 162 */
return 
close_binary_port(BgL_portz00_7);} 

}



/* &close-binary-port */
obj_t BGl_z62closezd2binaryzd2portz62zz__binaryz00(obj_t BgL_envz00_2009, obj_t BgL_portz00_2010)
{
{ /* Llib/binary.scm 162 */
{ /* Llib/binary.scm 163 */
obj_t BgL_auxz00_2112;
if(
BINARY_PORTP(BgL_portz00_2010))
{ /* Llib/binary.scm 163 */
BgL_auxz00_2112 = BgL_portz00_2010
; }  else 
{ 
obj_t BgL_auxz00_2115;
BgL_auxz00_2115 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1694z00zz__binaryz00, 
BINT(((long)6515)), BGl_string1699z00zz__binaryz00, BGl_string1700z00zz__binaryz00, BgL_portz00_2010); 
FAILURE(BgL_auxz00_2115,BFALSE,BFALSE);} 
return 
BGl_closezd2binaryzd2portz00zz__binaryz00(BgL_auxz00_2112);} } 

}



/* flush-binary-port */
BGL_EXPORTED_DEF obj_t BGl_flushzd2binaryzd2portz00zz__binaryz00(obj_t BgL_portz00_8)
{
{ /* Llib/binary.scm 168 */
return 
bgl_flush_binary_port(BgL_portz00_8);} 

}



/* &flush-binary-port */
obj_t BGl_z62flushzd2binaryzd2portz62zz__binaryz00(obj_t BgL_envz00_2011, obj_t BgL_portz00_2012)
{
{ /* Llib/binary.scm 168 */
{ /* Llib/binary.scm 169 */
obj_t BgL_auxz00_2121;
if(
BINARY_PORTP(BgL_portz00_2012))
{ /* Llib/binary.scm 169 */
BgL_auxz00_2121 = BgL_portz00_2012
; }  else 
{ 
obj_t BgL_auxz00_2124;
BgL_auxz00_2124 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1694z00zz__binaryz00, 
BINT(((long)6808)), BGl_string1701z00zz__binaryz00, BGl_string1700z00zz__binaryz00, BgL_portz00_2012); 
FAILURE(BgL_auxz00_2124,BFALSE,BFALSE);} 
return 
BGl_flushzd2binaryzd2portz00zz__binaryz00(BgL_auxz00_2121);} } 

}



/* input-obj */
BGL_EXPORTED_DEF obj_t BGl_inputzd2objzd2zz__binaryz00(obj_t BgL_portz00_9)
{
{ /* Llib/binary.scm 174 */
return 
input_obj(BgL_portz00_9);} 

}



/* &input-obj */
obj_t BGl_z62inputzd2objzb0zz__binaryz00(obj_t BgL_envz00_2013, obj_t BgL_portz00_2014)
{
{ /* Llib/binary.scm 174 */
{ /* Llib/binary.scm 175 */
obj_t BgL_auxz00_2130;
if(
BINARY_PORTP(BgL_portz00_2014))
{ /* Llib/binary.scm 175 */
BgL_auxz00_2130 = BgL_portz00_2014
; }  else 
{ 
obj_t BgL_auxz00_2133;
BgL_auxz00_2133 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1694z00zz__binaryz00, 
BINT(((long)7093)), BGl_string1702z00zz__binaryz00, BGl_string1700z00zz__binaryz00, BgL_portz00_2014); 
FAILURE(BgL_auxz00_2133,BFALSE,BFALSE);} 
return 
BGl_inputzd2objzd2zz__binaryz00(BgL_auxz00_2130);} } 

}



/* output-obj */
BGL_EXPORTED_DEF obj_t BGl_outputzd2objzd2zz__binaryz00(obj_t BgL_portz00_10, obj_t BgL_objz00_11)
{
{ /* Llib/binary.scm 180 */
return 
output_obj(BgL_portz00_10, BgL_objz00_11);} 

}



/* &output-obj */
obj_t BGl_z62outputzd2objzb0zz__binaryz00(obj_t BgL_envz00_2015, obj_t BgL_portz00_2016, obj_t BgL_objz00_2017)
{
{ /* Llib/binary.scm 180 */
{ /* Llib/binary.scm 181 */
obj_t BgL_auxz00_2139;
if(
BINARY_PORTP(BgL_portz00_2016))
{ /* Llib/binary.scm 181 */
BgL_auxz00_2139 = BgL_portz00_2016
; }  else 
{ 
obj_t BgL_auxz00_2142;
BgL_auxz00_2142 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1694z00zz__binaryz00, 
BINT(((long)7375)), BGl_string1703z00zz__binaryz00, BGl_string1700z00zz__binaryz00, BgL_portz00_2016); 
FAILURE(BgL_auxz00_2142,BFALSE,BFALSE);} 
return 
BGl_outputzd2objzd2zz__binaryz00(BgL_auxz00_2139, BgL_objz00_2017);} } 

}



/* output-char */
BGL_EXPORTED_DEF obj_t BGl_outputzd2charzd2zz__binaryz00(obj_t BgL_portz00_12, unsigned char BgL_charz00_13)
{
{ /* Llib/binary.scm 186 */
return 
BGL_OUTPUT_CHAR(BgL_portz00_12, BgL_charz00_13);} 

}



/* &output-char */
obj_t BGl_z62outputzd2charzb0zz__binaryz00(obj_t BgL_envz00_2018, obj_t BgL_portz00_2019, obj_t BgL_charz00_2020)
{
{ /* Llib/binary.scm 186 */
{ /* Llib/binary.scm 187 */
unsigned char BgL_auxz00_2155;obj_t BgL_auxz00_2148;
{ /* Llib/binary.scm 187 */
obj_t BgL_tmpz00_2156;
if(
CHARP(BgL_charz00_2020))
{ /* Llib/binary.scm 187 */
BgL_tmpz00_2156 = BgL_charz00_2020
; }  else 
{ 
obj_t BgL_auxz00_2159;
BgL_auxz00_2159 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1694z00zz__binaryz00, 
BINT(((long)7669)), BGl_string1704z00zz__binaryz00, BGl_string1705z00zz__binaryz00, BgL_charz00_2020); 
FAILURE(BgL_auxz00_2159,BFALSE,BFALSE);} 
BgL_auxz00_2155 = 
CCHAR(BgL_tmpz00_2156); } 
if(
BINARY_PORTP(BgL_portz00_2019))
{ /* Llib/binary.scm 187 */
BgL_auxz00_2148 = BgL_portz00_2019
; }  else 
{ 
obj_t BgL_auxz00_2151;
BgL_auxz00_2151 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1694z00zz__binaryz00, 
BINT(((long)7669)), BGl_string1704z00zz__binaryz00, BGl_string1700z00zz__binaryz00, BgL_portz00_2019); 
FAILURE(BgL_auxz00_2151,BFALSE,BFALSE);} 
return 
BGl_outputzd2charzd2zz__binaryz00(BgL_auxz00_2148, BgL_auxz00_2155);} } 

}



/* output-byte */
BGL_EXPORTED_DEF obj_t BGl_outputzd2bytezd2zz__binaryz00(obj_t BgL_portz00_14, char BgL_charz00_15)
{
{ /* Llib/binary.scm 192 */
return 
BGL_OUTPUT_CHAR(BgL_portz00_14, BgL_charz00_15);} 

}



/* &output-byte */
obj_t BGl_z62outputzd2bytezb0zz__binaryz00(obj_t BgL_envz00_2021, obj_t BgL_portz00_2022, obj_t BgL_charz00_2023)
{
{ /* Llib/binary.scm 192 */
{ /* Llib/binary.scm 193 */
char BgL_auxz00_2173;obj_t BgL_auxz00_2166;
{ /* Llib/binary.scm 193 */
obj_t BgL_tmpz00_2174;
if(
INTEGERP(BgL_charz00_2023))
{ /* Llib/binary.scm 193 */
BgL_tmpz00_2174 = BgL_charz00_2023
; }  else 
{ 
obj_t BgL_auxz00_2177;
BgL_auxz00_2177 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1694z00zz__binaryz00, 
BINT(((long)7960)), BGl_string1706z00zz__binaryz00, BGl_string1707z00zz__binaryz00, BgL_charz00_2023); 
FAILURE(BgL_auxz00_2177,BFALSE,BFALSE);} 
BgL_auxz00_2173 = 
(signed char)CINT(BgL_tmpz00_2174); } 
if(
BINARY_PORTP(BgL_portz00_2022))
{ /* Llib/binary.scm 193 */
BgL_auxz00_2166 = BgL_portz00_2022
; }  else 
{ 
obj_t BgL_auxz00_2169;
BgL_auxz00_2169 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1694z00zz__binaryz00, 
BINT(((long)7960)), BGl_string1706z00zz__binaryz00, BGl_string1700z00zz__binaryz00, BgL_portz00_2022); 
FAILURE(BgL_auxz00_2169,BFALSE,BFALSE);} 
return 
BGl_outputzd2bytezd2zz__binaryz00(BgL_auxz00_2166, BgL_auxz00_2173);} } 

}



/* input-char */
BGL_EXPORTED_DEF obj_t BGl_inputzd2charzd2zz__binaryz00(obj_t BgL_portz00_16)
{
{ /* Llib/binary.scm 198 */
{ /* Llib/binary.scm 199 */
int BgL_charz00_2071;
BgL_charz00_2071 = 
BGL_INPUT_CHAR(BgL_portz00_16); 
if(
BGL_INT_EOFP(BgL_charz00_2071))
{ /* Llib/binary.scm 200 */
return BEOF;}  else 
{ /* Llib/binary.scm 200 */
return 
BCHAR(
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(long)(BgL_charz00_2071)));} } } 

}



/* &input-char */
obj_t BGl_z62inputzd2charzb0zz__binaryz00(obj_t BgL_envz00_2024, obj_t BgL_portz00_2025)
{
{ /* Llib/binary.scm 198 */
{ /* Llib/binary.scm 199 */
obj_t BgL_auxz00_2189;
if(
BINARY_PORTP(BgL_portz00_2025))
{ /* Llib/binary.scm 199 */
BgL_auxz00_2189 = BgL_portz00_2025
; }  else 
{ 
obj_t BgL_auxz00_2192;
BgL_auxz00_2192 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1694z00zz__binaryz00, 
BINT(((long)8245)), BGl_string1708z00zz__binaryz00, BGl_string1700z00zz__binaryz00, BgL_portz00_2025); 
FAILURE(BgL_auxz00_2192,BFALSE,BFALSE);} 
return 
BGl_inputzd2charzd2zz__binaryz00(BgL_auxz00_2189);} } 

}



/* output-string */
BGL_EXPORTED_DEF obj_t BGl_outputzd2stringzd2zz__binaryz00(obj_t BgL_portz00_17, obj_t BgL_stringz00_18)
{
{ /* Llib/binary.scm 207 */
return 
BINT(
bgl_output_string(BgL_portz00_17, BgL_stringz00_18));} 

}



/* &output-string */
obj_t BGl_z62outputzd2stringzb0zz__binaryz00(obj_t BgL_envz00_2026, obj_t BgL_portz00_2027, obj_t BgL_stringz00_2028)
{
{ /* Llib/binary.scm 207 */
{ /* Llib/binary.scm 208 */
obj_t BgL_auxz00_2206;obj_t BgL_auxz00_2199;
if(
STRINGP(BgL_stringz00_2028))
{ /* Llib/binary.scm 208 */
BgL_auxz00_2206 = BgL_stringz00_2028
; }  else 
{ 
obj_t BgL_auxz00_2209;
BgL_auxz00_2209 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1694z00zz__binaryz00, 
BINT(((long)8609)), BGl_string1709z00zz__binaryz00, BGl_string1696z00zz__binaryz00, BgL_stringz00_2028); 
FAILURE(BgL_auxz00_2209,BFALSE,BFALSE);} 
if(
BINARY_PORTP(BgL_portz00_2027))
{ /* Llib/binary.scm 208 */
BgL_auxz00_2199 = BgL_portz00_2027
; }  else 
{ 
obj_t BgL_auxz00_2202;
BgL_auxz00_2202 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1694z00zz__binaryz00, 
BINT(((long)8609)), BGl_string1709z00zz__binaryz00, BGl_string1700z00zz__binaryz00, BgL_portz00_2027); 
FAILURE(BgL_auxz00_2202,BFALSE,BFALSE);} 
return 
BGl_outputzd2stringzd2zz__binaryz00(BgL_auxz00_2199, BgL_auxz00_2206);} } 

}



/* input-string */
BGL_EXPORTED_DEF obj_t BGl_inputzd2stringzd2zz__binaryz00(obj_t BgL_portz00_19, int BgL_lenz00_20)
{
{ /* Llib/binary.scm 213 */
return 
bgl_input_string(BgL_portz00_19, BgL_lenz00_20);} 

}



/* &input-string */
obj_t BGl_z62inputzd2stringzb0zz__binaryz00(obj_t BgL_envz00_2029, obj_t BgL_portz00_2030, obj_t BgL_lenz00_2031)
{
{ /* Llib/binary.scm 213 */
{ /* Llib/binary.scm 214 */
int BgL_auxz00_2222;obj_t BgL_auxz00_2215;
{ /* Llib/binary.scm 214 */
obj_t BgL_tmpz00_2223;
if(
INTEGERP(BgL_lenz00_2031))
{ /* Llib/binary.scm 214 */
BgL_tmpz00_2223 = BgL_lenz00_2031
; }  else 
{ 
obj_t BgL_auxz00_2226;
BgL_auxz00_2226 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1694z00zz__binaryz00, 
BINT(((long)8904)), BGl_string1710z00zz__binaryz00, BGl_string1707z00zz__binaryz00, BgL_lenz00_2031); 
FAILURE(BgL_auxz00_2226,BFALSE,BFALSE);} 
BgL_auxz00_2222 = 
CINT(BgL_tmpz00_2223); } 
if(
BINARY_PORTP(BgL_portz00_2030))
{ /* Llib/binary.scm 214 */
BgL_auxz00_2215 = BgL_portz00_2030
; }  else 
{ 
obj_t BgL_auxz00_2218;
BgL_auxz00_2218 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1694z00zz__binaryz00, 
BINT(((long)8904)), BGl_string1710z00zz__binaryz00, BGl_string1700z00zz__binaryz00, BgL_portz00_2030); 
FAILURE(BgL_auxz00_2218,BFALSE,BFALSE);} 
return 
BGl_inputzd2stringzd2zz__binaryz00(BgL_auxz00_2215, BgL_auxz00_2222);} } 

}



/* input-fill-string! */
BGL_EXPORTED_DEF int BGl_inputzd2fillzd2stringz12z12zz__binaryz00(obj_t BgL_portz00_21, obj_t BgL_strz00_22)
{
{ /* Llib/binary.scm 219 */
return 
bgl_input_fill_string(BgL_portz00_21, BgL_strz00_22);} 

}



/* &input-fill-string! */
obj_t BGl_z62inputzd2fillzd2stringz12z70zz__binaryz00(obj_t BgL_envz00_2032, obj_t BgL_portz00_2033, obj_t BgL_strz00_2034)
{
{ /* Llib/binary.scm 219 */
{ /* Llib/binary.scm 220 */
int BgL_tmpz00_2233;
{ /* Llib/binary.scm 220 */
obj_t BgL_auxz00_2241;obj_t BgL_auxz00_2234;
if(
STRINGP(BgL_strz00_2034))
{ /* Llib/binary.scm 220 */
BgL_auxz00_2241 = BgL_strz00_2034
; }  else 
{ 
obj_t BgL_auxz00_2244;
BgL_auxz00_2244 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1694z00zz__binaryz00, 
BINT(((long)9201)), BGl_string1711z00zz__binaryz00, BGl_string1696z00zz__binaryz00, BgL_strz00_2034); 
FAILURE(BgL_auxz00_2244,BFALSE,BFALSE);} 
if(
BINARY_PORTP(BgL_portz00_2033))
{ /* Llib/binary.scm 220 */
BgL_auxz00_2234 = BgL_portz00_2033
; }  else 
{ 
obj_t BgL_auxz00_2237;
BgL_auxz00_2237 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1694z00zz__binaryz00, 
BINT(((long)9201)), BGl_string1711z00zz__binaryz00, BGl_string1700z00zz__binaryz00, BgL_portz00_2033); 
FAILURE(BgL_auxz00_2237,BFALSE,BFALSE);} 
BgL_tmpz00_2233 = 
BGl_inputzd2fillzd2stringz12z12zz__binaryz00(BgL_auxz00_2234, BgL_auxz00_2241); } 
return 
BINT(BgL_tmpz00_2233);} } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__binaryz00()
{
{ /* Llib/binary.scm 15 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__binaryz00()
{
{ /* Llib/binary.scm 15 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__binaryz00()
{
{ /* Llib/binary.scm 15 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__binaryz00()
{
{ /* Llib/binary.scm 15 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string1712z00zz__binaryz00)); 
BGl_modulezd2initializa7ationz75zz__intextz00(((long)6305416), 
BSTRING_TO_STRING(BGl_string1712z00zz__binaryz00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string1712z00zz__binaryz00)); 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)340267996), 
BSTRING_TO_STRING(BGl_string1712z00zz__binaryz00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)193422032), 
BSTRING_TO_STRING(BGl_string1712z00zz__binaryz00)); 
return 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)224967910), 
BSTRING_TO_STRING(BGl_string1712z00zz__binaryz00));} 

}

#ifdef __cplusplus
}
#endif
