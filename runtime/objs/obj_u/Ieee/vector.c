/*===========================================================================*/
/*   (Ieee/vector.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Ieee/vector.scm -indent -o objs/obj_u/Ieee/vector.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62zc3z04anonymousza31352ze3ze5zz__r4_vectors_6_8z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2copyz12zc0zz__r4_vectors_6_8z00(obj_t,
		long, obj_t, obj_t, obj_t);
	extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl__vectorzd2fillz12zc0zz__r4_vectors_6_8z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2copy3zd2zz__r4_vectors_6_8z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62sortz62zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
	static obj_t BGl_vectorzd2mapNz12zc0zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_vectors_6_8z00 = BUNSPEC;
	static obj_t BGl_z62listzd2ze3vectorz53zz__r4_vectors_6_8z00(obj_t, obj_t);
	static obj_t BGl_innerzd2sortzd2zz__r4_vectors_6_8z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2shrinkz12zc0zz__r4_vectors_6_8z00(obj_t,
		long);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	BGL_EXPORTED_DECL long BGl_vectorzd2lengthzd2zz__r4_vectors_6_8z00(obj_t);
	extern obj_t BGl_everyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00(obj_t,
		obj_t, long, long);
	static obj_t BGl_z62vectorzd2setz12za2zz__r4_vectors_6_8z00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2appendzd2zz__r4_vectors_6_8z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vectorzd2tagzd2setz12z12zz__r4_vectors_6_8z00(obj_t, int);
	static obj_t BGl__makezd2vectorzd2zz__r4_vectors_6_8z00(obj_t, obj_t);
	static obj_t BGl_z62vectorzd2tagzd2setz12z70zz__r4_vectors_6_8z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62vectorzd2setzd2urz12z70zz__r4_vectors_6_8z00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2refzd2urz00zz__r4_vectors_6_8z00(obj_t,
		long);
	extern long bgl_list_length(obj_t);
	static obj_t BGl_z62vectorzd2mapz12za2zz__r4_vectors_6_8z00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t sort_vector(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_vectorzf3zf3zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__r4_vectors_6_8z00();
	static obj_t BGl_z62vectorz62zz__r4_vectors_6_8z00(obj_t, obj_t);
	static obj_t BGl_z62vectorzf3z91zz__r4_vectors_6_8z00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_vectors_6_8z00();
	BGL_EXPORTED_DECL obj_t BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(obj_t,
		long);
	static obj_t BGl_z62vectorzd2copyzb0zz__r4_vectors_6_8z00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_vectorzd2tagzd2zz__r4_vectors_6_8z00(obj_t);
	static bool_t BGl_vectorzd2forzd2each2z00zz__r4_vectors_6_8z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2refzd2zz__r4_vectors_6_8z00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_makezd2vectorzd2zz__r4_vectors_6_8z00(long,
		obj_t);
	static obj_t BGl_z62vectorzd2lengthzb0zz__r4_vectors_6_8z00(obj_t, obj_t);
	static bool_t BGl_vectorzd2forzd2eachNz00zz__r4_vectors_6_8z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62vectorzd2appendzb0zz__r4_vectors_6_8z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62vectorzd2refzd2urz62zz__r4_vectors_6_8z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2mapzd2zz__r4_vectors_6_8z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62vectorzd2tagzb0zz__r4_vectors_6_8z00(obj_t, obj_t);
	static obj_t BGl_z62vectorzd2refzb0zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t);
	extern obj_t make_vector(long, obj_t);
	extern obj_t bgl_fill_vector(obj_t, long, long, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vectorzd2setzd2urz12z12zz__r4_vectors_6_8z00(obj_t, long, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31316ze3ze5zz__r4_vectors_6_8z00(obj_t,
		obj_t);
	static obj_t BGl__vectorzd2copyz12zc0zz__r4_vectors_6_8z00(obj_t, obj_t);
	static obj_t BGl_z62vectorzd2mapzb0zz__r4_vectors_6_8z00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2forzd2eachz00zz__r4_vectors_6_8z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2setz12zc0zz__r4_vectors_6_8z00(obj_t,
		long, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorz00zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_z62vectorzd2forzd2eachz62zz__r4_vectors_6_8z00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62vectorzd2shrinkz12za2zz__r4_vectors_6_8z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31326ze3ze5zz__r4_vectors_6_8z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2mapz12zc0zz__r4_vectors_6_8z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62vectorzd2ze3listz53zz__r4_vectors_6_8z00(obj_t, obj_t);
	static obj_t BGl_z62vectorzd2copy3zb0zz__r4_vectors_6_8z00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2copyzd2zz__r4_vectors_6_8z00(obj_t,
		obj_t);
	static obj_t BGl_z62copyzd2vectorzb0zz__r4_vectors_6_8z00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectorzd2mapzd2envz00zz__r4_vectors_6_8z00,
		BgL_bgl_za762vectorza7d2mapza71846za7, va_generic_entry,
		BGl_z62vectorzd2mapzb0zz__r4_vectors_6_8z00, BUNSPEC, -3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2shrinkz12zd2envz12zz__r4_vectors_6_8z00,
		BgL_bgl_za762vectorza7d2shri1847z00,
		BGl_z62vectorzd2shrinkz12za2zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_copyzd2vectorzd2envz00zz__r4_vectors_6_8z00,
		BgL_bgl_za762copyza7d2vector1848z00,
		BGl_z62copyzd2vectorzb0zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sortzd2envzd2zz__r4_vectors_6_8z00,
		BgL_bgl_za762sortza762za7za7__r41849z00,
		BGl_z62sortz62zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2fillz12zd2envz12zz__r4_vectors_6_8z00,
		BgL_bgl__vectorza7d2fillza711850z00, opt_generic_entry,
		BGl__vectorzd2fillz12zc0zz__r4_vectors_6_8z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2appendzd2envz00zz__r4_vectors_6_8z00,
		BgL_bgl_za762vectorza7d2appe1851z00, va_generic_entry,
		BGl_z62vectorzd2appendzb0zz__r4_vectors_6_8z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectorzd2tagzd2envz00zz__r4_vectors_6_8z00,
		BgL_bgl_za762vectorza7d2tagza71852za7,
		BGl_z62vectorzd2tagzb0zz__r4_vectors_6_8z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2ze3listzd2envze3zz__r4_vectors_6_8z00,
		BgL_bgl_za762vectorza7d2za7e3l1853za7,
		BGl_z62vectorzd2ze3listz53zz__r4_vectors_6_8z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectorzd2envzd2zz__r4_vectors_6_8z00,
		BgL_bgl_za762vectorza762za7za7__1854z00, va_generic_entry,
		BGl_z62vectorz62zz__r4_vectors_6_8z00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2copy3zd2envz00zz__r4_vectors_6_8z00,
		BgL_bgl_za762vectorza7d2copy1855z00,
		BGl_z62vectorzd2copy3zb0zz__r4_vectors_6_8z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2refzd2urzd2envzd2zz__r4_vectors_6_8z00,
		BgL_bgl_za762vectorza7d2refza71856za7,
		BGl_z62vectorzd2refzd2urz62zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2mapz12zd2envz12zz__r4_vectors_6_8z00,
		BgL_bgl_za762vectorza7d2mapza71857za7, va_generic_entry,
		BGl_z62vectorzd2mapz12za2zz__r4_vectors_6_8z00, BUNSPEC, -3);
	      DEFINE_STRING(BGl_string1807z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1807za700za7za7_1858za7, "/tmp/4.4a/runtime/Ieee/vector.scm",
		33);
	      DEFINE_STRING(BGl_string1808z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1808za700za7za7_1859za7, "_make-vector", 12);
	      DEFINE_STRING(BGl_string1809z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1809za700za7za7_1860za7, "bint", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectorzd2copyzd2envz00zz__r4_vectors_6_8z00,
		BgL_bgl_za762vectorza7d2copy1861z00, va_generic_entry,
		BGl_z62vectorzd2copyzb0zz__r4_vectors_6_8z00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string1810z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1810za700za7za7_1862za7, "&vector-length", 14);
	      DEFINE_STRING(BGl_string1811z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1811za700za7za7_1863za7, "vector", 6);
	      DEFINE_STRING(BGl_string1812z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1812za700za7za7_1864za7, "&vector-ref", 11);
	      DEFINE_STRING(BGl_string1813z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1813za700za7za7_1865za7, "&vector-set!", 12);
	      DEFINE_STRING(BGl_string1814z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1814za700za7za7_1866za7, "&vector-ref-ur", 14);
	      DEFINE_STRING(BGl_string1815z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1815za700za7za7_1867za7, "&vector-set-ur!", 15);
	      DEFINE_STRING(BGl_string1816z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1816za700za7za7_1868za7, "&vector->list", 13);
	      DEFINE_STRING(BGl_string1817z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1817za700za7za7_1869za7, "&list->vector", 13);
	      DEFINE_STRING(BGl_string1818z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1818za700za7za7_1870za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string1819z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1819za700za7za7_1871za7, "_vector-fill!", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzd2ze3vectorzd2envze3zz__r4_vectors_6_8z00,
		BgL_bgl_za762listza7d2za7e3vec1872za7,
		BGl_z62listzd2ze3vectorz53zz__r4_vectors_6_8z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectorzd2refzd2envz00zz__r4_vectors_6_8z00,
		BgL_bgl_za762vectorza7d2refza71873za7,
		BGl_z62vectorzd2refzb0zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2lengthzd2envz00zz__r4_vectors_6_8z00,
		BgL_bgl_za762vectorza7d2leng1874z00,
		BGl_z62vectorzd2lengthzb0zz__r4_vectors_6_8z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1820z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1820za700za7za7_1875za7, "vector-fill!", 12);
	      DEFINE_STRING(BGl_string1821z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1821za700za7za7_1876za7, "wrong negative start", 20);
	      DEFINE_STRING(BGl_string1822z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1822za700za7za7_1877za7, "end index too large", 19);
	      DEFINE_STRING(BGl_string1823z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1823za700za7za7_1878za7, "start index larger than end", 27);
	      DEFINE_STRING(BGl_string1824z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1824za700za7za7_1879za7, "&vector-tag", 11);
	      DEFINE_STRING(BGl_string1825z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1825za700za7za7_1880za7, "&vector-tag-set!", 16);
	      DEFINE_STRING(BGl_string1826z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1826za700za7za7_1881za7, "&copy-vector", 12);
	      DEFINE_STRING(BGl_string1827z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1827za700za7za7_1882za7, "vector-copy", 11);
	      DEFINE_STRING(BGl_string1828z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1828za700za7za7_1883za7, "Illegal indexes", 15);
	      DEFINE_STRING(BGl_string1829z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1829za700za7za7_1884za7, "&vector-copy3", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2tagzd2setz12zd2envzc0zz__r4_vectors_6_8z00,
		BgL_bgl_za762vectorza7d2tagza71885za7,
		BGl_z62vectorzd2tagzd2setz12z70zz__r4_vectors_6_8z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1830z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1830za700za7za7_1886za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string1831z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1831za700za7za7_1887za7, "&vector-copy", 12);
	      DEFINE_STRING(BGl_string1832z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1832za700za7za7_1888za7, "_vector-copy!", 13);
	      DEFINE_STRING(BGl_string1833z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1833za700za7za7_1889za7, "&vector-append", 14);
	      DEFINE_STRING(BGl_string1834z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1834za700za7za7_1890za7, "sort", 4);
	      DEFINE_STRING(BGl_string1835z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1835za700za7za7_1891za7, "Object must be a list or a vector",
		33);
	      DEFINE_STRING(BGl_string1836z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1836za700za7za7_1892za7, "vector-map", 10);
	      DEFINE_STRING(BGl_string1837z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1837za700za7za7_1893za7, "Illegal arguments", 17);
	      DEFINE_STRING(BGl_string1838z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1838za700za7za7_1894za7, "&vector-map", 11);
	      DEFINE_STRING(BGl_string1839z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1839za700za7za7_1895za7, "procedure", 9);
	      DEFINE_STRING(BGl_string1840z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1840za700za7za7_1896za7, "vector-map!", 11);
	      DEFINE_STRING(BGl_string1841z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1841za700za7za7_1897za7, "&vector-map!", 12);
	      DEFINE_STRING(BGl_string1842z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1842za700za7za7_1898za7, "vector-for-each", 15);
	      DEFINE_STRING(BGl_string1843z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1843za700za7za7_1899za7, "&vector-for-each", 16);
	      DEFINE_STRING(BGl_string1844z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1844za700za7za7_1900za7, "&vector-shrink!", 15);
	      DEFINE_STRING(BGl_string1845z00zz__r4_vectors_6_8z00,
		BgL_bgl_string1845za700za7za7_1901za7, "__r4_vectors_6_8", 16);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectorzf3zd2envz21zz__r4_vectors_6_8z00,
		BgL_bgl_za762vectorza7f3za791za71902z00,
		BGl_z62vectorzf3z91zz__r4_vectors_6_8z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2setzd2urz12zd2envzc0zz__r4_vectors_6_8z00,
		BgL_bgl_za762vectorza7d2setza71903za7,
		BGl_z62vectorzd2setzd2urz12z70zz__r4_vectors_6_8z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2copyz12zd2envz12zz__r4_vectors_6_8z00,
		BgL_bgl__vectorza7d2copyza711904z00, opt_generic_entry,
		BGl__vectorzd2copyz12zc0zz__r4_vectors_6_8z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2vectorzd2envz00zz__r4_vectors_6_8z00,
		BgL_bgl__makeza7d2vectorza7d1905z00, opt_generic_entry,
		BGl__makezd2vectorzd2zz__r4_vectors_6_8z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2forzd2eachzd2envzd2zz__r4_vectors_6_8z00,
		BgL_bgl_za762vectorza7d2forza71906za7, va_generic_entry,
		BGl_z62vectorzd2forzd2eachz62zz__r4_vectors_6_8z00, BUNSPEC, -3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2setz12zd2envz12zz__r4_vectors_6_8z00,
		BgL_bgl_za762vectorza7d2setza71907za7,
		BGl_z62vectorzd2setz12za2zz__r4_vectors_6_8z00, 0L, BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__r4_vectors_6_8z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long
		BgL_checksumz00_2130, char *BgL_fromz00_2131)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_vectors_6_8z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_vectors_6_8z00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__r4_vectors_6_8z00();
					return BGl_importedzd2moduleszd2initz00zz__r4_vectors_6_8z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__r4_vectors_6_8z00()
	{
		{	/* Ieee/vector.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* vector? */
	BGL_EXPORTED_DEF bool_t BGl_vectorzf3zf3zz__r4_vectors_6_8z00(obj_t
		BgL_objz00_3)
	{
		{	/* Ieee/vector.scm 133 */
			return VECTORP(BgL_objz00_3);
		}

	}



/* &vector? */
	obj_t BGl_z62vectorzf3z91zz__r4_vectors_6_8z00(obj_t BgL_envz00_1959,
		obj_t BgL_objz00_1960)
	{
		{	/* Ieee/vector.scm 133 */
			return BBOOL(BGl_vectorzf3zf3zz__r4_vectors_6_8z00(BgL_objz00_1960));
		}

	}



/* _make-vector */
	obj_t BGl__makezd2vectorzd2zz__r4_vectors_6_8z00(obj_t BgL_env1051z00_7,
		obj_t BgL_opt1050z00_6)
	{
		{	/* Ieee/vector.scm 139 */
			{	/* Ieee/vector.scm 139 */
				obj_t BgL_g1052z00_2124;

				BgL_g1052z00_2124 = VECTOR_REF(BgL_opt1050z00_6, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1050z00_6))
					{
					case ((long) 1):

						{	/* Ieee/vector.scm 139 */

							{	/* Ieee/vector.scm 139 */
								obj_t BgL_res1588z00_2125;

								{	/* Ieee/vector.scm 139 */
									long BgL_intz00_2126;

									{	/* Ieee/vector.scm 139 */
										obj_t BgL_tmpz00_2142;

										if (INTEGERP(BgL_g1052z00_2124))
											{	/* Ieee/vector.scm 139 */
												BgL_tmpz00_2142 = BgL_g1052z00_2124;
											}
										else
											{
												obj_t BgL_auxz00_2145;

												BgL_auxz00_2145 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string1807z00zz__r4_vectors_6_8z00,
													BINT(((long) 6376)),
													BGl_string1808z00zz__r4_vectors_6_8z00,
													BGl_string1809z00zz__r4_vectors_6_8z00,
													BgL_g1052z00_2124);
												FAILURE(BgL_auxz00_2145, BFALSE, BFALSE);
											}
										BgL_intz00_2126 = (long) CINT(BgL_tmpz00_2142);
									}
									BgL_res1588z00_2125 = make_vector(BgL_intz00_2126, BUNSPEC);
								}
								return BgL_res1588z00_2125;
							}
						}
						break;
					case ((long) 2):

						{	/* Ieee/vector.scm 139 */
							obj_t BgL_fillz00_2127;

							BgL_fillz00_2127 = VECTOR_REF(BgL_opt1050z00_6, ((long) 1));
							{	/* Ieee/vector.scm 139 */

								{	/* Ieee/vector.scm 139 */
									obj_t BgL_res1589z00_2128;

									{	/* Ieee/vector.scm 139 */
										long BgL_intz00_2129;

										{	/* Ieee/vector.scm 139 */
											obj_t BgL_tmpz00_2152;

											if (INTEGERP(BgL_g1052z00_2124))
												{	/* Ieee/vector.scm 139 */
													BgL_tmpz00_2152 = BgL_g1052z00_2124;
												}
											else
												{
													obj_t BgL_auxz00_2155;

													BgL_auxz00_2155 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string1807z00zz__r4_vectors_6_8z00,
														BINT(((long) 6376)),
														BGl_string1808z00zz__r4_vectors_6_8z00,
														BGl_string1809z00zz__r4_vectors_6_8z00,
														BgL_g1052z00_2124);
													FAILURE(BgL_auxz00_2155, BFALSE, BFALSE);
												}
											BgL_intz00_2129 = (long) CINT(BgL_tmpz00_2152);
										}
										BgL_res1589z00_2128 =
											make_vector(BgL_intz00_2129, BgL_fillz00_2127);
									}
									return BgL_res1589z00_2128;
								}
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* make-vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2vectorzd2zz__r4_vectors_6_8z00(long
		BgL_intz00_4, obj_t BgL_fillz00_5)
	{
		{	/* Ieee/vector.scm 139 */
			return make_vector(BgL_intz00_4, BgL_fillz00_5);
		}

	}



/* vector */
	BGL_EXPORTED_DEF obj_t BGl_vectorz00zz__r4_vectors_6_8z00(obj_t BgL_argsz00_8)
	{
		{	/* Ieee/vector.scm 145 */
			return BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BgL_argsz00_8);
		}

	}



/* &vector */
	obj_t BGl_z62vectorz62zz__r4_vectors_6_8z00(obj_t BgL_envz00_1961,
		obj_t BgL_argsz00_1962)
	{
		{	/* Ieee/vector.scm 145 */
			return BGl_vectorz00zz__r4_vectors_6_8z00(BgL_argsz00_1962);
		}

	}



/* vector-length */
	BGL_EXPORTED_DEF long BGl_vectorzd2lengthzd2zz__r4_vectors_6_8z00(obj_t
		BgL_vectorz00_9)
	{
		{	/* Ieee/vector.scm 151 */
			return VECTOR_LENGTH(BgL_vectorz00_9);
		}

	}



/* &vector-length */
	obj_t BGl_z62vectorzd2lengthzb0zz__r4_vectors_6_8z00(obj_t BgL_envz00_1963,
		obj_t BgL_vectorz00_1964)
	{
		{	/* Ieee/vector.scm 151 */
			{	/* Ieee/vector.scm 152 */
				long BgL_tmpz00_2167;

				{	/* Ieee/vector.scm 152 */
					obj_t BgL_auxz00_2168;

					if (VECTORP(BgL_vectorz00_1964))
						{	/* Ieee/vector.scm 152 */
							BgL_auxz00_2168 = BgL_vectorz00_1964;
						}
					else
						{
							obj_t BgL_auxz00_2171;

							BgL_auxz00_2171 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 7010)),
								BGl_string1810z00zz__r4_vectors_6_8z00,
								BGl_string1811z00zz__r4_vectors_6_8z00, BgL_vectorz00_1964);
							FAILURE(BgL_auxz00_2171, BFALSE, BFALSE);
						}
					BgL_tmpz00_2167 =
						BGl_vectorzd2lengthzd2zz__r4_vectors_6_8z00(BgL_auxz00_2168);
				}
				return BINT(BgL_tmpz00_2167);
			}
		}

	}



/* vector-ref */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2refzd2zz__r4_vectors_6_8z00(obj_t
		BgL_vectorz00_10, long BgL_kz00_11)
	{
		{	/* Ieee/vector.scm 157 */
			return VECTOR_REF(BgL_vectorz00_10, BgL_kz00_11);
		}

	}



/* &vector-ref */
	obj_t BGl_z62vectorzd2refzb0zz__r4_vectors_6_8z00(obj_t BgL_envz00_1965,
		obj_t BgL_vectorz00_1966, obj_t BgL_kz00_1967)
	{
		{	/* Ieee/vector.scm 157 */
			{	/* Ieee/vector.scm 158 */
				long BgL_auxz00_2185;
				obj_t BgL_auxz00_2178;

				{	/* Ieee/vector.scm 158 */
					obj_t BgL_tmpz00_2186;

					if (INTEGERP(BgL_kz00_1967))
						{	/* Ieee/vector.scm 158 */
							BgL_tmpz00_2186 = BgL_kz00_1967;
						}
					else
						{
							obj_t BgL_auxz00_2189;

							BgL_auxz00_2189 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 7298)),
								BGl_string1812z00zz__r4_vectors_6_8z00,
								BGl_string1809z00zz__r4_vectors_6_8z00, BgL_kz00_1967);
							FAILURE(BgL_auxz00_2189, BFALSE, BFALSE);
						}
					BgL_auxz00_2185 = (long) CINT(BgL_tmpz00_2186);
				}
				if (VECTORP(BgL_vectorz00_1966))
					{	/* Ieee/vector.scm 158 */
						BgL_auxz00_2178 = BgL_vectorz00_1966;
					}
				else
					{
						obj_t BgL_auxz00_2181;

						BgL_auxz00_2181 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 7298)),
							BGl_string1812z00zz__r4_vectors_6_8z00,
							BGl_string1811z00zz__r4_vectors_6_8z00, BgL_vectorz00_1966);
						FAILURE(BgL_auxz00_2181, BFALSE, BFALSE);
					}
				return
					BGl_vectorzd2refzd2zz__r4_vectors_6_8z00(BgL_auxz00_2178,
					BgL_auxz00_2185);
			}
		}

	}



/* vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2setz12zc0zz__r4_vectors_6_8z00(obj_t
		BgL_vectorz00_12, long BgL_kz00_13, obj_t BgL_objz00_14)
	{
		{	/* Ieee/vector.scm 163 */
			return VECTOR_SET(BgL_vectorz00_12, BgL_kz00_13, BgL_objz00_14);
		}

	}



/* &vector-set! */
	obj_t BGl_z62vectorzd2setz12za2zz__r4_vectors_6_8z00(obj_t BgL_envz00_1968,
		obj_t BgL_vectorz00_1969, obj_t BgL_kz00_1970, obj_t BgL_objz00_1971)
	{
		{	/* Ieee/vector.scm 163 */
			{	/* Ieee/vector.scm 164 */
				long BgL_auxz00_2203;
				obj_t BgL_auxz00_2196;

				{	/* Ieee/vector.scm 164 */
					obj_t BgL_tmpz00_2204;

					if (INTEGERP(BgL_kz00_1970))
						{	/* Ieee/vector.scm 164 */
							BgL_tmpz00_2204 = BgL_kz00_1970;
						}
					else
						{
							obj_t BgL_auxz00_2207;

							BgL_auxz00_2207 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 7590)),
								BGl_string1813z00zz__r4_vectors_6_8z00,
								BGl_string1809z00zz__r4_vectors_6_8z00, BgL_kz00_1970);
							FAILURE(BgL_auxz00_2207, BFALSE, BFALSE);
						}
					BgL_auxz00_2203 = (long) CINT(BgL_tmpz00_2204);
				}
				if (VECTORP(BgL_vectorz00_1969))
					{	/* Ieee/vector.scm 164 */
						BgL_auxz00_2196 = BgL_vectorz00_1969;
					}
				else
					{
						obj_t BgL_auxz00_2199;

						BgL_auxz00_2199 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 7590)),
							BGl_string1813z00zz__r4_vectors_6_8z00,
							BGl_string1811z00zz__r4_vectors_6_8z00, BgL_vectorz00_1969);
						FAILURE(BgL_auxz00_2199, BFALSE, BFALSE);
					}
				return
					BGl_vectorzd2setz12zc0zz__r4_vectors_6_8z00(BgL_auxz00_2196,
					BgL_auxz00_2203, BgL_objz00_1971);
			}
		}

	}



/* vector-ref-ur */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2refzd2urz00zz__r4_vectors_6_8z00(obj_t
		BgL_vectorz00_15, long BgL_kz00_16)
	{
		{	/* Ieee/vector.scm 169 */
			return VECTOR_REF(BgL_vectorz00_15, BgL_kz00_16);
		}

	}



/* &vector-ref-ur */
	obj_t BGl_z62vectorzd2refzd2urz62zz__r4_vectors_6_8z00(obj_t BgL_envz00_1972,
		obj_t BgL_vectorz00_1973, obj_t BgL_kz00_1974)
	{
		{	/* Ieee/vector.scm 169 */
			{	/* Ieee/vector.scm 170 */
				long BgL_auxz00_2221;
				obj_t BgL_auxz00_2214;

				{	/* Ieee/vector.scm 170 */
					obj_t BgL_tmpz00_2222;

					if (INTEGERP(BgL_kz00_1974))
						{	/* Ieee/vector.scm 170 */
							BgL_tmpz00_2222 = BgL_kz00_1974;
						}
					else
						{
							obj_t BgL_auxz00_2225;

							BgL_auxz00_2225 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 7885)),
								BGl_string1814z00zz__r4_vectors_6_8z00,
								BGl_string1809z00zz__r4_vectors_6_8z00, BgL_kz00_1974);
							FAILURE(BgL_auxz00_2225, BFALSE, BFALSE);
						}
					BgL_auxz00_2221 = (long) CINT(BgL_tmpz00_2222);
				}
				if (VECTORP(BgL_vectorz00_1973))
					{	/* Ieee/vector.scm 170 */
						BgL_auxz00_2214 = BgL_vectorz00_1973;
					}
				else
					{
						obj_t BgL_auxz00_2217;

						BgL_auxz00_2217 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 7885)),
							BGl_string1814z00zz__r4_vectors_6_8z00,
							BGl_string1811z00zz__r4_vectors_6_8z00, BgL_vectorz00_1973);
						FAILURE(BgL_auxz00_2217, BFALSE, BFALSE);
					}
				return
					BGl_vectorzd2refzd2urz00zz__r4_vectors_6_8z00(BgL_auxz00_2214,
					BgL_auxz00_2221);
			}
		}

	}



/* vector-set-ur! */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2setzd2urz12z12zz__r4_vectors_6_8z00(obj_t
		BgL_vectorz00_17, long BgL_kz00_18, obj_t BgL_objz00_19)
	{
		{	/* Ieee/vector.scm 175 */
			return VECTOR_SET(BgL_vectorz00_17, BgL_kz00_18, BgL_objz00_19);
		}

	}



/* &vector-set-ur! */
	obj_t BGl_z62vectorzd2setzd2urz12z70zz__r4_vectors_6_8z00(obj_t
		BgL_envz00_1975, obj_t BgL_vectorz00_1976, obj_t BgL_kz00_1977,
		obj_t BgL_objz00_1978)
	{
		{	/* Ieee/vector.scm 175 */
			{	/* Ieee/vector.scm 176 */
				long BgL_auxz00_2239;
				obj_t BgL_auxz00_2232;

				{	/* Ieee/vector.scm 176 */
					obj_t BgL_tmpz00_2240;

					if (INTEGERP(BgL_kz00_1977))
						{	/* Ieee/vector.scm 176 */
							BgL_tmpz00_2240 = BgL_kz00_1977;
						}
					else
						{
							obj_t BgL_auxz00_2243;

							BgL_auxz00_2243 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 8183)),
								BGl_string1815z00zz__r4_vectors_6_8z00,
								BGl_string1809z00zz__r4_vectors_6_8z00, BgL_kz00_1977);
							FAILURE(BgL_auxz00_2243, BFALSE, BFALSE);
						}
					BgL_auxz00_2239 = (long) CINT(BgL_tmpz00_2240);
				}
				if (VECTORP(BgL_vectorz00_1976))
					{	/* Ieee/vector.scm 176 */
						BgL_auxz00_2232 = BgL_vectorz00_1976;
					}
				else
					{
						obj_t BgL_auxz00_2235;

						BgL_auxz00_2235 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 8183)),
							BGl_string1815z00zz__r4_vectors_6_8z00,
							BGl_string1811z00zz__r4_vectors_6_8z00, BgL_vectorz00_1976);
						FAILURE(BgL_auxz00_2235, BFALSE, BFALSE);
					}
				return
					BGl_vectorzd2setzd2urz12z12zz__r4_vectors_6_8z00(BgL_auxz00_2232,
					BgL_auxz00_2239, BgL_objz00_1978);
			}
		}

	}



/* vector->list */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t
		BgL_vectorz00_20)
	{
		{	/* Ieee/vector.scm 181 */
			if ((VECTOR_LENGTH(BgL_vectorz00_20) == ((long) 0)))
				{	/* Ieee/vector.scm 183 */
					return BNIL;
				}
			else
				{	/* Ieee/vector.scm 185 */
					long BgL_g1014z00_741;

					BgL_g1014z00_741 = (VECTOR_LENGTH(BgL_vectorz00_20) - ((long) 1));
					{
						long BgL_iz00_1347;
						obj_t BgL_accz00_1348;

						BgL_iz00_1347 = BgL_g1014z00_741;
						BgL_accz00_1348 = BNIL;
					BgL_loopz00_1346:
						if ((BgL_iz00_1347 == ((long) 0)))
							{	/* Ieee/vector.scm 187 */
								return
									MAKE_YOUNG_PAIR(VECTOR_REF(BgL_vectorz00_20, BgL_iz00_1347),
									BgL_accz00_1348);
							}
						else
							{	/* Ieee/vector.scm 189 */
								long BgL_arg1110z00_1356;
								obj_t BgL_arg1113z00_1357;

								BgL_arg1110z00_1356 = (BgL_iz00_1347 - ((long) 1));
								BgL_arg1113z00_1357 =
									MAKE_YOUNG_PAIR(VECTOR_REF(BgL_vectorz00_20, BgL_iz00_1347),
									BgL_accz00_1348);
								{
									obj_t BgL_accz00_2262;
									long BgL_iz00_2261;

									BgL_iz00_2261 = BgL_arg1110z00_1356;
									BgL_accz00_2262 = BgL_arg1113z00_1357;
									BgL_accz00_1348 = BgL_accz00_2262;
									BgL_iz00_1347 = BgL_iz00_2261;
									goto BgL_loopz00_1346;
								}
							}
					}
				}
		}

	}



/* &vector->list */
	obj_t BGl_z62vectorzd2ze3listz53zz__r4_vectors_6_8z00(obj_t BgL_envz00_1979,
		obj_t BgL_vectorz00_1980)
	{
		{	/* Ieee/vector.scm 181 */
			{	/* Ieee/vector.scm 182 */
				obj_t BgL_auxz00_2263;

				if (VECTORP(BgL_vectorz00_1980))
					{	/* Ieee/vector.scm 182 */
						BgL_auxz00_2263 = BgL_vectorz00_1980;
					}
				else
					{
						obj_t BgL_auxz00_2266;

						BgL_auxz00_2266 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 8471)),
							BGl_string1816z00zz__r4_vectors_6_8z00,
							BGl_string1811z00zz__r4_vectors_6_8z00, BgL_vectorz00_1980);
						FAILURE(BgL_auxz00_2266, BFALSE, BFALSE);
					}
				return BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(BgL_auxz00_2263);
			}
		}

	}



/* list->vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t
		BgL_listz00_21)
	{
		{	/* Ieee/vector.scm 194 */
			{	/* Ieee/vector.scm 195 */
				long BgL_lenz00_753;

				BgL_lenz00_753 = bgl_list_length(BgL_listz00_21);
				{	/* Ieee/vector.scm 195 */
					obj_t BgL_vecz00_754;

					BgL_vecz00_754 = create_vector(BgL_lenz00_753);
					{	/* Ieee/vector.scm 196 */

						{
							long BgL_iz00_1394;
							obj_t BgL_lz00_1395;

							BgL_iz00_1394 = ((long) 0);
							BgL_lz00_1395 = BgL_listz00_21;
						BgL_loopz00_1393:
							if ((BgL_iz00_1394 == BgL_lenz00_753))
								{	/* Ieee/vector.scm 199 */
									return BgL_vecz00_754;
								}
							else
								{	/* Ieee/vector.scm 199 */
									{	/* Ieee/vector.scm 202 */
										obj_t BgL_arg1117z00_1401;

										BgL_arg1117z00_1401 = CAR(((obj_t) BgL_lz00_1395));
										VECTOR_SET(BgL_vecz00_754, BgL_iz00_1394,
											BgL_arg1117z00_1401);
									}
									{	/* Ieee/vector.scm 203 */
										long BgL_arg1118z00_1402;
										obj_t BgL_arg1121z00_1403;

										BgL_arg1118z00_1402 = (BgL_iz00_1394 + ((long) 1));
										BgL_arg1121z00_1403 = CDR(((obj_t) BgL_lz00_1395));
										{
											obj_t BgL_lz00_2282;
											long BgL_iz00_2281;

											BgL_iz00_2281 = BgL_arg1118z00_1402;
											BgL_lz00_2282 = BgL_arg1121z00_1403;
											BgL_lz00_1395 = BgL_lz00_2282;
											BgL_iz00_1394 = BgL_iz00_2281;
											goto BgL_loopz00_1393;
										}
									}
								}
						}
					}
				}
			}
		}

	}



/* &list->vector */
	obj_t BGl_z62listzd2ze3vectorz53zz__r4_vectors_6_8z00(obj_t BgL_envz00_1981,
		obj_t BgL_listz00_1982)
	{
		{	/* Ieee/vector.scm 194 */
			{	/* Ieee/vector.scm 195 */
				obj_t BgL_auxz00_2283;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_listz00_1982))
					{	/* Ieee/vector.scm 195 */
						BgL_auxz00_2283 = BgL_listz00_1982;
					}
				else
					{
						obj_t BgL_auxz00_2286;

						BgL_auxz00_2286 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 8961)),
							BGl_string1817z00zz__r4_vectors_6_8z00,
							BGl_string1818z00zz__r4_vectors_6_8z00, BgL_listz00_1982);
						FAILURE(BgL_auxz00_2286, BFALSE, BFALSE);
					}
				return BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BgL_auxz00_2283);
			}
		}

	}



/* _vector-fill! */
	obj_t BGl__vectorzd2fillz12zc0zz__r4_vectors_6_8z00(obj_t BgL_env1056z00_27,
		obj_t BgL_opt1055z00_26)
	{
		{	/* Ieee/vector.scm 208 */
			{	/* Ieee/vector.scm 208 */
				obj_t BgL_vecz00_764;
				obj_t BgL_fillz00_765;

				BgL_vecz00_764 = VECTOR_REF(BgL_opt1055z00_26, ((long) 0));
				BgL_fillz00_765 = VECTOR_REF(BgL_opt1055z00_26, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1055z00_26))
					{
					case ((long) 2):

						{	/* Ieee/vector.scm 209 */
							long BgL_endz00_770;

							{	/* Ieee/vector.scm 209 */
								obj_t BgL_vectorz00_1413;

								if (VECTORP(BgL_vecz00_764))
									{	/* Ieee/vector.scm 209 */
										BgL_vectorz00_1413 = BgL_vecz00_764;
									}
								else
									{
										obj_t BgL_auxz00_2295;

										BgL_auxz00_2295 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string1807z00zz__r4_vectors_6_8z00,
											BINT(((long) 9472)),
											BGl_string1819z00zz__r4_vectors_6_8z00,
											BGl_string1811z00zz__r4_vectors_6_8z00, BgL_vecz00_764);
										FAILURE(BgL_auxz00_2295, BFALSE, BFALSE);
									}
								BgL_endz00_770 = VECTOR_LENGTH(BgL_vectorz00_1413);
							}
							{	/* Ieee/vector.scm 208 */

								{	/* Ieee/vector.scm 208 */
									obj_t BgL_auxz00_2300;

									if (VECTORP(BgL_vecz00_764))
										{	/* Ieee/vector.scm 208 */
											BgL_auxz00_2300 = BgL_vecz00_764;
										}
									else
										{
											obj_t BgL_auxz00_2303;

											BgL_auxz00_2303 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string1807z00zz__r4_vectors_6_8z00,
												BINT(((long) 9384)),
												BGl_string1819z00zz__r4_vectors_6_8z00,
												BGl_string1811z00zz__r4_vectors_6_8z00, BgL_vecz00_764);
											FAILURE(BgL_auxz00_2303, BFALSE, BFALSE);
										}
									return
										BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00
										(BgL_auxz00_2300, BgL_fillz00_765, ((long) 0),
										BgL_endz00_770);
						}}} break;
					case ((long) 3):

						{	/* Ieee/vector.scm 208 */
							obj_t BgL_startz00_771;

							BgL_startz00_771 = VECTOR_REF(BgL_opt1055z00_26, ((long) 2));
							{	/* Ieee/vector.scm 209 */
								long BgL_endz00_772;

								{	/* Ieee/vector.scm 209 */
									obj_t BgL_vectorz00_1414;

									if (VECTORP(BgL_vecz00_764))
										{	/* Ieee/vector.scm 209 */
											BgL_vectorz00_1414 = BgL_vecz00_764;
										}
									else
										{
											obj_t BgL_auxz00_2311;

											BgL_auxz00_2311 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string1807z00zz__r4_vectors_6_8z00,
												BINT(((long) 9472)),
												BGl_string1819z00zz__r4_vectors_6_8z00,
												BGl_string1811z00zz__r4_vectors_6_8z00, BgL_vecz00_764);
											FAILURE(BgL_auxz00_2311, BFALSE, BFALSE);
										}
									BgL_endz00_772 = VECTOR_LENGTH(BgL_vectorz00_1414);
								}
								{	/* Ieee/vector.scm 208 */

									{	/* Ieee/vector.scm 208 */
										long BgL_auxz00_2323;
										obj_t BgL_auxz00_2316;

										{	/* Ieee/vector.scm 208 */
											obj_t BgL_tmpz00_2324;

											if (INTEGERP(BgL_startz00_771))
												{	/* Ieee/vector.scm 208 */
													BgL_tmpz00_2324 = BgL_startz00_771;
												}
											else
												{
													obj_t BgL_auxz00_2327;

													BgL_auxz00_2327 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string1807z00zz__r4_vectors_6_8z00,
														BINT(((long) 9384)),
														BGl_string1819z00zz__r4_vectors_6_8z00,
														BGl_string1809z00zz__r4_vectors_6_8z00,
														BgL_startz00_771);
													FAILURE(BgL_auxz00_2327, BFALSE, BFALSE);
												}
											BgL_auxz00_2323 = (long) CINT(BgL_tmpz00_2324);
										}
										if (VECTORP(BgL_vecz00_764))
											{	/* Ieee/vector.scm 208 */
												BgL_auxz00_2316 = BgL_vecz00_764;
											}
										else
											{
												obj_t BgL_auxz00_2319;

												BgL_auxz00_2319 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string1807z00zz__r4_vectors_6_8z00,
													BINT(((long) 9384)),
													BGl_string1819z00zz__r4_vectors_6_8z00,
													BGl_string1811z00zz__r4_vectors_6_8z00,
													BgL_vecz00_764);
												FAILURE(BgL_auxz00_2319, BFALSE, BFALSE);
											}
										return
											BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00
											(BgL_auxz00_2316, BgL_fillz00_765, BgL_auxz00_2323,
											BgL_endz00_772);
									}
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Ieee/vector.scm 208 */
							obj_t BgL_startz00_773;

							BgL_startz00_773 = VECTOR_REF(BgL_opt1055z00_26, ((long) 2));
							{	/* Ieee/vector.scm 208 */
								obj_t BgL_endz00_774;

								BgL_endz00_774 = VECTOR_REF(BgL_opt1055z00_26, ((long) 3));
								{	/* Ieee/vector.scm 208 */

									{	/* Ieee/vector.scm 208 */
										long BgL_auxz00_2351;
										long BgL_auxz00_2342;
										obj_t BgL_auxz00_2335;

										{	/* Ieee/vector.scm 208 */
											obj_t BgL_tmpz00_2352;

											if (INTEGERP(BgL_endz00_774))
												{	/* Ieee/vector.scm 208 */
													BgL_tmpz00_2352 = BgL_endz00_774;
												}
											else
												{
													obj_t BgL_auxz00_2355;

													BgL_auxz00_2355 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string1807z00zz__r4_vectors_6_8z00,
														BINT(((long) 9384)),
														BGl_string1819z00zz__r4_vectors_6_8z00,
														BGl_string1809z00zz__r4_vectors_6_8z00,
														BgL_endz00_774);
													FAILURE(BgL_auxz00_2355, BFALSE, BFALSE);
												}
											BgL_auxz00_2351 = (long) CINT(BgL_tmpz00_2352);
										}
										{	/* Ieee/vector.scm 208 */
											obj_t BgL_tmpz00_2343;

											if (INTEGERP(BgL_startz00_773))
												{	/* Ieee/vector.scm 208 */
													BgL_tmpz00_2343 = BgL_startz00_773;
												}
											else
												{
													obj_t BgL_auxz00_2346;

													BgL_auxz00_2346 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string1807z00zz__r4_vectors_6_8z00,
														BINT(((long) 9384)),
														BGl_string1819z00zz__r4_vectors_6_8z00,
														BGl_string1809z00zz__r4_vectors_6_8z00,
														BgL_startz00_773);
													FAILURE(BgL_auxz00_2346, BFALSE, BFALSE);
												}
											BgL_auxz00_2342 = (long) CINT(BgL_tmpz00_2343);
										}
										if (VECTORP(BgL_vecz00_764))
											{	/* Ieee/vector.scm 208 */
												BgL_auxz00_2335 = BgL_vecz00_764;
											}
										else
											{
												obj_t BgL_auxz00_2338;

												BgL_auxz00_2338 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string1807z00zz__r4_vectors_6_8z00,
													BINT(((long) 9384)),
													BGl_string1819z00zz__r4_vectors_6_8z00,
													BGl_string1811z00zz__r4_vectors_6_8z00,
													BgL_vecz00_764);
												FAILURE(BgL_auxz00_2338, BFALSE, BFALSE);
											}
										return
											BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00
											(BgL_auxz00_2335, BgL_fillz00_765, BgL_auxz00_2342,
											BgL_auxz00_2351);
									}
								}
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* vector-fill! */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00(obj_t
		BgL_vecz00_22, obj_t BgL_fillz00_23, long BgL_startz00_24,
		long BgL_endz00_25)
	{
		{	/* Ieee/vector.scm 208 */
			if ((BgL_startz00_24 < ((long) 0)))
				{	/* Ieee/vector.scm 211 */
					return
						BGl_errorz00zz__errorz00(BGl_string1820z00zz__r4_vectors_6_8z00,
						BGl_string1821z00zz__r4_vectors_6_8z00, BINT(BgL_startz00_24));
				}
			else
				{	/* Ieee/vector.scm 211 */
					if ((BgL_endz00_25 > VECTOR_LENGTH(BgL_vecz00_22)))
						{	/* Ieee/vector.scm 213 */
							return
								BGl_errorz00zz__errorz00(BGl_string1820z00zz__r4_vectors_6_8z00,
								BGl_string1822z00zz__r4_vectors_6_8z00, BINT(BgL_endz00_25));
						}
					else
						{	/* Ieee/vector.scm 213 */
							if ((BgL_startz00_24 >= BgL_endz00_25))
								{	/* Ieee/vector.scm 216 */
									bool_t BgL_test1936z00_2374;

									if ((BgL_startz00_24 == BgL_endz00_25))
										{	/* Ieee/vector.scm 216 */
											BgL_test1936z00_2374 = (BgL_startz00_24 == ((long) 0));
										}
									else
										{	/* Ieee/vector.scm 216 */
											BgL_test1936z00_2374 = ((bool_t) 0);
										}
									if (BgL_test1936z00_2374)
										{	/* Ieee/vector.scm 216 */
											return BUNSPEC;
										}
									else
										{	/* Ieee/vector.scm 219 */
											obj_t BgL_arg1129z00_781;

											BgL_arg1129z00_781 =
												MAKE_YOUNG_PAIR(BINT(BgL_startz00_24),
												BINT(BgL_endz00_25));
											return
												BGl_errorz00zz__errorz00
												(BGl_string1820z00zz__r4_vectors_6_8z00,
												BGl_string1823z00zz__r4_vectors_6_8z00,
												BgL_arg1129z00_781);
										}
								}
							else
								{	/* Ieee/vector.scm 215 */
									return
										bgl_fill_vector(BgL_vecz00_22, BgL_startz00_24,
										BgL_endz00_25, BgL_fillz00_23);
								}
						}
				}
		}

	}



/* vector-tag */
	BGL_EXPORTED_DEF int BGl_vectorzd2tagzd2zz__r4_vectors_6_8z00(obj_t
		BgL_vectorz00_28)
	{
		{	/* Ieee/vector.scm 226 */
			return VECTOR_TAG(BgL_vectorz00_28);
		}

	}



/* &vector-tag */
	obj_t BGl_z62vectorzd2tagzb0zz__r4_vectors_6_8z00(obj_t BgL_envz00_1983,
		obj_t BgL_vectorz00_1984)
	{
		{	/* Ieee/vector.scm 226 */
			{	/* Ieee/vector.scm 227 */
				int BgL_tmpz00_2384;

				{	/* Ieee/vector.scm 227 */
					obj_t BgL_auxz00_2385;

					if (VECTORP(BgL_vectorz00_1984))
						{	/* Ieee/vector.scm 227 */
							BgL_auxz00_2385 = BgL_vectorz00_1984;
						}
					else
						{
							obj_t BgL_auxz00_2388;

							BgL_auxz00_2388 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 10152)),
								BGl_string1824z00zz__r4_vectors_6_8z00,
								BGl_string1811z00zz__r4_vectors_6_8z00, BgL_vectorz00_1984);
							FAILURE(BgL_auxz00_2388, BFALSE, BFALSE);
						}
					BgL_tmpz00_2384 =
						BGl_vectorzd2tagzd2zz__r4_vectors_6_8z00(BgL_auxz00_2385);
				}
				return BINT(BgL_tmpz00_2384);
			}
		}

	}



/* vector-tag-set! */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2tagzd2setz12z12zz__r4_vectors_6_8z00(obj_t
		BgL_vectorz00_29, int BgL_tagz00_30)
	{
		{	/* Ieee/vector.scm 232 */
			return VECTOR_TAG_SET(BgL_vectorz00_29, BgL_tagz00_30);
		}

	}



/* &vector-tag-set! */
	obj_t BGl_z62vectorzd2tagzd2setz12z70zz__r4_vectors_6_8z00(obj_t
		BgL_envz00_1985, obj_t BgL_vectorz00_1986, obj_t BgL_tagz00_1987)
	{
		{	/* Ieee/vector.scm 232 */
			{	/* Ieee/vector.scm 233 */
				int BgL_auxz00_2402;
				obj_t BgL_auxz00_2395;

				{	/* Ieee/vector.scm 233 */
					obj_t BgL_tmpz00_2403;

					if (INTEGERP(BgL_tagz00_1987))
						{	/* Ieee/vector.scm 233 */
							BgL_tmpz00_2403 = BgL_tagz00_1987;
						}
					else
						{
							obj_t BgL_auxz00_2406;

							BgL_auxz00_2406 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 10444)),
								BGl_string1825z00zz__r4_vectors_6_8z00,
								BGl_string1809z00zz__r4_vectors_6_8z00, BgL_tagz00_1987);
							FAILURE(BgL_auxz00_2406, BFALSE, BFALSE);
						}
					BgL_auxz00_2402 = CINT(BgL_tmpz00_2403);
				}
				if (VECTORP(BgL_vectorz00_1986))
					{	/* Ieee/vector.scm 233 */
						BgL_auxz00_2395 = BgL_vectorz00_1986;
					}
				else
					{
						obj_t BgL_auxz00_2398;

						BgL_auxz00_2398 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 10444)),
							BGl_string1825z00zz__r4_vectors_6_8z00,
							BGl_string1811z00zz__r4_vectors_6_8z00, BgL_vectorz00_1986);
						FAILURE(BgL_auxz00_2398, BFALSE, BFALSE);
					}
				return
					BGl_vectorzd2tagzd2setz12z12zz__r4_vectors_6_8z00(BgL_auxz00_2395,
					BgL_auxz00_2402);
			}
		}

	}



/* copy-vector */
	BGL_EXPORTED_DEF obj_t BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(obj_t
		BgL_oldzd2veczd2_31, long BgL_newzd2lenzd2_32)
	{
		{	/* Ieee/vector.scm 238 */
			{	/* Ieee/vector.scm 239 */
				obj_t BgL_newzd2veczd2_785;

				BgL_newzd2veczd2_785 = make_vector(BgL_newzd2lenzd2_32, BUNSPEC);
				{	/* Ieee/vector.scm 240 */
					long BgL_minz00_786;

					if ((BgL_newzd2lenzd2_32 < VECTOR_LENGTH(BgL_oldzd2veczd2_31)))
						{	/* Ieee/vector.scm 241 */
							BgL_minz00_786 = BgL_newzd2lenzd2_32;
						}
					else
						{	/* Ieee/vector.scm 241 */
							BgL_minz00_786 = VECTOR_LENGTH(BgL_oldzd2veczd2_31);
						}
					{	/* Ieee/vector.scm 241 */

						{
							long BgL_iz00_1444;

							BgL_iz00_1444 = ((long) 0);
						BgL_loopz00_1443:
							if ((BgL_iz00_1444 == BgL_minz00_786))
								{	/* Ieee/vector.scm 245 */
									return BgL_newzd2veczd2_785;
								}
							else
								{	/* Ieee/vector.scm 245 */
									VECTOR_SET(BgL_newzd2veczd2_785, BgL_iz00_1444,
										VECTOR_REF(BgL_oldzd2veczd2_31, BgL_iz00_1444));
									{
										long BgL_iz00_2421;

										BgL_iz00_2421 = (BgL_iz00_1444 + ((long) 1));
										BgL_iz00_1444 = BgL_iz00_2421;
										goto BgL_loopz00_1443;
									}
								}
						}
					}
				}
			}
		}

	}



/* &copy-vector */
	obj_t BGl_z62copyzd2vectorzb0zz__r4_vectors_6_8z00(obj_t BgL_envz00_1988,
		obj_t BgL_oldzd2veczd2_1989, obj_t BgL_newzd2lenzd2_1990)
	{
		{	/* Ieee/vector.scm 238 */
			{	/* Ieee/vector.scm 239 */
				long BgL_auxz00_2430;
				obj_t BgL_auxz00_2423;

				{	/* Ieee/vector.scm 239 */
					obj_t BgL_tmpz00_2431;

					if (INTEGERP(BgL_newzd2lenzd2_1990))
						{	/* Ieee/vector.scm 239 */
							BgL_tmpz00_2431 = BgL_newzd2lenzd2_1990;
						}
					else
						{
							obj_t BgL_auxz00_2434;

							BgL_auxz00_2434 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 10761)),
								BGl_string1826z00zz__r4_vectors_6_8z00,
								BGl_string1809z00zz__r4_vectors_6_8z00, BgL_newzd2lenzd2_1990);
							FAILURE(BgL_auxz00_2434, BFALSE, BFALSE);
						}
					BgL_auxz00_2430 = (long) CINT(BgL_tmpz00_2431);
				}
				if (VECTORP(BgL_oldzd2veczd2_1989))
					{	/* Ieee/vector.scm 239 */
						BgL_auxz00_2423 = BgL_oldzd2veczd2_1989;
					}
				else
					{
						obj_t BgL_auxz00_2426;

						BgL_auxz00_2426 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 10761)),
							BGl_string1826z00zz__r4_vectors_6_8z00,
							BGl_string1811z00zz__r4_vectors_6_8z00, BgL_oldzd2veczd2_1989);
						FAILURE(BgL_auxz00_2426, BFALSE, BFALSE);
					}
				return
					BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(BgL_auxz00_2423,
					BgL_auxz00_2430);
			}
		}

	}



/* vector-copy3 */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2copy3zd2zz__r4_vectors_6_8z00(obj_t
		BgL_oldzd2veczd2_33, obj_t BgL_startz00_34, obj_t BgL_stopz00_35)
	{
		{	/* Ieee/vector.scm 254 */
			{	/* Ieee/vector.scm 255 */
				long BgL_newzd2lenzd2_797;

				BgL_newzd2lenzd2_797 =
					((long) CINT(BgL_stopz00_35) - (long) CINT(BgL_startz00_34));
				{	/* Ieee/vector.scm 256 */
					obj_t BgL_newzd2veczd2_798;

					BgL_newzd2veczd2_798 = make_vector(BgL_newzd2lenzd2_797, BUNSPEC);
					{	/* Ieee/vector.scm 258 */

						{	/* Ieee/vector.scm 261 */
							bool_t BgL_test1945z00_2444;

							if ((BgL_newzd2lenzd2_797 < ((long) 0)))
								{	/* Ieee/vector.scm 261 */
									BgL_test1945z00_2444 = ((bool_t) 1);
								}
							else
								{	/* Ieee/vector.scm 261 */
									if (
										((long) CINT(BgL_startz00_34) >
											VECTOR_LENGTH(BgL_oldzd2veczd2_33)))
										{	/* Ieee/vector.scm 261 */
											BgL_test1945z00_2444 = ((bool_t) 1);
										}
									else
										{	/* Ieee/vector.scm 261 */
											BgL_test1945z00_2444 =
												(
												(long) CINT(BgL_stopz00_35) >
												VECTOR_LENGTH(BgL_oldzd2veczd2_33));
								}}
							if (BgL_test1945z00_2444)
								{	/* Ieee/vector.scm 262 */
									obj_t BgL_arg1165z00_803;

									BgL_arg1165z00_803 =
										MAKE_YOUNG_PAIR(BgL_startz00_34, BgL_stopz00_35);
									return
										BGl_errorz00zz__errorz00
										(BGl_string1827z00zz__r4_vectors_6_8z00,
										BGl_string1828z00zz__r4_vectors_6_8z00, BgL_arg1165z00_803);
								}
							else
								{
									obj_t BgL_rz00_1504;
									long BgL_wz00_1505;

									BgL_rz00_1504 = BgL_startz00_34;
									BgL_wz00_1505 = ((long) 0);
								BgL_loopz00_1503:
									if (
										((long) CINT(BgL_rz00_1504) == (long) CINT(BgL_stopz00_35)))
										{	/* Ieee/vector.scm 265 */
											return BgL_newzd2veczd2_798;
										}
									else
										{	/* Ieee/vector.scm 265 */
											VECTOR_SET(BgL_newzd2veczd2_798, BgL_wz00_1505,
												VECTOR_REF(BgL_oldzd2veczd2_33,
													(long) CINT(BgL_rz00_1504)));
											{	/* Ieee/vector.scm 269 */
												long BgL_arg1170z00_1512;
												long BgL_arg1172z00_1513;

												BgL_arg1170z00_1512 =
													((long) CINT(BgL_rz00_1504) + ((long) 1));
												BgL_arg1172z00_1513 = (BgL_wz00_1505 + ((long) 1));
												{
													long BgL_wz00_2468;
													obj_t BgL_rz00_2466;

													BgL_rz00_2466 = BINT(BgL_arg1170z00_1512);
													BgL_wz00_2468 = BgL_arg1172z00_1513;
													BgL_wz00_1505 = BgL_wz00_2468;
													BgL_rz00_1504 = BgL_rz00_2466;
													goto BgL_loopz00_1503;
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



/* &vector-copy3 */
	obj_t BGl_z62vectorzd2copy3zb0zz__r4_vectors_6_8z00(obj_t BgL_envz00_1991,
		obj_t BgL_oldzd2veczd2_1992, obj_t BgL_startz00_1993,
		obj_t BgL_stopz00_1994)
	{
		{	/* Ieee/vector.scm 254 */
			{	/* Ieee/vector.scm 255 */
				obj_t BgL_auxz00_2469;

				if (VECTORP(BgL_oldzd2veczd2_1992))
					{	/* Ieee/vector.scm 255 */
						BgL_auxz00_2469 = BgL_oldzd2veczd2_1992;
					}
				else
					{
						obj_t BgL_auxz00_2472;

						BgL_auxz00_2472 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 11344)),
							BGl_string1829z00zz__r4_vectors_6_8z00,
							BGl_string1811z00zz__r4_vectors_6_8z00, BgL_oldzd2veczd2_1992);
						FAILURE(BgL_auxz00_2472, BFALSE, BFALSE);
					}
				return
					BGl_vectorzd2copy3zd2zz__r4_vectors_6_8z00(BgL_auxz00_2469,
					BgL_startz00_1993, BgL_stopz00_1994);
			}
		}

	}



/* vector-copy */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2copyzd2zz__r4_vectors_6_8z00(obj_t
		BgL_oldzd2veczd2_36, obj_t BgL_argsz00_37)
	{
		{	/* Ieee/vector.scm 274 */
			{	/* Ieee/vector.scm 275 */
				obj_t BgL_startz00_818;

				if (PAIRP(BgL_argsz00_37))
					{	/* Ieee/vector.scm 276 */
						if (INTEGERP(CAR(BgL_argsz00_37)))
							{	/* Ieee/vector.scm 277 */
								BgL_startz00_818 = CAR(BgL_argsz00_37);
							}
						else
							{	/* Ieee/vector.scm 277 */
								BgL_startz00_818 =
									BGl_errorz00zz__errorz00
									(BGl_string1827z00zz__r4_vectors_6_8z00,
									BGl_string1830z00zz__r4_vectors_6_8z00, CAR(BgL_argsz00_37));
							}
					}
				else
					{	/* Ieee/vector.scm 276 */
						BgL_startz00_818 = BINT(((long) 0));
					}
				{	/* Ieee/vector.scm 276 */
					obj_t BgL_stopz00_819;

					{	/* Ieee/vector.scm 281 */
						bool_t BgL_test1952z00_2486;

						if (PAIRP(BgL_argsz00_37))
							{	/* Ieee/vector.scm 281 */
								obj_t BgL_tmpz00_2489;

								BgL_tmpz00_2489 = CDR(BgL_argsz00_37);
								BgL_test1952z00_2486 = PAIRP(BgL_tmpz00_2489);
							}
						else
							{	/* Ieee/vector.scm 281 */
								BgL_test1952z00_2486 = ((bool_t) 0);
							}
						if (BgL_test1952z00_2486)
							{	/* Ieee/vector.scm 282 */
								bool_t BgL_test1954z00_2492;

								{	/* Ieee/vector.scm 282 */
									bool_t BgL_test1955z00_2493;

									{	/* Ieee/vector.scm 282 */
										obj_t BgL_tmpz00_2494;

										BgL_tmpz00_2494 = CDR(CDR(BgL_argsz00_37));
										BgL_test1955z00_2493 = PAIRP(BgL_tmpz00_2494);
									}
									if (BgL_test1955z00_2493)
										{	/* Ieee/vector.scm 282 */
											BgL_test1954z00_2492 = ((bool_t) 1);
										}
									else
										{	/* Ieee/vector.scm 282 */
											if (INTEGERP(CAR(CDR(BgL_argsz00_37))))
												{	/* Ieee/vector.scm 283 */
													BgL_test1954z00_2492 = ((bool_t) 0);
												}
											else
												{	/* Ieee/vector.scm 283 */
													BgL_test1954z00_2492 = ((bool_t) 1);
												}
										}
								}
								if (BgL_test1954z00_2492)
									{	/* Ieee/vector.scm 282 */
										BgL_stopz00_819 =
											BGl_errorz00zz__errorz00
											(BGl_string1827z00zz__r4_vectors_6_8z00,
											BGl_string1830z00zz__r4_vectors_6_8z00,
											CDR(BgL_argsz00_37));
									}
								else
									{	/* Ieee/vector.scm 282 */
										BgL_stopz00_819 = CAR(CDR(BgL_argsz00_37));
									}
							}
						else
							{	/* Ieee/vector.scm 281 */
								BgL_stopz00_819 = BINT(VECTOR_LENGTH(BgL_oldzd2veczd2_36));
							}
					}
					{	/* Ieee/vector.scm 281 */

						return
							BGl_vectorzd2copy3zd2zz__r4_vectors_6_8z00(BgL_oldzd2veczd2_36,
							BgL_startz00_818, BgL_stopz00_819);
					}
				}
			}
		}

	}



/* &vector-copy */
	obj_t BGl_z62vectorzd2copyzb0zz__r4_vectors_6_8z00(obj_t BgL_envz00_1995,
		obj_t BgL_oldzd2veczd2_1996, obj_t BgL_argsz00_1997)
	{
		{	/* Ieee/vector.scm 274 */
			{	/* Ieee/vector.scm 275 */
				obj_t BgL_auxz00_2509;

				if (VECTORP(BgL_oldzd2veczd2_1996))
					{	/* Ieee/vector.scm 275 */
						BgL_auxz00_2509 = BgL_oldzd2veczd2_1996;
					}
				else
					{
						obj_t BgL_auxz00_2512;

						BgL_auxz00_2512 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 12103)),
							BGl_string1831z00zz__r4_vectors_6_8z00,
							BGl_string1811z00zz__r4_vectors_6_8z00, BgL_oldzd2veczd2_1996);
						FAILURE(BgL_auxz00_2512, BFALSE, BFALSE);
					}
				return
					BGl_vectorzd2copyzd2zz__r4_vectors_6_8z00(BgL_auxz00_2509,
					BgL_argsz00_1997);
			}
		}

	}



/* _vector-copy! */
	obj_t BGl__vectorzd2copyz12zc0zz__r4_vectors_6_8z00(obj_t BgL_env1060z00_44,
		obj_t BgL_opt1059z00_43)
	{
		{	/* Ieee/vector.scm 292 */
			{	/* Ieee/vector.scm 292 */
				obj_t BgL_g1061z00_842;
				obj_t BgL_g1062z00_843;
				obj_t BgL_sourcez00_844;

				BgL_g1061z00_842 = VECTOR_REF(BgL_opt1059z00_43, ((long) 0));
				BgL_g1062z00_843 = VECTOR_REF(BgL_opt1059z00_43, ((long) 1));
				BgL_sourcez00_844 = VECTOR_REF(BgL_opt1059z00_43, ((long) 2));
				switch (VECTOR_LENGTH(BgL_opt1059z00_43))
					{
					case ((long) 3):

						{	/* Ieee/vector.scm 293 */
							long BgL_sendz00_849;

							{	/* Ieee/vector.scm 293 */
								obj_t BgL_vectorz00_1549;

								if (VECTORP(BgL_sourcez00_844))
									{	/* Ieee/vector.scm 293 */
										BgL_vectorz00_1549 = BgL_sourcez00_844;
									}
								else
									{
										obj_t BgL_auxz00_2522;

										BgL_auxz00_2522 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string1807z00zz__r4_vectors_6_8z00,
											BINT(((long) 12868)),
											BGl_string1832z00zz__r4_vectors_6_8z00,
											BGl_string1811z00zz__r4_vectors_6_8z00,
											BgL_sourcez00_844);
										FAILURE(BgL_auxz00_2522, BFALSE, BFALSE);
									}
								BgL_sendz00_849 = VECTOR_LENGTH(BgL_vectorz00_1549);
							}
							{	/* Ieee/vector.scm 292 */

								{	/* Ieee/vector.scm 292 */
									long BgL_auxz00_2534;
									obj_t BgL_auxz00_2527;

									{	/* Ieee/vector.scm 292 */
										obj_t BgL_tmpz00_2535;

										if (INTEGERP(BgL_g1062z00_843))
											{	/* Ieee/vector.scm 292 */
												BgL_tmpz00_2535 = BgL_g1062z00_843;
											}
										else
											{
												obj_t BgL_auxz00_2538;

												BgL_auxz00_2538 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string1807z00zz__r4_vectors_6_8z00,
													BINT(((long) 12760)),
													BGl_string1832z00zz__r4_vectors_6_8z00,
													BGl_string1809z00zz__r4_vectors_6_8z00,
													BgL_g1062z00_843);
												FAILURE(BgL_auxz00_2538, BFALSE, BFALSE);
											}
										BgL_auxz00_2534 = (long) CINT(BgL_tmpz00_2535);
									}
									if (VECTORP(BgL_g1061z00_842))
										{	/* Ieee/vector.scm 292 */
											BgL_auxz00_2527 = BgL_g1061z00_842;
										}
									else
										{
											obj_t BgL_auxz00_2530;

											BgL_auxz00_2530 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string1807z00zz__r4_vectors_6_8z00,
												BINT(((long) 12760)),
												BGl_string1832z00zz__r4_vectors_6_8z00,
												BGl_string1811z00zz__r4_vectors_6_8z00,
												BgL_g1061z00_842);
											FAILURE(BgL_auxz00_2530, BFALSE, BFALSE);
										}
									return
										BGl_vectorzd2copyz12zc0zz__r4_vectors_6_8z00
										(BgL_auxz00_2527, BgL_auxz00_2534, BgL_sourcez00_844,
										BINT(((long) 0)), BINT(BgL_sendz00_849));
						}}} break;
					case ((long) 4):

						{	/* Ieee/vector.scm 292 */
							obj_t BgL_sstartz00_850;

							BgL_sstartz00_850 = VECTOR_REF(BgL_opt1059z00_43, ((long) 3));
							{	/* Ieee/vector.scm 293 */
								long BgL_sendz00_851;

								{	/* Ieee/vector.scm 293 */
									obj_t BgL_vectorz00_1550;

									if (VECTORP(BgL_sourcez00_844))
										{	/* Ieee/vector.scm 293 */
											BgL_vectorz00_1550 = BgL_sourcez00_844;
										}
									else
										{
											obj_t BgL_auxz00_2549;

											BgL_auxz00_2549 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string1807z00zz__r4_vectors_6_8z00,
												BINT(((long) 12868)),
												BGl_string1832z00zz__r4_vectors_6_8z00,
												BGl_string1811z00zz__r4_vectors_6_8z00,
												BgL_sourcez00_844);
											FAILURE(BgL_auxz00_2549, BFALSE, BFALSE);
										}
									BgL_sendz00_851 = VECTOR_LENGTH(BgL_vectorz00_1550);
								}
								{	/* Ieee/vector.scm 292 */

									{	/* Ieee/vector.scm 292 */
										long BgL_auxz00_2561;
										obj_t BgL_auxz00_2554;

										{	/* Ieee/vector.scm 292 */
											obj_t BgL_tmpz00_2562;

											if (INTEGERP(BgL_g1062z00_843))
												{	/* Ieee/vector.scm 292 */
													BgL_tmpz00_2562 = BgL_g1062z00_843;
												}
											else
												{
													obj_t BgL_auxz00_2565;

													BgL_auxz00_2565 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string1807z00zz__r4_vectors_6_8z00,
														BINT(((long) 12760)),
														BGl_string1832z00zz__r4_vectors_6_8z00,
														BGl_string1809z00zz__r4_vectors_6_8z00,
														BgL_g1062z00_843);
													FAILURE(BgL_auxz00_2565, BFALSE, BFALSE);
												}
											BgL_auxz00_2561 = (long) CINT(BgL_tmpz00_2562);
										}
										if (VECTORP(BgL_g1061z00_842))
											{	/* Ieee/vector.scm 292 */
												BgL_auxz00_2554 = BgL_g1061z00_842;
											}
										else
											{
												obj_t BgL_auxz00_2557;

												BgL_auxz00_2557 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string1807z00zz__r4_vectors_6_8z00,
													BINT(((long) 12760)),
													BGl_string1832z00zz__r4_vectors_6_8z00,
													BGl_string1811z00zz__r4_vectors_6_8z00,
													BgL_g1061z00_842);
												FAILURE(BgL_auxz00_2557, BFALSE, BFALSE);
											}
										return
											BGl_vectorzd2copyz12zc0zz__r4_vectors_6_8z00
											(BgL_auxz00_2554, BgL_auxz00_2561, BgL_sourcez00_844,
											BgL_sstartz00_850, BINT(BgL_sendz00_851));
									}
								}
							}
						}
						break;
					case ((long) 5):

						{	/* Ieee/vector.scm 292 */
							obj_t BgL_sstartz00_852;

							BgL_sstartz00_852 = VECTOR_REF(BgL_opt1059z00_43, ((long) 3));
							{	/* Ieee/vector.scm 292 */
								obj_t BgL_sendz00_853;

								BgL_sendz00_853 = VECTOR_REF(BgL_opt1059z00_43, ((long) 4));
								{	/* Ieee/vector.scm 292 */

									{	/* Ieee/vector.scm 292 */
										long BgL_auxz00_2581;
										obj_t BgL_auxz00_2574;

										{	/* Ieee/vector.scm 292 */
											obj_t BgL_tmpz00_2582;

											if (INTEGERP(BgL_g1062z00_843))
												{	/* Ieee/vector.scm 292 */
													BgL_tmpz00_2582 = BgL_g1062z00_843;
												}
											else
												{
													obj_t BgL_auxz00_2585;

													BgL_auxz00_2585 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string1807z00zz__r4_vectors_6_8z00,
														BINT(((long) 12760)),
														BGl_string1832z00zz__r4_vectors_6_8z00,
														BGl_string1809z00zz__r4_vectors_6_8z00,
														BgL_g1062z00_843);
													FAILURE(BgL_auxz00_2585, BFALSE, BFALSE);
												}
											BgL_auxz00_2581 = (long) CINT(BgL_tmpz00_2582);
										}
										if (VECTORP(BgL_g1061z00_842))
											{	/* Ieee/vector.scm 292 */
												BgL_auxz00_2574 = BgL_g1061z00_842;
											}
										else
											{
												obj_t BgL_auxz00_2577;

												BgL_auxz00_2577 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string1807z00zz__r4_vectors_6_8z00,
													BINT(((long) 12760)),
													BGl_string1832z00zz__r4_vectors_6_8z00,
													BGl_string1811z00zz__r4_vectors_6_8z00,
													BgL_g1061z00_842);
												FAILURE(BgL_auxz00_2577, BFALSE, BFALSE);
											}
										return
											BGl_vectorzd2copyz12zc0zz__r4_vectors_6_8z00
											(BgL_auxz00_2574, BgL_auxz00_2581, BgL_sourcez00_844,
											BgL_sstartz00_852, BgL_sendz00_853);
									}
								}
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* vector-copy! */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2copyz12zc0zz__r4_vectors_6_8z00(obj_t
		BgL_targetz00_38, long BgL_tstartz00_39, obj_t BgL_sourcez00_40,
		obj_t BgL_sstartz00_41, obj_t BgL_sendz00_42)
	{
		{	/* Ieee/vector.scm 292 */
			{	/* Ieee/vector.scm 294 */
				obj_t BgL_endz00_854;

				if (
					((long) CINT(BgL_sendz00_42) <
						VECTOR_LENGTH(((obj_t) BgL_sourcez00_40))))
					{	/* Ieee/vector.scm 294 */
						BgL_endz00_854 = BgL_sendz00_42;
					}
				else
					{	/* Ieee/vector.scm 294 */
						BgL_endz00_854 = BINT(VECTOR_LENGTH(((obj_t) BgL_sourcez00_40)));
					}
				{	/* Ieee/vector.scm 294 */
					long BgL_countz00_855;

					BgL_countz00_855 =
						((long) CINT(BgL_endz00_854) - (long) CINT(BgL_sstartz00_41));
					{	/* Ieee/vector.scm 295 */
						long BgL_tendz00_856;

						{	/* Ieee/vector.scm 296 */
							long BgL_az00_890;

							BgL_az00_890 = (BgL_tstartz00_39 + BgL_countz00_855);
							if ((BgL_az00_890 < VECTOR_LENGTH(BgL_targetz00_38)))
								{	/* Ieee/vector.scm 296 */
									BgL_tendz00_856 = BgL_az00_890;
								}
							else
								{	/* Ieee/vector.scm 296 */
									BgL_tendz00_856 = VECTOR_LENGTH(BgL_targetz00_38);
								}
						}
						{	/* Ieee/vector.scm 296 */

							{	/* Ieee/vector.scm 297 */
								bool_t BgL_test1968z00_2609;

								if ((BgL_targetz00_38 == BgL_sourcez00_40))
									{	/* Ieee/vector.scm 297 */
										if (((long) CINT(BgL_sstartz00_41) < BgL_tstartz00_39))
											{	/* Ieee/vector.scm 299 */
												long BgL_tmpz00_2615;

												{	/* Ieee/vector.scm 299 */
													long BgL_za71za7_1571;

													BgL_za71za7_1571 = (long) CINT(BgL_sstartz00_41);
													BgL_tmpz00_2615 =
														(BgL_za71za7_1571 +
														((long) CINT(BgL_sendz00_42) - BgL_za71za7_1571));
												}
												BgL_test1968z00_2609 =
													(BgL_tstartz00_39 < BgL_tmpz00_2615);
											}
										else
											{	/* Ieee/vector.scm 298 */
												BgL_test1968z00_2609 = ((bool_t) 0);
											}
									}
								else
									{	/* Ieee/vector.scm 297 */
										BgL_test1968z00_2609 = ((bool_t) 0);
									}
								if (BgL_test1968z00_2609)
									{	/* Ieee/vector.scm 300 */
										long BgL_g1018z00_862;
										long BgL_g1019z00_863;

										BgL_g1018z00_862 =
											((long) CINT(BgL_endz00_854) - ((long) 1));
										BgL_g1019z00_863 = (BgL_tendz00_856 - ((long) 1));
										{
											long BgL_iz00_865;
											long BgL_jz00_866;

											{	/* Ieee/vector.scm 300 */
												bool_t BgL_tmpz00_2624;

												BgL_iz00_865 = BgL_g1018z00_862;
												BgL_jz00_866 = BgL_g1019z00_863;
											BgL_zc3z04anonymousza31231ze3z87_867:
												{	/* Ieee/vector.scm 302 */
													bool_t BgL_test1971z00_2625;

													if ((BgL_iz00_865 >= (long) CINT(BgL_sstartz00_41)))
														{	/* Ieee/vector.scm 302 */
															BgL_test1971z00_2625 =
																(BgL_jz00_866 >= BgL_tstartz00_39);
														}
													else
														{	/* Ieee/vector.scm 302 */
															BgL_test1971z00_2625 = ((bool_t) 0);
														}
													if (BgL_test1971z00_2625)
														{	/* Ieee/vector.scm 302 */
															{	/* Ieee/vector.scm 303 */
																obj_t BgL_arg1239z00_870;

																BgL_arg1239z00_870 =
																	VECTOR_REF(
																	((obj_t) BgL_sourcez00_40), BgL_iz00_865);
																VECTOR_SET(BgL_targetz00_38, BgL_jz00_866,
																	BgL_arg1239z00_870);
															}
															{
																long BgL_jz00_2635;
																long BgL_iz00_2633;

																BgL_iz00_2633 = (BgL_iz00_865 - ((long) 1));
																BgL_jz00_2635 = (BgL_jz00_866 - ((long) 1));
																BgL_jz00_866 = BgL_jz00_2635;
																BgL_iz00_865 = BgL_iz00_2633;
																goto BgL_zc3z04anonymousza31231ze3z87_867;
															}
														}
													else
														{	/* Ieee/vector.scm 302 */
															BgL_tmpz00_2624 = ((bool_t) 0);
														}
												}
												return BBOOL(BgL_tmpz00_2624);
											}
										}
									}
								else
									{
										obj_t BgL_iz00_876;
										long BgL_jz00_877;

										{	/* Ieee/vector.scm 305 */
											bool_t BgL_tmpz00_2638;

											BgL_iz00_876 = BgL_sstartz00_41;
											BgL_jz00_877 = BgL_tstartz00_39;
										BgL_zc3z04anonymousza31244ze3z87_878:
											{	/* Ieee/vector.scm 307 */
												bool_t BgL_test1973z00_2639;

												if (
													((long) CINT(BgL_iz00_876) <
														(long) CINT(BgL_endz00_854)))
													{	/* Ieee/vector.scm 307 */
														BgL_test1973z00_2639 =
															(BgL_jz00_877 < BgL_tendz00_856);
													}
												else
													{	/* Ieee/vector.scm 307 */
														BgL_test1973z00_2639 = ((bool_t) 0);
													}
												if (BgL_test1973z00_2639)
													{	/* Ieee/vector.scm 307 */
														{	/* Ieee/vector.scm 308 */
															obj_t BgL_arg1247z00_881;

															{	/* Ieee/vector.scm 308 */
																long BgL_kz00_1602;

																BgL_kz00_1602 = (long) CINT(BgL_iz00_876);
																BgL_arg1247z00_881 =
																	VECTOR_REF(
																	((obj_t) BgL_sourcez00_40), BgL_kz00_1602);
															}
															VECTOR_SET(BgL_targetz00_38, BgL_jz00_877,
																BgL_arg1247z00_881);
														}
														{	/* Ieee/vector.scm 309 */
															long BgL_arg1250z00_882;
															long BgL_arg1252z00_883;

															BgL_arg1250z00_882 =
																((long) CINT(BgL_iz00_876) + ((long) 1));
															BgL_arg1252z00_883 = (BgL_jz00_877 + ((long) 1));
															{
																long BgL_jz00_2654;
																obj_t BgL_iz00_2652;

																BgL_iz00_2652 = BINT(BgL_arg1250z00_882);
																BgL_jz00_2654 = BgL_arg1252z00_883;
																BgL_jz00_877 = BgL_jz00_2654;
																BgL_iz00_876 = BgL_iz00_2652;
																goto BgL_zc3z04anonymousza31244ze3z87_878;
															}
														}
													}
												else
													{	/* Ieee/vector.scm 307 */
														BgL_tmpz00_2638 = ((bool_t) 0);
													}
											}
											return BBOOL(BgL_tmpz00_2638);
										}
									}
							}
						}
					}
				}
			}
		}

	}



/* vector-append */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2appendzd2zz__r4_vectors_6_8z00(obj_t
		BgL_vecz00_45, obj_t BgL_argsz00_46)
	{
		{	/* Ieee/vector.scm 314 */
			{
				long BgL_lenz00_898;
				obj_t BgL_vectsz00_899;

				BgL_lenz00_898 = VECTOR_LENGTH(BgL_vecz00_45);
				BgL_vectsz00_899 = BgL_argsz00_46;
			BgL_zc3z04anonymousza31257ze3z87_900:
				if (NULLP(BgL_vectsz00_899))
					{	/* Ieee/vector.scm 318 */
						obj_t BgL_resz00_902;

						BgL_resz00_902 = make_vector(BgL_lenz00_898, BUNSPEC);
						{	/* Ieee/vector.scm 110 */

							BGl_vectorzd2copyz12zc0zz__r4_vectors_6_8z00(BgL_resz00_902,
								((long) 0), BgL_vecz00_45, BINT(((long) 0)),
								BINT(VECTOR_LENGTH(BgL_vecz00_45)));
						}
						{
							long BgL_iz00_910;
							obj_t BgL_vectsz00_911;

							BgL_iz00_910 = VECTOR_LENGTH(BgL_vecz00_45);
							BgL_vectsz00_911 = BgL_argsz00_46;
						BgL_zc3z04anonymousza31259ze3z87_912:
							if (NULLP(BgL_vectsz00_911))
								{	/* Ieee/vector.scm 322 */
									return BgL_resz00_902;
								}
							else
								{	/* Ieee/vector.scm 324 */
									obj_t BgL_vecz00_914;

									BgL_vecz00_914 = CAR(((obj_t) BgL_vectsz00_911));
									{	/* Ieee/vector.scm 110 */

										BGl_vectorzd2copyz12zc0zz__r4_vectors_6_8z00(BgL_resz00_902,
											BgL_iz00_910, BgL_vecz00_914, BINT(((long) 0)),
											BINT(VECTOR_LENGTH(((obj_t) BgL_vecz00_914))));
									}
									{	/* Ieee/vector.scm 326 */
										long BgL_arg1263z00_920;
										obj_t BgL_arg1268z00_921;

										BgL_arg1263z00_920 =
											(BgL_iz00_910 + VECTOR_LENGTH(((obj_t) BgL_vecz00_914)));
										BgL_arg1268z00_921 = CDR(((obj_t) BgL_vectsz00_911));
										{
											obj_t BgL_vectsz00_2678;
											long BgL_iz00_2677;

											BgL_iz00_2677 = BgL_arg1263z00_920;
											BgL_vectsz00_2678 = BgL_arg1268z00_921;
											BgL_vectsz00_911 = BgL_vectsz00_2678;
											BgL_iz00_910 = BgL_iz00_2677;
											goto BgL_zc3z04anonymousza31259ze3z87_912;
										}
									}
								}
						}
					}
				else
					{	/* Ieee/vector.scm 327 */
						long BgL_arg1273z00_925;
						obj_t BgL_arg1274z00_926;

						{	/* Ieee/vector.scm 327 */
							long BgL_arg1275z00_927;

							{	/* Ieee/vector.scm 327 */
								obj_t BgL_arg1276z00_928;

								BgL_arg1276z00_928 = CAR(((obj_t) BgL_vectsz00_899));
								BgL_arg1275z00_927 =
									VECTOR_LENGTH(((obj_t) BgL_arg1276z00_928));
							}
							BgL_arg1273z00_925 = (BgL_arg1275z00_927 + BgL_lenz00_898);
						}
						BgL_arg1274z00_926 = CDR(((obj_t) BgL_vectsz00_899));
						{
							obj_t BgL_vectsz00_2688;
							long BgL_lenz00_2687;

							BgL_lenz00_2687 = BgL_arg1273z00_925;
							BgL_vectsz00_2688 = BgL_arg1274z00_926;
							BgL_vectsz00_899 = BgL_vectsz00_2688;
							BgL_lenz00_898 = BgL_lenz00_2687;
							goto BgL_zc3z04anonymousza31257ze3z87_900;
						}
					}
			}
		}

	}



/* &vector-append */
	obj_t BGl_z62vectorzd2appendzb0zz__r4_vectors_6_8z00(obj_t BgL_envz00_1998,
		obj_t BgL_vecz00_1999, obj_t BgL_argsz00_2000)
	{
		{	/* Ieee/vector.scm 314 */
			{	/* Ieee/vector.scm 315 */
				obj_t BgL_auxz00_2690;

				if (VECTORP(BgL_vecz00_1999))
					{	/* Ieee/vector.scm 315 */
						BgL_auxz00_2690 = BgL_vecz00_1999;
					}
				else
					{
						obj_t BgL_auxz00_2693;

						BgL_auxz00_2693 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 13916)),
							BGl_string1833z00zz__r4_vectors_6_8z00,
							BGl_string1811z00zz__r4_vectors_6_8z00, BgL_vecz00_1999);
						FAILURE(BgL_auxz00_2693, BFALSE, BFALSE);
					}
				return
					BGl_vectorzd2appendzd2zz__r4_vectors_6_8z00(BgL_auxz00_2690,
					BgL_argsz00_2000);
			}
		}

	}



/* sort */
	BGL_EXPORTED_DEF obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t BgL_o1z00_47,
		obj_t BgL_o2z00_48)
	{
		{	/* Ieee/vector.scm 332 */
			if (PROCEDUREP(BgL_o1z00_47))
				{	/* Ieee/vector.scm 333 */
					return
						BGl_innerzd2sortzd2zz__r4_vectors_6_8z00(BgL_o2z00_48,
						BgL_o1z00_47);
				}
			else
				{	/* Ieee/vector.scm 333 */
					return
						BGl_innerzd2sortzd2zz__r4_vectors_6_8z00(BgL_o1z00_47,
						BgL_o2z00_48);
				}
		}

	}



/* &sort */
	obj_t BGl_z62sortz62zz__r4_vectors_6_8z00(obj_t BgL_envz00_2001,
		obj_t BgL_o1z00_2002, obj_t BgL_o2z00_2003)
	{
		{	/* Ieee/vector.scm 332 */
			return BGl_sortz00zz__r4_vectors_6_8z00(BgL_o1z00_2002, BgL_o2z00_2003);
		}

	}



/* inner-sort */
	obj_t BGl_innerzd2sortzd2zz__r4_vectors_6_8z00(obj_t BgL_objz00_49,
		obj_t BgL_procz00_50)
	{
		{	/* Ieee/vector.scm 340 */
			if (NULLP(BgL_objz00_49))
				{	/* Ieee/vector.scm 342 */
					return BgL_objz00_49;
				}
			else
				{	/* Ieee/vector.scm 344 */
					bool_t BgL_test1980z00_2705;

					if (PAIRP(BgL_objz00_49))
						{	/* Ieee/vector.scm 344 */
							BgL_test1980z00_2705 = NULLP(CDR(BgL_objz00_49));
						}
					else
						{	/* Ieee/vector.scm 344 */
							BgL_test1980z00_2705 = ((bool_t) 0);
						}
					if (BgL_test1980z00_2705)
						{	/* Ieee/vector.scm 344 */
							return BgL_objz00_49;
						}
					else
						{	/* Ieee/vector.scm 347 */
							obj_t BgL_vecz00_935;

							if (VECTORP(BgL_objz00_49))
								{	/* Ieee/vector.scm 349 */
									obj_t BgL_newz00_940;

									BgL_newz00_940 = create_vector(VECTOR_LENGTH(BgL_objz00_49));
									{	/* Ieee/vector.scm 350 */

										{
											long BgL_iz00_1646;

											BgL_iz00_1646 = ((long) 0);
										BgL_loopz00_1645:
											if ((BgL_iz00_1646 < VECTOR_LENGTH(BgL_objz00_49)))
												{	/* Ieee/vector.scm 352 */
													{	/* Ieee/vector.scm 354 */
														obj_t BgL_arg1286z00_1651;

														BgL_arg1286z00_1651 =
															VECTOR_REF(
															((obj_t) BgL_objz00_49), BgL_iz00_1646);
														VECTOR_SET(BgL_newz00_940, BgL_iz00_1646,
															BgL_arg1286z00_1651);
													}
													{
														long BgL_iz00_2720;

														BgL_iz00_2720 = (BgL_iz00_1646 + ((long) 1));
														BgL_iz00_1646 = BgL_iz00_2720;
														goto BgL_loopz00_1645;
													}
												}
											else
												{	/* Ieee/vector.scm 352 */
													((bool_t) 0);
												}
										}
										BgL_vecz00_935 = BgL_newz00_940;
									}
								}
							else
								{	/* Ieee/vector.scm 348 */
									if (PAIRP(BgL_objz00_49))
										{	/* Ieee/vector.scm 357 */
											BgL_vecz00_935 =
												BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
												(BgL_objz00_49);
										}
									else
										{	/* Ieee/vector.scm 357 */
											BgL_vecz00_935 =
												BGl_errorz00zz__errorz00
												(BGl_string1834z00zz__r4_vectors_6_8z00,
												BGl_string1835z00zz__r4_vectors_6_8z00, BgL_objz00_49);
										}
								}
							{	/* Ieee/vector.scm 363 */
								obj_t BgL_resz00_936;

								BgL_resz00_936 = sort_vector(BgL_vecz00_935, BgL_procz00_50);
								if (PAIRP(BgL_objz00_49))
									{	/* Ieee/vector.scm 364 */
										return
											BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00
											(BgL_resz00_936);
									}
								else
									{	/* Ieee/vector.scm 364 */
										return BgL_resz00_936;
									}
							}
						}
				}
		}

	}



/* vector-mapN! */
	obj_t BGl_vectorzd2mapNz12zc0zz__r4_vectors_6_8z00(obj_t BgL_procz00_54,
		obj_t BgL_vdestz00_55, obj_t BgL_vsrcz00_56, obj_t BgL_vrestz00_57)
	{
		{	/* Ieee/vector.scm 383 */
			{
				long BgL_iz00_962;

				BgL_iz00_962 = ((long) 0);
			BgL_zc3z04anonymousza31297ze3z87_963:
				if ((BgL_iz00_962 < VECTOR_LENGTH(((obj_t) BgL_vdestz00_55))))
					{	/* Ieee/vector.scm 387 */
						obj_t BgL_argsz00_965;

						if (NULLP(BgL_vrestz00_57))
							{	/* Ieee/vector.scm 387 */
								BgL_argsz00_965 = BNIL;
							}
						else
							{	/* Ieee/vector.scm 387 */
								obj_t BgL_head1038z00_972;

								{	/* Ieee/vector.scm 387 */
									obj_t BgL_res1670z00_1698;

									BgL_res1670z00_1698 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1038z00_972 = BgL_res1670z00_1698;
								}
								{
									obj_t BgL_l1036z00_1726;
									obj_t BgL_tail1039z00_1727;

									BgL_l1036z00_1726 = BgL_vrestz00_57;
									BgL_tail1039z00_1727 = BgL_head1038z00_972;
								BgL_zc3z04anonymousza31303ze3z87_1725:
									if (NULLP(BgL_l1036z00_1726))
										{	/* Ieee/vector.scm 387 */
											BgL_argsz00_965 = CDR(BgL_head1038z00_972);
										}
									else
										{	/* Ieee/vector.scm 387 */
											obj_t BgL_newtail1040z00_1734;

											{	/* Ieee/vector.scm 387 */
												obj_t BgL_arg1307z00_1735;

												{	/* Ieee/vector.scm 387 */
													obj_t BgL_vz00_1736;

													BgL_vz00_1736 = CAR(((obj_t) BgL_l1036z00_1726));
													BgL_arg1307z00_1735 =
														VECTOR_REF(((obj_t) BgL_vz00_1736), BgL_iz00_962);
												}
												{	/* Ieee/vector.scm 387 */
													obj_t BgL_res1676z00_1743;

													BgL_res1676z00_1743 =
														MAKE_YOUNG_PAIR(BgL_arg1307z00_1735, BNIL);
													BgL_newtail1040z00_1734 = BgL_res1676z00_1743;
												}
											}
											SET_CDR(BgL_tail1039z00_1727, BgL_newtail1040z00_1734);
											{	/* Ieee/vector.scm 387 */
												obj_t BgL_arg1306z00_1737;

												BgL_arg1306z00_1737 = CDR(((obj_t) BgL_l1036z00_1726));
												{
													obj_t BgL_tail1039z00_2749;
													obj_t BgL_l1036z00_2748;

													BgL_l1036z00_2748 = BgL_arg1306z00_1737;
													BgL_tail1039z00_2749 = BgL_newtail1040z00_1734;
													BgL_tail1039z00_1727 = BgL_tail1039z00_2749;
													BgL_l1036z00_1726 = BgL_l1036z00_2748;
													goto BgL_zc3z04anonymousza31303ze3z87_1725;
												}
											}
										}
								}
							}
						{	/* Ieee/vector.scm 387 */
							obj_t BgL_nvalz00_966;

							{	/* Ieee/vector.scm 388 */
								obj_t BgL_auxz00_2750;

								{	/* Ieee/vector.scm 388 */
									obj_t BgL_arg1300z00_968;

									BgL_arg1300z00_968 = VECTOR_REF(BgL_vsrcz00_56, BgL_iz00_962);
									{	/* Ieee/vector.scm 388 */
										obj_t BgL_list1301z00_969;

										BgL_list1301z00_969 =
											MAKE_YOUNG_PAIR(BgL_argsz00_965, BNIL);
										BgL_auxz00_2750 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1300z00_968, BgL_list1301z00_969);
									}
								}
								BgL_nvalz00_966 = apply(BgL_procz00_54, BgL_auxz00_2750);
							}
							{	/* Ieee/vector.scm 388 */

								VECTOR_SET(
									((obj_t) BgL_vdestz00_55), BgL_iz00_962, BgL_nvalz00_966);
								{
									long BgL_iz00_2757;

									BgL_iz00_2757 = (BgL_iz00_962 + ((long) 1));
									BgL_iz00_962 = BgL_iz00_2757;
									goto BgL_zc3z04anonymousza31297ze3z87_963;
								}
							}
						}
					}
				else
					{	/* Ieee/vector.scm 386 */
						return BgL_vdestz00_55;
					}
			}
		}

	}



/* vector-map */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2mapzd2zz__r4_vectors_6_8z00(obj_t
		BgL_procz00_58, obj_t BgL_vz00_59, obj_t BgL_restz00_60)
	{
		{	/* Ieee/vector.scm 396 */
			{	/* Ieee/vector.scm 397 */
				obj_t BgL_nvz00_985;

				BgL_nvz00_985 = create_vector(VECTOR_LENGTH(BgL_vz00_59));
				{	/* Ieee/vector.scm 398 */

					if (NULLP(BgL_restz00_60))
						{
							long BgL_iz00_1756;

							BgL_iz00_1756 = ((long) 0);
						BgL_loopz00_1755:
							if ((BgL_iz00_1756 < VECTOR_LENGTH(BgL_nvz00_985)))
								{	/* Ieee/vector.scm 374 */
									{	/* Ieee/vector.scm 376 */
										obj_t BgL_arg1292z00_1758;

										{	/* Ieee/vector.scm 376 */
											obj_t BgL_arg1295z00_1759;

											BgL_arg1295z00_1759 =
												VECTOR_REF(BgL_vz00_59, BgL_iz00_1756);
											BgL_arg1292z00_1758 =
												PROCEDURE_ENTRY(BgL_procz00_58) (BgL_procz00_58,
												BgL_arg1295z00_1759, BEOA);
										}
										VECTOR_SET(BgL_nvz00_985, BgL_iz00_1756,
											BgL_arg1292z00_1758);
									}
									{
										long BgL_iz00_2772;

										BgL_iz00_2772 = (BgL_iz00_1756 + ((long) 1));
										BgL_iz00_1756 = BgL_iz00_2772;
										goto BgL_loopz00_1755;
									}
								}
							else
								{	/* Ieee/vector.scm 374 */
									return BgL_nvz00_985;
								}
						}
					else
						{	/* Ieee/vector.scm 402 */
							bool_t BgL_test1991z00_2774;

							{	/* Ieee/vector.scm 402 */
								obj_t BgL_zc3z04anonymousza31316ze3z87_2004;

								BgL_zc3z04anonymousza31316ze3z87_2004 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza31316ze3ze5zz__r4_vectors_6_8z00,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_zc3z04anonymousza31316ze3z87_2004,
									(int) (((long) 0)), BINT(VECTOR_LENGTH(BgL_vz00_59)));
								BgL_test1991z00_2774 =
									CBOOL(BGl_everyz00zz__r4_pairs_and_lists_6_3z00
									(BgL_zc3z04anonymousza31316ze3z87_2004, BNIL));
							}
							if (BgL_test1991z00_2774)
								{	/* Ieee/vector.scm 402 */
									return
										BGl_vectorzd2mapNz12zc0zz__r4_vectors_6_8z00(BgL_procz00_58,
										BgL_nvz00_985, BgL_vz00_59, BgL_restz00_60);
								}
							else
								{	/* Ieee/vector.scm 402 */
									return
										BGl_errorz00zz__errorz00
										(BGl_string1836z00zz__r4_vectors_6_8z00,
										BGl_string1837z00zz__r4_vectors_6_8z00, BgL_restz00_60);
								}
						}
				}
			}
		}

	}



/* &vector-map */
	obj_t BGl_z62vectorzd2mapzb0zz__r4_vectors_6_8z00(obj_t BgL_envz00_2005,
		obj_t BgL_procz00_2006, obj_t BgL_vz00_2007, obj_t BgL_restz00_2008)
	{
		{	/* Ieee/vector.scm 396 */
			{	/* Ieee/vector.scm 397 */
				obj_t BgL_auxz00_2793;
				obj_t BgL_auxz00_2786;

				if (VECTORP(BgL_vz00_2007))
					{	/* Ieee/vector.scm 397 */
						BgL_auxz00_2793 = BgL_vz00_2007;
					}
				else
					{
						obj_t BgL_auxz00_2796;

						BgL_auxz00_2796 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 16779)),
							BGl_string1838z00zz__r4_vectors_6_8z00,
							BGl_string1811z00zz__r4_vectors_6_8z00, BgL_vz00_2007);
						FAILURE(BgL_auxz00_2796, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_procz00_2006))
					{	/* Ieee/vector.scm 397 */
						BgL_auxz00_2786 = BgL_procz00_2006;
					}
				else
					{
						obj_t BgL_auxz00_2789;

						BgL_auxz00_2789 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 16779)),
							BGl_string1838z00zz__r4_vectors_6_8z00,
							BGl_string1839z00zz__r4_vectors_6_8z00, BgL_procz00_2006);
						FAILURE(BgL_auxz00_2789, BFALSE, BFALSE);
					}
				return
					BGl_vectorzd2mapzd2zz__r4_vectors_6_8z00(BgL_auxz00_2786,
					BgL_auxz00_2793, BgL_restz00_2008);
			}
		}

	}



/* &<@anonymous:1316> */
	obj_t BGl_z62zc3z04anonymousza31316ze3ze5zz__r4_vectors_6_8z00(obj_t
		BgL_envz00_2009, obj_t BgL_vz00_2011)
	{
		{	/* Ieee/vector.scm 402 */
			{	/* Ieee/vector.scm 402 */
				long BgL_lenz00_2010;

				BgL_lenz00_2010 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_2009, (int) (((long) 0))));
				{	/* Ieee/vector.scm 402 */
					bool_t BgL_tmpz00_2804;

					if (VECTORP(BgL_vz00_2011))
						{	/* Ieee/vector.scm 402 */
							BgL_tmpz00_2804 =
								(VECTOR_LENGTH(BgL_vz00_2011) == BgL_lenz00_2010);
						}
					else
						{	/* Ieee/vector.scm 402 */
							BgL_tmpz00_2804 = ((bool_t) 0);
						}
					return BBOOL(BgL_tmpz00_2804);
				}
			}
		}

	}



/* vector-map! */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2mapz12zc0zz__r4_vectors_6_8z00(obj_t
		BgL_procz00_61, obj_t BgL_vz00_62, obj_t BgL_restz00_63)
	{
		{	/* Ieee/vector.scm 410 */
			if (NULLP(BgL_restz00_63))
				{
					long BgL_iz00_1782;

					BgL_iz00_1782 = ((long) 0);
				BgL_loopz00_1781:
					if ((BgL_iz00_1782 < VECTOR_LENGTH(BgL_vz00_62)))
						{	/* Ieee/vector.scm 374 */
							{	/* Ieee/vector.scm 376 */
								obj_t BgL_arg1292z00_1784;

								{	/* Ieee/vector.scm 376 */
									obj_t BgL_arg1295z00_1785;

									BgL_arg1295z00_1785 = VECTOR_REF(BgL_vz00_62, BgL_iz00_1782);
									BgL_arg1292z00_1784 =
										PROCEDURE_ENTRY(BgL_procz00_61) (BgL_procz00_61,
										BgL_arg1295z00_1785, BEOA);
								}
								VECTOR_SET(BgL_vz00_62, BgL_iz00_1782, BgL_arg1292z00_1784);
							}
							{
								long BgL_iz00_2821;

								BgL_iz00_2821 = (BgL_iz00_1782 + ((long) 1));
								BgL_iz00_1782 = BgL_iz00_2821;
								goto BgL_loopz00_1781;
							}
						}
					else
						{	/* Ieee/vector.scm 374 */
							return BgL_vz00_62;
						}
				}
			else
				{	/* Ieee/vector.scm 415 */
					bool_t BgL_test1997z00_2823;

					{	/* Ieee/vector.scm 415 */
						obj_t BgL_zc3z04anonymousza31326ze3z87_2012;

						BgL_zc3z04anonymousza31326ze3z87_2012 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31326ze3ze5zz__r4_vectors_6_8z00,
							(int) (((long) 1)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31326ze3z87_2012,
							(int) (((long) 0)), BINT(VECTOR_LENGTH(BgL_vz00_62)));
						BgL_test1997z00_2823 =
							CBOOL(BGl_everyz00zz__r4_pairs_and_lists_6_3z00
							(BgL_zc3z04anonymousza31326ze3z87_2012, BNIL));
					}
					if (BgL_test1997z00_2823)
						{	/* Ieee/vector.scm 415 */
							return
								BGl_vectorzd2mapNz12zc0zz__r4_vectors_6_8z00(BgL_procz00_61,
								BgL_vz00_62, BgL_vz00_62, BgL_restz00_63);
						}
					else
						{	/* Ieee/vector.scm 415 */
							return
								BGl_errorz00zz__errorz00(BGl_string1840z00zz__r4_vectors_6_8z00,
								BGl_string1837z00zz__r4_vectors_6_8z00, BgL_restz00_63);
						}
				}
		}

	}



/* &vector-map! */
	obj_t BGl_z62vectorzd2mapz12za2zz__r4_vectors_6_8z00(obj_t BgL_envz00_2013,
		obj_t BgL_procz00_2014, obj_t BgL_vz00_2015, obj_t BgL_restz00_2016)
	{
		{	/* Ieee/vector.scm 410 */
			{	/* Ieee/vector.scm 411 */
				obj_t BgL_auxz00_2842;
				obj_t BgL_auxz00_2835;

				if (VECTORP(BgL_vz00_2015))
					{	/* Ieee/vector.scm 411 */
						BgL_auxz00_2842 = BgL_vz00_2015;
					}
				else
					{
						obj_t BgL_auxz00_2845;

						BgL_auxz00_2845 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 17324)),
							BGl_string1841z00zz__r4_vectors_6_8z00,
							BGl_string1811z00zz__r4_vectors_6_8z00, BgL_vz00_2015);
						FAILURE(BgL_auxz00_2845, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_procz00_2014))
					{	/* Ieee/vector.scm 411 */
						BgL_auxz00_2835 = BgL_procz00_2014;
					}
				else
					{
						obj_t BgL_auxz00_2838;

						BgL_auxz00_2838 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 17324)),
							BGl_string1841z00zz__r4_vectors_6_8z00,
							BGl_string1839z00zz__r4_vectors_6_8z00, BgL_procz00_2014);
						FAILURE(BgL_auxz00_2838, BFALSE, BFALSE);
					}
				return
					BGl_vectorzd2mapz12zc0zz__r4_vectors_6_8z00(BgL_auxz00_2835,
					BgL_auxz00_2842, BgL_restz00_2016);
			}
		}

	}



/* &<@anonymous:1326> */
	obj_t BGl_z62zc3z04anonymousza31326ze3ze5zz__r4_vectors_6_8z00(obj_t
		BgL_envz00_2017, obj_t BgL_vz00_2019)
	{
		{	/* Ieee/vector.scm 415 */
			{	/* Ieee/vector.scm 415 */
				long BgL_lenz00_2018;

				BgL_lenz00_2018 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_2017, (int) (((long) 0))));
				{	/* Ieee/vector.scm 415 */
					bool_t BgL_tmpz00_2853;

					if (VECTORP(BgL_vz00_2019))
						{	/* Ieee/vector.scm 415 */
							BgL_tmpz00_2853 =
								(VECTOR_LENGTH(BgL_vz00_2019) == BgL_lenz00_2018);
						}
					else
						{	/* Ieee/vector.scm 415 */
							BgL_tmpz00_2853 = ((bool_t) 0);
						}
					return BBOOL(BgL_tmpz00_2853);
				}
			}
		}

	}



/* vector-for-each2 */
	bool_t BGl_vectorzd2forzd2each2z00zz__r4_vectors_6_8z00(obj_t BgL_procz00_64,
		obj_t BgL_vsrcz00_65)
	{
		{	/* Ieee/vector.scm 423 */
			{
				long BgL_iz00_1813;

				BgL_iz00_1813 = ((long) 0);
			BgL_loopz00_1812:
				if ((BgL_iz00_1813 < VECTOR_LENGTH(BgL_vsrcz00_65)))
					{	/* Ieee/vector.scm 426 */
						{	/* Ieee/vector.scm 427 */
							obj_t BgL_arg1330z00_1818;

							BgL_arg1330z00_1818 = VECTOR_REF(BgL_vsrcz00_65, BgL_iz00_1813);
							PROCEDURE_ENTRY(BgL_procz00_64) (BgL_procz00_64,
								BgL_arg1330z00_1818, BEOA);
						}
						{
							long BgL_iz00_2867;

							BgL_iz00_2867 = (BgL_iz00_1813 + ((long) 1));
							BgL_iz00_1813 = BgL_iz00_2867;
							goto BgL_loopz00_1812;
						}
					}
				else
					{	/* Ieee/vector.scm 426 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* vector-for-eachN */
	bool_t BGl_vectorzd2forzd2eachNz00zz__r4_vectors_6_8z00(obj_t BgL_procz00_66,
		obj_t BgL_vsrcz00_67, obj_t BgL_vrestz00_68)
	{
		{	/* Ieee/vector.scm 433 */
			{
				long BgL_iz00_1029;

				BgL_iz00_1029 = ((long) 0);
			BgL_zc3z04anonymousza31332ze3z87_1030:
				if ((BgL_iz00_1029 < VECTOR_LENGTH(BgL_vsrcz00_67)))
					{	/* Ieee/vector.scm 437 */
						obj_t BgL_argsz00_1032;

						if (NULLP(BgL_vrestz00_68))
							{	/* Ieee/vector.scm 437 */
								BgL_argsz00_1032 = BNIL;
							}
						else
							{	/* Ieee/vector.scm 437 */
								obj_t BgL_head1043z00_1038;

								{	/* Ieee/vector.scm 437 */
									obj_t BgL_res1692z00_1829;

									BgL_res1692z00_1829 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1043z00_1038 = BgL_res1692z00_1829;
								}
								{
									obj_t BgL_l1041z00_1857;
									obj_t BgL_tail1044z00_1858;

									BgL_l1041z00_1857 = BgL_vrestz00_68;
									BgL_tail1044z00_1858 = BgL_head1043z00_1038;
								BgL_zc3z04anonymousza31339ze3z87_1856:
									if (NULLP(BgL_l1041z00_1857))
										{	/* Ieee/vector.scm 437 */
											BgL_argsz00_1032 = CDR(BgL_head1043z00_1038);
										}
									else
										{	/* Ieee/vector.scm 437 */
											obj_t BgL_newtail1045z00_1865;

											{	/* Ieee/vector.scm 437 */
												obj_t BgL_arg1342z00_1866;

												{	/* Ieee/vector.scm 437 */
													obj_t BgL_vz00_1867;

													BgL_vz00_1867 = CAR(((obj_t) BgL_l1041z00_1857));
													BgL_arg1342z00_1866 =
														VECTOR_REF(((obj_t) BgL_vz00_1867), BgL_iz00_1029);
												}
												{	/* Ieee/vector.scm 437 */
													obj_t BgL_res1698z00_1874;

													BgL_res1698z00_1874 =
														MAKE_YOUNG_PAIR(BgL_arg1342z00_1866, BNIL);
													BgL_newtail1045z00_1865 = BgL_res1698z00_1874;
												}
											}
											SET_CDR(BgL_tail1044z00_1858, BgL_newtail1045z00_1865);
											{	/* Ieee/vector.scm 437 */
												obj_t BgL_arg1341z00_1868;

												BgL_arg1341z00_1868 = CDR(((obj_t) BgL_l1041z00_1857));
												{
													obj_t BgL_tail1044z00_2887;
													obj_t BgL_l1041z00_2886;

													BgL_l1041z00_2886 = BgL_arg1341z00_1868;
													BgL_tail1044z00_2887 = BgL_newtail1045z00_1865;
													BgL_tail1044z00_1858 = BgL_tail1044z00_2887;
													BgL_l1041z00_1857 = BgL_l1041z00_2886;
													goto BgL_zc3z04anonymousza31339ze3z87_1856;
												}
											}
										}
								}
							}
						{	/* Ieee/vector.scm 438 */
							obj_t BgL_auxz00_2888;

							{	/* Ieee/vector.scm 438 */
								obj_t BgL_arg1334z00_1033;

								BgL_arg1334z00_1033 = VECTOR_REF(BgL_vsrcz00_67, BgL_iz00_1029);
								{	/* Ieee/vector.scm 438 */
									obj_t BgL_list1335z00_1034;

									BgL_list1335z00_1034 =
										MAKE_YOUNG_PAIR(BgL_argsz00_1032, BNIL);
									BgL_auxz00_2888 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1334z00_1033, BgL_list1335z00_1034);
								}
							}
							apply(BgL_procz00_66, BgL_auxz00_2888);
						}
						{
							long BgL_iz00_2893;

							BgL_iz00_2893 = (BgL_iz00_1029 + ((long) 1));
							BgL_iz00_1029 = BgL_iz00_2893;
							goto BgL_zc3z04anonymousza31332ze3z87_1030;
						}
					}
				else
					{	/* Ieee/vector.scm 436 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* vector-for-each */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2forzd2eachz00zz__r4_vectors_6_8z00(obj_t
		BgL_procz00_69, obj_t BgL_vz00_70, obj_t BgL_restz00_71)
	{
		{	/* Ieee/vector.scm 444 */
			if (NULLP(BgL_restz00_71))
				{	/* Ieee/vector.scm 447 */
					return
						BBOOL(BGl_vectorzd2forzd2each2z00zz__r4_vectors_6_8z00
						(BgL_procz00_69, BgL_vz00_70));
				}
			else
				{	/* Ieee/vector.scm 449 */
					bool_t BgL_test2006z00_2899;

					{	/* Ieee/vector.scm 449 */
						obj_t BgL_zc3z04anonymousza31352ze3z87_2020;

						BgL_zc3z04anonymousza31352ze3z87_2020 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31352ze3ze5zz__r4_vectors_6_8z00,
							(int) (((long) 1)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31352ze3z87_2020,
							(int) (((long) 0)), BINT(VECTOR_LENGTH(BgL_vz00_70)));
						BgL_test2006z00_2899 =
							CBOOL(BGl_everyz00zz__r4_pairs_and_lists_6_3z00
							(BgL_zc3z04anonymousza31352ze3z87_2020, BNIL));
					}
					if (BgL_test2006z00_2899)
						{	/* Ieee/vector.scm 449 */
							return
								BBOOL(BGl_vectorzd2forzd2eachNz00zz__r4_vectors_6_8z00
								(BgL_procz00_69, BgL_vz00_70, BgL_restz00_71));
						}
					else
						{	/* Ieee/vector.scm 449 */
							return
								BGl_errorz00zz__errorz00(BGl_string1842z00zz__r4_vectors_6_8z00,
								BGl_string1837z00zz__r4_vectors_6_8z00, BgL_restz00_71);
						}
				}
		}

	}



/* &vector-for-each */
	obj_t BGl_z62vectorzd2forzd2eachz62zz__r4_vectors_6_8z00(obj_t
		BgL_envz00_2021, obj_t BgL_procz00_2022, obj_t BgL_vz00_2023,
		obj_t BgL_restz00_2024)
	{
		{	/* Ieee/vector.scm 444 */
			{	/* Ieee/vector.scm 445 */
				obj_t BgL_auxz00_2919;
				obj_t BgL_auxz00_2912;

				if (VECTORP(BgL_vz00_2023))
					{	/* Ieee/vector.scm 445 */
						BgL_auxz00_2919 = BgL_vz00_2023;
					}
				else
					{
						obj_t BgL_auxz00_2922;

						BgL_auxz00_2922 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 18728)),
							BGl_string1843z00zz__r4_vectors_6_8z00,
							BGl_string1811z00zz__r4_vectors_6_8z00, BgL_vz00_2023);
						FAILURE(BgL_auxz00_2922, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_procz00_2022))
					{	/* Ieee/vector.scm 445 */
						BgL_auxz00_2912 = BgL_procz00_2022;
					}
				else
					{
						obj_t BgL_auxz00_2915;

						BgL_auxz00_2915 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 18728)),
							BGl_string1843z00zz__r4_vectors_6_8z00,
							BGl_string1839z00zz__r4_vectors_6_8z00, BgL_procz00_2022);
						FAILURE(BgL_auxz00_2915, BFALSE, BFALSE);
					}
				return
					BGl_vectorzd2forzd2eachz00zz__r4_vectors_6_8z00(BgL_auxz00_2912,
					BgL_auxz00_2919, BgL_restz00_2024);
			}
		}

	}



/* &<@anonymous:1352> */
	obj_t BGl_z62zc3z04anonymousza31352ze3ze5zz__r4_vectors_6_8z00(obj_t
		BgL_envz00_2025, obj_t BgL_vz00_2027)
	{
		{	/* Ieee/vector.scm 449 */
			{	/* Ieee/vector.scm 449 */
				long BgL_lenz00_2026;

				BgL_lenz00_2026 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_2025, (int) (((long) 0))));
				{	/* Ieee/vector.scm 449 */
					bool_t BgL_tmpz00_2930;

					if (VECTORP(BgL_vz00_2027))
						{	/* Ieee/vector.scm 449 */
							BgL_tmpz00_2930 =
								(VECTOR_LENGTH(BgL_vz00_2027) == BgL_lenz00_2026);
						}
					else
						{	/* Ieee/vector.scm 449 */
							BgL_tmpz00_2930 = ((bool_t) 0);
						}
					return BBOOL(BgL_tmpz00_2930);
				}
			}
		}

	}



/* vector-shrink! */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2shrinkz12zc0zz__r4_vectors_6_8z00(obj_t
		BgL_vecz00_72, long BgL_nlenz00_73)
	{
		{	/* Ieee/vector.scm 457 */
			return BGL_VECTOR_SHRINK(BgL_vecz00_72, BgL_nlenz00_73);
		}

	}



/* &vector-shrink! */
	obj_t BGl_z62vectorzd2shrinkz12za2zz__r4_vectors_6_8z00(obj_t BgL_envz00_2028,
		obj_t BgL_vecz00_2029, obj_t BgL_nlenz00_2030)
	{
		{	/* Ieee/vector.scm 457 */
			{	/* Ieee/vector.scm 458 */
				long BgL_auxz00_2944;
				obj_t BgL_auxz00_2937;

				{	/* Ieee/vector.scm 458 */
					obj_t BgL_tmpz00_2945;

					if (INTEGERP(BgL_nlenz00_2030))
						{	/* Ieee/vector.scm 458 */
							BgL_tmpz00_2945 = BgL_nlenz00_2030;
						}
					else
						{
							obj_t BgL_auxz00_2948;

							BgL_auxz00_2948 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 19255)),
								BGl_string1844z00zz__r4_vectors_6_8z00,
								BGl_string1809z00zz__r4_vectors_6_8z00, BgL_nlenz00_2030);
							FAILURE(BgL_auxz00_2948, BFALSE, BFALSE);
						}
					BgL_auxz00_2944 = (long) CINT(BgL_tmpz00_2945);
				}
				if (VECTORP(BgL_vecz00_2029))
					{	/* Ieee/vector.scm 458 */
						BgL_auxz00_2937 = BgL_vecz00_2029;
					}
				else
					{
						obj_t BgL_auxz00_2940;

						BgL_auxz00_2940 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1807z00zz__r4_vectors_6_8z00, BINT(((long) 19255)),
							BGl_string1844z00zz__r4_vectors_6_8z00,
							BGl_string1811z00zz__r4_vectors_6_8z00, BgL_vecz00_2029);
						FAILURE(BgL_auxz00_2940, BFALSE, BFALSE);
					}
				return
					BGl_vectorzd2shrinkz12zc0zz__r4_vectors_6_8z00(BgL_auxz00_2937,
					BgL_auxz00_2944);
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_vectors_6_8z00()
	{
		{	/* Ieee/vector.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1845z00zz__r4_vectors_6_8z00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1845z00zz__r4_vectors_6_8z00));
		}

	}

#ifdef __cplusplus
}
#endif
