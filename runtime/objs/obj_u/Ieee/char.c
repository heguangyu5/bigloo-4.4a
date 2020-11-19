/*===========================================================================*/
/*   (Ieee/char.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Ieee/char.scm -indent -o objs/obj_u/Ieee/char.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62charzd2lowerzd2casezf3z91zz__r4_characters_6_6z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL long
		BGl_charzd2ze3integerz31zz__r4_characters_6_6z00(unsigned char);
	BGL_EXPORTED_DECL unsigned char
		BGl_charzd2andzd2zz__r4_characters_6_6z00(unsigned char, unsigned char);
	BGL_EXPORTED_DECL bool_t
		BGl_charzd2numericzf3z21zz__r4_characters_6_6z00(unsigned char);
	BGL_EXPORTED_DECL unsigned char
		BGl_charzd2downcasezd2zz__r4_characters_6_6z00(unsigned char);
	BGL_EXPORTED_DECL unsigned char
		BGl_integerzd2ze3charzd2urze3zz__r4_characters_6_6z00(long);
	static obj_t BGl_z62charzd2cizc3zd3zf3z53zz__r4_characters_6_6z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_characters_6_6z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL unsigned char
		BGl_charzd2upcasezd2zz__r4_characters_6_6z00(unsigned char);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62charzc3zf3z52zz__r4_characters_6_6z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62charzd2notzb0zz__r4_characters_6_6z00(obj_t, obj_t);
	static obj_t BGl_z62charzd2alphabeticzf3z43zz__r4_characters_6_6z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL bool_t
		BGl_charzd2cize3zd3zf3z11zz__r4_characters_6_6z00(unsigned char,
		unsigned char);
	static obj_t BGl_z62charzd3zf3z42zz__r4_characters_6_6z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62charzd2cizc3zf3z80zz__r4_characters_6_6z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62charze3zf3z72zz__r4_characters_6_6z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62charzd2ze3integerz53zz__r4_characters_6_6z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_charzd2upperzd2casezf3zf3zz__r4_characters_6_6z00(unsigned char);
	static obj_t BGl_z62charzd2numericzf3z43zz__r4_characters_6_6z00(obj_t,
		obj_t);
	static obj_t BGl_z62charzd2downcasezb0zz__r4_characters_6_6z00(obj_t, obj_t);
	static obj_t BGl_z62charzd2cize3zd3zf3z73zz__r4_characters_6_6z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62charzd2cizd3zf3z90zz__r4_characters_6_6z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL unsigned char
		BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long);
	static obj_t BGl_gczd2rootszd2initz00zz__r4_characters_6_6z00();
	BGL_EXPORTED_DECL bool_t BGl_charzc3zd3zf3ze3zz__r4_characters_6_6z00(unsigned
		char, unsigned char);
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_characters_6_6z00();
	static obj_t BGl_z62charzd2cize3zf3za0zz__r4_characters_6_6z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62charzc3zd3zf3z81zz__r4_characters_6_6z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62charzd2andzb0zz__r4_characters_6_6z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62integerzd2ze3charzd2urz81zz__r4_characters_6_6z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_charzf3zf3zz__r4_characters_6_6z00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_charzd2whitespacezf3z21zz__r4_characters_6_6z00(unsigned char);
	BGL_EXPORTED_DECL bool_t
		BGl_charzd2cizc3zf3ze2zz__r4_characters_6_6z00(unsigned char,
		unsigned char);
	BGL_EXPORTED_DECL bool_t BGl_charzc3zf3z30zz__r4_characters_6_6z00(unsigned
		char, unsigned char);
	BGL_EXPORTED_DECL bool_t
		BGl_charzd2cizd3zf3zf2zz__r4_characters_6_6z00(unsigned char,
		unsigned char);
	BGL_EXPORTED_DECL bool_t BGl_charzd3zf3z20zz__r4_characters_6_6z00(unsigned
		char, unsigned char);
	static obj_t BGl_z62integerzd2ze3charz53zz__r4_characters_6_6z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_charzd2lowerzd2casezf3zf3zz__r4_characters_6_6z00(unsigned char);
	BGL_EXPORTED_DECL bool_t
		BGl_charzd2cize3zf3zc2zz__r4_characters_6_6z00(unsigned char,
		unsigned char);
	static obj_t BGl_z62charzd2upcasezb0zz__r4_characters_6_6z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_charze3zd3zf3zc3zz__r4_characters_6_6z00(unsigned
		char, unsigned char);
	BGL_EXPORTED_DECL bool_t BGl_charze3zf3z10zz__r4_characters_6_6z00(unsigned
		char, unsigned char);
	static obj_t BGl_z62charze3zd3zf3za1zz__r4_characters_6_6z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62charzd2upperzd2casezf3z91zz__r4_characters_6_6z00(obj_t,
		obj_t);
	static obj_t BGl_z62charzf3z91zz__r4_characters_6_6z00(obj_t, obj_t);
	BGL_EXPORTED_DECL unsigned char
		BGl_charzd2notzd2zz__r4_characters_6_6z00(unsigned char);
	BGL_EXPORTED_DECL bool_t
		BGl_charzd2alphabeticzf3z21zz__r4_characters_6_6z00(unsigned char);
	BGL_EXPORTED_DECL unsigned char
		BGl_charzd2orzd2zz__r4_characters_6_6z00(unsigned char, unsigned char);
	static obj_t BGl_z62charzd2orzb0zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62charzd2whitespacezf3z43zz__r4_characters_6_6z00(obj_t,
		obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_charzd2cizc3zd3zf3z31zz__r4_characters_6_6z00(unsigned char,
		unsigned char);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2upperzd2casezf3zd2envz21zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7d2upperza71541za7,
		BGl_z62charzd2upperzd2casezf3z91zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_charzd3zf3zd2envzf2zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7d3za7f3za7421542z00,
		BGl_z62charzd3zf3z42zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_integerzd2ze3charzd2envze3zz__r4_characters_6_6z00,
		BgL_bgl_za762integerza7d2za7e31543za7,
		BGl_z62integerzd2ze3charz53zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2upcasezd2envz00zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7d2upcase1544z00,
		BGl_z62charzd2upcasezb0zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2whitespacezf3zd2envzf3zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7d2whites1545z00,
		BGl_z62charzd2whitespacezf3z43zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2numericzf3zd2envzf3zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7d2numeri1546z00,
		BGl_z62charzd2numericzf3z43zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1512z00zz__r4_characters_6_6z00,
		BgL_bgl_string1512za700za7za7_1547za7, "/tmp/4.4a/runtime/Ieee/char.scm",
		31);
	      DEFINE_STRING(BGl_string1513z00zz__r4_characters_6_6z00,
		BgL_bgl_string1513za700za7za7_1548za7, "&char=?", 7);
	      DEFINE_STRING(BGl_string1514z00zz__r4_characters_6_6z00,
		BgL_bgl_string1514za700za7za7_1549za7, "bchar", 5);
	      DEFINE_STRING(BGl_string1515z00zz__r4_characters_6_6z00,
		BgL_bgl_string1515za700za7za7_1550za7, "&char<?", 7);
	      DEFINE_STRING(BGl_string1516z00zz__r4_characters_6_6z00,
		BgL_bgl_string1516za700za7za7_1551za7, "&char>?", 7);
	      DEFINE_STRING(BGl_string1517z00zz__r4_characters_6_6z00,
		BgL_bgl_string1517za700za7za7_1552za7, "&char<=?", 8);
	      DEFINE_STRING(BGl_string1518z00zz__r4_characters_6_6z00,
		BgL_bgl_string1518za700za7za7_1553za7, "&char>=?", 8);
	      DEFINE_STRING(BGl_string1519z00zz__r4_characters_6_6z00,
		BgL_bgl_string1519za700za7za7_1554za7, "&char-ci=?", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2cizd3zf3zd2envz20zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7d2ciza7d3za71555z00,
		BGl_z62charzd2cizd3zf3z90zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1520z00zz__r4_characters_6_6z00,
		BgL_bgl_string1520za700za7za7_1556za7, "&char-ci<?", 10);
	      DEFINE_STRING(BGl_string1521z00zz__r4_characters_6_6z00,
		BgL_bgl_string1521za700za7za7_1557za7, "&char-ci>?", 10);
	      DEFINE_STRING(BGl_string1522z00zz__r4_characters_6_6z00,
		BgL_bgl_string1522za700za7za7_1558za7, "&char-ci<=?", 11);
	      DEFINE_STRING(BGl_string1523z00zz__r4_characters_6_6z00,
		BgL_bgl_string1523za700za7za7_1559za7, "&char-ci>=?", 11);
	      DEFINE_STRING(BGl_string1524z00zz__r4_characters_6_6z00,
		BgL_bgl_string1524za700za7za7_1560za7, "&char-alphabetic?", 17);
	      DEFINE_STRING(BGl_string1525z00zz__r4_characters_6_6z00,
		BgL_bgl_string1525za700za7za7_1561za7, "&char-numeric?", 14);
	      DEFINE_STRING(BGl_string1526z00zz__r4_characters_6_6z00,
		BgL_bgl_string1526za700za7za7_1562za7, "&char-whitespace?", 17);
	      DEFINE_STRING(BGl_string1527z00zz__r4_characters_6_6z00,
		BgL_bgl_string1527za700za7za7_1563za7, "&char-upper-case?", 17);
	      DEFINE_STRING(BGl_string1528z00zz__r4_characters_6_6z00,
		BgL_bgl_string1528za700za7za7_1564za7, "&char-lower-case?", 17);
	      DEFINE_STRING(BGl_string1529z00zz__r4_characters_6_6z00,
		BgL_bgl_string1529za700za7za7_1565za7, "&char->integer", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_charze3zf3zd2envzc2zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7e3za7f3za7721566z00,
		BGl_z62charze3zf3z72zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1530z00zz__r4_characters_6_6z00,
		BgL_bgl_string1530za700za7za7_1567za7, "integer->char", 13);
	      DEFINE_STRING(BGl_string1531z00zz__r4_characters_6_6z00,
		BgL_bgl_string1531za700za7za7_1568za7, "integer out of range", 20);
	      DEFINE_STRING(BGl_string1532z00zz__r4_characters_6_6z00,
		BgL_bgl_string1532za700za7za7_1569za7, "&integer->char", 14);
	      DEFINE_STRING(BGl_string1533z00zz__r4_characters_6_6z00,
		BgL_bgl_string1533za700za7za7_1570za7, "bint", 4);
	      DEFINE_STRING(BGl_string1534z00zz__r4_characters_6_6z00,
		BgL_bgl_string1534za700za7za7_1571za7, "&integer->char-ur", 17);
	      DEFINE_STRING(BGl_string1535z00zz__r4_characters_6_6z00,
		BgL_bgl_string1535za700za7za7_1572za7, "&char-upcase", 12);
	      DEFINE_STRING(BGl_string1536z00zz__r4_characters_6_6z00,
		BgL_bgl_string1536za700za7za7_1573za7, "&char-downcase", 14);
	      DEFINE_STRING(BGl_string1537z00zz__r4_characters_6_6z00,
		BgL_bgl_string1537za700za7za7_1574za7, "&char-or", 8);
	      DEFINE_STRING(BGl_string1538z00zz__r4_characters_6_6z00,
		BgL_bgl_string1538za700za7za7_1575za7, "&char-and", 9);
	      DEFINE_STRING(BGl_string1539z00zz__r4_characters_6_6z00,
		BgL_bgl_string1539za700za7za7_1576za7, "&char-not", 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2cize3zd3zf3zd2envzc3zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7d2ciza7e3za71577z00,
		BGl_z62charzd2cize3zd3zf3z73zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1540z00zz__r4_characters_6_6z00,
		BgL_bgl_string1540za700za7za7_1578za7, "__r4_characters_6_6", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_charzd2andzd2envz00zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7d2andza7b01579za7,
		BGl_z62charzd2andzb0zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2alphabeticzf3zd2envzf3zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7d2alphab1580z00,
		BGl_z62charzd2alphabeticzf3z43zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2lowerzd2casezf3zd2envz21zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7d2lowerza71581za7,
		BGl_z62charzd2lowerzd2casezf3z91zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2cize3zf3zd2envz10zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7d2ciza7e3za71582z00,
		BGl_z62charzd2cize3zf3za0zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charze3zd3zf3zd2envz11zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7e3za7d3za7f31583z00,
		BGl_z62charze3zd3zf3za1zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2cizc3zd3zf3zd2envze3zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7d2ciza7c3za71584z00,
		BGl_z62charzd2cizc3zd3zf3z53zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_charzf3zd2envz21zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7f3za791za7za7_1585za7,
		BGl_z62charzf3z91zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_charzc3zf3zd2envze2zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7c3za7f3za7521586z00,
		BGl_z62charzc3zf3z52zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_charzd2notzd2envz00zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7d2notza7b01587za7,
		BGl_z62charzd2notzb0zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2ze3integerzd2envze3zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7d2za7e3int1588za7,
		BGl_z62charzd2ze3integerz53zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2downcasezd2envz00zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7d2downca1589z00,
		BGl_z62charzd2downcasezb0zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_charzd2orzd2envz00zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7d2orza7b0za71590z00,
		BGl_z62charzd2orzb0zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_integerzd2ze3charzd2urzd2envz31zz__r4_characters_6_6z00,
		BgL_bgl_za762integerza7d2za7e31591za7,
		BGl_z62integerzd2ze3charzd2urz81zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzc3zd3zf3zd2envz31zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7c3za7d3za7f31592z00,
		BGl_z62charzc3zd3zf3z81zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2cizc3zf3zd2envz30zz__r4_characters_6_6z00,
		BgL_bgl_za762charza7d2ciza7c3za71593z00,
		BGl_z62charzd2cizc3zf3z80zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__r4_characters_6_6z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long
		BgL_checksumz00_1214, char *BgL_fromz00_1215)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_characters_6_6z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_characters_6_6z00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__r4_characters_6_6z00();
					return BGl_importedzd2moduleszd2initz00zz__r4_characters_6_6z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__r4_characters_6_6z00()
	{
		{	/* Ieee/char.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* char? */
	BGL_EXPORTED_DEF bool_t BGl_charzf3zf3zz__r4_characters_6_6z00(obj_t
		BgL_objz00_3)
	{
		{	/* Ieee/char.scm 131 */
			return CHARP(BgL_objz00_3);
		}

	}



/* &char? */
	obj_t BGl_z62charzf3z91zz__r4_characters_6_6z00(obj_t BgL_envz00_1084,
		obj_t BgL_objz00_1085)
	{
		{	/* Ieee/char.scm 131 */
			return BBOOL(BGl_charzf3zf3zz__r4_characters_6_6z00(BgL_objz00_1085));
		}

	}



/* char=? */
	BGL_EXPORTED_DEF bool_t BGl_charzd3zf3z20zz__r4_characters_6_6z00(unsigned
		char BgL_char1z00_4, unsigned char BgL_char2z00_5)
	{
		{	/* Ieee/char.scm 137 */
			return (BgL_char1z00_4 == BgL_char2z00_5);
		}

	}



/* &char=? */
	obj_t BGl_z62charzd3zf3z42zz__r4_characters_6_6z00(obj_t BgL_envz00_1086,
		obj_t BgL_char1z00_1087, obj_t BgL_char2z00_1088)
	{
		{	/* Ieee/char.scm 137 */
			{	/* Ieee/char.scm 138 */
				bool_t BgL_tmpz00_1226;

				{	/* Ieee/char.scm 138 */
					unsigned char BgL_auxz00_1236;
					unsigned char BgL_auxz00_1227;

					{	/* Ieee/char.scm 138 */
						obj_t BgL_tmpz00_1237;

						if (CHARP(BgL_char2z00_1088))
							{	/* Ieee/char.scm 138 */
								BgL_tmpz00_1237 = BgL_char2z00_1088;
							}
						else
							{
								obj_t BgL_auxz00_1240;

								BgL_auxz00_1240 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 6542)),
									BGl_string1513z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char2z00_1088);
								FAILURE(BgL_auxz00_1240, BFALSE, BFALSE);
							}
						BgL_auxz00_1236 = CCHAR(BgL_tmpz00_1237);
					}
					{	/* Ieee/char.scm 138 */
						obj_t BgL_tmpz00_1228;

						if (CHARP(BgL_char1z00_1087))
							{	/* Ieee/char.scm 138 */
								BgL_tmpz00_1228 = BgL_char1z00_1087;
							}
						else
							{
								obj_t BgL_auxz00_1231;

								BgL_auxz00_1231 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 6542)),
									BGl_string1513z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char1z00_1087);
								FAILURE(BgL_auxz00_1231, BFALSE, BFALSE);
							}
						BgL_auxz00_1227 = CCHAR(BgL_tmpz00_1228);
					}
					BgL_tmpz00_1226 =
						BGl_charzd3zf3z20zz__r4_characters_6_6z00(BgL_auxz00_1227,
						BgL_auxz00_1236);
				}
				return BBOOL(BgL_tmpz00_1226);
			}
		}

	}



/* char<? */
	BGL_EXPORTED_DEF bool_t BGl_charzc3zf3z30zz__r4_characters_6_6z00(unsigned
		char BgL_char1z00_6, unsigned char BgL_char2z00_7)
	{
		{	/* Ieee/char.scm 143 */
			return (BgL_char1z00_6 < BgL_char2z00_7);
		}

	}



/* &char<? */
	obj_t BGl_z62charzc3zf3z52zz__r4_characters_6_6z00(obj_t BgL_envz00_1089,
		obj_t BgL_char1z00_1090, obj_t BgL_char2z00_1091)
	{
		{	/* Ieee/char.scm 143 */
			{	/* Ieee/char.scm 144 */
				bool_t BgL_tmpz00_1248;

				{	/* Ieee/char.scm 144 */
					unsigned char BgL_auxz00_1258;
					unsigned char BgL_auxz00_1249;

					{	/* Ieee/char.scm 144 */
						obj_t BgL_tmpz00_1259;

						if (CHARP(BgL_char2z00_1091))
							{	/* Ieee/char.scm 144 */
								BgL_tmpz00_1259 = BgL_char2z00_1091;
							}
						else
							{
								obj_t BgL_auxz00_1262;

								BgL_auxz00_1262 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 6828)),
									BGl_string1515z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char2z00_1091);
								FAILURE(BgL_auxz00_1262, BFALSE, BFALSE);
							}
						BgL_auxz00_1258 = CCHAR(BgL_tmpz00_1259);
					}
					{	/* Ieee/char.scm 144 */
						obj_t BgL_tmpz00_1250;

						if (CHARP(BgL_char1z00_1090))
							{	/* Ieee/char.scm 144 */
								BgL_tmpz00_1250 = BgL_char1z00_1090;
							}
						else
							{
								obj_t BgL_auxz00_1253;

								BgL_auxz00_1253 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 6828)),
									BGl_string1515z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char1z00_1090);
								FAILURE(BgL_auxz00_1253, BFALSE, BFALSE);
							}
						BgL_auxz00_1249 = CCHAR(BgL_tmpz00_1250);
					}
					BgL_tmpz00_1248 =
						BGl_charzc3zf3z30zz__r4_characters_6_6z00(BgL_auxz00_1249,
						BgL_auxz00_1258);
				}
				return BBOOL(BgL_tmpz00_1248);
			}
		}

	}



/* char>? */
	BGL_EXPORTED_DEF bool_t BGl_charze3zf3z10zz__r4_characters_6_6z00(unsigned
		char BgL_char1z00_8, unsigned char BgL_char2z00_9)
	{
		{	/* Ieee/char.scm 149 */
			return (BgL_char1z00_8 > BgL_char2z00_9);
		}

	}



/* &char>? */
	obj_t BGl_z62charze3zf3z72zz__r4_characters_6_6z00(obj_t BgL_envz00_1092,
		obj_t BgL_char1z00_1093, obj_t BgL_char2z00_1094)
	{
		{	/* Ieee/char.scm 149 */
			{	/* Ieee/char.scm 150 */
				bool_t BgL_tmpz00_1270;

				{	/* Ieee/char.scm 150 */
					unsigned char BgL_auxz00_1280;
					unsigned char BgL_auxz00_1271;

					{	/* Ieee/char.scm 150 */
						obj_t BgL_tmpz00_1281;

						if (CHARP(BgL_char2z00_1094))
							{	/* Ieee/char.scm 150 */
								BgL_tmpz00_1281 = BgL_char2z00_1094;
							}
						else
							{
								obj_t BgL_auxz00_1284;

								BgL_auxz00_1284 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 7115)),
									BGl_string1516z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char2z00_1094);
								FAILURE(BgL_auxz00_1284, BFALSE, BFALSE);
							}
						BgL_auxz00_1280 = CCHAR(BgL_tmpz00_1281);
					}
					{	/* Ieee/char.scm 150 */
						obj_t BgL_tmpz00_1272;

						if (CHARP(BgL_char1z00_1093))
							{	/* Ieee/char.scm 150 */
								BgL_tmpz00_1272 = BgL_char1z00_1093;
							}
						else
							{
								obj_t BgL_auxz00_1275;

								BgL_auxz00_1275 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 7115)),
									BGl_string1516z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char1z00_1093);
								FAILURE(BgL_auxz00_1275, BFALSE, BFALSE);
							}
						BgL_auxz00_1271 = CCHAR(BgL_tmpz00_1272);
					}
					BgL_tmpz00_1270 =
						BGl_charze3zf3z10zz__r4_characters_6_6z00(BgL_auxz00_1271,
						BgL_auxz00_1280);
				}
				return BBOOL(BgL_tmpz00_1270);
			}
		}

	}



/* char<=? */
	BGL_EXPORTED_DEF bool_t BGl_charzc3zd3zf3ze3zz__r4_characters_6_6z00(unsigned
		char BgL_char1z00_10, unsigned char BgL_char2z00_11)
	{
		{	/* Ieee/char.scm 155 */
			return (BgL_char1z00_10 <= BgL_char2z00_11);
		}

	}



/* &char<=? */
	obj_t BGl_z62charzc3zd3zf3z81zz__r4_characters_6_6z00(obj_t BgL_envz00_1095,
		obj_t BgL_char1z00_1096, obj_t BgL_char2z00_1097)
	{
		{	/* Ieee/char.scm 155 */
			{	/* Ieee/char.scm 156 */
				bool_t BgL_tmpz00_1292;

				{	/* Ieee/char.scm 156 */
					unsigned char BgL_auxz00_1302;
					unsigned char BgL_auxz00_1293;

					{	/* Ieee/char.scm 156 */
						obj_t BgL_tmpz00_1303;

						if (CHARP(BgL_char2z00_1097))
							{	/* Ieee/char.scm 156 */
								BgL_tmpz00_1303 = BgL_char2z00_1097;
							}
						else
							{
								obj_t BgL_auxz00_1306;

								BgL_auxz00_1306 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 7402)),
									BGl_string1517z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char2z00_1097);
								FAILURE(BgL_auxz00_1306, BFALSE, BFALSE);
							}
						BgL_auxz00_1302 = CCHAR(BgL_tmpz00_1303);
					}
					{	/* Ieee/char.scm 156 */
						obj_t BgL_tmpz00_1294;

						if (CHARP(BgL_char1z00_1096))
							{	/* Ieee/char.scm 156 */
								BgL_tmpz00_1294 = BgL_char1z00_1096;
							}
						else
							{
								obj_t BgL_auxz00_1297;

								BgL_auxz00_1297 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 7402)),
									BGl_string1517z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char1z00_1096);
								FAILURE(BgL_auxz00_1297, BFALSE, BFALSE);
							}
						BgL_auxz00_1293 = CCHAR(BgL_tmpz00_1294);
					}
					BgL_tmpz00_1292 =
						BGl_charzc3zd3zf3ze3zz__r4_characters_6_6z00(BgL_auxz00_1293,
						BgL_auxz00_1302);
				}
				return BBOOL(BgL_tmpz00_1292);
			}
		}

	}



/* char>=? */
	BGL_EXPORTED_DEF bool_t BGl_charze3zd3zf3zc3zz__r4_characters_6_6z00(unsigned
		char BgL_char1z00_12, unsigned char BgL_char2z00_13)
	{
		{	/* Ieee/char.scm 161 */
			return (BgL_char1z00_12 >= BgL_char2z00_13);
		}

	}



/* &char>=? */
	obj_t BGl_z62charze3zd3zf3za1zz__r4_characters_6_6z00(obj_t BgL_envz00_1098,
		obj_t BgL_char1z00_1099, obj_t BgL_char2z00_1100)
	{
		{	/* Ieee/char.scm 161 */
			{	/* Ieee/char.scm 162 */
				bool_t BgL_tmpz00_1314;

				{	/* Ieee/char.scm 162 */
					unsigned char BgL_auxz00_1324;
					unsigned char BgL_auxz00_1315;

					{	/* Ieee/char.scm 162 */
						obj_t BgL_tmpz00_1325;

						if (CHARP(BgL_char2z00_1100))
							{	/* Ieee/char.scm 162 */
								BgL_tmpz00_1325 = BgL_char2z00_1100;
							}
						else
							{
								obj_t BgL_auxz00_1328;

								BgL_auxz00_1328 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 7690)),
									BGl_string1518z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char2z00_1100);
								FAILURE(BgL_auxz00_1328, BFALSE, BFALSE);
							}
						BgL_auxz00_1324 = CCHAR(BgL_tmpz00_1325);
					}
					{	/* Ieee/char.scm 162 */
						obj_t BgL_tmpz00_1316;

						if (CHARP(BgL_char1z00_1099))
							{	/* Ieee/char.scm 162 */
								BgL_tmpz00_1316 = BgL_char1z00_1099;
							}
						else
							{
								obj_t BgL_auxz00_1319;

								BgL_auxz00_1319 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 7690)),
									BGl_string1518z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char1z00_1099);
								FAILURE(BgL_auxz00_1319, BFALSE, BFALSE);
							}
						BgL_auxz00_1315 = CCHAR(BgL_tmpz00_1316);
					}
					BgL_tmpz00_1314 =
						BGl_charze3zd3zf3zc3zz__r4_characters_6_6z00(BgL_auxz00_1315,
						BgL_auxz00_1324);
				}
				return BBOOL(BgL_tmpz00_1314);
			}
		}

	}



/* char-ci=? */
	BGL_EXPORTED_DEF bool_t
		BGl_charzd2cizd3zf3zf2zz__r4_characters_6_6z00(unsigned char
		BgL_char1z00_14, unsigned char BgL_char2z00_15)
	{
		{	/* Ieee/char.scm 167 */
			return (toupper(BgL_char1z00_14) == toupper(BgL_char2z00_15));
		}

	}



/* &char-ci=? */
	obj_t BGl_z62charzd2cizd3zf3z90zz__r4_characters_6_6z00(obj_t BgL_envz00_1101,
		obj_t BgL_char1z00_1102, obj_t BgL_char2z00_1103)
	{
		{	/* Ieee/char.scm 167 */
			{	/* Ieee/char.scm 168 */
				bool_t BgL_tmpz00_1338;

				{	/* Ieee/char.scm 168 */
					unsigned char BgL_auxz00_1348;
					unsigned char BgL_auxz00_1339;

					{	/* Ieee/char.scm 168 */
						obj_t BgL_tmpz00_1349;

						if (CHARP(BgL_char2z00_1103))
							{	/* Ieee/char.scm 168 */
								BgL_tmpz00_1349 = BgL_char2z00_1103;
							}
						else
							{
								obj_t BgL_auxz00_1352;

								BgL_auxz00_1352 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 7988)),
									BGl_string1519z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char2z00_1103);
								FAILURE(BgL_auxz00_1352, BFALSE, BFALSE);
							}
						BgL_auxz00_1348 = CCHAR(BgL_tmpz00_1349);
					}
					{	/* Ieee/char.scm 168 */
						obj_t BgL_tmpz00_1340;

						if (CHARP(BgL_char1z00_1102))
							{	/* Ieee/char.scm 168 */
								BgL_tmpz00_1340 = BgL_char1z00_1102;
							}
						else
							{
								obj_t BgL_auxz00_1343;

								BgL_auxz00_1343 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 7988)),
									BGl_string1519z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char1z00_1102);
								FAILURE(BgL_auxz00_1343, BFALSE, BFALSE);
							}
						BgL_auxz00_1339 = CCHAR(BgL_tmpz00_1340);
					}
					BgL_tmpz00_1338 =
						BGl_charzd2cizd3zf3zf2zz__r4_characters_6_6z00(BgL_auxz00_1339,
						BgL_auxz00_1348);
				}
				return BBOOL(BgL_tmpz00_1338);
			}
		}

	}



/* char-ci<? */
	BGL_EXPORTED_DEF bool_t
		BGl_charzd2cizc3zf3ze2zz__r4_characters_6_6z00(unsigned char
		BgL_char1z00_16, unsigned char BgL_char2z00_17)
	{
		{	/* Ieee/char.scm 173 */
			return (toupper(BgL_char1z00_16) < toupper(BgL_char2z00_17));
		}

	}



/* &char-ci<? */
	obj_t BGl_z62charzd2cizc3zf3z80zz__r4_characters_6_6z00(obj_t BgL_envz00_1104,
		obj_t BgL_char1z00_1105, obj_t BgL_char2z00_1106)
	{
		{	/* Ieee/char.scm 173 */
			{	/* Ieee/char.scm 174 */
				bool_t BgL_tmpz00_1362;

				{	/* Ieee/char.scm 174 */
					unsigned char BgL_auxz00_1372;
					unsigned char BgL_auxz00_1363;

					{	/* Ieee/char.scm 174 */
						obj_t BgL_tmpz00_1373;

						if (CHARP(BgL_char2z00_1106))
							{	/* Ieee/char.scm 174 */
								BgL_tmpz00_1373 = BgL_char2z00_1106;
							}
						else
							{
								obj_t BgL_auxz00_1376;

								BgL_auxz00_1376 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 8305)),
									BGl_string1520z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char2z00_1106);
								FAILURE(BgL_auxz00_1376, BFALSE, BFALSE);
							}
						BgL_auxz00_1372 = CCHAR(BgL_tmpz00_1373);
					}
					{	/* Ieee/char.scm 174 */
						obj_t BgL_tmpz00_1364;

						if (CHARP(BgL_char1z00_1105))
							{	/* Ieee/char.scm 174 */
								BgL_tmpz00_1364 = BgL_char1z00_1105;
							}
						else
							{
								obj_t BgL_auxz00_1367;

								BgL_auxz00_1367 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 8305)),
									BGl_string1520z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char1z00_1105);
								FAILURE(BgL_auxz00_1367, BFALSE, BFALSE);
							}
						BgL_auxz00_1363 = CCHAR(BgL_tmpz00_1364);
					}
					BgL_tmpz00_1362 =
						BGl_charzd2cizc3zf3ze2zz__r4_characters_6_6z00(BgL_auxz00_1363,
						BgL_auxz00_1372);
				}
				return BBOOL(BgL_tmpz00_1362);
			}
		}

	}



/* char-ci>? */
	BGL_EXPORTED_DEF bool_t
		BGl_charzd2cize3zf3zc2zz__r4_characters_6_6z00(unsigned char
		BgL_char1z00_18, unsigned char BgL_char2z00_19)
	{
		{	/* Ieee/char.scm 179 */
			return (toupper(BgL_char1z00_18) > toupper(BgL_char2z00_19));
		}

	}



/* &char-ci>? */
	obj_t BGl_z62charzd2cize3zf3za0zz__r4_characters_6_6z00(obj_t BgL_envz00_1107,
		obj_t BgL_char1z00_1108, obj_t BgL_char2z00_1109)
	{
		{	/* Ieee/char.scm 179 */
			{	/* Ieee/char.scm 180 */
				bool_t BgL_tmpz00_1386;

				{	/* Ieee/char.scm 180 */
					unsigned char BgL_auxz00_1396;
					unsigned char BgL_auxz00_1387;

					{	/* Ieee/char.scm 180 */
						obj_t BgL_tmpz00_1397;

						if (CHARP(BgL_char2z00_1109))
							{	/* Ieee/char.scm 180 */
								BgL_tmpz00_1397 = BgL_char2z00_1109;
							}
						else
							{
								obj_t BgL_auxz00_1400;

								BgL_auxz00_1400 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 8624)),
									BGl_string1521z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char2z00_1109);
								FAILURE(BgL_auxz00_1400, BFALSE, BFALSE);
							}
						BgL_auxz00_1396 = CCHAR(BgL_tmpz00_1397);
					}
					{	/* Ieee/char.scm 180 */
						obj_t BgL_tmpz00_1388;

						if (CHARP(BgL_char1z00_1108))
							{	/* Ieee/char.scm 180 */
								BgL_tmpz00_1388 = BgL_char1z00_1108;
							}
						else
							{
								obj_t BgL_auxz00_1391;

								BgL_auxz00_1391 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 8624)),
									BGl_string1521z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char1z00_1108);
								FAILURE(BgL_auxz00_1391, BFALSE, BFALSE);
							}
						BgL_auxz00_1387 = CCHAR(BgL_tmpz00_1388);
					}
					BgL_tmpz00_1386 =
						BGl_charzd2cize3zf3zc2zz__r4_characters_6_6z00(BgL_auxz00_1387,
						BgL_auxz00_1396);
				}
				return BBOOL(BgL_tmpz00_1386);
			}
		}

	}



/* char-ci<=? */
	BGL_EXPORTED_DEF bool_t
		BGl_charzd2cizc3zd3zf3z31zz__r4_characters_6_6z00(unsigned char
		BgL_char1z00_20, unsigned char BgL_char2z00_21)
	{
		{	/* Ieee/char.scm 185 */
			return (toupper(BgL_char1z00_20) <= toupper(BgL_char2z00_21));
		}

	}



/* &char-ci<=? */
	obj_t BGl_z62charzd2cizc3zd3zf3z53zz__r4_characters_6_6z00(obj_t
		BgL_envz00_1110, obj_t BgL_char1z00_1111, obj_t BgL_char2z00_1112)
	{
		{	/* Ieee/char.scm 185 */
			{	/* Ieee/char.scm 186 */
				bool_t BgL_tmpz00_1410;

				{	/* Ieee/char.scm 186 */
					unsigned char BgL_auxz00_1420;
					unsigned char BgL_auxz00_1411;

					{	/* Ieee/char.scm 186 */
						obj_t BgL_tmpz00_1421;

						if (CHARP(BgL_char2z00_1112))
							{	/* Ieee/char.scm 186 */
								BgL_tmpz00_1421 = BgL_char2z00_1112;
							}
						else
							{
								obj_t BgL_auxz00_1424;

								BgL_auxz00_1424 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 8943)),
									BGl_string1522z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char2z00_1112);
								FAILURE(BgL_auxz00_1424, BFALSE, BFALSE);
							}
						BgL_auxz00_1420 = CCHAR(BgL_tmpz00_1421);
					}
					{	/* Ieee/char.scm 186 */
						obj_t BgL_tmpz00_1412;

						if (CHARP(BgL_char1z00_1111))
							{	/* Ieee/char.scm 186 */
								BgL_tmpz00_1412 = BgL_char1z00_1111;
							}
						else
							{
								obj_t BgL_auxz00_1415;

								BgL_auxz00_1415 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 8943)),
									BGl_string1522z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char1z00_1111);
								FAILURE(BgL_auxz00_1415, BFALSE, BFALSE);
							}
						BgL_auxz00_1411 = CCHAR(BgL_tmpz00_1412);
					}
					BgL_tmpz00_1410 =
						BGl_charzd2cizc3zd3zf3z31zz__r4_characters_6_6z00(BgL_auxz00_1411,
						BgL_auxz00_1420);
				}
				return BBOOL(BgL_tmpz00_1410);
			}
		}

	}



/* char-ci>=? */
	BGL_EXPORTED_DEF bool_t
		BGl_charzd2cize3zd3zf3z11zz__r4_characters_6_6z00(unsigned char
		BgL_char1z00_22, unsigned char BgL_char2z00_23)
	{
		{	/* Ieee/char.scm 191 */
			return (toupper(BgL_char1z00_22) >= toupper(BgL_char2z00_23));
		}

	}



/* &char-ci>=? */
	obj_t BGl_z62charzd2cize3zd3zf3z73zz__r4_characters_6_6z00(obj_t
		BgL_envz00_1113, obj_t BgL_char1z00_1114, obj_t BgL_char2z00_1115)
	{
		{	/* Ieee/char.scm 191 */
			{	/* Ieee/char.scm 192 */
				bool_t BgL_tmpz00_1434;

				{	/* Ieee/char.scm 192 */
					unsigned char BgL_auxz00_1444;
					unsigned char BgL_auxz00_1435;

					{	/* Ieee/char.scm 192 */
						obj_t BgL_tmpz00_1445;

						if (CHARP(BgL_char2z00_1115))
							{	/* Ieee/char.scm 192 */
								BgL_tmpz00_1445 = BgL_char2z00_1115;
							}
						else
							{
								obj_t BgL_auxz00_1448;

								BgL_auxz00_1448 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 9262)),
									BGl_string1523z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char2z00_1115);
								FAILURE(BgL_auxz00_1448, BFALSE, BFALSE);
							}
						BgL_auxz00_1444 = CCHAR(BgL_tmpz00_1445);
					}
					{	/* Ieee/char.scm 192 */
						obj_t BgL_tmpz00_1436;

						if (CHARP(BgL_char1z00_1114))
							{	/* Ieee/char.scm 192 */
								BgL_tmpz00_1436 = BgL_char1z00_1114;
							}
						else
							{
								obj_t BgL_auxz00_1439;

								BgL_auxz00_1439 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 9262)),
									BGl_string1523z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char1z00_1114);
								FAILURE(BgL_auxz00_1439, BFALSE, BFALSE);
							}
						BgL_auxz00_1435 = CCHAR(BgL_tmpz00_1436);
					}
					BgL_tmpz00_1434 =
						BGl_charzd2cize3zd3zf3z11zz__r4_characters_6_6z00(BgL_auxz00_1435,
						BgL_auxz00_1444);
				}
				return BBOOL(BgL_tmpz00_1434);
			}
		}

	}



/* char-alphabetic? */
	BGL_EXPORTED_DEF bool_t
		BGl_charzd2alphabeticzf3z21zz__r4_characters_6_6z00(unsigned char
		BgL_charz00_24)
	{
		{	/* Ieee/char.scm 197 */
			return isalpha(BgL_charz00_24);
		}

	}



/* &char-alphabetic? */
	obj_t BGl_z62charzd2alphabeticzf3z43zz__r4_characters_6_6z00(obj_t
		BgL_envz00_1116, obj_t BgL_charz00_1117)
	{
		{	/* Ieee/char.scm 197 */
			{	/* Ieee/char.scm 199 */
				bool_t BgL_tmpz00_1456;

				{	/* Ieee/char.scm 199 */
					unsigned char BgL_auxz00_1457;

					{	/* Ieee/char.scm 199 */
						obj_t BgL_tmpz00_1458;

						if (CHARP(BgL_charz00_1117))
							{	/* Ieee/char.scm 199 */
								BgL_tmpz00_1458 = BgL_charz00_1117;
							}
						else
							{
								obj_t BgL_auxz00_1461;

								BgL_auxz00_1461 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 9598)),
									BGl_string1524z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_charz00_1117);
								FAILURE(BgL_auxz00_1461, BFALSE, BFALSE);
							}
						BgL_auxz00_1457 = CCHAR(BgL_tmpz00_1458);
					}
					BgL_tmpz00_1456 =
						BGl_charzd2alphabeticzf3z21zz__r4_characters_6_6z00
						(BgL_auxz00_1457);
				}
				return BBOOL(BgL_tmpz00_1456);
			}
		}

	}



/* char-numeric? */
	BGL_EXPORTED_DEF bool_t
		BGl_charzd2numericzf3z21zz__r4_characters_6_6z00(unsigned char
		BgL_charz00_25)
	{
		{	/* Ieee/char.scm 208 */
			return isdigit(BgL_charz00_25);
		}

	}



/* &char-numeric? */
	obj_t BGl_z62charzd2numericzf3z43zz__r4_characters_6_6z00(obj_t
		BgL_envz00_1118, obj_t BgL_charz00_1119)
	{
		{	/* Ieee/char.scm 208 */
			{	/* Ieee/char.scm 210 */
				bool_t BgL_tmpz00_1469;

				{	/* Ieee/char.scm 210 */
					unsigned char BgL_auxz00_1470;

					{	/* Ieee/char.scm 210 */
						obj_t BgL_tmpz00_1471;

						if (CHARP(BgL_charz00_1119))
							{	/* Ieee/char.scm 210 */
								BgL_tmpz00_1471 = BgL_charz00_1119;
							}
						else
							{
								obj_t BgL_auxz00_1474;

								BgL_auxz00_1474 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 10040)),
									BGl_string1525z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_charz00_1119);
								FAILURE(BgL_auxz00_1474, BFALSE, BFALSE);
							}
						BgL_auxz00_1470 = CCHAR(BgL_tmpz00_1471);
					}
					BgL_tmpz00_1469 =
						BGl_charzd2numericzf3z21zz__r4_characters_6_6z00(BgL_auxz00_1470);
				}
				return BBOOL(BgL_tmpz00_1469);
			}
		}

	}



/* char-whitespace? */
	BGL_EXPORTED_DEF bool_t
		BGl_charzd2whitespacezf3z21zz__r4_characters_6_6z00(unsigned char
		BgL_charz00_26)
	{
		{	/* Ieee/char.scm 218 */
			return isspace(BgL_charz00_26);
		}

	}



/* &char-whitespace? */
	obj_t BGl_z62charzd2whitespacezf3z43zz__r4_characters_6_6z00(obj_t
		BgL_envz00_1120, obj_t BgL_charz00_1121)
	{
		{	/* Ieee/char.scm 218 */
			{	/* Ieee/char.scm 220 */
				bool_t BgL_tmpz00_1482;

				{	/* Ieee/char.scm 220 */
					unsigned char BgL_auxz00_1483;

					{	/* Ieee/char.scm 220 */
						obj_t BgL_tmpz00_1484;

						if (CHARP(BgL_charz00_1121))
							{	/* Ieee/char.scm 220 */
								BgL_tmpz00_1484 = BgL_charz00_1121;
							}
						else
							{
								obj_t BgL_auxz00_1487;

								BgL_auxz00_1487 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 10423)),
									BGl_string1526z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_charz00_1121);
								FAILURE(BgL_auxz00_1487, BFALSE, BFALSE);
							}
						BgL_auxz00_1483 = CCHAR(BgL_tmpz00_1484);
					}
					BgL_tmpz00_1482 =
						BGl_charzd2whitespacezf3z21zz__r4_characters_6_6z00
						(BgL_auxz00_1483);
				}
				return BBOOL(BgL_tmpz00_1482);
			}
		}

	}



/* char-upper-case? */
	BGL_EXPORTED_DEF bool_t
		BGl_charzd2upperzd2casezf3zf3zz__r4_characters_6_6z00(unsigned char
		BgL_charz00_27)
	{
		{	/* Ieee/char.scm 229 */
			return isupper(BgL_charz00_27);
		}

	}



/* &char-upper-case? */
	obj_t BGl_z62charzd2upperzd2casezf3z91zz__r4_characters_6_6z00(obj_t
		BgL_envz00_1122, obj_t BgL_charz00_1123)
	{
		{	/* Ieee/char.scm 229 */
			{	/* Ieee/char.scm 231 */
				bool_t BgL_tmpz00_1495;

				{	/* Ieee/char.scm 231 */
					unsigned char BgL_auxz00_1496;

					{	/* Ieee/char.scm 231 */
						obj_t BgL_tmpz00_1497;

						if (CHARP(BgL_charz00_1123))
							{	/* Ieee/char.scm 231 */
								BgL_tmpz00_1497 = BgL_charz00_1123;
							}
						else
							{
								obj_t BgL_auxz00_1500;

								BgL_auxz00_1500 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 10859)),
									BGl_string1527z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_charz00_1123);
								FAILURE(BgL_auxz00_1500, BFALSE, BFALSE);
							}
						BgL_auxz00_1496 = CCHAR(BgL_tmpz00_1497);
					}
					BgL_tmpz00_1495 =
						BGl_charzd2upperzd2casezf3zf3zz__r4_characters_6_6z00
						(BgL_auxz00_1496);
				}
				return BBOOL(BgL_tmpz00_1495);
			}
		}

	}



/* char-lower-case? */
	BGL_EXPORTED_DEF bool_t
		BGl_charzd2lowerzd2casezf3zf3zz__r4_characters_6_6z00(unsigned char
		BgL_charz00_28)
	{
		{	/* Ieee/char.scm 239 */
			return islower(BgL_charz00_28);
		}

	}



/* &char-lower-case? */
	obj_t BGl_z62charzd2lowerzd2casezf3z91zz__r4_characters_6_6z00(obj_t
		BgL_envz00_1124, obj_t BgL_charz00_1125)
	{
		{	/* Ieee/char.scm 239 */
			{	/* Ieee/char.scm 241 */
				bool_t BgL_tmpz00_1508;

				{	/* Ieee/char.scm 241 */
					unsigned char BgL_auxz00_1509;

					{	/* Ieee/char.scm 241 */
						obj_t BgL_tmpz00_1510;

						if (CHARP(BgL_charz00_1125))
							{	/* Ieee/char.scm 241 */
								BgL_tmpz00_1510 = BgL_charz00_1125;
							}
						else
							{
								obj_t BgL_auxz00_1513;

								BgL_auxz00_1513 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 11245)),
									BGl_string1528z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_charz00_1125);
								FAILURE(BgL_auxz00_1513, BFALSE, BFALSE);
							}
						BgL_auxz00_1509 = CCHAR(BgL_tmpz00_1510);
					}
					BgL_tmpz00_1508 =
						BGl_charzd2lowerzd2casezf3zf3zz__r4_characters_6_6z00
						(BgL_auxz00_1509);
				}
				return BBOOL(BgL_tmpz00_1508);
			}
		}

	}



/* char->integer */
	BGL_EXPORTED_DEF long
		BGl_charzd2ze3integerz31zz__r4_characters_6_6z00(unsigned char
		BgL_charz00_29)
	{
		{	/* Ieee/char.scm 249 */
			return (BgL_charz00_29);
		}

	}



/* &char->integer */
	obj_t BGl_z62charzd2ze3integerz53zz__r4_characters_6_6z00(obj_t
		BgL_envz00_1126, obj_t BgL_charz00_1127)
	{
		{	/* Ieee/char.scm 249 */
			{	/* Ieee/char.scm 250 */
				long BgL_tmpz00_1521;

				{	/* Ieee/char.scm 250 */
					unsigned char BgL_auxz00_1522;

					{	/* Ieee/char.scm 250 */
						obj_t BgL_tmpz00_1523;

						if (CHARP(BgL_charz00_1127))
							{	/* Ieee/char.scm 250 */
								BgL_tmpz00_1523 = BgL_charz00_1127;
							}
						else
							{
								obj_t BgL_auxz00_1526;

								BgL_auxz00_1526 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 11599)),
									BGl_string1529z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_charz00_1127);
								FAILURE(BgL_auxz00_1526, BFALSE, BFALSE);
							}
						BgL_auxz00_1522 = CCHAR(BgL_tmpz00_1523);
					}
					BgL_tmpz00_1521 =
						BGl_charzd2ze3integerz31zz__r4_characters_6_6z00(BgL_auxz00_1522);
				}
				return BINT(BgL_tmpz00_1521);
			}
		}

	}



/* integer->char */
	BGL_EXPORTED_DEF unsigned char
		BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long BgL_intz00_30)
	{
		{	/* Ieee/char.scm 255 */
			{	/* Ieee/char.scm 256 */
				bool_t BgL_test1621z00_1533;

				if ((BgL_intz00_30 >= ((long) 0)))
					{	/* Ieee/char.scm 256 */
						BgL_test1621z00_1533 = (BgL_intz00_30 <= ((long) 255));
					}
				else
					{	/* Ieee/char.scm 256 */
						BgL_test1621z00_1533 = ((bool_t) 0);
					}
				if (BgL_test1621z00_1533)
					{	/* Ieee/char.scm 256 */
						return (BgL_intz00_30);
					}
				else
					{	/* Ieee/char.scm 256 */
						return
							CCHAR(BGl_errorz00zz__errorz00
							(BGl_string1530z00zz__r4_characters_6_6z00,
								BGl_string1531z00zz__r4_characters_6_6z00,
								BINT(BgL_intz00_30)));
					}
			}
		}

	}



/* &integer->char */
	obj_t BGl_z62integerzd2ze3charz53zz__r4_characters_6_6z00(obj_t
		BgL_envz00_1128, obj_t BgL_intz00_1129)
	{
		{	/* Ieee/char.scm 255 */
			{	/* Ieee/char.scm 256 */
				unsigned char BgL_tmpz00_1541;

				{	/* Ieee/char.scm 256 */
					long BgL_auxz00_1542;

					{	/* Ieee/char.scm 256 */
						obj_t BgL_tmpz00_1543;

						if (INTEGERP(BgL_intz00_1129))
							{	/* Ieee/char.scm 256 */
								BgL_tmpz00_1543 = BgL_intz00_1129;
							}
						else
							{
								obj_t BgL_auxz00_1546;

								BgL_auxz00_1546 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 11877)),
									BGl_string1532z00zz__r4_characters_6_6z00,
									BGl_string1533z00zz__r4_characters_6_6z00, BgL_intz00_1129);
								FAILURE(BgL_auxz00_1546, BFALSE, BFALSE);
							}
						BgL_auxz00_1542 = (long) CINT(BgL_tmpz00_1543);
					}
					BgL_tmpz00_1541 =
						BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_auxz00_1542);
				}
				return BCHAR(BgL_tmpz00_1541);
			}
		}

	}



/* integer->char-ur */
	BGL_EXPORTED_DEF unsigned char
		BGl_integerzd2ze3charzd2urze3zz__r4_characters_6_6z00(long BgL_intz00_31)
	{
		{	/* Ieee/char.scm 263 */
			return (BgL_intz00_31);
		}

	}



/* &integer->char-ur */
	obj_t BGl_z62integerzd2ze3charzd2urz81zz__r4_characters_6_6z00(obj_t
		BgL_envz00_1130, obj_t BgL_intz00_1131)
	{
		{	/* Ieee/char.scm 263 */
			{	/* Ieee/char.scm 264 */
				unsigned char BgL_tmpz00_1554;

				{	/* Ieee/char.scm 264 */
					long BgL_auxz00_1555;

					{	/* Ieee/char.scm 264 */
						obj_t BgL_tmpz00_1556;

						if (INTEGERP(BgL_intz00_1131))
							{	/* Ieee/char.scm 264 */
								BgL_tmpz00_1556 = BgL_intz00_1131;
							}
						else
							{
								obj_t BgL_auxz00_1559;

								BgL_auxz00_1559 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 12268)),
									BGl_string1534z00zz__r4_characters_6_6z00,
									BGl_string1533z00zz__r4_characters_6_6z00, BgL_intz00_1131);
								FAILURE(BgL_auxz00_1559, BFALSE, BFALSE);
							}
						BgL_auxz00_1555 = (long) CINT(BgL_tmpz00_1556);
					}
					BgL_tmpz00_1554 =
						BGl_integerzd2ze3charzd2urze3zz__r4_characters_6_6z00
						(BgL_auxz00_1555);
				}
				return BCHAR(BgL_tmpz00_1554);
			}
		}

	}



/* char-upcase */
	BGL_EXPORTED_DEF unsigned char
		BGl_charzd2upcasezd2zz__r4_characters_6_6z00(unsigned char BgL_charz00_32)
	{
		{	/* Ieee/char.scm 269 */
			return toupper(BgL_charz00_32);
		}

	}



/* &char-upcase */
	obj_t BGl_z62charzd2upcasezb0zz__r4_characters_6_6z00(obj_t BgL_envz00_1132,
		obj_t BgL_charz00_1133)
	{
		{	/* Ieee/char.scm 269 */
			{	/* Ieee/char.scm 270 */
				unsigned char BgL_tmpz00_1567;

				{	/* Ieee/char.scm 270 */
					unsigned char BgL_auxz00_1568;

					{	/* Ieee/char.scm 270 */
						obj_t BgL_tmpz00_1569;

						if (CHARP(BgL_charz00_1133))
							{	/* Ieee/char.scm 270 */
								BgL_tmpz00_1569 = BgL_charz00_1133;
							}
						else
							{
								obj_t BgL_auxz00_1572;

								BgL_auxz00_1572 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 12552)),
									BGl_string1535z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_charz00_1133);
								FAILURE(BgL_auxz00_1572, BFALSE, BFALSE);
							}
						BgL_auxz00_1568 = CCHAR(BgL_tmpz00_1569);
					}
					BgL_tmpz00_1567 =
						BGl_charzd2upcasezd2zz__r4_characters_6_6z00(BgL_auxz00_1568);
				}
				return BCHAR(BgL_tmpz00_1567);
			}
		}

	}



/* char-downcase */
	BGL_EXPORTED_DEF unsigned char
		BGl_charzd2downcasezd2zz__r4_characters_6_6z00(unsigned char BgL_charz00_33)
	{
		{	/* Ieee/char.scm 275 */
			return tolower(BgL_charz00_33);
		}

	}



/* &char-downcase */
	obj_t BGl_z62charzd2downcasezb0zz__r4_characters_6_6z00(obj_t BgL_envz00_1134,
		obj_t BgL_charz00_1135)
	{
		{	/* Ieee/char.scm 275 */
			{	/* Ieee/char.scm 276 */
				unsigned char BgL_tmpz00_1580;

				{	/* Ieee/char.scm 276 */
					unsigned char BgL_auxz00_1581;

					{	/* Ieee/char.scm 276 */
						obj_t BgL_tmpz00_1582;

						if (CHARP(BgL_charz00_1135))
							{	/* Ieee/char.scm 276 */
								BgL_tmpz00_1582 = BgL_charz00_1135;
							}
						else
							{
								obj_t BgL_auxz00_1585;

								BgL_auxz00_1585 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 12837)),
									BGl_string1536z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_charz00_1135);
								FAILURE(BgL_auxz00_1585, BFALSE, BFALSE);
							}
						BgL_auxz00_1581 = CCHAR(BgL_tmpz00_1582);
					}
					BgL_tmpz00_1580 =
						BGl_charzd2downcasezd2zz__r4_characters_6_6z00(BgL_auxz00_1581);
				}
				return BCHAR(BgL_tmpz00_1580);
			}
		}

	}



/* char-or */
	BGL_EXPORTED_DEF unsigned char
		BGl_charzd2orzd2zz__r4_characters_6_6z00(unsigned char BgL_char1z00_34,
		unsigned char BgL_char2z00_35)
	{
		{	/* Ieee/char.scm 281 */
			return (BgL_char1z00_34 | BgL_char2z00_35);
		}

	}



/* &char-or */
	obj_t BGl_z62charzd2orzb0zz__r4_characters_6_6z00(obj_t BgL_envz00_1136,
		obj_t BgL_char1z00_1137, obj_t BgL_char2z00_1138)
	{
		{	/* Ieee/char.scm 281 */
			{	/* Ieee/char.scm 282 */
				unsigned char BgL_tmpz00_1593;

				{	/* Ieee/char.scm 282 */
					unsigned char BgL_auxz00_1603;
					unsigned char BgL_auxz00_1594;

					{	/* Ieee/char.scm 282 */
						obj_t BgL_tmpz00_1604;

						if (CHARP(BgL_char2z00_1138))
							{	/* Ieee/char.scm 282 */
								BgL_tmpz00_1604 = BgL_char2z00_1138;
							}
						else
							{
								obj_t BgL_auxz00_1607;

								BgL_auxz00_1607 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 13131)),
									BGl_string1537z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char2z00_1138);
								FAILURE(BgL_auxz00_1607, BFALSE, BFALSE);
							}
						BgL_auxz00_1603 = CCHAR(BgL_tmpz00_1604);
					}
					{	/* Ieee/char.scm 282 */
						obj_t BgL_tmpz00_1595;

						if (CHARP(BgL_char1z00_1137))
							{	/* Ieee/char.scm 282 */
								BgL_tmpz00_1595 = BgL_char1z00_1137;
							}
						else
							{
								obj_t BgL_auxz00_1598;

								BgL_auxz00_1598 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 13131)),
									BGl_string1537z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char1z00_1137);
								FAILURE(BgL_auxz00_1598, BFALSE, BFALSE);
							}
						BgL_auxz00_1594 = CCHAR(BgL_tmpz00_1595);
					}
					BgL_tmpz00_1593 =
						BGl_charzd2orzd2zz__r4_characters_6_6z00(BgL_auxz00_1594,
						BgL_auxz00_1603);
				}
				return BCHAR(BgL_tmpz00_1593);
			}
		}

	}



/* char-and */
	BGL_EXPORTED_DEF unsigned char
		BGl_charzd2andzd2zz__r4_characters_6_6z00(unsigned char BgL_char1z00_36,
		unsigned char BgL_char2z00_37)
	{
		{	/* Ieee/char.scm 287 */
			return (BgL_char1z00_36 & BgL_char2z00_37);
		}

	}



/* &char-and */
	obj_t BGl_z62charzd2andzb0zz__r4_characters_6_6z00(obj_t BgL_envz00_1139,
		obj_t BgL_char1z00_1140, obj_t BgL_char2z00_1141)
	{
		{	/* Ieee/char.scm 287 */
			{	/* Ieee/char.scm 288 */
				unsigned char BgL_tmpz00_1615;

				{	/* Ieee/char.scm 288 */
					unsigned char BgL_auxz00_1625;
					unsigned char BgL_auxz00_1616;

					{	/* Ieee/char.scm 288 */
						obj_t BgL_tmpz00_1626;

						if (CHARP(BgL_char2z00_1141))
							{	/* Ieee/char.scm 288 */
								BgL_tmpz00_1626 = BgL_char2z00_1141;
							}
						else
							{
								obj_t BgL_auxz00_1629;

								BgL_auxz00_1629 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 13420)),
									BGl_string1538z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char2z00_1141);
								FAILURE(BgL_auxz00_1629, BFALSE, BFALSE);
							}
						BgL_auxz00_1625 = CCHAR(BgL_tmpz00_1626);
					}
					{	/* Ieee/char.scm 288 */
						obj_t BgL_tmpz00_1617;

						if (CHARP(BgL_char1z00_1140))
							{	/* Ieee/char.scm 288 */
								BgL_tmpz00_1617 = BgL_char1z00_1140;
							}
						else
							{
								obj_t BgL_auxz00_1620;

								BgL_auxz00_1620 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 13420)),
									BGl_string1538z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char1z00_1140);
								FAILURE(BgL_auxz00_1620, BFALSE, BFALSE);
							}
						BgL_auxz00_1616 = CCHAR(BgL_tmpz00_1617);
					}
					BgL_tmpz00_1615 =
						BGl_charzd2andzd2zz__r4_characters_6_6z00(BgL_auxz00_1616,
						BgL_auxz00_1625);
				}
				return BCHAR(BgL_tmpz00_1615);
			}
		}

	}



/* char-not */
	BGL_EXPORTED_DEF unsigned char
		BGl_charzd2notzd2zz__r4_characters_6_6z00(unsigned char BgL_char1z00_38)
	{
		{	/* Ieee/char.scm 293 */
			return ~(BgL_char1z00_38);
		}

	}



/* &char-not */
	obj_t BGl_z62charzd2notzb0zz__r4_characters_6_6z00(obj_t BgL_envz00_1142,
		obj_t BgL_char1z00_1143)
	{
		{	/* Ieee/char.scm 293 */
			{	/* Ieee/char.scm 294 */
				unsigned char BgL_tmpz00_1637;

				{	/* Ieee/char.scm 294 */
					unsigned char BgL_auxz00_1638;

					{	/* Ieee/char.scm 294 */
						obj_t BgL_tmpz00_1639;

						if (CHARP(BgL_char1z00_1143))
							{	/* Ieee/char.scm 294 */
								BgL_tmpz00_1639 = BgL_char1z00_1143;
							}
						else
							{
								obj_t BgL_auxz00_1642;

								BgL_auxz00_1642 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1512z00zz__r4_characters_6_6z00,
									BINT(((long) 13704)),
									BGl_string1539z00zz__r4_characters_6_6z00,
									BGl_string1514z00zz__r4_characters_6_6z00, BgL_char1z00_1143);
								FAILURE(BgL_auxz00_1642, BFALSE, BFALSE);
							}
						BgL_auxz00_1638 = CCHAR(BgL_tmpz00_1639);
					}
					BgL_tmpz00_1637 =
						BGl_charzd2notzd2zz__r4_characters_6_6z00(BgL_auxz00_1638);
				}
				return BCHAR(BgL_tmpz00_1637);
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_characters_6_6z00()
	{
		{	/* Ieee/char.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1540z00zz__r4_characters_6_6z00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1540z00zz__r4_characters_6_6z00));
		}

	}

#ifdef __cplusplus
}
#endif
