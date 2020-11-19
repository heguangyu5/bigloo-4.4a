/*===========================================================================*/
/*   (Lalr/rewrite.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Lalr/rewrite.scm -indent -o objs/obj_u/Lalr/rewrite.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	static long BGl_za2maxzd2termza2zd2zz__lalr_rewritez00;
	extern obj_t BGl_nvarsz00zz__lalr_globalz00;
	static obj_t BGl_z62cleanzd2plistzb0zz__lalr_rewritez00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__lalr_rewritez00 = BUNSPEC;
	extern obj_t BGl_nsymsz00zz__lalr_globalz00;
	static obj_t BGl_toplevelzd2initzd2zz__lalr_rewritez00();
	extern obj_t BGl_nrulesz00zz__lalr_globalz00;
	extern obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zz__lalr_rewritez00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__lalr_rewritez00();
	static bool_t BGl_makezd2symzd2tablez00zz__lalr_rewritez00();
	extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t make_vector(long, obj_t);
	extern obj_t BGl_rempropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__lalr_rewritez00();
	static long BGl_setzd2ntzd2noz12z12zz__lalr_rewritez00(obj_t);
	extern obj_t BGl_grammarz00zz__lalr_globalz00;
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2plistza2z00zz__lalr_rewritez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2symvza2z00zz__lalr_rewritez00 = BUNSPEC;
	extern obj_t BGl_ntermsz00zz__lalr_globalz00;
	BGL_EXPORTED_DECL obj_t BGl_rewritezd2grammarz12zc0zz__lalr_rewritez00(obj_t);
	static obj_t BGl_list1741z00zz__lalr_rewritez00 = BUNSPEC;
	static obj_t BGl_symbolzd2ze3symbolzf2bindingzc3zz__lalr_rewritez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__lalr_rewritez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__lalr_globalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_list1750z00zz__lalr_rewritez00 = BUNSPEC;
	static obj_t BGl_list1759z00zz__lalr_rewritez00 = BUNSPEC;
	static long BGl_za2maxzd2ntza2zd2zz__lalr_rewritez00;
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__lalr_rewritez00();
	extern long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__lalr_rewritez00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__lalr_rewritez00();
	extern obj_t BGl_nitemsz00zz__lalr_globalz00;
	static obj_t BGl_z62rewritezd2grammarz12za2zz__lalr_rewritez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cleanzd2plistzd2zz__lalr_rewritez00();
	extern obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_setzd2symzd2noz12z12zz__lalr_rewritez00(obj_t);
	extern obj_t BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_keyword1751z00zz__lalr_rewritez00 = BUNSPEC;
	static obj_t BGl_keyword1753z00zz__lalr_rewritez00 = BUNSPEC;
	static obj_t BGl_keyword1755z00zz__lalr_rewritez00 = BUNSPEC;
	extern obj_t bstring_to_keyword(obj_t);
	static obj_t BGl_symbol1732z00zz__lalr_rewritez00 = BUNSPEC;
	static obj_t BGl_symbol1734z00zz__lalr_rewritez00 = BUNSPEC;
	static obj_t BGl_symbol1736z00zz__lalr_rewritez00 = BUNSPEC;
	static obj_t BGl_symbol1738z00zz__lalr_rewritez00 = BUNSPEC;
	static obj_t BGl_symbol1742z00zz__lalr_rewritez00 = BUNSPEC;
	static obj_t BGl_symbol1744z00zz__lalr_rewritez00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cleanzd2plistzd2envz00zz__lalr_rewritez00,
		BgL_bgl_za762cleanza7d2plist1764z00,
		BGl_z62cleanzd2plistzb0zz__lalr_rewritez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1733z00zz__lalr_rewritez00,
		BgL_bgl_string1733za700za7za7_1765za7, "nt?", 3);
	      DEFINE_STRING(BGl_string1735z00zz__lalr_rewritez00,
		BgL_bgl_string1735za700za7za7_1766za7, "prec", 4);
	      DEFINE_STRING(BGl_string1737z00zz__lalr_rewritez00,
		BgL_bgl_string1737za700za7za7_1767za7, "sym-no", 6);
	      DEFINE_STRING(BGl_string1739z00zz__lalr_rewritez00,
		BgL_bgl_string1739za700za7za7_1768za7, "lalr-grammar", 12);
	      DEFINE_STRING(BGl_string1740z00zz__lalr_rewritez00,
		BgL_bgl_string1740za700za7za7_1769za7, "Grammar symbol already defined",
		30);
	      DEFINE_STRING(BGl_string1743z00zz__lalr_rewritez00,
		BgL_bgl_string1743za700za7za7_1770za7, "*eoi*", 5);
	      DEFINE_STRING(BGl_string1745z00zz__lalr_rewritez00,
		BgL_bgl_string1745za700za7za7_1771za7, "*start*", 7);
	      DEFINE_STRING(BGl_string1746z00zz__lalr_rewritez00,
		BgL_bgl_string1746za700za7za7_1772za7, "Non-terminal defined twice", 26);
	      DEFINE_STRING(BGl_string1747z00zz__lalr_rewritez00,
		BgL_bgl_string1747za700za7za7_1773za7, "LHS must be a symbol", 20);
	      DEFINE_STRING(BGl_string1748z00zz__lalr_rewritez00,
		BgL_bgl_string1748za700za7za7_1774za7, "Bad rule specification", 22);
	      DEFINE_STRING(BGl_string1749z00zz__lalr_rewritez00,
		BgL_bgl_string1749za700za7za7_1775za7, "Ill-formed grammar", 18);
	      DEFINE_STRING(BGl_string1752z00zz__lalr_rewritez00,
		BgL_bgl_string1752za700za7za7_1776za7, "left", 4);
	      DEFINE_STRING(BGl_string1754z00zz__lalr_rewritez00,
		BgL_bgl_string1754za700za7za7_1777za7, "right", 5);
	      DEFINE_STRING(BGl_string1756z00zz__lalr_rewritez00,
		BgL_bgl_string1756za700za7za7_1778za7, "none", 4);
	      DEFINE_STRING(BGl_string1757z00zz__lalr_rewritez00,
		BgL_bgl_string1757za700za7za7_1779za7, "Bad terminal", 12);
	      DEFINE_STRING(BGl_string1758z00zz__lalr_rewritez00,
		BgL_bgl_string1758za700za7za7_1780za7, "Invalid semantic action", 23);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rewritezd2grammarz12zd2envz12zz__lalr_rewritez00,
		BgL_bgl_za762rewriteza7d2gra1781z00,
		BGl_z62rewritezd2grammarz12za2zz__lalr_rewritez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1760z00zz__lalr_rewritez00,
		BgL_bgl_string1760za700za7za7_1782za7, "Undefined symbol", 16);
	      DEFINE_STRING(BGl_string1761z00zz__lalr_rewritez00,
		BgL_bgl_string1761za700za7za7_1783za7, "Invalid symbol in right-hand side",
		33);
	      DEFINE_STRING(BGl_string1762z00zz__lalr_rewritez00,
		BgL_bgl_string1762za700za7za7_1784za7, "Bad right-hand side", 19);
	      DEFINE_STRING(BGl_string1763z00zz__lalr_rewritez00,
		BgL_bgl_string1763za700za7za7_1785za7, "__lalr_rewrite", 14);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__lalr_rewritez00));
		     ADD_ROOT((void *) (&BGl_za2plistza2z00zz__lalr_rewritez00));
		     ADD_ROOT((void *) (&BGl_za2symvza2z00zz__lalr_rewritez00));
		     ADD_ROOT((void *) (&BGl_list1741z00zz__lalr_rewritez00));
		     ADD_ROOT((void *) (&BGl_list1750z00zz__lalr_rewritez00));
		     ADD_ROOT((void *) (&BGl_list1759z00zz__lalr_rewritez00));
		     ADD_ROOT((void *) (&BGl_keyword1751z00zz__lalr_rewritez00));
		     ADD_ROOT((void *) (&BGl_keyword1753z00zz__lalr_rewritez00));
		     ADD_ROOT((void *) (&BGl_keyword1755z00zz__lalr_rewritez00));
		     ADD_ROOT((void *) (&BGl_symbol1732z00zz__lalr_rewritez00));
		     ADD_ROOT((void *) (&BGl_symbol1734z00zz__lalr_rewritez00));
		     ADD_ROOT((void *) (&BGl_symbol1736z00zz__lalr_rewritez00));
		     ADD_ROOT((void *) (&BGl_symbol1738z00zz__lalr_rewritez00));
		     ADD_ROOT((void *) (&BGl_symbol1742z00zz__lalr_rewritez00));
		     ADD_ROOT((void *) (&BGl_symbol1744z00zz__lalr_rewritez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__lalr_rewritez00(long
		BgL_checksumz00_2081, char *BgL_fromz00_2082)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__lalr_rewritez00))
				{
					BGl_requirezd2initializa7ationz75zz__lalr_rewritez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__lalr_rewritez00();
					BGl_cnstzd2initzd2zz__lalr_rewritez00();
					BGl_importedzd2moduleszd2initz00zz__lalr_rewritez00();
					return BGl_toplevelzd2initzd2zz__lalr_rewritez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__lalr_rewritez00()
	{
		{	/* Lalr/rewrite.scm 11 */
			BGl_symbol1732z00zz__lalr_rewritez00 =
				bstring_to_symbol(BGl_string1733z00zz__lalr_rewritez00);
			BGl_symbol1734z00zz__lalr_rewritez00 =
				bstring_to_symbol(BGl_string1735z00zz__lalr_rewritez00);
			BGl_symbol1736z00zz__lalr_rewritez00 =
				bstring_to_symbol(BGl_string1737z00zz__lalr_rewritez00);
			BGl_symbol1738z00zz__lalr_rewritez00 =
				bstring_to_symbol(BGl_string1739z00zz__lalr_rewritez00);
			BGl_symbol1742z00zz__lalr_rewritez00 =
				bstring_to_symbol(BGl_string1743z00zz__lalr_rewritez00);
			BGl_symbol1744z00zz__lalr_rewritez00 =
				bstring_to_symbol(BGl_string1745z00zz__lalr_rewritez00);
			BGl_list1741z00zz__lalr_rewritez00 =
				MAKE_YOUNG_PAIR(BGl_symbol1742z00zz__lalr_rewritez00,
				MAKE_YOUNG_PAIR(BGl_symbol1744z00zz__lalr_rewritez00, BNIL));
			BGl_keyword1751z00zz__lalr_rewritez00 =
				bstring_to_keyword(BGl_string1752z00zz__lalr_rewritez00);
			BGl_keyword1753z00zz__lalr_rewritez00 =
				bstring_to_keyword(BGl_string1754z00zz__lalr_rewritez00);
			BGl_keyword1755z00zz__lalr_rewritez00 =
				bstring_to_keyword(BGl_string1756z00zz__lalr_rewritez00);
			BGl_list1750z00zz__lalr_rewritez00 =
				MAKE_YOUNG_PAIR(BGl_keyword1751z00zz__lalr_rewritez00,
				MAKE_YOUNG_PAIR(BGl_keyword1753z00zz__lalr_rewritez00,
					MAKE_YOUNG_PAIR(BGl_keyword1755z00zz__lalr_rewritez00, BNIL)));
			return (BGl_list1759z00zz__lalr_rewritez00 =
				MAKE_YOUNG_PAIR(BBOOL(((bool_t) 0)), BNIL), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__lalr_rewritez00()
	{
		{	/* Lalr/rewrite.scm 11 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__lalr_rewritez00()
	{
		{	/* Lalr/rewrite.scm 11 */
			BGl_za2plistza2z00zz__lalr_rewritez00 = BFALSE;
			BGl_za2symvza2z00zz__lalr_rewritez00 = BFALSE;
			BGl_za2maxzd2termza2zd2zz__lalr_rewritez00 = ((long) 0);
			return (BGl_za2maxzd2ntza2zd2zz__lalr_rewritez00 = ((long) 1), BUNSPEC);
		}

	}



/* clean-plist */
	BGL_EXPORTED_DEF obj_t BGl_cleanzd2plistzd2zz__lalr_rewritez00()
	{
		{	/* Lalr/rewrite.scm 56 */
			{
				obj_t BgL_lz00_1137;

				{	/* Lalr/rewrite.scm 57 */
					bool_t BgL_tmpz00_2107;

					BgL_lz00_1137 = BGl_za2plistza2z00zz__lalr_rewritez00;
				BgL_zc3z04anonymousza31198ze3z87_1138:
					if (PAIRP(BgL_lz00_1137))
						{	/* Lalr/rewrite.scm 59 */
							obj_t BgL_symz00_1140;

							BgL_symz00_1140 = CAR(BgL_lz00_1137);
							if (CBOOL(BGl_getpropz00zz__r4_symbols_6_4z00(BgL_symz00_1140,
										BGl_symbol1732z00zz__lalr_rewritez00)))
								{	/* Lalr/rewrite.scm 60 */
									BGl_rempropz12z12zz__r4_symbols_6_4z00(BgL_symz00_1140,
										BGl_symbol1732z00zz__lalr_rewritez00);
								}
							else
								{	/* Lalr/rewrite.scm 60 */
									BFALSE;
								}
							if (CBOOL(BGl_getpropz00zz__r4_symbols_6_4z00(BgL_symz00_1140,
										BGl_symbol1734z00zz__lalr_rewritez00)))
								{	/* Lalr/rewrite.scm 62 */
									BGl_rempropz12z12zz__r4_symbols_6_4z00(BgL_symz00_1140,
										BGl_symbol1734z00zz__lalr_rewritez00);
								}
							else
								{	/* Lalr/rewrite.scm 62 */
									BFALSE;
								}
							BGl_rempropz12z12zz__r4_symbols_6_4z00(BgL_symz00_1140,
								BGl_symbol1736z00zz__lalr_rewritez00);
							{
								obj_t BgL_lz00_2120;

								BgL_lz00_2120 = CDR(BgL_lz00_1137);
								BgL_lz00_1137 = BgL_lz00_2120;
								goto BgL_zc3z04anonymousza31198ze3z87_1138;
							}
						}
					else
						{	/* Lalr/rewrite.scm 58 */
							BgL_tmpz00_2107 = ((bool_t) 0);
						}
					return BBOOL(BgL_tmpz00_2107);
				}
			}
		}

	}



/* &clean-plist */
	obj_t BGl_z62cleanzd2plistzb0zz__lalr_rewritez00(obj_t BgL_envz00_2078)
	{
		{	/* Lalr/rewrite.scm 56 */
			return BGl_cleanzd2plistzd2zz__lalr_rewritez00();
		}

	}



/* make-sym-table */
	bool_t BGl_makezd2symzd2tablez00zz__lalr_rewritez00()
	{
		{	/* Lalr/rewrite.scm 70 */
			BGl_za2symvza2z00zz__lalr_rewritez00 =
				make_vector(BGl_za2maxzd2termza2zd2zz__lalr_rewritez00, BFALSE);
			{
				obj_t BgL_lz00_1146;

				BgL_lz00_1146 = BGl_za2plistza2z00zz__lalr_rewritez00;
			BgL_zc3z04anonymousza31209ze3z87_1147:
				if (PAIRP(BgL_lz00_1146))
					{	/* Lalr/rewrite.scm 74 */
						obj_t BgL_symz00_1149;

						BgL_symz00_1149 = CAR(BgL_lz00_1146);
						{	/* Lalr/rewrite.scm 75 */
							obj_t BgL_arg1211z00_1150;

							BgL_arg1211z00_1150 =
								BGl_getpropz00zz__r4_symbols_6_4z00(BgL_symz00_1149,
								BGl_symbol1736z00zz__lalr_rewritez00);
							VECTOR_SET(BGl_za2symvza2z00zz__lalr_rewritez00,
								(long) CINT(BgL_arg1211z00_1150), BgL_symz00_1149);
						}
						{
							obj_t BgL_lz00_2131;

							BgL_lz00_2131 = CDR(BgL_lz00_1146);
							BgL_lz00_1146 = BgL_lz00_2131;
							goto BgL_zc3z04anonymousza31209ze3z87_1147;
						}
					}
				else
					{	/* Lalr/rewrite.scm 73 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* set-nt-no! */
	long BGl_setzd2ntzd2noz12z12zz__lalr_rewritez00(obj_t BgL_symz00_3)
	{
		{	/* Lalr/rewrite.scm 85 */
			{	/* Lalr/rewrite.scm 86 */
				long BgL_xz00_1153;

				BgL_xz00_1153 = BGl_za2maxzd2ntza2zd2zz__lalr_rewritez00;
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_symz00_3,
					BGl_symbol1732z00zz__lalr_rewritez00, BTRUE);
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_symz00_3,
					BGl_symbol1736z00zz__lalr_rewritez00,
					BINT(BGl_za2maxzd2ntza2zd2zz__lalr_rewritez00));
				BGl_za2maxzd2ntza2zd2zz__lalr_rewritez00 =
					(BGl_za2maxzd2ntza2zd2zz__lalr_rewritez00 + ((long) 1));
				BGl_za2plistza2z00zz__lalr_rewritez00 =
					MAKE_YOUNG_PAIR(BgL_symz00_3, BGl_za2plistza2z00zz__lalr_rewritez00);
				return BgL_xz00_1153;
			}
		}

	}



/* set-sym-no! */
	obj_t BGl_setzd2symzd2noz12z12zz__lalr_rewritez00(obj_t BgL_symz00_4)
	{
		{	/* Lalr/rewrite.scm 93 */
			{	/* Lalr/rewrite.scm 94 */
				obj_t BgL_xz00_1155;

				BgL_xz00_1155 =
					BGl_getpropz00zz__r4_symbols_6_4z00(BgL_symz00_4,
					BGl_symbol1736z00zz__lalr_rewritez00);
				if (CBOOL(BgL_xz00_1155))
					{	/* Lalr/rewrite.scm 95 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol1738z00zz__lalr_rewritez00,
							BGl_string1740z00zz__lalr_rewritez00, BgL_symz00_4);
					}
				else
					{	/* Lalr/rewrite.scm 97 */
						long BgL_yz00_1156;

						BgL_yz00_1156 = BGl_za2maxzd2termza2zd2zz__lalr_rewritez00;
						BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_symz00_4,
							BGl_symbol1736z00zz__lalr_rewritez00,
							BINT(BGl_za2maxzd2termza2zd2zz__lalr_rewritez00));
						BGl_za2plistza2z00zz__lalr_rewritez00 =
							MAKE_YOUNG_PAIR(BgL_symz00_4,
							BGl_za2plistza2z00zz__lalr_rewritez00);
						BGl_za2maxzd2termza2zd2zz__lalr_rewritez00 =
							(BGl_za2maxzd2termza2zd2zz__lalr_rewritez00 + ((long) 1));
						return BINT(BgL_yz00_1156);
					}
			}
		}

	}



/* symbol->symbol/binding */
	obj_t BGl_symbolzd2ze3symbolzf2bindingzc3zz__lalr_rewritez00(obj_t
		BgL_symz00_6)
	{
		{	/* Lalr/rewrite.scm 107 */
			{	/* Lalr/rewrite.scm 108 */
				obj_t BgL_g1039z00_1159;

				{	/* Lalr/rewrite.scm 108 */
					obj_t BgL_arg1243z00_1177;

					{	/* Lalr/rewrite.scm 108 */
						obj_t BgL_res1640z00_1706;

						{	/* Lalr/rewrite.scm 108 */
							obj_t BgL_arg1451z00_1705;

							BgL_arg1451z00_1705 = SYMBOL_TO_STRING(BgL_symz00_6);
							BgL_res1640z00_1706 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1451z00_1705);
						}
						BgL_arg1243z00_1177 = BgL_res1640z00_1706;
					}
					BgL_g1039z00_1159 =
						BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(BgL_arg1243z00_1177);
				}
				{
					obj_t BgL_lz00_1162;
					obj_t BgL_prefixz00_1163;

					BgL_lz00_1162 = BgL_g1039z00_1159;
					BgL_prefixz00_1163 = BNIL;
				BgL_zc3z04anonymousza31220ze3z87_1164:
					if (NULLP(BgL_lz00_1162))
						{	/* Lalr/rewrite.scm 110 */
							return BgL_symz00_6;
						}
					else
						{	/* Lalr/rewrite.scm 112 */
							obj_t BgL_cz00_1166;
							obj_t BgL_rz00_1167;

							BgL_cz00_1166 = CAR(((obj_t) BgL_lz00_1162));
							BgL_rz00_1167 = CDR(((obj_t) BgL_lz00_1162));
							if ((CCHAR(BgL_cz00_1166) == ((unsigned char) '@')))
								{	/* Lalr/rewrite.scm 114 */
									if (NULLP(BgL_rz00_1167))
										{	/* Lalr/rewrite.scm 115 */
											return BgL_symz00_6;
										}
									else
										{	/* Lalr/rewrite.scm 115 */
											return
												MAKE_YOUNG_PAIR(bstring_to_symbol
												(BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
													(bgl_reverse(BgL_prefixz00_1163))),
												bstring_to_symbol
												(BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
													(BgL_rz00_1167)));
										}
								}
							else
								{	/* Lalr/rewrite.scm 119 */
									obj_t BgL_arg1242z00_1175;

									BgL_arg1242z00_1175 =
										MAKE_YOUNG_PAIR(BgL_cz00_1166, BgL_prefixz00_1163);
									{
										obj_t BgL_prefixz00_2169;
										obj_t BgL_lz00_2168;

										BgL_lz00_2168 = BgL_rz00_1167;
										BgL_prefixz00_2169 = BgL_arg1242z00_1175;
										BgL_prefixz00_1163 = BgL_prefixz00_2169;
										BgL_lz00_1162 = BgL_lz00_2168;
										goto BgL_zc3z04anonymousza31220ze3z87_1164;
									}
								}
						}
				}
			}
		}

	}



/* rewrite-grammar! */
	BGL_EXPORTED_DEF obj_t BGl_rewritezd2grammarz12zc0zz__lalr_rewritez00(obj_t
		BgL_gramz00_7)
	{
		{	/* Lalr/rewrite.scm 125 */
			{	/* Lalr/rewrite.scm 125 */
				long BgL_nozd2itemszd2_1178;
				long BgL_nozd2ruleszd2_1179;
				long BgL_preczd2levelzd2_1180;

				BgL_nozd2itemszd2_1178 = ((long) 0);
				BgL_nozd2ruleszd2_1179 = ((long) 0);
				BgL_preczd2levelzd2_1180 = ((long) 0);
				{	/* Lalr/rewrite.scm 126 */
					obj_t BgL_thezd2ruleszd2_1181;

					BgL_thezd2ruleszd2_1181 = CDR(((obj_t) BgL_gramz00_7));
					{	/* Lalr/rewrite.scm 127 */
						obj_t BgL_terminalsz00_1182;

						BgL_terminalsz00_1182 = CAR(((obj_t) BgL_gramz00_7));
						BGl_za2plistza2z00zz__lalr_rewritez00 =
							BGl_list1741z00zz__lalr_rewritez00;
						BGl_za2maxzd2ntza2zd2zz__lalr_rewritez00 = ((long) 1);
						{
							obj_t BgL_lz00_1184;

							BgL_lz00_1184 = BgL_thezd2ruleszd2_1181;
						BgL_zc3z04anonymousza31244ze3z87_1185:
							if (PAIRP(BgL_lz00_1184))
								{	/* Lalr/rewrite.scm 139 */
									obj_t BgL_prodsz00_1187;

									BgL_prodsz00_1187 = CAR(BgL_lz00_1184);
									if (PAIRP(BgL_prodsz00_1187))
										{	/* Lalr/rewrite.scm 141 */
											obj_t BgL_lhsz00_1189;

											BgL_lhsz00_1189 = CAR(BgL_prodsz00_1187);
											if (SYMBOLP(BgL_lhsz00_1189))
												{	/* Lalr/rewrite.scm 142 */
													if (CBOOL(BGl_getpropz00zz__r4_symbols_6_4z00
															(BgL_lhsz00_1189,
																BGl_symbol1732z00zz__lalr_rewritez00)))
														{	/* Lalr/rewrite.scm 143 */
															BGl_errorz00zz__errorz00
																(BGl_symbol1738z00zz__lalr_rewritez00,
																BGl_string1746z00zz__lalr_rewritez00,
																BgL_lhsz00_1189);
														}
													else
														{	/* Lalr/rewrite.scm 143 */
															BGl_setzd2ntzd2noz12z12zz__lalr_rewritez00
																(BgL_lhsz00_1189);
															{
																obj_t BgL_lz00_2187;

																BgL_lz00_2187 = CDR(BgL_lz00_1184);
																BgL_lz00_1184 = BgL_lz00_2187;
																goto BgL_zc3z04anonymousza31244ze3z87_1185;
															}
														}
												}
											else
												{	/* Lalr/rewrite.scm 142 */
													BGl_errorz00zz__errorz00
														(BGl_symbol1738z00zz__lalr_rewritez00,
														BGl_string1747z00zz__lalr_rewritez00,
														BgL_lhsz00_1189);
												}
										}
									else
										{	/* Lalr/rewrite.scm 140 */
											BGl_errorz00zz__errorz00
												(BGl_symbol1738z00zz__lalr_rewritez00,
												BGl_string1748z00zz__lalr_rewritez00,
												BgL_prodsz00_1187);
										}
								}
							else
								{	/* Lalr/rewrite.scm 138 */
									if (NULLP(BgL_lz00_1184))
										{	/* Lalr/rewrite.scm 156 */
											BFALSE;
										}
									else
										{	/* Lalr/rewrite.scm 156 */
											BGl_errorz00zz__errorz00
												(BGl_symbol1738z00zz__lalr_rewritez00,
												BGl_string1749z00zz__lalr_rewritez00, BgL_lz00_1184);
										}
								}
						}
						BGl_za2maxzd2termza2zd2zz__lalr_rewritez00 =
							(BGl_za2maxzd2ntza2zd2zz__lalr_rewritez00 + ((long) 1));
						BGl_putpropz12z12zz__r4_symbols_6_4z00
							(BGl_symbol1742z00zz__lalr_rewritez00,
							BGl_symbol1736z00zz__lalr_rewritez00,
							BINT(BGl_za2maxzd2ntza2zd2zz__lalr_rewritez00));
						BGl_putpropz12z12zz__r4_symbols_6_4z00
							(BGl_symbol1744z00zz__lalr_rewritez00,
							BGl_symbol1736z00zz__lalr_rewritez00, BINT(((long) 0)));
						BGl_putpropz12z12zz__r4_symbols_6_4z00
							(BGl_symbol1744z00zz__lalr_rewritez00,
							BGl_symbol1732z00zz__lalr_rewritez00, BTRUE);
						{
							obj_t BgL_l1091z00_1197;

							BgL_l1091z00_1197 = BgL_terminalsz00_1182;
						BgL_zc3z04anonymousza31253ze3z87_1198:
							if (PAIRP(BgL_l1091z00_1197))
								{	/* Lalr/rewrite.scm 168 */
									{	/* Lalr/rewrite.scm 171 */
										obj_t BgL_tz00_1200;

										BgL_tz00_1200 = CAR(BgL_l1091z00_1197);
										if (SYMBOLP(BgL_tz00_1200))
											{	/* Lalr/rewrite.scm 171 */
												BGl_setzd2symzd2noz12z12zz__lalr_rewritez00
													(BgL_tz00_1200);
											}
										else
											{	/* Lalr/rewrite.scm 173 */
												bool_t BgL_test1802z00_2206;

												if (PAIRP(BgL_tz00_1200))
													{	/* Lalr/rewrite.scm 173 */
														BgL_test1802z00_2206 =
															CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
																(BgL_tz00_1200),
																BGl_list1750z00zz__lalr_rewritez00));
													}
												else
													{	/* Lalr/rewrite.scm 173 */
														BgL_test1802z00_2206 = ((bool_t) 0);
													}
												if (BgL_test1802z00_2206)
													{	/* Lalr/rewrite.scm 173 */
														BgL_preczd2levelzd2_1180 =
															(BgL_preczd2levelzd2_1180 + ((long) 1));
														{	/* Lalr/rewrite.scm 175 */
															obj_t BgL_g1090z00_1205;

															BgL_g1090z00_1205 = CDR(BgL_tz00_1200);
															{
																obj_t BgL_l1088z00_1207;

																{	/* Lalr/rewrite.scm 181 */
																	bool_t BgL_tmpz00_2214;

																	BgL_l1088z00_1207 = BgL_g1090z00_1205;
																BgL_zc3z04anonymousza31260ze3z87_1208:
																	if (PAIRP(BgL_l1088z00_1207))
																		{	/* Lalr/rewrite.scm 181 */
																			{	/* Lalr/rewrite.scm 178 */
																				obj_t BgL_innerzd2tzd2_1210;

																				BgL_innerzd2tzd2_1210 =
																					CAR(BgL_l1088z00_1207);
																				if (SYMBOLP(BgL_innerzd2tzd2_1210))
																					{	/* Lalr/rewrite.scm 177 */
																						BFALSE;
																					}
																				else
																					{	/* Lalr/rewrite.scm 177 */
																						BGl_errorz00zz__errorz00
																							(BGl_symbol1738z00zz__lalr_rewritez00,
																							BGl_string1757z00zz__lalr_rewritez00,
																							BgL_innerzd2tzd2_1210);
																					}
																				BGl_setzd2symzd2noz12z12zz__lalr_rewritez00
																					(BgL_innerzd2tzd2_1210);
																				{	/* Lalr/rewrite.scm 180 */
																					obj_t BgL_arg1263z00_1212;

																					{	/* Lalr/rewrite.scm 180 */
																						obj_t BgL_arg1268z00_1213;

																						BgL_arg1268z00_1213 =
																							CAR(((obj_t) BgL_tz00_1200));
																						BgL_arg1263z00_1212 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1268z00_1213,
																							BINT(BgL_preczd2levelzd2_1180));
																					}
																					BGl_putpropz12z12zz__r4_symbols_6_4z00
																						(BgL_innerzd2tzd2_1210,
																						BGl_symbol1734z00zz__lalr_rewritez00,
																						BgL_arg1263z00_1212);
																				}
																			}
																			{
																				obj_t BgL_l1088z00_2227;

																				BgL_l1088z00_2227 =
																					CDR(BgL_l1088z00_1207);
																				BgL_l1088z00_1207 = BgL_l1088z00_2227;
																				goto
																					BgL_zc3z04anonymousza31260ze3z87_1208;
																			}
																		}
																	else
																		{	/* Lalr/rewrite.scm 181 */
																			BgL_tmpz00_2214 = ((bool_t) 1);
																		}
																	BBOOL(BgL_tmpz00_2214);
																}
															}
														}
													}
												else
													{	/* Lalr/rewrite.scm 173 */
														BGl_errorz00zz__errorz00
															(BGl_symbol1738z00zz__lalr_rewritez00,
															BGl_string1757z00zz__lalr_rewritez00,
															BgL_tz00_1200);
													}
											}
									}
									{
										obj_t BgL_l1091z00_2231;

										BgL_l1091z00_2231 = CDR(BgL_l1091z00_1197);
										BgL_l1091z00_1197 = BgL_l1091z00_2231;
										goto BgL_zc3z04anonymousza31253ze3z87_1198;
									}
								}
							else
								{	/* Lalr/rewrite.scm 168 */
									((bool_t) 1);
								}
						}
						{
							obj_t BgL_lz00_1221;

							BgL_lz00_1221 = BgL_thezd2ruleszd2_1181;
						BgL_zc3z04anonymousza31274ze3z87_1222:
							if (PAIRP(BgL_lz00_1221))
								{	/* Lalr/rewrite.scm 190 */
									obj_t BgL_rulesz00_1224;

									BgL_rulesz00_1224 = CAR(BgL_lz00_1221);
									{	/* Lalr/rewrite.scm 191 */

										{	/* Lalr/rewrite.scm 192 */
											obj_t BgL_g1041z00_1226;

											BgL_g1041z00_1226 = CDR(((obj_t) BgL_rulesz00_1224));
											{
												obj_t BgL_rhszd2lzd2_1228;

												BgL_rhszd2lzd2_1228 = BgL_g1041z00_1226;
											BgL_zc3z04anonymousza31276ze3z87_1229:
												if (NULLP(BgL_rhszd2lzd2_1228))
													{	/* Lalr/rewrite.scm 195 */
														obj_t BgL_arg1280z00_1231;

														BgL_arg1280z00_1231 = CDR(((obj_t) BgL_lz00_1221));
														{
															obj_t BgL_lz00_2242;

															BgL_lz00_2242 = BgL_arg1280z00_1231;
															BgL_lz00_1221 = BgL_lz00_2242;
															goto BgL_zc3z04anonymousza31274ze3z87_1222;
														}
													}
												else
													{	/* Lalr/rewrite.scm 194 */
														if (PAIRP(BgL_rhszd2lzd2_1228))
															{	/* Lalr/rewrite.scm 197 */
																obj_t BgL_rhszf2actionzf2_1233;

																BgL_rhszf2actionzf2_1233 =
																	CAR(BgL_rhszd2lzd2_1228);
																BgL_nozd2ruleszd2_1179 =
																	(BgL_nozd2ruleszd2_1179 + ((long) 1));
																if (PAIRP(BgL_rhszf2actionzf2_1233))
																	{	/* Lalr/rewrite.scm 200 */
																		obj_t BgL_actionz00_1236;

																		BgL_actionz00_1236 =
																			CDR(BgL_rhszf2actionzf2_1233);
																		if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_actionz00_1236))
																			{	/* Lalr/rewrite.scm 201 */
																				BFALSE;
																			}
																		else
																			{	/* Lalr/rewrite.scm 201 */
																				BGl_errorz00zz__errorz00
																					(BGl_symbol1738z00zz__lalr_rewritez00,
																					BGl_string1758z00zz__lalr_rewritez00,
																					BgL_rhszf2actionzf2_1233);
																			}
																		if (NULLP(BgL_actionz00_1236))
																			{	/* Lalr/rewrite.scm 203 */
																				SET_CDR(BgL_rhszf2actionzf2_1233,
																					BGl_list1759z00zz__lalr_rewritez00);
																			}
																		else
																			{	/* Lalr/rewrite.scm 203 */
																				BFALSE;
																			}
																		{	/* Lalr/rewrite.scm 205 */
																			obj_t BgL_g1042z00_1239;

																			BgL_g1042z00_1239 =
																				CAR(BgL_rhszf2actionzf2_1233);
																			{
																				obj_t BgL_rhsz00_1241;

																				BgL_rhsz00_1241 = BgL_g1042z00_1239;
																			BgL_zc3z04anonymousza31286ze3z87_1242:
																				if (NULLP(BgL_rhsz00_1241))
																					{	/* Lalr/rewrite.scm 207 */
																						{	/* Lalr/rewrite.scm 209 */
																							long BgL_arg1288z00_1244;

																							BgL_arg1288z00_1244 =
																								(long)
																								CINT
																								(BGl_2zb2zb2zz__r4_numbers_6_5z00
																								(BINT(bgl_list_length(CAR((
																													(obj_t)
																													BgL_rhszf2actionzf2_1233)))),
																									BINT(((long) 1))));
																							BgL_nozd2itemszd2_1178 =
																								(long)
																								CINT
																								(BGl_2zb2zb2zz__r4_numbers_6_5z00
																								(BINT(BgL_nozd2itemszd2_1178),
																									BINT(BgL_arg1288z00_1244)));
																						}
																						{	/* Lalr/rewrite.scm 210 */
																							obj_t BgL_arg1291z00_1247;

																							BgL_arg1291z00_1247 =
																								CDR(
																								((obj_t) BgL_rhszd2lzd2_1228));
																							{
																								obj_t BgL_rhszd2lzd2_2272;

																								BgL_rhszd2lzd2_2272 =
																									BgL_arg1291z00_1247;
																								BgL_rhszd2lzd2_1228 =
																									BgL_rhszd2lzd2_2272;
																								goto
																									BgL_zc3z04anonymousza31276ze3z87_1229;
																							}
																						}
																					}
																				else
																					{	/* Lalr/rewrite.scm 207 */
																						if (PAIRP(BgL_rhsz00_1241))
																							{	/* Lalr/rewrite.scm 212 */
																								obj_t BgL_symz00_1249;

																								BgL_symz00_1249 =
																									CAR(BgL_rhsz00_1241);
																								if (SYMBOLP(BgL_symz00_1249))
																									{	/* Lalr/rewrite.scm 214 */
																										obj_t BgL_symzf2varzf2_1251;

																										BgL_symzf2varzf2_1251 =
																											BGl_symbolzd2ze3symbolzf2bindingzc3zz__lalr_rewritez00
																											(BgL_symz00_1249);
																										{	/* Lalr/rewrite.scm 214 */
																											obj_t
																												BgL_thezd2symzd2_1252;
																											if (SYMBOLP
																												(BgL_symzf2varzf2_1251))
																												{	/* Lalr/rewrite.scm 215 */
																													BgL_thezd2symzd2_1252
																														=
																														BgL_symzf2varzf2_1251;
																												}
																											else
																												{	/* Lalr/rewrite.scm 215 */
																													BgL_thezd2symzd2_1252
																														=
																														CAR(((obj_t)
																															BgL_symzf2varzf2_1251));
																												}
																											{	/* Lalr/rewrite.scm 215 */

																												SET_CAR(BgL_rhsz00_1241,
																													BgL_symzf2varzf2_1251);
																												if (CBOOL
																													(BGl_getpropz00zz__r4_symbols_6_4z00
																														(BgL_thezd2symzd2_1252,
																															BGl_symbol1736z00zz__lalr_rewritez00)))
																													{	/* Lalr/rewrite.scm 104 */
																														BFALSE;
																													}
																												else
																													{	/* Lalr/rewrite.scm 104 */
																														BGl_errorz00zz__errorz00
																															(BGl_symbol1738z00zz__lalr_rewritez00,
																															BGl_string1760z00zz__lalr_rewritez00,
																															BgL_thezd2symzd2_1252);
																													}
																												{
																													obj_t BgL_rhsz00_2288;

																													BgL_rhsz00_2288 =
																														CDR
																														(BgL_rhsz00_1241);
																													BgL_rhsz00_1241 =
																														BgL_rhsz00_2288;
																													goto
																														BgL_zc3z04anonymousza31286ze3z87_1242;
																												}
																											}
																										}
																									}
																								else
																									{	/* Lalr/rewrite.scm 213 */
																										BGl_errorz00zz__errorz00
																											(BGl_symbol1738z00zz__lalr_rewritez00,
																											BGl_string1761z00zz__lalr_rewritez00,
																											BgL_rhsz00_1241);
																									}
																							}
																						else
																							{	/* Lalr/rewrite.scm 211 */
																								BGl_errorz00zz__errorz00
																									(BGl_symbol1738z00zz__lalr_rewritez00,
																									BGl_string1762z00zz__lalr_rewritez00,
																									BgL_rhsz00_1241);
																							}
																					}
																			}
																		}
																	}
																else
																	{	/* Lalr/rewrite.scm 199 */
																		BFALSE;
																	}
															}
														else
															{	/* Lalr/rewrite.scm 196 */
																BGl_errorz00zz__errorz00
																	(BGl_symbol1738z00zz__lalr_rewritez00,
																	BGl_string1748z00zz__lalr_rewritez00,
																	BgL_lz00_1221);
															}
													}
											}
										}
									}
								}
							else
								{	/* Lalr/rewrite.scm 189 */
									BFALSE;
								}
						}
						BGl_makezd2symzd2tablez00zz__lalr_rewritez00();
						{	/* Lalr/rewrite.scm 234 */
							obj_t BgL_startzd2symzd2_1258;

							{	/* Lalr/rewrite.scm 234 */
								obj_t BgL_pairz00_1777;

								BgL_pairz00_1777 = CAR(((obj_t) BgL_thezd2ruleszd2_1181));
								BgL_startzd2symzd2_1258 = CAR(BgL_pairz00_1777);
							}
							{	/* Lalr/rewrite.scm 236 */
								obj_t BgL_arg1297z00_1259;

								{	/* Lalr/rewrite.scm 236 */
									obj_t BgL_arg1298z00_1260;

									{	/* Lalr/rewrite.scm 236 */
										obj_t BgL_arg1299z00_1261;

										{	/* Lalr/rewrite.scm 236 */
											obj_t BgL_arg1300z00_1262;
											obj_t BgL_arg1301z00_1263;

											{	/* Lalr/rewrite.scm 236 */
												obj_t BgL_arg1302z00_1264;

												BgL_arg1302z00_1264 =
													MAKE_YOUNG_PAIR(BGl_symbol1742z00zz__lalr_rewritez00,
													BNIL);
												BgL_arg1300z00_1262 =
													MAKE_YOUNG_PAIR(BgL_startzd2symzd2_1258,
													BgL_arg1302z00_1264);
											}
											BgL_arg1301z00_1263 =
												MAKE_YOUNG_PAIR(BgL_startzd2symzd2_1258, BNIL);
											BgL_arg1299z00_1261 =
												MAKE_YOUNG_PAIR(BgL_arg1300z00_1262,
												BgL_arg1301z00_1263);
										}
										BgL_arg1298z00_1260 =
											MAKE_YOUNG_PAIR(BgL_arg1299z00_1261, BNIL);
									}
									BgL_arg1297z00_1259 =
										MAKE_YOUNG_PAIR(BGl_symbol1744z00zz__lalr_rewritez00,
										BgL_arg1298z00_1260);
								}
								BGl_grammarz00zz__lalr_globalz00 =
									MAKE_YOUNG_PAIR(BgL_arg1297z00_1259, BgL_thezd2ruleszd2_1181);
							}
						}
						{	/* Lalr/rewrite.scm 238 */
							long BgL_za71za7_1780;

							BgL_za71za7_1780 = BgL_nozd2ruleszd2_1179;
							BGl_nrulesz00zz__lalr_globalz00 =
								BINT((BgL_za71za7_1780 + ((long) 2)));
						}
						{	/* Lalr/rewrite.scm 239 */
							long BgL_za71za7_1784;

							BgL_za71za7_1784 = BgL_nozd2itemszd2_1178;
							BGl_nitemsz00zz__lalr_globalz00 =
								BINT((BgL_za71za7_1784 + ((long) 3)));
						}
						BGl_ntermsz00zz__lalr_globalz00 =
							BINT(BGl_za2maxzd2termza2zd2zz__lalr_rewritez00);
						BGl_nvarsz00zz__lalr_globalz00 =
							BINT(BGl_za2maxzd2ntza2zd2zz__lalr_rewritez00);
						return (BGl_nsymsz00zz__lalr_globalz00 =
							BGl_2zb2zb2zz__r4_numbers_6_5z00(BGl_ntermsz00zz__lalr_globalz00,
								BGl_nvarsz00zz__lalr_globalz00), BUNSPEC);
					}
				}
			}
		}

	}



/* &rewrite-grammar! */
	obj_t BGl_z62rewritezd2grammarz12za2zz__lalr_rewritez00(obj_t BgL_envz00_2079,
		obj_t BgL_gramz00_2080)
	{
		{	/* Lalr/rewrite.scm 125 */
			return BGl_rewritezd2grammarz12zc0zz__lalr_rewritez00(BgL_gramz00_2080);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__lalr_rewritez00()
	{
		{	/* Lalr/rewrite.scm 11 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__lalr_rewritez00()
	{
		{	/* Lalr/rewrite.scm 11 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__lalr_rewritez00()
	{
		{	/* Lalr/rewrite.scm 11 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__lalr_rewritez00()
	{
		{	/* Lalr/rewrite.scm 11 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1763z00zz__lalr_rewritez00));
			BGl_modulezd2initializa7ationz75zz__lalr_globalz00(((long) 39276813),
				BSTRING_TO_STRING(BGl_string1763z00zz__lalr_rewritez00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1763z00zz__lalr_rewritez00));
		}

	}

#ifdef __cplusplus
}
#endif
