/*===========================================================================*/
/*   (Llib/dsssl.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/dsssl.scm -indent -o objs/obj_u/Llib/dsssl.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL bool_t
		BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__dssslz00 = BUNSPEC;
	static obj_t BGl_z62dssslzd2getzd2keyzd2argzb0zz__dssslz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62restzd2statezb0zz__dssslz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00(obj_t, obj_t);
	static obj_t BGl_z62dssslzd2namedzd2constantzf3z91zz__dssslz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__dssslz00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_objectzd2initzd2zz__dssslz00();
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62dssslzd2checkzd2keyzd2argsz12za2zz__dssslz00(obj_t, obj_t,
		obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	static obj_t
		BGl_z62dssslzd2formalszd2ze3schemezd2formalsz53zz__dssslz00(obj_t, obj_t,
		obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zz__dssslz00();
	static obj_t BGl_list2255z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_idzd2sanszd2typez00zz__dssslz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00(obj_t, obj_t);
	static obj_t BGl_list2192z00zz__dssslz00 = BUNSPEC;
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t
		BGl_z62dssslzd2formalszd2ze3schemezd2typedzd2formalsz81zz__dssslz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_symbol2203z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2205z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_z62optionalzd2statezb0zz__dssslz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2207z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2209z00zz__dssslz00 = BUNSPEC;
	extern obj_t BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_symbol2211z00zz__dssslz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_dssslzd2formalszd2ze3schemezd2formalsz31zz__dssslz00(obj_t, obj_t);
	static obj_t BGl_symbol2214z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2216z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2218z00zz__dssslz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zz__dssslz00();
	BGL_EXPORTED_DECL obj_t BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2221z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2223z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2225z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2227z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zz__dssslz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__dssslz00();
	static obj_t BGl_symbol2231z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2233z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2235z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2237z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2239z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_z62dssslzd2getzd2keyzd2restzd2argz62zz__dssslz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2241z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_z62nozd2restzd2keyzd2statezb0zz__dssslz00(obj_t, obj_t,
		obj_t);
	extern obj_t c_substring(obj_t, long, long);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalsze3zz__dssslz00(obj_t,
		obj_t, bool_t);
	static obj_t BGl_symbol2194z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_symbol2196z00zz__dssslz00 = BUNSPEC;
	static obj_t BGl_optionalzd2argsze70z35zz__dssslz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_loopze70ze7zz__dssslz00(bool_t, obj_t, obj_t, obj_t, bool_t);
	static obj_t BGl_loopze71ze7zz__dssslz00(obj_t, obj_t);
	static obj_t BGl_z62keyzd2statezb0zz__dssslz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, bool_t);
	static obj_t BGl_z62makezd2dssslzd2functionzd2preludezb0zz__dssslz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2formalszd2ze3schemezd2formalszd2envze3zz__dssslz00,
		BgL_bgl_za762dssslza7d2forma2263z00,
		BGl_z62dssslzd2formalszd2ze3schemezd2formalsz53zz__dssslz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2200z00zz__dssslz00,
		BgL_bgl_string2200za700za7za7_2264za7, "/tmp/4.4a/runtime/Llib/dsssl.scm",
		32);
	      DEFINE_STRING(BGl_string2201z00zz__dssslz00,
		BgL_bgl_string2201za700za7za7_2265za7, "&make-dsssl-function-prelude", 28);
	      DEFINE_STRING(BGl_string2202z00zz__dssslz00,
		BgL_bgl_string2202za700za7za7_2266za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2204z00zz__dssslz00,
		BgL_bgl_string2204za700za7za7_2267za7, "quote", 5);
	      DEFINE_STRING(BGl_string2206z00zz__dssslz00,
		BgL_bgl_string2206za700za7za7_2268za7, "dsssl-get-key-rest-arg", 22);
	      DEFINE_STRING(BGl_string2208z00zz__dssslz00,
		BgL_bgl_string2208za700za7za7_2269za7, "dsssl-get-key-arg", 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2getzd2keyzd2argzd2envz00zz__dssslz00,
		BgL_bgl_za762dssslza7d2getza7d2270za7,
		BGl_z62dssslzd2getzd2keyzd2argzb0zz__dssslz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2210z00zz__dssslz00,
		BgL_bgl_string2210za700za7za7_2271za7, "null?", 5);
	      DEFINE_STRING(BGl_string2212z00zz__dssslz00,
		BgL_bgl_string2212za700za7za7_2272za7, "v", 1);
	      DEFINE_STRING(BGl_string2213z00zz__dssslz00,
		BgL_bgl_string2213za700za7za7_2273za7, "~a ", 3);
	      DEFINE_STRING(BGl_string2215z00zz__dssslz00,
		BgL_bgl_string2215za700za7za7_2274za7, "format", 6);
	      DEFINE_STRING(BGl_string2217z00zz__dssslz00,
		BgL_bgl_string2217za700za7za7_2275za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2219z00zz__dssslz00,
		BgL_bgl_string2219za700za7za7_2276za7, "map", 3);
	      DEFINE_STRING(BGl_string2220z00zz__dssslz00,
		BgL_bgl_string2220za700za7za7_2277za7, "Illegal extra key arguments: ", 29);
	      DEFINE_STRING(BGl_string2222z00zz__dssslz00,
		BgL_bgl_string2222za700za7za7_2278za7, "string-append", 13);
	      DEFINE_STRING(BGl_string2224z00zz__dssslz00,
		BgL_bgl_string2224za700za7za7_2279za7, "apply", 5);
	      DEFINE_STRING(BGl_string2226z00zz__dssslz00,
		BgL_bgl_string2226za700za7za7_2280za7, "error", 5);
	      DEFINE_STRING(BGl_string2228z00zz__dssslz00,
		BgL_bgl_string2228za700za7za7_2281za7, "if", 2);
	      DEFINE_STRING(BGl_string2229z00zz__dssslz00,
		BgL_bgl_string2229za700za7za7_2282za7, "Illegal DSSSL formal list (#!rest)",
		34);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2namedzd2constantzf3zd2envz21zz__dssslz00,
		BgL_bgl_za762dssslza7d2named2283z00,
		BGl_z62dssslzd2namedzd2constantzf3z91zz__dssslz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2230z00zz__dssslz00,
		BgL_bgl_string2230za700za7za7_2284za7, "Illegal DSSSL formal list (#!key)",
		33);
	      DEFINE_STRING(BGl_string2232z00zz__dssslz00,
		BgL_bgl_string2232za700za7za7_2285za7, "tmp", 3);
	      DEFINE_STRING(BGl_string2234z00zz__dssslz00,
		BgL_bgl_string2234za700za7za7_2286za7, "car", 3);
	      DEFINE_STRING(BGl_string2236z00zz__dssslz00,
		BgL_bgl_string2236za700za7za7_2287za7, "memq", 4);
	      DEFINE_STRING(BGl_string2238z00zz__dssslz00,
		BgL_bgl_string2238za700za7za7_2288za7, "cdr", 3);
	      DEFINE_STRING(BGl_string2240z00zz__dssslz00,
		BgL_bgl_string2240za700za7za7_2289za7, "set!", 4);
	      DEFINE_STRING(BGl_string2242z00zz__dssslz00,
		BgL_bgl_string2242za700za7za7_2290za7, "begin", 5);
	      DEFINE_STRING(BGl_string2243z00zz__dssslz00,
		BgL_bgl_string2243za700za7za7_2291za7,
		"Illegal DSSSL formal list (#!optional)", 38);
	      DEFINE_STRING(BGl_string2244z00zz__dssslz00,
		BgL_bgl_string2244za700za7za7_2292za7, "Illegal #!keys parameters", 25);
	      DEFINE_STRING(BGl_string2245z00zz__dssslz00,
		BgL_bgl_string2245za700za7za7_2293za7, "dsssl formal parsing", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2getzd2keyzd2restzd2argzd2envzd2zz__dssslz00,
		BgL_bgl_za762dssslza7d2getza7d2294za7,
		BGl_z62dssslzd2getzd2keyzd2restzd2argz62zz__dssslz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2246z00zz__dssslz00,
		BgL_bgl_string2246za700za7za7_2295za7, "Unexpected #!keys parameters", 28);
	      DEFINE_STRING(BGl_string2247z00zz__dssslz00,
		BgL_bgl_string2247za700za7za7_2296za7, "Keyword argument misses value", 29);
	      DEFINE_STRING(BGl_string2248z00zz__dssslz00,
		BgL_bgl_string2248za700za7za7_2297za7, "Illegal keyword actual value", 28);
	      DEFINE_STRING(BGl_string2249z00zz__dssslz00,
		BgL_bgl_string2249za700za7za7_2298za7, "Illegal DSSSL arguments", 23);
	      DEFINE_STRING(BGl_string2250z00zz__dssslz00,
		BgL_bgl_string2250za700za7za7_2299za7, "&dsssl-get-key-arg", 18);
	      DEFINE_STRING(BGl_string2251z00zz__dssslz00,
		BgL_bgl_string2251za700za7za7_2300za7, "keyword", 7);
	      DEFINE_STRING(BGl_string2252z00zz__dssslz00,
		BgL_bgl_string2252za700za7za7_2301za7, "&dsssl-get-key-rest-arg", 23);
	      DEFINE_STRING(BGl_string2253z00zz__dssslz00,
		BgL_bgl_string2253za700za7za7_2302za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string2254z00zz__dssslz00,
		BgL_bgl_string2254za700za7za7_2303za7, "&dsssl-formals->scheme-formals",
		30);
	      DEFINE_STRING(BGl_string2256z00zz__dssslz00,
		BgL_bgl_string2256za700za7za7_2304za7, "Illegal formal parameter", 24);
	      DEFINE_STRING(BGl_string2257z00zz__dssslz00,
		BgL_bgl_string2257za700za7za7_2305za7, "symbol or named constant expected",
		33);
	      DEFINE_STRING(BGl_string2258z00zz__dssslz00,
		BgL_bgl_string2258za700za7za7_2306za7, "symbol expected", 15);
	      DEFINE_STRING(BGl_string2259z00zz__dssslz00,
		BgL_bgl_string2259za700za7za7_2307za7,
		"Can't use both DSSSL named constant", 35);
	      DEFINE_STRING(BGl_string2260z00zz__dssslz00,
		BgL_bgl_string2260za700za7za7_2308za7, "and `.' notation", 16);
	      DEFINE_STRING(BGl_string2261z00zz__dssslz00,
		BgL_bgl_string2261za700za7za7_2309za7,
		"&dsssl-formals->scheme-typed-formals", 36);
	      DEFINE_STRING(BGl_string2262z00zz__dssslz00,
		BgL_bgl_string2262za700za7za7_2310za7, "__dsssl", 7);
	      DEFINE_STRING(BGl_string2193z00zz__dssslz00,
		BgL_bgl_string2193za700za7za7_2311za7, "Illegal formal list.1", 21);
	      DEFINE_STRING(BGl_string2195z00zz__dssslz00,
		BgL_bgl_string2195za700za7za7_2312za7, "dsssl", 5);
	      DEFINE_STRING(BGl_string2197z00zz__dssslz00,
		BgL_bgl_string2197za700za7za7_2313za7, "let", 3);
	      DEFINE_STRING(BGl_string2198z00zz__dssslz00,
		BgL_bgl_string2198za700za7za7_2314za7, "Illegal formal list.3", 21);
	      DEFINE_STRING(BGl_string2199z00zz__dssslz00,
		BgL_bgl_string2199za700za7za7_2315za7, "Illegal formal list.2", 21);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2dssslzd2functionzd2preludezd2envz00zz__dssslz00,
		BgL_bgl_za762makeza7d2dssslza72316za7,
		BGl_z62makezd2dssslzd2functionzd2preludezb0zz__dssslz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalszd2envz31zz__dssslz00,
		BgL_bgl_za762dssslza7d2forma2317z00,
		BGl_z62dssslzd2formalszd2ze3schemezd2typedzd2formalsz81zz__dssslz00, 0L,
		BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2checkzd2keyzd2argsz12zd2envz12zz__dssslz00,
		BgL_bgl_za762dssslza7d2check2318z00,
		BGl_z62dssslzd2checkzd2keyzd2argsz12za2zz__dssslz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_list2255z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_list2192z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_symbol2203z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_symbol2205z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_symbol2207z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_symbol2209z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_symbol2211z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_symbol2214z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_symbol2216z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_symbol2218z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_symbol2221z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_symbol2223z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_symbol2225z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_symbol2227z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_symbol2231z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_symbol2233z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_symbol2235z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_symbol2237z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_symbol2239z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_symbol2241z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_symbol2194z00zz__dssslz00));
		     ADD_ROOT((void *) (&BGl_symbol2196z00zz__dssslz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long
		BgL_checksumz00_2730, char *BgL_fromz00_2731)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__dssslz00))
				{
					BGl_requirezd2initializa7ationz75zz__dssslz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__dssslz00();
					BGl_cnstzd2initzd2zz__dssslz00();
					BGl_importedzd2moduleszd2initz00zz__dssslz00();
					return BGl_methodzd2initzd2zz__dssslz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__dssslz00()
	{
		{	/* Llib/dsssl.scm 14 */
			BGl_list2192z00zz__dssslz00 =
				MAKE_YOUNG_PAIR((BREST),
				MAKE_YOUNG_PAIR((BOPTIONAL), MAKE_YOUNG_PAIR((BKEY), BNIL)));
			BGl_symbol2194z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2195z00zz__dssslz00);
			BGl_symbol2196z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2197z00zz__dssslz00);
			BGl_symbol2203z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2204z00zz__dssslz00);
			BGl_symbol2205z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2206z00zz__dssslz00);
			BGl_symbol2207z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2208z00zz__dssslz00);
			BGl_symbol2209z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2210z00zz__dssslz00);
			BGl_symbol2211z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2212z00zz__dssslz00);
			BGl_symbol2214z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2215z00zz__dssslz00);
			BGl_symbol2216z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2217z00zz__dssslz00);
			BGl_symbol2218z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2219z00zz__dssslz00);
			BGl_symbol2221z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2222z00zz__dssslz00);
			BGl_symbol2223z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2224z00zz__dssslz00);
			BGl_symbol2225z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2226z00zz__dssslz00);
			BGl_symbol2227z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2228z00zz__dssslz00);
			BGl_symbol2231z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2232z00zz__dssslz00);
			BGl_symbol2233z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2234z00zz__dssslz00);
			BGl_symbol2235z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2236z00zz__dssslz00);
			BGl_symbol2237z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2238z00zz__dssslz00);
			BGl_symbol2239z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2240z00zz__dssslz00);
			BGl_symbol2241z00zz__dssslz00 =
				bstring_to_symbol(BGl_string2242z00zz__dssslz00);
			return (BGl_list2255z00zz__dssslz00 =
				MAKE_YOUNG_PAIR((BOPTIONAL),
					MAKE_YOUNG_PAIR((BREST), MAKE_YOUNG_PAIR((BKEY), BNIL))), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__dssslz00()
	{
		{	/* Llib/dsssl.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* dsssl-named-constant? */
	BGL_EXPORTED_DEF bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t
		BgL_objz00_3)
	{
		{	/* Llib/dsssl.scm 59 */
			if (CNSTP(BgL_objz00_3))
				{	/* Llib/dsssl.scm 60 */
					return
						CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_3,
							BGl_list2192z00zz__dssslz00));
				}
			else
				{	/* Llib/dsssl.scm 60 */
					return ((bool_t) 0);
				}
		}

	}



/* &dsssl-named-constant? */
	obj_t BGl_z62dssslzd2namedzd2constantzf3z91zz__dssslz00(obj_t BgL_envz00_2595,
		obj_t BgL_objz00_2596)
	{
		{	/* Llib/dsssl.scm 59 */
			return
				BBOOL(BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(BgL_objz00_2596));
		}

	}



/* make-dsssl-function-prelude */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t BgL_wherez00_4,
		obj_t BgL_formalsz00_5, obj_t BgL_bodyz00_6, obj_t BgL_errz00_7)
	{
		{	/* Llib/dsssl.scm 71 */
			{	/* Llib/dsssl.scm 75 */
				obj_t BgL_nozd2restzd2keyzd2statezd2_2598;
				obj_t BgL_restzd2statezd2_2599;
				obj_t BgL_optionalzd2statezd2_2600;

				{
					int BgL_tmpz00_2772;

					BgL_tmpz00_2772 = (int) (((long) 4));
					BgL_nozd2restzd2keyzd2statezd2_2598 =
						MAKE_L_PROCEDURE(BGl_z62nozd2restzd2keyzd2statezb0zz__dssslz00,
						BgL_tmpz00_2772);
				}
				{
					int BgL_tmpz00_2775;

					BgL_tmpz00_2775 = (int) (((long) 4));
					BgL_restzd2statezd2_2599 =
						MAKE_L_PROCEDURE(BGl_z62restzd2statezb0zz__dssslz00,
						BgL_tmpz00_2775);
				}
				{
					int BgL_tmpz00_2778;

					BgL_tmpz00_2778 = (int) (((long) 6));
					BgL_optionalzd2statezd2_2600 =
						MAKE_L_PROCEDURE(BGl_z62optionalzd2statezb0zz__dssslz00,
						BgL_tmpz00_2778);
				}
				PROCEDURE_L_SET(BgL_nozd2restzd2keyzd2statezd2_2598,
					(int) (((long) 0)), BgL_bodyz00_6);
				PROCEDURE_L_SET(BgL_nozd2restzd2keyzd2statezd2_2598,
					(int) (((long) 1)), BgL_errz00_7);
				PROCEDURE_L_SET(BgL_nozd2restzd2keyzd2statezd2_2598,
					(int) (((long) 2)), BgL_wherez00_4);
				PROCEDURE_L_SET(BgL_nozd2restzd2keyzd2statezd2_2598,
					(int) (((long) 3)), BgL_formalsz00_5);
				PROCEDURE_L_SET(BgL_restzd2statezd2_2599,
					(int) (((long) 0)), BgL_errz00_7);
				PROCEDURE_L_SET(BgL_restzd2statezd2_2599,
					(int) (((long) 1)), BgL_wherez00_4);
				PROCEDURE_L_SET(BgL_restzd2statezd2_2599,
					(int) (((long) 2)), BgL_formalsz00_5);
				PROCEDURE_L_SET(BgL_restzd2statezd2_2599,
					(int) (((long) 3)), BgL_bodyz00_6);
				PROCEDURE_L_SET(BgL_optionalzd2statezd2_2600,
					(int) (((long) 0)), BgL_errz00_7);
				PROCEDURE_L_SET(BgL_optionalzd2statezd2_2600,
					(int) (((long) 1)), BgL_wherez00_4);
				PROCEDURE_L_SET(BgL_optionalzd2statezd2_2600,
					(int) (((long) 2)), BgL_formalsz00_5);
				PROCEDURE_L_SET(BgL_optionalzd2statezd2_2600,
					(int) (((long) 3)), BgL_nozd2restzd2keyzd2statezd2_2598);
				PROCEDURE_L_SET(BgL_optionalzd2statezd2_2600,
					(int) (((long) 4)), BgL_restzd2statezd2_2599);
				PROCEDURE_L_SET(BgL_optionalzd2statezd2_2600,
					(int) (((long) 5)), BgL_bodyz00_6);
				{
					obj_t BgL_argsz00_1084;
					obj_t BgL_nextzd2statezd2_1085;
					obj_t BgL_argsz00_1055;

					BgL_argsz00_1055 = BgL_formalsz00_5;
				BgL_zc3z04anonymousza31167ze3z87_1056:
					if (PAIRP(BgL_argsz00_1055))
						{	/* Llib/dsssl.scm 77 */
							bool_t BgL_test2322z00_2811;

							{	/* Llib/dsssl.scm 77 */
								bool_t BgL_test2323z00_2812;

								{	/* Llib/dsssl.scm 77 */
									obj_t BgL_tmpz00_2813;

									BgL_tmpz00_2813 = CAR(BgL_argsz00_1055);
									BgL_test2323z00_2812 = SYMBOLP(BgL_tmpz00_2813);
								}
								if (BgL_test2323z00_2812)
									{	/* Llib/dsssl.scm 77 */
										BgL_test2322z00_2811 = ((bool_t) 0);
									}
								else
									{	/* Llib/dsssl.scm 77 */
										bool_t BgL_test2324z00_2816;

										{	/* Llib/dsssl.scm 77 */
											obj_t BgL_tmpz00_2817;

											BgL_tmpz00_2817 = CAR(BgL_argsz00_1055);
											BgL_test2324z00_2816 = PAIRP(BgL_tmpz00_2817);
										}
										if (BgL_test2324z00_2816)
											{	/* Llib/dsssl.scm 77 */
												BgL_test2322z00_2811 = ((bool_t) 0);
											}
										else
											{	/* Llib/dsssl.scm 77 */
												BgL_test2322z00_2811 = ((bool_t) 1);
											}
									}
							}
							if (BgL_test2322z00_2811)
								{	/* Llib/dsssl.scm 77 */
									if ((CAR(BgL_argsz00_1055) == (BOPTIONAL)))
										{	/* Llib/dsssl.scm 81 */
											BgL_argsz00_1084 = CDR(BgL_argsz00_1055);
											BgL_nextzd2statezd2_1085 = BgL_optionalzd2statezd2_2600;
										BgL_zc3z04anonymousza31228ze3z87_1086:
											{
												obj_t BgL_asz00_1088;

												BgL_asz00_1088 = BgL_argsz00_1084;
												if (PAIRP(BgL_asz00_1088))
													{

														{	/* Llib/dsssl.scm 99 */
															obj_t BgL_ezd2104zd2_1094;

															BgL_ezd2104zd2_1094 = CAR(BgL_asz00_1088);
															if (SYMBOLP(BgL_ezd2104zd2_1094))
																{	/* Llib/dsssl.scm 99 */
																	{	/* Llib/dsssl.scm 101 */
																		obj_t BgL_dssslzd2argzd2_1105;

																		BgL_dssslzd2argzd2_1105 =
																			BGl_gensymz00zz__r4_symbols_6_4z00
																			(BGl_symbol2194z00zz__dssslz00);
																		{	/* Llib/dsssl.scm 102 */
																			obj_t BgL_arg1247z00_1106;

																			{	/* Llib/dsssl.scm 102 */
																				obj_t BgL_arg1250z00_1107;
																				obj_t BgL_arg1252z00_1108;

																				{	/* Llib/dsssl.scm 102 */
																					obj_t BgL_arg1253z00_1109;

																					{	/* Llib/dsssl.scm 102 */
																						obj_t BgL_arg1254z00_1110;

																						{	/* Llib/dsssl.scm 102 */
																							obj_t BgL_arg1256z00_1111;

																							BgL_arg1256z00_1111 =
																								CAR(((obj_t) BgL_asz00_1088));
																							BgL_arg1254z00_1110 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1256z00_1111, BNIL);
																						}
																						BgL_arg1253z00_1109 =
																							MAKE_YOUNG_PAIR
																							(BgL_dssslzd2argzd2_1105,
																							BgL_arg1254z00_1110);
																					}
																					BgL_arg1250z00_1107 =
																						MAKE_YOUNG_PAIR(BgL_arg1253z00_1109,
																						BNIL);
																				}
																				{	/* Llib/dsssl.scm 103 */
																					obj_t BgL_arg1258z00_1112;

																					BgL_arg1258z00_1112 =
																						PROCEDURE_L_ENTRY
																						(BgL_nextzd2statezd2_1085)
																						(BgL_nextzd2statezd2_1085,
																						BgL_argsz00_1084,
																						BgL_dssslzd2argzd2_1105);
																					BgL_arg1252z00_1108 =
																						MAKE_YOUNG_PAIR(BgL_arg1258z00_1112,
																						BNIL);
																				}
																				BgL_arg1247z00_1106 =
																					MAKE_YOUNG_PAIR(BgL_arg1250z00_1107,
																					BgL_arg1252z00_1108);
																			}
																			return
																				MAKE_YOUNG_PAIR
																				(BGl_symbol2196z00zz__dssslz00,
																				BgL_arg1247z00_1106);
																		}
																	}
																}
															else
																{	/* Llib/dsssl.scm 99 */
																	if (PAIRP(BgL_ezd2104zd2_1094))
																		{	/* Llib/dsssl.scm 99 */
																			obj_t BgL_cdrzd2106zd2_1097;

																			BgL_cdrzd2106zd2_1097 =
																				CDR(BgL_ezd2104zd2_1094);
																			{	/* Llib/dsssl.scm 99 */
																				bool_t BgL_test2329z00_2845;

																				{	/* Llib/dsssl.scm 99 */
																					obj_t BgL_tmpz00_2846;

																					BgL_tmpz00_2846 =
																						CAR(BgL_ezd2104zd2_1094);
																					BgL_test2329z00_2845 =
																						SYMBOLP(BgL_tmpz00_2846);
																				}
																				if (BgL_test2329z00_2845)
																					{	/* Llib/dsssl.scm 99 */
																						if (PAIRP(BgL_cdrzd2106zd2_1097))
																							{	/* Llib/dsssl.scm 99 */
																								if (NULLP(CDR
																										(BgL_cdrzd2106zd2_1097)))
																									{	/* Llib/dsssl.scm 99 */
																										{	/* Llib/dsssl.scm 105 */
																											obj_t
																												BgL_dssslzd2argzd2_1113;
																											BgL_dssslzd2argzd2_1113 =
																												BGl_gensymz00zz__r4_symbols_6_4z00
																												(BGl_symbol2194z00zz__dssslz00);
																											{	/* Llib/dsssl.scm 106 */
																												obj_t
																													BgL_arg1263z00_1114;
																												{	/* Llib/dsssl.scm 106 */
																													obj_t
																														BgL_arg1268z00_1115;
																													obj_t
																														BgL_arg1270z00_1116;
																													{	/* Llib/dsssl.scm 106 */
																														obj_t
																															BgL_arg1271z00_1117;
																														{	/* Llib/dsssl.scm 106 */
																															obj_t
																																BgL_arg1273z00_1118;
																															{	/* Llib/dsssl.scm 106 */
																																obj_t
																																	BgL_arg1274z00_1119;
																																{	/* Llib/dsssl.scm 106 */
																																	obj_t
																																		BgL_pairz00_2072;
																																	BgL_pairz00_2072
																																		=
																																		CAR(((obj_t)
																																			BgL_asz00_1088));
																																	BgL_arg1274z00_1119
																																		=
																																		CAR
																																		(BgL_pairz00_2072);
																																}
																																BgL_arg1273z00_1118
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1274z00_1119,
																																	BNIL);
																															}
																															BgL_arg1271z00_1117
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_dssslzd2argzd2_1113,
																																BgL_arg1273z00_1118);
																														}
																														BgL_arg1268z00_1115
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1271z00_1117,
																															BNIL);
																													}
																													{	/* Llib/dsssl.scm 107 */
																														obj_t
																															BgL_arg1276z00_1121;
																														BgL_arg1276z00_1121
																															=
																															PROCEDURE_L_ENTRY
																															(BgL_nextzd2statezd2_1085)
																															(BgL_nextzd2statezd2_1085,
																															BgL_argsz00_1084,
																															BgL_dssslzd2argzd2_1113);
																														BgL_arg1270z00_1116
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1276z00_1121,
																															BNIL);
																													}
																													BgL_arg1263z00_1114 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1268z00_1115,
																														BgL_arg1270z00_1116);
																												}
																												return
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2196z00zz__dssslz00,
																													BgL_arg1263z00_1114);
																											}
																										}
																									}
																								else
																									{	/* Llib/dsssl.scm 99 */
																									BgL_tagzd2103zd2_1093:
																										{	/* Llib/dsssl.scm 109 */
																											obj_t BgL_arg1277z00_1122;

																											{	/* Llib/dsssl.scm 109 */
																												obj_t
																													BgL_arg1280z00_1123;
																												BgL_arg1280z00_1123 =
																													CAR(((obj_t)
																														BgL_asz00_1088));
																												BgL_arg1277z00_1122 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1280z00_1123,
																													BgL_formalsz00_5);
																											}
																											return
																												PROCEDURE_ENTRY
																												(BgL_errz00_7)
																												(BgL_errz00_7,
																												BgL_wherez00_4,
																												BGl_string2198z00zz__dssslz00,
																												BgL_arg1277z00_1122,
																												BEOA);
																										}
																									}
																							}
																						else
																							{	/* Llib/dsssl.scm 99 */
																								goto BgL_tagzd2103zd2_1093;
																							}
																					}
																				else
																					{	/* Llib/dsssl.scm 99 */
																						goto BgL_tagzd2103zd2_1093;
																					}
																			}
																		}
																	else
																		{	/* Llib/dsssl.scm 99 */
																			goto BgL_tagzd2103zd2_1093;
																		}
																}
														}
													}
												else
													{	/* Llib/dsssl.scm 97 */
														obj_t BgL_arg1281z00_1124;

														BgL_arg1281z00_1124 =
															MAKE_YOUNG_PAIR(BgL_asz00_1088, BgL_formalsz00_5);
														return
															PROCEDURE_ENTRY(BgL_errz00_7) (BgL_errz00_7,
															BgL_wherez00_4, BGl_string2199z00zz__dssslz00,
															BgL_arg1281z00_1124, BEOA);
													}
											}
										}
									else
										{	/* Llib/dsssl.scm 81 */
											if ((CAR(BgL_argsz00_1055) == (BREST)))
												{
													obj_t BgL_nextzd2statezd2_2891;
													obj_t BgL_argsz00_2889;

													BgL_argsz00_2889 = CDR(BgL_argsz00_1055);
													BgL_nextzd2statezd2_2891 = BgL_restzd2statezd2_2599;
													BgL_nextzd2statezd2_1085 = BgL_nextzd2statezd2_2891;
													BgL_argsz00_1084 = BgL_argsz00_2889;
													goto BgL_zc3z04anonymousza31228ze3z87_1086;
												}
											else
												{	/* Llib/dsssl.scm 83 */
													if ((CAR(BgL_argsz00_1055) == (BKEY)))
														{
															obj_t BgL_nextzd2statezd2_2897;
															obj_t BgL_argsz00_2895;

															BgL_argsz00_2895 = CDR(BgL_argsz00_1055);
															BgL_nextzd2statezd2_2897 =
																BgL_nozd2restzd2keyzd2statezd2_2598;
															BgL_nextzd2statezd2_1085 =
																BgL_nextzd2statezd2_2897;
															BgL_argsz00_1084 = BgL_argsz00_2895;
															goto BgL_zc3z04anonymousza31228ze3z87_1086;
														}
													else
														{	/* Llib/dsssl.scm 88 */
															obj_t BgL_arg1201z00_1074;

															BgL_arg1201z00_1074 =
																MAKE_YOUNG_PAIR(CAR(BgL_argsz00_1055),
																BgL_formalsz00_5);
															return
																PROCEDURE_ENTRY(BgL_errz00_7) (BgL_errz00_7,
																BgL_wherez00_4, BGl_string2193z00zz__dssslz00,
																BgL_arg1201z00_1074, BEOA);
														}
												}
										}
								}
							else
								{
									obj_t BgL_argsz00_2906;

									BgL_argsz00_2906 = CDR(BgL_argsz00_1055);
									BgL_argsz00_1055 = BgL_argsz00_2906;
									goto BgL_zc3z04anonymousza31167ze3z87_1056;
								}
						}
					else
						{	/* Llib/dsssl.scm 75 */
							return BgL_bodyz00_6;
						}
				}
			}
		}

	}



/* &make-dsssl-function-prelude */
	obj_t BGl_z62makezd2dssslzd2functionzd2preludezb0zz__dssslz00(obj_t
		BgL_envz00_2601, obj_t BgL_wherez00_2602, obj_t BgL_formalsz00_2603,
		obj_t BgL_bodyz00_2604, obj_t BgL_errz00_2605)
	{
		{	/* Llib/dsssl.scm 71 */
			{	/* Llib/dsssl.scm 75 */
				obj_t BgL_auxz00_2908;

				if (PROCEDUREP(BgL_errz00_2605))
					{	/* Llib/dsssl.scm 75 */
						BgL_auxz00_2908 = BgL_errz00_2605;
					}
				else
					{
						obj_t BgL_auxz00_2911;

						BgL_auxz00_2911 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2200z00zz__dssslz00,
							BINT(((long) 3130)), BGl_string2201z00zz__dssslz00,
							BGl_string2202z00zz__dssslz00, BgL_errz00_2605);
						FAILURE(BgL_auxz00_2911, BFALSE, BFALSE);
					}
				return
					BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00
					(BgL_wherez00_2602, BgL_formalsz00_2603, BgL_bodyz00_2604,
					BgL_auxz00_2908);
			}
		}

	}



/* &key-state */
	obj_t BGl_z62keyzd2statezb0zz__dssslz00(obj_t BgL_bodyz00_2609,
		obj_t BgL_formalsz00_2608, obj_t BgL_wherez00_2607, obj_t BgL_errz00_2606,
		obj_t BgL_argsz00_1371, obj_t BgL_dssslzd2argzd2_1372,
		obj_t BgL_collectedzd2keyszd2_1373, bool_t BgL_allowzd2restpzd2_1374)
	{
		{	/* Llib/dsssl.scm 264 */
			{
				obj_t BgL_argz00_1461;
				obj_t BgL_initializa7erza7_1462;
				obj_t BgL_collectedzd2keyszd2_1463;
				obj_t BgL_argz00_1479;
				obj_t BgL_bodyz00_1480;

				if (NULLP(BgL_argsz00_1371))
					{	/* Llib/dsssl.scm 271 */
						if (BgL_allowzd2restpzd2_1374)
							{	/* Llib/dsssl.scm 274 */
								obj_t BgL_arg1461z00_1379;

								{	/* Llib/dsssl.scm 274 */
									obj_t BgL_arg1462z00_1380;
									obj_t BgL_arg1463z00_1381;

									{	/* Llib/dsssl.scm 274 */
										obj_t BgL_arg1464z00_1382;

										{	/* Llib/dsssl.scm 274 */
											obj_t BgL_arg1465z00_1383;

											{	/* Llib/dsssl.scm 274 */
												obj_t BgL_arg1466z00_1384;

												{	/* Llib/dsssl.scm 274 */
													obj_t BgL_arg1467z00_1385;

													{	/* Llib/dsssl.scm 274 */
														obj_t BgL_arg1468z00_1386;

														{	/* Llib/dsssl.scm 274 */
															obj_t BgL_arg1469z00_1387;

															BgL_arg1469z00_1387 =
																MAKE_YOUNG_PAIR(BgL_collectedzd2keyszd2_1373,
																BNIL);
															BgL_arg1468z00_1386 =
																MAKE_YOUNG_PAIR(BGl_symbol2203z00zz__dssslz00,
																BgL_arg1469z00_1387);
														}
														BgL_arg1467z00_1385 =
															MAKE_YOUNG_PAIR(BgL_arg1468z00_1386, BNIL);
													}
													BgL_arg1466z00_1384 =
														MAKE_YOUNG_PAIR(BgL_dssslzd2argzd2_1372,
														BgL_arg1467z00_1385);
												}
												BgL_arg1465z00_1383 =
													MAKE_YOUNG_PAIR(BGl_symbol2205z00zz__dssslz00,
													BgL_arg1466z00_1384);
											}
											BgL_arg1464z00_1382 =
												MAKE_YOUNG_PAIR(BgL_arg1465z00_1383, BNIL);
										}
										BgL_arg1462z00_1380 =
											MAKE_YOUNG_PAIR(BGl_symbol2209z00zz__dssslz00,
											BgL_arg1464z00_1382);
									}
									{	/* Llib/dsssl.scm 278 */
										obj_t BgL_arg1470z00_1388;

										{	/* Llib/dsssl.scm 278 */
											obj_t BgL_arg1471z00_1389;

											{	/* Llib/dsssl.scm 278 */
												obj_t BgL_arg1472z00_1390;

												{	/* Llib/dsssl.scm 278 */
													obj_t BgL_arg1473z00_1391;

													{	/* Llib/dsssl.scm 278 */
														obj_t BgL_arg1474z00_1392;
														obj_t BgL_arg1475z00_1393;

														{	/* Llib/dsssl.scm 278 */
															obj_t BgL_arg1476z00_1394;

															{	/* Llib/dsssl.scm 278 */
																obj_t BgL_arg1477z00_1395;

																{	/* Llib/dsssl.scm 278 */
																	obj_t BgL_arg1478z00_1396;

																	{	/* Llib/dsssl.scm 278 */
																		obj_t BgL_arg1479z00_1397;

																		{	/* Llib/dsssl.scm 278 */
																			obj_t BgL_arg1480z00_1398;

																			{	/* Llib/dsssl.scm 278 */
																				obj_t BgL_arg1483z00_1399;
																				obj_t BgL_arg1484z00_1400;

																				{	/* Llib/dsssl.scm 278 */
																					obj_t BgL_arg1485z00_1401;

																					{	/* Llib/dsssl.scm 278 */
																						obj_t BgL_arg1486z00_1402;
																						obj_t BgL_arg1487z00_1403;

																						BgL_arg1486z00_1402 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2211z00zz__dssslz00,
																							BNIL);
																						{	/* Llib/dsssl.scm 279 */
																							obj_t BgL_arg1489z00_1404;

																							{	/* Llib/dsssl.scm 279 */
																								obj_t BgL_arg1491z00_1405;

																								{	/* Llib/dsssl.scm 279 */
																									obj_t BgL_arg1492z00_1406;

																									BgL_arg1492z00_1406 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2211z00zz__dssslz00,
																										BNIL);
																									BgL_arg1491z00_1405 =
																										MAKE_YOUNG_PAIR
																										(BGl_string2213z00zz__dssslz00,
																										BgL_arg1492z00_1406);
																								}
																								BgL_arg1489z00_1404 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol2214z00zz__dssslz00,
																									BgL_arg1491z00_1405);
																							}
																							BgL_arg1487z00_1403 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1489z00_1404, BNIL);
																						}
																						BgL_arg1485z00_1401 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1486z00_1402,
																							BgL_arg1487z00_1403);
																					}
																					BgL_arg1483z00_1399 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2216z00zz__dssslz00,
																						BgL_arg1485z00_1401);
																				}
																				{	/* Llib/dsssl.scm 280 */
																					obj_t BgL_arg1493z00_1407;

																					{	/* Llib/dsssl.scm 280 */
																						obj_t BgL_arg1494z00_1408;

																						{	/* Llib/dsssl.scm 280 */
																							obj_t BgL_arg1495z00_1409;

																							{	/* Llib/dsssl.scm 280 */
																								obj_t BgL_arg1496z00_1410;

																								{	/* Llib/dsssl.scm 280 */
																									obj_t BgL_arg1497z00_1411;

																									BgL_arg1497z00_1411 =
																										MAKE_YOUNG_PAIR
																										(BgL_collectedzd2keyszd2_1373,
																										BNIL);
																									BgL_arg1496z00_1410 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2203z00zz__dssslz00,
																										BgL_arg1497z00_1411);
																								}
																								BgL_arg1495z00_1409 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1496z00_1410, BNIL);
																							}
																							BgL_arg1494z00_1408 =
																								MAKE_YOUNG_PAIR
																								(BgL_dssslzd2argzd2_1372,
																								BgL_arg1495z00_1409);
																						}
																						BgL_arg1493z00_1407 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2205z00zz__dssslz00,
																							BgL_arg1494z00_1408);
																					}
																					BgL_arg1484z00_1400 =
																						MAKE_YOUNG_PAIR(BgL_arg1493z00_1407,
																						BNIL);
																				}
																				BgL_arg1480z00_1398 =
																					MAKE_YOUNG_PAIR(BgL_arg1483z00_1399,
																					BgL_arg1484z00_1400);
																			}
																			BgL_arg1479z00_1397 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol2218z00zz__dssslz00,
																				BgL_arg1480z00_1398);
																		}
																		BgL_arg1478z00_1396 =
																			MAKE_YOUNG_PAIR(BgL_arg1479z00_1397,
																			BNIL);
																	}
																	BgL_arg1477z00_1395 =
																		MAKE_YOUNG_PAIR
																		(BGl_string2220z00zz__dssslz00,
																		BgL_arg1478z00_1396);
																}
																BgL_arg1476z00_1394 =
																	MAKE_YOUNG_PAIR(BGl_symbol2221z00zz__dssslz00,
																	BgL_arg1477z00_1395);
															}
															BgL_arg1474z00_1392 =
																MAKE_YOUNG_PAIR(BGl_symbol2223z00zz__dssslz00,
																BgL_arg1476z00_1394);
														}
														BgL_arg1475z00_1393 =
															MAKE_YOUNG_PAIR(BgL_dssslzd2argzd2_1372, BNIL);
														BgL_arg1473z00_1391 =
															MAKE_YOUNG_PAIR(BgL_arg1474z00_1392,
															BgL_arg1475z00_1393);
													}
													BgL_arg1472z00_1390 =
														MAKE_YOUNG_PAIR(BGl_string2208z00zz__dssslz00,
														BgL_arg1473z00_1391);
												}
												BgL_arg1471z00_1389 =
													MAKE_YOUNG_PAIR(BGl_symbol2225z00zz__dssslz00,
													BgL_arg1472z00_1390);
											}
											BgL_arg1470z00_1388 =
												MAKE_YOUNG_PAIR(BgL_arg1471z00_1389, BNIL);
										}
										BgL_arg1463z00_1381 =
											MAKE_YOUNG_PAIR(BgL_bodyz00_2609, BgL_arg1470z00_1388);
									}
									BgL_arg1461z00_1379 =
										MAKE_YOUNG_PAIR(BgL_arg1462z00_1380, BgL_arg1463z00_1381);
								}
								return
									MAKE_YOUNG_PAIR(BGl_symbol2227z00zz__dssslz00,
									BgL_arg1461z00_1379);
							}
						else
							{	/* Llib/dsssl.scm 272 */
								return BgL_bodyz00_2609;
							}
					}
				else
					{	/* Llib/dsssl.scm 271 */
						if ((CAR(((obj_t) BgL_argsz00_1371)) == (BREST)))
							{	/* Llib/dsssl.scm 285 */
								bool_t BgL_test2338z00_2957;

								if (BgL_allowzd2restpzd2_1374)
									{	/* Llib/dsssl.scm 285 */
										if (NULLP(CDR(((obj_t) BgL_argsz00_1371))))
											{	/* Llib/dsssl.scm 286 */
												BgL_test2338z00_2957 = ((bool_t) 1);
											}
										else
											{	/* Llib/dsssl.scm 287 */
												bool_t BgL_test2341z00_2963;

												{	/* Llib/dsssl.scm 287 */
													obj_t BgL_tmpz00_2964;

													{	/* Llib/dsssl.scm 287 */
														obj_t BgL_pairz00_2201;

														BgL_pairz00_2201 = CDR(((obj_t) BgL_argsz00_1371));
														BgL_tmpz00_2964 = CAR(BgL_pairz00_2201);
													}
													BgL_test2341z00_2963 = SYMBOLP(BgL_tmpz00_2964);
												}
												if (BgL_test2341z00_2963)
													{	/* Llib/dsssl.scm 288 */
														obj_t BgL_tmpz00_2969;

														{	/* Llib/dsssl.scm 288 */
															obj_t BgL_pairz00_2206;

															BgL_pairz00_2206 =
																CDR(((obj_t) BgL_argsz00_1371));
															BgL_tmpz00_2969 = CDR(BgL_pairz00_2206);
														}
														BgL_test2338z00_2957 = PAIRP(BgL_tmpz00_2969);
													}
												else
													{	/* Llib/dsssl.scm 287 */
														BgL_test2338z00_2957 = ((bool_t) 1);
													}
											}
									}
								else
									{	/* Llib/dsssl.scm 285 */
										BgL_test2338z00_2957 = ((bool_t) 1);
									}
								if (BgL_test2338z00_2957)
									{	/* Llib/dsssl.scm 285 */
										return
											PROCEDURE_ENTRY(BgL_errz00_2606) (BgL_errz00_2606,
											BgL_wherez00_2607, BGl_string2229z00zz__dssslz00,
											BgL_formalsz00_2608, BEOA);
									}
								else
									{	/* Llib/dsssl.scm 290 */
										obj_t BgL_arg1509z00_1422;

										{	/* Llib/dsssl.scm 290 */
											obj_t BgL_pairz00_2211;

											BgL_pairz00_2211 = CDR(((obj_t) BgL_argsz00_1371));
											BgL_arg1509z00_1422 = CAR(BgL_pairz00_2211);
										}
										BgL_argz00_1479 = BgL_arg1509z00_1422;
										BgL_bodyz00_1480 = BgL_bodyz00_2609;
										{	/* Llib/dsssl.scm 267 */
											obj_t BgL_arg1558z00_1482;

											{	/* Llib/dsssl.scm 267 */
												obj_t BgL_arg1560z00_1483;
												obj_t BgL_arg1561z00_1484;

												{	/* Llib/dsssl.scm 267 */
													obj_t BgL_arg1562z00_1485;

													{	/* Llib/dsssl.scm 267 */
														obj_t BgL_arg1563z00_1486;

														{	/* Llib/dsssl.scm 267 */
															obj_t BgL_arg1564z00_1487;

															{	/* Llib/dsssl.scm 267 */
																obj_t BgL_arg1565z00_1488;

																{	/* Llib/dsssl.scm 267 */
																	obj_t BgL_arg1566z00_1489;

																	{	/* Llib/dsssl.scm 267 */
																		obj_t BgL_arg1567z00_1490;

																		{	/* Llib/dsssl.scm 267 */
																			obj_t BgL_arg1568z00_1491;

																			BgL_arg1568z00_1491 =
																				MAKE_YOUNG_PAIR
																				(BgL_collectedzd2keyszd2_1373, BNIL);
																			BgL_arg1567z00_1490 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol2203z00zz__dssslz00,
																				BgL_arg1568z00_1491);
																		}
																		BgL_arg1566z00_1489 =
																			MAKE_YOUNG_PAIR(BgL_arg1567z00_1490,
																			BNIL);
																	}
																	BgL_arg1565z00_1488 =
																		MAKE_YOUNG_PAIR(BgL_dssslzd2argzd2_1372,
																		BgL_arg1566z00_1489);
																}
																BgL_arg1564z00_1487 =
																	MAKE_YOUNG_PAIR(BGl_symbol2205z00zz__dssslz00,
																	BgL_arg1565z00_1488);
															}
															BgL_arg1563z00_1486 =
																MAKE_YOUNG_PAIR(BgL_arg1564z00_1487, BNIL);
														}
														BgL_arg1562z00_1485 =
															MAKE_YOUNG_PAIR(BgL_argz00_1479,
															BgL_arg1563z00_1486);
													}
													BgL_arg1560z00_1483 =
														MAKE_YOUNG_PAIR(BgL_arg1562z00_1485, BNIL);
												}
												BgL_arg1561z00_1484 =
													MAKE_YOUNG_PAIR(BgL_bodyz00_1480, BNIL);
												BgL_arg1558z00_1482 =
													MAKE_YOUNG_PAIR(BgL_arg1560z00_1483,
													BgL_arg1561z00_1484);
											}
											return
												MAKE_YOUNG_PAIR(BGl_symbol2196z00zz__dssslz00,
												BgL_arg1558z00_1482);
										}
									}
							}
						else
							{	/* Llib/dsssl.scm 284 */
								if (PAIRP(BgL_argsz00_1371))
									{	/* Llib/dsssl.scm 293 */
										bool_t BgL_test2343z00_2996;

										{	/* Llib/dsssl.scm 293 */
											bool_t BgL_test2344z00_2997;

											{	/* Llib/dsssl.scm 293 */
												obj_t BgL_tmpz00_2998;

												BgL_tmpz00_2998 = CAR(BgL_argsz00_1371);
												BgL_test2344z00_2997 = SYMBOLP(BgL_tmpz00_2998);
											}
											if (BgL_test2344z00_2997)
												{	/* Llib/dsssl.scm 293 */
													BgL_test2343z00_2996 = ((bool_t) 0);
												}
											else
												{	/* Llib/dsssl.scm 293 */
													bool_t BgL_test2345z00_3001;

													{	/* Llib/dsssl.scm 293 */
														obj_t BgL_tmpz00_3002;

														BgL_tmpz00_3002 = CAR(BgL_argsz00_1371);
														BgL_test2345z00_3001 = PAIRP(BgL_tmpz00_3002);
													}
													if (BgL_test2345z00_3001)
														{	/* Llib/dsssl.scm 293 */
															BgL_test2343z00_2996 = ((bool_t) 0);
														}
													else
														{	/* Llib/dsssl.scm 293 */
															BgL_test2343z00_2996 = ((bool_t) 1);
														}
												}
										}
										if (BgL_test2343z00_2996)
											{	/* Llib/dsssl.scm 293 */
												return
													PROCEDURE_ENTRY(BgL_errz00_2606) (BgL_errz00_2606,
													BgL_wherez00_2607, BGl_string2230z00zz__dssslz00,
													BgL_formalsz00_2608, BEOA);
											}
										else
											{	/* Llib/dsssl.scm 297 */
												obj_t BgL_ezd2162zd2_1442;

												BgL_ezd2162zd2_1442 = CAR(BgL_argsz00_1371);
												if (PAIRP(BgL_ezd2162zd2_1442))
													{	/* Llib/dsssl.scm 297 */
														obj_t BgL_carzd2167zd2_1444;
														obj_t BgL_cdrzd2168zd2_1445;

														BgL_carzd2167zd2_1444 = CAR(BgL_ezd2162zd2_1442);
														BgL_cdrzd2168zd2_1445 = CDR(BgL_ezd2162zd2_1442);
														if (SYMBOLP(BgL_carzd2167zd2_1444))
															{	/* Llib/dsssl.scm 297 */
																if (PAIRP(BgL_cdrzd2168zd2_1445))
																	{	/* Llib/dsssl.scm 297 */
																		if (NULLP(CDR(BgL_cdrzd2168zd2_1445)))
																			{	/* Llib/dsssl.scm 297 */
																				BgL_argz00_1461 = BgL_carzd2167zd2_1444;
																				BgL_initializa7erza7_1462 =
																					CAR(BgL_cdrzd2168zd2_1445);
																				BgL_collectedzd2keyszd2_1463 =
																					BgL_collectedzd2keyszd2_1373;
																			BgL_zc3z04anonymousza31535ze3z87_1464:
																				{	/* Llib/dsssl.scm 260 */
																					obj_t BgL_arg1536z00_1465;

																					{	/* Llib/dsssl.scm 260 */
																						obj_t BgL_arg1537z00_1466;
																						obj_t BgL_arg1540z00_1467;

																						{	/* Llib/dsssl.scm 260 */
																							obj_t BgL_arg1541z00_1468;

																							{	/* Llib/dsssl.scm 260 */
																								obj_t BgL_arg1542z00_1469;

																								{	/* Llib/dsssl.scm 260 */
																									obj_t BgL_arg1544z00_1470;

																									{	/* Llib/dsssl.scm 260 */
																										obj_t BgL_arg1545z00_1471;

																										{	/* Llib/dsssl.scm 260 */
																											obj_t BgL_arg1546z00_1472;

																											{	/* Llib/dsssl.scm 260 */
																												obj_t
																													BgL_arg1547z00_1473;
																												obj_t
																													BgL_arg1551z00_1474;
																												BgL_arg1547z00_1473 =
																													BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
																													(BgL_argz00_1461);
																												BgL_arg1551z00_1474 =
																													MAKE_YOUNG_PAIR
																													(BgL_initializa7erza7_1462,
																													BNIL);
																												BgL_arg1546z00_1472 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1547z00_1473,
																													BgL_arg1551z00_1474);
																											}
																											BgL_arg1545z00_1471 =
																												MAKE_YOUNG_PAIR
																												(BgL_dssslzd2argzd2_1372,
																												BgL_arg1546z00_1472);
																										}
																										BgL_arg1544z00_1470 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2207z00zz__dssslz00,
																											BgL_arg1545z00_1471);
																									}
																									BgL_arg1542z00_1469 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1544z00_1470, BNIL);
																								}
																								BgL_arg1541z00_1468 =
																									MAKE_YOUNG_PAIR
																									(BgL_argz00_1461,
																									BgL_arg1542z00_1469);
																							}
																							BgL_arg1537z00_1466 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1541z00_1468, BNIL);
																						}
																						{	/* Llib/dsssl.scm 261 */
																							obj_t BgL_arg1552z00_1475;

																							{	/* Llib/dsssl.scm 261 */
																								obj_t BgL_arg1553z00_1476;
																								obj_t BgL_arg1554z00_1477;

																								BgL_arg1553z00_1476 =
																									CDR(
																									((obj_t) BgL_argsz00_1371));
																								BgL_arg1554z00_1477 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
																									(BgL_argz00_1461),
																									BgL_collectedzd2keyszd2_1463);
																								BgL_arg1552z00_1475 =
																									BGl_z62keyzd2statezb0zz__dssslz00
																									(BgL_bodyz00_2609,
																									BgL_formalsz00_2608,
																									BgL_wherez00_2607,
																									BgL_errz00_2606,
																									BgL_arg1553z00_1476,
																									BgL_dssslzd2argzd2_1372,
																									BgL_arg1554z00_1477,
																									BgL_allowzd2restpzd2_1374);
																							}
																							BgL_arg1540z00_1467 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1552z00_1475, BNIL);
																						}
																						BgL_arg1536z00_1465 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1537z00_1466,
																							BgL_arg1540z00_1467);
																					}
																					return
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2196z00zz__dssslz00,
																						BgL_arg1536z00_1465);
																				}
																			}
																		else
																			{	/* Llib/dsssl.scm 297 */
																				return
																					PROCEDURE_ENTRY(BgL_errz00_2606)
																					(BgL_errz00_2606, BgL_wherez00_2607,
																					BGl_string2230z00zz__dssslz00,
																					BgL_formalsz00_2608, BEOA);
																			}
																	}
																else
																	{	/* Llib/dsssl.scm 297 */
																		return
																			PROCEDURE_ENTRY(BgL_errz00_2606)
																			(BgL_errz00_2606, BgL_wherez00_2607,
																			BGl_string2230z00zz__dssslz00,
																			BgL_formalsz00_2608, BEOA);
																	}
															}
														else
															{	/* Llib/dsssl.scm 297 */
																return
																	PROCEDURE_ENTRY(BgL_errz00_2606)
																	(BgL_errz00_2606, BgL_wherez00_2607,
																	BGl_string2230z00zz__dssslz00,
																	BgL_formalsz00_2608, BEOA);
															}
													}
												else
													{	/* Llib/dsssl.scm 297 */
														if (SYMBOLP(BgL_ezd2162zd2_1442))
															{
																obj_t BgL_collectedzd2keyszd2_3062;
																obj_t BgL_initializa7erza7_3061;
																obj_t BgL_argz00_3060;

																BgL_argz00_3060 = BgL_ezd2162zd2_1442;
																BgL_initializa7erza7_3061 = BFALSE;
																BgL_collectedzd2keyszd2_3062 =
																	BgL_collectedzd2keyszd2_1373;
																BgL_collectedzd2keyszd2_1463 =
																	BgL_collectedzd2keyszd2_3062;
																BgL_initializa7erza7_1462 =
																	BgL_initializa7erza7_3061;
																BgL_argz00_1461 = BgL_argz00_3060;
																goto BgL_zc3z04anonymousza31535ze3z87_1464;
															}
														else
															{	/* Llib/dsssl.scm 297 */
																return
																	PROCEDURE_ENTRY(BgL_errz00_2606)
																	(BgL_errz00_2606, BgL_wherez00_2607,
																	BGl_string2230z00zz__dssslz00,
																	BgL_formalsz00_2608, BEOA);
															}
													}
											}
									}
								else
									{	/* Llib/dsssl.scm 291 */
										return
											PROCEDURE_ENTRY(BgL_errz00_2606) (BgL_errz00_2606,
											BgL_wherez00_2607, BGl_string2230z00zz__dssslz00,
											BgL_formalsz00_2608, BEOA);
									}
							}
					}
			}
		}

	}



/* &optional-state */
	obj_t BGl_z62optionalzd2statezb0zz__dssslz00(obj_t BgL_envz00_2610,
		obj_t BgL_argsz00_2617, obj_t BgL_dssslzd2argzd2_2618)
	{
		{	/* Llib/dsssl.scm 135 */
			{	/* Llib/dsssl.scm 116 */
				obj_t BgL_errz00_2611;
				obj_t BgL_wherez00_2612;
				obj_t BgL_formalsz00_2613;
				obj_t BgL_nozd2restzd2keyzd2statezd2_2614;
				obj_t BgL_restzd2statezd2_2615;
				obj_t BgL_bodyz00_2616;

				BgL_errz00_2611 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_2610, (int) (((long) 0))));
				BgL_wherez00_2612 =
					PROCEDURE_L_REF(BgL_envz00_2610, (int) (((long) 1)));
				BgL_formalsz00_2613 =
					PROCEDURE_L_REF(BgL_envz00_2610, (int) (((long) 2)));
				BgL_nozd2restzd2keyzd2statezd2_2614 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_2610, (int) (((long) 3))));
				BgL_restzd2statezd2_2615 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_2610, (int) (((long) 4))));
				BgL_bodyz00_2616 = PROCEDURE_L_REF(BgL_envz00_2610, (int) (((long) 5)));
				{
					obj_t BgL_argsz00_2674;

					{	/* Llib/dsssl.scm 183 */
						obj_t BgL_auxz00_3090;

						BgL_argsz00_2674 = BgL_argsz00_2617;
						{
							obj_t BgL_argsz00_2676;

							BgL_argsz00_2676 = BgL_argsz00_2674;
						BgL_loopz00_2675:
							if (PAIRP(BgL_argsz00_2676))
								{	/* Llib/dsssl.scm 116 */
									if ((CAR(BgL_argsz00_2676) == (BKEY)))
										{	/* Llib/dsssl.scm 119 */
											obj_t BgL_g1040z00_2677;

											BgL_g1040z00_2677 = CDR(BgL_argsz00_2676);
											{
												obj_t BgL_argsz00_2679;
												obj_t BgL_resz00_2680;

												BgL_argsz00_2679 = BgL_g1040z00_2677;
												BgL_resz00_2680 = BNIL;
											BgL_loopz00_2678:
												{	/* Llib/dsssl.scm 122 */
													bool_t BgL_test2353z00_3097;

													if (PAIRP(BgL_argsz00_2679))
														{	/* Llib/dsssl.scm 123 */
															bool_t BgL_test2355z00_3100;

															{	/* Llib/dsssl.scm 123 */
																bool_t BgL_test2356z00_3101;

																{	/* Llib/dsssl.scm 123 */
																	obj_t BgL_tmpz00_3102;

																	BgL_tmpz00_3102 = CAR(BgL_argsz00_2679);
																	BgL_test2356z00_3101 = PAIRP(BgL_tmpz00_3102);
																}
																if (BgL_test2356z00_3101)
																	{	/* Llib/dsssl.scm 123 */
																		BgL_test2355z00_3100 = ((bool_t) 1);
																	}
																else
																	{	/* Llib/dsssl.scm 124 */
																		obj_t BgL_tmpz00_3105;

																		BgL_tmpz00_3105 = CAR(BgL_argsz00_2679);
																		BgL_test2355z00_3100 =
																			SYMBOLP(BgL_tmpz00_3105);
																	}
															}
															if (BgL_test2355z00_3100)
																{	/* Llib/dsssl.scm 123 */
																	if ((CAR(BgL_argsz00_2679) == (BOPTIONAL)))
																		{	/* Llib/dsssl.scm 125 */
																			BgL_test2353z00_3097 = ((bool_t) 1);
																		}
																	else
																		{	/* Llib/dsssl.scm 125 */
																			BgL_test2353z00_3097 =
																				(CAR(BgL_argsz00_2679) == (BREST));
																		}
																}
															else
																{	/* Llib/dsssl.scm 123 */
																	BgL_test2353z00_3097 = ((bool_t) 1);
																}
														}
													else
														{	/* Llib/dsssl.scm 122 */
															BgL_test2353z00_3097 = ((bool_t) 1);
														}
													if (BgL_test2353z00_3097)
														{	/* Llib/dsssl.scm 122 */
															BgL_auxz00_3090 = BgL_resz00_2680;
														}
													else
														{	/* Llib/dsssl.scm 128 */
															bool_t BgL_test2358z00_3113;

															{	/* Llib/dsssl.scm 128 */
																obj_t BgL_tmpz00_3114;

																BgL_tmpz00_3114 =
																	CAR(((obj_t) BgL_argsz00_2679));
																BgL_test2358z00_3113 = SYMBOLP(BgL_tmpz00_3114);
															}
															if (BgL_test2358z00_3113)
																{	/* Llib/dsssl.scm 129 */
																	obj_t BgL_arg1385z00_2681;
																	obj_t BgL_arg1386z00_2682;

																	BgL_arg1385z00_2681 =
																		CDR(((obj_t) BgL_argsz00_2679));
																	{	/* Llib/dsssl.scm 130 */
																		obj_t BgL_arg1387z00_2683;

																		{	/* Llib/dsssl.scm 130 */
																			obj_t BgL_arg1388z00_2684;

																			BgL_arg1388z00_2684 =
																				CAR(((obj_t) BgL_argsz00_2679));
																			BgL_arg1387z00_2683 =
																				BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
																				(BgL_arg1388z00_2684);
																		}
																		BgL_arg1386z00_2682 =
																			MAKE_YOUNG_PAIR(BgL_arg1387z00_2683,
																			BgL_resz00_2680);
																	}
																	{
																		obj_t BgL_resz00_3125;
																		obj_t BgL_argsz00_3124;

																		BgL_argsz00_3124 = BgL_arg1385z00_2681;
																		BgL_resz00_3125 = BgL_arg1386z00_2682;
																		BgL_resz00_2680 = BgL_resz00_3125;
																		BgL_argsz00_2679 = BgL_argsz00_3124;
																		goto BgL_loopz00_2678;
																	}
																}
															else
																{	/* Llib/dsssl.scm 132 */
																	obj_t BgL_arg1389z00_2685;
																	obj_t BgL_arg1390z00_2686;

																	BgL_arg1389z00_2685 =
																		CDR(((obj_t) BgL_argsz00_2679));
																	{	/* Llib/dsssl.scm 133 */
																		obj_t BgL_arg1391z00_2687;

																		{	/* Llib/dsssl.scm 133 */
																			obj_t BgL_arg1392z00_2688;

																			{	/* Llib/dsssl.scm 133 */
																				obj_t BgL_pairz00_2689;

																				BgL_pairz00_2689 =
																					CAR(((obj_t) BgL_argsz00_2679));
																				BgL_arg1392z00_2688 =
																					CAR(BgL_pairz00_2689);
																			}
																			BgL_arg1391z00_2687 =
																				BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
																				(BgL_arg1392z00_2688);
																		}
																		BgL_arg1390z00_2686 =
																			MAKE_YOUNG_PAIR(BgL_arg1391z00_2687,
																			BgL_resz00_2680);
																	}
																	{
																		obj_t BgL_resz00_3134;
																		obj_t BgL_argsz00_3133;

																		BgL_argsz00_3133 = BgL_arg1389z00_2685;
																		BgL_resz00_3134 = BgL_arg1390z00_2686;
																		BgL_resz00_2680 = BgL_resz00_3134;
																		BgL_argsz00_2679 = BgL_argsz00_3133;
																		goto BgL_loopz00_2678;
																	}
																}
														}
												}
											}
										}
									else
										{
											obj_t BgL_argsz00_3135;

											BgL_argsz00_3135 = CDR(BgL_argsz00_2676);
											BgL_argsz00_2676 = BgL_argsz00_3135;
											goto BgL_loopz00_2675;
										}
								}
							else
								{	/* Llib/dsssl.scm 116 */
									BgL_auxz00_3090 = BNIL;
								}
						}
						return
							BGl_optionalzd2argsze70z35zz__dssslz00(BgL_bodyz00_2616,
							BgL_restzd2statezd2_2615, BgL_nozd2restzd2keyzd2statezd2_2614,
							BgL_formalsz00_2613, BgL_wherez00_2612, BgL_errz00_2611,
							BgL_auxz00_3090, BgL_dssslzd2argzd2_2618, BgL_argsz00_2617);
					}
				}
			}
		}

	}



/* optional-args~0 */
	obj_t BGl_optionalzd2argsze70z35zz__dssslz00(obj_t BgL_bodyz00_2661,
		obj_t BgL_restzd2statezd2_2660, obj_t BgL_nozd2restzd2keyzd2statezd2_2659,
		obj_t BgL_formalsz00_2658, obj_t BgL_wherez00_2657, obj_t BgL_errz00_2656,
		obj_t BgL_keywordzd2argumentszd2_2655, obj_t BgL_dssslzd2argzd2_2654,
		obj_t BgL_argsz00_1177)
	{
		{	/* Llib/dsssl.scm 181 */
			{
				obj_t BgL_argz00_1133;
				obj_t BgL_initializa7erza7_1134;
				obj_t BgL_restz00_1135;

				if (NULLP(BgL_argsz00_1177))
					{	/* Llib/dsssl.scm 159 */
						return BgL_bodyz00_2661;
					}
				else
					{	/* Llib/dsssl.scm 159 */
						if (PAIRP(BgL_argsz00_1177))
							{	/* Llib/dsssl.scm 163 */
								bool_t BgL_test2361z00_3142;

								{	/* Llib/dsssl.scm 163 */
									bool_t BgL_test2362z00_3143;

									{	/* Llib/dsssl.scm 163 */
										obj_t BgL_tmpz00_3144;

										BgL_tmpz00_3144 = CAR(BgL_argsz00_1177);
										BgL_test2362z00_3143 = SYMBOLP(BgL_tmpz00_3144);
									}
									if (BgL_test2362z00_3143)
										{	/* Llib/dsssl.scm 163 */
											BgL_test2361z00_3142 = ((bool_t) 0);
										}
									else
										{	/* Llib/dsssl.scm 163 */
											bool_t BgL_test2363z00_3147;

											{	/* Llib/dsssl.scm 163 */
												obj_t BgL_tmpz00_3148;

												BgL_tmpz00_3148 = CAR(BgL_argsz00_1177);
												BgL_test2363z00_3147 = PAIRP(BgL_tmpz00_3148);
											}
											if (BgL_test2363z00_3147)
												{	/* Llib/dsssl.scm 163 */
													BgL_test2361z00_3142 = ((bool_t) 0);
												}
											else
												{	/* Llib/dsssl.scm 163 */
													BgL_test2361z00_3142 = ((bool_t) 1);
												}
										}
								}
								if (BgL_test2361z00_3142)
									{	/* Llib/dsssl.scm 163 */
										if ((CAR(BgL_argsz00_1177) == (BREST)))
											{	/* Llib/dsssl.scm 167 */
												return
													BGl_z62restzd2statezb0zz__dssslz00
													(BgL_restzd2statezd2_2660, CDR(BgL_argsz00_1177),
													BgL_dssslzd2argzd2_2654);
											}
										else
											{	/* Llib/dsssl.scm 167 */
												if ((CAR(BgL_argsz00_1177) == (BKEY)))
													{	/* Llib/dsssl.scm 169 */
														return
															BGl_z62nozd2restzd2keyzd2statezb0zz__dssslz00
															(BgL_nozd2restzd2keyzd2statezd2_2659,
															CDR(BgL_argsz00_1177), BgL_dssslzd2argzd2_2654);
													}
												else
													{	/* Llib/dsssl.scm 169 */
														return
															PROCEDURE_ENTRY(BgL_errz00_2656) (BgL_errz00_2656,
															BgL_wherez00_2657, BGl_string2243z00zz__dssslz00,
															BgL_formalsz00_2658, BEOA);
													}
											}
									}
								else
									{	/* Llib/dsssl.scm 175 */
										obj_t BgL_ezd2112zd2_1202;

										BgL_ezd2112zd2_1202 = CAR(BgL_argsz00_1177);
										if (PAIRP(BgL_ezd2112zd2_1202))
											{	/* Llib/dsssl.scm 175 */
												obj_t BgL_carzd2117zd2_1204;
												obj_t BgL_cdrzd2118zd2_1205;

												BgL_carzd2117zd2_1204 = CAR(BgL_ezd2112zd2_1202);
												BgL_cdrzd2118zd2_1205 = CDR(BgL_ezd2112zd2_1202);
												if (SYMBOLP(BgL_carzd2117zd2_1204))
													{	/* Llib/dsssl.scm 175 */
														if (PAIRP(BgL_cdrzd2118zd2_1205))
															{	/* Llib/dsssl.scm 175 */
																if (NULLP(CDR(BgL_cdrzd2118zd2_1205)))
																	{	/* Llib/dsssl.scm 175 */
																		BgL_argz00_1133 = BgL_carzd2117zd2_1204;
																		BgL_initializa7erza7_1134 =
																			CAR(BgL_cdrzd2118zd2_1205);
																		BgL_restz00_1135 = CDR(BgL_argsz00_1177);
																	BgL_zc3z04anonymousza31283ze3z87_1136:
																		{	/* Llib/dsssl.scm 140 */
																			obj_t BgL_tmpz00_1137;

																			BgL_tmpz00_1137 =
																				BGl_gensymz00zz__r4_symbols_6_4z00
																				(BGl_symbol2231z00zz__dssslz00);
																			{	/* Llib/dsssl.scm 141 */
																				obj_t BgL_arg1284z00_1138;

																				{	/* Llib/dsssl.scm 141 */
																					obj_t BgL_arg1285z00_1139;
																					obj_t BgL_arg1286z00_1140;

																					{	/* Llib/dsssl.scm 141 */
																						obj_t BgL_arg1287z00_1141;

																						{	/* Llib/dsssl.scm 141 */
																							obj_t BgL_arg1288z00_1142;

																							{	/* Llib/dsssl.scm 141 */
																								obj_t BgL_arg1289z00_1143;

																								{	/* Llib/dsssl.scm 141 */
																									obj_t BgL_arg1290z00_1144;

																									{	/* Llib/dsssl.scm 141 */
																										obj_t BgL_arg1291z00_1145;
																										obj_t BgL_arg1292z00_1146;

																										{	/* Llib/dsssl.scm 141 */
																											obj_t BgL_arg1295z00_1147;

																											{	/* Llib/dsssl.scm 141 */
																												obj_t
																													BgL_arg1296z00_1148;
																												obj_t
																													BgL_arg1297z00_1149;
																												{	/* Llib/dsssl.scm 141 */
																													obj_t
																														BgL_arg1298z00_1150;
																													BgL_arg1298z00_1150 =
																														MAKE_YOUNG_PAIR
																														(BgL_dssslzd2argzd2_2654,
																														BNIL);
																													BgL_arg1296z00_1148 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2209z00zz__dssslz00,
																														BgL_arg1298z00_1150);
																												}
																												{	/* Llib/dsssl.scm 143 */
																													obj_t
																														BgL_arg1299z00_1151;
																													{	/* Llib/dsssl.scm 143 */
																														obj_t
																															BgL_arg1300z00_1152;
																														{	/* Llib/dsssl.scm 143 */
																															obj_t
																																BgL_arg1301z00_1153;
																															{	/* Llib/dsssl.scm 143 */
																																obj_t
																																	BgL_arg1302z00_1154;
																																obj_t
																																	BgL_arg1303z00_1155;
																																{	/* Llib/dsssl.scm 143 */
																																	obj_t
																																		BgL_arg1304z00_1156;
																																	BgL_arg1304z00_1156
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_dssslzd2argzd2_2654,
																																		BNIL);
																																	BgL_arg1302z00_1154
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol2233z00zz__dssslz00,
																																		BgL_arg1304z00_1156);
																																}
																																{	/* Llib/dsssl.scm 143 */
																																	obj_t
																																		BgL_arg1306z00_1157;
																																	{	/* Llib/dsssl.scm 143 */
																																		obj_t
																																			BgL_arg1307z00_1158;
																																		BgL_arg1307z00_1158
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_keywordzd2argumentszd2_2655,
																																			BNIL);
																																		BgL_arg1306z00_1157
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol2203z00zz__dssslz00,
																																			BgL_arg1307z00_1158);
																																	}
																																	BgL_arg1303z00_1155
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1306z00_1157,
																																		BNIL);
																																}
																																BgL_arg1301z00_1153
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1302z00_1154,
																																	BgL_arg1303z00_1155);
																															}
																															BgL_arg1300z00_1152
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol2235z00zz__dssslz00,
																																BgL_arg1301z00_1153);
																														}
																														BgL_arg1299z00_1151
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1300z00_1152,
																															BNIL);
																													}
																													BgL_arg1297z00_1149 =
																														MAKE_YOUNG_PAIR
																														(BTRUE,
																														BgL_arg1299z00_1151);
																												}
																												BgL_arg1295z00_1147 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1296z00_1148,
																													BgL_arg1297z00_1149);
																											}
																											BgL_arg1291z00_1145 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol2227z00zz__dssslz00,
																												BgL_arg1295z00_1147);
																										}
																										{	/* Llib/dsssl.scm 145 */
																											obj_t BgL_arg1308z00_1159;

																											{	/* Llib/dsssl.scm 145 */
																												obj_t
																													BgL_arg1309z00_1160;
																												{	/* Llib/dsssl.scm 145 */
																													obj_t
																														BgL_arg1310z00_1161;
																													{	/* Llib/dsssl.scm 145 */
																														obj_t
																															BgL_arg1311z00_1162;
																														obj_t
																															BgL_arg1312z00_1163;
																														{	/* Llib/dsssl.scm 145 */
																															obj_t
																																BgL_arg1313z00_1164;
																															{	/* Llib/dsssl.scm 145 */
																																obj_t
																																	BgL_arg1314z00_1165;
																																{	/* Llib/dsssl.scm 145 */
																																	obj_t
																																		BgL_arg1315z00_1166;
																																	{	/* Llib/dsssl.scm 145 */
																																		obj_t
																																			BgL_arg1316z00_1167;
																																		BgL_arg1316z00_1167
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_dssslzd2argzd2_2654,
																																			BNIL);
																																		BgL_arg1315z00_1166
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol2233z00zz__dssslz00,
																																			BgL_arg1316z00_1167);
																																	}
																																	BgL_arg1314z00_1165
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1315z00_1166,
																																		BNIL);
																																}
																																BgL_arg1313z00_1164
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_tmpz00_1137,
																																	BgL_arg1314z00_1165);
																															}
																															BgL_arg1311z00_1162
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1313z00_1164,
																																BNIL);
																														}
																														{	/* Llib/dsssl.scm 153 */
																															obj_t
																																BgL_arg1317z00_1168;
																															{	/* Llib/dsssl.scm 153 */
																																obj_t
																																	BgL_arg1318z00_1169;
																																{	/* Llib/dsssl.scm 153 */
																																	obj_t
																																		BgL_arg1319z00_1170;
																																	obj_t
																																		BgL_arg1322z00_1171;
																																	{	/* Llib/dsssl.scm 153 */
																																		obj_t
																																			BgL_arg1324z00_1172;
																																		{	/* Llib/dsssl.scm 153 */
																																			obj_t
																																				BgL_arg1325z00_1173;
																																			{	/* Llib/dsssl.scm 153 */
																																				obj_t
																																					BgL_arg1326z00_1174;
																																				{	/* Llib/dsssl.scm 153 */
																																					obj_t
																																						BgL_arg1327z00_1175;
																																					BgL_arg1327z00_1175
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_dssslzd2argzd2_2654,
																																						BNIL);
																																					BgL_arg1326z00_1174
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2237z00zz__dssslz00,
																																						BgL_arg1327z00_1175);
																																				}
																																				BgL_arg1325z00_1173
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1326z00_1174,
																																					BNIL);
																																			}
																																			BgL_arg1324z00_1172
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_dssslzd2argzd2_2654,
																																				BgL_arg1325z00_1173);
																																		}
																																		BgL_arg1319z00_1170
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol2239z00zz__dssslz00,
																																			BgL_arg1324z00_1172);
																																	}
																																	BgL_arg1322z00_1171
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_tmpz00_1137,
																																		BNIL);
																																	BgL_arg1318z00_1169
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1319z00_1170,
																																		BgL_arg1322z00_1171);
																																}
																																BgL_arg1317z00_1168
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_symbol2241z00zz__dssslz00,
																																	BgL_arg1318z00_1169);
																															}
																															BgL_arg1312z00_1163
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1317z00_1168,
																																BNIL);
																														}
																														BgL_arg1310z00_1161
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1311z00_1162,
																															BgL_arg1312z00_1163);
																													}
																													BgL_arg1309z00_1160 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol2196z00zz__dssslz00,
																														BgL_arg1310z00_1161);
																												}
																												BgL_arg1308z00_1159 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1309z00_1160,
																													BNIL);
																											}
																											BgL_arg1292z00_1146 =
																												MAKE_YOUNG_PAIR
																												(BgL_initializa7erza7_1134,
																												BgL_arg1308z00_1159);
																										}
																										BgL_arg1290z00_1144 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1291z00_1145,
																											BgL_arg1292z00_1146);
																									}
																									BgL_arg1289z00_1143 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2227z00zz__dssslz00,
																										BgL_arg1290z00_1144);
																								}
																								BgL_arg1288z00_1142 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1289z00_1143, BNIL);
																							}
																							BgL_arg1287z00_1141 =
																								MAKE_YOUNG_PAIR(BgL_argz00_1133,
																								BgL_arg1288z00_1142);
																						}
																						BgL_arg1285z00_1139 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1287z00_1141, BNIL);
																					}
																					BgL_arg1286z00_1140 =
																						MAKE_YOUNG_PAIR
																						(BGl_optionalzd2argsze70z35zz__dssslz00
																						(BgL_bodyz00_2661,
																							BgL_restzd2statezd2_2660,
																							BgL_nozd2restzd2keyzd2statezd2_2659,
																							BgL_formalsz00_2658,
																							BgL_wherez00_2657,
																							BgL_errz00_2656,
																							BgL_keywordzd2argumentszd2_2655,
																							BgL_dssslzd2argzd2_2654,
																							BgL_restz00_1135), BNIL);
																					BgL_arg1284z00_1138 =
																						MAKE_YOUNG_PAIR(BgL_arg1285z00_1139,
																						BgL_arg1286z00_1140);
																				}
																				return
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2196z00zz__dssslz00,
																					BgL_arg1284z00_1138);
																			}
																		}
																	}
																else
																	{	/* Llib/dsssl.scm 175 */
																		return
																			PROCEDURE_ENTRY(BgL_errz00_2656)
																			(BgL_errz00_2656, BgL_wherez00_2657,
																			BGl_string2243z00zz__dssslz00,
																			BgL_formalsz00_2658, BEOA);
																	}
															}
														else
															{	/* Llib/dsssl.scm 175 */
																return
																	PROCEDURE_ENTRY(BgL_errz00_2656)
																	(BgL_errz00_2656, BgL_wherez00_2657,
																	BGl_string2243z00zz__dssslz00,
																	BgL_formalsz00_2658, BEOA);
															}
													}
												else
													{	/* Llib/dsssl.scm 175 */
														return
															PROCEDURE_ENTRY(BgL_errz00_2656) (BgL_errz00_2656,
															BgL_wherez00_2657, BGl_string2243z00zz__dssslz00,
															BgL_formalsz00_2658, BEOA);
													}
											}
										else
											{	/* Llib/dsssl.scm 175 */
												if (SYMBOLP(BgL_ezd2112zd2_1202))
													{
														obj_t BgL_restz00_3244;
														obj_t BgL_initializa7erza7_3243;
														obj_t BgL_argz00_3242;

														BgL_argz00_3242 = BgL_ezd2112zd2_1202;
														BgL_initializa7erza7_3243 = BFALSE;
														BgL_restz00_3244 = CDR(BgL_argsz00_1177);
														BgL_restz00_1135 = BgL_restz00_3244;
														BgL_initializa7erza7_1134 =
															BgL_initializa7erza7_3243;
														BgL_argz00_1133 = BgL_argz00_3242;
														goto BgL_zc3z04anonymousza31283ze3z87_1136;
													}
												else
													{	/* Llib/dsssl.scm 175 */
														return
															PROCEDURE_ENTRY(BgL_errz00_2656) (BgL_errz00_2656,
															BgL_wherez00_2657, BGl_string2243z00zz__dssslz00,
															BgL_formalsz00_2658, BEOA);
													}
											}
									}
							}
						else
							{	/* Llib/dsssl.scm 161 */
								return
									PROCEDURE_ENTRY(BgL_errz00_2656) (BgL_errz00_2656,
									BgL_wherez00_2657, BGl_string2243z00zz__dssslz00,
									BgL_formalsz00_2658, BEOA);
							}
					}
			}
		}

	}



/* &rest-state */
	obj_t BGl_z62restzd2statezb0zz__dssslz00(obj_t BgL_envz00_2619,
		obj_t BgL_argsz00_2624, obj_t BgL_dssslzd2argzd2_2625)
	{
		{	/* Llib/dsssl.scm 193 */
			{	/* Llib/dsssl.scm 187 */
				obj_t BgL_errz00_2620;
				obj_t BgL_wherez00_2621;
				obj_t BgL_formalsz00_2622;
				obj_t BgL_bodyz00_2623;

				BgL_errz00_2620 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_2619, (int) (((long) 0))));
				BgL_wherez00_2621 =
					PROCEDURE_L_REF(BgL_envz00_2619, (int) (((long) 1)));
				BgL_formalsz00_2622 =
					PROCEDURE_L_REF(BgL_envz00_2619, (int) (((long) 2)));
				BgL_bodyz00_2623 = PROCEDURE_L_REF(BgL_envz00_2619, (int) (((long) 3)));
				{
					obj_t BgL_argsz00_2708;
					obj_t BgL_dssslzd2argzd2_2709;
					obj_t BgL_argsz00_2693;
					obj_t BgL_dssslzd2argzd2_2694;

					if (PAIRP(BgL_argsz00_2624))
						{	/* Llib/dsssl.scm 189 */
							bool_t BgL_test2372z00_3269;

							{	/* Llib/dsssl.scm 189 */
								obj_t BgL_tmpz00_3270;

								BgL_tmpz00_3270 = CAR(BgL_argsz00_2624);
								BgL_test2372z00_3269 = SYMBOLP(BgL_tmpz00_3270);
							}
							if (BgL_test2372z00_3269)
								{	/* Llib/dsssl.scm 192 */
									obj_t BgL_arg1404z00_2710;

									{	/* Llib/dsssl.scm 192 */
										obj_t BgL_arg1405z00_2711;
										obj_t BgL_arg1406z00_2712;

										{	/* Llib/dsssl.scm 192 */
											obj_t BgL_arg1407z00_2713;

											{	/* Llib/dsssl.scm 192 */
												obj_t BgL_arg1409z00_2714;
												obj_t BgL_arg1410z00_2715;

												BgL_arg1409z00_2714 = CAR(BgL_argsz00_2624);
												BgL_arg1410z00_2715 =
													MAKE_YOUNG_PAIR(BgL_dssslzd2argzd2_2625, BNIL);
												BgL_arg1407z00_2713 =
													MAKE_YOUNG_PAIR(BgL_arg1409z00_2714,
													BgL_arg1410z00_2715);
											}
											BgL_arg1405z00_2711 =
												MAKE_YOUNG_PAIR(BgL_arg1407z00_2713, BNIL);
										}
										{	/* Llib/dsssl.scm 192 */
											obj_t BgL_tmpz00_3277;

											BgL_argsz00_2708 = CDR(BgL_argsz00_2624);
											BgL_dssslzd2argzd2_2709 = BgL_dssslzd2argzd2_2625;
											if (NULLP(BgL_argsz00_2708))
												{	/* Llib/dsssl.scm 197 */
													BgL_tmpz00_3277 = BgL_bodyz00_2623;
												}
											else
												{	/* Llib/dsssl.scm 197 */
													if (PAIRP(BgL_argsz00_2708))
														{	/* Llib/dsssl.scm 199 */
															if ((CAR(BgL_argsz00_2708) == (BKEY)))
																{	/* Llib/dsssl.scm 201 */
																	BgL_argsz00_2693 = CDR(BgL_argsz00_2708);
																	BgL_dssslzd2argzd2_2694 =
																		BgL_dssslzd2argzd2_2709;
																	{
																		obj_t BgL_argsz00_2696;

																		if (NULLP(BgL_argsz00_2693))
																			{	/* Llib/dsssl.scm 220 */
																				BgL_tmpz00_3277 =
																					PROCEDURE_ENTRY(BgL_errz00_2620)
																					(BgL_errz00_2620, BgL_wherez00_2621,
																					BGl_string2230z00zz__dssslz00,
																					BgL_formalsz00_2622, BEOA);
																			}
																		else
																			{	/* Llib/dsssl.scm 223 */
																				obj_t BgL_keysz00_2707;

																				BgL_argsz00_2696 = BgL_argsz00_2693;
																				if (NULLP(BgL_argsz00_2696))
																					{	/* Llib/dsssl.scm 209 */
																						BgL_keysz00_2707 = BNIL;
																					}
																				else
																					{	/* Llib/dsssl.scm 209 */
																						obj_t BgL_head1076z00_2697;

																						{	/* Llib/dsssl.scm 209 */
																							obj_t BgL_res2062z00_2698;

																							BgL_res2062z00_2698 =
																								MAKE_YOUNG_PAIR(BNIL, BNIL);
																							BgL_head1076z00_2697 =
																								BgL_res2062z00_2698;
																						}
																						{
																							obj_t BgL_l1074z00_2700;
																							obj_t BgL_tail1077z00_2701;

																							BgL_l1074z00_2700 =
																								BgL_argsz00_2696;
																							BgL_tail1077z00_2701 =
																								BgL_head1076z00_2697;
																						BgL_zc3z04anonymousza31426ze3z87_2699:
																							if (NULLP
																								(BgL_l1074z00_2700))
																								{	/* Llib/dsssl.scm 209 */
																									BgL_keysz00_2707 =
																										CDR(BgL_head1076z00_2697);
																								}
																							else
																								{	/* Llib/dsssl.scm 209 */
																									obj_t BgL_newtail1078z00_2702;

																									{	/* Llib/dsssl.scm 209 */
																										obj_t BgL_arg1429z00_2703;

																										{	/* Llib/dsssl.scm 209 */
																											obj_t BgL_xz00_2704;

																											BgL_xz00_2704 =
																												CAR(
																												((obj_t)
																													BgL_l1074z00_2700));
																											{	/* Llib/dsssl.scm 211 */
																												bool_t
																													BgL_test2379z00_3301;
																												if (PAIRP
																													(BgL_xz00_2704))
																													{	/* Llib/dsssl.scm 211 */
																														obj_t
																															BgL_tmpz00_3304;
																														BgL_tmpz00_3304 =
																															CAR
																															(BgL_xz00_2704);
																														BgL_test2379z00_3301
																															=
																															SYMBOLP
																															(BgL_tmpz00_3304);
																													}
																												else
																													{	/* Llib/dsssl.scm 211 */
																														BgL_test2379z00_3301
																															= ((bool_t) 0);
																													}
																												if (BgL_test2379z00_3301)
																													{	/* Llib/dsssl.scm 211 */
																														BgL_arg1429z00_2703
																															=
																															BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
																															(CAR
																															(BgL_xz00_2704));
																													}
																												else
																													{	/* Llib/dsssl.scm 211 */
																														if (SYMBOLP
																															(BgL_xz00_2704))
																															{	/* Llib/dsssl.scm 213 */
																																BgL_arg1429z00_2703
																																	=
																																	BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
																																	(BgL_xz00_2704);
																															}
																														else
																															{	/* Llib/dsssl.scm 213 */
																																BgL_arg1429z00_2703
																																	=
																																	PROCEDURE_ENTRY
																																	(BgL_errz00_2620)
																																	(BgL_errz00_2620,
																																	BgL_wherez00_2621,
																																	BGl_string2244z00zz__dssslz00,
																																	BgL_formalsz00_2622,
																																	BEOA);
																															}
																													}
																											}
																										}
																										{	/* Llib/dsssl.scm 209 */
																											obj_t BgL_res2067z00_2705;

																											BgL_res2067z00_2705 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1429z00_2703,
																												BNIL);
																											BgL_newtail1078z00_2702 =
																												BgL_res2067z00_2705;
																										}
																									}
																									SET_CDR(BgL_tail1077z00_2701,
																										BgL_newtail1078z00_2702);
																									{	/* Llib/dsssl.scm 209 */
																										obj_t BgL_arg1428z00_2706;

																										BgL_arg1428z00_2706 =
																											CDR(
																											((obj_t)
																												BgL_l1074z00_2700));
																										{
																											obj_t
																												BgL_tail1077z00_3323;
																											obj_t BgL_l1074z00_3322;

																											BgL_l1074z00_3322 =
																												BgL_arg1428z00_2706;
																											BgL_tail1077z00_3323 =
																												BgL_newtail1078z00_2702;
																											BgL_tail1077z00_2701 =
																												BgL_tail1077z00_3323;
																											BgL_l1074z00_2700 =
																												BgL_l1074z00_3322;
																											goto
																												BgL_zc3z04anonymousza31426ze3z87_2699;
																										}
																									}
																								}
																						}
																					}
																				if (NULLP(BgL_keysz00_2707))
																					{	/* Llib/dsssl.scm 224 */
																						BgL_tmpz00_3277 =
																							PROCEDURE_ENTRY(BgL_errz00_2620)
																							(BgL_errz00_2620,
																							BgL_wherez00_2621,
																							BGl_string2230z00zz__dssslz00,
																							BgL_formalsz00_2622, BEOA);
																					}
																				else
																					{	/* Llib/dsssl.scm 224 */
																						BgL_tmpz00_3277 =
																							BGl_z62keyzd2statezb0zz__dssslz00
																							(BgL_bodyz00_2623,
																							BgL_formalsz00_2622,
																							BgL_wherez00_2621,
																							BgL_errz00_2620, BgL_argsz00_2693,
																							BgL_dssslzd2argzd2_2694, BNIL,
																							((bool_t) 0));
																					}
																			}
																	}
																}
															else
																{	/* Llib/dsssl.scm 201 */
																	BgL_tmpz00_3277 =
																		PROCEDURE_ENTRY(BgL_errz00_2620)
																		(BgL_errz00_2620, BgL_wherez00_2621,
																		BGl_string2229z00zz__dssslz00,
																		BgL_formalsz00_2622, BEOA);
																}
														}
													else
														{	/* Llib/dsssl.scm 199 */
															BgL_tmpz00_3277 =
																PROCEDURE_ENTRY(BgL_errz00_2620)
																(BgL_errz00_2620, BgL_wherez00_2621,
																BGl_string2229z00zz__dssslz00,
																BgL_formalsz00_2622, BEOA);
														}
												}
											BgL_arg1406z00_2712 =
												MAKE_YOUNG_PAIR(BgL_tmpz00_3277, BNIL);
										}
										BgL_arg1404z00_2710 =
											MAKE_YOUNG_PAIR(BgL_arg1405z00_2711, BgL_arg1406z00_2712);
									}
									return
										MAKE_YOUNG_PAIR(BGl_symbol2196z00zz__dssslz00,
										BgL_arg1404z00_2710);
								}
							else
								{	/* Llib/dsssl.scm 189 */
									return
										PROCEDURE_ENTRY(BgL_errz00_2620) (BgL_errz00_2620,
										BgL_wherez00_2621, BGl_string2229z00zz__dssslz00,
										BgL_formalsz00_2622, BEOA);
								}
						}
					else
						{	/* Llib/dsssl.scm 187 */
							return
								PROCEDURE_ENTRY(BgL_errz00_2620) (BgL_errz00_2620,
								BgL_wherez00_2621, BGl_string2229z00zz__dssslz00,
								BgL_formalsz00_2622, BEOA);
						}
				}
			}
		}

	}



/* &no-rest-key-state */
	obj_t BGl_z62nozd2restzd2keyzd2statezb0zz__dssslz00(obj_t BgL_envz00_2626,
		obj_t BgL_argsz00_2631, obj_t BgL_dssslzd2argzd2_2632)
	{
		{	/* Llib/dsssl.scm 245 */
			{	/* Llib/dsssl.scm 231 */
				obj_t BgL_bodyz00_2627;
				obj_t BgL_errz00_2628;
				obj_t BgL_wherez00_2629;
				obj_t BgL_formalsz00_2630;

				BgL_bodyz00_2627 = PROCEDURE_L_REF(BgL_envz00_2626, (int) (((long) 0)));
				BgL_errz00_2628 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_2626, (int) (((long) 1))));
				BgL_wherez00_2629 =
					PROCEDURE_L_REF(BgL_envz00_2626, (int) (((long) 2)));
				BgL_formalsz00_2630 =
					PROCEDURE_L_REF(BgL_envz00_2626, (int) (((long) 3)));
				{
					obj_t BgL_argsz00_2718;

					if (NULLP(BgL_argsz00_2631))
						{	/* Llib/dsssl.scm 248 */
							return
								PROCEDURE_ENTRY(BgL_errz00_2628) (BgL_errz00_2628,
								BgL_wherez00_2629, BGl_string2230z00zz__dssslz00,
								BgL_formalsz00_2630, BEOA);
						}
					else
						{	/* Llib/dsssl.scm 251 */
							obj_t BgL_keysz00_2729;

							BgL_argsz00_2718 = BgL_argsz00_2631;
							{
								obj_t BgL_argsz00_2720;
								obj_t BgL_auxz00_2721;

								BgL_argsz00_2720 = BgL_argsz00_2718;
								BgL_auxz00_2721 = BNIL;
							BgL_loopz00_2719:
								if (NULLP(BgL_argsz00_2720))
									{	/* Llib/dsssl.scm 234 */
										BgL_keysz00_2729 = bgl_reverse_bang(BgL_auxz00_2721);
									}
								else
									{	/* Llib/dsssl.scm 234 */
										if ((CAR(((obj_t) BgL_argsz00_2720)) == (BREST)))
											{	/* Llib/dsssl.scm 236 */
												BgL_keysz00_2729 = bgl_reverse_bang(BgL_auxz00_2721);
											}
										else
											{	/* Llib/dsssl.scm 239 */
												obj_t BgL_ezd2145zd2_2722;

												BgL_ezd2145zd2_2722 = CAR(((obj_t) BgL_argsz00_2720));
												if (SYMBOLP(BgL_ezd2145zd2_2722))
													{	/* Llib/dsssl.scm 241 */
														obj_t BgL_arg1452z00_2723;
														obj_t BgL_arg1453z00_2724;

														BgL_arg1452z00_2723 =
															CDR(((obj_t) BgL_argsz00_2720));
														BgL_arg1453z00_2724 =
															MAKE_YOUNG_PAIR
															(BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
															(BgL_ezd2145zd2_2722), BgL_auxz00_2721);
														{
															obj_t BgL_auxz00_3396;
															obj_t BgL_argsz00_3395;

															BgL_argsz00_3395 = BgL_arg1452z00_2723;
															BgL_auxz00_3396 = BgL_arg1453z00_2724;
															BgL_auxz00_2721 = BgL_auxz00_3396;
															BgL_argsz00_2720 = BgL_argsz00_3395;
															goto BgL_loopz00_2719;
														}
													}
												else
													{	/* Llib/dsssl.scm 239 */
														if (PAIRP(BgL_ezd2145zd2_2722))
															{	/* Llib/dsssl.scm 239 */
																obj_t BgL_carzd2152zd2_2725;
																obj_t BgL_cdrzd2153zd2_2726;

																BgL_carzd2152zd2_2725 =
																	CAR(BgL_ezd2145zd2_2722);
																BgL_cdrzd2153zd2_2726 =
																	CDR(BgL_ezd2145zd2_2722);
																if (SYMBOLP(BgL_carzd2152zd2_2725))
																	{	/* Llib/dsssl.scm 239 */
																		if (PAIRP(BgL_cdrzd2153zd2_2726))
																			{	/* Llib/dsssl.scm 239 */
																				if (NULLP(CDR(BgL_cdrzd2153zd2_2726)))
																					{	/* Llib/dsssl.scm 243 */
																						obj_t BgL_arg1455z00_2727;
																						obj_t BgL_arg1456z00_2728;

																						BgL_arg1455z00_2727 =
																							CDR(((obj_t) BgL_argsz00_2720));
																						BgL_arg1456z00_2728 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
																							(BgL_carzd2152zd2_2725),
																							BgL_auxz00_2721);
																						{
																							obj_t BgL_auxz00_3413;
																							obj_t BgL_argsz00_3412;

																							BgL_argsz00_3412 =
																								BgL_arg1455z00_2727;
																							BgL_auxz00_3413 =
																								BgL_arg1456z00_2728;
																							BgL_auxz00_2721 = BgL_auxz00_3413;
																							BgL_argsz00_2720 =
																								BgL_argsz00_3412;
																							goto BgL_loopz00_2719;
																						}
																					}
																				else
																					{	/* Llib/dsssl.scm 239 */
																						BgL_keysz00_2729 =
																							PROCEDURE_ENTRY(BgL_errz00_2628)
																							(BgL_errz00_2628,
																							BgL_wherez00_2629,
																							BGl_string2230z00zz__dssslz00,
																							BgL_formalsz00_2630, BEOA);
																					}
																			}
																		else
																			{	/* Llib/dsssl.scm 239 */
																				BgL_keysz00_2729 =
																					PROCEDURE_ENTRY(BgL_errz00_2628)
																					(BgL_errz00_2628, BgL_wherez00_2629,
																					BGl_string2230z00zz__dssslz00,
																					BgL_formalsz00_2630, BEOA);
																			}
																	}
																else
																	{	/* Llib/dsssl.scm 239 */
																		BgL_keysz00_2729 =
																			PROCEDURE_ENTRY(BgL_errz00_2628)
																			(BgL_errz00_2628, BgL_wherez00_2629,
																			BGl_string2230z00zz__dssslz00,
																			BgL_formalsz00_2630, BEOA);
																	}
															}
														else
															{	/* Llib/dsssl.scm 239 */
																BgL_keysz00_2729 =
																	PROCEDURE_ENTRY(BgL_errz00_2628)
																	(BgL_errz00_2628, BgL_wherez00_2629,
																	BGl_string2230z00zz__dssslz00,
																	BgL_formalsz00_2630, BEOA);
															}
													}
											}
									}
							}
							if (NULLP(BgL_keysz00_2729))
								{	/* Llib/dsssl.scm 252 */
									return
										PROCEDURE_ENTRY(BgL_errz00_2628) (BgL_errz00_2628,
										BgL_wherez00_2629, BGl_string2230z00zz__dssslz00,
										BgL_formalsz00_2630, BEOA);
								}
							else
								{	/* Llib/dsssl.scm 252 */
									return
										BGl_z62keyzd2statezb0zz__dssslz00(BgL_bodyz00_2627,
										BgL_formalsz00_2630, BgL_wherez00_2629, BgL_errz00_2628,
										BgL_argsz00_2631, BgL_dssslzd2argzd2_2632, BNIL,
										((bool_t) 1));
								}
						}
				}
			}
		}

	}



/* dsssl-check-key-args! */
	BGL_EXPORTED_DEF obj_t BGl_dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00(obj_t
		BgL_dssslzd2argszd2_8, obj_t BgL_keyzd2listzd2_9)
	{
		{	/* Llib/dsssl.scm 316 */
			if (NULLP(BgL_keyzd2listzd2_9))
				{
					obj_t BgL_argsz00_1504;

					BgL_argsz00_1504 = BgL_dssslzd2argszd2_8;
				BgL_zc3z04anonymousza31570ze3z87_1505:
					if (NULLP(BgL_argsz00_1504))
						{	/* Llib/dsssl.scm 320 */
							return BgL_dssslzd2argszd2_8;
						}
					else
						{	/* Llib/dsssl.scm 322 */
							bool_t BgL_test2394z00_3451;

							if (PAIRP(BgL_argsz00_1504))
								{	/* Llib/dsssl.scm 322 */
									if (NULLP(CDR(BgL_argsz00_1504)))
										{	/* Llib/dsssl.scm 323 */
											BgL_test2394z00_3451 = ((bool_t) 1);
										}
									else
										{	/* Llib/dsssl.scm 324 */
											bool_t BgL_test2397z00_3457;

											{	/* Llib/dsssl.scm 324 */
												obj_t BgL_tmpz00_3458;

												BgL_tmpz00_3458 = CAR(BgL_argsz00_1504);
												BgL_test2397z00_3457 = KEYWORDP(BgL_tmpz00_3458);
											}
											if (BgL_test2397z00_3457)
												{	/* Llib/dsssl.scm 324 */
													BgL_test2394z00_3451 = ((bool_t) 0);
												}
											else
												{	/* Llib/dsssl.scm 324 */
													BgL_test2394z00_3451 = ((bool_t) 1);
												}
										}
								}
							else
								{	/* Llib/dsssl.scm 322 */
									BgL_test2394z00_3451 = ((bool_t) 1);
								}
							if (BgL_test2394z00_3451)
								{	/* Llib/dsssl.scm 322 */
									return
										BGl_errorz00zz__errorz00(BGl_string2245z00zz__dssslz00,
										BGl_string2246z00zz__dssslz00, BgL_argsz00_1504);
								}
							else
								{	/* Llib/dsssl.scm 329 */
									obj_t BgL_arg1580z00_1515;

									{	/* Llib/dsssl.scm 329 */
										obj_t BgL_pairz00_2240;

										BgL_pairz00_2240 = CDR(((obj_t) BgL_argsz00_1504));
										BgL_arg1580z00_1515 = CDR(BgL_pairz00_2240);
									}
									{
										obj_t BgL_argsz00_3465;

										BgL_argsz00_3465 = BgL_arg1580z00_1515;
										BgL_argsz00_1504 = BgL_argsz00_3465;
										goto BgL_zc3z04anonymousza31570ze3z87_1505;
									}
								}
						}
				}
			else
				{
					obj_t BgL_argsz00_1524;
					bool_t BgL_armedz00_1525;
					obj_t BgL_optsz00_1526;

					BgL_argsz00_1524 = BgL_dssslzd2argszd2_8;
					BgL_armedz00_1525 = ((bool_t) 0);
					BgL_optsz00_1526 = BNIL;
				BgL_zc3z04anonymousza31584ze3z87_1527:
					if (NULLP(BgL_argsz00_1524))
						{	/* Llib/dsssl.scm 334 */
							return bgl_reverse_bang(BgL_optsz00_1526);
						}
					else
						{	/* Llib/dsssl.scm 336 */
							bool_t BgL_test2399z00_3469;

							if (PAIRP(BgL_argsz00_1524))
								{	/* Llib/dsssl.scm 336 */
									if (NULLP(CDR(BgL_argsz00_1524)))
										{	/* Llib/dsssl.scm 337 */
											BgL_test2399z00_3469 = ((bool_t) 1);
										}
									else
										{	/* Llib/dsssl.scm 338 */
											bool_t BgL_test2402z00_3475;

											{	/* Llib/dsssl.scm 338 */
												obj_t BgL_tmpz00_3476;

												BgL_tmpz00_3476 = CAR(BgL_argsz00_1524);
												BgL_test2402z00_3475 = KEYWORDP(BgL_tmpz00_3476);
											}
											if (BgL_test2402z00_3475)
												{	/* Llib/dsssl.scm 338 */
													if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
																(BgL_argsz00_1524), BgL_keyzd2listzd2_9)))
														{	/* Llib/dsssl.scm 339 */
															BgL_test2399z00_3469 = ((bool_t) 0);
														}
													else
														{	/* Llib/dsssl.scm 339 */
															BgL_test2399z00_3469 = ((bool_t) 1);
														}
												}
											else
												{	/* Llib/dsssl.scm 338 */
													BgL_test2399z00_3469 = ((bool_t) 1);
												}
										}
								}
							else
								{	/* Llib/dsssl.scm 336 */
									BgL_test2399z00_3469 = ((bool_t) 1);
								}
							if (BgL_test2399z00_3469)
								{	/* Llib/dsssl.scm 336 */
									if (BgL_armedz00_1525)
										{	/* Llib/dsssl.scm 342 */
											obj_t BgL_arg1602z00_1540;
											obj_t BgL_arg1603z00_1541;

											BgL_arg1602z00_1540 = CDR(((obj_t) BgL_argsz00_1524));
											{	/* Llib/dsssl.scm 344 */
												obj_t BgL_arg1604z00_1542;

												BgL_arg1604z00_1542 = CAR(((obj_t) BgL_argsz00_1524));
												BgL_arg1603z00_1541 =
													MAKE_YOUNG_PAIR(BgL_arg1604z00_1542,
													BgL_optsz00_1526);
											}
											{
												obj_t BgL_optsz00_3491;
												bool_t BgL_armedz00_3490;
												obj_t BgL_argsz00_3489;

												BgL_argsz00_3489 = BgL_arg1602z00_1540;
												BgL_armedz00_3490 = ((bool_t) 0);
												BgL_optsz00_3491 = BgL_arg1603z00_1541;
												BgL_optsz00_1526 = BgL_optsz00_3491;
												BgL_armedz00_1525 = BgL_armedz00_3490;
												BgL_argsz00_1524 = BgL_argsz00_3489;
												goto BgL_zc3z04anonymousza31584ze3z87_1527;
											}
										}
									else
										{	/* Llib/dsssl.scm 341 */
											obj_t BgL_arg1605z00_1543;

											BgL_arg1605z00_1543 = CDR(((obj_t) BgL_argsz00_1524));
											{
												obj_t BgL_argsz00_3494;

												BgL_argsz00_3494 = BgL_arg1605z00_1543;
												BgL_argsz00_1524 = BgL_argsz00_3494;
												goto BgL_zc3z04anonymousza31584ze3z87_1527;
											}
										}
								}
							else
								{	/* Llib/dsssl.scm 346 */
									obj_t BgL_arg1606z00_1544;

									{	/* Llib/dsssl.scm 346 */
										obj_t BgL_pairz00_2254;

										BgL_pairz00_2254 = CDR(((obj_t) BgL_argsz00_1524));
										BgL_arg1606z00_1544 = CDR(BgL_pairz00_2254);
									}
									{
										bool_t BgL_armedz00_3499;
										obj_t BgL_argsz00_3498;

										BgL_argsz00_3498 = BgL_arg1606z00_1544;
										BgL_armedz00_3499 = ((bool_t) 1);
										BgL_armedz00_1525 = BgL_armedz00_3499;
										BgL_argsz00_1524 = BgL_argsz00_3498;
										goto BgL_zc3z04anonymousza31584ze3z87_1527;
									}
								}
						}
				}
		}

	}



/* &dsssl-check-key-args! */
	obj_t BGl_z62dssslzd2checkzd2keyzd2argsz12za2zz__dssslz00(obj_t
		BgL_envz00_2633, obj_t BgL_dssslzd2argszd2_2634,
		obj_t BgL_keyzd2listzd2_2635)
	{
		{	/* Llib/dsssl.scm 316 */
			return
				BGl_dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00
				(BgL_dssslzd2argszd2_2634, BgL_keyzd2listzd2_2635);
		}

	}



/* dsssl-get-key-arg */
	BGL_EXPORTED_DEF obj_t BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(obj_t
		BgL_dssslzd2argszd2_10, obj_t BgL_keywordz00_11,
		obj_t BgL_initializa7erza7_12)
	{
		{	/* Llib/dsssl.scm 354 */
			{
				obj_t BgL_argsz00_1554;

				BgL_argsz00_1554 = BgL_dssslzd2argszd2_10;
			BgL_zc3z04anonymousza31612ze3z87_1555:
				if (PAIRP(BgL_argsz00_1554))
					{	/* Llib/dsssl.scm 362 */
						bool_t BgL_test2406z00_3503;

						{	/* Llib/dsssl.scm 362 */
							obj_t BgL_tmpz00_3504;

							BgL_tmpz00_3504 = CAR(BgL_argsz00_1554);
							BgL_test2406z00_3503 = KEYWORDP(BgL_tmpz00_3504);
						}
						if (BgL_test2406z00_3503)
							{	/* Llib/dsssl.scm 362 */
								if ((CAR(BgL_argsz00_1554) == BgL_keywordz00_11))
									{	/* Llib/dsssl.scm 365 */
										bool_t BgL_test2408z00_3510;

										{	/* Llib/dsssl.scm 365 */
											obj_t BgL_tmpz00_3511;

											BgL_tmpz00_3511 = CDR(BgL_argsz00_1554);
											BgL_test2408z00_3510 = PAIRP(BgL_tmpz00_3511);
										}
										if (BgL_test2408z00_3510)
											{	/* Llib/dsssl.scm 365 */
												return CAR(CDR(BgL_argsz00_1554));
											}
										else
											{	/* Llib/dsssl.scm 365 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2208z00zz__dssslz00,
													BGl_string2247z00zz__dssslz00, CAR(BgL_argsz00_1554));
											}
									}
								else
									{	/* Llib/dsssl.scm 370 */
										bool_t BgL_test2409z00_3518;

										{	/* Llib/dsssl.scm 370 */
											obj_t BgL_tmpz00_3519;

											BgL_tmpz00_3519 = CAR(BgL_argsz00_1554);
											BgL_test2409z00_3518 = KEYWORDP(BgL_tmpz00_3519);
										}
										if (BgL_test2409z00_3518)
											{	/* Llib/dsssl.scm 375 */
												bool_t BgL_test2410z00_3522;

												{	/* Llib/dsssl.scm 375 */
													obj_t BgL_tmpz00_3523;

													BgL_tmpz00_3523 = CDR(BgL_argsz00_1554);
													BgL_test2410z00_3522 = PAIRP(BgL_tmpz00_3523);
												}
												if (BgL_test2410z00_3522)
													{
														obj_t BgL_argsz00_3526;

														BgL_argsz00_3526 = CDR(CDR(BgL_argsz00_1554));
														BgL_argsz00_1554 = BgL_argsz00_3526;
														goto BgL_zc3z04anonymousza31612ze3z87_1555;
													}
												else
													{	/* Llib/dsssl.scm 375 */
														return
															BGl_errorz00zz__errorz00
															(BGl_string2208z00zz__dssslz00,
															BGl_string2247z00zz__dssslz00,
															CAR(BgL_argsz00_1554));
													}
											}
										else
											{	/* Llib/dsssl.scm 370 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2208z00zz__dssslz00,
													BGl_string2248z00zz__dssslz00, CAR(BgL_argsz00_1554));
											}
									}
							}
						else
							{
								obj_t BgL_argsz00_3533;

								BgL_argsz00_3533 = CDR(BgL_argsz00_1554);
								BgL_argsz00_1554 = BgL_argsz00_3533;
								goto BgL_zc3z04anonymousza31612ze3z87_1555;
							}
					}
				else
					{	/* Llib/dsssl.scm 357 */
						if (NULLP(BgL_argsz00_1554))
							{	/* Llib/dsssl.scm 358 */
								return BgL_initializa7erza7_12;
							}
						else
							{	/* Llib/dsssl.scm 358 */
								return
									BGl_errorz00zz__errorz00(BGl_string2208z00zz__dssslz00,
									BGl_string2249z00zz__dssslz00, BgL_dssslzd2argszd2_10);
							}
					}
			}
		}

	}



/* &dsssl-get-key-arg */
	obj_t BGl_z62dssslzd2getzd2keyzd2argzb0zz__dssslz00(obj_t BgL_envz00_2636,
		obj_t BgL_dssslzd2argszd2_2637, obj_t BgL_keywordz00_2638,
		obj_t BgL_initializa7erza7_2639)
	{
		{	/* Llib/dsssl.scm 354 */
			{	/* Llib/dsssl.scm 357 */
				obj_t BgL_auxz00_3538;

				if (KEYWORDP(BgL_keywordz00_2638))
					{	/* Llib/dsssl.scm 357 */
						BgL_auxz00_3538 = BgL_keywordz00_2638;
					}
				else
					{
						obj_t BgL_auxz00_3541;

						BgL_auxz00_3541 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2200z00zz__dssslz00,
							BINT(((long) 12351)), BGl_string2250z00zz__dssslz00,
							BGl_string2251z00zz__dssslz00, BgL_keywordz00_2638);
						FAILURE(BgL_auxz00_3541, BFALSE, BFALSE);
					}
				return
					BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(BgL_dssslzd2argszd2_2637,
					BgL_auxz00_3538, BgL_initializa7erza7_2639);
			}
		}

	}



/* dsssl-get-key-rest-arg */
	BGL_EXPORTED_DEF obj_t BGl_dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00(obj_t
		BgL_dssslzd2argszd2_13, obj_t BgL_keysz00_14)
	{
		{	/* Llib/dsssl.scm 384 */
			return
				BGl_loopze71ze7zz__dssslz00(BgL_keysz00_14, BgL_dssslzd2argszd2_13);
		}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zz__dssslz00(obj_t BgL_keysz00_2653,
		obj_t BgL_argsz00_1580)
	{
		{	/* Llib/dsssl.scm 385 */
		BGl_loopze71ze7zz__dssslz00:
			if (NULLP(BgL_argsz00_1580))
				{	/* Llib/dsssl.scm 387 */
					return BNIL;
				}
			else
				{	/* Llib/dsssl.scm 389 */
					bool_t BgL_test2414z00_3549;

					{	/* Llib/dsssl.scm 389 */
						bool_t BgL_test2415z00_3550;

						{	/* Llib/dsssl.scm 389 */
							obj_t BgL_tmpz00_3551;

							BgL_tmpz00_3551 = CAR(((obj_t) BgL_argsz00_1580));
							BgL_test2415z00_3550 = KEYWORDP(BgL_tmpz00_3551);
						}
						if (BgL_test2415z00_3550)
							{	/* Llib/dsssl.scm 389 */
								if (NULLP(CDR(((obj_t) BgL_argsz00_1580))))
									{	/* Llib/dsssl.scm 390 */
										BgL_test2414z00_3549 = ((bool_t) 1);
									}
								else
									{	/* Llib/dsssl.scm 390 */
										if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR(
														((obj_t) BgL_argsz00_1580)), BgL_keysz00_2653)))
											{	/* Llib/dsssl.scm 391 */
												BgL_test2414z00_3549 = ((bool_t) 0);
											}
										else
											{	/* Llib/dsssl.scm 391 */
												BgL_test2414z00_3549 = ((bool_t) 1);
											}
									}
							}
						else
							{	/* Llib/dsssl.scm 389 */
								BgL_test2414z00_3549 = ((bool_t) 1);
							}
					}
					if (BgL_test2414z00_3549)
						{	/* Llib/dsssl.scm 392 */
							obj_t BgL_arg1651z00_1593;
							obj_t BgL_arg1652z00_1594;

							BgL_arg1651z00_1593 = CAR(((obj_t) BgL_argsz00_1580));
							{	/* Llib/dsssl.scm 392 */
								obj_t BgL_arg1654z00_1595;

								BgL_arg1654z00_1595 = CDR(((obj_t) BgL_argsz00_1580));
								BgL_arg1652z00_1594 =
									BGl_loopze71ze7zz__dssslz00(BgL_keysz00_2653,
									BgL_arg1654z00_1595);
							}
							return MAKE_YOUNG_PAIR(BgL_arg1651z00_1593, BgL_arg1652z00_1594);
						}
					else
						{	/* Llib/dsssl.scm 394 */
							obj_t BgL_arg1656z00_1596;

							{	/* Llib/dsssl.scm 394 */
								obj_t BgL_pairz00_2289;

								BgL_pairz00_2289 = CDR(((obj_t) BgL_argsz00_1580));
								BgL_arg1656z00_1596 = CDR(BgL_pairz00_2289);
							}
							{
								obj_t BgL_argsz00_3573;

								BgL_argsz00_3573 = BgL_arg1656z00_1596;
								BgL_argsz00_1580 = BgL_argsz00_3573;
								goto BGl_loopze71ze7zz__dssslz00;
							}
						}
				}
		}

	}



/* &dsssl-get-key-rest-arg */
	obj_t BGl_z62dssslzd2getzd2keyzd2restzd2argz62zz__dssslz00(obj_t
		BgL_envz00_2640, obj_t BgL_dssslzd2argszd2_2641, obj_t BgL_keysz00_2642)
	{
		{	/* Llib/dsssl.scm 384 */
			{	/* Llib/dsssl.scm 387 */
				obj_t BgL_auxz00_3574;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_keysz00_2642))
					{	/* Llib/dsssl.scm 387 */
						BgL_auxz00_3574 = BgL_keysz00_2642;
					}
				else
					{
						obj_t BgL_auxz00_3577;

						BgL_auxz00_3577 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2200z00zz__dssslz00,
							BINT(((long) 13315)), BGl_string2252z00zz__dssslz00,
							BGl_string2253z00zz__dssslz00, BgL_keysz00_2642);
						FAILURE(BgL_auxz00_3577, BFALSE, BFALSE);
					}
				return
					BGl_dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00
					(BgL_dssslzd2argszd2_2641, BgL_auxz00_3574);
			}
		}

	}



/* id-sans-type */
	obj_t BGl_idzd2sanszd2typez00zz__dssslz00(obj_t BgL_idz00_15)
	{
		{	/* Llib/dsssl.scm 402 */
			{	/* Llib/dsssl.scm 403 */
				obj_t BgL_stringz00_1604;

				{	/* Llib/dsssl.scm 403 */
					obj_t BgL_res2111z00_2292;

					{	/* Llib/dsssl.scm 403 */
						obj_t BgL_arg1725z00_2291;

						BgL_arg1725z00_2291 = SYMBOL_TO_STRING(BgL_idz00_15);
						BgL_res2111z00_2292 =
							BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1725z00_2291);
					}
					BgL_stringz00_1604 = BgL_res2111z00_2292;
				}
				{	/* Llib/dsssl.scm 403 */
					long BgL_lenz00_1605;

					BgL_lenz00_1605 = STRING_LENGTH(BgL_stringz00_1604);
					{	/* Llib/dsssl.scm 404 */

						{
							long BgL_walkerz00_1607;

							BgL_walkerz00_1607 = ((long) 0);
						BgL_zc3z04anonymousza31660ze3z87_1608:
							if ((BgL_walkerz00_1607 == BgL_lenz00_1605))
								{	/* Llib/dsssl.scm 407 */
									return BgL_idz00_15;
								}
							else
								{	/* Llib/dsssl.scm 409 */
									bool_t BgL_test2420z00_3587;

									if (
										(STRING_REF(BgL_stringz00_1604,
												BgL_walkerz00_1607) == ((unsigned char) ':')))
										{	/* Llib/dsssl.scm 409 */
											if ((BgL_walkerz00_1607 < (BgL_lenz00_1605 - ((long) 1))))
												{	/* Llib/dsssl.scm 410 */
													BgL_test2420z00_3587 =
														(STRING_REF(BgL_stringz00_1604,
															(BgL_walkerz00_1607 + ((long) 1))) ==
														((unsigned char) ':'));
												}
											else
												{	/* Llib/dsssl.scm 410 */
													BgL_test2420z00_3587 = ((bool_t) 0);
												}
										}
									else
										{	/* Llib/dsssl.scm 409 */
											BgL_test2420z00_3587 = ((bool_t) 0);
										}
									if (BgL_test2420z00_3587)
										{	/* Llib/dsssl.scm 409 */
											return
												bstring_to_symbol(c_substring(BgL_stringz00_1604,
													((long) 0), BgL_walkerz00_1607));
										}
									else
										{
											long BgL_walkerz00_3599;

											BgL_walkerz00_3599 = (BgL_walkerz00_1607 + ((long) 1));
											BgL_walkerz00_1607 = BgL_walkerz00_3599;
											goto BgL_zc3z04anonymousza31660ze3z87_1608;
										}
								}
						}
					}
				}
			}
		}

	}



/* dsssl-formals->scheme-formals */
	BGL_EXPORTED_DEF obj_t
		BGl_dssslzd2formalszd2ze3schemezd2formalsz31zz__dssslz00(obj_t
		BgL_formalsz00_16, obj_t BgL_errz00_17)
	{
		{	/* Llib/dsssl.scm 419 */
			return
				BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalsze3zz__dssslz00
				(BgL_formalsz00_16, BgL_errz00_17, ((bool_t) 0));
		}

	}



/* &dsssl-formals->scheme-formals */
	obj_t BGl_z62dssslzd2formalszd2ze3schemezd2formalsz53zz__dssslz00(obj_t
		BgL_envz00_2643, obj_t BgL_formalsz00_2644, obj_t BgL_errz00_2645)
	{
		{	/* Llib/dsssl.scm 419 */
			{	/* Llib/dsssl.scm 420 */
				obj_t BgL_auxz00_3602;

				if (PROCEDUREP(BgL_errz00_2645))
					{	/* Llib/dsssl.scm 420 */
						BgL_auxz00_3602 = BgL_errz00_2645;
					}
				else
					{
						obj_t BgL_auxz00_3605;

						BgL_auxz00_3605 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2200z00zz__dssslz00,
							BINT(((long) 14652)), BGl_string2254z00zz__dssslz00,
							BGl_string2202z00zz__dssslz00, BgL_errz00_2645);
						FAILURE(BgL_auxz00_3605, BFALSE, BFALSE);
					}
				return
					BGl_dssslzd2formalszd2ze3schemezd2formalsz31zz__dssslz00
					(BgL_formalsz00_2644, BgL_auxz00_3602);
			}
		}

	}



/* dsssl-formals->scheme-typed-formals */
	BGL_EXPORTED_DEF obj_t
		BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalsze3zz__dssslz00(obj_t
		BgL_formalsz00_18, obj_t BgL_errz00_19, bool_t BgL_typedz00_20)
	{
		{	/* Llib/dsssl.scm 436 */
			return
				BGl_loopze70ze7zz__dssslz00(BgL_typedz00_20, BgL_formalsz00_18,
				BgL_errz00_19, BgL_formalsz00_18, ((bool_t) 0));
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__dssslz00(bool_t BgL_typedz00_2652,
		obj_t BgL_formalsz00_2651, obj_t BgL_errz00_2650, obj_t BgL_argsz00_1632,
		bool_t BgL_dssslz00_1633)
	{
		{	/* Llib/dsssl.scm 449 */
		BGl_loopze70ze7zz__dssslz00:
			{
				obj_t BgL_objz00_1658;

				if (NULLP(BgL_argsz00_1632))
					{	/* Llib/dsssl.scm 452 */
						return BNIL;
					}
				else
					{	/* Llib/dsssl.scm 452 */
						if (PAIRP(BgL_argsz00_1632))
							{	/* Llib/dsssl.scm 464 */
								bool_t BgL_test2426z00_3615;

								{	/* Llib/dsssl.scm 464 */
									obj_t BgL_tmpz00_3616;

									BgL_tmpz00_3616 = CAR(BgL_argsz00_1632);
									BgL_test2426z00_3615 = SYMBOLP(BgL_tmpz00_3616);
								}
								if (BgL_test2426z00_3615)
									{	/* Llib/dsssl.scm 464 */
										if (BgL_dssslz00_1633)
											{	/* Llib/dsssl.scm 476 */
												return
													BGl_idzd2sanszd2typez00zz__dssslz00(CAR
													(BgL_argsz00_1632));
											}
										else
											{	/* Llib/dsssl.scm 479 */
												obj_t BgL_arg1695z00_1640;
												obj_t BgL_arg1696z00_1641;

												if (BgL_typedz00_2652)
													{	/* Llib/dsssl.scm 479 */
														BgL_arg1695z00_1640 = CAR(BgL_argsz00_1632);
													}
												else
													{	/* Llib/dsssl.scm 479 */
														BgL_arg1695z00_1640 =
															BGl_idzd2sanszd2typez00zz__dssslz00(CAR
															(BgL_argsz00_1632));
													}
												BgL_arg1696z00_1641 =
													BGl_loopze70ze7zz__dssslz00(BgL_typedz00_2652,
													BgL_formalsz00_2651, BgL_errz00_2650,
													CDR(BgL_argsz00_1632), ((bool_t) 0));
												return MAKE_YOUNG_PAIR(BgL_arg1695z00_1640,
													BgL_arg1696z00_1641);
											}
									}
								else
									{	/* Llib/dsssl.scm 464 */
										if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
													(BgL_argsz00_1632), BGl_list2255z00zz__dssslz00)))
											{
												bool_t BgL_dssslz00_3635;
												obj_t BgL_argsz00_3633;

												BgL_argsz00_3633 = CDR(BgL_argsz00_1632);
												BgL_dssslz00_3635 = ((bool_t) 1);
												BgL_dssslz00_1633 = BgL_dssslz00_3635;
												BgL_argsz00_1632 = BgL_argsz00_3633;
												goto BGl_loopze70ze7zz__dssslz00;
											}
										else
											{	/* Llib/dsssl.scm 466 */
												if (BgL_dssslz00_1633)
													{	/* Llib/dsssl.scm 470 */
														bool_t BgL_test2431z00_3637;

														BgL_objz00_1658 = CAR(BgL_argsz00_1632);
														if (PAIRP(BgL_objz00_1658))
															{	/* Llib/dsssl.scm 443 */
																bool_t BgL_test2433z00_3640;

																{	/* Llib/dsssl.scm 443 */
																	obj_t BgL_tmpz00_3641;

																	BgL_tmpz00_3641 = CDR(BgL_objz00_1658);
																	BgL_test2433z00_3640 = PAIRP(BgL_tmpz00_3641);
																}
																if (BgL_test2433z00_3640)
																	{	/* Llib/dsssl.scm 443 */
																		BgL_test2431z00_3637 =
																			NULLP(CDR(CDR(BgL_objz00_1658)));
																	}
																else
																	{	/* Llib/dsssl.scm 443 */
																		BgL_test2431z00_3637 = ((bool_t) 0);
																	}
															}
														else
															{	/* Llib/dsssl.scm 442 */
																BgL_test2431z00_3637 = ((bool_t) 0);
															}
														if (BgL_test2431z00_3637)
															{	/* Llib/dsssl.scm 470 */
																return
																	BGl_idzd2sanszd2typez00zz__dssslz00(CAR(CAR
																		(BgL_argsz00_1632)));
															}
														else
															{	/* Llib/dsssl.scm 470 */
																return
																	PROCEDURE_ENTRY(BgL_errz00_2650)
																	(BgL_errz00_2650,
																	BGl_string2256z00zz__dssslz00,
																	BGl_string2257z00zz__dssslz00,
																	BgL_formalsz00_2651, BEOA);
															}
													}
												else
													{	/* Llib/dsssl.scm 468 */
														return
															PROCEDURE_ENTRY(BgL_errz00_2650) (BgL_errz00_2650,
															BGl_string2256z00zz__dssslz00,
															BGl_string2258z00zz__dssslz00,
															BgL_formalsz00_2651, BEOA);
													}
											}
									}
							}
						else
							{	/* Llib/dsssl.scm 454 */
								if (BgL_dssslz00_1633)
									{	/* Llib/dsssl.scm 456 */
										return
											PROCEDURE_ENTRY(BgL_errz00_2650) (BgL_errz00_2650,
											BGl_string2259z00zz__dssslz00,
											BGl_string2260z00zz__dssslz00, BgL_formalsz00_2651, BEOA);
									}
								else
									{	/* Llib/dsssl.scm 456 */
										if (SYMBOLP(BgL_argsz00_1632))
											{	/* Llib/dsssl.scm 460 */
												return
													BGl_idzd2sanszd2typez00zz__dssslz00(BgL_argsz00_1632);
											}
										else
											{	/* Llib/dsssl.scm 460 */
												return
													PROCEDURE_ENTRY(BgL_errz00_2650) (BgL_errz00_2650,
													BGl_string2256z00zz__dssslz00,
													BGl_string2258z00zz__dssslz00, BgL_formalsz00_2651,
													BEOA);
											}
									}
							}
					}
			}
		}

	}



/* &dsssl-formals->scheme-typed-formals */
	obj_t
		BGl_z62dssslzd2formalszd2ze3schemezd2typedzd2formalsz81zz__dssslz00(obj_t
		BgL_envz00_2646, obj_t BgL_formalsz00_2647, obj_t BgL_errz00_2648,
		obj_t BgL_typedz00_2649)
	{
		{	/* Llib/dsssl.scm 436 */
			{	/* Llib/dsssl.scm 439 */
				obj_t BgL_auxz00_3679;

				if (PROCEDUREP(BgL_errz00_2648))
					{	/* Llib/dsssl.scm 439 */
						BgL_auxz00_3679 = BgL_errz00_2648;
					}
				else
					{
						obj_t BgL_auxz00_3682;

						BgL_auxz00_3682 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2200z00zz__dssslz00,
							BINT(((long) 15856)), BGl_string2261z00zz__dssslz00,
							BGl_string2202z00zz__dssslz00, BgL_errz00_2648);
						FAILURE(BgL_auxz00_3682, BFALSE, BFALSE);
					}
				return
					BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalsze3zz__dssslz00
					(BgL_formalsz00_2647, BgL_auxz00_3679, CBOOL(BgL_typedz00_2649));
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__dssslz00()
	{
		{	/* Llib/dsssl.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__dssslz00()
	{
		{	/* Llib/dsssl.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__dssslz00()
	{
		{	/* Llib/dsssl.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__dssslz00()
	{
		{	/* Llib/dsssl.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2262z00zz__dssslz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2262z00zz__dssslz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string2262z00zz__dssslz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2262z00zz__dssslz00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string2262z00zz__dssslz00));
		}

	}

#ifdef __cplusplus
}
#endif
