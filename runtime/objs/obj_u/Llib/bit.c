/*===========================================================================*/
/*   (Llib/bit.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/bit.scm -indent -o objs/obj_u/Llib/bit.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
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
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL uint64_t BGl_bitzd2andu64zd2zz__bitz00(uint64_t, uint64_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_bitzd2xorllongzd2zz__bitz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
	static obj_t BGl_z62bitzd2andllongzb0zz__bitz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long,
		char *);
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
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_bitzd2lshllongzd2zz__bitz00(BGL_LONGLONG_T, long);
	static obj_t BGl_z62bitzd2oru64zb0zz__bitz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL int64_t BGl_bitzd2rshs64zd2zz__bitz00(int64_t, long);
	BGL_EXPORTED_DECL int64_t BGl_bitzd2nots64zd2zz__bitz00(int64_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_bitzd2andllongzd2zz__bitz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
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
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_bitzd2orllongzd2zz__bitz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
	BGL_EXPORTED_DECL uint16_t BGl_bitzd2urshu16zd2zz__bitz00(uint16_t, long);
	static obj_t BGl_z62bitzd2notu8zb0zz__bitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL int64_t BGl_bitzd2lshs64zd2zz__bitz00(int64_t, long);
	static obj_t BGl_z62bitzd2lshelongzb0zz__bitz00(obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__bitz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__bitz00();
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_bitzd2notllongzd2zz__bitz00(BGL_LONGLONG_T);
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
	BGL_EXPORTED_DECL unsigned long BGl_bitzd2urshzd2zz__bitz00(unsigned long,
		long);
	static obj_t BGl_z62bitzd2ors16zb0zz__bitz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL unsigned BGL_LONGLONG_T
		BGl_bitzd2urshllongzd2zz__bitz00(unsigned BGL_LONGLONG_T, long);
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
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_bitzd2rshllongzd2zz__bitz00(BGL_LONGLONG_T, long);
	BGL_EXPORTED_DECL int64_t BGl_bitzd2ands64zd2zz__bitz00(int64_t, int64_t);
	BGL_EXPORTED_DECL unsigned long BGl_bitzd2urshelongzd2zz__bitz00(unsigned
		long, long);
	BGL_EXPORTED_DECL int16_t BGl_bitzd2ors16zd2zz__bitz00(int16_t, int16_t);
	static obj_t BGl_z62bitzd2oru16zb0zz__bitz00(obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1789z00zz__bitz00,
		BgL_bgl_string1789za700za7za7_1799za7, "&bit-lshllong", 13);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2andllongzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2andllon1800z00, BGl_z62bitzd2andllongzb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2oru32zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2oru32za7b1801za7, BGl_z62bitzd2oru32zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1790z00zz__bitz00,
		BgL_bgl_string1790za700za7za7_1802za7, "&bit-lshs8", 10);
	      DEFINE_STRING(BGl_string1791z00zz__bitz00,
		BgL_bgl_string1791za700za7za7_1803za7, "&bit-lshu8", 10);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2lshu16zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2lshu16za71804za7, BGl_z62bitzd2lshu16zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1792z00zz__bitz00,
		BgL_bgl_string1792za700za7za7_1805za7, "&bit-lshs16", 11);
	      DEFINE_STRING(BGl_string1793z00zz__bitz00,
		BgL_bgl_string1793za700za7za7_1806za7, "&bit-lshu16", 11);
	      DEFINE_STRING(BGl_string1794z00zz__bitz00,
		BgL_bgl_string1794za700za7za7_1807za7, "&bit-lshs32", 11);
	      DEFINE_STRING(BGl_string1795z00zz__bitz00,
		BgL_bgl_string1795za700za7za7_1808za7, "&bit-lshu32", 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2rshu32zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2rshu32za71809za7, BGl_z62bitzd2rshu32zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1796z00zz__bitz00,
		BgL_bgl_string1796za700za7za7_1810za7, "&bit-lshs64", 11);
	      DEFINE_STRING(BGl_string1797z00zz__bitz00,
		BgL_bgl_string1797za700za7za7_1811za7, "&bit-lshu64", 11);
	      DEFINE_STRING(BGl_string1798z00zz__bitz00,
		BgL_bgl_string1798za700za7za7_1812za7, "__bit", 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2notu32zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2notu32za71813za7, BGl_z62bitzd2notu32zb0zz__bitz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2oru8zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2oru8za7b01814za7, BGl_z62bitzd2oru8zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2xors32zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2xors32za71815za7, BGl_z62bitzd2xors32zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2orelongzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2orelong1816z00, BGl_z62bitzd2orelongzb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2urshs16zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2urshs161817z00, BGl_z62bitzd2urshs16zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2notu8zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2notu8za7b1818za7, BGl_z62bitzd2notu8zb0zz__bitz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2andu8zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2andu8za7b1819za7, BGl_z62bitzd2andu8zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2lshu64zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2lshu64za71820za7, BGl_z62bitzd2lshu64zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2notelongzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2notelon1821z00, BGl_z62bitzd2notelongzb0zz__bitz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2rshllongzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2rshllon1822z00, BGl_z62bitzd2rshllongzb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2urshs64zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2urshs641823z00, BGl_z62bitzd2urshs64zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2urshzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2urshza7b01824za7, BGl_z62bitzd2urshzb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2urshllongzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2urshllo1825z00, BGl_z62bitzd2urshllongzb0zz__bitz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2andu32zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2andu32za71826za7, BGl_z62bitzd2andu32zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2xoru16zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2xoru16za71827za7, BGl_z62bitzd2xoru16zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2xorzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2xorza7b0za71828z00, BGl_z62bitzd2xorzb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2xoru64zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2xoru64za71829za7, BGl_z62bitzd2xoru64zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2ors32zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2ors32za7b1830za7, BGl_z62bitzd2ors32zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2lshs16zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2lshs16za71831za7, BGl_z62bitzd2lshs16zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2rshs32zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2rshs32za71832za7, BGl_z62bitzd2rshs32zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2nots32zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2nots32za71833za7, BGl_z62bitzd2nots32zb0zz__bitz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2lshu8zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2lshu8za7b1834za7, BGl_z62bitzd2lshu8zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2rshu8zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2rshu8za7b1835za7, BGl_z62bitzd2rshu8zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2lshs64zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2lshs64za71836za7, BGl_z62bitzd2lshs64zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2xoru8zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2xoru8za7b1837za7, BGl_z62bitzd2xoru8zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2xorllongzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2xorllon1838z00, BGl_z62bitzd2xorllongzb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2oru16zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2oru16za7b1839za7, BGl_z62bitzd2oru16zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2lshzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2lshza7b0za71840z00, BGl_z62bitzd2lshzb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2rshu16zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2rshu16za71841za7, BGl_z62bitzd2rshu16zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2ors8zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2ors8za7b01842za7, BGl_z62bitzd2ors8zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2ands32zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2ands32za71843za7, BGl_z62bitzd2ands32zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2notu16zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2notu16za71844za7, BGl_z62bitzd2notu16zb0zz__bitz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2urshu8zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2urshu8za71845za7, BGl_z62bitzd2urshu8zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2xors16zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2xors16za71846za7, BGl_z62bitzd2xors16zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2nots8zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2nots8za7b1847za7, BGl_z62bitzd2nots8zb0zz__bitz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2urshu32zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2urshu321848z00, BGl_z62bitzd2urshu32zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2ands8zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2ands8za7b1849za7, BGl_z62bitzd2ands8zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2lshelongzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2lshelon1850z00, BGl_z62bitzd2lshelongzb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2oru64zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2oru64za7b1851za7, BGl_z62bitzd2oru64zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1709z00zz__bitz00,
		BgL_bgl_string1709za700za7za7_1852za7, "/tmp/4.4a/runtime/Llib/bit.scm",
		30);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2andelongzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2andelon1853z00, BGl_z62bitzd2andelongzb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2rshu64zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2rshu64za71854za7, BGl_z62bitzd2rshu64zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2notu64zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2notu64za71855za7, BGl_z62bitzd2notu64zb0zz__bitz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2xors64zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2xors64za71856za7, BGl_z62bitzd2xors64zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1710z00zz__bitz00,
		BgL_bgl_string1710za700za7za7_1857za7, "&bit-or", 7);
	      DEFINE_STRING(BGl_string1711z00zz__bitz00,
		BgL_bgl_string1711za700za7za7_1858za7, "bint", 4);
	      DEFINE_STRING(BGl_string1712z00zz__bitz00,
		BgL_bgl_string1712za700za7za7_1859za7, "&bit-orelong", 12);
	      DEFINE_STRING(BGl_string1713z00zz__bitz00,
		BgL_bgl_string1713za700za7za7_1860za7, "belong", 6);
	      DEFINE_STRING(BGl_string1714z00zz__bitz00,
		BgL_bgl_string1714za700za7za7_1861za7, "&bit-orllong", 12);
	      DEFINE_STRING(BGl_string1715z00zz__bitz00,
		BgL_bgl_string1715za700za7za7_1862za7, "bllong", 6);
	      DEFINE_STRING(BGl_string1716z00zz__bitz00,
		BgL_bgl_string1716za700za7za7_1863za7, "&bit-ors8", 9);
	      DEFINE_STRING(BGl_string1717z00zz__bitz00,
		BgL_bgl_string1717za700za7za7_1864za7, "bint8", 5);
	      DEFINE_STRING(BGl_string1718z00zz__bitz00,
		BgL_bgl_string1718za700za7za7_1865za7, "&bit-oru8", 9);
	      DEFINE_STRING(BGl_string1719z00zz__bitz00,
		BgL_bgl_string1719za700za7za7_1866za7, "buint8", 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2andu16zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2andu16za71867za7, BGl_z62bitzd2andu16zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1720z00zz__bitz00,
		BgL_bgl_string1720za700za7za7_1868za7, "&bit-ors16", 10);
	      DEFINE_STRING(BGl_string1721z00zz__bitz00,
		BgL_bgl_string1721za700za7za7_1869za7, "bint16", 6);
	      DEFINE_STRING(BGl_string1722z00zz__bitz00,
		BgL_bgl_string1722za700za7za7_1870za7, "&bit-oru16", 10);
	      DEFINE_STRING(BGl_string1723z00zz__bitz00,
		BgL_bgl_string1723za700za7za7_1871za7, "buint16", 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2orllongzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2orllong1872z00, BGl_z62bitzd2orllongzb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1724z00zz__bitz00,
		BgL_bgl_string1724za700za7za7_1873za7, "&bit-ors32", 10);
	      DEFINE_STRING(BGl_string1725z00zz__bitz00,
		BgL_bgl_string1725za700za7za7_1874za7, "bint32", 6);
	      DEFINE_STRING(BGl_string1726z00zz__bitz00,
		BgL_bgl_string1726za700za7za7_1875za7, "&bit-oru32", 10);
	      DEFINE_STRING(BGl_string1727z00zz__bitz00,
		BgL_bgl_string1727za700za7za7_1876za7, "buint32", 7);
	      DEFINE_STRING(BGl_string1728z00zz__bitz00,
		BgL_bgl_string1728za700za7za7_1877za7, "&bit-ors64", 10);
	      DEFINE_STRING(BGl_string1729z00zz__bitz00,
		BgL_bgl_string1729za700za7za7_1878za7, "bint64", 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2rshelongzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2rshelon1879z00, BGl_z62bitzd2rshelongzb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2notllongzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2notllon1880z00, BGl_z62bitzd2notllongzb0zz__bitz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2andu64zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2andu64za71881za7, BGl_z62bitzd2andu64zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2urshelongzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2urshelo1882z00, BGl_z62bitzd2urshelongzb0zz__bitz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2ors16zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2ors16za7b1883za7, BGl_z62bitzd2ors16zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1730z00zz__bitz00,
		BgL_bgl_string1730za700za7za7_1884za7, "&bit-oru64", 10);
	      DEFINE_STRING(BGl_string1731z00zz__bitz00,
		BgL_bgl_string1731za700za7za7_1885za7, "buint64", 7);
	      DEFINE_STRING(BGl_string1732z00zz__bitz00,
		BgL_bgl_string1732za700za7za7_1886za7, "&bit-and", 8);
	      DEFINE_STRING(BGl_string1733z00zz__bitz00,
		BgL_bgl_string1733za700za7za7_1887za7, "&bit-andelong", 13);
	      DEFINE_STRING(BGl_string1734z00zz__bitz00,
		BgL_bgl_string1734za700za7za7_1888za7, "&bit-andllong", 13);
	      DEFINE_STRING(BGl_string1735z00zz__bitz00,
		BgL_bgl_string1735za700za7za7_1889za7, "&bit-ands8", 10);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2lshu32zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2lshu32za71890za7, BGl_z62bitzd2lshu32zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1736z00zz__bitz00,
		BgL_bgl_string1736za700za7za7_1891za7, "&bit-andu8", 10);
	      DEFINE_STRING(BGl_string1737z00zz__bitz00,
		BgL_bgl_string1737za700za7za7_1892za7, "&bit-ands16", 11);
	      DEFINE_STRING(BGl_string1738z00zz__bitz00,
		BgL_bgl_string1738za700za7za7_1893za7, "&bit-andu16", 11);
	      DEFINE_STRING(BGl_string1739z00zz__bitz00,
		BgL_bgl_string1739za700za7za7_1894za7, "&bit-ands32", 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2rshs16zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2rshs16za71895za7, BGl_z62bitzd2rshs16zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2rshzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2rshza7b0za71896z00, BGl_z62bitzd2rshzb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2nots16zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2nots16za71897za7, BGl_z62bitzd2nots16zb0zz__bitz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2andzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2andza7b0za71898z00, BGl_z62bitzd2andzb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2lshs8zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2lshs8za7b1899za7, BGl_z62bitzd2lshs8zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2rshs8zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2rshs8za7b1900za7, BGl_z62bitzd2rshs8zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2urshs32zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2urshs321901z00, BGl_z62bitzd2urshs32zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1740z00zz__bitz00,
		BgL_bgl_string1740za700za7za7_1902za7, "&bit-andu32", 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2ors64zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2ors64za7b1903za7, BGl_z62bitzd2ors64zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1741z00zz__bitz00,
		BgL_bgl_string1741za700za7za7_1904za7, "&bit-ands64", 11);
	      DEFINE_STRING(BGl_string1742z00zz__bitz00,
		BgL_bgl_string1742za700za7za7_1905za7, "&bit-andu64", 11);
	      DEFINE_STRING(BGl_string1743z00zz__bitz00,
		BgL_bgl_string1743za700za7za7_1906za7, "&bit-xor", 8);
	      DEFINE_STRING(BGl_string1744z00zz__bitz00,
		BgL_bgl_string1744za700za7za7_1907za7, "&bit-xorelong", 13);
	      DEFINE_STRING(BGl_string1745z00zz__bitz00,
		BgL_bgl_string1745za700za7za7_1908za7, "&bit-xorllong", 13);
	      DEFINE_STRING(BGl_string1746z00zz__bitz00,
		BgL_bgl_string1746za700za7za7_1909za7, "&bit-xors8", 10);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2xors8zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2xors8za7b1910za7, BGl_z62bitzd2xors8zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1747z00zz__bitz00,
		BgL_bgl_string1747za700za7za7_1911za7, "&bit-xoru8", 10);
	      DEFINE_STRING(BGl_string1748z00zz__bitz00,
		BgL_bgl_string1748za700za7za7_1912za7, "&bit-xors16", 11);
	      DEFINE_STRING(BGl_string1749z00zz__bitz00,
		BgL_bgl_string1749za700za7za7_1913za7, "&bit-xoru16", 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2rshs64zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2rshs64za71914za7, BGl_z62bitzd2rshs64zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2nots64zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2nots64za71915za7, BGl_z62bitzd2nots64zb0zz__bitz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1750z00zz__bitz00,
		BgL_bgl_string1750za700za7za7_1916za7, "&bit-xors32", 11);
	      DEFINE_STRING(BGl_string1751z00zz__bitz00,
		BgL_bgl_string1751za700za7za7_1917za7, "&bit-xoru32", 11);
	      DEFINE_STRING(BGl_string1752z00zz__bitz00,
		BgL_bgl_string1752za700za7za7_1918za7, "&bit-xors64", 11);
	      DEFINE_STRING(BGl_string1753z00zz__bitz00,
		BgL_bgl_string1753za700za7za7_1919za7, "&bit-xoru64", 11);
	      DEFINE_STRING(BGl_string1754z00zz__bitz00,
		BgL_bgl_string1754za700za7za7_1920za7, "&bit-not", 8);
	      DEFINE_STRING(BGl_string1755z00zz__bitz00,
		BgL_bgl_string1755za700za7za7_1921za7, "&bit-notelong", 13);
	      DEFINE_STRING(BGl_string1756z00zz__bitz00,
		BgL_bgl_string1756za700za7za7_1922za7, "&bit-notllong", 13);
	      DEFINE_STRING(BGl_string1757z00zz__bitz00,
		BgL_bgl_string1757za700za7za7_1923za7, "&bit-nots8", 10);
	      DEFINE_STRING(BGl_string1758z00zz__bitz00,
		BgL_bgl_string1758za700za7za7_1924za7, "&bit-notu8", 10);
	      DEFINE_STRING(BGl_string1759z00zz__bitz00,
		BgL_bgl_string1759za700za7za7_1925za7, "&bit-nots16", 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2urshs8zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2urshs8za71926za7, BGl_z62bitzd2urshs8zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2ands16zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2ands16za71927za7, BGl_z62bitzd2ands16zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2xoru32zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2xoru32za71928za7, BGl_z62bitzd2xoru32zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1760z00zz__bitz00,
		BgL_bgl_string1760za700za7za7_1929za7, "&bit-notu16", 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2urshu16zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2urshu161930z00, BGl_z62bitzd2urshu16zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1761z00zz__bitz00,
		BgL_bgl_string1761za700za7za7_1931za7, "&bit-nots32", 11);
	      DEFINE_STRING(BGl_string1762z00zz__bitz00,
		BgL_bgl_string1762za700za7za7_1932za7, "&bit-notu32", 11);
	      DEFINE_STRING(BGl_string1763z00zz__bitz00,
		BgL_bgl_string1763za700za7za7_1933za7, "&bit-nots64", 11);
	      DEFINE_STRING(BGl_string1764z00zz__bitz00,
		BgL_bgl_string1764za700za7za7_1934za7, "&bit-notu64", 11);
	      DEFINE_STRING(BGl_string1765z00zz__bitz00,
		BgL_bgl_string1765za700za7za7_1935za7, "&bit-rsh", 8);
	      DEFINE_STRING(BGl_string1766z00zz__bitz00,
		BgL_bgl_string1766za700za7za7_1936za7, "&bit-rshelong", 13);
	      DEFINE_STRING(BGl_string1767z00zz__bitz00,
		BgL_bgl_string1767za700za7za7_1937za7, "&bit-rshllong", 13);
	      DEFINE_STRING(BGl_string1768z00zz__bitz00,
		BgL_bgl_string1768za700za7za7_1938za7, "&bit-rshs8", 10);
	      DEFINE_STRING(BGl_string1769z00zz__bitz00,
		BgL_bgl_string1769za700za7za7_1939za7, "&bit-rshu8", 10);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2xorelongzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2xorelon1940z00, BGl_z62bitzd2xorelongzb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2ands64zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2ands64za71941za7, BGl_z62bitzd2ands64zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2orzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2orza7b0za7za71942za7, BGl_z62bitzd2orzb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2lshs32zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2lshs32za71943za7, BGl_z62bitzd2lshs32zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1770z00zz__bitz00,
		BgL_bgl_string1770za700za7za7_1944za7, "&bit-rshs16", 11);
	      DEFINE_STRING(BGl_string1771z00zz__bitz00,
		BgL_bgl_string1771za700za7za7_1945za7, "&bit-rshu16", 11);
	      DEFINE_STRING(BGl_string1772z00zz__bitz00,
		BgL_bgl_string1772za700za7za7_1946za7, "&bit-rshs32", 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2urshu64zd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2urshu641947z00, BGl_z62bitzd2urshu64zb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1773z00zz__bitz00,
		BgL_bgl_string1773za700za7za7_1948za7, "&bit-rshu32", 11);
	      DEFINE_STRING(BGl_string1774z00zz__bitz00,
		BgL_bgl_string1774za700za7za7_1949za7, "&bit-rshs64", 11);
	      DEFINE_STRING(BGl_string1775z00zz__bitz00,
		BgL_bgl_string1775za700za7za7_1950za7, "&bit-rshu64", 11);
	      DEFINE_STRING(BGl_string1776z00zz__bitz00,
		BgL_bgl_string1776za700za7za7_1951za7, "&bit-ursh", 9);
	      DEFINE_STRING(BGl_string1777z00zz__bitz00,
		BgL_bgl_string1777za700za7za7_1952za7, "&bit-urshelong", 14);
	      DEFINE_STRING(BGl_string1778z00zz__bitz00,
		BgL_bgl_string1778za700za7za7_1953za7, "&bit-urshllong", 14);
	      DEFINE_STRING(BGl_string1779z00zz__bitz00,
		BgL_bgl_string1779za700za7za7_1954za7, "&bit-urshu8", 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2notzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2notza7b0za71955z00, BGl_z62bitzd2notzb0zz__bitz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1780z00zz__bitz00,
		BgL_bgl_string1780za700za7za7_1956za7, "&bit-urshs8", 11);
	      DEFINE_STRING(BGl_string1781z00zz__bitz00,
		BgL_bgl_string1781za700za7za7_1957za7, "&bit-urshs16", 12);
	      DEFINE_STRING(BGl_string1782z00zz__bitz00,
		BgL_bgl_string1782za700za7za7_1958za7, "&bit-urshu16", 12);
	      DEFINE_STRING(BGl_string1783z00zz__bitz00,
		BgL_bgl_string1783za700za7za7_1959za7, "&bit-urshs32", 12);
	      DEFINE_STRING(BGl_string1784z00zz__bitz00,
		BgL_bgl_string1784za700za7za7_1960za7, "&bit-urshu32", 12);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2lshllongzd2envz00zz__bitz00,
		BgL_bgl_za762bitza7d2lshllon1961z00, BGl_z62bitzd2lshllongzb0zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1785z00zz__bitz00,
		BgL_bgl_string1785za700za7za7_1962za7, "&bit-urshs64", 12);
	      DEFINE_STRING(BGl_string1786z00zz__bitz00,
		BgL_bgl_string1786za700za7za7_1963za7, "&bit-urshu64", 12);
	      DEFINE_STRING(BGl_string1787z00zz__bitz00,
		BgL_bgl_string1787za700za7za7_1964za7, "&bit-lsh", 8);
	      DEFINE_STRING(BGl_string1788z00zz__bitz00,
		BgL_bgl_string1788za700za7za7_1965za7, "&bit-lshelong", 13);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__bitz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long
		BgL_checksumz00_1692, char *BgL_fromz00_1693)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__bitz00))
				{
					BGl_requirezd2initializa7ationz75zz__bitz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__bitz00();
					return BGl_importedzd2moduleszd2initz00zz__bitz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__bitz00()
	{
		{	/* Llib/bit.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* bit-or */
	BGL_EXPORTED_DEF long BGl_bitzd2orzd2zz__bitz00(long BgL_xz00_3,
		long BgL_yz00_4)
	{
		{	/* Llib/bit.scm 529 */
			return (BgL_xz00_3 | BgL_yz00_4);
		}

	}



/* &bit-or */
	obj_t BGl_z62bitzd2orzb0zz__bitz00(obj_t BgL_envz00_1186, obj_t BgL_xz00_1187,
		obj_t BgL_yz00_1188)
	{
		{	/* Llib/bit.scm 529 */
			{	/* Llib/bit.scm 529 */
				long BgL_tmpz00_1701;

				{	/* Llib/bit.scm 529 */
					long BgL_auxz00_1711;
					long BgL_auxz00_1702;

					{	/* Llib/bit.scm 529 */
						obj_t BgL_tmpz00_1712;

						if (INTEGERP(BgL_yz00_1188))
							{	/* Llib/bit.scm 529 */
								BgL_tmpz00_1712 = BgL_yz00_1188;
							}
						else
							{
								obj_t BgL_auxz00_1715;

								BgL_auxz00_1715 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 24555)), BGl_string1710z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1188);
								FAILURE(BgL_auxz00_1715, BFALSE, BFALSE);
							}
						BgL_auxz00_1711 = (long) CINT(BgL_tmpz00_1712);
					}
					{	/* Llib/bit.scm 529 */
						obj_t BgL_tmpz00_1703;

						if (INTEGERP(BgL_xz00_1187))
							{	/* Llib/bit.scm 529 */
								BgL_tmpz00_1703 = BgL_xz00_1187;
							}
						else
							{
								obj_t BgL_auxz00_1706;

								BgL_auxz00_1706 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 24555)), BGl_string1710z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_xz00_1187);
								FAILURE(BgL_auxz00_1706, BFALSE, BFALSE);
							}
						BgL_auxz00_1702 = (long) CINT(BgL_tmpz00_1703);
					}
					BgL_tmpz00_1701 =
						BGl_bitzd2orzd2zz__bitz00(BgL_auxz00_1702, BgL_auxz00_1711);
				}
				return BINT(BgL_tmpz00_1701);
			}
		}

	}



/* bit-orelong */
	BGL_EXPORTED_DEF long BGl_bitzd2orelongzd2zz__bitz00(long BgL_xz00_5,
		long BgL_yz00_6)
	{
		{	/* Llib/bit.scm 530 */
			return (BgL_xz00_5 | BgL_yz00_6);
		}

	}



/* &bit-orelong */
	obj_t BGl_z62bitzd2orelongzb0zz__bitz00(obj_t BgL_envz00_1189,
		obj_t BgL_xz00_1190, obj_t BgL_yz00_1191)
	{
		{	/* Llib/bit.scm 530 */
			{	/* Llib/bit.scm 530 */
				long BgL_tmpz00_1723;

				{	/* Llib/bit.scm 530 */
					long BgL_auxz00_1733;
					long BgL_auxz00_1724;

					{	/* Llib/bit.scm 530 */
						obj_t BgL_tmpz00_1734;

						if (ELONGP(BgL_yz00_1191))
							{	/* Llib/bit.scm 530 */
								BgL_tmpz00_1734 = BgL_yz00_1191;
							}
						else
							{
								obj_t BgL_auxz00_1737;

								BgL_auxz00_1737 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 24603)), BGl_string1712z00zz__bitz00,
									BGl_string1713z00zz__bitz00, BgL_yz00_1191);
								FAILURE(BgL_auxz00_1737, BFALSE, BFALSE);
							}
						BgL_auxz00_1733 = BELONG_TO_LONG(BgL_tmpz00_1734);
					}
					{	/* Llib/bit.scm 530 */
						obj_t BgL_tmpz00_1725;

						if (ELONGP(BgL_xz00_1190))
							{	/* Llib/bit.scm 530 */
								BgL_tmpz00_1725 = BgL_xz00_1190;
							}
						else
							{
								obj_t BgL_auxz00_1728;

								BgL_auxz00_1728 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 24603)), BGl_string1712z00zz__bitz00,
									BGl_string1713z00zz__bitz00, BgL_xz00_1190);
								FAILURE(BgL_auxz00_1728, BFALSE, BFALSE);
							}
						BgL_auxz00_1724 = BELONG_TO_LONG(BgL_tmpz00_1725);
					}
					BgL_tmpz00_1723 =
						BGl_bitzd2orelongzd2zz__bitz00(BgL_auxz00_1724, BgL_auxz00_1733);
				}
				return make_belong(BgL_tmpz00_1723);
			}
		}

	}



/* bit-orllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2orllongzd2zz__bitz00(BGL_LONGLONG_T
		BgL_xz00_7, BGL_LONGLONG_T BgL_yz00_8)
	{
		{	/* Llib/bit.scm 531 */
			return (BgL_xz00_7 | BgL_yz00_8);
		}

	}



/* &bit-orllong */
	obj_t BGl_z62bitzd2orllongzb0zz__bitz00(obj_t BgL_envz00_1192,
		obj_t BgL_xz00_1193, obj_t BgL_yz00_1194)
	{
		{	/* Llib/bit.scm 531 */
			{	/* Llib/bit.scm 531 */
				BGL_LONGLONG_T BgL_tmpz00_1745;

				{	/* Llib/bit.scm 531 */
					BGL_LONGLONG_T BgL_auxz00_1755;
					BGL_LONGLONG_T BgL_auxz00_1746;

					{	/* Llib/bit.scm 531 */
						obj_t BgL_tmpz00_1756;

						if (LLONGP(BgL_yz00_1194))
							{	/* Llib/bit.scm 531 */
								BgL_tmpz00_1756 = BgL_yz00_1194;
							}
						else
							{
								obj_t BgL_auxz00_1759;

								BgL_auxz00_1759 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 24656)), BGl_string1714z00zz__bitz00,
									BGl_string1715z00zz__bitz00, BgL_yz00_1194);
								FAILURE(BgL_auxz00_1759, BFALSE, BFALSE);
							}
						BgL_auxz00_1755 = BLLONG_TO_LLONG(BgL_tmpz00_1756);
					}
					{	/* Llib/bit.scm 531 */
						obj_t BgL_tmpz00_1747;

						if (LLONGP(BgL_xz00_1193))
							{	/* Llib/bit.scm 531 */
								BgL_tmpz00_1747 = BgL_xz00_1193;
							}
						else
							{
								obj_t BgL_auxz00_1750;

								BgL_auxz00_1750 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 24656)), BGl_string1714z00zz__bitz00,
									BGl_string1715z00zz__bitz00, BgL_xz00_1193);
								FAILURE(BgL_auxz00_1750, BFALSE, BFALSE);
							}
						BgL_auxz00_1746 = BLLONG_TO_LLONG(BgL_tmpz00_1747);
					}
					BgL_tmpz00_1745 =
						BGl_bitzd2orllongzd2zz__bitz00(BgL_auxz00_1746, BgL_auxz00_1755);
				}
				return make_bllong(BgL_tmpz00_1745);
			}
		}

	}



/* bit-ors8 */
	BGL_EXPORTED_DEF int8_t BGl_bitzd2ors8zd2zz__bitz00(int8_t BgL_xz00_9,
		int8_t BgL_yz00_10)
	{
		{	/* Llib/bit.scm 532 */
			return (BgL_xz00_9 | BgL_yz00_10);
		}

	}



/* &bit-ors8 */
	obj_t BGl_z62bitzd2ors8zb0zz__bitz00(obj_t BgL_envz00_1195,
		obj_t BgL_xz00_1196, obj_t BgL_yz00_1197)
	{
		{	/* Llib/bit.scm 532 */
			{	/* Llib/bit.scm 532 */
				int8_t BgL_tmpz00_1767;

				{	/* Llib/bit.scm 532 */
					int8_t BgL_auxz00_1777;
					int8_t BgL_auxz00_1768;

					{	/* Llib/bit.scm 532 */
						obj_t BgL_tmpz00_1778;

						if (BGL_INT8P(BgL_yz00_1197))
							{	/* Llib/bit.scm 532 */
								BgL_tmpz00_1778 = BgL_yz00_1197;
							}
						else
							{
								obj_t BgL_auxz00_1781;

								BgL_auxz00_1781 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 24706)), BGl_string1716z00zz__bitz00,
									BGl_string1717z00zz__bitz00, BgL_yz00_1197);
								FAILURE(BgL_auxz00_1781, BFALSE, BFALSE);
							}
						BgL_auxz00_1777 = BGL_BINT8_TO_INT8(BgL_tmpz00_1778);
					}
					{	/* Llib/bit.scm 532 */
						obj_t BgL_tmpz00_1769;

						if (BGL_INT8P(BgL_xz00_1196))
							{	/* Llib/bit.scm 532 */
								BgL_tmpz00_1769 = BgL_xz00_1196;
							}
						else
							{
								obj_t BgL_auxz00_1772;

								BgL_auxz00_1772 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 24706)), BGl_string1716z00zz__bitz00,
									BGl_string1717z00zz__bitz00, BgL_xz00_1196);
								FAILURE(BgL_auxz00_1772, BFALSE, BFALSE);
							}
						BgL_auxz00_1768 = BGL_BINT8_TO_INT8(BgL_tmpz00_1769);
					}
					BgL_tmpz00_1767 =
						BGl_bitzd2ors8zd2zz__bitz00(BgL_auxz00_1768, BgL_auxz00_1777);
				}
				return BGL_INT8_TO_BINT8(BgL_tmpz00_1767);
			}
		}

	}



/* bit-oru8 */
	BGL_EXPORTED_DEF uint8_t BGl_bitzd2oru8zd2zz__bitz00(uint8_t BgL_xz00_11,
		uint8_t BgL_yz00_12)
	{
		{	/* Llib/bit.scm 533 */
			return (BgL_xz00_11 | BgL_yz00_12);
		}

	}



/* &bit-oru8 */
	obj_t BGl_z62bitzd2oru8zb0zz__bitz00(obj_t BgL_envz00_1198,
		obj_t BgL_xz00_1199, obj_t BgL_yz00_1200)
	{
		{	/* Llib/bit.scm 533 */
			{	/* Llib/bit.scm 533 */
				uint8_t BgL_tmpz00_1789;

				{	/* Llib/bit.scm 533 */
					uint8_t BgL_auxz00_1799;
					uint8_t BgL_auxz00_1790;

					{	/* Llib/bit.scm 533 */
						obj_t BgL_tmpz00_1800;

						if (BGL_UINT8P(BgL_yz00_1200))
							{	/* Llib/bit.scm 533 */
								BgL_tmpz00_1800 = BgL_yz00_1200;
							}
						else
							{
								obj_t BgL_auxz00_1803;

								BgL_auxz00_1803 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 24752)), BGl_string1718z00zz__bitz00,
									BGl_string1719z00zz__bitz00, BgL_yz00_1200);
								FAILURE(BgL_auxz00_1803, BFALSE, BFALSE);
							}
						BgL_auxz00_1799 = BGL_BUINT8_TO_UINT8(BgL_tmpz00_1800);
					}
					{	/* Llib/bit.scm 533 */
						obj_t BgL_tmpz00_1791;

						if (BGL_UINT8P(BgL_xz00_1199))
							{	/* Llib/bit.scm 533 */
								BgL_tmpz00_1791 = BgL_xz00_1199;
							}
						else
							{
								obj_t BgL_auxz00_1794;

								BgL_auxz00_1794 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 24752)), BGl_string1718z00zz__bitz00,
									BGl_string1719z00zz__bitz00, BgL_xz00_1199);
								FAILURE(BgL_auxz00_1794, BFALSE, BFALSE);
							}
						BgL_auxz00_1790 = BGL_BUINT8_TO_UINT8(BgL_tmpz00_1791);
					}
					BgL_tmpz00_1789 =
						BGl_bitzd2oru8zd2zz__bitz00(BgL_auxz00_1790, BgL_auxz00_1799);
				}
				return BGL_UINT8_TO_BUINT8(BgL_tmpz00_1789);
			}
		}

	}



/* bit-ors16 */
	BGL_EXPORTED_DEF int16_t BGl_bitzd2ors16zd2zz__bitz00(int16_t BgL_xz00_13,
		int16_t BgL_yz00_14)
	{
		{	/* Llib/bit.scm 534 */
			return (BgL_xz00_13 | BgL_yz00_14);
		}

	}



/* &bit-ors16 */
	obj_t BGl_z62bitzd2ors16zb0zz__bitz00(obj_t BgL_envz00_1201,
		obj_t BgL_xz00_1202, obj_t BgL_yz00_1203)
	{
		{	/* Llib/bit.scm 534 */
			{	/* Llib/bit.scm 534 */
				int16_t BgL_tmpz00_1811;

				{	/* Llib/bit.scm 534 */
					int16_t BgL_auxz00_1821;
					int16_t BgL_auxz00_1812;

					{	/* Llib/bit.scm 534 */
						obj_t BgL_tmpz00_1822;

						if (BGL_INT16P(BgL_yz00_1203))
							{	/* Llib/bit.scm 534 */
								BgL_tmpz00_1822 = BgL_yz00_1203;
							}
						else
							{
								obj_t BgL_auxz00_1825;

								BgL_auxz00_1825 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 24799)), BGl_string1720z00zz__bitz00,
									BGl_string1721z00zz__bitz00, BgL_yz00_1203);
								FAILURE(BgL_auxz00_1825, BFALSE, BFALSE);
							}
						BgL_auxz00_1821 = BGL_BINT16_TO_INT16(BgL_tmpz00_1822);
					}
					{	/* Llib/bit.scm 534 */
						obj_t BgL_tmpz00_1813;

						if (BGL_INT16P(BgL_xz00_1202))
							{	/* Llib/bit.scm 534 */
								BgL_tmpz00_1813 = BgL_xz00_1202;
							}
						else
							{
								obj_t BgL_auxz00_1816;

								BgL_auxz00_1816 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 24799)), BGl_string1720z00zz__bitz00,
									BGl_string1721z00zz__bitz00, BgL_xz00_1202);
								FAILURE(BgL_auxz00_1816, BFALSE, BFALSE);
							}
						BgL_auxz00_1812 = BGL_BINT16_TO_INT16(BgL_tmpz00_1813);
					}
					BgL_tmpz00_1811 =
						BGl_bitzd2ors16zd2zz__bitz00(BgL_auxz00_1812, BgL_auxz00_1821);
				}
				return BGL_INT16_TO_BINT16(BgL_tmpz00_1811);
			}
		}

	}



/* bit-oru16 */
	BGL_EXPORTED_DEF uint16_t BGl_bitzd2oru16zd2zz__bitz00(uint16_t BgL_xz00_15,
		uint16_t BgL_yz00_16)
	{
		{	/* Llib/bit.scm 535 */
			return (BgL_xz00_15 | BgL_yz00_16);
		}

	}



/* &bit-oru16 */
	obj_t BGl_z62bitzd2oru16zb0zz__bitz00(obj_t BgL_envz00_1204,
		obj_t BgL_xz00_1205, obj_t BgL_yz00_1206)
	{
		{	/* Llib/bit.scm 535 */
			{	/* Llib/bit.scm 535 */
				uint16_t BgL_tmpz00_1833;

				{	/* Llib/bit.scm 535 */
					uint16_t BgL_auxz00_1843;
					uint16_t BgL_auxz00_1834;

					{	/* Llib/bit.scm 535 */
						obj_t BgL_tmpz00_1844;

						if (BGL_UINT16P(BgL_yz00_1206))
							{	/* Llib/bit.scm 535 */
								BgL_tmpz00_1844 = BgL_yz00_1206;
							}
						else
							{
								obj_t BgL_auxz00_1847;

								BgL_auxz00_1847 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 24847)), BGl_string1722z00zz__bitz00,
									BGl_string1723z00zz__bitz00, BgL_yz00_1206);
								FAILURE(BgL_auxz00_1847, BFALSE, BFALSE);
							}
						BgL_auxz00_1843 = BGL_BUINT16_TO_UINT16(BgL_tmpz00_1844);
					}
					{	/* Llib/bit.scm 535 */
						obj_t BgL_tmpz00_1835;

						if (BGL_UINT16P(BgL_xz00_1205))
							{	/* Llib/bit.scm 535 */
								BgL_tmpz00_1835 = BgL_xz00_1205;
							}
						else
							{
								obj_t BgL_auxz00_1838;

								BgL_auxz00_1838 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 24847)), BGl_string1722z00zz__bitz00,
									BGl_string1723z00zz__bitz00, BgL_xz00_1205);
								FAILURE(BgL_auxz00_1838, BFALSE, BFALSE);
							}
						BgL_auxz00_1834 = BGL_BUINT16_TO_UINT16(BgL_tmpz00_1835);
					}
					BgL_tmpz00_1833 =
						BGl_bitzd2oru16zd2zz__bitz00(BgL_auxz00_1834, BgL_auxz00_1843);
				}
				return BGL_UINT16_TO_BUINT16(BgL_tmpz00_1833);
			}
		}

	}



/* bit-ors32 */
	BGL_EXPORTED_DEF int32_t BGl_bitzd2ors32zd2zz__bitz00(int32_t BgL_xz00_17,
		int32_t BgL_yz00_18)
	{
		{	/* Llib/bit.scm 536 */
			return (BgL_xz00_17 | BgL_yz00_18);
		}

	}



/* &bit-ors32 */
	obj_t BGl_z62bitzd2ors32zb0zz__bitz00(obj_t BgL_envz00_1207,
		obj_t BgL_xz00_1208, obj_t BgL_yz00_1209)
	{
		{	/* Llib/bit.scm 536 */
			{	/* Llib/bit.scm 536 */
				int32_t BgL_tmpz00_1855;

				{	/* Llib/bit.scm 536 */
					int32_t BgL_auxz00_1865;
					int32_t BgL_auxz00_1856;

					{	/* Llib/bit.scm 536 */
						obj_t BgL_tmpz00_1866;

						if (BGL_INT32P(BgL_yz00_1209))
							{	/* Llib/bit.scm 536 */
								BgL_tmpz00_1866 = BgL_yz00_1209;
							}
						else
							{
								obj_t BgL_auxz00_1869;

								BgL_auxz00_1869 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 24895)), BGl_string1724z00zz__bitz00,
									BGl_string1725z00zz__bitz00, BgL_yz00_1209);
								FAILURE(BgL_auxz00_1869, BFALSE, BFALSE);
							}
						BgL_auxz00_1865 = BGL_BINT32_TO_INT32(BgL_tmpz00_1866);
					}
					{	/* Llib/bit.scm 536 */
						obj_t BgL_tmpz00_1857;

						if (BGL_INT32P(BgL_xz00_1208))
							{	/* Llib/bit.scm 536 */
								BgL_tmpz00_1857 = BgL_xz00_1208;
							}
						else
							{
								obj_t BgL_auxz00_1860;

								BgL_auxz00_1860 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 24895)), BGl_string1724z00zz__bitz00,
									BGl_string1725z00zz__bitz00, BgL_xz00_1208);
								FAILURE(BgL_auxz00_1860, BFALSE, BFALSE);
							}
						BgL_auxz00_1856 = BGL_BINT32_TO_INT32(BgL_tmpz00_1857);
					}
					BgL_tmpz00_1855 =
						BGl_bitzd2ors32zd2zz__bitz00(BgL_auxz00_1856, BgL_auxz00_1865);
				}
				return BGL_INT32_TO_BINT32(BgL_tmpz00_1855);
			}
		}

	}



/* bit-oru32 */
	BGL_EXPORTED_DEF uint32_t BGl_bitzd2oru32zd2zz__bitz00(uint32_t BgL_xz00_19,
		uint32_t BgL_yz00_20)
	{
		{	/* Llib/bit.scm 537 */
			return (BgL_xz00_19 | BgL_yz00_20);
		}

	}



/* &bit-oru32 */
	obj_t BGl_z62bitzd2oru32zb0zz__bitz00(obj_t BgL_envz00_1210,
		obj_t BgL_xz00_1211, obj_t BgL_yz00_1212)
	{
		{	/* Llib/bit.scm 537 */
			{	/* Llib/bit.scm 537 */
				uint32_t BgL_tmpz00_1877;

				{	/* Llib/bit.scm 537 */
					uint32_t BgL_auxz00_1887;
					uint32_t BgL_auxz00_1878;

					{	/* Llib/bit.scm 537 */
						obj_t BgL_tmpz00_1888;

						if (BGL_UINT32P(BgL_yz00_1212))
							{	/* Llib/bit.scm 537 */
								BgL_tmpz00_1888 = BgL_yz00_1212;
							}
						else
							{
								obj_t BgL_auxz00_1891;

								BgL_auxz00_1891 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 24943)), BGl_string1726z00zz__bitz00,
									BGl_string1727z00zz__bitz00, BgL_yz00_1212);
								FAILURE(BgL_auxz00_1891, BFALSE, BFALSE);
							}
						BgL_auxz00_1887 = BGL_BUINT32_TO_UINT32(BgL_tmpz00_1888);
					}
					{	/* Llib/bit.scm 537 */
						obj_t BgL_tmpz00_1879;

						if (BGL_UINT32P(BgL_xz00_1211))
							{	/* Llib/bit.scm 537 */
								BgL_tmpz00_1879 = BgL_xz00_1211;
							}
						else
							{
								obj_t BgL_auxz00_1882;

								BgL_auxz00_1882 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 24943)), BGl_string1726z00zz__bitz00,
									BGl_string1727z00zz__bitz00, BgL_xz00_1211);
								FAILURE(BgL_auxz00_1882, BFALSE, BFALSE);
							}
						BgL_auxz00_1878 = BGL_BUINT32_TO_UINT32(BgL_tmpz00_1879);
					}
					BgL_tmpz00_1877 =
						BGl_bitzd2oru32zd2zz__bitz00(BgL_auxz00_1878, BgL_auxz00_1887);
				}
				return BGL_UINT32_TO_BUINT32(BgL_tmpz00_1877);
			}
		}

	}



/* bit-ors64 */
	BGL_EXPORTED_DEF int64_t BGl_bitzd2ors64zd2zz__bitz00(int64_t BgL_xz00_21,
		int64_t BgL_yz00_22)
	{
		{	/* Llib/bit.scm 538 */
			return (BgL_xz00_21 | BgL_yz00_22);
		}

	}



/* &bit-ors64 */
	obj_t BGl_z62bitzd2ors64zb0zz__bitz00(obj_t BgL_envz00_1213,
		obj_t BgL_xz00_1214, obj_t BgL_yz00_1215)
	{
		{	/* Llib/bit.scm 538 */
			{	/* Llib/bit.scm 538 */
				int64_t BgL_tmpz00_1899;

				{	/* Llib/bit.scm 538 */
					int64_t BgL_auxz00_1909;
					int64_t BgL_auxz00_1900;

					{	/* Llib/bit.scm 538 */
						obj_t BgL_tmpz00_1910;

						if (BGL_INT64P(BgL_yz00_1215))
							{	/* Llib/bit.scm 538 */
								BgL_tmpz00_1910 = BgL_yz00_1215;
							}
						else
							{
								obj_t BgL_auxz00_1913;

								BgL_auxz00_1913 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 24991)), BGl_string1728z00zz__bitz00,
									BGl_string1729z00zz__bitz00, BgL_yz00_1215);
								FAILURE(BgL_auxz00_1913, BFALSE, BFALSE);
							}
						BgL_auxz00_1909 = BGL_BINT64_TO_INT64(BgL_tmpz00_1910);
					}
					{	/* Llib/bit.scm 538 */
						obj_t BgL_tmpz00_1901;

						if (BGL_INT64P(BgL_xz00_1214))
							{	/* Llib/bit.scm 538 */
								BgL_tmpz00_1901 = BgL_xz00_1214;
							}
						else
							{
								obj_t BgL_auxz00_1904;

								BgL_auxz00_1904 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 24991)), BGl_string1728z00zz__bitz00,
									BGl_string1729z00zz__bitz00, BgL_xz00_1214);
								FAILURE(BgL_auxz00_1904, BFALSE, BFALSE);
							}
						BgL_auxz00_1900 = BGL_BINT64_TO_INT64(BgL_tmpz00_1901);
					}
					BgL_tmpz00_1899 =
						BGl_bitzd2ors64zd2zz__bitz00(BgL_auxz00_1900, BgL_auxz00_1909);
				}
				return BGL_INT64_TO_BINT64(BgL_tmpz00_1899);
			}
		}

	}



/* bit-oru64 */
	BGL_EXPORTED_DEF uint64_t BGl_bitzd2oru64zd2zz__bitz00(uint64_t BgL_xz00_23,
		uint64_t BgL_yz00_24)
	{
		{	/* Llib/bit.scm 539 */
			return (BgL_xz00_23 | BgL_yz00_24);
		}

	}



/* &bit-oru64 */
	obj_t BGl_z62bitzd2oru64zb0zz__bitz00(obj_t BgL_envz00_1216,
		obj_t BgL_xz00_1217, obj_t BgL_yz00_1218)
	{
		{	/* Llib/bit.scm 539 */
			{	/* Llib/bit.scm 539 */
				uint64_t BgL_tmpz00_1921;

				{	/* Llib/bit.scm 539 */
					uint64_t BgL_auxz00_1931;
					uint64_t BgL_auxz00_1922;

					{	/* Llib/bit.scm 539 */
						obj_t BgL_tmpz00_1932;

						if (BGL_UINT64P(BgL_yz00_1218))
							{	/* Llib/bit.scm 539 */
								BgL_tmpz00_1932 = BgL_yz00_1218;
							}
						else
							{
								obj_t BgL_auxz00_1935;

								BgL_auxz00_1935 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25039)), BGl_string1730z00zz__bitz00,
									BGl_string1731z00zz__bitz00, BgL_yz00_1218);
								FAILURE(BgL_auxz00_1935, BFALSE, BFALSE);
							}
						BgL_auxz00_1931 = BGL_BINT64_TO_INT64(BgL_tmpz00_1932);
					}
					{	/* Llib/bit.scm 539 */
						obj_t BgL_tmpz00_1923;

						if (BGL_UINT64P(BgL_xz00_1217))
							{	/* Llib/bit.scm 539 */
								BgL_tmpz00_1923 = BgL_xz00_1217;
							}
						else
							{
								obj_t BgL_auxz00_1926;

								BgL_auxz00_1926 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25039)), BGl_string1730z00zz__bitz00,
									BGl_string1731z00zz__bitz00, BgL_xz00_1217);
								FAILURE(BgL_auxz00_1926, BFALSE, BFALSE);
							}
						BgL_auxz00_1922 = BGL_BINT64_TO_INT64(BgL_tmpz00_1923);
					}
					BgL_tmpz00_1921 =
						BGl_bitzd2oru64zd2zz__bitz00(BgL_auxz00_1922, BgL_auxz00_1931);
				}
				return BGL_UINT64_TO_BUINT64(BgL_tmpz00_1921);
			}
		}

	}



/* bit-and */
	BGL_EXPORTED_DEF long BGl_bitzd2andzd2zz__bitz00(long BgL_xz00_25,
		long BgL_yz00_26)
	{
		{	/* Llib/bit.scm 544 */
			return (BgL_xz00_25 & BgL_yz00_26);
		}

	}



/* &bit-and */
	obj_t BGl_z62bitzd2andzb0zz__bitz00(obj_t BgL_envz00_1219,
		obj_t BgL_xz00_1220, obj_t BgL_yz00_1221)
	{
		{	/* Llib/bit.scm 544 */
			{	/* Llib/bit.scm 544 */
				long BgL_tmpz00_1943;

				{	/* Llib/bit.scm 544 */
					long BgL_auxz00_1953;
					long BgL_auxz00_1944;

					{	/* Llib/bit.scm 544 */
						obj_t BgL_tmpz00_1954;

						if (INTEGERP(BgL_yz00_1221))
							{	/* Llib/bit.scm 544 */
								BgL_tmpz00_1954 = BgL_yz00_1221;
							}
						else
							{
								obj_t BgL_auxz00_1957;

								BgL_auxz00_1957 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25308)), BGl_string1732z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1221);
								FAILURE(BgL_auxz00_1957, BFALSE, BFALSE);
							}
						BgL_auxz00_1953 = (long) CINT(BgL_tmpz00_1954);
					}
					{	/* Llib/bit.scm 544 */
						obj_t BgL_tmpz00_1945;

						if (INTEGERP(BgL_xz00_1220))
							{	/* Llib/bit.scm 544 */
								BgL_tmpz00_1945 = BgL_xz00_1220;
							}
						else
							{
								obj_t BgL_auxz00_1948;

								BgL_auxz00_1948 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25308)), BGl_string1732z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_xz00_1220);
								FAILURE(BgL_auxz00_1948, BFALSE, BFALSE);
							}
						BgL_auxz00_1944 = (long) CINT(BgL_tmpz00_1945);
					}
					BgL_tmpz00_1943 =
						BGl_bitzd2andzd2zz__bitz00(BgL_auxz00_1944, BgL_auxz00_1953);
				}
				return BINT(BgL_tmpz00_1943);
			}
		}

	}



/* bit-andelong */
	BGL_EXPORTED_DEF long BGl_bitzd2andelongzd2zz__bitz00(long BgL_xz00_27,
		long BgL_yz00_28)
	{
		{	/* Llib/bit.scm 545 */
			return (BgL_xz00_27 & BgL_yz00_28);
		}

	}



/* &bit-andelong */
	obj_t BGl_z62bitzd2andelongzb0zz__bitz00(obj_t BgL_envz00_1222,
		obj_t BgL_xz00_1223, obj_t BgL_yz00_1224)
	{
		{	/* Llib/bit.scm 545 */
			{	/* Llib/bit.scm 545 */
				long BgL_tmpz00_1965;

				{	/* Llib/bit.scm 545 */
					long BgL_auxz00_1975;
					long BgL_auxz00_1966;

					{	/* Llib/bit.scm 545 */
						obj_t BgL_tmpz00_1976;

						if (ELONGP(BgL_yz00_1224))
							{	/* Llib/bit.scm 545 */
								BgL_tmpz00_1976 = BgL_yz00_1224;
							}
						else
							{
								obj_t BgL_auxz00_1979;

								BgL_auxz00_1979 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25358)), BGl_string1733z00zz__bitz00,
									BGl_string1713z00zz__bitz00, BgL_yz00_1224);
								FAILURE(BgL_auxz00_1979, BFALSE, BFALSE);
							}
						BgL_auxz00_1975 = BELONG_TO_LONG(BgL_tmpz00_1976);
					}
					{	/* Llib/bit.scm 545 */
						obj_t BgL_tmpz00_1967;

						if (ELONGP(BgL_xz00_1223))
							{	/* Llib/bit.scm 545 */
								BgL_tmpz00_1967 = BgL_xz00_1223;
							}
						else
							{
								obj_t BgL_auxz00_1970;

								BgL_auxz00_1970 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25358)), BGl_string1733z00zz__bitz00,
									BGl_string1713z00zz__bitz00, BgL_xz00_1223);
								FAILURE(BgL_auxz00_1970, BFALSE, BFALSE);
							}
						BgL_auxz00_1966 = BELONG_TO_LONG(BgL_tmpz00_1967);
					}
					BgL_tmpz00_1965 =
						BGl_bitzd2andelongzd2zz__bitz00(BgL_auxz00_1966, BgL_auxz00_1975);
				}
				return make_belong(BgL_tmpz00_1965);
			}
		}

	}



/* bit-andllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2andllongzd2zz__bitz00(BGL_LONGLONG_T
		BgL_xz00_29, BGL_LONGLONG_T BgL_yz00_30)
	{
		{	/* Llib/bit.scm 546 */
			return (BgL_xz00_29 & BgL_yz00_30);
		}

	}



/* &bit-andllong */
	obj_t BGl_z62bitzd2andllongzb0zz__bitz00(obj_t BgL_envz00_1225,
		obj_t BgL_xz00_1226, obj_t BgL_yz00_1227)
	{
		{	/* Llib/bit.scm 546 */
			{	/* Llib/bit.scm 546 */
				BGL_LONGLONG_T BgL_tmpz00_1987;

				{	/* Llib/bit.scm 546 */
					BGL_LONGLONG_T BgL_auxz00_1997;
					BGL_LONGLONG_T BgL_auxz00_1988;

					{	/* Llib/bit.scm 546 */
						obj_t BgL_tmpz00_1998;

						if (LLONGP(BgL_yz00_1227))
							{	/* Llib/bit.scm 546 */
								BgL_tmpz00_1998 = BgL_yz00_1227;
							}
						else
							{
								obj_t BgL_auxz00_2001;

								BgL_auxz00_2001 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25413)), BGl_string1734z00zz__bitz00,
									BGl_string1715z00zz__bitz00, BgL_yz00_1227);
								FAILURE(BgL_auxz00_2001, BFALSE, BFALSE);
							}
						BgL_auxz00_1997 = BLLONG_TO_LLONG(BgL_tmpz00_1998);
					}
					{	/* Llib/bit.scm 546 */
						obj_t BgL_tmpz00_1989;

						if (LLONGP(BgL_xz00_1226))
							{	/* Llib/bit.scm 546 */
								BgL_tmpz00_1989 = BgL_xz00_1226;
							}
						else
							{
								obj_t BgL_auxz00_1992;

								BgL_auxz00_1992 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25413)), BGl_string1734z00zz__bitz00,
									BGl_string1715z00zz__bitz00, BgL_xz00_1226);
								FAILURE(BgL_auxz00_1992, BFALSE, BFALSE);
							}
						BgL_auxz00_1988 = BLLONG_TO_LLONG(BgL_tmpz00_1989);
					}
					BgL_tmpz00_1987 =
						BGl_bitzd2andllongzd2zz__bitz00(BgL_auxz00_1988, BgL_auxz00_1997);
				}
				return make_bllong(BgL_tmpz00_1987);
			}
		}

	}



/* bit-ands8 */
	BGL_EXPORTED_DEF int8_t BGl_bitzd2ands8zd2zz__bitz00(int8_t BgL_xz00_31,
		int8_t BgL_yz00_32)
	{
		{	/* Llib/bit.scm 547 */
			return (BgL_xz00_31 & BgL_yz00_32);
		}

	}



/* &bit-ands8 */
	obj_t BGl_z62bitzd2ands8zb0zz__bitz00(obj_t BgL_envz00_1228,
		obj_t BgL_xz00_1229, obj_t BgL_yz00_1230)
	{
		{	/* Llib/bit.scm 547 */
			{	/* Llib/bit.scm 547 */
				int8_t BgL_tmpz00_2009;

				{	/* Llib/bit.scm 547 */
					int8_t BgL_auxz00_2019;
					int8_t BgL_auxz00_2010;

					{	/* Llib/bit.scm 547 */
						obj_t BgL_tmpz00_2020;

						if (BGL_INT8P(BgL_yz00_1230))
							{	/* Llib/bit.scm 547 */
								BgL_tmpz00_2020 = BgL_yz00_1230;
							}
						else
							{
								obj_t BgL_auxz00_2023;

								BgL_auxz00_2023 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25465)), BGl_string1735z00zz__bitz00,
									BGl_string1717z00zz__bitz00, BgL_yz00_1230);
								FAILURE(BgL_auxz00_2023, BFALSE, BFALSE);
							}
						BgL_auxz00_2019 = BGL_BINT8_TO_INT8(BgL_tmpz00_2020);
					}
					{	/* Llib/bit.scm 547 */
						obj_t BgL_tmpz00_2011;

						if (BGL_INT8P(BgL_xz00_1229))
							{	/* Llib/bit.scm 547 */
								BgL_tmpz00_2011 = BgL_xz00_1229;
							}
						else
							{
								obj_t BgL_auxz00_2014;

								BgL_auxz00_2014 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25465)), BGl_string1735z00zz__bitz00,
									BGl_string1717z00zz__bitz00, BgL_xz00_1229);
								FAILURE(BgL_auxz00_2014, BFALSE, BFALSE);
							}
						BgL_auxz00_2010 = BGL_BINT8_TO_INT8(BgL_tmpz00_2011);
					}
					BgL_tmpz00_2009 =
						BGl_bitzd2ands8zd2zz__bitz00(BgL_auxz00_2010, BgL_auxz00_2019);
				}
				return BGL_INT8_TO_BINT8(BgL_tmpz00_2009);
			}
		}

	}



/* bit-andu8 */
	BGL_EXPORTED_DEF uint8_t BGl_bitzd2andu8zd2zz__bitz00(uint8_t BgL_xz00_33,
		uint8_t BgL_yz00_34)
	{
		{	/* Llib/bit.scm 548 */
			return (BgL_xz00_33 & BgL_yz00_34);
		}

	}



/* &bit-andu8 */
	obj_t BGl_z62bitzd2andu8zb0zz__bitz00(obj_t BgL_envz00_1231,
		obj_t BgL_xz00_1232, obj_t BgL_yz00_1233)
	{
		{	/* Llib/bit.scm 548 */
			{	/* Llib/bit.scm 548 */
				uint8_t BgL_tmpz00_2031;

				{	/* Llib/bit.scm 548 */
					uint8_t BgL_auxz00_2041;
					uint8_t BgL_auxz00_2032;

					{	/* Llib/bit.scm 548 */
						obj_t BgL_tmpz00_2042;

						if (BGL_UINT8P(BgL_yz00_1233))
							{	/* Llib/bit.scm 548 */
								BgL_tmpz00_2042 = BgL_yz00_1233;
							}
						else
							{
								obj_t BgL_auxz00_2045;

								BgL_auxz00_2045 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25513)), BGl_string1736z00zz__bitz00,
									BGl_string1719z00zz__bitz00, BgL_yz00_1233);
								FAILURE(BgL_auxz00_2045, BFALSE, BFALSE);
							}
						BgL_auxz00_2041 = BGL_BUINT8_TO_UINT8(BgL_tmpz00_2042);
					}
					{	/* Llib/bit.scm 548 */
						obj_t BgL_tmpz00_2033;

						if (BGL_UINT8P(BgL_xz00_1232))
							{	/* Llib/bit.scm 548 */
								BgL_tmpz00_2033 = BgL_xz00_1232;
							}
						else
							{
								obj_t BgL_auxz00_2036;

								BgL_auxz00_2036 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25513)), BGl_string1736z00zz__bitz00,
									BGl_string1719z00zz__bitz00, BgL_xz00_1232);
								FAILURE(BgL_auxz00_2036, BFALSE, BFALSE);
							}
						BgL_auxz00_2032 = BGL_BUINT8_TO_UINT8(BgL_tmpz00_2033);
					}
					BgL_tmpz00_2031 =
						BGl_bitzd2andu8zd2zz__bitz00(BgL_auxz00_2032, BgL_auxz00_2041);
				}
				return BGL_UINT8_TO_BUINT8(BgL_tmpz00_2031);
			}
		}

	}



/* bit-ands16 */
	BGL_EXPORTED_DEF int16_t BGl_bitzd2ands16zd2zz__bitz00(int16_t BgL_xz00_35,
		int16_t BgL_yz00_36)
	{
		{	/* Llib/bit.scm 549 */
			return (BgL_xz00_35 & BgL_yz00_36);
		}

	}



/* &bit-ands16 */
	obj_t BGl_z62bitzd2ands16zb0zz__bitz00(obj_t BgL_envz00_1234,
		obj_t BgL_xz00_1235, obj_t BgL_yz00_1236)
	{
		{	/* Llib/bit.scm 549 */
			{	/* Llib/bit.scm 549 */
				int16_t BgL_tmpz00_2053;

				{	/* Llib/bit.scm 549 */
					int16_t BgL_auxz00_2063;
					int16_t BgL_auxz00_2054;

					{	/* Llib/bit.scm 549 */
						obj_t BgL_tmpz00_2064;

						if (BGL_INT16P(BgL_yz00_1236))
							{	/* Llib/bit.scm 549 */
								BgL_tmpz00_2064 = BgL_yz00_1236;
							}
						else
							{
								obj_t BgL_auxz00_2067;

								BgL_auxz00_2067 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25562)), BGl_string1737z00zz__bitz00,
									BGl_string1721z00zz__bitz00, BgL_yz00_1236);
								FAILURE(BgL_auxz00_2067, BFALSE, BFALSE);
							}
						BgL_auxz00_2063 = BGL_BINT16_TO_INT16(BgL_tmpz00_2064);
					}
					{	/* Llib/bit.scm 549 */
						obj_t BgL_tmpz00_2055;

						if (BGL_INT16P(BgL_xz00_1235))
							{	/* Llib/bit.scm 549 */
								BgL_tmpz00_2055 = BgL_xz00_1235;
							}
						else
							{
								obj_t BgL_auxz00_2058;

								BgL_auxz00_2058 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25562)), BGl_string1737z00zz__bitz00,
									BGl_string1721z00zz__bitz00, BgL_xz00_1235);
								FAILURE(BgL_auxz00_2058, BFALSE, BFALSE);
							}
						BgL_auxz00_2054 = BGL_BINT16_TO_INT16(BgL_tmpz00_2055);
					}
					BgL_tmpz00_2053 =
						BGl_bitzd2ands16zd2zz__bitz00(BgL_auxz00_2054, BgL_auxz00_2063);
				}
				return BGL_INT16_TO_BINT16(BgL_tmpz00_2053);
			}
		}

	}



/* bit-andu16 */
	BGL_EXPORTED_DEF uint16_t BGl_bitzd2andu16zd2zz__bitz00(uint16_t BgL_xz00_37,
		uint16_t BgL_yz00_38)
	{
		{	/* Llib/bit.scm 550 */
			return (BgL_xz00_37 & BgL_yz00_38);
		}

	}



/* &bit-andu16 */
	obj_t BGl_z62bitzd2andu16zb0zz__bitz00(obj_t BgL_envz00_1237,
		obj_t BgL_xz00_1238, obj_t BgL_yz00_1239)
	{
		{	/* Llib/bit.scm 550 */
			{	/* Llib/bit.scm 550 */
				uint16_t BgL_tmpz00_2075;

				{	/* Llib/bit.scm 550 */
					uint16_t BgL_auxz00_2085;
					uint16_t BgL_auxz00_2076;

					{	/* Llib/bit.scm 550 */
						obj_t BgL_tmpz00_2086;

						if (BGL_UINT16P(BgL_yz00_1239))
							{	/* Llib/bit.scm 550 */
								BgL_tmpz00_2086 = BgL_yz00_1239;
							}
						else
							{
								obj_t BgL_auxz00_2089;

								BgL_auxz00_2089 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25612)), BGl_string1738z00zz__bitz00,
									BGl_string1723z00zz__bitz00, BgL_yz00_1239);
								FAILURE(BgL_auxz00_2089, BFALSE, BFALSE);
							}
						BgL_auxz00_2085 = BGL_BUINT16_TO_UINT16(BgL_tmpz00_2086);
					}
					{	/* Llib/bit.scm 550 */
						obj_t BgL_tmpz00_2077;

						if (BGL_UINT16P(BgL_xz00_1238))
							{	/* Llib/bit.scm 550 */
								BgL_tmpz00_2077 = BgL_xz00_1238;
							}
						else
							{
								obj_t BgL_auxz00_2080;

								BgL_auxz00_2080 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25612)), BGl_string1738z00zz__bitz00,
									BGl_string1723z00zz__bitz00, BgL_xz00_1238);
								FAILURE(BgL_auxz00_2080, BFALSE, BFALSE);
							}
						BgL_auxz00_2076 = BGL_BUINT16_TO_UINT16(BgL_tmpz00_2077);
					}
					BgL_tmpz00_2075 =
						BGl_bitzd2andu16zd2zz__bitz00(BgL_auxz00_2076, BgL_auxz00_2085);
				}
				return BGL_UINT16_TO_BUINT16(BgL_tmpz00_2075);
			}
		}

	}



/* bit-ands32 */
	BGL_EXPORTED_DEF int32_t BGl_bitzd2ands32zd2zz__bitz00(int32_t BgL_xz00_39,
		int32_t BgL_yz00_40)
	{
		{	/* Llib/bit.scm 551 */
			return (BgL_xz00_39 & BgL_yz00_40);
		}

	}



/* &bit-ands32 */
	obj_t BGl_z62bitzd2ands32zb0zz__bitz00(obj_t BgL_envz00_1240,
		obj_t BgL_xz00_1241, obj_t BgL_yz00_1242)
	{
		{	/* Llib/bit.scm 551 */
			{	/* Llib/bit.scm 551 */
				int32_t BgL_tmpz00_2097;

				{	/* Llib/bit.scm 551 */
					int32_t BgL_auxz00_2107;
					int32_t BgL_auxz00_2098;

					{	/* Llib/bit.scm 551 */
						obj_t BgL_tmpz00_2108;

						if (BGL_INT32P(BgL_yz00_1242))
							{	/* Llib/bit.scm 551 */
								BgL_tmpz00_2108 = BgL_yz00_1242;
							}
						else
							{
								obj_t BgL_auxz00_2111;

								BgL_auxz00_2111 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25662)), BGl_string1739z00zz__bitz00,
									BGl_string1725z00zz__bitz00, BgL_yz00_1242);
								FAILURE(BgL_auxz00_2111, BFALSE, BFALSE);
							}
						BgL_auxz00_2107 = BGL_BINT32_TO_INT32(BgL_tmpz00_2108);
					}
					{	/* Llib/bit.scm 551 */
						obj_t BgL_tmpz00_2099;

						if (BGL_INT32P(BgL_xz00_1241))
							{	/* Llib/bit.scm 551 */
								BgL_tmpz00_2099 = BgL_xz00_1241;
							}
						else
							{
								obj_t BgL_auxz00_2102;

								BgL_auxz00_2102 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25662)), BGl_string1739z00zz__bitz00,
									BGl_string1725z00zz__bitz00, BgL_xz00_1241);
								FAILURE(BgL_auxz00_2102, BFALSE, BFALSE);
							}
						BgL_auxz00_2098 = BGL_BINT32_TO_INT32(BgL_tmpz00_2099);
					}
					BgL_tmpz00_2097 =
						BGl_bitzd2ands32zd2zz__bitz00(BgL_auxz00_2098, BgL_auxz00_2107);
				}
				return BGL_INT32_TO_BINT32(BgL_tmpz00_2097);
			}
		}

	}



/* bit-andu32 */
	BGL_EXPORTED_DEF uint32_t BGl_bitzd2andu32zd2zz__bitz00(uint32_t BgL_xz00_41,
		uint32_t BgL_yz00_42)
	{
		{	/* Llib/bit.scm 552 */
			return (BgL_xz00_41 & BgL_yz00_42);
		}

	}



/* &bit-andu32 */
	obj_t BGl_z62bitzd2andu32zb0zz__bitz00(obj_t BgL_envz00_1243,
		obj_t BgL_xz00_1244, obj_t BgL_yz00_1245)
	{
		{	/* Llib/bit.scm 552 */
			{	/* Llib/bit.scm 552 */
				uint32_t BgL_tmpz00_2119;

				{	/* Llib/bit.scm 552 */
					uint32_t BgL_auxz00_2129;
					uint32_t BgL_auxz00_2120;

					{	/* Llib/bit.scm 552 */
						obj_t BgL_tmpz00_2130;

						if (BGL_UINT32P(BgL_yz00_1245))
							{	/* Llib/bit.scm 552 */
								BgL_tmpz00_2130 = BgL_yz00_1245;
							}
						else
							{
								obj_t BgL_auxz00_2133;

								BgL_auxz00_2133 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25712)), BGl_string1740z00zz__bitz00,
									BGl_string1727z00zz__bitz00, BgL_yz00_1245);
								FAILURE(BgL_auxz00_2133, BFALSE, BFALSE);
							}
						BgL_auxz00_2129 = BGL_BUINT32_TO_UINT32(BgL_tmpz00_2130);
					}
					{	/* Llib/bit.scm 552 */
						obj_t BgL_tmpz00_2121;

						if (BGL_UINT32P(BgL_xz00_1244))
							{	/* Llib/bit.scm 552 */
								BgL_tmpz00_2121 = BgL_xz00_1244;
							}
						else
							{
								obj_t BgL_auxz00_2124;

								BgL_auxz00_2124 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25712)), BGl_string1740z00zz__bitz00,
									BGl_string1727z00zz__bitz00, BgL_xz00_1244);
								FAILURE(BgL_auxz00_2124, BFALSE, BFALSE);
							}
						BgL_auxz00_2120 = BGL_BUINT32_TO_UINT32(BgL_tmpz00_2121);
					}
					BgL_tmpz00_2119 =
						BGl_bitzd2andu32zd2zz__bitz00(BgL_auxz00_2120, BgL_auxz00_2129);
				}
				return BGL_UINT32_TO_BUINT32(BgL_tmpz00_2119);
			}
		}

	}



/* bit-ands64 */
	BGL_EXPORTED_DEF int64_t BGl_bitzd2ands64zd2zz__bitz00(int64_t BgL_xz00_43,
		int64_t BgL_yz00_44)
	{
		{	/* Llib/bit.scm 553 */
			return (BgL_xz00_43 & BgL_yz00_44);
		}

	}



/* &bit-ands64 */
	obj_t BGl_z62bitzd2ands64zb0zz__bitz00(obj_t BgL_envz00_1246,
		obj_t BgL_xz00_1247, obj_t BgL_yz00_1248)
	{
		{	/* Llib/bit.scm 553 */
			{	/* Llib/bit.scm 553 */
				int64_t BgL_tmpz00_2141;

				{	/* Llib/bit.scm 553 */
					int64_t BgL_auxz00_2151;
					int64_t BgL_auxz00_2142;

					{	/* Llib/bit.scm 553 */
						obj_t BgL_tmpz00_2152;

						if (BGL_INT64P(BgL_yz00_1248))
							{	/* Llib/bit.scm 553 */
								BgL_tmpz00_2152 = BgL_yz00_1248;
							}
						else
							{
								obj_t BgL_auxz00_2155;

								BgL_auxz00_2155 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25762)), BGl_string1741z00zz__bitz00,
									BGl_string1729z00zz__bitz00, BgL_yz00_1248);
								FAILURE(BgL_auxz00_2155, BFALSE, BFALSE);
							}
						BgL_auxz00_2151 = BGL_BINT64_TO_INT64(BgL_tmpz00_2152);
					}
					{	/* Llib/bit.scm 553 */
						obj_t BgL_tmpz00_2143;

						if (BGL_INT64P(BgL_xz00_1247))
							{	/* Llib/bit.scm 553 */
								BgL_tmpz00_2143 = BgL_xz00_1247;
							}
						else
							{
								obj_t BgL_auxz00_2146;

								BgL_auxz00_2146 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25762)), BGl_string1741z00zz__bitz00,
									BGl_string1729z00zz__bitz00, BgL_xz00_1247);
								FAILURE(BgL_auxz00_2146, BFALSE, BFALSE);
							}
						BgL_auxz00_2142 = BGL_BINT64_TO_INT64(BgL_tmpz00_2143);
					}
					BgL_tmpz00_2141 =
						BGl_bitzd2ands64zd2zz__bitz00(BgL_auxz00_2142, BgL_auxz00_2151);
				}
				return BGL_INT64_TO_BINT64(BgL_tmpz00_2141);
			}
		}

	}



/* bit-andu64 */
	BGL_EXPORTED_DEF uint64_t BGl_bitzd2andu64zd2zz__bitz00(uint64_t BgL_xz00_45,
		uint64_t BgL_yz00_46)
	{
		{	/* Llib/bit.scm 554 */
			return (BgL_xz00_45 & BgL_yz00_46);
		}

	}



/* &bit-andu64 */
	obj_t BGl_z62bitzd2andu64zb0zz__bitz00(obj_t BgL_envz00_1249,
		obj_t BgL_xz00_1250, obj_t BgL_yz00_1251)
	{
		{	/* Llib/bit.scm 554 */
			{	/* Llib/bit.scm 554 */
				uint64_t BgL_tmpz00_2163;

				{	/* Llib/bit.scm 554 */
					uint64_t BgL_auxz00_2173;
					uint64_t BgL_auxz00_2164;

					{	/* Llib/bit.scm 554 */
						obj_t BgL_tmpz00_2174;

						if (BGL_UINT64P(BgL_yz00_1251))
							{	/* Llib/bit.scm 554 */
								BgL_tmpz00_2174 = BgL_yz00_1251;
							}
						else
							{
								obj_t BgL_auxz00_2177;

								BgL_auxz00_2177 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25812)), BGl_string1742z00zz__bitz00,
									BGl_string1731z00zz__bitz00, BgL_yz00_1251);
								FAILURE(BgL_auxz00_2177, BFALSE, BFALSE);
							}
						BgL_auxz00_2173 = BGL_BINT64_TO_INT64(BgL_tmpz00_2174);
					}
					{	/* Llib/bit.scm 554 */
						obj_t BgL_tmpz00_2165;

						if (BGL_UINT64P(BgL_xz00_1250))
							{	/* Llib/bit.scm 554 */
								BgL_tmpz00_2165 = BgL_xz00_1250;
							}
						else
							{
								obj_t BgL_auxz00_2168;

								BgL_auxz00_2168 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 25812)), BGl_string1742z00zz__bitz00,
									BGl_string1731z00zz__bitz00, BgL_xz00_1250);
								FAILURE(BgL_auxz00_2168, BFALSE, BFALSE);
							}
						BgL_auxz00_2164 = BGL_BINT64_TO_INT64(BgL_tmpz00_2165);
					}
					BgL_tmpz00_2163 =
						BGl_bitzd2andu64zd2zz__bitz00(BgL_auxz00_2164, BgL_auxz00_2173);
				}
				return BGL_UINT64_TO_BUINT64(BgL_tmpz00_2163);
			}
		}

	}



/* bit-xor */
	BGL_EXPORTED_DEF long BGl_bitzd2xorzd2zz__bitz00(long BgL_xz00_47,
		long BgL_yz00_48)
	{
		{	/* Llib/bit.scm 559 */
			return (BgL_xz00_47 ^ BgL_yz00_48);
		}

	}



/* &bit-xor */
	obj_t BGl_z62bitzd2xorzb0zz__bitz00(obj_t BgL_envz00_1252,
		obj_t BgL_xz00_1253, obj_t BgL_yz00_1254)
	{
		{	/* Llib/bit.scm 559 */
			{	/* Llib/bit.scm 559 */
				long BgL_tmpz00_2185;

				{	/* Llib/bit.scm 559 */
					long BgL_auxz00_2195;
					long BgL_auxz00_2186;

					{	/* Llib/bit.scm 559 */
						obj_t BgL_tmpz00_2196;

						if (INTEGERP(BgL_yz00_1254))
							{	/* Llib/bit.scm 559 */
								BgL_tmpz00_2196 = BgL_yz00_1254;
							}
						else
							{
								obj_t BgL_auxz00_2199;

								BgL_auxz00_2199 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26082)), BGl_string1743z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1254);
								FAILURE(BgL_auxz00_2199, BFALSE, BFALSE);
							}
						BgL_auxz00_2195 = (long) CINT(BgL_tmpz00_2196);
					}
					{	/* Llib/bit.scm 559 */
						obj_t BgL_tmpz00_2187;

						if (INTEGERP(BgL_xz00_1253))
							{	/* Llib/bit.scm 559 */
								BgL_tmpz00_2187 = BgL_xz00_1253;
							}
						else
							{
								obj_t BgL_auxz00_2190;

								BgL_auxz00_2190 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26082)), BGl_string1743z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_xz00_1253);
								FAILURE(BgL_auxz00_2190, BFALSE, BFALSE);
							}
						BgL_auxz00_2186 = (long) CINT(BgL_tmpz00_2187);
					}
					BgL_tmpz00_2185 =
						BGl_bitzd2xorzd2zz__bitz00(BgL_auxz00_2186, BgL_auxz00_2195);
				}
				return BINT(BgL_tmpz00_2185);
			}
		}

	}



/* bit-xorelong */
	BGL_EXPORTED_DEF long BGl_bitzd2xorelongzd2zz__bitz00(long BgL_xz00_49,
		long BgL_yz00_50)
	{
		{	/* Llib/bit.scm 560 */
			return (BgL_xz00_49 ^ BgL_yz00_50);
		}

	}



/* &bit-xorelong */
	obj_t BGl_z62bitzd2xorelongzb0zz__bitz00(obj_t BgL_envz00_1255,
		obj_t BgL_xz00_1256, obj_t BgL_yz00_1257)
	{
		{	/* Llib/bit.scm 560 */
			{	/* Llib/bit.scm 560 */
				long BgL_tmpz00_2207;

				{	/* Llib/bit.scm 560 */
					long BgL_auxz00_2217;
					long BgL_auxz00_2208;

					{	/* Llib/bit.scm 560 */
						obj_t BgL_tmpz00_2218;

						if (ELONGP(BgL_yz00_1257))
							{	/* Llib/bit.scm 560 */
								BgL_tmpz00_2218 = BgL_yz00_1257;
							}
						else
							{
								obj_t BgL_auxz00_2221;

								BgL_auxz00_2221 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26132)), BGl_string1744z00zz__bitz00,
									BGl_string1713z00zz__bitz00, BgL_yz00_1257);
								FAILURE(BgL_auxz00_2221, BFALSE, BFALSE);
							}
						BgL_auxz00_2217 = BELONG_TO_LONG(BgL_tmpz00_2218);
					}
					{	/* Llib/bit.scm 560 */
						obj_t BgL_tmpz00_2209;

						if (ELONGP(BgL_xz00_1256))
							{	/* Llib/bit.scm 560 */
								BgL_tmpz00_2209 = BgL_xz00_1256;
							}
						else
							{
								obj_t BgL_auxz00_2212;

								BgL_auxz00_2212 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26132)), BGl_string1744z00zz__bitz00,
									BGl_string1713z00zz__bitz00, BgL_xz00_1256);
								FAILURE(BgL_auxz00_2212, BFALSE, BFALSE);
							}
						BgL_auxz00_2208 = BELONG_TO_LONG(BgL_tmpz00_2209);
					}
					BgL_tmpz00_2207 =
						BGl_bitzd2xorelongzd2zz__bitz00(BgL_auxz00_2208, BgL_auxz00_2217);
				}
				return make_belong(BgL_tmpz00_2207);
			}
		}

	}



/* bit-xorllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2xorllongzd2zz__bitz00(BGL_LONGLONG_T
		BgL_xz00_51, BGL_LONGLONG_T BgL_yz00_52)
	{
		{	/* Llib/bit.scm 561 */
			return (BgL_xz00_51 ^ BgL_yz00_52);
		}

	}



/* &bit-xorllong */
	obj_t BGl_z62bitzd2xorllongzb0zz__bitz00(obj_t BgL_envz00_1258,
		obj_t BgL_xz00_1259, obj_t BgL_yz00_1260)
	{
		{	/* Llib/bit.scm 561 */
			{	/* Llib/bit.scm 561 */
				BGL_LONGLONG_T BgL_tmpz00_2229;

				{	/* Llib/bit.scm 561 */
					BGL_LONGLONG_T BgL_auxz00_2239;
					BGL_LONGLONG_T BgL_auxz00_2230;

					{	/* Llib/bit.scm 561 */
						obj_t BgL_tmpz00_2240;

						if (LLONGP(BgL_yz00_1260))
							{	/* Llib/bit.scm 561 */
								BgL_tmpz00_2240 = BgL_yz00_1260;
							}
						else
							{
								obj_t BgL_auxz00_2243;

								BgL_auxz00_2243 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26187)), BGl_string1745z00zz__bitz00,
									BGl_string1715z00zz__bitz00, BgL_yz00_1260);
								FAILURE(BgL_auxz00_2243, BFALSE, BFALSE);
							}
						BgL_auxz00_2239 = BLLONG_TO_LLONG(BgL_tmpz00_2240);
					}
					{	/* Llib/bit.scm 561 */
						obj_t BgL_tmpz00_2231;

						if (LLONGP(BgL_xz00_1259))
							{	/* Llib/bit.scm 561 */
								BgL_tmpz00_2231 = BgL_xz00_1259;
							}
						else
							{
								obj_t BgL_auxz00_2234;

								BgL_auxz00_2234 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26187)), BGl_string1745z00zz__bitz00,
									BGl_string1715z00zz__bitz00, BgL_xz00_1259);
								FAILURE(BgL_auxz00_2234, BFALSE, BFALSE);
							}
						BgL_auxz00_2230 = BLLONG_TO_LLONG(BgL_tmpz00_2231);
					}
					BgL_tmpz00_2229 =
						BGl_bitzd2xorllongzd2zz__bitz00(BgL_auxz00_2230, BgL_auxz00_2239);
				}
				return make_bllong(BgL_tmpz00_2229);
			}
		}

	}



/* bit-xors8 */
	BGL_EXPORTED_DEF int8_t BGl_bitzd2xors8zd2zz__bitz00(int8_t BgL_xz00_53,
		int8_t BgL_yz00_54)
	{
		{	/* Llib/bit.scm 562 */
			return (BgL_xz00_53 ^ BgL_yz00_54);
		}

	}



/* &bit-xors8 */
	obj_t BGl_z62bitzd2xors8zb0zz__bitz00(obj_t BgL_envz00_1261,
		obj_t BgL_xz00_1262, obj_t BgL_yz00_1263)
	{
		{	/* Llib/bit.scm 562 */
			{	/* Llib/bit.scm 562 */
				int8_t BgL_tmpz00_2251;

				{	/* Llib/bit.scm 562 */
					int8_t BgL_auxz00_2261;
					int8_t BgL_auxz00_2252;

					{	/* Llib/bit.scm 562 */
						obj_t BgL_tmpz00_2262;

						if (BGL_INT8P(BgL_yz00_1263))
							{	/* Llib/bit.scm 562 */
								BgL_tmpz00_2262 = BgL_yz00_1263;
							}
						else
							{
								obj_t BgL_auxz00_2265;

								BgL_auxz00_2265 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26239)), BGl_string1746z00zz__bitz00,
									BGl_string1717z00zz__bitz00, BgL_yz00_1263);
								FAILURE(BgL_auxz00_2265, BFALSE, BFALSE);
							}
						BgL_auxz00_2261 = BGL_BINT8_TO_INT8(BgL_tmpz00_2262);
					}
					{	/* Llib/bit.scm 562 */
						obj_t BgL_tmpz00_2253;

						if (BGL_INT8P(BgL_xz00_1262))
							{	/* Llib/bit.scm 562 */
								BgL_tmpz00_2253 = BgL_xz00_1262;
							}
						else
							{
								obj_t BgL_auxz00_2256;

								BgL_auxz00_2256 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26239)), BGl_string1746z00zz__bitz00,
									BGl_string1717z00zz__bitz00, BgL_xz00_1262);
								FAILURE(BgL_auxz00_2256, BFALSE, BFALSE);
							}
						BgL_auxz00_2252 = BGL_BINT8_TO_INT8(BgL_tmpz00_2253);
					}
					BgL_tmpz00_2251 =
						BGl_bitzd2xors8zd2zz__bitz00(BgL_auxz00_2252, BgL_auxz00_2261);
				}
				return BGL_INT8_TO_BINT8(BgL_tmpz00_2251);
			}
		}

	}



/* bit-xoru8 */
	BGL_EXPORTED_DEF uint8_t BGl_bitzd2xoru8zd2zz__bitz00(uint8_t BgL_xz00_55,
		uint8_t BgL_yz00_56)
	{
		{	/* Llib/bit.scm 563 */
			return (BgL_xz00_55 ^ BgL_yz00_56);
		}

	}



/* &bit-xoru8 */
	obj_t BGl_z62bitzd2xoru8zb0zz__bitz00(obj_t BgL_envz00_1264,
		obj_t BgL_xz00_1265, obj_t BgL_yz00_1266)
	{
		{	/* Llib/bit.scm 563 */
			{	/* Llib/bit.scm 563 */
				uint8_t BgL_tmpz00_2273;

				{	/* Llib/bit.scm 563 */
					uint8_t BgL_auxz00_2283;
					uint8_t BgL_auxz00_2274;

					{	/* Llib/bit.scm 563 */
						obj_t BgL_tmpz00_2284;

						if (BGL_UINT8P(BgL_yz00_1266))
							{	/* Llib/bit.scm 563 */
								BgL_tmpz00_2284 = BgL_yz00_1266;
							}
						else
							{
								obj_t BgL_auxz00_2287;

								BgL_auxz00_2287 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26287)), BGl_string1747z00zz__bitz00,
									BGl_string1719z00zz__bitz00, BgL_yz00_1266);
								FAILURE(BgL_auxz00_2287, BFALSE, BFALSE);
							}
						BgL_auxz00_2283 = BGL_BUINT8_TO_UINT8(BgL_tmpz00_2284);
					}
					{	/* Llib/bit.scm 563 */
						obj_t BgL_tmpz00_2275;

						if (BGL_UINT8P(BgL_xz00_1265))
							{	/* Llib/bit.scm 563 */
								BgL_tmpz00_2275 = BgL_xz00_1265;
							}
						else
							{
								obj_t BgL_auxz00_2278;

								BgL_auxz00_2278 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26287)), BGl_string1747z00zz__bitz00,
									BGl_string1719z00zz__bitz00, BgL_xz00_1265);
								FAILURE(BgL_auxz00_2278, BFALSE, BFALSE);
							}
						BgL_auxz00_2274 = BGL_BUINT8_TO_UINT8(BgL_tmpz00_2275);
					}
					BgL_tmpz00_2273 =
						BGl_bitzd2xoru8zd2zz__bitz00(BgL_auxz00_2274, BgL_auxz00_2283);
				}
				return BGL_UINT8_TO_BUINT8(BgL_tmpz00_2273);
			}
		}

	}



/* bit-xors16 */
	BGL_EXPORTED_DEF int16_t BGl_bitzd2xors16zd2zz__bitz00(int16_t BgL_xz00_57,
		int16_t BgL_yz00_58)
	{
		{	/* Llib/bit.scm 564 */
			return (BgL_xz00_57 ^ BgL_yz00_58);
		}

	}



/* &bit-xors16 */
	obj_t BGl_z62bitzd2xors16zb0zz__bitz00(obj_t BgL_envz00_1267,
		obj_t BgL_xz00_1268, obj_t BgL_yz00_1269)
	{
		{	/* Llib/bit.scm 564 */
			{	/* Llib/bit.scm 564 */
				int16_t BgL_tmpz00_2295;

				{	/* Llib/bit.scm 564 */
					int16_t BgL_auxz00_2305;
					int16_t BgL_auxz00_2296;

					{	/* Llib/bit.scm 564 */
						obj_t BgL_tmpz00_2306;

						if (BGL_INT16P(BgL_yz00_1269))
							{	/* Llib/bit.scm 564 */
								BgL_tmpz00_2306 = BgL_yz00_1269;
							}
						else
							{
								obj_t BgL_auxz00_2309;

								BgL_auxz00_2309 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26336)), BGl_string1748z00zz__bitz00,
									BGl_string1721z00zz__bitz00, BgL_yz00_1269);
								FAILURE(BgL_auxz00_2309, BFALSE, BFALSE);
							}
						BgL_auxz00_2305 = BGL_BINT16_TO_INT16(BgL_tmpz00_2306);
					}
					{	/* Llib/bit.scm 564 */
						obj_t BgL_tmpz00_2297;

						if (BGL_INT16P(BgL_xz00_1268))
							{	/* Llib/bit.scm 564 */
								BgL_tmpz00_2297 = BgL_xz00_1268;
							}
						else
							{
								obj_t BgL_auxz00_2300;

								BgL_auxz00_2300 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26336)), BGl_string1748z00zz__bitz00,
									BGl_string1721z00zz__bitz00, BgL_xz00_1268);
								FAILURE(BgL_auxz00_2300, BFALSE, BFALSE);
							}
						BgL_auxz00_2296 = BGL_BINT16_TO_INT16(BgL_tmpz00_2297);
					}
					BgL_tmpz00_2295 =
						BGl_bitzd2xors16zd2zz__bitz00(BgL_auxz00_2296, BgL_auxz00_2305);
				}
				return BGL_INT16_TO_BINT16(BgL_tmpz00_2295);
			}
		}

	}



/* bit-xoru16 */
	BGL_EXPORTED_DEF uint16_t BGl_bitzd2xoru16zd2zz__bitz00(uint16_t BgL_xz00_59,
		uint16_t BgL_yz00_60)
	{
		{	/* Llib/bit.scm 565 */
			return (BgL_xz00_59 ^ BgL_yz00_60);
		}

	}



/* &bit-xoru16 */
	obj_t BGl_z62bitzd2xoru16zb0zz__bitz00(obj_t BgL_envz00_1270,
		obj_t BgL_xz00_1271, obj_t BgL_yz00_1272)
	{
		{	/* Llib/bit.scm 565 */
			{	/* Llib/bit.scm 565 */
				uint16_t BgL_tmpz00_2317;

				{	/* Llib/bit.scm 565 */
					uint16_t BgL_auxz00_2327;
					uint16_t BgL_auxz00_2318;

					{	/* Llib/bit.scm 565 */
						obj_t BgL_tmpz00_2328;

						if (BGL_UINT16P(BgL_yz00_1272))
							{	/* Llib/bit.scm 565 */
								BgL_tmpz00_2328 = BgL_yz00_1272;
							}
						else
							{
								obj_t BgL_auxz00_2331;

								BgL_auxz00_2331 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26386)), BGl_string1749z00zz__bitz00,
									BGl_string1723z00zz__bitz00, BgL_yz00_1272);
								FAILURE(BgL_auxz00_2331, BFALSE, BFALSE);
							}
						BgL_auxz00_2327 = BGL_BUINT16_TO_UINT16(BgL_tmpz00_2328);
					}
					{	/* Llib/bit.scm 565 */
						obj_t BgL_tmpz00_2319;

						if (BGL_UINT16P(BgL_xz00_1271))
							{	/* Llib/bit.scm 565 */
								BgL_tmpz00_2319 = BgL_xz00_1271;
							}
						else
							{
								obj_t BgL_auxz00_2322;

								BgL_auxz00_2322 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26386)), BGl_string1749z00zz__bitz00,
									BGl_string1723z00zz__bitz00, BgL_xz00_1271);
								FAILURE(BgL_auxz00_2322, BFALSE, BFALSE);
							}
						BgL_auxz00_2318 = BGL_BUINT16_TO_UINT16(BgL_tmpz00_2319);
					}
					BgL_tmpz00_2317 =
						BGl_bitzd2xoru16zd2zz__bitz00(BgL_auxz00_2318, BgL_auxz00_2327);
				}
				return BGL_UINT16_TO_BUINT16(BgL_tmpz00_2317);
			}
		}

	}



/* bit-xors32 */
	BGL_EXPORTED_DEF int32_t BGl_bitzd2xors32zd2zz__bitz00(int32_t BgL_xz00_61,
		int32_t BgL_yz00_62)
	{
		{	/* Llib/bit.scm 566 */
			return (BgL_xz00_61 ^ BgL_yz00_62);
		}

	}



/* &bit-xors32 */
	obj_t BGl_z62bitzd2xors32zb0zz__bitz00(obj_t BgL_envz00_1273,
		obj_t BgL_xz00_1274, obj_t BgL_yz00_1275)
	{
		{	/* Llib/bit.scm 566 */
			{	/* Llib/bit.scm 566 */
				int32_t BgL_tmpz00_2339;

				{	/* Llib/bit.scm 566 */
					int32_t BgL_auxz00_2349;
					int32_t BgL_auxz00_2340;

					{	/* Llib/bit.scm 566 */
						obj_t BgL_tmpz00_2350;

						if (BGL_INT32P(BgL_yz00_1275))
							{	/* Llib/bit.scm 566 */
								BgL_tmpz00_2350 = BgL_yz00_1275;
							}
						else
							{
								obj_t BgL_auxz00_2353;

								BgL_auxz00_2353 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26436)), BGl_string1750z00zz__bitz00,
									BGl_string1725z00zz__bitz00, BgL_yz00_1275);
								FAILURE(BgL_auxz00_2353, BFALSE, BFALSE);
							}
						BgL_auxz00_2349 = BGL_BINT32_TO_INT32(BgL_tmpz00_2350);
					}
					{	/* Llib/bit.scm 566 */
						obj_t BgL_tmpz00_2341;

						if (BGL_INT32P(BgL_xz00_1274))
							{	/* Llib/bit.scm 566 */
								BgL_tmpz00_2341 = BgL_xz00_1274;
							}
						else
							{
								obj_t BgL_auxz00_2344;

								BgL_auxz00_2344 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26436)), BGl_string1750z00zz__bitz00,
									BGl_string1725z00zz__bitz00, BgL_xz00_1274);
								FAILURE(BgL_auxz00_2344, BFALSE, BFALSE);
							}
						BgL_auxz00_2340 = BGL_BINT32_TO_INT32(BgL_tmpz00_2341);
					}
					BgL_tmpz00_2339 =
						BGl_bitzd2xors32zd2zz__bitz00(BgL_auxz00_2340, BgL_auxz00_2349);
				}
				return BGL_INT32_TO_BINT32(BgL_tmpz00_2339);
			}
		}

	}



/* bit-xoru32 */
	BGL_EXPORTED_DEF uint32_t BGl_bitzd2xoru32zd2zz__bitz00(uint32_t BgL_xz00_63,
		uint32_t BgL_yz00_64)
	{
		{	/* Llib/bit.scm 567 */
			return (BgL_xz00_63 ^ BgL_yz00_64);
		}

	}



/* &bit-xoru32 */
	obj_t BGl_z62bitzd2xoru32zb0zz__bitz00(obj_t BgL_envz00_1276,
		obj_t BgL_xz00_1277, obj_t BgL_yz00_1278)
	{
		{	/* Llib/bit.scm 567 */
			{	/* Llib/bit.scm 567 */
				uint32_t BgL_tmpz00_2361;

				{	/* Llib/bit.scm 567 */
					uint32_t BgL_auxz00_2371;
					uint32_t BgL_auxz00_2362;

					{	/* Llib/bit.scm 567 */
						obj_t BgL_tmpz00_2372;

						if (BGL_UINT32P(BgL_yz00_1278))
							{	/* Llib/bit.scm 567 */
								BgL_tmpz00_2372 = BgL_yz00_1278;
							}
						else
							{
								obj_t BgL_auxz00_2375;

								BgL_auxz00_2375 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26486)), BGl_string1751z00zz__bitz00,
									BGl_string1727z00zz__bitz00, BgL_yz00_1278);
								FAILURE(BgL_auxz00_2375, BFALSE, BFALSE);
							}
						BgL_auxz00_2371 = BGL_BUINT32_TO_UINT32(BgL_tmpz00_2372);
					}
					{	/* Llib/bit.scm 567 */
						obj_t BgL_tmpz00_2363;

						if (BGL_UINT32P(BgL_xz00_1277))
							{	/* Llib/bit.scm 567 */
								BgL_tmpz00_2363 = BgL_xz00_1277;
							}
						else
							{
								obj_t BgL_auxz00_2366;

								BgL_auxz00_2366 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26486)), BGl_string1751z00zz__bitz00,
									BGl_string1727z00zz__bitz00, BgL_xz00_1277);
								FAILURE(BgL_auxz00_2366, BFALSE, BFALSE);
							}
						BgL_auxz00_2362 = BGL_BUINT32_TO_UINT32(BgL_tmpz00_2363);
					}
					BgL_tmpz00_2361 =
						BGl_bitzd2xoru32zd2zz__bitz00(BgL_auxz00_2362, BgL_auxz00_2371);
				}
				return BGL_UINT32_TO_BUINT32(BgL_tmpz00_2361);
			}
		}

	}



/* bit-xors64 */
	BGL_EXPORTED_DEF int64_t BGl_bitzd2xors64zd2zz__bitz00(int64_t BgL_xz00_65,
		int64_t BgL_yz00_66)
	{
		{	/* Llib/bit.scm 568 */
			return (BgL_xz00_65 ^ BgL_yz00_66);
		}

	}



/* &bit-xors64 */
	obj_t BGl_z62bitzd2xors64zb0zz__bitz00(obj_t BgL_envz00_1279,
		obj_t BgL_xz00_1280, obj_t BgL_yz00_1281)
	{
		{	/* Llib/bit.scm 568 */
			{	/* Llib/bit.scm 568 */
				int64_t BgL_tmpz00_2383;

				{	/* Llib/bit.scm 568 */
					int64_t BgL_auxz00_2393;
					int64_t BgL_auxz00_2384;

					{	/* Llib/bit.scm 568 */
						obj_t BgL_tmpz00_2394;

						if (BGL_INT64P(BgL_yz00_1281))
							{	/* Llib/bit.scm 568 */
								BgL_tmpz00_2394 = BgL_yz00_1281;
							}
						else
							{
								obj_t BgL_auxz00_2397;

								BgL_auxz00_2397 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26536)), BGl_string1752z00zz__bitz00,
									BGl_string1729z00zz__bitz00, BgL_yz00_1281);
								FAILURE(BgL_auxz00_2397, BFALSE, BFALSE);
							}
						BgL_auxz00_2393 = BGL_BINT64_TO_INT64(BgL_tmpz00_2394);
					}
					{	/* Llib/bit.scm 568 */
						obj_t BgL_tmpz00_2385;

						if (BGL_INT64P(BgL_xz00_1280))
							{	/* Llib/bit.scm 568 */
								BgL_tmpz00_2385 = BgL_xz00_1280;
							}
						else
							{
								obj_t BgL_auxz00_2388;

								BgL_auxz00_2388 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26536)), BGl_string1752z00zz__bitz00,
									BGl_string1729z00zz__bitz00, BgL_xz00_1280);
								FAILURE(BgL_auxz00_2388, BFALSE, BFALSE);
							}
						BgL_auxz00_2384 = BGL_BINT64_TO_INT64(BgL_tmpz00_2385);
					}
					BgL_tmpz00_2383 =
						BGl_bitzd2xors64zd2zz__bitz00(BgL_auxz00_2384, BgL_auxz00_2393);
				}
				return BGL_INT64_TO_BINT64(BgL_tmpz00_2383);
			}
		}

	}



/* bit-xoru64 */
	BGL_EXPORTED_DEF uint64_t BGl_bitzd2xoru64zd2zz__bitz00(uint64_t BgL_xz00_67,
		uint64_t BgL_yz00_68)
	{
		{	/* Llib/bit.scm 569 */
			return (BgL_xz00_67 ^ BgL_yz00_68);
		}

	}



/* &bit-xoru64 */
	obj_t BGl_z62bitzd2xoru64zb0zz__bitz00(obj_t BgL_envz00_1282,
		obj_t BgL_xz00_1283, obj_t BgL_yz00_1284)
	{
		{	/* Llib/bit.scm 569 */
			{	/* Llib/bit.scm 569 */
				uint64_t BgL_tmpz00_2405;

				{	/* Llib/bit.scm 569 */
					uint64_t BgL_auxz00_2415;
					uint64_t BgL_auxz00_2406;

					{	/* Llib/bit.scm 569 */
						obj_t BgL_tmpz00_2416;

						if (BGL_UINT64P(BgL_yz00_1284))
							{	/* Llib/bit.scm 569 */
								BgL_tmpz00_2416 = BgL_yz00_1284;
							}
						else
							{
								obj_t BgL_auxz00_2419;

								BgL_auxz00_2419 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26586)), BGl_string1753z00zz__bitz00,
									BGl_string1731z00zz__bitz00, BgL_yz00_1284);
								FAILURE(BgL_auxz00_2419, BFALSE, BFALSE);
							}
						BgL_auxz00_2415 = BGL_BINT64_TO_INT64(BgL_tmpz00_2416);
					}
					{	/* Llib/bit.scm 569 */
						obj_t BgL_tmpz00_2407;

						if (BGL_UINT64P(BgL_xz00_1283))
							{	/* Llib/bit.scm 569 */
								BgL_tmpz00_2407 = BgL_xz00_1283;
							}
						else
							{
								obj_t BgL_auxz00_2410;

								BgL_auxz00_2410 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26586)), BGl_string1753z00zz__bitz00,
									BGl_string1731z00zz__bitz00, BgL_xz00_1283);
								FAILURE(BgL_auxz00_2410, BFALSE, BFALSE);
							}
						BgL_auxz00_2406 = BGL_BINT64_TO_INT64(BgL_tmpz00_2407);
					}
					BgL_tmpz00_2405 =
						BGl_bitzd2xoru64zd2zz__bitz00(BgL_auxz00_2406, BgL_auxz00_2415);
				}
				return BGL_UINT64_TO_BUINT64(BgL_tmpz00_2405);
			}
		}

	}



/* bit-not */
	BGL_EXPORTED_DEF long BGl_bitzd2notzd2zz__bitz00(long BgL_xz00_69)
	{
		{	/* Llib/bit.scm 574 */
			return ~(BgL_xz00_69);
		}

	}



/* &bit-not */
	obj_t BGl_z62bitzd2notzb0zz__bitz00(obj_t BgL_envz00_1285,
		obj_t BgL_xz00_1286)
	{
		{	/* Llib/bit.scm 574 */
			{	/* Llib/bit.scm 574 */
				long BgL_tmpz00_2427;

				{	/* Llib/bit.scm 574 */
					long BgL_auxz00_2428;

					{	/* Llib/bit.scm 574 */
						obj_t BgL_tmpz00_2429;

						if (INTEGERP(BgL_xz00_1286))
							{	/* Llib/bit.scm 574 */
								BgL_tmpz00_2429 = BgL_xz00_1286;
							}
						else
							{
								obj_t BgL_auxz00_2432;

								BgL_auxz00_2432 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26854)), BGl_string1754z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_xz00_1286);
								FAILURE(BgL_auxz00_2432, BFALSE, BFALSE);
							}
						BgL_auxz00_2428 = (long) CINT(BgL_tmpz00_2429);
					}
					BgL_tmpz00_2427 = BGl_bitzd2notzd2zz__bitz00(BgL_auxz00_2428);
				}
				return BINT(BgL_tmpz00_2427);
			}
		}

	}



/* bit-notelong */
	BGL_EXPORTED_DEF long BGl_bitzd2notelongzd2zz__bitz00(long BgL_xz00_70)
	{
		{	/* Llib/bit.scm 575 */
			return ~(BgL_xz00_70);
		}

	}



/* &bit-notelong */
	obj_t BGl_z62bitzd2notelongzb0zz__bitz00(obj_t BgL_envz00_1287,
		obj_t BgL_xz00_1288)
	{
		{	/* Llib/bit.scm 575 */
			{	/* Llib/bit.scm 575 */
				long BgL_tmpz00_2440;

				{	/* Llib/bit.scm 575 */
					long BgL_auxz00_2441;

					{	/* Llib/bit.scm 575 */
						obj_t BgL_tmpz00_2442;

						if (ELONGP(BgL_xz00_1288))
							{	/* Llib/bit.scm 575 */
								BgL_tmpz00_2442 = BgL_xz00_1288;
							}
						else
							{
								obj_t BgL_auxz00_2445;

								BgL_auxz00_2445 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26900)), BGl_string1755z00zz__bitz00,
									BGl_string1713z00zz__bitz00, BgL_xz00_1288);
								FAILURE(BgL_auxz00_2445, BFALSE, BFALSE);
							}
						BgL_auxz00_2441 = BELONG_TO_LONG(BgL_tmpz00_2442);
					}
					BgL_tmpz00_2440 = BGl_bitzd2notelongzd2zz__bitz00(BgL_auxz00_2441);
				}
				return make_belong(BgL_tmpz00_2440);
			}
		}

	}



/* bit-notllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2notllongzd2zz__bitz00(BGL_LONGLONG_T
		BgL_xz00_71)
	{
		{	/* Llib/bit.scm 576 */
			return ~(BgL_xz00_71);
		}

	}



/* &bit-notllong */
	obj_t BGl_z62bitzd2notllongzb0zz__bitz00(obj_t BgL_envz00_1289,
		obj_t BgL_xz00_1290)
	{
		{	/* Llib/bit.scm 576 */
			{	/* Llib/bit.scm 576 */
				BGL_LONGLONG_T BgL_tmpz00_2453;

				{	/* Llib/bit.scm 576 */
					BGL_LONGLONG_T BgL_auxz00_2454;

					{	/* Llib/bit.scm 576 */
						obj_t BgL_tmpz00_2455;

						if (LLONGP(BgL_xz00_1290))
							{	/* Llib/bit.scm 576 */
								BgL_tmpz00_2455 = BgL_xz00_1290;
							}
						else
							{
								obj_t BgL_auxz00_2458;

								BgL_auxz00_2458 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26951)), BGl_string1756z00zz__bitz00,
									BGl_string1715z00zz__bitz00, BgL_xz00_1290);
								FAILURE(BgL_auxz00_2458, BFALSE, BFALSE);
							}
						BgL_auxz00_2454 = BLLONG_TO_LLONG(BgL_tmpz00_2455);
					}
					BgL_tmpz00_2453 = BGl_bitzd2notllongzd2zz__bitz00(BgL_auxz00_2454);
				}
				return make_bllong(BgL_tmpz00_2453);
			}
		}

	}



/* bit-nots8 */
	BGL_EXPORTED_DEF int8_t BGl_bitzd2nots8zd2zz__bitz00(int8_t BgL_xz00_72)
	{
		{	/* Llib/bit.scm 577 */
			return ~(BgL_xz00_72);
		}

	}



/* &bit-nots8 */
	obj_t BGl_z62bitzd2nots8zb0zz__bitz00(obj_t BgL_envz00_1291,
		obj_t BgL_xz00_1292)
	{
		{	/* Llib/bit.scm 577 */
			{	/* Llib/bit.scm 577 */
				int8_t BgL_tmpz00_2466;

				{	/* Llib/bit.scm 577 */
					int8_t BgL_auxz00_2467;

					{	/* Llib/bit.scm 577 */
						obj_t BgL_tmpz00_2468;

						if (BGL_INT8P(BgL_xz00_1292))
							{	/* Llib/bit.scm 577 */
								BgL_tmpz00_2468 = BgL_xz00_1292;
							}
						else
							{
								obj_t BgL_auxz00_2471;

								BgL_auxz00_2471 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 26999)), BGl_string1757z00zz__bitz00,
									BGl_string1717z00zz__bitz00, BgL_xz00_1292);
								FAILURE(BgL_auxz00_2471, BFALSE, BFALSE);
							}
						BgL_auxz00_2467 = BGL_BINT8_TO_INT8(BgL_tmpz00_2468);
					}
					BgL_tmpz00_2466 = BGl_bitzd2nots8zd2zz__bitz00(BgL_auxz00_2467);
				}
				return BGL_INT8_TO_BINT8(BgL_tmpz00_2466);
			}
		}

	}



/* bit-notu8 */
	BGL_EXPORTED_DEF uint8_t BGl_bitzd2notu8zd2zz__bitz00(uint8_t BgL_xz00_73)
	{
		{	/* Llib/bit.scm 578 */
			return ~(BgL_xz00_73);
		}

	}



/* &bit-notu8 */
	obj_t BGl_z62bitzd2notu8zb0zz__bitz00(obj_t BgL_envz00_1293,
		obj_t BgL_xz00_1294)
	{
		{	/* Llib/bit.scm 578 */
			{	/* Llib/bit.scm 578 */
				uint8_t BgL_tmpz00_2479;

				{	/* Llib/bit.scm 578 */
					uint8_t BgL_auxz00_2480;

					{	/* Llib/bit.scm 578 */
						obj_t BgL_tmpz00_2481;

						if (BGL_UINT8P(BgL_xz00_1294))
							{	/* Llib/bit.scm 578 */
								BgL_tmpz00_2481 = BgL_xz00_1294;
							}
						else
							{
								obj_t BgL_auxz00_2484;

								BgL_auxz00_2484 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27043)), BGl_string1758z00zz__bitz00,
									BGl_string1719z00zz__bitz00, BgL_xz00_1294);
								FAILURE(BgL_auxz00_2484, BFALSE, BFALSE);
							}
						BgL_auxz00_2480 = BGL_BUINT8_TO_UINT8(BgL_tmpz00_2481);
					}
					BgL_tmpz00_2479 = BGl_bitzd2notu8zd2zz__bitz00(BgL_auxz00_2480);
				}
				return BGL_UINT8_TO_BUINT8(BgL_tmpz00_2479);
			}
		}

	}



/* bit-nots16 */
	BGL_EXPORTED_DEF int16_t BGl_bitzd2nots16zd2zz__bitz00(int16_t BgL_xz00_74)
	{
		{	/* Llib/bit.scm 579 */
			return ~(BgL_xz00_74);
		}

	}



/* &bit-nots16 */
	obj_t BGl_z62bitzd2nots16zb0zz__bitz00(obj_t BgL_envz00_1295,
		obj_t BgL_xz00_1296)
	{
		{	/* Llib/bit.scm 579 */
			{	/* Llib/bit.scm 579 */
				int16_t BgL_tmpz00_2492;

				{	/* Llib/bit.scm 579 */
					int16_t BgL_auxz00_2493;

					{	/* Llib/bit.scm 579 */
						obj_t BgL_tmpz00_2494;

						if (BGL_INT16P(BgL_xz00_1296))
							{	/* Llib/bit.scm 579 */
								BgL_tmpz00_2494 = BgL_xz00_1296;
							}
						else
							{
								obj_t BgL_auxz00_2497;

								BgL_auxz00_2497 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27088)), BGl_string1759z00zz__bitz00,
									BGl_string1721z00zz__bitz00, BgL_xz00_1296);
								FAILURE(BgL_auxz00_2497, BFALSE, BFALSE);
							}
						BgL_auxz00_2493 = BGL_BINT16_TO_INT16(BgL_tmpz00_2494);
					}
					BgL_tmpz00_2492 = BGl_bitzd2nots16zd2zz__bitz00(BgL_auxz00_2493);
				}
				return BGL_INT16_TO_BINT16(BgL_tmpz00_2492);
			}
		}

	}



/* bit-notu16 */
	BGL_EXPORTED_DEF uint16_t BGl_bitzd2notu16zd2zz__bitz00(uint16_t BgL_xz00_75)
	{
		{	/* Llib/bit.scm 580 */
			return ~(BgL_xz00_75);
		}

	}



/* &bit-notu16 */
	obj_t BGl_z62bitzd2notu16zb0zz__bitz00(obj_t BgL_envz00_1297,
		obj_t BgL_xz00_1298)
	{
		{	/* Llib/bit.scm 580 */
			{	/* Llib/bit.scm 580 */
				uint16_t BgL_tmpz00_2505;

				{	/* Llib/bit.scm 580 */
					uint16_t BgL_auxz00_2506;

					{	/* Llib/bit.scm 580 */
						obj_t BgL_tmpz00_2507;

						if (BGL_UINT16P(BgL_xz00_1298))
							{	/* Llib/bit.scm 580 */
								BgL_tmpz00_2507 = BgL_xz00_1298;
							}
						else
							{
								obj_t BgL_auxz00_2510;

								BgL_auxz00_2510 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27134)), BGl_string1760z00zz__bitz00,
									BGl_string1723z00zz__bitz00, BgL_xz00_1298);
								FAILURE(BgL_auxz00_2510, BFALSE, BFALSE);
							}
						BgL_auxz00_2506 = BGL_BUINT16_TO_UINT16(BgL_tmpz00_2507);
					}
					BgL_tmpz00_2505 = BGl_bitzd2notu16zd2zz__bitz00(BgL_auxz00_2506);
				}
				return BGL_UINT16_TO_BUINT16(BgL_tmpz00_2505);
			}
		}

	}



/* bit-nots32 */
	BGL_EXPORTED_DEF int32_t BGl_bitzd2nots32zd2zz__bitz00(int32_t BgL_xz00_76)
	{
		{	/* Llib/bit.scm 581 */
			return ~(BgL_xz00_76);
		}

	}



/* &bit-nots32 */
	obj_t BGl_z62bitzd2nots32zb0zz__bitz00(obj_t BgL_envz00_1299,
		obj_t BgL_xz00_1300)
	{
		{	/* Llib/bit.scm 581 */
			{	/* Llib/bit.scm 581 */
				int32_t BgL_tmpz00_2518;

				{	/* Llib/bit.scm 581 */
					int32_t BgL_auxz00_2519;

					{	/* Llib/bit.scm 581 */
						obj_t BgL_tmpz00_2520;

						if (BGL_INT32P(BgL_xz00_1300))
							{	/* Llib/bit.scm 581 */
								BgL_tmpz00_2520 = BgL_xz00_1300;
							}
						else
							{
								obj_t BgL_auxz00_2523;

								BgL_auxz00_2523 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27180)), BGl_string1761z00zz__bitz00,
									BGl_string1725z00zz__bitz00, BgL_xz00_1300);
								FAILURE(BgL_auxz00_2523, BFALSE, BFALSE);
							}
						BgL_auxz00_2519 = BGL_BINT32_TO_INT32(BgL_tmpz00_2520);
					}
					BgL_tmpz00_2518 = BGl_bitzd2nots32zd2zz__bitz00(BgL_auxz00_2519);
				}
				return BGL_INT32_TO_BINT32(BgL_tmpz00_2518);
			}
		}

	}



/* bit-notu32 */
	BGL_EXPORTED_DEF uint32_t BGl_bitzd2notu32zd2zz__bitz00(uint32_t BgL_xz00_77)
	{
		{	/* Llib/bit.scm 582 */
			return ~(BgL_xz00_77);
		}

	}



/* &bit-notu32 */
	obj_t BGl_z62bitzd2notu32zb0zz__bitz00(obj_t BgL_envz00_1301,
		obj_t BgL_xz00_1302)
	{
		{	/* Llib/bit.scm 582 */
			{	/* Llib/bit.scm 582 */
				uint32_t BgL_tmpz00_2531;

				{	/* Llib/bit.scm 582 */
					uint32_t BgL_auxz00_2532;

					{	/* Llib/bit.scm 582 */
						obj_t BgL_tmpz00_2533;

						if (BGL_UINT32P(BgL_xz00_1302))
							{	/* Llib/bit.scm 582 */
								BgL_tmpz00_2533 = BgL_xz00_1302;
							}
						else
							{
								obj_t BgL_auxz00_2536;

								BgL_auxz00_2536 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27226)), BGl_string1762z00zz__bitz00,
									BGl_string1727z00zz__bitz00, BgL_xz00_1302);
								FAILURE(BgL_auxz00_2536, BFALSE, BFALSE);
							}
						BgL_auxz00_2532 = BGL_BUINT32_TO_UINT32(BgL_tmpz00_2533);
					}
					BgL_tmpz00_2531 = BGl_bitzd2notu32zd2zz__bitz00(BgL_auxz00_2532);
				}
				return BGL_UINT32_TO_BUINT32(BgL_tmpz00_2531);
			}
		}

	}



/* bit-nots64 */
	BGL_EXPORTED_DEF int64_t BGl_bitzd2nots64zd2zz__bitz00(int64_t BgL_xz00_78)
	{
		{	/* Llib/bit.scm 583 */
			return ~(BgL_xz00_78);
		}

	}



/* &bit-nots64 */
	obj_t BGl_z62bitzd2nots64zb0zz__bitz00(obj_t BgL_envz00_1303,
		obj_t BgL_xz00_1304)
	{
		{	/* Llib/bit.scm 583 */
			{	/* Llib/bit.scm 583 */
				int64_t BgL_tmpz00_2544;

				{	/* Llib/bit.scm 583 */
					int64_t BgL_auxz00_2545;

					{	/* Llib/bit.scm 583 */
						obj_t BgL_tmpz00_2546;

						if (BGL_INT64P(BgL_xz00_1304))
							{	/* Llib/bit.scm 583 */
								BgL_tmpz00_2546 = BgL_xz00_1304;
							}
						else
							{
								obj_t BgL_auxz00_2549;

								BgL_auxz00_2549 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27272)), BGl_string1763z00zz__bitz00,
									BGl_string1729z00zz__bitz00, BgL_xz00_1304);
								FAILURE(BgL_auxz00_2549, BFALSE, BFALSE);
							}
						BgL_auxz00_2545 = BGL_BINT64_TO_INT64(BgL_tmpz00_2546);
					}
					BgL_tmpz00_2544 = BGl_bitzd2nots64zd2zz__bitz00(BgL_auxz00_2545);
				}
				return BGL_INT64_TO_BINT64(BgL_tmpz00_2544);
			}
		}

	}



/* bit-notu64 */
	BGL_EXPORTED_DEF uint64_t BGl_bitzd2notu64zd2zz__bitz00(uint64_t BgL_xz00_79)
	{
		{	/* Llib/bit.scm 584 */
			return ~(BgL_xz00_79);
		}

	}



/* &bit-notu64 */
	obj_t BGl_z62bitzd2notu64zb0zz__bitz00(obj_t BgL_envz00_1305,
		obj_t BgL_xz00_1306)
	{
		{	/* Llib/bit.scm 584 */
			{	/* Llib/bit.scm 584 */
				uint64_t BgL_tmpz00_2557;

				{	/* Llib/bit.scm 584 */
					uint64_t BgL_auxz00_2558;

					{	/* Llib/bit.scm 584 */
						obj_t BgL_tmpz00_2559;

						if (BGL_UINT64P(BgL_xz00_1306))
							{	/* Llib/bit.scm 584 */
								BgL_tmpz00_2559 = BgL_xz00_1306;
							}
						else
							{
								obj_t BgL_auxz00_2562;

								BgL_auxz00_2562 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27318)), BGl_string1764z00zz__bitz00,
									BGl_string1731z00zz__bitz00, BgL_xz00_1306);
								FAILURE(BgL_auxz00_2562, BFALSE, BFALSE);
							}
						BgL_auxz00_2558 = BGL_BINT64_TO_INT64(BgL_tmpz00_2559);
					}
					BgL_tmpz00_2557 = BGl_bitzd2notu64zd2zz__bitz00(BgL_auxz00_2558);
				}
				return BGL_UINT64_TO_BUINT64(BgL_tmpz00_2557);
			}
		}

	}



/* bit-rsh */
	BGL_EXPORTED_DEF long BGl_bitzd2rshzd2zz__bitz00(long BgL_xz00_80,
		long BgL_yz00_81)
	{
		{	/* Llib/bit.scm 589 */
			return (BgL_xz00_80 >> (int) (BgL_yz00_81));
		}

	}



/* &bit-rsh */
	obj_t BGl_z62bitzd2rshzb0zz__bitz00(obj_t BgL_envz00_1307,
		obj_t BgL_xz00_1308, obj_t BgL_yz00_1309)
	{
		{	/* Llib/bit.scm 589 */
			{	/* Llib/bit.scm 589 */
				long BgL_tmpz00_2571;

				{	/* Llib/bit.scm 589 */
					long BgL_auxz00_2581;
					long BgL_auxz00_2572;

					{	/* Llib/bit.scm 589 */
						obj_t BgL_tmpz00_2582;

						if (INTEGERP(BgL_yz00_1309))
							{	/* Llib/bit.scm 589 */
								BgL_tmpz00_2582 = BgL_yz00_1309;
							}
						else
							{
								obj_t BgL_auxz00_2585;

								BgL_auxz00_2585 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27589)), BGl_string1765z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1309);
								FAILURE(BgL_auxz00_2585, BFALSE, BFALSE);
							}
						BgL_auxz00_2581 = (long) CINT(BgL_tmpz00_2582);
					}
					{	/* Llib/bit.scm 589 */
						obj_t BgL_tmpz00_2573;

						if (INTEGERP(BgL_xz00_1308))
							{	/* Llib/bit.scm 589 */
								BgL_tmpz00_2573 = BgL_xz00_1308;
							}
						else
							{
								obj_t BgL_auxz00_2576;

								BgL_auxz00_2576 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27589)), BGl_string1765z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_xz00_1308);
								FAILURE(BgL_auxz00_2576, BFALSE, BFALSE);
							}
						BgL_auxz00_2572 = (long) CINT(BgL_tmpz00_2573);
					}
					BgL_tmpz00_2571 =
						BGl_bitzd2rshzd2zz__bitz00(BgL_auxz00_2572, BgL_auxz00_2581);
				}
				return BINT(BgL_tmpz00_2571);
			}
		}

	}



/* bit-rshelong */
	BGL_EXPORTED_DEF long BGl_bitzd2rshelongzd2zz__bitz00(long BgL_xz00_82,
		long BgL_yz00_83)
	{
		{	/* Llib/bit.scm 590 */
			return (BgL_xz00_82 >> (int) (BgL_yz00_83));
		}

	}



/* &bit-rshelong */
	obj_t BGl_z62bitzd2rshelongzb0zz__bitz00(obj_t BgL_envz00_1310,
		obj_t BgL_xz00_1311, obj_t BgL_yz00_1312)
	{
		{	/* Llib/bit.scm 590 */
			{	/* Llib/bit.scm 590 */
				long BgL_tmpz00_2594;

				{	/* Llib/bit.scm 590 */
					long BgL_auxz00_2604;
					long BgL_auxz00_2595;

					{	/* Llib/bit.scm 590 */
						obj_t BgL_tmpz00_2605;

						if (INTEGERP(BgL_yz00_1312))
							{	/* Llib/bit.scm 590 */
								BgL_tmpz00_2605 = BgL_yz00_1312;
							}
						else
							{
								obj_t BgL_auxz00_2608;

								BgL_auxz00_2608 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27639)), BGl_string1766z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1312);
								FAILURE(BgL_auxz00_2608, BFALSE, BFALSE);
							}
						BgL_auxz00_2604 = (long) CINT(BgL_tmpz00_2605);
					}
					{	/* Llib/bit.scm 590 */
						obj_t BgL_tmpz00_2596;

						if (ELONGP(BgL_xz00_1311))
							{	/* Llib/bit.scm 590 */
								BgL_tmpz00_2596 = BgL_xz00_1311;
							}
						else
							{
								obj_t BgL_auxz00_2599;

								BgL_auxz00_2599 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27639)), BGl_string1766z00zz__bitz00,
									BGl_string1713z00zz__bitz00, BgL_xz00_1311);
								FAILURE(BgL_auxz00_2599, BFALSE, BFALSE);
							}
						BgL_auxz00_2595 = BELONG_TO_LONG(BgL_tmpz00_2596);
					}
					BgL_tmpz00_2594 =
						BGl_bitzd2rshelongzd2zz__bitz00(BgL_auxz00_2595, BgL_auxz00_2604);
				}
				return make_belong(BgL_tmpz00_2594);
			}
		}

	}



/* bit-rshllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2rshllongzd2zz__bitz00(BGL_LONGLONG_T
		BgL_xz00_84, long BgL_yz00_85)
	{
		{	/* Llib/bit.scm 591 */
			return (BgL_xz00_84 >> (int) (BgL_yz00_85));
		}

	}



/* &bit-rshllong */
	obj_t BGl_z62bitzd2rshllongzb0zz__bitz00(obj_t BgL_envz00_1313,
		obj_t BgL_xz00_1314, obj_t BgL_yz00_1315)
	{
		{	/* Llib/bit.scm 591 */
			{	/* Llib/bit.scm 591 */
				BGL_LONGLONG_T BgL_tmpz00_2617;

				{	/* Llib/bit.scm 591 */
					long BgL_auxz00_2627;
					BGL_LONGLONG_T BgL_auxz00_2618;

					{	/* Llib/bit.scm 591 */
						obj_t BgL_tmpz00_2628;

						if (INTEGERP(BgL_yz00_1315))
							{	/* Llib/bit.scm 591 */
								BgL_tmpz00_2628 = BgL_yz00_1315;
							}
						else
							{
								obj_t BgL_auxz00_2631;

								BgL_auxz00_2631 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27694)), BGl_string1767z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1315);
								FAILURE(BgL_auxz00_2631, BFALSE, BFALSE);
							}
						BgL_auxz00_2627 = (long) CINT(BgL_tmpz00_2628);
					}
					{	/* Llib/bit.scm 591 */
						obj_t BgL_tmpz00_2619;

						if (LLONGP(BgL_xz00_1314))
							{	/* Llib/bit.scm 591 */
								BgL_tmpz00_2619 = BgL_xz00_1314;
							}
						else
							{
								obj_t BgL_auxz00_2622;

								BgL_auxz00_2622 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27694)), BGl_string1767z00zz__bitz00,
									BGl_string1715z00zz__bitz00, BgL_xz00_1314);
								FAILURE(BgL_auxz00_2622, BFALSE, BFALSE);
							}
						BgL_auxz00_2618 = BLLONG_TO_LLONG(BgL_tmpz00_2619);
					}
					BgL_tmpz00_2617 =
						BGl_bitzd2rshllongzd2zz__bitz00(BgL_auxz00_2618, BgL_auxz00_2627);
				}
				return make_bllong(BgL_tmpz00_2617);
			}
		}

	}



/* bit-rshs8 */
	BGL_EXPORTED_DEF int8_t BGl_bitzd2rshs8zd2zz__bitz00(int8_t BgL_xz00_86,
		long BgL_yz00_87)
	{
		{	/* Llib/bit.scm 592 */
			return (BgL_xz00_86 >> (int) (BgL_yz00_87));
		}

	}



/* &bit-rshs8 */
	obj_t BGl_z62bitzd2rshs8zb0zz__bitz00(obj_t BgL_envz00_1316,
		obj_t BgL_xz00_1317, obj_t BgL_yz00_1318)
	{
		{	/* Llib/bit.scm 592 */
			{	/* Llib/bit.scm 592 */
				int8_t BgL_tmpz00_2640;

				{	/* Llib/bit.scm 592 */
					long BgL_auxz00_2650;
					int8_t BgL_auxz00_2641;

					{	/* Llib/bit.scm 592 */
						obj_t BgL_tmpz00_2651;

						if (INTEGERP(BgL_yz00_1318))
							{	/* Llib/bit.scm 592 */
								BgL_tmpz00_2651 = BgL_yz00_1318;
							}
						else
							{
								obj_t BgL_auxz00_2654;

								BgL_auxz00_2654 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27746)), BGl_string1768z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1318);
								FAILURE(BgL_auxz00_2654, BFALSE, BFALSE);
							}
						BgL_auxz00_2650 = (long) CINT(BgL_tmpz00_2651);
					}
					{	/* Llib/bit.scm 592 */
						obj_t BgL_tmpz00_2642;

						if (BGL_INT8P(BgL_xz00_1317))
							{	/* Llib/bit.scm 592 */
								BgL_tmpz00_2642 = BgL_xz00_1317;
							}
						else
							{
								obj_t BgL_auxz00_2645;

								BgL_auxz00_2645 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27746)), BGl_string1768z00zz__bitz00,
									BGl_string1717z00zz__bitz00, BgL_xz00_1317);
								FAILURE(BgL_auxz00_2645, BFALSE, BFALSE);
							}
						BgL_auxz00_2641 = BGL_BINT8_TO_INT8(BgL_tmpz00_2642);
					}
					BgL_tmpz00_2640 =
						BGl_bitzd2rshs8zd2zz__bitz00(BgL_auxz00_2641, BgL_auxz00_2650);
				}
				return BGL_INT8_TO_BINT8(BgL_tmpz00_2640);
			}
		}

	}



/* bit-rshu8 */
	BGL_EXPORTED_DEF uint8_t BGl_bitzd2rshu8zd2zz__bitz00(uint8_t BgL_xz00_88,
		long BgL_yz00_89)
	{
		{	/* Llib/bit.scm 593 */
			return (BgL_xz00_88 >> (int) (BgL_yz00_89));
		}

	}



/* &bit-rshu8 */
	obj_t BGl_z62bitzd2rshu8zb0zz__bitz00(obj_t BgL_envz00_1319,
		obj_t BgL_xz00_1320, obj_t BgL_yz00_1321)
	{
		{	/* Llib/bit.scm 593 */
			{	/* Llib/bit.scm 593 */
				uint8_t BgL_tmpz00_2663;

				{	/* Llib/bit.scm 593 */
					long BgL_auxz00_2673;
					uint8_t BgL_auxz00_2664;

					{	/* Llib/bit.scm 593 */
						obj_t BgL_tmpz00_2674;

						if (INTEGERP(BgL_yz00_1321))
							{	/* Llib/bit.scm 593 */
								BgL_tmpz00_2674 = BgL_yz00_1321;
							}
						else
							{
								obj_t BgL_auxz00_2677;

								BgL_auxz00_2677 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27794)), BGl_string1769z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1321);
								FAILURE(BgL_auxz00_2677, BFALSE, BFALSE);
							}
						BgL_auxz00_2673 = (long) CINT(BgL_tmpz00_2674);
					}
					{	/* Llib/bit.scm 593 */
						obj_t BgL_tmpz00_2665;

						if (BGL_UINT8P(BgL_xz00_1320))
							{	/* Llib/bit.scm 593 */
								BgL_tmpz00_2665 = BgL_xz00_1320;
							}
						else
							{
								obj_t BgL_auxz00_2668;

								BgL_auxz00_2668 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27794)), BGl_string1769z00zz__bitz00,
									BGl_string1719z00zz__bitz00, BgL_xz00_1320);
								FAILURE(BgL_auxz00_2668, BFALSE, BFALSE);
							}
						BgL_auxz00_2664 = BGL_BUINT8_TO_UINT8(BgL_tmpz00_2665);
					}
					BgL_tmpz00_2663 =
						BGl_bitzd2rshu8zd2zz__bitz00(BgL_auxz00_2664, BgL_auxz00_2673);
				}
				return BGL_UINT8_TO_BUINT8(BgL_tmpz00_2663);
			}
		}

	}



/* bit-rshs16 */
	BGL_EXPORTED_DEF int16_t BGl_bitzd2rshs16zd2zz__bitz00(int16_t BgL_xz00_90,
		long BgL_yz00_91)
	{
		{	/* Llib/bit.scm 594 */
			return (BgL_xz00_90 >> (int) (BgL_yz00_91));
		}

	}



/* &bit-rshs16 */
	obj_t BGl_z62bitzd2rshs16zb0zz__bitz00(obj_t BgL_envz00_1322,
		obj_t BgL_xz00_1323, obj_t BgL_yz00_1324)
	{
		{	/* Llib/bit.scm 594 */
			{	/* Llib/bit.scm 594 */
				int16_t BgL_tmpz00_2686;

				{	/* Llib/bit.scm 594 */
					long BgL_auxz00_2696;
					int16_t BgL_auxz00_2687;

					{	/* Llib/bit.scm 594 */
						obj_t BgL_tmpz00_2697;

						if (INTEGERP(BgL_yz00_1324))
							{	/* Llib/bit.scm 594 */
								BgL_tmpz00_2697 = BgL_yz00_1324;
							}
						else
							{
								obj_t BgL_auxz00_2700;

								BgL_auxz00_2700 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27843)), BGl_string1770z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1324);
								FAILURE(BgL_auxz00_2700, BFALSE, BFALSE);
							}
						BgL_auxz00_2696 = (long) CINT(BgL_tmpz00_2697);
					}
					{	/* Llib/bit.scm 594 */
						obj_t BgL_tmpz00_2688;

						if (BGL_INT16P(BgL_xz00_1323))
							{	/* Llib/bit.scm 594 */
								BgL_tmpz00_2688 = BgL_xz00_1323;
							}
						else
							{
								obj_t BgL_auxz00_2691;

								BgL_auxz00_2691 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27843)), BGl_string1770z00zz__bitz00,
									BGl_string1721z00zz__bitz00, BgL_xz00_1323);
								FAILURE(BgL_auxz00_2691, BFALSE, BFALSE);
							}
						BgL_auxz00_2687 = BGL_BINT16_TO_INT16(BgL_tmpz00_2688);
					}
					BgL_tmpz00_2686 =
						BGl_bitzd2rshs16zd2zz__bitz00(BgL_auxz00_2687, BgL_auxz00_2696);
				}
				return BGL_INT16_TO_BINT16(BgL_tmpz00_2686);
			}
		}

	}



/* bit-rshu16 */
	BGL_EXPORTED_DEF int16_t BGl_bitzd2rshu16zd2zz__bitz00(int16_t BgL_xz00_92,
		long BgL_yz00_93)
	{
		{	/* Llib/bit.scm 595 */
			{	/* Llib/bit.scm 595 */
				uint16_t BgL_tmpz00_2707;

				BgL_tmpz00_2707 = ((uint16_t) (BgL_xz00_92) >> (int) (BgL_yz00_93));
				return (int16_t) (BgL_tmpz00_2707);
			}
		}

	}



/* &bit-rshu16 */
	obj_t BGl_z62bitzd2rshu16zb0zz__bitz00(obj_t BgL_envz00_1325,
		obj_t BgL_xz00_1326, obj_t BgL_yz00_1327)
	{
		{	/* Llib/bit.scm 595 */
			{	/* Llib/bit.scm 595 */
				int16_t BgL_tmpz00_2712;

				{	/* Llib/bit.scm 595 */
					long BgL_auxz00_2722;
					int16_t BgL_auxz00_2713;

					{	/* Llib/bit.scm 595 */
						obj_t BgL_tmpz00_2723;

						if (INTEGERP(BgL_yz00_1327))
							{	/* Llib/bit.scm 595 */
								BgL_tmpz00_2723 = BgL_yz00_1327;
							}
						else
							{
								obj_t BgL_auxz00_2726;

								BgL_auxz00_2726 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27893)), BGl_string1771z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1327);
								FAILURE(BgL_auxz00_2726, BFALSE, BFALSE);
							}
						BgL_auxz00_2722 = (long) CINT(BgL_tmpz00_2723);
					}
					{	/* Llib/bit.scm 595 */
						obj_t BgL_tmpz00_2714;

						if (BGL_INT16P(BgL_xz00_1326))
							{	/* Llib/bit.scm 595 */
								BgL_tmpz00_2714 = BgL_xz00_1326;
							}
						else
							{
								obj_t BgL_auxz00_2717;

								BgL_auxz00_2717 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27893)), BGl_string1771z00zz__bitz00,
									BGl_string1721z00zz__bitz00, BgL_xz00_1326);
								FAILURE(BgL_auxz00_2717, BFALSE, BFALSE);
							}
						BgL_auxz00_2713 = BGL_BINT16_TO_INT16(BgL_tmpz00_2714);
					}
					BgL_tmpz00_2712 =
						BGl_bitzd2rshu16zd2zz__bitz00(BgL_auxz00_2713, BgL_auxz00_2722);
				}
				return BGL_INT16_TO_BINT16(BgL_tmpz00_2712);
			}
		}

	}



/* bit-rshs32 */
	BGL_EXPORTED_DEF int32_t BGl_bitzd2rshs32zd2zz__bitz00(int32_t BgL_xz00_94,
		long BgL_yz00_95)
	{
		{	/* Llib/bit.scm 596 */
			return (BgL_xz00_94 >> (int) (BgL_yz00_95));
		}

	}



/* &bit-rshs32 */
	obj_t BGl_z62bitzd2rshs32zb0zz__bitz00(obj_t BgL_envz00_1328,
		obj_t BgL_xz00_1329, obj_t BgL_yz00_1330)
	{
		{	/* Llib/bit.scm 596 */
			{	/* Llib/bit.scm 596 */
				int32_t BgL_tmpz00_2735;

				{	/* Llib/bit.scm 596 */
					long BgL_auxz00_2745;
					int32_t BgL_auxz00_2736;

					{	/* Llib/bit.scm 596 */
						obj_t BgL_tmpz00_2746;

						if (INTEGERP(BgL_yz00_1330))
							{	/* Llib/bit.scm 596 */
								BgL_tmpz00_2746 = BgL_yz00_1330;
							}
						else
							{
								obj_t BgL_auxz00_2749;

								BgL_auxz00_2749 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27943)), BGl_string1772z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1330);
								FAILURE(BgL_auxz00_2749, BFALSE, BFALSE);
							}
						BgL_auxz00_2745 = (long) CINT(BgL_tmpz00_2746);
					}
					{	/* Llib/bit.scm 596 */
						obj_t BgL_tmpz00_2737;

						if (BGL_INT32P(BgL_xz00_1329))
							{	/* Llib/bit.scm 596 */
								BgL_tmpz00_2737 = BgL_xz00_1329;
							}
						else
							{
								obj_t BgL_auxz00_2740;

								BgL_auxz00_2740 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27943)), BGl_string1772z00zz__bitz00,
									BGl_string1725z00zz__bitz00, BgL_xz00_1329);
								FAILURE(BgL_auxz00_2740, BFALSE, BFALSE);
							}
						BgL_auxz00_2736 = BGL_BINT32_TO_INT32(BgL_tmpz00_2737);
					}
					BgL_tmpz00_2735 =
						BGl_bitzd2rshs32zd2zz__bitz00(BgL_auxz00_2736, BgL_auxz00_2745);
				}
				return BGL_INT32_TO_BINT32(BgL_tmpz00_2735);
			}
		}

	}



/* bit-rshu32 */
	BGL_EXPORTED_DEF uint32_t BGl_bitzd2rshu32zd2zz__bitz00(uint32_t BgL_xz00_96,
		long BgL_yz00_97)
	{
		{	/* Llib/bit.scm 597 */
			return (BgL_xz00_96 >> (int) (BgL_yz00_97));
		}

	}



/* &bit-rshu32 */
	obj_t BGl_z62bitzd2rshu32zb0zz__bitz00(obj_t BgL_envz00_1331,
		obj_t BgL_xz00_1332, obj_t BgL_yz00_1333)
	{
		{	/* Llib/bit.scm 597 */
			{	/* Llib/bit.scm 597 */
				uint32_t BgL_tmpz00_2758;

				{	/* Llib/bit.scm 597 */
					long BgL_auxz00_2768;
					uint32_t BgL_auxz00_2759;

					{	/* Llib/bit.scm 597 */
						obj_t BgL_tmpz00_2769;

						if (INTEGERP(BgL_yz00_1333))
							{	/* Llib/bit.scm 597 */
								BgL_tmpz00_2769 = BgL_yz00_1333;
							}
						else
							{
								obj_t BgL_auxz00_2772;

								BgL_auxz00_2772 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27993)), BGl_string1773z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1333);
								FAILURE(BgL_auxz00_2772, BFALSE, BFALSE);
							}
						BgL_auxz00_2768 = (long) CINT(BgL_tmpz00_2769);
					}
					{	/* Llib/bit.scm 597 */
						obj_t BgL_tmpz00_2760;

						if (BGL_UINT32P(BgL_xz00_1332))
							{	/* Llib/bit.scm 597 */
								BgL_tmpz00_2760 = BgL_xz00_1332;
							}
						else
							{
								obj_t BgL_auxz00_2763;

								BgL_auxz00_2763 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 27993)), BGl_string1773z00zz__bitz00,
									BGl_string1727z00zz__bitz00, BgL_xz00_1332);
								FAILURE(BgL_auxz00_2763, BFALSE, BFALSE);
							}
						BgL_auxz00_2759 = BGL_BUINT32_TO_UINT32(BgL_tmpz00_2760);
					}
					BgL_tmpz00_2758 =
						BGl_bitzd2rshu32zd2zz__bitz00(BgL_auxz00_2759, BgL_auxz00_2768);
				}
				return BGL_UINT32_TO_BUINT32(BgL_tmpz00_2758);
			}
		}

	}



/* bit-rshs64 */
	BGL_EXPORTED_DEF int64_t BGl_bitzd2rshs64zd2zz__bitz00(int64_t BgL_xz00_98,
		long BgL_yz00_99)
	{
		{	/* Llib/bit.scm 598 */
			return (BgL_xz00_98 >> (int) (BgL_yz00_99));
		}

	}



/* &bit-rshs64 */
	obj_t BGl_z62bitzd2rshs64zb0zz__bitz00(obj_t BgL_envz00_1334,
		obj_t BgL_xz00_1335, obj_t BgL_yz00_1336)
	{
		{	/* Llib/bit.scm 598 */
			{	/* Llib/bit.scm 598 */
				int64_t BgL_tmpz00_2781;

				{	/* Llib/bit.scm 598 */
					long BgL_auxz00_2791;
					int64_t BgL_auxz00_2782;

					{	/* Llib/bit.scm 598 */
						obj_t BgL_tmpz00_2792;

						if (INTEGERP(BgL_yz00_1336))
							{	/* Llib/bit.scm 598 */
								BgL_tmpz00_2792 = BgL_yz00_1336;
							}
						else
							{
								obj_t BgL_auxz00_2795;

								BgL_auxz00_2795 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28043)), BGl_string1774z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1336);
								FAILURE(BgL_auxz00_2795, BFALSE, BFALSE);
							}
						BgL_auxz00_2791 = (long) CINT(BgL_tmpz00_2792);
					}
					{	/* Llib/bit.scm 598 */
						obj_t BgL_tmpz00_2783;

						if (BGL_INT64P(BgL_xz00_1335))
							{	/* Llib/bit.scm 598 */
								BgL_tmpz00_2783 = BgL_xz00_1335;
							}
						else
							{
								obj_t BgL_auxz00_2786;

								BgL_auxz00_2786 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28043)), BGl_string1774z00zz__bitz00,
									BGl_string1729z00zz__bitz00, BgL_xz00_1335);
								FAILURE(BgL_auxz00_2786, BFALSE, BFALSE);
							}
						BgL_auxz00_2782 = BGL_BINT64_TO_INT64(BgL_tmpz00_2783);
					}
					BgL_tmpz00_2781 =
						BGl_bitzd2rshs64zd2zz__bitz00(BgL_auxz00_2782, BgL_auxz00_2791);
				}
				return BGL_INT64_TO_BINT64(BgL_tmpz00_2781);
			}
		}

	}



/* bit-rshu64 */
	BGL_EXPORTED_DEF uint64_t BGl_bitzd2rshu64zd2zz__bitz00(uint64_t BgL_xz00_100,
		long BgL_yz00_101)
	{
		{	/* Llib/bit.scm 599 */
			return (BgL_xz00_100 >> (int) (BgL_yz00_101));
		}

	}



/* &bit-rshu64 */
	obj_t BGl_z62bitzd2rshu64zb0zz__bitz00(obj_t BgL_envz00_1337,
		obj_t BgL_xz00_1338, obj_t BgL_yz00_1339)
	{
		{	/* Llib/bit.scm 599 */
			{	/* Llib/bit.scm 599 */
				uint64_t BgL_tmpz00_2804;

				{	/* Llib/bit.scm 599 */
					long BgL_auxz00_2814;
					uint64_t BgL_auxz00_2805;

					{	/* Llib/bit.scm 599 */
						obj_t BgL_tmpz00_2815;

						if (INTEGERP(BgL_yz00_1339))
							{	/* Llib/bit.scm 599 */
								BgL_tmpz00_2815 = BgL_yz00_1339;
							}
						else
							{
								obj_t BgL_auxz00_2818;

								BgL_auxz00_2818 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28093)), BGl_string1775z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1339);
								FAILURE(BgL_auxz00_2818, BFALSE, BFALSE);
							}
						BgL_auxz00_2814 = (long) CINT(BgL_tmpz00_2815);
					}
					{	/* Llib/bit.scm 599 */
						obj_t BgL_tmpz00_2806;

						if (BGL_UINT64P(BgL_xz00_1338))
							{	/* Llib/bit.scm 599 */
								BgL_tmpz00_2806 = BgL_xz00_1338;
							}
						else
							{
								obj_t BgL_auxz00_2809;

								BgL_auxz00_2809 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28093)), BGl_string1775z00zz__bitz00,
									BGl_string1731z00zz__bitz00, BgL_xz00_1338);
								FAILURE(BgL_auxz00_2809, BFALSE, BFALSE);
							}
						BgL_auxz00_2805 = BGL_BINT64_TO_INT64(BgL_tmpz00_2806);
					}
					BgL_tmpz00_2804 =
						BGl_bitzd2rshu64zd2zz__bitz00(BgL_auxz00_2805, BgL_auxz00_2814);
				}
				return BGL_UINT64_TO_BUINT64(BgL_tmpz00_2804);
			}
		}

	}



/* bit-ursh */
	BGL_EXPORTED_DEF unsigned long BGl_bitzd2urshzd2zz__bitz00(unsigned long
		BgL_xz00_102, long BgL_yz00_103)
	{
		{	/* Llib/bit.scm 604 */
			return (BgL_xz00_102 >> (int) (BgL_yz00_103));
		}

	}



/* &bit-ursh */
	obj_t BGl_z62bitzd2urshzb0zz__bitz00(obj_t BgL_envz00_1340,
		obj_t BgL_xz00_1341, obj_t BgL_yz00_1342)
	{
		{	/* Llib/bit.scm 604 */
			{	/* Llib/bit.scm 604 */
				unsigned long BgL_tmpz00_2827;

				{	/* Llib/bit.scm 604 */
					long BgL_auxz00_2837;
					unsigned long BgL_auxz00_2828;

					{	/* Llib/bit.scm 604 */
						obj_t BgL_tmpz00_2838;

						if (INTEGERP(BgL_yz00_1342))
							{	/* Llib/bit.scm 604 */
								BgL_tmpz00_2838 = BgL_yz00_1342;
							}
						else
							{
								obj_t BgL_auxz00_2841;

								BgL_auxz00_2841 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28364)), BGl_string1776z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1342);
								FAILURE(BgL_auxz00_2841, BFALSE, BFALSE);
							}
						BgL_auxz00_2837 = (long) CINT(BgL_tmpz00_2838);
					}
					{	/* Llib/bit.scm 604 */
						obj_t BgL_tmpz00_2829;

						if (INTEGERP(BgL_xz00_1341))
							{	/* Llib/bit.scm 604 */
								BgL_tmpz00_2829 = BgL_xz00_1341;
							}
						else
							{
								obj_t BgL_auxz00_2832;

								BgL_auxz00_2832 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28364)), BGl_string1776z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_xz00_1341);
								FAILURE(BgL_auxz00_2832, BFALSE, BFALSE);
							}
						BgL_auxz00_2828 = (unsigned long) CINT(BgL_tmpz00_2829);
					}
					BgL_tmpz00_2827 =
						BGl_bitzd2urshzd2zz__bitz00(BgL_auxz00_2828, BgL_auxz00_2837);
				}
				return BINT(BgL_tmpz00_2827);
			}
		}

	}



/* bit-urshelong */
	BGL_EXPORTED_DEF unsigned long BGl_bitzd2urshelongzd2zz__bitz00(unsigned long
		BgL_xz00_104, long BgL_yz00_105)
	{
		{	/* Llib/bit.scm 605 */
			return (BgL_xz00_104 >> (int) (BgL_yz00_105));
		}

	}



/* &bit-urshelong */
	obj_t BGl_z62bitzd2urshelongzb0zz__bitz00(obj_t BgL_envz00_1343,
		obj_t BgL_xz00_1344, obj_t BgL_yz00_1345)
	{
		{	/* Llib/bit.scm 605 */
			{	/* Llib/bit.scm 605 */
				long BgL_tmpz00_2850;

				{	/* Llib/bit.scm 605 */
					long BgL_auxz00_2860;
					unsigned long BgL_auxz00_2851;

					{	/* Llib/bit.scm 605 */
						obj_t BgL_tmpz00_2861;

						if (INTEGERP(BgL_yz00_1345))
							{	/* Llib/bit.scm 605 */
								BgL_tmpz00_2861 = BgL_yz00_1345;
							}
						else
							{
								obj_t BgL_auxz00_2864;

								BgL_auxz00_2864 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28416)), BGl_string1777z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1345);
								FAILURE(BgL_auxz00_2864, BFALSE, BFALSE);
							}
						BgL_auxz00_2860 = (long) CINT(BgL_tmpz00_2861);
					}
					{	/* Llib/bit.scm 605 */
						obj_t BgL_tmpz00_2852;

						if (ELONGP(BgL_xz00_1344))
							{	/* Llib/bit.scm 605 */
								BgL_tmpz00_2852 = BgL_xz00_1344;
							}
						else
							{
								obj_t BgL_auxz00_2855;

								BgL_auxz00_2855 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28416)), BGl_string1777z00zz__bitz00,
									BGl_string1713z00zz__bitz00, BgL_xz00_1344);
								FAILURE(BgL_auxz00_2855, BFALSE, BFALSE);
							}
						BgL_auxz00_2851 = BELONG_TO_LONG(BgL_tmpz00_2852);
					}
					BgL_tmpz00_2850 =
						BGl_bitzd2urshelongzd2zz__bitz00(BgL_auxz00_2851, BgL_auxz00_2860);
				}
				return make_belong(BgL_tmpz00_2850);
			}
		}

	}



/* bit-urshllong */
	BGL_EXPORTED_DEF unsigned BGL_LONGLONG_T
		BGl_bitzd2urshllongzd2zz__bitz00(unsigned BGL_LONGLONG_T BgL_xz00_106,
		long BgL_yz00_107)
	{
		{	/* Llib/bit.scm 606 */
			return (BgL_xz00_106 >> (int) (BgL_yz00_107));
		}

	}



/* &bit-urshllong */
	obj_t BGl_z62bitzd2urshllongzb0zz__bitz00(obj_t BgL_envz00_1346,
		obj_t BgL_xz00_1347, obj_t BgL_yz00_1348)
	{
		{	/* Llib/bit.scm 606 */
			{	/* Llib/bit.scm 606 */
				unsigned BGL_LONGLONG_T BgL_tmpz00_2873;

				{	/* Llib/bit.scm 606 */
					long BgL_auxz00_2883;
					unsigned BGL_LONGLONG_T BgL_auxz00_2874;

					{	/* Llib/bit.scm 606 */
						obj_t BgL_tmpz00_2884;

						if (INTEGERP(BgL_yz00_1348))
							{	/* Llib/bit.scm 606 */
								BgL_tmpz00_2884 = BgL_yz00_1348;
							}
						else
							{
								obj_t BgL_auxz00_2887;

								BgL_auxz00_2887 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28473)), BGl_string1778z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1348);
								FAILURE(BgL_auxz00_2887, BFALSE, BFALSE);
							}
						BgL_auxz00_2883 = (long) CINT(BgL_tmpz00_2884);
					}
					{	/* Llib/bit.scm 606 */
						obj_t BgL_tmpz00_2875;

						if (LLONGP(BgL_xz00_1347))
							{	/* Llib/bit.scm 606 */
								BgL_tmpz00_2875 = BgL_xz00_1347;
							}
						else
							{
								obj_t BgL_auxz00_2878;

								BgL_auxz00_2878 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28473)), BGl_string1778z00zz__bitz00,
									BGl_string1715z00zz__bitz00, BgL_xz00_1347);
								FAILURE(BgL_auxz00_2878, BFALSE, BFALSE);
							}
						BgL_auxz00_2874 = BLLONG_TO_LLONG(BgL_tmpz00_2875);
					}
					BgL_tmpz00_2873 =
						BGl_bitzd2urshllongzd2zz__bitz00(BgL_auxz00_2874, BgL_auxz00_2883);
				}
				return make_bllong(BgL_tmpz00_2873);
			}
		}

	}



/* bit-urshu8 */
	BGL_EXPORTED_DEF uint8_t BGl_bitzd2urshu8zd2zz__bitz00(uint8_t BgL_xz00_108,
		long BgL_yz00_109)
	{
		{	/* Llib/bit.scm 607 */
			return (BgL_xz00_108 >> (int) (BgL_yz00_109));
		}

	}



/* &bit-urshu8 */
	obj_t BGl_z62bitzd2urshu8zb0zz__bitz00(obj_t BgL_envz00_1349,
		obj_t BgL_xz00_1350, obj_t BgL_yz00_1351)
	{
		{	/* Llib/bit.scm 607 */
			{	/* Llib/bit.scm 607 */
				uint8_t BgL_tmpz00_2896;

				{	/* Llib/bit.scm 607 */
					long BgL_auxz00_2906;
					uint8_t BgL_auxz00_2897;

					{	/* Llib/bit.scm 607 */
						obj_t BgL_tmpz00_2907;

						if (INTEGERP(BgL_yz00_1351))
							{	/* Llib/bit.scm 607 */
								BgL_tmpz00_2907 = BgL_yz00_1351;
							}
						else
							{
								obj_t BgL_auxz00_2910;

								BgL_auxz00_2910 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28527)), BGl_string1779z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1351);
								FAILURE(BgL_auxz00_2910, BFALSE, BFALSE);
							}
						BgL_auxz00_2906 = (long) CINT(BgL_tmpz00_2907);
					}
					{	/* Llib/bit.scm 607 */
						obj_t BgL_tmpz00_2898;

						if (BGL_UINT8P(BgL_xz00_1350))
							{	/* Llib/bit.scm 607 */
								BgL_tmpz00_2898 = BgL_xz00_1350;
							}
						else
							{
								obj_t BgL_auxz00_2901;

								BgL_auxz00_2901 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28527)), BGl_string1779z00zz__bitz00,
									BGl_string1719z00zz__bitz00, BgL_xz00_1350);
								FAILURE(BgL_auxz00_2901, BFALSE, BFALSE);
							}
						BgL_auxz00_2897 = BGL_BUINT8_TO_UINT8(BgL_tmpz00_2898);
					}
					BgL_tmpz00_2896 =
						BGl_bitzd2urshu8zd2zz__bitz00(BgL_auxz00_2897, BgL_auxz00_2906);
				}
				return BGL_UINT8_TO_BUINT8(BgL_tmpz00_2896);
			}
		}

	}



/* bit-urshs8 */
	BGL_EXPORTED_DEF int8_t BGl_bitzd2urshs8zd2zz__bitz00(int8_t BgL_xz00_110,
		long BgL_yz00_111)
	{
		{	/* Llib/bit.scm 608 */
			return (BgL_xz00_110 >> (int) (BgL_yz00_111));
		}

	}



/* &bit-urshs8 */
	obj_t BGl_z62bitzd2urshs8zb0zz__bitz00(obj_t BgL_envz00_1352,
		obj_t BgL_xz00_1353, obj_t BgL_yz00_1354)
	{
		{	/* Llib/bit.scm 608 */
			{	/* Llib/bit.scm 608 */
				int8_t BgL_tmpz00_2919;

				{	/* Llib/bit.scm 608 */
					long BgL_auxz00_2929;
					int8_t BgL_auxz00_2920;

					{	/* Llib/bit.scm 608 */
						obj_t BgL_tmpz00_2930;

						if (INTEGERP(BgL_yz00_1354))
							{	/* Llib/bit.scm 608 */
								BgL_tmpz00_2930 = BgL_yz00_1354;
							}
						else
							{
								obj_t BgL_auxz00_2933;

								BgL_auxz00_2933 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28577)), BGl_string1780z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1354);
								FAILURE(BgL_auxz00_2933, BFALSE, BFALSE);
							}
						BgL_auxz00_2929 = (long) CINT(BgL_tmpz00_2930);
					}
					{	/* Llib/bit.scm 608 */
						obj_t BgL_tmpz00_2921;

						if (BGL_INT8P(BgL_xz00_1353))
							{	/* Llib/bit.scm 608 */
								BgL_tmpz00_2921 = BgL_xz00_1353;
							}
						else
							{
								obj_t BgL_auxz00_2924;

								BgL_auxz00_2924 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28577)), BGl_string1780z00zz__bitz00,
									BGl_string1717z00zz__bitz00, BgL_xz00_1353);
								FAILURE(BgL_auxz00_2924, BFALSE, BFALSE);
							}
						BgL_auxz00_2920 = BGL_BINT8_TO_INT8(BgL_tmpz00_2921);
					}
					BgL_tmpz00_2919 =
						BGl_bitzd2urshs8zd2zz__bitz00(BgL_auxz00_2920, BgL_auxz00_2929);
				}
				return BGL_INT8_TO_BINT8(BgL_tmpz00_2919);
			}
		}

	}



/* bit-urshs16 */
	BGL_EXPORTED_DEF int16_t BGl_bitzd2urshs16zd2zz__bitz00(int16_t BgL_xz00_112,
		long BgL_yz00_113)
	{
		{	/* Llib/bit.scm 609 */
			return (BgL_xz00_112 >> (int) (BgL_yz00_113));
		}

	}



/* &bit-urshs16 */
	obj_t BGl_z62bitzd2urshs16zb0zz__bitz00(obj_t BgL_envz00_1355,
		obj_t BgL_xz00_1356, obj_t BgL_yz00_1357)
	{
		{	/* Llib/bit.scm 609 */
			{	/* Llib/bit.scm 609 */
				int16_t BgL_tmpz00_2942;

				{	/* Llib/bit.scm 609 */
					long BgL_auxz00_2952;
					int16_t BgL_auxz00_2943;

					{	/* Llib/bit.scm 609 */
						obj_t BgL_tmpz00_2953;

						if (INTEGERP(BgL_yz00_1357))
							{	/* Llib/bit.scm 609 */
								BgL_tmpz00_2953 = BgL_yz00_1357;
							}
						else
							{
								obj_t BgL_auxz00_2956;

								BgL_auxz00_2956 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28628)), BGl_string1781z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1357);
								FAILURE(BgL_auxz00_2956, BFALSE, BFALSE);
							}
						BgL_auxz00_2952 = (long) CINT(BgL_tmpz00_2953);
					}
					{	/* Llib/bit.scm 609 */
						obj_t BgL_tmpz00_2944;

						if (BGL_INT16P(BgL_xz00_1356))
							{	/* Llib/bit.scm 609 */
								BgL_tmpz00_2944 = BgL_xz00_1356;
							}
						else
							{
								obj_t BgL_auxz00_2947;

								BgL_auxz00_2947 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28628)), BGl_string1781z00zz__bitz00,
									BGl_string1721z00zz__bitz00, BgL_xz00_1356);
								FAILURE(BgL_auxz00_2947, BFALSE, BFALSE);
							}
						BgL_auxz00_2943 = BGL_BINT16_TO_INT16(BgL_tmpz00_2944);
					}
					BgL_tmpz00_2942 =
						BGl_bitzd2urshs16zd2zz__bitz00(BgL_auxz00_2943, BgL_auxz00_2952);
				}
				return BGL_INT16_TO_BINT16(BgL_tmpz00_2942);
			}
		}

	}



/* bit-urshu16 */
	BGL_EXPORTED_DEF uint16_t BGl_bitzd2urshu16zd2zz__bitz00(uint16_t
		BgL_xz00_114, long BgL_yz00_115)
	{
		{	/* Llib/bit.scm 610 */
			return (BgL_xz00_114 >> (int) (BgL_yz00_115));
		}

	}



/* &bit-urshu16 */
	obj_t BGl_z62bitzd2urshu16zb0zz__bitz00(obj_t BgL_envz00_1358,
		obj_t BgL_xz00_1359, obj_t BgL_yz00_1360)
	{
		{	/* Llib/bit.scm 610 */
			{	/* Llib/bit.scm 610 */
				uint16_t BgL_tmpz00_2965;

				{	/* Llib/bit.scm 610 */
					long BgL_auxz00_2975;
					uint16_t BgL_auxz00_2966;

					{	/* Llib/bit.scm 610 */
						obj_t BgL_tmpz00_2976;

						if (INTEGERP(BgL_yz00_1360))
							{	/* Llib/bit.scm 610 */
								BgL_tmpz00_2976 = BgL_yz00_1360;
							}
						else
							{
								obj_t BgL_auxz00_2979;

								BgL_auxz00_2979 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28680)), BGl_string1782z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1360);
								FAILURE(BgL_auxz00_2979, BFALSE, BFALSE);
							}
						BgL_auxz00_2975 = (long) CINT(BgL_tmpz00_2976);
					}
					{	/* Llib/bit.scm 610 */
						obj_t BgL_tmpz00_2967;

						if (BGL_UINT16P(BgL_xz00_1359))
							{	/* Llib/bit.scm 610 */
								BgL_tmpz00_2967 = BgL_xz00_1359;
							}
						else
							{
								obj_t BgL_auxz00_2970;

								BgL_auxz00_2970 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28680)), BGl_string1782z00zz__bitz00,
									BGl_string1723z00zz__bitz00, BgL_xz00_1359);
								FAILURE(BgL_auxz00_2970, BFALSE, BFALSE);
							}
						BgL_auxz00_2966 = BGL_BUINT16_TO_UINT16(BgL_tmpz00_2967);
					}
					BgL_tmpz00_2965 =
						BGl_bitzd2urshu16zd2zz__bitz00(BgL_auxz00_2966, BgL_auxz00_2975);
				}
				return BGL_UINT16_TO_BUINT16(BgL_tmpz00_2965);
			}
		}

	}



/* bit-urshs32 */
	BGL_EXPORTED_DEF int32_t BGl_bitzd2urshs32zd2zz__bitz00(int32_t BgL_xz00_116,
		long BgL_yz00_117)
	{
		{	/* Llib/bit.scm 611 */
			return (BgL_xz00_116 >> (int) (BgL_yz00_117));
		}

	}



/* &bit-urshs32 */
	obj_t BGl_z62bitzd2urshs32zb0zz__bitz00(obj_t BgL_envz00_1361,
		obj_t BgL_xz00_1362, obj_t BgL_yz00_1363)
	{
		{	/* Llib/bit.scm 611 */
			{	/* Llib/bit.scm 611 */
				int32_t BgL_tmpz00_2988;

				{	/* Llib/bit.scm 611 */
					long BgL_auxz00_2998;
					int32_t BgL_auxz00_2989;

					{	/* Llib/bit.scm 611 */
						obj_t BgL_tmpz00_2999;

						if (INTEGERP(BgL_yz00_1363))
							{	/* Llib/bit.scm 611 */
								BgL_tmpz00_2999 = BgL_yz00_1363;
							}
						else
							{
								obj_t BgL_auxz00_3002;

								BgL_auxz00_3002 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28732)), BGl_string1783z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1363);
								FAILURE(BgL_auxz00_3002, BFALSE, BFALSE);
							}
						BgL_auxz00_2998 = (long) CINT(BgL_tmpz00_2999);
					}
					{	/* Llib/bit.scm 611 */
						obj_t BgL_tmpz00_2990;

						if (BGL_INT32P(BgL_xz00_1362))
							{	/* Llib/bit.scm 611 */
								BgL_tmpz00_2990 = BgL_xz00_1362;
							}
						else
							{
								obj_t BgL_auxz00_2993;

								BgL_auxz00_2993 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28732)), BGl_string1783z00zz__bitz00,
									BGl_string1725z00zz__bitz00, BgL_xz00_1362);
								FAILURE(BgL_auxz00_2993, BFALSE, BFALSE);
							}
						BgL_auxz00_2989 = BGL_BINT32_TO_INT32(BgL_tmpz00_2990);
					}
					BgL_tmpz00_2988 =
						BGl_bitzd2urshs32zd2zz__bitz00(BgL_auxz00_2989, BgL_auxz00_2998);
				}
				return BGL_INT32_TO_BINT32(BgL_tmpz00_2988);
			}
		}

	}



/* bit-urshu32 */
	BGL_EXPORTED_DEF uint32_t BGl_bitzd2urshu32zd2zz__bitz00(uint32_t
		BgL_xz00_118, long BgL_yz00_119)
	{
		{	/* Llib/bit.scm 612 */
			return (BgL_xz00_118 >> (int) (BgL_yz00_119));
		}

	}



/* &bit-urshu32 */
	obj_t BGl_z62bitzd2urshu32zb0zz__bitz00(obj_t BgL_envz00_1364,
		obj_t BgL_xz00_1365, obj_t BgL_yz00_1366)
	{
		{	/* Llib/bit.scm 612 */
			{	/* Llib/bit.scm 612 */
				uint32_t BgL_tmpz00_3011;

				{	/* Llib/bit.scm 612 */
					long BgL_auxz00_3021;
					uint32_t BgL_auxz00_3012;

					{	/* Llib/bit.scm 612 */
						obj_t BgL_tmpz00_3022;

						if (INTEGERP(BgL_yz00_1366))
							{	/* Llib/bit.scm 612 */
								BgL_tmpz00_3022 = BgL_yz00_1366;
							}
						else
							{
								obj_t BgL_auxz00_3025;

								BgL_auxz00_3025 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28784)), BGl_string1784z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1366);
								FAILURE(BgL_auxz00_3025, BFALSE, BFALSE);
							}
						BgL_auxz00_3021 = (long) CINT(BgL_tmpz00_3022);
					}
					{	/* Llib/bit.scm 612 */
						obj_t BgL_tmpz00_3013;

						if (BGL_UINT32P(BgL_xz00_1365))
							{	/* Llib/bit.scm 612 */
								BgL_tmpz00_3013 = BgL_xz00_1365;
							}
						else
							{
								obj_t BgL_auxz00_3016;

								BgL_auxz00_3016 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28784)), BGl_string1784z00zz__bitz00,
									BGl_string1727z00zz__bitz00, BgL_xz00_1365);
								FAILURE(BgL_auxz00_3016, BFALSE, BFALSE);
							}
						BgL_auxz00_3012 = BGL_BUINT32_TO_UINT32(BgL_tmpz00_3013);
					}
					BgL_tmpz00_3011 =
						BGl_bitzd2urshu32zd2zz__bitz00(BgL_auxz00_3012, BgL_auxz00_3021);
				}
				return BGL_UINT32_TO_BUINT32(BgL_tmpz00_3011);
			}
		}

	}



/* bit-urshs64 */
	BGL_EXPORTED_DEF int64_t BGl_bitzd2urshs64zd2zz__bitz00(int64_t BgL_xz00_120,
		long BgL_yz00_121)
	{
		{	/* Llib/bit.scm 613 */
			return (BgL_xz00_120 >> (int) (BgL_yz00_121));
		}

	}



/* &bit-urshs64 */
	obj_t BGl_z62bitzd2urshs64zb0zz__bitz00(obj_t BgL_envz00_1367,
		obj_t BgL_xz00_1368, obj_t BgL_yz00_1369)
	{
		{	/* Llib/bit.scm 613 */
			{	/* Llib/bit.scm 613 */
				int64_t BgL_tmpz00_3034;

				{	/* Llib/bit.scm 613 */
					long BgL_auxz00_3044;
					int64_t BgL_auxz00_3035;

					{	/* Llib/bit.scm 613 */
						obj_t BgL_tmpz00_3045;

						if (INTEGERP(BgL_yz00_1369))
							{	/* Llib/bit.scm 613 */
								BgL_tmpz00_3045 = BgL_yz00_1369;
							}
						else
							{
								obj_t BgL_auxz00_3048;

								BgL_auxz00_3048 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28836)), BGl_string1785z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1369);
								FAILURE(BgL_auxz00_3048, BFALSE, BFALSE);
							}
						BgL_auxz00_3044 = (long) CINT(BgL_tmpz00_3045);
					}
					{	/* Llib/bit.scm 613 */
						obj_t BgL_tmpz00_3036;

						if (BGL_INT64P(BgL_xz00_1368))
							{	/* Llib/bit.scm 613 */
								BgL_tmpz00_3036 = BgL_xz00_1368;
							}
						else
							{
								obj_t BgL_auxz00_3039;

								BgL_auxz00_3039 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28836)), BGl_string1785z00zz__bitz00,
									BGl_string1729z00zz__bitz00, BgL_xz00_1368);
								FAILURE(BgL_auxz00_3039, BFALSE, BFALSE);
							}
						BgL_auxz00_3035 = BGL_BINT64_TO_INT64(BgL_tmpz00_3036);
					}
					BgL_tmpz00_3034 =
						BGl_bitzd2urshs64zd2zz__bitz00(BgL_auxz00_3035, BgL_auxz00_3044);
				}
				return BGL_INT64_TO_BINT64(BgL_tmpz00_3034);
			}
		}

	}



/* bit-urshu64 */
	BGL_EXPORTED_DEF uint64_t BGl_bitzd2urshu64zd2zz__bitz00(uint64_t
		BgL_xz00_122, long BgL_yz00_123)
	{
		{	/* Llib/bit.scm 614 */
			return (BgL_xz00_122 >> (int) (BgL_yz00_123));
		}

	}



/* &bit-urshu64 */
	obj_t BGl_z62bitzd2urshu64zb0zz__bitz00(obj_t BgL_envz00_1370,
		obj_t BgL_xz00_1371, obj_t BgL_yz00_1372)
	{
		{	/* Llib/bit.scm 614 */
			{	/* Llib/bit.scm 614 */
				uint64_t BgL_tmpz00_3057;

				{	/* Llib/bit.scm 614 */
					long BgL_auxz00_3067;
					uint64_t BgL_auxz00_3058;

					{	/* Llib/bit.scm 614 */
						obj_t BgL_tmpz00_3068;

						if (INTEGERP(BgL_yz00_1372))
							{	/* Llib/bit.scm 614 */
								BgL_tmpz00_3068 = BgL_yz00_1372;
							}
						else
							{
								obj_t BgL_auxz00_3071;

								BgL_auxz00_3071 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28888)), BGl_string1786z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1372);
								FAILURE(BgL_auxz00_3071, BFALSE, BFALSE);
							}
						BgL_auxz00_3067 = (long) CINT(BgL_tmpz00_3068);
					}
					{	/* Llib/bit.scm 614 */
						obj_t BgL_tmpz00_3059;

						if (BGL_UINT64P(BgL_xz00_1371))
							{	/* Llib/bit.scm 614 */
								BgL_tmpz00_3059 = BgL_xz00_1371;
							}
						else
							{
								obj_t BgL_auxz00_3062;

								BgL_auxz00_3062 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 28888)), BGl_string1786z00zz__bitz00,
									BGl_string1731z00zz__bitz00, BgL_xz00_1371);
								FAILURE(BgL_auxz00_3062, BFALSE, BFALSE);
							}
						BgL_auxz00_3058 = BGL_BINT64_TO_INT64(BgL_tmpz00_3059);
					}
					BgL_tmpz00_3057 =
						BGl_bitzd2urshu64zd2zz__bitz00(BgL_auxz00_3058, BgL_auxz00_3067);
				}
				return BGL_UINT64_TO_BUINT64(BgL_tmpz00_3057);
			}
		}

	}



/* bit-lsh */
	BGL_EXPORTED_DEF long BGl_bitzd2lshzd2zz__bitz00(long BgL_xz00_124,
		long BgL_yz00_125)
	{
		{	/* Llib/bit.scm 619 */
			return (BgL_xz00_124 << (int) (BgL_yz00_125));
		}

	}



/* &bit-lsh */
	obj_t BGl_z62bitzd2lshzb0zz__bitz00(obj_t BgL_envz00_1373,
		obj_t BgL_xz00_1374, obj_t BgL_yz00_1375)
	{
		{	/* Llib/bit.scm 619 */
			{	/* Llib/bit.scm 619 */
				long BgL_tmpz00_3080;

				{	/* Llib/bit.scm 619 */
					long BgL_auxz00_3090;
					long BgL_auxz00_3081;

					{	/* Llib/bit.scm 619 */
						obj_t BgL_tmpz00_3091;

						if (INTEGERP(BgL_yz00_1375))
							{	/* Llib/bit.scm 619 */
								BgL_tmpz00_3091 = BgL_yz00_1375;
							}
						else
							{
								obj_t BgL_auxz00_3094;

								BgL_auxz00_3094 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29166)), BGl_string1787z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1375);
								FAILURE(BgL_auxz00_3094, BFALSE, BFALSE);
							}
						BgL_auxz00_3090 = (long) CINT(BgL_tmpz00_3091);
					}
					{	/* Llib/bit.scm 619 */
						obj_t BgL_tmpz00_3082;

						if (INTEGERP(BgL_xz00_1374))
							{	/* Llib/bit.scm 619 */
								BgL_tmpz00_3082 = BgL_xz00_1374;
							}
						else
							{
								obj_t BgL_auxz00_3085;

								BgL_auxz00_3085 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29166)), BGl_string1787z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_xz00_1374);
								FAILURE(BgL_auxz00_3085, BFALSE, BFALSE);
							}
						BgL_auxz00_3081 = (long) CINT(BgL_tmpz00_3082);
					}
					BgL_tmpz00_3080 =
						BGl_bitzd2lshzd2zz__bitz00(BgL_auxz00_3081, BgL_auxz00_3090);
				}
				return BINT(BgL_tmpz00_3080);
			}
		}

	}



/* bit-lshelong */
	BGL_EXPORTED_DEF long BGl_bitzd2lshelongzd2zz__bitz00(long BgL_xz00_126,
		long BgL_yz00_127)
	{
		{	/* Llib/bit.scm 620 */
			return (BgL_xz00_126 << (int) (BgL_yz00_127));
		}

	}



/* &bit-lshelong */
	obj_t BGl_z62bitzd2lshelongzb0zz__bitz00(obj_t BgL_envz00_1376,
		obj_t BgL_xz00_1377, obj_t BgL_yz00_1378)
	{
		{	/* Llib/bit.scm 620 */
			{	/* Llib/bit.scm 620 */
				long BgL_tmpz00_3103;

				{	/* Llib/bit.scm 620 */
					long BgL_auxz00_3113;
					long BgL_auxz00_3104;

					{	/* Llib/bit.scm 620 */
						obj_t BgL_tmpz00_3114;

						if (INTEGERP(BgL_yz00_1378))
							{	/* Llib/bit.scm 620 */
								BgL_tmpz00_3114 = BgL_yz00_1378;
							}
						else
							{
								obj_t BgL_auxz00_3117;

								BgL_auxz00_3117 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29216)), BGl_string1788z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1378);
								FAILURE(BgL_auxz00_3117, BFALSE, BFALSE);
							}
						BgL_auxz00_3113 = (long) CINT(BgL_tmpz00_3114);
					}
					{	/* Llib/bit.scm 620 */
						obj_t BgL_tmpz00_3105;

						if (ELONGP(BgL_xz00_1377))
							{	/* Llib/bit.scm 620 */
								BgL_tmpz00_3105 = BgL_xz00_1377;
							}
						else
							{
								obj_t BgL_auxz00_3108;

								BgL_auxz00_3108 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29216)), BGl_string1788z00zz__bitz00,
									BGl_string1713z00zz__bitz00, BgL_xz00_1377);
								FAILURE(BgL_auxz00_3108, BFALSE, BFALSE);
							}
						BgL_auxz00_3104 = BELONG_TO_LONG(BgL_tmpz00_3105);
					}
					BgL_tmpz00_3103 =
						BGl_bitzd2lshelongzd2zz__bitz00(BgL_auxz00_3104, BgL_auxz00_3113);
				}
				return make_belong(BgL_tmpz00_3103);
			}
		}

	}



/* bit-lshllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2lshllongzd2zz__bitz00(BGL_LONGLONG_T
		BgL_xz00_128, long BgL_yz00_129)
	{
		{	/* Llib/bit.scm 621 */
			return (BgL_xz00_128 << (int) (BgL_yz00_129));
		}

	}



/* &bit-lshllong */
	obj_t BGl_z62bitzd2lshllongzb0zz__bitz00(obj_t BgL_envz00_1379,
		obj_t BgL_xz00_1380, obj_t BgL_yz00_1381)
	{
		{	/* Llib/bit.scm 621 */
			{	/* Llib/bit.scm 621 */
				BGL_LONGLONG_T BgL_tmpz00_3126;

				{	/* Llib/bit.scm 621 */
					long BgL_auxz00_3136;
					BGL_LONGLONG_T BgL_auxz00_3127;

					{	/* Llib/bit.scm 621 */
						obj_t BgL_tmpz00_3137;

						if (INTEGERP(BgL_yz00_1381))
							{	/* Llib/bit.scm 621 */
								BgL_tmpz00_3137 = BgL_yz00_1381;
							}
						else
							{
								obj_t BgL_auxz00_3140;

								BgL_auxz00_3140 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29271)), BGl_string1789z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1381);
								FAILURE(BgL_auxz00_3140, BFALSE, BFALSE);
							}
						BgL_auxz00_3136 = (long) CINT(BgL_tmpz00_3137);
					}
					{	/* Llib/bit.scm 621 */
						obj_t BgL_tmpz00_3128;

						if (LLONGP(BgL_xz00_1380))
							{	/* Llib/bit.scm 621 */
								BgL_tmpz00_3128 = BgL_xz00_1380;
							}
						else
							{
								obj_t BgL_auxz00_3131;

								BgL_auxz00_3131 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29271)), BGl_string1789z00zz__bitz00,
									BGl_string1715z00zz__bitz00, BgL_xz00_1380);
								FAILURE(BgL_auxz00_3131, BFALSE, BFALSE);
							}
						BgL_auxz00_3127 = BLLONG_TO_LLONG(BgL_tmpz00_3128);
					}
					BgL_tmpz00_3126 =
						BGl_bitzd2lshllongzd2zz__bitz00(BgL_auxz00_3127, BgL_auxz00_3136);
				}
				return make_bllong(BgL_tmpz00_3126);
			}
		}

	}



/* bit-lshs8 */
	BGL_EXPORTED_DEF int8_t BGl_bitzd2lshs8zd2zz__bitz00(int8_t BgL_xz00_130,
		long BgL_yz00_131)
	{
		{	/* Llib/bit.scm 622 */
			return (BgL_xz00_130 << (int) (BgL_yz00_131));
		}

	}



/* &bit-lshs8 */
	obj_t BGl_z62bitzd2lshs8zb0zz__bitz00(obj_t BgL_envz00_1382,
		obj_t BgL_xz00_1383, obj_t BgL_yz00_1384)
	{
		{	/* Llib/bit.scm 622 */
			{	/* Llib/bit.scm 622 */
				int8_t BgL_tmpz00_3149;

				{	/* Llib/bit.scm 622 */
					long BgL_auxz00_3159;
					int8_t BgL_auxz00_3150;

					{	/* Llib/bit.scm 622 */
						obj_t BgL_tmpz00_3160;

						if (INTEGERP(BgL_yz00_1384))
							{	/* Llib/bit.scm 622 */
								BgL_tmpz00_3160 = BgL_yz00_1384;
							}
						else
							{
								obj_t BgL_auxz00_3163;

								BgL_auxz00_3163 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29323)), BGl_string1790z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1384);
								FAILURE(BgL_auxz00_3163, BFALSE, BFALSE);
							}
						BgL_auxz00_3159 = (long) CINT(BgL_tmpz00_3160);
					}
					{	/* Llib/bit.scm 622 */
						obj_t BgL_tmpz00_3151;

						if (BGL_INT8P(BgL_xz00_1383))
							{	/* Llib/bit.scm 622 */
								BgL_tmpz00_3151 = BgL_xz00_1383;
							}
						else
							{
								obj_t BgL_auxz00_3154;

								BgL_auxz00_3154 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29323)), BGl_string1790z00zz__bitz00,
									BGl_string1717z00zz__bitz00, BgL_xz00_1383);
								FAILURE(BgL_auxz00_3154, BFALSE, BFALSE);
							}
						BgL_auxz00_3150 = BGL_BINT8_TO_INT8(BgL_tmpz00_3151);
					}
					BgL_tmpz00_3149 =
						BGl_bitzd2lshs8zd2zz__bitz00(BgL_auxz00_3150, BgL_auxz00_3159);
				}
				return BGL_INT8_TO_BINT8(BgL_tmpz00_3149);
			}
		}

	}



/* bit-lshu8 */
	BGL_EXPORTED_DEF uint8_t BGl_bitzd2lshu8zd2zz__bitz00(uint8_t BgL_xz00_132,
		long BgL_yz00_133)
	{
		{	/* Llib/bit.scm 623 */
			return (BgL_xz00_132 << (int) (BgL_yz00_133));
		}

	}



/* &bit-lshu8 */
	obj_t BGl_z62bitzd2lshu8zb0zz__bitz00(obj_t BgL_envz00_1385,
		obj_t BgL_xz00_1386, obj_t BgL_yz00_1387)
	{
		{	/* Llib/bit.scm 623 */
			{	/* Llib/bit.scm 623 */
				uint8_t BgL_tmpz00_3172;

				{	/* Llib/bit.scm 623 */
					long BgL_auxz00_3182;
					uint8_t BgL_auxz00_3173;

					{	/* Llib/bit.scm 623 */
						obj_t BgL_tmpz00_3183;

						if (INTEGERP(BgL_yz00_1387))
							{	/* Llib/bit.scm 623 */
								BgL_tmpz00_3183 = BgL_yz00_1387;
							}
						else
							{
								obj_t BgL_auxz00_3186;

								BgL_auxz00_3186 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29371)), BGl_string1791z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1387);
								FAILURE(BgL_auxz00_3186, BFALSE, BFALSE);
							}
						BgL_auxz00_3182 = (long) CINT(BgL_tmpz00_3183);
					}
					{	/* Llib/bit.scm 623 */
						obj_t BgL_tmpz00_3174;

						if (BGL_UINT8P(BgL_xz00_1386))
							{	/* Llib/bit.scm 623 */
								BgL_tmpz00_3174 = BgL_xz00_1386;
							}
						else
							{
								obj_t BgL_auxz00_3177;

								BgL_auxz00_3177 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29371)), BGl_string1791z00zz__bitz00,
									BGl_string1719z00zz__bitz00, BgL_xz00_1386);
								FAILURE(BgL_auxz00_3177, BFALSE, BFALSE);
							}
						BgL_auxz00_3173 = BGL_BUINT8_TO_UINT8(BgL_tmpz00_3174);
					}
					BgL_tmpz00_3172 =
						BGl_bitzd2lshu8zd2zz__bitz00(BgL_auxz00_3173, BgL_auxz00_3182);
				}
				return BGL_UINT8_TO_BUINT8(BgL_tmpz00_3172);
			}
		}

	}



/* bit-lshs16 */
	BGL_EXPORTED_DEF int16_t BGl_bitzd2lshs16zd2zz__bitz00(int16_t BgL_xz00_134,
		long BgL_yz00_135)
	{
		{	/* Llib/bit.scm 624 */
			return (BgL_xz00_134 << (int) (BgL_yz00_135));
		}

	}



/* &bit-lshs16 */
	obj_t BGl_z62bitzd2lshs16zb0zz__bitz00(obj_t BgL_envz00_1388,
		obj_t BgL_xz00_1389, obj_t BgL_yz00_1390)
	{
		{	/* Llib/bit.scm 624 */
			{	/* Llib/bit.scm 624 */
				int16_t BgL_tmpz00_3195;

				{	/* Llib/bit.scm 624 */
					long BgL_auxz00_3205;
					int16_t BgL_auxz00_3196;

					{	/* Llib/bit.scm 624 */
						obj_t BgL_tmpz00_3206;

						if (INTEGERP(BgL_yz00_1390))
							{	/* Llib/bit.scm 624 */
								BgL_tmpz00_3206 = BgL_yz00_1390;
							}
						else
							{
								obj_t BgL_auxz00_3209;

								BgL_auxz00_3209 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29420)), BGl_string1792z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1390);
								FAILURE(BgL_auxz00_3209, BFALSE, BFALSE);
							}
						BgL_auxz00_3205 = (long) CINT(BgL_tmpz00_3206);
					}
					{	/* Llib/bit.scm 624 */
						obj_t BgL_tmpz00_3197;

						if (BGL_INT16P(BgL_xz00_1389))
							{	/* Llib/bit.scm 624 */
								BgL_tmpz00_3197 = BgL_xz00_1389;
							}
						else
							{
								obj_t BgL_auxz00_3200;

								BgL_auxz00_3200 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29420)), BGl_string1792z00zz__bitz00,
									BGl_string1721z00zz__bitz00, BgL_xz00_1389);
								FAILURE(BgL_auxz00_3200, BFALSE, BFALSE);
							}
						BgL_auxz00_3196 = BGL_BINT16_TO_INT16(BgL_tmpz00_3197);
					}
					BgL_tmpz00_3195 =
						BGl_bitzd2lshs16zd2zz__bitz00(BgL_auxz00_3196, BgL_auxz00_3205);
				}
				return BGL_INT16_TO_BINT16(BgL_tmpz00_3195);
			}
		}

	}



/* bit-lshu16 */
	BGL_EXPORTED_DEF uint16_t BGl_bitzd2lshu16zd2zz__bitz00(uint16_t BgL_xz00_136,
		long BgL_yz00_137)
	{
		{	/* Llib/bit.scm 625 */
			return (BgL_xz00_136 << (int) (BgL_yz00_137));
		}

	}



/* &bit-lshu16 */
	obj_t BGl_z62bitzd2lshu16zb0zz__bitz00(obj_t BgL_envz00_1391,
		obj_t BgL_xz00_1392, obj_t BgL_yz00_1393)
	{
		{	/* Llib/bit.scm 625 */
			{	/* Llib/bit.scm 625 */
				uint16_t BgL_tmpz00_3218;

				{	/* Llib/bit.scm 625 */
					long BgL_auxz00_3228;
					uint16_t BgL_auxz00_3219;

					{	/* Llib/bit.scm 625 */
						obj_t BgL_tmpz00_3229;

						if (INTEGERP(BgL_yz00_1393))
							{	/* Llib/bit.scm 625 */
								BgL_tmpz00_3229 = BgL_yz00_1393;
							}
						else
							{
								obj_t BgL_auxz00_3232;

								BgL_auxz00_3232 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29470)), BGl_string1793z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1393);
								FAILURE(BgL_auxz00_3232, BFALSE, BFALSE);
							}
						BgL_auxz00_3228 = (long) CINT(BgL_tmpz00_3229);
					}
					{	/* Llib/bit.scm 625 */
						obj_t BgL_tmpz00_3220;

						if (BGL_UINT16P(BgL_xz00_1392))
							{	/* Llib/bit.scm 625 */
								BgL_tmpz00_3220 = BgL_xz00_1392;
							}
						else
							{
								obj_t BgL_auxz00_3223;

								BgL_auxz00_3223 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29470)), BGl_string1793z00zz__bitz00,
									BGl_string1723z00zz__bitz00, BgL_xz00_1392);
								FAILURE(BgL_auxz00_3223, BFALSE, BFALSE);
							}
						BgL_auxz00_3219 = BGL_BUINT16_TO_UINT16(BgL_tmpz00_3220);
					}
					BgL_tmpz00_3218 =
						BGl_bitzd2lshu16zd2zz__bitz00(BgL_auxz00_3219, BgL_auxz00_3228);
				}
				return BGL_UINT16_TO_BUINT16(BgL_tmpz00_3218);
			}
		}

	}



/* bit-lshs32 */
	BGL_EXPORTED_DEF int32_t BGl_bitzd2lshs32zd2zz__bitz00(int32_t BgL_xz00_138,
		long BgL_yz00_139)
	{
		{	/* Llib/bit.scm 626 */
			return (BgL_xz00_138 << (int) (BgL_yz00_139));
		}

	}



/* &bit-lshs32 */
	obj_t BGl_z62bitzd2lshs32zb0zz__bitz00(obj_t BgL_envz00_1394,
		obj_t BgL_xz00_1395, obj_t BgL_yz00_1396)
	{
		{	/* Llib/bit.scm 626 */
			{	/* Llib/bit.scm 626 */
				int32_t BgL_tmpz00_3241;

				{	/* Llib/bit.scm 626 */
					long BgL_auxz00_3251;
					int32_t BgL_auxz00_3242;

					{	/* Llib/bit.scm 626 */
						obj_t BgL_tmpz00_3252;

						if (INTEGERP(BgL_yz00_1396))
							{	/* Llib/bit.scm 626 */
								BgL_tmpz00_3252 = BgL_yz00_1396;
							}
						else
							{
								obj_t BgL_auxz00_3255;

								BgL_auxz00_3255 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29520)), BGl_string1794z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1396);
								FAILURE(BgL_auxz00_3255, BFALSE, BFALSE);
							}
						BgL_auxz00_3251 = (long) CINT(BgL_tmpz00_3252);
					}
					{	/* Llib/bit.scm 626 */
						obj_t BgL_tmpz00_3243;

						if (BGL_INT32P(BgL_xz00_1395))
							{	/* Llib/bit.scm 626 */
								BgL_tmpz00_3243 = BgL_xz00_1395;
							}
						else
							{
								obj_t BgL_auxz00_3246;

								BgL_auxz00_3246 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29520)), BGl_string1794z00zz__bitz00,
									BGl_string1725z00zz__bitz00, BgL_xz00_1395);
								FAILURE(BgL_auxz00_3246, BFALSE, BFALSE);
							}
						BgL_auxz00_3242 = BGL_BINT32_TO_INT32(BgL_tmpz00_3243);
					}
					BgL_tmpz00_3241 =
						BGl_bitzd2lshs32zd2zz__bitz00(BgL_auxz00_3242, BgL_auxz00_3251);
				}
				return BGL_INT32_TO_BINT32(BgL_tmpz00_3241);
			}
		}

	}



/* bit-lshu32 */
	BGL_EXPORTED_DEF uint32_t BGl_bitzd2lshu32zd2zz__bitz00(uint32_t BgL_xz00_140,
		long BgL_yz00_141)
	{
		{	/* Llib/bit.scm 627 */
			return (BgL_xz00_140 << (int) (BgL_yz00_141));
		}

	}



/* &bit-lshu32 */
	obj_t BGl_z62bitzd2lshu32zb0zz__bitz00(obj_t BgL_envz00_1397,
		obj_t BgL_xz00_1398, obj_t BgL_yz00_1399)
	{
		{	/* Llib/bit.scm 627 */
			{	/* Llib/bit.scm 627 */
				uint32_t BgL_tmpz00_3264;

				{	/* Llib/bit.scm 627 */
					long BgL_auxz00_3274;
					uint32_t BgL_auxz00_3265;

					{	/* Llib/bit.scm 627 */
						obj_t BgL_tmpz00_3275;

						if (INTEGERP(BgL_yz00_1399))
							{	/* Llib/bit.scm 627 */
								BgL_tmpz00_3275 = BgL_yz00_1399;
							}
						else
							{
								obj_t BgL_auxz00_3278;

								BgL_auxz00_3278 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29570)), BGl_string1795z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1399);
								FAILURE(BgL_auxz00_3278, BFALSE, BFALSE);
							}
						BgL_auxz00_3274 = (long) CINT(BgL_tmpz00_3275);
					}
					{	/* Llib/bit.scm 627 */
						obj_t BgL_tmpz00_3266;

						if (BGL_UINT32P(BgL_xz00_1398))
							{	/* Llib/bit.scm 627 */
								BgL_tmpz00_3266 = BgL_xz00_1398;
							}
						else
							{
								obj_t BgL_auxz00_3269;

								BgL_auxz00_3269 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29570)), BGl_string1795z00zz__bitz00,
									BGl_string1727z00zz__bitz00, BgL_xz00_1398);
								FAILURE(BgL_auxz00_3269, BFALSE, BFALSE);
							}
						BgL_auxz00_3265 = BGL_BUINT32_TO_UINT32(BgL_tmpz00_3266);
					}
					BgL_tmpz00_3264 =
						BGl_bitzd2lshu32zd2zz__bitz00(BgL_auxz00_3265, BgL_auxz00_3274);
				}
				return BGL_UINT32_TO_BUINT32(BgL_tmpz00_3264);
			}
		}

	}



/* bit-lshs64 */
	BGL_EXPORTED_DEF int64_t BGl_bitzd2lshs64zd2zz__bitz00(int64_t BgL_xz00_142,
		long BgL_yz00_143)
	{
		{	/* Llib/bit.scm 628 */
			return (BgL_xz00_142 << (int) (BgL_yz00_143));
		}

	}



/* &bit-lshs64 */
	obj_t BGl_z62bitzd2lshs64zb0zz__bitz00(obj_t BgL_envz00_1400,
		obj_t BgL_xz00_1401, obj_t BgL_yz00_1402)
	{
		{	/* Llib/bit.scm 628 */
			{	/* Llib/bit.scm 628 */
				int64_t BgL_tmpz00_3287;

				{	/* Llib/bit.scm 628 */
					long BgL_auxz00_3297;
					int64_t BgL_auxz00_3288;

					{	/* Llib/bit.scm 628 */
						obj_t BgL_tmpz00_3298;

						if (INTEGERP(BgL_yz00_1402))
							{	/* Llib/bit.scm 628 */
								BgL_tmpz00_3298 = BgL_yz00_1402;
							}
						else
							{
								obj_t BgL_auxz00_3301;

								BgL_auxz00_3301 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29620)), BGl_string1796z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1402);
								FAILURE(BgL_auxz00_3301, BFALSE, BFALSE);
							}
						BgL_auxz00_3297 = (long) CINT(BgL_tmpz00_3298);
					}
					{	/* Llib/bit.scm 628 */
						obj_t BgL_tmpz00_3289;

						if (BGL_INT64P(BgL_xz00_1401))
							{	/* Llib/bit.scm 628 */
								BgL_tmpz00_3289 = BgL_xz00_1401;
							}
						else
							{
								obj_t BgL_auxz00_3292;

								BgL_auxz00_3292 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29620)), BGl_string1796z00zz__bitz00,
									BGl_string1729z00zz__bitz00, BgL_xz00_1401);
								FAILURE(BgL_auxz00_3292, BFALSE, BFALSE);
							}
						BgL_auxz00_3288 = BGL_BINT64_TO_INT64(BgL_tmpz00_3289);
					}
					BgL_tmpz00_3287 =
						BGl_bitzd2lshs64zd2zz__bitz00(BgL_auxz00_3288, BgL_auxz00_3297);
				}
				return BGL_INT64_TO_BINT64(BgL_tmpz00_3287);
			}
		}

	}



/* bit-lshu64 */
	BGL_EXPORTED_DEF uint64_t BGl_bitzd2lshu64zd2zz__bitz00(uint64_t BgL_xz00_144,
		long BgL_yz00_145)
	{
		{	/* Llib/bit.scm 629 */
			return (BgL_xz00_144 << (int) (BgL_yz00_145));
		}

	}



/* &bit-lshu64 */
	obj_t BGl_z62bitzd2lshu64zb0zz__bitz00(obj_t BgL_envz00_1403,
		obj_t BgL_xz00_1404, obj_t BgL_yz00_1405)
	{
		{	/* Llib/bit.scm 629 */
			{	/* Llib/bit.scm 629 */
				uint64_t BgL_tmpz00_3310;

				{	/* Llib/bit.scm 629 */
					long BgL_auxz00_3320;
					uint64_t BgL_auxz00_3311;

					{	/* Llib/bit.scm 629 */
						obj_t BgL_tmpz00_3321;

						if (INTEGERP(BgL_yz00_1405))
							{	/* Llib/bit.scm 629 */
								BgL_tmpz00_3321 = BgL_yz00_1405;
							}
						else
							{
								obj_t BgL_auxz00_3324;

								BgL_auxz00_3324 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29670)), BGl_string1797z00zz__bitz00,
									BGl_string1711z00zz__bitz00, BgL_yz00_1405);
								FAILURE(BgL_auxz00_3324, BFALSE, BFALSE);
							}
						BgL_auxz00_3320 = (long) CINT(BgL_tmpz00_3321);
					}
					{	/* Llib/bit.scm 629 */
						obj_t BgL_tmpz00_3312;

						if (BGL_UINT64P(BgL_xz00_1404))
							{	/* Llib/bit.scm 629 */
								BgL_tmpz00_3312 = BgL_xz00_1404;
							}
						else
							{
								obj_t BgL_auxz00_3315;

								BgL_auxz00_3315 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1709z00zz__bitz00,
									BINT(((long) 29670)), BGl_string1797z00zz__bitz00,
									BGl_string1731z00zz__bitz00, BgL_xz00_1404);
								FAILURE(BgL_auxz00_3315, BFALSE, BFALSE);
							}
						BgL_auxz00_3311 = BGL_BINT64_TO_INT64(BgL_tmpz00_3312);
					}
					BgL_tmpz00_3310 =
						BGl_bitzd2lshu64zd2zz__bitz00(BgL_auxz00_3311, BgL_auxz00_3320);
				}
				return BGL_UINT64_TO_BUINT64(BgL_tmpz00_3310);
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__bitz00()
	{
		{	/* Llib/bit.scm 14 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1798z00zz__bitz00));
		}

	}

#ifdef __cplusplus
}
#endif
