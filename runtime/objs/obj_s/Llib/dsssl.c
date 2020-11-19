/*===========================================================================*/
/*   (Llib/dsssl.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/dsssl.scm -indent -o objs/obj_s/Llib/dsssl.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__dssslz00 = BUNSPEC;
static obj_t BGl_z62dssslzd2getzd2keyzd2argzb0zz__dssslz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62restzd2statezb0zz__dssslz00(obj_t, obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00(obj_t, obj_t);
static obj_t BGl_z62dssslzd2namedzd2constantzf3z91zz__dssslz00(obj_t, obj_t);
static obj_t BGl_genericzd2initzd2zz__dssslz00();
extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_objectzd2initzd2zz__dssslz00();
extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62dssslzd2checkzd2keyzd2argsz12za2zz__dssslz00(obj_t, obj_t, obj_t);
extern obj_t bgl_reverse_bang(obj_t);
static obj_t BGl_z62dssslzd2formalszd2ze3schemezd2formalsz53zz__dssslz00(obj_t, obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_list2402z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_methodzd2initzd2zz__dssslz00();
extern obj_t BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_idzd2sanszd2typez00zz__dssslz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00(obj_t, obj_t);
static obj_t BGl_list2437z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_list2441z00zz__dssslz00 = BUNSPEC;
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_list2376z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_list2458z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_list2379z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_list2462z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_list2397z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_z62dssslzd2formalszd2ze3schemezd2typedzd2formalsz81zz__dssslz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_list2482z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_list2486z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_list2488z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_z62optionalzd2statezb0zz__dssslz00(obj_t, obj_t, obj_t);
static obj_t BGl_list2491z00zz__dssslz00 = BUNSPEC;
extern obj_t BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_dssslzd2formalszd2ze3schemezd2formalsz31zz__dssslz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__dssslz00();
BGL_EXPORTED_DECL obj_t BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(obj_t, obj_t, obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__dssslz00();
static obj_t BGl_importedzd2moduleszd2initz00zz__dssslz00();
static obj_t BGl_z62dssslzd2getzd2keyzd2restzd2argz62zz__dssslz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2403z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2407z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2409z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_z62nozd2restzd2keyzd2statezb0zz__dssslz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2411z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2414z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2416z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2419z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2421z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2423z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2426z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2428z00zz__dssslz00 = BUNSPEC;
extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalsze3zz__dssslz00(obj_t, obj_t, bool_t);
static obj_t BGl_symbol2430z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2432z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2438z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_optionalzd2argsze70z35zz__dssslz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, int, int);
static obj_t BGl_symbol2444z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_loopze70ze7zz__dssslz00(bool_t, obj_t, obj_t, obj_t, bool_t);
static obj_t BGl_loopze71ze7zz__dssslz00(obj_t, obj_t);
static obj_t BGl_symbol2446z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2448z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2450z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2452z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2454z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_z62keyzd2statezb0zz__dssslz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t);
static obj_t BGl_z62makezd2dssslzd2functionzd2preludezb0zz__dssslz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol2380z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2382z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2384z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2386z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2388z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2390z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2398z00zz__dssslz00 = BUNSPEC;
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_dssslzd2formalszd2ze3schemezd2formalszd2envze3zz__dssslz00, BgL_bgl_za762dssslza7d2forma2495z00, BGl_z62dssslzd2formalszd2ze3schemezd2formalsz53zz__dssslz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dssslzd2getzd2keyzd2argzd2envz00zz__dssslz00, BgL_bgl_za762dssslza7d2getza7d2496za7, BGl_z62dssslzd2getzd2keyzd2argzb0zz__dssslz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dssslzd2namedzd2constantzf3zd2envz21zz__dssslz00, BgL_bgl_za762dssslza7d2named2497z00, BGl_z62dssslzd2namedzd2constantzf3z91zz__dssslz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2400z00zz__dssslz00, BgL_bgl_string2400za700za7za7_2498za7, "Illegal formal list.2", 21 );
DEFINE_STRING( BGl_string2401z00zz__dssslz00, BgL_bgl_string2401za700za7za7_2499za7, "loop:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string2404z00zz__dssslz00, BgL_bgl_string2404za700za7za7_2500za7, "arg1281", 7 );
DEFINE_STRING( BGl_string2405z00zz__dssslz00, BgL_bgl_string2405za700za7za7_2501za7, "&make-dsssl-function-prelude", 28 );
DEFINE_STRING( BGl_string2406z00zz__dssslz00, BgL_bgl_string2406za700za7za7_2502za7, "procedure", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dssslzd2getzd2keyzd2restzd2argzd2envzd2zz__dssslz00, BgL_bgl_za762dssslza7d2getza7d2503za7, BGl_z62dssslzd2getzd2keyzd2restzd2argz62zz__dssslz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2408z00zz__dssslz00, BgL_bgl_string2408za700za7za7_2504za7, "quote", 5 );
DEFINE_STRING( BGl_string2410z00zz__dssslz00, BgL_bgl_string2410za700za7za7_2505za7, "dsssl-get-key-rest-arg", 22 );
DEFINE_STRING( BGl_string2412z00zz__dssslz00, BgL_bgl_string2412za700za7za7_2506za7, "dsssl-get-key-arg", 17 );
DEFINE_STRING( BGl_string2413z00zz__dssslz00, BgL_bgl_string2413za700za7za7_2507za7, "one-key-arg", 11 );
DEFINE_STRING( BGl_string2415z00zz__dssslz00, BgL_bgl_string2415za700za7za7_2508za7, "null?", 5 );
DEFINE_STRING( BGl_string2417z00zz__dssslz00, BgL_bgl_string2417za700za7za7_2509za7, "v", 1 );
DEFINE_STRING( BGl_string2418z00zz__dssslz00, BgL_bgl_string2418za700za7za7_2510za7, "~a ", 3 );
DEFINE_STRING( BGl_string2420z00zz__dssslz00, BgL_bgl_string2420za700za7za7_2511za7, "format", 6 );
DEFINE_STRING( BGl_string2422z00zz__dssslz00, BgL_bgl_string2422za700za7za7_2512za7, "lambda", 6 );
DEFINE_STRING( BGl_string2424z00zz__dssslz00, BgL_bgl_string2424za700za7za7_2513za7, "map", 3 );
DEFINE_STRING( BGl_string2425z00zz__dssslz00, BgL_bgl_string2425za700za7za7_2514za7, "Illegal extra key arguments: ", 29 );
DEFINE_STRING( BGl_string2427z00zz__dssslz00, BgL_bgl_string2427za700za7za7_2515za7, "string-append", 13 );
DEFINE_STRING( BGl_string2429z00zz__dssslz00, BgL_bgl_string2429za700za7za7_2516za7, "apply", 5 );
DEFINE_STRING( BGl_string2431z00zz__dssslz00, BgL_bgl_string2431za700za7za7_2517za7, "error", 5 );
DEFINE_STRING( BGl_string2433z00zz__dssslz00, BgL_bgl_string2433za700za7za7_2518za7, "if", 2 );
DEFINE_STRING( BGl_string2434z00zz__dssslz00, BgL_bgl_string2434za700za7za7_2519za7, "&key-state", 10 );
DEFINE_STRING( BGl_string2435z00zz__dssslz00, BgL_bgl_string2435za700za7za7_2520za7, "Illegal DSSSL formal list (#!rest)", 34 );
DEFINE_STRING( BGl_string2436z00zz__dssslz00, BgL_bgl_string2436za700za7za7_2521za7, "&key-state:Wrong number of arguments", 36 );
DEFINE_STRING( BGl_string2439z00zz__dssslz00, BgL_bgl_string2439za700za7za7_2522za7, "formals", 7 );
DEFINE_STRING( BGl_string2440z00zz__dssslz00, BgL_bgl_string2440za700za7za7_2523za7, "Illegal DSSSL formal list (#!key)", 33 );
DEFINE_STRING( BGl_string2442z00zz__dssslz00, BgL_bgl_string2442za700za7za7_2524za7, "loop", 4 );
DEFINE_STRING( BGl_string2443z00zz__dssslz00, BgL_bgl_string2443za700za7za7_2525za7, "symbol", 6 );
DEFINE_STRING( BGl_string2445z00zz__dssslz00, BgL_bgl_string2445za700za7za7_2526za7, "tmp", 3 );
DEFINE_STRING( BGl_string2447z00zz__dssslz00, BgL_bgl_string2447za700za7za7_2527za7, "car", 3 );
DEFINE_STRING( BGl_string2449z00zz__dssslz00, BgL_bgl_string2449za700za7za7_2528za7, "memq", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2dssslzd2functionzd2preludezd2envz00zz__dssslz00, BgL_bgl_za762makeza7d2dssslza72529za7, BGl_z62makezd2dssslzd2functionzd2preludezb0zz__dssslz00, 0L, BUNSPEC, 4 );
DEFINE_STRING( BGl_string2451z00zz__dssslz00, BgL_bgl_string2451za700za7za7_2530za7, "cdr", 3 );
DEFINE_STRING( BGl_string2453z00zz__dssslz00, BgL_bgl_string2453za700za7za7_2531za7, "set!", 4 );
DEFINE_STRING( BGl_string2455z00zz__dssslz00, BgL_bgl_string2455za700za7za7_2532za7, "begin", 5 );
DEFINE_STRING( BGl_string2456z00zz__dssslz00, BgL_bgl_string2456za700za7za7_2533za7, "Illegal DSSSL formal list (#!optional)", 38 );
DEFINE_STRING( BGl_string2457z00zz__dssslz00, BgL_bgl_string2457za700za7za7_2534za7, "optional-args~0:Wrong number of arguments", 41 );
DEFINE_STRING( BGl_string2377z00zz__dssslz00, BgL_bgl_string2377za700za7za7_2535za7, "Illegal formal list.1", 21 );
DEFINE_STRING( BGl_string2459z00zz__dssslz00, BgL_bgl_string2459za700za7za7_2536za7, "<@anonymous:1426>", 17 );
DEFINE_STRING( BGl_string2378z00zz__dssslz00, BgL_bgl_string2378za700za7za7_2537za7, "scheme-state:Wrong number of arguments", 38 );
DEFINE_STRING( BGl_string2460z00zz__dssslz00, BgL_bgl_string2460za700za7za7_2538za7, "Illegal #!keys parameters", 25 );
DEFINE_STRING( BGl_string2461z00zz__dssslz00, BgL_bgl_string2461za700za7za7_2539za7, "<@anonymous:1426>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string2381z00zz__dssslz00, BgL_bgl_string2381za700za7za7_2540za7, "funcall", 7 );
DEFINE_STRING( BGl_string2463z00zz__dssslz00, BgL_bgl_string2463za700za7za7_2541za7, "list", 4 );
DEFINE_STRING( BGl_string2464z00zz__dssslz00, BgL_bgl_string2464za700za7za7_2542za7, "rest-key-state:Wrong number of arguments", 40 );
DEFINE_STRING( BGl_string2383z00zz__dssslz00, BgL_bgl_string2383za700za7za7_2543za7, "err", 3 );
DEFINE_STRING( BGl_string2465z00zz__dssslz00, BgL_bgl_string2465za700za7za7_2544za7, "exit-rest-state:Wrong number of arguments", 41 );
DEFINE_STRING( BGl_string2466z00zz__dssslz00, BgL_bgl_string2466za700za7za7_2545za7, "rest-state:Wrong number of arguments", 36 );
DEFINE_STRING( BGl_string2385z00zz__dssslz00, BgL_bgl_string2385za700za7za7_2546za7, "where", 5 );
DEFINE_STRING( BGl_string2467z00zz__dssslz00, BgL_bgl_string2467za700za7za7_2547za7, "no-rest-key-state:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string2468z00zz__dssslz00, BgL_bgl_string2468za700za7za7_2548za7, "dsssl formal parsing", 20 );
DEFINE_STRING( BGl_string2387z00zz__dssslz00, BgL_bgl_string2387za700za7za7_2549za7, "arg1201", 7 );
DEFINE_STRING( BGl_string2469z00zz__dssslz00, BgL_bgl_string2469za700za7za7_2550za7, "Unexpected #!keys parameters", 28 );
DEFINE_STRING( BGl_string2389z00zz__dssslz00, BgL_bgl_string2389za700za7za7_2551za7, "dsssl", 5 );
DEFINE_STRING( BGl_string2470z00zz__dssslz00, BgL_bgl_string2470za700za7za7_2552za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string2471z00zz__dssslz00, BgL_bgl_string2471za700za7za7_2553za7, "Keyword argument misses value", 29 );
DEFINE_STRING( BGl_string2472z00zz__dssslz00, BgL_bgl_string2472za700za7za7_2554za7, "Illegal keyword actual value", 28 );
DEFINE_STRING( BGl_string2391z00zz__dssslz00, BgL_bgl_string2391za700za7za7_2555za7, "let", 3 );
DEFINE_STRING( BGl_string2473z00zz__dssslz00, BgL_bgl_string2473za700za7za7_2556za7, "Illegal DSSSL arguments", 23 );
DEFINE_STRING( BGl_string2392z00zz__dssslz00, BgL_bgl_string2392za700za7za7_2557za7, "/tmp/4.4a/runtime/Llib/dsssl.scm", 32 );
DEFINE_STRING( BGl_string2474z00zz__dssslz00, BgL_bgl_string2474za700za7za7_2558za7, "&dsssl-get-key-arg", 18 );
DEFINE_STRING( BGl_string2393z00zz__dssslz00, BgL_bgl_string2393za700za7za7_2559za7, "TAG-102", 7 );
DEFINE_STRING( BGl_string2475z00zz__dssslz00, BgL_bgl_string2475za700za7za7_2560za7, "keyword", 7 );
DEFINE_STRING( BGl_string2394z00zz__dssslz00, BgL_bgl_string2394za700za7za7_2561za7, "pair", 4 );
DEFINE_STRING( BGl_string2476z00zz__dssslz00, BgL_bgl_string2476za700za7za7_2562za7, "loop~1", 6 );
DEFINE_STRING( BGl_string2395z00zz__dssslz00, BgL_bgl_string2395za700za7za7_2563za7, "Illegal formal list.3", 21 );
DEFINE_STRING( BGl_string2477z00zz__dssslz00, BgL_bgl_string2477za700za7za7_2564za7, "&dsssl-get-key-rest-arg", 23 );
DEFINE_STRING( BGl_string2396z00zz__dssslz00, BgL_bgl_string2396za700za7za7_2565za7, "TAG-103:Wrong number of arguments", 33 );
DEFINE_STRING( BGl_string2478z00zz__dssslz00, BgL_bgl_string2478za700za7za7_2566za7, "string-ref", 10 );
DEFINE_STRING( BGl_string2479z00zz__dssslz00, BgL_bgl_string2479za700za7za7_2567za7, "&dsssl-formals->scheme-formals", 30 );
DEFINE_STRING( BGl_string2399z00zz__dssslz00, BgL_bgl_string2399za700za7za7_2568za7, "arg1277", 7 );
DEFINE_STRING( BGl_string2480z00zz__dssslz00, BgL_bgl_string2480za700za7za7_2569za7, "dsssl-defaulted-formal?", 23 );
DEFINE_STRING( BGl_string2481z00zz__dssslz00, BgL_bgl_string2481za700za7za7_2570za7, "loop~0", 6 );
DEFINE_STRING( BGl_string2483z00zz__dssslz00, BgL_bgl_string2483za700za7za7_2571za7, "Illegal formal parameter", 24 );
DEFINE_STRING( BGl_string2484z00zz__dssslz00, BgL_bgl_string2484za700za7za7_2572za7, "symbol or named constant expected", 33 );
DEFINE_STRING( BGl_string2485z00zz__dssslz00, BgL_bgl_string2485za700za7za7_2573za7, "loop~0:Wrong number of arguments", 32 );
DEFINE_STRING( BGl_string2487z00zz__dssslz00, BgL_bgl_string2487za700za7za7_2574za7, "symbol expected", 15 );
DEFINE_STRING( BGl_string2489z00zz__dssslz00, BgL_bgl_string2489za700za7za7_2575za7, "Can't use both DSSSL named constant", 35 );
DEFINE_STRING( BGl_string2490z00zz__dssslz00, BgL_bgl_string2490za700za7za7_2576za7, "and `.' notation", 16 );
DEFINE_STRING( BGl_string2492z00zz__dssslz00, BgL_bgl_string2492za700za7za7_2577za7, "&dsssl-formals->scheme-typed-formals", 36 );
DEFINE_STRING( BGl_string2493z00zz__dssslz00, BgL_bgl_string2493za700za7za7_2578za7, "__dsssl", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalszd2envz31zz__dssslz00, BgL_bgl_za762dssslza7d2forma2579z00, BGl_z62dssslzd2formalszd2ze3schemezd2typedzd2formalsz81zz__dssslz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dssslzd2checkzd2keyzd2argsz12zd2envz12zz__dssslz00, BgL_bgl_za762dssslza7d2check2580z00, BGl_z62dssslzd2checkzd2keyzd2argsz12za2zz__dssslz00, 0L, BUNSPEC, 2 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_list2402z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_list2437z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_list2441z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_list2376z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_list2458z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_list2379z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_list2462z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_list2397z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_list2482z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_list2486z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_list2488z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_list2491z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2403z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2407z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2409z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2411z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2414z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2416z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2419z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2421z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2423z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2426z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2428z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2430z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2432z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2438z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2444z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2446z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2448z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2450z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2452z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2454z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2380z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2382z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2384z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2386z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2388z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2390z00zz__dssslz00) );
ADD_ROOT( (void *)(&BGl_symbol2398z00zz__dssslz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long BgL_checksumz00_2969, char * BgL_fromz00_2970)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__dssslz00))
{ 
BGl_requirezd2initializa7ationz75zz__dssslz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__dssslz00(); 
BGl_cnstzd2initzd2zz__dssslz00(); 
BGl_importedzd2moduleszd2initz00zz__dssslz00(); 
return 
BGl_methodzd2initzd2zz__dssslz00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__dssslz00()
{
{ /* Llib/dsssl.scm 14 */
BGl_list2376z00zz__dssslz00 = 
MAKE_YOUNG_PAIR((BREST), 
MAKE_YOUNG_PAIR((BOPTIONAL), 
MAKE_YOUNG_PAIR((BKEY), BNIL))); 
BGl_symbol2380z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2381z00zz__dssslz00); 
BGl_symbol2382z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2383z00zz__dssslz00); 
BGl_symbol2384z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2385z00zz__dssslz00); 
BGl_symbol2386z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2387z00zz__dssslz00); 
BGl_list2379z00zz__dssslz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2380z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2382z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2382z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2384z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_string2377z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2386z00zz__dssslz00, BNIL)))))); 
BGl_symbol2388z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2389z00zz__dssslz00); 
BGl_symbol2390z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2391z00zz__dssslz00); 
BGl_symbol2398z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2399z00zz__dssslz00); 
BGl_list2397z00zz__dssslz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2380z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2382z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2382z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2384z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_string2395z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2398z00zz__dssslz00, BNIL)))))); 
BGl_symbol2403z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2404z00zz__dssslz00); 
BGl_list2402z00zz__dssslz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2380z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2382z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2382z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2384z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_string2400z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2403z00zz__dssslz00, BNIL)))))); 
BGl_symbol2407z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2408z00zz__dssslz00); 
BGl_symbol2409z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2410z00zz__dssslz00); 
BGl_symbol2411z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2412z00zz__dssslz00); 
BGl_symbol2414z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2415z00zz__dssslz00); 
BGl_symbol2416z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2417z00zz__dssslz00); 
BGl_symbol2419z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2420z00zz__dssslz00); 
BGl_symbol2421z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2422z00zz__dssslz00); 
BGl_symbol2423z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2424z00zz__dssslz00); 
BGl_symbol2426z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2427z00zz__dssslz00); 
BGl_symbol2428z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2429z00zz__dssslz00); 
BGl_symbol2430z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2431z00zz__dssslz00); 
BGl_symbol2432z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2433z00zz__dssslz00); 
BGl_symbol2438z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2439z00zz__dssslz00); 
BGl_list2437z00zz__dssslz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2380z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2382z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2382z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2384z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_string2435z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2438z00zz__dssslz00, BNIL)))))); 
BGl_list2441z00zz__dssslz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2380z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2382z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2382z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2384z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_string2440z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2438z00zz__dssslz00, BNIL)))))); 
BGl_symbol2444z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2445z00zz__dssslz00); 
BGl_symbol2446z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2447z00zz__dssslz00); 
BGl_symbol2448z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2449z00zz__dssslz00); 
BGl_symbol2450z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2451z00zz__dssslz00); 
BGl_symbol2452z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2453z00zz__dssslz00); 
BGl_symbol2454z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2455z00zz__dssslz00); 
BGl_list2458z00zz__dssslz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2380z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2382z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2382z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2384z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_string2456z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2438z00zz__dssslz00, BNIL)))))); 
BGl_list2462z00zz__dssslz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2380z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2382z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2382z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2384z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_string2460z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2438z00zz__dssslz00, BNIL)))))); 
BGl_list2482z00zz__dssslz00 = 
MAKE_YOUNG_PAIR((BOPTIONAL), 
MAKE_YOUNG_PAIR((BREST), 
MAKE_YOUNG_PAIR((BKEY), BNIL))); 
BGl_list2486z00zz__dssslz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2380z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2382z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2382z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_string2483z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_string2484z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2438z00zz__dssslz00, BNIL)))))); 
BGl_list2488z00zz__dssslz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2380z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2382z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2382z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_string2483z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_string2487z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2438z00zz__dssslz00, BNIL)))))); 
return ( 
BGl_list2491z00zz__dssslz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2380z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2382z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2382z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_string2489z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_string2490z00zz__dssslz00, 
MAKE_YOUNG_PAIR(BGl_symbol2438z00zz__dssslz00, BNIL)))))), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__dssslz00()
{
{ /* Llib/dsssl.scm 14 */
return 
bgl_gc_roots_register();} 

}



/* dsssl-named-constant? */
BGL_EXPORTED_DEF bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t BgL_objz00_3)
{
{ /* Llib/dsssl.scm 59 */
if(
CNSTP(BgL_objz00_3))
{ /* Llib/dsssl.scm 60 */
return 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_3, BGl_list2376z00zz__dssslz00));}  else 
{ /* Llib/dsssl.scm 60 */
return ((bool_t)0);} } 

}



/* &dsssl-named-constant? */
obj_t BGl_z62dssslzd2namedzd2constantzf3z91zz__dssslz00(obj_t BgL_envz00_2617, obj_t BgL_objz00_2618)
{
{ /* Llib/dsssl.scm 59 */
return 
BBOOL(
BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(BgL_objz00_2618));} 

}



/* make-dsssl-function-prelude */
BGL_EXPORTED_DEF obj_t BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t BgL_wherez00_4, obj_t BgL_formalsz00_5, obj_t BgL_bodyz00_6, obj_t BgL_errz00_7)
{
{ /* Llib/dsssl.scm 71 */
{ /* Llib/dsssl.scm 75 */
obj_t BgL_nozd2restzd2keyzd2statezd2_2620;obj_t BgL_restzd2statezd2_2621;obj_t BgL_optionalzd2statezd2_2622;
{ 
int BgL_tmpz00_3078;
BgL_tmpz00_3078 = 
(int)(((long)4)); 
BgL_nozd2restzd2keyzd2statezd2_2620 = 
MAKE_L_PROCEDURE(BGl_z62nozd2restzd2keyzd2statezb0zz__dssslz00, BgL_tmpz00_3078); } 
{ 
int BgL_tmpz00_3081;
BgL_tmpz00_3081 = 
(int)(((long)4)); 
BgL_restzd2statezd2_2621 = 
MAKE_L_PROCEDURE(BGl_z62restzd2statezb0zz__dssslz00, BgL_tmpz00_3081); } 
{ 
int BgL_tmpz00_3084;
BgL_tmpz00_3084 = 
(int)(((long)6)); 
BgL_optionalzd2statezd2_2622 = 
MAKE_L_PROCEDURE(BGl_z62optionalzd2statezb0zz__dssslz00, BgL_tmpz00_3084); } 
PROCEDURE_L_SET(BgL_nozd2restzd2keyzd2statezd2_2620, 
(int)(((long)0)), BgL_bodyz00_6); 
PROCEDURE_L_SET(BgL_nozd2restzd2keyzd2statezd2_2620, 
(int)(((long)1)), BgL_errz00_7); 
PROCEDURE_L_SET(BgL_nozd2restzd2keyzd2statezd2_2620, 
(int)(((long)2)), BgL_wherez00_4); 
PROCEDURE_L_SET(BgL_nozd2restzd2keyzd2statezd2_2620, 
(int)(((long)3)), BgL_formalsz00_5); 
PROCEDURE_L_SET(BgL_restzd2statezd2_2621, 
(int)(((long)0)), BgL_errz00_7); 
PROCEDURE_L_SET(BgL_restzd2statezd2_2621, 
(int)(((long)1)), BgL_wherez00_4); 
PROCEDURE_L_SET(BgL_restzd2statezd2_2621, 
(int)(((long)2)), BgL_formalsz00_5); 
PROCEDURE_L_SET(BgL_restzd2statezd2_2621, 
(int)(((long)3)), BgL_bodyz00_6); 
PROCEDURE_L_SET(BgL_optionalzd2statezd2_2622, 
(int)(((long)0)), BgL_errz00_7); 
PROCEDURE_L_SET(BgL_optionalzd2statezd2_2622, 
(int)(((long)1)), BgL_wherez00_4); 
PROCEDURE_L_SET(BgL_optionalzd2statezd2_2622, 
(int)(((long)2)), BgL_formalsz00_5); 
PROCEDURE_L_SET(BgL_optionalzd2statezd2_2622, 
(int)(((long)3)), BgL_nozd2restzd2keyzd2statezd2_2620); 
PROCEDURE_L_SET(BgL_optionalzd2statezd2_2622, 
(int)(((long)4)), BgL_restzd2statezd2_2621); 
PROCEDURE_L_SET(BgL_optionalzd2statezd2_2622, 
(int)(((long)5)), BgL_bodyz00_6); 
{ 
obj_t BgL_argsz00_1084;obj_t BgL_nextzd2statezd2_1085;obj_t BgL_argsz00_1055;
BgL_argsz00_1055 = BgL_formalsz00_5; 
BgL_zc3z04anonymousza31167ze3z87_1056:
if(
PAIRP(BgL_argsz00_1055))
{ /* Llib/dsssl.scm 77 */
bool_t BgL_test2584z00_3117;
{ /* Llib/dsssl.scm 77 */
bool_t BgL_test2585z00_3118;
{ /* Llib/dsssl.scm 77 */
obj_t BgL_tmpz00_3119;
BgL_tmpz00_3119 = 
CAR(BgL_argsz00_1055); 
BgL_test2585z00_3118 = 
SYMBOLP(BgL_tmpz00_3119); } 
if(BgL_test2585z00_3118)
{ /* Llib/dsssl.scm 77 */
BgL_test2584z00_3117 = ((bool_t)0)
; }  else 
{ /* Llib/dsssl.scm 77 */
bool_t BgL_test2586z00_3122;
{ /* Llib/dsssl.scm 77 */
obj_t BgL_tmpz00_3123;
BgL_tmpz00_3123 = 
CAR(BgL_argsz00_1055); 
BgL_test2586z00_3122 = 
PAIRP(BgL_tmpz00_3123); } 
if(BgL_test2586z00_3122)
{ /* Llib/dsssl.scm 77 */
BgL_test2584z00_3117 = ((bool_t)0)
; }  else 
{ /* Llib/dsssl.scm 77 */
BgL_test2584z00_3117 = ((bool_t)1)
; } } } 
if(BgL_test2584z00_3117)
{ /* Llib/dsssl.scm 77 */
if(
(
CAR(BgL_argsz00_1055)==(BOPTIONAL)))
{ /* Llib/dsssl.scm 81 */
BgL_argsz00_1084 = 
CDR(BgL_argsz00_1055); 
BgL_nextzd2statezd2_1085 = BgL_optionalzd2statezd2_2622; 
BgL_zc3z04anonymousza31228ze3z87_1086:
{ 
obj_t BgL_asz00_1088;
BgL_asz00_1088 = BgL_argsz00_1084; 
if(
PAIRP(BgL_asz00_1088))
{ 

{ /* Llib/dsssl.scm 99 */
obj_t BgL_ezd2104zd2_1094;
BgL_ezd2104zd2_1094 = 
CAR(BgL_asz00_1088); 
if(
SYMBOLP(BgL_ezd2104zd2_1094))
{ /* Llib/dsssl.scm 99 */
{ /* Llib/dsssl.scm 101 */
obj_t BgL_dssslzd2argzd2_1105;
BgL_dssslzd2argzd2_1105 = 
BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol2388z00zz__dssslz00); 
{ /* Llib/dsssl.scm 102 */
obj_t BgL_arg1247z00_1106;
{ /* Llib/dsssl.scm 102 */
obj_t BgL_arg1250z00_1107;obj_t BgL_arg1252z00_1108;
{ /* Llib/dsssl.scm 102 */
obj_t BgL_arg1253z00_1109;
{ /* Llib/dsssl.scm 102 */
obj_t BgL_arg1254z00_1110;
{ /* Llib/dsssl.scm 102 */
obj_t BgL_arg1256z00_1111;
BgL_arg1256z00_1111 = 
CAR(
((obj_t)BgL_asz00_1088)); 
BgL_arg1254z00_1110 = 
MAKE_YOUNG_PAIR(BgL_arg1256z00_1111, BNIL); } 
BgL_arg1253z00_1109 = 
MAKE_YOUNG_PAIR(BgL_dssslzd2argzd2_1105, BgL_arg1254z00_1110); } 
BgL_arg1250z00_1107 = 
MAKE_YOUNG_PAIR(BgL_arg1253z00_1109, BNIL); } 
{ /* Llib/dsssl.scm 103 */
obj_t BgL_arg1258z00_1112;
BgL_arg1258z00_1112 = 
PROCEDURE_L_ENTRY(BgL_nextzd2statezd2_1085)(BgL_nextzd2statezd2_1085, BgL_argsz00_1084, BgL_dssslzd2argzd2_1105); 
BgL_arg1252z00_1108 = 
MAKE_YOUNG_PAIR(BgL_arg1258z00_1112, BNIL); } 
BgL_arg1247z00_1106 = 
MAKE_YOUNG_PAIR(BgL_arg1250z00_1107, BgL_arg1252z00_1108); } 
return 
MAKE_YOUNG_PAIR(BGl_symbol2390z00zz__dssslz00, BgL_arg1247z00_1106);} } }  else 
{ /* Llib/dsssl.scm 99 */
if(
PAIRP(BgL_ezd2104zd2_1094))
{ /* Llib/dsssl.scm 99 */
obj_t BgL_cdrzd2106zd2_1097;
BgL_cdrzd2106zd2_1097 = 
CDR(BgL_ezd2104zd2_1094); 
{ /* Llib/dsssl.scm 99 */
bool_t BgL_test2591z00_3151;
{ /* Llib/dsssl.scm 99 */
obj_t BgL_tmpz00_3152;
BgL_tmpz00_3152 = 
CAR(BgL_ezd2104zd2_1094); 
BgL_test2591z00_3151 = 
SYMBOLP(BgL_tmpz00_3152); } 
if(BgL_test2591z00_3151)
{ /* Llib/dsssl.scm 99 */
if(
PAIRP(BgL_cdrzd2106zd2_1097))
{ /* Llib/dsssl.scm 99 */
if(
NULLP(
CDR(BgL_cdrzd2106zd2_1097)))
{ /* Llib/dsssl.scm 99 */
{ /* Llib/dsssl.scm 105 */
obj_t BgL_dssslzd2argzd2_1113;
BgL_dssslzd2argzd2_1113 = 
BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol2388z00zz__dssslz00); 
{ /* Llib/dsssl.scm 106 */
obj_t BgL_arg1263z00_1114;
{ /* Llib/dsssl.scm 106 */
obj_t BgL_arg1268z00_1115;obj_t BgL_arg1270z00_1116;
{ /* Llib/dsssl.scm 106 */
obj_t BgL_arg1271z00_1117;
{ /* Llib/dsssl.scm 106 */
obj_t BgL_arg1273z00_1118;
{ /* Llib/dsssl.scm 106 */
obj_t BgL_arg1274z00_1119;
{ /* Llib/dsssl.scm 106 */
obj_t BgL_pairz00_2085;
{ /* Llib/dsssl.scm 106 */
obj_t BgL_aux2210z00_2699;
BgL_aux2210z00_2699 = 
CAR(
((obj_t)BgL_asz00_1088)); 
if(
PAIRP(BgL_aux2210z00_2699))
{ /* Llib/dsssl.scm 106 */
BgL_pairz00_2085 = BgL_aux2210z00_2699; }  else 
{ 
obj_t BgL_auxz00_3165;
BgL_auxz00_3165 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)4202)), BGl_string2393z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_aux2210z00_2699); 
FAILURE(BgL_auxz00_3165,BFALSE,BFALSE);} } 
BgL_arg1274z00_1119 = 
CAR(BgL_pairz00_2085); } 
BgL_arg1273z00_1118 = 
MAKE_YOUNG_PAIR(BgL_arg1274z00_1119, BNIL); } 
BgL_arg1271z00_1117 = 
MAKE_YOUNG_PAIR(BgL_dssslzd2argzd2_1113, BgL_arg1273z00_1118); } 
BgL_arg1268z00_1115 = 
MAKE_YOUNG_PAIR(BgL_arg1271z00_1117, BNIL); } 
{ /* Llib/dsssl.scm 107 */
obj_t BgL_arg1276z00_1121;
BgL_arg1276z00_1121 = 
PROCEDURE_L_ENTRY(BgL_nextzd2statezd2_1085)(BgL_nextzd2statezd2_1085, BgL_argsz00_1084, BgL_dssslzd2argzd2_1113); 
BgL_arg1270z00_1116 = 
MAKE_YOUNG_PAIR(BgL_arg1276z00_1121, BNIL); } 
BgL_arg1263z00_1114 = 
MAKE_YOUNG_PAIR(BgL_arg1268z00_1115, BgL_arg1270z00_1116); } 
return 
MAKE_YOUNG_PAIR(BGl_symbol2390z00zz__dssslz00, BgL_arg1263z00_1114);} } }  else 
{ /* Llib/dsssl.scm 99 */
BgL_tagzd2103zd2_1093:
{ /* Llib/dsssl.scm 109 */
obj_t BgL_arg1277z00_1122;
{ /* Llib/dsssl.scm 109 */
obj_t BgL_arg1280z00_1123;
BgL_arg1280z00_1123 = 
CAR(
((obj_t)BgL_asz00_1088)); 
BgL_arg1277z00_1122 = 
MAKE_YOUNG_PAIR(BgL_arg1280z00_1123, BgL_formalsz00_5); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_7, ((long)3)))
{ /* Llib/dsssl.scm 109 */
return 
PROCEDURE_ENTRY(BgL_errz00_7)(BgL_errz00_7, BgL_wherez00_4, BGl_string2395z00zz__dssslz00, BgL_arg1277z00_1122, BEOA);}  else 
{ /* Llib/dsssl.scm 109 */
FAILURE(BGl_string2396z00zz__dssslz00,BGl_list2397z00zz__dssslz00,BgL_errz00_7);} } } }  else 
{ /* Llib/dsssl.scm 99 */
goto BgL_tagzd2103zd2_1093;} }  else 
{ /* Llib/dsssl.scm 99 */
goto BgL_tagzd2103zd2_1093;} } }  else 
{ /* Llib/dsssl.scm 99 */
goto BgL_tagzd2103zd2_1093;} } } }  else 
{ /* Llib/dsssl.scm 97 */
obj_t BgL_arg1281z00_1124;
BgL_arg1281z00_1124 = 
MAKE_YOUNG_PAIR(BgL_asz00_1088, BgL_formalsz00_5); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_7, ((long)3)))
{ /* Llib/dsssl.scm 97 */
return 
PROCEDURE_ENTRY(BgL_errz00_7)(BgL_errz00_7, BgL_wherez00_4, BGl_string2400z00zz__dssslz00, BgL_arg1281z00_1124, BEOA);}  else 
{ /* Llib/dsssl.scm 97 */
FAILURE(BGl_string2401z00zz__dssslz00,BGl_list2402z00zz__dssslz00,BgL_errz00_7);} } } }  else 
{ /* Llib/dsssl.scm 81 */
if(
(
CAR(BgL_argsz00_1055)==(BREST)))
{ 
obj_t BgL_nextzd2statezd2_3209;obj_t BgL_argsz00_3207;
BgL_argsz00_3207 = 
CDR(BgL_argsz00_1055); 
BgL_nextzd2statezd2_3209 = BgL_restzd2statezd2_2621; 
BgL_nextzd2statezd2_1085 = BgL_nextzd2statezd2_3209; 
BgL_argsz00_1084 = BgL_argsz00_3207; 
goto BgL_zc3z04anonymousza31228ze3z87_1086;}  else 
{ /* Llib/dsssl.scm 83 */
if(
(
CAR(BgL_argsz00_1055)==(BKEY)))
{ 
obj_t BgL_nextzd2statezd2_3215;obj_t BgL_argsz00_3213;
BgL_argsz00_3213 = 
CDR(BgL_argsz00_1055); 
BgL_nextzd2statezd2_3215 = BgL_nozd2restzd2keyzd2statezd2_2620; 
BgL_nextzd2statezd2_1085 = BgL_nextzd2statezd2_3215; 
BgL_argsz00_1084 = BgL_argsz00_3213; 
goto BgL_zc3z04anonymousza31228ze3z87_1086;}  else 
{ /* Llib/dsssl.scm 88 */
obj_t BgL_arg1201z00_1074;
BgL_arg1201z00_1074 = 
MAKE_YOUNG_PAIR(
CAR(BgL_argsz00_1055), BgL_formalsz00_5); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_7, ((long)3)))
{ /* Llib/dsssl.scm 88 */
return 
PROCEDURE_ENTRY(BgL_errz00_7)(BgL_errz00_7, BgL_wherez00_4, BGl_string2377z00zz__dssslz00, BgL_arg1201z00_1074, BEOA);}  else 
{ /* Llib/dsssl.scm 88 */
FAILURE(BGl_string2378z00zz__dssslz00,BGl_list2379z00zz__dssslz00,BgL_errz00_7);} } } } }  else 
{ 
obj_t BgL_argsz00_3227;
BgL_argsz00_3227 = 
CDR(BgL_argsz00_1055); 
BgL_argsz00_1055 = BgL_argsz00_3227; 
goto BgL_zc3z04anonymousza31167ze3z87_1056;} }  else 
{ /* Llib/dsssl.scm 75 */
return BgL_bodyz00_6;} } } } 

}



/* &make-dsssl-function-prelude */
obj_t BGl_z62makezd2dssslzd2functionzd2preludezb0zz__dssslz00(obj_t BgL_envz00_2623, obj_t BgL_wherez00_2624, obj_t BgL_formalsz00_2625, obj_t BgL_bodyz00_2626, obj_t BgL_errz00_2627)
{
{ /* Llib/dsssl.scm 71 */
{ /* Llib/dsssl.scm 75 */
obj_t BgL_auxz00_3229;
if(
PROCEDUREP(BgL_errz00_2627))
{ /* Llib/dsssl.scm 75 */
BgL_auxz00_3229 = BgL_errz00_2627
; }  else 
{ 
obj_t BgL_auxz00_3232;
BgL_auxz00_3232 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)3130)), BGl_string2405z00zz__dssslz00, BGl_string2406z00zz__dssslz00, BgL_errz00_2627); 
FAILURE(BgL_auxz00_3232,BFALSE,BFALSE);} 
return 
BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00(BgL_wherez00_2624, BgL_formalsz00_2625, BgL_bodyz00_2626, BgL_auxz00_3229);} } 

}



/* &key-state */
obj_t BGl_z62keyzd2statezb0zz__dssslz00(obj_t BgL_bodyz00_2631, obj_t BgL_formalsz00_2630, obj_t BgL_wherez00_2629, obj_t BgL_errz00_2628, obj_t BgL_argsz00_1372, obj_t BgL_dssslzd2argzd2_1373, obj_t BgL_collectedzd2keyszd2_1374, bool_t BgL_allowzd2restpzd2_1375)
{
{ /* Llib/dsssl.scm 264 */
{ 
obj_t BgL_argz00_1462;obj_t BgL_initializa7erza7_1463;obj_t BgL_collectedzd2keyszd2_1464;obj_t BgL_argz00_1480;obj_t BgL_bodyz00_1481;
if(
NULLP(BgL_argsz00_1372))
{ /* Llib/dsssl.scm 271 */
if(BgL_allowzd2restpzd2_1375)
{ /* Llib/dsssl.scm 274 */
obj_t BgL_arg1461z00_1380;
{ /* Llib/dsssl.scm 274 */
obj_t BgL_arg1462z00_1381;obj_t BgL_arg1463z00_1382;
{ /* Llib/dsssl.scm 274 */
obj_t BgL_arg1464z00_1383;
{ /* Llib/dsssl.scm 274 */
obj_t BgL_arg1465z00_1384;
{ /* Llib/dsssl.scm 274 */
obj_t BgL_arg1466z00_1385;
{ /* Llib/dsssl.scm 274 */
obj_t BgL_arg1467z00_1386;
{ /* Llib/dsssl.scm 274 */
obj_t BgL_arg1468z00_1387;
{ /* Llib/dsssl.scm 274 */
obj_t BgL_arg1469z00_1388;
BgL_arg1469z00_1388 = 
MAKE_YOUNG_PAIR(BgL_collectedzd2keyszd2_1374, BNIL); 
BgL_arg1468z00_1387 = 
MAKE_YOUNG_PAIR(BGl_symbol2407z00zz__dssslz00, BgL_arg1469z00_1388); } 
BgL_arg1467z00_1386 = 
MAKE_YOUNG_PAIR(BgL_arg1468z00_1387, BNIL); } 
BgL_arg1466z00_1385 = 
MAKE_YOUNG_PAIR(BgL_dssslzd2argzd2_1373, BgL_arg1467z00_1386); } 
BgL_arg1465z00_1384 = 
MAKE_YOUNG_PAIR(BGl_symbol2409z00zz__dssslz00, BgL_arg1466z00_1385); } 
BgL_arg1464z00_1383 = 
MAKE_YOUNG_PAIR(BgL_arg1465z00_1384, BNIL); } 
BgL_arg1462z00_1381 = 
MAKE_YOUNG_PAIR(BGl_symbol2414z00zz__dssslz00, BgL_arg1464z00_1383); } 
{ /* Llib/dsssl.scm 278 */
obj_t BgL_arg1470z00_1389;
{ /* Llib/dsssl.scm 278 */
obj_t BgL_arg1471z00_1390;
{ /* Llib/dsssl.scm 278 */
obj_t BgL_arg1472z00_1391;
{ /* Llib/dsssl.scm 278 */
obj_t BgL_arg1473z00_1392;
{ /* Llib/dsssl.scm 278 */
obj_t BgL_arg1474z00_1393;obj_t BgL_arg1475z00_1394;
{ /* Llib/dsssl.scm 278 */
obj_t BgL_arg1476z00_1395;
{ /* Llib/dsssl.scm 278 */
obj_t BgL_arg1477z00_1396;
{ /* Llib/dsssl.scm 278 */
obj_t BgL_arg1478z00_1397;
{ /* Llib/dsssl.scm 278 */
obj_t BgL_arg1479z00_1398;
{ /* Llib/dsssl.scm 278 */
obj_t BgL_arg1480z00_1399;
{ /* Llib/dsssl.scm 278 */
obj_t BgL_arg1483z00_1400;obj_t BgL_arg1484z00_1401;
{ /* Llib/dsssl.scm 278 */
obj_t BgL_arg1485z00_1402;
{ /* Llib/dsssl.scm 278 */
obj_t BgL_arg1486z00_1403;obj_t BgL_arg1487z00_1404;
BgL_arg1486z00_1403 = 
MAKE_YOUNG_PAIR(BGl_symbol2416z00zz__dssslz00, BNIL); 
{ /* Llib/dsssl.scm 279 */
obj_t BgL_arg1489z00_1405;
{ /* Llib/dsssl.scm 279 */
obj_t BgL_arg1491z00_1406;
{ /* Llib/dsssl.scm 279 */
obj_t BgL_arg1492z00_1407;
BgL_arg1492z00_1407 = 
MAKE_YOUNG_PAIR(BGl_symbol2416z00zz__dssslz00, BNIL); 
BgL_arg1491z00_1406 = 
MAKE_YOUNG_PAIR(BGl_string2418z00zz__dssslz00, BgL_arg1492z00_1407); } 
BgL_arg1489z00_1405 = 
MAKE_YOUNG_PAIR(BGl_symbol2419z00zz__dssslz00, BgL_arg1491z00_1406); } 
BgL_arg1487z00_1404 = 
MAKE_YOUNG_PAIR(BgL_arg1489z00_1405, BNIL); } 
BgL_arg1485z00_1402 = 
MAKE_YOUNG_PAIR(BgL_arg1486z00_1403, BgL_arg1487z00_1404); } 
BgL_arg1483z00_1400 = 
MAKE_YOUNG_PAIR(BGl_symbol2421z00zz__dssslz00, BgL_arg1485z00_1402); } 
{ /* Llib/dsssl.scm 280 */
obj_t BgL_arg1493z00_1408;
{ /* Llib/dsssl.scm 280 */
obj_t BgL_arg1494z00_1409;
{ /* Llib/dsssl.scm 280 */
obj_t BgL_arg1495z00_1410;
{ /* Llib/dsssl.scm 280 */
obj_t BgL_arg1496z00_1411;
{ /* Llib/dsssl.scm 280 */
obj_t BgL_arg1497z00_1412;
BgL_arg1497z00_1412 = 
MAKE_YOUNG_PAIR(BgL_collectedzd2keyszd2_1374, BNIL); 
BgL_arg1496z00_1411 = 
MAKE_YOUNG_PAIR(BGl_symbol2407z00zz__dssslz00, BgL_arg1497z00_1412); } 
BgL_arg1495z00_1410 = 
MAKE_YOUNG_PAIR(BgL_arg1496z00_1411, BNIL); } 
BgL_arg1494z00_1409 = 
MAKE_YOUNG_PAIR(BgL_dssslzd2argzd2_1373, BgL_arg1495z00_1410); } 
BgL_arg1493z00_1408 = 
MAKE_YOUNG_PAIR(BGl_symbol2409z00zz__dssslz00, BgL_arg1494z00_1409); } 
BgL_arg1484z00_1401 = 
MAKE_YOUNG_PAIR(BgL_arg1493z00_1408, BNIL); } 
BgL_arg1480z00_1399 = 
MAKE_YOUNG_PAIR(BgL_arg1483z00_1400, BgL_arg1484z00_1401); } 
BgL_arg1479z00_1398 = 
MAKE_YOUNG_PAIR(BGl_symbol2423z00zz__dssslz00, BgL_arg1480z00_1399); } 
BgL_arg1478z00_1397 = 
MAKE_YOUNG_PAIR(BgL_arg1479z00_1398, BNIL); } 
BgL_arg1477z00_1396 = 
MAKE_YOUNG_PAIR(BGl_string2425z00zz__dssslz00, BgL_arg1478z00_1397); } 
BgL_arg1476z00_1395 = 
MAKE_YOUNG_PAIR(BGl_symbol2426z00zz__dssslz00, BgL_arg1477z00_1396); } 
BgL_arg1474z00_1393 = 
MAKE_YOUNG_PAIR(BGl_symbol2428z00zz__dssslz00, BgL_arg1476z00_1395); } 
BgL_arg1475z00_1394 = 
MAKE_YOUNG_PAIR(BgL_dssslzd2argzd2_1373, BNIL); 
BgL_arg1473z00_1392 = 
MAKE_YOUNG_PAIR(BgL_arg1474z00_1393, BgL_arg1475z00_1394); } 
BgL_arg1472z00_1391 = 
MAKE_YOUNG_PAIR(BGl_string2412z00zz__dssslz00, BgL_arg1473z00_1392); } 
BgL_arg1471z00_1390 = 
MAKE_YOUNG_PAIR(BGl_symbol2430z00zz__dssslz00, BgL_arg1472z00_1391); } 
BgL_arg1470z00_1389 = 
MAKE_YOUNG_PAIR(BgL_arg1471z00_1390, BNIL); } 
BgL_arg1463z00_1382 = 
MAKE_YOUNG_PAIR(BgL_bodyz00_2631, BgL_arg1470z00_1389); } 
BgL_arg1461z00_1380 = 
MAKE_YOUNG_PAIR(BgL_arg1462z00_1381, BgL_arg1463z00_1382); } 
return 
MAKE_YOUNG_PAIR(BGl_symbol2432z00zz__dssslz00, BgL_arg1461z00_1380);}  else 
{ /* Llib/dsssl.scm 272 */
return BgL_bodyz00_2631;} }  else 
{ /* Llib/dsssl.scm 284 */
bool_t BgL_test2603z00_3274;
{ /* Llib/dsssl.scm 284 */
obj_t BgL_tmpz00_3275;
{ /* Llib/dsssl.scm 284 */
obj_t BgL_pairz00_2209;
if(
PAIRP(BgL_argsz00_1372))
{ /* Llib/dsssl.scm 284 */
BgL_pairz00_2209 = BgL_argsz00_1372; }  else 
{ 
obj_t BgL_auxz00_3278;
BgL_auxz00_3278 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)9565)), BGl_string2434z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_1372); 
FAILURE(BgL_auxz00_3278,BFALSE,BFALSE);} 
BgL_tmpz00_3275 = 
CAR(BgL_pairz00_2209); } 
BgL_test2603z00_3274 = 
(BgL_tmpz00_3275==(BREST)); } 
if(BgL_test2603z00_3274)
{ /* Llib/dsssl.scm 285 */
bool_t BgL_test2605z00_3284;
if(BgL_allowzd2restpzd2_1375)
{ /* Llib/dsssl.scm 286 */
bool_t BgL_test2607z00_3286;
{ /* Llib/dsssl.scm 286 */
obj_t BgL_tmpz00_3287;
{ /* Llib/dsssl.scm 286 */
obj_t BgL_pairz00_2210;
if(
PAIRP(BgL_argsz00_1372))
{ /* Llib/dsssl.scm 286 */
BgL_pairz00_2210 = BgL_argsz00_1372; }  else 
{ 
obj_t BgL_auxz00_3290;
BgL_auxz00_3290 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)9624)), BGl_string2434z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_1372); 
FAILURE(BgL_auxz00_3290,BFALSE,BFALSE);} 
BgL_tmpz00_3287 = 
CDR(BgL_pairz00_2210); } 
BgL_test2607z00_3286 = 
NULLP(BgL_tmpz00_3287); } 
if(BgL_test2607z00_3286)
{ /* Llib/dsssl.scm 286 */
BgL_test2605z00_3284 = ((bool_t)1)
; }  else 
{ /* Llib/dsssl.scm 287 */
bool_t BgL_test2609z00_3296;
{ /* Llib/dsssl.scm 287 */
obj_t BgL_tmpz00_3297;
{ /* Llib/dsssl.scm 287 */
obj_t BgL_pairz00_2212;
if(
PAIRP(BgL_argsz00_1372))
{ /* Llib/dsssl.scm 287 */
BgL_pairz00_2212 = BgL_argsz00_1372; }  else 
{ 
obj_t BgL_auxz00_3300;
BgL_auxz00_3300 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)9655)), BGl_string2434z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_1372); 
FAILURE(BgL_auxz00_3300,BFALSE,BFALSE);} 
{ /* Llib/dsssl.scm 287 */
obj_t BgL_pairz00_2215;
{ /* Llib/dsssl.scm 287 */
obj_t BgL_aux2228z00_2719;
BgL_aux2228z00_2719 = 
CDR(BgL_pairz00_2212); 
if(
PAIRP(BgL_aux2228z00_2719))
{ /* Llib/dsssl.scm 287 */
BgL_pairz00_2215 = BgL_aux2228z00_2719; }  else 
{ 
obj_t BgL_auxz00_3307;
BgL_auxz00_3307 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)9649)), BGl_string2434z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_aux2228z00_2719); 
FAILURE(BgL_auxz00_3307,BFALSE,BFALSE);} } 
BgL_tmpz00_3297 = 
CAR(BgL_pairz00_2215); } } 
BgL_test2609z00_3296 = 
SYMBOLP(BgL_tmpz00_3297); } 
if(BgL_test2609z00_3296)
{ /* Llib/dsssl.scm 288 */
obj_t BgL_tmpz00_3313;
{ /* Llib/dsssl.scm 288 */
obj_t BgL_pairz00_2217;
if(
PAIRP(BgL_argsz00_1372))
{ /* Llib/dsssl.scm 288 */
BgL_pairz00_2217 = BgL_argsz00_1372; }  else 
{ 
obj_t BgL_auxz00_3316;
BgL_auxz00_3316 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)9680)), BGl_string2434z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_1372); 
FAILURE(BgL_auxz00_3316,BFALSE,BFALSE);} 
{ /* Llib/dsssl.scm 288 */
obj_t BgL_pairz00_2220;
{ /* Llib/dsssl.scm 288 */
obj_t BgL_aux2232z00_2723;
BgL_aux2232z00_2723 = 
CDR(BgL_pairz00_2217); 
if(
PAIRP(BgL_aux2232z00_2723))
{ /* Llib/dsssl.scm 288 */
BgL_pairz00_2220 = BgL_aux2232z00_2723; }  else 
{ 
obj_t BgL_auxz00_3323;
BgL_auxz00_3323 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)9674)), BGl_string2434z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_aux2232z00_2723); 
FAILURE(BgL_auxz00_3323,BFALSE,BFALSE);} } 
BgL_tmpz00_3313 = 
CDR(BgL_pairz00_2220); } } 
BgL_test2605z00_3284 = 
PAIRP(BgL_tmpz00_3313); }  else 
{ /* Llib/dsssl.scm 287 */
BgL_test2605z00_3284 = ((bool_t)1)
; } } }  else 
{ /* Llib/dsssl.scm 285 */
BgL_test2605z00_3284 = ((bool_t)1)
; } 
if(BgL_test2605z00_3284)
{ /* Llib/dsssl.scm 285 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2628, ((long)3)))
{ /* Llib/dsssl.scm 289 */
return 
PROCEDURE_ENTRY(BgL_errz00_2628)(BgL_errz00_2628, BgL_wherez00_2629, BGl_string2435z00zz__dssslz00, BgL_formalsz00_2630, BEOA);}  else 
{ /* Llib/dsssl.scm 289 */
FAILURE(BGl_string2436z00zz__dssslz00,BGl_list2437z00zz__dssslz00,BgL_errz00_2628);} }  else 
{ /* Llib/dsssl.scm 290 */
obj_t BgL_arg1509z00_1423;
{ /* Llib/dsssl.scm 290 */
obj_t BgL_pairz00_2222;
if(
PAIRP(BgL_argsz00_1372))
{ /* Llib/dsssl.scm 290 */
BgL_pairz00_2222 = BgL_argsz00_1372; }  else 
{ 
obj_t BgL_auxz00_3340;
BgL_auxz00_3340 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)9779)), BGl_string2434z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_1372); 
FAILURE(BgL_auxz00_3340,BFALSE,BFALSE);} 
{ /* Llib/dsssl.scm 290 */
obj_t BgL_pairz00_2225;
{ /* Llib/dsssl.scm 290 */
obj_t BgL_aux2238z00_2730;
BgL_aux2238z00_2730 = 
CDR(BgL_pairz00_2222); 
if(
PAIRP(BgL_aux2238z00_2730))
{ /* Llib/dsssl.scm 290 */
BgL_pairz00_2225 = BgL_aux2238z00_2730; }  else 
{ 
obj_t BgL_auxz00_3347;
BgL_auxz00_3347 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)9773)), BGl_string2434z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_aux2238z00_2730); 
FAILURE(BgL_auxz00_3347,BFALSE,BFALSE);} } 
BgL_arg1509z00_1423 = 
CAR(BgL_pairz00_2225); } } 
BgL_argz00_1480 = BgL_arg1509z00_1423; 
BgL_bodyz00_1481 = BgL_bodyz00_2631; 
{ /* Llib/dsssl.scm 267 */
obj_t BgL_arg1558z00_1483;
{ /* Llib/dsssl.scm 267 */
obj_t BgL_arg1560z00_1484;obj_t BgL_arg1561z00_1485;
{ /* Llib/dsssl.scm 267 */
obj_t BgL_arg1562z00_1486;
{ /* Llib/dsssl.scm 267 */
obj_t BgL_arg1563z00_1487;
{ /* Llib/dsssl.scm 267 */
obj_t BgL_arg1564z00_1488;
{ /* Llib/dsssl.scm 267 */
obj_t BgL_arg1565z00_1489;
{ /* Llib/dsssl.scm 267 */
obj_t BgL_arg1566z00_1490;
{ /* Llib/dsssl.scm 267 */
obj_t BgL_arg1567z00_1491;
{ /* Llib/dsssl.scm 267 */
obj_t BgL_arg1568z00_1492;
BgL_arg1568z00_1492 = 
MAKE_YOUNG_PAIR(BgL_collectedzd2keyszd2_1374, BNIL); 
BgL_arg1567z00_1491 = 
MAKE_YOUNG_PAIR(BGl_symbol2407z00zz__dssslz00, BgL_arg1568z00_1492); } 
BgL_arg1566z00_1490 = 
MAKE_YOUNG_PAIR(BgL_arg1567z00_1491, BNIL); } 
BgL_arg1565z00_1489 = 
MAKE_YOUNG_PAIR(BgL_dssslzd2argzd2_1373, BgL_arg1566z00_1490); } 
BgL_arg1564z00_1488 = 
MAKE_YOUNG_PAIR(BGl_symbol2409z00zz__dssslz00, BgL_arg1565z00_1489); } 
BgL_arg1563z00_1487 = 
MAKE_YOUNG_PAIR(BgL_arg1564z00_1488, BNIL); } 
BgL_arg1562z00_1486 = 
MAKE_YOUNG_PAIR(BgL_argz00_1480, BgL_arg1563z00_1487); } 
BgL_arg1560z00_1484 = 
MAKE_YOUNG_PAIR(BgL_arg1562z00_1486, BNIL); } 
BgL_arg1561z00_1485 = 
MAKE_YOUNG_PAIR(BgL_bodyz00_1481, BNIL); 
BgL_arg1558z00_1483 = 
MAKE_YOUNG_PAIR(BgL_arg1560z00_1484, BgL_arg1561z00_1485); } 
return 
MAKE_YOUNG_PAIR(BGl_symbol2390z00zz__dssslz00, BgL_arg1558z00_1483);} } }  else 
{ /* Llib/dsssl.scm 284 */
if(
PAIRP(BgL_argsz00_1372))
{ /* Llib/dsssl.scm 293 */
bool_t BgL_test2618z00_3365;
{ /* Llib/dsssl.scm 293 */
bool_t BgL_test2619z00_3366;
{ /* Llib/dsssl.scm 293 */
obj_t BgL_tmpz00_3367;
BgL_tmpz00_3367 = 
CAR(BgL_argsz00_1372); 
BgL_test2619z00_3366 = 
SYMBOLP(BgL_tmpz00_3367); } 
if(BgL_test2619z00_3366)
{ /* Llib/dsssl.scm 293 */
BgL_test2618z00_3365 = ((bool_t)0)
; }  else 
{ /* Llib/dsssl.scm 293 */
bool_t BgL_test2620z00_3370;
{ /* Llib/dsssl.scm 293 */
obj_t BgL_tmpz00_3371;
BgL_tmpz00_3371 = 
CAR(BgL_argsz00_1372); 
BgL_test2620z00_3370 = 
PAIRP(BgL_tmpz00_3371); } 
if(BgL_test2620z00_3370)
{ /* Llib/dsssl.scm 293 */
BgL_test2618z00_3365 = ((bool_t)0)
; }  else 
{ /* Llib/dsssl.scm 293 */
BgL_test2618z00_3365 = ((bool_t)1)
; } } } 
if(BgL_test2618z00_3365)
{ /* Llib/dsssl.scm 293 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2628, ((long)3)))
{ /* Llib/dsssl.scm 294 */
return 
PROCEDURE_ENTRY(BgL_errz00_2628)(BgL_errz00_2628, BgL_wherez00_2629, BGl_string2440z00zz__dssslz00, BgL_formalsz00_2630, BEOA);}  else 
{ /* Llib/dsssl.scm 294 */
FAILURE(BGl_string2436z00zz__dssslz00,BGl_list2441z00zz__dssslz00,BgL_errz00_2628);} }  else 
{ /* Llib/dsssl.scm 297 */
obj_t BgL_ezd2162zd2_1443;
BgL_ezd2162zd2_1443 = 
CAR(BgL_argsz00_1372); 
if(
PAIRP(BgL_ezd2162zd2_1443))
{ /* Llib/dsssl.scm 297 */
obj_t BgL_carzd2167zd2_1445;obj_t BgL_cdrzd2168zd2_1446;
BgL_carzd2167zd2_1445 = 
CAR(BgL_ezd2162zd2_1443); 
BgL_cdrzd2168zd2_1446 = 
CDR(BgL_ezd2162zd2_1443); 
if(
SYMBOLP(BgL_carzd2167zd2_1445))
{ /* Llib/dsssl.scm 297 */
if(
PAIRP(BgL_cdrzd2168zd2_1446))
{ /* Llib/dsssl.scm 297 */
if(
NULLP(
CDR(BgL_cdrzd2168zd2_1446)))
{ /* Llib/dsssl.scm 297 */
BgL_argz00_1462 = BgL_carzd2167zd2_1445; 
BgL_initializa7erza7_1463 = 
CAR(BgL_cdrzd2168zd2_1446); 
BgL_collectedzd2keyszd2_1464 = BgL_collectedzd2keyszd2_1374; 
BgL_zc3z04anonymousza31535ze3z87_1465:
{ /* Llib/dsssl.scm 260 */
obj_t BgL_arg1536z00_1466;
{ /* Llib/dsssl.scm 260 */
obj_t BgL_arg1537z00_1467;obj_t BgL_arg1540z00_1468;
{ /* Llib/dsssl.scm 260 */
obj_t BgL_arg1541z00_1469;
{ /* Llib/dsssl.scm 260 */
obj_t BgL_arg1542z00_1470;
{ /* Llib/dsssl.scm 260 */
obj_t BgL_arg1544z00_1471;
{ /* Llib/dsssl.scm 260 */
obj_t BgL_arg1545z00_1472;
{ /* Llib/dsssl.scm 260 */
obj_t BgL_arg1546z00_1473;
{ /* Llib/dsssl.scm 260 */
obj_t BgL_arg1547z00_1474;obj_t BgL_arg1551z00_1475;
BgL_arg1547z00_1474 = 
BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_argz00_1462); 
BgL_arg1551z00_1475 = 
MAKE_YOUNG_PAIR(BgL_initializa7erza7_1463, BNIL); 
BgL_arg1546z00_1473 = 
MAKE_YOUNG_PAIR(BgL_arg1547z00_1474, BgL_arg1551z00_1475); } 
BgL_arg1545z00_1472 = 
MAKE_YOUNG_PAIR(BgL_dssslzd2argzd2_1373, BgL_arg1546z00_1473); } 
BgL_arg1544z00_1471 = 
MAKE_YOUNG_PAIR(BGl_symbol2411z00zz__dssslz00, BgL_arg1545z00_1472); } 
BgL_arg1542z00_1470 = 
MAKE_YOUNG_PAIR(BgL_arg1544z00_1471, BNIL); } 
BgL_arg1541z00_1469 = 
MAKE_YOUNG_PAIR(BgL_argz00_1462, BgL_arg1542z00_1470); } 
BgL_arg1537z00_1467 = 
MAKE_YOUNG_PAIR(BgL_arg1541z00_1469, BNIL); } 
{ /* Llib/dsssl.scm 261 */
obj_t BgL_arg1552z00_1476;
{ /* Llib/dsssl.scm 261 */
obj_t BgL_arg1553z00_1477;obj_t BgL_arg1554z00_1478;
{ /* Llib/dsssl.scm 261 */
obj_t BgL_pairz00_2207;
if(
PAIRP(BgL_argsz00_1372))
{ /* Llib/dsssl.scm 261 */
BgL_pairz00_2207 = BgL_argsz00_1372; }  else 
{ 
obj_t BgL_auxz00_3405;
BgL_auxz00_3405 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)8834)), BGl_string2413z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_1372); 
FAILURE(BgL_auxz00_3405,BFALSE,BFALSE);} 
BgL_arg1553z00_1477 = 
CDR(BgL_pairz00_2207); } 
BgL_arg1554z00_1478 = 
MAKE_YOUNG_PAIR(
BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_argz00_1462), BgL_collectedzd2keyszd2_1464); 
BgL_arg1552z00_1476 = 
BGl_z62keyzd2statezb0zz__dssslz00(BgL_bodyz00_2631, BgL_formalsz00_2630, BgL_wherez00_2629, BgL_errz00_2628, BgL_arg1553z00_1477, BgL_dssslzd2argzd2_1373, BgL_arg1554z00_1478, BgL_allowzd2restpzd2_1375); } 
BgL_arg1540z00_1468 = 
MAKE_YOUNG_PAIR(BgL_arg1552z00_1476, BNIL); } 
BgL_arg1536z00_1466 = 
MAKE_YOUNG_PAIR(BgL_arg1537z00_1467, BgL_arg1540z00_1468); } 
return 
MAKE_YOUNG_PAIR(BGl_symbol2390z00zz__dssslz00, BgL_arg1536z00_1466);} }  else 
{ /* Llib/dsssl.scm 297 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2628, ((long)3)))
{ /* Llib/dsssl.scm 303 */
return 
PROCEDURE_ENTRY(BgL_errz00_2628)(BgL_errz00_2628, BgL_wherez00_2629, BGl_string2440z00zz__dssslz00, BgL_formalsz00_2630, BEOA);}  else 
{ /* Llib/dsssl.scm 303 */
FAILURE(BGl_string2436z00zz__dssslz00,BGl_list2441z00zz__dssslz00,BgL_errz00_2628);} } }  else 
{ /* Llib/dsssl.scm 297 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2628, ((long)3)))
{ /* Llib/dsssl.scm 303 */
return 
PROCEDURE_ENTRY(BgL_errz00_2628)(BgL_errz00_2628, BgL_wherez00_2629, BGl_string2440z00zz__dssslz00, BgL_formalsz00_2630, BEOA);}  else 
{ /* Llib/dsssl.scm 303 */
FAILURE(BGl_string2436z00zz__dssslz00,BGl_list2441z00zz__dssslz00,BgL_errz00_2628);} } }  else 
{ /* Llib/dsssl.scm 297 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2628, ((long)3)))
{ /* Llib/dsssl.scm 303 */
return 
PROCEDURE_ENTRY(BgL_errz00_2628)(BgL_errz00_2628, BgL_wherez00_2629, BGl_string2440z00zz__dssslz00, BgL_formalsz00_2630, BEOA);}  else 
{ /* Llib/dsssl.scm 303 */
FAILURE(BGl_string2436z00zz__dssslz00,BGl_list2441z00zz__dssslz00,BgL_errz00_2628);} } }  else 
{ /* Llib/dsssl.scm 297 */
if(
SYMBOLP(BgL_ezd2162zd2_1443))
{ 
obj_t BgL_collectedzd2keyszd2_3448;obj_t BgL_initializa7erza7_3447;obj_t BgL_argz00_3446;
BgL_argz00_3446 = BgL_ezd2162zd2_1443; 
BgL_initializa7erza7_3447 = BFALSE; 
BgL_collectedzd2keyszd2_3448 = BgL_collectedzd2keyszd2_1374; 
BgL_collectedzd2keyszd2_1464 = BgL_collectedzd2keyszd2_3448; 
BgL_initializa7erza7_1463 = BgL_initializa7erza7_3447; 
BgL_argz00_1462 = BgL_argz00_3446; 
goto BgL_zc3z04anonymousza31535ze3z87_1465;}  else 
{ /* Llib/dsssl.scm 297 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2628, ((long)3)))
{ /* Llib/dsssl.scm 303 */
return 
PROCEDURE_ENTRY(BgL_errz00_2628)(BgL_errz00_2628, BgL_wherez00_2629, BGl_string2440z00zz__dssslz00, BgL_formalsz00_2630, BEOA);}  else 
{ /* Llib/dsssl.scm 303 */
FAILURE(BGl_string2436z00zz__dssslz00,BGl_list2441z00zz__dssslz00,BgL_errz00_2628);} } } } }  else 
{ /* Llib/dsssl.scm 291 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2628, ((long)3)))
{ /* Llib/dsssl.scm 292 */
return 
PROCEDURE_ENTRY(BgL_errz00_2628)(BgL_errz00_2628, BgL_wherez00_2629, BGl_string2440z00zz__dssslz00, BgL_formalsz00_2630, BEOA);}  else 
{ /* Llib/dsssl.scm 292 */
FAILURE(BGl_string2436z00zz__dssslz00,BGl_list2441z00zz__dssslz00,BgL_errz00_2628);} } } } } } 

}



/* &optional-state */
obj_t BGl_z62optionalzd2statezb0zz__dssslz00(obj_t BgL_envz00_2632, obj_t BgL_argsz00_2639, obj_t BgL_dssslzd2argzd2_2640)
{
{ /* Llib/dsssl.scm 135 */
{ /* Llib/dsssl.scm 116 */
obj_t BgL_errz00_2633;obj_t BgL_wherez00_2634;obj_t BgL_formalsz00_2635;obj_t BgL_nozd2restzd2keyzd2statezd2_2636;obj_t BgL_restzd2statezd2_2637;obj_t BgL_bodyz00_2638;
BgL_errz00_2633 = 
((obj_t)
PROCEDURE_L_REF(BgL_envz00_2632, 
(int)(((long)0)))); 
BgL_wherez00_2634 = 
PROCEDURE_L_REF(BgL_envz00_2632, 
(int)(((long)1))); 
BgL_formalsz00_2635 = 
PROCEDURE_L_REF(BgL_envz00_2632, 
(int)(((long)2))); 
BgL_nozd2restzd2keyzd2statezd2_2636 = 
((obj_t)
PROCEDURE_L_REF(BgL_envz00_2632, 
(int)(((long)3)))); 
BgL_restzd2statezd2_2637 = 
((obj_t)
PROCEDURE_L_REF(BgL_envz00_2632, 
(int)(((long)4)))); 
BgL_bodyz00_2638 = 
PROCEDURE_L_REF(BgL_envz00_2632, 
(int)(((long)5))); 
{ 
obj_t BgL_argsz00_2899;
{ /* Llib/dsssl.scm 183 */
obj_t BgL_auxz00_3482;
BgL_argsz00_2899 = BgL_argsz00_2639; 
{ 
obj_t BgL_argsz00_2901;
BgL_argsz00_2901 = BgL_argsz00_2899; 
BgL_loopz00_2900:
if(
PAIRP(BgL_argsz00_2901))
{ /* Llib/dsssl.scm 116 */
if(
(
CAR(BgL_argsz00_2901)==(BKEY)))
{ /* Llib/dsssl.scm 119 */
obj_t BgL_g1040z00_2902;
BgL_g1040z00_2902 = 
CDR(BgL_argsz00_2901); 
{ 
obj_t BgL_argsz00_2904;obj_t BgL_resz00_2905;
BgL_argsz00_2904 = BgL_g1040z00_2902; 
BgL_resz00_2905 = BNIL; 
BgL_loopz00_2903:
{ /* Llib/dsssl.scm 122 */
bool_t BgL_test2635z00_3489;
if(
PAIRP(BgL_argsz00_2904))
{ /* Llib/dsssl.scm 123 */
bool_t BgL_test2637z00_3492;
{ /* Llib/dsssl.scm 123 */
bool_t BgL_test2638z00_3493;
{ /* Llib/dsssl.scm 123 */
obj_t BgL_tmpz00_3494;
BgL_tmpz00_3494 = 
CAR(BgL_argsz00_2904); 
BgL_test2638z00_3493 = 
PAIRP(BgL_tmpz00_3494); } 
if(BgL_test2638z00_3493)
{ /* Llib/dsssl.scm 123 */
BgL_test2637z00_3492 = ((bool_t)1)
; }  else 
{ /* Llib/dsssl.scm 124 */
obj_t BgL_tmpz00_3497;
BgL_tmpz00_3497 = 
CAR(BgL_argsz00_2904); 
BgL_test2637z00_3492 = 
SYMBOLP(BgL_tmpz00_3497); } } 
if(BgL_test2637z00_3492)
{ /* Llib/dsssl.scm 123 */
if(
(
CAR(BgL_argsz00_2904)==(BOPTIONAL)))
{ /* Llib/dsssl.scm 125 */
BgL_test2635z00_3489 = ((bool_t)1)
; }  else 
{ /* Llib/dsssl.scm 125 */
BgL_test2635z00_3489 = 
(
CAR(BgL_argsz00_2904)==(BREST))
; } }  else 
{ /* Llib/dsssl.scm 123 */
BgL_test2635z00_3489 = ((bool_t)1)
; } }  else 
{ /* Llib/dsssl.scm 122 */
BgL_test2635z00_3489 = ((bool_t)1)
; } 
if(BgL_test2635z00_3489)
{ /* Llib/dsssl.scm 122 */
BgL_auxz00_3482 = BgL_resz00_2905
; }  else 
{ /* Llib/dsssl.scm 128 */
bool_t BgL_test2640z00_3505;
{ /* Llib/dsssl.scm 128 */
obj_t BgL_tmpz00_3506;
{ /* Llib/dsssl.scm 128 */
obj_t BgL_pairz00_2906;
if(
PAIRP(BgL_argsz00_2904))
{ /* Llib/dsssl.scm 128 */
BgL_pairz00_2906 = BgL_argsz00_2904; }  else 
{ 
obj_t BgL_auxz00_3509;
BgL_auxz00_3509 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)4785)), BGl_string2442z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_2904); 
FAILURE(BgL_auxz00_3509,BFALSE,BFALSE);} 
BgL_tmpz00_3506 = 
CAR(BgL_pairz00_2906); } 
BgL_test2640z00_3505 = 
SYMBOLP(BgL_tmpz00_3506); } 
if(BgL_test2640z00_3505)
{ /* Llib/dsssl.scm 129 */
obj_t BgL_arg1385z00_2907;obj_t BgL_arg1386z00_2908;
{ /* Llib/dsssl.scm 129 */
obj_t BgL_pairz00_2909;
if(
PAIRP(BgL_argsz00_2904))
{ /* Llib/dsssl.scm 129 */
BgL_pairz00_2909 = BgL_argsz00_2904; }  else 
{ 
obj_t BgL_auxz00_3517;
BgL_auxz00_3517 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)4812)), BGl_string2442z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_2904); 
FAILURE(BgL_auxz00_3517,BFALSE,BFALSE);} 
BgL_arg1385z00_2907 = 
CDR(BgL_pairz00_2909); } 
{ /* Llib/dsssl.scm 130 */
obj_t BgL_arg1387z00_2910;
{ /* Llib/dsssl.scm 130 */
obj_t BgL_arg1388z00_2911;
{ /* Llib/dsssl.scm 130 */
obj_t BgL_pairz00_2912;
if(
PAIRP(BgL_argsz00_2904))
{ /* Llib/dsssl.scm 130 */
BgL_pairz00_2912 = BgL_argsz00_2904; }  else 
{ 
obj_t BgL_auxz00_3524;
BgL_auxz00_3524 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)4854)), BGl_string2442z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_2904); 
FAILURE(BgL_auxz00_3524,BFALSE,BFALSE);} 
BgL_arg1388z00_2911 = 
CAR(BgL_pairz00_2912); } 
{ /* Llib/dsssl.scm 130 */
obj_t BgL_auxz00_3529;
if(
SYMBOLP(BgL_arg1388z00_2911))
{ /* Llib/dsssl.scm 130 */
BgL_auxz00_3529 = BgL_arg1388z00_2911
; }  else 
{ 
obj_t BgL_auxz00_3532;
BgL_auxz00_3532 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)4858)), BGl_string2442z00zz__dssslz00, BGl_string2443z00zz__dssslz00, BgL_arg1388z00_2911); 
FAILURE(BgL_auxz00_3532,BFALSE,BFALSE);} 
BgL_arg1387z00_2910 = 
BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_auxz00_3529); } } 
BgL_arg1386z00_2908 = 
MAKE_YOUNG_PAIR(BgL_arg1387z00_2910, BgL_resz00_2905); } 
{ 
obj_t BgL_resz00_3539;obj_t BgL_argsz00_3538;
BgL_argsz00_3538 = BgL_arg1385z00_2907; 
BgL_resz00_3539 = BgL_arg1386z00_2908; 
BgL_resz00_2905 = BgL_resz00_3539; 
BgL_argsz00_2904 = BgL_argsz00_3538; 
goto BgL_loopz00_2903;} }  else 
{ /* Llib/dsssl.scm 132 */
obj_t BgL_arg1389z00_2913;obj_t BgL_arg1390z00_2914;
{ /* Llib/dsssl.scm 132 */
obj_t BgL_pairz00_2915;
if(
PAIRP(BgL_argsz00_2904))
{ /* Llib/dsssl.scm 132 */
BgL_pairz00_2915 = BgL_argsz00_2904; }  else 
{ 
obj_t BgL_auxz00_3542;
BgL_auxz00_3542 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)4902)), BGl_string2442z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_2904); 
FAILURE(BgL_auxz00_3542,BFALSE,BFALSE);} 
BgL_arg1389z00_2913 = 
CDR(BgL_pairz00_2915); } 
{ /* Llib/dsssl.scm 133 */
obj_t BgL_arg1391z00_2916;
{ /* Llib/dsssl.scm 133 */
obj_t BgL_arg1392z00_2917;
{ /* Llib/dsssl.scm 133 */
obj_t BgL_pairz00_2918;
if(
PAIRP(BgL_argsz00_2904))
{ /* Llib/dsssl.scm 133 */
BgL_pairz00_2918 = BgL_argsz00_2904; }  else 
{ 
obj_t BgL_auxz00_3549;
BgL_auxz00_3549 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)4945)), BGl_string2442z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_2904); 
FAILURE(BgL_auxz00_3549,BFALSE,BFALSE);} 
{ /* Llib/dsssl.scm 133 */
obj_t BgL_pairz00_2919;
{ /* Llib/dsssl.scm 133 */
obj_t BgL_aux2264z00_2920;
BgL_aux2264z00_2920 = 
CAR(BgL_pairz00_2918); 
if(
PAIRP(BgL_aux2264z00_2920))
{ /* Llib/dsssl.scm 133 */
BgL_pairz00_2919 = BgL_aux2264z00_2920; }  else 
{ 
obj_t BgL_auxz00_3556;
BgL_auxz00_3556 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)4939)), BGl_string2442z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_aux2264z00_2920); 
FAILURE(BgL_auxz00_3556,BFALSE,BFALSE);} } 
BgL_arg1392z00_2917 = 
CAR(BgL_pairz00_2919); } } 
{ /* Llib/dsssl.scm 133 */
obj_t BgL_auxz00_3561;
if(
SYMBOLP(BgL_arg1392z00_2917))
{ /* Llib/dsssl.scm 133 */
BgL_auxz00_3561 = BgL_arg1392z00_2917
; }  else 
{ 
obj_t BgL_auxz00_3564;
BgL_auxz00_3564 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)4949)), BGl_string2442z00zz__dssslz00, BGl_string2443z00zz__dssslz00, BgL_arg1392z00_2917); 
FAILURE(BgL_auxz00_3564,BFALSE,BFALSE);} 
BgL_arg1391z00_2916 = 
BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_auxz00_3561); } } 
BgL_arg1390z00_2914 = 
MAKE_YOUNG_PAIR(BgL_arg1391z00_2916, BgL_resz00_2905); } 
{ 
obj_t BgL_resz00_3571;obj_t BgL_argsz00_3570;
BgL_argsz00_3570 = BgL_arg1389z00_2913; 
BgL_resz00_3571 = BgL_arg1390z00_2914; 
BgL_resz00_2905 = BgL_resz00_3571; 
BgL_argsz00_2904 = BgL_argsz00_3570; 
goto BgL_loopz00_2903;} } } } } }  else 
{ 
obj_t BgL_argsz00_3572;
BgL_argsz00_3572 = 
CDR(BgL_argsz00_2901); 
BgL_argsz00_2901 = BgL_argsz00_3572; 
goto BgL_loopz00_2900;} }  else 
{ /* Llib/dsssl.scm 116 */
BgL_auxz00_3482 = BNIL
; } } 
return 
BGl_optionalzd2argsze70z35zz__dssslz00(BgL_bodyz00_2638, BgL_restzd2statezd2_2637, BgL_nozd2restzd2keyzd2statezd2_2636, BgL_formalsz00_2635, BgL_wherez00_2634, BgL_errz00_2633, BgL_auxz00_3482, BgL_dssslzd2argzd2_2640, BgL_argsz00_2639);} } } } 

}



/* optional-args~0 */
obj_t BGl_optionalzd2argsze70z35zz__dssslz00(obj_t BgL_bodyz00_2683, obj_t BgL_restzd2statezd2_2682, obj_t BgL_nozd2restzd2keyzd2statezd2_2681, obj_t BgL_formalsz00_2680, obj_t BgL_wherez00_2679, obj_t BgL_errz00_2678, obj_t BgL_keywordzd2argumentszd2_2677, obj_t BgL_dssslzd2argzd2_2676, obj_t BgL_argsz00_1177)
{
{ /* Llib/dsssl.scm 181 */
{ 
obj_t BgL_argz00_1133;obj_t BgL_initializa7erza7_1134;obj_t BgL_restz00_1135;
if(
NULLP(BgL_argsz00_1177))
{ /* Llib/dsssl.scm 159 */
return BgL_bodyz00_2683;}  else 
{ /* Llib/dsssl.scm 159 */
if(
PAIRP(BgL_argsz00_1177))
{ /* Llib/dsssl.scm 163 */
bool_t BgL_test2651z00_3579;
{ /* Llib/dsssl.scm 163 */
bool_t BgL_test2652z00_3580;
{ /* Llib/dsssl.scm 163 */
obj_t BgL_tmpz00_3581;
BgL_tmpz00_3581 = 
CAR(BgL_argsz00_1177); 
BgL_test2652z00_3580 = 
SYMBOLP(BgL_tmpz00_3581); } 
if(BgL_test2652z00_3580)
{ /* Llib/dsssl.scm 163 */
BgL_test2651z00_3579 = ((bool_t)0)
; }  else 
{ /* Llib/dsssl.scm 163 */
bool_t BgL_test2653z00_3584;
{ /* Llib/dsssl.scm 163 */
obj_t BgL_tmpz00_3585;
BgL_tmpz00_3585 = 
CAR(BgL_argsz00_1177); 
BgL_test2653z00_3584 = 
PAIRP(BgL_tmpz00_3585); } 
if(BgL_test2653z00_3584)
{ /* Llib/dsssl.scm 163 */
BgL_test2651z00_3579 = ((bool_t)0)
; }  else 
{ /* Llib/dsssl.scm 163 */
BgL_test2651z00_3579 = ((bool_t)1)
; } } } 
if(BgL_test2651z00_3579)
{ /* Llib/dsssl.scm 163 */
if(
(
CAR(BgL_argsz00_1177)==(BREST)))
{ /* Llib/dsssl.scm 167 */
return 
BGl_z62restzd2statezb0zz__dssslz00(BgL_restzd2statezd2_2682, 
CDR(BgL_argsz00_1177), BgL_dssslzd2argzd2_2676);}  else 
{ /* Llib/dsssl.scm 167 */
if(
(
CAR(BgL_argsz00_1177)==(BKEY)))
{ /* Llib/dsssl.scm 169 */
return 
BGl_z62nozd2restzd2keyzd2statezb0zz__dssslz00(BgL_nozd2restzd2keyzd2statezd2_2681, 
CDR(BgL_argsz00_1177), BgL_dssslzd2argzd2_2676);}  else 
{ /* Llib/dsssl.scm 169 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2678, ((long)3)))
{ /* Llib/dsssl.scm 172 */
return 
PROCEDURE_ENTRY(BgL_errz00_2678)(BgL_errz00_2678, BgL_wherez00_2679, BGl_string2456z00zz__dssslz00, BgL_formalsz00_2680, BEOA);}  else 
{ /* Llib/dsssl.scm 172 */
FAILURE(BGl_string2457z00zz__dssslz00,BGl_list2458z00zz__dssslz00,BgL_errz00_2678);} } } }  else 
{ /* Llib/dsssl.scm 175 */
obj_t BgL_ezd2112zd2_1202;
BgL_ezd2112zd2_1202 = 
CAR(BgL_argsz00_1177); 
if(
PAIRP(BgL_ezd2112zd2_1202))
{ /* Llib/dsssl.scm 175 */
obj_t BgL_carzd2117zd2_1204;obj_t BgL_cdrzd2118zd2_1205;
BgL_carzd2117zd2_1204 = 
CAR(BgL_ezd2112zd2_1202); 
BgL_cdrzd2118zd2_1205 = 
CDR(BgL_ezd2112zd2_1202); 
if(
SYMBOLP(BgL_carzd2117zd2_1204))
{ /* Llib/dsssl.scm 175 */
if(
PAIRP(BgL_cdrzd2118zd2_1205))
{ /* Llib/dsssl.scm 175 */
if(
NULLP(
CDR(BgL_cdrzd2118zd2_1205)))
{ /* Llib/dsssl.scm 175 */
BgL_argz00_1133 = BgL_carzd2117zd2_1204; 
BgL_initializa7erza7_1134 = 
CAR(BgL_cdrzd2118zd2_1205); 
BgL_restz00_1135 = 
CDR(BgL_argsz00_1177); 
BgL_zc3z04anonymousza31283ze3z87_1136:
{ /* Llib/dsssl.scm 140 */
obj_t BgL_tmpz00_1137;
BgL_tmpz00_1137 = 
BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol2444z00zz__dssslz00); 
{ /* Llib/dsssl.scm 141 */
obj_t BgL_arg1284z00_1138;
{ /* Llib/dsssl.scm 141 */
obj_t BgL_arg1285z00_1139;obj_t BgL_arg1286z00_1140;
{ /* Llib/dsssl.scm 141 */
obj_t BgL_arg1287z00_1141;
{ /* Llib/dsssl.scm 141 */
obj_t BgL_arg1288z00_1142;
{ /* Llib/dsssl.scm 141 */
obj_t BgL_arg1289z00_1143;
{ /* Llib/dsssl.scm 141 */
obj_t BgL_arg1290z00_1144;
{ /* Llib/dsssl.scm 141 */
obj_t BgL_arg1291z00_1145;obj_t BgL_arg1292z00_1146;
{ /* Llib/dsssl.scm 141 */
obj_t BgL_arg1295z00_1147;
{ /* Llib/dsssl.scm 141 */
obj_t BgL_arg1296z00_1148;obj_t BgL_arg1297z00_1149;
{ /* Llib/dsssl.scm 141 */
obj_t BgL_arg1298z00_1150;
BgL_arg1298z00_1150 = 
MAKE_YOUNG_PAIR(BgL_dssslzd2argzd2_2676, BNIL); 
BgL_arg1296z00_1148 = 
MAKE_YOUNG_PAIR(BGl_symbol2414z00zz__dssslz00, BgL_arg1298z00_1150); } 
{ /* Llib/dsssl.scm 143 */
obj_t BgL_arg1299z00_1151;
{ /* Llib/dsssl.scm 143 */
obj_t BgL_arg1300z00_1152;
{ /* Llib/dsssl.scm 143 */
obj_t BgL_arg1301z00_1153;
{ /* Llib/dsssl.scm 143 */
obj_t BgL_arg1302z00_1154;obj_t BgL_arg1303z00_1155;
{ /* Llib/dsssl.scm 143 */
obj_t BgL_arg1304z00_1156;
BgL_arg1304z00_1156 = 
MAKE_YOUNG_PAIR(BgL_dssslzd2argzd2_2676, BNIL); 
BgL_arg1302z00_1154 = 
MAKE_YOUNG_PAIR(BGl_symbol2446z00zz__dssslz00, BgL_arg1304z00_1156); } 
{ /* Llib/dsssl.scm 143 */
obj_t BgL_arg1306z00_1157;
{ /* Llib/dsssl.scm 143 */
obj_t BgL_arg1307z00_1158;
BgL_arg1307z00_1158 = 
MAKE_YOUNG_PAIR(BgL_keywordzd2argumentszd2_2677, BNIL); 
BgL_arg1306z00_1157 = 
MAKE_YOUNG_PAIR(BGl_symbol2407z00zz__dssslz00, BgL_arg1307z00_1158); } 
BgL_arg1303z00_1155 = 
MAKE_YOUNG_PAIR(BgL_arg1306z00_1157, BNIL); } 
BgL_arg1301z00_1153 = 
MAKE_YOUNG_PAIR(BgL_arg1302z00_1154, BgL_arg1303z00_1155); } 
BgL_arg1300z00_1152 = 
MAKE_YOUNG_PAIR(BGl_symbol2448z00zz__dssslz00, BgL_arg1301z00_1153); } 
BgL_arg1299z00_1151 = 
MAKE_YOUNG_PAIR(BgL_arg1300z00_1152, BNIL); } 
BgL_arg1297z00_1149 = 
MAKE_YOUNG_PAIR(BTRUE, BgL_arg1299z00_1151); } 
BgL_arg1295z00_1147 = 
MAKE_YOUNG_PAIR(BgL_arg1296z00_1148, BgL_arg1297z00_1149); } 
BgL_arg1291z00_1145 = 
MAKE_YOUNG_PAIR(BGl_symbol2432z00zz__dssslz00, BgL_arg1295z00_1147); } 
{ /* Llib/dsssl.scm 145 */
obj_t BgL_arg1308z00_1159;
{ /* Llib/dsssl.scm 145 */
obj_t BgL_arg1309z00_1160;
{ /* Llib/dsssl.scm 145 */
obj_t BgL_arg1310z00_1161;
{ /* Llib/dsssl.scm 145 */
obj_t BgL_arg1311z00_1162;obj_t BgL_arg1312z00_1163;
{ /* Llib/dsssl.scm 145 */
obj_t BgL_arg1313z00_1164;
{ /* Llib/dsssl.scm 145 */
obj_t BgL_arg1314z00_1165;
{ /* Llib/dsssl.scm 145 */
obj_t BgL_arg1315z00_1166;
{ /* Llib/dsssl.scm 145 */
obj_t BgL_arg1316z00_1167;
BgL_arg1316z00_1167 = 
MAKE_YOUNG_PAIR(BgL_dssslzd2argzd2_2676, BNIL); 
BgL_arg1315z00_1166 = 
MAKE_YOUNG_PAIR(BGl_symbol2446z00zz__dssslz00, BgL_arg1316z00_1167); } 
BgL_arg1314z00_1165 = 
MAKE_YOUNG_PAIR(BgL_arg1315z00_1166, BNIL); } 
BgL_arg1313z00_1164 = 
MAKE_YOUNG_PAIR(BgL_tmpz00_1137, BgL_arg1314z00_1165); } 
BgL_arg1311z00_1162 = 
MAKE_YOUNG_PAIR(BgL_arg1313z00_1164, BNIL); } 
{ /* Llib/dsssl.scm 153 */
obj_t BgL_arg1317z00_1168;
{ /* Llib/dsssl.scm 153 */
obj_t BgL_arg1318z00_1169;
{ /* Llib/dsssl.scm 153 */
obj_t BgL_arg1319z00_1170;obj_t BgL_arg1322z00_1171;
{ /* Llib/dsssl.scm 153 */
obj_t BgL_arg1324z00_1172;
{ /* Llib/dsssl.scm 153 */
obj_t BgL_arg1325z00_1173;
{ /* Llib/dsssl.scm 153 */
obj_t BgL_arg1326z00_1174;
{ /* Llib/dsssl.scm 153 */
obj_t BgL_arg1327z00_1175;
BgL_arg1327z00_1175 = 
MAKE_YOUNG_PAIR(BgL_dssslzd2argzd2_2676, BNIL); 
BgL_arg1326z00_1174 = 
MAKE_YOUNG_PAIR(BGl_symbol2450z00zz__dssslz00, BgL_arg1327z00_1175); } 
BgL_arg1325z00_1173 = 
MAKE_YOUNG_PAIR(BgL_arg1326z00_1174, BNIL); } 
BgL_arg1324z00_1172 = 
MAKE_YOUNG_PAIR(BgL_dssslzd2argzd2_2676, BgL_arg1325z00_1173); } 
BgL_arg1319z00_1170 = 
MAKE_YOUNG_PAIR(BGl_symbol2452z00zz__dssslz00, BgL_arg1324z00_1172); } 
BgL_arg1322z00_1171 = 
MAKE_YOUNG_PAIR(BgL_tmpz00_1137, BNIL); 
BgL_arg1318z00_1169 = 
MAKE_YOUNG_PAIR(BgL_arg1319z00_1170, BgL_arg1322z00_1171); } 
BgL_arg1317z00_1168 = 
MAKE_YOUNG_PAIR(BGl_symbol2454z00zz__dssslz00, BgL_arg1318z00_1169); } 
BgL_arg1312z00_1163 = 
MAKE_YOUNG_PAIR(BgL_arg1317z00_1168, BNIL); } 
BgL_arg1310z00_1161 = 
MAKE_YOUNG_PAIR(BgL_arg1311z00_1162, BgL_arg1312z00_1163); } 
BgL_arg1309z00_1160 = 
MAKE_YOUNG_PAIR(BGl_symbol2390z00zz__dssslz00, BgL_arg1310z00_1161); } 
BgL_arg1308z00_1159 = 
MAKE_YOUNG_PAIR(BgL_arg1309z00_1160, BNIL); } 
BgL_arg1292z00_1146 = 
MAKE_YOUNG_PAIR(BgL_initializa7erza7_1134, BgL_arg1308z00_1159); } 
BgL_arg1290z00_1144 = 
MAKE_YOUNG_PAIR(BgL_arg1291z00_1145, BgL_arg1292z00_1146); } 
BgL_arg1289z00_1143 = 
MAKE_YOUNG_PAIR(BGl_symbol2432z00zz__dssslz00, BgL_arg1290z00_1144); } 
BgL_arg1288z00_1142 = 
MAKE_YOUNG_PAIR(BgL_arg1289z00_1143, BNIL); } 
BgL_arg1287z00_1141 = 
MAKE_YOUNG_PAIR(BgL_argz00_1133, BgL_arg1288z00_1142); } 
BgL_arg1285z00_1139 = 
MAKE_YOUNG_PAIR(BgL_arg1287z00_1141, BNIL); } 
BgL_arg1286z00_1140 = 
MAKE_YOUNG_PAIR(
BGl_optionalzd2argsze70z35zz__dssslz00(BgL_bodyz00_2683, BgL_restzd2statezd2_2682, BgL_nozd2restzd2keyzd2statezd2_2681, BgL_formalsz00_2680, BgL_wherez00_2679, BgL_errz00_2678, BgL_keywordzd2argumentszd2_2677, BgL_dssslzd2argzd2_2676, BgL_restz00_1135), BNIL); 
BgL_arg1284z00_1138 = 
MAKE_YOUNG_PAIR(BgL_arg1285z00_1139, BgL_arg1286z00_1140); } 
return 
MAKE_YOUNG_PAIR(BGl_symbol2390z00zz__dssslz00, BgL_arg1284z00_1138);} } }  else 
{ /* Llib/dsssl.scm 175 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2678, ((long)3)))
{ /* Llib/dsssl.scm 181 */
return 
PROCEDURE_ENTRY(BgL_errz00_2678)(BgL_errz00_2678, BgL_wherez00_2679, BGl_string2456z00zz__dssslz00, BgL_formalsz00_2680, BEOA);}  else 
{ /* Llib/dsssl.scm 181 */
FAILURE(BGl_string2457z00zz__dssslz00,BGl_list2458z00zz__dssslz00,BgL_errz00_2678);} } }  else 
{ /* Llib/dsssl.scm 175 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2678, ((long)3)))
{ /* Llib/dsssl.scm 181 */
return 
PROCEDURE_ENTRY(BgL_errz00_2678)(BgL_errz00_2678, BgL_wherez00_2679, BGl_string2456z00zz__dssslz00, BgL_formalsz00_2680, BEOA);}  else 
{ /* Llib/dsssl.scm 181 */
FAILURE(BGl_string2457z00zz__dssslz00,BGl_list2458z00zz__dssslz00,BgL_errz00_2678);} } }  else 
{ /* Llib/dsssl.scm 175 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2678, ((long)3)))
{ /* Llib/dsssl.scm 181 */
return 
PROCEDURE_ENTRY(BgL_errz00_2678)(BgL_errz00_2678, BgL_wherez00_2679, BGl_string2456z00zz__dssslz00, BgL_formalsz00_2680, BEOA);}  else 
{ /* Llib/dsssl.scm 181 */
FAILURE(BGl_string2457z00zz__dssslz00,BGl_list2458z00zz__dssslz00,BgL_errz00_2678);} } }  else 
{ /* Llib/dsssl.scm 175 */
if(
SYMBOLP(BgL_ezd2112zd2_1202))
{ 
obj_t BgL_restz00_3693;obj_t BgL_initializa7erza7_3692;obj_t BgL_argz00_3691;
BgL_argz00_3691 = BgL_ezd2112zd2_1202; 
BgL_initializa7erza7_3692 = BFALSE; 
BgL_restz00_3693 = 
CDR(BgL_argsz00_1177); 
BgL_restz00_1135 = BgL_restz00_3693; 
BgL_initializa7erza7_1134 = BgL_initializa7erza7_3692; 
BgL_argz00_1133 = BgL_argz00_3691; 
goto BgL_zc3z04anonymousza31283ze3z87_1136;}  else 
{ /* Llib/dsssl.scm 175 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2678, ((long)3)))
{ /* Llib/dsssl.scm 181 */
return 
PROCEDURE_ENTRY(BgL_errz00_2678)(BgL_errz00_2678, BgL_wherez00_2679, BGl_string2456z00zz__dssslz00, BgL_formalsz00_2680, BEOA);}  else 
{ /* Llib/dsssl.scm 181 */
FAILURE(BGl_string2457z00zz__dssslz00,BGl_list2458z00zz__dssslz00,BgL_errz00_2678);} } } } }  else 
{ /* Llib/dsssl.scm 161 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2678, ((long)3)))
{ /* Llib/dsssl.scm 162 */
return 
PROCEDURE_ENTRY(BgL_errz00_2678)(BgL_errz00_2678, BgL_wherez00_2679, BGl_string2456z00zz__dssslz00, BgL_formalsz00_2680, BEOA);}  else 
{ /* Llib/dsssl.scm 162 */
FAILURE(BGl_string2457z00zz__dssslz00,BGl_list2458z00zz__dssslz00,BgL_errz00_2678);} } } } } 

}



/* &rest-state */
obj_t BGl_z62restzd2statezb0zz__dssslz00(obj_t BgL_envz00_2641, obj_t BgL_argsz00_2646, obj_t BgL_dssslzd2argzd2_2647)
{
{ /* Llib/dsssl.scm 193 */
{ /* Llib/dsssl.scm 187 */
obj_t BgL_errz00_2642;obj_t BgL_wherez00_2643;obj_t BgL_formalsz00_2644;obj_t BgL_bodyz00_2645;
BgL_errz00_2642 = 
((obj_t)
PROCEDURE_L_REF(BgL_envz00_2641, 
(int)(((long)0)))); 
BgL_wherez00_2643 = 
PROCEDURE_L_REF(BgL_envz00_2641, 
(int)(((long)1))); 
BgL_formalsz00_2644 = 
PROCEDURE_L_REF(BgL_envz00_2641, 
(int)(((long)2))); 
BgL_bodyz00_2645 = 
PROCEDURE_L_REF(BgL_envz00_2641, 
(int)(((long)3))); 
{ 
obj_t BgL_argsz00_2939;obj_t BgL_dssslzd2argzd2_2940;obj_t BgL_argsz00_2924;obj_t BgL_dssslzd2argzd2_2925;
if(
PAIRP(BgL_argsz00_2646))
{ /* Llib/dsssl.scm 189 */
bool_t BgL_test2668z00_3724;
{ /* Llib/dsssl.scm 189 */
obj_t BgL_tmpz00_3725;
BgL_tmpz00_3725 = 
CAR(BgL_argsz00_2646); 
BgL_test2668z00_3724 = 
SYMBOLP(BgL_tmpz00_3725); } 
if(BgL_test2668z00_3724)
{ /* Llib/dsssl.scm 192 */
obj_t BgL_arg1404z00_2941;
{ /* Llib/dsssl.scm 192 */
obj_t BgL_arg1405z00_2942;obj_t BgL_arg1406z00_2943;
{ /* Llib/dsssl.scm 192 */
obj_t BgL_arg1407z00_2944;
{ /* Llib/dsssl.scm 192 */
obj_t BgL_arg1409z00_2945;obj_t BgL_arg1410z00_2946;
BgL_arg1409z00_2945 = 
CAR(BgL_argsz00_2646); 
BgL_arg1410z00_2946 = 
MAKE_YOUNG_PAIR(BgL_dssslzd2argzd2_2647, BNIL); 
BgL_arg1407z00_2944 = 
MAKE_YOUNG_PAIR(BgL_arg1409z00_2945, BgL_arg1410z00_2946); } 
BgL_arg1405z00_2942 = 
MAKE_YOUNG_PAIR(BgL_arg1407z00_2944, BNIL); } 
{ /* Llib/dsssl.scm 192 */
obj_t BgL_tmpz00_3732;
BgL_argsz00_2939 = 
CDR(BgL_argsz00_2646); 
BgL_dssslzd2argzd2_2940 = BgL_dssslzd2argzd2_2647; 
if(
NULLP(BgL_argsz00_2939))
{ /* Llib/dsssl.scm 197 */
BgL_tmpz00_3732 = BgL_bodyz00_2645
; }  else 
{ /* Llib/dsssl.scm 197 */
if(
PAIRP(BgL_argsz00_2939))
{ /* Llib/dsssl.scm 199 */
if(
(
CAR(BgL_argsz00_2939)==(BKEY)))
{ /* Llib/dsssl.scm 201 */
BgL_argsz00_2924 = 
CDR(BgL_argsz00_2939); 
BgL_dssslzd2argzd2_2925 = BgL_dssslzd2argzd2_2940; 
{ 
obj_t BgL_argsz00_2927;
if(
NULLP(BgL_argsz00_2924))
{ /* Llib/dsssl.scm 220 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2642, ((long)3)))
{ /* Llib/dsssl.scm 221 */
BgL_tmpz00_3732 = 
PROCEDURE_ENTRY(BgL_errz00_2642)(BgL_errz00_2642, BgL_wherez00_2643, BGl_string2440z00zz__dssslz00, BgL_formalsz00_2644, BEOA)
; }  else 
{ /* Llib/dsssl.scm 221 */
FAILURE(BGl_string2464z00zz__dssslz00,BGl_list2441z00zz__dssslz00,BgL_errz00_2642);} }  else 
{ /* Llib/dsssl.scm 223 */
obj_t BgL_keysz00_2938;
BgL_argsz00_2927 = BgL_argsz00_2924; 
if(
NULLP(BgL_argsz00_2927))
{ /* Llib/dsssl.scm 209 */
BgL_keysz00_2938 = BNIL; }  else 
{ /* Llib/dsssl.scm 209 */
obj_t BgL_head1076z00_2928;
{ /* Llib/dsssl.scm 209 */
obj_t BgL_res2077z00_2929;
BgL_res2077z00_2929 = 
MAKE_YOUNG_PAIR(BNIL, BNIL); 
BgL_head1076z00_2928 = BgL_res2077z00_2929; } 
{ 
obj_t BgL_l1074z00_2931;obj_t BgL_tail1077z00_2932;
BgL_l1074z00_2931 = BgL_argsz00_2927; 
BgL_tail1077z00_2932 = BgL_head1076z00_2928; 
BgL_zc3z04anonymousza31426ze3z87_2930:
if(
PAIRP(BgL_l1074z00_2931))
{ /* Llib/dsssl.scm 209 */
obj_t BgL_newtail1078z00_2933;
{ /* Llib/dsssl.scm 209 */
obj_t BgL_arg1429z00_2934;
{ /* Llib/dsssl.scm 209 */
obj_t BgL_xz00_2935;
BgL_xz00_2935 = 
CAR(BgL_l1074z00_2931); 
{ /* Llib/dsssl.scm 211 */
bool_t BgL_test2676z00_3757;
if(
PAIRP(BgL_xz00_2935))
{ /* Llib/dsssl.scm 211 */
obj_t BgL_tmpz00_3760;
BgL_tmpz00_3760 = 
CAR(BgL_xz00_2935); 
BgL_test2676z00_3757 = 
SYMBOLP(BgL_tmpz00_3760); }  else 
{ /* Llib/dsssl.scm 211 */
BgL_test2676z00_3757 = ((bool_t)0)
; } 
if(BgL_test2676z00_3757)
{ /* Llib/dsssl.scm 212 */
obj_t BgL_arg1433z00_2936;
BgL_arg1433z00_2936 = 
CAR(BgL_xz00_2935); 
{ /* Llib/dsssl.scm 212 */
obj_t BgL_auxz00_3764;
if(
SYMBOLP(BgL_arg1433z00_2936))
{ /* Llib/dsssl.scm 212 */
BgL_auxz00_3764 = BgL_arg1433z00_2936
; }  else 
{ 
obj_t BgL_auxz00_3767;
BgL_auxz00_3767 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)7368)), BGl_string2459z00zz__dssslz00, BGl_string2443z00zz__dssslz00, BgL_arg1433z00_2936); 
FAILURE(BgL_auxz00_3767,BFALSE,BFALSE);} 
BgL_arg1429z00_2934 = 
BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_auxz00_3764); } }  else 
{ /* Llib/dsssl.scm 211 */
if(
SYMBOLP(BgL_xz00_2935))
{ /* Llib/dsssl.scm 213 */
BgL_arg1429z00_2934 = 
BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_xz00_2935); }  else 
{ /* Llib/dsssl.scm 213 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2642, ((long)3)))
{ /* Llib/dsssl.scm 216 */
BgL_arg1429z00_2934 = 
PROCEDURE_ENTRY(BgL_errz00_2642)(BgL_errz00_2642, BgL_wherez00_2643, BGl_string2460z00zz__dssslz00, BgL_formalsz00_2644, BEOA); }  else 
{ /* Llib/dsssl.scm 216 */
FAILURE(BGl_string2461z00zz__dssslz00,BGl_list2462z00zz__dssslz00,BgL_errz00_2642);} } } } } 
{ /* Llib/dsssl.scm 209 */
obj_t BgL_res2082z00_2937;
BgL_res2082z00_2937 = 
MAKE_YOUNG_PAIR(BgL_arg1429z00_2934, BNIL); 
BgL_newtail1078z00_2933 = BgL_res2082z00_2937; } } 
SET_CDR(BgL_tail1077z00_2932, BgL_newtail1078z00_2933); 
{ 
obj_t BgL_tail1077z00_3788;obj_t BgL_l1074z00_3786;
BgL_l1074z00_3786 = 
CDR(BgL_l1074z00_2931); 
BgL_tail1077z00_3788 = BgL_newtail1078z00_2933; 
BgL_tail1077z00_2932 = BgL_tail1077z00_3788; 
BgL_l1074z00_2931 = BgL_l1074z00_3786; 
goto BgL_zc3z04anonymousza31426ze3z87_2930;} }  else 
{ /* Llib/dsssl.scm 209 */
if(
NULLP(BgL_l1074z00_2931))
{ /* Llib/dsssl.scm 209 */
BgL_keysz00_2938 = 
CDR(BgL_head1076z00_2928); }  else 
{ /* Llib/dsssl.scm 209 */
BgL_keysz00_2938 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string2424z00zz__dssslz00, BGl_string2463z00zz__dssslz00, BgL_l1074z00_2931, BGl_string2392z00zz__dssslz00, 
BINT(((long)7271))); } } } } 
if(
NULLP(BgL_keysz00_2938))
{ /* Llib/dsssl.scm 224 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2642, ((long)3)))
{ /* Llib/dsssl.scm 225 */
BgL_tmpz00_3732 = 
PROCEDURE_ENTRY(BgL_errz00_2642)(BgL_errz00_2642, BgL_wherez00_2643, BGl_string2440z00zz__dssslz00, BgL_formalsz00_2644, BEOA)
; }  else 
{ /* Llib/dsssl.scm 225 */
FAILURE(BGl_string2464z00zz__dssslz00,BGl_list2441z00zz__dssslz00,BgL_errz00_2642);} }  else 
{ /* Llib/dsssl.scm 224 */
BgL_tmpz00_3732 = 
BGl_z62keyzd2statezb0zz__dssslz00(BgL_bodyz00_2645, BgL_formalsz00_2644, BgL_wherez00_2643, BgL_errz00_2642, BgL_argsz00_2924, BgL_dssslzd2argzd2_2925, BNIL, ((bool_t)0))
; } } } }  else 
{ /* Llib/dsssl.scm 201 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2642, ((long)3)))
{ /* Llib/dsssl.scm 204 */
BgL_tmpz00_3732 = 
PROCEDURE_ENTRY(BgL_errz00_2642)(BgL_errz00_2642, BgL_wherez00_2643, BGl_string2435z00zz__dssslz00, BgL_formalsz00_2644, BEOA)
; }  else 
{ /* Llib/dsssl.scm 204 */
FAILURE(BGl_string2465z00zz__dssslz00,BGl_list2437z00zz__dssslz00,BgL_errz00_2642);} } }  else 
{ /* Llib/dsssl.scm 199 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2642, ((long)3)))
{ /* Llib/dsssl.scm 200 */
BgL_tmpz00_3732 = 
PROCEDURE_ENTRY(BgL_errz00_2642)(BgL_errz00_2642, BgL_wherez00_2643, BGl_string2435z00zz__dssslz00, BgL_formalsz00_2644, BEOA)
; }  else 
{ /* Llib/dsssl.scm 200 */
FAILURE(BGl_string2465z00zz__dssslz00,BGl_list2437z00zz__dssslz00,BgL_errz00_2642);} } } 
BgL_arg1406z00_2943 = 
MAKE_YOUNG_PAIR(BgL_tmpz00_3732, BNIL); } 
BgL_arg1404z00_2941 = 
MAKE_YOUNG_PAIR(BgL_arg1405z00_2942, BgL_arg1406z00_2943); } 
return 
MAKE_YOUNG_PAIR(BGl_symbol2390z00zz__dssslz00, BgL_arg1404z00_2941);}  else 
{ /* Llib/dsssl.scm 189 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2642, ((long)3)))
{ /* Llib/dsssl.scm 190 */
return 
PROCEDURE_ENTRY(BgL_errz00_2642)(BgL_errz00_2642, BgL_wherez00_2643, BGl_string2435z00zz__dssslz00, BgL_formalsz00_2644, BEOA);}  else 
{ /* Llib/dsssl.scm 190 */
FAILURE(BGl_string2466z00zz__dssslz00,BGl_list2437z00zz__dssslz00,BgL_errz00_2642);} } }  else 
{ /* Llib/dsssl.scm 187 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2642, ((long)3)))
{ /* Llib/dsssl.scm 188 */
return 
PROCEDURE_ENTRY(BgL_errz00_2642)(BgL_errz00_2642, BgL_wherez00_2643, BGl_string2435z00zz__dssslz00, BgL_formalsz00_2644, BEOA);}  else 
{ /* Llib/dsssl.scm 188 */
FAILURE(BGl_string2466z00zz__dssslz00,BGl_list2437z00zz__dssslz00,BgL_errz00_2642);} } } } } 

}



/* &no-rest-key-state */
obj_t BGl_z62nozd2restzd2keyzd2statezb0zz__dssslz00(obj_t BgL_envz00_2648, obj_t BgL_argsz00_2653, obj_t BgL_dssslzd2argzd2_2654)
{
{ /* Llib/dsssl.scm 245 */
{ /* Llib/dsssl.scm 231 */
obj_t BgL_bodyz00_2649;obj_t BgL_errz00_2650;obj_t BgL_wherez00_2651;obj_t BgL_formalsz00_2652;
BgL_bodyz00_2649 = 
PROCEDURE_L_REF(BgL_envz00_2648, 
(int)(((long)0))); 
BgL_errz00_2650 = 
((obj_t)
PROCEDURE_L_REF(BgL_envz00_2648, 
(int)(((long)1)))); 
BgL_wherez00_2651 = 
PROCEDURE_L_REF(BgL_envz00_2648, 
(int)(((long)2))); 
BgL_formalsz00_2652 = 
PROCEDURE_L_REF(BgL_envz00_2648, 
(int)(((long)3))); 
{ 
obj_t BgL_argsz00_2949;
if(
NULLP(BgL_argsz00_2653))
{ /* Llib/dsssl.scm 248 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2650, ((long)3)))
{ /* Llib/dsssl.scm 249 */
return 
PROCEDURE_ENTRY(BgL_errz00_2650)(BgL_errz00_2650, BgL_wherez00_2651, BGl_string2440z00zz__dssslz00, BgL_formalsz00_2652, BEOA);}  else 
{ /* Llib/dsssl.scm 249 */
FAILURE(BGl_string2467z00zz__dssslz00,BGl_list2441z00zz__dssslz00,BgL_errz00_2650);} }  else 
{ /* Llib/dsssl.scm 251 */
obj_t BgL_keysz00_2964;
BgL_argsz00_2949 = BgL_argsz00_2653; 
{ 
obj_t BgL_argsz00_2951;obj_t BgL_auxz00_2952;
BgL_argsz00_2951 = BgL_argsz00_2949; 
BgL_auxz00_2952 = BNIL; 
BgL_loopz00_2950:
if(
NULLP(BgL_argsz00_2951))
{ /* Llib/dsssl.scm 234 */
BgL_keysz00_2964 = 
bgl_reverse_bang(BgL_auxz00_2952); }  else 
{ /* Llib/dsssl.scm 236 */
bool_t BgL_test2691z00_3870;
{ /* Llib/dsssl.scm 236 */
obj_t BgL_tmpz00_3871;
{ /* Llib/dsssl.scm 236 */
obj_t BgL_pairz00_2953;
if(
PAIRP(BgL_argsz00_2951))
{ /* Llib/dsssl.scm 236 */
BgL_pairz00_2953 = BgL_argsz00_2951; }  else 
{ 
obj_t BgL_auxz00_3874;
BgL_auxz00_3874 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)7986)), BGl_string2442z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_2951); 
FAILURE(BgL_auxz00_3874,BFALSE,BFALSE);} 
BgL_tmpz00_3871 = 
CAR(BgL_pairz00_2953); } 
BgL_test2691z00_3870 = 
(BgL_tmpz00_3871==(BREST)); } 
if(BgL_test2691z00_3870)
{ /* Llib/dsssl.scm 236 */
BgL_keysz00_2964 = 
bgl_reverse_bang(BgL_auxz00_2952); }  else 
{ /* Llib/dsssl.scm 239 */
obj_t BgL_ezd2145zd2_2954;
{ /* Llib/dsssl.scm 239 */
obj_t BgL_pairz00_2955;
if(
PAIRP(BgL_argsz00_2951))
{ /* Llib/dsssl.scm 239 */
BgL_pairz00_2955 = BgL_argsz00_2951; }  else 
{ 
obj_t BgL_auxz00_3883;
BgL_auxz00_3883 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)8051)), BGl_string2442z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_2951); 
FAILURE(BgL_auxz00_3883,BFALSE,BFALSE);} 
BgL_ezd2145zd2_2954 = 
CAR(BgL_pairz00_2955); } 
if(
SYMBOLP(BgL_ezd2145zd2_2954))
{ /* Llib/dsssl.scm 241 */
obj_t BgL_arg1452z00_2956;obj_t BgL_arg1453z00_2957;
{ /* Llib/dsssl.scm 241 */
obj_t BgL_pairz00_2958;
if(
PAIRP(BgL_argsz00_2951))
{ /* Llib/dsssl.scm 241 */
BgL_pairz00_2958 = BgL_argsz00_2951; }  else 
{ 
obj_t BgL_auxz00_3892;
BgL_auxz00_3892 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)8103)), BGl_string2442z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_2951); 
FAILURE(BgL_auxz00_3892,BFALSE,BFALSE);} 
BgL_arg1452z00_2956 = 
CDR(BgL_pairz00_2958); } 
BgL_arg1453z00_2957 = 
MAKE_YOUNG_PAIR(
BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_ezd2145zd2_2954), BgL_auxz00_2952); 
{ 
obj_t BgL_auxz00_3900;obj_t BgL_argsz00_3899;
BgL_argsz00_3899 = BgL_arg1452z00_2956; 
BgL_auxz00_3900 = BgL_arg1453z00_2957; 
BgL_auxz00_2952 = BgL_auxz00_3900; 
BgL_argsz00_2951 = BgL_argsz00_3899; 
goto BgL_loopz00_2950;} }  else 
{ /* Llib/dsssl.scm 239 */
if(
PAIRP(BgL_ezd2145zd2_2954))
{ /* Llib/dsssl.scm 239 */
obj_t BgL_carzd2152zd2_2959;obj_t BgL_cdrzd2153zd2_2960;
BgL_carzd2152zd2_2959 = 
CAR(BgL_ezd2145zd2_2954); 
BgL_cdrzd2153zd2_2960 = 
CDR(BgL_ezd2145zd2_2954); 
if(
SYMBOLP(BgL_carzd2152zd2_2959))
{ /* Llib/dsssl.scm 239 */
if(
PAIRP(BgL_cdrzd2153zd2_2960))
{ /* Llib/dsssl.scm 239 */
if(
NULLP(
CDR(BgL_cdrzd2153zd2_2960)))
{ /* Llib/dsssl.scm 243 */
obj_t BgL_arg1455z00_2961;obj_t BgL_arg1456z00_2962;
{ /* Llib/dsssl.scm 243 */
obj_t BgL_pairz00_2963;
if(
PAIRP(BgL_argsz00_2951))
{ /* Llib/dsssl.scm 243 */
BgL_pairz00_2963 = BgL_argsz00_2951; }  else 
{ 
obj_t BgL_auxz00_3914;
BgL_auxz00_3914 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)8195)), BGl_string2442z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_2951); 
FAILURE(BgL_auxz00_3914,BFALSE,BFALSE);} 
BgL_arg1455z00_2961 = 
CDR(BgL_pairz00_2963); } 
BgL_arg1456z00_2962 = 
MAKE_YOUNG_PAIR(
BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_carzd2152zd2_2959), BgL_auxz00_2952); 
{ 
obj_t BgL_auxz00_3922;obj_t BgL_argsz00_3921;
BgL_argsz00_3921 = BgL_arg1455z00_2961; 
BgL_auxz00_3922 = BgL_arg1456z00_2962; 
BgL_auxz00_2952 = BgL_auxz00_3922; 
BgL_argsz00_2951 = BgL_argsz00_3921; 
goto BgL_loopz00_2950;} }  else 
{ /* Llib/dsssl.scm 239 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2650, ((long)3)))
{ /* Llib/dsssl.scm 245 */
BgL_keysz00_2964 = 
PROCEDURE_ENTRY(BgL_errz00_2650)(BgL_errz00_2650, BgL_wherez00_2651, BGl_string2440z00zz__dssslz00, BgL_formalsz00_2652, BEOA); }  else 
{ /* Llib/dsssl.scm 245 */
FAILURE(BGl_string2401z00zz__dssslz00,BGl_list2441z00zz__dssslz00,BgL_errz00_2650);} } }  else 
{ /* Llib/dsssl.scm 239 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2650, ((long)3)))
{ /* Llib/dsssl.scm 245 */
BgL_keysz00_2964 = 
PROCEDURE_ENTRY(BgL_errz00_2650)(BgL_errz00_2650, BgL_wherez00_2651, BGl_string2440z00zz__dssslz00, BgL_formalsz00_2652, BEOA); }  else 
{ /* Llib/dsssl.scm 245 */
FAILURE(BGl_string2401z00zz__dssslz00,BGl_list2441z00zz__dssslz00,BgL_errz00_2650);} } }  else 
{ /* Llib/dsssl.scm 239 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2650, ((long)3)))
{ /* Llib/dsssl.scm 245 */
BgL_keysz00_2964 = 
PROCEDURE_ENTRY(BgL_errz00_2650)(BgL_errz00_2650, BgL_wherez00_2651, BGl_string2440z00zz__dssslz00, BgL_formalsz00_2652, BEOA); }  else 
{ /* Llib/dsssl.scm 245 */
FAILURE(BGl_string2401z00zz__dssslz00,BGl_list2441z00zz__dssslz00,BgL_errz00_2650);} } }  else 
{ /* Llib/dsssl.scm 239 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2650, ((long)3)))
{ /* Llib/dsssl.scm 245 */
BgL_keysz00_2964 = 
PROCEDURE_ENTRY(BgL_errz00_2650)(BgL_errz00_2650, BgL_wherez00_2651, BGl_string2440z00zz__dssslz00, BgL_formalsz00_2652, BEOA); }  else 
{ /* Llib/dsssl.scm 245 */
FAILURE(BGl_string2401z00zz__dssslz00,BGl_list2441z00zz__dssslz00,BgL_errz00_2650);} } } } } } 
if(
NULLP(BgL_keysz00_2964))
{ /* Llib/dsssl.scm 252 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2650, ((long)3)))
{ /* Llib/dsssl.scm 253 */
return 
PROCEDURE_ENTRY(BgL_errz00_2650)(BgL_errz00_2650, BgL_wherez00_2651, BGl_string2440z00zz__dssslz00, BgL_formalsz00_2652, BEOA);}  else 
{ /* Llib/dsssl.scm 253 */
FAILURE(BGl_string2467z00zz__dssslz00,BGl_list2441z00zz__dssslz00,BgL_errz00_2650);} }  else 
{ /* Llib/dsssl.scm 252 */
return 
BGl_z62keyzd2statezb0zz__dssslz00(BgL_bodyz00_2649, BgL_formalsz00_2652, BgL_wherez00_2651, BgL_errz00_2650, BgL_argsz00_2653, BgL_dssslzd2argzd2_2654, BNIL, ((bool_t)1));} } } } } 

}



/* dsssl-check-key-args! */
BGL_EXPORTED_DEF obj_t BGl_dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00(obj_t BgL_dssslzd2argszd2_8, obj_t BgL_keyzd2listzd2_9)
{
{ /* Llib/dsssl.scm 316 */
if(
NULLP(BgL_keyzd2listzd2_9))
{ 
obj_t BgL_argsz00_1505;
BgL_argsz00_1505 = BgL_dssslzd2argszd2_8; 
BgL_zc3z04anonymousza31570ze3z87_1506:
if(
NULLP(BgL_argsz00_1505))
{ /* Llib/dsssl.scm 320 */
return BgL_dssslzd2argszd2_8;}  else 
{ /* Llib/dsssl.scm 322 */
bool_t BgL_test2709z00_3975;
if(
PAIRP(BgL_argsz00_1505))
{ /* Llib/dsssl.scm 322 */
if(
NULLP(
CDR(BgL_argsz00_1505)))
{ /* Llib/dsssl.scm 323 */
BgL_test2709z00_3975 = ((bool_t)1)
; }  else 
{ /* Llib/dsssl.scm 324 */
bool_t BgL_test2712z00_3981;
{ /* Llib/dsssl.scm 324 */
obj_t BgL_tmpz00_3982;
BgL_tmpz00_3982 = 
CAR(BgL_argsz00_1505); 
BgL_test2712z00_3981 = 
KEYWORDP(BgL_tmpz00_3982); } 
if(BgL_test2712z00_3981)
{ /* Llib/dsssl.scm 324 */
BgL_test2709z00_3975 = ((bool_t)0)
; }  else 
{ /* Llib/dsssl.scm 324 */
BgL_test2709z00_3975 = ((bool_t)1)
; } } }  else 
{ /* Llib/dsssl.scm 322 */
BgL_test2709z00_3975 = ((bool_t)1)
; } 
if(BgL_test2709z00_3975)
{ /* Llib/dsssl.scm 322 */
return 
BGl_errorz00zz__errorz00(BGl_string2468z00zz__dssslz00, BGl_string2469z00zz__dssslz00, BgL_argsz00_1505);}  else 
{ /* Llib/dsssl.scm 329 */
obj_t BgL_arg1580z00_1516;
{ /* Llib/dsssl.scm 329 */
obj_t BgL_pairz00_2251;
if(
PAIRP(BgL_argsz00_1505))
{ /* Llib/dsssl.scm 329 */
BgL_pairz00_2251 = BgL_argsz00_1505; }  else 
{ 
obj_t BgL_auxz00_3988;
BgL_auxz00_3988 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)11381)), BGl_string2442z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_1505); 
FAILURE(BgL_auxz00_3988,BFALSE,BFALSE);} 
{ /* Llib/dsssl.scm 329 */
obj_t BgL_pairz00_2254;
{ /* Llib/dsssl.scm 329 */
obj_t BgL_aux2318z00_2835;
BgL_aux2318z00_2835 = 
CDR(BgL_pairz00_2251); 
if(
PAIRP(BgL_aux2318z00_2835))
{ /* Llib/dsssl.scm 329 */
BgL_pairz00_2254 = BgL_aux2318z00_2835; }  else 
{ 
obj_t BgL_auxz00_3995;
BgL_auxz00_3995 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)11375)), BGl_string2442z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_aux2318z00_2835); 
FAILURE(BgL_auxz00_3995,BFALSE,BFALSE);} } 
BgL_arg1580z00_1516 = 
CDR(BgL_pairz00_2254); } } 
{ 
obj_t BgL_argsz00_4000;
BgL_argsz00_4000 = BgL_arg1580z00_1516; 
BgL_argsz00_1505 = BgL_argsz00_4000; 
goto BgL_zc3z04anonymousza31570ze3z87_1506;} } } }  else 
{ 
obj_t BgL_argsz00_1525;bool_t BgL_armedz00_1526;obj_t BgL_optsz00_1527;
BgL_argsz00_1525 = BgL_dssslzd2argszd2_8; 
BgL_armedz00_1526 = ((bool_t)0); 
BgL_optsz00_1527 = BNIL; 
BgL_zc3z04anonymousza31584ze3z87_1528:
if(
NULLP(BgL_argsz00_1525))
{ /* Llib/dsssl.scm 334 */
return 
bgl_reverse_bang(BgL_optsz00_1527);}  else 
{ /* Llib/dsssl.scm 336 */
bool_t BgL_test2716z00_4004;
if(
PAIRP(BgL_argsz00_1525))
{ /* Llib/dsssl.scm 336 */
if(
NULLP(
CDR(BgL_argsz00_1525)))
{ /* Llib/dsssl.scm 337 */
BgL_test2716z00_4004 = ((bool_t)1)
; }  else 
{ /* Llib/dsssl.scm 338 */
bool_t BgL_test2719z00_4010;
{ /* Llib/dsssl.scm 338 */
obj_t BgL_tmpz00_4011;
BgL_tmpz00_4011 = 
CAR(BgL_argsz00_1525); 
BgL_test2719z00_4010 = 
KEYWORDP(BgL_tmpz00_4011); } 
if(BgL_test2719z00_4010)
{ /* Llib/dsssl.scm 339 */
bool_t BgL_test2720z00_4014;
{ /* Llib/dsssl.scm 339 */
obj_t BgL_tmpz00_4015;
{ /* Llib/dsssl.scm 339 */
obj_t BgL_auxz00_4016;
{ /* Llib/dsssl.scm 339 */
bool_t BgL_test2721z00_4018;
if(
PAIRP(BgL_keyzd2listzd2_9))
{ /* Llib/dsssl.scm 339 */
BgL_test2721z00_4018 = ((bool_t)1)
; }  else 
{ /* Llib/dsssl.scm 339 */
BgL_test2721z00_4018 = 
NULLP(BgL_keyzd2listzd2_9)
; } 
if(BgL_test2721z00_4018)
{ /* Llib/dsssl.scm 339 */
BgL_auxz00_4016 = BgL_keyzd2listzd2_9
; }  else 
{ 
obj_t BgL_auxz00_4022;
BgL_auxz00_4022 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)11622)), BGl_string2442z00zz__dssslz00, BGl_string2470z00zz__dssslz00, BgL_keyzd2listzd2_9); 
FAILURE(BgL_auxz00_4022,BFALSE,BFALSE);} } 
BgL_tmpz00_4015 = 
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
CAR(BgL_argsz00_1525), BgL_auxz00_4016); } 
BgL_test2720z00_4014 = 
CBOOL(BgL_tmpz00_4015); } 
if(BgL_test2720z00_4014)
{ /* Llib/dsssl.scm 339 */
BgL_test2716z00_4004 = ((bool_t)0)
; }  else 
{ /* Llib/dsssl.scm 339 */
BgL_test2716z00_4004 = ((bool_t)1)
; } }  else 
{ /* Llib/dsssl.scm 338 */
BgL_test2716z00_4004 = ((bool_t)1)
; } } }  else 
{ /* Llib/dsssl.scm 336 */
BgL_test2716z00_4004 = ((bool_t)1)
; } 
if(BgL_test2716z00_4004)
{ /* Llib/dsssl.scm 336 */
if(BgL_armedz00_1526)
{ /* Llib/dsssl.scm 342 */
obj_t BgL_arg1602z00_1541;obj_t BgL_arg1603z00_1542;
{ /* Llib/dsssl.scm 342 */
obj_t BgL_pairz00_2262;
if(
PAIRP(BgL_argsz00_1525))
{ /* Llib/dsssl.scm 342 */
BgL_pairz00_2262 = BgL_argsz00_1525; }  else 
{ 
obj_t BgL_auxz00_4031;
BgL_auxz00_4031 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)11705)), BGl_string2442z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_1525); 
FAILURE(BgL_auxz00_4031,BFALSE,BFALSE);} 
BgL_arg1602z00_1541 = 
CDR(BgL_pairz00_2262); } 
{ /* Llib/dsssl.scm 344 */
obj_t BgL_arg1604z00_1543;
{ /* Llib/dsssl.scm 344 */
obj_t BgL_pairz00_2263;
if(
PAIRP(BgL_argsz00_1525))
{ /* Llib/dsssl.scm 344 */
BgL_pairz00_2263 = BgL_argsz00_1525; }  else 
{ 
obj_t BgL_auxz00_4038;
BgL_auxz00_4038 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)11731)), BGl_string2442z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_1525); 
FAILURE(BgL_auxz00_4038,BFALSE,BFALSE);} 
BgL_arg1604z00_1543 = 
CAR(BgL_pairz00_2263); } 
BgL_arg1603z00_1542 = 
MAKE_YOUNG_PAIR(BgL_arg1604z00_1543, BgL_optsz00_1527); } 
{ 
obj_t BgL_optsz00_4046;bool_t BgL_armedz00_4045;obj_t BgL_argsz00_4044;
BgL_argsz00_4044 = BgL_arg1602z00_1541; 
BgL_armedz00_4045 = ((bool_t)0); 
BgL_optsz00_4046 = BgL_arg1603z00_1542; 
BgL_optsz00_1527 = BgL_optsz00_4046; 
BgL_armedz00_1526 = BgL_armedz00_4045; 
BgL_argsz00_1525 = BgL_argsz00_4044; 
goto BgL_zc3z04anonymousza31584ze3z87_1528;} }  else 
{ /* Llib/dsssl.scm 341 */
obj_t BgL_arg1605z00_1544;
{ /* Llib/dsssl.scm 341 */
obj_t BgL_pairz00_2264;
if(
PAIRP(BgL_argsz00_1525))
{ /* Llib/dsssl.scm 341 */
BgL_pairz00_2264 = BgL_argsz00_1525; }  else 
{ 
obj_t BgL_auxz00_4049;
BgL_auxz00_4049 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)11672)), BGl_string2442z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_1525); 
FAILURE(BgL_auxz00_4049,BFALSE,BFALSE);} 
BgL_arg1605z00_1544 = 
CDR(BgL_pairz00_2264); } 
{ 
obj_t BgL_argsz00_4054;
BgL_argsz00_4054 = BgL_arg1605z00_1544; 
BgL_argsz00_1525 = BgL_argsz00_4054; 
goto BgL_zc3z04anonymousza31584ze3z87_1528;} } }  else 
{ /* Llib/dsssl.scm 346 */
obj_t BgL_arg1606z00_1545;
{ /* Llib/dsssl.scm 346 */
obj_t BgL_pairz00_2265;
if(
PAIRP(BgL_argsz00_1525))
{ /* Llib/dsssl.scm 346 */
BgL_pairz00_2265 = BgL_argsz00_1525; }  else 
{ 
obj_t BgL_auxz00_4057;
BgL_auxz00_4057 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)11777)), BGl_string2442z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_1525); 
FAILURE(BgL_auxz00_4057,BFALSE,BFALSE);} 
{ /* Llib/dsssl.scm 346 */
obj_t BgL_pairz00_2268;
{ /* Llib/dsssl.scm 346 */
obj_t BgL_aux2330z00_2847;
BgL_aux2330z00_2847 = 
CDR(BgL_pairz00_2265); 
if(
PAIRP(BgL_aux2330z00_2847))
{ /* Llib/dsssl.scm 346 */
BgL_pairz00_2268 = BgL_aux2330z00_2847; }  else 
{ 
obj_t BgL_auxz00_4064;
BgL_auxz00_4064 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)11771)), BGl_string2442z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_aux2330z00_2847); 
FAILURE(BgL_auxz00_4064,BFALSE,BFALSE);} } 
BgL_arg1606z00_1545 = 
CDR(BgL_pairz00_2268); } } 
{ 
bool_t BgL_armedz00_4070;obj_t BgL_argsz00_4069;
BgL_argsz00_4069 = BgL_arg1606z00_1545; 
BgL_armedz00_4070 = ((bool_t)1); 
BgL_armedz00_1526 = BgL_armedz00_4070; 
BgL_argsz00_1525 = BgL_argsz00_4069; 
goto BgL_zc3z04anonymousza31584ze3z87_1528;} } } } } 

}



/* &dsssl-check-key-args! */
obj_t BGl_z62dssslzd2checkzd2keyzd2argsz12za2zz__dssslz00(obj_t BgL_envz00_2655, obj_t BgL_dssslzd2argszd2_2656, obj_t BgL_keyzd2listzd2_2657)
{
{ /* Llib/dsssl.scm 316 */
return 
BGl_dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00(BgL_dssslzd2argszd2_2656, BgL_keyzd2listzd2_2657);} 

}



/* dsssl-get-key-arg */
BGL_EXPORTED_DEF obj_t BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(obj_t BgL_dssslzd2argszd2_10, obj_t BgL_keywordz00_11, obj_t BgL_initializa7erza7_12)
{
{ /* Llib/dsssl.scm 354 */
{ 
obj_t BgL_argsz00_1555;
BgL_argsz00_1555 = BgL_dssslzd2argszd2_10; 
BgL_zc3z04anonymousza31612ze3z87_1556:
if(
PAIRP(BgL_argsz00_1555))
{ /* Llib/dsssl.scm 362 */
bool_t BgL_test2730z00_4074;
{ /* Llib/dsssl.scm 362 */
obj_t BgL_tmpz00_4075;
BgL_tmpz00_4075 = 
CAR(BgL_argsz00_1555); 
BgL_test2730z00_4074 = 
KEYWORDP(BgL_tmpz00_4075); } 
if(BgL_test2730z00_4074)
{ /* Llib/dsssl.scm 362 */
if(
(
CAR(BgL_argsz00_1555)==BgL_keywordz00_11))
{ /* Llib/dsssl.scm 365 */
bool_t BgL_test2732z00_4081;
{ /* Llib/dsssl.scm 365 */
obj_t BgL_tmpz00_4082;
BgL_tmpz00_4082 = 
CDR(BgL_argsz00_1555); 
BgL_test2732z00_4081 = 
PAIRP(BgL_tmpz00_4082); } 
if(BgL_test2732z00_4081)
{ /* Llib/dsssl.scm 369 */
obj_t BgL_pairz00_2278;
{ /* Llib/dsssl.scm 369 */
obj_t BgL_aux2332z00_2849;
BgL_aux2332z00_2849 = 
CDR(BgL_argsz00_1555); 
if(
PAIRP(BgL_aux2332z00_2849))
{ /* Llib/dsssl.scm 369 */
BgL_pairz00_2278 = BgL_aux2332z00_2849; }  else 
{ 
obj_t BgL_auxz00_4088;
BgL_auxz00_4088 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)12699)), BGl_string2442z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_aux2332z00_2849); 
FAILURE(BgL_auxz00_4088,BFALSE,BFALSE);} } 
return 
CAR(BgL_pairz00_2278);}  else 
{ /* Llib/dsssl.scm 365 */
return 
BGl_errorz00zz__errorz00(BGl_string2412z00zz__dssslz00, BGl_string2471z00zz__dssslz00, 
CAR(BgL_argsz00_1555));} }  else 
{ /* Llib/dsssl.scm 370 */
bool_t BgL_test2734z00_4095;
{ /* Llib/dsssl.scm 370 */
obj_t BgL_tmpz00_4096;
BgL_tmpz00_4096 = 
CAR(BgL_argsz00_1555); 
BgL_test2734z00_4095 = 
KEYWORDP(BgL_tmpz00_4096); } 
if(BgL_test2734z00_4095)
{ /* Llib/dsssl.scm 375 */
bool_t BgL_test2735z00_4099;
{ /* Llib/dsssl.scm 375 */
obj_t BgL_tmpz00_4100;
BgL_tmpz00_4100 = 
CDR(BgL_argsz00_1555); 
BgL_test2735z00_4099 = 
PAIRP(BgL_tmpz00_4100); } 
if(BgL_test2735z00_4099)
{ /* Llib/dsssl.scm 379 */
obj_t BgL_arg1628z00_1570;
{ /* Llib/dsssl.scm 379 */
obj_t BgL_pairz00_2287;
{ /* Llib/dsssl.scm 379 */
obj_t BgL_aux2334z00_2851;
BgL_aux2334z00_2851 = 
CDR(BgL_argsz00_1555); 
if(
PAIRP(BgL_aux2334z00_2851))
{ /* Llib/dsssl.scm 379 */
BgL_pairz00_2287 = BgL_aux2334z00_2851; }  else 
{ 
obj_t BgL_auxz00_4106;
BgL_auxz00_4106 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)12975)), BGl_string2442z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_aux2334z00_2851); 
FAILURE(BgL_auxz00_4106,BFALSE,BFALSE);} } 
BgL_arg1628z00_1570 = 
CDR(BgL_pairz00_2287); } 
{ 
obj_t BgL_argsz00_4111;
BgL_argsz00_4111 = BgL_arg1628z00_1570; 
BgL_argsz00_1555 = BgL_argsz00_4111; 
goto BgL_zc3z04anonymousza31612ze3z87_1556;} }  else 
{ /* Llib/dsssl.scm 375 */
return 
BGl_errorz00zz__errorz00(BGl_string2412z00zz__dssslz00, BGl_string2471z00zz__dssslz00, 
CAR(BgL_argsz00_1555));} }  else 
{ /* Llib/dsssl.scm 370 */
return 
BGl_errorz00zz__errorz00(BGl_string2412z00zz__dssslz00, BGl_string2472z00zz__dssslz00, 
CAR(BgL_argsz00_1555));} } }  else 
{ 
obj_t BgL_argsz00_4116;
BgL_argsz00_4116 = 
CDR(BgL_argsz00_1555); 
BgL_argsz00_1555 = BgL_argsz00_4116; 
goto BgL_zc3z04anonymousza31612ze3z87_1556;} }  else 
{ /* Llib/dsssl.scm 357 */
if(
NULLP(BgL_argsz00_1555))
{ /* Llib/dsssl.scm 358 */
return BgL_initializa7erza7_12;}  else 
{ /* Llib/dsssl.scm 358 */
return 
BGl_errorz00zz__errorz00(BGl_string2412z00zz__dssslz00, BGl_string2473z00zz__dssslz00, BgL_dssslzd2argszd2_10);} } } } 

}



/* &dsssl-get-key-arg */
obj_t BGl_z62dssslzd2getzd2keyzd2argzb0zz__dssslz00(obj_t BgL_envz00_2658, obj_t BgL_dssslzd2argszd2_2659, obj_t BgL_keywordz00_2660, obj_t BgL_initializa7erza7_2661)
{
{ /* Llib/dsssl.scm 354 */
{ /* Llib/dsssl.scm 357 */
obj_t BgL_auxz00_4121;
if(
KEYWORDP(BgL_keywordz00_2660))
{ /* Llib/dsssl.scm 357 */
BgL_auxz00_4121 = BgL_keywordz00_2660
; }  else 
{ 
obj_t BgL_auxz00_4124;
BgL_auxz00_4124 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)12351)), BGl_string2474z00zz__dssslz00, BGl_string2475z00zz__dssslz00, BgL_keywordz00_2660); 
FAILURE(BgL_auxz00_4124,BFALSE,BFALSE);} 
return 
BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(BgL_dssslzd2argszd2_2659, BgL_auxz00_4121, BgL_initializa7erza7_2661);} } 

}



/* dsssl-get-key-rest-arg */
BGL_EXPORTED_DEF obj_t BGl_dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00(obj_t BgL_dssslzd2argszd2_13, obj_t BgL_keysz00_14)
{
{ /* Llib/dsssl.scm 384 */
return 
BGl_loopze71ze7zz__dssslz00(BgL_keysz00_14, BgL_dssslzd2argszd2_13);} 

}



/* loop~1 */
obj_t BGl_loopze71ze7zz__dssslz00(obj_t BgL_keysz00_2675, obj_t BgL_argsz00_1581)
{
{ /* Llib/dsssl.scm 385 */
BGl_loopze71ze7zz__dssslz00:
if(
NULLP(BgL_argsz00_1581))
{ /* Llib/dsssl.scm 387 */
return BNIL;}  else 
{ /* Llib/dsssl.scm 389 */
bool_t BgL_test2740z00_4132;
{ /* Llib/dsssl.scm 389 */
bool_t BgL_test2741z00_4133;
{ /* Llib/dsssl.scm 389 */
obj_t BgL_tmpz00_4134;
{ /* Llib/dsssl.scm 389 */
obj_t BgL_pairz00_2293;
if(
PAIRP(BgL_argsz00_1581))
{ /* Llib/dsssl.scm 389 */
BgL_pairz00_2293 = BgL_argsz00_1581; }  else 
{ 
obj_t BgL_auxz00_4137;
BgL_auxz00_4137 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)13364)), BGl_string2476z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_1581); 
FAILURE(BgL_auxz00_4137,BFALSE,BFALSE);} 
BgL_tmpz00_4134 = 
CAR(BgL_pairz00_2293); } 
BgL_test2741z00_4133 = 
KEYWORDP(BgL_tmpz00_4134); } 
if(BgL_test2741z00_4133)
{ /* Llib/dsssl.scm 390 */
bool_t BgL_test2743z00_4143;
{ /* Llib/dsssl.scm 390 */
obj_t BgL_tmpz00_4144;
{ /* Llib/dsssl.scm 390 */
obj_t BgL_pairz00_2295;
if(
PAIRP(BgL_argsz00_1581))
{ /* Llib/dsssl.scm 390 */
BgL_pairz00_2295 = BgL_argsz00_1581; }  else 
{ 
obj_t BgL_auxz00_4147;
BgL_auxz00_4147 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)13391)), BGl_string2476z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_1581); 
FAILURE(BgL_auxz00_4147,BFALSE,BFALSE);} 
BgL_tmpz00_4144 = 
CDR(BgL_pairz00_2295); } 
BgL_test2743z00_4143 = 
NULLP(BgL_tmpz00_4144); } 
if(BgL_test2743z00_4143)
{ /* Llib/dsssl.scm 390 */
BgL_test2740z00_4132 = ((bool_t)1)
; }  else 
{ /* Llib/dsssl.scm 391 */
bool_t BgL_test2745z00_4153;
{ /* Llib/dsssl.scm 391 */
obj_t BgL_tmpz00_4154;
{ /* Llib/dsssl.scm 391 */
obj_t BgL_auxz00_4155;
{ /* Llib/dsssl.scm 391 */
obj_t BgL_pairz00_2297;
if(
PAIRP(BgL_argsz00_1581))
{ /* Llib/dsssl.scm 391 */
BgL_pairz00_2297 = BgL_argsz00_1581; }  else 
{ 
obj_t BgL_auxz00_4158;
BgL_auxz00_4158 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)13421)), BGl_string2476z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_1581); 
FAILURE(BgL_auxz00_4158,BFALSE,BFALSE);} 
BgL_auxz00_4155 = 
CAR(BgL_pairz00_2297); } 
BgL_tmpz00_4154 = 
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4155, BgL_keysz00_2675); } 
BgL_test2745z00_4153 = 
CBOOL(BgL_tmpz00_4154); } 
if(BgL_test2745z00_4153)
{ /* Llib/dsssl.scm 391 */
BgL_test2740z00_4132 = ((bool_t)0)
; }  else 
{ /* Llib/dsssl.scm 391 */
BgL_test2740z00_4132 = ((bool_t)1)
; } } }  else 
{ /* Llib/dsssl.scm 389 */
BgL_test2740z00_4132 = ((bool_t)1)
; } } 
if(BgL_test2740z00_4132)
{ /* Llib/dsssl.scm 392 */
obj_t BgL_arg1651z00_1594;obj_t BgL_arg1652z00_1595;
{ /* Llib/dsssl.scm 392 */
obj_t BgL_pairz00_2298;
if(
PAIRP(BgL_argsz00_1581))
{ /* Llib/dsssl.scm 392 */
BgL_pairz00_2298 = BgL_argsz00_1581; }  else 
{ 
obj_t BgL_auxz00_4167;
BgL_auxz00_4167 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)13449)), BGl_string2476z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_1581); 
FAILURE(BgL_auxz00_4167,BFALSE,BFALSE);} 
BgL_arg1651z00_1594 = 
CAR(BgL_pairz00_2298); } 
{ /* Llib/dsssl.scm 392 */
obj_t BgL_arg1654z00_1596;
{ /* Llib/dsssl.scm 392 */
obj_t BgL_pairz00_2299;
if(
PAIRP(BgL_argsz00_1581))
{ /* Llib/dsssl.scm 392 */
BgL_pairz00_2299 = BgL_argsz00_1581; }  else 
{ 
obj_t BgL_auxz00_4174;
BgL_auxz00_4174 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)13466)), BGl_string2476z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_1581); 
FAILURE(BgL_auxz00_4174,BFALSE,BFALSE);} 
BgL_arg1654z00_1596 = 
CDR(BgL_pairz00_2299); } 
BgL_arg1652z00_1595 = 
BGl_loopze71ze7zz__dssslz00(BgL_keysz00_2675, BgL_arg1654z00_1596); } 
return 
MAKE_YOUNG_PAIR(BgL_arg1651z00_1594, BgL_arg1652z00_1595);}  else 
{ /* Llib/dsssl.scm 394 */
obj_t BgL_arg1656z00_1597;
{ /* Llib/dsssl.scm 394 */
obj_t BgL_pairz00_2300;
if(
PAIRP(BgL_argsz00_1581))
{ /* Llib/dsssl.scm 394 */
BgL_pairz00_2300 = BgL_argsz00_1581; }  else 
{ 
obj_t BgL_auxz00_4183;
BgL_auxz00_4183 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)13498)), BGl_string2476z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_argsz00_1581); 
FAILURE(BgL_auxz00_4183,BFALSE,BFALSE);} 
{ /* Llib/dsssl.scm 394 */
obj_t BgL_pairz00_2303;
{ /* Llib/dsssl.scm 394 */
obj_t BgL_aux2350z00_2867;
BgL_aux2350z00_2867 = 
CDR(BgL_pairz00_2300); 
if(
PAIRP(BgL_aux2350z00_2867))
{ /* Llib/dsssl.scm 394 */
BgL_pairz00_2303 = BgL_aux2350z00_2867; }  else 
{ 
obj_t BgL_auxz00_4190;
BgL_auxz00_4190 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)13492)), BGl_string2476z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_aux2350z00_2867); 
FAILURE(BgL_auxz00_4190,BFALSE,BFALSE);} } 
BgL_arg1656z00_1597 = 
CDR(BgL_pairz00_2303); } } 
{ 
obj_t BgL_argsz00_4195;
BgL_argsz00_4195 = BgL_arg1656z00_1597; 
BgL_argsz00_1581 = BgL_argsz00_4195; 
goto BGl_loopze71ze7zz__dssslz00;} } } } 

}



/* &dsssl-get-key-rest-arg */
obj_t BGl_z62dssslzd2getzd2keyzd2restzd2argz62zz__dssslz00(obj_t BgL_envz00_2662, obj_t BgL_dssslzd2argszd2_2663, obj_t BgL_keysz00_2664)
{
{ /* Llib/dsssl.scm 384 */
{ /* Llib/dsssl.scm 387 */
obj_t BgL_auxz00_4196;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_keysz00_2664))
{ /* Llib/dsssl.scm 387 */
BgL_auxz00_4196 = BgL_keysz00_2664
; }  else 
{ 
obj_t BgL_auxz00_4199;
BgL_auxz00_4199 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)13315)), BGl_string2477z00zz__dssslz00, BGl_string2470z00zz__dssslz00, BgL_keysz00_2664); 
FAILURE(BgL_auxz00_4199,BFALSE,BFALSE);} 
return 
BGl_dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00(BgL_dssslzd2argszd2_2663, BgL_auxz00_4196);} } 

}



/* id-sans-type */
obj_t BGl_idzd2sanszd2typez00zz__dssslz00(obj_t BgL_idz00_15)
{
{ /* Llib/dsssl.scm 402 */
{ /* Llib/dsssl.scm 403 */
obj_t BgL_stringz00_1605;
{ /* Llib/dsssl.scm 403 */
obj_t BgL_res2127z00_2306;
{ /* Llib/dsssl.scm 403 */
obj_t BgL_arg1725z00_2305;
BgL_arg1725z00_2305 = 
SYMBOL_TO_STRING(BgL_idz00_15); 
BgL_res2127z00_2306 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1725z00_2305); } 
BgL_stringz00_1605 = BgL_res2127z00_2306; } 
{ /* Llib/dsssl.scm 403 */
long BgL_lenz00_1606;
BgL_lenz00_1606 = 
STRING_LENGTH(BgL_stringz00_1605); 
{ /* Llib/dsssl.scm 404 */

{ 
long BgL_walkerz00_1608;
BgL_walkerz00_1608 = ((long)0); 
BgL_zc3z04anonymousza31660ze3z87_1609:
if(
(BgL_walkerz00_1608==BgL_lenz00_1606))
{ /* Llib/dsssl.scm 407 */
return BgL_idz00_15;}  else 
{ /* Llib/dsssl.scm 409 */
bool_t BgL_test2753z00_4209;
{ /* Llib/dsssl.scm 409 */
bool_t BgL_test2754z00_4210;
{ /* Llib/dsssl.scm 409 */
unsigned char BgL_tmpz00_4211;
{ /* Llib/dsssl.scm 409 */
long BgL_l2198z00_2686;
BgL_l2198z00_2686 = 
STRING_LENGTH(BgL_stringz00_1605); 
if(
BOUND_CHECK(BgL_walkerz00_1608, BgL_l2198z00_2686))
{ /* Llib/dsssl.scm 409 */
BgL_tmpz00_4211 = 
STRING_REF(BgL_stringz00_1605, BgL_walkerz00_1608)
; }  else 
{ 
obj_t BgL_auxz00_4216;
BgL_auxz00_4216 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)14164)), BGl_string2478z00zz__dssslz00, BgL_stringz00_1605, 
(int)(BgL_l2198z00_2686), 
(int)(BgL_walkerz00_1608)); 
FAILURE(BgL_auxz00_4216,BFALSE,BFALSE);} } 
BgL_test2754z00_4210 = 
(BgL_tmpz00_4211==((unsigned char)':')); } 
if(BgL_test2754z00_4210)
{ /* Llib/dsssl.scm 409 */
if(
(BgL_walkerz00_1608<
(BgL_lenz00_1606-((long)1))))
{ /* Llib/dsssl.scm 411 */
unsigned char BgL_tmpz00_4226;
{ /* Llib/dsssl.scm 411 */
long BgL_i2201z00_2689;
BgL_i2201z00_2689 = 
(BgL_walkerz00_1608+((long)1)); 
{ /* Llib/dsssl.scm 411 */
long BgL_l2202z00_2690;
BgL_l2202z00_2690 = 
STRING_LENGTH(BgL_stringz00_1605); 
if(
BOUND_CHECK(BgL_i2201z00_2689, BgL_l2202z00_2690))
{ /* Llib/dsssl.scm 411 */
BgL_tmpz00_4226 = 
STRING_REF(BgL_stringz00_1605, BgL_i2201z00_2689)
; }  else 
{ 
obj_t BgL_auxz00_4232;
BgL_auxz00_4232 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)14237)), BGl_string2478z00zz__dssslz00, BgL_stringz00_1605, 
(int)(BgL_l2202z00_2690), 
(int)(BgL_i2201z00_2689)); 
FAILURE(BgL_auxz00_4232,BFALSE,BFALSE);} } } 
BgL_test2753z00_4209 = 
(BgL_tmpz00_4226==((unsigned char)':')); }  else 
{ /* Llib/dsssl.scm 410 */
BgL_test2753z00_4209 = ((bool_t)0)
; } }  else 
{ /* Llib/dsssl.scm 409 */
BgL_test2753z00_4209 = ((bool_t)0)
; } } 
if(BgL_test2753z00_4209)
{ /* Llib/dsssl.scm 409 */
return 
bstring_to_symbol(
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_1605, ((long)0), BgL_walkerz00_1608));}  else 
{ 
long BgL_walkerz00_4241;
BgL_walkerz00_4241 = 
(BgL_walkerz00_1608+((long)1)); 
BgL_walkerz00_1608 = BgL_walkerz00_4241; 
goto BgL_zc3z04anonymousza31660ze3z87_1609;} } } } } } } 

}



/* dsssl-formals->scheme-formals */
BGL_EXPORTED_DEF obj_t BGl_dssslzd2formalszd2ze3schemezd2formalsz31zz__dssslz00(obj_t BgL_formalsz00_16, obj_t BgL_errz00_17)
{
{ /* Llib/dsssl.scm 419 */
return 
BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalsze3zz__dssslz00(BgL_formalsz00_16, BgL_errz00_17, ((bool_t)0));} 

}



/* &dsssl-formals->scheme-formals */
obj_t BGl_z62dssslzd2formalszd2ze3schemezd2formalsz53zz__dssslz00(obj_t BgL_envz00_2665, obj_t BgL_formalsz00_2666, obj_t BgL_errz00_2667)
{
{ /* Llib/dsssl.scm 419 */
{ /* Llib/dsssl.scm 420 */
obj_t BgL_auxz00_4244;
if(
PROCEDUREP(BgL_errz00_2667))
{ /* Llib/dsssl.scm 420 */
BgL_auxz00_4244 = BgL_errz00_2667
; }  else 
{ 
obj_t BgL_auxz00_4247;
BgL_auxz00_4247 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)14652)), BGl_string2479z00zz__dssslz00, BGl_string2406z00zz__dssslz00, BgL_errz00_2667); 
FAILURE(BgL_auxz00_4247,BFALSE,BFALSE);} 
return 
BGl_dssslzd2formalszd2ze3schemezd2formalsz31zz__dssslz00(BgL_formalsz00_2666, BgL_auxz00_4244);} } 

}



/* dsssl-formals->scheme-typed-formals */
BGL_EXPORTED_DEF obj_t BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalsze3zz__dssslz00(obj_t BgL_formalsz00_18, obj_t BgL_errz00_19, bool_t BgL_typedz00_20)
{
{ /* Llib/dsssl.scm 436 */
return 
BGl_loopze70ze7zz__dssslz00(BgL_typedz00_20, BgL_formalsz00_18, BgL_errz00_19, BgL_formalsz00_18, ((bool_t)0));} 

}



/* loop~0 */
obj_t BGl_loopze70ze7zz__dssslz00(bool_t BgL_typedz00_2674, obj_t BgL_formalsz00_2673, obj_t BgL_errz00_2672, obj_t BgL_argsz00_1633, bool_t BgL_dssslz00_1634)
{
{ /* Llib/dsssl.scm 449 */
BGl_loopze70ze7zz__dssslz00:
{ 
obj_t BgL_objz00_1659;
if(
NULLP(BgL_argsz00_1633))
{ /* Llib/dsssl.scm 452 */
return BNIL;}  else 
{ /* Llib/dsssl.scm 452 */
if(
PAIRP(BgL_argsz00_1633))
{ /* Llib/dsssl.scm 464 */
bool_t BgL_test2761z00_4257;
{ /* Llib/dsssl.scm 464 */
obj_t BgL_tmpz00_4258;
BgL_tmpz00_4258 = 
CAR(BgL_argsz00_1633); 
BgL_test2761z00_4257 = 
SYMBOLP(BgL_tmpz00_4258); } 
if(BgL_test2761z00_4257)
{ /* Llib/dsssl.scm 464 */
if(BgL_dssslz00_1634)
{ /* Llib/dsssl.scm 477 */
obj_t BgL_arg1693z00_1640;
BgL_arg1693z00_1640 = 
CAR(BgL_argsz00_1633); 
{ /* Llib/dsssl.scm 477 */
obj_t BgL_auxz00_4263;
if(
SYMBOLP(BgL_arg1693z00_1640))
{ /* Llib/dsssl.scm 477 */
BgL_auxz00_4263 = BgL_arg1693z00_1640
; }  else 
{ 
obj_t BgL_auxz00_4266;
BgL_auxz00_4266 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)16861)), BGl_string2481z00zz__dssslz00, BGl_string2443z00zz__dssslz00, BgL_arg1693z00_1640); 
FAILURE(BgL_auxz00_4266,BFALSE,BFALSE);} 
return 
BGl_idzd2sanszd2typez00zz__dssslz00(BgL_auxz00_4263);} }  else 
{ /* Llib/dsssl.scm 479 */
obj_t BgL_arg1695z00_1641;obj_t BgL_arg1696z00_1642;
if(BgL_typedz00_2674)
{ /* Llib/dsssl.scm 479 */
BgL_arg1695z00_1641 = 
CAR(BgL_argsz00_1633); }  else 
{ /* Llib/dsssl.scm 479 */
obj_t BgL_arg1697z00_1643;
BgL_arg1697z00_1643 = 
CAR(BgL_argsz00_1633); 
{ /* Llib/dsssl.scm 479 */
obj_t BgL_auxz00_4274;
if(
SYMBOLP(BgL_arg1697z00_1643))
{ /* Llib/dsssl.scm 479 */
BgL_auxz00_4274 = BgL_arg1697z00_1643
; }  else 
{ 
obj_t BgL_auxz00_4277;
BgL_auxz00_4277 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)16926)), BGl_string2481z00zz__dssslz00, BGl_string2443z00zz__dssslz00, BgL_arg1697z00_1643); 
FAILURE(BgL_auxz00_4277,BFALSE,BFALSE);} 
BgL_arg1695z00_1641 = 
BGl_idzd2sanszd2typez00zz__dssslz00(BgL_auxz00_4274); } } 
BgL_arg1696z00_1642 = 
BGl_loopze70ze7zz__dssslz00(BgL_typedz00_2674, BgL_formalsz00_2673, BgL_errz00_2672, 
CDR(BgL_argsz00_1633), ((bool_t)0)); 
return 
MAKE_YOUNG_PAIR(BgL_arg1695z00_1641, BgL_arg1696z00_1642);} }  else 
{ /* Llib/dsssl.scm 464 */
if(
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
CAR(BgL_argsz00_1633), BGl_list2482z00zz__dssslz00)))
{ 
bool_t BgL_dssslz00_4291;obj_t BgL_argsz00_4289;
BgL_argsz00_4289 = 
CDR(BgL_argsz00_1633); 
BgL_dssslz00_4291 = ((bool_t)1); 
BgL_dssslz00_1634 = BgL_dssslz00_4291; 
BgL_argsz00_1633 = BgL_argsz00_4289; 
goto BGl_loopze70ze7zz__dssslz00;}  else 
{ /* Llib/dsssl.scm 466 */
if(BgL_dssslz00_1634)
{ /* Llib/dsssl.scm 470 */
bool_t BgL_test2768z00_4293;
BgL_objz00_1659 = 
CAR(BgL_argsz00_1633); 
if(
PAIRP(BgL_objz00_1659))
{ /* Llib/dsssl.scm 443 */
bool_t BgL_test2770z00_4296;
{ /* Llib/dsssl.scm 443 */
obj_t BgL_tmpz00_4297;
BgL_tmpz00_4297 = 
CDR(BgL_objz00_1659); 
BgL_test2770z00_4296 = 
PAIRP(BgL_tmpz00_4297); } 
if(BgL_test2770z00_4296)
{ /* Llib/dsssl.scm 444 */
obj_t BgL_tmpz00_4300;
{ /* Llib/dsssl.scm 444 */
obj_t BgL_pairz00_2341;
{ /* Llib/dsssl.scm 444 */
obj_t BgL_aux2356z00_2873;
BgL_aux2356z00_2873 = 
CDR(BgL_objz00_1659); 
if(
PAIRP(BgL_aux2356z00_2873))
{ /* Llib/dsssl.scm 444 */
BgL_pairz00_2341 = BgL_aux2356z00_2873; }  else 
{ 
obj_t BgL_auxz00_4304;
BgL_auxz00_4304 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)15993)), BGl_string2480z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_aux2356z00_2873); 
FAILURE(BgL_auxz00_4304,BFALSE,BFALSE);} } 
BgL_tmpz00_4300 = 
CDR(BgL_pairz00_2341); } 
BgL_test2768z00_4293 = 
NULLP(BgL_tmpz00_4300); }  else 
{ /* Llib/dsssl.scm 443 */
BgL_test2768z00_4293 = ((bool_t)0)
; } }  else 
{ /* Llib/dsssl.scm 442 */
BgL_test2768z00_4293 = ((bool_t)0)
; } 
if(BgL_test2768z00_4293)
{ /* Llib/dsssl.scm 471 */
obj_t BgL_arg1704z00_1650;
{ /* Llib/dsssl.scm 447 */
obj_t BgL_pairz00_2356;
{ /* Llib/dsssl.scm 471 */
obj_t BgL_aux2362z00_2879;
BgL_aux2362z00_2879 = 
CAR(BgL_argsz00_1633); 
if(
PAIRP(BgL_aux2362z00_2879))
{ /* Llib/dsssl.scm 471 */
BgL_pairz00_2356 = BgL_aux2362z00_2879; }  else 
{ 
obj_t BgL_auxz00_4314;
BgL_auxz00_4314 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)16703)), BGl_string2481z00zz__dssslz00, BGl_string2394z00zz__dssslz00, BgL_aux2362z00_2879); 
FAILURE(BgL_auxz00_4314,BFALSE,BFALSE);} } 
BgL_arg1704z00_1650 = 
CAR(BgL_pairz00_2356); } 
{ /* Llib/dsssl.scm 471 */
obj_t BgL_auxz00_4319;
if(
SYMBOLP(BgL_arg1704z00_1650))
{ /* Llib/dsssl.scm 471 */
BgL_auxz00_4319 = BgL_arg1704z00_1650
; }  else 
{ 
obj_t BgL_auxz00_4322;
BgL_auxz00_4322 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)16713)), BGl_string2481z00zz__dssslz00, BGl_string2443z00zz__dssslz00, BgL_arg1704z00_1650); 
FAILURE(BgL_auxz00_4322,BFALSE,BFALSE);} 
return 
BGl_idzd2sanszd2typez00zz__dssslz00(BgL_auxz00_4319);} }  else 
{ /* Llib/dsssl.scm 470 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2672, ((long)3)))
{ /* Llib/dsssl.scm 473 */
return 
PROCEDURE_ENTRY(BgL_errz00_2672)(BgL_errz00_2672, BGl_string2483z00zz__dssslz00, BGl_string2484z00zz__dssslz00, BgL_formalsz00_2673, BEOA);}  else 
{ /* Llib/dsssl.scm 473 */
FAILURE(BGl_string2485z00zz__dssslz00,BGl_list2486z00zz__dssslz00,BgL_errz00_2672);} } }  else 
{ /* Llib/dsssl.scm 468 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2672, ((long)3)))
{ /* Llib/dsssl.scm 469 */
return 
PROCEDURE_ENTRY(BgL_errz00_2672)(BgL_errz00_2672, BGl_string2483z00zz__dssslz00, BGl_string2487z00zz__dssslz00, BgL_formalsz00_2673, BEOA);}  else 
{ /* Llib/dsssl.scm 469 */
FAILURE(BGl_string2485z00zz__dssslz00,BGl_list2488z00zz__dssslz00,BgL_errz00_2672);} } } } }  else 
{ /* Llib/dsssl.scm 454 */
if(BgL_dssslz00_1634)
{ /* Llib/dsssl.scm 456 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2672, ((long)3)))
{ /* Llib/dsssl.scm 457 */
return 
PROCEDURE_ENTRY(BgL_errz00_2672)(BgL_errz00_2672, BGl_string2489z00zz__dssslz00, BGl_string2490z00zz__dssslz00, BgL_formalsz00_2673, BEOA);}  else 
{ /* Llib/dsssl.scm 457 */
FAILURE(BGl_string2485z00zz__dssslz00,BGl_list2491z00zz__dssslz00,BgL_errz00_2672);} }  else 
{ /* Llib/dsssl.scm 456 */
if(
SYMBOLP(BgL_argsz00_1633))
{ /* Llib/dsssl.scm 460 */
return 
BGl_idzd2sanszd2typez00zz__dssslz00(BgL_argsz00_1633);}  else 
{ /* Llib/dsssl.scm 460 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2672, ((long)3)))
{ /* Llib/dsssl.scm 461 */
return 
PROCEDURE_ENTRY(BgL_errz00_2672)(BgL_errz00_2672, BGl_string2483z00zz__dssslz00, BGl_string2487z00zz__dssslz00, BgL_formalsz00_2673, BEOA);}  else 
{ /* Llib/dsssl.scm 461 */
FAILURE(BGl_string2485z00zz__dssslz00,BGl_list2488z00zz__dssslz00,BgL_errz00_2672);} } } } } } } 

}



/* &dsssl-formals->scheme-typed-formals */
obj_t BGl_z62dssslzd2formalszd2ze3schemezd2typedzd2formalsz81zz__dssslz00(obj_t BgL_envz00_2668, obj_t BgL_formalsz00_2669, obj_t BgL_errz00_2670, obj_t BgL_typedz00_2671)
{
{ /* Llib/dsssl.scm 436 */
{ /* Llib/dsssl.scm 439 */
obj_t BgL_auxz00_4367;
if(
PROCEDUREP(BgL_errz00_2670))
{ /* Llib/dsssl.scm 439 */
BgL_auxz00_4367 = BgL_errz00_2670
; }  else 
{ 
obj_t BgL_auxz00_4370;
BgL_auxz00_4370 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2392z00zz__dssslz00, 
BINT(((long)15856)), BGl_string2492z00zz__dssslz00, BGl_string2406z00zz__dssslz00, BgL_errz00_2670); 
FAILURE(BgL_auxz00_4370,BFALSE,BFALSE);} 
return 
BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalsze3zz__dssslz00(BgL_formalsz00_2669, BgL_auxz00_4367, 
CBOOL(BgL_typedz00_2671));} } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__dssslz00()
{
{ /* Llib/dsssl.scm 14 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__dssslz00()
{
{ /* Llib/dsssl.scm 14 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__dssslz00()
{
{ /* Llib/dsssl.scm 14 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__dssslz00()
{
{ /* Llib/dsssl.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string2493z00zz__dssslz00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string2493z00zz__dssslz00)); 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)340267996), 
BSTRING_TO_STRING(BGl_string2493z00zz__dssslz00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)193422032), 
BSTRING_TO_STRING(BGl_string2493z00zz__dssslz00)); 
return 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)224967910), 
BSTRING_TO_STRING(BGl_string2493z00zz__dssslz00));} 

}

#ifdef __cplusplus
}
#endif
