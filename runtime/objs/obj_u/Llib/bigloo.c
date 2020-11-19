/*===========================================================================*/
/*   (Llib/bigloo.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/bigloo.scm -indent -o objs/obj_u/Llib/bigloo.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL bool_t BGl_cnstzf3zf3zz__biglooz00(obj_t);
	static obj_t BGl_z62opaquezf3z91zz__biglooz00(obj_t, obj_t);
	static obj_t BGl_z62bigloozd2classzd2mangledzf3z91zz__biglooz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__biglooz00 = BUNSPEC;
	static obj_t BGl_za2levelza2z00zz__biglooz00 = BUNSPEC;
	static obj_t BGl_z62timez62zz__biglooz00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static long BGl_getzd28bitszd2integerze70ze7zz__biglooz00(obj_t, obj_t);
	static obj_t BGl_z62bigloozd2modulezd2manglez62zz__biglooz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62bigloozd2exitzd2applyz62zz__biglooz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t bigloo_mangledp(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_timez00zz__biglooz00(obj_t);
	static obj_t BGl_z62bigloozd2mangledzf3z43zz__biglooz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__biglooz00();
	static obj_t BGl_z62bigloozd2exitzd2mutexz62zz__biglooz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_procedurezd2attrzd2setz12z12zz__biglooz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_checkzd2versionz12zc0zz__biglooz00(obj_t, char *,
		obj_t);
	static obj_t BGl_z62cnstzf3z91zz__biglooz00(obj_t, obj_t);
	extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	BGL_EXPORTED_DECL obj_t bigloo_module_mangle(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__biglooz00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_symbol1977z00zz__biglooz00 = BUNSPEC;
	static obj_t BGl_objectzd2initzd2zz__biglooz00();
	static obj_t BGl_z62bmemzd2resetz12za2zz__biglooz00(obj_t);
	static obj_t BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00 = BUNSPEC;
	extern void bgl_gc_verbose_set(bool_t);
	static obj_t BGl_z62bigloozd2gczd2verbosezd2setz12za2zz__biglooz00(obj_t,
		obj_t);
	static obj_t BGl_z62makezd2cellzb0zz__biglooz00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zz__biglooz00();
	static obj_t BGl_z62bigloozd2manglezb0zz__biglooz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_registerzd2exitzd2functionz12z12zz__biglooz00(obj_t);
	BGL_EXPORTED_DECL obj_t bigloo_class_demangle(obj_t);
	static long BGl_manglezd2atz12zc0zz__biglooz00(obj_t, obj_t, long, long);
	extern obj_t make_string(long, unsigned char);
	BGL_EXPORTED_DECL obj_t BGl_makezd2cellzd2zz__biglooz00(obj_t);
	static obj_t BGl_z62cellzd2refzb0zz__biglooz00(obj_t, obj_t);
	extern obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cellzf3zf3zz__biglooz00(obj_t);
	extern bool_t bigloo_strncmp(obj_t, obj_t, long);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00(obj_t);
	static obj_t BGl_symbol2009z00zz__biglooz00 = BUNSPEC;
	static obj_t BGl_z62bigloozd2classzd2demanglez62zz__biglooz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_opaquezf3zf3zz__biglooz00(obj_t);
	extern obj_t bgl_remq_bang(obj_t, obj_t);
	static obj_t BGl_z62unregisterzd2exitzd2functionz12z70zz__biglooz00(obj_t,
		obj_t);
	static obj_t BGl_z62cellzf3z91zz__biglooz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static long BGl_charzd2ze3digitze70zd6zz__biglooz00(unsigned char);
	BGL_EXPORTED_DECL obj_t bigloo_demangle(obj_t);
	static obj_t BGl_z62bigloozd2needzd2manglingzf3z91zz__biglooz00(obj_t, obj_t);
	static obj_t BGl_z62bigloozd2demanglezb0zz__biglooz00(obj_t, obj_t);
	static obj_t BGl_za2exitzd2mutexza2zd2zz__biglooz00 = BUNSPEC;
	static obj_t BGl_z62nullzd2orzd2unspecifiedzf3z91zz__biglooz00(obj_t, obj_t);
	static obj_t BGl_bigloozd2demanglezd2atze70ze7zz__biglooz00(obj_t, long,
		obj_t);
	static obj_t BGl_z62cellzd2setz12za2zz__biglooz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unspecifiedz00zz__biglooz00();
	static obj_t BGl_cnstzd2initzd2zz__biglooz00();
	BGL_EXPORTED_DECL bool_t
		BGl_nullzd2orzd2unspecifiedzf3zf3zz__biglooz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__biglooz00();
	BGL_EXPORTED_DECL obj_t
		BGl_unregisterzd2exitzd2functionz12z12zz__biglooz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__biglooz00();
	BGL_EXPORTED_DECL obj_t BGl_opaquezd2nilzd2zz__biglooz00();
	BGL_EXPORTED_DECL obj_t bigloo_mangle(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cellzd2refzd2zz__biglooz00(obj_t);
	BGL_EXPORTED_DECL obj_t bigloo_exit_apply(obj_t);
	BGL_EXPORTED_DECL int BGl_procedurezd2lengthzd2zz__biglooz00(obj_t);
	BGL_EXPORTED_DECL obj_t bgl_exit_mutex();
	static obj_t BGl_za2releaseza2z00zz__biglooz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_cellzd2setz12zc0zz__biglooz00(obj_t, obj_t);
	static obj_t BGl_z62procedurezd2attrzb0zz__biglooz00(obj_t, obj_t);
	extern obj_t bgl_bmem_reset();
	static obj_t BGl_z62opaquezd2nilzb0zz__biglooz00(obj_t);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_z62registerzd2exitzd2functionz12z70zz__biglooz00(obj_t,
		obj_t);
	extern obj_t blit_string(obj_t, long, obj_t, long, long);
	static obj_t BGl_z62procedurezd2attrzd2setz12z70zz__biglooz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2modulesza2z00zz__biglooz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t bigloo_class_mangledp(obj_t);
	static obj_t BGl_z62unspecifiedz62zz__biglooz00(obj_t);
	BGL_EXPORTED_DECL int BGl_procedurezd2arityzd2zz__biglooz00(obj_t);
	static obj_t BGl_z62procedurezd2lengthzb0zz__biglooz00(obj_t, obj_t);
	static obj_t BGl_z62procedurezd2arityzb0zz__biglooz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bmemzd2resetz12zc0zz__biglooz00();
	BGL_EXPORTED_DECL obj_t BGl_procedurezd2attrzd2zz__biglooz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2gczd2verbosezd2setz12zc0zz__biglooz00(bool_t);
	static obj_t BGl_z62checkzd2versionz12za2zz__biglooz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cellzd2setz12zd2envz12zz__biglooz00,
		BgL_bgl_za762cellza7d2setza7122013za7, BGl_z62cellzd2setz12za2zz__biglooz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unregisterzd2exitzd2functionz12zd2envzc0zz__biglooz00,
		BgL_bgl_za762unregisterza7d22014z00,
		BGl_z62unregisterzd2exitzd2functionz12z70zz__biglooz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_procedurezd2attrzd2envz00zz__biglooz00,
		BgL_bgl_za762procedureza7d2a2015z00,
		BGl_z62procedurezd2attrzb0zz__biglooz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_opaquezd2nilzd2envz00zz__biglooz00,
		BgL_bgl_za762opaqueza7d2nilza72016za7, BGl_z62opaquezd2nilzb0zz__biglooz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2mangledzf3zd2envzf3zz__biglooz00,
		BgL_bgl_za762biglooza7d2mang2017z00,
		BGl_z62bigloozd2mangledzf3z43zz__biglooz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2exitzd2mutexzd2envzd2zz__biglooz00,
		BgL_bgl_za762biglooza7d2exit2018z00,
		BGl_z62bigloozd2exitzd2mutexz62zz__biglooz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2modulezd2manglezd2envzd2zz__biglooz00,
		BgL_bgl_za762biglooza7d2modu2019z00,
		BGl_z62bigloozd2modulezd2manglez62zz__biglooz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_nullzd2orzd2unspecifiedzf3zd2envz21zz__biglooz00,
		BgL_bgl_za762nullza7d2orza7d2u2020za7,
		BGl_z62nullzd2orzd2unspecifiedzf3z91zz__biglooz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bmemzd2resetz12zd2envz12zz__biglooz00,
		BgL_bgl_za762bmemza7d2resetza72021za7,
		BGl_z62bmemzd2resetz12za2zz__biglooz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2needzd2manglingzf3zd2envz21zz__biglooz00,
		BgL_bgl_za762biglooza7d2need2022z00,
		BGl_z62bigloozd2needzd2manglingzf3z91zz__biglooz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2classzd2mangledzf3zd2envz21zz__biglooz00,
		BgL_bgl_za762biglooza7d2clas2023z00,
		BGl_z62bigloozd2classzd2mangledzf3z91zz__biglooz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cellzf3zd2envz21zz__biglooz00,
		BgL_bgl_za762cellza7f3za791za7za7_2024za7, BGl_z62cellzf3z91zz__biglooz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2manglezd2envz00zz__biglooz00,
		BgL_bgl_za762biglooza7d2mang2025z00, BGl_z62bigloozd2manglezb0zz__biglooz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2demanglezd2envz00zz__biglooz00,
		BgL_bgl_za762biglooza7d2dema2026z00,
		BGl_z62bigloozd2demanglezb0zz__biglooz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2exitzd2functionz12zd2envzc0zz__biglooz00,
		BgL_bgl_za762registerza7d2ex2027z00,
		BGl_z62registerzd2exitzd2functionz12z70zz__biglooz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_checkzd2versionz12zd2envz12zz__biglooz00,
		BgL_bgl_za762checkza7d2versi2028z00,
		BGl_z62checkzd2versionz12za2zz__biglooz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2exitzd2applyzd2envzd2zz__biglooz00,
		BgL_bgl_za762biglooza7d2exit2029z00,
		BGl_z62bigloozd2exitzd2applyz62zz__biglooz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2classzd2demanglezd2envzd2zz__biglooz00,
		BgL_bgl_za762biglooza7d2clas2030z00,
		BGl_z62bigloozd2classzd2demanglez62zz__biglooz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2attrzd2setz12zd2envzc0zz__biglooz00,
		BgL_bgl_za762procedureza7d2a2031z00,
		BGl_z62procedurezd2attrzd2setz12z70zz__biglooz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_unspecifiedzd2envzd2zz__biglooz00,
		BgL_bgl_za762unspecifiedza762032z00, BGl_z62unspecifiedz62zz__biglooz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1978z00zz__biglooz00,
		BgL_bgl_string1978za700za7za7_2033za7, "bigloo-exit", 11);
	      DEFINE_STRING(BGl_string1979z00zz__biglooz00,
		BgL_bgl_string1979za700za7za7_2034za7, " (level 0)", 10);
	      DEFINE_STRING(BGl_string1980z00zz__biglooz00,
		BgL_bgl_string1980za700za7za7_2035za7,
		"Some modules have been compiled by: ", 36);
	      DEFINE_STRING(BGl_string1981z00zz__biglooz00,
		BgL_bgl_string1981za700za7za7_2036za7, "and other by: ", 14);
	      DEFINE_STRING(BGl_string1982z00zz__biglooz00,
		BgL_bgl_string1982za700za7za7_2037za7, "/tmp/4.4a/runtime/Llib/bigloo.scm",
		33);
	      DEFINE_STRING(BGl_string1983z00zz__biglooz00,
		BgL_bgl_string1983za700za7za7_2038za7, "&check-version!", 15);
	      DEFINE_STRING(BGl_string1984z00zz__biglooz00,
		BgL_bgl_string1984za700za7za7_2039za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1985z00zz__biglooz00,
		BgL_bgl_string1985za700za7za7_2040za7, "&procedure-arity", 16);
	      DEFINE_STRING(BGl_string1986z00zz__biglooz00,
		BgL_bgl_string1986za700za7za7_2041za7, "procedure", 9);
	      DEFINE_STRING(BGl_string1987z00zz__biglooz00,
		BgL_bgl_string1987za700za7za7_2042za7, "&procedure-length", 17);
	      DEFINE_STRING(BGl_string1988z00zz__biglooz00,
		BgL_bgl_string1988za700za7za7_2043za7, "&procedure-attr", 15);
	      DEFINE_STRING(BGl_string1989z00zz__biglooz00,
		BgL_bgl_string1989za700za7za7_2044za7, "&procedure-attr-set!", 20);
	      DEFINE_STRING(BGl_string1990z00zz__biglooz00,
		BgL_bgl_string1990za700za7za7_2045za7, "0123456789abcdef", 16);
	      DEFINE_STRING(BGl_string1991z00zz__biglooz00,
		BgL_bgl_string1991za700za7za7_2046za7, "bigloo-mangle-string", 20);
	      DEFINE_STRING(BGl_string1992z00zz__biglooz00,
		BgL_bgl_string1992za700za7za7_2047za7, "Can't mangle empty string", 25);
	      DEFINE_STRING(BGl_string1993z00zz__biglooz00,
		BgL_bgl_string1993za700za7za7_2048za7, "BgL_", 4);
	      DEFINE_STRING(BGl_string1994z00zz__biglooz00,
		BgL_bgl_string1994za700za7za7_2049za7, "&bigloo-mangle", 14);
	      DEFINE_STRING(BGl_string1995z00zz__biglooz00,
		BgL_bgl_string1995za700za7za7_2050za7, "BGl_", 4);
	      DEFINE_STRING(BGl_string1996z00zz__biglooz00,
		BgL_bgl_string1996za700za7za7_2051za7, "&bigloo-module-mangle", 21);
	      DEFINE_STRING(BGl_string1997z00zz__biglooz00,
		BgL_bgl_string1997za700za7za7_2052za7, "&bigloo-mangled?", 16);
	      DEFINE_STRING(BGl_string1998z00zz__biglooz00,
		BgL_bgl_string1998za700za7za7_2053za7, "&bigloo-need-mangling?", 22);
	      DEFINE_STRING(BGl_string1999z00zz__biglooz00,
		BgL_bgl_string1999za700za7za7_2054za7, "bigloo-demangle", 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_procedurezd2lengthzd2envz00zz__biglooz00,
		BgL_bgl_za762procedureza7d2l2055z00,
		BGl_z62procedurezd2lengthzb0zz__biglooz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_opaquezf3zd2envz21zz__biglooz00,
		BgL_bgl_za762opaqueza7f3za791za72056z00, BGl_z62opaquezf3z91zz__biglooz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cellzd2envz00zz__biglooz00,
		BgL_bgl_za762makeza7d2cellza7b2057za7, BGl_z62makezd2cellzb0zz__biglooz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_procedurezd2arityzd2envz00zz__biglooz00,
		BgL_bgl_za762procedureza7d2a2058z00,
		BGl_z62procedurezd2arityzb0zz__biglooz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_stringzd2envzd2zz__r4_strings_6_7z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cnstzf3zd2envz21zz__biglooz00,
		BgL_bgl_za762cnstza7f3za791za7za7_2059za7, BGl_z62cnstzf3z91zz__biglooz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2000z00zz__biglooz00,
		BgL_bgl_string2000za700za7za7_2060za7, "Illegal mangling on", 19);
	      DEFINE_STRING(BGl_string2001z00zz__biglooz00,
		BgL_bgl_string2001za700za7za7_2061za7, "&bigloo-demangle", 16);
	      DEFINE_STRING(BGl_string2002z00zz__biglooz00,
		BgL_bgl_string2002za700za7za7_2062za7, "&bigloo-class-mangled?", 22);
	      DEFINE_STRING(BGl_string2003z00zz__biglooz00,
		BgL_bgl_string2003za700za7za7_2063za7, "_bglt", 5);
	      DEFINE_STRING(BGl_string2004z00zz__biglooz00,
		BgL_bgl_string2004za700za7za7_2064za7, "&bigloo-class-demangle", 22);
	      DEFINE_STRING(BGl_string2005z00zz__biglooz00,
		BgL_bgl_string2005za700za7za7_2065za7, "bigloo-exit-register!", 21);
	      DEFINE_STRING(BGl_string2006z00zz__biglooz00,
		BgL_bgl_string2006za700za7za7_2066za7, "Wrong procedure arity", 21);
	      DEFINE_STRING(BGl_string2007z00zz__biglooz00,
		BgL_bgl_string2007za700za7za7_2067za7, "&register-exit-function!", 24);
	      DEFINE_STRING(BGl_string2008z00zz__biglooz00,
		BgL_bgl_string2008za700za7za7_2068za7, "&unregister-exit-function!", 26);
	      DEFINE_STRING(BGl_string2010z00zz__biglooz00,
		BgL_bgl_string2010za700za7za7_2069za7, "time", 4);
	      DEFINE_STRING(BGl_string2011z00zz__biglooz00,
		BgL_bgl_string2011za700za7za7_2070za7, "&time", 5);
	      DEFINE_STRING(BGl_string2012z00zz__biglooz00,
		BgL_bgl_string2012za700za7za7_2071za7, "__bigloo", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2gczd2verbosezd2setz12zd2envz12zz__biglooz00,
		BgL_bgl_za762biglooza7d2gcza7d2072za7,
		BGl_z62bigloozd2gczd2verbosezd2setz12za2zz__biglooz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cellzd2refzd2envz00zz__biglooz00,
		BgL_bgl_za762cellza7d2refza7b02073za7, BGl_z62cellzd2refzb0zz__biglooz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_timezd2envzd2zz__biglooz00,
		BgL_bgl_za762timeza762za7za7__bi2074z00, BGl_z62timez62zz__biglooz00, 0L,
		BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__biglooz00));
		     ADD_ROOT((void *) (&BGl_za2levelza2z00zz__biglooz00));
		     ADD_ROOT((void *) (&BGl_symbol1977z00zz__biglooz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00));
		     ADD_ROOT((void *) (&BGl_symbol2009z00zz__biglooz00));
		     ADD_ROOT((void *) (&BGl_za2exitzd2mutexza2zd2zz__biglooz00));
		     ADD_ROOT((void *) (&BGl_za2releaseza2z00zz__biglooz00));
		     ADD_ROOT((void *) (&BGl_za2modulesza2z00zz__biglooz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long
		BgL_checksumz00_2502, char *BgL_fromz00_2503)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__biglooz00))
				{
					BGl_requirezd2initializa7ationz75zz__biglooz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__biglooz00();
					BGl_cnstzd2initzd2zz__biglooz00();
					BGl_importedzd2moduleszd2initz00zz__biglooz00();
					return BGl_toplevelzd2initzd2zz__biglooz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__biglooz00()
	{
		{	/* Llib/bigloo.scm 14 */
			BGl_symbol1977z00zz__biglooz00 =
				bstring_to_symbol(BGl_string1978z00zz__biglooz00);
			return (BGl_symbol2009z00zz__biglooz00 =
				bstring_to_symbol(BGl_string2010z00zz__biglooz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__biglooz00()
	{
		{	/* Llib/bigloo.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__biglooz00()
	{
		{	/* Llib/bigloo.scm 14 */
			BGl_za2releaseza2z00zz__biglooz00 = BFALSE;
			BGl_za2levelza2z00zz__biglooz00 = BFALSE;
			BGl_za2modulesza2z00zz__biglooz00 = BNIL;
			{	/* Llib/bigloo.scm 619 */
				obj_t BgL_res1726z00_1712;

				BgL_res1726z00_1712 = bgl_make_mutex(BGl_symbol1977z00zz__biglooz00);
				BGl_za2exitzd2mutexza2zd2zz__biglooz00 = BgL_res1726z00_1712;
			}
			return (BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00 =
				BNIL, BUNSPEC);
		}

	}



/* check-version! */
	BGL_EXPORTED_DEF obj_t BGl_checkzd2versionz12zc0zz__biglooz00(obj_t
		BgL_modulez00_3, char *BgL_releasez00_4, obj_t BgL_levelz00_5)
	{
		{	/* Llib/bigloo.scm 329 */
			if (STRINGP(BGl_za2releaseza2z00zz__biglooz00))
				{	/* Llib/bigloo.scm 335 */
					bool_t BgL_test2077z00_2517;

					{	/* Llib/bigloo.scm 335 */
						bool_t BgL_test2078z00_2518;

						{	/* Llib/bigloo.scm 335 */
							long BgL_minz00_1089;

							{	/* Llib/bigloo.scm 335 */
								long BgL_arg1225z00_1092;

								{	/* Llib/bigloo.scm 335 */
									long BgL_az00_1093;
									long BgL_bz00_1094;

									BgL_az00_1093 =
										STRING_LENGTH(string_to_bstring(BgL_releasez00_4));
									BgL_bz00_1094 =
										STRING_LENGTH(BGl_za2releaseza2z00zz__biglooz00);
									if ((BgL_az00_1093 < BgL_bz00_1094))
										{	/* Llib/bigloo.scm 336 */
											BgL_arg1225z00_1092 = BgL_az00_1093;
										}
									else
										{	/* Llib/bigloo.scm 336 */
											BgL_arg1225z00_1092 = BgL_bz00_1094;
										}
								}
								BgL_minz00_1089 = (BgL_arg1225z00_1092 - ((long) 1));
							}
							{	/* Llib/bigloo.scm 338 */
								obj_t BgL_arg1221z00_1090;
								obj_t BgL_arg1223z00_1091;

								BgL_arg1221z00_1090 =
									c_substring(string_to_bstring(BgL_releasez00_4), ((long) 0),
									BgL_minz00_1089);
								BgL_arg1223z00_1091 =
									c_substring(BGl_za2releaseza2z00zz__biglooz00, ((long) 0),
									BgL_minz00_1089);
								{	/* Llib/bigloo.scm 338 */
									bool_t BgL_res1738z00_1745;

									{	/* Llib/bigloo.scm 338 */
										long BgL_l1z00_1732;

										BgL_l1z00_1732 = STRING_LENGTH(BgL_arg1221z00_1090);
										if ((BgL_l1z00_1732 == STRING_LENGTH(BgL_arg1223z00_1091)))
											{	/* Llib/bigloo.scm 338 */
												int BgL_arg1442z00_1735;

												{	/* Llib/bigloo.scm 338 */
													char *BgL_auxz00_2534;
													char *BgL_tmpz00_2532;

													BgL_auxz00_2534 =
														BSTRING_TO_STRING(BgL_arg1223z00_1091);
													BgL_tmpz00_2532 =
														BSTRING_TO_STRING(BgL_arg1221z00_1090);
													BgL_arg1442z00_1735 =
														memcmp(BgL_tmpz00_2532, BgL_auxz00_2534,
														BgL_l1z00_1732);
												}
												BgL_res1738z00_1745 =
													((long) (BgL_arg1442z00_1735) == ((long) 0));
											}
										else
											{	/* Llib/bigloo.scm 338 */
												BgL_res1738z00_1745 = ((bool_t) 0);
											}
									}
									BgL_test2078z00_2518 = BgL_res1738z00_1745;
								}
							}
						}
						if (BgL_test2078z00_2518)
							{	/* Llib/bigloo.scm 335 */
								if (CHARP(BgL_levelz00_5))
									{	/* Llib/bigloo.scm 340 */
										if (CHARP(BGl_za2levelza2z00zz__biglooz00))
											{	/* Llib/bigloo.scm 340 */
												if (
													(CCHAR(BGl_za2levelza2z00zz__biglooz00) ==
														CCHAR(BgL_levelz00_5)))
													{	/* Llib/bigloo.scm 340 */
														BgL_test2077z00_2517 = ((bool_t) 0);
													}
												else
													{	/* Llib/bigloo.scm 340 */
														BgL_test2077z00_2517 = ((bool_t) 1);
													}
											}
										else
											{	/* Llib/bigloo.scm 340 */
												BgL_test2077z00_2517 = ((bool_t) 0);
											}
									}
								else
									{	/* Llib/bigloo.scm 340 */
										BgL_test2077z00_2517 = ((bool_t) 0);
									}
							}
						else
							{	/* Llib/bigloo.scm 335 */
								BgL_test2077z00_2517 = ((bool_t) 1);
							}
					}
					if (BgL_test2077z00_2517)
						{	/* Llib/bigloo.scm 348 */
							obj_t BgL_arg1197z00_1074;
							obj_t BgL_arg1201z00_1075;
							obj_t BgL_arg1208z00_1076;

							{	/* Llib/bigloo.scm 348 */
								obj_t BgL_arg1211z00_1077;

								{	/* Llib/bigloo.scm 348 */
									obj_t BgL_releasez00_1757;
									obj_t BgL_levelz00_1758;

									BgL_releasez00_1757 = BGl_za2releaseza2z00zz__biglooz00;
									BgL_levelz00_1758 = BGl_za2levelza2z00zz__biglooz00;
									if (CHARP(BgL_levelz00_1758))
										{	/* Llib/bigloo.scm 343 */
											obj_t BgL_sz00_1760;

											BgL_sz00_1760 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BGl_string1979z00zz__biglooz00);
											{	/* Llib/bigloo.scm 344 */
												unsigned char BgL_tmpz00_2550;

												BgL_tmpz00_2550 = CCHAR(BgL_levelz00_1758);
												STRING_SET(BgL_sz00_1760, ((long) 8), BgL_tmpz00_2550);
											}
											BgL_arg1211z00_1077 =
												string_append(BgL_releasez00_1757, BgL_sz00_1760);
										}
									else
										{	/* Llib/bigloo.scm 342 */
											BgL_arg1211z00_1077 = BgL_releasez00_1757;
										}
								}
								BgL_arg1197z00_1074 =
									string_append(BGl_string1980z00zz__biglooz00,
									BgL_arg1211z00_1077);
							}
							{	/* Llib/bigloo.scm 350 */
								obj_t BgL_arg1216z00_1078;

								if (CHARP(BgL_levelz00_5))
									{	/* Llib/bigloo.scm 343 */
										obj_t BgL_sz00_1765;

										BgL_sz00_1765 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BGl_string1979z00zz__biglooz00);
										{	/* Llib/bigloo.scm 344 */
											unsigned char BgL_tmpz00_2558;

											BgL_tmpz00_2558 = CCHAR(BgL_levelz00_5);
											STRING_SET(BgL_sz00_1765, ((long) 8), BgL_tmpz00_2558);
										}
										BgL_arg1216z00_1078 =
											string_append(string_to_bstring(BgL_releasez00_4),
											BgL_sz00_1765);
									}
								else
									{	/* Llib/bigloo.scm 342 */
										BgL_arg1216z00_1078 = string_to_bstring(BgL_releasez00_4);
									}
								BgL_arg1201z00_1075 =
									string_append(BGl_string1981z00zz__biglooz00,
									BgL_arg1216z00_1078);
							}
							BgL_arg1208z00_1076 =
								MAKE_YOUNG_PAIR(BgL_modulez00_3,
								BGl_za2modulesza2z00zz__biglooz00);
							return BGl_errorz00zz__errorz00(BgL_arg1197z00_1074,
								BgL_arg1201z00_1075, BgL_arg1208z00_1076);
						}
					else
						{	/* Llib/bigloo.scm 335 */
							return (BGl_za2modulesza2z00zz__biglooz00 =
								MAKE_YOUNG_PAIR(BgL_modulez00_3,
									BGl_za2modulesza2z00zz__biglooz00), BUNSPEC);
						}
				}
			else
				{	/* Llib/bigloo.scm 331 */
					{	/* Llib/bigloo.scm 332 */
						obj_t BgL_list1226z00_1096;

						BgL_list1226z00_1096 = MAKE_YOUNG_PAIR(BgL_modulez00_3, BNIL);
						BGl_za2modulesza2z00zz__biglooz00 = BgL_list1226z00_1096;
					}
					BGl_za2releaseza2z00zz__biglooz00 =
						string_to_bstring(BgL_releasez00_4);
					return (BGl_za2levelza2z00zz__biglooz00 = BgL_levelz00_5, BUNSPEC);
				}
		}

	}



/* &check-version! */
	obj_t BGl_z62checkzd2versionz12za2zz__biglooz00(obj_t BgL_envz00_2407,
		obj_t BgL_modulez00_2408, obj_t BgL_releasez00_2409,
		obj_t BgL_levelz00_2410)
	{
		{	/* Llib/bigloo.scm 329 */
			{	/* Llib/bigloo.scm 331 */
				char *BgL_auxz00_2570;

				{	/* Llib/bigloo.scm 331 */
					obj_t BgL_tmpz00_2571;

					if (STRINGP(BgL_releasez00_2409))
						{	/* Llib/bigloo.scm 331 */
							BgL_tmpz00_2571 = BgL_releasez00_2409;
						}
					else
						{
							obj_t BgL_auxz00_2574;

							BgL_auxz00_2574 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1982z00zz__biglooz00,
								BINT(((long) 11907)), BGl_string1983z00zz__biglooz00,
								BGl_string1984z00zz__biglooz00, BgL_releasez00_2409);
							FAILURE(BgL_auxz00_2574, BFALSE, BFALSE);
						}
					BgL_auxz00_2570 = BSTRING_TO_STRING(BgL_tmpz00_2571);
				}
				return
					BGl_checkzd2versionz12zc0zz__biglooz00(BgL_modulez00_2408,
					BgL_auxz00_2570, BgL_levelz00_2410);
			}
		}

	}



/* procedure-arity */
	BGL_EXPORTED_DEF int BGl_procedurezd2arityzd2zz__biglooz00(obj_t
		BgL_procz00_6)
	{
		{	/* Llib/bigloo.scm 365 */
			return PROCEDURE_ARITY(BgL_procz00_6);
		}

	}



/* &procedure-arity */
	obj_t BGl_z62procedurezd2arityzb0zz__biglooz00(obj_t BgL_envz00_2411,
		obj_t BgL_procz00_2412)
	{
		{	/* Llib/bigloo.scm 365 */
			{	/* Llib/bigloo.scm 366 */
				int BgL_tmpz00_2581;

				{	/* Llib/bigloo.scm 366 */
					obj_t BgL_auxz00_2582;

					if (PROCEDUREP(BgL_procz00_2412))
						{	/* Llib/bigloo.scm 366 */
							BgL_auxz00_2582 = BgL_procz00_2412;
						}
					else
						{
							obj_t BgL_auxz00_2585;

							BgL_auxz00_2585 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1982z00zz__biglooz00,
								BINT(((long) 13324)), BGl_string1985z00zz__biglooz00,
								BGl_string1986z00zz__biglooz00, BgL_procz00_2412);
							FAILURE(BgL_auxz00_2585, BFALSE, BFALSE);
						}
					BgL_tmpz00_2581 =
						BGl_procedurezd2arityzd2zz__biglooz00(BgL_auxz00_2582);
				}
				return BINT(BgL_tmpz00_2581);
			}
		}

	}



/* procedure-length */
	BGL_EXPORTED_DEF int BGl_procedurezd2lengthzd2zz__biglooz00(obj_t
		BgL_procz00_7)
	{
		{	/* Llib/bigloo.scm 371 */
			return PROCEDURE_LENGTH(BgL_procz00_7);
		}

	}



/* &procedure-length */
	obj_t BGl_z62procedurezd2lengthzb0zz__biglooz00(obj_t BgL_envz00_2413,
		obj_t BgL_procz00_2414)
	{
		{	/* Llib/bigloo.scm 371 */
			{	/* Llib/bigloo.scm 372 */
				int BgL_tmpz00_2592;

				{	/* Llib/bigloo.scm 372 */
					obj_t BgL_auxz00_2593;

					if (PROCEDUREP(BgL_procz00_2414))
						{	/* Llib/bigloo.scm 372 */
							BgL_auxz00_2593 = BgL_procz00_2414;
						}
					else
						{
							obj_t BgL_auxz00_2596;

							BgL_auxz00_2596 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1982z00zz__biglooz00,
								BINT(((long) 13614)), BGl_string1987z00zz__biglooz00,
								BGl_string1986z00zz__biglooz00, BgL_procz00_2414);
							FAILURE(BgL_auxz00_2596, BFALSE, BFALSE);
						}
					BgL_tmpz00_2592 =
						BGl_procedurezd2lengthzd2zz__biglooz00(BgL_auxz00_2593);
				}
				return BINT(BgL_tmpz00_2592);
			}
		}

	}



/* procedure-attr */
	BGL_EXPORTED_DEF obj_t BGl_procedurezd2attrzd2zz__biglooz00(obj_t
		BgL_procz00_8)
	{
		{	/* Llib/bigloo.scm 377 */
			return PROCEDURE_ATTR(BgL_procz00_8);
		}

	}



/* &procedure-attr */
	obj_t BGl_z62procedurezd2attrzb0zz__biglooz00(obj_t BgL_envz00_2415,
		obj_t BgL_procz00_2416)
	{
		{	/* Llib/bigloo.scm 377 */
			{	/* Llib/bigloo.scm 378 */
				obj_t BgL_auxz00_2603;

				if (PROCEDUREP(BgL_procz00_2416))
					{	/* Llib/bigloo.scm 378 */
						BgL_auxz00_2603 = BgL_procz00_2416;
					}
				else
					{
						obj_t BgL_auxz00_2606;

						BgL_auxz00_2606 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1982z00zz__biglooz00,
							BINT(((long) 13903)), BGl_string1988z00zz__biglooz00,
							BGl_string1986z00zz__biglooz00, BgL_procz00_2416);
						FAILURE(BgL_auxz00_2606, BFALSE, BFALSE);
					}
				return BGl_procedurezd2attrzd2zz__biglooz00(BgL_auxz00_2603);
			}
		}

	}



/* procedure-attr-set! */
	BGL_EXPORTED_DEF obj_t BGl_procedurezd2attrzd2setz12z12zz__biglooz00(obj_t
		BgL_procz00_9, obj_t BgL_objz00_10)
	{
		{	/* Llib/bigloo.scm 383 */
			PROCEDURE_ATTR_SET(BgL_procz00_9, BgL_objz00_10);
			return BgL_objz00_10;
		}

	}



/* &procedure-attr-set! */
	obj_t BGl_z62procedurezd2attrzd2setz12z70zz__biglooz00(obj_t BgL_envz00_2417,
		obj_t BgL_procz00_2418, obj_t BgL_objz00_2419)
	{
		{	/* Llib/bigloo.scm 383 */
			{	/* Llib/bigloo.scm 384 */
				obj_t BgL_auxz00_2612;

				if (PROCEDUREP(BgL_procz00_2418))
					{	/* Llib/bigloo.scm 384 */
						BgL_auxz00_2612 = BgL_procz00_2418;
					}
				else
					{
						obj_t BgL_auxz00_2615;

						BgL_auxz00_2615 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1982z00zz__biglooz00,
							BINT(((long) 14229)), BGl_string1989z00zz__biglooz00,
							BGl_string1986z00zz__biglooz00, BgL_procz00_2418);
						FAILURE(BgL_auxz00_2615, BFALSE, BFALSE);
					}
				return
					BGl_procedurezd2attrzd2setz12z12zz__biglooz00(BgL_auxz00_2612,
					BgL_objz00_2419);
			}
		}

	}



/* unspecified */
	BGL_EXPORTED_DEF obj_t BGl_unspecifiedz00zz__biglooz00()
	{
		{	/* Llib/bigloo.scm 390 */
			return BUNSPEC;
		}

	}



/* &unspecified */
	obj_t BGl_z62unspecifiedz62zz__biglooz00(obj_t BgL_envz00_2420)
	{
		{	/* Llib/bigloo.scm 390 */
			return BGl_unspecifiedz00zz__biglooz00();
		}

	}



/* null-or-unspecified? */
	BGL_EXPORTED_DEF bool_t BGl_nullzd2orzd2unspecifiedzf3zf3zz__biglooz00(obj_t
		BgL_objz00_11)
	{
		{	/* Llib/bigloo.scm 396 */
			return BGL_NULL_OR_UNSPECIFIEDP(BgL_objz00_11);
		}

	}



/* &null-or-unspecified? */
	obj_t BGl_z62nullzd2orzd2unspecifiedzf3z91zz__biglooz00(obj_t BgL_envz00_2421,
		obj_t BgL_objz00_2422)
	{
		{	/* Llib/bigloo.scm 396 */
			return
				BBOOL(BGl_nullzd2orzd2unspecifiedzf3zf3zz__biglooz00(BgL_objz00_2422));
		}

	}



/* cnst? */
	BGL_EXPORTED_DEF bool_t BGl_cnstzf3zf3zz__biglooz00(obj_t BgL_objz00_12)
	{
		{	/* Llib/bigloo.scm 408 */
			return CNSTP(BgL_objz00_12);
		}

	}



/* &cnst? */
	obj_t BGl_z62cnstzf3z91zz__biglooz00(obj_t BgL_envz00_2423,
		obj_t BgL_objz00_2424)
	{
		{	/* Llib/bigloo.scm 408 */
			return BBOOL(BGl_cnstzf3zf3zz__biglooz00(BgL_objz00_2424));
		}

	}



/* opaque? */
	BGL_EXPORTED_DEF bool_t BGl_opaquezf3zf3zz__biglooz00(obj_t BgL_objz00_13)
	{
		{	/* Llib/bigloo.scm 414 */
			return OPAQUEP(BgL_objz00_13);
		}

	}



/* &opaque? */
	obj_t BGl_z62opaquezf3z91zz__biglooz00(obj_t BgL_envz00_2425,
		obj_t BgL_objz00_2426)
	{
		{	/* Llib/bigloo.scm 414 */
			return BBOOL(BGl_opaquezf3zf3zz__biglooz00(BgL_objz00_2426));
		}

	}



/* opaque-nil */
	BGL_EXPORTED_DEF obj_t BGl_opaquezd2nilzd2zz__biglooz00()
	{
		{	/* Llib/bigloo.scm 420 */
			return BGL_OPAQUE_NIL();
		}

	}



/* &opaque-nil */
	obj_t BGl_z62opaquezd2nilzb0zz__biglooz00(obj_t BgL_envz00_2427)
	{
		{	/* Llib/bigloo.scm 420 */
			return BGl_opaquezd2nilzd2zz__biglooz00();
		}

	}



/* mangle-at! */
	long BGl_manglezd2atz12zc0zz__biglooz00(obj_t BgL_newz00_15,
		obj_t BgL_oldz00_16, long BgL_lenz00_17, long BgL_offsetz00_18)
	{
		{	/* Llib/bigloo.scm 433 */
			{
				long BgL_rz00_1099;
				long BgL_wz00_1100;
				long BgL_newzd2lenzd2_1101;
				long BgL_checksumz00_1102;

				BgL_rz00_1099 = ((long) 0);
				BgL_wz00_1100 = BgL_offsetz00_18;
				BgL_newzd2lenzd2_1101 = BgL_offsetz00_18;
				BgL_checksumz00_1102 = ((long) 0);
			BgL_zc3z04anonymousza31227ze3z87_1103:
				if ((BgL_rz00_1099 == BgL_lenz00_17))
					{	/* Llib/bigloo.scm 438 */
						STRING_SET(BgL_newz00_15, BgL_wz00_1100, ((unsigned char) 'z'));
						{	/* Llib/bigloo.scm 441 */
							unsigned char BgL_auxz00_2637;
							long BgL_tmpz00_2635;

							BgL_auxz00_2637 =
								STRING_REF(BGl_string1990z00zz__biglooz00,
								(BgL_checksumz00_1102 & ((long) 15)));
							BgL_tmpz00_2635 = (BgL_wz00_1100 + ((long) 1));
							STRING_SET(BgL_newz00_15, BgL_tmpz00_2635, BgL_auxz00_2637);
						}
						{	/* Llib/bigloo.scm 444 */
							unsigned char BgL_auxz00_2643;
							long BgL_tmpz00_2641;

							BgL_auxz00_2643 =
								STRING_REF(BGl_string1990z00zz__biglooz00,
								((BgL_checksumz00_1102 >> (int) (((long) 4))) & ((long) 15)));
							BgL_tmpz00_2641 = (BgL_wz00_1100 + ((long) 2));
							STRING_SET(BgL_newz00_15, BgL_tmpz00_2641, BgL_auxz00_2643);
						}
						return (BgL_wz00_1100 + ((long) 3));
					}
				else
					{	/* Llib/bigloo.scm 448 */
						unsigned char BgL_cz00_1112;

						BgL_cz00_1112 = STRING_REF(BgL_oldz00_16, BgL_rz00_1099);
						{	/* Llib/bigloo.scm 449 */
							bool_t BgL_test2092z00_2651;

							{	/* Llib/bigloo.scm 449 */
								bool_t BgL_test2093z00_2652;

								{	/* Llib/bigloo.scm 449 */
									bool_t BgL_test2094z00_2653;

									{	/* Llib/bigloo.scm 449 */
										bool_t BgL_res1757z00_1810;

										BgL_res1757z00_1810 = isalpha(BgL_cz00_1112);
										BgL_test2094z00_2653 = BgL_res1757z00_1810;
									}
									if (BgL_test2094z00_2653)
										{	/* Llib/bigloo.scm 449 */
											if ((BgL_cz00_1112 == ((unsigned char) 'z')))
												{	/* Llib/bigloo.scm 449 */
													BgL_test2093z00_2652 = ((bool_t) 0);
												}
											else
												{	/* Llib/bigloo.scm 449 */
													BgL_test2093z00_2652 = ((bool_t) 1);
												}
										}
									else
										{	/* Llib/bigloo.scm 449 */
											BgL_test2093z00_2652 = ((bool_t) 0);
										}
								}
								if (BgL_test2093z00_2652)
									{	/* Llib/bigloo.scm 449 */
										BgL_test2092z00_2651 = ((bool_t) 1);
									}
								else
									{	/* Llib/bigloo.scm 450 */
										bool_t BgL_test2096z00_2657;

										{	/* Llib/bigloo.scm 450 */
											bool_t BgL_res1759z00_1815;

											BgL_res1759z00_1815 = isdigit(BgL_cz00_1112);
											BgL_test2096z00_2657 = BgL_res1759z00_1815;
										}
										if (BgL_test2096z00_2657)
											{	/* Llib/bigloo.scm 450 */
												BgL_test2092z00_2651 = ((bool_t) 1);
											}
										else
											{	/* Llib/bigloo.scm 450 */
												BgL_test2092z00_2651 =
													(BgL_cz00_1112 == ((unsigned char) '_'));
							}}}
							if (BgL_test2092z00_2651)
								{	/* Llib/bigloo.scm 449 */
									STRING_SET(BgL_newz00_15, BgL_wz00_1100, BgL_cz00_1112);
									{
										long BgL_newzd2lenzd2_2665;
										long BgL_wz00_2663;
										long BgL_rz00_2661;

										BgL_rz00_2661 = (BgL_rz00_1099 + ((long) 1));
										BgL_wz00_2663 = (BgL_wz00_1100 + ((long) 1));
										BgL_newzd2lenzd2_2665 =
											(BgL_newzd2lenzd2_1101 + ((long) 1));
										BgL_newzd2lenzd2_1101 = BgL_newzd2lenzd2_2665;
										BgL_wz00_1100 = BgL_wz00_2663;
										BgL_rz00_1099 = BgL_rz00_2661;
										goto BgL_zc3z04anonymousza31227ze3z87_1103;
									}
								}
							else
								{	/* Llib/bigloo.scm 458 */
									long BgL_icz00_1123;

									BgL_icz00_1123 = (BgL_cz00_1112);
									STRING_SET(BgL_newz00_15, BgL_wz00_1100,
										((unsigned char) 'z'));
									{	/* Llib/bigloo.scm 460 */
										unsigned char BgL_auxz00_2671;
										long BgL_tmpz00_2669;

										BgL_auxz00_2671 =
											STRING_REF(BGl_string1990z00zz__biglooz00,
											(BgL_icz00_1123 & ((long) 15)));
										BgL_tmpz00_2669 = (BgL_wz00_1100 + ((long) 1));
										STRING_SET(BgL_newz00_15, BgL_tmpz00_2669, BgL_auxz00_2671);
									}
									{	/* Llib/bigloo.scm 463 */
										unsigned char BgL_auxz00_2677;
										long BgL_tmpz00_2675;

										BgL_auxz00_2677 =
											STRING_REF(BGl_string1990z00zz__biglooz00,
											((BgL_icz00_1123 >> (int) (((long) 4))) & ((long) 15)));
										BgL_tmpz00_2675 = (BgL_wz00_1100 + ((long) 2));
										STRING_SET(BgL_newz00_15, BgL_tmpz00_2675, BgL_auxz00_2677);
									}
									{
										long BgL_checksumz00_2689;
										long BgL_newzd2lenzd2_2687;
										long BgL_wz00_2685;
										long BgL_rz00_2683;

										BgL_rz00_2683 = (BgL_rz00_1099 + ((long) 1));
										BgL_wz00_2685 = (BgL_wz00_1100 + ((long) 3));
										BgL_newzd2lenzd2_2687 =
											(BgL_newzd2lenzd2_1101 + ((long) 3));
										BgL_checksumz00_2689 =
											(BgL_checksumz00_1102 ^ (BgL_cz00_1112));
										BgL_checksumz00_1102 = BgL_checksumz00_2689;
										BgL_newzd2lenzd2_1101 = BgL_newzd2lenzd2_2687;
										BgL_wz00_1100 = BgL_wz00_2685;
										BgL_rz00_1099 = BgL_rz00_2683;
										goto BgL_zc3z04anonymousza31227ze3z87_1103;
									}
								}
						}
					}
			}
		}

	}



/* bigloo-mangle */
	BGL_EXPORTED_DEF obj_t bigloo_mangle(obj_t BgL_stringz00_19)
	{
		{	/* Llib/bigloo.scm 474 */
			{	/* Llib/bigloo.scm 475 */
				long BgL_lenz00_1141;

				BgL_lenz00_1141 = STRING_LENGTH(BgL_stringz00_19);
				{	/* Llib/bigloo.scm 475 */
					obj_t BgL_newz00_1142;

					{	/* Llib/bigloo.scm 476 */
						long BgL_arg1282z00_1145;

						BgL_arg1282z00_1145 = ((BgL_lenz00_1141 * ((long) 3)) + ((long) 7));
						{	/* Ieee/string.scm 168 */

							BgL_newz00_1142 =
								make_string(BgL_arg1282z00_1145, ((unsigned char) ' '));
					}}
					{	/* Llib/bigloo.scm 476 */

						if ((BgL_lenz00_1141 == ((long) 0)))
							{	/* Llib/bigloo.scm 477 */
								return
									BGl_errorz00zz__errorz00(BGl_string1991z00zz__biglooz00,
									BGl_string1992z00zz__biglooz00, BgL_stringz00_19);
							}
						else
							{	/* Llib/bigloo.scm 479 */
								long BgL_stopz00_1144;

								BgL_stopz00_1144 =
									BGl_manglezd2atz12zc0zz__biglooz00(BgL_newz00_1142,
									BgL_stringz00_19, BgL_lenz00_1141, ((long) 4));
								blit_string(BGl_string1993z00zz__biglooz00, ((long) 0),
									BgL_newz00_1142, ((long) 0), ((long) 4));
								return c_substring(BgL_newz00_1142, ((long) 0),
									BgL_stopz00_1144);
		}}}}}

	}



/* &bigloo-mangle */
	obj_t BGl_z62bigloozd2manglezb0zz__biglooz00(obj_t BgL_envz00_2428,
		obj_t BgL_stringz00_2429)
	{
		{	/* Llib/bigloo.scm 474 */
			{	/* Llib/bigloo.scm 475 */
				obj_t BgL_auxz00_2702;

				if (STRINGP(BgL_stringz00_2429))
					{	/* Llib/bigloo.scm 475 */
						BgL_auxz00_2702 = BgL_stringz00_2429;
					}
				else
					{
						obj_t BgL_auxz00_2705;

						BgL_auxz00_2705 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1982z00zz__biglooz00,
							BINT(((long) 17587)), BGl_string1994z00zz__biglooz00,
							BGl_string1984z00zz__biglooz00, BgL_stringz00_2429);
						FAILURE(BgL_auxz00_2705, BFALSE, BFALSE);
					}
				return bigloo_mangle(BgL_auxz00_2702);
			}
		}

	}



/* bigloo-module-mangle */
	BGL_EXPORTED_DEF obj_t bigloo_module_mangle(obj_t BgL_idz00_20,
		obj_t BgL_modulez00_21)
	{
		{	/* Llib/bigloo.scm 486 */
			{	/* Llib/bigloo.scm 487 */
				long BgL_lenz00_1149;

				BgL_lenz00_1149 =
					(STRING_LENGTH(BgL_idz00_20) + STRING_LENGTH(BgL_modulez00_21));
				{	/* Llib/bigloo.scm 487 */
					obj_t BgL_newz00_1150;

					{	/* Llib/bigloo.scm 488 */
						long BgL_arg1290z00_1158;

						BgL_arg1290z00_1158 =
							((BgL_lenz00_1149 * ((long) 3)) + ((long) 12));
						{	/* Ieee/string.scm 168 */

							BgL_newz00_1150 =
								make_string(BgL_arg1290z00_1158, ((unsigned char) ' '));
					}}
					{	/* Llib/bigloo.scm 488 */

						if ((BgL_lenz00_1149 == ((long) 0)))
							{	/* Llib/bigloo.scm 489 */
								return
									BGl_errorz00zz__errorz00(BGl_string1991z00zz__biglooz00,
									BGl_string1992z00zz__biglooz00,
									BGl_stringzd2envzd2zz__r4_strings_6_7z00);
							}
						else
							{	/* Llib/bigloo.scm 491 */
								long BgL_modzd2startzd2_1152;

								BgL_modzd2startzd2_1152 =
									BGl_manglezd2atz12zc0zz__biglooz00(BgL_newz00_1150,
									BgL_idz00_20, STRING_LENGTH(BgL_idz00_20), ((long) 4));
								STRING_SET(BgL_newz00_1150, BgL_modzd2startzd2_1152,
									((unsigned char) 'z'));
								{	/* Llib/bigloo.scm 493 */
									long BgL_tmpz00_2722;

									BgL_tmpz00_2722 = (((long) 1) + BgL_modzd2startzd2_1152);
									STRING_SET(BgL_newz00_1150, BgL_tmpz00_2722,
										((unsigned char) 'z'));
								}
								{	/* Llib/bigloo.scm 494 */
									long BgL_stopz00_1154;

									BgL_stopz00_1154 =
										BGl_manglezd2atz12zc0zz__biglooz00(BgL_newz00_1150,
										BgL_modulez00_21, STRING_LENGTH(BgL_modulez00_21),
										(BgL_modzd2startzd2_1152 + ((long) 2)));
									blit_string(BGl_string1995z00zz__biglooz00, ((long) 0),
										BgL_newz00_1150, ((long) 0), ((long) 4));
									return c_substring(BgL_newz00_1150, ((long) 0),
										BgL_stopz00_1154);
		}}}}}}

	}



/* &bigloo-module-mangle */
	obj_t BGl_z62bigloozd2modulezd2manglez62zz__biglooz00(obj_t BgL_envz00_2430,
		obj_t BgL_idz00_2431, obj_t BgL_modulez00_2432)
	{
		{	/* Llib/bigloo.scm 486 */
			{	/* Llib/bigloo.scm 487 */
				obj_t BgL_auxz00_2737;
				obj_t BgL_auxz00_2730;

				if (STRINGP(BgL_modulez00_2432))
					{	/* Llib/bigloo.scm 487 */
						BgL_auxz00_2737 = BgL_modulez00_2432;
					}
				else
					{
						obj_t BgL_auxz00_2740;

						BgL_auxz00_2740 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1982z00zz__biglooz00,
							BINT(((long) 18143)), BGl_string1996z00zz__biglooz00,
							BGl_string1984z00zz__biglooz00, BgL_modulez00_2432);
						FAILURE(BgL_auxz00_2740, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_idz00_2431))
					{	/* Llib/bigloo.scm 487 */
						BgL_auxz00_2730 = BgL_idz00_2431;
					}
				else
					{
						obj_t BgL_auxz00_2733;

						BgL_auxz00_2733 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1982z00zz__biglooz00,
							BINT(((long) 18143)), BGl_string1996z00zz__biglooz00,
							BGl_string1984z00zz__biglooz00, BgL_idz00_2431);
						FAILURE(BgL_auxz00_2733, BFALSE, BFALSE);
					}
				return bigloo_module_mangle(BgL_auxz00_2730, BgL_auxz00_2737);
			}
		}

	}



/* bigloo-mangled? */
	BGL_EXPORTED_DEF bool_t bigloo_mangledp(obj_t BgL_stringz00_22)
	{
		{	/* Llib/bigloo.scm 503 */
			{	/* Llib/bigloo.scm 504 */
				long BgL_lenz00_1164;

				BgL_lenz00_1164 = STRING_LENGTH(BgL_stringz00_22);
				if ((BgL_lenz00_1164 > ((long) 7)))
					{	/* Llib/bigloo.scm 506 */
						bool_t BgL_test2103z00_2748;

						{	/* Llib/bigloo.scm 506 */
							bool_t BgL__ortest_1045z00_1181;

							BgL__ortest_1045z00_1181 =
								bigloo_strncmp(BgL_stringz00_22, BGl_string1993z00zz__biglooz00,
								((long) 4));
							if (BgL__ortest_1045z00_1181)
								{	/* Llib/bigloo.scm 506 */
									BgL_test2103z00_2748 = BgL__ortest_1045z00_1181;
								}
							else
								{	/* Llib/bigloo.scm 506 */
									BgL_test2103z00_2748 =
										bigloo_strncmp(BgL_stringz00_22,
										BGl_string1995z00zz__biglooz00, ((long) 4));
						}}
						if (BgL_test2103z00_2748)
							{	/* Llib/bigloo.scm 506 */
								if (
									(STRING_REF(BgL_stringz00_22,
											(BgL_lenz00_1164 - ((long) 3))) == ((unsigned char) 'z')))
									{	/* Llib/bigloo.scm 509 */
										bool_t BgL_test2106z00_2756;

										{	/* Llib/bigloo.scm 509 */
											bool_t BgL__ortest_1046z00_1174;

											{	/* Llib/bigloo.scm 509 */
												unsigned char BgL_arg1302z00_1177;

												BgL_arg1302z00_1177 =
													STRING_REF(BgL_stringz00_22,
													(BgL_lenz00_1164 - ((long) 2)));
												{	/* Llib/bigloo.scm 509 */
													bool_t BgL_res1804z00_1941;

													BgL_res1804z00_1941 = isalpha(BgL_arg1302z00_1177);
													BgL__ortest_1046z00_1174 = BgL_res1804z00_1941;
											}}
											if (BgL__ortest_1046z00_1174)
												{	/* Llib/bigloo.scm 509 */
													BgL_test2106z00_2756 = BgL__ortest_1046z00_1174;
												}
											else
												{	/* Llib/bigloo.scm 510 */
													unsigned char BgL_arg1300z00_1175;

													BgL_arg1300z00_1175 =
														STRING_REF(BgL_stringz00_22,
														(BgL_lenz00_1164 - ((long) 2)));
													{	/* Llib/bigloo.scm 510 */
														bool_t BgL_res1807z00_1948;

														BgL_res1807z00_1948 = isdigit(BgL_arg1300z00_1175);
														BgL_test2106z00_2756 = BgL_res1807z00_1948;
										}}}
										if (BgL_test2106z00_2756)
											{	/* Llib/bigloo.scm 511 */
												bool_t BgL__ortest_1047z00_1169;

												{	/* Llib/bigloo.scm 511 */
													unsigned char BgL_arg1298z00_1172;

													BgL_arg1298z00_1172 =
														STRING_REF(BgL_stringz00_22,
														(BgL_lenz00_1164 - ((long) 1)));
													{	/* Llib/bigloo.scm 511 */
														bool_t BgL_res1810z00_1955;

														BgL_res1810z00_1955 = isalpha(BgL_arg1298z00_1172);
														BgL__ortest_1047z00_1169 = BgL_res1810z00_1955;
												}}
												if (BgL__ortest_1047z00_1169)
													{	/* Llib/bigloo.scm 511 */
														return BgL__ortest_1047z00_1169;
													}
												else
													{	/* Llib/bigloo.scm 512 */
														unsigned char BgL_arg1296z00_1170;

														BgL_arg1296z00_1170 =
															STRING_REF(BgL_stringz00_22,
															(BgL_lenz00_1164 - ((long) 1)));
														{	/* Llib/bigloo.scm 512 */
															bool_t BgL_res1813z00_1962;

															BgL_res1813z00_1962 =
																isdigit(BgL_arg1296z00_1170);
															return BgL_res1813z00_1962;
														}
													}
											}
										else
											{	/* Llib/bigloo.scm 509 */
												return ((bool_t) 0);
											}
									}
								else
									{	/* Llib/bigloo.scm 508 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* Llib/bigloo.scm 506 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* Llib/bigloo.scm 505 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &bigloo-mangled? */
	obj_t BGl_z62bigloozd2mangledzf3z43zz__biglooz00(obj_t BgL_envz00_2435,
		obj_t BgL_stringz00_2436)
	{
		{	/* Llib/bigloo.scm 503 */
			{	/* Llib/bigloo.scm 504 */
				bool_t BgL_tmpz00_2771;

				{	/* Llib/bigloo.scm 504 */
					obj_t BgL_auxz00_2772;

					if (STRINGP(BgL_stringz00_2436))
						{	/* Llib/bigloo.scm 504 */
							BgL_auxz00_2772 = BgL_stringz00_2436;
						}
					else
						{
							obj_t BgL_auxz00_2775;

							BgL_auxz00_2775 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1982z00zz__biglooz00,
								BINT(((long) 18913)), BGl_string1997z00zz__biglooz00,
								BGl_string1984z00zz__biglooz00, BgL_stringz00_2436);
							FAILURE(BgL_auxz00_2775, BFALSE, BFALSE);
						}
					BgL_tmpz00_2771 = bigloo_mangledp(BgL_auxz00_2772);
				}
				return BBOOL(BgL_tmpz00_2771);
			}
		}

	}



/* bigloo-need-mangling? */
	BGL_EXPORTED_DEF bool_t BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00(obj_t
		BgL_stringz00_23)
	{
		{	/* Llib/bigloo.scm 517 */
			{	/* Llib/bigloo.scm 518 */
				long BgL_lenz00_1182;

				BgL_lenz00_1182 = STRING_LENGTH(BgL_stringz00_23);
				if ((BgL_lenz00_1182 > ((long) 0)))
					{	/* Llib/bigloo.scm 520 */
						bool_t BgL__ortest_1049z00_1184;

						{	/* Llib/bigloo.scm 520 */
							bool_t BgL_test2111z00_2784;

							{	/* Llib/bigloo.scm 520 */
								bool_t BgL_test2112z00_2785;

								{	/* Llib/bigloo.scm 520 */
									unsigned char BgL_arg1319z00_1204;

									BgL_arg1319z00_1204 =
										STRING_REF(BgL_stringz00_23, ((long) 0));
									{	/* Llib/bigloo.scm 520 */
										bool_t BgL_res1817z00_1970;

										BgL_res1817z00_1970 = isalpha(BgL_arg1319z00_1204);
										BgL_test2112z00_2785 = BgL_res1817z00_1970;
								}}
								if (BgL_test2112z00_2785)
									{	/* Llib/bigloo.scm 520 */
										BgL_test2111z00_2784 = ((bool_t) 1);
									}
								else
									{	/* Llib/bigloo.scm 520 */
										BgL_test2111z00_2784 =
											(STRING_REF(BgL_stringz00_23,
												((long) 0)) == ((unsigned char) '_'));
							}}
							if (BgL_test2111z00_2784)
								{	/* Llib/bigloo.scm 520 */
									BgL__ortest_1049z00_1184 = ((bool_t) 0);
								}
							else
								{	/* Llib/bigloo.scm 520 */
									BgL__ortest_1049z00_1184 = ((bool_t) 1);
								}
						}
						if (BgL__ortest_1049z00_1184)
							{	/* Llib/bigloo.scm 520 */
								return BgL__ortest_1049z00_1184;
							}
						else
							{
								long BgL_iz00_1186;

								BgL_iz00_1186 = ((long) 1);
							BgL_zc3z04anonymousza31307ze3z87_1187:
								if ((BgL_iz00_1186 >= BgL_lenz00_1182))
									{	/* Llib/bigloo.scm 523 */
										return ((bool_t) 0);
									}
								else
									{	/* Llib/bigloo.scm 525 */
										unsigned char BgL_cz00_1189;

										BgL_cz00_1189 = STRING_REF(BgL_stringz00_23, BgL_iz00_1186);
										{	/* Llib/bigloo.scm 526 */
											bool_t BgL_test2115z00_2794;

											{	/* Llib/bigloo.scm 526 */
												bool_t BgL_test2116z00_2795;

												{	/* Llib/bigloo.scm 526 */
													bool_t BgL_res1822z00_1983;

													BgL_res1822z00_1983 = isalpha(BgL_cz00_1189);
													BgL_test2116z00_2795 = BgL_res1822z00_1983;
												}
												if (BgL_test2116z00_2795)
													{	/* Llib/bigloo.scm 526 */
														BgL_test2115z00_2794 = ((bool_t) 1);
													}
												else
													{	/* Llib/bigloo.scm 527 */
														bool_t BgL_test2117z00_2797;

														{	/* Llib/bigloo.scm 527 */
															bool_t BgL_res1823z00_1985;

															BgL_res1823z00_1985 = isdigit(BgL_cz00_1189);
															BgL_test2117z00_2797 = BgL_res1823z00_1985;
														}
														if (BgL_test2117z00_2797)
															{	/* Llib/bigloo.scm 527 */
																BgL_test2115z00_2794 = ((bool_t) 1);
															}
														else
															{	/* Llib/bigloo.scm 527 */
																BgL_test2115z00_2794 =
																	(BgL_cz00_1189 == ((unsigned char) '_'));
											}}}
											if (BgL_test2115z00_2794)
												{
													long BgL_iz00_2800;

													BgL_iz00_2800 = (BgL_iz00_1186 + ((long) 1));
													BgL_iz00_1186 = BgL_iz00_2800;
													goto BgL_zc3z04anonymousza31307ze3z87_1187;
												}
											else
												{	/* Llib/bigloo.scm 526 */
													return ((bool_t) 1);
												}
										}
									}
							}
					}
				else
					{	/* Llib/bigloo.scm 519 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &bigloo-need-mangling? */
	obj_t BGl_z62bigloozd2needzd2manglingzf3z91zz__biglooz00(obj_t
		BgL_envz00_2437, obj_t BgL_stringz00_2438)
	{
		{	/* Llib/bigloo.scm 517 */
			{	/* Llib/bigloo.scm 518 */
				bool_t BgL_tmpz00_2802;

				{	/* Llib/bigloo.scm 518 */
					obj_t BgL_auxz00_2803;

					if (STRINGP(BgL_stringz00_2438))
						{	/* Llib/bigloo.scm 518 */
							BgL_auxz00_2803 = BgL_stringz00_2438;
						}
					else
						{
							obj_t BgL_auxz00_2806;

							BgL_auxz00_2806 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1982z00zz__biglooz00,
								BINT(((long) 19598)), BGl_string1998z00zz__biglooz00,
								BGl_string1984z00zz__biglooz00, BgL_stringz00_2438);
							FAILURE(BgL_auxz00_2806, BFALSE, BFALSE);
						}
					BgL_tmpz00_2802 =
						BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00(BgL_auxz00_2803);
				}
				return BBOOL(BgL_tmpz00_2802);
			}
		}

	}



/* bigloo-demangle */
	BGL_EXPORTED_DEF obj_t bigloo_demangle(obj_t BgL_stringz00_24)
	{
		{	/* Llib/bigloo.scm 535 */
			{	/* Llib/bigloo.scm 536 */
				long BgL_lenz00_1205;

				BgL_lenz00_1205 = STRING_LENGTH(BgL_stringz00_24);
				{	/* Llib/bigloo.scm 536 */
					long BgL_clenz00_1206;

					BgL_clenz00_1206 = (BgL_lenz00_1205 - ((long) 3));
					{	/* Llib/bigloo.scm 537 */

						{

							if ((BgL_lenz00_1205 < ((long) 8)))
								{	/* Llib/bigloo.scm 586 */
									return BgL_stringz00_24;
								}
							else
								{	/* Llib/bigloo.scm 586 */
									if (bigloo_strncmp(BgL_stringz00_24,
											BGl_string1993z00zz__biglooz00, ((long) 4)))
										{	/* Llib/bigloo.scm 588 */
											{	/* Llib/bigloo.scm 576 */
												obj_t BgL_strz00_1267;

												BgL_strz00_1267 =
													BGl_bigloozd2demanglezd2atze70ze7zz__biglooz00
													(BgL_stringz00_24, BgL_clenz00_1206,
													BINT(((long) 4)));
												{	/* Llib/bigloo.scm 577 */
													obj_t BgL_offsetz00_1268;

													{	/* Llib/bigloo.scm 578 */
														int BgL_tmpz00_2820;

														BgL_tmpz00_2820 = (int) (((long) 1));
														BgL_offsetz00_1268 =
															BGL_MVALUES_VAL(BgL_tmpz00_2820);
													}
													{	/* Llib/bigloo.scm 578 */
														int BgL_res1861z00_2077;

														{	/* Llib/bigloo.scm 578 */
															int BgL_tmpz00_2823;

															BgL_tmpz00_2823 = (int) (((long) 2));
															BgL_res1861z00_2077 =
																BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2823);
														} BgL_res1861z00_2077;
													}
													{	/* Llib/bigloo.scm 578 */
														int BgL_tmpz00_2826;

														BgL_tmpz00_2826 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_tmpz00_2826, BUNSPEC);
													}
													return BgL_strz00_1267;
												}
											}
										}
									else
										{	/* Llib/bigloo.scm 588 */
											if (bigloo_strncmp(BgL_stringz00_24,
													BGl_string1995z00zz__biglooz00, ((long) 4)))
												{	/* Llib/bigloo.scm 590 */
													{	/* Llib/bigloo.scm 580 */
														obj_t BgL_idz00_1272;

														BgL_idz00_1272 =
															BGl_bigloozd2demanglezd2atze70ze7zz__biglooz00
															(BgL_stringz00_24, BgL_clenz00_1206,
															BINT(((long) 4)));
														{	/* Llib/bigloo.scm 581 */
															obj_t BgL_offsetz00_1273;

															{	/* Llib/bigloo.scm 582 */
																int BgL_tmpz00_2833;

																BgL_tmpz00_2833 = (int) (((long) 1));
																BgL_offsetz00_1273 =
																	BGL_MVALUES_VAL(BgL_tmpz00_2833);
															}
															{	/* Llib/bigloo.scm 582 */
																obj_t BgL_modulez00_1274;

																BgL_modulez00_1274 =
																	BGl_bigloozd2demanglezd2atze70ze7zz__biglooz00
																	(BgL_stringz00_24, BgL_clenz00_1206,
																	BgL_offsetz00_1273);
																{	/* Llib/bigloo.scm 583 */
																	obj_t BgL_offsetz00_1275;

																	{	/* Llib/bigloo.scm 584 */
																		int BgL_tmpz00_2837;

																		BgL_tmpz00_2837 = (int) (((long) 1));
																		BgL_offsetz00_1275 =
																			BGL_MVALUES_VAL(BgL_tmpz00_2837);
																	}
																	{	/* Llib/bigloo.scm 584 */
																		int BgL_res1862z00_2078;

																		{	/* Llib/bigloo.scm 584 */
																			int BgL_tmpz00_2840;

																			BgL_tmpz00_2840 = (int) (((long) 2));
																			BgL_res1862z00_2078 =
																				BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2840);
																		} BgL_res1862z00_2078;
																	}
																	{	/* Llib/bigloo.scm 584 */
																		int BgL_tmpz00_2843;

																		BgL_tmpz00_2843 = (int) (((long) 1));
																		BGL_MVALUES_VAL_SET(BgL_tmpz00_2843,
																			BgL_modulez00_1274);
																	}
																	return BgL_idz00_1272;
																}
															}
														}
													}
												}
											else
												{	/* Llib/bigloo.scm 590 */
													return BgL_stringz00_24;
												}
										}
								}
						}
					}
				}
			}
		}

	}



/* char->digit~0 */
	long BGl_charzd2ze3digitze70zd6zz__biglooz00(unsigned char BgL_cz00_1217)
	{
		{	/* Llib/bigloo.scm 543 */
			{	/* Llib/bigloo.scm 541 */
				bool_t BgL_test2122z00_2846;

				{	/* Llib/bigloo.scm 541 */
					bool_t BgL_res1828z00_1996;

					BgL_res1828z00_1996 = isdigit(BgL_cz00_1217);
					BgL_test2122z00_2846 = BgL_res1828z00_1996;
				}
				if (BgL_test2122z00_2846)
					{	/* Llib/bigloo.scm 541 */
						return ((BgL_cz00_1217) - ((long) 48));
					}
				else
					{	/* Llib/bigloo.scm 541 */
						return (((long) 10) + ((BgL_cz00_1217) - ((long) 97)));
		}}}

	}



/* get-8bits-integer~0 */
	long BGl_getzd28bitszd2integerze70ze7zz__biglooz00(obj_t BgL_stringz00_2466,
		obj_t BgL_rz00_1223)
	{
		{	/* Llib/bigloo.scm 549 */
			{	/* Llib/bigloo.scm 548 */

				return
					(BGl_charzd2ze3digitze70zd6zz__biglooz00(STRING_REF
						(BgL_stringz00_2466,
							((long) CINT(BgL_rz00_1223) + ((long) 1)))) +
					(BGl_charzd2ze3digitze70zd6zz__biglooz00(STRING_REF
							(BgL_stringz00_2466,
								((long) CINT(BgL_rz00_1223) +
									((long) 2)))) << (int) (((long) 4))));
		}}

	}



/* bigloo-demangle-at~0 */
	obj_t BGl_bigloozd2demanglezd2atze70ze7zz__biglooz00(obj_t BgL_stringz00_2468,
		long BgL_clenz00_2467, obj_t BgL_offsetz00_1232)
	{
		{	/* Llib/bigloo.scm 574 */
			{	/* Llib/bigloo.scm 551 */
				obj_t BgL_newz00_1234;

				{	/* Ieee/string.scm 168 */

					BgL_newz00_1234 =
						make_string(BgL_clenz00_2467, ((unsigned char) ' '));
				}
				{
					obj_t BgL_rz00_1236;
					long BgL_wz00_1237;
					long BgL_checksumz00_1238;

					BgL_rz00_1236 = BgL_offsetz00_1232;
					BgL_wz00_1237 = ((long) 0);
					BgL_checksumz00_1238 = ((long) 0);
				BgL_zc3z04anonymousza31335ze3z87_1239:
					if (((long) CINT(BgL_rz00_1236) == BgL_clenz00_2467))
						{	/* Llib/bigloo.scm 555 */
							if (
								(BgL_checksumz00_1238 ==
									BGl_getzd28bitszd2integerze70ze7zz__biglooz00
									(BgL_stringz00_2468, BgL_rz00_1236)))
								{	/* Llib/bigloo.scm 558 */
									obj_t BgL_val0_1084z00_1243;
									long BgL_val1_1085z00_1244;

									BgL_val0_1084z00_1243 =
										c_substring(BgL_newz00_1234, ((long) 0), BgL_wz00_1237);
									BgL_val1_1085z00_1244 =
										((long) CINT(BgL_rz00_1236) + ((long) 3));
									{	/* Llib/bigloo.scm 558 */
										int BgL_res1845z00_2035;

										{	/* Llib/bigloo.scm 558 */
											int BgL_tmpz00_2874;

											BgL_tmpz00_2874 = (int) (((long) 2));
											BgL_res1845z00_2035 =
												BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2874);
										} BgL_res1845z00_2035;
									}
									{	/* Llib/bigloo.scm 558 */
										obj_t BgL_auxz00_2879;
										int BgL_tmpz00_2877;

										BgL_auxz00_2879 = BINT(BgL_val1_1085z00_1244);
										BgL_tmpz00_2877 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_2877, BgL_auxz00_2879);
									}
									return BgL_val0_1084z00_1243;
								}
							else
								{	/* Llib/bigloo.scm 557 */
									return
										BGl_errorz00zz__errorz00(BGl_string1999z00zz__biglooz00,
										BGl_string2000z00zz__biglooz00, BgL_stringz00_2468);
								}
						}
					else
						{	/* Llib/bigloo.scm 560 */
							unsigned char BgL_cz00_1246;

							BgL_cz00_1246 =
								STRING_REF(BgL_stringz00_2468, (long) CINT(BgL_rz00_1236));
							if ((BgL_cz00_1246 == ((unsigned char) 'z')))
								{	/* Llib/bigloo.scm 561 */
									if (
										(STRING_REF(BgL_stringz00_2468,
												((long) CINT(BgL_rz00_1236) + ((long) 1))) ==
											((unsigned char) 'z')))
										{	/* Llib/bigloo.scm 563 */
											obj_t BgL_val0_1086z00_1251;
											long BgL_val1_1087z00_1252;

											BgL_val0_1086z00_1251 =
												c_substring(BgL_newz00_1234, ((long) 0),
												(BgL_wz00_1237 - ((long) 1)));
											BgL_val1_1087z00_1252 =
												((long) CINT(BgL_rz00_1236) + ((long) 2));
											{	/* Llib/bigloo.scm 563 */
												int BgL_res1854z00_2057;

												{	/* Llib/bigloo.scm 563 */
													int BgL_tmpz00_2896;

													BgL_tmpz00_2896 = (int) (((long) 2));
													BgL_res1854z00_2057 =
														BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2896);
												} BgL_res1854z00_2057;
											}
											{	/* Llib/bigloo.scm 563 */
												obj_t BgL_auxz00_2901;
												int BgL_tmpz00_2899;

												BgL_auxz00_2901 = BINT(BgL_val1_1087z00_1252);
												BgL_tmpz00_2899 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_tmpz00_2899, BgL_auxz00_2901);
											}
											return BgL_val0_1086z00_1251;
										}
									else
										{	/* Llib/bigloo.scm 564 */
											long BgL_iz00_1254;

											BgL_iz00_1254 =
												BGl_getzd28bitszd2integerze70ze7zz__biglooz00
												(BgL_stringz00_2468, BgL_rz00_1236);
											{	/* Llib/bigloo.scm 564 */
												unsigned char BgL_ncz00_1255;

												BgL_ncz00_1255 = (BgL_iz00_1254);
												{	/* Llib/bigloo.scm 565 */

													STRING_SET(BgL_newz00_1234, BgL_wz00_1237,
														BgL_ncz00_1255);
													{	/* Llib/bigloo.scm 567 */
														long BgL_arg1345z00_1256;
														long BgL_arg1346z00_1257;
														long BgL_arg1347z00_1258;

														BgL_arg1345z00_1256 =
															((long) CINT(BgL_rz00_1236) + ((long) 3));
														BgL_arg1346z00_1257 = (BgL_wz00_1237 + ((long) 1));
														BgL_arg1347z00_1258 =
															(BgL_checksumz00_1238 ^ BgL_iz00_1254);
														{
															long BgL_checksumz00_2914;
															long BgL_wz00_2913;
															obj_t BgL_rz00_2911;

															BgL_rz00_2911 = BINT(BgL_arg1345z00_1256);
															BgL_wz00_2913 = BgL_arg1346z00_1257;
															BgL_checksumz00_2914 = BgL_arg1347z00_1258;
															BgL_checksumz00_1238 = BgL_checksumz00_2914;
															BgL_wz00_1237 = BgL_wz00_2913;
															BgL_rz00_1236 = BgL_rz00_2911;
															goto BgL_zc3z04anonymousza31335ze3z87_1239;
														}
													}
												}
											}
										}
								}
							else
								{	/* Llib/bigloo.scm 561 */
									STRING_SET(BgL_newz00_1234, BgL_wz00_1237, BgL_cz00_1246);
									{	/* Llib/bigloo.scm 572 */
										long BgL_arg1351z00_1261;
										long BgL_arg1352z00_1262;

										BgL_arg1351z00_1261 =
											((long) CINT(BgL_rz00_1236) + ((long) 1));
										BgL_arg1352z00_1262 = (BgL_wz00_1237 + ((long) 1));
										{
											long BgL_wz00_2921;
											obj_t BgL_rz00_2919;

											BgL_rz00_2919 = BINT(BgL_arg1351z00_1261);
											BgL_wz00_2921 = BgL_arg1352z00_1262;
											BgL_wz00_1237 = BgL_wz00_2921;
											BgL_rz00_1236 = BgL_rz00_2919;
											goto BgL_zc3z04anonymousza31335ze3z87_1239;
										}
									}
								}
						}
				}
			}
		}

	}



/* &bigloo-demangle */
	obj_t BGl_z62bigloozd2demanglezb0zz__biglooz00(obj_t BgL_envz00_2439,
		obj_t BgL_stringz00_2440)
	{
		{	/* Llib/bigloo.scm 535 */
			{	/* Llib/bigloo.scm 536 */
				obj_t BgL_auxz00_2922;

				if (STRINGP(BgL_stringz00_2440))
					{	/* Llib/bigloo.scm 536 */
						BgL_auxz00_2922 = BgL_stringz00_2440;
					}
				else
					{
						obj_t BgL_auxz00_2925;

						BgL_auxz00_2925 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1982z00zz__biglooz00,
							BINT(((long) 20241)), BGl_string2001z00zz__biglooz00,
							BGl_string1984z00zz__biglooz00, BgL_stringz00_2440);
						FAILURE(BgL_auxz00_2925, BFALSE, BFALSE);
					}
				return bigloo_demangle(BgL_auxz00_2922);
			}
		}

	}



/* bigloo-class-mangled? */
	BGL_EXPORTED_DEF bool_t bigloo_class_mangledp(obj_t BgL_stringz00_25)
	{
		{	/* Llib/bigloo.scm 598 */
			{	/* Llib/bigloo.scm 599 */
				long BgL_lenz00_1284;

				BgL_lenz00_1284 = STRING_LENGTH(BgL_stringz00_25);
				if ((BgL_lenz00_1284 > ((long) 8)))
					{	/* Llib/bigloo.scm 600 */
						if (
							(STRING_REF(BgL_stringz00_25,
									(BgL_lenz00_1284 - ((long) 1))) == ((unsigned char) 't')))
							{	/* Llib/bigloo.scm 601 */
								if (
									(STRING_REF(BgL_stringz00_25,
											(BgL_lenz00_1284 - ((long) 2))) == ((unsigned char) 'l')))
									{	/* Llib/bigloo.scm 602 */
										if (
											(STRING_REF(BgL_stringz00_25,
													(BgL_lenz00_1284 - ((long) 3))) ==
												((unsigned char) 'g')))
											{	/* Llib/bigloo.scm 603 */
												if (
													(STRING_REF(BgL_stringz00_25,
															(BgL_lenz00_1284 - ((long) 4))) ==
														((unsigned char) 'b')))
													{	/* Llib/bigloo.scm 604 */
														if (
															(STRING_REF(BgL_stringz00_25,
																	(BgL_lenz00_1284 - ((long) 5))) ==
																((unsigned char) '_')))
															{	/* Llib/bigloo.scm 605 */
																return
																	bigloo_mangledp(c_substring(BgL_stringz00_25,
																		((long) 0),
																		(BgL_lenz00_1284 - ((long) 5))));
															}
														else
															{	/* Llib/bigloo.scm 605 */
																return ((bool_t) 0);
															}
													}
												else
													{	/* Llib/bigloo.scm 604 */
														return ((bool_t) 0);
													}
											}
										else
											{	/* Llib/bigloo.scm 603 */
												return ((bool_t) 0);
											}
									}
								else
									{	/* Llib/bigloo.scm 602 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* Llib/bigloo.scm 601 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* Llib/bigloo.scm 600 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &bigloo-class-mangled? */
	obj_t BGl_z62bigloozd2classzd2mangledzf3z91zz__biglooz00(obj_t
		BgL_envz00_2441, obj_t BgL_stringz00_2442)
	{
		{	/* Llib/bigloo.scm 598 */
			{	/* Llib/bigloo.scm 599 */
				bool_t BgL_tmpz00_2956;

				{	/* Llib/bigloo.scm 599 */
					obj_t BgL_auxz00_2957;

					if (STRINGP(BgL_stringz00_2442))
						{	/* Llib/bigloo.scm 599 */
							BgL_auxz00_2957 = BgL_stringz00_2442;
						}
					else
						{
							obj_t BgL_auxz00_2960;

							BgL_auxz00_2960 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1982z00zz__biglooz00,
								BINT(((long) 22315)), BGl_string2002z00zz__biglooz00,
								BGl_string1984z00zz__biglooz00, BgL_stringz00_2442);
							FAILURE(BgL_auxz00_2960, BFALSE, BFALSE);
						}
					BgL_tmpz00_2956 = bigloo_class_mangledp(BgL_auxz00_2957);
				}
				return BBOOL(BgL_tmpz00_2956);
			}
		}

	}



/* bigloo-class-demangle */
	BGL_EXPORTED_DEF obj_t bigloo_class_demangle(obj_t BgL_stringz00_26)
	{
		{	/* Llib/bigloo.scm 611 */
			return
				string_append(bigloo_demangle(c_substring(BgL_stringz00_26, ((long) 0),
						(STRING_LENGTH(BgL_stringz00_26) - ((long) 5)))),
				BGl_string2003z00zz__biglooz00);
		}

	}



/* &bigloo-class-demangle */
	obj_t BGl_z62bigloozd2classzd2demanglez62zz__biglooz00(obj_t BgL_envz00_2443,
		obj_t BgL_stringz00_2444)
	{
		{	/* Llib/bigloo.scm 611 */
			{	/* Llib/bigloo.scm 613 */
				obj_t BgL_auxz00_2971;

				if (STRINGP(BgL_stringz00_2444))
					{	/* Llib/bigloo.scm 613 */
						BgL_auxz00_2971 = BgL_stringz00_2444;
					}
				else
					{
						obj_t BgL_auxz00_2974;

						BgL_auxz00_2974 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1982z00zz__biglooz00,
							BINT(((long) 23007)), BGl_string2004z00zz__biglooz00,
							BGl_string1984z00zz__biglooz00, BgL_stringz00_2444);
						FAILURE(BgL_auxz00_2974, BFALSE, BFALSE);
					}
				return bigloo_class_demangle(BgL_auxz00_2971);
			}
		}

	}



/* bigloo-exit-mutex */
	BGL_EXPORTED_DEF obj_t bgl_exit_mutex()
	{
		{	/* Llib/bigloo.scm 624 */
			return BGl_za2exitzd2mutexza2zd2zz__biglooz00;
		}

	}



/* &bigloo-exit-mutex */
	obj_t BGl_z62bigloozd2exitzd2mutexz62zz__biglooz00(obj_t BgL_envz00_2445)
	{
		{	/* Llib/bigloo.scm 624 */
			return bgl_exit_mutex();
		}

	}



/* register-exit-function! */
	BGL_EXPORTED_DEF obj_t BGl_registerzd2exitzd2functionz12z12zz__biglooz00(obj_t
		BgL_funz00_27)
	{
		{	/* Llib/bigloo.scm 635 */
			{	/* Llib/bigloo.scm 636 */
				obj_t BgL_mutex1374z00_1307;

				BgL_mutex1374z00_1307 = BGl_za2exitzd2mutexza2zd2zz__biglooz00;
				{	/* Llib/bigloo.scm 636 */
					obj_t BgL_top2137z00_2981;

					BgL_top2137z00_2981 = BGL_EXITD_TOP_AS_OBJ();
					BGL_MUTEX_LOCK(BgL_mutex1374z00_1307);
					BGL_EXITD_PUSH_PROTECT(BgL_top2137z00_2981, BgL_mutex1374z00_1307);
					BUNSPEC;
					{	/* Llib/bigloo.scm 636 */
						obj_t BgL_tmp2136z00_2980;

						if (PROCEDURE_CORRECT_ARITYP(BgL_funz00_27, (int) (((long) 1))))
							{	/* Llib/bigloo.scm 637 */
								BgL_tmp2136z00_2980 =
									(BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00 =
									MAKE_YOUNG_PAIR(BgL_funz00_27,
										BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00),
									BUNSPEC);
							}
						else
							{	/* Llib/bigloo.scm 637 */
								BgL_tmp2136z00_2980 =
									BGl_errorz00zz__errorz00(BGl_string2005z00zz__biglooz00,
									BGl_string2006z00zz__biglooz00, BgL_funz00_27);
							}
						BGL_EXITD_POP_PROTECT(BgL_top2137z00_2981);
						BUNSPEC;
						BGL_MUTEX_UNLOCK(BgL_mutex1374z00_1307);
						return BgL_tmp2136z00_2980;
					}
				}
			}
		}

	}



/* &register-exit-function! */
	obj_t BGl_z62registerzd2exitzd2functionz12z70zz__biglooz00(obj_t
		BgL_envz00_2446, obj_t BgL_funz00_2447)
	{
		{	/* Llib/bigloo.scm 635 */
			{	/* Llib/bigloo.scm 636 */
				obj_t BgL_auxz00_2992;

				if (PROCEDUREP(BgL_funz00_2447))
					{	/* Llib/bigloo.scm 636 */
						BgL_auxz00_2992 = BgL_funz00_2447;
					}
				else
					{
						obj_t BgL_auxz00_2995;

						BgL_auxz00_2995 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1982z00zz__biglooz00,
							BINT(((long) 24112)), BGl_string2007z00zz__biglooz00,
							BGl_string1986z00zz__biglooz00, BgL_funz00_2447);
						FAILURE(BgL_auxz00_2995, BFALSE, BFALSE);
					}
				return
					BGl_registerzd2exitzd2functionz12z12zz__biglooz00(BgL_auxz00_2992);
			}
		}

	}



/* unregister-exit-function! */
	BGL_EXPORTED_DEF obj_t
		BGl_unregisterzd2exitzd2functionz12z12zz__biglooz00(obj_t BgL_funz00_28)
	{
		{	/* Llib/bigloo.scm 646 */
			{	/* Llib/bigloo.scm 647 */
				obj_t BgL_mutex1376z00_2147;

				BgL_mutex1376z00_2147 = BGl_za2exitzd2mutexza2zd2zz__biglooz00;
				{	/* Llib/bigloo.scm 647 */
					obj_t BgL_top2141z00_3001;

					BgL_top2141z00_3001 = BGL_EXITD_TOP_AS_OBJ();
					BGL_MUTEX_LOCK(BgL_mutex1376z00_2147);
					BGL_EXITD_PUSH_PROTECT(BgL_top2141z00_3001, BgL_mutex1376z00_2147);
					BUNSPEC;
					{	/* Llib/bigloo.scm 647 */
						obj_t BgL_tmp2140z00_3000;

						BgL_tmp2140z00_3000 =
							(BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00 =
							bgl_remq_bang(BgL_funz00_28,
								BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00), BUNSPEC);
						BGL_EXITD_POP_PROTECT(BgL_top2141z00_3001);
						BUNSPEC;
						BGL_MUTEX_UNLOCK(BgL_mutex1376z00_2147);
						return BgL_tmp2140z00_3000;
					}
				}
			}
		}

	}



/* &unregister-exit-function! */
	obj_t BGl_z62unregisterzd2exitzd2functionz12z70zz__biglooz00(obj_t
		BgL_envz00_2448, obj_t BgL_funz00_2449)
	{
		{	/* Llib/bigloo.scm 646 */
			{	/* Llib/bigloo.scm 647 */
				obj_t BgL_auxz00_3008;

				if (PROCEDUREP(BgL_funz00_2449))
					{	/* Llib/bigloo.scm 647 */
						BgL_auxz00_3008 = BgL_funz00_2449;
					}
				else
					{
						obj_t BgL_auxz00_3011;

						BgL_auxz00_3011 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1982z00zz__biglooz00,
							BINT(((long) 24597)), BGl_string2008z00zz__biglooz00,
							BGl_string1986z00zz__biglooz00, BgL_funz00_2449);
						FAILURE(BgL_auxz00_3011, BFALSE, BFALSE);
					}
				return
					BGl_unregisterzd2exitzd2functionz12z12zz__biglooz00(BgL_auxz00_3008);
			}
		}

	}



/* bigloo-exit-apply */
	BGL_EXPORTED_DEF obj_t bigloo_exit_apply(obj_t BgL_valz00_29)
	{
		{	/* Llib/bigloo.scm 653 */
			{	/* Llib/bigloo.scm 654 */
				obj_t BgL_mutz00_1310;

				{	/* Llib/bigloo.scm 654 */
					bool_t BgL_test2143z00_3016;

					{	/* Llib/bigloo.scm 654 */
						obj_t BgL_arg1384z00_1324;

						BgL_arg1384z00_1324 = BGl_za2exitzd2mutexza2zd2zz__biglooz00;
						{	/* Llib/bigloo.scm 654 */
							bool_t BgL_res1888z00_2148;

							BgL_res1888z00_2148 = BGL_MUTEXP(BgL_arg1384z00_1324);
							BgL_test2143z00_3016 = BgL_res1888z00_2148;
						}
					}
					if (BgL_test2143z00_3016)
						{	/* Llib/bigloo.scm 654 */
							BgL_mutz00_1310 = BGl_za2exitzd2mutexza2zd2zz__biglooz00;
						}
					else
						{	/* Llib/bigloo.scm 656 */
							obj_t BgL_res1889z00_2150;

							BgL_res1889z00_2150 =
								bgl_make_mutex(BGl_symbol1977z00zz__biglooz00);
							BgL_mutz00_1310 = BgL_res1889z00_2150;
						}
				}
				{	/* Llib/bigloo.scm 657 */
					obj_t BgL_top2145z00_3020;

					BgL_top2145z00_3020 = BGL_EXITD_TOP_AS_OBJ();
					BGL_MUTEX_LOCK(BgL_mutz00_1310);
					BGL_EXITD_PUSH_PROTECT(BgL_top2145z00_3020, BgL_mutz00_1310);
					BUNSPEC;
					{	/* Llib/bigloo.scm 657 */
						obj_t BgL_tmp2144z00_3019;

						{
							obj_t BgL_valz00_1312;

							BgL_valz00_1312 = BgL_valz00_29;
						BgL_zc3z04anonymousza31377ze3z87_1313:
							{	/* Llib/bigloo.scm 659 */
								obj_t BgL_valz00_1314;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BgL_valz00_1312))
									{	/* Llib/bigloo.scm 659 */
										BgL_valz00_1314 = BgL_valz00_1312;
									}
								else
									{	/* Llib/bigloo.scm 659 */
										BgL_valz00_1314 = BINT(((long) 0));
									}
								if (PAIRP(BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00))
									{	/* Llib/bigloo.scm 663 */
										obj_t BgL_funz00_1316;

										BgL_funz00_1316 =
											CAR(BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00);
										BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00 =
											CDR(BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00);
										{	/* Llib/bigloo.scm 666 */
											obj_t BgL_nvalz00_1317;

											BgL_nvalz00_1317 =
												PROCEDURE_ENTRY(BgL_funz00_1316) (BgL_funz00_1316,
												BgL_valz00_1314, BEOA);
											{	/* Llib/bigloo.scm 667 */
												obj_t BgL_arg1379z00_1318;

												if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
													(BgL_nvalz00_1317))
													{	/* Llib/bigloo.scm 667 */
														BgL_arg1379z00_1318 = BgL_nvalz00_1317;
													}
												else
													{	/* Llib/bigloo.scm 667 */
														BgL_arg1379z00_1318 = BgL_valz00_1314;
													}
												{
													obj_t BgL_valz00_3037;

													BgL_valz00_3037 = BgL_arg1379z00_1318;
													BgL_valz00_1312 = BgL_valz00_3037;
													goto BgL_zc3z04anonymousza31377ze3z87_1313;
												}
											}
										}
									}
								else
									{	/* Llib/bigloo.scm 662 */
										BgL_tmp2144z00_3019 = BgL_valz00_1314;
									}
							}
						}
						BGL_EXITD_POP_PROTECT(BgL_top2145z00_3020);
						BUNSPEC;
						BGL_MUTEX_UNLOCK(BgL_mutz00_1310);
						return BgL_tmp2144z00_3019;
					}
				}
			}
		}

	}



/* &bigloo-exit-apply */
	obj_t BGl_z62bigloozd2exitzd2applyz62zz__biglooz00(obj_t BgL_envz00_2450,
		obj_t BgL_valz00_2451)
	{
		{	/* Llib/bigloo.scm 653 */
			return bigloo_exit_apply(BgL_valz00_2451);
		}

	}



/* time */
	BGL_EXPORTED_DEF obj_t BGl_timez00zz__biglooz00(obj_t BgL_procz00_30)
	{
		{	/* Llib/bigloo.scm 673 */
			if (PROCEDURE_CORRECT_ARITYP(BgL_procz00_30, (int) (((long) 0))))
				{	/* Llib/bigloo.scm 674 */
					return bgl_time(BgL_procz00_30);
				}
			else
				{	/* Llib/bigloo.scm 674 */
					return
						BGl_errorz00zz__errorz00(BGl_symbol2009z00zz__biglooz00,
						BGl_string2006z00zz__biglooz00, BgL_procz00_30);
				}
		}

	}



/* &time */
	obj_t BGl_z62timez62zz__biglooz00(obj_t BgL_envz00_2452,
		obj_t BgL_procz00_2453)
	{
		{	/* Llib/bigloo.scm 673 */
			{	/* Llib/bigloo.scm 674 */
				obj_t BgL_auxz00_3046;

				if (PROCEDUREP(BgL_procz00_2453))
					{	/* Llib/bigloo.scm 674 */
						BgL_auxz00_3046 = BgL_procz00_2453;
					}
				else
					{
						obj_t BgL_auxz00_3049;

						BgL_auxz00_3049 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1982z00zz__biglooz00,
							BINT(((long) 25668)), BGl_string2011z00zz__biglooz00,
							BGl_string1986z00zz__biglooz00, BgL_procz00_2453);
						FAILURE(BgL_auxz00_3049, BFALSE, BFALSE);
					}
				return BGl_timez00zz__biglooz00(BgL_auxz00_3046);
			}
		}

	}



/* bmem-reset! */
	BGL_EXPORTED_DEF obj_t BGl_bmemzd2resetz12zc0zz__biglooz00()
	{
		{	/* Llib/bigloo.scm 685 */
			return bgl_bmem_reset();
		}

	}



/* &bmem-reset! */
	obj_t BGl_z62bmemzd2resetz12za2zz__biglooz00(obj_t BgL_envz00_2454)
	{
		{	/* Llib/bigloo.scm 685 */
			return BGl_bmemzd2resetz12zc0zz__biglooz00();
		}

	}



/* bigloo-gc-verbose-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2gczd2verbosezd2setz12zc0zz__biglooz00(bool_t BgL_procz00_31)
	{
		{	/* Llib/bigloo.scm 693 */
			bgl_gc_verbose_set(BgL_procz00_31);
			return BUNSPEC;
		}

	}



/* &bigloo-gc-verbose-set! */
	obj_t BGl_z62bigloozd2gczd2verbosezd2setz12za2zz__biglooz00(obj_t
		BgL_envz00_2455, obj_t BgL_procz00_2456)
	{
		{	/* Llib/bigloo.scm 693 */
			return
				BGl_bigloozd2gczd2verbosezd2setz12zc0zz__biglooz00(CBOOL
				(BgL_procz00_2456));
		}

	}



/* make-cell */
	BGL_EXPORTED_DEF obj_t BGl_makezd2cellzd2zz__biglooz00(obj_t BgL_valz00_32)
	{
		{	/* Llib/bigloo.scm 701 */
			return MAKE_YOUNG_CELL(BgL_valz00_32);
		}

	}



/* &make-cell */
	obj_t BGl_z62makezd2cellzb0zz__biglooz00(obj_t BgL_envz00_2457,
		obj_t BgL_valz00_2458)
	{
		{	/* Llib/bigloo.scm 701 */
			return BGl_makezd2cellzd2zz__biglooz00(BgL_valz00_2458);
		}

	}



/* cell? */
	BGL_EXPORTED_DEF obj_t BGl_cellzf3zf3zz__biglooz00(obj_t BgL_objz00_33)
	{
		{	/* Llib/bigloo.scm 707 */
			return BBOOL(CELLP(BgL_objz00_33));
		}

	}



/* &cell? */
	obj_t BGl_z62cellzf3z91zz__biglooz00(obj_t BgL_envz00_2459,
		obj_t BgL_objz00_2460)
	{
		{	/* Llib/bigloo.scm 707 */
			return BGl_cellzf3zf3zz__biglooz00(BgL_objz00_2460);
		}

	}



/* cell-ref */
	BGL_EXPORTED_DEF obj_t BGl_cellzd2refzd2zz__biglooz00(obj_t BgL_cellz00_34)
	{
		{	/* Llib/bigloo.scm 713 */
			return CELL_REF(BgL_cellz00_34);
		}

	}



/* &cell-ref */
	obj_t BGl_z62cellzd2refzb0zz__biglooz00(obj_t BgL_envz00_2461,
		obj_t BgL_cellz00_2462)
	{
		{	/* Llib/bigloo.scm 713 */
			return BGl_cellzd2refzd2zz__biglooz00(BgL_cellz00_2462);
		}

	}



/* cell-set! */
	BGL_EXPORTED_DEF obj_t BGl_cellzd2setz12zc0zz__biglooz00(obj_t BgL_cellz00_35,
		obj_t BgL_valz00_36)
	{
		{	/* Llib/bigloo.scm 719 */
			return CELL_SET(BgL_cellz00_35, BgL_valz00_36);
		}

	}



/* &cell-set! */
	obj_t BGl_z62cellzd2setz12za2zz__biglooz00(obj_t BgL_envz00_2463,
		obj_t BgL_cellz00_2464, obj_t BgL_valz00_2465)
	{
		{	/* Llib/bigloo.scm 719 */
			return
				BGl_cellzd2setz12zc0zz__biglooz00(BgL_cellz00_2464, BgL_valz00_2465);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__biglooz00()
	{
		{	/* Llib/bigloo.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__biglooz00()
	{
		{	/* Llib/bigloo.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__biglooz00()
	{
		{	/* Llib/bigloo.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__biglooz00()
	{
		{	/* Llib/bigloo.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2012z00zz__biglooz00));
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 62374350),
				BSTRING_TO_STRING(BGl_string2012z00zz__biglooz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2012z00zz__biglooz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2012z00zz__biglooz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string2012z00zz__biglooz00));
			return
				BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string2012z00zz__biglooz00));
		}

	}

#ifdef __cplusplus
}
#endif
