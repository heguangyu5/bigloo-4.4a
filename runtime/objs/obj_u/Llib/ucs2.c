/*===========================================================================*/
/*   (Llib/ucs2.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/ucs2.scm -indent -o objs/obj_u/Llib/ucs2.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62ucs2ze3zf3z72zz__ucs2z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2cizc3zf3ze2zz__ucs2z00(ucs2_t, ucs2_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zc3zd3zf3ze3zz__ucs2z00(ucs2_t, ucs2_t);
	static obj_t BGl_z62ucs2zd2upcasezb0zz__ucs2z00(obj_t, obj_t);
	static obj_t BGl_z62ucs2zc3zd3zf3z81zz__ucs2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62ucs2zd2lowerzd2casezf3z91zz__ucs2z00(obj_t, obj_t);
	static obj_t BGl_z62ucs2zd2ze3charz53zz__ucs2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2cizd3zf3zf2zz__ucs2z00(ucs2_t, ucs2_t);
	static obj_t BGl_z62integerzd2ze3ucs2zd2urz81zz__ucs2z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__ucs2z00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2cize3zf3zc2zz__ucs2z00(ucs2_t, ucs2_t);
	BGL_EXPORTED_DECL ucs2_t BGl_integerzd2ze3ucs2z31zz__ucs2z00(int);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__ucs2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zc3zf3z30zz__ucs2z00(ucs2_t, ucs2_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zf3zf3zz__ucs2z00(obj_t);
	static obj_t BGl_z62ucs2zd2alphabeticzf3z43zz__ucs2z00(obj_t, obj_t);
	extern bool_t ucs2_digitp(ucs2_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2ze3zd3zf3zc3zz__ucs2z00(ucs2_t, ucs2_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd3zf3z20zz__ucs2z00(ucs2_t, ucs2_t);
	BGL_EXPORTED_DECL int BGl_ucs2zd2ze3integerz31zz__ucs2z00(ucs2_t);
	static obj_t BGl_z62ucs2ze3zd3zf3za1zz__ucs2z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2numericzf3z21zz__ucs2z00(ucs2_t);
	BGL_EXPORTED_DECL ucs2_t BGl_ucs2zd2downcasezd2zz__ucs2z00(ucs2_t);
	BGL_EXPORTED_DECL ucs2_t BGl_charzd2ze3ucs2z31zz__ucs2z00(unsigned char);
	BGL_EXPORTED_DECL bool_t BGl_ucs2ze3zf3z10zz__ucs2z00(ucs2_t, ucs2_t);
	static obj_t BGl_cnstzd2initzd2zz__ucs2z00();
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2upperzd2casezf3zf3zz__ucs2z00(ucs2_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2cizc3zd3zf3z31zz__ucs2z00(ucs2_t, ucs2_t);
	static obj_t BGl_gczd2rootszd2initz00zz__ucs2z00();
	extern ucs2_t ucs2_tolower(ucs2_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__ucs2z00();
	static obj_t BGl_z62integerzd2ze3ucs2z53zz__ucs2z00(obj_t, obj_t);
	static obj_t BGl_z62charzd2ze3ucs2z53zz__ucs2z00(obj_t, obj_t);
	static obj_t BGl_z62ucs2zf3z91zz__ucs2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL ucs2_t BGl_ucs2zd2upcasezd2zz__ucs2z00(ucs2_t);
	static obj_t BGl_z62ucs2zd2cizc3zd3zf3z53zz__ucs2z00(obj_t, obj_t, obj_t);
	extern bool_t ucs2_upperp(ucs2_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2whitespacezf3z21zz__ucs2z00(ucs2_t);
	static obj_t BGl_z62ucs2zd2ze3integerz53zz__ucs2z00(obj_t, obj_t);
	static obj_t BGl_z62ucs2zd2numericzf3z43zz__ucs2z00(obj_t, obj_t);
	static obj_t BGl_z62ucs2zd2downcasezb0zz__ucs2z00(obj_t, obj_t);
	extern bool_t ucs2_definedp(int);
	extern obj_t bstring_to_symbol(obj_t);
	extern ucs2_t ucs2_toupper(ucs2_t);
	extern bool_t ucs2_whitespacep(ucs2_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2cize3zd3zf3z11zz__ucs2z00(ucs2_t, ucs2_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2lowerzd2casezf3zf3zz__ucs2z00(ucs2_t);
	static obj_t BGl_symbol1548z00zz__ucs2z00 = BUNSPEC;
	BGL_EXPORTED_DECL ucs2_t BGl_integerzd2ze3ucs2zd2urze3zz__ucs2z00(int);
	static obj_t BGl_symbol1558z00zz__ucs2z00 = BUNSPEC;
	static obj_t BGl_z62ucs2zd2upperzd2casezf3z91zz__ucs2z00(obj_t, obj_t);
	extern bool_t ucs2_lowerp(ucs2_t);
	static obj_t BGl_z62ucs2zd2cize3zd3zf3z73zz__ucs2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62ucs2zd2cizc3zf3z80zz__ucs2z00(obj_t, obj_t, obj_t);
	extern bool_t ucs2_letterp(ucs2_t);
	static obj_t BGl_z62ucs2zd2cizd3zf3z90zz__ucs2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62ucs2zc3zf3z52zz__ucs2z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2alphabeticzf3z21zz__ucs2z00(ucs2_t);
	static obj_t BGl_z62ucs2zd2cize3zf3za0zz__ucs2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62ucs2zd3zf3z42zz__ucs2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62ucs2zd2whitespacezf3z43zz__ucs2z00(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL unsigned char BGl_ucs2zd2ze3charz31zz__ucs2z00(ucs2_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2whitespacezf3zd2envzf3zz__ucs2z00,
		BgL_bgl_za762ucs2za7d2whites1563z00,
		BGl_z62ucs2zd2whitespacezf3z43zz__ucs2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_integerzd2ze3ucs2zd2urzd2envz31zz__ucs2z00,
		BgL_bgl_za762integerza7d2za7e31564za7,
		BGl_z62integerzd2ze3ucs2zd2urz81zz__ucs2z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zc3zf3zd2envze2zz__ucs2z00,
		BgL_bgl_za762ucs2za7c3za7f3za7521565z00, BGl_z62ucs2zc3zf3z52zz__ucs2z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zf3zd2envz21zz__ucs2z00,
		BgL_bgl_za762ucs2za7f3za791za7za7_1566za7, BGl_z62ucs2zf3z91zz__ucs2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2upcasezd2envz00zz__ucs2z00,
		BgL_bgl_za762ucs2za7d2upcase1567z00, BGl_z62ucs2zd2upcasezb0zz__ucs2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2cizc3zf3zd2envz30zz__ucs2z00,
		BgL_bgl_za762ucs2za7d2ciza7c3za71568z00,
		BGl_z62ucs2zd2cizc3zf3z80zz__ucs2z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zc3zd3zf3zd2envz31zz__ucs2z00,
		BgL_bgl_za762ucs2za7c3za7d3za7f31569z00, BGl_z62ucs2zc3zd3zf3z81zz__ucs2z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2numericzf3zd2envzf3zz__ucs2z00,
		BgL_bgl_za762ucs2za7d2numeri1570z00, BGl_z62ucs2zd2numericzf3z43zz__ucs2z00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2alphabeticzf3zd2envzf3zz__ucs2z00,
		BgL_bgl_za762ucs2za7d2alphab1571z00,
		BGl_z62ucs2zd2alphabeticzf3z43zz__ucs2z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1529z00zz__ucs2z00,
		BgL_bgl_string1529za700za7za7_1572za7, "/tmp/4.4a/runtime/Llib/ucs2.scm",
		31);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2lowerzd2casezf3zd2envz21zz__ucs2z00,
		BgL_bgl_za762ucs2za7d2lowerza71573za7,
		BGl_z62ucs2zd2lowerzd2casezf3z91zz__ucs2z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1530z00zz__ucs2z00,
		BgL_bgl_string1530za700za7za7_1574za7, "&ucs2=?", 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2ze3charzd2envze3zz__ucs2z00,
		BgL_bgl_za762ucs2za7d2za7e3cha1575za7, BGl_z62ucs2zd2ze3charz53zz__ucs2z00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1531z00zz__ucs2z00,
		BgL_bgl_string1531za700za7za7_1576za7, "bucs2", 5);
	      DEFINE_STRING(BGl_string1532z00zz__ucs2z00,
		BgL_bgl_string1532za700za7za7_1577za7, "&ucs2<?", 7);
	      DEFINE_STRING(BGl_string1533z00zz__ucs2z00,
		BgL_bgl_string1533za700za7za7_1578za7, "&ucs2>?", 7);
	      DEFINE_STRING(BGl_string1534z00zz__ucs2z00,
		BgL_bgl_string1534za700za7za7_1579za7, "&ucs2<=?", 8);
	      DEFINE_STRING(BGl_string1535z00zz__ucs2z00,
		BgL_bgl_string1535za700za7za7_1580za7, "&ucs2>=?", 8);
	      DEFINE_STRING(BGl_string1536z00zz__ucs2z00,
		BgL_bgl_string1536za700za7za7_1581za7, "&ucs2-ci=?", 10);
	      DEFINE_STRING(BGl_string1537z00zz__ucs2z00,
		BgL_bgl_string1537za700za7za7_1582za7, "&ucs2-ci<?", 10);
	      DEFINE_STRING(BGl_string1538z00zz__ucs2z00,
		BgL_bgl_string1538za700za7za7_1583za7, "&ucs2-ci>?", 10);
	      DEFINE_STRING(BGl_string1539z00zz__ucs2z00,
		BgL_bgl_string1539za700za7za7_1584za7, "&ucs2-ci<=?", 11);
	      DEFINE_STRING(BGl_string1540z00zz__ucs2z00,
		BgL_bgl_string1540za700za7za7_1585za7, "&ucs2-ci>=?", 11);
	      DEFINE_STRING(BGl_string1541z00zz__ucs2z00,
		BgL_bgl_string1541za700za7za7_1586za7, "&ucs2-alphabetic?", 17);
	      DEFINE_STRING(BGl_string1542z00zz__ucs2z00,
		BgL_bgl_string1542za700za7za7_1587za7, "&ucs2-numeric?", 14);
	      DEFINE_STRING(BGl_string1543z00zz__ucs2z00,
		BgL_bgl_string1543za700za7za7_1588za7, "&ucs2-whitespace?", 17);
	      DEFINE_STRING(BGl_string1544z00zz__ucs2z00,
		BgL_bgl_string1544za700za7za7_1589za7, "&ucs2-upper-case?", 17);
	      DEFINE_STRING(BGl_string1545z00zz__ucs2z00,
		BgL_bgl_string1545za700za7za7_1590za7, "&ucs2-lower-case?", 17);
	      DEFINE_STRING(BGl_string1546z00zz__ucs2z00,
		BgL_bgl_string1546za700za7za7_1591za7, "&ucs2-upcase", 12);
	      DEFINE_STRING(BGl_string1547z00zz__ucs2z00,
		BgL_bgl_string1547za700za7za7_1592za7, "&ucs2-downcase", 14);
	      DEFINE_STRING(BGl_string1549z00zz__ucs2z00,
		BgL_bgl_string1549za700za7za7_1593za7, "integer->ucs2", 13);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd3zf3zd2envzf2zz__ucs2z00,
		BgL_bgl_za762ucs2za7d3za7f3za7421594z00, BGl_z62ucs2zd3zf3z42zz__ucs2z00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1550z00zz__ucs2z00,
		BgL_bgl_string1550za700za7za7_1595za7, "Undefined UCS-2 character", 25);
	      DEFINE_STRING(BGl_string1551z00zz__ucs2z00,
		BgL_bgl_string1551za700za7za7_1596za7, "integer out of range or ", 24);
	      DEFINE_STRING(BGl_string1552z00zz__ucs2z00,
		BgL_bgl_string1552za700za7za7_1597za7, "&integer->ucs2", 14);
	      DEFINE_STRING(BGl_string1553z00zz__ucs2z00,
		BgL_bgl_string1553za700za7za7_1598za7, "bint", 4);
	      DEFINE_STRING(BGl_string1554z00zz__ucs2z00,
		BgL_bgl_string1554za700za7za7_1599za7, "&integer->ucs2-ur", 17);
	      DEFINE_STRING(BGl_string1555z00zz__ucs2z00,
		BgL_bgl_string1555za700za7za7_1600za7, "&ucs2->integer", 14);
	      DEFINE_STRING(BGl_string1556z00zz__ucs2z00,
		BgL_bgl_string1556za700za7za7_1601za7, "&char->ucs2", 11);
	      DEFINE_STRING(BGl_string1557z00zz__ucs2z00,
		BgL_bgl_string1557za700za7za7_1602za7, "bchar", 5);
	      DEFINE_STRING(BGl_string1559z00zz__ucs2z00,
		BgL_bgl_string1559za700za7za7_1603za7, "ucs2->char", 10);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2cizd3zf3zd2envz20zz__ucs2z00,
		BgL_bgl_za762ucs2za7d2ciza7d3za71604z00,
		BGl_z62ucs2zd2cizd3zf3z90zz__ucs2z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1560z00zz__ucs2z00,
		BgL_bgl_string1560za700za7za7_1605za7,
		"UCS-2 character out of ISO-LATIN-1 range", 40);
	      DEFINE_STRING(BGl_string1561z00zz__ucs2z00,
		BgL_bgl_string1561za700za7za7_1606za7, "&ucs2->char", 11);
	      DEFINE_STRING(BGl_string1562z00zz__ucs2z00,
		BgL_bgl_string1562za700za7za7_1607za7, "__ucs2", 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2cize3zd3zf3zd2envzc3zz__ucs2z00,
		BgL_bgl_za762ucs2za7d2ciza7e3za71608z00,
		BGl_z62ucs2zd2cize3zd3zf3z73zz__ucs2z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_integerzd2ze3ucs2zd2envze3zz__ucs2z00,
		BgL_bgl_za762integerza7d2za7e31609za7,
		BGl_z62integerzd2ze3ucs2z53zz__ucs2z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2ze3integerzd2envze3zz__ucs2z00,
		BgL_bgl_za762ucs2za7d2za7e3int1610za7,
		BGl_z62ucs2zd2ze3integerz53zz__ucs2z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2downcasezd2envz00zz__ucs2z00,
		BgL_bgl_za762ucs2za7d2downca1611z00, BGl_z62ucs2zd2downcasezb0zz__ucs2z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_charzd2ze3ucs2zd2envze3zz__ucs2z00,
		BgL_bgl_za762charza7d2za7e3ucs1612za7, BGl_z62charzd2ze3ucs2z53zz__ucs2z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2ze3zf3zd2envzc2zz__ucs2z00,
		BgL_bgl_za762ucs2za7e3za7f3za7721613z00, BGl_z62ucs2ze3zf3z72zz__ucs2z00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2upperzd2casezf3zd2envz21zz__ucs2z00,
		BgL_bgl_za762ucs2za7d2upperza71614za7,
		BGl_z62ucs2zd2upperzd2casezf3z91zz__ucs2z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2cizc3zd3zf3zd2envze3zz__ucs2z00,
		BgL_bgl_za762ucs2za7d2ciza7c3za71615z00,
		BGl_z62ucs2zd2cizc3zd3zf3z53zz__ucs2z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2cize3zf3zd2envz10zz__ucs2z00,
		BgL_bgl_za762ucs2za7d2ciza7e3za71616z00,
		BGl_z62ucs2zd2cize3zf3za0zz__ucs2z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2ze3zd3zf3zd2envz11zz__ucs2z00,
		BgL_bgl_za762ucs2za7e3za7d3za7f31617z00, BGl_z62ucs2ze3zd3zf3za1zz__ucs2z00,
		0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__ucs2z00));
		     ADD_ROOT((void *) (&BGl_symbol1548z00zz__ucs2z00));
		     ADD_ROOT((void *) (&BGl_symbol1558z00zz__ucs2z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__ucs2z00(long
		BgL_checksumz00_1275, char *BgL_fromz00_1276)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__ucs2z00))
				{
					BGl_requirezd2initializa7ationz75zz__ucs2z00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__ucs2z00();
					BGl_cnstzd2initzd2zz__ucs2z00();
					return BGl_importedzd2moduleszd2initz00zz__ucs2z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__ucs2z00()
	{
		{	/* Llib/ucs2.scm 14 */
			BGl_symbol1548z00zz__ucs2z00 =
				bstring_to_symbol(BGl_string1549z00zz__ucs2z00);
			return (BGl_symbol1558z00zz__ucs2z00 =
				bstring_to_symbol(BGl_string1559z00zz__ucs2z00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__ucs2z00()
	{
		{	/* Llib/ucs2.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* ucs2? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zf3zf3zz__ucs2z00(obj_t BgL_objz00_3)
	{
		{	/* Llib/ucs2.scm 146 */
			return UCS2P(BgL_objz00_3);
		}

	}



/* &ucs2? */
	obj_t BGl_z62ucs2zf3z91zz__ucs2z00(obj_t BgL_envz00_1155,
		obj_t BgL_objz00_1156)
	{
		{	/* Llib/ucs2.scm 146 */
			return BBOOL(BGl_ucs2zf3zf3zz__ucs2z00(BgL_objz00_1156));
		}

	}



/* ucs2=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd3zf3z20zz__ucs2z00(ucs2_t BgL_ucs2az00_4,
		ucs2_t BgL_ucs2bz00_5)
	{
		{	/* Llib/ucs2.scm 152 */
			return (BgL_ucs2az00_4 == BgL_ucs2bz00_5);
		}

	}



/* &ucs2=? */
	obj_t BGl_z62ucs2zd3zf3z42zz__ucs2z00(obj_t BgL_envz00_1157,
		obj_t BgL_ucs2az00_1158, obj_t BgL_ucs2bz00_1159)
	{
		{	/* Llib/ucs2.scm 152 */
			{	/* Llib/ucs2.scm 153 */
				bool_t BgL_tmpz00_1290;

				{	/* Llib/ucs2.scm 153 */
					ucs2_t BgL_auxz00_1300;
					ucs2_t BgL_auxz00_1291;

					{	/* Llib/ucs2.scm 153 */
						obj_t BgL_tmpz00_1301;

						if (UCS2P(BgL_ucs2bz00_1159))
							{	/* Llib/ucs2.scm 153 */
								BgL_tmpz00_1301 = BgL_ucs2bz00_1159;
							}
						else
							{
								obj_t BgL_auxz00_1304;

								BgL_auxz00_1304 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 6361)), BGl_string1530z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2bz00_1159);
								FAILURE(BgL_auxz00_1304, BFALSE, BFALSE);
							}
						BgL_auxz00_1300 = CUCS2(BgL_tmpz00_1301);
					}
					{	/* Llib/ucs2.scm 153 */
						obj_t BgL_tmpz00_1292;

						if (UCS2P(BgL_ucs2az00_1158))
							{	/* Llib/ucs2.scm 153 */
								BgL_tmpz00_1292 = BgL_ucs2az00_1158;
							}
						else
							{
								obj_t BgL_auxz00_1295;

								BgL_auxz00_1295 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 6361)), BGl_string1530z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2az00_1158);
								FAILURE(BgL_auxz00_1295, BFALSE, BFALSE);
							}
						BgL_auxz00_1291 = CUCS2(BgL_tmpz00_1292);
					}
					BgL_tmpz00_1290 =
						BGl_ucs2zd3zf3z20zz__ucs2z00(BgL_auxz00_1291, BgL_auxz00_1300);
				}
				return BBOOL(BgL_tmpz00_1290);
			}
		}

	}



/* ucs2<? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zc3zf3z30zz__ucs2z00(ucs2_t BgL_ucs2az00_6,
		ucs2_t BgL_ucs2bz00_7)
	{
		{	/* Llib/ucs2.scm 158 */
			return (BgL_ucs2az00_6 < BgL_ucs2bz00_7);
		}

	}



/* &ucs2<? */
	obj_t BGl_z62ucs2zc3zf3z52zz__ucs2z00(obj_t BgL_envz00_1160,
		obj_t BgL_ucs2az00_1161, obj_t BgL_ucs2bz00_1162)
	{
		{	/* Llib/ucs2.scm 158 */
			{	/* Llib/ucs2.scm 159 */
				bool_t BgL_tmpz00_1312;

				{	/* Llib/ucs2.scm 159 */
					ucs2_t BgL_auxz00_1322;
					ucs2_t BgL_auxz00_1313;

					{	/* Llib/ucs2.scm 159 */
						obj_t BgL_tmpz00_1323;

						if (UCS2P(BgL_ucs2bz00_1162))
							{	/* Llib/ucs2.scm 159 */
								BgL_tmpz00_1323 = BgL_ucs2bz00_1162;
							}
						else
							{
								obj_t BgL_auxz00_1326;

								BgL_auxz00_1326 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 6647)), BGl_string1532z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2bz00_1162);
								FAILURE(BgL_auxz00_1326, BFALSE, BFALSE);
							}
						BgL_auxz00_1322 = CUCS2(BgL_tmpz00_1323);
					}
					{	/* Llib/ucs2.scm 159 */
						obj_t BgL_tmpz00_1314;

						if (UCS2P(BgL_ucs2az00_1161))
							{	/* Llib/ucs2.scm 159 */
								BgL_tmpz00_1314 = BgL_ucs2az00_1161;
							}
						else
							{
								obj_t BgL_auxz00_1317;

								BgL_auxz00_1317 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 6647)), BGl_string1532z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2az00_1161);
								FAILURE(BgL_auxz00_1317, BFALSE, BFALSE);
							}
						BgL_auxz00_1313 = CUCS2(BgL_tmpz00_1314);
					}
					BgL_tmpz00_1312 =
						BGl_ucs2zc3zf3z30zz__ucs2z00(BgL_auxz00_1313, BgL_auxz00_1322);
				}
				return BBOOL(BgL_tmpz00_1312);
			}
		}

	}



/* ucs2>? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2ze3zf3z10zz__ucs2z00(ucs2_t BgL_ucs2az00_8,
		ucs2_t BgL_ucs2bz00_9)
	{
		{	/* Llib/ucs2.scm 164 */
			return (BgL_ucs2az00_8 > BgL_ucs2bz00_9);
		}

	}



/* &ucs2>? */
	obj_t BGl_z62ucs2ze3zf3z72zz__ucs2z00(obj_t BgL_envz00_1163,
		obj_t BgL_ucs2az00_1164, obj_t BgL_ucs2bz00_1165)
	{
		{	/* Llib/ucs2.scm 164 */
			{	/* Llib/ucs2.scm 165 */
				bool_t BgL_tmpz00_1334;

				{	/* Llib/ucs2.scm 165 */
					ucs2_t BgL_auxz00_1344;
					ucs2_t BgL_auxz00_1335;

					{	/* Llib/ucs2.scm 165 */
						obj_t BgL_tmpz00_1345;

						if (UCS2P(BgL_ucs2bz00_1165))
							{	/* Llib/ucs2.scm 165 */
								BgL_tmpz00_1345 = BgL_ucs2bz00_1165;
							}
						else
							{
								obj_t BgL_auxz00_1348;

								BgL_auxz00_1348 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 6934)), BGl_string1533z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2bz00_1165);
								FAILURE(BgL_auxz00_1348, BFALSE, BFALSE);
							}
						BgL_auxz00_1344 = CUCS2(BgL_tmpz00_1345);
					}
					{	/* Llib/ucs2.scm 165 */
						obj_t BgL_tmpz00_1336;

						if (UCS2P(BgL_ucs2az00_1164))
							{	/* Llib/ucs2.scm 165 */
								BgL_tmpz00_1336 = BgL_ucs2az00_1164;
							}
						else
							{
								obj_t BgL_auxz00_1339;

								BgL_auxz00_1339 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 6934)), BGl_string1533z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2az00_1164);
								FAILURE(BgL_auxz00_1339, BFALSE, BFALSE);
							}
						BgL_auxz00_1335 = CUCS2(BgL_tmpz00_1336);
					}
					BgL_tmpz00_1334 =
						BGl_ucs2ze3zf3z10zz__ucs2z00(BgL_auxz00_1335, BgL_auxz00_1344);
				}
				return BBOOL(BgL_tmpz00_1334);
			}
		}

	}



/* ucs2<=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zc3zd3zf3ze3zz__ucs2z00(ucs2_t
		BgL_ucs2az00_10, ucs2_t BgL_ucs2bz00_11)
	{
		{	/* Llib/ucs2.scm 170 */
			return (BgL_ucs2az00_10 <= BgL_ucs2bz00_11);
		}

	}



/* &ucs2<=? */
	obj_t BGl_z62ucs2zc3zd3zf3z81zz__ucs2z00(obj_t BgL_envz00_1166,
		obj_t BgL_ucs2az00_1167, obj_t BgL_ucs2bz00_1168)
	{
		{	/* Llib/ucs2.scm 170 */
			{	/* Llib/ucs2.scm 171 */
				bool_t BgL_tmpz00_1356;

				{	/* Llib/ucs2.scm 171 */
					ucs2_t BgL_auxz00_1366;
					ucs2_t BgL_auxz00_1357;

					{	/* Llib/ucs2.scm 171 */
						obj_t BgL_tmpz00_1367;

						if (UCS2P(BgL_ucs2bz00_1168))
							{	/* Llib/ucs2.scm 171 */
								BgL_tmpz00_1367 = BgL_ucs2bz00_1168;
							}
						else
							{
								obj_t BgL_auxz00_1370;

								BgL_auxz00_1370 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 7221)), BGl_string1534z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2bz00_1168);
								FAILURE(BgL_auxz00_1370, BFALSE, BFALSE);
							}
						BgL_auxz00_1366 = CUCS2(BgL_tmpz00_1367);
					}
					{	/* Llib/ucs2.scm 171 */
						obj_t BgL_tmpz00_1358;

						if (UCS2P(BgL_ucs2az00_1167))
							{	/* Llib/ucs2.scm 171 */
								BgL_tmpz00_1358 = BgL_ucs2az00_1167;
							}
						else
							{
								obj_t BgL_auxz00_1361;

								BgL_auxz00_1361 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 7221)), BGl_string1534z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2az00_1167);
								FAILURE(BgL_auxz00_1361, BFALSE, BFALSE);
							}
						BgL_auxz00_1357 = CUCS2(BgL_tmpz00_1358);
					}
					BgL_tmpz00_1356 =
						BGl_ucs2zc3zd3zf3ze3zz__ucs2z00(BgL_auxz00_1357, BgL_auxz00_1366);
				}
				return BBOOL(BgL_tmpz00_1356);
			}
		}

	}



/* ucs2>=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2ze3zd3zf3zc3zz__ucs2z00(ucs2_t
		BgL_ucs2az00_12, ucs2_t BgL_ucs2bz00_13)
	{
		{	/* Llib/ucs2.scm 176 */
			return (BgL_ucs2az00_12 >= BgL_ucs2bz00_13);
		}

	}



/* &ucs2>=? */
	obj_t BGl_z62ucs2ze3zd3zf3za1zz__ucs2z00(obj_t BgL_envz00_1169,
		obj_t BgL_ucs2az00_1170, obj_t BgL_ucs2bz00_1171)
	{
		{	/* Llib/ucs2.scm 176 */
			{	/* Llib/ucs2.scm 177 */
				bool_t BgL_tmpz00_1378;

				{	/* Llib/ucs2.scm 177 */
					ucs2_t BgL_auxz00_1388;
					ucs2_t BgL_auxz00_1379;

					{	/* Llib/ucs2.scm 177 */
						obj_t BgL_tmpz00_1389;

						if (UCS2P(BgL_ucs2bz00_1171))
							{	/* Llib/ucs2.scm 177 */
								BgL_tmpz00_1389 = BgL_ucs2bz00_1171;
							}
						else
							{
								obj_t BgL_auxz00_1392;

								BgL_auxz00_1392 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 7510)), BGl_string1535z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2bz00_1171);
								FAILURE(BgL_auxz00_1392, BFALSE, BFALSE);
							}
						BgL_auxz00_1388 = CUCS2(BgL_tmpz00_1389);
					}
					{	/* Llib/ucs2.scm 177 */
						obj_t BgL_tmpz00_1380;

						if (UCS2P(BgL_ucs2az00_1170))
							{	/* Llib/ucs2.scm 177 */
								BgL_tmpz00_1380 = BgL_ucs2az00_1170;
							}
						else
							{
								obj_t BgL_auxz00_1383;

								BgL_auxz00_1383 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 7510)), BGl_string1535z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2az00_1170);
								FAILURE(BgL_auxz00_1383, BFALSE, BFALSE);
							}
						BgL_auxz00_1379 = CUCS2(BgL_tmpz00_1380);
					}
					BgL_tmpz00_1378 =
						BGl_ucs2ze3zd3zf3zc3zz__ucs2z00(BgL_auxz00_1379, BgL_auxz00_1388);
				}
				return BBOOL(BgL_tmpz00_1378);
			}
		}

	}



/* ucs2-ci=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2cizd3zf3zf2zz__ucs2z00(ucs2_t
		BgL_ucs2az00_14, ucs2_t BgL_ucs2bz00_15)
	{
		{	/* Llib/ucs2.scm 182 */
			return (ucs2_toupper(BgL_ucs2az00_14) == ucs2_toupper(BgL_ucs2bz00_15));
		}

	}



/* &ucs2-ci=? */
	obj_t BGl_z62ucs2zd2cizd3zf3z90zz__ucs2z00(obj_t BgL_envz00_1172,
		obj_t BgL_ucs2az00_1173, obj_t BgL_ucs2bz00_1174)
	{
		{	/* Llib/ucs2.scm 182 */
			{	/* Llib/ucs2.scm 183 */
				bool_t BgL_tmpz00_1402;

				{	/* Llib/ucs2.scm 183 */
					ucs2_t BgL_auxz00_1412;
					ucs2_t BgL_auxz00_1403;

					{	/* Llib/ucs2.scm 183 */
						obj_t BgL_tmpz00_1413;

						if (UCS2P(BgL_ucs2bz00_1174))
							{	/* Llib/ucs2.scm 183 */
								BgL_tmpz00_1413 = BgL_ucs2bz00_1174;
							}
						else
							{
								obj_t BgL_auxz00_1416;

								BgL_auxz00_1416 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 7808)), BGl_string1536z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2bz00_1174);
								FAILURE(BgL_auxz00_1416, BFALSE, BFALSE);
							}
						BgL_auxz00_1412 = CUCS2(BgL_tmpz00_1413);
					}
					{	/* Llib/ucs2.scm 183 */
						obj_t BgL_tmpz00_1404;

						if (UCS2P(BgL_ucs2az00_1173))
							{	/* Llib/ucs2.scm 183 */
								BgL_tmpz00_1404 = BgL_ucs2az00_1173;
							}
						else
							{
								obj_t BgL_auxz00_1407;

								BgL_auxz00_1407 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 7808)), BGl_string1536z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2az00_1173);
								FAILURE(BgL_auxz00_1407, BFALSE, BFALSE);
							}
						BgL_auxz00_1403 = CUCS2(BgL_tmpz00_1404);
					}
					BgL_tmpz00_1402 =
						BGl_ucs2zd2cizd3zf3zf2zz__ucs2z00(BgL_auxz00_1403, BgL_auxz00_1412);
				}
				return BBOOL(BgL_tmpz00_1402);
			}
		}

	}



/* ucs2-ci<? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2cizc3zf3ze2zz__ucs2z00(ucs2_t
		BgL_ucs2az00_16, ucs2_t BgL_ucs2bz00_17)
	{
		{	/* Llib/ucs2.scm 188 */
			return (ucs2_toupper(BgL_ucs2az00_16) < ucs2_toupper(BgL_ucs2bz00_17));
		}

	}



/* &ucs2-ci<? */
	obj_t BGl_z62ucs2zd2cizc3zf3z80zz__ucs2z00(obj_t BgL_envz00_1175,
		obj_t BgL_ucs2az00_1176, obj_t BgL_ucs2bz00_1177)
	{
		{	/* Llib/ucs2.scm 188 */
			{	/* Llib/ucs2.scm 189 */
				bool_t BgL_tmpz00_1426;

				{	/* Llib/ucs2.scm 189 */
					ucs2_t BgL_auxz00_1436;
					ucs2_t BgL_auxz00_1427;

					{	/* Llib/ucs2.scm 189 */
						obj_t BgL_tmpz00_1437;

						if (UCS2P(BgL_ucs2bz00_1177))
							{	/* Llib/ucs2.scm 189 */
								BgL_tmpz00_1437 = BgL_ucs2bz00_1177;
							}
						else
							{
								obj_t BgL_auxz00_1440;

								BgL_auxz00_1440 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 8123)), BGl_string1537z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2bz00_1177);
								FAILURE(BgL_auxz00_1440, BFALSE, BFALSE);
							}
						BgL_auxz00_1436 = CUCS2(BgL_tmpz00_1437);
					}
					{	/* Llib/ucs2.scm 189 */
						obj_t BgL_tmpz00_1428;

						if (UCS2P(BgL_ucs2az00_1176))
							{	/* Llib/ucs2.scm 189 */
								BgL_tmpz00_1428 = BgL_ucs2az00_1176;
							}
						else
							{
								obj_t BgL_auxz00_1431;

								BgL_auxz00_1431 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 8123)), BGl_string1537z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2az00_1176);
								FAILURE(BgL_auxz00_1431, BFALSE, BFALSE);
							}
						BgL_auxz00_1427 = CUCS2(BgL_tmpz00_1428);
					}
					BgL_tmpz00_1426 =
						BGl_ucs2zd2cizc3zf3ze2zz__ucs2z00(BgL_auxz00_1427, BgL_auxz00_1436);
				}
				return BBOOL(BgL_tmpz00_1426);
			}
		}

	}



/* ucs2-ci>? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2cize3zf3zc2zz__ucs2z00(ucs2_t
		BgL_ucs2az00_18, ucs2_t BgL_ucs2bz00_19)
	{
		{	/* Llib/ucs2.scm 194 */
			return (ucs2_toupper(BgL_ucs2az00_18) > ucs2_toupper(BgL_ucs2bz00_19));
		}

	}



/* &ucs2-ci>? */
	obj_t BGl_z62ucs2zd2cize3zf3za0zz__ucs2z00(obj_t BgL_envz00_1178,
		obj_t BgL_ucs2az00_1179, obj_t BgL_ucs2bz00_1180)
	{
		{	/* Llib/ucs2.scm 194 */
			{	/* Llib/ucs2.scm 195 */
				bool_t BgL_tmpz00_1450;

				{	/* Llib/ucs2.scm 195 */
					ucs2_t BgL_auxz00_1460;
					ucs2_t BgL_auxz00_1451;

					{	/* Llib/ucs2.scm 195 */
						obj_t BgL_tmpz00_1461;

						if (UCS2P(BgL_ucs2bz00_1180))
							{	/* Llib/ucs2.scm 195 */
								BgL_tmpz00_1461 = BgL_ucs2bz00_1180;
							}
						else
							{
								obj_t BgL_auxz00_1464;

								BgL_auxz00_1464 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 8440)), BGl_string1538z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2bz00_1180);
								FAILURE(BgL_auxz00_1464, BFALSE, BFALSE);
							}
						BgL_auxz00_1460 = CUCS2(BgL_tmpz00_1461);
					}
					{	/* Llib/ucs2.scm 195 */
						obj_t BgL_tmpz00_1452;

						if (UCS2P(BgL_ucs2az00_1179))
							{	/* Llib/ucs2.scm 195 */
								BgL_tmpz00_1452 = BgL_ucs2az00_1179;
							}
						else
							{
								obj_t BgL_auxz00_1455;

								BgL_auxz00_1455 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 8440)), BGl_string1538z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2az00_1179);
								FAILURE(BgL_auxz00_1455, BFALSE, BFALSE);
							}
						BgL_auxz00_1451 = CUCS2(BgL_tmpz00_1452);
					}
					BgL_tmpz00_1450 =
						BGl_ucs2zd2cize3zf3zc2zz__ucs2z00(BgL_auxz00_1451, BgL_auxz00_1460);
				}
				return BBOOL(BgL_tmpz00_1450);
			}
		}

	}



/* ucs2-ci<=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2cizc3zd3zf3z31zz__ucs2z00(ucs2_t
		BgL_ucs2az00_20, ucs2_t BgL_ucs2bz00_21)
	{
		{	/* Llib/ucs2.scm 200 */
			return (ucs2_toupper(BgL_ucs2az00_20) <= ucs2_toupper(BgL_ucs2bz00_21));
		}

	}



/* &ucs2-ci<=? */
	obj_t BGl_z62ucs2zd2cizc3zd3zf3z53zz__ucs2z00(obj_t BgL_envz00_1181,
		obj_t BgL_ucs2az00_1182, obj_t BgL_ucs2bz00_1183)
	{
		{	/* Llib/ucs2.scm 200 */
			{	/* Llib/ucs2.scm 201 */
				bool_t BgL_tmpz00_1474;

				{	/* Llib/ucs2.scm 201 */
					ucs2_t BgL_auxz00_1484;
					ucs2_t BgL_auxz00_1475;

					{	/* Llib/ucs2.scm 201 */
						obj_t BgL_tmpz00_1485;

						if (UCS2P(BgL_ucs2bz00_1183))
							{	/* Llib/ucs2.scm 201 */
								BgL_tmpz00_1485 = BgL_ucs2bz00_1183;
							}
						else
							{
								obj_t BgL_auxz00_1488;

								BgL_auxz00_1488 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 8757)), BGl_string1539z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2bz00_1183);
								FAILURE(BgL_auxz00_1488, BFALSE, BFALSE);
							}
						BgL_auxz00_1484 = CUCS2(BgL_tmpz00_1485);
					}
					{	/* Llib/ucs2.scm 201 */
						obj_t BgL_tmpz00_1476;

						if (UCS2P(BgL_ucs2az00_1182))
							{	/* Llib/ucs2.scm 201 */
								BgL_tmpz00_1476 = BgL_ucs2az00_1182;
							}
						else
							{
								obj_t BgL_auxz00_1479;

								BgL_auxz00_1479 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 8757)), BGl_string1539z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2az00_1182);
								FAILURE(BgL_auxz00_1479, BFALSE, BFALSE);
							}
						BgL_auxz00_1475 = CUCS2(BgL_tmpz00_1476);
					}
					BgL_tmpz00_1474 =
						BGl_ucs2zd2cizc3zd3zf3z31zz__ucs2z00(BgL_auxz00_1475,
						BgL_auxz00_1484);
				}
				return BBOOL(BgL_tmpz00_1474);
			}
		}

	}



/* ucs2-ci>=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2cize3zd3zf3z11zz__ucs2z00(ucs2_t
		BgL_ucs2az00_22, ucs2_t BgL_ucs2bz00_23)
	{
		{	/* Llib/ucs2.scm 206 */
			return (ucs2_toupper(BgL_ucs2az00_22) >= ucs2_toupper(BgL_ucs2bz00_23));
		}

	}



/* &ucs2-ci>=? */
	obj_t BGl_z62ucs2zd2cize3zd3zf3z73zz__ucs2z00(obj_t BgL_envz00_1184,
		obj_t BgL_ucs2az00_1185, obj_t BgL_ucs2bz00_1186)
	{
		{	/* Llib/ucs2.scm 206 */
			{	/* Llib/ucs2.scm 207 */
				bool_t BgL_tmpz00_1498;

				{	/* Llib/ucs2.scm 207 */
					ucs2_t BgL_auxz00_1508;
					ucs2_t BgL_auxz00_1499;

					{	/* Llib/ucs2.scm 207 */
						obj_t BgL_tmpz00_1509;

						if (UCS2P(BgL_ucs2bz00_1186))
							{	/* Llib/ucs2.scm 207 */
								BgL_tmpz00_1509 = BgL_ucs2bz00_1186;
							}
						else
							{
								obj_t BgL_auxz00_1512;

								BgL_auxz00_1512 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 9074)), BGl_string1540z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2bz00_1186);
								FAILURE(BgL_auxz00_1512, BFALSE, BFALSE);
							}
						BgL_auxz00_1508 = CUCS2(BgL_tmpz00_1509);
					}
					{	/* Llib/ucs2.scm 207 */
						obj_t BgL_tmpz00_1500;

						if (UCS2P(BgL_ucs2az00_1185))
							{	/* Llib/ucs2.scm 207 */
								BgL_tmpz00_1500 = BgL_ucs2az00_1185;
							}
						else
							{
								obj_t BgL_auxz00_1503;

								BgL_auxz00_1503 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 9074)), BGl_string1540z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2az00_1185);
								FAILURE(BgL_auxz00_1503, BFALSE, BFALSE);
							}
						BgL_auxz00_1499 = CUCS2(BgL_tmpz00_1500);
					}
					BgL_tmpz00_1498 =
						BGl_ucs2zd2cize3zd3zf3z11zz__ucs2z00(BgL_auxz00_1499,
						BgL_auxz00_1508);
				}
				return BBOOL(BgL_tmpz00_1498);
			}
		}

	}



/* ucs2-alphabetic? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2alphabeticzf3z21zz__ucs2z00(ucs2_t
		BgL_ucs2z00_24)
	{
		{	/* Llib/ucs2.scm 212 */
			return ucs2_letterp(BgL_ucs2z00_24);
		}

	}



/* &ucs2-alphabetic? */
	obj_t BGl_z62ucs2zd2alphabeticzf3z43zz__ucs2z00(obj_t BgL_envz00_1187,
		obj_t BgL_ucs2z00_1188)
	{
		{	/* Llib/ucs2.scm 212 */
			{	/* Llib/ucs2.scm 213 */
				bool_t BgL_tmpz00_1520;

				{	/* Llib/ucs2.scm 213 */
					ucs2_t BgL_auxz00_1521;

					{	/* Llib/ucs2.scm 213 */
						obj_t BgL_tmpz00_1522;

						if (UCS2P(BgL_ucs2z00_1188))
							{	/* Llib/ucs2.scm 213 */
								BgL_tmpz00_1522 = BgL_ucs2z00_1188;
							}
						else
							{
								obj_t BgL_auxz00_1525;

								BgL_auxz00_1525 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 9381)), BGl_string1541z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2z00_1188);
								FAILURE(BgL_auxz00_1525, BFALSE, BFALSE);
							}
						BgL_auxz00_1521 = CUCS2(BgL_tmpz00_1522);
					}
					BgL_tmpz00_1520 =
						BGl_ucs2zd2alphabeticzf3z21zz__ucs2z00(BgL_auxz00_1521);
				}
				return BBOOL(BgL_tmpz00_1520);
			}
		}

	}



/* ucs2-numeric? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2numericzf3z21zz__ucs2z00(ucs2_t
		BgL_ucs2z00_25)
	{
		{	/* Llib/ucs2.scm 218 */
			return ucs2_digitp(BgL_ucs2z00_25);
		}

	}



/* &ucs2-numeric? */
	obj_t BGl_z62ucs2zd2numericzf3z43zz__ucs2z00(obj_t BgL_envz00_1189,
		obj_t BgL_ucs2z00_1190)
	{
		{	/* Llib/ucs2.scm 218 */
			{	/* Llib/ucs2.scm 219 */
				bool_t BgL_tmpz00_1533;

				{	/* Llib/ucs2.scm 219 */
					ucs2_t BgL_auxz00_1534;

					{	/* Llib/ucs2.scm 219 */
						obj_t BgL_tmpz00_1535;

						if (UCS2P(BgL_ucs2z00_1190))
							{	/* Llib/ucs2.scm 219 */
								BgL_tmpz00_1535 = BgL_ucs2z00_1190;
							}
						else
							{
								obj_t BgL_auxz00_1538;

								BgL_auxz00_1538 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 9666)), BGl_string1542z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2z00_1190);
								FAILURE(BgL_auxz00_1538, BFALSE, BFALSE);
							}
						BgL_auxz00_1534 = CUCS2(BgL_tmpz00_1535);
					}
					BgL_tmpz00_1533 =
						BGl_ucs2zd2numericzf3z21zz__ucs2z00(BgL_auxz00_1534);
				}
				return BBOOL(BgL_tmpz00_1533);
			}
		}

	}



/* ucs2-whitespace? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2whitespacezf3z21zz__ucs2z00(ucs2_t
		BgL_ucs2z00_26)
	{
		{	/* Llib/ucs2.scm 224 */
			return ucs2_whitespacep(BgL_ucs2z00_26);
		}

	}



/* &ucs2-whitespace? */
	obj_t BGl_z62ucs2zd2whitespacezf3z43zz__ucs2z00(obj_t BgL_envz00_1191,
		obj_t BgL_ucs2z00_1192)
	{
		{	/* Llib/ucs2.scm 224 */
			{	/* Llib/ucs2.scm 225 */
				bool_t BgL_tmpz00_1546;

				{	/* Llib/ucs2.scm 225 */
					ucs2_t BgL_auxz00_1547;

					{	/* Llib/ucs2.scm 225 */
						obj_t BgL_tmpz00_1548;

						if (UCS2P(BgL_ucs2z00_1192))
							{	/* Llib/ucs2.scm 225 */
								BgL_tmpz00_1548 = BgL_ucs2z00_1192;
							}
						else
							{
								obj_t BgL_auxz00_1551;

								BgL_auxz00_1551 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 9953)), BGl_string1543z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2z00_1192);
								FAILURE(BgL_auxz00_1551, BFALSE, BFALSE);
							}
						BgL_auxz00_1547 = CUCS2(BgL_tmpz00_1548);
					}
					BgL_tmpz00_1546 =
						BGl_ucs2zd2whitespacezf3z21zz__ucs2z00(BgL_auxz00_1547);
				}
				return BBOOL(BgL_tmpz00_1546);
			}
		}

	}



/* ucs2-upper-case? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2upperzd2casezf3zf3zz__ucs2z00(ucs2_t
		BgL_ucs2z00_27)
	{
		{	/* Llib/ucs2.scm 230 */
			return ucs2_upperp(BgL_ucs2z00_27);
		}

	}



/* &ucs2-upper-case? */
	obj_t BGl_z62ucs2zd2upperzd2casezf3z91zz__ucs2z00(obj_t BgL_envz00_1193,
		obj_t BgL_ucs2z00_1194)
	{
		{	/* Llib/ucs2.scm 230 */
			{	/* Llib/ucs2.scm 231 */
				bool_t BgL_tmpz00_1559;

				{	/* Llib/ucs2.scm 231 */
					ucs2_t BgL_auxz00_1560;

					{	/* Llib/ucs2.scm 231 */
						obj_t BgL_tmpz00_1561;

						if (UCS2P(BgL_ucs2z00_1194))
							{	/* Llib/ucs2.scm 231 */
								BgL_tmpz00_1561 = BgL_ucs2z00_1194;
							}
						else
							{
								obj_t BgL_auxz00_1564;

								BgL_auxz00_1564 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 10245)), BGl_string1544z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2z00_1194);
								FAILURE(BgL_auxz00_1564, BFALSE, BFALSE);
							}
						BgL_auxz00_1560 = CUCS2(BgL_tmpz00_1561);
					}
					BgL_tmpz00_1559 =
						BGl_ucs2zd2upperzd2casezf3zf3zz__ucs2z00(BgL_auxz00_1560);
				}
				return BBOOL(BgL_tmpz00_1559);
			}
		}

	}



/* ucs2-lower-case? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2lowerzd2casezf3zf3zz__ucs2z00(ucs2_t
		BgL_ucs2z00_28)
	{
		{	/* Llib/ucs2.scm 236 */
			return ucs2_lowerp(BgL_ucs2z00_28);
		}

	}



/* &ucs2-lower-case? */
	obj_t BGl_z62ucs2zd2lowerzd2casezf3z91zz__ucs2z00(obj_t BgL_envz00_1195,
		obj_t BgL_ucs2z00_1196)
	{
		{	/* Llib/ucs2.scm 236 */
			{	/* Llib/ucs2.scm 237 */
				bool_t BgL_tmpz00_1572;

				{	/* Llib/ucs2.scm 237 */
					ucs2_t BgL_auxz00_1573;

					{	/* Llib/ucs2.scm 237 */
						obj_t BgL_tmpz00_1574;

						if (UCS2P(BgL_ucs2z00_1196))
							{	/* Llib/ucs2.scm 237 */
								BgL_tmpz00_1574 = BgL_ucs2z00_1196;
							}
						else
							{
								obj_t BgL_auxz00_1577;

								BgL_auxz00_1577 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 10532)), BGl_string1545z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2z00_1196);
								FAILURE(BgL_auxz00_1577, BFALSE, BFALSE);
							}
						BgL_auxz00_1573 = CUCS2(BgL_tmpz00_1574);
					}
					BgL_tmpz00_1572 =
						BGl_ucs2zd2lowerzd2casezf3zf3zz__ucs2z00(BgL_auxz00_1573);
				}
				return BBOOL(BgL_tmpz00_1572);
			}
		}

	}



/* ucs2-upcase */
	BGL_EXPORTED_DEF ucs2_t BGl_ucs2zd2upcasezd2zz__ucs2z00(ucs2_t BgL_ucs2z00_29)
	{
		{	/* Llib/ucs2.scm 242 */
			return ucs2_toupper(BgL_ucs2z00_29);
		}

	}



/* &ucs2-upcase */
	obj_t BGl_z62ucs2zd2upcasezb0zz__ucs2z00(obj_t BgL_envz00_1197,
		obj_t BgL_ucs2z00_1198)
	{
		{	/* Llib/ucs2.scm 242 */
			{	/* Llib/ucs2.scm 243 */
				ucs2_t BgL_tmpz00_1585;

				{	/* Llib/ucs2.scm 243 */
					ucs2_t BgL_auxz00_1586;

					{	/* Llib/ucs2.scm 243 */
						obj_t BgL_tmpz00_1587;

						if (UCS2P(BgL_ucs2z00_1198))
							{	/* Llib/ucs2.scm 243 */
								BgL_tmpz00_1587 = BgL_ucs2z00_1198;
							}
						else
							{
								obj_t BgL_auxz00_1590;

								BgL_auxz00_1590 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 10814)), BGl_string1546z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2z00_1198);
								FAILURE(BgL_auxz00_1590, BFALSE, BFALSE);
							}
						BgL_auxz00_1586 = CUCS2(BgL_tmpz00_1587);
					}
					BgL_tmpz00_1585 = BGl_ucs2zd2upcasezd2zz__ucs2z00(BgL_auxz00_1586);
				}
				return BUCS2(BgL_tmpz00_1585);
			}
		}

	}



/* ucs2-downcase */
	BGL_EXPORTED_DEF ucs2_t BGl_ucs2zd2downcasezd2zz__ucs2z00(ucs2_t
		BgL_ucs2z00_30)
	{
		{	/* Llib/ucs2.scm 248 */
			return ucs2_tolower(BgL_ucs2z00_30);
		}

	}



/* &ucs2-downcase */
	obj_t BGl_z62ucs2zd2downcasezb0zz__ucs2z00(obj_t BgL_envz00_1199,
		obj_t BgL_ucs2z00_1200)
	{
		{	/* Llib/ucs2.scm 248 */
			{	/* Llib/ucs2.scm 249 */
				ucs2_t BgL_tmpz00_1598;

				{	/* Llib/ucs2.scm 249 */
					ucs2_t BgL_auxz00_1599;

					{	/* Llib/ucs2.scm 249 */
						obj_t BgL_tmpz00_1600;

						if (UCS2P(BgL_ucs2z00_1200))
							{	/* Llib/ucs2.scm 249 */
								BgL_tmpz00_1600 = BgL_ucs2z00_1200;
							}
						else
							{
								obj_t BgL_auxz00_1603;

								BgL_auxz00_1603 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 11098)), BGl_string1547z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2z00_1200);
								FAILURE(BgL_auxz00_1603, BFALSE, BFALSE);
							}
						BgL_auxz00_1599 = CUCS2(BgL_tmpz00_1600);
					}
					BgL_tmpz00_1598 = BGl_ucs2zd2downcasezd2zz__ucs2z00(BgL_auxz00_1599);
				}
				return BUCS2(BgL_tmpz00_1598);
			}
		}

	}



/* integer->ucs2 */
	BGL_EXPORTED_DEF ucs2_t BGl_integerzd2ze3ucs2z31zz__ucs2z00(int BgL_intz00_31)
	{
		{	/* Llib/ucs2.scm 254 */
			{	/* Llib/ucs2.scm 255 */
				bool_t BgL_test1646z00_1610;

				if (((long) (BgL_intz00_31) >= ((long) 0)))
					{	/* Llib/ucs2.scm 255 */
						BgL_test1646z00_1610 = ((long) (BgL_intz00_31) < ((long) 65536));
					}
				else
					{	/* Llib/ucs2.scm 255 */
						BgL_test1646z00_1610 = ((bool_t) 0);
					}
				if (BgL_test1646z00_1610)
					{	/* Llib/ucs2.scm 255 */
						if (ucs2_definedp(BgL_intz00_31))
							{	/* Llib/ucs2.scm 256 */
								return BGL_INT_TO_UCS2(BgL_intz00_31);
							}
						else
							{	/* Llib/ucs2.scm 256 */
								return
									CUCS2(BGl_errorz00zz__errorz00(BGl_symbol1548z00zz__ucs2z00,
										BGl_string1550z00zz__ucs2z00, BINT(BgL_intz00_31)));
							}
					}
				else
					{	/* Llib/ucs2.scm 255 */
						return
							CUCS2(BGl_errorz00zz__errorz00(BGl_symbol1548z00zz__ucs2z00,
								BGl_string1551z00zz__ucs2z00, BINT(BgL_intz00_31)));
					}
			}
		}

	}



/* &integer->ucs2 */
	obj_t BGl_z62integerzd2ze3ucs2z53zz__ucs2z00(obj_t BgL_envz00_1201,
		obj_t BgL_intz00_1202)
	{
		{	/* Llib/ucs2.scm 254 */
			{	/* Llib/ucs2.scm 255 */
				ucs2_t BgL_tmpz00_1625;

				{	/* Llib/ucs2.scm 255 */
					int BgL_auxz00_1626;

					{	/* Llib/ucs2.scm 255 */
						obj_t BgL_tmpz00_1627;

						if (INTEGERP(BgL_intz00_1202))
							{	/* Llib/ucs2.scm 255 */
								BgL_tmpz00_1627 = BgL_intz00_1202;
							}
						else
							{
								obj_t BgL_auxz00_1630;

								BgL_auxz00_1630 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 11394)), BGl_string1552z00zz__ucs2z00,
									BGl_string1553z00zz__ucs2z00, BgL_intz00_1202);
								FAILURE(BgL_auxz00_1630, BFALSE, BFALSE);
							}
						BgL_auxz00_1626 = CINT(BgL_tmpz00_1627);
					}
					BgL_tmpz00_1625 =
						BGl_integerzd2ze3ucs2z31zz__ucs2z00(BgL_auxz00_1626);
				}
				return BUCS2(BgL_tmpz00_1625);
			}
		}

	}



/* integer->ucs2-ur */
	BGL_EXPORTED_DEF ucs2_t BGl_integerzd2ze3ucs2zd2urze3zz__ucs2z00(int
		BgL_intz00_32)
	{
		{	/* Llib/ucs2.scm 264 */
			return BGL_INT_TO_UCS2(BgL_intz00_32);
		}

	}



/* &integer->ucs2-ur */
	obj_t BGl_z62integerzd2ze3ucs2zd2urz81zz__ucs2z00(obj_t BgL_envz00_1203,
		obj_t BgL_intz00_1204)
	{
		{	/* Llib/ucs2.scm 264 */
			{	/* Llib/ucs2.scm 265 */
				ucs2_t BgL_tmpz00_1638;

				{	/* Llib/ucs2.scm 265 */
					int BgL_auxz00_1639;

					{	/* Llib/ucs2.scm 265 */
						obj_t BgL_tmpz00_1640;

						if (INTEGERP(BgL_intz00_1204))
							{	/* Llib/ucs2.scm 265 */
								BgL_tmpz00_1640 = BgL_intz00_1204;
							}
						else
							{
								obj_t BgL_auxz00_1643;

								BgL_auxz00_1643 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 11890)), BGl_string1554z00zz__ucs2z00,
									BGl_string1553z00zz__ucs2z00, BgL_intz00_1204);
								FAILURE(BgL_auxz00_1643, BFALSE, BFALSE);
							}
						BgL_auxz00_1639 = CINT(BgL_tmpz00_1640);
					}
					BgL_tmpz00_1638 =
						BGl_integerzd2ze3ucs2zd2urze3zz__ucs2z00(BgL_auxz00_1639);
				}
				return BUCS2(BgL_tmpz00_1638);
			}
		}

	}



/* ucs2->integer */
	BGL_EXPORTED_DEF int BGl_ucs2zd2ze3integerz31zz__ucs2z00(ucs2_t
		BgL_ucs2z00_33)
	{
		{	/* Llib/ucs2.scm 270 */
			{	/* Llib/ucs2.scm 271 */
				obj_t BgL_tmpz00_1650;

				BgL_tmpz00_1650 = BUCS2(BgL_ucs2z00_33);
				return CUCS2(BgL_tmpz00_1650);
			}
		}

	}



/* &ucs2->integer */
	obj_t BGl_z62ucs2zd2ze3integerz53zz__ucs2z00(obj_t BgL_envz00_1205,
		obj_t BgL_ucs2z00_1206)
	{
		{	/* Llib/ucs2.scm 270 */
			{	/* Llib/ucs2.scm 271 */
				int BgL_tmpz00_1653;

				{	/* Llib/ucs2.scm 271 */
					ucs2_t BgL_auxz00_1654;

					{	/* Llib/ucs2.scm 271 */
						obj_t BgL_tmpz00_1655;

						if (UCS2P(BgL_ucs2z00_1206))
							{	/* Llib/ucs2.scm 271 */
								BgL_tmpz00_1655 = BgL_ucs2z00_1206;
							}
						else
							{
								obj_t BgL_auxz00_1658;

								BgL_auxz00_1658 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 12186)), BGl_string1555z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2z00_1206);
								FAILURE(BgL_auxz00_1658, BFALSE, BFALSE);
							}
						BgL_auxz00_1654 = CUCS2(BgL_tmpz00_1655);
					}
					BgL_tmpz00_1653 =
						BGl_ucs2zd2ze3integerz31zz__ucs2z00(BgL_auxz00_1654);
				}
				return BINT(BgL_tmpz00_1653);
			}
		}

	}



/* char->ucs2 */
	BGL_EXPORTED_DEF ucs2_t BGl_charzd2ze3ucs2z31zz__ucs2z00(unsigned char
		BgL_charz00_34)
	{
		{	/* Llib/ucs2.scm 276 */
			{	/* Llib/ucs2.scm 265 */
				int BgL_tmpz00_1665;

				BgL_tmpz00_1665 = (int) (((unsigned char) (BgL_charz00_34)));
				return BGL_INT_TO_UCS2(BgL_tmpz00_1665);
			}
		}

	}



/* &char->ucs2 */
	obj_t BGl_z62charzd2ze3ucs2z53zz__ucs2z00(obj_t BgL_envz00_1207,
		obj_t BgL_charz00_1208)
	{
		{	/* Llib/ucs2.scm 276 */
			{	/* Llib/ucs2.scm 277 */
				ucs2_t BgL_tmpz00_1670;

				{	/* Llib/ucs2.scm 277 */
					unsigned char BgL_auxz00_1671;

					{	/* Llib/ucs2.scm 277 */
						obj_t BgL_tmpz00_1672;

						if (CHARP(BgL_charz00_1208))
							{	/* Llib/ucs2.scm 277 */
								BgL_tmpz00_1672 = BgL_charz00_1208;
							}
						else
							{
								obj_t BgL_auxz00_1675;

								BgL_auxz00_1675 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 12499)), BGl_string1556z00zz__ucs2z00,
									BGl_string1557z00zz__ucs2z00, BgL_charz00_1208);
								FAILURE(BgL_auxz00_1675, BFALSE, BFALSE);
							}
						BgL_auxz00_1671 = CCHAR(BgL_tmpz00_1672);
					}
					BgL_tmpz00_1670 = BGl_charzd2ze3ucs2z31zz__ucs2z00(BgL_auxz00_1671);
				}
				return BUCS2(BgL_tmpz00_1670);
			}
		}

	}



/* ucs2->char */
	BGL_EXPORTED_DEF unsigned char BGl_ucs2zd2ze3charz31zz__ucs2z00(ucs2_t
		BgL_ucs2z00_35)
	{
		{	/* Llib/ucs2.scm 282 */
			{	/* Llib/ucs2.scm 283 */
				int BgL_intz00_1074;

				{	/* Llib/ucs2.scm 283 */
					int BgL_res1446z00_1077;

					{	/* Llib/ucs2.scm 271 */
						obj_t BgL_tmpz00_1682;

						BgL_tmpz00_1682 = BUCS2(BgL_ucs2z00_35);
						BgL_res1446z00_1077 = CUCS2(BgL_tmpz00_1682);
					}
					BgL_intz00_1074 = BgL_res1446z00_1077;
				}
				if (((long) (BgL_intz00_1074) < ((long) 256)))
					{	/* Llib/ucs2.scm 284 */
						return (char) (((long) (BgL_intz00_1074)));
					}
				else
					{	/* Llib/ucs2.scm 284 */
						return
							CCHAR(BGl_errorz00zz__errorz00(BGl_symbol1558z00zz__ucs2z00,
								BGl_string1560z00zz__ucs2z00, BUCS2(BgL_ucs2z00_35)));
					}
			}
		}

	}



/* &ucs2->char */
	obj_t BGl_z62ucs2zd2ze3charz53zz__ucs2z00(obj_t BgL_envz00_1209,
		obj_t BgL_ucs2z00_1210)
	{
		{	/* Llib/ucs2.scm 282 */
			{	/* Llib/ucs2.scm 283 */
				unsigned char BgL_tmpz00_1694;

				{	/* Llib/ucs2.scm 283 */
					ucs2_t BgL_auxz00_1695;

					{	/* Llib/ucs2.scm 283 */
						obj_t BgL_tmpz00_1696;

						if (UCS2P(BgL_ucs2z00_1210))
							{	/* Llib/ucs2.scm 283 */
								BgL_tmpz00_1696 = BgL_ucs2z00_1210;
							}
						else
							{
								obj_t BgL_auxz00_1699;

								BgL_auxz00_1699 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__ucs2z00,
									BINT(((long) 12786)), BGl_string1561z00zz__ucs2z00,
									BGl_string1531z00zz__ucs2z00, BgL_ucs2z00_1210);
								FAILURE(BgL_auxz00_1699, BFALSE, BFALSE);
							}
						BgL_auxz00_1695 = CUCS2(BgL_tmpz00_1696);
					}
					BgL_tmpz00_1694 = BGl_ucs2zd2ze3charz31zz__ucs2z00(BgL_auxz00_1695);
				}
				return BCHAR(BgL_tmpz00_1694);
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__ucs2z00()
	{
		{	/* Llib/ucs2.scm 14 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1562z00zz__ucs2z00));
		}

	}

#ifdef __cplusplus
}
#endif
