/*===========================================================================*/
/*   (Pp/pp.scm)                                                             */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Pp/pp.scm -indent -o objs/obj_u/Pp/pp.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */

	extern obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
	extern obj_t BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_2minz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2ppzd2widthza2zd2zz__ppz00 = BUNSPEC;
	static obj_t BGl_z62ppzd2exprzd2defunz62zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__ppz00 = BUNSPEC;
	static obj_t BGl_z62ppzd2dozb0zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62wrz62zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl_z62ppzd2exprzd2listz62zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__ppz00();
	static obj_t BGl_z62ppzd2exprzb0zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_vectorzd2prefixzd2zz__ppz00(obj_t);
	static obj_t BGl_z62ppzd2definezb0zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__ppz00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31400ze3ze5zz__ppz00(obj_t, obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__ppz00();
	static obj_t BGl_z62ppzd2ifzb0zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2ppzd2caseza2zd2zz__ppz00 = BUNSPEC;
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ppz00zz__ppz00(obj_t, obj_t);
	static obj_t BGl_z62ppzd2andzb0zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_reversezd2stringzd2appendz00zz__ppz00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62ppzd2condzb0zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31217ze3ze5zz__ppz00(obj_t, obj_t);
	extern obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__ppz00();
	static obj_t BGl_z62indentz62zz__ppz00(obj_t, obj_t, obj_t);
	extern obj_t make_string(long, unsigned char);
	static obj_t BGl_z62zc3z04anonymousza31334ze3ze5zz__ppz00(obj_t);
	extern obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t bgl_close_output_port(obj_t);
	static obj_t BGl_z62ppzd2defunzb0zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2writezd2zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	extern bool_t BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00();
	static obj_t BGl_outze70ze7zz__ppz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62ppzd2casezb0zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t string_for_read(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__ppz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_revzd2stringzd2appendze70ze7zz__ppz00(obj_t, long);
	static obj_t BGl_z62ppzd2generalzb0zz__ppz00(long, obj_t, obj_t, obj_t, long,
		obj_t, long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zz__ppz00();
	static obj_t BGl_symbol2302z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2304z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2306z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2308z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_z62ppzd2downzb0zz__ppz00(obj_t, obj_t, obj_t, long, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__ppz00();
	static obj_t BGl_z62ppzd2letzb0zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__ppz00();
	extern obj_t BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_symbol2317z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2319z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_z62ppzd2commentzb0zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2321z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2323z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2325z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2327z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2329z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2331z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2333z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2335z00zz__ppz00 = BUNSPEC;
	extern obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	static obj_t BGl_symbol2337z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2339z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_z62ppzd2lambdazb0zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2341z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2343z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2345z00zz__ppz00 = BUNSPEC;
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_symbol2347z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2349z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2268z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_z62ppz62zz__ppz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2351z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_z62prz62zz__ppz00(obj_t, obj_t, obj_t, long, obj_t, long,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, long, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2353z00zz__ppz00 = BUNSPEC;
	static bool_t BGl_z62readzd2macrozf3z43zz__ppz00(obj_t);
	static obj_t BGl_symbol2281z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_symbol2293z00zz__ppz00 = BUNSPEC;
	static obj_t BGl_z62ppzd2beginzb0zz__ppz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62readzd2macrozd2prefixz62zz__ppz00(obj_t);
	extern obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2300z00zz__ppz00,
		BgL_bgl_string2300za700za7za7_2356za7, "#|", 2);
	      DEFINE_STRING(BGl_string2301z00zz__ppz00,
		BgL_bgl_string2301za700za7za7_2357za7, "|", 1);
	      DEFINE_STRING(BGl_string2303z00zz__ppz00,
		BgL_bgl_string2303za700za7za7_2358za7, "quote", 5);
	      DEFINE_STRING(BGl_string2305z00zz__ppz00,
		BgL_bgl_string2305za700za7za7_2359za7, "quasiquote", 10);
	      DEFINE_STRING(BGl_string2307z00zz__ppz00,
		BgL_bgl_string2307za700za7za7_2360za7, "unquote", 7);
	      DEFINE_STRING(BGl_string2309z00zz__ppz00,
		BgL_bgl_string2309za700za7za7_2361za7, "unquote-splicing", 16);
	      DEFINE_STRING(BGl_string2310z00zz__ppz00,
		BgL_bgl_string2310za700za7za7_2362za7, "'", 1);
	      DEFINE_STRING(BGl_string2311z00zz__ppz00,
		BgL_bgl_string2311za700za7za7_2363za7, "`", 1);
	      DEFINE_STRING(BGl_string2312z00zz__ppz00,
		BgL_bgl_string2312za700za7za7_2364za7, ",", 1);
	      DEFINE_STRING(BGl_string2313z00zz__ppz00,
		BgL_bgl_string2313za700za7za7_2365za7, ",@", 2);
	      DEFINE_STRING(BGl_string2314z00zz__ppz00,
		BgL_bgl_string2314za700za7za7_2366za7, "        ", 8);
	      DEFINE_STRING(BGl_string2315z00zz__ppz00,
		BgL_bgl_string2315za700za7za7_2367za7, "\n", 1);
	      DEFINE_STRING(BGl_string2316z00zz__ppz00,
		BgL_bgl_string2316za700za7za7_2368za7, "({}", 3);
	      DEFINE_STRING(BGl_string2318z00zz__ppz00,
		BgL_bgl_string2318za700za7za7_2369za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2320z00zz__ppz00,
		BgL_bgl_string2320za700za7za7_2370za7, "let*", 4);
	      DEFINE_STRING(BGl_string2322z00zz__ppz00,
		BgL_bgl_string2322za700za7za7_2371za7, "letrec", 6);
	      DEFINE_STRING(BGl_string2324z00zz__ppz00,
		BgL_bgl_string2324za700za7za7_2372za7, "define", 6);
	      DEFINE_STRING(BGl_string2326z00zz__ppz00,
		BgL_bgl_string2326za700za7za7_2373za7, "define-inline", 13);
	      DEFINE_STRING(BGl_string2328z00zz__ppz00,
		BgL_bgl_string2328za700za7za7_2374za7, "define-method", 13);
	      DEFINE_STRING(BGl_string2330z00zz__ppz00,
		BgL_bgl_string2330za700za7za7_2375za7, "define-generic", 14);
	      DEFINE_STRING(BGl_string2332z00zz__ppz00,
		BgL_bgl_string2332za700za7za7_2376za7, "module", 6);
	      DEFINE_STRING(BGl_string2334z00zz__ppz00,
		BgL_bgl_string2334za700za7za7_2377za7, "defun", 5);
	      DEFINE_STRING(BGl_string2336z00zz__ppz00,
		BgL_bgl_string2336za700za7za7_2378za7, "de", 2);
	      DEFINE_STRING(BGl_string2338z00zz__ppz00,
		BgL_bgl_string2338za700za7za7_2379za7, "if", 2);
	      DEFINE_STRING(BGl_string2340z00zz__ppz00,
		BgL_bgl_string2340za700za7za7_2380za7, "set!", 4);
	      DEFINE_STRING(BGl_string2342z00zz__ppz00,
		BgL_bgl_string2342za700za7za7_2381za7, "cond", 4);
	      DEFINE_STRING(BGl_string2344z00zz__ppz00,
		BgL_bgl_string2344za700za7za7_2382za7, "case", 4);
	      DEFINE_STRING(BGl_string2346z00zz__ppz00,
		BgL_bgl_string2346za700za7za7_2383za7, "and", 3);
	      DEFINE_STRING(BGl_string2348z00zz__ppz00,
		BgL_bgl_string2348za700za7za7_2384za7, "or", 2);
	      DEFINE_STRING(BGl_string2269z00zz__ppz00,
		BgL_bgl_string2269za700za7za7_2385za7, "respect", 7);
	      DEFINE_STRING(BGl_string2350z00zz__ppz00,
		BgL_bgl_string2350za700za7za7_2386za7, "let", 3);
	      DEFINE_STRING(BGl_string2270z00zz__ppz00,
		BgL_bgl_string2270za700za7za7_2387za7, "pp", 2);
	      DEFINE_STRING(BGl_string2352z00zz__ppz00,
		BgL_bgl_string2352za700za7za7_2388za7, "begin", 5);
	      DEFINE_STRING(BGl_string2271z00zz__ppz00,
		BgL_bgl_string2271za700za7za7_2389za7, "not an output-port", 18);
	      DEFINE_STRING(BGl_string2272z00zz__ppz00,
		BgL_bgl_string2272za700za7za7_2390za7, "#", 1);
	      DEFINE_STRING(BGl_string2354z00zz__ppz00,
		BgL_bgl_string2354za700za7za7_2391za7, "do", 2);
	      DEFINE_STRING(BGl_string2273z00zz__ppz00,
		BgL_bgl_string2273za700za7za7_2392za7, "#0", 2);
	      DEFINE_STRING(BGl_string2355z00zz__ppz00,
		BgL_bgl_string2355za700za7za7_2393za7, "__pp", 4);
	      DEFINE_STRING(BGl_string2274z00zz__ppz00,
		BgL_bgl_string2274za700za7za7_2394za7, "#00", 3);
	      DEFINE_STRING(BGl_string2275z00zz__ppz00,
		BgL_bgl_string2275za700za7za7_2395za7, ")", 1);
	      DEFINE_STRING(BGl_string2276z00zz__ppz00,
		BgL_bgl_string2276za700za7za7_2396za7, ".", 1);
	      DEFINE_STRING(BGl_string2277z00zz__ppz00,
		BgL_bgl_string2277za700za7za7_2397za7, "()", 2);
	      DEFINE_STRING(BGl_string2278z00zz__ppz00,
		BgL_bgl_string2278za700za7za7_2398za7, "(", 1);
	      DEFINE_STRING(BGl_string2279z00zz__ppz00,
		BgL_bgl_string2279za700za7za7_2399za7, " ", 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ppzd2envzd2zz__ppz00,
		BgL_bgl_za762ppza762za7za7__ppza702400za7, va_generic_entry,
		BGl_z62ppz62zz__ppz00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2280z00zz__ppz00,
		BgL_bgl_string2280za700za7za7_2401za7, " . ", 3);
	      DEFINE_STRING(BGl_string2282z00zz__ppz00,
		BgL_bgl_string2282za700za7za7_2402za7, "comment", 7);
	      DEFINE_STRING(BGl_string2283z00zz__ppz00,
		BgL_bgl_string2283za700za7za7_2403za7, "#t", 2);
	      DEFINE_STRING(BGl_string2284z00zz__ppz00,
		BgL_bgl_string2284za700za7za7_2404za7, "#f", 2);
	      DEFINE_STRING(BGl_string2285z00zz__ppz00,
		BgL_bgl_string2285za700za7za7_2405za7, "#e", 2);
	      DEFINE_STRING(BGl_string2286z00zz__ppz00,
		BgL_bgl_string2286za700za7za7_2406za7, "#l", 2);
	      DEFINE_STRING(BGl_string2287z00zz__ppz00,
		BgL_bgl_string2287za700za7za7_2407za7, "#u8:", 4);
	      DEFINE_STRING(BGl_string2288z00zz__ppz00,
		BgL_bgl_string2288za700za7za7_2408za7, "#u16:", 5);
	      DEFINE_STRING(BGl_string2289z00zz__ppz00,
		BgL_bgl_string2289za700za7za7_2409za7, "#u32:", 5);
	      DEFINE_STRING(BGl_string2290z00zz__ppz00,
		BgL_bgl_string2290za700za7za7_2410za7, "#s8:", 4);
	      DEFINE_STRING(BGl_string2291z00zz__ppz00,
		BgL_bgl_string2291za700za7za7_2411za7, "#s16:", 5);
	      DEFINE_STRING(BGl_string2292z00zz__ppz00,
		BgL_bgl_string2292za700za7za7_2412za7, "#s32:", 5);
	      DEFINE_STRING(BGl_string2294z00zz__ppz00,
		BgL_bgl_string2294za700za7za7_2413za7, "upper", 5);
	      DEFINE_STRING(BGl_string2295z00zz__ppz00,
		BgL_bgl_string2295za700za7za7_2414za7, "#\"", 2);
	      DEFINE_STRING(BGl_string2296z00zz__ppz00,
		BgL_bgl_string2296za700za7za7_2415za7, "\"", 1);
	      DEFINE_STRING(BGl_string2297z00zz__ppz00,
		BgL_bgl_string2297za700za7za7_2416za7, "#[input-port]", 13);
	      DEFINE_STRING(BGl_string2298z00zz__ppz00,
		BgL_bgl_string2298za700za7za7_2417za7, "#[output-port]", 14);
	      DEFINE_STRING(BGl_string2299z00zz__ppz00,
		BgL_bgl_string2299za700za7za7_2418za7, "#[eof-object]", 13);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2ppzd2widthza2zd2zz__ppz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__ppz00));
		     ADD_ROOT((void *) (&BGl_za2ppzd2caseza2zd2zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2302z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2304z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2306z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2308z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2317z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2319z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2321z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2323z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2325z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2327z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2329z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2331z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2333z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2335z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2337z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2339z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2341z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2343z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2345z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2347z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2349z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2268z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2351z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2353z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2281z00zz__ppz00));
		     ADD_ROOT((void *) (&BGl_symbol2293z00zz__ppz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__ppz00(long
		BgL_checksumz00_4202, char *BgL_fromz00_4203)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__ppz00))
				{
					BGl_requirezd2initializa7ationz75zz__ppz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__ppz00();
					BGl_cnstzd2initzd2zz__ppz00();
					BGl_importedzd2moduleszd2initz00zz__ppz00();
					return BGl_toplevelzd2initzd2zz__ppz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__ppz00()
	{
		{	/* Pp/pp.scm 14 */
			BGl_symbol2268z00zz__ppz00 =
				bstring_to_symbol(BGl_string2269z00zz__ppz00);
			BGl_symbol2281z00zz__ppz00 =
				bstring_to_symbol(BGl_string2282z00zz__ppz00);
			BGl_symbol2293z00zz__ppz00 =
				bstring_to_symbol(BGl_string2294z00zz__ppz00);
			BGl_symbol2302z00zz__ppz00 =
				bstring_to_symbol(BGl_string2303z00zz__ppz00);
			BGl_symbol2304z00zz__ppz00 =
				bstring_to_symbol(BGl_string2305z00zz__ppz00);
			BGl_symbol2306z00zz__ppz00 =
				bstring_to_symbol(BGl_string2307z00zz__ppz00);
			BGl_symbol2308z00zz__ppz00 =
				bstring_to_symbol(BGl_string2309z00zz__ppz00);
			BGl_symbol2317z00zz__ppz00 =
				bstring_to_symbol(BGl_string2318z00zz__ppz00);
			BGl_symbol2319z00zz__ppz00 =
				bstring_to_symbol(BGl_string2320z00zz__ppz00);
			BGl_symbol2321z00zz__ppz00 =
				bstring_to_symbol(BGl_string2322z00zz__ppz00);
			BGl_symbol2323z00zz__ppz00 =
				bstring_to_symbol(BGl_string2324z00zz__ppz00);
			BGl_symbol2325z00zz__ppz00 =
				bstring_to_symbol(BGl_string2326z00zz__ppz00);
			BGl_symbol2327z00zz__ppz00 =
				bstring_to_symbol(BGl_string2328z00zz__ppz00);
			BGl_symbol2329z00zz__ppz00 =
				bstring_to_symbol(BGl_string2330z00zz__ppz00);
			BGl_symbol2331z00zz__ppz00 =
				bstring_to_symbol(BGl_string2332z00zz__ppz00);
			BGl_symbol2333z00zz__ppz00 =
				bstring_to_symbol(BGl_string2334z00zz__ppz00);
			BGl_symbol2335z00zz__ppz00 =
				bstring_to_symbol(BGl_string2336z00zz__ppz00);
			BGl_symbol2337z00zz__ppz00 =
				bstring_to_symbol(BGl_string2338z00zz__ppz00);
			BGl_symbol2339z00zz__ppz00 =
				bstring_to_symbol(BGl_string2340z00zz__ppz00);
			BGl_symbol2341z00zz__ppz00 =
				bstring_to_symbol(BGl_string2342z00zz__ppz00);
			BGl_symbol2343z00zz__ppz00 =
				bstring_to_symbol(BGl_string2344z00zz__ppz00);
			BGl_symbol2345z00zz__ppz00 =
				bstring_to_symbol(BGl_string2346z00zz__ppz00);
			BGl_symbol2347z00zz__ppz00 =
				bstring_to_symbol(BGl_string2348z00zz__ppz00);
			BGl_symbol2349z00zz__ppz00 =
				bstring_to_symbol(BGl_string2350z00zz__ppz00);
			BGl_symbol2351z00zz__ppz00 =
				bstring_to_symbol(BGl_string2352z00zz__ppz00);
			return (BGl_symbol2353z00zz__ppz00 =
				bstring_to_symbol(BGl_string2354z00zz__ppz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__ppz00()
	{
		{	/* Pp/pp.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__ppz00()
	{
		{	/* Pp/pp.scm 14 */
			BGl_za2ppzd2caseza2zd2zz__ppz00 = BGl_symbol2268z00zz__ppz00;
			return (BGl_za2ppzd2widthza2zd2zz__ppz00 = BINT(((long) 80)), BUNSPEC);
		}

	}



/* pp */
	BGL_EXPORTED_DEF obj_t BGl_ppz00zz__ppz00(obj_t BgL_expz00_3,
		obj_t BgL_portz00_4)
	{
		{	/* Pp/pp.scm 65 */
			{	/* Pp/pp.scm 66 */
				obj_t BgL_portz00_1145;

				if (NULLP(BgL_portz00_4))
					{	/* Pp/pp.scm 67 */
						obj_t BgL_res1903z00_2225;

						{	/* Pp/pp.scm 67 */
							obj_t BgL_tmpz00_4241;

							BgL_tmpz00_4241 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1903z00_2225 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4241);
						}
						BgL_portz00_1145 = BgL_res1903z00_2225;
					}
				else
					{	/* Pp/pp.scm 68 */
						obj_t BgL_portz00_1151;

						BgL_portz00_1151 = CAR(((obj_t) BgL_portz00_4));
						if (OUTPUT_PORTP(BgL_portz00_1151))
							{	/* Pp/pp.scm 69 */
								BgL_portz00_1145 = BgL_portz00_1151;
							}
						else
							{	/* Pp/pp.scm 69 */
								BgL_portz00_1145 =
									BGl_errorz00zz__errorz00(BGl_string2270z00zz__ppz00,
									BGl_string2271z00zz__ppz00, BgL_portz00_1151);
							}
					}
				{	/* Pp/pp.scm 72 */
					obj_t BgL_zc3z04anonymousza31217ze3z87_3682;

					{
						int BgL_tmpz00_4249;

						BgL_tmpz00_4249 = (int) (((long) 1));
						BgL_zc3z04anonymousza31217ze3z87_3682 =
							MAKE_L_PROCEDURE(BGl_z62zc3z04anonymousza31217ze3ze5zz__ppz00,
							BgL_tmpz00_4249);
					}
					PROCEDURE_L_SET(BgL_zc3z04anonymousza31217ze3z87_3682,
						(int) (((long) 0)), BgL_portz00_1145);
					BGl_genericzd2writezd2zz__ppz00(BgL_expz00_3, BFALSE,
						BGl_za2ppzd2widthza2zd2zz__ppz00,
						BgL_zc3z04anonymousza31217ze3z87_3682);
				}
				return BUNSPEC;
			}
		}

	}



/* &pp */
	obj_t BGl_z62ppz62zz__ppz00(obj_t BgL_envz00_3683, obj_t BgL_expz00_3684,
		obj_t BgL_portz00_3685)
	{
		{	/* Pp/pp.scm 65 */
			return BGl_ppz00zz__ppz00(BgL_expz00_3684, BgL_portz00_3685);
		}

	}



/* &<@anonymous:1217> */
	obj_t BGl_z62zc3z04anonymousza31217ze3ze5zz__ppz00(obj_t BgL_envz00_3686,
		obj_t BgL_sz00_3688)
	{
		{	/* Pp/pp.scm 72 */
			{	/* Pp/pp.scm 72 */
				obj_t BgL_portz00_3687;

				BgL_portz00_3687 = PROCEDURE_L_REF(BgL_envz00_3686, (int) (((long) 0)));
				{	/* Pp/pp.scm 72 */
					bool_t BgL_tmpz00_4258;

					bgl_display_obj(BgL_sz00_3688, BgL_portz00_3687);
					BgL_tmpz00_4258 = ((bool_t) 1);
					return BBOOL(BgL_tmpz00_4258);
				}
			}
		}

	}



/* vector-prefix */
	obj_t BGl_vectorzd2prefixzd2zz__ppz00(obj_t BgL_objz00_5)
	{
		{	/* Pp/pp.scm 76 */
			{	/* Pp/pp.scm 77 */
				int BgL_tagz00_1153;

				{	/* Pp/pp.scm 77 */
					int BgL_res1904z00_2228;

					{	/* Pp/pp.scm 77 */
						obj_t BgL_tmpz00_4261;

						BgL_tmpz00_4261 = ((obj_t) BgL_objz00_5);
						BgL_res1904z00_2228 = VECTOR_TAG(BgL_tmpz00_4261);
					}
					BgL_tagz00_1153 = BgL_res1904z00_2228;
				}
				if (((long) (BgL_tagz00_1153) == ((long) 0)))
					{	/* Pp/pp.scm 78 */
						return BGl_string2272z00zz__ppz00;
					}
				else
					{	/* Pp/pp.scm 78 */
						if (((long) (BgL_tagz00_1153) >= ((long) 100)))
							{	/* Pp/pp.scm 81 */
								obj_t BgL_arg1223z00_1156;

								{	/* Ieee/number.scm 164 */

									BgL_arg1223z00_1156 =
										BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BINT
										(BgL_tagz00_1153), BINT(((long) 10)));
								}
								return
									string_append(BGl_string2272z00zz__ppz00,
									BgL_arg1223z00_1156);
							}
						else
							{	/* Pp/pp.scm 80 */
								if (((long) (BgL_tagz00_1153) >= ((long) 10)))
									{	/* Pp/pp.scm 83 */
										obj_t BgL_arg1225z00_1160;

										{	/* Ieee/number.scm 164 */

											BgL_arg1225z00_1160 =
												BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BINT
												(BgL_tagz00_1153), BINT(((long) 10)));
										}
										return
											string_append(BGl_string2273z00zz__ppz00,
											BgL_arg1225z00_1160);
									}
								else
									{	/* Pp/pp.scm 84 */
										obj_t BgL_arg1227z00_1163;

										{	/* Ieee/number.scm 164 */

											BgL_arg1227z00_1163 =
												BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BINT
												(BgL_tagz00_1153), BINT(((long) 10)));
										}
										return
											string_append(BGl_string2274z00zz__ppz00,
											BgL_arg1227z00_1163);
									}
							}
					}
			}
		}

	}



/* generic-write */
	obj_t BGl_genericzd2writezd2zz__ppz00(obj_t BgL_objz00_6,
		obj_t BgL_displayzf3zf3_7, obj_t BgL_widthz00_8, obj_t BgL_outputz00_9)
	{
		{	/* Pp/pp.scm 112 */
			{
				obj_t BgL_objz00_1397;
				long BgL_colz00_1398;

				if (CBOOL(BgL_widthz00_8))
					{	/* Pp/pp.scm 461 */
						obj_t BgL_arg1229z00_1172;
						obj_t BgL_arg1232z00_1173;

						BgL_arg1229z00_1172 = make_string(((long) 1), ((unsigned char) 10));
						BgL_objz00_1397 = BgL_objz00_6;
						BgL_colz00_1398 = ((long) 0);
						{	/* Pp/pp.scm 247 */
							obj_t BgL_ppzd2dozd2_3698;
							obj_t BgL_ppzd2beginzd2_3699;
							obj_t BgL_ppzd2andzd2_3701;
							obj_t BgL_ppzd2casezd2_3702;
							obj_t BgL_ppzd2condzd2_3703;
							obj_t BgL_ppzd2ifzd2_3704;
							obj_t BgL_ppzd2commentzd2_3695;
							obj_t BgL_ppzd2lambdazd2_3708;
							obj_t BgL_ppzd2letzd2_3700;
							obj_t BgL_ppzd2defunzd2_3706;
							obj_t BgL_ppzd2definezd2_3707;
							obj_t BgL_ppzd2exprzd2defunz00_3705;
							obj_t BgL_ppzd2exprzd2listz00_3697;
							obj_t BgL_ppzd2exprzd2_3696;

							BgL_ppzd2dozd2_3698 =
								MAKE_FX_PROCEDURE(BGl_z62ppzd2dozb0zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2beginzd2_3699 =
								MAKE_FX_PROCEDURE(BGl_z62ppzd2beginzb0zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2andzd2_3701 =
								MAKE_FX_PROCEDURE(BGl_z62ppzd2andzb0zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2casezd2_3702 =
								MAKE_FX_PROCEDURE(BGl_z62ppzd2casezb0zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2condzd2_3703 =
								MAKE_FX_PROCEDURE(BGl_z62ppzd2condzb0zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2ifzd2_3704 =
								MAKE_FX_PROCEDURE(BGl_z62ppzd2ifzb0zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2commentzd2_3695 =
								MAKE_FX_PROCEDURE(BGl_z62ppzd2commentzb0zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2lambdazd2_3708 =
								MAKE_FX_PROCEDURE(BGl_z62ppzd2lambdazb0zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2letzd2_3700 =
								MAKE_FX_PROCEDURE(BGl_z62ppzd2letzb0zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2defunzd2_3706 =
								MAKE_FX_PROCEDURE(BGl_z62ppzd2defunzb0zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2definezd2_3707 =
								MAKE_FX_PROCEDURE(BGl_z62ppzd2definezb0zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2exprzd2defunz00_3705 =
								MAKE_FX_PROCEDURE(BGl_z62ppzd2exprzd2defunz62zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2exprzd2listz00_3697 =
								MAKE_FX_PROCEDURE(BGl_z62ppzd2exprzd2listz62zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							BgL_ppzd2exprzd2_3696 =
								MAKE_FX_PROCEDURE(BGl_z62ppzd2exprzb0zz__ppz00,
								(int) (((long) 3)), (int) (((long) 19)));
							PROCEDURE_SET(BgL_ppzd2dozd2_3698,
								(int) (((long) 0)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2dozd2_3698,
								(int) (((long) 1)), BgL_ppzd2exprzd2defunz00_3705);
							PROCEDURE_SET(BgL_ppzd2dozd2_3698,
								(int) (((long) 2)), BgL_ppzd2commentzd2_3695);
							PROCEDURE_SET(BgL_ppzd2dozd2_3698,
								(int) (((long) 3)), BgL_ppzd2beginzd2_3699);
							PROCEDURE_SET(BgL_ppzd2dozd2_3698,
								(int) (((long) 4)), BgL_ppzd2letzd2_3700);
							PROCEDURE_SET(BgL_ppzd2dozd2_3698,
								(int) (((long) 5)), BgL_ppzd2andzd2_3701);
							PROCEDURE_SET(BgL_ppzd2dozd2_3698,
								(int) (((long) 6)), BgL_ppzd2casezd2_3702);
							PROCEDURE_SET(BgL_ppzd2dozd2_3698,
								(int) (((long) 7)), BgL_ppzd2condzd2_3703);
							PROCEDURE_SET(BgL_ppzd2dozd2_3698,
								(int) (((long) 8)), BgL_ppzd2ifzd2_3704);
							PROCEDURE_SET(BgL_ppzd2dozd2_3698,
								(int) (((long) 9)), BgL_ppzd2defunzd2_3706);
							PROCEDURE_SET(BgL_ppzd2dozd2_3698,
								(int) (((long) 10)), BgL_ppzd2definezd2_3707);
							PROCEDURE_SET(BgL_ppzd2dozd2_3698,
								(int) (((long) 11)), BgL_ppzd2lambdazd2_3708);
							PROCEDURE_SET(BgL_ppzd2dozd2_3698,
								(int) (((long) 12)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2dozd2_3698,
								(int) (((long) 13)), BgL_widthz00_8);
							PROCEDURE_SET(BgL_ppzd2dozd2_3698,
								(int) (((long) 14)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2dozd2_3698,
								(int) (((long) 15)), BgL_displayzf3zf3_7);
							PROCEDURE_SET(BgL_ppzd2dozd2_3698,
								(int) (((long) 16)), BgL_outputz00_9);
							PROCEDURE_SET(BgL_ppzd2dozd2_3698,
								(int) (((long) 17)), BgL_ppzd2exprzd2listz00_3697);
							PROCEDURE_SET(BgL_ppzd2dozd2_3698,
								(int) (((long) 18)), BgL_ppzd2exprzd2_3696);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3699,
								(int) (((long) 0)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2beginzd2_3699,
								(int) (((long) 1)), BgL_ppzd2exprzd2defunz00_3705);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3699,
								(int) (((long) 2)), BgL_widthz00_8);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3699,
								(int) (((long) 3)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2beginzd2_3699,
								(int) (((long) 4)), BgL_displayzf3zf3_7);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3699,
								(int) (((long) 5)), BgL_ppzd2exprzd2listz00_3697);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3699,
								(int) (((long) 6)), BgL_ppzd2commentzd2_3695);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3699,
								(int) (((long) 7)), BgL_ppzd2dozd2_3698);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3699,
								(int) (((long) 8)), BgL_ppzd2letzd2_3700);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3699,
								(int) (((long) 9)), BgL_ppzd2andzd2_3701);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3699,
								(int) (((long) 10)), BgL_ppzd2casezd2_3702);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3699,
								(int) (((long) 11)), BgL_ppzd2condzd2_3703);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3699,
								(int) (((long) 12)), BgL_ppzd2ifzd2_3704);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3699,
								(int) (((long) 13)), BgL_ppzd2defunzd2_3706);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3699,
								(int) (((long) 14)), BgL_ppzd2definezd2_3707);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3699,
								(int) (((long) 15)), BgL_ppzd2lambdazd2_3708);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3699,
								(int) (((long) 16)), BgL_outputz00_9);
							PROCEDURE_SET(BgL_ppzd2beginzd2_3699,
								(int) (((long) 17)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2beginzd2_3699,
								(int) (((long) 18)), BgL_ppzd2exprzd2_3696);
							PROCEDURE_SET(BgL_ppzd2andzd2_3701,
								(int) (((long) 0)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2andzd2_3701,
								(int) (((long) 1)), BgL_ppzd2exprzd2defunz00_3705);
							PROCEDURE_SET(BgL_ppzd2andzd2_3701,
								(int) (((long) 2)), BgL_widthz00_8);
							PROCEDURE_SET(BgL_ppzd2andzd2_3701,
								(int) (((long) 3)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2andzd2_3701,
								(int) (((long) 4)), BgL_displayzf3zf3_7);
							PROCEDURE_SET(BgL_ppzd2andzd2_3701,
								(int) (((long) 5)), BgL_ppzd2exprzd2listz00_3697);
							PROCEDURE_SET(BgL_ppzd2andzd2_3701,
								(int) (((long) 6)), BgL_ppzd2commentzd2_3695);
							PROCEDURE_SET(BgL_ppzd2andzd2_3701,
								(int) (((long) 7)), BgL_ppzd2dozd2_3698);
							PROCEDURE_SET(BgL_ppzd2andzd2_3701,
								(int) (((long) 8)), BgL_ppzd2beginzd2_3699);
							PROCEDURE_SET(BgL_ppzd2andzd2_3701,
								(int) (((long) 9)), BgL_ppzd2letzd2_3700);
							PROCEDURE_SET(BgL_ppzd2andzd2_3701,
								(int) (((long) 10)), BgL_ppzd2casezd2_3702);
							PROCEDURE_SET(BgL_ppzd2andzd2_3701,
								(int) (((long) 11)), BgL_ppzd2condzd2_3703);
							PROCEDURE_SET(BgL_ppzd2andzd2_3701,
								(int) (((long) 12)), BgL_ppzd2ifzd2_3704);
							PROCEDURE_SET(BgL_ppzd2andzd2_3701,
								(int) (((long) 13)), BgL_ppzd2defunzd2_3706);
							PROCEDURE_SET(BgL_ppzd2andzd2_3701,
								(int) (((long) 14)), BgL_ppzd2definezd2_3707);
							PROCEDURE_SET(BgL_ppzd2andzd2_3701,
								(int) (((long) 15)), BgL_ppzd2lambdazd2_3708);
							PROCEDURE_SET(BgL_ppzd2andzd2_3701,
								(int) (((long) 16)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2andzd2_3701,
								(int) (((long) 17)), BgL_outputz00_9);
							PROCEDURE_SET(BgL_ppzd2andzd2_3701,
								(int) (((long) 18)), BgL_ppzd2exprzd2_3696);
							PROCEDURE_SET(BgL_ppzd2casezd2_3702,
								(int) (((long) 0)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2casezd2_3702,
								(int) (((long) 1)), BgL_ppzd2exprzd2defunz00_3705);
							PROCEDURE_SET(BgL_ppzd2casezd2_3702,
								(int) (((long) 2)), BgL_widthz00_8);
							PROCEDURE_SET(BgL_ppzd2casezd2_3702,
								(int) (((long) 3)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2casezd2_3702,
								(int) (((long) 4)), BgL_displayzf3zf3_7);
							PROCEDURE_SET(BgL_ppzd2casezd2_3702,
								(int) (((long) 5)), BgL_ppzd2commentzd2_3695);
							PROCEDURE_SET(BgL_ppzd2casezd2_3702,
								(int) (((long) 6)), BgL_ppzd2dozd2_3698);
							PROCEDURE_SET(BgL_ppzd2casezd2_3702,
								(int) (((long) 7)), BgL_ppzd2beginzd2_3699);
							PROCEDURE_SET(BgL_ppzd2casezd2_3702,
								(int) (((long) 8)), BgL_ppzd2letzd2_3700);
							PROCEDURE_SET(BgL_ppzd2casezd2_3702,
								(int) (((long) 9)), BgL_ppzd2andzd2_3701);
							PROCEDURE_SET(BgL_ppzd2casezd2_3702,
								(int) (((long) 10)), BgL_ppzd2condzd2_3703);
							PROCEDURE_SET(BgL_ppzd2casezd2_3702,
								(int) (((long) 11)), BgL_ppzd2ifzd2_3704);
							PROCEDURE_SET(BgL_ppzd2casezd2_3702,
								(int) (((long) 12)), BgL_ppzd2defunzd2_3706);
							PROCEDURE_SET(BgL_ppzd2casezd2_3702,
								(int) (((long) 13)), BgL_ppzd2definezd2_3707);
							PROCEDURE_SET(BgL_ppzd2casezd2_3702,
								(int) (((long) 14)), BgL_ppzd2lambdazd2_3708);
							PROCEDURE_SET(BgL_ppzd2casezd2_3702,
								(int) (((long) 15)), BgL_outputz00_9);
							PROCEDURE_SET(BgL_ppzd2casezd2_3702,
								(int) (((long) 16)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2casezd2_3702,
								(int) (((long) 17)), BgL_ppzd2exprzd2_3696);
							PROCEDURE_SET(BgL_ppzd2casezd2_3702,
								(int) (((long) 18)), BgL_ppzd2exprzd2listz00_3697);
							PROCEDURE_SET(BgL_ppzd2condzd2_3703,
								(int) (((long) 0)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2condzd2_3703,
								(int) (((long) 1)), BgL_ppzd2exprzd2defunz00_3705);
							PROCEDURE_SET(BgL_ppzd2condzd2_3703,
								(int) (((long) 2)), BgL_widthz00_8);
							PROCEDURE_SET(BgL_ppzd2condzd2_3703,
								(int) (((long) 3)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2condzd2_3703,
								(int) (((long) 4)), BgL_displayzf3zf3_7);
							PROCEDURE_SET(BgL_ppzd2condzd2_3703,
								(int) (((long) 5)), BgL_ppzd2commentzd2_3695);
							PROCEDURE_SET(BgL_ppzd2condzd2_3703,
								(int) (((long) 6)), BgL_ppzd2dozd2_3698);
							PROCEDURE_SET(BgL_ppzd2condzd2_3703,
								(int) (((long) 7)), BgL_ppzd2beginzd2_3699);
							PROCEDURE_SET(BgL_ppzd2condzd2_3703,
								(int) (((long) 8)), BgL_ppzd2letzd2_3700);
							PROCEDURE_SET(BgL_ppzd2condzd2_3703,
								(int) (((long) 9)), BgL_ppzd2andzd2_3701);
							PROCEDURE_SET(BgL_ppzd2condzd2_3703,
								(int) (((long) 10)), BgL_ppzd2casezd2_3702);
							PROCEDURE_SET(BgL_ppzd2condzd2_3703,
								(int) (((long) 11)), BgL_ppzd2ifzd2_3704);
							PROCEDURE_SET(BgL_ppzd2condzd2_3703,
								(int) (((long) 12)), BgL_ppzd2defunzd2_3706);
							PROCEDURE_SET(BgL_ppzd2condzd2_3703,
								(int) (((long) 13)), BgL_ppzd2definezd2_3707);
							PROCEDURE_SET(BgL_ppzd2condzd2_3703,
								(int) (((long) 14)), BgL_ppzd2lambdazd2_3708);
							PROCEDURE_SET(BgL_ppzd2condzd2_3703,
								(int) (((long) 15)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2condzd2_3703,
								(int) (((long) 16)), BgL_ppzd2exprzd2_3696);
							PROCEDURE_SET(BgL_ppzd2condzd2_3703,
								(int) (((long) 17)), BgL_outputz00_9);
							PROCEDURE_SET(BgL_ppzd2condzd2_3703,
								(int) (((long) 18)), BgL_ppzd2exprzd2listz00_3697);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3704,
								(int) (((long) 0)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2ifzd2_3704,
								(int) (((long) 1)), BgL_ppzd2exprzd2defunz00_3705);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3704,
								(int) (((long) 2)), BgL_widthz00_8);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3704,
								(int) (((long) 3)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2ifzd2_3704,
								(int) (((long) 4)), BgL_displayzf3zf3_7);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3704,
								(int) (((long) 5)), BgL_ppzd2exprzd2listz00_3697);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3704,
								(int) (((long) 6)), BgL_ppzd2commentzd2_3695);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3704,
								(int) (((long) 7)), BgL_ppzd2dozd2_3698);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3704,
								(int) (((long) 8)), BgL_ppzd2beginzd2_3699);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3704,
								(int) (((long) 9)), BgL_ppzd2letzd2_3700);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3704,
								(int) (((long) 10)), BgL_ppzd2andzd2_3701);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3704,
								(int) (((long) 11)), BgL_ppzd2casezd2_3702);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3704,
								(int) (((long) 12)), BgL_ppzd2condzd2_3703);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3704,
								(int) (((long) 13)), BgL_ppzd2defunzd2_3706);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3704,
								(int) (((long) 14)), BgL_ppzd2definezd2_3707);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3704,
								(int) (((long) 15)), BgL_ppzd2lambdazd2_3708);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3704,
								(int) (((long) 16)), BgL_outputz00_9);
							PROCEDURE_SET(BgL_ppzd2ifzd2_3704,
								(int) (((long) 17)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2ifzd2_3704,
								(int) (((long) 18)), BgL_ppzd2exprzd2_3696);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3695,
								(int) (((long) 0)), BgL_ppzd2exprzd2defunz00_3705);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3695,
								(int) (((long) 1)), BgL_ppzd2exprzd2listz00_3697);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3695,
								(int) (((long) 2)), BgL_ppzd2dozd2_3698);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3695,
								(int) (((long) 3)), BgL_ppzd2beginzd2_3699);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3695,
								(int) (((long) 4)), BgL_ppzd2letzd2_3700);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3695,
								(int) (((long) 5)), BgL_ppzd2andzd2_3701);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3695,
								(int) (((long) 6)), BgL_ppzd2casezd2_3702);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3695,
								(int) (((long) 7)), BgL_ppzd2condzd2_3703);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3695,
								(int) (((long) 8)), BgL_ppzd2ifzd2_3704);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3695,
								(int) (((long) 9)), BgL_ppzd2defunzd2_3706);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3695,
								(int) (((long) 10)), BgL_ppzd2definezd2_3707);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3695,
								(int) (((long) 11)), BgL_ppzd2lambdazd2_3708);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3695,
								(int) (((long) 12)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2commentzd2_3695,
								(int) (((long) 13)), BgL_widthz00_8);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3695,
								(int) (((long) 14)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2commentzd2_3695,
								(int) (((long) 15)), BgL_displayzf3zf3_7);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3695,
								(int) (((long) 16)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2commentzd2_3695,
								(int) (((long) 17)), BgL_outputz00_9);
							PROCEDURE_SET(BgL_ppzd2commentzd2_3695,
								(int) (((long) 18)), BgL_ppzd2exprzd2_3696);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3708,
								(int) (((long) 0)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3708,
								(int) (((long) 1)), BgL_ppzd2exprzd2defunz00_3705);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3708,
								(int) (((long) 2)), BgL_widthz00_8);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3708,
								(int) (((long) 3)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3708,
								(int) (((long) 4)), BgL_displayzf3zf3_7);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3708,
								(int) (((long) 5)), BgL_ppzd2exprzd2listz00_3697);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3708,
								(int) (((long) 6)), BgL_ppzd2commentzd2_3695);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3708,
								(int) (((long) 7)), BgL_ppzd2dozd2_3698);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3708,
								(int) (((long) 8)), BgL_ppzd2beginzd2_3699);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3708,
								(int) (((long) 9)), BgL_ppzd2letzd2_3700);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3708,
								(int) (((long) 10)), BgL_ppzd2andzd2_3701);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3708,
								(int) (((long) 11)), BgL_ppzd2casezd2_3702);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3708,
								(int) (((long) 12)), BgL_ppzd2condzd2_3703);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3708,
								(int) (((long) 13)), BgL_ppzd2ifzd2_3704);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3708,
								(int) (((long) 14)), BgL_ppzd2defunzd2_3706);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3708,
								(int) (((long) 15)), BgL_ppzd2definezd2_3707);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3708,
								(int) (((long) 16)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3708,
								(int) (((long) 17)), BgL_outputz00_9);
							PROCEDURE_SET(BgL_ppzd2lambdazd2_3708,
								(int) (((long) 18)), BgL_ppzd2exprzd2_3696);
							PROCEDURE_SET(BgL_ppzd2letzd2_3700,
								(int) (((long) 0)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2letzd2_3700,
								(int) (((long) 1)), BgL_ppzd2exprzd2defunz00_3705);
							PROCEDURE_SET(BgL_ppzd2letzd2_3700,
								(int) (((long) 2)), BgL_ppzd2commentzd2_3695);
							PROCEDURE_SET(BgL_ppzd2letzd2_3700,
								(int) (((long) 3)), BgL_ppzd2dozd2_3698);
							PROCEDURE_SET(BgL_ppzd2letzd2_3700,
								(int) (((long) 4)), BgL_ppzd2beginzd2_3699);
							PROCEDURE_SET(BgL_ppzd2letzd2_3700,
								(int) (((long) 5)), BgL_ppzd2andzd2_3701);
							PROCEDURE_SET(BgL_ppzd2letzd2_3700,
								(int) (((long) 6)), BgL_ppzd2casezd2_3702);
							PROCEDURE_SET(BgL_ppzd2letzd2_3700,
								(int) (((long) 7)), BgL_ppzd2condzd2_3703);
							PROCEDURE_SET(BgL_ppzd2letzd2_3700,
								(int) (((long) 8)), BgL_ppzd2ifzd2_3704);
							PROCEDURE_SET(BgL_ppzd2letzd2_3700,
								(int) (((long) 9)), BgL_ppzd2defunzd2_3706);
							PROCEDURE_SET(BgL_ppzd2letzd2_3700,
								(int) (((long) 10)), BgL_ppzd2definezd2_3707);
							PROCEDURE_SET(BgL_ppzd2letzd2_3700,
								(int) (((long) 11)), BgL_ppzd2lambdazd2_3708);
							PROCEDURE_SET(BgL_ppzd2letzd2_3700,
								(int) (((long) 12)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2letzd2_3700,
								(int) (((long) 13)), BgL_widthz00_8);
							PROCEDURE_SET(BgL_ppzd2letzd2_3700,
								(int) (((long) 14)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2letzd2_3700,
								(int) (((long) 15)), BgL_displayzf3zf3_7);
							PROCEDURE_SET(BgL_ppzd2letzd2_3700,
								(int) (((long) 16)), BgL_outputz00_9);
							PROCEDURE_SET(BgL_ppzd2letzd2_3700,
								(int) (((long) 17)), BgL_ppzd2exprzd2listz00_3697);
							PROCEDURE_SET(BgL_ppzd2letzd2_3700,
								(int) (((long) 18)), BgL_ppzd2exprzd2_3696);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3706,
								(int) (((long) 0)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2defunzd2_3706,
								(int) (((long) 1)), BgL_ppzd2exprzd2listz00_3697);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3706,
								(int) (((long) 2)), BgL_ppzd2commentzd2_3695);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3706,
								(int) (((long) 3)), BgL_ppzd2dozd2_3698);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3706,
								(int) (((long) 4)), BgL_ppzd2beginzd2_3699);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3706,
								(int) (((long) 5)), BgL_ppzd2letzd2_3700);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3706,
								(int) (((long) 6)), BgL_ppzd2andzd2_3701);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3706,
								(int) (((long) 7)), BgL_ppzd2casezd2_3702);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3706,
								(int) (((long) 8)), BgL_ppzd2condzd2_3703);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3706,
								(int) (((long) 9)), BgL_ppzd2ifzd2_3704);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3706,
								(int) (((long) 10)), BgL_ppzd2definezd2_3707);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3706,
								(int) (((long) 11)), BgL_ppzd2lambdazd2_3708);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3706,
								(int) (((long) 12)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2defunzd2_3706,
								(int) (((long) 13)), BgL_widthz00_8);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3706,
								(int) (((long) 14)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2defunzd2_3706,
								(int) (((long) 15)), BgL_displayzf3zf3_7);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3706,
								(int) (((long) 16)), BgL_ppzd2exprzd2defunz00_3705);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3706,
								(int) (((long) 17)), BgL_ppzd2exprzd2_3696);
							PROCEDURE_SET(BgL_ppzd2defunzd2_3706,
								(int) (((long) 18)), BgL_outputz00_9);
							PROCEDURE_SET(BgL_ppzd2definezd2_3707,
								(int) (((long) 0)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2definezd2_3707,
								(int) (((long) 1)), BgL_ppzd2exprzd2defunz00_3705);
							PROCEDURE_SET(BgL_ppzd2definezd2_3707,
								(int) (((long) 2)), BgL_ppzd2commentzd2_3695);
							PROCEDURE_SET(BgL_ppzd2definezd2_3707,
								(int) (((long) 3)), BgL_ppzd2dozd2_3698);
							PROCEDURE_SET(BgL_ppzd2definezd2_3707,
								(int) (((long) 4)), BgL_ppzd2beginzd2_3699);
							PROCEDURE_SET(BgL_ppzd2definezd2_3707,
								(int) (((long) 5)), BgL_ppzd2letzd2_3700);
							PROCEDURE_SET(BgL_ppzd2definezd2_3707,
								(int) (((long) 6)), BgL_ppzd2andzd2_3701);
							PROCEDURE_SET(BgL_ppzd2definezd2_3707,
								(int) (((long) 7)), BgL_ppzd2casezd2_3702);
							PROCEDURE_SET(BgL_ppzd2definezd2_3707,
								(int) (((long) 8)), BgL_ppzd2condzd2_3703);
							PROCEDURE_SET(BgL_ppzd2definezd2_3707,
								(int) (((long) 9)), BgL_ppzd2ifzd2_3704);
							PROCEDURE_SET(BgL_ppzd2definezd2_3707,
								(int) (((long) 10)), BgL_ppzd2defunzd2_3706);
							PROCEDURE_SET(BgL_ppzd2definezd2_3707,
								(int) (((long) 11)), BgL_ppzd2lambdazd2_3708);
							PROCEDURE_SET(BgL_ppzd2definezd2_3707,
								(int) (((long) 12)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2definezd2_3707,
								(int) (((long) 13)), BgL_widthz00_8);
							PROCEDURE_SET(BgL_ppzd2definezd2_3707,
								(int) (((long) 14)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2definezd2_3707,
								(int) (((long) 15)), BgL_displayzf3zf3_7);
							PROCEDURE_SET(BgL_ppzd2definezd2_3707,
								(int) (((long) 16)), BgL_ppzd2exprzd2listz00_3697);
							PROCEDURE_SET(BgL_ppzd2definezd2_3707,
								(int) (((long) 17)), BgL_ppzd2exprzd2_3696);
							PROCEDURE_SET(BgL_ppzd2definezd2_3707,
								(int) (((long) 18)), BgL_outputz00_9);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3705,
								(int) (((long) 0)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3705,
								(int) (((long) 1)), BgL_widthz00_8);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3705,
								(int) (((long) 2)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3705,
								(int) (((long) 3)), BgL_displayzf3zf3_7);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3705,
								(int) (((long) 4)), BgL_ppzd2exprzd2listz00_3697);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3705,
								(int) (((long) 5)), BgL_ppzd2commentzd2_3695);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3705,
								(int) (((long) 6)), BgL_ppzd2dozd2_3698);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3705,
								(int) (((long) 7)), BgL_ppzd2beginzd2_3699);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3705,
								(int) (((long) 8)), BgL_ppzd2letzd2_3700);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3705,
								(int) (((long) 9)), BgL_ppzd2andzd2_3701);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3705,
								(int) (((long) 10)), BgL_ppzd2casezd2_3702);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3705,
								(int) (((long) 11)), BgL_ppzd2condzd2_3703);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3705,
								(int) (((long) 12)), BgL_ppzd2ifzd2_3704);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3705,
								(int) (((long) 13)), BgL_ppzd2defunzd2_3706);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3705,
								(int) (((long) 14)), BgL_ppzd2definezd2_3707);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3705,
								(int) (((long) 15)), BgL_ppzd2lambdazd2_3708);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3705,
								(int) (((long) 16)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3705,
								(int) (((long) 17)), BgL_outputz00_9);
							PROCEDURE_SET(BgL_ppzd2exprzd2defunz00_3705,
								(int) (((long) 18)), BgL_ppzd2exprzd2_3696);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3697,
								(int) (((long) 0)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3697,
								(int) (((long) 1)), BgL_ppzd2exprzd2defunz00_3705);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3697,
								(int) (((long) 2)), BgL_widthz00_8);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3697,
								(int) (((long) 3)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3697,
								(int) (((long) 4)), BgL_displayzf3zf3_7);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3697,
								(int) (((long) 5)), BgL_ppzd2commentzd2_3695);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3697,
								(int) (((long) 6)), BgL_ppzd2dozd2_3698);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3697,
								(int) (((long) 7)), BgL_ppzd2beginzd2_3699);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3697,
								(int) (((long) 8)), BgL_ppzd2letzd2_3700);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3697,
								(int) (((long) 9)), BgL_ppzd2andzd2_3701);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3697,
								(int) (((long) 10)), BgL_ppzd2casezd2_3702);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3697,
								(int) (((long) 11)), BgL_ppzd2condzd2_3703);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3697,
								(int) (((long) 12)), BgL_ppzd2ifzd2_3704);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3697,
								(int) (((long) 13)), BgL_ppzd2defunzd2_3706);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3697,
								(int) (((long) 14)), BgL_ppzd2definezd2_3707);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3697,
								(int) (((long) 15)), BgL_ppzd2lambdazd2_3708);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3697,
								(int) (((long) 16)), BINT(((long) 5)));
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3697,
								(int) (((long) 17)), BgL_outputz00_9);
							PROCEDURE_SET(BgL_ppzd2exprzd2listz00_3697,
								(int) (((long) 18)), BgL_ppzd2exprzd2_3696);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3696,
								(int) (((long) 0)), BINT(((long) 2)));
							PROCEDURE_SET(BgL_ppzd2exprzd2_3696,
								(int) (((long) 1)), BgL_ppzd2exprzd2defunz00_3705);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3696,
								(int) (((long) 2)), BgL_widthz00_8);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3696,
								(int) (((long) 3)), BINT(((long) 50)));
							PROCEDURE_SET(BgL_ppzd2exprzd2_3696,
								(int) (((long) 4)), BgL_displayzf3zf3_7);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3696,
								(int) (((long) 5)), BgL_ppzd2exprzd2listz00_3697);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3696,
								(int) (((long) 6)), BgL_ppzd2commentzd2_3695);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3696,
								(int) (((long) 7)), BgL_ppzd2dozd2_3698);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3696,
								(int) (((long) 8)), BgL_ppzd2beginzd2_3699);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3696,
								(int) (((long) 9)), BgL_ppzd2letzd2_3700);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3696,
								(int) (((long) 10)), BgL_ppzd2andzd2_3701);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3696,
								(int) (((long) 11)), BgL_ppzd2casezd2_3702);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3696,
								(int) (((long) 12)), BgL_ppzd2condzd2_3703);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3696,
								(int) (((long) 13)), BgL_ppzd2ifzd2_3704);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3696,
								(int) (((long) 14)), BgL_ppzd2defunzd2_3706);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3696,
								(int) (((long) 15)), BgL_ppzd2definezd2_3707);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3696,
								(int) (((long) 16)), BgL_ppzd2lambdazd2_3708);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3696,
								(int) (((long) 17)), BgL_outputz00_9);
							PROCEDURE_SET(BgL_ppzd2exprzd2_3696,
								(int) (((long) 18)), BINT(((long) 5)));
							BgL_arg1232z00_1173 =
								BGl_z62prz62zz__ppz00(BgL_ppzd2exprzd2_3696, BgL_outputz00_9,
								BgL_displayzf3zf3_7, ((long) 50), BgL_widthz00_8, ((long) 5),
								BgL_ppzd2lambdazd2_3708, BgL_ppzd2definezd2_3707,
								BgL_ppzd2defunzd2_3706, BgL_ppzd2ifzd2_3704,
								BgL_ppzd2condzd2_3703, BgL_ppzd2casezd2_3702,
								BgL_ppzd2andzd2_3701, BgL_ppzd2letzd2_3700,
								BgL_ppzd2beginzd2_3699, BgL_ppzd2dozd2_3698,
								BgL_ppzd2commentzd2_3695, BgL_ppzd2exprzd2listz00_3697,
								BgL_ppzd2exprzd2defunz00_3705, ((long) 2), BgL_objz00_1397,
								BINT(BgL_colz00_1398), BINT(((long) 0)), BgL_ppzd2exprzd2_3696);
						}
						if (CBOOL(BgL_arg1232z00_1173))
							{	/* Pp/pp.scm 133 */
								if (CBOOL(
										((obj_t(*)())PROCEDURE_L_ENTRY(BgL_outputz00_9))
										(BgL_outputz00_9, BgL_arg1229z00_1172)))
									{	/* Pp/pp.scm 133 */
										return
											ADDFX(BgL_arg1232z00_1173,
											BINT(STRING_LENGTH(BgL_arg1229z00_1172)));
									}
								else
									{	/* Pp/pp.scm 133 */
										return BFALSE;
									}
							}
						else
							{	/* Pp/pp.scm 133 */
								return BFALSE;
							}
					}
				else
					{	/* Pp/pp.scm 460 */
						return
							BGl_z62wrz62zz__ppz00(BgL_displayzf3zf3_7, BgL_outputz00_9,
							BgL_objz00_6, BINT(((long) 0)));
		}}}

	}



/* &pp-down */
	obj_t BGl_z62ppzd2downzb0zz__ppz00(obj_t BgL_outputz00_3731,
		obj_t BgL_ppzd2exprzd2_3730, obj_t BgL_displayzf3zf3_3729,
		long BgL_maxzd2exprzd2widthz00_3728, obj_t BgL_widthz00_3727,
		long BgL_maxzd2callzd2headzd2widthzd2_3726, obj_t BgL_ppzd2lambdazd2_3725,
		obj_t BgL_ppzd2definezd2_3724, obj_t BgL_ppzd2defunzd2_3723,
		obj_t BgL_ppzd2ifzd2_3722, obj_t BgL_ppzd2condzd2_3721,
		obj_t BgL_ppzd2casezd2_3720, obj_t BgL_ppzd2andzd2_3719,
		obj_t BgL_ppzd2letzd2_3718, obj_t BgL_ppzd2beginzd2_3717,
		obj_t BgL_ppzd2dozd2_3716, obj_t BgL_ppzd2commentzd2_3715,
		obj_t BgL_ppzd2exprzd2listz00_3714, obj_t BgL_ppzd2exprzd2defunz00_3713,
		long BgL_indentzd2generalzd2_3712, obj_t BgL_lz00_1513,
		obj_t BgL_col1z00_1514, obj_t BgL_col2z00_1515, obj_t BgL_extraz00_1516,
		obj_t BgL_ppzd2itemzd2_1517)
	{
		{	/* Pp/pp.scm 332 */
			{
				obj_t BgL_lz00_1520;
				obj_t BgL_colz00_1521;

				BgL_lz00_1520 = BgL_lz00_1513;
				BgL_colz00_1521 = BgL_col1z00_1514;
			BgL_zc3z04anonymousza31435ze3z87_1522:
				if (CBOOL(BgL_colz00_1521))
					{	/* Pp/pp.scm 319 */
						if (PAIRP(BgL_lz00_1520))
							{	/* Pp/pp.scm 321 */
								obj_t BgL_restz00_1525;

								BgL_restz00_1525 = CDR(BgL_lz00_1520);
								{	/* Pp/pp.scm 322 */
									long BgL_extraz00_1526;

									if (NULLP(BgL_restz00_1525))
										{	/* Pp/pp.scm 322 */
											BgL_extraz00_1526 =
												((long) CINT(BgL_extraz00_1516) + ((long) 1));
										}
									else
										{	/* Pp/pp.scm 322 */
											BgL_extraz00_1526 = ((long) 0);
										}
									{
										obj_t BgL_colz00_4930;
										obj_t BgL_lz00_4929;

										BgL_lz00_4929 = BgL_restz00_1525;
										BgL_colz00_4930 =
											BGl_z62prz62zz__ppz00(BgL_ppzd2exprzd2_3730,
											BgL_outputz00_3731, BgL_displayzf3zf3_3729,
											BgL_maxzd2exprzd2widthz00_3728, BgL_widthz00_3727,
											BgL_maxzd2callzd2headzd2widthzd2_3726,
											BgL_ppzd2lambdazd2_3725, BgL_ppzd2definezd2_3724,
											BgL_ppzd2defunzd2_3723, BgL_ppzd2ifzd2_3722,
											BgL_ppzd2condzd2_3721, BgL_ppzd2casezd2_3720,
											BgL_ppzd2andzd2_3719, BgL_ppzd2letzd2_3718,
											BgL_ppzd2beginzd2_3717, BgL_ppzd2dozd2_3716,
											BgL_ppzd2commentzd2_3715, BgL_ppzd2exprzd2listz00_3714,
											BgL_ppzd2exprzd2defunz00_3713,
											BgL_indentzd2generalzd2_3712, CAR(BgL_lz00_1520),
											BGl_z62indentz62zz__ppz00(BgL_outputz00_3731,
												BgL_col2z00_1515, BgL_colz00_1521),
											BINT(BgL_extraz00_1526), BgL_ppzd2itemzd2_1517);
										BgL_colz00_1521 = BgL_colz00_4930;
										BgL_lz00_1520 = BgL_lz00_4929;
										goto BgL_zc3z04anonymousza31435ze3z87_1522;
									}
								}
							}
						else
							{	/* Pp/pp.scm 320 */
								if (NULLP(BgL_lz00_1520))
									{	/* Pp/pp.scm 325 */
										if (CBOOL(BgL_colz00_1521))
											{	/* Pp/pp.scm 133 */
												obj_t BgL__andtest_1044z00_2959;

												BgL__andtest_1044z00_2959 =
													PROCEDURE_L_ENTRY(BgL_outputz00_3731)
													(BgL_outputz00_3731, BGl_string2275z00zz__ppz00);
												if (CBOOL(BgL__andtest_1044z00_2959))
													{	/* Pp/pp.scm 133 */
														return ADDFX(BgL_colz00_1521, BINT(((long) 1)));
													}
												else
													{	/* Pp/pp.scm 133 */
														return BFALSE;
													}
											}
										else
											{	/* Pp/pp.scm 133 */
												return BFALSE;
											}
									}
								else
									{	/* Pp/pp.scm 330 */
										obj_t BgL_arg1442z00_1532;

										{	/* Pp/pp.scm 330 */
											obj_t BgL_arg1443z00_1533;
											long BgL_arg1444z00_1534;

											{	/* Pp/pp.scm 330 */
												obj_t BgL_arg1445z00_1535;

												{	/* Pp/pp.scm 330 */
													obj_t BgL_arg1446z00_1536;

													BgL_arg1446z00_1536 =
														BGl_z62indentz62zz__ppz00(BgL_outputz00_3731,
														BgL_col2z00_1515, BgL_colz00_1521);
													if (CBOOL(BgL_arg1446z00_1536))
														{	/* Pp/pp.scm 133 */
															obj_t BgL__andtest_1044z00_2967;

															BgL__andtest_1044z00_2967 =
																PROCEDURE_L_ENTRY(BgL_outputz00_3731)
																(BgL_outputz00_3731,
																BGl_string2276z00zz__ppz00);
															if (CBOOL(BgL__andtest_1044z00_2967))
																{	/* Pp/pp.scm 133 */
																	BgL_arg1445z00_1535 =
																		ADDFX(BgL_arg1446z00_1536,
																		BINT(((long) 1)));
																}
															else
																{	/* Pp/pp.scm 133 */
																	BgL_arg1445z00_1535 = BFALSE;
																}
														}
													else
														{	/* Pp/pp.scm 133 */
															BgL_arg1445z00_1535 = BFALSE;
														}
												}
												BgL_arg1443z00_1533 =
													BGl_z62indentz62zz__ppz00(BgL_outputz00_3731,
													BgL_col2z00_1515, BgL_arg1445z00_1535);
											}
											BgL_arg1444z00_1534 =
												((long) CINT(BgL_extraz00_1516) + ((long) 1));
											BgL_arg1442z00_1532 =
												BGl_z62prz62zz__ppz00(BgL_ppzd2exprzd2_3730,
												BgL_outputz00_3731, BgL_displayzf3zf3_3729,
												BgL_maxzd2exprzd2widthz00_3728, BgL_widthz00_3727,
												BgL_maxzd2callzd2headzd2widthzd2_3726,
												BgL_ppzd2lambdazd2_3725, BgL_ppzd2definezd2_3724,
												BgL_ppzd2defunzd2_3723, BgL_ppzd2ifzd2_3722,
												BgL_ppzd2condzd2_3721, BgL_ppzd2casezd2_3720,
												BgL_ppzd2andzd2_3719, BgL_ppzd2letzd2_3718,
												BgL_ppzd2beginzd2_3717, BgL_ppzd2dozd2_3716,
												BgL_ppzd2commentzd2_3715, BgL_ppzd2exprzd2listz00_3714,
												BgL_ppzd2exprzd2defunz00_3713,
												BgL_indentzd2generalzd2_3712, BgL_lz00_1520,
												BgL_arg1443z00_1533, BINT(BgL_arg1444z00_1534),
												BgL_ppzd2itemzd2_1517);
										}
										if (CBOOL(BgL_arg1442z00_1532))
											{	/* Pp/pp.scm 133 */
												obj_t BgL__andtest_1044z00_2977;

												BgL__andtest_1044z00_2977 =
													PROCEDURE_L_ENTRY(BgL_outputz00_3731)
													(BgL_outputz00_3731, BGl_string2275z00zz__ppz00);
												if (CBOOL(BgL__andtest_1044z00_2977))
													{	/* Pp/pp.scm 133 */
														return ADDFX(BgL_arg1442z00_1532, BINT(((long) 1)));
													}
												else
													{	/* Pp/pp.scm 133 */
														return BFALSE;
													}
											}
										else
											{	/* Pp/pp.scm 133 */
												return BFALSE;
											}
									}
							}
					}
				else
					{	/* Pp/pp.scm 319 */
						return BFALSE;
					}
			}
		}

	}



/* &wr */
	obj_t BGl_z62wrz62zz__ppz00(obj_t BgL_displayzf3zf3_3733,
		obj_t BgL_outputz00_3732, obj_t BgL_objz00_1209, obj_t BgL_colz00_1210)
	{
		{	/* Pp/pp.scm 140 */
		BGl_z62wrz62zz__ppz00:
			{
				obj_t BgL_lz00_1373;
				obj_t BgL_colz00_1374;

				{	/* Pp/pp.scm 151 */
					bool_t BgL_test2438z00_4973;

					if (PAIRP(BgL_objz00_1209))
						{	/* Pp/pp.scm 151 */
							obj_t BgL_cdrzd2105zd2_1354;

							BgL_cdrzd2105zd2_1354 = CDR(BgL_objz00_1209);
							if ((CAR(BgL_objz00_1209) == BGl_symbol2281z00zz__ppz00))
								{	/* Pp/pp.scm 151 */
									if (PAIRP(BgL_cdrzd2105zd2_1354))
										{	/* Pp/pp.scm 151 */
											obj_t BgL_cdrzd2107zd2_1357;

											BgL_cdrzd2107zd2_1357 = CDR(BgL_cdrzd2105zd2_1354);
											if (INTEGERP(CAR(BgL_cdrzd2105zd2_1354)))
												{	/* Pp/pp.scm 151 */
													if (PAIRP(BgL_cdrzd2107zd2_1357))
														{	/* Pp/pp.scm 151 */
															bool_t BgL_test2444z00_4988;

															{	/* Pp/pp.scm 151 */
																obj_t BgL_tmpz00_4989;

																BgL_tmpz00_4989 = CAR(BgL_cdrzd2107zd2_1357);
																BgL_test2444z00_4988 = STRINGP(BgL_tmpz00_4989);
															}
															if (BgL_test2444z00_4988)
																{	/* Pp/pp.scm 151 */
																	BgL_test2438z00_4973 =
																		NULLP(CDR(BgL_cdrzd2107zd2_1357));
																}
															else
																{	/* Pp/pp.scm 151 */
																	BgL_test2438z00_4973 = ((bool_t) 0);
																}
														}
													else
														{	/* Pp/pp.scm 151 */
															BgL_test2438z00_4973 = ((bool_t) 0);
														}
												}
											else
												{	/* Pp/pp.scm 151 */
													BgL_test2438z00_4973 = ((bool_t) 0);
												}
										}
									else
										{	/* Pp/pp.scm 151 */
											BgL_test2438z00_4973 = ((bool_t) 0);
										}
								}
							else
								{	/* Pp/pp.scm 151 */
									BgL_test2438z00_4973 = ((bool_t) 0);
								}
						}
					else
						{	/* Pp/pp.scm 151 */
							BgL_test2438z00_4973 = ((bool_t) 0);
						}
					if (BgL_test2438z00_4973)
						{	/* Pp/pp.scm 156 */
							obj_t BgL_addz00_1235;

							{	/* Pp/pp.scm 156 */
								long BgL_arg1280z00_1241;

								{	/* Pp/pp.scm 156 */
									obj_t BgL_tmpz00_4994;

									{	/* Pp/pp.scm 156 */
										obj_t BgL_auxz00_4995;

										{	/* Pp/pp.scm 156 */
											obj_t BgL_stringz00_2358;

											BgL_stringz00_2358 = CAR(CDR(CDR(BgL_objz00_1209)));
											BgL_auxz00_4995 = BINT(STRING_LENGTH(BgL_stringz00_2358));
										}
										BgL_tmpz00_4994 =
											BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_auxz00_4995,
											BINT(((long) 3)));
									}
									BgL_arg1280z00_1241 = (long) CINT(BgL_tmpz00_4994);
								}
								BgL_addz00_1235 =
									BGl_2zd2zd2zz__r4_numbers_6_5z00
									(BGl_za2ppzd2widthza2zd2zz__ppz00, BINT(BgL_arg1280z00_1241));
							}
							if (((long) CINT(BgL_addz00_1235) <= ((long) 0)))
								{	/* Pp/pp.scm 158 */
									obj_t BgL_arg1274z00_1237;

									BgL_arg1274z00_1237 = CAR(CDR(CDR(BgL_objz00_1209)));
									if (CBOOL(BgL_colz00_1210))
										{	/* Pp/pp.scm 133 */
											obj_t BgL__andtest_1044z00_2369;

											BgL__andtest_1044z00_2369 =
												PROCEDURE_L_ENTRY(BgL_outputz00_3732)
												(BgL_outputz00_3732, BgL_arg1274z00_1237);
											if (CBOOL(BgL__andtest_1044z00_2369))
												{	/* Pp/pp.scm 133 */
													return
														ADDFX(BgL_colz00_1210,
														BINT(STRING_LENGTH(((obj_t) BgL_arg1274z00_1237))));
												}
											else
												{	/* Pp/pp.scm 133 */
													return BFALSE;
												}
										}
									else
										{	/* Pp/pp.scm 133 */
											return BFALSE;
										}
								}
							else
								{	/* Pp/pp.scm 159 */
									obj_t BgL_arg1275z00_1238;

									BgL_arg1275z00_1238 =
										string_append(CAR(CDR(CDR(BgL_objz00_1209))),
										make_string(
											(long) CINT(BgL_addz00_1235), ((unsigned char) ' ')));
									if (CBOOL(BgL_colz00_1210))
										{	/* Pp/pp.scm 133 */
											obj_t BgL__andtest_1044z00_2385;

											BgL__andtest_1044z00_2385 =
												PROCEDURE_L_ENTRY(BgL_outputz00_3732)
												(BgL_outputz00_3732, BgL_arg1275z00_1238);
											if (CBOOL(BgL__andtest_1044z00_2385))
												{	/* Pp/pp.scm 133 */
													return
														ADDFX(BgL_colz00_1210,
														BINT(STRING_LENGTH(BgL_arg1275z00_1238)));
												}
											else
												{	/* Pp/pp.scm 133 */
													return BFALSE;
												}
										}
									else
										{	/* Pp/pp.scm 133 */
											return BFALSE;
										}
								}
						}
					else
						{	/* Pp/pp.scm 151 */
							if (PAIRP(BgL_objz00_1209))
								{	/* Pp/pp.scm 161 */
									if (BGl_z62readzd2macrozf3z43zz__ppz00(BgL_objz00_1209))
										{
											obj_t BgL_colz00_5048;
											obj_t BgL_objz00_5045;

											BgL_objz00_5045 = CAR(CDR(BgL_objz00_1209));
											BgL_colz00_5048 =
												BGl_outze70ze7zz__ppz00(BgL_outputz00_3732,
												BGl_z62readzd2macrozd2prefixz62zz__ppz00
												(BgL_objz00_1209), BgL_colz00_1210);
											BgL_colz00_1210 = BgL_colz00_5048;
											BgL_objz00_1209 = BgL_objz00_5045;
											goto BGl_z62wrz62zz__ppz00;
										}
									else
										{	/* Pp/pp.scm 138 */
											BgL_lz00_1373 = BgL_objz00_1209;
											BgL_colz00_1374 = BgL_colz00_1210;
										BgL_zc3z04anonymousza31372ze3z87_1375:
											if (NULLP(BgL_lz00_1373))
												{	/* Pp/pp.scm 143 */
													if (CBOOL(BgL_colz00_1374))
														{	/* Pp/pp.scm 133 */
															obj_t BgL__andtest_1044z00_2333;

															BgL__andtest_1044z00_2333 =
																PROCEDURE_L_ENTRY(BgL_outputz00_3732)
																(BgL_outputz00_3732,
																BGl_string2277z00zz__ppz00);
															if (CBOOL(BgL__andtest_1044z00_2333))
																{	/* Pp/pp.scm 133 */
																	return
																		ADDFX(BgL_colz00_1374, BINT(((long) 2)));
																}
															else
																{	/* Pp/pp.scm 133 */
																	return BFALSE;
																}
														}
													else
														{	/* Pp/pp.scm 133 */
															return BFALSE;
														}
												}
											else
												{	/* Pp/pp.scm 144 */
													obj_t BgL_g1045z00_1377;
													obj_t BgL_g1046z00_1378;

													BgL_g1045z00_1377 = CDR(BgL_lz00_1373);
													{	/* Pp/pp.scm 144 */
														obj_t BgL_arg1383z00_1393;
														obj_t BgL_arg1384z00_1394;

														BgL_arg1383z00_1393 = CAR(BgL_lz00_1373);
														if (CBOOL(BgL_colz00_1374))
															{	/* Pp/pp.scm 133 */
																obj_t BgL__andtest_1044z00_2289;

																BgL__andtest_1044z00_2289 =
																	PROCEDURE_L_ENTRY(BgL_outputz00_3732)
																	(BgL_outputz00_3732,
																	BGl_string2278z00zz__ppz00);
																if (CBOOL(BgL__andtest_1044z00_2289))
																	{	/* Pp/pp.scm 133 */
																		BgL_arg1384z00_1394 =
																			ADDFX(BgL_colz00_1374, BINT(((long) 1)));
																	}
																else
																	{	/* Pp/pp.scm 133 */
																		BgL_arg1384z00_1394 = BFALSE;
																	}
															}
														else
															{	/* Pp/pp.scm 133 */
																BgL_arg1384z00_1394 = BFALSE;
															}
														BgL_g1046z00_1378 =
															BGl_z62wrz62zz__ppz00(BgL_displayzf3zf3_3733,
															BgL_outputz00_3732, BgL_arg1383z00_1393,
															BgL_arg1384z00_1394);
													}
													{
														obj_t BgL_lz00_1380;
														obj_t BgL_colz00_1381;

														BgL_lz00_1380 = BgL_g1045z00_1377;
														BgL_colz00_1381 = BgL_g1046z00_1378;
													BgL_zc3z04anonymousza31374ze3z87_1382:
														if (CBOOL(BgL_colz00_1381))
															{	/* Pp/pp.scm 145 */
																if (PAIRP(BgL_lz00_1380))
																	{	/* Pp/pp.scm 146 */
																		obj_t BgL_arg1376z00_1385;
																		obj_t BgL_arg1377z00_1386;

																		BgL_arg1376z00_1385 = CDR(BgL_lz00_1380);
																		{	/* Pp/pp.scm 146 */
																			obj_t BgL_arg1378z00_1387;
																			obj_t BgL_arg1379z00_1388;

																			BgL_arg1378z00_1387 = CAR(BgL_lz00_1380);
																			if (CBOOL(BgL_colz00_1381))
																				{	/* Pp/pp.scm 133 */
																					obj_t BgL__andtest_1044z00_2300;

																					BgL__andtest_1044z00_2300 =
																						PROCEDURE_L_ENTRY
																						(BgL_outputz00_3732)
																						(BgL_outputz00_3732,
																						BGl_string2279z00zz__ppz00);
																					if (CBOOL(BgL__andtest_1044z00_2300))
																						{	/* Pp/pp.scm 133 */
																							BgL_arg1379z00_1388 =
																								ADDFX(BgL_colz00_1381,
																								BINT(((long) 1)));
																						}
																					else
																						{	/* Pp/pp.scm 133 */
																							BgL_arg1379z00_1388 = BFALSE;
																						}
																				}
																			else
																				{	/* Pp/pp.scm 133 */
																					BgL_arg1379z00_1388 = BFALSE;
																				}
																			BgL_arg1377z00_1386 =
																				BGl_z62wrz62zz__ppz00
																				(BgL_displayzf3zf3_3733,
																				BgL_outputz00_3732, BgL_arg1378z00_1387,
																				BgL_arg1379z00_1388);
																		}
																		{
																			obj_t BgL_colz00_5094;
																			obj_t BgL_lz00_5093;

																			BgL_lz00_5093 = BgL_arg1376z00_1385;
																			BgL_colz00_5094 = BgL_arg1377z00_1386;
																			BgL_colz00_1381 = BgL_colz00_5094;
																			BgL_lz00_1380 = BgL_lz00_5093;
																			goto
																				BgL_zc3z04anonymousza31374ze3z87_1382;
																		}
																	}
																else
																	{	/* Pp/pp.scm 146 */
																		if (NULLP(BgL_lz00_1380))
																			{	/* Pp/pp.scm 147 */
																				if (CBOOL(BgL_colz00_1381))
																					{	/* Pp/pp.scm 133 */
																						obj_t BgL__andtest_1044z00_2309;

																						BgL__andtest_1044z00_2309 =
																							PROCEDURE_L_ENTRY
																							(BgL_outputz00_3732)
																							(BgL_outputz00_3732,
																							BGl_string2275z00zz__ppz00);
																						if (CBOOL
																							(BgL__andtest_1044z00_2309))
																							{	/* Pp/pp.scm 133 */
																								return
																									ADDFX(BgL_colz00_1381,
																									BINT(((long) 1)));
																							}
																						else
																							{	/* Pp/pp.scm 133 */
																								return BFALSE;
																							}
																					}
																				else
																					{	/* Pp/pp.scm 133 */
																						return BFALSE;
																					}
																			}
																		else
																			{	/* Pp/pp.scm 148 */
																				obj_t BgL_arg1381z00_1390;

																				{	/* Pp/pp.scm 148 */
																					obj_t BgL_arg1382z00_1391;

																					if (CBOOL(BgL_colz00_1381))
																						{	/* Pp/pp.scm 133 */
																							obj_t BgL__andtest_1044z00_2317;

																							BgL__andtest_1044z00_2317 =
																								PROCEDURE_L_ENTRY
																								(BgL_outputz00_3732)
																								(BgL_outputz00_3732,
																								BGl_string2280z00zz__ppz00);
																							if (CBOOL
																								(BgL__andtest_1044z00_2317))
																								{	/* Pp/pp.scm 133 */
																									BgL_arg1382z00_1391 =
																										ADDFX(BgL_colz00_1381,
																										BINT(((long) 3)));
																								}
																							else
																								{	/* Pp/pp.scm 133 */
																									BgL_arg1382z00_1391 = BFALSE;
																								}
																						}
																					else
																						{	/* Pp/pp.scm 133 */
																							BgL_arg1382z00_1391 = BFALSE;
																						}
																					BgL_arg1381z00_1390 =
																						BGl_z62wrz62zz__ppz00
																						(BgL_displayzf3zf3_3733,
																						BgL_outputz00_3732, BgL_lz00_1380,
																						BgL_arg1382z00_1391);
																				}
																				if (CBOOL(BgL_arg1381z00_1390))
																					{	/* Pp/pp.scm 133 */
																						obj_t BgL__andtest_1044z00_2325;

																						BgL__andtest_1044z00_2325 =
																							PROCEDURE_L_ENTRY
																							(BgL_outputz00_3732)
																							(BgL_outputz00_3732,
																							BGl_string2275z00zz__ppz00);
																						if (CBOOL
																							(BgL__andtest_1044z00_2325))
																							{	/* Pp/pp.scm 133 */
																								return
																									ADDFX(BgL_arg1381z00_1390,
																									BINT(((long) 1)));
																							}
																						else
																							{	/* Pp/pp.scm 133 */
																								return BFALSE;
																							}
																					}
																				else
																					{	/* Pp/pp.scm 133 */
																						return BFALSE;
																					}
																			}
																	}
															}
														else
															{	/* Pp/pp.scm 145 */
																return BFALSE;
															}
													}
												}
										}
								}
							else
								{	/* Pp/pp.scm 161 */
									if (NULLP(BgL_objz00_1209))
										{
											obj_t BgL_colz00_5131;
											obj_t BgL_lz00_5130;

											BgL_lz00_5130 = BgL_objz00_1209;
											BgL_colz00_5131 = BgL_colz00_1210;
											BgL_colz00_1374 = BgL_colz00_5131;
											BgL_lz00_1373 = BgL_lz00_5130;
											goto BgL_zc3z04anonymousza31372ze3z87_1375;
										}
									else
										{	/* Pp/pp.scm 163 */
											if (VECTORP(BgL_objz00_1209))
												{	/* Pp/pp.scm 166 */
													obj_t BgL_arg1286z00_1247;
													obj_t BgL_arg1287z00_1248;

													BgL_arg1286z00_1247 =
														BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00
														(BgL_objz00_1209);
													{	/* Pp/pp.scm 167 */
														obj_t BgL_arg1288z00_1249;

														BgL_arg1288z00_1249 =
															BGl_vectorzd2prefixzd2zz__ppz00(BgL_objz00_1209);
														if (CBOOL(BgL_colz00_1210))
															{	/* Pp/pp.scm 133 */
																obj_t BgL__andtest_1044z00_2404;

																BgL__andtest_1044z00_2404 =
																	PROCEDURE_L_ENTRY(BgL_outputz00_3732)
																	(BgL_outputz00_3732, BgL_arg1288z00_1249);
																if (CBOOL(BgL__andtest_1044z00_2404))
																	{	/* Pp/pp.scm 133 */
																		BgL_arg1287z00_1248 =
																			ADDFX(BgL_colz00_1210,
																			BINT(STRING_LENGTH(BgL_arg1288z00_1249)));
																	}
																else
																	{	/* Pp/pp.scm 133 */
																		BgL_arg1287z00_1248 = BFALSE;
																	}
															}
														else
															{	/* Pp/pp.scm 133 */
																BgL_arg1287z00_1248 = BFALSE;
															}
													}
													{
														obj_t BgL_colz00_5148;
														obj_t BgL_lz00_5147;

														BgL_lz00_5147 = BgL_arg1286z00_1247;
														BgL_colz00_5148 = BgL_arg1287z00_1248;
														BgL_colz00_1374 = BgL_colz00_5148;
														BgL_lz00_1373 = BgL_lz00_5147;
														goto BgL_zc3z04anonymousza31372ze3z87_1375;
													}
												}
											else
												{	/* Pp/pp.scm 165 */
													if (BOOLEANP(BgL_objz00_1209))
														{	/* Pp/pp.scm 169 */
															obj_t BgL_arg1290z00_1251;

															if (CBOOL(BgL_objz00_1209))
																{	/* Pp/pp.scm 169 */
																	BgL_arg1290z00_1251 =
																		BGl_string2283z00zz__ppz00;
																}
															else
																{	/* Pp/pp.scm 169 */
																	BgL_arg1290z00_1251 =
																		BGl_string2284z00zz__ppz00;
																}
															if (CBOOL(BgL_colz00_1210))
																{	/* Pp/pp.scm 133 */
																	obj_t BgL__andtest_1044z00_2413;

																	BgL__andtest_1044z00_2413 =
																		PROCEDURE_L_ENTRY(BgL_outputz00_3732)
																		(BgL_outputz00_3732, BgL_arg1290z00_1251);
																	if (CBOOL(BgL__andtest_1044z00_2413))
																		{	/* Pp/pp.scm 133 */
																			return
																				ADDFX(BgL_colz00_1210,
																				BINT(STRING_LENGTH
																					(BgL_arg1290z00_1251)));
																		}
																	else
																		{	/* Pp/pp.scm 133 */
																			return BFALSE;
																		}
																}
															else
																{	/* Pp/pp.scm 133 */
																	return BFALSE;
																}
														}
													else
														{	/* Pp/pp.scm 168 */
															if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
																(BgL_objz00_1209))
																{	/* Pp/pp.scm 170 */
																	if (ELONGP(BgL_objz00_1209))
																		{	/* Pp/pp.scm 173 */
																			obj_t BgL_arg1295z00_1254;

																			{	/* Pp/pp.scm 173 */
																				obj_t BgL_arg1296z00_1255;

																				{	/* Ieee/number.scm 164 */

																					BgL_arg1296z00_1255 =
																						BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																						(BgL_objz00_1209,
																						BINT(((long) 10)));
																				}
																				BgL_arg1295z00_1254 =
																					string_append
																					(BGl_string2285z00zz__ppz00,
																					BgL_arg1296z00_1255);
																			}
																			if (CBOOL(BgL_colz00_1210))
																				{	/* Pp/pp.scm 133 */
																					obj_t BgL__andtest_1044z00_2422;

																					BgL__andtest_1044z00_2422 =
																						PROCEDURE_L_ENTRY
																						(BgL_outputz00_3732)
																						(BgL_outputz00_3732,
																						BgL_arg1295z00_1254);
																					if (CBOOL(BgL__andtest_1044z00_2422))
																						{	/* Pp/pp.scm 133 */
																							return
																								ADDFX(BgL_colz00_1210,
																								BINT(STRING_LENGTH
																									(BgL_arg1295z00_1254)));
																						}
																					else
																						{	/* Pp/pp.scm 133 */
																							return BFALSE;
																						}
																				}
																			else
																				{	/* Pp/pp.scm 133 */
																					return BFALSE;
																				}
																		}
																	else
																		{	/* Pp/pp.scm 172 */
																			if (LLONGP(BgL_objz00_1209))
																				{	/* Pp/pp.scm 175 */
																					obj_t BgL_arg1298z00_1259;

																					{	/* Pp/pp.scm 175 */
																						obj_t BgL_arg1299z00_1260;

																						{	/* Ieee/number.scm 164 */

																							BgL_arg1299z00_1260 =
																								BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																								(BgL_objz00_1209,
																								BINT(((long) 10)));
																						}
																						BgL_arg1298z00_1259 =
																							string_append
																							(BGl_string2286z00zz__ppz00,
																							BgL_arg1299z00_1260);
																					}
																					if (CBOOL(BgL_colz00_1210))
																						{	/* Pp/pp.scm 133 */
																							obj_t BgL__andtest_1044z00_2431;

																							BgL__andtest_1044z00_2431 =
																								PROCEDURE_L_ENTRY
																								(BgL_outputz00_3732)
																								(BgL_outputz00_3732,
																								BgL_arg1298z00_1259);
																							if (CBOOL
																								(BgL__andtest_1044z00_2431))
																								{	/* Pp/pp.scm 133 */
																									return
																										ADDFX(BgL_colz00_1210,
																										BINT(STRING_LENGTH
																											(BgL_arg1298z00_1259)));
																								}
																							else
																								{	/* Pp/pp.scm 133 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Pp/pp.scm 133 */
																							return BFALSE;
																						}
																				}
																			else
																				{	/* Pp/pp.scm 174 */
																					if (BGL_UINT8P(BgL_objz00_1209))
																						{	/* Pp/pp.scm 177 */
																							obj_t BgL_arg1301z00_1264;

																							{	/* Pp/pp.scm 177 */
																								obj_t BgL_arg1302z00_1265;

																								{	/* Ieee/number.scm 164 */

																									BgL_arg1302z00_1265 =
																										BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																										(BgL_objz00_1209,
																										BINT(((long) 10)));
																								}
																								BgL_arg1301z00_1264 =
																									string_append
																									(BGl_string2287z00zz__ppz00,
																									BgL_arg1302z00_1265);
																							}
																							if (CBOOL(BgL_colz00_1210))
																								{	/* Pp/pp.scm 133 */
																									obj_t
																										BgL__andtest_1044z00_2440;
																									BgL__andtest_1044z00_2440 =
																										PROCEDURE_L_ENTRY
																										(BgL_outputz00_3732)
																										(BgL_outputz00_3732,
																										BgL_arg1301z00_1264);
																									if (CBOOL
																										(BgL__andtest_1044z00_2440))
																										{	/* Pp/pp.scm 133 */
																											return
																												ADDFX(BgL_colz00_1210,
																												BINT(STRING_LENGTH
																													(BgL_arg1301z00_1264)));
																										}
																									else
																										{	/* Pp/pp.scm 133 */
																											return BFALSE;
																										}
																								}
																							else
																								{	/* Pp/pp.scm 133 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Pp/pp.scm 176 */
																							if (BGL_UINT16P(BgL_objz00_1209))
																								{	/* Pp/pp.scm 179 */
																									obj_t BgL_arg1304z00_1269;

																									{	/* Pp/pp.scm 179 */
																										obj_t BgL_arg1306z00_1270;

																										{	/* Ieee/number.scm 164 */

																											BgL_arg1306z00_1270 =
																												BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																												(BgL_objz00_1209,
																												BINT(((long) 10)));
																										}
																										BgL_arg1304z00_1269 =
																											string_append
																											(BGl_string2288z00zz__ppz00,
																											BgL_arg1306z00_1270);
																									}
																									if (CBOOL(BgL_colz00_1210))
																										{	/* Pp/pp.scm 133 */
																											obj_t
																												BgL__andtest_1044z00_2449;
																											BgL__andtest_1044z00_2449
																												=
																												PROCEDURE_L_ENTRY
																												(BgL_outputz00_3732)
																												(BgL_outputz00_3732,
																												BgL_arg1304z00_1269);
																											if (CBOOL
																												(BgL__andtest_1044z00_2449))
																												{	/* Pp/pp.scm 133 */
																													return
																														ADDFX
																														(BgL_colz00_1210,
																														BINT(STRING_LENGTH
																															(BgL_arg1304z00_1269)));
																												}
																											else
																												{	/* Pp/pp.scm 133 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Pp/pp.scm 133 */
																											return BFALSE;
																										}
																								}
																							else
																								{	/* Pp/pp.scm 178 */
																									if (BGL_UINT32P
																										(BgL_objz00_1209))
																										{	/* Pp/pp.scm 181 */
																											obj_t BgL_arg1308z00_1274;

																											{	/* Pp/pp.scm 181 */
																												obj_t
																													BgL_arg1309z00_1275;
																												{	/* Ieee/number.scm 164 */

																													BgL_arg1309z00_1275 =
																														BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																														(BgL_objz00_1209,
																														BINT(((long) 10)));
																												}
																												BgL_arg1308z00_1274 =
																													string_append
																													(BGl_string2289z00zz__ppz00,
																													BgL_arg1309z00_1275);
																											}
																											if (CBOOL
																												(BgL_colz00_1210))
																												{	/* Pp/pp.scm 133 */
																													obj_t
																														BgL__andtest_1044z00_2458;
																													BgL__andtest_1044z00_2458
																														=
																														PROCEDURE_L_ENTRY
																														(BgL_outputz00_3732)
																														(BgL_outputz00_3732,
																														BgL_arg1308z00_1274);
																													if (CBOOL
																														(BgL__andtest_1044z00_2458))
																														{	/* Pp/pp.scm 133 */
																															return
																																ADDFX
																																(BgL_colz00_1210,
																																BINT
																																(STRING_LENGTH
																																	(BgL_arg1308z00_1274)));
																														}
																													else
																														{	/* Pp/pp.scm 133 */
																															return BFALSE;
																														}
																												}
																											else
																												{	/* Pp/pp.scm 133 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Pp/pp.scm 180 */
																											if (BGL_INT8P
																												(BgL_objz00_1209))
																												{	/* Pp/pp.scm 183 */
																													obj_t
																														BgL_arg1311z00_1279;
																													{	/* Pp/pp.scm 183 */
																														obj_t
																															BgL_arg1312z00_1280;
																														{	/* Ieee/number.scm 164 */

																															BgL_arg1312z00_1280
																																=
																																BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																																(BgL_objz00_1209,
																																BINT(((long)
																																		10)));
																														}
																														BgL_arg1311z00_1279
																															=
																															string_append
																															(BGl_string2290z00zz__ppz00,
																															BgL_arg1312z00_1280);
																													}
																													if (CBOOL
																														(BgL_colz00_1210))
																														{	/* Pp/pp.scm 133 */
																															obj_t
																																BgL__andtest_1044z00_2467;
																															BgL__andtest_1044z00_2467
																																=
																																PROCEDURE_L_ENTRY
																																(BgL_outputz00_3732)
																																(BgL_outputz00_3732,
																																BgL_arg1311z00_1279);
																															if (CBOOL
																																(BgL__andtest_1044z00_2467))
																																{	/* Pp/pp.scm 133 */
																																	return
																																		ADDFX
																																		(BgL_colz00_1210,
																																		BINT
																																		(STRING_LENGTH
																																			(BgL_arg1311z00_1279)));
																																}
																															else
																																{	/* Pp/pp.scm 133 */
																																	return BFALSE;
																																}
																														}
																													else
																														{	/* Pp/pp.scm 133 */
																															return BFALSE;
																														}
																												}
																											else
																												{	/* Pp/pp.scm 182 */
																													if (BGL_INT16P
																														(BgL_objz00_1209))
																														{	/* Pp/pp.scm 185 */
																															obj_t
																																BgL_arg1314z00_1284;
																															{	/* Pp/pp.scm 185 */
																																obj_t
																																	BgL_arg1315z00_1285;
																																{	/* Ieee/number.scm 164 */

																																	BgL_arg1315z00_1285
																																		=
																																		BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																																		(BgL_objz00_1209,
																																		BINT(((long)
																																				10)));
																																}
																																BgL_arg1314z00_1284
																																	=
																																	string_append
																																	(BGl_string2291z00zz__ppz00,
																																	BgL_arg1315z00_1285);
																															}
																															if (CBOOL
																																(BgL_colz00_1210))
																																{	/* Pp/pp.scm 133 */
																																	obj_t
																																		BgL__andtest_1044z00_2476;
																																	BgL__andtest_1044z00_2476
																																		=
																																		PROCEDURE_L_ENTRY
																																		(BgL_outputz00_3732)
																																		(BgL_outputz00_3732,
																																		BgL_arg1314z00_1284);
																																	if (CBOOL
																																		(BgL__andtest_1044z00_2476))
																																		{	/* Pp/pp.scm 133 */
																																			return
																																				ADDFX
																																				(BgL_colz00_1210,
																																				BINT
																																				(STRING_LENGTH
																																					(BgL_arg1314z00_1284)));
																																		}
																																	else
																																		{	/* Pp/pp.scm 133 */
																																			return
																																				BFALSE;
																																		}
																																}
																															else
																																{	/* Pp/pp.scm 133 */
																																	return BFALSE;
																																}
																														}
																													else
																														{	/* Pp/pp.scm 184 */
																															if (BGL_INT32P
																																(BgL_objz00_1209))
																																{	/* Pp/pp.scm 187 */
																																	obj_t
																																		BgL_arg1317z00_1289;
																																	{	/* Pp/pp.scm 187 */
																																		obj_t
																																			BgL_arg1318z00_1290;
																																		{	/* Ieee/number.scm 164 */

																																			BgL_arg1318z00_1290
																																				=
																																				BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																																				(BgL_objz00_1209,
																																				BINT((
																																						(long)
																																						10)));
																																		}
																																		BgL_arg1317z00_1289
																																			=
																																			string_append
																																			(BGl_string2292z00zz__ppz00,
																																			BgL_arg1318z00_1290);
																																	}
																																	if (CBOOL
																																		(BgL_colz00_1210))
																																		{	/* Pp/pp.scm 133 */
																																			obj_t
																																				BgL__andtest_1044z00_2485;
																																			BgL__andtest_1044z00_2485
																																				=
																																				PROCEDURE_L_ENTRY
																																				(BgL_outputz00_3732)
																																				(BgL_outputz00_3732,
																																				BgL_arg1317z00_1289);
																																			if (CBOOL
																																				(BgL__andtest_1044z00_2485))
																																				{	/* Pp/pp.scm 133 */
																																					return
																																						ADDFX
																																						(BgL_colz00_1210,
																																						BINT
																																						(STRING_LENGTH
																																							(BgL_arg1317z00_1289)));
																																				}
																																			else
																																				{	/* Pp/pp.scm 133 */
																																					return
																																						BFALSE;
																																				}
																																		}
																																	else
																																		{	/* Pp/pp.scm 133 */
																																			return
																																				BFALSE;
																																		}
																																}
																															else
																																{	/* Pp/pp.scm 189 */
																																	obj_t
																																		BgL_arg1319z00_1293;
																																	{	/* Ieee/number.scm 164 */

																																		BgL_arg1319z00_1293
																																			=
																																			BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																																			(BgL_objz00_1209,
																																			BINT((
																																					(long)
																																					10)));
																																	}
																																	if (CBOOL
																																		(BgL_colz00_1210))
																																		{	/* Pp/pp.scm 133 */
																																			obj_t
																																				BgL__andtest_1044z00_2493;
																																			BgL__andtest_1044z00_2493
																																				=
																																				PROCEDURE_L_ENTRY
																																				(BgL_outputz00_3732)
																																				(BgL_outputz00_3732,
																																				BgL_arg1319z00_1293);
																																			if (CBOOL
																																				(BgL__andtest_1044z00_2493))
																																				{	/* Pp/pp.scm 133 */
																																					return
																																						ADDFX
																																						(BgL_colz00_1210,
																																						BINT
																																						(STRING_LENGTH
																																							(BgL_arg1319z00_1293)));
																																				}
																																			else
																																				{	/* Pp/pp.scm 133 */
																																					return
																																						BFALSE;
																																				}
																																		}
																																	else
																																		{	/* Pp/pp.scm 133 */
																																			return
																																				BFALSE;
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
															else
																{	/* Pp/pp.scm 170 */
																	if (SYMBOLP(BgL_objz00_1209))
																		{	/* Pp/pp.scm 191 */
																			obj_t BgL_pz00_1297;

																			{	/* Pp/pp.scm 191 */

																				{	/* Ieee/port.scm 453 */

																					BgL_pz00_1297 =
																						BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00
																						(BTRUE);
																				}
																			}
																			if (CBOOL(BgL_displayzf3zf3_3733))
																				{	/* Pp/pp.scm 192 */
																					bgl_display_obj(BgL_objz00_1209,
																						BgL_pz00_1297);
																				}
																			else
																				{	/* Pp/pp.scm 194 */
																					obj_t BgL_list1321z00_1298;

																					BgL_list1321z00_1298 =
																						MAKE_YOUNG_PAIR(BgL_pz00_1297,
																						BNIL);
																					BGl_writez00zz__r4_output_6_10_3z00
																						(BgL_objz00_1209,
																						BgL_list1321z00_1298);
																				}
																			{	/* Pp/pp.scm 195 */
																				obj_t BgL_casezd2valuezd2_1299;

																				BgL_casezd2valuezd2_1299 =
																					BGl_za2ppzd2caseza2zd2zz__ppz00;
																				if ((BgL_casezd2valuezd2_1299 ==
																						BGl_symbol2268z00zz__ppz00))
																					{	/* Pp/pp.scm 197 */
																						obj_t BgL_arg1324z00_1301;

																						BgL_arg1324z00_1301 =
																							bgl_close_output_port
																							(BgL_pz00_1297);
																						if (CBOOL(BgL_colz00_1210))
																							{	/* Pp/pp.scm 133 */
																								obj_t BgL__andtest_1044z00_2505;

																								BgL__andtest_1044z00_2505 =
																									PROCEDURE_L_ENTRY
																									(BgL_outputz00_3732)
																									(BgL_outputz00_3732,
																									BgL_arg1324z00_1301);
																								if (CBOOL
																									(BgL__andtest_1044z00_2505))
																									{	/* Pp/pp.scm 133 */
																										return
																											ADDFX(BgL_colz00_1210,
																											BINT(STRING_LENGTH(
																													((obj_t)
																														BgL_arg1324z00_1301))));
																									}
																								else
																									{	/* Pp/pp.scm 133 */
																										return BFALSE;
																									}
																							}
																						else
																							{	/* Pp/pp.scm 133 */
																								return BFALSE;
																							}
																					}
																				else
																					{	/* Pp/pp.scm 195 */
																						if (
																							(BgL_casezd2valuezd2_1299 ==
																								BGl_symbol2293z00zz__ppz00))
																							{	/* Pp/pp.scm 199 */
																								obj_t BgL_arg1326z00_1303;

																								BgL_arg1326z00_1303 =
																									BGl_stringzd2upcasezd2zz__r4_strings_6_7z00
																									(bgl_close_output_port
																									(BgL_pz00_1297));
																								if (CBOOL(BgL_colz00_1210))
																									{	/* Pp/pp.scm 133 */
																										obj_t
																											BgL__andtest_1044z00_2516;
																										BgL__andtest_1044z00_2516 =
																											PROCEDURE_L_ENTRY
																											(BgL_outputz00_3732)
																											(BgL_outputz00_3732,
																											BgL_arg1326z00_1303);
																										if (CBOOL
																											(BgL__andtest_1044z00_2516))
																											{	/* Pp/pp.scm 133 */
																												return
																													ADDFX(BgL_colz00_1210,
																													BINT(STRING_LENGTH
																														(BgL_arg1326z00_1303)));
																											}
																										else
																											{	/* Pp/pp.scm 133 */
																												return BFALSE;
																											}
																									}
																								else
																									{	/* Pp/pp.scm 133 */
																										return BFALSE;
																									}
																							}
																						else
																							{	/* Pp/pp.scm 202 */
																								obj_t BgL_arg1328z00_1305;

																								BgL_arg1328z00_1305 =
																									BGl_stringzd2downcasezd2zz__r4_strings_6_7z00
																									(bgl_close_output_port
																									(BgL_pz00_1297));
																								if (CBOOL(BgL_colz00_1210))
																									{	/* Pp/pp.scm 133 */
																										obj_t
																											BgL__andtest_1044z00_2525;
																										BgL__andtest_1044z00_2525 =
																											PROCEDURE_L_ENTRY
																											(BgL_outputz00_3732)
																											(BgL_outputz00_3732,
																											BgL_arg1328z00_1305);
																										if (CBOOL
																											(BgL__andtest_1044z00_2525))
																											{	/* Pp/pp.scm 133 */
																												return
																													ADDFX(BgL_colz00_1210,
																													BINT(STRING_LENGTH
																														(BgL_arg1328z00_1305)));
																											}
																										else
																											{	/* Pp/pp.scm 133 */
																												return BFALSE;
																											}
																									}
																								else
																									{	/* Pp/pp.scm 133 */
																										return BFALSE;
																									}
																							}
																					}
																			}
																		}
																	else
																		{	/* Pp/pp.scm 190 */
																			if (PROCEDUREP(BgL_objz00_1209))
																				{	/* Pp/pp.scm 205 */
																					obj_t BgL_arg1331z00_1309;

																					{	/* Pp/pp.scm 205 */
																						obj_t
																							BgL_zc3z04anonymousza31334ze3z87_3690;
																						BgL_zc3z04anonymousza31334ze3z87_3690
																							=
																							MAKE_FX_PROCEDURE
																							(BGl_z62zc3z04anonymousza31334ze3ze5zz__ppz00,
																							(int) (((long) 0)),
																							(int) (((long) 1)));
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31334ze3z87_3690,
																							(int) (((long) 0)),
																							BgL_objz00_1209);
																						BgL_arg1331z00_1309 =
																							BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
																							(BgL_zc3z04anonymousza31334ze3z87_3690);
																					}
																					if (CBOOL(BgL_colz00_1210))
																						{	/* Pp/pp.scm 133 */
																							obj_t BgL__andtest_1044z00_2537;

																							BgL__andtest_1044z00_2537 =
																								PROCEDURE_L_ENTRY
																								(BgL_outputz00_3732)
																								(BgL_outputz00_3732,
																								BgL_arg1331z00_1309);
																							if (CBOOL
																								(BgL__andtest_1044z00_2537))
																								{	/* Pp/pp.scm 133 */
																									return
																										ADDFX(BgL_colz00_1210,
																										BINT(STRING_LENGTH
																											(BgL_arg1331z00_1309)));
																								}
																							else
																								{	/* Pp/pp.scm 133 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Pp/pp.scm 133 */
																							return BFALSE;
																						}
																				}
																			else
																				{	/* Pp/pp.scm 204 */
																					if (STRINGP(BgL_objz00_1209))
																						{	/* Pp/pp.scm 207 */
																							obj_t BgL_objz00_1315;

																							BgL_objz00_1315 =
																								string_for_read
																								(BgL_objz00_1209);
																							if (CBOOL(BgL_displayzf3zf3_3733))
																								{	/* Pp/pp.scm 208 */
																									if (CBOOL(BgL_colz00_1210))
																										{	/* Pp/pp.scm 133 */
																											obj_t
																												BgL__andtest_1044z00_2548;
																											BgL__andtest_1044z00_2548
																												=
																												PROCEDURE_L_ENTRY
																												(BgL_outputz00_3732)
																												(BgL_outputz00_3732,
																												BgL_objz00_1315);
																											if (CBOOL
																												(BgL__andtest_1044z00_2548))
																												{	/* Pp/pp.scm 133 */
																													return
																														ADDFX
																														(BgL_colz00_1210,
																														BINT(STRING_LENGTH
																															(BgL_objz00_1315)));
																												}
																											else
																												{	/* Pp/pp.scm 133 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Pp/pp.scm 133 */
																											return BFALSE;
																										}
																								}
																							else
																								{	/* Pp/pp.scm 210 */
																									obj_t BgL_g1048z00_1316;

																									{	/* Pp/pp.scm 212 */
																										obj_t BgL_arg1344z00_1330;

																										if (BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00())
																											{	/* Pp/pp.scm 212 */
																												BgL_arg1344z00_1330 =
																													BGl_string2295z00zz__ppz00;
																											}
																										else
																											{	/* Pp/pp.scm 212 */
																												BgL_arg1344z00_1330 =
																													BGl_string2296z00zz__ppz00;
																											}
																										if (CBOOL(BgL_colz00_1210))
																											{	/* Pp/pp.scm 133 */
																												obj_t
																													BgL__andtest_1044z00_2556;
																												BgL__andtest_1044z00_2556
																													=
																													PROCEDURE_L_ENTRY
																													(BgL_outputz00_3732)
																													(BgL_outputz00_3732,
																													BgL_arg1344z00_1330);
																												if (CBOOL
																													(BgL__andtest_1044z00_2556))
																													{	/* Pp/pp.scm 133 */
																														BgL_g1048z00_1316 =
																															ADDFX
																															(BgL_colz00_1210,
																															BINT(STRING_LENGTH
																																(BgL_arg1344z00_1330)));
																													}
																												else
																													{	/* Pp/pp.scm 133 */
																														BgL_g1048z00_1316 =
																															BFALSE;
																													}
																											}
																										else
																											{	/* Pp/pp.scm 133 */
																												BgL_g1048z00_1316 =
																													BFALSE;
																											}
																									}
																									{
																										long BgL_jz00_2628;

																										BgL_jz00_2628 = ((long) 0);
																									BgL_loopz00_2627:
																										{	/* Pp/pp.scm 216 */
																											bool_t
																												BgL_test2523z00_5406;
																											if (CBOOL
																												(BgL_g1048z00_1316))
																												{	/* Pp/pp.scm 216 */
																													BgL_test2523z00_5406 =
																														(BgL_jz00_2628 <
																														STRING_LENGTH
																														(BgL_objz00_1315));
																												}
																											else
																												{	/* Pp/pp.scm 216 */
																													BgL_test2523z00_5406 =
																														((bool_t) 0);
																												}
																											if (BgL_test2523z00_5406)
																												{
																													long BgL_jz00_5411;

																													BgL_jz00_5411 =
																														(BgL_jz00_2628 +
																														((long) 1));
																													BgL_jz00_2628 =
																														BgL_jz00_5411;
																													goto BgL_loopz00_2627;
																												}
																											else
																												{	/* Pp/pp.scm 220 */
																													obj_t
																														BgL_arg1341z00_2633;
																													BgL_arg1341z00_2633 =
																														BGl_outze70ze7zz__ppz00
																														(BgL_outputz00_3732,
																														c_substring
																														(BgL_objz00_1315,
																															((long) 0),
																															BgL_jz00_2628),
																														BgL_g1048z00_1316);
																													if (CBOOL
																														(BgL_arg1341z00_2633))
																														{	/* Pp/pp.scm 133 */
																															obj_t
																																BgL__andtest_1044z00_2649;
																															BgL__andtest_1044z00_2649
																																=
																																PROCEDURE_L_ENTRY
																																(BgL_outputz00_3732)
																																(BgL_outputz00_3732,
																																BGl_string2296z00zz__ppz00);
																															if (CBOOL
																																(BgL__andtest_1044z00_2649))
																																{	/* Pp/pp.scm 133 */
																																	return
																																		ADDFX
																																		(BgL_arg1341z00_2633,
																																		BINT(((long)
																																				1)));
																																}
																															else
																																{	/* Pp/pp.scm 133 */
																																	return BFALSE;
																																}
																														}
																													else
																														{	/* Pp/pp.scm 133 */
																															return BFALSE;
																														}
																												}
																										}
																									}
																								}
																						}
																					else
																						{	/* Pp/pp.scm 206 */
																							if (CHARP(BgL_objz00_1209))
																								{	/* Pp/pp.scm 222 */
																									if (CBOOL
																										(BgL_displayzf3zf3_3733))
																										{	/* Pp/pp.scm 224 */
																											obj_t BgL_arg1347z00_1333;

																											BgL_arg1347z00_1333 =
																												make_string(((long) 1),
																												CCHAR(BgL_objz00_1209));
																											if (CBOOL
																												(BgL_colz00_1210))
																												{	/* Pp/pp.scm 133 */
																													obj_t
																														BgL__andtest_1044z00_2659;
																													BgL__andtest_1044z00_2659
																														=
																														PROCEDURE_L_ENTRY
																														(BgL_outputz00_3732)
																														(BgL_outputz00_3732,
																														BgL_arg1347z00_1333);
																													if (CBOOL
																														(BgL__andtest_1044z00_2659))
																														{	/* Pp/pp.scm 133 */
																															return
																																ADDFX
																																(BgL_colz00_1210,
																																BINT
																																(STRING_LENGTH
																																	(BgL_arg1347z00_1333)));
																														}
																													else
																														{	/* Pp/pp.scm 133 */
																															return BFALSE;
																														}
																												}
																											else
																												{	/* Pp/pp.scm 133 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Pp/pp.scm 225 */
																											obj_t BgL_pz00_1334;

																											{	/* Pp/pp.scm 225 */

																												{	/* Ieee/port.scm 453 */

																													BgL_pz00_1334 =
																														BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00
																														(BTRUE);
																												}
																											}
																											{	/* Pp/pp.scm 226 */
																												obj_t
																													BgL_list1348z00_1335;
																												BgL_list1348z00_1335 =
																													MAKE_YOUNG_PAIR
																													(BgL_pz00_1334, BNIL);
																												BGl_writez00zz__r4_output_6_10_3z00
																													(BgL_objz00_1209,
																													BgL_list1348z00_1335);
																											}
																											{	/* Pp/pp.scm 227 */
																												obj_t
																													BgL_arg1350z00_1336;
																												BgL_arg1350z00_1336 =
																													bgl_close_output_port
																													(BgL_pz00_1334);
																												if (CBOOL
																													(BgL_colz00_1210))
																													{	/* Pp/pp.scm 133 */
																														obj_t
																															BgL__andtest_1044z00_2668;
																														BgL__andtest_1044z00_2668
																															=
																															PROCEDURE_L_ENTRY
																															(BgL_outputz00_3732)
																															(BgL_outputz00_3732,
																															BgL_arg1350z00_1336);
																														if (CBOOL
																															(BgL__andtest_1044z00_2668))
																															{	/* Pp/pp.scm 133 */
																																return
																																	ADDFX
																																	(BgL_colz00_1210,
																																	BINT
																																	(STRING_LENGTH
																																		(((obj_t)
																																				BgL_arg1350z00_1336))));
																															}
																														else
																															{	/* Pp/pp.scm 133 */
																																return BFALSE;
																															}
																													}
																												else
																													{	/* Pp/pp.scm 133 */
																														return BFALSE;
																													}
																											}
																										}
																								}
																							else
																								{	/* Pp/pp.scm 222 */
																									if (INPUT_PORTP
																										(BgL_objz00_1209))
																										{	/* Pp/pp.scm 228 */
																											if (CBOOL
																												(BgL_colz00_1210))
																												{	/* Pp/pp.scm 133 */
																													obj_t
																														BgL__andtest_1044z00_2676;
																													BgL__andtest_1044z00_2676
																														=
																														PROCEDURE_L_ENTRY
																														(BgL_outputz00_3732)
																														(BgL_outputz00_3732,
																														BGl_string2297z00zz__ppz00);
																													if (CBOOL
																														(BgL__andtest_1044z00_2676))
																														{	/* Pp/pp.scm 133 */
																															return
																																ADDFX
																																(BgL_colz00_1210,
																																BINT(((long)
																																		13)));
																														}
																													else
																														{	/* Pp/pp.scm 133 */
																															return BFALSE;
																														}
																												}
																											else
																												{	/* Pp/pp.scm 133 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Pp/pp.scm 228 */
																											if (OUTPUT_PORTP
																												(BgL_objz00_1209))
																												{	/* Pp/pp.scm 230 */
																													if (CBOOL
																														(BgL_colz00_1210))
																														{	/* Pp/pp.scm 133 */
																															obj_t
																																BgL__andtest_1044z00_2684;
																															BgL__andtest_1044z00_2684
																																=
																																PROCEDURE_L_ENTRY
																																(BgL_outputz00_3732)
																																(BgL_outputz00_3732,
																																BGl_string2298z00zz__ppz00);
																															if (CBOOL
																																(BgL__andtest_1044z00_2684))
																																{	/* Pp/pp.scm 133 */
																																	return
																																		ADDFX
																																		(BgL_colz00_1210,
																																		BINT(((long)
																																				14)));
																																}
																															else
																																{	/* Pp/pp.scm 133 */
																																	return BFALSE;
																																}
																														}
																													else
																														{	/* Pp/pp.scm 133 */
																															return BFALSE;
																														}
																												}
																											else
																												{	/* Pp/pp.scm 232 */
																													bool_t
																														BgL_test2539z00_5482;
																													{	/* Pp/pp.scm 232 */
																														bool_t
																															BgL_res2038z00_2691;
																														BgL_res2038z00_2691
																															=
																															EOF_OBJECTP
																															(BgL_objz00_1209);
																														BgL_test2539z00_5482
																															=
																															BgL_res2038z00_2691;
																													}
																													if (BgL_test2539z00_5482)
																														{	/* Pp/pp.scm 232 */
																															if (CBOOL
																																(BgL_colz00_1210))
																																{	/* Pp/pp.scm 133 */
																																	obj_t
																																		BgL__andtest_1044z00_2693;
																																	BgL__andtest_1044z00_2693
																																		=
																																		PROCEDURE_L_ENTRY
																																		(BgL_outputz00_3732)
																																		(BgL_outputz00_3732,
																																		BGl_string2299z00zz__ppz00);
																																	if (CBOOL
																																		(BgL__andtest_1044z00_2693))
																																		{	/* Pp/pp.scm 133 */
																																			return
																																				ADDFX
																																				(BgL_colz00_1210,
																																				BINT((
																																						(long)
																																						13)));
																																		}
																																	else
																																		{	/* Pp/pp.scm 133 */
																																			return
																																				BFALSE;
																																		}
																																}
																															else
																																{	/* Pp/pp.scm 133 */
																																	return BFALSE;
																																}
																														}
																													else
																														{	/* Pp/pp.scm 232 */
																															if (BGL_OBJECTP
																																(BgL_objz00_1209))
																																{	/* Pp/pp.scm 236 */
																																	obj_t
																																		BgL_arg1355z00_1342;
																																	{	/* Pp/pp.scm 236 */
																																		obj_t
																																			BgL_arg1356z00_1343;
																																		{	/* Pp/pp.scm 236 */
																																			obj_t
																																				BgL_arg1357z00_1344;
																																			{	/* Pp/pp.scm 236 */
																																				obj_t
																																					BgL_arg1359z00_1345;
																																				{	/* Pp/pp.scm 236 */
																																					long
																																						BgL_arg1883z00_2702;
																																					{	/* Pp/pp.scm 236 */
																																						long
																																							BgL_arg1884z00_2703;
																																						{	/* Pp/pp.scm 236 */
																																							long
																																								BgL_res2042z00_2705;
																																							BgL_res2042z00_2705
																																								=
																																								BGL_OBJECT_CLASS_NUM
																																								(
																																								((BgL_objectz00_bglt) BgL_objz00_1209));
																																							BgL_arg1884z00_2703
																																								=
																																								BgL_res2042z00_2705;
																																						}
																																						BgL_arg1883z00_2702
																																							=
																																							(BgL_arg1884z00_2703
																																							-
																																							OBJECT_TYPE);
																																					}
																																					BgL_arg1359z00_1345
																																						=
																																						VECTOR_REF
																																						(BGl_za2classesza2z00zz__objectz00,
																																						BgL_arg1883z00_2702);
																																				}
																																				BgL_arg1357z00_1344
																																					=
																																					BGl_classzd2namezd2zz__objectz00
																																					(BgL_arg1359z00_1345);
																																			}
																																			{	/* Pp/pp.scm 236 */
																																				obj_t
																																					BgL_res2044z00_2713;
																																				{	/* Pp/pp.scm 236 */
																																					obj_t
																																						BgL_arg1711z00_2712;
																																					BgL_arg1711z00_2712
																																						=
																																						SYMBOL_TO_STRING
																																						(BgL_arg1357z00_1344);
																																					BgL_res2044z00_2713
																																						=
																																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																						(BgL_arg1711z00_2712);
																																				}
																																				BgL_arg1356z00_1343
																																					=
																																					BgL_res2044z00_2713;
																																		}}
																																		BgL_arg1355z00_1342
																																			=
																																			string_append_3
																																			(BGl_string2300z00zz__ppz00,
																																			BgL_arg1356z00_1343,
																																			BGl_string2301z00zz__ppz00);
																																	}
																																	if (CBOOL
																																		(BgL_colz00_1210))
																																		{	/* Pp/pp.scm 133 */
																																			obj_t
																																				BgL__andtest_1044z00_2715;
																																			BgL__andtest_1044z00_2715
																																				=
																																				PROCEDURE_L_ENTRY
																																				(BgL_outputz00_3732)
																																				(BgL_outputz00_3732,
																																				BgL_arg1355z00_1342);
																																			if (CBOOL
																																				(BgL__andtest_1044z00_2715))
																																				{	/* Pp/pp.scm 133 */
																																					return
																																						ADDFX
																																						(BgL_colz00_1210,
																																						BINT
																																						(STRING_LENGTH
																																							(BgL_arg1355z00_1342)));
																																				}
																																			else
																																				{	/* Pp/pp.scm 133 */
																																					return
																																						BFALSE;
																																				}
																																		}
																																	else
																																		{	/* Pp/pp.scm 133 */
																																			return
																																				BFALSE;
																																		}
																																}
																															else
																																{	/* Pp/pp.scm 239 */
																																	obj_t
																																		BgL_arg1360z00_1346;
																																	{	/* Pp/pp.scm 239 */
																																		obj_t
																																			BgL_pz00_1347;
																																		{	/* Pp/pp.scm 239 */

																																			{	/* Ieee/port.scm 453 */

																																				BgL_pz00_1347
																																					=
																																					BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00
																																					(BTRUE);
																																			}
																																		}
																																		{	/* Pp/pp.scm 240 */
																																			obj_t
																																				BgL_list1361z00_1348;
																																			BgL_list1361z00_1348
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_pz00_1347,
																																				BNIL);
																																			BGl_writez00zz__r4_output_6_10_3z00
																																				(BgL_objz00_1209,
																																				BgL_list1361z00_1348);
																																		}
																																		BgL_arg1360z00_1346
																																			=
																																			bgl_close_output_port
																																			(BgL_pz00_1347);
																																	}
																																	if (CBOOL
																																		(BgL_colz00_1210))
																																		{	/* Pp/pp.scm 133 */
																																			obj_t
																																				BgL__andtest_1044z00_2724;
																																			BgL__andtest_1044z00_2724
																																				=
																																				PROCEDURE_L_ENTRY
																																				(BgL_outputz00_3732)
																																				(BgL_outputz00_3732,
																																				BgL_arg1360z00_1346);
																																			if (CBOOL
																																				(BgL__andtest_1044z00_2724))
																																				{	/* Pp/pp.scm 133 */
																																					return
																																						ADDFX
																																						(BgL_colz00_1210,
																																						BINT
																																						(STRING_LENGTH
																																							(((obj_t) BgL_arg1360z00_1346))));
																																				}
																																			else
																																				{	/* Pp/pp.scm 133 */
																																					return
																																						BFALSE;
																																				}
																																		}
																																	else
																																		{	/* Pp/pp.scm 133 */
																																			return
																																				BFALSE;
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
								}
						}
				}
			}
		}

	}



/* out~0 */
	obj_t BGl_outze70ze7zz__ppz00(obj_t BgL_outputz00_4109, obj_t BgL_strz00_1203,
		obj_t BgL_colz00_1204)
	{
		{	/* Pp/pp.scm 133 */
			if (CBOOL(BgL_colz00_1204))
				{	/* Pp/pp.scm 133 */
					obj_t BgL__andtest_1044z00_2262;

					BgL__andtest_1044z00_2262 =
						PROCEDURE_L_ENTRY(BgL_outputz00_4109) (BgL_outputz00_4109,
						BgL_strz00_1203);
					if (CBOOL(BgL__andtest_1044z00_2262))
						{	/* Pp/pp.scm 133 */
							return
								ADDFX(BgL_colz00_1204,
								BINT(STRING_LENGTH(((obj_t) BgL_strz00_1203))));
						}
					else
						{	/* Pp/pp.scm 133 */
							return BFALSE;
						}
				}
			else
				{	/* Pp/pp.scm 133 */
					return BFALSE;
				}
		}

	}



/* &read-macro? */
	bool_t BGl_z62readzd2macrozf3z43zz__ppz00(obj_t BgL_lz00_1174)
	{
		{	/* Pp/pp.scm 115 */
			{	/* Pp/pp.scm 116 */
				obj_t BgL_tailz00_1178;

				BgL_tailz00_1178 = CDR(((obj_t) BgL_lz00_1174));
				{	/* Pp/pp.scm 117 */
					obj_t BgL_casezd2valuezd2_1179;

					BgL_casezd2valuezd2_1179 = CAR(((obj_t) BgL_lz00_1174));
					{	/* Pp/pp.scm 117 */
						bool_t BgL_test2549z00_5547;

						{	/* Pp/pp.scm 117 */
							bool_t BgL__ortest_1040z00_1184;

							BgL__ortest_1040z00_1184 =
								(BgL_casezd2valuezd2_1179 == BGl_symbol2302z00zz__ppz00);
							if (BgL__ortest_1040z00_1184)
								{	/* Pp/pp.scm 117 */
									BgL_test2549z00_5547 = BgL__ortest_1040z00_1184;
								}
							else
								{	/* Pp/pp.scm 117 */
									bool_t BgL__ortest_1041z00_1185;

									BgL__ortest_1041z00_1185 =
										(BgL_casezd2valuezd2_1179 == BGl_symbol2304z00zz__ppz00);
									if (BgL__ortest_1041z00_1185)
										{	/* Pp/pp.scm 117 */
											BgL_test2549z00_5547 = BgL__ortest_1041z00_1185;
										}
									else
										{	/* Pp/pp.scm 117 */
											bool_t BgL__ortest_1042z00_1186;

											BgL__ortest_1042z00_1186 =
												(BgL_casezd2valuezd2_1179 ==
												BGl_symbol2306z00zz__ppz00);
											if (BgL__ortest_1042z00_1186)
												{	/* Pp/pp.scm 117 */
													BgL_test2549z00_5547 = BgL__ortest_1042z00_1186;
												}
											else
												{	/* Pp/pp.scm 117 */
													BgL_test2549z00_5547 =
														(BgL_casezd2valuezd2_1179 ==
														BGl_symbol2308z00zz__ppz00);
												}
										}
								}
						}
						if (BgL_test2549z00_5547)
							{	/* Pp/pp.scm 117 */
								if (PAIRP(BgL_tailz00_1178))
									{	/* Pp/pp.scm 115 */
										return NULLP(CDR(BgL_tailz00_1178));
									}
								else
									{	/* Pp/pp.scm 115 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* Pp/pp.scm 117 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}

	}



/* &read-macro-prefix */
	obj_t BGl_z62readzd2macrozd2prefixz62zz__ppz00(obj_t BgL_lz00_1194)
	{
		{	/* Pp/pp.scm 130 */
			{	/* Pp/pp.scm 126 */
				obj_t BgL_casezd2valuezd2_1198;

				BgL_casezd2valuezd2_1198 = CAR(((obj_t) BgL_lz00_1194));
				if ((BgL_casezd2valuezd2_1198 == BGl_symbol2302z00zz__ppz00))
					{	/* Pp/pp.scm 126 */
						return BGl_string2310z00zz__ppz00;
					}
				else
					{	/* Pp/pp.scm 126 */
						if ((BgL_casezd2valuezd2_1198 == BGl_symbol2304z00zz__ppz00))
							{	/* Pp/pp.scm 126 */
								return BGl_string2311z00zz__ppz00;
							}
						else
							{	/* Pp/pp.scm 126 */
								if ((BgL_casezd2valuezd2_1198 == BGl_symbol2306z00zz__ppz00))
									{	/* Pp/pp.scm 126 */
										return BGl_string2312z00zz__ppz00;
									}
								else
									{	/* Pp/pp.scm 126 */
										if (
											(BgL_casezd2valuezd2_1198 == BGl_symbol2308z00zz__ppz00))
											{	/* Pp/pp.scm 126 */
												return BGl_string2313z00zz__ppz00;
											}
										else
											{	/* Pp/pp.scm 126 */
												return BUNSPEC;
											}
									}
							}
					}
			}
		}

	}



/* &pr */
	obj_t BGl_z62prz62zz__ppz00(obj_t BgL_ppzd2exprzd2_3753,
		obj_t BgL_outputz00_3752, obj_t BgL_displayzf3zf3_3751,
		long BgL_maxzd2exprzd2widthz00_3750, obj_t BgL_widthz00_3749,
		long BgL_maxzd2callzd2headzd2widthzd2_3748, obj_t BgL_ppzd2lambdazd2_3747,
		obj_t BgL_ppzd2definezd2_3746, obj_t BgL_ppzd2defunzd2_3745,
		obj_t BgL_ppzd2ifzd2_3744, obj_t BgL_ppzd2condzd2_3743,
		obj_t BgL_ppzd2casezd2_3742, obj_t BgL_ppzd2andzd2_3741,
		obj_t BgL_ppzd2letzd2_3740, obj_t BgL_ppzd2beginzd2_3739,
		obj_t BgL_ppzd2dozd2_3738, obj_t BgL_ppzd2commentzd2_3737,
		obj_t BgL_ppzd2exprzd2listz00_3736, obj_t BgL_ppzd2exprzd2defunz00_3735,
		long BgL_indentzd2generalzd2_3734, obj_t BgL_objz00_1443,
		obj_t BgL_colz00_1444, obj_t BgL_extraz00_1445, obj_t BgL_ppzd2pairzd2_1446)
	{
		{	/* Pp/pp.scm 275 */
			{	/* Pp/pp.scm 260 */
				bool_t BgL_test2558z00_5569;

				if (PAIRP(BgL_objz00_1443))
					{	/* Pp/pp.scm 260 */
						BgL_test2558z00_5569 = ((bool_t) 1);
					}
				else
					{	/* Pp/pp.scm 260 */
						BgL_test2558z00_5569 = VECTORP(BgL_objz00_1443);
					}
				if (BgL_test2558z00_5569)
					{	/* Pp/pp.scm 261 */
						obj_t BgL_resultz00_3754;
						obj_t BgL_leftz00_3755;

						BgL_resultz00_3754 = MAKE_CELL(BNIL);
						BgL_leftz00_3755 =
							MAKE_CELL(BGl_2minz00zz__r4_numbers_6_5z00(BINT(
									((((long) CINT(BgL_widthz00_3749) -
												(long) CINT(BgL_colz00_1444)) -
											(long) CINT(BgL_extraz00_1445)) + ((long) 1))),
								BINT(BgL_maxzd2exprzd2widthz00_3750)));
						{	/* Pp/pp.scm 265 */
							obj_t BgL_zc3z04anonymousza31400ze3z87_3709;

							{
								int BgL_tmpz00_5582;

								BgL_tmpz00_5582 = (int) (((long) 2));
								BgL_zc3z04anonymousza31400ze3z87_3709 =
									MAKE_L_PROCEDURE(BGl_z62zc3z04anonymousza31400ze3ze5zz__ppz00,
									BgL_tmpz00_5582);
							}
							PROCEDURE_L_SET(BgL_zc3z04anonymousza31400ze3z87_3709,
								(int) (((long) 0)), ((obj_t) BgL_resultz00_3754));
							PROCEDURE_L_SET(BgL_zc3z04anonymousza31400ze3z87_3709,
								(int) (((long) 1)), ((obj_t) BgL_leftz00_3755));
							BGl_genericzd2writezd2zz__ppz00(BgL_objz00_1443,
								BgL_displayzf3zf3_3751, BFALSE,
								BgL_zc3z04anonymousza31400ze3z87_3709);
						}
						if (((long) CINT(CELL_REF(BgL_leftz00_3755)) > ((long) 0)))
							{	/* Pp/pp.scm 269 */
								obj_t BgL_arg1404z00_1458;

								BgL_arg1404z00_1458 =
									BGl_reversezd2stringzd2appendz00zz__ppz00(CELL_REF
									(BgL_resultz00_3754));
								if (CBOOL(BgL_colz00_1444))
									{	/* Pp/pp.scm 133 */
										obj_t BgL__andtest_1044z00_2825;

										BgL__andtest_1044z00_2825 =
											PROCEDURE_L_ENTRY(BgL_outputz00_3752) (BgL_outputz00_3752,
											BgL_arg1404z00_1458);
										if (CBOOL(BgL__andtest_1044z00_2825))
											{	/* Pp/pp.scm 133 */
												return
													ADDFX(BgL_colz00_1444,
													BINT(STRING_LENGTH(BgL_arg1404z00_1458)));
											}
										else
											{	/* Pp/pp.scm 133 */
												return BFALSE;
											}
									}
								else
									{	/* Pp/pp.scm 133 */
										return BFALSE;
									}
							}
						else
							{	/* Pp/pp.scm 268 */
								if (PAIRP(BgL_objz00_1443))
									{	/* Pp/pp.scm 270 */
										return
											PROCEDURE_ENTRY(BgL_ppzd2pairzd2_1446)
											(BgL_ppzd2pairzd2_1446, BgL_objz00_1443, BgL_colz00_1444,
											BgL_extraz00_1445, BEOA);
									}
								else
									{	/* Pp/pp.scm 272 */
										obj_t BgL_arg1406z00_1460;
										obj_t BgL_arg1407z00_1461;

										BgL_arg1406z00_1460 =
											BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00
											(BgL_objz00_1443);
										{	/* Pp/pp.scm 273 */
											obj_t BgL_arg1409z00_1462;

											BgL_arg1409z00_1462 =
												BGl_vectorzd2prefixzd2zz__ppz00(BgL_objz00_1443);
											if (CBOOL(BgL_colz00_1444))
												{	/* Pp/pp.scm 133 */
													obj_t BgL__andtest_1044z00_2834;

													BgL__andtest_1044z00_2834 =
														PROCEDURE_L_ENTRY(BgL_outputz00_3752)
														(BgL_outputz00_3752, BgL_arg1409z00_1462);
													if (CBOOL(BgL__andtest_1044z00_2834))
														{	/* Pp/pp.scm 133 */
															BgL_arg1407z00_1461 =
																ADDFX(BgL_colz00_1444,
																BINT(STRING_LENGTH(BgL_arg1409z00_1462)));
														}
													else
														{	/* Pp/pp.scm 133 */
															BgL_arg1407z00_1461 = BFALSE;
														}
												}
											else
												{	/* Pp/pp.scm 133 */
													BgL_arg1407z00_1461 = BFALSE;
												}
										}
										{	/* Pp/pp.scm 306 */
											obj_t BgL_colz00_2841;

											if (CBOOL(BgL_arg1407z00_1461))
												{	/* Pp/pp.scm 133 */
													obj_t BgL__andtest_1044z00_2843;

													BgL__andtest_1044z00_2843 =
														PROCEDURE_L_ENTRY(BgL_outputz00_3752)
														(BgL_outputz00_3752, BGl_string2278z00zz__ppz00);
													if (CBOOL(BgL__andtest_1044z00_2843))
														{	/* Pp/pp.scm 133 */
															BgL_colz00_2841 =
																ADDFX(BgL_arg1407z00_1461, BINT(((long) 1)));
														}
													else
														{	/* Pp/pp.scm 133 */
															BgL_colz00_2841 = BFALSE;
														}
												}
											else
												{	/* Pp/pp.scm 133 */
													BgL_colz00_2841 = BFALSE;
												}
											return
												BGl_z62ppzd2downzb0zz__ppz00(BgL_outputz00_3752,
												BgL_ppzd2exprzd2_3753, BgL_displayzf3zf3_3751,
												BgL_maxzd2exprzd2widthz00_3750, BgL_widthz00_3749,
												BgL_maxzd2callzd2headzd2widthzd2_3748,
												BgL_ppzd2lambdazd2_3747, BgL_ppzd2definezd2_3746,
												BgL_ppzd2defunzd2_3745, BgL_ppzd2ifzd2_3744,
												BgL_ppzd2condzd2_3743, BgL_ppzd2casezd2_3742,
												BgL_ppzd2andzd2_3741, BgL_ppzd2letzd2_3740,
												BgL_ppzd2beginzd2_3739, BgL_ppzd2dozd2_3738,
												BgL_ppzd2commentzd2_3737, BgL_ppzd2exprzd2listz00_3736,
												BgL_ppzd2exprzd2defunz00_3735,
												BgL_indentzd2generalzd2_3734, BgL_arg1406z00_1460,
												BgL_colz00_2841, BgL_colz00_2841, BgL_extraz00_1445,
												BgL_ppzd2exprzd2_3753);
										}
									}
							}
					}
				else
					{	/* Pp/pp.scm 260 */
						return
							BGl_z62wrz62zz__ppz00(BgL_displayzf3zf3_3751, BgL_outputz00_3752,
							BgL_objz00_1443, BgL_colz00_1444);
					}
			}
		}

	}



/* &indent */
	obj_t BGl_z62indentz62zz__ppz00(obj_t BgL_outputz00_3758,
		obj_t BgL_toz00_1435, obj_t BgL_colz00_1436)
	{
		{	/* Pp/pp.scm 257 */
			{
				long BgL_nz00_1427;
				obj_t BgL_colz00_1428;

				if (CBOOL(BgL_colz00_1436))
					{	/* Pp/pp.scm 254 */
						if (((long) CINT(BgL_toz00_1435) < (long) CINT(BgL_colz00_1436)))
							{	/* Pp/pp.scm 256 */
								obj_t BgL__andtest_1050z00_1440;

								{	/* Pp/pp.scm 256 */
									obj_t BgL_arg1394z00_1441;

									BgL_arg1394z00_1441 =
										make_string(((long) 1), ((unsigned char) 10));
									if (CBOOL(BgL_colz00_1436))
										{	/* Pp/pp.scm 133 */
											obj_t BgL__andtest_1044z00_2761;

											BgL__andtest_1044z00_2761 =
												PROCEDURE_L_ENTRY(BgL_outputz00_3758)
												(BgL_outputz00_3758, BgL_arg1394z00_1441);
											if (CBOOL(BgL__andtest_1044z00_2761))
												{	/* Pp/pp.scm 133 */
													BgL__andtest_1050z00_1440 =
														ADDFX(BgL_colz00_1436,
														BINT(STRING_LENGTH(BgL_arg1394z00_1441)));
												}
											else
												{	/* Pp/pp.scm 133 */
													BgL__andtest_1050z00_1440 = BFALSE;
												}
										}
									else
										{	/* Pp/pp.scm 133 */
											BgL__andtest_1050z00_1440 = BFALSE;
										}
								}
								if (CBOOL(BgL__andtest_1050z00_1440))
									{
										obj_t BgL_nz00_2769;
										obj_t BgL_colz00_2770;

										BgL_nz00_2769 = BgL_toz00_1435;
										BgL_colz00_2770 = BINT(((long) 0));
									BgL_spacesz00_2768:
										if (((long) CINT(BgL_nz00_2769) > ((long) 0)))
											{	/* Pp/pp.scm 247 */
												if (((long) CINT(BgL_nz00_2769) > ((long) 7)))
													{	/* Pp/pp.scm 249 */
														long BgL_arg1389z00_2777;
														obj_t BgL_arg1390z00_2778;

														BgL_arg1389z00_2777 =
															((long) CINT(BgL_nz00_2769) - ((long) 8));
														if (CBOOL(BgL_colz00_2770))
															{	/* Pp/pp.scm 133 */
																obj_t BgL__andtest_1044z00_2782;

																BgL__andtest_1044z00_2782 =
																	PROCEDURE_L_ENTRY(BgL_outputz00_3758)
																	(BgL_outputz00_3758,
																	BGl_string2314z00zz__ppz00);
																if (CBOOL(BgL__andtest_1044z00_2782))
																	{	/* Pp/pp.scm 133 */
																		BgL_arg1390z00_2778 =
																			ADDFX(BgL_colz00_2770, BINT(((long) 8)));
																	}
																else
																	{	/* Pp/pp.scm 133 */
																		BgL_arg1390z00_2778 = BFALSE;
																	}
															}
														else
															{	/* Pp/pp.scm 133 */
																BgL_arg1390z00_2778 = BFALSE;
															}
														{
															obj_t BgL_colz00_5680;
															obj_t BgL_nz00_5678;

															BgL_nz00_5678 = BINT(BgL_arg1389z00_2777);
															BgL_colz00_5680 = BgL_arg1390z00_2778;
															BgL_colz00_2770 = BgL_colz00_5680;
															BgL_nz00_2769 = BgL_nz00_5678;
															goto BgL_spacesz00_2768;
														}
													}
												else
													{	/* Pp/pp.scm 250 */
														obj_t BgL_arg1391z00_2789;

														BgL_arg1391z00_2789 =
															c_substring(BGl_string2314z00zz__ppz00,
															((long) 0), (long) CINT(BgL_nz00_2769));
														if (CBOOL(BgL_colz00_2770))
															{	/* Pp/pp.scm 133 */
																obj_t BgL__andtest_1044z00_2794;

																BgL__andtest_1044z00_2794 =
																	PROCEDURE_L_ENTRY(BgL_outputz00_3758)
																	(BgL_outputz00_3758, BgL_arg1391z00_2789);
																if (CBOOL(BgL__andtest_1044z00_2794))
																	{	/* Pp/pp.scm 133 */
																		return
																			ADDFX(BgL_colz00_2770,
																			BINT(STRING_LENGTH(BgL_arg1391z00_2789)));
																	}
																else
																	{	/* Pp/pp.scm 133 */
																		return BFALSE;
																	}
															}
														else
															{	/* Pp/pp.scm 133 */
																return BFALSE;
															}
													}
											}
										else
											{	/* Pp/pp.scm 247 */
												return BgL_colz00_2770;
											}
									}
								else
									{	/* Pp/pp.scm 256 */
										return BFALSE;
									}
							}
						else
							{	/* Pp/pp.scm 255 */
								BgL_nz00_1427 =
									((long) CINT(BgL_toz00_1435) - (long) CINT(BgL_colz00_1436));
								BgL_colz00_1428 = BgL_colz00_1436;
							BgL_zc3z04anonymousza31386ze3z87_1429:
								if ((BgL_nz00_1427 > ((long) 0)))
									{	/* Pp/pp.scm 247 */
										if ((BgL_nz00_1427 > ((long) 7)))
											{	/* Pp/pp.scm 249 */
												long BgL_arg1389z00_1432;
												obj_t BgL_arg1390z00_1433;

												BgL_arg1389z00_1432 = (BgL_nz00_1427 - ((long) 8));
												if (CBOOL(BgL_colz00_1428))
													{	/* Pp/pp.scm 133 */
														obj_t BgL__andtest_1044z00_2738;

														BgL__andtest_1044z00_2738 =
															PROCEDURE_L_ENTRY(BgL_outputz00_3758)
															(BgL_outputz00_3758, BGl_string2314z00zz__ppz00);
														if (CBOOL(BgL__andtest_1044z00_2738))
															{	/* Pp/pp.scm 133 */
																BgL_arg1390z00_1433 =
																	ADDFX(BgL_colz00_1428, BINT(((long) 8)));
															}
														else
															{	/* Pp/pp.scm 133 */
																BgL_arg1390z00_1433 = BFALSE;
															}
													}
												else
													{	/* Pp/pp.scm 133 */
														BgL_arg1390z00_1433 = BFALSE;
													}
												{
													obj_t BgL_colz00_5711;
													long BgL_nz00_5710;

													BgL_nz00_5710 = BgL_arg1389z00_1432;
													BgL_colz00_5711 = BgL_arg1390z00_1433;
													BgL_colz00_1428 = BgL_colz00_5711;
													BgL_nz00_1427 = BgL_nz00_5710;
													goto BgL_zc3z04anonymousza31386ze3z87_1429;
												}
											}
										else
											{	/* Pp/pp.scm 250 */
												obj_t BgL_arg1391z00_1434;

												BgL_arg1391z00_1434 =
													c_substring(BGl_string2314z00zz__ppz00, ((long) 0),
													BgL_nz00_1427);
												if (CBOOL(BgL_colz00_1428))
													{	/* Pp/pp.scm 133 */
														obj_t BgL__andtest_1044z00_2749;

														BgL__andtest_1044z00_2749 =
															PROCEDURE_L_ENTRY(BgL_outputz00_3758)
															(BgL_outputz00_3758, BgL_arg1391z00_1434);
														if (CBOOL(BgL__andtest_1044z00_2749))
															{	/* Pp/pp.scm 133 */
																return
																	ADDFX(BgL_colz00_1428,
																	BINT(STRING_LENGTH(BgL_arg1391z00_1434)));
															}
														else
															{	/* Pp/pp.scm 133 */
																return BFALSE;
															}
													}
												else
													{	/* Pp/pp.scm 133 */
														return BFALSE;
													}
											}
									}
								else
									{	/* Pp/pp.scm 247 */
										return BgL_colz00_1428;
									}
							}
					}
				else
					{	/* Pp/pp.scm 254 */
						return BFALSE;
					}
			}
		}

	}



/* &pp-general */
	obj_t BGl_z62ppzd2generalzb0zz__ppz00(long BgL_indentzd2generalzd2_3778,
		obj_t BgL_outputz00_3777, obj_t BgL_ppzd2exprzd2_3776,
		obj_t BgL_displayzf3zf3_3775, long BgL_maxzd2exprzd2widthz00_3774,
		obj_t BgL_widthz00_3773, long BgL_maxzd2callzd2headzd2widthzd2_3772,
		obj_t BgL_ppzd2lambdazd2_3771, obj_t BgL_ppzd2definezd2_3770,
		obj_t BgL_ppzd2defunzd2_3769, obj_t BgL_ppzd2ifzd2_3768,
		obj_t BgL_ppzd2condzd2_3767, obj_t BgL_ppzd2casezd2_3766,
		obj_t BgL_ppzd2andzd2_3765, obj_t BgL_ppzd2letzd2_3764,
		obj_t BgL_ppzd2beginzd2_3763, obj_t BgL_ppzd2dozd2_3762,
		obj_t BgL_ppzd2commentzd2_3761, obj_t BgL_ppzd2exprzd2listz00_3760,
		obj_t BgL_ppzd2exprzd2defunz00_3759, obj_t BgL_exprz00_1538,
		obj_t BgL_colz00_1539, obj_t BgL_extraz00_1540, bool_t BgL_namedzf3zf3_1541,
		obj_t BgL_ppzd21zd2_1542, obj_t BgL_ppzd22zd2_1543,
		obj_t BgL_ppzd23zd2_1544)
	{
		{	/* Pp/pp.scm 342 */
			{
				obj_t BgL_restz00_1574;
				long BgL_col1z00_1575;
				obj_t BgL_col2z00_1576;
				long BgL_col3z00_1577;

				{	/* Pp/pp.scm 355 */
					obj_t BgL_headz00_1549;

					BgL_headz00_1549 = CAR(((obj_t) BgL_exprz00_1538));
					{	/* Pp/pp.scm 355 */
						obj_t BgL_restz00_1550;

						BgL_restz00_1550 = CDR(((obj_t) BgL_exprz00_1538));
						{	/* Pp/pp.scm 356 */
							obj_t BgL_colza2za2_1551;

							{	/* Pp/pp.scm 357 */
								obj_t BgL_arg1455z00_1561;

								if (CBOOL(BgL_colz00_1539))
									{	/* Pp/pp.scm 133 */
										obj_t BgL__andtest_1044z00_3039;

										BgL__andtest_1044z00_3039 =
											PROCEDURE_L_ENTRY(BgL_outputz00_3777) (BgL_outputz00_3777,
											BGl_string2278z00zz__ppz00);
										if (CBOOL(BgL__andtest_1044z00_3039))
											{	/* Pp/pp.scm 133 */
												BgL_arg1455z00_1561 =
													ADDFX(BgL_colz00_1539, BINT(((long) 1)));
											}
										else
											{	/* Pp/pp.scm 133 */
												BgL_arg1455z00_1561 = BFALSE;
											}
									}
								else
									{	/* Pp/pp.scm 133 */
										BgL_arg1455z00_1561 = BFALSE;
									}
								BgL_colza2za2_1551 =
									BGl_z62wrz62zz__ppz00(BgL_displayzf3zf3_3775,
									BgL_outputz00_3777, BgL_headz00_1549, BgL_arg1455z00_1561);
							}
							{	/* Pp/pp.scm 357 */

								{	/* Pp/pp.scm 358 */
									bool_t BgL_test2587z00_5742;

									if (BgL_namedzf3zf3_1541)
										{	/* Pp/pp.scm 358 */
											BgL_test2587z00_5742 = PAIRP(BgL_restz00_1550);
										}
									else
										{	/* Pp/pp.scm 358 */
											BgL_test2587z00_5742 = ((bool_t) 0);
										}
									if (BgL_test2587z00_5742)
										{	/* Pp/pp.scm 359 */
											obj_t BgL_namez00_1553;

											BgL_namez00_1553 = CAR(BgL_restz00_1550);
											{	/* Pp/pp.scm 359 */
												obj_t BgL_restz00_1554;

												BgL_restz00_1554 = CDR(BgL_restz00_1550);
												{	/* Pp/pp.scm 360 */
													obj_t BgL_colza2za2z00_1555;

													{	/* Pp/pp.scm 361 */
														obj_t BgL_arg1452z00_1558;

														if (CBOOL(BgL_colza2za2_1551))
															{	/* Pp/pp.scm 133 */
																obj_t BgL__andtest_1044z00_3050;

																BgL__andtest_1044z00_3050 =
																	PROCEDURE_L_ENTRY(BgL_outputz00_3777)
																	(BgL_outputz00_3777,
																	BGl_string2279z00zz__ppz00);
																if (CBOOL(BgL__andtest_1044z00_3050))
																	{	/* Pp/pp.scm 133 */
																		BgL_arg1452z00_1558 =
																			ADDFX(BgL_colza2za2_1551,
																			BINT(((long) 1)));
																	}
																else
																	{	/* Pp/pp.scm 133 */
																		BgL_arg1452z00_1558 = BFALSE;
																	}
															}
														else
															{	/* Pp/pp.scm 133 */
																BgL_arg1452z00_1558 = BFALSE;
															}
														BgL_colza2za2z00_1555 =
															BGl_z62wrz62zz__ppz00(BgL_displayzf3zf3_3775,
															BgL_outputz00_3777, BgL_namez00_1553,
															BgL_arg1452z00_1558);
													}
													{	/* Pp/pp.scm 361 */

														{	/* Pp/pp.scm 362 */
															long BgL_arg1449z00_1556;
															long BgL_arg1451z00_1557;

															BgL_arg1449z00_1556 =
																(
																(long) CINT(BgL_colz00_1539) +
																BgL_indentzd2generalzd2_3778);
															BgL_arg1451z00_1557 =
																((long) CINT(BgL_colza2za2z00_1555) +
																((long) 1));
															{	/* Pp/pp.scm 337 */
																bool_t BgL_test2591z00_5762;

																if (CBOOL(BgL_ppzd21zd2_1542))
																	{	/* Pp/pp.scm 337 */
																		BgL_test2591z00_5762 =
																			PAIRP(BgL_restz00_1554);
																	}
																else
																	{	/* Pp/pp.scm 337 */
																		BgL_test2591z00_5762 = ((bool_t) 0);
																	}
																if (BgL_test2591z00_5762)
																	{	/* Pp/pp.scm 338 */
																		obj_t BgL_val1z00_3063;

																		BgL_val1z00_3063 = CAR(BgL_restz00_1554);
																		{	/* Pp/pp.scm 338 */
																			obj_t BgL_restz00_3064;

																			BgL_restz00_3064 = CDR(BgL_restz00_1554);
																			{	/* Pp/pp.scm 339 */
																				long BgL_extraz00_3065;

																				if (NULLP(BgL_restz00_3064))
																					{	/* Pp/pp.scm 340 */
																						BgL_extraz00_3065 =
																							(
																							(long) CINT(BgL_extraz00_1540) +
																							((long) 1));
																					}
																				else
																					{	/* Pp/pp.scm 340 */
																						BgL_extraz00_3065 = ((long) 0);
																					}
																				{	/* Pp/pp.scm 340 */

																					BgL_restz00_1574 = BgL_restz00_3064;
																					BgL_col1z00_1575 =
																						BgL_arg1449z00_1556;
																					BgL_col2z00_1576 =
																						BGl_z62prz62zz__ppz00
																						(BgL_ppzd2exprzd2_3776,
																						BgL_outputz00_3777,
																						BgL_displayzf3zf3_3775,
																						BgL_maxzd2exprzd2widthz00_3774,
																						BgL_widthz00_3773,
																						BgL_maxzd2callzd2headzd2widthzd2_3772,
																						BgL_ppzd2lambdazd2_3771,
																						BgL_ppzd2definezd2_3770,
																						BgL_ppzd2defunzd2_3769,
																						BgL_ppzd2ifzd2_3768,
																						BgL_ppzd2condzd2_3767,
																						BgL_ppzd2casezd2_3766,
																						BgL_ppzd2andzd2_3765,
																						BgL_ppzd2letzd2_3764,
																						BgL_ppzd2beginzd2_3763,
																						BgL_ppzd2dozd2_3762,
																						BgL_ppzd2commentzd2_3761,
																						BgL_ppzd2exprzd2listz00_3760,
																						BgL_ppzd2exprzd2defunz00_3759,
																						BgL_indentzd2generalzd2_3778,
																						BgL_val1z00_3063,
																						BGl_z62indentz62zz__ppz00
																						(BgL_outputz00_3777,
																							BINT(BgL_arg1451z00_1557),
																							BgL_colza2za2z00_1555),
																						BINT(BgL_extraz00_3065),
																						BgL_ppzd21zd2_1542);
																					BgL_col3z00_1577 =
																						BgL_arg1451z00_1557;
																				BgL_zc3z04anonymousza31461ze3z87_1578:
																					{	/* Pp/pp.scm 345 */
																						bool_t BgL_test2594z00_5772;

																						if (CBOOL(BgL_ppzd22zd2_1543))
																							{	/* Pp/pp.scm 345 */
																								BgL_test2594z00_5772 =
																									PAIRP(BgL_restz00_1574);
																							}
																						else
																							{	/* Pp/pp.scm 345 */
																								BgL_test2594z00_5772 =
																									((bool_t) 0);
																							}
																						if (BgL_test2594z00_5772)
																							{	/* Pp/pp.scm 346 */
																								obj_t BgL_val1z00_3024;

																								BgL_val1z00_3024 =
																									CAR(BgL_restz00_1574);
																								{	/* Pp/pp.scm 346 */
																									obj_t BgL_restz00_3025;

																									BgL_restz00_3025 =
																										CDR(BgL_restz00_1574);
																									{	/* Pp/pp.scm 347 */
																										long BgL_extraz00_3026;

																										if (NULLP(BgL_restz00_3025))
																											{	/* Pp/pp.scm 348 */
																												BgL_extraz00_3026 =
																													(
																													(long)
																													CINT
																													(BgL_extraz00_1540) +
																													((long) 1));
																											}
																										else
																											{	/* Pp/pp.scm 348 */
																												BgL_extraz00_3026 =
																													((long) 0);
																											}
																										{	/* Pp/pp.scm 348 */

																											return
																												BGl_z62ppzd2downzb0zz__ppz00
																												(BgL_outputz00_3777,
																												BgL_ppzd2exprzd2_3776,
																												BgL_displayzf3zf3_3775,
																												BgL_maxzd2exprzd2widthz00_3774,
																												BgL_widthz00_3773,
																												BgL_maxzd2callzd2headzd2widthzd2_3772,
																												BgL_ppzd2lambdazd2_3771,
																												BgL_ppzd2definezd2_3770,
																												BgL_ppzd2defunzd2_3769,
																												BgL_ppzd2ifzd2_3768,
																												BgL_ppzd2condzd2_3767,
																												BgL_ppzd2casezd2_3766,
																												BgL_ppzd2andzd2_3765,
																												BgL_ppzd2letzd2_3764,
																												BgL_ppzd2beginzd2_3763,
																												BgL_ppzd2dozd2_3762,
																												BgL_ppzd2commentzd2_3761,
																												BgL_ppzd2exprzd2listz00_3760,
																												BgL_ppzd2exprzd2defunz00_3759,
																												BgL_indentzd2generalzd2_3778,
																												BgL_restz00_3025,
																												BGl_z62prz62zz__ppz00
																												(BgL_ppzd2exprzd2_3776,
																													BgL_outputz00_3777,
																													BgL_displayzf3zf3_3775,
																													BgL_maxzd2exprzd2widthz00_3774,
																													BgL_widthz00_3773,
																													BgL_maxzd2callzd2headzd2widthzd2_3772,
																													BgL_ppzd2lambdazd2_3771,
																													BgL_ppzd2definezd2_3770,
																													BgL_ppzd2defunzd2_3769,
																													BgL_ppzd2ifzd2_3768,
																													BgL_ppzd2condzd2_3767,
																													BgL_ppzd2casezd2_3766,
																													BgL_ppzd2andzd2_3765,
																													BgL_ppzd2letzd2_3764,
																													BgL_ppzd2beginzd2_3763,
																													BgL_ppzd2dozd2_3762,
																													BgL_ppzd2commentzd2_3761,
																													BgL_ppzd2exprzd2listz00_3760,
																													BgL_ppzd2exprzd2defunz00_3759,
																													BgL_indentzd2generalzd2_3778,
																													BgL_val1z00_3024,
																													BGl_z62indentz62zz__ppz00
																													(BgL_outputz00_3777,
																														BINT
																														(BgL_col3z00_1577),
																														BgL_col2z00_1576),
																													BINT
																													(BgL_extraz00_3026),
																													BgL_ppzd22zd2_1543),
																												BINT(BgL_col1z00_1575),
																												BgL_extraz00_1540,
																												BgL_ppzd23zd2_1544);
																										}
																									}
																								}
																							}
																						else
																							{	/* Pp/pp.scm 345 */
																								return
																									BGl_z62ppzd2downzb0zz__ppz00
																									(BgL_outputz00_3777,
																									BgL_ppzd2exprzd2_3776,
																									BgL_displayzf3zf3_3775,
																									BgL_maxzd2exprzd2widthz00_3774,
																									BgL_widthz00_3773,
																									BgL_maxzd2callzd2headzd2widthzd2_3772,
																									BgL_ppzd2lambdazd2_3771,
																									BgL_ppzd2definezd2_3770,
																									BgL_ppzd2defunzd2_3769,
																									BgL_ppzd2ifzd2_3768,
																									BgL_ppzd2condzd2_3767,
																									BgL_ppzd2casezd2_3766,
																									BgL_ppzd2andzd2_3765,
																									BgL_ppzd2letzd2_3764,
																									BgL_ppzd2beginzd2_3763,
																									BgL_ppzd2dozd2_3762,
																									BgL_ppzd2commentzd2_3761,
																									BgL_ppzd2exprzd2listz00_3760,
																									BgL_ppzd2exprzd2defunz00_3759,
																									BgL_indentzd2generalzd2_3778,
																									BgL_restz00_1574,
																									BgL_col2z00_1576,
																									BINT(BgL_col1z00_1575),
																									BgL_extraz00_1540,
																									BgL_ppzd23zd2_1544);
																							}
																					}
																				}
																			}
																		}
																	}
																else
																	{
																		long BgL_col3z00_5797;
																		obj_t BgL_col2z00_5796;
																		long BgL_col1z00_5795;
																		obj_t BgL_restz00_5794;

																		BgL_restz00_5794 = BgL_restz00_1554;
																		BgL_col1z00_5795 = BgL_arg1449z00_1556;
																		BgL_col2z00_5796 = BgL_colza2za2z00_1555;
																		BgL_col3z00_5797 = BgL_arg1451z00_1557;
																		BgL_col3z00_1577 = BgL_col3z00_5797;
																		BgL_col2z00_1576 = BgL_col2z00_5796;
																		BgL_col1z00_1575 = BgL_col1z00_5795;
																		BgL_restz00_1574 = BgL_restz00_5794;
																		goto BgL_zc3z04anonymousza31461ze3z87_1578;
																	}
															}
														}
													}
												}
											}
										}
									else
										{	/* Pp/pp.scm 363 */
											long BgL_arg1453z00_1559;
											long BgL_arg1454z00_1560;

											BgL_arg1453z00_1559 =
												(
												(long) CINT(BgL_colz00_1539) +
												BgL_indentzd2generalzd2_3778);
											BgL_arg1454z00_1560 =
												((long) CINT(BgL_colza2za2_1551) + ((long) 1));
											{	/* Pp/pp.scm 337 */
												bool_t BgL_test2597z00_5802;

												if (CBOOL(BgL_ppzd21zd2_1542))
													{	/* Pp/pp.scm 337 */
														BgL_test2597z00_5802 = PAIRP(BgL_restz00_1550);
													}
												else
													{	/* Pp/pp.scm 337 */
														BgL_test2597z00_5802 = ((bool_t) 0);
													}
												if (BgL_test2597z00_5802)
													{	/* Pp/pp.scm 338 */
														obj_t BgL_val1z00_3081;

														BgL_val1z00_3081 = CAR(BgL_restz00_1550);
														{	/* Pp/pp.scm 338 */
															obj_t BgL_restz00_3082;

															BgL_restz00_3082 = CDR(BgL_restz00_1550);
															{	/* Pp/pp.scm 339 */
																long BgL_extraz00_3083;

																if (NULLP(BgL_restz00_3082))
																	{	/* Pp/pp.scm 340 */
																		BgL_extraz00_3083 =
																			(
																			(long) CINT(BgL_extraz00_1540) +
																			((long) 1));
																	}
																else
																	{	/* Pp/pp.scm 340 */
																		BgL_extraz00_3083 = ((long) 0);
																	}
																{	/* Pp/pp.scm 340 */

																	{
																		long BgL_col3z00_5819;
																		obj_t BgL_col2z00_5814;
																		long BgL_col1z00_5813;
																		obj_t BgL_restz00_5812;

																		BgL_restz00_5812 = BgL_restz00_3082;
																		BgL_col1z00_5813 = BgL_arg1453z00_1559;
																		BgL_col2z00_5814 =
																			BGl_z62prz62zz__ppz00
																			(BgL_ppzd2exprzd2_3776,
																			BgL_outputz00_3777,
																			BgL_displayzf3zf3_3775,
																			BgL_maxzd2exprzd2widthz00_3774,
																			BgL_widthz00_3773,
																			BgL_maxzd2callzd2headzd2widthzd2_3772,
																			BgL_ppzd2lambdazd2_3771,
																			BgL_ppzd2definezd2_3770,
																			BgL_ppzd2defunzd2_3769,
																			BgL_ppzd2ifzd2_3768,
																			BgL_ppzd2condzd2_3767,
																			BgL_ppzd2casezd2_3766,
																			BgL_ppzd2andzd2_3765,
																			BgL_ppzd2letzd2_3764,
																			BgL_ppzd2beginzd2_3763,
																			BgL_ppzd2dozd2_3762,
																			BgL_ppzd2commentzd2_3761,
																			BgL_ppzd2exprzd2listz00_3760,
																			BgL_ppzd2exprzd2defunz00_3759,
																			BgL_indentzd2generalzd2_3778,
																			BgL_val1z00_3081,
																			BGl_z62indentz62zz__ppz00
																			(BgL_outputz00_3777,
																				BINT(BgL_arg1454z00_1560),
																				BgL_colza2za2_1551),
																			BINT(BgL_extraz00_3083),
																			BgL_ppzd21zd2_1542);
																		BgL_col3z00_5819 = BgL_arg1454z00_1560;
																		BgL_col3z00_1577 = BgL_col3z00_5819;
																		BgL_col2z00_1576 = BgL_col2z00_5814;
																		BgL_col1z00_1575 = BgL_col1z00_5813;
																		BgL_restz00_1574 = BgL_restz00_5812;
																		goto BgL_zc3z04anonymousza31461ze3z87_1578;
																	}
																}
															}
														}
													}
												else
													{
														long BgL_col3z00_5823;
														obj_t BgL_col2z00_5822;
														long BgL_col1z00_5821;
														obj_t BgL_restz00_5820;

														BgL_restz00_5820 = BgL_restz00_1550;
														BgL_col1z00_5821 = BgL_arg1453z00_1559;
														BgL_col2z00_5822 = BgL_colza2za2_1551;
														BgL_col3z00_5823 = BgL_arg1454z00_1560;
														BgL_col3z00_1577 = BgL_col3z00_5823;
														BgL_col2z00_1576 = BgL_col2z00_5822;
														BgL_col1z00_1575 = BgL_col1z00_5821;
														BgL_restz00_1574 = BgL_restz00_5820;
														goto BgL_zc3z04anonymousza31461ze3z87_1578;
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



/* &pp-lambda */
	obj_t BGl_z62ppzd2lambdazb0zz__ppz00(obj_t BgL_envz00_3779,
		obj_t BgL_exprz00_3799, obj_t BgL_colz00_3800, obj_t BgL_extraz00_3801)
	{
		{	/* Pp/pp.scm 390 */
			{	/* Pp/pp.scm 386 */
				long BgL_indentzd2generalzd2_3780;
				obj_t BgL_ppzd2exprzd2defunz00_3781;
				obj_t BgL_widthz00_3782;
				long BgL_maxzd2exprzd2widthz00_3783;
				obj_t BgL_displayzf3zf3_3784;
				obj_t BgL_ppzd2exprzd2listz00_3785;
				obj_t BgL_ppzd2commentzd2_3786;
				obj_t BgL_ppzd2dozd2_3787;
				obj_t BgL_ppzd2beginzd2_3788;
				obj_t BgL_ppzd2letzd2_3789;
				obj_t BgL_ppzd2andzd2_3790;
				obj_t BgL_ppzd2casezd2_3791;
				obj_t BgL_ppzd2condzd2_3792;
				obj_t BgL_ppzd2ifzd2_3793;
				obj_t BgL_ppzd2defunzd2_3794;
				obj_t BgL_ppzd2definezd2_3795;
				long BgL_maxzd2callzd2headzd2widthzd2_3796;
				obj_t BgL_outputz00_3797;
				obj_t BgL_ppzd2exprzd2_3798;

				BgL_indentzd2generalzd2_3780 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3779, (int) (((long) 0))));
				BgL_ppzd2exprzd2defunz00_3781 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3779, (int) (((long) 1))));
				BgL_widthz00_3782 = PROCEDURE_REF(BgL_envz00_3779, (int) (((long) 2)));
				BgL_maxzd2exprzd2widthz00_3783 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3779, (int) (((long) 3))));
				BgL_displayzf3zf3_3784 =
					PROCEDURE_REF(BgL_envz00_3779, (int) (((long) 4)));
				BgL_ppzd2exprzd2listz00_3785 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3779, (int) (((long) 5))));
				BgL_ppzd2commentzd2_3786 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3779, (int) (((long) 6))));
				BgL_ppzd2dozd2_3787 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3779, (int) (((long) 7))));
				BgL_ppzd2beginzd2_3788 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3779, (int) (((long) 8))));
				BgL_ppzd2letzd2_3789 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3779, (int) (((long) 9))));
				BgL_ppzd2andzd2_3790 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3779, (int) (((long) 10))));
				BgL_ppzd2casezd2_3791 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3779, (int) (((long) 11))));
				BgL_ppzd2condzd2_3792 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3779, (int) (((long) 12))));
				BgL_ppzd2ifzd2_3793 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3779, (int) (((long) 13))));
				BgL_ppzd2defunzd2_3794 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3779, (int) (((long) 14))));
				BgL_ppzd2definezd2_3795 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3779, (int) (((long) 15))));
				BgL_maxzd2callzd2headzd2widthzd2_3796 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3779, (int) (((long) 16))));
				BgL_outputz00_3797 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3779, (int) (((long) 17))));
				BgL_ppzd2exprzd2_3798 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3779, (int) (((long) 18))));
				{	/* Pp/pp.scm 386 */
					obj_t BgL_colz00_4114;

					if (CBOOL(BgL_colz00_3800))
						{	/* Pp/pp.scm 133 */
							obj_t BgL__andtest_1044z00_4115;

							BgL__andtest_1044z00_4115 =
								PROCEDURE_L_ENTRY(BgL_outputz00_3797) (BgL_outputz00_3797,
								BGl_string2278z00zz__ppz00);
							if (CBOOL(BgL__andtest_1044z00_4115))
								{	/* Pp/pp.scm 133 */
									BgL_colz00_4114 = ADDFX(BgL_colz00_3800, BINT(((long) 1)));
								}
							else
								{	/* Pp/pp.scm 133 */
									BgL_colz00_4114 = BFALSE;
								}
						}
					else
						{	/* Pp/pp.scm 133 */
							BgL_colz00_4114 = BFALSE;
						}
					{	/* Pp/pp.scm 386 */
						obj_t BgL_col2z00_4116;

						{	/* Pp/pp.scm 387 */
							obj_t BgL_arg1476z00_4117;

							BgL_arg1476z00_4117 = CAR(((obj_t) BgL_exprz00_3799));
							BgL_col2z00_4116 =
								BGl_z62wrz62zz__ppz00(BgL_displayzf3zf3_3784,
								BgL_outputz00_3797, BgL_arg1476z00_4117, BgL_colz00_4114);
						}
						{	/* Pp/pp.scm 387 */
							obj_t BgL_col3z00_4118;

							if (CBOOL(BgL_col2z00_4116))
								{	/* Pp/pp.scm 133 */
									obj_t BgL__andtest_1044z00_4119;

									BgL__andtest_1044z00_4119 =
										PROCEDURE_L_ENTRY(BgL_outputz00_3797) (BgL_outputz00_3797,
										BGl_string2279z00zz__ppz00);
									if (CBOOL(BgL__andtest_1044z00_4119))
										{	/* Pp/pp.scm 133 */
											BgL_col3z00_4118 =
												ADDFX(BgL_col2z00_4116, BINT(((long) 1)));
										}
									else
										{	/* Pp/pp.scm 133 */
											BgL_col3z00_4118 = BFALSE;
										}
								}
							else
								{	/* Pp/pp.scm 133 */
									BgL_col3z00_4118 = BFALSE;
								}
							{	/* Pp/pp.scm 388 */
								obj_t BgL_col4z00_4120;

								{	/* Pp/pp.scm 389 */
									obj_t BgL_arg1475z00_4121;

									{	/* Pp/pp.scm 389 */
										obj_t BgL_pairz00_4122;

										BgL_pairz00_4122 = CDR(((obj_t) BgL_exprz00_3799));
										BgL_arg1475z00_4121 = CAR(BgL_pairz00_4122);
									}
									BgL_col4z00_4120 =
										BGl_z62wrz62zz__ppz00(BgL_displayzf3zf3_3784,
										BgL_outputz00_3797, BgL_arg1475z00_4121, BgL_col3z00_4118);
								}
								{	/* Pp/pp.scm 389 */

									{	/* Pp/pp.scm 390 */
										obj_t BgL_arg1473z00_4123;
										long BgL_arg1474z00_4124;

										{	/* Pp/pp.scm 390 */
											obj_t BgL_pairz00_4125;

											BgL_pairz00_4125 = CDR(((obj_t) BgL_exprz00_3799));
											BgL_arg1473z00_4123 = CDR(BgL_pairz00_4125);
										}
										BgL_arg1474z00_4124 =
											((long) CINT(BgL_colz00_4114) + ((long) 2));
										return
											BGl_z62ppzd2downzb0zz__ppz00(BgL_outputz00_3797,
											BgL_ppzd2exprzd2_3798, BgL_displayzf3zf3_3784,
											BgL_maxzd2exprzd2widthz00_3783, BgL_widthz00_3782,
											BgL_maxzd2callzd2headzd2widthzd2_3796, BgL_envz00_3779,
											BgL_ppzd2definezd2_3795, BgL_ppzd2defunzd2_3794,
											BgL_ppzd2ifzd2_3793, BgL_ppzd2condzd2_3792,
											BgL_ppzd2casezd2_3791, BgL_ppzd2andzd2_3790,
											BgL_ppzd2letzd2_3789, BgL_ppzd2beginzd2_3788,
											BgL_ppzd2dozd2_3787, BgL_ppzd2commentzd2_3786,
											BgL_ppzd2exprzd2listz00_3785,
											BgL_ppzd2exprzd2defunz00_3781,
											BgL_indentzd2generalzd2_3780, BgL_arg1473z00_4123,
											BgL_col3z00_4118, BINT(BgL_arg1474z00_4124),
											BgL_extraz00_3801, BgL_ppzd2exprzd2_3798);
									}
								}
							}
						}
					}
				}
			}
		}

	}



/* &pp-define */
	obj_t BGl_z62ppzd2definezb0zz__ppz00(obj_t BgL_envz00_3802,
		obj_t BgL_exprz00_3822, obj_t BgL_colz00_3823, obj_t BgL_extraz00_3824)
	{
		{	/* Pp/pp.scm 372 */
			{	/* Pp/pp.scm 372 */
				long BgL_indentzd2generalzd2_3803;
				obj_t BgL_ppzd2exprzd2defunz00_3804;
				obj_t BgL_ppzd2commentzd2_3805;
				obj_t BgL_ppzd2dozd2_3806;
				obj_t BgL_ppzd2beginzd2_3807;
				obj_t BgL_ppzd2letzd2_3808;
				obj_t BgL_ppzd2andzd2_3809;
				obj_t BgL_ppzd2casezd2_3810;
				obj_t BgL_ppzd2condzd2_3811;
				obj_t BgL_ppzd2ifzd2_3812;
				obj_t BgL_ppzd2defunzd2_3813;
				obj_t BgL_ppzd2lambdazd2_3814;
				long BgL_maxzd2callzd2headzd2widthzd2_3815;
				obj_t BgL_widthz00_3816;
				long BgL_maxzd2exprzd2widthz00_3817;
				obj_t BgL_displayzf3zf3_3818;
				obj_t BgL_ppzd2exprzd2listz00_3819;
				obj_t BgL_ppzd2exprzd2_3820;
				obj_t BgL_outputz00_3821;

				BgL_indentzd2generalzd2_3803 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3802, (int) (((long) 0))));
				BgL_ppzd2exprzd2defunz00_3804 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3802, (int) (((long) 1))));
				BgL_ppzd2commentzd2_3805 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3802, (int) (((long) 2))));
				BgL_ppzd2dozd2_3806 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3802, (int) (((long) 3))));
				BgL_ppzd2beginzd2_3807 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3802, (int) (((long) 4))));
				BgL_ppzd2letzd2_3808 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3802, (int) (((long) 5))));
				BgL_ppzd2andzd2_3809 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3802, (int) (((long) 6))));
				BgL_ppzd2casezd2_3810 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3802, (int) (((long) 7))));
				BgL_ppzd2condzd2_3811 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3802, (int) (((long) 8))));
				BgL_ppzd2ifzd2_3812 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3802, (int) (((long) 9))));
				BgL_ppzd2defunzd2_3813 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3802, (int) (((long) 10))));
				BgL_ppzd2lambdazd2_3814 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3802, (int) (((long) 11))));
				BgL_maxzd2callzd2headzd2widthzd2_3815 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3802, (int) (((long) 12))));
				BgL_widthz00_3816 = PROCEDURE_REF(BgL_envz00_3802, (int) (((long) 13)));
				BgL_maxzd2exprzd2widthz00_3817 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3802, (int) (((long) 14))));
				BgL_displayzf3zf3_3818 =
					PROCEDURE_REF(BgL_envz00_3802, (int) (((long) 15)));
				BgL_ppzd2exprzd2listz00_3819 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3802, (int) (((long) 16))));
				BgL_ppzd2exprzd2_3820 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3802, (int) (((long) 17))));
				BgL_outputz00_3821 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3802, (int) (((long) 18))));
				BGl_z62ppzd2generalzb0zz__ppz00(BgL_indentzd2generalzd2_3803,
					BgL_outputz00_3821, BgL_ppzd2exprzd2_3820, BgL_displayzf3zf3_3818,
					BgL_maxzd2exprzd2widthz00_3817, BgL_widthz00_3816,
					BgL_maxzd2callzd2headzd2widthzd2_3815, BgL_ppzd2lambdazd2_3814,
					BgL_envz00_3802, BgL_ppzd2defunzd2_3813, BgL_ppzd2ifzd2_3812,
					BgL_ppzd2condzd2_3811, BgL_ppzd2casezd2_3810, BgL_ppzd2andzd2_3809,
					BgL_ppzd2letzd2_3808, BgL_ppzd2beginzd2_3807, BgL_ppzd2dozd2_3806,
					BgL_ppzd2commentzd2_3805, BgL_ppzd2exprzd2listz00_3819,
					BgL_ppzd2exprzd2defunz00_3804, BgL_exprz00_3822, BgL_colz00_3823,
					BgL_extraz00_3824, ((bool_t) 0), BgL_ppzd2exprzd2listz00_3819, BFALSE,
					BgL_ppzd2exprzd2_3820);
				{	/* Pp/pp.scm 133 */
					obj_t BgL__andtest_1044z00_4126;

					BgL__andtest_1044z00_4126 =
						PROCEDURE_L_ENTRY(BgL_outputz00_3821) (BgL_outputz00_3821,
						BGl_string2315z00zz__ppz00);
					if (CBOOL(BgL__andtest_1044z00_4126))
						{	/* Pp/pp.scm 133 */
							return BINT((((long) 0) + ((long) 1)));
						}
					else
						{	/* Pp/pp.scm 133 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &pp-defun */
	obj_t BGl_z62ppzd2defunzb0zz__ppz00(obj_t BgL_envz00_3825,
		obj_t BgL_exprz00_3845, obj_t BgL_colz00_3846, obj_t BgL_extraz00_3847)
	{
		{	/* Pp/pp.scm 376 */
			{	/* Pp/pp.scm 376 */
				long BgL_indentzd2generalzd2_3826;
				obj_t BgL_ppzd2exprzd2listz00_3827;
				obj_t BgL_ppzd2commentzd2_3828;
				obj_t BgL_ppzd2dozd2_3829;
				obj_t BgL_ppzd2beginzd2_3830;
				obj_t BgL_ppzd2letzd2_3831;
				obj_t BgL_ppzd2andzd2_3832;
				obj_t BgL_ppzd2casezd2_3833;
				obj_t BgL_ppzd2condzd2_3834;
				obj_t BgL_ppzd2ifzd2_3835;
				obj_t BgL_ppzd2definezd2_3836;
				obj_t BgL_ppzd2lambdazd2_3837;
				long BgL_maxzd2callzd2headzd2widthzd2_3838;
				obj_t BgL_widthz00_3839;
				long BgL_maxzd2exprzd2widthz00_3840;
				obj_t BgL_displayzf3zf3_3841;
				obj_t BgL_ppzd2exprzd2defunz00_3842;
				obj_t BgL_ppzd2exprzd2_3843;
				obj_t BgL_outputz00_3844;

				BgL_indentzd2generalzd2_3826 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3825, (int) (((long) 0))));
				BgL_ppzd2exprzd2listz00_3827 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3825, (int) (((long) 1))));
				BgL_ppzd2commentzd2_3828 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3825, (int) (((long) 2))));
				BgL_ppzd2dozd2_3829 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3825, (int) (((long) 3))));
				BgL_ppzd2beginzd2_3830 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3825, (int) (((long) 4))));
				BgL_ppzd2letzd2_3831 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3825, (int) (((long) 5))));
				BgL_ppzd2andzd2_3832 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3825, (int) (((long) 6))));
				BgL_ppzd2casezd2_3833 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3825, (int) (((long) 7))));
				BgL_ppzd2condzd2_3834 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3825, (int) (((long) 8))));
				BgL_ppzd2ifzd2_3835 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3825, (int) (((long) 9))));
				BgL_ppzd2definezd2_3836 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3825, (int) (((long) 10))));
				BgL_ppzd2lambdazd2_3837 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3825, (int) (((long) 11))));
				BgL_maxzd2callzd2headzd2widthzd2_3838 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3825, (int) (((long) 12))));
				BgL_widthz00_3839 = PROCEDURE_REF(BgL_envz00_3825, (int) (((long) 13)));
				BgL_maxzd2exprzd2widthz00_3840 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3825, (int) (((long) 14))));
				BgL_displayzf3zf3_3841 =
					PROCEDURE_REF(BgL_envz00_3825, (int) (((long) 15)));
				BgL_ppzd2exprzd2defunz00_3842 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3825, (int) (((long) 16))));
				BgL_ppzd2exprzd2_3843 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3825, (int) (((long) 17))));
				BgL_outputz00_3844 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3825, (int) (((long) 18))));
				BGl_z62ppzd2generalzb0zz__ppz00(BgL_indentzd2generalzd2_3826,
					BgL_outputz00_3844, BgL_ppzd2exprzd2_3843, BgL_displayzf3zf3_3841,
					BgL_maxzd2exprzd2widthz00_3840, BgL_widthz00_3839,
					BgL_maxzd2callzd2headzd2widthzd2_3838, BgL_ppzd2lambdazd2_3837,
					BgL_ppzd2definezd2_3836, BgL_envz00_3825, BgL_ppzd2ifzd2_3835,
					BgL_ppzd2condzd2_3834, BgL_ppzd2casezd2_3833, BgL_ppzd2andzd2_3832,
					BgL_ppzd2letzd2_3831, BgL_ppzd2beginzd2_3830, BgL_ppzd2dozd2_3829,
					BgL_ppzd2commentzd2_3828, BgL_ppzd2exprzd2listz00_3827,
					BgL_ppzd2exprzd2defunz00_3842, BgL_exprz00_3845, BgL_colz00_3846,
					BgL_extraz00_3847, ((bool_t) 1), BgL_ppzd2exprzd2defunz00_3842,
					BFALSE, BgL_ppzd2exprzd2_3843);
				{	/* Pp/pp.scm 133 */
					obj_t BgL__andtest_1044z00_4127;

					BgL__andtest_1044z00_4127 =
						PROCEDURE_L_ENTRY(BgL_outputz00_3844) (BgL_outputz00_3844,
						BGl_string2315z00zz__ppz00);
					if (CBOOL(BgL__andtest_1044z00_4127))
						{	/* Pp/pp.scm 133 */
							return BINT((((long) 0) + ((long) 1)));
						}
					else
						{	/* Pp/pp.scm 133 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &pp-if */
	obj_t BGl_z62ppzd2ifzb0zz__ppz00(obj_t BgL_envz00_3848,
		obj_t BgL_exprz00_3868, obj_t BgL_colz00_3869, obj_t BgL_extraz00_3870)
	{
		{	/* Pp/pp.scm 409 */
			{	/* Pp/pp.scm 409 */
				long BgL_indentzd2generalzd2_3849;
				obj_t BgL_ppzd2exprzd2defunz00_3850;
				obj_t BgL_widthz00_3851;
				long BgL_maxzd2exprzd2widthz00_3852;
				obj_t BgL_displayzf3zf3_3853;
				obj_t BgL_ppzd2exprzd2listz00_3854;
				obj_t BgL_ppzd2commentzd2_3855;
				obj_t BgL_ppzd2dozd2_3856;
				obj_t BgL_ppzd2beginzd2_3857;
				obj_t BgL_ppzd2letzd2_3858;
				obj_t BgL_ppzd2andzd2_3859;
				obj_t BgL_ppzd2casezd2_3860;
				obj_t BgL_ppzd2condzd2_3861;
				obj_t BgL_ppzd2defunzd2_3862;
				obj_t BgL_ppzd2definezd2_3863;
				obj_t BgL_ppzd2lambdazd2_3864;
				obj_t BgL_outputz00_3865;
				long BgL_maxzd2callzd2headzd2widthzd2_3866;
				obj_t BgL_ppzd2exprzd2_3867;

				BgL_indentzd2generalzd2_3849 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3848, (int) (((long) 0))));
				BgL_ppzd2exprzd2defunz00_3850 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3848, (int) (((long) 1))));
				BgL_widthz00_3851 = PROCEDURE_REF(BgL_envz00_3848, (int) (((long) 2)));
				BgL_maxzd2exprzd2widthz00_3852 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3848, (int) (((long) 3))));
				BgL_displayzf3zf3_3853 =
					PROCEDURE_REF(BgL_envz00_3848, (int) (((long) 4)));
				BgL_ppzd2exprzd2listz00_3854 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3848, (int) (((long) 5))));
				BgL_ppzd2commentzd2_3855 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3848, (int) (((long) 6))));
				BgL_ppzd2dozd2_3856 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3848, (int) (((long) 7))));
				BgL_ppzd2beginzd2_3857 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3848, (int) (((long) 8))));
				BgL_ppzd2letzd2_3858 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3848, (int) (((long) 9))));
				BgL_ppzd2andzd2_3859 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3848, (int) (((long) 10))));
				BgL_ppzd2casezd2_3860 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3848, (int) (((long) 11))));
				BgL_ppzd2condzd2_3861 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3848, (int) (((long) 12))));
				BgL_ppzd2defunzd2_3862 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3848, (int) (((long) 13))));
				BgL_ppzd2definezd2_3863 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3848, (int) (((long) 14))));
				BgL_ppzd2lambdazd2_3864 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3848, (int) (((long) 15))));
				BgL_outputz00_3865 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3848, (int) (((long) 16))));
				BgL_maxzd2callzd2headzd2widthzd2_3866 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3848, (int) (((long) 17))));
				BgL_ppzd2exprzd2_3867 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3848, (int) (((long) 18))));
				return
					BGl_z62ppzd2generalzb0zz__ppz00(BgL_indentzd2generalzd2_3849,
					BgL_outputz00_3865, BgL_ppzd2exprzd2_3867, BgL_displayzf3zf3_3853,
					BgL_maxzd2exprzd2widthz00_3852, BgL_widthz00_3851,
					BgL_maxzd2callzd2headzd2widthzd2_3866, BgL_ppzd2lambdazd2_3864,
					BgL_ppzd2definezd2_3863, BgL_ppzd2defunzd2_3862, BgL_envz00_3848,
					BgL_ppzd2condzd2_3861, BgL_ppzd2casezd2_3860, BgL_ppzd2andzd2_3859,
					BgL_ppzd2letzd2_3858, BgL_ppzd2beginzd2_3857, BgL_ppzd2dozd2_3856,
					BgL_ppzd2commentzd2_3855, BgL_ppzd2exprzd2listz00_3854,
					BgL_ppzd2exprzd2defunz00_3850, BgL_exprz00_3868, BgL_colz00_3869,
					BgL_extraz00_3870, ((bool_t) 0), BgL_ppzd2exprzd2_3867, BFALSE,
					BgL_ppzd2exprzd2_3867);
			}
		}

	}



/* &pp-cond */
	obj_t BGl_z62ppzd2condzb0zz__ppz00(obj_t BgL_envz00_3871,
		obj_t BgL_exprz00_3891, obj_t BgL_colz00_3892, obj_t BgL_extraz00_3893)
	{
		{	/* Pp/pp.scm 412 */
			{	/* Pp/pp.scm 298 */
				long BgL_indentzd2generalzd2_3872;
				obj_t BgL_ppzd2exprzd2defunz00_3873;
				obj_t BgL_widthz00_3874;
				long BgL_maxzd2exprzd2widthz00_3875;
				obj_t BgL_displayzf3zf3_3876;
				obj_t BgL_ppzd2commentzd2_3877;
				obj_t BgL_ppzd2dozd2_3878;
				obj_t BgL_ppzd2beginzd2_3879;
				obj_t BgL_ppzd2letzd2_3880;
				obj_t BgL_ppzd2andzd2_3881;
				obj_t BgL_ppzd2casezd2_3882;
				obj_t BgL_ppzd2ifzd2_3883;
				obj_t BgL_ppzd2defunzd2_3884;
				obj_t BgL_ppzd2definezd2_3885;
				obj_t BgL_ppzd2lambdazd2_3886;
				long BgL_maxzd2callzd2headzd2widthzd2_3887;
				obj_t BgL_ppzd2exprzd2_3888;
				obj_t BgL_outputz00_3889;
				obj_t BgL_ppzd2exprzd2listz00_3890;

				BgL_indentzd2generalzd2_3872 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3871, (int) (((long) 0))));
				BgL_ppzd2exprzd2defunz00_3873 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3871, (int) (((long) 1))));
				BgL_widthz00_3874 = PROCEDURE_REF(BgL_envz00_3871, (int) (((long) 2)));
				BgL_maxzd2exprzd2widthz00_3875 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3871, (int) (((long) 3))));
				BgL_displayzf3zf3_3876 =
					PROCEDURE_REF(BgL_envz00_3871, (int) (((long) 4)));
				BgL_ppzd2commentzd2_3877 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3871, (int) (((long) 5))));
				BgL_ppzd2dozd2_3878 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3871, (int) (((long) 6))));
				BgL_ppzd2beginzd2_3879 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3871, (int) (((long) 7))));
				BgL_ppzd2letzd2_3880 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3871, (int) (((long) 8))));
				BgL_ppzd2andzd2_3881 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3871, (int) (((long) 9))));
				BgL_ppzd2casezd2_3882 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3871, (int) (((long) 10))));
				BgL_ppzd2ifzd2_3883 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3871, (int) (((long) 11))));
				BgL_ppzd2defunzd2_3884 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3871, (int) (((long) 12))));
				BgL_ppzd2definezd2_3885 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3871, (int) (((long) 13))));
				BgL_ppzd2lambdazd2_3886 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3871, (int) (((long) 14))));
				BgL_maxzd2callzd2headzd2widthzd2_3887 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3871, (int) (((long) 15))));
				BgL_ppzd2exprzd2_3888 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3871, (int) (((long) 16))));
				BgL_outputz00_3889 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3871, (int) (((long) 17))));
				BgL_ppzd2exprzd2listz00_3890 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3871, (int) (((long) 18))));
				{	/* Pp/pp.scm 298 */
					obj_t BgL_colza2za2_4128;

					{	/* Pp/pp.scm 298 */
						obj_t BgL_arg1426z00_4129;
						obj_t BgL_arg1427z00_4130;

						BgL_arg1426z00_4129 = CAR(((obj_t) BgL_exprz00_3891));
						if (CBOOL(BgL_colz00_3892))
							{	/* Pp/pp.scm 133 */
								obj_t BgL__andtest_1044z00_4131;

								BgL__andtest_1044z00_4131 =
									PROCEDURE_L_ENTRY(BgL_outputz00_3889) (BgL_outputz00_3889,
									BGl_string2278z00zz__ppz00);
								if (CBOOL(BgL__andtest_1044z00_4131))
									{	/* Pp/pp.scm 133 */
										BgL_arg1427z00_4130 =
											ADDFX(BgL_colz00_3892, BINT(((long) 1)));
									}
								else
									{	/* Pp/pp.scm 133 */
										BgL_arg1427z00_4130 = BFALSE;
									}
							}
						else
							{	/* Pp/pp.scm 133 */
								BgL_arg1427z00_4130 = BFALSE;
							}
						BgL_colza2za2_4128 =
							BGl_z62wrz62zz__ppz00(BgL_displayzf3zf3_3876, BgL_outputz00_3889,
							BgL_arg1426z00_4129, BgL_arg1427z00_4130);
					}
					if (CBOOL(BgL_colz00_3892))
						{	/* Pp/pp.scm 300 */
							obj_t BgL_arg1424z00_4132;
							long BgL_arg1425z00_4133;

							BgL_arg1424z00_4132 = CDR(((obj_t) BgL_exprz00_3891));
							BgL_arg1425z00_4133 =
								((long) CINT(BgL_colza2za2_4128) + ((long) 1));
							return
								BGl_z62ppzd2downzb0zz__ppz00(BgL_outputz00_3889,
								BgL_ppzd2exprzd2_3888, BgL_displayzf3zf3_3876,
								BgL_maxzd2exprzd2widthz00_3875, BgL_widthz00_3874,
								BgL_maxzd2callzd2headzd2widthzd2_3887, BgL_ppzd2lambdazd2_3886,
								BgL_ppzd2definezd2_3885, BgL_ppzd2defunzd2_3884,
								BgL_ppzd2ifzd2_3883, BgL_envz00_3871, BgL_ppzd2casezd2_3882,
								BgL_ppzd2andzd2_3881, BgL_ppzd2letzd2_3880,
								BgL_ppzd2beginzd2_3879, BgL_ppzd2dozd2_3878,
								BgL_ppzd2commentzd2_3877, BgL_ppzd2exprzd2listz00_3890,
								BgL_ppzd2exprzd2defunz00_3873, BgL_indentzd2generalzd2_3872,
								BgL_arg1424z00_4132, BgL_colza2za2_4128,
								BINT(BgL_arg1425z00_4133), BgL_extraz00_3893,
								BgL_ppzd2exprzd2listz00_3890);
						}
					else
						{	/* Pp/pp.scm 299 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &pp-case */
	obj_t BGl_z62ppzd2casezb0zz__ppz00(obj_t BgL_envz00_3894,
		obj_t BgL_exprz00_3914, obj_t BgL_colz00_3915, obj_t BgL_extraz00_3916)
	{
		{	/* Pp/pp.scm 415 */
			{	/* Pp/pp.scm 415 */
				long BgL_indentzd2generalzd2_3895;
				obj_t BgL_ppzd2exprzd2defunz00_3896;
				obj_t BgL_widthz00_3897;
				long BgL_maxzd2exprzd2widthz00_3898;
				obj_t BgL_displayzf3zf3_3899;
				obj_t BgL_ppzd2commentzd2_3900;
				obj_t BgL_ppzd2dozd2_3901;
				obj_t BgL_ppzd2beginzd2_3902;
				obj_t BgL_ppzd2letzd2_3903;
				obj_t BgL_ppzd2andzd2_3904;
				obj_t BgL_ppzd2condzd2_3905;
				obj_t BgL_ppzd2ifzd2_3906;
				obj_t BgL_ppzd2defunzd2_3907;
				obj_t BgL_ppzd2definezd2_3908;
				obj_t BgL_ppzd2lambdazd2_3909;
				obj_t BgL_outputz00_3910;
				long BgL_maxzd2callzd2headzd2widthzd2_3911;
				obj_t BgL_ppzd2exprzd2_3912;
				obj_t BgL_ppzd2exprzd2listz00_3913;

				BgL_indentzd2generalzd2_3895 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3894, (int) (((long) 0))));
				BgL_ppzd2exprzd2defunz00_3896 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3894, (int) (((long) 1))));
				BgL_widthz00_3897 = PROCEDURE_REF(BgL_envz00_3894, (int) (((long) 2)));
				BgL_maxzd2exprzd2widthz00_3898 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3894, (int) (((long) 3))));
				BgL_displayzf3zf3_3899 =
					PROCEDURE_REF(BgL_envz00_3894, (int) (((long) 4)));
				BgL_ppzd2commentzd2_3900 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3894, (int) (((long) 5))));
				BgL_ppzd2dozd2_3901 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3894, (int) (((long) 6))));
				BgL_ppzd2beginzd2_3902 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3894, (int) (((long) 7))));
				BgL_ppzd2letzd2_3903 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3894, (int) (((long) 8))));
				BgL_ppzd2andzd2_3904 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3894, (int) (((long) 9))));
				BgL_ppzd2condzd2_3905 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3894, (int) (((long) 10))));
				BgL_ppzd2ifzd2_3906 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3894, (int) (((long) 11))));
				BgL_ppzd2defunzd2_3907 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3894, (int) (((long) 12))));
				BgL_ppzd2definezd2_3908 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3894, (int) (((long) 13))));
				BgL_ppzd2lambdazd2_3909 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3894, (int) (((long) 14))));
				BgL_outputz00_3910 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3894, (int) (((long) 15))));
				BgL_maxzd2callzd2headzd2widthzd2_3911 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3894, (int) (((long) 16))));
				BgL_ppzd2exprzd2_3912 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3894, (int) (((long) 17))));
				BgL_ppzd2exprzd2listz00_3913 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3894, (int) (((long) 18))));
				return
					BGl_z62ppzd2generalzb0zz__ppz00(BgL_indentzd2generalzd2_3895,
					BgL_outputz00_3910, BgL_ppzd2exprzd2_3912, BgL_displayzf3zf3_3899,
					BgL_maxzd2exprzd2widthz00_3898, BgL_widthz00_3897,
					BgL_maxzd2callzd2headzd2widthzd2_3911, BgL_ppzd2lambdazd2_3909,
					BgL_ppzd2definezd2_3908, BgL_ppzd2defunzd2_3907, BgL_ppzd2ifzd2_3906,
					BgL_ppzd2condzd2_3905, BgL_envz00_3894, BgL_ppzd2andzd2_3904,
					BgL_ppzd2letzd2_3903, BgL_ppzd2beginzd2_3902, BgL_ppzd2dozd2_3901,
					BgL_ppzd2commentzd2_3900, BgL_ppzd2exprzd2listz00_3913,
					BgL_ppzd2exprzd2defunz00_3896, BgL_exprz00_3914, BgL_colz00_3915,
					BgL_extraz00_3916, ((bool_t) 0), BgL_ppzd2exprzd2_3912, BFALSE,
					BgL_ppzd2exprzd2listz00_3913);
			}
		}

	}



/* &pp-and */
	obj_t BGl_z62ppzd2andzb0zz__ppz00(obj_t BgL_envz00_3917,
		obj_t BgL_exprz00_3937, obj_t BgL_colz00_3938, obj_t BgL_extraz00_3939)
	{
		{	/* Pp/pp.scm 418 */
			{	/* Pp/pp.scm 298 */
				long BgL_indentzd2generalzd2_3918;
				obj_t BgL_ppzd2exprzd2defunz00_3919;
				obj_t BgL_widthz00_3920;
				long BgL_maxzd2exprzd2widthz00_3921;
				obj_t BgL_displayzf3zf3_3922;
				obj_t BgL_ppzd2exprzd2listz00_3923;
				obj_t BgL_ppzd2commentzd2_3924;
				obj_t BgL_ppzd2dozd2_3925;
				obj_t BgL_ppzd2beginzd2_3926;
				obj_t BgL_ppzd2letzd2_3927;
				obj_t BgL_ppzd2casezd2_3928;
				obj_t BgL_ppzd2condzd2_3929;
				obj_t BgL_ppzd2ifzd2_3930;
				obj_t BgL_ppzd2defunzd2_3931;
				obj_t BgL_ppzd2definezd2_3932;
				obj_t BgL_ppzd2lambdazd2_3933;
				long BgL_maxzd2callzd2headzd2widthzd2_3934;
				obj_t BgL_outputz00_3935;
				obj_t BgL_ppzd2exprzd2_3936;

				BgL_indentzd2generalzd2_3918 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3917, (int) (((long) 0))));
				BgL_ppzd2exprzd2defunz00_3919 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3917, (int) (((long) 1))));
				BgL_widthz00_3920 = PROCEDURE_REF(BgL_envz00_3917, (int) (((long) 2)));
				BgL_maxzd2exprzd2widthz00_3921 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3917, (int) (((long) 3))));
				BgL_displayzf3zf3_3922 =
					PROCEDURE_REF(BgL_envz00_3917, (int) (((long) 4)));
				BgL_ppzd2exprzd2listz00_3923 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3917, (int) (((long) 5))));
				BgL_ppzd2commentzd2_3924 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3917, (int) (((long) 6))));
				BgL_ppzd2dozd2_3925 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3917, (int) (((long) 7))));
				BgL_ppzd2beginzd2_3926 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3917, (int) (((long) 8))));
				BgL_ppzd2letzd2_3927 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3917, (int) (((long) 9))));
				BgL_ppzd2casezd2_3928 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3917, (int) (((long) 10))));
				BgL_ppzd2condzd2_3929 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3917, (int) (((long) 11))));
				BgL_ppzd2ifzd2_3930 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3917, (int) (((long) 12))));
				BgL_ppzd2defunzd2_3931 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3917, (int) (((long) 13))));
				BgL_ppzd2definezd2_3932 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3917, (int) (((long) 14))));
				BgL_ppzd2lambdazd2_3933 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3917, (int) (((long) 15))));
				BgL_maxzd2callzd2headzd2widthzd2_3934 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3917, (int) (((long) 16))));
				BgL_outputz00_3935 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3917, (int) (((long) 17))));
				BgL_ppzd2exprzd2_3936 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3917, (int) (((long) 18))));
				{	/* Pp/pp.scm 298 */
					obj_t BgL_colza2za2_4134;

					{	/* Pp/pp.scm 298 */
						obj_t BgL_arg1426z00_4135;
						obj_t BgL_arg1427z00_4136;

						BgL_arg1426z00_4135 = CAR(((obj_t) BgL_exprz00_3937));
						if (CBOOL(BgL_colz00_3938))
							{	/* Pp/pp.scm 133 */
								obj_t BgL__andtest_1044z00_4137;

								BgL__andtest_1044z00_4137 =
									PROCEDURE_L_ENTRY(BgL_outputz00_3935) (BgL_outputz00_3935,
									BGl_string2278z00zz__ppz00);
								if (CBOOL(BgL__andtest_1044z00_4137))
									{	/* Pp/pp.scm 133 */
										BgL_arg1427z00_4136 =
											ADDFX(BgL_colz00_3938, BINT(((long) 1)));
									}
								else
									{	/* Pp/pp.scm 133 */
										BgL_arg1427z00_4136 = BFALSE;
									}
							}
						else
							{	/* Pp/pp.scm 133 */
								BgL_arg1427z00_4136 = BFALSE;
							}
						BgL_colza2za2_4134 =
							BGl_z62wrz62zz__ppz00(BgL_displayzf3zf3_3922, BgL_outputz00_3935,
							BgL_arg1426z00_4135, BgL_arg1427z00_4136);
					}
					if (CBOOL(BgL_colz00_3938))
						{	/* Pp/pp.scm 300 */
							obj_t BgL_arg1424z00_4138;
							long BgL_arg1425z00_4139;

							BgL_arg1424z00_4138 = CDR(((obj_t) BgL_exprz00_3937));
							BgL_arg1425z00_4139 =
								((long) CINT(BgL_colza2za2_4134) + ((long) 1));
							return
								BGl_z62ppzd2downzb0zz__ppz00(BgL_outputz00_3935,
								BgL_ppzd2exprzd2_3936, BgL_displayzf3zf3_3922,
								BgL_maxzd2exprzd2widthz00_3921, BgL_widthz00_3920,
								BgL_maxzd2callzd2headzd2widthzd2_3934, BgL_ppzd2lambdazd2_3933,
								BgL_ppzd2definezd2_3932, BgL_ppzd2defunzd2_3931,
								BgL_ppzd2ifzd2_3930, BgL_ppzd2condzd2_3929,
								BgL_ppzd2casezd2_3928, BgL_envz00_3917, BgL_ppzd2letzd2_3927,
								BgL_ppzd2beginzd2_3926, BgL_ppzd2dozd2_3925,
								BgL_ppzd2commentzd2_3924, BgL_ppzd2exprzd2listz00_3923,
								BgL_ppzd2exprzd2defunz00_3919, BgL_indentzd2generalzd2_3918,
								BgL_arg1424z00_4138, BgL_colza2za2_4134,
								BINT(BgL_arg1425z00_4139), BgL_extraz00_3939,
								BgL_ppzd2exprzd2_3936);
						}
					else
						{	/* Pp/pp.scm 299 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &pp-let */
	obj_t BGl_z62ppzd2letzb0zz__ppz00(obj_t BgL_envz00_3940,
		obj_t BgL_exprz00_3960, obj_t BgL_colz00_3961, obj_t BgL_extraz00_3962)
	{
		{	/* Pp/pp.scm 380 */
			{	/* Pp/pp.scm 380 */
				long BgL_indentzd2generalzd2_3941;
				obj_t BgL_ppzd2exprzd2defunz00_3942;
				obj_t BgL_ppzd2commentzd2_3943;
				obj_t BgL_ppzd2dozd2_3944;
				obj_t BgL_ppzd2beginzd2_3945;
				obj_t BgL_ppzd2andzd2_3946;
				obj_t BgL_ppzd2casezd2_3947;
				obj_t BgL_ppzd2condzd2_3948;
				obj_t BgL_ppzd2ifzd2_3949;
				obj_t BgL_ppzd2defunzd2_3950;
				obj_t BgL_ppzd2definezd2_3951;
				obj_t BgL_ppzd2lambdazd2_3952;
				long BgL_maxzd2callzd2headzd2widthzd2_3953;
				obj_t BgL_widthz00_3954;
				long BgL_maxzd2exprzd2widthz00_3955;
				obj_t BgL_displayzf3zf3_3956;
				obj_t BgL_outputz00_3957;
				obj_t BgL_ppzd2exprzd2listz00_3958;
				obj_t BgL_ppzd2exprzd2_3959;

				BgL_indentzd2generalzd2_3941 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3940, (int) (((long) 0))));
				BgL_ppzd2exprzd2defunz00_3942 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3940, (int) (((long) 1))));
				BgL_ppzd2commentzd2_3943 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3940, (int) (((long) 2))));
				BgL_ppzd2dozd2_3944 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3940, (int) (((long) 3))));
				BgL_ppzd2beginzd2_3945 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3940, (int) (((long) 4))));
				BgL_ppzd2andzd2_3946 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3940, (int) (((long) 5))));
				BgL_ppzd2casezd2_3947 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3940, (int) (((long) 6))));
				BgL_ppzd2condzd2_3948 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3940, (int) (((long) 7))));
				BgL_ppzd2ifzd2_3949 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3940, (int) (((long) 8))));
				BgL_ppzd2defunzd2_3950 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3940, (int) (((long) 9))));
				BgL_ppzd2definezd2_3951 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3940, (int) (((long) 10))));
				BgL_ppzd2lambdazd2_3952 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3940, (int) (((long) 11))));
				BgL_maxzd2callzd2headzd2widthzd2_3953 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3940, (int) (((long) 12))));
				BgL_widthz00_3954 = PROCEDURE_REF(BgL_envz00_3940, (int) (((long) 13)));
				BgL_maxzd2exprzd2widthz00_3955 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3940, (int) (((long) 14))));
				BgL_displayzf3zf3_3956 =
					PROCEDURE_REF(BgL_envz00_3940, (int) (((long) 15)));
				BgL_outputz00_3957 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3940, (int) (((long) 16))));
				BgL_ppzd2exprzd2listz00_3958 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3940, (int) (((long) 17))));
				BgL_ppzd2exprzd2_3959 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3940, (int) (((long) 18))));
				return
					BGl_z62ppzd2generalzb0zz__ppz00(BgL_indentzd2generalzd2_3941,
					BgL_outputz00_3957, BgL_ppzd2exprzd2_3959, BgL_displayzf3zf3_3956,
					BgL_maxzd2exprzd2widthz00_3955, BgL_widthz00_3954,
					BgL_maxzd2callzd2headzd2widthzd2_3953, BgL_ppzd2lambdazd2_3952,
					BgL_ppzd2definezd2_3951, BgL_ppzd2defunzd2_3950, BgL_ppzd2ifzd2_3949,
					BgL_ppzd2condzd2_3948, BgL_ppzd2casezd2_3947, BgL_ppzd2andzd2_3946,
					BgL_envz00_3940, BgL_ppzd2beginzd2_3945, BgL_ppzd2dozd2_3944,
					BgL_ppzd2commentzd2_3943, BgL_ppzd2exprzd2listz00_3958,
					BgL_ppzd2exprzd2defunz00_3942, BgL_exprz00_3960, BgL_colz00_3961,
					BgL_extraz00_3962, ((bool_t) 0), BgL_ppzd2exprzd2listz00_3958, BFALSE,
					BgL_ppzd2exprzd2_3959);
			}
		}

	}



/* &pp-begin */
	obj_t BGl_z62ppzd2beginzb0zz__ppz00(obj_t BgL_envz00_3963,
		obj_t BgL_exprz00_3983, obj_t BgL_colz00_3984, obj_t BgL_extraz00_3985)
	{
		{	/* Pp/pp.scm 426 */
			{	/* Pp/pp.scm 426 */
				long BgL_indentzd2generalzd2_3964;
				obj_t BgL_ppzd2exprzd2defunz00_3965;
				obj_t BgL_widthz00_3966;
				long BgL_maxzd2exprzd2widthz00_3967;
				obj_t BgL_displayzf3zf3_3968;
				obj_t BgL_ppzd2exprzd2listz00_3969;
				obj_t BgL_ppzd2commentzd2_3970;
				obj_t BgL_ppzd2dozd2_3971;
				obj_t BgL_ppzd2letzd2_3972;
				obj_t BgL_ppzd2andzd2_3973;
				obj_t BgL_ppzd2casezd2_3974;
				obj_t BgL_ppzd2condzd2_3975;
				obj_t BgL_ppzd2ifzd2_3976;
				obj_t BgL_ppzd2defunzd2_3977;
				obj_t BgL_ppzd2definezd2_3978;
				obj_t BgL_ppzd2lambdazd2_3979;
				obj_t BgL_outputz00_3980;
				long BgL_maxzd2callzd2headzd2widthzd2_3981;
				obj_t BgL_ppzd2exprzd2_3982;

				BgL_indentzd2generalzd2_3964 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3963, (int) (((long) 0))));
				BgL_ppzd2exprzd2defunz00_3965 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3963, (int) (((long) 1))));
				BgL_widthz00_3966 = PROCEDURE_REF(BgL_envz00_3963, (int) (((long) 2)));
				BgL_maxzd2exprzd2widthz00_3967 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3963, (int) (((long) 3))));
				BgL_displayzf3zf3_3968 =
					PROCEDURE_REF(BgL_envz00_3963, (int) (((long) 4)));
				BgL_ppzd2exprzd2listz00_3969 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3963, (int) (((long) 5))));
				BgL_ppzd2commentzd2_3970 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3963, (int) (((long) 6))));
				BgL_ppzd2dozd2_3971 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3963, (int) (((long) 7))));
				BgL_ppzd2letzd2_3972 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3963, (int) (((long) 8))));
				BgL_ppzd2andzd2_3973 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3963, (int) (((long) 9))));
				BgL_ppzd2casezd2_3974 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3963, (int) (((long) 10))));
				BgL_ppzd2condzd2_3975 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3963, (int) (((long) 11))));
				BgL_ppzd2ifzd2_3976 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3963, (int) (((long) 12))));
				BgL_ppzd2defunzd2_3977 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3963, (int) (((long) 13))));
				BgL_ppzd2definezd2_3978 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3963, (int) (((long) 14))));
				BgL_ppzd2lambdazd2_3979 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3963, (int) (((long) 15))));
				BgL_outputz00_3980 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3963, (int) (((long) 16))));
				BgL_maxzd2callzd2headzd2widthzd2_3981 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3963, (int) (((long) 17))));
				BgL_ppzd2exprzd2_3982 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3963, (int) (((long) 18))));
				return
					BGl_z62ppzd2generalzb0zz__ppz00(BgL_indentzd2generalzd2_3964,
					BgL_outputz00_3980, BgL_ppzd2exprzd2_3982, BgL_displayzf3zf3_3968,
					BgL_maxzd2exprzd2widthz00_3967, BgL_widthz00_3966,
					BgL_maxzd2callzd2headzd2widthzd2_3981, BgL_ppzd2lambdazd2_3979,
					BgL_ppzd2definezd2_3978, BgL_ppzd2defunzd2_3977, BgL_ppzd2ifzd2_3976,
					BgL_ppzd2condzd2_3975, BgL_ppzd2casezd2_3974, BgL_ppzd2andzd2_3973,
					BgL_ppzd2letzd2_3972, BgL_envz00_3963, BgL_ppzd2dozd2_3971,
					BgL_ppzd2commentzd2_3970, BgL_ppzd2exprzd2listz00_3969,
					BgL_ppzd2exprzd2defunz00_3965, BgL_exprz00_3983, BgL_colz00_3984,
					BgL_extraz00_3985, ((bool_t) 0), BFALSE, BFALSE,
					BgL_ppzd2exprzd2_3982);
			}
		}

	}



/* &pp-do */
	obj_t BGl_z62ppzd2dozb0zz__ppz00(obj_t BgL_envz00_3986,
		obj_t BgL_exprz00_4006, obj_t BgL_colz00_4007, obj_t BgL_extraz00_4008)
	{
		{	/* Pp/pp.scm 429 */
			{	/* Pp/pp.scm 429 */
				long BgL_indentzd2generalzd2_3987;
				obj_t BgL_ppzd2exprzd2defunz00_3988;
				obj_t BgL_ppzd2commentzd2_3989;
				obj_t BgL_ppzd2beginzd2_3990;
				obj_t BgL_ppzd2letzd2_3991;
				obj_t BgL_ppzd2andzd2_3992;
				obj_t BgL_ppzd2casezd2_3993;
				obj_t BgL_ppzd2condzd2_3994;
				obj_t BgL_ppzd2ifzd2_3995;
				obj_t BgL_ppzd2defunzd2_3996;
				obj_t BgL_ppzd2definezd2_3997;
				obj_t BgL_ppzd2lambdazd2_3998;
				long BgL_maxzd2callzd2headzd2widthzd2_3999;
				obj_t BgL_widthz00_4000;
				long BgL_maxzd2exprzd2widthz00_4001;
				obj_t BgL_displayzf3zf3_4002;
				obj_t BgL_outputz00_4003;
				obj_t BgL_ppzd2exprzd2listz00_4004;
				obj_t BgL_ppzd2exprzd2_4005;

				BgL_indentzd2generalzd2_3987 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3986, (int) (((long) 0))));
				BgL_ppzd2exprzd2defunz00_3988 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3986, (int) (((long) 1))));
				BgL_ppzd2commentzd2_3989 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3986, (int) (((long) 2))));
				BgL_ppzd2beginzd2_3990 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3986, (int) (((long) 3))));
				BgL_ppzd2letzd2_3991 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3986, (int) (((long) 4))));
				BgL_ppzd2andzd2_3992 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3986, (int) (((long) 5))));
				BgL_ppzd2casezd2_3993 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3986, (int) (((long) 6))));
				BgL_ppzd2condzd2_3994 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3986, (int) (((long) 7))));
				BgL_ppzd2ifzd2_3995 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3986, (int) (((long) 8))));
				BgL_ppzd2defunzd2_3996 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3986, (int) (((long) 9))));
				BgL_ppzd2definezd2_3997 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3986, (int) (((long) 10))));
				BgL_ppzd2lambdazd2_3998 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3986, (int) (((long) 11))));
				BgL_maxzd2callzd2headzd2widthzd2_3999 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3986, (int) (((long) 12))));
				BgL_widthz00_4000 = PROCEDURE_REF(BgL_envz00_3986, (int) (((long) 13)));
				BgL_maxzd2exprzd2widthz00_4001 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_3986, (int) (((long) 14))));
				BgL_displayzf3zf3_4002 =
					PROCEDURE_REF(BgL_envz00_3986, (int) (((long) 15)));
				BgL_outputz00_4003 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3986, (int) (((long) 16))));
				BgL_ppzd2exprzd2listz00_4004 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3986, (int) (((long) 17))));
				BgL_ppzd2exprzd2_4005 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3986, (int) (((long) 18))));
				return
					BGl_z62ppzd2generalzb0zz__ppz00(BgL_indentzd2generalzd2_3987,
					BgL_outputz00_4003, BgL_ppzd2exprzd2_4005, BgL_displayzf3zf3_4002,
					BgL_maxzd2exprzd2widthz00_4001, BgL_widthz00_4000,
					BgL_maxzd2callzd2headzd2widthzd2_3999, BgL_ppzd2lambdazd2_3998,
					BgL_ppzd2definezd2_3997, BgL_ppzd2defunzd2_3996, BgL_ppzd2ifzd2_3995,
					BgL_ppzd2condzd2_3994, BgL_ppzd2casezd2_3993, BgL_ppzd2andzd2_3992,
					BgL_ppzd2letzd2_3991, BgL_ppzd2beginzd2_3990, BgL_envz00_3986,
					BgL_ppzd2commentzd2_3989, BgL_ppzd2exprzd2listz00_4004,
					BgL_ppzd2exprzd2defunz00_3988, BgL_exprz00_4006, BgL_colz00_4007,
					BgL_extraz00_4008, ((bool_t) 0), BgL_ppzd2exprzd2listz00_4004,
					BgL_ppzd2exprzd2listz00_4004, BgL_ppzd2exprzd2_4005);
			}
		}

	}



/* &pp-comment */
	obj_t BGl_z62ppzd2commentzb0zz__ppz00(obj_t BgL_envz00_4009,
		obj_t BgL_exprz00_4029, obj_t BgL_colz00_4030, obj_t BgL_extraz00_4031)
	{
		{	/* Pp/pp.scm 406 */
			{	/* Pp/pp.scm 406 */
				obj_t BgL_ppzd2exprzd2defunz00_4010;
				obj_t BgL_ppzd2exprzd2listz00_4011;
				obj_t BgL_ppzd2dozd2_4012;
				obj_t BgL_ppzd2beginzd2_4013;
				obj_t BgL_ppzd2letzd2_4014;
				obj_t BgL_ppzd2andzd2_4015;
				obj_t BgL_ppzd2casezd2_4016;
				obj_t BgL_ppzd2condzd2_4017;
				obj_t BgL_ppzd2ifzd2_4018;
				obj_t BgL_ppzd2defunzd2_4019;
				obj_t BgL_ppzd2definezd2_4020;
				obj_t BgL_ppzd2lambdazd2_4021;
				long BgL_maxzd2callzd2headzd2widthzd2_4022;
				obj_t BgL_widthz00_4023;
				long BgL_maxzd2exprzd2widthz00_4024;
				obj_t BgL_displayzf3zf3_4025;
				long BgL_indentzd2generalzd2_4026;
				obj_t BgL_outputz00_4027;
				obj_t BgL_ppzd2exprzd2_4028;

				BgL_ppzd2exprzd2defunz00_4010 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4009, (int) (((long) 0))));
				BgL_ppzd2exprzd2listz00_4011 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4009, (int) (((long) 1))));
				BgL_ppzd2dozd2_4012 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4009, (int) (((long) 2))));
				BgL_ppzd2beginzd2_4013 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4009, (int) (((long) 3))));
				BgL_ppzd2letzd2_4014 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4009, (int) (((long) 4))));
				BgL_ppzd2andzd2_4015 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4009, (int) (((long) 5))));
				BgL_ppzd2casezd2_4016 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4009, (int) (((long) 6))));
				BgL_ppzd2condzd2_4017 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4009, (int) (((long) 7))));
				BgL_ppzd2ifzd2_4018 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4009, (int) (((long) 8))));
				BgL_ppzd2defunzd2_4019 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4009, (int) (((long) 9))));
				BgL_ppzd2definezd2_4020 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4009, (int) (((long) 10))));
				BgL_ppzd2lambdazd2_4021 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4009, (int) (((long) 11))));
				BgL_maxzd2callzd2headzd2widthzd2_4022 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4009, (int) (((long) 12))));
				BgL_widthz00_4023 = PROCEDURE_REF(BgL_envz00_4009, (int) (((long) 13)));
				BgL_maxzd2exprzd2widthz00_4024 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4009, (int) (((long) 14))));
				BgL_displayzf3zf3_4025 =
					PROCEDURE_REF(BgL_envz00_4009, (int) (((long) 15)));
				BgL_indentzd2generalzd2_4026 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4009, (int) (((long) 16))));
				BgL_outputz00_4027 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4009, (int) (((long) 17))));
				BgL_ppzd2exprzd2_4028 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4009, (int) (((long) 18))));
				{
					obj_t BgL_columnz00_4142;
					obj_t BgL_stringz00_4143;

					if (PAIRP(BgL_exprz00_4029))
						{	/* Pp/pp.scm 406 */
							obj_t BgL_cdrzd2118zd2_4152;

							BgL_cdrzd2118zd2_4152 = CDR(BgL_exprz00_4029);
							if ((CAR(BgL_exprz00_4029) == BGl_symbol2281z00zz__ppz00))
								{	/* Pp/pp.scm 406 */
									if (PAIRP(BgL_cdrzd2118zd2_4152))
										{	/* Pp/pp.scm 406 */
											obj_t BgL_carzd2121zd2_4153;
											obj_t BgL_cdrzd2122zd2_4154;

											BgL_carzd2121zd2_4153 = CAR(BgL_cdrzd2118zd2_4152);
											BgL_cdrzd2122zd2_4154 = CDR(BgL_cdrzd2118zd2_4152);
											if (INTEGERP(BgL_carzd2121zd2_4153))
												{	/* Pp/pp.scm 406 */
													if (PAIRP(BgL_cdrzd2122zd2_4154))
														{	/* Pp/pp.scm 406 */
															obj_t BgL_carzd2127zd2_4155;

															BgL_carzd2127zd2_4155 =
																CAR(BgL_cdrzd2122zd2_4154);
															if (STRINGP(BgL_carzd2127zd2_4155))
																{	/* Pp/pp.scm 406 */
																	if (NULLP(CDR(BgL_cdrzd2122zd2_4154)))
																		{	/* Pp/pp.scm 406 */
																			BgL_columnz00_4142 =
																				BgL_carzd2121zd2_4153;
																			BgL_stringz00_4143 =
																				BgL_carzd2127zd2_4155;
																			{	/* Pp/pp.scm 395 */
																				obj_t BgL_addz00_4144;

																				{	/* Pp/pp.scm 395 */
																					long BgL_arg1497z00_4145;

																					BgL_arg1497z00_4145 =
																						(long)
																						CINT
																						(BGl_2zb2zb2zz__r4_numbers_6_5z00
																						(BINT(STRING_LENGTH
																								(BgL_stringz00_4143)),
																							BINT(((long) 3))));
																					BgL_addz00_4144 =
																						BGl_2zd2zd2zz__r4_numbers_6_5z00
																						(BGl_za2ppzd2widthza2zd2zz__ppz00,
																						BINT(BgL_arg1497z00_4145));
																				}
																				if (
																					((long) CINT(BgL_columnz00_4142) ==
																						((long) 0)))
																					{	/* Pp/pp.scm 396 */
																						if (
																							((long) CINT(BgL_addz00_4144) >
																								((long) 0)))
																							{	/* Pp/pp.scm 398 */
																								obj_t BgL_arg1492z00_4146;

																								BgL_arg1492z00_4146 =
																									string_append
																									(BgL_stringz00_4143,
																									make_string((long)
																										CINT(BgL_addz00_4144),
																										((unsigned char) ' ')));
																								{	/* Pp/pp.scm 133 */
																									obj_t
																										BgL__andtest_1044z00_4147;
																									BgL__andtest_1044z00_4147 =
																										PROCEDURE_L_ENTRY
																										(BgL_outputz00_4027)
																										(BgL_outputz00_4027,
																										BgL_arg1492z00_4146);
																									if (CBOOL
																										(BgL__andtest_1044z00_4147))
																										{	/* Pp/pp.scm 133 */
																											return
																												BINT(
																												(((long) 0) +
																													STRING_LENGTH
																													(BgL_arg1492z00_4146)));
																										}
																									else
																										{	/* Pp/pp.scm 133 */
																											return BFALSE;
																										}
																								}
																							}
																						else
																							{	/* Pp/pp.scm 133 */
																								obj_t BgL__andtest_1044z00_4148;

																								BgL__andtest_1044z00_4148 =
																									PROCEDURE_L_ENTRY
																									(BgL_outputz00_4027)
																									(BgL_outputz00_4027,
																									BgL_stringz00_4143);
																								if (CBOOL
																									(BgL__andtest_1044z00_4148))
																									{	/* Pp/pp.scm 133 */
																										return
																											BINT(
																											(((long) 0) +
																												STRING_LENGTH
																												(BgL_stringz00_4143)));
																									}
																								else
																									{	/* Pp/pp.scm 133 */
																										return BFALSE;
																									}
																							}
																					}
																				else
																					{	/* Pp/pp.scm 396 */
																						if (
																							((long) CINT(BgL_addz00_4144) >
																								((long) 0)))
																							{	/* Pp/pp.scm 402 */
																								obj_t BgL_arg1495z00_4149;

																								BgL_arg1495z00_4149 =
																									string_append
																									(BgL_stringz00_4143,
																									make_string((long)
																										CINT(BgL_addz00_4144),
																										((unsigned char) ' ')));
																								if (CBOOL(BgL_colz00_4030))
																									{	/* Pp/pp.scm 133 */
																										obj_t
																											BgL__andtest_1044z00_4150;
																										BgL__andtest_1044z00_4150 =
																											PROCEDURE_L_ENTRY
																											(BgL_outputz00_4027)
																											(BgL_outputz00_4027,
																											BgL_arg1495z00_4149);
																										if (CBOOL
																											(BgL__andtest_1044z00_4150))
																											{	/* Pp/pp.scm 133 */
																												return
																													ADDFX(BgL_colz00_4030,
																													BINT(STRING_LENGTH
																														(BgL_arg1495z00_4149)));
																											}
																										else
																											{	/* Pp/pp.scm 133 */
																												return BFALSE;
																											}
																									}
																								else
																									{	/* Pp/pp.scm 133 */
																										return BFALSE;
																									}
																							}
																						else
																							{	/* Pp/pp.scm 401 */
																								if (CBOOL(BgL_colz00_4030))
																									{	/* Pp/pp.scm 133 */
																										obj_t
																											BgL__andtest_1044z00_4151;
																										BgL__andtest_1044z00_4151 =
																											PROCEDURE_L_ENTRY
																											(BgL_outputz00_4027)
																											(BgL_outputz00_4027,
																											BgL_stringz00_4143);
																										if (CBOOL
																											(BgL__andtest_1044z00_4151))
																											{	/* Pp/pp.scm 133 */
																												return
																													ADDFX(BgL_colz00_4030,
																													BINT(STRING_LENGTH
																														(BgL_stringz00_4143)));
																											}
																										else
																											{	/* Pp/pp.scm 133 */
																												return BFALSE;
																											}
																									}
																								else
																									{	/* Pp/pp.scm 133 */
																										return BFALSE;
																									}
																							}
																					}
																			}
																		}
																	else
																		{	/* Pp/pp.scm 406 */
																		BgL_tagzd2111zd2_4140:
																			return
																				BGl_z62ppzd2generalzb0zz__ppz00
																				(BgL_indentzd2generalzd2_4026,
																				BgL_outputz00_4027,
																				BgL_ppzd2exprzd2_4028,
																				BgL_displayzf3zf3_4025,
																				BgL_maxzd2exprzd2widthz00_4024,
																				BgL_widthz00_4023,
																				BgL_maxzd2callzd2headzd2widthzd2_4022,
																				BgL_ppzd2lambdazd2_4021,
																				BgL_ppzd2definezd2_4020,
																				BgL_ppzd2defunzd2_4019,
																				BgL_ppzd2ifzd2_4018,
																				BgL_ppzd2condzd2_4017,
																				BgL_ppzd2casezd2_4016,
																				BgL_ppzd2andzd2_4015,
																				BgL_ppzd2letzd2_4014,
																				BgL_ppzd2beginzd2_4013,
																				BgL_ppzd2dozd2_4012, BgL_envz00_4009,
																				BgL_ppzd2exprzd2listz00_4011,
																				BgL_ppzd2exprzd2defunz00_4010,
																				BgL_exprz00_4029, BgL_colz00_4030,
																				BgL_extraz00_4031, ((bool_t) 0),
																				BgL_ppzd2exprzd2_4028, BFALSE,
																				BgL_ppzd2exprzd2_4028);
																		}
																}
															else
																{	/* Pp/pp.scm 406 */
																	goto BgL_tagzd2111zd2_4140;
																}
														}
													else
														{	/* Pp/pp.scm 406 */
															goto BgL_tagzd2111zd2_4140;
														}
												}
											else
												{	/* Pp/pp.scm 406 */
													goto BgL_tagzd2111zd2_4140;
												}
										}
									else
										{	/* Pp/pp.scm 406 */
											goto BgL_tagzd2111zd2_4140;
										}
								}
							else
								{	/* Pp/pp.scm 406 */
									goto BgL_tagzd2111zd2_4140;
								}
						}
					else
						{	/* Pp/pp.scm 406 */
							goto BgL_tagzd2111zd2_4140;
						}
				}
			}
		}

	}



/* &pp-expr-defun */
	obj_t BGl_z62ppzd2exprzd2defunz62zz__ppz00(obj_t BgL_envz00_4032,
		obj_t BgL_lz00_4052, obj_t BgL_colz00_4053, obj_t BgL_extraz00_4054)
	{
		{	/* Pp/pp.scm 369 */
			{	/* Pp/pp.scm 312 */
				long BgL_indentzd2generalzd2_4033;
				obj_t BgL_widthz00_4034;
				long BgL_maxzd2exprzd2widthz00_4035;
				obj_t BgL_displayzf3zf3_4036;
				obj_t BgL_ppzd2exprzd2listz00_4037;
				obj_t BgL_ppzd2commentzd2_4038;
				obj_t BgL_ppzd2dozd2_4039;
				obj_t BgL_ppzd2beginzd2_4040;
				obj_t BgL_ppzd2letzd2_4041;
				obj_t BgL_ppzd2andzd2_4042;
				obj_t BgL_ppzd2casezd2_4043;
				obj_t BgL_ppzd2condzd2_4044;
				obj_t BgL_ppzd2ifzd2_4045;
				obj_t BgL_ppzd2defunzd2_4046;
				obj_t BgL_ppzd2definezd2_4047;
				obj_t BgL_ppzd2lambdazd2_4048;
				long BgL_maxzd2callzd2headzd2widthzd2_4049;
				obj_t BgL_outputz00_4050;
				obj_t BgL_ppzd2exprzd2_4051;

				BgL_indentzd2generalzd2_4033 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4032, (int) (((long) 0))));
				BgL_widthz00_4034 = PROCEDURE_REF(BgL_envz00_4032, (int) (((long) 1)));
				BgL_maxzd2exprzd2widthz00_4035 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4032, (int) (((long) 2))));
				BgL_displayzf3zf3_4036 =
					PROCEDURE_REF(BgL_envz00_4032, (int) (((long) 3)));
				BgL_ppzd2exprzd2listz00_4037 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4032, (int) (((long) 4))));
				BgL_ppzd2commentzd2_4038 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4032, (int) (((long) 5))));
				BgL_ppzd2dozd2_4039 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4032, (int) (((long) 6))));
				BgL_ppzd2beginzd2_4040 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4032, (int) (((long) 7))));
				BgL_ppzd2letzd2_4041 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4032, (int) (((long) 8))));
				BgL_ppzd2andzd2_4042 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4032, (int) (((long) 9))));
				BgL_ppzd2casezd2_4043 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4032, (int) (((long) 10))));
				BgL_ppzd2condzd2_4044 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4032, (int) (((long) 11))));
				BgL_ppzd2ifzd2_4045 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4032, (int) (((long) 12))));
				BgL_ppzd2defunzd2_4046 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4032, (int) (((long) 13))));
				BgL_ppzd2definezd2_4047 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4032, (int) (((long) 14))));
				BgL_ppzd2lambdazd2_4048 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4032, (int) (((long) 15))));
				BgL_maxzd2callzd2headzd2widthzd2_4049 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4032, (int) (((long) 16))));
				BgL_outputz00_4050 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4032, (int) (((long) 17))));
				BgL_ppzd2exprzd2_4051 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4032, (int) (((long) 18))));
				{	/* Pp/pp.scm 312 */
					obj_t BgL_colz00_4156;

					if (CBOOL(BgL_colz00_4053))
						{	/* Pp/pp.scm 133 */
							obj_t BgL__andtest_1044z00_4157;

							BgL__andtest_1044z00_4157 =
								PROCEDURE_L_ENTRY(BgL_outputz00_4050) (BgL_outputz00_4050,
								BGl_string2316z00zz__ppz00);
							if (CBOOL(BgL__andtest_1044z00_4157))
								{	/* Pp/pp.scm 133 */
									BgL_colz00_4156 = ADDFX(BgL_colz00_4053, BINT(((long) 3)));
								}
							else
								{	/* Pp/pp.scm 133 */
									BgL_colz00_4156 = BFALSE;
								}
						}
					else
						{	/* Pp/pp.scm 133 */
							BgL_colz00_4156 = BFALSE;
						}
					{	/* Pp/pp.scm 312 */
						obj_t BgL_col2z00_4158;

						{	/* Pp/pp.scm 313 */
							obj_t BgL_arg1433z00_4159;

							BgL_arg1433z00_4159 = CAR(((obj_t) BgL_lz00_4052));
							BgL_col2z00_4158 =
								BGl_z62wrz62zz__ppz00(BgL_displayzf3zf3_4036,
								BgL_outputz00_4050, BgL_arg1433z00_4159, BgL_colz00_4156);
						}
						{	/* Pp/pp.scm 313 */
							obj_t BgL_col3z00_4160;

							{	/* Pp/pp.scm 314 */
								obj_t BgL_arg1432z00_4161;

								{	/* Pp/pp.scm 314 */
									obj_t BgL_pairz00_4162;

									BgL_pairz00_4162 = CDR(((obj_t) BgL_lz00_4052));
									BgL_arg1432z00_4161 = CAR(BgL_pairz00_4162);
								}
								BgL_col3z00_4160 =
									BGl_z62wrz62zz__ppz00(BgL_displayzf3zf3_4036,
									BgL_outputz00_4050, BgL_arg1432z00_4161, BgL_col2z00_4158);
							}
							{	/* Pp/pp.scm 314 */

								{	/* Pp/pp.scm 315 */
									obj_t BgL_arg1430z00_4163;
									long BgL_arg1431z00_4164;

									{	/* Pp/pp.scm 315 */
										obj_t BgL_pairz00_4165;

										BgL_pairz00_4165 = CDR(((obj_t) BgL_lz00_4052));
										BgL_arg1430z00_4163 = CDR(BgL_pairz00_4165);
									}
									BgL_arg1431z00_4164 =
										((long) CINT(BgL_col3z00_4160) + ((long) 1));
									return
										BGl_z62ppzd2downzb0zz__ppz00(BgL_outputz00_4050,
										BgL_ppzd2exprzd2_4051, BgL_displayzf3zf3_4036,
										BgL_maxzd2exprzd2widthz00_4035, BgL_widthz00_4034,
										BgL_maxzd2callzd2headzd2widthzd2_4049,
										BgL_ppzd2lambdazd2_4048, BgL_ppzd2definezd2_4047,
										BgL_ppzd2defunzd2_4046, BgL_ppzd2ifzd2_4045,
										BgL_ppzd2condzd2_4044, BgL_ppzd2casezd2_4043,
										BgL_ppzd2andzd2_4042, BgL_ppzd2letzd2_4041,
										BgL_ppzd2beginzd2_4040, BgL_ppzd2dozd2_4039,
										BgL_ppzd2commentzd2_4038, BgL_ppzd2exprzd2listz00_4037,
										BgL_envz00_4032, BgL_indentzd2generalzd2_4033,
										BgL_arg1430z00_4163, BgL_col3z00_4160,
										BINT(BgL_arg1431z00_4164), BgL_extraz00_4054,
										BgL_ppzd2exprzd2_4051);
								}
							}
						}
					}
				}
			}
		}

	}



/* &pp-expr-list */
	obj_t BGl_z62ppzd2exprzd2listz62zz__ppz00(obj_t BgL_envz00_4055,
		obj_t BgL_lz00_4075, obj_t BgL_colz00_4076, obj_t BgL_extraz00_4077)
	{
		{	/* Pp/pp.scm 366 */
			{	/* Pp/pp.scm 306 */
				long BgL_indentzd2generalzd2_4056;
				obj_t BgL_ppzd2exprzd2defunz00_4057;
				obj_t BgL_widthz00_4058;
				long BgL_maxzd2exprzd2widthz00_4059;
				obj_t BgL_displayzf3zf3_4060;
				obj_t BgL_ppzd2commentzd2_4061;
				obj_t BgL_ppzd2dozd2_4062;
				obj_t BgL_ppzd2beginzd2_4063;
				obj_t BgL_ppzd2letzd2_4064;
				obj_t BgL_ppzd2andzd2_4065;
				obj_t BgL_ppzd2casezd2_4066;
				obj_t BgL_ppzd2condzd2_4067;
				obj_t BgL_ppzd2ifzd2_4068;
				obj_t BgL_ppzd2defunzd2_4069;
				obj_t BgL_ppzd2definezd2_4070;
				obj_t BgL_ppzd2lambdazd2_4071;
				long BgL_maxzd2callzd2headzd2widthzd2_4072;
				obj_t BgL_outputz00_4073;
				obj_t BgL_ppzd2exprzd2_4074;

				BgL_indentzd2generalzd2_4056 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4055, (int) (((long) 0))));
				BgL_ppzd2exprzd2defunz00_4057 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4055, (int) (((long) 1))));
				BgL_widthz00_4058 = PROCEDURE_REF(BgL_envz00_4055, (int) (((long) 2)));
				BgL_maxzd2exprzd2widthz00_4059 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4055, (int) (((long) 3))));
				BgL_displayzf3zf3_4060 =
					PROCEDURE_REF(BgL_envz00_4055, (int) (((long) 4)));
				BgL_ppzd2commentzd2_4061 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4055, (int) (((long) 5))));
				BgL_ppzd2dozd2_4062 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4055, (int) (((long) 6))));
				BgL_ppzd2beginzd2_4063 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4055, (int) (((long) 7))));
				BgL_ppzd2letzd2_4064 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4055, (int) (((long) 8))));
				BgL_ppzd2andzd2_4065 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4055, (int) (((long) 9))));
				BgL_ppzd2casezd2_4066 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4055, (int) (((long) 10))));
				BgL_ppzd2condzd2_4067 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4055, (int) (((long) 11))));
				BgL_ppzd2ifzd2_4068 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4055, (int) (((long) 12))));
				BgL_ppzd2defunzd2_4069 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4055, (int) (((long) 13))));
				BgL_ppzd2definezd2_4070 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4055, (int) (((long) 14))));
				BgL_ppzd2lambdazd2_4071 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4055, (int) (((long) 15))));
				BgL_maxzd2callzd2headzd2widthzd2_4072 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4055, (int) (((long) 16))));
				BgL_outputz00_4073 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4055, (int) (((long) 17))));
				BgL_ppzd2exprzd2_4074 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4055, (int) (((long) 18))));
				{	/* Pp/pp.scm 306 */
					obj_t BgL_colz00_4166;

					if (CBOOL(BgL_colz00_4076))
						{	/* Pp/pp.scm 133 */
							obj_t BgL__andtest_1044z00_4167;

							BgL__andtest_1044z00_4167 =
								PROCEDURE_L_ENTRY(BgL_outputz00_4073) (BgL_outputz00_4073,
								BGl_string2278z00zz__ppz00);
							if (CBOOL(BgL__andtest_1044z00_4167))
								{	/* Pp/pp.scm 133 */
									BgL_colz00_4166 = ADDFX(BgL_colz00_4076, BINT(((long) 1)));
								}
							else
								{	/* Pp/pp.scm 133 */
									BgL_colz00_4166 = BFALSE;
								}
						}
					else
						{	/* Pp/pp.scm 133 */
							BgL_colz00_4166 = BFALSE;
						}
					return
						BGl_z62ppzd2downzb0zz__ppz00(BgL_outputz00_4073,
						BgL_ppzd2exprzd2_4074, BgL_displayzf3zf3_4060,
						BgL_maxzd2exprzd2widthz00_4059, BgL_widthz00_4058,
						BgL_maxzd2callzd2headzd2widthzd2_4072, BgL_ppzd2lambdazd2_4071,
						BgL_ppzd2definezd2_4070, BgL_ppzd2defunzd2_4069,
						BgL_ppzd2ifzd2_4068, BgL_ppzd2condzd2_4067, BgL_ppzd2casezd2_4066,
						BgL_ppzd2andzd2_4065, BgL_ppzd2letzd2_4064, BgL_ppzd2beginzd2_4063,
						BgL_ppzd2dozd2_4062, BgL_ppzd2commentzd2_4061, BgL_envz00_4055,
						BgL_ppzd2exprzd2defunz00_4057, BgL_indentzd2generalzd2_4056,
						BgL_lz00_4075, BgL_colz00_4166, BgL_colz00_4166, BgL_extraz00_4077,
						BgL_ppzd2exprzd2_4074);
				}
			}
		}

	}



/* &pp-expr */
	obj_t BGl_z62ppzd2exprzb0zz__ppz00(obj_t BgL_envz00_4078,
		obj_t BgL_exprz00_4098, obj_t BgL_colz00_4099, obj_t BgL_extraz00_4100)
	{
		{	/* Pp/pp.scm 292 */
			{	/* Pp/pp.scm 278 */
				long BgL_indentzd2generalzd2_4079;
				obj_t BgL_ppzd2exprzd2defunz00_4080;
				obj_t BgL_widthz00_4081;
				long BgL_maxzd2exprzd2widthz00_4082;
				obj_t BgL_displayzf3zf3_4083;
				obj_t BgL_ppzd2exprzd2listz00_4084;
				obj_t BgL_ppzd2commentzd2_4085;
				obj_t BgL_ppzd2dozd2_4086;
				obj_t BgL_ppzd2beginzd2_4087;
				obj_t BgL_ppzd2letzd2_4088;
				obj_t BgL_ppzd2andzd2_4089;
				obj_t BgL_ppzd2casezd2_4090;
				obj_t BgL_ppzd2condzd2_4091;
				obj_t BgL_ppzd2ifzd2_4092;
				obj_t BgL_ppzd2defunzd2_4093;
				obj_t BgL_ppzd2definezd2_4094;
				obj_t BgL_ppzd2lambdazd2_4095;
				obj_t BgL_outputz00_4096;
				long BgL_maxzd2callzd2headzd2widthzd2_4097;

				BgL_indentzd2generalzd2_4079 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4078, (int) (((long) 0))));
				BgL_ppzd2exprzd2defunz00_4080 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4078, (int) (((long) 1))));
				BgL_widthz00_4081 = PROCEDURE_REF(BgL_envz00_4078, (int) (((long) 2)));
				BgL_maxzd2exprzd2widthz00_4082 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4078, (int) (((long) 3))));
				BgL_displayzf3zf3_4083 =
					PROCEDURE_REF(BgL_envz00_4078, (int) (((long) 4)));
				BgL_ppzd2exprzd2listz00_4084 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4078, (int) (((long) 5))));
				BgL_ppzd2commentzd2_4085 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4078, (int) (((long) 6))));
				BgL_ppzd2dozd2_4086 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4078, (int) (((long) 7))));
				BgL_ppzd2beginzd2_4087 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4078, (int) (((long) 8))));
				BgL_ppzd2letzd2_4088 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4078, (int) (((long) 9))));
				BgL_ppzd2andzd2_4089 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4078, (int) (((long) 10))));
				BgL_ppzd2casezd2_4090 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4078, (int) (((long) 11))));
				BgL_ppzd2condzd2_4091 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4078, (int) (((long) 12))));
				BgL_ppzd2ifzd2_4092 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4078, (int) (((long) 13))));
				BgL_ppzd2defunzd2_4093 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4078, (int) (((long) 14))));
				BgL_ppzd2definezd2_4094 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4078, (int) (((long) 15))));
				BgL_ppzd2lambdazd2_4095 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4078, (int) (((long) 16))));
				BgL_outputz00_4096 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4078, (int) (((long) 17))));
				BgL_maxzd2callzd2headzd2widthzd2_4097 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4078, (int) (((long) 18))));
				{
					obj_t BgL_headz00_4169;

					if (BGl_z62readzd2macrozf3z43zz__ppz00(BgL_exprz00_4098))
						{	/* Pp/pp.scm 279 */
							obj_t BgL_arg1414z00_4180;
							obj_t BgL_arg1415z00_4181;

							{	/* Pp/pp.scm 122 */
								obj_t BgL_pairz00_4182;

								BgL_pairz00_4182 = CDR(((obj_t) BgL_exprz00_4098));
								BgL_arg1414z00_4180 = CAR(BgL_pairz00_4182);
							}
							{	/* Pp/pp.scm 280 */
								obj_t BgL_arg1416z00_4183;

								BgL_arg1416z00_4183 =
									BGl_z62readzd2macrozd2prefixz62zz__ppz00(BgL_exprz00_4098);
								if (CBOOL(BgL_colz00_4099))
									{	/* Pp/pp.scm 133 */
										obj_t BgL__andtest_1044z00_4184;

										BgL__andtest_1044z00_4184 =
											PROCEDURE_L_ENTRY(BgL_outputz00_4096) (BgL_outputz00_4096,
											BgL_arg1416z00_4183);
										if (CBOOL(BgL__andtest_1044z00_4184))
											{	/* Pp/pp.scm 133 */
												BgL_arg1415z00_4181 =
													ADDFX(BgL_colz00_4099,
													BINT(STRING_LENGTH(((obj_t) BgL_arg1416z00_4183))));
											}
										else
											{	/* Pp/pp.scm 133 */
												BgL_arg1415z00_4181 = BFALSE;
											}
									}
								else
									{	/* Pp/pp.scm 133 */
										BgL_arg1415z00_4181 = BFALSE;
									}
							}
							return
								BGl_z62prz62zz__ppz00(BgL_envz00_4078, BgL_outputz00_4096,
								BgL_displayzf3zf3_4083, BgL_maxzd2exprzd2widthz00_4082,
								BgL_widthz00_4081, BgL_maxzd2callzd2headzd2widthzd2_4097,
								BgL_ppzd2lambdazd2_4095, BgL_ppzd2definezd2_4094,
								BgL_ppzd2defunzd2_4093, BgL_ppzd2ifzd2_4092,
								BgL_ppzd2condzd2_4091, BgL_ppzd2casezd2_4090,
								BgL_ppzd2andzd2_4089, BgL_ppzd2letzd2_4088,
								BgL_ppzd2beginzd2_4087, BgL_ppzd2dozd2_4086,
								BgL_ppzd2commentzd2_4085, BgL_ppzd2exprzd2listz00_4084,
								BgL_ppzd2exprzd2defunz00_4080, BgL_indentzd2generalzd2_4079,
								BgL_arg1414z00_4180, BgL_arg1415z00_4181, BgL_extraz00_4100,
								BgL_envz00_4078);
						}
					else
						{	/* Pp/pp.scm 283 */
							obj_t BgL_headz00_4185;

							BgL_headz00_4185 = CAR(((obj_t) BgL_exprz00_4098));
							if (SYMBOLP(BgL_headz00_4185))
								{	/* Pp/pp.scm 285 */
									obj_t BgL_procz00_4186;

									BgL_headz00_4169 = BgL_headz00_4185;
									{	/* Pp/pp.scm 440 */
										obj_t BgL_casezd2valuezd2_4170;

										if (
											(BGl_za2ppzd2caseza2zd2zz__ppz00 ==
												BGl_symbol2268z00zz__ppz00))
											{	/* Pp/pp.scm 441 */
												obj_t BgL_arg1523z00_4171;

												{	/* Pp/pp.scm 441 */
													obj_t BgL_res2175z00_4172;

													BgL_res2175z00_4172 =
														SYMBOL_TO_STRING(BgL_headz00_4169);
													BgL_arg1523z00_4171 = BgL_res2175z00_4172;
												}
												BgL_casezd2valuezd2_4170 =
													bstring_to_symbol(BgL_arg1523z00_4171);
											}
										else
											{	/* Pp/pp.scm 440 */
												BgL_casezd2valuezd2_4170 = BgL_headz00_4169;
											}
										if (
											(BgL_casezd2valuezd2_4170 == BGl_symbol2317z00zz__ppz00))
											{	/* Pp/pp.scm 440 */
												BgL_procz00_4186 = BgL_ppzd2lambdazd2_4095;
											}
										else
											{	/* Pp/pp.scm 440 */
												bool_t BgL_test2638z00_6840;

												{	/* Pp/pp.scm 440 */
													bool_t BgL__ortest_1054z00_4173;

													BgL__ortest_1054z00_4173 =
														(BgL_casezd2valuezd2_4170 ==
														BGl_symbol2319z00zz__ppz00);
													if (BgL__ortest_1054z00_4173)
														{	/* Pp/pp.scm 440 */
															BgL_test2638z00_6840 = BgL__ortest_1054z00_4173;
														}
													else
														{	/* Pp/pp.scm 440 */
															BgL_test2638z00_6840 =
																(BgL_casezd2valuezd2_4170 ==
																BGl_symbol2321z00zz__ppz00);
														}
												}
												if (BgL_test2638z00_6840)
													{	/* Pp/pp.scm 440 */
														BgL_procz00_4186 = BgL_ppzd2letzd2_4088;
													}
												else
													{	/* Pp/pp.scm 440 */
														bool_t BgL_test2640z00_6844;

														{	/* Pp/pp.scm 440 */
															bool_t BgL__ortest_1055z00_4174;

															BgL__ortest_1055z00_4174 =
																(BgL_casezd2valuezd2_4170 ==
																BGl_symbol2323z00zz__ppz00);
															if (BgL__ortest_1055z00_4174)
																{	/* Pp/pp.scm 440 */
																	BgL_test2640z00_6844 =
																		BgL__ortest_1055z00_4174;
																}
															else
																{	/* Pp/pp.scm 440 */
																	bool_t BgL__ortest_1056z00_4175;

																	BgL__ortest_1056z00_4175 =
																		(BgL_casezd2valuezd2_4170 ==
																		BGl_symbol2325z00zz__ppz00);
																	if (BgL__ortest_1056z00_4175)
																		{	/* Pp/pp.scm 440 */
																			BgL_test2640z00_6844 =
																				BgL__ortest_1056z00_4175;
																		}
																	else
																		{	/* Pp/pp.scm 440 */
																			bool_t BgL__ortest_1057z00_4176;

																			BgL__ortest_1057z00_4176 =
																				(BgL_casezd2valuezd2_4170 ==
																				BGl_symbol2327z00zz__ppz00);
																			if (BgL__ortest_1057z00_4176)
																				{	/* Pp/pp.scm 440 */
																					BgL_test2640z00_6844 =
																						BgL__ortest_1057z00_4176;
																				}
																			else
																				{	/* Pp/pp.scm 440 */
																					BgL_test2640z00_6844 =
																						(BgL_casezd2valuezd2_4170 ==
																						BGl_symbol2329z00zz__ppz00);
																				}
																		}
																}
														}
														if (BgL_test2640z00_6844)
															{	/* Pp/pp.scm 440 */
																BgL_procz00_4186 = BgL_ppzd2definezd2_4094;
															}
														else
															{	/* Pp/pp.scm 440 */
																if (
																	(BgL_casezd2valuezd2_4170 ==
																		BGl_symbol2331z00zz__ppz00))
																	{	/* Pp/pp.scm 440 */
																		BgL_procz00_4186 = BgL_ppzd2definezd2_4094;
																	}
																else
																	{	/* Pp/pp.scm 440 */
																		bool_t BgL_test2645z00_6854;

																		{	/* Pp/pp.scm 440 */
																			bool_t BgL__ortest_1058z00_4177;

																			BgL__ortest_1058z00_4177 =
																				(BgL_casezd2valuezd2_4170 ==
																				BGl_symbol2333z00zz__ppz00);
																			if (BgL__ortest_1058z00_4177)
																				{	/* Pp/pp.scm 440 */
																					BgL_test2645z00_6854 =
																						BgL__ortest_1058z00_4177;
																				}
																			else
																				{	/* Pp/pp.scm 440 */
																					BgL_test2645z00_6854 =
																						(BgL_casezd2valuezd2_4170 ==
																						BGl_symbol2335z00zz__ppz00);
																				}
																		}
																		if (BgL_test2645z00_6854)
																			{	/* Pp/pp.scm 440 */
																				BgL_procz00_4186 =
																					BgL_ppzd2defunzd2_4093;
																			}
																		else
																			{	/* Pp/pp.scm 440 */
																				bool_t BgL_test2647z00_6858;

																				{	/* Pp/pp.scm 440 */
																					bool_t BgL__ortest_1059z00_4178;

																					BgL__ortest_1059z00_4178 =
																						(BgL_casezd2valuezd2_4170 ==
																						BGl_symbol2337z00zz__ppz00);
																					if (BgL__ortest_1059z00_4178)
																						{	/* Pp/pp.scm 440 */
																							BgL_test2647z00_6858 =
																								BgL__ortest_1059z00_4178;
																						}
																					else
																						{	/* Pp/pp.scm 440 */
																							BgL_test2647z00_6858 =
																								(BgL_casezd2valuezd2_4170 ==
																								BGl_symbol2339z00zz__ppz00);
																						}
																				}
																				if (BgL_test2647z00_6858)
																					{	/* Pp/pp.scm 440 */
																						BgL_procz00_4186 =
																							BgL_ppzd2ifzd2_4092;
																					}
																				else
																					{	/* Pp/pp.scm 440 */
																						if (
																							(BgL_casezd2valuezd2_4170 ==
																								BGl_symbol2341z00zz__ppz00))
																							{	/* Pp/pp.scm 440 */
																								BgL_procz00_4186 =
																									BgL_ppzd2condzd2_4091;
																							}
																						else
																							{	/* Pp/pp.scm 440 */
																								if (
																									(BgL_casezd2valuezd2_4170 ==
																										BGl_symbol2343z00zz__ppz00))
																									{	/* Pp/pp.scm 440 */
																										BgL_procz00_4186 =
																											BgL_ppzd2casezd2_4090;
																									}
																								else
																									{	/* Pp/pp.scm 440 */
																										bool_t BgL_test2651z00_6866;

																										{	/* Pp/pp.scm 440 */
																											bool_t
																												BgL__ortest_1060z00_4179;
																											BgL__ortest_1060z00_4179 =
																												(BgL_casezd2valuezd2_4170
																												==
																												BGl_symbol2345z00zz__ppz00);
																											if (BgL__ortest_1060z00_4179)
																												{	/* Pp/pp.scm 440 */
																													BgL_test2651z00_6866 =
																														BgL__ortest_1060z00_4179;
																												}
																											else
																												{	/* Pp/pp.scm 440 */
																													BgL_test2651z00_6866 =
																														(BgL_casezd2valuezd2_4170
																														==
																														BGl_symbol2347z00zz__ppz00);
																												}
																										}
																										if (BgL_test2651z00_6866)
																											{	/* Pp/pp.scm 440 */
																												BgL_procz00_4186 =
																													BgL_ppzd2andzd2_4089;
																											}
																										else
																											{	/* Pp/pp.scm 440 */
																												if (
																													(BgL_casezd2valuezd2_4170
																														==
																														BGl_symbol2349z00zz__ppz00))
																													{	/* Pp/pp.scm 440 */
																														BgL_procz00_4186 =
																															BgL_ppzd2letzd2_4088;
																													}
																												else
																													{	/* Pp/pp.scm 440 */
																														if (
																															(BgL_casezd2valuezd2_4170
																																==
																																BGl_symbol2351z00zz__ppz00))
																															{	/* Pp/pp.scm 440 */
																																BgL_procz00_4186
																																	=
																																	BgL_ppzd2beginzd2_4087;
																															}
																														else
																															{	/* Pp/pp.scm 440 */
																																if (
																																	(BgL_casezd2valuezd2_4170
																																		==
																																		BGl_symbol2353z00zz__ppz00))
																																	{	/* Pp/pp.scm 440 */
																																		BgL_procz00_4186
																																			=
																																			BgL_ppzd2dozd2_4086;
																																	}
																																else
																																	{	/* Pp/pp.scm 440 */
																																		if (
																																			(BgL_casezd2valuezd2_4170
																																				==
																																				BGl_symbol2281z00zz__ppz00))
																																			{	/* Pp/pp.scm 440 */
																																				BgL_procz00_4186
																																					=
																																					BgL_ppzd2commentzd2_4085;
																																			}
																																		else
																																			{	/* Pp/pp.scm 440 */
																																				BgL_procz00_4186
																																					=
																																					BFALSE;
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
									}
									if (CBOOL(BgL_procz00_4186))
										{	/* Pp/pp.scm 286 */
											return
												PROCEDURE_ENTRY(BgL_procz00_4186) (BgL_procz00_4186,
												BgL_exprz00_4098, BgL_colz00_4099, BgL_extraz00_4100,
												BEOA);
										}
									else
										{	/* Pp/pp.scm 288 */
											bool_t BgL_test2658z00_6886;

											{	/* Pp/pp.scm 288 */
												long BgL_arg1421z00_4187;

												{	/* Pp/pp.scm 288 */
													obj_t BgL_arg1422z00_4188;

													{	/* Pp/pp.scm 288 */
														obj_t BgL_res2081z00_4189;

														BgL_res2081z00_4189 =
															SYMBOL_TO_STRING(BgL_headz00_4185);
														BgL_arg1422z00_4188 = BgL_res2081z00_4189;
													}
													BgL_arg1421z00_4187 =
														STRING_LENGTH(BgL_arg1422z00_4188);
												}
												BgL_test2658z00_6886 =
													(BgL_arg1421z00_4187 >
													BgL_maxzd2callzd2headzd2widthzd2_4097);
											}
											if (BgL_test2658z00_6886)
												{	/* Pp/pp.scm 288 */
													return
														BGl_z62ppzd2generalzb0zz__ppz00
														(BgL_indentzd2generalzd2_4079, BgL_outputz00_4096,
														BgL_envz00_4078, BgL_displayzf3zf3_4083,
														BgL_maxzd2exprzd2widthz00_4082, BgL_widthz00_4081,
														BgL_maxzd2callzd2headzd2widthzd2_4097,
														BgL_ppzd2lambdazd2_4095, BgL_ppzd2definezd2_4094,
														BgL_ppzd2defunzd2_4093, BgL_ppzd2ifzd2_4092,
														BgL_ppzd2condzd2_4091, BgL_ppzd2casezd2_4090,
														BgL_ppzd2andzd2_4089, BgL_ppzd2letzd2_4088,
														BgL_ppzd2beginzd2_4087, BgL_ppzd2dozd2_4086,
														BgL_ppzd2commentzd2_4085,
														BgL_ppzd2exprzd2listz00_4084,
														BgL_ppzd2exprzd2defunz00_4080, BgL_exprz00_4098,
														BgL_colz00_4099, BgL_extraz00_4100, ((bool_t) 0),
														BFALSE, BFALSE, BgL_envz00_4078);
												}
											else
												{	/* Pp/pp.scm 298 */
													obj_t BgL_colza2za2_4190;

													{	/* Pp/pp.scm 298 */
														obj_t BgL_arg1426z00_4191;
														obj_t BgL_arg1427z00_4192;

														BgL_arg1426z00_4191 =
															CAR(((obj_t) BgL_exprz00_4098));
														if (CBOOL(BgL_colz00_4099))
															{	/* Pp/pp.scm 133 */
																obj_t BgL__andtest_1044z00_4193;

																BgL__andtest_1044z00_4193 =
																	PROCEDURE_L_ENTRY(BgL_outputz00_4096)
																	(BgL_outputz00_4096,
																	BGl_string2278z00zz__ppz00);
																if (CBOOL(BgL__andtest_1044z00_4193))
																	{	/* Pp/pp.scm 133 */
																		BgL_arg1427z00_4192 =
																			ADDFX(BgL_colz00_4099, BINT(((long) 1)));
																	}
																else
																	{	/* Pp/pp.scm 133 */
																		BgL_arg1427z00_4192 = BFALSE;
																	}
															}
														else
															{	/* Pp/pp.scm 133 */
																BgL_arg1427z00_4192 = BFALSE;
															}
														BgL_colza2za2_4190 =
															BGl_z62wrz62zz__ppz00(BgL_displayzf3zf3_4083,
															BgL_outputz00_4096, BgL_arg1426z00_4191,
															BgL_arg1427z00_4192);
													}
													if (CBOOL(BgL_colz00_4099))
														{	/* Pp/pp.scm 300 */
															obj_t BgL_arg1424z00_4194;
															long BgL_arg1425z00_4195;

															BgL_arg1424z00_4194 =
																CDR(((obj_t) BgL_exprz00_4098));
															BgL_arg1425z00_4195 =
																((long) CINT(BgL_colza2za2_4190) + ((long) 1));
															return
																BGl_z62ppzd2downzb0zz__ppz00(BgL_outputz00_4096,
																BgL_envz00_4078, BgL_displayzf3zf3_4083,
																BgL_maxzd2exprzd2widthz00_4082,
																BgL_widthz00_4081,
																BgL_maxzd2callzd2headzd2widthzd2_4097,
																BgL_ppzd2lambdazd2_4095,
																BgL_ppzd2definezd2_4094, BgL_ppzd2defunzd2_4093,
																BgL_ppzd2ifzd2_4092, BgL_ppzd2condzd2_4091,
																BgL_ppzd2casezd2_4090, BgL_ppzd2andzd2_4089,
																BgL_ppzd2letzd2_4088, BgL_ppzd2beginzd2_4087,
																BgL_ppzd2dozd2_4086, BgL_ppzd2commentzd2_4085,
																BgL_ppzd2exprzd2listz00_4084,
																BgL_ppzd2exprzd2defunz00_4080,
																BgL_indentzd2generalzd2_4079,
																BgL_arg1424z00_4194, BgL_colza2za2_4190,
																BINT(BgL_arg1425z00_4195), BgL_extraz00_4100,
																BgL_envz00_4078);
														}
													else
														{	/* Pp/pp.scm 299 */
															return BFALSE;
														}
												}
										}
								}
							else
								{	/* Pp/pp.scm 306 */
									obj_t BgL_colz00_4196;

									if (CBOOL(BgL_colz00_4099))
										{	/* Pp/pp.scm 133 */
											obj_t BgL__andtest_1044z00_4197;

											BgL__andtest_1044z00_4197 =
												PROCEDURE_L_ENTRY(BgL_outputz00_4096)
												(BgL_outputz00_4096, BGl_string2278z00zz__ppz00);
											if (CBOOL(BgL__andtest_1044z00_4197))
												{	/* Pp/pp.scm 133 */
													BgL_colz00_4196 =
														ADDFX(BgL_colz00_4099, BINT(((long) 1)));
												}
											else
												{	/* Pp/pp.scm 133 */
													BgL_colz00_4196 = BFALSE;
												}
										}
									else
										{	/* Pp/pp.scm 133 */
											BgL_colz00_4196 = BFALSE;
										}
									return
										BGl_z62ppzd2downzb0zz__ppz00(BgL_outputz00_4096,
										BgL_envz00_4078, BgL_displayzf3zf3_4083,
										BgL_maxzd2exprzd2widthz00_4082, BgL_widthz00_4081,
										BgL_maxzd2callzd2headzd2widthzd2_4097,
										BgL_ppzd2lambdazd2_4095, BgL_ppzd2definezd2_4094,
										BgL_ppzd2defunzd2_4093, BgL_ppzd2ifzd2_4092,
										BgL_ppzd2condzd2_4091, BgL_ppzd2casezd2_4090,
										BgL_ppzd2andzd2_4089, BgL_ppzd2letzd2_4088,
										BgL_ppzd2beginzd2_4087, BgL_ppzd2dozd2_4086,
										BgL_ppzd2commentzd2_4085, BgL_ppzd2exprzd2listz00_4084,
										BgL_ppzd2exprzd2defunz00_4080, BgL_indentzd2generalzd2_4079,
										BgL_exprz00_4098, BgL_colz00_4196, BgL_colz00_4196,
										BgL_extraz00_4100, BgL_envz00_4078);
								}
						}
				}
			}
		}

	}



/* &<@anonymous:1400> */
	obj_t BGl_z62zc3z04anonymousza31400ze3ze5zz__ppz00(obj_t BgL_envz00_4101,
		obj_t BgL_strz00_4104)
	{
		{	/* Pp/pp.scm 264 */
			{	/* Pp/pp.scm 265 */
				obj_t BgL_resultz00_4102;
				obj_t BgL_leftz00_4103;

				BgL_resultz00_4102 =
					PROCEDURE_L_REF(BgL_envz00_4101, (int) (((long) 0)));
				BgL_leftz00_4103 = PROCEDURE_L_REF(BgL_envz00_4101, (int) (((long) 1)));
				{	/* Pp/pp.scm 265 */
					bool_t BgL_tmpz00_6927;

					{	/* Pp/pp.scm 265 */
						obj_t BgL_auxz00_4198;

						BgL_auxz00_4198 =
							MAKE_YOUNG_PAIR(BgL_strz00_4104, CELL_REF(BgL_resultz00_4102));
						CELL_SET(BgL_resultz00_4102, BgL_auxz00_4198);
					}
					{	/* Pp/pp.scm 266 */
						obj_t BgL_auxz00_4199;

						BgL_auxz00_4199 =
							SUBFX(CELL_REF(BgL_leftz00_4103),
							BINT(STRING_LENGTH(((obj_t) BgL_strz00_4104))));
						CELL_SET(BgL_leftz00_4103, BgL_auxz00_4199);
					}
					BgL_tmpz00_6927 =
						((long) CINT(CELL_REF(BgL_leftz00_4103)) > ((long) 0));
					return BBOOL(BgL_tmpz00_6927);
				}
			}
		}

	}



/* &<@anonymous:1334> */
	obj_t BGl_z62zc3z04anonymousza31334ze3ze5zz__ppz00(obj_t BgL_envz00_4107)
	{
		{	/* Pp/pp.scm 205 */
			{	/* Pp/pp.scm 205 */
				obj_t BgL_objz00_4108;

				BgL_objz00_4108 = PROCEDURE_REF(BgL_envz00_4107, (int) (((long) 0)));
				{	/* Pp/pp.scm 205 */
					obj_t BgL_arg1335z00_4200;

					{	/* Pp/pp.scm 205 */
						obj_t BgL_res1996z00_4201;

						{	/* Pp/pp.scm 205 */
							obj_t BgL_tmpz00_6938;

							BgL_tmpz00_6938 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1996z00_4201 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6938);
						}
						BgL_arg1335z00_4200 = BgL_res1996z00_4201;
					}
					return bgl_display_obj(BgL_objz00_4108, BgL_arg1335z00_4200);
				}
			}
		}

	}



/* reverse-string-append */
	obj_t BGl_reversezd2stringzd2appendz00zz__ppz00(obj_t BgL_lz00_10)
	{
		{	/* Pp/pp.scm 466 */
			return BGl_revzd2stringzd2appendze70ze7zz__ppz00(BgL_lz00_10, ((long) 0));
		}

	}



/* rev-string-append~0 */
	obj_t BGl_revzd2stringzd2appendze70ze7zz__ppz00(obj_t BgL_lz00_1754,
		long BgL_iz00_1755)
	{
		{	/* Pp/pp.scm 479 */
			if (PAIRP(BgL_lz00_1754))
				{	/* Pp/pp.scm 470 */
					obj_t BgL_strz00_1758;

					BgL_strz00_1758 = CAR(BgL_lz00_1754);
					{	/* Pp/pp.scm 470 */
						long BgL_lenz00_1759;

						BgL_lenz00_1759 = STRING_LENGTH(((obj_t) BgL_strz00_1758));
						{	/* Pp/pp.scm 471 */
							obj_t BgL_resultz00_1760;

							BgL_resultz00_1760 =
								BGl_revzd2stringzd2appendze70ze7zz__ppz00(CDR(BgL_lz00_1754),
								(BgL_iz00_1755 + BgL_lenz00_1759));
							{	/* Pp/pp.scm 472 */

								{	/* Pp/pp.scm 473 */
									long BgL_g1061z00_1761;

									BgL_g1061z00_1761 =
										(
										(STRING_LENGTH(BgL_resultz00_1760) - BgL_iz00_1755) -
										BgL_lenz00_1759);
									{
										long BgL_jz00_3347;
										long BgL_kz00_3348;

										BgL_jz00_3347 = ((long) 0);
										BgL_kz00_3348 = BgL_g1061z00_1761;
									BgL_loopz00_3346:
										if ((BgL_jz00_3347 < BgL_lenz00_1759))
											{	/* Pp/pp.scm 474 */
												{	/* Pp/pp.scm 476 */
													unsigned char BgL_arg1528z00_3354;

													BgL_arg1528z00_3354 =
														STRING_REF(
														((obj_t) BgL_strz00_1758), BgL_jz00_3347);
													STRING_SET(BgL_resultz00_1760, BgL_kz00_3348,
														BgL_arg1528z00_3354);
												}
												{
													long BgL_kz00_6961;
													long BgL_jz00_6959;

													BgL_jz00_6959 = (BgL_jz00_3347 + ((long) 1));
													BgL_kz00_6961 = (BgL_kz00_3348 + ((long) 1));
													BgL_kz00_3348 = BgL_kz00_6961;
													BgL_jz00_3347 = BgL_jz00_6959;
													goto BgL_loopz00_3346;
												}
											}
										else
											{	/* Pp/pp.scm 474 */
												return BgL_resultz00_1760;
											}
									}
								}
							}
						}
					}
				}
			else
				{	/* Ieee/string.scm 168 */

					return make_string(BgL_iz00_1755, ((unsigned char) ' '));
		}}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__ppz00()
	{
		{	/* Pp/pp.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__ppz00()
	{
		{	/* Pp/pp.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__ppz00()
	{
		{	/* Pp/pp.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__ppz00()
	{
		{	/* Pp/pp.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2355z00zz__ppz00));
			return
				BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					86988972), BSTRING_TO_STRING(BGl_string2355z00zz__ppz00));
		}

	}

#ifdef __cplusplus
}
#endif
