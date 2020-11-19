/*===========================================================================*/
/*   (Eval/expdstruct.scm)                                                   */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/expdstruct.scm -indent -o objs/obj_u/Eval/expdstruct.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol1925z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1927z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1929z00zz__expander_structz00 = BUNSPEC;
	extern obj_t BGl_expandzd2errorzd2zz__expandz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_structz00 =
		BUNSPEC;
	static obj_t BGl_symbol1931z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1933z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1935z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1937z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1939z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1941z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1943z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1945z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1947z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1949z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1951z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1953z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1955z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1957z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1959z00zz__expander_structz00 = BUNSPEC;
	extern obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_symbol1961z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1963z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1965z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1969z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__expander_structz00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_symbol1971z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1973z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1976z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1978z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_objectzd2initzd2zz__expander_structz00();
	static obj_t BGl_symbol1980z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol1983z00zz__expander_structz00 = BUNSPEC;
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_structz00();
	extern obj_t string_append(obj_t, obj_t);
	extern obj_t
		BGl_matchzd2definezd2structurez12z12zz__match_normaliza7eza7(obj_t);
	static obj_t
		BGl_z62expandzd2evalzd2definezd2structzb0zz__expander_structz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2definezd2structzd2zz__expander_structz00(obj_t, obj_t);
	extern obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_structz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_list1924z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zz__expander_structz00();
	extern long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__expander_structz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_structz00();
	static obj_t BGl_list1967z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_list1968z00zz__expander_structz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1922z00zz__expander_structz00,
		BgL_bgl_string1922za700za7za7_1986za7, "define-struct", 13);
	      DEFINE_STRING(BGl_string1923z00zz__expander_structz00,
		BgL_bgl_string1923za700za7za7_1987za7, "Illegal `define-struct' form", 28);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2definezd2structzd2envz00zz__expander_structz00,
		BgL_bgl_za762expandza7d2eval1988z00,
		BGl_z62expandzd2evalzd2definezd2structzb0zz__expander_structz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1926z00zz__expander_structz00,
		BgL_bgl_string1926za700za7za7_1989za7, "quote", 5);
	      DEFINE_STRING(BGl_string1928z00zz__expander_structz00,
		BgL_bgl_string1928za700za7za7_1990za7, "make-", 5);
	      DEFINE_STRING(BGl_string1930z00zz__expander_structz00,
		BgL_bgl_string1930za700za7za7_1991za7, "init", 4);
	      DEFINE_STRING(BGl_string1932z00zz__expander_structz00,
		BgL_bgl_string1932za700za7za7_1992za7, "pair?", 5);
	      DEFINE_STRING(BGl_string1934z00zz__expander_structz00,
		BgL_bgl_string1934za700za7za7_1993za7, "cdr", 3);
	      DEFINE_STRING(BGl_string1936z00zz__expander_structz00,
		BgL_bgl_string1936za700za7za7_1994za7, "null?", 5);
	      DEFINE_STRING(BGl_string1938z00zz__expander_structz00,
		BgL_bgl_string1938za700za7za7_1995za7, "not", 3);
	      DEFINE_STRING(BGl_string1940z00zz__expander_structz00,
		BgL_bgl_string1940za700za7za7_1996za7, "apply", 5);
	      DEFINE_STRING(BGl_string1942z00zz__expander_structz00,
		BgL_bgl_string1942za700za7za7_1997za7, "car", 3);
	      DEFINE_STRING(BGl_string1944z00zz__expander_structz00,
		BgL_bgl_string1944za700za7za7_1998za7, "make-struct", 11);
	      DEFINE_STRING(BGl_string1946z00zz__expander_structz00,
		BgL_bgl_string1946za700za7za7_1999za7, "if", 2);
	      DEFINE_STRING(BGl_string1948z00zz__expander_structz00,
		BgL_bgl_string1948za700za7za7_2000za7, "define-inline", 13);
	      DEFINE_STRING(BGl_string1950z00zz__expander_structz00,
		BgL_bgl_string1950za700za7za7_2001za7, "new", 3);
	      DEFINE_STRING(BGl_string1952z00zz__expander_structz00,
		BgL_bgl_string1952za700za7za7_2002za7, "-set!", 5);
	      DEFINE_STRING(BGl_string1954z00zz__expander_structz00,
		BgL_bgl_string1954za700za7za7_2003za7, "-", 1);
	      DEFINE_STRING(BGl_string1956z00zz__expander_structz00,
		BgL_bgl_string1956za700za7za7_2004za7, "let", 3);
	      DEFINE_STRING(BGl_string1958z00zz__expander_structz00,
		BgL_bgl_string1958za700za7za7_2005za7, "?", 1);
	      DEFINE_STRING(BGl_string1960z00zz__expander_structz00,
		BgL_bgl_string1960za700za7za7_2006za7, "o", 1);
	      DEFINE_STRING(BGl_string1962z00zz__expander_structz00,
		BgL_bgl_string1962za700za7za7_2007za7, "struct?", 7);
	      DEFINE_STRING(BGl_string1964z00zz__expander_structz00,
		BgL_bgl_string1964za700za7za7_2008za7, "struct-key", 10);
	      DEFINE_STRING(BGl_string1966z00zz__expander_structz00,
		BgL_bgl_string1966za700za7za7_2009za7, "eq?", 3);
	      DEFINE_STRING(BGl_string1970z00zz__expander_structz00,
		BgL_bgl_string1970za700za7za7_2010za7, "unspecified", 11);
	      DEFINE_STRING(BGl_string1972z00zz__expander_structz00,
		BgL_bgl_string1972za700za7za7_2011za7, "s", 1);
	      DEFINE_STRING(BGl_string1974z00zz__expander_structz00,
		BgL_bgl_string1974za700za7za7_2012za7, "struct-ref", 10);
	      DEFINE_STRING(BGl_string1975z00zz__expander_structz00,
		BgL_bgl_string1975za700za7za7_2013za7, "struct-ref:not an instance of", 29);
	      DEFINE_STRING(BGl_string1977z00zz__expander_structz00,
		BgL_bgl_string1977za700za7za7_2014za7, "expand-error", 12);
	      DEFINE_STRING(BGl_string1979z00zz__expander_structz00,
		BgL_bgl_string1979za700za7za7_2015za7, "v", 1);
	      DEFINE_STRING(BGl_string1981z00zz__expander_structz00,
		BgL_bgl_string1981za700za7za7_2016za7, "struct-set!", 11);
	      DEFINE_STRING(BGl_string1982z00zz__expander_structz00,
		BgL_bgl_string1982za700za7za7_2017za7, "struct-set!:not an instance of",
		30);
	      DEFINE_STRING(BGl_string1984z00zz__expander_structz00,
		BgL_bgl_string1984za700za7za7_2018za7, "begin", 5);
	      DEFINE_STRING(BGl_string1985z00zz__expander_structz00,
		BgL_bgl_string1985za700za7za7_2019za7, "__expander_struct", 17);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol1925z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1927z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1929z00zz__expander_structz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1931z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1933z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1935z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1937z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1939z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1941z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1943z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1945z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1947z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1949z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1951z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1953z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1955z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1957z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1959z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1961z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1963z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1965z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1969z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1971z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1973z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1976z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1978z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1980z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_symbol1983z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_list1924z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_list1967z00zz__expander_structz00));
		     ADD_ROOT((void *) (&BGl_list1968z00zz__expander_structz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_structz00(long
		BgL_checksumz00_2078, char *BgL_fromz00_2079)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_structz00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_structz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__expander_structz00();
					BGl_cnstzd2initzd2zz__expander_structz00();
					BGl_importedzd2moduleszd2initz00zz__expander_structz00();
					return BGl_methodzd2initzd2zz__expander_structz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_structz00()
	{
		{	/* Eval/expdstruct.scm 18 */
			BGl_symbol1925z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1926z00zz__expander_structz00);
			BGl_list1924z00zz__expander_structz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1925z00zz__expander_structz00,
				MAKE_YOUNG_PAIR(BNIL, BNIL));
			BGl_symbol1927z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1928z00zz__expander_structz00);
			BGl_symbol1929z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1930z00zz__expander_structz00);
			BGl_symbol1931z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1932z00zz__expander_structz00);
			BGl_symbol1933z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1934z00zz__expander_structz00);
			BGl_symbol1935z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1936z00zz__expander_structz00);
			BGl_symbol1937z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1938z00zz__expander_structz00);
			BGl_symbol1939z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1940z00zz__expander_structz00);
			BGl_symbol1941z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1942z00zz__expander_structz00);
			BGl_symbol1943z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1944z00zz__expander_structz00);
			BGl_symbol1945z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1946z00zz__expander_structz00);
			BGl_symbol1947z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1948z00zz__expander_structz00);
			BGl_symbol1949z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1950z00zz__expander_structz00);
			BGl_symbol1951z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1952z00zz__expander_structz00);
			BGl_symbol1953z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1954z00zz__expander_structz00);
			BGl_symbol1955z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1956z00zz__expander_structz00);
			BGl_symbol1957z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1958z00zz__expander_structz00);
			BGl_symbol1959z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1960z00zz__expander_structz00);
			BGl_symbol1961z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1962z00zz__expander_structz00);
			BGl_symbol1963z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1964z00zz__expander_structz00);
			BGl_symbol1965z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1966z00zz__expander_structz00);
			BGl_symbol1969z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1970z00zz__expander_structz00);
			BGl_list1968z00zz__expander_structz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1969z00zz__expander_structz00, BNIL);
			BGl_list1967z00zz__expander_structz00 =
				MAKE_YOUNG_PAIR(BGl_list1968z00zz__expander_structz00, BNIL);
			BGl_symbol1971z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1972z00zz__expander_structz00);
			BGl_symbol1973z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1974z00zz__expander_structz00);
			BGl_symbol1976z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1977z00zz__expander_structz00);
			BGl_symbol1978z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1979z00zz__expander_structz00);
			BGl_symbol1980z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1981z00zz__expander_structz00);
			return (BGl_symbol1983z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string1984z00zz__expander_structz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__expander_structz00()
	{
		{	/* Eval/expdstruct.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* expand-eval-define-struct */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2evalzd2definezd2structzd2zz__expander_structz00(obj_t
		BgL_xz00_3, obj_t BgL_ez00_4)
	{
		{	/* Eval/expdstruct.scm 60 */
			{
				obj_t BgL_namez00_1062;
				obj_t BgL_slotsz00_1063;

				if (PAIRP(BgL_xz00_3))
					{	/* Eval/expdstruct.scm 61 */
						obj_t BgL_cdrzd2109zd2_1068;

						BgL_cdrzd2109zd2_1068 = CDR(BgL_xz00_3);
						if (PAIRP(BgL_cdrzd2109zd2_1068))
							{	/* Eval/expdstruct.scm 61 */
								BgL_namez00_1062 = CAR(BgL_cdrzd2109zd2_1068);
								BgL_slotsz00_1063 = CDR(BgL_cdrzd2109zd2_1068);
								BGl_matchzd2definezd2structurez12z12zz__match_normaliza7eza7
									(BgL_xz00_3);
								{	/* Eval/expdstruct.scm 64 */
									long BgL_lenz00_1072;

									BgL_lenz00_1072 = bgl_list_length(BgL_slotsz00_1063);
									{	/* Eval/expdstruct.scm 64 */
										obj_t BgL_slotszd2namezd2_1073;

										if (NULLP(BgL_slotsz00_1063))
											{	/* Eval/expdstruct.scm 65 */
												BgL_slotszd2namezd2_1073 = BNIL;
											}
										else
											{	/* Eval/expdstruct.scm 65 */
												obj_t BgL_head1082z00_1323;

												{	/* Eval/expdstruct.scm 65 */
													obj_t BgL_res1834z00_1748;

													BgL_res1834z00_1748 = MAKE_YOUNG_PAIR(BNIL, BNIL);
													BgL_head1082z00_1323 = BgL_res1834z00_1748;
												}
												{
													obj_t BgL_l1080z00_1325;
													obj_t BgL_tail1083z00_1326;

													BgL_l1080z00_1325 = BgL_slotsz00_1063;
													BgL_tail1083z00_1326 = BgL_head1082z00_1323;
												BgL_zc3z04anonymousza31479ze3z87_1327:
													if (NULLP(BgL_l1080z00_1325))
														{	/* Eval/expdstruct.scm 65 */
															BgL_slotszd2namezd2_1073 =
																CDR(BgL_head1082z00_1323);
														}
													else
														{	/* Eval/expdstruct.scm 65 */
															obj_t BgL_newtail1084z00_1329;

															{	/* Eval/expdstruct.scm 65 */
																obj_t BgL_arg1484z00_1331;

																{	/* Eval/expdstruct.scm 65 */
																	obj_t BgL_sz00_1332;

																	BgL_sz00_1332 =
																		CAR(((obj_t) BgL_l1080z00_1325));
																	if (PAIRP(BgL_sz00_1332))
																		{	/* Eval/expdstruct.scm 66 */
																			obj_t BgL_cdrzd2125zd2_1340;

																			BgL_cdrzd2125zd2_1340 =
																				CDR(BgL_sz00_1332);
																			if (PAIRP(BgL_cdrzd2125zd2_1340))
																				{	/* Eval/expdstruct.scm 66 */
																					if (NULLP(CDR(BgL_cdrzd2125zd2_1340)))
																						{	/* Eval/expdstruct.scm 66 */
																							BgL_arg1484z00_1331 =
																								CAR(BgL_sz00_1332);
																						}
																					else
																						{	/* Eval/expdstruct.scm 66 */
																							BgL_arg1484z00_1331 =
																								BGl_expandzd2errorzd2zz__expandz00
																								(BGl_string1922z00zz__expander_structz00,
																								BGl_string1923z00zz__expander_structz00,
																								BgL_xz00_3);
																						}
																				}
																			else
																				{	/* Eval/expdstruct.scm 66 */
																					BgL_arg1484z00_1331 =
																						BGl_expandzd2errorzd2zz__expandz00
																						(BGl_string1922z00zz__expander_structz00,
																						BGl_string1923z00zz__expander_structz00,
																						BgL_xz00_3);
																				}
																		}
																	else
																		{	/* Eval/expdstruct.scm 66 */
																			if (SYMBOLP(BgL_sz00_1332))
																				{	/* Eval/expdstruct.scm 66 */
																					BgL_arg1484z00_1331 = BgL_sz00_1332;
																				}
																			else
																				{	/* Eval/expdstruct.scm 66 */
																					BgL_arg1484z00_1331 =
																						BGl_expandzd2errorzd2zz__expandz00
																						(BGl_string1922z00zz__expander_structz00,
																						BGl_string1923z00zz__expander_structz00,
																						BgL_xz00_3);
																				}
																		}
																}
																{	/* Eval/expdstruct.scm 65 */
																	obj_t BgL_res1842z00_1762;

																	BgL_res1842z00_1762 =
																		MAKE_YOUNG_PAIR(BgL_arg1484z00_1331, BNIL);
																	BgL_newtail1084z00_1329 = BgL_res1842z00_1762;
																}
															}
															SET_CDR(BgL_tail1083z00_1326,
																BgL_newtail1084z00_1329);
															{	/* Eval/expdstruct.scm 65 */
																obj_t BgL_arg1483z00_1330;

																BgL_arg1483z00_1330 =
																	CDR(((obj_t) BgL_l1080z00_1325));
																{
																	obj_t BgL_tail1083z00_2154;
																	obj_t BgL_l1080z00_2153;

																	BgL_l1080z00_2153 = BgL_arg1483z00_1330;
																	BgL_tail1083z00_2154 =
																		BgL_newtail1084z00_1329;
																	BgL_tail1083z00_1326 = BgL_tail1083z00_2154;
																	BgL_l1080z00_1325 = BgL_l1080z00_2153;
																	goto BgL_zc3z04anonymousza31479ze3z87_1327;
																}
															}
														}
												}
											}
										{	/* Eval/expdstruct.scm 65 */
											bool_t BgL_slotszd2valzf3z21_1074;

											BgL_slotszd2valzf3z21_1074 = ((bool_t) 0);
											{	/* Eval/expdstruct.scm 76 */
												obj_t BgL_slotszd2valzd2_1075;

												if (NULLP(BgL_slotsz00_1063))
													{	/* Eval/expdstruct.scm 77 */
														BgL_slotszd2valzd2_1075 = BNIL;
													}
												else
													{	/* Eval/expdstruct.scm 77 */
														obj_t BgL_head1087z00_1295;

														{	/* Eval/expdstruct.scm 77 */
															obj_t BgL_res1844z00_1766;

															BgL_res1844z00_1766 = MAKE_YOUNG_PAIR(BNIL, BNIL);
															BgL_head1087z00_1295 = BgL_res1844z00_1766;
														}
														{
															obj_t BgL_l1085z00_1297;
															obj_t BgL_tail1088z00_1298;

															BgL_l1085z00_1297 = BgL_slotsz00_1063;
															BgL_tail1088z00_1298 = BgL_head1087z00_1295;
														BgL_zc3z04anonymousza31465ze3z87_1299:
															if (NULLP(BgL_l1085z00_1297))
																{	/* Eval/expdstruct.scm 77 */
																	BgL_slotszd2valzd2_1075 =
																		CDR(BgL_head1087z00_1295);
																}
															else
																{	/* Eval/expdstruct.scm 77 */
																	obj_t BgL_newtail1089z00_1301;

																	{	/* Eval/expdstruct.scm 77 */
																		obj_t BgL_arg1468z00_1303;

																		{	/* Eval/expdstruct.scm 77 */
																			obj_t BgL_sz00_1304;

																			BgL_sz00_1304 =
																				CAR(((obj_t) BgL_l1085z00_1297));
																			if (PAIRP(BgL_sz00_1304))
																				{	/* Eval/expdstruct.scm 78 */
																					obj_t BgL_cdrzd2138zd2_1311;

																					BgL_cdrzd2138zd2_1311 =
																						CDR(BgL_sz00_1304);
																					if (PAIRP(BgL_cdrzd2138zd2_1311))
																						{	/* Eval/expdstruct.scm 78 */
																							if (NULLP(CDR
																									(BgL_cdrzd2138zd2_1311)))
																								{	/* Eval/expdstruct.scm 78 */
																									obj_t BgL_arg1473z00_1315;

																									BgL_arg1473z00_1315 =
																										CAR(BgL_cdrzd2138zd2_1311);
																									BgL_slotszd2valzf3z21_1074 =
																										((bool_t) 1);
																									BgL_arg1468z00_1303 =
																										BgL_arg1473z00_1315;
																								}
																							else
																								{	/* Eval/expdstruct.scm 78 */
																									BgL_arg1468z00_1303 =
																										BGl_expandzd2errorzd2zz__expandz00
																										(BGl_string1922z00zz__expander_structz00,
																										BGl_string1923z00zz__expander_structz00,
																										BgL_xz00_3);
																								}
																						}
																					else
																						{	/* Eval/expdstruct.scm 78 */
																							BgL_arg1468z00_1303 =
																								BGl_expandzd2errorzd2zz__expandz00
																								(BGl_string1922z00zz__expander_structz00,
																								BGl_string1923z00zz__expander_structz00,
																								BgL_xz00_3);
																						}
																				}
																			else
																				{	/* Eval/expdstruct.scm 78 */
																					if (SYMBOLP(BgL_sz00_1304))
																						{	/* Eval/expdstruct.scm 78 */
																							BgL_arg1468z00_1303 =
																								BGl_list1924z00zz__expander_structz00;
																						}
																					else
																						{	/* Eval/expdstruct.scm 78 */
																							BgL_arg1468z00_1303 =
																								BGl_expandzd2errorzd2zz__expandz00
																								(BGl_string1922z00zz__expander_structz00,
																								BGl_string1923z00zz__expander_structz00,
																								BgL_xz00_3);
																						}
																				}
																		}
																		{	/* Eval/expdstruct.scm 77 */
																			obj_t BgL_res1852z00_1779;

																			BgL_res1852z00_1779 =
																				MAKE_YOUNG_PAIR(BgL_arg1468z00_1303,
																				BNIL);
																			BgL_newtail1089z00_1301 =
																				BgL_res1852z00_1779;
																		}
																	}
																	SET_CDR(BgL_tail1088z00_1298,
																		BgL_newtail1089z00_1301);
																	{	/* Eval/expdstruct.scm 77 */
																		obj_t BgL_arg1467z00_1302;

																		BgL_arg1467z00_1302 =
																			CDR(((obj_t) BgL_l1085z00_1297));
																		{
																			obj_t BgL_tail1088z00_2182;
																			obj_t BgL_l1085z00_2181;

																			BgL_l1085z00_2181 = BgL_arg1467z00_1302;
																			BgL_tail1088z00_2182 =
																				BgL_newtail1089z00_1301;
																			BgL_tail1088z00_1298 =
																				BgL_tail1088z00_2182;
																			BgL_l1085z00_1297 = BgL_l1085z00_2181;
																			goto
																				BgL_zc3z04anonymousza31465ze3z87_1299;
																		}
																	}
																}
														}
													}
												{	/* Eval/expdstruct.scm 77 */

													{	/* Eval/expdstruct.scm 94 */
														obj_t BgL_arg1177z00_1076;

														{	/* Eval/expdstruct.scm 94 */
															obj_t BgL_arg1178z00_1077;
															obj_t BgL_arg1179z00_1078;

															{	/* Eval/expdstruct.scm 94 */
																obj_t BgL_arg1186z00_1079;

																{	/* Eval/expdstruct.scm 94 */
																	obj_t BgL_arg1190z00_1080;

																	{	/* Eval/expdstruct.scm 94 */
																		obj_t BgL_arg1194z00_1081;

																		{	/* Eval/expdstruct.scm 94 */
																			obj_t BgL_arg1197z00_1082;
																			obj_t BgL_arg1201z00_1083;

																			{	/* Eval/expdstruct.scm 94 */
																				obj_t BgL_arg1208z00_1084;

																				{	/* Eval/expdstruct.scm 94 */
																					obj_t BgL_arg1211z00_1085;

																					{	/* Eval/expdstruct.scm 94 */
																						obj_t BgL_arg1216z00_1086;
																						obj_t BgL_arg1221z00_1087;

																						{	/* Eval/expdstruct.scm 94 */
																							obj_t BgL_res1853z00_1784;

																							{	/* Eval/expdstruct.scm 94 */
																								obj_t BgL_symbolz00_1782;

																								BgL_symbolz00_1782 =
																									BGl_symbol1927z00zz__expander_structz00;
																								{	/* Eval/expdstruct.scm 94 */
																									obj_t BgL_arg1656z00_1783;

																									BgL_arg1656z00_1783 =
																										SYMBOL_TO_STRING
																										(BgL_symbolz00_1782);
																									BgL_res1853z00_1784 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg1656z00_1783);
																								}
																							}
																							BgL_arg1216z00_1086 =
																								BgL_res1853z00_1784;
																						}
																						{	/* Eval/expdstruct.scm 94 */
																							obj_t BgL_res1854z00_1787;

																							{	/* Eval/expdstruct.scm 94 */
																								obj_t BgL_arg1656z00_1786;

																								BgL_arg1656z00_1786 =
																									SYMBOL_TO_STRING(
																									((obj_t) BgL_namez00_1062));
																								BgL_res1854z00_1787 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg1656z00_1786);
																							}
																							BgL_arg1221z00_1087 =
																								BgL_res1854z00_1787;
																						}
																						BgL_arg1211z00_1085 =
																							string_append(BgL_arg1216z00_1086,
																							BgL_arg1221z00_1087);
																					}
																					BgL_arg1208z00_1084 =
																						bstring_to_symbol
																						(BgL_arg1211z00_1085);
																				}
																				BgL_arg1197z00_1082 =
																					MAKE_YOUNG_PAIR(BgL_arg1208z00_1084,
																					BGl_symbol1929z00zz__expander_structz00);
																			}
																			{	/* Eval/expdstruct.scm 95 */
																				obj_t BgL_arg1223z00_1088;

																				if (BgL_slotszd2valzf3z21_1074)
																					{	/* Eval/expdstruct.scm 96 */
																						obj_t BgL_arg1225z00_1089;

																						{	/* Eval/expdstruct.scm 96 */
																							obj_t BgL_arg1227z00_1090;
																							obj_t BgL_arg1229z00_1091;

																							{	/* Eval/expdstruct.scm 96 */
																								obj_t BgL_arg1232z00_1092;

																								BgL_arg1232z00_1092 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol1929z00zz__expander_structz00,
																									BNIL);
																								BgL_arg1227z00_1090 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol1931z00zz__expander_structz00,
																									BgL_arg1232z00_1092);
																							}
																							{	/* Eval/expdstruct.scm 97 */
																								obj_t BgL_arg1239z00_1093;
																								obj_t BgL_arg1242z00_1094;

																								{	/* Eval/expdstruct.scm 97 */
																									obj_t BgL_arg1243z00_1095;

																									{	/* Eval/expdstruct.scm 97 */
																										obj_t BgL_arg1245z00_1096;
																										obj_t BgL_arg1246z00_1097;

																										{	/* Eval/expdstruct.scm 97 */
																											obj_t BgL_arg1247z00_1098;

																											{	/* Eval/expdstruct.scm 97 */
																												obj_t
																													BgL_arg1250z00_1099;
																												{	/* Eval/expdstruct.scm 97 */
																													obj_t
																														BgL_arg1252z00_1100;
																													{	/* Eval/expdstruct.scm 97 */
																														obj_t
																															BgL_arg1253z00_1101;
																														{	/* Eval/expdstruct.scm 97 */
																															obj_t
																																BgL_arg1254z00_1102;
																															BgL_arg1254z00_1102
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol1929z00zz__expander_structz00,
																																BNIL);
																															BgL_arg1253z00_1101
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol1933z00zz__expander_structz00,
																																BgL_arg1254z00_1102);
																														}
																														BgL_arg1252z00_1100
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1253z00_1101,
																															BNIL);
																													}
																													BgL_arg1250z00_1099 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol1935z00zz__expander_structz00,
																														BgL_arg1252z00_1100);
																												}
																												BgL_arg1247z00_1098 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1250z00_1099,
																													BNIL);
																											}
																											BgL_arg1245z00_1096 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol1937z00zz__expander_structz00,
																												BgL_arg1247z00_1098);
																										}
																										{	/* Eval/expdstruct.scm 98 */
																											obj_t BgL_arg1256z00_1103;
																											obj_t BgL_arg1258z00_1104;

																											{	/* Eval/expdstruct.scm 98 */
																												obj_t
																													BgL_arg1263z00_1105;
																												{	/* Eval/expdstruct.scm 98 */
																													obj_t
																														BgL_arg1268z00_1106;
																													BgL_arg1268z00_1106 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol1929z00zz__expander_structz00,
																														BNIL);
																													BgL_arg1263z00_1105 =
																														MAKE_YOUNG_PAIR
																														(BgL_namez00_1062,
																														BgL_arg1268z00_1106);
																												}
																												BgL_arg1256z00_1103 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol1939z00zz__expander_structz00,
																													BgL_arg1263z00_1105);
																											}
																											{	/* Eval/expdstruct.scm 99 */
																												obj_t
																													BgL_arg1270z00_1107;
																												{	/* Eval/expdstruct.scm 99 */
																													obj_t
																														BgL_arg1271z00_1108;
																													{	/* Eval/expdstruct.scm 99 */
																														obj_t
																															BgL_arg1273z00_1109;
																														obj_t
																															BgL_arg1274z00_1110;
																														{	/* Eval/expdstruct.scm 99 */
																															obj_t
																																BgL_arg1275z00_1111;
																															BgL_arg1275z00_1111
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_namez00_1062,
																																BNIL);
																															BgL_arg1273z00_1109
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol1925z00zz__expander_structz00,
																																BgL_arg1275z00_1111);
																														}
																														{	/* Eval/expdstruct.scm 99 */
																															obj_t
																																BgL_arg1276z00_1112;
																															{	/* Eval/expdstruct.scm 99 */
																																obj_t
																																	BgL_arg1277z00_1113;
																																{	/* Eval/expdstruct.scm 99 */
																																	obj_t
																																		BgL_arg1280z00_1114;
																																	BgL_arg1280z00_1114
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol1929z00zz__expander_structz00,
																																		BNIL);
																																	BgL_arg1277z00_1113
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol1941z00zz__expander_structz00,
																																		BgL_arg1280z00_1114);
																																}
																																BgL_arg1276z00_1112
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1277z00_1113,
																																	BNIL);
																															}
																															BgL_arg1274z00_1110
																																=
																																MAKE_YOUNG_PAIR
																																(BINT
																																(BgL_lenz00_1072),
																																BgL_arg1276z00_1112);
																														}
																														BgL_arg1271z00_1108
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1273z00_1109,
																															BgL_arg1274z00_1110);
																													}
																													BgL_arg1270z00_1107 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol1943z00zz__expander_structz00,
																														BgL_arg1271z00_1108);
																												}
																												BgL_arg1258z00_1104 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1270z00_1107,
																													BNIL);
																											}
																											BgL_arg1246z00_1097 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1256z00_1103,
																												BgL_arg1258z00_1104);
																										}
																										BgL_arg1243z00_1095 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1245z00_1096,
																											BgL_arg1246z00_1097);
																									}
																									BgL_arg1239z00_1093 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol1945z00zz__expander_structz00,
																										BgL_arg1243z00_1095);
																								}
																								{	/* Eval/expdstruct.scm 100 */
																									obj_t BgL_arg1281z00_1115;

																									BgL_arg1281z00_1115 =
																										MAKE_YOUNG_PAIR
																										(BgL_namez00_1062,
																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																										(BgL_slotszd2valzd2_1075,
																											BNIL));
																									BgL_arg1242z00_1094 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1281z00_1115, BNIL);
																								}
																								BgL_arg1229z00_1091 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1239z00_1093,
																									BgL_arg1242z00_1094);
																							}
																							BgL_arg1225z00_1089 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1227z00_1090,
																								BgL_arg1229z00_1091);
																						}
																						BgL_arg1223z00_1088 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol1945z00zz__expander_structz00,
																							BgL_arg1225z00_1089);
																					}
																				else
																					{	/* Eval/expdstruct.scm 101 */
																						obj_t BgL_arg1284z00_1117;

																						{	/* Eval/expdstruct.scm 101 */
																							obj_t BgL_arg1285z00_1118;
																							obj_t BgL_arg1286z00_1119;

																							{	/* Eval/expdstruct.scm 101 */
																								obj_t BgL_arg1287z00_1120;

																								BgL_arg1287z00_1120 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol1929z00zz__expander_structz00,
																									BNIL);
																								BgL_arg1285z00_1118 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol1931z00zz__expander_structz00,
																									BgL_arg1287z00_1120);
																							}
																							{	/* Eval/expdstruct.scm 102 */
																								obj_t BgL_arg1288z00_1121;
																								obj_t BgL_arg1289z00_1122;

																								{	/* Eval/expdstruct.scm 102 */
																									obj_t BgL_arg1290z00_1123;

																									{	/* Eval/expdstruct.scm 102 */
																										obj_t BgL_arg1291z00_1124;
																										obj_t BgL_arg1292z00_1125;

																										{	/* Eval/expdstruct.scm 102 */
																											obj_t BgL_arg1295z00_1126;

																											{	/* Eval/expdstruct.scm 102 */
																												obj_t
																													BgL_arg1296z00_1127;
																												{	/* Eval/expdstruct.scm 102 */
																													obj_t
																														BgL_arg1297z00_1128;
																													{	/* Eval/expdstruct.scm 102 */
																														obj_t
																															BgL_arg1298z00_1129;
																														{	/* Eval/expdstruct.scm 102 */
																															obj_t
																																BgL_arg1299z00_1130;
																															BgL_arg1299z00_1130
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol1929z00zz__expander_structz00,
																																BNIL);
																															BgL_arg1298z00_1129
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol1933z00zz__expander_structz00,
																																BgL_arg1299z00_1130);
																														}
																														BgL_arg1297z00_1128
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1298z00_1129,
																															BNIL);
																													}
																													BgL_arg1296z00_1127 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol1935z00zz__expander_structz00,
																														BgL_arg1297z00_1128);
																												}
																												BgL_arg1295z00_1126 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1296z00_1127,
																													BNIL);
																											}
																											BgL_arg1291z00_1124 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol1937z00zz__expander_structz00,
																												BgL_arg1295z00_1126);
																										}
																										{	/* Eval/expdstruct.scm 103 */
																											obj_t BgL_arg1300z00_1131;
																											obj_t BgL_arg1301z00_1132;

																											{	/* Eval/expdstruct.scm 103 */
																												obj_t
																													BgL_arg1302z00_1133;
																												{	/* Eval/expdstruct.scm 103 */
																													obj_t
																														BgL_arg1303z00_1134;
																													BgL_arg1303z00_1134 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol1929z00zz__expander_structz00,
																														BNIL);
																													BgL_arg1302z00_1133 =
																														MAKE_YOUNG_PAIR
																														(BgL_namez00_1062,
																														BgL_arg1303z00_1134);
																												}
																												BgL_arg1300z00_1131 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol1939z00zz__expander_structz00,
																													BgL_arg1302z00_1133);
																											}
																											{	/* Eval/expdstruct.scm 104 */
																												obj_t
																													BgL_arg1304z00_1135;
																												{	/* Eval/expdstruct.scm 104 */
																													obj_t
																														BgL_arg1306z00_1136;
																													{	/* Eval/expdstruct.scm 104 */
																														obj_t
																															BgL_arg1307z00_1137;
																														obj_t
																															BgL_arg1308z00_1138;
																														{	/* Eval/expdstruct.scm 104 */
																															obj_t
																																BgL_arg1309z00_1139;
																															BgL_arg1309z00_1139
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_namez00_1062,
																																BNIL);
																															BgL_arg1307z00_1137
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol1925z00zz__expander_structz00,
																																BgL_arg1309z00_1139);
																														}
																														{	/* Eval/expdstruct.scm 104 */
																															obj_t
																																BgL_arg1310z00_1140;
																															{	/* Eval/expdstruct.scm 104 */
																																obj_t
																																	BgL_arg1311z00_1141;
																																{	/* Eval/expdstruct.scm 104 */
																																	obj_t
																																		BgL_arg1312z00_1142;
																																	BgL_arg1312z00_1142
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol1929z00zz__expander_structz00,
																																		BNIL);
																																	BgL_arg1311z00_1141
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol1941z00zz__expander_structz00,
																																		BgL_arg1312z00_1142);
																																}
																																BgL_arg1310z00_1140
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1311z00_1141,
																																	BNIL);
																															}
																															BgL_arg1308z00_1138
																																=
																																MAKE_YOUNG_PAIR
																																(BINT
																																(BgL_lenz00_1072),
																																BgL_arg1310z00_1140);
																														}
																														BgL_arg1306z00_1136
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1307z00_1137,
																															BgL_arg1308z00_1138);
																													}
																													BgL_arg1304z00_1135 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol1943z00zz__expander_structz00,
																														BgL_arg1306z00_1136);
																												}
																												BgL_arg1301z00_1132 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1304z00_1135,
																													BNIL);
																											}
																											BgL_arg1292z00_1125 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1300z00_1131,
																												BgL_arg1301z00_1132);
																										}
																										BgL_arg1290z00_1123 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1291z00_1124,
																											BgL_arg1292z00_1125);
																									}
																									BgL_arg1288z00_1121 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol1945z00zz__expander_structz00,
																										BgL_arg1290z00_1123);
																								}
																								{	/* Eval/expdstruct.scm 105 */
																									obj_t BgL_arg1313z00_1143;

																									{	/* Eval/expdstruct.scm 105 */
																										obj_t BgL_arg1314z00_1144;

																										{	/* Eval/expdstruct.scm 105 */
																											obj_t BgL_arg1315z00_1145;
																											obj_t BgL_arg1316z00_1146;

																											{	/* Eval/expdstruct.scm 105 */
																												obj_t
																													BgL_arg1317z00_1147;
																												BgL_arg1317z00_1147 =
																													MAKE_YOUNG_PAIR
																													(BgL_namez00_1062,
																													BNIL);
																												BgL_arg1315z00_1145 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol1925z00zz__expander_structz00,
																													BgL_arg1317z00_1147);
																											}
																											{	/* Eval/expdstruct.scm 105 */
																												obj_t
																													BgL_arg1318z00_1148;
																												{	/* Eval/expdstruct.scm 105 */
																													obj_t
																														BgL_arg1319z00_1149;
																													{	/* Eval/expdstruct.scm 105 */
																														obj_t
																															BgL_arg1322z00_1150;
																														BgL_arg1322z00_1150
																															=
																															MAKE_YOUNG_PAIR
																															(BNIL, BNIL);
																														BgL_arg1319z00_1149
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol1925z00zz__expander_structz00,
																															BgL_arg1322z00_1150);
																													}
																													BgL_arg1318z00_1148 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1319z00_1149,
																														BNIL);
																												}
																												BgL_arg1316z00_1146 =
																													MAKE_YOUNG_PAIR(BINT
																													(BgL_lenz00_1072),
																													BgL_arg1318z00_1148);
																											}
																											BgL_arg1314z00_1144 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1315z00_1145,
																												BgL_arg1316z00_1146);
																										}
																										BgL_arg1313z00_1143 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol1943z00zz__expander_structz00,
																											BgL_arg1314z00_1144);
																									}
																									BgL_arg1289z00_1122 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1313z00_1143, BNIL);
																								}
																								BgL_arg1286z00_1119 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1288z00_1121,
																									BgL_arg1289z00_1122);
																							}
																							BgL_arg1284z00_1117 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1285z00_1118,
																								BgL_arg1286z00_1119);
																						}
																						BgL_arg1223z00_1088 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol1945z00zz__expander_structz00,
																							BgL_arg1284z00_1117);
																					}
																				BgL_arg1201z00_1083 =
																					MAKE_YOUNG_PAIR(BgL_arg1223z00_1088,
																					BNIL);
																			}
																			BgL_arg1194z00_1081 =
																				MAKE_YOUNG_PAIR(BgL_arg1197z00_1082,
																				BgL_arg1201z00_1083);
																		}
																		BgL_arg1190z00_1080 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol1947z00zz__expander_structz00,
																			BgL_arg1194z00_1081);
																	}
																	BgL_arg1186z00_1079 =
																		BGl_evepairifyz00zz__prognz00
																		(BgL_arg1190z00_1080, BgL_xz00_3);
																}
																BgL_arg1178z00_1077 =
																	PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4,
																	BgL_arg1186z00_1079, BgL_ez00_4, BEOA);
															}
															{	/* Eval/expdstruct.scm 110 */
																obj_t BgL_arg1324z00_1151;
																obj_t BgL_arg1325z00_1152;

																{	/* Eval/expdstruct.scm 110 */
																	obj_t BgL_arg1326z00_1153;

																	{	/* Eval/expdstruct.scm 110 */
																		obj_t BgL_arg1327z00_1154;

																		{	/* Eval/expdstruct.scm 110 */
																			obj_t BgL_arg1328z00_1155;

																			{	/* Eval/expdstruct.scm 110 */
																				obj_t BgL_arg1329z00_1156;
																				obj_t BgL_arg1330z00_1157;

																				BgL_arg1329z00_1156 =
																					MAKE_YOUNG_PAIR(BgL_namez00_1062,
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_slotszd2namezd2_1073, BNIL));
																				{	/* Eval/expdstruct.scm 111 */
																					obj_t BgL_arg1333z00_1159;

																					{	/* Eval/expdstruct.scm 111 */
																						obj_t BgL_arg1334z00_1160;

																						{	/* Eval/expdstruct.scm 111 */
																							obj_t BgL_arg1335z00_1161;
																							obj_t BgL_arg1337z00_1162;

																							{	/* Eval/expdstruct.scm 111 */
																								obj_t BgL_arg1338z00_1163;

																								{	/* Eval/expdstruct.scm 111 */
																									obj_t BgL_arg1339z00_1164;

																									{	/* Eval/expdstruct.scm 111 */
																										obj_t BgL_arg1340z00_1165;

																										{	/* Eval/expdstruct.scm 111 */
																											obj_t BgL_arg1341z00_1166;

																											{	/* Eval/expdstruct.scm 111 */
																												obj_t
																													BgL_arg1342z00_1167;
																												obj_t
																													BgL_arg1343z00_1168;
																												{	/* Eval/expdstruct.scm 111 */
																													obj_t
																														BgL_arg1344z00_1169;
																													BgL_arg1344z00_1169 =
																														MAKE_YOUNG_PAIR
																														(BgL_namez00_1062,
																														BNIL);
																													BgL_arg1342z00_1167 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol1925z00zz__expander_structz00,
																														BgL_arg1344z00_1169);
																												}
																												{	/* Eval/expdstruct.scm 111 */
																													obj_t
																														BgL_arg1345z00_1170;
																													{	/* Eval/expdstruct.scm 111 */
																														obj_t
																															BgL_arg1346z00_1171;
																														{	/* Eval/expdstruct.scm 111 */
																															obj_t
																																BgL_arg1347z00_1172;
																															BgL_arg1347z00_1172
																																=
																																MAKE_YOUNG_PAIR
																																(BNIL, BNIL);
																															BgL_arg1346z00_1171
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol1925z00zz__expander_structz00,
																																BgL_arg1347z00_1172);
																														}
																														BgL_arg1345z00_1170
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1346z00_1171,
																															BNIL);
																													}
																													BgL_arg1343z00_1168 =
																														MAKE_YOUNG_PAIR(BINT
																														(BgL_lenz00_1072),
																														BgL_arg1345z00_1170);
																												}
																												BgL_arg1341z00_1166 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1342z00_1167,
																													BgL_arg1343z00_1168);
																											}
																											BgL_arg1340z00_1165 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol1943z00zz__expander_structz00,
																												BgL_arg1341z00_1166);
																										}
																										BgL_arg1339z00_1164 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1340z00_1165,
																											BNIL);
																									}
																									BgL_arg1338z00_1163 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol1949z00zz__expander_structz00,
																										BgL_arg1339z00_1164);
																								}
																								BgL_arg1335z00_1161 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1338z00_1163, BNIL);
																							}
																							{	/* Eval/expdstruct.scm 112 */
																								obj_t BgL_arg1348z00_1173;
																								obj_t BgL_arg1350z00_1174;

																								{
																									obj_t BgL_slotsz00_1177;
																									obj_t BgL_resz00_1178;

																									BgL_slotsz00_1177 =
																										BgL_slotszd2namezd2_1073;
																									BgL_resz00_1178 = BNIL;
																								BgL_zc3z04anonymousza31351ze3z87_1179:
																									if (NULLP
																										(BgL_slotsz00_1177))
																										{	/* Eval/expdstruct.scm 114 */
																											BgL_arg1348z00_1173 =
																												BgL_resz00_1178;
																										}
																									else
																										{	/* Eval/expdstruct.scm 116 */
																											obj_t BgL_arg1353z00_1181;
																											obj_t BgL_arg1354z00_1182;

																											BgL_arg1353z00_1181 =
																												CDR(
																												((obj_t)
																													BgL_slotsz00_1177));
																											{	/* Eval/expdstruct.scm 119 */
																												obj_t
																													BgL_arg1355z00_1183;
																												{	/* Eval/expdstruct.scm 119 */
																													obj_t
																														BgL_arg1356z00_1184;
																													obj_t
																														BgL_arg1357z00_1185;
																													{	/* Eval/expdstruct.scm 119 */
																														obj_t
																															BgL_arg1359z00_1186;
																														BgL_arg1359z00_1186
																															=
																															CAR(((obj_t)
																																BgL_slotsz00_1177));
																														{	/* Eval/expdstruct.scm 117 */
																															obj_t
																																BgL_list1360z00_1187;
																															{	/* Eval/expdstruct.scm 117 */
																																obj_t
																																	BgL_arg1361z00_1188;
																																{	/* Eval/expdstruct.scm 117 */
																																	obj_t
																																		BgL_arg1362z00_1189;
																																	{	/* Eval/expdstruct.scm 117 */
																																		obj_t
																																			BgL_arg1363z00_1190;
																																		BgL_arg1363z00_1190
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol1951z00zz__expander_structz00,
																																			BNIL);
																																		BgL_arg1362z00_1189
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1359z00_1186,
																																			BgL_arg1363z00_1190);
																																	}
																																	BgL_arg1361z00_1188
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol1953z00zz__expander_structz00,
																																		BgL_arg1362z00_1189);
																																}
																																BgL_list1360z00_1187
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_namez00_1062,
																																	BgL_arg1361z00_1188);
																															}
																															BgL_arg1356z00_1184
																																=
																																BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																																(BgL_list1360z00_1187);
																														}
																													}
																													{	/* Eval/expdstruct.scm 122 */
																														obj_t
																															BgL_arg1364z00_1191;
																														{	/* Eval/expdstruct.scm 122 */
																															obj_t
																																BgL_arg1365z00_1192;
																															BgL_arg1365z00_1192
																																=
																																CAR(((obj_t)
																																	BgL_slotsz00_1177));
																															BgL_arg1364z00_1191
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1365z00_1192,
																																BNIL);
																														}
																														BgL_arg1357z00_1185
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol1949z00zz__expander_structz00,
																															BgL_arg1364z00_1191);
																													}
																													BgL_arg1355z00_1183 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1356z00_1184,
																														BgL_arg1357z00_1185);
																												}
																												BgL_arg1354z00_1182 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1355z00_1183,
																													BgL_resz00_1178);
																											}
																											{
																												obj_t BgL_resz00_2300;
																												obj_t BgL_slotsz00_2299;

																												BgL_slotsz00_2299 =
																													BgL_arg1353z00_1181;
																												BgL_resz00_2300 =
																													BgL_arg1354z00_1182;
																												BgL_resz00_1178 =
																													BgL_resz00_2300;
																												BgL_slotsz00_1177 =
																													BgL_slotsz00_2299;
																												goto
																													BgL_zc3z04anonymousza31351ze3z87_1179;
																											}
																										}
																								}
																								BgL_arg1350z00_1174 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol1949z00zz__expander_structz00,
																									BNIL);
																								BgL_arg1337z00_1162 =
																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg1348z00_1173,
																									BgL_arg1350z00_1174);
																							}
																							BgL_arg1334z00_1160 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1335z00_1161,
																								BgL_arg1337z00_1162);
																						}
																						BgL_arg1333z00_1159 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol1955z00zz__expander_structz00,
																							BgL_arg1334z00_1160);
																					}
																					BgL_arg1330z00_1157 =
																						MAKE_YOUNG_PAIR(BgL_arg1333z00_1159,
																						BNIL);
																				}
																				BgL_arg1328z00_1155 =
																					MAKE_YOUNG_PAIR(BgL_arg1329z00_1156,
																					BgL_arg1330z00_1157);
																			}
																			BgL_arg1327z00_1154 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol1947z00zz__expander_structz00,
																				BgL_arg1328z00_1155);
																		}
																		BgL_arg1326z00_1153 =
																			BGl_evepairifyz00zz__prognz00
																			(BgL_arg1327z00_1154, BgL_xz00_3);
																	}
																	BgL_arg1324z00_1151 =
																		PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4,
																		BgL_arg1326z00_1153, BgL_ez00_4, BEOA);
																}
																{	/* Eval/expdstruct.scm 130 */
																	obj_t BgL_arg1367z00_1194;
																	obj_t BgL_arg1368z00_1195;

																	{	/* Eval/expdstruct.scm 130 */
																		obj_t BgL_arg1370z00_1196;

																		{	/* Eval/expdstruct.scm 130 */
																			obj_t BgL_arg1371z00_1197;

																			{	/* Eval/expdstruct.scm 130 */
																				obj_t BgL_arg1372z00_1198;

																				{	/* Eval/expdstruct.scm 130 */
																					obj_t BgL_arg1373z00_1199;
																					obj_t BgL_arg1374z00_1200;

																					{	/* Eval/expdstruct.scm 130 */
																						obj_t BgL_arg1375z00_1201;
																						obj_t BgL_arg1376z00_1202;

																						{	/* Eval/expdstruct.scm 130 */
																							obj_t BgL_arg1377z00_1203;

																							{	/* Eval/expdstruct.scm 130 */
																								obj_t BgL_arg1378z00_1204;
																								obj_t BgL_arg1379z00_1205;

																								{	/* Eval/expdstruct.scm 130 */
																									obj_t BgL_res1857z00_1796;

																									{	/* Eval/expdstruct.scm 130 */
																										obj_t BgL_arg1656z00_1795;

																										BgL_arg1656z00_1795 =
																											SYMBOL_TO_STRING(
																											((obj_t)
																												BgL_namez00_1062));
																										BgL_res1857z00_1796 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg1656z00_1795);
																									}
																									BgL_arg1378z00_1204 =
																										BgL_res1857z00_1796;
																								}
																								{	/* Eval/expdstruct.scm 130 */
																									obj_t BgL_res1858z00_1799;

																									{	/* Eval/expdstruct.scm 130 */
																										obj_t BgL_symbolz00_1797;

																										BgL_symbolz00_1797 =
																											BGl_symbol1957z00zz__expander_structz00;
																										{	/* Eval/expdstruct.scm 130 */
																											obj_t BgL_arg1656z00_1798;

																											BgL_arg1656z00_1798 =
																												SYMBOL_TO_STRING
																												(BgL_symbolz00_1797);
																											BgL_res1858z00_1799 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg1656z00_1798);
																										}
																									}
																									BgL_arg1379z00_1205 =
																										BgL_res1858z00_1799;
																								}
																								BgL_arg1377z00_1203 =
																									string_append
																									(BgL_arg1378z00_1204,
																									BgL_arg1379z00_1205);
																							}
																							BgL_arg1375z00_1201 =
																								bstring_to_symbol
																								(BgL_arg1377z00_1203);
																						}
																						BgL_arg1376z00_1202 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol1959z00zz__expander_structz00,
																							BNIL);
																						BgL_arg1373z00_1199 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1375z00_1201,
																							BgL_arg1376z00_1202);
																					}
																					{	/* Eval/expdstruct.scm 131 */
																						obj_t BgL_arg1380z00_1206;

																						{	/* Eval/expdstruct.scm 131 */
																							obj_t BgL_arg1381z00_1207;

																							{	/* Eval/expdstruct.scm 131 */
																								obj_t BgL_arg1382z00_1208;
																								obj_t BgL_arg1383z00_1209;

																								{	/* Eval/expdstruct.scm 131 */
																									obj_t BgL_arg1384z00_1210;

																									BgL_arg1384z00_1210 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol1959z00zz__expander_structz00,
																										BNIL);
																									BgL_arg1382z00_1208 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol1961z00zz__expander_structz00,
																										BgL_arg1384z00_1210);
																								}
																								{	/* Eval/expdstruct.scm 132 */
																									obj_t BgL_arg1385z00_1211;
																									obj_t BgL_arg1386z00_1212;

																									{	/* Eval/expdstruct.scm 132 */
																										obj_t BgL_arg1387z00_1213;

																										{	/* Eval/expdstruct.scm 132 */
																											obj_t BgL_arg1388z00_1214;
																											obj_t BgL_arg1389z00_1215;

																											{	/* Eval/expdstruct.scm 132 */
																												obj_t
																													BgL_arg1390z00_1216;
																												BgL_arg1390z00_1216 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol1959z00zz__expander_structz00,
																													BNIL);
																												BgL_arg1388z00_1214 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol1963z00zz__expander_structz00,
																													BgL_arg1390z00_1216);
																											}
																											{	/* Eval/expdstruct.scm 132 */
																												obj_t
																													BgL_arg1391z00_1217;
																												{	/* Eval/expdstruct.scm 132 */
																													obj_t
																														BgL_arg1392z00_1218;
																													BgL_arg1392z00_1218 =
																														MAKE_YOUNG_PAIR
																														(BgL_namez00_1062,
																														BNIL);
																													BgL_arg1391z00_1217 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol1925z00zz__expander_structz00,
																														BgL_arg1392z00_1218);
																												}
																												BgL_arg1389z00_1215 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1391z00_1217,
																													BNIL);
																											}
																											BgL_arg1387z00_1213 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1388z00_1214,
																												BgL_arg1389z00_1215);
																										}
																										BgL_arg1385z00_1211 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol1965z00zz__expander_structz00,
																											BgL_arg1387z00_1213);
																									}
																									BgL_arg1386z00_1212 =
																										MAKE_YOUNG_PAIR(BFALSE,
																										BNIL);
																									BgL_arg1383z00_1209 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1385z00_1211,
																										BgL_arg1386z00_1212);
																								}
																								BgL_arg1381z00_1207 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1382z00_1208,
																									BgL_arg1383z00_1209);
																							}
																							BgL_arg1380z00_1206 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol1945z00zz__expander_structz00,
																								BgL_arg1381z00_1207);
																						}
																						BgL_arg1374z00_1200 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1380z00_1206, BNIL);
																					}
																					BgL_arg1372z00_1198 =
																						MAKE_YOUNG_PAIR(BgL_arg1373z00_1199,
																						BgL_arg1374z00_1200);
																				}
																				BgL_arg1371z00_1197 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol1947z00zz__expander_structz00,
																					BgL_arg1372z00_1198);
																			}
																			BgL_arg1370z00_1196 =
																				BGl_evepairifyz00zz__prognz00
																				(BgL_arg1371z00_1197, BgL_xz00_3);
																		}
																		BgL_arg1367z00_1194 =
																			PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4,
																			BgL_arg1370z00_1196, BgL_ez00_4, BEOA);
																	}
																	{	/* Eval/expdstruct.scm 137 */
																		obj_t BgL_g1040z00_1219;

																		BgL_g1040z00_1219 =
																			BGl_list1967z00zz__expander_structz00;
																		{
																			long BgL_iz00_1221;
																			obj_t BgL_slotsz00_1222;
																			obj_t BgL_resz00_1223;

																			BgL_iz00_1221 = ((long) 0);
																			BgL_slotsz00_1222 =
																				BgL_slotszd2namezd2_1073;
																			BgL_resz00_1223 = BgL_g1040z00_1219;
																		BgL_zc3z04anonymousza31393ze3z87_1224:
																			if ((BgL_iz00_1221 == BgL_lenz00_1072))
																				{	/* Eval/expdstruct.scm 140 */
																					BgL_arg1368z00_1195 = BgL_resz00_1223;
																				}
																			else
																				{	/* Eval/expdstruct.scm 142 */
																					obj_t BgL_prz00_1226;

																					BgL_prz00_1226 =
																						CAR(((obj_t) BgL_slotsz00_1222));
																					{	/* Eval/expdstruct.scm 143 */
																						long BgL_arg1395z00_1227;
																						obj_t BgL_arg1396z00_1228;
																						obj_t BgL_arg1397z00_1229;

																						BgL_arg1395z00_1227 =
																							(BgL_iz00_1221 + ((long) 1));
																						BgL_arg1396z00_1228 =
																							CDR(((obj_t) BgL_slotsz00_1222));
																						{	/* Eval/expdstruct.scm 149 */
																							obj_t BgL_arg1398z00_1230;
																							obj_t BgL_arg1399z00_1231;

																							{	/* Eval/expdstruct.scm 149 */
																								obj_t BgL_arg1400z00_1232;

																								{	/* Eval/expdstruct.scm 149 */
																									obj_t BgL_arg1401z00_1233;

																									{	/* Eval/expdstruct.scm 149 */
																										obj_t BgL_arg1402z00_1234;

																										{	/* Eval/expdstruct.scm 149 */
																											obj_t BgL_arg1404z00_1235;
																											obj_t BgL_arg1405z00_1236;

																											{	/* Eval/expdstruct.scm 149 */
																												obj_t
																													BgL_arg1406z00_1237;
																												obj_t
																													BgL_arg1407z00_1238;
																												{	/* Eval/expdstruct.scm 149 */
																													obj_t
																														BgL_list1408z00_1239;
																													{	/* Eval/expdstruct.scm 149 */
																														obj_t
																															BgL_arg1409z00_1240;
																														{	/* Eval/expdstruct.scm 149 */
																															obj_t
																																BgL_arg1410z00_1241;
																															BgL_arg1410z00_1241
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_prz00_1226,
																																BNIL);
																															BgL_arg1409z00_1240
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol1953z00zz__expander_structz00,
																																BgL_arg1410z00_1241);
																														}
																														BgL_list1408z00_1239
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_namez00_1062,
																															BgL_arg1409z00_1240);
																													}
																													BgL_arg1406z00_1237 =
																														BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																														(BgL_list1408z00_1239);
																												}
																												BgL_arg1407z00_1238 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol1971z00zz__expander_structz00,
																													BNIL);
																												BgL_arg1404z00_1235 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1406z00_1237,
																													BgL_arg1407z00_1238);
																											}
																											{	/* Eval/expdstruct.scm 150 */
																												obj_t
																													BgL_arg1411z00_1242;
																												{	/* Eval/expdstruct.scm 150 */
																													obj_t
																														BgL_arg1412z00_1243;
																													{	/* Eval/expdstruct.scm 150 */
																														obj_t
																															BgL_arg1413z00_1244;
																														obj_t
																															BgL_arg1414z00_1245;
																														{	/* Eval/expdstruct.scm 150 */
																															obj_t
																																BgL_arg1415z00_1246;
																															obj_t
																																BgL_arg1416z00_1247;
																															{	/* Eval/expdstruct.scm 150 */
																																obj_t
																																	BgL_arg1417z00_1248;
																																{	/* Eval/expdstruct.scm 150 */
																																	obj_t
																																		BgL_arg1418z00_1249;
																																	obj_t
																																		BgL_arg1419z00_1250;
																																	{	/* Eval/expdstruct.scm 150 */
																																		obj_t
																																			BgL_res1862z00_1811;
																																		{	/* Eval/expdstruct.scm 150 */
																																			obj_t
																																				BgL_arg1656z00_1810;
																																			BgL_arg1656z00_1810
																																				=
																																				SYMBOL_TO_STRING
																																				(((obj_t) BgL_namez00_1062));
																																			BgL_res1862z00_1811
																																				=
																																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																				(BgL_arg1656z00_1810);
																																		}
																																		BgL_arg1418z00_1249
																																			=
																																			BgL_res1862z00_1811;
																																	}
																																	{	/* Eval/expdstruct.scm 150 */
																																		obj_t
																																			BgL_res1863z00_1814;
																																		{	/* Eval/expdstruct.scm 150 */
																																			obj_t
																																				BgL_symbolz00_1812;
																																			BgL_symbolz00_1812
																																				=
																																				BGl_symbol1957z00zz__expander_structz00;
																																			{	/* Eval/expdstruct.scm 150 */
																																				obj_t
																																					BgL_arg1656z00_1813;
																																				BgL_arg1656z00_1813
																																					=
																																					SYMBOL_TO_STRING
																																					(BgL_symbolz00_1812);
																																				BgL_res1863z00_1814
																																					=
																																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																					(BgL_arg1656z00_1813);
																																		}}
																																		BgL_arg1419z00_1250
																																			=
																																			BgL_res1863z00_1814;
																																	}
																																	BgL_arg1417z00_1248
																																		=
																																		string_append
																																		(BgL_arg1418z00_1249,
																																		BgL_arg1419z00_1250);
																																}
																																BgL_arg1415z00_1246
																																	=
																																	bstring_to_symbol
																																	(BgL_arg1417z00_1248);
																															}
																															BgL_arg1416z00_1247
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol1971z00zz__expander_structz00,
																																BNIL);
																															BgL_arg1413z00_1244
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1415z00_1246,
																																BgL_arg1416z00_1247);
																														}
																														{	/* Eval/expdstruct.scm 151 */
																															obj_t
																																BgL_arg1420z00_1251;
																															obj_t
																																BgL_arg1421z00_1252;
																															{	/* Eval/expdstruct.scm 151 */
																																obj_t
																																	BgL_arg1422z00_1253;
																																{	/* Eval/expdstruct.scm 151 */
																																	obj_t
																																		BgL_arg1424z00_1254;
																																	BgL_arg1424z00_1254
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BINT
																																		(BgL_iz00_1221),
																																		BNIL);
																																	BgL_arg1422z00_1253
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol1971z00zz__expander_structz00,
																																		BgL_arg1424z00_1254);
																																}
																																BgL_arg1420z00_1251
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_symbol1973z00zz__expander_structz00,
																																	BgL_arg1422z00_1253);
																															}
																															{	/* Eval/expdstruct.scm 154 */
																																obj_t
																																	BgL_arg1425z00_1255;
																																{	/* Eval/expdstruct.scm 154 */
																																	obj_t
																																		BgL_arg1426z00_1256;
																																	{	/* Eval/expdstruct.scm 154 */
																																		obj_t
																																			BgL_arg1427z00_1257;
																																		{	/* Eval/expdstruct.scm 154 */
																																			obj_t
																																				BgL_arg1428z00_1258;
																																			obj_t
																																				BgL_arg1429z00_1259;
																																			{	/* Eval/expdstruct.scm 154 */
																																				obj_t
																																					BgL_res1865z00_1819;
																																				{	/* Eval/expdstruct.scm 154 */
																																					obj_t
																																						BgL_arg1656z00_1818;
																																					BgL_arg1656z00_1818
																																						=
																																						SYMBOL_TO_STRING
																																						(((obj_t) BgL_namez00_1062));
																																					BgL_res1865z00_1819
																																						=
																																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																						(BgL_arg1656z00_1818);
																																				}
																																				BgL_arg1428z00_1258
																																					=
																																					BgL_res1865z00_1819;
																																			}
																																			BgL_arg1429z00_1259
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol1971z00zz__expander_structz00,
																																				BNIL);
																																			BgL_arg1427z00_1257
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1428z00_1258,
																																				BgL_arg1429z00_1259);
																																		}
																																		BgL_arg1426z00_1256
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_string1975z00zz__expander_structz00,
																																			BgL_arg1427z00_1257);
																																	}
																																	BgL_arg1425z00_1255
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol1976z00zz__expander_structz00,
																																		BgL_arg1426z00_1256);
																																}
																																BgL_arg1421z00_1252
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1425z00_1255,
																																	BNIL);
																															}
																															BgL_arg1414z00_1245
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1420z00_1251,
																																BgL_arg1421z00_1252);
																														}
																														BgL_arg1412z00_1243
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1413z00_1244,
																															BgL_arg1414z00_1245);
																													}
																													BgL_arg1411z00_1242 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol1945z00zz__expander_structz00,
																														BgL_arg1412z00_1243);
																												}
																												BgL_arg1405z00_1236 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1411z00_1242,
																													BNIL);
																											}
																											BgL_arg1402z00_1234 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1404z00_1235,
																												BgL_arg1405z00_1236);
																										}
																										BgL_arg1401z00_1233 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol1947z00zz__expander_structz00,
																											BgL_arg1402z00_1234);
																									}
																									BgL_arg1400z00_1232 =
																										BGl_evepairifyz00zz__prognz00
																										(BgL_arg1401z00_1233,
																										BgL_xz00_3);
																								}
																								BgL_arg1398z00_1230 =
																									PROCEDURE_ENTRY(BgL_ez00_4)
																									(BgL_ez00_4,
																									BgL_arg1400z00_1232,
																									BgL_ez00_4, BEOA);
																							}
																							{	/* Eval/expdstruct.scm 162 */
																								obj_t BgL_arg1430z00_1260;

																								{	/* Eval/expdstruct.scm 162 */
																									obj_t BgL_arg1431z00_1261;

																									{	/* Eval/expdstruct.scm 162 */
																										obj_t BgL_arg1432z00_1262;

																										{	/* Eval/expdstruct.scm 162 */
																											obj_t BgL_arg1433z00_1263;

																											{	/* Eval/expdstruct.scm 162 */
																												obj_t
																													BgL_arg1434z00_1264;
																												obj_t
																													BgL_arg1435z00_1265;
																												{	/* Eval/expdstruct.scm 162 */
																													obj_t
																														BgL_arg1436z00_1266;
																													obj_t
																														BgL_arg1437z00_1267;
																													{	/* Eval/expdstruct.scm 162 */
																														obj_t
																															BgL_list1438z00_1268;
																														{	/* Eval/expdstruct.scm 162 */
																															obj_t
																																BgL_arg1439z00_1269;
																															{	/* Eval/expdstruct.scm 162 */
																																obj_t
																																	BgL_arg1440z00_1270;
																																{	/* Eval/expdstruct.scm 162 */
																																	obj_t
																																		BgL_arg1441z00_1271;
																																	BgL_arg1441z00_1271
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol1951z00zz__expander_structz00,
																																		BNIL);
																																	BgL_arg1440z00_1270
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_prz00_1226,
																																		BgL_arg1441z00_1271);
																																}
																																BgL_arg1439z00_1269
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_symbol1953z00zz__expander_structz00,
																																	BgL_arg1440z00_1270);
																															}
																															BgL_list1438z00_1268
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_namez00_1062,
																																BgL_arg1439z00_1269);
																														}
																														BgL_arg1436z00_1266
																															=
																															BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																															(BgL_list1438z00_1268);
																													}
																													{	/* Eval/expdstruct.scm 162 */
																														obj_t
																															BgL_arg1442z00_1272;
																														BgL_arg1442z00_1272
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol1978z00zz__expander_structz00,
																															BNIL);
																														BgL_arg1437z00_1267
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol1971z00zz__expander_structz00,
																															BgL_arg1442z00_1272);
																													}
																													BgL_arg1434z00_1264 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1436z00_1266,
																														BgL_arg1437z00_1267);
																												}
																												{	/* Eval/expdstruct.scm 163 */
																													obj_t
																														BgL_arg1443z00_1273;
																													{	/* Eval/expdstruct.scm 163 */
																														obj_t
																															BgL_arg1444z00_1274;
																														{	/* Eval/expdstruct.scm 163 */
																															obj_t
																																BgL_arg1445z00_1275;
																															obj_t
																																BgL_arg1446z00_1276;
																															{	/* Eval/expdstruct.scm 163 */
																																obj_t
																																	BgL_arg1448z00_1277;
																																obj_t
																																	BgL_arg1449z00_1278;
																																{	/* Eval/expdstruct.scm 163 */
																																	obj_t
																																		BgL_arg1451z00_1279;
																																	{	/* Eval/expdstruct.scm 163 */
																																		obj_t
																																			BgL_arg1452z00_1280;
																																		obj_t
																																			BgL_arg1453z00_1281;
																																		{	/* Eval/expdstruct.scm 163 */
																																			obj_t
																																				BgL_res1866z00_1822;
																																			{	/* Eval/expdstruct.scm 163 */
																																				obj_t
																																					BgL_arg1656z00_1821;
																																				BgL_arg1656z00_1821
																																					=
																																					SYMBOL_TO_STRING
																																					(((obj_t) BgL_namez00_1062));
																																				BgL_res1866z00_1822
																																					=
																																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																					(BgL_arg1656z00_1821);
																																			}
																																			BgL_arg1452z00_1280
																																				=
																																				BgL_res1866z00_1822;
																																		}
																																		{	/* Eval/expdstruct.scm 163 */
																																			obj_t
																																				BgL_res1867z00_1825;
																																			{	/* Eval/expdstruct.scm 163 */
																																				obj_t
																																					BgL_symbolz00_1823;
																																				BgL_symbolz00_1823
																																					=
																																					BGl_symbol1957z00zz__expander_structz00;
																																				{	/* Eval/expdstruct.scm 163 */
																																					obj_t
																																						BgL_arg1656z00_1824;
																																					BgL_arg1656z00_1824
																																						=
																																						SYMBOL_TO_STRING
																																						(BgL_symbolz00_1823);
																																					BgL_res1867z00_1825
																																						=
																																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																						(BgL_arg1656z00_1824);
																																			}}
																																			BgL_arg1453z00_1281
																																				=
																																				BgL_res1867z00_1825;
																																		}
																																		BgL_arg1451z00_1279
																																			=
																																			string_append
																																			(BgL_arg1452z00_1280,
																																			BgL_arg1453z00_1281);
																																	}
																																	BgL_arg1448z00_1277
																																		=
																																		bstring_to_symbol
																																		(BgL_arg1451z00_1279);
																																}
																																BgL_arg1449z00_1278
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_symbol1971z00zz__expander_structz00,
																																	BNIL);
																																BgL_arg1445z00_1275
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1448z00_1277,
																																	BgL_arg1449z00_1278);
																															}
																															{	/* Eval/expdstruct.scm 164 */
																																obj_t
																																	BgL_arg1454z00_1282;
																																obj_t
																																	BgL_arg1455z00_1283;
																																{	/* Eval/expdstruct.scm 164 */
																																	obj_t
																																		BgL_arg1456z00_1284;
																																	{	/* Eval/expdstruct.scm 164 */
																																		obj_t
																																			BgL_arg1457z00_1285;
																																		{	/* Eval/expdstruct.scm 164 */
																																			obj_t
																																				BgL_arg1458z00_1286;
																																			BgL_arg1458z00_1286
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol1978z00zz__expander_structz00,
																																				BNIL);
																																			BgL_arg1457z00_1285
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BINT
																																				(BgL_iz00_1221),
																																				BgL_arg1458z00_1286);
																																		}
																																		BgL_arg1456z00_1284
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol1971z00zz__expander_structz00,
																																			BgL_arg1457z00_1285);
																																	}
																																	BgL_arg1454z00_1282
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol1980z00zz__expander_structz00,
																																		BgL_arg1456z00_1284);
																																}
																																{	/* Eval/expdstruct.scm 167 */
																																	obj_t
																																		BgL_arg1459z00_1287;
																																	{	/* Eval/expdstruct.scm 167 */
																																		obj_t
																																			BgL_arg1460z00_1288;
																																		{	/* Eval/expdstruct.scm 167 */
																																			obj_t
																																				BgL_arg1461z00_1289;
																																			{	/* Eval/expdstruct.scm 167 */
																																				obj_t
																																					BgL_arg1462z00_1290;
																																				obj_t
																																					BgL_arg1463z00_1291;
																																				{	/* Eval/expdstruct.scm 167 */
																																					obj_t
																																						BgL_res1869z00_1830;
																																					{	/* Eval/expdstruct.scm 167 */
																																						obj_t
																																							BgL_arg1656z00_1829;
																																						BgL_arg1656z00_1829
																																							=
																																							SYMBOL_TO_STRING
																																							(((obj_t) BgL_namez00_1062));
																																						BgL_res1869z00_1830
																																							=
																																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																							(BgL_arg1656z00_1829);
																																					}
																																					BgL_arg1462z00_1290
																																						=
																																						BgL_res1869z00_1830;
																																				}
																																				BgL_arg1463z00_1291
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol1971z00zz__expander_structz00,
																																					BNIL);
																																				BgL_arg1461z00_1289
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1462z00_1290,
																																					BgL_arg1463z00_1291);
																																			}
																																			BgL_arg1460z00_1288
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_string1982z00zz__expander_structz00,
																																				BgL_arg1461z00_1289);
																																		}
																																		BgL_arg1459z00_1287
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol1976z00zz__expander_structz00,
																																			BgL_arg1460z00_1288);
																																	}
																																	BgL_arg1455z00_1283
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1459z00_1287,
																																		BNIL);
																																}
																																BgL_arg1446z00_1276
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1454z00_1282,
																																	BgL_arg1455z00_1283);
																															}
																															BgL_arg1444z00_1274
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1445z00_1275,
																																BgL_arg1446z00_1276);
																														}
																														BgL_arg1443z00_1273
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol1945z00zz__expander_structz00,
																															BgL_arg1444z00_1274);
																													}
																													BgL_arg1435z00_1265 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1443z00_1273,
																														BNIL);
																												}
																												BgL_arg1433z00_1263 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1434z00_1264,
																													BgL_arg1435z00_1265);
																											}
																											BgL_arg1432z00_1262 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol1947z00zz__expander_structz00,
																												BgL_arg1433z00_1263);
																										}
																										BgL_arg1431z00_1261 =
																											BGl_evepairifyz00zz__prognz00
																											(BgL_arg1432z00_1262,
																											BgL_xz00_3);
																									}
																									BgL_arg1430z00_1260 =
																										PROCEDURE_ENTRY(BgL_ez00_4)
																										(BgL_ez00_4,
																										BgL_arg1431z00_1261,
																										BgL_ez00_4, BEOA);
																								}
																								BgL_arg1399z00_1231 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1430z00_1260,
																									BgL_resz00_1223);
																							}
																							BgL_arg1397z00_1229 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1398z00_1230,
																								BgL_arg1399z00_1231);
																						}
																						{
																							obj_t BgL_resz00_2437;
																							obj_t BgL_slotsz00_2436;
																							long BgL_iz00_2435;

																							BgL_iz00_2435 =
																								BgL_arg1395z00_1227;
																							BgL_slotsz00_2436 =
																								BgL_arg1396z00_1228;
																							BgL_resz00_2437 =
																								BgL_arg1397z00_1229;
																							BgL_resz00_1223 = BgL_resz00_2437;
																							BgL_slotsz00_1222 =
																								BgL_slotsz00_2436;
																							BgL_iz00_1221 = BgL_iz00_2435;
																							goto
																								BgL_zc3z04anonymousza31393ze3z87_1224;
																						}
																					}
																				}
																		}
																	}
																	BgL_arg1325z00_1152 =
																		MAKE_YOUNG_PAIR(BgL_arg1367z00_1194,
																		BgL_arg1368z00_1195);
																}
																BgL_arg1179z00_1078 =
																	MAKE_YOUNG_PAIR(BgL_arg1324z00_1151,
																	BgL_arg1325z00_1152);
															}
															BgL_arg1177z00_1076 =
																MAKE_YOUNG_PAIR(BgL_arg1178z00_1077,
																BgL_arg1179z00_1078);
														}
														return
															MAKE_YOUNG_PAIR
															(BGl_symbol1983z00zz__expander_structz00,
															BgL_arg1177z00_1076);
													}
												}
											}
										}
									}
								}
							}
						else
							{	/* Eval/expdstruct.scm 61 */
								return
									BGl_expandzd2errorzd2zz__expandz00
									(BGl_string1922z00zz__expander_structz00,
									BGl_string1923z00zz__expander_structz00, BgL_xz00_3);
							}
					}
				else
					{	/* Eval/expdstruct.scm 61 */
						return
							BGl_expandzd2errorzd2zz__expandz00
							(BGl_string1922z00zz__expander_structz00,
							BGl_string1923z00zz__expander_structz00, BgL_xz00_3);
					}
			}
		}

	}



/* &expand-eval-define-struct */
	obj_t BGl_z62expandzd2evalzd2definezd2structzb0zz__expander_structz00(obj_t
		BgL_envz00_2075, obj_t BgL_xz00_2076, obj_t BgL_ez00_2077)
	{
		{	/* Eval/expdstruct.scm 60 */
			return
				BGl_expandzd2evalzd2definezd2structzd2zz__expander_structz00
				(BgL_xz00_2076, BgL_ez00_2077);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__expander_structz00()
	{
		{	/* Eval/expdstruct.scm 18 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_structz00()
	{
		{	/* Eval/expdstruct.scm 18 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_structz00()
	{
		{	/* Eval/expdstruct.scm 18 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_structz00()
	{
		{	/* Eval/expdstruct.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(((long)
					515155831),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
			return BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string1985z00zz__expander_structz00));
		}

	}

#ifdef __cplusplus
}
#endif
