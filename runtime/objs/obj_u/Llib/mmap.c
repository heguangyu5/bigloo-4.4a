/*===========================================================================*/
/*   (Llib/mmap.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/mmap.scm -indent -o objs/obj_u/Llib/mmap.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_keyword1871z00zz__mmapz00 = BUNSPEC;
	static obj_t BGl_keyword1873z00zz__mmapz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_mmapzd2putzd2charz12z12zz__mmapz00(obj_t,
		unsigned char);
	static obj_t BGl_symbol1915z00zz__mmapz00 = BUNSPEC;
	static obj_t BGl_symbol1918z00zz__mmapz00 = BUNSPEC;
	extern obj_t BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62closezd2mmapzb0zz__mmapz00(obj_t, obj_t);
	static obj_t BGl_z62mmapzd2readzd2positionz62zz__mmapz00(obj_t, obj_t);
	static obj_t BGl_z62mmapzf3z91zz__mmapz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_mmapzd2ze3bstringz31zz__mmapz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__mmapz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62mmapzd2lengthzb0zz__mmapz00(obj_t, obj_t);
	static obj_t BGl_z62mmapzd2substringzd2setz12z70zz__mmapz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t string_to_bstring_len(char *, int);
	static obj_t BGl_symbol1875z00zz__mmapz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_mmapzd2getzd2stringz00zz__mmapz00(obj_t, long);
	static obj_t BGl_z62mmapzd2getzd2stringz62zz__mmapz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol1883z00zz__mmapz00 = BUNSPEC;
	static obj_t BGl_z62mmapzd2ze3stringz53zz__mmapz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__mmapz00();
	BGL_EXPORTED_DECL unsigned char BGl_mmapzd2refzd2zz__mmapz00(obj_t, long);
	static obj_t BGl_z62mmapzd2writezd2positionz62zz__mmapz00(obj_t, obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__mmapz00();
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62mmapzd2setzd2urz12z70zz__mmapz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_mmapzd2substringzd2setz12z12zz__mmapz00(obj_t,
		long, obj_t);
	static obj_t BGl_methodzd2initzd2zz__mmapz00();
	BGL_EXPORTED_DECL unsigned char BGl_mmapzd2refzd2urz00zz__mmapz00(obj_t,
		long);
	BGL_EXPORTED_DECL long
		BGl_mmapzd2readzd2positionzd2setz12zc0zz__mmapz00(obj_t, long);
	extern obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_mmapzd2writezd2positionz00zz__mmapz00(obj_t);
	static obj_t BGl_z62mmapzd2writezd2positionzd2setz12za2zz__mmapz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_mmapzd2readzd2positionz00zz__mmapz00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62mmapzd2setz12za2zz__mmapz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__stringzd2ze3mmapz31zz__mmapz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_mmapzd2putzd2stringz12z12zz__mmapz00(obj_t,
		obj_t);
	static obj_t BGl__openzd2mmapzd2zz__mmapz00(obj_t, obj_t);
	static obj_t BGl_z62mmapzd2getzd2charz62zz__mmapz00(obj_t, obj_t);
	static obj_t BGl_z62mmapzd2namezb0zz__mmapz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_mmapzd2setz12zc0zz__mmapz00(obj_t, long,
		unsigned char);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__mmapz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_openzd2mmapzd2zz__mmapz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3mmapz31zz__mmapz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62mmapzd2refzd2urz62zz__mmapz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__mmapz00();
	static obj_t BGl_z62mmapzd2ze3bstringz53zz__mmapz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__mmapz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__mmapz00();
	BGL_EXPORTED_DECL obj_t BGl_mmapzd2namezd2zz__mmapz00(obj_t);
	static obj_t BGl_z62mmapzd2substringzb0zz__mmapz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_list1870z00zz__mmapz00 = BUNSPEC;
	BGL_EXPORTED_DECL char *BGl_mmapzd2ze3stringz31zz__mmapz00(obj_t);
	static obj_t BGl_z62mmapzd2putzd2stringz12z70zz__mmapz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_mmapzd2writezd2positionzd2setz12zc0zz__mmapz00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_mmapzd2setzd2urz12z12zz__mmapz00(obj_t, long,
		unsigned char);
	static obj_t BGl_z62mmapzd2putzd2charz12z70zz__mmapz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_mmapzd2lengthzd2zz__mmapz00(obj_t);
	static obj_t BGl_z62mmapzd2refzb0zz__mmapz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_mmapzd2substringzd2zz__mmapz00(obj_t, long, long);
	extern obj_t bstring_to_keyword(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_mmapzf3zf3zz__mmapz00(obj_t);
	static obj_t BGl_z62mmapzd2readzd2positionzd2setz12za2zz__mmapz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL unsigned char BGl_mmapzd2getzd2charz00zz__mmapz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_closezd2mmapzd2zz__mmapz00(obj_t);
	extern obj_t make_string_sans_fill(long);
	static obj_t BGl_symbol1902z00zz__mmapz00 = BUNSPEC;
	static obj_t BGl_symbol1905z00zz__mmapz00 = BUNSPEC;
	static obj_t BGl_symbol1908z00zz__mmapz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2substringzd2envz00zz__mmapz00,
		BgL_bgl_za762mmapza7d2substr1925z00, BGl_z62mmapzd2substringzb0zz__mmapz00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2writezd2positionzd2envzd2zz__mmapz00,
		BgL_bgl_za762mmapza7d2writeza71926za7,
		BGl_z62mmapzd2writezd2positionz62zz__mmapz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2lengthzd2envz00zz__mmapz00,
		BgL_bgl_za762mmapza7d2length1927z00, BGl_z62mmapzd2lengthzb0zz__mmapz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzf3zd2envz21zz__mmapz00,
		BgL_bgl_za762mmapza7f3za791za7za7_1928za7, BGl_z62mmapzf3z91zz__mmapz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2readzd2positionzd2envzd2zz__mmapz00,
		BgL_bgl_za762mmapza7d2readza7d1929za7,
		BGl_z62mmapzd2readzd2positionz62zz__mmapz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2setz12zd2envz12zz__mmapz00,
		BgL_bgl_za762mmapza7d2setza7121930za7, BGl_z62mmapzd2setz12za2zz__mmapz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd2ze3mmapzd2envze3zz__mmapz00,
		BgL_bgl__stringza7d2za7e3mma1931z00, opt_generic_entry,
		BGl__stringzd2ze3mmapz31zz__mmapz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2putzd2stringz12zd2envzc0zz__mmapz00,
		BgL_bgl_za762mmapza7d2putza7d21932za7,
		BGl_z62mmapzd2putzd2stringz12z70zz__mmapz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2getzd2charzd2envzd2zz__mmapz00,
		BgL_bgl_za762mmapza7d2getza7d21933za7,
		BGl_z62mmapzd2getzd2charz62zz__mmapz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2ze3stringzd2envze3zz__mmapz00,
		BgL_bgl_za762mmapza7d2za7e3str1934za7,
		BGl_z62mmapzd2ze3stringz53zz__mmapz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1900z00zz__mmapz00,
		BgL_bgl_string1900za700za7za7_1935za7, "index out of range [0..", 23);
	      DEFINE_STRING(BGl_string1901z00zz__mmapz00,
		BgL_bgl_string1901za700za7za7_1936za7, "]", 1);
	      DEFINE_STRING(BGl_string1903z00zz__mmapz00,
		BgL_bgl_string1903za700za7za7_1937za7, "mmap-ref", 8);
	      DEFINE_STRING(BGl_string1904z00zz__mmapz00,
		BgL_bgl_string1904za700za7za7_1938za7, "&mmap-ref", 9);
	      DEFINE_STRING(BGl_string1906z00zz__mmapz00,
		BgL_bgl_string1906za700za7za7_1939za7, "mmap-set!", 9);
	      DEFINE_STRING(BGl_string1907z00zz__mmapz00,
		BgL_bgl_string1907za700za7za7_1940za7, "&mmap-set!", 10);
	      DEFINE_STRING(BGl_string1909z00zz__mmapz00,
		BgL_bgl_string1909za700za7za7_1941za7, "mmap-substring", 14);
	      DEFINE_STRING(BGl_string1910z00zz__mmapz00,
		BgL_bgl_string1910za700za7za7_1942za7, "length too small", 16);
	      DEFINE_STRING(BGl_string1911z00zz__mmapz00,
		BgL_bgl_string1911za700za7za7_1943za7, "Illegal index", 13);
	      DEFINE_STRING(BGl_string1912z00zz__mmapz00,
		BgL_bgl_string1912za700za7za7_1944za7, "start+length bigger than ", 25);
	      DEFINE_STRING(BGl_string1913z00zz__mmapz00,
		BgL_bgl_string1913za700za7za7_1945za7, "&mmap-substring", 15);
	      DEFINE_STRING(BGl_string1914z00zz__mmapz00,
		BgL_bgl_string1914za700za7za7_1946za7, "mmap-substring-set!", 19);
	      DEFINE_STRING(BGl_string1916z00zz__mmapz00,
		BgL_bgl_string1916za700za7za7_1947za7, "mmap-sbustring-set!", 19);
	      DEFINE_STRING(BGl_string1917z00zz__mmapz00,
		BgL_bgl_string1917za700za7za7_1948za7, "[", 1);
	      DEFINE_STRING(BGl_string1919z00zz__mmapz00,
		BgL_bgl_string1919za700za7za7_1949za7, "&mmap-substring-set!", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_mmapzd2readzd2positionzd2setz12zd2envz12zz__mmapz00,
		BgL_bgl_za762mmapza7d2readza7d1950za7,
		BGl_z62mmapzd2readzd2positionzd2setz12za2zz__mmapz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1920z00zz__mmapz00,
		BgL_bgl_string1920za700za7za7_1951za7, "&mmap-get-char", 14);
	      DEFINE_STRING(BGl_string1921z00zz__mmapz00,
		BgL_bgl_string1921za700za7za7_1952za7, "&mmap-put-char!", 15);
	      DEFINE_STRING(BGl_string1922z00zz__mmapz00,
		BgL_bgl_string1922za700za7za7_1953za7, "&mmap-get-string", 16);
	      DEFINE_STRING(BGl_string1923z00zz__mmapz00,
		BgL_bgl_string1923za700za7za7_1954za7, "&mmap-put-string!", 17);
	      DEFINE_STRING(BGl_string1924z00zz__mmapz00,
		BgL_bgl_string1924za700za7za7_1955za7, "__mmap", 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2refzd2urzd2envzd2zz__mmapz00,
		BgL_bgl_za762mmapza7d2refza7d21956za7, BGl_z62mmapzd2refzd2urz62zz__mmapz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1872z00zz__mmapz00,
		BgL_bgl_string1872za700za7za7_1957za7, "read", 4);
	      DEFINE_STRING(BGl_string1874z00zz__mmapz00,
		BgL_bgl_string1874za700za7za7_1958za7, "write", 5);
	      DEFINE_STRING(BGl_string1876z00zz__mmapz00,
		BgL_bgl_string1876za700za7za7_1959za7, "open-mmap", 9);
	      DEFINE_STRING(BGl_string1877z00zz__mmapz00,
		BgL_bgl_string1877za700za7za7_1960za7, "Illegal keyword argument", 24);
	      DEFINE_STRING(BGl_string1878z00zz__mmapz00,
		BgL_bgl_string1878za700za7za7_1961za7,
		"wrong number of arguments: [1..3] expected, provided", 52);
	      DEFINE_STRING(BGl_string1879z00zz__mmapz00,
		BgL_bgl_string1879za700za7za7_1962za7, "/tmp/4.4a/runtime/Llib/mmap.scm",
		31);
	      DEFINE_STRING(BGl_string1880z00zz__mmapz00,
		BgL_bgl_string1880za700za7za7_1963za7, "_open-mmap", 10);
	      DEFINE_STRING(BGl_string1881z00zz__mmapz00,
		BgL_bgl_string1881za700za7za7_1964za7, "bint", 4);
	      DEFINE_STRING(BGl_string1882z00zz__mmapz00,
		BgL_bgl_string1882za700za7za7_1965za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1884z00zz__mmapz00,
		BgL_bgl_string1884za700za7za7_1966za7, "string->mmap", 12);
	      DEFINE_STRING(BGl_string1885z00zz__mmapz00,
		BgL_bgl_string1885za700za7za7_1967za7, "_string->mmap", 13);
	      DEFINE_STRING(BGl_string1886z00zz__mmapz00,
		BgL_bgl_string1886za700za7za7_1968za7, "&mmap-name", 10);
	      DEFINE_STRING(BGl_string1887z00zz__mmapz00,
		BgL_bgl_string1887za700za7za7_1969za7, "mmap", 4);
	      DEFINE_STRING(BGl_string1888z00zz__mmapz00,
		BgL_bgl_string1888za700za7za7_1970za7, "&mmap->string", 13);
	      DEFINE_STRING(BGl_string1889z00zz__mmapz00,
		BgL_bgl_string1889za700za7za7_1971za7, "&mmap->bstring", 14);
	      DEFINE_STRING(BGl_string1890z00zz__mmapz00,
		BgL_bgl_string1890za700za7za7_1972za7, "&close-mmap", 11);
	      DEFINE_STRING(BGl_string1891z00zz__mmapz00,
		BgL_bgl_string1891za700za7za7_1973za7, "&mmap-length", 12);
	      DEFINE_STRING(BGl_string1892z00zz__mmapz00,
		BgL_bgl_string1892za700za7za7_1974za7, "&mmap-read-position", 19);
	      DEFINE_STRING(BGl_string1893z00zz__mmapz00,
		BgL_bgl_string1893za700za7za7_1975za7, "&mmap-read-position-set!", 24);
	      DEFINE_STRING(BGl_string1894z00zz__mmapz00,
		BgL_bgl_string1894za700za7za7_1976za7, "belong", 6);
	      DEFINE_STRING(BGl_string1895z00zz__mmapz00,
		BgL_bgl_string1895za700za7za7_1977za7, "&mmap-write-position", 20);
	      DEFINE_STRING(BGl_string1896z00zz__mmapz00,
		BgL_bgl_string1896za700za7za7_1978za7, "&mmap-write-position-set!", 25);
	      DEFINE_STRING(BGl_string1897z00zz__mmapz00,
		BgL_bgl_string1897za700za7za7_1979za7, "&mmap-ref-ur", 12);
	      DEFINE_STRING(BGl_string1898z00zz__mmapz00,
		BgL_bgl_string1898za700za7za7_1980za7, "&mmap-set-ur!", 13);
	      DEFINE_STRING(BGl_string1899z00zz__mmapz00,
		BgL_bgl_string1899za700za7za7_1981za7, "bchar", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2putzd2charz12zd2envzc0zz__mmapz00,
		BgL_bgl_za762mmapza7d2putza7d21982za7,
		BGl_z62mmapzd2putzd2charz12z70zz__mmapz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_mmapzd2writezd2positionzd2setz12zd2envz12zz__mmapz00,
		BgL_bgl_za762mmapza7d2writeza71983za7,
		BGl_z62mmapzd2writezd2positionzd2setz12za2zz__mmapz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2getzd2stringzd2envzd2zz__mmapz00,
		BgL_bgl_za762mmapza7d2getza7d21984za7,
		BGl_z62mmapzd2getzd2stringz62zz__mmapz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_closezd2mmapzd2envz00zz__mmapz00,
		BgL_bgl_za762closeza7d2mmapza71985za7, BGl_z62closezd2mmapzb0zz__mmapz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_mmapzd2substringzd2setz12zd2envzc0zz__mmapz00,
		BgL_bgl_za762mmapza7d2substr1986z00,
		BGl_z62mmapzd2substringzd2setz12z70zz__mmapz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2refzd2envz00zz__mmapz00,
		BgL_bgl_za762mmapza7d2refza7b01987za7, BGl_z62mmapzd2refzb0zz__mmapz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2namezd2envz00zz__mmapz00,
		BgL_bgl_za762mmapza7d2nameza7b1988za7, BGl_z62mmapzd2namezb0zz__mmapz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_openzd2mmapzd2envz00zz__mmapz00,
		BgL_bgl__openza7d2mmapza7d2za71989za7, opt_generic_entry,
		BGl__openzd2mmapzd2zz__mmapz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2ze3bstringzd2envze3zz__mmapz00,
		BgL_bgl_za762mmapza7d2za7e3bst1990za7,
		BGl_z62mmapzd2ze3bstringz53zz__mmapz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mmapzd2setzd2urz12zd2envzc0zz__mmapz00,
		BgL_bgl_za762mmapza7d2setza7d21991za7,
		BGl_z62mmapzd2setzd2urz12z70zz__mmapz00, 0L, BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_keyword1871z00zz__mmapz00));
		     ADD_ROOT((void *) (&BGl_keyword1873z00zz__mmapz00));
		     ADD_ROOT((void *) (&BGl_symbol1915z00zz__mmapz00));
		     ADD_ROOT((void *) (&BGl_symbol1918z00zz__mmapz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__mmapz00));
		     ADD_ROOT((void *) (&BGl_symbol1875z00zz__mmapz00));
		     ADD_ROOT((void *) (&BGl_symbol1883z00zz__mmapz00));
		     ADD_ROOT((void *) (&BGl_list1870z00zz__mmapz00));
		     ADD_ROOT((void *) (&BGl_symbol1902z00zz__mmapz00));
		     ADD_ROOT((void *) (&BGl_symbol1905z00zz__mmapz00));
		     ADD_ROOT((void *) (&BGl_symbol1908z00zz__mmapz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__mmapz00(long
		BgL_checksumz00_2430, char *BgL_fromz00_2431)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__mmapz00))
				{
					BGl_requirezd2initializa7ationz75zz__mmapz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__mmapz00();
					BGl_cnstzd2initzd2zz__mmapz00();
					BGl_importedzd2moduleszd2initz00zz__mmapz00();
					return BGl_methodzd2initzd2zz__mmapz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__mmapz00()
	{
		{	/* Llib/mmap.scm 19 */
			BGl_keyword1871z00zz__mmapz00 =
				bstring_to_keyword(BGl_string1872z00zz__mmapz00);
			BGl_keyword1873z00zz__mmapz00 =
				bstring_to_keyword(BGl_string1874z00zz__mmapz00);
			BGl_list1870z00zz__mmapz00 =
				MAKE_YOUNG_PAIR(BGl_keyword1871z00zz__mmapz00,
				MAKE_YOUNG_PAIR(BGl_keyword1873z00zz__mmapz00, BNIL));
			BGl_symbol1875z00zz__mmapz00 =
				bstring_to_symbol(BGl_string1876z00zz__mmapz00);
			BGl_symbol1883z00zz__mmapz00 =
				bstring_to_symbol(BGl_string1884z00zz__mmapz00);
			BGl_symbol1902z00zz__mmapz00 =
				bstring_to_symbol(BGl_string1903z00zz__mmapz00);
			BGl_symbol1905z00zz__mmapz00 =
				bstring_to_symbol(BGl_string1906z00zz__mmapz00);
			BGl_symbol1908z00zz__mmapz00 =
				bstring_to_symbol(BGl_string1909z00zz__mmapz00);
			BGl_symbol1915z00zz__mmapz00 =
				bstring_to_symbol(BGl_string1916z00zz__mmapz00);
			return (BGl_symbol1918z00zz__mmapz00 =
				bstring_to_symbol(BGl_string1914z00zz__mmapz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__mmapz00()
	{
		{	/* Llib/mmap.scm 19 */
			return bgl_gc_roots_register();
		}

	}



/* mmap? */
	BGL_EXPORTED_DEF bool_t BGl_mmapzf3zf3zz__mmapz00(obj_t BgL_objz00_3)
	{
		{	/* Llib/mmap.scm 117 */
			return BGL_MMAPP(BgL_objz00_3);
		}

	}



/* &mmap? */
	obj_t BGl_z62mmapzf3z91zz__mmapz00(obj_t BgL_envz00_2246,
		obj_t BgL_objz00_2247)
	{
		{	/* Llib/mmap.scm 117 */
			return BBOOL(BGl_mmapzf3zf3zz__mmapz00(BgL_objz00_2247));
		}

	}



/* _open-mmap */
	obj_t BGl__openzd2mmapzd2zz__mmapz00(obj_t BgL_env1096z00_8,
		obj_t BgL_opt1095z00_7)
	{
		{	/* Llib/mmap.scm 123 */
			{	/* Llib/mmap.scm 123 */
				obj_t BgL_g1103z00_1087;

				BgL_g1103z00_1087 = VECTOR_REF(BgL_opt1095z00_7, ((long) 0));
				{	/* Llib/mmap.scm 123 */
					obj_t BgL_readz00_1088;

					BgL_readz00_1088 = BTRUE;
					{	/* Llib/mmap.scm 123 */
						obj_t BgL_writez00_1089;

						BgL_writez00_1089 = BTRUE;
						{	/* Llib/mmap.scm 123 */

							{
								long BgL_iz00_1090;

								BgL_iz00_1090 = ((long) 1);
							BgL_check1099z00_1091:
								if ((BgL_iz00_1090 == VECTOR_LENGTH(BgL_opt1095z00_7)))
									{	/* Llib/mmap.scm 123 */
										BNIL;
									}
								else
									{	/* Llib/mmap.scm 123 */
										bool_t BgL_test1994z00_2458;

										{	/* Llib/mmap.scm 123 */
											obj_t BgL_arg1208z00_1097;

											BgL_arg1208z00_1097 =
												VECTOR_REF(BgL_opt1095z00_7, BgL_iz00_1090);
											BgL_test1994z00_2458 =
												CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
												(BgL_arg1208z00_1097, BGl_list1870z00zz__mmapz00));
										}
										if (BgL_test1994z00_2458)
											{
												long BgL_iz00_2462;

												BgL_iz00_2462 = (BgL_iz00_1090 + ((long) 2));
												BgL_iz00_1090 = BgL_iz00_2462;
												goto BgL_check1099z00_1091;
											}
										else
											{	/* Llib/mmap.scm 123 */
												obj_t BgL_arg1201z00_1096;

												BgL_arg1201z00_1096 =
													VECTOR_REF(BgL_opt1095z00_7, BgL_iz00_1090);
												BGl_errorz00zz__errorz00(BGl_symbol1875z00zz__mmapz00,
													BGl_string1877z00zz__mmapz00, BgL_arg1201z00_1096);
											}
									}
							}
							{	/* Llib/mmap.scm 123 */
								obj_t BgL_index1101z00_1098;

								{
									long BgL_iz00_1640;

									BgL_iz00_1640 = ((long) 1);
								BgL_search1098z00_1639:
									if ((BgL_iz00_1640 == VECTOR_LENGTH(BgL_opt1095z00_7)))
										{	/* Llib/mmap.scm 123 */
											BgL_index1101z00_1098 = BINT(((long) -1));
										}
									else
										{	/* Llib/mmap.scm 123 */
											if (
												(BgL_iz00_1640 ==
													(VECTOR_LENGTH(BgL_opt1095z00_7) - ((long) 1))))
												{	/* Llib/mmap.scm 123 */
													BgL_index1101z00_1098 =
														BGl_errorz00zz__errorz00
														(BGl_symbol1875z00zz__mmapz00,
														BGl_string1878z00zz__mmapz00,
														BINT(VECTOR_LENGTH(BgL_opt1095z00_7)));
												}
											else
												{	/* Llib/mmap.scm 123 */
													obj_t BgL_vz00_1653;

													BgL_vz00_1653 =
														VECTOR_REF(BgL_opt1095z00_7, BgL_iz00_1640);
													if ((BgL_vz00_1653 == BGl_keyword1871z00zz__mmapz00))
														{	/* Llib/mmap.scm 123 */
															BgL_index1101z00_1098 =
																BINT((BgL_iz00_1640 + ((long) 1)));
														}
													else
														{
															long BgL_iz00_2482;

															BgL_iz00_2482 = (BgL_iz00_1640 + ((long) 2));
															BgL_iz00_1640 = BgL_iz00_2482;
															goto BgL_search1098z00_1639;
														}
												}
										}
								}
								{	/* Llib/mmap.scm 123 */
									bool_t BgL_test1998z00_2484;

									{	/* Llib/mmap.scm 123 */
										long BgL_n1z00_1660;

										{	/* Llib/mmap.scm 123 */
											obj_t BgL_tmpz00_2485;

											if (INTEGERP(BgL_index1101z00_1098))
												{	/* Llib/mmap.scm 123 */
													BgL_tmpz00_2485 = BgL_index1101z00_1098;
												}
											else
												{
													obj_t BgL_auxz00_2488;

													BgL_auxz00_2488 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string1879z00zz__mmapz00, BINT(((long) 5352)),
														BGl_string1880z00zz__mmapz00,
														BGl_string1881z00zz__mmapz00,
														BgL_index1101z00_1098);
													FAILURE(BgL_auxz00_2488, BFALSE, BFALSE);
												}
											BgL_n1z00_1660 = (long) CINT(BgL_tmpz00_2485);
										}
										BgL_test1998z00_2484 = (BgL_n1z00_1660 >= ((long) 0));
									}
									if (BgL_test1998z00_2484)
										{
											long BgL_auxz00_2494;

											{	/* Llib/mmap.scm 123 */
												obj_t BgL_tmpz00_2495;

												if (INTEGERP(BgL_index1101z00_1098))
													{	/* Llib/mmap.scm 123 */
														BgL_tmpz00_2495 = BgL_index1101z00_1098;
													}
												else
													{
														obj_t BgL_auxz00_2498;

														BgL_auxz00_2498 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string1879z00zz__mmapz00,
															BINT(((long) 5352)), BGl_string1880z00zz__mmapz00,
															BGl_string1881z00zz__mmapz00,
															BgL_index1101z00_1098);
														FAILURE(BgL_auxz00_2498, BFALSE, BFALSE);
													}
												BgL_auxz00_2494 = (long) CINT(BgL_tmpz00_2495);
											}
											BgL_readz00_1088 =
												VECTOR_REF(BgL_opt1095z00_7, BgL_auxz00_2494);
										}
									else
										{	/* Llib/mmap.scm 123 */
											BFALSE;
										}
								}
							}
							{	/* Llib/mmap.scm 123 */
								obj_t BgL_index1102z00_1100;

								{
									long BgL_iz00_1663;

									BgL_iz00_1663 = ((long) 1);
								BgL_search1098z00_1662:
									if ((BgL_iz00_1663 == VECTOR_LENGTH(BgL_opt1095z00_7)))
										{	/* Llib/mmap.scm 123 */
											BgL_index1102z00_1100 = BINT(((long) -1));
										}
									else
										{	/* Llib/mmap.scm 123 */
											if (
												(BgL_iz00_1663 ==
													(VECTOR_LENGTH(BgL_opt1095z00_7) - ((long) 1))))
												{	/* Llib/mmap.scm 123 */
													BgL_index1102z00_1100 =
														BGl_errorz00zz__errorz00
														(BGl_symbol1875z00zz__mmapz00,
														BGl_string1878z00zz__mmapz00,
														BINT(VECTOR_LENGTH(BgL_opt1095z00_7)));
												}
											else
												{	/* Llib/mmap.scm 123 */
													obj_t BgL_vz00_1676;

													BgL_vz00_1676 =
														VECTOR_REF(BgL_opt1095z00_7, BgL_iz00_1663);
													if ((BgL_vz00_1676 == BGl_keyword1873z00zz__mmapz00))
														{	/* Llib/mmap.scm 123 */
															BgL_index1102z00_1100 =
																BINT((BgL_iz00_1663 + ((long) 1)));
														}
													else
														{
															long BgL_iz00_2520;

															BgL_iz00_2520 = (BgL_iz00_1663 + ((long) 2));
															BgL_iz00_1663 = BgL_iz00_2520;
															goto BgL_search1098z00_1662;
														}
												}
										}
								}
								{	/* Llib/mmap.scm 123 */
									bool_t BgL_test2004z00_2522;

									{	/* Llib/mmap.scm 123 */
										long BgL_n1z00_1683;

										{	/* Llib/mmap.scm 123 */
											obj_t BgL_tmpz00_2523;

											if (INTEGERP(BgL_index1102z00_1100))
												{	/* Llib/mmap.scm 123 */
													BgL_tmpz00_2523 = BgL_index1102z00_1100;
												}
											else
												{
													obj_t BgL_auxz00_2526;

													BgL_auxz00_2526 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string1879z00zz__mmapz00, BINT(((long) 5352)),
														BGl_string1880z00zz__mmapz00,
														BGl_string1881z00zz__mmapz00,
														BgL_index1102z00_1100);
													FAILURE(BgL_auxz00_2526, BFALSE, BFALSE);
												}
											BgL_n1z00_1683 = (long) CINT(BgL_tmpz00_2523);
										}
										BgL_test2004z00_2522 = (BgL_n1z00_1683 >= ((long) 0));
									}
									if (BgL_test2004z00_2522)
										{
											long BgL_auxz00_2532;

											{	/* Llib/mmap.scm 123 */
												obj_t BgL_tmpz00_2533;

												if (INTEGERP(BgL_index1102z00_1100))
													{	/* Llib/mmap.scm 123 */
														BgL_tmpz00_2533 = BgL_index1102z00_1100;
													}
												else
													{
														obj_t BgL_auxz00_2536;

														BgL_auxz00_2536 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string1879z00zz__mmapz00,
															BINT(((long) 5352)), BGl_string1880z00zz__mmapz00,
															BGl_string1881z00zz__mmapz00,
															BgL_index1102z00_1100);
														FAILURE(BgL_auxz00_2536, BFALSE, BFALSE);
													}
												BgL_auxz00_2532 = (long) CINT(BgL_tmpz00_2533);
											}
											BgL_writez00_1089 =
												VECTOR_REF(BgL_opt1095z00_7, BgL_auxz00_2532);
										}
									else
										{	/* Llib/mmap.scm 123 */
											BFALSE;
										}
								}
							}
							{	/* Llib/mmap.scm 123 */
								obj_t BgL_arg1211z00_1102;

								BgL_arg1211z00_1102 = VECTOR_REF(BgL_opt1095z00_7, ((long) 0));
								{	/* Llib/mmap.scm 123 */
									obj_t BgL_readz00_1103;

									BgL_readz00_1103 = BgL_readz00_1088;
									{	/* Llib/mmap.scm 123 */
										obj_t BgL_writez00_1104;

										BgL_writez00_1104 = BgL_writez00_1089;
										{	/* Llib/mmap.scm 123 */
											obj_t BgL_res1669z00_1686;

											{	/* Llib/mmap.scm 123 */
												obj_t BgL_namez00_1685;

												if (STRINGP(BgL_arg1211z00_1102))
													{	/* Llib/mmap.scm 123 */
														BgL_namez00_1685 = BgL_arg1211z00_1102;
													}
												else
													{
														obj_t BgL_auxz00_2545;

														BgL_auxz00_2545 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string1879z00zz__mmapz00,
															BINT(((long) 5352)), BGl_string1880z00zz__mmapz00,
															BGl_string1882z00zz__mmapz00,
															BgL_arg1211z00_1102);
														FAILURE(BgL_auxz00_2545, BFALSE, BFALSE);
													}
												{	/* Llib/mmap.scm 124 */
													bool_t BgL_auxz00_2551;
													bool_t BgL_tmpz00_2549;

													BgL_auxz00_2551 = CBOOL(BgL_writez00_1104);
													BgL_tmpz00_2549 = CBOOL(BgL_readz00_1103);
													BgL_res1669z00_1686 =
														bgl_open_mmap(BgL_namez00_1685, BgL_tmpz00_2549,
														BgL_auxz00_2551);
											}}
											return BgL_res1669z00_1686;
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



/* open-mmap */
	BGL_EXPORTED_DEF obj_t BGl_openzd2mmapzd2zz__mmapz00(obj_t BgL_namez00_4,
		obj_t BgL_readz00_5, obj_t BgL_writez00_6)
	{
		{	/* Llib/mmap.scm 123 */
			{	/* Llib/mmap.scm 124 */
				bool_t BgL_auxz00_2556;
				bool_t BgL_tmpz00_2554;

				BgL_auxz00_2556 = CBOOL(BgL_writez00_6);
				BgL_tmpz00_2554 = CBOOL(BgL_readz00_5);
				return bgl_open_mmap(BgL_namez00_4, BgL_tmpz00_2554, BgL_auxz00_2556);
			}
		}

	}



/* _string->mmap */
	obj_t BGl__stringzd2ze3mmapz31zz__mmapz00(obj_t BgL_env1105z00_13,
		obj_t BgL_opt1104z00_12)
	{
		{	/* Llib/mmap.scm 129 */
			{	/* Llib/mmap.scm 129 */
				obj_t BgL_g1112z00_1117;

				BgL_g1112z00_1117 = VECTOR_REF(BgL_opt1104z00_12, ((long) 0));
				{	/* Llib/mmap.scm 129 */
					obj_t BgL_readz00_1118;

					BgL_readz00_1118 = BTRUE;
					{	/* Llib/mmap.scm 129 */
						obj_t BgL_writez00_1119;

						BgL_writez00_1119 = BTRUE;
						{	/* Llib/mmap.scm 129 */

							{
								long BgL_iz00_1120;

								BgL_iz00_1120 = ((long) 1);
							BgL_check1108z00_1121:
								if ((BgL_iz00_1120 == VECTOR_LENGTH(BgL_opt1104z00_12)))
									{	/* Llib/mmap.scm 129 */
										BNIL;
									}
								else
									{	/* Llib/mmap.scm 129 */
										bool_t BgL_test2009z00_2563;

										{	/* Llib/mmap.scm 129 */
											obj_t BgL_arg1239z00_1127;

											BgL_arg1239z00_1127 =
												VECTOR_REF(BgL_opt1104z00_12, BgL_iz00_1120);
											BgL_test2009z00_2563 =
												CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
												(BgL_arg1239z00_1127, BGl_list1870z00zz__mmapz00));
										}
										if (BgL_test2009z00_2563)
											{
												long BgL_iz00_2567;

												BgL_iz00_2567 = (BgL_iz00_1120 + ((long) 2));
												BgL_iz00_1120 = BgL_iz00_2567;
												goto BgL_check1108z00_1121;
											}
										else
											{	/* Llib/mmap.scm 129 */
												obj_t BgL_arg1232z00_1126;

												BgL_arg1232z00_1126 =
													VECTOR_REF(BgL_opt1104z00_12, BgL_iz00_1120);
												BGl_errorz00zz__errorz00(BGl_symbol1883z00zz__mmapz00,
													BGl_string1877z00zz__mmapz00, BgL_arg1232z00_1126);
											}
									}
							}
							{	/* Llib/mmap.scm 129 */
								obj_t BgL_index1110z00_1128;

								{
									long BgL_iz00_1710;

									BgL_iz00_1710 = ((long) 1);
								BgL_search1107z00_1709:
									if ((BgL_iz00_1710 == VECTOR_LENGTH(BgL_opt1104z00_12)))
										{	/* Llib/mmap.scm 129 */
											BgL_index1110z00_1128 = BINT(((long) -1));
										}
									else
										{	/* Llib/mmap.scm 129 */
											if (
												(BgL_iz00_1710 ==
													(VECTOR_LENGTH(BgL_opt1104z00_12) - ((long) 1))))
												{	/* Llib/mmap.scm 129 */
													BgL_index1110z00_1128 =
														BGl_errorz00zz__errorz00
														(BGl_symbol1883z00zz__mmapz00,
														BGl_string1878z00zz__mmapz00,
														BINT(VECTOR_LENGTH(BgL_opt1104z00_12)));
												}
											else
												{	/* Llib/mmap.scm 129 */
													obj_t BgL_vz00_1723;

													BgL_vz00_1723 =
														VECTOR_REF(BgL_opt1104z00_12, BgL_iz00_1710);
													if ((BgL_vz00_1723 == BGl_keyword1871z00zz__mmapz00))
														{	/* Llib/mmap.scm 129 */
															BgL_index1110z00_1128 =
																BINT((BgL_iz00_1710 + ((long) 1)));
														}
													else
														{
															long BgL_iz00_2587;

															BgL_iz00_2587 = (BgL_iz00_1710 + ((long) 2));
															BgL_iz00_1710 = BgL_iz00_2587;
															goto BgL_search1107z00_1709;
														}
												}
										}
								}
								{	/* Llib/mmap.scm 129 */
									bool_t BgL_test2013z00_2589;

									{	/* Llib/mmap.scm 129 */
										long BgL_n1z00_1730;

										{	/* Llib/mmap.scm 129 */
											obj_t BgL_tmpz00_2590;

											if (INTEGERP(BgL_index1110z00_1128))
												{	/* Llib/mmap.scm 129 */
													BgL_tmpz00_2590 = BgL_index1110z00_1128;
												}
											else
												{
													obj_t BgL_auxz00_2593;

													BgL_auxz00_2593 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string1879z00zz__mmapz00, BINT(((long) 5669)),
														BGl_string1885z00zz__mmapz00,
														BGl_string1881z00zz__mmapz00,
														BgL_index1110z00_1128);
													FAILURE(BgL_auxz00_2593, BFALSE, BFALSE);
												}
											BgL_n1z00_1730 = (long) CINT(BgL_tmpz00_2590);
										}
										BgL_test2013z00_2589 = (BgL_n1z00_1730 >= ((long) 0));
									}
									if (BgL_test2013z00_2589)
										{
											long BgL_auxz00_2599;

											{	/* Llib/mmap.scm 129 */
												obj_t BgL_tmpz00_2600;

												if (INTEGERP(BgL_index1110z00_1128))
													{	/* Llib/mmap.scm 129 */
														BgL_tmpz00_2600 = BgL_index1110z00_1128;
													}
												else
													{
														obj_t BgL_auxz00_2603;

														BgL_auxz00_2603 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string1879z00zz__mmapz00,
															BINT(((long) 5669)), BGl_string1885z00zz__mmapz00,
															BGl_string1881z00zz__mmapz00,
															BgL_index1110z00_1128);
														FAILURE(BgL_auxz00_2603, BFALSE, BFALSE);
													}
												BgL_auxz00_2599 = (long) CINT(BgL_tmpz00_2600);
											}
											BgL_readz00_1118 =
												VECTOR_REF(BgL_opt1104z00_12, BgL_auxz00_2599);
										}
									else
										{	/* Llib/mmap.scm 129 */
											BFALSE;
										}
								}
							}
							{	/* Llib/mmap.scm 129 */
								obj_t BgL_index1111z00_1130;

								{
									long BgL_iz00_1733;

									BgL_iz00_1733 = ((long) 1);
								BgL_search1107z00_1732:
									if ((BgL_iz00_1733 == VECTOR_LENGTH(BgL_opt1104z00_12)))
										{	/* Llib/mmap.scm 129 */
											BgL_index1111z00_1130 = BINT(((long) -1));
										}
									else
										{	/* Llib/mmap.scm 129 */
											if (
												(BgL_iz00_1733 ==
													(VECTOR_LENGTH(BgL_opt1104z00_12) - ((long) 1))))
												{	/* Llib/mmap.scm 129 */
													BgL_index1111z00_1130 =
														BGl_errorz00zz__errorz00
														(BGl_symbol1883z00zz__mmapz00,
														BGl_string1878z00zz__mmapz00,
														BINT(VECTOR_LENGTH(BgL_opt1104z00_12)));
												}
											else
												{	/* Llib/mmap.scm 129 */
													obj_t BgL_vz00_1746;

													BgL_vz00_1746 =
														VECTOR_REF(BgL_opt1104z00_12, BgL_iz00_1733);
													if ((BgL_vz00_1746 == BGl_keyword1873z00zz__mmapz00))
														{	/* Llib/mmap.scm 129 */
															BgL_index1111z00_1130 =
																BINT((BgL_iz00_1733 + ((long) 1)));
														}
													else
														{
															long BgL_iz00_2625;

															BgL_iz00_2625 = (BgL_iz00_1733 + ((long) 2));
															BgL_iz00_1733 = BgL_iz00_2625;
															goto BgL_search1107z00_1732;
														}
												}
										}
								}
								{	/* Llib/mmap.scm 129 */
									bool_t BgL_test2019z00_2627;

									{	/* Llib/mmap.scm 129 */
										long BgL_n1z00_1753;

										{	/* Llib/mmap.scm 129 */
											obj_t BgL_tmpz00_2628;

											if (INTEGERP(BgL_index1111z00_1130))
												{	/* Llib/mmap.scm 129 */
													BgL_tmpz00_2628 = BgL_index1111z00_1130;
												}
											else
												{
													obj_t BgL_auxz00_2631;

													BgL_auxz00_2631 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string1879z00zz__mmapz00, BINT(((long) 5669)),
														BGl_string1885z00zz__mmapz00,
														BGl_string1881z00zz__mmapz00,
														BgL_index1111z00_1130);
													FAILURE(BgL_auxz00_2631, BFALSE, BFALSE);
												}
											BgL_n1z00_1753 = (long) CINT(BgL_tmpz00_2628);
										}
										BgL_test2019z00_2627 = (BgL_n1z00_1753 >= ((long) 0));
									}
									if (BgL_test2019z00_2627)
										{
											long BgL_auxz00_2637;

											{	/* Llib/mmap.scm 129 */
												obj_t BgL_tmpz00_2638;

												if (INTEGERP(BgL_index1111z00_1130))
													{	/* Llib/mmap.scm 129 */
														BgL_tmpz00_2638 = BgL_index1111z00_1130;
													}
												else
													{
														obj_t BgL_auxz00_2641;

														BgL_auxz00_2641 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string1879z00zz__mmapz00,
															BINT(((long) 5669)), BGl_string1885z00zz__mmapz00,
															BGl_string1881z00zz__mmapz00,
															BgL_index1111z00_1130);
														FAILURE(BgL_auxz00_2641, BFALSE, BFALSE);
													}
												BgL_auxz00_2637 = (long) CINT(BgL_tmpz00_2638);
											}
											BgL_writez00_1119 =
												VECTOR_REF(BgL_opt1104z00_12, BgL_auxz00_2637);
										}
									else
										{	/* Llib/mmap.scm 129 */
											BFALSE;
										}
								}
							}
							{	/* Llib/mmap.scm 129 */
								obj_t BgL_arg1242z00_1132;

								BgL_arg1242z00_1132 = VECTOR_REF(BgL_opt1104z00_12, ((long) 0));
								{	/* Llib/mmap.scm 129 */
									obj_t BgL_readz00_1133;

									BgL_readz00_1133 = BgL_readz00_1118;
									{	/* Llib/mmap.scm 129 */
										obj_t BgL_writez00_1134;

										BgL_writez00_1134 = BgL_writez00_1119;
										{	/* Llib/mmap.scm 129 */
											obj_t BgL_res1679z00_1756;

											{	/* Llib/mmap.scm 129 */
												obj_t BgL_sz00_1755;

												if (STRINGP(BgL_arg1242z00_1132))
													{	/* Llib/mmap.scm 129 */
														BgL_sz00_1755 = BgL_arg1242z00_1132;
													}
												else
													{
														obj_t BgL_auxz00_2650;

														BgL_auxz00_2650 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string1879z00zz__mmapz00,
															BINT(((long) 5669)), BGl_string1885z00zz__mmapz00,
															BGl_string1882z00zz__mmapz00,
															BgL_arg1242z00_1132);
														FAILURE(BgL_auxz00_2650, BFALSE, BFALSE);
													}
												{	/* Llib/mmap.scm 130 */
													bool_t BgL_auxz00_2656;
													bool_t BgL_tmpz00_2654;

													BgL_auxz00_2656 = CBOOL(BgL_writez00_1134);
													BgL_tmpz00_2654 = CBOOL(BgL_readz00_1133);
													BgL_res1679z00_1756 =
														bgl_string_to_mmap(BgL_sz00_1755, BgL_tmpz00_2654,
														BgL_auxz00_2656);
											}}
											return BgL_res1679z00_1756;
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



/* string->mmap */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3mmapz31zz__mmapz00(obj_t BgL_sz00_9,
		obj_t BgL_readz00_10, obj_t BgL_writez00_11)
	{
		{	/* Llib/mmap.scm 129 */
			{	/* Llib/mmap.scm 130 */
				bool_t BgL_auxz00_2661;
				bool_t BgL_tmpz00_2659;

				BgL_auxz00_2661 = CBOOL(BgL_writez00_11);
				BgL_tmpz00_2659 = CBOOL(BgL_readz00_10);
				return bgl_string_to_mmap(BgL_sz00_9, BgL_tmpz00_2659, BgL_auxz00_2661);
			}
		}

	}



/* mmap-name */
	BGL_EXPORTED_DEF obj_t BGl_mmapzd2namezd2zz__mmapz00(obj_t BgL_mmapz00_14)
	{
		{	/* Llib/mmap.scm 135 */
			return BGL_MMAP_NAME(BgL_mmapz00_14);
		}

	}



/* &mmap-name */
	obj_t BGl_z62mmapzd2namezb0zz__mmapz00(obj_t BgL_envz00_2248,
		obj_t BgL_mmapz00_2249)
	{
		{	/* Llib/mmap.scm 135 */
			{	/* Llib/mmap.scm 136 */
				obj_t BgL_auxz00_2665;

				if (BGL_MMAPP(BgL_mmapz00_2249))
					{	/* Llib/mmap.scm 136 */
						BgL_auxz00_2665 = BgL_mmapz00_2249;
					}
				else
					{
						obj_t BgL_auxz00_2668;

						BgL_auxz00_2668 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
							BINT(((long) 6027)), BGl_string1886z00zz__mmapz00,
							BGl_string1887z00zz__mmapz00, BgL_mmapz00_2249);
						FAILURE(BgL_auxz00_2668, BFALSE, BFALSE);
					}
				return BGl_mmapzd2namezd2zz__mmapz00(BgL_auxz00_2665);
			}
		}

	}



/* mmap->string */
	BGL_EXPORTED_DEF char *BGl_mmapzd2ze3stringz31zz__mmapz00(obj_t
		BgL_mmapz00_15)
	{
		{	/* Llib/mmap.scm 141 */
			return BGL_MMAP_TO_STRING(BgL_mmapz00_15);
		}

	}



/* &mmap->string */
	obj_t BGl_z62mmapzd2ze3stringz53zz__mmapz00(obj_t BgL_envz00_2250,
		obj_t BgL_mmapz00_2251)
	{
		{	/* Llib/mmap.scm 141 */
			{	/* Llib/mmap.scm 142 */
				char *BgL_tmpz00_2674;

				{	/* Llib/mmap.scm 142 */
					obj_t BgL_auxz00_2675;

					if (BGL_MMAPP(BgL_mmapz00_2251))
						{	/* Llib/mmap.scm 142 */
							BgL_auxz00_2675 = BgL_mmapz00_2251;
						}
					else
						{
							obj_t BgL_auxz00_2678;

							BgL_auxz00_2678 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
								BINT(((long) 6321)), BGl_string1888z00zz__mmapz00,
								BGl_string1887z00zz__mmapz00, BgL_mmapz00_2251);
							FAILURE(BgL_auxz00_2678, BFALSE, BFALSE);
						}
					BgL_tmpz00_2674 = BGl_mmapzd2ze3stringz31zz__mmapz00(BgL_auxz00_2675);
				}
				return string_to_bstring(BgL_tmpz00_2674);
			}
		}

	}



/* mmap->bstring */
	BGL_EXPORTED_DEF obj_t BGl_mmapzd2ze3bstringz31zz__mmapz00(obj_t
		BgL_mmapz00_16)
	{
		{	/* Llib/mmap.scm 147 */
			{	/* Llib/mmap.scm 148 */
				int BgL_lenz00_2389;

				{	/* Llib/mmap.scm 148 */
					long BgL_arg1254z00_2390;

					BgL_arg1254z00_2390 = BGL_MMAP_LENGTH(BgL_mmapz00_16);
					{	/* Llib/mmap.scm 148 */
						long BgL_res1680z00_2391;

						BgL_res1680z00_2391 = (long) (BgL_arg1254z00_2390);
						BgL_lenz00_2389 = (int) (BgL_res1680z00_2391);
				}}
				{	/* Llib/mmap.scm 149 */
					char *BgL_arg1253z00_2392;

					BgL_arg1253z00_2392 = BGL_MMAP_TO_STRING(BgL_mmapz00_16);
					return string_to_bstring_len(BgL_arg1253z00_2392, BgL_lenz00_2389);
				}
			}
		}

	}



/* &mmap->bstring */
	obj_t BGl_z62mmapzd2ze3bstringz53zz__mmapz00(obj_t BgL_envz00_2252,
		obj_t BgL_mmapz00_2253)
	{
		{	/* Llib/mmap.scm 147 */
			{	/* Llib/mmap.scm 148 */
				obj_t BgL_auxz00_2689;

				if (BGL_MMAPP(BgL_mmapz00_2253))
					{	/* Llib/mmap.scm 148 */
						BgL_auxz00_2689 = BgL_mmapz00_2253;
					}
				else
					{
						obj_t BgL_auxz00_2692;

						BgL_auxz00_2692 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
							BINT(((long) 6620)), BGl_string1889z00zz__mmapz00,
							BGl_string1887z00zz__mmapz00, BgL_mmapz00_2253);
						FAILURE(BgL_auxz00_2692, BFALSE, BFALSE);
					}
				return BGl_mmapzd2ze3bstringz31zz__mmapz00(BgL_auxz00_2689);
			}
		}

	}



/* close-mmap */
	BGL_EXPORTED_DEF obj_t BGl_closezd2mmapzd2zz__mmapz00(obj_t BgL_mmapz00_17)
	{
		{	/* Llib/mmap.scm 154 */
			return bgl_close_mmap(BgL_mmapz00_17);
		}

	}



/* &close-mmap */
	obj_t BGl_z62closezd2mmapzb0zz__mmapz00(obj_t BgL_envz00_2254,
		obj_t BgL_mmapz00_2255)
	{
		{	/* Llib/mmap.scm 154 */
			{	/* Llib/mmap.scm 155 */
				obj_t BgL_auxz00_2698;

				if (BGL_MMAPP(BgL_mmapz00_2255))
					{	/* Llib/mmap.scm 155 */
						BgL_auxz00_2698 = BgL_mmapz00_2255;
					}
				else
					{
						obj_t BgL_auxz00_2701;

						BgL_auxz00_2701 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
							BINT(((long) 6996)), BGl_string1890z00zz__mmapz00,
							BGl_string1887z00zz__mmapz00, BgL_mmapz00_2255);
						FAILURE(BgL_auxz00_2701, BFALSE, BFALSE);
					}
				return BGl_closezd2mmapzd2zz__mmapz00(BgL_auxz00_2698);
			}
		}

	}



/* mmap-length */
	BGL_EXPORTED_DEF long BGl_mmapzd2lengthzd2zz__mmapz00(obj_t BgL_objz00_18)
	{
		{	/* Llib/mmap.scm 160 */
			return BGL_MMAP_LENGTH(BgL_objz00_18);
		}

	}



/* &mmap-length */
	obj_t BGl_z62mmapzd2lengthzb0zz__mmapz00(obj_t BgL_envz00_2256,
		obj_t BgL_objz00_2257)
	{
		{	/* Llib/mmap.scm 160 */
			{	/* Llib/mmap.scm 161 */
				long BgL_tmpz00_2707;

				{	/* Llib/mmap.scm 161 */
					obj_t BgL_auxz00_2708;

					if (BGL_MMAPP(BgL_objz00_2257))
						{	/* Llib/mmap.scm 161 */
							BgL_auxz00_2708 = BgL_objz00_2257;
						}
					else
						{
							obj_t BgL_auxz00_2711;

							BgL_auxz00_2711 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
								BINT(((long) 7281)), BGl_string1891z00zz__mmapz00,
								BGl_string1887z00zz__mmapz00, BgL_objz00_2257);
							FAILURE(BgL_auxz00_2711, BFALSE, BFALSE);
						}
					BgL_tmpz00_2707 = BGl_mmapzd2lengthzd2zz__mmapz00(BgL_auxz00_2708);
				}
				return make_belong(BgL_tmpz00_2707);
			}
		}

	}



/* mmap-read-position */
	BGL_EXPORTED_DEF long BGl_mmapzd2readzd2positionz00zz__mmapz00(obj_t
		BgL_mmz00_19)
	{
		{	/* Llib/mmap.scm 166 */
			return BGL_MMAP_RP_GET(BgL_mmz00_19);
		}

	}



/* &mmap-read-position */
	obj_t BGl_z62mmapzd2readzd2positionz62zz__mmapz00(obj_t BgL_envz00_2258,
		obj_t BgL_mmz00_2259)
	{
		{	/* Llib/mmap.scm 166 */
			{	/* Llib/mmap.scm 167 */
				long BgL_tmpz00_2718;

				{	/* Llib/mmap.scm 167 */
					obj_t BgL_auxz00_2719;

					if (BGL_MMAPP(BgL_mmz00_2259))
						{	/* Llib/mmap.scm 167 */
							BgL_auxz00_2719 = BgL_mmz00_2259;
						}
					else
						{
							obj_t BgL_auxz00_2722;

							BgL_auxz00_2722 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
								BINT(((long) 7572)), BGl_string1892z00zz__mmapz00,
								BGl_string1887z00zz__mmapz00, BgL_mmz00_2259);
							FAILURE(BgL_auxz00_2722, BFALSE, BFALSE);
						}
					BgL_tmpz00_2718 =
						BGl_mmapzd2readzd2positionz00zz__mmapz00(BgL_auxz00_2719);
				}
				return make_belong(BgL_tmpz00_2718);
			}
		}

	}



/* mmap-read-position-set! */
	BGL_EXPORTED_DEF long BGl_mmapzd2readzd2positionzd2setz12zc0zz__mmapz00(obj_t
		BgL_mmz00_20, long BgL_pz00_21)
	{
		{	/* Llib/mmap.scm 172 */
			BGL_MMAP_RP_SET(BgL_mmz00_20, BgL_pz00_21);
			BUNSPEC;
			return BgL_pz00_21;
		}

	}



/* &mmap-read-position-set! */
	obj_t BGl_z62mmapzd2readzd2positionzd2setz12za2zz__mmapz00(obj_t
		BgL_envz00_2260, obj_t BgL_mmz00_2261, obj_t BgL_pz00_2262)
	{
		{	/* Llib/mmap.scm 172 */
			{	/* Llib/mmap.scm 173 */
				long BgL_tmpz00_2729;

				{	/* Llib/mmap.scm 173 */
					long BgL_auxz00_2737;
					obj_t BgL_auxz00_2730;

					{	/* Llib/mmap.scm 173 */
						obj_t BgL_tmpz00_2738;

						if (ELONGP(BgL_pz00_2262))
							{	/* Llib/mmap.scm 173 */
								BgL_tmpz00_2738 = BgL_pz00_2262;
							}
						else
							{
								obj_t BgL_auxz00_2741;

								BgL_auxz00_2741 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
									BINT(((long) 7884)), BGl_string1893z00zz__mmapz00,
									BGl_string1894z00zz__mmapz00, BgL_pz00_2262);
								FAILURE(BgL_auxz00_2741, BFALSE, BFALSE);
							}
						BgL_auxz00_2737 = BELONG_TO_LONG(BgL_tmpz00_2738);
					}
					if (BGL_MMAPP(BgL_mmz00_2261))
						{	/* Llib/mmap.scm 173 */
							BgL_auxz00_2730 = BgL_mmz00_2261;
						}
					else
						{
							obj_t BgL_auxz00_2733;

							BgL_auxz00_2733 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
								BINT(((long) 7884)), BGl_string1893z00zz__mmapz00,
								BGl_string1887z00zz__mmapz00, BgL_mmz00_2261);
							FAILURE(BgL_auxz00_2733, BFALSE, BFALSE);
						}
					BgL_tmpz00_2729 =
						BGl_mmapzd2readzd2positionzd2setz12zc0zz__mmapz00(BgL_auxz00_2730,
						BgL_auxz00_2737);
				}
				return make_belong(BgL_tmpz00_2729);
			}
		}

	}



/* mmap-write-position */
	BGL_EXPORTED_DEF long BGl_mmapzd2writezd2positionz00zz__mmapz00(obj_t
		BgL_mmz00_22)
	{
		{	/* Llib/mmap.scm 179 */
			return BGL_MMAP_WP_GET(BgL_mmz00_22);
		}

	}



/* &mmap-write-position */
	obj_t BGl_z62mmapzd2writezd2positionz62zz__mmapz00(obj_t BgL_envz00_2263,
		obj_t BgL_mmz00_2264)
	{
		{	/* Llib/mmap.scm 179 */
			{	/* Llib/mmap.scm 180 */
				long BgL_tmpz00_2749;

				{	/* Llib/mmap.scm 180 */
					obj_t BgL_auxz00_2750;

					if (BGL_MMAPP(BgL_mmz00_2264))
						{	/* Llib/mmap.scm 180 */
							BgL_auxz00_2750 = BgL_mmz00_2264;
						}
					else
						{
							obj_t BgL_auxz00_2753;

							BgL_auxz00_2753 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
								BINT(((long) 8164)), BGl_string1895z00zz__mmapz00,
								BGl_string1887z00zz__mmapz00, BgL_mmz00_2264);
							FAILURE(BgL_auxz00_2753, BFALSE, BFALSE);
						}
					BgL_tmpz00_2749 =
						BGl_mmapzd2writezd2positionz00zz__mmapz00(BgL_auxz00_2750);
				}
				return make_belong(BgL_tmpz00_2749);
			}
		}

	}



/* mmap-write-position-set! */
	BGL_EXPORTED_DEF long BGl_mmapzd2writezd2positionzd2setz12zc0zz__mmapz00(obj_t
		BgL_mmz00_23, long BgL_pz00_24)
	{
		{	/* Llib/mmap.scm 185 */
			BGL_MMAP_WP_SET(BgL_mmz00_23, BgL_pz00_24);
			BUNSPEC;
			return BgL_pz00_24;
		}

	}



/* &mmap-write-position-set! */
	obj_t BGl_z62mmapzd2writezd2positionzd2setz12za2zz__mmapz00(obj_t
		BgL_envz00_2265, obj_t BgL_mmz00_2266, obj_t BgL_pz00_2267)
	{
		{	/* Llib/mmap.scm 185 */
			{	/* Llib/mmap.scm 186 */
				long BgL_tmpz00_2760;

				{	/* Llib/mmap.scm 186 */
					long BgL_auxz00_2768;
					obj_t BgL_auxz00_2761;

					{	/* Llib/mmap.scm 186 */
						obj_t BgL_tmpz00_2769;

						if (ELONGP(BgL_pz00_2267))
							{	/* Llib/mmap.scm 186 */
								BgL_tmpz00_2769 = BgL_pz00_2267;
							}
						else
							{
								obj_t BgL_auxz00_2772;

								BgL_auxz00_2772 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
									BINT(((long) 8477)), BGl_string1896z00zz__mmapz00,
									BGl_string1894z00zz__mmapz00, BgL_pz00_2267);
								FAILURE(BgL_auxz00_2772, BFALSE, BFALSE);
							}
						BgL_auxz00_2768 = BELONG_TO_LONG(BgL_tmpz00_2769);
					}
					if (BGL_MMAPP(BgL_mmz00_2266))
						{	/* Llib/mmap.scm 186 */
							BgL_auxz00_2761 = BgL_mmz00_2266;
						}
					else
						{
							obj_t BgL_auxz00_2764;

							BgL_auxz00_2764 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
								BINT(((long) 8477)), BGl_string1896z00zz__mmapz00,
								BGl_string1887z00zz__mmapz00, BgL_mmz00_2266);
							FAILURE(BgL_auxz00_2764, BFALSE, BFALSE);
						}
					BgL_tmpz00_2760 =
						BGl_mmapzd2writezd2positionzd2setz12zc0zz__mmapz00(BgL_auxz00_2761,
						BgL_auxz00_2768);
				}
				return make_belong(BgL_tmpz00_2760);
			}
		}

	}



/* mmap-ref-ur */
	BGL_EXPORTED_DEF unsigned char BGl_mmapzd2refzd2urz00zz__mmapz00(obj_t
		BgL_mmz00_25, long BgL_iz00_26)
	{
		{	/* Llib/mmap.scm 192 */
			{	/* Llib/mmap.scm 193 */
				unsigned char BgL_cz00_2393;

				BgL_cz00_2393 = BGL_MMAP_REF(BgL_mmz00_25, BgL_iz00_26);
				{	/* Llib/mmap.scm 194 */
					long BgL_arg1256z00_2394;

					BgL_arg1256z00_2394 = (BgL_iz00_26 + ((long) 1));
					{	/* Llib/mmap.scm 194 */
						long BgL_res1682z00_2395;

						BGL_MMAP_RP_SET(BgL_mmz00_25, BgL_arg1256z00_2394);
						BUNSPEC;
						BgL_res1682z00_2395 = BgL_arg1256z00_2394;
						BgL_res1682z00_2395;
				}}
				return BgL_cz00_2393;
			}
		}

	}



/* &mmap-ref-ur */
	obj_t BGl_z62mmapzd2refzd2urz62zz__mmapz00(obj_t BgL_envz00_2268,
		obj_t BgL_mmz00_2269, obj_t BgL_iz00_2270)
	{
		{	/* Llib/mmap.scm 192 */
			{	/* Llib/mmap.scm 193 */
				unsigned char BgL_tmpz00_2782;

				{	/* Llib/mmap.scm 193 */
					long BgL_auxz00_2790;
					obj_t BgL_auxz00_2783;

					{	/* Llib/mmap.scm 193 */
						obj_t BgL_tmpz00_2791;

						if (ELONGP(BgL_iz00_2270))
							{	/* Llib/mmap.scm 193 */
								BgL_tmpz00_2791 = BgL_iz00_2270;
							}
						else
							{
								obj_t BgL_auxz00_2794;

								BgL_auxz00_2794 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
									BINT(((long) 8765)), BGl_string1897z00zz__mmapz00,
									BGl_string1894z00zz__mmapz00, BgL_iz00_2270);
								FAILURE(BgL_auxz00_2794, BFALSE, BFALSE);
							}
						BgL_auxz00_2790 = BELONG_TO_LONG(BgL_tmpz00_2791);
					}
					if (BGL_MMAPP(BgL_mmz00_2269))
						{	/* Llib/mmap.scm 193 */
							BgL_auxz00_2783 = BgL_mmz00_2269;
						}
					else
						{
							obj_t BgL_auxz00_2786;

							BgL_auxz00_2786 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
								BINT(((long) 8765)), BGl_string1897z00zz__mmapz00,
								BGl_string1887z00zz__mmapz00, BgL_mmz00_2269);
							FAILURE(BgL_auxz00_2786, BFALSE, BFALSE);
						}
					BgL_tmpz00_2782 =
						BGl_mmapzd2refzd2urz00zz__mmapz00(BgL_auxz00_2783, BgL_auxz00_2790);
				}
				return BCHAR(BgL_tmpz00_2782);
			}
		}

	}



/* mmap-set-ur! */
	BGL_EXPORTED_DEF obj_t BGl_mmapzd2setzd2urz12z12zz__mmapz00(obj_t
		BgL_mmz00_27, long BgL_iz00_28, unsigned char BgL_cz00_29)
	{
		{	/* Llib/mmap.scm 200 */
			BGL_MMAP_SET(BgL_mmz00_27, BgL_iz00_28, BgL_cz00_29);
			{	/* Llib/mmap.scm 202 */
				long BgL_arg1258z00_2396;

				BgL_arg1258z00_2396 = (BgL_iz00_28 + ((long) 1));
				{	/* Llib/mmap.scm 202 */
					long BgL_res1684z00_2397;

					BGL_MMAP_WP_SET(BgL_mmz00_27, BgL_arg1258z00_2396);
					BUNSPEC;
					BgL_res1684z00_2397 = BgL_arg1258z00_2396;
					return make_belong(BgL_res1684z00_2397);
				}
			}
		}

	}



/* &mmap-set-ur! */
	obj_t BGl_z62mmapzd2setzd2urz12z70zz__mmapz00(obj_t BgL_envz00_2271,
		obj_t BgL_mmz00_2272, obj_t BgL_iz00_2273, obj_t BgL_cz00_2274)
	{
		{	/* Llib/mmap.scm 200 */
			{	/* Llib/mmap.scm 201 */
				unsigned char BgL_auxz00_2821;
				long BgL_auxz00_2812;
				obj_t BgL_auxz00_2805;

				{	/* Llib/mmap.scm 201 */
					obj_t BgL_tmpz00_2822;

					if (CHARP(BgL_cz00_2274))
						{	/* Llib/mmap.scm 201 */
							BgL_tmpz00_2822 = BgL_cz00_2274;
						}
					else
						{
							obj_t BgL_auxz00_2825;

							BgL_auxz00_2825 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
								BINT(((long) 9159)), BGl_string1898z00zz__mmapz00,
								BGl_string1899z00zz__mmapz00, BgL_cz00_2274);
							FAILURE(BgL_auxz00_2825, BFALSE, BFALSE);
						}
					BgL_auxz00_2821 = CCHAR(BgL_tmpz00_2822);
				}
				{	/* Llib/mmap.scm 201 */
					obj_t BgL_tmpz00_2813;

					if (ELONGP(BgL_iz00_2273))
						{	/* Llib/mmap.scm 201 */
							BgL_tmpz00_2813 = BgL_iz00_2273;
						}
					else
						{
							obj_t BgL_auxz00_2816;

							BgL_auxz00_2816 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
								BINT(((long) 9159)), BGl_string1898z00zz__mmapz00,
								BGl_string1894z00zz__mmapz00, BgL_iz00_2273);
							FAILURE(BgL_auxz00_2816, BFALSE, BFALSE);
						}
					BgL_auxz00_2812 = BELONG_TO_LONG(BgL_tmpz00_2813);
				}
				if (BGL_MMAPP(BgL_mmz00_2272))
					{	/* Llib/mmap.scm 201 */
						BgL_auxz00_2805 = BgL_mmz00_2272;
					}
				else
					{
						obj_t BgL_auxz00_2808;

						BgL_auxz00_2808 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
							BINT(((long) 9159)), BGl_string1898z00zz__mmapz00,
							BGl_string1887z00zz__mmapz00, BgL_mmz00_2272);
						FAILURE(BgL_auxz00_2808, BFALSE, BFALSE);
					}
				return
					BGl_mmapzd2setzd2urz12z12zz__mmapz00(BgL_auxz00_2805, BgL_auxz00_2812,
					BgL_auxz00_2821);
			}
		}

	}



/* mmap-ref */
	BGL_EXPORTED_DEF unsigned char BGl_mmapzd2refzd2zz__mmapz00(obj_t
		BgL_mmz00_30, long BgL_iz00_31)
	{
		{	/* Llib/mmap.scm 207 */
			{	/* Llib/mmap.scm 208 */
				bool_t BgL_test2039z00_2831;

				{	/* Llib/mmap.scm 208 */
					long BgL_arg1274z00_2398;

					{	/* Llib/mmap.scm 208 */
						long BgL_res1685z00_2399;

						BgL_res1685z00_2399 = BGL_MMAP_LENGTH(BgL_mmz00_30);
						BgL_arg1274z00_2398 = BgL_res1685z00_2399;
					}
					BgL_test2039z00_2831 = BOUND_CHECK(BgL_iz00_31, BgL_arg1274z00_2398);
				}
				if (BgL_test2039z00_2831)
					{	/* Llib/mmap.scm 209 */
						unsigned char BgL_res1688z00_2400;

						{	/* Llib/mmap.scm 193 */
							unsigned char BgL_cz00_2401;

							BgL_cz00_2401 = BGL_MMAP_REF(BgL_mmz00_30, BgL_iz00_31);
							{	/* Llib/mmap.scm 194 */
								long BgL_arg1256z00_2402;

								BgL_arg1256z00_2402 = (BgL_iz00_31 + ((long) 1));
								{	/* Llib/mmap.scm 194 */
									long BgL_res1687z00_2403;

									BGL_MMAP_RP_SET(BgL_mmz00_30, BgL_arg1256z00_2402);
									BUNSPEC;
									BgL_res1687z00_2403 = BgL_arg1256z00_2402;
									BgL_res1687z00_2403;
							}}
							BgL_res1688z00_2400 = BgL_cz00_2401;
						}
						return BgL_res1688z00_2400;
					}
				else
					{	/* Llib/mmap.scm 212 */
						obj_t BgL_arg1268z00_2404;

						{	/* Llib/mmap.scm 212 */
							obj_t BgL_arg1270z00_2405;

							{	/* Llib/mmap.scm 212 */
								obj_t BgL_arg1271z00_2406;

								{	/* Llib/mmap.scm 212 */
									long BgL_arg1273z00_2407;

									{	/* Llib/mmap.scm 212 */
										long BgL_res1689z00_2408;

										BgL_res1689z00_2408 = BGL_MMAP_LENGTH(BgL_mmz00_30);
										BgL_arg1273z00_2407 = BgL_res1689z00_2408;
									}
									BgL_arg1271z00_2406 =
										BGl_2zd2zd2zz__r4_numbers_6_5z00(make_belong
										(BgL_arg1273z00_2407), BINT(((long) 1)));
								}
								{	/* Llib/mmap.scm 212 */

									BgL_arg1270z00_2405 =
										BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
										(BgL_arg1271z00_2406, BINT(((long) 10)));
							}}
							BgL_arg1268z00_2404 =
								string_append_3(BGl_string1900z00zz__mmapz00,
								BgL_arg1270z00_2405, BGl_string1901z00zz__mmapz00);
						}
						return
							CCHAR(BGl_errorz00zz__errorz00(BGl_symbol1902z00zz__mmapz00,
								BgL_arg1268z00_2404, make_belong(BgL_iz00_31)));
					}
			}
		}

	}



/* &mmap-ref */
	obj_t BGl_z62mmapzd2refzb0zz__mmapz00(obj_t BgL_envz00_2275,
		obj_t BgL_mmz00_2276, obj_t BgL_iz00_2277)
	{
		{	/* Llib/mmap.scm 207 */
			{	/* Llib/mmap.scm 208 */
				unsigned char BgL_tmpz00_2847;

				{	/* Llib/mmap.scm 208 */
					long BgL_auxz00_2855;
					obj_t BgL_auxz00_2848;

					{	/* Llib/mmap.scm 208 */
						obj_t BgL_tmpz00_2856;

						if (ELONGP(BgL_iz00_2277))
							{	/* Llib/mmap.scm 208 */
								BgL_tmpz00_2856 = BgL_iz00_2277;
							}
						else
							{
								obj_t BgL_auxz00_2859;

								BgL_auxz00_2859 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
									BINT(((long) 9487)), BGl_string1904z00zz__mmapz00,
									BGl_string1894z00zz__mmapz00, BgL_iz00_2277);
								FAILURE(BgL_auxz00_2859, BFALSE, BFALSE);
							}
						BgL_auxz00_2855 = BELONG_TO_LONG(BgL_tmpz00_2856);
					}
					if (BGL_MMAPP(BgL_mmz00_2276))
						{	/* Llib/mmap.scm 208 */
							BgL_auxz00_2848 = BgL_mmz00_2276;
						}
					else
						{
							obj_t BgL_auxz00_2851;

							BgL_auxz00_2851 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
								BINT(((long) 9487)), BGl_string1904z00zz__mmapz00,
								BGl_string1887z00zz__mmapz00, BgL_mmz00_2276);
							FAILURE(BgL_auxz00_2851, BFALSE, BFALSE);
						}
					BgL_tmpz00_2847 =
						BGl_mmapzd2refzd2zz__mmapz00(BgL_auxz00_2848, BgL_auxz00_2855);
				}
				return BCHAR(BgL_tmpz00_2847);
			}
		}

	}



/* mmap-set! */
	BGL_EXPORTED_DEF obj_t BGl_mmapzd2setz12zc0zz__mmapz00(obj_t BgL_mmz00_32,
		long BgL_iz00_33, unsigned char BgL_cz00_34)
	{
		{	/* Llib/mmap.scm 219 */
			{	/* Llib/mmap.scm 220 */
				bool_t BgL_test2042z00_2866;

				{	/* Llib/mmap.scm 220 */
					long BgL_arg1284z00_2409;

					{	/* Llib/mmap.scm 220 */
						long BgL_res1690z00_2410;

						BgL_res1690z00_2410 = BGL_MMAP_LENGTH(BgL_mmz00_32);
						BgL_arg1284z00_2409 = BgL_res1690z00_2410;
					}
					BgL_test2042z00_2866 = BOUND_CHECK(BgL_iz00_33, BgL_arg1284z00_2409);
				}
				if (BgL_test2042z00_2866)
					{	/* Llib/mmap.scm 220 */
						BGL_MMAP_SET(BgL_mmz00_32, BgL_iz00_33, BgL_cz00_34);
						{	/* Llib/mmap.scm 202 */
							long BgL_arg1258z00_2411;

							BgL_arg1258z00_2411 = (BgL_iz00_33 + ((long) 1));
							{	/* Llib/mmap.scm 202 */
								long BgL_res1692z00_2412;

								BGL_MMAP_WP_SET(BgL_mmz00_32, BgL_arg1258z00_2411);
								BUNSPEC;
								BgL_res1692z00_2412 = BgL_arg1258z00_2411;
								return make_belong(BgL_res1692z00_2412);
							}
						}
					}
				else
					{	/* Llib/mmap.scm 224 */
						obj_t BgL_arg1277z00_2413;

						{	/* Llib/mmap.scm 224 */
							obj_t BgL_arg1280z00_2414;

							{	/* Llib/mmap.scm 224 */
								obj_t BgL_arg1281z00_2415;

								{	/* Llib/mmap.scm 224 */
									long BgL_arg1282z00_2416;

									{	/* Llib/mmap.scm 224 */
										long BgL_res1693z00_2417;

										BgL_res1693z00_2417 = BGL_MMAP_LENGTH(BgL_mmz00_32);
										BgL_arg1282z00_2416 = BgL_res1693z00_2417;
									}
									BgL_arg1281z00_2415 =
										BGl_2zd2zd2zz__r4_numbers_6_5z00(make_belong
										(BgL_arg1282z00_2416), BINT(((long) 1)));
								}
								{	/* Llib/mmap.scm 224 */

									BgL_arg1280z00_2414 =
										BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
										(BgL_arg1281z00_2415, BINT(((long) 10)));
							}}
							BgL_arg1277z00_2413 =
								string_append_3(BGl_string1900z00zz__mmapz00,
								BgL_arg1280z00_2414, BGl_string1901z00zz__mmapz00);
						}
						return
							BGl_errorz00zz__errorz00(BGl_symbol1905z00zz__mmapz00,
							BgL_arg1277z00_2413, make_belong(BgL_iz00_33));
					}
			}
		}

	}



/* &mmap-set! */
	obj_t BGl_z62mmapzd2setz12za2zz__mmapz00(obj_t BgL_envz00_2278,
		obj_t BgL_mmz00_2279, obj_t BgL_iz00_2280, obj_t BgL_cz00_2281)
	{
		{	/* Llib/mmap.scm 219 */
			{	/* Llib/mmap.scm 220 */
				unsigned char BgL_auxz00_2898;
				long BgL_auxz00_2889;
				obj_t BgL_auxz00_2882;

				{	/* Llib/mmap.scm 220 */
					obj_t BgL_tmpz00_2899;

					if (CHARP(BgL_cz00_2281))
						{	/* Llib/mmap.scm 220 */
							BgL_tmpz00_2899 = BgL_cz00_2281;
						}
					else
						{
							obj_t BgL_auxz00_2902;

							BgL_auxz00_2902 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
								BINT(((long) 9987)), BGl_string1907z00zz__mmapz00,
								BGl_string1899z00zz__mmapz00, BgL_cz00_2281);
							FAILURE(BgL_auxz00_2902, BFALSE, BFALSE);
						}
					BgL_auxz00_2898 = CCHAR(BgL_tmpz00_2899);
				}
				{	/* Llib/mmap.scm 220 */
					obj_t BgL_tmpz00_2890;

					if (ELONGP(BgL_iz00_2280))
						{	/* Llib/mmap.scm 220 */
							BgL_tmpz00_2890 = BgL_iz00_2280;
						}
					else
						{
							obj_t BgL_auxz00_2893;

							BgL_auxz00_2893 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
								BINT(((long) 9987)), BGl_string1907z00zz__mmapz00,
								BGl_string1894z00zz__mmapz00, BgL_iz00_2280);
							FAILURE(BgL_auxz00_2893, BFALSE, BFALSE);
						}
					BgL_auxz00_2889 = BELONG_TO_LONG(BgL_tmpz00_2890);
				}
				if (BGL_MMAPP(BgL_mmz00_2279))
					{	/* Llib/mmap.scm 220 */
						BgL_auxz00_2882 = BgL_mmz00_2279;
					}
				else
					{
						obj_t BgL_auxz00_2885;

						BgL_auxz00_2885 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
							BINT(((long) 9987)), BGl_string1907z00zz__mmapz00,
							BGl_string1887z00zz__mmapz00, BgL_mmz00_2279);
						FAILURE(BgL_auxz00_2885, BFALSE, BFALSE);
					}
				return
					BGl_mmapzd2setz12zc0zz__mmapz00(BgL_auxz00_2882, BgL_auxz00_2889,
					BgL_auxz00_2898);
			}
		}

	}



/* mmap-substring */
	BGL_EXPORTED_DEF obj_t BGl_mmapzd2substringzd2zz__mmapz00(obj_t BgL_mmz00_35,
		long BgL_startz00_36, long BgL_endz00_37)
	{
		{	/* Llib/mmap.scm 231 */
			if ((BgL_endz00_37 < BgL_startz00_36))
				{	/* Llib/mmap.scm 234 */
					long BgL_arg1286z00_1168;

					{	/* Llib/mmap.scm 234 */
						long BgL_res1695z00_1827;

						{	/* Llib/mmap.scm 234 */
							long BgL_tmpz00_2910;

							BgL_tmpz00_2910 = (BgL_endz00_37 - BgL_startz00_36);
							BgL_res1695z00_1827 = (long) (BgL_tmpz00_2910);
						}
						BgL_arg1286z00_1168 = BgL_res1695z00_1827;
					}
					return
						BGl_errorz00zz__errorz00(BGl_symbol1908z00zz__mmapz00,
						BGl_string1910z00zz__mmapz00, make_belong(BgL_arg1286z00_1168));
				}
			else
				{	/* Llib/mmap.scm 235 */
					bool_t BgL_test2047z00_2915;

					{	/* Llib/mmap.scm 235 */
						long BgL_arg1304z00_1192;

						{	/* Llib/mmap.scm 235 */
							long BgL_arg1306z00_1193;

							{	/* Llib/mmap.scm 235 */
								long BgL_res1696z00_1829;

								BgL_res1696z00_1829 = BGL_MMAP_LENGTH(BgL_mmz00_35);
								BgL_arg1306z00_1193 = BgL_res1696z00_1829;
							}
							BgL_arg1304z00_1192 = (((long) 1) + BgL_arg1306z00_1193);
						}
						BgL_test2047z00_2915 =
							BOUND_CHECK(BgL_endz00_37, BgL_arg1304z00_1192);
					}
					if (BgL_test2047z00_2915)
						{	/* Llib/mmap.scm 240 */
							bool_t BgL_test2048z00_2919;

							{	/* Llib/mmap.scm 240 */
								long BgL_arg1300z00_1186;

								{	/* Llib/mmap.scm 240 */
									long BgL_res1698z00_1834;

									BgL_res1698z00_1834 = BGL_MMAP_LENGTH(BgL_mmz00_35);
									BgL_arg1300z00_1186 = BgL_res1698z00_1834;
								}
								BgL_test2048z00_2919 =
									BOUND_CHECK(BgL_startz00_36, BgL_arg1300z00_1186);
							}
							if (BgL_test2048z00_2919)
								{	/* Llib/mmap.scm 243 */
									obj_t BgL_rz00_1174;

									{	/* Llib/mmap.scm 243 */
										long BgL_arg1298z00_1184;

										{	/* Llib/mmap.scm 243 */
											long BgL_arg1299z00_1185;

											{	/* Llib/mmap.scm 243 */
												long BgL_res1699z00_1837;

												{	/* Llib/mmap.scm 243 */
													long BgL_tmpz00_2922;

													BgL_tmpz00_2922 = (BgL_endz00_37 - BgL_startz00_36);
													BgL_res1699z00_1837 = (long) (BgL_tmpz00_2922);
												}
												BgL_arg1299z00_1185 = BgL_res1699z00_1837;
											}
											{	/* Llib/mmap.scm 243 */
												long BgL_res1700z00_1839;

												BgL_res1700z00_1839 = (long) (BgL_arg1299z00_1185);
												BgL_arg1298z00_1184 = BgL_res1700z00_1839;
										}}
										BgL_rz00_1174 = make_string_sans_fill(BgL_arg1298z00_1184);
									}
									{
										long BgL_iz00_1866;
										long BgL_jz00_1867;

										BgL_iz00_1866 = BgL_startz00_36;
										BgL_jz00_1867 = ((long) 0);
									BgL_loopz00_1865:
										if ((BgL_iz00_1866 == BgL_endz00_37))
											{	/* Llib/mmap.scm 246 */
												{	/* Llib/mmap.scm 248 */
													long BgL_res1702z00_1872;

													BGL_MMAP_RP_SET(BgL_mmz00_35, BgL_iz00_1866);
													BUNSPEC;
													BgL_res1702z00_1872 = BgL_iz00_1866;
													BgL_res1702z00_1872;
												}
												return BgL_rz00_1174;
											}
										else
											{	/* Llib/mmap.scm 246 */
												{	/* Llib/mmap.scm 251 */
													unsigned char BgL_arg1295z00_1875;

													{	/* Llib/mmap.scm 251 */
														unsigned char BgL_res1705z00_1876;

														{	/* Llib/mmap.scm 193 */
															unsigned char BgL_cz00_1879;

															BgL_cz00_1879 =
																BGL_MMAP_REF(BgL_mmz00_35, BgL_iz00_1866);
															{	/* Llib/mmap.scm 194 */
																long BgL_arg1256z00_1880;

																BgL_arg1256z00_1880 =
																	(BgL_iz00_1866 + ((long) 1));
																{	/* Llib/mmap.scm 194 */
																	long BgL_res1704z00_1884;

																	BGL_MMAP_RP_SET(BgL_mmz00_35,
																		BgL_arg1256z00_1880);
																	BUNSPEC;
																	BgL_res1704z00_1884 = BgL_arg1256z00_1880;
																	BgL_res1704z00_1884;
															}}
															BgL_res1705z00_1876 = BgL_cz00_1879;
														}
														BgL_arg1295z00_1875 = BgL_res1705z00_1876;
													}
													STRING_SET(BgL_rz00_1174, BgL_jz00_1867,
														BgL_arg1295z00_1875);
												}
												{	/* Llib/mmap.scm 252 */
													long BgL_arg1296z00_1890;
													long BgL_arg1297z00_1891;

													BgL_arg1296z00_1890 =
														(BgL_iz00_1866 + (long) (((long) 1)));
													BgL_arg1297z00_1891 = (BgL_jz00_1867 + ((long) 1));
													{
														long BgL_jz00_2938;
														long BgL_iz00_2937;

														BgL_iz00_2937 = BgL_arg1296z00_1890;
														BgL_jz00_2938 = BgL_arg1297z00_1891;
														BgL_jz00_1867 = BgL_jz00_2938;
														BgL_iz00_1866 = BgL_iz00_2937;
														goto BgL_loopz00_1865;
													}
												}
											}
									}
								}
							else
								{	/* Llib/mmap.scm 240 */
									return
										BGl_errorz00zz__errorz00(BGl_symbol1908z00zz__mmapz00,
										BGl_string1911z00zz__mmapz00, make_belong(BgL_startz00_36));
								}
						}
					else
						{	/* Llib/mmap.scm 238 */
							obj_t BgL_arg1301z00_1187;

							{	/* Llib/mmap.scm 238 */
								obj_t BgL_arg1302z00_1188;

								{	/* Llib/mmap.scm 238 */
									long BgL_arg1303z00_1189;

									{	/* Llib/mmap.scm 238 */
										long BgL_res1708z00_1898;

										BgL_res1708z00_1898 = BGL_MMAP_LENGTH(BgL_mmz00_35);
										BgL_arg1303z00_1189 = BgL_res1708z00_1898;
									}
									{	/* Ieee/number.scm 164 */

										BgL_arg1302z00_1188 =
											BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(make_belong
											(BgL_arg1303z00_1189), BINT(((long) 10)));
								}}
								BgL_arg1301z00_1187 =
									string_append(BGl_string1912z00zz__mmapz00,
									BgL_arg1302z00_1188);
							}
							return
								BGl_errorz00zz__errorz00(BGl_symbol1908z00zz__mmapz00,
								BgL_arg1301z00_1187, make_belong(BgL_endz00_37));
						}
				}
		}

	}



/* &mmap-substring */
	obj_t BGl_z62mmapzd2substringzb0zz__mmapz00(obj_t BgL_envz00_2282,
		obj_t BgL_mmz00_2283, obj_t BgL_startz00_2284, obj_t BgL_endz00_2285)
	{
		{	/* Llib/mmap.scm 231 */
			{	/* Llib/mmap.scm 233 */
				long BgL_auxz00_2964;
				long BgL_auxz00_2955;
				obj_t BgL_auxz00_2948;

				{	/* Llib/mmap.scm 233 */
					obj_t BgL_tmpz00_2965;

					if (ELONGP(BgL_endz00_2285))
						{	/* Llib/mmap.scm 233 */
							BgL_tmpz00_2965 = BgL_endz00_2285;
						}
					else
						{
							obj_t BgL_auxz00_2968;

							BgL_auxz00_2968 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
								BINT(((long) 10497)), BGl_string1913z00zz__mmapz00,
								BGl_string1894z00zz__mmapz00, BgL_endz00_2285);
							FAILURE(BgL_auxz00_2968, BFALSE, BFALSE);
						}
					BgL_auxz00_2964 = BELONG_TO_LONG(BgL_tmpz00_2965);
				}
				{	/* Llib/mmap.scm 233 */
					obj_t BgL_tmpz00_2956;

					if (ELONGP(BgL_startz00_2284))
						{	/* Llib/mmap.scm 233 */
							BgL_tmpz00_2956 = BgL_startz00_2284;
						}
					else
						{
							obj_t BgL_auxz00_2959;

							BgL_auxz00_2959 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
								BINT(((long) 10497)), BGl_string1913z00zz__mmapz00,
								BGl_string1894z00zz__mmapz00, BgL_startz00_2284);
							FAILURE(BgL_auxz00_2959, BFALSE, BFALSE);
						}
					BgL_auxz00_2955 = BELONG_TO_LONG(BgL_tmpz00_2956);
				}
				if (BGL_MMAPP(BgL_mmz00_2283))
					{	/* Llib/mmap.scm 233 */
						BgL_auxz00_2948 = BgL_mmz00_2283;
					}
				else
					{
						obj_t BgL_auxz00_2951;

						BgL_auxz00_2951 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
							BINT(((long) 10497)), BGl_string1913z00zz__mmapz00,
							BGl_string1887z00zz__mmapz00, BgL_mmz00_2283);
						FAILURE(BgL_auxz00_2951, BFALSE, BFALSE);
					}
				return
					BGl_mmapzd2substringzd2zz__mmapz00(BgL_auxz00_2948, BgL_auxz00_2955,
					BgL_auxz00_2964);
			}
		}

	}



/* mmap-substring-set! */
	BGL_EXPORTED_DEF obj_t BGl_mmapzd2substringzd2setz12z12zz__mmapz00(obj_t
		BgL_mmz00_38, long BgL_oz00_39, obj_t BgL_sz00_40)
	{
		{	/* Llib/mmap.scm 257 */
			{	/* Llib/mmap.scm 258 */
				long BgL_lenz00_1194;

				BgL_lenz00_1194 = STRING_LENGTH(BgL_sz00_40);
				if ((BgL_oz00_39 < ((long) 0)))
					{	/* Llib/mmap.scm 260 */
						return
							BGl_errorz00zz__errorz00(BGl_string1914z00zz__mmapz00,
							BGl_string1911z00zz__mmapz00, make_belong(BgL_oz00_39));
					}
				else
					{	/* Llib/mmap.scm 262 */
						bool_t BgL_test2054z00_2979;

						{	/* Llib/mmap.scm 262 */
							long BgL_arg1337z00_1226;

							{	/* Llib/mmap.scm 262 */
								long BgL_arg1338z00_1227;

								{	/* Llib/mmap.scm 262 */
									long BgL_res1711z00_1905;

									BgL_res1711z00_1905 = BGL_MMAP_LENGTH(BgL_mmz00_38);
									BgL_arg1338z00_1227 = BgL_res1711z00_1905;
								}
								BgL_arg1337z00_1226 = (BgL_arg1338z00_1227 + ((long) 1));
							}
							BgL_test2054z00_2979 =
								BOUND_CHECK(BgL_oz00_39, BgL_arg1337z00_1226);
						}
						if (BgL_test2054z00_2979)
							{	/* Llib/mmap.scm 268 */
								bool_t BgL_test2055z00_2983;

								{	/* Llib/mmap.scm 268 */
									long BgL_arg1328z00_1217;
									long BgL_arg1329z00_1218;

									{	/* Llib/mmap.scm 268 */
										long BgL_arg1330z00_1219;

										{	/* Llib/mmap.scm 268 */
											long BgL_res1713z00_1910;

											BgL_res1713z00_1910 = (long) (BgL_lenz00_1194);
											BgL_arg1330z00_1219 = BgL_res1713z00_1910;
										}
										BgL_arg1328z00_1217 = (BgL_oz00_39 + BgL_arg1330z00_1219);
									}
									{	/* Llib/mmap.scm 269 */
										long BgL_arg1331z00_1220;

										{	/* Llib/mmap.scm 269 */
											long BgL_res1715z00_1915;

											BgL_res1715z00_1915 = BGL_MMAP_LENGTH(BgL_mmz00_38);
											BgL_arg1331z00_1220 = BgL_res1715z00_1915;
										}
										BgL_arg1329z00_1218 = (BgL_arg1331z00_1220 + ((long) 1));
									}
									BgL_test2055z00_2983 =
										BOUND_CHECK(BgL_arg1328z00_1217, BgL_arg1329z00_1218);
								}
								if (BgL_test2055z00_2983)
									{
										long BgL_iz00_1944;
										long BgL_jz00_1945;

										BgL_iz00_1944 = ((long) 0);
										BgL_jz00_1945 = BgL_oz00_39;
									BgL_loopz00_1943:
										if ((BgL_iz00_1944 == BgL_lenz00_1194))
											{	/* Llib/mmap.scm 278 */
												{	/* Llib/mmap.scm 280 */
													long BgL_res1718z00_1950;

													BGL_MMAP_WP_SET(BgL_mmz00_38, BgL_jz00_1945);
													BUNSPEC;
													BgL_res1718z00_1950 = BgL_jz00_1945;
													BgL_res1718z00_1950;
												}
												return BgL_mmz00_38;
											}
										else
											{	/* Llib/mmap.scm 278 */
												{	/* Llib/mmap.scm 283 */
													unsigned char BgL_arg1318z00_1953;

													BgL_arg1318z00_1953 =
														STRING_REF(BgL_sz00_40, BgL_iz00_1944);
													BGL_MMAP_SET(BgL_mmz00_38, BgL_jz00_1945,
														BgL_arg1318z00_1953);
													{	/* Llib/mmap.scm 202 */
														long BgL_arg1258z00_1960;

														BgL_arg1258z00_1960 = (BgL_jz00_1945 + ((long) 1));
														{	/* Llib/mmap.scm 202 */
															long BgL_res1721z00_1964;

															BGL_MMAP_WP_SET(BgL_mmz00_38,
																BgL_arg1258z00_1960);
															BUNSPEC;
															BgL_res1721z00_1964 = BgL_arg1258z00_1960;
															BgL_res1721z00_1964;
												}}}
												{	/* Llib/mmap.scm 284 */
													long BgL_arg1319z00_1967;
													long BgL_arg1322z00_1968;

													BgL_arg1319z00_1967 = (BgL_iz00_1944 + ((long) 1));
													BgL_arg1322z00_1968 =
														(BgL_jz00_1945 + (long) (((long) 1)));
													{
														long BgL_jz00_3000;
														long BgL_iz00_2999;

														BgL_iz00_2999 = BgL_arg1319z00_1967;
														BgL_jz00_3000 = BgL_arg1322z00_1968;
														BgL_jz00_1945 = BgL_jz00_3000;
														BgL_iz00_1944 = BgL_iz00_2999;
														goto BgL_loopz00_1943;
													}
												}
											}
									}
								else
									{	/* Llib/mmap.scm 272 */
										obj_t BgL_arg1324z00_1213;
										obj_t BgL_arg1325z00_1214;

										{	/* Llib/mmap.scm 272 */
											obj_t BgL_arg1326z00_1215;

											{	/* Llib/mmap.scm 272 */
												long BgL_arg1327z00_1216;

												{	/* Llib/mmap.scm 272 */
													long BgL_res1724z00_1975;

													BgL_res1724z00_1975 = BGL_MMAP_LENGTH(BgL_mmz00_38);
													BgL_arg1327z00_1216 = BgL_res1724z00_1975;
												}
												BgL_arg1326z00_1215 =
													BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
													(make_belong(BgL_arg1327z00_1216), BINT(((long) 1)));
											}
											BgL_arg1324z00_1213 =
												string_append_3(BGl_string1900z00zz__mmapz00,
												BgL_arg1326z00_1215, BGl_string1901z00zz__mmapz00);
										}
										BgL_arg1325z00_1214 =
											BGl_2zb2zb2zz__r4_numbers_6_5z00(make_belong(BgL_oz00_39),
											BINT(BgL_lenz00_1194));
										return
											BGl_errorz00zz__errorz00(BGl_symbol1915z00zz__mmapz00,
											BgL_arg1324z00_1213, BgL_arg1325z00_1214);
									}
							}
						else
							{	/* Llib/mmap.scm 265 */
								obj_t BgL_arg1333z00_1221;

								{	/* Llib/mmap.scm 265 */
									obj_t BgL_arg1334z00_1222;

									{	/* Llib/mmap.scm 265 */
										long BgL_arg1335z00_1223;

										{	/* Llib/mmap.scm 265 */
											long BgL_res1725z00_1977;

											BgL_res1725z00_1977 = BGL_MMAP_LENGTH(BgL_mmz00_38);
											BgL_arg1335z00_1223 = BgL_res1725z00_1977;
										}
										{	/* Ieee/number.scm 164 */

											BgL_arg1334z00_1222 =
												BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
												(make_belong(BgL_arg1335z00_1223), BINT(((long) 10)));
									}}
									BgL_arg1333z00_1221 =
										string_append_3(BGl_string1900z00zz__mmapz00,
										BgL_arg1334z00_1222, BGl_string1917z00zz__mmapz00);
								}
								return
									BGl_errorz00zz__errorz00(BGl_symbol1918z00zz__mmapz00,
									BgL_arg1333z00_1221, make_belong(BgL_oz00_39));
							}
					}
			}
		}

	}



/* &mmap-substring-set! */
	obj_t BGl_z62mmapzd2substringzd2setz12z70zz__mmapz00(obj_t BgL_envz00_2286,
		obj_t BgL_mmz00_2287, obj_t BgL_oz00_2288, obj_t BgL_sz00_2289)
	{
		{	/* Llib/mmap.scm 257 */
			{	/* Llib/mmap.scm 258 */
				obj_t BgL_auxz00_3033;
				long BgL_auxz00_3024;
				obj_t BgL_auxz00_3017;

				if (STRINGP(BgL_sz00_2289))
					{	/* Llib/mmap.scm 258 */
						BgL_auxz00_3033 = BgL_sz00_2289;
					}
				else
					{
						obj_t BgL_auxz00_3036;

						BgL_auxz00_3036 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
							BINT(((long) 11493)), BGl_string1919z00zz__mmapz00,
							BGl_string1882z00zz__mmapz00, BgL_sz00_2289);
						FAILURE(BgL_auxz00_3036, BFALSE, BFALSE);
					}
				{	/* Llib/mmap.scm 258 */
					obj_t BgL_tmpz00_3025;

					if (ELONGP(BgL_oz00_2288))
						{	/* Llib/mmap.scm 258 */
							BgL_tmpz00_3025 = BgL_oz00_2288;
						}
					else
						{
							obj_t BgL_auxz00_3028;

							BgL_auxz00_3028 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
								BINT(((long) 11493)), BGl_string1919z00zz__mmapz00,
								BGl_string1894z00zz__mmapz00, BgL_oz00_2288);
							FAILURE(BgL_auxz00_3028, BFALSE, BFALSE);
						}
					BgL_auxz00_3024 = BELONG_TO_LONG(BgL_tmpz00_3025);
				}
				if (BGL_MMAPP(BgL_mmz00_2287))
					{	/* Llib/mmap.scm 258 */
						BgL_auxz00_3017 = BgL_mmz00_2287;
					}
				else
					{
						obj_t BgL_auxz00_3020;

						BgL_auxz00_3020 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
							BINT(((long) 11493)), BGl_string1919z00zz__mmapz00,
							BGl_string1887z00zz__mmapz00, BgL_mmz00_2287);
						FAILURE(BgL_auxz00_3020, BFALSE, BFALSE);
					}
				return
					BGl_mmapzd2substringzd2setz12z12zz__mmapz00(BgL_auxz00_3017,
					BgL_auxz00_3024, BgL_auxz00_3033);
			}
		}

	}



/* mmap-get-char */
	BGL_EXPORTED_DEF unsigned char BGl_mmapzd2getzd2charz00zz__mmapz00(obj_t
		BgL_mmz00_41)
	{
		{	/* Llib/mmap.scm 289 */
			{	/* Llib/mmap.scm 290 */
				long BgL_arg1339z00_2418;

				BgL_arg1339z00_2418 = BGL_MMAP_RP_GET(BgL_mmz00_41);
				{	/* Llib/mmap.scm 290 */
					unsigned char BgL_res1728z00_2419;

					{	/* Llib/mmap.scm 193 */
						unsigned char BgL_cz00_2420;

						BgL_cz00_2420 = BGL_MMAP_REF(BgL_mmz00_41, BgL_arg1339z00_2418);
						{	/* Llib/mmap.scm 194 */
							long BgL_arg1256z00_2421;

							BgL_arg1256z00_2421 = (BgL_arg1339z00_2418 + ((long) 1));
							{	/* Llib/mmap.scm 194 */
								long BgL_res1727z00_2422;

								BGL_MMAP_RP_SET(BgL_mmz00_41, BgL_arg1256z00_2421);
								BUNSPEC;
								BgL_res1727z00_2422 = BgL_arg1256z00_2421;
								BgL_res1727z00_2422;
						}}
						BgL_res1728z00_2419 = BgL_cz00_2420;
					}
					return BgL_res1728z00_2419;
				}
			}
		}

	}



/* &mmap-get-char */
	obj_t BGl_z62mmapzd2getzd2charz62zz__mmapz00(obj_t BgL_envz00_2290,
		obj_t BgL_mmz00_2291)
	{
		{	/* Llib/mmap.scm 289 */
			{	/* Llib/mmap.scm 290 */
				unsigned char BgL_tmpz00_3045;

				{	/* Llib/mmap.scm 290 */
					obj_t BgL_auxz00_3046;

					if (BGL_MMAPP(BgL_mmz00_2291))
						{	/* Llib/mmap.scm 290 */
							BgL_auxz00_3046 = BgL_mmz00_2291;
						}
					else
						{
							obj_t BgL_auxz00_3049;

							BgL_auxz00_3049 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
								BINT(((long) 12534)), BGl_string1920z00zz__mmapz00,
								BGl_string1887z00zz__mmapz00, BgL_mmz00_2291);
							FAILURE(BgL_auxz00_3049, BFALSE, BFALSE);
						}
					BgL_tmpz00_3045 =
						BGl_mmapzd2getzd2charz00zz__mmapz00(BgL_auxz00_3046);
				}
				return BCHAR(BgL_tmpz00_3045);
			}
		}

	}



/* mmap-put-char! */
	BGL_EXPORTED_DEF obj_t BGl_mmapzd2putzd2charz12z12zz__mmapz00(obj_t
		BgL_mmz00_42, unsigned char BgL_cz00_43)
	{
		{	/* Llib/mmap.scm 295 */
			{	/* Llib/mmap.scm 296 */
				long BgL_arg1340z00_2423;

				BgL_arg1340z00_2423 = BGL_MMAP_WP_GET(BgL_mmz00_42);
				BGL_MMAP_SET(BgL_mmz00_42, BgL_arg1340z00_2423, BgL_cz00_43);
				{	/* Llib/mmap.scm 202 */
					long BgL_arg1258z00_2424;

					BgL_arg1258z00_2424 = (BgL_arg1340z00_2423 + ((long) 1));
					{	/* Llib/mmap.scm 202 */
						long BgL_res1730z00_2425;

						BGL_MMAP_WP_SET(BgL_mmz00_42, BgL_arg1258z00_2424);
						BUNSPEC;
						BgL_res1730z00_2425 = BgL_arg1258z00_2424;
						return make_belong(BgL_res1730z00_2425);
					}
				}
			}
		}

	}



/* &mmap-put-char! */
	obj_t BGl_z62mmapzd2putzd2charz12z70zz__mmapz00(obj_t BgL_envz00_2292,
		obj_t BgL_mmz00_2293, obj_t BgL_cz00_2294)
	{
		{	/* Llib/mmap.scm 295 */
			{	/* Llib/mmap.scm 296 */
				unsigned char BgL_auxz00_3067;
				obj_t BgL_auxz00_3060;

				{	/* Llib/mmap.scm 296 */
					obj_t BgL_tmpz00_3068;

					if (CHARP(BgL_cz00_2294))
						{	/* Llib/mmap.scm 296 */
							BgL_tmpz00_3068 = BgL_cz00_2294;
						}
					else
						{
							obj_t BgL_auxz00_3071;

							BgL_auxz00_3071 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
								BINT(((long) 12833)), BGl_string1921z00zz__mmapz00,
								BGl_string1899z00zz__mmapz00, BgL_cz00_2294);
							FAILURE(BgL_auxz00_3071, BFALSE, BFALSE);
						}
					BgL_auxz00_3067 = CCHAR(BgL_tmpz00_3068);
				}
				if (BGL_MMAPP(BgL_mmz00_2293))
					{	/* Llib/mmap.scm 296 */
						BgL_auxz00_3060 = BgL_mmz00_2293;
					}
				else
					{
						obj_t BgL_auxz00_3063;

						BgL_auxz00_3063 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
							BINT(((long) 12833)), BGl_string1921z00zz__mmapz00,
							BGl_string1887z00zz__mmapz00, BgL_mmz00_2293);
						FAILURE(BgL_auxz00_3063, BFALSE, BFALSE);
					}
				return
					BGl_mmapzd2putzd2charz12z12zz__mmapz00(BgL_auxz00_3060,
					BgL_auxz00_3067);
			}
		}

	}



/* mmap-get-string */
	BGL_EXPORTED_DEF obj_t BGl_mmapzd2getzd2stringz00zz__mmapz00(obj_t
		BgL_mmz00_44, long BgL_lenz00_45)
	{
		{	/* Llib/mmap.scm 301 */
			{	/* Llib/mmap.scm 302 */
				long BgL_arg1341z00_2426;
				long BgL_arg1342z00_2427;

				BgL_arg1341z00_2426 = BGL_MMAP_RP_GET(BgL_mmz00_44);
				{	/* Llib/mmap.scm 302 */
					long BgL_arg1343z00_2428;

					BgL_arg1343z00_2428 = BGL_MMAP_RP_GET(BgL_mmz00_44);
					BgL_arg1342z00_2427 = (BgL_arg1343z00_2428 + BgL_lenz00_45);
				}
				return
					BGl_mmapzd2substringzd2zz__mmapz00(BgL_mmz00_44, BgL_arg1341z00_2426,
					BgL_arg1342z00_2427);
			}
		}

	}



/* &mmap-get-string */
	obj_t BGl_z62mmapzd2getzd2stringz62zz__mmapz00(obj_t BgL_envz00_2295,
		obj_t BgL_mmz00_2296, obj_t BgL_lenz00_2297)
	{
		{	/* Llib/mmap.scm 301 */
			{	/* Llib/mmap.scm 302 */
				long BgL_auxz00_3088;
				obj_t BgL_auxz00_3081;

				{	/* Llib/mmap.scm 302 */
					obj_t BgL_tmpz00_3089;

					if (ELONGP(BgL_lenz00_2297))
						{	/* Llib/mmap.scm 302 */
							BgL_tmpz00_3089 = BgL_lenz00_2297;
						}
					else
						{
							obj_t BgL_auxz00_3092;

							BgL_auxz00_3092 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
								BINT(((long) 13142)), BGl_string1922z00zz__mmapz00,
								BGl_string1894z00zz__mmapz00, BgL_lenz00_2297);
							FAILURE(BgL_auxz00_3092, BFALSE, BFALSE);
						}
					BgL_auxz00_3088 = BELONG_TO_LONG(BgL_tmpz00_3089);
				}
				if (BGL_MMAPP(BgL_mmz00_2296))
					{	/* Llib/mmap.scm 302 */
						BgL_auxz00_3081 = BgL_mmz00_2296;
					}
				else
					{
						obj_t BgL_auxz00_3084;

						BgL_auxz00_3084 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
							BINT(((long) 13142)), BGl_string1922z00zz__mmapz00,
							BGl_string1887z00zz__mmapz00, BgL_mmz00_2296);
						FAILURE(BgL_auxz00_3084, BFALSE, BFALSE);
					}
				return
					BGl_mmapzd2getzd2stringz00zz__mmapz00(BgL_auxz00_3081,
					BgL_auxz00_3088);
			}
		}

	}



/* mmap-put-string! */
	BGL_EXPORTED_DEF obj_t BGl_mmapzd2putzd2stringz12z12zz__mmapz00(obj_t
		BgL_mmz00_46, obj_t BgL_sz00_47)
	{
		{	/* Llib/mmap.scm 307 */
			{	/* Llib/mmap.scm 308 */
				long BgL_arg1344z00_2429;

				BgL_arg1344z00_2429 = BGL_MMAP_WP_GET(BgL_mmz00_46);
				return
					BGl_mmapzd2substringzd2setz12z12zz__mmapz00(BgL_mmz00_46,
					BgL_arg1344z00_2429, BgL_sz00_47);
			}
		}

	}



/* &mmap-put-string! */
	obj_t BGl_z62mmapzd2putzd2stringz12z70zz__mmapz00(obj_t BgL_envz00_2298,
		obj_t BgL_mmz00_2299, obj_t BgL_sz00_2300)
	{
		{	/* Llib/mmap.scm 307 */
			{	/* Llib/mmap.scm 308 */
				obj_t BgL_auxz00_3107;
				obj_t BgL_auxz00_3100;

				if (STRINGP(BgL_sz00_2300))
					{	/* Llib/mmap.scm 308 */
						BgL_auxz00_3107 = BgL_sz00_2300;
					}
				else
					{
						obj_t BgL_auxz00_3110;

						BgL_auxz00_3110 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
							BINT(((long) 13480)), BGl_string1923z00zz__mmapz00,
							BGl_string1882z00zz__mmapz00, BgL_sz00_2300);
						FAILURE(BgL_auxz00_3110, BFALSE, BFALSE);
					}
				if (BGL_MMAPP(BgL_mmz00_2299))
					{	/* Llib/mmap.scm 308 */
						BgL_auxz00_3100 = BgL_mmz00_2299;
					}
				else
					{
						obj_t BgL_auxz00_3103;

						BgL_auxz00_3103 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1879z00zz__mmapz00,
							BINT(((long) 13480)), BGl_string1923z00zz__mmapz00,
							BGl_string1887z00zz__mmapz00, BgL_mmz00_2299);
						FAILURE(BgL_auxz00_3103, BFALSE, BFALSE);
					}
				return
					BGl_mmapzd2putzd2stringz12z12zz__mmapz00(BgL_auxz00_3100,
					BgL_auxz00_3107);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__mmapz00()
	{
		{	/* Llib/mmap.scm 19 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__mmapz00()
	{
		{	/* Llib/mmap.scm 19 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__mmapz00()
	{
		{	/* Llib/mmap.scm 19 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__mmapz00()
	{
		{	/* Llib/mmap.scm 19 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1924z00zz__mmapz00));
		}

	}

#ifdef __cplusplus
}
#endif
