/*===========================================================================*/
/*   (Llib/bit.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/bit.scm -indent -o objs/obj_s/Llib/bit.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_z62bitzd2urshs64zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int16_t BGl_bitzd2rshs16zd2zz__bitz00(int16_t, long);
static obj_t BGl_z62bitzd2urshllongzb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int16_t BGl_bitzd2nots16zd2zz__bitz00(int16_t);
BGL_EXPORTED_DECL uint32_t BGl_bitzd2andu32zd2zz__bitz00(uint32_t, uint32_t);
BGL_EXPORTED_DECL long BGl_bitzd2andzd2zz__bitz00(long, long);
static obj_t BGl_z62bitzd2oru8zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL uint16_t BGl_bitzd2xoru16zd2zz__bitz00(uint16_t, uint16_t);
static obj_t BGl_z62bitzd2andu16zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_bitzd2xorzd2zz__bitz00(long, long);
static obj_t BGl_z62bitzd2andzb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2lshs8zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2xors32zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2xorzb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int8_t BGl_bitzd2ands8zd2zz__bitz00(int8_t, int8_t);
static obj_t BGl_z62bitzd2urshu32zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2ors64zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2rshelongzb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int64_t BGl_bitzd2xors64zd2zz__bitz00(int64_t, int64_t);
static obj_t BGl_z62bitzd2ands64zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int32_t BGl_bitzd2ors32zd2zz__bitz00(int32_t, int32_t);
static obj_t BGl_z62bitzd2xorllongzb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2oru32zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int16_t BGl_bitzd2lshs16zd2zz__bitz00(int16_t, long);
BGL_EXPORTED_DECL int32_t BGl_bitzd2rshs32zd2zz__bitz00(int32_t, long);
static obj_t BGl_z62bitzd2urshzb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int32_t BGl_bitzd2nots32zd2zz__bitz00(int32_t);
static obj_t BGl_z62bitzd2rshs16zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__bitz00 = BUNSPEC;
static obj_t BGl_z62bitzd2nots16zb0zz__bitz00(obj_t, obj_t);
BGL_EXPORTED_DECL uint32_t BGl_bitzd2xoru32zd2zz__bitz00(uint32_t, uint32_t);
static obj_t BGl_z62bitzd2andu32zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2lshu8zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2xoru16zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int16_t BGl_bitzd2urshs16zd2zz__bitz00(int16_t, long);
static obj_t BGl_z62bitzd2orelongzb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL uint8_t BGl_bitzd2andu8zd2zz__bitz00(uint8_t, uint8_t);
BGL_EXPORTED_DECL long BGl_bitzd2rshelongzd2zz__bitz00(long, long);
static obj_t BGl_z62bitzd2lshllongzb0zz__bitz00(obj_t, obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL uint64_t BGl_bitzd2andu64zd2zz__bitz00(uint64_t, uint64_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_bitzd2xorllongzd2zz__bitz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
static obj_t BGl_z62bitzd2andllongzb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL uint16_t BGl_bitzd2oru16zd2zz__bitz00(uint16_t, uint16_t);
static obj_t BGl_z62bitzd2xors64zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int32_t BGl_bitzd2lshs32zd2zz__bitz00(int32_t, long);
static obj_t BGl_z62bitzd2urshelongzb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2lshs16zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2urshu64zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int16_t BGl_bitzd2rshu16zd2zz__bitz00(int16_t, long);
static obj_t BGl_z62bitzd2rshs32zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL uint16_t BGl_bitzd2notu16zd2zz__bitz00(uint16_t);
static obj_t BGl_z62bitzd2nots32zb0zz__bitz00(obj_t, obj_t);
BGL_EXPORTED_DECL int8_t BGl_bitzd2lshs8zd2zz__bitz00(int8_t, long);
static obj_t BGl_z62bitzd2xoru32zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int32_t BGl_bitzd2urshs32zd2zz__bitz00(int32_t, long);
BGL_EXPORTED_DECL int64_t BGl_bitzd2ors64zd2zz__bitz00(int64_t, int64_t);
static obj_t BGl_z62bitzd2nots8zb0zz__bitz00(obj_t, obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_bitzd2lshllongzd2zz__bitz00(BGL_LONGLONG_T, long);
static obj_t BGl_z62bitzd2oru64zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int64_t BGl_bitzd2rshs64zd2zz__bitz00(int64_t, long);
BGL_EXPORTED_DECL int64_t BGl_bitzd2nots64zd2zz__bitz00(int64_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_bitzd2andllongzd2zz__bitz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
static obj_t BGl_z62bitzd2notllongzb0zz__bitz00(obj_t, obj_t);
static obj_t BGl_z62bitzd2xorelongzb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL uint64_t BGl_bitzd2xoru64zd2zz__bitz00(uint64_t, uint64_t);
static obj_t BGl_z62bitzd2andu64zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL uint32_t BGl_bitzd2oru32zd2zz__bitz00(uint32_t, uint32_t);
BGL_EXPORTED_DECL uint16_t BGl_bitzd2lshu16zd2zz__bitz00(uint16_t, long);
static obj_t BGl_z62bitzd2orzb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2lshs32zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL uint32_t BGl_bitzd2rshu32zd2zz__bitz00(uint32_t, long);
BGL_EXPORTED_DECL uint32_t BGl_bitzd2notu32zd2zz__bitz00(uint32_t);
static obj_t BGl_z62bitzd2rshu16zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL uint8_t BGl_bitzd2lshu8zd2zz__bitz00(uint8_t, long);
static obj_t BGl_z62bitzd2notu16zb0zz__bitz00(obj_t, obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_bitzd2orllongzd2zz__bitz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
BGL_EXPORTED_DECL uint16_t BGl_bitzd2urshu16zd2zz__bitz00(uint16_t, long);
static obj_t BGl_z62bitzd2notu8zb0zz__bitz00(obj_t, obj_t);
BGL_EXPORTED_DECL int64_t BGl_bitzd2lshs64zd2zz__bitz00(int64_t, long);
static obj_t BGl_z62bitzd2lshelongzb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__bitz00();
static obj_t BGl_importedzd2moduleszd2initz00zz__bitz00();
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_bitzd2notllongzd2zz__bitz00(BGL_LONGLONG_T);
BGL_EXPORTED_DECL long BGl_bitzd2xorelongzd2zz__bitz00(long, long);
static obj_t BGl_z62bitzd2rshs64zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2andelongzb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2nots64zb0zz__bitz00(obj_t, obj_t);
static obj_t BGl_z62bitzd2xoru64zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int64_t BGl_bitzd2urshs64zd2zz__bitz00(int64_t, long);
BGL_EXPORTED_DECL uint32_t BGl_bitzd2lshu32zd2zz__bitz00(uint32_t, long);
static obj_t BGl_z62bitzd2lshu16zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_bitzd2rshzd2zz__bitz00(long, long);
BGL_EXPORTED_DECL int8_t BGl_bitzd2ors8zd2zz__bitz00(int8_t, int8_t);
static obj_t BGl_z62bitzd2rshu32zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2rshzb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2notu32zb0zz__bitz00(obj_t, obj_t);
BGL_EXPORTED_DECL int8_t BGl_bitzd2nots8zd2zz__bitz00(int8_t);
BGL_EXPORTED_DECL uint32_t BGl_bitzd2urshu32zd2zz__bitz00(uint32_t, long);
static obj_t BGl_z62bitzd2rshs8zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_bitzd2lshelongzd2zz__bitz00(long, long);
BGL_EXPORTED_DECL uint64_t BGl_bitzd2oru64zd2zz__bitz00(uint64_t, uint64_t);
static obj_t BGl_z62bitzd2xors8zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_bitzd2andelongzd2zz__bitz00(long, long);
static obj_t BGl_z62bitzd2lshs64zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL uint64_t BGl_bitzd2rshu64zd2zz__bitz00(uint64_t, long);
static obj_t BGl_z62bitzd2notelongzb0zz__bitz00(obj_t, obj_t);
BGL_EXPORTED_DECL uint64_t BGl_bitzd2notu64zd2zz__bitz00(uint64_t);
static obj_t BGl_z62bitzd2lshu32zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL uint8_t BGl_bitzd2oru8zd2zz__bitz00(uint8_t, uint8_t);
BGL_EXPORTED_DECL int8_t BGl_bitzd2urshs8zd2zz__bitz00(int8_t, long);
BGL_EXPORTED_DECL int16_t BGl_bitzd2ands16zd2zz__bitz00(int16_t, int16_t);
BGL_EXPORTED_DECL long BGl_bitzd2orelongzd2zz__bitz00(long, long);
BGL_EXPORTED_DECL uint8_t BGl_bitzd2notu8zd2zz__bitz00(uint8_t);
static obj_t BGl_z62bitzd2rshu8zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2urshs16zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL uint64_t BGl_bitzd2lshu64zd2zz__bitz00(uint64_t, long);
BGL_EXPORTED_DECL long BGl_bitzd2notelongzd2zz__bitz00(long);
static obj_t BGl_z62bitzd2xoru8zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2rshu64zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2notu64zb0zz__bitz00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_bitzd2orzd2zz__bitz00(long, long);
BGL_EXPORTED_DECL unsigned long BGl_bitzd2urshzd2zz__bitz00(unsigned long, long);
static obj_t BGl_z62bitzd2ors16zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL unsigned BGL_LONGLONG_T BGl_bitzd2urshllongzd2zz__bitz00(unsigned BGL_LONGLONG_T, long);
BGL_EXPORTED_DECL uint64_t BGl_bitzd2urshu64zd2zz__bitz00(uint64_t, long);
BGL_EXPORTED_DECL long BGl_bitzd2lshzd2zz__bitz00(long, long);
static obj_t BGl_z62bitzd2lshzb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int32_t BGl_bitzd2ands32zd2zz__bitz00(int32_t, int32_t);
BGL_EXPORTED_DECL long BGl_bitzd2notzd2zz__bitz00(long);
BGL_EXPORTED_DECL uint8_t BGl_bitzd2urshu8zd2zz__bitz00(uint8_t, long);
BGL_EXPORTED_DECL int16_t BGl_bitzd2xors16zd2zz__bitz00(int16_t, int16_t);
static obj_t BGl_z62bitzd2urshs8zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2ands16zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2notzb0zz__bitz00(obj_t, obj_t);
BGL_EXPORTED_DECL int8_t BGl_bitzd2rshs8zd2zz__bitz00(int8_t, long);
static obj_t BGl_z62bitzd2urshs32zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int8_t BGl_bitzd2xors8zd2zz__bitz00(int8_t, int8_t);
static obj_t BGl_z62bitzd2ands8zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2lshu64zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2rshllongzb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2ors32zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL uint16_t BGl_bitzd2andu16zd2zz__bitz00(uint16_t, uint16_t);
static obj_t BGl_z62bitzd2ors8zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int32_t BGl_bitzd2xors32zd2zz__bitz00(int32_t, int32_t);
static obj_t BGl_z62bitzd2ands32zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2urshu8zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL uint8_t BGl_bitzd2rshu8zd2zz__bitz00(uint8_t, long);
static obj_t BGl_z62bitzd2xors16zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2orllongzb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL uint8_t BGl_bitzd2xoru8zd2zz__bitz00(uint8_t, uint8_t);
static obj_t BGl_z62bitzd2urshu16zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62bitzd2andu8zb0zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_bitzd2rshllongzd2zz__bitz00(BGL_LONGLONG_T, long);
BGL_EXPORTED_DECL int64_t BGl_bitzd2ands64zd2zz__bitz00(int64_t, int64_t);
BGL_EXPORTED_DECL unsigned long BGl_bitzd2urshelongzd2zz__bitz00(unsigned long, long);
BGL_EXPORTED_DECL int16_t BGl_bitzd2ors16zd2zz__bitz00(int16_t, int16_t);
static obj_t BGl_z62bitzd2oru16zb0zz__bitz00(obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_STRING( BGl_string1789z00zz__bitz00, BgL_bgl_string1789za700za7za7_1811za7, "&bit-urshelong", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2andllongzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2andllon1812z00, BGl_z62bitzd2andllongzb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2oru32zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2oru32za7b1813za7, BGl_z62bitzd2oru32zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1790z00zz__bitz00, BgL_bgl_string1790za700za7za7_1814za7, "&bit-urshllong", 14 );
DEFINE_STRING( BGl_string1791z00zz__bitz00, BgL_bgl_string1791za700za7za7_1815za7, "&bit-urshu8", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2lshu16zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2lshu16za71816za7, BGl_z62bitzd2lshu16zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1792z00zz__bitz00, BgL_bgl_string1792za700za7za7_1817za7, "&bit-urshs8", 11 );
DEFINE_STRING( BGl_string1793z00zz__bitz00, BgL_bgl_string1793za700za7za7_1818za7, "&bit-urshs16", 12 );
DEFINE_STRING( BGl_string1794z00zz__bitz00, BgL_bgl_string1794za700za7za7_1819za7, "&bit-urshu16", 12 );
DEFINE_STRING( BGl_string1795z00zz__bitz00, BgL_bgl_string1795za700za7za7_1820za7, "&bit-urshs32", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2rshu32zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2rshu32za71821za7, BGl_z62bitzd2rshu32zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1796z00zz__bitz00, BgL_bgl_string1796za700za7za7_1822za7, "&bit-urshu32", 12 );
DEFINE_STRING( BGl_string1797z00zz__bitz00, BgL_bgl_string1797za700za7za7_1823za7, "&bit-urshs64", 12 );
DEFINE_STRING( BGl_string1798z00zz__bitz00, BgL_bgl_string1798za700za7za7_1824za7, "&bit-urshu64", 12 );
DEFINE_STRING( BGl_string1799z00zz__bitz00, BgL_bgl_string1799za700za7za7_1825za7, "&bit-lsh", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2notu32zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2notu32za71826za7, BGl_z62bitzd2notu32zb0zz__bitz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2oru8zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2oru8za7b01827za7, BGl_z62bitzd2oru8zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2xors32zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2xors32za71828za7, BGl_z62bitzd2xors32zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2orelongzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2orelong1829z00, BGl_z62bitzd2orelongzb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2urshs16zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2urshs161830z00, BGl_z62bitzd2urshs16zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2notu8zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2notu8za7b1831za7, BGl_z62bitzd2notu8zb0zz__bitz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2andu8zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2andu8za7b1832za7, BGl_z62bitzd2andu8zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2lshu64zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2lshu64za71833za7, BGl_z62bitzd2lshu64zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2notelongzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2notelon1834z00, BGl_z62bitzd2notelongzb0zz__bitz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2rshllongzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2rshllon1835z00, BGl_z62bitzd2rshllongzb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2urshs64zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2urshs641836z00, BGl_z62bitzd2urshs64zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2urshzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2urshza7b01837za7, BGl_z62bitzd2urshzb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2urshllongzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2urshllo1838z00, BGl_z62bitzd2urshllongzb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2andu32zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2andu32za71839za7, BGl_z62bitzd2andu32zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2xoru16zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2xoru16za71840za7, BGl_z62bitzd2xoru16zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2xorzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2xorza7b0za71841z00, BGl_z62bitzd2xorzb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2xoru64zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2xoru64za71842za7, BGl_z62bitzd2xoru64zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2ors32zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2ors32za7b1843za7, BGl_z62bitzd2ors32zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2lshs16zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2lshs16za71844za7, BGl_z62bitzd2lshs16zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2rshs32zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2rshs32za71845za7, BGl_z62bitzd2rshs32zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2nots32zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2nots32za71846za7, BGl_z62bitzd2nots32zb0zz__bitz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2lshu8zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2lshu8za7b1847za7, BGl_z62bitzd2lshu8zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2rshu8zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2rshu8za7b1848za7, BGl_z62bitzd2rshu8zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2lshs64zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2lshs64za71849za7, BGl_z62bitzd2lshs64zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2xoru8zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2xoru8za7b1850za7, BGl_z62bitzd2xoru8zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2xorllongzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2xorllon1851z00, BGl_z62bitzd2xorllongzb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2oru16zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2oru16za7b1852za7, BGl_z62bitzd2oru16zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2lshzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2lshza7b0za71853z00, BGl_z62bitzd2lshzb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2rshu16zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2rshu16za71854za7, BGl_z62bitzd2rshu16zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2ors8zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2ors8za7b01855za7, BGl_z62bitzd2ors8zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2ands32zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2ands32za71856za7, BGl_z62bitzd2ands32zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2notu16zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2notu16za71857za7, BGl_z62bitzd2notu16zb0zz__bitz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2urshu8zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2urshu8za71858za7, BGl_z62bitzd2urshu8zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2xors16zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2xors16za71859za7, BGl_z62bitzd2xors16zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2nots8zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2nots8za7b1860za7, BGl_z62bitzd2nots8zb0zz__bitz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2urshu32zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2urshu321861z00, BGl_z62bitzd2urshu32zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2ands8zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2ands8za7b1862za7, BGl_z62bitzd2ands8zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2lshelongzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2lshelon1863z00, BGl_z62bitzd2lshelongzb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2oru64zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2oru64za7b1864za7, BGl_z62bitzd2oru64zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2andelongzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2andelon1865z00, BGl_z62bitzd2andelongzb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2rshu64zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2rshu64za71866za7, BGl_z62bitzd2rshu64zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2notu64zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2notu64za71867za7, BGl_z62bitzd2notu64zb0zz__bitz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2xors64zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2xors64za71868za7, BGl_z62bitzd2xors64zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2andu16zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2andu16za71869za7, BGl_z62bitzd2andu16zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1800z00zz__bitz00, BgL_bgl_string1800za700za7za7_1870za7, "&bit-lshelong", 13 );
DEFINE_STRING( BGl_string1801z00zz__bitz00, BgL_bgl_string1801za700za7za7_1871za7, "&bit-lshllong", 13 );
DEFINE_STRING( BGl_string1802z00zz__bitz00, BgL_bgl_string1802za700za7za7_1872za7, "&bit-lshs8", 10 );
DEFINE_STRING( BGl_string1721z00zz__bitz00, BgL_bgl_string1721za700za7za7_1873za7, "/tmp/4.4a/runtime/Llib/bit.scm", 30 );
DEFINE_STRING( BGl_string1803z00zz__bitz00, BgL_bgl_string1803za700za7za7_1874za7, "&bit-lshu8", 10 );
DEFINE_STRING( BGl_string1722z00zz__bitz00, BgL_bgl_string1722za700za7za7_1875za7, "&bit-or", 7 );
DEFINE_STRING( BGl_string1804z00zz__bitz00, BgL_bgl_string1804za700za7za7_1876za7, "&bit-lshs16", 11 );
DEFINE_STRING( BGl_string1723z00zz__bitz00, BgL_bgl_string1723za700za7za7_1877za7, "bint", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2orllongzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2orllong1878z00, BGl_z62bitzd2orllongzb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1805z00zz__bitz00, BgL_bgl_string1805za700za7za7_1879za7, "&bit-lshu16", 11 );
DEFINE_STRING( BGl_string1724z00zz__bitz00, BgL_bgl_string1724za700za7za7_1880za7, "&bit-orelong", 12 );
DEFINE_STRING( BGl_string1806z00zz__bitz00, BgL_bgl_string1806za700za7za7_1881za7, "&bit-lshs32", 11 );
DEFINE_STRING( BGl_string1725z00zz__bitz00, BgL_bgl_string1725za700za7za7_1882za7, "belong", 6 );
DEFINE_STRING( BGl_string1807z00zz__bitz00, BgL_bgl_string1807za700za7za7_1883za7, "&bit-lshu32", 11 );
DEFINE_STRING( BGl_string1726z00zz__bitz00, BgL_bgl_string1726za700za7za7_1884za7, "&bit-orllong", 12 );
DEFINE_STRING( BGl_string1808z00zz__bitz00, BgL_bgl_string1808za700za7za7_1885za7, "&bit-lshs64", 11 );
DEFINE_STRING( BGl_string1727z00zz__bitz00, BgL_bgl_string1727za700za7za7_1886za7, "bllong", 6 );
DEFINE_STRING( BGl_string1809z00zz__bitz00, BgL_bgl_string1809za700za7za7_1887za7, "&bit-lshu64", 11 );
DEFINE_STRING( BGl_string1728z00zz__bitz00, BgL_bgl_string1728za700za7za7_1888za7, "&bit-ors8", 9 );
DEFINE_STRING( BGl_string1729z00zz__bitz00, BgL_bgl_string1729za700za7za7_1889za7, "bint8", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2rshelongzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2rshelon1890z00, BGl_z62bitzd2rshelongzb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2notllongzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2notllon1891z00, BGl_z62bitzd2notllongzb0zz__bitz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2andu64zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2andu64za71892za7, BGl_z62bitzd2andu64zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2urshelongzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2urshelo1893z00, BGl_z62bitzd2urshelongzb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2ors16zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2ors16za7b1894za7, BGl_z62bitzd2ors16zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1810z00zz__bitz00, BgL_bgl_string1810za700za7za7_1895za7, "__bit", 5 );
DEFINE_STRING( BGl_string1730z00zz__bitz00, BgL_bgl_string1730za700za7za7_1896za7, "&bit-oru8", 9 );
DEFINE_STRING( BGl_string1731z00zz__bitz00, BgL_bgl_string1731za700za7za7_1897za7, "buint8", 6 );
DEFINE_STRING( BGl_string1732z00zz__bitz00, BgL_bgl_string1732za700za7za7_1898za7, "&bit-ors16", 10 );
DEFINE_STRING( BGl_string1733z00zz__bitz00, BgL_bgl_string1733za700za7za7_1899za7, "bint16", 6 );
DEFINE_STRING( BGl_string1734z00zz__bitz00, BgL_bgl_string1734za700za7za7_1900za7, "&bit-oru16", 10 );
DEFINE_STRING( BGl_string1735z00zz__bitz00, BgL_bgl_string1735za700za7za7_1901za7, "buint16", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2lshu32zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2lshu32za71902za7, BGl_z62bitzd2lshu32zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1736z00zz__bitz00, BgL_bgl_string1736za700za7za7_1903za7, "&bit-ors32", 10 );
DEFINE_STRING( BGl_string1737z00zz__bitz00, BgL_bgl_string1737za700za7za7_1904za7, "bint32", 6 );
DEFINE_STRING( BGl_string1738z00zz__bitz00, BgL_bgl_string1738za700za7za7_1905za7, "&bit-oru32", 10 );
DEFINE_STRING( BGl_string1739z00zz__bitz00, BgL_bgl_string1739za700za7za7_1906za7, "buint32", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2rshs16zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2rshs16za71907za7, BGl_z62bitzd2rshs16zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2rshzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2rshza7b0za71908z00, BGl_z62bitzd2rshzb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2nots16zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2nots16za71909za7, BGl_z62bitzd2nots16zb0zz__bitz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2andzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2andza7b0za71910z00, BGl_z62bitzd2andzb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2lshs8zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2lshs8za7b1911za7, BGl_z62bitzd2lshs8zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2rshs8zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2rshs8za7b1912za7, BGl_z62bitzd2rshs8zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2urshs32zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2urshs321913z00, BGl_z62bitzd2urshs32zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1740z00zz__bitz00, BgL_bgl_string1740za700za7za7_1914za7, "&bit-ors64", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2ors64zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2ors64za7b1915za7, BGl_z62bitzd2ors64zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1741z00zz__bitz00, BgL_bgl_string1741za700za7za7_1916za7, "bint64", 6 );
DEFINE_STRING( BGl_string1742z00zz__bitz00, BgL_bgl_string1742za700za7za7_1917za7, "&bit-oru64", 10 );
DEFINE_STRING( BGl_string1743z00zz__bitz00, BgL_bgl_string1743za700za7za7_1918za7, "buint64", 7 );
DEFINE_STRING( BGl_string1744z00zz__bitz00, BgL_bgl_string1744za700za7za7_1919za7, "&bit-and", 8 );
DEFINE_STRING( BGl_string1745z00zz__bitz00, BgL_bgl_string1745za700za7za7_1920za7, "&bit-andelong", 13 );
DEFINE_STRING( BGl_string1746z00zz__bitz00, BgL_bgl_string1746za700za7za7_1921za7, "&bit-andllong", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2xors8zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2xors8za7b1922za7, BGl_z62bitzd2xors8zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1747z00zz__bitz00, BgL_bgl_string1747za700za7za7_1923za7, "&bit-ands8", 10 );
DEFINE_STRING( BGl_string1748z00zz__bitz00, BgL_bgl_string1748za700za7za7_1924za7, "&bit-andu8", 10 );
DEFINE_STRING( BGl_string1749z00zz__bitz00, BgL_bgl_string1749za700za7za7_1925za7, "&bit-ands16", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2rshs64zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2rshs64za71926za7, BGl_z62bitzd2rshs64zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2nots64zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2nots64za71927za7, BGl_z62bitzd2nots64zb0zz__bitz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1750z00zz__bitz00, BgL_bgl_string1750za700za7za7_1928za7, "&bit-andu16", 11 );
DEFINE_STRING( BGl_string1751z00zz__bitz00, BgL_bgl_string1751za700za7za7_1929za7, "&bit-ands32", 11 );
DEFINE_STRING( BGl_string1752z00zz__bitz00, BgL_bgl_string1752za700za7za7_1930za7, "&bit-andu32", 11 );
DEFINE_STRING( BGl_string1753z00zz__bitz00, BgL_bgl_string1753za700za7za7_1931za7, "&bit-ands64", 11 );
DEFINE_STRING( BGl_string1754z00zz__bitz00, BgL_bgl_string1754za700za7za7_1932za7, "&bit-andu64", 11 );
DEFINE_STRING( BGl_string1755z00zz__bitz00, BgL_bgl_string1755za700za7za7_1933za7, "&bit-xor", 8 );
DEFINE_STRING( BGl_string1756z00zz__bitz00, BgL_bgl_string1756za700za7za7_1934za7, "&bit-xorelong", 13 );
DEFINE_STRING( BGl_string1757z00zz__bitz00, BgL_bgl_string1757za700za7za7_1935za7, "&bit-xorllong", 13 );
DEFINE_STRING( BGl_string1758z00zz__bitz00, BgL_bgl_string1758za700za7za7_1936za7, "&bit-xors8", 10 );
DEFINE_STRING( BGl_string1759z00zz__bitz00, BgL_bgl_string1759za700za7za7_1937za7, "&bit-xoru8", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2urshs8zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2urshs8za71938za7, BGl_z62bitzd2urshs8zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2ands16zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2ands16za71939za7, BGl_z62bitzd2ands16zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2xoru32zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2xoru32za71940za7, BGl_z62bitzd2xoru32zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1760z00zz__bitz00, BgL_bgl_string1760za700za7za7_1941za7, "&bit-xors16", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2urshu16zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2urshu161942z00, BGl_z62bitzd2urshu16zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1761z00zz__bitz00, BgL_bgl_string1761za700za7za7_1943za7, "&bit-xoru16", 11 );
DEFINE_STRING( BGl_string1762z00zz__bitz00, BgL_bgl_string1762za700za7za7_1944za7, "&bit-xors32", 11 );
DEFINE_STRING( BGl_string1763z00zz__bitz00, BgL_bgl_string1763za700za7za7_1945za7, "&bit-xoru32", 11 );
DEFINE_STRING( BGl_string1764z00zz__bitz00, BgL_bgl_string1764za700za7za7_1946za7, "&bit-xors64", 11 );
DEFINE_STRING( BGl_string1765z00zz__bitz00, BgL_bgl_string1765za700za7za7_1947za7, "&bit-xoru64", 11 );
DEFINE_STRING( BGl_string1766z00zz__bitz00, BgL_bgl_string1766za700za7za7_1948za7, "&bit-not", 8 );
DEFINE_STRING( BGl_string1767z00zz__bitz00, BgL_bgl_string1767za700za7za7_1949za7, "&bit-notelong", 13 );
DEFINE_STRING( BGl_string1768z00zz__bitz00, BgL_bgl_string1768za700za7za7_1950za7, "&bit-notllong", 13 );
DEFINE_STRING( BGl_string1769z00zz__bitz00, BgL_bgl_string1769za700za7za7_1951za7, "&bit-nots8", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2xorelongzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2xorelon1952z00, BGl_z62bitzd2xorelongzb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2ands64zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2ands64za71953za7, BGl_z62bitzd2ands64zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2orzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2orza7b0za7za71954za7, BGl_z62bitzd2orzb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2lshs32zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2lshs32za71955za7, BGl_z62bitzd2lshs32zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1770z00zz__bitz00, BgL_bgl_string1770za700za7za7_1956za7, "&bit-notu8", 10 );
DEFINE_STRING( BGl_string1771z00zz__bitz00, BgL_bgl_string1771za700za7za7_1957za7, "&bit-nots16", 11 );
DEFINE_STRING( BGl_string1772z00zz__bitz00, BgL_bgl_string1772za700za7za7_1958za7, "&bit-notu16", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2urshu64zd2envz00zz__bitz00, BgL_bgl_za762bitza7d2urshu641959z00, BGl_z62bitzd2urshu64zb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1773z00zz__bitz00, BgL_bgl_string1773za700za7za7_1960za7, "&bit-nots32", 11 );
DEFINE_STRING( BGl_string1774z00zz__bitz00, BgL_bgl_string1774za700za7za7_1961za7, "&bit-notu32", 11 );
DEFINE_STRING( BGl_string1775z00zz__bitz00, BgL_bgl_string1775za700za7za7_1962za7, "&bit-nots64", 11 );
DEFINE_STRING( BGl_string1776z00zz__bitz00, BgL_bgl_string1776za700za7za7_1963za7, "&bit-notu64", 11 );
DEFINE_STRING( BGl_string1777z00zz__bitz00, BgL_bgl_string1777za700za7za7_1964za7, "&bit-rsh", 8 );
DEFINE_STRING( BGl_string1778z00zz__bitz00, BgL_bgl_string1778za700za7za7_1965za7, "&bit-rshelong", 13 );
DEFINE_STRING( BGl_string1779z00zz__bitz00, BgL_bgl_string1779za700za7za7_1966za7, "&bit-rshllong", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2notzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2notza7b0za71967z00, BGl_z62bitzd2notzb0zz__bitz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1780z00zz__bitz00, BgL_bgl_string1780za700za7za7_1968za7, "&bit-rshs8", 10 );
DEFINE_STRING( BGl_string1781z00zz__bitz00, BgL_bgl_string1781za700za7za7_1969za7, "&bit-rshu8", 10 );
DEFINE_STRING( BGl_string1782z00zz__bitz00, BgL_bgl_string1782za700za7za7_1970za7, "&bit-rshs16", 11 );
DEFINE_STRING( BGl_string1783z00zz__bitz00, BgL_bgl_string1783za700za7za7_1971za7, "&bit-rshu16", 11 );
DEFINE_STRING( BGl_string1784z00zz__bitz00, BgL_bgl_string1784za700za7za7_1972za7, "&bit-rshs32", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2lshllongzd2envz00zz__bitz00, BgL_bgl_za762bitza7d2lshllon1973z00, BGl_z62bitzd2lshllongzb0zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1785z00zz__bitz00, BgL_bgl_string1785za700za7za7_1974za7, "&bit-rshu32", 11 );
DEFINE_STRING( BGl_string1786z00zz__bitz00, BgL_bgl_string1786za700za7za7_1975za7, "&bit-rshs64", 11 );
DEFINE_STRING( BGl_string1787z00zz__bitz00, BgL_bgl_string1787za700za7za7_1976za7, "&bit-rshu64", 11 );
DEFINE_STRING( BGl_string1788z00zz__bitz00, BgL_bgl_string1788za700za7za7_1977za7, "&bit-ursh", 9 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__bitz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long BgL_checksumz00_1700, char * BgL_fromz00_1701)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__bitz00))
{ 
BGl_requirezd2initializa7ationz75zz__bitz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__bitz00(); 
return 
BGl_importedzd2moduleszd2initz00zz__bitz00();}  else 
{ 
return BUNSPEC;} } 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__bitz00()
{
{ /* Llib/bit.scm 14 */
return 
bgl_gc_roots_register();} 

}



/* bit-or */
BGL_EXPORTED_DEF long BGl_bitzd2orzd2zz__bitz00(long BgL_xz00_3, long BgL_yz00_4)
{
{ /* Llib/bit.scm 529 */
return 
(BgL_xz00_3 | BgL_yz00_4);} 

}



/* &bit-or */
obj_t BGl_z62bitzd2orzb0zz__bitz00(obj_t BgL_envz00_1194, obj_t BgL_xz00_1195, obj_t BgL_yz00_1196)
{
{ /* Llib/bit.scm 529 */
{ /* Llib/bit.scm 529 */
long BgL_tmpz00_1709;
{ /* Llib/bit.scm 529 */
long BgL_auxz00_1719;long BgL_auxz00_1710;
{ /* Llib/bit.scm 529 */
obj_t BgL_tmpz00_1720;
if(
INTEGERP(BgL_yz00_1196))
{ /* Llib/bit.scm 529 */
BgL_tmpz00_1720 = BgL_yz00_1196
; }  else 
{ 
obj_t BgL_auxz00_1723;
BgL_auxz00_1723 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)24555)), BGl_string1722z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1196); 
FAILURE(BgL_auxz00_1723,BFALSE,BFALSE);} 
BgL_auxz00_1719 = 
(long)CINT(BgL_tmpz00_1720); } 
{ /* Llib/bit.scm 529 */
obj_t BgL_tmpz00_1711;
if(
INTEGERP(BgL_xz00_1195))
{ /* Llib/bit.scm 529 */
BgL_tmpz00_1711 = BgL_xz00_1195
; }  else 
{ 
obj_t BgL_auxz00_1714;
BgL_auxz00_1714 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)24555)), BGl_string1722z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_xz00_1195); 
FAILURE(BgL_auxz00_1714,BFALSE,BFALSE);} 
BgL_auxz00_1710 = 
(long)CINT(BgL_tmpz00_1711); } 
BgL_tmpz00_1709 = 
BGl_bitzd2orzd2zz__bitz00(BgL_auxz00_1710, BgL_auxz00_1719); } 
return 
BINT(BgL_tmpz00_1709);} } 

}



/* bit-orelong */
BGL_EXPORTED_DEF long BGl_bitzd2orelongzd2zz__bitz00(long BgL_xz00_5, long BgL_yz00_6)
{
{ /* Llib/bit.scm 530 */
return 
(BgL_xz00_5 | BgL_yz00_6);} 

}



/* &bit-orelong */
obj_t BGl_z62bitzd2orelongzb0zz__bitz00(obj_t BgL_envz00_1197, obj_t BgL_xz00_1198, obj_t BgL_yz00_1199)
{
{ /* Llib/bit.scm 530 */
{ /* Llib/bit.scm 530 */
long BgL_tmpz00_1731;
{ /* Llib/bit.scm 530 */
long BgL_auxz00_1741;long BgL_auxz00_1732;
{ /* Llib/bit.scm 530 */
obj_t BgL_tmpz00_1742;
if(
ELONGP(BgL_yz00_1199))
{ /* Llib/bit.scm 530 */
BgL_tmpz00_1742 = BgL_yz00_1199
; }  else 
{ 
obj_t BgL_auxz00_1745;
BgL_auxz00_1745 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)24603)), BGl_string1724z00zz__bitz00, BGl_string1725z00zz__bitz00, BgL_yz00_1199); 
FAILURE(BgL_auxz00_1745,BFALSE,BFALSE);} 
BgL_auxz00_1741 = 
BELONG_TO_LONG(BgL_tmpz00_1742); } 
{ /* Llib/bit.scm 530 */
obj_t BgL_tmpz00_1733;
if(
ELONGP(BgL_xz00_1198))
{ /* Llib/bit.scm 530 */
BgL_tmpz00_1733 = BgL_xz00_1198
; }  else 
{ 
obj_t BgL_auxz00_1736;
BgL_auxz00_1736 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)24603)), BGl_string1724z00zz__bitz00, BGl_string1725z00zz__bitz00, BgL_xz00_1198); 
FAILURE(BgL_auxz00_1736,BFALSE,BFALSE);} 
BgL_auxz00_1732 = 
BELONG_TO_LONG(BgL_tmpz00_1733); } 
BgL_tmpz00_1731 = 
BGl_bitzd2orelongzd2zz__bitz00(BgL_auxz00_1732, BgL_auxz00_1741); } 
return 
make_belong(BgL_tmpz00_1731);} } 

}



/* bit-orllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2orllongzd2zz__bitz00(BGL_LONGLONG_T BgL_xz00_7, BGL_LONGLONG_T BgL_yz00_8)
{
{ /* Llib/bit.scm 531 */
return 
(BgL_xz00_7 | BgL_yz00_8);} 

}



/* &bit-orllong */
obj_t BGl_z62bitzd2orllongzb0zz__bitz00(obj_t BgL_envz00_1200, obj_t BgL_xz00_1201, obj_t BgL_yz00_1202)
{
{ /* Llib/bit.scm 531 */
{ /* Llib/bit.scm 531 */
BGL_LONGLONG_T BgL_tmpz00_1753;
{ /* Llib/bit.scm 531 */
BGL_LONGLONG_T BgL_auxz00_1763;BGL_LONGLONG_T BgL_auxz00_1754;
{ /* Llib/bit.scm 531 */
obj_t BgL_tmpz00_1764;
if(
LLONGP(BgL_yz00_1202))
{ /* Llib/bit.scm 531 */
BgL_tmpz00_1764 = BgL_yz00_1202
; }  else 
{ 
obj_t BgL_auxz00_1767;
BgL_auxz00_1767 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)24656)), BGl_string1726z00zz__bitz00, BGl_string1727z00zz__bitz00, BgL_yz00_1202); 
FAILURE(BgL_auxz00_1767,BFALSE,BFALSE);} 
BgL_auxz00_1763 = 
BLLONG_TO_LLONG(BgL_tmpz00_1764); } 
{ /* Llib/bit.scm 531 */
obj_t BgL_tmpz00_1755;
if(
LLONGP(BgL_xz00_1201))
{ /* Llib/bit.scm 531 */
BgL_tmpz00_1755 = BgL_xz00_1201
; }  else 
{ 
obj_t BgL_auxz00_1758;
BgL_auxz00_1758 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)24656)), BGl_string1726z00zz__bitz00, BGl_string1727z00zz__bitz00, BgL_xz00_1201); 
FAILURE(BgL_auxz00_1758,BFALSE,BFALSE);} 
BgL_auxz00_1754 = 
BLLONG_TO_LLONG(BgL_tmpz00_1755); } 
BgL_tmpz00_1753 = 
BGl_bitzd2orllongzd2zz__bitz00(BgL_auxz00_1754, BgL_auxz00_1763); } 
return 
make_bllong(BgL_tmpz00_1753);} } 

}



/* bit-ors8 */
BGL_EXPORTED_DEF int8_t BGl_bitzd2ors8zd2zz__bitz00(int8_t BgL_xz00_9, int8_t BgL_yz00_10)
{
{ /* Llib/bit.scm 532 */
return 
(BgL_xz00_9 | BgL_yz00_10);} 

}



/* &bit-ors8 */
obj_t BGl_z62bitzd2ors8zb0zz__bitz00(obj_t BgL_envz00_1203, obj_t BgL_xz00_1204, obj_t BgL_yz00_1205)
{
{ /* Llib/bit.scm 532 */
{ /* Llib/bit.scm 532 */
int8_t BgL_tmpz00_1775;
{ /* Llib/bit.scm 532 */
int8_t BgL_auxz00_1785;int8_t BgL_auxz00_1776;
{ /* Llib/bit.scm 532 */
obj_t BgL_tmpz00_1786;
if(
BGL_INT8P(BgL_yz00_1205))
{ /* Llib/bit.scm 532 */
BgL_tmpz00_1786 = BgL_yz00_1205
; }  else 
{ 
obj_t BgL_auxz00_1789;
BgL_auxz00_1789 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)24706)), BGl_string1728z00zz__bitz00, BGl_string1729z00zz__bitz00, BgL_yz00_1205); 
FAILURE(BgL_auxz00_1789,BFALSE,BFALSE);} 
BgL_auxz00_1785 = 
BGL_BINT8_TO_INT8(BgL_tmpz00_1786); } 
{ /* Llib/bit.scm 532 */
obj_t BgL_tmpz00_1777;
if(
BGL_INT8P(BgL_xz00_1204))
{ /* Llib/bit.scm 532 */
BgL_tmpz00_1777 = BgL_xz00_1204
; }  else 
{ 
obj_t BgL_auxz00_1780;
BgL_auxz00_1780 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)24706)), BGl_string1728z00zz__bitz00, BGl_string1729z00zz__bitz00, BgL_xz00_1204); 
FAILURE(BgL_auxz00_1780,BFALSE,BFALSE);} 
BgL_auxz00_1776 = 
BGL_BINT8_TO_INT8(BgL_tmpz00_1777); } 
BgL_tmpz00_1775 = 
BGl_bitzd2ors8zd2zz__bitz00(BgL_auxz00_1776, BgL_auxz00_1785); } 
return 
BGL_INT8_TO_BINT8(BgL_tmpz00_1775);} } 

}



/* bit-oru8 */
BGL_EXPORTED_DEF uint8_t BGl_bitzd2oru8zd2zz__bitz00(uint8_t BgL_xz00_11, uint8_t BgL_yz00_12)
{
{ /* Llib/bit.scm 533 */
return 
(BgL_xz00_11 | BgL_yz00_12);} 

}



/* &bit-oru8 */
obj_t BGl_z62bitzd2oru8zb0zz__bitz00(obj_t BgL_envz00_1206, obj_t BgL_xz00_1207, obj_t BgL_yz00_1208)
{
{ /* Llib/bit.scm 533 */
{ /* Llib/bit.scm 533 */
uint8_t BgL_tmpz00_1797;
{ /* Llib/bit.scm 533 */
uint8_t BgL_auxz00_1807;uint8_t BgL_auxz00_1798;
{ /* Llib/bit.scm 533 */
obj_t BgL_tmpz00_1808;
if(
BGL_UINT8P(BgL_yz00_1208))
{ /* Llib/bit.scm 533 */
BgL_tmpz00_1808 = BgL_yz00_1208
; }  else 
{ 
obj_t BgL_auxz00_1811;
BgL_auxz00_1811 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)24752)), BGl_string1730z00zz__bitz00, BGl_string1731z00zz__bitz00, BgL_yz00_1208); 
FAILURE(BgL_auxz00_1811,BFALSE,BFALSE);} 
BgL_auxz00_1807 = 
BGL_BUINT8_TO_UINT8(BgL_tmpz00_1808); } 
{ /* Llib/bit.scm 533 */
obj_t BgL_tmpz00_1799;
if(
BGL_UINT8P(BgL_xz00_1207))
{ /* Llib/bit.scm 533 */
BgL_tmpz00_1799 = BgL_xz00_1207
; }  else 
{ 
obj_t BgL_auxz00_1802;
BgL_auxz00_1802 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)24752)), BGl_string1730z00zz__bitz00, BGl_string1731z00zz__bitz00, BgL_xz00_1207); 
FAILURE(BgL_auxz00_1802,BFALSE,BFALSE);} 
BgL_auxz00_1798 = 
BGL_BUINT8_TO_UINT8(BgL_tmpz00_1799); } 
BgL_tmpz00_1797 = 
BGl_bitzd2oru8zd2zz__bitz00(BgL_auxz00_1798, BgL_auxz00_1807); } 
return 
BGL_UINT8_TO_BUINT8(BgL_tmpz00_1797);} } 

}



/* bit-ors16 */
BGL_EXPORTED_DEF int16_t BGl_bitzd2ors16zd2zz__bitz00(int16_t BgL_xz00_13, int16_t BgL_yz00_14)
{
{ /* Llib/bit.scm 534 */
return 
(BgL_xz00_13 | BgL_yz00_14);} 

}



/* &bit-ors16 */
obj_t BGl_z62bitzd2ors16zb0zz__bitz00(obj_t BgL_envz00_1209, obj_t BgL_xz00_1210, obj_t BgL_yz00_1211)
{
{ /* Llib/bit.scm 534 */
{ /* Llib/bit.scm 534 */
int16_t BgL_tmpz00_1819;
{ /* Llib/bit.scm 534 */
int16_t BgL_auxz00_1829;int16_t BgL_auxz00_1820;
{ /* Llib/bit.scm 534 */
obj_t BgL_tmpz00_1830;
if(
BGL_INT16P(BgL_yz00_1211))
{ /* Llib/bit.scm 534 */
BgL_tmpz00_1830 = BgL_yz00_1211
; }  else 
{ 
obj_t BgL_auxz00_1833;
BgL_auxz00_1833 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)24799)), BGl_string1732z00zz__bitz00, BGl_string1733z00zz__bitz00, BgL_yz00_1211); 
FAILURE(BgL_auxz00_1833,BFALSE,BFALSE);} 
BgL_auxz00_1829 = 
BGL_BINT16_TO_INT16(BgL_tmpz00_1830); } 
{ /* Llib/bit.scm 534 */
obj_t BgL_tmpz00_1821;
if(
BGL_INT16P(BgL_xz00_1210))
{ /* Llib/bit.scm 534 */
BgL_tmpz00_1821 = BgL_xz00_1210
; }  else 
{ 
obj_t BgL_auxz00_1824;
BgL_auxz00_1824 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)24799)), BGl_string1732z00zz__bitz00, BGl_string1733z00zz__bitz00, BgL_xz00_1210); 
FAILURE(BgL_auxz00_1824,BFALSE,BFALSE);} 
BgL_auxz00_1820 = 
BGL_BINT16_TO_INT16(BgL_tmpz00_1821); } 
BgL_tmpz00_1819 = 
BGl_bitzd2ors16zd2zz__bitz00(BgL_auxz00_1820, BgL_auxz00_1829); } 
return 
BGL_INT16_TO_BINT16(BgL_tmpz00_1819);} } 

}



/* bit-oru16 */
BGL_EXPORTED_DEF uint16_t BGl_bitzd2oru16zd2zz__bitz00(uint16_t BgL_xz00_15, uint16_t BgL_yz00_16)
{
{ /* Llib/bit.scm 535 */
return 
(BgL_xz00_15 | BgL_yz00_16);} 

}



/* &bit-oru16 */
obj_t BGl_z62bitzd2oru16zb0zz__bitz00(obj_t BgL_envz00_1212, obj_t BgL_xz00_1213, obj_t BgL_yz00_1214)
{
{ /* Llib/bit.scm 535 */
{ /* Llib/bit.scm 535 */
uint16_t BgL_tmpz00_1841;
{ /* Llib/bit.scm 535 */
uint16_t BgL_auxz00_1851;uint16_t BgL_auxz00_1842;
{ /* Llib/bit.scm 535 */
obj_t BgL_tmpz00_1852;
if(
BGL_UINT16P(BgL_yz00_1214))
{ /* Llib/bit.scm 535 */
BgL_tmpz00_1852 = BgL_yz00_1214
; }  else 
{ 
obj_t BgL_auxz00_1855;
BgL_auxz00_1855 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)24847)), BGl_string1734z00zz__bitz00, BGl_string1735z00zz__bitz00, BgL_yz00_1214); 
FAILURE(BgL_auxz00_1855,BFALSE,BFALSE);} 
BgL_auxz00_1851 = 
BGL_BUINT16_TO_UINT16(BgL_tmpz00_1852); } 
{ /* Llib/bit.scm 535 */
obj_t BgL_tmpz00_1843;
if(
BGL_UINT16P(BgL_xz00_1213))
{ /* Llib/bit.scm 535 */
BgL_tmpz00_1843 = BgL_xz00_1213
; }  else 
{ 
obj_t BgL_auxz00_1846;
BgL_auxz00_1846 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)24847)), BGl_string1734z00zz__bitz00, BGl_string1735z00zz__bitz00, BgL_xz00_1213); 
FAILURE(BgL_auxz00_1846,BFALSE,BFALSE);} 
BgL_auxz00_1842 = 
BGL_BUINT16_TO_UINT16(BgL_tmpz00_1843); } 
BgL_tmpz00_1841 = 
BGl_bitzd2oru16zd2zz__bitz00(BgL_auxz00_1842, BgL_auxz00_1851); } 
return 
BGL_UINT16_TO_BUINT16(BgL_tmpz00_1841);} } 

}



/* bit-ors32 */
BGL_EXPORTED_DEF int32_t BGl_bitzd2ors32zd2zz__bitz00(int32_t BgL_xz00_17, int32_t BgL_yz00_18)
{
{ /* Llib/bit.scm 536 */
return 
(BgL_xz00_17 | BgL_yz00_18);} 

}



/* &bit-ors32 */
obj_t BGl_z62bitzd2ors32zb0zz__bitz00(obj_t BgL_envz00_1215, obj_t BgL_xz00_1216, obj_t BgL_yz00_1217)
{
{ /* Llib/bit.scm 536 */
{ /* Llib/bit.scm 536 */
int32_t BgL_tmpz00_1863;
{ /* Llib/bit.scm 536 */
int32_t BgL_auxz00_1873;int32_t BgL_auxz00_1864;
{ /* Llib/bit.scm 536 */
obj_t BgL_tmpz00_1874;
if(
BGL_INT32P(BgL_yz00_1217))
{ /* Llib/bit.scm 536 */
BgL_tmpz00_1874 = BgL_yz00_1217
; }  else 
{ 
obj_t BgL_auxz00_1877;
BgL_auxz00_1877 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)24895)), BGl_string1736z00zz__bitz00, BGl_string1737z00zz__bitz00, BgL_yz00_1217); 
FAILURE(BgL_auxz00_1877,BFALSE,BFALSE);} 
BgL_auxz00_1873 = 
BGL_BINT32_TO_INT32(BgL_tmpz00_1874); } 
{ /* Llib/bit.scm 536 */
obj_t BgL_tmpz00_1865;
if(
BGL_INT32P(BgL_xz00_1216))
{ /* Llib/bit.scm 536 */
BgL_tmpz00_1865 = BgL_xz00_1216
; }  else 
{ 
obj_t BgL_auxz00_1868;
BgL_auxz00_1868 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)24895)), BGl_string1736z00zz__bitz00, BGl_string1737z00zz__bitz00, BgL_xz00_1216); 
FAILURE(BgL_auxz00_1868,BFALSE,BFALSE);} 
BgL_auxz00_1864 = 
BGL_BINT32_TO_INT32(BgL_tmpz00_1865); } 
BgL_tmpz00_1863 = 
BGl_bitzd2ors32zd2zz__bitz00(BgL_auxz00_1864, BgL_auxz00_1873); } 
return 
BGL_INT32_TO_BINT32(BgL_tmpz00_1863);} } 

}



/* bit-oru32 */
BGL_EXPORTED_DEF uint32_t BGl_bitzd2oru32zd2zz__bitz00(uint32_t BgL_xz00_19, uint32_t BgL_yz00_20)
{
{ /* Llib/bit.scm 537 */
return 
(BgL_xz00_19 | BgL_yz00_20);} 

}



/* &bit-oru32 */
obj_t BGl_z62bitzd2oru32zb0zz__bitz00(obj_t BgL_envz00_1218, obj_t BgL_xz00_1219, obj_t BgL_yz00_1220)
{
{ /* Llib/bit.scm 537 */
{ /* Llib/bit.scm 537 */
uint32_t BgL_tmpz00_1885;
{ /* Llib/bit.scm 537 */
uint32_t BgL_auxz00_1895;uint32_t BgL_auxz00_1886;
{ /* Llib/bit.scm 537 */
obj_t BgL_tmpz00_1896;
if(
BGL_UINT32P(BgL_yz00_1220))
{ /* Llib/bit.scm 537 */
BgL_tmpz00_1896 = BgL_yz00_1220
; }  else 
{ 
obj_t BgL_auxz00_1899;
BgL_auxz00_1899 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)24943)), BGl_string1738z00zz__bitz00, BGl_string1739z00zz__bitz00, BgL_yz00_1220); 
FAILURE(BgL_auxz00_1899,BFALSE,BFALSE);} 
BgL_auxz00_1895 = 
BGL_BUINT32_TO_UINT32(BgL_tmpz00_1896); } 
{ /* Llib/bit.scm 537 */
obj_t BgL_tmpz00_1887;
if(
BGL_UINT32P(BgL_xz00_1219))
{ /* Llib/bit.scm 537 */
BgL_tmpz00_1887 = BgL_xz00_1219
; }  else 
{ 
obj_t BgL_auxz00_1890;
BgL_auxz00_1890 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)24943)), BGl_string1738z00zz__bitz00, BGl_string1739z00zz__bitz00, BgL_xz00_1219); 
FAILURE(BgL_auxz00_1890,BFALSE,BFALSE);} 
BgL_auxz00_1886 = 
BGL_BUINT32_TO_UINT32(BgL_tmpz00_1887); } 
BgL_tmpz00_1885 = 
BGl_bitzd2oru32zd2zz__bitz00(BgL_auxz00_1886, BgL_auxz00_1895); } 
return 
BGL_UINT32_TO_BUINT32(BgL_tmpz00_1885);} } 

}



/* bit-ors64 */
BGL_EXPORTED_DEF int64_t BGl_bitzd2ors64zd2zz__bitz00(int64_t BgL_xz00_21, int64_t BgL_yz00_22)
{
{ /* Llib/bit.scm 538 */
return 
(BgL_xz00_21 | BgL_yz00_22);} 

}



/* &bit-ors64 */
obj_t BGl_z62bitzd2ors64zb0zz__bitz00(obj_t BgL_envz00_1221, obj_t BgL_xz00_1222, obj_t BgL_yz00_1223)
{
{ /* Llib/bit.scm 538 */
{ /* Llib/bit.scm 538 */
int64_t BgL_tmpz00_1907;
{ /* Llib/bit.scm 538 */
int64_t BgL_auxz00_1917;int64_t BgL_auxz00_1908;
{ /* Llib/bit.scm 538 */
obj_t BgL_tmpz00_1918;
if(
BGL_INT64P(BgL_yz00_1223))
{ /* Llib/bit.scm 538 */
BgL_tmpz00_1918 = BgL_yz00_1223
; }  else 
{ 
obj_t BgL_auxz00_1921;
BgL_auxz00_1921 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)24991)), BGl_string1740z00zz__bitz00, BGl_string1741z00zz__bitz00, BgL_yz00_1223); 
FAILURE(BgL_auxz00_1921,BFALSE,BFALSE);} 
BgL_auxz00_1917 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_1918); } 
{ /* Llib/bit.scm 538 */
obj_t BgL_tmpz00_1909;
if(
BGL_INT64P(BgL_xz00_1222))
{ /* Llib/bit.scm 538 */
BgL_tmpz00_1909 = BgL_xz00_1222
; }  else 
{ 
obj_t BgL_auxz00_1912;
BgL_auxz00_1912 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)24991)), BGl_string1740z00zz__bitz00, BGl_string1741z00zz__bitz00, BgL_xz00_1222); 
FAILURE(BgL_auxz00_1912,BFALSE,BFALSE);} 
BgL_auxz00_1908 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_1909); } 
BgL_tmpz00_1907 = 
BGl_bitzd2ors64zd2zz__bitz00(BgL_auxz00_1908, BgL_auxz00_1917); } 
return 
BGL_INT64_TO_BINT64(BgL_tmpz00_1907);} } 

}



/* bit-oru64 */
BGL_EXPORTED_DEF uint64_t BGl_bitzd2oru64zd2zz__bitz00(uint64_t BgL_xz00_23, uint64_t BgL_yz00_24)
{
{ /* Llib/bit.scm 539 */
return 
(BgL_xz00_23 | BgL_yz00_24);} 

}



/* &bit-oru64 */
obj_t BGl_z62bitzd2oru64zb0zz__bitz00(obj_t BgL_envz00_1224, obj_t BgL_xz00_1225, obj_t BgL_yz00_1226)
{
{ /* Llib/bit.scm 539 */
{ /* Llib/bit.scm 539 */
uint64_t BgL_tmpz00_1929;
{ /* Llib/bit.scm 539 */
uint64_t BgL_auxz00_1939;uint64_t BgL_auxz00_1930;
{ /* Llib/bit.scm 539 */
obj_t BgL_tmpz00_1940;
if(
BGL_UINT64P(BgL_yz00_1226))
{ /* Llib/bit.scm 539 */
BgL_tmpz00_1940 = BgL_yz00_1226
; }  else 
{ 
obj_t BgL_auxz00_1943;
BgL_auxz00_1943 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25039)), BGl_string1742z00zz__bitz00, BGl_string1743z00zz__bitz00, BgL_yz00_1226); 
FAILURE(BgL_auxz00_1943,BFALSE,BFALSE);} 
BgL_auxz00_1939 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_1940); } 
{ /* Llib/bit.scm 539 */
obj_t BgL_tmpz00_1931;
if(
BGL_UINT64P(BgL_xz00_1225))
{ /* Llib/bit.scm 539 */
BgL_tmpz00_1931 = BgL_xz00_1225
; }  else 
{ 
obj_t BgL_auxz00_1934;
BgL_auxz00_1934 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25039)), BGl_string1742z00zz__bitz00, BGl_string1743z00zz__bitz00, BgL_xz00_1225); 
FAILURE(BgL_auxz00_1934,BFALSE,BFALSE);} 
BgL_auxz00_1930 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_1931); } 
BgL_tmpz00_1929 = 
BGl_bitzd2oru64zd2zz__bitz00(BgL_auxz00_1930, BgL_auxz00_1939); } 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_1929);} } 

}



/* bit-and */
BGL_EXPORTED_DEF long BGl_bitzd2andzd2zz__bitz00(long BgL_xz00_25, long BgL_yz00_26)
{
{ /* Llib/bit.scm 544 */
return 
(BgL_xz00_25 & BgL_yz00_26);} 

}



/* &bit-and */
obj_t BGl_z62bitzd2andzb0zz__bitz00(obj_t BgL_envz00_1227, obj_t BgL_xz00_1228, obj_t BgL_yz00_1229)
{
{ /* Llib/bit.scm 544 */
{ /* Llib/bit.scm 544 */
long BgL_tmpz00_1951;
{ /* Llib/bit.scm 544 */
long BgL_auxz00_1961;long BgL_auxz00_1952;
{ /* Llib/bit.scm 544 */
obj_t BgL_tmpz00_1962;
if(
INTEGERP(BgL_yz00_1229))
{ /* Llib/bit.scm 544 */
BgL_tmpz00_1962 = BgL_yz00_1229
; }  else 
{ 
obj_t BgL_auxz00_1965;
BgL_auxz00_1965 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25308)), BGl_string1744z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1229); 
FAILURE(BgL_auxz00_1965,BFALSE,BFALSE);} 
BgL_auxz00_1961 = 
(long)CINT(BgL_tmpz00_1962); } 
{ /* Llib/bit.scm 544 */
obj_t BgL_tmpz00_1953;
if(
INTEGERP(BgL_xz00_1228))
{ /* Llib/bit.scm 544 */
BgL_tmpz00_1953 = BgL_xz00_1228
; }  else 
{ 
obj_t BgL_auxz00_1956;
BgL_auxz00_1956 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25308)), BGl_string1744z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_xz00_1228); 
FAILURE(BgL_auxz00_1956,BFALSE,BFALSE);} 
BgL_auxz00_1952 = 
(long)CINT(BgL_tmpz00_1953); } 
BgL_tmpz00_1951 = 
BGl_bitzd2andzd2zz__bitz00(BgL_auxz00_1952, BgL_auxz00_1961); } 
return 
BINT(BgL_tmpz00_1951);} } 

}



/* bit-andelong */
BGL_EXPORTED_DEF long BGl_bitzd2andelongzd2zz__bitz00(long BgL_xz00_27, long BgL_yz00_28)
{
{ /* Llib/bit.scm 545 */
return 
(BgL_xz00_27 & BgL_yz00_28);} 

}



/* &bit-andelong */
obj_t BGl_z62bitzd2andelongzb0zz__bitz00(obj_t BgL_envz00_1230, obj_t BgL_xz00_1231, obj_t BgL_yz00_1232)
{
{ /* Llib/bit.scm 545 */
{ /* Llib/bit.scm 545 */
long BgL_tmpz00_1973;
{ /* Llib/bit.scm 545 */
long BgL_auxz00_1983;long BgL_auxz00_1974;
{ /* Llib/bit.scm 545 */
obj_t BgL_tmpz00_1984;
if(
ELONGP(BgL_yz00_1232))
{ /* Llib/bit.scm 545 */
BgL_tmpz00_1984 = BgL_yz00_1232
; }  else 
{ 
obj_t BgL_auxz00_1987;
BgL_auxz00_1987 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25358)), BGl_string1745z00zz__bitz00, BGl_string1725z00zz__bitz00, BgL_yz00_1232); 
FAILURE(BgL_auxz00_1987,BFALSE,BFALSE);} 
BgL_auxz00_1983 = 
BELONG_TO_LONG(BgL_tmpz00_1984); } 
{ /* Llib/bit.scm 545 */
obj_t BgL_tmpz00_1975;
if(
ELONGP(BgL_xz00_1231))
{ /* Llib/bit.scm 545 */
BgL_tmpz00_1975 = BgL_xz00_1231
; }  else 
{ 
obj_t BgL_auxz00_1978;
BgL_auxz00_1978 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25358)), BGl_string1745z00zz__bitz00, BGl_string1725z00zz__bitz00, BgL_xz00_1231); 
FAILURE(BgL_auxz00_1978,BFALSE,BFALSE);} 
BgL_auxz00_1974 = 
BELONG_TO_LONG(BgL_tmpz00_1975); } 
BgL_tmpz00_1973 = 
BGl_bitzd2andelongzd2zz__bitz00(BgL_auxz00_1974, BgL_auxz00_1983); } 
return 
make_belong(BgL_tmpz00_1973);} } 

}



/* bit-andllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2andllongzd2zz__bitz00(BGL_LONGLONG_T BgL_xz00_29, BGL_LONGLONG_T BgL_yz00_30)
{
{ /* Llib/bit.scm 546 */
return 
(BgL_xz00_29 & BgL_yz00_30);} 

}



/* &bit-andllong */
obj_t BGl_z62bitzd2andllongzb0zz__bitz00(obj_t BgL_envz00_1233, obj_t BgL_xz00_1234, obj_t BgL_yz00_1235)
{
{ /* Llib/bit.scm 546 */
{ /* Llib/bit.scm 546 */
BGL_LONGLONG_T BgL_tmpz00_1995;
{ /* Llib/bit.scm 546 */
BGL_LONGLONG_T BgL_auxz00_2005;BGL_LONGLONG_T BgL_auxz00_1996;
{ /* Llib/bit.scm 546 */
obj_t BgL_tmpz00_2006;
if(
LLONGP(BgL_yz00_1235))
{ /* Llib/bit.scm 546 */
BgL_tmpz00_2006 = BgL_yz00_1235
; }  else 
{ 
obj_t BgL_auxz00_2009;
BgL_auxz00_2009 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25413)), BGl_string1746z00zz__bitz00, BGl_string1727z00zz__bitz00, BgL_yz00_1235); 
FAILURE(BgL_auxz00_2009,BFALSE,BFALSE);} 
BgL_auxz00_2005 = 
BLLONG_TO_LLONG(BgL_tmpz00_2006); } 
{ /* Llib/bit.scm 546 */
obj_t BgL_tmpz00_1997;
if(
LLONGP(BgL_xz00_1234))
{ /* Llib/bit.scm 546 */
BgL_tmpz00_1997 = BgL_xz00_1234
; }  else 
{ 
obj_t BgL_auxz00_2000;
BgL_auxz00_2000 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25413)), BGl_string1746z00zz__bitz00, BGl_string1727z00zz__bitz00, BgL_xz00_1234); 
FAILURE(BgL_auxz00_2000,BFALSE,BFALSE);} 
BgL_auxz00_1996 = 
BLLONG_TO_LLONG(BgL_tmpz00_1997); } 
BgL_tmpz00_1995 = 
BGl_bitzd2andllongzd2zz__bitz00(BgL_auxz00_1996, BgL_auxz00_2005); } 
return 
make_bllong(BgL_tmpz00_1995);} } 

}



/* bit-ands8 */
BGL_EXPORTED_DEF int8_t BGl_bitzd2ands8zd2zz__bitz00(int8_t BgL_xz00_31, int8_t BgL_yz00_32)
{
{ /* Llib/bit.scm 547 */
return 
(BgL_xz00_31 & BgL_yz00_32);} 

}



/* &bit-ands8 */
obj_t BGl_z62bitzd2ands8zb0zz__bitz00(obj_t BgL_envz00_1236, obj_t BgL_xz00_1237, obj_t BgL_yz00_1238)
{
{ /* Llib/bit.scm 547 */
{ /* Llib/bit.scm 547 */
int8_t BgL_tmpz00_2017;
{ /* Llib/bit.scm 547 */
int8_t BgL_auxz00_2027;int8_t BgL_auxz00_2018;
{ /* Llib/bit.scm 547 */
obj_t BgL_tmpz00_2028;
if(
BGL_INT8P(BgL_yz00_1238))
{ /* Llib/bit.scm 547 */
BgL_tmpz00_2028 = BgL_yz00_1238
; }  else 
{ 
obj_t BgL_auxz00_2031;
BgL_auxz00_2031 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25465)), BGl_string1747z00zz__bitz00, BGl_string1729z00zz__bitz00, BgL_yz00_1238); 
FAILURE(BgL_auxz00_2031,BFALSE,BFALSE);} 
BgL_auxz00_2027 = 
BGL_BINT8_TO_INT8(BgL_tmpz00_2028); } 
{ /* Llib/bit.scm 547 */
obj_t BgL_tmpz00_2019;
if(
BGL_INT8P(BgL_xz00_1237))
{ /* Llib/bit.scm 547 */
BgL_tmpz00_2019 = BgL_xz00_1237
; }  else 
{ 
obj_t BgL_auxz00_2022;
BgL_auxz00_2022 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25465)), BGl_string1747z00zz__bitz00, BGl_string1729z00zz__bitz00, BgL_xz00_1237); 
FAILURE(BgL_auxz00_2022,BFALSE,BFALSE);} 
BgL_auxz00_2018 = 
BGL_BINT8_TO_INT8(BgL_tmpz00_2019); } 
BgL_tmpz00_2017 = 
BGl_bitzd2ands8zd2zz__bitz00(BgL_auxz00_2018, BgL_auxz00_2027); } 
return 
BGL_INT8_TO_BINT8(BgL_tmpz00_2017);} } 

}



/* bit-andu8 */
BGL_EXPORTED_DEF uint8_t BGl_bitzd2andu8zd2zz__bitz00(uint8_t BgL_xz00_33, uint8_t BgL_yz00_34)
{
{ /* Llib/bit.scm 548 */
return 
(BgL_xz00_33 & BgL_yz00_34);} 

}



/* &bit-andu8 */
obj_t BGl_z62bitzd2andu8zb0zz__bitz00(obj_t BgL_envz00_1239, obj_t BgL_xz00_1240, obj_t BgL_yz00_1241)
{
{ /* Llib/bit.scm 548 */
{ /* Llib/bit.scm 548 */
uint8_t BgL_tmpz00_2039;
{ /* Llib/bit.scm 548 */
uint8_t BgL_auxz00_2049;uint8_t BgL_auxz00_2040;
{ /* Llib/bit.scm 548 */
obj_t BgL_tmpz00_2050;
if(
BGL_UINT8P(BgL_yz00_1241))
{ /* Llib/bit.scm 548 */
BgL_tmpz00_2050 = BgL_yz00_1241
; }  else 
{ 
obj_t BgL_auxz00_2053;
BgL_auxz00_2053 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25513)), BGl_string1748z00zz__bitz00, BGl_string1731z00zz__bitz00, BgL_yz00_1241); 
FAILURE(BgL_auxz00_2053,BFALSE,BFALSE);} 
BgL_auxz00_2049 = 
BGL_BUINT8_TO_UINT8(BgL_tmpz00_2050); } 
{ /* Llib/bit.scm 548 */
obj_t BgL_tmpz00_2041;
if(
BGL_UINT8P(BgL_xz00_1240))
{ /* Llib/bit.scm 548 */
BgL_tmpz00_2041 = BgL_xz00_1240
; }  else 
{ 
obj_t BgL_auxz00_2044;
BgL_auxz00_2044 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25513)), BGl_string1748z00zz__bitz00, BGl_string1731z00zz__bitz00, BgL_xz00_1240); 
FAILURE(BgL_auxz00_2044,BFALSE,BFALSE);} 
BgL_auxz00_2040 = 
BGL_BUINT8_TO_UINT8(BgL_tmpz00_2041); } 
BgL_tmpz00_2039 = 
BGl_bitzd2andu8zd2zz__bitz00(BgL_auxz00_2040, BgL_auxz00_2049); } 
return 
BGL_UINT8_TO_BUINT8(BgL_tmpz00_2039);} } 

}



/* bit-ands16 */
BGL_EXPORTED_DEF int16_t BGl_bitzd2ands16zd2zz__bitz00(int16_t BgL_xz00_35, int16_t BgL_yz00_36)
{
{ /* Llib/bit.scm 549 */
return 
(BgL_xz00_35 & BgL_yz00_36);} 

}



/* &bit-ands16 */
obj_t BGl_z62bitzd2ands16zb0zz__bitz00(obj_t BgL_envz00_1242, obj_t BgL_xz00_1243, obj_t BgL_yz00_1244)
{
{ /* Llib/bit.scm 549 */
{ /* Llib/bit.scm 549 */
int16_t BgL_tmpz00_2061;
{ /* Llib/bit.scm 549 */
int16_t BgL_auxz00_2071;int16_t BgL_auxz00_2062;
{ /* Llib/bit.scm 549 */
obj_t BgL_tmpz00_2072;
if(
BGL_INT16P(BgL_yz00_1244))
{ /* Llib/bit.scm 549 */
BgL_tmpz00_2072 = BgL_yz00_1244
; }  else 
{ 
obj_t BgL_auxz00_2075;
BgL_auxz00_2075 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25562)), BGl_string1749z00zz__bitz00, BGl_string1733z00zz__bitz00, BgL_yz00_1244); 
FAILURE(BgL_auxz00_2075,BFALSE,BFALSE);} 
BgL_auxz00_2071 = 
BGL_BINT16_TO_INT16(BgL_tmpz00_2072); } 
{ /* Llib/bit.scm 549 */
obj_t BgL_tmpz00_2063;
if(
BGL_INT16P(BgL_xz00_1243))
{ /* Llib/bit.scm 549 */
BgL_tmpz00_2063 = BgL_xz00_1243
; }  else 
{ 
obj_t BgL_auxz00_2066;
BgL_auxz00_2066 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25562)), BGl_string1749z00zz__bitz00, BGl_string1733z00zz__bitz00, BgL_xz00_1243); 
FAILURE(BgL_auxz00_2066,BFALSE,BFALSE);} 
BgL_auxz00_2062 = 
BGL_BINT16_TO_INT16(BgL_tmpz00_2063); } 
BgL_tmpz00_2061 = 
BGl_bitzd2ands16zd2zz__bitz00(BgL_auxz00_2062, BgL_auxz00_2071); } 
return 
BGL_INT16_TO_BINT16(BgL_tmpz00_2061);} } 

}



/* bit-andu16 */
BGL_EXPORTED_DEF uint16_t BGl_bitzd2andu16zd2zz__bitz00(uint16_t BgL_xz00_37, uint16_t BgL_yz00_38)
{
{ /* Llib/bit.scm 550 */
return 
(BgL_xz00_37 & BgL_yz00_38);} 

}



/* &bit-andu16 */
obj_t BGl_z62bitzd2andu16zb0zz__bitz00(obj_t BgL_envz00_1245, obj_t BgL_xz00_1246, obj_t BgL_yz00_1247)
{
{ /* Llib/bit.scm 550 */
{ /* Llib/bit.scm 550 */
uint16_t BgL_tmpz00_2083;
{ /* Llib/bit.scm 550 */
uint16_t BgL_auxz00_2093;uint16_t BgL_auxz00_2084;
{ /* Llib/bit.scm 550 */
obj_t BgL_tmpz00_2094;
if(
BGL_UINT16P(BgL_yz00_1247))
{ /* Llib/bit.scm 550 */
BgL_tmpz00_2094 = BgL_yz00_1247
; }  else 
{ 
obj_t BgL_auxz00_2097;
BgL_auxz00_2097 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25612)), BGl_string1750z00zz__bitz00, BGl_string1735z00zz__bitz00, BgL_yz00_1247); 
FAILURE(BgL_auxz00_2097,BFALSE,BFALSE);} 
BgL_auxz00_2093 = 
BGL_BUINT16_TO_UINT16(BgL_tmpz00_2094); } 
{ /* Llib/bit.scm 550 */
obj_t BgL_tmpz00_2085;
if(
BGL_UINT16P(BgL_xz00_1246))
{ /* Llib/bit.scm 550 */
BgL_tmpz00_2085 = BgL_xz00_1246
; }  else 
{ 
obj_t BgL_auxz00_2088;
BgL_auxz00_2088 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25612)), BGl_string1750z00zz__bitz00, BGl_string1735z00zz__bitz00, BgL_xz00_1246); 
FAILURE(BgL_auxz00_2088,BFALSE,BFALSE);} 
BgL_auxz00_2084 = 
BGL_BUINT16_TO_UINT16(BgL_tmpz00_2085); } 
BgL_tmpz00_2083 = 
BGl_bitzd2andu16zd2zz__bitz00(BgL_auxz00_2084, BgL_auxz00_2093); } 
return 
BGL_UINT16_TO_BUINT16(BgL_tmpz00_2083);} } 

}



/* bit-ands32 */
BGL_EXPORTED_DEF int32_t BGl_bitzd2ands32zd2zz__bitz00(int32_t BgL_xz00_39, int32_t BgL_yz00_40)
{
{ /* Llib/bit.scm 551 */
return 
(BgL_xz00_39 & BgL_yz00_40);} 

}



/* &bit-ands32 */
obj_t BGl_z62bitzd2ands32zb0zz__bitz00(obj_t BgL_envz00_1248, obj_t BgL_xz00_1249, obj_t BgL_yz00_1250)
{
{ /* Llib/bit.scm 551 */
{ /* Llib/bit.scm 551 */
int32_t BgL_tmpz00_2105;
{ /* Llib/bit.scm 551 */
int32_t BgL_auxz00_2115;int32_t BgL_auxz00_2106;
{ /* Llib/bit.scm 551 */
obj_t BgL_tmpz00_2116;
if(
BGL_INT32P(BgL_yz00_1250))
{ /* Llib/bit.scm 551 */
BgL_tmpz00_2116 = BgL_yz00_1250
; }  else 
{ 
obj_t BgL_auxz00_2119;
BgL_auxz00_2119 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25662)), BGl_string1751z00zz__bitz00, BGl_string1737z00zz__bitz00, BgL_yz00_1250); 
FAILURE(BgL_auxz00_2119,BFALSE,BFALSE);} 
BgL_auxz00_2115 = 
BGL_BINT32_TO_INT32(BgL_tmpz00_2116); } 
{ /* Llib/bit.scm 551 */
obj_t BgL_tmpz00_2107;
if(
BGL_INT32P(BgL_xz00_1249))
{ /* Llib/bit.scm 551 */
BgL_tmpz00_2107 = BgL_xz00_1249
; }  else 
{ 
obj_t BgL_auxz00_2110;
BgL_auxz00_2110 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25662)), BGl_string1751z00zz__bitz00, BGl_string1737z00zz__bitz00, BgL_xz00_1249); 
FAILURE(BgL_auxz00_2110,BFALSE,BFALSE);} 
BgL_auxz00_2106 = 
BGL_BINT32_TO_INT32(BgL_tmpz00_2107); } 
BgL_tmpz00_2105 = 
BGl_bitzd2ands32zd2zz__bitz00(BgL_auxz00_2106, BgL_auxz00_2115); } 
return 
BGL_INT32_TO_BINT32(BgL_tmpz00_2105);} } 

}



/* bit-andu32 */
BGL_EXPORTED_DEF uint32_t BGl_bitzd2andu32zd2zz__bitz00(uint32_t BgL_xz00_41, uint32_t BgL_yz00_42)
{
{ /* Llib/bit.scm 552 */
return 
(BgL_xz00_41 & BgL_yz00_42);} 

}



/* &bit-andu32 */
obj_t BGl_z62bitzd2andu32zb0zz__bitz00(obj_t BgL_envz00_1251, obj_t BgL_xz00_1252, obj_t BgL_yz00_1253)
{
{ /* Llib/bit.scm 552 */
{ /* Llib/bit.scm 552 */
uint32_t BgL_tmpz00_2127;
{ /* Llib/bit.scm 552 */
uint32_t BgL_auxz00_2137;uint32_t BgL_auxz00_2128;
{ /* Llib/bit.scm 552 */
obj_t BgL_tmpz00_2138;
if(
BGL_UINT32P(BgL_yz00_1253))
{ /* Llib/bit.scm 552 */
BgL_tmpz00_2138 = BgL_yz00_1253
; }  else 
{ 
obj_t BgL_auxz00_2141;
BgL_auxz00_2141 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25712)), BGl_string1752z00zz__bitz00, BGl_string1739z00zz__bitz00, BgL_yz00_1253); 
FAILURE(BgL_auxz00_2141,BFALSE,BFALSE);} 
BgL_auxz00_2137 = 
BGL_BUINT32_TO_UINT32(BgL_tmpz00_2138); } 
{ /* Llib/bit.scm 552 */
obj_t BgL_tmpz00_2129;
if(
BGL_UINT32P(BgL_xz00_1252))
{ /* Llib/bit.scm 552 */
BgL_tmpz00_2129 = BgL_xz00_1252
; }  else 
{ 
obj_t BgL_auxz00_2132;
BgL_auxz00_2132 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25712)), BGl_string1752z00zz__bitz00, BGl_string1739z00zz__bitz00, BgL_xz00_1252); 
FAILURE(BgL_auxz00_2132,BFALSE,BFALSE);} 
BgL_auxz00_2128 = 
BGL_BUINT32_TO_UINT32(BgL_tmpz00_2129); } 
BgL_tmpz00_2127 = 
BGl_bitzd2andu32zd2zz__bitz00(BgL_auxz00_2128, BgL_auxz00_2137); } 
return 
BGL_UINT32_TO_BUINT32(BgL_tmpz00_2127);} } 

}



/* bit-ands64 */
BGL_EXPORTED_DEF int64_t BGl_bitzd2ands64zd2zz__bitz00(int64_t BgL_xz00_43, int64_t BgL_yz00_44)
{
{ /* Llib/bit.scm 553 */
return 
(BgL_xz00_43 & BgL_yz00_44);} 

}



/* &bit-ands64 */
obj_t BGl_z62bitzd2ands64zb0zz__bitz00(obj_t BgL_envz00_1254, obj_t BgL_xz00_1255, obj_t BgL_yz00_1256)
{
{ /* Llib/bit.scm 553 */
{ /* Llib/bit.scm 553 */
int64_t BgL_tmpz00_2149;
{ /* Llib/bit.scm 553 */
int64_t BgL_auxz00_2159;int64_t BgL_auxz00_2150;
{ /* Llib/bit.scm 553 */
obj_t BgL_tmpz00_2160;
if(
BGL_INT64P(BgL_yz00_1256))
{ /* Llib/bit.scm 553 */
BgL_tmpz00_2160 = BgL_yz00_1256
; }  else 
{ 
obj_t BgL_auxz00_2163;
BgL_auxz00_2163 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25762)), BGl_string1753z00zz__bitz00, BGl_string1741z00zz__bitz00, BgL_yz00_1256); 
FAILURE(BgL_auxz00_2163,BFALSE,BFALSE);} 
BgL_auxz00_2159 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_2160); } 
{ /* Llib/bit.scm 553 */
obj_t BgL_tmpz00_2151;
if(
BGL_INT64P(BgL_xz00_1255))
{ /* Llib/bit.scm 553 */
BgL_tmpz00_2151 = BgL_xz00_1255
; }  else 
{ 
obj_t BgL_auxz00_2154;
BgL_auxz00_2154 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25762)), BGl_string1753z00zz__bitz00, BGl_string1741z00zz__bitz00, BgL_xz00_1255); 
FAILURE(BgL_auxz00_2154,BFALSE,BFALSE);} 
BgL_auxz00_2150 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_2151); } 
BgL_tmpz00_2149 = 
BGl_bitzd2ands64zd2zz__bitz00(BgL_auxz00_2150, BgL_auxz00_2159); } 
return 
BGL_INT64_TO_BINT64(BgL_tmpz00_2149);} } 

}



/* bit-andu64 */
BGL_EXPORTED_DEF uint64_t BGl_bitzd2andu64zd2zz__bitz00(uint64_t BgL_xz00_45, uint64_t BgL_yz00_46)
{
{ /* Llib/bit.scm 554 */
return 
(BgL_xz00_45 & BgL_yz00_46);} 

}



/* &bit-andu64 */
obj_t BGl_z62bitzd2andu64zb0zz__bitz00(obj_t BgL_envz00_1257, obj_t BgL_xz00_1258, obj_t BgL_yz00_1259)
{
{ /* Llib/bit.scm 554 */
{ /* Llib/bit.scm 554 */
uint64_t BgL_tmpz00_2171;
{ /* Llib/bit.scm 554 */
uint64_t BgL_auxz00_2181;uint64_t BgL_auxz00_2172;
{ /* Llib/bit.scm 554 */
obj_t BgL_tmpz00_2182;
if(
BGL_UINT64P(BgL_yz00_1259))
{ /* Llib/bit.scm 554 */
BgL_tmpz00_2182 = BgL_yz00_1259
; }  else 
{ 
obj_t BgL_auxz00_2185;
BgL_auxz00_2185 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25812)), BGl_string1754z00zz__bitz00, BGl_string1743z00zz__bitz00, BgL_yz00_1259); 
FAILURE(BgL_auxz00_2185,BFALSE,BFALSE);} 
BgL_auxz00_2181 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_2182); } 
{ /* Llib/bit.scm 554 */
obj_t BgL_tmpz00_2173;
if(
BGL_UINT64P(BgL_xz00_1258))
{ /* Llib/bit.scm 554 */
BgL_tmpz00_2173 = BgL_xz00_1258
; }  else 
{ 
obj_t BgL_auxz00_2176;
BgL_auxz00_2176 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)25812)), BGl_string1754z00zz__bitz00, BGl_string1743z00zz__bitz00, BgL_xz00_1258); 
FAILURE(BgL_auxz00_2176,BFALSE,BFALSE);} 
BgL_auxz00_2172 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_2173); } 
BgL_tmpz00_2171 = 
BGl_bitzd2andu64zd2zz__bitz00(BgL_auxz00_2172, BgL_auxz00_2181); } 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_2171);} } 

}



/* bit-xor */
BGL_EXPORTED_DEF long BGl_bitzd2xorzd2zz__bitz00(long BgL_xz00_47, long BgL_yz00_48)
{
{ /* Llib/bit.scm 559 */
return 
(BgL_xz00_47 ^ BgL_yz00_48);} 

}



/* &bit-xor */
obj_t BGl_z62bitzd2xorzb0zz__bitz00(obj_t BgL_envz00_1260, obj_t BgL_xz00_1261, obj_t BgL_yz00_1262)
{
{ /* Llib/bit.scm 559 */
{ /* Llib/bit.scm 559 */
long BgL_tmpz00_2193;
{ /* Llib/bit.scm 559 */
long BgL_auxz00_2203;long BgL_auxz00_2194;
{ /* Llib/bit.scm 559 */
obj_t BgL_tmpz00_2204;
if(
INTEGERP(BgL_yz00_1262))
{ /* Llib/bit.scm 559 */
BgL_tmpz00_2204 = BgL_yz00_1262
; }  else 
{ 
obj_t BgL_auxz00_2207;
BgL_auxz00_2207 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26082)), BGl_string1755z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1262); 
FAILURE(BgL_auxz00_2207,BFALSE,BFALSE);} 
BgL_auxz00_2203 = 
(long)CINT(BgL_tmpz00_2204); } 
{ /* Llib/bit.scm 559 */
obj_t BgL_tmpz00_2195;
if(
INTEGERP(BgL_xz00_1261))
{ /* Llib/bit.scm 559 */
BgL_tmpz00_2195 = BgL_xz00_1261
; }  else 
{ 
obj_t BgL_auxz00_2198;
BgL_auxz00_2198 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26082)), BGl_string1755z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_xz00_1261); 
FAILURE(BgL_auxz00_2198,BFALSE,BFALSE);} 
BgL_auxz00_2194 = 
(long)CINT(BgL_tmpz00_2195); } 
BgL_tmpz00_2193 = 
BGl_bitzd2xorzd2zz__bitz00(BgL_auxz00_2194, BgL_auxz00_2203); } 
return 
BINT(BgL_tmpz00_2193);} } 

}



/* bit-xorelong */
BGL_EXPORTED_DEF long BGl_bitzd2xorelongzd2zz__bitz00(long BgL_xz00_49, long BgL_yz00_50)
{
{ /* Llib/bit.scm 560 */
return 
(BgL_xz00_49 ^ BgL_yz00_50);} 

}



/* &bit-xorelong */
obj_t BGl_z62bitzd2xorelongzb0zz__bitz00(obj_t BgL_envz00_1263, obj_t BgL_xz00_1264, obj_t BgL_yz00_1265)
{
{ /* Llib/bit.scm 560 */
{ /* Llib/bit.scm 560 */
long BgL_tmpz00_2215;
{ /* Llib/bit.scm 560 */
long BgL_auxz00_2225;long BgL_auxz00_2216;
{ /* Llib/bit.scm 560 */
obj_t BgL_tmpz00_2226;
if(
ELONGP(BgL_yz00_1265))
{ /* Llib/bit.scm 560 */
BgL_tmpz00_2226 = BgL_yz00_1265
; }  else 
{ 
obj_t BgL_auxz00_2229;
BgL_auxz00_2229 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26132)), BGl_string1756z00zz__bitz00, BGl_string1725z00zz__bitz00, BgL_yz00_1265); 
FAILURE(BgL_auxz00_2229,BFALSE,BFALSE);} 
BgL_auxz00_2225 = 
BELONG_TO_LONG(BgL_tmpz00_2226); } 
{ /* Llib/bit.scm 560 */
obj_t BgL_tmpz00_2217;
if(
ELONGP(BgL_xz00_1264))
{ /* Llib/bit.scm 560 */
BgL_tmpz00_2217 = BgL_xz00_1264
; }  else 
{ 
obj_t BgL_auxz00_2220;
BgL_auxz00_2220 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26132)), BGl_string1756z00zz__bitz00, BGl_string1725z00zz__bitz00, BgL_xz00_1264); 
FAILURE(BgL_auxz00_2220,BFALSE,BFALSE);} 
BgL_auxz00_2216 = 
BELONG_TO_LONG(BgL_tmpz00_2217); } 
BgL_tmpz00_2215 = 
BGl_bitzd2xorelongzd2zz__bitz00(BgL_auxz00_2216, BgL_auxz00_2225); } 
return 
make_belong(BgL_tmpz00_2215);} } 

}



/* bit-xorllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2xorllongzd2zz__bitz00(BGL_LONGLONG_T BgL_xz00_51, BGL_LONGLONG_T BgL_yz00_52)
{
{ /* Llib/bit.scm 561 */
return 
(BgL_xz00_51 ^ BgL_yz00_52);} 

}



/* &bit-xorllong */
obj_t BGl_z62bitzd2xorllongzb0zz__bitz00(obj_t BgL_envz00_1266, obj_t BgL_xz00_1267, obj_t BgL_yz00_1268)
{
{ /* Llib/bit.scm 561 */
{ /* Llib/bit.scm 561 */
BGL_LONGLONG_T BgL_tmpz00_2237;
{ /* Llib/bit.scm 561 */
BGL_LONGLONG_T BgL_auxz00_2247;BGL_LONGLONG_T BgL_auxz00_2238;
{ /* Llib/bit.scm 561 */
obj_t BgL_tmpz00_2248;
if(
LLONGP(BgL_yz00_1268))
{ /* Llib/bit.scm 561 */
BgL_tmpz00_2248 = BgL_yz00_1268
; }  else 
{ 
obj_t BgL_auxz00_2251;
BgL_auxz00_2251 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26187)), BGl_string1757z00zz__bitz00, BGl_string1727z00zz__bitz00, BgL_yz00_1268); 
FAILURE(BgL_auxz00_2251,BFALSE,BFALSE);} 
BgL_auxz00_2247 = 
BLLONG_TO_LLONG(BgL_tmpz00_2248); } 
{ /* Llib/bit.scm 561 */
obj_t BgL_tmpz00_2239;
if(
LLONGP(BgL_xz00_1267))
{ /* Llib/bit.scm 561 */
BgL_tmpz00_2239 = BgL_xz00_1267
; }  else 
{ 
obj_t BgL_auxz00_2242;
BgL_auxz00_2242 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26187)), BGl_string1757z00zz__bitz00, BGl_string1727z00zz__bitz00, BgL_xz00_1267); 
FAILURE(BgL_auxz00_2242,BFALSE,BFALSE);} 
BgL_auxz00_2238 = 
BLLONG_TO_LLONG(BgL_tmpz00_2239); } 
BgL_tmpz00_2237 = 
BGl_bitzd2xorllongzd2zz__bitz00(BgL_auxz00_2238, BgL_auxz00_2247); } 
return 
make_bllong(BgL_tmpz00_2237);} } 

}



/* bit-xors8 */
BGL_EXPORTED_DEF int8_t BGl_bitzd2xors8zd2zz__bitz00(int8_t BgL_xz00_53, int8_t BgL_yz00_54)
{
{ /* Llib/bit.scm 562 */
return 
(BgL_xz00_53 ^ BgL_yz00_54);} 

}



/* &bit-xors8 */
obj_t BGl_z62bitzd2xors8zb0zz__bitz00(obj_t BgL_envz00_1269, obj_t BgL_xz00_1270, obj_t BgL_yz00_1271)
{
{ /* Llib/bit.scm 562 */
{ /* Llib/bit.scm 562 */
int8_t BgL_tmpz00_2259;
{ /* Llib/bit.scm 562 */
int8_t BgL_auxz00_2269;int8_t BgL_auxz00_2260;
{ /* Llib/bit.scm 562 */
obj_t BgL_tmpz00_2270;
if(
BGL_INT8P(BgL_yz00_1271))
{ /* Llib/bit.scm 562 */
BgL_tmpz00_2270 = BgL_yz00_1271
; }  else 
{ 
obj_t BgL_auxz00_2273;
BgL_auxz00_2273 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26239)), BGl_string1758z00zz__bitz00, BGl_string1729z00zz__bitz00, BgL_yz00_1271); 
FAILURE(BgL_auxz00_2273,BFALSE,BFALSE);} 
BgL_auxz00_2269 = 
BGL_BINT8_TO_INT8(BgL_tmpz00_2270); } 
{ /* Llib/bit.scm 562 */
obj_t BgL_tmpz00_2261;
if(
BGL_INT8P(BgL_xz00_1270))
{ /* Llib/bit.scm 562 */
BgL_tmpz00_2261 = BgL_xz00_1270
; }  else 
{ 
obj_t BgL_auxz00_2264;
BgL_auxz00_2264 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26239)), BGl_string1758z00zz__bitz00, BGl_string1729z00zz__bitz00, BgL_xz00_1270); 
FAILURE(BgL_auxz00_2264,BFALSE,BFALSE);} 
BgL_auxz00_2260 = 
BGL_BINT8_TO_INT8(BgL_tmpz00_2261); } 
BgL_tmpz00_2259 = 
BGl_bitzd2xors8zd2zz__bitz00(BgL_auxz00_2260, BgL_auxz00_2269); } 
return 
BGL_INT8_TO_BINT8(BgL_tmpz00_2259);} } 

}



/* bit-xoru8 */
BGL_EXPORTED_DEF uint8_t BGl_bitzd2xoru8zd2zz__bitz00(uint8_t BgL_xz00_55, uint8_t BgL_yz00_56)
{
{ /* Llib/bit.scm 563 */
return 
(BgL_xz00_55 ^ BgL_yz00_56);} 

}



/* &bit-xoru8 */
obj_t BGl_z62bitzd2xoru8zb0zz__bitz00(obj_t BgL_envz00_1272, obj_t BgL_xz00_1273, obj_t BgL_yz00_1274)
{
{ /* Llib/bit.scm 563 */
{ /* Llib/bit.scm 563 */
uint8_t BgL_tmpz00_2281;
{ /* Llib/bit.scm 563 */
uint8_t BgL_auxz00_2291;uint8_t BgL_auxz00_2282;
{ /* Llib/bit.scm 563 */
obj_t BgL_tmpz00_2292;
if(
BGL_UINT8P(BgL_yz00_1274))
{ /* Llib/bit.scm 563 */
BgL_tmpz00_2292 = BgL_yz00_1274
; }  else 
{ 
obj_t BgL_auxz00_2295;
BgL_auxz00_2295 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26287)), BGl_string1759z00zz__bitz00, BGl_string1731z00zz__bitz00, BgL_yz00_1274); 
FAILURE(BgL_auxz00_2295,BFALSE,BFALSE);} 
BgL_auxz00_2291 = 
BGL_BUINT8_TO_UINT8(BgL_tmpz00_2292); } 
{ /* Llib/bit.scm 563 */
obj_t BgL_tmpz00_2283;
if(
BGL_UINT8P(BgL_xz00_1273))
{ /* Llib/bit.scm 563 */
BgL_tmpz00_2283 = BgL_xz00_1273
; }  else 
{ 
obj_t BgL_auxz00_2286;
BgL_auxz00_2286 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26287)), BGl_string1759z00zz__bitz00, BGl_string1731z00zz__bitz00, BgL_xz00_1273); 
FAILURE(BgL_auxz00_2286,BFALSE,BFALSE);} 
BgL_auxz00_2282 = 
BGL_BUINT8_TO_UINT8(BgL_tmpz00_2283); } 
BgL_tmpz00_2281 = 
BGl_bitzd2xoru8zd2zz__bitz00(BgL_auxz00_2282, BgL_auxz00_2291); } 
return 
BGL_UINT8_TO_BUINT8(BgL_tmpz00_2281);} } 

}



/* bit-xors16 */
BGL_EXPORTED_DEF int16_t BGl_bitzd2xors16zd2zz__bitz00(int16_t BgL_xz00_57, int16_t BgL_yz00_58)
{
{ /* Llib/bit.scm 564 */
return 
(BgL_xz00_57 ^ BgL_yz00_58);} 

}



/* &bit-xors16 */
obj_t BGl_z62bitzd2xors16zb0zz__bitz00(obj_t BgL_envz00_1275, obj_t BgL_xz00_1276, obj_t BgL_yz00_1277)
{
{ /* Llib/bit.scm 564 */
{ /* Llib/bit.scm 564 */
int16_t BgL_tmpz00_2303;
{ /* Llib/bit.scm 564 */
int16_t BgL_auxz00_2313;int16_t BgL_auxz00_2304;
{ /* Llib/bit.scm 564 */
obj_t BgL_tmpz00_2314;
if(
BGL_INT16P(BgL_yz00_1277))
{ /* Llib/bit.scm 564 */
BgL_tmpz00_2314 = BgL_yz00_1277
; }  else 
{ 
obj_t BgL_auxz00_2317;
BgL_auxz00_2317 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26336)), BGl_string1760z00zz__bitz00, BGl_string1733z00zz__bitz00, BgL_yz00_1277); 
FAILURE(BgL_auxz00_2317,BFALSE,BFALSE);} 
BgL_auxz00_2313 = 
BGL_BINT16_TO_INT16(BgL_tmpz00_2314); } 
{ /* Llib/bit.scm 564 */
obj_t BgL_tmpz00_2305;
if(
BGL_INT16P(BgL_xz00_1276))
{ /* Llib/bit.scm 564 */
BgL_tmpz00_2305 = BgL_xz00_1276
; }  else 
{ 
obj_t BgL_auxz00_2308;
BgL_auxz00_2308 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26336)), BGl_string1760z00zz__bitz00, BGl_string1733z00zz__bitz00, BgL_xz00_1276); 
FAILURE(BgL_auxz00_2308,BFALSE,BFALSE);} 
BgL_auxz00_2304 = 
BGL_BINT16_TO_INT16(BgL_tmpz00_2305); } 
BgL_tmpz00_2303 = 
BGl_bitzd2xors16zd2zz__bitz00(BgL_auxz00_2304, BgL_auxz00_2313); } 
return 
BGL_INT16_TO_BINT16(BgL_tmpz00_2303);} } 

}



/* bit-xoru16 */
BGL_EXPORTED_DEF uint16_t BGl_bitzd2xoru16zd2zz__bitz00(uint16_t BgL_xz00_59, uint16_t BgL_yz00_60)
{
{ /* Llib/bit.scm 565 */
return 
(BgL_xz00_59 ^ BgL_yz00_60);} 

}



/* &bit-xoru16 */
obj_t BGl_z62bitzd2xoru16zb0zz__bitz00(obj_t BgL_envz00_1278, obj_t BgL_xz00_1279, obj_t BgL_yz00_1280)
{
{ /* Llib/bit.scm 565 */
{ /* Llib/bit.scm 565 */
uint16_t BgL_tmpz00_2325;
{ /* Llib/bit.scm 565 */
uint16_t BgL_auxz00_2335;uint16_t BgL_auxz00_2326;
{ /* Llib/bit.scm 565 */
obj_t BgL_tmpz00_2336;
if(
BGL_UINT16P(BgL_yz00_1280))
{ /* Llib/bit.scm 565 */
BgL_tmpz00_2336 = BgL_yz00_1280
; }  else 
{ 
obj_t BgL_auxz00_2339;
BgL_auxz00_2339 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26386)), BGl_string1761z00zz__bitz00, BGl_string1735z00zz__bitz00, BgL_yz00_1280); 
FAILURE(BgL_auxz00_2339,BFALSE,BFALSE);} 
BgL_auxz00_2335 = 
BGL_BUINT16_TO_UINT16(BgL_tmpz00_2336); } 
{ /* Llib/bit.scm 565 */
obj_t BgL_tmpz00_2327;
if(
BGL_UINT16P(BgL_xz00_1279))
{ /* Llib/bit.scm 565 */
BgL_tmpz00_2327 = BgL_xz00_1279
; }  else 
{ 
obj_t BgL_auxz00_2330;
BgL_auxz00_2330 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26386)), BGl_string1761z00zz__bitz00, BGl_string1735z00zz__bitz00, BgL_xz00_1279); 
FAILURE(BgL_auxz00_2330,BFALSE,BFALSE);} 
BgL_auxz00_2326 = 
BGL_BUINT16_TO_UINT16(BgL_tmpz00_2327); } 
BgL_tmpz00_2325 = 
BGl_bitzd2xoru16zd2zz__bitz00(BgL_auxz00_2326, BgL_auxz00_2335); } 
return 
BGL_UINT16_TO_BUINT16(BgL_tmpz00_2325);} } 

}



/* bit-xors32 */
BGL_EXPORTED_DEF int32_t BGl_bitzd2xors32zd2zz__bitz00(int32_t BgL_xz00_61, int32_t BgL_yz00_62)
{
{ /* Llib/bit.scm 566 */
return 
(BgL_xz00_61 ^ BgL_yz00_62);} 

}



/* &bit-xors32 */
obj_t BGl_z62bitzd2xors32zb0zz__bitz00(obj_t BgL_envz00_1281, obj_t BgL_xz00_1282, obj_t BgL_yz00_1283)
{
{ /* Llib/bit.scm 566 */
{ /* Llib/bit.scm 566 */
int32_t BgL_tmpz00_2347;
{ /* Llib/bit.scm 566 */
int32_t BgL_auxz00_2357;int32_t BgL_auxz00_2348;
{ /* Llib/bit.scm 566 */
obj_t BgL_tmpz00_2358;
if(
BGL_INT32P(BgL_yz00_1283))
{ /* Llib/bit.scm 566 */
BgL_tmpz00_2358 = BgL_yz00_1283
; }  else 
{ 
obj_t BgL_auxz00_2361;
BgL_auxz00_2361 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26436)), BGl_string1762z00zz__bitz00, BGl_string1737z00zz__bitz00, BgL_yz00_1283); 
FAILURE(BgL_auxz00_2361,BFALSE,BFALSE);} 
BgL_auxz00_2357 = 
BGL_BINT32_TO_INT32(BgL_tmpz00_2358); } 
{ /* Llib/bit.scm 566 */
obj_t BgL_tmpz00_2349;
if(
BGL_INT32P(BgL_xz00_1282))
{ /* Llib/bit.scm 566 */
BgL_tmpz00_2349 = BgL_xz00_1282
; }  else 
{ 
obj_t BgL_auxz00_2352;
BgL_auxz00_2352 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26436)), BGl_string1762z00zz__bitz00, BGl_string1737z00zz__bitz00, BgL_xz00_1282); 
FAILURE(BgL_auxz00_2352,BFALSE,BFALSE);} 
BgL_auxz00_2348 = 
BGL_BINT32_TO_INT32(BgL_tmpz00_2349); } 
BgL_tmpz00_2347 = 
BGl_bitzd2xors32zd2zz__bitz00(BgL_auxz00_2348, BgL_auxz00_2357); } 
return 
BGL_INT32_TO_BINT32(BgL_tmpz00_2347);} } 

}



/* bit-xoru32 */
BGL_EXPORTED_DEF uint32_t BGl_bitzd2xoru32zd2zz__bitz00(uint32_t BgL_xz00_63, uint32_t BgL_yz00_64)
{
{ /* Llib/bit.scm 567 */
return 
(BgL_xz00_63 ^ BgL_yz00_64);} 

}



/* &bit-xoru32 */
obj_t BGl_z62bitzd2xoru32zb0zz__bitz00(obj_t BgL_envz00_1284, obj_t BgL_xz00_1285, obj_t BgL_yz00_1286)
{
{ /* Llib/bit.scm 567 */
{ /* Llib/bit.scm 567 */
uint32_t BgL_tmpz00_2369;
{ /* Llib/bit.scm 567 */
uint32_t BgL_auxz00_2379;uint32_t BgL_auxz00_2370;
{ /* Llib/bit.scm 567 */
obj_t BgL_tmpz00_2380;
if(
BGL_UINT32P(BgL_yz00_1286))
{ /* Llib/bit.scm 567 */
BgL_tmpz00_2380 = BgL_yz00_1286
; }  else 
{ 
obj_t BgL_auxz00_2383;
BgL_auxz00_2383 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26486)), BGl_string1763z00zz__bitz00, BGl_string1739z00zz__bitz00, BgL_yz00_1286); 
FAILURE(BgL_auxz00_2383,BFALSE,BFALSE);} 
BgL_auxz00_2379 = 
BGL_BUINT32_TO_UINT32(BgL_tmpz00_2380); } 
{ /* Llib/bit.scm 567 */
obj_t BgL_tmpz00_2371;
if(
BGL_UINT32P(BgL_xz00_1285))
{ /* Llib/bit.scm 567 */
BgL_tmpz00_2371 = BgL_xz00_1285
; }  else 
{ 
obj_t BgL_auxz00_2374;
BgL_auxz00_2374 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26486)), BGl_string1763z00zz__bitz00, BGl_string1739z00zz__bitz00, BgL_xz00_1285); 
FAILURE(BgL_auxz00_2374,BFALSE,BFALSE);} 
BgL_auxz00_2370 = 
BGL_BUINT32_TO_UINT32(BgL_tmpz00_2371); } 
BgL_tmpz00_2369 = 
BGl_bitzd2xoru32zd2zz__bitz00(BgL_auxz00_2370, BgL_auxz00_2379); } 
return 
BGL_UINT32_TO_BUINT32(BgL_tmpz00_2369);} } 

}



/* bit-xors64 */
BGL_EXPORTED_DEF int64_t BGl_bitzd2xors64zd2zz__bitz00(int64_t BgL_xz00_65, int64_t BgL_yz00_66)
{
{ /* Llib/bit.scm 568 */
return 
(BgL_xz00_65 ^ BgL_yz00_66);} 

}



/* &bit-xors64 */
obj_t BGl_z62bitzd2xors64zb0zz__bitz00(obj_t BgL_envz00_1287, obj_t BgL_xz00_1288, obj_t BgL_yz00_1289)
{
{ /* Llib/bit.scm 568 */
{ /* Llib/bit.scm 568 */
int64_t BgL_tmpz00_2391;
{ /* Llib/bit.scm 568 */
int64_t BgL_auxz00_2401;int64_t BgL_auxz00_2392;
{ /* Llib/bit.scm 568 */
obj_t BgL_tmpz00_2402;
if(
BGL_INT64P(BgL_yz00_1289))
{ /* Llib/bit.scm 568 */
BgL_tmpz00_2402 = BgL_yz00_1289
; }  else 
{ 
obj_t BgL_auxz00_2405;
BgL_auxz00_2405 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26536)), BGl_string1764z00zz__bitz00, BGl_string1741z00zz__bitz00, BgL_yz00_1289); 
FAILURE(BgL_auxz00_2405,BFALSE,BFALSE);} 
BgL_auxz00_2401 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_2402); } 
{ /* Llib/bit.scm 568 */
obj_t BgL_tmpz00_2393;
if(
BGL_INT64P(BgL_xz00_1288))
{ /* Llib/bit.scm 568 */
BgL_tmpz00_2393 = BgL_xz00_1288
; }  else 
{ 
obj_t BgL_auxz00_2396;
BgL_auxz00_2396 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26536)), BGl_string1764z00zz__bitz00, BGl_string1741z00zz__bitz00, BgL_xz00_1288); 
FAILURE(BgL_auxz00_2396,BFALSE,BFALSE);} 
BgL_auxz00_2392 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_2393); } 
BgL_tmpz00_2391 = 
BGl_bitzd2xors64zd2zz__bitz00(BgL_auxz00_2392, BgL_auxz00_2401); } 
return 
BGL_INT64_TO_BINT64(BgL_tmpz00_2391);} } 

}



/* bit-xoru64 */
BGL_EXPORTED_DEF uint64_t BGl_bitzd2xoru64zd2zz__bitz00(uint64_t BgL_xz00_67, uint64_t BgL_yz00_68)
{
{ /* Llib/bit.scm 569 */
return 
(BgL_xz00_67 ^ BgL_yz00_68);} 

}



/* &bit-xoru64 */
obj_t BGl_z62bitzd2xoru64zb0zz__bitz00(obj_t BgL_envz00_1290, obj_t BgL_xz00_1291, obj_t BgL_yz00_1292)
{
{ /* Llib/bit.scm 569 */
{ /* Llib/bit.scm 569 */
uint64_t BgL_tmpz00_2413;
{ /* Llib/bit.scm 569 */
uint64_t BgL_auxz00_2423;uint64_t BgL_auxz00_2414;
{ /* Llib/bit.scm 569 */
obj_t BgL_tmpz00_2424;
if(
BGL_UINT64P(BgL_yz00_1292))
{ /* Llib/bit.scm 569 */
BgL_tmpz00_2424 = BgL_yz00_1292
; }  else 
{ 
obj_t BgL_auxz00_2427;
BgL_auxz00_2427 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26586)), BGl_string1765z00zz__bitz00, BGl_string1743z00zz__bitz00, BgL_yz00_1292); 
FAILURE(BgL_auxz00_2427,BFALSE,BFALSE);} 
BgL_auxz00_2423 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_2424); } 
{ /* Llib/bit.scm 569 */
obj_t BgL_tmpz00_2415;
if(
BGL_UINT64P(BgL_xz00_1291))
{ /* Llib/bit.scm 569 */
BgL_tmpz00_2415 = BgL_xz00_1291
; }  else 
{ 
obj_t BgL_auxz00_2418;
BgL_auxz00_2418 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26586)), BGl_string1765z00zz__bitz00, BGl_string1743z00zz__bitz00, BgL_xz00_1291); 
FAILURE(BgL_auxz00_2418,BFALSE,BFALSE);} 
BgL_auxz00_2414 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_2415); } 
BgL_tmpz00_2413 = 
BGl_bitzd2xoru64zd2zz__bitz00(BgL_auxz00_2414, BgL_auxz00_2423); } 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_2413);} } 

}



/* bit-not */
BGL_EXPORTED_DEF long BGl_bitzd2notzd2zz__bitz00(long BgL_xz00_69)
{
{ /* Llib/bit.scm 574 */
return 
~(BgL_xz00_69);} 

}



/* &bit-not */
obj_t BGl_z62bitzd2notzb0zz__bitz00(obj_t BgL_envz00_1293, obj_t BgL_xz00_1294)
{
{ /* Llib/bit.scm 574 */
{ /* Llib/bit.scm 574 */
long BgL_tmpz00_2435;
{ /* Llib/bit.scm 574 */
long BgL_auxz00_2436;
{ /* Llib/bit.scm 574 */
obj_t BgL_tmpz00_2437;
if(
INTEGERP(BgL_xz00_1294))
{ /* Llib/bit.scm 574 */
BgL_tmpz00_2437 = BgL_xz00_1294
; }  else 
{ 
obj_t BgL_auxz00_2440;
BgL_auxz00_2440 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26854)), BGl_string1766z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_xz00_1294); 
FAILURE(BgL_auxz00_2440,BFALSE,BFALSE);} 
BgL_auxz00_2436 = 
(long)CINT(BgL_tmpz00_2437); } 
BgL_tmpz00_2435 = 
BGl_bitzd2notzd2zz__bitz00(BgL_auxz00_2436); } 
return 
BINT(BgL_tmpz00_2435);} } 

}



/* bit-notelong */
BGL_EXPORTED_DEF long BGl_bitzd2notelongzd2zz__bitz00(long BgL_xz00_70)
{
{ /* Llib/bit.scm 575 */
return 
~(BgL_xz00_70);} 

}



/* &bit-notelong */
obj_t BGl_z62bitzd2notelongzb0zz__bitz00(obj_t BgL_envz00_1295, obj_t BgL_xz00_1296)
{
{ /* Llib/bit.scm 575 */
{ /* Llib/bit.scm 575 */
long BgL_tmpz00_2448;
{ /* Llib/bit.scm 575 */
long BgL_auxz00_2449;
{ /* Llib/bit.scm 575 */
obj_t BgL_tmpz00_2450;
if(
ELONGP(BgL_xz00_1296))
{ /* Llib/bit.scm 575 */
BgL_tmpz00_2450 = BgL_xz00_1296
; }  else 
{ 
obj_t BgL_auxz00_2453;
BgL_auxz00_2453 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26900)), BGl_string1767z00zz__bitz00, BGl_string1725z00zz__bitz00, BgL_xz00_1296); 
FAILURE(BgL_auxz00_2453,BFALSE,BFALSE);} 
BgL_auxz00_2449 = 
BELONG_TO_LONG(BgL_tmpz00_2450); } 
BgL_tmpz00_2448 = 
BGl_bitzd2notelongzd2zz__bitz00(BgL_auxz00_2449); } 
return 
make_belong(BgL_tmpz00_2448);} } 

}



/* bit-notllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2notllongzd2zz__bitz00(BGL_LONGLONG_T BgL_xz00_71)
{
{ /* Llib/bit.scm 576 */
return 
~(BgL_xz00_71);} 

}



/* &bit-notllong */
obj_t BGl_z62bitzd2notllongzb0zz__bitz00(obj_t BgL_envz00_1297, obj_t BgL_xz00_1298)
{
{ /* Llib/bit.scm 576 */
{ /* Llib/bit.scm 576 */
BGL_LONGLONG_T BgL_tmpz00_2461;
{ /* Llib/bit.scm 576 */
BGL_LONGLONG_T BgL_auxz00_2462;
{ /* Llib/bit.scm 576 */
obj_t BgL_tmpz00_2463;
if(
LLONGP(BgL_xz00_1298))
{ /* Llib/bit.scm 576 */
BgL_tmpz00_2463 = BgL_xz00_1298
; }  else 
{ 
obj_t BgL_auxz00_2466;
BgL_auxz00_2466 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26951)), BGl_string1768z00zz__bitz00, BGl_string1727z00zz__bitz00, BgL_xz00_1298); 
FAILURE(BgL_auxz00_2466,BFALSE,BFALSE);} 
BgL_auxz00_2462 = 
BLLONG_TO_LLONG(BgL_tmpz00_2463); } 
BgL_tmpz00_2461 = 
BGl_bitzd2notllongzd2zz__bitz00(BgL_auxz00_2462); } 
return 
make_bllong(BgL_tmpz00_2461);} } 

}



/* bit-nots8 */
BGL_EXPORTED_DEF int8_t BGl_bitzd2nots8zd2zz__bitz00(int8_t BgL_xz00_72)
{
{ /* Llib/bit.scm 577 */
return 
~(BgL_xz00_72);} 

}



/* &bit-nots8 */
obj_t BGl_z62bitzd2nots8zb0zz__bitz00(obj_t BgL_envz00_1299, obj_t BgL_xz00_1300)
{
{ /* Llib/bit.scm 577 */
{ /* Llib/bit.scm 577 */
int8_t BgL_tmpz00_2474;
{ /* Llib/bit.scm 577 */
int8_t BgL_auxz00_2475;
{ /* Llib/bit.scm 577 */
obj_t BgL_tmpz00_2476;
if(
BGL_INT8P(BgL_xz00_1300))
{ /* Llib/bit.scm 577 */
BgL_tmpz00_2476 = BgL_xz00_1300
; }  else 
{ 
obj_t BgL_auxz00_2479;
BgL_auxz00_2479 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)26999)), BGl_string1769z00zz__bitz00, BGl_string1729z00zz__bitz00, BgL_xz00_1300); 
FAILURE(BgL_auxz00_2479,BFALSE,BFALSE);} 
BgL_auxz00_2475 = 
BGL_BINT8_TO_INT8(BgL_tmpz00_2476); } 
BgL_tmpz00_2474 = 
BGl_bitzd2nots8zd2zz__bitz00(BgL_auxz00_2475); } 
return 
BGL_INT8_TO_BINT8(BgL_tmpz00_2474);} } 

}



/* bit-notu8 */
BGL_EXPORTED_DEF uint8_t BGl_bitzd2notu8zd2zz__bitz00(uint8_t BgL_xz00_73)
{
{ /* Llib/bit.scm 578 */
return 
~(BgL_xz00_73);} 

}



/* &bit-notu8 */
obj_t BGl_z62bitzd2notu8zb0zz__bitz00(obj_t BgL_envz00_1301, obj_t BgL_xz00_1302)
{
{ /* Llib/bit.scm 578 */
{ /* Llib/bit.scm 578 */
uint8_t BgL_tmpz00_2487;
{ /* Llib/bit.scm 578 */
uint8_t BgL_auxz00_2488;
{ /* Llib/bit.scm 578 */
obj_t BgL_tmpz00_2489;
if(
BGL_UINT8P(BgL_xz00_1302))
{ /* Llib/bit.scm 578 */
BgL_tmpz00_2489 = BgL_xz00_1302
; }  else 
{ 
obj_t BgL_auxz00_2492;
BgL_auxz00_2492 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27043)), BGl_string1770z00zz__bitz00, BGl_string1731z00zz__bitz00, BgL_xz00_1302); 
FAILURE(BgL_auxz00_2492,BFALSE,BFALSE);} 
BgL_auxz00_2488 = 
BGL_BUINT8_TO_UINT8(BgL_tmpz00_2489); } 
BgL_tmpz00_2487 = 
BGl_bitzd2notu8zd2zz__bitz00(BgL_auxz00_2488); } 
return 
BGL_UINT8_TO_BUINT8(BgL_tmpz00_2487);} } 

}



/* bit-nots16 */
BGL_EXPORTED_DEF int16_t BGl_bitzd2nots16zd2zz__bitz00(int16_t BgL_xz00_74)
{
{ /* Llib/bit.scm 579 */
return 
~(BgL_xz00_74);} 

}



/* &bit-nots16 */
obj_t BGl_z62bitzd2nots16zb0zz__bitz00(obj_t BgL_envz00_1303, obj_t BgL_xz00_1304)
{
{ /* Llib/bit.scm 579 */
{ /* Llib/bit.scm 579 */
int16_t BgL_tmpz00_2500;
{ /* Llib/bit.scm 579 */
int16_t BgL_auxz00_2501;
{ /* Llib/bit.scm 579 */
obj_t BgL_tmpz00_2502;
if(
BGL_INT16P(BgL_xz00_1304))
{ /* Llib/bit.scm 579 */
BgL_tmpz00_2502 = BgL_xz00_1304
; }  else 
{ 
obj_t BgL_auxz00_2505;
BgL_auxz00_2505 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27088)), BGl_string1771z00zz__bitz00, BGl_string1733z00zz__bitz00, BgL_xz00_1304); 
FAILURE(BgL_auxz00_2505,BFALSE,BFALSE);} 
BgL_auxz00_2501 = 
BGL_BINT16_TO_INT16(BgL_tmpz00_2502); } 
BgL_tmpz00_2500 = 
BGl_bitzd2nots16zd2zz__bitz00(BgL_auxz00_2501); } 
return 
BGL_INT16_TO_BINT16(BgL_tmpz00_2500);} } 

}



/* bit-notu16 */
BGL_EXPORTED_DEF uint16_t BGl_bitzd2notu16zd2zz__bitz00(uint16_t BgL_xz00_75)
{
{ /* Llib/bit.scm 580 */
return 
~(BgL_xz00_75);} 

}



/* &bit-notu16 */
obj_t BGl_z62bitzd2notu16zb0zz__bitz00(obj_t BgL_envz00_1305, obj_t BgL_xz00_1306)
{
{ /* Llib/bit.scm 580 */
{ /* Llib/bit.scm 580 */
uint16_t BgL_tmpz00_2513;
{ /* Llib/bit.scm 580 */
uint16_t BgL_auxz00_2514;
{ /* Llib/bit.scm 580 */
obj_t BgL_tmpz00_2515;
if(
BGL_UINT16P(BgL_xz00_1306))
{ /* Llib/bit.scm 580 */
BgL_tmpz00_2515 = BgL_xz00_1306
; }  else 
{ 
obj_t BgL_auxz00_2518;
BgL_auxz00_2518 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27134)), BGl_string1772z00zz__bitz00, BGl_string1735z00zz__bitz00, BgL_xz00_1306); 
FAILURE(BgL_auxz00_2518,BFALSE,BFALSE);} 
BgL_auxz00_2514 = 
BGL_BUINT16_TO_UINT16(BgL_tmpz00_2515); } 
BgL_tmpz00_2513 = 
BGl_bitzd2notu16zd2zz__bitz00(BgL_auxz00_2514); } 
return 
BGL_UINT16_TO_BUINT16(BgL_tmpz00_2513);} } 

}



/* bit-nots32 */
BGL_EXPORTED_DEF int32_t BGl_bitzd2nots32zd2zz__bitz00(int32_t BgL_xz00_76)
{
{ /* Llib/bit.scm 581 */
return 
~(BgL_xz00_76);} 

}



/* &bit-nots32 */
obj_t BGl_z62bitzd2nots32zb0zz__bitz00(obj_t BgL_envz00_1307, obj_t BgL_xz00_1308)
{
{ /* Llib/bit.scm 581 */
{ /* Llib/bit.scm 581 */
int32_t BgL_tmpz00_2526;
{ /* Llib/bit.scm 581 */
int32_t BgL_auxz00_2527;
{ /* Llib/bit.scm 581 */
obj_t BgL_tmpz00_2528;
if(
BGL_INT32P(BgL_xz00_1308))
{ /* Llib/bit.scm 581 */
BgL_tmpz00_2528 = BgL_xz00_1308
; }  else 
{ 
obj_t BgL_auxz00_2531;
BgL_auxz00_2531 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27180)), BGl_string1773z00zz__bitz00, BGl_string1737z00zz__bitz00, BgL_xz00_1308); 
FAILURE(BgL_auxz00_2531,BFALSE,BFALSE);} 
BgL_auxz00_2527 = 
BGL_BINT32_TO_INT32(BgL_tmpz00_2528); } 
BgL_tmpz00_2526 = 
BGl_bitzd2nots32zd2zz__bitz00(BgL_auxz00_2527); } 
return 
BGL_INT32_TO_BINT32(BgL_tmpz00_2526);} } 

}



/* bit-notu32 */
BGL_EXPORTED_DEF uint32_t BGl_bitzd2notu32zd2zz__bitz00(uint32_t BgL_xz00_77)
{
{ /* Llib/bit.scm 582 */
return 
~(BgL_xz00_77);} 

}



/* &bit-notu32 */
obj_t BGl_z62bitzd2notu32zb0zz__bitz00(obj_t BgL_envz00_1309, obj_t BgL_xz00_1310)
{
{ /* Llib/bit.scm 582 */
{ /* Llib/bit.scm 582 */
uint32_t BgL_tmpz00_2539;
{ /* Llib/bit.scm 582 */
uint32_t BgL_auxz00_2540;
{ /* Llib/bit.scm 582 */
obj_t BgL_tmpz00_2541;
if(
BGL_UINT32P(BgL_xz00_1310))
{ /* Llib/bit.scm 582 */
BgL_tmpz00_2541 = BgL_xz00_1310
; }  else 
{ 
obj_t BgL_auxz00_2544;
BgL_auxz00_2544 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27226)), BGl_string1774z00zz__bitz00, BGl_string1739z00zz__bitz00, BgL_xz00_1310); 
FAILURE(BgL_auxz00_2544,BFALSE,BFALSE);} 
BgL_auxz00_2540 = 
BGL_BUINT32_TO_UINT32(BgL_tmpz00_2541); } 
BgL_tmpz00_2539 = 
BGl_bitzd2notu32zd2zz__bitz00(BgL_auxz00_2540); } 
return 
BGL_UINT32_TO_BUINT32(BgL_tmpz00_2539);} } 

}



/* bit-nots64 */
BGL_EXPORTED_DEF int64_t BGl_bitzd2nots64zd2zz__bitz00(int64_t BgL_xz00_78)
{
{ /* Llib/bit.scm 583 */
return 
~(BgL_xz00_78);} 

}



/* &bit-nots64 */
obj_t BGl_z62bitzd2nots64zb0zz__bitz00(obj_t BgL_envz00_1311, obj_t BgL_xz00_1312)
{
{ /* Llib/bit.scm 583 */
{ /* Llib/bit.scm 583 */
int64_t BgL_tmpz00_2552;
{ /* Llib/bit.scm 583 */
int64_t BgL_auxz00_2553;
{ /* Llib/bit.scm 583 */
obj_t BgL_tmpz00_2554;
if(
BGL_INT64P(BgL_xz00_1312))
{ /* Llib/bit.scm 583 */
BgL_tmpz00_2554 = BgL_xz00_1312
; }  else 
{ 
obj_t BgL_auxz00_2557;
BgL_auxz00_2557 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27272)), BGl_string1775z00zz__bitz00, BGl_string1741z00zz__bitz00, BgL_xz00_1312); 
FAILURE(BgL_auxz00_2557,BFALSE,BFALSE);} 
BgL_auxz00_2553 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_2554); } 
BgL_tmpz00_2552 = 
BGl_bitzd2nots64zd2zz__bitz00(BgL_auxz00_2553); } 
return 
BGL_INT64_TO_BINT64(BgL_tmpz00_2552);} } 

}



/* bit-notu64 */
BGL_EXPORTED_DEF uint64_t BGl_bitzd2notu64zd2zz__bitz00(uint64_t BgL_xz00_79)
{
{ /* Llib/bit.scm 584 */
return 
~(BgL_xz00_79);} 

}



/* &bit-notu64 */
obj_t BGl_z62bitzd2notu64zb0zz__bitz00(obj_t BgL_envz00_1313, obj_t BgL_xz00_1314)
{
{ /* Llib/bit.scm 584 */
{ /* Llib/bit.scm 584 */
uint64_t BgL_tmpz00_2565;
{ /* Llib/bit.scm 584 */
uint64_t BgL_auxz00_2566;
{ /* Llib/bit.scm 584 */
obj_t BgL_tmpz00_2567;
if(
BGL_UINT64P(BgL_xz00_1314))
{ /* Llib/bit.scm 584 */
BgL_tmpz00_2567 = BgL_xz00_1314
; }  else 
{ 
obj_t BgL_auxz00_2570;
BgL_auxz00_2570 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27318)), BGl_string1776z00zz__bitz00, BGl_string1743z00zz__bitz00, BgL_xz00_1314); 
FAILURE(BgL_auxz00_2570,BFALSE,BFALSE);} 
BgL_auxz00_2566 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_2567); } 
BgL_tmpz00_2565 = 
BGl_bitzd2notu64zd2zz__bitz00(BgL_auxz00_2566); } 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_2565);} } 

}



/* bit-rsh */
BGL_EXPORTED_DEF long BGl_bitzd2rshzd2zz__bitz00(long BgL_xz00_80, long BgL_yz00_81)
{
{ /* Llib/bit.scm 589 */
return 
(BgL_xz00_80 >> 
(int)(BgL_yz00_81));} 

}



/* &bit-rsh */
obj_t BGl_z62bitzd2rshzb0zz__bitz00(obj_t BgL_envz00_1315, obj_t BgL_xz00_1316, obj_t BgL_yz00_1317)
{
{ /* Llib/bit.scm 589 */
{ /* Llib/bit.scm 589 */
long BgL_tmpz00_2579;
{ /* Llib/bit.scm 589 */
long BgL_auxz00_2589;long BgL_auxz00_2580;
{ /* Llib/bit.scm 589 */
obj_t BgL_tmpz00_2590;
if(
INTEGERP(BgL_yz00_1317))
{ /* Llib/bit.scm 589 */
BgL_tmpz00_2590 = BgL_yz00_1317
; }  else 
{ 
obj_t BgL_auxz00_2593;
BgL_auxz00_2593 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27589)), BGl_string1777z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1317); 
FAILURE(BgL_auxz00_2593,BFALSE,BFALSE);} 
BgL_auxz00_2589 = 
(long)CINT(BgL_tmpz00_2590); } 
{ /* Llib/bit.scm 589 */
obj_t BgL_tmpz00_2581;
if(
INTEGERP(BgL_xz00_1316))
{ /* Llib/bit.scm 589 */
BgL_tmpz00_2581 = BgL_xz00_1316
; }  else 
{ 
obj_t BgL_auxz00_2584;
BgL_auxz00_2584 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27589)), BGl_string1777z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_xz00_1316); 
FAILURE(BgL_auxz00_2584,BFALSE,BFALSE);} 
BgL_auxz00_2580 = 
(long)CINT(BgL_tmpz00_2581); } 
BgL_tmpz00_2579 = 
BGl_bitzd2rshzd2zz__bitz00(BgL_auxz00_2580, BgL_auxz00_2589); } 
return 
BINT(BgL_tmpz00_2579);} } 

}



/* bit-rshelong */
BGL_EXPORTED_DEF long BGl_bitzd2rshelongzd2zz__bitz00(long BgL_xz00_82, long BgL_yz00_83)
{
{ /* Llib/bit.scm 590 */
return 
(BgL_xz00_82 >> 
(int)(BgL_yz00_83));} 

}



/* &bit-rshelong */
obj_t BGl_z62bitzd2rshelongzb0zz__bitz00(obj_t BgL_envz00_1318, obj_t BgL_xz00_1319, obj_t BgL_yz00_1320)
{
{ /* Llib/bit.scm 590 */
{ /* Llib/bit.scm 590 */
long BgL_tmpz00_2602;
{ /* Llib/bit.scm 590 */
long BgL_auxz00_2612;long BgL_auxz00_2603;
{ /* Llib/bit.scm 590 */
obj_t BgL_tmpz00_2613;
if(
INTEGERP(BgL_yz00_1320))
{ /* Llib/bit.scm 590 */
BgL_tmpz00_2613 = BgL_yz00_1320
; }  else 
{ 
obj_t BgL_auxz00_2616;
BgL_auxz00_2616 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27639)), BGl_string1778z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1320); 
FAILURE(BgL_auxz00_2616,BFALSE,BFALSE);} 
BgL_auxz00_2612 = 
(long)CINT(BgL_tmpz00_2613); } 
{ /* Llib/bit.scm 590 */
obj_t BgL_tmpz00_2604;
if(
ELONGP(BgL_xz00_1319))
{ /* Llib/bit.scm 590 */
BgL_tmpz00_2604 = BgL_xz00_1319
; }  else 
{ 
obj_t BgL_auxz00_2607;
BgL_auxz00_2607 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27639)), BGl_string1778z00zz__bitz00, BGl_string1725z00zz__bitz00, BgL_xz00_1319); 
FAILURE(BgL_auxz00_2607,BFALSE,BFALSE);} 
BgL_auxz00_2603 = 
BELONG_TO_LONG(BgL_tmpz00_2604); } 
BgL_tmpz00_2602 = 
BGl_bitzd2rshelongzd2zz__bitz00(BgL_auxz00_2603, BgL_auxz00_2612); } 
return 
make_belong(BgL_tmpz00_2602);} } 

}



/* bit-rshllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2rshllongzd2zz__bitz00(BGL_LONGLONG_T BgL_xz00_84, long BgL_yz00_85)
{
{ /* Llib/bit.scm 591 */
return 
(BgL_xz00_84 >> 
(int)(BgL_yz00_85));} 

}



/* &bit-rshllong */
obj_t BGl_z62bitzd2rshllongzb0zz__bitz00(obj_t BgL_envz00_1321, obj_t BgL_xz00_1322, obj_t BgL_yz00_1323)
{
{ /* Llib/bit.scm 591 */
{ /* Llib/bit.scm 591 */
BGL_LONGLONG_T BgL_tmpz00_2625;
{ /* Llib/bit.scm 591 */
long BgL_auxz00_2635;BGL_LONGLONG_T BgL_auxz00_2626;
{ /* Llib/bit.scm 591 */
obj_t BgL_tmpz00_2636;
if(
INTEGERP(BgL_yz00_1323))
{ /* Llib/bit.scm 591 */
BgL_tmpz00_2636 = BgL_yz00_1323
; }  else 
{ 
obj_t BgL_auxz00_2639;
BgL_auxz00_2639 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27694)), BGl_string1779z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1323); 
FAILURE(BgL_auxz00_2639,BFALSE,BFALSE);} 
BgL_auxz00_2635 = 
(long)CINT(BgL_tmpz00_2636); } 
{ /* Llib/bit.scm 591 */
obj_t BgL_tmpz00_2627;
if(
LLONGP(BgL_xz00_1322))
{ /* Llib/bit.scm 591 */
BgL_tmpz00_2627 = BgL_xz00_1322
; }  else 
{ 
obj_t BgL_auxz00_2630;
BgL_auxz00_2630 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27694)), BGl_string1779z00zz__bitz00, BGl_string1727z00zz__bitz00, BgL_xz00_1322); 
FAILURE(BgL_auxz00_2630,BFALSE,BFALSE);} 
BgL_auxz00_2626 = 
BLLONG_TO_LLONG(BgL_tmpz00_2627); } 
BgL_tmpz00_2625 = 
BGl_bitzd2rshllongzd2zz__bitz00(BgL_auxz00_2626, BgL_auxz00_2635); } 
return 
make_bllong(BgL_tmpz00_2625);} } 

}



/* bit-rshs8 */
BGL_EXPORTED_DEF int8_t BGl_bitzd2rshs8zd2zz__bitz00(int8_t BgL_xz00_86, long BgL_yz00_87)
{
{ /* Llib/bit.scm 592 */
return 
(BgL_xz00_86 >> 
(int)(BgL_yz00_87));} 

}



/* &bit-rshs8 */
obj_t BGl_z62bitzd2rshs8zb0zz__bitz00(obj_t BgL_envz00_1324, obj_t BgL_xz00_1325, obj_t BgL_yz00_1326)
{
{ /* Llib/bit.scm 592 */
{ /* Llib/bit.scm 592 */
int8_t BgL_tmpz00_2648;
{ /* Llib/bit.scm 592 */
long BgL_auxz00_2658;int8_t BgL_auxz00_2649;
{ /* Llib/bit.scm 592 */
obj_t BgL_tmpz00_2659;
if(
INTEGERP(BgL_yz00_1326))
{ /* Llib/bit.scm 592 */
BgL_tmpz00_2659 = BgL_yz00_1326
; }  else 
{ 
obj_t BgL_auxz00_2662;
BgL_auxz00_2662 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27746)), BGl_string1780z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1326); 
FAILURE(BgL_auxz00_2662,BFALSE,BFALSE);} 
BgL_auxz00_2658 = 
(long)CINT(BgL_tmpz00_2659); } 
{ /* Llib/bit.scm 592 */
obj_t BgL_tmpz00_2650;
if(
BGL_INT8P(BgL_xz00_1325))
{ /* Llib/bit.scm 592 */
BgL_tmpz00_2650 = BgL_xz00_1325
; }  else 
{ 
obj_t BgL_auxz00_2653;
BgL_auxz00_2653 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27746)), BGl_string1780z00zz__bitz00, BGl_string1729z00zz__bitz00, BgL_xz00_1325); 
FAILURE(BgL_auxz00_2653,BFALSE,BFALSE);} 
BgL_auxz00_2649 = 
BGL_BINT8_TO_INT8(BgL_tmpz00_2650); } 
BgL_tmpz00_2648 = 
BGl_bitzd2rshs8zd2zz__bitz00(BgL_auxz00_2649, BgL_auxz00_2658); } 
return 
BGL_INT8_TO_BINT8(BgL_tmpz00_2648);} } 

}



/* bit-rshu8 */
BGL_EXPORTED_DEF uint8_t BGl_bitzd2rshu8zd2zz__bitz00(uint8_t BgL_xz00_88, long BgL_yz00_89)
{
{ /* Llib/bit.scm 593 */
return 
(BgL_xz00_88 >> 
(int)(BgL_yz00_89));} 

}



/* &bit-rshu8 */
obj_t BGl_z62bitzd2rshu8zb0zz__bitz00(obj_t BgL_envz00_1327, obj_t BgL_xz00_1328, obj_t BgL_yz00_1329)
{
{ /* Llib/bit.scm 593 */
{ /* Llib/bit.scm 593 */
uint8_t BgL_tmpz00_2671;
{ /* Llib/bit.scm 593 */
long BgL_auxz00_2681;uint8_t BgL_auxz00_2672;
{ /* Llib/bit.scm 593 */
obj_t BgL_tmpz00_2682;
if(
INTEGERP(BgL_yz00_1329))
{ /* Llib/bit.scm 593 */
BgL_tmpz00_2682 = BgL_yz00_1329
; }  else 
{ 
obj_t BgL_auxz00_2685;
BgL_auxz00_2685 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27794)), BGl_string1781z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1329); 
FAILURE(BgL_auxz00_2685,BFALSE,BFALSE);} 
BgL_auxz00_2681 = 
(long)CINT(BgL_tmpz00_2682); } 
{ /* Llib/bit.scm 593 */
obj_t BgL_tmpz00_2673;
if(
BGL_UINT8P(BgL_xz00_1328))
{ /* Llib/bit.scm 593 */
BgL_tmpz00_2673 = BgL_xz00_1328
; }  else 
{ 
obj_t BgL_auxz00_2676;
BgL_auxz00_2676 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27794)), BGl_string1781z00zz__bitz00, BGl_string1731z00zz__bitz00, BgL_xz00_1328); 
FAILURE(BgL_auxz00_2676,BFALSE,BFALSE);} 
BgL_auxz00_2672 = 
BGL_BUINT8_TO_UINT8(BgL_tmpz00_2673); } 
BgL_tmpz00_2671 = 
BGl_bitzd2rshu8zd2zz__bitz00(BgL_auxz00_2672, BgL_auxz00_2681); } 
return 
BGL_UINT8_TO_BUINT8(BgL_tmpz00_2671);} } 

}



/* bit-rshs16 */
BGL_EXPORTED_DEF int16_t BGl_bitzd2rshs16zd2zz__bitz00(int16_t BgL_xz00_90, long BgL_yz00_91)
{
{ /* Llib/bit.scm 594 */
return 
(BgL_xz00_90 >> 
(int)(BgL_yz00_91));} 

}



/* &bit-rshs16 */
obj_t BGl_z62bitzd2rshs16zb0zz__bitz00(obj_t BgL_envz00_1330, obj_t BgL_xz00_1331, obj_t BgL_yz00_1332)
{
{ /* Llib/bit.scm 594 */
{ /* Llib/bit.scm 594 */
int16_t BgL_tmpz00_2694;
{ /* Llib/bit.scm 594 */
long BgL_auxz00_2704;int16_t BgL_auxz00_2695;
{ /* Llib/bit.scm 594 */
obj_t BgL_tmpz00_2705;
if(
INTEGERP(BgL_yz00_1332))
{ /* Llib/bit.scm 594 */
BgL_tmpz00_2705 = BgL_yz00_1332
; }  else 
{ 
obj_t BgL_auxz00_2708;
BgL_auxz00_2708 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27843)), BGl_string1782z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1332); 
FAILURE(BgL_auxz00_2708,BFALSE,BFALSE);} 
BgL_auxz00_2704 = 
(long)CINT(BgL_tmpz00_2705); } 
{ /* Llib/bit.scm 594 */
obj_t BgL_tmpz00_2696;
if(
BGL_INT16P(BgL_xz00_1331))
{ /* Llib/bit.scm 594 */
BgL_tmpz00_2696 = BgL_xz00_1331
; }  else 
{ 
obj_t BgL_auxz00_2699;
BgL_auxz00_2699 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27843)), BGl_string1782z00zz__bitz00, BGl_string1733z00zz__bitz00, BgL_xz00_1331); 
FAILURE(BgL_auxz00_2699,BFALSE,BFALSE);} 
BgL_auxz00_2695 = 
BGL_BINT16_TO_INT16(BgL_tmpz00_2696); } 
BgL_tmpz00_2694 = 
BGl_bitzd2rshs16zd2zz__bitz00(BgL_auxz00_2695, BgL_auxz00_2704); } 
return 
BGL_INT16_TO_BINT16(BgL_tmpz00_2694);} } 

}



/* bit-rshu16 */
BGL_EXPORTED_DEF int16_t BGl_bitzd2rshu16zd2zz__bitz00(int16_t BgL_xz00_92, long BgL_yz00_93)
{
{ /* Llib/bit.scm 595 */
{ /* Llib/bit.scm 595 */
uint16_t BgL_tmpz00_2715;
BgL_tmpz00_2715 = 
(
(uint16_t)(BgL_xz00_92) >> 
(int)(BgL_yz00_93)); 
return 
(int16_t)(BgL_tmpz00_2715);} } 

}



/* &bit-rshu16 */
obj_t BGl_z62bitzd2rshu16zb0zz__bitz00(obj_t BgL_envz00_1333, obj_t BgL_xz00_1334, obj_t BgL_yz00_1335)
{
{ /* Llib/bit.scm 595 */
{ /* Llib/bit.scm 595 */
int16_t BgL_tmpz00_2720;
{ /* Llib/bit.scm 595 */
long BgL_auxz00_2730;int16_t BgL_auxz00_2721;
{ /* Llib/bit.scm 595 */
obj_t BgL_tmpz00_2731;
if(
INTEGERP(BgL_yz00_1335))
{ /* Llib/bit.scm 595 */
BgL_tmpz00_2731 = BgL_yz00_1335
; }  else 
{ 
obj_t BgL_auxz00_2734;
BgL_auxz00_2734 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27893)), BGl_string1783z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1335); 
FAILURE(BgL_auxz00_2734,BFALSE,BFALSE);} 
BgL_auxz00_2730 = 
(long)CINT(BgL_tmpz00_2731); } 
{ /* Llib/bit.scm 595 */
obj_t BgL_tmpz00_2722;
if(
BGL_INT16P(BgL_xz00_1334))
{ /* Llib/bit.scm 595 */
BgL_tmpz00_2722 = BgL_xz00_1334
; }  else 
{ 
obj_t BgL_auxz00_2725;
BgL_auxz00_2725 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27893)), BGl_string1783z00zz__bitz00, BGl_string1733z00zz__bitz00, BgL_xz00_1334); 
FAILURE(BgL_auxz00_2725,BFALSE,BFALSE);} 
BgL_auxz00_2721 = 
BGL_BINT16_TO_INT16(BgL_tmpz00_2722); } 
BgL_tmpz00_2720 = 
BGl_bitzd2rshu16zd2zz__bitz00(BgL_auxz00_2721, BgL_auxz00_2730); } 
return 
BGL_INT16_TO_BINT16(BgL_tmpz00_2720);} } 

}



/* bit-rshs32 */
BGL_EXPORTED_DEF int32_t BGl_bitzd2rshs32zd2zz__bitz00(int32_t BgL_xz00_94, long BgL_yz00_95)
{
{ /* Llib/bit.scm 596 */
return 
(BgL_xz00_94 >> 
(int)(BgL_yz00_95));} 

}



/* &bit-rshs32 */
obj_t BGl_z62bitzd2rshs32zb0zz__bitz00(obj_t BgL_envz00_1336, obj_t BgL_xz00_1337, obj_t BgL_yz00_1338)
{
{ /* Llib/bit.scm 596 */
{ /* Llib/bit.scm 596 */
int32_t BgL_tmpz00_2743;
{ /* Llib/bit.scm 596 */
long BgL_auxz00_2753;int32_t BgL_auxz00_2744;
{ /* Llib/bit.scm 596 */
obj_t BgL_tmpz00_2754;
if(
INTEGERP(BgL_yz00_1338))
{ /* Llib/bit.scm 596 */
BgL_tmpz00_2754 = BgL_yz00_1338
; }  else 
{ 
obj_t BgL_auxz00_2757;
BgL_auxz00_2757 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27943)), BGl_string1784z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1338); 
FAILURE(BgL_auxz00_2757,BFALSE,BFALSE);} 
BgL_auxz00_2753 = 
(long)CINT(BgL_tmpz00_2754); } 
{ /* Llib/bit.scm 596 */
obj_t BgL_tmpz00_2745;
if(
BGL_INT32P(BgL_xz00_1337))
{ /* Llib/bit.scm 596 */
BgL_tmpz00_2745 = BgL_xz00_1337
; }  else 
{ 
obj_t BgL_auxz00_2748;
BgL_auxz00_2748 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27943)), BGl_string1784z00zz__bitz00, BGl_string1737z00zz__bitz00, BgL_xz00_1337); 
FAILURE(BgL_auxz00_2748,BFALSE,BFALSE);} 
BgL_auxz00_2744 = 
BGL_BINT32_TO_INT32(BgL_tmpz00_2745); } 
BgL_tmpz00_2743 = 
BGl_bitzd2rshs32zd2zz__bitz00(BgL_auxz00_2744, BgL_auxz00_2753); } 
return 
BGL_INT32_TO_BINT32(BgL_tmpz00_2743);} } 

}



/* bit-rshu32 */
BGL_EXPORTED_DEF uint32_t BGl_bitzd2rshu32zd2zz__bitz00(uint32_t BgL_xz00_96, long BgL_yz00_97)
{
{ /* Llib/bit.scm 597 */
return 
(BgL_xz00_96 >> 
(int)(BgL_yz00_97));} 

}



/* &bit-rshu32 */
obj_t BGl_z62bitzd2rshu32zb0zz__bitz00(obj_t BgL_envz00_1339, obj_t BgL_xz00_1340, obj_t BgL_yz00_1341)
{
{ /* Llib/bit.scm 597 */
{ /* Llib/bit.scm 597 */
uint32_t BgL_tmpz00_2766;
{ /* Llib/bit.scm 597 */
long BgL_auxz00_2776;uint32_t BgL_auxz00_2767;
{ /* Llib/bit.scm 597 */
obj_t BgL_tmpz00_2777;
if(
INTEGERP(BgL_yz00_1341))
{ /* Llib/bit.scm 597 */
BgL_tmpz00_2777 = BgL_yz00_1341
; }  else 
{ 
obj_t BgL_auxz00_2780;
BgL_auxz00_2780 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27993)), BGl_string1785z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1341); 
FAILURE(BgL_auxz00_2780,BFALSE,BFALSE);} 
BgL_auxz00_2776 = 
(long)CINT(BgL_tmpz00_2777); } 
{ /* Llib/bit.scm 597 */
obj_t BgL_tmpz00_2768;
if(
BGL_UINT32P(BgL_xz00_1340))
{ /* Llib/bit.scm 597 */
BgL_tmpz00_2768 = BgL_xz00_1340
; }  else 
{ 
obj_t BgL_auxz00_2771;
BgL_auxz00_2771 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)27993)), BGl_string1785z00zz__bitz00, BGl_string1739z00zz__bitz00, BgL_xz00_1340); 
FAILURE(BgL_auxz00_2771,BFALSE,BFALSE);} 
BgL_auxz00_2767 = 
BGL_BUINT32_TO_UINT32(BgL_tmpz00_2768); } 
BgL_tmpz00_2766 = 
BGl_bitzd2rshu32zd2zz__bitz00(BgL_auxz00_2767, BgL_auxz00_2776); } 
return 
BGL_UINT32_TO_BUINT32(BgL_tmpz00_2766);} } 

}



/* bit-rshs64 */
BGL_EXPORTED_DEF int64_t BGl_bitzd2rshs64zd2zz__bitz00(int64_t BgL_xz00_98, long BgL_yz00_99)
{
{ /* Llib/bit.scm 598 */
return 
(BgL_xz00_98 >> 
(int)(BgL_yz00_99));} 

}



/* &bit-rshs64 */
obj_t BGl_z62bitzd2rshs64zb0zz__bitz00(obj_t BgL_envz00_1342, obj_t BgL_xz00_1343, obj_t BgL_yz00_1344)
{
{ /* Llib/bit.scm 598 */
{ /* Llib/bit.scm 598 */
int64_t BgL_tmpz00_2789;
{ /* Llib/bit.scm 598 */
long BgL_auxz00_2799;int64_t BgL_auxz00_2790;
{ /* Llib/bit.scm 598 */
obj_t BgL_tmpz00_2800;
if(
INTEGERP(BgL_yz00_1344))
{ /* Llib/bit.scm 598 */
BgL_tmpz00_2800 = BgL_yz00_1344
; }  else 
{ 
obj_t BgL_auxz00_2803;
BgL_auxz00_2803 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28043)), BGl_string1786z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1344); 
FAILURE(BgL_auxz00_2803,BFALSE,BFALSE);} 
BgL_auxz00_2799 = 
(long)CINT(BgL_tmpz00_2800); } 
{ /* Llib/bit.scm 598 */
obj_t BgL_tmpz00_2791;
if(
BGL_INT64P(BgL_xz00_1343))
{ /* Llib/bit.scm 598 */
BgL_tmpz00_2791 = BgL_xz00_1343
; }  else 
{ 
obj_t BgL_auxz00_2794;
BgL_auxz00_2794 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28043)), BGl_string1786z00zz__bitz00, BGl_string1741z00zz__bitz00, BgL_xz00_1343); 
FAILURE(BgL_auxz00_2794,BFALSE,BFALSE);} 
BgL_auxz00_2790 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_2791); } 
BgL_tmpz00_2789 = 
BGl_bitzd2rshs64zd2zz__bitz00(BgL_auxz00_2790, BgL_auxz00_2799); } 
return 
BGL_INT64_TO_BINT64(BgL_tmpz00_2789);} } 

}



/* bit-rshu64 */
BGL_EXPORTED_DEF uint64_t BGl_bitzd2rshu64zd2zz__bitz00(uint64_t BgL_xz00_100, long BgL_yz00_101)
{
{ /* Llib/bit.scm 599 */
return 
(BgL_xz00_100 >> 
(int)(BgL_yz00_101));} 

}



/* &bit-rshu64 */
obj_t BGl_z62bitzd2rshu64zb0zz__bitz00(obj_t BgL_envz00_1345, obj_t BgL_xz00_1346, obj_t BgL_yz00_1347)
{
{ /* Llib/bit.scm 599 */
{ /* Llib/bit.scm 599 */
uint64_t BgL_tmpz00_2812;
{ /* Llib/bit.scm 599 */
long BgL_auxz00_2822;uint64_t BgL_auxz00_2813;
{ /* Llib/bit.scm 599 */
obj_t BgL_tmpz00_2823;
if(
INTEGERP(BgL_yz00_1347))
{ /* Llib/bit.scm 599 */
BgL_tmpz00_2823 = BgL_yz00_1347
; }  else 
{ 
obj_t BgL_auxz00_2826;
BgL_auxz00_2826 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28093)), BGl_string1787z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1347); 
FAILURE(BgL_auxz00_2826,BFALSE,BFALSE);} 
BgL_auxz00_2822 = 
(long)CINT(BgL_tmpz00_2823); } 
{ /* Llib/bit.scm 599 */
obj_t BgL_tmpz00_2814;
if(
BGL_UINT64P(BgL_xz00_1346))
{ /* Llib/bit.scm 599 */
BgL_tmpz00_2814 = BgL_xz00_1346
; }  else 
{ 
obj_t BgL_auxz00_2817;
BgL_auxz00_2817 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28093)), BGl_string1787z00zz__bitz00, BGl_string1743z00zz__bitz00, BgL_xz00_1346); 
FAILURE(BgL_auxz00_2817,BFALSE,BFALSE);} 
BgL_auxz00_2813 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_2814); } 
BgL_tmpz00_2812 = 
BGl_bitzd2rshu64zd2zz__bitz00(BgL_auxz00_2813, BgL_auxz00_2822); } 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_2812);} } 

}



/* bit-ursh */
BGL_EXPORTED_DEF unsigned long BGl_bitzd2urshzd2zz__bitz00(unsigned long BgL_xz00_102, long BgL_yz00_103)
{
{ /* Llib/bit.scm 604 */
return 
(BgL_xz00_102 >> 
(int)(BgL_yz00_103));} 

}



/* &bit-ursh */
obj_t BGl_z62bitzd2urshzb0zz__bitz00(obj_t BgL_envz00_1348, obj_t BgL_xz00_1349, obj_t BgL_yz00_1350)
{
{ /* Llib/bit.scm 604 */
{ /* Llib/bit.scm 604 */
unsigned long BgL_tmpz00_2835;
{ /* Llib/bit.scm 604 */
long BgL_auxz00_2845;unsigned long BgL_auxz00_2836;
{ /* Llib/bit.scm 604 */
obj_t BgL_tmpz00_2846;
if(
INTEGERP(BgL_yz00_1350))
{ /* Llib/bit.scm 604 */
BgL_tmpz00_2846 = BgL_yz00_1350
; }  else 
{ 
obj_t BgL_auxz00_2849;
BgL_auxz00_2849 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28364)), BGl_string1788z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1350); 
FAILURE(BgL_auxz00_2849,BFALSE,BFALSE);} 
BgL_auxz00_2845 = 
(long)CINT(BgL_tmpz00_2846); } 
{ /* Llib/bit.scm 604 */
obj_t BgL_tmpz00_2837;
if(
INTEGERP(BgL_xz00_1349))
{ /* Llib/bit.scm 604 */
BgL_tmpz00_2837 = BgL_xz00_1349
; }  else 
{ 
obj_t BgL_auxz00_2840;
BgL_auxz00_2840 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28364)), BGl_string1788z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_xz00_1349); 
FAILURE(BgL_auxz00_2840,BFALSE,BFALSE);} 
BgL_auxz00_2836 = 
(unsigned long)CINT(BgL_tmpz00_2837); } 
BgL_tmpz00_2835 = 
BGl_bitzd2urshzd2zz__bitz00(BgL_auxz00_2836, BgL_auxz00_2845); } 
return 
BINT(BgL_tmpz00_2835);} } 

}



/* bit-urshelong */
BGL_EXPORTED_DEF unsigned long BGl_bitzd2urshelongzd2zz__bitz00(unsigned long BgL_xz00_104, long BgL_yz00_105)
{
{ /* Llib/bit.scm 605 */
return 
(BgL_xz00_104 >> 
(int)(BgL_yz00_105));} 

}



/* &bit-urshelong */
obj_t BGl_z62bitzd2urshelongzb0zz__bitz00(obj_t BgL_envz00_1351, obj_t BgL_xz00_1352, obj_t BgL_yz00_1353)
{
{ /* Llib/bit.scm 605 */
{ /* Llib/bit.scm 605 */
long BgL_tmpz00_2858;
{ /* Llib/bit.scm 605 */
long BgL_auxz00_2868;unsigned long BgL_auxz00_2859;
{ /* Llib/bit.scm 605 */
obj_t BgL_tmpz00_2869;
if(
INTEGERP(BgL_yz00_1353))
{ /* Llib/bit.scm 605 */
BgL_tmpz00_2869 = BgL_yz00_1353
; }  else 
{ 
obj_t BgL_auxz00_2872;
BgL_auxz00_2872 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28416)), BGl_string1789z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1353); 
FAILURE(BgL_auxz00_2872,BFALSE,BFALSE);} 
BgL_auxz00_2868 = 
(long)CINT(BgL_tmpz00_2869); } 
{ /* Llib/bit.scm 605 */
obj_t BgL_tmpz00_2860;
if(
ELONGP(BgL_xz00_1352))
{ /* Llib/bit.scm 605 */
BgL_tmpz00_2860 = BgL_xz00_1352
; }  else 
{ 
obj_t BgL_auxz00_2863;
BgL_auxz00_2863 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28416)), BGl_string1789z00zz__bitz00, BGl_string1725z00zz__bitz00, BgL_xz00_1352); 
FAILURE(BgL_auxz00_2863,BFALSE,BFALSE);} 
BgL_auxz00_2859 = 
BELONG_TO_LONG(BgL_tmpz00_2860); } 
BgL_tmpz00_2858 = 
BGl_bitzd2urshelongzd2zz__bitz00(BgL_auxz00_2859, BgL_auxz00_2868); } 
return 
make_belong(BgL_tmpz00_2858);} } 

}



/* bit-urshllong */
BGL_EXPORTED_DEF unsigned BGL_LONGLONG_T BGl_bitzd2urshllongzd2zz__bitz00(unsigned BGL_LONGLONG_T BgL_xz00_106, long BgL_yz00_107)
{
{ /* Llib/bit.scm 606 */
return 
(BgL_xz00_106 >> 
(int)(BgL_yz00_107));} 

}



/* &bit-urshllong */
obj_t BGl_z62bitzd2urshllongzb0zz__bitz00(obj_t BgL_envz00_1354, obj_t BgL_xz00_1355, obj_t BgL_yz00_1356)
{
{ /* Llib/bit.scm 606 */
{ /* Llib/bit.scm 606 */
unsigned BGL_LONGLONG_T BgL_tmpz00_2881;
{ /* Llib/bit.scm 606 */
long BgL_auxz00_2891;unsigned BGL_LONGLONG_T BgL_auxz00_2882;
{ /* Llib/bit.scm 606 */
obj_t BgL_tmpz00_2892;
if(
INTEGERP(BgL_yz00_1356))
{ /* Llib/bit.scm 606 */
BgL_tmpz00_2892 = BgL_yz00_1356
; }  else 
{ 
obj_t BgL_auxz00_2895;
BgL_auxz00_2895 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28473)), BGl_string1790z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1356); 
FAILURE(BgL_auxz00_2895,BFALSE,BFALSE);} 
BgL_auxz00_2891 = 
(long)CINT(BgL_tmpz00_2892); } 
{ /* Llib/bit.scm 606 */
obj_t BgL_tmpz00_2883;
if(
LLONGP(BgL_xz00_1355))
{ /* Llib/bit.scm 606 */
BgL_tmpz00_2883 = BgL_xz00_1355
; }  else 
{ 
obj_t BgL_auxz00_2886;
BgL_auxz00_2886 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28473)), BGl_string1790z00zz__bitz00, BGl_string1727z00zz__bitz00, BgL_xz00_1355); 
FAILURE(BgL_auxz00_2886,BFALSE,BFALSE);} 
BgL_auxz00_2882 = 
BLLONG_TO_LLONG(BgL_tmpz00_2883); } 
BgL_tmpz00_2881 = 
BGl_bitzd2urshllongzd2zz__bitz00(BgL_auxz00_2882, BgL_auxz00_2891); } 
return 
make_bllong(BgL_tmpz00_2881);} } 

}



/* bit-urshu8 */
BGL_EXPORTED_DEF uint8_t BGl_bitzd2urshu8zd2zz__bitz00(uint8_t BgL_xz00_108, long BgL_yz00_109)
{
{ /* Llib/bit.scm 607 */
return 
(BgL_xz00_108 >> 
(int)(BgL_yz00_109));} 

}



/* &bit-urshu8 */
obj_t BGl_z62bitzd2urshu8zb0zz__bitz00(obj_t BgL_envz00_1357, obj_t BgL_xz00_1358, obj_t BgL_yz00_1359)
{
{ /* Llib/bit.scm 607 */
{ /* Llib/bit.scm 607 */
uint8_t BgL_tmpz00_2904;
{ /* Llib/bit.scm 607 */
long BgL_auxz00_2914;uint8_t BgL_auxz00_2905;
{ /* Llib/bit.scm 607 */
obj_t BgL_tmpz00_2915;
if(
INTEGERP(BgL_yz00_1359))
{ /* Llib/bit.scm 607 */
BgL_tmpz00_2915 = BgL_yz00_1359
; }  else 
{ 
obj_t BgL_auxz00_2918;
BgL_auxz00_2918 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28527)), BGl_string1791z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1359); 
FAILURE(BgL_auxz00_2918,BFALSE,BFALSE);} 
BgL_auxz00_2914 = 
(long)CINT(BgL_tmpz00_2915); } 
{ /* Llib/bit.scm 607 */
obj_t BgL_tmpz00_2906;
if(
BGL_UINT8P(BgL_xz00_1358))
{ /* Llib/bit.scm 607 */
BgL_tmpz00_2906 = BgL_xz00_1358
; }  else 
{ 
obj_t BgL_auxz00_2909;
BgL_auxz00_2909 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28527)), BGl_string1791z00zz__bitz00, BGl_string1731z00zz__bitz00, BgL_xz00_1358); 
FAILURE(BgL_auxz00_2909,BFALSE,BFALSE);} 
BgL_auxz00_2905 = 
BGL_BUINT8_TO_UINT8(BgL_tmpz00_2906); } 
BgL_tmpz00_2904 = 
BGl_bitzd2urshu8zd2zz__bitz00(BgL_auxz00_2905, BgL_auxz00_2914); } 
return 
BGL_UINT8_TO_BUINT8(BgL_tmpz00_2904);} } 

}



/* bit-urshs8 */
BGL_EXPORTED_DEF int8_t BGl_bitzd2urshs8zd2zz__bitz00(int8_t BgL_xz00_110, long BgL_yz00_111)
{
{ /* Llib/bit.scm 608 */
return 
(BgL_xz00_110 >> 
(int)(BgL_yz00_111));} 

}



/* &bit-urshs8 */
obj_t BGl_z62bitzd2urshs8zb0zz__bitz00(obj_t BgL_envz00_1360, obj_t BgL_xz00_1361, obj_t BgL_yz00_1362)
{
{ /* Llib/bit.scm 608 */
{ /* Llib/bit.scm 608 */
int8_t BgL_tmpz00_2927;
{ /* Llib/bit.scm 608 */
long BgL_auxz00_2937;int8_t BgL_auxz00_2928;
{ /* Llib/bit.scm 608 */
obj_t BgL_tmpz00_2938;
if(
INTEGERP(BgL_yz00_1362))
{ /* Llib/bit.scm 608 */
BgL_tmpz00_2938 = BgL_yz00_1362
; }  else 
{ 
obj_t BgL_auxz00_2941;
BgL_auxz00_2941 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28577)), BGl_string1792z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1362); 
FAILURE(BgL_auxz00_2941,BFALSE,BFALSE);} 
BgL_auxz00_2937 = 
(long)CINT(BgL_tmpz00_2938); } 
{ /* Llib/bit.scm 608 */
obj_t BgL_tmpz00_2929;
if(
BGL_INT8P(BgL_xz00_1361))
{ /* Llib/bit.scm 608 */
BgL_tmpz00_2929 = BgL_xz00_1361
; }  else 
{ 
obj_t BgL_auxz00_2932;
BgL_auxz00_2932 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28577)), BGl_string1792z00zz__bitz00, BGl_string1729z00zz__bitz00, BgL_xz00_1361); 
FAILURE(BgL_auxz00_2932,BFALSE,BFALSE);} 
BgL_auxz00_2928 = 
BGL_BINT8_TO_INT8(BgL_tmpz00_2929); } 
BgL_tmpz00_2927 = 
BGl_bitzd2urshs8zd2zz__bitz00(BgL_auxz00_2928, BgL_auxz00_2937); } 
return 
BGL_INT8_TO_BINT8(BgL_tmpz00_2927);} } 

}



/* bit-urshs16 */
BGL_EXPORTED_DEF int16_t BGl_bitzd2urshs16zd2zz__bitz00(int16_t BgL_xz00_112, long BgL_yz00_113)
{
{ /* Llib/bit.scm 609 */
return 
(BgL_xz00_112 >> 
(int)(BgL_yz00_113));} 

}



/* &bit-urshs16 */
obj_t BGl_z62bitzd2urshs16zb0zz__bitz00(obj_t BgL_envz00_1363, obj_t BgL_xz00_1364, obj_t BgL_yz00_1365)
{
{ /* Llib/bit.scm 609 */
{ /* Llib/bit.scm 609 */
int16_t BgL_tmpz00_2950;
{ /* Llib/bit.scm 609 */
long BgL_auxz00_2960;int16_t BgL_auxz00_2951;
{ /* Llib/bit.scm 609 */
obj_t BgL_tmpz00_2961;
if(
INTEGERP(BgL_yz00_1365))
{ /* Llib/bit.scm 609 */
BgL_tmpz00_2961 = BgL_yz00_1365
; }  else 
{ 
obj_t BgL_auxz00_2964;
BgL_auxz00_2964 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28628)), BGl_string1793z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1365); 
FAILURE(BgL_auxz00_2964,BFALSE,BFALSE);} 
BgL_auxz00_2960 = 
(long)CINT(BgL_tmpz00_2961); } 
{ /* Llib/bit.scm 609 */
obj_t BgL_tmpz00_2952;
if(
BGL_INT16P(BgL_xz00_1364))
{ /* Llib/bit.scm 609 */
BgL_tmpz00_2952 = BgL_xz00_1364
; }  else 
{ 
obj_t BgL_auxz00_2955;
BgL_auxz00_2955 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28628)), BGl_string1793z00zz__bitz00, BGl_string1733z00zz__bitz00, BgL_xz00_1364); 
FAILURE(BgL_auxz00_2955,BFALSE,BFALSE);} 
BgL_auxz00_2951 = 
BGL_BINT16_TO_INT16(BgL_tmpz00_2952); } 
BgL_tmpz00_2950 = 
BGl_bitzd2urshs16zd2zz__bitz00(BgL_auxz00_2951, BgL_auxz00_2960); } 
return 
BGL_INT16_TO_BINT16(BgL_tmpz00_2950);} } 

}



/* bit-urshu16 */
BGL_EXPORTED_DEF uint16_t BGl_bitzd2urshu16zd2zz__bitz00(uint16_t BgL_xz00_114, long BgL_yz00_115)
{
{ /* Llib/bit.scm 610 */
return 
(BgL_xz00_114 >> 
(int)(BgL_yz00_115));} 

}



/* &bit-urshu16 */
obj_t BGl_z62bitzd2urshu16zb0zz__bitz00(obj_t BgL_envz00_1366, obj_t BgL_xz00_1367, obj_t BgL_yz00_1368)
{
{ /* Llib/bit.scm 610 */
{ /* Llib/bit.scm 610 */
uint16_t BgL_tmpz00_2973;
{ /* Llib/bit.scm 610 */
long BgL_auxz00_2983;uint16_t BgL_auxz00_2974;
{ /* Llib/bit.scm 610 */
obj_t BgL_tmpz00_2984;
if(
INTEGERP(BgL_yz00_1368))
{ /* Llib/bit.scm 610 */
BgL_tmpz00_2984 = BgL_yz00_1368
; }  else 
{ 
obj_t BgL_auxz00_2987;
BgL_auxz00_2987 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28680)), BGl_string1794z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1368); 
FAILURE(BgL_auxz00_2987,BFALSE,BFALSE);} 
BgL_auxz00_2983 = 
(long)CINT(BgL_tmpz00_2984); } 
{ /* Llib/bit.scm 610 */
obj_t BgL_tmpz00_2975;
if(
BGL_UINT16P(BgL_xz00_1367))
{ /* Llib/bit.scm 610 */
BgL_tmpz00_2975 = BgL_xz00_1367
; }  else 
{ 
obj_t BgL_auxz00_2978;
BgL_auxz00_2978 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28680)), BGl_string1794z00zz__bitz00, BGl_string1735z00zz__bitz00, BgL_xz00_1367); 
FAILURE(BgL_auxz00_2978,BFALSE,BFALSE);} 
BgL_auxz00_2974 = 
BGL_BUINT16_TO_UINT16(BgL_tmpz00_2975); } 
BgL_tmpz00_2973 = 
BGl_bitzd2urshu16zd2zz__bitz00(BgL_auxz00_2974, BgL_auxz00_2983); } 
return 
BGL_UINT16_TO_BUINT16(BgL_tmpz00_2973);} } 

}



/* bit-urshs32 */
BGL_EXPORTED_DEF int32_t BGl_bitzd2urshs32zd2zz__bitz00(int32_t BgL_xz00_116, long BgL_yz00_117)
{
{ /* Llib/bit.scm 611 */
return 
(BgL_xz00_116 >> 
(int)(BgL_yz00_117));} 

}



/* &bit-urshs32 */
obj_t BGl_z62bitzd2urshs32zb0zz__bitz00(obj_t BgL_envz00_1369, obj_t BgL_xz00_1370, obj_t BgL_yz00_1371)
{
{ /* Llib/bit.scm 611 */
{ /* Llib/bit.scm 611 */
int32_t BgL_tmpz00_2996;
{ /* Llib/bit.scm 611 */
long BgL_auxz00_3006;int32_t BgL_auxz00_2997;
{ /* Llib/bit.scm 611 */
obj_t BgL_tmpz00_3007;
if(
INTEGERP(BgL_yz00_1371))
{ /* Llib/bit.scm 611 */
BgL_tmpz00_3007 = BgL_yz00_1371
; }  else 
{ 
obj_t BgL_auxz00_3010;
BgL_auxz00_3010 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28732)), BGl_string1795z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1371); 
FAILURE(BgL_auxz00_3010,BFALSE,BFALSE);} 
BgL_auxz00_3006 = 
(long)CINT(BgL_tmpz00_3007); } 
{ /* Llib/bit.scm 611 */
obj_t BgL_tmpz00_2998;
if(
BGL_INT32P(BgL_xz00_1370))
{ /* Llib/bit.scm 611 */
BgL_tmpz00_2998 = BgL_xz00_1370
; }  else 
{ 
obj_t BgL_auxz00_3001;
BgL_auxz00_3001 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28732)), BGl_string1795z00zz__bitz00, BGl_string1737z00zz__bitz00, BgL_xz00_1370); 
FAILURE(BgL_auxz00_3001,BFALSE,BFALSE);} 
BgL_auxz00_2997 = 
BGL_BINT32_TO_INT32(BgL_tmpz00_2998); } 
BgL_tmpz00_2996 = 
BGl_bitzd2urshs32zd2zz__bitz00(BgL_auxz00_2997, BgL_auxz00_3006); } 
return 
BGL_INT32_TO_BINT32(BgL_tmpz00_2996);} } 

}



/* bit-urshu32 */
BGL_EXPORTED_DEF uint32_t BGl_bitzd2urshu32zd2zz__bitz00(uint32_t BgL_xz00_118, long BgL_yz00_119)
{
{ /* Llib/bit.scm 612 */
return 
(BgL_xz00_118 >> 
(int)(BgL_yz00_119));} 

}



/* &bit-urshu32 */
obj_t BGl_z62bitzd2urshu32zb0zz__bitz00(obj_t BgL_envz00_1372, obj_t BgL_xz00_1373, obj_t BgL_yz00_1374)
{
{ /* Llib/bit.scm 612 */
{ /* Llib/bit.scm 612 */
uint32_t BgL_tmpz00_3019;
{ /* Llib/bit.scm 612 */
long BgL_auxz00_3029;uint32_t BgL_auxz00_3020;
{ /* Llib/bit.scm 612 */
obj_t BgL_tmpz00_3030;
if(
INTEGERP(BgL_yz00_1374))
{ /* Llib/bit.scm 612 */
BgL_tmpz00_3030 = BgL_yz00_1374
; }  else 
{ 
obj_t BgL_auxz00_3033;
BgL_auxz00_3033 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28784)), BGl_string1796z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1374); 
FAILURE(BgL_auxz00_3033,BFALSE,BFALSE);} 
BgL_auxz00_3029 = 
(long)CINT(BgL_tmpz00_3030); } 
{ /* Llib/bit.scm 612 */
obj_t BgL_tmpz00_3021;
if(
BGL_UINT32P(BgL_xz00_1373))
{ /* Llib/bit.scm 612 */
BgL_tmpz00_3021 = BgL_xz00_1373
; }  else 
{ 
obj_t BgL_auxz00_3024;
BgL_auxz00_3024 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28784)), BGl_string1796z00zz__bitz00, BGl_string1739z00zz__bitz00, BgL_xz00_1373); 
FAILURE(BgL_auxz00_3024,BFALSE,BFALSE);} 
BgL_auxz00_3020 = 
BGL_BUINT32_TO_UINT32(BgL_tmpz00_3021); } 
BgL_tmpz00_3019 = 
BGl_bitzd2urshu32zd2zz__bitz00(BgL_auxz00_3020, BgL_auxz00_3029); } 
return 
BGL_UINT32_TO_BUINT32(BgL_tmpz00_3019);} } 

}



/* bit-urshs64 */
BGL_EXPORTED_DEF int64_t BGl_bitzd2urshs64zd2zz__bitz00(int64_t BgL_xz00_120, long BgL_yz00_121)
{
{ /* Llib/bit.scm 613 */
return 
(BgL_xz00_120 >> 
(int)(BgL_yz00_121));} 

}



/* &bit-urshs64 */
obj_t BGl_z62bitzd2urshs64zb0zz__bitz00(obj_t BgL_envz00_1375, obj_t BgL_xz00_1376, obj_t BgL_yz00_1377)
{
{ /* Llib/bit.scm 613 */
{ /* Llib/bit.scm 613 */
int64_t BgL_tmpz00_3042;
{ /* Llib/bit.scm 613 */
long BgL_auxz00_3052;int64_t BgL_auxz00_3043;
{ /* Llib/bit.scm 613 */
obj_t BgL_tmpz00_3053;
if(
INTEGERP(BgL_yz00_1377))
{ /* Llib/bit.scm 613 */
BgL_tmpz00_3053 = BgL_yz00_1377
; }  else 
{ 
obj_t BgL_auxz00_3056;
BgL_auxz00_3056 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28836)), BGl_string1797z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1377); 
FAILURE(BgL_auxz00_3056,BFALSE,BFALSE);} 
BgL_auxz00_3052 = 
(long)CINT(BgL_tmpz00_3053); } 
{ /* Llib/bit.scm 613 */
obj_t BgL_tmpz00_3044;
if(
BGL_INT64P(BgL_xz00_1376))
{ /* Llib/bit.scm 613 */
BgL_tmpz00_3044 = BgL_xz00_1376
; }  else 
{ 
obj_t BgL_auxz00_3047;
BgL_auxz00_3047 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28836)), BGl_string1797z00zz__bitz00, BGl_string1741z00zz__bitz00, BgL_xz00_1376); 
FAILURE(BgL_auxz00_3047,BFALSE,BFALSE);} 
BgL_auxz00_3043 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_3044); } 
BgL_tmpz00_3042 = 
BGl_bitzd2urshs64zd2zz__bitz00(BgL_auxz00_3043, BgL_auxz00_3052); } 
return 
BGL_INT64_TO_BINT64(BgL_tmpz00_3042);} } 

}



/* bit-urshu64 */
BGL_EXPORTED_DEF uint64_t BGl_bitzd2urshu64zd2zz__bitz00(uint64_t BgL_xz00_122, long BgL_yz00_123)
{
{ /* Llib/bit.scm 614 */
return 
(BgL_xz00_122 >> 
(int)(BgL_yz00_123));} 

}



/* &bit-urshu64 */
obj_t BGl_z62bitzd2urshu64zb0zz__bitz00(obj_t BgL_envz00_1378, obj_t BgL_xz00_1379, obj_t BgL_yz00_1380)
{
{ /* Llib/bit.scm 614 */
{ /* Llib/bit.scm 614 */
uint64_t BgL_tmpz00_3065;
{ /* Llib/bit.scm 614 */
long BgL_auxz00_3075;uint64_t BgL_auxz00_3066;
{ /* Llib/bit.scm 614 */
obj_t BgL_tmpz00_3076;
if(
INTEGERP(BgL_yz00_1380))
{ /* Llib/bit.scm 614 */
BgL_tmpz00_3076 = BgL_yz00_1380
; }  else 
{ 
obj_t BgL_auxz00_3079;
BgL_auxz00_3079 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28888)), BGl_string1798z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1380); 
FAILURE(BgL_auxz00_3079,BFALSE,BFALSE);} 
BgL_auxz00_3075 = 
(long)CINT(BgL_tmpz00_3076); } 
{ /* Llib/bit.scm 614 */
obj_t BgL_tmpz00_3067;
if(
BGL_UINT64P(BgL_xz00_1379))
{ /* Llib/bit.scm 614 */
BgL_tmpz00_3067 = BgL_xz00_1379
; }  else 
{ 
obj_t BgL_auxz00_3070;
BgL_auxz00_3070 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)28888)), BGl_string1798z00zz__bitz00, BGl_string1743z00zz__bitz00, BgL_xz00_1379); 
FAILURE(BgL_auxz00_3070,BFALSE,BFALSE);} 
BgL_auxz00_3066 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_3067); } 
BgL_tmpz00_3065 = 
BGl_bitzd2urshu64zd2zz__bitz00(BgL_auxz00_3066, BgL_auxz00_3075); } 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_3065);} } 

}



/* bit-lsh */
BGL_EXPORTED_DEF long BGl_bitzd2lshzd2zz__bitz00(long BgL_xz00_124, long BgL_yz00_125)
{
{ /* Llib/bit.scm 619 */
return 
(BgL_xz00_124 << 
(int)(BgL_yz00_125));} 

}



/* &bit-lsh */
obj_t BGl_z62bitzd2lshzb0zz__bitz00(obj_t BgL_envz00_1381, obj_t BgL_xz00_1382, obj_t BgL_yz00_1383)
{
{ /* Llib/bit.scm 619 */
{ /* Llib/bit.scm 619 */
long BgL_tmpz00_3088;
{ /* Llib/bit.scm 619 */
long BgL_auxz00_3098;long BgL_auxz00_3089;
{ /* Llib/bit.scm 619 */
obj_t BgL_tmpz00_3099;
if(
INTEGERP(BgL_yz00_1383))
{ /* Llib/bit.scm 619 */
BgL_tmpz00_3099 = BgL_yz00_1383
; }  else 
{ 
obj_t BgL_auxz00_3102;
BgL_auxz00_3102 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29166)), BGl_string1799z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1383); 
FAILURE(BgL_auxz00_3102,BFALSE,BFALSE);} 
BgL_auxz00_3098 = 
(long)CINT(BgL_tmpz00_3099); } 
{ /* Llib/bit.scm 619 */
obj_t BgL_tmpz00_3090;
if(
INTEGERP(BgL_xz00_1382))
{ /* Llib/bit.scm 619 */
BgL_tmpz00_3090 = BgL_xz00_1382
; }  else 
{ 
obj_t BgL_auxz00_3093;
BgL_auxz00_3093 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29166)), BGl_string1799z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_xz00_1382); 
FAILURE(BgL_auxz00_3093,BFALSE,BFALSE);} 
BgL_auxz00_3089 = 
(long)CINT(BgL_tmpz00_3090); } 
BgL_tmpz00_3088 = 
BGl_bitzd2lshzd2zz__bitz00(BgL_auxz00_3089, BgL_auxz00_3098); } 
return 
BINT(BgL_tmpz00_3088);} } 

}



/* bit-lshelong */
BGL_EXPORTED_DEF long BGl_bitzd2lshelongzd2zz__bitz00(long BgL_xz00_126, long BgL_yz00_127)
{
{ /* Llib/bit.scm 620 */
return 
(BgL_xz00_126 << 
(int)(BgL_yz00_127));} 

}



/* &bit-lshelong */
obj_t BGl_z62bitzd2lshelongzb0zz__bitz00(obj_t BgL_envz00_1384, obj_t BgL_xz00_1385, obj_t BgL_yz00_1386)
{
{ /* Llib/bit.scm 620 */
{ /* Llib/bit.scm 620 */
long BgL_tmpz00_3111;
{ /* Llib/bit.scm 620 */
long BgL_auxz00_3121;long BgL_auxz00_3112;
{ /* Llib/bit.scm 620 */
obj_t BgL_tmpz00_3122;
if(
INTEGERP(BgL_yz00_1386))
{ /* Llib/bit.scm 620 */
BgL_tmpz00_3122 = BgL_yz00_1386
; }  else 
{ 
obj_t BgL_auxz00_3125;
BgL_auxz00_3125 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29216)), BGl_string1800z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1386); 
FAILURE(BgL_auxz00_3125,BFALSE,BFALSE);} 
BgL_auxz00_3121 = 
(long)CINT(BgL_tmpz00_3122); } 
{ /* Llib/bit.scm 620 */
obj_t BgL_tmpz00_3113;
if(
ELONGP(BgL_xz00_1385))
{ /* Llib/bit.scm 620 */
BgL_tmpz00_3113 = BgL_xz00_1385
; }  else 
{ 
obj_t BgL_auxz00_3116;
BgL_auxz00_3116 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29216)), BGl_string1800z00zz__bitz00, BGl_string1725z00zz__bitz00, BgL_xz00_1385); 
FAILURE(BgL_auxz00_3116,BFALSE,BFALSE);} 
BgL_auxz00_3112 = 
BELONG_TO_LONG(BgL_tmpz00_3113); } 
BgL_tmpz00_3111 = 
BGl_bitzd2lshelongzd2zz__bitz00(BgL_auxz00_3112, BgL_auxz00_3121); } 
return 
make_belong(BgL_tmpz00_3111);} } 

}



/* bit-lshllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2lshllongzd2zz__bitz00(BGL_LONGLONG_T BgL_xz00_128, long BgL_yz00_129)
{
{ /* Llib/bit.scm 621 */
return 
(BgL_xz00_128 << 
(int)(BgL_yz00_129));} 

}



/* &bit-lshllong */
obj_t BGl_z62bitzd2lshllongzb0zz__bitz00(obj_t BgL_envz00_1387, obj_t BgL_xz00_1388, obj_t BgL_yz00_1389)
{
{ /* Llib/bit.scm 621 */
{ /* Llib/bit.scm 621 */
BGL_LONGLONG_T BgL_tmpz00_3134;
{ /* Llib/bit.scm 621 */
long BgL_auxz00_3144;BGL_LONGLONG_T BgL_auxz00_3135;
{ /* Llib/bit.scm 621 */
obj_t BgL_tmpz00_3145;
if(
INTEGERP(BgL_yz00_1389))
{ /* Llib/bit.scm 621 */
BgL_tmpz00_3145 = BgL_yz00_1389
; }  else 
{ 
obj_t BgL_auxz00_3148;
BgL_auxz00_3148 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29271)), BGl_string1801z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1389); 
FAILURE(BgL_auxz00_3148,BFALSE,BFALSE);} 
BgL_auxz00_3144 = 
(long)CINT(BgL_tmpz00_3145); } 
{ /* Llib/bit.scm 621 */
obj_t BgL_tmpz00_3136;
if(
LLONGP(BgL_xz00_1388))
{ /* Llib/bit.scm 621 */
BgL_tmpz00_3136 = BgL_xz00_1388
; }  else 
{ 
obj_t BgL_auxz00_3139;
BgL_auxz00_3139 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29271)), BGl_string1801z00zz__bitz00, BGl_string1727z00zz__bitz00, BgL_xz00_1388); 
FAILURE(BgL_auxz00_3139,BFALSE,BFALSE);} 
BgL_auxz00_3135 = 
BLLONG_TO_LLONG(BgL_tmpz00_3136); } 
BgL_tmpz00_3134 = 
BGl_bitzd2lshllongzd2zz__bitz00(BgL_auxz00_3135, BgL_auxz00_3144); } 
return 
make_bllong(BgL_tmpz00_3134);} } 

}



/* bit-lshs8 */
BGL_EXPORTED_DEF int8_t BGl_bitzd2lshs8zd2zz__bitz00(int8_t BgL_xz00_130, long BgL_yz00_131)
{
{ /* Llib/bit.scm 622 */
return 
(BgL_xz00_130 << 
(int)(BgL_yz00_131));} 

}



/* &bit-lshs8 */
obj_t BGl_z62bitzd2lshs8zb0zz__bitz00(obj_t BgL_envz00_1390, obj_t BgL_xz00_1391, obj_t BgL_yz00_1392)
{
{ /* Llib/bit.scm 622 */
{ /* Llib/bit.scm 622 */
int8_t BgL_tmpz00_3157;
{ /* Llib/bit.scm 622 */
long BgL_auxz00_3167;int8_t BgL_auxz00_3158;
{ /* Llib/bit.scm 622 */
obj_t BgL_tmpz00_3168;
if(
INTEGERP(BgL_yz00_1392))
{ /* Llib/bit.scm 622 */
BgL_tmpz00_3168 = BgL_yz00_1392
; }  else 
{ 
obj_t BgL_auxz00_3171;
BgL_auxz00_3171 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29323)), BGl_string1802z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1392); 
FAILURE(BgL_auxz00_3171,BFALSE,BFALSE);} 
BgL_auxz00_3167 = 
(long)CINT(BgL_tmpz00_3168); } 
{ /* Llib/bit.scm 622 */
obj_t BgL_tmpz00_3159;
if(
BGL_INT8P(BgL_xz00_1391))
{ /* Llib/bit.scm 622 */
BgL_tmpz00_3159 = BgL_xz00_1391
; }  else 
{ 
obj_t BgL_auxz00_3162;
BgL_auxz00_3162 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29323)), BGl_string1802z00zz__bitz00, BGl_string1729z00zz__bitz00, BgL_xz00_1391); 
FAILURE(BgL_auxz00_3162,BFALSE,BFALSE);} 
BgL_auxz00_3158 = 
BGL_BINT8_TO_INT8(BgL_tmpz00_3159); } 
BgL_tmpz00_3157 = 
BGl_bitzd2lshs8zd2zz__bitz00(BgL_auxz00_3158, BgL_auxz00_3167); } 
return 
BGL_INT8_TO_BINT8(BgL_tmpz00_3157);} } 

}



/* bit-lshu8 */
BGL_EXPORTED_DEF uint8_t BGl_bitzd2lshu8zd2zz__bitz00(uint8_t BgL_xz00_132, long BgL_yz00_133)
{
{ /* Llib/bit.scm 623 */
return 
(BgL_xz00_132 << 
(int)(BgL_yz00_133));} 

}



/* &bit-lshu8 */
obj_t BGl_z62bitzd2lshu8zb0zz__bitz00(obj_t BgL_envz00_1393, obj_t BgL_xz00_1394, obj_t BgL_yz00_1395)
{
{ /* Llib/bit.scm 623 */
{ /* Llib/bit.scm 623 */
uint8_t BgL_tmpz00_3180;
{ /* Llib/bit.scm 623 */
long BgL_auxz00_3190;uint8_t BgL_auxz00_3181;
{ /* Llib/bit.scm 623 */
obj_t BgL_tmpz00_3191;
if(
INTEGERP(BgL_yz00_1395))
{ /* Llib/bit.scm 623 */
BgL_tmpz00_3191 = BgL_yz00_1395
; }  else 
{ 
obj_t BgL_auxz00_3194;
BgL_auxz00_3194 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29371)), BGl_string1803z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1395); 
FAILURE(BgL_auxz00_3194,BFALSE,BFALSE);} 
BgL_auxz00_3190 = 
(long)CINT(BgL_tmpz00_3191); } 
{ /* Llib/bit.scm 623 */
obj_t BgL_tmpz00_3182;
if(
BGL_UINT8P(BgL_xz00_1394))
{ /* Llib/bit.scm 623 */
BgL_tmpz00_3182 = BgL_xz00_1394
; }  else 
{ 
obj_t BgL_auxz00_3185;
BgL_auxz00_3185 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29371)), BGl_string1803z00zz__bitz00, BGl_string1731z00zz__bitz00, BgL_xz00_1394); 
FAILURE(BgL_auxz00_3185,BFALSE,BFALSE);} 
BgL_auxz00_3181 = 
BGL_BUINT8_TO_UINT8(BgL_tmpz00_3182); } 
BgL_tmpz00_3180 = 
BGl_bitzd2lshu8zd2zz__bitz00(BgL_auxz00_3181, BgL_auxz00_3190); } 
return 
BGL_UINT8_TO_BUINT8(BgL_tmpz00_3180);} } 

}



/* bit-lshs16 */
BGL_EXPORTED_DEF int16_t BGl_bitzd2lshs16zd2zz__bitz00(int16_t BgL_xz00_134, long BgL_yz00_135)
{
{ /* Llib/bit.scm 624 */
return 
(BgL_xz00_134 << 
(int)(BgL_yz00_135));} 

}



/* &bit-lshs16 */
obj_t BGl_z62bitzd2lshs16zb0zz__bitz00(obj_t BgL_envz00_1396, obj_t BgL_xz00_1397, obj_t BgL_yz00_1398)
{
{ /* Llib/bit.scm 624 */
{ /* Llib/bit.scm 624 */
int16_t BgL_tmpz00_3203;
{ /* Llib/bit.scm 624 */
long BgL_auxz00_3213;int16_t BgL_auxz00_3204;
{ /* Llib/bit.scm 624 */
obj_t BgL_tmpz00_3214;
if(
INTEGERP(BgL_yz00_1398))
{ /* Llib/bit.scm 624 */
BgL_tmpz00_3214 = BgL_yz00_1398
; }  else 
{ 
obj_t BgL_auxz00_3217;
BgL_auxz00_3217 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29420)), BGl_string1804z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1398); 
FAILURE(BgL_auxz00_3217,BFALSE,BFALSE);} 
BgL_auxz00_3213 = 
(long)CINT(BgL_tmpz00_3214); } 
{ /* Llib/bit.scm 624 */
obj_t BgL_tmpz00_3205;
if(
BGL_INT16P(BgL_xz00_1397))
{ /* Llib/bit.scm 624 */
BgL_tmpz00_3205 = BgL_xz00_1397
; }  else 
{ 
obj_t BgL_auxz00_3208;
BgL_auxz00_3208 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29420)), BGl_string1804z00zz__bitz00, BGl_string1733z00zz__bitz00, BgL_xz00_1397); 
FAILURE(BgL_auxz00_3208,BFALSE,BFALSE);} 
BgL_auxz00_3204 = 
BGL_BINT16_TO_INT16(BgL_tmpz00_3205); } 
BgL_tmpz00_3203 = 
BGl_bitzd2lshs16zd2zz__bitz00(BgL_auxz00_3204, BgL_auxz00_3213); } 
return 
BGL_INT16_TO_BINT16(BgL_tmpz00_3203);} } 

}



/* bit-lshu16 */
BGL_EXPORTED_DEF uint16_t BGl_bitzd2lshu16zd2zz__bitz00(uint16_t BgL_xz00_136, long BgL_yz00_137)
{
{ /* Llib/bit.scm 625 */
return 
(BgL_xz00_136 << 
(int)(BgL_yz00_137));} 

}



/* &bit-lshu16 */
obj_t BGl_z62bitzd2lshu16zb0zz__bitz00(obj_t BgL_envz00_1399, obj_t BgL_xz00_1400, obj_t BgL_yz00_1401)
{
{ /* Llib/bit.scm 625 */
{ /* Llib/bit.scm 625 */
uint16_t BgL_tmpz00_3226;
{ /* Llib/bit.scm 625 */
long BgL_auxz00_3236;uint16_t BgL_auxz00_3227;
{ /* Llib/bit.scm 625 */
obj_t BgL_tmpz00_3237;
if(
INTEGERP(BgL_yz00_1401))
{ /* Llib/bit.scm 625 */
BgL_tmpz00_3237 = BgL_yz00_1401
; }  else 
{ 
obj_t BgL_auxz00_3240;
BgL_auxz00_3240 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29470)), BGl_string1805z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1401); 
FAILURE(BgL_auxz00_3240,BFALSE,BFALSE);} 
BgL_auxz00_3236 = 
(long)CINT(BgL_tmpz00_3237); } 
{ /* Llib/bit.scm 625 */
obj_t BgL_tmpz00_3228;
if(
BGL_UINT16P(BgL_xz00_1400))
{ /* Llib/bit.scm 625 */
BgL_tmpz00_3228 = BgL_xz00_1400
; }  else 
{ 
obj_t BgL_auxz00_3231;
BgL_auxz00_3231 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29470)), BGl_string1805z00zz__bitz00, BGl_string1735z00zz__bitz00, BgL_xz00_1400); 
FAILURE(BgL_auxz00_3231,BFALSE,BFALSE);} 
BgL_auxz00_3227 = 
BGL_BUINT16_TO_UINT16(BgL_tmpz00_3228); } 
BgL_tmpz00_3226 = 
BGl_bitzd2lshu16zd2zz__bitz00(BgL_auxz00_3227, BgL_auxz00_3236); } 
return 
BGL_UINT16_TO_BUINT16(BgL_tmpz00_3226);} } 

}



/* bit-lshs32 */
BGL_EXPORTED_DEF int32_t BGl_bitzd2lshs32zd2zz__bitz00(int32_t BgL_xz00_138, long BgL_yz00_139)
{
{ /* Llib/bit.scm 626 */
return 
(BgL_xz00_138 << 
(int)(BgL_yz00_139));} 

}



/* &bit-lshs32 */
obj_t BGl_z62bitzd2lshs32zb0zz__bitz00(obj_t BgL_envz00_1402, obj_t BgL_xz00_1403, obj_t BgL_yz00_1404)
{
{ /* Llib/bit.scm 626 */
{ /* Llib/bit.scm 626 */
int32_t BgL_tmpz00_3249;
{ /* Llib/bit.scm 626 */
long BgL_auxz00_3259;int32_t BgL_auxz00_3250;
{ /* Llib/bit.scm 626 */
obj_t BgL_tmpz00_3260;
if(
INTEGERP(BgL_yz00_1404))
{ /* Llib/bit.scm 626 */
BgL_tmpz00_3260 = BgL_yz00_1404
; }  else 
{ 
obj_t BgL_auxz00_3263;
BgL_auxz00_3263 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29520)), BGl_string1806z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1404); 
FAILURE(BgL_auxz00_3263,BFALSE,BFALSE);} 
BgL_auxz00_3259 = 
(long)CINT(BgL_tmpz00_3260); } 
{ /* Llib/bit.scm 626 */
obj_t BgL_tmpz00_3251;
if(
BGL_INT32P(BgL_xz00_1403))
{ /* Llib/bit.scm 626 */
BgL_tmpz00_3251 = BgL_xz00_1403
; }  else 
{ 
obj_t BgL_auxz00_3254;
BgL_auxz00_3254 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29520)), BGl_string1806z00zz__bitz00, BGl_string1737z00zz__bitz00, BgL_xz00_1403); 
FAILURE(BgL_auxz00_3254,BFALSE,BFALSE);} 
BgL_auxz00_3250 = 
BGL_BINT32_TO_INT32(BgL_tmpz00_3251); } 
BgL_tmpz00_3249 = 
BGl_bitzd2lshs32zd2zz__bitz00(BgL_auxz00_3250, BgL_auxz00_3259); } 
return 
BGL_INT32_TO_BINT32(BgL_tmpz00_3249);} } 

}



/* bit-lshu32 */
BGL_EXPORTED_DEF uint32_t BGl_bitzd2lshu32zd2zz__bitz00(uint32_t BgL_xz00_140, long BgL_yz00_141)
{
{ /* Llib/bit.scm 627 */
return 
(BgL_xz00_140 << 
(int)(BgL_yz00_141));} 

}



/* &bit-lshu32 */
obj_t BGl_z62bitzd2lshu32zb0zz__bitz00(obj_t BgL_envz00_1405, obj_t BgL_xz00_1406, obj_t BgL_yz00_1407)
{
{ /* Llib/bit.scm 627 */
{ /* Llib/bit.scm 627 */
uint32_t BgL_tmpz00_3272;
{ /* Llib/bit.scm 627 */
long BgL_auxz00_3282;uint32_t BgL_auxz00_3273;
{ /* Llib/bit.scm 627 */
obj_t BgL_tmpz00_3283;
if(
INTEGERP(BgL_yz00_1407))
{ /* Llib/bit.scm 627 */
BgL_tmpz00_3283 = BgL_yz00_1407
; }  else 
{ 
obj_t BgL_auxz00_3286;
BgL_auxz00_3286 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29570)), BGl_string1807z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1407); 
FAILURE(BgL_auxz00_3286,BFALSE,BFALSE);} 
BgL_auxz00_3282 = 
(long)CINT(BgL_tmpz00_3283); } 
{ /* Llib/bit.scm 627 */
obj_t BgL_tmpz00_3274;
if(
BGL_UINT32P(BgL_xz00_1406))
{ /* Llib/bit.scm 627 */
BgL_tmpz00_3274 = BgL_xz00_1406
; }  else 
{ 
obj_t BgL_auxz00_3277;
BgL_auxz00_3277 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29570)), BGl_string1807z00zz__bitz00, BGl_string1739z00zz__bitz00, BgL_xz00_1406); 
FAILURE(BgL_auxz00_3277,BFALSE,BFALSE);} 
BgL_auxz00_3273 = 
BGL_BUINT32_TO_UINT32(BgL_tmpz00_3274); } 
BgL_tmpz00_3272 = 
BGl_bitzd2lshu32zd2zz__bitz00(BgL_auxz00_3273, BgL_auxz00_3282); } 
return 
BGL_UINT32_TO_BUINT32(BgL_tmpz00_3272);} } 

}



/* bit-lshs64 */
BGL_EXPORTED_DEF int64_t BGl_bitzd2lshs64zd2zz__bitz00(int64_t BgL_xz00_142, long BgL_yz00_143)
{
{ /* Llib/bit.scm 628 */
return 
(BgL_xz00_142 << 
(int)(BgL_yz00_143));} 

}



/* &bit-lshs64 */
obj_t BGl_z62bitzd2lshs64zb0zz__bitz00(obj_t BgL_envz00_1408, obj_t BgL_xz00_1409, obj_t BgL_yz00_1410)
{
{ /* Llib/bit.scm 628 */
{ /* Llib/bit.scm 628 */
int64_t BgL_tmpz00_3295;
{ /* Llib/bit.scm 628 */
long BgL_auxz00_3305;int64_t BgL_auxz00_3296;
{ /* Llib/bit.scm 628 */
obj_t BgL_tmpz00_3306;
if(
INTEGERP(BgL_yz00_1410))
{ /* Llib/bit.scm 628 */
BgL_tmpz00_3306 = BgL_yz00_1410
; }  else 
{ 
obj_t BgL_auxz00_3309;
BgL_auxz00_3309 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29620)), BGl_string1808z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1410); 
FAILURE(BgL_auxz00_3309,BFALSE,BFALSE);} 
BgL_auxz00_3305 = 
(long)CINT(BgL_tmpz00_3306); } 
{ /* Llib/bit.scm 628 */
obj_t BgL_tmpz00_3297;
if(
BGL_INT64P(BgL_xz00_1409))
{ /* Llib/bit.scm 628 */
BgL_tmpz00_3297 = BgL_xz00_1409
; }  else 
{ 
obj_t BgL_auxz00_3300;
BgL_auxz00_3300 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29620)), BGl_string1808z00zz__bitz00, BGl_string1741z00zz__bitz00, BgL_xz00_1409); 
FAILURE(BgL_auxz00_3300,BFALSE,BFALSE);} 
BgL_auxz00_3296 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_3297); } 
BgL_tmpz00_3295 = 
BGl_bitzd2lshs64zd2zz__bitz00(BgL_auxz00_3296, BgL_auxz00_3305); } 
return 
BGL_INT64_TO_BINT64(BgL_tmpz00_3295);} } 

}



/* bit-lshu64 */
BGL_EXPORTED_DEF uint64_t BGl_bitzd2lshu64zd2zz__bitz00(uint64_t BgL_xz00_144, long BgL_yz00_145)
{
{ /* Llib/bit.scm 629 */
return 
(BgL_xz00_144 << 
(int)(BgL_yz00_145));} 

}



/* &bit-lshu64 */
obj_t BGl_z62bitzd2lshu64zb0zz__bitz00(obj_t BgL_envz00_1411, obj_t BgL_xz00_1412, obj_t BgL_yz00_1413)
{
{ /* Llib/bit.scm 629 */
{ /* Llib/bit.scm 629 */
uint64_t BgL_tmpz00_3318;
{ /* Llib/bit.scm 629 */
long BgL_auxz00_3328;uint64_t BgL_auxz00_3319;
{ /* Llib/bit.scm 629 */
obj_t BgL_tmpz00_3329;
if(
INTEGERP(BgL_yz00_1413))
{ /* Llib/bit.scm 629 */
BgL_tmpz00_3329 = BgL_yz00_1413
; }  else 
{ 
obj_t BgL_auxz00_3332;
BgL_auxz00_3332 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29670)), BGl_string1809z00zz__bitz00, BGl_string1723z00zz__bitz00, BgL_yz00_1413); 
FAILURE(BgL_auxz00_3332,BFALSE,BFALSE);} 
BgL_auxz00_3328 = 
(long)CINT(BgL_tmpz00_3329); } 
{ /* Llib/bit.scm 629 */
obj_t BgL_tmpz00_3320;
if(
BGL_UINT64P(BgL_xz00_1412))
{ /* Llib/bit.scm 629 */
BgL_tmpz00_3320 = BgL_xz00_1412
; }  else 
{ 
obj_t BgL_auxz00_3323;
BgL_auxz00_3323 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1721z00zz__bitz00, 
BINT(((long)29670)), BGl_string1809z00zz__bitz00, BGl_string1743z00zz__bitz00, BgL_xz00_1412); 
FAILURE(BgL_auxz00_3323,BFALSE,BFALSE);} 
BgL_auxz00_3319 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_3320); } 
BgL_tmpz00_3318 = 
BGl_bitzd2lshu64zd2zz__bitz00(BgL_auxz00_3319, BgL_auxz00_3328); } 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_3318);} } 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__bitz00()
{
{ /* Llib/bit.scm 14 */
return 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string1810z00zz__bitz00));} 

}

#ifdef __cplusplus
}
#endif
