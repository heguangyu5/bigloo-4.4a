/*===========================================================================*/
/*   (Rgc/rgccompile.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Rgc/rgccompile.scm -indent -o objs/obj_u/Rgc/rgccompile.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_statezd2positionszd2zz__rgc_dfaz00(obj_t);
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62compilezd2dfazb0zz__rgc_compilez00(obj_t, obj_t, obj_t,
		obj_t);
	extern bool_t BGl_specialzd2charzf3z21zz__rgc_rulesz00(int);
	static obj_t BGl_requirezd2initializa7ationz75zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_compilezd2submatcheszd2zz__rgc_compilez00(obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl_compilezd2condzd2regularz00zz__rgc_compilez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__rgc_compilez00();
	extern obj_t BGl_za2rgczd2optimza2zd2zz__rgc_configz00;
	extern obj_t BGl_rgcsetzd2ze3listz31zz__rgc_setz00(obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__rgc_compilez00();
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__rgc_compilez00();
	static obj_t BGl_compilezd2statezd2zz__rgc_compilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_compilezd2memberzd2testz00zz__rgc_compilez00(obj_t, obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_compilezd2rangezd2testze70ze7zz__rgc_compilez00(obj_t,
		obj_t);
	static obj_t BGl_charszd2ze3charzd2rangesze3zz__rgc_compilez00(obj_t);
	static obj_t BGl_insortz00zz__rgc_compilez00(int, obj_t);
	static obj_t BGl_list2309z00zz__rgc_compilez00 = BUNSPEC;
	extern obj_t BGl_statezd2namezd2zz__rgc_dfaz00(obj_t);
	static long BGl_za2casezd2thresholdza2zd2zz__rgc_compilez00;
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_list2312z00zz__rgc_compilez00 = BUNSPEC;
	extern obj_t make_vector(long, obj_t);
	static obj_t BGl_compilezd2matchzd2zz__rgc_compilez00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__rgc_compilez00();
	static obj_t BGl_compilezd2casezd2transitionze70ze7zz__rgc_compilez00(obj_t,
		obj_t);
	static obj_t BGl_list2329z00zz__rgc_compilez00 = BUNSPEC;
	extern obj_t BGl_listzd2ze3rgcsetz31zz__rgc_setz00(obj_t, long);
	static obj_t BGl_compilezd2casezd2regularz00zz__rgc_compilez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31603ze3ze5zz__rgc_compilez00(obj_t,
		obj_t);
	extern int
		BGl_specialzd2matchzd2charzd2ze3rulezd2numberze3zz__rgc_rulesz00(int);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__rgc_compilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_configz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_setz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_dfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_rulesz00(long, char *);
	extern obj_t BGl_rgcsetzd2addz12zc0zz__rgc_setz00(obj_t, long);
	extern obj_t BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00(obj_t, obj_t, long,
		long);
	static obj_t BGl_cnstzd2initzd2zz__rgc_compilez00();
	static obj_t BGl_symbol2301z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2303z00zz__rgc_compilez00 = BUNSPEC;
	extern long bgl_list_length(obj_t);
	static obj_t BGl_symbol2305z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2307z00zz__rgc_compilez00 = BUNSPEC;
	extern obj_t BGl_rgcsetzd2notzd2zz__rgc_setz00(obj_t);
	static obj_t BGl_compilezd2condzd2testz00zz__rgc_compilez00(obj_t, obj_t,
		long);
	extern bool_t BGl_specialzd2charzd2matchzf3zf3zz__rgc_rulesz00(int);
	static obj_t BGl_gczd2rootszd2initz00zz__rgc_compilez00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__rgc_compilez00();
	static obj_t BGl_compilezd2memberzd2vectorz00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2310z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2313z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2315z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2317z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2319z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2321z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2323z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2325z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2327z00zz__rgc_compilez00 = BUNSPEC;
	extern obj_t BGl_statezd2transitionszd2zz__rgc_dfaz00(obj_t);
	static obj_t BGl_symbol2330z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2332z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2334z00zz__rgc_compilez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_compilezd2dfazd2zz__rgc_compilez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2336z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2338z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_statezd2transitionzd2listz00zz__rgc_compilez00(obj_t);
	static obj_t BGl_charzd2rangeszd2ze3testze3zz__rgc_compilez00(obj_t, obj_t);
	static obj_t BGl_symbol2340z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2342z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2344z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2346z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2348z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_charzd2rangezd2ze3testze70z04zz__rgc_compilez00(obj_t,
		obj_t);
	static obj_t BGl_symbol2350z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2352z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2354z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2356z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2358z00zz__rgc_compilez00 = BUNSPEC;
	extern bool_t BGl_rgcsetzd2memberzf3z21zz__rgc_setz00(obj_t, long);
	static obj_t BGl_splitzd2transitionszd2zz__rgc_compilez00(obj_t);
	static obj_t BGl_loopze70ze7zz__rgc_compilez00(obj_t);
	static obj_t BGl_initzd2compilezd2memberzd2vectorz12zc0zz__rgc_compilez00();
	static obj_t BGl_symbol2291z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2293z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2295z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2297z00zz__rgc_compilez00 = BUNSPEC;
	static obj_t BGl_symbol2299z00zz__rgc_compilez00 = BUNSPEC;
	extern obj_t BGl_rgczd2maxzd2charz00zz__rgc_configz00();
	static obj_t BGl_compilezd2regularzd2zz__rgc_compilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_predicatezd2matchzd2zz__rgc_rulesz00(int);
	extern long BGl_rgcsetzd2lengthzd2zz__rgc_setz00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2300z00zz__rgc_compilez00,
		BgL_bgl_string2300za700za7za7_2363za7, "new-match", 9);
	      DEFINE_STRING(BGl_string2302z00zz__rgc_compilez00,
		BgL_bgl_string2302za700za7za7_2364za7, "let", 3);
	      DEFINE_STRING(BGl_string2304z00zz__rgc_compilez00,
		BgL_bgl_string2304za700za7za7_2365za7, "define", 6);
	      DEFINE_STRING(BGl_string2306z00zz__rgc_compilez00,
		BgL_bgl_string2306za700za7za7_2366za7, "=fx", 3);
	      DEFINE_STRING(BGl_string2308z00zz__rgc_compilez00,
		BgL_bgl_string2308za700za7za7_2367za7, "rgc-fill-buffer", 15);
	      DEFINE_STRING(BGl_string2311z00zz__rgc_compilez00,
		BgL_bgl_string2311za700za7za7_2368za7, "rgc-buffer-forward", 18);
	      DEFINE_STRING(BGl_string2314z00zz__rgc_compilez00,
		BgL_bgl_string2314za700za7za7_2369za7, "rgc-buffer-bufpos", 17);
	      DEFINE_STRING(BGl_string2316z00zz__rgc_compilez00,
		BgL_bgl_string2316za700za7za7_2370za7, "if", 2);
	      DEFINE_STRING(BGl_string2318z00zz__rgc_compilez00,
		BgL_bgl_string2318za700za7za7_2371za7, "rgc-buffer-get-char", 19);
	      DEFINE_STRING(BGl_string2320z00zz__rgc_compilez00,
		BgL_bgl_string2320za700za7za7_2372za7, "cur::int", 8);
	      DEFINE_STRING(BGl_string2322z00zz__rgc_compilez00,
		BgL_bgl_string2322za700za7za7_2373za7, "cur", 3);
	      DEFINE_STRING(BGl_string2324z00zz__rgc_compilez00,
		BgL_bgl_string2324za700za7za7_2374za7, "let*", 4);
	      DEFINE_STRING(BGl_string2326z00zz__rgc_compilez00,
		BgL_bgl_string2326za700za7za7_2375za7, "else", 4);
	      DEFINE_STRING(BGl_string2328z00zz__rgc_compilez00,
		BgL_bgl_string2328za700za7za7_2376za7, "case", 4);
	      DEFINE_STRING(BGl_string2331z00zz__rgc_compilez00,
		BgL_bgl_string2331za700za7za7_2377za7, "+fx", 3);
	      DEFINE_STRING(BGl_string2333z00zz__rgc_compilez00,
		BgL_bgl_string2333za700za7za7_2378za7, "cond", 4);
	      DEFINE_STRING(BGl_string2335z00zz__rgc_compilez00,
		BgL_bgl_string2335za700za7za7_2379za7, "not", 3);
	      DEFINE_STRING(BGl_string2337z00zz__rgc_compilez00,
		BgL_bgl_string2337za700za7za7_2380za7, "or", 2);
	      DEFINE_STRING(BGl_string2339z00zz__rgc_compilez00,
		BgL_bgl_string2339za700za7za7_2381za7, ">=fx", 4);
	      DEFINE_STRING(BGl_string2341z00zz__rgc_compilez00,
		BgL_bgl_string2341za700za7za7_2382za7, "<fx", 3);
	      DEFINE_STRING(BGl_string2343z00zz__rgc_compilez00,
		BgL_bgl_string2343za700za7za7_2383za7, "and", 3);
	      DEFINE_STRING(BGl_string2345z00zz__rgc_compilez00,
		BgL_bgl_string2345za700za7za7_2384za7, "rgc-stop-match!", 15);
	      DEFINE_STRING(BGl_string2347z00zz__rgc_compilez00,
		BgL_bgl_string2347za700za7za7_2385za7, "begin", 5);
	      DEFINE_STRING(BGl_string2349z00zz__rgc_compilez00,
		BgL_bgl_string2349za700za7za7_2386za7, "<=fx", 4);
	      DEFINE_STRING(BGl_string2351z00zz__rgc_compilez00,
		BgL_bgl_string2351za700za7za7_2387za7, "quote", 5);
	      DEFINE_STRING(BGl_string2353z00zz__rgc_compilez00,
		BgL_bgl_string2353za700za7za7_2388za7, "memq", 4);
	      DEFINE_STRING(BGl_string2355z00zz__rgc_compilez00,
		BgL_bgl_string2355za700za7za7_2389za7, "rgc-submatch-start*2!", 21);
	      DEFINE_STRING(BGl_string2357z00zz__rgc_compilez00,
		BgL_bgl_string2357za700za7za7_2390za7, "rgc-submatch-start2!", 20);
	      DEFINE_STRING(BGl_string2359z00zz__rgc_compilez00,
		BgL_bgl_string2359za700za7za7_2391za7, "rgc-submatch-stop2!", 19);
	      DEFINE_STRING(BGl_string2360z00zz__rgc_compilez00,
		BgL_bgl_string2360za700za7za7_2392za7, "compile-submatches", 18);
	      DEFINE_STRING(BGl_string2361z00zz__rgc_compilez00,
		BgL_bgl_string2361za700za7za7_2393za7, "Illegal char description", 24);
	      DEFINE_STRING(BGl_string2362z00zz__rgc_compilez00,
		BgL_bgl_string2362za700za7za7_2394za7, "__rgc_compile", 13);
	      DEFINE_STRING(BGl_string2292z00zz__rgc_compilez00,
		BgL_bgl_string2292za700za7za7_2395za7, "bufpos", 6);
	      DEFINE_STRING(BGl_string2294z00zz__rgc_compilez00,
		BgL_bgl_string2294za700za7za7_2396za7, "forward", 7);
	      DEFINE_STRING(BGl_string2296z00zz__rgc_compilez00,
		BgL_bgl_string2296za700za7za7_2397za7, "last-match", 10);
	      DEFINE_STRING(BGl_string2298z00zz__rgc_compilez00,
		BgL_bgl_string2298za700za7za7_2398za7, "iport", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_compilezd2dfazd2envz00zz__rgc_compilez00,
		BgL_bgl_za762compileza7d2dfa2399z00,
		BGl_z62compilezd2dfazb0zz__rgc_compilez00, 0L, BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_list2309z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_list2312z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_list2329z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2301z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2303z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2305z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2307z00zz__rgc_compilez00));
		   
			 ADD_ROOT((void *) (&BGl_compilezd2memberzd2vectorz00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2310z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2313z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2315z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2317z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2319z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2321z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2323z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2325z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2327z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2330z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2332z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2334z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2336z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2338z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2340z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2342z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2344z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2346z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2348z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2350z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2352z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2354z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2356z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2358z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2291z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2293z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2295z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2297z00zz__rgc_compilez00));
		     ADD_ROOT((void *) (&BGl_symbol2299z00zz__rgc_compilez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__rgc_compilez00(long
		BgL_checksumz00_3251, char *BgL_fromz00_3252)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__rgc_compilez00))
				{
					BGl_requirezd2initializa7ationz75zz__rgc_compilez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__rgc_compilez00();
					BGl_cnstzd2initzd2zz__rgc_compilez00();
					BGl_importedzd2moduleszd2initz00zz__rgc_compilez00();
					return BGl_toplevelzd2initzd2zz__rgc_compilez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__rgc_compilez00()
	{
		{	/* Rgc/rgccompile.scm 15 */
			BGl_symbol2291z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2292z00zz__rgc_compilez00);
			BGl_symbol2293z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2294z00zz__rgc_compilez00);
			BGl_symbol2295z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2296z00zz__rgc_compilez00);
			BGl_symbol2297z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2298z00zz__rgc_compilez00);
			BGl_symbol2299z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2300z00zz__rgc_compilez00);
			BGl_symbol2301z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2302z00zz__rgc_compilez00);
			BGl_symbol2303z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2304z00zz__rgc_compilez00);
			BGl_symbol2305z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2306z00zz__rgc_compilez00);
			BGl_symbol2307z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2308z00zz__rgc_compilez00);
			BGl_symbol2310z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2311z00zz__rgc_compilez00);
			BGl_list2309z00zz__rgc_compilez00 =
				MAKE_YOUNG_PAIR(BGl_symbol2310z00zz__rgc_compilez00,
				MAKE_YOUNG_PAIR(BGl_symbol2297z00zz__rgc_compilez00, BNIL));
			BGl_symbol2313z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2314z00zz__rgc_compilez00);
			BGl_list2312z00zz__rgc_compilez00 =
				MAKE_YOUNG_PAIR(BGl_symbol2313z00zz__rgc_compilez00,
				MAKE_YOUNG_PAIR(BGl_symbol2297z00zz__rgc_compilez00, BNIL));
			BGl_symbol2315z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2316z00zz__rgc_compilez00);
			BGl_symbol2317z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2318z00zz__rgc_compilez00);
			BGl_symbol2319z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2320z00zz__rgc_compilez00);
			BGl_symbol2321z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2322z00zz__rgc_compilez00);
			BGl_symbol2323z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2324z00zz__rgc_compilez00);
			BGl_symbol2325z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2326z00zz__rgc_compilez00);
			BGl_symbol2327z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2328z00zz__rgc_compilez00);
			BGl_symbol2330z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2331z00zz__rgc_compilez00);
			BGl_list2329z00zz__rgc_compilez00 =
				MAKE_YOUNG_PAIR(BGl_symbol2330z00zz__rgc_compilez00,
				MAKE_YOUNG_PAIR(BINT(((long) 1)),
					MAKE_YOUNG_PAIR(BGl_symbol2293z00zz__rgc_compilez00, BNIL)));
			BGl_symbol2332z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2333z00zz__rgc_compilez00);
			BGl_symbol2334z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2335z00zz__rgc_compilez00);
			BGl_symbol2336z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2337z00zz__rgc_compilez00);
			BGl_symbol2338z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2339z00zz__rgc_compilez00);
			BGl_symbol2340z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2341z00zz__rgc_compilez00);
			BGl_symbol2342z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2343z00zz__rgc_compilez00);
			BGl_symbol2344z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2345z00zz__rgc_compilez00);
			BGl_symbol2346z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2347z00zz__rgc_compilez00);
			BGl_symbol2348z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2349z00zz__rgc_compilez00);
			BGl_symbol2350z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2351z00zz__rgc_compilez00);
			BGl_symbol2352z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2353z00zz__rgc_compilez00);
			BGl_symbol2354z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2355z00zz__rgc_compilez00);
			BGl_symbol2356z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2357z00zz__rgc_compilez00);
			return (BGl_symbol2358z00zz__rgc_compilez00 =
				bstring_to_symbol(BGl_string2359z00zz__rgc_compilez00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__rgc_compilez00()
	{
		{	/* Rgc/rgccompile.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__rgc_compilez00()
	{
		{	/* Rgc/rgccompile.scm 15 */
			if (CBOOL(BGl_za2rgczd2optimza2zd2zz__rgc_configz00))
				{	/* Rgc/rgccompile.scm 77 */
					BGl_za2casezd2thresholdza2zd2zz__rgc_compilez00 =
						(((long) 80) / ((long) 2));
				}
			else
				{	/* Rgc/rgccompile.scm 77 */
					BGl_za2casezd2thresholdza2zd2zz__rgc_compilez00 = ((long) 80);
				}
			return (BGl_compilezd2memberzd2vectorz00zz__rgc_compilez00 =
				BUNSPEC, BUNSPEC);
		}

	}



/* compile-dfa */
	BGL_EXPORTED_DEF obj_t BGl_compilezd2dfazd2zz__rgc_compilez00(obj_t
		BgL_submatchesz00_3, obj_t BgL_statesz00_4, obj_t BgL_positionsz00_5)
	{
		{	/* Rgc/rgccompile.scm 59 */
			BGl_initzd2compilezd2memberzd2vectorz12zc0zz__rgc_compilez00();
			{	/* Rgc/rgccompile.scm 61 */
				obj_t BgL_resz00_1167;

				if (NULLP(BgL_statesz00_4))
					{	/* Rgc/rgccompile.scm 61 */
						BgL_resz00_1167 = BNIL;
					}
				else
					{	/* Rgc/rgccompile.scm 61 */
						obj_t BgL_head1098z00_1170;

						{	/* Rgc/rgccompile.scm 61 */
							obj_t BgL_res2094z00_2289;

							BgL_res2094z00_2289 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							BgL_head1098z00_1170 = BgL_res2094z00_2289;
						}
						{
							obj_t BgL_l1096z00_2313;
							obj_t BgL_tail1099z00_2314;

							BgL_l1096z00_2313 = BgL_statesz00_4;
							BgL_tail1099z00_2314 = BgL_head1098z00_1170;
						BgL_zc3z04anonymousza31245ze3z87_2312:
							if (NULLP(BgL_l1096z00_2313))
								{	/* Rgc/rgccompile.scm 61 */
									BgL_resz00_1167 = CDR(BgL_head1098z00_1170);
								}
							else
								{	/* Rgc/rgccompile.scm 61 */
									obj_t BgL_newtail1100z00_2321;

									{	/* Rgc/rgccompile.scm 61 */
										obj_t BgL_arg1250z00_2322;

										{	/* Rgc/rgccompile.scm 61 */
											obj_t BgL_statez00_2323;

											BgL_statez00_2323 = CAR(((obj_t) BgL_l1096z00_2313));
											BgL_arg1250z00_2322 =
												BGl_compilezd2statezd2zz__rgc_compilez00
												(BgL_submatchesz00_3, BgL_statez00_2323,
												BgL_positionsz00_5);
										}
										{	/* Rgc/rgccompile.scm 61 */
											obj_t BgL_res2100z00_2328;

											BgL_res2100z00_2328 =
												MAKE_YOUNG_PAIR(BgL_arg1250z00_2322, BNIL);
											BgL_newtail1100z00_2321 = BgL_res2100z00_2328;
										}
									}
									SET_CDR(BgL_tail1099z00_2314, BgL_newtail1100z00_2321);
									{	/* Rgc/rgccompile.scm 61 */
										obj_t BgL_arg1247z00_2324;

										BgL_arg1247z00_2324 = CDR(((obj_t) BgL_l1096z00_2313));
										{
											obj_t BgL_tail1099z00_3320;
											obj_t BgL_l1096z00_3319;

											BgL_l1096z00_3319 = BgL_arg1247z00_2324;
											BgL_tail1099z00_3320 = BgL_newtail1100z00_2321;
											BgL_tail1099z00_2314 = BgL_tail1099z00_3320;
											BgL_l1096z00_2313 = BgL_l1096z00_3319;
											goto BgL_zc3z04anonymousza31245ze3z87_2312;
										}
									}
								}
						}
					}
				BGl_compilezd2memberzd2vectorz00zz__rgc_compilez00 = BUNSPEC;
				return BgL_resz00_1167;
			}
		}

	}



/* &compile-dfa */
	obj_t BGl_z62compilezd2dfazb0zz__rgc_compilez00(obj_t BgL_envz00_3147,
		obj_t BgL_submatchesz00_3148, obj_t BgL_statesz00_3149,
		obj_t BgL_positionsz00_3150)
	{
		{	/* Rgc/rgccompile.scm 59 */
			return
				BGl_compilezd2dfazd2zz__rgc_compilez00(BgL_submatchesz00_3148,
				BgL_statesz00_3149, BgL_positionsz00_3150);
		}

	}



/* compile-state */
	obj_t BGl_compilezd2statezd2zz__rgc_compilez00(obj_t BgL_submatchesz00_6,
		obj_t BgL_statez00_7, obj_t BgL_positionszd2tozd2charz00_8)
	{
		{	/* Rgc/rgccompile.scm 93 */
			{	/* Rgc/rgccompile.scm 97 */
				obj_t BgL_arg1252z00_1181;

				{	/* Rgc/rgccompile.scm 97 */
					obj_t BgL_arg1253z00_1182;
					obj_t BgL_arg1254z00_1183;

					{	/* Rgc/rgccompile.scm 97 */
						obj_t BgL_arg1256z00_1184;
						obj_t BgL_arg1258z00_1185;

						BgL_arg1256z00_1184 =
							BGl_statezd2namezd2zz__rgc_dfaz00(BgL_statez00_7);
						{	/* Rgc/rgccompile.scm 97 */
							obj_t BgL_arg1263z00_1186;

							{	/* Rgc/rgccompile.scm 97 */
								obj_t BgL_arg1268z00_1187;

								{	/* Rgc/rgccompile.scm 97 */
									obj_t BgL_arg1270z00_1188;

									BgL_arg1270z00_1188 =
										MAKE_YOUNG_PAIR(BGl_symbol2291z00zz__rgc_compilez00, BNIL);
									BgL_arg1268z00_1187 =
										MAKE_YOUNG_PAIR(BGl_symbol2293z00zz__rgc_compilez00,
										BgL_arg1270z00_1188);
								}
								BgL_arg1263z00_1186 =
									MAKE_YOUNG_PAIR(BGl_symbol2295z00zz__rgc_compilez00,
									BgL_arg1268z00_1187);
							}
							BgL_arg1258z00_1185 =
								MAKE_YOUNG_PAIR(BGl_symbol2297z00zz__rgc_compilez00,
								BgL_arg1263z00_1186);
						}
						BgL_arg1253z00_1182 =
							MAKE_YOUNG_PAIR(BgL_arg1256z00_1184, BgL_arg1258z00_1185);
					}
					{	/* Rgc/rgccompile.scm 98 */
						obj_t BgL_arg1271z00_1189;

						{	/* Rgc/rgccompile.scm 98 */
							obj_t BgL_transitionsz00_1190;
							obj_t BgL_positionsz00_1191;

							BgL_transitionsz00_1190 =
								BGl_statezd2transitionszd2zz__rgc_dfaz00(BgL_statez00_7);
							BgL_positionsz00_1191 =
								BGl_statezd2positionszd2zz__rgc_dfaz00(BgL_statez00_7);
							if (NULLP(BgL_transitionsz00_1190))
								{	/* Rgc/rgccompile.scm 100 */
									BgL_arg1271z00_1189 = BGl_symbol2295z00zz__rgc_compilez00;
								}
							else
								{	/* Rgc/rgccompile.scm 102 */
									obj_t BgL_specialzd2transzd2_1193;

									BgL_specialzd2transzd2_1193 =
										BGl_splitzd2transitionszd2zz__rgc_compilez00
										(BgL_transitionsz00_1190);
									{	/* Rgc/rgccompile.scm 103 */
										obj_t BgL_regularzd2transzd2_1194;

										{	/* Rgc/rgccompile.scm 104 */
											int BgL_tmpz00_3333;

											BgL_tmpz00_3333 = (int) (((long) 1));
											BgL_regularzd2transzd2_1194 =
												BGL_MVALUES_VAL(BgL_tmpz00_3333);
										}
										{	/* Rgc/rgccompile.scm 104 */
											obj_t BgL_matchzd2bodyzd2_1195;

											BgL_matchzd2bodyzd2_1195 =
												BGl_compilezd2matchzd2zz__rgc_compilez00
												(BgL_specialzd2transzd2_1193);
											if (CBOOL(BgL_matchzd2bodyzd2_1195))
												{	/* Rgc/rgccompile.scm 106 */
													obj_t BgL_arg1273z00_1196;

													{	/* Rgc/rgccompile.scm 106 */
														obj_t BgL_arg1274z00_1197;
														obj_t BgL_arg1275z00_1198;

														{	/* Rgc/rgccompile.scm 106 */
															obj_t BgL_arg1276z00_1199;

															{	/* Rgc/rgccompile.scm 106 */
																obj_t BgL_arg1277z00_1200;

																BgL_arg1277z00_1200 =
																	MAKE_YOUNG_PAIR(BgL_matchzd2bodyzd2_1195,
																	BNIL);
																BgL_arg1276z00_1199 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2299z00zz__rgc_compilez00,
																	BgL_arg1277z00_1200);
															}
															BgL_arg1274z00_1197 =
																MAKE_YOUNG_PAIR(BgL_arg1276z00_1199, BNIL);
														}
														BgL_arg1275z00_1198 =
															MAKE_YOUNG_PAIR
															(BGl_compilezd2regularzd2zz__rgc_compilez00
															(BgL_submatchesz00_6, BgL_statez00_7,
																BgL_regularzd2transzd2_1194,
																BGl_symbol2299z00zz__rgc_compilez00,
																BgL_positionszd2tozd2charz00_8), BNIL);
														BgL_arg1273z00_1196 =
															MAKE_YOUNG_PAIR(BgL_arg1274z00_1197,
															BgL_arg1275z00_1198);
													}
													BgL_arg1271z00_1189 =
														MAKE_YOUNG_PAIR(BGl_symbol2301z00zz__rgc_compilez00,
														BgL_arg1273z00_1196);
												}
											else
												{	/* Rgc/rgccompile.scm 105 */
													BgL_arg1271z00_1189 =
														BGl_compilezd2regularzd2zz__rgc_compilez00
														(BgL_submatchesz00_6, BgL_statez00_7,
														BgL_regularzd2transzd2_1194,
														BGl_symbol2295z00zz__rgc_compilez00,
														BgL_positionszd2tozd2charz00_8);
												}
										}
									}
								}
						}
						BgL_arg1254z00_1183 = MAKE_YOUNG_PAIR(BgL_arg1271z00_1189, BNIL);
					}
					BgL_arg1252z00_1181 =
						MAKE_YOUNG_PAIR(BgL_arg1253z00_1182, BgL_arg1254z00_1183);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2303z00zz__rgc_compilez00,
					BgL_arg1252z00_1181);
			}
		}

	}



/* split-transitions */
	obj_t BGl_splitzd2transitionszd2zz__rgc_compilez00(obj_t BgL_transitionsz00_9)
	{
		{	/* Rgc/rgccompile.scm 120 */
			{
				obj_t BgL_transitionsz00_1205;
				obj_t BgL_specialsz00_1206;
				obj_t BgL_regularsz00_1207;

				BgL_transitionsz00_1205 = BgL_transitionsz00_9;
				BgL_specialsz00_1206 = BNIL;
				BgL_regularsz00_1207 = BNIL;
			BgL_zc3z04anonymousza31281ze3z87_1208:
				if (NULLP(BgL_transitionsz00_1205))
					{	/* Rgc/rgccompile.scm 125 */
						{	/* Rgc/rgccompile.scm 126 */
							int BgL_res2103z00_2333;

							{	/* Rgc/rgccompile.scm 126 */
								int BgL_tmpz00_3352;

								BgL_tmpz00_3352 = (int) (((long) 2));
								BgL_res2103z00_2333 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3352);
							} BgL_res2103z00_2333;
						}
						{	/* Rgc/rgccompile.scm 126 */
							int BgL_tmpz00_3355;

							BgL_tmpz00_3355 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_3355, BgL_regularsz00_1207);
						}
						return BgL_specialsz00_1206;
					}
				else
					{	/* Rgc/rgccompile.scm 127 */
						bool_t BgL_test2407z00_3358;

						{	/* Rgc/rgccompile.scm 127 */
							obj_t BgL_arg1295z00_1221;

							{	/* Rgc/rgccompile.scm 127 */
								obj_t BgL_pairz00_2335;

								BgL_pairz00_2335 = CAR(((obj_t) BgL_transitionsz00_1205));
								BgL_arg1295z00_1221 = CAR(BgL_pairz00_2335);
							}
							BgL_test2407z00_3358 =
								BGl_specialzd2charzf3z21zz__rgc_rulesz00(CINT
								(BgL_arg1295z00_1221));
						}
						if (BgL_test2407z00_3358)
							{	/* Rgc/rgccompile.scm 128 */
								obj_t BgL_arg1287z00_1215;
								obj_t BgL_arg1288z00_1216;

								BgL_arg1287z00_1215 = CDR(((obj_t) BgL_transitionsz00_1205));
								{	/* Rgc/rgccompile.scm 129 */
									obj_t BgL_arg1289z00_1217;

									BgL_arg1289z00_1217 = CAR(((obj_t) BgL_transitionsz00_1205));
									BgL_arg1288z00_1216 =
										MAKE_YOUNG_PAIR(BgL_arg1289z00_1217, BgL_specialsz00_1206);
								}
								{
									obj_t BgL_specialsz00_3370;
									obj_t BgL_transitionsz00_3369;

									BgL_transitionsz00_3369 = BgL_arg1287z00_1215;
									BgL_specialsz00_3370 = BgL_arg1288z00_1216;
									BgL_specialsz00_1206 = BgL_specialsz00_3370;
									BgL_transitionsz00_1205 = BgL_transitionsz00_3369;
									goto BgL_zc3z04anonymousza31281ze3z87_1208;
								}
							}
						else
							{	/* Rgc/rgccompile.scm 132 */
								obj_t BgL_arg1290z00_1218;
								obj_t BgL_arg1291z00_1219;

								BgL_arg1290z00_1218 = CDR(((obj_t) BgL_transitionsz00_1205));
								{	/* Rgc/rgccompile.scm 134 */
									obj_t BgL_arg1292z00_1220;

									BgL_arg1292z00_1220 = CAR(((obj_t) BgL_transitionsz00_1205));
									BgL_arg1291z00_1219 =
										MAKE_YOUNG_PAIR(BgL_arg1292z00_1220, BgL_regularsz00_1207);
								}
								{
									obj_t BgL_regularsz00_3377;
									obj_t BgL_transitionsz00_3376;

									BgL_transitionsz00_3376 = BgL_arg1290z00_1218;
									BgL_regularsz00_3377 = BgL_arg1291z00_1219;
									BgL_regularsz00_1207 = BgL_regularsz00_3377;
									BgL_transitionsz00_1205 = BgL_transitionsz00_3376;
									goto BgL_zc3z04anonymousza31281ze3z87_1208;
								}
							}
					}
			}
		}

	}



/* compile-regular */
	obj_t BGl_compilezd2regularzd2zz__rgc_compilez00(obj_t BgL_submatchesz00_10,
		obj_t BgL_currentzd2statezd2_11, obj_t BgL_transitionsz00_12,
		obj_t BgL_lastzd2matchzd2_13, obj_t BgL_pzd2ze3cz31_14)
	{
		{	/* Rgc/rgccompile.scm 139 */
			{	/* Rgc/rgccompile.scm 142 */
				obj_t BgL_statezd2transzd2_1224;
				obj_t BgL_positionsz00_1225;

				BgL_statezd2transzd2_1224 =
					BGl_statezd2transitionzd2listz00zz__rgc_compilez00
					(BgL_transitionsz00_12);
				BgL_positionsz00_1225 =
					BGl_statezd2positionszd2zz__rgc_dfaz00(BgL_currentzd2statezd2_11);
				if (NULLP(BgL_statezd2transzd2_1224))
					{	/* Rgc/rgccompile.scm 144 */
						return BgL_lastzd2matchzd2_13;
					}
				else
					{	/* Rgc/rgccompile.scm 146 */
						obj_t BgL_arg1298z00_1227;

						{	/* Rgc/rgccompile.scm 146 */
							obj_t BgL_arg1299z00_1228;
							obj_t BgL_arg1300z00_1229;

							{	/* Rgc/rgccompile.scm 146 */
								obj_t BgL_arg1301z00_1230;

								{	/* Rgc/rgccompile.scm 146 */
									obj_t BgL_arg1302z00_1231;

									BgL_arg1302z00_1231 =
										MAKE_YOUNG_PAIR(BGl_symbol2291z00zz__rgc_compilez00, BNIL);
									BgL_arg1301z00_1230 =
										MAKE_YOUNG_PAIR(BGl_symbol2293z00zz__rgc_compilez00,
										BgL_arg1302z00_1231);
								}
								BgL_arg1299z00_1228 =
									MAKE_YOUNG_PAIR(BGl_symbol2305z00zz__rgc_compilez00,
									BgL_arg1301z00_1230);
							}
							{	/* Rgc/rgccompile.scm 148 */
								obj_t BgL_arg1303z00_1232;
								obj_t BgL_arg1304z00_1233;

								{	/* Rgc/rgccompile.scm 148 */
									obj_t BgL_arg1306z00_1234;

									{	/* Rgc/rgccompile.scm 148 */
										obj_t BgL_arg1307z00_1235;
										obj_t BgL_arg1308z00_1236;

										{	/* Rgc/rgccompile.scm 148 */
											obj_t BgL_arg1309z00_1237;

											BgL_arg1309z00_1237 =
												MAKE_YOUNG_PAIR(BGl_symbol2297z00zz__rgc_compilez00,
												BNIL);
											BgL_arg1307z00_1235 =
												MAKE_YOUNG_PAIR(BGl_symbol2307z00zz__rgc_compilez00,
												BgL_arg1309z00_1237);
										}
										{	/* Rgc/rgccompile.scm 149 */
											obj_t BgL_arg1310z00_1238;
											obj_t BgL_arg1311z00_1239;

											{	/* Rgc/rgccompile.scm 149 */
												obj_t BgL_matchz00_2341;
												obj_t BgL_forwardz00_2342;
												obj_t BgL_bufposz00_2343;

												BgL_matchz00_2341 = BGl_symbol2295z00zz__rgc_compilez00;
												BgL_forwardz00_2342 = BGl_list2309z00zz__rgc_compilez00;
												BgL_bufposz00_2343 = BGl_list2312z00zz__rgc_compilez00;
												{	/* Rgc/rgccompile.scm 167 */
													obj_t BgL_arg1330z00_2344;
													obj_t BgL_arg1331z00_2345;

													BgL_arg1330z00_2344 =
														BGl_statezd2namezd2zz__rgc_dfaz00
														(BgL_currentzd2statezd2_11);
													{	/* Rgc/rgccompile.scm 167 */
														obj_t BgL_arg1333z00_2346;

														{	/* Rgc/rgccompile.scm 167 */
															obj_t BgL_arg1334z00_2347;

															{	/* Rgc/rgccompile.scm 167 */
																obj_t BgL_arg1335z00_2348;

																BgL_arg1335z00_2348 =
																	MAKE_YOUNG_PAIR(BgL_bufposz00_2343, BNIL);
																BgL_arg1334z00_2347 =
																	MAKE_YOUNG_PAIR(BgL_forwardz00_2342,
																	BgL_arg1335z00_2348);
															}
															BgL_arg1333z00_2346 =
																MAKE_YOUNG_PAIR(BgL_matchz00_2341,
																BgL_arg1334z00_2347);
														}
														BgL_arg1331z00_2345 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2297z00zz__rgc_compilez00,
															BgL_arg1333z00_2346);
													}
													BgL_arg1310z00_1238 =
														MAKE_YOUNG_PAIR(BgL_arg1330z00_2344,
														BgL_arg1331z00_2345);
												}
											}
											BgL_arg1311z00_1239 =
												MAKE_YOUNG_PAIR(BgL_lastzd2matchzd2_13, BNIL);
											BgL_arg1308z00_1236 =
												MAKE_YOUNG_PAIR(BgL_arg1310z00_1238,
												BgL_arg1311z00_1239);
										}
										BgL_arg1306z00_1234 =
											MAKE_YOUNG_PAIR(BgL_arg1307z00_1235, BgL_arg1308z00_1236);
									}
									BgL_arg1303z00_1232 =
										MAKE_YOUNG_PAIR(BGl_symbol2315z00zz__rgc_compilez00,
										BgL_arg1306z00_1234);
								}
								{	/* Rgc/rgccompile.scm 155 */
									obj_t BgL_arg1312z00_1240;

									{	/* Rgc/rgccompile.scm 155 */
										obj_t BgL_arg1313z00_1241;

										{	/* Rgc/rgccompile.scm 155 */
											obj_t BgL_arg1314z00_1242;
											obj_t BgL_arg1315z00_1243;

											{	/* Rgc/rgccompile.scm 155 */
												obj_t BgL_arg1316z00_1244;

												{	/* Rgc/rgccompile.scm 155 */
													obj_t BgL_arg1317z00_1245;

													{	/* Rgc/rgccompile.scm 155 */
														obj_t BgL_arg1318z00_1246;

														{	/* Rgc/rgccompile.scm 155 */
															obj_t BgL_arg1319z00_1247;

															{	/* Rgc/rgccompile.scm 155 */
																obj_t BgL_arg1322z00_1248;

																BgL_arg1322z00_1248 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2293z00zz__rgc_compilez00, BNIL);
																BgL_arg1319z00_1247 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol2297z00zz__rgc_compilez00,
																	BgL_arg1322z00_1248);
															}
															BgL_arg1318z00_1246 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2317z00zz__rgc_compilez00,
																BgL_arg1319z00_1247);
														}
														BgL_arg1317z00_1245 =
															MAKE_YOUNG_PAIR(BgL_arg1318z00_1246, BNIL);
													}
													BgL_arg1316z00_1244 =
														MAKE_YOUNG_PAIR(BGl_symbol2319z00zz__rgc_compilez00,
														BgL_arg1317z00_1245);
												}
												BgL_arg1314z00_1242 =
													MAKE_YOUNG_PAIR(BgL_arg1316z00_1244, BNIL);
											}
											{	/* Rgc/rgccompile.scm 156 */
												obj_t BgL_arg1324z00_1249;
												obj_t BgL_arg1325z00_1250;

												BgL_arg1324z00_1249 =
													BGl_compilezd2submatcheszd2zz__rgc_compilez00
													(BGl_symbol2321z00zz__rgc_compilez00,
													BgL_submatchesz00_10, BgL_positionsz00_1225,
													BgL_pzd2ze3cz31_14);
												{	/* Rgc/rgccompile.scm 157 */
													obj_t BgL_arg1326z00_1251;

													if (
														(bgl_list_length(BgL_statezd2transzd2_1224) <=
															((long) 12)))
														{	/* Rgc/rgccompile.scm 157 */
															BgL_arg1326z00_1251 =
																BGl_compilezd2condzd2regularz00zz__rgc_compilez00
																(BgL_currentzd2statezd2_11,
																BgL_statezd2transzd2_1224,
																BgL_lastzd2matchzd2_13);
														}
													else
														{	/* Rgc/rgccompile.scm 157 */
															BgL_arg1326z00_1251 =
																BGl_compilezd2casezd2regularz00zz__rgc_compilez00
																(BgL_currentzd2statezd2_11,
																BgL_statezd2transzd2_1224,
																BgL_lastzd2matchzd2_13);
														}
													BgL_arg1325z00_1250 =
														MAKE_YOUNG_PAIR(BgL_arg1326z00_1251, BNIL);
												}
												BgL_arg1315z00_1243 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1324z00_1249, BgL_arg1325z00_1250);
											}
											BgL_arg1313z00_1241 =
												MAKE_YOUNG_PAIR(BgL_arg1314z00_1242,
												BgL_arg1315z00_1243);
										}
										BgL_arg1312z00_1240 =
											MAKE_YOUNG_PAIR(BGl_symbol2323z00zz__rgc_compilez00,
											BgL_arg1313z00_1241);
									}
									BgL_arg1304z00_1233 =
										MAKE_YOUNG_PAIR(BgL_arg1312z00_1240, BNIL);
								}
								BgL_arg1300z00_1229 =
									MAKE_YOUNG_PAIR(BgL_arg1303z00_1232, BgL_arg1304z00_1233);
							}
							BgL_arg1298z00_1227 =
								MAKE_YOUNG_PAIR(BgL_arg1299z00_1228, BgL_arg1300z00_1229);
						}
						return
							MAKE_YOUNG_PAIR(BGl_symbol2315z00zz__rgc_compilez00,
							BgL_arg1298z00_1227);
					}
			}
		}

	}



/* compile-case-regular */
	obj_t BGl_compilezd2casezd2regularz00zz__rgc_compilez00(obj_t
		BgL_currentzd2statezd2_19, obj_t BgL_statezd2transzd2_20,
		obj_t BgL_matchz00_21)
	{
		{	/* Rgc/rgccompile.scm 172 */
			{	/* Rgc/rgccompile.scm 182 */
				obj_t BgL_arg1337z00_1261;

				{	/* Rgc/rgccompile.scm 182 */
					obj_t BgL_arg1338z00_1262;

					{	/* Rgc/rgccompile.scm 182 */
						obj_t BgL_arg1339z00_1263;
						obj_t BgL_arg1340z00_1264;

						if (NULLP(BgL_statezd2transzd2_20))
							{	/* Rgc/rgccompile.scm 182 */
								BgL_arg1339z00_1263 = BNIL;
							}
						else
							{	/* Rgc/rgccompile.scm 182 */
								obj_t BgL_head1105z00_1267;

								{	/* Rgc/rgccompile.scm 182 */
									obj_t BgL_arg1347z00_1279;

									BgL_arg1347z00_1279 =
										BGl_compilezd2casezd2transitionze70ze7zz__rgc_compilez00
										(BgL_matchz00_21, CAR(BgL_statezd2transzd2_20));
									{	/* Rgc/rgccompile.scm 182 */
										obj_t BgL_res2107z00_2367;

										BgL_res2107z00_2367 =
											MAKE_YOUNG_PAIR(BgL_arg1347z00_1279, BNIL);
										BgL_head1105z00_1267 = BgL_res2107z00_2367;
									}
								}
								{	/* Rgc/rgccompile.scm 182 */
									obj_t BgL_g1108z00_1268;

									BgL_g1108z00_1268 = CDR(BgL_statezd2transzd2_20);
									{
										obj_t BgL_l1103z00_2390;
										obj_t BgL_tail1106z00_2391;

										BgL_l1103z00_2390 = BgL_g1108z00_1268;
										BgL_tail1106z00_2391 = BgL_head1105z00_1267;
									BgL_zc3z04anonymousza31342ze3z87_2389:
										if (NULLP(BgL_l1103z00_2390))
											{	/* Rgc/rgccompile.scm 182 */
												BgL_arg1339z00_1263 = BgL_head1105z00_1267;
											}
										else
											{	/* Rgc/rgccompile.scm 182 */
												obj_t BgL_newtail1107z00_2398;

												{	/* Rgc/rgccompile.scm 182 */
													obj_t BgL_arg1345z00_2399;

													{	/* Rgc/rgccompile.scm 182 */
														obj_t BgL_arg1346z00_2400;

														BgL_arg1346z00_2400 =
															CAR(((obj_t) BgL_l1103z00_2390));
														BgL_arg1345z00_2399 =
															BGl_compilezd2casezd2transitionze70ze7zz__rgc_compilez00
															(BgL_matchz00_21, BgL_arg1346z00_2400);
													}
													{	/* Rgc/rgccompile.scm 182 */
														obj_t BgL_res2113z00_2404;

														BgL_res2113z00_2404 =
															MAKE_YOUNG_PAIR(BgL_arg1345z00_2399, BNIL);
														BgL_newtail1107z00_2398 = BgL_res2113z00_2404;
													}
												}
												SET_CDR(BgL_tail1106z00_2391, BgL_newtail1107z00_2398);
												{	/* Rgc/rgccompile.scm 182 */
													obj_t BgL_arg1344z00_2401;

													BgL_arg1344z00_2401 =
														CDR(((obj_t) BgL_l1103z00_2390));
													{
														obj_t BgL_tail1106z00_3433;
														obj_t BgL_l1103z00_3432;

														BgL_l1103z00_3432 = BgL_arg1344z00_2401;
														BgL_tail1106z00_3433 = BgL_newtail1107z00_2398;
														BgL_tail1106z00_2391 = BgL_tail1106z00_3433;
														BgL_l1103z00_2390 = BgL_l1103z00_3432;
														goto BgL_zc3z04anonymousza31342ze3z87_2389;
													}
												}
											}
									}
								}
							}
						{	/* Rgc/rgccompile.scm 183 */
							obj_t BgL_arg1350z00_1281;

							{	/* Rgc/rgccompile.scm 183 */
								obj_t BgL_arg1351z00_1282;

								BgL_arg1351z00_1282 = MAKE_YOUNG_PAIR(BgL_matchz00_21, BNIL);
								BgL_arg1350z00_1281 =
									MAKE_YOUNG_PAIR(BGl_symbol2325z00zz__rgc_compilez00,
									BgL_arg1351z00_1282);
							}
							BgL_arg1340z00_1264 = MAKE_YOUNG_PAIR(BgL_arg1350z00_1281, BNIL);
						}
						BgL_arg1338z00_1262 =
							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
							(BgL_arg1339z00_1263, BgL_arg1340z00_1264);
					}
					BgL_arg1337z00_1261 =
						MAKE_YOUNG_PAIR(BGl_symbol2321z00zz__rgc_compilez00,
						BgL_arg1338z00_1262);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2327z00zz__rgc_compilez00,
					BgL_arg1337z00_1261);
			}
		}

	}



/* compile-case-transition~0 */
	obj_t BGl_compilezd2casezd2transitionze70ze7zz__rgc_compilez00(obj_t
		BgL_matchz00_3157, obj_t BgL_statezd2transzd2_1283)
	{
		{	/* Rgc/rgccompile.scm 179 */
			{	/* Rgc/rgccompile.scm 175 */
				obj_t BgL_setz00_1285;
				obj_t BgL_statez00_1286;

				BgL_setz00_1285 = CDR(((obj_t) BgL_statezd2transzd2_1283));
				BgL_statez00_1286 = CAR(((obj_t) BgL_statezd2transzd2_1283));
				{	/* Rgc/rgccompile.scm 177 */
					obj_t BgL_casezd2testzd2_1287;

					BgL_casezd2testzd2_1287 =
						BGl_rgcsetzd2ze3listz31zz__rgc_setz00(BgL_setz00_1285);
					{	/* Rgc/rgccompile.scm 178 */
						obj_t BgL_arg1353z00_1288;

						{	/* Rgc/rgccompile.scm 178 */
							obj_t BgL_arg1354z00_1289;

							{	/* Rgc/rgccompile.scm 178 */
								obj_t BgL_forwardz00_2358;
								obj_t BgL_bufposz00_2359;

								BgL_forwardz00_2358 = BGl_list2329z00zz__rgc_compilez00;
								BgL_bufposz00_2359 = BGl_symbol2291z00zz__rgc_compilez00;
								{	/* Rgc/rgccompile.scm 167 */
									obj_t BgL_arg1330z00_2360;
									obj_t BgL_arg1331z00_2361;

									BgL_arg1330z00_2360 =
										BGl_statezd2namezd2zz__rgc_dfaz00(BgL_statez00_1286);
									{	/* Rgc/rgccompile.scm 167 */
										obj_t BgL_arg1333z00_2362;

										{	/* Rgc/rgccompile.scm 167 */
											obj_t BgL_arg1334z00_2363;

											{	/* Rgc/rgccompile.scm 167 */
												obj_t BgL_arg1335z00_2364;

												BgL_arg1335z00_2364 =
													MAKE_YOUNG_PAIR(BgL_bufposz00_2359, BNIL);
												BgL_arg1334z00_2363 =
													MAKE_YOUNG_PAIR(BgL_forwardz00_2358,
													BgL_arg1335z00_2364);
											}
											BgL_arg1333z00_2362 =
												MAKE_YOUNG_PAIR(BgL_matchz00_3157, BgL_arg1334z00_2363);
										}
										BgL_arg1331z00_2361 =
											MAKE_YOUNG_PAIR(BGl_symbol2297z00zz__rgc_compilez00,
											BgL_arg1333z00_2362);
									}
									BgL_arg1354z00_1289 =
										MAKE_YOUNG_PAIR(BgL_arg1330z00_2360, BgL_arg1331z00_2361);
								}
							}
							BgL_arg1353z00_1288 = MAKE_YOUNG_PAIR(BgL_arg1354z00_1289, BNIL);
						}
						return
							MAKE_YOUNG_PAIR(BgL_casezd2testzd2_1287, BgL_arg1353z00_1288);
					}
				}
			}
		}

	}



/* compile-cond-regular */
	obj_t BGl_compilezd2condzd2regularz00zz__rgc_compilez00(obj_t
		BgL_currentzd2statezd2_22, obj_t BgL_statezd2transzd2_23,
		obj_t BgL_matchz00_24)
	{
		{	/* Rgc/rgccompile.scm 189 */
			{
				obj_t BgL_statezd2transzd2_1324;
				long BgL_prevzd2testzd2lenz00_1325;

				{
					obj_t BgL_transz00_1294;
					obj_t BgL_testsz00_1295;
					long BgL_costz00_1296;
					long BgL_prevzd2lenzd2_1297;
					bool_t BgL_elsepz00_1298;

					BgL_transz00_1294 = BgL_statezd2transzd2_23;
					BgL_testsz00_1295 = BNIL;
					BgL_costz00_1296 = ((long) 0);
					BgL_prevzd2lenzd2_1297 = ((long) 0);
					BgL_elsepz00_1298 = ((bool_t) 0);
				BgL_zc3z04anonymousza31355ze3z87_1299:
					{	/* Rgc/rgccompile.scm 206 */
						bool_t BgL_test2412z00_3453;

						if (NULLP(BgL_transz00_1294))
							{	/* Rgc/rgccompile.scm 206 */
								BgL_test2412z00_3453 = ((bool_t) 1);
							}
						else
							{	/* Rgc/rgccompile.scm 206 */
								BgL_test2412z00_3453 = BgL_elsepz00_1298;
							}
						if (BgL_test2412z00_3453)
							{	/* Rgc/rgccompile.scm 206 */
								if (
									(BgL_costz00_1296 >
										BGl_za2casezd2thresholdza2zd2zz__rgc_compilez00))
									{	/* Rgc/rgccompile.scm 208 */
										return
											BGl_compilezd2casezd2regularz00zz__rgc_compilez00
											(BgL_currentzd2statezd2_22, BgL_statezd2transzd2_23,
											BgL_matchz00_24);
									}
								else
									{	/* Rgc/rgccompile.scm 211 */
										obj_t BgL_arg1359z00_1303;

										{	/* Rgc/rgccompile.scm 211 */
											obj_t BgL_arg1360z00_1304;
											obj_t BgL_arg1361z00_1305;

											BgL_arg1360z00_1304 = bgl_reverse_bang(BgL_testsz00_1295);
											{	/* Rgc/rgccompile.scm 212 */
												obj_t BgL_arg1362z00_1306;

												if (BgL_elsepz00_1298)
													{	/* Rgc/rgccompile.scm 212 */
														BgL_arg1362z00_1306 = BNIL;
													}
												else
													{	/* Rgc/rgccompile.scm 214 */
														obj_t BgL_arg1363z00_1307;

														{	/* Rgc/rgccompile.scm 214 */
															obj_t BgL_arg1364z00_1308;

															BgL_arg1364z00_1308 =
																MAKE_YOUNG_PAIR(BgL_matchz00_24, BNIL);
															BgL_arg1363z00_1307 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2325z00zz__rgc_compilez00,
																BgL_arg1364z00_1308);
														}
														BgL_arg1362z00_1306 =
															MAKE_YOUNG_PAIR(BgL_arg1363z00_1307, BNIL);
													}
												BgL_arg1361z00_1305 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1362z00_1306, BNIL);
											}
											BgL_arg1359z00_1303 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg1360z00_1304, BgL_arg1361z00_1305);
										}
										return
											MAKE_YOUNG_PAIR(BGl_symbol2332z00zz__rgc_compilez00,
											BgL_arg1359z00_1303);
									}
							}
						else
							{	/* Rgc/rgccompile.scm 215 */
								obj_t BgL_testz00_1309;

								{	/* Rgc/rgccompile.scm 216 */
									obj_t BgL_arg1376z00_1321;

									BgL_arg1376z00_1321 = CAR(((obj_t) BgL_transz00_1294));
									BgL_statezd2transzd2_1324 = BgL_arg1376z00_1321;
									BgL_prevzd2testzd2lenz00_1325 = BgL_prevzd2lenzd2_1297;
									{	/* Rgc/rgccompile.scm 192 */
										obj_t BgL_setz00_1327;
										obj_t BgL_statez00_1328;

										BgL_setz00_1327 = CDR(((obj_t) BgL_statezd2transzd2_1324));
										BgL_statez00_1328 =
											CAR(((obj_t) BgL_statezd2transzd2_1324));
										{	/* Rgc/rgccompile.scm 194 */
											obj_t BgL_condzd2testzd2_1329;

											BgL_condzd2testzd2_1329 =
												BGl_compilezd2condzd2testz00zz__rgc_compilez00
												(BgL_setz00_1327, BGl_symbol2321z00zz__rgc_compilez00,
												BgL_prevzd2testzd2lenz00_1325);
											{	/* Rgc/rgccompile.scm 195 */
												obj_t BgL_condzd2costzd2_1330;

												{	/* Rgc/rgccompile.scm 196 */
													int BgL_tmpz00_3474;

													BgL_tmpz00_3474 = (int) (((long) 1));
													BgL_condzd2costzd2_1330 =
														BGL_MVALUES_VAL(BgL_tmpz00_3474);
												}
												{	/* Rgc/rgccompile.scm 196 */
													obj_t BgL_val0_1109z00_1331;

													{	/* Rgc/rgccompile.scm 197 */
														obj_t BgL_arg1378z00_1333;

														{	/* Rgc/rgccompile.scm 197 */
															obj_t BgL_arg1379z00_1334;

															{	/* Rgc/rgccompile.scm 197 */
																obj_t BgL_forwardz00_2409;
																obj_t BgL_bufposz00_2410;

																BgL_forwardz00_2409 =
																	BGl_list2329z00zz__rgc_compilez00;
																BgL_bufposz00_2410 =
																	BGl_symbol2291z00zz__rgc_compilez00;
																{	/* Rgc/rgccompile.scm 167 */
																	obj_t BgL_arg1330z00_2411;
																	obj_t BgL_arg1331z00_2412;

																	BgL_arg1330z00_2411 =
																		BGl_statezd2namezd2zz__rgc_dfaz00
																		(BgL_statez00_1328);
																	{	/* Rgc/rgccompile.scm 167 */
																		obj_t BgL_arg1333z00_2413;

																		{	/* Rgc/rgccompile.scm 167 */
																			obj_t BgL_arg1334z00_2414;

																			{	/* Rgc/rgccompile.scm 167 */
																				obj_t BgL_arg1335z00_2415;

																				BgL_arg1335z00_2415 =
																					MAKE_YOUNG_PAIR(BgL_bufposz00_2410,
																					BNIL);
																				BgL_arg1334z00_2414 =
																					MAKE_YOUNG_PAIR(BgL_forwardz00_2409,
																					BgL_arg1335z00_2415);
																			}
																			BgL_arg1333z00_2413 =
																				MAKE_YOUNG_PAIR(BgL_matchz00_24,
																				BgL_arg1334z00_2414);
																		}
																		BgL_arg1331z00_2412 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol2297z00zz__rgc_compilez00,
																			BgL_arg1333z00_2413);
																	}
																	BgL_arg1379z00_1334 =
																		MAKE_YOUNG_PAIR(BgL_arg1330z00_2411,
																		BgL_arg1331z00_2412);
															}}
															BgL_arg1378z00_1333 =
																MAKE_YOUNG_PAIR(BgL_arg1379z00_1334, BNIL);
														}
														BgL_val0_1109z00_1331 =
															MAKE_YOUNG_PAIR(BgL_condzd2testzd2_1329,
															BgL_arg1378z00_1333);
													}
													{	/* Rgc/rgccompile.scm 196 */
														int BgL_res2114z00_2416;

														{	/* Rgc/rgccompile.scm 196 */
															int BgL_tmpz00_3485;

															BgL_tmpz00_3485 = (int) (((long) 2));
															BgL_res2114z00_2416 =
																BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3485);
														} BgL_res2114z00_2416;
													}
													{	/* Rgc/rgccompile.scm 196 */
														int BgL_tmpz00_3488;

														BgL_tmpz00_3488 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_tmpz00_3488,
															BgL_condzd2costzd2_1330);
													}
													BgL_testz00_1309 = BgL_val0_1109z00_1331;
								}}}}}
								{	/* Rgc/rgccompile.scm 216 */
									obj_t BgL_cz00_1310;

									{	/* Rgc/rgccompile.scm 217 */
										int BgL_tmpz00_3491;

										BgL_tmpz00_3491 = (int) (((long) 1));
										BgL_cz00_1310 = BGL_MVALUES_VAL(BgL_tmpz00_3491);
									}
									{	/* Rgc/rgccompile.scm 217 */
										obj_t BgL_arg1365z00_1311;
										obj_t BgL_arg1367z00_1312;
										long BgL_arg1368z00_1313;
										long BgL_arg1370z00_1314;
										bool_t BgL_arg1371z00_1315;

										BgL_arg1365z00_1311 = CDR(((obj_t) BgL_transz00_1294));
										BgL_arg1367z00_1312 =
											MAKE_YOUNG_PAIR(BgL_testz00_1309, BgL_testsz00_1295);
										BgL_arg1368z00_1313 =
											((long) CINT(BgL_cz00_1310) + BgL_costz00_1296);
										{	/* Rgc/rgccompile.scm 220 */
											long BgL_arg1372z00_1316;

											{	/* Rgc/rgccompile.scm 220 */
												obj_t BgL_arg1373z00_1317;

												{	/* Rgc/rgccompile.scm 220 */
													obj_t BgL_pairz00_2427;

													BgL_pairz00_2427 = CAR(((obj_t) BgL_transz00_1294));
													BgL_arg1373z00_1317 = CDR(BgL_pairz00_2427);
												}
												BgL_arg1372z00_1316 =
													BGl_rgcsetzd2lengthzd2zz__rgc_setz00
													(BgL_arg1373z00_1317);
											}
											BgL_arg1370z00_1314 =
												(BgL_prevzd2lenzd2_1297 + BgL_arg1372z00_1316);
										}
										BgL_arg1371z00_1315 =
											(CAR(BgL_testz00_1309) ==
											BGl_symbol2325z00zz__rgc_compilez00);
										{
											bool_t BgL_elsepz00_3510;
											long BgL_prevzd2lenzd2_3509;
											long BgL_costz00_3508;
											obj_t BgL_testsz00_3507;
											obj_t BgL_transz00_3506;

											BgL_transz00_3506 = BgL_arg1365z00_1311;
											BgL_testsz00_3507 = BgL_arg1367z00_1312;
											BgL_costz00_3508 = BgL_arg1368z00_1313;
											BgL_prevzd2lenzd2_3509 = BgL_arg1370z00_1314;
											BgL_elsepz00_3510 = BgL_arg1371z00_1315;
											BgL_elsepz00_1298 = BgL_elsepz00_3510;
											BgL_prevzd2lenzd2_1297 = BgL_prevzd2lenzd2_3509;
											BgL_costz00_1296 = BgL_costz00_3508;
											BgL_testsz00_1295 = BgL_testsz00_3507;
											BgL_transz00_1294 = BgL_transz00_3506;
											goto BgL_zc3z04anonymousza31355ze3z87_1299;
										}
									}
								}
							}
					}
				}
			}
		}

	}



/* compile-cond-test */
	obj_t BGl_compilezd2condzd2testz00zz__rgc_compilez00(obj_t BgL_setz00_25,
		obj_t BgL_varz00_26, long BgL_prevzd2testzd2lenz00_27)
	{
		{	/* Rgc/rgccompile.scm 226 */
			{	/* Rgc/rgccompile.scm 278 */
				obj_t BgL_maxz00_1340;
				long BgL_lenz00_1341;

				BgL_maxz00_1340 = BGl_rgczd2maxzd2charz00zz__rgc_configz00();
				BgL_lenz00_1341 = BGl_rgcsetzd2lengthzd2zz__rgc_setz00(BgL_setz00_25);
				{	/* Rgc/rgccompile.scm 281 */
					bool_t BgL_test2416z00_3513;

					{	/* Rgc/rgccompile.scm 281 */
						obj_t BgL_arg1390z00_1358;
						long BgL_arg1391z00_1359;

						BgL_arg1390z00_1358 = BGl_rgczd2maxzd2charz00zz__rgc_configz00();
						BgL_arg1391z00_1359 =
							(BgL_lenz00_1341 + BgL_prevzd2testzd2lenz00_27);
						BgL_test2416z00_3513 =
							((long) CINT(BgL_arg1390z00_1358) == BgL_arg1391z00_1359);
					}
					if (BgL_test2416z00_3513)
						{	/* Rgc/rgccompile.scm 285 */
							obj_t BgL_val0_1125z00_1345;

							BgL_val0_1125z00_1345 = BGl_symbol2325z00zz__rgc_compilez00;
							{	/* Rgc/rgccompile.scm 285 */
								int BgL_res2152z00_2534;

								{	/* Rgc/rgccompile.scm 285 */
									int BgL_tmpz00_3518;

									BgL_tmpz00_3518 = (int) (((long) 2));
									BgL_res2152z00_2534 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3518);
								} BgL_res2152z00_2534;
							}
							{	/* Rgc/rgccompile.scm 285 */
								obj_t BgL_auxz00_3523;
								int BgL_tmpz00_3521;

								BgL_auxz00_3523 = BINT(((long) 0));
								BgL_tmpz00_3521 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_tmpz00_3521, BgL_auxz00_3523);
							}
							return BgL_val0_1125z00_1345;
						}
					else
						{	/* Rgc/rgccompile.scm 281 */
							if (
								(BgL_lenz00_1341 >
									(((long) 2) + ((long) CINT(BgL_maxz00_1340) / ((long) 2)))))
								{	/* Rgc/rgccompile.scm 288 */
									obj_t BgL_testz00_1350;

									BgL_testz00_1350 =
										BGl_compilezd2rangezd2testze70ze7zz__rgc_compilez00
										(BgL_varz00_26,
										BGl_rgcsetzd2notzd2zz__rgc_setz00(BgL_setz00_25));
									{	/* Rgc/rgccompile.scm 289 */
										obj_t BgL_costz00_1351;

										{	/* Rgc/rgccompile.scm 290 */
											int BgL_tmpz00_3533;

											BgL_tmpz00_3533 = (int) (((long) 1));
											BgL_costz00_1351 = BGL_MVALUES_VAL(BgL_tmpz00_3533);
										}
										{	/* Rgc/rgccompile.scm 290 */
											obj_t BgL_val0_1127z00_1352;
											long BgL_val1_1128z00_1353;

											{	/* Rgc/rgccompile.scm 290 */
												obj_t BgL_arg1386z00_1354;

												BgL_arg1386z00_1354 =
													MAKE_YOUNG_PAIR(BgL_testz00_1350, BNIL);
												BgL_val0_1127z00_1352 =
													MAKE_YOUNG_PAIR(BGl_symbol2334z00zz__rgc_compilez00,
													BgL_arg1386z00_1354);
											}
											BgL_val1_1128z00_1353 =
												(((long) 1) + (long) CINT(BgL_costz00_1351));
											{	/* Rgc/rgccompile.scm 290 */
												int BgL_res2157z00_2544;

												{	/* Rgc/rgccompile.scm 290 */
													int BgL_tmpz00_3540;

													BgL_tmpz00_3540 = (int) (((long) 2));
													BgL_res2157z00_2544 =
														BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3540);
												} BgL_res2157z00_2544;
											}
											{	/* Rgc/rgccompile.scm 290 */
												obj_t BgL_auxz00_3545;
												int BgL_tmpz00_3543;

												BgL_auxz00_3545 = BINT(BgL_val1_1128z00_1353);
												BgL_tmpz00_3543 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_tmpz00_3543, BgL_auxz00_3545);
											}
											return BgL_val0_1127z00_1352;
										}
									}
								}
							else
								{	/* Rgc/rgccompile.scm 286 */
									return
										BGl_compilezd2rangezd2testze70ze7zz__rgc_compilez00
										(BgL_varz00_26, BgL_setz00_25);
								}
						}
				}
			}
		}

	}



/* compile-range-test~0 */
	obj_t BGl_compilezd2rangezd2testze70ze7zz__rgc_compilez00(obj_t
		BgL_varz00_3156, obj_t BgL_setz00_1442)
	{
		{	/* Rgc/rgccompile.scm 276 */
			{
				obj_t BgL_startz00_1382;
				obj_t BgL_stopz00_1383;
				obj_t BgL_setz00_1384;

				{	/* Rgc/rgccompile.scm 266 */
					long BgL_g1044z00_1444;

					{	/* Rgc/rgccompile.scm 229 */
						obj_t BgL_maxz00_2489;

						BgL_maxz00_2489 = BGl_rgczd2maxzd2charz00zz__rgc_configz00();
						{
							long BgL_iz00_2491;

							BgL_iz00_2491 = ((long) 1);
						BgL_loopz00_2490:
							if ((BgL_iz00_2491 == (long) CINT(BgL_maxz00_2489)))
								{	/* Rgc/rgccompile.scm 232 */
									BgL_g1044z00_1444 = ((long) -1);
								}
							else
								{	/* Rgc/rgccompile.scm 232 */
									if (BGl_rgcsetzd2memberzf3z21zz__rgc_setz00(BgL_setz00_1442,
											BgL_iz00_2491))
										{	/* Rgc/rgccompile.scm 233 */
											BgL_g1044z00_1444 = BgL_iz00_2491;
										}
									else
										{
											long BgL_iz00_3555;

											BgL_iz00_3555 = (BgL_iz00_2491 + ((long) 1));
											BgL_iz00_2491 = BgL_iz00_3555;
											goto BgL_loopz00_2490;
										}
								}
						}
					}
					{
						obj_t BgL_startz00_1447;
						obj_t BgL_testsz00_1448;
						long BgL_costz00_1449;

						BgL_startz00_1447 = BINT(BgL_g1044z00_1444);
						BgL_testsz00_1448 = BNIL;
						BgL_costz00_1449 = ((long) 0);
					BgL_zc3z04anonymousza31444ze3z87_1450:
						if (((long) CINT(BgL_startz00_1447) == ((long) -1)))
							{	/* Rgc/rgccompile.scm 270 */
								obj_t BgL_val0_1123z00_1452;

								{	/* Rgc/rgccompile.scm 270 */
									obj_t BgL_arg1446z00_1454;

									BgL_arg1446z00_1454 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(bgl_reverse_bang(BgL_testsz00_1448), BNIL);
									BgL_val0_1123z00_1452 =
										MAKE_YOUNG_PAIR(BGl_symbol2336z00zz__rgc_compilez00,
										BgL_arg1446z00_1454);
								}
								{	/* Rgc/rgccompile.scm 270 */
									int BgL_res2144z00_2502;

									{	/* Rgc/rgccompile.scm 270 */
										int BgL_tmpz00_3563;

										BgL_tmpz00_3563 = (int) (((long) 2));
										BgL_res2144z00_2502 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3563);
									} BgL_res2144z00_2502;
								}
								{	/* Rgc/rgccompile.scm 270 */
									obj_t BgL_auxz00_3568;
									int BgL_tmpz00_3566;

									BgL_auxz00_3568 = BINT(BgL_costz00_1449);
									BgL_tmpz00_3566 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_3566, BgL_auxz00_3568);
								}
								return BgL_val0_1123z00_1452;
							}
						else
							{	/* Rgc/rgccompile.scm 271 */
								obj_t BgL_stopz00_1456;

								{	/* Rgc/rgccompile.scm 237 */
									obj_t BgL_maxz00_2503;

									BgL_maxz00_2503 = BGl_rgczd2maxzd2charz00zz__rgc_configz00();
									{
										obj_t BgL_iz00_2505;

										BgL_iz00_2505 = BgL_startz00_1447;
									BgL_loopz00_2504:
										if (
											((long) CINT(BgL_iz00_2505) ==
												(long) CINT(BgL_maxz00_2503)))
											{	/* Rgc/rgccompile.scm 240 */
												BgL_stopz00_1456 = BgL_maxz00_2503;
											}
										else
											{	/* Rgc/rgccompile.scm 240 */
												if (BGl_rgcsetzd2memberzf3z21zz__rgc_setz00
													(BgL_setz00_1442, (long) CINT(BgL_iz00_2505)))
													{	/* Rgc/rgccompile.scm 241 */
														long BgL_arg1401z00_2508;

														BgL_arg1401z00_2508 =
															((long) CINT(BgL_iz00_2505) + ((long) 1));
														{
															obj_t BgL_iz00_3581;

															BgL_iz00_3581 = BINT(BgL_arg1401z00_2508);
															BgL_iz00_2505 = BgL_iz00_3581;
															goto BgL_loopz00_2504;
														}
													}
												else
													{	/* Rgc/rgccompile.scm 241 */
														BgL_stopz00_1456 = BgL_iz00_2505;
													}
											}
									}
								}
								{	/* Rgc/rgccompile.scm 272 */
									obj_t BgL_testz00_1457;

									BgL_startz00_1382 = BgL_startz00_1447;
									BgL_stopz00_1383 = BgL_stopz00_1456;
									BgL_setz00_1384 = BgL_setz00_1442;
									if (
										(((long) CINT(BgL_stopz00_1383) - ((long) 1)) ==
											(long) CINT(BgL_startz00_1382)))
										{	/* Rgc/rgccompile.scm 247 */
											obj_t BgL_val0_1111z00_1388;

											{	/* Rgc/rgccompile.scm 247 */
												obj_t BgL_arg1406z00_1390;

												{	/* Rgc/rgccompile.scm 247 */
													obj_t BgL_arg1407z00_1391;

													BgL_arg1407z00_1391 =
														MAKE_YOUNG_PAIR(BgL_startz00_1382, BNIL);
													BgL_arg1406z00_1390 =
														MAKE_YOUNG_PAIR(BgL_varz00_3156,
														BgL_arg1407z00_1391);
												}
												BgL_val0_1111z00_1388 =
													MAKE_YOUNG_PAIR(BGl_symbol2305z00zz__rgc_compilez00,
													BgL_arg1406z00_1390);
											}
											{	/* Rgc/rgccompile.scm 247 */
												int BgL_res2126z00_2460;

												{	/* Rgc/rgccompile.scm 247 */
													int BgL_tmpz00_3591;

													BgL_tmpz00_3591 = (int) (((long) 2));
													BgL_res2126z00_2460 =
														BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3591);
												} BgL_res2126z00_2460;
											}
											{	/* Rgc/rgccompile.scm 247 */
												obj_t BgL_auxz00_3596;
												int BgL_tmpz00_3594;

												BgL_auxz00_3596 = BINT(((long) 1));
												BgL_tmpz00_3594 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_tmpz00_3594, BgL_auxz00_3596);
											}
											BgL_testz00_1457 = BgL_val0_1111z00_1388;
										}
									else
										{	/* Rgc/rgccompile.scm 246 */
											if (
												(((long) CINT(BgL_stopz00_1383) -
														(long) CINT(BgL_startz00_1382)) < ((long) 4)))
												{	/* Rgc/rgccompile.scm 249 */
													obj_t BgL_val0_1113z00_1394;
													long BgL_val1_1114z00_1395;

													{	/* Rgc/rgccompile.scm 249 */
														obj_t BgL_arg1411z00_1396;

														{	/* Rgc/rgccompile.scm 249 */
															obj_t BgL_arg1412z00_1397;

															{
																obj_t BgL_startz00_1400;
																obj_t BgL_resz00_1401;

																BgL_startz00_1400 = BgL_startz00_1382;
																BgL_resz00_1401 = BNIL;
															BgL_zc3z04anonymousza31413ze3z87_1402:
																if (
																	((long) CINT(BgL_startz00_1400) ==
																		(long) CINT(BgL_stopz00_1383)))
																	{	/* Rgc/rgccompile.scm 251 */
																		BgL_arg1412z00_1397 = BgL_resz00_1401;
																	}
																else
																	{	/* Rgc/rgccompile.scm 253 */
																		long BgL_arg1415z00_1404;
																		obj_t BgL_arg1416z00_1405;

																		BgL_arg1415z00_1404 =
																			(
																			(long) CINT(BgL_startz00_1400) +
																			((long) 1));
																		{	/* Rgc/rgccompile.scm 254 */
																			obj_t BgL_arg1417z00_1406;

																			{	/* Rgc/rgccompile.scm 254 */
																				obj_t BgL_arg1418z00_1407;

																				{	/* Rgc/rgccompile.scm 254 */
																					obj_t BgL_arg1419z00_1408;

																					BgL_arg1419z00_1408 =
																						MAKE_YOUNG_PAIR(BgL_startz00_1400,
																						BNIL);
																					BgL_arg1418z00_1407 =
																						MAKE_YOUNG_PAIR(BgL_varz00_3156,
																						BgL_arg1419z00_1408);
																				}
																				BgL_arg1417z00_1406 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2305z00zz__rgc_compilez00,
																					BgL_arg1418z00_1407);
																			}
																			BgL_arg1416z00_1405 =
																				MAKE_YOUNG_PAIR(BgL_arg1417z00_1406,
																				BgL_resz00_1401);
																		}
																		{
																			obj_t BgL_resz00_3616;
																			obj_t BgL_startz00_3614;

																			BgL_startz00_3614 =
																				BINT(BgL_arg1415z00_1404);
																			BgL_resz00_3616 = BgL_arg1416z00_1405;
																			BgL_resz00_1401 = BgL_resz00_3616;
																			BgL_startz00_1400 = BgL_startz00_3614;
																			goto
																				BgL_zc3z04anonymousza31413ze3z87_1402;
																		}
																	}
															}
															BgL_arg1411z00_1396 =
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg1412z00_1397, BNIL);
														}
														BgL_val0_1113z00_1394 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2336z00zz__rgc_compilez00,
															BgL_arg1411z00_1396);
													}
													BgL_val1_1114z00_1395 =
														(
														(long) CINT(BgL_stopz00_1383) -
														(long) CINT(BgL_startz00_1382));
													{	/* Rgc/rgccompile.scm 249 */
														int BgL_res2132z00_2474;

														{	/* Rgc/rgccompile.scm 249 */
															int BgL_tmpz00_3622;

															BgL_tmpz00_3622 = (int) (((long) 2));
															BgL_res2132z00_2474 =
																BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3622);
														} BgL_res2132z00_2474;
													}
													{	/* Rgc/rgccompile.scm 249 */
														obj_t BgL_auxz00_3627;
														int BgL_tmpz00_3625;

														BgL_auxz00_3627 = BINT(BgL_val1_1114z00_1395);
														BgL_tmpz00_3625 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_tmpz00_3625,
															BgL_auxz00_3627);
													}
													BgL_testz00_1457 = BgL_val0_1113z00_1394;
												}
											else
												{	/* Rgc/rgccompile.scm 256 */
													bool_t BgL_test2426z00_3630;

													{	/* Rgc/rgccompile.scm 256 */
														bool_t BgL_test2427z00_3631;

														{	/* Rgc/rgccompile.scm 256 */
															obj_t BgL_arg1440z00_1439;

															BgL_arg1440z00_1439 =
																BGl_rgczd2maxzd2charz00zz__rgc_configz00();
															BgL_test2427z00_3631 =
																(
																(long) CINT(BgL_stopz00_1383) ==
																(long) CINT(BgL_arg1440z00_1439));
														}
														if (BgL_test2427z00_3631)
															{	/* Rgc/rgccompile.scm 256 */
																BgL_test2426z00_3630 =
																	(
																	(long) CINT(BgL_startz00_1382) == ((long) 1));
															}
														else
															{	/* Rgc/rgccompile.scm 256 */
																BgL_test2426z00_3630 = ((bool_t) 0);
															}
													}
													if (BgL_test2426z00_3630)
														{	/* Rgc/rgccompile.scm 256 */
															{	/* Rgc/rgccompile.scm 257 */
																int BgL_res2135z00_2480;

																{	/* Rgc/rgccompile.scm 257 */
																	int BgL_tmpz00_3638;

																	BgL_tmpz00_3638 = (int) (((long) 2));
																	BgL_res2135z00_2480 =
																		BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3638);
																} BgL_res2135z00_2480;
															}
															{	/* Rgc/rgccompile.scm 257 */
																obj_t BgL_auxz00_3643;
																int BgL_tmpz00_3641;

																BgL_auxz00_3643 = BINT(((long) 0));
																BgL_tmpz00_3641 = (int) (((long) 1));
																BGL_MVALUES_VAL_SET(BgL_tmpz00_3641,
																	BgL_auxz00_3643);
															}
															BgL_testz00_1457 = BTRUE;
														}
													else
														{	/* Rgc/rgccompile.scm 258 */
															bool_t BgL_test2428z00_3646;

															{	/* Rgc/rgccompile.scm 258 */
																obj_t BgL_arg1439z00_1437;

																BgL_arg1439z00_1437 =
																	BGl_rgczd2maxzd2charz00zz__rgc_configz00();
																BgL_test2428z00_3646 =
																	(
																	(long) CINT(BgL_stopz00_1383) ==
																	(long) CINT(BgL_arg1439z00_1437));
															}
															if (BgL_test2428z00_3646)
																{	/* Rgc/rgccompile.scm 259 */
																	obj_t BgL_val0_1117z00_1418;

																	{	/* Rgc/rgccompile.scm 259 */
																		obj_t BgL_arg1426z00_1420;

																		{	/* Rgc/rgccompile.scm 259 */
																			obj_t BgL_arg1427z00_1421;

																			BgL_arg1427z00_1421 =
																				MAKE_YOUNG_PAIR(BgL_startz00_1382,
																				BNIL);
																			BgL_arg1426z00_1420 =
																				MAKE_YOUNG_PAIR(BgL_varz00_3156,
																				BgL_arg1427z00_1421);
																		}
																		BgL_val0_1117z00_1418 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol2338z00zz__rgc_compilez00,
																			BgL_arg1426z00_1420);
																	}
																	{	/* Rgc/rgccompile.scm 259 */
																		int BgL_res2137z00_2484;

																		{	/* Rgc/rgccompile.scm 259 */
																			int BgL_tmpz00_3654;

																			BgL_tmpz00_3654 = (int) (((long) 2));
																			BgL_res2137z00_2484 =
																				BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3654);
																		} BgL_res2137z00_2484;
																	}
																	{	/* Rgc/rgccompile.scm 259 */
																		obj_t BgL_auxz00_3659;
																		int BgL_tmpz00_3657;

																		BgL_auxz00_3659 = BINT(((long) 1));
																		BgL_tmpz00_3657 = (int) (((long) 1));
																		BGL_MVALUES_VAL_SET(BgL_tmpz00_3657,
																			BgL_auxz00_3659);
																	}
																	BgL_testz00_1457 = BgL_val0_1117z00_1418;
																}
															else
																{	/* Rgc/rgccompile.scm 258 */
																	if (
																		((long) CINT(BgL_startz00_1382) ==
																			((long) 1)))
																		{	/* Rgc/rgccompile.scm 261 */
																			obj_t BgL_val0_1119z00_1423;

																			{	/* Rgc/rgccompile.scm 261 */
																				obj_t BgL_arg1429z00_1425;

																				{	/* Rgc/rgccompile.scm 261 */
																					obj_t BgL_arg1430z00_1426;

																					BgL_arg1430z00_1426 =
																						MAKE_YOUNG_PAIR(BgL_stopz00_1383,
																						BNIL);
																					BgL_arg1429z00_1425 =
																						MAKE_YOUNG_PAIR(BgL_varz00_3156,
																						BgL_arg1430z00_1426);
																				}
																				BgL_val0_1119z00_1423 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2340z00zz__rgc_compilez00,
																					BgL_arg1429z00_1425);
																			}
																			{	/* Rgc/rgccompile.scm 261 */
																				int BgL_res2139z00_2487;

																				{	/* Rgc/rgccompile.scm 261 */
																					int BgL_tmpz00_3668;

																					BgL_tmpz00_3668 = (int) (((long) 2));
																					BgL_res2139z00_2487 =
																						BGL_MVALUES_NUMBER_SET
																						(BgL_tmpz00_3668);
																				} BgL_res2139z00_2487;
																			}
																			{	/* Rgc/rgccompile.scm 261 */
																				obj_t BgL_auxz00_3673;
																				int BgL_tmpz00_3671;

																				BgL_auxz00_3673 = BINT(((long) 1));
																				BgL_tmpz00_3671 = (int) (((long) 1));
																				BGL_MVALUES_VAL_SET(BgL_tmpz00_3671,
																					BgL_auxz00_3673);
																			}
																			BgL_testz00_1457 = BgL_val0_1119z00_1423;
																		}
																	else
																		{	/* Rgc/rgccompile.scm 263 */
																			obj_t BgL_val0_1121z00_1427;

																			{	/* Rgc/rgccompile.scm 263 */
																				obj_t BgL_arg1431z00_1429;

																				{	/* Rgc/rgccompile.scm 263 */
																					obj_t BgL_arg1432z00_1430;
																					obj_t BgL_arg1433z00_1431;

																					{	/* Rgc/rgccompile.scm 263 */
																						obj_t BgL_arg1434z00_1432;

																						{	/* Rgc/rgccompile.scm 263 */
																							obj_t BgL_arg1435z00_1433;

																							BgL_arg1435z00_1433 =
																								MAKE_YOUNG_PAIR
																								(BgL_startz00_1382, BNIL);
																							BgL_arg1434z00_1432 =
																								MAKE_YOUNG_PAIR(BgL_varz00_3156,
																								BgL_arg1435z00_1433);
																						}
																						BgL_arg1432z00_1430 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol2338z00zz__rgc_compilez00,
																							BgL_arg1434z00_1432);
																					}
																					{	/* Rgc/rgccompile.scm 263 */
																						obj_t BgL_arg1436z00_1434;

																						{	/* Rgc/rgccompile.scm 263 */
																							obj_t BgL_arg1437z00_1435;

																							{	/* Rgc/rgccompile.scm 263 */
																								obj_t BgL_arg1438z00_1436;

																								BgL_arg1438z00_1436 =
																									MAKE_YOUNG_PAIR
																									(BgL_stopz00_1383, BNIL);
																								BgL_arg1437z00_1435 =
																									MAKE_YOUNG_PAIR
																									(BgL_varz00_3156,
																									BgL_arg1438z00_1436);
																							}
																							BgL_arg1436z00_1434 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol2340z00zz__rgc_compilez00,
																								BgL_arg1437z00_1435);
																						}
																						BgL_arg1433z00_1431 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1436z00_1434, BNIL);
																					}
																					BgL_arg1431z00_1429 =
																						MAKE_YOUNG_PAIR(BgL_arg1432z00_1430,
																						BgL_arg1433z00_1431);
																				}
																				BgL_val0_1121z00_1427 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol2342z00zz__rgc_compilez00,
																					BgL_arg1431z00_1429);
																			}
																			{	/* Rgc/rgccompile.scm 263 */
																				int BgL_res2140z00_2488;

																				{	/* Rgc/rgccompile.scm 263 */
																					int BgL_tmpz00_3685;

																					BgL_tmpz00_3685 = (int) (((long) 2));
																					BgL_res2140z00_2488 =
																						BGL_MVALUES_NUMBER_SET
																						(BgL_tmpz00_3685);
																				} BgL_res2140z00_2488;
																			}
																			{	/* Rgc/rgccompile.scm 263 */
																				obj_t BgL_auxz00_3690;
																				int BgL_tmpz00_3688;

																				BgL_auxz00_3690 = BINT(((long) 3));
																				BgL_tmpz00_3688 = (int) (((long) 1));
																				BGL_MVALUES_VAL_SET(BgL_tmpz00_3688,
																					BgL_auxz00_3690);
																			}
																			BgL_testz00_1457 = BgL_val0_1121z00_1427;
										}}}}}
									{	/* Rgc/rgccompile.scm 273 */
										obj_t BgL_cz00_1458;

										{	/* Rgc/rgccompile.scm 274 */
											int BgL_tmpz00_3693;

											BgL_tmpz00_3693 = (int) (((long) 1));
											BgL_cz00_1458 = BGL_MVALUES_VAL(BgL_tmpz00_3693);
										}
										{	/* Rgc/rgccompile.scm 274 */
											obj_t BgL_arg1449z00_1459;
											obj_t BgL_arg1451z00_1460;
											long BgL_arg1452z00_1461;

											{	/* Rgc/rgccompile.scm 229 */
												obj_t BgL_maxz00_2514;

												BgL_maxz00_2514 =
													BGl_rgczd2maxzd2charz00zz__rgc_configz00();
												{
													obj_t BgL_iz00_2516;

													BgL_iz00_2516 = BgL_stopz00_1456;
												BgL_loopz00_2515:
													if (
														((long) CINT(BgL_iz00_2516) ==
															(long) CINT(BgL_maxz00_2514)))
														{	/* Rgc/rgccompile.scm 232 */
															BgL_arg1449z00_1459 = BINT(((long) -1));
														}
													else
														{	/* Rgc/rgccompile.scm 232 */
															if (BGl_rgcsetzd2memberzf3z21zz__rgc_setz00
																(BgL_setz00_1442, (long) CINT(BgL_iz00_2516)))
																{	/* Rgc/rgccompile.scm 233 */
																	BgL_arg1449z00_1459 = BgL_iz00_2516;
																}
															else
																{	/* Rgc/rgccompile.scm 234 */
																	long BgL_arg1396z00_2519;

																	BgL_arg1396z00_2519 =
																		((long) CINT(BgL_iz00_2516) + ((long) 1));
																	{
																		obj_t BgL_iz00_3707;

																		BgL_iz00_3707 = BINT(BgL_arg1396z00_2519);
																		BgL_iz00_2516 = BgL_iz00_3707;
																		goto BgL_loopz00_2515;
																	}
																}
														}
												}
											}
											BgL_arg1451z00_1460 =
												MAKE_YOUNG_PAIR(BgL_testz00_1457, BgL_testsz00_1448);
											BgL_arg1452z00_1461 =
												((long) CINT(BgL_cz00_1458) + BgL_costz00_1449);
											{
												long BgL_costz00_3714;
												obj_t BgL_testsz00_3713;
												obj_t BgL_startz00_3712;

												BgL_startz00_3712 = BgL_arg1449z00_1459;
												BgL_testsz00_3713 = BgL_arg1451z00_1460;
												BgL_costz00_3714 = BgL_arg1452z00_1461;
												BgL_costz00_1449 = BgL_costz00_3714;
												BgL_testsz00_1448 = BgL_testsz00_3713;
												BgL_startz00_1447 = BgL_startz00_3712;
												goto BgL_zc3z04anonymousza31444ze3z87_1450;
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



/* state-transition-list */
	obj_t BGl_statezd2transitionzd2listz00zz__rgc_compilez00(obj_t
		BgL_transitionsz00_28)
	{
		{	/* Rgc/rgccompile.scm 297 */
			{
				obj_t BgL_transitionsz00_1469;
				obj_t BgL_resz00_1470;

				BgL_transitionsz00_1469 = BgL_transitionsz00_28;
				BgL_resz00_1470 = BNIL;
			BgL_zc3z04anonymousza31453ze3z87_1471:
				if (NULLP(BgL_transitionsz00_1469))
					{	/* Rgc/rgccompile.scm 300 */
						return BgL_resz00_1470;
					}
				else
					{	/* Rgc/rgccompile.scm 302 */
						obj_t BgL_transitionz00_1473;

						BgL_transitionz00_1473 = CAR(((obj_t) BgL_transitionsz00_1469));
						{	/* Rgc/rgccompile.scm 302 */
							obj_t BgL_charz00_1474;

							BgL_charz00_1474 = CAR(((obj_t) BgL_transitionz00_1473));
							{	/* Rgc/rgccompile.scm 303 */
								obj_t BgL_statez00_1475;

								BgL_statez00_1475 = CDR(((obj_t) BgL_transitionz00_1473));
								{	/* Rgc/rgccompile.scm 304 */

									{	/* Rgc/rgccompile.scm 305 */
										obj_t BgL_cellz00_1476;

										BgL_cellz00_1476 =
											BGl_assqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_statez00_1475, BgL_resz00_1470);
										if (PAIRP(BgL_cellz00_1476))
											{	/* Rgc/rgccompile.scm 306 */
												BGl_rgcsetzd2addz12zc0zz__rgc_setz00(CDR
													(BgL_cellz00_1476), (long) CINT(BgL_charz00_1474));
												{	/* Rgc/rgccompile.scm 312 */
													obj_t BgL_arg1457z00_1479;

													BgL_arg1457z00_1479 =
														CDR(((obj_t) BgL_transitionsz00_1469));
													{
														obj_t BgL_transitionsz00_3732;

														BgL_transitionsz00_3732 = BgL_arg1457z00_1479;
														BgL_transitionsz00_1469 = BgL_transitionsz00_3732;
														goto BgL_zc3z04anonymousza31453ze3z87_1471;
													}
												}
											}
										else
											{	/* Rgc/rgccompile.scm 307 */
												obj_t BgL_setz00_1480;

												{	/* Rgc/rgccompile.scm 307 */
													obj_t BgL_arg1461z00_1484;
													obj_t BgL_arg1462z00_1485;

													{	/* Rgc/rgccompile.scm 307 */
														obj_t BgL_list1463z00_1486;

														BgL_list1463z00_1486 =
															MAKE_YOUNG_PAIR(BgL_charz00_1474, BNIL);
														BgL_arg1461z00_1484 = BgL_list1463z00_1486;
													}
													BgL_arg1462z00_1485 =
														BGl_rgczd2maxzd2charz00zz__rgc_configz00();
													BgL_setz00_1480 =
														BGl_listzd2ze3rgcsetz31zz__rgc_setz00
														(BgL_arg1461z00_1484,
														(long) CINT(BgL_arg1462z00_1485));
												}
												{	/* Rgc/rgccompile.scm 308 */
													obj_t BgL_arg1458z00_1481;
													obj_t BgL_arg1459z00_1482;

													BgL_arg1458z00_1481 =
														CDR(((obj_t) BgL_transitionsz00_1469));
													{	/* Rgc/rgccompile.scm 309 */
														obj_t BgL_arg1460z00_1483;

														BgL_arg1460z00_1483 =
															MAKE_YOUNG_PAIR(BgL_statez00_1475,
															BgL_setz00_1480);
														BgL_arg1459z00_1482 =
															MAKE_YOUNG_PAIR(BgL_arg1460z00_1483,
															BgL_resz00_1470);
													}
													{
														obj_t BgL_resz00_3742;
														obj_t BgL_transitionsz00_3741;

														BgL_transitionsz00_3741 = BgL_arg1458z00_1481;
														BgL_resz00_3742 = BgL_arg1459z00_1482;
														BgL_resz00_1470 = BgL_resz00_3742;
														BgL_transitionsz00_1469 = BgL_transitionsz00_3741;
														goto BgL_zc3z04anonymousza31453ze3z87_1471;
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



/* insort */
	obj_t BGl_insortz00zz__rgc_compilez00(int BgL_elz00_29, obj_t BgL_lstz00_30)
	{
		{	/* Rgc/rgccompile.scm 319 */
			if (NULLP(BgL_lstz00_30))
				{	/* Rgc/rgccompile.scm 321 */
					obj_t BgL_list1465z00_1489;

					BgL_list1465z00_1489 = MAKE_YOUNG_PAIR(BINT(BgL_elz00_29), BNIL);
					return BgL_list1465z00_1489;
				}
			else
				{	/* Rgc/rgccompile.scm 321 */
					if (
						((long) (BgL_elz00_29) < (long) CINT(CAR(((obj_t) BgL_lstz00_30)))))
						{	/* Rgc/rgccompile.scm 322 */
							return MAKE_YOUNG_PAIR(BINT(BgL_elz00_29), BgL_lstz00_30);
						}
					else
						{	/* Rgc/rgccompile.scm 322 */
							if (
								((long) (BgL_elz00_29) ==
									(long) CINT(CAR(((obj_t) BgL_lstz00_30)))))
								{	/* Rgc/rgccompile.scm 323 */
									return BgL_lstz00_30;
								}
							else
								{	/* Rgc/rgccompile.scm 324 */
									obj_t BgL_arg1470z00_1494;
									obj_t BgL_arg1471z00_1495;

									BgL_arg1470z00_1494 = CAR(((obj_t) BgL_lstz00_30));
									{	/* Rgc/rgccompile.scm 324 */
										obj_t BgL_arg1472z00_1496;

										BgL_arg1472z00_1496 = CDR(((obj_t) BgL_lstz00_30));
										BgL_arg1471z00_1495 =
											BGl_insortz00zz__rgc_compilez00(BgL_elz00_29,
											BgL_arg1472z00_1496);
									}
									return
										MAKE_YOUNG_PAIR(BgL_arg1470z00_1494, BgL_arg1471z00_1495);
								}
						}
				}
		}

	}



/* compile-match */
	obj_t BGl_compilezd2matchzd2zz__rgc_compilez00(obj_t BgL_transitionsz00_31)
	{
		{	/* Rgc/rgccompile.scm 334 */
			{
				obj_t BgL_matchesz00_1515;

				{
					obj_t BgL_transitionsz00_1502;
					obj_t BgL_matchesz00_1503;

					BgL_transitionsz00_1502 = BgL_transitionsz00_31;
					BgL_matchesz00_1503 = BNIL;
				BgL_zc3z04anonymousza31475ze3z87_1504:
					if (NULLP(BgL_transitionsz00_1502))
						{	/* Rgc/rgccompile.scm 360 */
							BgL_matchesz00_1515 = BgL_matchesz00_1503;
							if (NULLP(BgL_matchesz00_1515))
								{	/* Rgc/rgccompile.scm 339 */
									return BFALSE;
								}
							else
								{	/* Rgc/rgccompile.scm 339 */
									return BGl_loopze70ze7zz__rgc_compilez00(BgL_matchesz00_1515);
								}
						}
					else
						{	/* Rgc/rgccompile.scm 362 */
							obj_t BgL_transitionz00_1506;

							BgL_transitionz00_1506 = CAR(((obj_t) BgL_transitionsz00_1502));
							{	/* Rgc/rgccompile.scm 362 */
								obj_t BgL_charz00_1507;

								BgL_charz00_1507 = CAR(((obj_t) BgL_transitionz00_1506));
								{	/* Rgc/rgccompile.scm 364 */

									if (BGl_specialzd2charzd2matchzf3zf3zz__rgc_rulesz00(CINT
											(BgL_charz00_1507)))
										{	/* Rgc/rgccompile.scm 366 */
											obj_t BgL_arg1478z00_1510;
											obj_t BgL_arg1479z00_1511;

											BgL_arg1478z00_1510 =
												CDR(((obj_t) BgL_transitionsz00_1502));
											BgL_arg1479z00_1511 =
												BGl_insortz00zz__rgc_compilez00
												(BGl_specialzd2matchzd2charzd2ze3rulezd2numberze3zz__rgc_rulesz00
												(CINT(BgL_charz00_1507)), BgL_matchesz00_1503);
											{
												obj_t BgL_matchesz00_3785;
												obj_t BgL_transitionsz00_3784;

												BgL_transitionsz00_3784 = BgL_arg1478z00_1510;
												BgL_matchesz00_3785 = BgL_arg1479z00_1511;
												BgL_matchesz00_1503 = BgL_matchesz00_3785;
												BgL_transitionsz00_1502 = BgL_transitionsz00_3784;
												goto BgL_zc3z04anonymousza31475ze3z87_1504;
											}
										}
									else
										{	/* Rgc/rgccompile.scm 368 */
											obj_t BgL_arg1483z00_1513;

											BgL_arg1483z00_1513 =
												CDR(((obj_t) BgL_transitionsz00_1502));
											{
												obj_t BgL_transitionsz00_3788;

												BgL_transitionsz00_3788 = BgL_arg1483z00_1513;
												BgL_transitionsz00_1502 = BgL_transitionsz00_3788;
												goto BgL_zc3z04anonymousza31475ze3z87_1504;
											}
										}
								}
							}
						}
				}
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__rgc_compilez00(obj_t BgL_matchesz00_1519)
	{
		{	/* Rgc/rgccompile.scm 342 */
			if (NULLP(BgL_matchesz00_1519))
				{	/* Rgc/rgccompile.scm 343 */
					return BGl_symbol2295z00zz__rgc_compilez00;
				}
			else
				{	/* Rgc/rgccompile.scm 345 */
					obj_t BgL_matchz00_1522;

					BgL_matchz00_1522 = CAR(((obj_t) BgL_matchesz00_1519));
					{	/* Rgc/rgccompile.scm 345 */
						obj_t BgL_predsz00_1523;

						BgL_predsz00_1523 =
							BGl_predicatezd2matchzd2zz__rgc_rulesz00(CINT(BgL_matchz00_1522));
						{	/* Rgc/rgccompile.scm 346 */

							if (PAIRP(BgL_predsz00_1523))
								{	/* Rgc/rgccompile.scm 349 */
									obj_t BgL_arg1489z00_1525;

									{	/* Rgc/rgccompile.scm 349 */
										obj_t BgL_arg1491z00_1526;
										obj_t BgL_arg1492z00_1527;

										{	/* Rgc/rgccompile.scm 349 */
											obj_t BgL_arg1493z00_1528;

											BgL_arg1493z00_1528 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_predsz00_1523, BNIL);
											BgL_arg1491z00_1526 =
												MAKE_YOUNG_PAIR(BGl_symbol2342z00zz__rgc_compilez00,
												BgL_arg1493z00_1528);
										}
										{	/* Rgc/rgccompile.scm 351 */
											obj_t BgL_arg1494z00_1529;
											obj_t BgL_arg1495z00_1530;

											{	/* Rgc/rgccompile.scm 351 */
												obj_t BgL_arg1496z00_1531;

												{	/* Rgc/rgccompile.scm 351 */
													obj_t BgL_arg1497z00_1532;
													obj_t BgL_arg1498z00_1533;

													{	/* Rgc/rgccompile.scm 351 */
														obj_t BgL_arg1500z00_1534;

														{	/* Rgc/rgccompile.scm 351 */
															obj_t BgL_arg1502z00_1535;

															BgL_arg1502z00_1535 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2293z00zz__rgc_compilez00, BNIL);
															BgL_arg1500z00_1534 =
																MAKE_YOUNG_PAIR
																(BGl_symbol2297z00zz__rgc_compilez00,
																BgL_arg1502z00_1535);
														}
														BgL_arg1497z00_1532 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2344z00zz__rgc_compilez00,
															BgL_arg1500z00_1534);
													}
													BgL_arg1498z00_1533 =
														MAKE_YOUNG_PAIR(BgL_matchz00_1522, BNIL);
													BgL_arg1496z00_1531 =
														MAKE_YOUNG_PAIR(BgL_arg1497z00_1532,
														BgL_arg1498z00_1533);
												}
												BgL_arg1494z00_1529 =
													MAKE_YOUNG_PAIR(BGl_symbol2346z00zz__rgc_compilez00,
													BgL_arg1496z00_1531);
											}
											{	/* Rgc/rgccompile.scm 353 */
												obj_t BgL_arg1505z00_1536;

												{	/* Rgc/rgccompile.scm 353 */
													obj_t BgL_arg1506z00_1537;

													BgL_arg1506z00_1537 =
														CDR(((obj_t) BgL_matchesz00_1519));
													BgL_arg1505z00_1536 =
														BGl_loopze70ze7zz__rgc_compilez00
														(BgL_arg1506z00_1537);
												}
												BgL_arg1495z00_1530 =
													MAKE_YOUNG_PAIR(BgL_arg1505z00_1536, BNIL);
											}
											BgL_arg1492z00_1527 =
												MAKE_YOUNG_PAIR(BgL_arg1494z00_1529,
												BgL_arg1495z00_1530);
										}
										BgL_arg1489z00_1525 =
											MAKE_YOUNG_PAIR(BgL_arg1491z00_1526, BgL_arg1492z00_1527);
									}
									return
										MAKE_YOUNG_PAIR(BGl_symbol2315z00zz__rgc_compilez00,
										BgL_arg1489z00_1525);
								}
							else
								{	/* Rgc/rgccompile.scm 355 */
									obj_t BgL_arg1507z00_1538;

									{	/* Rgc/rgccompile.scm 355 */
										obj_t BgL_arg1508z00_1539;
										obj_t BgL_arg1509z00_1540;

										{	/* Rgc/rgccompile.scm 355 */
											obj_t BgL_arg1510z00_1541;

											{	/* Rgc/rgccompile.scm 355 */
												obj_t BgL_arg1511z00_1542;

												BgL_arg1511z00_1542 =
													MAKE_YOUNG_PAIR(BGl_symbol2293z00zz__rgc_compilez00,
													BNIL);
												BgL_arg1510z00_1541 =
													MAKE_YOUNG_PAIR(BGl_symbol2297z00zz__rgc_compilez00,
													BgL_arg1511z00_1542);
											}
											BgL_arg1508z00_1539 =
												MAKE_YOUNG_PAIR(BGl_symbol2344z00zz__rgc_compilez00,
												BgL_arg1510z00_1541);
										}
										BgL_arg1509z00_1540 =
											MAKE_YOUNG_PAIR(BgL_matchz00_1522, BNIL);
										BgL_arg1507z00_1538 =
											MAKE_YOUNG_PAIR(BgL_arg1508z00_1539, BgL_arg1509z00_1540);
									}
									return
										MAKE_YOUNG_PAIR(BGl_symbol2346z00zz__rgc_compilez00,
										BgL_arg1507z00_1538);
								}
						}
					}
				}
		}

	}



/* init-compile-member-vector! */
	obj_t BGl_initzd2compilezd2memberzd2vectorz12zc0zz__rgc_compilez00()
	{
		{	/* Rgc/rgccompile.scm 379 */
			if (VECTORP(BGl_compilezd2memberzd2vectorz00zz__rgc_compilez00))
				{	/* Rgc/rgccompile.scm 380 */
					return BFALSE;
				}
			else
				{	/* Rgc/rgccompile.scm 381 */
					obj_t BgL_arg1513z00_1546;

					BgL_arg1513z00_1546 =
						BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 1)),
						BGl_rgczd2maxzd2charz00zz__rgc_configz00());
					return (BGl_compilezd2memberzd2vectorz00zz__rgc_compilez00 =
						make_vector((long) CINT(BgL_arg1513z00_1546), BUNSPEC), BUNSPEC);
		}}

	}



/* chars->char-ranges */
	obj_t BGl_charszd2ze3charzd2rangesze3zz__rgc_compilez00(obj_t BgL_charsz00_32)
	{
		{	/* Rgc/rgccompile.scm 396 */
			{	/* Rgc/rgccompile.scm 398 */
				obj_t BgL_maxz00_1549;

				BgL_maxz00_1549 = BGl_rgczd2maxzd2charz00zz__rgc_configz00();
				{
					obj_t BgL_iz00_1585;
					obj_t BgL_iz00_1576;

					{	/* Rgc/rgccompile.scm 420 */
						obj_t BgL_vecz00_1553;

						BgL_vecz00_1553 =
							BGl_compilezd2memberzd2vectorz00zz__rgc_compilez00;
						{	/* Ieee/vector.scm 103 */

							BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00(BgL_vecz00_1553,
								BFALSE, ((long) 0), VECTOR_LENGTH(((obj_t) BgL_vecz00_1553)));
					}}
					{
						obj_t BgL_l1129z00_2617;

						BgL_l1129z00_2617 = BgL_charsz00_32;
					BgL_zc3z04anonymousza31516ze3z87_2616:
						if (PAIRP(BgL_l1129z00_2617))
							{	/* Rgc/rgccompile.scm 421 */
								{	/* Rgc/rgccompile.scm 421 */
									obj_t BgL_xz00_2622;

									BgL_xz00_2622 = CAR(BgL_l1129z00_2617);
									VECTOR_SET(BGl_compilezd2memberzd2vectorz00zz__rgc_compilez00,
										(long) CINT(BgL_xz00_2622), BTRUE);
								}
								{
									obj_t BgL_l1129z00_3834;

									BgL_l1129z00_3834 = CDR(BgL_l1129z00_2617);
									BgL_l1129z00_2617 = BgL_l1129z00_3834;
									goto BgL_zc3z04anonymousza31516ze3z87_2616;
								}
							}
						else
							{	/* Rgc/rgccompile.scm 421 */
								((bool_t) 1);
							}
					}
					{
						obj_t BgL_iz00_2642;
						obj_t BgL_rangesz00_2643;

						BgL_iz00_2642 = BINT(((long) 0));
						BgL_rangesz00_2643 = BNIL;
					BgL_loopz00_2641:
						if (((long) CINT(BgL_iz00_2642) >= (long) CINT(BgL_maxz00_1549)))
							{	/* Rgc/rgccompile.scm 424 */
								return bgl_reverse_bang(BgL_rangesz00_2643);
							}
						else
							{	/* Rgc/rgccompile.scm 426 */
								obj_t BgL_rangez00_2648;

								{	/* Rgc/rgccompile.scm 415 */
									obj_t BgL_startz00_2649;

									BgL_iz00_1576 = BgL_iz00_2642;
									{
										obj_t BgL_iz00_1579;

										BgL_iz00_1579 = BgL_iz00_1576;
									BgL_zc3z04anonymousza31527ze3z87_1580:
										if (
											((long) CINT(BgL_iz00_1579) ==
												(long) CINT(BgL_maxz00_1549)))
											{	/* Rgc/rgccompile.scm 403 */
												BgL_startz00_2649 = BFALSE;
											}
										else
											{	/* Rgc/rgccompile.scm 404 */
												bool_t BgL_test2446z00_3845;

												{	/* Rgc/rgccompile.scm 404 */
													obj_t BgL_vectorz00_2583;
													long BgL_kz00_2584;

													BgL_vectorz00_2583 =
														BGl_compilezd2memberzd2vectorz00zz__rgc_compilez00;
													BgL_kz00_2584 = (long) CINT(BgL_iz00_1579);
													BgL_test2446z00_3845 =
														CBOOL(VECTOR_REF(BgL_vectorz00_2583,
															BgL_kz00_2584));
												}
												if (BgL_test2446z00_3845)
													{	/* Rgc/rgccompile.scm 404 */
														BgL_startz00_2649 = BgL_iz00_1579;
													}
												else
													{
														obj_t BgL_iz00_3849;

														BgL_iz00_3849 =
															ADDFX(BgL_iz00_1579, BINT(((long) 1)));
														BgL_iz00_1579 = BgL_iz00_3849;
														goto BgL_zc3z04anonymousza31527ze3z87_1580;
													}
											}
									}
									if (CBOOL(BgL_startz00_2649))
										{	/* Rgc/rgccompile.scm 418 */
											long BgL_arg1537z00_2650;

											{	/* Rgc/rgccompile.scm 418 */
												long BgL_tmpz00_3854;

												{	/* Rgc/rgccompile.scm 418 */
													obj_t BgL_tmpz00_3855;

													BgL_iz00_1585 = BgL_startz00_2649;
													{
														obj_t BgL_iz00_1588;

														BgL_iz00_1588 = BgL_iz00_1585;
													BgL_zc3z04anonymousza31532ze3z87_1589:
														if (
															((long) CINT(BgL_iz00_1588) ==
																(long) CINT(BgL_maxz00_1549)))
															{	/* Rgc/rgccompile.scm 410 */
																BgL_tmpz00_3855 = BgL_maxz00_1549;
															}
														else
															{	/* Rgc/rgccompile.scm 411 */
																bool_t BgL_test2449z00_3860;

																{	/* Rgc/rgccompile.scm 411 */
																	obj_t BgL_vectorz00_2590;
																	long BgL_kz00_2591;

																	BgL_vectorz00_2590 =
																		BGl_compilezd2memberzd2vectorz00zz__rgc_compilez00;
																	BgL_kz00_2591 = (long) CINT(BgL_iz00_1588);
																	BgL_test2449z00_3860 =
																		CBOOL(VECTOR_REF(BgL_vectorz00_2590,
																			BgL_kz00_2591));
																}
																if (BgL_test2449z00_3860)
																	{
																		obj_t BgL_iz00_3864;

																		BgL_iz00_3864 =
																			ADDFX(BgL_iz00_1588, BINT(((long) 1)));
																		BgL_iz00_1588 = BgL_iz00_3864;
																		goto BgL_zc3z04anonymousza31532ze3z87_1589;
																	}
																else
																	{	/* Rgc/rgccompile.scm 411 */
																		BgL_tmpz00_3855 = BgL_iz00_1588;
																	}
															}
													}
													BgL_tmpz00_3854 = (long) CINT(BgL_tmpz00_3855);
												}
												BgL_arg1537z00_2650 = (BgL_tmpz00_3854 - ((long) 1));
											}
											BgL_rangez00_2648 =
												MAKE_YOUNG_PAIR(BgL_startz00_2649,
												BINT(BgL_arg1537z00_2650));
										}
									else
										{	/* Rgc/rgccompile.scm 416 */
											BgL_rangez00_2648 = BgL_maxz00_1549;
										}
								}
								if (PAIRP(BgL_rangez00_2648))
									{	/* Rgc/rgccompile.scm 428 */
										long BgL_arg1523z00_2656;
										obj_t BgL_arg1524z00_2657;

										BgL_arg1523z00_2656 =
											((long) CINT(CDR(BgL_rangez00_2648)) + ((long) 1));
										BgL_arg1524z00_2657 =
											MAKE_YOUNG_PAIR(BgL_rangez00_2648, BgL_rangesz00_2643);
										{
											obj_t BgL_rangesz00_3879;
											obj_t BgL_iz00_3877;

											BgL_iz00_3877 = BINT(BgL_arg1523z00_2656);
											BgL_rangesz00_3879 = BgL_arg1524z00_2657;
											BgL_rangesz00_2643 = BgL_rangesz00_3879;
											BgL_iz00_2642 = BgL_iz00_3877;
											goto BgL_loopz00_2641;
										}
									}
								else
									{
										obj_t BgL_iz00_3880;

										BgL_iz00_3880 = BgL_rangez00_2648;
										BgL_iz00_2642 = BgL_iz00_3880;
										goto BgL_loopz00_2641;
									}
							}
					}
				}
			}
		}

	}



/* char-ranges->test */
	obj_t BGl_charzd2rangeszd2ze3testze3zz__rgc_compilez00(obj_t
		BgL_currentz00_33, obj_t BgL_rangesz00_34)
	{
		{	/* Rgc/rgccompile.scm 434 */
			{	/* Rgc/rgccompile.scm 443 */
				obj_t BgL_arg1541z00_1603;

				{	/* Rgc/rgccompile.scm 443 */
					obj_t BgL_arg1542z00_1604;

					if (NULLP(BgL_rangesz00_34))
						{	/* Rgc/rgccompile.scm 443 */
							BgL_arg1542z00_1604 = BNIL;
						}
					else
						{	/* Rgc/rgccompile.scm 443 */
							obj_t BgL_head1133z00_1607;

							{	/* Rgc/rgccompile.scm 443 */
								obj_t BgL_arg1552z00_1619;

								BgL_arg1552z00_1619 =
									BGl_charzd2rangezd2ze3testze70z04zz__rgc_compilez00
									(BgL_currentz00_33, CAR(BgL_rangesz00_34));
								{	/* Rgc/rgccompile.scm 443 */
									obj_t BgL_res2185z00_2669;

									BgL_res2185z00_2669 =
										MAKE_YOUNG_PAIR(BgL_arg1552z00_1619, BNIL);
									BgL_head1133z00_1607 = BgL_res2185z00_2669;
								}
							}
							{	/* Rgc/rgccompile.scm 443 */
								obj_t BgL_g1136z00_1608;

								BgL_g1136z00_1608 = CDR(BgL_rangesz00_34);
								{
									obj_t BgL_l1131z00_2692;
									obj_t BgL_tail1134z00_2693;

									BgL_l1131z00_2692 = BgL_g1136z00_1608;
									BgL_tail1134z00_2693 = BgL_head1133z00_1607;
								BgL_zc3z04anonymousza31544ze3z87_2691:
									if (NULLP(BgL_l1131z00_2692))
										{	/* Rgc/rgccompile.scm 443 */
											BgL_arg1542z00_1604 = BgL_head1133z00_1607;
										}
									else
										{	/* Rgc/rgccompile.scm 443 */
											obj_t BgL_newtail1135z00_2700;

											{	/* Rgc/rgccompile.scm 443 */
												obj_t BgL_arg1547z00_2701;

												{	/* Rgc/rgccompile.scm 443 */
													obj_t BgL_arg1551z00_2702;

													BgL_arg1551z00_2702 =
														CAR(((obj_t) BgL_l1131z00_2692));
													BgL_arg1547z00_2701 =
														BGl_charzd2rangezd2ze3testze70z04zz__rgc_compilez00
														(BgL_currentz00_33, BgL_arg1551z00_2702);
												}
												{	/* Rgc/rgccompile.scm 443 */
													obj_t BgL_res2191z00_2706;

													BgL_res2191z00_2706 =
														MAKE_YOUNG_PAIR(BgL_arg1547z00_2701, BNIL);
													BgL_newtail1135z00_2700 = BgL_res2191z00_2706;
												}
											}
											SET_CDR(BgL_tail1134z00_2693, BgL_newtail1135z00_2700);
											{	/* Rgc/rgccompile.scm 443 */
												obj_t BgL_arg1546z00_2703;

												BgL_arg1546z00_2703 = CDR(((obj_t) BgL_l1131z00_2692));
												{
													obj_t BgL_tail1134z00_3898;
													obj_t BgL_l1131z00_3897;

													BgL_l1131z00_3897 = BgL_arg1546z00_2703;
													BgL_tail1134z00_3898 = BgL_newtail1135z00_2700;
													BgL_tail1134z00_2693 = BgL_tail1134z00_3898;
													BgL_l1131z00_2692 = BgL_l1131z00_3897;
													goto BgL_zc3z04anonymousza31544ze3z87_2691;
												}
											}
										}
								}
							}
						}
					BgL_arg1541z00_1603 =
						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_arg1542z00_1604,
						BNIL);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol2336z00zz__rgc_compilez00,
					BgL_arg1541z00_1603);
			}
		}

	}



/* char-range->test~0 */
	obj_t BGl_charzd2rangezd2ze3testze70z04zz__rgc_compilez00(obj_t
		BgL_currentz00_3155, obj_t BgL_rangez00_1621)
	{
		{	/* Rgc/rgccompile.scm 441 */
			{	/* Rgc/rgccompile.scm 437 */
				obj_t BgL_startz00_1623;
				obj_t BgL_stopz00_1624;

				BgL_startz00_1623 = CAR(((obj_t) BgL_rangez00_1621));
				BgL_stopz00_1624 = CDR(((obj_t) BgL_rangez00_1621));
				if (((long) CINT(BgL_startz00_1623) == (long) CINT(BgL_stopz00_1624)))
					{	/* Rgc/rgccompile.scm 440 */
						obj_t BgL_arg1556z00_1626;

						{	/* Rgc/rgccompile.scm 440 */
							obj_t BgL_arg1557z00_1627;

							BgL_arg1557z00_1627 = MAKE_YOUNG_PAIR(BgL_startz00_1623, BNIL);
							BgL_arg1556z00_1626 =
								MAKE_YOUNG_PAIR(BgL_currentz00_3155, BgL_arg1557z00_1627);
						}
						return
							MAKE_YOUNG_PAIR(BGl_symbol2305z00zz__rgc_compilez00,
							BgL_arg1556z00_1626);
					}
				else
					{	/* Rgc/rgccompile.scm 441 */
						obj_t BgL_arg1558z00_1628;

						{	/* Rgc/rgccompile.scm 441 */
							obj_t BgL_arg1560z00_1629;
							obj_t BgL_arg1561z00_1630;

							{	/* Rgc/rgccompile.scm 441 */
								obj_t BgL_arg1562z00_1631;

								{	/* Rgc/rgccompile.scm 441 */
									obj_t BgL_arg1563z00_1632;

									BgL_arg1563z00_1632 =
										MAKE_YOUNG_PAIR(BgL_startz00_1623, BNIL);
									BgL_arg1562z00_1631 =
										MAKE_YOUNG_PAIR(BgL_currentz00_3155, BgL_arg1563z00_1632);
								}
								BgL_arg1560z00_1629 =
									MAKE_YOUNG_PAIR(BGl_symbol2338z00zz__rgc_compilez00,
									BgL_arg1562z00_1631);
							}
							{	/* Rgc/rgccompile.scm 441 */
								obj_t BgL_arg1564z00_1633;

								{	/* Rgc/rgccompile.scm 441 */
									obj_t BgL_arg1565z00_1634;

									{	/* Rgc/rgccompile.scm 441 */
										obj_t BgL_arg1566z00_1635;

										BgL_arg1566z00_1635 =
											MAKE_YOUNG_PAIR(BgL_stopz00_1624, BNIL);
										BgL_arg1565z00_1634 =
											MAKE_YOUNG_PAIR(BgL_currentz00_3155, BgL_arg1566z00_1635);
									}
									BgL_arg1564z00_1633 =
										MAKE_YOUNG_PAIR(BGl_symbol2348z00zz__rgc_compilez00,
										BgL_arg1565z00_1634);
								}
								BgL_arg1561z00_1630 =
									MAKE_YOUNG_PAIR(BgL_arg1564z00_1633, BNIL);
							}
							BgL_arg1558z00_1628 =
								MAKE_YOUNG_PAIR(BgL_arg1560z00_1629, BgL_arg1561z00_1630);
						}
						return
							MAKE_YOUNG_PAIR(BGl_symbol2342z00zz__rgc_compilez00,
							BgL_arg1558z00_1628);
					}
			}
		}

	}



/* compile-member-test */
	obj_t BGl_compilezd2memberzd2testz00zz__rgc_compilez00(obj_t
		BgL_currentz00_35, obj_t BgL_charsz00_36)
	{
		{	/* Rgc/rgccompile.scm 450 */
			{

				if (PAIRP(BgL_charsz00_36))
					{	/* Rgc/rgccompile.scm 451 */
						if (NULLP(CDR(BgL_charsz00_36)))
							{	/* Rgc/rgccompile.scm 451 */
								obj_t BgL_arg1570z00_1644;

								BgL_arg1570z00_1644 = CAR(BgL_charsz00_36);
								{	/* Rgc/rgccompile.scm 453 */
									obj_t BgL_arg1574z00_2720;

									{	/* Rgc/rgccompile.scm 453 */
										obj_t BgL_arg1575z00_2721;

										BgL_arg1575z00_2721 =
											MAKE_YOUNG_PAIR(BgL_arg1570z00_1644, BNIL);
										BgL_arg1574z00_2720 =
											MAKE_YOUNG_PAIR(BgL_currentz00_35, BgL_arg1575z00_2721);
									}
									return
										MAKE_YOUNG_PAIR(BGl_symbol2305z00zz__rgc_compilez00,
										BgL_arg1574z00_2720);
								}
							}
						else
							{	/* Rgc/rgccompile.scm 451 */
							BgL_tagzd2102zd2_1639:
								{	/* Rgc/rgccompile.scm 455 */
									obj_t BgL_rangesz00_1648;

									BgL_rangesz00_1648 =
										BGl_charszd2ze3charzd2rangesze3zz__rgc_compilez00
										(BgL_charsz00_36);
									if ((bgl_list_length(BgL_rangesz00_1648) >
											(bgl_list_length(BgL_charsz00_36) / ((long) 3))))
										{	/* Rgc/rgccompile.scm 457 */
											obj_t BgL_arg1582z00_1653;

											{	/* Rgc/rgccompile.scm 457 */
												obj_t BgL_arg1583z00_1654;

												{	/* Rgc/rgccompile.scm 457 */
													obj_t BgL_arg1584z00_1655;

													{	/* Rgc/rgccompile.scm 457 */
														obj_t BgL_arg1587z00_1656;

														BgL_arg1587z00_1656 =
															MAKE_YOUNG_PAIR(BgL_charsz00_36, BNIL);
														BgL_arg1584z00_1655 =
															MAKE_YOUNG_PAIR
															(BGl_symbol2350z00zz__rgc_compilez00,
															BgL_arg1587z00_1656);
													}
													BgL_arg1583z00_1654 =
														MAKE_YOUNG_PAIR(BgL_arg1584z00_1655, BNIL);
												}
												BgL_arg1582z00_1653 =
													MAKE_YOUNG_PAIR(BgL_currentz00_35,
													BgL_arg1583z00_1654);
											}
											return
												MAKE_YOUNG_PAIR(BGl_symbol2352z00zz__rgc_compilez00,
												BgL_arg1582z00_1653);
										}
									else
										{	/* Rgc/rgccompile.scm 456 */
											return
												BGl_charzd2rangeszd2ze3testze3zz__rgc_compilez00
												(BgL_currentz00_35, BgL_rangesz00_1648);
										}
								}
							}
					}
				else
					{	/* Rgc/rgccompile.scm 451 */
						goto BgL_tagzd2102zd2_1639;
					}
			}
		}

	}



/* compile-submatches */
	obj_t BGl_compilezd2submatcheszd2zz__rgc_compilez00(obj_t BgL_currentz00_37,
		obj_t BgL_submatchesz00_38, obj_t BgL_positionsz00_39,
		obj_t BgL_positionszd2tozd2charz00_40)
	{
		{	/* Rgc/rgccompile.scm 463 */
			{
				obj_t BgL_cellz00_1847;
				obj_t BgL_smz00_1848;

				{	/* Rgc/rgccompile.scm 479 */
					obj_t BgL_g1049z00_1662;

					BgL_g1049z00_1662 =
						BGl_rgcsetzd2ze3listz31zz__rgc_setz00(BgL_positionsz00_39);
					{
						obj_t BgL_positionsz00_1665;
						obj_t BgL_charzd2submatcheszd2_1666;

						BgL_positionsz00_1665 = BgL_g1049z00_1662;
						BgL_charzd2submatcheszd2_1666 = BNIL;
					BgL_zc3z04anonymousza31593ze3z87_1667:
						if (NULLP(BgL_positionsz00_1665))
							{	/* Rgc/rgccompile.scm 482 */
								obj_t BgL_fun1143z00_1669;

								{	/* Rgc/rgccompile.scm 482 */
									obj_t BgL_zc3z04anonymousza31603ze3z87_3151;

									{
										int BgL_tmpz00_3945;

										BgL_tmpz00_3945 = (int) (((long) 1));
										BgL_zc3z04anonymousza31603ze3z87_3151 =
											MAKE_EL_PROCEDURE(BgL_tmpz00_3945);
									}
									PROCEDURE_EL_SET(BgL_zc3z04anonymousza31603ze3z87_3151,
										(int) (((long) 0)), BgL_currentz00_37);
									BgL_fun1143z00_1669 = BgL_zc3z04anonymousza31603ze3z87_3151;
								}
								if (NULLP(BgL_charzd2submatcheszd2_1666))
									{	/* Rgc/rgccompile.scm 482 */
										return BNIL;
									}
								else
									{	/* Rgc/rgccompile.scm 482 */
										obj_t BgL_head1139z00_1672;

										{	/* Rgc/rgccompile.scm 482 */
											obj_t BgL_res2222z00_2802;

											BgL_res2222z00_2802 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BgL_head1139z00_1672 = BgL_res2222z00_2802;
										}
										{
											obj_t BgL_l1137z00_2826;
											obj_t BgL_tail1140z00_2827;

											BgL_l1137z00_2826 = BgL_charzd2submatcheszd2_1666;
											BgL_tail1140z00_2827 = BgL_head1139z00_1672;
										BgL_zc3z04anonymousza31596ze3z87_2825:
											if (NULLP(BgL_l1137z00_2826))
												{	/* Rgc/rgccompile.scm 482 */
													return CDR(BgL_head1139z00_1672);
												}
											else
												{	/* Rgc/rgccompile.scm 482 */
													obj_t BgL_newtail1141z00_2834;

													{	/* Rgc/rgccompile.scm 482 */
														obj_t BgL_arg1599z00_2835;

														{	/* Rgc/rgccompile.scm 482 */
															obj_t BgL_arg1602z00_2836;

															BgL_arg1602z00_2836 =
																CAR(((obj_t) BgL_l1137z00_2826));
															BgL_arg1599z00_2835 =
																BGl_z62zc3z04anonymousza31603ze3ze5zz__rgc_compilez00
																(BgL_fun1143z00_1669, BgL_arg1602z00_2836);
														}
														{	/* Rgc/rgccompile.scm 482 */
															obj_t BgL_res2228z00_2841;

															BgL_res2228z00_2841 =
																MAKE_YOUNG_PAIR(BgL_arg1599z00_2835, BNIL);
															BgL_newtail1141z00_2834 = BgL_res2228z00_2841;
														}
													}
													SET_CDR(BgL_tail1140z00_2827,
														BgL_newtail1141z00_2834);
													{	/* Rgc/rgccompile.scm 482 */
														obj_t BgL_arg1598z00_2837;

														BgL_arg1598z00_2837 =
															CDR(((obj_t) BgL_l1137z00_2826));
														{
															obj_t BgL_tail1140z00_3967;
															obj_t BgL_l1137z00_3966;

															BgL_l1137z00_3966 = BgL_arg1598z00_2837;
															BgL_tail1140z00_3967 = BgL_newtail1141z00_2834;
															BgL_tail1140z00_2827 = BgL_tail1140z00_3967;
															BgL_l1137z00_2826 = BgL_l1137z00_3966;
															goto BgL_zc3z04anonymousza31596ze3z87_2825;
														}
													}
												}
										}
									}
							}
						else
							{	/* Rgc/rgccompile.scm 507 */
								obj_t BgL_posz00_1833;

								BgL_posz00_1833 = CAR(((obj_t) BgL_positionsz00_1665));
								{	/* Rgc/rgccompile.scm 507 */
									obj_t BgL_charz00_1834;

									{	/* Rgc/rgccompile.scm 508 */
										long BgL_kz00_2846;

										BgL_kz00_2846 = (long) CINT(BgL_posz00_1833);
										BgL_charz00_1834 =
											VECTOR_REF(
											((obj_t) BgL_positionszd2tozd2charz00_40), BgL_kz00_2846);
									}
									{	/* Rgc/rgccompile.scm 508 */
										obj_t BgL_cellz00_1835;

										{	/* Rgc/rgccompile.scm 509 */
											long BgL_kz00_2848;

											BgL_kz00_2848 = (long) CINT(BgL_posz00_1833);
											BgL_cellz00_1835 =
												VECTOR_REF(
												((obj_t) BgL_submatchesz00_38), BgL_kz00_2848);
										}
										{	/* Rgc/rgccompile.scm 509 */

											if (NULLP(BgL_cellz00_1835))
												{	/* Rgc/rgccompile.scm 511 */
													obj_t BgL_arg1745z00_1837;

													BgL_arg1745z00_1837 =
														CDR(((obj_t) BgL_positionsz00_1665));
													{
														obj_t BgL_positionsz00_3980;

														BgL_positionsz00_3980 = BgL_arg1745z00_1837;
														BgL_positionsz00_1665 = BgL_positionsz00_3980;
														goto BgL_zc3z04anonymousza31593ze3z87_1667;
													}
												}
											else
												{	/* Rgc/rgccompile.scm 513 */
													obj_t BgL_oldz00_1838;

													BgL_cellz00_1847 = BgL_cellz00_1835;
													BgL_smz00_1848 = BgL_charzd2submatcheszd2_1666;
													{
														obj_t BgL_smz00_1851;

														BgL_smz00_1851 = BgL_smz00_1848;
													BgL_zc3z04anonymousza31755ze3z87_1852:
														if (NULLP(BgL_smz00_1851))
															{	/* Rgc/rgccompile.scm 468 */
																BgL_oldz00_1838 = BNIL;
															}
														else
															{	/* Rgc/rgccompile.scm 470 */
																bool_t BgL_test2462z00_3983;

																{	/* Rgc/rgccompile.scm 470 */
																	obj_t BgL_auxz00_3984;

																	{	/* Rgc/rgccompile.scm 470 */
																		obj_t BgL_pairz00_2724;

																		BgL_pairz00_2724 =
																			CAR(((obj_t) BgL_smz00_1851));
																		BgL_auxz00_3984 = CDR(BgL_pairz00_2724);
																	}
																	BgL_test2462z00_3983 =
																		BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																		(BgL_cellz00_1847, BgL_auxz00_3984);
																}
																if (BgL_test2462z00_3983)
																	{	/* Rgc/rgccompile.scm 470 */
																		BgL_oldz00_1838 =
																			CAR(((obj_t) BgL_smz00_1851));
																	}
																else
																	{
																		obj_t BgL_smz00_3991;

																		BgL_smz00_3991 =
																			CDR(((obj_t) BgL_smz00_1851));
																		BgL_smz00_1851 = BgL_smz00_3991;
																		goto BgL_zc3z04anonymousza31755ze3z87_1852;
																	}
															}
													}
													if (PAIRP(BgL_oldz00_1838))
														{	/* Rgc/rgccompile.scm 514 */
															{	/* Rgc/rgccompile.scm 476 */
																obj_t BgL_arg1765z00_2852;

																BgL_arg1765z00_2852 =
																	MAKE_YOUNG_PAIR(BgL_charz00_1834,
																	CAR(BgL_oldz00_1838));
																SET_CAR(BgL_oldz00_1838, BgL_arg1765z00_2852);
															}
															BgL_oldz00_1838;
															{	/* Rgc/rgccompile.scm 517 */
																obj_t BgL_arg1747z00_1840;

																BgL_arg1747z00_1840 =
																	CDR(((obj_t) BgL_positionsz00_1665));
																{
																	obj_t BgL_positionsz00_4001;

																	BgL_positionsz00_4001 = BgL_arg1747z00_1840;
																	BgL_positionsz00_1665 = BgL_positionsz00_4001;
																	goto BgL_zc3z04anonymousza31593ze3z87_1667;
																}
															}
														}
													else
														{	/* Rgc/rgccompile.scm 519 */
															obj_t BgL_arg1748z00_1841;
															obj_t BgL_arg1750z00_1842;

															BgL_arg1748z00_1841 =
																CDR(((obj_t) BgL_positionsz00_1665));
															{	/* Rgc/rgccompile.scm 520 */
																obj_t BgL_arg1751z00_1843;

																{	/* Rgc/rgccompile.scm 520 */
																	obj_t BgL_arg1752z00_1844;

																	{	/* Rgc/rgccompile.scm 520 */
																		obj_t BgL_list1753z00_1845;

																		BgL_list1753z00_1845 =
																			MAKE_YOUNG_PAIR(BgL_charz00_1834, BNIL);
																		BgL_arg1752z00_1844 = BgL_list1753z00_1845;
																	}
																	BgL_arg1751z00_1843 =
																		MAKE_YOUNG_PAIR(BgL_arg1752z00_1844,
																		BgL_cellz00_1835);
																}
																BgL_arg1750z00_1842 =
																	MAKE_YOUNG_PAIR(BgL_arg1751z00_1843,
																	BgL_charzd2submatcheszd2_1666);
															}
															{
																obj_t BgL_charzd2submatcheszd2_4008;
																obj_t BgL_positionsz00_4007;

																BgL_positionsz00_4007 = BgL_arg1748z00_1841;
																BgL_charzd2submatcheszd2_4008 =
																	BgL_arg1750z00_1842;
																BgL_charzd2submatcheszd2_1666 =
																	BgL_charzd2submatcheszd2_4008;
																BgL_positionsz00_1665 = BgL_positionsz00_4007;
																goto BgL_zc3z04anonymousza31593ze3z87_1667;
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



/* &<@anonymous:1603> */
	obj_t BGl_z62zc3z04anonymousza31603ze3ze5zz__rgc_compilez00(obj_t
		BgL_envz00_3152, obj_t BgL_ezd2113zd2_3154)
	{
		{	/* Rgc/rgccompile.scm 482 */
			{	/* Rgc/rgccompile.scm 482 */
				obj_t BgL_currentz00_3153;

				BgL_currentz00_3153 =
					((obj_t) PROCEDURE_EL_REF(BgL_envz00_3152, (int) (((long) 0))));
				{
					obj_t BgL_charz00_3214;
					obj_t BgL_mz00_3215;
					obj_t BgL_smz00_3216;
					obj_t BgL_charz00_3194;
					obj_t BgL_sz00_3195;
					obj_t BgL_mz00_3196;
					obj_t BgL_smz00_3197;
					obj_t BgL_charz00_3162;
					obj_t BgL_sz00_3163;
					obj_t BgL_mz00_3164;
					obj_t BgL_smz00_3165;
					obj_t BgL_tsz00_3166;
					obj_t BgL_tsmz00_3167;

					if (PAIRP(BgL_ezd2113zd2_3154))
						{	/* Rgc/rgccompile.scm 482 */
							obj_t BgL_cdrzd2125zd2_3227;

							BgL_cdrzd2125zd2_3227 = CDR(BgL_ezd2113zd2_3154);
							if (PAIRP(BgL_cdrzd2125zd2_3227))
								{	/* Rgc/rgccompile.scm 482 */
									obj_t BgL_cdrzd2130zd2_3228;

									BgL_cdrzd2130zd2_3228 = CDR(BgL_cdrzd2125zd2_3227);
									if (NULLP(CAR(BgL_cdrzd2125zd2_3227)))
										{	/* Rgc/rgccompile.scm 482 */
											if (PAIRP(BgL_cdrzd2130zd2_3228))
												{	/* Rgc/rgccompile.scm 482 */
													obj_t BgL_carzd2133zd2_3229;

													BgL_carzd2133zd2_3229 = CAR(BgL_cdrzd2130zd2_3228);
													if (PAIRP(BgL_carzd2133zd2_3229))
														{	/* Rgc/rgccompile.scm 482 */
															if (NULLP(CDR(BgL_cdrzd2130zd2_3228)))
																{	/* Rgc/rgccompile.scm 482 */
																	BgL_charz00_3214 = CAR(BgL_ezd2113zd2_3154);
																	BgL_mz00_3215 = CAR(BgL_carzd2133zd2_3229);
																	BgL_smz00_3216 = CDR(BgL_carzd2133zd2_3229);
																	{	/* Rgc/rgccompile.scm 484 */
																		obj_t BgL_arg1672z00_3217;

																		{	/* Rgc/rgccompile.scm 484 */
																			obj_t BgL_arg1675z00_3218;
																			obj_t BgL_arg1683z00_3219;

																			BgL_arg1675z00_3218 =
																				BGl_compilezd2memberzd2testz00zz__rgc_compilez00
																				(BgL_currentz00_3153, BgL_charz00_3214);
																			{	/* Rgc/rgccompile.scm 485 */
																				obj_t BgL_arg1684z00_3220;

																				{	/* Rgc/rgccompile.scm 485 */
																					obj_t BgL_arg1685z00_3221;

																					{	/* Rgc/rgccompile.scm 485 */
																						obj_t BgL_arg1686z00_3222;

																						{	/* Rgc/rgccompile.scm 485 */
																							obj_t BgL_arg1687z00_3223;

																							{	/* Rgc/rgccompile.scm 485 */
																								obj_t BgL_arg1688z00_3224;

																								{	/* Rgc/rgccompile.scm 485 */
																									obj_t BgL_arg1691z00_3225;

																									{	/* Rgc/rgccompile.scm 485 */
																										obj_t BgL_arg1692z00_3226;

																										BgL_arg1692z00_3226 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol2293z00zz__rgc_compilez00,
																											BNIL);
																										BgL_arg1691z00_3225 =
																											MAKE_YOUNG_PAIR(BINT((
																													(long) 1)),
																											BgL_arg1692z00_3226);
																									}
																									BgL_arg1688z00_3224 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol2330z00zz__rgc_compilez00,
																										BgL_arg1691z00_3225);
																								}
																								BgL_arg1687z00_3223 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1688z00_3224, BNIL);
																							}
																							BgL_arg1686z00_3222 =
																								MAKE_YOUNG_PAIR(BgL_smz00_3216,
																								BgL_arg1687z00_3223);
																						}
																						BgL_arg1685z00_3221 =
																							MAKE_YOUNG_PAIR(BgL_mz00_3215,
																							BgL_arg1686z00_3222);
																					}
																					BgL_arg1684z00_3220 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol2358z00zz__rgc_compilez00,
																						BgL_arg1685z00_3221);
																				}
																				BgL_arg1683z00_3219 =
																					MAKE_YOUNG_PAIR(BgL_arg1684z00_3220,
																					BNIL);
																			}
																			BgL_arg1672z00_3217 =
																				MAKE_YOUNG_PAIR(BgL_arg1675z00_3218,
																				BgL_arg1683z00_3219);
																		}
																		return
																			MAKE_YOUNG_PAIR
																			(BGl_symbol2315z00zz__rgc_compilez00,
																			BgL_arg1672z00_3217);
																	}
																}
															else
																{	/* Rgc/rgccompile.scm 482 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_string2360z00zz__rgc_compilez00,
																		BGl_string2361z00zz__rgc_compilez00,
																		BgL_ezd2113zd2_3154);
																}
														}
													else
														{	/* Rgc/rgccompile.scm 482 */
															return
																BGl_errorz00zz__errorz00
																(BGl_string2360z00zz__rgc_compilez00,
																BGl_string2361z00zz__rgc_compilez00,
																BgL_ezd2113zd2_3154);
														}
												}
											else
												{	/* Rgc/rgccompile.scm 482 */
													obj_t BgL_carzd2218zd2_3230;

													BgL_carzd2218zd2_3230 =
														CAR(((obj_t) BgL_cdrzd2125zd2_3227));
													if (PAIRP(BgL_carzd2218zd2_3230))
														{	/* Rgc/rgccompile.scm 482 */
															obj_t BgL_carzd2223zd2_3231;

															BgL_carzd2223zd2_3231 =
																CAR(BgL_carzd2218zd2_3230);
															if (PAIRP(BgL_carzd2223zd2_3231))
																{	/* Rgc/rgccompile.scm 482 */
																	obj_t BgL_cdrzd2229zd2_3232;

																	BgL_cdrzd2229zd2_3232 =
																		CDR(BgL_carzd2223zd2_3231);
																	if (PAIRP(BgL_cdrzd2229zd2_3232))
																		{	/* Rgc/rgccompile.scm 482 */
																			obj_t BgL_cdrzd2234zd2_3233;

																			BgL_cdrzd2234zd2_3233 =
																				CDR(BgL_cdrzd2229zd2_3232);
																			if (PAIRP(BgL_cdrzd2234zd2_3233))
																				{	/* Rgc/rgccompile.scm 482 */
																					if (NULLP(CDR(BgL_cdrzd2234zd2_3233)))
																						{	/* Rgc/rgccompile.scm 482 */
																							if (NULLP(CDR
																									(BgL_carzd2218zd2_3230)))
																								{	/* Rgc/rgccompile.scm 482 */
																									if (NULLP(CDR(
																												((obj_t)
																													BgL_cdrzd2125zd2_3227))))
																										{	/* Rgc/rgccompile.scm 482 */
																											BgL_charz00_3194 =
																												CAR
																												(BgL_ezd2113zd2_3154);
																											BgL_sz00_3195 =
																												CAR
																												(BgL_carzd2223zd2_3231);
																											BgL_mz00_3196 =
																												CAR
																												(BgL_cdrzd2229zd2_3232);
																											BgL_smz00_3197 =
																												CAR
																												(BgL_cdrzd2234zd2_3233);
																										BgL_tagzd2110zd2_3160:
																											{	/* Rgc/rgccompile.scm 487 */
																												obj_t
																													BgL_arg1693z00_3198;
																												{	/* Rgc/rgccompile.scm 487 */
																													obj_t
																														BgL_arg1695z00_3199;
																													obj_t
																														BgL_arg1696z00_3200;
																													BgL_arg1695z00_3199 =
																														BGl_compilezd2memberzd2testz00zz__rgc_compilez00
																														(BgL_currentz00_3153,
																														BgL_charz00_3194);
																													{	/* Rgc/rgccompile.scm 488 */
																														obj_t
																															BgL_arg1697z00_3201;
																														if (CBOOL
																															(BgL_sz00_3195))
																															{	/* Rgc/rgccompile.scm 491 */
																																obj_t
																																	BgL_arg1698z00_3202;
																																{	/* Rgc/rgccompile.scm 491 */
																																	obj_t
																																		BgL_arg1699z00_3203;
																																	{	/* Rgc/rgccompile.scm 491 */
																																		obj_t
																																			BgL_arg1700z00_3204;
																																		{	/* Rgc/rgccompile.scm 491 */
																																			obj_t
																																				BgL_arg1701z00_3205;
																																			{	/* Rgc/rgccompile.scm 491 */
																																				obj_t
																																					BgL_arg1702z00_3206;
																																				{	/* Rgc/rgccompile.scm 491 */
																																					obj_t
																																						BgL_arg1704z00_3207;
																																					BgL_arg1704z00_3207
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2293z00zz__rgc_compilez00,
																																						BNIL);
																																					BgL_arg1702z00_3206
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BINT
																																						(((long) 1)), BgL_arg1704z00_3207);
																																				}
																																				BgL_arg1701z00_3205
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2330z00zz__rgc_compilez00,
																																					BgL_arg1702z00_3206);
																																			}
																																			BgL_arg1700z00_3204
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1701z00_3205,
																																				BNIL);
																																		}
																																		BgL_arg1699z00_3203
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_smz00_3197,
																																			BgL_arg1700z00_3204);
																																	}
																																	BgL_arg1698z00_3202
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_mz00_3196,
																																		BgL_arg1699z00_3203);
																																}
																																BgL_arg1697z00_3201
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_symbol2354z00zz__rgc_compilez00,
																																	BgL_arg1698z00_3202);
																															}
																														else
																															{	/* Rgc/rgccompile.scm 492 */
																																obj_t
																																	BgL_arg1707z00_3208;
																																{	/* Rgc/rgccompile.scm 492 */
																																	obj_t
																																		BgL_arg1708z00_3209;
																																	{	/* Rgc/rgccompile.scm 492 */
																																		obj_t
																																			BgL_arg1709z00_3210;
																																		{	/* Rgc/rgccompile.scm 492 */
																																			obj_t
																																				BgL_arg1710z00_3211;
																																			{	/* Rgc/rgccompile.scm 492 */
																																				obj_t
																																					BgL_arg1711z00_3212;
																																				{	/* Rgc/rgccompile.scm 492 */
																																					obj_t
																																						BgL_arg1712z00_3213;
																																					BgL_arg1712z00_3213
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2293z00zz__rgc_compilez00,
																																						BNIL);
																																					BgL_arg1711z00_3212
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BINT
																																						(((long) 1)), BgL_arg1712z00_3213);
																																				}
																																				BgL_arg1710z00_3211
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol2330z00zz__rgc_compilez00,
																																					BgL_arg1711z00_3212);
																																			}
																																			BgL_arg1709z00_3210
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1710z00_3211,
																																				BNIL);
																																		}
																																		BgL_arg1708z00_3209
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_smz00_3197,
																																			BgL_arg1709z00_3210);
																																	}
																																	BgL_arg1707z00_3208
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_mz00_3196,
																																		BgL_arg1708z00_3209);
																																}
																																BgL_arg1697z00_3201
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_symbol2356z00zz__rgc_compilez00,
																																	BgL_arg1707z00_3208);
																															}
																														BgL_arg1696z00_3200
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1697z00_3201,
																															BNIL);
																													}
																													BgL_arg1693z00_3198 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1695z00_3199,
																														BgL_arg1696z00_3200);
																												}
																												return
																													MAKE_YOUNG_PAIR
																													(BGl_symbol2315z00zz__rgc_compilez00,
																													BgL_arg1693z00_3198);
																											}
																										}
																									else
																										{	/* Rgc/rgccompile.scm 482 */
																											return
																												BGl_errorz00zz__errorz00
																												(BGl_string2360z00zz__rgc_compilez00,
																												BGl_string2361z00zz__rgc_compilez00,
																												BgL_ezd2113zd2_3154);
																										}
																								}
																							else
																								{	/* Rgc/rgccompile.scm 482 */
																									return
																										BGl_errorz00zz__errorz00
																										(BGl_string2360z00zz__rgc_compilez00,
																										BGl_string2361z00zz__rgc_compilez00,
																										BgL_ezd2113zd2_3154);
																								}
																						}
																					else
																						{	/* Rgc/rgccompile.scm 482 */
																							return
																								BGl_errorz00zz__errorz00
																								(BGl_string2360z00zz__rgc_compilez00,
																								BGl_string2361z00zz__rgc_compilez00,
																								BgL_ezd2113zd2_3154);
																						}
																				}
																			else
																				{	/* Rgc/rgccompile.scm 482 */
																					return
																						BGl_errorz00zz__errorz00
																						(BGl_string2360z00zz__rgc_compilez00,
																						BGl_string2361z00zz__rgc_compilez00,
																						BgL_ezd2113zd2_3154);
																				}
																		}
																	else
																		{	/* Rgc/rgccompile.scm 482 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_string2360z00zz__rgc_compilez00,
																				BGl_string2361z00zz__rgc_compilez00,
																				BgL_ezd2113zd2_3154);
																		}
																}
															else
																{	/* Rgc/rgccompile.scm 482 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_string2360z00zz__rgc_compilez00,
																		BGl_string2361z00zz__rgc_compilez00,
																		BgL_ezd2113zd2_3154);
																}
														}
													else
														{	/* Rgc/rgccompile.scm 482 */
															return
																BGl_errorz00zz__errorz00
																(BGl_string2360z00zz__rgc_compilez00,
																BGl_string2361z00zz__rgc_compilez00,
																BgL_ezd2113zd2_3154);
														}
												}
										}
									else
										{	/* Rgc/rgccompile.scm 482 */
											obj_t BgL_carzd2383zd2_3234;

											BgL_carzd2383zd2_3234 =
												CAR(((obj_t) BgL_cdrzd2125zd2_3227));
											if (PAIRP(BgL_carzd2383zd2_3234))
												{	/* Rgc/rgccompile.scm 482 */
													obj_t BgL_carzd2388zd2_3235;

													BgL_carzd2388zd2_3235 = CAR(BgL_carzd2383zd2_3234);
													if (PAIRP(BgL_carzd2388zd2_3235))
														{	/* Rgc/rgccompile.scm 482 */
															obj_t BgL_cdrzd2394zd2_3236;

															BgL_cdrzd2394zd2_3236 =
																CDR(BgL_carzd2388zd2_3235);
															if (PAIRP(BgL_cdrzd2394zd2_3236))
																{	/* Rgc/rgccompile.scm 482 */
																	obj_t BgL_cdrzd2399zd2_3237;

																	BgL_cdrzd2399zd2_3237 =
																		CDR(BgL_cdrzd2394zd2_3236);
																	if (PAIRP(BgL_cdrzd2399zd2_3237))
																		{	/* Rgc/rgccompile.scm 482 */
																			if (NULLP(CDR(BgL_cdrzd2399zd2_3237)))
																				{	/* Rgc/rgccompile.scm 482 */
																					if (NULLP(CDR(BgL_carzd2383zd2_3234)))
																						{	/* Rgc/rgccompile.scm 482 */
																							if (NULLP(CDR(
																										((obj_t)
																											BgL_cdrzd2125zd2_3227))))
																								{
																									obj_t BgL_smz00_4131;
																									obj_t BgL_mz00_4129;
																									obj_t BgL_sz00_4127;
																									obj_t BgL_charz00_4125;

																									BgL_charz00_4125 =
																										CAR(BgL_ezd2113zd2_3154);
																									BgL_sz00_4127 =
																										CAR(BgL_carzd2388zd2_3235);
																									BgL_mz00_4129 =
																										CAR(BgL_cdrzd2394zd2_3236);
																									BgL_smz00_4131 =
																										CAR(BgL_cdrzd2399zd2_3237);
																									BgL_smz00_3197 =
																										BgL_smz00_4131;
																									BgL_mz00_3196 = BgL_mz00_4129;
																									BgL_sz00_3195 = BgL_sz00_4127;
																									BgL_charz00_3194 =
																										BgL_charz00_4125;
																									goto BgL_tagzd2110zd2_3160;
																								}
																							else
																								{	/* Rgc/rgccompile.scm 482 */
																									obj_t BgL_cdrzd2435zd2_3239;

																									BgL_cdrzd2435zd2_3239 =
																										CDR(
																										((obj_t)
																											BgL_cdrzd2125zd2_3227));
																									{	/* Rgc/rgccompile.scm 482 */
																										obj_t BgL_carzd2442zd2_3240;

																										{	/* Rgc/rgccompile.scm 482 */
																											obj_t BgL_pairz00_3241;

																											BgL_pairz00_3241 =
																												CAR(
																												((obj_t)
																													BgL_cdrzd2125zd2_3227));
																											BgL_carzd2442zd2_3240 =
																												CAR(BgL_pairz00_3241);
																										}
																										{	/* Rgc/rgccompile.scm 482 */
																											obj_t
																												BgL_cdrzd2451zd2_3242;
																											BgL_cdrzd2451zd2_3242 =
																												CDR(((obj_t)
																													BgL_carzd2442zd2_3240));
																											if (PAIRP
																												(BgL_cdrzd2435zd2_3239))
																												{	/* Rgc/rgccompile.scm 482 */
																													obj_t
																														BgL_carzd2470zd2_3243;
																													BgL_carzd2470zd2_3243
																														=
																														CAR
																														(BgL_cdrzd2435zd2_3239);
																													if (PAIRP
																														(BgL_carzd2470zd2_3243))
																														{	/* Rgc/rgccompile.scm 482 */
																															if (NULLP(CDR
																																	(BgL_cdrzd2435zd2_3239)))
																																{	/* Rgc/rgccompile.scm 482 */
																																	obj_t
																																		BgL_arg1656z00_3244;
																																	obj_t
																																		BgL_arg1657z00_3245;
																																	obj_t
																																		BgL_arg1658z00_3246;
																																	obj_t
																																		BgL_arg1659z00_3247;
																																	obj_t
																																		BgL_arg1660z00_3248;
																																	obj_t
																																		BgL_arg1661z00_3249;
																																	BgL_arg1656z00_3244
																																		=
																																		CAR
																																		(BgL_ezd2113zd2_3154);
																																	BgL_arg1657z00_3245
																																		=
																																		CAR(((obj_t)
																																			BgL_carzd2442zd2_3240));
																																	BgL_arg1658z00_3246
																																		=
																																		CAR(((obj_t)
																																			BgL_cdrzd2451zd2_3242));
																																	{	/* Rgc/rgccompile.scm 482 */
																																		obj_t
																																			BgL_pairz00_3250;
																																		BgL_pairz00_3250
																																			=
																																			CDR((
																																				(obj_t)
																																				BgL_cdrzd2451zd2_3242));
																																		BgL_arg1659z00_3247
																																			=
																																			CAR
																																			(BgL_pairz00_3250);
																																	}
																																	BgL_arg1660z00_3248
																																		=
																																		CAR
																																		(BgL_carzd2470zd2_3243);
																																	BgL_arg1661z00_3249
																																		=
																																		CDR
																																		(BgL_carzd2470zd2_3243);
																																	BgL_charz00_3162
																																		=
																																		BgL_arg1656z00_3244;
																																	BgL_sz00_3163
																																		=
																																		BgL_arg1657z00_3245;
																																	BgL_mz00_3164
																																		=
																																		BgL_arg1658z00_3246;
																																	BgL_smz00_3165
																																		=
																																		BgL_arg1659z00_3247;
																																	BgL_tsz00_3166
																																		=
																																		BgL_arg1660z00_3248;
																																	BgL_tsmz00_3167
																																		=
																																		BgL_arg1661z00_3249;
																																	{	/* Rgc/rgccompile.scm 494 */
																																		obj_t
																																			BgL_arg1713z00_3168;
																																		{	/* Rgc/rgccompile.scm 494 */
																																			obj_t
																																				BgL_arg1716z00_3169;
																																			obj_t
																																				BgL_arg1717z00_3170;
																																			BgL_arg1716z00_3169
																																				=
																																				BGl_compilezd2memberzd2testz00zz__rgc_compilez00
																																				(BgL_currentz00_3153,
																																				BgL_charz00_3162);
																																			{	/* Rgc/rgccompile.scm 496 */
																																				obj_t
																																					BgL_arg1719z00_3171;
																																				{	/* Rgc/rgccompile.scm 496 */
																																					obj_t
																																						BgL_arg1720z00_3172;
																																					{	/* Rgc/rgccompile.scm 496 */
																																						obj_t
																																							BgL_arg1721z00_3173;
																																						obj_t
																																							BgL_arg1722z00_3174;
																																						if (CBOOL(BgL_sz00_3163))
																																							{	/* Rgc/rgccompile.scm 499 */
																																								obj_t
																																									BgL_arg1723z00_3175;
																																								{	/* Rgc/rgccompile.scm 499 */
																																									obj_t
																																										BgL_arg1725z00_3176;
																																									{	/* Rgc/rgccompile.scm 499 */
																																										obj_t
																																											BgL_arg1726z00_3177;
																																										{	/* Rgc/rgccompile.scm 499 */
																																											obj_t
																																												BgL_arg1727z00_3178;
																																											{	/* Rgc/rgccompile.scm 499 */
																																												obj_t
																																													BgL_arg1728z00_3179;
																																												{	/* Rgc/rgccompile.scm 499 */
																																													obj_t
																																														BgL_arg1729z00_3180;
																																													BgL_arg1729z00_3180
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BGl_symbol2293z00zz__rgc_compilez00,
																																														BNIL);
																																													BgL_arg1728z00_3179
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BINT
																																														(((long) 1)), BgL_arg1729z00_3180);
																																												}
																																												BgL_arg1727z00_3178
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BGl_symbol2330z00zz__rgc_compilez00,
																																													BgL_arg1728z00_3179);
																																											}
																																											BgL_arg1726z00_3177
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg1727z00_3178,
																																												BNIL);
																																										}
																																										BgL_arg1725z00_3176
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_smz00_3165,
																																											BgL_arg1726z00_3177);
																																									}
																																									BgL_arg1723z00_3175
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_mz00_3164,
																																										BgL_arg1725z00_3176);
																																								}
																																								BgL_arg1721z00_3173
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2354z00zz__rgc_compilez00,
																																									BgL_arg1723z00_3175);
																																							}
																																						else
																																							{	/* Rgc/rgccompile.scm 500 */
																																								obj_t
																																									BgL_arg1730z00_3181;
																																								{	/* Rgc/rgccompile.scm 500 */
																																									obj_t
																																										BgL_arg1731z00_3182;
																																									{	/* Rgc/rgccompile.scm 500 */
																																										obj_t
																																											BgL_arg1732z00_3183;
																																										{	/* Rgc/rgccompile.scm 500 */
																																											obj_t
																																												BgL_arg1733z00_3184;
																																											{	/* Rgc/rgccompile.scm 500 */
																																												obj_t
																																													BgL_arg1734z00_3185;
																																												{	/* Rgc/rgccompile.scm 500 */
																																													obj_t
																																														BgL_arg1736z00_3186;
																																													BgL_arg1736z00_3186
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BGl_symbol2293z00zz__rgc_compilez00,
																																														BNIL);
																																													BgL_arg1734z00_3185
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BINT
																																														(((long) 1)), BgL_arg1736z00_3186);
																																												}
																																												BgL_arg1733z00_3184
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BGl_symbol2330z00zz__rgc_compilez00,
																																													BgL_arg1734z00_3185);
																																											}
																																											BgL_arg1732z00_3183
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg1733z00_3184,
																																												BNIL);
																																										}
																																										BgL_arg1731z00_3182
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_smz00_3165,
																																											BgL_arg1732z00_3183);
																																									}
																																									BgL_arg1730z00_3181
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_mz00_3164,
																																										BgL_arg1731z00_3182);
																																								}
																																								BgL_arg1721z00_3173
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2356z00zz__rgc_compilez00,
																																									BgL_arg1730z00_3181);
																																							}
																																						{	/* Rgc/rgccompile.scm 501 */
																																							obj_t
																																								BgL_arg1737z00_3187;
																																							{	/* Rgc/rgccompile.scm 501 */
																																								obj_t
																																									BgL_arg1738z00_3188;
																																								{	/* Rgc/rgccompile.scm 501 */
																																									obj_t
																																										BgL_arg1739z00_3189;
																																									{	/* Rgc/rgccompile.scm 501 */
																																										obj_t
																																											BgL_arg1740z00_3190;
																																										{	/* Rgc/rgccompile.scm 501 */
																																											obj_t
																																												BgL_arg1741z00_3191;
																																											{	/* Rgc/rgccompile.scm 501 */
																																												obj_t
																																													BgL_arg1742z00_3192;
																																												{	/* Rgc/rgccompile.scm 501 */
																																													obj_t
																																														BgL_arg1743z00_3193;
																																													BgL_arg1743z00_3193
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BGl_symbol2293z00zz__rgc_compilez00,
																																														BNIL);
																																													BgL_arg1742z00_3192
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BINT
																																														(((long) 1)), BgL_arg1743z00_3193);
																																												}
																																												BgL_arg1741z00_3191
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BGl_symbol2330z00zz__rgc_compilez00,
																																													BgL_arg1742z00_3192);
																																											}
																																											BgL_arg1740z00_3190
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg1741z00_3191,
																																												BNIL);
																																										}
																																										BgL_arg1739z00_3189
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_tsmz00_3167,
																																											BgL_arg1740z00_3190);
																																									}
																																									BgL_arg1738z00_3188
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_tsz00_3166,
																																										BgL_arg1739z00_3189);
																																								}
																																								BgL_arg1737z00_3187
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_symbol2358z00zz__rgc_compilez00,
																																									BgL_arg1738z00_3188);
																																							}
																																							BgL_arg1722z00_3174
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg1737z00_3187,
																																								BNIL);
																																						}
																																						BgL_arg1720z00_3172
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1721z00_3173,
																																							BgL_arg1722z00_3174);
																																					}
																																					BgL_arg1719z00_3171
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol2346z00zz__rgc_compilez00,
																																						BgL_arg1720z00_3172);
																																				}
																																				BgL_arg1717z00_3170
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1719z00_3171,
																																					BNIL);
																																			}
																																			BgL_arg1713z00_3168
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1716z00_3169,
																																				BgL_arg1717z00_3170);
																																		}
																																		return
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol2315z00zz__rgc_compilez00,
																																			BgL_arg1713z00_3168);
																																	}
																																}
																															else
																																{	/* Rgc/rgccompile.scm 482 */
																																	return
																																		BGl_errorz00zz__errorz00
																																		(BGl_string2360z00zz__rgc_compilez00,
																																		BGl_string2361z00zz__rgc_compilez00,
																																		BgL_ezd2113zd2_3154);
																																}
																														}
																													else
																														{	/* Rgc/rgccompile.scm 482 */
																															return
																																BGl_errorz00zz__errorz00
																																(BGl_string2360z00zz__rgc_compilez00,
																																BGl_string2361z00zz__rgc_compilez00,
																																BgL_ezd2113zd2_3154);
																														}
																												}
																											else
																												{	/* Rgc/rgccompile.scm 482 */
																													return
																														BGl_errorz00zz__errorz00
																														(BGl_string2360z00zz__rgc_compilez00,
																														BGl_string2361z00zz__rgc_compilez00,
																														BgL_ezd2113zd2_3154);
																												}
																										}
																									}
																								}
																						}
																					else
																						{	/* Rgc/rgccompile.scm 482 */
																							return
																								BGl_errorz00zz__errorz00
																								(BGl_string2360z00zz__rgc_compilez00,
																								BGl_string2361z00zz__rgc_compilez00,
																								BgL_ezd2113zd2_3154);
																						}
																				}
																			else
																				{	/* Rgc/rgccompile.scm 482 */
																					return
																						BGl_errorz00zz__errorz00
																						(BGl_string2360z00zz__rgc_compilez00,
																						BGl_string2361z00zz__rgc_compilez00,
																						BgL_ezd2113zd2_3154);
																				}
																		}
																	else
																		{	/* Rgc/rgccompile.scm 482 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_string2360z00zz__rgc_compilez00,
																				BGl_string2361z00zz__rgc_compilez00,
																				BgL_ezd2113zd2_3154);
																		}
																}
															else
																{	/* Rgc/rgccompile.scm 482 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_string2360z00zz__rgc_compilez00,
																		BGl_string2361z00zz__rgc_compilez00,
																		BgL_ezd2113zd2_3154);
																}
														}
													else
														{	/* Rgc/rgccompile.scm 482 */
															return
																BGl_errorz00zz__errorz00
																(BGl_string2360z00zz__rgc_compilez00,
																BGl_string2361z00zz__rgc_compilez00,
																BgL_ezd2113zd2_3154);
														}
												}
											else
												{	/* Rgc/rgccompile.scm 482 */
													return
														BGl_errorz00zz__errorz00
														(BGl_string2360z00zz__rgc_compilez00,
														BGl_string2361z00zz__rgc_compilez00,
														BgL_ezd2113zd2_3154);
												}
										}
								}
							else
								{	/* Rgc/rgccompile.scm 482 */
									return
										BGl_errorz00zz__errorz00
										(BGl_string2360z00zz__rgc_compilez00,
										BGl_string2361z00zz__rgc_compilez00, BgL_ezd2113zd2_3154);
								}
						}
					else
						{	/* Rgc/rgccompile.scm 482 */
							return
								BGl_errorz00zz__errorz00(BGl_string2360z00zz__rgc_compilez00,
								BGl_string2361z00zz__rgc_compilez00, BgL_ezd2113zd2_3154);
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__rgc_compilez00()
	{
		{	/* Rgc/rgccompile.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__rgc_compilez00()
	{
		{	/* Rgc/rgccompile.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__rgc_compilez00()
	{
		{	/* Rgc/rgccompile.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__rgc_compilez00()
	{
		{	/* Rgc/rgccompile.scm 15 */
			BGl_modulezd2initializa7ationz75zz__rgc_rulesz00(((long) 181069196),
				BSTRING_TO_STRING(BGl_string2362z00zz__rgc_compilez00));
			BGl_modulezd2initializa7ationz75zz__rgc_dfaz00(((long) 477555300),
				BSTRING_TO_STRING(BGl_string2362z00zz__rgc_compilez00));
			BGl_modulezd2initializa7ationz75zz__rgc_setz00(((long) 225075481),
				BSTRING_TO_STRING(BGl_string2362z00zz__rgc_compilez00));
			BGl_modulezd2initializa7ationz75zz__rgc_configz00(((long) 428274706),
				BSTRING_TO_STRING(BGl_string2362z00zz__rgc_compilez00));
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2362z00zz__rgc_compilez00));
		}

	}

#ifdef __cplusplus
}
#endif
