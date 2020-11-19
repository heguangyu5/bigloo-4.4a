/*===========================================================================*/
/*   (Rgc/rgctree.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Rgc/rgctree.scm -indent -o objs/obj_u/Rgc/rgctree.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_makezd2rgcsetzd2zz__rgc_setz00(long);
	static obj_t BGl_symbol1762z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol1764z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol1766z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol1768z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_orzd2ze3nodez31zz__rgc_treez00(obj_t);
	static long BGl_regularzd2treezd2positionzd2numberzd2zz__rgc_treez00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__rgc_treez00 = BUNSPEC;
	extern obj_t BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00(obj_t, obj_t);
	static obj_t BGl_treezd2ze3nodez31zz__rgc_treez00(obj_t);
	static obj_t BGl_symbol1770z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol1772z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol1774z00zz__rgc_treez00 = BUNSPEC;
	extern obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_symbol1783z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol1787z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol1790z00zz__rgc_treez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_regularzd2treezd2ze3nodeze3zz__rgc_treez00(obj_t);
	static obj_t BGl_symbol1792z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol1795z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zz__rgc_treez00();
	static obj_t BGl_symbol1799z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__rgc_treez00();
	static obj_t BGl_z62zc3z04anonymousza31311ze3ze5zz__rgc_treez00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__rgc_treez00();
	static obj_t BGl_za2currentzd2positionza2zd2zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_za2submatchesza2z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_initzd2positionsz12zc0zz__rgc_treez00();
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_resetzd2treez12zc0zz__rgc_treez00();
	extern obj_t make_vector(long, obj_t);
	static obj_t BGl_methodzd2initzd2zz__rgc_treez00();
	static obj_t BGl_za2positionsza2z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31309ze3ze5zz__rgc_treez00(obj_t, obj_t);
	static obj_t BGl_sequencezd2ze3nodez31zz__rgc_treez00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_list1801z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list1804z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list1807z00zz__rgc_treez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_printzd2nodezd2zz__rgc_treez00(obj_t);
	static obj_t BGl_list1810z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_za2positionzd2numberza2zd2zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list1814z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_z62or2zd2ze3nodez53zz__rgc_treez00(obj_t, obj_t, obj_t);
	static obj_t BGl_list1817z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list1820z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list1823z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list1824z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_z62resetzd2treez12za2zz__rgc_treez00(obj_t);
	static obj_t BGl_initzd2followposz12zc0zz__rgc_treez00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__rgc_treez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_configz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_setz00(long, char *);
	static obj_t BGl_z62printzd2nodezb0zz__rgc_treez00(obj_t, obj_t);
	static obj_t BGl_submatchzd2stopzd2addz12z12zz__rgc_treez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_submatchzd2startzd2addz12z12zz__rgc_treez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rgcsetzd2addz12zc0zz__rgc_setz00(obj_t, long);
	extern obj_t create_struct(obj_t, int);
	static obj_t BGl_cnstzd2initzd2zz__rgc_treez00();
	static obj_t BGl_list1782z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list1785z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_z62regularzd2treezd2ze3nodez81zz__rgc_treez00(obj_t, obj_t);
	static obj_t BGl_list1786z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zz__rgc_treez00();
	static obj_t BGl_list1789z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zz__rgc_treez00();
	static obj_t BGl_za2followposza2z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31286ze3ze5zz__rgc_treez00(obj_t, obj_t);
	static obj_t BGl_submatchzd2ze3nodez31zz__rgc_treez00(obj_t);
	static obj_t BGl_list1794z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list1797z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list1798z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_binaryzd2ze3nodez31zz__rgc_treez00(obj_t, obj_t);
	static obj_t BGl_integerzd2ze3nodez31zz__rgc_treez00(obj_t);
	extern obj_t BGl_rgcsetzd2orz12zc0zz__rgc_setz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31297ze3ze5zz__rgc_treez00(obj_t, obj_t);
	static obj_t BGl_z62sequence2zd2ze3nodez53zz__rgc_treez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_loopze70ze7zz__rgc_treez00(obj_t, obj_t);
	static long BGl_loopze71ze7zz__rgc_treez00(obj_t, long);
	extern obj_t BGl_rgcsetzd2orzd2zz__rgc_setz00(obj_t, obj_t);
	static obj_t BGl_symbol1802z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol1805z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol1808z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_za2zd2ze3nodez93zz__rgc_treez00(obj_t);
	static obj_t BGl_symbol1811z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol1815z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol1818z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol1821z00zz__rgc_treez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_printzd2followposzd2zz__rgc_treez00(obj_t);
	static obj_t BGl_symbol1825z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol1828z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_z62printzd2followposzb0zz__rgc_treez00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regularzd2treezd2ze3nodezd2envz31zz__rgc_treez00,
		BgL_bgl_za762regularza7d2tre1831z00,
		BGl_z62regularzd2treezd2ze3nodez81zz__rgc_treez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1800z00zz__rgc_treez00,
		BgL_bgl_string1800za700za7za7_1832za7, "i", 1);
	      DEFINE_STRING(BGl_string1803z00zz__rgc_treez00,
		BgL_bgl_string1803za700za7za7_1833za7, "if", 2);
	      DEFINE_STRING(BGl_string1806z00zz__rgc_treez00,
		BgL_bgl_string1806za700za7za7_1834za7, "<fx", 3);
	      DEFINE_STRING(BGl_string1809z00zz__rgc_treez00,
		BgL_bgl_string1809za700za7za7_1835za7, "begin", 5);
	      DEFINE_STRING(BGl_string1812z00zz__rgc_treez00,
		BgL_bgl_string1812za700za7za7_1836za7, "print", 5);
	      DEFINE_STRING(BGl_string1813z00zz__rgc_treez00,
		BgL_bgl_string1813za700za7za7_1837za7, ": ", 2);
	      DEFINE_STRING(BGl_string1816z00zz__rgc_treez00,
		BgL_bgl_string1816za700za7za7_1838za7, "reverse", 7);
	      DEFINE_STRING(BGl_string1819z00zz__rgc_treez00,
		BgL_bgl_string1819za700za7za7_1839za7, "rgcset->list", 12);
	      DEFINE_STRING(BGl_string1822z00zz__rgc_treez00,
		BgL_bgl_string1822za700za7za7_1840za7, "vector-ref", 10);
	      DEFINE_STRING(BGl_string1826z00zz__rgc_treez00,
		BgL_bgl_string1826za700za7za7_1841za7, "+fx", 3);
	      DEFINE_STRING(BGl_string1827z00zz__rgc_treez00,
		BgL_bgl_string1827za700za7za7_1842za7,
		"==================================================", 50);
	      DEFINE_STRING(BGl_string1829z00zz__rgc_treez00,
		BgL_bgl_string1829za700za7za7_1843za7, "blop", 4);
	      DEFINE_STRING(BGl_string1830z00zz__rgc_treez00,
		BgL_bgl_string1830za700za7za7_1844za7, "__rgc_tree", 10);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_resetzd2treez12zd2envz12zz__rgc_treez00,
		BgL_bgl_za762resetza7d2treeza71845za7,
		BGl_z62resetzd2treez12za2zz__rgc_treez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1763z00zz__rgc_treez00,
		BgL_bgl_string1763za700za7za7_1846za7, "epsilon", 7);
	      DEFINE_STRING(BGl_string1765z00zz__rgc_treez00,
		BgL_bgl_string1765za700za7za7_1847za7, "node", 4);
	      DEFINE_STRING(BGl_string1767z00zz__rgc_treez00,
		BgL_bgl_string1767za700za7za7_1848za7, "or", 2);
	      DEFINE_STRING(BGl_string1769z00zz__rgc_treez00,
		BgL_bgl_string1769za700za7za7_1849za7, "sequence", 8);
	      DEFINE_STRING(BGl_string1771z00zz__rgc_treez00,
		BgL_bgl_string1771za700za7za7_1850za7, "*", 1);
	      DEFINE_STRING(BGl_string1773z00zz__rgc_treez00,
		BgL_bgl_string1773za700za7za7_1851za7, "submatch", 8);
	      DEFINE_STRING(BGl_string1775z00zz__rgc_treez00,
		BgL_bgl_string1775za700za7za7_1852za7, "bol", 3);
	      DEFINE_STRING(BGl_string1776z00zz__rgc_treez00,
		BgL_bgl_string1776za700za7za7_1853za7, "RGC:Unknown function", 20);
	      DEFINE_STRING(BGl_string1777z00zz__rgc_treez00,
		BgL_bgl_string1777za700za7za7_1854za7, "RGC:Illegal tree", 16);
	      DEFINE_STRING(BGl_string1780z00zz__rgc_treez00,
		BgL_bgl_string1780za700za7za7_1855za7,
		"========= FOLLOWPOS ==============================", 50);
	      DEFINE_STRING(BGl_string1781z00zz__rgc_treez00,
		BgL_bgl_string1781za700za7za7_1856za7, "number of pos: ", 15);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc1778z00zz__rgc_treez00,
		BgL_bgl_za762or2za7d2za7e3node1857za7,
		BGl_z62or2zd2ze3nodez53zz__rgc_treez00);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc1779z00zz__rgc_treez00,
		BgL_bgl_za762sequence2za7d2za71858za7,
		BGl_z62sequence2zd2ze3nodez53zz__rgc_treez00);
	      DEFINE_STRING(BGl_string1784z00zz__rgc_treez00,
		BgL_bgl_string1784za700za7za7_1859za7, "let", 3);
	      DEFINE_STRING(BGl_string1788z00zz__rgc_treez00,
		BgL_bgl_string1788za700za7za7_1860za7, "sz", 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_printzd2nodezd2envz00zz__rgc_treez00,
		BgL_bgl_za762printza7d2nodeza71861za7,
		BGl_z62printzd2nodezb0zz__rgc_treez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1791z00zz__rgc_treez00,
		BgL_bgl_string1791za700za7za7_1862za7, "vector-length", 13);
	      DEFINE_STRING(BGl_string1793z00zz__rgc_treez00,
		BgL_bgl_string1793za700za7za7_1863za7, "fp", 2);
	      DEFINE_STRING(BGl_string1796z00zz__rgc_treez00,
		BgL_bgl_string1796za700za7za7_1864za7, "loop", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_printzd2followposzd2envz00zz__rgc_treez00,
		BgL_bgl_za762printza7d2follo1865z00,
		BGl_z62printzd2followposzb0zz__rgc_treez00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol1762z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1764z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1766z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1768z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1770z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1772z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1774z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1783z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1787z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1790z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1792z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1795z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1799z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_za2currentzd2positionza2zd2zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_za2submatchesza2z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_za2positionsza2z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_list1801z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_list1804z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_list1807z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_list1810z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_za2positionzd2numberza2zd2zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_list1814z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_list1817z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_list1820z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_list1823z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_list1824z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_list1782z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_list1785z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_list1786z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_list1789z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_za2followposza2z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_list1794z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_list1797z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_list1798z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1802z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1805z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1808z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1811z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1815z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1818z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1821z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1825z00zz__rgc_treez00));
		     ADD_ROOT((void *) (&BGl_symbol1828z00zz__rgc_treez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__rgc_treez00(long
		BgL_checksumz00_2314, char *BgL_fromz00_2315)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__rgc_treez00))
				{
					BGl_requirezd2initializa7ationz75zz__rgc_treez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__rgc_treez00();
					BGl_cnstzd2initzd2zz__rgc_treez00();
					BGl_importedzd2moduleszd2initz00zz__rgc_treez00();
					return BGl_toplevelzd2initzd2zz__rgc_treez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__rgc_treez00()
	{
		{	/* Rgc/rgctree.scm 14 */
			BGl_symbol1762z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1763z00zz__rgc_treez00);
			BGl_symbol1764z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1765z00zz__rgc_treez00);
			BGl_symbol1766z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1767z00zz__rgc_treez00);
			BGl_symbol1768z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1769z00zz__rgc_treez00);
			BGl_symbol1770z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1771z00zz__rgc_treez00);
			BGl_symbol1772z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1773z00zz__rgc_treez00);
			BGl_symbol1774z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1775z00zz__rgc_treez00);
			BGl_symbol1783z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1784z00zz__rgc_treez00);
			BGl_symbol1787z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1788z00zz__rgc_treez00);
			BGl_symbol1790z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1791z00zz__rgc_treez00);
			BGl_symbol1792z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1793z00zz__rgc_treez00);
			BGl_list1789z00zz__rgc_treez00 =
				MAKE_YOUNG_PAIR(BGl_symbol1790z00zz__rgc_treez00,
				MAKE_YOUNG_PAIR(BGl_symbol1792z00zz__rgc_treez00, BNIL));
			BGl_list1786z00zz__rgc_treez00 =
				MAKE_YOUNG_PAIR(BGl_symbol1787z00zz__rgc_treez00,
				MAKE_YOUNG_PAIR(BGl_list1789z00zz__rgc_treez00, BNIL));
			BGl_list1785z00zz__rgc_treez00 =
				MAKE_YOUNG_PAIR(BGl_list1786z00zz__rgc_treez00, BNIL);
			BGl_symbol1795z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1796z00zz__rgc_treez00);
			BGl_symbol1799z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1800z00zz__rgc_treez00);
			BGl_list1798z00zz__rgc_treez00 =
				MAKE_YOUNG_PAIR(BGl_symbol1799z00zz__rgc_treez00,
				MAKE_YOUNG_PAIR(BINT(((long) 0)), BNIL));
			BGl_list1797z00zz__rgc_treez00 =
				MAKE_YOUNG_PAIR(BGl_list1798z00zz__rgc_treez00, BNIL);
			BGl_symbol1802z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1803z00zz__rgc_treez00);
			BGl_symbol1805z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1806z00zz__rgc_treez00);
			BGl_list1804z00zz__rgc_treez00 =
				MAKE_YOUNG_PAIR(BGl_symbol1805z00zz__rgc_treez00,
				MAKE_YOUNG_PAIR(BGl_symbol1799z00zz__rgc_treez00,
					MAKE_YOUNG_PAIR(BGl_symbol1787z00zz__rgc_treez00, BNIL)));
			BGl_symbol1808z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1809z00zz__rgc_treez00);
			BGl_symbol1811z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1812z00zz__rgc_treez00);
			BGl_symbol1815z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1816z00zz__rgc_treez00);
			BGl_symbol1818z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1819z00zz__rgc_treez00);
			BGl_symbol1821z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1822z00zz__rgc_treez00);
			BGl_list1820z00zz__rgc_treez00 =
				MAKE_YOUNG_PAIR(BGl_symbol1821z00zz__rgc_treez00,
				MAKE_YOUNG_PAIR(BGl_symbol1792z00zz__rgc_treez00,
					MAKE_YOUNG_PAIR(BGl_symbol1799z00zz__rgc_treez00, BNIL)));
			BGl_list1817z00zz__rgc_treez00 =
				MAKE_YOUNG_PAIR(BGl_symbol1818z00zz__rgc_treez00,
				MAKE_YOUNG_PAIR(BGl_list1820z00zz__rgc_treez00, BNIL));
			BGl_list1814z00zz__rgc_treez00 =
				MAKE_YOUNG_PAIR(BGl_symbol1815z00zz__rgc_treez00,
				MAKE_YOUNG_PAIR(BGl_list1817z00zz__rgc_treez00, BNIL));
			BGl_list1810z00zz__rgc_treez00 =
				MAKE_YOUNG_PAIR(BGl_symbol1811z00zz__rgc_treez00,
				MAKE_YOUNG_PAIR(BGl_symbol1799z00zz__rgc_treez00,
					MAKE_YOUNG_PAIR(BGl_string1813z00zz__rgc_treez00,
						MAKE_YOUNG_PAIR(BGl_list1814z00zz__rgc_treez00, BNIL))));
			BGl_symbol1825z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1826z00zz__rgc_treez00);
			BGl_list1824z00zz__rgc_treez00 =
				MAKE_YOUNG_PAIR(BGl_symbol1825z00zz__rgc_treez00,
				MAKE_YOUNG_PAIR(BGl_symbol1799z00zz__rgc_treez00,
					MAKE_YOUNG_PAIR(BINT(((long) 1)), BNIL)));
			BGl_list1823z00zz__rgc_treez00 =
				MAKE_YOUNG_PAIR(BGl_symbol1795z00zz__rgc_treez00,
				MAKE_YOUNG_PAIR(BGl_list1824z00zz__rgc_treez00, BNIL));
			BGl_list1807z00zz__rgc_treez00 =
				MAKE_YOUNG_PAIR(BGl_symbol1808z00zz__rgc_treez00,
				MAKE_YOUNG_PAIR(BGl_list1810z00zz__rgc_treez00,
					MAKE_YOUNG_PAIR(BGl_list1823z00zz__rgc_treez00, BNIL)));
			BGl_list1801z00zz__rgc_treez00 =
				MAKE_YOUNG_PAIR(BGl_symbol1802z00zz__rgc_treez00,
				MAKE_YOUNG_PAIR(BGl_list1804z00zz__rgc_treez00,
					MAKE_YOUNG_PAIR(BGl_list1807z00zz__rgc_treez00, BNIL)));
			BGl_list1794z00zz__rgc_treez00 =
				MAKE_YOUNG_PAIR(BGl_symbol1783z00zz__rgc_treez00,
				MAKE_YOUNG_PAIR(BGl_symbol1795z00zz__rgc_treez00,
					MAKE_YOUNG_PAIR(BGl_list1797z00zz__rgc_treez00,
						MAKE_YOUNG_PAIR(BGl_list1801z00zz__rgc_treez00, BNIL))));
			BGl_list1782z00zz__rgc_treez00 =
				MAKE_YOUNG_PAIR(BGl_symbol1783z00zz__rgc_treez00,
				MAKE_YOUNG_PAIR(BGl_list1785z00zz__rgc_treez00,
					MAKE_YOUNG_PAIR(BGl_list1794z00zz__rgc_treez00, BNIL)));
			return (BGl_symbol1828z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string1829z00zz__rgc_treez00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__rgc_treez00()
	{
		{	/* Rgc/rgctree.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__rgc_treez00()
	{
		{	/* Rgc/rgctree.scm 14 */
			BGl_za2positionzd2numberza2zd2zz__rgc_treez00 = BUNSPEC;
			BGl_za2positionsza2z00zz__rgc_treez00 = BUNSPEC;
			BGl_za2submatchesza2z00zz__rgc_treez00 = BUNSPEC;
			BGl_za2currentzd2positionza2zd2zz__rgc_treez00 = BUNSPEC;
			return (BGl_za2followposza2z00zz__rgc_treez00 = BUNSPEC, BUNSPEC);
		}

	}



/* regular-tree->node */
	BGL_EXPORTED_DEF obj_t BGl_regularzd2treezd2ze3nodeze3zz__rgc_treez00(obj_t
		BgL_treez00_17)
	{
		{	/* Rgc/rgctree.scm 59 */
			BGl_za2positionzd2numberza2zd2zz__rgc_treez00 =
				BINT(BGl_regularzd2treezd2positionzd2numberzd2zz__rgc_treez00
				(BgL_treez00_17));
			BGl_initzd2positionsz12zc0zz__rgc_treez00();
			BGl_initzd2followposz12zc0zz__rgc_treez00();
			{	/* Rgc/rgctree.scm 67 */
				obj_t BgL_treez00_1170;

				BgL_treez00_1170 = BGl_treezd2ze3nodez31zz__rgc_treez00(BgL_treez00_17);
				{	/* Rgc/rgctree.scm 69 */
					obj_t BgL_val1_1087z00_1172;
					obj_t BgL_val2_1088z00_1173;
					obj_t BgL_val3_1089z00_1174;

					BgL_val1_1087z00_1172 = BGl_za2followposza2z00zz__rgc_treez00;
					BgL_val2_1088z00_1173 = BGl_za2positionsza2z00zz__rgc_treez00;
					BgL_val3_1089z00_1174 = BGl_za2submatchesza2z00zz__rgc_treez00;
					{	/* Rgc/rgctree.scm 69 */
						int BgL_res1671z00_1764;

						{	/* Rgc/rgctree.scm 69 */
							int BgL_tmpz00_2393;

							BgL_tmpz00_2393 = (int) (((long) 4));
							BgL_res1671z00_1764 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2393);
						} BgL_res1671z00_1764;
					}
					{	/* Rgc/rgctree.scm 69 */
						int BgL_tmpz00_2396;

						BgL_tmpz00_2396 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_2396, BgL_val1_1087z00_1172);
					}
					{	/* Rgc/rgctree.scm 69 */
						int BgL_tmpz00_2399;

						BgL_tmpz00_2399 = (int) (((long) 2));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_2399, BgL_val2_1088z00_1173);
					}
					{	/* Rgc/rgctree.scm 69 */
						int BgL_tmpz00_2402;

						BgL_tmpz00_2402 = (int) (((long) 3));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_2402, BgL_val3_1089z00_1174);
					}
					return BgL_treez00_1170;
				}
			}
		}

	}



/* &regular-tree->node */
	obj_t BGl_z62regularzd2treezd2ze3nodez81zz__rgc_treez00(obj_t BgL_envz00_2257,
		obj_t BgL_treez00_2258)
	{
		{	/* Rgc/rgctree.scm 59 */
			return BGl_regularzd2treezd2ze3nodeze3zz__rgc_treez00(BgL_treez00_2258);
		}

	}



/* regular-tree-position-number */
	long BGl_regularzd2treezd2positionzd2numberzd2zz__rgc_treez00(obj_t
		BgL_treez00_18)
	{
		{	/* Rgc/rgctree.scm 85 */
			return BGl_loopze71ze7zz__rgc_treez00(BgL_treez00_18, ((long) 0));
		}

	}



/* loop~1 */
	long BGl_loopze71ze7zz__rgc_treez00(obj_t BgL_treez00_1176,
		long BgL_numz00_1177)
	{
		{	/* Rgc/rgctree.scm 86 */
		BGl_loopze71ze7zz__rgc_treez00:
			if (NULLP(BgL_treez00_1176))
				{	/* Rgc/rgctree.scm 89 */
					return BgL_numz00_1177;
				}
			else
				{	/* Rgc/rgctree.scm 91 */
					bool_t BgL_test1868z00_2409;

					{	/* Rgc/rgctree.scm 91 */
						obj_t BgL_tmpz00_2410;

						BgL_tmpz00_2410 = CAR(((obj_t) BgL_treez00_1176));
						BgL_test1868z00_2409 = PAIRP(BgL_tmpz00_2410);
					}
					if (BgL_test1868z00_2409)
						{
							long BgL_numz00_2417;
							obj_t BgL_treez00_2414;

							BgL_treez00_2414 = CDR(((obj_t) BgL_treez00_1176));
							BgL_numz00_2417 =
								BGl_loopze71ze7zz__rgc_treez00(CAR(
									((obj_t) BgL_treez00_1176)), BgL_numz00_1177);
							BgL_numz00_1177 = BgL_numz00_2417;
							BgL_treez00_1176 = BgL_treez00_2414;
							goto BGl_loopze71ze7zz__rgc_treez00;
						}
					else
						{	/* Rgc/rgctree.scm 91 */
							if (INTEGERP(CAR(((obj_t) BgL_treez00_1176))))
								{
									long BgL_numz00_2428;
									obj_t BgL_treez00_2425;

									BgL_treez00_2425 = CDR(((obj_t) BgL_treez00_1176));
									BgL_numz00_2428 = (BgL_numz00_1177 + ((long) 1));
									BgL_numz00_1177 = BgL_numz00_2428;
									BgL_treez00_1176 = BgL_treez00_2425;
									goto BGl_loopze71ze7zz__rgc_treez00;
								}
							else
								{
									obj_t BgL_treez00_2430;

									BgL_treez00_2430 = CDR(((obj_t) BgL_treez00_1176));
									BgL_treez00_1176 = BgL_treez00_2430;
									goto BGl_loopze71ze7zz__rgc_treez00;
								}
						}
				}
		}

	}



/* init-positions! */
	obj_t BGl_initzd2positionsz12zc0zz__rgc_treez00()
	{
		{	/* Rgc/rgctree.scm 101 */
			BGl_za2currentzd2positionza2zd2zz__rgc_treez00 = BINT(((long) -1));
			BGl_za2positionsza2z00zz__rgc_treez00 =
				make_vector(
				(long) CINT(BGl_za2positionzd2numberza2zd2zz__rgc_treez00),
				BINT(((long) -1)));
			return (BGl_za2submatchesza2z00zz__rgc_treez00 =
				make_vector(
					(long) CINT(BGl_za2positionzd2numberza2zd2zz__rgc_treez00), BNIL),
				BUNSPEC);
		}

	}



/* tree->node */
	obj_t BGl_treezd2ze3nodez31zz__rgc_treez00(obj_t BgL_treez00_20)
	{
		{	/* Rgc/rgctree.scm 122 */
			if (INTEGERP(BgL_treez00_20))
				{	/* Rgc/rgctree.scm 124 */
					return BGl_integerzd2ze3nodez31zz__rgc_treez00(BgL_treez00_20);
				}
			else
				{	/* Rgc/rgctree.scm 124 */
					if ((BgL_treez00_20 == BGl_symbol1762z00zz__rgc_treez00))
						{	/* Rgc/rgctree.scm 154 */
							obj_t BgL_firstposz00_1781;
							obj_t BgL_lastposz00_1782;

							BgL_firstposz00_1781 =
								BGl_makezd2rgcsetzd2zz__rgc_setz00(
								(long) CINT(BGl_za2positionzd2numberza2zd2zz__rgc_treez00));
							BgL_lastposz00_1782 =
								BGl_makezd2rgcsetzd2zz__rgc_setz00(
								(long) CINT(BGl_za2positionzd2numberza2zd2zz__rgc_treez00));
							{	/* Rgc/rgctree.scm 156 */
								obj_t BgL_newz00_1783;

								BgL_newz00_1783 =
									create_struct(BGl_symbol1764z00zz__rgc_treez00,
									(int) (((long) 3)));
								{	/* Rgc/rgctree.scm 156 */
									int BgL_tmpz00_2450;

									BgL_tmpz00_2450 = (int) (((long) 2));
									STRUCT_SET(BgL_newz00_1783, BgL_tmpz00_2450, BTRUE);
								}
								{	/* Rgc/rgctree.scm 156 */
									int BgL_tmpz00_2453;

									BgL_tmpz00_2453 = (int) (((long) 1));
									STRUCT_SET(BgL_newz00_1783, BgL_tmpz00_2453,
										BgL_lastposz00_1782);
								}
								{	/* Rgc/rgctree.scm 156 */
									int BgL_tmpz00_2456;

									BgL_tmpz00_2456 = (int) (((long) 0));
									STRUCT_SET(BgL_newz00_1783, BgL_tmpz00_2456,
										BgL_firstposz00_1781);
								}
								return BgL_newz00_1783;
							}
						}
					else
						{	/* Rgc/rgctree.scm 126 */
							if (PAIRP(BgL_treez00_20))
								{	/* Rgc/rgctree.scm 131 */
									obj_t BgL_casezd2valuezd2_1196;

									BgL_casezd2valuezd2_1196 = CAR(BgL_treez00_20);
									if (
										(BgL_casezd2valuezd2_1196 ==
											BGl_symbol1766z00zz__rgc_treez00))
										{	/* Rgc/rgctree.scm 131 */
											return
												BGl_orzd2ze3nodez31zz__rgc_treez00(CDR(BgL_treez00_20));
										}
									else
										{	/* Rgc/rgctree.scm 131 */
											if (
												(BgL_casezd2valuezd2_1196 ==
													BGl_symbol1768z00zz__rgc_treez00))
												{	/* Rgc/rgctree.scm 131 */
													return
														BGl_sequencezd2ze3nodez31zz__rgc_treez00(CDR
														(BgL_treez00_20));
												}
											else
												{	/* Rgc/rgctree.scm 131 */
													if (
														(BgL_casezd2valuezd2_1196 ==
															BGl_symbol1770z00zz__rgc_treez00))
														{	/* Rgc/rgctree.scm 131 */
															return
																BGl_za2zd2ze3nodez93zz__rgc_treez00(CAR(CDR
																	(BgL_treez00_20)));
														}
													else
														{	/* Rgc/rgctree.scm 131 */
															if (
																(BgL_casezd2valuezd2_1196 ==
																	BGl_symbol1772z00zz__rgc_treez00))
																{	/* Rgc/rgctree.scm 131 */
																	return
																		BGl_submatchzd2ze3nodez31zz__rgc_treez00(CDR
																		(BgL_treez00_20));
																}
															else
																{	/* Rgc/rgctree.scm 131 */
																	if (
																		(BgL_casezd2valuezd2_1196 ==
																			BGl_symbol1774z00zz__rgc_treez00))
																		{	/* Rgc/rgctree.scm 136 */
																			obj_t BgL_arg1258z00_1206;

																			BgL_arg1258z00_1206 = CDR(BgL_treez00_20);
																			{	/* Rgc/rgctree.scm 242 */
																				obj_t BgL_nodez00_1807;

																				BgL_nodez00_1807 =
																					BGl_treezd2ze3nodez31zz__rgc_treez00
																					(BgL_arg1258z00_1206);
																				{	/* Rgc/rgctree.scm 242 */
																					obj_t BgL_firstposz00_1808;

																					BgL_firstposz00_1808 =
																						STRUCT_REF(
																						((obj_t) BgL_nodez00_1807),
																						(int) (((long) 0)));
																					{	/* Rgc/rgctree.scm 243 */
																						obj_t BgL_lastposz00_1809;

																						BgL_lastposz00_1809 =
																							STRUCT_REF(
																							((obj_t) BgL_nodez00_1807),
																							(int) (((long) 1)));
																						{	/* Rgc/rgctree.scm 244 */

																							return
																								PROCEDURE_ENTRY
																								(BgL_nodez00_1807)
																								(BgL_nodez00_1807,
																								BgL_firstposz00_1808,
																								BgL_lastposz00_1809, BFALSE,
																								BEOA);
																						}
																					}
																				}
																			}
																		}
																	else
																		{	/* Rgc/rgctree.scm 131 */
																			return
																				BGl_errorz00zz__errorz00(BFALSE,
																				BGl_string1776z00zz__rgc_treez00,
																				BgL_treez00_20);
																		}
																}
														}
												}
										}
								}
							else
								{	/* Rgc/rgctree.scm 128 */
									return
										BGl_errorz00zz__errorz00(BFALSE,
										BGl_string1777z00zz__rgc_treez00, BgL_treez00_20);
								}
						}
				}
		}

	}



/* integer->node */
	obj_t BGl_integerzd2ze3nodez31zz__rgc_treez00(obj_t BgL_treez00_21)
	{
		{	/* Rgc/rgctree.scm 142 */
			{	/* Rgc/rgctree.scm 143 */
				obj_t BgL_positionz00_1207;
				obj_t BgL_firstposz00_1208;
				obj_t BgL_lastposz00_1209;

				BGl_za2currentzd2positionza2zd2zz__rgc_treez00 =
					ADDFX(BGl_za2currentzd2positionza2zd2zz__rgc_treez00,
					BINT(((long) 1)));
				VECTOR_SET(BGl_za2positionsza2z00zz__rgc_treez00,
					(long) CINT(BGl_za2currentzd2positionza2zd2zz__rgc_treez00),
					BgL_treez00_21);
				BgL_positionz00_1207 = BGl_za2currentzd2positionza2zd2zz__rgc_treez00;
				BgL_firstposz00_1208 =
					BGl_makezd2rgcsetzd2zz__rgc_setz00(
					(long) CINT(BGl_za2positionzd2numberza2zd2zz__rgc_treez00));
				BgL_lastposz00_1209 =
					BGl_makezd2rgcsetzd2zz__rgc_setz00(
					(long) CINT(BGl_za2positionzd2numberza2zd2zz__rgc_treez00));
				BGl_rgcsetzd2addz12zc0zz__rgc_setz00(BgL_firstposz00_1208,
					(long) CINT(BgL_positionz00_1207));
				BGl_rgcsetzd2addz12zc0zz__rgc_setz00(BgL_lastposz00_1209,
					(long) CINT(BgL_positionz00_1207));
				{	/* Rgc/rgctree.scm 148 */
					obj_t BgL_newz00_1816;

					BgL_newz00_1816 =
						create_struct(BGl_symbol1764z00zz__rgc_treez00, (int) (((long) 3)));
					{	/* Rgc/rgctree.scm 148 */
						int BgL_tmpz00_2511;

						BgL_tmpz00_2511 = (int) (((long) 2));
						STRUCT_SET(BgL_newz00_1816, BgL_tmpz00_2511, BFALSE);
					}
					{	/* Rgc/rgctree.scm 148 */
						int BgL_tmpz00_2514;

						BgL_tmpz00_2514 = (int) (((long) 1));
						STRUCT_SET(BgL_newz00_1816, BgL_tmpz00_2514, BgL_lastposz00_1209);
					}
					{	/* Rgc/rgctree.scm 148 */
						int BgL_tmpz00_2517;

						BgL_tmpz00_2517 = (int) (((long) 0));
						STRUCT_SET(BgL_newz00_1816, BgL_tmpz00_2517, BgL_firstposz00_1208);
					}
					return BgL_newz00_1816;
				}
			}
		}

	}



/* binary->node */
	obj_t BGl_binaryzd2ze3nodez31zz__rgc_treez00(obj_t BgL_binzd2opzd2_23,
		obj_t BgL_tsz00_24)
	{
		{	/* Rgc/rgctree.scm 161 */
			if (NULLP(BgL_tsz00_24))
				{	/* Rgc/rgctree.scm 162 */
					return
						BGl_treezd2ze3nodez31zz__rgc_treez00
						(BGl_symbol1762z00zz__rgc_treez00);
				}
			else
				{	/* Rgc/rgctree.scm 162 */
					return
						BGl_loopze70ze7zz__rgc_treez00(BgL_binzd2opzd2_23, BgL_tsz00_24);
				}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__rgc_treez00(obj_t BgL_binzd2opzd2_2291,
		obj_t BgL_tsz00_1214)
	{
		{	/* Rgc/rgctree.scm 164 */
			if (NULLP(CDR(((obj_t) BgL_tsz00_1214))))
				{	/* Rgc/rgctree.scm 166 */
					obj_t BgL_arg1268z00_1218;

					BgL_arg1268z00_1218 = CAR(((obj_t) BgL_tsz00_1214));
					return BGl_treezd2ze3nodez31zz__rgc_treez00(BgL_arg1268z00_1218);
				}
			else
				{	/* Rgc/rgctree.scm 167 */
					obj_t BgL_arg1270z00_1219;
					obj_t BgL_arg1271z00_1220;

					{	/* Rgc/rgctree.scm 167 */
						obj_t BgL_arg1273z00_1221;

						BgL_arg1273z00_1221 = CAR(((obj_t) BgL_tsz00_1214));
						BgL_arg1270z00_1219 =
							BGl_treezd2ze3nodez31zz__rgc_treez00(BgL_arg1273z00_1221);
					}
					{	/* Rgc/rgctree.scm 167 */
						obj_t BgL_arg1274z00_1222;

						BgL_arg1274z00_1222 = CDR(((obj_t) BgL_tsz00_1214));
						BgL_arg1271z00_1220 =
							BGl_loopze70ze7zz__rgc_treez00(BgL_binzd2opzd2_2291,
							BgL_arg1274z00_1222);
					}
					return
						((obj_t(*)())PROCEDURE_L_ENTRY(BgL_binzd2opzd2_2291))
						(BgL_binzd2opzd2_2291, BgL_arg1270z00_1219, BgL_arg1271z00_1220);
				}
		}

	}



/* or->node */
	obj_t BGl_orzd2ze3nodez31zz__rgc_treez00(obj_t BgL_tsz00_25)
	{
		{	/* Rgc/rgctree.scm 172 */
			return
				BGl_binaryzd2ze3nodez31zz__rgc_treez00(BGl_proc1778z00zz__rgc_treez00,
				BgL_tsz00_25);
		}

	}



/* &or2->node */
	obj_t BGl_z62or2zd2ze3nodez53zz__rgc_treez00(obj_t BgL_envz00_2260,
		obj_t BgL_n1z00_2261, obj_t BgL_n2z00_2262)
	{
		{	/* Rgc/rgctree.scm 177 */
			{	/* Rgc/rgctree.scm 174 */
				obj_t BgL_firstposz00_2294;

				{	/* Rgc/rgctree.scm 174 */
					obj_t BgL_arg1281z00_2295;
					obj_t BgL_arg1282z00_2296;

					BgL_arg1281z00_2295 =
						STRUCT_REF(((obj_t) BgL_n1z00_2261), (int) (((long) 0)));
					BgL_arg1282z00_2296 =
						STRUCT_REF(((obj_t) BgL_n2z00_2262), (int) (((long) 0)));
					BgL_firstposz00_2294 =
						BGl_rgcsetzd2orzd2zz__rgc_setz00(BgL_arg1281z00_2295,
						BgL_arg1282z00_2296);
				}
				{	/* Rgc/rgctree.scm 174 */
					obj_t BgL_lastposz00_2297;

					{	/* Rgc/rgctree.scm 175 */
						obj_t BgL_arg1277z00_2298;
						obj_t BgL_arg1280z00_2299;

						BgL_arg1277z00_2298 =
							STRUCT_REF(((obj_t) BgL_n1z00_2261), (int) (((long) 1)));
						BgL_arg1280z00_2299 =
							STRUCT_REF(((obj_t) BgL_n2z00_2262), (int) (((long) 1)));
						BgL_lastposz00_2297 =
							BGl_rgcsetzd2orzd2zz__rgc_setz00(BgL_arg1277z00_2298,
							BgL_arg1280z00_2299);
					}
					{	/* Rgc/rgctree.scm 175 */
						obj_t BgL_nullablezf3zf3_2300;

						{	/* Rgc/rgctree.scm 176 */
							obj_t BgL__ortest_1039z00_2301;

							BgL__ortest_1039z00_2301 =
								STRUCT_REF(((obj_t) BgL_n1z00_2261), (int) (((long) 2)));
							if (CBOOL(BgL__ortest_1039z00_2301))
								{	/* Rgc/rgctree.scm 176 */
									BgL_nullablezf3zf3_2300 = BgL__ortest_1039z00_2301;
								}
							else
								{	/* Rgc/rgctree.scm 176 */
									BgL_nullablezf3zf3_2300 =
										STRUCT_REF(((obj_t) BgL_n2z00_2262), (int) (((long) 2)));
						}}
						{	/* Rgc/rgctree.scm 176 */

							{	/* Rgc/rgctree.scm 177 */
								obj_t BgL_newz00_2302;

								BgL_newz00_2302 =
									create_struct(BGl_symbol1764z00zz__rgc_treez00,
									(int) (((long) 3)));
								{	/* Rgc/rgctree.scm 177 */
									int BgL_tmpz00_2567;

									BgL_tmpz00_2567 = (int) (((long) 2));
									STRUCT_SET(BgL_newz00_2302, BgL_tmpz00_2567,
										BgL_nullablezf3zf3_2300);
								}
								{	/* Rgc/rgctree.scm 177 */
									int BgL_tmpz00_2570;

									BgL_tmpz00_2570 = (int) (((long) 1));
									STRUCT_SET(BgL_newz00_2302, BgL_tmpz00_2570,
										BgL_lastposz00_2297);
								}
								{	/* Rgc/rgctree.scm 177 */
									int BgL_tmpz00_2573;

									BgL_tmpz00_2573 = (int) (((long) 0));
									STRUCT_SET(BgL_newz00_2302, BgL_tmpz00_2573,
										BgL_firstposz00_2294);
								}
								return BgL_newz00_2302;
							}
						}
					}
				}
			}
		}

	}



/* sequence->node */
	obj_t BGl_sequencezd2ze3nodez31zz__rgc_treez00(obj_t BgL_tsz00_26)
	{
		{	/* Rgc/rgctree.scm 183 */
			return
				BGl_binaryzd2ze3nodez31zz__rgc_treez00(BGl_proc1779z00zz__rgc_treez00,
				BgL_tsz00_26);
		}

	}



/* &sequence2->node */
	obj_t BGl_z62sequence2zd2ze3nodez53zz__rgc_treez00(obj_t BgL_envz00_2265,
		obj_t BgL_n1z00_2266, obj_t BgL_n2z00_2267)
	{
		{	/* Rgc/rgctree.scm 197 */
			{	/* Rgc/rgctree.scm 185 */
				obj_t BgL_firstposz00_2303;
				obj_t BgL_lastposz00_2304;
				obj_t BgL_nullablezf3zf3_2305;

				if (CBOOL(STRUCT_REF(((obj_t) BgL_n1z00_2266), (int) (((long) 2)))))
					{	/* Rgc/rgctree.scm 186 */
						obj_t BgL_arg1289z00_2306;
						obj_t BgL_arg1290z00_2307;

						BgL_arg1289z00_2306 =
							STRUCT_REF(((obj_t) BgL_n1z00_2266), (int) (((long) 0)));
						BgL_arg1290z00_2307 =
							STRUCT_REF(((obj_t) BgL_n2z00_2267), (int) (((long) 0)));
						BgL_firstposz00_2303 =
							BGl_rgcsetzd2orzd2zz__rgc_setz00(BgL_arg1289z00_2306,
							BgL_arg1290z00_2307);
					}
				else
					{	/* Rgc/rgctree.scm 185 */
						BgL_firstposz00_2303 =
							STRUCT_REF(((obj_t) BgL_n1z00_2266), (int) (((long) 0)));
					}
				if (CBOOL(STRUCT_REF(((obj_t) BgL_n2z00_2267), (int) (((long) 2)))))
					{	/* Rgc/rgctree.scm 189 */
						obj_t BgL_arg1292z00_2308;
						obj_t BgL_arg1295z00_2309;

						BgL_arg1292z00_2308 =
							STRUCT_REF(((obj_t) BgL_n1z00_2266), (int) (((long) 1)));
						BgL_arg1295z00_2309 =
							STRUCT_REF(((obj_t) BgL_n2z00_2267), (int) (((long) 1)));
						BgL_lastposz00_2304 =
							BGl_rgcsetzd2orzd2zz__rgc_setz00(BgL_arg1292z00_2308,
							BgL_arg1295z00_2309);
					}
				else
					{	/* Rgc/rgctree.scm 188 */
						BgL_lastposz00_2304 =
							STRUCT_REF(((obj_t) BgL_n2z00_2267), (int) (((long) 1)));
					}
				if (CBOOL(STRUCT_REF(((obj_t) BgL_n2z00_2267), (int) (((long) 2)))))
					{	/* Rgc/rgctree.scm 191 */
						BgL_nullablezf3zf3_2305 =
							STRUCT_REF(((obj_t) BgL_n1z00_2266), (int) (((long) 2)));
					}
				else
					{	/* Rgc/rgctree.scm 191 */
						BgL_nullablezf3zf3_2305 = BFALSE;
					}
				{	/* Rgc/rgctree.scm 193 */
					obj_t BgL_arg1285z00_2310;

					BgL_arg1285z00_2310 =
						STRUCT_REF(((obj_t) BgL_n1z00_2266), (int) (((long) 1)));
					{	/* Rgc/rgctree.scm 194 */
						obj_t BgL_zc3z04anonymousza31286ze3z87_2311;

						BgL_zc3z04anonymousza31286ze3z87_2311 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31286ze3ze5zz__rgc_treez00,
							(int) (((long) 1)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31286ze3z87_2311,
							(int) (((long) 0)), BgL_n2z00_2267);
						BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00
							(BgL_zc3z04anonymousza31286ze3z87_2311, BgL_arg1285z00_2310);
				}}
				{	/* Rgc/rgctree.scm 197 */
					obj_t BgL_newz00_2312;

					BgL_newz00_2312 =
						create_struct(BGl_symbol1764z00zz__rgc_treez00, (int) (((long) 3)));
					{	/* Rgc/rgctree.scm 197 */
						int BgL_tmpz00_2626;

						BgL_tmpz00_2626 = (int) (((long) 2));
						STRUCT_SET(BgL_newz00_2312, BgL_tmpz00_2626,
							BgL_nullablezf3zf3_2305);
					}
					{	/* Rgc/rgctree.scm 197 */
						int BgL_tmpz00_2629;

						BgL_tmpz00_2629 = (int) (((long) 1));
						STRUCT_SET(BgL_newz00_2312, BgL_tmpz00_2629, BgL_lastposz00_2304);
					}
					{	/* Rgc/rgctree.scm 197 */
						int BgL_tmpz00_2632;

						BgL_tmpz00_2632 = (int) (((long) 0));
						STRUCT_SET(BgL_newz00_2312, BgL_tmpz00_2632, BgL_firstposz00_2303);
					}
					return BgL_newz00_2312;
				}
			}
		}

	}



/* &<@anonymous:1286> */
	obj_t BGl_z62zc3z04anonymousza31286ze3ze5zz__rgc_treez00(obj_t
		BgL_envz00_2268, obj_t BgL_iz00_2270)
	{
		{	/* Rgc/rgctree.scm 193 */
			{	/* Rgc/rgctree.scm 194 */
				obj_t BgL_n2z00_2269;

				BgL_n2z00_2269 = PROCEDURE_REF(BgL_envz00_2268, (int) (((long) 0)));
				{	/* Rgc/rgctree.scm 194 */
					obj_t BgL_arg1287z00_2313;

					BgL_arg1287z00_2313 =
						STRUCT_REF(((obj_t) BgL_n2z00_2269), (int) (((long) 0)));
					return
						BGl_rgcsetzd2orz12zc0zz__rgc_setz00(VECTOR_REF
						(BGl_za2followposza2z00zz__rgc_treez00, (long) CINT(BgL_iz00_2270)),
						BgL_arg1287z00_2313);
		}}}

	}



/* *->node */
	obj_t BGl_za2zd2ze3nodez93zz__rgc_treez00(obj_t BgL_exprz00_27)
	{
		{	/* Rgc/rgctree.scm 203 */
			{	/* Rgc/rgctree.scm 204 */
				obj_t BgL_subzd2nodezd2_1259;

				BgL_subzd2nodezd2_1259 =
					BGl_treezd2ze3nodez31zz__rgc_treez00(BgL_exprz00_27);
				{	/* Rgc/rgctree.scm 204 */
					obj_t BgL_firstposz00_1260;

					BgL_firstposz00_1260 =
						STRUCT_REF(((obj_t) BgL_subzd2nodezd2_1259), (int) (((long) 0)));
					{	/* Rgc/rgctree.scm 205 */
						obj_t BgL_lastposz00_1261;

						BgL_lastposz00_1261 =
							STRUCT_REF(((obj_t) BgL_subzd2nodezd2_1259), (int) (((long) 1)));
						{	/* Rgc/rgctree.scm 206 */

							{	/* Rgc/rgctree.scm 209 */
								obj_t BgL_zc3z04anonymousza31297ze3z87_2271;

								BgL_zc3z04anonymousza31297ze3z87_2271 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza31297ze3ze5zz__rgc_treez00,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_zc3z04anonymousza31297ze3z87_2271,
									(int) (((long) 0)), BgL_firstposz00_1260);
								BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00
									(BgL_zc3z04anonymousza31297ze3z87_2271, BgL_lastposz00_1261);
							}
							{	/* Rgc/rgctree.scm 212 */
								obj_t BgL_newz00_1867;

								BgL_newz00_1867 =
									create_struct(BGl_symbol1764z00zz__rgc_treez00,
									(int) (((long) 3)));
								{	/* Rgc/rgctree.scm 212 */
									int BgL_tmpz00_2658;

									BgL_tmpz00_2658 = (int) (((long) 2));
									STRUCT_SET(BgL_newz00_1867, BgL_tmpz00_2658, BTRUE);
								}
								{	/* Rgc/rgctree.scm 212 */
									int BgL_tmpz00_2661;

									BgL_tmpz00_2661 = (int) (((long) 1));
									STRUCT_SET(BgL_newz00_1867, BgL_tmpz00_2661,
										BgL_lastposz00_1261);
								}
								{	/* Rgc/rgctree.scm 212 */
									int BgL_tmpz00_2664;

									BgL_tmpz00_2664 = (int) (((long) 0));
									STRUCT_SET(BgL_newz00_1867, BgL_tmpz00_2664,
										BgL_firstposz00_1260);
								}
								return BgL_newz00_1867;
							}
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1297> */
	obj_t BGl_z62zc3z04anonymousza31297ze3ze5zz__rgc_treez00(obj_t
		BgL_envz00_2272, obj_t BgL_iz00_2274)
	{
		{	/* Rgc/rgctree.scm 208 */
			{	/* Rgc/rgctree.scm 268 */
				obj_t BgL_firstposz00_2273;

				BgL_firstposz00_2273 =
					PROCEDURE_REF(BgL_envz00_2272, (int) (((long) 0)));
				return
					BGl_rgcsetzd2orz12zc0zz__rgc_setz00(VECTOR_REF
					(BGl_za2followposza2z00zz__rgc_treez00, (long) CINT(BgL_iz00_2274)),
					BgL_firstposz00_2273);
		}}

	}



/* submatch->node */
	obj_t BGl_submatchzd2ze3nodez31zz__rgc_treez00(obj_t BgL_exprz00_28)
	{
		{	/* Rgc/rgctree.scm 217 */
			if (PAIRP(BgL_exprz00_28))
				{	/* Rgc/rgctree.scm 218 */
					obj_t BgL_cdrzd2111zd2_1273;

					BgL_cdrzd2111zd2_1273 = CDR(BgL_exprz00_28);
					if (PAIRP(BgL_cdrzd2111zd2_1273))
						{	/* Rgc/rgctree.scm 218 */
							obj_t BgL_cdrzd2116zd2_1275;

							BgL_cdrzd2116zd2_1275 = CDR(BgL_cdrzd2111zd2_1273);
							if (PAIRP(BgL_cdrzd2116zd2_1275))
								{	/* Rgc/rgctree.scm 218 */
									if (NULLP(CDR(BgL_cdrzd2116zd2_1275)))
										{	/* Rgc/rgctree.scm 218 */
											obj_t BgL_arg1303z00_1279;
											obj_t BgL_arg1304z00_1280;
											obj_t BgL_arg1306z00_1281;

											BgL_arg1303z00_1279 = CAR(BgL_exprz00_28);
											BgL_arg1304z00_1280 = CAR(BgL_cdrzd2111zd2_1273);
											BgL_arg1306z00_1281 = CAR(BgL_cdrzd2116zd2_1275);
											{	/* Rgc/rgctree.scm 220 */
												obj_t BgL_nodez00_1892;

												BgL_nodez00_1892 =
													BGl_treezd2ze3nodez31zz__rgc_treez00
													(BgL_arg1306z00_1281);
												{	/* Rgc/rgctree.scm 220 */
													obj_t BgL_firstposz00_1893;

													BgL_firstposz00_1893 =
														STRUCT_REF(
														((obj_t) BgL_nodez00_1892), (int) (((long) 0)));
													{	/* Rgc/rgctree.scm 221 */
														obj_t BgL_lastposz00_1894;

														BgL_lastposz00_1894 =
															STRUCT_REF(
															((obj_t) BgL_nodez00_1892), (int) (((long) 1)));
														{	/* Rgc/rgctree.scm 222 */
															obj_t BgL_nullablezf3zf3_1895;

															BgL_nullablezf3zf3_1895 =
																STRUCT_REF(
																((obj_t) BgL_nodez00_1892), (int) (((long) 2)));
															{	/* Rgc/rgctree.scm 223 */

																{	/* Rgc/rgctree.scm 229 */
																	obj_t BgL_zc3z04anonymousza31309ze3z87_2276;

																	BgL_zc3z04anonymousza31309ze3z87_2276 =
																		MAKE_FX_PROCEDURE
																		(BGl_z62zc3z04anonymousza31309ze3ze5zz__rgc_treez00,
																		(int) (((long) 1)), (int) (((long) 3)));
																	PROCEDURE_SET
																		(BgL_zc3z04anonymousza31309ze3z87_2276,
																		(int) (((long) 0)),
																		BgL_nullablezf3zf3_1895);
																	PROCEDURE_SET
																		(BgL_zc3z04anonymousza31309ze3z87_2276,
																		(int) (((long) 1)), BgL_arg1303z00_1279);
																	PROCEDURE_SET
																		(BgL_zc3z04anonymousza31309ze3z87_2276,
																		(int) (((long) 2)), BgL_arg1304z00_1280);
																	BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00
																		(BgL_zc3z04anonymousza31309ze3z87_2276,
																		BgL_firstposz00_1893);
																}
																{	/* Rgc/rgctree.scm 232 */
																	obj_t BgL_zc3z04anonymousza31311ze3z87_2275;

																	BgL_zc3z04anonymousza31311ze3z87_2275 =
																		MAKE_FX_PROCEDURE
																		(BGl_z62zc3z04anonymousza31311ze3ze5zz__rgc_treez00,
																		(int) (((long) 1)), (int) (((long) 2)));
																	PROCEDURE_SET
																		(BgL_zc3z04anonymousza31311ze3z87_2275,
																		(int) (((long) 0)), BgL_arg1303z00_1279);
																	PROCEDURE_SET
																		(BgL_zc3z04anonymousza31311ze3z87_2275,
																		(int) (((long) 1)), BgL_arg1304z00_1280);
																	BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00
																		(BgL_zc3z04anonymousza31311ze3z87_2275,
																		BgL_lastposz00_1894);
																}
																return BgL_nodez00_1892;
															}
														}
													}
												}
											}
										}
									else
										{	/* Rgc/rgctree.scm 218 */
											return
												BGl_errorz00zz__errorz00(BFALSE,
												BGl_string1776z00zz__rgc_treez00, BgL_exprz00_28);
										}
								}
							else
								{	/* Rgc/rgctree.scm 218 */
									return
										BGl_errorz00zz__errorz00(BFALSE,
										BGl_string1776z00zz__rgc_treez00, BgL_exprz00_28);
								}
						}
					else
						{	/* Rgc/rgctree.scm 218 */
							return
								BGl_errorz00zz__errorz00(BFALSE,
								BGl_string1776z00zz__rgc_treez00, BgL_exprz00_28);
						}
				}
			else
				{	/* Rgc/rgctree.scm 218 */
					return
						BGl_errorz00zz__errorz00(BFALSE, BGl_string1776z00zz__rgc_treez00,
						BgL_exprz00_28);
				}
		}

	}



/* &<@anonymous:1311> */
	obj_t BGl_z62zc3z04anonymousza31311ze3ze5zz__rgc_treez00(obj_t
		BgL_envz00_2277, obj_t BgL_iz00_2280)
	{
		{	/* Rgc/rgctree.scm 231 */
			return
				BGl_submatchzd2stopzd2addz12z12zz__rgc_treez00(BgL_iz00_2280,
				PROCEDURE_REF(BgL_envz00_2277,
					(int) (((long) 0))),
				PROCEDURE_REF(BgL_envz00_2277, (int) (((long) 1))));
		}

	}



/* &<@anonymous:1309> */
	obj_t BGl_z62zc3z04anonymousza31309ze3ze5zz__rgc_treez00(obj_t
		BgL_envz00_2281, obj_t BgL_iz00_2285)
	{
		{	/* Rgc/rgctree.scm 228 */
			return
				BGl_submatchzd2startzd2addz12z12zz__rgc_treez00(BgL_iz00_2285,
				PROCEDURE_REF(BgL_envz00_2281,
					(int) (((long) 0))),
				PROCEDURE_REF(BgL_envz00_2281,
					(int) (((long) 1))),
				PROCEDURE_REF(BgL_envz00_2281, (int) (((long) 2))));
		}

	}



/* init-followpos! */
	obj_t BGl_initzd2followposz12zc0zz__rgc_treez00()
	{
		{	/* Rgc/rgctree.scm 250 */
			{	/* Rgc/rgctree.scm 251 */
				obj_t BgL_followposz00_1298;

				BgL_followposz00_1298 =
					make_vector(
					(long) CINT(BGl_za2positionzd2numberza2zd2zz__rgc_treez00), BUNSPEC);
				{
					long BgL_iz00_1917;

					BgL_iz00_1917 = ((long) 0);
				BgL_loopz00_1916:
					if (
						((long) CINT(BGl_za2positionzd2numberza2zd2zz__rgc_treez00) ==
							BgL_iz00_1917))
						{	/* Rgc/rgctree.scm 253 */
							return (BGl_za2followposza2z00zz__rgc_treez00 =
								BgL_followposz00_1298, BUNSPEC);
						}
					else
						{	/* Rgc/rgctree.scm 253 */
							VECTOR_SET(BgL_followposz00_1298, BgL_iz00_1917,
								BGl_makezd2rgcsetzd2zz__rgc_setz00(
									(long) CINT(BGl_za2positionzd2numberza2zd2zz__rgc_treez00)));
							{
								long BgL_iz00_2738;

								BgL_iz00_2738 = (BgL_iz00_1917 + ((long) 1));
								BgL_iz00_1917 = BgL_iz00_2738;
								goto BgL_loopz00_1916;
							}
						}
				}
			}
		}

	}



/* submatch-start-add! */
	obj_t BGl_submatchzd2startzd2addz12z12zz__rgc_treez00(obj_t
		BgL_positionz00_32, obj_t BgL_nullablezf3zf3_33, obj_t BgL_matchz00_34,
		obj_t BgL_submatchz00_35)
	{
		{	/* Rgc/rgctree.scm 273 */
			{	/* Rgc/rgctree.scm 274 */
				obj_t BgL_cellz00_1308;

				BgL_cellz00_1308 =
					VECTOR_REF(BGl_za2submatchesza2z00zz__rgc_treez00,
					(long) CINT(BgL_positionz00_32));
				if (PAIRP(BgL_cellz00_1308))
					{	/* Rgc/rgctree.scm 279 */
						obj_t BgL_arg1319z00_1310;

						{	/* Rgc/rgctree.scm 279 */
							obj_t BgL_arg1322z00_1311;
							obj_t BgL_arg1324z00_1312;

							{	/* Rgc/rgctree.scm 279 */
								obj_t BgL_list1325z00_1313;

								{	/* Rgc/rgctree.scm 279 */
									obj_t BgL_arg1326z00_1314;

									{	/* Rgc/rgctree.scm 279 */
										obj_t BgL_arg1327z00_1315;

										BgL_arg1327z00_1315 =
											MAKE_YOUNG_PAIR(BgL_submatchz00_35, BNIL);
										BgL_arg1326z00_1314 =
											MAKE_YOUNG_PAIR(BgL_matchz00_34, BgL_arg1327z00_1315);
									}
									BgL_list1325z00_1313 =
										MAKE_YOUNG_PAIR(BgL_nullablezf3zf3_33, BgL_arg1326z00_1314);
								}
								BgL_arg1322z00_1311 = BgL_list1325z00_1313;
							}
							BgL_arg1324z00_1312 = CAR(BgL_cellz00_1308);
							BgL_arg1319z00_1310 =
								MAKE_YOUNG_PAIR(BgL_arg1322z00_1311, BgL_arg1324z00_1312);
						}
						return SET_CAR(BgL_cellz00_1308, BgL_arg1319z00_1310);
					}
				else
					{	/* Rgc/rgctree.scm 278 */
						obj_t BgL_arg1328z00_1316;

						{	/* Rgc/rgctree.scm 278 */
							obj_t BgL_arg1329z00_1317;

							{	/* Rgc/rgctree.scm 278 */
								obj_t BgL_arg1330z00_1318;

								{	/* Rgc/rgctree.scm 278 */
									obj_t BgL_list1332z00_1320;

									{	/* Rgc/rgctree.scm 278 */
										obj_t BgL_arg1333z00_1321;

										{	/* Rgc/rgctree.scm 278 */
											obj_t BgL_arg1334z00_1322;

											BgL_arg1334z00_1322 =
												MAKE_YOUNG_PAIR(BgL_submatchz00_35, BNIL);
											BgL_arg1333z00_1321 =
												MAKE_YOUNG_PAIR(BgL_matchz00_34, BgL_arg1334z00_1322);
										}
										BgL_list1332z00_1320 =
											MAKE_YOUNG_PAIR(BgL_nullablezf3zf3_33,
											BgL_arg1333z00_1321);
									}
									BgL_arg1330z00_1318 = BgL_list1332z00_1320;
								}
								{	/* Rgc/rgctree.scm 278 */
									obj_t BgL_list1331z00_1319;

									BgL_list1331z00_1319 =
										MAKE_YOUNG_PAIR(BgL_arg1330z00_1318, BNIL);
									BgL_arg1329z00_1317 = BgL_list1331z00_1319;
								}
							}
							BgL_arg1328z00_1316 = MAKE_YOUNG_PAIR(BgL_arg1329z00_1317, BNIL);
						}
						return
							VECTOR_SET(BGl_za2submatchesza2z00zz__rgc_treez00,
							(long) CINT(BgL_positionz00_32), BgL_arg1328z00_1316);
		}}}

	}



/* submatch-stop-add! */
	obj_t BGl_submatchzd2stopzd2addz12z12zz__rgc_treez00(obj_t BgL_positionz00_36,
		obj_t BgL_matchz00_37, obj_t BgL_submatchz00_38)
	{
		{	/* Rgc/rgctree.scm 284 */
			{	/* Rgc/rgctree.scm 285 */
				obj_t BgL_cellz00_1323;

				BgL_cellz00_1323 =
					VECTOR_REF(BGl_za2submatchesza2z00zz__rgc_treez00,
					(long) CINT(BgL_positionz00_36));
				if (PAIRP(BgL_cellz00_1323))
					{	/* Rgc/rgctree.scm 290 */
						obj_t BgL_arg1337z00_1325;

						{	/* Rgc/rgctree.scm 290 */
							obj_t BgL_arg1338z00_1326;
							obj_t BgL_arg1339z00_1327;

							BgL_arg1338z00_1326 =
								MAKE_YOUNG_PAIR(BgL_matchz00_37, BgL_submatchz00_38);
							BgL_arg1339z00_1327 = CDR(BgL_cellz00_1323);
							BgL_arg1337z00_1325 =
								MAKE_YOUNG_PAIR(BgL_arg1338z00_1326, BgL_arg1339z00_1327);
						}
						return SET_CDR(BgL_cellz00_1323, BgL_arg1337z00_1325);
					}
				else
					{	/* Rgc/rgctree.scm 289 */
						obj_t BgL_arg1340z00_1328;

						{	/* Rgc/rgctree.scm 289 */
							obj_t BgL_arg1341z00_1329;

							{	/* Rgc/rgctree.scm 289 */
								obj_t BgL_arg1342z00_1330;

								BgL_arg1342z00_1330 =
									MAKE_YOUNG_PAIR(BgL_matchz00_37, BgL_submatchz00_38);
								{	/* Rgc/rgctree.scm 289 */
									obj_t BgL_list1343z00_1331;

									BgL_list1343z00_1331 =
										MAKE_YOUNG_PAIR(BgL_arg1342z00_1330, BNIL);
									BgL_arg1341z00_1329 = BgL_list1343z00_1331;
								}
							}
							BgL_arg1340z00_1328 = MAKE_YOUNG_PAIR(BNIL, BgL_arg1341z00_1329);
						}
						return
							VECTOR_SET(BGl_za2submatchesza2z00zz__rgc_treez00,
							(long) CINT(BgL_positionz00_36), BgL_arg1340z00_1328);
		}}}

	}



/* reset-tree! */
	BGL_EXPORTED_DEF obj_t BGl_resetzd2treez12zc0zz__rgc_treez00()
	{
		{	/* Rgc/rgctree.scm 295 */
			BGl_za2followposza2z00zz__rgc_treez00 = BUNSPEC;
			BGl_za2positionsza2z00zz__rgc_treez00 = BUNSPEC;
			BGl_za2submatchesza2z00zz__rgc_treez00 = BUNSPEC;
			return (BGl_za2positionzd2numberza2zd2zz__rgc_treez00 = BUNSPEC, BUNSPEC);
		}

	}



/* &reset-tree! */
	obj_t BGl_z62resetzd2treez12za2zz__rgc_treez00(obj_t BgL_envz00_2286)
	{
		{	/* Rgc/rgctree.scm 295 */
			return BGl_resetzd2treez12zc0zz__rgc_treez00();
		}

	}



/* print-followpos */
	BGL_EXPORTED_DEF obj_t BGl_printzd2followposzd2zz__rgc_treez00(obj_t
		BgL_fpz00_39)
	{
		{	/* Rgc/rgctree.scm 304 */
			{	/* Rgc/rgctree.scm 305 */
				obj_t BgL_port1090z00_1332;

				{	/* Rgc/rgctree.scm 305 */
					obj_t BgL_res1700z00_1950;

					{	/* Rgc/rgctree.scm 305 */
						obj_t BgL_tmpz00_2771;

						BgL_tmpz00_2771 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1700z00_1950 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2771);
					}
					BgL_port1090z00_1332 = BgL_res1700z00_1950;
				}
				bgl_display_string(BGl_string1780z00zz__rgc_treez00,
					BgL_port1090z00_1332);
				bgl_display_char(((unsigned char) 10), BgL_port1090z00_1332);
			}
			{	/* Rgc/rgctree.scm 306 */
				obj_t BgL_port1091z00_1333;

				{	/* Rgc/rgctree.scm 306 */
					obj_t BgL_res1701z00_1955;

					{	/* Rgc/rgctree.scm 306 */
						obj_t BgL_tmpz00_2776;

						BgL_tmpz00_2776 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1701z00_1955 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2776);
					}
					BgL_port1091z00_1333 = BgL_res1701z00_1955;
				}
				bgl_display_string(BGl_string1781z00zz__rgc_treez00,
					BgL_port1091z00_1333);
				bgl_display_obj(BINT(VECTOR_LENGTH(((obj_t) BgL_fpz00_39))),
					BgL_port1091z00_1333);
				bgl_display_char(((unsigned char) 10), BgL_port1091z00_1333);
			} BGl_list1782z00zz__rgc_treez00;
			{	/* Rgc/rgctree.scm 313 */
				obj_t BgL_port1092z00_1335;

				{	/* Rgc/rgctree.scm 313 */
					obj_t BgL_res1702z00_1961;

					{	/* Rgc/rgctree.scm 313 */
						obj_t BgL_tmpz00_2785;

						BgL_tmpz00_2785 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1702z00_1961 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2785);
					}
					BgL_port1092z00_1335 = BgL_res1702z00_1961;
				}
				bgl_display_string(BGl_string1827z00zz__rgc_treez00,
					BgL_port1092z00_1335);
				return bgl_display_char(((unsigned char) 10), BgL_port1092z00_1335);
		}}

	}



/* &print-followpos */
	obj_t BGl_z62printzd2followposzb0zz__rgc_treez00(obj_t BgL_envz00_2287,
		obj_t BgL_fpz00_2288)
	{
		{	/* Rgc/rgctree.scm 304 */
			return BGl_printzd2followposzd2zz__rgc_treez00(BgL_fpz00_2288);
		}

	}



/* print-node */
	BGL_EXPORTED_DEF obj_t BGl_printzd2nodezd2zz__rgc_treez00(obj_t
		BgL_nodez00_40)
	{
		{	/* Rgc/rgctree.scm 318 */
			return BGl_symbol1828z00zz__rgc_treez00;
		}

	}



/* &print-node */
	obj_t BGl_z62printzd2nodezb0zz__rgc_treez00(obj_t BgL_envz00_2289,
		obj_t BgL_nodez00_2290)
	{
		{	/* Rgc/rgctree.scm 318 */
			return BGl_printzd2nodezd2zz__rgc_treez00(BgL_nodez00_2290);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__rgc_treez00()
	{
		{	/* Rgc/rgctree.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__rgc_treez00()
	{
		{	/* Rgc/rgctree.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__rgc_treez00()
	{
		{	/* Rgc/rgctree.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__rgc_treez00()
	{
		{	/* Rgc/rgctree.scm 14 */
			BGl_modulezd2initializa7ationz75zz__rgc_setz00(((long) 225075481),
				BSTRING_TO_STRING(BGl_string1830z00zz__rgc_treez00));
			BGl_modulezd2initializa7ationz75zz__rgc_configz00(((long) 428274706),
				BSTRING_TO_STRING(BGl_string1830z00zz__rgc_treez00));
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1830z00zz__rgc_treez00));
		}

	}

#ifdef __cplusplus
}
#endif
