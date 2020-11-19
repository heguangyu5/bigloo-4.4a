/*===========================================================================*/
/*   (Rgc/rgc.scm)                                                           */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Rgc/rgc.scm -indent -o objs/obj_u/Rgc/rgc.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_rgczd2bufferzd2keywordz00zz__rgcz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rgczd2bufferzd2escapezd2substringzd2zz__rgcz00(obj_t, long, long,
		bool_t);
	extern obj_t rgc_buffer_downcase_subsymbol(obj_t, long, long);
	BGL_EXPORTED_DECL int BGl_rgczd2bufferzd2ungetzd2charzd2zz__rgcz00(obj_t,
		int);
	BGL_EXPORTED_DECL long BGl_rgczd2stopzd2matchz12z12zz__rgcz00(obj_t, long);
	static obj_t BGl_z62rgczd2stopzd2matchz12z70zz__rgcz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__rgcz00 = BUNSPEC;
	BGL_EXPORTED_DECL int BGl_rgczd2bufferzd2getzd2charzd2zz__rgcz00(obj_t, long);
	static obj_t BGl_z62rgczd2bufferzd2insertzd2charz12za2zz__rgcz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rgczd2bufferzd2downcasezd2symbolzd2zz__rgcz00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rgczd2bufferzd2characterz62zz__rgcz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__rgcz00();
	static obj_t BGl_z62rgczd2bufferzd2ungetzd2charzb0zz__rgcz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rgczd2bufferzd2downcasezd2symbolzb0zz__rgcz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL unsigned char
		BGl_rgczd2bufferzd2characterz00zz__rgcz00(obj_t);
	extern obj_t rgc_buffer_downcase_keyword(obj_t);
	static obj_t BGl_z62rgczd2bufferzd2bytezd2refzb0zz__rgcz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zz__rgcz00();
	BGL_EXPORTED_DECL obj_t
		BGl_rgczd2bufferzd2downcasezd2subsymbolzd2zz__rgcz00(obj_t, long, long);
	static obj_t BGl_z62rgczd2bufferzd2positionz62zz__rgcz00(obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__rgcz00();
	extern obj_t rgc_buffer_subsymbol(obj_t, long, long);
	extern obj_t rgc_buffer_integer(obj_t);
	static obj_t BGl_z62rgczd2bufferzd2upcasezd2subsymbolzb0zz__rgcz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62rgczd2bufferzd2escapezd2substringzb0zz__rgcz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern double rgc_buffer_flonum(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rgczd2bufferzd2bofzf3zf3zz__rgcz00(obj_t);
	static obj_t BGl_z62rgczd2bufferzd2insertzd2substringz12za2zz__rgcz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62rgczd2bufferzd2bofzf3z91zz__rgcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgczd2setzd2fileposz12z12zz__rgcz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__rgcz00();
	static obj_t BGl_z62rgczd2bufferzd2upcasezd2symbolzb0zz__rgcz00(obj_t, obj_t);
	static obj_t BGl_z62rgczd2bufferzd2integerz62zz__rgcz00(obj_t, obj_t);
	static obj_t BGl_z62rgczd2bufferzd2flonumz62zz__rgcz00(obj_t, obj_t);
	extern bool_t rgc_buffer_bof_p(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgczd2thezd2submatchz00zz__rgcz00(obj_t, long,
		long, long);
	static obj_t BGl_z62rgczd2bufferzd2forwardz62zz__rgcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_rgczd2bufferzd2bytezd2refzd2zz__rgcz00(obj_t, int);
	extern obj_t rgc_buffer_keyword(obj_t);
	BGL_EXPORTED_DECL int BGl_rgczd2bufferzd2bytez00zz__rgcz00(obj_t);
	BGL_EXPORTED_DECL long BGl_rgczd2bufferzd2fixnumz00zz__rgcz00(obj_t);
	BGL_EXPORTED_DECL long BGl_rgczd2bufferzd2positionz00zz__rgcz00(obj_t, long);
	static obj_t BGl_z62rgczd2bufferzd2bytez62zz__rgcz00(obj_t, obj_t);
	static obj_t BGl_z62rgczd2bufferzd2upcasezd2keywordzb0zz__rgcz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL long BGl_rgczd2bufferzd2lengthz00zz__rgcz00(obj_t);
	extern obj_t rgc_buffer_substring(obj_t, long, long);
	static obj_t BGl_z62rgczd2bufferzd2subsymbolz62zz__rgcz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgczd2bufferzd2symbolz00zz__rgcz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rgczd2bufferzd2bolzf3zf3zz__rgcz00(obj_t);
	static obj_t BGl_z62rgczd2bufferzd2bolzf3z91zz__rgcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgczd2bufferzd2subsymbolz00zz__rgcz00(obj_t, long,
		long);
	static obj_t BGl_z62rgczd2setzd2fileposz12z70zz__rgcz00(obj_t, obj_t);
	extern obj_t rgc_buffer_upcase_subsymbol(obj_t, long, long);
	BGL_EXPORTED_DECL bool_t
		BGl_rgczd2bufferzd2insertzd2charz12zc0zz__rgcz00(obj_t, long);
	static obj_t BGl_z62rgczd2bufferzd2keywordz62zz__rgcz00(obj_t, obj_t);
	extern obj_t rgc_buffer_escape_substring(obj_t, long, long, bool_t);
	BGL_EXPORTED_DECL long BGl_rgczd2bufferzd2bufposz00zz__rgcz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rgczd2bufferzd2upcasezd2keywordzd2zz__rgcz00(obj_t);
	extern bool_t rgc_buffer_bol_p(obj_t);
	static obj_t BGl_z62rgczd2thezd2submatchz62zz__rgcz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__rgcz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t
		BGl_rgczd2bufferzd2downcasezd2keywordzd2zz__rgcz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rgczd2bufferzd2eofzf3zf3zz__rgcz00(obj_t);
	static obj_t BGl_z62rgczd2bufferzd2eofzf3z91zz__rgcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rgczd2bufferzd2upcasezd2symbolzd2zz__rgcz00(obj_t);
	extern bool_t rgc_buffer_insert_substring(obj_t, obj_t, long, long);
	extern bool_t rgc_buffer_eof_p(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__rgcz00();
	BGL_EXPORTED_DECL long BGl_rgczd2startzd2matchz12z12zz__rgcz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rgczd2bufferzd2eof2zf3zf3zz__rgcz00(obj_t, long,
		long);
	static obj_t BGl_gczd2rootszd2initz00zz__rgcz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__rgcz00();
	static obj_t BGl_z62rgczd2bufferzd2substringz62zz__rgcz00(obj_t, obj_t, obj_t,
		obj_t);
	extern long rgc_buffer_fixnum(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgczd2bufferzd2substringz00zz__rgcz00(obj_t, long,
		long);
	BGL_EXPORTED_DECL obj_t BGl_rgczd2bufferzd2integerz00zz__rgcz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rgczd2bufferzd2eolzf3zf3zz__rgcz00(obj_t, long,
		long);
	static obj_t BGl_z62rgczd2bufferzd2eolzf3z91zz__rgcz00(obj_t, obj_t, obj_t,
		obj_t);
	extern bool_t rgc_buffer_insert_char(obj_t, int);
	static obj_t BGl_z62rgczd2bufferzd2downcasezd2subsymbolzb0zz__rgcz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62rgczd2bufferzd2getzd2charzb0zz__rgcz00(obj_t, obj_t,
		obj_t);
	extern int rgc_buffer_unget_char(obj_t, int);
	extern obj_t rgc_buffer_symbol(obj_t);
	static obj_t BGl_z62rgczd2bufferzd2fixnumz62zz__rgcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rgczd2fillzd2bufferz00zz__rgcz00(obj_t);
	static obj_t BGl_z62rgczd2bufferzd2lengthz62zz__rgcz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2unsafezd2rgcza2zd2zz__rgcz00 = BUNSPEC;
	static obj_t BGl_z62rgczd2fillzd2bufferz62zz__rgcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_rgczd2bufferzd2forwardz00zz__rgcz00(obj_t);
	static obj_t BGl_z62rgczd2bufferzd2downcasezd2keywordzb0zz__rgcz00(obj_t,
		obj_t);
	extern bool_t rgc_buffer_eol_p(obj_t, long, long);
	static obj_t BGl_z62rgczd2startzd2matchz12z70zz__rgcz00(obj_t, obj_t);
	extern bool_t rgc_buffer_eof2_p(obj_t, long, long);
	BGL_EXPORTED_DECL bool_t
		BGl_rgczd2bufferzd2insertzd2substringz12zc0zz__rgcz00(obj_t, obj_t, long,
		long);
	static obj_t BGl_z62rgczd2bufferzd2eof2zf3z91zz__rgcz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rgczd2bufferzd2symbolz62zz__rgcz00(obj_t, obj_t);
	extern obj_t rgc_buffer_upcase_keyword(obj_t);
	static obj_t BGl_symbol1801z00zz__rgcz00 = BUNSPEC;
	extern bool_t rgc_fill_buffer(obj_t);
	static obj_t BGl_symbol1803z00zz__rgcz00 = BUNSPEC;
	static obj_t BGl_symbol1805z00zz__rgcz00 = BUNSPEC;
	static obj_t BGl_z62rgczd2bufferzd2bufposz62zz__rgcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_rgczd2bufferzd2flonumz00zz__rgcz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rgczd2bufferzd2upcasezd2subsymbolzd2zz__rgcz00(obj_t, long, long);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2eof2zf3zd2envz21zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71809za7,
		BGl_z62rgczd2bufferzd2eof2zf3z91zz__rgcz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2bofzf3zd2envz21zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71810za7,
		BGl_z62rgczd2bufferzd2bofzf3z91zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2positionzd2envzd2zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71811za7,
		BGl_z62rgczd2bufferzd2positionz62zz__rgcz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2flonumzd2envzd2zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71812za7,
		BGl_z62rgczd2bufferzd2flonumz62zz__rgcz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2thezd2submatchzd2envzd2zz__rgcz00,
		BgL_bgl_za762rgcza7d2theza7d2s1813za7,
		BGl_z62rgczd2thezd2submatchz62zz__rgcz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2upcasezd2symbolzd2envz00zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71814za7,
		BGl_z62rgczd2bufferzd2upcasezd2symbolzb0zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2bytezd2refzd2envz00zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71815za7,
		BGl_z62rgczd2bufferzd2bytezd2refzb0zz__rgcz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2symbolzd2envzd2zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71816za7,
		BGl_z62rgczd2bufferzd2symbolz62zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2stopzd2matchz12zd2envzc0zz__rgcz00,
		BgL_bgl_za762rgcza7d2stopza7d21817za7,
		BGl_z62rgczd2stopzd2matchz12z70zz__rgcz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2downcasezd2subsymbolzd2envz00zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71818za7,
		BGl_z62rgczd2bufferzd2downcasezd2subsymbolzb0zz__rgcz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string1800z00zz__rgcz00,
		BgL_bgl_string1800za700za7za7_1819za7, "&rgc-buffer-eof2?", 17);
	      DEFINE_STRING(BGl_string1802z00zz__rgcz00,
		BgL_bgl_string1802za700za7za7_1820za7, "stop", 4);
	      DEFINE_STRING(BGl_string1804z00zz__rgcz00,
		BgL_bgl_string1804za700za7za7_1821za7, "start", 5);
	      DEFINE_STRING(BGl_string1806z00zz__rgcz00,
		BgL_bgl_string1806za700za7za7_1822za7, "start*", 6);
	      DEFINE_STRING(BGl_string1807z00zz__rgcz00,
		BgL_bgl_string1807za700za7za7_1823za7, "&rgc-the-submatch", 17);
	      DEFINE_STRING(BGl_string1808z00zz__rgcz00,
		BgL_bgl_string1808za700za7za7_1824za7, "__rgc", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2fixnumzd2envzd2zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71825za7,
		BGl_z62rgczd2bufferzd2fixnumz62zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2downcasezd2keywordzd2envz00zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71826za7,
		BGl_z62rgczd2bufferzd2downcasezd2keywordzb0zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2insertzd2substringz12zd2envz12zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71827za7,
		BGl_z62rgczd2bufferzd2insertzd2substringz12za2zz__rgcz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2getzd2charzd2envz00zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71828za7,
		BGl_z62rgczd2bufferzd2getzd2charzb0zz__rgcz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2bufposzd2envzd2zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71829za7,
		BGl_z62rgczd2bufferzd2bufposz62zz__rgcz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1763z00zz__rgcz00,
		BgL_bgl_string1763za700za7za7_1830za7, "/tmp/4.4a/runtime/Rgc/rgc.scm", 29);
	      DEFINE_STRING(BGl_string1764z00zz__rgcz00,
		BgL_bgl_string1764za700za7za7_1831za7, "&rgc-buffer-get-char", 20);
	      DEFINE_STRING(BGl_string1765z00zz__rgcz00,
		BgL_bgl_string1765za700za7za7_1832za7, "input-port", 10);
	      DEFINE_STRING(BGl_string1766z00zz__rgcz00,
		BgL_bgl_string1766za700za7za7_1833za7, "bint", 4);
	      DEFINE_STRING(BGl_string1767z00zz__rgcz00,
		BgL_bgl_string1767za700za7za7_1834za7, "&rgc-buffer-unget-char", 22);
	      DEFINE_STRING(BGl_string1768z00zz__rgcz00,
		BgL_bgl_string1768za700za7za7_1835za7, "&rgc-buffer-insert-substring!", 29);
	      DEFINE_STRING(BGl_string1769z00zz__rgcz00,
		BgL_bgl_string1769za700za7za7_1836za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1770z00zz__rgcz00,
		BgL_bgl_string1770za700za7za7_1837za7, "&rgc-buffer-insert-char!", 24);
	      DEFINE_STRING(BGl_string1771z00zz__rgcz00,
		BgL_bgl_string1771za700za7za7_1838za7, "&rgc-buffer-character", 21);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2forwardzd2envzd2zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71839za7,
		BGl_z62rgczd2bufferzd2forwardz62zz__rgcz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1772z00zz__rgcz00,
		BgL_bgl_string1772za700za7za7_1840za7, "&rgc-buffer-byte", 16);
	      DEFINE_STRING(BGl_string1773z00zz__rgcz00,
		BgL_bgl_string1773za700za7za7_1841za7, "&rgc-buffer-byte-ref", 20);
	      DEFINE_STRING(BGl_string1774z00zz__rgcz00,
		BgL_bgl_string1774za700za7za7_1842za7, "&rgc-buffer-substring", 21);
	      DEFINE_STRING(BGl_string1775z00zz__rgcz00,
		BgL_bgl_string1775za700za7za7_1843za7, "&rgc-buffer-escape-substring", 28);
	      DEFINE_STRING(BGl_string1776z00zz__rgcz00,
		BgL_bgl_string1776za700za7za7_1844za7, "&rgc-buffer-length", 18);
	      DEFINE_STRING(BGl_string1777z00zz__rgcz00,
		BgL_bgl_string1777za700za7za7_1845za7, "&rgc-buffer-fixnum", 18);
	      DEFINE_STRING(BGl_string1778z00zz__rgcz00,
		BgL_bgl_string1778za700za7za7_1846za7, "&rgc-buffer-integer", 19);
	      DEFINE_STRING(BGl_string1779z00zz__rgcz00,
		BgL_bgl_string1779za700za7za7_1847za7, "&rgc-buffer-flonum", 18);
	      DEFINE_STRING(BGl_string1780z00zz__rgcz00,
		BgL_bgl_string1780za700za7za7_1848za7, "&rgc-buffer-symbol", 18);
	      DEFINE_STRING(BGl_string1781z00zz__rgcz00,
		BgL_bgl_string1781za700za7za7_1849za7, "&rgc-buffer-subsymbol", 21);
	      DEFINE_STRING(BGl_string1782z00zz__rgcz00,
		BgL_bgl_string1782za700za7za7_1850za7, "&rgc-buffer-downcase-symbol", 27);
	      DEFINE_STRING(BGl_string1783z00zz__rgcz00,
		BgL_bgl_string1783za700za7za7_1851za7, "&rgc-buffer-downcase-subsymbol",
		30);
	      DEFINE_STRING(BGl_string1784z00zz__rgcz00,
		BgL_bgl_string1784za700za7za7_1852za7, "&rgc-buffer-upcase-symbol", 25);
	      DEFINE_STRING(BGl_string1785z00zz__rgcz00,
		BgL_bgl_string1785za700za7za7_1853za7, "&rgc-buffer-upcase-subsymbol", 28);
	      DEFINE_STRING(BGl_string1786z00zz__rgcz00,
		BgL_bgl_string1786za700za7za7_1854za7, "&rgc-buffer-keyword", 19);
	      DEFINE_STRING(BGl_string1787z00zz__rgcz00,
		BgL_bgl_string1787za700za7za7_1855za7, "&rgc-buffer-downcase-keyword", 28);
	      DEFINE_STRING(BGl_string1788z00zz__rgcz00,
		BgL_bgl_string1788za700za7za7_1856za7, "&rgc-buffer-upcase-keyword", 26);
	      DEFINE_STRING(BGl_string1789z00zz__rgcz00,
		BgL_bgl_string1789za700za7za7_1857za7, "&rgc-buffer-position", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2subsymbolzd2envzd2zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71858za7,
		BGl_z62rgczd2bufferzd2subsymbolz62zz__rgcz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2integerzd2envzd2zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71859za7,
		BGl_z62rgczd2bufferzd2integerz62zz__rgcz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1790z00zz__rgcz00,
		BgL_bgl_string1790za700za7za7_1860za7, "&rgc-buffer-forward", 19);
	      DEFINE_STRING(BGl_string1791z00zz__rgcz00,
		BgL_bgl_string1791za700za7za7_1861za7, "&rgc-buffer-bufpos", 18);
	      DEFINE_STRING(BGl_string1792z00zz__rgcz00,
		BgL_bgl_string1792za700za7za7_1862za7, "&rgc-set-filepos!", 17);
	      DEFINE_STRING(BGl_string1793z00zz__rgcz00,
		BgL_bgl_string1793za700za7za7_1863za7, "&rgc-start-match!", 17);
	      DEFINE_STRING(BGl_string1794z00zz__rgcz00,
		BgL_bgl_string1794za700za7za7_1864za7, "&rgc-stop-match!", 16);
	      DEFINE_STRING(BGl_string1795z00zz__rgcz00,
		BgL_bgl_string1795za700za7za7_1865za7, "&rgc-fill-buffer", 16);
	      DEFINE_STRING(BGl_string1796z00zz__rgcz00,
		BgL_bgl_string1796za700za7za7_1866za7, "&rgc-buffer-bol?", 16);
	      DEFINE_STRING(BGl_string1797z00zz__rgcz00,
		BgL_bgl_string1797za700za7za7_1867za7, "&rgc-buffer-eol?", 16);
	      DEFINE_STRING(BGl_string1798z00zz__rgcz00,
		BgL_bgl_string1798za700za7za7_1868za7, "&rgc-buffer-bof?", 16);
	      DEFINE_STRING(BGl_string1799z00zz__rgcz00,
		BgL_bgl_string1799za700za7za7_1869za7, "&rgc-buffer-eof?", 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2keywordzd2envzd2zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71870za7,
		BGl_z62rgczd2bufferzd2keywordz62zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2eolzf3zd2envz21zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71871za7,
		BGl_z62rgczd2bufferzd2eolzf3z91zz__rgcz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2insertzd2charz12zd2envz12zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71872za7,
		BGl_z62rgczd2bufferzd2insertzd2charz12za2zz__rgcz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2lengthzd2envzd2zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71873za7,
		BGl_z62rgczd2bufferzd2lengthz62zz__rgcz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2fillzd2bufferzd2envzd2zz__rgcz00,
		BgL_bgl_za762rgcza7d2fillza7d21874za7,
		BGl_z62rgczd2fillzd2bufferz62zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2eofzf3zd2envz21zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71875za7,
		BGl_z62rgczd2bufferzd2eofzf3z91zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2upcasezd2subsymbolzd2envz00zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71876za7,
		BGl_z62rgczd2bufferzd2upcasezd2subsymbolzb0zz__rgcz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2ungetzd2charzd2envz00zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71877za7,
		BGl_z62rgczd2bufferzd2ungetzd2charzb0zz__rgcz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2characterzd2envzd2zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71878za7,
		BGl_z62rgczd2bufferzd2characterz62zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2escapezd2substringzd2envz00zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71879za7,
		BGl_z62rgczd2bufferzd2escapezd2substringzb0zz__rgcz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2substringzd2envzd2zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71880za7,
		BGl_z62rgczd2bufferzd2substringz62zz__rgcz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2startzd2matchz12zd2envzc0zz__rgcz00,
		BgL_bgl_za762rgcza7d2startza7d1881za7,
		BGl_z62rgczd2startzd2matchz12z70zz__rgcz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2bytezd2envzd2zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71882za7,
		BGl_z62rgczd2bufferzd2bytez62zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2upcasezd2keywordzd2envz00zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71883za7,
		BGl_z62rgczd2bufferzd2upcasezd2keywordzb0zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2downcasezd2symbolzd2envz00zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71884za7,
		BGl_z62rgczd2bufferzd2downcasezd2symbolzb0zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2setzd2fileposz12zd2envzc0zz__rgcz00,
		BgL_bgl_za762rgcza7d2setza7d2f1885za7,
		BGl_z62rgczd2setzd2fileposz12z70zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2bolzf3zd2envz21zz__rgcz00,
		BgL_bgl_za762rgcza7d2bufferza71886za7,
		BGl_z62rgczd2bufferzd2bolzf3z91zz__rgcz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__rgcz00));
		     ADD_ROOT((void *) (&BGl_za2unsafezd2rgcza2zd2zz__rgcz00));
		     ADD_ROOT((void *) (&BGl_symbol1801z00zz__rgcz00));
		     ADD_ROOT((void *) (&BGl_symbol1803z00zz__rgcz00));
		     ADD_ROOT((void *) (&BGl_symbol1805z00zz__rgcz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__rgcz00(long
		BgL_checksumz00_2124, char *BgL_fromz00_2125)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__rgcz00))
				{
					BGl_requirezd2initializa7ationz75zz__rgcz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__rgcz00();
					BGl_cnstzd2initzd2zz__rgcz00();
					BGl_importedzd2moduleszd2initz00zz__rgcz00();
					return BGl_toplevelzd2initzd2zz__rgcz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__rgcz00()
	{
		{	/* Rgc/rgc.scm 17 */
			BGl_symbol1801z00zz__rgcz00 =
				bstring_to_symbol(BGl_string1802z00zz__rgcz00);
			BGl_symbol1803z00zz__rgcz00 =
				bstring_to_symbol(BGl_string1804z00zz__rgcz00);
			return (BGl_symbol1805z00zz__rgcz00 =
				bstring_to_symbol(BGl_string1806z00zz__rgcz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__rgcz00()
	{
		{	/* Rgc/rgc.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__rgcz00()
	{
		{	/* Rgc/rgc.scm 17 */
			return (BGl_za2unsafezd2rgcza2zd2zz__rgcz00 = BFALSE, BUNSPEC);
		}

	}



/* rgc-buffer-get-char */
	BGL_EXPORTED_DEF int BGl_rgczd2bufferzd2getzd2charzd2zz__rgcz00(obj_t
		BgL_inputzd2portzd2_3, long BgL_indexz00_4)
	{
		{	/* Rgc/rgc.scm 241 */
			return RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3, BgL_indexz00_4);
		}

	}



/* &rgc-buffer-get-char */
	obj_t BGl_z62rgczd2bufferzd2getzd2charzb0zz__rgcz00(obj_t BgL_envz00_1903,
		obj_t BgL_inputzd2portzd2_1904, obj_t BgL_indexz00_1905)
	{
		{	/* Rgc/rgc.scm 241 */
			{	/* Rgc/rgc.scm 242 */
				int BgL_tmpz00_2138;

				{	/* Rgc/rgc.scm 242 */
					long BgL_auxz00_2146;
					obj_t BgL_auxz00_2139;

					{	/* Rgc/rgc.scm 242 */
						obj_t BgL_tmpz00_2147;

						if (INTEGERP(BgL_indexz00_1905))
							{	/* Rgc/rgc.scm 242 */
								BgL_tmpz00_2147 = BgL_indexz00_1905;
							}
						else
							{
								obj_t BgL_auxz00_2150;

								BgL_auxz00_2150 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
									BINT(((long) 11343)), BGl_string1764z00zz__rgcz00,
									BGl_string1766z00zz__rgcz00, BgL_indexz00_1905);
								FAILURE(BgL_auxz00_2150, BFALSE, BFALSE);
							}
						BgL_auxz00_2146 = (long) CINT(BgL_tmpz00_2147);
					}
					if (INPUT_PORTP(BgL_inputzd2portzd2_1904))
						{	/* Rgc/rgc.scm 242 */
							BgL_auxz00_2139 = BgL_inputzd2portzd2_1904;
						}
					else
						{
							obj_t BgL_auxz00_2142;

							BgL_auxz00_2142 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 11343)), BGl_string1764z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1904);
							FAILURE(BgL_auxz00_2142, BFALSE, BFALSE);
						}
					BgL_tmpz00_2138 =
						BGl_rgczd2bufferzd2getzd2charzd2zz__rgcz00(BgL_auxz00_2139,
						BgL_auxz00_2146);
				}
				return BINT(BgL_tmpz00_2138);
			}
		}

	}



/* rgc-buffer-unget-char */
	BGL_EXPORTED_DEF int BGl_rgczd2bufferzd2ungetzd2charzd2zz__rgcz00(obj_t
		BgL_inputzd2portzd2_5, int BgL_charz00_6)
	{
		{	/* Rgc/rgc.scm 247 */
			return rgc_buffer_unget_char(BgL_inputzd2portzd2_5, BgL_charz00_6);
		}

	}



/* &rgc-buffer-unget-char */
	obj_t BGl_z62rgczd2bufferzd2ungetzd2charzb0zz__rgcz00(obj_t BgL_envz00_1906,
		obj_t BgL_inputzd2portzd2_1907, obj_t BgL_charz00_1908)
	{
		{	/* Rgc/rgc.scm 247 */
			{	/* Rgc/rgc.scm 248 */
				int BgL_tmpz00_2158;

				{	/* Rgc/rgc.scm 248 */
					int BgL_auxz00_2166;
					obj_t BgL_auxz00_2159;

					{	/* Rgc/rgc.scm 248 */
						obj_t BgL_tmpz00_2167;

						if (INTEGERP(BgL_charz00_1908))
							{	/* Rgc/rgc.scm 248 */
								BgL_tmpz00_2167 = BgL_charz00_1908;
							}
						else
							{
								obj_t BgL_auxz00_2170;

								BgL_auxz00_2170 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
									BINT(((long) 11665)), BGl_string1767z00zz__rgcz00,
									BGl_string1766z00zz__rgcz00, BgL_charz00_1908);
								FAILURE(BgL_auxz00_2170, BFALSE, BFALSE);
							}
						BgL_auxz00_2166 = CINT(BgL_tmpz00_2167);
					}
					if (INPUT_PORTP(BgL_inputzd2portzd2_1907))
						{	/* Rgc/rgc.scm 248 */
							BgL_auxz00_2159 = BgL_inputzd2portzd2_1907;
						}
					else
						{
							obj_t BgL_auxz00_2162;

							BgL_auxz00_2162 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 11665)), BGl_string1767z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1907);
							FAILURE(BgL_auxz00_2162, BFALSE, BFALSE);
						}
					BgL_tmpz00_2158 =
						BGl_rgczd2bufferzd2ungetzd2charzd2zz__rgcz00(BgL_auxz00_2159,
						BgL_auxz00_2166);
				}
				return BINT(BgL_tmpz00_2158);
			}
		}

	}



/* rgc-buffer-insert-substring! */
	BGL_EXPORTED_DEF bool_t
		BGl_rgczd2bufferzd2insertzd2substringz12zc0zz__rgcz00(obj_t
		BgL_inputzd2portzd2_7, obj_t BgL_strz00_8, long BgL_fromz00_9,
		long BgL_toz00_10)
	{
		{	/* Rgc/rgc.scm 253 */
			return
				rgc_buffer_insert_substring(BgL_inputzd2portzd2_7, BgL_strz00_8,
				BgL_fromz00_9, BgL_toz00_10);
		}

	}



/* &rgc-buffer-insert-substring! */
	obj_t BGl_z62rgczd2bufferzd2insertzd2substringz12za2zz__rgcz00(obj_t
		BgL_envz00_1909, obj_t BgL_inputzd2portzd2_1910, obj_t BgL_strz00_1911,
		obj_t BgL_fromz00_1912, obj_t BgL_toz00_1913)
	{
		{	/* Rgc/rgc.scm 253 */
			{	/* Rgc/rgc.scm 254 */
				bool_t BgL_tmpz00_2178;

				{	/* Rgc/rgc.scm 254 */
					long BgL_auxz00_2202;
					long BgL_auxz00_2193;
					obj_t BgL_auxz00_2186;
					obj_t BgL_auxz00_2179;

					{	/* Rgc/rgc.scm 254 */
						obj_t BgL_tmpz00_2203;

						if (INTEGERP(BgL_toz00_1913))
							{	/* Rgc/rgc.scm 254 */
								BgL_tmpz00_2203 = BgL_toz00_1913;
							}
						else
							{
								obj_t BgL_auxz00_2206;

								BgL_auxz00_2206 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
									BINT(((long) 12002)), BGl_string1768z00zz__rgcz00,
									BGl_string1766z00zz__rgcz00, BgL_toz00_1913);
								FAILURE(BgL_auxz00_2206, BFALSE, BFALSE);
							}
						BgL_auxz00_2202 = (long) CINT(BgL_tmpz00_2203);
					}
					{	/* Rgc/rgc.scm 254 */
						obj_t BgL_tmpz00_2194;

						if (INTEGERP(BgL_fromz00_1912))
							{	/* Rgc/rgc.scm 254 */
								BgL_tmpz00_2194 = BgL_fromz00_1912;
							}
						else
							{
								obj_t BgL_auxz00_2197;

								BgL_auxz00_2197 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
									BINT(((long) 12002)), BGl_string1768z00zz__rgcz00,
									BGl_string1766z00zz__rgcz00, BgL_fromz00_1912);
								FAILURE(BgL_auxz00_2197, BFALSE, BFALSE);
							}
						BgL_auxz00_2193 = (long) CINT(BgL_tmpz00_2194);
					}
					if (STRINGP(BgL_strz00_1911))
						{	/* Rgc/rgc.scm 254 */
							BgL_auxz00_2186 = BgL_strz00_1911;
						}
					else
						{
							obj_t BgL_auxz00_2189;

							BgL_auxz00_2189 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 12002)), BGl_string1768z00zz__rgcz00,
								BGl_string1769z00zz__rgcz00, BgL_strz00_1911);
							FAILURE(BgL_auxz00_2189, BFALSE, BFALSE);
						}
					if (INPUT_PORTP(BgL_inputzd2portzd2_1910))
						{	/* Rgc/rgc.scm 254 */
							BgL_auxz00_2179 = BgL_inputzd2portzd2_1910;
						}
					else
						{
							obj_t BgL_auxz00_2182;

							BgL_auxz00_2182 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 12002)), BGl_string1768z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1910);
							FAILURE(BgL_auxz00_2182, BFALSE, BFALSE);
						}
					BgL_tmpz00_2178 =
						BGl_rgczd2bufferzd2insertzd2substringz12zc0zz__rgcz00
						(BgL_auxz00_2179, BgL_auxz00_2186, BgL_auxz00_2193,
						BgL_auxz00_2202);
				}
				return BBOOL(BgL_tmpz00_2178);
			}
		}

	}



/* rgc-buffer-insert-char! */
	BGL_EXPORTED_DEF bool_t BGl_rgczd2bufferzd2insertzd2charz12zc0zz__rgcz00(obj_t
		BgL_inputzd2portzd2_11, long BgL_charz00_12)
	{
		{	/* Rgc/rgc.scm 259 */
			return
				rgc_buffer_insert_char(BgL_inputzd2portzd2_11, (int) (BgL_charz00_12));
		}

	}



/* &rgc-buffer-insert-char! */
	obj_t BGl_z62rgczd2bufferzd2insertzd2charz12za2zz__rgcz00(obj_t
		BgL_envz00_1914, obj_t BgL_inputzd2portzd2_1915, obj_t BgL_charz00_1916)
	{
		{	/* Rgc/rgc.scm 259 */
			{	/* Rgc/rgc.scm 260 */
				bool_t BgL_tmpz00_2215;

				{	/* Rgc/rgc.scm 260 */
					long BgL_auxz00_2223;
					obj_t BgL_auxz00_2216;

					{	/* Rgc/rgc.scm 260 */
						obj_t BgL_tmpz00_2224;

						if (INTEGERP(BgL_charz00_1916))
							{	/* Rgc/rgc.scm 260 */
								BgL_tmpz00_2224 = BgL_charz00_1916;
							}
						else
							{
								obj_t BgL_auxz00_2227;

								BgL_auxz00_2227 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
									BINT(((long) 12340)), BGl_string1770z00zz__rgcz00,
									BGl_string1766z00zz__rgcz00, BgL_charz00_1916);
								FAILURE(BgL_auxz00_2227, BFALSE, BFALSE);
							}
						BgL_auxz00_2223 = (long) CINT(BgL_tmpz00_2224);
					}
					if (INPUT_PORTP(BgL_inputzd2portzd2_1915))
						{	/* Rgc/rgc.scm 260 */
							BgL_auxz00_2216 = BgL_inputzd2portzd2_1915;
						}
					else
						{
							obj_t BgL_auxz00_2219;

							BgL_auxz00_2219 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 12340)), BGl_string1770z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1915);
							FAILURE(BgL_auxz00_2219, BFALSE, BFALSE);
						}
					BgL_tmpz00_2215 =
						BGl_rgczd2bufferzd2insertzd2charz12zc0zz__rgcz00(BgL_auxz00_2216,
						BgL_auxz00_2223);
				}
				return BBOOL(BgL_tmpz00_2215);
			}
		}

	}



/* rgc-buffer-character */
	BGL_EXPORTED_DEF unsigned char BGl_rgczd2bufferzd2characterz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_13)
	{
		{	/* Rgc/rgc.scm 265 */
			return RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_13);
		}

	}



/* &rgc-buffer-character */
	obj_t BGl_z62rgczd2bufferzd2characterz62zz__rgcz00(obj_t BgL_envz00_1917,
		obj_t BgL_inputzd2portzd2_1918)
	{
		{	/* Rgc/rgc.scm 265 */
			{	/* Rgc/rgc.scm 266 */
				unsigned char BgL_tmpz00_2235;

				{	/* Rgc/rgc.scm 266 */
					obj_t BgL_auxz00_2236;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1918))
						{	/* Rgc/rgc.scm 266 */
							BgL_auxz00_2236 = BgL_inputzd2portzd2_1918;
						}
					else
						{
							obj_t BgL_auxz00_2239;

							BgL_auxz00_2239 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 12658)), BGl_string1771z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1918);
							FAILURE(BgL_auxz00_2239, BFALSE, BFALSE);
						}
					BgL_tmpz00_2235 =
						BGl_rgczd2bufferzd2characterz00zz__rgcz00(BgL_auxz00_2236);
				}
				return BCHAR(BgL_tmpz00_2235);
			}
		}

	}



/* rgc-buffer-byte */
	BGL_EXPORTED_DEF int BGl_rgczd2bufferzd2bytez00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_14)
	{
		{	/* Rgc/rgc.scm 271 */
			return RGC_BUFFER_BYTE(BgL_inputzd2portzd2_14);
		}

	}



/* &rgc-buffer-byte */
	obj_t BGl_z62rgczd2bufferzd2bytez62zz__rgcz00(obj_t BgL_envz00_1919,
		obj_t BgL_inputzd2portzd2_1920)
	{
		{	/* Rgc/rgc.scm 271 */
			{	/* Rgc/rgc.scm 272 */
				int BgL_tmpz00_2246;

				{	/* Rgc/rgc.scm 272 */
					obj_t BgL_auxz00_2247;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1920))
						{	/* Rgc/rgc.scm 272 */
							BgL_auxz00_2247 = BgL_inputzd2portzd2_1920;
						}
					else
						{
							obj_t BgL_auxz00_2250;

							BgL_auxz00_2250 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 12964)), BGl_string1772z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1920);
							FAILURE(BgL_auxz00_2250, BFALSE, BFALSE);
						}
					BgL_tmpz00_2246 =
						BGl_rgczd2bufferzd2bytez00zz__rgcz00(BgL_auxz00_2247);
				}
				return BINT(BgL_tmpz00_2246);
			}
		}

	}



/* rgc-buffer-byte-ref */
	BGL_EXPORTED_DEF int BGl_rgczd2bufferzd2bytezd2refzd2zz__rgcz00(obj_t
		BgL_inputzd2portzd2_15, int BgL_offsetz00_16)
	{
		{	/* Rgc/rgc.scm 277 */
			return RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_15, BgL_offsetz00_16);
		}

	}



/* &rgc-buffer-byte-ref */
	obj_t BGl_z62rgczd2bufferzd2bytezd2refzb0zz__rgcz00(obj_t BgL_envz00_1921,
		obj_t BgL_inputzd2portzd2_1922, obj_t BgL_offsetz00_1923)
	{
		{	/* Rgc/rgc.scm 277 */
			{	/* Rgc/rgc.scm 278 */
				int BgL_tmpz00_2257;

				{	/* Rgc/rgc.scm 278 */
					int BgL_auxz00_2265;
					obj_t BgL_auxz00_2258;

					{	/* Rgc/rgc.scm 278 */
						obj_t BgL_tmpz00_2266;

						if (INTEGERP(BgL_offsetz00_1923))
							{	/* Rgc/rgc.scm 278 */
								BgL_tmpz00_2266 = BgL_offsetz00_1923;
							}
						else
							{
								obj_t BgL_auxz00_2269;

								BgL_auxz00_2269 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
									BINT(((long) 13276)), BGl_string1773z00zz__rgcz00,
									BGl_string1766z00zz__rgcz00, BgL_offsetz00_1923);
								FAILURE(BgL_auxz00_2269, BFALSE, BFALSE);
							}
						BgL_auxz00_2265 = CINT(BgL_tmpz00_2266);
					}
					if (INPUT_PORTP(BgL_inputzd2portzd2_1922))
						{	/* Rgc/rgc.scm 278 */
							BgL_auxz00_2258 = BgL_inputzd2portzd2_1922;
						}
					else
						{
							obj_t BgL_auxz00_2261;

							BgL_auxz00_2261 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 13276)), BGl_string1773z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1922);
							FAILURE(BgL_auxz00_2261, BFALSE, BFALSE);
						}
					BgL_tmpz00_2257 =
						BGl_rgczd2bufferzd2bytezd2refzd2zz__rgcz00(BgL_auxz00_2258,
						BgL_auxz00_2265);
				}
				return BINT(BgL_tmpz00_2257);
			}
		}

	}



/* rgc-buffer-substring */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2bufferzd2substringz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_17, long BgL_startz00_18, long BgL_stopz00_19)
	{
		{	/* Rgc/rgc.scm 283 */
			return
				rgc_buffer_substring(BgL_inputzd2portzd2_17, BgL_startz00_18,
				BgL_stopz00_19);
		}

	}



/* &rgc-buffer-substring */
	obj_t BGl_z62rgczd2bufferzd2substringz62zz__rgcz00(obj_t BgL_envz00_1924,
		obj_t BgL_inputzd2portzd2_1925, obj_t BgL_startz00_1926,
		obj_t BgL_stopz00_1927)
	{
		{	/* Rgc/rgc.scm 283 */
			{	/* Rgc/rgc.scm 284 */
				long BgL_auxz00_2293;
				long BgL_auxz00_2284;
				obj_t BgL_auxz00_2277;

				{	/* Rgc/rgc.scm 284 */
					obj_t BgL_tmpz00_2294;

					if (INTEGERP(BgL_stopz00_1927))
						{	/* Rgc/rgc.scm 284 */
							BgL_tmpz00_2294 = BgL_stopz00_1927;
						}
					else
						{
							obj_t BgL_auxz00_2297;

							BgL_auxz00_2297 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 13604)), BGl_string1774z00zz__rgcz00,
								BGl_string1766z00zz__rgcz00, BgL_stopz00_1927);
							FAILURE(BgL_auxz00_2297, BFALSE, BFALSE);
						}
					BgL_auxz00_2293 = (long) CINT(BgL_tmpz00_2294);
				}
				{	/* Rgc/rgc.scm 284 */
					obj_t BgL_tmpz00_2285;

					if (INTEGERP(BgL_startz00_1926))
						{	/* Rgc/rgc.scm 284 */
							BgL_tmpz00_2285 = BgL_startz00_1926;
						}
					else
						{
							obj_t BgL_auxz00_2288;

							BgL_auxz00_2288 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 13604)), BGl_string1774z00zz__rgcz00,
								BGl_string1766z00zz__rgcz00, BgL_startz00_1926);
							FAILURE(BgL_auxz00_2288, BFALSE, BFALSE);
						}
					BgL_auxz00_2284 = (long) CINT(BgL_tmpz00_2285);
				}
				if (INPUT_PORTP(BgL_inputzd2portzd2_1925))
					{	/* Rgc/rgc.scm 284 */
						BgL_auxz00_2277 = BgL_inputzd2portzd2_1925;
					}
				else
					{
						obj_t BgL_auxz00_2280;

						BgL_auxz00_2280 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
							BINT(((long) 13604)), BGl_string1774z00zz__rgcz00,
							BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1925);
						FAILURE(BgL_auxz00_2280, BFALSE, BFALSE);
					}
				return
					BGl_rgczd2bufferzd2substringz00zz__rgcz00(BgL_auxz00_2277,
					BgL_auxz00_2284, BgL_auxz00_2293);
			}
		}

	}



/* rgc-buffer-escape-substring */
	BGL_EXPORTED_DEF obj_t
		BGl_rgczd2bufferzd2escapezd2substringzd2zz__rgcz00(obj_t
		BgL_inputzd2portzd2_20, long BgL_startz00_21, long BgL_stopz00_22,
		bool_t BgL_strictz00_23)
	{
		{	/* Rgc/rgc.scm 289 */
			return
				rgc_buffer_escape_substring(BgL_inputzd2portzd2_20, BgL_startz00_21,
				BgL_stopz00_22, BgL_strictz00_23);
		}

	}



/* &rgc-buffer-escape-substring */
	obj_t BGl_z62rgczd2bufferzd2escapezd2substringzb0zz__rgcz00(obj_t
		BgL_envz00_1928, obj_t BgL_inputzd2portzd2_1929, obj_t BgL_startz00_1930,
		obj_t BgL_stopz00_1931, obj_t BgL_strictz00_1932)
	{
		{	/* Rgc/rgc.scm 289 */
			{	/* Rgc/rgc.scm 290 */
				long BgL_auxz00_2320;
				long BgL_auxz00_2311;
				obj_t BgL_auxz00_2304;

				{	/* Rgc/rgc.scm 290 */
					obj_t BgL_tmpz00_2321;

					if (INTEGERP(BgL_stopz00_1931))
						{	/* Rgc/rgc.scm 290 */
							BgL_tmpz00_2321 = BgL_stopz00_1931;
						}
					else
						{
							obj_t BgL_auxz00_2324;

							BgL_auxz00_2324 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 13951)), BGl_string1775z00zz__rgcz00,
								BGl_string1766z00zz__rgcz00, BgL_stopz00_1931);
							FAILURE(BgL_auxz00_2324, BFALSE, BFALSE);
						}
					BgL_auxz00_2320 = (long) CINT(BgL_tmpz00_2321);
				}
				{	/* Rgc/rgc.scm 290 */
					obj_t BgL_tmpz00_2312;

					if (INTEGERP(BgL_startz00_1930))
						{	/* Rgc/rgc.scm 290 */
							BgL_tmpz00_2312 = BgL_startz00_1930;
						}
					else
						{
							obj_t BgL_auxz00_2315;

							BgL_auxz00_2315 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 13951)), BGl_string1775z00zz__rgcz00,
								BGl_string1766z00zz__rgcz00, BgL_startz00_1930);
							FAILURE(BgL_auxz00_2315, BFALSE, BFALSE);
						}
					BgL_auxz00_2311 = (long) CINT(BgL_tmpz00_2312);
				}
				if (INPUT_PORTP(BgL_inputzd2portzd2_1929))
					{	/* Rgc/rgc.scm 290 */
						BgL_auxz00_2304 = BgL_inputzd2portzd2_1929;
					}
				else
					{
						obj_t BgL_auxz00_2307;

						BgL_auxz00_2307 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
							BINT(((long) 13951)), BGl_string1775z00zz__rgcz00,
							BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1929);
						FAILURE(BgL_auxz00_2307, BFALSE, BFALSE);
					}
				return
					BGl_rgczd2bufferzd2escapezd2substringzd2zz__rgcz00(BgL_auxz00_2304,
					BgL_auxz00_2311, BgL_auxz00_2320, CBOOL(BgL_strictz00_1932));
			}
		}

	}



/* rgc-buffer-length */
	BGL_EXPORTED_DEF long BGl_rgczd2bufferzd2lengthz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_24)
	{
		{	/* Rgc/rgc.scm 295 */
			return RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_24);
		}

	}



/* &rgc-buffer-length */
	obj_t BGl_z62rgczd2bufferzd2lengthz62zz__rgcz00(obj_t BgL_envz00_1933,
		obj_t BgL_inputzd2portzd2_1934)
	{
		{	/* Rgc/rgc.scm 295 */
			{	/* Rgc/rgc.scm 296 */
				long BgL_tmpz00_2332;

				{	/* Rgc/rgc.scm 296 */
					obj_t BgL_auxz00_2333;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1934))
						{	/* Rgc/rgc.scm 296 */
							BgL_auxz00_2333 = BgL_inputzd2portzd2_1934;
						}
					else
						{
							obj_t BgL_auxz00_2336;

							BgL_auxz00_2336 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 14302)), BGl_string1776z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1934);
							FAILURE(BgL_auxz00_2336, BFALSE, BFALSE);
						}
					BgL_tmpz00_2332 =
						BGl_rgczd2bufferzd2lengthz00zz__rgcz00(BgL_auxz00_2333);
				}
				return BINT(BgL_tmpz00_2332);
			}
		}

	}



/* rgc-buffer-fixnum */
	BGL_EXPORTED_DEF long BGl_rgczd2bufferzd2fixnumz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_25)
	{
		{	/* Rgc/rgc.scm 301 */
			return rgc_buffer_fixnum(BgL_inputzd2portzd2_25);
		}

	}



/* &rgc-buffer-fixnum */
	obj_t BGl_z62rgczd2bufferzd2fixnumz62zz__rgcz00(obj_t BgL_envz00_1935,
		obj_t BgL_inputzd2portzd2_1936)
	{
		{	/* Rgc/rgc.scm 301 */
			{	/* Rgc/rgc.scm 302 */
				long BgL_tmpz00_2343;

				{	/* Rgc/rgc.scm 302 */
					obj_t BgL_auxz00_2344;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1936))
						{	/* Rgc/rgc.scm 302 */
							BgL_auxz00_2344 = BgL_inputzd2portzd2_1936;
						}
					else
						{
							obj_t BgL_auxz00_2347;

							BgL_auxz00_2347 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 14625)), BGl_string1777z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1936);
							FAILURE(BgL_auxz00_2347, BFALSE, BFALSE);
						}
					BgL_tmpz00_2343 =
						BGl_rgczd2bufferzd2fixnumz00zz__rgcz00(BgL_auxz00_2344);
				}
				return BINT(BgL_tmpz00_2343);
			}
		}

	}



/* rgc-buffer-integer */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2bufferzd2integerz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_26)
	{
		{	/* Rgc/rgc.scm 307 */
			return rgc_buffer_integer(BgL_inputzd2portzd2_26);
		}

	}



/* &rgc-buffer-integer */
	obj_t BGl_z62rgczd2bufferzd2integerz62zz__rgcz00(obj_t BgL_envz00_1937,
		obj_t BgL_inputzd2portzd2_1938)
	{
		{	/* Rgc/rgc.scm 307 */
			{	/* Rgc/rgc.scm 308 */
				obj_t BgL_auxz00_2354;

				if (INPUT_PORTP(BgL_inputzd2portzd2_1938))
					{	/* Rgc/rgc.scm 308 */
						BgL_auxz00_2354 = BgL_inputzd2portzd2_1938;
					}
				else
					{
						obj_t BgL_auxz00_2357;

						BgL_auxz00_2357 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
							BINT(((long) 14948)), BGl_string1778z00zz__rgcz00,
							BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1938);
						FAILURE(BgL_auxz00_2357, BFALSE, BFALSE);
					}
				return BGl_rgczd2bufferzd2integerz00zz__rgcz00(BgL_auxz00_2354);
			}
		}

	}



/* rgc-buffer-flonum */
	BGL_EXPORTED_DEF double BGl_rgczd2bufferzd2flonumz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_27)
	{
		{	/* Rgc/rgc.scm 313 */
			return rgc_buffer_flonum(BgL_inputzd2portzd2_27);
		}

	}



/* &rgc-buffer-flonum */
	obj_t BGl_z62rgczd2bufferzd2flonumz62zz__rgcz00(obj_t BgL_envz00_1939,
		obj_t BgL_inputzd2portzd2_1940)
	{
		{	/* Rgc/rgc.scm 313 */
			{	/* Rgc/rgc.scm 314 */
				double BgL_tmpz00_2363;

				{	/* Rgc/rgc.scm 314 */
					obj_t BgL_auxz00_2364;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1940))
						{	/* Rgc/rgc.scm 314 */
							BgL_auxz00_2364 = BgL_inputzd2portzd2_1940;
						}
					else
						{
							obj_t BgL_auxz00_2367;

							BgL_auxz00_2367 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 15274)), BGl_string1779z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1940);
							FAILURE(BgL_auxz00_2367, BFALSE, BFALSE);
						}
					BgL_tmpz00_2363 =
						BGl_rgczd2bufferzd2flonumz00zz__rgcz00(BgL_auxz00_2364);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2363);
			}
		}

	}



/* rgc-buffer-symbol */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2bufferzd2symbolz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_28)
	{
		{	/* Rgc/rgc.scm 319 */
			return rgc_buffer_symbol(BgL_inputzd2portzd2_28);
		}

	}



/* &rgc-buffer-symbol */
	obj_t BGl_z62rgczd2bufferzd2symbolz62zz__rgcz00(obj_t BgL_envz00_1941,
		obj_t BgL_inputzd2portzd2_1942)
	{
		{	/* Rgc/rgc.scm 319 */
			{	/* Rgc/rgc.scm 320 */
				obj_t BgL_auxz00_2374;

				if (INPUT_PORTP(BgL_inputzd2portzd2_1942))
					{	/* Rgc/rgc.scm 320 */
						BgL_auxz00_2374 = BgL_inputzd2portzd2_1942;
					}
				else
					{
						obj_t BgL_auxz00_2377;

						BgL_auxz00_2377 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
							BINT(((long) 15599)), BGl_string1780z00zz__rgcz00,
							BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1942);
						FAILURE(BgL_auxz00_2377, BFALSE, BFALSE);
					}
				return BGl_rgczd2bufferzd2symbolz00zz__rgcz00(BgL_auxz00_2374);
			}
		}

	}



/* rgc-buffer-subsymbol */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2bufferzd2subsymbolz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_29, long BgL_startz00_30, long BgL_stopz00_31)
	{
		{	/* Rgc/rgc.scm 325 */
			return
				rgc_buffer_subsymbol(BgL_inputzd2portzd2_29, BgL_startz00_30,
				BgL_stopz00_31);
		}

	}



/* &rgc-buffer-subsymbol */
	obj_t BGl_z62rgczd2bufferzd2subsymbolz62zz__rgcz00(obj_t BgL_envz00_1943,
		obj_t BgL_inputzd2portzd2_1944, obj_t BgL_startz00_1945,
		obj_t BgL_stopz00_1946)
	{
		{	/* Rgc/rgc.scm 325 */
			{	/* Rgc/rgc.scm 326 */
				long BgL_auxz00_2399;
				long BgL_auxz00_2390;
				obj_t BgL_auxz00_2383;

				{	/* Rgc/rgc.scm 326 */
					obj_t BgL_tmpz00_2400;

					if (INTEGERP(BgL_stopz00_1946))
						{	/* Rgc/rgc.scm 326 */
							BgL_tmpz00_2400 = BgL_stopz00_1946;
						}
					else
						{
							obj_t BgL_auxz00_2403;

							BgL_auxz00_2403 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 15918)), BGl_string1781z00zz__rgcz00,
								BGl_string1766z00zz__rgcz00, BgL_stopz00_1946);
							FAILURE(BgL_auxz00_2403, BFALSE, BFALSE);
						}
					BgL_auxz00_2399 = (long) CINT(BgL_tmpz00_2400);
				}
				{	/* Rgc/rgc.scm 326 */
					obj_t BgL_tmpz00_2391;

					if (INTEGERP(BgL_startz00_1945))
						{	/* Rgc/rgc.scm 326 */
							BgL_tmpz00_2391 = BgL_startz00_1945;
						}
					else
						{
							obj_t BgL_auxz00_2394;

							BgL_auxz00_2394 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 15918)), BGl_string1781z00zz__rgcz00,
								BGl_string1766z00zz__rgcz00, BgL_startz00_1945);
							FAILURE(BgL_auxz00_2394, BFALSE, BFALSE);
						}
					BgL_auxz00_2390 = (long) CINT(BgL_tmpz00_2391);
				}
				if (INPUT_PORTP(BgL_inputzd2portzd2_1944))
					{	/* Rgc/rgc.scm 326 */
						BgL_auxz00_2383 = BgL_inputzd2portzd2_1944;
					}
				else
					{
						obj_t BgL_auxz00_2386;

						BgL_auxz00_2386 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
							BINT(((long) 15918)), BGl_string1781z00zz__rgcz00,
							BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1944);
						FAILURE(BgL_auxz00_2386, BFALSE, BFALSE);
					}
				return
					BGl_rgczd2bufferzd2subsymbolz00zz__rgcz00(BgL_auxz00_2383,
					BgL_auxz00_2390, BgL_auxz00_2399);
			}
		}

	}



/* rgc-buffer-downcase-symbol */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2bufferzd2downcasezd2symbolzd2zz__rgcz00(obj_t
		BgL_inputzd2portzd2_32)
	{
		{	/* Rgc/rgc.scm 331 */
			{	/* Rgc/rgc.scm 332 */
				long BgL_arg1197z00_2120;

				{	/* Rgc/rgc.scm 332 */
					long BgL_res1568z00_2121;

					BgL_res1568z00_2121 = RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_32);
					BgL_arg1197z00_2120 = BgL_res1568z00_2121;
				}
				return
					rgc_buffer_downcase_subsymbol(BgL_inputzd2portzd2_32, ((long) 0),
					BgL_arg1197z00_2120);
		}}

	}



/* &rgc-buffer-downcase-symbol */
	obj_t BGl_z62rgczd2bufferzd2downcasezd2symbolzb0zz__rgcz00(obj_t
		BgL_envz00_1947, obj_t BgL_inputzd2portzd2_1948)
	{
		{	/* Rgc/rgc.scm 331 */
			{	/* Rgc/rgc.scm 332 */
				obj_t BgL_auxz00_2411;

				if (INPUT_PORTP(BgL_inputzd2portzd2_1948))
					{	/* Rgc/rgc.scm 332 */
						BgL_auxz00_2411 = BgL_inputzd2portzd2_1948;
					}
				else
					{
						obj_t BgL_auxz00_2414;

						BgL_auxz00_2414 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
							BINT(((long) 16311)), BGl_string1782z00zz__rgcz00,
							BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1948);
						FAILURE(BgL_auxz00_2414, BFALSE, BFALSE);
					}
				return
					BGl_rgczd2bufferzd2downcasezd2symbolzd2zz__rgcz00(BgL_auxz00_2411);
			}
		}

	}



/* rgc-buffer-downcase-subsymbol */
	BGL_EXPORTED_DEF obj_t
		BGl_rgczd2bufferzd2downcasezd2subsymbolzd2zz__rgcz00(obj_t
		BgL_inputzd2portzd2_33, long BgL_startz00_34, long BgL_stopz00_35)
	{
		{	/* Rgc/rgc.scm 337 */
			return
				rgc_buffer_downcase_subsymbol(BgL_inputzd2portzd2_33, BgL_startz00_34,
				BgL_stopz00_35);
		}

	}



/* &rgc-buffer-downcase-subsymbol */
	obj_t BGl_z62rgczd2bufferzd2downcasezd2subsymbolzb0zz__rgcz00(obj_t
		BgL_envz00_1949, obj_t BgL_inputzd2portzd2_1950, obj_t BgL_startz00_1951,
		obj_t BgL_stopz00_1952)
	{
		{	/* Rgc/rgc.scm 337 */
			{	/* Rgc/rgc.scm 338 */
				long BgL_auxz00_2436;
				long BgL_auxz00_2427;
				obj_t BgL_auxz00_2420;

				{	/* Rgc/rgc.scm 338 */
					obj_t BgL_tmpz00_2437;

					if (INTEGERP(BgL_stopz00_1952))
						{	/* Rgc/rgc.scm 338 */
							BgL_tmpz00_2437 = BgL_stopz00_1952;
						}
					else
						{
							obj_t BgL_auxz00_2440;

							BgL_auxz00_2440 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 16651)), BGl_string1783z00zz__rgcz00,
								BGl_string1766z00zz__rgcz00, BgL_stopz00_1952);
							FAILURE(BgL_auxz00_2440, BFALSE, BFALSE);
						}
					BgL_auxz00_2436 = (long) CINT(BgL_tmpz00_2437);
				}
				{	/* Rgc/rgc.scm 338 */
					obj_t BgL_tmpz00_2428;

					if (INTEGERP(BgL_startz00_1951))
						{	/* Rgc/rgc.scm 338 */
							BgL_tmpz00_2428 = BgL_startz00_1951;
						}
					else
						{
							obj_t BgL_auxz00_2431;

							BgL_auxz00_2431 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 16651)), BGl_string1783z00zz__rgcz00,
								BGl_string1766z00zz__rgcz00, BgL_startz00_1951);
							FAILURE(BgL_auxz00_2431, BFALSE, BFALSE);
						}
					BgL_auxz00_2427 = (long) CINT(BgL_tmpz00_2428);
				}
				if (INPUT_PORTP(BgL_inputzd2portzd2_1950))
					{	/* Rgc/rgc.scm 338 */
						BgL_auxz00_2420 = BgL_inputzd2portzd2_1950;
					}
				else
					{
						obj_t BgL_auxz00_2423;

						BgL_auxz00_2423 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
							BINT(((long) 16651)), BGl_string1783z00zz__rgcz00,
							BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1950);
						FAILURE(BgL_auxz00_2423, BFALSE, BFALSE);
					}
				return
					BGl_rgczd2bufferzd2downcasezd2subsymbolzd2zz__rgcz00(BgL_auxz00_2420,
					BgL_auxz00_2427, BgL_auxz00_2436);
			}
		}

	}



/* rgc-buffer-upcase-symbol */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2bufferzd2upcasezd2symbolzd2zz__rgcz00(obj_t
		BgL_inputzd2portzd2_36)
	{
		{	/* Rgc/rgc.scm 343 */
			{	/* Rgc/rgc.scm 344 */
				long BgL_arg1201z00_2122;

				{	/* Rgc/rgc.scm 344 */
					long BgL_res1569z00_2123;

					BgL_res1569z00_2123 = RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_36);
					BgL_arg1201z00_2122 = BgL_res1569z00_2123;
				}
				return
					rgc_buffer_upcase_subsymbol(BgL_inputzd2portzd2_36, ((long) 0),
					BgL_arg1201z00_2122);
		}}

	}



/* &rgc-buffer-upcase-symbol */
	obj_t BGl_z62rgczd2bufferzd2upcasezd2symbolzb0zz__rgcz00(obj_t
		BgL_envz00_1953, obj_t BgL_inputzd2portzd2_1954)
	{
		{	/* Rgc/rgc.scm 343 */
			{	/* Rgc/rgc.scm 344 */
				obj_t BgL_auxz00_2448;

				if (INPUT_PORTP(BgL_inputzd2portzd2_1954))
					{	/* Rgc/rgc.scm 344 */
						BgL_auxz00_2448 = BgL_inputzd2portzd2_1954;
					}
				else
					{
						obj_t BgL_auxz00_2451;

						BgL_auxz00_2451 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
							BINT(((long) 17049)), BGl_string1784z00zz__rgcz00,
							BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1954);
						FAILURE(BgL_auxz00_2451, BFALSE, BFALSE);
					}
				return BGl_rgczd2bufferzd2upcasezd2symbolzd2zz__rgcz00(BgL_auxz00_2448);
			}
		}

	}



/* rgc-buffer-upcase-subsymbol */
	BGL_EXPORTED_DEF obj_t
		BGl_rgczd2bufferzd2upcasezd2subsymbolzd2zz__rgcz00(obj_t
		BgL_inputzd2portzd2_37, long BgL_startz00_38, long BgL_stopz00_39)
	{
		{	/* Rgc/rgc.scm 349 */
			return
				rgc_buffer_upcase_subsymbol(BgL_inputzd2portzd2_37, BgL_startz00_38,
				BgL_stopz00_39);
		}

	}



/* &rgc-buffer-upcase-subsymbol */
	obj_t BGl_z62rgczd2bufferzd2upcasezd2subsymbolzb0zz__rgcz00(obj_t
		BgL_envz00_1955, obj_t BgL_inputzd2portzd2_1956, obj_t BgL_startz00_1957,
		obj_t BgL_stopz00_1958)
	{
		{	/* Rgc/rgc.scm 349 */
			{	/* Rgc/rgc.scm 350 */
				long BgL_auxz00_2473;
				long BgL_auxz00_2464;
				obj_t BgL_auxz00_2457;

				{	/* Rgc/rgc.scm 350 */
					obj_t BgL_tmpz00_2474;

					if (INTEGERP(BgL_stopz00_1958))
						{	/* Rgc/rgc.scm 350 */
							BgL_tmpz00_2474 = BgL_stopz00_1958;
						}
					else
						{
							obj_t BgL_auxz00_2477;

							BgL_auxz00_2477 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 17387)), BGl_string1785z00zz__rgcz00,
								BGl_string1766z00zz__rgcz00, BgL_stopz00_1958);
							FAILURE(BgL_auxz00_2477, BFALSE, BFALSE);
						}
					BgL_auxz00_2473 = (long) CINT(BgL_tmpz00_2474);
				}
				{	/* Rgc/rgc.scm 350 */
					obj_t BgL_tmpz00_2465;

					if (INTEGERP(BgL_startz00_1957))
						{	/* Rgc/rgc.scm 350 */
							BgL_tmpz00_2465 = BgL_startz00_1957;
						}
					else
						{
							obj_t BgL_auxz00_2468;

							BgL_auxz00_2468 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 17387)), BGl_string1785z00zz__rgcz00,
								BGl_string1766z00zz__rgcz00, BgL_startz00_1957);
							FAILURE(BgL_auxz00_2468, BFALSE, BFALSE);
						}
					BgL_auxz00_2464 = (long) CINT(BgL_tmpz00_2465);
				}
				if (INPUT_PORTP(BgL_inputzd2portzd2_1956))
					{	/* Rgc/rgc.scm 350 */
						BgL_auxz00_2457 = BgL_inputzd2portzd2_1956;
					}
				else
					{
						obj_t BgL_auxz00_2460;

						BgL_auxz00_2460 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
							BINT(((long) 17387)), BGl_string1785z00zz__rgcz00,
							BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1956);
						FAILURE(BgL_auxz00_2460, BFALSE, BFALSE);
					}
				return
					BGl_rgczd2bufferzd2upcasezd2subsymbolzd2zz__rgcz00(BgL_auxz00_2457,
					BgL_auxz00_2464, BgL_auxz00_2473);
			}
		}

	}



/* rgc-buffer-keyword */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2bufferzd2keywordz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_40)
	{
		{	/* Rgc/rgc.scm 355 */
			return rgc_buffer_keyword(BgL_inputzd2portzd2_40);
		}

	}



/* &rgc-buffer-keyword */
	obj_t BGl_z62rgczd2bufferzd2keywordz62zz__rgcz00(obj_t BgL_envz00_1959,
		obj_t BgL_inputzd2portzd2_1960)
	{
		{	/* Rgc/rgc.scm 355 */
			{	/* Rgc/rgc.scm 356 */
				obj_t BgL_auxz00_2484;

				if (INPUT_PORTP(BgL_inputzd2portzd2_1960))
					{	/* Rgc/rgc.scm 356 */
						BgL_auxz00_2484 = BgL_inputzd2portzd2_1960;
					}
				else
					{
						obj_t BgL_auxz00_2487;

						BgL_auxz00_2487 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
							BINT(((long) 17735)), BGl_string1786z00zz__rgcz00,
							BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1960);
						FAILURE(BgL_auxz00_2487, BFALSE, BFALSE);
					}
				return BGl_rgczd2bufferzd2keywordz00zz__rgcz00(BgL_auxz00_2484);
			}
		}

	}



/* rgc-buffer-downcase-keyword */
	BGL_EXPORTED_DEF obj_t
		BGl_rgczd2bufferzd2downcasezd2keywordzd2zz__rgcz00(obj_t
		BgL_inputzd2portzd2_41)
	{
		{	/* Rgc/rgc.scm 361 */
			return rgc_buffer_downcase_keyword(BgL_inputzd2portzd2_41);
		}

	}



/* &rgc-buffer-downcase-keyword */
	obj_t BGl_z62rgczd2bufferzd2downcasezd2keywordzb0zz__rgcz00(obj_t
		BgL_envz00_1961, obj_t BgL_inputzd2portzd2_1962)
	{
		{	/* Rgc/rgc.scm 361 */
			{	/* Rgc/rgc.scm 362 */
				obj_t BgL_auxz00_2493;

				if (INPUT_PORTP(BgL_inputzd2portzd2_1962))
					{	/* Rgc/rgc.scm 362 */
						BgL_auxz00_2493 = BgL_inputzd2portzd2_1962;
					}
				else
					{
						obj_t BgL_auxz00_2496;

						BgL_auxz00_2496 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
							BINT(((long) 18072)), BGl_string1787z00zz__rgcz00,
							BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1962);
						FAILURE(BgL_auxz00_2496, BFALSE, BFALSE);
					}
				return
					BGl_rgczd2bufferzd2downcasezd2keywordzd2zz__rgcz00(BgL_auxz00_2493);
			}
		}

	}



/* rgc-buffer-upcase-keyword */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2bufferzd2upcasezd2keywordzd2zz__rgcz00(obj_t
		BgL_inputzd2portzd2_42)
	{
		{	/* Rgc/rgc.scm 367 */
			return rgc_buffer_upcase_keyword(BgL_inputzd2portzd2_42);
		}

	}



/* &rgc-buffer-upcase-keyword */
	obj_t BGl_z62rgczd2bufferzd2upcasezd2keywordzb0zz__rgcz00(obj_t
		BgL_envz00_1963, obj_t BgL_inputzd2portzd2_1964)
	{
		{	/* Rgc/rgc.scm 367 */
			{	/* Rgc/rgc.scm 368 */
				obj_t BgL_auxz00_2502;

				if (INPUT_PORTP(BgL_inputzd2portzd2_1964))
					{	/* Rgc/rgc.scm 368 */
						BgL_auxz00_2502 = BgL_inputzd2portzd2_1964;
					}
				else
					{
						obj_t BgL_auxz00_2505;

						BgL_auxz00_2505 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
							BINT(((long) 18416)), BGl_string1788z00zz__rgcz00,
							BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1964);
						FAILURE(BgL_auxz00_2505, BFALSE, BFALSE);
					}
				return
					BGl_rgczd2bufferzd2upcasezd2keywordzd2zz__rgcz00(BgL_auxz00_2502);
			}
		}

	}



/* rgc-buffer-position */
	BGL_EXPORTED_DEF long BGl_rgczd2bufferzd2positionz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_43, long BgL_forwardz00_44)
	{
		{	/* Rgc/rgc.scm 373 */
			return RGC_BUFFER_POSITION(BgL_inputzd2portzd2_43, BgL_forwardz00_44);
		}

	}



/* &rgc-buffer-position */
	obj_t BGl_z62rgczd2bufferzd2positionz62zz__rgcz00(obj_t BgL_envz00_1965,
		obj_t BgL_inputzd2portzd2_1966, obj_t BgL_forwardz00_1967)
	{
		{	/* Rgc/rgc.scm 373 */
			{	/* Rgc/rgc.scm 374 */
				long BgL_tmpz00_2511;

				{	/* Rgc/rgc.scm 374 */
					long BgL_auxz00_2519;
					obj_t BgL_auxz00_2512;

					{	/* Rgc/rgc.scm 374 */
						obj_t BgL_tmpz00_2520;

						if (INTEGERP(BgL_forwardz00_1967))
							{	/* Rgc/rgc.scm 374 */
								BgL_tmpz00_2520 = BgL_forwardz00_1967;
							}
						else
							{
								obj_t BgL_auxz00_2523;

								BgL_auxz00_2523 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
									BINT(((long) 18757)), BGl_string1789z00zz__rgcz00,
									BGl_string1766z00zz__rgcz00, BgL_forwardz00_1967);
								FAILURE(BgL_auxz00_2523, BFALSE, BFALSE);
							}
						BgL_auxz00_2519 = (long) CINT(BgL_tmpz00_2520);
					}
					if (INPUT_PORTP(BgL_inputzd2portzd2_1966))
						{	/* Rgc/rgc.scm 374 */
							BgL_auxz00_2512 = BgL_inputzd2portzd2_1966;
						}
					else
						{
							obj_t BgL_auxz00_2515;

							BgL_auxz00_2515 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 18757)), BGl_string1789z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1966);
							FAILURE(BgL_auxz00_2515, BFALSE, BFALSE);
						}
					BgL_tmpz00_2511 =
						BGl_rgczd2bufferzd2positionz00zz__rgcz00(BgL_auxz00_2512,
						BgL_auxz00_2519);
				}
				return BINT(BgL_tmpz00_2511);
			}
		}

	}



/* rgc-buffer-forward */
	BGL_EXPORTED_DEF long BGl_rgczd2bufferzd2forwardz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_45)
	{
		{	/* Rgc/rgc.scm 379 */
			return RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_45);
		}

	}



/* &rgc-buffer-forward */
	obj_t BGl_z62rgczd2bufferzd2forwardz62zz__rgcz00(obj_t BgL_envz00_1968,
		obj_t BgL_inputzd2portzd2_1969)
	{
		{	/* Rgc/rgc.scm 379 */
			{	/* Rgc/rgc.scm 380 */
				long BgL_tmpz00_2531;

				{	/* Rgc/rgc.scm 380 */
					obj_t BgL_auxz00_2532;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1969))
						{	/* Rgc/rgc.scm 380 */
							BgL_auxz00_2532 = BgL_inputzd2portzd2_1969;
						}
					else
						{
							obj_t BgL_auxz00_2535;

							BgL_auxz00_2535 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 19091)), BGl_string1790z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1969);
							FAILURE(BgL_auxz00_2535, BFALSE, BFALSE);
						}
					BgL_tmpz00_2531 =
						BGl_rgczd2bufferzd2forwardz00zz__rgcz00(BgL_auxz00_2532);
				}
				return BINT(BgL_tmpz00_2531);
			}
		}

	}



/* rgc-buffer-bufpos */
	BGL_EXPORTED_DEF long BGl_rgczd2bufferzd2bufposz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_46)
	{
		{	/* Rgc/rgc.scm 385 */
			return RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_46);
		}

	}



/* &rgc-buffer-bufpos */
	obj_t BGl_z62rgczd2bufferzd2bufposz62zz__rgcz00(obj_t BgL_envz00_1970,
		obj_t BgL_inputzd2portzd2_1971)
	{
		{	/* Rgc/rgc.scm 385 */
			{	/* Rgc/rgc.scm 386 */
				long BgL_tmpz00_2542;

				{	/* Rgc/rgc.scm 386 */
					obj_t BgL_auxz00_2543;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1971))
						{	/* Rgc/rgc.scm 386 */
							BgL_auxz00_2543 = BgL_inputzd2portzd2_1971;
						}
					else
						{
							obj_t BgL_auxz00_2546;

							BgL_auxz00_2546 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 19415)), BGl_string1791z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1971);
							FAILURE(BgL_auxz00_2546, BFALSE, BFALSE);
						}
					BgL_tmpz00_2542 =
						BGl_rgczd2bufferzd2bufposz00zz__rgcz00(BgL_auxz00_2543);
				}
				return BINT(BgL_tmpz00_2542);
			}
		}

	}



/* rgc-set-filepos! */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2setzd2fileposz12z12zz__rgcz00(obj_t
		BgL_inputzd2portzd2_47)
	{
		{	/* Rgc/rgc.scm 391 */
			return BINT(RGC_SET_FILEPOS(BgL_inputzd2portzd2_47));
		}

	}



/* &rgc-set-filepos! */
	obj_t BGl_z62rgczd2setzd2fileposz12z70zz__rgcz00(obj_t BgL_envz00_1972,
		obj_t BgL_inputzd2portzd2_1973)
	{
		{	/* Rgc/rgc.scm 391 */
			{	/* Rgc/rgc.scm 392 */
				obj_t BgL_auxz00_2554;

				if (INPUT_PORTP(BgL_inputzd2portzd2_1973))
					{	/* Rgc/rgc.scm 392 */
						BgL_auxz00_2554 = BgL_inputzd2portzd2_1973;
					}
				else
					{
						obj_t BgL_auxz00_2557;

						BgL_auxz00_2557 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
							BINT(((long) 19731)), BGl_string1792z00zz__rgcz00,
							BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1973);
						FAILURE(BgL_auxz00_2557, BFALSE, BFALSE);
					}
				return BGl_rgczd2setzd2fileposz12z12zz__rgcz00(BgL_auxz00_2554);
			}
		}

	}



/* rgc-start-match! */
	BGL_EXPORTED_DEF long BGl_rgczd2startzd2matchz12z12zz__rgcz00(obj_t
		BgL_inputzd2portzd2_48)
	{
		{	/* Rgc/rgc.scm 397 */
			return RGC_START_MATCH(BgL_inputzd2portzd2_48);
		}

	}



/* &rgc-start-match! */
	obj_t BGl_z62rgczd2startzd2matchz12z70zz__rgcz00(obj_t BgL_envz00_1974,
		obj_t BgL_inputzd2portzd2_1975)
	{
		{	/* Rgc/rgc.scm 397 */
			{	/* Rgc/rgc.scm 398 */
				long BgL_tmpz00_2563;

				{	/* Rgc/rgc.scm 398 */
					obj_t BgL_auxz00_2564;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1975))
						{	/* Rgc/rgc.scm 398 */
							BgL_auxz00_2564 = BgL_inputzd2portzd2_1975;
						}
					else
						{
							obj_t BgL_auxz00_2567;

							BgL_auxz00_2567 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 20034)), BGl_string1793z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1975);
							FAILURE(BgL_auxz00_2567, BFALSE, BFALSE);
						}
					BgL_tmpz00_2563 =
						BGl_rgczd2startzd2matchz12z12zz__rgcz00(BgL_auxz00_2564);
				}
				return BINT(BgL_tmpz00_2563);
			}
		}

	}



/* rgc-stop-match! */
	BGL_EXPORTED_DEF long BGl_rgczd2stopzd2matchz12z12zz__rgcz00(obj_t
		BgL_inputzd2portzd2_49, long BgL_forwardz00_50)
	{
		{	/* Rgc/rgc.scm 403 */
			return RGC_STOP_MATCH(BgL_inputzd2portzd2_49, BgL_forwardz00_50);
		}

	}



/* &rgc-stop-match! */
	obj_t BGl_z62rgczd2stopzd2matchz12z70zz__rgcz00(obj_t BgL_envz00_1976,
		obj_t BgL_inputzd2portzd2_1977, obj_t BgL_forwardz00_1978)
	{
		{	/* Rgc/rgc.scm 403 */
			{	/* Rgc/rgc.scm 404 */
				long BgL_tmpz00_2574;

				{	/* Rgc/rgc.scm 404 */
					long BgL_auxz00_2582;
					obj_t BgL_auxz00_2575;

					{	/* Rgc/rgc.scm 404 */
						obj_t BgL_tmpz00_2583;

						if (INTEGERP(BgL_forwardz00_1978))
							{	/* Rgc/rgc.scm 404 */
								BgL_tmpz00_2583 = BgL_forwardz00_1978;
							}
						else
							{
								obj_t BgL_auxz00_2586;

								BgL_auxz00_2586 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
									BINT(((long) 20344)), BGl_string1794z00zz__rgcz00,
									BGl_string1766z00zz__rgcz00, BgL_forwardz00_1978);
								FAILURE(BgL_auxz00_2586, BFALSE, BFALSE);
							}
						BgL_auxz00_2582 = (long) CINT(BgL_tmpz00_2583);
					}
					if (INPUT_PORTP(BgL_inputzd2portzd2_1977))
						{	/* Rgc/rgc.scm 404 */
							BgL_auxz00_2575 = BgL_inputzd2portzd2_1977;
						}
					else
						{
							obj_t BgL_auxz00_2578;

							BgL_auxz00_2578 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 20344)), BGl_string1794z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1977);
							FAILURE(BgL_auxz00_2578, BFALSE, BFALSE);
						}
					BgL_tmpz00_2574 =
						BGl_rgczd2stopzd2matchz12z12zz__rgcz00(BgL_auxz00_2575,
						BgL_auxz00_2582);
				}
				return BINT(BgL_tmpz00_2574);
			}
		}

	}



/* rgc-fill-buffer */
	BGL_EXPORTED_DEF bool_t BGl_rgczd2fillzd2bufferz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_51)
	{
		{	/* Rgc/rgc.scm 409 */
			return rgc_fill_buffer(BgL_inputzd2portzd2_51);
		}

	}



/* &rgc-fill-buffer */
	obj_t BGl_z62rgczd2fillzd2bufferz62zz__rgcz00(obj_t BgL_envz00_1979,
		obj_t BgL_inputzd2portzd2_1980)
	{
		{	/* Rgc/rgc.scm 409 */
			{	/* Rgc/rgc.scm 410 */
				bool_t BgL_tmpz00_2594;

				{	/* Rgc/rgc.scm 410 */
					obj_t BgL_auxz00_2595;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1980))
						{	/* Rgc/rgc.scm 410 */
							BgL_auxz00_2595 = BgL_inputzd2portzd2_1980;
						}
					else
						{
							obj_t BgL_auxz00_2598;

							BgL_auxz00_2598 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 20671)), BGl_string1795z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1980);
							FAILURE(BgL_auxz00_2598, BFALSE, BFALSE);
						}
					BgL_tmpz00_2594 =
						BGl_rgczd2fillzd2bufferz00zz__rgcz00(BgL_auxz00_2595);
				}
				return BBOOL(BgL_tmpz00_2594);
			}
		}

	}



/* rgc-buffer-bol? */
	BGL_EXPORTED_DEF bool_t BGl_rgczd2bufferzd2bolzf3zf3zz__rgcz00(obj_t
		BgL_inputzd2portzd2_52)
	{
		{	/* Rgc/rgc.scm 415 */
			return rgc_buffer_bol_p(BgL_inputzd2portzd2_52);
		}

	}



/* &rgc-buffer-bol? */
	obj_t BGl_z62rgczd2bufferzd2bolzf3z91zz__rgcz00(obj_t BgL_envz00_1981,
		obj_t BgL_inputzd2portzd2_1982)
	{
		{	/* Rgc/rgc.scm 415 */
			{	/* Rgc/rgc.scm 416 */
				bool_t BgL_tmpz00_2605;

				{	/* Rgc/rgc.scm 416 */
					obj_t BgL_auxz00_2606;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1982))
						{	/* Rgc/rgc.scm 416 */
							BgL_auxz00_2606 = BgL_inputzd2portzd2_1982;
						}
					else
						{
							obj_t BgL_auxz00_2609;

							BgL_auxz00_2609 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 20990)), BGl_string1796z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1982);
							FAILURE(BgL_auxz00_2609, BFALSE, BFALSE);
						}
					BgL_tmpz00_2605 =
						BGl_rgczd2bufferzd2bolzf3zf3zz__rgcz00(BgL_auxz00_2606);
				}
				return BBOOL(BgL_tmpz00_2605);
			}
		}

	}



/* rgc-buffer-eol? */
	BGL_EXPORTED_DEF bool_t BGl_rgczd2bufferzd2eolzf3zf3zz__rgcz00(obj_t
		BgL_inputzd2portzd2_53, long BgL_forwardz00_54, long BgL_bufposz00_55)
	{
		{	/* Rgc/rgc.scm 421 */
			return
				rgc_buffer_eol_p(BgL_inputzd2portzd2_53, BgL_forwardz00_54,
				BgL_bufposz00_55);
		}

	}



/* &rgc-buffer-eol? */
	obj_t BGl_z62rgczd2bufferzd2eolzf3z91zz__rgcz00(obj_t BgL_envz00_1983,
		obj_t BgL_inputzd2portzd2_1984, obj_t BgL_forwardz00_1985,
		obj_t BgL_bufposz00_1986)
	{
		{	/* Rgc/rgc.scm 421 */
			{	/* Rgc/rgc.scm 422 */
				bool_t BgL_tmpz00_2616;

				{	/* Rgc/rgc.scm 422 */
					long BgL_auxz00_2633;
					long BgL_auxz00_2624;
					obj_t BgL_auxz00_2617;

					{	/* Rgc/rgc.scm 422 */
						obj_t BgL_tmpz00_2634;

						if (INTEGERP(BgL_bufposz00_1986))
							{	/* Rgc/rgc.scm 422 */
								BgL_tmpz00_2634 = BgL_bufposz00_1986;
							}
						else
							{
								obj_t BgL_auxz00_2637;

								BgL_auxz00_2637 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
									BINT(((long) 21324)), BGl_string1797z00zz__rgcz00,
									BGl_string1766z00zz__rgcz00, BgL_bufposz00_1986);
								FAILURE(BgL_auxz00_2637, BFALSE, BFALSE);
							}
						BgL_auxz00_2633 = (long) CINT(BgL_tmpz00_2634);
					}
					{	/* Rgc/rgc.scm 422 */
						obj_t BgL_tmpz00_2625;

						if (INTEGERP(BgL_forwardz00_1985))
							{	/* Rgc/rgc.scm 422 */
								BgL_tmpz00_2625 = BgL_forwardz00_1985;
							}
						else
							{
								obj_t BgL_auxz00_2628;

								BgL_auxz00_2628 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
									BINT(((long) 21324)), BGl_string1797z00zz__rgcz00,
									BGl_string1766z00zz__rgcz00, BgL_forwardz00_1985);
								FAILURE(BgL_auxz00_2628, BFALSE, BFALSE);
							}
						BgL_auxz00_2624 = (long) CINT(BgL_tmpz00_2625);
					}
					if (INPUT_PORTP(BgL_inputzd2portzd2_1984))
						{	/* Rgc/rgc.scm 422 */
							BgL_auxz00_2617 = BgL_inputzd2portzd2_1984;
						}
					else
						{
							obj_t BgL_auxz00_2620;

							BgL_auxz00_2620 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 21324)), BGl_string1797z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1984);
							FAILURE(BgL_auxz00_2620, BFALSE, BFALSE);
						}
					BgL_tmpz00_2616 =
						BGl_rgczd2bufferzd2eolzf3zf3zz__rgcz00(BgL_auxz00_2617,
						BgL_auxz00_2624, BgL_auxz00_2633);
				}
				return BBOOL(BgL_tmpz00_2616);
			}
		}

	}



/* rgc-buffer-bof? */
	BGL_EXPORTED_DEF bool_t BGl_rgczd2bufferzd2bofzf3zf3zz__rgcz00(obj_t
		BgL_inputzd2portzd2_56)
	{
		{	/* Rgc/rgc.scm 427 */
			return rgc_buffer_bof_p(BgL_inputzd2portzd2_56);
		}

	}



/* &rgc-buffer-bof? */
	obj_t BGl_z62rgczd2bufferzd2bofzf3z91zz__rgcz00(obj_t BgL_envz00_1987,
		obj_t BgL_inputzd2portzd2_1988)
	{
		{	/* Rgc/rgc.scm 427 */
			{	/* Rgc/rgc.scm 428 */
				bool_t BgL_tmpz00_2645;

				{	/* Rgc/rgc.scm 428 */
					obj_t BgL_auxz00_2646;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1988))
						{	/* Rgc/rgc.scm 428 */
							BgL_auxz00_2646 = BgL_inputzd2portzd2_1988;
						}
					else
						{
							obj_t BgL_auxz00_2649;

							BgL_auxz00_2649 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 21658)), BGl_string1798z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1988);
							FAILURE(BgL_auxz00_2649, BFALSE, BFALSE);
						}
					BgL_tmpz00_2645 =
						BGl_rgczd2bufferzd2bofzf3zf3zz__rgcz00(BgL_auxz00_2646);
				}
				return BBOOL(BgL_tmpz00_2645);
			}
		}

	}



/* rgc-buffer-eof? */
	BGL_EXPORTED_DEF bool_t BGl_rgczd2bufferzd2eofzf3zf3zz__rgcz00(obj_t
		BgL_inputzd2portzd2_57)
	{
		{	/* Rgc/rgc.scm 433 */
			return rgc_buffer_eof_p(BgL_inputzd2portzd2_57);
		}

	}



/* &rgc-buffer-eof? */
	obj_t BGl_z62rgczd2bufferzd2eofzf3z91zz__rgcz00(obj_t BgL_envz00_1989,
		obj_t BgL_inputzd2portzd2_1990)
	{
		{	/* Rgc/rgc.scm 433 */
			{	/* Rgc/rgc.scm 434 */
				bool_t BgL_tmpz00_2656;

				{	/* Rgc/rgc.scm 434 */
					obj_t BgL_auxz00_2657;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1990))
						{	/* Rgc/rgc.scm 434 */
							BgL_auxz00_2657 = BgL_inputzd2portzd2_1990;
						}
					else
						{
							obj_t BgL_auxz00_2660;

							BgL_auxz00_2660 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 21977)), BGl_string1799z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1990);
							FAILURE(BgL_auxz00_2660, BFALSE, BFALSE);
						}
					BgL_tmpz00_2656 =
						BGl_rgczd2bufferzd2eofzf3zf3zz__rgcz00(BgL_auxz00_2657);
				}
				return BBOOL(BgL_tmpz00_2656);
			}
		}

	}



/* rgc-buffer-eof2? */
	BGL_EXPORTED_DEF bool_t BGl_rgczd2bufferzd2eof2zf3zf3zz__rgcz00(obj_t
		BgL_inputzd2portzd2_58, long BgL_forwardz00_59, long BgL_bufposz00_60)
	{
		{	/* Rgc/rgc.scm 439 */
			return
				rgc_buffer_eof2_p(BgL_inputzd2portzd2_58, BgL_forwardz00_59,
				BgL_bufposz00_60);
		}

	}



/* &rgc-buffer-eof2? */
	obj_t BGl_z62rgczd2bufferzd2eof2zf3z91zz__rgcz00(obj_t BgL_envz00_1991,
		obj_t BgL_inputzd2portzd2_1992, obj_t BgL_forwardz00_1993,
		obj_t BgL_bufposz00_1994)
	{
		{	/* Rgc/rgc.scm 439 */
			{	/* Rgc/rgc.scm 440 */
				bool_t BgL_tmpz00_2667;

				{	/* Rgc/rgc.scm 440 */
					long BgL_auxz00_2684;
					long BgL_auxz00_2675;
					obj_t BgL_auxz00_2668;

					{	/* Rgc/rgc.scm 440 */
						obj_t BgL_tmpz00_2685;

						if (INTEGERP(BgL_bufposz00_1994))
							{	/* Rgc/rgc.scm 440 */
								BgL_tmpz00_2685 = BgL_bufposz00_1994;
							}
						else
							{
								obj_t BgL_auxz00_2688;

								BgL_auxz00_2688 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
									BINT(((long) 22312)), BGl_string1800z00zz__rgcz00,
									BGl_string1766z00zz__rgcz00, BgL_bufposz00_1994);
								FAILURE(BgL_auxz00_2688, BFALSE, BFALSE);
							}
						BgL_auxz00_2684 = (long) CINT(BgL_tmpz00_2685);
					}
					{	/* Rgc/rgc.scm 440 */
						obj_t BgL_tmpz00_2676;

						if (INTEGERP(BgL_forwardz00_1993))
							{	/* Rgc/rgc.scm 440 */
								BgL_tmpz00_2676 = BgL_forwardz00_1993;
							}
						else
							{
								obj_t BgL_auxz00_2679;

								BgL_auxz00_2679 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
									BINT(((long) 22312)), BGl_string1800z00zz__rgcz00,
									BGl_string1766z00zz__rgcz00, BgL_forwardz00_1993);
								FAILURE(BgL_auxz00_2679, BFALSE, BFALSE);
							}
						BgL_auxz00_2675 = (long) CINT(BgL_tmpz00_2676);
					}
					if (INPUT_PORTP(BgL_inputzd2portzd2_1992))
						{	/* Rgc/rgc.scm 440 */
							BgL_auxz00_2668 = BgL_inputzd2portzd2_1992;
						}
					else
						{
							obj_t BgL_auxz00_2671;

							BgL_auxz00_2671 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 22312)), BGl_string1800z00zz__rgcz00,
								BGl_string1765z00zz__rgcz00, BgL_inputzd2portzd2_1992);
							FAILURE(BgL_auxz00_2671, BFALSE, BFALSE);
						}
					BgL_tmpz00_2667 =
						BGl_rgczd2bufferzd2eof2zf3zf3zz__rgcz00(BgL_auxz00_2668,
						BgL_auxz00_2675, BgL_auxz00_2684);
				}
				return BBOOL(BgL_tmpz00_2667);
			}
		}

	}



/* rgc-the-submatch */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2thezd2submatchz00zz__rgcz00(obj_t
		BgL_rgczd2submatcheszd2_61, long BgL_posz00_62, long BgL_matchz00_63,
		long BgL_submatchz00_64)
	{
		{	/* Rgc/rgc.scm 449 */
			{
				obj_t BgL_submatchesz00_1127;
				long BgL_startz00_1128;
				obj_t BgL_stopz00_1129;

				BgL_submatchesz00_1127 = BgL_rgczd2submatcheszd2_61;
				BgL_startz00_1128 = ((long) -1);
				BgL_stopz00_1129 = BINT(((long) -1));
			BgL_zc3z04anonymousza31202ze3z87_1130:
				if (NULLP(BgL_submatchesz00_1127))
					{	/* Rgc/rgc.scm 458 */
						{	/* Rgc/rgc.scm 459 */
							int BgL_res1571z00_1582;

							{	/* Rgc/rgc.scm 459 */
								int BgL_tmpz00_2697;

								BgL_tmpz00_2697 = (int) (((long) 2));
								BgL_res1571z00_1582 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2697);
							} BgL_res1571z00_1582;
						}
						{	/* Rgc/rgc.scm 459 */
							int BgL_tmpz00_2700;

							BgL_tmpz00_2700 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_2700, BgL_stopz00_1129);
						}
						return BINT(BgL_startz00_1128);
					}
				else
					{	/* Rgc/rgc.scm 460 */
						obj_t BgL_mvz00_1134;

						BgL_mvz00_1134 = CAR(((obj_t) BgL_submatchesz00_1127));
						{	/* Rgc/rgc.scm 460 */
							obj_t BgL_ruz00_1135;

							BgL_ruz00_1135 = VECTOR_REF(((obj_t) BgL_mvz00_1134), ((long) 0));
							{	/* Rgc/rgc.scm 461 */
								obj_t BgL_smz00_1136;

								BgL_smz00_1136 =
									VECTOR_REF(((obj_t) BgL_mvz00_1134), ((long) 1));
								{	/* Rgc/rgc.scm 462 */
									obj_t BgL_spz00_1137;

									BgL_spz00_1137 =
										VECTOR_REF(((obj_t) BgL_mvz00_1134), ((long) 2));
									{	/* Rgc/rgc.scm 463 */
										obj_t BgL_whatz00_1138;

										BgL_whatz00_1138 =
											VECTOR_REF(((obj_t) BgL_mvz00_1134), ((long) 3));
										{	/* Rgc/rgc.scm 464 */

											{	/* Rgc/rgc.scm 466 */
												bool_t BgL_test1946z00_2714;

												if (((long) CINT(BgL_ruz00_1135) == BgL_matchz00_63))
													{	/* Rgc/rgc.scm 466 */
														if (
															((long) CINT(BgL_smz00_1136) ==
																BgL_submatchz00_64))
															{	/* Rgc/rgc.scm 466 */
																BgL_test1946z00_2714 =
																	(
																	(long) CINT(BgL_spz00_1137) <= BgL_posz00_62);
															}
														else
															{	/* Rgc/rgc.scm 466 */
																BgL_test1946z00_2714 = ((bool_t) 0);
															}
													}
												else
													{	/* Rgc/rgc.scm 466 */
														BgL_test1946z00_2714 = ((bool_t) 0);
													}
												if (BgL_test1946z00_2714)
													{	/* Rgc/rgc.scm 466 */
														if (
															(BgL_whatz00_1138 == BGl_symbol1801z00zz__rgcz00))
															{	/* Rgc/rgc.scm 467 */
																if (
																	((long) CINT(BgL_stopz00_1129) < ((long) 0)))
																	{	/* Rgc/rgc.scm 470 */
																		obj_t BgL_arg1211z00_1145;

																		BgL_arg1211z00_1145 =
																			CDR(((obj_t) BgL_submatchesz00_1127));
																		{
																			obj_t BgL_stopz00_2731;
																			obj_t BgL_submatchesz00_2730;

																			BgL_submatchesz00_2730 =
																				BgL_arg1211z00_1145;
																			BgL_stopz00_2731 = BgL_spz00_1137;
																			BgL_stopz00_1129 = BgL_stopz00_2731;
																			BgL_submatchesz00_1127 =
																				BgL_submatchesz00_2730;
																			goto
																				BgL_zc3z04anonymousza31202ze3z87_1130;
																		}
																	}
																else
																	{	/* Rgc/rgc.scm 471 */
																		obj_t BgL_arg1216z00_1146;

																		BgL_arg1216z00_1146 =
																			CDR(((obj_t) BgL_submatchesz00_1127));
																		{
																			obj_t BgL_submatchesz00_2734;

																			BgL_submatchesz00_2734 =
																				BgL_arg1216z00_1146;
																			BgL_submatchesz00_1127 =
																				BgL_submatchesz00_2734;
																			goto
																				BgL_zc3z04anonymousza31202ze3z87_1130;
																		}
																	}
															}
														else
															{	/* Rgc/rgc.scm 467 */
																if (
																	(BgL_whatz00_1138 ==
																		BGl_symbol1803z00zz__rgcz00))
																	{	/* Rgc/rgc.scm 473 */
																		long BgL_val0_1086z00_1148;

																		BgL_val0_1086z00_1148 =
																			(
																			(long) CINT(BgL_spz00_1137) - ((long) 1));
																		{	/* Rgc/rgc.scm 473 */
																			int BgL_res1579z00_1607;

																			{	/* Rgc/rgc.scm 473 */
																				int BgL_tmpz00_2739;

																				BgL_tmpz00_2739 = (int) (((long) 2));
																				BgL_res1579z00_1607 =
																					BGL_MVALUES_NUMBER_SET
																					(BgL_tmpz00_2739);
																			} BgL_res1579z00_1607;
																		}
																		{	/* Rgc/rgc.scm 473 */
																			int BgL_tmpz00_2742;

																			BgL_tmpz00_2742 = (int) (((long) 1));
																			BGL_MVALUES_VAL_SET(BgL_tmpz00_2742,
																				BgL_stopz00_1129);
																		}
																		return BINT(BgL_val0_1086z00_1148);
																	}
																else
																	{	/* Rgc/rgc.scm 467 */
																		if (
																			(BgL_whatz00_1138 ==
																				BGl_symbol1805z00zz__rgcz00))
																			{	/* Rgc/rgc.scm 475 */
																				obj_t BgL_arg1221z00_1151;
																				long BgL_arg1223z00_1152;

																				BgL_arg1221z00_1151 =
																					CDR(((obj_t) BgL_submatchesz00_1127));
																				BgL_arg1223z00_1152 =
																					(
																					(long) CINT(BgL_spz00_1137) -
																					((long) 1));
																				{
																					long BgL_startz00_2753;
																					obj_t BgL_submatchesz00_2752;

																					BgL_submatchesz00_2752 =
																						BgL_arg1221z00_1151;
																					BgL_startz00_2753 =
																						BgL_arg1223z00_1152;
																					BgL_startz00_1128 = BgL_startz00_2753;
																					BgL_submatchesz00_1127 =
																						BgL_submatchesz00_2752;
																					goto
																						BgL_zc3z04anonymousza31202ze3z87_1130;
																				}
																			}
																		else
																			{	/* Rgc/rgc.scm 467 */
																				return BUNSPEC;
																			}
																	}
															}
													}
												else
													{	/* Rgc/rgc.scm 466 */
														if ((BgL_whatz00_1138 == BgL_stopz00_1129))
															{	/* Rgc/rgc.scm 476 */
																{	/* Rgc/rgc.scm 477 */
																	int BgL_res1582z00_1613;

																	{	/* Rgc/rgc.scm 477 */
																		int BgL_tmpz00_2756;

																		BgL_tmpz00_2756 = (int) (((long) 2));
																		BgL_res1582z00_1613 =
																			BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2756);
																	} BgL_res1582z00_1613;
																}
																{	/* Rgc/rgc.scm 477 */
																	int BgL_tmpz00_2759;

																	BgL_tmpz00_2759 = (int) (((long) 1));
																	BGL_MVALUES_VAL_SET(BgL_tmpz00_2759,
																		BgL_stopz00_1129);
																}
																return BINT(BgL_startz00_1128);
															}
														else
															{	/* Rgc/rgc.scm 479 */
																obj_t BgL_arg1225z00_1156;

																BgL_arg1225z00_1156 =
																	CDR(((obj_t) BgL_submatchesz00_1127));
																{
																	obj_t BgL_submatchesz00_2765;

																	BgL_submatchesz00_2765 = BgL_arg1225z00_1156;
																	BgL_submatchesz00_1127 =
																		BgL_submatchesz00_2765;
																	goto BgL_zc3z04anonymousza31202ze3z87_1130;
																}
															}
													}
											}
										}
									}
								}
							}
						}
					}
			}
		}

	}



/* &rgc-the-submatch */
	obj_t BGl_z62rgczd2thezd2submatchz62zz__rgcz00(obj_t BgL_envz00_1995,
		obj_t BgL_rgczd2submatcheszd2_1996, obj_t BgL_posz00_1997,
		obj_t BgL_matchz00_1998, obj_t BgL_submatchz00_1999)
	{
		{	/* Rgc/rgc.scm 449 */
			{	/* Rgc/rgc.scm 458 */
				long BgL_auxz00_2785;
				long BgL_auxz00_2776;
				long BgL_auxz00_2767;

				{	/* Rgc/rgc.scm 458 */
					obj_t BgL_tmpz00_2786;

					if (INTEGERP(BgL_submatchz00_1999))
						{	/* Rgc/rgc.scm 458 */
							BgL_tmpz00_2786 = BgL_submatchz00_1999;
						}
					else
						{
							obj_t BgL_auxz00_2789;

							BgL_auxz00_2789 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 23377)), BGl_string1807z00zz__rgcz00,
								BGl_string1766z00zz__rgcz00, BgL_submatchz00_1999);
							FAILURE(BgL_auxz00_2789, BFALSE, BFALSE);
						}
					BgL_auxz00_2785 = (long) CINT(BgL_tmpz00_2786);
				}
				{	/* Rgc/rgc.scm 458 */
					obj_t BgL_tmpz00_2777;

					if (INTEGERP(BgL_matchz00_1998))
						{	/* Rgc/rgc.scm 458 */
							BgL_tmpz00_2777 = BgL_matchz00_1998;
						}
					else
						{
							obj_t BgL_auxz00_2780;

							BgL_auxz00_2780 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 23377)), BGl_string1807z00zz__rgcz00,
								BGl_string1766z00zz__rgcz00, BgL_matchz00_1998);
							FAILURE(BgL_auxz00_2780, BFALSE, BFALSE);
						}
					BgL_auxz00_2776 = (long) CINT(BgL_tmpz00_2777);
				}
				{	/* Rgc/rgc.scm 458 */
					obj_t BgL_tmpz00_2768;

					if (INTEGERP(BgL_posz00_1997))
						{	/* Rgc/rgc.scm 458 */
							BgL_tmpz00_2768 = BgL_posz00_1997;
						}
					else
						{
							obj_t BgL_auxz00_2771;

							BgL_auxz00_2771 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1763z00zz__rgcz00,
								BINT(((long) 23377)), BGl_string1807z00zz__rgcz00,
								BGl_string1766z00zz__rgcz00, BgL_posz00_1997);
							FAILURE(BgL_auxz00_2771, BFALSE, BFALSE);
						}
					BgL_auxz00_2767 = (long) CINT(BgL_tmpz00_2768);
				}
				return
					BGl_rgczd2thezd2submatchz00zz__rgcz00(BgL_rgczd2submatcheszd2_1996,
					BgL_auxz00_2767, BgL_auxz00_2776, BgL_auxz00_2785);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__rgcz00()
	{
		{	/* Rgc/rgc.scm 17 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__rgcz00()
	{
		{	/* Rgc/rgc.scm 17 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__rgcz00()
	{
		{	/* Rgc/rgc.scm 17 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__rgcz00()
	{
		{	/* Rgc/rgc.scm 17 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1808z00zz__rgcz00));
		}

	}

#ifdef __cplusplus
}
#endif
