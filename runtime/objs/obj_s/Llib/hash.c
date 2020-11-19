/*===========================================================================*/
/*   (Llib/hash.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/hash.scm -indent -o objs/obj_s/Llib/hash.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif

/* object type definitions */

static obj_t BGl__createzd2hashtablezd2zz__hashz00(obj_t, obj_t);
extern int BGl_objectzd2hashnumberzd2zz__objectz00(BgL_objectz00_bglt);
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
extern obj_t BGl_weakzd2hashtablezd2clearz12z12zz__weakhashz00(obj_t);
extern obj_t BGl_weakzd2hashtablezd2addz12z12zz__weakhashz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3451z00zz__hashz00 = BUNSPEC;
static obj_t BGl_plainzd2hashtablezd2getz00zz__hashz00(obj_t, obj_t);
static obj_t BGl_symbol3457z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3459z00zz__hashz00 = BUNSPEC;
extern obj_t BGl_weakzd2hashtablezd2putz12z12zz__weakhashz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3462z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3382z00zz__hashz00 = BUNSPEC;
static bool_t BGl_plainzd2hashtablezd2containszf3zf3zz__hashz00(obj_t, obj_t);
static obj_t BGl_symbol3465z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3384z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3386z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3388z00zz__hashz00 = BUNSPEC;
static obj_t BGl_requirezd2initializa7ationz75zz__hashz00 = BUNSPEC;
static long BGl_defaultzd2maxzd2bucketzd2lengthzd2zz__hashz00;
static obj_t BGl_symbol3471z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3474z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3395z00zz__hashz00 = BUNSPEC;
static obj_t BGl_plainzd2hashtablezd2updatez12z12zz__hashz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3397z00zz__hashz00 = BUNSPEC;
static obj_t BGl_search1137ze70ze7zz__hashz00(long, obj_t, obj_t, long);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_weakzd2hashtablezd2updatez12z12zz__weakhashz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3484z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3488z00zz__hashz00 = BUNSPEC;
extern long bgl_keyword_hash_number(obj_t);
static obj_t BGl_symbol3490z00zz__hashz00 = BUNSPEC;
extern long bgl_string_hash_number(char *);
static obj_t BGl_symbol3494z00zz__hashz00 = BUNSPEC;
static obj_t BGl_toplevelzd2initzd2zz__hashz00();
extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_z62getzd2pointerzd2hashnumberz62zz__hashz00(obj_t, obj_t, obj_t);
static obj_t BGl_genericzd2initzd2zz__hashz00();
static bool_t BGl_hashtablezd2weakzf3z21zz__hashz00(obj_t);
extern obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_objectzd2initzd2zz__hashz00();
extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_hashtablezd2removez12zc0zz__hashz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2ze3vectorz31zz__hashz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_createzd2hashtablezd2zz__hashz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2mapzd2zz__hashz00(obj_t, obj_t);
static obj_t BGl_plainzd2hashtablezd2mapz00zz__hashz00(obj_t, obj_t);
extern obj_t string_append_3(obj_t, obj_t, obj_t);
static obj_t BGl_stringzd2hashtablezd2getz00zz__hashz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2filterz12zc0zz__hashz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_hashtablezf3zf3zz__hashz00(obj_t);
static obj_t BGl_z62hashtablezd2forzd2eachz62zz__hashz00(obj_t, obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_z62hashtablezd2keyzd2listz62zz__hashz00(obj_t, obj_t);
extern long bgl_foreign_hash_number(obj_t);
extern bool_t BGl_weakzd2hashtablezd2containszf3zf3zz__weakhashz00(obj_t, obj_t);
extern obj_t make_vector(long, obj_t);
static obj_t BGl_z62hashtablezd2updatez12za2zz__hashz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_weakzd2hashtablezd2ze3listze3zz__weakhashz00(obj_t);
static obj_t BGl_methodzd2initzd2zz__hashz00();
static obj_t BGl_z62getzd2hashnumberzd2persistentz62zz__hashz00(obj_t, obj_t);
static obj_t BGl_z62hashtablezf3z91zz__hashz00(obj_t, obj_t);
static bool_t BGl_plainzd2hashtablezd2removez12z12zz__hashz00(obj_t, obj_t);
static obj_t BGl_plainzd2hashtablezd2ze3vectorze3zz__hashz00(obj_t);
extern obj_t BGl_weakzd2hashtablezd2removez12z12zz__weakhashz00(obj_t, obj_t);
extern obj_t BGl_weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(obj_t);
extern obj_t BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t obj_to_string(obj_t, obj_t);
static obj_t BGl_z62makezd2hashtablezb0zz__hashz00(obj_t, obj_t);
static obj_t BGl_plainzd2hashtablezd2expandz12z12zz__hashz00(obj_t);
static obj_t BGl_plainzd2hashtablezd2filterz12z12zz__hashz00(obj_t, obj_t);
extern long bgl_string_hash(char *, int, int);
static obj_t BGl_z62hashtablezd2weakzd2datazf3z91zz__hashz00(obj_t, obj_t);
static obj_t BGl_z62hashtablezd2siza7ez17zz__hashz00(obj_t, obj_t);
extern obj_t BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_list3324z00zz__hashz00 = BUNSPEC;
static obj_t BGl_list3406z00zz__hashz00 = BUNSPEC;
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_getzd2hashnumberzd2persistentz00zz__hashz00(obj_t);
static obj_t BGl_list3416z00zz__hashz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2ze3listz31zz__hashz00(obj_t);
static obj_t BGl_z62hashtablezd2ze3listz53zz__hashz00(obj_t, obj_t);
static obj_t BGl_list3422z00zz__hashz00 = BUNSPEC;
extern long bgl_symbol_hash_number(obj_t);
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2clearz12zc0zz__hashz00(obj_t);
extern long bgl_pointer_hashnumber(obj_t, long);
extern obj_t BGl_weakzd2hashtablezd2getz00zz__weakhashz00(obj_t, obj_t);
extern obj_t BGl_weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_list3431z00zz__hashz00 = BUNSPEC;
static obj_t BGl_list3439z00zz__hashz00 = BUNSPEC;
extern obj_t BGl_weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(obj_t);
static obj_t BGl_plainzd2hashtablezd2ze3listze3zz__hashz00(obj_t);
static obj_t BGl_list3445z00zz__hashz00 = BUNSPEC;
static obj_t BGl_list3448z00zz__hashz00 = BUNSPEC;
static obj_t BGl_z62hashtablezd2weakzd2keyszf3z91zz__hashz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__weakhashz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_z62hashtablezd2containszf3z43zz__hashz00(obj_t, obj_t, obj_t);
static obj_t BGl_list3456z00zz__hashz00 = BUNSPEC;
static obj_t BGl_plainzd2hashtablezd2clearz12z12zz__hashz00(obj_t);
static obj_t BGl_z62hashtablezd2removez12za2zz__hashz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62hashtablezd2ze3vectorz53zz__hashz00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_hashtablezd2siza7ez75zz__hashz00(obj_t);
static obj_t BGl_z62hashtablezd2getzb0zz__hashz00(obj_t, obj_t, obj_t);
static obj_t BGl_list3461z00zz__hashz00 = BUNSPEC;
static obj_t BGl_list3381z00zz__hashz00 = BUNSPEC;
static obj_t BGl_list3464z00zz__hashz00 = BUNSPEC;
static obj_t BGl_z62hashtablezd2addz12za2zz__hashz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(obj_t);
extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, long);
static obj_t BGl_z62hashtablezd2putz12za2zz__hashz00(obj_t, obj_t, obj_t, obj_t);
extern long bgl_obj_hash_number(obj_t);
static obj_t BGl_list3470z00zz__hashz00 = BUNSPEC;
static obj_t BGl_list3473z00zz__hashz00 = BUNSPEC;
static obj_t BGl_list3394z00zz__hashz00 = BUNSPEC;
static obj_t BGl_z62hashtablezd2filterz12za2zz__hashz00(obj_t, obj_t, obj_t);
extern obj_t create_struct(obj_t, int);
static obj_t BGl_cnstzd2initzd2zz__hashz00();
static long BGl_objzd2hashze70z35zz__hashz00(obj_t);
extern long bgl_list_length(obj_t);
static obj_t BGl_z62hashtablezd2clearz12za2zz__hashz00(obj_t, obj_t);
static obj_t BGl_list3487z00zz__hashz00 = BUNSPEC;
static obj_t BGl_gczd2rootszd2initz00zz__hashz00();
static obj_t BGl_keyword3325z00zz__hashz00 = BUNSPEC;
static obj_t BGl_keyword3327z00zz__hashz00 = BUNSPEC;
static obj_t BGl_importedzd2moduleszd2initz00zz__hashz00();
static obj_t BGl_keyword3329z00zz__hashz00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza31456ze3ze5zz__hashz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2forzd2eachz00zz__hashz00(obj_t, obj_t);
extern obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
static obj_t BGl_keyword3331z00zz__hashz00 = BUNSPEC;
static obj_t BGl_keyword3333z00zz__hashz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2keyzd2listz00zz__hashz00(obj_t);
static obj_t BGl_keyword3335z00zz__hashz00 = BUNSPEC;
static obj_t BGl_keyword3337z00zz__hashz00 = BUNSPEC;
static obj_t BGl__stringzd2hashzd2zz__hashz00(obj_t, obj_t);
extern obj_t BGl_weakzd2hashtablezd2mapz00zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31369ze3ze5zz__hashz00(obj_t, obj_t);
extern obj_t BGl_filterz12z12zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_z62getzd2hashnumberzb0zz__hashz00(obj_t, obj_t);
static obj_t BGl_symbol3316z00zz__hashz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2addz12zc0zz__hashz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3321z00zz__hashz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_hashtablezd2containszf3z21zz__hashz00(obj_t, obj_t);
static obj_t BGl_symbol3407z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3409z00zz__hashz00 = BUNSPEC;
BGL_EXPORTED_DECL long BGl_stringzd2hashzd2zz__hashz00(obj_t, obj_t, obj_t);
extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_plainzd2hashtablezd2addz12z12zz__hashz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_getzd2pointerzd2hashnumberz00zz__hashz00(obj_t, long);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, int, int);
static obj_t BGl_plainzd2hashtablezd2putz12z12zz__hashz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62hashtablezd2mapzb0zz__hashz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3417z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3419z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3339z00zz__hashz00 = BUNSPEC;
static bool_t BGl_plainzd2hashtablezd2forzd2eachzd2zz__hashz00(obj_t, obj_t);
static long BGl_defaultzd2hashtablezd2bucketzd2lengthzd2zz__hashz00;
extern long bgl_date_to_seconds(obj_t);
static obj_t BGl_plainzd2hashtablezd2keyzd2listzd2zz__hashz00(obj_t);
extern obj_t bstring_to_keyword(obj_t);
static obj_t BGl_symbol3423z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3425z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3344z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3346z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3348z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3350z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3432z00zz__hashz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2updatez12zc0zz__hashz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_getzd2hashnumberzd2zz__hashz00(obj_t);
static obj_t BGl_symbol3440z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3446z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3449z00zz__hashz00 = BUNSPEC;
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2keyzd2listzd2envzd2zz__hashz00, BgL_bgl_za762hashtableza7d2k3501z00, BGl_z62hashtablezd2keyzd2listz62zz__hashz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2siza7ezd2envza7zz__hashz00, BgL_bgl_za762hashtableza7d2s3502z00, BGl_z62hashtablezd2siza7ez17zz__hashz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2mapzd2envz00zz__hashz00, BgL_bgl_za762hashtableza7d2m3503z00, BGl_z62hashtablezd2mapzb0zz__hashz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2getzd2envz00zz__hashz00, BgL_bgl_za762hashtableza7d2g3504z00, BGl_z62hashtablezd2getzb0zz__hashz00, 0L, BUNSPEC, 2 );
extern obj_t BGl_stringzd3zf3zd2envzf2zz__r4_strings_6_7z00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2addz12zd2envz12zz__hashz00, BgL_bgl_za762hashtableza7d2a3505z00, BGl_z62hashtablezd2addz12za2zz__hashz00, 0L, BUNSPEC, 5 );
DEFINE_STRING( BGl_string3309z00zz__hashz00, BgL_bgl_string3309za700za7za7_3506za7, "make-hashtable", 14 );
DEFINE_REAL( BGl_real3320z00zz__hashz00, BgL_bgl_real3320za700za7za7__h3507za7, 1.2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2putz12zd2envz12zz__hashz00, BgL_bgl_za762hashtableza7d2p3508z00, BGl_z62hashtablezd2putz12za2zz__hashz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2hashnumberzd2envz00zz__hashz00, BgL_bgl_za762getza7d2hashnum3509z00, BGl_z62getzd2hashnumberzb0zz__hashz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3310z00zz__hashz00, BgL_bgl_string3310za700za7za7_3510za7, "Illegal default bucket length", 29 );
DEFINE_STRING( BGl_string3311z00zz__hashz00, BgL_bgl_string3311za700za7za7_3511za7, "Illegal max bucket length", 25 );
DEFINE_STRING( BGl_string3312z00zz__hashz00, BgL_bgl_string3312za700za7za7_3512za7, "Illegal equality test", 21 );
DEFINE_STRING( BGl_string3313z00zz__hashz00, BgL_bgl_string3313za700za7za7_3513za7, "Illegal hashnumber function", 27 );
DEFINE_STRING( BGl_string3314z00zz__hashz00, BgL_bgl_string3314za700za7za7_3514za7, "/tmp/4.4a/runtime/Llib/hash.scm", 31 );
DEFINE_STRING( BGl_string3315z00zz__hashz00, BgL_bgl_string3315za700za7za7_3515za7, "bint", 4 );
DEFINE_STRING( BGl_string3317z00zz__hashz00, BgL_bgl_string3317za700za7za7_3516za7, "%hashtable", 10 );
DEFINE_STRING( BGl_string3318z00zz__hashz00, BgL_bgl_string3318za700za7za7_3517za7, "symbol", 6 );
DEFINE_STRING( BGl_string3319z00zz__hashz00, BgL_bgl_string3319za700za7za7_3518za7, "struct-set!:not an instance of", 30 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2removez12zd2envz12zz__hashz00, BgL_bgl_za762hashtableza7d2r3519z00, BGl_z62hashtablezd2removez12za2zz__hashz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3400z00zz__hashz00, BgL_bgl_string3400za700za7za7_3520za7, "list", 4 );
DEFINE_STRING( BGl_string3401z00zz__hashz00, BgL_bgl_string3401za700za7za7_3521za7, "&hashtable-filter!", 18 );
DEFINE_STRING( BGl_string3402z00zz__hashz00, BgL_bgl_string3402za700za7za7_3522za7, "plain-hashtable-filter!", 23 );
DEFINE_STRING( BGl_string3403z00zz__hashz00, BgL_bgl_string3403za700za7za7_3523za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string3322z00zz__hashz00, BgL_bgl_string3322za700za7za7_3524za7, "none", 4 );
DEFINE_STRING( BGl_string3404z00zz__hashz00, BgL_bgl_string3404za700za7za7_3525za7, "<@anonymous:1456>", 17 );
DEFINE_STRING( BGl_string3323z00zz__hashz00, BgL_bgl_string3323za700za7za7_3526za7, "vector-ref", 10 );
DEFINE_STRING( BGl_string3405z00zz__hashz00, BgL_bgl_string3405za700za7za7_3527za7, "<@anonymous:1456>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string3326z00zz__hashz00, BgL_bgl_string3326za700za7za7_3528za7, "bucket-expansion", 16 );
DEFINE_STRING( BGl_string3408z00zz__hashz00, BgL_bgl_string3408za700za7za7_3529za7, "arg1457", 7 );
DEFINE_STRING( BGl_string3328z00zz__hashz00, BgL_bgl_string3328za700za7za7_3530za7, "eqtest", 6 );
DEFINE_STRING( BGl_string3410z00zz__hashz00, BgL_bgl_string3410za700za7za7_3531za7, "arg1458", 7 );
DEFINE_STRING( BGl_string3411z00zz__hashz00, BgL_bgl_string3411za700za7za7_3532za7, "&hashtable-clear!", 17 );
DEFINE_STRING( BGl_string3330z00zz__hashz00, BgL_bgl_string3330za700za7za7_3533za7, "hash", 4 );
DEFINE_STRING( BGl_string3412z00zz__hashz00, BgL_bgl_string3412za700za7za7_3534za7, "plain-hashtable-clear!", 22 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2filterz12zd2envz12zz__hashz00, BgL_bgl_za762hashtableza7d2f3535z00, BGl_z62hashtablezd2filterz12za2zz__hashz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3413z00zz__hashz00, BgL_bgl_string3413za700za7za7_3536za7, "&hashtable-contains?", 20 );
DEFINE_STRING( BGl_string3332z00zz__hashz00, BgL_bgl_string3332za700za7za7_3537za7, "max-bucket-length", 17 );
DEFINE_STRING( BGl_string3414z00zz__hashz00, BgL_bgl_string3414za700za7za7_3538za7, "plain-hashtable-contains?", 25 );
DEFINE_STRING( BGl_string3415z00zz__hashz00, BgL_bgl_string3415za700za7za7_3539za7, "plain-hashtable-contains?:Wrong number of arguments", 51 );
DEFINE_STRING( BGl_string3334z00zz__hashz00, BgL_bgl_string3334za700za7za7_3540za7, "max-length", 10 );
DEFINE_STRING( BGl_string3336z00zz__hashz00, BgL_bgl_string3336za700za7za7_3541za7, "size", 4 );
DEFINE_STRING( BGl_string3418z00zz__hashz00, BgL_bgl_string3418za700za7za7_3542za7, "hashn", 5 );
DEFINE_STRING( BGl_string3338z00zz__hashz00, BgL_bgl_string3338za700za7za7_3543za7, "weak", 4 );
DEFINE_STRING( BGl_string3420z00zz__hashz00, BgL_bgl_string3420za700za7za7_3544za7, "key", 3 );
DEFINE_STRING( BGl_string3421z00zz__hashz00, BgL_bgl_string3421za700za7za7_3545za7, "loop:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string3340z00zz__hashz00, BgL_bgl_string3340za700za7za7_3546za7, "create-hashtable", 16 );
DEFINE_STRING( BGl_string3341z00zz__hashz00, BgL_bgl_string3341za700za7za7_3547za7, "Illegal keyword argument", 24 );
DEFINE_STRING( BGl_string3342z00zz__hashz00, BgL_bgl_string3342za700za7za7_3548za7, "_create-hashtable", 17 );
DEFINE_STRING( BGl_string3424z00zz__hashz00, BgL_bgl_string3424za700za7za7_3549za7, "eqt", 3 );
DEFINE_STRING( BGl_string3343z00zz__hashz00, BgL_bgl_string3343za700za7za7_3550za7, "wrong number of arguments: [0..7] expected, provided", 52 );
DEFINE_STRING( BGl_string3426z00zz__hashz00, BgL_bgl_string3426za700za7za7_3551za7, "arg1471", 7 );
DEFINE_STRING( BGl_string3345z00zz__hashz00, BgL_bgl_string3345za700za7za7_3552za7, "keys", 4 );
DEFINE_STRING( BGl_string3427z00zz__hashz00, BgL_bgl_string3427za700za7za7_3553za7, "hashtable-get", 13 );
DEFINE_STRING( BGl_string3428z00zz__hashz00, BgL_bgl_string3428za700za7za7_3554za7, "&hashtable-get", 14 );
DEFINE_STRING( BGl_string3347z00zz__hashz00, BgL_bgl_string3347za700za7za7_3555za7, "data", 4 );
DEFINE_STRING( BGl_string3429z00zz__hashz00, BgL_bgl_string3429za700za7za7_3556za7, "plain-hashtable-get", 19 );
DEFINE_STRING( BGl_string3349z00zz__hashz00, BgL_bgl_string3349za700za7za7_3557za7, "both", 4 );
DEFINE_STRING( BGl_string3430z00zz__hashz00, BgL_bgl_string3430za700za7za7_3558za7, "plain-hashtable-get:Wrong number of arguments", 45 );
DEFINE_STRING( BGl_string3351z00zz__hashz00, BgL_bgl_string3351za700za7za7_3559za7, "string", 6 );
DEFINE_STRING( BGl_string3433z00zz__hashz00, BgL_bgl_string3433za700za7za7_3560za7, "arg1480", 7 );
DEFINE_STRING( BGl_string3352z00zz__hashz00, BgL_bgl_string3352za700za7za7_3561za7, "Cannot provide eqtest for string hashtable", 42 );
DEFINE_STRING( BGl_string3434z00zz__hashz00, BgL_bgl_string3434za700za7za7_3562za7, "string-hashtable-get", 20 );
DEFINE_STRING( BGl_string3353z00zz__hashz00, BgL_bgl_string3353za700za7za7_3563za7, "Cannot provide hash for string hashtable", 40 );
DEFINE_STRING( BGl_string3435z00zz__hashz00, BgL_bgl_string3435za700za7za7_3564za7, "&hashtable-put!", 15 );
DEFINE_STRING( BGl_string3436z00zz__hashz00, BgL_bgl_string3436za700za7za7_3565za7, "plain-hashtable-put!", 20 );
DEFINE_STRING( BGl_string3355z00zz__hashz00, BgL_bgl_string3355za700za7za7_3566za7, "<@anonymous:1369>", 17 );
DEFINE_STRING( BGl_string3437z00zz__hashz00, BgL_bgl_string3437za700za7za7_3567za7, "plain-hashtable-put!:Wrong number of arguments", 46 );
DEFINE_STRING( BGl_string3356z00zz__hashz00, BgL_bgl_string3356za700za7za7_3568za7, "bstring", 7 );
DEFINE_STRING( BGl_string3438z00zz__hashz00, BgL_bgl_string3438za700za7za7_3569za7, "hashtable-put!", 14 );
DEFINE_STRING( BGl_string3357z00zz__hashz00, BgL_bgl_string3357za700za7za7_3570za7, "hashtable?", 10 );
DEFINE_STRING( BGl_string3358z00zz__hashz00, BgL_bgl_string3358za700za7za7_3571za7, "hashtable-weak?", 15 );
DEFINE_STRING( BGl_string3359z00zz__hashz00, BgL_bgl_string3359za700za7za7_3572za7, "struct-ref:not an instance of", 29 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2weakzd2datazf3zd2envz21zz__hashz00, BgL_bgl_za762hashtableza7d2w3573z00, BGl_z62hashtablezd2weakzd2datazf3z91zz__hashz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3354z00zz__hashz00, BgL_bgl_za762za7c3za704anonymo3574za7, BGl_z62zc3z04anonymousza31369ze3ze5zz__hashz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3441z00zz__hashz00, BgL_bgl_string3441za700za7za7_3575za7, "arg1521", 7 );
DEFINE_STRING( BGl_string3360z00zz__hashz00, BgL_bgl_string3360za700za7za7_3576za7, "hashtable-weak-keys?", 20 );
DEFINE_STRING( BGl_string3442z00zz__hashz00, BgL_bgl_string3442za700za7za7_3577za7, "&hashtable-update!", 18 );
DEFINE_STRING( BGl_string3361z00zz__hashz00, BgL_bgl_string3361za700za7za7_3578za7, "&hashtable-weak-keys?", 21 );
DEFINE_STRING( BGl_string3443z00zz__hashz00, BgL_bgl_string3443za700za7za7_3579za7, "plain-hashtable-update!", 23 );
DEFINE_STRING( BGl_string3362z00zz__hashz00, BgL_bgl_string3362za700za7za7_3580za7, "struct", 6 );
DEFINE_STRING( BGl_string3444z00zz__hashz00, BgL_bgl_string3444za700za7za7_3581za7, "plain-hashtable-update!:Wrong number of arguments", 49 );
DEFINE_STRING( BGl_string3363z00zz__hashz00, BgL_bgl_string3363za700za7za7_3582za7, "hashtable-weak-data?", 20 );
DEFINE_STRING( BGl_string3364z00zz__hashz00, BgL_bgl_string3364za700za7za7_3583za7, "&hashtable-weak-data?", 21 );
DEFINE_STRING( BGl_string3365z00zz__hashz00, BgL_bgl_string3365za700za7za7_3584za7, "hashtable-size", 14 );
DEFINE_STRING( BGl_string3447z00zz__hashz00, BgL_bgl_string3447za700za7za7_3585za7, "arg1551", 7 );
DEFINE_STRING( BGl_string3366z00zz__hashz00, BgL_bgl_string3366za700za7za7_3586za7, "&hashtable-size", 15 );
DEFINE_STRING( BGl_string3367z00zz__hashz00, BgL_bgl_string3367za700za7za7_3587za7, "&hashtable->vector", 18 );
DEFINE_STRING( BGl_string3368z00zz__hashz00, BgL_bgl_string3368za700za7za7_3588za7, "plain-hashtable->vector", 23 );
DEFINE_STRING( BGl_string3369z00zz__hashz00, BgL_bgl_string3369za700za7za7_3589za7, "vector", 6 );
DEFINE_STRING( BGl_string3450z00zz__hashz00, BgL_bgl_string3450za700za7za7_3590za7, "proc", 4 );
DEFINE_STRING( BGl_string3370z00zz__hashz00, BgL_bgl_string3370za700za7za7_3591za7, "loop", 4 );
DEFINE_STRING( BGl_string3452z00zz__hashz00, BgL_bgl_string3452za700za7za7_3592za7, "arg1545", 7 );
DEFINE_STRING( BGl_string3371z00zz__hashz00, BgL_bgl_string3371za700za7za7_3593za7, "liip", 4 );
DEFINE_STRING( BGl_string3453z00zz__hashz00, BgL_bgl_string3453za700za7za7_3594za7, "&hashtable-add!", 15 );
DEFINE_STRING( BGl_string3372z00zz__hashz00, BgL_bgl_string3372za700za7za7_3595za7, "pair", 4 );
DEFINE_STRING( BGl_string3454z00zz__hashz00, BgL_bgl_string3454za700za7za7_3596za7, "plain-hashtable-add!", 20 );
DEFINE_STRING( BGl_string3373z00zz__hashz00, BgL_bgl_string3373za700za7za7_3597za7, "&hashtable->list", 16 );
DEFINE_STRING( BGl_string3455z00zz__hashz00, BgL_bgl_string3455za700za7za7_3598za7, "plain-hashtable-add!:Wrong number of arguments", 46 );
DEFINE_STRING( BGl_string3374z00zz__hashz00, BgL_bgl_string3374za700za7za7_3599za7, "plain-hashtable->list", 21 );
DEFINE_STRING( BGl_string3375z00zz__hashz00, BgL_bgl_string3375za700za7za7_3600za7, "&hashtable-key-list", 19 );
DEFINE_STRING( BGl_string3376z00zz__hashz00, BgL_bgl_string3376za700za7za7_3601za7, "plain-hashtable-key-list", 24 );
DEFINE_STRING( BGl_string3458z00zz__hashz00, BgL_bgl_string3458za700za7za7_3602za7, "obj", 3 );
DEFINE_STRING( BGl_string3377z00zz__hashz00, BgL_bgl_string3377za700za7za7_3603za7, "&hashtable-map", 14 );
DEFINE_STRING( BGl_string3378z00zz__hashz00, BgL_bgl_string3378za700za7za7_3604za7, "procedure", 9 );
DEFINE_STRING( BGl_string3379z00zz__hashz00, BgL_bgl_string3379za700za7za7_3605za7, "plain-hashtable-map", 19 );
DEFINE_STRING( BGl_string3460z00zz__hashz00, BgL_bgl_string3460za700za7za7_3606za7, "init", 4 );
DEFINE_STRING( BGl_string3380z00zz__hashz00, BgL_bgl_string3380za700za7za7_3607za7, "liip:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string3463z00zz__hashz00, BgL_bgl_string3463za700za7za7_3608za7, "arg1578", 7 );
DEFINE_STRING( BGl_string3383z00zz__hashz00, BgL_bgl_string3383za700za7za7_3609za7, "funcall", 7 );
DEFINE_STRING( BGl_string3466z00zz__hashz00, BgL_bgl_string3466za700za7za7_3610za7, "arg1574", 7 );
DEFINE_STRING( BGl_string3385z00zz__hashz00, BgL_bgl_string3385za700za7za7_3611za7, "fun", 3 );
DEFINE_STRING( BGl_string3467z00zz__hashz00, BgL_bgl_string3467za700za7za7_3612za7, "&hashtable-remove!", 18 );
DEFINE_STRING( BGl_string3468z00zz__hashz00, BgL_bgl_string3468za700za7za7_3613za7, "plain-hashtable-remove!", 23 );
DEFINE_STRING( BGl_string3387z00zz__hashz00, BgL_bgl_string3387za700za7za7_3614za7, "arg1437", 7 );
DEFINE_STRING( BGl_string3469z00zz__hashz00, BgL_bgl_string3469za700za7za7_3615za7, "plain-hashtable-remove!:Wrong number of arguments", 49 );
DEFINE_STRING( BGl_string3389z00zz__hashz00, BgL_bgl_string3389za700za7za7_3616za7, "arg1438", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2hashtablezd2envz00zz__hashz00, BgL_bgl_za762makeza7d2hashta3617z00, va_generic_entry, BGl_z62makezd2hashtablezb0zz__hashz00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2forzd2eachzd2envzd2zz__hashz00, BgL_bgl_za762hashtableza7d2f3618z00, BGl_z62hashtablezd2forzd2eachz62zz__hashz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2hashnumberzd2persistentzd2envzd2zz__hashz00, BgL_bgl_za762getza7d2hashnum3619z00, BGl_z62getzd2hashnumberzd2persistentz62zz__hashz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3390z00zz__hashz00, BgL_bgl_string3390za700za7za7_3620za7, "&hashtable-for-each", 19 );
DEFINE_STRING( BGl_string3472z00zz__hashz00, BgL_bgl_string3472za700za7za7_3621za7, "arg1603", 7 );
DEFINE_STRING( BGl_string3391z00zz__hashz00, BgL_bgl_string3391za700za7za7_3622za7, "plain-hashtable-for-each", 24 );
DEFINE_STRING( BGl_string3392z00zz__hashz00, BgL_bgl_string3392za700za7za7_3623za7, "<@anonymous:1442>", 17 );
DEFINE_STRING( BGl_string3393z00zz__hashz00, BgL_bgl_string3393za700za7za7_3624za7, "<@anonymous:1442>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string3475z00zz__hashz00, BgL_bgl_string3475za700za7za7_3625za7, "arg1602", 7 );
DEFINE_STRING( BGl_string3476z00zz__hashz00, BgL_bgl_string3476za700za7za7_3626za7, "plain-hashtable-expand!", 23 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2ze3vectorzd2envze3zz__hashz00, BgL_bgl_za762hashtableza7d2za73627za7, BGl_z62hashtablezd2ze3vectorz53zz__hashz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3477z00zz__hashz00, BgL_bgl_string3477za700za7za7_3628za7, "<@anonymous:1616>", 17 );
DEFINE_STRING( BGl_string3396z00zz__hashz00, BgL_bgl_string3396za700za7za7_3629za7, "arg1444", 7 );
DEFINE_STRING( BGl_string3478z00zz__hashz00, BgL_bgl_string3478za700za7za7_3630za7, "<@anonymous:1616>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string3479z00zz__hashz00, BgL_bgl_string3479za700za7za7_3631za7, "Hashtable too large (new-len=~a/~a, size=~a)", 44 );
DEFINE_STRING( BGl_string3398z00zz__hashz00, BgL_bgl_string3398za700za7za7_3632za7, "arg1445", 7 );
DEFINE_STRING( BGl_string3399z00zz__hashz00, BgL_bgl_string3399za700za7za7_3633za7, "for-each", 8 );
DEFINE_STRING( BGl_string3480z00zz__hashz00, BgL_bgl_string3480za700za7za7_3634za7, "get-hashnumber", 14 );
DEFINE_STRING( BGl_string3481z00zz__hashz00, BgL_bgl_string3481za700za7za7_3635za7, "real", 4 );
DEFINE_STRING( BGl_string3482z00zz__hashz00, BgL_bgl_string3482za700za7za7_3636za7, "index out of range [0..", 23 );
DEFINE_STRING( BGl_string3483z00zz__hashz00, BgL_bgl_string3483za700za7za7_3637za7, "]", 1 );
DEFINE_STRING( BGl_string3485z00zz__hashz00, BgL_bgl_string3485za700za7za7_3638za7, "ucs2-string-ref", 15 );
DEFINE_STRING( BGl_string3486z00zz__hashz00, BgL_bgl_string3486za700za7za7_3639za7, "bucs2", 5 );
DEFINE_STRING( BGl_string3489z00zz__hashz00, BgL_bgl_string3489za700za7za7_3640za7, "get", 3 );
DEFINE_STRING( BGl_string3491z00zz__hashz00, BgL_bgl_string3491za700za7za7_3641za7, "i", 1 );
DEFINE_STRING( BGl_string3492z00zz__hashz00, BgL_bgl_string3492za700za7za7_3642za7, "obj-hash~0", 10 );
DEFINE_STRING( BGl_string3493z00zz__hashz00, BgL_bgl_string3493za700za7za7_3643za7, "&get-pointer-hashnumber", 23 );
DEFINE_STRING( BGl_string3495z00zz__hashz00, BgL_bgl_string3495za700za7za7_3644za7, "string-hash", 11 );
DEFINE_STRING( BGl_string3496z00zz__hashz00, BgL_bgl_string3496za700za7za7_3645za7, "wrong number of arguments: [1..3] expected, provided", 52 );
DEFINE_STRING( BGl_string3497z00zz__hashz00, BgL_bgl_string3497za700za7za7_3646za7, "_string-hash", 12 );
DEFINE_STRING( BGl_string3498z00zz__hashz00, BgL_bgl_string3498za700za7za7_3647za7, "__hash", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2updatez12zd2envz12zz__hashz00, BgL_bgl_za762hashtableza7d2u3648z00, BGl_z62hashtablezd2updatez12za2zz__hashz00, 0L, BUNSPEC, 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2clearz12zd2envz12zz__hashz00, BgL_bgl_za762hashtableza7d2c3649z00, BGl_z62hashtablezd2clearz12za2zz__hashz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezf3zd2envz21zz__hashz00, BgL_bgl_za762hashtableza7f3za73650za7, BGl_z62hashtablezf3z91zz__hashz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2containszf3zd2envzf3zz__hashz00, BgL_bgl_za762hashtableza7d2c3651z00, BGl_z62hashtablezd2containszf3z43zz__hashz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2weakzd2keyszf3zd2envz21zz__hashz00, BgL_bgl_za762hashtableza7d2w3652z00, BGl_z62hashtablezd2weakzd2keyszf3z91zz__hashz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2hashzd2envz00zz__hashz00, BgL_bgl__stringza7d2hashza7d3653z00, opt_generic_entry, BGl__stringzd2hashzd2zz__hashz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_createzd2hashtablezd2envz00zz__hashz00, BgL_bgl__createza7d2hashta3654za7, opt_generic_entry, BGl__createzd2hashtablezd2zz__hashz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2pointerzd2hashnumberzd2envzd2zz__hashz00, BgL_bgl_za762getza7d2pointer3655z00, BGl_z62getzd2pointerzd2hashnumberz62zz__hashz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2ze3listzd2envze3zz__hashz00, BgL_bgl_za762hashtableza7d2za73656za7, BGl_z62hashtablezd2ze3listz53zz__hashz00, 0L, BUNSPEC, 1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_symbol3451z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3457z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3459z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3462z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3382z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3465z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3384z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3386z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3388z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3471z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3474z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3395z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3397z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3484z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3488z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3490z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3494z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_list3324z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_list3406z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_list3416z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_list3422z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_list3431z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_list3439z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_list3445z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_list3448z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_list3456z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_list3461z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_list3381z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_list3464z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_list3470z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_list3473z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_list3394z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_list3487z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_keyword3325z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_keyword3327z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_keyword3329z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_keyword3331z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_keyword3333z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_keyword3335z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_keyword3337z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3316z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3321z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3407z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3409z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3417z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3419z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3339z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3423z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3425z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3344z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3346z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3348z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3350z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3432z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3440z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3446z00zz__hashz00) );
ADD_ROOT( (void *)(&BGl_symbol3449z00zz__hashz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long BgL_checksumz00_5193, char * BgL_fromz00_5194)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__hashz00))
{ 
BGl_requirezd2initializa7ationz75zz__hashz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__hashz00(); 
BGl_cnstzd2initzd2zz__hashz00(); 
BGl_importedzd2moduleszd2initz00zz__hashz00(); 
return 
BGl_toplevelzd2initzd2zz__hashz00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__hashz00()
{
{ /* Llib/hash.scm 18 */
BGl_symbol3316z00zz__hashz00 = 
bstring_to_symbol(BGl_string3317z00zz__hashz00); 
BGl_symbol3321z00zz__hashz00 = 
bstring_to_symbol(BGl_string3322z00zz__hashz00); 
BGl_keyword3325z00zz__hashz00 = 
bstring_to_keyword(BGl_string3326z00zz__hashz00); 
BGl_keyword3327z00zz__hashz00 = 
bstring_to_keyword(BGl_string3328z00zz__hashz00); 
BGl_keyword3329z00zz__hashz00 = 
bstring_to_keyword(BGl_string3330z00zz__hashz00); 
BGl_keyword3331z00zz__hashz00 = 
bstring_to_keyword(BGl_string3332z00zz__hashz00); 
BGl_keyword3333z00zz__hashz00 = 
bstring_to_keyword(BGl_string3334z00zz__hashz00); 
BGl_keyword3335z00zz__hashz00 = 
bstring_to_keyword(BGl_string3336z00zz__hashz00); 
BGl_keyword3337z00zz__hashz00 = 
bstring_to_keyword(BGl_string3338z00zz__hashz00); 
BGl_list3324z00zz__hashz00 = 
MAKE_YOUNG_PAIR(BGl_keyword3325z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_keyword3327z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_keyword3329z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_keyword3331z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_keyword3333z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_keyword3335z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_keyword3337z00zz__hashz00, BNIL))))))); 
BGl_symbol3339z00zz__hashz00 = 
bstring_to_symbol(BGl_string3340z00zz__hashz00); 
BGl_symbol3344z00zz__hashz00 = 
bstring_to_symbol(BGl_string3345z00zz__hashz00); 
BGl_symbol3346z00zz__hashz00 = 
bstring_to_symbol(BGl_string3347z00zz__hashz00); 
BGl_symbol3348z00zz__hashz00 = 
bstring_to_symbol(BGl_string3349z00zz__hashz00); 
BGl_symbol3350z00zz__hashz00 = 
bstring_to_symbol(BGl_string3351z00zz__hashz00); 
BGl_symbol3382z00zz__hashz00 = 
bstring_to_symbol(BGl_string3383z00zz__hashz00); 
BGl_symbol3384z00zz__hashz00 = 
bstring_to_symbol(BGl_string3385z00zz__hashz00); 
BGl_symbol3386z00zz__hashz00 = 
bstring_to_symbol(BGl_string3387z00zz__hashz00); 
BGl_symbol3388z00zz__hashz00 = 
bstring_to_symbol(BGl_string3389z00zz__hashz00); 
BGl_list3381z00zz__hashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3382z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3384z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3384z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3386z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3388z00zz__hashz00, BNIL))))); 
BGl_symbol3395z00zz__hashz00 = 
bstring_to_symbol(BGl_string3396z00zz__hashz00); 
BGl_symbol3397z00zz__hashz00 = 
bstring_to_symbol(BGl_string3398z00zz__hashz00); 
BGl_list3394z00zz__hashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3382z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3384z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3384z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3395z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3397z00zz__hashz00, BNIL))))); 
BGl_symbol3407z00zz__hashz00 = 
bstring_to_symbol(BGl_string3408z00zz__hashz00); 
BGl_symbol3409z00zz__hashz00 = 
bstring_to_symbol(BGl_string3410z00zz__hashz00); 
BGl_list3406z00zz__hashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3382z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3384z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3384z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3407z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3409z00zz__hashz00, BNIL))))); 
BGl_symbol3417z00zz__hashz00 = 
bstring_to_symbol(BGl_string3418z00zz__hashz00); 
BGl_symbol3419z00zz__hashz00 = 
bstring_to_symbol(BGl_string3420z00zz__hashz00); 
BGl_list3416z00zz__hashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3382z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3417z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3417z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3419z00zz__hashz00, BNIL)))); 
BGl_symbol3423z00zz__hashz00 = 
bstring_to_symbol(BGl_string3424z00zz__hashz00); 
BGl_symbol3425z00zz__hashz00 = 
bstring_to_symbol(BGl_string3426z00zz__hashz00); 
BGl_list3422z00zz__hashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3382z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3423z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3423z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3425z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3419z00zz__hashz00, BNIL))))); 
BGl_symbol3432z00zz__hashz00 = 
bstring_to_symbol(BGl_string3433z00zz__hashz00); 
BGl_list3431z00zz__hashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3382z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3423z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3423z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3432z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3419z00zz__hashz00, BNIL))))); 
BGl_symbol3440z00zz__hashz00 = 
bstring_to_symbol(BGl_string3441z00zz__hashz00); 
BGl_list3439z00zz__hashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3382z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3423z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3423z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3440z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3419z00zz__hashz00, BNIL))))); 
BGl_symbol3446z00zz__hashz00 = 
bstring_to_symbol(BGl_string3447z00zz__hashz00); 
BGl_list3445z00zz__hashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3382z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3423z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3423z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3446z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3419z00zz__hashz00, BNIL))))); 
BGl_symbol3449z00zz__hashz00 = 
bstring_to_symbol(BGl_string3450z00zz__hashz00); 
BGl_symbol3451z00zz__hashz00 = 
bstring_to_symbol(BGl_string3452z00zz__hashz00); 
BGl_list3448z00zz__hashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3382z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3449z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3449z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3451z00zz__hashz00, BNIL)))); 
BGl_symbol3457z00zz__hashz00 = 
bstring_to_symbol(BGl_string3458z00zz__hashz00); 
BGl_symbol3459z00zz__hashz00 = 
bstring_to_symbol(BGl_string3460z00zz__hashz00); 
BGl_list3456z00zz__hashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3382z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3449z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3449z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3457z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3459z00zz__hashz00, BNIL))))); 
BGl_symbol3462z00zz__hashz00 = 
bstring_to_symbol(BGl_string3463z00zz__hashz00); 
BGl_list3461z00zz__hashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3382z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3423z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3423z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3462z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3419z00zz__hashz00, BNIL))))); 
BGl_symbol3465z00zz__hashz00 = 
bstring_to_symbol(BGl_string3466z00zz__hashz00); 
BGl_list3464z00zz__hashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3382z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3449z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3449z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3457z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3465z00zz__hashz00, BNIL))))); 
BGl_symbol3471z00zz__hashz00 = 
bstring_to_symbol(BGl_string3472z00zz__hashz00); 
BGl_list3470z00zz__hashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3382z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3423z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3423z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3471z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3419z00zz__hashz00, BNIL))))); 
BGl_symbol3474z00zz__hashz00 = 
bstring_to_symbol(BGl_string3475z00zz__hashz00); 
BGl_list3473z00zz__hashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3382z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3423z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3423z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3474z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3419z00zz__hashz00, BNIL))))); 
BGl_symbol3484z00zz__hashz00 = 
bstring_to_symbol(BGl_string3485z00zz__hashz00); 
BGl_symbol3488z00zz__hashz00 = 
bstring_to_symbol(BGl_string3489z00zz__hashz00); 
BGl_symbol3490z00zz__hashz00 = 
bstring_to_symbol(BGl_string3491z00zz__hashz00); 
BGl_list3487z00zz__hashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3382z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3488z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3488z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3419z00zz__hashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3490z00zz__hashz00, BNIL))))); 
return ( 
BGl_symbol3494z00zz__hashz00 = 
bstring_to_symbol(BGl_string3495z00zz__hashz00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__hashz00()
{
{ /* Llib/hash.scm 18 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__hashz00()
{
{ /* Llib/hash.scm 18 */
BGl_defaultzd2hashtablezd2bucketzd2lengthzd2zz__hashz00 = ((long)128); 
return ( 
BGl_defaultzd2maxzd2bucketzd2lengthzd2zz__hashz00 = ((long)10), BUNSPEC) ;} 

}



/* make-hashtable */
BGL_EXPORTED_DEF obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t BgL_argsz00_42)
{
{ /* Llib/hash.scm 136 */
{ /* Llib/hash.scm 137 */
obj_t BgL_siza7eza7_1466;
if(
PAIRP(BgL_argsz00_42))
{ /* Llib/hash.scm 138 */
obj_t BgL_siza7eza7_1503;
BgL_siza7eza7_1503 = 
CAR(BgL_argsz00_42); 
BgL_argsz00_42 = 
CDR(BgL_argsz00_42); 
{ /* Llib/hash.scm 141 */
bool_t BgL_test3659z00_5328;
if(
INTEGERP(BgL_siza7eza7_1503))
{ /* Llib/hash.scm 141 */
BgL_test3659z00_5328 = 
(
(long)CINT(BgL_siza7eza7_1503)>=((long)1))
; }  else 
{ /* Llib/hash.scm 141 */
BgL_test3659z00_5328 = ((bool_t)0)
; } 
if(BgL_test3659z00_5328)
{ /* Llib/hash.scm 141 */
BgL_siza7eza7_1466 = BgL_siza7eza7_1503; }  else 
{ /* Llib/hash.scm 141 */
if(
(BgL_siza7eza7_1503==BUNSPEC))
{ /* Llib/hash.scm 143 */
BgL_siza7eza7_1466 = 
BINT(((long)128)); }  else 
{ /* Llib/hash.scm 143 */
BgL_siza7eza7_1466 = 
BGl_errorz00zz__errorz00(BGl_string3309z00zz__hashz00, BGl_string3310z00zz__hashz00, BgL_siza7eza7_1503); } } } }  else 
{ /* Llib/hash.scm 137 */
BgL_siza7eza7_1466 = 
BINT(((long)128)); } 
{ /* Llib/hash.scm 137 */
obj_t BgL_mblenz00_1467;
if(
PAIRP(BgL_argsz00_42))
{ /* Llib/hash.scm 151 */
obj_t BgL_mblenz00_1497;
BgL_mblenz00_1497 = 
CAR(BgL_argsz00_42); 
BgL_argsz00_42 = 
CDR(BgL_argsz00_42); 
{ /* Llib/hash.scm 154 */
bool_t BgL_test3663z00_5342;
if(
INTEGERP(BgL_mblenz00_1497))
{ /* Llib/hash.scm 154 */
BgL_test3663z00_5342 = 
(
(long)CINT(BgL_mblenz00_1497)>=((long)1))
; }  else 
{ /* Llib/hash.scm 154 */
BgL_test3663z00_5342 = ((bool_t)0)
; } 
if(BgL_test3663z00_5342)
{ /* Llib/hash.scm 154 */
BgL_mblenz00_1467 = BgL_mblenz00_1497; }  else 
{ /* Llib/hash.scm 154 */
if(
(BgL_mblenz00_1497==BUNSPEC))
{ /* Llib/hash.scm 156 */
BgL_mblenz00_1467 = 
BINT(((long)10)); }  else 
{ /* Llib/hash.scm 156 */
BgL_mblenz00_1467 = 
BGl_errorz00zz__errorz00(BGl_string3309z00zz__hashz00, BGl_string3311z00zz__hashz00, BgL_mblenz00_1497); } } } }  else 
{ /* Llib/hash.scm 150 */
BgL_mblenz00_1467 = 
BINT(((long)10)); } 
{ /* Llib/hash.scm 150 */
obj_t BgL_eqtestz00_1468;
if(
PAIRP(BgL_argsz00_42))
{ /* Llib/hash.scm 164 */
obj_t BgL_eqtestz00_1491;
BgL_eqtestz00_1491 = 
CAR(BgL_argsz00_42); 
BgL_argsz00_42 = 
CDR(BgL_argsz00_42); 
{ /* Llib/hash.scm 167 */
bool_t BgL_test3667z00_5356;
if(
PROCEDUREP(BgL_eqtestz00_1491))
{ /* Llib/hash.scm 167 */
BgL_test3667z00_5356 = 
PROCEDURE_CORRECT_ARITYP(BgL_eqtestz00_1491, 
(int)(((long)2)))
; }  else 
{ /* Llib/hash.scm 167 */
BgL_test3667z00_5356 = ((bool_t)0)
; } 
if(BgL_test3667z00_5356)
{ /* Llib/hash.scm 167 */
BgL_eqtestz00_1468 = BgL_eqtestz00_1491; }  else 
{ /* Llib/hash.scm 167 */
if(
(BgL_eqtestz00_1491==BUNSPEC))
{ /* Llib/hash.scm 169 */
BgL_eqtestz00_1468 = BFALSE; }  else 
{ /* Llib/hash.scm 169 */
BgL_eqtestz00_1468 = 
BGl_errorz00zz__errorz00(BGl_string3309z00zz__hashz00, BGl_string3312z00zz__hashz00, BgL_eqtestz00_1491); } } } }  else 
{ /* Llib/hash.scm 163 */
BgL_eqtestz00_1468 = BFALSE; } 
{ /* Llib/hash.scm 163 */
obj_t BgL_hashnz00_1469;
if(
PAIRP(BgL_argsz00_42))
{ /* Llib/hash.scm 177 */
obj_t BgL_hnz00_1485;
BgL_hnz00_1485 = 
CAR(BgL_argsz00_42); 
BgL_argsz00_42 = 
CDR(BgL_argsz00_42); 
{ /* Llib/hash.scm 180 */
bool_t BgL_test3671z00_5368;
if(
PROCEDUREP(BgL_hnz00_1485))
{ /* Llib/hash.scm 180 */
BgL_test3671z00_5368 = 
PROCEDURE_CORRECT_ARITYP(BgL_hnz00_1485, 
(int)(((long)1)))
; }  else 
{ /* Llib/hash.scm 180 */
BgL_test3671z00_5368 = ((bool_t)0)
; } 
if(BgL_test3671z00_5368)
{ /* Llib/hash.scm 180 */
BgL_hashnz00_1469 = BgL_hnz00_1485; }  else 
{ /* Llib/hash.scm 180 */
if(
(BgL_hnz00_1485==BUNSPEC))
{ /* Llib/hash.scm 182 */
BgL_hashnz00_1469 = BFALSE; }  else 
{ /* Llib/hash.scm 182 */
BgL_hashnz00_1469 = 
BGl_errorz00zz__errorz00(BGl_string3309z00zz__hashz00, BGl_string3313z00zz__hashz00, BgL_hnz00_1485); } } } }  else 
{ /* Llib/hash.scm 176 */
BgL_hashnz00_1469 = BFALSE; } 
{ /* Llib/hash.scm 176 */
long BgL_wkkz00_1470;
if(
PAIRP(BgL_argsz00_42))
{ /* Llib/hash.scm 190 */
obj_t BgL_wkkz00_1480;
BgL_wkkz00_1480 = 
CAR(BgL_argsz00_42); 
BgL_argsz00_42 = 
CDR(BgL_argsz00_42); 
{ /* Llib/hash.scm 192 */
bool_t BgL_test3675z00_5380;
if(
(BgL_wkkz00_1480==BUNSPEC))
{ /* Llib/hash.scm 192 */
BgL_test3675z00_5380 = ((bool_t)0)
; }  else 
{ /* Llib/hash.scm 192 */
BgL_test3675z00_5380 = 
CBOOL(BgL_wkkz00_1480)
; } 
if(BgL_test3675z00_5380)
{ /* Llib/hash.scm 192 */
BgL_wkkz00_1470 = ((long)1); }  else 
{ /* Llib/hash.scm 192 */
BgL_wkkz00_1470 = ((long)0); } } }  else 
{ /* Llib/hash.scm 189 */
BgL_wkkz00_1470 = ((long)0); } 
{ /* Llib/hash.scm 189 */
long BgL_wkdz00_1471;
if(
PAIRP(BgL_argsz00_42))
{ /* Llib/hash.scm 197 */
obj_t BgL_wkdz00_1475;
BgL_wkdz00_1475 = 
CAR(BgL_argsz00_42); 
{ /* Llib/hash.scm 198 */
bool_t BgL_test3678z00_5387;
if(
(BgL_wkdz00_1475==BUNSPEC))
{ /* Llib/hash.scm 198 */
BgL_test3678z00_5387 = ((bool_t)0)
; }  else 
{ /* Llib/hash.scm 198 */
BgL_test3678z00_5387 = 
CBOOL(BgL_wkdz00_1475)
; } 
if(BgL_test3678z00_5387)
{ /* Llib/hash.scm 198 */
BgL_wkdz00_1471 = ((long)2); }  else 
{ /* Llib/hash.scm 198 */
BgL_wkdz00_1471 = ((long)0); } } }  else 
{ /* Llib/hash.scm 196 */
BgL_wkdz00_1471 = ((long)0); } 
{ /* Llib/hash.scm 196 */
long BgL_wkz00_1472;
BgL_wkz00_1472 = 
(BgL_wkkz00_1470 | BgL_wkdz00_1471); 
{ /* Llib/hash.scm 202 */

{ /* Llib/hash.scm 203 */
obj_t BgL_arg1322z00_1473;
{ /* Llib/hash.scm 203 */
long BgL_tmpz00_5392;
{ /* Llib/hash.scm 203 */
obj_t BgL_tmpz00_5393;
if(
INTEGERP(BgL_siza7eza7_1466))
{ /* Llib/hash.scm 203 */
BgL_tmpz00_5393 = BgL_siza7eza7_1466
; }  else 
{ 
obj_t BgL_auxz00_5396;
BgL_auxz00_5396 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7017)), BGl_string3309z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_siza7eza7_1466); 
FAILURE(BgL_auxz00_5396,BFALSE,BFALSE);} 
BgL_tmpz00_5392 = 
(long)CINT(BgL_tmpz00_5393); } 
BgL_arg1322z00_1473 = 
make_vector(BgL_tmpz00_5392, BNIL); } 
{ /* Llib/hash.scm 203 */
obj_t BgL_newz00_2737;
BgL_newz00_2737 = 
create_struct(BGl_symbol3316z00zz__hashz00, 
(int)(((long)8))); 
{ /* Llib/hash.scm 203 */
bool_t BgL_test3681z00_5404;
{ /* Llib/hash.scm 203 */
obj_t BgL_tmpz00_5405;
{ /* Llib/hash.scm 203 */
obj_t BgL_res2180z00_2741;
{ /* Llib/hash.scm 203 */
obj_t BgL_aux2699z00_4544;
BgL_aux2699z00_4544 = 
STRUCT_KEY(BgL_newz00_2737); 
if(
SYMBOLP(BgL_aux2699z00_4544))
{ /* Llib/hash.scm 203 */
BgL_res2180z00_2741 = BgL_aux2699z00_4544; }  else 
{ 
obj_t BgL_auxz00_5409;
BgL_auxz00_5409 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)6997)), BGl_string3309z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2699z00_4544); 
FAILURE(BgL_auxz00_5409,BFALSE,BFALSE);} } 
BgL_tmpz00_5405 = BgL_res2180z00_2741; } 
BgL_test3681z00_5404 = 
(BgL_tmpz00_5405==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3681z00_5404)
{ /* Llib/hash.scm 203 */
obj_t BgL_auxz00_5416;int BgL_tmpz00_5414;
BgL_auxz00_5416 = 
BINT(((long)1)); 
BgL_tmpz00_5414 = 
(int)(((long)7)); 
STRUCT_SET(BgL_newz00_2737, BgL_tmpz00_5414, BgL_auxz00_5416); }  else 
{ /* Llib/hash.scm 203 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2737); } } 
{ /* Llib/hash.scm 203 */
bool_t BgL_test3683z00_5420;
{ /* Llib/hash.scm 203 */
obj_t BgL_tmpz00_5421;
{ /* Llib/hash.scm 203 */
obj_t BgL_res2181z00_2745;
{ /* Llib/hash.scm 203 */
obj_t BgL_aux2701z00_4546;
BgL_aux2701z00_4546 = 
STRUCT_KEY(BgL_newz00_2737); 
if(
SYMBOLP(BgL_aux2701z00_4546))
{ /* Llib/hash.scm 203 */
BgL_res2181z00_2745 = BgL_aux2701z00_4546; }  else 
{ 
obj_t BgL_auxz00_5425;
BgL_auxz00_5425 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)6997)), BGl_string3309z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2701z00_4546); 
FAILURE(BgL_auxz00_5425,BFALSE,BFALSE);} } 
BgL_tmpz00_5421 = BgL_res2181z00_2745; } 
BgL_test3683z00_5420 = 
(BgL_tmpz00_5421==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3683z00_5420)
{ /* Llib/hash.scm 203 */
obj_t BgL_auxz00_5432;int BgL_tmpz00_5430;
BgL_auxz00_5432 = 
BINT(((long)-1)); 
BgL_tmpz00_5430 = 
(int)(((long)6)); 
STRUCT_SET(BgL_newz00_2737, BgL_tmpz00_5430, BgL_auxz00_5432); }  else 
{ /* Llib/hash.scm 203 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2737); } } 
{ /* Llib/hash.scm 203 */
bool_t BgL_test3685z00_5436;
{ /* Llib/hash.scm 203 */
obj_t BgL_tmpz00_5437;
{ /* Llib/hash.scm 203 */
obj_t BgL_res2182z00_2749;
{ /* Llib/hash.scm 203 */
obj_t BgL_aux2703z00_4548;
BgL_aux2703z00_4548 = 
STRUCT_KEY(BgL_newz00_2737); 
if(
SYMBOLP(BgL_aux2703z00_4548))
{ /* Llib/hash.scm 203 */
BgL_res2182z00_2749 = BgL_aux2703z00_4548; }  else 
{ 
obj_t BgL_auxz00_5441;
BgL_auxz00_5441 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)6997)), BGl_string3309z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2703z00_4548); 
FAILURE(BgL_auxz00_5441,BFALSE,BFALSE);} } 
BgL_tmpz00_5437 = BgL_res2182z00_2749; } 
BgL_test3685z00_5436 = 
(BgL_tmpz00_5437==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3685z00_5436)
{ /* Llib/hash.scm 203 */
obj_t BgL_auxz00_5448;int BgL_tmpz00_5446;
BgL_auxz00_5448 = 
BINT(BgL_wkz00_1472); 
BgL_tmpz00_5446 = 
(int)(((long)5)); 
STRUCT_SET(BgL_newz00_2737, BgL_tmpz00_5446, BgL_auxz00_5448); }  else 
{ /* Llib/hash.scm 203 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2737); } } 
{ /* Llib/hash.scm 203 */
bool_t BgL_test3687z00_5452;
{ /* Llib/hash.scm 203 */
obj_t BgL_tmpz00_5453;
{ /* Llib/hash.scm 203 */
obj_t BgL_res2183z00_2753;
{ /* Llib/hash.scm 203 */
obj_t BgL_aux2705z00_4550;
BgL_aux2705z00_4550 = 
STRUCT_KEY(BgL_newz00_2737); 
if(
SYMBOLP(BgL_aux2705z00_4550))
{ /* Llib/hash.scm 203 */
BgL_res2183z00_2753 = BgL_aux2705z00_4550; }  else 
{ 
obj_t BgL_auxz00_5457;
BgL_auxz00_5457 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)6997)), BGl_string3309z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2705z00_4550); 
FAILURE(BgL_auxz00_5457,BFALSE,BFALSE);} } 
BgL_tmpz00_5453 = BgL_res2183z00_2753; } 
BgL_test3687z00_5452 = 
(BgL_tmpz00_5453==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3687z00_5452)
{ /* Llib/hash.scm 203 */
int BgL_tmpz00_5462;
BgL_tmpz00_5462 = 
(int)(((long)4)); 
STRUCT_SET(BgL_newz00_2737, BgL_tmpz00_5462, BgL_hashnz00_1469); }  else 
{ /* Llib/hash.scm 203 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2737); } } 
{ /* Llib/hash.scm 203 */
bool_t BgL_test3689z00_5466;
{ /* Llib/hash.scm 203 */
obj_t BgL_tmpz00_5467;
{ /* Llib/hash.scm 203 */
obj_t BgL_res2184z00_2757;
{ /* Llib/hash.scm 203 */
obj_t BgL_aux2707z00_4552;
BgL_aux2707z00_4552 = 
STRUCT_KEY(BgL_newz00_2737); 
if(
SYMBOLP(BgL_aux2707z00_4552))
{ /* Llib/hash.scm 203 */
BgL_res2184z00_2757 = BgL_aux2707z00_4552; }  else 
{ 
obj_t BgL_auxz00_5471;
BgL_auxz00_5471 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)6997)), BGl_string3309z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2707z00_4552); 
FAILURE(BgL_auxz00_5471,BFALSE,BFALSE);} } 
BgL_tmpz00_5467 = BgL_res2184z00_2757; } 
BgL_test3689z00_5466 = 
(BgL_tmpz00_5467==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3689z00_5466)
{ /* Llib/hash.scm 203 */
int BgL_tmpz00_5476;
BgL_tmpz00_5476 = 
(int)(((long)3)); 
STRUCT_SET(BgL_newz00_2737, BgL_tmpz00_5476, BgL_eqtestz00_1468); }  else 
{ /* Llib/hash.scm 203 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2737); } } 
{ /* Llib/hash.scm 203 */
bool_t BgL_test3691z00_5480;
{ /* Llib/hash.scm 203 */
obj_t BgL_tmpz00_5481;
{ /* Llib/hash.scm 203 */
obj_t BgL_res2185z00_2761;
{ /* Llib/hash.scm 203 */
obj_t BgL_aux2709z00_4554;
BgL_aux2709z00_4554 = 
STRUCT_KEY(BgL_newz00_2737); 
if(
SYMBOLP(BgL_aux2709z00_4554))
{ /* Llib/hash.scm 203 */
BgL_res2185z00_2761 = BgL_aux2709z00_4554; }  else 
{ 
obj_t BgL_auxz00_5485;
BgL_auxz00_5485 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)6997)), BGl_string3309z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2709z00_4554); 
FAILURE(BgL_auxz00_5485,BFALSE,BFALSE);} } 
BgL_tmpz00_5481 = BgL_res2185z00_2761; } 
BgL_test3691z00_5480 = 
(BgL_tmpz00_5481==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3691z00_5480)
{ /* Llib/hash.scm 203 */
int BgL_tmpz00_5490;
BgL_tmpz00_5490 = 
(int)(((long)2)); 
STRUCT_SET(BgL_newz00_2737, BgL_tmpz00_5490, BgL_arg1322z00_1473); }  else 
{ /* Llib/hash.scm 203 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2737); } } 
{ /* Llib/hash.scm 203 */
bool_t BgL_test3693z00_5494;
{ /* Llib/hash.scm 203 */
obj_t BgL_tmpz00_5495;
{ /* Llib/hash.scm 203 */
obj_t BgL_res2186z00_2765;
{ /* Llib/hash.scm 203 */
obj_t BgL_aux2711z00_4556;
BgL_aux2711z00_4556 = 
STRUCT_KEY(BgL_newz00_2737); 
if(
SYMBOLP(BgL_aux2711z00_4556))
{ /* Llib/hash.scm 203 */
BgL_res2186z00_2765 = BgL_aux2711z00_4556; }  else 
{ 
obj_t BgL_auxz00_5499;
BgL_auxz00_5499 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)6997)), BGl_string3309z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2711z00_4556); 
FAILURE(BgL_auxz00_5499,BFALSE,BFALSE);} } 
BgL_tmpz00_5495 = BgL_res2186z00_2765; } 
BgL_test3693z00_5494 = 
(BgL_tmpz00_5495==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3693z00_5494)
{ /* Llib/hash.scm 203 */
int BgL_tmpz00_5504;
BgL_tmpz00_5504 = 
(int)(((long)1)); 
STRUCT_SET(BgL_newz00_2737, BgL_tmpz00_5504, BgL_mblenz00_1467); }  else 
{ /* Llib/hash.scm 203 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2737); } } 
{ /* Llib/hash.scm 203 */
bool_t BgL_test3695z00_5508;
{ /* Llib/hash.scm 203 */
obj_t BgL_tmpz00_5509;
{ /* Llib/hash.scm 203 */
obj_t BgL_res2187z00_2769;
{ /* Llib/hash.scm 203 */
obj_t BgL_aux2713z00_4558;
BgL_aux2713z00_4558 = 
STRUCT_KEY(BgL_newz00_2737); 
if(
SYMBOLP(BgL_aux2713z00_4558))
{ /* Llib/hash.scm 203 */
BgL_res2187z00_2769 = BgL_aux2713z00_4558; }  else 
{ 
obj_t BgL_auxz00_5513;
BgL_auxz00_5513 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)6997)), BGl_string3309z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2713z00_4558); 
FAILURE(BgL_auxz00_5513,BFALSE,BFALSE);} } 
BgL_tmpz00_5509 = BgL_res2187z00_2769; } 
BgL_test3695z00_5508 = 
(BgL_tmpz00_5509==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3695z00_5508)
{ /* Llib/hash.scm 203 */
obj_t BgL_auxz00_5520;int BgL_tmpz00_5518;
BgL_auxz00_5520 = 
BINT(((long)0)); 
BgL_tmpz00_5518 = 
(int)(((long)0)); 
STRUCT_SET(BgL_newz00_2737, BgL_tmpz00_5518, BgL_auxz00_5520); }  else 
{ /* Llib/hash.scm 203 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2737); } } 
return BgL_newz00_2737;} } } } } } } } } } } 

}



/* &make-hashtable */
obj_t BGl_z62makezd2hashtablezb0zz__hashz00(obj_t BgL_envz00_4459, obj_t BgL_argsz00_4460)
{
{ /* Llib/hash.scm 136 */
return 
BGl_makezd2hashtablezd2zz__hashz00(BgL_argsz00_4460);} 

}



/* _create-hashtable */
obj_t BGl__createzd2hashtablezd2zz__hashz00(obj_t BgL_env1135z00_51, obj_t BgL_opt1134z00_50)
{
{ /* Llib/hash.scm 208 */
{ /* Llib/hash.scm 208 */

{ /* Llib/hash.scm 208 */
obj_t BgL_bucketzd2expansionzd2_1512;
BgL_bucketzd2expansionzd2_1512 = BGL_REAL_CNST( BGl_real3320z00zz__hashz00); 
{ /* Llib/hash.scm 208 */
obj_t BgL_eqtestz00_1513;
BgL_eqtestz00_1513 = BFALSE; 
{ /* Llib/hash.scm 208 */
obj_t BgL_hashz00_1514;
BgL_hashz00_1514 = BFALSE; 
{ /* Llib/hash.scm 208 */
obj_t BgL_maxzd2bucketzd2lengthz00_1515;
BgL_maxzd2bucketzd2lengthz00_1515 = 
BINT(((long)10)); 
{ /* Llib/hash.scm 208 */
obj_t BgL_maxzd2lengthzd2_1516;
BgL_maxzd2lengthzd2_1516 = 
BINT(((long)16384)); 
{ /* Llib/hash.scm 208 */
obj_t BgL_siza7eza7_1517;
BgL_siza7eza7_1517 = 
BINT(((long)128)); 
{ /* Llib/hash.scm 213 */
obj_t BgL_weakz00_1518;
BgL_weakz00_1518 = BGl_symbol3321z00zz__hashz00; 
{ /* Llib/hash.scm 208 */

{ 
long BgL_iz00_1519;
BgL_iz00_1519 = ((long)0); 
BgL_check1138z00_1520:
if(
(BgL_iz00_1519==
VECTOR_LENGTH(BgL_opt1134z00_50)))
{ /* Llib/hash.scm 208 */BNIL; }  else 
{ /* Llib/hash.scm 208 */
bool_t BgL_test3698z00_5531;
{ /* Llib/hash.scm 208 */
obj_t BgL_arg1351z00_1526;
{ /* Llib/hash.scm 208 */
bool_t BgL_test3699z00_5532;
{ /* Llib/hash.scm 208 */
long BgL_tmpz00_5533;
BgL_tmpz00_5533 = 
VECTOR_LENGTH(BgL_opt1134z00_50); 
BgL_test3699z00_5532 = 
BOUND_CHECK(BgL_iz00_1519, BgL_tmpz00_5533); } 
if(BgL_test3699z00_5532)
{ /* Llib/hash.scm 208 */
BgL_arg1351z00_1526 = 
VECTOR_REF(BgL_opt1134z00_50,BgL_iz00_1519); }  else 
{ 
obj_t BgL_auxz00_5537;
BgL_auxz00_5537 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7287)), BGl_string3323z00zz__hashz00, BgL_opt1134z00_50, 
(int)(
VECTOR_LENGTH(BgL_opt1134z00_50)), 
(int)(BgL_iz00_1519)); 
FAILURE(BgL_auxz00_5537,BFALSE,BFALSE);} } 
BgL_test3698z00_5531 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1351z00_1526, BGl_list3324z00zz__hashz00)); } 
if(BgL_test3698z00_5531)
{ 
long BgL_iz00_5546;
BgL_iz00_5546 = 
(BgL_iz00_1519+((long)2)); 
BgL_iz00_1519 = BgL_iz00_5546; 
goto BgL_check1138z00_1520;}  else 
{ /* Llib/hash.scm 208 */
obj_t BgL_arg1350z00_1525;
{ /* Llib/hash.scm 208 */
bool_t BgL_test3700z00_5548;
{ /* Llib/hash.scm 208 */
long BgL_tmpz00_5549;
BgL_tmpz00_5549 = 
VECTOR_LENGTH(BgL_opt1134z00_50); 
BgL_test3700z00_5548 = 
BOUND_CHECK(BgL_iz00_1519, BgL_tmpz00_5549); } 
if(BgL_test3700z00_5548)
{ /* Llib/hash.scm 208 */
BgL_arg1350z00_1525 = 
VECTOR_REF(BgL_opt1134z00_50,BgL_iz00_1519); }  else 
{ 
obj_t BgL_auxz00_5553;
BgL_auxz00_5553 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7287)), BGl_string3323z00zz__hashz00, BgL_opt1134z00_50, 
(int)(
VECTOR_LENGTH(BgL_opt1134z00_50)), 
(int)(BgL_iz00_1519)); 
FAILURE(BgL_auxz00_5553,BFALSE,BFALSE);} } 
BGl_errorz00zz__errorz00(BGl_symbol3339z00zz__hashz00, BGl_string3341z00zz__hashz00, BgL_arg1350z00_1525); } } } 
{ /* Llib/hash.scm 208 */
obj_t BgL_index1140z00_1527;
BgL_index1140z00_1527 = 
BGl_search1137ze70ze7zz__hashz00(
VECTOR_LENGTH(BgL_opt1134z00_50), BgL_opt1134z00_50, BGl_keyword3325z00zz__hashz00, ((long)0)); 
{ /* Llib/hash.scm 208 */
bool_t BgL_test3701z00_5563;
{ /* Llib/hash.scm 208 */
long BgL_n1z00_2792;
{ /* Llib/hash.scm 208 */
obj_t BgL_tmpz00_5564;
if(
INTEGERP(BgL_index1140z00_1527))
{ /* Llib/hash.scm 208 */
BgL_tmpz00_5564 = BgL_index1140z00_1527
; }  else 
{ 
obj_t BgL_auxz00_5567;
BgL_auxz00_5567 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7287)), BGl_string3342z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_index1140z00_1527); 
FAILURE(BgL_auxz00_5567,BFALSE,BFALSE);} 
BgL_n1z00_2792 = 
(long)CINT(BgL_tmpz00_5564); } 
BgL_test3701z00_5563 = 
(BgL_n1z00_2792>=((long)0)); } 
if(BgL_test3701z00_5563)
{ 
long BgL_auxz00_5573;
{ /* Llib/hash.scm 208 */
obj_t BgL_tmpz00_5574;
if(
INTEGERP(BgL_index1140z00_1527))
{ /* Llib/hash.scm 208 */
BgL_tmpz00_5574 = BgL_index1140z00_1527
; }  else 
{ 
obj_t BgL_auxz00_5577;
BgL_auxz00_5577 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7287)), BGl_string3342z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_index1140z00_1527); 
FAILURE(BgL_auxz00_5577,BFALSE,BFALSE);} 
BgL_auxz00_5573 = 
(long)CINT(BgL_tmpz00_5574); } 
BgL_bucketzd2expansionzd2_1512 = 
VECTOR_REF(BgL_opt1134z00_50,BgL_auxz00_5573); }  else 
{ /* Llib/hash.scm 208 */BFALSE; } } } 
{ /* Llib/hash.scm 208 */
obj_t BgL_index1141z00_1529;
BgL_index1141z00_1529 = 
BGl_search1137ze70ze7zz__hashz00(
VECTOR_LENGTH(BgL_opt1134z00_50), BgL_opt1134z00_50, BGl_keyword3327z00zz__hashz00, ((long)0)); 
{ /* Llib/hash.scm 208 */
bool_t BgL_test3704z00_5585;
{ /* Llib/hash.scm 208 */
long BgL_n1z00_2794;
{ /* Llib/hash.scm 208 */
obj_t BgL_tmpz00_5586;
if(
INTEGERP(BgL_index1141z00_1529))
{ /* Llib/hash.scm 208 */
BgL_tmpz00_5586 = BgL_index1141z00_1529
; }  else 
{ 
obj_t BgL_auxz00_5589;
BgL_auxz00_5589 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7287)), BGl_string3342z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_index1141z00_1529); 
FAILURE(BgL_auxz00_5589,BFALSE,BFALSE);} 
BgL_n1z00_2794 = 
(long)CINT(BgL_tmpz00_5586); } 
BgL_test3704z00_5585 = 
(BgL_n1z00_2794>=((long)0)); } 
if(BgL_test3704z00_5585)
{ 
long BgL_auxz00_5595;
{ /* Llib/hash.scm 208 */
obj_t BgL_tmpz00_5596;
if(
INTEGERP(BgL_index1141z00_1529))
{ /* Llib/hash.scm 208 */
BgL_tmpz00_5596 = BgL_index1141z00_1529
; }  else 
{ 
obj_t BgL_auxz00_5599;
BgL_auxz00_5599 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7287)), BGl_string3342z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_index1141z00_1529); 
FAILURE(BgL_auxz00_5599,BFALSE,BFALSE);} 
BgL_auxz00_5595 = 
(long)CINT(BgL_tmpz00_5596); } 
BgL_eqtestz00_1513 = 
VECTOR_REF(BgL_opt1134z00_50,BgL_auxz00_5595); }  else 
{ /* Llib/hash.scm 208 */BFALSE; } } } 
{ /* Llib/hash.scm 208 */
obj_t BgL_index1142z00_1531;
BgL_index1142z00_1531 = 
BGl_search1137ze70ze7zz__hashz00(
VECTOR_LENGTH(BgL_opt1134z00_50), BgL_opt1134z00_50, BGl_keyword3329z00zz__hashz00, ((long)0)); 
{ /* Llib/hash.scm 208 */
bool_t BgL_test3707z00_5607;
{ /* Llib/hash.scm 208 */
long BgL_n1z00_2796;
{ /* Llib/hash.scm 208 */
obj_t BgL_tmpz00_5608;
if(
INTEGERP(BgL_index1142z00_1531))
{ /* Llib/hash.scm 208 */
BgL_tmpz00_5608 = BgL_index1142z00_1531
; }  else 
{ 
obj_t BgL_auxz00_5611;
BgL_auxz00_5611 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7287)), BGl_string3342z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_index1142z00_1531); 
FAILURE(BgL_auxz00_5611,BFALSE,BFALSE);} 
BgL_n1z00_2796 = 
(long)CINT(BgL_tmpz00_5608); } 
BgL_test3707z00_5607 = 
(BgL_n1z00_2796>=((long)0)); } 
if(BgL_test3707z00_5607)
{ 
long BgL_auxz00_5617;
{ /* Llib/hash.scm 208 */
obj_t BgL_tmpz00_5618;
if(
INTEGERP(BgL_index1142z00_1531))
{ /* Llib/hash.scm 208 */
BgL_tmpz00_5618 = BgL_index1142z00_1531
; }  else 
{ 
obj_t BgL_auxz00_5621;
BgL_auxz00_5621 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7287)), BGl_string3342z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_index1142z00_1531); 
FAILURE(BgL_auxz00_5621,BFALSE,BFALSE);} 
BgL_auxz00_5617 = 
(long)CINT(BgL_tmpz00_5618); } 
BgL_hashz00_1514 = 
VECTOR_REF(BgL_opt1134z00_50,BgL_auxz00_5617); }  else 
{ /* Llib/hash.scm 208 */BFALSE; } } } 
{ /* Llib/hash.scm 208 */
obj_t BgL_index1143z00_1533;
BgL_index1143z00_1533 = 
BGl_search1137ze70ze7zz__hashz00(
VECTOR_LENGTH(BgL_opt1134z00_50), BgL_opt1134z00_50, BGl_keyword3331z00zz__hashz00, ((long)0)); 
{ /* Llib/hash.scm 208 */
bool_t BgL_test3710z00_5629;
{ /* Llib/hash.scm 208 */
long BgL_n1z00_2798;
{ /* Llib/hash.scm 208 */
obj_t BgL_tmpz00_5630;
if(
INTEGERP(BgL_index1143z00_1533))
{ /* Llib/hash.scm 208 */
BgL_tmpz00_5630 = BgL_index1143z00_1533
; }  else 
{ 
obj_t BgL_auxz00_5633;
BgL_auxz00_5633 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7287)), BGl_string3342z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_index1143z00_1533); 
FAILURE(BgL_auxz00_5633,BFALSE,BFALSE);} 
BgL_n1z00_2798 = 
(long)CINT(BgL_tmpz00_5630); } 
BgL_test3710z00_5629 = 
(BgL_n1z00_2798>=((long)0)); } 
if(BgL_test3710z00_5629)
{ 
long BgL_auxz00_5639;
{ /* Llib/hash.scm 208 */
obj_t BgL_tmpz00_5640;
if(
INTEGERP(BgL_index1143z00_1533))
{ /* Llib/hash.scm 208 */
BgL_tmpz00_5640 = BgL_index1143z00_1533
; }  else 
{ 
obj_t BgL_auxz00_5643;
BgL_auxz00_5643 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7287)), BGl_string3342z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_index1143z00_1533); 
FAILURE(BgL_auxz00_5643,BFALSE,BFALSE);} 
BgL_auxz00_5639 = 
(long)CINT(BgL_tmpz00_5640); } 
BgL_maxzd2bucketzd2lengthz00_1515 = 
VECTOR_REF(BgL_opt1134z00_50,BgL_auxz00_5639); }  else 
{ /* Llib/hash.scm 208 */BFALSE; } } } 
{ /* Llib/hash.scm 208 */
obj_t BgL_index1144z00_1535;
BgL_index1144z00_1535 = 
BGl_search1137ze70ze7zz__hashz00(
VECTOR_LENGTH(BgL_opt1134z00_50), BgL_opt1134z00_50, BGl_keyword3333z00zz__hashz00, ((long)0)); 
{ /* Llib/hash.scm 208 */
bool_t BgL_test3713z00_5651;
{ /* Llib/hash.scm 208 */
long BgL_n1z00_2800;
{ /* Llib/hash.scm 208 */
obj_t BgL_tmpz00_5652;
if(
INTEGERP(BgL_index1144z00_1535))
{ /* Llib/hash.scm 208 */
BgL_tmpz00_5652 = BgL_index1144z00_1535
; }  else 
{ 
obj_t BgL_auxz00_5655;
BgL_auxz00_5655 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7287)), BGl_string3342z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_index1144z00_1535); 
FAILURE(BgL_auxz00_5655,BFALSE,BFALSE);} 
BgL_n1z00_2800 = 
(long)CINT(BgL_tmpz00_5652); } 
BgL_test3713z00_5651 = 
(BgL_n1z00_2800>=((long)0)); } 
if(BgL_test3713z00_5651)
{ 
long BgL_auxz00_5661;
{ /* Llib/hash.scm 208 */
obj_t BgL_tmpz00_5662;
if(
INTEGERP(BgL_index1144z00_1535))
{ /* Llib/hash.scm 208 */
BgL_tmpz00_5662 = BgL_index1144z00_1535
; }  else 
{ 
obj_t BgL_auxz00_5665;
BgL_auxz00_5665 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7287)), BGl_string3342z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_index1144z00_1535); 
FAILURE(BgL_auxz00_5665,BFALSE,BFALSE);} 
BgL_auxz00_5661 = 
(long)CINT(BgL_tmpz00_5662); } 
BgL_maxzd2lengthzd2_1516 = 
VECTOR_REF(BgL_opt1134z00_50,BgL_auxz00_5661); }  else 
{ /* Llib/hash.scm 208 */BFALSE; } } } 
{ /* Llib/hash.scm 208 */
obj_t BgL_index1145z00_1537;
BgL_index1145z00_1537 = 
BGl_search1137ze70ze7zz__hashz00(
VECTOR_LENGTH(BgL_opt1134z00_50), BgL_opt1134z00_50, BGl_keyword3335z00zz__hashz00, ((long)0)); 
{ /* Llib/hash.scm 208 */
bool_t BgL_test3716z00_5673;
{ /* Llib/hash.scm 208 */
long BgL_n1z00_2802;
{ /* Llib/hash.scm 208 */
obj_t BgL_tmpz00_5674;
if(
INTEGERP(BgL_index1145z00_1537))
{ /* Llib/hash.scm 208 */
BgL_tmpz00_5674 = BgL_index1145z00_1537
; }  else 
{ 
obj_t BgL_auxz00_5677;
BgL_auxz00_5677 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7287)), BGl_string3342z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_index1145z00_1537); 
FAILURE(BgL_auxz00_5677,BFALSE,BFALSE);} 
BgL_n1z00_2802 = 
(long)CINT(BgL_tmpz00_5674); } 
BgL_test3716z00_5673 = 
(BgL_n1z00_2802>=((long)0)); } 
if(BgL_test3716z00_5673)
{ 
long BgL_auxz00_5683;
{ /* Llib/hash.scm 208 */
obj_t BgL_tmpz00_5684;
if(
INTEGERP(BgL_index1145z00_1537))
{ /* Llib/hash.scm 208 */
BgL_tmpz00_5684 = BgL_index1145z00_1537
; }  else 
{ 
obj_t BgL_auxz00_5687;
BgL_auxz00_5687 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7287)), BGl_string3342z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_index1145z00_1537); 
FAILURE(BgL_auxz00_5687,BFALSE,BFALSE);} 
BgL_auxz00_5683 = 
(long)CINT(BgL_tmpz00_5684); } 
BgL_siza7eza7_1517 = 
VECTOR_REF(BgL_opt1134z00_50,BgL_auxz00_5683); }  else 
{ /* Llib/hash.scm 208 */BFALSE; } } } 
{ /* Llib/hash.scm 208 */
obj_t BgL_index1146z00_1539;
BgL_index1146z00_1539 = 
BGl_search1137ze70ze7zz__hashz00(
VECTOR_LENGTH(BgL_opt1134z00_50), BgL_opt1134z00_50, BGl_keyword3337z00zz__hashz00, ((long)0)); 
{ /* Llib/hash.scm 208 */
bool_t BgL_test3719z00_5695;
{ /* Llib/hash.scm 208 */
long BgL_n1z00_2804;
{ /* Llib/hash.scm 208 */
obj_t BgL_tmpz00_5696;
if(
INTEGERP(BgL_index1146z00_1539))
{ /* Llib/hash.scm 208 */
BgL_tmpz00_5696 = BgL_index1146z00_1539
; }  else 
{ 
obj_t BgL_auxz00_5699;
BgL_auxz00_5699 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7287)), BGl_string3342z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_index1146z00_1539); 
FAILURE(BgL_auxz00_5699,BFALSE,BFALSE);} 
BgL_n1z00_2804 = 
(long)CINT(BgL_tmpz00_5696); } 
BgL_test3719z00_5695 = 
(BgL_n1z00_2804>=((long)0)); } 
if(BgL_test3719z00_5695)
{ 
long BgL_auxz00_5705;
{ /* Llib/hash.scm 208 */
obj_t BgL_tmpz00_5706;
if(
INTEGERP(BgL_index1146z00_1539))
{ /* Llib/hash.scm 208 */
BgL_tmpz00_5706 = BgL_index1146z00_1539
; }  else 
{ 
obj_t BgL_auxz00_5709;
BgL_auxz00_5709 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7287)), BGl_string3342z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_index1146z00_1539); 
FAILURE(BgL_auxz00_5709,BFALSE,BFALSE);} 
BgL_auxz00_5705 = 
(long)CINT(BgL_tmpz00_5706); } 
BgL_weakz00_1518 = 
VECTOR_REF(BgL_opt1134z00_50,BgL_auxz00_5705); }  else 
{ /* Llib/hash.scm 208 */BFALSE; } } } 
{ /* Llib/hash.scm 208 */
obj_t BgL_bucketzd2expansionzd2_1541;
BgL_bucketzd2expansionzd2_1541 = BgL_bucketzd2expansionzd2_1512; 
{ /* Llib/hash.scm 208 */
obj_t BgL_eqtestz00_1542;
BgL_eqtestz00_1542 = BgL_eqtestz00_1513; 
{ /* Llib/hash.scm 208 */
obj_t BgL_hashz00_1543;
BgL_hashz00_1543 = BgL_hashz00_1514; 
{ /* Llib/hash.scm 208 */
obj_t BgL_maxzd2bucketzd2lengthz00_1544;
BgL_maxzd2bucketzd2lengthz00_1544 = BgL_maxzd2bucketzd2lengthz00_1515; 
{ /* Llib/hash.scm 208 */
obj_t BgL_maxzd2lengthzd2_1545;
BgL_maxzd2lengthzd2_1545 = BgL_maxzd2lengthzd2_1516; 
{ /* Llib/hash.scm 208 */
obj_t BgL_siza7eza7_1546;
BgL_siza7eza7_1546 = BgL_siza7eza7_1517; 
return 
BGl_createzd2hashtablezd2zz__hashz00(BgL_bucketzd2expansionzd2_1541, BgL_eqtestz00_1542, BgL_hashz00_1543, BgL_maxzd2bucketzd2lengthz00_1544, BgL_maxzd2lengthzd2_1545, BgL_siza7eza7_1546, BgL_weakz00_1518);} } } } } } } } } } } } } } } } 

}



/* search1137~0 */
obj_t BGl_search1137ze70ze7zz__hashz00(long BgL_l1136z00_4528, obj_t BgL_opt1134z00_4527, obj_t BgL_k1z00_1509, long BgL_iz00_1510)
{
{ /* Llib/hash.scm 208 */
BGl_search1137ze70ze7zz__hashz00:
if(
(BgL_iz00_1510==BgL_l1136z00_4528))
{ /* Llib/hash.scm 208 */
return 
BINT(((long)-1));}  else 
{ /* Llib/hash.scm 208 */
if(
(BgL_iz00_1510==
(BgL_l1136z00_4528-((long)1))))
{ /* Llib/hash.scm 208 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3339z00zz__hashz00, BGl_string3343z00zz__hashz00, 
BINT(
VECTOR_LENGTH(BgL_opt1134z00_4527)));}  else 
{ /* Llib/hash.scm 208 */
obj_t BgL_vz00_1552;
BgL_vz00_1552 = 
VECTOR_REF(BgL_opt1134z00_4527,BgL_iz00_1510); 
if(
(BgL_vz00_1552==BgL_k1z00_1509))
{ /* Llib/hash.scm 208 */
return 
BINT(
(BgL_iz00_1510+((long)1)));}  else 
{ 
long BgL_iz00_5730;
BgL_iz00_5730 = 
(BgL_iz00_1510+((long)2)); 
BgL_iz00_1510 = BgL_iz00_5730; 
goto BGl_search1137ze70ze7zz__hashz00;} } } } 

}



/* create-hashtable */
BGL_EXPORTED_DEF obj_t BGl_createzd2hashtablezd2zz__hashz00(obj_t BgL_bucketzd2expansionzd2_43, obj_t BgL_eqtestz00_44, obj_t BgL_hashz00_45, obj_t BgL_maxzd2bucketzd2lengthz00_46, obj_t BgL_maxzd2lengthzd2_47, obj_t BgL_siza7eza7_48, obj_t BgL_weakz00_49)
{
{ /* Llib/hash.scm 208 */
{ /* Llib/hash.scm 216 */
long BgL_weakz00_1556;
if(
(BgL_weakz00_49==BGl_symbol3344z00zz__hashz00))
{ /* Llib/hash.scm 216 */
BgL_weakz00_1556 = ((long)1); }  else 
{ /* Llib/hash.scm 216 */
if(
(BgL_weakz00_49==BGl_symbol3346z00zz__hashz00))
{ /* Llib/hash.scm 216 */
BgL_weakz00_1556 = ((long)2); }  else 
{ /* Llib/hash.scm 216 */
if(
(BgL_weakz00_49==BGl_symbol3348z00zz__hashz00))
{ /* Llib/hash.scm 216 */
BgL_weakz00_1556 = ((long)3); }  else 
{ /* Llib/hash.scm 216 */
if(
(BgL_weakz00_49==BGl_symbol3321z00zz__hashz00))
{ /* Llib/hash.scm 216 */
BgL_weakz00_1556 = ((long)0); }  else 
{ /* Llib/hash.scm 216 */
if(
(BgL_weakz00_49==BGl_symbol3350z00zz__hashz00))
{ /* Llib/hash.scm 216 */
BgL_weakz00_1556 = ((long)4); }  else 
{ /* Llib/hash.scm 216 */
if(
CBOOL(BgL_weakz00_49))
{ /* Llib/hash.scm 222 */
BgL_weakz00_1556 = ((long)2); }  else 
{ /* Llib/hash.scm 222 */
BgL_weakz00_1556 = ((long)0); } } } } } } 
if(
(
BINT(BgL_weakz00_1556)==
BINT(((long)4))))
{ /* Llib/hash.scm 223 */
if(
CBOOL(BgL_eqtestz00_44))
{ /* Llib/hash.scm 225 */
return 
BGl_errorz00zz__errorz00(BGl_string3340z00zz__hashz00, BGl_string3352z00zz__hashz00, BgL_eqtestz00_44);}  else 
{ /* Llib/hash.scm 225 */
if(
CBOOL(BgL_hashz00_45))
{ /* Llib/hash.scm 228 */
return 
BGl_errorz00zz__errorz00(BGl_string3340z00zz__hashz00, BGl_string3353z00zz__hashz00, BgL_hashz00_45);}  else 
{ /* Llib/hash.scm 232 */
obj_t BgL_arg1367z00_1558;
{ /* Llib/hash.scm 232 */
long BgL_tmpz00_5754;
{ /* Llib/hash.scm 232 */
obj_t BgL_tmpz00_5755;
if(
INTEGERP(BgL_siza7eza7_48))
{ /* Llib/hash.scm 232 */
BgL_tmpz00_5755 = BgL_siza7eza7_48
; }  else 
{ 
obj_t BgL_auxz00_5758;
BgL_auxz00_5758 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7959)), BGl_string3340z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_siza7eza7_48); 
FAILURE(BgL_auxz00_5758,BFALSE,BFALSE);} 
BgL_tmpz00_5754 = 
(long)CINT(BgL_tmpz00_5755); } 
BgL_arg1367z00_1558 = 
make_vector(BgL_tmpz00_5754, BNIL); } 
{ /* Llib/hash.scm 232 */
obj_t BgL_newz00_2819;
BgL_newz00_2819 = 
create_struct(BGl_symbol3316z00zz__hashz00, 
(int)(((long)8))); 
{ /* Llib/hash.scm 232 */
bool_t BgL_test3735z00_5766;
{ /* Llib/hash.scm 232 */
obj_t BgL_tmpz00_5767;
{ /* Llib/hash.scm 232 */
obj_t BgL_res2208z00_2823;
{ /* Llib/hash.scm 232 */
obj_t BgL_aux2745z00_4590;
BgL_aux2745z00_4590 = 
STRUCT_KEY(BgL_newz00_2819); 
if(
SYMBOLP(BgL_aux2745z00_4590))
{ /* Llib/hash.scm 232 */
BgL_res2208z00_2823 = BgL_aux2745z00_4590; }  else 
{ 
obj_t BgL_auxz00_5771;
BgL_auxz00_5771 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7927)), BGl_string3340z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2745z00_4590); 
FAILURE(BgL_auxz00_5771,BFALSE,BFALSE);} } 
BgL_tmpz00_5767 = BgL_res2208z00_2823; } 
BgL_test3735z00_5766 = 
(BgL_tmpz00_5767==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3735z00_5766)
{ /* Llib/hash.scm 232 */
int BgL_tmpz00_5776;
BgL_tmpz00_5776 = 
(int)(((long)7)); 
STRUCT_SET(BgL_newz00_2819, BgL_tmpz00_5776, BgL_bucketzd2expansionzd2_43); }  else 
{ /* Llib/hash.scm 232 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2819); } } 
{ /* Llib/hash.scm 232 */
bool_t BgL_test3737z00_5780;
{ /* Llib/hash.scm 232 */
obj_t BgL_tmpz00_5781;
{ /* Llib/hash.scm 232 */
obj_t BgL_res2209z00_2827;
{ /* Llib/hash.scm 232 */
obj_t BgL_aux2747z00_4592;
BgL_aux2747z00_4592 = 
STRUCT_KEY(BgL_newz00_2819); 
if(
SYMBOLP(BgL_aux2747z00_4592))
{ /* Llib/hash.scm 232 */
BgL_res2209z00_2827 = BgL_aux2747z00_4592; }  else 
{ 
obj_t BgL_auxz00_5785;
BgL_auxz00_5785 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7927)), BGl_string3340z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2747z00_4592); 
FAILURE(BgL_auxz00_5785,BFALSE,BFALSE);} } 
BgL_tmpz00_5781 = BgL_res2209z00_2827; } 
BgL_test3737z00_5780 = 
(BgL_tmpz00_5781==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3737z00_5780)
{ /* Llib/hash.scm 232 */
int BgL_tmpz00_5790;
BgL_tmpz00_5790 = 
(int)(((long)6)); 
STRUCT_SET(BgL_newz00_2819, BgL_tmpz00_5790, BgL_maxzd2lengthzd2_47); }  else 
{ /* Llib/hash.scm 232 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2819); } } 
{ /* Llib/hash.scm 232 */
bool_t BgL_test3739z00_5794;
{ /* Llib/hash.scm 232 */
obj_t BgL_tmpz00_5795;
{ /* Llib/hash.scm 232 */
obj_t BgL_res2210z00_2831;
{ /* Llib/hash.scm 232 */
obj_t BgL_aux2749z00_4594;
BgL_aux2749z00_4594 = 
STRUCT_KEY(BgL_newz00_2819); 
if(
SYMBOLP(BgL_aux2749z00_4594))
{ /* Llib/hash.scm 232 */
BgL_res2210z00_2831 = BgL_aux2749z00_4594; }  else 
{ 
obj_t BgL_auxz00_5799;
BgL_auxz00_5799 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7927)), BGl_string3340z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2749z00_4594); 
FAILURE(BgL_auxz00_5799,BFALSE,BFALSE);} } 
BgL_tmpz00_5795 = BgL_res2210z00_2831; } 
BgL_test3739z00_5794 = 
(BgL_tmpz00_5795==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3739z00_5794)
{ /* Llib/hash.scm 232 */
obj_t BgL_auxz00_5806;int BgL_tmpz00_5804;
BgL_auxz00_5806 = 
BINT(BgL_weakz00_1556); 
BgL_tmpz00_5804 = 
(int)(((long)5)); 
STRUCT_SET(BgL_newz00_2819, BgL_tmpz00_5804, BgL_auxz00_5806); }  else 
{ /* Llib/hash.scm 232 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2819); } } 
{ /* Llib/hash.scm 232 */
bool_t BgL_test3741z00_5810;
{ /* Llib/hash.scm 232 */
obj_t BgL_tmpz00_5811;
{ /* Llib/hash.scm 232 */
obj_t BgL_res2211z00_2835;
{ /* Llib/hash.scm 232 */
obj_t BgL_aux2751z00_4596;
BgL_aux2751z00_4596 = 
STRUCT_KEY(BgL_newz00_2819); 
if(
SYMBOLP(BgL_aux2751z00_4596))
{ /* Llib/hash.scm 232 */
BgL_res2211z00_2835 = BgL_aux2751z00_4596; }  else 
{ 
obj_t BgL_auxz00_5815;
BgL_auxz00_5815 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7927)), BGl_string3340z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2751z00_4596); 
FAILURE(BgL_auxz00_5815,BFALSE,BFALSE);} } 
BgL_tmpz00_5811 = BgL_res2211z00_2835; } 
BgL_test3741z00_5810 = 
(BgL_tmpz00_5811==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3741z00_5810)
{ /* Llib/hash.scm 232 */
int BgL_tmpz00_5820;
BgL_tmpz00_5820 = 
(int)(((long)4)); 
STRUCT_SET(BgL_newz00_2819, BgL_tmpz00_5820, BGl_proc3354z00zz__hashz00); }  else 
{ /* Llib/hash.scm 232 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2819); } } 
{ /* Llib/hash.scm 232 */
bool_t BgL_test3743z00_5824;
{ /* Llib/hash.scm 232 */
obj_t BgL_tmpz00_5825;
{ /* Llib/hash.scm 232 */
obj_t BgL_res2212z00_2839;
{ /* Llib/hash.scm 232 */
obj_t BgL_aux2753z00_4598;
BgL_aux2753z00_4598 = 
STRUCT_KEY(BgL_newz00_2819); 
if(
SYMBOLP(BgL_aux2753z00_4598))
{ /* Llib/hash.scm 232 */
BgL_res2212z00_2839 = BgL_aux2753z00_4598; }  else 
{ 
obj_t BgL_auxz00_5829;
BgL_auxz00_5829 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7927)), BGl_string3340z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2753z00_4598); 
FAILURE(BgL_auxz00_5829,BFALSE,BFALSE);} } 
BgL_tmpz00_5825 = BgL_res2212z00_2839; } 
BgL_test3743z00_5824 = 
(BgL_tmpz00_5825==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3743z00_5824)
{ /* Llib/hash.scm 232 */
int BgL_tmpz00_5834;
BgL_tmpz00_5834 = 
(int)(((long)3)); 
STRUCT_SET(BgL_newz00_2819, BgL_tmpz00_5834, BGl_stringzd3zf3zd2envzf2zz__r4_strings_6_7z00); }  else 
{ /* Llib/hash.scm 232 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2819); } } 
{ /* Llib/hash.scm 232 */
bool_t BgL_test3745z00_5838;
{ /* Llib/hash.scm 232 */
obj_t BgL_tmpz00_5839;
{ /* Llib/hash.scm 232 */
obj_t BgL_res2213z00_2843;
{ /* Llib/hash.scm 232 */
obj_t BgL_aux2755z00_4600;
BgL_aux2755z00_4600 = 
STRUCT_KEY(BgL_newz00_2819); 
if(
SYMBOLP(BgL_aux2755z00_4600))
{ /* Llib/hash.scm 232 */
BgL_res2213z00_2843 = BgL_aux2755z00_4600; }  else 
{ 
obj_t BgL_auxz00_5843;
BgL_auxz00_5843 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7927)), BGl_string3340z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2755z00_4600); 
FAILURE(BgL_auxz00_5843,BFALSE,BFALSE);} } 
BgL_tmpz00_5839 = BgL_res2213z00_2843; } 
BgL_test3745z00_5838 = 
(BgL_tmpz00_5839==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3745z00_5838)
{ /* Llib/hash.scm 232 */
int BgL_tmpz00_5848;
BgL_tmpz00_5848 = 
(int)(((long)2)); 
STRUCT_SET(BgL_newz00_2819, BgL_tmpz00_5848, BgL_arg1367z00_1558); }  else 
{ /* Llib/hash.scm 232 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2819); } } 
{ /* Llib/hash.scm 232 */
bool_t BgL_test3747z00_5852;
{ /* Llib/hash.scm 232 */
obj_t BgL_tmpz00_5853;
{ /* Llib/hash.scm 232 */
obj_t BgL_res2214z00_2847;
{ /* Llib/hash.scm 232 */
obj_t BgL_aux2757z00_4602;
BgL_aux2757z00_4602 = 
STRUCT_KEY(BgL_newz00_2819); 
if(
SYMBOLP(BgL_aux2757z00_4602))
{ /* Llib/hash.scm 232 */
BgL_res2214z00_2847 = BgL_aux2757z00_4602; }  else 
{ 
obj_t BgL_auxz00_5857;
BgL_auxz00_5857 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7927)), BGl_string3340z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2757z00_4602); 
FAILURE(BgL_auxz00_5857,BFALSE,BFALSE);} } 
BgL_tmpz00_5853 = BgL_res2214z00_2847; } 
BgL_test3747z00_5852 = 
(BgL_tmpz00_5853==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3747z00_5852)
{ /* Llib/hash.scm 232 */
int BgL_tmpz00_5862;
BgL_tmpz00_5862 = 
(int)(((long)1)); 
STRUCT_SET(BgL_newz00_2819, BgL_tmpz00_5862, BgL_maxzd2bucketzd2lengthz00_46); }  else 
{ /* Llib/hash.scm 232 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2819); } } 
{ /* Llib/hash.scm 232 */
bool_t BgL_test3749z00_5866;
{ /* Llib/hash.scm 232 */
obj_t BgL_tmpz00_5867;
{ /* Llib/hash.scm 232 */
obj_t BgL_res2215z00_2851;
{ /* Llib/hash.scm 232 */
obj_t BgL_aux2759z00_4604;
BgL_aux2759z00_4604 = 
STRUCT_KEY(BgL_newz00_2819); 
if(
SYMBOLP(BgL_aux2759z00_4604))
{ /* Llib/hash.scm 232 */
BgL_res2215z00_2851 = BgL_aux2759z00_4604; }  else 
{ 
obj_t BgL_auxz00_5871;
BgL_auxz00_5871 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)7927)), BGl_string3340z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2759z00_4604); 
FAILURE(BgL_auxz00_5871,BFALSE,BFALSE);} } 
BgL_tmpz00_5867 = BgL_res2215z00_2851; } 
BgL_test3749z00_5866 = 
(BgL_tmpz00_5867==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3749z00_5866)
{ /* Llib/hash.scm 232 */
obj_t BgL_auxz00_5878;int BgL_tmpz00_5876;
BgL_auxz00_5878 = 
BINT(((long)0)); 
BgL_tmpz00_5876 = 
(int)(((long)0)); 
STRUCT_SET(BgL_newz00_2819, BgL_tmpz00_5876, BgL_auxz00_5878); }  else 
{ /* Llib/hash.scm 232 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2819); } } 
return BgL_newz00_2819;} } } }  else 
{ /* Llib/hash.scm 236 */
obj_t BgL_arg1371z00_1564;
{ /* Llib/hash.scm 236 */
long BgL_tmpz00_5882;
{ /* Llib/hash.scm 236 */
obj_t BgL_tmpz00_5883;
if(
INTEGERP(BgL_siza7eza7_48))
{ /* Llib/hash.scm 236 */
BgL_tmpz00_5883 = BgL_siza7eza7_48
; }  else 
{ 
obj_t BgL_auxz00_5886;
BgL_auxz00_5886 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)8121)), BGl_string3340z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_siza7eza7_48); 
FAILURE(BgL_auxz00_5886,BFALSE,BFALSE);} 
BgL_tmpz00_5882 = 
(long)CINT(BgL_tmpz00_5883); } 
BgL_arg1371z00_1564 = 
make_vector(BgL_tmpz00_5882, BNIL); } 
{ /* Llib/hash.scm 236 */
obj_t BgL_newz00_2852;
BgL_newz00_2852 = 
create_struct(BGl_symbol3316z00zz__hashz00, 
(int)(((long)8))); 
{ /* Llib/hash.scm 236 */
bool_t BgL_test3752z00_5894;
{ /* Llib/hash.scm 236 */
obj_t BgL_tmpz00_5895;
{ /* Llib/hash.scm 236 */
obj_t BgL_res2216z00_2856;
{ /* Llib/hash.scm 236 */
obj_t BgL_aux2763z00_4608;
BgL_aux2763z00_4608 = 
STRUCT_KEY(BgL_newz00_2852); 
if(
SYMBOLP(BgL_aux2763z00_4608))
{ /* Llib/hash.scm 236 */
BgL_res2216z00_2856 = BgL_aux2763z00_4608; }  else 
{ 
obj_t BgL_auxz00_5899;
BgL_auxz00_5899 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)8089)), BGl_string3340z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2763z00_4608); 
FAILURE(BgL_auxz00_5899,BFALSE,BFALSE);} } 
BgL_tmpz00_5895 = BgL_res2216z00_2856; } 
BgL_test3752z00_5894 = 
(BgL_tmpz00_5895==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3752z00_5894)
{ /* Llib/hash.scm 236 */
int BgL_tmpz00_5904;
BgL_tmpz00_5904 = 
(int)(((long)7)); 
STRUCT_SET(BgL_newz00_2852, BgL_tmpz00_5904, BgL_bucketzd2expansionzd2_43); }  else 
{ /* Llib/hash.scm 236 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2852); } } 
{ /* Llib/hash.scm 236 */
bool_t BgL_test3754z00_5908;
{ /* Llib/hash.scm 236 */
obj_t BgL_tmpz00_5909;
{ /* Llib/hash.scm 236 */
obj_t BgL_res2217z00_2860;
{ /* Llib/hash.scm 236 */
obj_t BgL_aux2765z00_4610;
BgL_aux2765z00_4610 = 
STRUCT_KEY(BgL_newz00_2852); 
if(
SYMBOLP(BgL_aux2765z00_4610))
{ /* Llib/hash.scm 236 */
BgL_res2217z00_2860 = BgL_aux2765z00_4610; }  else 
{ 
obj_t BgL_auxz00_5913;
BgL_auxz00_5913 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)8089)), BGl_string3340z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2765z00_4610); 
FAILURE(BgL_auxz00_5913,BFALSE,BFALSE);} } 
BgL_tmpz00_5909 = BgL_res2217z00_2860; } 
BgL_test3754z00_5908 = 
(BgL_tmpz00_5909==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3754z00_5908)
{ /* Llib/hash.scm 236 */
int BgL_tmpz00_5918;
BgL_tmpz00_5918 = 
(int)(((long)6)); 
STRUCT_SET(BgL_newz00_2852, BgL_tmpz00_5918, BgL_maxzd2lengthzd2_47); }  else 
{ /* Llib/hash.scm 236 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2852); } } 
{ /* Llib/hash.scm 236 */
bool_t BgL_test3756z00_5922;
{ /* Llib/hash.scm 236 */
obj_t BgL_tmpz00_5923;
{ /* Llib/hash.scm 236 */
obj_t BgL_res2218z00_2864;
{ /* Llib/hash.scm 236 */
obj_t BgL_aux2767z00_4612;
BgL_aux2767z00_4612 = 
STRUCT_KEY(BgL_newz00_2852); 
if(
SYMBOLP(BgL_aux2767z00_4612))
{ /* Llib/hash.scm 236 */
BgL_res2218z00_2864 = BgL_aux2767z00_4612; }  else 
{ 
obj_t BgL_auxz00_5927;
BgL_auxz00_5927 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)8089)), BGl_string3340z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2767z00_4612); 
FAILURE(BgL_auxz00_5927,BFALSE,BFALSE);} } 
BgL_tmpz00_5923 = BgL_res2218z00_2864; } 
BgL_test3756z00_5922 = 
(BgL_tmpz00_5923==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3756z00_5922)
{ /* Llib/hash.scm 236 */
obj_t BgL_auxz00_5934;int BgL_tmpz00_5932;
BgL_auxz00_5934 = 
BINT(BgL_weakz00_1556); 
BgL_tmpz00_5932 = 
(int)(((long)5)); 
STRUCT_SET(BgL_newz00_2852, BgL_tmpz00_5932, BgL_auxz00_5934); }  else 
{ /* Llib/hash.scm 236 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2852); } } 
{ /* Llib/hash.scm 236 */
bool_t BgL_test3758z00_5938;
{ /* Llib/hash.scm 236 */
obj_t BgL_tmpz00_5939;
{ /* Llib/hash.scm 236 */
obj_t BgL_res2219z00_2868;
{ /* Llib/hash.scm 236 */
obj_t BgL_aux2769z00_4614;
BgL_aux2769z00_4614 = 
STRUCT_KEY(BgL_newz00_2852); 
if(
SYMBOLP(BgL_aux2769z00_4614))
{ /* Llib/hash.scm 236 */
BgL_res2219z00_2868 = BgL_aux2769z00_4614; }  else 
{ 
obj_t BgL_auxz00_5943;
BgL_auxz00_5943 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)8089)), BGl_string3340z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2769z00_4614); 
FAILURE(BgL_auxz00_5943,BFALSE,BFALSE);} } 
BgL_tmpz00_5939 = BgL_res2219z00_2868; } 
BgL_test3758z00_5938 = 
(BgL_tmpz00_5939==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3758z00_5938)
{ /* Llib/hash.scm 236 */
int BgL_tmpz00_5948;
BgL_tmpz00_5948 = 
(int)(((long)4)); 
STRUCT_SET(BgL_newz00_2852, BgL_tmpz00_5948, BgL_hashz00_45); }  else 
{ /* Llib/hash.scm 236 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2852); } } 
{ /* Llib/hash.scm 236 */
bool_t BgL_test3760z00_5952;
{ /* Llib/hash.scm 236 */
obj_t BgL_tmpz00_5953;
{ /* Llib/hash.scm 236 */
obj_t BgL_res2220z00_2872;
{ /* Llib/hash.scm 236 */
obj_t BgL_aux2771z00_4616;
BgL_aux2771z00_4616 = 
STRUCT_KEY(BgL_newz00_2852); 
if(
SYMBOLP(BgL_aux2771z00_4616))
{ /* Llib/hash.scm 236 */
BgL_res2220z00_2872 = BgL_aux2771z00_4616; }  else 
{ 
obj_t BgL_auxz00_5957;
BgL_auxz00_5957 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)8089)), BGl_string3340z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2771z00_4616); 
FAILURE(BgL_auxz00_5957,BFALSE,BFALSE);} } 
BgL_tmpz00_5953 = BgL_res2220z00_2872; } 
BgL_test3760z00_5952 = 
(BgL_tmpz00_5953==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3760z00_5952)
{ /* Llib/hash.scm 236 */
int BgL_tmpz00_5962;
BgL_tmpz00_5962 = 
(int)(((long)3)); 
STRUCT_SET(BgL_newz00_2852, BgL_tmpz00_5962, BgL_eqtestz00_44); }  else 
{ /* Llib/hash.scm 236 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2852); } } 
{ /* Llib/hash.scm 236 */
bool_t BgL_test3762z00_5966;
{ /* Llib/hash.scm 236 */
obj_t BgL_tmpz00_5967;
{ /* Llib/hash.scm 236 */
obj_t BgL_res2221z00_2876;
{ /* Llib/hash.scm 236 */
obj_t BgL_aux2773z00_4618;
BgL_aux2773z00_4618 = 
STRUCT_KEY(BgL_newz00_2852); 
if(
SYMBOLP(BgL_aux2773z00_4618))
{ /* Llib/hash.scm 236 */
BgL_res2221z00_2876 = BgL_aux2773z00_4618; }  else 
{ 
obj_t BgL_auxz00_5971;
BgL_auxz00_5971 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)8089)), BGl_string3340z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2773z00_4618); 
FAILURE(BgL_auxz00_5971,BFALSE,BFALSE);} } 
BgL_tmpz00_5967 = BgL_res2221z00_2876; } 
BgL_test3762z00_5966 = 
(BgL_tmpz00_5967==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3762z00_5966)
{ /* Llib/hash.scm 236 */
int BgL_tmpz00_5976;
BgL_tmpz00_5976 = 
(int)(((long)2)); 
STRUCT_SET(BgL_newz00_2852, BgL_tmpz00_5976, BgL_arg1371z00_1564); }  else 
{ /* Llib/hash.scm 236 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2852); } } 
{ /* Llib/hash.scm 236 */
bool_t BgL_test3764z00_5980;
{ /* Llib/hash.scm 236 */
obj_t BgL_tmpz00_5981;
{ /* Llib/hash.scm 236 */
obj_t BgL_res2222z00_2880;
{ /* Llib/hash.scm 236 */
obj_t BgL_aux2775z00_4620;
BgL_aux2775z00_4620 = 
STRUCT_KEY(BgL_newz00_2852); 
if(
SYMBOLP(BgL_aux2775z00_4620))
{ /* Llib/hash.scm 236 */
BgL_res2222z00_2880 = BgL_aux2775z00_4620; }  else 
{ 
obj_t BgL_auxz00_5985;
BgL_auxz00_5985 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)8089)), BGl_string3340z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2775z00_4620); 
FAILURE(BgL_auxz00_5985,BFALSE,BFALSE);} } 
BgL_tmpz00_5981 = BgL_res2222z00_2880; } 
BgL_test3764z00_5980 = 
(BgL_tmpz00_5981==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3764z00_5980)
{ /* Llib/hash.scm 236 */
int BgL_tmpz00_5990;
BgL_tmpz00_5990 = 
(int)(((long)1)); 
STRUCT_SET(BgL_newz00_2852, BgL_tmpz00_5990, BgL_maxzd2bucketzd2lengthz00_46); }  else 
{ /* Llib/hash.scm 236 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2852); } } 
{ /* Llib/hash.scm 236 */
bool_t BgL_test3766z00_5994;
{ /* Llib/hash.scm 236 */
obj_t BgL_tmpz00_5995;
{ /* Llib/hash.scm 236 */
obj_t BgL_res2223z00_2884;
{ /* Llib/hash.scm 236 */
obj_t BgL_aux2777z00_4622;
BgL_aux2777z00_4622 = 
STRUCT_KEY(BgL_newz00_2852); 
if(
SYMBOLP(BgL_aux2777z00_4622))
{ /* Llib/hash.scm 236 */
BgL_res2223z00_2884 = BgL_aux2777z00_4622; }  else 
{ 
obj_t BgL_auxz00_5999;
BgL_auxz00_5999 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)8089)), BGl_string3340z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2777z00_4622); 
FAILURE(BgL_auxz00_5999,BFALSE,BFALSE);} } 
BgL_tmpz00_5995 = BgL_res2223z00_2884; } 
BgL_test3766z00_5994 = 
(BgL_tmpz00_5995==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3766z00_5994)
{ /* Llib/hash.scm 236 */
obj_t BgL_auxz00_6006;int BgL_tmpz00_6004;
BgL_auxz00_6006 = 
BINT(((long)0)); 
BgL_tmpz00_6004 = 
(int)(((long)0)); 
STRUCT_SET(BgL_newz00_2852, BgL_tmpz00_6004, BgL_auxz00_6006); }  else 
{ /* Llib/hash.scm 236 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_newz00_2852); } } 
return BgL_newz00_2852;} } } } 

}



/* &<@anonymous:1369> */
obj_t BGl_z62zc3z04anonymousza31369ze3ze5zz__hashz00(obj_t BgL_envz00_4462, obj_t BgL_sz00_4463)
{
{ /* Llib/hash.scm 234 */
{ /* Llib/hash.scm 234 */
long BgL_tmpz00_6010;
{ /* Llib/hash.scm 234 */
long BgL_arg1370z00_5179;
{ /* Llib/hash.scm 234 */
obj_t BgL_stringz00_5180;
if(
STRINGP(BgL_sz00_4463))
{ /* Llib/hash.scm 234 */
BgL_stringz00_5180 = BgL_sz00_4463; }  else 
{ 
obj_t BgL_auxz00_6013;
BgL_auxz00_6013 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)8027)), BGl_string3355z00zz__hashz00, BGl_string3356z00zz__hashz00, BgL_sz00_4463); 
FAILURE(BgL_auxz00_6013,BFALSE,BFALSE);} 
BgL_arg1370z00_5179 = 
STRING_LENGTH(BgL_stringz00_5180); } 
{ /* Llib/hash.scm 234 */
char * BgL_tmpz00_6018;
{ /* Llib/hash.scm 234 */
obj_t BgL_tmpz00_6019;
if(
STRINGP(BgL_sz00_4463))
{ /* Llib/hash.scm 234 */
BgL_tmpz00_6019 = BgL_sz00_4463
; }  else 
{ 
obj_t BgL_auxz00_6022;
BgL_auxz00_6022 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)8023)), BGl_string3355z00zz__hashz00, BGl_string3356z00zz__hashz00, BgL_sz00_4463); 
FAILURE(BgL_auxz00_6022,BFALSE,BFALSE);} 
BgL_tmpz00_6018 = 
BSTRING_TO_STRING(BgL_tmpz00_6019); } 
BgL_tmpz00_6010 = 
bgl_string_hash(BgL_tmpz00_6018, 
(int)(((long)0)), 
(int)(BgL_arg1370z00_5179)); } } 
return 
BINT(BgL_tmpz00_6010);} } 

}



/* hashtable? */
BGL_EXPORTED_DEF bool_t BGl_hashtablezf3zf3zz__hashz00(obj_t BgL_objz00_52)
{
{ /* Llib/hash.scm 243 */
if(
STRUCTP(BgL_objz00_52))
{ /* Llib/hash.scm 244 */
obj_t BgL_tmpz00_6033;
{ /* Llib/hash.scm 244 */
obj_t BgL_res2225z00_2889;
{ /* Llib/hash.scm 244 */
obj_t BgL_aux2783z00_4628;
BgL_aux2783z00_4628 = 
STRUCT_KEY(BgL_objz00_52); 
if(
SYMBOLP(BgL_aux2783z00_4628))
{ /* Llib/hash.scm 244 */
BgL_res2225z00_2889 = BgL_aux2783z00_4628; }  else 
{ 
obj_t BgL_auxz00_6037;
BgL_auxz00_6037 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)8467)), BGl_string3357z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2783z00_4628); 
FAILURE(BgL_auxz00_6037,BFALSE,BFALSE);} } 
BgL_tmpz00_6033 = BgL_res2225z00_2889; } 
return 
(BgL_tmpz00_6033==BGl_symbol3316z00zz__hashz00);}  else 
{ /* Llib/hash.scm 244 */
return ((bool_t)0);} } 

}



/* &hashtable? */
obj_t BGl_z62hashtablezf3z91zz__hashz00(obj_t BgL_envz00_4467, obj_t BgL_objz00_4468)
{
{ /* Llib/hash.scm 243 */
return 
BBOOL(
BGl_hashtablezf3zf3zz__hashz00(BgL_objz00_4468));} 

}



/* hashtable-weak? */
bool_t BGl_hashtablezd2weakzf3z21zz__hashz00(obj_t BgL_tablez00_53)
{
{ /* Llib/hash.scm 249 */
{ /* Llib/hash.scm 250 */
bool_t BgL_test3772z00_6044;
{ /* Llib/hash.scm 250 */
long BgL_arg1380z00_1574;
{ /* Llib/hash.scm 250 */
obj_t BgL_arg1381z00_1575;
{ /* Llib/hash.scm 250 */
bool_t BgL_test3773z00_6045;
{ /* Llib/hash.scm 250 */
obj_t BgL_tmpz00_6046;
{ /* Llib/hash.scm 250 */
obj_t BgL_res2226z00_2893;
{ /* Llib/hash.scm 250 */
obj_t BgL_aux2785z00_4630;
BgL_aux2785z00_4630 = 
STRUCT_KEY(BgL_tablez00_53); 
if(
SYMBOLP(BgL_aux2785z00_4630))
{ /* Llib/hash.scm 250 */
BgL_res2226z00_2893 = BgL_aux2785z00_4630; }  else 
{ 
obj_t BgL_auxz00_6050;
BgL_auxz00_6050 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)8779)), BGl_string3358z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2785z00_4630); 
FAILURE(BgL_auxz00_6050,BFALSE,BFALSE);} } 
BgL_tmpz00_6046 = BgL_res2226z00_2893; } 
BgL_test3773z00_6045 = 
(BgL_tmpz00_6046==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3773z00_6045)
{ /* Llib/hash.scm 250 */
int BgL_tmpz00_6055;
BgL_tmpz00_6055 = 
(int)(((long)5)); 
BgL_arg1381z00_1575 = 
STRUCT_REF(BgL_tablez00_53, BgL_tmpz00_6055); }  else 
{ /* Llib/hash.scm 250 */
BgL_arg1381z00_1575 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_53); } } 
{ /* Llib/hash.scm 250 */
long BgL_xz00_2894;
{ /* Llib/hash.scm 250 */
obj_t BgL_tmpz00_6059;
if(
INTEGERP(BgL_arg1381z00_1575))
{ /* Llib/hash.scm 250 */
BgL_tmpz00_6059 = BgL_arg1381z00_1575
; }  else 
{ 
obj_t BgL_auxz00_6062;
BgL_auxz00_6062 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)8801)), BGl_string3358z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1381z00_1575); 
FAILURE(BgL_auxz00_6062,BFALSE,BFALSE);} 
BgL_xz00_2894 = 
(long)CINT(BgL_tmpz00_6059); } 
BgL_arg1380z00_1574 = 
(BgL_xz00_2894 & ((long)3)); } } 
BgL_test3772z00_6044 = 
(((long)0)==BgL_arg1380z00_1574); } 
if(BgL_test3772z00_6044)
{ /* Llib/hash.scm 250 */
return ((bool_t)0);}  else 
{ /* Llib/hash.scm 250 */
return ((bool_t)1);} } } 

}



/* hashtable-weak-keys? */
BGL_EXPORTED_DEF bool_t BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(obj_t BgL_tablez00_55)
{
{ /* Llib/hash.scm 261 */
{ /* Llib/hash.scm 262 */
bool_t BgL_test3776z00_6069;
{ /* Llib/hash.scm 262 */
long BgL_arg1386z00_1580;
{ /* Llib/hash.scm 262 */
obj_t BgL_arg1387z00_1581;
{ /* Llib/hash.scm 262 */
bool_t BgL_test3777z00_6070;
{ /* Llib/hash.scm 262 */
obj_t BgL_tmpz00_6071;
{ /* Llib/hash.scm 262 */
obj_t BgL_res2231z00_2908;
{ /* Llib/hash.scm 262 */
obj_t BgL_aux2789z00_4634;
BgL_aux2789z00_4634 = 
STRUCT_KEY(BgL_tablez00_55); 
if(
SYMBOLP(BgL_aux2789z00_4634))
{ /* Llib/hash.scm 262 */
BgL_res2231z00_2908 = BgL_aux2789z00_4634; }  else 
{ 
obj_t BgL_auxz00_6075;
BgL_auxz00_6075 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)9438)), BGl_string3360z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2789z00_4634); 
FAILURE(BgL_auxz00_6075,BFALSE,BFALSE);} } 
BgL_tmpz00_6071 = BgL_res2231z00_2908; } 
BgL_test3777z00_6070 = 
(BgL_tmpz00_6071==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3777z00_6070)
{ /* Llib/hash.scm 262 */
int BgL_tmpz00_6080;
BgL_tmpz00_6080 = 
(int)(((long)5)); 
BgL_arg1387z00_1581 = 
STRUCT_REF(BgL_tablez00_55, BgL_tmpz00_6080); }  else 
{ /* Llib/hash.scm 262 */
BgL_arg1387z00_1581 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_55); } } 
{ /* Llib/hash.scm 262 */
long BgL_yz00_2909;
{ /* Llib/hash.scm 262 */
obj_t BgL_tmpz00_6084;
if(
INTEGERP(BgL_arg1387z00_1581))
{ /* Llib/hash.scm 262 */
BgL_tmpz00_6084 = BgL_arg1387z00_1581
; }  else 
{ 
obj_t BgL_auxz00_6087;
BgL_auxz00_6087 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)9460)), BGl_string3360z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1387z00_1581); 
FAILURE(BgL_auxz00_6087,BFALSE,BFALSE);} 
BgL_yz00_2909 = 
(long)CINT(BgL_tmpz00_6084); } 
BgL_arg1386z00_1580 = 
(((long)1) & BgL_yz00_2909); } } 
BgL_test3776z00_6069 = 
(((long)0)==BgL_arg1386z00_1580); } 
if(BgL_test3776z00_6069)
{ /* Llib/hash.scm 262 */
return ((bool_t)0);}  else 
{ /* Llib/hash.scm 262 */
return ((bool_t)1);} } } 

}



/* &hashtable-weak-keys? */
obj_t BGl_z62hashtablezd2weakzd2keyszf3z91zz__hashz00(obj_t BgL_envz00_4469, obj_t BgL_tablez00_4470)
{
{ /* Llib/hash.scm 261 */
{ /* Llib/hash.scm 262 */
bool_t BgL_tmpz00_6094;
{ /* Llib/hash.scm 262 */
obj_t BgL_auxz00_6095;
if(
STRUCTP(BgL_tablez00_4470))
{ /* Llib/hash.scm 262 */
BgL_auxz00_6095 = BgL_tablez00_4470
; }  else 
{ 
obj_t BgL_auxz00_6098;
BgL_auxz00_6098 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)9405)), BGl_string3361z00zz__hashz00, BGl_string3362z00zz__hashz00, BgL_tablez00_4470); 
FAILURE(BgL_auxz00_6098,BFALSE,BFALSE);} 
BgL_tmpz00_6094 = 
BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(BgL_auxz00_6095); } 
return 
BBOOL(BgL_tmpz00_6094);} } 

}



/* hashtable-weak-data? */
BGL_EXPORTED_DEF bool_t BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(obj_t BgL_tablez00_56)
{
{ /* Llib/hash.scm 267 */
{ /* Llib/hash.scm 268 */
bool_t BgL_test3781z00_6104;
{ /* Llib/hash.scm 268 */
long BgL_arg1391z00_1585;
{ /* Llib/hash.scm 268 */
obj_t BgL_arg1392z00_1586;
{ /* Llib/hash.scm 268 */
bool_t BgL_test3782z00_6105;
{ /* Llib/hash.scm 268 */
obj_t BgL_tmpz00_6106;
{ /* Llib/hash.scm 268 */
obj_t BgL_res2234z00_2916;
{ /* Llib/hash.scm 268 */
obj_t BgL_aux2795z00_4640;
BgL_aux2795z00_4640 = 
STRUCT_KEY(BgL_tablez00_56); 
if(
SYMBOLP(BgL_aux2795z00_4640))
{ /* Llib/hash.scm 268 */
BgL_res2234z00_2916 = BgL_aux2795z00_4640; }  else 
{ 
obj_t BgL_auxz00_6110;
BgL_auxz00_6110 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)9776)), BGl_string3363z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2795z00_4640); 
FAILURE(BgL_auxz00_6110,BFALSE,BFALSE);} } 
BgL_tmpz00_6106 = BgL_res2234z00_2916; } 
BgL_test3782z00_6105 = 
(BgL_tmpz00_6106==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3782z00_6105)
{ /* Llib/hash.scm 268 */
int BgL_tmpz00_6115;
BgL_tmpz00_6115 = 
(int)(((long)5)); 
BgL_arg1392z00_1586 = 
STRUCT_REF(BgL_tablez00_56, BgL_tmpz00_6115); }  else 
{ /* Llib/hash.scm 268 */
BgL_arg1392z00_1586 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_56); } } 
{ /* Llib/hash.scm 268 */
long BgL_yz00_2917;
{ /* Llib/hash.scm 268 */
obj_t BgL_tmpz00_6119;
if(
INTEGERP(BgL_arg1392z00_1586))
{ /* Llib/hash.scm 268 */
BgL_tmpz00_6119 = BgL_arg1392z00_1586
; }  else 
{ 
obj_t BgL_auxz00_6122;
BgL_auxz00_6122 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)9798)), BGl_string3363z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1392z00_1586); 
FAILURE(BgL_auxz00_6122,BFALSE,BFALSE);} 
BgL_yz00_2917 = 
(long)CINT(BgL_tmpz00_6119); } 
BgL_arg1391z00_1585 = 
(((long)2) & BgL_yz00_2917); } } 
BgL_test3781z00_6104 = 
(((long)0)==BgL_arg1391z00_1585); } 
if(BgL_test3781z00_6104)
{ /* Llib/hash.scm 268 */
return ((bool_t)0);}  else 
{ /* Llib/hash.scm 268 */
return ((bool_t)1);} } } 

}



/* &hashtable-weak-data? */
obj_t BGl_z62hashtablezd2weakzd2datazf3z91zz__hashz00(obj_t BgL_envz00_4471, obj_t BgL_tablez00_4472)
{
{ /* Llib/hash.scm 267 */
{ /* Llib/hash.scm 268 */
bool_t BgL_tmpz00_6129;
{ /* Llib/hash.scm 268 */
obj_t BgL_auxz00_6130;
if(
STRUCTP(BgL_tablez00_4472))
{ /* Llib/hash.scm 268 */
BgL_auxz00_6130 = BgL_tablez00_4472
; }  else 
{ 
obj_t BgL_auxz00_6133;
BgL_auxz00_6133 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)9743)), BGl_string3364z00zz__hashz00, BGl_string3362z00zz__hashz00, BgL_tablez00_4472); 
FAILURE(BgL_auxz00_6133,BFALSE,BFALSE);} 
BgL_tmpz00_6129 = 
BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(BgL_auxz00_6130); } 
return 
BBOOL(BgL_tmpz00_6129);} } 

}



/* hashtable-size */
BGL_EXPORTED_DEF long BGl_hashtablezd2siza7ez75zz__hashz00(obj_t BgL_tablez00_57)
{
{ /* Llib/hash.scm 273 */
{ /* Llib/hash.scm 274 */
bool_t BgL_test3786z00_6139;
{ /* Llib/hash.scm 274 */
obj_t BgL_tmpz00_6140;
{ /* Llib/hash.scm 274 */
obj_t BgL_res2237z00_2924;
{ /* Llib/hash.scm 274 */
obj_t BgL_aux2801z00_4646;
BgL_aux2801z00_4646 = 
STRUCT_KEY(BgL_tablez00_57); 
if(
SYMBOLP(BgL_aux2801z00_4646))
{ /* Llib/hash.scm 274 */
BgL_res2237z00_2924 = BgL_aux2801z00_4646; }  else 
{ 
obj_t BgL_auxz00_6144;
BgL_auxz00_6144 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)10075)), BGl_string3365z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2801z00_4646); 
FAILURE(BgL_auxz00_6144,BFALSE,BFALSE);} } 
BgL_tmpz00_6140 = BgL_res2237z00_2924; } 
BgL_test3786z00_6139 = 
(BgL_tmpz00_6140==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3786z00_6139)
{ /* Llib/hash.scm 274 */
obj_t BgL_tmpz00_6149;
{ /* Llib/hash.scm 274 */
obj_t BgL_aux2803z00_4648;
{ /* Llib/hash.scm 274 */
int BgL_tmpz00_6150;
BgL_tmpz00_6150 = 
(int)(((long)0)); 
BgL_aux2803z00_4648 = 
STRUCT_REF(BgL_tablez00_57, BgL_tmpz00_6150); } 
if(
INTEGERP(BgL_aux2803z00_4648))
{ /* Llib/hash.scm 274 */
BgL_tmpz00_6149 = BgL_aux2803z00_4648
; }  else 
{ 
obj_t BgL_auxz00_6155;
BgL_auxz00_6155 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)10075)), BGl_string3365z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_aux2803z00_4648); 
FAILURE(BgL_auxz00_6155,BFALSE,BFALSE);} } 
return 
(long)CINT(BgL_tmpz00_6149);}  else 
{ /* Llib/hash.scm 274 */
obj_t BgL_tmpz00_6160;
{ /* Llib/hash.scm 274 */
obj_t BgL_aux2805z00_4650;
BgL_aux2805z00_4650 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_57); 
if(
INTEGERP(BgL_aux2805z00_4650))
{ /* Llib/hash.scm 274 */
BgL_tmpz00_6160 = BgL_aux2805z00_4650
; }  else 
{ 
obj_t BgL_auxz00_6164;
BgL_auxz00_6164 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)10075)), BGl_string3365z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_aux2805z00_4650); 
FAILURE(BgL_auxz00_6164,BFALSE,BFALSE);} } 
return 
(long)CINT(BgL_tmpz00_6160);} } } 

}



/* &hashtable-size */
obj_t BGl_z62hashtablezd2siza7ez17zz__hashz00(obj_t BgL_envz00_4473, obj_t BgL_tablez00_4474)
{
{ /* Llib/hash.scm 273 */
{ /* Llib/hash.scm 274 */
long BgL_tmpz00_6169;
{ /* Llib/hash.scm 274 */
obj_t BgL_auxz00_6170;
if(
STRUCTP(BgL_tablez00_4474))
{ /* Llib/hash.scm 274 */
BgL_auxz00_6170 = BgL_tablez00_4474
; }  else 
{ 
obj_t BgL_auxz00_6173;
BgL_auxz00_6173 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)10075)), BGl_string3366z00zz__hashz00, BGl_string3362z00zz__hashz00, BgL_tablez00_4474); 
FAILURE(BgL_auxz00_6173,BFALSE,BFALSE);} 
BgL_tmpz00_6169 = 
BGl_hashtablezd2siza7ez75zz__hashz00(BgL_auxz00_6170); } 
return 
BINT(BgL_tmpz00_6169);} } 

}



/* hashtable->vector */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2ze3vectorz31zz__hashz00(obj_t BgL_tablez00_58)
{
{ /* Llib/hash.scm 279 */
if(
BGl_hashtablezd2weakzf3z21zz__hashz00(BgL_tablez00_58))
{ /* Llib/hash.scm 280 */
return 
BGl_weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(BgL_tablez00_58);}  else 
{ /* Llib/hash.scm 280 */
return 
BGl_plainzd2hashtablezd2ze3vectorze3zz__hashz00(BgL_tablez00_58);} } 

}



/* &hashtable->vector */
obj_t BGl_z62hashtablezd2ze3vectorz53zz__hashz00(obj_t BgL_envz00_4475, obj_t BgL_tablez00_4476)
{
{ /* Llib/hash.scm 279 */
{ /* Llib/hash.scm 280 */
obj_t BgL_auxz00_6183;
if(
STRUCTP(BgL_tablez00_4476))
{ /* Llib/hash.scm 280 */
BgL_auxz00_6183 = BgL_tablez00_4476
; }  else 
{ 
obj_t BgL_auxz00_6186;
BgL_auxz00_6186 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)10368)), BGl_string3367z00zz__hashz00, BGl_string3362z00zz__hashz00, BgL_tablez00_4476); 
FAILURE(BgL_auxz00_6186,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2ze3vectorz31zz__hashz00(BgL_auxz00_6183);} } 

}



/* plain-hashtable->vector */
obj_t BGl_plainzd2hashtablezd2ze3vectorze3zz__hashz00(obj_t BgL_tablez00_59)
{
{ /* Llib/hash.scm 287 */
{ /* Llib/hash.scm 288 */
obj_t BgL_vecz00_1588;
{ /* Llib/hash.scm 288 */
long BgL_arg1402z00_1608;
{ /* Llib/hash.scm 288 */
long BgL_res2239z00_2931;
{ /* Llib/hash.scm 274 */
bool_t BgL_test3793z00_6191;
{ /* Llib/hash.scm 274 */
obj_t BgL_tmpz00_6192;
{ /* Llib/hash.scm 274 */
obj_t BgL_res2238z00_2930;
{ /* Llib/hash.scm 274 */
obj_t BgL_aux2811z00_4656;
BgL_aux2811z00_4656 = 
STRUCT_KEY(BgL_tablez00_59); 
if(
SYMBOLP(BgL_aux2811z00_4656))
{ /* Llib/hash.scm 274 */
BgL_res2238z00_2930 = BgL_aux2811z00_4656; }  else 
{ 
obj_t BgL_auxz00_6196;
BgL_auxz00_6196 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)10075)), BGl_string3368z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2811z00_4656); 
FAILURE(BgL_auxz00_6196,BFALSE,BFALSE);} } 
BgL_tmpz00_6192 = BgL_res2238z00_2930; } 
BgL_test3793z00_6191 = 
(BgL_tmpz00_6192==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3793z00_6191)
{ /* Llib/hash.scm 274 */
obj_t BgL_tmpz00_6201;
{ /* Llib/hash.scm 274 */
obj_t BgL_aux2813z00_4658;
{ /* Llib/hash.scm 274 */
int BgL_tmpz00_6202;
BgL_tmpz00_6202 = 
(int)(((long)0)); 
BgL_aux2813z00_4658 = 
STRUCT_REF(BgL_tablez00_59, BgL_tmpz00_6202); } 
if(
INTEGERP(BgL_aux2813z00_4658))
{ /* Llib/hash.scm 274 */
BgL_tmpz00_6201 = BgL_aux2813z00_4658
; }  else 
{ 
obj_t BgL_auxz00_6207;
BgL_auxz00_6207 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)10075)), BGl_string3368z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_aux2813z00_4658); 
FAILURE(BgL_auxz00_6207,BFALSE,BFALSE);} } 
BgL_res2239z00_2931 = 
(long)CINT(BgL_tmpz00_6201); }  else 
{ /* Llib/hash.scm 274 */
obj_t BgL_tmpz00_6212;
{ /* Llib/hash.scm 274 */
obj_t BgL_aux2815z00_4660;
BgL_aux2815z00_4660 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_59); 
if(
INTEGERP(BgL_aux2815z00_4660))
{ /* Llib/hash.scm 274 */
BgL_tmpz00_6212 = BgL_aux2815z00_4660
; }  else 
{ 
obj_t BgL_auxz00_6216;
BgL_auxz00_6216 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)10075)), BGl_string3368z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_aux2815z00_4660); 
FAILURE(BgL_auxz00_6216,BFALSE,BFALSE);} } 
BgL_res2239z00_2931 = 
(long)CINT(BgL_tmpz00_6212); } } 
BgL_arg1402z00_1608 = BgL_res2239z00_2931; } 
BgL_vecz00_1588 = 
make_vector(BgL_arg1402z00_1608, BUNSPEC); } 
{ /* Llib/hash.scm 288 */
obj_t BgL_bucketsz00_1589;
{ /* Llib/hash.scm 289 */
bool_t BgL_test3797z00_6222;
{ /* Llib/hash.scm 289 */
obj_t BgL_tmpz00_6223;
{ /* Llib/hash.scm 289 */
obj_t BgL_res2241z00_2936;
{ /* Llib/hash.scm 289 */
obj_t BgL_aux2817z00_4663;
BgL_aux2817z00_4663 = 
STRUCT_KEY(BgL_tablez00_59); 
if(
SYMBOLP(BgL_aux2817z00_4663))
{ /* Llib/hash.scm 289 */
BgL_res2241z00_2936 = BgL_aux2817z00_4663; }  else 
{ 
obj_t BgL_auxz00_6227;
BgL_auxz00_6227 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)10811)), BGl_string3368z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2817z00_4663); 
FAILURE(BgL_auxz00_6227,BFALSE,BFALSE);} } 
BgL_tmpz00_6223 = BgL_res2241z00_2936; } 
BgL_test3797z00_6222 = 
(BgL_tmpz00_6223==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3797z00_6222)
{ /* Llib/hash.scm 289 */
int BgL_tmpz00_6232;
BgL_tmpz00_6232 = 
(int)(((long)2)); 
BgL_bucketsz00_1589 = 
STRUCT_REF(BgL_tablez00_59, BgL_tmpz00_6232); }  else 
{ /* Llib/hash.scm 289 */
BgL_bucketsz00_1589 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_59); } } 
{ /* Llib/hash.scm 289 */
long BgL_bucketszd2lenzd2_1590;
{ /* Llib/hash.scm 290 */
obj_t BgL_vectorz00_2937;
if(
VECTORP(BgL_bucketsz00_1589))
{ /* Llib/hash.scm 290 */
BgL_vectorz00_2937 = BgL_bucketsz00_1589; }  else 
{ 
obj_t BgL_auxz00_6238;
BgL_auxz00_6238 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)10870)), BGl_string3368z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1589); 
FAILURE(BgL_auxz00_6238,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1590 = 
VECTOR_LENGTH(BgL_vectorz00_2937); } 
{ /* Llib/hash.scm 290 */

{ 
long BgL_iz00_1592;long BgL_wz00_1593;
BgL_iz00_1592 = ((long)0); 
BgL_wz00_1593 = ((long)0); 
BgL_zc3z04anonymousza31394ze3z87_1594:
if(
(BgL_iz00_1592==BgL_bucketszd2lenzd2_1590))
{ /* Llib/hash.scm 293 */
return BgL_vecz00_1588;}  else 
{ /* Llib/hash.scm 295 */
obj_t BgL_g1055z00_1596;
{ /* Llib/hash.scm 295 */
obj_t BgL_vectorz00_2941;
if(
VECTORP(BgL_bucketsz00_1589))
{ /* Llib/hash.scm 295 */
BgL_vectorz00_2941 = BgL_bucketsz00_1589; }  else 
{ 
obj_t BgL_auxz00_6247;
BgL_auxz00_6247 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)10990)), BGl_string3370z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1589); 
FAILURE(BgL_auxz00_6247,BFALSE,BFALSE);} 
BgL_g1055z00_1596 = 
VECTOR_REF(BgL_vectorz00_2941,BgL_iz00_1592); } 
{ 
obj_t BgL_bucketz00_1598;long BgL_wz00_1599;
BgL_bucketz00_1598 = BgL_g1055z00_1596; 
BgL_wz00_1599 = BgL_wz00_1593; 
BgL_zc3z04anonymousza31396ze3z87_1600:
if(
NULLP(BgL_bucketz00_1598))
{ 
long BgL_wz00_6256;long BgL_iz00_6254;
BgL_iz00_6254 = 
(BgL_iz00_1592+((long)1)); 
BgL_wz00_6256 = BgL_wz00_1599; 
BgL_wz00_1593 = BgL_wz00_6256; 
BgL_iz00_1592 = BgL_iz00_6254; 
goto BgL_zc3z04anonymousza31394ze3z87_1594;}  else 
{ /* Llib/hash.scm 297 */
{ /* Llib/hash.scm 300 */
obj_t BgL_arg1399z00_1603;
{ /* Llib/hash.scm 300 */
obj_t BgL_pairz00_2946;
if(
PAIRP(BgL_bucketz00_1598))
{ /* Llib/hash.scm 300 */
BgL_pairz00_2946 = BgL_bucketz00_1598; }  else 
{ 
obj_t BgL_auxz00_6259;
BgL_auxz00_6259 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)11108)), BGl_string3371z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_bucketz00_1598); 
FAILURE(BgL_auxz00_6259,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 300 */
obj_t BgL_pairz00_2949;
{ /* Llib/hash.scm 300 */
obj_t BgL_aux2825z00_4671;
BgL_aux2825z00_4671 = 
CAR(BgL_pairz00_2946); 
if(
PAIRP(BgL_aux2825z00_4671))
{ /* Llib/hash.scm 300 */
BgL_pairz00_2949 = BgL_aux2825z00_4671; }  else 
{ 
obj_t BgL_auxz00_6266;
BgL_auxz00_6266 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)11102)), BGl_string3371z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_aux2825z00_4671); 
FAILURE(BgL_auxz00_6266,BFALSE,BFALSE);} } 
BgL_arg1399z00_1603 = 
CDR(BgL_pairz00_2949); } } 
VECTOR_SET(BgL_vecz00_1588,BgL_wz00_1599,BgL_arg1399z00_1603); } 
{ /* Llib/hash.scm 301 */
obj_t BgL_arg1400z00_1604;long BgL_arg1401z00_1605;
{ /* Llib/hash.scm 301 */
obj_t BgL_pairz00_2952;
if(
PAIRP(BgL_bucketz00_1598))
{ /* Llib/hash.scm 301 */
BgL_pairz00_2952 = BgL_bucketz00_1598; }  else 
{ 
obj_t BgL_auxz00_6274;
BgL_auxz00_6274 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)11137)), BGl_string3371z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_bucketz00_1598); 
FAILURE(BgL_auxz00_6274,BFALSE,BFALSE);} 
BgL_arg1400z00_1604 = 
CDR(BgL_pairz00_2952); } 
BgL_arg1401z00_1605 = 
(BgL_wz00_1599+((long)1)); 
{ 
long BgL_wz00_6281;obj_t BgL_bucketz00_6280;
BgL_bucketz00_6280 = BgL_arg1400z00_1604; 
BgL_wz00_6281 = BgL_arg1401z00_1605; 
BgL_wz00_1599 = BgL_wz00_6281; 
BgL_bucketz00_1598 = BgL_bucketz00_6280; 
goto BgL_zc3z04anonymousza31396ze3z87_1600;} } } } } } } } } } } 

}



/* hashtable->list */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2ze3listz31zz__hashz00(obj_t BgL_tablez00_60)
{
{ /* Llib/hash.scm 306 */
if(
BGl_hashtablezd2weakzf3z21zz__hashz00(BgL_tablez00_60))
{ /* Llib/hash.scm 307 */
return 
BGl_weakzd2hashtablezd2ze3listze3zz__weakhashz00(BgL_tablez00_60);}  else 
{ /* Llib/hash.scm 307 */
return 
BGl_plainzd2hashtablezd2ze3listze3zz__hashz00(BgL_tablez00_60);} } 

}



/* &hashtable->list */
obj_t BGl_z62hashtablezd2ze3listz53zz__hashz00(obj_t BgL_envz00_4477, obj_t BgL_tablez00_4478)
{
{ /* Llib/hash.scm 306 */
{ /* Llib/hash.scm 307 */
obj_t BgL_auxz00_6286;
if(
STRUCTP(BgL_tablez00_4478))
{ /* Llib/hash.scm 307 */
BgL_auxz00_6286 = BgL_tablez00_4478
; }  else 
{ 
obj_t BgL_auxz00_6289;
BgL_auxz00_6289 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)11429)), BGl_string3373z00zz__hashz00, BGl_string3362z00zz__hashz00, BgL_tablez00_4478); 
FAILURE(BgL_auxz00_6289,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2ze3listz31zz__hashz00(BgL_auxz00_6286);} } 

}



/* plain-hashtable->list */
obj_t BGl_plainzd2hashtablezd2ze3listze3zz__hashz00(obj_t BgL_tablez00_61)
{
{ /* Llib/hash.scm 314 */
{ /* Llib/hash.scm 315 */
obj_t BgL_vecz00_1611;
{ /* Llib/hash.scm 315 */
long BgL_arg1414z00_1632;
{ /* Llib/hash.scm 315 */
long BgL_res2247z00_2961;
{ /* Llib/hash.scm 274 */
bool_t BgL_test3808z00_6294;
{ /* Llib/hash.scm 274 */
obj_t BgL_tmpz00_6295;
{ /* Llib/hash.scm 274 */
obj_t BgL_res2246z00_2960;
{ /* Llib/hash.scm 274 */
obj_t BgL_aux2831z00_4677;
BgL_aux2831z00_4677 = 
STRUCT_KEY(BgL_tablez00_61); 
if(
SYMBOLP(BgL_aux2831z00_4677))
{ /* Llib/hash.scm 274 */
BgL_res2246z00_2960 = BgL_aux2831z00_4677; }  else 
{ 
obj_t BgL_auxz00_6299;
BgL_auxz00_6299 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)10075)), BGl_string3374z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2831z00_4677); 
FAILURE(BgL_auxz00_6299,BFALSE,BFALSE);} } 
BgL_tmpz00_6295 = BgL_res2246z00_2960; } 
BgL_test3808z00_6294 = 
(BgL_tmpz00_6295==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3808z00_6294)
{ /* Llib/hash.scm 274 */
obj_t BgL_tmpz00_6304;
{ /* Llib/hash.scm 274 */
obj_t BgL_aux2833z00_4679;
{ /* Llib/hash.scm 274 */
int BgL_tmpz00_6305;
BgL_tmpz00_6305 = 
(int)(((long)0)); 
BgL_aux2833z00_4679 = 
STRUCT_REF(BgL_tablez00_61, BgL_tmpz00_6305); } 
if(
INTEGERP(BgL_aux2833z00_4679))
{ /* Llib/hash.scm 274 */
BgL_tmpz00_6304 = BgL_aux2833z00_4679
; }  else 
{ 
obj_t BgL_auxz00_6310;
BgL_auxz00_6310 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)10075)), BGl_string3374z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_aux2833z00_4679); 
FAILURE(BgL_auxz00_6310,BFALSE,BFALSE);} } 
BgL_res2247z00_2961 = 
(long)CINT(BgL_tmpz00_6304); }  else 
{ /* Llib/hash.scm 274 */
obj_t BgL_tmpz00_6315;
{ /* Llib/hash.scm 274 */
obj_t BgL_aux2835z00_4681;
BgL_aux2835z00_4681 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_61); 
if(
INTEGERP(BgL_aux2835z00_4681))
{ /* Llib/hash.scm 274 */
BgL_tmpz00_6315 = BgL_aux2835z00_4681
; }  else 
{ 
obj_t BgL_auxz00_6319;
BgL_auxz00_6319 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)10075)), BGl_string3374z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_aux2835z00_4681); 
FAILURE(BgL_auxz00_6319,BFALSE,BFALSE);} } 
BgL_res2247z00_2961 = 
(long)CINT(BgL_tmpz00_6315); } } 
BgL_arg1414z00_1632 = BgL_res2247z00_2961; } 
BgL_vecz00_1611 = 
make_vector(BgL_arg1414z00_1632, BUNSPEC); } 
{ /* Llib/hash.scm 315 */
obj_t BgL_bucketsz00_1612;
{ /* Llib/hash.scm 316 */
bool_t BgL_test3812z00_6325;
{ /* Llib/hash.scm 316 */
obj_t BgL_tmpz00_6326;
{ /* Llib/hash.scm 316 */
obj_t BgL_res2249z00_2966;
{ /* Llib/hash.scm 316 */
obj_t BgL_aux2837z00_4684;
BgL_aux2837z00_4684 = 
STRUCT_KEY(BgL_tablez00_61); 
if(
SYMBOLP(BgL_aux2837z00_4684))
{ /* Llib/hash.scm 316 */
BgL_res2249z00_2966 = BgL_aux2837z00_4684; }  else 
{ 
obj_t BgL_auxz00_6330;
BgL_auxz00_6330 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)11866)), BGl_string3374z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2837z00_4684); 
FAILURE(BgL_auxz00_6330,BFALSE,BFALSE);} } 
BgL_tmpz00_6326 = BgL_res2249z00_2966; } 
BgL_test3812z00_6325 = 
(BgL_tmpz00_6326==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3812z00_6325)
{ /* Llib/hash.scm 316 */
int BgL_tmpz00_6335;
BgL_tmpz00_6335 = 
(int)(((long)2)); 
BgL_bucketsz00_1612 = 
STRUCT_REF(BgL_tablez00_61, BgL_tmpz00_6335); }  else 
{ /* Llib/hash.scm 316 */
BgL_bucketsz00_1612 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_61); } } 
{ /* Llib/hash.scm 316 */
long BgL_bucketszd2lenzd2_1613;
{ /* Llib/hash.scm 317 */
obj_t BgL_vectorz00_2967;
if(
VECTORP(BgL_bucketsz00_1612))
{ /* Llib/hash.scm 317 */
BgL_vectorz00_2967 = BgL_bucketsz00_1612; }  else 
{ 
obj_t BgL_auxz00_6341;
BgL_auxz00_6341 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)11925)), BGl_string3374z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1612); 
FAILURE(BgL_auxz00_6341,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1613 = 
VECTOR_LENGTH(BgL_vectorz00_2967); } 
{ /* Llib/hash.scm 317 */

{ 
long BgL_iz00_1616;obj_t BgL_resz00_1617;
BgL_iz00_1616 = ((long)0); 
BgL_resz00_1617 = BNIL; 
BgL_zc3z04anonymousza31406ze3z87_1618:
if(
(BgL_iz00_1616==BgL_bucketszd2lenzd2_1613))
{ /* Llib/hash.scm 320 */
return BgL_resz00_1617;}  else 
{ /* Llib/hash.scm 322 */
obj_t BgL_g1057z00_1620;
{ /* Llib/hash.scm 322 */
obj_t BgL_vectorz00_2971;
if(
VECTORP(BgL_bucketsz00_1612))
{ /* Llib/hash.scm 322 */
BgL_vectorz00_2971 = BgL_bucketsz00_1612; }  else 
{ 
obj_t BgL_auxz00_6350;
BgL_auxz00_6350 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)12049)), BGl_string3370z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1612); 
FAILURE(BgL_auxz00_6350,BFALSE,BFALSE);} 
BgL_g1057z00_1620 = 
VECTOR_REF(BgL_vectorz00_2971,BgL_iz00_1616); } 
{ 
obj_t BgL_bucketz00_1622;obj_t BgL_resz00_1623;
BgL_bucketz00_1622 = BgL_g1057z00_1620; 
BgL_resz00_1623 = BgL_resz00_1617; 
BgL_zc3z04anonymousza31408ze3z87_1624:
if(
NULLP(BgL_bucketz00_1622))
{ 
obj_t BgL_resz00_6359;long BgL_iz00_6357;
BgL_iz00_6357 = 
(BgL_iz00_1616+((long)1)); 
BgL_resz00_6359 = BgL_resz00_1623; 
BgL_resz00_1617 = BgL_resz00_6359; 
BgL_iz00_1616 = BgL_iz00_6357; 
goto BgL_zc3z04anonymousza31406ze3z87_1618;}  else 
{ /* Llib/hash.scm 326 */
obj_t BgL_arg1411z00_1627;obj_t BgL_arg1412z00_1628;
{ /* Llib/hash.scm 326 */
obj_t BgL_pairz00_2976;
if(
PAIRP(BgL_bucketz00_1622))
{ /* Llib/hash.scm 326 */
BgL_pairz00_2976 = BgL_bucketz00_1622; }  else 
{ 
obj_t BgL_auxz00_6362;
BgL_auxz00_6362 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)12140)), BGl_string3371z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_bucketz00_1622); 
FAILURE(BgL_auxz00_6362,BFALSE,BFALSE);} 
BgL_arg1411z00_1627 = 
CDR(BgL_pairz00_2976); } 
{ /* Llib/hash.scm 326 */
obj_t BgL_arg1413z00_1629;
{ /* Llib/hash.scm 326 */
obj_t BgL_pairz00_2977;
if(
PAIRP(BgL_bucketz00_1622))
{ /* Llib/hash.scm 326 */
BgL_pairz00_2977 = BgL_bucketz00_1622; }  else 
{ 
obj_t BgL_auxz00_6369;
BgL_auxz00_6369 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)12160)), BGl_string3371z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_bucketz00_1622); 
FAILURE(BgL_auxz00_6369,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 326 */
obj_t BgL_pairz00_2980;
{ /* Llib/hash.scm 326 */
obj_t BgL_aux2847z00_4694;
BgL_aux2847z00_4694 = 
CAR(BgL_pairz00_2977); 
if(
PAIRP(BgL_aux2847z00_4694))
{ /* Llib/hash.scm 326 */
BgL_pairz00_2980 = BgL_aux2847z00_4694; }  else 
{ 
obj_t BgL_auxz00_6376;
BgL_auxz00_6376 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)12154)), BGl_string3371z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_aux2847z00_4694); 
FAILURE(BgL_auxz00_6376,BFALSE,BFALSE);} } 
BgL_arg1413z00_1629 = 
CDR(BgL_pairz00_2980); } } 
BgL_arg1412z00_1628 = 
MAKE_YOUNG_PAIR(BgL_arg1413z00_1629, BgL_resz00_1623); } 
{ 
obj_t BgL_resz00_6383;obj_t BgL_bucketz00_6382;
BgL_bucketz00_6382 = BgL_arg1411z00_1627; 
BgL_resz00_6383 = BgL_arg1412z00_1628; 
BgL_resz00_1623 = BgL_resz00_6383; 
BgL_bucketz00_1622 = BgL_bucketz00_6382; 
goto BgL_zc3z04anonymousza31408ze3z87_1624;} } } } } } } } } } 

}



/* hashtable-key-list */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2keyzd2listz00zz__hashz00(obj_t BgL_tablez00_62)
{
{ /* Llib/hash.scm 331 */
if(
BGl_hashtablezd2weakzf3z21zz__hashz00(BgL_tablez00_62))
{ /* Llib/hash.scm 332 */
return 
BGl_weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(BgL_tablez00_62);}  else 
{ /* Llib/hash.scm 332 */
return 
BGl_plainzd2hashtablezd2keyzd2listzd2zz__hashz00(BgL_tablez00_62);} } 

}



/* &hashtable-key-list */
obj_t BGl_z62hashtablezd2keyzd2listz62zz__hashz00(obj_t BgL_envz00_4479, obj_t BgL_tablez00_4480)
{
{ /* Llib/hash.scm 331 */
{ /* Llib/hash.scm 332 */
obj_t BgL_auxz00_6388;
if(
STRUCTP(BgL_tablez00_4480))
{ /* Llib/hash.scm 332 */
BgL_auxz00_6388 = BgL_tablez00_4480
; }  else 
{ 
obj_t BgL_auxz00_6391;
BgL_auxz00_6391 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)12449)), BGl_string3375z00zz__hashz00, BGl_string3362z00zz__hashz00, BgL_tablez00_4480); 
FAILURE(BgL_auxz00_6391,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2keyzd2listz00zz__hashz00(BgL_auxz00_6388);} } 

}



/* plain-hashtable-key-list */
obj_t BGl_plainzd2hashtablezd2keyzd2listzd2zz__hashz00(obj_t BgL_tablez00_63)
{
{ /* Llib/hash.scm 339 */
{ /* Llib/hash.scm 340 */
obj_t BgL_vecz00_1635;
{ /* Llib/hash.scm 340 */
long BgL_arg1426z00_1656;
{ /* Llib/hash.scm 340 */
long BgL_res2254z00_2987;
{ /* Llib/hash.scm 274 */
bool_t BgL_test3823z00_6396;
{ /* Llib/hash.scm 274 */
obj_t BgL_tmpz00_6397;
{ /* Llib/hash.scm 274 */
obj_t BgL_res2253z00_2986;
{ /* Llib/hash.scm 274 */
obj_t BgL_aux2851z00_4698;
BgL_aux2851z00_4698 = 
STRUCT_KEY(BgL_tablez00_63); 
if(
SYMBOLP(BgL_aux2851z00_4698))
{ /* Llib/hash.scm 274 */
BgL_res2253z00_2986 = BgL_aux2851z00_4698; }  else 
{ 
obj_t BgL_auxz00_6401;
BgL_auxz00_6401 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)10075)), BGl_string3376z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2851z00_4698); 
FAILURE(BgL_auxz00_6401,BFALSE,BFALSE);} } 
BgL_tmpz00_6397 = BgL_res2253z00_2986; } 
BgL_test3823z00_6396 = 
(BgL_tmpz00_6397==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3823z00_6396)
{ /* Llib/hash.scm 274 */
obj_t BgL_tmpz00_6406;
{ /* Llib/hash.scm 274 */
obj_t BgL_aux2853z00_4700;
{ /* Llib/hash.scm 274 */
int BgL_tmpz00_6407;
BgL_tmpz00_6407 = 
(int)(((long)0)); 
BgL_aux2853z00_4700 = 
STRUCT_REF(BgL_tablez00_63, BgL_tmpz00_6407); } 
if(
INTEGERP(BgL_aux2853z00_4700))
{ /* Llib/hash.scm 274 */
BgL_tmpz00_6406 = BgL_aux2853z00_4700
; }  else 
{ 
obj_t BgL_auxz00_6412;
BgL_auxz00_6412 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)10075)), BGl_string3376z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_aux2853z00_4700); 
FAILURE(BgL_auxz00_6412,BFALSE,BFALSE);} } 
BgL_res2254z00_2987 = 
(long)CINT(BgL_tmpz00_6406); }  else 
{ /* Llib/hash.scm 274 */
obj_t BgL_tmpz00_6417;
{ /* Llib/hash.scm 274 */
obj_t BgL_aux2855z00_4702;
BgL_aux2855z00_4702 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_63); 
if(
INTEGERP(BgL_aux2855z00_4702))
{ /* Llib/hash.scm 274 */
BgL_tmpz00_6417 = BgL_aux2855z00_4702
; }  else 
{ 
obj_t BgL_auxz00_6421;
BgL_auxz00_6421 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)10075)), BGl_string3376z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_aux2855z00_4702); 
FAILURE(BgL_auxz00_6421,BFALSE,BFALSE);} } 
BgL_res2254z00_2987 = 
(long)CINT(BgL_tmpz00_6417); } } 
BgL_arg1426z00_1656 = BgL_res2254z00_2987; } 
BgL_vecz00_1635 = 
make_vector(BgL_arg1426z00_1656, BUNSPEC); } 
{ /* Llib/hash.scm 340 */
obj_t BgL_bucketsz00_1636;
{ /* Llib/hash.scm 341 */
bool_t BgL_test3827z00_6427;
{ /* Llib/hash.scm 341 */
obj_t BgL_tmpz00_6428;
{ /* Llib/hash.scm 341 */
obj_t BgL_res2256z00_2992;
{ /* Llib/hash.scm 341 */
obj_t BgL_aux2857z00_4705;
BgL_aux2857z00_4705 = 
STRUCT_KEY(BgL_tablez00_63); 
if(
SYMBOLP(BgL_aux2857z00_4705))
{ /* Llib/hash.scm 341 */
BgL_res2256z00_2992 = BgL_aux2857z00_4705; }  else 
{ 
obj_t BgL_auxz00_6432;
BgL_auxz00_6432 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)12895)), BGl_string3376z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2857z00_4705); 
FAILURE(BgL_auxz00_6432,BFALSE,BFALSE);} } 
BgL_tmpz00_6428 = BgL_res2256z00_2992; } 
BgL_test3827z00_6427 = 
(BgL_tmpz00_6428==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3827z00_6427)
{ /* Llib/hash.scm 341 */
int BgL_tmpz00_6437;
BgL_tmpz00_6437 = 
(int)(((long)2)); 
BgL_bucketsz00_1636 = 
STRUCT_REF(BgL_tablez00_63, BgL_tmpz00_6437); }  else 
{ /* Llib/hash.scm 341 */
BgL_bucketsz00_1636 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_63); } } 
{ /* Llib/hash.scm 341 */
long BgL_bucketszd2lenzd2_1637;
{ /* Llib/hash.scm 342 */
obj_t BgL_vectorz00_2993;
if(
VECTORP(BgL_bucketsz00_1636))
{ /* Llib/hash.scm 342 */
BgL_vectorz00_2993 = BgL_bucketsz00_1636; }  else 
{ 
obj_t BgL_auxz00_6443;
BgL_auxz00_6443 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)12954)), BGl_string3376z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1636); 
FAILURE(BgL_auxz00_6443,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1637 = 
VECTOR_LENGTH(BgL_vectorz00_2993); } 
{ /* Llib/hash.scm 342 */

{ 
long BgL_iz00_1640;obj_t BgL_resz00_1641;
BgL_iz00_1640 = ((long)0); 
BgL_resz00_1641 = BNIL; 
BgL_zc3z04anonymousza31417ze3z87_1642:
if(
(BgL_iz00_1640==BgL_bucketszd2lenzd2_1637))
{ /* Llib/hash.scm 345 */
return BgL_resz00_1641;}  else 
{ /* Llib/hash.scm 347 */
obj_t BgL_g1059z00_1644;
{ /* Llib/hash.scm 347 */
obj_t BgL_vectorz00_2997;
if(
VECTORP(BgL_bucketsz00_1636))
{ /* Llib/hash.scm 347 */
BgL_vectorz00_2997 = BgL_bucketsz00_1636; }  else 
{ 
obj_t BgL_auxz00_6452;
BgL_auxz00_6452 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)13078)), BGl_string3370z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1636); 
FAILURE(BgL_auxz00_6452,BFALSE,BFALSE);} 
BgL_g1059z00_1644 = 
VECTOR_REF(BgL_vectorz00_2997,BgL_iz00_1640); } 
{ 
obj_t BgL_bucketz00_1646;obj_t BgL_resz00_1647;
BgL_bucketz00_1646 = BgL_g1059z00_1644; 
BgL_resz00_1647 = BgL_resz00_1641; 
BgL_zc3z04anonymousza31419ze3z87_1648:
if(
NULLP(BgL_bucketz00_1646))
{ 
obj_t BgL_resz00_6461;long BgL_iz00_6459;
BgL_iz00_6459 = 
(BgL_iz00_1640+((long)1)); 
BgL_resz00_6461 = BgL_resz00_1647; 
BgL_resz00_1641 = BgL_resz00_6461; 
BgL_iz00_1640 = BgL_iz00_6459; 
goto BgL_zc3z04anonymousza31417ze3z87_1642;}  else 
{ /* Llib/hash.scm 351 */
obj_t BgL_arg1422z00_1651;obj_t BgL_arg1424z00_1652;
{ /* Llib/hash.scm 351 */
obj_t BgL_pairz00_3002;
if(
PAIRP(BgL_bucketz00_1646))
{ /* Llib/hash.scm 351 */
BgL_pairz00_3002 = BgL_bucketz00_1646; }  else 
{ 
obj_t BgL_auxz00_6464;
BgL_auxz00_6464 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)13169)), BGl_string3371z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_bucketz00_1646); 
FAILURE(BgL_auxz00_6464,BFALSE,BFALSE);} 
BgL_arg1422z00_1651 = 
CDR(BgL_pairz00_3002); } 
{ /* Llib/hash.scm 351 */
obj_t BgL_arg1425z00_1653;
{ /* Llib/hash.scm 351 */
obj_t BgL_pairz00_3003;
if(
PAIRP(BgL_bucketz00_1646))
{ /* Llib/hash.scm 351 */
BgL_pairz00_3003 = BgL_bucketz00_1646; }  else 
{ 
obj_t BgL_auxz00_6471;
BgL_auxz00_6471 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)13189)), BGl_string3371z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_bucketz00_1646); 
FAILURE(BgL_auxz00_6471,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 351 */
obj_t BgL_pairz00_3006;
{ /* Llib/hash.scm 351 */
obj_t BgL_aux2867z00_4715;
BgL_aux2867z00_4715 = 
CAR(BgL_pairz00_3003); 
if(
PAIRP(BgL_aux2867z00_4715))
{ /* Llib/hash.scm 351 */
BgL_pairz00_3006 = BgL_aux2867z00_4715; }  else 
{ 
obj_t BgL_auxz00_6478;
BgL_auxz00_6478 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)13183)), BGl_string3371z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_aux2867z00_4715); 
FAILURE(BgL_auxz00_6478,BFALSE,BFALSE);} } 
BgL_arg1425z00_1653 = 
CAR(BgL_pairz00_3006); } } 
BgL_arg1424z00_1652 = 
MAKE_YOUNG_PAIR(BgL_arg1425z00_1653, BgL_resz00_1647); } 
{ 
obj_t BgL_resz00_6485;obj_t BgL_bucketz00_6484;
BgL_bucketz00_6484 = BgL_arg1422z00_1651; 
BgL_resz00_6485 = BgL_arg1424z00_1652; 
BgL_resz00_1647 = BgL_resz00_6485; 
BgL_bucketz00_1646 = BgL_bucketz00_6484; 
goto BgL_zc3z04anonymousza31419ze3z87_1648;} } } } } } } } } } 

}



/* hashtable-map */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2mapzd2zz__hashz00(obj_t BgL_tablez00_64, obj_t BgL_funz00_65)
{
{ /* Llib/hash.scm 356 */
if(
BGl_hashtablezd2weakzf3z21zz__hashz00(BgL_tablez00_64))
{ /* Llib/hash.scm 357 */
return 
BGl_weakzd2hashtablezd2mapz00zz__weakhashz00(BgL_tablez00_64, BgL_funz00_65);}  else 
{ /* Llib/hash.scm 357 */
return 
BGl_plainzd2hashtablezd2mapz00zz__hashz00(BgL_tablez00_64, BgL_funz00_65);} } 

}



/* &hashtable-map */
obj_t BGl_z62hashtablezd2mapzb0zz__hashz00(obj_t BgL_envz00_4481, obj_t BgL_tablez00_4482, obj_t BgL_funz00_4483)
{
{ /* Llib/hash.scm 356 */
{ /* Llib/hash.scm 357 */
obj_t BgL_auxz00_6497;obj_t BgL_auxz00_6490;
if(
PROCEDUREP(BgL_funz00_4483))
{ /* Llib/hash.scm 357 */
BgL_auxz00_6497 = BgL_funz00_4483
; }  else 
{ 
obj_t BgL_auxz00_6500;
BgL_auxz00_6500 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)13488)), BGl_string3377z00zz__hashz00, BGl_string3378z00zz__hashz00, BgL_funz00_4483); 
FAILURE(BgL_auxz00_6500,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_tablez00_4482))
{ /* Llib/hash.scm 357 */
BgL_auxz00_6490 = BgL_tablez00_4482
; }  else 
{ 
obj_t BgL_auxz00_6493;
BgL_auxz00_6493 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)13488)), BGl_string3377z00zz__hashz00, BGl_string3362z00zz__hashz00, BgL_tablez00_4482); 
FAILURE(BgL_auxz00_6493,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2mapzd2zz__hashz00(BgL_auxz00_6490, BgL_auxz00_6497);} } 

}



/* plain-hashtable-map */
obj_t BGl_plainzd2hashtablezd2mapz00zz__hashz00(obj_t BgL_tablez00_66, obj_t BgL_funz00_67)
{
{ /* Llib/hash.scm 364 */
{ /* Llib/hash.scm 365 */
obj_t BgL_bucketsz00_1659;
{ /* Llib/hash.scm 365 */
bool_t BgL_test3839z00_6505;
{ /* Llib/hash.scm 365 */
obj_t BgL_tmpz00_6506;
{ /* Llib/hash.scm 365 */
obj_t BgL_res2260z00_3011;
{ /* Llib/hash.scm 365 */
obj_t BgL_aux2873z00_4721;
BgL_aux2873z00_4721 = 
STRUCT_KEY(BgL_tablez00_66); 
if(
SYMBOLP(BgL_aux2873z00_4721))
{ /* Llib/hash.scm 365 */
BgL_res2260z00_3011 = BgL_aux2873z00_4721; }  else 
{ 
obj_t BgL_auxz00_6510;
BgL_auxz00_6510 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)13896)), BGl_string3379z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2873z00_4721); 
FAILURE(BgL_auxz00_6510,BFALSE,BFALSE);} } 
BgL_tmpz00_6506 = BgL_res2260z00_3011; } 
BgL_test3839z00_6505 = 
(BgL_tmpz00_6506==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3839z00_6505)
{ /* Llib/hash.scm 365 */
int BgL_tmpz00_6515;
BgL_tmpz00_6515 = 
(int)(((long)2)); 
BgL_bucketsz00_1659 = 
STRUCT_REF(BgL_tablez00_66, BgL_tmpz00_6515); }  else 
{ /* Llib/hash.scm 365 */
BgL_bucketsz00_1659 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_66); } } 
{ /* Llib/hash.scm 365 */
long BgL_bucketszd2lenzd2_1660;
{ /* Llib/hash.scm 366 */
obj_t BgL_vectorz00_3012;
if(
VECTORP(BgL_bucketsz00_1659))
{ /* Llib/hash.scm 366 */
BgL_vectorz00_3012 = BgL_bucketsz00_1659; }  else 
{ 
obj_t BgL_auxz00_6521;
BgL_auxz00_6521 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)13955)), BGl_string3379z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1659); 
FAILURE(BgL_auxz00_6521,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1660 = 
VECTOR_LENGTH(BgL_vectorz00_3012); } 
{ /* Llib/hash.scm 366 */

{ 
long BgL_iz00_1663;obj_t BgL_resz00_1664;
BgL_iz00_1663 = ((long)0); 
BgL_resz00_1664 = BNIL; 
BgL_zc3z04anonymousza31429ze3z87_1665:
if(
(BgL_iz00_1663<BgL_bucketszd2lenzd2_1660))
{ /* Llib/hash.scm 370 */
obj_t BgL_g1061z00_1667;
{ /* Llib/hash.scm 370 */
obj_t BgL_vectorz00_3016;
if(
VECTORP(BgL_bucketsz00_1659))
{ /* Llib/hash.scm 370 */
BgL_vectorz00_3016 = BgL_bucketsz00_1659; }  else 
{ 
obj_t BgL_auxz00_6530;
BgL_auxz00_6530 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)14066)), BGl_string3370z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1659); 
FAILURE(BgL_auxz00_6530,BFALSE,BFALSE);} 
BgL_g1061z00_1667 = 
VECTOR_REF(BgL_vectorz00_3016,BgL_iz00_1663); } 
{ 
obj_t BgL_lstz00_1669;obj_t BgL_resz00_1670;
BgL_lstz00_1669 = BgL_g1061z00_1667; 
BgL_resz00_1670 = BgL_resz00_1664; 
BgL_zc3z04anonymousza31431ze3z87_1671:
if(
NULLP(BgL_lstz00_1669))
{ 
obj_t BgL_resz00_6539;long BgL_iz00_6537;
BgL_iz00_6537 = 
(BgL_iz00_1663+((long)1)); 
BgL_resz00_6539 = BgL_resz00_1670; 
BgL_resz00_1664 = BgL_resz00_6539; 
BgL_iz00_1663 = BgL_iz00_6537; 
goto BgL_zc3z04anonymousza31429ze3z87_1665;}  else 
{ /* Llib/hash.scm 374 */
obj_t BgL_cellz00_1674;
{ /* Llib/hash.scm 374 */
obj_t BgL_pairz00_3021;
if(
PAIRP(BgL_lstz00_1669))
{ /* Llib/hash.scm 374 */
BgL_pairz00_3021 = BgL_lstz00_1669; }  else 
{ 
obj_t BgL_auxz00_6542;
BgL_auxz00_6542 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)14160)), BGl_string3371z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_lstz00_1669); 
FAILURE(BgL_auxz00_6542,BFALSE,BFALSE);} 
BgL_cellz00_1674 = 
CAR(BgL_pairz00_3021); } 
{ /* Llib/hash.scm 375 */
obj_t BgL_arg1434z00_1675;obj_t BgL_arg1435z00_1676;
{ /* Llib/hash.scm 375 */
obj_t BgL_pairz00_3022;
if(
PAIRP(BgL_lstz00_1669))
{ /* Llib/hash.scm 375 */
BgL_pairz00_3022 = BgL_lstz00_1669; }  else 
{ 
obj_t BgL_auxz00_6549;
BgL_auxz00_6549 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)14187)), BGl_string3371z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_lstz00_1669); 
FAILURE(BgL_auxz00_6549,BFALSE,BFALSE);} 
BgL_arg1434z00_1675 = 
CDR(BgL_pairz00_3022); } 
{ /* Llib/hash.scm 376 */
obj_t BgL_arg1436z00_1677;
{ /* Llib/hash.scm 376 */
obj_t BgL_arg1437z00_1678;obj_t BgL_arg1438z00_1679;
{ /* Llib/hash.scm 376 */
obj_t BgL_pairz00_3023;
if(
PAIRP(BgL_cellz00_1674))
{ /* Llib/hash.scm 376 */
BgL_pairz00_3023 = BgL_cellz00_1674; }  else 
{ 
obj_t BgL_auxz00_6556;
BgL_auxz00_6556 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)14216)), BGl_string3371z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_cellz00_1674); 
FAILURE(BgL_auxz00_6556,BFALSE,BFALSE);} 
BgL_arg1437z00_1678 = 
CAR(BgL_pairz00_3023); } 
{ /* Llib/hash.scm 376 */
obj_t BgL_pairz00_3024;
if(
PAIRP(BgL_cellz00_1674))
{ /* Llib/hash.scm 376 */
BgL_pairz00_3024 = BgL_cellz00_1674; }  else 
{ 
obj_t BgL_auxz00_6563;
BgL_auxz00_6563 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)14227)), BGl_string3371z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_cellz00_1674); 
FAILURE(BgL_auxz00_6563,BFALSE,BFALSE);} 
BgL_arg1438z00_1679 = 
CDR(BgL_pairz00_3024); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_67, ((long)2)))
{ /* Llib/hash.scm 376 */
BgL_arg1436z00_1677 = 
PROCEDURE_ENTRY(BgL_funz00_67)(BgL_funz00_67, BgL_arg1437z00_1678, BgL_arg1438z00_1679, BEOA); }  else 
{ /* Llib/hash.scm 376 */
FAILURE(BGl_string3380z00zz__hashz00,BGl_list3381z00zz__hashz00,BgL_funz00_67);} } 
BgL_arg1435z00_1676 = 
MAKE_YOUNG_PAIR(BgL_arg1436z00_1677, BgL_resz00_1670); } 
{ 
obj_t BgL_resz00_6578;obj_t BgL_lstz00_6577;
BgL_lstz00_6577 = BgL_arg1434z00_1675; 
BgL_resz00_6578 = BgL_arg1435z00_1676; 
BgL_resz00_1670 = BgL_resz00_6578; 
BgL_lstz00_1669 = BgL_lstz00_6577; 
goto BgL_zc3z04anonymousza31431ze3z87_1671;} } } } }  else 
{ /* Llib/hash.scm 369 */
return BgL_resz00_1664;} } } } } } 

}



/* hashtable-for-each */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2forzd2eachz00zz__hashz00(obj_t BgL_tablez00_68, obj_t BgL_funz00_69)
{
{ /* Llib/hash.scm 382 */
if(
BGl_hashtablezd2weakzf3z21zz__hashz00(BgL_tablez00_68))
{ /* Llib/hash.scm 383 */
return 
BGl_weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(BgL_tablez00_68, BgL_funz00_69);}  else 
{ /* Llib/hash.scm 383 */
return 
BBOOL(
BGl_plainzd2hashtablezd2forzd2eachzd2zz__hashz00(BgL_tablez00_68, BgL_funz00_69));} } 

}



/* &hashtable-for-each */
obj_t BGl_z62hashtablezd2forzd2eachz62zz__hashz00(obj_t BgL_envz00_4484, obj_t BgL_tablez00_4485, obj_t BgL_funz00_4486)
{
{ /* Llib/hash.scm 382 */
{ /* Llib/hash.scm 383 */
obj_t BgL_auxz00_6591;obj_t BgL_auxz00_6584;
if(
PROCEDUREP(BgL_funz00_4486))
{ /* Llib/hash.scm 383 */
BgL_auxz00_6591 = BgL_funz00_4486
; }  else 
{ 
obj_t BgL_auxz00_6594;
BgL_auxz00_6594 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)14541)), BGl_string3390z00zz__hashz00, BGl_string3378z00zz__hashz00, BgL_funz00_4486); 
FAILURE(BgL_auxz00_6594,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_tablez00_4485))
{ /* Llib/hash.scm 383 */
BgL_auxz00_6584 = BgL_tablez00_4485
; }  else 
{ 
obj_t BgL_auxz00_6587;
BgL_auxz00_6587 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)14541)), BGl_string3390z00zz__hashz00, BGl_string3362z00zz__hashz00, BgL_tablez00_4485); 
FAILURE(BgL_auxz00_6587,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2forzd2eachz00zz__hashz00(BgL_auxz00_6584, BgL_auxz00_6591);} } 

}



/* plain-hashtable-for-each */
bool_t BGl_plainzd2hashtablezd2forzd2eachzd2zz__hashz00(obj_t BgL_tablez00_70, obj_t BgL_funz00_71)
{
{ /* Llib/hash.scm 390 */
{ /* Llib/hash.scm 391 */
obj_t BgL_bucketsz00_1683;
{ /* Llib/hash.scm 391 */
bool_t BgL_test3853z00_6599;
{ /* Llib/hash.scm 391 */
obj_t BgL_tmpz00_6600;
{ /* Llib/hash.scm 391 */
obj_t BgL_res2264z00_3029;
{ /* Llib/hash.scm 391 */
obj_t BgL_aux2893z00_4742;
BgL_aux2893z00_4742 = 
STRUCT_KEY(BgL_tablez00_70); 
if(
SYMBOLP(BgL_aux2893z00_4742))
{ /* Llib/hash.scm 391 */
BgL_res2264z00_3029 = BgL_aux2893z00_4742; }  else 
{ 
obj_t BgL_auxz00_6604;
BgL_auxz00_6604 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)14964)), BGl_string3391z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2893z00_4742); 
FAILURE(BgL_auxz00_6604,BFALSE,BFALSE);} } 
BgL_tmpz00_6600 = BgL_res2264z00_3029; } 
BgL_test3853z00_6599 = 
(BgL_tmpz00_6600==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3853z00_6599)
{ /* Llib/hash.scm 391 */
int BgL_tmpz00_6609;
BgL_tmpz00_6609 = 
(int)(((long)2)); 
BgL_bucketsz00_1683 = 
STRUCT_REF(BgL_tablez00_70, BgL_tmpz00_6609); }  else 
{ /* Llib/hash.scm 391 */
BgL_bucketsz00_1683 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_70); } } 
{ /* Llib/hash.scm 391 */
long BgL_bucketszd2lenzd2_1684;
{ /* Llib/hash.scm 392 */
obj_t BgL_vectorz00_3030;
if(
VECTORP(BgL_bucketsz00_1683))
{ /* Llib/hash.scm 392 */
BgL_vectorz00_3030 = BgL_bucketsz00_1683; }  else 
{ 
obj_t BgL_auxz00_6615;
BgL_auxz00_6615 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)15023)), BGl_string3391z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1683); 
FAILURE(BgL_auxz00_6615,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1684 = 
VECTOR_LENGTH(BgL_vectorz00_3030); } 
{ /* Llib/hash.scm 392 */

{ 
long BgL_iz00_1686;
BgL_iz00_1686 = ((long)0); 
BgL_zc3z04anonymousza31440ze3z87_1687:
if(
(BgL_iz00_1686<BgL_bucketszd2lenzd2_1684))
{ /* Llib/hash.scm 394 */
{ /* Llib/hash.scm 396 */
obj_t BgL_g1115z00_1689;
{ /* Llib/hash.scm 398 */
obj_t BgL_vectorz00_3034;
if(
VECTORP(BgL_bucketsz00_1683))
{ /* Llib/hash.scm 398 */
BgL_vectorz00_3034 = BgL_bucketsz00_1683; }  else 
{ 
obj_t BgL_auxz00_6624;
BgL_auxz00_6624 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)15181)), BGl_string3370z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1683); 
FAILURE(BgL_auxz00_6624,BFALSE,BFALSE);} 
BgL_g1115z00_1689 = 
VECTOR_REF(BgL_vectorz00_3034,BgL_iz00_1686); } 
{ 
obj_t BgL_l1113z00_1691;
BgL_l1113z00_1691 = BgL_g1115z00_1689; 
BgL_zc3z04anonymousza31442ze3z87_1692:
if(
PAIRP(BgL_l1113z00_1691))
{ /* Llib/hash.scm 398 */
{ /* Llib/hash.scm 397 */
obj_t BgL_cellz00_1694;
BgL_cellz00_1694 = 
CAR(BgL_l1113z00_1691); 
{ /* Llib/hash.scm 397 */
obj_t BgL_arg1444z00_1695;obj_t BgL_arg1445z00_1696;
{ /* Llib/hash.scm 397 */
obj_t BgL_pairz00_3038;
if(
PAIRP(BgL_cellz00_1694))
{ /* Llib/hash.scm 397 */
BgL_pairz00_3038 = BgL_cellz00_1694; }  else 
{ 
obj_t BgL_auxz00_6634;
BgL_auxz00_6634 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)15142)), BGl_string3392z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_cellz00_1694); 
FAILURE(BgL_auxz00_6634,BFALSE,BFALSE);} 
BgL_arg1444z00_1695 = 
CAR(BgL_pairz00_3038); } 
{ /* Llib/hash.scm 397 */
obj_t BgL_pairz00_3039;
if(
PAIRP(BgL_cellz00_1694))
{ /* Llib/hash.scm 397 */
BgL_pairz00_3039 = BgL_cellz00_1694; }  else 
{ 
obj_t BgL_auxz00_6641;
BgL_auxz00_6641 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)15153)), BGl_string3392z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_cellz00_1694); 
FAILURE(BgL_auxz00_6641,BFALSE,BFALSE);} 
BgL_arg1445z00_1696 = 
CDR(BgL_pairz00_3039); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_71, ((long)2)))
{ /* Llib/hash.scm 397 */
PROCEDURE_ENTRY(BgL_funz00_71)(BgL_funz00_71, BgL_arg1444z00_1695, BgL_arg1445z00_1696, BEOA); }  else 
{ /* Llib/hash.scm 397 */
FAILURE(BGl_string3393z00zz__hashz00,BGl_list3394z00zz__hashz00,BgL_funz00_71);} } } 
{ 
obj_t BgL_l1113z00_6654;
BgL_l1113z00_6654 = 
CDR(BgL_l1113z00_1691); 
BgL_l1113z00_1691 = BgL_l1113z00_6654; 
goto BgL_zc3z04anonymousza31442ze3z87_1692;} }  else 
{ /* Llib/hash.scm 398 */
if(
NULLP(BgL_l1113z00_1691))
{ /* Llib/hash.scm 398 */BTRUE; }  else 
{ /* Llib/hash.scm 398 */
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string3399z00zz__hashz00, BGl_string3400z00zz__hashz00, BgL_l1113z00_1691, BGl_string3314z00zz__hashz00, 
BINT(((long)15099))); } } } } 
{ 
long BgL_iz00_6660;
BgL_iz00_6660 = 
(BgL_iz00_1686+((long)1)); 
BgL_iz00_1686 = BgL_iz00_6660; 
goto BgL_zc3z04anonymousza31440ze3z87_1687;} }  else 
{ /* Llib/hash.scm 394 */
return ((bool_t)0);} } } } } } 

}



/* hashtable-filter! */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2filterz12zc0zz__hashz00(obj_t BgL_tablez00_72, obj_t BgL_funz00_73)
{
{ /* Llib/hash.scm 404 */
if(
BGl_hashtablezd2weakzf3z21zz__hashz00(BgL_tablez00_72))
{ /* Llib/hash.scm 405 */
return 
BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00(BgL_tablez00_72, BgL_funz00_73);}  else 
{ /* Llib/hash.scm 405 */
return 
BGl_plainzd2hashtablezd2filterz12z12zz__hashz00(BgL_tablez00_72, BgL_funz00_73);} } 

}



/* &hashtable-filter! */
obj_t BGl_z62hashtablezd2filterz12za2zz__hashz00(obj_t BgL_envz00_4487, obj_t BgL_tablez00_4488, obj_t BgL_funz00_4489)
{
{ /* Llib/hash.scm 404 */
{ /* Llib/hash.scm 405 */
obj_t BgL_auxz00_6673;obj_t BgL_auxz00_6666;
if(
PROCEDUREP(BgL_funz00_4489))
{ /* Llib/hash.scm 405 */
BgL_auxz00_6673 = BgL_funz00_4489
; }  else 
{ 
obj_t BgL_auxz00_6676;
BgL_auxz00_6676 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)15500)), BGl_string3401z00zz__hashz00, BGl_string3378z00zz__hashz00, BgL_funz00_4489); 
FAILURE(BgL_auxz00_6676,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_tablez00_4488))
{ /* Llib/hash.scm 405 */
BgL_auxz00_6666 = BgL_tablez00_4488
; }  else 
{ 
obj_t BgL_auxz00_6669;
BgL_auxz00_6669 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)15500)), BGl_string3401z00zz__hashz00, BGl_string3362z00zz__hashz00, BgL_tablez00_4488); 
FAILURE(BgL_auxz00_6669,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2filterz12zc0zz__hashz00(BgL_auxz00_6666, BgL_auxz00_6673);} } 

}



/* plain-hashtable-filter! */
obj_t BGl_plainzd2hashtablezd2filterz12z12zz__hashz00(obj_t BgL_tablez00_74, obj_t BgL_funz00_75)
{
{ /* Llib/hash.scm 412 */
{ /* Llib/hash.scm 413 */
obj_t BgL_bucketsz00_1703;
{ /* Llib/hash.scm 413 */
bool_t BgL_test3866z00_6681;
{ /* Llib/hash.scm 413 */
obj_t BgL_tmpz00_6682;
{ /* Llib/hash.scm 413 */
obj_t BgL_res2269z00_3048;
{ /* Llib/hash.scm 413 */
obj_t BgL_aux2909z00_4759;
BgL_aux2909z00_4759 = 
STRUCT_KEY(BgL_tablez00_74); 
if(
SYMBOLP(BgL_aux2909z00_4759))
{ /* Llib/hash.scm 413 */
BgL_res2269z00_3048 = BgL_aux2909z00_4759; }  else 
{ 
obj_t BgL_auxz00_6686;
BgL_auxz00_6686 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)15920)), BGl_string3402z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2909z00_4759); 
FAILURE(BgL_auxz00_6686,BFALSE,BFALSE);} } 
BgL_tmpz00_6682 = BgL_res2269z00_3048; } 
BgL_test3866z00_6681 = 
(BgL_tmpz00_6682==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3866z00_6681)
{ /* Llib/hash.scm 413 */
int BgL_tmpz00_6691;
BgL_tmpz00_6691 = 
(int)(((long)2)); 
BgL_bucketsz00_1703 = 
STRUCT_REF(BgL_tablez00_74, BgL_tmpz00_6691); }  else 
{ /* Llib/hash.scm 413 */
BgL_bucketsz00_1703 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_74); } } 
{ /* Llib/hash.scm 413 */
long BgL_bucketszd2lenzd2_1704;
{ /* Llib/hash.scm 414 */
obj_t BgL_vectorz00_3049;
if(
VECTORP(BgL_bucketsz00_1703))
{ /* Llib/hash.scm 414 */
BgL_vectorz00_3049 = BgL_bucketsz00_1703; }  else 
{ 
obj_t BgL_auxz00_6697;
BgL_auxz00_6697 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)15979)), BGl_string3402z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1703); 
FAILURE(BgL_auxz00_6697,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1704 = 
VECTOR_LENGTH(BgL_vectorz00_3049); } 
{ /* Llib/hash.scm 414 */

{ 
long BgL_iz00_1706;long BgL_deltaz00_1707;
BgL_iz00_1706 = ((long)0); 
BgL_deltaz00_1707 = ((long)0); 
BgL_zc3z04anonymousza31450ze3z87_1708:
if(
(BgL_iz00_1706<BgL_bucketszd2lenzd2_1704))
{ /* Llib/hash.scm 417 */
obj_t BgL_lz00_1710;
{ /* Llib/hash.scm 417 */
obj_t BgL_vectorz00_3053;
if(
VECTORP(BgL_bucketsz00_1703))
{ /* Llib/hash.scm 417 */
BgL_vectorz00_3053 = BgL_bucketsz00_1703; }  else 
{ 
obj_t BgL_auxz00_6706;
BgL_auxz00_6706 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)16081)), BGl_string3370z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1703); 
FAILURE(BgL_auxz00_6706,BFALSE,BFALSE);} 
BgL_lz00_1710 = 
VECTOR_REF(BgL_vectorz00_3053,BgL_iz00_1706); } 
{ /* Llib/hash.scm 417 */
long BgL_oldzd2lenzd2_1711;
{ /* Llib/hash.scm 418 */
obj_t BgL_auxz00_6711;
{ /* Llib/hash.scm 418 */
bool_t BgL_test3871z00_6712;
if(
PAIRP(BgL_lz00_1710))
{ /* Llib/hash.scm 418 */
BgL_test3871z00_6712 = ((bool_t)1)
; }  else 
{ /* Llib/hash.scm 418 */
BgL_test3871z00_6712 = 
NULLP(BgL_lz00_1710)
; } 
if(BgL_test3871z00_6712)
{ /* Llib/hash.scm 418 */
BgL_auxz00_6711 = BgL_lz00_1710
; }  else 
{ 
obj_t BgL_auxz00_6716;
BgL_auxz00_6716 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)16130)), BGl_string3370z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_lz00_1710); 
FAILURE(BgL_auxz00_6716,BFALSE,BFALSE);} } 
BgL_oldzd2lenzd2_1711 = 
bgl_list_length(BgL_auxz00_6711); } 
{ /* Llib/hash.scm 418 */
obj_t BgL_newlz00_1712;
{ /* Llib/hash.scm 420 */
obj_t BgL_zc3z04anonymousza31456ze3z87_4490;
BgL_zc3z04anonymousza31456ze3z87_4490 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31456ze3ze5zz__hashz00, 
(int)(((long)1)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31456ze3z87_4490, 
(int)(((long)0)), BgL_funz00_75); 
{ /* Llib/hash.scm 419 */
obj_t BgL_auxz00_6726;
{ /* Llib/hash.scm 421 */
bool_t BgL_test3873z00_6727;
if(
PAIRP(BgL_lz00_1710))
{ /* Llib/hash.scm 421 */
BgL_test3873z00_6727 = ((bool_t)1)
; }  else 
{ /* Llib/hash.scm 421 */
BgL_test3873z00_6727 = 
NULLP(BgL_lz00_1710)
; } 
if(BgL_test3873z00_6727)
{ /* Llib/hash.scm 421 */
BgL_auxz00_6726 = BgL_lz00_1710
; }  else 
{ 
obj_t BgL_auxz00_6731;
BgL_auxz00_6731 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)16231)), BGl_string3370z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_lz00_1710); 
FAILURE(BgL_auxz00_6731,BFALSE,BFALSE);} } 
BgL_newlz00_1712 = 
BGl_filterz12z12zz__r4_control_features_6_9z00(BgL_zc3z04anonymousza31456ze3z87_4490, BgL_auxz00_6726); } } 
{ /* Llib/hash.scm 419 */
long BgL_newzd2lenzd2_1713;
BgL_newzd2lenzd2_1713 = 
bgl_list_length(BgL_newlz00_1712); 
{ /* Llib/hash.scm 422 */

{ /* Llib/hash.scm 423 */
obj_t BgL_vectorz00_3059;
if(
VECTORP(BgL_bucketsz00_1703))
{ /* Llib/hash.scm 423 */
BgL_vectorz00_3059 = BgL_bucketsz00_1703; }  else 
{ 
obj_t BgL_auxz00_6739;
BgL_auxz00_6739 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)16298)), BGl_string3370z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1703); 
FAILURE(BgL_auxz00_6739,BFALSE,BFALSE);} 
VECTOR_SET(BgL_vectorz00_3059,BgL_iz00_1706,BgL_newlz00_1712); } 
{ 
long BgL_deltaz00_6746;long BgL_iz00_6744;
BgL_iz00_6744 = 
(BgL_iz00_1706+((long)1)); 
BgL_deltaz00_6746 = 
(BgL_deltaz00_1707+
(BgL_newzd2lenzd2_1713-BgL_oldzd2lenzd2_1711)); 
BgL_deltaz00_1707 = BgL_deltaz00_6746; 
BgL_iz00_1706 = BgL_iz00_6744; 
goto BgL_zc3z04anonymousza31450ze3z87_1708;} } } } } }  else 
{ /* Llib/hash.scm 426 */
long BgL_arg1459z00_1723;
{ /* Llib/hash.scm 426 */
obj_t BgL_arg1460z00_1724;
{ /* Llib/hash.scm 426 */
bool_t BgL_test3876z00_6749;
{ /* Llib/hash.scm 426 */
obj_t BgL_tmpz00_6750;
{ /* Llib/hash.scm 426 */
obj_t BgL_res2274z00_3072;
{ /* Llib/hash.scm 426 */
obj_t BgL_aux2921z00_4771;
BgL_aux2921z00_4771 = 
STRUCT_KEY(BgL_tablez00_74); 
if(
SYMBOLP(BgL_aux2921z00_4771))
{ /* Llib/hash.scm 426 */
BgL_res2274z00_3072 = BgL_aux2921z00_4771; }  else 
{ 
obj_t BgL_auxz00_6754;
BgL_auxz00_6754 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)16422)), BGl_string3370z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2921z00_4771); 
FAILURE(BgL_auxz00_6754,BFALSE,BFALSE);} } 
BgL_tmpz00_6750 = BgL_res2274z00_3072; } 
BgL_test3876z00_6749 = 
(BgL_tmpz00_6750==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3876z00_6749)
{ /* Llib/hash.scm 426 */
int BgL_tmpz00_6759;
BgL_tmpz00_6759 = 
(int)(((long)0)); 
BgL_arg1460z00_1724 = 
STRUCT_REF(BgL_tablez00_74, BgL_tmpz00_6759); }  else 
{ /* Llib/hash.scm 426 */
BgL_arg1460z00_1724 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_74); } } 
{ /* Llib/hash.scm 426 */
long BgL_za72za7_3074;
{ /* Llib/hash.scm 426 */
obj_t BgL_tmpz00_6763;
if(
INTEGERP(BgL_arg1460z00_1724))
{ /* Llib/hash.scm 426 */
BgL_tmpz00_6763 = BgL_arg1460z00_1724
; }  else 
{ 
obj_t BgL_auxz00_6766;
BgL_auxz00_6766 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)16444)), BGl_string3370z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1460z00_1724); 
FAILURE(BgL_auxz00_6766,BFALSE,BFALSE);} 
BgL_za72za7_3074 = 
(long)CINT(BgL_tmpz00_6763); } 
BgL_arg1459z00_1723 = 
(BgL_deltaz00_1707+BgL_za72za7_3074); } } 
{ /* Llib/hash.scm 425 */
bool_t BgL_test3879z00_6772;
{ /* Llib/hash.scm 425 */
obj_t BgL_tmpz00_6773;
{ /* Llib/hash.scm 425 */
obj_t BgL_res2276z00_3079;
{ /* Llib/hash.scm 425 */
obj_t BgL_aux2925z00_4775;
BgL_aux2925z00_4775 = 
STRUCT_KEY(BgL_tablez00_74); 
if(
SYMBOLP(BgL_aux2925z00_4775))
{ /* Llib/hash.scm 425 */
BgL_res2276z00_3079 = BgL_aux2925z00_4775; }  else 
{ 
obj_t BgL_auxz00_6777;
BgL_auxz00_6777 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)16381)), BGl_string3370z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2925z00_4775); 
FAILURE(BgL_auxz00_6777,BFALSE,BFALSE);} } 
BgL_tmpz00_6773 = BgL_res2276z00_3079; } 
BgL_test3879z00_6772 = 
(BgL_tmpz00_6773==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3879z00_6772)
{ /* Llib/hash.scm 425 */
obj_t BgL_auxz00_6784;int BgL_tmpz00_6782;
BgL_auxz00_6784 = 
BINT(BgL_arg1459z00_1723); 
BgL_tmpz00_6782 = 
(int)(((long)0)); 
return 
STRUCT_SET(BgL_tablez00_74, BgL_tmpz00_6782, BgL_auxz00_6784);}  else 
{ /* Llib/hash.scm 425 */
return 
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_74);} } } } } } } } 

}



/* &<@anonymous:1456> */
obj_t BGl_z62zc3z04anonymousza31456ze3ze5zz__hashz00(obj_t BgL_envz00_4491, obj_t BgL_cellz00_4493)
{
{ /* Llib/hash.scm 419 */
{ /* Llib/hash.scm 420 */
obj_t BgL_funz00_4492;
BgL_funz00_4492 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_4491, 
(int)(((long)0)))); 
{ /* Llib/hash.scm 420 */
obj_t BgL_arg1457z00_5189;obj_t BgL_arg1458z00_5190;
{ /* Llib/hash.scm 420 */
obj_t BgL_pairz00_5191;
if(
PAIRP(BgL_cellz00_4493))
{ /* Llib/hash.scm 420 */
BgL_pairz00_5191 = BgL_cellz00_4493; }  else 
{ 
obj_t BgL_auxz00_6793;
BgL_auxz00_6793 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)16204)), BGl_string3404z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_cellz00_4493); 
FAILURE(BgL_auxz00_6793,BFALSE,BFALSE);} 
BgL_arg1457z00_5189 = 
CAR(BgL_pairz00_5191); } 
{ /* Llib/hash.scm 420 */
obj_t BgL_pairz00_5192;
if(
PAIRP(BgL_cellz00_4493))
{ /* Llib/hash.scm 420 */
BgL_pairz00_5192 = BgL_cellz00_4493; }  else 
{ 
obj_t BgL_auxz00_6800;
BgL_auxz00_6800 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)16215)), BGl_string3404z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_cellz00_4493); 
FAILURE(BgL_auxz00_6800,BFALSE,BFALSE);} 
BgL_arg1458z00_5190 = 
CDR(BgL_pairz00_5192); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4492, ((long)2)))
{ /* Llib/hash.scm 420 */
return 
PROCEDURE_ENTRY(BgL_funz00_4492)(BgL_funz00_4492, BgL_arg1457z00_5189, BgL_arg1458z00_5190, BEOA);}  else 
{ /* Llib/hash.scm 420 */
FAILURE(BGl_string3405z00zz__hashz00,BGl_list3406z00zz__hashz00,BgL_funz00_4492);} } } } 

}



/* hashtable-clear! */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2clearz12zc0zz__hashz00(obj_t BgL_tablez00_76)
{
{ /* Llib/hash.scm 431 */
if(
BGl_hashtablezd2weakzf3z21zz__hashz00(BgL_tablez00_76))
{ /* Llib/hash.scm 432 */
return 
BGl_weakzd2hashtablezd2clearz12z12zz__weakhashz00(BgL_tablez00_76);}  else 
{ /* Llib/hash.scm 432 */
return 
BGl_plainzd2hashtablezd2clearz12z12zz__hashz00(BgL_tablez00_76);} } 

}



/* &hashtable-clear! */
obj_t BGl_z62hashtablezd2clearz12za2zz__hashz00(obj_t BgL_envz00_4494, obj_t BgL_tablez00_4495)
{
{ /* Llib/hash.scm 431 */
{ /* Llib/hash.scm 432 */
obj_t BgL_auxz00_6817;
if(
STRUCTP(BgL_tablez00_4495))
{ /* Llib/hash.scm 432 */
BgL_auxz00_6817 = BgL_tablez00_4495
; }  else 
{ 
obj_t BgL_auxz00_6820;
BgL_auxz00_6820 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)16719)), BGl_string3411z00zz__hashz00, BGl_string3362z00zz__hashz00, BgL_tablez00_4495); 
FAILURE(BgL_auxz00_6820,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2clearz12zc0zz__hashz00(BgL_auxz00_6817);} } 

}



/* plain-hashtable-clear! */
obj_t BGl_plainzd2hashtablezd2clearz12z12zz__hashz00(obj_t BgL_tablez00_77)
{
{ /* Llib/hash.scm 439 */
{ /* Llib/hash.scm 440 */
obj_t BgL_bucketsz00_1727;
{ /* Llib/hash.scm 440 */
bool_t BgL_test3886z00_6825;
{ /* Llib/hash.scm 440 */
obj_t BgL_tmpz00_6826;
{ /* Llib/hash.scm 440 */
obj_t BgL_res2277z00_3084;
{ /* Llib/hash.scm 440 */
obj_t BgL_aux2935z00_4786;
BgL_aux2935z00_4786 = 
STRUCT_KEY(BgL_tablez00_77); 
if(
SYMBOLP(BgL_aux2935z00_4786))
{ /* Llib/hash.scm 440 */
BgL_res2277z00_3084 = BgL_aux2935z00_4786; }  else 
{ 
obj_t BgL_auxz00_6830;
BgL_auxz00_6830 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)17113)), BGl_string3412z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2935z00_4786); 
FAILURE(BgL_auxz00_6830,BFALSE,BFALSE);} } 
BgL_tmpz00_6826 = BgL_res2277z00_3084; } 
BgL_test3886z00_6825 = 
(BgL_tmpz00_6826==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3886z00_6825)
{ /* Llib/hash.scm 440 */
int BgL_tmpz00_6835;
BgL_tmpz00_6835 = 
(int)(((long)2)); 
BgL_bucketsz00_1727 = 
STRUCT_REF(BgL_tablez00_77, BgL_tmpz00_6835); }  else 
{ /* Llib/hash.scm 440 */
BgL_bucketsz00_1727 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_77); } } 
{ /* Llib/hash.scm 440 */
long BgL_bucketszd2lenzd2_1728;
{ /* Llib/hash.scm 441 */
obj_t BgL_vectorz00_3085;
if(
VECTORP(BgL_bucketsz00_1727))
{ /* Llib/hash.scm 441 */
BgL_vectorz00_3085 = BgL_bucketsz00_1727; }  else 
{ 
obj_t BgL_auxz00_6841;
BgL_auxz00_6841 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)17172)), BGl_string3412z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1727); 
FAILURE(BgL_auxz00_6841,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1728 = 
VECTOR_LENGTH(BgL_vectorz00_3085); } 
{ /* Llib/hash.scm 441 */

{ 
long BgL_iz00_3098;
BgL_iz00_3098 = ((long)0); 
BgL_loopz00_3097:
if(
(BgL_iz00_3098<BgL_bucketszd2lenzd2_1728))
{ /* Llib/hash.scm 443 */
{ /* Llib/hash.scm 445 */
obj_t BgL_vectorz00_3103;
if(
VECTORP(BgL_bucketsz00_1727))
{ /* Llib/hash.scm 445 */
BgL_vectorz00_3103 = BgL_bucketsz00_1727; }  else 
{ 
obj_t BgL_auxz00_6850;
BgL_auxz00_6850 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)17264)), BGl_string3370z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1727); 
FAILURE(BgL_auxz00_6850,BFALSE,BFALSE);} 
VECTOR_SET(BgL_vectorz00_3103,BgL_iz00_3098,BNIL); } 
{ 
long BgL_iz00_6855;
BgL_iz00_6855 = 
(BgL_iz00_3098+((long)1)); 
BgL_iz00_3098 = BgL_iz00_6855; 
goto BgL_loopz00_3097;} }  else 
{ /* Llib/hash.scm 447 */
bool_t BgL_test3891z00_6857;
{ /* Llib/hash.scm 447 */
obj_t BgL_tmpz00_6858;
{ /* Llib/hash.scm 447 */
obj_t BgL_res2280z00_3110;
{ /* Llib/hash.scm 447 */
obj_t BgL_aux2941z00_4792;
BgL_aux2941z00_4792 = 
STRUCT_KEY(BgL_tablez00_77); 
if(
SYMBOLP(BgL_aux2941z00_4792))
{ /* Llib/hash.scm 447 */
BgL_res2280z00_3110 = BgL_aux2941z00_4792; }  else 
{ 
obj_t BgL_auxz00_6862;
BgL_auxz00_6862 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)17312)), BGl_string3370z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2941z00_4792); 
FAILURE(BgL_auxz00_6862,BFALSE,BFALSE);} } 
BgL_tmpz00_6858 = BgL_res2280z00_3110; } 
BgL_test3891z00_6857 = 
(BgL_tmpz00_6858==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3891z00_6857)
{ /* Llib/hash.scm 447 */
obj_t BgL_auxz00_6869;int BgL_tmpz00_6867;
BgL_auxz00_6869 = 
BINT(((long)0)); 
BgL_tmpz00_6867 = 
(int)(((long)0)); 
return 
STRUCT_SET(BgL_tablez00_77, BgL_tmpz00_6867, BgL_auxz00_6869);}  else 
{ /* Llib/hash.scm 447 */
return 
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_77);} } } } } } } 

}



/* hashtable-contains? */
BGL_EXPORTED_DEF bool_t BGl_hashtablezd2containszf3z21zz__hashz00(obj_t BgL_tablez00_78, obj_t BgL_keyz00_79)
{
{ /* Llib/hash.scm 452 */
if(
BGl_hashtablezd2weakzf3z21zz__hashz00(BgL_tablez00_78))
{ /* Llib/hash.scm 453 */
return 
BGl_weakzd2hashtablezd2containszf3zf3zz__weakhashz00(BgL_tablez00_78, BgL_keyz00_79);}  else 
{ /* Llib/hash.scm 453 */
return 
BGl_plainzd2hashtablezd2containszf3zf3zz__hashz00(BgL_tablez00_78, BgL_keyz00_79);} } 

}



/* &hashtable-contains? */
obj_t BGl_z62hashtablezd2containszf3z43zz__hashz00(obj_t BgL_envz00_4496, obj_t BgL_tablez00_4497, obj_t BgL_keyz00_4498)
{
{ /* Llib/hash.scm 452 */
{ /* Llib/hash.scm 453 */
bool_t BgL_tmpz00_6877;
{ /* Llib/hash.scm 453 */
obj_t BgL_auxz00_6878;
if(
STRUCTP(BgL_tablez00_4497))
{ /* Llib/hash.scm 453 */
BgL_auxz00_6878 = BgL_tablez00_4497
; }  else 
{ 
obj_t BgL_auxz00_6881;
BgL_auxz00_6881 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)17626)), BGl_string3413z00zz__hashz00, BGl_string3362z00zz__hashz00, BgL_tablez00_4497); 
FAILURE(BgL_auxz00_6881,BFALSE,BFALSE);} 
BgL_tmpz00_6877 = 
BGl_hashtablezd2containszf3z21zz__hashz00(BgL_auxz00_6878, BgL_keyz00_4498); } 
return 
BBOOL(BgL_tmpz00_6877);} } 

}



/* plain-hashtable-contains? */
bool_t BGl_plainzd2hashtablezd2containszf3zf3zz__hashz00(obj_t BgL_tablez00_80, obj_t BgL_keyz00_81)
{
{ /* Llib/hash.scm 460 */
{ /* Llib/hash.scm 461 */
obj_t BgL_bucketsz00_1736;
{ /* Llib/hash.scm 461 */
bool_t BgL_test3895z00_6887;
{ /* Llib/hash.scm 461 */
obj_t BgL_tmpz00_6888;
{ /* Llib/hash.scm 461 */
obj_t BgL_res2281z00_3116;
{ /* Llib/hash.scm 461 */
obj_t BgL_aux2945z00_4796;
BgL_aux2945z00_4796 = 
STRUCT_KEY(BgL_tablez00_80); 
if(
SYMBOLP(BgL_aux2945z00_4796))
{ /* Llib/hash.scm 461 */
BgL_res2281z00_3116 = BgL_aux2945z00_4796; }  else 
{ 
obj_t BgL_auxz00_6892;
BgL_auxz00_6892 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)18046)), BGl_string3414z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2945z00_4796); 
FAILURE(BgL_auxz00_6892,BFALSE,BFALSE);} } 
BgL_tmpz00_6888 = BgL_res2281z00_3116; } 
BgL_test3895z00_6887 = 
(BgL_tmpz00_6888==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3895z00_6887)
{ /* Llib/hash.scm 461 */
int BgL_tmpz00_6897;
BgL_tmpz00_6897 = 
(int)(((long)2)); 
BgL_bucketsz00_1736 = 
STRUCT_REF(BgL_tablez00_80, BgL_tmpz00_6897); }  else 
{ /* Llib/hash.scm 461 */
BgL_bucketsz00_1736 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_80); } } 
{ /* Llib/hash.scm 461 */
long BgL_bucketzd2lenzd2_1737;
{ /* Llib/hash.scm 462 */
obj_t BgL_vectorz00_3117;
if(
VECTORP(BgL_bucketsz00_1736))
{ /* Llib/hash.scm 462 */
BgL_vectorz00_3117 = BgL_bucketsz00_1736; }  else 
{ 
obj_t BgL_auxz00_6903;
BgL_auxz00_6903 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)18104)), BGl_string3414z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1736); 
FAILURE(BgL_auxz00_6903,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1737 = 
VECTOR_LENGTH(BgL_vectorz00_3117); } 
{ /* Llib/hash.scm 462 */
long BgL_bucketzd2numzd2_1738;
{ /* Llib/hash.scm 463 */
long BgL_arg1472z00_1749;
{ /* Llib/hash.scm 463 */
long BgL_res2287z00_3133;
{ /* Llib/hash.scm 463 */
obj_t BgL_hashnz00_3118;
{ /* Llib/hash.scm 463 */
bool_t BgL_test3898z00_6908;
{ /* Llib/hash.scm 463 */
obj_t BgL_tmpz00_6909;
{ /* Llib/hash.scm 463 */
obj_t BgL_res2282z00_3124;
{ /* Llib/hash.scm 463 */
obj_t BgL_aux2949z00_4800;
BgL_aux2949z00_4800 = 
STRUCT_KEY(BgL_tablez00_80); 
if(
SYMBOLP(BgL_aux2949z00_4800))
{ /* Llib/hash.scm 463 */
BgL_res2282z00_3124 = BgL_aux2949z00_4800; }  else 
{ 
obj_t BgL_auxz00_6913;
BgL_auxz00_6913 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)18142)), BGl_string3414z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2949z00_4800); 
FAILURE(BgL_auxz00_6913,BFALSE,BFALSE);} } 
BgL_tmpz00_6909 = BgL_res2282z00_3124; } 
BgL_test3898z00_6908 = 
(BgL_tmpz00_6909==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3898z00_6908)
{ /* Llib/hash.scm 463 */
int BgL_tmpz00_6918;
BgL_tmpz00_6918 = 
(int)(((long)4)); 
BgL_hashnz00_3118 = 
STRUCT_REF(BgL_tablez00_80, BgL_tmpz00_6918); }  else 
{ /* Llib/hash.scm 463 */
BgL_hashnz00_3118 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_80); } } 
if(
PROCEDUREP(BgL_hashnz00_3118))
{ /* Llib/hash.scm 463 */
obj_t BgL_arg1316z00_3120;
if(
PROCEDURE_CORRECT_ARITYP(BgL_hashnz00_3118, ((long)1)))
{ /* Llib/hash.scm 463 */
BgL_arg1316z00_3120 = 
PROCEDURE_ENTRY(BgL_hashnz00_3118)(BgL_hashnz00_3118, BgL_keyz00_81, BEOA); }  else 
{ /* Llib/hash.scm 463 */
FAILURE(BGl_string3415z00zz__hashz00,BGl_list3416z00zz__hashz00,BgL_hashnz00_3118);} 
{ /* Llib/hash.scm 463 */
long BgL_nz00_3126;
{ /* Llib/hash.scm 463 */
obj_t BgL_tmpz00_6931;
if(
INTEGERP(BgL_arg1316z00_3120))
{ /* Llib/hash.scm 463 */
BgL_tmpz00_6931 = BgL_arg1316z00_3120
; }  else 
{ 
obj_t BgL_auxz00_6934;
BgL_auxz00_6934 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)18142)), BGl_string3414z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1316z00_3120); 
FAILURE(BgL_auxz00_6934,BFALSE,BFALSE);} 
BgL_nz00_3126 = 
(long)CINT(BgL_tmpz00_6931); } 
if(
(BgL_nz00_3126<((long)0)))
{ /* Llib/hash.scm 463 */
BgL_res2287z00_3133 = 
NEG(BgL_nz00_3126); }  else 
{ /* Llib/hash.scm 463 */
BgL_res2287z00_3133 = BgL_nz00_3126; } } }  else 
{ /* Llib/hash.scm 463 */
BgL_res2287z00_3133 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_81); } } 
BgL_arg1472z00_1749 = BgL_res2287z00_3133; } 
{ /* Llib/hash.scm 463 */
long BgL_res2293z00_3152;
{ /* Llib/hash.scm 463 */
long BgL_n1z00_3134;long BgL_n2z00_3135;
BgL_n1z00_3134 = BgL_arg1472z00_1749; 
BgL_n2z00_3135 = BgL_bucketzd2lenzd2_1737; 
{ /* Llib/hash.scm 463 */
bool_t BgL_test3904z00_6943;
{ /* Llib/hash.scm 463 */
long BgL_arg1909z00_3137;
BgL_arg1909z00_3137 = 
(((BgL_n1z00_3134) | (BgL_n2z00_3135)) & -2147483648); 
BgL_test3904z00_6943 = 
(BgL_arg1909z00_3137==((long)0)); } 
if(BgL_test3904z00_6943)
{ /* Llib/hash.scm 463 */
int32_t BgL_arg1906z00_3138;
{ /* Llib/hash.scm 463 */
int32_t BgL_arg1907z00_3139;int32_t BgL_arg1908z00_3140;
{ /* Llib/hash.scm 463 */
int32_t BgL_res2289z00_3144;
BgL_res2289z00_3144 = 
(int32_t)(BgL_n1z00_3134); 
BgL_arg1907z00_3139 = BgL_res2289z00_3144; } 
{ /* Llib/hash.scm 463 */
int32_t BgL_res2290z00_3146;
BgL_res2290z00_3146 = 
(int32_t)(BgL_n2z00_3135); 
BgL_arg1908z00_3140 = BgL_res2290z00_3146; } 
BgL_arg1906z00_3138 = 
(BgL_arg1907z00_3139%BgL_arg1908z00_3140); } 
{ /* Llib/hash.scm 463 */
long BgL_res2292z00_3151;
{ /* Llib/hash.scm 463 */
long BgL_arg2003z00_3148;
BgL_arg2003z00_3148 = 
(long)(BgL_arg1906z00_3138); 
{ /* Llib/hash.scm 463 */
long BgL_res2291z00_3150;
BgL_res2291z00_3150 = 
(long)(BgL_arg2003z00_3148); 
BgL_res2292z00_3151 = BgL_res2291z00_3150; } } 
BgL_res2293z00_3152 = BgL_res2292z00_3151; } }  else 
{ /* Llib/hash.scm 463 */
BgL_res2293z00_3152 = 
(BgL_n1z00_3134%BgL_n2z00_3135); } } } 
BgL_bucketzd2numzd2_1738 = BgL_res2293z00_3152; } } 
{ /* Llib/hash.scm 463 */
obj_t BgL_bucketz00_1739;
{ /* Llib/hash.scm 464 */
obj_t BgL_vectorz00_3153;
if(
VECTORP(BgL_bucketsz00_1736))
{ /* Llib/hash.scm 464 */
BgL_vectorz00_3153 = BgL_bucketsz00_1736; }  else 
{ 
obj_t BgL_auxz00_6954;
BgL_auxz00_6954 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)18214)), BGl_string3414z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1736); 
FAILURE(BgL_auxz00_6954,BFALSE,BFALSE);} 
BgL_bucketz00_1739 = 
VECTOR_REF(BgL_vectorz00_3153,BgL_bucketzd2numzd2_1738); } 
{ /* Llib/hash.scm 464 */

{ 
obj_t BgL_bucketz00_1741;
BgL_bucketz00_1741 = BgL_bucketz00_1739; 
BgL_zc3z04anonymousza31466ze3z87_1742:
if(
NULLP(BgL_bucketz00_1741))
{ /* Llib/hash.scm 467 */
return ((bool_t)0);}  else 
{ /* Llib/hash.scm 469 */
bool_t BgL_test3907z00_6961;
{ /* Llib/hash.scm 469 */
obj_t BgL_arg1471z00_1747;
{ /* Llib/hash.scm 469 */
obj_t BgL_pairz00_3156;
if(
PAIRP(BgL_bucketz00_1741))
{ /* Llib/hash.scm 469 */
BgL_pairz00_3156 = BgL_bucketz00_1741; }  else 
{ 
obj_t BgL_auxz00_6964;
BgL_auxz00_6964 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)18345)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_bucketz00_1741); 
FAILURE(BgL_auxz00_6964,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 469 */
obj_t BgL_pairz00_3159;
{ /* Llib/hash.scm 469 */
obj_t BgL_aux2959z00_4811;
BgL_aux2959z00_4811 = 
CAR(BgL_pairz00_3156); 
if(
PAIRP(BgL_aux2959z00_4811))
{ /* Llib/hash.scm 469 */
BgL_pairz00_3159 = BgL_aux2959z00_4811; }  else 
{ 
obj_t BgL_auxz00_6971;
BgL_auxz00_6971 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)18339)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_aux2959z00_4811); 
FAILURE(BgL_auxz00_6971,BFALSE,BFALSE);} } 
BgL_arg1471z00_1747 = 
CAR(BgL_pairz00_3159); } } 
{ /* Llib/hash.scm 469 */
obj_t BgL_eqtz00_3160;
{ /* Llib/hash.scm 469 */
bool_t BgL_test3910z00_6976;
{ /* Llib/hash.scm 469 */
obj_t BgL_tmpz00_6977;
{ /* Llib/hash.scm 469 */
obj_t BgL_res2295z00_3168;
{ /* Llib/hash.scm 469 */
obj_t BgL_aux2961z00_4813;
BgL_aux2961z00_4813 = 
STRUCT_KEY(BgL_tablez00_80); 
if(
SYMBOLP(BgL_aux2961z00_4813))
{ /* Llib/hash.scm 469 */
BgL_res2295z00_3168 = BgL_aux2961z00_4813; }  else 
{ 
obj_t BgL_auxz00_6981;
BgL_auxz00_6981 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)18315)), BGl_string3370z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2961z00_4813); 
FAILURE(BgL_auxz00_6981,BFALSE,BFALSE);} } 
BgL_tmpz00_6977 = BgL_res2295z00_3168; } 
BgL_test3910z00_6976 = 
(BgL_tmpz00_6977==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3910z00_6976)
{ /* Llib/hash.scm 469 */
int BgL_tmpz00_6986;
BgL_tmpz00_6986 = 
(int)(((long)3)); 
BgL_eqtz00_3160 = 
STRUCT_REF(BgL_tablez00_80, BgL_tmpz00_6986); }  else 
{ /* Llib/hash.scm 469 */
BgL_eqtz00_3160 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_80); } } 
if(
PROCEDUREP(BgL_eqtz00_3160))
{ /* Llib/hash.scm 469 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_eqtz00_3160, ((long)2)))
{ /* Llib/hash.scm 469 */
BgL_test3907z00_6961 = 
CBOOL(
PROCEDURE_ENTRY(BgL_eqtz00_3160)(BgL_eqtz00_3160, BgL_arg1471z00_1747, BgL_keyz00_81, BEOA))
; }  else 
{ /* Llib/hash.scm 469 */
FAILURE(BGl_string3421z00zz__hashz00,BGl_list3422z00zz__hashz00,BgL_eqtz00_3160);} }  else 
{ /* Llib/hash.scm 469 */
if(
(BgL_arg1471z00_1747==BgL_keyz00_81))
{ /* Llib/hash.scm 469 */
BgL_test3907z00_6961 = ((bool_t)1)
; }  else 
{ /* Llib/hash.scm 469 */
if(
STRINGP(BgL_arg1471z00_1747))
{ /* Llib/hash.scm 469 */
if(
STRINGP(BgL_keyz00_81))
{ /* Llib/hash.scm 469 */
bool_t BgL_res2303z00_3187;
{ /* Llib/hash.scm 469 */
long BgL_l1z00_3174;
BgL_l1z00_3174 = 
STRING_LENGTH(BgL_arg1471z00_1747); 
if(
(BgL_l1z00_3174==
STRING_LENGTH(BgL_keyz00_81)))
{ /* Llib/hash.scm 469 */
int BgL_arg1788z00_3177;
{ /* Llib/hash.scm 469 */
char * BgL_auxz00_7013;char * BgL_tmpz00_7011;
BgL_auxz00_7013 = 
BSTRING_TO_STRING(BgL_keyz00_81); 
BgL_tmpz00_7011 = 
BSTRING_TO_STRING(BgL_arg1471z00_1747); 
BgL_arg1788z00_3177 = 
memcmp(BgL_tmpz00_7011, BgL_auxz00_7013, BgL_l1z00_3174); } 
BgL_res2303z00_3187 = 
(
(long)(BgL_arg1788z00_3177)==((long)0)); }  else 
{ /* Llib/hash.scm 469 */
BgL_res2303z00_3187 = ((bool_t)0); } } 
BgL_test3907z00_6961 = BgL_res2303z00_3187; }  else 
{ /* Llib/hash.scm 469 */
BgL_test3907z00_6961 = ((bool_t)0)
; } }  else 
{ /* Llib/hash.scm 469 */
BgL_test3907z00_6961 = ((bool_t)0)
; } } } } } 
if(BgL_test3907z00_6961)
{ /* Llib/hash.scm 469 */
return ((bool_t)1);}  else 
{ /* Llib/hash.scm 472 */
obj_t BgL_arg1470z00_1746;
{ /* Llib/hash.scm 472 */
obj_t BgL_pairz00_3188;
if(
PAIRP(BgL_bucketz00_1741))
{ /* Llib/hash.scm 472 */
BgL_pairz00_3188 = BgL_bucketz00_1741; }  else 
{ 
obj_t BgL_auxz00_7020;
BgL_auxz00_7020 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)18396)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_bucketz00_1741); 
FAILURE(BgL_auxz00_7020,BFALSE,BFALSE);} 
BgL_arg1470z00_1746 = 
CDR(BgL_pairz00_3188); } 
{ 
obj_t BgL_bucketz00_7025;
BgL_bucketz00_7025 = BgL_arg1470z00_1746; 
BgL_bucketz00_1741 = BgL_bucketz00_7025; 
goto BgL_zc3z04anonymousza31466ze3z87_1742;} } } } } } } } } } 

}



/* hashtable-get */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t BgL_tablez00_82, obj_t BgL_keyz00_83)
{
{ /* Llib/hash.scm 477 */
if(
BGl_hashtablezd2weakzf3z21zz__hashz00(BgL_tablez00_82))
{ /* Llib/hash.scm 479 */
return 
BGl_weakzd2hashtablezd2getz00zz__weakhashz00(BgL_tablez00_82, BgL_keyz00_83);}  else 
{ /* Llib/hash.scm 480 */
bool_t BgL_test3920z00_7029;
{ /* Llib/hash.scm 480 */
bool_t BgL_res2306z00_3199;
{ /* Llib/hash.scm 256 */
obj_t BgL_arg1382z00_3192;
{ /* Llib/hash.scm 256 */
bool_t BgL_test3921z00_7030;
{ /* Llib/hash.scm 256 */
obj_t BgL_tmpz00_7031;
{ /* Llib/hash.scm 256 */
obj_t BgL_res2304z00_3196;
{ /* Llib/hash.scm 256 */
obj_t BgL_aux2967z00_4820;
BgL_aux2967z00_4820 = 
STRUCT_KEY(BgL_tablez00_82); 
if(
SYMBOLP(BgL_aux2967z00_4820))
{ /* Llib/hash.scm 256 */
BgL_res2304z00_3196 = BgL_aux2967z00_4820; }  else 
{ 
obj_t BgL_auxz00_7035;
BgL_auxz00_7035 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)9088)), BGl_string3427z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2967z00_4820); 
FAILURE(BgL_auxz00_7035,BFALSE,BFALSE);} } 
BgL_tmpz00_7031 = BgL_res2304z00_3196; } 
BgL_test3921z00_7030 = 
(BgL_tmpz00_7031==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3921z00_7030)
{ /* Llib/hash.scm 256 */
int BgL_tmpz00_7040;
BgL_tmpz00_7040 = 
(int)(((long)5)); 
BgL_arg1382z00_3192 = 
STRUCT_REF(BgL_tablez00_82, BgL_tmpz00_7040); }  else 
{ /* Llib/hash.scm 256 */
BgL_arg1382z00_3192 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_82); } } 
{ /* Llib/hash.scm 256 */
long BgL_n1z00_3197;
{ /* Llib/hash.scm 256 */
obj_t BgL_tmpz00_7044;
if(
INTEGERP(BgL_arg1382z00_3192))
{ /* Llib/hash.scm 256 */
BgL_tmpz00_7044 = BgL_arg1382z00_3192
; }  else 
{ 
obj_t BgL_auxz00_7047;
BgL_auxz00_7047 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)9110)), BGl_string3427z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1382z00_3192); 
FAILURE(BgL_auxz00_7047,BFALSE,BFALSE);} 
BgL_n1z00_3197 = 
(long)CINT(BgL_tmpz00_7044); } 
BgL_res2306z00_3199 = 
(BgL_n1z00_3197==((long)4)); } } 
BgL_test3920z00_7029 = BgL_res2306z00_3199; } 
if(BgL_test3920z00_7029)
{ /* Llib/hash.scm 480 */
return 
BGl_stringzd2hashtablezd2getz00zz__hashz00(BgL_tablez00_82, BgL_keyz00_83);}  else 
{ /* Llib/hash.scm 480 */
return 
BGl_plainzd2hashtablezd2getz00zz__hashz00(BgL_tablez00_82, BgL_keyz00_83);} } } 

}



/* &hashtable-get */
obj_t BGl_z62hashtablezd2getzb0zz__hashz00(obj_t BgL_envz00_4499, obj_t BgL_tablez00_4500, obj_t BgL_keyz00_4501)
{
{ /* Llib/hash.scm 477 */
{ /* Llib/hash.scm 479 */
obj_t BgL_auxz00_7055;
if(
STRUCTP(BgL_tablez00_4500))
{ /* Llib/hash.scm 479 */
BgL_auxz00_7055 = BgL_tablez00_4500
; }  else 
{ 
obj_t BgL_auxz00_7058;
BgL_auxz00_7058 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)18695)), BGl_string3428z00zz__hashz00, BGl_string3362z00zz__hashz00, BgL_tablez00_4500); 
FAILURE(BgL_auxz00_7058,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2getzd2zz__hashz00(BgL_auxz00_7055, BgL_keyz00_4501);} } 

}



/* plain-hashtable-get */
obj_t BGl_plainzd2hashtablezd2getz00zz__hashz00(obj_t BgL_tablez00_84, obj_t BgL_keyz00_85)
{
{ /* Llib/hash.scm 486 */
{ /* Llib/hash.scm 487 */
obj_t BgL_bucketsz00_1752;
{ /* Llib/hash.scm 487 */
bool_t BgL_test3925z00_7063;
{ /* Llib/hash.scm 487 */
obj_t BgL_tmpz00_7064;
{ /* Llib/hash.scm 487 */
obj_t BgL_res2307z00_3203;
{ /* Llib/hash.scm 487 */
obj_t BgL_aux2973z00_4826;
BgL_aux2973z00_4826 = 
STRUCT_KEY(BgL_tablez00_84); 
if(
SYMBOLP(BgL_aux2973z00_4826))
{ /* Llib/hash.scm 487 */
BgL_res2307z00_3203 = BgL_aux2973z00_4826; }  else 
{ 
obj_t BgL_auxz00_7068;
BgL_auxz00_7068 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)19161)), BGl_string3429z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2973z00_4826); 
FAILURE(BgL_auxz00_7068,BFALSE,BFALSE);} } 
BgL_tmpz00_7064 = BgL_res2307z00_3203; } 
BgL_test3925z00_7063 = 
(BgL_tmpz00_7064==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3925z00_7063)
{ /* Llib/hash.scm 487 */
int BgL_tmpz00_7073;
BgL_tmpz00_7073 = 
(int)(((long)2)); 
BgL_bucketsz00_1752 = 
STRUCT_REF(BgL_tablez00_84, BgL_tmpz00_7073); }  else 
{ /* Llib/hash.scm 487 */
BgL_bucketsz00_1752 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_84); } } 
{ /* Llib/hash.scm 487 */
long BgL_bucketzd2lenzd2_1753;
{ /* Llib/hash.scm 488 */
obj_t BgL_vectorz00_3204;
if(
VECTORP(BgL_bucketsz00_1752))
{ /* Llib/hash.scm 488 */
BgL_vectorz00_3204 = BgL_bucketsz00_1752; }  else 
{ 
obj_t BgL_auxz00_7079;
BgL_auxz00_7079 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)19219)), BGl_string3429z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1752); 
FAILURE(BgL_auxz00_7079,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1753 = 
VECTOR_LENGTH(BgL_vectorz00_3204); } 
{ /* Llib/hash.scm 488 */
long BgL_bucketzd2numzd2_1754;
{ /* Llib/hash.scm 489 */
long BgL_arg1483z00_1765;
{ /* Llib/hash.scm 489 */
long BgL_res2313z00_3220;
{ /* Llib/hash.scm 489 */
obj_t BgL_hashnz00_3205;
{ /* Llib/hash.scm 489 */
bool_t BgL_test3928z00_7084;
{ /* Llib/hash.scm 489 */
obj_t BgL_tmpz00_7085;
{ /* Llib/hash.scm 489 */
obj_t BgL_res2308z00_3211;
{ /* Llib/hash.scm 489 */
obj_t BgL_aux2977z00_4830;
BgL_aux2977z00_4830 = 
STRUCT_KEY(BgL_tablez00_84); 
if(
SYMBOLP(BgL_aux2977z00_4830))
{ /* Llib/hash.scm 489 */
BgL_res2308z00_3211 = BgL_aux2977z00_4830; }  else 
{ 
obj_t BgL_auxz00_7089;
BgL_auxz00_7089 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)19257)), BGl_string3429z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2977z00_4830); 
FAILURE(BgL_auxz00_7089,BFALSE,BFALSE);} } 
BgL_tmpz00_7085 = BgL_res2308z00_3211; } 
BgL_test3928z00_7084 = 
(BgL_tmpz00_7085==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3928z00_7084)
{ /* Llib/hash.scm 489 */
int BgL_tmpz00_7094;
BgL_tmpz00_7094 = 
(int)(((long)4)); 
BgL_hashnz00_3205 = 
STRUCT_REF(BgL_tablez00_84, BgL_tmpz00_7094); }  else 
{ /* Llib/hash.scm 489 */
BgL_hashnz00_3205 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_84); } } 
if(
PROCEDUREP(BgL_hashnz00_3205))
{ /* Llib/hash.scm 489 */
obj_t BgL_arg1316z00_3207;
if(
PROCEDURE_CORRECT_ARITYP(BgL_hashnz00_3205, ((long)1)))
{ /* Llib/hash.scm 489 */
BgL_arg1316z00_3207 = 
PROCEDURE_ENTRY(BgL_hashnz00_3205)(BgL_hashnz00_3205, BgL_keyz00_85, BEOA); }  else 
{ /* Llib/hash.scm 489 */
FAILURE(BGl_string3430z00zz__hashz00,BGl_list3416z00zz__hashz00,BgL_hashnz00_3205);} 
{ /* Llib/hash.scm 489 */
long BgL_nz00_3213;
{ /* Llib/hash.scm 489 */
obj_t BgL_tmpz00_7107;
if(
INTEGERP(BgL_arg1316z00_3207))
{ /* Llib/hash.scm 489 */
BgL_tmpz00_7107 = BgL_arg1316z00_3207
; }  else 
{ 
obj_t BgL_auxz00_7110;
BgL_auxz00_7110 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)19257)), BGl_string3429z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1316z00_3207); 
FAILURE(BgL_auxz00_7110,BFALSE,BFALSE);} 
BgL_nz00_3213 = 
(long)CINT(BgL_tmpz00_7107); } 
if(
(BgL_nz00_3213<((long)0)))
{ /* Llib/hash.scm 489 */
BgL_res2313z00_3220 = 
NEG(BgL_nz00_3213); }  else 
{ /* Llib/hash.scm 489 */
BgL_res2313z00_3220 = BgL_nz00_3213; } } }  else 
{ /* Llib/hash.scm 489 */
BgL_res2313z00_3220 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_85); } } 
BgL_arg1483z00_1765 = BgL_res2313z00_3220; } 
{ /* Llib/hash.scm 489 */
long BgL_res2319z00_3239;
{ /* Llib/hash.scm 489 */
long BgL_n1z00_3221;long BgL_n2z00_3222;
BgL_n1z00_3221 = BgL_arg1483z00_1765; 
BgL_n2z00_3222 = BgL_bucketzd2lenzd2_1753; 
{ /* Llib/hash.scm 489 */
bool_t BgL_test3934z00_7119;
{ /* Llib/hash.scm 489 */
long BgL_arg1909z00_3224;
BgL_arg1909z00_3224 = 
(((BgL_n1z00_3221) | (BgL_n2z00_3222)) & -2147483648); 
BgL_test3934z00_7119 = 
(BgL_arg1909z00_3224==((long)0)); } 
if(BgL_test3934z00_7119)
{ /* Llib/hash.scm 489 */
int32_t BgL_arg1906z00_3225;
{ /* Llib/hash.scm 489 */
int32_t BgL_arg1907z00_3226;int32_t BgL_arg1908z00_3227;
{ /* Llib/hash.scm 489 */
int32_t BgL_res2315z00_3231;
BgL_res2315z00_3231 = 
(int32_t)(BgL_n1z00_3221); 
BgL_arg1907z00_3226 = BgL_res2315z00_3231; } 
{ /* Llib/hash.scm 489 */
int32_t BgL_res2316z00_3233;
BgL_res2316z00_3233 = 
(int32_t)(BgL_n2z00_3222); 
BgL_arg1908z00_3227 = BgL_res2316z00_3233; } 
BgL_arg1906z00_3225 = 
(BgL_arg1907z00_3226%BgL_arg1908z00_3227); } 
{ /* Llib/hash.scm 489 */
long BgL_res2318z00_3238;
{ /* Llib/hash.scm 489 */
long BgL_arg2003z00_3235;
BgL_arg2003z00_3235 = 
(long)(BgL_arg1906z00_3225); 
{ /* Llib/hash.scm 489 */
long BgL_res2317z00_3237;
BgL_res2317z00_3237 = 
(long)(BgL_arg2003z00_3235); 
BgL_res2318z00_3238 = BgL_res2317z00_3237; } } 
BgL_res2319z00_3239 = BgL_res2318z00_3238; } }  else 
{ /* Llib/hash.scm 489 */
BgL_res2319z00_3239 = 
(BgL_n1z00_3221%BgL_n2z00_3222); } } } 
BgL_bucketzd2numzd2_1754 = BgL_res2319z00_3239; } } 
{ /* Llib/hash.scm 489 */
obj_t BgL_bucketz00_1755;
{ /* Llib/hash.scm 490 */
obj_t BgL_vectorz00_3240;
if(
VECTORP(BgL_bucketsz00_1752))
{ /* Llib/hash.scm 490 */
BgL_vectorz00_3240 = BgL_bucketsz00_1752; }  else 
{ 
obj_t BgL_auxz00_7130;
BgL_auxz00_7130 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)19329)), BGl_string3429z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1752); 
FAILURE(BgL_auxz00_7130,BFALSE,BFALSE);} 
BgL_bucketz00_1755 = 
VECTOR_REF(BgL_vectorz00_3240,BgL_bucketzd2numzd2_1754); } 
{ /* Llib/hash.scm 490 */

{ 
obj_t BgL_bucketz00_1757;
BgL_bucketz00_1757 = BgL_bucketz00_1755; 
BgL_zc3z04anonymousza31475ze3z87_1758:
if(
NULLP(BgL_bucketz00_1757))
{ /* Llib/hash.scm 493 */
return BFALSE;}  else 
{ /* Llib/hash.scm 495 */
bool_t BgL_test3937z00_7137;
{ /* Llib/hash.scm 495 */
obj_t BgL_arg1480z00_1763;
{ /* Llib/hash.scm 495 */
obj_t BgL_pairz00_3243;
if(
PAIRP(BgL_bucketz00_1757))
{ /* Llib/hash.scm 495 */
BgL_pairz00_3243 = BgL_bucketz00_1757; }  else 
{ 
obj_t BgL_auxz00_7140;
BgL_auxz00_7140 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)19460)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_bucketz00_1757); 
FAILURE(BgL_auxz00_7140,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 495 */
obj_t BgL_pairz00_3246;
{ /* Llib/hash.scm 495 */
obj_t BgL_aux2987z00_4841;
BgL_aux2987z00_4841 = 
CAR(BgL_pairz00_3243); 
if(
PAIRP(BgL_aux2987z00_4841))
{ /* Llib/hash.scm 495 */
BgL_pairz00_3246 = BgL_aux2987z00_4841; }  else 
{ 
obj_t BgL_auxz00_7147;
BgL_auxz00_7147 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)19454)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_aux2987z00_4841); 
FAILURE(BgL_auxz00_7147,BFALSE,BFALSE);} } 
BgL_arg1480z00_1763 = 
CAR(BgL_pairz00_3246); } } 
{ /* Llib/hash.scm 495 */
obj_t BgL_eqtz00_3247;
{ /* Llib/hash.scm 495 */
bool_t BgL_test3940z00_7152;
{ /* Llib/hash.scm 495 */
obj_t BgL_tmpz00_7153;
{ /* Llib/hash.scm 495 */
obj_t BgL_res2321z00_3255;
{ /* Llib/hash.scm 495 */
obj_t BgL_aux2989z00_4843;
BgL_aux2989z00_4843 = 
STRUCT_KEY(BgL_tablez00_84); 
if(
SYMBOLP(BgL_aux2989z00_4843))
{ /* Llib/hash.scm 495 */
BgL_res2321z00_3255 = BgL_aux2989z00_4843; }  else 
{ 
obj_t BgL_auxz00_7157;
BgL_auxz00_7157 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)19430)), BGl_string3370z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2989z00_4843); 
FAILURE(BgL_auxz00_7157,BFALSE,BFALSE);} } 
BgL_tmpz00_7153 = BgL_res2321z00_3255; } 
BgL_test3940z00_7152 = 
(BgL_tmpz00_7153==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3940z00_7152)
{ /* Llib/hash.scm 495 */
int BgL_tmpz00_7162;
BgL_tmpz00_7162 = 
(int)(((long)3)); 
BgL_eqtz00_3247 = 
STRUCT_REF(BgL_tablez00_84, BgL_tmpz00_7162); }  else 
{ /* Llib/hash.scm 495 */
BgL_eqtz00_3247 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_84); } } 
if(
PROCEDUREP(BgL_eqtz00_3247))
{ /* Llib/hash.scm 495 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_eqtz00_3247, ((long)2)))
{ /* Llib/hash.scm 495 */
BgL_test3937z00_7137 = 
CBOOL(
PROCEDURE_ENTRY(BgL_eqtz00_3247)(BgL_eqtz00_3247, BgL_arg1480z00_1763, BgL_keyz00_85, BEOA))
; }  else 
{ /* Llib/hash.scm 495 */
FAILURE(BGl_string3421z00zz__hashz00,BGl_list3431z00zz__hashz00,BgL_eqtz00_3247);} }  else 
{ /* Llib/hash.scm 495 */
if(
(BgL_arg1480z00_1763==BgL_keyz00_85))
{ /* Llib/hash.scm 495 */
BgL_test3937z00_7137 = ((bool_t)1)
; }  else 
{ /* Llib/hash.scm 495 */
if(
STRINGP(BgL_arg1480z00_1763))
{ /* Llib/hash.scm 495 */
if(
STRINGP(BgL_keyz00_85))
{ /* Llib/hash.scm 495 */
bool_t BgL_res2329z00_3274;
{ /* Llib/hash.scm 495 */
long BgL_l1z00_3261;
BgL_l1z00_3261 = 
STRING_LENGTH(BgL_arg1480z00_1763); 
if(
(BgL_l1z00_3261==
STRING_LENGTH(BgL_keyz00_85)))
{ /* Llib/hash.scm 495 */
int BgL_arg1788z00_3264;
{ /* Llib/hash.scm 495 */
char * BgL_auxz00_7189;char * BgL_tmpz00_7187;
BgL_auxz00_7189 = 
BSTRING_TO_STRING(BgL_keyz00_85); 
BgL_tmpz00_7187 = 
BSTRING_TO_STRING(BgL_arg1480z00_1763); 
BgL_arg1788z00_3264 = 
memcmp(BgL_tmpz00_7187, BgL_auxz00_7189, BgL_l1z00_3261); } 
BgL_res2329z00_3274 = 
(
(long)(BgL_arg1788z00_3264)==((long)0)); }  else 
{ /* Llib/hash.scm 495 */
BgL_res2329z00_3274 = ((bool_t)0); } } 
BgL_test3937z00_7137 = BgL_res2329z00_3274; }  else 
{ /* Llib/hash.scm 495 */
BgL_test3937z00_7137 = ((bool_t)0)
; } }  else 
{ /* Llib/hash.scm 495 */
BgL_test3937z00_7137 = ((bool_t)0)
; } } } } } 
if(BgL_test3937z00_7137)
{ /* Llib/hash.scm 496 */
obj_t BgL_pairz00_3275;
if(
PAIRP(BgL_bucketz00_1757))
{ /* Llib/hash.scm 496 */
BgL_pairz00_3275 = BgL_bucketz00_1757; }  else 
{ 
obj_t BgL_auxz00_7196;
BgL_auxz00_7196 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)19485)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_bucketz00_1757); 
FAILURE(BgL_auxz00_7196,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 496 */
obj_t BgL_pairz00_3278;
{ /* Llib/hash.scm 496 */
obj_t BgL_aux2995z00_4850;
BgL_aux2995z00_4850 = 
CAR(BgL_pairz00_3275); 
if(
PAIRP(BgL_aux2995z00_4850))
{ /* Llib/hash.scm 496 */
BgL_pairz00_3278 = BgL_aux2995z00_4850; }  else 
{ 
obj_t BgL_auxz00_7203;
BgL_auxz00_7203 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)19479)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_aux2995z00_4850); 
FAILURE(BgL_auxz00_7203,BFALSE,BFALSE);} } 
return 
CDR(BgL_pairz00_3278);} }  else 
{ /* Llib/hash.scm 498 */
obj_t BgL_arg1479z00_1762;
{ /* Llib/hash.scm 498 */
obj_t BgL_pairz00_3279;
if(
PAIRP(BgL_bucketz00_1757))
{ /* Llib/hash.scm 498 */
BgL_pairz00_3279 = BgL_bucketz00_1757; }  else 
{ 
obj_t BgL_auxz00_7210;
BgL_auxz00_7210 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)19522)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_bucketz00_1757); 
FAILURE(BgL_auxz00_7210,BFALSE,BFALSE);} 
BgL_arg1479z00_1762 = 
CDR(BgL_pairz00_3279); } 
{ 
obj_t BgL_bucketz00_7215;
BgL_bucketz00_7215 = BgL_arg1479z00_1762; 
BgL_bucketz00_1757 = BgL_bucketz00_7215; 
goto BgL_zc3z04anonymousza31475ze3z87_1758;} } } } } } } } } } 

}



/* string-hashtable-get */
obj_t BGl_stringzd2hashtablezd2getz00zz__hashz00(obj_t BgL_tablez00_86, obj_t BgL_keyz00_87)
{
{ /* Llib/hash.scm 503 */
{ /* Llib/hash.scm 504 */
obj_t BgL_bucketsz00_1766;
{ /* Llib/hash.scm 504 */
bool_t BgL_test3951z00_7216;
{ /* Llib/hash.scm 504 */
obj_t BgL_tmpz00_7217;
{ /* Llib/hash.scm 504 */
obj_t BgL_res2330z00_3283;
{ /* Llib/hash.scm 504 */
obj_t BgL_aux2999z00_4854;
BgL_aux2999z00_4854 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux2999z00_4854))
{ /* Llib/hash.scm 504 */
BgL_res2330z00_3283 = BgL_aux2999z00_4854; }  else 
{ 
obj_t BgL_auxz00_7221;
BgL_auxz00_7221 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)19832)), BGl_string3434z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux2999z00_4854); 
FAILURE(BgL_auxz00_7221,BFALSE,BFALSE);} } 
BgL_tmpz00_7217 = BgL_res2330z00_3283; } 
BgL_test3951z00_7216 = 
(BgL_tmpz00_7217==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3951z00_7216)
{ /* Llib/hash.scm 504 */
int BgL_tmpz00_7226;
BgL_tmpz00_7226 = 
(int)(((long)2)); 
BgL_bucketsz00_1766 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_7226); }  else 
{ /* Llib/hash.scm 504 */
BgL_bucketsz00_1766 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_86); } } 
{ /* Llib/hash.scm 504 */
long BgL_bucketzd2lenzd2_1767;
{ /* Llib/hash.scm 505 */
obj_t BgL_vectorz00_3284;
if(
VECTORP(BgL_bucketsz00_1766))
{ /* Llib/hash.scm 505 */
BgL_vectorz00_3284 = BgL_bucketsz00_1766; }  else 
{ 
obj_t BgL_auxz00_7232;
BgL_auxz00_7232 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)19890)), BGl_string3434z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1766); 
FAILURE(BgL_auxz00_7232,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1767 = 
VECTOR_LENGTH(BgL_vectorz00_3284); } 
{ /* Llib/hash.scm 505 */
long BgL_bucketzd2numzd2_1768;
{ /* Llib/hash.scm 506 */
long BgL_arg1492z00_1779;
{ /* Llib/hash.scm 506 */
long BgL_arg1493z00_1780;
{ /* Llib/hash.scm 506 */
obj_t BgL_stringz00_3285;
if(
STRINGP(BgL_keyz00_87))
{ /* Llib/hash.scm 506 */
BgL_stringz00_3285 = BgL_keyz00_87; }  else 
{ 
obj_t BgL_auxz00_7239;
BgL_auxz00_7239 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)19948)), BGl_string3434z00zz__hashz00, BGl_string3356z00zz__hashz00, BgL_keyz00_87); 
FAILURE(BgL_auxz00_7239,BFALSE,BFALSE);} 
BgL_arg1493z00_1780 = 
STRING_LENGTH(BgL_stringz00_3285); } 
{ /* Llib/hash.scm 506 */
char * BgL_tmpz00_7244;
{ /* Llib/hash.scm 506 */
obj_t BgL_tmpz00_7245;
if(
STRINGP(BgL_keyz00_87))
{ /* Llib/hash.scm 506 */
BgL_tmpz00_7245 = BgL_keyz00_87
; }  else 
{ 
obj_t BgL_auxz00_7248;
BgL_auxz00_7248 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)19942)), BGl_string3434z00zz__hashz00, BGl_string3356z00zz__hashz00, BgL_keyz00_87); 
FAILURE(BgL_auxz00_7248,BFALSE,BFALSE);} 
BgL_tmpz00_7244 = 
BSTRING_TO_STRING(BgL_tmpz00_7245); } 
BgL_arg1492z00_1779 = 
bgl_string_hash(BgL_tmpz00_7244, 
(int)(((long)0)), 
(int)(BgL_arg1493z00_1780)); } } 
{ /* Llib/hash.scm 506 */
long BgL_res2337z00_3305;
{ /* Llib/hash.scm 506 */
long BgL_n1z00_3287;long BgL_n2z00_3288;
BgL_n1z00_3287 = BgL_arg1492z00_1779; 
BgL_n2z00_3288 = BgL_bucketzd2lenzd2_1767; 
{ /* Llib/hash.scm 506 */
bool_t BgL_test3956z00_7256;
{ /* Llib/hash.scm 506 */
long BgL_arg1909z00_3290;
BgL_arg1909z00_3290 = 
(((BgL_n1z00_3287) | (BgL_n2z00_3288)) & -2147483648); 
BgL_test3956z00_7256 = 
(BgL_arg1909z00_3290==((long)0)); } 
if(BgL_test3956z00_7256)
{ /* Llib/hash.scm 506 */
int32_t BgL_arg1906z00_3291;
{ /* Llib/hash.scm 506 */
int32_t BgL_arg1907z00_3292;int32_t BgL_arg1908z00_3293;
{ /* Llib/hash.scm 506 */
int32_t BgL_res2333z00_3297;
BgL_res2333z00_3297 = 
(int32_t)(BgL_n1z00_3287); 
BgL_arg1907z00_3292 = BgL_res2333z00_3297; } 
{ /* Llib/hash.scm 506 */
int32_t BgL_res2334z00_3299;
BgL_res2334z00_3299 = 
(int32_t)(BgL_n2z00_3288); 
BgL_arg1908z00_3293 = BgL_res2334z00_3299; } 
BgL_arg1906z00_3291 = 
(BgL_arg1907z00_3292%BgL_arg1908z00_3293); } 
{ /* Llib/hash.scm 506 */
long BgL_res2336z00_3304;
{ /* Llib/hash.scm 506 */
long BgL_arg2003z00_3301;
BgL_arg2003z00_3301 = 
(long)(BgL_arg1906z00_3291); 
{ /* Llib/hash.scm 506 */
long BgL_res2335z00_3303;
BgL_res2335z00_3303 = 
(long)(BgL_arg2003z00_3301); 
BgL_res2336z00_3304 = BgL_res2335z00_3303; } } 
BgL_res2337z00_3305 = BgL_res2336z00_3304; } }  else 
{ /* Llib/hash.scm 506 */
BgL_res2337z00_3305 = 
(BgL_n1z00_3287%BgL_n2z00_3288); } } } 
BgL_bucketzd2numzd2_1768 = BgL_res2337z00_3305; } } 
{ /* Llib/hash.scm 506 */
obj_t BgL_bucketz00_1769;
{ /* Llib/hash.scm 507 */
obj_t BgL_vectorz00_3306;
if(
VECTORP(BgL_bucketsz00_1766))
{ /* Llib/hash.scm 507 */
BgL_vectorz00_3306 = BgL_bucketsz00_1766; }  else 
{ 
obj_t BgL_auxz00_7267;
BgL_auxz00_7267 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)20008)), BGl_string3434z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1766); 
FAILURE(BgL_auxz00_7267,BFALSE,BFALSE);} 
BgL_bucketz00_1769 = 
VECTOR_REF(BgL_vectorz00_3306,BgL_bucketzd2numzd2_1768); } 
{ /* Llib/hash.scm 507 */

{ 
obj_t BgL_bucketz00_1771;
BgL_bucketz00_1771 = BgL_bucketz00_1769; 
BgL_zc3z04anonymousza31484ze3z87_1772:
if(
NULLP(BgL_bucketz00_1771))
{ /* Llib/hash.scm 510 */
return BFALSE;}  else 
{ /* Llib/hash.scm 512 */
bool_t BgL_test3959z00_7274;
{ /* Llib/hash.scm 512 */
obj_t BgL_arg1491z00_1777;
{ /* Llib/hash.scm 512 */
obj_t BgL_pairz00_3309;
if(
PAIRP(BgL_bucketz00_1771))
{ /* Llib/hash.scm 512 */
BgL_pairz00_3309 = BgL_bucketz00_1771; }  else 
{ 
obj_t BgL_auxz00_7277;
BgL_auxz00_7277 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)20125)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_bucketz00_1771); 
FAILURE(BgL_auxz00_7277,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 512 */
obj_t BgL_pairz00_3312;
{ /* Llib/hash.scm 512 */
obj_t BgL_aux3011z00_4866;
BgL_aux3011z00_4866 = 
CAR(BgL_pairz00_3309); 
if(
PAIRP(BgL_aux3011z00_4866))
{ /* Llib/hash.scm 512 */
BgL_pairz00_3312 = BgL_aux3011z00_4866; }  else 
{ 
obj_t BgL_auxz00_7284;
BgL_auxz00_7284 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)20119)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_aux3011z00_4866); 
FAILURE(BgL_auxz00_7284,BFALSE,BFALSE);} } 
BgL_arg1491z00_1777 = 
CAR(BgL_pairz00_3312); } } 
{ /* Llib/hash.scm 512 */
bool_t BgL_res2343z00_3328;
{ /* Llib/hash.scm 512 */
obj_t BgL_string1z00_3313;obj_t BgL_string2z00_3314;
if(
STRINGP(BgL_arg1491z00_1777))
{ /* Llib/hash.scm 512 */
BgL_string1z00_3313 = BgL_arg1491z00_1777; }  else 
{ 
obj_t BgL_auxz00_7291;
BgL_auxz00_7291 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)20131)), BGl_string3370z00zz__hashz00, BGl_string3356z00zz__hashz00, BgL_arg1491z00_1777); 
FAILURE(BgL_auxz00_7291,BFALSE,BFALSE);} 
if(
STRINGP(BgL_keyz00_87))
{ /* Llib/hash.scm 512 */
BgL_string2z00_3314 = BgL_keyz00_87; }  else 
{ 
obj_t BgL_auxz00_7297;
BgL_auxz00_7297 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)20133)), BGl_string3370z00zz__hashz00, BGl_string3356z00zz__hashz00, BgL_keyz00_87); 
FAILURE(BgL_auxz00_7297,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 512 */
long BgL_l1z00_3315;
BgL_l1z00_3315 = 
STRING_LENGTH(BgL_string1z00_3313); 
if(
(BgL_l1z00_3315==
STRING_LENGTH(BgL_string2z00_3314)))
{ /* Llib/hash.scm 512 */
int BgL_arg1788z00_3318;
{ /* Llib/hash.scm 512 */
char * BgL_auxz00_7307;char * BgL_tmpz00_7305;
BgL_auxz00_7307 = 
BSTRING_TO_STRING(BgL_string2z00_3314); 
BgL_tmpz00_7305 = 
BSTRING_TO_STRING(BgL_string1z00_3313); 
BgL_arg1788z00_3318 = 
memcmp(BgL_tmpz00_7305, BgL_auxz00_7307, BgL_l1z00_3315); } 
BgL_res2343z00_3328 = 
(
(long)(BgL_arg1788z00_3318)==((long)0)); }  else 
{ /* Llib/hash.scm 512 */
BgL_res2343z00_3328 = ((bool_t)0); } } } 
BgL_test3959z00_7274 = BgL_res2343z00_3328; } } 
if(BgL_test3959z00_7274)
{ /* Llib/hash.scm 513 */
obj_t BgL_pairz00_3329;
if(
PAIRP(BgL_bucketz00_1771))
{ /* Llib/hash.scm 513 */
BgL_pairz00_3329 = BgL_bucketz00_1771; }  else 
{ 
obj_t BgL_auxz00_7314;
BgL_auxz00_7314 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)20150)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_bucketz00_1771); 
FAILURE(BgL_auxz00_7314,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 513 */
obj_t BgL_pairz00_3332;
{ /* Llib/hash.scm 513 */
obj_t BgL_aux3019z00_4874;
BgL_aux3019z00_4874 = 
CAR(BgL_pairz00_3329); 
if(
PAIRP(BgL_aux3019z00_4874))
{ /* Llib/hash.scm 513 */
BgL_pairz00_3332 = BgL_aux3019z00_4874; }  else 
{ 
obj_t BgL_auxz00_7321;
BgL_auxz00_7321 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)20144)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_aux3019z00_4874); 
FAILURE(BgL_auxz00_7321,BFALSE,BFALSE);} } 
return 
CDR(BgL_pairz00_3332);} }  else 
{ /* Llib/hash.scm 515 */
obj_t BgL_arg1489z00_1776;
{ /* Llib/hash.scm 515 */
obj_t BgL_pairz00_3333;
if(
PAIRP(BgL_bucketz00_1771))
{ /* Llib/hash.scm 515 */
BgL_pairz00_3333 = BgL_bucketz00_1771; }  else 
{ 
obj_t BgL_auxz00_7328;
BgL_auxz00_7328 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)20187)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_bucketz00_1771); 
FAILURE(BgL_auxz00_7328,BFALSE,BFALSE);} 
BgL_arg1489z00_1776 = 
CDR(BgL_pairz00_3333); } 
{ 
obj_t BgL_bucketz00_7333;
BgL_bucketz00_7333 = BgL_arg1489z00_1776; 
BgL_bucketz00_1771 = BgL_bucketz00_7333; 
goto BgL_zc3z04anonymousza31484ze3z87_1772;} } } } } } } } } } 

}



/* hashtable-put! */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t BgL_tablez00_88, obj_t BgL_keyz00_89, obj_t BgL_objz00_90)
{
{ /* Llib/hash.scm 520 */
if(
BGl_hashtablezd2weakzf3z21zz__hashz00(BgL_tablez00_88))
{ /* Llib/hash.scm 521 */
return 
BGl_weakzd2hashtablezd2putz12z12zz__weakhashz00(BgL_tablez00_88, BgL_keyz00_89, BgL_objz00_90);}  else 
{ /* Llib/hash.scm 521 */
return 
BGl_plainzd2hashtablezd2putz12z12zz__hashz00(BgL_tablez00_88, BgL_keyz00_89, BgL_objz00_90);} } 

}



/* &hashtable-put! */
obj_t BGl_z62hashtablezd2putz12za2zz__hashz00(obj_t BgL_envz00_4502, obj_t BgL_tablez00_4503, obj_t BgL_keyz00_4504, obj_t BgL_objz00_4505)
{
{ /* Llib/hash.scm 520 */
{ /* Llib/hash.scm 521 */
obj_t BgL_auxz00_7338;
if(
STRUCTP(BgL_tablez00_4503))
{ /* Llib/hash.scm 521 */
BgL_auxz00_7338 = BgL_tablez00_4503
; }  else 
{ 
obj_t BgL_auxz00_7341;
BgL_auxz00_7341 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)20484)), BGl_string3435z00zz__hashz00, BGl_string3362z00zz__hashz00, BgL_tablez00_4503); 
FAILURE(BgL_auxz00_7341,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2putz12zc0zz__hashz00(BgL_auxz00_7338, BgL_keyz00_4504, BgL_objz00_4505);} } 

}



/* plain-hashtable-put! */
obj_t BGl_plainzd2hashtablezd2putz12z12zz__hashz00(obj_t BgL_tablez00_91, obj_t BgL_keyz00_92, obj_t BgL_objz00_93)
{
{ /* Llib/hash.scm 528 */
{ /* Llib/hash.scm 529 */
obj_t BgL_bucketsz00_1782;
{ /* Llib/hash.scm 529 */
bool_t BgL_test3970z00_7346;
{ /* Llib/hash.scm 529 */
obj_t BgL_tmpz00_7347;
{ /* Llib/hash.scm 529 */
obj_t BgL_res2344z00_3338;
{ /* Llib/hash.scm 529 */
obj_t BgL_aux3025z00_4880;
BgL_aux3025z00_4880 = 
STRUCT_KEY(BgL_tablez00_91); 
if(
SYMBOLP(BgL_aux3025z00_4880))
{ /* Llib/hash.scm 529 */
BgL_res2344z00_3338 = BgL_aux3025z00_4880; }  else 
{ 
obj_t BgL_auxz00_7351;
BgL_auxz00_7351 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)20906)), BGl_string3436z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3025z00_4880); 
FAILURE(BgL_auxz00_7351,BFALSE,BFALSE);} } 
BgL_tmpz00_7347 = BgL_res2344z00_3338; } 
BgL_test3970z00_7346 = 
(BgL_tmpz00_7347==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3970z00_7346)
{ /* Llib/hash.scm 529 */
int BgL_tmpz00_7356;
BgL_tmpz00_7356 = 
(int)(((long)2)); 
BgL_bucketsz00_1782 = 
STRUCT_REF(BgL_tablez00_91, BgL_tmpz00_7356); }  else 
{ /* Llib/hash.scm 529 */
BgL_bucketsz00_1782 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_91); } } 
{ /* Llib/hash.scm 529 */
long BgL_bucketzd2lenzd2_1783;
{ /* Llib/hash.scm 530 */
obj_t BgL_vectorz00_3339;
if(
VECTORP(BgL_bucketsz00_1782))
{ /* Llib/hash.scm 530 */
BgL_vectorz00_3339 = BgL_bucketsz00_1782; }  else 
{ 
obj_t BgL_auxz00_7362;
BgL_auxz00_7362 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)20964)), BGl_string3436z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1782); 
FAILURE(BgL_auxz00_7362,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1783 = 
VECTOR_LENGTH(BgL_vectorz00_3339); } 
{ /* Llib/hash.scm 530 */
long BgL_bucketzd2numzd2_1784;
{ /* Llib/hash.scm 531 */
long BgL_arg1523z00_1816;
{ /* Llib/hash.scm 531 */
long BgL_res2350z00_3355;
{ /* Llib/hash.scm 531 */
obj_t BgL_hashnz00_3340;
{ /* Llib/hash.scm 531 */
bool_t BgL_test3973z00_7367;
{ /* Llib/hash.scm 531 */
obj_t BgL_tmpz00_7368;
{ /* Llib/hash.scm 531 */
obj_t BgL_res2345z00_3346;
{ /* Llib/hash.scm 531 */
obj_t BgL_aux3029z00_4884;
BgL_aux3029z00_4884 = 
STRUCT_KEY(BgL_tablez00_91); 
if(
SYMBOLP(BgL_aux3029z00_4884))
{ /* Llib/hash.scm 531 */
BgL_res2345z00_3346 = BgL_aux3029z00_4884; }  else 
{ 
obj_t BgL_auxz00_7372;
BgL_auxz00_7372 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21002)), BGl_string3436z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3029z00_4884); 
FAILURE(BgL_auxz00_7372,BFALSE,BFALSE);} } 
BgL_tmpz00_7368 = BgL_res2345z00_3346; } 
BgL_test3973z00_7367 = 
(BgL_tmpz00_7368==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3973z00_7367)
{ /* Llib/hash.scm 531 */
int BgL_tmpz00_7377;
BgL_tmpz00_7377 = 
(int)(((long)4)); 
BgL_hashnz00_3340 = 
STRUCT_REF(BgL_tablez00_91, BgL_tmpz00_7377); }  else 
{ /* Llib/hash.scm 531 */
BgL_hashnz00_3340 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_91); } } 
if(
PROCEDUREP(BgL_hashnz00_3340))
{ /* Llib/hash.scm 531 */
obj_t BgL_arg1316z00_3342;
if(
PROCEDURE_CORRECT_ARITYP(BgL_hashnz00_3340, ((long)1)))
{ /* Llib/hash.scm 531 */
BgL_arg1316z00_3342 = 
PROCEDURE_ENTRY(BgL_hashnz00_3340)(BgL_hashnz00_3340, BgL_keyz00_92, BEOA); }  else 
{ /* Llib/hash.scm 531 */
FAILURE(BGl_string3437z00zz__hashz00,BGl_list3416z00zz__hashz00,BgL_hashnz00_3340);} 
{ /* Llib/hash.scm 531 */
long BgL_nz00_3348;
{ /* Llib/hash.scm 531 */
obj_t BgL_tmpz00_7390;
if(
INTEGERP(BgL_arg1316z00_3342))
{ /* Llib/hash.scm 531 */
BgL_tmpz00_7390 = BgL_arg1316z00_3342
; }  else 
{ 
obj_t BgL_auxz00_7393;
BgL_auxz00_7393 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21002)), BGl_string3436z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1316z00_3342); 
FAILURE(BgL_auxz00_7393,BFALSE,BFALSE);} 
BgL_nz00_3348 = 
(long)CINT(BgL_tmpz00_7390); } 
if(
(BgL_nz00_3348<((long)0)))
{ /* Llib/hash.scm 531 */
BgL_res2350z00_3355 = 
NEG(BgL_nz00_3348); }  else 
{ /* Llib/hash.scm 531 */
BgL_res2350z00_3355 = BgL_nz00_3348; } } }  else 
{ /* Llib/hash.scm 531 */
BgL_res2350z00_3355 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_92); } } 
BgL_arg1523z00_1816 = BgL_res2350z00_3355; } 
{ /* Llib/hash.scm 531 */
long BgL_res2356z00_3374;
{ /* Llib/hash.scm 531 */
long BgL_n1z00_3356;long BgL_n2z00_3357;
BgL_n1z00_3356 = BgL_arg1523z00_1816; 
BgL_n2z00_3357 = BgL_bucketzd2lenzd2_1783; 
{ /* Llib/hash.scm 531 */
bool_t BgL_test3979z00_7402;
{ /* Llib/hash.scm 531 */
long BgL_arg1909z00_3359;
BgL_arg1909z00_3359 = 
(((BgL_n1z00_3356) | (BgL_n2z00_3357)) & -2147483648); 
BgL_test3979z00_7402 = 
(BgL_arg1909z00_3359==((long)0)); } 
if(BgL_test3979z00_7402)
{ /* Llib/hash.scm 531 */
int32_t BgL_arg1906z00_3360;
{ /* Llib/hash.scm 531 */
int32_t BgL_arg1907z00_3361;int32_t BgL_arg1908z00_3362;
{ /* Llib/hash.scm 531 */
int32_t BgL_res2352z00_3366;
BgL_res2352z00_3366 = 
(int32_t)(BgL_n1z00_3356); 
BgL_arg1907z00_3361 = BgL_res2352z00_3366; } 
{ /* Llib/hash.scm 531 */
int32_t BgL_res2353z00_3368;
BgL_res2353z00_3368 = 
(int32_t)(BgL_n2z00_3357); 
BgL_arg1908z00_3362 = BgL_res2353z00_3368; } 
BgL_arg1906z00_3360 = 
(BgL_arg1907z00_3361%BgL_arg1908z00_3362); } 
{ /* Llib/hash.scm 531 */
long BgL_res2355z00_3373;
{ /* Llib/hash.scm 531 */
long BgL_arg2003z00_3370;
BgL_arg2003z00_3370 = 
(long)(BgL_arg1906z00_3360); 
{ /* Llib/hash.scm 531 */
long BgL_res2354z00_3372;
BgL_res2354z00_3372 = 
(long)(BgL_arg2003z00_3370); 
BgL_res2355z00_3373 = BgL_res2354z00_3372; } } 
BgL_res2356z00_3374 = BgL_res2355z00_3373; } }  else 
{ /* Llib/hash.scm 531 */
BgL_res2356z00_3374 = 
(BgL_n1z00_3356%BgL_n2z00_3357); } } } 
BgL_bucketzd2numzd2_1784 = BgL_res2356z00_3374; } } 
{ /* Llib/hash.scm 531 */
obj_t BgL_bucketz00_1785;
{ /* Llib/hash.scm 532 */
obj_t BgL_vectorz00_3375;
if(
VECTORP(BgL_bucketsz00_1782))
{ /* Llib/hash.scm 532 */
BgL_vectorz00_3375 = BgL_bucketsz00_1782; }  else 
{ 
obj_t BgL_auxz00_7413;
BgL_auxz00_7413 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21074)), BGl_string3436z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1782); 
FAILURE(BgL_auxz00_7413,BFALSE,BFALSE);} 
BgL_bucketz00_1785 = 
VECTOR_REF(BgL_vectorz00_3375,BgL_bucketzd2numzd2_1784); } 
{ /* Llib/hash.scm 532 */
obj_t BgL_maxzd2bucketzd2lenz00_1786;
{ /* Llib/hash.scm 533 */
bool_t BgL_test3981z00_7418;
{ /* Llib/hash.scm 533 */
obj_t BgL_tmpz00_7419;
{ /* Llib/hash.scm 533 */
obj_t BgL_res2357z00_3380;
{ /* Llib/hash.scm 533 */
obj_t BgL_aux3037z00_4893;
BgL_aux3037z00_4893 = 
STRUCT_KEY(BgL_tablez00_91); 
if(
SYMBOLP(BgL_aux3037z00_4893))
{ /* Llib/hash.scm 533 */
BgL_res2357z00_3380 = BgL_aux3037z00_4893; }  else 
{ 
obj_t BgL_auxz00_7423;
BgL_auxz00_7423 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21114)), BGl_string3436z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3037z00_4893); 
FAILURE(BgL_auxz00_7423,BFALSE,BFALSE);} } 
BgL_tmpz00_7419 = BgL_res2357z00_3380; } 
BgL_test3981z00_7418 = 
(BgL_tmpz00_7419==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3981z00_7418)
{ /* Llib/hash.scm 533 */
int BgL_tmpz00_7428;
BgL_tmpz00_7428 = 
(int)(((long)1)); 
BgL_maxzd2bucketzd2lenz00_1786 = 
STRUCT_REF(BgL_tablez00_91, BgL_tmpz00_7428); }  else 
{ /* Llib/hash.scm 533 */
BgL_maxzd2bucketzd2lenz00_1786 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_91); } } 
{ /* Llib/hash.scm 533 */

{ /* Llib/hash.scm 538 */
bool_t BgL_test3983z00_7432;
{ /* Llib/hash.scm 538 */
bool_t BgL_test3984z00_7433;
{ /* Llib/hash.scm 538 */
bool_t BgL_res2360z00_3389;
{ /* Llib/hash.scm 256 */
obj_t BgL_arg1382z00_3382;
{ /* Llib/hash.scm 256 */
bool_t BgL_test3985z00_7434;
{ /* Llib/hash.scm 256 */
obj_t BgL_tmpz00_7435;
{ /* Llib/hash.scm 256 */
obj_t BgL_res2358z00_3386;
{ /* Llib/hash.scm 256 */
obj_t BgL_aux3039z00_4895;
BgL_aux3039z00_4895 = 
STRUCT_KEY(BgL_tablez00_91); 
if(
SYMBOLP(BgL_aux3039z00_4895))
{ /* Llib/hash.scm 256 */
BgL_res2358z00_3386 = BgL_aux3039z00_4895; }  else 
{ 
obj_t BgL_auxz00_7439;
BgL_auxz00_7439 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)9088)), BGl_string3436z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3039z00_4895); 
FAILURE(BgL_auxz00_7439,BFALSE,BFALSE);} } 
BgL_tmpz00_7435 = BgL_res2358z00_3386; } 
BgL_test3985z00_7434 = 
(BgL_tmpz00_7435==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3985z00_7434)
{ /* Llib/hash.scm 256 */
int BgL_tmpz00_7444;
BgL_tmpz00_7444 = 
(int)(((long)5)); 
BgL_arg1382z00_3382 = 
STRUCT_REF(BgL_tablez00_91, BgL_tmpz00_7444); }  else 
{ /* Llib/hash.scm 256 */
BgL_arg1382z00_3382 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_91); } } 
{ /* Llib/hash.scm 256 */
long BgL_n1z00_3387;
{ /* Llib/hash.scm 256 */
obj_t BgL_tmpz00_7448;
if(
INTEGERP(BgL_arg1382z00_3382))
{ /* Llib/hash.scm 256 */
BgL_tmpz00_7448 = BgL_arg1382z00_3382
; }  else 
{ 
obj_t BgL_auxz00_7451;
BgL_auxz00_7451 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)9110)), BGl_string3436z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1382z00_3382); 
FAILURE(BgL_auxz00_7451,BFALSE,BFALSE);} 
BgL_n1z00_3387 = 
(long)CINT(BgL_tmpz00_7448); } 
BgL_res2360z00_3389 = 
(BgL_n1z00_3387==((long)4)); } } 
BgL_test3984z00_7433 = BgL_res2360z00_3389; } 
if(BgL_test3984z00_7433)
{ /* Llib/hash.scm 538 */
if(
STRINGP(BgL_keyz00_92))
{ /* Llib/hash.scm 538 */
BgL_test3983z00_7432 = ((bool_t)0)
; }  else 
{ /* Llib/hash.scm 538 */
BgL_test3983z00_7432 = ((bool_t)1)
; } }  else 
{ /* Llib/hash.scm 538 */
BgL_test3983z00_7432 = ((bool_t)0)
; } } 
if(BgL_test3983z00_7432)
{ /* Llib/hash.scm 538 */
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3356z00zz__hashz00, BgL_keyz00_92); }  else 
{ /* Llib/hash.scm 538 */BFALSE; } } 
if(
NULLP(BgL_bucketz00_1785))
{ /* Llib/hash.scm 540 */
{ /* Llib/hash.scm 542 */
long BgL_arg1500z00_1793;
{ /* Llib/hash.scm 542 */
obj_t BgL_arg1502z00_1794;
{ /* Llib/hash.scm 542 */
bool_t BgL_test3990z00_7462;
{ /* Llib/hash.scm 542 */
obj_t BgL_tmpz00_7463;
{ /* Llib/hash.scm 542 */
obj_t BgL_res2363z00_3395;
{ /* Llib/hash.scm 542 */
obj_t BgL_aux3043z00_4899;
BgL_aux3043z00_4899 = 
STRUCT_KEY(BgL_tablez00_91); 
if(
SYMBOLP(BgL_aux3043z00_4899))
{ /* Llib/hash.scm 542 */
BgL_res2363z00_3395 = BgL_aux3043z00_4899; }  else 
{ 
obj_t BgL_auxz00_7467;
BgL_auxz00_7467 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21401)), BGl_string3436z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3043z00_4899); 
FAILURE(BgL_auxz00_7467,BFALSE,BFALSE);} } 
BgL_tmpz00_7463 = BgL_res2363z00_3395; } 
BgL_test3990z00_7462 = 
(BgL_tmpz00_7463==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3990z00_7462)
{ /* Llib/hash.scm 542 */
int BgL_tmpz00_7472;
BgL_tmpz00_7472 = 
(int)(((long)0)); 
BgL_arg1502z00_1794 = 
STRUCT_REF(BgL_tablez00_91, BgL_tmpz00_7472); }  else 
{ /* Llib/hash.scm 542 */
BgL_arg1502z00_1794 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_91); } } 
{ /* Llib/hash.scm 542 */
long BgL_za71za7_3396;
{ /* Llib/hash.scm 542 */
obj_t BgL_tmpz00_7476;
if(
INTEGERP(BgL_arg1502z00_1794))
{ /* Llib/hash.scm 542 */
BgL_tmpz00_7476 = BgL_arg1502z00_1794
; }  else 
{ 
obj_t BgL_auxz00_7479;
BgL_auxz00_7479 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21423)), BGl_string3436z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1502z00_1794); 
FAILURE(BgL_auxz00_7479,BFALSE,BFALSE);} 
BgL_za71za7_3396 = 
(long)CINT(BgL_tmpz00_7476); } 
BgL_arg1500z00_1793 = 
(BgL_za71za7_3396+((long)1)); } } 
{ /* Llib/hash.scm 542 */
bool_t BgL_test3993z00_7485;
{ /* Llib/hash.scm 542 */
obj_t BgL_tmpz00_7486;
{ /* Llib/hash.scm 542 */
obj_t BgL_res2365z00_3401;
{ /* Llib/hash.scm 542 */
obj_t BgL_aux3047z00_4903;
BgL_aux3047z00_4903 = 
STRUCT_KEY(BgL_tablez00_91); 
if(
SYMBOLP(BgL_aux3047z00_4903))
{ /* Llib/hash.scm 542 */
BgL_res2365z00_3401 = BgL_aux3047z00_4903; }  else 
{ 
obj_t BgL_auxz00_7490;
BgL_auxz00_7490 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21368)), BGl_string3436z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3047z00_4903); 
FAILURE(BgL_auxz00_7490,BFALSE,BFALSE);} } 
BgL_tmpz00_7486 = BgL_res2365z00_3401; } 
BgL_test3993z00_7485 = 
(BgL_tmpz00_7486==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3993z00_7485)
{ /* Llib/hash.scm 542 */
obj_t BgL_auxz00_7497;int BgL_tmpz00_7495;
BgL_auxz00_7497 = 
BINT(BgL_arg1500z00_1793); 
BgL_tmpz00_7495 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_91, BgL_tmpz00_7495, BgL_auxz00_7497); }  else 
{ /* Llib/hash.scm 542 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_91); } } } 
{ /* Llib/hash.scm 543 */
obj_t BgL_arg1505z00_1795;
{ /* Llib/hash.scm 543 */
obj_t BgL_arg1506z00_1796;
BgL_arg1506z00_1796 = 
MAKE_YOUNG_PAIR(BgL_keyz00_92, BgL_objz00_93); 
{ /* Llib/hash.scm 543 */
obj_t BgL_list1507z00_1797;
BgL_list1507z00_1797 = 
MAKE_YOUNG_PAIR(BgL_arg1506z00_1796, BNIL); 
BgL_arg1505z00_1795 = BgL_list1507z00_1797; } } 
{ /* Llib/hash.scm 543 */
obj_t BgL_vectorz00_3403;
if(
VECTORP(BgL_bucketsz00_1782))
{ /* Llib/hash.scm 543 */
BgL_vectorz00_3403 = BgL_bucketsz00_1782; }  else 
{ 
obj_t BgL_auxz00_7505;
BgL_auxz00_7505 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21451)), BGl_string3436z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1782); 
FAILURE(BgL_auxz00_7505,BFALSE,BFALSE);} 
VECTOR_SET(BgL_vectorz00_3403,BgL_bucketzd2numzd2_1784,BgL_arg1505z00_1795); } } 
return BgL_objz00_93;}  else 
{ 
obj_t BgL_buckz00_1799;long BgL_countz00_1800;
BgL_buckz00_1799 = BgL_bucketz00_1785; 
BgL_countz00_1800 = ((long)0); 
BgL_zc3z04anonymousza31508ze3z87_1801:
if(
NULLP(BgL_buckz00_1799))
{ /* Llib/hash.scm 548 */
{ /* Llib/hash.scm 549 */
long BgL_arg1510z00_1803;
{ /* Llib/hash.scm 549 */
obj_t BgL_arg1511z00_1804;
{ /* Llib/hash.scm 549 */
bool_t BgL_test3997z00_7512;
{ /* Llib/hash.scm 549 */
obj_t BgL_tmpz00_7513;
{ /* Llib/hash.scm 549 */
obj_t BgL_res2368z00_3409;
{ /* Llib/hash.scm 549 */
obj_t BgL_aux3051z00_4907;
BgL_aux3051z00_4907 = 
STRUCT_KEY(BgL_tablez00_91); 
if(
SYMBOLP(BgL_aux3051z00_4907))
{ /* Llib/hash.scm 549 */
BgL_res2368z00_3409 = BgL_aux3051z00_4907; }  else 
{ 
obj_t BgL_auxz00_7517;
BgL_auxz00_7517 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21614)), BGl_string3370z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3051z00_4907); 
FAILURE(BgL_auxz00_7517,BFALSE,BFALSE);} } 
BgL_tmpz00_7513 = BgL_res2368z00_3409; } 
BgL_test3997z00_7512 = 
(BgL_tmpz00_7513==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test3997z00_7512)
{ /* Llib/hash.scm 549 */
int BgL_tmpz00_7522;
BgL_tmpz00_7522 = 
(int)(((long)0)); 
BgL_arg1511z00_1804 = 
STRUCT_REF(BgL_tablez00_91, BgL_tmpz00_7522); }  else 
{ /* Llib/hash.scm 549 */
BgL_arg1511z00_1804 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_91); } } 
{ /* Llib/hash.scm 549 */
long BgL_za71za7_3410;
{ /* Llib/hash.scm 549 */
obj_t BgL_tmpz00_7526;
if(
INTEGERP(BgL_arg1511z00_1804))
{ /* Llib/hash.scm 549 */
BgL_tmpz00_7526 = BgL_arg1511z00_1804
; }  else 
{ 
obj_t BgL_auxz00_7529;
BgL_auxz00_7529 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21636)), BGl_string3370z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1511z00_1804); 
FAILURE(BgL_auxz00_7529,BFALSE,BFALSE);} 
BgL_za71za7_3410 = 
(long)CINT(BgL_tmpz00_7526); } 
BgL_arg1510z00_1803 = 
(BgL_za71za7_3410+((long)1)); } } 
{ /* Llib/hash.scm 549 */
bool_t BgL_test4000z00_7535;
{ /* Llib/hash.scm 549 */
obj_t BgL_tmpz00_7536;
{ /* Llib/hash.scm 549 */
obj_t BgL_res2370z00_3415;
{ /* Llib/hash.scm 549 */
obj_t BgL_aux3055z00_4911;
BgL_aux3055z00_4911 = 
STRUCT_KEY(BgL_tablez00_91); 
if(
SYMBOLP(BgL_aux3055z00_4911))
{ /* Llib/hash.scm 549 */
BgL_res2370z00_3415 = BgL_aux3055z00_4911; }  else 
{ 
obj_t BgL_auxz00_7540;
BgL_auxz00_7540 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21581)), BGl_string3370z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3055z00_4911); 
FAILURE(BgL_auxz00_7540,BFALSE,BFALSE);} } 
BgL_tmpz00_7536 = BgL_res2370z00_3415; } 
BgL_test4000z00_7535 = 
(BgL_tmpz00_7536==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4000z00_7535)
{ /* Llib/hash.scm 549 */
obj_t BgL_auxz00_7547;int BgL_tmpz00_7545;
BgL_auxz00_7547 = 
BINT(BgL_arg1510z00_1803); 
BgL_tmpz00_7545 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_91, BgL_tmpz00_7545, BgL_auxz00_7547); }  else 
{ /* Llib/hash.scm 549 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_91); } } } 
{ /* Llib/hash.scm 550 */
obj_t BgL_arg1512z00_1805;
{ /* Llib/hash.scm 550 */
obj_t BgL_arg1513z00_1806;
BgL_arg1513z00_1806 = 
MAKE_YOUNG_PAIR(BgL_keyz00_92, BgL_objz00_93); 
BgL_arg1512z00_1805 = 
MAKE_YOUNG_PAIR(BgL_arg1513z00_1806, BgL_bucketz00_1785); } 
{ /* Llib/hash.scm 550 */
obj_t BgL_vectorz00_3416;
if(
VECTORP(BgL_bucketsz00_1782))
{ /* Llib/hash.scm 550 */
BgL_vectorz00_3416 = BgL_bucketsz00_1782; }  else 
{ 
obj_t BgL_auxz00_7555;
BgL_auxz00_7555 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21661)), BGl_string3370z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1782); 
FAILURE(BgL_auxz00_7555,BFALSE,BFALSE);} 
VECTOR_SET(BgL_vectorz00_3416,BgL_bucketzd2numzd2_1784,BgL_arg1512z00_1805); } } 
{ /* Llib/hash.scm 551 */
bool_t BgL_test4003z00_7560;
{ /* Llib/hash.scm 551 */
long BgL_n2z00_3419;
{ /* Llib/hash.scm 551 */
obj_t BgL_tmpz00_7561;
if(
INTEGERP(BgL_maxzd2bucketzd2lenz00_1786))
{ /* Llib/hash.scm 551 */
BgL_tmpz00_7561 = BgL_maxzd2bucketzd2lenz00_1786
; }  else 
{ 
obj_t BgL_auxz00_7564;
BgL_auxz00_7564 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21730)), BGl_string3370z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_maxzd2bucketzd2lenz00_1786); 
FAILURE(BgL_auxz00_7564,BFALSE,BFALSE);} 
BgL_n2z00_3419 = 
(long)CINT(BgL_tmpz00_7561); } 
BgL_test4003z00_7560 = 
(BgL_countz00_1800>BgL_n2z00_3419); } 
if(BgL_test4003z00_7560)
{ /* Llib/hash.scm 551 */
BGl_plainzd2hashtablezd2expandz12z12zz__hashz00(BgL_tablez00_91); }  else 
{ /* Llib/hash.scm 551 */BFALSE; } } 
return BgL_objz00_93;}  else 
{ /* Llib/hash.scm 554 */
bool_t BgL_test4005z00_7571;
{ /* Llib/hash.scm 554 */
obj_t BgL_arg1521z00_1814;
{ /* Llib/hash.scm 554 */
obj_t BgL_pairz00_3421;
if(
PAIRP(BgL_buckz00_1799))
{ /* Llib/hash.scm 554 */
BgL_pairz00_3421 = BgL_buckz00_1799; }  else 
{ 
obj_t BgL_auxz00_7574;
BgL_auxz00_7574 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21826)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_buckz00_1799); 
FAILURE(BgL_auxz00_7574,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 554 */
obj_t BgL_pairz00_3424;
{ /* Llib/hash.scm 554 */
obj_t BgL_aux3063z00_4919;
BgL_aux3063z00_4919 = 
CAR(BgL_pairz00_3421); 
if(
PAIRP(BgL_aux3063z00_4919))
{ /* Llib/hash.scm 554 */
BgL_pairz00_3424 = BgL_aux3063z00_4919; }  else 
{ 
obj_t BgL_auxz00_7581;
BgL_auxz00_7581 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21820)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_aux3063z00_4919); 
FAILURE(BgL_auxz00_7581,BFALSE,BFALSE);} } 
BgL_arg1521z00_1814 = 
CAR(BgL_pairz00_3424); } } 
{ /* Llib/hash.scm 554 */
obj_t BgL_eqtz00_3425;
{ /* Llib/hash.scm 554 */
bool_t BgL_test4008z00_7586;
{ /* Llib/hash.scm 554 */
obj_t BgL_tmpz00_7587;
{ /* Llib/hash.scm 554 */
obj_t BgL_res2372z00_3433;
{ /* Llib/hash.scm 554 */
obj_t BgL_aux3065z00_4921;
BgL_aux3065z00_4921 = 
STRUCT_KEY(BgL_tablez00_91); 
if(
SYMBOLP(BgL_aux3065z00_4921))
{ /* Llib/hash.scm 554 */
BgL_res2372z00_3433 = BgL_aux3065z00_4921; }  else 
{ 
obj_t BgL_auxz00_7591;
BgL_auxz00_7591 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21796)), BGl_string3370z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3065z00_4921); 
FAILURE(BgL_auxz00_7591,BFALSE,BFALSE);} } 
BgL_tmpz00_7587 = BgL_res2372z00_3433; } 
BgL_test4008z00_7586 = 
(BgL_tmpz00_7587==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4008z00_7586)
{ /* Llib/hash.scm 554 */
int BgL_tmpz00_7596;
BgL_tmpz00_7596 = 
(int)(((long)3)); 
BgL_eqtz00_3425 = 
STRUCT_REF(BgL_tablez00_91, BgL_tmpz00_7596); }  else 
{ /* Llib/hash.scm 554 */
BgL_eqtz00_3425 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_91); } } 
if(
PROCEDUREP(BgL_eqtz00_3425))
{ /* Llib/hash.scm 554 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_eqtz00_3425, ((long)2)))
{ /* Llib/hash.scm 554 */
BgL_test4005z00_7571 = 
CBOOL(
PROCEDURE_ENTRY(BgL_eqtz00_3425)(BgL_eqtz00_3425, BgL_arg1521z00_1814, BgL_keyz00_92, BEOA))
; }  else 
{ /* Llib/hash.scm 554 */
FAILURE(BGl_string3421z00zz__hashz00,BGl_list3439z00zz__hashz00,BgL_eqtz00_3425);} }  else 
{ /* Llib/hash.scm 554 */
if(
(BgL_arg1521z00_1814==BgL_keyz00_92))
{ /* Llib/hash.scm 554 */
BgL_test4005z00_7571 = ((bool_t)1)
; }  else 
{ /* Llib/hash.scm 554 */
if(
STRINGP(BgL_arg1521z00_1814))
{ /* Llib/hash.scm 554 */
if(
STRINGP(BgL_keyz00_92))
{ /* Llib/hash.scm 554 */
bool_t BgL_res2380z00_3452;
{ /* Llib/hash.scm 554 */
long BgL_l1z00_3439;
BgL_l1z00_3439 = 
STRING_LENGTH(BgL_arg1521z00_1814); 
if(
(BgL_l1z00_3439==
STRING_LENGTH(BgL_keyz00_92)))
{ /* Llib/hash.scm 554 */
int BgL_arg1788z00_3442;
{ /* Llib/hash.scm 554 */
char * BgL_auxz00_7623;char * BgL_tmpz00_7621;
BgL_auxz00_7623 = 
BSTRING_TO_STRING(BgL_keyz00_92); 
BgL_tmpz00_7621 = 
BSTRING_TO_STRING(BgL_arg1521z00_1814); 
BgL_arg1788z00_3442 = 
memcmp(BgL_tmpz00_7621, BgL_auxz00_7623, BgL_l1z00_3439); } 
BgL_res2380z00_3452 = 
(
(long)(BgL_arg1788z00_3442)==((long)0)); }  else 
{ /* Llib/hash.scm 554 */
BgL_res2380z00_3452 = ((bool_t)0); } } 
BgL_test4005z00_7571 = BgL_res2380z00_3452; }  else 
{ /* Llib/hash.scm 554 */
BgL_test4005z00_7571 = ((bool_t)0)
; } }  else 
{ /* Llib/hash.scm 554 */
BgL_test4005z00_7571 = ((bool_t)0)
; } } } } } 
if(BgL_test4005z00_7571)
{ /* Llib/hash.scm 555 */
obj_t BgL_oldzd2objzd2_1810;
{ /* Llib/hash.scm 555 */
obj_t BgL_pairz00_3453;
if(
PAIRP(BgL_buckz00_1799))
{ /* Llib/hash.scm 555 */
BgL_pairz00_3453 = BgL_buckz00_1799; }  else 
{ 
obj_t BgL_auxz00_7630;
BgL_auxz00_7630 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21861)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_buckz00_1799); 
FAILURE(BgL_auxz00_7630,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 555 */
obj_t BgL_pairz00_3456;
{ /* Llib/hash.scm 555 */
obj_t BgL_aux3071z00_4928;
BgL_aux3071z00_4928 = 
CAR(BgL_pairz00_3453); 
if(
PAIRP(BgL_aux3071z00_4928))
{ /* Llib/hash.scm 555 */
BgL_pairz00_3456 = BgL_aux3071z00_4928; }  else 
{ 
obj_t BgL_auxz00_7637;
BgL_auxz00_7637 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21855)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_aux3071z00_4928); 
FAILURE(BgL_auxz00_7637,BFALSE,BFALSE);} } 
BgL_oldzd2objzd2_1810 = 
CDR(BgL_pairz00_3456); } } 
{ /* Llib/hash.scm 556 */
obj_t BgL_arg1518z00_1811;
{ /* Llib/hash.scm 556 */
obj_t BgL_pairz00_3457;
if(
PAIRP(BgL_buckz00_1799))
{ /* Llib/hash.scm 556 */
BgL_pairz00_3457 = BgL_buckz00_1799; }  else 
{ 
obj_t BgL_auxz00_7644;
BgL_auxz00_7644 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21890)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_buckz00_1799); 
FAILURE(BgL_auxz00_7644,BFALSE,BFALSE);} 
BgL_arg1518z00_1811 = 
CAR(BgL_pairz00_3457); } 
{ /* Llib/hash.scm 556 */
obj_t BgL_pairz00_3458;
if(
PAIRP(BgL_arg1518z00_1811))
{ /* Llib/hash.scm 556 */
BgL_pairz00_3458 = BgL_arg1518z00_1811; }  else 
{ 
obj_t BgL_auxz00_7651;
BgL_auxz00_7651 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21894)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_arg1518z00_1811); 
FAILURE(BgL_auxz00_7651,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_3458, BgL_objz00_93); } } 
return BgL_oldzd2objzd2_1810;}  else 
{ /* Llib/hash.scm 559 */
obj_t BgL_arg1519z00_1812;long BgL_arg1520z00_1813;
{ /* Llib/hash.scm 559 */
obj_t BgL_pairz00_3459;
if(
PAIRP(BgL_buckz00_1799))
{ /* Llib/hash.scm 559 */
BgL_pairz00_3459 = BgL_buckz00_1799; }  else 
{ 
obj_t BgL_auxz00_7658;
BgL_auxz00_7658 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)21939)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_buckz00_1799); 
FAILURE(BgL_auxz00_7658,BFALSE,BFALSE);} 
BgL_arg1519z00_1812 = 
CDR(BgL_pairz00_3459); } 
BgL_arg1520z00_1813 = 
(BgL_countz00_1800+((long)1)); 
{ 
long BgL_countz00_7665;obj_t BgL_buckz00_7664;
BgL_buckz00_7664 = BgL_arg1519z00_1812; 
BgL_countz00_7665 = BgL_arg1520z00_1813; 
BgL_countz00_1800 = BgL_countz00_7665; 
BgL_buckz00_1799 = BgL_buckz00_7664; 
goto BgL_zc3z04anonymousza31508ze3z87_1801;} } } } } } } } } } } 

}



/* hashtable-update! */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2updatez12zc0zz__hashz00(obj_t BgL_tablez00_94, obj_t BgL_keyz00_95, obj_t BgL_procz00_96, obj_t BgL_objz00_97)
{
{ /* Llib/hash.scm 564 */
if(
BGl_hashtablezd2weakzf3z21zz__hashz00(BgL_tablez00_94))
{ /* Llib/hash.scm 565 */
return 
BGl_weakzd2hashtablezd2updatez12z12zz__weakhashz00(BgL_tablez00_94, BgL_keyz00_95, BgL_procz00_96, BgL_objz00_97);}  else 
{ /* Llib/hash.scm 565 */
return 
BGl_plainzd2hashtablezd2updatez12z12zz__hashz00(BgL_tablez00_94, BgL_keyz00_95, BgL_procz00_96, BgL_objz00_97);} } 

}



/* &hashtable-update! */
obj_t BGl_z62hashtablezd2updatez12za2zz__hashz00(obj_t BgL_envz00_4506, obj_t BgL_tablez00_4507, obj_t BgL_keyz00_4508, obj_t BgL_procz00_4509, obj_t BgL_objz00_4510)
{
{ /* Llib/hash.scm 564 */
{ /* Llib/hash.scm 565 */
obj_t BgL_auxz00_7677;obj_t BgL_auxz00_7670;
if(
PROCEDUREP(BgL_procz00_4509))
{ /* Llib/hash.scm 565 */
BgL_auxz00_7677 = BgL_procz00_4509
; }  else 
{ 
obj_t BgL_auxz00_7680;
BgL_auxz00_7680 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)22263)), BGl_string3442z00zz__hashz00, BGl_string3378z00zz__hashz00, BgL_procz00_4509); 
FAILURE(BgL_auxz00_7680,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_tablez00_4507))
{ /* Llib/hash.scm 565 */
BgL_auxz00_7670 = BgL_tablez00_4507
; }  else 
{ 
obj_t BgL_auxz00_7673;
BgL_auxz00_7673 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)22263)), BGl_string3442z00zz__hashz00, BGl_string3362z00zz__hashz00, BgL_tablez00_4507); 
FAILURE(BgL_auxz00_7673,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2updatez12zc0zz__hashz00(BgL_auxz00_7670, BgL_keyz00_4508, BgL_auxz00_7677, BgL_objz00_4510);} } 

}



/* plain-hashtable-update! */
obj_t BGl_plainzd2hashtablezd2updatez12z12zz__hashz00(obj_t BgL_tablez00_98, obj_t BgL_keyz00_99, obj_t BgL_procz00_100, obj_t BgL_objz00_101)
{
{ /* Llib/hash.scm 572 */
{ /* Llib/hash.scm 573 */
obj_t BgL_bucketsz00_1818;
{ /* Llib/hash.scm 573 */
bool_t BgL_test4024z00_7685;
{ /* Llib/hash.scm 573 */
obj_t BgL_tmpz00_7686;
{ /* Llib/hash.scm 573 */
obj_t BgL_res2382z00_3466;
{ /* Llib/hash.scm 573 */
obj_t BgL_aux3083z00_4940;
BgL_aux3083z00_4940 = 
STRUCT_KEY(BgL_tablez00_98); 
if(
SYMBOLP(BgL_aux3083z00_4940))
{ /* Llib/hash.scm 573 */
BgL_res2382z00_3466 = BgL_aux3083z00_4940; }  else 
{ 
obj_t BgL_auxz00_7690;
BgL_auxz00_7690 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)22715)), BGl_string3443z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3083z00_4940); 
FAILURE(BgL_auxz00_7690,BFALSE,BFALSE);} } 
BgL_tmpz00_7686 = BgL_res2382z00_3466; } 
BgL_test4024z00_7685 = 
(BgL_tmpz00_7686==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4024z00_7685)
{ /* Llib/hash.scm 573 */
int BgL_tmpz00_7695;
BgL_tmpz00_7695 = 
(int)(((long)2)); 
BgL_bucketsz00_1818 = 
STRUCT_REF(BgL_tablez00_98, BgL_tmpz00_7695); }  else 
{ /* Llib/hash.scm 573 */
BgL_bucketsz00_1818 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_98); } } 
{ /* Llib/hash.scm 573 */
long BgL_bucketzd2lenzd2_1819;
{ /* Llib/hash.scm 574 */
obj_t BgL_vectorz00_3467;
if(
VECTORP(BgL_bucketsz00_1818))
{ /* Llib/hash.scm 574 */
BgL_vectorz00_3467 = BgL_bucketsz00_1818; }  else 
{ 
obj_t BgL_auxz00_7701;
BgL_auxz00_7701 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)22773)), BGl_string3443z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1818); 
FAILURE(BgL_auxz00_7701,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1819 = 
VECTOR_LENGTH(BgL_vectorz00_3467); } 
{ /* Llib/hash.scm 574 */
long BgL_bucketzd2numzd2_1820;
{ /* Llib/hash.scm 575 */
long BgL_arg1552z00_1848;
{ /* Llib/hash.scm 575 */
long BgL_res2388z00_3483;
{ /* Llib/hash.scm 575 */
obj_t BgL_hashnz00_3468;
{ /* Llib/hash.scm 575 */
bool_t BgL_test4027z00_7706;
{ /* Llib/hash.scm 575 */
obj_t BgL_tmpz00_7707;
{ /* Llib/hash.scm 575 */
obj_t BgL_res2383z00_3474;
{ /* Llib/hash.scm 575 */
obj_t BgL_aux3087z00_4944;
BgL_aux3087z00_4944 = 
STRUCT_KEY(BgL_tablez00_98); 
if(
SYMBOLP(BgL_aux3087z00_4944))
{ /* Llib/hash.scm 575 */
BgL_res2383z00_3474 = BgL_aux3087z00_4944; }  else 
{ 
obj_t BgL_auxz00_7711;
BgL_auxz00_7711 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)22811)), BGl_string3443z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3087z00_4944); 
FAILURE(BgL_auxz00_7711,BFALSE,BFALSE);} } 
BgL_tmpz00_7707 = BgL_res2383z00_3474; } 
BgL_test4027z00_7706 = 
(BgL_tmpz00_7707==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4027z00_7706)
{ /* Llib/hash.scm 575 */
int BgL_tmpz00_7716;
BgL_tmpz00_7716 = 
(int)(((long)4)); 
BgL_hashnz00_3468 = 
STRUCT_REF(BgL_tablez00_98, BgL_tmpz00_7716); }  else 
{ /* Llib/hash.scm 575 */
BgL_hashnz00_3468 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_98); } } 
if(
PROCEDUREP(BgL_hashnz00_3468))
{ /* Llib/hash.scm 575 */
obj_t BgL_arg1316z00_3470;
if(
PROCEDURE_CORRECT_ARITYP(BgL_hashnz00_3468, ((long)1)))
{ /* Llib/hash.scm 575 */
BgL_arg1316z00_3470 = 
PROCEDURE_ENTRY(BgL_hashnz00_3468)(BgL_hashnz00_3468, BgL_keyz00_99, BEOA); }  else 
{ /* Llib/hash.scm 575 */
FAILURE(BGl_string3444z00zz__hashz00,BGl_list3416z00zz__hashz00,BgL_hashnz00_3468);} 
{ /* Llib/hash.scm 575 */
long BgL_nz00_3476;
{ /* Llib/hash.scm 575 */
obj_t BgL_tmpz00_7729;
if(
INTEGERP(BgL_arg1316z00_3470))
{ /* Llib/hash.scm 575 */
BgL_tmpz00_7729 = BgL_arg1316z00_3470
; }  else 
{ 
obj_t BgL_auxz00_7732;
BgL_auxz00_7732 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)22811)), BGl_string3443z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1316z00_3470); 
FAILURE(BgL_auxz00_7732,BFALSE,BFALSE);} 
BgL_nz00_3476 = 
(long)CINT(BgL_tmpz00_7729); } 
if(
(BgL_nz00_3476<((long)0)))
{ /* Llib/hash.scm 575 */
BgL_res2388z00_3483 = 
NEG(BgL_nz00_3476); }  else 
{ /* Llib/hash.scm 575 */
BgL_res2388z00_3483 = BgL_nz00_3476; } } }  else 
{ /* Llib/hash.scm 575 */
BgL_res2388z00_3483 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_99); } } 
BgL_arg1552z00_1848 = BgL_res2388z00_3483; } 
{ /* Llib/hash.scm 575 */
long BgL_res2394z00_3502;
{ /* Llib/hash.scm 575 */
long BgL_n1z00_3484;long BgL_n2z00_3485;
BgL_n1z00_3484 = BgL_arg1552z00_1848; 
BgL_n2z00_3485 = BgL_bucketzd2lenzd2_1819; 
{ /* Llib/hash.scm 575 */
bool_t BgL_test4033z00_7741;
{ /* Llib/hash.scm 575 */
long BgL_arg1909z00_3487;
BgL_arg1909z00_3487 = 
(((BgL_n1z00_3484) | (BgL_n2z00_3485)) & -2147483648); 
BgL_test4033z00_7741 = 
(BgL_arg1909z00_3487==((long)0)); } 
if(BgL_test4033z00_7741)
{ /* Llib/hash.scm 575 */
int32_t BgL_arg1906z00_3488;
{ /* Llib/hash.scm 575 */
int32_t BgL_arg1907z00_3489;int32_t BgL_arg1908z00_3490;
{ /* Llib/hash.scm 575 */
int32_t BgL_res2390z00_3494;
BgL_res2390z00_3494 = 
(int32_t)(BgL_n1z00_3484); 
BgL_arg1907z00_3489 = BgL_res2390z00_3494; } 
{ /* Llib/hash.scm 575 */
int32_t BgL_res2391z00_3496;
BgL_res2391z00_3496 = 
(int32_t)(BgL_n2z00_3485); 
BgL_arg1908z00_3490 = BgL_res2391z00_3496; } 
BgL_arg1906z00_3488 = 
(BgL_arg1907z00_3489%BgL_arg1908z00_3490); } 
{ /* Llib/hash.scm 575 */
long BgL_res2393z00_3501;
{ /* Llib/hash.scm 575 */
long BgL_arg2003z00_3498;
BgL_arg2003z00_3498 = 
(long)(BgL_arg1906z00_3488); 
{ /* Llib/hash.scm 575 */
long BgL_res2392z00_3500;
BgL_res2392z00_3500 = 
(long)(BgL_arg2003z00_3498); 
BgL_res2393z00_3501 = BgL_res2392z00_3500; } } 
BgL_res2394z00_3502 = BgL_res2393z00_3501; } }  else 
{ /* Llib/hash.scm 575 */
BgL_res2394z00_3502 = 
(BgL_n1z00_3484%BgL_n2z00_3485); } } } 
BgL_bucketzd2numzd2_1820 = BgL_res2394z00_3502; } } 
{ /* Llib/hash.scm 575 */
obj_t BgL_bucketz00_1821;
{ /* Llib/hash.scm 576 */
obj_t BgL_vectorz00_3503;
if(
VECTORP(BgL_bucketsz00_1818))
{ /* Llib/hash.scm 576 */
BgL_vectorz00_3503 = BgL_bucketsz00_1818; }  else 
{ 
obj_t BgL_auxz00_7752;
BgL_auxz00_7752 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)22883)), BGl_string3443z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1818); 
FAILURE(BgL_auxz00_7752,BFALSE,BFALSE);} 
BgL_bucketz00_1821 = 
VECTOR_REF(BgL_vectorz00_3503,BgL_bucketzd2numzd2_1820); } 
{ /* Llib/hash.scm 576 */
obj_t BgL_maxzd2bucketzd2lenz00_1822;
{ /* Llib/hash.scm 577 */
bool_t BgL_test4035z00_7757;
{ /* Llib/hash.scm 577 */
obj_t BgL_tmpz00_7758;
{ /* Llib/hash.scm 577 */
obj_t BgL_res2395z00_3508;
{ /* Llib/hash.scm 577 */
obj_t BgL_aux3095z00_4953;
BgL_aux3095z00_4953 = 
STRUCT_KEY(BgL_tablez00_98); 
if(
SYMBOLP(BgL_aux3095z00_4953))
{ /* Llib/hash.scm 577 */
BgL_res2395z00_3508 = BgL_aux3095z00_4953; }  else 
{ 
obj_t BgL_auxz00_7762;
BgL_auxz00_7762 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)22923)), BGl_string3443z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3095z00_4953); 
FAILURE(BgL_auxz00_7762,BFALSE,BFALSE);} } 
BgL_tmpz00_7758 = BgL_res2395z00_3508; } 
BgL_test4035z00_7757 = 
(BgL_tmpz00_7758==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4035z00_7757)
{ /* Llib/hash.scm 577 */
int BgL_tmpz00_7767;
BgL_tmpz00_7767 = 
(int)(((long)1)); 
BgL_maxzd2bucketzd2lenz00_1822 = 
STRUCT_REF(BgL_tablez00_98, BgL_tmpz00_7767); }  else 
{ /* Llib/hash.scm 577 */
BgL_maxzd2bucketzd2lenz00_1822 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_98); } } 
{ /* Llib/hash.scm 577 */

if(
NULLP(BgL_bucketz00_1821))
{ /* Llib/hash.scm 578 */
{ /* Llib/hash.scm 580 */
long BgL_arg1526z00_1824;
{ /* Llib/hash.scm 580 */
obj_t BgL_arg1528z00_1825;
{ /* Llib/hash.scm 580 */
bool_t BgL_test4038z00_7773;
{ /* Llib/hash.scm 580 */
obj_t BgL_tmpz00_7774;
{ /* Llib/hash.scm 580 */
obj_t BgL_res2397z00_3513;
{ /* Llib/hash.scm 580 */
obj_t BgL_aux3097z00_4955;
BgL_aux3097z00_4955 = 
STRUCT_KEY(BgL_tablez00_98); 
if(
SYMBOLP(BgL_aux3097z00_4955))
{ /* Llib/hash.scm 580 */
BgL_res2397z00_3513 = BgL_aux3097z00_4955; }  else 
{ 
obj_t BgL_auxz00_7778;
BgL_auxz00_7778 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)23033)), BGl_string3443z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3097z00_4955); 
FAILURE(BgL_auxz00_7778,BFALSE,BFALSE);} } 
BgL_tmpz00_7774 = BgL_res2397z00_3513; } 
BgL_test4038z00_7773 = 
(BgL_tmpz00_7774==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4038z00_7773)
{ /* Llib/hash.scm 580 */
int BgL_tmpz00_7783;
BgL_tmpz00_7783 = 
(int)(((long)0)); 
BgL_arg1528z00_1825 = 
STRUCT_REF(BgL_tablez00_98, BgL_tmpz00_7783); }  else 
{ /* Llib/hash.scm 580 */
BgL_arg1528z00_1825 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_98); } } 
{ /* Llib/hash.scm 580 */
long BgL_za71za7_3514;
{ /* Llib/hash.scm 580 */
obj_t BgL_tmpz00_7787;
if(
INTEGERP(BgL_arg1528z00_1825))
{ /* Llib/hash.scm 580 */
BgL_tmpz00_7787 = BgL_arg1528z00_1825
; }  else 
{ 
obj_t BgL_auxz00_7790;
BgL_auxz00_7790 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)23055)), BGl_string3443z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1528z00_1825); 
FAILURE(BgL_auxz00_7790,BFALSE,BFALSE);} 
BgL_za71za7_3514 = 
(long)CINT(BgL_tmpz00_7787); } 
BgL_arg1526z00_1824 = 
(BgL_za71za7_3514+((long)1)); } } 
{ /* Llib/hash.scm 580 */
bool_t BgL_test4041z00_7796;
{ /* Llib/hash.scm 580 */
obj_t BgL_tmpz00_7797;
{ /* Llib/hash.scm 580 */
obj_t BgL_res2399z00_3519;
{ /* Llib/hash.scm 580 */
obj_t BgL_aux3101z00_4959;
BgL_aux3101z00_4959 = 
STRUCT_KEY(BgL_tablez00_98); 
if(
SYMBOLP(BgL_aux3101z00_4959))
{ /* Llib/hash.scm 580 */
BgL_res2399z00_3519 = BgL_aux3101z00_4959; }  else 
{ 
obj_t BgL_auxz00_7801;
BgL_auxz00_7801 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)23000)), BGl_string3443z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3101z00_4959); 
FAILURE(BgL_auxz00_7801,BFALSE,BFALSE);} } 
BgL_tmpz00_7797 = BgL_res2399z00_3519; } 
BgL_test4041z00_7796 = 
(BgL_tmpz00_7797==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4041z00_7796)
{ /* Llib/hash.scm 580 */
obj_t BgL_auxz00_7808;int BgL_tmpz00_7806;
BgL_auxz00_7808 = 
BINT(BgL_arg1526z00_1824); 
BgL_tmpz00_7806 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_98, BgL_tmpz00_7806, BgL_auxz00_7808); }  else 
{ /* Llib/hash.scm 580 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_98); } } } 
{ /* Llib/hash.scm 581 */
obj_t BgL_arg1530z00_1826;
{ /* Llib/hash.scm 581 */
obj_t BgL_arg1531z00_1827;
BgL_arg1531z00_1827 = 
MAKE_YOUNG_PAIR(BgL_keyz00_99, BgL_objz00_101); 
{ /* Llib/hash.scm 581 */
obj_t BgL_list1532z00_1828;
BgL_list1532z00_1828 = 
MAKE_YOUNG_PAIR(BgL_arg1531z00_1827, BNIL); 
BgL_arg1530z00_1826 = BgL_list1532z00_1828; } } 
{ /* Llib/hash.scm 581 */
obj_t BgL_vectorz00_3521;
if(
VECTORP(BgL_bucketsz00_1818))
{ /* Llib/hash.scm 581 */
BgL_vectorz00_3521 = BgL_bucketsz00_1818; }  else 
{ 
obj_t BgL_auxz00_7816;
BgL_auxz00_7816 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)23083)), BGl_string3443z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1818); 
FAILURE(BgL_auxz00_7816,BFALSE,BFALSE);} 
VECTOR_SET(BgL_vectorz00_3521,BgL_bucketzd2numzd2_1820,BgL_arg1530z00_1826); } } 
return BgL_objz00_101;}  else 
{ 
obj_t BgL_buckz00_1830;long BgL_countz00_1831;
BgL_buckz00_1830 = BgL_bucketz00_1821; 
BgL_countz00_1831 = ((long)0); 
BgL_zc3z04anonymousza31533ze3z87_1832:
if(
NULLP(BgL_buckz00_1830))
{ /* Llib/hash.scm 586 */
{ /* Llib/hash.scm 587 */
long BgL_arg1535z00_1834;
{ /* Llib/hash.scm 587 */
obj_t BgL_arg1536z00_1835;
{ /* Llib/hash.scm 587 */
bool_t BgL_test4045z00_7823;
{ /* Llib/hash.scm 587 */
obj_t BgL_tmpz00_7824;
{ /* Llib/hash.scm 587 */
obj_t BgL_res2402z00_3527;
{ /* Llib/hash.scm 587 */
obj_t BgL_aux3105z00_4963;
BgL_aux3105z00_4963 = 
STRUCT_KEY(BgL_tablez00_98); 
if(
SYMBOLP(BgL_aux3105z00_4963))
{ /* Llib/hash.scm 587 */
BgL_res2402z00_3527 = BgL_aux3105z00_4963; }  else 
{ 
obj_t BgL_auxz00_7828;
BgL_auxz00_7828 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)23246)), BGl_string3370z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3105z00_4963); 
FAILURE(BgL_auxz00_7828,BFALSE,BFALSE);} } 
BgL_tmpz00_7824 = BgL_res2402z00_3527; } 
BgL_test4045z00_7823 = 
(BgL_tmpz00_7824==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4045z00_7823)
{ /* Llib/hash.scm 587 */
int BgL_tmpz00_7833;
BgL_tmpz00_7833 = 
(int)(((long)0)); 
BgL_arg1536z00_1835 = 
STRUCT_REF(BgL_tablez00_98, BgL_tmpz00_7833); }  else 
{ /* Llib/hash.scm 587 */
BgL_arg1536z00_1835 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_98); } } 
{ /* Llib/hash.scm 587 */
long BgL_za71za7_3528;
{ /* Llib/hash.scm 587 */
obj_t BgL_tmpz00_7837;
if(
INTEGERP(BgL_arg1536z00_1835))
{ /* Llib/hash.scm 587 */
BgL_tmpz00_7837 = BgL_arg1536z00_1835
; }  else 
{ 
obj_t BgL_auxz00_7840;
BgL_auxz00_7840 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)23268)), BGl_string3370z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1536z00_1835); 
FAILURE(BgL_auxz00_7840,BFALSE,BFALSE);} 
BgL_za71za7_3528 = 
(long)CINT(BgL_tmpz00_7837); } 
BgL_arg1535z00_1834 = 
(BgL_za71za7_3528+((long)1)); } } 
{ /* Llib/hash.scm 587 */
bool_t BgL_test4048z00_7846;
{ /* Llib/hash.scm 587 */
obj_t BgL_tmpz00_7847;
{ /* Llib/hash.scm 587 */
obj_t BgL_res2404z00_3533;
{ /* Llib/hash.scm 587 */
obj_t BgL_aux3109z00_4967;
BgL_aux3109z00_4967 = 
STRUCT_KEY(BgL_tablez00_98); 
if(
SYMBOLP(BgL_aux3109z00_4967))
{ /* Llib/hash.scm 587 */
BgL_res2404z00_3533 = BgL_aux3109z00_4967; }  else 
{ 
obj_t BgL_auxz00_7851;
BgL_auxz00_7851 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)23213)), BGl_string3370z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3109z00_4967); 
FAILURE(BgL_auxz00_7851,BFALSE,BFALSE);} } 
BgL_tmpz00_7847 = BgL_res2404z00_3533; } 
BgL_test4048z00_7846 = 
(BgL_tmpz00_7847==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4048z00_7846)
{ /* Llib/hash.scm 587 */
obj_t BgL_auxz00_7858;int BgL_tmpz00_7856;
BgL_auxz00_7858 = 
BINT(BgL_arg1535z00_1834); 
BgL_tmpz00_7856 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_98, BgL_tmpz00_7856, BgL_auxz00_7858); }  else 
{ /* Llib/hash.scm 587 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_98); } } } 
{ /* Llib/hash.scm 588 */
obj_t BgL_arg1537z00_1836;
{ /* Llib/hash.scm 588 */
obj_t BgL_arg1540z00_1837;
BgL_arg1540z00_1837 = 
MAKE_YOUNG_PAIR(BgL_keyz00_99, BgL_objz00_101); 
BgL_arg1537z00_1836 = 
MAKE_YOUNG_PAIR(BgL_arg1540z00_1837, BgL_bucketz00_1821); } 
{ /* Llib/hash.scm 588 */
obj_t BgL_vectorz00_3534;
if(
VECTORP(BgL_bucketsz00_1818))
{ /* Llib/hash.scm 588 */
BgL_vectorz00_3534 = BgL_bucketsz00_1818; }  else 
{ 
obj_t BgL_auxz00_7866;
BgL_auxz00_7866 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)23293)), BGl_string3370z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1818); 
FAILURE(BgL_auxz00_7866,BFALSE,BFALSE);} 
VECTOR_SET(BgL_vectorz00_3534,BgL_bucketzd2numzd2_1820,BgL_arg1537z00_1836); } } 
{ /* Llib/hash.scm 589 */
bool_t BgL_test4051z00_7871;
{ /* Llib/hash.scm 589 */
long BgL_n2z00_3537;
{ /* Llib/hash.scm 589 */
obj_t BgL_tmpz00_7872;
if(
INTEGERP(BgL_maxzd2bucketzd2lenz00_1822))
{ /* Llib/hash.scm 589 */
BgL_tmpz00_7872 = BgL_maxzd2bucketzd2lenz00_1822
; }  else 
{ 
obj_t BgL_auxz00_7875;
BgL_auxz00_7875 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)23362)), BGl_string3370z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_maxzd2bucketzd2lenz00_1822); 
FAILURE(BgL_auxz00_7875,BFALSE,BFALSE);} 
BgL_n2z00_3537 = 
(long)CINT(BgL_tmpz00_7872); } 
BgL_test4051z00_7871 = 
(BgL_countz00_1831>BgL_n2z00_3537); } 
if(BgL_test4051z00_7871)
{ /* Llib/hash.scm 589 */
BGl_plainzd2hashtablezd2expandz12z12zz__hashz00(BgL_tablez00_98); }  else 
{ /* Llib/hash.scm 589 */BFALSE; } } 
return BgL_objz00_101;}  else 
{ /* Llib/hash.scm 592 */
bool_t BgL_test4053z00_7882;
{ /* Llib/hash.scm 592 */
obj_t BgL_arg1551z00_1846;
{ /* Llib/hash.scm 592 */
obj_t BgL_pairz00_3539;
if(
PAIRP(BgL_buckz00_1830))
{ /* Llib/hash.scm 592 */
BgL_pairz00_3539 = BgL_buckz00_1830; }  else 
{ 
obj_t BgL_auxz00_7885;
BgL_auxz00_7885 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)23458)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_buckz00_1830); 
FAILURE(BgL_auxz00_7885,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 592 */
obj_t BgL_pairz00_3542;
{ /* Llib/hash.scm 592 */
obj_t BgL_aux3117z00_4975;
BgL_aux3117z00_4975 = 
CAR(BgL_pairz00_3539); 
if(
PAIRP(BgL_aux3117z00_4975))
{ /* Llib/hash.scm 592 */
BgL_pairz00_3542 = BgL_aux3117z00_4975; }  else 
{ 
obj_t BgL_auxz00_7892;
BgL_auxz00_7892 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)23452)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_aux3117z00_4975); 
FAILURE(BgL_auxz00_7892,BFALSE,BFALSE);} } 
BgL_arg1551z00_1846 = 
CAR(BgL_pairz00_3542); } } 
{ /* Llib/hash.scm 592 */
obj_t BgL_eqtz00_3543;
{ /* Llib/hash.scm 592 */
bool_t BgL_test4056z00_7897;
{ /* Llib/hash.scm 592 */
obj_t BgL_tmpz00_7898;
{ /* Llib/hash.scm 592 */
obj_t BgL_res2406z00_3551;
{ /* Llib/hash.scm 592 */
obj_t BgL_aux3119z00_4977;
BgL_aux3119z00_4977 = 
STRUCT_KEY(BgL_tablez00_98); 
if(
SYMBOLP(BgL_aux3119z00_4977))
{ /* Llib/hash.scm 592 */
BgL_res2406z00_3551 = BgL_aux3119z00_4977; }  else 
{ 
obj_t BgL_auxz00_7902;
BgL_auxz00_7902 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)23428)), BGl_string3370z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3119z00_4977); 
FAILURE(BgL_auxz00_7902,BFALSE,BFALSE);} } 
BgL_tmpz00_7898 = BgL_res2406z00_3551; } 
BgL_test4056z00_7897 = 
(BgL_tmpz00_7898==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4056z00_7897)
{ /* Llib/hash.scm 592 */
int BgL_tmpz00_7907;
BgL_tmpz00_7907 = 
(int)(((long)3)); 
BgL_eqtz00_3543 = 
STRUCT_REF(BgL_tablez00_98, BgL_tmpz00_7907); }  else 
{ /* Llib/hash.scm 592 */
BgL_eqtz00_3543 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_98); } } 
if(
PROCEDUREP(BgL_eqtz00_3543))
{ /* Llib/hash.scm 592 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_eqtz00_3543, ((long)2)))
{ /* Llib/hash.scm 592 */
BgL_test4053z00_7882 = 
CBOOL(
PROCEDURE_ENTRY(BgL_eqtz00_3543)(BgL_eqtz00_3543, BgL_arg1551z00_1846, BgL_keyz00_99, BEOA))
; }  else 
{ /* Llib/hash.scm 592 */
FAILURE(BGl_string3421z00zz__hashz00,BGl_list3445z00zz__hashz00,BgL_eqtz00_3543);} }  else 
{ /* Llib/hash.scm 592 */
if(
(BgL_arg1551z00_1846==BgL_keyz00_99))
{ /* Llib/hash.scm 592 */
BgL_test4053z00_7882 = ((bool_t)1)
; }  else 
{ /* Llib/hash.scm 592 */
if(
STRINGP(BgL_arg1551z00_1846))
{ /* Llib/hash.scm 592 */
if(
STRINGP(BgL_keyz00_99))
{ /* Llib/hash.scm 592 */
bool_t BgL_res2414z00_3570;
{ /* Llib/hash.scm 592 */
long BgL_l1z00_3557;
BgL_l1z00_3557 = 
STRING_LENGTH(BgL_arg1551z00_1846); 
if(
(BgL_l1z00_3557==
STRING_LENGTH(BgL_keyz00_99)))
{ /* Llib/hash.scm 592 */
int BgL_arg1788z00_3560;
{ /* Llib/hash.scm 592 */
char * BgL_auxz00_7934;char * BgL_tmpz00_7932;
BgL_auxz00_7934 = 
BSTRING_TO_STRING(BgL_keyz00_99); 
BgL_tmpz00_7932 = 
BSTRING_TO_STRING(BgL_arg1551z00_1846); 
BgL_arg1788z00_3560 = 
memcmp(BgL_tmpz00_7932, BgL_auxz00_7934, BgL_l1z00_3557); } 
BgL_res2414z00_3570 = 
(
(long)(BgL_arg1788z00_3560)==((long)0)); }  else 
{ /* Llib/hash.scm 592 */
BgL_res2414z00_3570 = ((bool_t)0); } } 
BgL_test4053z00_7882 = BgL_res2414z00_3570; }  else 
{ /* Llib/hash.scm 592 */
BgL_test4053z00_7882 = ((bool_t)0)
; } }  else 
{ /* Llib/hash.scm 592 */
BgL_test4053z00_7882 = ((bool_t)0)
; } } } } } 
if(BgL_test4053z00_7882)
{ /* Llib/hash.scm 593 */
obj_t BgL_resz00_1841;
{ /* Llib/hash.scm 593 */
obj_t BgL_arg1545z00_1843;
{ /* Llib/hash.scm 593 */
obj_t BgL_pairz00_3571;
if(
PAIRP(BgL_buckz00_1830))
{ /* Llib/hash.scm 593 */
BgL_pairz00_3571 = BgL_buckz00_1830; }  else 
{ 
obj_t BgL_auxz00_7941;
BgL_auxz00_7941 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)23495)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_buckz00_1830); 
FAILURE(BgL_auxz00_7941,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 593 */
obj_t BgL_pairz00_3574;
{ /* Llib/hash.scm 593 */
obj_t BgL_aux3125z00_4984;
BgL_aux3125z00_4984 = 
CAR(BgL_pairz00_3571); 
if(
PAIRP(BgL_aux3125z00_4984))
{ /* Llib/hash.scm 593 */
BgL_pairz00_3574 = BgL_aux3125z00_4984; }  else 
{ 
obj_t BgL_auxz00_7948;
BgL_auxz00_7948 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)23489)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_aux3125z00_4984); 
FAILURE(BgL_auxz00_7948,BFALSE,BFALSE);} } 
BgL_arg1545z00_1843 = 
CDR(BgL_pairz00_3574); } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_100, ((long)1)))
{ /* Llib/hash.scm 593 */
BgL_resz00_1841 = 
PROCEDURE_ENTRY(BgL_procz00_100)(BgL_procz00_100, BgL_arg1545z00_1843, BEOA); }  else 
{ /* Llib/hash.scm 593 */
FAILURE(BGl_string3421z00zz__hashz00,BGl_list3448z00zz__hashz00,BgL_procz00_100);} } 
{ /* Llib/hash.scm 594 */
obj_t BgL_arg1544z00_1842;
{ /* Llib/hash.scm 594 */
obj_t BgL_pairz00_3575;
if(
PAIRP(BgL_buckz00_1830))
{ /* Llib/hash.scm 594 */
BgL_pairz00_3575 = BgL_buckz00_1830; }  else 
{ 
obj_t BgL_auxz00_7962;
BgL_auxz00_7962 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)23525)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_buckz00_1830); 
FAILURE(BgL_auxz00_7962,BFALSE,BFALSE);} 
BgL_arg1544z00_1842 = 
CAR(BgL_pairz00_3575); } 
{ /* Llib/hash.scm 594 */
obj_t BgL_pairz00_3576;
if(
PAIRP(BgL_arg1544z00_1842))
{ /* Llib/hash.scm 594 */
BgL_pairz00_3576 = BgL_arg1544z00_1842; }  else 
{ 
obj_t BgL_auxz00_7969;
BgL_auxz00_7969 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)23529)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_arg1544z00_1842); 
FAILURE(BgL_auxz00_7969,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_3576, BgL_resz00_1841); } } 
return BgL_resz00_1841;}  else 
{ /* Llib/hash.scm 597 */
obj_t BgL_arg1546z00_1844;long BgL_arg1547z00_1845;
{ /* Llib/hash.scm 597 */
obj_t BgL_pairz00_3577;
if(
PAIRP(BgL_buckz00_1830))
{ /* Llib/hash.scm 597 */
BgL_pairz00_3577 = BgL_buckz00_1830; }  else 
{ 
obj_t BgL_auxz00_7976;
BgL_auxz00_7976 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)23570)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_buckz00_1830); 
FAILURE(BgL_auxz00_7976,BFALSE,BFALSE);} 
BgL_arg1546z00_1844 = 
CDR(BgL_pairz00_3577); } 
BgL_arg1547z00_1845 = 
(BgL_countz00_1831+((long)1)); 
{ 
long BgL_countz00_7983;obj_t BgL_buckz00_7982;
BgL_buckz00_7982 = BgL_arg1546z00_1844; 
BgL_countz00_7983 = BgL_arg1547z00_1845; 
BgL_countz00_1831 = BgL_countz00_7983; 
BgL_buckz00_1830 = BgL_buckz00_7982; 
goto BgL_zc3z04anonymousza31533ze3z87_1832;} } } } } } } } } } } 

}



/* hashtable-add! */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2addz12zc0zz__hashz00(obj_t BgL_tablez00_102, obj_t BgL_keyz00_103, obj_t BgL_p2z00_104, obj_t BgL_objz00_105, obj_t BgL_initz00_106)
{
{ /* Llib/hash.scm 602 */
if(
BGl_hashtablezd2weakzf3z21zz__hashz00(BgL_tablez00_102))
{ /* Llib/hash.scm 603 */
return 
BGl_weakzd2hashtablezd2addz12z12zz__weakhashz00(BgL_tablez00_102, BgL_keyz00_103, BgL_p2z00_104, BgL_objz00_105, BgL_initz00_106);}  else 
{ /* Llib/hash.scm 603 */
return 
BGl_plainzd2hashtablezd2addz12z12zz__hashz00(BgL_tablez00_102, BgL_keyz00_103, BgL_p2z00_104, BgL_objz00_105, BgL_initz00_106);} } 

}



/* &hashtable-add! */
obj_t BGl_z62hashtablezd2addz12za2zz__hashz00(obj_t BgL_envz00_4511, obj_t BgL_tablez00_4512, obj_t BgL_keyz00_4513, obj_t BgL_p2z00_4514, obj_t BgL_objz00_4515, obj_t BgL_initz00_4516)
{
{ /* Llib/hash.scm 602 */
{ /* Llib/hash.scm 603 */
obj_t BgL_auxz00_7995;obj_t BgL_auxz00_7988;
if(
PROCEDUREP(BgL_p2z00_4514))
{ /* Llib/hash.scm 603 */
BgL_auxz00_7995 = BgL_p2z00_4514
; }  else 
{ 
obj_t BgL_auxz00_7998;
BgL_auxz00_7998 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)23897)), BGl_string3453z00zz__hashz00, BGl_string3378z00zz__hashz00, BgL_p2z00_4514); 
FAILURE(BgL_auxz00_7998,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_tablez00_4512))
{ /* Llib/hash.scm 603 */
BgL_auxz00_7988 = BgL_tablez00_4512
; }  else 
{ 
obj_t BgL_auxz00_7991;
BgL_auxz00_7991 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)23897)), BGl_string3453z00zz__hashz00, BGl_string3362z00zz__hashz00, BgL_tablez00_4512); 
FAILURE(BgL_auxz00_7991,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2addz12zc0zz__hashz00(BgL_auxz00_7988, BgL_keyz00_4513, BgL_auxz00_7995, BgL_objz00_4515, BgL_initz00_4516);} } 

}



/* plain-hashtable-add! */
obj_t BGl_plainzd2hashtablezd2addz12z12zz__hashz00(obj_t BgL_tablez00_107, obj_t BgL_keyz00_108, obj_t BgL_procz00_109, obj_t BgL_objz00_110, obj_t BgL_initz00_111)
{
{ /* Llib/hash.scm 610 */
{ /* Llib/hash.scm 611 */
obj_t BgL_bucketsz00_1850;
{ /* Llib/hash.scm 611 */
bool_t BgL_test4073z00_8003;
{ /* Llib/hash.scm 611 */
obj_t BgL_tmpz00_8004;
{ /* Llib/hash.scm 611 */
obj_t BgL_res2416z00_3584;
{ /* Llib/hash.scm 611 */
obj_t BgL_aux3139z00_4999;
BgL_aux3139z00_4999 = 
STRUCT_KEY(BgL_tablez00_107); 
if(
SYMBOLP(BgL_aux3139z00_4999))
{ /* Llib/hash.scm 611 */
BgL_res2416z00_3584 = BgL_aux3139z00_4999; }  else 
{ 
obj_t BgL_auxz00_8008;
BgL_auxz00_8008 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)24351)), BGl_string3454z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3139z00_4999); 
FAILURE(BgL_auxz00_8008,BFALSE,BFALSE);} } 
BgL_tmpz00_8004 = BgL_res2416z00_3584; } 
BgL_test4073z00_8003 = 
(BgL_tmpz00_8004==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4073z00_8003)
{ /* Llib/hash.scm 611 */
int BgL_tmpz00_8013;
BgL_tmpz00_8013 = 
(int)(((long)2)); 
BgL_bucketsz00_1850 = 
STRUCT_REF(BgL_tablez00_107, BgL_tmpz00_8013); }  else 
{ /* Llib/hash.scm 611 */
BgL_bucketsz00_1850 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_107); } } 
{ /* Llib/hash.scm 611 */
long BgL_bucketzd2lenzd2_1851;
{ /* Llib/hash.scm 612 */
obj_t BgL_vectorz00_3585;
if(
VECTORP(BgL_bucketsz00_1850))
{ /* Llib/hash.scm 612 */
BgL_vectorz00_3585 = BgL_bucketsz00_1850; }  else 
{ 
obj_t BgL_auxz00_8019;
BgL_auxz00_8019 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)24409)), BGl_string3454z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1850); 
FAILURE(BgL_auxz00_8019,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1851 = 
VECTOR_LENGTH(BgL_vectorz00_3585); } 
{ /* Llib/hash.scm 612 */
long BgL_bucketzd2numzd2_1852;
{ /* Llib/hash.scm 613 */
long BgL_arg1579z00_1882;
{ /* Llib/hash.scm 613 */
long BgL_res2422z00_3601;
{ /* Llib/hash.scm 613 */
obj_t BgL_hashnz00_3586;
{ /* Llib/hash.scm 613 */
bool_t BgL_test4076z00_8024;
{ /* Llib/hash.scm 613 */
obj_t BgL_tmpz00_8025;
{ /* Llib/hash.scm 613 */
obj_t BgL_res2417z00_3592;
{ /* Llib/hash.scm 613 */
obj_t BgL_aux3143z00_5003;
BgL_aux3143z00_5003 = 
STRUCT_KEY(BgL_tablez00_107); 
if(
SYMBOLP(BgL_aux3143z00_5003))
{ /* Llib/hash.scm 613 */
BgL_res2417z00_3592 = BgL_aux3143z00_5003; }  else 
{ 
obj_t BgL_auxz00_8029;
BgL_auxz00_8029 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)24447)), BGl_string3454z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3143z00_5003); 
FAILURE(BgL_auxz00_8029,BFALSE,BFALSE);} } 
BgL_tmpz00_8025 = BgL_res2417z00_3592; } 
BgL_test4076z00_8024 = 
(BgL_tmpz00_8025==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4076z00_8024)
{ /* Llib/hash.scm 613 */
int BgL_tmpz00_8034;
BgL_tmpz00_8034 = 
(int)(((long)4)); 
BgL_hashnz00_3586 = 
STRUCT_REF(BgL_tablez00_107, BgL_tmpz00_8034); }  else 
{ /* Llib/hash.scm 613 */
BgL_hashnz00_3586 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_107); } } 
if(
PROCEDUREP(BgL_hashnz00_3586))
{ /* Llib/hash.scm 613 */
obj_t BgL_arg1316z00_3588;
if(
PROCEDURE_CORRECT_ARITYP(BgL_hashnz00_3586, ((long)1)))
{ /* Llib/hash.scm 613 */
BgL_arg1316z00_3588 = 
PROCEDURE_ENTRY(BgL_hashnz00_3586)(BgL_hashnz00_3586, BgL_keyz00_108, BEOA); }  else 
{ /* Llib/hash.scm 613 */
FAILURE(BGl_string3455z00zz__hashz00,BGl_list3416z00zz__hashz00,BgL_hashnz00_3586);} 
{ /* Llib/hash.scm 613 */
long BgL_nz00_3594;
{ /* Llib/hash.scm 613 */
obj_t BgL_tmpz00_8047;
if(
INTEGERP(BgL_arg1316z00_3588))
{ /* Llib/hash.scm 613 */
BgL_tmpz00_8047 = BgL_arg1316z00_3588
; }  else 
{ 
obj_t BgL_auxz00_8050;
BgL_auxz00_8050 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)24447)), BGl_string3454z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1316z00_3588); 
FAILURE(BgL_auxz00_8050,BFALSE,BFALSE);} 
BgL_nz00_3594 = 
(long)CINT(BgL_tmpz00_8047); } 
if(
(BgL_nz00_3594<((long)0)))
{ /* Llib/hash.scm 613 */
BgL_res2422z00_3601 = 
NEG(BgL_nz00_3594); }  else 
{ /* Llib/hash.scm 613 */
BgL_res2422z00_3601 = BgL_nz00_3594; } } }  else 
{ /* Llib/hash.scm 613 */
BgL_res2422z00_3601 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_108); } } 
BgL_arg1579z00_1882 = BgL_res2422z00_3601; } 
{ /* Llib/hash.scm 613 */
long BgL_res2428z00_3620;
{ /* Llib/hash.scm 613 */
long BgL_n1z00_3602;long BgL_n2z00_3603;
BgL_n1z00_3602 = BgL_arg1579z00_1882; 
BgL_n2z00_3603 = BgL_bucketzd2lenzd2_1851; 
{ /* Llib/hash.scm 613 */
bool_t BgL_test4082z00_8059;
{ /* Llib/hash.scm 613 */
long BgL_arg1909z00_3605;
BgL_arg1909z00_3605 = 
(((BgL_n1z00_3602) | (BgL_n2z00_3603)) & -2147483648); 
BgL_test4082z00_8059 = 
(BgL_arg1909z00_3605==((long)0)); } 
if(BgL_test4082z00_8059)
{ /* Llib/hash.scm 613 */
int32_t BgL_arg1906z00_3606;
{ /* Llib/hash.scm 613 */
int32_t BgL_arg1907z00_3607;int32_t BgL_arg1908z00_3608;
{ /* Llib/hash.scm 613 */
int32_t BgL_res2424z00_3612;
BgL_res2424z00_3612 = 
(int32_t)(BgL_n1z00_3602); 
BgL_arg1907z00_3607 = BgL_res2424z00_3612; } 
{ /* Llib/hash.scm 613 */
int32_t BgL_res2425z00_3614;
BgL_res2425z00_3614 = 
(int32_t)(BgL_n2z00_3603); 
BgL_arg1908z00_3608 = BgL_res2425z00_3614; } 
BgL_arg1906z00_3606 = 
(BgL_arg1907z00_3607%BgL_arg1908z00_3608); } 
{ /* Llib/hash.scm 613 */
long BgL_res2427z00_3619;
{ /* Llib/hash.scm 613 */
long BgL_arg2003z00_3616;
BgL_arg2003z00_3616 = 
(long)(BgL_arg1906z00_3606); 
{ /* Llib/hash.scm 613 */
long BgL_res2426z00_3618;
BgL_res2426z00_3618 = 
(long)(BgL_arg2003z00_3616); 
BgL_res2427z00_3619 = BgL_res2426z00_3618; } } 
BgL_res2428z00_3620 = BgL_res2427z00_3619; } }  else 
{ /* Llib/hash.scm 613 */
BgL_res2428z00_3620 = 
(BgL_n1z00_3602%BgL_n2z00_3603); } } } 
BgL_bucketzd2numzd2_1852 = BgL_res2428z00_3620; } } 
{ /* Llib/hash.scm 613 */
obj_t BgL_bucketz00_1853;
{ /* Llib/hash.scm 614 */
obj_t BgL_vectorz00_3621;
if(
VECTORP(BgL_bucketsz00_1850))
{ /* Llib/hash.scm 614 */
BgL_vectorz00_3621 = BgL_bucketsz00_1850; }  else 
{ 
obj_t BgL_auxz00_8070;
BgL_auxz00_8070 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)24519)), BGl_string3454z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1850); 
FAILURE(BgL_auxz00_8070,BFALSE,BFALSE);} 
BgL_bucketz00_1853 = 
VECTOR_REF(BgL_vectorz00_3621,BgL_bucketzd2numzd2_1852); } 
{ /* Llib/hash.scm 614 */
obj_t BgL_maxzd2bucketzd2lenz00_1854;
{ /* Llib/hash.scm 615 */
bool_t BgL_test4084z00_8075;
{ /* Llib/hash.scm 615 */
obj_t BgL_tmpz00_8076;
{ /* Llib/hash.scm 615 */
obj_t BgL_res2429z00_3626;
{ /* Llib/hash.scm 615 */
obj_t BgL_aux3151z00_5012;
BgL_aux3151z00_5012 = 
STRUCT_KEY(BgL_tablez00_107); 
if(
SYMBOLP(BgL_aux3151z00_5012))
{ /* Llib/hash.scm 615 */
BgL_res2429z00_3626 = BgL_aux3151z00_5012; }  else 
{ 
obj_t BgL_auxz00_8080;
BgL_auxz00_8080 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)24559)), BGl_string3454z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3151z00_5012); 
FAILURE(BgL_auxz00_8080,BFALSE,BFALSE);} } 
BgL_tmpz00_8076 = BgL_res2429z00_3626; } 
BgL_test4084z00_8075 = 
(BgL_tmpz00_8076==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4084z00_8075)
{ /* Llib/hash.scm 615 */
int BgL_tmpz00_8085;
BgL_tmpz00_8085 = 
(int)(((long)1)); 
BgL_maxzd2bucketzd2lenz00_1854 = 
STRUCT_REF(BgL_tablez00_107, BgL_tmpz00_8085); }  else 
{ /* Llib/hash.scm 615 */
BgL_maxzd2bucketzd2lenz00_1854 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_107); } } 
{ /* Llib/hash.scm 615 */

if(
NULLP(BgL_bucketz00_1853))
{ /* Llib/hash.scm 617 */
obj_t BgL_vz00_1856;
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_109, ((long)2)))
{ /* Llib/hash.scm 617 */
BgL_vz00_1856 = 
PROCEDURE_ENTRY(BgL_procz00_109)(BgL_procz00_109, BgL_objz00_110, BgL_initz00_111, BEOA); }  else 
{ /* Llib/hash.scm 617 */
FAILURE(BGl_string3455z00zz__hashz00,BGl_list3456z00zz__hashz00,BgL_procz00_109);} 
{ /* Llib/hash.scm 618 */
long BgL_arg1556z00_1857;
{ /* Llib/hash.scm 618 */
obj_t BgL_arg1557z00_1858;
{ /* Llib/hash.scm 618 */
bool_t BgL_test4088z00_8099;
{ /* Llib/hash.scm 618 */
obj_t BgL_tmpz00_8100;
{ /* Llib/hash.scm 618 */
obj_t BgL_res2431z00_3631;
{ /* Llib/hash.scm 618 */
obj_t BgL_aux3155z00_5017;
BgL_aux3155z00_5017 = 
STRUCT_KEY(BgL_tablez00_107); 
if(
SYMBOLP(BgL_aux3155z00_5017))
{ /* Llib/hash.scm 618 */
BgL_res2431z00_3631 = BgL_aux3155z00_5017; }  else 
{ 
obj_t BgL_auxz00_8104;
BgL_auxz00_8104 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)24689)), BGl_string3454z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3155z00_5017); 
FAILURE(BgL_auxz00_8104,BFALSE,BFALSE);} } 
BgL_tmpz00_8100 = BgL_res2431z00_3631; } 
BgL_test4088z00_8099 = 
(BgL_tmpz00_8100==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4088z00_8099)
{ /* Llib/hash.scm 618 */
int BgL_tmpz00_8109;
BgL_tmpz00_8109 = 
(int)(((long)0)); 
BgL_arg1557z00_1858 = 
STRUCT_REF(BgL_tablez00_107, BgL_tmpz00_8109); }  else 
{ /* Llib/hash.scm 618 */
BgL_arg1557z00_1858 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_107); } } 
{ /* Llib/hash.scm 618 */
long BgL_za71za7_3632;
{ /* Llib/hash.scm 618 */
obj_t BgL_tmpz00_8113;
if(
INTEGERP(BgL_arg1557z00_1858))
{ /* Llib/hash.scm 618 */
BgL_tmpz00_8113 = BgL_arg1557z00_1858
; }  else 
{ 
obj_t BgL_auxz00_8116;
BgL_auxz00_8116 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)24711)), BGl_string3454z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1557z00_1858); 
FAILURE(BgL_auxz00_8116,BFALSE,BFALSE);} 
BgL_za71za7_3632 = 
(long)CINT(BgL_tmpz00_8113); } 
BgL_arg1556z00_1857 = 
(BgL_za71za7_3632+((long)1)); } } 
{ /* Llib/hash.scm 618 */
bool_t BgL_test4091z00_8122;
{ /* Llib/hash.scm 618 */
obj_t BgL_tmpz00_8123;
{ /* Llib/hash.scm 618 */
obj_t BgL_res2433z00_3637;
{ /* Llib/hash.scm 618 */
obj_t BgL_aux3159z00_5021;
BgL_aux3159z00_5021 = 
STRUCT_KEY(BgL_tablez00_107); 
if(
SYMBOLP(BgL_aux3159z00_5021))
{ /* Llib/hash.scm 618 */
BgL_res2433z00_3637 = BgL_aux3159z00_5021; }  else 
{ 
obj_t BgL_auxz00_8127;
BgL_auxz00_8127 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)24656)), BGl_string3454z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3159z00_5021); 
FAILURE(BgL_auxz00_8127,BFALSE,BFALSE);} } 
BgL_tmpz00_8123 = BgL_res2433z00_3637; } 
BgL_test4091z00_8122 = 
(BgL_tmpz00_8123==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4091z00_8122)
{ /* Llib/hash.scm 618 */
obj_t BgL_auxz00_8134;int BgL_tmpz00_8132;
BgL_auxz00_8134 = 
BINT(BgL_arg1556z00_1857); 
BgL_tmpz00_8132 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_107, BgL_tmpz00_8132, BgL_auxz00_8134); }  else 
{ /* Llib/hash.scm 618 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_107); } } } 
{ /* Llib/hash.scm 619 */
obj_t BgL_arg1558z00_1859;
{ /* Llib/hash.scm 619 */
obj_t BgL_arg1560z00_1860;
BgL_arg1560z00_1860 = 
MAKE_YOUNG_PAIR(BgL_keyz00_108, BgL_vz00_1856); 
{ /* Llib/hash.scm 619 */
obj_t BgL_list1561z00_1861;
BgL_list1561z00_1861 = 
MAKE_YOUNG_PAIR(BgL_arg1560z00_1860, BNIL); 
BgL_arg1558z00_1859 = BgL_list1561z00_1861; } } 
{ /* Llib/hash.scm 619 */
obj_t BgL_vectorz00_3639;
if(
VECTORP(BgL_bucketsz00_1850))
{ /* Llib/hash.scm 619 */
BgL_vectorz00_3639 = BgL_bucketsz00_1850; }  else 
{ 
obj_t BgL_auxz00_8142;
BgL_auxz00_8142 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)24739)), BGl_string3454z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1850); 
FAILURE(BgL_auxz00_8142,BFALSE,BFALSE);} 
VECTOR_SET(BgL_vectorz00_3639,BgL_bucketzd2numzd2_1852,BgL_arg1558z00_1859); } } 
return BgL_vz00_1856;}  else 
{ 
obj_t BgL_buckz00_1863;long BgL_countz00_1864;
BgL_buckz00_1863 = BgL_bucketz00_1853; 
BgL_countz00_1864 = ((long)0); 
BgL_zc3z04anonymousza31562ze3z87_1865:
if(
NULLP(BgL_buckz00_1863))
{ /* Llib/hash.scm 625 */
obj_t BgL_vz00_1867;
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_109, ((long)2)))
{ /* Llib/hash.scm 625 */
BgL_vz00_1867 = 
PROCEDURE_ENTRY(BgL_procz00_109)(BgL_procz00_109, BgL_objz00_110, BgL_initz00_111, BEOA); }  else 
{ /* Llib/hash.scm 625 */
FAILURE(BGl_string3421z00zz__hashz00,BGl_list3456z00zz__hashz00,BgL_procz00_109);} 
{ /* Llib/hash.scm 626 */
long BgL_arg1564z00_1868;
{ /* Llib/hash.scm 626 */
obj_t BgL_arg1565z00_1869;
{ /* Llib/hash.scm 626 */
bool_t BgL_test4096z00_8157;
{ /* Llib/hash.scm 626 */
obj_t BgL_tmpz00_8158;
{ /* Llib/hash.scm 626 */
obj_t BgL_res2436z00_3645;
{ /* Llib/hash.scm 626 */
obj_t BgL_aux3165z00_5028;
BgL_aux3165z00_5028 = 
STRUCT_KEY(BgL_tablez00_107); 
if(
SYMBOLP(BgL_aux3165z00_5028))
{ /* Llib/hash.scm 626 */
BgL_res2436z00_3645 = BgL_aux3165z00_5028; }  else 
{ 
obj_t BgL_auxz00_8162;
BgL_auxz00_8162 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)24931)), BGl_string3370z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3165z00_5028); 
FAILURE(BgL_auxz00_8162,BFALSE,BFALSE);} } 
BgL_tmpz00_8158 = BgL_res2436z00_3645; } 
BgL_test4096z00_8157 = 
(BgL_tmpz00_8158==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4096z00_8157)
{ /* Llib/hash.scm 626 */
int BgL_tmpz00_8167;
BgL_tmpz00_8167 = 
(int)(((long)0)); 
BgL_arg1565z00_1869 = 
STRUCT_REF(BgL_tablez00_107, BgL_tmpz00_8167); }  else 
{ /* Llib/hash.scm 626 */
BgL_arg1565z00_1869 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_107); } } 
{ /* Llib/hash.scm 626 */
long BgL_za71za7_3646;
{ /* Llib/hash.scm 626 */
obj_t BgL_tmpz00_8171;
if(
INTEGERP(BgL_arg1565z00_1869))
{ /* Llib/hash.scm 626 */
BgL_tmpz00_8171 = BgL_arg1565z00_1869
; }  else 
{ 
obj_t BgL_auxz00_8174;
BgL_auxz00_8174 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)24953)), BGl_string3370z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1565z00_1869); 
FAILURE(BgL_auxz00_8174,BFALSE,BFALSE);} 
BgL_za71za7_3646 = 
(long)CINT(BgL_tmpz00_8171); } 
BgL_arg1564z00_1868 = 
(BgL_za71za7_3646+((long)1)); } } 
{ /* Llib/hash.scm 626 */
bool_t BgL_test4099z00_8180;
{ /* Llib/hash.scm 626 */
obj_t BgL_tmpz00_8181;
{ /* Llib/hash.scm 626 */
obj_t BgL_res2438z00_3651;
{ /* Llib/hash.scm 626 */
obj_t BgL_aux3169z00_5032;
BgL_aux3169z00_5032 = 
STRUCT_KEY(BgL_tablez00_107); 
if(
SYMBOLP(BgL_aux3169z00_5032))
{ /* Llib/hash.scm 626 */
BgL_res2438z00_3651 = BgL_aux3169z00_5032; }  else 
{ 
obj_t BgL_auxz00_8185;
BgL_auxz00_8185 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)24898)), BGl_string3370z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3169z00_5032); 
FAILURE(BgL_auxz00_8185,BFALSE,BFALSE);} } 
BgL_tmpz00_8181 = BgL_res2438z00_3651; } 
BgL_test4099z00_8180 = 
(BgL_tmpz00_8181==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4099z00_8180)
{ /* Llib/hash.scm 626 */
obj_t BgL_auxz00_8192;int BgL_tmpz00_8190;
BgL_auxz00_8192 = 
BINT(BgL_arg1564z00_1868); 
BgL_tmpz00_8190 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_107, BgL_tmpz00_8190, BgL_auxz00_8192); }  else 
{ /* Llib/hash.scm 626 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_107); } } } 
{ /* Llib/hash.scm 627 */
obj_t BgL_arg1566z00_1870;
{ /* Llib/hash.scm 627 */
obj_t BgL_arg1567z00_1871;
BgL_arg1567z00_1871 = 
MAKE_YOUNG_PAIR(BgL_keyz00_108, BgL_vz00_1867); 
BgL_arg1566z00_1870 = 
MAKE_YOUNG_PAIR(BgL_arg1567z00_1871, BgL_bucketz00_1853); } 
{ /* Llib/hash.scm 627 */
obj_t BgL_vectorz00_3652;
if(
VECTORP(BgL_bucketsz00_1850))
{ /* Llib/hash.scm 627 */
BgL_vectorz00_3652 = BgL_bucketsz00_1850; }  else 
{ 
obj_t BgL_auxz00_8200;
BgL_auxz00_8200 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)24981)), BGl_string3370z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1850); 
FAILURE(BgL_auxz00_8200,BFALSE,BFALSE);} 
VECTOR_SET(BgL_vectorz00_3652,BgL_bucketzd2numzd2_1852,BgL_arg1566z00_1870); } } 
{ /* Llib/hash.scm 628 */
bool_t BgL_test4102z00_8205;
{ /* Llib/hash.scm 628 */
long BgL_n2z00_3655;
{ /* Llib/hash.scm 628 */
obj_t BgL_tmpz00_8206;
if(
INTEGERP(BgL_maxzd2bucketzd2lenz00_1854))
{ /* Llib/hash.scm 628 */
BgL_tmpz00_8206 = BgL_maxzd2bucketzd2lenz00_1854
; }  else 
{ 
obj_t BgL_auxz00_8209;
BgL_auxz00_8209 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)25051)), BGl_string3370z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_maxzd2bucketzd2lenz00_1854); 
FAILURE(BgL_auxz00_8209,BFALSE,BFALSE);} 
BgL_n2z00_3655 = 
(long)CINT(BgL_tmpz00_8206); } 
BgL_test4102z00_8205 = 
(BgL_countz00_1864>BgL_n2z00_3655); } 
if(BgL_test4102z00_8205)
{ /* Llib/hash.scm 628 */
BGl_plainzd2hashtablezd2expandz12z12zz__hashz00(BgL_tablez00_107); }  else 
{ /* Llib/hash.scm 628 */BFALSE; } } 
return BgL_vz00_1867;}  else 
{ /* Llib/hash.scm 631 */
bool_t BgL_test4104z00_8216;
{ /* Llib/hash.scm 631 */
obj_t BgL_arg1578z00_1880;
{ /* Llib/hash.scm 631 */
obj_t BgL_pairz00_3657;
if(
PAIRP(BgL_buckz00_1863))
{ /* Llib/hash.scm 631 */
BgL_pairz00_3657 = BgL_buckz00_1863; }  else 
{ 
obj_t BgL_auxz00_8219;
BgL_auxz00_8219 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)25152)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_buckz00_1863); 
FAILURE(BgL_auxz00_8219,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 631 */
obj_t BgL_pairz00_3660;
{ /* Llib/hash.scm 631 */
obj_t BgL_aux3177z00_5040;
BgL_aux3177z00_5040 = 
CAR(BgL_pairz00_3657); 
if(
PAIRP(BgL_aux3177z00_5040))
{ /* Llib/hash.scm 631 */
BgL_pairz00_3660 = BgL_aux3177z00_5040; }  else 
{ 
obj_t BgL_auxz00_8226;
BgL_auxz00_8226 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)25146)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_aux3177z00_5040); 
FAILURE(BgL_auxz00_8226,BFALSE,BFALSE);} } 
BgL_arg1578z00_1880 = 
CAR(BgL_pairz00_3660); } } 
{ /* Llib/hash.scm 631 */
obj_t BgL_eqtz00_3661;
{ /* Llib/hash.scm 631 */
bool_t BgL_test4107z00_8231;
{ /* Llib/hash.scm 631 */
obj_t BgL_tmpz00_8232;
{ /* Llib/hash.scm 631 */
obj_t BgL_res2440z00_3669;
{ /* Llib/hash.scm 631 */
obj_t BgL_aux3179z00_5042;
BgL_aux3179z00_5042 = 
STRUCT_KEY(BgL_tablez00_107); 
if(
SYMBOLP(BgL_aux3179z00_5042))
{ /* Llib/hash.scm 631 */
BgL_res2440z00_3669 = BgL_aux3179z00_5042; }  else 
{ 
obj_t BgL_auxz00_8236;
BgL_auxz00_8236 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)25122)), BGl_string3370z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3179z00_5042); 
FAILURE(BgL_auxz00_8236,BFALSE,BFALSE);} } 
BgL_tmpz00_8232 = BgL_res2440z00_3669; } 
BgL_test4107z00_8231 = 
(BgL_tmpz00_8232==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4107z00_8231)
{ /* Llib/hash.scm 631 */
int BgL_tmpz00_8241;
BgL_tmpz00_8241 = 
(int)(((long)3)); 
BgL_eqtz00_3661 = 
STRUCT_REF(BgL_tablez00_107, BgL_tmpz00_8241); }  else 
{ /* Llib/hash.scm 631 */
BgL_eqtz00_3661 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_107); } } 
if(
PROCEDUREP(BgL_eqtz00_3661))
{ /* Llib/hash.scm 631 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_eqtz00_3661, ((long)2)))
{ /* Llib/hash.scm 631 */
BgL_test4104z00_8216 = 
CBOOL(
PROCEDURE_ENTRY(BgL_eqtz00_3661)(BgL_eqtz00_3661, BgL_arg1578z00_1880, BgL_keyz00_108, BEOA))
; }  else 
{ /* Llib/hash.scm 631 */
FAILURE(BGl_string3421z00zz__hashz00,BGl_list3461z00zz__hashz00,BgL_eqtz00_3661);} }  else 
{ /* Llib/hash.scm 631 */
if(
(BgL_arg1578z00_1880==BgL_keyz00_108))
{ /* Llib/hash.scm 631 */
BgL_test4104z00_8216 = ((bool_t)1)
; }  else 
{ /* Llib/hash.scm 631 */
if(
STRINGP(BgL_arg1578z00_1880))
{ /* Llib/hash.scm 631 */
if(
STRINGP(BgL_keyz00_108))
{ /* Llib/hash.scm 631 */
bool_t BgL_res2448z00_3688;
{ /* Llib/hash.scm 631 */
long BgL_l1z00_3675;
BgL_l1z00_3675 = 
STRING_LENGTH(BgL_arg1578z00_1880); 
if(
(BgL_l1z00_3675==
STRING_LENGTH(BgL_keyz00_108)))
{ /* Llib/hash.scm 631 */
int BgL_arg1788z00_3678;
{ /* Llib/hash.scm 631 */
char * BgL_auxz00_8268;char * BgL_tmpz00_8266;
BgL_auxz00_8268 = 
BSTRING_TO_STRING(BgL_keyz00_108); 
BgL_tmpz00_8266 = 
BSTRING_TO_STRING(BgL_arg1578z00_1880); 
BgL_arg1788z00_3678 = 
memcmp(BgL_tmpz00_8266, BgL_auxz00_8268, BgL_l1z00_3675); } 
BgL_res2448z00_3688 = 
(
(long)(BgL_arg1788z00_3678)==((long)0)); }  else 
{ /* Llib/hash.scm 631 */
BgL_res2448z00_3688 = ((bool_t)0); } } 
BgL_test4104z00_8216 = BgL_res2448z00_3688; }  else 
{ /* Llib/hash.scm 631 */
BgL_test4104z00_8216 = ((bool_t)0)
; } }  else 
{ /* Llib/hash.scm 631 */
BgL_test4104z00_8216 = ((bool_t)0)
; } } } } } 
if(BgL_test4104z00_8216)
{ /* Llib/hash.scm 632 */
obj_t BgL_resz00_1875;
{ /* Llib/hash.scm 632 */
obj_t BgL_arg1574z00_1877;
{ /* Llib/hash.scm 632 */
obj_t BgL_pairz00_3689;
if(
PAIRP(BgL_buckz00_1863))
{ /* Llib/hash.scm 632 */
BgL_pairz00_3689 = BgL_buckz00_1863; }  else 
{ 
obj_t BgL_auxz00_8275;
BgL_auxz00_8275 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)25193)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_buckz00_1863); 
FAILURE(BgL_auxz00_8275,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 632 */
obj_t BgL_pairz00_3692;
{ /* Llib/hash.scm 632 */
obj_t BgL_aux3185z00_5049;
BgL_aux3185z00_5049 = 
CAR(BgL_pairz00_3689); 
if(
PAIRP(BgL_aux3185z00_5049))
{ /* Llib/hash.scm 632 */
BgL_pairz00_3692 = BgL_aux3185z00_5049; }  else 
{ 
obj_t BgL_auxz00_8282;
BgL_auxz00_8282 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)25187)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_aux3185z00_5049); 
FAILURE(BgL_auxz00_8282,BFALSE,BFALSE);} } 
BgL_arg1574z00_1877 = 
CDR(BgL_pairz00_3692); } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_109, ((long)2)))
{ /* Llib/hash.scm 632 */
BgL_resz00_1875 = 
PROCEDURE_ENTRY(BgL_procz00_109)(BgL_procz00_109, BgL_objz00_110, BgL_arg1574z00_1877, BEOA); }  else 
{ /* Llib/hash.scm 632 */
FAILURE(BGl_string3421z00zz__hashz00,BGl_list3464z00zz__hashz00,BgL_procz00_109);} } 
{ /* Llib/hash.scm 633 */
obj_t BgL_arg1573z00_1876;
{ /* Llib/hash.scm 633 */
obj_t BgL_pairz00_3693;
if(
PAIRP(BgL_buckz00_1863))
{ /* Llib/hash.scm 633 */
BgL_pairz00_3693 = BgL_buckz00_1863; }  else 
{ 
obj_t BgL_auxz00_8297;
BgL_auxz00_8297 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)25223)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_buckz00_1863); 
FAILURE(BgL_auxz00_8297,BFALSE,BFALSE);} 
BgL_arg1573z00_1876 = 
CAR(BgL_pairz00_3693); } 
{ /* Llib/hash.scm 633 */
obj_t BgL_pairz00_3694;
if(
PAIRP(BgL_arg1573z00_1876))
{ /* Llib/hash.scm 633 */
BgL_pairz00_3694 = BgL_arg1573z00_1876; }  else 
{ 
obj_t BgL_auxz00_8304;
BgL_auxz00_8304 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)25227)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_arg1573z00_1876); 
FAILURE(BgL_auxz00_8304,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_3694, BgL_resz00_1875); } } 
return BgL_resz00_1875;}  else 
{ /* Llib/hash.scm 636 */
obj_t BgL_arg1575z00_1878;long BgL_arg1577z00_1879;
{ /* Llib/hash.scm 636 */
obj_t BgL_pairz00_3695;
if(
PAIRP(BgL_buckz00_1863))
{ /* Llib/hash.scm 636 */
BgL_pairz00_3695 = BgL_buckz00_1863; }  else 
{ 
obj_t BgL_auxz00_8311;
BgL_auxz00_8311 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)25268)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_buckz00_1863); 
FAILURE(BgL_auxz00_8311,BFALSE,BFALSE);} 
BgL_arg1575z00_1878 = 
CDR(BgL_pairz00_3695); } 
BgL_arg1577z00_1879 = 
(BgL_countz00_1864+((long)1)); 
{ 
long BgL_countz00_8318;obj_t BgL_buckz00_8317;
BgL_buckz00_8317 = BgL_arg1575z00_1878; 
BgL_countz00_8318 = BgL_arg1577z00_1879; 
BgL_countz00_1864 = BgL_countz00_8318; 
BgL_buckz00_1863 = BgL_buckz00_8317; 
goto BgL_zc3z04anonymousza31562ze3z87_1865;} } } } } } } } } } } 

}



/* hashtable-remove! */
BGL_EXPORTED_DEF bool_t BGl_hashtablezd2removez12zc0zz__hashz00(obj_t BgL_tablez00_112, obj_t BgL_keyz00_113)
{
{ /* Llib/hash.scm 641 */
if(
BGl_hashtablezd2weakzf3z21zz__hashz00(BgL_tablez00_112))
{ /* Llib/hash.scm 642 */
return 
CBOOL(
BGl_weakzd2hashtablezd2removez12z12zz__weakhashz00(BgL_tablez00_112, BgL_keyz00_113));}  else 
{ /* Llib/hash.scm 642 */
return 
BGl_plainzd2hashtablezd2removez12z12zz__hashz00(BgL_tablez00_112, BgL_keyz00_113);} } 

}



/* &hashtable-remove! */
obj_t BGl_z62hashtablezd2removez12za2zz__hashz00(obj_t BgL_envz00_4517, obj_t BgL_tablez00_4518, obj_t BgL_keyz00_4519)
{
{ /* Llib/hash.scm 641 */
{ /* Llib/hash.scm 642 */
bool_t BgL_tmpz00_8324;
{ /* Llib/hash.scm 642 */
obj_t BgL_auxz00_8325;
if(
STRUCTP(BgL_tablez00_4518))
{ /* Llib/hash.scm 642 */
BgL_auxz00_8325 = BgL_tablez00_4518
; }  else 
{ 
obj_t BgL_auxz00_8328;
BgL_auxz00_8328 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)25575)), BGl_string3467z00zz__hashz00, BGl_string3362z00zz__hashz00, BgL_tablez00_4518); 
FAILURE(BgL_auxz00_8328,BFALSE,BFALSE);} 
BgL_tmpz00_8324 = 
BGl_hashtablezd2removez12zc0zz__hashz00(BgL_auxz00_8325, BgL_keyz00_4519); } 
return 
BBOOL(BgL_tmpz00_8324);} } 

}



/* plain-hashtable-remove! */
bool_t BGl_plainzd2hashtablezd2removez12z12zz__hashz00(obj_t BgL_tablez00_114, obj_t BgL_keyz00_115)
{
{ /* Llib/hash.scm 649 */
{ /* Llib/hash.scm 650 */
obj_t BgL_bucketsz00_1884;
{ /* Llib/hash.scm 650 */
bool_t BgL_test4123z00_8334;
{ /* Llib/hash.scm 650 */
obj_t BgL_tmpz00_8335;
{ /* Llib/hash.scm 650 */
obj_t BgL_res2450z00_3702;
{ /* Llib/hash.scm 650 */
obj_t BgL_aux3197z00_5062;
BgL_aux3197z00_5062 = 
STRUCT_KEY(BgL_tablez00_114); 
if(
SYMBOLP(BgL_aux3197z00_5062))
{ /* Llib/hash.scm 650 */
BgL_res2450z00_3702 = BgL_aux3197z00_5062; }  else 
{ 
obj_t BgL_auxz00_8339;
BgL_auxz00_8339 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)25989)), BGl_string3468z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3197z00_5062); 
FAILURE(BgL_auxz00_8339,BFALSE,BFALSE);} } 
BgL_tmpz00_8335 = BgL_res2450z00_3702; } 
BgL_test4123z00_8334 = 
(BgL_tmpz00_8335==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4123z00_8334)
{ /* Llib/hash.scm 650 */
int BgL_tmpz00_8344;
BgL_tmpz00_8344 = 
(int)(((long)2)); 
BgL_bucketsz00_1884 = 
STRUCT_REF(BgL_tablez00_114, BgL_tmpz00_8344); }  else 
{ /* Llib/hash.scm 650 */
BgL_bucketsz00_1884 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_114); } } 
{ /* Llib/hash.scm 650 */
long BgL_bucketzd2lenzd2_1885;
{ /* Llib/hash.scm 651 */
obj_t BgL_vectorz00_3703;
if(
VECTORP(BgL_bucketsz00_1884))
{ /* Llib/hash.scm 651 */
BgL_vectorz00_3703 = BgL_bucketsz00_1884; }  else 
{ 
obj_t BgL_auxz00_8350;
BgL_auxz00_8350 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)26047)), BGl_string3468z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1884); 
FAILURE(BgL_auxz00_8350,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1885 = 
VECTOR_LENGTH(BgL_vectorz00_3703); } 
{ /* Llib/hash.scm 651 */
long BgL_bucketzd2numzd2_1886;
{ /* Llib/hash.scm 652 */
long BgL_arg1604z00_1909;
{ /* Llib/hash.scm 652 */
long BgL_res2456z00_3719;
{ /* Llib/hash.scm 652 */
obj_t BgL_hashnz00_3704;
{ /* Llib/hash.scm 652 */
bool_t BgL_test4126z00_8355;
{ /* Llib/hash.scm 652 */
obj_t BgL_tmpz00_8356;
{ /* Llib/hash.scm 652 */
obj_t BgL_res2451z00_3710;
{ /* Llib/hash.scm 652 */
obj_t BgL_aux3201z00_5066;
BgL_aux3201z00_5066 = 
STRUCT_KEY(BgL_tablez00_114); 
if(
SYMBOLP(BgL_aux3201z00_5066))
{ /* Llib/hash.scm 652 */
BgL_res2451z00_3710 = BgL_aux3201z00_5066; }  else 
{ 
obj_t BgL_auxz00_8360;
BgL_auxz00_8360 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)26085)), BGl_string3468z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3201z00_5066); 
FAILURE(BgL_auxz00_8360,BFALSE,BFALSE);} } 
BgL_tmpz00_8356 = BgL_res2451z00_3710; } 
BgL_test4126z00_8355 = 
(BgL_tmpz00_8356==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4126z00_8355)
{ /* Llib/hash.scm 652 */
int BgL_tmpz00_8365;
BgL_tmpz00_8365 = 
(int)(((long)4)); 
BgL_hashnz00_3704 = 
STRUCT_REF(BgL_tablez00_114, BgL_tmpz00_8365); }  else 
{ /* Llib/hash.scm 652 */
BgL_hashnz00_3704 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_114); } } 
if(
PROCEDUREP(BgL_hashnz00_3704))
{ /* Llib/hash.scm 652 */
obj_t BgL_arg1316z00_3706;
if(
PROCEDURE_CORRECT_ARITYP(BgL_hashnz00_3704, ((long)1)))
{ /* Llib/hash.scm 652 */
BgL_arg1316z00_3706 = 
PROCEDURE_ENTRY(BgL_hashnz00_3704)(BgL_hashnz00_3704, BgL_keyz00_115, BEOA); }  else 
{ /* Llib/hash.scm 652 */
FAILURE(BGl_string3469z00zz__hashz00,BGl_list3416z00zz__hashz00,BgL_hashnz00_3704);} 
{ /* Llib/hash.scm 652 */
long BgL_nz00_3712;
{ /* Llib/hash.scm 652 */
obj_t BgL_tmpz00_8378;
if(
INTEGERP(BgL_arg1316z00_3706))
{ /* Llib/hash.scm 652 */
BgL_tmpz00_8378 = BgL_arg1316z00_3706
; }  else 
{ 
obj_t BgL_auxz00_8381;
BgL_auxz00_8381 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)26085)), BGl_string3468z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1316z00_3706); 
FAILURE(BgL_auxz00_8381,BFALSE,BFALSE);} 
BgL_nz00_3712 = 
(long)CINT(BgL_tmpz00_8378); } 
if(
(BgL_nz00_3712<((long)0)))
{ /* Llib/hash.scm 652 */
BgL_res2456z00_3719 = 
NEG(BgL_nz00_3712); }  else 
{ /* Llib/hash.scm 652 */
BgL_res2456z00_3719 = BgL_nz00_3712; } } }  else 
{ /* Llib/hash.scm 652 */
BgL_res2456z00_3719 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_115); } } 
BgL_arg1604z00_1909 = BgL_res2456z00_3719; } 
{ /* Llib/hash.scm 652 */
long BgL_res2462z00_3738;
{ /* Llib/hash.scm 652 */
long BgL_n1z00_3720;long BgL_n2z00_3721;
BgL_n1z00_3720 = BgL_arg1604z00_1909; 
BgL_n2z00_3721 = BgL_bucketzd2lenzd2_1885; 
{ /* Llib/hash.scm 652 */
bool_t BgL_test4132z00_8390;
{ /* Llib/hash.scm 652 */
long BgL_arg1909z00_3723;
BgL_arg1909z00_3723 = 
(((BgL_n1z00_3720) | (BgL_n2z00_3721)) & -2147483648); 
BgL_test4132z00_8390 = 
(BgL_arg1909z00_3723==((long)0)); } 
if(BgL_test4132z00_8390)
{ /* Llib/hash.scm 652 */
int32_t BgL_arg1906z00_3724;
{ /* Llib/hash.scm 652 */
int32_t BgL_arg1907z00_3725;int32_t BgL_arg1908z00_3726;
{ /* Llib/hash.scm 652 */
int32_t BgL_res2458z00_3730;
BgL_res2458z00_3730 = 
(int32_t)(BgL_n1z00_3720); 
BgL_arg1907z00_3725 = BgL_res2458z00_3730; } 
{ /* Llib/hash.scm 652 */
int32_t BgL_res2459z00_3732;
BgL_res2459z00_3732 = 
(int32_t)(BgL_n2z00_3721); 
BgL_arg1908z00_3726 = BgL_res2459z00_3732; } 
BgL_arg1906z00_3724 = 
(BgL_arg1907z00_3725%BgL_arg1908z00_3726); } 
{ /* Llib/hash.scm 652 */
long BgL_res2461z00_3737;
{ /* Llib/hash.scm 652 */
long BgL_arg2003z00_3734;
BgL_arg2003z00_3734 = 
(long)(BgL_arg1906z00_3724); 
{ /* Llib/hash.scm 652 */
long BgL_res2460z00_3736;
BgL_res2460z00_3736 = 
(long)(BgL_arg2003z00_3734); 
BgL_res2461z00_3737 = BgL_res2460z00_3736; } } 
BgL_res2462z00_3738 = BgL_res2461z00_3737; } }  else 
{ /* Llib/hash.scm 652 */
BgL_res2462z00_3738 = 
(BgL_n1z00_3720%BgL_n2z00_3721); } } } 
BgL_bucketzd2numzd2_1886 = BgL_res2462z00_3738; } } 
{ /* Llib/hash.scm 652 */
obj_t BgL_bucketz00_1887;
{ /* Llib/hash.scm 653 */
obj_t BgL_vectorz00_3739;
if(
VECTORP(BgL_bucketsz00_1884))
{ /* Llib/hash.scm 653 */
BgL_vectorz00_3739 = BgL_bucketsz00_1884; }  else 
{ 
obj_t BgL_auxz00_8401;
BgL_auxz00_8401 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)26157)), BGl_string3468z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1884); 
FAILURE(BgL_auxz00_8401,BFALSE,BFALSE);} 
BgL_bucketz00_1887 = 
VECTOR_REF(BgL_vectorz00_3739,BgL_bucketzd2numzd2_1886); } 
{ /* Llib/hash.scm 653 */

if(
NULLP(BgL_bucketz00_1887))
{ /* Llib/hash.scm 655 */
return ((bool_t)0);}  else 
{ /* Llib/hash.scm 657 */
bool_t BgL_test4135z00_8408;
{ /* Llib/hash.scm 657 */
obj_t BgL_arg1603z00_1908;
{ /* Llib/hash.scm 657 */
obj_t BgL_pairz00_3742;
if(
PAIRP(BgL_bucketz00_1887))
{ /* Llib/hash.scm 657 */
BgL_pairz00_3742 = BgL_bucketz00_1887; }  else 
{ 
obj_t BgL_auxz00_8411;
BgL_auxz00_8411 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)26249)), BGl_string3468z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_bucketz00_1887); 
FAILURE(BgL_auxz00_8411,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 657 */
obj_t BgL_pairz00_3745;
{ /* Llib/hash.scm 657 */
obj_t BgL_aux3211z00_5077;
BgL_aux3211z00_5077 = 
CAR(BgL_pairz00_3742); 
if(
PAIRP(BgL_aux3211z00_5077))
{ /* Llib/hash.scm 657 */
BgL_pairz00_3745 = BgL_aux3211z00_5077; }  else 
{ 
obj_t BgL_auxz00_8418;
BgL_auxz00_8418 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)26243)), BGl_string3468z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_aux3211z00_5077); 
FAILURE(BgL_auxz00_8418,BFALSE,BFALSE);} } 
BgL_arg1603z00_1908 = 
CAR(BgL_pairz00_3745); } } 
{ /* Llib/hash.scm 657 */
obj_t BgL_eqtz00_3746;
{ /* Llib/hash.scm 657 */
bool_t BgL_test4138z00_8423;
{ /* Llib/hash.scm 657 */
obj_t BgL_tmpz00_8424;
{ /* Llib/hash.scm 657 */
obj_t BgL_res2464z00_3754;
{ /* Llib/hash.scm 657 */
obj_t BgL_aux3213z00_5079;
BgL_aux3213z00_5079 = 
STRUCT_KEY(BgL_tablez00_114); 
if(
SYMBOLP(BgL_aux3213z00_5079))
{ /* Llib/hash.scm 657 */
BgL_res2464z00_3754 = BgL_aux3213z00_5079; }  else 
{ 
obj_t BgL_auxz00_8428;
BgL_auxz00_8428 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)26219)), BGl_string3468z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3213z00_5079); 
FAILURE(BgL_auxz00_8428,BFALSE,BFALSE);} } 
BgL_tmpz00_8424 = BgL_res2464z00_3754; } 
BgL_test4138z00_8423 = 
(BgL_tmpz00_8424==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4138z00_8423)
{ /* Llib/hash.scm 657 */
int BgL_tmpz00_8433;
BgL_tmpz00_8433 = 
(int)(((long)3)); 
BgL_eqtz00_3746 = 
STRUCT_REF(BgL_tablez00_114, BgL_tmpz00_8433); }  else 
{ /* Llib/hash.scm 657 */
BgL_eqtz00_3746 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_114); } } 
if(
PROCEDUREP(BgL_eqtz00_3746))
{ /* Llib/hash.scm 657 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_eqtz00_3746, ((long)2)))
{ /* Llib/hash.scm 657 */
BgL_test4135z00_8408 = 
CBOOL(
PROCEDURE_ENTRY(BgL_eqtz00_3746)(BgL_eqtz00_3746, BgL_arg1603z00_1908, BgL_keyz00_115, BEOA))
; }  else 
{ /* Llib/hash.scm 657 */
FAILURE(BGl_string3469z00zz__hashz00,BGl_list3470z00zz__hashz00,BgL_eqtz00_3746);} }  else 
{ /* Llib/hash.scm 657 */
if(
(BgL_arg1603z00_1908==BgL_keyz00_115))
{ /* Llib/hash.scm 657 */
BgL_test4135z00_8408 = ((bool_t)1)
; }  else 
{ /* Llib/hash.scm 657 */
if(
STRINGP(BgL_arg1603z00_1908))
{ /* Llib/hash.scm 657 */
if(
STRINGP(BgL_keyz00_115))
{ /* Llib/hash.scm 657 */
bool_t BgL_res2472z00_3773;
{ /* Llib/hash.scm 657 */
long BgL_l1z00_3760;
BgL_l1z00_3760 = 
STRING_LENGTH(BgL_arg1603z00_1908); 
if(
(BgL_l1z00_3760==
STRING_LENGTH(BgL_keyz00_115)))
{ /* Llib/hash.scm 657 */
int BgL_arg1788z00_3763;
{ /* Llib/hash.scm 657 */
char * BgL_auxz00_8460;char * BgL_tmpz00_8458;
BgL_auxz00_8460 = 
BSTRING_TO_STRING(BgL_keyz00_115); 
BgL_tmpz00_8458 = 
BSTRING_TO_STRING(BgL_arg1603z00_1908); 
BgL_arg1788z00_3763 = 
memcmp(BgL_tmpz00_8458, BgL_auxz00_8460, BgL_l1z00_3760); } 
BgL_res2472z00_3773 = 
(
(long)(BgL_arg1788z00_3763)==((long)0)); }  else 
{ /* Llib/hash.scm 657 */
BgL_res2472z00_3773 = ((bool_t)0); } } 
BgL_test4135z00_8408 = BgL_res2472z00_3773; }  else 
{ /* Llib/hash.scm 657 */
BgL_test4135z00_8408 = ((bool_t)0)
; } }  else 
{ /* Llib/hash.scm 657 */
BgL_test4135z00_8408 = ((bool_t)0)
; } } } } } 
if(BgL_test4135z00_8408)
{ /* Llib/hash.scm 657 */
{ /* Llib/hash.scm 658 */
obj_t BgL_arg1584z00_1891;
{ /* Llib/hash.scm 658 */
obj_t BgL_pairz00_3774;
if(
PAIRP(BgL_bucketz00_1887))
{ /* Llib/hash.scm 658 */
BgL_pairz00_3774 = BgL_bucketz00_1887; }  else 
{ 
obj_t BgL_auxz00_8467;
BgL_auxz00_8467 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)26305)), BGl_string3468z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_bucketz00_1887); 
FAILURE(BgL_auxz00_8467,BFALSE,BFALSE);} 
BgL_arg1584z00_1891 = 
CDR(BgL_pairz00_3774); } 
{ /* Llib/hash.scm 658 */
obj_t BgL_vectorz00_3775;
if(
VECTORP(BgL_bucketsz00_1884))
{ /* Llib/hash.scm 658 */
BgL_vectorz00_3775 = BgL_bucketsz00_1884; }  else 
{ 
obj_t BgL_auxz00_8474;
BgL_auxz00_8474 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)26281)), BGl_string3468z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_bucketsz00_1884); 
FAILURE(BgL_auxz00_8474,BFALSE,BFALSE);} 
VECTOR_SET(BgL_vectorz00_3775,BgL_bucketzd2numzd2_1886,BgL_arg1584z00_1891); } } 
{ /* Llib/hash.scm 659 */
long BgL_arg1587z00_1892;
{ /* Llib/hash.scm 659 */
obj_t BgL_arg1588z00_1893;
{ /* Llib/hash.scm 659 */
bool_t BgL_test4148z00_8479;
{ /* Llib/hash.scm 659 */
obj_t BgL_tmpz00_8480;
{ /* Llib/hash.scm 659 */
obj_t BgL_res2473z00_3780;
{ /* Llib/hash.scm 659 */
obj_t BgL_aux3221z00_5088;
BgL_aux3221z00_5088 = 
STRUCT_KEY(BgL_tablez00_114); 
if(
SYMBOLP(BgL_aux3221z00_5088))
{ /* Llib/hash.scm 659 */
BgL_res2473z00_3780 = BgL_aux3221z00_5088; }  else 
{ 
obj_t BgL_auxz00_8484;
BgL_auxz00_8484 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)26350)), BGl_string3468z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3221z00_5088); 
FAILURE(BgL_auxz00_8484,BFALSE,BFALSE);} } 
BgL_tmpz00_8480 = BgL_res2473z00_3780; } 
BgL_test4148z00_8479 = 
(BgL_tmpz00_8480==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4148z00_8479)
{ /* Llib/hash.scm 659 */
int BgL_tmpz00_8489;
BgL_tmpz00_8489 = 
(int)(((long)0)); 
BgL_arg1588z00_1893 = 
STRUCT_REF(BgL_tablez00_114, BgL_tmpz00_8489); }  else 
{ /* Llib/hash.scm 659 */
BgL_arg1588z00_1893 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_114); } } 
{ /* Llib/hash.scm 659 */
long BgL_za71za7_3781;
{ /* Llib/hash.scm 659 */
obj_t BgL_tmpz00_8493;
if(
INTEGERP(BgL_arg1588z00_1893))
{ /* Llib/hash.scm 659 */
BgL_tmpz00_8493 = BgL_arg1588z00_1893
; }  else 
{ 
obj_t BgL_auxz00_8496;
BgL_auxz00_8496 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)26372)), BGl_string3468z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1588z00_1893); 
FAILURE(BgL_auxz00_8496,BFALSE,BFALSE);} 
BgL_za71za7_3781 = 
(long)CINT(BgL_tmpz00_8493); } 
BgL_arg1587z00_1892 = 
(BgL_za71za7_3781-((long)1)); } } 
{ /* Llib/hash.scm 659 */
bool_t BgL_test4151z00_8502;
{ /* Llib/hash.scm 659 */
obj_t BgL_tmpz00_8503;
{ /* Llib/hash.scm 659 */
obj_t BgL_res2475z00_3786;
{ /* Llib/hash.scm 659 */
obj_t BgL_aux3225z00_5092;
BgL_aux3225z00_5092 = 
STRUCT_KEY(BgL_tablez00_114); 
if(
SYMBOLP(BgL_aux3225z00_5092))
{ /* Llib/hash.scm 659 */
BgL_res2475z00_3786 = BgL_aux3225z00_5092; }  else 
{ 
obj_t BgL_auxz00_8507;
BgL_auxz00_8507 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)26317)), BGl_string3468z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3225z00_5092); 
FAILURE(BgL_auxz00_8507,BFALSE,BFALSE);} } 
BgL_tmpz00_8503 = BgL_res2475z00_3786; } 
BgL_test4151z00_8502 = 
(BgL_tmpz00_8503==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4151z00_8502)
{ /* Llib/hash.scm 659 */
obj_t BgL_auxz00_8514;int BgL_tmpz00_8512;
BgL_auxz00_8514 = 
BINT(BgL_arg1587z00_1892); 
BgL_tmpz00_8512 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_114, BgL_tmpz00_8512, BgL_auxz00_8514); }  else 
{ /* Llib/hash.scm 659 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_114); } } } 
return ((bool_t)1);}  else 
{ /* Llib/hash.scm 662 */
obj_t BgL_g1062z00_1894;
{ /* Llib/hash.scm 662 */
obj_t BgL_pairz00_3787;
if(
PAIRP(BgL_bucketz00_1887))
{ /* Llib/hash.scm 662 */
BgL_pairz00_3787 = BgL_bucketz00_1887; }  else 
{ 
obj_t BgL_auxz00_8520;
BgL_auxz00_8520 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)26420)), BGl_string3468z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_bucketz00_1887); 
FAILURE(BgL_auxz00_8520,BFALSE,BFALSE);} 
BgL_g1062z00_1894 = 
CDR(BgL_pairz00_3787); } 
{ 
obj_t BgL_bucketz00_1896;obj_t BgL_prevz00_1897;
BgL_bucketz00_1896 = BgL_g1062z00_1894; 
BgL_prevz00_1897 = BgL_bucketz00_1887; 
BgL_zc3z04anonymousza31589ze3z87_1898:
if(
PAIRP(BgL_bucketz00_1896))
{ /* Llib/hash.scm 665 */
bool_t BgL_test4155z00_8527;
{ /* Llib/hash.scm 665 */
obj_t BgL_arg1602z00_1906;
{ /* Llib/hash.scm 665 */
obj_t BgL_pairz00_3792;
{ /* Llib/hash.scm 665 */
obj_t BgL_aux3229z00_5096;
BgL_aux3229z00_5096 = 
CAR(BgL_bucketz00_1896); 
if(
PAIRP(BgL_aux3229z00_5096))
{ /* Llib/hash.scm 665 */
BgL_pairz00_3792 = BgL_aux3229z00_5096; }  else 
{ 
obj_t BgL_auxz00_8531;
BgL_auxz00_8531 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)26507)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_aux3229z00_5096); 
FAILURE(BgL_auxz00_8531,BFALSE,BFALSE);} } 
BgL_arg1602z00_1906 = 
CAR(BgL_pairz00_3792); } 
{ /* Llib/hash.scm 665 */
obj_t BgL_eqtz00_3793;
{ /* Llib/hash.scm 665 */
bool_t BgL_test4157z00_8536;
{ /* Llib/hash.scm 665 */
obj_t BgL_tmpz00_8537;
{ /* Llib/hash.scm 665 */
obj_t BgL_res2477z00_3801;
{ /* Llib/hash.scm 665 */
obj_t BgL_aux3231z00_5098;
BgL_aux3231z00_5098 = 
STRUCT_KEY(BgL_tablez00_114); 
if(
SYMBOLP(BgL_aux3231z00_5098))
{ /* Llib/hash.scm 665 */
BgL_res2477z00_3801 = BgL_aux3231z00_5098; }  else 
{ 
obj_t BgL_auxz00_8541;
BgL_auxz00_8541 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)26483)), BGl_string3370z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3231z00_5098); 
FAILURE(BgL_auxz00_8541,BFALSE,BFALSE);} } 
BgL_tmpz00_8537 = BgL_res2477z00_3801; } 
BgL_test4157z00_8536 = 
(BgL_tmpz00_8537==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4157z00_8536)
{ /* Llib/hash.scm 665 */
int BgL_tmpz00_8546;
BgL_tmpz00_8546 = 
(int)(((long)3)); 
BgL_eqtz00_3793 = 
STRUCT_REF(BgL_tablez00_114, BgL_tmpz00_8546); }  else 
{ /* Llib/hash.scm 665 */
BgL_eqtz00_3793 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_114); } } 
if(
PROCEDUREP(BgL_eqtz00_3793))
{ /* Llib/hash.scm 665 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_eqtz00_3793, ((long)2)))
{ /* Llib/hash.scm 665 */
BgL_test4155z00_8527 = 
CBOOL(
PROCEDURE_ENTRY(BgL_eqtz00_3793)(BgL_eqtz00_3793, BgL_arg1602z00_1906, BgL_keyz00_115, BEOA))
; }  else 
{ /* Llib/hash.scm 665 */
FAILURE(BGl_string3421z00zz__hashz00,BGl_list3473z00zz__hashz00,BgL_eqtz00_3793);} }  else 
{ /* Llib/hash.scm 665 */
if(
(BgL_arg1602z00_1906==BgL_keyz00_115))
{ /* Llib/hash.scm 665 */
BgL_test4155z00_8527 = ((bool_t)1)
; }  else 
{ /* Llib/hash.scm 665 */
if(
STRINGP(BgL_arg1602z00_1906))
{ /* Llib/hash.scm 665 */
if(
STRINGP(BgL_keyz00_115))
{ /* Llib/hash.scm 665 */
bool_t BgL_res2485z00_3820;
{ /* Llib/hash.scm 665 */
long BgL_l1z00_3807;
BgL_l1z00_3807 = 
STRING_LENGTH(BgL_arg1602z00_1906); 
if(
(BgL_l1z00_3807==
STRING_LENGTH(BgL_keyz00_115)))
{ /* Llib/hash.scm 665 */
int BgL_arg1788z00_3810;
{ /* Llib/hash.scm 665 */
char * BgL_auxz00_8573;char * BgL_tmpz00_8571;
BgL_auxz00_8573 = 
BSTRING_TO_STRING(BgL_keyz00_115); 
BgL_tmpz00_8571 = 
BSTRING_TO_STRING(BgL_arg1602z00_1906); 
BgL_arg1788z00_3810 = 
memcmp(BgL_tmpz00_8571, BgL_auxz00_8573, BgL_l1z00_3807); } 
BgL_res2485z00_3820 = 
(
(long)(BgL_arg1788z00_3810)==((long)0)); }  else 
{ /* Llib/hash.scm 665 */
BgL_res2485z00_3820 = ((bool_t)0); } } 
BgL_test4155z00_8527 = BgL_res2485z00_3820; }  else 
{ /* Llib/hash.scm 665 */
BgL_test4155z00_8527 = ((bool_t)0)
; } }  else 
{ /* Llib/hash.scm 665 */
BgL_test4155z00_8527 = ((bool_t)0)
; } } } } } 
if(BgL_test4155z00_8527)
{ /* Llib/hash.scm 665 */
{ /* Llib/hash.scm 667 */
obj_t BgL_arg1596z00_1902;
BgL_arg1596z00_1902 = 
CDR(BgL_bucketz00_1896); 
{ /* Llib/hash.scm 667 */
obj_t BgL_pairz00_3822;
if(
PAIRP(BgL_prevz00_1897))
{ /* Llib/hash.scm 667 */
BgL_pairz00_3822 = BgL_prevz00_1897; }  else 
{ 
obj_t BgL_auxz00_8581;
BgL_auxz00_8581 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)26553)), BGl_string3370z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_prevz00_1897); 
FAILURE(BgL_auxz00_8581,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_3822, BgL_arg1596z00_1902); } } 
{ /* Llib/hash.scm 669 */
long BgL_arg1597z00_1903;
{ /* Llib/hash.scm 669 */
obj_t BgL_arg1598z00_1904;
{ /* Llib/hash.scm 669 */
bool_t BgL_test4166z00_8586;
{ /* Llib/hash.scm 669 */
obj_t BgL_tmpz00_8587;
{ /* Llib/hash.scm 669 */
obj_t BgL_res2486z00_3826;
{ /* Llib/hash.scm 669 */
obj_t BgL_aux3237z00_5105;
BgL_aux3237z00_5105 = 
STRUCT_KEY(BgL_tablez00_114); 
if(
SYMBOLP(BgL_aux3237z00_5105))
{ /* Llib/hash.scm 669 */
BgL_res2486z00_3826 = BgL_aux3237z00_5105; }  else 
{ 
obj_t BgL_auxz00_8591;
BgL_auxz00_8591 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)26619)), BGl_string3370z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3237z00_5105); 
FAILURE(BgL_auxz00_8591,BFALSE,BFALSE);} } 
BgL_tmpz00_8587 = BgL_res2486z00_3826; } 
BgL_test4166z00_8586 = 
(BgL_tmpz00_8587==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4166z00_8586)
{ /* Llib/hash.scm 669 */
int BgL_tmpz00_8596;
BgL_tmpz00_8596 = 
(int)(((long)0)); 
BgL_arg1598z00_1904 = 
STRUCT_REF(BgL_tablez00_114, BgL_tmpz00_8596); }  else 
{ /* Llib/hash.scm 669 */
BgL_arg1598z00_1904 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_114); } } 
{ /* Llib/hash.scm 669 */
long BgL_za71za7_3827;
{ /* Llib/hash.scm 669 */
obj_t BgL_tmpz00_8600;
if(
INTEGERP(BgL_arg1598z00_1904))
{ /* Llib/hash.scm 669 */
BgL_tmpz00_8600 = BgL_arg1598z00_1904
; }  else 
{ 
obj_t BgL_auxz00_8603;
BgL_auxz00_8603 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)26641)), BGl_string3370z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1598z00_1904); 
FAILURE(BgL_auxz00_8603,BFALSE,BFALSE);} 
BgL_za71za7_3827 = 
(long)CINT(BgL_tmpz00_8600); } 
BgL_arg1597z00_1903 = 
(BgL_za71za7_3827-((long)1)); } } 
{ /* Llib/hash.scm 668 */
bool_t BgL_test4169z00_8609;
{ /* Llib/hash.scm 668 */
obj_t BgL_tmpz00_8610;
{ /* Llib/hash.scm 668 */
obj_t BgL_res2488z00_3832;
{ /* Llib/hash.scm 668 */
obj_t BgL_aux3241z00_5109;
BgL_aux3241z00_5109 = 
STRUCT_KEY(BgL_tablez00_114); 
if(
SYMBOLP(BgL_aux3241z00_5109))
{ /* Llib/hash.scm 668 */
BgL_res2488z00_3832 = BgL_aux3241z00_5109; }  else 
{ 
obj_t BgL_auxz00_8614;
BgL_auxz00_8614 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)26575)), BGl_string3370z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3241z00_5109); 
FAILURE(BgL_auxz00_8614,BFALSE,BFALSE);} } 
BgL_tmpz00_8610 = BgL_res2488z00_3832; } 
BgL_test4169z00_8609 = 
(BgL_tmpz00_8610==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4169z00_8609)
{ /* Llib/hash.scm 668 */
obj_t BgL_auxz00_8621;int BgL_tmpz00_8619;
BgL_auxz00_8621 = 
BINT(BgL_arg1597z00_1903); 
BgL_tmpz00_8619 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_114, BgL_tmpz00_8619, BgL_auxz00_8621); }  else 
{ /* Llib/hash.scm 668 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_114); } } } 
return ((bool_t)1);}  else 
{ 
obj_t BgL_prevz00_8627;obj_t BgL_bucketz00_8625;
BgL_bucketz00_8625 = 
CDR(BgL_bucketz00_1896); 
BgL_prevz00_8627 = BgL_bucketz00_1896; 
BgL_prevz00_1897 = BgL_prevz00_8627; 
BgL_bucketz00_1896 = BgL_bucketz00_8625; 
goto BgL_zc3z04anonymousza31589ze3z87_1898;} }  else 
{ /* Llib/hash.scm 664 */
return ((bool_t)0);} } } } } } } } } } 

}



/* plain-hashtable-expand! */
obj_t BGl_plainzd2hashtablezd2expandz12z12zz__hashz00(obj_t BgL_tablez00_117)
{
{ /* Llib/hash.scm 686 */
{ /* Llib/hash.scm 687 */
obj_t BgL_oldzd2buckszd2_1911;
{ /* Llib/hash.scm 687 */
bool_t BgL_test4171z00_8628;
{ /* Llib/hash.scm 687 */
obj_t BgL_tmpz00_8629;
{ /* Llib/hash.scm 687 */
obj_t BgL_res2489z00_3837;
{ /* Llib/hash.scm 687 */
obj_t BgL_aux3243z00_5111;
BgL_aux3243z00_5111 = 
STRUCT_KEY(BgL_tablez00_117); 
if(
SYMBOLP(BgL_aux3243z00_5111))
{ /* Llib/hash.scm 687 */
BgL_res2489z00_3837 = BgL_aux3243z00_5111; }  else 
{ 
obj_t BgL_auxz00_8633;
BgL_auxz00_8633 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)27361)), BGl_string3476z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3243z00_5111); 
FAILURE(BgL_auxz00_8633,BFALSE,BFALSE);} } 
BgL_tmpz00_8629 = BgL_res2489z00_3837; } 
BgL_test4171z00_8628 = 
(BgL_tmpz00_8629==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4171z00_8628)
{ /* Llib/hash.scm 687 */
int BgL_tmpz00_8638;
BgL_tmpz00_8638 = 
(int)(((long)2)); 
BgL_oldzd2buckszd2_1911 = 
STRUCT_REF(BgL_tablez00_117, BgL_tmpz00_8638); }  else 
{ /* Llib/hash.scm 687 */
BgL_oldzd2buckszd2_1911 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_117); } } 
{ /* Llib/hash.scm 687 */
long BgL_lenz00_1912;
{ /* Llib/hash.scm 688 */
obj_t BgL_vectorz00_3838;
if(
VECTORP(BgL_oldzd2buckszd2_1911))
{ /* Llib/hash.scm 688 */
BgL_vectorz00_3838 = BgL_oldzd2buckszd2_1911; }  else 
{ 
obj_t BgL_auxz00_8644;
BgL_auxz00_8644 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)27412)), BGl_string3476z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_oldzd2buckszd2_1911); 
FAILURE(BgL_auxz00_8644,BFALSE,BFALSE);} 
BgL_lenz00_1912 = 
VECTOR_LENGTH(BgL_vectorz00_3838); } 
{ /* Llib/hash.scm 688 */
long BgL_newzd2lenzd2_1913;
BgL_newzd2lenzd2_1913 = 
(((long)2)*BgL_lenz00_1912); 
{ /* Llib/hash.scm 689 */
obj_t BgL_maxzd2lenzd2_1914;
{ /* Llib/hash.scm 690 */
bool_t BgL_test4174z00_8650;
{ /* Llib/hash.scm 690 */
obj_t BgL_tmpz00_8651;
{ /* Llib/hash.scm 690 */
obj_t BgL_res2491z00_3844;
{ /* Llib/hash.scm 690 */
obj_t BgL_aux3247z00_5115;
BgL_aux3247z00_5115 = 
STRUCT_KEY(BgL_tablez00_117); 
if(
SYMBOLP(BgL_aux3247z00_5115))
{ /* Llib/hash.scm 690 */
BgL_res2491z00_3844 = BgL_aux3247z00_5115; }  else 
{ 
obj_t BgL_auxz00_8655;
BgL_auxz00_8655 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)27461)), BGl_string3476z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3247z00_5115); 
FAILURE(BgL_auxz00_8655,BFALSE,BFALSE);} } 
BgL_tmpz00_8651 = BgL_res2491z00_3844; } 
BgL_test4174z00_8650 = 
(BgL_tmpz00_8651==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4174z00_8650)
{ /* Llib/hash.scm 690 */
int BgL_tmpz00_8660;
BgL_tmpz00_8660 = 
(int)(((long)6)); 
BgL_maxzd2lenzd2_1914 = 
STRUCT_REF(BgL_tablez00_117, BgL_tmpz00_8660); }  else 
{ /* Llib/hash.scm 690 */
BgL_maxzd2lenzd2_1914 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_117); } } 
{ /* Llib/hash.scm 690 */

{ /* Llib/hash.scm 692 */
obj_t BgL_nmaxz00_1915;
{ /* Llib/hash.scm 692 */
obj_t BgL_arg1608z00_1918;obj_t BgL_arg1611z00_1919;
{ /* Llib/hash.scm 692 */
bool_t BgL_test4176z00_8664;
{ /* Llib/hash.scm 692 */
obj_t BgL_tmpz00_8665;
{ /* Llib/hash.scm 692 */
obj_t BgL_res2492z00_3848;
{ /* Llib/hash.scm 692 */
obj_t BgL_aux3249z00_5117;
BgL_aux3249z00_5117 = 
STRUCT_KEY(BgL_tablez00_117); 
if(
SYMBOLP(BgL_aux3249z00_5117))
{ /* Llib/hash.scm 692 */
BgL_res2492z00_3848 = BgL_aux3249z00_5117; }  else 
{ 
obj_t BgL_auxz00_8669;
BgL_auxz00_8669 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)27550)), BGl_string3476z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3249z00_5117); 
FAILURE(BgL_auxz00_8669,BFALSE,BFALSE);} } 
BgL_tmpz00_8665 = BgL_res2492z00_3848; } 
BgL_test4176z00_8664 = 
(BgL_tmpz00_8665==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4176z00_8664)
{ /* Llib/hash.scm 692 */
int BgL_tmpz00_8674;
BgL_tmpz00_8674 = 
(int)(((long)1)); 
BgL_arg1608z00_1918 = 
STRUCT_REF(BgL_tablez00_117, BgL_tmpz00_8674); }  else 
{ /* Llib/hash.scm 692 */
BgL_arg1608z00_1918 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_117); } } 
{ /* Llib/hash.scm 693 */
bool_t BgL_test4178z00_8678;
{ /* Llib/hash.scm 693 */
obj_t BgL_tmpz00_8679;
{ /* Llib/hash.scm 693 */
obj_t BgL_res2493z00_3852;
{ /* Llib/hash.scm 693 */
obj_t BgL_aux3251z00_5119;
BgL_aux3251z00_5119 = 
STRUCT_KEY(BgL_tablez00_117); 
if(
SYMBOLP(BgL_aux3251z00_5119))
{ /* Llib/hash.scm 693 */
BgL_res2493z00_3852 = BgL_aux3251z00_5119; }  else 
{ 
obj_t BgL_auxz00_8683;
BgL_auxz00_8683 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)27591)), BGl_string3476z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3251z00_5119); 
FAILURE(BgL_auxz00_8683,BFALSE,BFALSE);} } 
BgL_tmpz00_8679 = BgL_res2493z00_3852; } 
BgL_test4178z00_8678 = 
(BgL_tmpz00_8679==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4178z00_8678)
{ /* Llib/hash.scm 693 */
int BgL_tmpz00_8688;
BgL_tmpz00_8688 = 
(int)(((long)7)); 
BgL_arg1611z00_1919 = 
STRUCT_REF(BgL_tablez00_117, BgL_tmpz00_8688); }  else 
{ /* Llib/hash.scm 693 */
BgL_arg1611z00_1919 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_117); } } 
BgL_nmaxz00_1915 = 
BGl_2za2za2zz__r4_numbers_6_5z00(BgL_arg1608z00_1918, BgL_arg1611z00_1919); } 
{ /* Llib/hash.scm 695 */
obj_t BgL_arg1606z00_1916;
if(
REALP(BgL_nmaxz00_1915))
{ /* Llib/hash.scm 695 */
BgL_arg1606z00_1916 = 
BINT(
(long)(
REAL_TO_DOUBLE(BgL_nmaxz00_1915))); }  else 
{ /* Llib/hash.scm 695 */
BgL_arg1606z00_1916 = BgL_nmaxz00_1915; } 
{ /* Llib/hash.scm 694 */
bool_t BgL_test4181z00_8698;
{ /* Llib/hash.scm 694 */
obj_t BgL_tmpz00_8699;
{ /* Llib/hash.scm 694 */
obj_t BgL_res2496z00_3859;
{ /* Llib/hash.scm 694 */
obj_t BgL_aux3253z00_5121;
BgL_aux3253z00_5121 = 
STRUCT_KEY(BgL_tablez00_117); 
if(
SYMBOLP(BgL_aux3253z00_5121))
{ /* Llib/hash.scm 694 */
BgL_res2496z00_3859 = BgL_aux3253z00_5121; }  else 
{ 
obj_t BgL_auxz00_8703;
BgL_auxz00_8703 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)27632)), BGl_string3476z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3253z00_5121); 
FAILURE(BgL_auxz00_8703,BFALSE,BFALSE);} } 
BgL_tmpz00_8699 = BgL_res2496z00_3859; } 
BgL_test4181z00_8698 = 
(BgL_tmpz00_8699==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4181z00_8698)
{ /* Llib/hash.scm 694 */
int BgL_tmpz00_8708;
BgL_tmpz00_8708 = 
(int)(((long)1)); 
STRUCT_SET(BgL_tablez00_117, BgL_tmpz00_8708, BgL_arg1606z00_1916); }  else 
{ /* Llib/hash.scm 694 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_117); } } } } 
{ /* Llib/hash.scm 697 */
bool_t BgL_test4183z00_8712;
{ /* Llib/hash.scm 697 */
bool_t BgL_test4184z00_8713;
{ /* Llib/hash.scm 697 */
long BgL_n1z00_3860;
{ /* Llib/hash.scm 697 */
obj_t BgL_tmpz00_8714;
if(
INTEGERP(BgL_maxzd2lenzd2_1914))
{ /* Llib/hash.scm 697 */
BgL_tmpz00_8714 = BgL_maxzd2lenzd2_1914
; }  else 
{ 
obj_t BgL_auxz00_8717;
BgL_auxz00_8717 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)27777)), BGl_string3476z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_maxzd2lenzd2_1914); 
FAILURE(BgL_auxz00_8717,BFALSE,BFALSE);} 
BgL_n1z00_3860 = 
(long)CINT(BgL_tmpz00_8714); } 
BgL_test4184z00_8713 = 
(BgL_n1z00_3860<((long)0)); } 
if(BgL_test4184z00_8713)
{ /* Llib/hash.scm 697 */
BgL_test4183z00_8712 = ((bool_t)1)
; }  else 
{ /* Llib/hash.scm 697 */
long BgL_n2z00_3863;
{ /* Llib/hash.scm 697 */
obj_t BgL_tmpz00_8723;
if(
INTEGERP(BgL_maxzd2lenzd2_1914))
{ /* Llib/hash.scm 697 */
BgL_tmpz00_8723 = BgL_maxzd2lenzd2_1914
; }  else 
{ 
obj_t BgL_auxz00_8726;
BgL_auxz00_8726 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)27802)), BGl_string3476z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_maxzd2lenzd2_1914); 
FAILURE(BgL_auxz00_8726,BFALSE,BFALSE);} 
BgL_n2z00_3863 = 
(long)CINT(BgL_tmpz00_8723); } 
BgL_test4183z00_8712 = 
(BgL_newzd2lenzd2_1913<=BgL_n2z00_3863); } } 
if(BgL_test4183z00_8712)
{ /* Llib/hash.scm 698 */
obj_t BgL_newzd2buckszd2_1922;
BgL_newzd2buckszd2_1922 = 
make_vector(BgL_newzd2lenzd2_1913, BNIL); 
{ /* Llib/hash.scm 699 */
bool_t BgL_test4187z00_8733;
{ /* Llib/hash.scm 699 */
obj_t BgL_tmpz00_8734;
{ /* Llib/hash.scm 699 */
obj_t BgL_res2499z00_3868;
{ /* Llib/hash.scm 699 */
obj_t BgL_aux3259z00_5127;
BgL_aux3259z00_5127 = 
STRUCT_KEY(BgL_tablez00_117); 
if(
SYMBOLP(BgL_aux3259z00_5127))
{ /* Llib/hash.scm 699 */
BgL_res2499z00_3868 = BgL_aux3259z00_5127; }  else 
{ 
obj_t BgL_auxz00_8738;
BgL_auxz00_8738 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)27866)), BGl_string3476z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3259z00_5127); 
FAILURE(BgL_auxz00_8738,BFALSE,BFALSE);} } 
BgL_tmpz00_8734 = BgL_res2499z00_3868; } 
BgL_test4187z00_8733 = 
(BgL_tmpz00_8734==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4187z00_8733)
{ /* Llib/hash.scm 699 */
int BgL_tmpz00_8743;
BgL_tmpz00_8743 = 
(int)(((long)2)); 
STRUCT_SET(BgL_tablez00_117, BgL_tmpz00_8743, BgL_newzd2buckszd2_1922); }  else 
{ /* Llib/hash.scm 699 */
BGl_errorz00zz__errorz00(BGl_string3319z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_117); } } 
{ 
long BgL_iz00_1924;
{ /* Llib/hash.scm 700 */
bool_t BgL_tmpz00_8747;
BgL_iz00_1924 = ((long)0); 
BgL_zc3z04anonymousza31614ze3z87_1925:
if(
(BgL_iz00_1924<BgL_lenz00_1912))
{ /* Llib/hash.scm 701 */
{ /* Llib/hash.scm 702 */
obj_t BgL_g1118z00_1927;
{ /* Llib/hash.scm 708 */
obj_t BgL_vectorz00_3872;
if(
VECTORP(BgL_oldzd2buckszd2_1911))
{ /* Llib/hash.scm 708 */
BgL_vectorz00_3872 = BgL_oldzd2buckszd2_1911; }  else 
{ 
obj_t BgL_auxz00_8752;
BgL_auxz00_8752 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)28206)), BGl_string3370z00zz__hashz00, BGl_string3369z00zz__hashz00, BgL_oldzd2buckszd2_1911); 
FAILURE(BgL_auxz00_8752,BFALSE,BFALSE);} 
BgL_g1118z00_1927 = 
VECTOR_REF(BgL_vectorz00_3872,BgL_iz00_1924); } 
{ 
obj_t BgL_l1116z00_1929;
BgL_l1116z00_1929 = BgL_g1118z00_1927; 
BgL_zc3z04anonymousza31616ze3z87_1930:
if(
PAIRP(BgL_l1116z00_1929))
{ /* Llib/hash.scm 708 */
{ /* Llib/hash.scm 703 */
obj_t BgL_cellz00_1932;
BgL_cellz00_1932 = 
CAR(BgL_l1116z00_1929); 
{ /* Llib/hash.scm 703 */
obj_t BgL_keyz00_1933;
{ /* Llib/hash.scm 703 */
obj_t BgL_pairz00_3876;
if(
PAIRP(BgL_cellz00_1932))
{ /* Llib/hash.scm 703 */
BgL_pairz00_3876 = BgL_cellz00_1932; }  else 
{ 
obj_t BgL_auxz00_8762;
BgL_auxz00_8762 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)28003)), BGl_string3477z00zz__hashz00, BGl_string3372z00zz__hashz00, BgL_cellz00_1932); 
FAILURE(BgL_auxz00_8762,BFALSE,BFALSE);} 
BgL_keyz00_1933 = 
CAR(BgL_pairz00_3876); } 
{ /* Llib/hash.scm 703 */
long BgL_nz00_1934;
{ /* Llib/hash.scm 704 */
long BgL_res2507z00_3892;
{ /* Llib/hash.scm 704 */
obj_t BgL_hashnz00_3877;
{ /* Llib/hash.scm 704 */
bool_t BgL_test4193z00_8767;
{ /* Llib/hash.scm 704 */
obj_t BgL_tmpz00_8768;
{ /* Llib/hash.scm 704 */
obj_t BgL_res2502z00_3883;
{ /* Llib/hash.scm 704 */
obj_t BgL_aux3265z00_5133;
BgL_aux3265z00_5133 = 
STRUCT_KEY(BgL_tablez00_117); 
if(
SYMBOLP(BgL_aux3265z00_5133))
{ /* Llib/hash.scm 704 */
BgL_res2502z00_3883 = BgL_aux3265z00_5133; }  else 
{ 
obj_t BgL_auxz00_8772;
BgL_auxz00_8772 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)28024)), BGl_string3477z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3265z00_5133); 
FAILURE(BgL_auxz00_8772,BFALSE,BFALSE);} } 
BgL_tmpz00_8768 = BgL_res2502z00_3883; } 
BgL_test4193z00_8767 = 
(BgL_tmpz00_8768==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4193z00_8767)
{ /* Llib/hash.scm 704 */
int BgL_tmpz00_8777;
BgL_tmpz00_8777 = 
(int)(((long)4)); 
BgL_hashnz00_3877 = 
STRUCT_REF(BgL_tablez00_117, BgL_tmpz00_8777); }  else 
{ /* Llib/hash.scm 704 */
BgL_hashnz00_3877 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_117); } } 
if(
PROCEDUREP(BgL_hashnz00_3877))
{ /* Llib/hash.scm 704 */
obj_t BgL_arg1316z00_3879;
if(
PROCEDURE_CORRECT_ARITYP(BgL_hashnz00_3877, ((long)1)))
{ /* Llib/hash.scm 704 */
BgL_arg1316z00_3879 = 
PROCEDURE_ENTRY(BgL_hashnz00_3877)(BgL_hashnz00_3877, BgL_keyz00_1933, BEOA); }  else 
{ /* Llib/hash.scm 704 */
FAILURE(BGl_string3478z00zz__hashz00,BGl_list3416z00zz__hashz00,BgL_hashnz00_3877);} 
{ /* Llib/hash.scm 704 */
long BgL_nz00_3885;
{ /* Llib/hash.scm 704 */
obj_t BgL_tmpz00_8790;
if(
INTEGERP(BgL_arg1316z00_3879))
{ /* Llib/hash.scm 704 */
BgL_tmpz00_8790 = BgL_arg1316z00_3879
; }  else 
{ 
obj_t BgL_auxz00_8793;
BgL_auxz00_8793 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)28024)), BGl_string3477z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1316z00_3879); 
FAILURE(BgL_auxz00_8793,BFALSE,BFALSE);} 
BgL_nz00_3885 = 
(long)CINT(BgL_tmpz00_8790); } 
if(
(BgL_nz00_3885<((long)0)))
{ /* Llib/hash.scm 704 */
BgL_res2507z00_3892 = 
NEG(BgL_nz00_3885); }  else 
{ /* Llib/hash.scm 704 */
BgL_res2507z00_3892 = BgL_nz00_3885; } } }  else 
{ /* Llib/hash.scm 704 */
BgL_res2507z00_3892 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_1933); } } 
BgL_nz00_1934 = BgL_res2507z00_3892; } 
{ /* Llib/hash.scm 704 */
long BgL_hz00_1935;
{ /* Llib/hash.scm 705 */
long BgL_res2513z00_3911;
{ /* Llib/hash.scm 705 */
long BgL_n1z00_3893;long BgL_n2z00_3894;
BgL_n1z00_3893 = BgL_nz00_1934; 
BgL_n2z00_3894 = BgL_newzd2lenzd2_1913; 
{ /* Llib/hash.scm 705 */
bool_t BgL_test4199z00_8802;
{ /* Llib/hash.scm 705 */
long BgL_arg1909z00_3896;
BgL_arg1909z00_3896 = 
(((BgL_n1z00_3893) | (BgL_n2z00_3894)) & -2147483648); 
BgL_test4199z00_8802 = 
(BgL_arg1909z00_3896==((long)0)); } 
if(BgL_test4199z00_8802)
{ /* Llib/hash.scm 705 */
int32_t BgL_arg1906z00_3897;
{ /* Llib/hash.scm 705 */
int32_t BgL_arg1907z00_3898;int32_t BgL_arg1908z00_3899;
{ /* Llib/hash.scm 705 */
int32_t BgL_res2509z00_3903;
BgL_res2509z00_3903 = 
(int32_t)(BgL_n1z00_3893); 
BgL_arg1907z00_3898 = BgL_res2509z00_3903; } 
{ /* Llib/hash.scm 705 */
int32_t BgL_res2510z00_3905;
BgL_res2510z00_3905 = 
(int32_t)(BgL_n2z00_3894); 
BgL_arg1908z00_3899 = BgL_res2510z00_3905; } 
BgL_arg1906z00_3897 = 
(BgL_arg1907z00_3898%BgL_arg1908z00_3899); } 
{ /* Llib/hash.scm 705 */
long BgL_res2512z00_3910;
{ /* Llib/hash.scm 705 */
long BgL_arg2003z00_3907;
BgL_arg2003z00_3907 = 
(long)(BgL_arg1906z00_3897); 
{ /* Llib/hash.scm 705 */
long BgL_res2511z00_3909;
BgL_res2511z00_3909 = 
(long)(BgL_arg2003z00_3907); 
BgL_res2512z00_3910 = BgL_res2511z00_3909; } } 
BgL_res2513z00_3911 = BgL_res2512z00_3910; } }  else 
{ /* Llib/hash.scm 705 */
BgL_res2513z00_3911 = 
(BgL_n1z00_3893%BgL_n2z00_3894); } } } 
BgL_hz00_1935 = BgL_res2513z00_3911; } 
{ /* Llib/hash.scm 705 */

{ /* Llib/hash.scm 707 */
obj_t BgL_arg1618z00_1936;
{ /* Llib/hash.scm 707 */
obj_t BgL_arg1619z00_1937;
{ /* Llib/hash.scm 707 */
bool_t BgL_test4200z00_8811;
{ /* Llib/hash.scm 707 */
long BgL_tmpz00_8812;
BgL_tmpz00_8812 = 
VECTOR_LENGTH(BgL_newzd2buckszd2_1922); 
BgL_test4200z00_8811 = 
BOUND_CHECK(BgL_hz00_1935, BgL_tmpz00_8812); } 
if(BgL_test4200z00_8811)
{ /* Llib/hash.scm 707 */
BgL_arg1619z00_1937 = 
VECTOR_REF(BgL_newzd2buckszd2_1922,BgL_hz00_1935); }  else 
{ 
obj_t BgL_auxz00_8816;
BgL_auxz00_8816 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)28154)), BGl_string3323z00zz__hashz00, BgL_newzd2buckszd2_1922, 
(int)(
VECTOR_LENGTH(BgL_newzd2buckszd2_1922)), 
(int)(BgL_hz00_1935)); 
FAILURE(BgL_auxz00_8816,BFALSE,BFALSE);} } 
BgL_arg1618z00_1936 = 
MAKE_YOUNG_PAIR(BgL_cellz00_1932, BgL_arg1619z00_1937); } 
VECTOR_SET(BgL_newzd2buckszd2_1922,BgL_hz00_1935,BgL_arg1618z00_1936); } } } } } } 
{ 
obj_t BgL_l1116z00_8825;
BgL_l1116z00_8825 = 
CDR(BgL_l1116z00_1929); 
BgL_l1116z00_1929 = BgL_l1116z00_8825; 
goto BgL_zc3z04anonymousza31616ze3z87_1930;} }  else 
{ /* Llib/hash.scm 708 */
if(
NULLP(BgL_l1116z00_1929))
{ /* Llib/hash.scm 708 */BTRUE; }  else 
{ /* Llib/hash.scm 708 */
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string3399z00zz__hashz00, BGl_string3400z00zz__hashz00, BgL_l1116z00_1929, BGl_string3314z00zz__hashz00, 
BINT(((long)27957))); } } } } 
{ 
long BgL_iz00_8831;
BgL_iz00_8831 = 
(BgL_iz00_1924+((long)1)); 
BgL_iz00_1924 = BgL_iz00_8831; 
goto BgL_zc3z04anonymousza31614ze3z87_1925;} }  else 
{ /* Llib/hash.scm 701 */
BgL_tmpz00_8747 = ((bool_t)0)
; } 
return 
BBOOL(BgL_tmpz00_8747);} } }  else 
{ /* Llib/hash.scm 713 */
obj_t BgL_arg1624z00_1943;
{ /* Llib/hash.scm 713 */
long BgL_arg1626z00_1944;
{ /* Llib/hash.scm 713 */
long BgL_res2517z00_3925;
{ /* Llib/hash.scm 274 */
bool_t BgL_test4202z00_8834;
{ /* Llib/hash.scm 274 */
obj_t BgL_tmpz00_8835;
{ /* Llib/hash.scm 274 */
obj_t BgL_res2516z00_3924;
{ /* Llib/hash.scm 274 */
obj_t BgL_aux3271z00_5140;
BgL_aux3271z00_5140 = 
STRUCT_KEY(BgL_tablez00_117); 
if(
SYMBOLP(BgL_aux3271z00_5140))
{ /* Llib/hash.scm 274 */
BgL_res2516z00_3924 = BgL_aux3271z00_5140; }  else 
{ 
obj_t BgL_auxz00_8839;
BgL_auxz00_8839 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)10075)), BGl_string3476z00zz__hashz00, BGl_string3318z00zz__hashz00, BgL_aux3271z00_5140); 
FAILURE(BgL_auxz00_8839,BFALSE,BFALSE);} } 
BgL_tmpz00_8835 = BgL_res2516z00_3924; } 
BgL_test4202z00_8834 = 
(BgL_tmpz00_8835==BGl_symbol3316z00zz__hashz00); } 
if(BgL_test4202z00_8834)
{ /* Llib/hash.scm 274 */
obj_t BgL_tmpz00_8844;
{ /* Llib/hash.scm 274 */
obj_t BgL_aux3273z00_5142;
{ /* Llib/hash.scm 274 */
int BgL_tmpz00_8845;
BgL_tmpz00_8845 = 
(int)(((long)0)); 
BgL_aux3273z00_5142 = 
STRUCT_REF(BgL_tablez00_117, BgL_tmpz00_8845); } 
if(
INTEGERP(BgL_aux3273z00_5142))
{ /* Llib/hash.scm 274 */
BgL_tmpz00_8844 = BgL_aux3273z00_5142
; }  else 
{ 
obj_t BgL_auxz00_8850;
BgL_auxz00_8850 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)10075)), BGl_string3476z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_aux3273z00_5142); 
FAILURE(BgL_auxz00_8850,BFALSE,BFALSE);} } 
BgL_res2517z00_3925 = 
(long)CINT(BgL_tmpz00_8844); }  else 
{ /* Llib/hash.scm 274 */
obj_t BgL_tmpz00_8855;
{ /* Llib/hash.scm 274 */
obj_t BgL_aux3275z00_5144;
BgL_aux3275z00_5144 = 
BGl_errorz00zz__errorz00(BGl_string3359z00zz__hashz00, BGl_string3317z00zz__hashz00, BgL_tablez00_117); 
if(
INTEGERP(BgL_aux3275z00_5144))
{ /* Llib/hash.scm 274 */
BgL_tmpz00_8855 = BgL_aux3275z00_5144
; }  else 
{ 
obj_t BgL_auxz00_8859;
BgL_auxz00_8859 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)10075)), BGl_string3476z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_aux3275z00_5144); 
FAILURE(BgL_auxz00_8859,BFALSE,BFALSE);} } 
BgL_res2517z00_3925 = 
(long)CINT(BgL_tmpz00_8855); } } 
BgL_arg1626z00_1944 = BgL_res2517z00_3925; } 
{ /* Llib/hash.scm 711 */
obj_t BgL_list1627z00_1945;
{ /* Llib/hash.scm 711 */
obj_t BgL_arg1628z00_1946;
{ /* Llib/hash.scm 711 */
obj_t BgL_arg1629z00_1947;
BgL_arg1629z00_1947 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg1626z00_1944), BNIL); 
BgL_arg1628z00_1946 = 
MAKE_YOUNG_PAIR(BgL_maxzd2lenzd2_1914, BgL_arg1629z00_1947); } 
BgL_list1627z00_1945 = 
MAKE_YOUNG_PAIR(
BINT(BgL_newzd2lenzd2_1913), BgL_arg1628z00_1946); } 
BgL_arg1624z00_1943 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string3479z00zz__hashz00, BgL_list1627z00_1945); } } 
return 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BgL_arg1624z00_1943, BgL_tablez00_117);} } } } } } } } 

}



/* get-hashnumber */
BGL_EXPORTED_DEF long BGl_getzd2hashnumberzd2zz__hashz00(obj_t BgL_keyz00_118)
{
{ /* Llib/hash.scm 719 */
BGl_getzd2hashnumberzd2zz__hashz00:
if(
STRINGP(BgL_keyz00_118))
{ /* Llib/hash.scm 722 */
long BgL_arg1631z00_1950;
BgL_arg1631z00_1950 = 
bgl_string_hash_number(
BSTRING_TO_STRING(BgL_keyz00_118)); 
if(
(BgL_arg1631z00_1950<((long)0)))
{ /* Llib/hash.scm 722 */
return 
NEG(BgL_arg1631z00_1950);}  else 
{ /* Llib/hash.scm 722 */
return BgL_arg1631z00_1950;} }  else 
{ /* Llib/hash.scm 721 */
if(
SYMBOLP(BgL_keyz00_118))
{ /* Llib/hash.scm 724 */
long BgL_arg1633z00_1952;
BgL_arg1633z00_1952 = 
bgl_symbol_hash_number(BgL_keyz00_118); 
if(
(BgL_arg1633z00_1952<((long)0)))
{ /* Llib/hash.scm 724 */
return 
NEG(BgL_arg1633z00_1952);}  else 
{ /* Llib/hash.scm 724 */
return BgL_arg1633z00_1952;} }  else 
{ /* Llib/hash.scm 723 */
if(
KEYWORDP(BgL_keyz00_118))
{ /* Llib/hash.scm 726 */
long BgL_arg1635z00_1954;
BgL_arg1635z00_1954 = 
bgl_keyword_hash_number(BgL_keyz00_118); 
if(
(BgL_arg1635z00_1954<((long)0)))
{ /* Llib/hash.scm 726 */
return 
NEG(BgL_arg1635z00_1954);}  else 
{ /* Llib/hash.scm 726 */
return BgL_arg1635z00_1954;} }  else 
{ /* Llib/hash.scm 725 */
if(
INTEGERP(BgL_keyz00_118))
{ /* Llib/hash.scm 728 */
long BgL_nz00_3951;
BgL_nz00_3951 = 
(long)CINT(BgL_keyz00_118); 
if(
(BgL_nz00_3951<((long)0)))
{ /* Llib/hash.scm 728 */
return 
NEG(BgL_nz00_3951);}  else 
{ /* Llib/hash.scm 728 */
return BgL_nz00_3951;} }  else 
{ /* Llib/hash.scm 727 */
if(
ELONGP(BgL_keyz00_118))
{ /* Llib/hash.scm 730 */
long BgL_arg1639z00_1957;
{ /* Llib/hash.scm 730 */
long BgL_tmpz00_8898;
BgL_tmpz00_8898 = 
BELONG_TO_LONG(BgL_keyz00_118); 
BgL_arg1639z00_1957 = 
(long)(BgL_tmpz00_8898); } 
if(
(BgL_arg1639z00_1957<((long)0)))
{ /* Llib/hash.scm 730 */
return 
NEG(BgL_arg1639z00_1957);}  else 
{ /* Llib/hash.scm 730 */
return BgL_arg1639z00_1957;} }  else 
{ /* Llib/hash.scm 729 */
if(
LLONGP(BgL_keyz00_118))
{ /* Llib/hash.scm 732 */
long BgL_arg1641z00_1959;
{ /* Llib/hash.scm 732 */
BGL_LONGLONG_T BgL_tmpz00_8906;
BgL_tmpz00_8906 = 
BLLONG_TO_LLONG(BgL_keyz00_118); 
BgL_arg1641z00_1959 = 
(long)(BgL_tmpz00_8906); } 
if(
(BgL_arg1641z00_1959<((long)0)))
{ /* Llib/hash.scm 732 */
return 
NEG(BgL_arg1641z00_1959);}  else 
{ /* Llib/hash.scm 732 */
return BgL_arg1641z00_1959;} }  else 
{ /* Llib/hash.scm 731 */
if(
BGL_OBJECTP(BgL_keyz00_118))
{ /* Llib/hash.scm 734 */
int BgL_arg1643z00_1961;
BgL_arg1643z00_1961 = 
BGl_objectzd2hashnumberzd2zz__objectz00(
((BgL_objectz00_bglt)BgL_keyz00_118)); 
{ /* Llib/hash.scm 734 */
long BgL_nz00_3975;
BgL_nz00_3975 = 
(long)(BgL_arg1643z00_1961); 
if(
(BgL_nz00_3975<((long)0)))
{ /* Llib/hash.scm 734 */
return 
NEG(BgL_nz00_3975);}  else 
{ /* Llib/hash.scm 734 */
return BgL_nz00_3975;} } }  else 
{ /* Llib/hash.scm 733 */
if(
FOREIGNP(BgL_keyz00_118))
{ /* Llib/hash.scm 736 */
long BgL_arg1645z00_1963;
BgL_arg1645z00_1963 = 
bgl_foreign_hash_number(BgL_keyz00_118); 
if(
(BgL_arg1645z00_1963<((long)0)))
{ /* Llib/hash.scm 736 */
return 
NEG(BgL_arg1645z00_1963);}  else 
{ /* Llib/hash.scm 736 */
return BgL_arg1645z00_1963;} }  else 
{ /* Llib/hash.scm 737 */
bool_t BgL_test4222z00_8926;
if(
INTEGERP(BgL_keyz00_118))
{ /* Llib/hash.scm 737 */
BgL_test4222z00_8926 = ((bool_t)1)
; }  else 
{ /* Llib/hash.scm 737 */
BgL_test4222z00_8926 = 
REALP(BgL_keyz00_118)
; } 
if(BgL_test4222z00_8926)
{ /* Llib/hash.scm 738 */
long BgL_arg1648z00_1965;
{ /* Llib/hash.scm 738 */
double BgL_xz00_3992;
{ /* Llib/hash.scm 738 */
obj_t BgL_tmpz00_8930;
if(
REALP(BgL_keyz00_118))
{ /* Llib/hash.scm 738 */
BgL_tmpz00_8930 = BgL_keyz00_118
; }  else 
{ 
obj_t BgL_auxz00_8933;
BgL_auxz00_8933 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)29176)), BGl_string3480z00zz__hashz00, BGl_string3481z00zz__hashz00, BgL_keyz00_118); 
FAILURE(BgL_auxz00_8933,BFALSE,BFALSE);} 
BgL_xz00_3992 = 
REAL_TO_DOUBLE(BgL_tmpz00_8930); } 
BgL_arg1648z00_1965 = 
(long)(BgL_xz00_3992); } 
{ 
obj_t BgL_keyz00_8939;
BgL_keyz00_8939 = 
BINT(BgL_arg1648z00_1965); 
BgL_keyz00_118 = BgL_keyz00_8939; 
goto BGl_getzd2hashnumberzd2zz__hashz00;} }  else 
{ /* Llib/hash.scm 740 */
long BgL_arg1649z00_1966;
BgL_arg1649z00_1966 = 
bgl_obj_hash_number(BgL_keyz00_118); 
if(
(BgL_arg1649z00_1966<((long)0)))
{ /* Llib/hash.scm 740 */
return 
NEG(BgL_arg1649z00_1966);}  else 
{ /* Llib/hash.scm 740 */
return BgL_arg1649z00_1966;} } } } } } } } } } } 

}



/* &get-hashnumber */
obj_t BGl_z62getzd2hashnumberzb0zz__hashz00(obj_t BgL_envz00_4520, obj_t BgL_keyz00_4521)
{
{ /* Llib/hash.scm 719 */
return 
BINT(
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_4521));} 

}



/* get-hashnumber-persistent */
BGL_EXPORTED_DEF long BGl_getzd2hashnumberzd2persistentz00zz__hashz00(obj_t BgL_keyz00_119)
{
{ /* Llib/hash.scm 747 */
return 
BGl_objzd2hashze70z35zz__hashz00(BgL_keyz00_119);} 

}



/* obj-hash~0 */
long BGl_objzd2hashze70z35zz__hashz00(obj_t BgL_keyz00_2015)
{
{ /* Llib/hash.scm 809 */
BGl_objzd2hashze70z35zz__hashz00:
{ 
obj_t BgL_keyz00_1973;obj_t BgL_keyz00_1998;
if(
CNSTP(BgL_keyz00_2015))
{ /* Llib/hash.scm 777 */
if(
(BgL_keyz00_2015==BTRUE))
{ /* Llib/hash.scm 779 */
return ((long)12);}  else 
{ /* Llib/hash.scm 779 */
if(
(BgL_keyz00_2015==BFALSE))
{ /* Llib/hash.scm 780 */
return ((long)445);}  else 
{ /* Llib/hash.scm 780 */
if(
(BgL_keyz00_2015==BUNSPEC))
{ /* Llib/hash.scm 781 */
return ((long)3199);}  else 
{ /* Llib/hash.scm 781 */
if(
(BgL_keyz00_2015==BNIL))
{ /* Llib/hash.scm 782 */
return ((long)453343);}  else 
{ /* Llib/hash.scm 782 */
return ((long)21354);} } } } }  else 
{ /* Llib/hash.scm 777 */
if(
STRINGP(BgL_keyz00_2015))
{ /* Llib/hash.scm 784 */
return 
(((long)134217727) & 
bgl_string_hash_number(
BSTRING_TO_STRING(BgL_keyz00_2015)));}  else 
{ /* Llib/hash.scm 784 */
if(
SYMBOLP(BgL_keyz00_2015))
{ /* Llib/hash.scm 786 */
return 
(((long)134217727) & 
bgl_symbol_hash_number(BgL_keyz00_2015));}  else 
{ /* Llib/hash.scm 786 */
if(
KEYWORDP(BgL_keyz00_2015))
{ /* Llib/hash.scm 788 */
return 
(((long)134217727) & 
bgl_keyword_hash_number(BgL_keyz00_2015));}  else 
{ /* Llib/hash.scm 788 */
if(
CHARP(BgL_keyz00_2015))
{ /* Llib/hash.scm 790 */
return 
(((long)134217727) & 
(
CCHAR(BgL_keyz00_2015)));}  else 
{ /* Llib/hash.scm 790 */
if(
INTEGERP(BgL_keyz00_2015))
{ /* Llib/hash.scm 792 */
return 
(((long)134217727) & 
(long)CINT(BgL_keyz00_2015));}  else 
{ /* Llib/hash.scm 792 */
if(
ELONGP(BgL_keyz00_2015))
{ /* Llib/hash.scm 795 */
long BgL_arg1700z00_2032;
{ /* Llib/hash.scm 795 */
long BgL_tmpz00_8982;
BgL_tmpz00_8982 = 
BELONG_TO_LONG(BgL_keyz00_2015); 
BgL_arg1700z00_2032 = 
(long)(BgL_tmpz00_8982); } 
return 
(((long)134217727) & BgL_arg1700z00_2032);}  else 
{ /* Llib/hash.scm 794 */
if(
LLONGP(BgL_keyz00_2015))
{ /* Llib/hash.scm 797 */
long BgL_arg1702z00_2034;
{ /* Llib/hash.scm 797 */
BGL_LONGLONG_T BgL_tmpz00_8988;
BgL_tmpz00_8988 = 
BLLONG_TO_LLONG(BgL_keyz00_2015); 
BgL_arg1702z00_2034 = 
(long)(BgL_tmpz00_8988); } 
return 
(((long)134217727) & BgL_arg1702z00_2034);}  else 
{ /* Llib/hash.scm 796 */
if(
UCS2P(BgL_keyz00_2015))
{ /* Llib/hash.scm 799 */
long BgL_arg1704z00_2036;
{ /* Llib/hash.scm 799 */
int BgL_arg1707z00_2037;
{ /* Llib/hash.scm 799 */
int BgL_res2594z00_4083;
{ /* Llib/hash.scm 799 */
ucs2_t BgL_ucs2z00_4082;
BgL_ucs2z00_4082 = 
CUCS2(BgL_keyz00_2015); 
{ /* Llib/hash.scm 799 */
obj_t BgL_tmpz00_8995;
BgL_tmpz00_8995 = 
BUCS2(BgL_ucs2z00_4082); 
BgL_res2594z00_4083 = 
CUCS2(BgL_tmpz00_8995); } } 
BgL_arg1707z00_2037 = BgL_res2594z00_4083; } 
BgL_arg1704z00_2036 = 
(((long)39434) ^ 
(long)(BgL_arg1707z00_2037)); } 
return 
(((long)134217727) & BgL_arg1704z00_2036);}  else 
{ /* Llib/hash.scm 798 */
if(
BGL_DATEP(BgL_keyz00_2015))
{ /* Llib/hash.scm 801 */
long BgL_arg1709z00_2039;
{ /* Llib/hash.scm 801 */
long BgL_arg1710z00_2040;
{ /* Llib/hash.scm 801 */
long BgL_arg1711z00_2041;
BgL_arg1711z00_2041 = 
bgl_date_to_seconds(BgL_keyz00_2015); 
BgL_arg1710z00_2040 = 
BGl_objzd2hashze70z35zz__hashz00(
make_belong(BgL_arg1711z00_2041)); } 
BgL_arg1709z00_2039 = 
(((long)908) ^ BgL_arg1710z00_2040); } 
return 
(((long)134217727) & BgL_arg1709z00_2039);}  else 
{ /* Llib/hash.scm 802 */
bool_t BgL_test4240z00_9008;
if(
INTEGERP(BgL_keyz00_2015))
{ /* Llib/hash.scm 802 */
BgL_test4240z00_9008 = ((bool_t)1)
; }  else 
{ /* Llib/hash.scm 802 */
BgL_test4240z00_9008 = 
REALP(BgL_keyz00_2015)
; } 
if(BgL_test4240z00_9008)
{ /* Llib/hash.scm 803 */
long BgL_arg1713z00_2043;
{ /* Llib/hash.scm 803 */
double BgL_tmpz00_9012;
{ /* Llib/hash.scm 803 */
double BgL_r1z00_4097;
{ /* Llib/hash.scm 803 */
obj_t BgL_tmpz00_9013;
if(
REALP(BgL_keyz00_2015))
{ /* Llib/hash.scm 803 */
BgL_tmpz00_9013 = BgL_keyz00_2015
; }  else 
{ 
obj_t BgL_auxz00_9016;
BgL_auxz00_9016 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)31130)), BGl_string3492z00zz__hashz00, BGl_string3481z00zz__hashz00, BgL_keyz00_2015); 
FAILURE(BgL_auxz00_9016,BFALSE,BFALSE);} 
BgL_r1z00_4097 = 
REAL_TO_DOUBLE(BgL_tmpz00_9013); } 
BgL_tmpz00_9012 = 
(BgL_r1z00_4097*((double)1000.0)); } 
BgL_arg1713z00_2043 = 
(long)(BgL_tmpz00_9012); } 
{ 
obj_t BgL_keyz00_9023;
BgL_keyz00_9023 = 
BINT(BgL_arg1713z00_2043); 
BgL_keyz00_2015 = BgL_keyz00_9023; 
goto BGl_objzd2hashze70z35zz__hashz00;} }  else 
{ /* Llib/hash.scm 802 */
if(
UCS2_STRINGP(BgL_keyz00_2015))
{ /* Llib/hash.scm 750 */
long BgL_tmpz00_9027;
BgL_keyz00_1998 = BgL_keyz00_2015; 
{ /* Llib/hash.scm 765 */
int BgL_lenz00_2000;
BgL_lenz00_2000 = 
UCS2_STRING_LENGTH(BgL_keyz00_1998); 
{ /* Llib/hash.scm 766 */
long BgL_g1065z00_2001;long BgL_g1066z00_2002;
BgL_g1065z00_2001 = 
(
(long)(BgL_lenz00_2000)-((long)1)); 
BgL_g1066z00_2002 = 
(((long)134217727) & 
(((long)235643) ^ 
(long)(BgL_lenz00_2000))); 
{ 
long BgL_iz00_2004;long BgL_accz00_2005;
BgL_iz00_2004 = BgL_g1065z00_2001; 
BgL_accz00_2005 = BgL_g1066z00_2002; 
BgL_zc3z04anonymousza31664ze3z87_2006:
if(
(BgL_iz00_2004==((long)-1)))
{ /* Llib/hash.scm 768 */
BgL_tmpz00_9027 = BgL_accz00_2005
; }  else 
{ /* Llib/hash.scm 770 */
long BgL_arg1667z00_2008;long BgL_arg1668z00_2009;
BgL_arg1667z00_2008 = 
(BgL_iz00_2004-((long)1)); 
{ /* Llib/hash.scm 773 */
long BgL_arg1669z00_2010;
{ /* Llib/hash.scm 773 */
long BgL_arg1672z00_2011;
{ /* Llib/hash.scm 773 */
ucs2_t BgL_arg1675z00_2012;
{ /* Llib/hash.scm 773 */
ucs2_t BgL_res2574z00_4051;
{ /* Llib/hash.scm 773 */
int BgL_kz00_4036;
BgL_kz00_4036 = 
(int)(BgL_iz00_2004); 
{ /* Llib/hash.scm 773 */
bool_t BgL_test4245z00_9038;
{ /* Llib/hash.scm 773 */
long BgL_auxz00_9041;long BgL_tmpz00_9039;
BgL_auxz00_9041 = 
(long)(
UCS2_STRING_LENGTH(BgL_keyz00_1998)); 
BgL_tmpz00_9039 = 
(long)(BgL_kz00_4036); 
BgL_test4245z00_9038 = 
BOUND_CHECK(BgL_tmpz00_9039, BgL_auxz00_9041); } 
if(BgL_test4245z00_9038)
{ /* Llib/hash.scm 773 */
BgL_res2574z00_4051 = 
UCS2_STRING_REF(BgL_keyz00_1998, BgL_kz00_4036); }  else 
{ /* Llib/hash.scm 773 */
obj_t BgL_arg2059z00_4039;
{ /* Llib/hash.scm 773 */
obj_t BgL_arg2060z00_4040;
{ /* Llib/hash.scm 773 */

BgL_arg2060z00_4040 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_keyz00_1998))-((long)1)), ((long)10)); } 
BgL_arg2059z00_4039 = 
string_append_3(BGl_string3482z00zz__hashz00, BgL_arg2060z00_4040, BGl_string3483z00zz__hashz00); } 
{ /* Llib/hash.scm 773 */
obj_t BgL_tmpz00_9051;
{ /* Llib/hash.scm 773 */
obj_t BgL_aux3279z00_5148;
BgL_aux3279z00_5148 = 
BGl_errorz00zz__errorz00(BGl_symbol3484z00zz__hashz00, BgL_arg2059z00_4039, 
BINT(BgL_kz00_4036)); 
if(
UCS2P(BgL_aux3279z00_5148))
{ /* Llib/hash.scm 773 */
BgL_tmpz00_9051 = BgL_aux3279z00_5148
; }  else 
{ 
obj_t BgL_auxz00_9056;
BgL_auxz00_9056 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)30378)), BGl_string3370z00zz__hashz00, BGl_string3486z00zz__hashz00, BgL_aux3279z00_5148); 
FAILURE(BgL_auxz00_9056,BFALSE,BFALSE);} } 
BgL_res2574z00_4051 = 
CUCS2(BgL_tmpz00_9051); } } } } 
BgL_arg1675z00_2012 = BgL_res2574z00_4051; } 
BgL_arg1672z00_2011 = 
BGl_objzd2hashze70z35zz__hashz00(
BUCS2(BgL_arg1675z00_2012)); } 
BgL_arg1669z00_2010 = 
(BgL_arg1672z00_2011 ^ BgL_accz00_2005); } 
BgL_arg1668z00_2009 = 
(((long)134217727) & BgL_arg1669z00_2010); } 
{ 
long BgL_accz00_9066;long BgL_iz00_9065;
BgL_iz00_9065 = BgL_arg1667z00_2008; 
BgL_accz00_9066 = BgL_arg1668z00_2009; 
BgL_accz00_2005 = BgL_accz00_9066; 
BgL_iz00_2004 = BgL_iz00_9065; 
goto BgL_zc3z04anonymousza31664ze3z87_2006;} } } } } 
return 
(((long)134217727) & BgL_tmpz00_9027);}  else 
{ /* Llib/hash.scm 804 */
if(
BGL_HVECTORP(BgL_keyz00_2015))
{ /* Llib/hash.scm 806 */
BgL_keyz00_1973 = BgL_keyz00_2015; 
{ /* Llib/hash.scm 753 */
long BgL_lenz00_1975;
BgL_lenz00_1975 = 
BGL_HVECTOR_LENGTH(BgL_keyz00_1973); 
{ /* Llib/hash.scm 754 */
obj_t BgL_tagz00_1976;
BgL_tagz00_1976 = 
BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(BgL_keyz00_1973); 
{ /* Llib/hash.scm 755 */
obj_t BgL__z00_1977;obj_t BgL_getz00_1978;obj_t BgL__z00_1979;obj_t BgL__z00_1980;
{ /* Llib/hash.scm 756 */
int BgL_tmpz00_9072;
BgL_tmpz00_9072 = 
(int)(((long)1)); 
BgL__z00_1977 = 
BGL_MVALUES_VAL(BgL_tmpz00_9072); } 
{ /* Llib/hash.scm 756 */
int BgL_tmpz00_9075;
BgL_tmpz00_9075 = 
(int)(((long)2)); 
BgL_getz00_1978 = 
BGL_MVALUES_VAL(BgL_tmpz00_9075); } 
{ /* Llib/hash.scm 756 */
int BgL_tmpz00_9078;
BgL_tmpz00_9078 = 
(int)(((long)3)); 
BgL__z00_1979 = 
BGL_MVALUES_VAL(BgL_tmpz00_9078); } 
{ /* Llib/hash.scm 756 */
int BgL_tmpz00_9081;
BgL_tmpz00_9081 = 
(int)(((long)4)); 
BgL__z00_1980 = 
BGL_MVALUES_VAL(BgL_tmpz00_9081); } 
{ /* Llib/hash.scm 756 */
long BgL_g1063z00_1981;long BgL_g1064z00_1982;
BgL_g1063z00_1981 = 
(BgL_lenz00_1975-((long)1)); 
BgL_g1064z00_1982 = 
(((long)134217727) & 
(((long)98723) ^ 
(((long)134217727) & 
(BgL_lenz00_1975 ^ 
BGl_objzd2hashze70z35zz__hashz00(BgL_tagz00_1976))))); 
{ 
long BgL_iz00_1984;long BgL_accz00_1985;
BgL_iz00_1984 = BgL_g1063z00_1981; 
BgL_accz00_1985 = BgL_g1064z00_1982; 
BgL_zc3z04anonymousza31652ze3z87_1986:
if(
(BgL_iz00_1984==((long)-1)))
{ /* Llib/hash.scm 759 */
return BgL_accz00_1985;}  else 
{ /* Llib/hash.scm 761 */
obj_t BgL_oz00_1988;
{ /* Llib/hash.scm 761 */
obj_t BgL_funz00_5152;
if(
PROCEDUREP(BgL_getz00_1978))
{ /* Llib/hash.scm 761 */
BgL_funz00_5152 = BgL_getz00_1978; }  else 
{ 
obj_t BgL_auxz00_9094;
BgL_auxz00_9094 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)30055)), BGl_string3370z00zz__hashz00, BGl_string3378z00zz__hashz00, BgL_getz00_1978); 
FAILURE(BgL_auxz00_9094,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_5152, ((long)2)))
{ /* Llib/hash.scm 761 */
BgL_oz00_1988 = 
PROCEDURE_ENTRY(BgL_funz00_5152)(BgL_getz00_1978, BgL_keyz00_1973, 
BINT(BgL_iz00_1984), BEOA); }  else 
{ /* Llib/hash.scm 761 */
FAILURE(BGl_string3421z00zz__hashz00,BGl_list3487z00zz__hashz00,BgL_funz00_5152);} } 
{ 
long BgL_accz00_9109;long BgL_iz00_9107;
BgL_iz00_9107 = 
(BgL_iz00_1984-((long)1)); 
BgL_accz00_9109 = 
(((long)134217727) & 
(BgL_accz00_1985 ^ 
BGl_objzd2hashze70z35zz__hashz00(BgL_oz00_1988))); 
BgL_accz00_1985 = BgL_accz00_9109; 
BgL_iz00_1984 = BgL_iz00_9107; 
goto BgL_zc3z04anonymousza31652ze3z87_1986;} } } } } } } }  else 
{ /* Llib/hash.scm 809 */
obj_t BgL_arg1721z00_2048;
{ /* Llib/hash.scm 809 */

BgL_arg1721z00_2048 = 
obj_to_string(BgL_keyz00_2015, BFALSE); } 
{ 
obj_t BgL_keyz00_9114;
BgL_keyz00_9114 = BgL_arg1721z00_2048; 
BgL_keyz00_2015 = BgL_keyz00_9114; 
goto BGl_objzd2hashze70z35zz__hashz00;} } } } } } } } } } } } } } } } 

}



/* &get-hashnumber-persistent */
obj_t BGl_z62getzd2hashnumberzd2persistentz62zz__hashz00(obj_t BgL_envz00_4522, obj_t BgL_keyz00_4523)
{
{ /* Llib/hash.scm 747 */
return 
BINT(
BGl_getzd2hashnumberzd2persistentz00zz__hashz00(BgL_keyz00_4523));} 

}



/* get-pointer-hashnumber */
BGL_EXPORTED_DEF long BGl_getzd2pointerzd2hashnumberz00zz__hashz00(obj_t BgL_ptrz00_120, long BgL_powerz00_121)
{
{ /* Llib/hash.scm 816 */
return 
bgl_pointer_hashnumber(BgL_ptrz00_120, BgL_powerz00_121);} 

}



/* &get-pointer-hashnumber */
obj_t BGl_z62getzd2pointerzd2hashnumberz62zz__hashz00(obj_t BgL_envz00_4524, obj_t BgL_ptrz00_4525, obj_t BgL_powerz00_4526)
{
{ /* Llib/hash.scm 816 */
{ /* Llib/hash.scm 817 */
long BgL_tmpz00_9118;
{ /* Llib/hash.scm 817 */
long BgL_auxz00_9119;
{ /* Llib/hash.scm 817 */
obj_t BgL_tmpz00_9120;
if(
INTEGERP(BgL_powerz00_4526))
{ /* Llib/hash.scm 817 */
BgL_tmpz00_9120 = BgL_powerz00_4526
; }  else 
{ 
obj_t BgL_auxz00_9123;
BgL_auxz00_9123 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)31630)), BGl_string3493z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_powerz00_4526); 
FAILURE(BgL_auxz00_9123,BFALSE,BFALSE);} 
BgL_auxz00_9119 = 
(long)CINT(BgL_tmpz00_9120); } 
BgL_tmpz00_9118 = 
BGl_getzd2pointerzd2hashnumberz00zz__hashz00(BgL_ptrz00_4525, BgL_auxz00_9119); } 
return 
BINT(BgL_tmpz00_9118);} } 

}



/* _string-hash */
obj_t BGl__stringzd2hashzd2zz__hashz00(obj_t BgL_env1148z00_126, obj_t BgL_opt1147z00_125)
{
{ /* Llib/hash.scm 822 */
{ /* Llib/hash.scm 822 */
obj_t BgL_g1149z00_2055;
BgL_g1149z00_2055 = 
VECTOR_REF(BgL_opt1147z00_125,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1147z00_125)) { case ((long)1) : 

{ /* Llib/hash.scm 822 */

{ /* Llib/hash.scm 822 */
long BgL_res2607z00_4110;
{ /* Llib/hash.scm 822 */
obj_t BgL_stringz00_4105;
if(
STRINGP(BgL_g1149z00_2055))
{ /* Llib/hash.scm 822 */
BgL_stringz00_4105 = BgL_g1149z00_2055; }  else 
{ 
obj_t BgL_auxz00_9133;
BgL_auxz00_9133 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)31887)), BGl_string3497z00zz__hashz00, BGl_string3356z00zz__hashz00, BgL_g1149z00_2055); 
FAILURE(BgL_auxz00_9133,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 823 */
obj_t BgL_arg1726z00_4106;
BgL_arg1726z00_4106 = 
BINT(
STRING_LENGTH(BgL_stringz00_4105)); 
{ /* Llib/hash.scm 823 */
int BgL_tmpz00_9139;
{ /* Llib/hash.scm 823 */
obj_t BgL_tmpz00_9142;
if(
INTEGERP(BgL_arg1726z00_4106))
{ /* Llib/hash.scm 823 */
BgL_tmpz00_9142 = BgL_arg1726z00_4106
; }  else 
{ 
obj_t BgL_auxz00_9145;
BgL_auxz00_9145 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)32001)), BGl_string3497z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1726z00_4106); 
FAILURE(BgL_auxz00_9145,BFALSE,BFALSE);} 
BgL_tmpz00_9139 = 
CINT(BgL_tmpz00_9142); } 
BgL_res2607z00_4110 = 
bgl_string_hash(
BSTRING_TO_STRING(BgL_stringz00_4105), 
(int)(((long)0)), BgL_tmpz00_9139); } } } 
return 
BINT(BgL_res2607z00_4110);} } break;case ((long)2) : 

{ /* Llib/hash.scm 822 */
obj_t BgL_startz00_2061;
BgL_startz00_2061 = 
VECTOR_REF(BgL_opt1147z00_125,((long)1)); 
{ /* Llib/hash.scm 822 */

{ /* Llib/hash.scm 822 */
long BgL_res2609z00_4116;
{ /* Llib/hash.scm 822 */
obj_t BgL_stringz00_4111;
if(
STRINGP(BgL_g1149z00_2055))
{ /* Llib/hash.scm 822 */
BgL_stringz00_4111 = BgL_g1149z00_2055; }  else 
{ 
obj_t BgL_auxz00_9155;
BgL_auxz00_9155 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)31887)), BGl_string3497z00zz__hashz00, BGl_string3356z00zz__hashz00, BgL_g1149z00_2055); 
FAILURE(BgL_auxz00_9155,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 823 */
obj_t BgL_arg1726z00_4112;
BgL_arg1726z00_4112 = 
BINT(
STRING_LENGTH(BgL_stringz00_4111)); 
{ /* Llib/hash.scm 823 */
int BgL_auxz00_9171;int BgL_tmpz00_9161;
{ /* Llib/hash.scm 823 */
obj_t BgL_tmpz00_9172;
if(
INTEGERP(BgL_arg1726z00_4112))
{ /* Llib/hash.scm 823 */
BgL_tmpz00_9172 = BgL_arg1726z00_4112
; }  else 
{ 
obj_t BgL_auxz00_9175;
BgL_auxz00_9175 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)32001)), BGl_string3497z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1726z00_4112); 
FAILURE(BgL_auxz00_9175,BFALSE,BFALSE);} 
BgL_auxz00_9171 = 
CINT(BgL_tmpz00_9172); } 
{ /* Llib/hash.scm 823 */
obj_t BgL_tmpz00_9163;
if(
INTEGERP(BgL_startz00_2061))
{ /* Llib/hash.scm 823 */
BgL_tmpz00_9163 = BgL_startz00_2061
; }  else 
{ 
obj_t BgL_auxz00_9166;
BgL_auxz00_9166 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)31965)), BGl_string3497z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_startz00_2061); 
FAILURE(BgL_auxz00_9166,BFALSE,BFALSE);} 
BgL_tmpz00_9161 = 
CINT(BgL_tmpz00_9163); } 
BgL_res2609z00_4116 = 
bgl_string_hash(
BSTRING_TO_STRING(BgL_stringz00_4111), BgL_tmpz00_9161, BgL_auxz00_9171); } } } 
return 
BINT(BgL_res2609z00_4116);} } } break;case ((long)3) : 

{ /* Llib/hash.scm 822 */
obj_t BgL_startz00_2063;
BgL_startz00_2063 = 
VECTOR_REF(BgL_opt1147z00_125,((long)1)); 
{ /* Llib/hash.scm 822 */
obj_t BgL_lenz00_2064;
BgL_lenz00_2064 = 
VECTOR_REF(BgL_opt1147z00_125,((long)2)); 
{ /* Llib/hash.scm 822 */

{ /* Llib/hash.scm 822 */
long BgL_res2611z00_4122;
{ /* Llib/hash.scm 822 */
obj_t BgL_stringz00_4117;
if(
STRINGP(BgL_g1149z00_2055))
{ /* Llib/hash.scm 822 */
BgL_stringz00_4117 = BgL_g1149z00_2055; }  else 
{ 
obj_t BgL_auxz00_9186;
BgL_auxz00_9186 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)31887)), BGl_string3497z00zz__hashz00, BGl_string3356z00zz__hashz00, BgL_g1149z00_2055); 
FAILURE(BgL_auxz00_9186,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 823 */
obj_t BgL_arg1726z00_4118;
if(
CBOOL(BgL_lenz00_2064))
{ /* Llib/hash.scm 823 */
BgL_arg1726z00_4118 = BgL_lenz00_2064; }  else 
{ /* Llib/hash.scm 823 */
BgL_arg1726z00_4118 = 
BINT(
STRING_LENGTH(BgL_stringz00_4117)); } 
{ /* Llib/hash.scm 823 */
int BgL_auxz00_9204;int BgL_tmpz00_9194;
{ /* Llib/hash.scm 823 */
obj_t BgL_tmpz00_9205;
if(
INTEGERP(BgL_arg1726z00_4118))
{ /* Llib/hash.scm 823 */
BgL_tmpz00_9205 = BgL_arg1726z00_4118
; }  else 
{ 
obj_t BgL_auxz00_9208;
BgL_auxz00_9208 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)32001)), BGl_string3497z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1726z00_4118); 
FAILURE(BgL_auxz00_9208,BFALSE,BFALSE);} 
BgL_auxz00_9204 = 
CINT(BgL_tmpz00_9205); } 
{ /* Llib/hash.scm 823 */
obj_t BgL_tmpz00_9196;
if(
INTEGERP(BgL_startz00_2063))
{ /* Llib/hash.scm 823 */
BgL_tmpz00_9196 = BgL_startz00_2063
; }  else 
{ 
obj_t BgL_auxz00_9199;
BgL_auxz00_9199 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)31965)), BGl_string3497z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_startz00_2063); 
FAILURE(BgL_auxz00_9199,BFALSE,BFALSE);} 
BgL_tmpz00_9194 = 
CINT(BgL_tmpz00_9196); } 
BgL_res2611z00_4122 = 
bgl_string_hash(
BSTRING_TO_STRING(BgL_stringz00_4117), BgL_tmpz00_9194, BgL_auxz00_9204); } } } 
return 
BINT(BgL_res2611z00_4122);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3494z00zz__hashz00, BGl_string3496z00zz__hashz00, 
BINT(
VECTOR_LENGTH(BgL_opt1147z00_125)));} } } } 

}



/* string-hash */
BGL_EXPORTED_DEF long BGl_stringzd2hashzd2zz__hashz00(obj_t BgL_stringz00_122, obj_t BgL_startz00_123, obj_t BgL_lenz00_124)
{
{ /* Llib/hash.scm 822 */
{ /* Llib/hash.scm 823 */
obj_t BgL_arg1726z00_4123;
if(
CBOOL(BgL_lenz00_124))
{ /* Llib/hash.scm 823 */
BgL_arg1726z00_4123 = BgL_lenz00_124; }  else 
{ /* Llib/hash.scm 823 */
BgL_arg1726z00_4123 = 
BINT(
STRING_LENGTH(BgL_stringz00_122)); } 
{ /* Llib/hash.scm 823 */
int BgL_auxz00_9234;int BgL_tmpz00_9224;
{ /* Llib/hash.scm 823 */
obj_t BgL_tmpz00_9235;
if(
INTEGERP(BgL_arg1726z00_4123))
{ /* Llib/hash.scm 823 */
BgL_tmpz00_9235 = BgL_arg1726z00_4123
; }  else 
{ 
obj_t BgL_auxz00_9238;
BgL_auxz00_9238 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)32001)), BGl_string3495z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_arg1726z00_4123); 
FAILURE(BgL_auxz00_9238,BFALSE,BFALSE);} 
BgL_auxz00_9234 = 
CINT(BgL_tmpz00_9235); } 
{ /* Llib/hash.scm 823 */
obj_t BgL_tmpz00_9226;
if(
INTEGERP(BgL_startz00_123))
{ /* Llib/hash.scm 823 */
BgL_tmpz00_9226 = BgL_startz00_123
; }  else 
{ 
obj_t BgL_auxz00_9229;
BgL_auxz00_9229 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3314z00zz__hashz00, 
BINT(((long)31965)), BGl_string3495z00zz__hashz00, BGl_string3315z00zz__hashz00, BgL_startz00_123); 
FAILURE(BgL_auxz00_9229,BFALSE,BFALSE);} 
BgL_tmpz00_9224 = 
CINT(BgL_tmpz00_9226); } 
return 
bgl_string_hash(
BSTRING_TO_STRING(BgL_stringz00_122), BgL_tmpz00_9224, BgL_auxz00_9234);} } } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__hashz00()
{
{ /* Llib/hash.scm 18 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__hashz00()
{
{ /* Llib/hash.scm 18 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__hashz00()
{
{ /* Llib/hash.scm 18 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__hashz00()
{
{ /* Llib/hash.scm 18 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string3498z00zz__hashz00)); 
BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long)460263341), 
BSTRING_TO_STRING(BGl_string3498z00zz__hashz00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string3498z00zz__hashz00)); 
return 
BGl_modulezd2initializa7ationz75zz__weakhashz00(((long)56552663), 
BSTRING_TO_STRING(BGl_string3498z00zz__hashz00));} 

}

#ifdef __cplusplus
}
#endif
