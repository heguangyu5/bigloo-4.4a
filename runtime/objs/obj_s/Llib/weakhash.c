/*===========================================================================*/
/*   (Llib/weakhash.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/weakhash.scm -indent -o objs/obj_s/Llib/weakhash.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_z62weakzd2hashtablezd2containszf3z91zz__weakhashz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2clearz12z12zz__weakhashz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2addz12z12zz__weakhashz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2putz12z12zz__weakhashz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3381z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_z62weakzd2hashtablezd2forzd2eachzb0zz__weakhashz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3387z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3389z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_z62weakzd2hashtablezd2keyzd2listzb0zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__weakhashz00 = BUNSPEC;
static obj_t BGl_traversezd2bucketszd2zz__weakhashz00(obj_t, obj_t, long, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62weakzd2hashtablezd2getz62zz__weakhashz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2updatez12z12zz__weakhashz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_removez00zz__weakhashz00 = BUNSPEC;
extern obj_t weakptr_data(obj_t);
static obj_t BGl_z62weakzd2hashtablezd2clearz12z70zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_toplevelzd2initzd2zz__weakhashz00();
static obj_t BGl_keepgoingz00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_genericzd2initzd2zz__weakhashz00();
extern obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_objectzd2initzd2zz__weakhashz00();
extern obj_t BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(obj_t, long);
static obj_t BGl_z62weakzd2hashtablezd2ze3listz81zz__weakhashz00(obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
BGL_EXPORTED_DECL bool_t BGl_weakzd2hashtablezd2containszf3zf3zz__weakhashz00(obj_t, obj_t);
extern obj_t make_vector(long, obj_t);
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2ze3listze3zz__weakhashz00(obj_t);
static obj_t BGl_z62weakzd2hashtablezd2mapz62zz__weakhashz00(obj_t, obj_t, obj_t);
static bool_t BGl_traversezd2hashzd2zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zz__weakhashz00();
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2removez12z12zz__weakhashz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31503ze3ze5zz__weakhashz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62weakzd2hashtablezd2updatez12z70zz__weakhashz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_removestopz00zz__weakhashz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_list3401z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_list3407z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_list3412z00zz__weakhashz00 = BUNSPEC;
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_list3417z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_list3336z00zz__weakhashz00 = BUNSPEC;
extern bool_t BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31522ze3ze5zz__weakhashz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list3345z00zz__weakhashz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2getz00zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31434ze3ze5zz__weakhashz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_list3350z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_list3351z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_list3437z00zz__weakhashz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31427ze3ze5zz__weakhashz00(obj_t, obj_t, obj_t);
static obj_t BGl_list3444z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_list3368z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza31436ze3ze5zz__weakhashz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__weakhashz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
extern long BGl_hashtablezd2siza7ez75zz__hashz00(obj_t);
static obj_t BGl_list3380z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_list3386z00zz__weakhashz00 = BUNSPEC;
extern bool_t BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31543ze3ze5zz__weakhashz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__weakhashz00();
static obj_t BGl_z62zc3z04anonymousza31455ze3ze5zz__weakhashz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62weakzd2hashtablezd2removez12z70zz__weakhashz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62weakzd2hashtablezd2ze3vectorz81zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__weakhashz00();
static obj_t BGl_importedzd2moduleszd2initz00zz__weakhashz00();
extern obj_t make_weakptr(obj_t);
static obj_t BGl_z62zc3z04anonymousza31554ze3ze5zz__weakhashz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31473ze3ze5zz__weakhashz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31449ze3ze5zz__weakhashz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62weakzd2hashtablezd2expandz12z70zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_z62weakzd2hashtablezd2addz12z70zz__weakhashz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62weakzd2hashtablezd2filterz12z70zz__weakhashz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2mapz00zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_z62weakzd2hashtablezd2putz12z70zz__weakhashz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31459ze3ze5zz__weakhashz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3321z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3408z00zz__weakhashz00 = BUNSPEC;
extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, int, int);
static obj_t BGl_symbol3413z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3415z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3418z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3337z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3339z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3420z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza31478ze3ze5zz__weakhashz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3341z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3343z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3346z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3348z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3352z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3354z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3438z00zz__weakhashz00 = BUNSPEC;
extern long BGl_getzd2hashnumberzd2zz__hashz00(obj_t);
static obj_t BGl_symbol3445z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3369z00zz__weakhashz00 = BUNSPEC;
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2filterz12zd2envzc0zz__weakhashz00, BgL_bgl_za762weakza7d2hashta3452z00, BGl_z62weakzd2hashtablezd2filterz12z70zz__weakhashz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3318z00zz__weakhashz00, BgL_bgl_string3318za700za7za7_3453za7, "/tmp/4.4a/runtime/Llib/weakhash.scm", 35 );
DEFINE_STRING( BGl_string3319z00zz__weakhashz00, BgL_bgl_string3319za700za7za7_3454za7, "traverse-buckets", 16 );
DEFINE_STRING( BGl_string3400z00zz__weakhashz00, BgL_bgl_string3400za700za7za7_3455za7, "<@anonymous:1503>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string3320z00zz__weakhashz00, BgL_bgl_string3320za700za7za7_3456za7, "symbol", 6 );
DEFINE_STRING( BGl_string3402z00zz__weakhashz00, BgL_bgl_string3402za700za7za7_3457za7, "weak-hashtable-update!", 22 );
DEFINE_STRING( BGl_string3403z00zz__weakhashz00, BgL_bgl_string3403za700za7za7_3458za7, "weak-hashtable-update!:Wrong number of arguments", 48 );
DEFINE_STRING( BGl_string3322z00zz__weakhashz00, BgL_bgl_string3322za700za7za7_3459za7, "%hashtable", 10 );
DEFINE_STRING( BGl_string3404z00zz__weakhashz00, BgL_bgl_string3404za700za7za7_3460za7, "&weak-hashtable-update!", 23 );
DEFINE_STRING( BGl_string3323z00zz__weakhashz00, BgL_bgl_string3323za700za7za7_3461za7, "struct-ref:not an instance of", 29 );
DEFINE_STRING( BGl_string3405z00zz__weakhashz00, BgL_bgl_string3405za700za7za7_3462za7, "<@anonymous:1522>", 17 );
DEFINE_STRING( BGl_string3324z00zz__weakhashz00, BgL_bgl_string3324za700za7za7_3463za7, "bint", 4 );
DEFINE_STRING( BGl_string3406z00zz__weakhashz00, BgL_bgl_string3406za700za7za7_3464za7, "<@anonymous:1522>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string3325z00zz__weakhashz00, BgL_bgl_string3325za700za7za7_3465za7, "vector", 6 );
DEFINE_STRING( BGl_string3326z00zz__weakhashz00, BgL_bgl_string3326za700za7za7_3466za7, "vector-ref", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2ze3vectorzd2envz31zz__weakhashz00, BgL_bgl_za762weakza7d2hashta3467z00, BGl_z62weakzd2hashtablezd2ze3vectorz81zz__weakhashz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3327z00zz__weakhashz00, BgL_bgl_string3327za700za7za7_3468za7, "liip", 4 );
DEFINE_STRING( BGl_string3409z00zz__weakhashz00, BgL_bgl_string3409za700za7za7_3469za7, "proc", 4 );
DEFINE_STRING( BGl_string3328z00zz__weakhashz00, BgL_bgl_string3328za700za7za7_3470za7, "pair", 4 );
DEFINE_STRING( BGl_string3329z00zz__weakhashz00, BgL_bgl_string3329za700za7za7_3471za7, "weakptr", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2mapzd2envzd2zz__weakhashz00, BgL_bgl_za762weakza7d2hashta3472z00, BGl_z62weakzd2hashtablezd2mapz62zz__weakhashz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2getzd2envzd2zz__weakhashz00, BgL_bgl_za762weakza7d2hashta3473z00, BGl_z62weakzd2hashtablezd2getz62zz__weakhashz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3410z00zz__weakhashz00, BgL_bgl_string3410za700za7za7_3474za7, "weak-hashtable-add!", 19 );
DEFINE_STRING( BGl_string3411z00zz__weakhashz00, BgL_bgl_string3411za700za7za7_3475za7, "weak-hashtable-add!:Wrong number of arguments", 45 );
DEFINE_STRING( BGl_string3330z00zz__weakhashz00, BgL_bgl_string3330za700za7za7_3476za7, "struct-set!:not an instance of", 30 );
DEFINE_STRING( BGl_string3331z00zz__weakhashz00, BgL_bgl_string3331za700za7za7_3477za7, "vector-set!", 11 );
DEFINE_STRING( BGl_string3332z00zz__weakhashz00, BgL_bgl_string3332za700za7za7_3478za7, "traverse-hash", 13 );
DEFINE_STRING( BGl_string3414z00zz__weakhashz00, BgL_bgl_string3414za700za7za7_3479za7, "arg1540", 7 );
DEFINE_STRING( BGl_string3333z00zz__weakhashz00, BgL_bgl_string3333za700za7za7_3480za7, "loop", 4 );
DEFINE_STRING( BGl_string3334z00zz__weakhashz00, BgL_bgl_string3334za700za7za7_3481za7, "procedure", 9 );
DEFINE_STRING( BGl_string3416z00zz__weakhashz00, BgL_bgl_string3416za700za7za7_3482za7, "arg1541", 7 );
DEFINE_STRING( BGl_string3335z00zz__weakhashz00, BgL_bgl_string3335za700za7za7_3483za7, "liip:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string3419z00zz__weakhashz00, BgL_bgl_string3419za700za7za7_3484za7, "obj", 3 );
DEFINE_STRING( BGl_string3338z00zz__weakhashz00, BgL_bgl_string3338za700za7za7_3485za7, "funcall", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2expandz12zd2envzc0zz__weakhashz00, BgL_bgl_za762weakza7d2hashta3486z00, BGl_z62weakzd2hashtablezd2expandz12z70zz__weakhashz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3421z00zz__weakhashz00, BgL_bgl_string3421za700za7za7_3487za7, "init", 4 );
DEFINE_STRING( BGl_string3340z00zz__weakhashz00, BgL_bgl_string3340za700za7za7_3488za7, "fun", 3 );
DEFINE_STRING( BGl_string3422z00zz__weakhashz00, BgL_bgl_string3422za700za7za7_3489za7, "&weak-hashtable-add!", 20 );
DEFINE_STRING( BGl_string3423z00zz__weakhashz00, BgL_bgl_string3423za700za7za7_3490za7, "<@anonymous:1543>", 17 );
DEFINE_STRING( BGl_string3342z00zz__weakhashz00, BgL_bgl_string3342za700za7za7_3491za7, "key", 3 );
DEFINE_STRING( BGl_string3424z00zz__weakhashz00, BgL_bgl_string3424za700za7za7_3492za7, "<@anonymous:1543>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string3425z00zz__weakhashz00, BgL_bgl_string3425za700za7za7_3493za7, "weak-hashtable-remove!", 22 );
DEFINE_STRING( BGl_string3344z00zz__weakhashz00, BgL_bgl_string3344za700za7za7_3494za7, "arg1382", 7 );
DEFINE_STRING( BGl_string3426z00zz__weakhashz00, BgL_bgl_string3426za700za7za7_3495za7, "weak-hashtable-remove!:Wrong number of arguments", 48 );
DEFINE_STRING( BGl_string3427z00zz__weakhashz00, BgL_bgl_string3427za700za7za7_3496za7, "&weak-hashtable-remove!", 23 );
DEFINE_STRING( BGl_string3428z00zz__weakhashz00, BgL_bgl_string3428za700za7za7_3497za7, "<@anonymous:1554>", 17 );
DEFINE_STRING( BGl_string3347z00zz__weakhashz00, BgL_bgl_string3347za700za7za7_3498za7, "arg1395", 7 );
DEFINE_STRING( BGl_string3429z00zz__weakhashz00, BgL_bgl_string3429za700za7za7_3499za7, "<@anonymous:1554>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string3349z00zz__weakhashz00, BgL_bgl_string3349za700za7za7_3500za7, "data", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2ze3listzd2envz31zz__weakhashz00, BgL_bgl_za762weakza7d2hashta3501z00, BGl_z62weakzd2hashtablezd2ze3listz81zz__weakhashz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2updatez12zd2envzc0zz__weakhashz00, BgL_bgl_za762weakza7d2hashta3502z00, BGl_z62weakzd2hashtablezd2updatez12z70zz__weakhashz00, 0L, BUNSPEC, 4 );
DEFINE_STRING( BGl_string3430z00zz__weakhashz00, BgL_bgl_string3430za700za7za7_3503za7, "weak-hashtable-expand!", 22 );
DEFINE_STRING( BGl_string3431z00zz__weakhashz00, BgL_bgl_string3431za700za7za7_3504za7, "<@anonymous:1566>", 17 );
DEFINE_STRING( BGl_string3432z00zz__weakhashz00, BgL_bgl_string3432za700za7za7_3505za7, "<@anonymous:1566>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string3433z00zz__weakhashz00, BgL_bgl_string3433za700za7za7_3506za7, "for-each", 8 );
DEFINE_STRING( BGl_string3434z00zz__weakhashz00, BgL_bgl_string3434za700za7za7_3507za7, "list", 4 );
DEFINE_STRING( BGl_string3353z00zz__weakhashz00, BgL_bgl_string3353za700za7za7_3508za7, "arg1419", 7 );
DEFINE_STRING( BGl_string3435z00zz__weakhashz00, BgL_bgl_string3435za700za7za7_3509za7, "<@anonymous:1586>", 17 );
DEFINE_STRING( BGl_string3436z00zz__weakhashz00, BgL_bgl_string3436za700za7za7_3510za7, "<@anonymous:1586>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string3355z00zz__weakhashz00, BgL_bgl_string3355za700za7za7_3511za7, "arg1420", 7 );
DEFINE_STRING( BGl_string3356z00zz__weakhashz00, BgL_bgl_string3356za700za7za7_3512za7, "weak-hashtable->vector", 22 );
DEFINE_STRING( BGl_string3357z00zz__weakhashz00, BgL_bgl_string3357za700za7za7_3513za7, "&weak-hashtable->vector", 23 );
DEFINE_STRING( BGl_string3439z00zz__weakhashz00, BgL_bgl_string3439za700za7za7_3514za7, "arg1596", 7 );
DEFINE_STRING( BGl_string3358z00zz__weakhashz00, BgL_bgl_string3358za700za7za7_3515za7, "struct", 6 );
DEFINE_STRING( BGl_string3359z00zz__weakhashz00, BgL_bgl_string3359za700za7za7_3516za7, "<@anonymous:1427>", 17 );
DEFINE_STRING( BGl_string3440z00zz__weakhashz00, BgL_bgl_string3440za700za7za7_3517za7, "<@anonymous:1611>", 17 );
DEFINE_STRING( BGl_string3441z00zz__weakhashz00, BgL_bgl_string3441za700za7za7_3518za7, "<@anonymous:1611>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string3360z00zz__weakhashz00, BgL_bgl_string3360za700za7za7_3519za7, "weak-hashtable->list", 20 );
DEFINE_STRING( BGl_string3442z00zz__weakhashz00, BgL_bgl_string3442za700za7za7_3520za7, "<@anonymous:1630>", 17 );
DEFINE_STRING( BGl_string3361z00zz__weakhashz00, BgL_bgl_string3361za700za7za7_3521za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string3443z00zz__weakhashz00, BgL_bgl_string3443za700za7za7_3522za7, "<@anonymous:1630>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string3362z00zz__weakhashz00, BgL_bgl_string3362za700za7za7_3523za7, "&weak-hashtable->list", 21 );
DEFINE_STRING( BGl_string3363z00zz__weakhashz00, BgL_bgl_string3363za700za7za7_3524za7, "weak-hashtable-key-list", 23 );
DEFINE_STRING( BGl_string3364z00zz__weakhashz00, BgL_bgl_string3364za700za7za7_3525za7, "&weak-hashtable-key-list", 24 );
DEFINE_STRING( BGl_string3446z00zz__weakhashz00, BgL_bgl_string3446za700za7za7_3526za7, "arg1635", 7 );
DEFINE_STRING( BGl_string3365z00zz__weakhashz00, BgL_bgl_string3365za700za7za7_3527za7, "weak-hashtable-map", 18 );
DEFINE_STRING( BGl_string3447z00zz__weakhashz00, BgL_bgl_string3447za700za7za7_3528za7, "&weak-hashtable-expand!", 23 );
DEFINE_STRING( BGl_string3366z00zz__weakhashz00, BgL_bgl_string3366za700za7za7_3529za7, "&weak-hashtable-map", 19 );
DEFINE_STRING( BGl_string3448z00zz__weakhashz00, BgL_bgl_string3448za700za7za7_3530za7, "__weakhash", 10 );
DEFINE_STRING( BGl_string3367z00zz__weakhashz00, BgL_bgl_string3367za700za7za7_3531za7, "<@anonymous:1449>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string3370z00zz__weakhashz00, BgL_bgl_string3370za700za7za7_3532za7, "val", 3 );
DEFINE_STRING( BGl_string3371z00zz__weakhashz00, BgL_bgl_string3371za700za7za7_3533za7, "&weak-hashtable-for-each", 24 );
DEFINE_STRING( BGl_string3372z00zz__weakhashz00, BgL_bgl_string3372za700za7za7_3534za7, "weak-hashtable-filter!", 22 );
DEFINE_STRING( BGl_string3373z00zz__weakhashz00, BgL_bgl_string3373za700za7za7_3535za7, "&weak-hashtable-filter!", 23 );
DEFINE_STRING( BGl_string3374z00zz__weakhashz00, BgL_bgl_string3374za700za7za7_3536za7, "<@anonymous:1455>", 17 );
DEFINE_STRING( BGl_string3375z00zz__weakhashz00, BgL_bgl_string3375za700za7za7_3537za7, "<@anonymous:1455>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string3377z00zz__weakhashz00, BgL_bgl_string3377za700za7za7_3538za7, "&weak-hashtable-clear!", 22 );
DEFINE_STRING( BGl_string3378z00zz__weakhashz00, BgL_bgl_string3378za700za7za7_3539za7, "weak-hashtable-contains?", 24 );
DEFINE_STRING( BGl_string3379z00zz__weakhashz00, BgL_bgl_string3379za700za7za7_3540za7, "weak-hashtable-contains?:Wrong number of arguments", 50 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3376z00zz__weakhashz00, BgL_bgl_za762za7c3za704anonymo3541za7, BGl_z62zc3z04anonymousza31459ze3ze5zz__weakhashz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3382z00zz__weakhashz00, BgL_bgl_string3382za700za7za7_3542za7, "hashn", 5 );
DEFINE_STRING( BGl_string3383z00zz__weakhashz00, BgL_bgl_string3383za700za7za7_3543za7, "&weak-hashtable-contains?", 25 );
DEFINE_STRING( BGl_string3384z00zz__weakhashz00, BgL_bgl_string3384za700za7za7_3544za7, "<@anonymous:1473>", 17 );
DEFINE_STRING( BGl_string3385z00zz__weakhashz00, BgL_bgl_string3385za700za7za7_3545za7, "<@anonymous:1473>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string3388z00zz__weakhashz00, BgL_bgl_string3388za700za7za7_3546za7, "eqt", 3 );
DEFINE_STRING( BGl_string3390z00zz__weakhashz00, BgL_bgl_string3390za700za7za7_3547za7, "bkey", 4 );
DEFINE_STRING( BGl_string3391z00zz__weakhashz00, BgL_bgl_string3391za700za7za7_3548za7, "weak-hashtable-get", 18 );
DEFINE_STRING( BGl_string3392z00zz__weakhashz00, BgL_bgl_string3392za700za7za7_3549za7, "weak-hashtable-get:Wrong number of arguments", 44 );
DEFINE_STRING( BGl_string3393z00zz__weakhashz00, BgL_bgl_string3393za700za7za7_3550za7, "&weak-hashtable-get", 19 );
DEFINE_STRING( BGl_string3394z00zz__weakhashz00, BgL_bgl_string3394za700za7za7_3551za7, "<@anonymous:1478>", 17 );
DEFINE_STRING( BGl_string3395z00zz__weakhashz00, BgL_bgl_string3395za700za7za7_3552za7, "<@anonymous:1478>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string3396z00zz__weakhashz00, BgL_bgl_string3396za700za7za7_3553za7, "weak-hashtable-put!", 19 );
DEFINE_STRING( BGl_string3397z00zz__weakhashz00, BgL_bgl_string3397za700za7za7_3554za7, "weak-hashtable-put!:Wrong number of arguments", 45 );
DEFINE_STRING( BGl_string3398z00zz__weakhashz00, BgL_bgl_string3398za700za7za7_3555za7, "&weak-hashtable-put!", 20 );
DEFINE_STRING( BGl_string3399z00zz__weakhashz00, BgL_bgl_string3399za700za7za7_3556za7, "<@anonymous:1503>", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2keyzd2listzd2envz00zz__weakhashz00, BgL_bgl_za762weakza7d2hashta3557z00, BGl_z62weakzd2hashtablezd2keyzd2listzb0zz__weakhashz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2clearz12zd2envzc0zz__weakhashz00, BgL_bgl_za762weakza7d2hashta3558z00, BGl_z62weakzd2hashtablezd2clearz12z70zz__weakhashz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2containszf3zd2envz21zz__weakhashz00, BgL_bgl_za762weakza7d2hashta3559z00, BGl_z62weakzd2hashtablezd2containszf3z91zz__weakhashz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2forzd2eachzd2envz00zz__weakhashz00, BgL_bgl_za762weakza7d2hashta3560z00, BGl_z62weakzd2hashtablezd2forzd2eachzb0zz__weakhashz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2addz12zd2envzc0zz__weakhashz00, BgL_bgl_za762weakza7d2hashta3561z00, BGl_z62weakzd2hashtablezd2addz12z70zz__weakhashz00, 0L, BUNSPEC, 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2removez12zd2envzc0zz__weakhashz00, BgL_bgl_za762weakza7d2hashta3562z00, BGl_z62weakzd2hashtablezd2removez12z70zz__weakhashz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2putz12zd2envzc0zz__weakhashz00, BgL_bgl_za762weakza7d2hashta3563z00, BGl_z62weakzd2hashtablezd2putz12z70zz__weakhashz00, 0L, BUNSPEC, 3 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_symbol3381z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_symbol3387z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_symbol3389z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_removez00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_keepgoingz00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_removestopz00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_list3401z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_list3407z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_list3412z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_list3417z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_list3336z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_list3345z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_list3350z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_list3351z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_list3437z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_list3444z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_list3368z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_list3380z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_list3386z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_symbol3321z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_symbol3408z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_symbol3413z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_symbol3415z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_symbol3418z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_symbol3337z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_symbol3339z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_symbol3420z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_symbol3341z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_symbol3343z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_symbol3346z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_symbol3348z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_symbol3352z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_symbol3354z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_symbol3438z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_symbol3445z00zz__weakhashz00) );
ADD_ROOT( (void *)(&BGl_symbol3369z00zz__weakhashz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__weakhashz00(long BgL_checksumz00_5084, char * BgL_fromz00_5085)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__weakhashz00))
{ 
BGl_requirezd2initializa7ationz75zz__weakhashz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__weakhashz00(); 
BGl_cnstzd2initzd2zz__weakhashz00(); 
BGl_importedzd2moduleszd2initz00zz__weakhashz00(); 
return 
BGl_toplevelzd2initzd2zz__weakhashz00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__weakhashz00()
{
{ /* Llib/weakhash.scm 18 */
BGl_symbol3321z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3322z00zz__weakhashz00); 
BGl_symbol3337z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3338z00zz__weakhashz00); 
BGl_symbol3339z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3340z00zz__weakhashz00); 
BGl_symbol3341z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3342z00zz__weakhashz00); 
BGl_symbol3343z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3344z00zz__weakhashz00); 
BGl_list3336z00zz__weakhashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3337z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3339z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3339z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3341z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3343z00zz__weakhashz00, BNIL))))); 
BGl_symbol3346z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3347z00zz__weakhashz00); 
BGl_symbol3348z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3349z00zz__weakhashz00); 
BGl_list3345z00zz__weakhashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3337z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3339z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3339z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3346z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3348z00zz__weakhashz00, BNIL))))); 
BGl_list3350z00zz__weakhashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3337z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3339z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3339z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3341z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3348z00zz__weakhashz00, BNIL))))); 
BGl_symbol3352z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3353z00zz__weakhashz00); 
BGl_symbol3354z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3355z00zz__weakhashz00); 
BGl_list3351z00zz__weakhashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3337z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3339z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3339z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3352z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3354z00zz__weakhashz00, BNIL))))); 
BGl_symbol3369z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3370z00zz__weakhashz00); 
BGl_list3368z00zz__weakhashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3337z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3339z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3339z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3341z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3369z00zz__weakhashz00, BNIL))))); 
BGl_symbol3381z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3382z00zz__weakhashz00); 
BGl_list3380z00zz__weakhashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3337z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3381z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3381z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3341z00zz__weakhashz00, BNIL)))); 
BGl_symbol3387z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3388z00zz__weakhashz00); 
BGl_symbol3389z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3390z00zz__weakhashz00); 
BGl_list3386z00zz__weakhashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3337z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3387z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3387z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3341z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3389z00zz__weakhashz00, BNIL))))); 
BGl_list3401z00zz__weakhashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3337z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3387z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3387z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3389z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3341z00zz__weakhashz00, BNIL))))); 
BGl_symbol3408z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3409z00zz__weakhashz00); 
BGl_list3407z00zz__weakhashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3337z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3408z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3408z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3369z00zz__weakhashz00, BNIL)))); 
BGl_symbol3413z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3414z00zz__weakhashz00); 
BGl_symbol3415z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3416z00zz__weakhashz00); 
BGl_list3412z00zz__weakhashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3337z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3408z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3408z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3413z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3415z00zz__weakhashz00, BNIL))))); 
BGl_symbol3418z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3419z00zz__weakhashz00); 
BGl_symbol3420z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3421z00zz__weakhashz00); 
BGl_list3417z00zz__weakhashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3337z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3408z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3408z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3418z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3420z00zz__weakhashz00, BNIL))))); 
BGl_symbol3438z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3439z00zz__weakhashz00); 
BGl_list3437z00zz__weakhashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3337z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3381z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3381z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3438z00zz__weakhashz00, BNIL)))); 
BGl_symbol3445z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3446z00zz__weakhashz00); 
return ( 
BGl_list3444z00zz__weakhashz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3337z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3381z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3381z00zz__weakhashz00, 
MAKE_YOUNG_PAIR(BGl_symbol3445z00zz__weakhashz00, BNIL)))), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__weakhashz00()
{
{ /* Llib/weakhash.scm 18 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__weakhashz00()
{
{ /* Llib/weakhash.scm 18 */
BGl_keepgoingz00zz__weakhashz00 = 
MAKE_YOUNG_PAIR(BUNSPEC, BUNSPEC); 
BGl_removez00zz__weakhashz00 = 
MAKE_YOUNG_PAIR(BUNSPEC, BUNSPEC); 
return ( 
BGl_removestopz00zz__weakhashz00 = 
MAKE_YOUNG_PAIR(BUNSPEC, BUNSPEC), BUNSPEC) ;} 

}



/* traverse-buckets */
obj_t BGl_traversezd2bucketszd2zz__weakhashz00(obj_t BgL_tablez00_47, obj_t BgL_bucketsz00_48, long BgL_iz00_49, obj_t BgL_funz00_50)
{
{ /* Llib/weakhash.scm 134 */
{ /* Llib/weakhash.scm 135 */
bool_t BgL_test3565z00_5178;
{ /* Llib/weakhash.scm 141 */
obj_t BgL_arg1371z00_1315;
{ /* Llib/weakhash.scm 141 */
bool_t BgL_test3566z00_5179;
{ /* Llib/weakhash.scm 141 */
obj_t BgL_tmpz00_5180;
{ /* Llib/weakhash.scm 141 */
obj_t BgL_res2012z00_2318;
{ /* Llib/weakhash.scm 141 */
obj_t BgL_aux2596z00_4257;
BgL_aux2596z00_4257 = 
STRUCT_KEY(BgL_tablez00_47); 
if(
SYMBOLP(BgL_aux2596z00_4257))
{ /* Llib/weakhash.scm 141 */
BgL_res2012z00_2318 = BgL_aux2596z00_4257; }  else 
{ 
obj_t BgL_auxz00_5184;
BgL_auxz00_5184 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5460)), BGl_string3319z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2596z00_4257); 
FAILURE(BgL_auxz00_5184,BFALSE,BFALSE);} } 
BgL_tmpz00_5180 = BgL_res2012z00_2318; } 
BgL_test3566z00_5179 = 
(BgL_tmpz00_5180==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3566z00_5179)
{ /* Llib/weakhash.scm 141 */
int BgL_tmpz00_5189;
BgL_tmpz00_5189 = 
(int)(((long)5)); 
BgL_arg1371z00_1315 = 
STRUCT_REF(BgL_tablez00_47, BgL_tmpz00_5189); }  else 
{ /* Llib/weakhash.scm 141 */
BgL_arg1371z00_1315 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_47); } } 
{ /* Llib/weakhash.scm 141 */
long BgL_n2z00_2319;
{ /* Llib/weakhash.scm 141 */
obj_t BgL_tmpz00_5193;
if(
INTEGERP(BgL_arg1371z00_1315))
{ /* Llib/weakhash.scm 141 */
BgL_tmpz00_5193 = BgL_arg1371z00_1315
; }  else 
{ 
obj_t BgL_auxz00_5196;
BgL_auxz00_5196 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5482)), BGl_string3319z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1371z00_1315); 
FAILURE(BgL_auxz00_5196,BFALSE,BFALSE);} 
BgL_n2z00_2319 = 
(long)CINT(BgL_tmpz00_5193); } 
BgL_test3565z00_5178 = 
(((long)1)==BgL_n2z00_2319); } } 
if(BgL_test3565z00_5178)
{ /* Llib/weakhash.scm 135 */
obj_t BgL_g1057z00_1240;
{ /* Llib/weakhash.scm 135 */
obj_t BgL_vectorz00_2321;
if(
VECTORP(BgL_bucketsz00_48))
{ /* Llib/weakhash.scm 135 */
BgL_vectorz00_2321 = BgL_bucketsz00_48; }  else 
{ 
obj_t BgL_auxz00_5204;
BgL_auxz00_5204 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5286)), BGl_string3319z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_48); 
FAILURE(BgL_auxz00_5204,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 135 */
bool_t BgL_test3570z00_5208;
{ /* Llib/weakhash.scm 135 */
long BgL_tmpz00_5209;
BgL_tmpz00_5209 = 
VECTOR_LENGTH(BgL_vectorz00_2321); 
BgL_test3570z00_5208 = 
BOUND_CHECK(BgL_iz00_49, BgL_tmpz00_5209); } 
if(BgL_test3570z00_5208)
{ /* Llib/weakhash.scm 135 */
BgL_g1057z00_1240 = 
VECTOR_REF(BgL_vectorz00_2321,BgL_iz00_49); }  else 
{ 
obj_t BgL_auxz00_5213;
BgL_auxz00_5213 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5286)), BGl_string3326z00zz__weakhashz00, BgL_vectorz00_2321, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2321)), 
(int)(BgL_iz00_49)); 
FAILURE(BgL_auxz00_5213,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_bucketz00_1242;obj_t BgL_lastzd2bucketzd2_1243;
BgL_bucketz00_1242 = BgL_g1057z00_1240; 
BgL_lastzd2bucketzd2_1243 = BFALSE; 
BgL_zc3z04anonymousza31321ze3z87_1244:
if(
NULLP(BgL_bucketz00_1242))
{ /* Llib/weakhash.scm 135 */
return BGl_keepgoingz00zz__weakhashz00;}  else 
{ /* Llib/weakhash.scm 135 */
obj_t BgL_retz00_1246;
{ /* Llib/weakhash.scm 143 */
obj_t BgL_keyz00_1252;
{ /* Llib/weakhash.scm 143 */
obj_t BgL_arg1330z00_1255;
{ /* Llib/weakhash.scm 143 */
obj_t BgL_pairz00_2324;
if(
PAIRP(BgL_bucketz00_1242))
{ /* Llib/weakhash.scm 143 */
BgL_pairz00_2324 = BgL_bucketz00_1242; }  else 
{ 
obj_t BgL_auxz00_5224;
BgL_auxz00_5224 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5540)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1242); 
FAILURE(BgL_auxz00_5224,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 143 */
obj_t BgL_pairz00_2327;
{ /* Llib/weakhash.scm 143 */
obj_t BgL_aux2604z00_4265;
BgL_aux2604z00_4265 = 
CAR(BgL_pairz00_2324); 
if(
PAIRP(BgL_aux2604z00_4265))
{ /* Llib/weakhash.scm 143 */
BgL_pairz00_2327 = BgL_aux2604z00_4265; }  else 
{ 
obj_t BgL_auxz00_5231;
BgL_auxz00_5231 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5534)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_aux2604z00_4265); 
FAILURE(BgL_auxz00_5231,BFALSE,BFALSE);} } 
BgL_arg1330z00_1255 = 
CAR(BgL_pairz00_2327); } } 
{ /* Llib/weakhash.scm 143 */
obj_t BgL_objz00_2328;
if(
BGL_WEAKPTRP(BgL_arg1330z00_1255))
{ /* Llib/weakhash.scm 143 */
BgL_objz00_2328 = BgL_arg1330z00_1255; }  else 
{ 
obj_t BgL_auxz00_5238;
BgL_auxz00_5238 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5546)), BGl_string3327z00zz__weakhashz00, BGl_string3329z00zz__weakhashz00, BgL_arg1330z00_1255); 
FAILURE(BgL_auxz00_5238,BFALSE,BFALSE);} 
BgL_keyz00_1252 = 
weakptr_data(BgL_objz00_2328); } } 
if(
(BgL_keyz00_1252==BUNSPEC))
{ /* Llib/weakhash.scm 144 */
BgL_retz00_1246 = BGl_removez00zz__weakhashz00; }  else 
{ /* Llib/weakhash.scm 146 */
obj_t BgL_arg1329z00_1254;
{ /* Llib/weakhash.scm 146 */
obj_t BgL_pairz00_2329;
if(
PAIRP(BgL_bucketz00_1242))
{ /* Llib/weakhash.scm 146 */
BgL_pairz00_2329 = BgL_bucketz00_1242; }  else 
{ 
obj_t BgL_auxz00_5247;
BgL_auxz00_5247 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5626)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1242); 
FAILURE(BgL_auxz00_5247,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 146 */
obj_t BgL_pairz00_2332;
{ /* Llib/weakhash.scm 146 */
obj_t BgL_aux2610z00_4271;
BgL_aux2610z00_4271 = 
CAR(BgL_pairz00_2329); 
if(
PAIRP(BgL_aux2610z00_4271))
{ /* Llib/weakhash.scm 146 */
BgL_pairz00_2332 = BgL_aux2610z00_4271; }  else 
{ 
obj_t BgL_auxz00_5254;
BgL_auxz00_5254 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5620)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_aux2610z00_4271); 
FAILURE(BgL_auxz00_5254,BFALSE,BFALSE);} } 
BgL_arg1329z00_1254 = 
CDR(BgL_pairz00_2332); } } 
BgL_retz00_1246 = 
PROCEDURE_L_ENTRY(BgL_funz00_50)(BgL_funz00_50, BgL_keyz00_1252, BgL_arg1329z00_1254, BgL_bucketz00_1242); } } 
if(
(BgL_retz00_1246==BGl_keepgoingz00zz__weakhashz00))
{ /* Llib/weakhash.scm 135 */
obj_t BgL_arg1324z00_1248;
{ /* Llib/weakhash.scm 135 */
obj_t BgL_pairz00_2333;
if(
PAIRP(BgL_bucketz00_1242))
{ /* Llib/weakhash.scm 135 */
BgL_pairz00_2333 = BgL_bucketz00_1242; }  else 
{ 
obj_t BgL_auxz00_5269;
BgL_auxz00_5269 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5286)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1242); 
FAILURE(BgL_auxz00_5269,BFALSE,BFALSE);} 
BgL_arg1324z00_1248 = 
CDR(BgL_pairz00_2333); } 
{ 
obj_t BgL_lastzd2bucketzd2_5275;obj_t BgL_bucketz00_5274;
BgL_bucketz00_5274 = BgL_arg1324z00_1248; 
BgL_lastzd2bucketzd2_5275 = BgL_bucketz00_1242; 
BgL_lastzd2bucketzd2_1243 = BgL_lastzd2bucketzd2_5275; 
BgL_bucketz00_1242 = BgL_bucketz00_5274; 
goto BgL_zc3z04anonymousza31321ze3z87_1244;} }  else 
{ /* Llib/weakhash.scm 135 */
if(
(BgL_retz00_1246==BGl_removez00zz__weakhashz00))
{ /* Llib/weakhash.scm 135 */
{ /* Llib/weakhash.scm 124 */
long BgL_arg1315z00_2334;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_arg1316z00_2335;
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3581z00_5278;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_5279;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2015z00_2341;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2614z00_4275;
BgL_aux2614z00_4275 = 
STRUCT_KEY(BgL_tablez00_47); 
if(
SYMBOLP(BgL_aux2614z00_4275))
{ /* Llib/weakhash.scm 124 */
BgL_res2015z00_2341 = BgL_aux2614z00_4275; }  else 
{ 
obj_t BgL_auxz00_5283;
BgL_auxz00_5283 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4802)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2614z00_4275); 
FAILURE(BgL_auxz00_5283,BFALSE,BFALSE);} } 
BgL_tmpz00_5279 = BgL_res2015z00_2341; } 
BgL_test3581z00_5278 = 
(BgL_tmpz00_5279==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3581z00_5278)
{ /* Llib/weakhash.scm 124 */
int BgL_tmpz00_5288;
BgL_tmpz00_5288 = 
(int)(((long)0)); 
BgL_arg1316z00_2335 = 
STRUCT_REF(BgL_tablez00_47, BgL_tmpz00_5288); }  else 
{ /* Llib/weakhash.scm 124 */
BgL_arg1316z00_2335 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_47); } } 
{ /* Llib/weakhash.scm 124 */
long BgL_za71za7_2342;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_5292;
if(
INTEGERP(BgL_arg1316z00_2335))
{ /* Llib/weakhash.scm 124 */
BgL_tmpz00_5292 = BgL_arg1316z00_2335
; }  else 
{ 
obj_t BgL_auxz00_5295;
BgL_auxz00_5295 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4824)), BGl_string3327z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1316z00_2335); 
FAILURE(BgL_auxz00_5295,BFALSE,BFALSE);} 
BgL_za71za7_2342 = 
(long)CINT(BgL_tmpz00_5292); } 
BgL_arg1315z00_2334 = 
(BgL_za71za7_2342-((long)1)); } } 
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3584z00_5301;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_5302;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2017z00_2347;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2618z00_4279;
BgL_aux2618z00_4279 = 
STRUCT_KEY(BgL_tablez00_47); 
if(
SYMBOLP(BgL_aux2618z00_4279))
{ /* Llib/weakhash.scm 124 */
BgL_res2017z00_2347 = BgL_aux2618z00_4279; }  else 
{ 
obj_t BgL_auxz00_5306;
BgL_auxz00_5306 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4769)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2618z00_4279); 
FAILURE(BgL_auxz00_5306,BFALSE,BFALSE);} } 
BgL_tmpz00_5302 = BgL_res2017z00_2347; } 
BgL_test3584z00_5301 = 
(BgL_tmpz00_5302==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3584z00_5301)
{ /* Llib/weakhash.scm 124 */
obj_t BgL_auxz00_5313;int BgL_tmpz00_5311;
BgL_auxz00_5313 = 
BINT(BgL_arg1315z00_2334); 
BgL_tmpz00_5311 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_47, BgL_tmpz00_5311, BgL_auxz00_5313); }  else 
{ /* Llib/weakhash.scm 124 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_47); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_1243))
{ /* Llib/weakhash.scm 126 */
obj_t BgL_arg1317z00_2336;
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2348;
if(
PAIRP(BgL_bucketz00_1242))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2348 = BgL_bucketz00_1242; }  else 
{ 
obj_t BgL_auxz00_5321;
BgL_auxz00_5321 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4883)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1242); 
FAILURE(BgL_auxz00_5321,BFALSE,BFALSE);} 
BgL_arg1317z00_2336 = 
CDR(BgL_pairz00_2348); } 
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2349;
if(
PAIRP(BgL_lastzd2bucketzd2_1243))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2349 = BgL_lastzd2bucketzd2_1243; }  else 
{ 
obj_t BgL_auxz00_5328;
BgL_auxz00_5328 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4866)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_lastzd2bucketzd2_1243); 
FAILURE(BgL_auxz00_5328,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2349, BgL_arg1317z00_2336); } }  else 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_arg1318z00_2337;
{ /* Llib/weakhash.scm 127 */
obj_t BgL_pairz00_2350;
if(
PAIRP(BgL_bucketz00_1242))
{ /* Llib/weakhash.scm 127 */
BgL_pairz00_2350 = BgL_bucketz00_1242; }  else 
{ 
obj_t BgL_auxz00_5335;
BgL_auxz00_5335 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4927)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1242); 
FAILURE(BgL_auxz00_5335,BFALSE,BFALSE);} 
BgL_arg1318z00_2337 = 
CDR(BgL_pairz00_2350); } 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_vectorz00_2351;
if(
VECTORP(BgL_bucketsz00_48))
{ /* Llib/weakhash.scm 127 */
BgL_vectorz00_2351 = BgL_bucketsz00_48; }  else 
{ 
obj_t BgL_auxz00_5342;
BgL_auxz00_5342 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4912)), BGl_string3327z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_48); 
FAILURE(BgL_auxz00_5342,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 127 */
bool_t BgL_test3591z00_5346;
{ /* Llib/weakhash.scm 127 */
long BgL_tmpz00_5347;
BgL_tmpz00_5347 = 
VECTOR_LENGTH(BgL_vectorz00_2351); 
BgL_test3591z00_5346 = 
BOUND_CHECK(BgL_iz00_49, BgL_tmpz00_5347); } 
if(BgL_test3591z00_5346)
{ /* Llib/weakhash.scm 127 */
VECTOR_SET(BgL_vectorz00_2351,BgL_iz00_49,BgL_arg1318z00_2337); }  else 
{ 
obj_t BgL_auxz00_5351;
BgL_auxz00_5351 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4899)), BGl_string3331z00zz__weakhashz00, BgL_vectorz00_2351, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2351)), 
(int)(BgL_iz00_49)); 
FAILURE(BgL_auxz00_5351,BFALSE,BFALSE);} } } } BGl_keepgoingz00zz__weakhashz00; 
{ /* Llib/weakhash.scm 135 */
obj_t BgL_arg1326z00_1250;
{ /* Llib/weakhash.scm 135 */
obj_t BgL_pairz00_2353;
if(
PAIRP(BgL_bucketz00_1242))
{ /* Llib/weakhash.scm 135 */
BgL_pairz00_2353 = BgL_bucketz00_1242; }  else 
{ 
obj_t BgL_auxz00_5360;
BgL_auxz00_5360 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5286)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1242); 
FAILURE(BgL_auxz00_5360,BFALSE,BFALSE);} 
BgL_arg1326z00_1250 = 
CDR(BgL_pairz00_2353); } 
{ 
obj_t BgL_bucketz00_5365;
BgL_bucketz00_5365 = BgL_arg1326z00_1250; 
BgL_bucketz00_1242 = BgL_bucketz00_5365; 
goto BgL_zc3z04anonymousza31321ze3z87_1244;} } }  else 
{ /* Llib/weakhash.scm 135 */
if(
(BgL_retz00_1246==BGl_removestopz00zz__weakhashz00))
{ /* Llib/weakhash.scm 135 */
{ /* Llib/weakhash.scm 124 */
long BgL_arg1315z00_2354;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_arg1316z00_2355;
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3594z00_5368;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_5369;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2018z00_2361;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2630z00_4291;
BgL_aux2630z00_4291 = 
STRUCT_KEY(BgL_tablez00_47); 
if(
SYMBOLP(BgL_aux2630z00_4291))
{ /* Llib/weakhash.scm 124 */
BgL_res2018z00_2361 = BgL_aux2630z00_4291; }  else 
{ 
obj_t BgL_auxz00_5373;
BgL_auxz00_5373 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4802)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2630z00_4291); 
FAILURE(BgL_auxz00_5373,BFALSE,BFALSE);} } 
BgL_tmpz00_5369 = BgL_res2018z00_2361; } 
BgL_test3594z00_5368 = 
(BgL_tmpz00_5369==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3594z00_5368)
{ /* Llib/weakhash.scm 124 */
int BgL_tmpz00_5378;
BgL_tmpz00_5378 = 
(int)(((long)0)); 
BgL_arg1316z00_2355 = 
STRUCT_REF(BgL_tablez00_47, BgL_tmpz00_5378); }  else 
{ /* Llib/weakhash.scm 124 */
BgL_arg1316z00_2355 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_47); } } 
{ /* Llib/weakhash.scm 124 */
long BgL_za71za7_2362;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_5382;
if(
INTEGERP(BgL_arg1316z00_2355))
{ /* Llib/weakhash.scm 124 */
BgL_tmpz00_5382 = BgL_arg1316z00_2355
; }  else 
{ 
obj_t BgL_auxz00_5385;
BgL_auxz00_5385 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4824)), BGl_string3327z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1316z00_2355); 
FAILURE(BgL_auxz00_5385,BFALSE,BFALSE);} 
BgL_za71za7_2362 = 
(long)CINT(BgL_tmpz00_5382); } 
BgL_arg1315z00_2354 = 
(BgL_za71za7_2362-((long)1)); } } 
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3597z00_5391;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_5392;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2020z00_2367;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2634z00_4295;
BgL_aux2634z00_4295 = 
STRUCT_KEY(BgL_tablez00_47); 
if(
SYMBOLP(BgL_aux2634z00_4295))
{ /* Llib/weakhash.scm 124 */
BgL_res2020z00_2367 = BgL_aux2634z00_4295; }  else 
{ 
obj_t BgL_auxz00_5396;
BgL_auxz00_5396 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4769)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2634z00_4295); 
FAILURE(BgL_auxz00_5396,BFALSE,BFALSE);} } 
BgL_tmpz00_5392 = BgL_res2020z00_2367; } 
BgL_test3597z00_5391 = 
(BgL_tmpz00_5392==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3597z00_5391)
{ /* Llib/weakhash.scm 124 */
obj_t BgL_auxz00_5403;int BgL_tmpz00_5401;
BgL_auxz00_5403 = 
BINT(BgL_arg1315z00_2354); 
BgL_tmpz00_5401 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_47, BgL_tmpz00_5401, BgL_auxz00_5403); }  else 
{ /* Llib/weakhash.scm 124 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_47); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_1243))
{ /* Llib/weakhash.scm 126 */
obj_t BgL_arg1317z00_2356;
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2368;
if(
PAIRP(BgL_bucketz00_1242))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2368 = BgL_bucketz00_1242; }  else 
{ 
obj_t BgL_auxz00_5411;
BgL_auxz00_5411 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4883)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1242); 
FAILURE(BgL_auxz00_5411,BFALSE,BFALSE);} 
BgL_arg1317z00_2356 = 
CDR(BgL_pairz00_2368); } 
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2369;
if(
PAIRP(BgL_lastzd2bucketzd2_1243))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2369 = BgL_lastzd2bucketzd2_1243; }  else 
{ 
obj_t BgL_auxz00_5418;
BgL_auxz00_5418 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4866)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_lastzd2bucketzd2_1243); 
FAILURE(BgL_auxz00_5418,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2369, BgL_arg1317z00_2356); } }  else 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_arg1318z00_2357;
{ /* Llib/weakhash.scm 127 */
obj_t BgL_pairz00_2370;
if(
PAIRP(BgL_bucketz00_1242))
{ /* Llib/weakhash.scm 127 */
BgL_pairz00_2370 = BgL_bucketz00_1242; }  else 
{ 
obj_t BgL_auxz00_5425;
BgL_auxz00_5425 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4927)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1242); 
FAILURE(BgL_auxz00_5425,BFALSE,BFALSE);} 
BgL_arg1318z00_2357 = 
CDR(BgL_pairz00_2370); } 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_vectorz00_2371;
if(
VECTORP(BgL_bucketsz00_48))
{ /* Llib/weakhash.scm 127 */
BgL_vectorz00_2371 = BgL_bucketsz00_48; }  else 
{ 
obj_t BgL_auxz00_5432;
BgL_auxz00_5432 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4912)), BGl_string3327z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_48); 
FAILURE(BgL_auxz00_5432,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 127 */
bool_t BgL_test3604z00_5436;
{ /* Llib/weakhash.scm 127 */
long BgL_tmpz00_5437;
BgL_tmpz00_5437 = 
VECTOR_LENGTH(BgL_vectorz00_2371); 
BgL_test3604z00_5436 = 
BOUND_CHECK(BgL_iz00_49, BgL_tmpz00_5437); } 
if(BgL_test3604z00_5436)
{ /* Llib/weakhash.scm 127 */
VECTOR_SET(BgL_vectorz00_2371,BgL_iz00_49,BgL_arg1318z00_2357); }  else 
{ 
obj_t BgL_auxz00_5441;
BgL_auxz00_5441 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4899)), BGl_string3331z00zz__weakhashz00, BgL_vectorz00_2371, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2371)), 
(int)(BgL_iz00_49)); 
FAILURE(BgL_auxz00_5441,BFALSE,BFALSE);} } } } 
return BGl_keepgoingz00zz__weakhashz00;}  else 
{ /* Llib/weakhash.scm 135 */
return BgL_retz00_1246;} } } } } }  else 
{ /* Llib/weakhash.scm 135 */
bool_t BgL_test3605z00_5448;
{ /* Llib/weakhash.scm 147 */
obj_t BgL_arg1370z00_1314;
{ /* Llib/weakhash.scm 147 */
bool_t BgL_test3606z00_5449;
{ /* Llib/weakhash.scm 147 */
obj_t BgL_tmpz00_5450;
{ /* Llib/weakhash.scm 147 */
obj_t BgL_res2021z00_2376;
{ /* Llib/weakhash.scm 147 */
obj_t BgL_aux2644z00_4305;
BgL_aux2644z00_4305 = 
STRUCT_KEY(BgL_tablez00_47); 
if(
SYMBOLP(BgL_aux2644z00_4305))
{ /* Llib/weakhash.scm 147 */
BgL_res2021z00_2376 = BgL_aux2644z00_4305; }  else 
{ 
obj_t BgL_auxz00_5454;
BgL_auxz00_5454 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5672)), BGl_string3319z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2644z00_4305); 
FAILURE(BgL_auxz00_5454,BFALSE,BFALSE);} } 
BgL_tmpz00_5450 = BgL_res2021z00_2376; } 
BgL_test3606z00_5449 = 
(BgL_tmpz00_5450==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3606z00_5449)
{ /* Llib/weakhash.scm 147 */
int BgL_tmpz00_5459;
BgL_tmpz00_5459 = 
(int)(((long)5)); 
BgL_arg1370z00_1314 = 
STRUCT_REF(BgL_tablez00_47, BgL_tmpz00_5459); }  else 
{ /* Llib/weakhash.scm 147 */
BgL_arg1370z00_1314 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_47); } } 
{ /* Llib/weakhash.scm 147 */
long BgL_n2z00_2377;
{ /* Llib/weakhash.scm 147 */
obj_t BgL_tmpz00_5463;
if(
INTEGERP(BgL_arg1370z00_1314))
{ /* Llib/weakhash.scm 147 */
BgL_tmpz00_5463 = BgL_arg1370z00_1314
; }  else 
{ 
obj_t BgL_auxz00_5466;
BgL_auxz00_5466 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5694)), BGl_string3319z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1370z00_1314); 
FAILURE(BgL_auxz00_5466,BFALSE,BFALSE);} 
BgL_n2z00_2377 = 
(long)CINT(BgL_tmpz00_5463); } 
BgL_test3605z00_5448 = 
(((long)2)==BgL_n2z00_2377); } } 
if(BgL_test3605z00_5448)
{ /* Llib/weakhash.scm 135 */
obj_t BgL_g1058z00_1259;
{ /* Llib/weakhash.scm 135 */
obj_t BgL_vectorz00_2379;
if(
VECTORP(BgL_bucketsz00_48))
{ /* Llib/weakhash.scm 135 */
BgL_vectorz00_2379 = BgL_bucketsz00_48; }  else 
{ 
obj_t BgL_auxz00_5474;
BgL_auxz00_5474 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5286)), BGl_string3319z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_48); 
FAILURE(BgL_auxz00_5474,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 135 */
bool_t BgL_test3610z00_5478;
{ /* Llib/weakhash.scm 135 */
long BgL_tmpz00_5479;
BgL_tmpz00_5479 = 
VECTOR_LENGTH(BgL_vectorz00_2379); 
BgL_test3610z00_5478 = 
BOUND_CHECK(BgL_iz00_49, BgL_tmpz00_5479); } 
if(BgL_test3610z00_5478)
{ /* Llib/weakhash.scm 135 */
BgL_g1058z00_1259 = 
VECTOR_REF(BgL_vectorz00_2379,BgL_iz00_49); }  else 
{ 
obj_t BgL_auxz00_5483;
BgL_auxz00_5483 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5286)), BGl_string3326z00zz__weakhashz00, BgL_vectorz00_2379, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2379)), 
(int)(BgL_iz00_49)); 
FAILURE(BgL_auxz00_5483,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_bucketz00_1261;obj_t BgL_lastzd2bucketzd2_1262;
BgL_bucketz00_1261 = BgL_g1058z00_1259; 
BgL_lastzd2bucketzd2_1262 = BFALSE; 
BgL_zc3z04anonymousza31333ze3z87_1263:
if(
NULLP(BgL_bucketz00_1261))
{ /* Llib/weakhash.scm 135 */
return BGl_keepgoingz00zz__weakhashz00;}  else 
{ /* Llib/weakhash.scm 135 */
obj_t BgL_retz00_1265;
{ /* Llib/weakhash.scm 149 */
obj_t BgL_dataz00_1271;
{ /* Llib/weakhash.scm 149 */
obj_t BgL_arg1343z00_1274;
{ /* Llib/weakhash.scm 149 */
obj_t BgL_pairz00_2382;
if(
PAIRP(BgL_bucketz00_1261))
{ /* Llib/weakhash.scm 149 */
BgL_pairz00_2382 = BgL_bucketz00_1261; }  else 
{ 
obj_t BgL_auxz00_5494;
BgL_auxz00_5494 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5753)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1261); 
FAILURE(BgL_auxz00_5494,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 149 */
obj_t BgL_pairz00_2385;
{ /* Llib/weakhash.scm 149 */
obj_t BgL_aux2652z00_4313;
BgL_aux2652z00_4313 = 
CAR(BgL_pairz00_2382); 
if(
PAIRP(BgL_aux2652z00_4313))
{ /* Llib/weakhash.scm 149 */
BgL_pairz00_2385 = BgL_aux2652z00_4313; }  else 
{ 
obj_t BgL_auxz00_5501;
BgL_auxz00_5501 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5747)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_aux2652z00_4313); 
FAILURE(BgL_auxz00_5501,BFALSE,BFALSE);} } 
BgL_arg1343z00_1274 = 
CDR(BgL_pairz00_2385); } } 
{ /* Llib/weakhash.scm 149 */
obj_t BgL_objz00_2386;
if(
BGL_WEAKPTRP(BgL_arg1343z00_1274))
{ /* Llib/weakhash.scm 149 */
BgL_objz00_2386 = BgL_arg1343z00_1274; }  else 
{ 
obj_t BgL_auxz00_5508;
BgL_auxz00_5508 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5759)), BGl_string3327z00zz__weakhashz00, BGl_string3329z00zz__weakhashz00, BgL_arg1343z00_1274); 
FAILURE(BgL_auxz00_5508,BFALSE,BFALSE);} 
BgL_dataz00_1271 = 
weakptr_data(BgL_objz00_2386); } } 
if(
(BgL_dataz00_1271==BUNSPEC))
{ /* Llib/weakhash.scm 150 */
BgL_retz00_1265 = BGl_removez00zz__weakhashz00; }  else 
{ /* Llib/weakhash.scm 152 */
obj_t BgL_arg1342z00_1273;
{ /* Llib/weakhash.scm 152 */
obj_t BgL_pairz00_2387;
if(
PAIRP(BgL_bucketz00_1261))
{ /* Llib/weakhash.scm 152 */
BgL_pairz00_2387 = BgL_bucketz00_1261; }  else 
{ 
obj_t BgL_auxz00_5517;
BgL_auxz00_5517 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5836)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1261); 
FAILURE(BgL_auxz00_5517,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 152 */
obj_t BgL_pairz00_2390;
{ /* Llib/weakhash.scm 152 */
obj_t BgL_aux2658z00_4319;
BgL_aux2658z00_4319 = 
CAR(BgL_pairz00_2387); 
if(
PAIRP(BgL_aux2658z00_4319))
{ /* Llib/weakhash.scm 152 */
BgL_pairz00_2390 = BgL_aux2658z00_4319; }  else 
{ 
obj_t BgL_auxz00_5524;
BgL_auxz00_5524 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5830)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_aux2658z00_4319); 
FAILURE(BgL_auxz00_5524,BFALSE,BFALSE);} } 
BgL_arg1342z00_1273 = 
CAR(BgL_pairz00_2390); } } 
BgL_retz00_1265 = 
PROCEDURE_L_ENTRY(BgL_funz00_50)(BgL_funz00_50, BgL_arg1342z00_1273, BgL_dataz00_1271, BgL_bucketz00_1261); } } 
if(
(BgL_retz00_1265==BGl_keepgoingz00zz__weakhashz00))
{ /* Llib/weakhash.scm 135 */
obj_t BgL_arg1337z00_1267;
{ /* Llib/weakhash.scm 135 */
obj_t BgL_pairz00_2391;
if(
PAIRP(BgL_bucketz00_1261))
{ /* Llib/weakhash.scm 135 */
BgL_pairz00_2391 = BgL_bucketz00_1261; }  else 
{ 
obj_t BgL_auxz00_5539;
BgL_auxz00_5539 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5286)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1261); 
FAILURE(BgL_auxz00_5539,BFALSE,BFALSE);} 
BgL_arg1337z00_1267 = 
CDR(BgL_pairz00_2391); } 
{ 
obj_t BgL_lastzd2bucketzd2_5545;obj_t BgL_bucketz00_5544;
BgL_bucketz00_5544 = BgL_arg1337z00_1267; 
BgL_lastzd2bucketzd2_5545 = BgL_bucketz00_1261; 
BgL_lastzd2bucketzd2_1262 = BgL_lastzd2bucketzd2_5545; 
BgL_bucketz00_1261 = BgL_bucketz00_5544; 
goto BgL_zc3z04anonymousza31333ze3z87_1263;} }  else 
{ /* Llib/weakhash.scm 135 */
if(
(BgL_retz00_1265==BGl_removez00zz__weakhashz00))
{ /* Llib/weakhash.scm 135 */
{ /* Llib/weakhash.scm 124 */
long BgL_arg1315z00_2392;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_arg1316z00_2393;
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3621z00_5548;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_5549;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2024z00_2399;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2662z00_4323;
BgL_aux2662z00_4323 = 
STRUCT_KEY(BgL_tablez00_47); 
if(
SYMBOLP(BgL_aux2662z00_4323))
{ /* Llib/weakhash.scm 124 */
BgL_res2024z00_2399 = BgL_aux2662z00_4323; }  else 
{ 
obj_t BgL_auxz00_5553;
BgL_auxz00_5553 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4802)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2662z00_4323); 
FAILURE(BgL_auxz00_5553,BFALSE,BFALSE);} } 
BgL_tmpz00_5549 = BgL_res2024z00_2399; } 
BgL_test3621z00_5548 = 
(BgL_tmpz00_5549==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3621z00_5548)
{ /* Llib/weakhash.scm 124 */
int BgL_tmpz00_5558;
BgL_tmpz00_5558 = 
(int)(((long)0)); 
BgL_arg1316z00_2393 = 
STRUCT_REF(BgL_tablez00_47, BgL_tmpz00_5558); }  else 
{ /* Llib/weakhash.scm 124 */
BgL_arg1316z00_2393 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_47); } } 
{ /* Llib/weakhash.scm 124 */
long BgL_za71za7_2400;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_5562;
if(
INTEGERP(BgL_arg1316z00_2393))
{ /* Llib/weakhash.scm 124 */
BgL_tmpz00_5562 = BgL_arg1316z00_2393
; }  else 
{ 
obj_t BgL_auxz00_5565;
BgL_auxz00_5565 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4824)), BGl_string3327z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1316z00_2393); 
FAILURE(BgL_auxz00_5565,BFALSE,BFALSE);} 
BgL_za71za7_2400 = 
(long)CINT(BgL_tmpz00_5562); } 
BgL_arg1315z00_2392 = 
(BgL_za71za7_2400-((long)1)); } } 
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3624z00_5571;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_5572;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2026z00_2405;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2666z00_4327;
BgL_aux2666z00_4327 = 
STRUCT_KEY(BgL_tablez00_47); 
if(
SYMBOLP(BgL_aux2666z00_4327))
{ /* Llib/weakhash.scm 124 */
BgL_res2026z00_2405 = BgL_aux2666z00_4327; }  else 
{ 
obj_t BgL_auxz00_5576;
BgL_auxz00_5576 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4769)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2666z00_4327); 
FAILURE(BgL_auxz00_5576,BFALSE,BFALSE);} } 
BgL_tmpz00_5572 = BgL_res2026z00_2405; } 
BgL_test3624z00_5571 = 
(BgL_tmpz00_5572==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3624z00_5571)
{ /* Llib/weakhash.scm 124 */
obj_t BgL_auxz00_5583;int BgL_tmpz00_5581;
BgL_auxz00_5583 = 
BINT(BgL_arg1315z00_2392); 
BgL_tmpz00_5581 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_47, BgL_tmpz00_5581, BgL_auxz00_5583); }  else 
{ /* Llib/weakhash.scm 124 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_47); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_1262))
{ /* Llib/weakhash.scm 126 */
obj_t BgL_arg1317z00_2394;
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2406;
if(
PAIRP(BgL_bucketz00_1261))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2406 = BgL_bucketz00_1261; }  else 
{ 
obj_t BgL_auxz00_5591;
BgL_auxz00_5591 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4883)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1261); 
FAILURE(BgL_auxz00_5591,BFALSE,BFALSE);} 
BgL_arg1317z00_2394 = 
CDR(BgL_pairz00_2406); } 
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2407;
if(
PAIRP(BgL_lastzd2bucketzd2_1262))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2407 = BgL_lastzd2bucketzd2_1262; }  else 
{ 
obj_t BgL_auxz00_5598;
BgL_auxz00_5598 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4866)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_lastzd2bucketzd2_1262); 
FAILURE(BgL_auxz00_5598,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2407, BgL_arg1317z00_2394); } }  else 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_arg1318z00_2395;
{ /* Llib/weakhash.scm 127 */
obj_t BgL_pairz00_2408;
if(
PAIRP(BgL_bucketz00_1261))
{ /* Llib/weakhash.scm 127 */
BgL_pairz00_2408 = BgL_bucketz00_1261; }  else 
{ 
obj_t BgL_auxz00_5605;
BgL_auxz00_5605 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4927)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1261); 
FAILURE(BgL_auxz00_5605,BFALSE,BFALSE);} 
BgL_arg1318z00_2395 = 
CDR(BgL_pairz00_2408); } 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_vectorz00_2409;
if(
VECTORP(BgL_bucketsz00_48))
{ /* Llib/weakhash.scm 127 */
BgL_vectorz00_2409 = BgL_bucketsz00_48; }  else 
{ 
obj_t BgL_auxz00_5612;
BgL_auxz00_5612 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4912)), BGl_string3327z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_48); 
FAILURE(BgL_auxz00_5612,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 127 */
bool_t BgL_test3631z00_5616;
{ /* Llib/weakhash.scm 127 */
long BgL_tmpz00_5617;
BgL_tmpz00_5617 = 
VECTOR_LENGTH(BgL_vectorz00_2409); 
BgL_test3631z00_5616 = 
BOUND_CHECK(BgL_iz00_49, BgL_tmpz00_5617); } 
if(BgL_test3631z00_5616)
{ /* Llib/weakhash.scm 127 */
VECTOR_SET(BgL_vectorz00_2409,BgL_iz00_49,BgL_arg1318z00_2395); }  else 
{ 
obj_t BgL_auxz00_5621;
BgL_auxz00_5621 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4899)), BGl_string3331z00zz__weakhashz00, BgL_vectorz00_2409, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2409)), 
(int)(BgL_iz00_49)); 
FAILURE(BgL_auxz00_5621,BFALSE,BFALSE);} } } } BGl_keepgoingz00zz__weakhashz00; 
{ /* Llib/weakhash.scm 135 */
obj_t BgL_arg1339z00_1269;
{ /* Llib/weakhash.scm 135 */
obj_t BgL_pairz00_2411;
if(
PAIRP(BgL_bucketz00_1261))
{ /* Llib/weakhash.scm 135 */
BgL_pairz00_2411 = BgL_bucketz00_1261; }  else 
{ 
obj_t BgL_auxz00_5630;
BgL_auxz00_5630 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5286)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1261); 
FAILURE(BgL_auxz00_5630,BFALSE,BFALSE);} 
BgL_arg1339z00_1269 = 
CDR(BgL_pairz00_2411); } 
{ 
obj_t BgL_bucketz00_5635;
BgL_bucketz00_5635 = BgL_arg1339z00_1269; 
BgL_bucketz00_1261 = BgL_bucketz00_5635; 
goto BgL_zc3z04anonymousza31333ze3z87_1263;} } }  else 
{ /* Llib/weakhash.scm 135 */
if(
(BgL_retz00_1265==BGl_removestopz00zz__weakhashz00))
{ /* Llib/weakhash.scm 135 */
{ /* Llib/weakhash.scm 124 */
long BgL_arg1315z00_2412;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_arg1316z00_2413;
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3634z00_5638;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_5639;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2027z00_2419;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2678z00_4339;
BgL_aux2678z00_4339 = 
STRUCT_KEY(BgL_tablez00_47); 
if(
SYMBOLP(BgL_aux2678z00_4339))
{ /* Llib/weakhash.scm 124 */
BgL_res2027z00_2419 = BgL_aux2678z00_4339; }  else 
{ 
obj_t BgL_auxz00_5643;
BgL_auxz00_5643 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4802)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2678z00_4339); 
FAILURE(BgL_auxz00_5643,BFALSE,BFALSE);} } 
BgL_tmpz00_5639 = BgL_res2027z00_2419; } 
BgL_test3634z00_5638 = 
(BgL_tmpz00_5639==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3634z00_5638)
{ /* Llib/weakhash.scm 124 */
int BgL_tmpz00_5648;
BgL_tmpz00_5648 = 
(int)(((long)0)); 
BgL_arg1316z00_2413 = 
STRUCT_REF(BgL_tablez00_47, BgL_tmpz00_5648); }  else 
{ /* Llib/weakhash.scm 124 */
BgL_arg1316z00_2413 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_47); } } 
{ /* Llib/weakhash.scm 124 */
long BgL_za71za7_2420;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_5652;
if(
INTEGERP(BgL_arg1316z00_2413))
{ /* Llib/weakhash.scm 124 */
BgL_tmpz00_5652 = BgL_arg1316z00_2413
; }  else 
{ 
obj_t BgL_auxz00_5655;
BgL_auxz00_5655 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4824)), BGl_string3327z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1316z00_2413); 
FAILURE(BgL_auxz00_5655,BFALSE,BFALSE);} 
BgL_za71za7_2420 = 
(long)CINT(BgL_tmpz00_5652); } 
BgL_arg1315z00_2412 = 
(BgL_za71za7_2420-((long)1)); } } 
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3637z00_5661;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_5662;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2029z00_2425;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2682z00_4343;
BgL_aux2682z00_4343 = 
STRUCT_KEY(BgL_tablez00_47); 
if(
SYMBOLP(BgL_aux2682z00_4343))
{ /* Llib/weakhash.scm 124 */
BgL_res2029z00_2425 = BgL_aux2682z00_4343; }  else 
{ 
obj_t BgL_auxz00_5666;
BgL_auxz00_5666 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4769)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2682z00_4343); 
FAILURE(BgL_auxz00_5666,BFALSE,BFALSE);} } 
BgL_tmpz00_5662 = BgL_res2029z00_2425; } 
BgL_test3637z00_5661 = 
(BgL_tmpz00_5662==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3637z00_5661)
{ /* Llib/weakhash.scm 124 */
obj_t BgL_auxz00_5673;int BgL_tmpz00_5671;
BgL_auxz00_5673 = 
BINT(BgL_arg1315z00_2412); 
BgL_tmpz00_5671 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_47, BgL_tmpz00_5671, BgL_auxz00_5673); }  else 
{ /* Llib/weakhash.scm 124 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_47); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_1262))
{ /* Llib/weakhash.scm 126 */
obj_t BgL_arg1317z00_2414;
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2426;
if(
PAIRP(BgL_bucketz00_1261))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2426 = BgL_bucketz00_1261; }  else 
{ 
obj_t BgL_auxz00_5681;
BgL_auxz00_5681 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4883)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1261); 
FAILURE(BgL_auxz00_5681,BFALSE,BFALSE);} 
BgL_arg1317z00_2414 = 
CDR(BgL_pairz00_2426); } 
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2427;
if(
PAIRP(BgL_lastzd2bucketzd2_1262))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2427 = BgL_lastzd2bucketzd2_1262; }  else 
{ 
obj_t BgL_auxz00_5688;
BgL_auxz00_5688 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4866)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_lastzd2bucketzd2_1262); 
FAILURE(BgL_auxz00_5688,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2427, BgL_arg1317z00_2414); } }  else 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_arg1318z00_2415;
{ /* Llib/weakhash.scm 127 */
obj_t BgL_pairz00_2428;
if(
PAIRP(BgL_bucketz00_1261))
{ /* Llib/weakhash.scm 127 */
BgL_pairz00_2428 = BgL_bucketz00_1261; }  else 
{ 
obj_t BgL_auxz00_5695;
BgL_auxz00_5695 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4927)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1261); 
FAILURE(BgL_auxz00_5695,BFALSE,BFALSE);} 
BgL_arg1318z00_2415 = 
CDR(BgL_pairz00_2428); } 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_vectorz00_2429;
if(
VECTORP(BgL_bucketsz00_48))
{ /* Llib/weakhash.scm 127 */
BgL_vectorz00_2429 = BgL_bucketsz00_48; }  else 
{ 
obj_t BgL_auxz00_5702;
BgL_auxz00_5702 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4912)), BGl_string3327z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_48); 
FAILURE(BgL_auxz00_5702,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 127 */
bool_t BgL_test3644z00_5706;
{ /* Llib/weakhash.scm 127 */
long BgL_tmpz00_5707;
BgL_tmpz00_5707 = 
VECTOR_LENGTH(BgL_vectorz00_2429); 
BgL_test3644z00_5706 = 
BOUND_CHECK(BgL_iz00_49, BgL_tmpz00_5707); } 
if(BgL_test3644z00_5706)
{ /* Llib/weakhash.scm 127 */
VECTOR_SET(BgL_vectorz00_2429,BgL_iz00_49,BgL_arg1318z00_2415); }  else 
{ 
obj_t BgL_auxz00_5711;
BgL_auxz00_5711 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4899)), BGl_string3331z00zz__weakhashz00, BgL_vectorz00_2429, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2429)), 
(int)(BgL_iz00_49)); 
FAILURE(BgL_auxz00_5711,BFALSE,BFALSE);} } } } 
return BGl_keepgoingz00zz__weakhashz00;}  else 
{ /* Llib/weakhash.scm 135 */
return BgL_retz00_1265;} } } } } }  else 
{ /* Llib/weakhash.scm 135 */
bool_t BgL_test3645z00_5718;
{ /* Llib/weakhash.scm 153 */
obj_t BgL_arg1368z00_1313;
{ /* Llib/weakhash.scm 153 */
bool_t BgL_test3646z00_5719;
{ /* Llib/weakhash.scm 153 */
obj_t BgL_tmpz00_5720;
{ /* Llib/weakhash.scm 153 */
obj_t BgL_res2030z00_2434;
{ /* Llib/weakhash.scm 153 */
obj_t BgL_aux2692z00_4353;
BgL_aux2692z00_4353 = 
STRUCT_KEY(BgL_tablez00_47); 
if(
SYMBOLP(BgL_aux2692z00_4353))
{ /* Llib/weakhash.scm 153 */
BgL_res2030z00_2434 = BgL_aux2692z00_4353; }  else 
{ 
obj_t BgL_auxz00_5724;
BgL_auxz00_5724 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5887)), BGl_string3319z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2692z00_4353); 
FAILURE(BgL_auxz00_5724,BFALSE,BFALSE);} } 
BgL_tmpz00_5720 = BgL_res2030z00_2434; } 
BgL_test3646z00_5719 = 
(BgL_tmpz00_5720==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3646z00_5719)
{ /* Llib/weakhash.scm 153 */
int BgL_tmpz00_5729;
BgL_tmpz00_5729 = 
(int)(((long)5)); 
BgL_arg1368z00_1313 = 
STRUCT_REF(BgL_tablez00_47, BgL_tmpz00_5729); }  else 
{ /* Llib/weakhash.scm 153 */
BgL_arg1368z00_1313 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_47); } } 
{ /* Llib/weakhash.scm 153 */
long BgL_n2z00_2435;
{ /* Llib/weakhash.scm 153 */
obj_t BgL_tmpz00_5733;
if(
INTEGERP(BgL_arg1368z00_1313))
{ /* Llib/weakhash.scm 153 */
BgL_tmpz00_5733 = BgL_arg1368z00_1313
; }  else 
{ 
obj_t BgL_auxz00_5736;
BgL_auxz00_5736 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5909)), BGl_string3319z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1368z00_1313); 
FAILURE(BgL_auxz00_5736,BFALSE,BFALSE);} 
BgL_n2z00_2435 = 
(long)CINT(BgL_tmpz00_5733); } 
BgL_test3645z00_5718 = 
(((long)3)==BgL_n2z00_2435); } } 
if(BgL_test3645z00_5718)
{ /* Llib/weakhash.scm 135 */
obj_t BgL_g1059z00_1278;
{ /* Llib/weakhash.scm 135 */
obj_t BgL_vectorz00_2437;
if(
VECTORP(BgL_bucketsz00_48))
{ /* Llib/weakhash.scm 135 */
BgL_vectorz00_2437 = BgL_bucketsz00_48; }  else 
{ 
obj_t BgL_auxz00_5744;
BgL_auxz00_5744 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5286)), BGl_string3319z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_48); 
FAILURE(BgL_auxz00_5744,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 135 */
bool_t BgL_test3650z00_5748;
{ /* Llib/weakhash.scm 135 */
long BgL_tmpz00_5749;
BgL_tmpz00_5749 = 
VECTOR_LENGTH(BgL_vectorz00_2437); 
BgL_test3650z00_5748 = 
BOUND_CHECK(BgL_iz00_49, BgL_tmpz00_5749); } 
if(BgL_test3650z00_5748)
{ /* Llib/weakhash.scm 135 */
BgL_g1059z00_1278 = 
VECTOR_REF(BgL_vectorz00_2437,BgL_iz00_49); }  else 
{ 
obj_t BgL_auxz00_5753;
BgL_auxz00_5753 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5286)), BGl_string3326z00zz__weakhashz00, BgL_vectorz00_2437, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2437)), 
(int)(BgL_iz00_49)); 
FAILURE(BgL_auxz00_5753,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_bucketz00_1280;obj_t BgL_lastzd2bucketzd2_1281;
BgL_bucketz00_1280 = BgL_g1059z00_1278; 
BgL_lastzd2bucketzd2_1281 = BFALSE; 
BgL_zc3z04anonymousza31346ze3z87_1282:
if(
NULLP(BgL_bucketz00_1280))
{ /* Llib/weakhash.scm 135 */
return BGl_keepgoingz00zz__weakhashz00;}  else 
{ /* Llib/weakhash.scm 135 */
obj_t BgL_retz00_1284;
{ /* Llib/weakhash.scm 155 */
obj_t BgL_keyz00_1290;obj_t BgL_dataz00_1291;
{ /* Llib/weakhash.scm 155 */
obj_t BgL_arg1356z00_1295;
{ /* Llib/weakhash.scm 155 */
obj_t BgL_pairz00_2440;
if(
PAIRP(BgL_bucketz00_1280))
{ /* Llib/weakhash.scm 155 */
BgL_pairz00_2440 = BgL_bucketz00_1280; }  else 
{ 
obj_t BgL_auxz00_5764;
BgL_auxz00_5764 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5971)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1280); 
FAILURE(BgL_auxz00_5764,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 155 */
obj_t BgL_pairz00_2443;
{ /* Llib/weakhash.scm 155 */
obj_t BgL_aux2700z00_4361;
BgL_aux2700z00_4361 = 
CAR(BgL_pairz00_2440); 
if(
PAIRP(BgL_aux2700z00_4361))
{ /* Llib/weakhash.scm 155 */
BgL_pairz00_2443 = BgL_aux2700z00_4361; }  else 
{ 
obj_t BgL_auxz00_5771;
BgL_auxz00_5771 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5965)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_aux2700z00_4361); 
FAILURE(BgL_auxz00_5771,BFALSE,BFALSE);} } 
BgL_arg1356z00_1295 = 
CAR(BgL_pairz00_2443); } } 
{ /* Llib/weakhash.scm 155 */
obj_t BgL_objz00_2444;
if(
BGL_WEAKPTRP(BgL_arg1356z00_1295))
{ /* Llib/weakhash.scm 155 */
BgL_objz00_2444 = BgL_arg1356z00_1295; }  else 
{ 
obj_t BgL_auxz00_5778;
BgL_auxz00_5778 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5977)), BGl_string3327z00zz__weakhashz00, BGl_string3329z00zz__weakhashz00, BgL_arg1356z00_1295); 
FAILURE(BgL_auxz00_5778,BFALSE,BFALSE);} 
BgL_keyz00_1290 = 
weakptr_data(BgL_objz00_2444); } } 
{ /* Llib/weakhash.scm 156 */
obj_t BgL_arg1357z00_1296;
{ /* Llib/weakhash.scm 156 */
obj_t BgL_pairz00_2445;
if(
PAIRP(BgL_bucketz00_1280))
{ /* Llib/weakhash.scm 156 */
BgL_pairz00_2445 = BgL_bucketz00_1280; }  else 
{ 
obj_t BgL_auxz00_5785;
BgL_auxz00_5785 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6016)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1280); 
FAILURE(BgL_auxz00_5785,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 156 */
obj_t BgL_pairz00_2448;
{ /* Llib/weakhash.scm 156 */
obj_t BgL_aux2706z00_4367;
BgL_aux2706z00_4367 = 
CAR(BgL_pairz00_2445); 
if(
PAIRP(BgL_aux2706z00_4367))
{ /* Llib/weakhash.scm 156 */
BgL_pairz00_2448 = BgL_aux2706z00_4367; }  else 
{ 
obj_t BgL_auxz00_5792;
BgL_auxz00_5792 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6010)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_aux2706z00_4367); 
FAILURE(BgL_auxz00_5792,BFALSE,BFALSE);} } 
BgL_arg1357z00_1296 = 
CDR(BgL_pairz00_2448); } } 
{ /* Llib/weakhash.scm 156 */
obj_t BgL_objz00_2449;
if(
BGL_WEAKPTRP(BgL_arg1357z00_1296))
{ /* Llib/weakhash.scm 156 */
BgL_objz00_2449 = BgL_arg1357z00_1296; }  else 
{ 
obj_t BgL_auxz00_5799;
BgL_auxz00_5799 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6022)), BGl_string3327z00zz__weakhashz00, BGl_string3329z00zz__weakhashz00, BgL_arg1357z00_1296); 
FAILURE(BgL_auxz00_5799,BFALSE,BFALSE);} 
BgL_dataz00_1291 = 
weakptr_data(BgL_objz00_2449); } } 
{ /* Llib/weakhash.scm 157 */
bool_t BgL_test3658z00_5804;
if(
(BgL_keyz00_1290==BUNSPEC))
{ /* Llib/weakhash.scm 157 */
BgL_test3658z00_5804 = ((bool_t)1)
; }  else 
{ /* Llib/weakhash.scm 157 */
BgL_test3658z00_5804 = 
(BgL_dataz00_1291==BUNSPEC)
; } 
if(BgL_test3658z00_5804)
{ /* Llib/weakhash.scm 157 */
BgL_retz00_1284 = BGl_removez00zz__weakhashz00; }  else 
{ /* Llib/weakhash.scm 157 */
BgL_retz00_1284 = 
PROCEDURE_L_ENTRY(BgL_funz00_50)(BgL_funz00_50, BgL_keyz00_1290, BgL_dataz00_1291, BgL_bucketz00_1280); } } } 
if(
(BgL_retz00_1284==BGl_keepgoingz00zz__weakhashz00))
{ /* Llib/weakhash.scm 135 */
obj_t BgL_arg1350z00_1286;
{ /* Llib/weakhash.scm 135 */
obj_t BgL_pairz00_2450;
if(
PAIRP(BgL_bucketz00_1280))
{ /* Llib/weakhash.scm 135 */
BgL_pairz00_2450 = BgL_bucketz00_1280; }  else 
{ 
obj_t BgL_auxz00_5818;
BgL_auxz00_5818 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5286)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1280); 
FAILURE(BgL_auxz00_5818,BFALSE,BFALSE);} 
BgL_arg1350z00_1286 = 
CDR(BgL_pairz00_2450); } 
{ 
obj_t BgL_lastzd2bucketzd2_5824;obj_t BgL_bucketz00_5823;
BgL_bucketz00_5823 = BgL_arg1350z00_1286; 
BgL_lastzd2bucketzd2_5824 = BgL_bucketz00_1280; 
BgL_lastzd2bucketzd2_1281 = BgL_lastzd2bucketzd2_5824; 
BgL_bucketz00_1280 = BgL_bucketz00_5823; 
goto BgL_zc3z04anonymousza31346ze3z87_1282;} }  else 
{ /* Llib/weakhash.scm 135 */
if(
(BgL_retz00_1284==BGl_removez00zz__weakhashz00))
{ /* Llib/weakhash.scm 135 */
{ /* Llib/weakhash.scm 124 */
long BgL_arg1315z00_2451;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_arg1316z00_2452;
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3663z00_5827;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_5828;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2033z00_2458;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2712z00_4373;
BgL_aux2712z00_4373 = 
STRUCT_KEY(BgL_tablez00_47); 
if(
SYMBOLP(BgL_aux2712z00_4373))
{ /* Llib/weakhash.scm 124 */
BgL_res2033z00_2458 = BgL_aux2712z00_4373; }  else 
{ 
obj_t BgL_auxz00_5832;
BgL_auxz00_5832 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4802)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2712z00_4373); 
FAILURE(BgL_auxz00_5832,BFALSE,BFALSE);} } 
BgL_tmpz00_5828 = BgL_res2033z00_2458; } 
BgL_test3663z00_5827 = 
(BgL_tmpz00_5828==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3663z00_5827)
{ /* Llib/weakhash.scm 124 */
int BgL_tmpz00_5837;
BgL_tmpz00_5837 = 
(int)(((long)0)); 
BgL_arg1316z00_2452 = 
STRUCT_REF(BgL_tablez00_47, BgL_tmpz00_5837); }  else 
{ /* Llib/weakhash.scm 124 */
BgL_arg1316z00_2452 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_47); } } 
{ /* Llib/weakhash.scm 124 */
long BgL_za71za7_2459;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_5841;
if(
INTEGERP(BgL_arg1316z00_2452))
{ /* Llib/weakhash.scm 124 */
BgL_tmpz00_5841 = BgL_arg1316z00_2452
; }  else 
{ 
obj_t BgL_auxz00_5844;
BgL_auxz00_5844 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4824)), BGl_string3327z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1316z00_2452); 
FAILURE(BgL_auxz00_5844,BFALSE,BFALSE);} 
BgL_za71za7_2459 = 
(long)CINT(BgL_tmpz00_5841); } 
BgL_arg1315z00_2451 = 
(BgL_za71za7_2459-((long)1)); } } 
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3666z00_5850;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_5851;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2035z00_2464;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2716z00_4377;
BgL_aux2716z00_4377 = 
STRUCT_KEY(BgL_tablez00_47); 
if(
SYMBOLP(BgL_aux2716z00_4377))
{ /* Llib/weakhash.scm 124 */
BgL_res2035z00_2464 = BgL_aux2716z00_4377; }  else 
{ 
obj_t BgL_auxz00_5855;
BgL_auxz00_5855 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4769)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2716z00_4377); 
FAILURE(BgL_auxz00_5855,BFALSE,BFALSE);} } 
BgL_tmpz00_5851 = BgL_res2035z00_2464; } 
BgL_test3666z00_5850 = 
(BgL_tmpz00_5851==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3666z00_5850)
{ /* Llib/weakhash.scm 124 */
obj_t BgL_auxz00_5862;int BgL_tmpz00_5860;
BgL_auxz00_5862 = 
BINT(BgL_arg1315z00_2451); 
BgL_tmpz00_5860 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_47, BgL_tmpz00_5860, BgL_auxz00_5862); }  else 
{ /* Llib/weakhash.scm 124 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_47); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_1281))
{ /* Llib/weakhash.scm 126 */
obj_t BgL_arg1317z00_2453;
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2465;
if(
PAIRP(BgL_bucketz00_1280))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2465 = BgL_bucketz00_1280; }  else 
{ 
obj_t BgL_auxz00_5870;
BgL_auxz00_5870 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4883)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1280); 
FAILURE(BgL_auxz00_5870,BFALSE,BFALSE);} 
BgL_arg1317z00_2453 = 
CDR(BgL_pairz00_2465); } 
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2466;
if(
PAIRP(BgL_lastzd2bucketzd2_1281))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2466 = BgL_lastzd2bucketzd2_1281; }  else 
{ 
obj_t BgL_auxz00_5877;
BgL_auxz00_5877 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4866)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_lastzd2bucketzd2_1281); 
FAILURE(BgL_auxz00_5877,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2466, BgL_arg1317z00_2453); } }  else 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_arg1318z00_2454;
{ /* Llib/weakhash.scm 127 */
obj_t BgL_pairz00_2467;
if(
PAIRP(BgL_bucketz00_1280))
{ /* Llib/weakhash.scm 127 */
BgL_pairz00_2467 = BgL_bucketz00_1280; }  else 
{ 
obj_t BgL_auxz00_5884;
BgL_auxz00_5884 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4927)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1280); 
FAILURE(BgL_auxz00_5884,BFALSE,BFALSE);} 
BgL_arg1318z00_2454 = 
CDR(BgL_pairz00_2467); } 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_vectorz00_2468;
if(
VECTORP(BgL_bucketsz00_48))
{ /* Llib/weakhash.scm 127 */
BgL_vectorz00_2468 = BgL_bucketsz00_48; }  else 
{ 
obj_t BgL_auxz00_5891;
BgL_auxz00_5891 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4912)), BGl_string3327z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_48); 
FAILURE(BgL_auxz00_5891,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 127 */
bool_t BgL_test3673z00_5895;
{ /* Llib/weakhash.scm 127 */
long BgL_tmpz00_5896;
BgL_tmpz00_5896 = 
VECTOR_LENGTH(BgL_vectorz00_2468); 
BgL_test3673z00_5895 = 
BOUND_CHECK(BgL_iz00_49, BgL_tmpz00_5896); } 
if(BgL_test3673z00_5895)
{ /* Llib/weakhash.scm 127 */
VECTOR_SET(BgL_vectorz00_2468,BgL_iz00_49,BgL_arg1318z00_2454); }  else 
{ 
obj_t BgL_auxz00_5900;
BgL_auxz00_5900 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4899)), BGl_string3331z00zz__weakhashz00, BgL_vectorz00_2468, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2468)), 
(int)(BgL_iz00_49)); 
FAILURE(BgL_auxz00_5900,BFALSE,BFALSE);} } } } BGl_keepgoingz00zz__weakhashz00; 
{ /* Llib/weakhash.scm 135 */
obj_t BgL_arg1352z00_1288;
{ /* Llib/weakhash.scm 135 */
obj_t BgL_pairz00_2470;
if(
PAIRP(BgL_bucketz00_1280))
{ /* Llib/weakhash.scm 135 */
BgL_pairz00_2470 = BgL_bucketz00_1280; }  else 
{ 
obj_t BgL_auxz00_5909;
BgL_auxz00_5909 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5286)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1280); 
FAILURE(BgL_auxz00_5909,BFALSE,BFALSE);} 
BgL_arg1352z00_1288 = 
CDR(BgL_pairz00_2470); } 
{ 
obj_t BgL_bucketz00_5914;
BgL_bucketz00_5914 = BgL_arg1352z00_1288; 
BgL_bucketz00_1280 = BgL_bucketz00_5914; 
goto BgL_zc3z04anonymousza31346ze3z87_1282;} } }  else 
{ /* Llib/weakhash.scm 135 */
if(
(BgL_retz00_1284==BGl_removestopz00zz__weakhashz00))
{ /* Llib/weakhash.scm 135 */
{ /* Llib/weakhash.scm 124 */
long BgL_arg1315z00_2471;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_arg1316z00_2472;
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3676z00_5917;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_5918;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2036z00_2478;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2728z00_4389;
BgL_aux2728z00_4389 = 
STRUCT_KEY(BgL_tablez00_47); 
if(
SYMBOLP(BgL_aux2728z00_4389))
{ /* Llib/weakhash.scm 124 */
BgL_res2036z00_2478 = BgL_aux2728z00_4389; }  else 
{ 
obj_t BgL_auxz00_5922;
BgL_auxz00_5922 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4802)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2728z00_4389); 
FAILURE(BgL_auxz00_5922,BFALSE,BFALSE);} } 
BgL_tmpz00_5918 = BgL_res2036z00_2478; } 
BgL_test3676z00_5917 = 
(BgL_tmpz00_5918==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3676z00_5917)
{ /* Llib/weakhash.scm 124 */
int BgL_tmpz00_5927;
BgL_tmpz00_5927 = 
(int)(((long)0)); 
BgL_arg1316z00_2472 = 
STRUCT_REF(BgL_tablez00_47, BgL_tmpz00_5927); }  else 
{ /* Llib/weakhash.scm 124 */
BgL_arg1316z00_2472 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_47); } } 
{ /* Llib/weakhash.scm 124 */
long BgL_za71za7_2479;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_5931;
if(
INTEGERP(BgL_arg1316z00_2472))
{ /* Llib/weakhash.scm 124 */
BgL_tmpz00_5931 = BgL_arg1316z00_2472
; }  else 
{ 
obj_t BgL_auxz00_5934;
BgL_auxz00_5934 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4824)), BGl_string3327z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1316z00_2472); 
FAILURE(BgL_auxz00_5934,BFALSE,BFALSE);} 
BgL_za71za7_2479 = 
(long)CINT(BgL_tmpz00_5931); } 
BgL_arg1315z00_2471 = 
(BgL_za71za7_2479-((long)1)); } } 
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3679z00_5940;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_5941;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2038z00_2484;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2732z00_4393;
BgL_aux2732z00_4393 = 
STRUCT_KEY(BgL_tablez00_47); 
if(
SYMBOLP(BgL_aux2732z00_4393))
{ /* Llib/weakhash.scm 124 */
BgL_res2038z00_2484 = BgL_aux2732z00_4393; }  else 
{ 
obj_t BgL_auxz00_5945;
BgL_auxz00_5945 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4769)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2732z00_4393); 
FAILURE(BgL_auxz00_5945,BFALSE,BFALSE);} } 
BgL_tmpz00_5941 = BgL_res2038z00_2484; } 
BgL_test3679z00_5940 = 
(BgL_tmpz00_5941==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3679z00_5940)
{ /* Llib/weakhash.scm 124 */
obj_t BgL_auxz00_5952;int BgL_tmpz00_5950;
BgL_auxz00_5952 = 
BINT(BgL_arg1315z00_2471); 
BgL_tmpz00_5950 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_47, BgL_tmpz00_5950, BgL_auxz00_5952); }  else 
{ /* Llib/weakhash.scm 124 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_47); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_1281))
{ /* Llib/weakhash.scm 126 */
obj_t BgL_arg1317z00_2473;
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2485;
if(
PAIRP(BgL_bucketz00_1280))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2485 = BgL_bucketz00_1280; }  else 
{ 
obj_t BgL_auxz00_5960;
BgL_auxz00_5960 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4883)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1280); 
FAILURE(BgL_auxz00_5960,BFALSE,BFALSE);} 
BgL_arg1317z00_2473 = 
CDR(BgL_pairz00_2485); } 
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2486;
if(
PAIRP(BgL_lastzd2bucketzd2_1281))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2486 = BgL_lastzd2bucketzd2_1281; }  else 
{ 
obj_t BgL_auxz00_5967;
BgL_auxz00_5967 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4866)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_lastzd2bucketzd2_1281); 
FAILURE(BgL_auxz00_5967,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2486, BgL_arg1317z00_2473); } }  else 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_arg1318z00_2474;
{ /* Llib/weakhash.scm 127 */
obj_t BgL_pairz00_2487;
if(
PAIRP(BgL_bucketz00_1280))
{ /* Llib/weakhash.scm 127 */
BgL_pairz00_2487 = BgL_bucketz00_1280; }  else 
{ 
obj_t BgL_auxz00_5974;
BgL_auxz00_5974 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4927)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1280); 
FAILURE(BgL_auxz00_5974,BFALSE,BFALSE);} 
BgL_arg1318z00_2474 = 
CDR(BgL_pairz00_2487); } 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_vectorz00_2488;
if(
VECTORP(BgL_bucketsz00_48))
{ /* Llib/weakhash.scm 127 */
BgL_vectorz00_2488 = BgL_bucketsz00_48; }  else 
{ 
obj_t BgL_auxz00_5981;
BgL_auxz00_5981 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4912)), BGl_string3327z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_48); 
FAILURE(BgL_auxz00_5981,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 127 */
bool_t BgL_test3686z00_5985;
{ /* Llib/weakhash.scm 127 */
long BgL_tmpz00_5986;
BgL_tmpz00_5986 = 
VECTOR_LENGTH(BgL_vectorz00_2488); 
BgL_test3686z00_5985 = 
BOUND_CHECK(BgL_iz00_49, BgL_tmpz00_5986); } 
if(BgL_test3686z00_5985)
{ /* Llib/weakhash.scm 127 */
VECTOR_SET(BgL_vectorz00_2488,BgL_iz00_49,BgL_arg1318z00_2474); }  else 
{ 
obj_t BgL_auxz00_5990;
BgL_auxz00_5990 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4899)), BGl_string3331z00zz__weakhashz00, BgL_vectorz00_2488, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2488)), 
(int)(BgL_iz00_49)); 
FAILURE(BgL_auxz00_5990,BFALSE,BFALSE);} } } } 
return BGl_keepgoingz00zz__weakhashz00;}  else 
{ /* Llib/weakhash.scm 135 */
return BgL_retz00_1284;} } } } } }  else 
{ /* Llib/weakhash.scm 135 */
obj_t BgL_g1060z00_1298;
{ /* Llib/weakhash.scm 135 */
obj_t BgL_vectorz00_2490;
if(
VECTORP(BgL_bucketsz00_48))
{ /* Llib/weakhash.scm 135 */
BgL_vectorz00_2490 = BgL_bucketsz00_48; }  else 
{ 
obj_t BgL_auxz00_5999;
BgL_auxz00_5999 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5286)), BGl_string3319z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_48); 
FAILURE(BgL_auxz00_5999,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 135 */
bool_t BgL_test3688z00_6003;
{ /* Llib/weakhash.scm 135 */
long BgL_tmpz00_6004;
BgL_tmpz00_6004 = 
VECTOR_LENGTH(BgL_vectorz00_2490); 
BgL_test3688z00_6003 = 
BOUND_CHECK(BgL_iz00_49, BgL_tmpz00_6004); } 
if(BgL_test3688z00_6003)
{ /* Llib/weakhash.scm 135 */
BgL_g1060z00_1298 = 
VECTOR_REF(BgL_vectorz00_2490,BgL_iz00_49); }  else 
{ 
obj_t BgL_auxz00_6008;
BgL_auxz00_6008 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5286)), BGl_string3326z00zz__weakhashz00, BgL_vectorz00_2490, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2490)), 
(int)(BgL_iz00_49)); 
FAILURE(BgL_auxz00_6008,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_bucketz00_1300;obj_t BgL_lastzd2bucketzd2_1301;
BgL_bucketz00_1300 = BgL_g1060z00_1298; 
BgL_lastzd2bucketzd2_1301 = BFALSE; 
BgL_zc3z04anonymousza31358ze3z87_1302:
if(
NULLP(BgL_bucketz00_1300))
{ /* Llib/weakhash.scm 135 */
return BGl_keepgoingz00zz__weakhashz00;}  else 
{ /* Llib/weakhash.scm 135 */
obj_t BgL_retz00_1304;
{ /* Llib/weakhash.scm 163 */
obj_t BgL_arg1365z00_1310;obj_t BgL_arg1367z00_1311;
{ /* Llib/weakhash.scm 163 */
obj_t BgL_pairz00_2493;
if(
PAIRP(BgL_bucketz00_1300))
{ /* Llib/weakhash.scm 163 */
BgL_pairz00_2493 = BgL_bucketz00_1300; }  else 
{ 
obj_t BgL_auxz00_6019;
BgL_auxz00_6019 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6194)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1300); 
FAILURE(BgL_auxz00_6019,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 163 */
obj_t BgL_pairz00_2496;
{ /* Llib/weakhash.scm 163 */
obj_t BgL_aux2746z00_4407;
BgL_aux2746z00_4407 = 
CAR(BgL_pairz00_2493); 
if(
PAIRP(BgL_aux2746z00_4407))
{ /* Llib/weakhash.scm 163 */
BgL_pairz00_2496 = BgL_aux2746z00_4407; }  else 
{ 
obj_t BgL_auxz00_6026;
BgL_auxz00_6026 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6188)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_aux2746z00_4407); 
FAILURE(BgL_auxz00_6026,BFALSE,BFALSE);} } 
BgL_arg1365z00_1310 = 
CAR(BgL_pairz00_2496); } } 
{ /* Llib/weakhash.scm 163 */
obj_t BgL_pairz00_2497;
if(
PAIRP(BgL_bucketz00_1300))
{ /* Llib/weakhash.scm 163 */
BgL_pairz00_2497 = BgL_bucketz00_1300; }  else 
{ 
obj_t BgL_auxz00_6033;
BgL_auxz00_6033 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6208)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1300); 
FAILURE(BgL_auxz00_6033,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 163 */
obj_t BgL_pairz00_2500;
{ /* Llib/weakhash.scm 163 */
obj_t BgL_aux2750z00_4411;
BgL_aux2750z00_4411 = 
CAR(BgL_pairz00_2497); 
if(
PAIRP(BgL_aux2750z00_4411))
{ /* Llib/weakhash.scm 163 */
BgL_pairz00_2500 = BgL_aux2750z00_4411; }  else 
{ 
obj_t BgL_auxz00_6040;
BgL_auxz00_6040 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6202)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_aux2750z00_4411); 
FAILURE(BgL_auxz00_6040,BFALSE,BFALSE);} } 
BgL_arg1367z00_1311 = 
CDR(BgL_pairz00_2500); } } 
BgL_retz00_1304 = 
PROCEDURE_L_ENTRY(BgL_funz00_50)(BgL_funz00_50, BgL_arg1365z00_1310, BgL_arg1367z00_1311, BgL_bucketz00_1300); } 
if(
(BgL_retz00_1304==BGl_keepgoingz00zz__weakhashz00))
{ /* Llib/weakhash.scm 135 */
obj_t BgL_arg1361z00_1306;
{ /* Llib/weakhash.scm 135 */
obj_t BgL_pairz00_2501;
if(
PAIRP(BgL_bucketz00_1300))
{ /* Llib/weakhash.scm 135 */
BgL_pairz00_2501 = BgL_bucketz00_1300; }  else 
{ 
obj_t BgL_auxz00_6055;
BgL_auxz00_6055 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5286)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1300); 
FAILURE(BgL_auxz00_6055,BFALSE,BFALSE);} 
BgL_arg1361z00_1306 = 
CDR(BgL_pairz00_2501); } 
{ 
obj_t BgL_lastzd2bucketzd2_6061;obj_t BgL_bucketz00_6060;
BgL_bucketz00_6060 = BgL_arg1361z00_1306; 
BgL_lastzd2bucketzd2_6061 = BgL_bucketz00_1300; 
BgL_lastzd2bucketzd2_1301 = BgL_lastzd2bucketzd2_6061; 
BgL_bucketz00_1300 = BgL_bucketz00_6060; 
goto BgL_zc3z04anonymousza31358ze3z87_1302;} }  else 
{ /* Llib/weakhash.scm 135 */
if(
(BgL_retz00_1304==BGl_removez00zz__weakhashz00))
{ /* Llib/weakhash.scm 135 */
{ /* Llib/weakhash.scm 124 */
long BgL_arg1315z00_2502;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_arg1316z00_2503;
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3697z00_6064;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_6065;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2040z00_2509;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2754z00_4415;
BgL_aux2754z00_4415 = 
STRUCT_KEY(BgL_tablez00_47); 
if(
SYMBOLP(BgL_aux2754z00_4415))
{ /* Llib/weakhash.scm 124 */
BgL_res2040z00_2509 = BgL_aux2754z00_4415; }  else 
{ 
obj_t BgL_auxz00_6069;
BgL_auxz00_6069 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4802)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2754z00_4415); 
FAILURE(BgL_auxz00_6069,BFALSE,BFALSE);} } 
BgL_tmpz00_6065 = BgL_res2040z00_2509; } 
BgL_test3697z00_6064 = 
(BgL_tmpz00_6065==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3697z00_6064)
{ /* Llib/weakhash.scm 124 */
int BgL_tmpz00_6074;
BgL_tmpz00_6074 = 
(int)(((long)0)); 
BgL_arg1316z00_2503 = 
STRUCT_REF(BgL_tablez00_47, BgL_tmpz00_6074); }  else 
{ /* Llib/weakhash.scm 124 */
BgL_arg1316z00_2503 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_47); } } 
{ /* Llib/weakhash.scm 124 */
long BgL_za71za7_2510;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_6078;
if(
INTEGERP(BgL_arg1316z00_2503))
{ /* Llib/weakhash.scm 124 */
BgL_tmpz00_6078 = BgL_arg1316z00_2503
; }  else 
{ 
obj_t BgL_auxz00_6081;
BgL_auxz00_6081 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4824)), BGl_string3327z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1316z00_2503); 
FAILURE(BgL_auxz00_6081,BFALSE,BFALSE);} 
BgL_za71za7_2510 = 
(long)CINT(BgL_tmpz00_6078); } 
BgL_arg1315z00_2502 = 
(BgL_za71za7_2510-((long)1)); } } 
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3700z00_6087;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_6088;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2042z00_2515;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2758z00_4419;
BgL_aux2758z00_4419 = 
STRUCT_KEY(BgL_tablez00_47); 
if(
SYMBOLP(BgL_aux2758z00_4419))
{ /* Llib/weakhash.scm 124 */
BgL_res2042z00_2515 = BgL_aux2758z00_4419; }  else 
{ 
obj_t BgL_auxz00_6092;
BgL_auxz00_6092 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4769)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2758z00_4419); 
FAILURE(BgL_auxz00_6092,BFALSE,BFALSE);} } 
BgL_tmpz00_6088 = BgL_res2042z00_2515; } 
BgL_test3700z00_6087 = 
(BgL_tmpz00_6088==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3700z00_6087)
{ /* Llib/weakhash.scm 124 */
obj_t BgL_auxz00_6099;int BgL_tmpz00_6097;
BgL_auxz00_6099 = 
BINT(BgL_arg1315z00_2502); 
BgL_tmpz00_6097 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_47, BgL_tmpz00_6097, BgL_auxz00_6099); }  else 
{ /* Llib/weakhash.scm 124 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_47); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_1301))
{ /* Llib/weakhash.scm 126 */
obj_t BgL_arg1317z00_2504;
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2516;
if(
PAIRP(BgL_bucketz00_1300))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2516 = BgL_bucketz00_1300; }  else 
{ 
obj_t BgL_auxz00_6107;
BgL_auxz00_6107 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4883)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1300); 
FAILURE(BgL_auxz00_6107,BFALSE,BFALSE);} 
BgL_arg1317z00_2504 = 
CDR(BgL_pairz00_2516); } 
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2517;
if(
PAIRP(BgL_lastzd2bucketzd2_1301))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2517 = BgL_lastzd2bucketzd2_1301; }  else 
{ 
obj_t BgL_auxz00_6114;
BgL_auxz00_6114 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4866)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_lastzd2bucketzd2_1301); 
FAILURE(BgL_auxz00_6114,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2517, BgL_arg1317z00_2504); } }  else 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_arg1318z00_2505;
{ /* Llib/weakhash.scm 127 */
obj_t BgL_pairz00_2518;
if(
PAIRP(BgL_bucketz00_1300))
{ /* Llib/weakhash.scm 127 */
BgL_pairz00_2518 = BgL_bucketz00_1300; }  else 
{ 
obj_t BgL_auxz00_6121;
BgL_auxz00_6121 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4927)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1300); 
FAILURE(BgL_auxz00_6121,BFALSE,BFALSE);} 
BgL_arg1318z00_2505 = 
CDR(BgL_pairz00_2518); } 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_vectorz00_2519;
if(
VECTORP(BgL_bucketsz00_48))
{ /* Llib/weakhash.scm 127 */
BgL_vectorz00_2519 = BgL_bucketsz00_48; }  else 
{ 
obj_t BgL_auxz00_6128;
BgL_auxz00_6128 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4912)), BGl_string3327z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_48); 
FAILURE(BgL_auxz00_6128,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 127 */
bool_t BgL_test3707z00_6132;
{ /* Llib/weakhash.scm 127 */
long BgL_tmpz00_6133;
BgL_tmpz00_6133 = 
VECTOR_LENGTH(BgL_vectorz00_2519); 
BgL_test3707z00_6132 = 
BOUND_CHECK(BgL_iz00_49, BgL_tmpz00_6133); } 
if(BgL_test3707z00_6132)
{ /* Llib/weakhash.scm 127 */
VECTOR_SET(BgL_vectorz00_2519,BgL_iz00_49,BgL_arg1318z00_2505); }  else 
{ 
obj_t BgL_auxz00_6137;
BgL_auxz00_6137 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4899)), BGl_string3331z00zz__weakhashz00, BgL_vectorz00_2519, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2519)), 
(int)(BgL_iz00_49)); 
FAILURE(BgL_auxz00_6137,BFALSE,BFALSE);} } } } BGl_keepgoingz00zz__weakhashz00; 
{ /* Llib/weakhash.scm 135 */
obj_t BgL_arg1363z00_1308;
{ /* Llib/weakhash.scm 135 */
obj_t BgL_pairz00_2521;
if(
PAIRP(BgL_bucketz00_1300))
{ /* Llib/weakhash.scm 135 */
BgL_pairz00_2521 = BgL_bucketz00_1300; }  else 
{ 
obj_t BgL_auxz00_6146;
BgL_auxz00_6146 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)5286)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1300); 
FAILURE(BgL_auxz00_6146,BFALSE,BFALSE);} 
BgL_arg1363z00_1308 = 
CDR(BgL_pairz00_2521); } 
{ 
obj_t BgL_bucketz00_6151;
BgL_bucketz00_6151 = BgL_arg1363z00_1308; 
BgL_bucketz00_1300 = BgL_bucketz00_6151; 
goto BgL_zc3z04anonymousza31358ze3z87_1302;} } }  else 
{ /* Llib/weakhash.scm 135 */
if(
(BgL_retz00_1304==BGl_removestopz00zz__weakhashz00))
{ /* Llib/weakhash.scm 135 */
{ /* Llib/weakhash.scm 124 */
long BgL_arg1315z00_2522;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_arg1316z00_2523;
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3710z00_6154;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_6155;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2043z00_2529;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2770z00_4431;
BgL_aux2770z00_4431 = 
STRUCT_KEY(BgL_tablez00_47); 
if(
SYMBOLP(BgL_aux2770z00_4431))
{ /* Llib/weakhash.scm 124 */
BgL_res2043z00_2529 = BgL_aux2770z00_4431; }  else 
{ 
obj_t BgL_auxz00_6159;
BgL_auxz00_6159 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4802)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2770z00_4431); 
FAILURE(BgL_auxz00_6159,BFALSE,BFALSE);} } 
BgL_tmpz00_6155 = BgL_res2043z00_2529; } 
BgL_test3710z00_6154 = 
(BgL_tmpz00_6155==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3710z00_6154)
{ /* Llib/weakhash.scm 124 */
int BgL_tmpz00_6164;
BgL_tmpz00_6164 = 
(int)(((long)0)); 
BgL_arg1316z00_2523 = 
STRUCT_REF(BgL_tablez00_47, BgL_tmpz00_6164); }  else 
{ /* Llib/weakhash.scm 124 */
BgL_arg1316z00_2523 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_47); } } 
{ /* Llib/weakhash.scm 124 */
long BgL_za71za7_2530;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_6168;
if(
INTEGERP(BgL_arg1316z00_2523))
{ /* Llib/weakhash.scm 124 */
BgL_tmpz00_6168 = BgL_arg1316z00_2523
; }  else 
{ 
obj_t BgL_auxz00_6171;
BgL_auxz00_6171 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4824)), BGl_string3327z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1316z00_2523); 
FAILURE(BgL_auxz00_6171,BFALSE,BFALSE);} 
BgL_za71za7_2530 = 
(long)CINT(BgL_tmpz00_6168); } 
BgL_arg1315z00_2522 = 
(BgL_za71za7_2530-((long)1)); } } 
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3713z00_6177;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_6178;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2045z00_2535;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2774z00_4435;
BgL_aux2774z00_4435 = 
STRUCT_KEY(BgL_tablez00_47); 
if(
SYMBOLP(BgL_aux2774z00_4435))
{ /* Llib/weakhash.scm 124 */
BgL_res2045z00_2535 = BgL_aux2774z00_4435; }  else 
{ 
obj_t BgL_auxz00_6182;
BgL_auxz00_6182 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4769)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2774z00_4435); 
FAILURE(BgL_auxz00_6182,BFALSE,BFALSE);} } 
BgL_tmpz00_6178 = BgL_res2045z00_2535; } 
BgL_test3713z00_6177 = 
(BgL_tmpz00_6178==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3713z00_6177)
{ /* Llib/weakhash.scm 124 */
obj_t BgL_auxz00_6189;int BgL_tmpz00_6187;
BgL_auxz00_6189 = 
BINT(BgL_arg1315z00_2522); 
BgL_tmpz00_6187 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_47, BgL_tmpz00_6187, BgL_auxz00_6189); }  else 
{ /* Llib/weakhash.scm 124 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_47); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_1301))
{ /* Llib/weakhash.scm 126 */
obj_t BgL_arg1317z00_2524;
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2536;
if(
PAIRP(BgL_bucketz00_1300))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2536 = BgL_bucketz00_1300; }  else 
{ 
obj_t BgL_auxz00_6197;
BgL_auxz00_6197 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4883)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1300); 
FAILURE(BgL_auxz00_6197,BFALSE,BFALSE);} 
BgL_arg1317z00_2524 = 
CDR(BgL_pairz00_2536); } 
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2537;
if(
PAIRP(BgL_lastzd2bucketzd2_1301))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2537 = BgL_lastzd2bucketzd2_1301; }  else 
{ 
obj_t BgL_auxz00_6204;
BgL_auxz00_6204 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4866)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_lastzd2bucketzd2_1301); 
FAILURE(BgL_auxz00_6204,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2537, BgL_arg1317z00_2524); } }  else 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_arg1318z00_2525;
{ /* Llib/weakhash.scm 127 */
obj_t BgL_pairz00_2538;
if(
PAIRP(BgL_bucketz00_1300))
{ /* Llib/weakhash.scm 127 */
BgL_pairz00_2538 = BgL_bucketz00_1300; }  else 
{ 
obj_t BgL_auxz00_6211;
BgL_auxz00_6211 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4927)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1300); 
FAILURE(BgL_auxz00_6211,BFALSE,BFALSE);} 
BgL_arg1318z00_2525 = 
CDR(BgL_pairz00_2538); } 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_vectorz00_2539;
if(
VECTORP(BgL_bucketsz00_48))
{ /* Llib/weakhash.scm 127 */
BgL_vectorz00_2539 = BgL_bucketsz00_48; }  else 
{ 
obj_t BgL_auxz00_6218;
BgL_auxz00_6218 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4912)), BGl_string3327z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_48); 
FAILURE(BgL_auxz00_6218,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 127 */
bool_t BgL_test3720z00_6222;
{ /* Llib/weakhash.scm 127 */
long BgL_tmpz00_6223;
BgL_tmpz00_6223 = 
VECTOR_LENGTH(BgL_vectorz00_2539); 
BgL_test3720z00_6222 = 
BOUND_CHECK(BgL_iz00_49, BgL_tmpz00_6223); } 
if(BgL_test3720z00_6222)
{ /* Llib/weakhash.scm 127 */
VECTOR_SET(BgL_vectorz00_2539,BgL_iz00_49,BgL_arg1318z00_2525); }  else 
{ 
obj_t BgL_auxz00_6227;
BgL_auxz00_6227 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4899)), BGl_string3331z00zz__weakhashz00, BgL_vectorz00_2539, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2539)), 
(int)(BgL_iz00_49)); 
FAILURE(BgL_auxz00_6227,BFALSE,BFALSE);} } } } 
return BGl_keepgoingz00zz__weakhashz00;}  else 
{ /* Llib/weakhash.scm 135 */
return BgL_retz00_1304;} } } } } } } } } } 

}



/* traverse-hash */
bool_t BGl_traversezd2hashzd2zz__weakhashz00(obj_t BgL_tablez00_51, obj_t BgL_funz00_52)
{
{ /* Llib/weakhash.scm 176 */
{ /* Llib/weakhash.scm 177 */
bool_t BgL_test3721z00_6234;
{ /* Llib/weakhash.scm 186 */
obj_t BgL_arg1425z00_1417;
{ /* Llib/weakhash.scm 186 */
bool_t BgL_test3722z00_6235;
{ /* Llib/weakhash.scm 186 */
obj_t BgL_tmpz00_6236;
{ /* Llib/weakhash.scm 186 */
obj_t BgL_res2046z00_2544;
{ /* Llib/weakhash.scm 186 */
obj_t BgL_aux2784z00_4445;
BgL_aux2784z00_4445 = 
STRUCT_KEY(BgL_tablez00_51); 
if(
SYMBOLP(BgL_aux2784z00_4445))
{ /* Llib/weakhash.scm 186 */
BgL_res2046z00_2544 = BgL_aux2784z00_4445; }  else 
{ 
obj_t BgL_auxz00_6240;
BgL_auxz00_6240 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7102)), BGl_string3332z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2784z00_4445); 
FAILURE(BgL_auxz00_6240,BFALSE,BFALSE);} } 
BgL_tmpz00_6236 = BgL_res2046z00_2544; } 
BgL_test3722z00_6235 = 
(BgL_tmpz00_6236==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3722z00_6235)
{ /* Llib/weakhash.scm 186 */
int BgL_tmpz00_6245;
BgL_tmpz00_6245 = 
(int)(((long)5)); 
BgL_arg1425z00_1417 = 
STRUCT_REF(BgL_tablez00_51, BgL_tmpz00_6245); }  else 
{ /* Llib/weakhash.scm 186 */
BgL_arg1425z00_1417 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_51); } } 
{ /* Llib/weakhash.scm 186 */
long BgL_n2z00_2545;
{ /* Llib/weakhash.scm 186 */
obj_t BgL_tmpz00_6249;
if(
INTEGERP(BgL_arg1425z00_1417))
{ /* Llib/weakhash.scm 186 */
BgL_tmpz00_6249 = BgL_arg1425z00_1417
; }  else 
{ 
obj_t BgL_auxz00_6252;
BgL_auxz00_6252 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7124)), BGl_string3332z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1425z00_1417); 
FAILURE(BgL_auxz00_6252,BFALSE,BFALSE);} 
BgL_n2z00_2545 = 
(long)CINT(BgL_tmpz00_6249); } 
BgL_test3721z00_6234 = 
(((long)1)==BgL_n2z00_2545); } } 
if(BgL_test3721z00_6234)
{ /* Llib/weakhash.scm 177 */
obj_t BgL_bucketsz00_1318;
{ /* Llib/weakhash.scm 177 */
bool_t BgL_test3725z00_6258;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_tmpz00_6259;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_res2048z00_2550;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_aux2788z00_4449;
BgL_aux2788z00_4449 = 
STRUCT_KEY(BgL_tablez00_51); 
if(
SYMBOLP(BgL_aux2788z00_4449))
{ /* Llib/weakhash.scm 177 */
BgL_res2048z00_2550 = BgL_aux2788z00_4449; }  else 
{ 
obj_t BgL_auxz00_6263;
BgL_auxz00_6263 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3332z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2788z00_4449); 
FAILURE(BgL_auxz00_6263,BFALSE,BFALSE);} } 
BgL_tmpz00_6259 = BgL_res2048z00_2550; } 
BgL_test3725z00_6258 = 
(BgL_tmpz00_6259==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3725z00_6258)
{ /* Llib/weakhash.scm 177 */
int BgL_tmpz00_6268;
BgL_tmpz00_6268 = 
(int)(((long)2)); 
BgL_bucketsz00_1318 = 
STRUCT_REF(BgL_tablez00_51, BgL_tmpz00_6268); }  else 
{ /* Llib/weakhash.scm 177 */
BgL_bucketsz00_1318 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_51); } } 
{ /* Llib/weakhash.scm 177 */
long BgL_bucketszd2lenzd2_1319;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_vectorz00_2551;
if(
VECTORP(BgL_bucketsz00_1318))
{ /* Llib/weakhash.scm 177 */
BgL_vectorz00_2551 = BgL_bucketsz00_1318; }  else 
{ 
obj_t BgL_auxz00_6274;
BgL_auxz00_6274 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3332z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1318); 
FAILURE(BgL_auxz00_6274,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1319 = 
VECTOR_LENGTH(BgL_vectorz00_2551); } 
{ /* Llib/weakhash.scm 177 */

{ 
long BgL_iz00_1321;
BgL_iz00_1321 = ((long)0); 
BgL_zc3z04anonymousza31374ze3z87_1322:
if(
(BgL_iz00_1321==BgL_bucketszd2lenzd2_1319))
{ /* Llib/weakhash.scm 177 */
return ((bool_t)0);}  else 
{ /* Llib/weakhash.scm 177 */
{ /* Llib/weakhash.scm 177 */
obj_t BgL_g1061z00_1324;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_vectorz00_2555;
if(
VECTORP(BgL_bucketsz00_1318))
{ /* Llib/weakhash.scm 177 */
BgL_vectorz00_2555 = BgL_bucketsz00_1318; }  else 
{ 
obj_t BgL_auxz00_6283;
BgL_auxz00_6283 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3333z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1318); 
FAILURE(BgL_auxz00_6283,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 177 */
bool_t BgL_test3730z00_6287;
{ /* Llib/weakhash.scm 177 */
long BgL_tmpz00_6288;
BgL_tmpz00_6288 = 
VECTOR_LENGTH(BgL_vectorz00_2555); 
BgL_test3730z00_6287 = 
BOUND_CHECK(BgL_iz00_1321, BgL_tmpz00_6288); } 
if(BgL_test3730z00_6287)
{ /* Llib/weakhash.scm 177 */
BgL_g1061z00_1324 = 
VECTOR_REF(BgL_vectorz00_2555,BgL_iz00_1321); }  else 
{ 
obj_t BgL_auxz00_6292;
BgL_auxz00_6292 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3326z00zz__weakhashz00, BgL_vectorz00_2555, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2555)), 
(int)(BgL_iz00_1321)); 
FAILURE(BgL_auxz00_6292,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_bucketz00_1326;obj_t BgL_lastzd2bucketzd2_1327;
BgL_bucketz00_1326 = BgL_g1061z00_1324; 
BgL_lastzd2bucketzd2_1327 = BFALSE; 
BgL_zc3z04anonymousza31376ze3z87_1328:
if(
NULLP(BgL_bucketz00_1326))
{ /* Llib/weakhash.scm 177 */((bool_t)0); }  else 
{ /* Llib/weakhash.scm 188 */
obj_t BgL_retz00_1330;
{ /* Llib/weakhash.scm 188 */
obj_t BgL_keyz00_1334;
{ /* Llib/weakhash.scm 188 */
obj_t BgL_arg1383z00_1337;
{ /* Llib/weakhash.scm 188 */
obj_t BgL_pairz00_2558;
if(
PAIRP(BgL_bucketz00_1326))
{ /* Llib/weakhash.scm 188 */
BgL_pairz00_2558 = BgL_bucketz00_1326; }  else 
{ 
obj_t BgL_auxz00_6303;
BgL_auxz00_6303 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7184)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1326); 
FAILURE(BgL_auxz00_6303,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 188 */
obj_t BgL_pairz00_2561;
{ /* Llib/weakhash.scm 188 */
obj_t BgL_aux2796z00_4457;
BgL_aux2796z00_4457 = 
CAR(BgL_pairz00_2558); 
if(
PAIRP(BgL_aux2796z00_4457))
{ /* Llib/weakhash.scm 188 */
BgL_pairz00_2561 = BgL_aux2796z00_4457; }  else 
{ 
obj_t BgL_auxz00_6310;
BgL_auxz00_6310 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7178)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_aux2796z00_4457); 
FAILURE(BgL_auxz00_6310,BFALSE,BFALSE);} } 
BgL_arg1383z00_1337 = 
CAR(BgL_pairz00_2561); } } 
{ /* Llib/weakhash.scm 188 */
obj_t BgL_objz00_2562;
if(
BGL_WEAKPTRP(BgL_arg1383z00_1337))
{ /* Llib/weakhash.scm 188 */
BgL_objz00_2562 = BgL_arg1383z00_1337; }  else 
{ 
obj_t BgL_auxz00_6317;
BgL_auxz00_6317 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7190)), BGl_string3327z00zz__weakhashz00, BGl_string3329z00zz__weakhashz00, BgL_arg1383z00_1337); 
FAILURE(BgL_auxz00_6317,BFALSE,BFALSE);} 
BgL_keyz00_1334 = 
weakptr_data(BgL_objz00_2562); } } 
if(
(BgL_keyz00_1334==BUNSPEC))
{ /* Llib/weakhash.scm 189 */
BgL_retz00_1330 = BGl_removez00zz__weakhashz00; }  else 
{ /* Llib/weakhash.scm 191 */
obj_t BgL_arg1382z00_1336;
{ /* Llib/weakhash.scm 191 */
obj_t BgL_pairz00_2563;
if(
PAIRP(BgL_bucketz00_1326))
{ /* Llib/weakhash.scm 191 */
BgL_pairz00_2563 = BgL_bucketz00_1326; }  else 
{ 
obj_t BgL_auxz00_6326;
BgL_auxz00_6326 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7273)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1326); 
FAILURE(BgL_auxz00_6326,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 191 */
obj_t BgL_pairz00_2566;
{ /* Llib/weakhash.scm 191 */
obj_t BgL_aux2802z00_4463;
BgL_aux2802z00_4463 = 
CAR(BgL_pairz00_2563); 
if(
PAIRP(BgL_aux2802z00_4463))
{ /* Llib/weakhash.scm 191 */
BgL_pairz00_2566 = BgL_aux2802z00_4463; }  else 
{ 
obj_t BgL_auxz00_6333;
BgL_auxz00_6333 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7267)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_aux2802z00_4463); 
FAILURE(BgL_auxz00_6333,BFALSE,BFALSE);} } 
BgL_arg1382z00_1336 = 
CDR(BgL_pairz00_2566); } } 
{ /* Llib/weakhash.scm 191 */
obj_t BgL_funz00_4467;
if(
PROCEDUREP(BgL_funz00_52))
{ /* Llib/weakhash.scm 191 */
BgL_funz00_4467 = BgL_funz00_52; }  else 
{ 
obj_t BgL_auxz00_6340;
BgL_auxz00_6340 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7258)), BGl_string3327z00zz__weakhashz00, BGl_string3334z00zz__weakhashz00, BgL_funz00_52); 
FAILURE(BgL_auxz00_6340,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4467, ((long)2)))
{ /* Llib/weakhash.scm 191 */
BgL_retz00_1330 = 
PROCEDURE_ENTRY(BgL_funz00_4467)(BgL_funz00_52, BgL_keyz00_1334, BgL_arg1382z00_1336, BEOA); }  else 
{ /* Llib/weakhash.scm 191 */
FAILURE(BGl_string3335z00zz__weakhashz00,BGl_list3336z00zz__weakhashz00,BgL_funz00_4467);} } } } 
if(
(BgL_retz00_1330==BGl_removez00zz__weakhashz00))
{ /* Llib/weakhash.scm 177 */
{ /* Llib/weakhash.scm 124 */
long BgL_arg1315z00_2567;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_arg1316z00_2568;
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3741z00_6354;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_6355;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2051z00_2574;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2808z00_4470;
BgL_aux2808z00_4470 = 
STRUCT_KEY(BgL_tablez00_51); 
if(
SYMBOLP(BgL_aux2808z00_4470))
{ /* Llib/weakhash.scm 124 */
BgL_res2051z00_2574 = BgL_aux2808z00_4470; }  else 
{ 
obj_t BgL_auxz00_6359;
BgL_auxz00_6359 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4802)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2808z00_4470); 
FAILURE(BgL_auxz00_6359,BFALSE,BFALSE);} } 
BgL_tmpz00_6355 = BgL_res2051z00_2574; } 
BgL_test3741z00_6354 = 
(BgL_tmpz00_6355==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3741z00_6354)
{ /* Llib/weakhash.scm 124 */
int BgL_tmpz00_6364;
BgL_tmpz00_6364 = 
(int)(((long)0)); 
BgL_arg1316z00_2568 = 
STRUCT_REF(BgL_tablez00_51, BgL_tmpz00_6364); }  else 
{ /* Llib/weakhash.scm 124 */
BgL_arg1316z00_2568 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_51); } } 
{ /* Llib/weakhash.scm 124 */
long BgL_za71za7_2575;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_6368;
if(
INTEGERP(BgL_arg1316z00_2568))
{ /* Llib/weakhash.scm 124 */
BgL_tmpz00_6368 = BgL_arg1316z00_2568
; }  else 
{ 
obj_t BgL_auxz00_6371;
BgL_auxz00_6371 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4824)), BGl_string3327z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1316z00_2568); 
FAILURE(BgL_auxz00_6371,BFALSE,BFALSE);} 
BgL_za71za7_2575 = 
(long)CINT(BgL_tmpz00_6368); } 
BgL_arg1315z00_2567 = 
(BgL_za71za7_2575-((long)1)); } } 
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3744z00_6377;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_6378;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2053z00_2580;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2812z00_4474;
BgL_aux2812z00_4474 = 
STRUCT_KEY(BgL_tablez00_51); 
if(
SYMBOLP(BgL_aux2812z00_4474))
{ /* Llib/weakhash.scm 124 */
BgL_res2053z00_2580 = BgL_aux2812z00_4474; }  else 
{ 
obj_t BgL_auxz00_6382;
BgL_auxz00_6382 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4769)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2812z00_4474); 
FAILURE(BgL_auxz00_6382,BFALSE,BFALSE);} } 
BgL_tmpz00_6378 = BgL_res2053z00_2580; } 
BgL_test3744z00_6377 = 
(BgL_tmpz00_6378==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3744z00_6377)
{ /* Llib/weakhash.scm 124 */
obj_t BgL_auxz00_6389;int BgL_tmpz00_6387;
BgL_auxz00_6389 = 
BINT(BgL_arg1315z00_2567); 
BgL_tmpz00_6387 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_51, BgL_tmpz00_6387, BgL_auxz00_6389); }  else 
{ /* Llib/weakhash.scm 124 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_51); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_1327))
{ /* Llib/weakhash.scm 126 */
obj_t BgL_arg1317z00_2569;
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2581;
if(
PAIRP(BgL_bucketz00_1326))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2581 = BgL_bucketz00_1326; }  else 
{ 
obj_t BgL_auxz00_6397;
BgL_auxz00_6397 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4883)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1326); 
FAILURE(BgL_auxz00_6397,BFALSE,BFALSE);} 
BgL_arg1317z00_2569 = 
CDR(BgL_pairz00_2581); } 
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2582;
if(
PAIRP(BgL_lastzd2bucketzd2_1327))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2582 = BgL_lastzd2bucketzd2_1327; }  else 
{ 
obj_t BgL_auxz00_6404;
BgL_auxz00_6404 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4866)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_lastzd2bucketzd2_1327); 
FAILURE(BgL_auxz00_6404,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2582, BgL_arg1317z00_2569); } }  else 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_arg1318z00_2570;
{ /* Llib/weakhash.scm 127 */
obj_t BgL_pairz00_2583;
if(
PAIRP(BgL_bucketz00_1326))
{ /* Llib/weakhash.scm 127 */
BgL_pairz00_2583 = BgL_bucketz00_1326; }  else 
{ 
obj_t BgL_auxz00_6411;
BgL_auxz00_6411 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4927)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1326); 
FAILURE(BgL_auxz00_6411,BFALSE,BFALSE);} 
BgL_arg1318z00_2570 = 
CDR(BgL_pairz00_2583); } 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_vectorz00_2584;
if(
VECTORP(BgL_bucketsz00_1318))
{ /* Llib/weakhash.scm 127 */
BgL_vectorz00_2584 = BgL_bucketsz00_1318; }  else 
{ 
obj_t BgL_auxz00_6418;
BgL_auxz00_6418 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4912)), BGl_string3327z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1318); 
FAILURE(BgL_auxz00_6418,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 127 */
bool_t BgL_test3751z00_6422;
{ /* Llib/weakhash.scm 127 */
long BgL_tmpz00_6423;
BgL_tmpz00_6423 = 
VECTOR_LENGTH(BgL_vectorz00_2584); 
BgL_test3751z00_6422 = 
BOUND_CHECK(BgL_iz00_1321, BgL_tmpz00_6423); } 
if(BgL_test3751z00_6422)
{ /* Llib/weakhash.scm 127 */
VECTOR_SET(BgL_vectorz00_2584,BgL_iz00_1321,BgL_arg1318z00_2570); }  else 
{ 
obj_t BgL_auxz00_6427;
BgL_auxz00_6427 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4899)), BGl_string3331z00zz__weakhashz00, BgL_vectorz00_2584, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2584)), 
(int)(BgL_iz00_1321)); 
FAILURE(BgL_auxz00_6427,BFALSE,BFALSE);} } } } BGl_keepgoingz00zz__weakhashz00; 
{ /* Llib/weakhash.scm 177 */
obj_t BgL_arg1379z00_1332;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_pairz00_2586;
if(
PAIRP(BgL_bucketz00_1326))
{ /* Llib/weakhash.scm 177 */
BgL_pairz00_2586 = BgL_bucketz00_1326; }  else 
{ 
obj_t BgL_auxz00_6436;
BgL_auxz00_6436 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1326); 
FAILURE(BgL_auxz00_6436,BFALSE,BFALSE);} 
BgL_arg1379z00_1332 = 
CDR(BgL_pairz00_2586); } 
{ 
obj_t BgL_bucketz00_6441;
BgL_bucketz00_6441 = BgL_arg1379z00_1332; 
BgL_bucketz00_1326 = BgL_bucketz00_6441; 
goto BgL_zc3z04anonymousza31376ze3z87_1328;} } }  else 
{ /* Llib/weakhash.scm 177 */
obj_t BgL_arg1380z00_1333;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_pairz00_2587;
if(
PAIRP(BgL_bucketz00_1326))
{ /* Llib/weakhash.scm 177 */
BgL_pairz00_2587 = BgL_bucketz00_1326; }  else 
{ 
obj_t BgL_auxz00_6444;
BgL_auxz00_6444 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1326); 
FAILURE(BgL_auxz00_6444,BFALSE,BFALSE);} 
BgL_arg1380z00_1333 = 
CDR(BgL_pairz00_2587); } 
{ 
obj_t BgL_lastzd2bucketzd2_6450;obj_t BgL_bucketz00_6449;
BgL_bucketz00_6449 = BgL_arg1380z00_1333; 
BgL_lastzd2bucketzd2_6450 = BgL_bucketz00_1326; 
BgL_lastzd2bucketzd2_1327 = BgL_lastzd2bucketzd2_6450; 
BgL_bucketz00_1326 = BgL_bucketz00_6449; 
goto BgL_zc3z04anonymousza31376ze3z87_1328;} } } } } 
{ 
long BgL_iz00_6451;
BgL_iz00_6451 = 
(BgL_iz00_1321+((long)1)); 
BgL_iz00_1321 = BgL_iz00_6451; 
goto BgL_zc3z04anonymousza31374ze3z87_1322;} } } } } }  else 
{ /* Llib/weakhash.scm 177 */
bool_t BgL_test3754z00_6453;
{ /* Llib/weakhash.scm 192 */
obj_t BgL_arg1424z00_1416;
{ /* Llib/weakhash.scm 192 */
bool_t BgL_test3755z00_6454;
{ /* Llib/weakhash.scm 192 */
obj_t BgL_tmpz00_6455;
{ /* Llib/weakhash.scm 192 */
obj_t BgL_res2055z00_2593;
{ /* Llib/weakhash.scm 192 */
obj_t BgL_aux2826z00_4488;
BgL_aux2826z00_4488 = 
STRUCT_KEY(BgL_tablez00_51); 
if(
SYMBOLP(BgL_aux2826z00_4488))
{ /* Llib/weakhash.scm 192 */
BgL_res2055z00_2593 = BgL_aux2826z00_4488; }  else 
{ 
obj_t BgL_auxz00_6459;
BgL_auxz00_6459 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7313)), BGl_string3332z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2826z00_4488); 
FAILURE(BgL_auxz00_6459,BFALSE,BFALSE);} } 
BgL_tmpz00_6455 = BgL_res2055z00_2593; } 
BgL_test3755z00_6454 = 
(BgL_tmpz00_6455==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3755z00_6454)
{ /* Llib/weakhash.scm 192 */
int BgL_tmpz00_6464;
BgL_tmpz00_6464 = 
(int)(((long)5)); 
BgL_arg1424z00_1416 = 
STRUCT_REF(BgL_tablez00_51, BgL_tmpz00_6464); }  else 
{ /* Llib/weakhash.scm 192 */
BgL_arg1424z00_1416 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_51); } } 
{ /* Llib/weakhash.scm 192 */
long BgL_n2z00_2594;
{ /* Llib/weakhash.scm 192 */
obj_t BgL_tmpz00_6468;
if(
INTEGERP(BgL_arg1424z00_1416))
{ /* Llib/weakhash.scm 192 */
BgL_tmpz00_6468 = BgL_arg1424z00_1416
; }  else 
{ 
obj_t BgL_auxz00_6471;
BgL_auxz00_6471 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7335)), BGl_string3332z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1424z00_1416); 
FAILURE(BgL_auxz00_6471,BFALSE,BFALSE);} 
BgL_n2z00_2594 = 
(long)CINT(BgL_tmpz00_6468); } 
BgL_test3754z00_6453 = 
(((long)2)==BgL_n2z00_2594); } } 
if(BgL_test3754z00_6453)
{ /* Llib/weakhash.scm 177 */
obj_t BgL_bucketsz00_1343;
{ /* Llib/weakhash.scm 177 */
bool_t BgL_test3758z00_6477;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_tmpz00_6478;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_res2057z00_2599;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_aux2830z00_4492;
BgL_aux2830z00_4492 = 
STRUCT_KEY(BgL_tablez00_51); 
if(
SYMBOLP(BgL_aux2830z00_4492))
{ /* Llib/weakhash.scm 177 */
BgL_res2057z00_2599 = BgL_aux2830z00_4492; }  else 
{ 
obj_t BgL_auxz00_6482;
BgL_auxz00_6482 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3332z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2830z00_4492); 
FAILURE(BgL_auxz00_6482,BFALSE,BFALSE);} } 
BgL_tmpz00_6478 = BgL_res2057z00_2599; } 
BgL_test3758z00_6477 = 
(BgL_tmpz00_6478==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3758z00_6477)
{ /* Llib/weakhash.scm 177 */
int BgL_tmpz00_6487;
BgL_tmpz00_6487 = 
(int)(((long)2)); 
BgL_bucketsz00_1343 = 
STRUCT_REF(BgL_tablez00_51, BgL_tmpz00_6487); }  else 
{ /* Llib/weakhash.scm 177 */
BgL_bucketsz00_1343 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_51); } } 
{ /* Llib/weakhash.scm 177 */
long BgL_bucketszd2lenzd2_1344;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_vectorz00_2600;
if(
VECTORP(BgL_bucketsz00_1343))
{ /* Llib/weakhash.scm 177 */
BgL_vectorz00_2600 = BgL_bucketsz00_1343; }  else 
{ 
obj_t BgL_auxz00_6493;
BgL_auxz00_6493 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3332z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1343); 
FAILURE(BgL_auxz00_6493,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1344 = 
VECTOR_LENGTH(BgL_vectorz00_2600); } 
{ /* Llib/weakhash.scm 177 */

{ 
long BgL_iz00_1346;
BgL_iz00_1346 = ((long)0); 
BgL_zc3z04anonymousza31387ze3z87_1347:
if(
(BgL_iz00_1346==BgL_bucketszd2lenzd2_1344))
{ /* Llib/weakhash.scm 177 */
return ((bool_t)0);}  else 
{ /* Llib/weakhash.scm 177 */
{ /* Llib/weakhash.scm 177 */
obj_t BgL_g1062z00_1349;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_vectorz00_2604;
if(
VECTORP(BgL_bucketsz00_1343))
{ /* Llib/weakhash.scm 177 */
BgL_vectorz00_2604 = BgL_bucketsz00_1343; }  else 
{ 
obj_t BgL_auxz00_6502;
BgL_auxz00_6502 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3333z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1343); 
FAILURE(BgL_auxz00_6502,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 177 */
bool_t BgL_test3763z00_6506;
{ /* Llib/weakhash.scm 177 */
long BgL_tmpz00_6507;
BgL_tmpz00_6507 = 
VECTOR_LENGTH(BgL_vectorz00_2604); 
BgL_test3763z00_6506 = 
BOUND_CHECK(BgL_iz00_1346, BgL_tmpz00_6507); } 
if(BgL_test3763z00_6506)
{ /* Llib/weakhash.scm 177 */
BgL_g1062z00_1349 = 
VECTOR_REF(BgL_vectorz00_2604,BgL_iz00_1346); }  else 
{ 
obj_t BgL_auxz00_6511;
BgL_auxz00_6511 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3326z00zz__weakhashz00, BgL_vectorz00_2604, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2604)), 
(int)(BgL_iz00_1346)); 
FAILURE(BgL_auxz00_6511,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_bucketz00_1351;obj_t BgL_lastzd2bucketzd2_1352;
BgL_bucketz00_1351 = BgL_g1062z00_1349; 
BgL_lastzd2bucketzd2_1352 = BFALSE; 
BgL_zc3z04anonymousza31389ze3z87_1353:
if(
NULLP(BgL_bucketz00_1351))
{ /* Llib/weakhash.scm 177 */((bool_t)0); }  else 
{ /* Llib/weakhash.scm 194 */
obj_t BgL_retz00_1355;
{ /* Llib/weakhash.scm 194 */
obj_t BgL_dataz00_1359;
{ /* Llib/weakhash.scm 194 */
obj_t BgL_arg1396z00_1362;
{ /* Llib/weakhash.scm 194 */
obj_t BgL_pairz00_2607;
if(
PAIRP(BgL_bucketz00_1351))
{ /* Llib/weakhash.scm 194 */
BgL_pairz00_2607 = BgL_bucketz00_1351; }  else 
{ 
obj_t BgL_auxz00_6522;
BgL_auxz00_6522 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7396)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1351); 
FAILURE(BgL_auxz00_6522,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 194 */
obj_t BgL_pairz00_2610;
{ /* Llib/weakhash.scm 194 */
obj_t BgL_aux2838z00_4500;
BgL_aux2838z00_4500 = 
CAR(BgL_pairz00_2607); 
if(
PAIRP(BgL_aux2838z00_4500))
{ /* Llib/weakhash.scm 194 */
BgL_pairz00_2610 = BgL_aux2838z00_4500; }  else 
{ 
obj_t BgL_auxz00_6529;
BgL_auxz00_6529 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7390)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_aux2838z00_4500); 
FAILURE(BgL_auxz00_6529,BFALSE,BFALSE);} } 
BgL_arg1396z00_1362 = 
CDR(BgL_pairz00_2610); } } 
{ /* Llib/weakhash.scm 194 */
obj_t BgL_objz00_2611;
if(
BGL_WEAKPTRP(BgL_arg1396z00_1362))
{ /* Llib/weakhash.scm 194 */
BgL_objz00_2611 = BgL_arg1396z00_1362; }  else 
{ 
obj_t BgL_auxz00_6536;
BgL_auxz00_6536 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7402)), BGl_string3327z00zz__weakhashz00, BGl_string3329z00zz__weakhashz00, BgL_arg1396z00_1362); 
FAILURE(BgL_auxz00_6536,BFALSE,BFALSE);} 
BgL_dataz00_1359 = 
weakptr_data(BgL_objz00_2611); } } 
if(
(BgL_dataz00_1359==BUNSPEC))
{ /* Llib/weakhash.scm 195 */
BgL_retz00_1355 = BGl_removez00zz__weakhashz00; }  else 
{ /* Llib/weakhash.scm 197 */
obj_t BgL_arg1395z00_1361;
{ /* Llib/weakhash.scm 197 */
obj_t BgL_pairz00_2612;
if(
PAIRP(BgL_bucketz00_1351))
{ /* Llib/weakhash.scm 197 */
BgL_pairz00_2612 = BgL_bucketz00_1351; }  else 
{ 
obj_t BgL_auxz00_6545;
BgL_auxz00_6545 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7482)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1351); 
FAILURE(BgL_auxz00_6545,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 197 */
obj_t BgL_pairz00_2615;
{ /* Llib/weakhash.scm 197 */
obj_t BgL_aux2844z00_4506;
BgL_aux2844z00_4506 = 
CAR(BgL_pairz00_2612); 
if(
PAIRP(BgL_aux2844z00_4506))
{ /* Llib/weakhash.scm 197 */
BgL_pairz00_2615 = BgL_aux2844z00_4506; }  else 
{ 
obj_t BgL_auxz00_6552;
BgL_auxz00_6552 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7476)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_aux2844z00_4506); 
FAILURE(BgL_auxz00_6552,BFALSE,BFALSE);} } 
BgL_arg1395z00_1361 = 
CAR(BgL_pairz00_2615); } } 
{ /* Llib/weakhash.scm 197 */
obj_t BgL_funz00_4510;
if(
PROCEDUREP(BgL_funz00_52))
{ /* Llib/weakhash.scm 197 */
BgL_funz00_4510 = BgL_funz00_52; }  else 
{ 
obj_t BgL_auxz00_6559;
BgL_auxz00_6559 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7471)), BGl_string3327z00zz__weakhashz00, BGl_string3334z00zz__weakhashz00, BgL_funz00_52); 
FAILURE(BgL_auxz00_6559,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4510, ((long)2)))
{ /* Llib/weakhash.scm 197 */
BgL_retz00_1355 = 
PROCEDURE_ENTRY(BgL_funz00_4510)(BgL_funz00_52, BgL_arg1395z00_1361, BgL_dataz00_1359, BEOA); }  else 
{ /* Llib/weakhash.scm 197 */
FAILURE(BGl_string3335z00zz__weakhashz00,BGl_list3345z00zz__weakhashz00,BgL_funz00_4510);} } } } 
if(
(BgL_retz00_1355==BGl_removez00zz__weakhashz00))
{ /* Llib/weakhash.scm 177 */
{ /* Llib/weakhash.scm 124 */
long BgL_arg1315z00_2616;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_arg1316z00_2617;
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3774z00_6573;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_6574;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2060z00_2623;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2850z00_4513;
BgL_aux2850z00_4513 = 
STRUCT_KEY(BgL_tablez00_51); 
if(
SYMBOLP(BgL_aux2850z00_4513))
{ /* Llib/weakhash.scm 124 */
BgL_res2060z00_2623 = BgL_aux2850z00_4513; }  else 
{ 
obj_t BgL_auxz00_6578;
BgL_auxz00_6578 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4802)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2850z00_4513); 
FAILURE(BgL_auxz00_6578,BFALSE,BFALSE);} } 
BgL_tmpz00_6574 = BgL_res2060z00_2623; } 
BgL_test3774z00_6573 = 
(BgL_tmpz00_6574==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3774z00_6573)
{ /* Llib/weakhash.scm 124 */
int BgL_tmpz00_6583;
BgL_tmpz00_6583 = 
(int)(((long)0)); 
BgL_arg1316z00_2617 = 
STRUCT_REF(BgL_tablez00_51, BgL_tmpz00_6583); }  else 
{ /* Llib/weakhash.scm 124 */
BgL_arg1316z00_2617 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_51); } } 
{ /* Llib/weakhash.scm 124 */
long BgL_za71za7_2624;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_6587;
if(
INTEGERP(BgL_arg1316z00_2617))
{ /* Llib/weakhash.scm 124 */
BgL_tmpz00_6587 = BgL_arg1316z00_2617
; }  else 
{ 
obj_t BgL_auxz00_6590;
BgL_auxz00_6590 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4824)), BGl_string3327z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1316z00_2617); 
FAILURE(BgL_auxz00_6590,BFALSE,BFALSE);} 
BgL_za71za7_2624 = 
(long)CINT(BgL_tmpz00_6587); } 
BgL_arg1315z00_2616 = 
(BgL_za71za7_2624-((long)1)); } } 
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3777z00_6596;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_6597;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2062z00_2629;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2854z00_4517;
BgL_aux2854z00_4517 = 
STRUCT_KEY(BgL_tablez00_51); 
if(
SYMBOLP(BgL_aux2854z00_4517))
{ /* Llib/weakhash.scm 124 */
BgL_res2062z00_2629 = BgL_aux2854z00_4517; }  else 
{ 
obj_t BgL_auxz00_6601;
BgL_auxz00_6601 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4769)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2854z00_4517); 
FAILURE(BgL_auxz00_6601,BFALSE,BFALSE);} } 
BgL_tmpz00_6597 = BgL_res2062z00_2629; } 
BgL_test3777z00_6596 = 
(BgL_tmpz00_6597==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3777z00_6596)
{ /* Llib/weakhash.scm 124 */
obj_t BgL_auxz00_6608;int BgL_tmpz00_6606;
BgL_auxz00_6608 = 
BINT(BgL_arg1315z00_2616); 
BgL_tmpz00_6606 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_51, BgL_tmpz00_6606, BgL_auxz00_6608); }  else 
{ /* Llib/weakhash.scm 124 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_51); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_1352))
{ /* Llib/weakhash.scm 126 */
obj_t BgL_arg1317z00_2618;
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2630;
if(
PAIRP(BgL_bucketz00_1351))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2630 = BgL_bucketz00_1351; }  else 
{ 
obj_t BgL_auxz00_6616;
BgL_auxz00_6616 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4883)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1351); 
FAILURE(BgL_auxz00_6616,BFALSE,BFALSE);} 
BgL_arg1317z00_2618 = 
CDR(BgL_pairz00_2630); } 
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2631;
if(
PAIRP(BgL_lastzd2bucketzd2_1352))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2631 = BgL_lastzd2bucketzd2_1352; }  else 
{ 
obj_t BgL_auxz00_6623;
BgL_auxz00_6623 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4866)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_lastzd2bucketzd2_1352); 
FAILURE(BgL_auxz00_6623,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2631, BgL_arg1317z00_2618); } }  else 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_arg1318z00_2619;
{ /* Llib/weakhash.scm 127 */
obj_t BgL_pairz00_2632;
if(
PAIRP(BgL_bucketz00_1351))
{ /* Llib/weakhash.scm 127 */
BgL_pairz00_2632 = BgL_bucketz00_1351; }  else 
{ 
obj_t BgL_auxz00_6630;
BgL_auxz00_6630 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4927)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1351); 
FAILURE(BgL_auxz00_6630,BFALSE,BFALSE);} 
BgL_arg1318z00_2619 = 
CDR(BgL_pairz00_2632); } 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_vectorz00_2633;
if(
VECTORP(BgL_bucketsz00_1343))
{ /* Llib/weakhash.scm 127 */
BgL_vectorz00_2633 = BgL_bucketsz00_1343; }  else 
{ 
obj_t BgL_auxz00_6637;
BgL_auxz00_6637 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4912)), BGl_string3327z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1343); 
FAILURE(BgL_auxz00_6637,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 127 */
bool_t BgL_test3784z00_6641;
{ /* Llib/weakhash.scm 127 */
long BgL_tmpz00_6642;
BgL_tmpz00_6642 = 
VECTOR_LENGTH(BgL_vectorz00_2633); 
BgL_test3784z00_6641 = 
BOUND_CHECK(BgL_iz00_1346, BgL_tmpz00_6642); } 
if(BgL_test3784z00_6641)
{ /* Llib/weakhash.scm 127 */
VECTOR_SET(BgL_vectorz00_2633,BgL_iz00_1346,BgL_arg1318z00_2619); }  else 
{ 
obj_t BgL_auxz00_6646;
BgL_auxz00_6646 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4899)), BGl_string3331z00zz__weakhashz00, BgL_vectorz00_2633, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2633)), 
(int)(BgL_iz00_1346)); 
FAILURE(BgL_auxz00_6646,BFALSE,BFALSE);} } } } BGl_keepgoingz00zz__weakhashz00; 
{ /* Llib/weakhash.scm 177 */
obj_t BgL_arg1392z00_1357;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_pairz00_2635;
if(
PAIRP(BgL_bucketz00_1351))
{ /* Llib/weakhash.scm 177 */
BgL_pairz00_2635 = BgL_bucketz00_1351; }  else 
{ 
obj_t BgL_auxz00_6655;
BgL_auxz00_6655 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1351); 
FAILURE(BgL_auxz00_6655,BFALSE,BFALSE);} 
BgL_arg1392z00_1357 = 
CDR(BgL_pairz00_2635); } 
{ 
obj_t BgL_bucketz00_6660;
BgL_bucketz00_6660 = BgL_arg1392z00_1357; 
BgL_bucketz00_1351 = BgL_bucketz00_6660; 
goto BgL_zc3z04anonymousza31389ze3z87_1353;} } }  else 
{ /* Llib/weakhash.scm 177 */
obj_t BgL_arg1393z00_1358;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_pairz00_2636;
if(
PAIRP(BgL_bucketz00_1351))
{ /* Llib/weakhash.scm 177 */
BgL_pairz00_2636 = BgL_bucketz00_1351; }  else 
{ 
obj_t BgL_auxz00_6663;
BgL_auxz00_6663 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1351); 
FAILURE(BgL_auxz00_6663,BFALSE,BFALSE);} 
BgL_arg1393z00_1358 = 
CDR(BgL_pairz00_2636); } 
{ 
obj_t BgL_lastzd2bucketzd2_6669;obj_t BgL_bucketz00_6668;
BgL_bucketz00_6668 = BgL_arg1393z00_1358; 
BgL_lastzd2bucketzd2_6669 = BgL_bucketz00_1351; 
BgL_lastzd2bucketzd2_1352 = BgL_lastzd2bucketzd2_6669; 
BgL_bucketz00_1351 = BgL_bucketz00_6668; 
goto BgL_zc3z04anonymousza31389ze3z87_1353;} } } } } 
{ 
long BgL_iz00_6670;
BgL_iz00_6670 = 
(BgL_iz00_1346+((long)1)); 
BgL_iz00_1346 = BgL_iz00_6670; 
goto BgL_zc3z04anonymousza31387ze3z87_1347;} } } } } }  else 
{ /* Llib/weakhash.scm 177 */
bool_t BgL_test3787z00_6672;
{ /* Llib/weakhash.scm 198 */
obj_t BgL_arg1422z00_1415;
{ /* Llib/weakhash.scm 198 */
bool_t BgL_test3788z00_6673;
{ /* Llib/weakhash.scm 198 */
obj_t BgL_tmpz00_6674;
{ /* Llib/weakhash.scm 198 */
obj_t BgL_res2064z00_2642;
{ /* Llib/weakhash.scm 198 */
obj_t BgL_aux2868z00_4531;
BgL_aux2868z00_4531 = 
STRUCT_KEY(BgL_tablez00_51); 
if(
SYMBOLP(BgL_aux2868z00_4531))
{ /* Llib/weakhash.scm 198 */
BgL_res2064z00_2642 = BgL_aux2868z00_4531; }  else 
{ 
obj_t BgL_auxz00_6678;
BgL_auxz00_6678 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7527)), BGl_string3332z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2868z00_4531); 
FAILURE(BgL_auxz00_6678,BFALSE,BFALSE);} } 
BgL_tmpz00_6674 = BgL_res2064z00_2642; } 
BgL_test3788z00_6673 = 
(BgL_tmpz00_6674==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3788z00_6673)
{ /* Llib/weakhash.scm 198 */
int BgL_tmpz00_6683;
BgL_tmpz00_6683 = 
(int)(((long)5)); 
BgL_arg1422z00_1415 = 
STRUCT_REF(BgL_tablez00_51, BgL_tmpz00_6683); }  else 
{ /* Llib/weakhash.scm 198 */
BgL_arg1422z00_1415 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_51); } } 
{ /* Llib/weakhash.scm 198 */
long BgL_n2z00_2643;
{ /* Llib/weakhash.scm 198 */
obj_t BgL_tmpz00_6687;
if(
INTEGERP(BgL_arg1422z00_1415))
{ /* Llib/weakhash.scm 198 */
BgL_tmpz00_6687 = BgL_arg1422z00_1415
; }  else 
{ 
obj_t BgL_auxz00_6690;
BgL_auxz00_6690 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7549)), BGl_string3332z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1422z00_1415); 
FAILURE(BgL_auxz00_6690,BFALSE,BFALSE);} 
BgL_n2z00_2643 = 
(long)CINT(BgL_tmpz00_6687); } 
BgL_test3787z00_6672 = 
(((long)3)==BgL_n2z00_2643); } } 
if(BgL_test3787z00_6672)
{ /* Llib/weakhash.scm 177 */
obj_t BgL_bucketsz00_1368;
{ /* Llib/weakhash.scm 177 */
bool_t BgL_test3791z00_6696;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_tmpz00_6697;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_res2066z00_2648;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_aux2872z00_4535;
BgL_aux2872z00_4535 = 
STRUCT_KEY(BgL_tablez00_51); 
if(
SYMBOLP(BgL_aux2872z00_4535))
{ /* Llib/weakhash.scm 177 */
BgL_res2066z00_2648 = BgL_aux2872z00_4535; }  else 
{ 
obj_t BgL_auxz00_6701;
BgL_auxz00_6701 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3332z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2872z00_4535); 
FAILURE(BgL_auxz00_6701,BFALSE,BFALSE);} } 
BgL_tmpz00_6697 = BgL_res2066z00_2648; } 
BgL_test3791z00_6696 = 
(BgL_tmpz00_6697==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3791z00_6696)
{ /* Llib/weakhash.scm 177 */
int BgL_tmpz00_6706;
BgL_tmpz00_6706 = 
(int)(((long)2)); 
BgL_bucketsz00_1368 = 
STRUCT_REF(BgL_tablez00_51, BgL_tmpz00_6706); }  else 
{ /* Llib/weakhash.scm 177 */
BgL_bucketsz00_1368 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_51); } } 
{ /* Llib/weakhash.scm 177 */
long BgL_bucketszd2lenzd2_1369;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_vectorz00_2649;
if(
VECTORP(BgL_bucketsz00_1368))
{ /* Llib/weakhash.scm 177 */
BgL_vectorz00_2649 = BgL_bucketsz00_1368; }  else 
{ 
obj_t BgL_auxz00_6712;
BgL_auxz00_6712 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3332z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1368); 
FAILURE(BgL_auxz00_6712,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1369 = 
VECTOR_LENGTH(BgL_vectorz00_2649); } 
{ /* Llib/weakhash.scm 177 */

{ 
long BgL_iz00_1371;
BgL_iz00_1371 = ((long)0); 
BgL_zc3z04anonymousza31400ze3z87_1372:
if(
(BgL_iz00_1371==BgL_bucketszd2lenzd2_1369))
{ /* Llib/weakhash.scm 177 */
return ((bool_t)0);}  else 
{ /* Llib/weakhash.scm 177 */
{ /* Llib/weakhash.scm 177 */
obj_t BgL_g1063z00_1374;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_vectorz00_2653;
if(
VECTORP(BgL_bucketsz00_1368))
{ /* Llib/weakhash.scm 177 */
BgL_vectorz00_2653 = BgL_bucketsz00_1368; }  else 
{ 
obj_t BgL_auxz00_6721;
BgL_auxz00_6721 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3333z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1368); 
FAILURE(BgL_auxz00_6721,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 177 */
bool_t BgL_test3796z00_6725;
{ /* Llib/weakhash.scm 177 */
long BgL_tmpz00_6726;
BgL_tmpz00_6726 = 
VECTOR_LENGTH(BgL_vectorz00_2653); 
BgL_test3796z00_6725 = 
BOUND_CHECK(BgL_iz00_1371, BgL_tmpz00_6726); } 
if(BgL_test3796z00_6725)
{ /* Llib/weakhash.scm 177 */
BgL_g1063z00_1374 = 
VECTOR_REF(BgL_vectorz00_2653,BgL_iz00_1371); }  else 
{ 
obj_t BgL_auxz00_6730;
BgL_auxz00_6730 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3326z00zz__weakhashz00, BgL_vectorz00_2653, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2653)), 
(int)(BgL_iz00_1371)); 
FAILURE(BgL_auxz00_6730,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_bucketz00_1376;obj_t BgL_lastzd2bucketzd2_1377;
BgL_bucketz00_1376 = BgL_g1063z00_1374; 
BgL_lastzd2bucketzd2_1377 = BFALSE; 
BgL_zc3z04anonymousza31402ze3z87_1378:
if(
NULLP(BgL_bucketz00_1376))
{ /* Llib/weakhash.scm 177 */((bool_t)0); }  else 
{ /* Llib/weakhash.scm 200 */
obj_t BgL_retz00_1380;
{ /* Llib/weakhash.scm 200 */
obj_t BgL_keyz00_1384;obj_t BgL_dataz00_1385;
{ /* Llib/weakhash.scm 200 */
obj_t BgL_arg1409z00_1389;
{ /* Llib/weakhash.scm 200 */
obj_t BgL_pairz00_2656;
if(
PAIRP(BgL_bucketz00_1376))
{ /* Llib/weakhash.scm 200 */
BgL_pairz00_2656 = BgL_bucketz00_1376; }  else 
{ 
obj_t BgL_auxz00_6741;
BgL_auxz00_6741 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7613)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1376); 
FAILURE(BgL_auxz00_6741,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 200 */
obj_t BgL_pairz00_2659;
{ /* Llib/weakhash.scm 200 */
obj_t BgL_aux2880z00_4543;
BgL_aux2880z00_4543 = 
CAR(BgL_pairz00_2656); 
if(
PAIRP(BgL_aux2880z00_4543))
{ /* Llib/weakhash.scm 200 */
BgL_pairz00_2659 = BgL_aux2880z00_4543; }  else 
{ 
obj_t BgL_auxz00_6748;
BgL_auxz00_6748 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7607)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_aux2880z00_4543); 
FAILURE(BgL_auxz00_6748,BFALSE,BFALSE);} } 
BgL_arg1409z00_1389 = 
CAR(BgL_pairz00_2659); } } 
{ /* Llib/weakhash.scm 200 */
obj_t BgL_objz00_2660;
if(
BGL_WEAKPTRP(BgL_arg1409z00_1389))
{ /* Llib/weakhash.scm 200 */
BgL_objz00_2660 = BgL_arg1409z00_1389; }  else 
{ 
obj_t BgL_auxz00_6755;
BgL_auxz00_6755 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7619)), BGl_string3327z00zz__weakhashz00, BGl_string3329z00zz__weakhashz00, BgL_arg1409z00_1389); 
FAILURE(BgL_auxz00_6755,BFALSE,BFALSE);} 
BgL_keyz00_1384 = 
weakptr_data(BgL_objz00_2660); } } 
{ /* Llib/weakhash.scm 201 */
obj_t BgL_arg1410z00_1390;
{ /* Llib/weakhash.scm 201 */
obj_t BgL_pairz00_2661;
if(
PAIRP(BgL_bucketz00_1376))
{ /* Llib/weakhash.scm 201 */
BgL_pairz00_2661 = BgL_bucketz00_1376; }  else 
{ 
obj_t BgL_auxz00_6762;
BgL_auxz00_6762 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7659)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1376); 
FAILURE(BgL_auxz00_6762,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 201 */
obj_t BgL_pairz00_2664;
{ /* Llib/weakhash.scm 201 */
obj_t BgL_aux2886z00_4549;
BgL_aux2886z00_4549 = 
CAR(BgL_pairz00_2661); 
if(
PAIRP(BgL_aux2886z00_4549))
{ /* Llib/weakhash.scm 201 */
BgL_pairz00_2664 = BgL_aux2886z00_4549; }  else 
{ 
obj_t BgL_auxz00_6769;
BgL_auxz00_6769 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7653)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_aux2886z00_4549); 
FAILURE(BgL_auxz00_6769,BFALSE,BFALSE);} } 
BgL_arg1410z00_1390 = 
CDR(BgL_pairz00_2664); } } 
{ /* Llib/weakhash.scm 201 */
obj_t BgL_objz00_2665;
if(
BGL_WEAKPTRP(BgL_arg1410z00_1390))
{ /* Llib/weakhash.scm 201 */
BgL_objz00_2665 = BgL_arg1410z00_1390; }  else 
{ 
obj_t BgL_auxz00_6776;
BgL_auxz00_6776 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7665)), BGl_string3327z00zz__weakhashz00, BGl_string3329z00zz__weakhashz00, BgL_arg1410z00_1390); 
FAILURE(BgL_auxz00_6776,BFALSE,BFALSE);} 
BgL_dataz00_1385 = 
weakptr_data(BgL_objz00_2665); } } 
{ /* Llib/weakhash.scm 202 */
bool_t BgL_test3804z00_6781;
if(
(BgL_keyz00_1384==BUNSPEC))
{ /* Llib/weakhash.scm 202 */
BgL_test3804z00_6781 = ((bool_t)1)
; }  else 
{ /* Llib/weakhash.scm 202 */
BgL_test3804z00_6781 = 
(BgL_dataz00_1385==BUNSPEC)
; } 
if(BgL_test3804z00_6781)
{ /* Llib/weakhash.scm 202 */
BgL_retz00_1380 = BGl_removez00zz__weakhashz00; }  else 
{ /* Llib/weakhash.scm 205 */
obj_t BgL_funz00_4555;
if(
PROCEDUREP(BgL_funz00_52))
{ /* Llib/weakhash.scm 205 */
BgL_funz00_4555 = BgL_funz00_52; }  else 
{ 
obj_t BgL_auxz00_6787;
BgL_auxz00_6787 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7770)), BGl_string3327z00zz__weakhashz00, BGl_string3334z00zz__weakhashz00, BgL_funz00_52); 
FAILURE(BgL_auxz00_6787,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4555, ((long)2)))
{ /* Llib/weakhash.scm 205 */
BgL_retz00_1380 = 
PROCEDURE_ENTRY(BgL_funz00_4555)(BgL_funz00_52, BgL_keyz00_1384, BgL_dataz00_1385, BEOA); }  else 
{ /* Llib/weakhash.scm 205 */
FAILURE(BGl_string3335z00zz__weakhashz00,BGl_list3350z00zz__weakhashz00,BgL_funz00_4555);} } } } 
if(
(BgL_retz00_1380==BGl_removez00zz__weakhashz00))
{ /* Llib/weakhash.scm 177 */
{ /* Llib/weakhash.scm 124 */
long BgL_arg1315z00_2666;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_arg1316z00_2667;
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3809z00_6801;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_6802;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2069z00_2673;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2894z00_4558;
BgL_aux2894z00_4558 = 
STRUCT_KEY(BgL_tablez00_51); 
if(
SYMBOLP(BgL_aux2894z00_4558))
{ /* Llib/weakhash.scm 124 */
BgL_res2069z00_2673 = BgL_aux2894z00_4558; }  else 
{ 
obj_t BgL_auxz00_6806;
BgL_auxz00_6806 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4802)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2894z00_4558); 
FAILURE(BgL_auxz00_6806,BFALSE,BFALSE);} } 
BgL_tmpz00_6802 = BgL_res2069z00_2673; } 
BgL_test3809z00_6801 = 
(BgL_tmpz00_6802==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3809z00_6801)
{ /* Llib/weakhash.scm 124 */
int BgL_tmpz00_6811;
BgL_tmpz00_6811 = 
(int)(((long)0)); 
BgL_arg1316z00_2667 = 
STRUCT_REF(BgL_tablez00_51, BgL_tmpz00_6811); }  else 
{ /* Llib/weakhash.scm 124 */
BgL_arg1316z00_2667 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_51); } } 
{ /* Llib/weakhash.scm 124 */
long BgL_za71za7_2674;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_6815;
if(
INTEGERP(BgL_arg1316z00_2667))
{ /* Llib/weakhash.scm 124 */
BgL_tmpz00_6815 = BgL_arg1316z00_2667
; }  else 
{ 
obj_t BgL_auxz00_6818;
BgL_auxz00_6818 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4824)), BGl_string3327z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1316z00_2667); 
FAILURE(BgL_auxz00_6818,BFALSE,BFALSE);} 
BgL_za71za7_2674 = 
(long)CINT(BgL_tmpz00_6815); } 
BgL_arg1315z00_2666 = 
(BgL_za71za7_2674-((long)1)); } } 
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3812z00_6824;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_6825;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2071z00_2679;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2898z00_4562;
BgL_aux2898z00_4562 = 
STRUCT_KEY(BgL_tablez00_51); 
if(
SYMBOLP(BgL_aux2898z00_4562))
{ /* Llib/weakhash.scm 124 */
BgL_res2071z00_2679 = BgL_aux2898z00_4562; }  else 
{ 
obj_t BgL_auxz00_6829;
BgL_auxz00_6829 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4769)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2898z00_4562); 
FAILURE(BgL_auxz00_6829,BFALSE,BFALSE);} } 
BgL_tmpz00_6825 = BgL_res2071z00_2679; } 
BgL_test3812z00_6824 = 
(BgL_tmpz00_6825==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3812z00_6824)
{ /* Llib/weakhash.scm 124 */
obj_t BgL_auxz00_6836;int BgL_tmpz00_6834;
BgL_auxz00_6836 = 
BINT(BgL_arg1315z00_2666); 
BgL_tmpz00_6834 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_51, BgL_tmpz00_6834, BgL_auxz00_6836); }  else 
{ /* Llib/weakhash.scm 124 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_51); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_1377))
{ /* Llib/weakhash.scm 126 */
obj_t BgL_arg1317z00_2668;
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2680;
if(
PAIRP(BgL_bucketz00_1376))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2680 = BgL_bucketz00_1376; }  else 
{ 
obj_t BgL_auxz00_6844;
BgL_auxz00_6844 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4883)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1376); 
FAILURE(BgL_auxz00_6844,BFALSE,BFALSE);} 
BgL_arg1317z00_2668 = 
CDR(BgL_pairz00_2680); } 
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2681;
if(
PAIRP(BgL_lastzd2bucketzd2_1377))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2681 = BgL_lastzd2bucketzd2_1377; }  else 
{ 
obj_t BgL_auxz00_6851;
BgL_auxz00_6851 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4866)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_lastzd2bucketzd2_1377); 
FAILURE(BgL_auxz00_6851,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2681, BgL_arg1317z00_2668); } }  else 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_arg1318z00_2669;
{ /* Llib/weakhash.scm 127 */
obj_t BgL_pairz00_2682;
if(
PAIRP(BgL_bucketz00_1376))
{ /* Llib/weakhash.scm 127 */
BgL_pairz00_2682 = BgL_bucketz00_1376; }  else 
{ 
obj_t BgL_auxz00_6858;
BgL_auxz00_6858 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4927)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1376); 
FAILURE(BgL_auxz00_6858,BFALSE,BFALSE);} 
BgL_arg1318z00_2669 = 
CDR(BgL_pairz00_2682); } 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_vectorz00_2683;
if(
VECTORP(BgL_bucketsz00_1368))
{ /* Llib/weakhash.scm 127 */
BgL_vectorz00_2683 = BgL_bucketsz00_1368; }  else 
{ 
obj_t BgL_auxz00_6865;
BgL_auxz00_6865 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4912)), BGl_string3327z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1368); 
FAILURE(BgL_auxz00_6865,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 127 */
bool_t BgL_test3819z00_6869;
{ /* Llib/weakhash.scm 127 */
long BgL_tmpz00_6870;
BgL_tmpz00_6870 = 
VECTOR_LENGTH(BgL_vectorz00_2683); 
BgL_test3819z00_6869 = 
BOUND_CHECK(BgL_iz00_1371, BgL_tmpz00_6870); } 
if(BgL_test3819z00_6869)
{ /* Llib/weakhash.scm 127 */
VECTOR_SET(BgL_vectorz00_2683,BgL_iz00_1371,BgL_arg1318z00_2669); }  else 
{ 
obj_t BgL_auxz00_6874;
BgL_auxz00_6874 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4899)), BGl_string3331z00zz__weakhashz00, BgL_vectorz00_2683, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2683)), 
(int)(BgL_iz00_1371)); 
FAILURE(BgL_auxz00_6874,BFALSE,BFALSE);} } } } BGl_keepgoingz00zz__weakhashz00; 
{ /* Llib/weakhash.scm 177 */
obj_t BgL_arg1405z00_1382;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_pairz00_2685;
if(
PAIRP(BgL_bucketz00_1376))
{ /* Llib/weakhash.scm 177 */
BgL_pairz00_2685 = BgL_bucketz00_1376; }  else 
{ 
obj_t BgL_auxz00_6883;
BgL_auxz00_6883 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1376); 
FAILURE(BgL_auxz00_6883,BFALSE,BFALSE);} 
BgL_arg1405z00_1382 = 
CDR(BgL_pairz00_2685); } 
{ 
obj_t BgL_bucketz00_6888;
BgL_bucketz00_6888 = BgL_arg1405z00_1382; 
BgL_bucketz00_1376 = BgL_bucketz00_6888; 
goto BgL_zc3z04anonymousza31402ze3z87_1378;} } }  else 
{ /* Llib/weakhash.scm 177 */
obj_t BgL_arg1406z00_1383;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_pairz00_2686;
if(
PAIRP(BgL_bucketz00_1376))
{ /* Llib/weakhash.scm 177 */
BgL_pairz00_2686 = BgL_bucketz00_1376; }  else 
{ 
obj_t BgL_auxz00_6891;
BgL_auxz00_6891 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1376); 
FAILURE(BgL_auxz00_6891,BFALSE,BFALSE);} 
BgL_arg1406z00_1383 = 
CDR(BgL_pairz00_2686); } 
{ 
obj_t BgL_lastzd2bucketzd2_6897;obj_t BgL_bucketz00_6896;
BgL_bucketz00_6896 = BgL_arg1406z00_1383; 
BgL_lastzd2bucketzd2_6897 = BgL_bucketz00_1376; 
BgL_lastzd2bucketzd2_1377 = BgL_lastzd2bucketzd2_6897; 
BgL_bucketz00_1376 = BgL_bucketz00_6896; 
goto BgL_zc3z04anonymousza31402ze3z87_1378;} } } } } 
{ 
long BgL_iz00_6898;
BgL_iz00_6898 = 
(BgL_iz00_1371+((long)1)); 
BgL_iz00_1371 = BgL_iz00_6898; 
goto BgL_zc3z04anonymousza31400ze3z87_1372;} } } } } }  else 
{ /* Llib/weakhash.scm 177 */
obj_t BgL_bucketsz00_1394;
{ /* Llib/weakhash.scm 177 */
bool_t BgL_test3822z00_6900;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_tmpz00_6901;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_res2073z00_2692;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_aux2912z00_4576;
BgL_aux2912z00_4576 = 
STRUCT_KEY(BgL_tablez00_51); 
if(
SYMBOLP(BgL_aux2912z00_4576))
{ /* Llib/weakhash.scm 177 */
BgL_res2073z00_2692 = BgL_aux2912z00_4576; }  else 
{ 
obj_t BgL_auxz00_6905;
BgL_auxz00_6905 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3332z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2912z00_4576); 
FAILURE(BgL_auxz00_6905,BFALSE,BFALSE);} } 
BgL_tmpz00_6901 = BgL_res2073z00_2692; } 
BgL_test3822z00_6900 = 
(BgL_tmpz00_6901==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3822z00_6900)
{ /* Llib/weakhash.scm 177 */
int BgL_tmpz00_6910;
BgL_tmpz00_6910 = 
(int)(((long)2)); 
BgL_bucketsz00_1394 = 
STRUCT_REF(BgL_tablez00_51, BgL_tmpz00_6910); }  else 
{ /* Llib/weakhash.scm 177 */
BgL_bucketsz00_1394 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_51); } } 
{ /* Llib/weakhash.scm 177 */
long BgL_bucketszd2lenzd2_1395;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_vectorz00_2693;
if(
VECTORP(BgL_bucketsz00_1394))
{ /* Llib/weakhash.scm 177 */
BgL_vectorz00_2693 = BgL_bucketsz00_1394; }  else 
{ 
obj_t BgL_auxz00_6916;
BgL_auxz00_6916 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3332z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1394); 
FAILURE(BgL_auxz00_6916,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1395 = 
VECTOR_LENGTH(BgL_vectorz00_2693); } 
{ /* Llib/weakhash.scm 177 */

{ 
long BgL_iz00_1397;
BgL_iz00_1397 = ((long)0); 
BgL_zc3z04anonymousza31412ze3z87_1398:
if(
(BgL_iz00_1397==BgL_bucketszd2lenzd2_1395))
{ /* Llib/weakhash.scm 177 */
return ((bool_t)0);}  else 
{ /* Llib/weakhash.scm 177 */
{ /* Llib/weakhash.scm 177 */
obj_t BgL_g1064z00_1400;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_vectorz00_2697;
if(
VECTORP(BgL_bucketsz00_1394))
{ /* Llib/weakhash.scm 177 */
BgL_vectorz00_2697 = BgL_bucketsz00_1394; }  else 
{ 
obj_t BgL_auxz00_6925;
BgL_auxz00_6925 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3333z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1394); 
FAILURE(BgL_auxz00_6925,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 177 */
bool_t BgL_test3827z00_6929;
{ /* Llib/weakhash.scm 177 */
long BgL_tmpz00_6930;
BgL_tmpz00_6930 = 
VECTOR_LENGTH(BgL_vectorz00_2697); 
BgL_test3827z00_6929 = 
BOUND_CHECK(BgL_iz00_1397, BgL_tmpz00_6930); } 
if(BgL_test3827z00_6929)
{ /* Llib/weakhash.scm 177 */
BgL_g1064z00_1400 = 
VECTOR_REF(BgL_vectorz00_2697,BgL_iz00_1397); }  else 
{ 
obj_t BgL_auxz00_6934;
BgL_auxz00_6934 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3326z00zz__weakhashz00, BgL_vectorz00_2697, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2697)), 
(int)(BgL_iz00_1397)); 
FAILURE(BgL_auxz00_6934,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_bucketz00_1402;obj_t BgL_lastzd2bucketzd2_1403;
BgL_bucketz00_1402 = BgL_g1064z00_1400; 
BgL_lastzd2bucketzd2_1403 = BFALSE; 
BgL_zc3z04anonymousza31414ze3z87_1404:
if(
NULLP(BgL_bucketz00_1402))
{ /* Llib/weakhash.scm 177 */((bool_t)0); }  else 
{ /* Llib/weakhash.scm 208 */
obj_t BgL_retz00_1406;
{ /* Llib/weakhash.scm 208 */
obj_t BgL_arg1419z00_1410;obj_t BgL_arg1420z00_1411;
{ /* Llib/weakhash.scm 208 */
obj_t BgL_pairz00_2700;
if(
PAIRP(BgL_bucketz00_1402))
{ /* Llib/weakhash.scm 208 */
BgL_pairz00_2700 = BgL_bucketz00_1402; }  else 
{ 
obj_t BgL_auxz00_6945;
BgL_auxz00_6945 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7837)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1402); 
FAILURE(BgL_auxz00_6945,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 208 */
obj_t BgL_pairz00_2703;
{ /* Llib/weakhash.scm 208 */
obj_t BgL_aux2920z00_4584;
BgL_aux2920z00_4584 = 
CAR(BgL_pairz00_2700); 
if(
PAIRP(BgL_aux2920z00_4584))
{ /* Llib/weakhash.scm 208 */
BgL_pairz00_2703 = BgL_aux2920z00_4584; }  else 
{ 
obj_t BgL_auxz00_6952;
BgL_auxz00_6952 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7831)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_aux2920z00_4584); 
FAILURE(BgL_auxz00_6952,BFALSE,BFALSE);} } 
BgL_arg1419z00_1410 = 
CAR(BgL_pairz00_2703); } } 
{ /* Llib/weakhash.scm 208 */
obj_t BgL_pairz00_2704;
if(
PAIRP(BgL_bucketz00_1402))
{ /* Llib/weakhash.scm 208 */
BgL_pairz00_2704 = BgL_bucketz00_1402; }  else 
{ 
obj_t BgL_auxz00_6959;
BgL_auxz00_6959 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7851)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1402); 
FAILURE(BgL_auxz00_6959,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 208 */
obj_t BgL_pairz00_2707;
{ /* Llib/weakhash.scm 208 */
obj_t BgL_aux2924z00_4588;
BgL_aux2924z00_4588 = 
CAR(BgL_pairz00_2704); 
if(
PAIRP(BgL_aux2924z00_4588))
{ /* Llib/weakhash.scm 208 */
BgL_pairz00_2707 = BgL_aux2924z00_4588; }  else 
{ 
obj_t BgL_auxz00_6966;
BgL_auxz00_6966 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7845)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_aux2924z00_4588); 
FAILURE(BgL_auxz00_6966,BFALSE,BFALSE);} } 
BgL_arg1420z00_1411 = 
CDR(BgL_pairz00_2707); } } 
{ /* Llib/weakhash.scm 208 */
obj_t BgL_funz00_4592;
if(
PROCEDUREP(BgL_funz00_52))
{ /* Llib/weakhash.scm 208 */
BgL_funz00_4592 = BgL_funz00_52; }  else 
{ 
obj_t BgL_auxz00_6973;
BgL_auxz00_6973 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)7826)), BGl_string3327z00zz__weakhashz00, BGl_string3334z00zz__weakhashz00, BgL_funz00_52); 
FAILURE(BgL_auxz00_6973,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4592, ((long)2)))
{ /* Llib/weakhash.scm 208 */
BgL_retz00_1406 = 
PROCEDURE_ENTRY(BgL_funz00_4592)(BgL_funz00_52, BgL_arg1419z00_1410, BgL_arg1420z00_1411, BEOA); }  else 
{ /* Llib/weakhash.scm 208 */
FAILURE(BGl_string3335z00zz__weakhashz00,BGl_list3351z00zz__weakhashz00,BgL_funz00_4592);} } } 
if(
(BgL_retz00_1406==BGl_removez00zz__weakhashz00))
{ /* Llib/weakhash.scm 177 */
{ /* Llib/weakhash.scm 124 */
long BgL_arg1315z00_2708;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_arg1316z00_2709;
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3836z00_6987;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_6988;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2076z00_2715;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2930z00_4595;
BgL_aux2930z00_4595 = 
STRUCT_KEY(BgL_tablez00_51); 
if(
SYMBOLP(BgL_aux2930z00_4595))
{ /* Llib/weakhash.scm 124 */
BgL_res2076z00_2715 = BgL_aux2930z00_4595; }  else 
{ 
obj_t BgL_auxz00_6992;
BgL_auxz00_6992 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4802)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2930z00_4595); 
FAILURE(BgL_auxz00_6992,BFALSE,BFALSE);} } 
BgL_tmpz00_6988 = BgL_res2076z00_2715; } 
BgL_test3836z00_6987 = 
(BgL_tmpz00_6988==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3836z00_6987)
{ /* Llib/weakhash.scm 124 */
int BgL_tmpz00_6997;
BgL_tmpz00_6997 = 
(int)(((long)0)); 
BgL_arg1316z00_2709 = 
STRUCT_REF(BgL_tablez00_51, BgL_tmpz00_6997); }  else 
{ /* Llib/weakhash.scm 124 */
BgL_arg1316z00_2709 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_51); } } 
{ /* Llib/weakhash.scm 124 */
long BgL_za71za7_2716;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_7001;
if(
INTEGERP(BgL_arg1316z00_2709))
{ /* Llib/weakhash.scm 124 */
BgL_tmpz00_7001 = BgL_arg1316z00_2709
; }  else 
{ 
obj_t BgL_auxz00_7004;
BgL_auxz00_7004 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4824)), BGl_string3327z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1316z00_2709); 
FAILURE(BgL_auxz00_7004,BFALSE,BFALSE);} 
BgL_za71za7_2716 = 
(long)CINT(BgL_tmpz00_7001); } 
BgL_arg1315z00_2708 = 
(BgL_za71za7_2716-((long)1)); } } 
{ /* Llib/weakhash.scm 124 */
bool_t BgL_test3839z00_7010;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_tmpz00_7011;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_res2078z00_2721;
{ /* Llib/weakhash.scm 124 */
obj_t BgL_aux2934z00_4599;
BgL_aux2934z00_4599 = 
STRUCT_KEY(BgL_tablez00_51); 
if(
SYMBOLP(BgL_aux2934z00_4599))
{ /* Llib/weakhash.scm 124 */
BgL_res2078z00_2721 = BgL_aux2934z00_4599; }  else 
{ 
obj_t BgL_auxz00_7015;
BgL_auxz00_7015 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4769)), BGl_string3327z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2934z00_4599); 
FAILURE(BgL_auxz00_7015,BFALSE,BFALSE);} } 
BgL_tmpz00_7011 = BgL_res2078z00_2721; } 
BgL_test3839z00_7010 = 
(BgL_tmpz00_7011==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3839z00_7010)
{ /* Llib/weakhash.scm 124 */
obj_t BgL_auxz00_7022;int BgL_tmpz00_7020;
BgL_auxz00_7022 = 
BINT(BgL_arg1315z00_2708); 
BgL_tmpz00_7020 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_51, BgL_tmpz00_7020, BgL_auxz00_7022); }  else 
{ /* Llib/weakhash.scm 124 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_51); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_1403))
{ /* Llib/weakhash.scm 126 */
obj_t BgL_arg1317z00_2710;
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2722;
if(
PAIRP(BgL_bucketz00_1402))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2722 = BgL_bucketz00_1402; }  else 
{ 
obj_t BgL_auxz00_7030;
BgL_auxz00_7030 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4883)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1402); 
FAILURE(BgL_auxz00_7030,BFALSE,BFALSE);} 
BgL_arg1317z00_2710 = 
CDR(BgL_pairz00_2722); } 
{ /* Llib/weakhash.scm 126 */
obj_t BgL_pairz00_2723;
if(
PAIRP(BgL_lastzd2bucketzd2_1403))
{ /* Llib/weakhash.scm 126 */
BgL_pairz00_2723 = BgL_lastzd2bucketzd2_1403; }  else 
{ 
obj_t BgL_auxz00_7037;
BgL_auxz00_7037 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4866)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_lastzd2bucketzd2_1403); 
FAILURE(BgL_auxz00_7037,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2723, BgL_arg1317z00_2710); } }  else 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_arg1318z00_2711;
{ /* Llib/weakhash.scm 127 */
obj_t BgL_pairz00_2724;
if(
PAIRP(BgL_bucketz00_1402))
{ /* Llib/weakhash.scm 127 */
BgL_pairz00_2724 = BgL_bucketz00_1402; }  else 
{ 
obj_t BgL_auxz00_7044;
BgL_auxz00_7044 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4927)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1402); 
FAILURE(BgL_auxz00_7044,BFALSE,BFALSE);} 
BgL_arg1318z00_2711 = 
CDR(BgL_pairz00_2724); } 
{ /* Llib/weakhash.scm 127 */
obj_t BgL_vectorz00_2725;
if(
VECTORP(BgL_bucketsz00_1394))
{ /* Llib/weakhash.scm 127 */
BgL_vectorz00_2725 = BgL_bucketsz00_1394; }  else 
{ 
obj_t BgL_auxz00_7051;
BgL_auxz00_7051 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4912)), BGl_string3327z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1394); 
FAILURE(BgL_auxz00_7051,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 127 */
bool_t BgL_test3846z00_7055;
{ /* Llib/weakhash.scm 127 */
long BgL_tmpz00_7056;
BgL_tmpz00_7056 = 
VECTOR_LENGTH(BgL_vectorz00_2725); 
BgL_test3846z00_7055 = 
BOUND_CHECK(BgL_iz00_1397, BgL_tmpz00_7056); } 
if(BgL_test3846z00_7055)
{ /* Llib/weakhash.scm 127 */
VECTOR_SET(BgL_vectorz00_2725,BgL_iz00_1397,BgL_arg1318z00_2711); }  else 
{ 
obj_t BgL_auxz00_7060;
BgL_auxz00_7060 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)4899)), BGl_string3331z00zz__weakhashz00, BgL_vectorz00_2725, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2725)), 
(int)(BgL_iz00_1397)); 
FAILURE(BgL_auxz00_7060,BFALSE,BFALSE);} } } } BGl_keepgoingz00zz__weakhashz00; 
{ /* Llib/weakhash.scm 177 */
obj_t BgL_arg1417z00_1408;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_pairz00_2727;
if(
PAIRP(BgL_bucketz00_1402))
{ /* Llib/weakhash.scm 177 */
BgL_pairz00_2727 = BgL_bucketz00_1402; }  else 
{ 
obj_t BgL_auxz00_7069;
BgL_auxz00_7069 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1402); 
FAILURE(BgL_auxz00_7069,BFALSE,BFALSE);} 
BgL_arg1417z00_1408 = 
CDR(BgL_pairz00_2727); } 
{ 
obj_t BgL_bucketz00_7074;
BgL_bucketz00_7074 = BgL_arg1417z00_1408; 
BgL_bucketz00_1402 = BgL_bucketz00_7074; 
goto BgL_zc3z04anonymousza31414ze3z87_1404;} } }  else 
{ /* Llib/weakhash.scm 177 */
obj_t BgL_arg1418z00_1409;
{ /* Llib/weakhash.scm 177 */
obj_t BgL_pairz00_2728;
if(
PAIRP(BgL_bucketz00_1402))
{ /* Llib/weakhash.scm 177 */
BgL_pairz00_2728 = BgL_bucketz00_1402; }  else 
{ 
obj_t BgL_auxz00_7077;
BgL_auxz00_7077 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)6797)), BGl_string3327z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_1402); 
FAILURE(BgL_auxz00_7077,BFALSE,BFALSE);} 
BgL_arg1418z00_1409 = 
CDR(BgL_pairz00_2728); } 
{ 
obj_t BgL_lastzd2bucketzd2_7083;obj_t BgL_bucketz00_7082;
BgL_bucketz00_7082 = BgL_arg1418z00_1409; 
BgL_lastzd2bucketzd2_7083 = BgL_bucketz00_1402; 
BgL_lastzd2bucketzd2_1403 = BgL_lastzd2bucketzd2_7083; 
BgL_bucketz00_1402 = BgL_bucketz00_7082; 
goto BgL_zc3z04anonymousza31414ze3z87_1404;} } } } } 
{ 
long BgL_iz00_7084;
BgL_iz00_7084 = 
(BgL_iz00_1397+((long)1)); 
BgL_iz00_1397 = BgL_iz00_7084; 
goto BgL_zc3z04anonymousza31412ze3z87_1398;} } } } } } } } } } 

}



/* weak-hashtable->vector */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(obj_t BgL_tablez00_53)
{
{ /* Llib/weakhash.scm 220 */
{ /* Llib/weakhash.scm 221 */
obj_t BgL_vecz00_1418;obj_t BgL_wz00_3949;
BgL_vecz00_1418 = 
make_vector(
BGl_hashtablezd2siza7ez75zz__hashz00(BgL_tablez00_53), BUNSPEC); 
BgL_wz00_3949 = 
MAKE_CELL(
BINT(((long)0))); 
{ /* Llib/weakhash.scm 225 */
obj_t BgL_zc3z04anonymousza31427ze3z87_3940;
BgL_zc3z04anonymousza31427ze3z87_3940 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31427ze3ze5zz__weakhashz00, 
(int)(((long)2)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31427ze3z87_3940, 
(int)(((long)0)), BgL_vecz00_1418); 
PROCEDURE_SET(BgL_zc3z04anonymousza31427ze3z87_3940, 
(int)(((long)1)), 
((obj_t)BgL_wz00_3949)); 
BGl_traversezd2hashzd2zz__weakhashz00(BgL_tablez00_53, BgL_zc3z04anonymousza31427ze3z87_3940); } 
{ /* Llib/weakhash.scm 227 */
bool_t BgL_test3849z00_7098;
{ /* Llib/weakhash.scm 227 */
long BgL_arg1430z00_1427;
BgL_arg1430z00_1427 = 
BGl_hashtablezd2siza7ez75zz__hashz00(BgL_tablez00_53); 
{ /* Llib/weakhash.scm 227 */
long BgL_n1z00_2736;
{ /* Llib/weakhash.scm 227 */
obj_t BgL_tmpz00_7100;
{ /* Llib/weakhash.scm 227 */
obj_t BgL_aux2948z00_4614;
BgL_aux2948z00_4614 = 
CELL_REF(BgL_wz00_3949); 
if(
INTEGERP(BgL_aux2948z00_4614))
{ /* Llib/weakhash.scm 227 */
BgL_tmpz00_7100 = BgL_aux2948z00_4614
; }  else 
{ 
obj_t BgL_auxz00_7103;
BgL_auxz00_7103 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)8568)), BGl_string3356z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_aux2948z00_4614); 
FAILURE(BgL_auxz00_7103,BFALSE,BFALSE);} } 
BgL_n1z00_2736 = 
(long)CINT(BgL_tmpz00_7100); } 
BgL_test3849z00_7098 = 
(BgL_n1z00_2736<BgL_arg1430z00_1427); } } 
if(BgL_test3849z00_7098)
{ /* Llib/weakhash.scm 228 */
long BgL_auxz00_7109;
{ /* Llib/weakhash.scm 228 */
obj_t BgL_tmpz00_7110;
{ /* Llib/weakhash.scm 228 */
obj_t BgL_aux2950z00_4616;
BgL_aux2950z00_4616 = 
CELL_REF(BgL_wz00_3949); 
if(
INTEGERP(BgL_aux2950z00_4616))
{ /* Llib/weakhash.scm 228 */
BgL_tmpz00_7110 = BgL_aux2950z00_4616
; }  else 
{ 
obj_t BgL_auxz00_7113;
BgL_auxz00_7113 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)8614)), BGl_string3356z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_aux2950z00_4616); 
FAILURE(BgL_auxz00_7113,BFALSE,BFALSE);} } 
BgL_auxz00_7109 = 
(long)CINT(BgL_tmpz00_7110); } 
return 
BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(BgL_vecz00_1418, BgL_auxz00_7109);}  else 
{ /* Llib/weakhash.scm 227 */
return BgL_vecz00_1418;} } } } 

}



/* &weak-hashtable->vector */
obj_t BGl_z62weakzd2hashtablezd2ze3vectorz81zz__weakhashz00(obj_t BgL_envz00_3941, obj_t BgL_tablez00_3942)
{
{ /* Llib/weakhash.scm 220 */
{ /* Llib/weakhash.scm 221 */
obj_t BgL_auxz00_7119;
if(
STRUCTP(BgL_tablez00_3942))
{ /* Llib/weakhash.scm 221 */
BgL_auxz00_7119 = BgL_tablez00_3942
; }  else 
{ 
obj_t BgL_auxz00_7122;
BgL_auxz00_7122 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)8392)), BGl_string3357z00zz__weakhashz00, BGl_string3358z00zz__weakhashz00, BgL_tablez00_3942); 
FAILURE(BgL_auxz00_7122,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(BgL_auxz00_7119);} } 

}



/* &<@anonymous:1427> */
obj_t BGl_z62zc3z04anonymousza31427ze3ze5zz__weakhashz00(obj_t BgL_envz00_3943, obj_t BgL_keyz00_3946, obj_t BgL_valz00_3947)
{
{ /* Llib/weakhash.scm 224 */
{ /* Llib/weakhash.scm 225 */
obj_t BgL_vecz00_3944;obj_t BgL_wz00_3945;
BgL_vecz00_3944 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3943, 
(int)(((long)0)))); 
BgL_wz00_3945 = 
PROCEDURE_REF(BgL_envz00_3943, 
(int)(((long)1))); 
{ /* Llib/weakhash.scm 225 */
obj_t BgL_vectorz00_5006;long BgL_kz00_5007;
if(
VECTORP(BgL_vecz00_3944))
{ /* Llib/weakhash.scm 225 */
BgL_vectorz00_5006 = BgL_vecz00_3944; }  else 
{ 
obj_t BgL_auxz00_7134;
BgL_auxz00_7134 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)8518)), BGl_string3359z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_vecz00_3944); 
FAILURE(BgL_auxz00_7134,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 225 */
obj_t BgL_tmpz00_7138;
{ /* Llib/weakhash.scm 225 */
obj_t BgL_aux2956z00_5008;
BgL_aux2956z00_5008 = 
CELL_REF(BgL_wz00_3945); 
if(
INTEGERP(BgL_aux2956z00_5008))
{ /* Llib/weakhash.scm 225 */
BgL_tmpz00_7138 = BgL_aux2956z00_5008
; }  else 
{ 
obj_t BgL_auxz00_7141;
BgL_auxz00_7141 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)8522)), BGl_string3359z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_aux2956z00_5008); 
FAILURE(BgL_auxz00_7141,BFALSE,BFALSE);} } 
BgL_kz00_5007 = 
(long)CINT(BgL_tmpz00_7138); } 
{ /* Llib/weakhash.scm 225 */
bool_t BgL_test3855z00_7146;
{ /* Llib/weakhash.scm 225 */
long BgL_tmpz00_7147;
BgL_tmpz00_7147 = 
VECTOR_LENGTH(BgL_vectorz00_5006); 
BgL_test3855z00_7146 = 
BOUND_CHECK(BgL_kz00_5007, BgL_tmpz00_7147); } 
if(BgL_test3855z00_7146)
{ /* Llib/weakhash.scm 225 */
VECTOR_SET(BgL_vectorz00_5006,BgL_kz00_5007,BgL_valz00_3947); }  else 
{ 
obj_t BgL_auxz00_7151;
BgL_auxz00_7151 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)8505)), BGl_string3331z00zz__weakhashz00, BgL_vectorz00_5006, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_5006)), 
(int)(BgL_kz00_5007)); 
FAILURE(BgL_auxz00_7151,BFALSE,BFALSE);} } } 
{ /* Llib/weakhash.scm 226 */
obj_t BgL_auxz00_5009;
{ /* Llib/weakhash.scm 225 */
obj_t BgL_tmpz00_7158;
{ /* Llib/weakhash.scm 226 */
obj_t BgL_aux2958z00_5010;
BgL_aux2958z00_5010 = 
CELL_REF(BgL_wz00_3945); 
if(
INTEGERP(BgL_aux2958z00_5010))
{ /* Llib/weakhash.scm 226 */
BgL_tmpz00_7158 = BgL_aux2958z00_5010
; }  else 
{ 
obj_t BgL_auxz00_7161;
BgL_auxz00_7161 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)8545)), BGl_string3359z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_aux2958z00_5010); 
FAILURE(BgL_auxz00_7161,BFALSE,BFALSE);} } 
BgL_auxz00_5009 = 
ADDFX(BgL_tmpz00_7158, 
BINT(((long)1))); } 
return 
CELL_SET(BgL_wz00_3945, BgL_auxz00_5009);} } } 

}



/* weak-hashtable->list */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2ze3listze3zz__weakhashz00(obj_t BgL_tablez00_54)
{
{ /* Llib/weakhash.scm 234 */
{ /* Llib/weakhash.scm 235 */
obj_t BgL_resz00_3959;
BgL_resz00_3959 = 
MAKE_CELL(BNIL); 
{ /* Llib/weakhash.scm 238 */
obj_t BgL_zc3z04anonymousza31434ze3z87_3951;
BgL_zc3z04anonymousza31434ze3z87_3951 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31434ze3ze5zz__weakhashz00, 
(int)(((long)2)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31434ze3z87_3951, 
(int)(((long)0)), 
((obj_t)BgL_resz00_3959)); 
BGl_traversezd2hashzd2zz__weakhashz00(BgL_tablez00_54, BgL_zc3z04anonymousza31434ze3z87_3951); } 
{ /* Llib/weakhash.scm 239 */
obj_t BgL_aux2960z00_4626;
BgL_aux2960z00_4626 = 
CELL_REF(BgL_resz00_3959); 
{ /* Llib/weakhash.scm 239 */
bool_t BgL_test3857z00_7174;
if(
PAIRP(BgL_aux2960z00_4626))
{ /* Llib/weakhash.scm 239 */
BgL_test3857z00_7174 = ((bool_t)1)
; }  else 
{ /* Llib/weakhash.scm 239 */
BgL_test3857z00_7174 = 
NULLP(BgL_aux2960z00_4626)
; } 
if(BgL_test3857z00_7174)
{ /* Llib/weakhash.scm 239 */
return BgL_aux2960z00_4626;}  else 
{ 
obj_t BgL_auxz00_7178;
BgL_auxz00_7178 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)9004)), BGl_string3360z00zz__weakhashz00, BGl_string3361z00zz__weakhashz00, BgL_aux2960z00_4626); 
FAILURE(BgL_auxz00_7178,BFALSE,BFALSE);} } } } } 

}



/* &weak-hashtable->list */
obj_t BGl_z62weakzd2hashtablezd2ze3listz81zz__weakhashz00(obj_t BgL_envz00_3952, obj_t BgL_tablez00_3953)
{
{ /* Llib/weakhash.scm 234 */
{ /* Llib/weakhash.scm 235 */
obj_t BgL_auxz00_7182;
if(
STRUCTP(BgL_tablez00_3953))
{ /* Llib/weakhash.scm 235 */
BgL_auxz00_7182 = BgL_tablez00_3953
; }  else 
{ 
obj_t BgL_auxz00_7185;
BgL_auxz00_7185 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)8898)), BGl_string3362z00zz__weakhashz00, BGl_string3358z00zz__weakhashz00, BgL_tablez00_3953); 
FAILURE(BgL_auxz00_7185,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2ze3listze3zz__weakhashz00(BgL_auxz00_7182);} } 

}



/* &<@anonymous:1434> */
obj_t BGl_z62zc3z04anonymousza31434ze3ze5zz__weakhashz00(obj_t BgL_envz00_3954, obj_t BgL_keyz00_3956, obj_t BgL_valz00_3957)
{
{ /* Llib/weakhash.scm 237 */
{ /* Llib/weakhash.scm 238 */
obj_t BgL_resz00_3955;
BgL_resz00_3955 = 
PROCEDURE_REF(BgL_envz00_3954, 
(int)(((long)0))); 
{ /* Llib/weakhash.scm 238 */
obj_t BgL_auxz00_5015;
BgL_auxz00_5015 = 
MAKE_YOUNG_PAIR(BgL_valz00_3957, 
CELL_REF(BgL_resz00_3955)); 
return 
CELL_SET(BgL_resz00_3955, BgL_auxz00_5015);} } } 

}



/* weak-hashtable-key-list */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(obj_t BgL_tablez00_55)
{
{ /* Llib/weakhash.scm 244 */
{ /* Llib/weakhash.scm 245 */
obj_t BgL_resz00_3969;
BgL_resz00_3969 = 
MAKE_CELL(BNIL); 
{ /* Llib/weakhash.scm 248 */
obj_t BgL_zc3z04anonymousza31436ze3z87_3961;
BgL_zc3z04anonymousza31436ze3z87_3961 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31436ze3ze5zz__weakhashz00, 
(int)(((long)2)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31436ze3z87_3961, 
(int)(((long)0)), 
((obj_t)BgL_resz00_3969)); 
BGl_traversezd2hashzd2zz__weakhashz00(BgL_tablez00_55, BgL_zc3z04anonymousza31436ze3z87_3961); } 
{ /* Llib/weakhash.scm 249 */
obj_t BgL_aux2964z00_4630;
BgL_aux2964z00_4630 = 
CELL_REF(BgL_resz00_3969); 
{ /* Llib/weakhash.scm 249 */
bool_t BgL_test3860z00_7200;
if(
PAIRP(BgL_aux2964z00_4630))
{ /* Llib/weakhash.scm 249 */
BgL_test3860z00_7200 = ((bool_t)1)
; }  else 
{ /* Llib/weakhash.scm 249 */
BgL_test3860z00_7200 = 
NULLP(BgL_aux2964z00_4630)
; } 
if(BgL_test3860z00_7200)
{ /* Llib/weakhash.scm 249 */
return BgL_aux2964z00_4630;}  else 
{ 
obj_t BgL_auxz00_7204;
BgL_auxz00_7204 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)9390)), BGl_string3363z00zz__weakhashz00, BGl_string3361z00zz__weakhashz00, BgL_aux2964z00_4630); 
FAILURE(BgL_auxz00_7204,BFALSE,BFALSE);} } } } } 

}



/* &weak-hashtable-key-list */
obj_t BGl_z62weakzd2hashtablezd2keyzd2listzb0zz__weakhashz00(obj_t BgL_envz00_3962, obj_t BgL_tablez00_3963)
{
{ /* Llib/weakhash.scm 244 */
{ /* Llib/weakhash.scm 245 */
obj_t BgL_auxz00_7208;
if(
STRUCTP(BgL_tablez00_3963))
{ /* Llib/weakhash.scm 245 */
BgL_auxz00_7208 = BgL_tablez00_3963
; }  else 
{ 
obj_t BgL_auxz00_7211;
BgL_auxz00_7211 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)9284)), BGl_string3364z00zz__weakhashz00, BGl_string3358z00zz__weakhashz00, BgL_tablez00_3963); 
FAILURE(BgL_auxz00_7211,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(BgL_auxz00_7208);} } 

}



/* &<@anonymous:1436> */
obj_t BGl_z62zc3z04anonymousza31436ze3ze5zz__weakhashz00(obj_t BgL_envz00_3964, obj_t BgL_keyz00_3966, obj_t BgL_valz00_3967)
{
{ /* Llib/weakhash.scm 247 */
{ /* Llib/weakhash.scm 248 */
obj_t BgL_resz00_3965;
BgL_resz00_3965 = 
PROCEDURE_REF(BgL_envz00_3964, 
(int)(((long)0))); 
{ /* Llib/weakhash.scm 248 */
obj_t BgL_auxz00_5020;
BgL_auxz00_5020 = 
MAKE_YOUNG_PAIR(BgL_keyz00_3966, 
CELL_REF(BgL_resz00_3965)); 
return 
CELL_SET(BgL_resz00_3965, BgL_auxz00_5020);} } } 

}



/* weak-hashtable-map */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2mapz00zz__weakhashz00(obj_t BgL_tablez00_57, obj_t BgL_funz00_58)
{
{ /* Llib/weakhash.scm 271 */
{ /* Llib/weakhash.scm 272 */
obj_t BgL_resz00_3981;
BgL_resz00_3981 = 
MAKE_CELL(BNIL); 
{ /* Llib/weakhash.scm 275 */
obj_t BgL_zc3z04anonymousza31449ze3z87_3971;
BgL_zc3z04anonymousza31449ze3z87_3971 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31449ze3ze5zz__weakhashz00, 
(int)(((long)2)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31449ze3z87_3971, 
(int)(((long)0)), BgL_funz00_58); 
PROCEDURE_SET(BgL_zc3z04anonymousza31449ze3z87_3971, 
(int)(((long)1)), 
((obj_t)BgL_resz00_3981)); 
BGl_traversezd2hashzd2zz__weakhashz00(BgL_tablez00_57, BgL_zc3z04anonymousza31449ze3z87_3971); } 
{ /* Llib/weakhash.scm 276 */
obj_t BgL_aux2968z00_4634;
BgL_aux2968z00_4634 = 
CELL_REF(BgL_resz00_3981); 
{ /* Llib/weakhash.scm 276 */
bool_t BgL_test3863z00_7228;
if(
PAIRP(BgL_aux2968z00_4634))
{ /* Llib/weakhash.scm 276 */
BgL_test3863z00_7228 = ((bool_t)1)
; }  else 
{ /* Llib/weakhash.scm 276 */
BgL_test3863z00_7228 = 
NULLP(BgL_aux2968z00_4634)
; } 
if(BgL_test3863z00_7228)
{ /* Llib/weakhash.scm 276 */
return BgL_aux2968z00_4634;}  else 
{ 
obj_t BgL_auxz00_7232;
BgL_auxz00_7232 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)10444)), BGl_string3365z00zz__weakhashz00, BGl_string3361z00zz__weakhashz00, BgL_aux2968z00_4634); 
FAILURE(BgL_auxz00_7232,BFALSE,BFALSE);} } } } } 

}



/* &weak-hashtable-map */
obj_t BGl_z62weakzd2hashtablezd2mapz62zz__weakhashz00(obj_t BgL_envz00_3972, obj_t BgL_tablez00_3973, obj_t BgL_funz00_3974)
{
{ /* Llib/weakhash.scm 271 */
{ /* Llib/weakhash.scm 272 */
obj_t BgL_auxz00_7243;obj_t BgL_auxz00_7236;
if(
PROCEDUREP(BgL_funz00_3974))
{ /* Llib/weakhash.scm 272 */
BgL_auxz00_7243 = BgL_funz00_3974
; }  else 
{ 
obj_t BgL_auxz00_7246;
BgL_auxz00_7246 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)10328)), BGl_string3366z00zz__weakhashz00, BGl_string3334z00zz__weakhashz00, BgL_funz00_3974); 
FAILURE(BgL_auxz00_7246,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_tablez00_3973))
{ /* Llib/weakhash.scm 272 */
BgL_auxz00_7236 = BgL_tablez00_3973
; }  else 
{ 
obj_t BgL_auxz00_7239;
BgL_auxz00_7239 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)10328)), BGl_string3366z00zz__weakhashz00, BGl_string3358z00zz__weakhashz00, BgL_tablez00_3973); 
FAILURE(BgL_auxz00_7239,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2mapz00zz__weakhashz00(BgL_auxz00_7236, BgL_auxz00_7243);} } 

}



/* &<@anonymous:1449> */
obj_t BGl_z62zc3z04anonymousza31449ze3ze5zz__weakhashz00(obj_t BgL_envz00_3975, obj_t BgL_keyz00_3978, obj_t BgL_valz00_3979)
{
{ /* Llib/weakhash.scm 274 */
{ /* Llib/weakhash.scm 275 */
obj_t BgL_funz00_3976;obj_t BgL_resz00_3977;
BgL_funz00_3976 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3975, 
(int)(((long)0)))); 
BgL_resz00_3977 = 
PROCEDURE_REF(BgL_envz00_3975, 
(int)(((long)1))); 
{ /* Llib/weakhash.scm 275 */
obj_t BgL_auxz00_5025;
{ /* Llib/weakhash.scm 275 */
obj_t BgL_arg1451z00_5026;
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3976, ((long)2)))
{ /* Llib/weakhash.scm 275 */
BgL_arg1451z00_5026 = 
PROCEDURE_ENTRY(BgL_funz00_3976)(BgL_funz00_3976, BgL_keyz00_3978, BgL_valz00_3979, BEOA); }  else 
{ /* Llib/weakhash.scm 275 */
FAILURE(BGl_string3367z00zz__weakhashz00,BGl_list3368z00zz__weakhashz00,BgL_funz00_3976);} 
BgL_auxz00_5025 = 
MAKE_YOUNG_PAIR(BgL_arg1451z00_5026, 
CELL_REF(BgL_resz00_3977)); } 
return 
CELL_SET(BgL_resz00_3977, BgL_auxz00_5025);} } } 

}



/* weak-hashtable-for-each */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(obj_t BgL_tablez00_59, obj_t BgL_funz00_60)
{
{ /* Llib/weakhash.scm 281 */
return 
BBOOL(
BGl_traversezd2hashzd2zz__weakhashz00(BgL_tablez00_59, BgL_funz00_60));} 

}



/* &weak-hashtable-for-each */
obj_t BGl_z62weakzd2hashtablezd2forzd2eachzb0zz__weakhashz00(obj_t BgL_envz00_3983, obj_t BgL_tablez00_3984, obj_t BgL_funz00_3985)
{
{ /* Llib/weakhash.scm 281 */
{ /* Llib/weakhash.scm 282 */
obj_t BgL_auxz00_7274;obj_t BgL_auxz00_7267;
if(
PROCEDUREP(BgL_funz00_3985))
{ /* Llib/weakhash.scm 282 */
BgL_auxz00_7274 = BgL_funz00_3985
; }  else 
{ 
obj_t BgL_auxz00_7277;
BgL_auxz00_7277 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)10739)), BGl_string3371z00zz__weakhashz00, BGl_string3334z00zz__weakhashz00, BgL_funz00_3985); 
FAILURE(BgL_auxz00_7277,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_tablez00_3984))
{ /* Llib/weakhash.scm 282 */
BgL_auxz00_7267 = BgL_tablez00_3984
; }  else 
{ 
obj_t BgL_auxz00_7270;
BgL_auxz00_7270 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)10739)), BGl_string3371z00zz__weakhashz00, BGl_string3358z00zz__weakhashz00, BgL_tablez00_3984); 
FAILURE(BgL_auxz00_7270,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(BgL_auxz00_7267, BgL_auxz00_7274);} } 

}



/* weak-hashtable-filter! */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00(obj_t BgL_tablez00_61, obj_t BgL_funz00_62)
{
{ /* Llib/weakhash.scm 287 */
{ /* Llib/weakhash.scm 288 */
obj_t BgL_bucketsz00_1472;
{ /* Llib/weakhash.scm 288 */
bool_t BgL_test3870z00_7282;
{ /* Llib/weakhash.scm 288 */
obj_t BgL_tmpz00_7283;
{ /* Llib/weakhash.scm 288 */
obj_t BgL_res2083z00_2748;
{ /* Llib/weakhash.scm 288 */
obj_t BgL_aux2980z00_4647;
BgL_aux2980z00_4647 = 
STRUCT_KEY(BgL_tablez00_61); 
if(
SYMBOLP(BgL_aux2980z00_4647))
{ /* Llib/weakhash.scm 288 */
BgL_res2083z00_2748 = BgL_aux2980z00_4647; }  else 
{ 
obj_t BgL_auxz00_7287;
BgL_auxz00_7287 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)11070)), BGl_string3372z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2980z00_4647); 
FAILURE(BgL_auxz00_7287,BFALSE,BFALSE);} } 
BgL_tmpz00_7283 = BgL_res2083z00_2748; } 
BgL_test3870z00_7282 = 
(BgL_tmpz00_7283==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3870z00_7282)
{ /* Llib/weakhash.scm 288 */
int BgL_tmpz00_7292;
BgL_tmpz00_7292 = 
(int)(((long)2)); 
BgL_bucketsz00_1472 = 
STRUCT_REF(BgL_tablez00_61, BgL_tmpz00_7292); }  else 
{ /* Llib/weakhash.scm 288 */
BgL_bucketsz00_1472 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_61); } } 
{ /* Llib/weakhash.scm 288 */
long BgL_bucketszd2lenzd2_1473;
{ /* Llib/weakhash.scm 289 */
obj_t BgL_vectorz00_2749;
if(
VECTORP(BgL_bucketsz00_1472))
{ /* Llib/weakhash.scm 289 */
BgL_vectorz00_2749 = BgL_bucketsz00_1472; }  else 
{ 
obj_t BgL_auxz00_7298;
BgL_auxz00_7298 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)11129)), BGl_string3372z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1472); 
FAILURE(BgL_auxz00_7298,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1473 = 
VECTOR_LENGTH(BgL_vectorz00_2749); } 
{ /* Llib/weakhash.scm 289 */

{ 
long BgL_iz00_1475;
{ /* Llib/weakhash.scm 290 */
bool_t BgL_tmpz00_7303;
BgL_iz00_1475 = ((long)0); 
BgL_zc3z04anonymousza31452ze3z87_1476:
if(
(BgL_iz00_1475<BgL_bucketszd2lenzd2_1473))
{ /* Llib/weakhash.scm 291 */
{ /* Llib/weakhash.scm 295 */
obj_t BgL_zc3z04anonymousza31455ze3z87_3986;
{ 
int BgL_tmpz00_7306;
BgL_tmpz00_7306 = 
(int)(((long)1)); 
BgL_zc3z04anonymousza31455ze3z87_3986 = 
MAKE_L_PROCEDURE(BGl_z62zc3z04anonymousza31455ze3ze5zz__weakhashz00, BgL_tmpz00_7306); } 
PROCEDURE_L_SET(BgL_zc3z04anonymousza31455ze3z87_3986, 
(int)(((long)0)), 
((obj_t)BgL_funz00_62)); 
BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_61, BgL_bucketsz00_1472, BgL_iz00_1475, BgL_zc3z04anonymousza31455ze3z87_3986); } 
{ 
long BgL_iz00_7313;
BgL_iz00_7313 = 
(BgL_iz00_1475+((long)1)); 
BgL_iz00_1475 = BgL_iz00_7313; 
goto BgL_zc3z04anonymousza31452ze3z87_1476;} }  else 
{ /* Llib/weakhash.scm 291 */
BgL_tmpz00_7303 = ((bool_t)0)
; } 
return 
BBOOL(BgL_tmpz00_7303);} } } } } } 

}



/* &weak-hashtable-filter! */
obj_t BGl_z62weakzd2hashtablezd2filterz12z70zz__weakhashz00(obj_t BgL_envz00_3987, obj_t BgL_tablez00_3988, obj_t BgL_funz00_3989)
{
{ /* Llib/weakhash.scm 287 */
{ /* Llib/weakhash.scm 288 */
obj_t BgL_auxz00_7323;obj_t BgL_auxz00_7316;
if(
PROCEDUREP(BgL_funz00_3989))
{ /* Llib/weakhash.scm 288 */
BgL_auxz00_7323 = BgL_funz00_3989
; }  else 
{ 
obj_t BgL_auxz00_7326;
BgL_auxz00_7326 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)11054)), BGl_string3373z00zz__weakhashz00, BGl_string3334z00zz__weakhashz00, BgL_funz00_3989); 
FAILURE(BgL_auxz00_7326,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_tablez00_3988))
{ /* Llib/weakhash.scm 288 */
BgL_auxz00_7316 = BgL_tablez00_3988
; }  else 
{ 
obj_t BgL_auxz00_7319;
BgL_auxz00_7319 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)11054)), BGl_string3373z00zz__weakhashz00, BGl_string3358z00zz__weakhashz00, BgL_tablez00_3988); 
FAILURE(BgL_auxz00_7319,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00(BgL_auxz00_7316, BgL_auxz00_7323);} } 

}



/* &<@anonymous:1455> */
obj_t BGl_z62zc3z04anonymousza31455ze3ze5zz__weakhashz00(obj_t BgL_envz00_3990, obj_t BgL_keyz00_3992, obj_t BgL_valz00_3993, obj_t BgL_bucketz00_3994)
{
{ /* Llib/weakhash.scm 294 */
{ /* Llib/weakhash.scm 295 */
obj_t BgL_funz00_3991;
BgL_funz00_3991 = 
PROCEDURE_L_REF(BgL_envz00_3990, 
(int)(((long)0))); 
{ /* Llib/weakhash.scm 295 */
bool_t BgL_test3876z00_7333;
{ /* Llib/weakhash.scm 295 */
obj_t BgL_funz00_5027;
if(
PROCEDUREP(BgL_funz00_3991))
{ /* Llib/weakhash.scm 295 */
BgL_funz00_5027 = BgL_funz00_3991; }  else 
{ 
obj_t BgL_auxz00_7336;
BgL_auxz00_7336 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)11283)), BGl_string3374z00zz__weakhashz00, BGl_string3334z00zz__weakhashz00, BgL_funz00_3991); 
FAILURE(BgL_auxz00_7336,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_5027, ((long)2)))
{ /* Llib/weakhash.scm 295 */
BgL_test3876z00_7333 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_5027)(BgL_funz00_3991, BgL_keyz00_3992, BgL_valz00_3993, BEOA))
; }  else 
{ /* Llib/weakhash.scm 295 */
FAILURE(BGl_string3375z00zz__weakhashz00,BGl_list3368z00zz__weakhashz00,BgL_funz00_5027);} } 
if(BgL_test3876z00_7333)
{ /* Llib/weakhash.scm 295 */
return BGl_keepgoingz00zz__weakhashz00;}  else 
{ /* Llib/weakhash.scm 295 */
return BGl_removez00zz__weakhashz00;} } } } 

}



/* weak-hashtable-clear! */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2clearz12z12zz__weakhashz00(obj_t BgL_tablez00_63)
{
{ /* Llib/weakhash.scm 303 */
return 
BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00(BgL_tablez00_63, BGl_proc3376z00zz__weakhashz00);} 

}



/* &weak-hashtable-clear! */
obj_t BGl_z62weakzd2hashtablezd2clearz12z70zz__weakhashz00(obj_t BgL_envz00_3996, obj_t BgL_tablez00_3997)
{
{ /* Llib/weakhash.scm 303 */
{ /* Llib/weakhash.scm 304 */
obj_t BgL_auxz00_7350;
if(
STRUCTP(BgL_tablez00_3997))
{ /* Llib/weakhash.scm 304 */
BgL_auxz00_7350 = BgL_tablez00_3997
; }  else 
{ 
obj_t BgL_auxz00_7353;
BgL_auxz00_7353 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)11655)), BGl_string3377z00zz__weakhashz00, BGl_string3358z00zz__weakhashz00, BgL_tablez00_3997); 
FAILURE(BgL_auxz00_7353,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2clearz12z12zz__weakhashz00(BgL_auxz00_7350);} } 

}



/* &<@anonymous:1459> */
obj_t BGl_z62zc3z04anonymousza31459ze3ze5zz__weakhashz00(obj_t BgL_envz00_3998, obj_t BgL_kz00_3999, obj_t BgL_vz00_4000)
{
{ /* Llib/weakhash.scm 304 */
return 
BBOOL(((bool_t)0));} 

}



/* weak-hashtable-contains? */
BGL_EXPORTED_DEF bool_t BGl_weakzd2hashtablezd2containszf3zf3zz__weakhashz00(obj_t BgL_tablez00_66, obj_t BgL_keyz00_67)
{
{ /* Llib/weakhash.scm 328 */
{ /* Llib/weakhash.scm 329 */
obj_t BgL_bucketsz00_1515;
{ /* Llib/weakhash.scm 329 */
bool_t BgL_test3880z00_7359;
{ /* Llib/weakhash.scm 329 */
obj_t BgL_tmpz00_7360;
{ /* Llib/weakhash.scm 329 */
obj_t BgL_res2086z00_2762;
{ /* Llib/weakhash.scm 329 */
obj_t BgL_aux2994z00_4662;
BgL_aux2994z00_4662 = 
STRUCT_KEY(BgL_tablez00_66); 
if(
SYMBOLP(BgL_aux2994z00_4662))
{ /* Llib/weakhash.scm 329 */
BgL_res2086z00_2762 = BgL_aux2994z00_4662; }  else 
{ 
obj_t BgL_auxz00_7364;
BgL_auxz00_7364 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)12892)), BGl_string3378z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2994z00_4662); 
FAILURE(BgL_auxz00_7364,BFALSE,BFALSE);} } 
BgL_tmpz00_7360 = BgL_res2086z00_2762; } 
BgL_test3880z00_7359 = 
(BgL_tmpz00_7360==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3880z00_7359)
{ /* Llib/weakhash.scm 329 */
int BgL_tmpz00_7369;
BgL_tmpz00_7369 = 
(int)(((long)2)); 
BgL_bucketsz00_1515 = 
STRUCT_REF(BgL_tablez00_66, BgL_tmpz00_7369); }  else 
{ /* Llib/weakhash.scm 329 */
BgL_bucketsz00_1515 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_66); } } 
{ /* Llib/weakhash.scm 329 */
long BgL_bucketzd2lenzd2_1516;
{ /* Llib/weakhash.scm 330 */
obj_t BgL_vectorz00_2763;
if(
VECTORP(BgL_bucketsz00_1515))
{ /* Llib/weakhash.scm 330 */
BgL_vectorz00_2763 = BgL_bucketsz00_1515; }  else 
{ 
obj_t BgL_auxz00_7375;
BgL_auxz00_7375 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)12950)), BGl_string3378z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1515); 
FAILURE(BgL_auxz00_7375,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1516 = 
VECTOR_LENGTH(BgL_vectorz00_2763); } 
{ /* Llib/weakhash.scm 330 */
long BgL_bucketzd2numzd2_1517;
{ /* Llib/weakhash.scm 331 */
long BgL_arg1475z00_1527;
{ /* Llib/weakhash.scm 331 */
long BgL_res2092z00_2779;
{ /* Llib/weakhash.scm 331 */
obj_t BgL_hashnz00_2764;
{ /* Llib/weakhash.scm 331 */
bool_t BgL_test3883z00_7380;
{ /* Llib/weakhash.scm 331 */
obj_t BgL_tmpz00_7381;
{ /* Llib/weakhash.scm 331 */
obj_t BgL_res2087z00_2770;
{ /* Llib/weakhash.scm 331 */
obj_t BgL_aux2998z00_4666;
BgL_aux2998z00_4666 = 
STRUCT_KEY(BgL_tablez00_66); 
if(
SYMBOLP(BgL_aux2998z00_4666))
{ /* Llib/weakhash.scm 331 */
BgL_res2087z00_2770 = BgL_aux2998z00_4666; }  else 
{ 
obj_t BgL_auxz00_7385;
BgL_auxz00_7385 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)12988)), BGl_string3378z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux2998z00_4666); 
FAILURE(BgL_auxz00_7385,BFALSE,BFALSE);} } 
BgL_tmpz00_7381 = BgL_res2087z00_2770; } 
BgL_test3883z00_7380 = 
(BgL_tmpz00_7381==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3883z00_7380)
{ /* Llib/weakhash.scm 331 */
int BgL_tmpz00_7390;
BgL_tmpz00_7390 = 
(int)(((long)4)); 
BgL_hashnz00_2764 = 
STRUCT_REF(BgL_tablez00_66, BgL_tmpz00_7390); }  else 
{ /* Llib/weakhash.scm 331 */
BgL_hashnz00_2764 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_66); } } 
if(
PROCEDUREP(BgL_hashnz00_2764))
{ /* Llib/weakhash.scm 331 */
obj_t BgL_arg1310z00_2766;
if(
PROCEDURE_CORRECT_ARITYP(BgL_hashnz00_2764, ((long)1)))
{ /* Llib/weakhash.scm 331 */
BgL_arg1310z00_2766 = 
PROCEDURE_ENTRY(BgL_hashnz00_2764)(BgL_hashnz00_2764, BgL_keyz00_67, BEOA); }  else 
{ /* Llib/weakhash.scm 331 */
FAILURE(BGl_string3379z00zz__weakhashz00,BGl_list3380z00zz__weakhashz00,BgL_hashnz00_2764);} 
{ /* Llib/weakhash.scm 331 */
long BgL_nz00_2772;
{ /* Llib/weakhash.scm 331 */
obj_t BgL_tmpz00_7403;
if(
INTEGERP(BgL_arg1310z00_2766))
{ /* Llib/weakhash.scm 331 */
BgL_tmpz00_7403 = BgL_arg1310z00_2766
; }  else 
{ 
obj_t BgL_auxz00_7406;
BgL_auxz00_7406 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)12988)), BGl_string3378z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1310z00_2766); 
FAILURE(BgL_auxz00_7406,BFALSE,BFALSE);} 
BgL_nz00_2772 = 
(long)CINT(BgL_tmpz00_7403); } 
if(
(BgL_nz00_2772<((long)0)))
{ /* Llib/weakhash.scm 331 */
BgL_res2092z00_2779 = 
NEG(BgL_nz00_2772); }  else 
{ /* Llib/weakhash.scm 331 */
BgL_res2092z00_2779 = BgL_nz00_2772; } } }  else 
{ /* Llib/weakhash.scm 331 */
BgL_res2092z00_2779 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_67); } } 
BgL_arg1475z00_1527 = BgL_res2092z00_2779; } 
{ /* Llib/weakhash.scm 331 */
long BgL_res2098z00_2798;
{ /* Llib/weakhash.scm 331 */
long BgL_n1z00_2780;long BgL_n2z00_2781;
BgL_n1z00_2780 = BgL_arg1475z00_1527; 
BgL_n2z00_2781 = BgL_bucketzd2lenzd2_1516; 
{ /* Llib/weakhash.scm 331 */
bool_t BgL_test3889z00_7415;
{ /* Llib/weakhash.scm 331 */
long BgL_arg1836z00_2783;
BgL_arg1836z00_2783 = 
(((BgL_n1z00_2780) | (BgL_n2z00_2781)) & -2147483648); 
BgL_test3889z00_7415 = 
(BgL_arg1836z00_2783==((long)0)); } 
if(BgL_test3889z00_7415)
{ /* Llib/weakhash.scm 331 */
int32_t BgL_arg1832z00_2784;
{ /* Llib/weakhash.scm 331 */
int32_t BgL_arg1833z00_2785;int32_t BgL_arg1835z00_2786;
{ /* Llib/weakhash.scm 331 */
int32_t BgL_res2094z00_2790;
BgL_res2094z00_2790 = 
(int32_t)(BgL_n1z00_2780); 
BgL_arg1833z00_2785 = BgL_res2094z00_2790; } 
{ /* Llib/weakhash.scm 331 */
int32_t BgL_res2095z00_2792;
BgL_res2095z00_2792 = 
(int32_t)(BgL_n2z00_2781); 
BgL_arg1835z00_2786 = BgL_res2095z00_2792; } 
BgL_arg1832z00_2784 = 
(BgL_arg1833z00_2785%BgL_arg1835z00_2786); } 
{ /* Llib/weakhash.scm 331 */
long BgL_res2097z00_2797;
{ /* Llib/weakhash.scm 331 */
long BgL_arg1940z00_2794;
BgL_arg1940z00_2794 = 
(long)(BgL_arg1832z00_2784); 
{ /* Llib/weakhash.scm 331 */
long BgL_res2096z00_2796;
BgL_res2096z00_2796 = 
(long)(BgL_arg1940z00_2794); 
BgL_res2097z00_2797 = BgL_res2096z00_2796; } } 
BgL_res2098z00_2798 = BgL_res2097z00_2797; } }  else 
{ /* Llib/weakhash.scm 331 */
BgL_res2098z00_2798 = 
(BgL_n1z00_2780%BgL_n2z00_2781); } } } 
BgL_bucketzd2numzd2_1517 = BgL_res2098z00_2798; } } 
{ /* Llib/weakhash.scm 331 */
obj_t BgL_retz00_1518;
{ /* Llib/weakhash.scm 334 */
obj_t BgL_zc3z04anonymousza31473ze3z87_4001;
{ 
int BgL_tmpz00_7424;
BgL_tmpz00_7424 = 
(int)(((long)2)); 
BgL_zc3z04anonymousza31473ze3z87_4001 = 
MAKE_L_PROCEDURE(BGl_z62zc3z04anonymousza31473ze3ze5zz__weakhashz00, BgL_tmpz00_7424); } 
PROCEDURE_L_SET(BgL_zc3z04anonymousza31473ze3z87_4001, 
(int)(((long)0)), BgL_tablez00_66); 
PROCEDURE_L_SET(BgL_zc3z04anonymousza31473ze3z87_4001, 
(int)(((long)1)), BgL_keyz00_67); 
BgL_retz00_1518 = 
BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_66, BgL_bucketsz00_1515, BgL_bucketzd2numzd2_1517, BgL_zc3z04anonymousza31473ze3z87_4001); } 
{ /* Llib/weakhash.scm 332 */

if(
(BgL_retz00_1518==BGl_keepgoingz00zz__weakhashz00))
{ /* Llib/weakhash.scm 337 */
return ((bool_t)0);}  else 
{ /* Llib/weakhash.scm 337 */
return ((bool_t)1);} } } } } } } 

}



/* &weak-hashtable-contains? */
obj_t BGl_z62weakzd2hashtablezd2containszf3z91zz__weakhashz00(obj_t BgL_envz00_4002, obj_t BgL_tablez00_4003, obj_t BgL_keyz00_4004)
{
{ /* Llib/weakhash.scm 328 */
{ /* Llib/weakhash.scm 329 */
bool_t BgL_tmpz00_7434;
{ /* Llib/weakhash.scm 329 */
obj_t BgL_auxz00_7435;
if(
STRUCTP(BgL_tablez00_4003))
{ /* Llib/weakhash.scm 329 */
BgL_auxz00_7435 = BgL_tablez00_4003
; }  else 
{ 
obj_t BgL_auxz00_7438;
BgL_auxz00_7438 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)12876)), BGl_string3383z00zz__weakhashz00, BGl_string3358z00zz__weakhashz00, BgL_tablez00_4003); 
FAILURE(BgL_auxz00_7438,BFALSE,BFALSE);} 
BgL_tmpz00_7434 = 
BGl_weakzd2hashtablezd2containszf3zf3zz__weakhashz00(BgL_auxz00_7435, BgL_keyz00_4004); } 
return 
BBOOL(BgL_tmpz00_7434);} } 

}



/* &<@anonymous:1473> */
obj_t BGl_z62zc3z04anonymousza31473ze3ze5zz__weakhashz00(obj_t BgL_envz00_4005, obj_t BgL_bkeyz00_4008, obj_t BgL_valz00_4009, obj_t BgL_bucketz00_4010)
{
{ /* Llib/weakhash.scm 333 */
{ /* Llib/weakhash.scm 334 */
obj_t BgL_tablez00_4006;obj_t BgL_keyz00_4007;
BgL_tablez00_4006 = 
((obj_t)
PROCEDURE_L_REF(BgL_envz00_4005, 
(int)(((long)0)))); 
BgL_keyz00_4007 = 
PROCEDURE_L_REF(BgL_envz00_4005, 
(int)(((long)1))); 
{ /* Llib/weakhash.scm 334 */
bool_t BgL_test3892z00_7449;
{ /* Llib/weakhash.scm 334 */
obj_t BgL_eqtz00_5028;
{ /* Llib/weakhash.scm 334 */
bool_t BgL_test3893z00_7450;
{ /* Llib/weakhash.scm 334 */
obj_t BgL_tmpz00_7451;
{ /* Llib/weakhash.scm 334 */
obj_t BgL_res2099z00_5029;
{ /* Llib/weakhash.scm 334 */
obj_t BgL_aux3006z00_5030;
BgL_aux3006z00_5030 = 
STRUCT_KEY(BgL_tablez00_4006); 
if(
SYMBOLP(BgL_aux3006z00_5030))
{ /* Llib/weakhash.scm 334 */
BgL_res2099z00_5029 = BgL_aux3006z00_5030; }  else 
{ 
obj_t BgL_auxz00_7455;
BgL_auxz00_7455 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)13128)), BGl_string3384z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3006z00_5030); 
FAILURE(BgL_auxz00_7455,BFALSE,BFALSE);} } 
BgL_tmpz00_7451 = BgL_res2099z00_5029; } 
BgL_test3893z00_7450 = 
(BgL_tmpz00_7451==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3893z00_7450)
{ /* Llib/weakhash.scm 334 */
int BgL_tmpz00_7460;
BgL_tmpz00_7460 = 
(int)(((long)3)); 
BgL_eqtz00_5028 = 
STRUCT_REF(BgL_tablez00_4006, BgL_tmpz00_7460); }  else 
{ /* Llib/weakhash.scm 334 */
BgL_eqtz00_5028 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_4006); } } 
if(
PROCEDUREP(BgL_eqtz00_5028))
{ /* Llib/weakhash.scm 334 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_eqtz00_5028, ((long)2)))
{ /* Llib/weakhash.scm 334 */
BgL_test3892z00_7449 = 
CBOOL(
PROCEDURE_ENTRY(BgL_eqtz00_5028)(BgL_eqtz00_5028, BgL_keyz00_4007, BgL_bkeyz00_4008, BEOA))
; }  else 
{ /* Llib/weakhash.scm 334 */
FAILURE(BGl_string3385z00zz__weakhashz00,BGl_list3386z00zz__weakhashz00,BgL_eqtz00_5028);} }  else 
{ /* Llib/weakhash.scm 334 */
if(
(BgL_keyz00_4007==BgL_bkeyz00_4008))
{ /* Llib/weakhash.scm 334 */
BgL_test3892z00_7449 = ((bool_t)1)
; }  else 
{ /* Llib/weakhash.scm 334 */
if(
STRINGP(BgL_keyz00_4007))
{ /* Llib/weakhash.scm 334 */
if(
STRINGP(BgL_bkeyz00_4008))
{ /* Llib/weakhash.scm 334 */
bool_t BgL_res2107z00_5031;
{ /* Llib/weakhash.scm 334 */
long BgL_l1z00_5032;
BgL_l1z00_5032 = 
STRING_LENGTH(BgL_keyz00_4007); 
if(
(BgL_l1z00_5032==
STRING_LENGTH(BgL_bkeyz00_4008)))
{ /* Llib/weakhash.scm 334 */
int BgL_arg1721z00_5033;
{ /* Llib/weakhash.scm 334 */
char * BgL_auxz00_7487;char * BgL_tmpz00_7485;
BgL_auxz00_7487 = 
BSTRING_TO_STRING(BgL_bkeyz00_4008); 
BgL_tmpz00_7485 = 
BSTRING_TO_STRING(BgL_keyz00_4007); 
BgL_arg1721z00_5033 = 
memcmp(BgL_tmpz00_7485, BgL_auxz00_7487, BgL_l1z00_5032); } 
BgL_res2107z00_5031 = 
(
(long)(BgL_arg1721z00_5033)==((long)0)); }  else 
{ /* Llib/weakhash.scm 334 */
BgL_res2107z00_5031 = ((bool_t)0); } } 
BgL_test3892z00_7449 = BgL_res2107z00_5031; }  else 
{ /* Llib/weakhash.scm 334 */
BgL_test3892z00_7449 = ((bool_t)0)
; } }  else 
{ /* Llib/weakhash.scm 334 */
BgL_test3892z00_7449 = ((bool_t)0)
; } } } } 
if(BgL_test3892z00_7449)
{ /* Llib/weakhash.scm 334 */
return BTRUE;}  else 
{ /* Llib/weakhash.scm 334 */
return BGl_keepgoingz00zz__weakhashz00;} } } } 

}



/* weak-hashtable-get */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2getz00zz__weakhashz00(obj_t BgL_tablez00_68, obj_t BgL_keyz00_69)
{
{ /* Llib/weakhash.scm 342 */
{ /* Llib/weakhash.scm 343 */
obj_t BgL_bucketsz00_1528;
{ /* Llib/weakhash.scm 343 */
bool_t BgL_test3901z00_7492;
{ /* Llib/weakhash.scm 343 */
obj_t BgL_tmpz00_7493;
{ /* Llib/weakhash.scm 343 */
obj_t BgL_res2108z00_2831;
{ /* Llib/weakhash.scm 343 */
obj_t BgL_aux3010z00_4680;
BgL_aux3010z00_4680 = 
STRUCT_KEY(BgL_tablez00_68); 
if(
SYMBOLP(BgL_aux3010z00_4680))
{ /* Llib/weakhash.scm 343 */
BgL_res2108z00_2831 = BgL_aux3010z00_4680; }  else 
{ 
obj_t BgL_auxz00_7497;
BgL_auxz00_7497 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)13518)), BGl_string3391z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3010z00_4680); 
FAILURE(BgL_auxz00_7497,BFALSE,BFALSE);} } 
BgL_tmpz00_7493 = BgL_res2108z00_2831; } 
BgL_test3901z00_7492 = 
(BgL_tmpz00_7493==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3901z00_7492)
{ /* Llib/weakhash.scm 343 */
int BgL_tmpz00_7502;
BgL_tmpz00_7502 = 
(int)(((long)2)); 
BgL_bucketsz00_1528 = 
STRUCT_REF(BgL_tablez00_68, BgL_tmpz00_7502); }  else 
{ /* Llib/weakhash.scm 343 */
BgL_bucketsz00_1528 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_68); } } 
{ /* Llib/weakhash.scm 343 */
long BgL_bucketzd2lenzd2_1529;
{ /* Llib/weakhash.scm 344 */
obj_t BgL_vectorz00_2832;
if(
VECTORP(BgL_bucketsz00_1528))
{ /* Llib/weakhash.scm 344 */
BgL_vectorz00_2832 = BgL_bucketsz00_1528; }  else 
{ 
obj_t BgL_auxz00_7508;
BgL_auxz00_7508 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)13576)), BGl_string3391z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1528); 
FAILURE(BgL_auxz00_7508,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1529 = 
VECTOR_LENGTH(BgL_vectorz00_2832); } 
{ /* Llib/weakhash.scm 344 */
long BgL_bucketzd2numzd2_1530;
{ /* Llib/weakhash.scm 345 */
long BgL_arg1480z00_1540;
{ /* Llib/weakhash.scm 345 */
long BgL_res2114z00_2848;
{ /* Llib/weakhash.scm 345 */
obj_t BgL_hashnz00_2833;
{ /* Llib/weakhash.scm 345 */
bool_t BgL_test3904z00_7513;
{ /* Llib/weakhash.scm 345 */
obj_t BgL_tmpz00_7514;
{ /* Llib/weakhash.scm 345 */
obj_t BgL_res2109z00_2839;
{ /* Llib/weakhash.scm 345 */
obj_t BgL_aux3014z00_4684;
BgL_aux3014z00_4684 = 
STRUCT_KEY(BgL_tablez00_68); 
if(
SYMBOLP(BgL_aux3014z00_4684))
{ /* Llib/weakhash.scm 345 */
BgL_res2109z00_2839 = BgL_aux3014z00_4684; }  else 
{ 
obj_t BgL_auxz00_7518;
BgL_auxz00_7518 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)13614)), BGl_string3391z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3014z00_4684); 
FAILURE(BgL_auxz00_7518,BFALSE,BFALSE);} } 
BgL_tmpz00_7514 = BgL_res2109z00_2839; } 
BgL_test3904z00_7513 = 
(BgL_tmpz00_7514==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3904z00_7513)
{ /* Llib/weakhash.scm 345 */
int BgL_tmpz00_7523;
BgL_tmpz00_7523 = 
(int)(((long)4)); 
BgL_hashnz00_2833 = 
STRUCT_REF(BgL_tablez00_68, BgL_tmpz00_7523); }  else 
{ /* Llib/weakhash.scm 345 */
BgL_hashnz00_2833 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_68); } } 
if(
PROCEDUREP(BgL_hashnz00_2833))
{ /* Llib/weakhash.scm 345 */
obj_t BgL_arg1310z00_2835;
if(
PROCEDURE_CORRECT_ARITYP(BgL_hashnz00_2833, ((long)1)))
{ /* Llib/weakhash.scm 345 */
BgL_arg1310z00_2835 = 
PROCEDURE_ENTRY(BgL_hashnz00_2833)(BgL_hashnz00_2833, BgL_keyz00_69, BEOA); }  else 
{ /* Llib/weakhash.scm 345 */
FAILURE(BGl_string3392z00zz__weakhashz00,BGl_list3380z00zz__weakhashz00,BgL_hashnz00_2833);} 
{ /* Llib/weakhash.scm 345 */
long BgL_nz00_2841;
{ /* Llib/weakhash.scm 345 */
obj_t BgL_tmpz00_7536;
if(
INTEGERP(BgL_arg1310z00_2835))
{ /* Llib/weakhash.scm 345 */
BgL_tmpz00_7536 = BgL_arg1310z00_2835
; }  else 
{ 
obj_t BgL_auxz00_7539;
BgL_auxz00_7539 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)13614)), BGl_string3391z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1310z00_2835); 
FAILURE(BgL_auxz00_7539,BFALSE,BFALSE);} 
BgL_nz00_2841 = 
(long)CINT(BgL_tmpz00_7536); } 
if(
(BgL_nz00_2841<((long)0)))
{ /* Llib/weakhash.scm 345 */
BgL_res2114z00_2848 = 
NEG(BgL_nz00_2841); }  else 
{ /* Llib/weakhash.scm 345 */
BgL_res2114z00_2848 = BgL_nz00_2841; } } }  else 
{ /* Llib/weakhash.scm 345 */
BgL_res2114z00_2848 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_69); } } 
BgL_arg1480z00_1540 = BgL_res2114z00_2848; } 
{ /* Llib/weakhash.scm 345 */
long BgL_res2120z00_2867;
{ /* Llib/weakhash.scm 345 */
long BgL_n1z00_2849;long BgL_n2z00_2850;
BgL_n1z00_2849 = BgL_arg1480z00_1540; 
BgL_n2z00_2850 = BgL_bucketzd2lenzd2_1529; 
{ /* Llib/weakhash.scm 345 */
bool_t BgL_test3910z00_7548;
{ /* Llib/weakhash.scm 345 */
long BgL_arg1836z00_2852;
BgL_arg1836z00_2852 = 
(((BgL_n1z00_2849) | (BgL_n2z00_2850)) & -2147483648); 
BgL_test3910z00_7548 = 
(BgL_arg1836z00_2852==((long)0)); } 
if(BgL_test3910z00_7548)
{ /* Llib/weakhash.scm 345 */
int32_t BgL_arg1832z00_2853;
{ /* Llib/weakhash.scm 345 */
int32_t BgL_arg1833z00_2854;int32_t BgL_arg1835z00_2855;
{ /* Llib/weakhash.scm 345 */
int32_t BgL_res2116z00_2859;
BgL_res2116z00_2859 = 
(int32_t)(BgL_n1z00_2849); 
BgL_arg1833z00_2854 = BgL_res2116z00_2859; } 
{ /* Llib/weakhash.scm 345 */
int32_t BgL_res2117z00_2861;
BgL_res2117z00_2861 = 
(int32_t)(BgL_n2z00_2850); 
BgL_arg1835z00_2855 = BgL_res2117z00_2861; } 
BgL_arg1832z00_2853 = 
(BgL_arg1833z00_2854%BgL_arg1835z00_2855); } 
{ /* Llib/weakhash.scm 345 */
long BgL_res2119z00_2866;
{ /* Llib/weakhash.scm 345 */
long BgL_arg1940z00_2863;
BgL_arg1940z00_2863 = 
(long)(BgL_arg1832z00_2853); 
{ /* Llib/weakhash.scm 345 */
long BgL_res2118z00_2865;
BgL_res2118z00_2865 = 
(long)(BgL_arg1940z00_2863); 
BgL_res2119z00_2866 = BgL_res2118z00_2865; } } 
BgL_res2120z00_2867 = BgL_res2119z00_2866; } }  else 
{ /* Llib/weakhash.scm 345 */
BgL_res2120z00_2867 = 
(BgL_n1z00_2849%BgL_n2z00_2850); } } } 
BgL_bucketzd2numzd2_1530 = BgL_res2120z00_2867; } } 
{ /* Llib/weakhash.scm 345 */
obj_t BgL_retz00_1531;
{ /* Llib/weakhash.scm 348 */
obj_t BgL_zc3z04anonymousza31478ze3z87_4011;
{ 
int BgL_tmpz00_7557;
BgL_tmpz00_7557 = 
(int)(((long)2)); 
BgL_zc3z04anonymousza31478ze3z87_4011 = 
MAKE_L_PROCEDURE(BGl_z62zc3z04anonymousza31478ze3ze5zz__weakhashz00, BgL_tmpz00_7557); } 
PROCEDURE_L_SET(BgL_zc3z04anonymousza31478ze3z87_4011, 
(int)(((long)0)), BgL_tablez00_68); 
PROCEDURE_L_SET(BgL_zc3z04anonymousza31478ze3z87_4011, 
(int)(((long)1)), BgL_keyz00_69); 
BgL_retz00_1531 = 
BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_68, BgL_bucketsz00_1528, BgL_bucketzd2numzd2_1530, BgL_zc3z04anonymousza31478ze3z87_4011); } 
{ /* Llib/weakhash.scm 346 */

if(
(BgL_retz00_1531==BGl_keepgoingz00zz__weakhashz00))
{ /* Llib/weakhash.scm 351 */
return BFALSE;}  else 
{ /* Llib/weakhash.scm 351 */
return BgL_retz00_1531;} } } } } } } 

}



/* &weak-hashtable-get */
obj_t BGl_z62weakzd2hashtablezd2getz62zz__weakhashz00(obj_t BgL_envz00_4012, obj_t BgL_tablez00_4013, obj_t BgL_keyz00_4014)
{
{ /* Llib/weakhash.scm 342 */
{ /* Llib/weakhash.scm 343 */
obj_t BgL_auxz00_7567;
if(
STRUCTP(BgL_tablez00_4013))
{ /* Llib/weakhash.scm 343 */
BgL_auxz00_7567 = BgL_tablez00_4013
; }  else 
{ 
obj_t BgL_auxz00_7570;
BgL_auxz00_7570 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)13502)), BGl_string3393z00zz__weakhashz00, BGl_string3358z00zz__weakhashz00, BgL_tablez00_4013); 
FAILURE(BgL_auxz00_7570,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2getz00zz__weakhashz00(BgL_auxz00_7567, BgL_keyz00_4014);} } 

}



/* &<@anonymous:1478> */
obj_t BGl_z62zc3z04anonymousza31478ze3ze5zz__weakhashz00(obj_t BgL_envz00_4015, obj_t BgL_bkeyz00_4018, obj_t BgL_valz00_4019, obj_t BgL_bucketz00_4020)
{
{ /* Llib/weakhash.scm 347 */
{ /* Llib/weakhash.scm 348 */
obj_t BgL_tablez00_4016;obj_t BgL_keyz00_4017;
BgL_tablez00_4016 = 
((obj_t)
PROCEDURE_L_REF(BgL_envz00_4015, 
(int)(((long)0)))); 
BgL_keyz00_4017 = 
PROCEDURE_L_REF(BgL_envz00_4015, 
(int)(((long)1))); 
{ /* Llib/weakhash.scm 348 */
bool_t BgL_test3913z00_7580;
{ /* Llib/weakhash.scm 348 */
obj_t BgL_eqtz00_5034;
{ /* Llib/weakhash.scm 348 */
bool_t BgL_test3914z00_7581;
{ /* Llib/weakhash.scm 348 */
obj_t BgL_tmpz00_7582;
{ /* Llib/weakhash.scm 348 */
obj_t BgL_res2121z00_5035;
{ /* Llib/weakhash.scm 348 */
obj_t BgL_aux3022z00_5036;
BgL_aux3022z00_5036 = 
STRUCT_KEY(BgL_tablez00_4016); 
if(
SYMBOLP(BgL_aux3022z00_5036))
{ /* Llib/weakhash.scm 348 */
BgL_res2121z00_5035 = BgL_aux3022z00_5036; }  else 
{ 
obj_t BgL_auxz00_7586;
BgL_auxz00_7586 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)13754)), BGl_string3394z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3022z00_5036); 
FAILURE(BgL_auxz00_7586,BFALSE,BFALSE);} } 
BgL_tmpz00_7582 = BgL_res2121z00_5035; } 
BgL_test3914z00_7581 = 
(BgL_tmpz00_7582==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3914z00_7581)
{ /* Llib/weakhash.scm 348 */
int BgL_tmpz00_7591;
BgL_tmpz00_7591 = 
(int)(((long)3)); 
BgL_eqtz00_5034 = 
STRUCT_REF(BgL_tablez00_4016, BgL_tmpz00_7591); }  else 
{ /* Llib/weakhash.scm 348 */
BgL_eqtz00_5034 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_4016); } } 
if(
PROCEDUREP(BgL_eqtz00_5034))
{ /* Llib/weakhash.scm 348 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_eqtz00_5034, ((long)2)))
{ /* Llib/weakhash.scm 348 */
BgL_test3913z00_7580 = 
CBOOL(
PROCEDURE_ENTRY(BgL_eqtz00_5034)(BgL_eqtz00_5034, BgL_keyz00_4017, BgL_bkeyz00_4018, BEOA))
; }  else 
{ /* Llib/weakhash.scm 348 */
FAILURE(BGl_string3395z00zz__weakhashz00,BGl_list3386z00zz__weakhashz00,BgL_eqtz00_5034);} }  else 
{ /* Llib/weakhash.scm 348 */
if(
(BgL_keyz00_4017==BgL_bkeyz00_4018))
{ /* Llib/weakhash.scm 348 */
BgL_test3913z00_7580 = ((bool_t)1)
; }  else 
{ /* Llib/weakhash.scm 348 */
if(
STRINGP(BgL_keyz00_4017))
{ /* Llib/weakhash.scm 348 */
if(
STRINGP(BgL_bkeyz00_4018))
{ /* Llib/weakhash.scm 348 */
bool_t BgL_res2129z00_5037;
{ /* Llib/weakhash.scm 348 */
long BgL_l1z00_5038;
BgL_l1z00_5038 = 
STRING_LENGTH(BgL_keyz00_4017); 
if(
(BgL_l1z00_5038==
STRING_LENGTH(BgL_bkeyz00_4018)))
{ /* Llib/weakhash.scm 348 */
int BgL_arg1721z00_5039;
{ /* Llib/weakhash.scm 348 */
char * BgL_auxz00_7618;char * BgL_tmpz00_7616;
BgL_auxz00_7618 = 
BSTRING_TO_STRING(BgL_bkeyz00_4018); 
BgL_tmpz00_7616 = 
BSTRING_TO_STRING(BgL_keyz00_4017); 
BgL_arg1721z00_5039 = 
memcmp(BgL_tmpz00_7616, BgL_auxz00_7618, BgL_l1z00_5038); } 
BgL_res2129z00_5037 = 
(
(long)(BgL_arg1721z00_5039)==((long)0)); }  else 
{ /* Llib/weakhash.scm 348 */
BgL_res2129z00_5037 = ((bool_t)0); } } 
BgL_test3913z00_7580 = BgL_res2129z00_5037; }  else 
{ /* Llib/weakhash.scm 348 */
BgL_test3913z00_7580 = ((bool_t)0)
; } }  else 
{ /* Llib/weakhash.scm 348 */
BgL_test3913z00_7580 = ((bool_t)0)
; } } } } 
if(BgL_test3913z00_7580)
{ /* Llib/weakhash.scm 348 */
return BgL_valz00_4019;}  else 
{ /* Llib/weakhash.scm 348 */
return BGl_keepgoingz00zz__weakhashz00;} } } } 

}



/* weak-hashtable-put! */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2putz12z12zz__weakhashz00(obj_t BgL_tablez00_72, obj_t BgL_keyz00_73, obj_t BgL_objz00_74)
{
{ /* Llib/weakhash.scm 375 */
{ /* Llib/weakhash.scm 376 */
obj_t BgL_bucketsz00_1555;
{ /* Llib/weakhash.scm 376 */
bool_t BgL_test3922z00_7623;
{ /* Llib/weakhash.scm 376 */
obj_t BgL_tmpz00_7624;
{ /* Llib/weakhash.scm 376 */
obj_t BgL_res2130z00_2900;
{ /* Llib/weakhash.scm 376 */
obj_t BgL_aux3026z00_4698;
BgL_aux3026z00_4698 = 
STRUCT_KEY(BgL_tablez00_72); 
if(
SYMBOLP(BgL_aux3026z00_4698))
{ /* Llib/weakhash.scm 376 */
BgL_res2130z00_2900 = BgL_aux3026z00_4698; }  else 
{ 
obj_t BgL_auxz00_7628;
BgL_auxz00_7628 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)14834)), BGl_string3396z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3026z00_4698); 
FAILURE(BgL_auxz00_7628,BFALSE,BFALSE);} } 
BgL_tmpz00_7624 = BgL_res2130z00_2900; } 
BgL_test3922z00_7623 = 
(BgL_tmpz00_7624==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3922z00_7623)
{ /* Llib/weakhash.scm 376 */
int BgL_tmpz00_7633;
BgL_tmpz00_7633 = 
(int)(((long)2)); 
BgL_bucketsz00_1555 = 
STRUCT_REF(BgL_tablez00_72, BgL_tmpz00_7633); }  else 
{ /* Llib/weakhash.scm 376 */
BgL_bucketsz00_1555 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_72); } } 
{ /* Llib/weakhash.scm 376 */
long BgL_bucketzd2lenzd2_1556;
{ /* Llib/weakhash.scm 377 */
obj_t BgL_vectorz00_2901;
if(
VECTORP(BgL_bucketsz00_1555))
{ /* Llib/weakhash.scm 377 */
BgL_vectorz00_2901 = BgL_bucketsz00_1555; }  else 
{ 
obj_t BgL_auxz00_7639;
BgL_auxz00_7639 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)14892)), BGl_string3396z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1555); 
FAILURE(BgL_auxz00_7639,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1556 = 
VECTOR_LENGTH(BgL_vectorz00_2901); } 
{ /* Llib/weakhash.scm 377 */
long BgL_bucketzd2numzd2_1557;
{ /* Llib/weakhash.scm 378 */
long BgL_arg1508z00_1584;
{ /* Llib/weakhash.scm 378 */
long BgL_res2136z00_2917;
{ /* Llib/weakhash.scm 378 */
obj_t BgL_hashnz00_2902;
{ /* Llib/weakhash.scm 378 */
bool_t BgL_test3925z00_7644;
{ /* Llib/weakhash.scm 378 */
obj_t BgL_tmpz00_7645;
{ /* Llib/weakhash.scm 378 */
obj_t BgL_res2131z00_2908;
{ /* Llib/weakhash.scm 378 */
obj_t BgL_aux3030z00_4702;
BgL_aux3030z00_4702 = 
STRUCT_KEY(BgL_tablez00_72); 
if(
SYMBOLP(BgL_aux3030z00_4702))
{ /* Llib/weakhash.scm 378 */
BgL_res2131z00_2908 = BgL_aux3030z00_4702; }  else 
{ 
obj_t BgL_auxz00_7649;
BgL_auxz00_7649 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)14930)), BGl_string3396z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3030z00_4702); 
FAILURE(BgL_auxz00_7649,BFALSE,BFALSE);} } 
BgL_tmpz00_7645 = BgL_res2131z00_2908; } 
BgL_test3925z00_7644 = 
(BgL_tmpz00_7645==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3925z00_7644)
{ /* Llib/weakhash.scm 378 */
int BgL_tmpz00_7654;
BgL_tmpz00_7654 = 
(int)(((long)4)); 
BgL_hashnz00_2902 = 
STRUCT_REF(BgL_tablez00_72, BgL_tmpz00_7654); }  else 
{ /* Llib/weakhash.scm 378 */
BgL_hashnz00_2902 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_72); } } 
if(
PROCEDUREP(BgL_hashnz00_2902))
{ /* Llib/weakhash.scm 378 */
obj_t BgL_arg1310z00_2904;
if(
PROCEDURE_CORRECT_ARITYP(BgL_hashnz00_2902, ((long)1)))
{ /* Llib/weakhash.scm 378 */
BgL_arg1310z00_2904 = 
PROCEDURE_ENTRY(BgL_hashnz00_2902)(BgL_hashnz00_2902, BgL_keyz00_73, BEOA); }  else 
{ /* Llib/weakhash.scm 378 */
FAILURE(BGl_string3397z00zz__weakhashz00,BGl_list3380z00zz__weakhashz00,BgL_hashnz00_2902);} 
{ /* Llib/weakhash.scm 378 */
long BgL_nz00_2910;
{ /* Llib/weakhash.scm 378 */
obj_t BgL_tmpz00_7667;
if(
INTEGERP(BgL_arg1310z00_2904))
{ /* Llib/weakhash.scm 378 */
BgL_tmpz00_7667 = BgL_arg1310z00_2904
; }  else 
{ 
obj_t BgL_auxz00_7670;
BgL_auxz00_7670 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)14930)), BGl_string3396z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1310z00_2904); 
FAILURE(BgL_auxz00_7670,BFALSE,BFALSE);} 
BgL_nz00_2910 = 
(long)CINT(BgL_tmpz00_7667); } 
if(
(BgL_nz00_2910<((long)0)))
{ /* Llib/weakhash.scm 378 */
BgL_res2136z00_2917 = 
NEG(BgL_nz00_2910); }  else 
{ /* Llib/weakhash.scm 378 */
BgL_res2136z00_2917 = BgL_nz00_2910; } } }  else 
{ /* Llib/weakhash.scm 378 */
BgL_res2136z00_2917 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_73); } } 
BgL_arg1508z00_1584 = BgL_res2136z00_2917; } 
{ /* Llib/weakhash.scm 378 */
long BgL_res2142z00_2936;
{ /* Llib/weakhash.scm 378 */
long BgL_n1z00_2918;long BgL_n2z00_2919;
BgL_n1z00_2918 = BgL_arg1508z00_1584; 
BgL_n2z00_2919 = BgL_bucketzd2lenzd2_1556; 
{ /* Llib/weakhash.scm 378 */
bool_t BgL_test3931z00_7679;
{ /* Llib/weakhash.scm 378 */
long BgL_arg1836z00_2921;
BgL_arg1836z00_2921 = 
(((BgL_n1z00_2918) | (BgL_n2z00_2919)) & -2147483648); 
BgL_test3931z00_7679 = 
(BgL_arg1836z00_2921==((long)0)); } 
if(BgL_test3931z00_7679)
{ /* Llib/weakhash.scm 378 */
int32_t BgL_arg1832z00_2922;
{ /* Llib/weakhash.scm 378 */
int32_t BgL_arg1833z00_2923;int32_t BgL_arg1835z00_2924;
{ /* Llib/weakhash.scm 378 */
int32_t BgL_res2138z00_2928;
BgL_res2138z00_2928 = 
(int32_t)(BgL_n1z00_2918); 
BgL_arg1833z00_2923 = BgL_res2138z00_2928; } 
{ /* Llib/weakhash.scm 378 */
int32_t BgL_res2139z00_2930;
BgL_res2139z00_2930 = 
(int32_t)(BgL_n2z00_2919); 
BgL_arg1835z00_2924 = BgL_res2139z00_2930; } 
BgL_arg1832z00_2922 = 
(BgL_arg1833z00_2923%BgL_arg1835z00_2924); } 
{ /* Llib/weakhash.scm 378 */
long BgL_res2141z00_2935;
{ /* Llib/weakhash.scm 378 */
long BgL_arg1940z00_2932;
BgL_arg1940z00_2932 = 
(long)(BgL_arg1832z00_2922); 
{ /* Llib/weakhash.scm 378 */
long BgL_res2140z00_2934;
BgL_res2140z00_2934 = 
(long)(BgL_arg1940z00_2932); 
BgL_res2141z00_2935 = BgL_res2140z00_2934; } } 
BgL_res2142z00_2936 = BgL_res2141z00_2935; } }  else 
{ /* Llib/weakhash.scm 378 */
BgL_res2142z00_2936 = 
(BgL_n1z00_2918%BgL_n2z00_2919); } } } 
BgL_bucketzd2numzd2_1557 = BgL_res2142z00_2936; } } 
{ /* Llib/weakhash.scm 378 */
obj_t BgL_bucketz00_1558;
{ /* Llib/weakhash.scm 379 */
obj_t BgL_vectorz00_2937;
if(
VECTORP(BgL_bucketsz00_1555))
{ /* Llib/weakhash.scm 379 */
BgL_vectorz00_2937 = BgL_bucketsz00_1555; }  else 
{ 
obj_t BgL_auxz00_7690;
BgL_auxz00_7690 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)14999)), BGl_string3396z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1555); 
FAILURE(BgL_auxz00_7690,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 379 */
bool_t BgL_test3933z00_7694;
{ /* Llib/weakhash.scm 379 */
long BgL_tmpz00_7695;
BgL_tmpz00_7695 = 
VECTOR_LENGTH(BgL_vectorz00_2937); 
BgL_test3933z00_7694 = 
BOUND_CHECK(BgL_bucketzd2numzd2_1557, BgL_tmpz00_7695); } 
if(BgL_test3933z00_7694)
{ /* Llib/weakhash.scm 379 */
BgL_bucketz00_1558 = 
VECTOR_REF(BgL_vectorz00_2937,BgL_bucketzd2numzd2_1557); }  else 
{ 
obj_t BgL_auxz00_7699;
BgL_auxz00_7699 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)14987)), BGl_string3326z00zz__weakhashz00, BgL_vectorz00_2937, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2937)), 
(int)(BgL_bucketzd2numzd2_1557)); 
FAILURE(BgL_auxz00_7699,BFALSE,BFALSE);} } } 
{ /* Llib/weakhash.scm 379 */
obj_t BgL_maxzd2bucketzd2lenz00_1559;
{ /* Llib/weakhash.scm 380 */
bool_t BgL_test3934z00_7706;
{ /* Llib/weakhash.scm 380 */
obj_t BgL_tmpz00_7707;
{ /* Llib/weakhash.scm 380 */
obj_t BgL_res2143z00_2942;
{ /* Llib/weakhash.scm 380 */
obj_t BgL_aux3038z00_4711;
BgL_aux3038z00_4711 = 
STRUCT_KEY(BgL_tablez00_72); 
if(
SYMBOLP(BgL_aux3038z00_4711))
{ /* Llib/weakhash.scm 380 */
BgL_res2143z00_2942 = BgL_aux3038z00_4711; }  else 
{ 
obj_t BgL_auxz00_7711;
BgL_auxz00_7711 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)15039)), BGl_string3396z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3038z00_4711); 
FAILURE(BgL_auxz00_7711,BFALSE,BFALSE);} } 
BgL_tmpz00_7707 = BgL_res2143z00_2942; } 
BgL_test3934z00_7706 = 
(BgL_tmpz00_7707==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3934z00_7706)
{ /* Llib/weakhash.scm 380 */
int BgL_tmpz00_7716;
BgL_tmpz00_7716 = 
(int)(((long)1)); 
BgL_maxzd2bucketzd2lenz00_1559 = 
STRUCT_REF(BgL_tablez00_72, BgL_tmpz00_7716); }  else 
{ /* Llib/weakhash.scm 380 */
BgL_maxzd2bucketzd2lenz00_1559 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_72); } } 
{ /* Llib/weakhash.scm 380 */
obj_t BgL_countz00_4035;
BgL_countz00_4035 = 
MAKE_CELL(
BINT(((long)0))); 
{ /* Llib/weakhash.scm 381 */
obj_t BgL_foundz00_1561;
{ /* Llib/weakhash.scm 386 */
obj_t BgL_zc3z04anonymousza31503ze3z87_4021;
{ 
int BgL_tmpz00_7721;
BgL_tmpz00_7721 = 
(int)(((long)4)); 
BgL_zc3z04anonymousza31503ze3z87_4021 = 
MAKE_L_PROCEDURE(BGl_z62zc3z04anonymousza31503ze3ze5zz__weakhashz00, BgL_tmpz00_7721); } 
PROCEDURE_L_SET(BgL_zc3z04anonymousza31503ze3z87_4021, 
(int)(((long)0)), 
((obj_t)BgL_countz00_4035)); 
PROCEDURE_L_SET(BgL_zc3z04anonymousza31503ze3z87_4021, 
(int)(((long)1)), BgL_objz00_74); 
PROCEDURE_L_SET(BgL_zc3z04anonymousza31503ze3z87_4021, 
(int)(((long)2)), BgL_tablez00_72); 
PROCEDURE_L_SET(BgL_zc3z04anonymousza31503ze3z87_4021, 
(int)(((long)3)), BgL_keyz00_73); 
BgL_foundz00_1561 = 
BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_72, BgL_bucketsz00_1555, BgL_bucketzd2numzd2_1557, BgL_zc3z04anonymousza31503ze3z87_4021); } 
{ /* Llib/weakhash.scm 383 */

if(
(BgL_foundz00_1561==BGl_keepgoingz00zz__weakhashz00))
{ /* Llib/weakhash.scm 397 */
{ /* Llib/weakhash.scm 400 */
long BgL_arg1489z00_1563;
{ /* Llib/weakhash.scm 400 */
obj_t BgL_arg1491z00_1564;
{ /* Llib/weakhash.scm 400 */
bool_t BgL_test3937z00_7736;
{ /* Llib/weakhash.scm 400 */
obj_t BgL_tmpz00_7737;
{ /* Llib/weakhash.scm 400 */
obj_t BgL_res2155z00_2979;
{ /* Llib/weakhash.scm 400 */
obj_t BgL_aux3040z00_4713;
BgL_aux3040z00_4713 = 
STRUCT_KEY(BgL_tablez00_72); 
if(
SYMBOLP(BgL_aux3040z00_4713))
{ /* Llib/weakhash.scm 400 */
BgL_res2155z00_2979 = BgL_aux3040z00_4713; }  else 
{ 
obj_t BgL_auxz00_7741;
BgL_auxz00_7741 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)15639)), BGl_string3396z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3040z00_4713); 
FAILURE(BgL_auxz00_7741,BFALSE,BFALSE);} } 
BgL_tmpz00_7737 = BgL_res2155z00_2979; } 
BgL_test3937z00_7736 = 
(BgL_tmpz00_7737==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3937z00_7736)
{ /* Llib/weakhash.scm 400 */
int BgL_tmpz00_7746;
BgL_tmpz00_7746 = 
(int)(((long)0)); 
BgL_arg1491z00_1564 = 
STRUCT_REF(BgL_tablez00_72, BgL_tmpz00_7746); }  else 
{ /* Llib/weakhash.scm 400 */
BgL_arg1491z00_1564 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_72); } } 
{ /* Llib/weakhash.scm 400 */
long BgL_za71za7_2980;
{ /* Llib/weakhash.scm 400 */
obj_t BgL_tmpz00_7750;
if(
INTEGERP(BgL_arg1491z00_1564))
{ /* Llib/weakhash.scm 400 */
BgL_tmpz00_7750 = BgL_arg1491z00_1564
; }  else 
{ 
obj_t BgL_auxz00_7753;
BgL_auxz00_7753 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)15661)), BGl_string3396z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1491z00_1564); 
FAILURE(BgL_auxz00_7753,BFALSE,BFALSE);} 
BgL_za71za7_2980 = 
(long)CINT(BgL_tmpz00_7750); } 
BgL_arg1489z00_1563 = 
(BgL_za71za7_2980+((long)1)); } } 
{ /* Llib/weakhash.scm 400 */
bool_t BgL_test3940z00_7759;
{ /* Llib/weakhash.scm 400 */
obj_t BgL_tmpz00_7760;
{ /* Llib/weakhash.scm 400 */
obj_t BgL_res2157z00_2985;
{ /* Llib/weakhash.scm 400 */
obj_t BgL_aux3044z00_4717;
BgL_aux3044z00_4717 = 
STRUCT_KEY(BgL_tablez00_72); 
if(
SYMBOLP(BgL_aux3044z00_4717))
{ /* Llib/weakhash.scm 400 */
BgL_res2157z00_2985 = BgL_aux3044z00_4717; }  else 
{ 
obj_t BgL_auxz00_7764;
BgL_auxz00_7764 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)15606)), BGl_string3396z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3044z00_4717); 
FAILURE(BgL_auxz00_7764,BFALSE,BFALSE);} } 
BgL_tmpz00_7760 = BgL_res2157z00_2985; } 
BgL_test3940z00_7759 = 
(BgL_tmpz00_7760==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3940z00_7759)
{ /* Llib/weakhash.scm 400 */
obj_t BgL_auxz00_7771;int BgL_tmpz00_7769;
BgL_auxz00_7771 = 
BINT(BgL_arg1489z00_1563); 
BgL_tmpz00_7769 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_72, BgL_tmpz00_7769, BgL_auxz00_7771); }  else 
{ /* Llib/weakhash.scm 400 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_72); } } } 
{ /* Llib/weakhash.scm 402 */
obj_t BgL_arg1492z00_1565;
{ /* Llib/weakhash.scm 402 */
obj_t BgL_arg1493z00_1566;obj_t BgL_arg1494z00_1567;
{ /* Llib/weakhash.scm 402 */
obj_t BgL_arg1495z00_1568;obj_t BgL_arg1496z00_1569;
if(
BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(BgL_tablez00_72))
{ /* Llib/weakhash.scm 402 */
BgL_arg1495z00_1568 = 
make_weakptr(BgL_keyz00_73); }  else 
{ /* Llib/weakhash.scm 402 */
BgL_arg1495z00_1568 = BgL_keyz00_73; } 
if(
BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(BgL_tablez00_72))
{ /* Llib/weakhash.scm 405 */
BgL_arg1496z00_1569 = 
make_weakptr(BgL_objz00_74); }  else 
{ /* Llib/weakhash.scm 405 */
BgL_arg1496z00_1569 = BgL_objz00_74; } 
BgL_arg1493z00_1566 = 
MAKE_YOUNG_PAIR(BgL_arg1495z00_1568, BgL_arg1496z00_1569); } 
{ /* Llib/weakhash.scm 410 */
obj_t BgL_arg1500z00_1572;
{ /* Llib/weakhash.scm 410 */
bool_t BgL_test3944z00_7782;
{ /* Llib/weakhash.scm 410 */
obj_t BgL_tmpz00_7783;
{ /* Llib/weakhash.scm 410 */
obj_t BgL_res2160z00_2991;
{ /* Llib/weakhash.scm 410 */
obj_t BgL_aux3046z00_4719;
BgL_aux3046z00_4719 = 
STRUCT_KEY(BgL_tablez00_72); 
if(
SYMBOLP(BgL_aux3046z00_4719))
{ /* Llib/weakhash.scm 410 */
BgL_res2160z00_2991 = BgL_aux3046z00_4719; }  else 
{ 
obj_t BgL_auxz00_7787;
BgL_auxz00_7787 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)15970)), BGl_string3396z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3046z00_4719); 
FAILURE(BgL_auxz00_7787,BFALSE,BFALSE);} } 
BgL_tmpz00_7783 = BgL_res2160z00_2991; } 
BgL_test3944z00_7782 = 
(BgL_tmpz00_7783==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3944z00_7782)
{ /* Llib/weakhash.scm 410 */
int BgL_tmpz00_7792;
BgL_tmpz00_7792 = 
(int)(((long)2)); 
BgL_arg1500z00_1572 = 
STRUCT_REF(BgL_tablez00_72, BgL_tmpz00_7792); }  else 
{ /* Llib/weakhash.scm 410 */
BgL_arg1500z00_1572 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_72); } } 
{ /* Llib/weakhash.scm 410 */
obj_t BgL_vectorz00_2992;
if(
VECTORP(BgL_arg1500z00_1572))
{ /* Llib/weakhash.scm 410 */
BgL_vectorz00_2992 = BgL_arg1500z00_1572; }  else 
{ 
obj_t BgL_auxz00_7798;
BgL_auxz00_7798 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)15995)), BGl_string3396z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_arg1500z00_1572); 
FAILURE(BgL_auxz00_7798,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 410 */
bool_t BgL_test3947z00_7802;
{ /* Llib/weakhash.scm 410 */
long BgL_tmpz00_7803;
BgL_tmpz00_7803 = 
VECTOR_LENGTH(BgL_vectorz00_2992); 
BgL_test3947z00_7802 = 
BOUND_CHECK(BgL_bucketzd2numzd2_1557, BgL_tmpz00_7803); } 
if(BgL_test3947z00_7802)
{ /* Llib/weakhash.scm 410 */
BgL_arg1494z00_1567 = 
VECTOR_REF(BgL_vectorz00_2992,BgL_bucketzd2numzd2_1557); }  else 
{ 
obj_t BgL_auxz00_7807;
BgL_auxz00_7807 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)15958)), BGl_string3326z00zz__weakhashz00, BgL_vectorz00_2992, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2992)), 
(int)(BgL_bucketzd2numzd2_1557)); 
FAILURE(BgL_auxz00_7807,BFALSE,BFALSE);} } } } 
BgL_arg1492z00_1565 = 
MAKE_YOUNG_PAIR(BgL_arg1493z00_1566, BgL_arg1494z00_1567); } 
{ /* Llib/weakhash.scm 401 */
obj_t BgL_vectorz00_2994;
if(
VECTORP(BgL_bucketsz00_1555))
{ /* Llib/weakhash.scm 401 */
BgL_vectorz00_2994 = BgL_bucketsz00_1555; }  else 
{ 
obj_t BgL_auxz00_7817;
BgL_auxz00_7817 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)15686)), BGl_string3396z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1555); 
FAILURE(BgL_auxz00_7817,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 401 */
bool_t BgL_test3949z00_7821;
{ /* Llib/weakhash.scm 401 */
long BgL_tmpz00_7822;
BgL_tmpz00_7822 = 
VECTOR_LENGTH(BgL_vectorz00_2994); 
BgL_test3949z00_7821 = 
BOUND_CHECK(BgL_bucketzd2numzd2_1557, BgL_tmpz00_7822); } 
if(BgL_test3949z00_7821)
{ /* Llib/weakhash.scm 401 */
VECTOR_SET(BgL_vectorz00_2994,BgL_bucketzd2numzd2_1557,BgL_arg1492z00_1565); }  else 
{ 
obj_t BgL_auxz00_7826;
BgL_auxz00_7826 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)15673)), BGl_string3331z00zz__weakhashz00, BgL_vectorz00_2994, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_2994)), 
(int)(BgL_bucketzd2numzd2_1557)); 
FAILURE(BgL_auxz00_7826,BFALSE,BFALSE);} } } } 
{ /* Llib/weakhash.scm 412 */
bool_t BgL_test3950z00_7833;
{ /* Llib/weakhash.scm 412 */
long BgL_n1z00_2996;long BgL_n2z00_2997;
{ /* Llib/weakhash.scm 412 */
obj_t BgL_tmpz00_7834;
{ /* Llib/weakhash.scm 412 */
obj_t BgL_aux3052z00_4725;
BgL_aux3052z00_4725 = 
CELL_REF(BgL_countz00_4035); 
if(
INTEGERP(BgL_aux3052z00_4725))
{ /* Llib/weakhash.scm 412 */
BgL_tmpz00_7834 = BgL_aux3052z00_4725
; }  else 
{ 
obj_t BgL_auxz00_7837;
BgL_auxz00_7837 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)16035)), BGl_string3396z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_aux3052z00_4725); 
FAILURE(BgL_auxz00_7837,BFALSE,BFALSE);} } 
BgL_n1z00_2996 = 
(long)CINT(BgL_tmpz00_7834); } 
{ /* Llib/weakhash.scm 412 */
obj_t BgL_tmpz00_7842;
if(
INTEGERP(BgL_maxzd2bucketzd2lenz00_1559))
{ /* Llib/weakhash.scm 412 */
BgL_tmpz00_7842 = BgL_maxzd2bucketzd2lenz00_1559
; }  else 
{ 
obj_t BgL_auxz00_7845;
BgL_auxz00_7845 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)16041)), BGl_string3396z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_maxzd2bucketzd2lenz00_1559); 
FAILURE(BgL_auxz00_7845,BFALSE,BFALSE);} 
BgL_n2z00_2997 = 
(long)CINT(BgL_tmpz00_7842); } 
BgL_test3950z00_7833 = 
(BgL_n1z00_2996>BgL_n2z00_2997); } 
if(BgL_test3950z00_7833)
{ /* Llib/weakhash.scm 412 */
BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00(BgL_tablez00_72); }  else 
{ /* Llib/weakhash.scm 412 */BFALSE; } } 
return BgL_objz00_74;}  else 
{ /* Llib/weakhash.scm 397 */
return BgL_foundz00_1561;} } } } } } } } } } 

}



/* &weak-hashtable-put! */
obj_t BGl_z62weakzd2hashtablezd2putz12z70zz__weakhashz00(obj_t BgL_envz00_4022, obj_t BgL_tablez00_4023, obj_t BgL_keyz00_4024, obj_t BgL_objz00_4025)
{
{ /* Llib/weakhash.scm 375 */
{ /* Llib/weakhash.scm 376 */
obj_t BgL_auxz00_7852;
if(
STRUCTP(BgL_tablez00_4023))
{ /* Llib/weakhash.scm 376 */
BgL_auxz00_7852 = BgL_tablez00_4023
; }  else 
{ 
obj_t BgL_auxz00_7855;
BgL_auxz00_7855 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)14818)), BGl_string3398z00zz__weakhashz00, BGl_string3358z00zz__weakhashz00, BgL_tablez00_4023); 
FAILURE(BgL_auxz00_7855,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2putz12z12zz__weakhashz00(BgL_auxz00_7852, BgL_keyz00_4024, BgL_objz00_4025);} } 

}



/* &<@anonymous:1503> */
obj_t BGl_z62zc3z04anonymousza31503ze3ze5zz__weakhashz00(obj_t BgL_envz00_4026, obj_t BgL_bkeyz00_4031, obj_t BgL_valz00_4032, obj_t BgL_bucketz00_4033)
{
{ /* Llib/weakhash.scm 385 */
{ /* Llib/weakhash.scm 386 */
obj_t BgL_countz00_4027;obj_t BgL_objz00_4028;obj_t BgL_tablez00_4029;obj_t BgL_keyz00_4030;
BgL_countz00_4027 = 
PROCEDURE_L_REF(BgL_envz00_4026, 
(int)(((long)0))); 
BgL_objz00_4028 = 
PROCEDURE_L_REF(BgL_envz00_4026, 
(int)(((long)1))); 
BgL_tablez00_4029 = 
((obj_t)
PROCEDURE_L_REF(BgL_envz00_4026, 
(int)(((long)2)))); 
BgL_keyz00_4030 = 
PROCEDURE_L_REF(BgL_envz00_4026, 
(int)(((long)3))); 
{ /* Llib/weakhash.scm 386 */
obj_t BgL_auxz00_5040;
{ /* Llib/weakhash.scm 386 */
obj_t BgL_tmpz00_7869;
{ /* Llib/weakhash.scm 386 */
obj_t BgL_aux3058z00_5041;
BgL_aux3058z00_5041 = 
CELL_REF(BgL_countz00_4027); 
if(
INTEGERP(BgL_aux3058z00_5041))
{ /* Llib/weakhash.scm 386 */
BgL_tmpz00_7869 = BgL_aux3058z00_5041
; }  else 
{ 
obj_t BgL_auxz00_7872;
BgL_auxz00_7872 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)15274)), BGl_string3399z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_aux3058z00_5041); 
FAILURE(BgL_auxz00_7872,BFALSE,BFALSE);} } 
BgL_auxz00_5040 = 
ADDFX(BgL_tmpz00_7869, 
BINT(((long)1))); } 
CELL_SET(BgL_countz00_4027, BgL_auxz00_5040); } 
{ /* Llib/weakhash.scm 387 */
bool_t BgL_test3955z00_7878;
{ /* Llib/weakhash.scm 387 */
obj_t BgL_eqtz00_5042;
{ /* Llib/weakhash.scm 387 */
bool_t BgL_test3956z00_7879;
{ /* Llib/weakhash.scm 387 */
obj_t BgL_tmpz00_7880;
{ /* Llib/weakhash.scm 387 */
obj_t BgL_res2145z00_5043;
{ /* Llib/weakhash.scm 387 */
obj_t BgL_aux3060z00_5044;
BgL_aux3060z00_5044 = 
STRUCT_KEY(BgL_tablez00_4029); 
if(
SYMBOLP(BgL_aux3060z00_5044))
{ /* Llib/weakhash.scm 387 */
BgL_res2145z00_5043 = BgL_aux3060z00_5044; }  else 
{ 
obj_t BgL_auxz00_7884;
BgL_auxz00_7884 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)15295)), BGl_string3399z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3060z00_5044); 
FAILURE(BgL_auxz00_7884,BFALSE,BFALSE);} } 
BgL_tmpz00_7880 = BgL_res2145z00_5043; } 
BgL_test3956z00_7879 = 
(BgL_tmpz00_7880==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3956z00_7879)
{ /* Llib/weakhash.scm 387 */
int BgL_tmpz00_7889;
BgL_tmpz00_7889 = 
(int)(((long)3)); 
BgL_eqtz00_5042 = 
STRUCT_REF(BgL_tablez00_4029, BgL_tmpz00_7889); }  else 
{ /* Llib/weakhash.scm 387 */
BgL_eqtz00_5042 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_4029); } } 
if(
PROCEDUREP(BgL_eqtz00_5042))
{ /* Llib/weakhash.scm 387 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_eqtz00_5042, ((long)2)))
{ /* Llib/weakhash.scm 387 */
BgL_test3955z00_7878 = 
CBOOL(
PROCEDURE_ENTRY(BgL_eqtz00_5042)(BgL_eqtz00_5042, BgL_bkeyz00_4031, BgL_keyz00_4030, BEOA))
; }  else 
{ /* Llib/weakhash.scm 387 */
FAILURE(BGl_string3400z00zz__weakhashz00,BGl_list3401z00zz__weakhashz00,BgL_eqtz00_5042);} }  else 
{ /* Llib/weakhash.scm 387 */
if(
(BgL_bkeyz00_4031==BgL_keyz00_4030))
{ /* Llib/weakhash.scm 387 */
BgL_test3955z00_7878 = ((bool_t)1)
; }  else 
{ /* Llib/weakhash.scm 387 */
if(
STRINGP(BgL_bkeyz00_4031))
{ /* Llib/weakhash.scm 387 */
if(
STRINGP(BgL_keyz00_4030))
{ /* Llib/weakhash.scm 387 */
bool_t BgL_res2153z00_5045;
{ /* Llib/weakhash.scm 387 */
long BgL_l1z00_5046;
BgL_l1z00_5046 = 
STRING_LENGTH(BgL_bkeyz00_4031); 
if(
(BgL_l1z00_5046==
STRING_LENGTH(BgL_keyz00_4030)))
{ /* Llib/weakhash.scm 387 */
int BgL_arg1721z00_5047;
{ /* Llib/weakhash.scm 387 */
char * BgL_auxz00_7916;char * BgL_tmpz00_7914;
BgL_auxz00_7916 = 
BSTRING_TO_STRING(BgL_keyz00_4030); 
BgL_tmpz00_7914 = 
BSTRING_TO_STRING(BgL_bkeyz00_4031); 
BgL_arg1721z00_5047 = 
memcmp(BgL_tmpz00_7914, BgL_auxz00_7916, BgL_l1z00_5046); } 
BgL_res2153z00_5045 = 
(
(long)(BgL_arg1721z00_5047)==((long)0)); }  else 
{ /* Llib/weakhash.scm 387 */
BgL_res2153z00_5045 = ((bool_t)0); } } 
BgL_test3955z00_7878 = BgL_res2153z00_5045; }  else 
{ /* Llib/weakhash.scm 387 */
BgL_test3955z00_7878 = ((bool_t)0)
; } }  else 
{ /* Llib/weakhash.scm 387 */
BgL_test3955z00_7878 = ((bool_t)0)
; } } } } 
if(BgL_test3955z00_7878)
{ /* Llib/weakhash.scm 387 */
{ /* Llib/weakhash.scm 389 */
obj_t BgL_arg1505z00_5048;obj_t BgL_arg1506z00_5049;
{ /* Llib/weakhash.scm 389 */
obj_t BgL_pairz00_5050;
if(
PAIRP(BgL_bucketz00_4033))
{ /* Llib/weakhash.scm 389 */
BgL_pairz00_5050 = BgL_bucketz00_4033; }  else 
{ 
obj_t BgL_auxz00_7923;
BgL_auxz00_7923 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)15362)), BGl_string3399z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_4033); 
FAILURE(BgL_auxz00_7923,BFALSE,BFALSE);} 
BgL_arg1505z00_5048 = 
CAR(BgL_pairz00_5050); } 
if(
BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(BgL_tablez00_4029))
{ /* Llib/weakhash.scm 390 */
BgL_arg1506z00_5049 = 
make_weakptr(BgL_objz00_4028); }  else 
{ /* Llib/weakhash.scm 390 */
BgL_arg1506z00_5049 = BgL_objz00_4028; } 
{ /* Llib/weakhash.scm 389 */
obj_t BgL_pairz00_5051;
if(
PAIRP(BgL_arg1505z00_5048))
{ /* Llib/weakhash.scm 389 */
BgL_pairz00_5051 = BgL_arg1505z00_5048; }  else 
{ 
obj_t BgL_auxz00_7933;
BgL_auxz00_7933 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)15368)), BGl_string3399z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_arg1505z00_5048); 
FAILURE(BgL_auxz00_7933,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_5051, BgL_arg1506z00_5049); } } 
return BgL_valz00_4032;}  else 
{ /* Llib/weakhash.scm 387 */
return BGl_keepgoingz00zz__weakhashz00;} } } } 

}



/* weak-hashtable-update! */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2updatez12z12zz__weakhashz00(obj_t BgL_tablez00_75, obj_t BgL_keyz00_76, obj_t BgL_procz00_77, obj_t BgL_objz00_78)
{
{ /* Llib/weakhash.scm 419 */
{ /* Llib/weakhash.scm 420 */
obj_t BgL_bucketsz00_1585;
{ /* Llib/weakhash.scm 420 */
bool_t BgL_test3967z00_7938;
{ /* Llib/weakhash.scm 420 */
obj_t BgL_tmpz00_7939;
{ /* Llib/weakhash.scm 420 */
obj_t BgL_res2162z00_3002;
{ /* Llib/weakhash.scm 420 */
obj_t BgL_aux3068z00_4742;
BgL_aux3068z00_4742 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3068z00_4742))
{ /* Llib/weakhash.scm 420 */
BgL_res2162z00_3002 = BgL_aux3068z00_4742; }  else 
{ 
obj_t BgL_auxz00_7943;
BgL_auxz00_7943 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)16424)), BGl_string3402z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3068z00_4742); 
FAILURE(BgL_auxz00_7943,BFALSE,BFALSE);} } 
BgL_tmpz00_7939 = BgL_res2162z00_3002; } 
BgL_test3967z00_7938 = 
(BgL_tmpz00_7939==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3967z00_7938)
{ /* Llib/weakhash.scm 420 */
int BgL_tmpz00_7948;
BgL_tmpz00_7948 = 
(int)(((long)2)); 
BgL_bucketsz00_1585 = 
STRUCT_REF(BgL_tablez00_75, BgL_tmpz00_7948); }  else 
{ /* Llib/weakhash.scm 420 */
BgL_bucketsz00_1585 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_75); } } 
{ /* Llib/weakhash.scm 420 */
long BgL_bucketzd2lenzd2_1586;
{ /* Llib/weakhash.scm 421 */
obj_t BgL_vectorz00_3003;
if(
VECTORP(BgL_bucketsz00_1585))
{ /* Llib/weakhash.scm 421 */
BgL_vectorz00_3003 = BgL_bucketsz00_1585; }  else 
{ 
obj_t BgL_auxz00_7954;
BgL_auxz00_7954 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)16482)), BGl_string3402z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1585); 
FAILURE(BgL_auxz00_7954,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1586 = 
VECTOR_LENGTH(BgL_vectorz00_3003); } 
{ /* Llib/weakhash.scm 421 */
long BgL_bucketzd2numzd2_1587;
{ /* Llib/weakhash.scm 422 */
long BgL_arg1528z00_1615;
{ /* Llib/weakhash.scm 422 */
long BgL_res2168z00_3019;
{ /* Llib/weakhash.scm 422 */
obj_t BgL_hashnz00_3004;
{ /* Llib/weakhash.scm 422 */
bool_t BgL_test3970z00_7959;
{ /* Llib/weakhash.scm 422 */
obj_t BgL_tmpz00_7960;
{ /* Llib/weakhash.scm 422 */
obj_t BgL_res2163z00_3010;
{ /* Llib/weakhash.scm 422 */
obj_t BgL_aux3072z00_4746;
BgL_aux3072z00_4746 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3072z00_4746))
{ /* Llib/weakhash.scm 422 */
BgL_res2163z00_3010 = BgL_aux3072z00_4746; }  else 
{ 
obj_t BgL_auxz00_7964;
BgL_auxz00_7964 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)16520)), BGl_string3402z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3072z00_4746); 
FAILURE(BgL_auxz00_7964,BFALSE,BFALSE);} } 
BgL_tmpz00_7960 = BgL_res2163z00_3010; } 
BgL_test3970z00_7959 = 
(BgL_tmpz00_7960==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3970z00_7959)
{ /* Llib/weakhash.scm 422 */
int BgL_tmpz00_7969;
BgL_tmpz00_7969 = 
(int)(((long)4)); 
BgL_hashnz00_3004 = 
STRUCT_REF(BgL_tablez00_75, BgL_tmpz00_7969); }  else 
{ /* Llib/weakhash.scm 422 */
BgL_hashnz00_3004 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_75); } } 
if(
PROCEDUREP(BgL_hashnz00_3004))
{ /* Llib/weakhash.scm 422 */
obj_t BgL_arg1310z00_3006;
if(
PROCEDURE_CORRECT_ARITYP(BgL_hashnz00_3004, ((long)1)))
{ /* Llib/weakhash.scm 422 */
BgL_arg1310z00_3006 = 
PROCEDURE_ENTRY(BgL_hashnz00_3004)(BgL_hashnz00_3004, BgL_keyz00_76, BEOA); }  else 
{ /* Llib/weakhash.scm 422 */
FAILURE(BGl_string3403z00zz__weakhashz00,BGl_list3380z00zz__weakhashz00,BgL_hashnz00_3004);} 
{ /* Llib/weakhash.scm 422 */
long BgL_nz00_3012;
{ /* Llib/weakhash.scm 422 */
obj_t BgL_tmpz00_7982;
if(
INTEGERP(BgL_arg1310z00_3006))
{ /* Llib/weakhash.scm 422 */
BgL_tmpz00_7982 = BgL_arg1310z00_3006
; }  else 
{ 
obj_t BgL_auxz00_7985;
BgL_auxz00_7985 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)16520)), BGl_string3402z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1310z00_3006); 
FAILURE(BgL_auxz00_7985,BFALSE,BFALSE);} 
BgL_nz00_3012 = 
(long)CINT(BgL_tmpz00_7982); } 
if(
(BgL_nz00_3012<((long)0)))
{ /* Llib/weakhash.scm 422 */
BgL_res2168z00_3019 = 
NEG(BgL_nz00_3012); }  else 
{ /* Llib/weakhash.scm 422 */
BgL_res2168z00_3019 = BgL_nz00_3012; } } }  else 
{ /* Llib/weakhash.scm 422 */
BgL_res2168z00_3019 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_76); } } 
BgL_arg1528z00_1615 = BgL_res2168z00_3019; } 
{ /* Llib/weakhash.scm 422 */
long BgL_res2174z00_3038;
{ /* Llib/weakhash.scm 422 */
long BgL_n1z00_3020;long BgL_n2z00_3021;
BgL_n1z00_3020 = BgL_arg1528z00_1615; 
BgL_n2z00_3021 = BgL_bucketzd2lenzd2_1586; 
{ /* Llib/weakhash.scm 422 */
bool_t BgL_test3976z00_7994;
{ /* Llib/weakhash.scm 422 */
long BgL_arg1836z00_3023;
BgL_arg1836z00_3023 = 
(((BgL_n1z00_3020) | (BgL_n2z00_3021)) & -2147483648); 
BgL_test3976z00_7994 = 
(BgL_arg1836z00_3023==((long)0)); } 
if(BgL_test3976z00_7994)
{ /* Llib/weakhash.scm 422 */
int32_t BgL_arg1832z00_3024;
{ /* Llib/weakhash.scm 422 */
int32_t BgL_arg1833z00_3025;int32_t BgL_arg1835z00_3026;
{ /* Llib/weakhash.scm 422 */
int32_t BgL_res2170z00_3030;
BgL_res2170z00_3030 = 
(int32_t)(BgL_n1z00_3020); 
BgL_arg1833z00_3025 = BgL_res2170z00_3030; } 
{ /* Llib/weakhash.scm 422 */
int32_t BgL_res2171z00_3032;
BgL_res2171z00_3032 = 
(int32_t)(BgL_n2z00_3021); 
BgL_arg1835z00_3026 = BgL_res2171z00_3032; } 
BgL_arg1832z00_3024 = 
(BgL_arg1833z00_3025%BgL_arg1835z00_3026); } 
{ /* Llib/weakhash.scm 422 */
long BgL_res2173z00_3037;
{ /* Llib/weakhash.scm 422 */
long BgL_arg1940z00_3034;
BgL_arg1940z00_3034 = 
(long)(BgL_arg1832z00_3024); 
{ /* Llib/weakhash.scm 422 */
long BgL_res2172z00_3036;
BgL_res2172z00_3036 = 
(long)(BgL_arg1940z00_3034); 
BgL_res2173z00_3037 = BgL_res2172z00_3036; } } 
BgL_res2174z00_3038 = BgL_res2173z00_3037; } }  else 
{ /* Llib/weakhash.scm 422 */
BgL_res2174z00_3038 = 
(BgL_n1z00_3020%BgL_n2z00_3021); } } } 
BgL_bucketzd2numzd2_1587 = BgL_res2174z00_3038; } } 
{ /* Llib/weakhash.scm 422 */
obj_t BgL_bucketz00_1588;
{ /* Llib/weakhash.scm 423 */
obj_t BgL_vectorz00_3039;
if(
VECTORP(BgL_bucketsz00_1585))
{ /* Llib/weakhash.scm 423 */
BgL_vectorz00_3039 = BgL_bucketsz00_1585; }  else 
{ 
obj_t BgL_auxz00_8005;
BgL_auxz00_8005 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)16589)), BGl_string3402z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1585); 
FAILURE(BgL_auxz00_8005,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 423 */
bool_t BgL_test3978z00_8009;
{ /* Llib/weakhash.scm 423 */
long BgL_tmpz00_8010;
BgL_tmpz00_8010 = 
VECTOR_LENGTH(BgL_vectorz00_3039); 
BgL_test3978z00_8009 = 
BOUND_CHECK(BgL_bucketzd2numzd2_1587, BgL_tmpz00_8010); } 
if(BgL_test3978z00_8009)
{ /* Llib/weakhash.scm 423 */
BgL_bucketz00_1588 = 
VECTOR_REF(BgL_vectorz00_3039,BgL_bucketzd2numzd2_1587); }  else 
{ 
obj_t BgL_auxz00_8014;
BgL_auxz00_8014 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)16577)), BGl_string3326z00zz__weakhashz00, BgL_vectorz00_3039, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_3039)), 
(int)(BgL_bucketzd2numzd2_1587)); 
FAILURE(BgL_auxz00_8014,BFALSE,BFALSE);} } } 
{ /* Llib/weakhash.scm 423 */
obj_t BgL_maxzd2bucketzd2lenz00_1589;
{ /* Llib/weakhash.scm 424 */
bool_t BgL_test3979z00_8021;
{ /* Llib/weakhash.scm 424 */
obj_t BgL_tmpz00_8022;
{ /* Llib/weakhash.scm 424 */
obj_t BgL_res2175z00_3044;
{ /* Llib/weakhash.scm 424 */
obj_t BgL_aux3080z00_4755;
BgL_aux3080z00_4755 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3080z00_4755))
{ /* Llib/weakhash.scm 424 */
BgL_res2175z00_3044 = BgL_aux3080z00_4755; }  else 
{ 
obj_t BgL_auxz00_8026;
BgL_auxz00_8026 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)16629)), BGl_string3402z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3080z00_4755); 
FAILURE(BgL_auxz00_8026,BFALSE,BFALSE);} } 
BgL_tmpz00_8022 = BgL_res2175z00_3044; } 
BgL_test3979z00_8021 = 
(BgL_tmpz00_8022==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3979z00_8021)
{ /* Llib/weakhash.scm 424 */
int BgL_tmpz00_8031;
BgL_tmpz00_8031 = 
(int)(((long)1)); 
BgL_maxzd2bucketzd2lenz00_1589 = 
STRUCT_REF(BgL_tablez00_75, BgL_tmpz00_8031); }  else 
{ /* Llib/weakhash.scm 424 */
BgL_maxzd2bucketzd2lenz00_1589 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_75); } } 
{ /* Llib/weakhash.scm 424 */
obj_t BgL_countz00_4052;
BgL_countz00_4052 = 
MAKE_CELL(
BINT(((long)0))); 
{ /* Llib/weakhash.scm 425 */
obj_t BgL_foundz00_1591;
{ /* Llib/weakhash.scm 430 */
obj_t BgL_zc3z04anonymousza31522ze3z87_4037;
{ 
int BgL_tmpz00_8036;
BgL_tmpz00_8036 = 
(int)(((long)4)); 
BgL_zc3z04anonymousza31522ze3z87_4037 = 
MAKE_L_PROCEDURE(BGl_z62zc3z04anonymousza31522ze3ze5zz__weakhashz00, BgL_tmpz00_8036); } 
PROCEDURE_L_SET(BgL_zc3z04anonymousza31522ze3z87_4037, 
(int)(((long)0)), 
((obj_t)BgL_countz00_4052)); 
PROCEDURE_L_SET(BgL_zc3z04anonymousza31522ze3z87_4037, 
(int)(((long)1)), BgL_procz00_77); 
PROCEDURE_L_SET(BgL_zc3z04anonymousza31522ze3z87_4037, 
(int)(((long)2)), BgL_tablez00_75); 
PROCEDURE_L_SET(BgL_zc3z04anonymousza31522ze3z87_4037, 
(int)(((long)3)), BgL_keyz00_76); 
BgL_foundz00_1591 = 
BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_75, BgL_bucketsz00_1585, BgL_bucketzd2numzd2_1587, BgL_zc3z04anonymousza31522ze3z87_4037); } 
{ /* Llib/weakhash.scm 427 */

if(
(BgL_foundz00_1591==BGl_keepgoingz00zz__weakhashz00))
{ /* Llib/weakhash.scm 441 */
{ /* Llib/weakhash.scm 444 */
long BgL_arg1510z00_1593;
{ /* Llib/weakhash.scm 444 */
obj_t BgL_arg1511z00_1594;
{ /* Llib/weakhash.scm 444 */
bool_t BgL_test3982z00_8051;
{ /* Llib/weakhash.scm 444 */
obj_t BgL_tmpz00_8052;
{ /* Llib/weakhash.scm 444 */
obj_t BgL_res2187z00_3081;
{ /* Llib/weakhash.scm 444 */
obj_t BgL_aux3082z00_4757;
BgL_aux3082z00_4757 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3082z00_4757))
{ /* Llib/weakhash.scm 444 */
BgL_res2187z00_3081 = BgL_aux3082z00_4757; }  else 
{ 
obj_t BgL_auxz00_8056;
BgL_auxz00_8056 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)17258)), BGl_string3402z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3082z00_4757); 
FAILURE(BgL_auxz00_8056,BFALSE,BFALSE);} } 
BgL_tmpz00_8052 = BgL_res2187z00_3081; } 
BgL_test3982z00_8051 = 
(BgL_tmpz00_8052==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3982z00_8051)
{ /* Llib/weakhash.scm 444 */
int BgL_tmpz00_8061;
BgL_tmpz00_8061 = 
(int)(((long)0)); 
BgL_arg1511z00_1594 = 
STRUCT_REF(BgL_tablez00_75, BgL_tmpz00_8061); }  else 
{ /* Llib/weakhash.scm 444 */
BgL_arg1511z00_1594 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_75); } } 
{ /* Llib/weakhash.scm 444 */
long BgL_za71za7_3082;
{ /* Llib/weakhash.scm 444 */
obj_t BgL_tmpz00_8065;
if(
INTEGERP(BgL_arg1511z00_1594))
{ /* Llib/weakhash.scm 444 */
BgL_tmpz00_8065 = BgL_arg1511z00_1594
; }  else 
{ 
obj_t BgL_auxz00_8068;
BgL_auxz00_8068 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)17280)), BGl_string3402z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1511z00_1594); 
FAILURE(BgL_auxz00_8068,BFALSE,BFALSE);} 
BgL_za71za7_3082 = 
(long)CINT(BgL_tmpz00_8065); } 
BgL_arg1510z00_1593 = 
(BgL_za71za7_3082+((long)1)); } } 
{ /* Llib/weakhash.scm 444 */
bool_t BgL_test3985z00_8074;
{ /* Llib/weakhash.scm 444 */
obj_t BgL_tmpz00_8075;
{ /* Llib/weakhash.scm 444 */
obj_t BgL_res2189z00_3087;
{ /* Llib/weakhash.scm 444 */
obj_t BgL_aux3086z00_4761;
BgL_aux3086z00_4761 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3086z00_4761))
{ /* Llib/weakhash.scm 444 */
BgL_res2189z00_3087 = BgL_aux3086z00_4761; }  else 
{ 
obj_t BgL_auxz00_8079;
BgL_auxz00_8079 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)17225)), BGl_string3402z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3086z00_4761); 
FAILURE(BgL_auxz00_8079,BFALSE,BFALSE);} } 
BgL_tmpz00_8075 = BgL_res2189z00_3087; } 
BgL_test3985z00_8074 = 
(BgL_tmpz00_8075==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3985z00_8074)
{ /* Llib/weakhash.scm 444 */
obj_t BgL_auxz00_8086;int BgL_tmpz00_8084;
BgL_auxz00_8086 = 
BINT(BgL_arg1510z00_1593); 
BgL_tmpz00_8084 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_75, BgL_tmpz00_8084, BgL_auxz00_8086); }  else 
{ /* Llib/weakhash.scm 444 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_75); } } } 
{ /* Llib/weakhash.scm 446 */
obj_t BgL_arg1512z00_1595;
{ /* Llib/weakhash.scm 446 */
obj_t BgL_arg1513z00_1596;obj_t BgL_arg1514z00_1597;
{ /* Llib/weakhash.scm 446 */
obj_t BgL_arg1515z00_1598;obj_t BgL_arg1516z00_1599;
if(
BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(BgL_tablez00_75))
{ /* Llib/weakhash.scm 446 */
BgL_arg1515z00_1598 = 
make_weakptr(BgL_keyz00_76); }  else 
{ /* Llib/weakhash.scm 446 */
BgL_arg1515z00_1598 = BgL_keyz00_76; } 
if(
BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(BgL_tablez00_75))
{ /* Llib/weakhash.scm 449 */
BgL_arg1516z00_1599 = 
make_weakptr(BgL_objz00_78); }  else 
{ /* Llib/weakhash.scm 449 */
BgL_arg1516z00_1599 = BgL_objz00_78; } 
BgL_arg1513z00_1596 = 
MAKE_YOUNG_PAIR(BgL_arg1515z00_1598, BgL_arg1516z00_1599); } 
{ /* Llib/weakhash.scm 454 */
obj_t BgL_arg1519z00_1602;
{ /* Llib/weakhash.scm 454 */
bool_t BgL_test3989z00_8097;
{ /* Llib/weakhash.scm 454 */
obj_t BgL_tmpz00_8098;
{ /* Llib/weakhash.scm 454 */
obj_t BgL_res2192z00_3093;
{ /* Llib/weakhash.scm 454 */
obj_t BgL_aux3088z00_4763;
BgL_aux3088z00_4763 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3088z00_4763))
{ /* Llib/weakhash.scm 454 */
BgL_res2192z00_3093 = BgL_aux3088z00_4763; }  else 
{ 
obj_t BgL_auxz00_8102;
BgL_auxz00_8102 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)17589)), BGl_string3402z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3088z00_4763); 
FAILURE(BgL_auxz00_8102,BFALSE,BFALSE);} } 
BgL_tmpz00_8098 = BgL_res2192z00_3093; } 
BgL_test3989z00_8097 = 
(BgL_tmpz00_8098==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test3989z00_8097)
{ /* Llib/weakhash.scm 454 */
int BgL_tmpz00_8107;
BgL_tmpz00_8107 = 
(int)(((long)2)); 
BgL_arg1519z00_1602 = 
STRUCT_REF(BgL_tablez00_75, BgL_tmpz00_8107); }  else 
{ /* Llib/weakhash.scm 454 */
BgL_arg1519z00_1602 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_75); } } 
{ /* Llib/weakhash.scm 454 */
obj_t BgL_vectorz00_3094;
if(
VECTORP(BgL_arg1519z00_1602))
{ /* Llib/weakhash.scm 454 */
BgL_vectorz00_3094 = BgL_arg1519z00_1602; }  else 
{ 
obj_t BgL_auxz00_8113;
BgL_auxz00_8113 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)17614)), BGl_string3402z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_arg1519z00_1602); 
FAILURE(BgL_auxz00_8113,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 454 */
bool_t BgL_test3992z00_8117;
{ /* Llib/weakhash.scm 454 */
long BgL_tmpz00_8118;
BgL_tmpz00_8118 = 
VECTOR_LENGTH(BgL_vectorz00_3094); 
BgL_test3992z00_8117 = 
BOUND_CHECK(BgL_bucketzd2numzd2_1587, BgL_tmpz00_8118); } 
if(BgL_test3992z00_8117)
{ /* Llib/weakhash.scm 454 */
BgL_arg1514z00_1597 = 
VECTOR_REF(BgL_vectorz00_3094,BgL_bucketzd2numzd2_1587); }  else 
{ 
obj_t BgL_auxz00_8122;
BgL_auxz00_8122 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)17577)), BGl_string3326z00zz__weakhashz00, BgL_vectorz00_3094, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_3094)), 
(int)(BgL_bucketzd2numzd2_1587)); 
FAILURE(BgL_auxz00_8122,BFALSE,BFALSE);} } } } 
BgL_arg1512z00_1595 = 
MAKE_YOUNG_PAIR(BgL_arg1513z00_1596, BgL_arg1514z00_1597); } 
{ /* Llib/weakhash.scm 445 */
obj_t BgL_vectorz00_3096;
if(
VECTORP(BgL_bucketsz00_1585))
{ /* Llib/weakhash.scm 445 */
BgL_vectorz00_3096 = BgL_bucketsz00_1585; }  else 
{ 
obj_t BgL_auxz00_8132;
BgL_auxz00_8132 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)17305)), BGl_string3402z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1585); 
FAILURE(BgL_auxz00_8132,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 445 */
bool_t BgL_test3994z00_8136;
{ /* Llib/weakhash.scm 445 */
long BgL_tmpz00_8137;
BgL_tmpz00_8137 = 
VECTOR_LENGTH(BgL_vectorz00_3096); 
BgL_test3994z00_8136 = 
BOUND_CHECK(BgL_bucketzd2numzd2_1587, BgL_tmpz00_8137); } 
if(BgL_test3994z00_8136)
{ /* Llib/weakhash.scm 445 */
VECTOR_SET(BgL_vectorz00_3096,BgL_bucketzd2numzd2_1587,BgL_arg1512z00_1595); }  else 
{ 
obj_t BgL_auxz00_8141;
BgL_auxz00_8141 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)17292)), BGl_string3331z00zz__weakhashz00, BgL_vectorz00_3096, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_3096)), 
(int)(BgL_bucketzd2numzd2_1587)); 
FAILURE(BgL_auxz00_8141,BFALSE,BFALSE);} } } } 
{ /* Llib/weakhash.scm 456 */
bool_t BgL_test3995z00_8148;
{ /* Llib/weakhash.scm 456 */
long BgL_n1z00_3098;long BgL_n2z00_3099;
{ /* Llib/weakhash.scm 456 */
obj_t BgL_tmpz00_8149;
{ /* Llib/weakhash.scm 456 */
obj_t BgL_aux3094z00_4769;
BgL_aux3094z00_4769 = 
CELL_REF(BgL_countz00_4052); 
if(
INTEGERP(BgL_aux3094z00_4769))
{ /* Llib/weakhash.scm 456 */
BgL_tmpz00_8149 = BgL_aux3094z00_4769
; }  else 
{ 
obj_t BgL_auxz00_8152;
BgL_auxz00_8152 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)17654)), BGl_string3402z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_aux3094z00_4769); 
FAILURE(BgL_auxz00_8152,BFALSE,BFALSE);} } 
BgL_n1z00_3098 = 
(long)CINT(BgL_tmpz00_8149); } 
{ /* Llib/weakhash.scm 456 */
obj_t BgL_tmpz00_8157;
if(
INTEGERP(BgL_maxzd2bucketzd2lenz00_1589))
{ /* Llib/weakhash.scm 456 */
BgL_tmpz00_8157 = BgL_maxzd2bucketzd2lenz00_1589
; }  else 
{ 
obj_t BgL_auxz00_8160;
BgL_auxz00_8160 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)17660)), BGl_string3402z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_maxzd2bucketzd2lenz00_1589); 
FAILURE(BgL_auxz00_8160,BFALSE,BFALSE);} 
BgL_n2z00_3099 = 
(long)CINT(BgL_tmpz00_8157); } 
BgL_test3995z00_8148 = 
(BgL_n1z00_3098>BgL_n2z00_3099); } 
if(BgL_test3995z00_8148)
{ /* Llib/weakhash.scm 456 */
BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00(BgL_tablez00_75); }  else 
{ /* Llib/weakhash.scm 456 */BFALSE; } } 
return BgL_objz00_78;}  else 
{ /* Llib/weakhash.scm 441 */
return BgL_foundz00_1591;} } } } } } } } } } 

}



/* &weak-hashtable-update! */
obj_t BGl_z62weakzd2hashtablezd2updatez12z70zz__weakhashz00(obj_t BgL_envz00_4038, obj_t BgL_tablez00_4039, obj_t BgL_keyz00_4040, obj_t BgL_procz00_4041, obj_t BgL_objz00_4042)
{
{ /* Llib/weakhash.scm 419 */
{ /* Llib/weakhash.scm 420 */
obj_t BgL_auxz00_8174;obj_t BgL_auxz00_8167;
if(
PROCEDUREP(BgL_procz00_4041))
{ /* Llib/weakhash.scm 420 */
BgL_auxz00_8174 = BgL_procz00_4041
; }  else 
{ 
obj_t BgL_auxz00_8177;
BgL_auxz00_8177 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)16408)), BGl_string3404z00zz__weakhashz00, BGl_string3334z00zz__weakhashz00, BgL_procz00_4041); 
FAILURE(BgL_auxz00_8177,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_tablez00_4039))
{ /* Llib/weakhash.scm 420 */
BgL_auxz00_8167 = BgL_tablez00_4039
; }  else 
{ 
obj_t BgL_auxz00_8170;
BgL_auxz00_8170 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)16408)), BGl_string3404z00zz__weakhashz00, BGl_string3358z00zz__weakhashz00, BgL_tablez00_4039); 
FAILURE(BgL_auxz00_8170,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2updatez12z12zz__weakhashz00(BgL_auxz00_8167, BgL_keyz00_4040, BgL_auxz00_8174, BgL_objz00_4042);} } 

}



/* &<@anonymous:1522> */
obj_t BGl_z62zc3z04anonymousza31522ze3ze5zz__weakhashz00(obj_t BgL_envz00_4043, obj_t BgL_bkeyz00_4048, obj_t BgL_valz00_4049, obj_t BgL_bucketz00_4050)
{
{ /* Llib/weakhash.scm 429 */
{ /* Llib/weakhash.scm 430 */
obj_t BgL_countz00_4044;obj_t BgL_procz00_4045;obj_t BgL_tablez00_4046;obj_t BgL_keyz00_4047;
BgL_countz00_4044 = 
PROCEDURE_L_REF(BgL_envz00_4043, 
(int)(((long)0))); 
BgL_procz00_4045 = 
((obj_t)
PROCEDURE_L_REF(BgL_envz00_4043, 
(int)(((long)1)))); 
BgL_tablez00_4046 = 
((obj_t)
PROCEDURE_L_REF(BgL_envz00_4043, 
(int)(((long)2)))); 
BgL_keyz00_4047 = 
PROCEDURE_L_REF(BgL_envz00_4043, 
(int)(((long)3))); 
{ /* Llib/weakhash.scm 430 */
obj_t BgL_auxz00_5052;
{ /* Llib/weakhash.scm 430 */
obj_t BgL_tmpz00_8192;
{ /* Llib/weakhash.scm 430 */
obj_t BgL_aux3102z00_5053;
BgL_aux3102z00_5053 = 
CELL_REF(BgL_countz00_4044); 
if(
INTEGERP(BgL_aux3102z00_5053))
{ /* Llib/weakhash.scm 430 */
BgL_tmpz00_8192 = BgL_aux3102z00_5053
; }  else 
{ 
obj_t BgL_auxz00_8195;
BgL_auxz00_8195 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)16864)), BGl_string3405z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_aux3102z00_5053); 
FAILURE(BgL_auxz00_8195,BFALSE,BFALSE);} } 
BgL_auxz00_5052 = 
ADDFX(BgL_tmpz00_8192, 
BINT(((long)1))); } 
CELL_SET(BgL_countz00_4044, BgL_auxz00_5052); } 
{ /* Llib/weakhash.scm 431 */
bool_t BgL_test4001z00_8201;
{ /* Llib/weakhash.scm 431 */
obj_t BgL_eqtz00_5054;
{ /* Llib/weakhash.scm 431 */
bool_t BgL_test4002z00_8202;
{ /* Llib/weakhash.scm 431 */
obj_t BgL_tmpz00_8203;
{ /* Llib/weakhash.scm 431 */
obj_t BgL_res2177z00_5055;
{ /* Llib/weakhash.scm 431 */
obj_t BgL_aux3104z00_5056;
BgL_aux3104z00_5056 = 
STRUCT_KEY(BgL_tablez00_4046); 
if(
SYMBOLP(BgL_aux3104z00_5056))
{ /* Llib/weakhash.scm 431 */
BgL_res2177z00_5055 = BgL_aux3104z00_5056; }  else 
{ 
obj_t BgL_auxz00_8207;
BgL_auxz00_8207 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)16885)), BGl_string3405z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3104z00_5056); 
FAILURE(BgL_auxz00_8207,BFALSE,BFALSE);} } 
BgL_tmpz00_8203 = BgL_res2177z00_5055; } 
BgL_test4002z00_8202 = 
(BgL_tmpz00_8203==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4002z00_8202)
{ /* Llib/weakhash.scm 431 */
int BgL_tmpz00_8212;
BgL_tmpz00_8212 = 
(int)(((long)3)); 
BgL_eqtz00_5054 = 
STRUCT_REF(BgL_tablez00_4046, BgL_tmpz00_8212); }  else 
{ /* Llib/weakhash.scm 431 */
BgL_eqtz00_5054 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_4046); } } 
if(
PROCEDUREP(BgL_eqtz00_5054))
{ /* Llib/weakhash.scm 431 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_eqtz00_5054, ((long)2)))
{ /* Llib/weakhash.scm 431 */
BgL_test4001z00_8201 = 
CBOOL(
PROCEDURE_ENTRY(BgL_eqtz00_5054)(BgL_eqtz00_5054, BgL_bkeyz00_4048, BgL_keyz00_4047, BEOA))
; }  else 
{ /* Llib/weakhash.scm 431 */
FAILURE(BGl_string3406z00zz__weakhashz00,BGl_list3401z00zz__weakhashz00,BgL_eqtz00_5054);} }  else 
{ /* Llib/weakhash.scm 431 */
if(
(BgL_bkeyz00_4048==BgL_keyz00_4047))
{ /* Llib/weakhash.scm 431 */
BgL_test4001z00_8201 = ((bool_t)1)
; }  else 
{ /* Llib/weakhash.scm 431 */
if(
STRINGP(BgL_bkeyz00_4048))
{ /* Llib/weakhash.scm 431 */
if(
STRINGP(BgL_keyz00_4047))
{ /* Llib/weakhash.scm 431 */
bool_t BgL_res2185z00_5057;
{ /* Llib/weakhash.scm 431 */
long BgL_l1z00_5058;
BgL_l1z00_5058 = 
STRING_LENGTH(BgL_bkeyz00_4048); 
if(
(BgL_l1z00_5058==
STRING_LENGTH(BgL_keyz00_4047)))
{ /* Llib/weakhash.scm 431 */
int BgL_arg1721z00_5059;
{ /* Llib/weakhash.scm 431 */
char * BgL_auxz00_8239;char * BgL_tmpz00_8237;
BgL_auxz00_8239 = 
BSTRING_TO_STRING(BgL_keyz00_4047); 
BgL_tmpz00_8237 = 
BSTRING_TO_STRING(BgL_bkeyz00_4048); 
BgL_arg1721z00_5059 = 
memcmp(BgL_tmpz00_8237, BgL_auxz00_8239, BgL_l1z00_5058); } 
BgL_res2185z00_5057 = 
(
(long)(BgL_arg1721z00_5059)==((long)0)); }  else 
{ /* Llib/weakhash.scm 431 */
BgL_res2185z00_5057 = ((bool_t)0); } } 
BgL_test4001z00_8201 = BgL_res2185z00_5057; }  else 
{ /* Llib/weakhash.scm 431 */
BgL_test4001z00_8201 = ((bool_t)0)
; } }  else 
{ /* Llib/weakhash.scm 431 */
BgL_test4001z00_8201 = ((bool_t)0)
; } } } } 
if(BgL_test4001z00_8201)
{ /* Llib/weakhash.scm 432 */
obj_t BgL_newvalz00_5060;
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_4045, ((long)1)))
{ /* Llib/weakhash.scm 432 */
BgL_newvalz00_5060 = 
PROCEDURE_ENTRY(BgL_procz00_4045)(BgL_procz00_4045, BgL_valz00_4049, BEOA); }  else 
{ /* Llib/weakhash.scm 432 */
FAILURE(BGl_string3406z00zz__weakhashz00,BGl_list3407z00zz__weakhashz00,BgL_procz00_4045);} 
{ /* Llib/weakhash.scm 433 */
obj_t BgL_arg1524z00_5061;obj_t BgL_arg1525z00_5062;
{ /* Llib/weakhash.scm 433 */
obj_t BgL_pairz00_5063;
if(
PAIRP(BgL_bucketz00_4050))
{ /* Llib/weakhash.scm 433 */
BgL_pairz00_5063 = BgL_bucketz00_4050; }  else 
{ 
obj_t BgL_auxz00_8253;
BgL_auxz00_8253 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)16972)), BGl_string3405z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_4050); 
FAILURE(BgL_auxz00_8253,BFALSE,BFALSE);} 
BgL_arg1524z00_5061 = 
CAR(BgL_pairz00_5063); } 
if(
BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(BgL_tablez00_4046))
{ /* Llib/weakhash.scm 434 */
BgL_arg1525z00_5062 = 
make_weakptr(BgL_newvalz00_5060); }  else 
{ /* Llib/weakhash.scm 434 */
BgL_arg1525z00_5062 = BgL_newvalz00_5060; } 
{ /* Llib/weakhash.scm 433 */
obj_t BgL_pairz00_5064;
if(
PAIRP(BgL_arg1524z00_5061))
{ /* Llib/weakhash.scm 433 */
BgL_pairz00_5064 = BgL_arg1524z00_5061; }  else 
{ 
obj_t BgL_auxz00_8263;
BgL_auxz00_8263 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)16978)), BGl_string3405z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_arg1524z00_5061); 
FAILURE(BgL_auxz00_8263,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_5064, BgL_arg1525z00_5062); } } 
return BgL_newvalz00_5060;}  else 
{ /* Llib/weakhash.scm 431 */
return BGl_keepgoingz00zz__weakhashz00;} } } } 

}



/* weak-hashtable-add! */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2addz12z12zz__weakhashz00(obj_t BgL_tablez00_79, obj_t BgL_keyz00_80, obj_t BgL_procz00_81, obj_t BgL_objz00_82, obj_t BgL_initz00_83)
{
{ /* Llib/weakhash.scm 463 */
{ /* Llib/weakhash.scm 464 */
obj_t BgL_bucketsz00_1616;
{ /* Llib/weakhash.scm 464 */
bool_t BgL_test4014z00_8268;
{ /* Llib/weakhash.scm 464 */
obj_t BgL_tmpz00_8269;
{ /* Llib/weakhash.scm 464 */
obj_t BgL_res2194z00_3104;
{ /* Llib/weakhash.scm 464 */
obj_t BgL_aux3114z00_4791;
BgL_aux3114z00_4791 = 
STRUCT_KEY(BgL_tablez00_79); 
if(
SYMBOLP(BgL_aux3114z00_4791))
{ /* Llib/weakhash.scm 464 */
BgL_res2194z00_3104 = BgL_aux3114z00_4791; }  else 
{ 
obj_t BgL_auxz00_8273;
BgL_auxz00_8273 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)18045)), BGl_string3410z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3114z00_4791); 
FAILURE(BgL_auxz00_8273,BFALSE,BFALSE);} } 
BgL_tmpz00_8269 = BgL_res2194z00_3104; } 
BgL_test4014z00_8268 = 
(BgL_tmpz00_8269==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4014z00_8268)
{ /* Llib/weakhash.scm 464 */
int BgL_tmpz00_8278;
BgL_tmpz00_8278 = 
(int)(((long)2)); 
BgL_bucketsz00_1616 = 
STRUCT_REF(BgL_tablez00_79, BgL_tmpz00_8278); }  else 
{ /* Llib/weakhash.scm 464 */
BgL_bucketsz00_1616 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_79); } } 
{ /* Llib/weakhash.scm 464 */
long BgL_bucketzd2lenzd2_1617;
{ /* Llib/weakhash.scm 465 */
obj_t BgL_vectorz00_3105;
if(
VECTORP(BgL_bucketsz00_1616))
{ /* Llib/weakhash.scm 465 */
BgL_vectorz00_3105 = BgL_bucketsz00_1616; }  else 
{ 
obj_t BgL_auxz00_8284;
BgL_auxz00_8284 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)18103)), BGl_string3410z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1616); 
FAILURE(BgL_auxz00_8284,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1617 = 
VECTOR_LENGTH(BgL_vectorz00_3105); } 
{ /* Llib/weakhash.scm 465 */
long BgL_bucketzd2numzd2_1618;
{ /* Llib/weakhash.scm 466 */
long BgL_arg1551z00_1648;
{ /* Llib/weakhash.scm 466 */
long BgL_res2200z00_3121;
{ /* Llib/weakhash.scm 466 */
obj_t BgL_hashnz00_3106;
{ /* Llib/weakhash.scm 466 */
bool_t BgL_test4017z00_8289;
{ /* Llib/weakhash.scm 466 */
obj_t BgL_tmpz00_8290;
{ /* Llib/weakhash.scm 466 */
obj_t BgL_res2195z00_3112;
{ /* Llib/weakhash.scm 466 */
obj_t BgL_aux3118z00_4795;
BgL_aux3118z00_4795 = 
STRUCT_KEY(BgL_tablez00_79); 
if(
SYMBOLP(BgL_aux3118z00_4795))
{ /* Llib/weakhash.scm 466 */
BgL_res2195z00_3112 = BgL_aux3118z00_4795; }  else 
{ 
obj_t BgL_auxz00_8294;
BgL_auxz00_8294 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)18141)), BGl_string3410z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3118z00_4795); 
FAILURE(BgL_auxz00_8294,BFALSE,BFALSE);} } 
BgL_tmpz00_8290 = BgL_res2195z00_3112; } 
BgL_test4017z00_8289 = 
(BgL_tmpz00_8290==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4017z00_8289)
{ /* Llib/weakhash.scm 466 */
int BgL_tmpz00_8299;
BgL_tmpz00_8299 = 
(int)(((long)4)); 
BgL_hashnz00_3106 = 
STRUCT_REF(BgL_tablez00_79, BgL_tmpz00_8299); }  else 
{ /* Llib/weakhash.scm 466 */
BgL_hashnz00_3106 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_79); } } 
if(
PROCEDUREP(BgL_hashnz00_3106))
{ /* Llib/weakhash.scm 466 */
obj_t BgL_arg1310z00_3108;
if(
PROCEDURE_CORRECT_ARITYP(BgL_hashnz00_3106, ((long)1)))
{ /* Llib/weakhash.scm 466 */
BgL_arg1310z00_3108 = 
PROCEDURE_ENTRY(BgL_hashnz00_3106)(BgL_hashnz00_3106, BgL_keyz00_80, BEOA); }  else 
{ /* Llib/weakhash.scm 466 */
FAILURE(BGl_string3411z00zz__weakhashz00,BGl_list3380z00zz__weakhashz00,BgL_hashnz00_3106);} 
{ /* Llib/weakhash.scm 466 */
long BgL_nz00_3114;
{ /* Llib/weakhash.scm 466 */
obj_t BgL_tmpz00_8312;
if(
INTEGERP(BgL_arg1310z00_3108))
{ /* Llib/weakhash.scm 466 */
BgL_tmpz00_8312 = BgL_arg1310z00_3108
; }  else 
{ 
obj_t BgL_auxz00_8315;
BgL_auxz00_8315 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)18141)), BGl_string3410z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1310z00_3108); 
FAILURE(BgL_auxz00_8315,BFALSE,BFALSE);} 
BgL_nz00_3114 = 
(long)CINT(BgL_tmpz00_8312); } 
if(
(BgL_nz00_3114<((long)0)))
{ /* Llib/weakhash.scm 466 */
BgL_res2200z00_3121 = 
NEG(BgL_nz00_3114); }  else 
{ /* Llib/weakhash.scm 466 */
BgL_res2200z00_3121 = BgL_nz00_3114; } } }  else 
{ /* Llib/weakhash.scm 466 */
BgL_res2200z00_3121 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_80); } } 
BgL_arg1551z00_1648 = BgL_res2200z00_3121; } 
{ /* Llib/weakhash.scm 466 */
long BgL_res2206z00_3140;
{ /* Llib/weakhash.scm 466 */
long BgL_n1z00_3122;long BgL_n2z00_3123;
BgL_n1z00_3122 = BgL_arg1551z00_1648; 
BgL_n2z00_3123 = BgL_bucketzd2lenzd2_1617; 
{ /* Llib/weakhash.scm 466 */
bool_t BgL_test4023z00_8324;
{ /* Llib/weakhash.scm 466 */
long BgL_arg1836z00_3125;
BgL_arg1836z00_3125 = 
(((BgL_n1z00_3122) | (BgL_n2z00_3123)) & -2147483648); 
BgL_test4023z00_8324 = 
(BgL_arg1836z00_3125==((long)0)); } 
if(BgL_test4023z00_8324)
{ /* Llib/weakhash.scm 466 */
int32_t BgL_arg1832z00_3126;
{ /* Llib/weakhash.scm 466 */
int32_t BgL_arg1833z00_3127;int32_t BgL_arg1835z00_3128;
{ /* Llib/weakhash.scm 466 */
int32_t BgL_res2202z00_3132;
BgL_res2202z00_3132 = 
(int32_t)(BgL_n1z00_3122); 
BgL_arg1833z00_3127 = BgL_res2202z00_3132; } 
{ /* Llib/weakhash.scm 466 */
int32_t BgL_res2203z00_3134;
BgL_res2203z00_3134 = 
(int32_t)(BgL_n2z00_3123); 
BgL_arg1835z00_3128 = BgL_res2203z00_3134; } 
BgL_arg1832z00_3126 = 
(BgL_arg1833z00_3127%BgL_arg1835z00_3128); } 
{ /* Llib/weakhash.scm 466 */
long BgL_res2205z00_3139;
{ /* Llib/weakhash.scm 466 */
long BgL_arg1940z00_3136;
BgL_arg1940z00_3136 = 
(long)(BgL_arg1832z00_3126); 
{ /* Llib/weakhash.scm 466 */
long BgL_res2204z00_3138;
BgL_res2204z00_3138 = 
(long)(BgL_arg1940z00_3136); 
BgL_res2205z00_3139 = BgL_res2204z00_3138; } } 
BgL_res2206z00_3140 = BgL_res2205z00_3139; } }  else 
{ /* Llib/weakhash.scm 466 */
BgL_res2206z00_3140 = 
(BgL_n1z00_3122%BgL_n2z00_3123); } } } 
BgL_bucketzd2numzd2_1618 = BgL_res2206z00_3140; } } 
{ /* Llib/weakhash.scm 466 */
obj_t BgL_bucketz00_1619;
{ /* Llib/weakhash.scm 467 */
obj_t BgL_vectorz00_3141;
if(
VECTORP(BgL_bucketsz00_1616))
{ /* Llib/weakhash.scm 467 */
BgL_vectorz00_3141 = BgL_bucketsz00_1616; }  else 
{ 
obj_t BgL_auxz00_8335;
BgL_auxz00_8335 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)18210)), BGl_string3410z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1616); 
FAILURE(BgL_auxz00_8335,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 467 */
bool_t BgL_test4025z00_8339;
{ /* Llib/weakhash.scm 467 */
long BgL_tmpz00_8340;
BgL_tmpz00_8340 = 
VECTOR_LENGTH(BgL_vectorz00_3141); 
BgL_test4025z00_8339 = 
BOUND_CHECK(BgL_bucketzd2numzd2_1618, BgL_tmpz00_8340); } 
if(BgL_test4025z00_8339)
{ /* Llib/weakhash.scm 467 */
BgL_bucketz00_1619 = 
VECTOR_REF(BgL_vectorz00_3141,BgL_bucketzd2numzd2_1618); }  else 
{ 
obj_t BgL_auxz00_8344;
BgL_auxz00_8344 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)18198)), BGl_string3326z00zz__weakhashz00, BgL_vectorz00_3141, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_3141)), 
(int)(BgL_bucketzd2numzd2_1618)); 
FAILURE(BgL_auxz00_8344,BFALSE,BFALSE);} } } 
{ /* Llib/weakhash.scm 467 */
obj_t BgL_maxzd2bucketzd2lenz00_1620;
{ /* Llib/weakhash.scm 468 */
bool_t BgL_test4026z00_8351;
{ /* Llib/weakhash.scm 468 */
obj_t BgL_tmpz00_8352;
{ /* Llib/weakhash.scm 468 */
obj_t BgL_res2207z00_3146;
{ /* Llib/weakhash.scm 468 */
obj_t BgL_aux3126z00_4804;
BgL_aux3126z00_4804 = 
STRUCT_KEY(BgL_tablez00_79); 
if(
SYMBOLP(BgL_aux3126z00_4804))
{ /* Llib/weakhash.scm 468 */
BgL_res2207z00_3146 = BgL_aux3126z00_4804; }  else 
{ 
obj_t BgL_auxz00_8356;
BgL_auxz00_8356 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)18250)), BGl_string3410z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3126z00_4804); 
FAILURE(BgL_auxz00_8356,BFALSE,BFALSE);} } 
BgL_tmpz00_8352 = BgL_res2207z00_3146; } 
BgL_test4026z00_8351 = 
(BgL_tmpz00_8352==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4026z00_8351)
{ /* Llib/weakhash.scm 468 */
int BgL_tmpz00_8361;
BgL_tmpz00_8361 = 
(int)(((long)1)); 
BgL_maxzd2bucketzd2lenz00_1620 = 
STRUCT_REF(BgL_tablez00_79, BgL_tmpz00_8361); }  else 
{ /* Llib/weakhash.scm 468 */
BgL_maxzd2bucketzd2lenz00_1620 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_79); } } 
{ /* Llib/weakhash.scm 468 */
obj_t BgL_countz00_4070;
BgL_countz00_4070 = 
MAKE_CELL(
BINT(((long)0))); 
{ /* Llib/weakhash.scm 469 */
obj_t BgL_foundz00_1622;
{ /* Llib/weakhash.scm 474 */
obj_t BgL_zc3z04anonymousza31543ze3z87_4054;
{ 
int BgL_tmpz00_8366;
BgL_tmpz00_8366 = 
(int)(((long)4)); 
BgL_zc3z04anonymousza31543ze3z87_4054 = 
MAKE_L_PROCEDURE(BGl_z62zc3z04anonymousza31543ze3ze5zz__weakhashz00, BgL_tmpz00_8366); } 
PROCEDURE_L_SET(BgL_zc3z04anonymousza31543ze3z87_4054, 
(int)(((long)0)), 
((obj_t)BgL_countz00_4070)); 
PROCEDURE_L_SET(BgL_zc3z04anonymousza31543ze3z87_4054, 
(int)(((long)1)), BgL_procz00_81); 
PROCEDURE_L_SET(BgL_zc3z04anonymousza31543ze3z87_4054, 
(int)(((long)2)), BgL_tablez00_79); 
PROCEDURE_L_SET(BgL_zc3z04anonymousza31543ze3z87_4054, 
(int)(((long)3)), BgL_keyz00_80); 
BgL_foundz00_1622 = 
BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_79, BgL_bucketsz00_1616, BgL_bucketzd2numzd2_1618, BgL_zc3z04anonymousza31543ze3z87_4054); } 
{ /* Llib/weakhash.scm 471 */

if(
(BgL_foundz00_1622==BGl_keepgoingz00zz__weakhashz00))
{ /* Llib/weakhash.scm 487 */
obj_t BgL_vz00_1624;
if(
BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(BgL_tablez00_79))
{ /* Llib/weakhash.scm 488 */
obj_t BgL_arg1540z00_1635;obj_t BgL_arg1541z00_1636;
BgL_arg1540z00_1635 = 
make_weakptr(BgL_objz00_82); 
BgL_arg1541z00_1636 = 
make_weakptr(BgL_initz00_83); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_81, ((long)2)))
{ /* Llib/weakhash.scm 488 */
BgL_vz00_1624 = 
PROCEDURE_ENTRY(BgL_procz00_81)(BgL_procz00_81, BgL_arg1540z00_1635, BgL_arg1541z00_1636, BEOA); }  else 
{ /* Llib/weakhash.scm 488 */
FAILURE(BGl_string3411z00zz__weakhashz00,BGl_list3412z00zz__weakhashz00,BgL_procz00_81);} }  else 
{ /* Llib/weakhash.scm 487 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_81, ((long)2)))
{ /* Llib/weakhash.scm 489 */
BgL_vz00_1624 = 
PROCEDURE_ENTRY(BgL_procz00_81)(BgL_procz00_81, BgL_objz00_82, BgL_initz00_83, BEOA); }  else 
{ /* Llib/weakhash.scm 489 */
FAILURE(BGl_string3411z00zz__weakhashz00,BGl_list3417z00zz__weakhashz00,BgL_procz00_81);} } 
{ /* Llib/weakhash.scm 490 */
long BgL_arg1530z00_1625;
{ /* Llib/weakhash.scm 490 */
obj_t BgL_arg1531z00_1626;
{ /* Llib/weakhash.scm 490 */
bool_t BgL_test4032z00_8401;
{ /* Llib/weakhash.scm 490 */
obj_t BgL_tmpz00_8402;
{ /* Llib/weakhash.scm 490 */
obj_t BgL_res2221z00_3185;
{ /* Llib/weakhash.scm 490 */
obj_t BgL_aux3132z00_4812;
BgL_aux3132z00_4812 = 
STRUCT_KEY(BgL_tablez00_79); 
if(
SYMBOLP(BgL_aux3132z00_4812))
{ /* Llib/weakhash.scm 490 */
BgL_res2221z00_3185 = BgL_aux3132z00_4812; }  else 
{ 
obj_t BgL_auxz00_8406;
BgL_auxz00_8406 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)18997)), BGl_string3410z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3132z00_4812); 
FAILURE(BgL_auxz00_8406,BFALSE,BFALSE);} } 
BgL_tmpz00_8402 = BgL_res2221z00_3185; } 
BgL_test4032z00_8401 = 
(BgL_tmpz00_8402==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4032z00_8401)
{ /* Llib/weakhash.scm 490 */
int BgL_tmpz00_8411;
BgL_tmpz00_8411 = 
(int)(((long)0)); 
BgL_arg1531z00_1626 = 
STRUCT_REF(BgL_tablez00_79, BgL_tmpz00_8411); }  else 
{ /* Llib/weakhash.scm 490 */
BgL_arg1531z00_1626 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_79); } } 
{ /* Llib/weakhash.scm 490 */
long BgL_za71za7_3186;
{ /* Llib/weakhash.scm 490 */
obj_t BgL_tmpz00_8415;
if(
INTEGERP(BgL_arg1531z00_1626))
{ /* Llib/weakhash.scm 490 */
BgL_tmpz00_8415 = BgL_arg1531z00_1626
; }  else 
{ 
obj_t BgL_auxz00_8418;
BgL_auxz00_8418 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)19019)), BGl_string3410z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1531z00_1626); 
FAILURE(BgL_auxz00_8418,BFALSE,BFALSE);} 
BgL_za71za7_3186 = 
(long)CINT(BgL_tmpz00_8415); } 
BgL_arg1530z00_1625 = 
(BgL_za71za7_3186+((long)1)); } } 
{ /* Llib/weakhash.scm 490 */
bool_t BgL_test4035z00_8424;
{ /* Llib/weakhash.scm 490 */
obj_t BgL_tmpz00_8425;
{ /* Llib/weakhash.scm 490 */
obj_t BgL_res2223z00_3191;
{ /* Llib/weakhash.scm 490 */
obj_t BgL_aux3136z00_4816;
BgL_aux3136z00_4816 = 
STRUCT_KEY(BgL_tablez00_79); 
if(
SYMBOLP(BgL_aux3136z00_4816))
{ /* Llib/weakhash.scm 490 */
BgL_res2223z00_3191 = BgL_aux3136z00_4816; }  else 
{ 
obj_t BgL_auxz00_8429;
BgL_auxz00_8429 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)18964)), BGl_string3410z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3136z00_4816); 
FAILURE(BgL_auxz00_8429,BFALSE,BFALSE);} } 
BgL_tmpz00_8425 = BgL_res2223z00_3191; } 
BgL_test4035z00_8424 = 
(BgL_tmpz00_8425==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4035z00_8424)
{ /* Llib/weakhash.scm 490 */
obj_t BgL_auxz00_8436;int BgL_tmpz00_8434;
BgL_auxz00_8436 = 
BINT(BgL_arg1530z00_1625); 
BgL_tmpz00_8434 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_79, BgL_tmpz00_8434, BgL_auxz00_8436); }  else 
{ /* Llib/weakhash.scm 490 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_79); } } } 
{ /* Llib/weakhash.scm 492 */
obj_t BgL_arg1532z00_1627;
{ /* Llib/weakhash.scm 492 */
obj_t BgL_arg1533z00_1628;obj_t BgL_arg1534z00_1629;
{ /* Llib/weakhash.scm 492 */
obj_t BgL_arg1535z00_1630;
if(
BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(BgL_tablez00_79))
{ /* Llib/weakhash.scm 492 */
BgL_arg1535z00_1630 = 
make_weakptr(BgL_keyz00_80); }  else 
{ /* Llib/weakhash.scm 492 */
BgL_arg1535z00_1630 = BgL_keyz00_80; } 
BgL_arg1533z00_1628 = 
MAKE_YOUNG_PAIR(BgL_arg1535z00_1630, BgL_vz00_1624); } 
{ /* Llib/weakhash.scm 498 */
obj_t BgL_arg1537z00_1632;
{ /* Llib/weakhash.scm 498 */
bool_t BgL_test4038z00_8444;
{ /* Llib/weakhash.scm 498 */
obj_t BgL_tmpz00_8445;
{ /* Llib/weakhash.scm 498 */
obj_t BgL_res2225z00_3196;
{ /* Llib/weakhash.scm 498 */
obj_t BgL_aux3138z00_4818;
BgL_aux3138z00_4818 = 
STRUCT_KEY(BgL_tablez00_79); 
if(
SYMBOLP(BgL_aux3138z00_4818))
{ /* Llib/weakhash.scm 498 */
BgL_res2225z00_3196 = BgL_aux3138z00_4818; }  else 
{ 
obj_t BgL_auxz00_8449;
BgL_auxz00_8449 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)19259)), BGl_string3410z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3138z00_4818); 
FAILURE(BgL_auxz00_8449,BFALSE,BFALSE);} } 
BgL_tmpz00_8445 = BgL_res2225z00_3196; } 
BgL_test4038z00_8444 = 
(BgL_tmpz00_8445==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4038z00_8444)
{ /* Llib/weakhash.scm 498 */
int BgL_tmpz00_8454;
BgL_tmpz00_8454 = 
(int)(((long)2)); 
BgL_arg1537z00_1632 = 
STRUCT_REF(BgL_tablez00_79, BgL_tmpz00_8454); }  else 
{ /* Llib/weakhash.scm 498 */
BgL_arg1537z00_1632 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_79); } } 
{ /* Llib/weakhash.scm 498 */
obj_t BgL_vectorz00_3197;
if(
VECTORP(BgL_arg1537z00_1632))
{ /* Llib/weakhash.scm 498 */
BgL_vectorz00_3197 = BgL_arg1537z00_1632; }  else 
{ 
obj_t BgL_auxz00_8460;
BgL_auxz00_8460 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)19284)), BGl_string3410z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_arg1537z00_1632); 
FAILURE(BgL_auxz00_8460,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 498 */
bool_t BgL_test4041z00_8464;
{ /* Llib/weakhash.scm 498 */
long BgL_tmpz00_8465;
BgL_tmpz00_8465 = 
VECTOR_LENGTH(BgL_vectorz00_3197); 
BgL_test4041z00_8464 = 
BOUND_CHECK(BgL_bucketzd2numzd2_1618, BgL_tmpz00_8465); } 
if(BgL_test4041z00_8464)
{ /* Llib/weakhash.scm 498 */
BgL_arg1534z00_1629 = 
VECTOR_REF(BgL_vectorz00_3197,BgL_bucketzd2numzd2_1618); }  else 
{ 
obj_t BgL_auxz00_8469;
BgL_auxz00_8469 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)19247)), BGl_string3326z00zz__weakhashz00, BgL_vectorz00_3197, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_3197)), 
(int)(BgL_bucketzd2numzd2_1618)); 
FAILURE(BgL_auxz00_8469,BFALSE,BFALSE);} } } } 
BgL_arg1532z00_1627 = 
MAKE_YOUNG_PAIR(BgL_arg1533z00_1628, BgL_arg1534z00_1629); } 
{ /* Llib/weakhash.scm 491 */
obj_t BgL_vectorz00_3199;
if(
VECTORP(BgL_bucketsz00_1616))
{ /* Llib/weakhash.scm 491 */
BgL_vectorz00_3199 = BgL_bucketsz00_1616; }  else 
{ 
obj_t BgL_auxz00_8479;
BgL_auxz00_8479 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)19044)), BGl_string3410z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1616); 
FAILURE(BgL_auxz00_8479,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 491 */
bool_t BgL_test4043z00_8483;
{ /* Llib/weakhash.scm 491 */
long BgL_tmpz00_8484;
BgL_tmpz00_8484 = 
VECTOR_LENGTH(BgL_vectorz00_3199); 
BgL_test4043z00_8483 = 
BOUND_CHECK(BgL_bucketzd2numzd2_1618, BgL_tmpz00_8484); } 
if(BgL_test4043z00_8483)
{ /* Llib/weakhash.scm 491 */
VECTOR_SET(BgL_vectorz00_3199,BgL_bucketzd2numzd2_1618,BgL_arg1532z00_1627); }  else 
{ 
obj_t BgL_auxz00_8488;
BgL_auxz00_8488 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)19031)), BGl_string3331z00zz__weakhashz00, BgL_vectorz00_3199, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_3199)), 
(int)(BgL_bucketzd2numzd2_1618)); 
FAILURE(BgL_auxz00_8488,BFALSE,BFALSE);} } } } 
{ /* Llib/weakhash.scm 500 */
bool_t BgL_test4044z00_8495;
{ /* Llib/weakhash.scm 500 */
long BgL_n1z00_3201;long BgL_n2z00_3202;
{ /* Llib/weakhash.scm 500 */
obj_t BgL_tmpz00_8496;
{ /* Llib/weakhash.scm 500 */
obj_t BgL_aux3144z00_4824;
BgL_aux3144z00_4824 = 
CELL_REF(BgL_countz00_4070); 
if(
INTEGERP(BgL_aux3144z00_4824))
{ /* Llib/weakhash.scm 500 */
BgL_tmpz00_8496 = BgL_aux3144z00_4824
; }  else 
{ 
obj_t BgL_auxz00_8499;
BgL_auxz00_8499 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)19324)), BGl_string3410z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_aux3144z00_4824); 
FAILURE(BgL_auxz00_8499,BFALSE,BFALSE);} } 
BgL_n1z00_3201 = 
(long)CINT(BgL_tmpz00_8496); } 
{ /* Llib/weakhash.scm 500 */
obj_t BgL_tmpz00_8504;
if(
INTEGERP(BgL_maxzd2bucketzd2lenz00_1620))
{ /* Llib/weakhash.scm 500 */
BgL_tmpz00_8504 = BgL_maxzd2bucketzd2lenz00_1620
; }  else 
{ 
obj_t BgL_auxz00_8507;
BgL_auxz00_8507 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)19330)), BGl_string3410z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_maxzd2bucketzd2lenz00_1620); 
FAILURE(BgL_auxz00_8507,BFALSE,BFALSE);} 
BgL_n2z00_3202 = 
(long)CINT(BgL_tmpz00_8504); } 
BgL_test4044z00_8495 = 
(BgL_n1z00_3201>BgL_n2z00_3202); } 
if(BgL_test4044z00_8495)
{ /* Llib/weakhash.scm 500 */
BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00(BgL_tablez00_79); }  else 
{ /* Llib/weakhash.scm 500 */BFALSE; } } 
return BgL_vz00_1624;}  else 
{ /* Llib/weakhash.scm 485 */
return BgL_foundz00_1622;} } } } } } } } } } 

}



/* &weak-hashtable-add! */
obj_t BGl_z62weakzd2hashtablezd2addz12z70zz__weakhashz00(obj_t BgL_envz00_4055, obj_t BgL_tablez00_4056, obj_t BgL_keyz00_4057, obj_t BgL_procz00_4058, obj_t BgL_objz00_4059, obj_t BgL_initz00_4060)
{
{ /* Llib/weakhash.scm 463 */
{ /* Llib/weakhash.scm 464 */
obj_t BgL_auxz00_8521;obj_t BgL_auxz00_8514;
if(
PROCEDUREP(BgL_procz00_4058))
{ /* Llib/weakhash.scm 464 */
BgL_auxz00_8521 = BgL_procz00_4058
; }  else 
{ 
obj_t BgL_auxz00_8524;
BgL_auxz00_8524 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)18029)), BGl_string3422z00zz__weakhashz00, BGl_string3334z00zz__weakhashz00, BgL_procz00_4058); 
FAILURE(BgL_auxz00_8524,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_tablez00_4056))
{ /* Llib/weakhash.scm 464 */
BgL_auxz00_8514 = BgL_tablez00_4056
; }  else 
{ 
obj_t BgL_auxz00_8517;
BgL_auxz00_8517 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)18029)), BGl_string3422z00zz__weakhashz00, BGl_string3358z00zz__weakhashz00, BgL_tablez00_4056); 
FAILURE(BgL_auxz00_8517,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2addz12z12zz__weakhashz00(BgL_auxz00_8514, BgL_keyz00_4057, BgL_auxz00_8521, BgL_objz00_4059, BgL_initz00_4060);} } 

}



/* &<@anonymous:1543> */
obj_t BGl_z62zc3z04anonymousza31543ze3ze5zz__weakhashz00(obj_t BgL_envz00_4061, obj_t BgL_bkeyz00_4066, obj_t BgL_valz00_4067, obj_t BgL_bucketz00_4068)
{
{ /* Llib/weakhash.scm 473 */
{ /* Llib/weakhash.scm 474 */
obj_t BgL_countz00_4062;obj_t BgL_procz00_4063;obj_t BgL_tablez00_4064;obj_t BgL_keyz00_4065;
BgL_countz00_4062 = 
PROCEDURE_L_REF(BgL_envz00_4061, 
(int)(((long)0))); 
BgL_procz00_4063 = 
((obj_t)
PROCEDURE_L_REF(BgL_envz00_4061, 
(int)(((long)1)))); 
BgL_tablez00_4064 = 
((obj_t)
PROCEDURE_L_REF(BgL_envz00_4061, 
(int)(((long)2)))); 
BgL_keyz00_4065 = 
PROCEDURE_L_REF(BgL_envz00_4061, 
(int)(((long)3))); 
{ /* Llib/weakhash.scm 474 */
obj_t BgL_auxz00_5065;
{ /* Llib/weakhash.scm 474 */
obj_t BgL_tmpz00_8539;
{ /* Llib/weakhash.scm 474 */
obj_t BgL_aux3152z00_5066;
BgL_aux3152z00_5066 = 
CELL_REF(BgL_countz00_4062); 
if(
INTEGERP(BgL_aux3152z00_5066))
{ /* Llib/weakhash.scm 474 */
BgL_tmpz00_8539 = BgL_aux3152z00_5066
; }  else 
{ 
obj_t BgL_auxz00_8542;
BgL_auxz00_8542 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)18485)), BGl_string3423z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_aux3152z00_5066); 
FAILURE(BgL_auxz00_8542,BFALSE,BFALSE);} } 
BgL_auxz00_5065 = 
ADDFX(BgL_tmpz00_8539, 
BINT(((long)1))); } 
CELL_SET(BgL_countz00_4062, BgL_auxz00_5065); } 
{ /* Llib/weakhash.scm 475 */
bool_t BgL_test4050z00_8548;
{ /* Llib/weakhash.scm 475 */
obj_t BgL_eqtz00_5067;
{ /* Llib/weakhash.scm 475 */
bool_t BgL_test4051z00_8549;
{ /* Llib/weakhash.scm 475 */
obj_t BgL_tmpz00_8550;
{ /* Llib/weakhash.scm 475 */
obj_t BgL_res2209z00_5068;
{ /* Llib/weakhash.scm 475 */
obj_t BgL_aux3154z00_5069;
BgL_aux3154z00_5069 = 
STRUCT_KEY(BgL_tablez00_4064); 
if(
SYMBOLP(BgL_aux3154z00_5069))
{ /* Llib/weakhash.scm 475 */
BgL_res2209z00_5068 = BgL_aux3154z00_5069; }  else 
{ 
obj_t BgL_auxz00_8554;
BgL_auxz00_8554 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)18506)), BGl_string3423z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3154z00_5069); 
FAILURE(BgL_auxz00_8554,BFALSE,BFALSE);} } 
BgL_tmpz00_8550 = BgL_res2209z00_5068; } 
BgL_test4051z00_8549 = 
(BgL_tmpz00_8550==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4051z00_8549)
{ /* Llib/weakhash.scm 475 */
int BgL_tmpz00_8559;
BgL_tmpz00_8559 = 
(int)(((long)3)); 
BgL_eqtz00_5067 = 
STRUCT_REF(BgL_tablez00_4064, BgL_tmpz00_8559); }  else 
{ /* Llib/weakhash.scm 475 */
BgL_eqtz00_5067 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_4064); } } 
if(
PROCEDUREP(BgL_eqtz00_5067))
{ /* Llib/weakhash.scm 475 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_eqtz00_5067, ((long)2)))
{ /* Llib/weakhash.scm 475 */
BgL_test4050z00_8548 = 
CBOOL(
PROCEDURE_ENTRY(BgL_eqtz00_5067)(BgL_eqtz00_5067, BgL_bkeyz00_4066, BgL_keyz00_4065, BEOA))
; }  else 
{ /* Llib/weakhash.scm 475 */
FAILURE(BGl_string3424z00zz__weakhashz00,BGl_list3401z00zz__weakhashz00,BgL_eqtz00_5067);} }  else 
{ /* Llib/weakhash.scm 475 */
if(
(BgL_bkeyz00_4066==BgL_keyz00_4065))
{ /* Llib/weakhash.scm 475 */
BgL_test4050z00_8548 = ((bool_t)1)
; }  else 
{ /* Llib/weakhash.scm 475 */
if(
STRINGP(BgL_bkeyz00_4066))
{ /* Llib/weakhash.scm 475 */
if(
STRINGP(BgL_keyz00_4065))
{ /* Llib/weakhash.scm 475 */
bool_t BgL_res2217z00_5070;
{ /* Llib/weakhash.scm 475 */
long BgL_l1z00_5071;
BgL_l1z00_5071 = 
STRING_LENGTH(BgL_bkeyz00_4066); 
if(
(BgL_l1z00_5071==
STRING_LENGTH(BgL_keyz00_4065)))
{ /* Llib/weakhash.scm 475 */
int BgL_arg1721z00_5072;
{ /* Llib/weakhash.scm 475 */
char * BgL_auxz00_8586;char * BgL_tmpz00_8584;
BgL_auxz00_8586 = 
BSTRING_TO_STRING(BgL_keyz00_4065); 
BgL_tmpz00_8584 = 
BSTRING_TO_STRING(BgL_bkeyz00_4066); 
BgL_arg1721z00_5072 = 
memcmp(BgL_tmpz00_8584, BgL_auxz00_8586, BgL_l1z00_5071); } 
BgL_res2217z00_5070 = 
(
(long)(BgL_arg1721z00_5072)==((long)0)); }  else 
{ /* Llib/weakhash.scm 475 */
BgL_res2217z00_5070 = ((bool_t)0); } } 
BgL_test4050z00_8548 = BgL_res2217z00_5070; }  else 
{ /* Llib/weakhash.scm 475 */
BgL_test4050z00_8548 = ((bool_t)0)
; } }  else 
{ /* Llib/weakhash.scm 475 */
BgL_test4050z00_8548 = ((bool_t)0)
; } } } } 
if(BgL_test4050z00_8548)
{ /* Llib/weakhash.scm 476 */
obj_t BgL_newvalz00_5073;
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_4063, ((long)1)))
{ /* Llib/weakhash.scm 476 */
BgL_newvalz00_5073 = 
PROCEDURE_ENTRY(BgL_procz00_4063)(BgL_procz00_4063, BgL_valz00_4067, BEOA); }  else 
{ /* Llib/weakhash.scm 476 */
FAILURE(BGl_string3424z00zz__weakhashz00,BGl_list3407z00zz__weakhashz00,BgL_procz00_4063);} 
{ /* Llib/weakhash.scm 477 */
obj_t BgL_arg1545z00_5074;obj_t BgL_arg1546z00_5075;
{ /* Llib/weakhash.scm 477 */
obj_t BgL_pairz00_5076;
if(
PAIRP(BgL_bucketz00_4068))
{ /* Llib/weakhash.scm 477 */
BgL_pairz00_5076 = BgL_bucketz00_4068; }  else 
{ 
obj_t BgL_auxz00_8600;
BgL_auxz00_8600 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)18593)), BGl_string3423z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_bucketz00_4068); 
FAILURE(BgL_auxz00_8600,BFALSE,BFALSE);} 
BgL_arg1545z00_5074 = 
CAR(BgL_pairz00_5076); } 
if(
BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(BgL_tablez00_4064))
{ /* Llib/weakhash.scm 478 */
BgL_arg1546z00_5075 = 
make_weakptr(BgL_newvalz00_5073); }  else 
{ /* Llib/weakhash.scm 478 */
BgL_arg1546z00_5075 = BgL_newvalz00_5073; } 
{ /* Llib/weakhash.scm 477 */
obj_t BgL_pairz00_5077;
if(
PAIRP(BgL_arg1545z00_5074))
{ /* Llib/weakhash.scm 477 */
BgL_pairz00_5077 = BgL_arg1545z00_5074; }  else 
{ 
obj_t BgL_auxz00_8610;
BgL_auxz00_8610 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)18599)), BGl_string3423z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_arg1545z00_5074); 
FAILURE(BgL_auxz00_8610,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_5077, BgL_arg1546z00_5075); } } 
return BgL_newvalz00_5073;}  else 
{ /* Llib/weakhash.scm 475 */
return BGl_keepgoingz00zz__weakhashz00;} } } } 

}



/* weak-hashtable-remove! */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2removez12z12zz__weakhashz00(obj_t BgL_tablez00_84, obj_t BgL_keyz00_85)
{
{ /* Llib/weakhash.scm 507 */
{ /* Llib/weakhash.scm 508 */
obj_t BgL_bucketsz00_1649;
{ /* Llib/weakhash.scm 508 */
bool_t BgL_test4063z00_8615;
{ /* Llib/weakhash.scm 508 */
obj_t BgL_tmpz00_8616;
{ /* Llib/weakhash.scm 508 */
obj_t BgL_res2227z00_3207;
{ /* Llib/weakhash.scm 508 */
obj_t BgL_aux3164z00_4846;
BgL_aux3164z00_4846 = 
STRUCT_KEY(BgL_tablez00_84); 
if(
SYMBOLP(BgL_aux3164z00_4846))
{ /* Llib/weakhash.scm 508 */
BgL_res2227z00_3207 = BgL_aux3164z00_4846; }  else 
{ 
obj_t BgL_auxz00_8620;
BgL_auxz00_8620 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)19691)), BGl_string3425z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3164z00_4846); 
FAILURE(BgL_auxz00_8620,BFALSE,BFALSE);} } 
BgL_tmpz00_8616 = BgL_res2227z00_3207; } 
BgL_test4063z00_8615 = 
(BgL_tmpz00_8616==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4063z00_8615)
{ /* Llib/weakhash.scm 508 */
int BgL_tmpz00_8625;
BgL_tmpz00_8625 = 
(int)(((long)2)); 
BgL_bucketsz00_1649 = 
STRUCT_REF(BgL_tablez00_84, BgL_tmpz00_8625); }  else 
{ /* Llib/weakhash.scm 508 */
BgL_bucketsz00_1649 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_84); } } 
{ /* Llib/weakhash.scm 508 */
long BgL_bucketzd2lenzd2_1650;
{ /* Llib/weakhash.scm 509 */
obj_t BgL_vectorz00_3208;
if(
VECTORP(BgL_bucketsz00_1649))
{ /* Llib/weakhash.scm 509 */
BgL_vectorz00_3208 = BgL_bucketsz00_1649; }  else 
{ 
obj_t BgL_auxz00_8631;
BgL_auxz00_8631 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)19749)), BGl_string3425z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1649); 
FAILURE(BgL_auxz00_8631,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1650 = 
VECTOR_LENGTH(BgL_vectorz00_3208); } 
{ /* Llib/weakhash.scm 509 */
long BgL_bucketzd2numzd2_1651;
{ /* Llib/weakhash.scm 510 */
long BgL_arg1556z00_1662;
{ /* Llib/weakhash.scm 510 */
long BgL_res2233z00_3224;
{ /* Llib/weakhash.scm 510 */
obj_t BgL_hashnz00_3209;
{ /* Llib/weakhash.scm 510 */
bool_t BgL_test4066z00_8636;
{ /* Llib/weakhash.scm 510 */
obj_t BgL_tmpz00_8637;
{ /* Llib/weakhash.scm 510 */
obj_t BgL_res2228z00_3215;
{ /* Llib/weakhash.scm 510 */
obj_t BgL_aux3168z00_4850;
BgL_aux3168z00_4850 = 
STRUCT_KEY(BgL_tablez00_84); 
if(
SYMBOLP(BgL_aux3168z00_4850))
{ /* Llib/weakhash.scm 510 */
BgL_res2228z00_3215 = BgL_aux3168z00_4850; }  else 
{ 
obj_t BgL_auxz00_8641;
BgL_auxz00_8641 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)19787)), BGl_string3425z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3168z00_4850); 
FAILURE(BgL_auxz00_8641,BFALSE,BFALSE);} } 
BgL_tmpz00_8637 = BgL_res2228z00_3215; } 
BgL_test4066z00_8636 = 
(BgL_tmpz00_8637==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4066z00_8636)
{ /* Llib/weakhash.scm 510 */
int BgL_tmpz00_8646;
BgL_tmpz00_8646 = 
(int)(((long)4)); 
BgL_hashnz00_3209 = 
STRUCT_REF(BgL_tablez00_84, BgL_tmpz00_8646); }  else 
{ /* Llib/weakhash.scm 510 */
BgL_hashnz00_3209 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_84); } } 
if(
PROCEDUREP(BgL_hashnz00_3209))
{ /* Llib/weakhash.scm 510 */
obj_t BgL_arg1310z00_3211;
if(
PROCEDURE_CORRECT_ARITYP(BgL_hashnz00_3209, ((long)1)))
{ /* Llib/weakhash.scm 510 */
BgL_arg1310z00_3211 = 
PROCEDURE_ENTRY(BgL_hashnz00_3209)(BgL_hashnz00_3209, BgL_keyz00_85, BEOA); }  else 
{ /* Llib/weakhash.scm 510 */
FAILURE(BGl_string3426z00zz__weakhashz00,BGl_list3380z00zz__weakhashz00,BgL_hashnz00_3209);} 
{ /* Llib/weakhash.scm 510 */
long BgL_nz00_3217;
{ /* Llib/weakhash.scm 510 */
obj_t BgL_tmpz00_8659;
if(
INTEGERP(BgL_arg1310z00_3211))
{ /* Llib/weakhash.scm 510 */
BgL_tmpz00_8659 = BgL_arg1310z00_3211
; }  else 
{ 
obj_t BgL_auxz00_8662;
BgL_auxz00_8662 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)19787)), BGl_string3425z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1310z00_3211); 
FAILURE(BgL_auxz00_8662,BFALSE,BFALSE);} 
BgL_nz00_3217 = 
(long)CINT(BgL_tmpz00_8659); } 
if(
(BgL_nz00_3217<((long)0)))
{ /* Llib/weakhash.scm 510 */
BgL_res2233z00_3224 = 
NEG(BgL_nz00_3217); }  else 
{ /* Llib/weakhash.scm 510 */
BgL_res2233z00_3224 = BgL_nz00_3217; } } }  else 
{ /* Llib/weakhash.scm 510 */
BgL_res2233z00_3224 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_85); } } 
BgL_arg1556z00_1662 = BgL_res2233z00_3224; } 
{ /* Llib/weakhash.scm 510 */
long BgL_res2239z00_3243;
{ /* Llib/weakhash.scm 510 */
long BgL_n1z00_3225;long BgL_n2z00_3226;
BgL_n1z00_3225 = BgL_arg1556z00_1662; 
BgL_n2z00_3226 = BgL_bucketzd2lenzd2_1650; 
{ /* Llib/weakhash.scm 510 */
bool_t BgL_test4072z00_8671;
{ /* Llib/weakhash.scm 510 */
long BgL_arg1836z00_3228;
BgL_arg1836z00_3228 = 
(((BgL_n1z00_3225) | (BgL_n2z00_3226)) & -2147483648); 
BgL_test4072z00_8671 = 
(BgL_arg1836z00_3228==((long)0)); } 
if(BgL_test4072z00_8671)
{ /* Llib/weakhash.scm 510 */
int32_t BgL_arg1832z00_3229;
{ /* Llib/weakhash.scm 510 */
int32_t BgL_arg1833z00_3230;int32_t BgL_arg1835z00_3231;
{ /* Llib/weakhash.scm 510 */
int32_t BgL_res2235z00_3235;
BgL_res2235z00_3235 = 
(int32_t)(BgL_n1z00_3225); 
BgL_arg1833z00_3230 = BgL_res2235z00_3235; } 
{ /* Llib/weakhash.scm 510 */
int32_t BgL_res2236z00_3237;
BgL_res2236z00_3237 = 
(int32_t)(BgL_n2z00_3226); 
BgL_arg1835z00_3231 = BgL_res2236z00_3237; } 
BgL_arg1832z00_3229 = 
(BgL_arg1833z00_3230%BgL_arg1835z00_3231); } 
{ /* Llib/weakhash.scm 510 */
long BgL_res2238z00_3242;
{ /* Llib/weakhash.scm 510 */
long BgL_arg1940z00_3239;
BgL_arg1940z00_3239 = 
(long)(BgL_arg1832z00_3229); 
{ /* Llib/weakhash.scm 510 */
long BgL_res2237z00_3241;
BgL_res2237z00_3241 = 
(long)(BgL_arg1940z00_3239); 
BgL_res2238z00_3242 = BgL_res2237z00_3241; } } 
BgL_res2239z00_3243 = BgL_res2238z00_3242; } }  else 
{ /* Llib/weakhash.scm 510 */
BgL_res2239z00_3243 = 
(BgL_n1z00_3225%BgL_n2z00_3226); } } } 
BgL_bucketzd2numzd2_1651 = BgL_res2239z00_3243; } } 
{ /* Llib/weakhash.scm 510 */
obj_t BgL_bucketz00_1652;
{ /* Llib/weakhash.scm 511 */
obj_t BgL_vectorz00_3244;
if(
VECTORP(BgL_bucketsz00_1649))
{ /* Llib/weakhash.scm 511 */
BgL_vectorz00_3244 = BgL_bucketsz00_1649; }  else 
{ 
obj_t BgL_auxz00_8682;
BgL_auxz00_8682 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)19856)), BGl_string3425z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_bucketsz00_1649); 
FAILURE(BgL_auxz00_8682,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 511 */
bool_t BgL_test4074z00_8686;
{ /* Llib/weakhash.scm 511 */
long BgL_tmpz00_8687;
BgL_tmpz00_8687 = 
VECTOR_LENGTH(BgL_vectorz00_3244); 
BgL_test4074z00_8686 = 
BOUND_CHECK(BgL_bucketzd2numzd2_1651, BgL_tmpz00_8687); } 
if(BgL_test4074z00_8686)
{ /* Llib/weakhash.scm 511 */
BgL_bucketz00_1652 = 
VECTOR_REF(BgL_vectorz00_3244,BgL_bucketzd2numzd2_1651); }  else 
{ 
obj_t BgL_auxz00_8691;
BgL_auxz00_8691 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)19844)), BGl_string3326z00zz__weakhashz00, BgL_vectorz00_3244, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_3244)), 
(int)(BgL_bucketzd2numzd2_1651)); 
FAILURE(BgL_auxz00_8691,BFALSE,BFALSE);} } } 
{ /* Llib/weakhash.scm 511 */
obj_t BgL_foundz00_1653;
{ /* Llib/weakhash.scm 515 */
obj_t BgL_zc3z04anonymousza31554ze3z87_4072;
{ 
int BgL_tmpz00_8698;
BgL_tmpz00_8698 = 
(int)(((long)2)); 
BgL_zc3z04anonymousza31554ze3z87_4072 = 
MAKE_L_PROCEDURE(BGl_z62zc3z04anonymousza31554ze3ze5zz__weakhashz00, BgL_tmpz00_8698); } 
PROCEDURE_L_SET(BgL_zc3z04anonymousza31554ze3z87_4072, 
(int)(((long)0)), BgL_tablez00_84); 
PROCEDURE_L_SET(BgL_zc3z04anonymousza31554ze3z87_4072, 
(int)(((long)1)), BgL_keyz00_85); 
BgL_foundz00_1653 = 
BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_84, BgL_bucketsz00_1649, BgL_bucketzd2numzd2_1651, BgL_zc3z04anonymousza31554ze3z87_4072); } 
{ /* Llib/weakhash.scm 512 */

if(
(BgL_foundz00_1653==BGl_keepgoingz00zz__weakhashz00))
{ /* Llib/weakhash.scm 518 */
return BFALSE;}  else 
{ /* Llib/weakhash.scm 518 */
return BTRUE;} } } } } } } } 

}



/* &weak-hashtable-remove! */
obj_t BGl_z62weakzd2hashtablezd2removez12z70zz__weakhashz00(obj_t BgL_envz00_4073, obj_t BgL_tablez00_4074, obj_t BgL_keyz00_4075)
{
{ /* Llib/weakhash.scm 507 */
{ /* Llib/weakhash.scm 508 */
obj_t BgL_auxz00_8708;
if(
STRUCTP(BgL_tablez00_4074))
{ /* Llib/weakhash.scm 508 */
BgL_auxz00_8708 = BgL_tablez00_4074
; }  else 
{ 
obj_t BgL_auxz00_8711;
BgL_auxz00_8711 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)19675)), BGl_string3427z00zz__weakhashz00, BGl_string3358z00zz__weakhashz00, BgL_tablez00_4074); 
FAILURE(BgL_auxz00_8711,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2removez12z12zz__weakhashz00(BgL_auxz00_8708, BgL_keyz00_4075);} } 

}



/* &<@anonymous:1554> */
obj_t BGl_z62zc3z04anonymousza31554ze3ze5zz__weakhashz00(obj_t BgL_envz00_4076, obj_t BgL_bkeyz00_4079, obj_t BgL_valz00_4080, obj_t BgL_bucketz00_4081)
{
{ /* Llib/weakhash.scm 514 */
{ /* Llib/weakhash.scm 515 */
obj_t BgL_tablez00_4077;obj_t BgL_keyz00_4078;
BgL_tablez00_4077 = 
((obj_t)
PROCEDURE_L_REF(BgL_envz00_4076, 
(int)(((long)0)))); 
BgL_keyz00_4078 = 
PROCEDURE_L_REF(BgL_envz00_4076, 
(int)(((long)1))); 
{ /* Llib/weakhash.scm 515 */
bool_t BgL_test4077z00_8721;
{ /* Llib/weakhash.scm 515 */
obj_t BgL_eqtz00_5078;
{ /* Llib/weakhash.scm 515 */
bool_t BgL_test4078z00_8722;
{ /* Llib/weakhash.scm 515 */
obj_t BgL_tmpz00_8723;
{ /* Llib/weakhash.scm 515 */
obj_t BgL_res2240z00_5079;
{ /* Llib/weakhash.scm 515 */
obj_t BgL_aux3178z00_5080;
BgL_aux3178z00_5080 = 
STRUCT_KEY(BgL_tablez00_4077); 
if(
SYMBOLP(BgL_aux3178z00_5080))
{ /* Llib/weakhash.scm 515 */
BgL_res2240z00_5079 = BgL_aux3178z00_5080; }  else 
{ 
obj_t BgL_auxz00_8727;
BgL_auxz00_8727 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20014)), BGl_string3428z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3178z00_5080); 
FAILURE(BgL_auxz00_8727,BFALSE,BFALSE);} } 
BgL_tmpz00_8723 = BgL_res2240z00_5079; } 
BgL_test4078z00_8722 = 
(BgL_tmpz00_8723==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4078z00_8722)
{ /* Llib/weakhash.scm 515 */
int BgL_tmpz00_8732;
BgL_tmpz00_8732 = 
(int)(((long)3)); 
BgL_eqtz00_5078 = 
STRUCT_REF(BgL_tablez00_4077, BgL_tmpz00_8732); }  else 
{ /* Llib/weakhash.scm 515 */
BgL_eqtz00_5078 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_4077); } } 
if(
PROCEDUREP(BgL_eqtz00_5078))
{ /* Llib/weakhash.scm 515 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_eqtz00_5078, ((long)2)))
{ /* Llib/weakhash.scm 515 */
BgL_test4077z00_8721 = 
CBOOL(
PROCEDURE_ENTRY(BgL_eqtz00_5078)(BgL_eqtz00_5078, BgL_keyz00_4078, BgL_bkeyz00_4079, BEOA))
; }  else 
{ /* Llib/weakhash.scm 515 */
FAILURE(BGl_string3429z00zz__weakhashz00,BGl_list3386z00zz__weakhashz00,BgL_eqtz00_5078);} }  else 
{ /* Llib/weakhash.scm 515 */
if(
(BgL_keyz00_4078==BgL_bkeyz00_4079))
{ /* Llib/weakhash.scm 515 */
BgL_test4077z00_8721 = ((bool_t)1)
; }  else 
{ /* Llib/weakhash.scm 515 */
if(
STRINGP(BgL_keyz00_4078))
{ /* Llib/weakhash.scm 515 */
if(
STRINGP(BgL_bkeyz00_4079))
{ /* Llib/weakhash.scm 515 */
bool_t BgL_res2248z00_5081;
{ /* Llib/weakhash.scm 515 */
long BgL_l1z00_5082;
BgL_l1z00_5082 = 
STRING_LENGTH(BgL_keyz00_4078); 
if(
(BgL_l1z00_5082==
STRING_LENGTH(BgL_bkeyz00_4079)))
{ /* Llib/weakhash.scm 515 */
int BgL_arg1721z00_5083;
{ /* Llib/weakhash.scm 515 */
char * BgL_auxz00_8759;char * BgL_tmpz00_8757;
BgL_auxz00_8759 = 
BSTRING_TO_STRING(BgL_bkeyz00_4079); 
BgL_tmpz00_8757 = 
BSTRING_TO_STRING(BgL_keyz00_4078); 
BgL_arg1721z00_5083 = 
memcmp(BgL_tmpz00_8757, BgL_auxz00_8759, BgL_l1z00_5082); } 
BgL_res2248z00_5081 = 
(
(long)(BgL_arg1721z00_5083)==((long)0)); }  else 
{ /* Llib/weakhash.scm 515 */
BgL_res2248z00_5081 = ((bool_t)0); } } 
BgL_test4077z00_8721 = BgL_res2248z00_5081; }  else 
{ /* Llib/weakhash.scm 515 */
BgL_test4077z00_8721 = ((bool_t)0)
; } }  else 
{ /* Llib/weakhash.scm 515 */
BgL_test4077z00_8721 = ((bool_t)0)
; } } } } 
if(BgL_test4077z00_8721)
{ /* Llib/weakhash.scm 515 */
return BGl_removestopz00zz__weakhashz00;}  else 
{ /* Llib/weakhash.scm 515 */
return BGl_keepgoingz00zz__weakhashz00;} } } } 

}



/* weak-hashtable-expand! */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00(obj_t BgL_tablez00_86)
{
{ /* Llib/weakhash.scm 523 */
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4086z00_8764;
{ /* Llib/weakhash.scm 540 */
obj_t BgL_arg1642z00_1802;
{ /* Llib/weakhash.scm 540 */
bool_t BgL_test4087z00_8765;
{ /* Llib/weakhash.scm 540 */
obj_t BgL_tmpz00_8766;
{ /* Llib/weakhash.scm 540 */
obj_t BgL_res2249z00_3278;
{ /* Llib/weakhash.scm 540 */
obj_t BgL_aux3182z00_4866;
BgL_aux3182z00_4866 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3182z00_4866))
{ /* Llib/weakhash.scm 540 */
BgL_res2249z00_3278 = BgL_aux3182z00_4866; }  else 
{ 
obj_t BgL_auxz00_8770;
BgL_auxz00_8770 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21024)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3182z00_4866); 
FAILURE(BgL_auxz00_8770,BFALSE,BFALSE);} } 
BgL_tmpz00_8766 = BgL_res2249z00_3278; } 
BgL_test4087z00_8765 = 
(BgL_tmpz00_8766==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4087z00_8765)
{ /* Llib/weakhash.scm 540 */
int BgL_tmpz00_8775;
BgL_tmpz00_8775 = 
(int)(((long)5)); 
BgL_arg1642z00_1802 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_8775); }  else 
{ /* Llib/weakhash.scm 540 */
BgL_arg1642z00_1802 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
{ /* Llib/weakhash.scm 540 */
long BgL_n2z00_3279;
{ /* Llib/weakhash.scm 540 */
obj_t BgL_tmpz00_8779;
if(
INTEGERP(BgL_arg1642z00_1802))
{ /* Llib/weakhash.scm 540 */
BgL_tmpz00_8779 = BgL_arg1642z00_1802
; }  else 
{ 
obj_t BgL_auxz00_8782;
BgL_auxz00_8782 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21046)), BGl_string3430z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1642z00_1802); 
FAILURE(BgL_auxz00_8782,BFALSE,BFALSE);} 
BgL_n2z00_3279 = 
(long)CINT(BgL_tmpz00_8779); } 
BgL_test4086z00_8764 = 
(((long)1)==BgL_n2z00_3279); } } 
if(BgL_test4086z00_8764)
{ /* Llib/weakhash.scm 524 */
obj_t BgL_oldzd2buckszd2_1665;
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4090z00_8788;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_8789;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2251z00_3284;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3186z00_4870;
BgL_aux3186z00_4870 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3186z00_4870))
{ /* Llib/weakhash.scm 524 */
BgL_res2251z00_3284 = BgL_aux3186z00_4870; }  else 
{ 
obj_t BgL_auxz00_8793;
BgL_auxz00_8793 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3186z00_4870); 
FAILURE(BgL_auxz00_8793,BFALSE,BFALSE);} } 
BgL_tmpz00_8789 = BgL_res2251z00_3284; } 
BgL_test4090z00_8788 = 
(BgL_tmpz00_8789==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4090z00_8788)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_8798;
BgL_tmpz00_8798 = 
(int)(((long)2)); 
BgL_oldzd2buckszd2_1665 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_8798); }  else 
{ /* Llib/weakhash.scm 524 */
BgL_oldzd2buckszd2_1665 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
{ /* Llib/weakhash.scm 524 */
long BgL_oldzd2buckszd2lenz00_1666;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_vectorz00_3285;
if(
VECTORP(BgL_oldzd2buckszd2_1665))
{ /* Llib/weakhash.scm 524 */
BgL_vectorz00_3285 = BgL_oldzd2buckszd2_1665; }  else 
{ 
obj_t BgL_auxz00_8804;
BgL_auxz00_8804 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_oldzd2buckszd2_1665); 
FAILURE(BgL_auxz00_8804,BFALSE,BFALSE);} 
BgL_oldzd2buckszd2lenz00_1666 = 
VECTOR_LENGTH(BgL_vectorz00_3285); } 
{ /* Llib/weakhash.scm 524 */
long BgL_newzd2buckszd2lenz00_1667;
BgL_newzd2buckszd2lenz00_1667 = 
(((long)2)*BgL_oldzd2buckszd2lenz00_1666); 
{ /* Llib/weakhash.scm 524 */
obj_t BgL_newzd2buckszd2_1668;
BgL_newzd2buckszd2_1668 = 
make_vector(BgL_newzd2buckszd2lenz00_1667, BNIL); 
{ /* Llib/weakhash.scm 524 */
obj_t BgL_countz00_1669;
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4093z00_8811;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_8812;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2253z00_3291;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3190z00_4874;
BgL_aux3190z00_4874 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3190z00_4874))
{ /* Llib/weakhash.scm 524 */
BgL_res2253z00_3291 = BgL_aux3190z00_4874; }  else 
{ 
obj_t BgL_auxz00_8816;
BgL_auxz00_8816 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3190z00_4874); 
FAILURE(BgL_auxz00_8816,BFALSE,BFALSE);} } 
BgL_tmpz00_8812 = BgL_res2253z00_3291; } 
BgL_test4093z00_8811 = 
(BgL_tmpz00_8812==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4093z00_8811)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_8821;
BgL_tmpz00_8821 = 
(int)(((long)0)); 
BgL_countz00_1669 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_8821); }  else 
{ /* Llib/weakhash.scm 524 */
BgL_countz00_1669 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
{ /* Llib/weakhash.scm 524 */

{ /* Llib/weakhash.scm 524 */
obj_t BgL_nmaxz00_1670;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_arg1562z00_1673;obj_t BgL_arg1563z00_1674;
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4095z00_8825;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_8826;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2254z00_3295;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3192z00_4876;
BgL_aux3192z00_4876 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3192z00_4876))
{ /* Llib/weakhash.scm 524 */
BgL_res2254z00_3295 = BgL_aux3192z00_4876; }  else 
{ 
obj_t BgL_auxz00_8830;
BgL_auxz00_8830 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3192z00_4876); 
FAILURE(BgL_auxz00_8830,BFALSE,BFALSE);} } 
BgL_tmpz00_8826 = BgL_res2254z00_3295; } 
BgL_test4095z00_8825 = 
(BgL_tmpz00_8826==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4095z00_8825)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_8835;
BgL_tmpz00_8835 = 
(int)(((long)1)); 
BgL_arg1562z00_1673 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_8835); }  else 
{ /* Llib/weakhash.scm 524 */
BgL_arg1562z00_1673 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4097z00_8839;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_8840;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2255z00_3299;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3194z00_4878;
BgL_aux3194z00_4878 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3194z00_4878))
{ /* Llib/weakhash.scm 524 */
BgL_res2255z00_3299 = BgL_aux3194z00_4878; }  else 
{ 
obj_t BgL_auxz00_8844;
BgL_auxz00_8844 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3194z00_4878); 
FAILURE(BgL_auxz00_8844,BFALSE,BFALSE);} } 
BgL_tmpz00_8840 = BgL_res2255z00_3299; } 
BgL_test4097z00_8839 = 
(BgL_tmpz00_8840==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4097z00_8839)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_8849;
BgL_tmpz00_8849 = 
(int)(((long)7)); 
BgL_arg1563z00_1674 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_8849); }  else 
{ /* Llib/weakhash.scm 524 */
BgL_arg1563z00_1674 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
BgL_nmaxz00_1670 = 
BGl_2za2za2zz__r4_numbers_6_5z00(BgL_arg1562z00_1673, BgL_arg1563z00_1674); } 
{ /* Llib/weakhash.scm 524 */
obj_t BgL_arg1560z00_1671;
if(
REALP(BgL_nmaxz00_1670))
{ /* Llib/weakhash.scm 524 */
BgL_arg1560z00_1671 = 
BINT(
(long)(
REAL_TO_DOUBLE(BgL_nmaxz00_1670))); }  else 
{ /* Llib/weakhash.scm 524 */
BgL_arg1560z00_1671 = BgL_nmaxz00_1670; } 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4100z00_8859;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_8860;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2258z00_3306;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3196z00_4880;
BgL_aux3196z00_4880 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3196z00_4880))
{ /* Llib/weakhash.scm 524 */
BgL_res2258z00_3306 = BgL_aux3196z00_4880; }  else 
{ 
obj_t BgL_auxz00_8864;
BgL_auxz00_8864 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3196z00_4880); 
FAILURE(BgL_auxz00_8864,BFALSE,BFALSE);} } 
BgL_tmpz00_8860 = BgL_res2258z00_3306; } 
BgL_test4100z00_8859 = 
(BgL_tmpz00_8860==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4100z00_8859)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_8869;
BgL_tmpz00_8869 = 
(int)(((long)1)); 
STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_8869, BgL_arg1560z00_1671); }  else 
{ /* Llib/weakhash.scm 524 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } } } 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4102z00_8873;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_8874;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2259z00_3310;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3198z00_4882;
BgL_aux3198z00_4882 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3198z00_4882))
{ /* Llib/weakhash.scm 524 */
BgL_res2259z00_3310 = BgL_aux3198z00_4882; }  else 
{ 
obj_t BgL_auxz00_8878;
BgL_auxz00_8878 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3198z00_4882); 
FAILURE(BgL_auxz00_8878,BFALSE,BFALSE);} } 
BgL_tmpz00_8874 = BgL_res2259z00_3310; } 
BgL_test4102z00_8873 = 
(BgL_tmpz00_8874==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4102z00_8873)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_8883;
BgL_tmpz00_8883 = 
(int)(((long)2)); 
STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_8883, BgL_newzd2buckszd2_1668); }  else 
{ /* Llib/weakhash.scm 524 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
{ 
long BgL_iz00_1676;
BgL_iz00_1676 = ((long)0); 
BgL_zc3z04anonymousza31564ze3z87_1677:
if(
(BgL_iz00_1676<BgL_oldzd2buckszd2lenz00_1666))
{ /* Llib/weakhash.scm 524 */
{ /* Llib/weakhash.scm 524 */
obj_t BgL_g1108z00_1679;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_vectorz00_3314;
if(
VECTORP(BgL_oldzd2buckszd2_1665))
{ /* Llib/weakhash.scm 524 */
BgL_vectorz00_3314 = BgL_oldzd2buckszd2_1665; }  else 
{ 
obj_t BgL_auxz00_8891;
BgL_auxz00_8891 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3333z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_oldzd2buckszd2_1665); 
FAILURE(BgL_auxz00_8891,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4106z00_8895;
{ /* Llib/weakhash.scm 524 */
long BgL_tmpz00_8896;
BgL_tmpz00_8896 = 
VECTOR_LENGTH(BgL_vectorz00_3314); 
BgL_test4106z00_8895 = 
BOUND_CHECK(BgL_iz00_1676, BgL_tmpz00_8896); } 
if(BgL_test4106z00_8895)
{ /* Llib/weakhash.scm 524 */
BgL_g1108z00_1679 = 
VECTOR_REF(BgL_vectorz00_3314,BgL_iz00_1676); }  else 
{ 
obj_t BgL_auxz00_8900;
BgL_auxz00_8900 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3326z00zz__weakhashz00, BgL_vectorz00_3314, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_3314)), 
(int)(BgL_iz00_1676)); 
FAILURE(BgL_auxz00_8900,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_l1106z00_1681;
BgL_l1106z00_1681 = BgL_g1108z00_1679; 
BgL_zc3z04anonymousza31566ze3z87_1682:
if(
PAIRP(BgL_l1106z00_1681))
{ /* Llib/weakhash.scm 524 */
{ /* Llib/weakhash.scm 542 */
obj_t BgL_cellz00_1684;
BgL_cellz00_1684 = 
CAR(BgL_l1106z00_1681); 
{ /* Llib/weakhash.scm 542 */
obj_t BgL_keyz00_1685;
{ /* Llib/weakhash.scm 542 */
obj_t BgL_arg1574z00_1691;
{ /* Llib/weakhash.scm 542 */
obj_t BgL_pairz00_3318;
if(
PAIRP(BgL_cellz00_1684))
{ /* Llib/weakhash.scm 542 */
BgL_pairz00_3318 = BgL_cellz00_1684; }  else 
{ 
obj_t BgL_auxz00_8912;
BgL_auxz00_8912 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21111)), BGl_string3431z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_cellz00_1684); 
FAILURE(BgL_auxz00_8912,BFALSE,BFALSE);} 
BgL_arg1574z00_1691 = 
CAR(BgL_pairz00_3318); } 
{ /* Llib/weakhash.scm 542 */
obj_t BgL_objz00_3319;
if(
BGL_WEAKPTRP(BgL_arg1574z00_1691))
{ /* Llib/weakhash.scm 542 */
BgL_objz00_3319 = BgL_arg1574z00_1691; }  else 
{ 
obj_t BgL_auxz00_8919;
BgL_auxz00_8919 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21115)), BGl_string3431z00zz__weakhashz00, BGl_string3329z00zz__weakhashz00, BgL_arg1574z00_1691); 
FAILURE(BgL_auxz00_8919,BFALSE,BFALSE);} 
BgL_keyz00_1685 = 
weakptr_data(BgL_objz00_3319); } } 
if(
(BgL_keyz00_1685==BUNSPEC))
{ 
obj_t BgL_tmpz00_8926;
{ /* Llib/weakhash.scm 544 */
obj_t BgL_aux3206z00_4890;
BgL_aux3206z00_4890 = BgL_countz00_1669; 
if(
INTEGERP(BgL_aux3206z00_4890))
{ /* Llib/weakhash.scm 544 */
BgL_tmpz00_8926 = BgL_aux3206z00_4890
; }  else 
{ 
obj_t BgL_auxz00_8929;
BgL_auxz00_8929 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21181)), BGl_string3431z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_aux3206z00_4890); 
FAILURE(BgL_auxz00_8929,BFALSE,BFALSE);} } 
BgL_countz00_1669 = 
SUBFX(BgL_tmpz00_8926, 
BINT(((long)1))); }  else 
{ /* Llib/weakhash.scm 545 */
long BgL_hz00_1687;
{ /* Llib/weakhash.scm 546 */
long BgL_arg1573z00_1690;
{ /* Llib/weakhash.scm 546 */
long BgL_res2268z00_3337;
{ /* Llib/weakhash.scm 546 */
obj_t BgL_hashnz00_3322;
{ /* Llib/weakhash.scm 546 */
bool_t BgL_test4112z00_8935;
{ /* Llib/weakhash.scm 546 */
obj_t BgL_tmpz00_8936;
{ /* Llib/weakhash.scm 546 */
obj_t BgL_res2263z00_3328;
{ /* Llib/weakhash.scm 546 */
obj_t BgL_aux3208z00_4892;
BgL_aux3208z00_4892 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3208z00_4892))
{ /* Llib/weakhash.scm 546 */
BgL_res2263z00_3328 = BgL_aux3208z00_4892; }  else 
{ 
obj_t BgL_auxz00_8940;
BgL_auxz00_8940 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21230)), BGl_string3431z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3208z00_4892); 
FAILURE(BgL_auxz00_8940,BFALSE,BFALSE);} } 
BgL_tmpz00_8936 = BgL_res2263z00_3328; } 
BgL_test4112z00_8935 = 
(BgL_tmpz00_8936==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4112z00_8935)
{ /* Llib/weakhash.scm 546 */
int BgL_tmpz00_8945;
BgL_tmpz00_8945 = 
(int)(((long)4)); 
BgL_hashnz00_3322 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_8945); }  else 
{ /* Llib/weakhash.scm 546 */
BgL_hashnz00_3322 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
if(
PROCEDUREP(BgL_hashnz00_3322))
{ /* Llib/weakhash.scm 546 */
obj_t BgL_arg1310z00_3324;
if(
PROCEDURE_CORRECT_ARITYP(BgL_hashnz00_3322, ((long)1)))
{ /* Llib/weakhash.scm 546 */
BgL_arg1310z00_3324 = 
PROCEDURE_ENTRY(BgL_hashnz00_3322)(BgL_hashnz00_3322, BgL_keyz00_1685, BEOA); }  else 
{ /* Llib/weakhash.scm 546 */
FAILURE(BGl_string3432z00zz__weakhashz00,BGl_list3380z00zz__weakhashz00,BgL_hashnz00_3322);} 
{ /* Llib/weakhash.scm 546 */
long BgL_nz00_3330;
{ /* Llib/weakhash.scm 546 */
obj_t BgL_tmpz00_8958;
if(
INTEGERP(BgL_arg1310z00_3324))
{ /* Llib/weakhash.scm 546 */
BgL_tmpz00_8958 = BgL_arg1310z00_3324
; }  else 
{ 
obj_t BgL_auxz00_8961;
BgL_auxz00_8961 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21230)), BGl_string3431z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1310z00_3324); 
FAILURE(BgL_auxz00_8961,BFALSE,BFALSE);} 
BgL_nz00_3330 = 
(long)CINT(BgL_tmpz00_8958); } 
if(
(BgL_nz00_3330<((long)0)))
{ /* Llib/weakhash.scm 546 */
BgL_res2268z00_3337 = 
NEG(BgL_nz00_3330); }  else 
{ /* Llib/weakhash.scm 546 */
BgL_res2268z00_3337 = BgL_nz00_3330; } } }  else 
{ /* Llib/weakhash.scm 546 */
BgL_res2268z00_3337 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_1685); } } 
BgL_arg1573z00_1690 = BgL_res2268z00_3337; } 
{ /* Llib/weakhash.scm 545 */
long BgL_res2274z00_3356;
{ /* Llib/weakhash.scm 545 */
long BgL_n1z00_3338;long BgL_n2z00_3339;
BgL_n1z00_3338 = BgL_arg1573z00_1690; 
BgL_n2z00_3339 = BgL_newzd2buckszd2lenz00_1667; 
{ /* Llib/weakhash.scm 545 */
bool_t BgL_test4118z00_8970;
{ /* Llib/weakhash.scm 545 */
long BgL_arg1836z00_3341;
BgL_arg1836z00_3341 = 
(((BgL_n1z00_3338) | (BgL_n2z00_3339)) & -2147483648); 
BgL_test4118z00_8970 = 
(BgL_arg1836z00_3341==((long)0)); } 
if(BgL_test4118z00_8970)
{ /* Llib/weakhash.scm 545 */
int32_t BgL_arg1832z00_3342;
{ /* Llib/weakhash.scm 545 */
int32_t BgL_arg1833z00_3343;int32_t BgL_arg1835z00_3344;
{ /* Llib/weakhash.scm 545 */
int32_t BgL_res2270z00_3348;
BgL_res2270z00_3348 = 
(int32_t)(BgL_n1z00_3338); 
BgL_arg1833z00_3343 = BgL_res2270z00_3348; } 
{ /* Llib/weakhash.scm 545 */
int32_t BgL_res2271z00_3350;
BgL_res2271z00_3350 = 
(int32_t)(BgL_n2z00_3339); 
BgL_arg1835z00_3344 = BgL_res2271z00_3350; } 
BgL_arg1832z00_3342 = 
(BgL_arg1833z00_3343%BgL_arg1835z00_3344); } 
{ /* Llib/weakhash.scm 545 */
long BgL_res2273z00_3355;
{ /* Llib/weakhash.scm 545 */
long BgL_arg1940z00_3352;
BgL_arg1940z00_3352 = 
(long)(BgL_arg1832z00_3342); 
{ /* Llib/weakhash.scm 545 */
long BgL_res2272z00_3354;
BgL_res2272z00_3354 = 
(long)(BgL_arg1940z00_3352); 
BgL_res2273z00_3355 = BgL_res2272z00_3354; } } 
BgL_res2274z00_3356 = BgL_res2273z00_3355; } }  else 
{ /* Llib/weakhash.scm 545 */
BgL_res2274z00_3356 = 
(BgL_n1z00_3338%BgL_n2z00_3339); } } } 
BgL_hz00_1687 = BgL_res2274z00_3356; } } 
{ /* Llib/weakhash.scm 551 */
obj_t BgL_arg1569z00_1688;
{ /* Llib/weakhash.scm 551 */
obj_t BgL_arg1570z00_1689;
{ /* Llib/weakhash.scm 551 */
bool_t BgL_test4119z00_8979;
{ /* Llib/weakhash.scm 551 */
long BgL_tmpz00_8980;
BgL_tmpz00_8980 = 
VECTOR_LENGTH(BgL_newzd2buckszd2_1668); 
BgL_test4119z00_8979 = 
BOUND_CHECK(BgL_hz00_1687, BgL_tmpz00_8980); } 
if(BgL_test4119z00_8979)
{ /* Llib/weakhash.scm 551 */
BgL_arg1570z00_1689 = 
VECTOR_REF(BgL_newzd2buckszd2_1668,BgL_hz00_1687); }  else 
{ 
obj_t BgL_auxz00_8984;
BgL_auxz00_8984 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21362)), BGl_string3326z00zz__weakhashz00, BgL_newzd2buckszd2_1668, 
(int)(
VECTOR_LENGTH(BgL_newzd2buckszd2_1668)), 
(int)(BgL_hz00_1687)); 
FAILURE(BgL_auxz00_8984,BFALSE,BFALSE);} } 
BgL_arg1569z00_1688 = 
MAKE_YOUNG_PAIR(BgL_cellz00_1684, BgL_arg1570z00_1689); } 
{ /* Llib/weakhash.scm 548 */
bool_t BgL_test4120z00_8992;
{ /* Llib/weakhash.scm 548 */
long BgL_tmpz00_8993;
BgL_tmpz00_8993 = 
VECTOR_LENGTH(BgL_newzd2buckszd2_1668); 
BgL_test4120z00_8992 = 
BOUND_CHECK(BgL_hz00_1687, BgL_tmpz00_8993); } 
if(BgL_test4120z00_8992)
{ /* Llib/weakhash.scm 548 */
VECTOR_SET(BgL_newzd2buckszd2_1668,BgL_hz00_1687,BgL_arg1569z00_1688); }  else 
{ 
obj_t BgL_auxz00_8997;
BgL_auxz00_8997 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21300)), BGl_string3331z00zz__weakhashz00, BgL_newzd2buckszd2_1668, 
(int)(
VECTOR_LENGTH(BgL_newzd2buckszd2_1668)), 
(int)(BgL_hz00_1687)); 
FAILURE(BgL_auxz00_8997,BFALSE,BFALSE);} } } } } } 
{ 
obj_t BgL_l1106z00_9004;
BgL_l1106z00_9004 = 
CDR(BgL_l1106z00_1681); 
BgL_l1106z00_1681 = BgL_l1106z00_9004; 
goto BgL_zc3z04anonymousza31566ze3z87_1682;} }  else 
{ /* Llib/weakhash.scm 524 */
if(
NULLP(BgL_l1106z00_1681))
{ /* Llib/weakhash.scm 524 */BTRUE; }  else 
{ /* Llib/weakhash.scm 524 */
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3433z00zz__weakhashz00, BGl_string3434z00zz__weakhashz00, BgL_l1106z00_1681); } } } } 
{ 
long BgL_iz00_9009;
BgL_iz00_9009 = 
(BgL_iz00_1676+((long)1)); 
BgL_iz00_1676 = BgL_iz00_9009; 
goto BgL_zc3z04anonymousza31564ze3z87_1677;} }  else 
{ /* Llib/weakhash.scm 524 */((bool_t)0); } } 
{ /* Llib/weakhash.scm 524 */
obj_t BgL_vz00_3365;
BgL_vz00_3365 = BgL_countz00_1669; 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4122z00_9011;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9012;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2277z00_3369;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3214z00_4899;
BgL_aux3214z00_4899 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3214z00_4899))
{ /* Llib/weakhash.scm 524 */
BgL_res2277z00_3369 = BgL_aux3214z00_4899; }  else 
{ 
obj_t BgL_auxz00_9016;
BgL_auxz00_9016 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3214z00_4899); 
FAILURE(BgL_auxz00_9016,BFALSE,BFALSE);} } 
BgL_tmpz00_9012 = BgL_res2277z00_3369; } 
BgL_test4122z00_9011 = 
(BgL_tmpz00_9012==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4122z00_9011)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9021;
BgL_tmpz00_9021 = 
(int)(((long)0)); 
return 
STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_9021, BgL_vz00_3365);}  else 
{ /* Llib/weakhash.scm 524 */
return 
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86);} } } } } } } } }  else 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4124z00_9025;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_arg1641z00_1801;
{ /* Llib/weakhash.scm 553 */
bool_t BgL_test4125z00_9026;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_tmpz00_9027;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_res2278z00_3373;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_aux3216z00_4901;
BgL_aux3216z00_4901 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3216z00_4901))
{ /* Llib/weakhash.scm 553 */
BgL_res2278z00_3373 = BgL_aux3216z00_4901; }  else 
{ 
obj_t BgL_auxz00_9031;
BgL_auxz00_9031 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21430)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3216z00_4901); 
FAILURE(BgL_auxz00_9031,BFALSE,BFALSE);} } 
BgL_tmpz00_9027 = BgL_res2278z00_3373; } 
BgL_test4125z00_9026 = 
(BgL_tmpz00_9027==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4125z00_9026)
{ /* Llib/weakhash.scm 553 */
int BgL_tmpz00_9036;
BgL_tmpz00_9036 = 
(int)(((long)5)); 
BgL_arg1641z00_1801 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_9036); }  else 
{ /* Llib/weakhash.scm 553 */
BgL_arg1641z00_1801 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
{ /* Llib/weakhash.scm 553 */
long BgL_n2z00_3374;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_tmpz00_9040;
if(
INTEGERP(BgL_arg1641z00_1801))
{ /* Llib/weakhash.scm 553 */
BgL_tmpz00_9040 = BgL_arg1641z00_1801
; }  else 
{ 
obj_t BgL_auxz00_9043;
BgL_auxz00_9043 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21452)), BGl_string3430z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1641z00_1801); 
FAILURE(BgL_auxz00_9043,BFALSE,BFALSE);} 
BgL_n2z00_3374 = 
(long)CINT(BgL_tmpz00_9040); } 
BgL_test4124z00_9025 = 
(((long)2)==BgL_n2z00_3374); } } 
if(BgL_test4124z00_9025)
{ /* Llib/weakhash.scm 524 */
obj_t BgL_oldzd2buckszd2_1699;
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4128z00_9049;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9050;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2280z00_3379;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3220z00_4905;
BgL_aux3220z00_4905 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3220z00_4905))
{ /* Llib/weakhash.scm 524 */
BgL_res2280z00_3379 = BgL_aux3220z00_4905; }  else 
{ 
obj_t BgL_auxz00_9054;
BgL_auxz00_9054 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3220z00_4905); 
FAILURE(BgL_auxz00_9054,BFALSE,BFALSE);} } 
BgL_tmpz00_9050 = BgL_res2280z00_3379; } 
BgL_test4128z00_9049 = 
(BgL_tmpz00_9050==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4128z00_9049)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9059;
BgL_tmpz00_9059 = 
(int)(((long)2)); 
BgL_oldzd2buckszd2_1699 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_9059); }  else 
{ /* Llib/weakhash.scm 524 */
BgL_oldzd2buckszd2_1699 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
{ /* Llib/weakhash.scm 524 */
long BgL_oldzd2buckszd2lenz00_1700;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_vectorz00_3380;
if(
VECTORP(BgL_oldzd2buckszd2_1699))
{ /* Llib/weakhash.scm 524 */
BgL_vectorz00_3380 = BgL_oldzd2buckszd2_1699; }  else 
{ 
obj_t BgL_auxz00_9065;
BgL_auxz00_9065 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_oldzd2buckszd2_1699); 
FAILURE(BgL_auxz00_9065,BFALSE,BFALSE);} 
BgL_oldzd2buckszd2lenz00_1700 = 
VECTOR_LENGTH(BgL_vectorz00_3380); } 
{ /* Llib/weakhash.scm 524 */
long BgL_newzd2buckszd2lenz00_1701;
BgL_newzd2buckszd2lenz00_1701 = 
(((long)2)*BgL_oldzd2buckszd2lenz00_1700); 
{ /* Llib/weakhash.scm 524 */
obj_t BgL_newzd2buckszd2_1702;
BgL_newzd2buckszd2_1702 = 
make_vector(BgL_newzd2buckszd2lenz00_1701, BNIL); 
{ /* Llib/weakhash.scm 524 */
obj_t BgL_countz00_1703;
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4131z00_9072;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9073;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2282z00_3386;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3224z00_4909;
BgL_aux3224z00_4909 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3224z00_4909))
{ /* Llib/weakhash.scm 524 */
BgL_res2282z00_3386 = BgL_aux3224z00_4909; }  else 
{ 
obj_t BgL_auxz00_9077;
BgL_auxz00_9077 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3224z00_4909); 
FAILURE(BgL_auxz00_9077,BFALSE,BFALSE);} } 
BgL_tmpz00_9073 = BgL_res2282z00_3386; } 
BgL_test4131z00_9072 = 
(BgL_tmpz00_9073==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4131z00_9072)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9082;
BgL_tmpz00_9082 = 
(int)(((long)0)); 
BgL_countz00_1703 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_9082); }  else 
{ /* Llib/weakhash.scm 524 */
BgL_countz00_1703 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
{ /* Llib/weakhash.scm 524 */

{ /* Llib/weakhash.scm 524 */
obj_t BgL_nmaxz00_1704;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_arg1582z00_1707;obj_t BgL_arg1583z00_1708;
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4133z00_9086;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9087;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2283z00_3390;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3226z00_4911;
BgL_aux3226z00_4911 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3226z00_4911))
{ /* Llib/weakhash.scm 524 */
BgL_res2283z00_3390 = BgL_aux3226z00_4911; }  else 
{ 
obj_t BgL_auxz00_9091;
BgL_auxz00_9091 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3226z00_4911); 
FAILURE(BgL_auxz00_9091,BFALSE,BFALSE);} } 
BgL_tmpz00_9087 = BgL_res2283z00_3390; } 
BgL_test4133z00_9086 = 
(BgL_tmpz00_9087==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4133z00_9086)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9096;
BgL_tmpz00_9096 = 
(int)(((long)1)); 
BgL_arg1582z00_1707 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_9096); }  else 
{ /* Llib/weakhash.scm 524 */
BgL_arg1582z00_1707 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4135z00_9100;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9101;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2284z00_3394;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3228z00_4913;
BgL_aux3228z00_4913 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3228z00_4913))
{ /* Llib/weakhash.scm 524 */
BgL_res2284z00_3394 = BgL_aux3228z00_4913; }  else 
{ 
obj_t BgL_auxz00_9105;
BgL_auxz00_9105 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3228z00_4913); 
FAILURE(BgL_auxz00_9105,BFALSE,BFALSE);} } 
BgL_tmpz00_9101 = BgL_res2284z00_3394; } 
BgL_test4135z00_9100 = 
(BgL_tmpz00_9101==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4135z00_9100)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9110;
BgL_tmpz00_9110 = 
(int)(((long)7)); 
BgL_arg1583z00_1708 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_9110); }  else 
{ /* Llib/weakhash.scm 524 */
BgL_arg1583z00_1708 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
BgL_nmaxz00_1704 = 
BGl_2za2za2zz__r4_numbers_6_5z00(BgL_arg1582z00_1707, BgL_arg1583z00_1708); } 
{ /* Llib/weakhash.scm 524 */
obj_t BgL_arg1580z00_1705;
if(
REALP(BgL_nmaxz00_1704))
{ /* Llib/weakhash.scm 524 */
BgL_arg1580z00_1705 = 
BINT(
(long)(
REAL_TO_DOUBLE(BgL_nmaxz00_1704))); }  else 
{ /* Llib/weakhash.scm 524 */
BgL_arg1580z00_1705 = BgL_nmaxz00_1704; } 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4138z00_9120;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9121;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2287z00_3401;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3230z00_4915;
BgL_aux3230z00_4915 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3230z00_4915))
{ /* Llib/weakhash.scm 524 */
BgL_res2287z00_3401 = BgL_aux3230z00_4915; }  else 
{ 
obj_t BgL_auxz00_9125;
BgL_auxz00_9125 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3230z00_4915); 
FAILURE(BgL_auxz00_9125,BFALSE,BFALSE);} } 
BgL_tmpz00_9121 = BgL_res2287z00_3401; } 
BgL_test4138z00_9120 = 
(BgL_tmpz00_9121==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4138z00_9120)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9130;
BgL_tmpz00_9130 = 
(int)(((long)1)); 
STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_9130, BgL_arg1580z00_1705); }  else 
{ /* Llib/weakhash.scm 524 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } } } 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4140z00_9134;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9135;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2288z00_3405;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3232z00_4917;
BgL_aux3232z00_4917 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3232z00_4917))
{ /* Llib/weakhash.scm 524 */
BgL_res2288z00_3405 = BgL_aux3232z00_4917; }  else 
{ 
obj_t BgL_auxz00_9139;
BgL_auxz00_9139 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3232z00_4917); 
FAILURE(BgL_auxz00_9139,BFALSE,BFALSE);} } 
BgL_tmpz00_9135 = BgL_res2288z00_3405; } 
BgL_test4140z00_9134 = 
(BgL_tmpz00_9135==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4140z00_9134)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9144;
BgL_tmpz00_9144 = 
(int)(((long)2)); 
STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_9144, BgL_newzd2buckszd2_1702); }  else 
{ /* Llib/weakhash.scm 524 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
{ 
long BgL_iz00_1710;
BgL_iz00_1710 = ((long)0); 
BgL_zc3z04anonymousza31584ze3z87_1711:
if(
(BgL_iz00_1710<BgL_oldzd2buckszd2lenz00_1700))
{ /* Llib/weakhash.scm 524 */
{ /* Llib/weakhash.scm 524 */
obj_t BgL_g1111z00_1713;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_vectorz00_3409;
if(
VECTORP(BgL_oldzd2buckszd2_1699))
{ /* Llib/weakhash.scm 524 */
BgL_vectorz00_3409 = BgL_oldzd2buckszd2_1699; }  else 
{ 
obj_t BgL_auxz00_9152;
BgL_auxz00_9152 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3333z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_oldzd2buckszd2_1699); 
FAILURE(BgL_auxz00_9152,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4144z00_9156;
{ /* Llib/weakhash.scm 524 */
long BgL_tmpz00_9157;
BgL_tmpz00_9157 = 
VECTOR_LENGTH(BgL_vectorz00_3409); 
BgL_test4144z00_9156 = 
BOUND_CHECK(BgL_iz00_1710, BgL_tmpz00_9157); } 
if(BgL_test4144z00_9156)
{ /* Llib/weakhash.scm 524 */
BgL_g1111z00_1713 = 
VECTOR_REF(BgL_vectorz00_3409,BgL_iz00_1710); }  else 
{ 
obj_t BgL_auxz00_9161;
BgL_auxz00_9161 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3326z00zz__weakhashz00, BgL_vectorz00_3409, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_3409)), 
(int)(BgL_iz00_1710)); 
FAILURE(BgL_auxz00_9161,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_l1109z00_1715;
BgL_l1109z00_1715 = BgL_g1111z00_1713; 
BgL_zc3z04anonymousza31586ze3z87_1716:
if(
PAIRP(BgL_l1109z00_1715))
{ /* Llib/weakhash.scm 524 */
{ /* Llib/weakhash.scm 555 */
obj_t BgL_cellz00_1718;
BgL_cellz00_1718 = 
CAR(BgL_l1109z00_1715); 
{ /* Llib/weakhash.scm 555 */
obj_t BgL_dataz00_1719;
{ /* Llib/weakhash.scm 555 */
obj_t BgL_arg1597z00_1726;
{ /* Llib/weakhash.scm 555 */
obj_t BgL_pairz00_3413;
if(
PAIRP(BgL_cellz00_1718))
{ /* Llib/weakhash.scm 555 */
BgL_pairz00_3413 = BgL_cellz00_1718; }  else 
{ 
obj_t BgL_auxz00_9173;
BgL_auxz00_9173 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21517)), BGl_string3435z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_cellz00_1718); 
FAILURE(BgL_auxz00_9173,BFALSE,BFALSE);} 
BgL_arg1597z00_1726 = 
CDR(BgL_pairz00_3413); } 
{ /* Llib/weakhash.scm 555 */
obj_t BgL_objz00_3414;
if(
BGL_WEAKPTRP(BgL_arg1597z00_1726))
{ /* Llib/weakhash.scm 555 */
BgL_objz00_3414 = BgL_arg1597z00_1726; }  else 
{ 
obj_t BgL_auxz00_9180;
BgL_auxz00_9180 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21521)), BGl_string3435z00zz__weakhashz00, BGl_string3329z00zz__weakhashz00, BgL_arg1597z00_1726); 
FAILURE(BgL_auxz00_9180,BFALSE,BFALSE);} 
BgL_dataz00_1719 = 
weakptr_data(BgL_objz00_3414); } } 
if(
(BgL_dataz00_1719==BUNSPEC))
{ 
obj_t BgL_tmpz00_9187;
{ /* Llib/weakhash.scm 557 */
obj_t BgL_aux3240z00_4925;
BgL_aux3240z00_4925 = BgL_countz00_1703; 
if(
INTEGERP(BgL_aux3240z00_4925))
{ /* Llib/weakhash.scm 557 */
BgL_tmpz00_9187 = BgL_aux3240z00_4925
; }  else 
{ 
obj_t BgL_auxz00_9190;
BgL_auxz00_9190 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21588)), BGl_string3435z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_aux3240z00_4925); 
FAILURE(BgL_auxz00_9190,BFALSE,BFALSE);} } 
BgL_countz00_1703 = 
SUBFX(BgL_tmpz00_9187, 
BINT(((long)1))); }  else 
{ /* Llib/weakhash.scm 558 */
long BgL_hz00_1721;
{ /* Llib/weakhash.scm 560 */
long BgL_arg1593z00_1724;
{ /* Llib/weakhash.scm 560 */
obj_t BgL_arg1596z00_1725;
{ /* Llib/weakhash.scm 560 */
obj_t BgL_pairz00_3417;
if(
PAIRP(BgL_cellz00_1718))
{ /* Llib/weakhash.scm 560 */
BgL_pairz00_3417 = BgL_cellz00_1718; }  else 
{ 
obj_t BgL_auxz00_9198;
BgL_auxz00_9198 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21681)), BGl_string3435z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_cellz00_1718); 
FAILURE(BgL_auxz00_9198,BFALSE,BFALSE);} 
BgL_arg1596z00_1725 = 
CAR(BgL_pairz00_3417); } 
{ /* Llib/weakhash.scm 559 */
long BgL_res2297z00_3433;
{ /* Llib/weakhash.scm 559 */
obj_t BgL_hashnz00_3418;
{ /* Llib/weakhash.scm 559 */
bool_t BgL_test4151z00_9203;
{ /* Llib/weakhash.scm 559 */
obj_t BgL_tmpz00_9204;
{ /* Llib/weakhash.scm 559 */
obj_t BgL_res2292z00_3424;
{ /* Llib/weakhash.scm 559 */
obj_t BgL_aux3244z00_4929;
BgL_aux3244z00_4929 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3244z00_4929))
{ /* Llib/weakhash.scm 559 */
BgL_res2292z00_3424 = BgL_aux3244z00_4929; }  else 
{ 
obj_t BgL_auxz00_9208;
BgL_auxz00_9208 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21637)), BGl_string3435z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3244z00_4929); 
FAILURE(BgL_auxz00_9208,BFALSE,BFALSE);} } 
BgL_tmpz00_9204 = BgL_res2292z00_3424; } 
BgL_test4151z00_9203 = 
(BgL_tmpz00_9204==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4151z00_9203)
{ /* Llib/weakhash.scm 559 */
int BgL_tmpz00_9213;
BgL_tmpz00_9213 = 
(int)(((long)4)); 
BgL_hashnz00_3418 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_9213); }  else 
{ /* Llib/weakhash.scm 559 */
BgL_hashnz00_3418 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
if(
PROCEDUREP(BgL_hashnz00_3418))
{ /* Llib/weakhash.scm 559 */
obj_t BgL_arg1310z00_3420;
if(
PROCEDURE_CORRECT_ARITYP(BgL_hashnz00_3418, ((long)1)))
{ /* Llib/weakhash.scm 559 */
BgL_arg1310z00_3420 = 
PROCEDURE_ENTRY(BgL_hashnz00_3418)(BgL_hashnz00_3418, BgL_arg1596z00_1725, BEOA); }  else 
{ /* Llib/weakhash.scm 559 */
FAILURE(BGl_string3436z00zz__weakhashz00,BGl_list3437z00zz__weakhashz00,BgL_hashnz00_3418);} 
{ /* Llib/weakhash.scm 559 */
long BgL_nz00_3426;
{ /* Llib/weakhash.scm 559 */
obj_t BgL_tmpz00_9226;
if(
INTEGERP(BgL_arg1310z00_3420))
{ /* Llib/weakhash.scm 559 */
BgL_tmpz00_9226 = BgL_arg1310z00_3420
; }  else 
{ 
obj_t BgL_auxz00_9229;
BgL_auxz00_9229 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21637)), BGl_string3435z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1310z00_3420); 
FAILURE(BgL_auxz00_9229,BFALSE,BFALSE);} 
BgL_nz00_3426 = 
(long)CINT(BgL_tmpz00_9226); } 
if(
(BgL_nz00_3426<((long)0)))
{ /* Llib/weakhash.scm 559 */
BgL_res2297z00_3433 = 
NEG(BgL_nz00_3426); }  else 
{ /* Llib/weakhash.scm 559 */
BgL_res2297z00_3433 = BgL_nz00_3426; } } }  else 
{ /* Llib/weakhash.scm 559 */
BgL_res2297z00_3433 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_arg1596z00_1725); } } 
BgL_arg1593z00_1724 = BgL_res2297z00_3433; } } 
{ /* Llib/weakhash.scm 558 */
long BgL_res2303z00_3452;
{ /* Llib/weakhash.scm 558 */
long BgL_n1z00_3434;long BgL_n2z00_3435;
BgL_n1z00_3434 = BgL_arg1593z00_1724; 
BgL_n2z00_3435 = BgL_newzd2buckszd2lenz00_1701; 
{ /* Llib/weakhash.scm 558 */
bool_t BgL_test4157z00_9238;
{ /* Llib/weakhash.scm 558 */
long BgL_arg1836z00_3437;
BgL_arg1836z00_3437 = 
(((BgL_n1z00_3434) | (BgL_n2z00_3435)) & -2147483648); 
BgL_test4157z00_9238 = 
(BgL_arg1836z00_3437==((long)0)); } 
if(BgL_test4157z00_9238)
{ /* Llib/weakhash.scm 558 */
int32_t BgL_arg1832z00_3438;
{ /* Llib/weakhash.scm 558 */
int32_t BgL_arg1833z00_3439;int32_t BgL_arg1835z00_3440;
{ /* Llib/weakhash.scm 558 */
int32_t BgL_res2299z00_3444;
BgL_res2299z00_3444 = 
(int32_t)(BgL_n1z00_3434); 
BgL_arg1833z00_3439 = BgL_res2299z00_3444; } 
{ /* Llib/weakhash.scm 558 */
int32_t BgL_res2300z00_3446;
BgL_res2300z00_3446 = 
(int32_t)(BgL_n2z00_3435); 
BgL_arg1835z00_3440 = BgL_res2300z00_3446; } 
BgL_arg1832z00_3438 = 
(BgL_arg1833z00_3439%BgL_arg1835z00_3440); } 
{ /* Llib/weakhash.scm 558 */
long BgL_res2302z00_3451;
{ /* Llib/weakhash.scm 558 */
long BgL_arg1940z00_3448;
BgL_arg1940z00_3448 = 
(long)(BgL_arg1832z00_3438); 
{ /* Llib/weakhash.scm 558 */
long BgL_res2301z00_3450;
BgL_res2301z00_3450 = 
(long)(BgL_arg1940z00_3448); 
BgL_res2302z00_3451 = BgL_res2301z00_3450; } } 
BgL_res2303z00_3452 = BgL_res2302z00_3451; } }  else 
{ /* Llib/weakhash.scm 558 */
BgL_res2303z00_3452 = 
(BgL_n1z00_3434%BgL_n2z00_3435); } } } 
BgL_hz00_1721 = BgL_res2303z00_3452; } } 
{ /* Llib/weakhash.scm 565 */
obj_t BgL_arg1589z00_1722;
{ /* Llib/weakhash.scm 565 */
obj_t BgL_arg1592z00_1723;
{ /* Llib/weakhash.scm 565 */
bool_t BgL_test4158z00_9247;
{ /* Llib/weakhash.scm 565 */
long BgL_tmpz00_9248;
BgL_tmpz00_9248 = 
VECTOR_LENGTH(BgL_newzd2buckszd2_1702); 
BgL_test4158z00_9247 = 
BOUND_CHECK(BgL_hz00_1721, BgL_tmpz00_9248); } 
if(BgL_test4158z00_9247)
{ /* Llib/weakhash.scm 565 */
BgL_arg1592z00_1723 = 
VECTOR_REF(BgL_newzd2buckszd2_1702,BgL_hz00_1721); }  else 
{ 
obj_t BgL_auxz00_9252;
BgL_auxz00_9252 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21787)), BGl_string3326z00zz__weakhashz00, BgL_newzd2buckszd2_1702, 
(int)(
VECTOR_LENGTH(BgL_newzd2buckszd2_1702)), 
(int)(BgL_hz00_1721)); 
FAILURE(BgL_auxz00_9252,BFALSE,BFALSE);} } 
BgL_arg1589z00_1722 = 
MAKE_YOUNG_PAIR(BgL_cellz00_1718, BgL_arg1592z00_1723); } 
{ /* Llib/weakhash.scm 562 */
bool_t BgL_test4159z00_9260;
{ /* Llib/weakhash.scm 562 */
long BgL_tmpz00_9261;
BgL_tmpz00_9261 = 
VECTOR_LENGTH(BgL_newzd2buckszd2_1702); 
BgL_test4159z00_9260 = 
BOUND_CHECK(BgL_hz00_1721, BgL_tmpz00_9261); } 
if(BgL_test4159z00_9260)
{ /* Llib/weakhash.scm 562 */
VECTOR_SET(BgL_newzd2buckszd2_1702,BgL_hz00_1721,BgL_arg1589z00_1722); }  else 
{ 
obj_t BgL_auxz00_9265;
BgL_auxz00_9265 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21725)), BGl_string3331z00zz__weakhashz00, BgL_newzd2buckszd2_1702, 
(int)(
VECTOR_LENGTH(BgL_newzd2buckszd2_1702)), 
(int)(BgL_hz00_1721)); 
FAILURE(BgL_auxz00_9265,BFALSE,BFALSE);} } } } } } 
{ 
obj_t BgL_l1109z00_9272;
BgL_l1109z00_9272 = 
CDR(BgL_l1109z00_1715); 
BgL_l1109z00_1715 = BgL_l1109z00_9272; 
goto BgL_zc3z04anonymousza31586ze3z87_1716;} }  else 
{ /* Llib/weakhash.scm 524 */
if(
NULLP(BgL_l1109z00_1715))
{ /* Llib/weakhash.scm 524 */BTRUE; }  else 
{ /* Llib/weakhash.scm 524 */
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3433z00zz__weakhashz00, BGl_string3434z00zz__weakhashz00, BgL_l1109z00_1715); } } } } 
{ 
long BgL_iz00_9277;
BgL_iz00_9277 = 
(BgL_iz00_1710+((long)1)); 
BgL_iz00_1710 = BgL_iz00_9277; 
goto BgL_zc3z04anonymousza31584ze3z87_1711;} }  else 
{ /* Llib/weakhash.scm 524 */((bool_t)0); } } 
{ /* Llib/weakhash.scm 524 */
obj_t BgL_vz00_3461;
BgL_vz00_3461 = BgL_countz00_1703; 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4161z00_9279;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9280;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2306z00_3465;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3250z00_4936;
BgL_aux3250z00_4936 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3250z00_4936))
{ /* Llib/weakhash.scm 524 */
BgL_res2306z00_3465 = BgL_aux3250z00_4936; }  else 
{ 
obj_t BgL_auxz00_9284;
BgL_auxz00_9284 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3250z00_4936); 
FAILURE(BgL_auxz00_9284,BFALSE,BFALSE);} } 
BgL_tmpz00_9280 = BgL_res2306z00_3465; } 
BgL_test4161z00_9279 = 
(BgL_tmpz00_9280==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4161z00_9279)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9289;
BgL_tmpz00_9289 = 
(int)(((long)0)); 
return 
STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_9289, BgL_vz00_3461);}  else 
{ /* Llib/weakhash.scm 524 */
return 
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86);} } } } } } } } }  else 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4163z00_9293;
{ /* Llib/weakhash.scm 567 */
obj_t BgL_arg1640z00_1800;
{ /* Llib/weakhash.scm 567 */
bool_t BgL_test4164z00_9294;
{ /* Llib/weakhash.scm 567 */
obj_t BgL_tmpz00_9295;
{ /* Llib/weakhash.scm 567 */
obj_t BgL_res2307z00_3469;
{ /* Llib/weakhash.scm 567 */
obj_t BgL_aux3252z00_4938;
BgL_aux3252z00_4938 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3252z00_4938))
{ /* Llib/weakhash.scm 567 */
BgL_res2307z00_3469 = BgL_aux3252z00_4938; }  else 
{ 
obj_t BgL_auxz00_9299;
BgL_auxz00_9299 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21855)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3252z00_4938); 
FAILURE(BgL_auxz00_9299,BFALSE,BFALSE);} } 
BgL_tmpz00_9295 = BgL_res2307z00_3469; } 
BgL_test4164z00_9294 = 
(BgL_tmpz00_9295==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4164z00_9294)
{ /* Llib/weakhash.scm 567 */
int BgL_tmpz00_9304;
BgL_tmpz00_9304 = 
(int)(((long)5)); 
BgL_arg1640z00_1800 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_9304); }  else 
{ /* Llib/weakhash.scm 567 */
BgL_arg1640z00_1800 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
{ /* Llib/weakhash.scm 567 */
long BgL_n2z00_3470;
{ /* Llib/weakhash.scm 567 */
obj_t BgL_tmpz00_9308;
if(
INTEGERP(BgL_arg1640z00_1800))
{ /* Llib/weakhash.scm 567 */
BgL_tmpz00_9308 = BgL_arg1640z00_1800
; }  else 
{ 
obj_t BgL_auxz00_9311;
BgL_auxz00_9311 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21877)), BGl_string3430z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1640z00_1800); 
FAILURE(BgL_auxz00_9311,BFALSE,BFALSE);} 
BgL_n2z00_3470 = 
(long)CINT(BgL_tmpz00_9308); } 
BgL_test4163z00_9293 = 
(((long)3)==BgL_n2z00_3470); } } 
if(BgL_test4163z00_9293)
{ /* Llib/weakhash.scm 524 */
obj_t BgL_oldzd2buckszd2_1734;
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4167z00_9317;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9318;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2309z00_3475;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3256z00_4942;
BgL_aux3256z00_4942 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3256z00_4942))
{ /* Llib/weakhash.scm 524 */
BgL_res2309z00_3475 = BgL_aux3256z00_4942; }  else 
{ 
obj_t BgL_auxz00_9322;
BgL_auxz00_9322 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3256z00_4942); 
FAILURE(BgL_auxz00_9322,BFALSE,BFALSE);} } 
BgL_tmpz00_9318 = BgL_res2309z00_3475; } 
BgL_test4167z00_9317 = 
(BgL_tmpz00_9318==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4167z00_9317)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9327;
BgL_tmpz00_9327 = 
(int)(((long)2)); 
BgL_oldzd2buckszd2_1734 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_9327); }  else 
{ /* Llib/weakhash.scm 524 */
BgL_oldzd2buckszd2_1734 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
{ /* Llib/weakhash.scm 524 */
long BgL_oldzd2buckszd2lenz00_1735;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_vectorz00_3476;
if(
VECTORP(BgL_oldzd2buckszd2_1734))
{ /* Llib/weakhash.scm 524 */
BgL_vectorz00_3476 = BgL_oldzd2buckszd2_1734; }  else 
{ 
obj_t BgL_auxz00_9333;
BgL_auxz00_9333 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_oldzd2buckszd2_1734); 
FAILURE(BgL_auxz00_9333,BFALSE,BFALSE);} 
BgL_oldzd2buckszd2lenz00_1735 = 
VECTOR_LENGTH(BgL_vectorz00_3476); } 
{ /* Llib/weakhash.scm 524 */
long BgL_newzd2buckszd2lenz00_1736;
BgL_newzd2buckszd2lenz00_1736 = 
(((long)2)*BgL_oldzd2buckszd2lenz00_1735); 
{ /* Llib/weakhash.scm 524 */
obj_t BgL_newzd2buckszd2_1737;
BgL_newzd2buckszd2_1737 = 
make_vector(BgL_newzd2buckszd2lenz00_1736, BNIL); 
{ /* Llib/weakhash.scm 524 */
obj_t BgL_countz00_1738;
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4170z00_9340;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9341;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2311z00_3482;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3260z00_4946;
BgL_aux3260z00_4946 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3260z00_4946))
{ /* Llib/weakhash.scm 524 */
BgL_res2311z00_3482 = BgL_aux3260z00_4946; }  else 
{ 
obj_t BgL_auxz00_9345;
BgL_auxz00_9345 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3260z00_4946); 
FAILURE(BgL_auxz00_9345,BFALSE,BFALSE);} } 
BgL_tmpz00_9341 = BgL_res2311z00_3482; } 
BgL_test4170z00_9340 = 
(BgL_tmpz00_9341==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4170z00_9340)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9350;
BgL_tmpz00_9350 = 
(int)(((long)0)); 
BgL_countz00_1738 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_9350); }  else 
{ /* Llib/weakhash.scm 524 */
BgL_countz00_1738 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
{ /* Llib/weakhash.scm 524 */

{ /* Llib/weakhash.scm 524 */
obj_t BgL_nmaxz00_1739;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_arg1607z00_1742;obj_t BgL_arg1608z00_1743;
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4172z00_9354;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9355;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2312z00_3486;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3262z00_4948;
BgL_aux3262z00_4948 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3262z00_4948))
{ /* Llib/weakhash.scm 524 */
BgL_res2312z00_3486 = BgL_aux3262z00_4948; }  else 
{ 
obj_t BgL_auxz00_9359;
BgL_auxz00_9359 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3262z00_4948); 
FAILURE(BgL_auxz00_9359,BFALSE,BFALSE);} } 
BgL_tmpz00_9355 = BgL_res2312z00_3486; } 
BgL_test4172z00_9354 = 
(BgL_tmpz00_9355==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4172z00_9354)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9364;
BgL_tmpz00_9364 = 
(int)(((long)1)); 
BgL_arg1607z00_1742 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_9364); }  else 
{ /* Llib/weakhash.scm 524 */
BgL_arg1607z00_1742 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4174z00_9368;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9369;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2313z00_3490;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3264z00_4950;
BgL_aux3264z00_4950 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3264z00_4950))
{ /* Llib/weakhash.scm 524 */
BgL_res2313z00_3490 = BgL_aux3264z00_4950; }  else 
{ 
obj_t BgL_auxz00_9373;
BgL_auxz00_9373 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3264z00_4950); 
FAILURE(BgL_auxz00_9373,BFALSE,BFALSE);} } 
BgL_tmpz00_9369 = BgL_res2313z00_3490; } 
BgL_test4174z00_9368 = 
(BgL_tmpz00_9369==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4174z00_9368)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9378;
BgL_tmpz00_9378 = 
(int)(((long)7)); 
BgL_arg1608z00_1743 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_9378); }  else 
{ /* Llib/weakhash.scm 524 */
BgL_arg1608z00_1743 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
BgL_nmaxz00_1739 = 
BGl_2za2za2zz__r4_numbers_6_5z00(BgL_arg1607z00_1742, BgL_arg1608z00_1743); } 
{ /* Llib/weakhash.scm 524 */
obj_t BgL_arg1605z00_1740;
if(
REALP(BgL_nmaxz00_1739))
{ /* Llib/weakhash.scm 524 */
BgL_arg1605z00_1740 = 
BINT(
(long)(
REAL_TO_DOUBLE(BgL_nmaxz00_1739))); }  else 
{ /* Llib/weakhash.scm 524 */
BgL_arg1605z00_1740 = BgL_nmaxz00_1739; } 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4177z00_9388;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9389;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2316z00_3497;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3266z00_4952;
BgL_aux3266z00_4952 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3266z00_4952))
{ /* Llib/weakhash.scm 524 */
BgL_res2316z00_3497 = BgL_aux3266z00_4952; }  else 
{ 
obj_t BgL_auxz00_9393;
BgL_auxz00_9393 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3266z00_4952); 
FAILURE(BgL_auxz00_9393,BFALSE,BFALSE);} } 
BgL_tmpz00_9389 = BgL_res2316z00_3497; } 
BgL_test4177z00_9388 = 
(BgL_tmpz00_9389==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4177z00_9388)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9398;
BgL_tmpz00_9398 = 
(int)(((long)1)); 
STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_9398, BgL_arg1605z00_1740); }  else 
{ /* Llib/weakhash.scm 524 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } } } 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4179z00_9402;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9403;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2317z00_3501;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3268z00_4954;
BgL_aux3268z00_4954 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3268z00_4954))
{ /* Llib/weakhash.scm 524 */
BgL_res2317z00_3501 = BgL_aux3268z00_4954; }  else 
{ 
obj_t BgL_auxz00_9407;
BgL_auxz00_9407 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3268z00_4954); 
FAILURE(BgL_auxz00_9407,BFALSE,BFALSE);} } 
BgL_tmpz00_9403 = BgL_res2317z00_3501; } 
BgL_test4179z00_9402 = 
(BgL_tmpz00_9403==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4179z00_9402)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9412;
BgL_tmpz00_9412 = 
(int)(((long)2)); 
STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_9412, BgL_newzd2buckszd2_1737); }  else 
{ /* Llib/weakhash.scm 524 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
{ 
long BgL_iz00_1745;
BgL_iz00_1745 = ((long)0); 
BgL_zc3z04anonymousza31609ze3z87_1746:
if(
(BgL_iz00_1745<BgL_oldzd2buckszd2lenz00_1735))
{ /* Llib/weakhash.scm 524 */
{ /* Llib/weakhash.scm 524 */
obj_t BgL_g1114z00_1748;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_vectorz00_3505;
if(
VECTORP(BgL_oldzd2buckszd2_1734))
{ /* Llib/weakhash.scm 524 */
BgL_vectorz00_3505 = BgL_oldzd2buckszd2_1734; }  else 
{ 
obj_t BgL_auxz00_9420;
BgL_auxz00_9420 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3333z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_oldzd2buckszd2_1734); 
FAILURE(BgL_auxz00_9420,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4183z00_9424;
{ /* Llib/weakhash.scm 524 */
long BgL_tmpz00_9425;
BgL_tmpz00_9425 = 
VECTOR_LENGTH(BgL_vectorz00_3505); 
BgL_test4183z00_9424 = 
BOUND_CHECK(BgL_iz00_1745, BgL_tmpz00_9425); } 
if(BgL_test4183z00_9424)
{ /* Llib/weakhash.scm 524 */
BgL_g1114z00_1748 = 
VECTOR_REF(BgL_vectorz00_3505,BgL_iz00_1745); }  else 
{ 
obj_t BgL_auxz00_9429;
BgL_auxz00_9429 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3326z00zz__weakhashz00, BgL_vectorz00_3505, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_3505)), 
(int)(BgL_iz00_1745)); 
FAILURE(BgL_auxz00_9429,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_l1112z00_1750;
BgL_l1112z00_1750 = BgL_g1114z00_1748; 
BgL_zc3z04anonymousza31611ze3z87_1751:
if(
PAIRP(BgL_l1112z00_1750))
{ /* Llib/weakhash.scm 524 */
{ /* Llib/weakhash.scm 569 */
obj_t BgL_cellz00_1753;
BgL_cellz00_1753 = 
CAR(BgL_l1112z00_1750); 
{ /* Llib/weakhash.scm 569 */
obj_t BgL_keyz00_1754;obj_t BgL_dataz00_1755;
{ /* Llib/weakhash.scm 569 */
obj_t BgL_arg1618z00_1763;
{ /* Llib/weakhash.scm 569 */
obj_t BgL_pairz00_3509;
if(
PAIRP(BgL_cellz00_1753))
{ /* Llib/weakhash.scm 569 */
BgL_pairz00_3509 = BgL_cellz00_1753; }  else 
{ 
obj_t BgL_auxz00_9441;
BgL_auxz00_9441 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21945)), BGl_string3440z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_cellz00_1753); 
FAILURE(BgL_auxz00_9441,BFALSE,BFALSE);} 
BgL_arg1618z00_1763 = 
CAR(BgL_pairz00_3509); } 
{ /* Llib/weakhash.scm 569 */
obj_t BgL_objz00_3510;
if(
BGL_WEAKPTRP(BgL_arg1618z00_1763))
{ /* Llib/weakhash.scm 569 */
BgL_objz00_3510 = BgL_arg1618z00_1763; }  else 
{ 
obj_t BgL_auxz00_9448;
BgL_auxz00_9448 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21949)), BGl_string3440z00zz__weakhashz00, BGl_string3329z00zz__weakhashz00, BgL_arg1618z00_1763); 
FAILURE(BgL_auxz00_9448,BFALSE,BFALSE);} 
BgL_keyz00_1754 = 
weakptr_data(BgL_objz00_3510); } } 
{ /* Llib/weakhash.scm 570 */
obj_t BgL_arg1619z00_1764;
{ /* Llib/weakhash.scm 570 */
obj_t BgL_pairz00_3511;
if(
PAIRP(BgL_cellz00_1753))
{ /* Llib/weakhash.scm 570 */
BgL_pairz00_3511 = BgL_cellz00_1753; }  else 
{ 
obj_t BgL_auxz00_9455;
BgL_auxz00_9455 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21984)), BGl_string3440z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_cellz00_1753); 
FAILURE(BgL_auxz00_9455,BFALSE,BFALSE);} 
BgL_arg1619z00_1764 = 
CDR(BgL_pairz00_3511); } 
{ /* Llib/weakhash.scm 570 */
obj_t BgL_objz00_3512;
if(
BGL_WEAKPTRP(BgL_arg1619z00_1764))
{ /* Llib/weakhash.scm 570 */
BgL_objz00_3512 = BgL_arg1619z00_1764; }  else 
{ 
obj_t BgL_auxz00_9462;
BgL_auxz00_9462 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)21988)), BGl_string3440z00zz__weakhashz00, BGl_string3329z00zz__weakhashz00, BgL_arg1619z00_1764); 
FAILURE(BgL_auxz00_9462,BFALSE,BFALSE);} 
BgL_dataz00_1755 = 
weakptr_data(BgL_objz00_3512); } } 
{ /* Llib/weakhash.scm 571 */
bool_t BgL_test4189z00_9467;
if(
(BgL_keyz00_1754==BUNSPEC))
{ /* Llib/weakhash.scm 571 */
BgL_test4189z00_9467 = ((bool_t)1)
; }  else 
{ /* Llib/weakhash.scm 571 */
BgL_test4189z00_9467 = 
(BgL_dataz00_1755==BUNSPEC)
; } 
if(BgL_test4189z00_9467)
{ 
obj_t BgL_tmpz00_9471;
{ /* Llib/weakhash.scm 573 */
obj_t BgL_aux3280z00_4966;
BgL_aux3280z00_4966 = BgL_countz00_1738; 
if(
INTEGERP(BgL_aux3280z00_4966))
{ /* Llib/weakhash.scm 573 */
BgL_tmpz00_9471 = BgL_aux3280z00_4966
; }  else 
{ 
obj_t BgL_auxz00_9474;
BgL_auxz00_9474 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)22094)), BGl_string3440z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_aux3280z00_4966); 
FAILURE(BgL_auxz00_9474,BFALSE,BFALSE);} } 
BgL_countz00_1738 = 
SUBFX(BgL_tmpz00_9471, 
BINT(((long)1))); }  else 
{ /* Llib/weakhash.scm 574 */
long BgL_hz00_1758;
{ /* Llib/weakhash.scm 575 */
long BgL_arg1617z00_1761;
{ /* Llib/weakhash.scm 575 */
long BgL_res2326z00_3530;
{ /* Llib/weakhash.scm 575 */
obj_t BgL_hashnz00_3515;
{ /* Llib/weakhash.scm 575 */
bool_t BgL_test4192z00_9480;
{ /* Llib/weakhash.scm 575 */
obj_t BgL_tmpz00_9481;
{ /* Llib/weakhash.scm 575 */
obj_t BgL_res2321z00_3521;
{ /* Llib/weakhash.scm 575 */
obj_t BgL_aux3282z00_4968;
BgL_aux3282z00_4968 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3282z00_4968))
{ /* Llib/weakhash.scm 575 */
BgL_res2321z00_3521 = BgL_aux3282z00_4968; }  else 
{ 
obj_t BgL_auxz00_9485;
BgL_auxz00_9485 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)22143)), BGl_string3440z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3282z00_4968); 
FAILURE(BgL_auxz00_9485,BFALSE,BFALSE);} } 
BgL_tmpz00_9481 = BgL_res2321z00_3521; } 
BgL_test4192z00_9480 = 
(BgL_tmpz00_9481==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4192z00_9480)
{ /* Llib/weakhash.scm 575 */
int BgL_tmpz00_9490;
BgL_tmpz00_9490 = 
(int)(((long)4)); 
BgL_hashnz00_3515 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_9490); }  else 
{ /* Llib/weakhash.scm 575 */
BgL_hashnz00_3515 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
if(
PROCEDUREP(BgL_hashnz00_3515))
{ /* Llib/weakhash.scm 575 */
obj_t BgL_arg1310z00_3517;
if(
PROCEDURE_CORRECT_ARITYP(BgL_hashnz00_3515, ((long)1)))
{ /* Llib/weakhash.scm 575 */
BgL_arg1310z00_3517 = 
PROCEDURE_ENTRY(BgL_hashnz00_3515)(BgL_hashnz00_3515, BgL_keyz00_1754, BEOA); }  else 
{ /* Llib/weakhash.scm 575 */
FAILURE(BGl_string3441z00zz__weakhashz00,BGl_list3380z00zz__weakhashz00,BgL_hashnz00_3515);} 
{ /* Llib/weakhash.scm 575 */
long BgL_nz00_3523;
{ /* Llib/weakhash.scm 575 */
obj_t BgL_tmpz00_9503;
if(
INTEGERP(BgL_arg1310z00_3517))
{ /* Llib/weakhash.scm 575 */
BgL_tmpz00_9503 = BgL_arg1310z00_3517
; }  else 
{ 
obj_t BgL_auxz00_9506;
BgL_auxz00_9506 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)22143)), BGl_string3440z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1310z00_3517); 
FAILURE(BgL_auxz00_9506,BFALSE,BFALSE);} 
BgL_nz00_3523 = 
(long)CINT(BgL_tmpz00_9503); } 
if(
(BgL_nz00_3523<((long)0)))
{ /* Llib/weakhash.scm 575 */
BgL_res2326z00_3530 = 
NEG(BgL_nz00_3523); }  else 
{ /* Llib/weakhash.scm 575 */
BgL_res2326z00_3530 = BgL_nz00_3523; } } }  else 
{ /* Llib/weakhash.scm 575 */
BgL_res2326z00_3530 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_1754); } } 
BgL_arg1617z00_1761 = BgL_res2326z00_3530; } 
{ /* Llib/weakhash.scm 574 */
long BgL_res2332z00_3549;
{ /* Llib/weakhash.scm 574 */
long BgL_n1z00_3531;long BgL_n2z00_3532;
BgL_n1z00_3531 = BgL_arg1617z00_1761; 
BgL_n2z00_3532 = BgL_newzd2buckszd2lenz00_1736; 
{ /* Llib/weakhash.scm 574 */
bool_t BgL_test4198z00_9515;
{ /* Llib/weakhash.scm 574 */
long BgL_arg1836z00_3534;
BgL_arg1836z00_3534 = 
(((BgL_n1z00_3531) | (BgL_n2z00_3532)) & -2147483648); 
BgL_test4198z00_9515 = 
(BgL_arg1836z00_3534==((long)0)); } 
if(BgL_test4198z00_9515)
{ /* Llib/weakhash.scm 574 */
int32_t BgL_arg1832z00_3535;
{ /* Llib/weakhash.scm 574 */
int32_t BgL_arg1833z00_3536;int32_t BgL_arg1835z00_3537;
{ /* Llib/weakhash.scm 574 */
int32_t BgL_res2328z00_3541;
BgL_res2328z00_3541 = 
(int32_t)(BgL_n1z00_3531); 
BgL_arg1833z00_3536 = BgL_res2328z00_3541; } 
{ /* Llib/weakhash.scm 574 */
int32_t BgL_res2329z00_3543;
BgL_res2329z00_3543 = 
(int32_t)(BgL_n2z00_3532); 
BgL_arg1835z00_3537 = BgL_res2329z00_3543; } 
BgL_arg1832z00_3535 = 
(BgL_arg1833z00_3536%BgL_arg1835z00_3537); } 
{ /* Llib/weakhash.scm 574 */
long BgL_res2331z00_3548;
{ /* Llib/weakhash.scm 574 */
long BgL_arg1940z00_3545;
BgL_arg1940z00_3545 = 
(long)(BgL_arg1832z00_3535); 
{ /* Llib/weakhash.scm 574 */
long BgL_res2330z00_3547;
BgL_res2330z00_3547 = 
(long)(BgL_arg1940z00_3545); 
BgL_res2331z00_3548 = BgL_res2330z00_3547; } } 
BgL_res2332z00_3549 = BgL_res2331z00_3548; } }  else 
{ /* Llib/weakhash.scm 574 */
BgL_res2332z00_3549 = 
(BgL_n1z00_3531%BgL_n2z00_3532); } } } 
BgL_hz00_1758 = BgL_res2332z00_3549; } } 
{ /* Llib/weakhash.scm 580 */
obj_t BgL_arg1615z00_1759;
{ /* Llib/weakhash.scm 580 */
obj_t BgL_arg1616z00_1760;
{ /* Llib/weakhash.scm 580 */
bool_t BgL_test4199z00_9524;
{ /* Llib/weakhash.scm 580 */
long BgL_tmpz00_9525;
BgL_tmpz00_9525 = 
VECTOR_LENGTH(BgL_newzd2buckszd2_1737); 
BgL_test4199z00_9524 = 
BOUND_CHECK(BgL_hz00_1758, BgL_tmpz00_9525); } 
if(BgL_test4199z00_9524)
{ /* Llib/weakhash.scm 580 */
BgL_arg1616z00_1760 = 
VECTOR_REF(BgL_newzd2buckszd2_1737,BgL_hz00_1758); }  else 
{ 
obj_t BgL_auxz00_9529;
BgL_auxz00_9529 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)22275)), BGl_string3326z00zz__weakhashz00, BgL_newzd2buckszd2_1737, 
(int)(
VECTOR_LENGTH(BgL_newzd2buckszd2_1737)), 
(int)(BgL_hz00_1758)); 
FAILURE(BgL_auxz00_9529,BFALSE,BFALSE);} } 
BgL_arg1615z00_1759 = 
MAKE_YOUNG_PAIR(BgL_cellz00_1753, BgL_arg1616z00_1760); } 
{ /* Llib/weakhash.scm 577 */
bool_t BgL_test4200z00_9537;
{ /* Llib/weakhash.scm 577 */
long BgL_tmpz00_9538;
BgL_tmpz00_9538 = 
VECTOR_LENGTH(BgL_newzd2buckszd2_1737); 
BgL_test4200z00_9537 = 
BOUND_CHECK(BgL_hz00_1758, BgL_tmpz00_9538); } 
if(BgL_test4200z00_9537)
{ /* Llib/weakhash.scm 577 */
VECTOR_SET(BgL_newzd2buckszd2_1737,BgL_hz00_1758,BgL_arg1615z00_1759); }  else 
{ 
obj_t BgL_auxz00_9542;
BgL_auxz00_9542 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)22213)), BGl_string3331z00zz__weakhashz00, BgL_newzd2buckszd2_1737, 
(int)(
VECTOR_LENGTH(BgL_newzd2buckszd2_1737)), 
(int)(BgL_hz00_1758)); 
FAILURE(BgL_auxz00_9542,BFALSE,BFALSE);} } } } } } } 
{ 
obj_t BgL_l1112z00_9549;
BgL_l1112z00_9549 = 
CDR(BgL_l1112z00_1750); 
BgL_l1112z00_1750 = BgL_l1112z00_9549; 
goto BgL_zc3z04anonymousza31611ze3z87_1751;} }  else 
{ /* Llib/weakhash.scm 524 */
if(
NULLP(BgL_l1112z00_1750))
{ /* Llib/weakhash.scm 524 */BTRUE; }  else 
{ /* Llib/weakhash.scm 524 */
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3433z00zz__weakhashz00, BGl_string3434z00zz__weakhashz00, BgL_l1112z00_1750); } } } } 
{ 
long BgL_iz00_9554;
BgL_iz00_9554 = 
(BgL_iz00_1745+((long)1)); 
BgL_iz00_1745 = BgL_iz00_9554; 
goto BgL_zc3z04anonymousza31609ze3z87_1746;} }  else 
{ /* Llib/weakhash.scm 524 */((bool_t)0); } } 
{ /* Llib/weakhash.scm 524 */
obj_t BgL_vz00_3558;
BgL_vz00_3558 = BgL_countz00_1738; 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4202z00_9556;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9557;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2335z00_3562;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3288z00_4975;
BgL_aux3288z00_4975 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3288z00_4975))
{ /* Llib/weakhash.scm 524 */
BgL_res2335z00_3562 = BgL_aux3288z00_4975; }  else 
{ 
obj_t BgL_auxz00_9561;
BgL_auxz00_9561 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3288z00_4975); 
FAILURE(BgL_auxz00_9561,BFALSE,BFALSE);} } 
BgL_tmpz00_9557 = BgL_res2335z00_3562; } 
BgL_test4202z00_9556 = 
(BgL_tmpz00_9557==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4202z00_9556)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9566;
BgL_tmpz00_9566 = 
(int)(((long)0)); 
return 
STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_9566, BgL_vz00_3558);}  else 
{ /* Llib/weakhash.scm 524 */
return 
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86);} } } } } } } } }  else 
{ /* Llib/weakhash.scm 524 */
obj_t BgL_oldzd2buckszd2_1770;
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4204z00_9570;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9571;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2336z00_3566;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3290z00_4977;
BgL_aux3290z00_4977 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3290z00_4977))
{ /* Llib/weakhash.scm 524 */
BgL_res2336z00_3566 = BgL_aux3290z00_4977; }  else 
{ 
obj_t BgL_auxz00_9575;
BgL_auxz00_9575 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3290z00_4977); 
FAILURE(BgL_auxz00_9575,BFALSE,BFALSE);} } 
BgL_tmpz00_9571 = BgL_res2336z00_3566; } 
BgL_test4204z00_9570 = 
(BgL_tmpz00_9571==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4204z00_9570)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9580;
BgL_tmpz00_9580 = 
(int)(((long)2)); 
BgL_oldzd2buckszd2_1770 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_9580); }  else 
{ /* Llib/weakhash.scm 524 */
BgL_oldzd2buckszd2_1770 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
{ /* Llib/weakhash.scm 524 */
long BgL_oldzd2buckszd2lenz00_1771;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_vectorz00_3567;
if(
VECTORP(BgL_oldzd2buckszd2_1770))
{ /* Llib/weakhash.scm 524 */
BgL_vectorz00_3567 = BgL_oldzd2buckszd2_1770; }  else 
{ 
obj_t BgL_auxz00_9586;
BgL_auxz00_9586 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_oldzd2buckszd2_1770); 
FAILURE(BgL_auxz00_9586,BFALSE,BFALSE);} 
BgL_oldzd2buckszd2lenz00_1771 = 
VECTOR_LENGTH(BgL_vectorz00_3567); } 
{ /* Llib/weakhash.scm 524 */
long BgL_newzd2buckszd2lenz00_1772;
BgL_newzd2buckszd2lenz00_1772 = 
(((long)2)*BgL_oldzd2buckszd2lenz00_1771); 
{ /* Llib/weakhash.scm 524 */
obj_t BgL_newzd2buckszd2_1773;
BgL_newzd2buckszd2_1773 = 
make_vector(BgL_newzd2buckszd2lenz00_1772, BNIL); 
{ /* Llib/weakhash.scm 524 */
obj_t BgL_countz00_1774;
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4207z00_9593;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9594;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2338z00_3573;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3294z00_4981;
BgL_aux3294z00_4981 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3294z00_4981))
{ /* Llib/weakhash.scm 524 */
BgL_res2338z00_3573 = BgL_aux3294z00_4981; }  else 
{ 
obj_t BgL_auxz00_9598;
BgL_auxz00_9598 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3294z00_4981); 
FAILURE(BgL_auxz00_9598,BFALSE,BFALSE);} } 
BgL_tmpz00_9594 = BgL_res2338z00_3573; } 
BgL_test4207z00_9593 = 
(BgL_tmpz00_9594==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4207z00_9593)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9603;
BgL_tmpz00_9603 = 
(int)(((long)0)); 
BgL_countz00_1774 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_9603); }  else 
{ /* Llib/weakhash.scm 524 */
BgL_countz00_1774 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
{ /* Llib/weakhash.scm 524 */

{ /* Llib/weakhash.scm 524 */
obj_t BgL_nmaxz00_1775;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_arg1626z00_1778;obj_t BgL_arg1627z00_1779;
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4209z00_9607;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9608;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2339z00_3577;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3296z00_4983;
BgL_aux3296z00_4983 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3296z00_4983))
{ /* Llib/weakhash.scm 524 */
BgL_res2339z00_3577 = BgL_aux3296z00_4983; }  else 
{ 
obj_t BgL_auxz00_9612;
BgL_auxz00_9612 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3296z00_4983); 
FAILURE(BgL_auxz00_9612,BFALSE,BFALSE);} } 
BgL_tmpz00_9608 = BgL_res2339z00_3577; } 
BgL_test4209z00_9607 = 
(BgL_tmpz00_9608==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4209z00_9607)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9617;
BgL_tmpz00_9617 = 
(int)(((long)1)); 
BgL_arg1626z00_1778 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_9617); }  else 
{ /* Llib/weakhash.scm 524 */
BgL_arg1626z00_1778 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4211z00_9621;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9622;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2340z00_3581;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3298z00_4985;
BgL_aux3298z00_4985 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3298z00_4985))
{ /* Llib/weakhash.scm 524 */
BgL_res2340z00_3581 = BgL_aux3298z00_4985; }  else 
{ 
obj_t BgL_auxz00_9626;
BgL_auxz00_9626 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3298z00_4985); 
FAILURE(BgL_auxz00_9626,BFALSE,BFALSE);} } 
BgL_tmpz00_9622 = BgL_res2340z00_3581; } 
BgL_test4211z00_9621 = 
(BgL_tmpz00_9622==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4211z00_9621)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9631;
BgL_tmpz00_9631 = 
(int)(((long)7)); 
BgL_arg1627z00_1779 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_9631); }  else 
{ /* Llib/weakhash.scm 524 */
BgL_arg1627z00_1779 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
BgL_nmaxz00_1775 = 
BGl_2za2za2zz__r4_numbers_6_5z00(BgL_arg1626z00_1778, BgL_arg1627z00_1779); } 
{ /* Llib/weakhash.scm 524 */
obj_t BgL_arg1624z00_1776;
if(
REALP(BgL_nmaxz00_1775))
{ /* Llib/weakhash.scm 524 */
BgL_arg1624z00_1776 = 
BINT(
(long)(
REAL_TO_DOUBLE(BgL_nmaxz00_1775))); }  else 
{ /* Llib/weakhash.scm 524 */
BgL_arg1624z00_1776 = BgL_nmaxz00_1775; } 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4214z00_9641;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9642;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2343z00_3588;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3300z00_4987;
BgL_aux3300z00_4987 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3300z00_4987))
{ /* Llib/weakhash.scm 524 */
BgL_res2343z00_3588 = BgL_aux3300z00_4987; }  else 
{ 
obj_t BgL_auxz00_9646;
BgL_auxz00_9646 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3300z00_4987); 
FAILURE(BgL_auxz00_9646,BFALSE,BFALSE);} } 
BgL_tmpz00_9642 = BgL_res2343z00_3588; } 
BgL_test4214z00_9641 = 
(BgL_tmpz00_9642==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4214z00_9641)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9651;
BgL_tmpz00_9651 = 
(int)(((long)1)); 
STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_9651, BgL_arg1624z00_1776); }  else 
{ /* Llib/weakhash.scm 524 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } } } 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4216z00_9655;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9656;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2344z00_3592;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3302z00_4989;
BgL_aux3302z00_4989 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3302z00_4989))
{ /* Llib/weakhash.scm 524 */
BgL_res2344z00_3592 = BgL_aux3302z00_4989; }  else 
{ 
obj_t BgL_auxz00_9660;
BgL_auxz00_9660 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3302z00_4989); 
FAILURE(BgL_auxz00_9660,BFALSE,BFALSE);} } 
BgL_tmpz00_9656 = BgL_res2344z00_3592; } 
BgL_test4216z00_9655 = 
(BgL_tmpz00_9656==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4216z00_9655)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9665;
BgL_tmpz00_9665 = 
(int)(((long)2)); 
STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_9665, BgL_newzd2buckszd2_1773); }  else 
{ /* Llib/weakhash.scm 524 */
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
{ 
long BgL_iz00_1781;
BgL_iz00_1781 = ((long)0); 
BgL_zc3z04anonymousza31628ze3z87_1782:
if(
(BgL_iz00_1781<BgL_oldzd2buckszd2lenz00_1771))
{ /* Llib/weakhash.scm 524 */
{ /* Llib/weakhash.scm 524 */
obj_t BgL_g1117z00_1784;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_vectorz00_3596;
if(
VECTORP(BgL_oldzd2buckszd2_1770))
{ /* Llib/weakhash.scm 524 */
BgL_vectorz00_3596 = BgL_oldzd2buckszd2_1770; }  else 
{ 
obj_t BgL_auxz00_9673;
BgL_auxz00_9673 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3333z00zz__weakhashz00, BGl_string3325z00zz__weakhashz00, BgL_oldzd2buckszd2_1770); 
FAILURE(BgL_auxz00_9673,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4220z00_9677;
{ /* Llib/weakhash.scm 524 */
long BgL_tmpz00_9678;
BgL_tmpz00_9678 = 
VECTOR_LENGTH(BgL_vectorz00_3596); 
BgL_test4220z00_9677 = 
BOUND_CHECK(BgL_iz00_1781, BgL_tmpz00_9678); } 
if(BgL_test4220z00_9677)
{ /* Llib/weakhash.scm 524 */
BgL_g1117z00_1784 = 
VECTOR_REF(BgL_vectorz00_3596,BgL_iz00_1781); }  else 
{ 
obj_t BgL_auxz00_9682;
BgL_auxz00_9682 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3326z00zz__weakhashz00, BgL_vectorz00_3596, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_3596)), 
(int)(BgL_iz00_1781)); 
FAILURE(BgL_auxz00_9682,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_l1115z00_1786;
BgL_l1115z00_1786 = BgL_g1117z00_1784; 
BgL_zc3z04anonymousza31630ze3z87_1787:
if(
PAIRP(BgL_l1115z00_1786))
{ /* Llib/weakhash.scm 524 */
{ /* Llib/weakhash.scm 584 */
obj_t BgL_cellz00_1789;
BgL_cellz00_1789 = 
CAR(BgL_l1115z00_1786); 
{ /* Llib/weakhash.scm 584 */
long BgL_hz00_1790;
{ /* Llib/weakhash.scm 586 */
long BgL_arg1634z00_1793;
{ /* Llib/weakhash.scm 586 */
obj_t BgL_arg1635z00_1794;
{ /* Llib/weakhash.scm 586 */
obj_t BgL_pairz00_3600;
if(
PAIRP(BgL_cellz00_1789))
{ /* Llib/weakhash.scm 586 */
BgL_pairz00_3600 = BgL_cellz00_1789; }  else 
{ 
obj_t BgL_auxz00_9694;
BgL_auxz00_9694 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)22434)), BGl_string3442z00zz__weakhashz00, BGl_string3328z00zz__weakhashz00, BgL_cellz00_1789); 
FAILURE(BgL_auxz00_9694,BFALSE,BFALSE);} 
BgL_arg1635z00_1794 = 
CAR(BgL_pairz00_3600); } 
{ /* Llib/weakhash.scm 585 */
long BgL_res2352z00_3616;
{ /* Llib/weakhash.scm 585 */
obj_t BgL_hashnz00_3601;
{ /* Llib/weakhash.scm 585 */
bool_t BgL_test4223z00_9699;
{ /* Llib/weakhash.scm 585 */
obj_t BgL_tmpz00_9700;
{ /* Llib/weakhash.scm 585 */
obj_t BgL_res2347z00_3607;
{ /* Llib/weakhash.scm 585 */
obj_t BgL_aux3308z00_4995;
BgL_aux3308z00_4995 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3308z00_4995))
{ /* Llib/weakhash.scm 585 */
BgL_res2347z00_3607 = BgL_aux3308z00_4995; }  else 
{ 
obj_t BgL_auxz00_9704;
BgL_auxz00_9704 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)22390)), BGl_string3442z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3308z00_4995); 
FAILURE(BgL_auxz00_9704,BFALSE,BFALSE);} } 
BgL_tmpz00_9700 = BgL_res2347z00_3607; } 
BgL_test4223z00_9699 = 
(BgL_tmpz00_9700==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4223z00_9699)
{ /* Llib/weakhash.scm 585 */
int BgL_tmpz00_9709;
BgL_tmpz00_9709 = 
(int)(((long)4)); 
BgL_hashnz00_3601 = 
STRUCT_REF(BgL_tablez00_86, BgL_tmpz00_9709); }  else 
{ /* Llib/weakhash.scm 585 */
BgL_hashnz00_3601 = 
BGl_errorz00zz__errorz00(BGl_string3323z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86); } } 
if(
PROCEDUREP(BgL_hashnz00_3601))
{ /* Llib/weakhash.scm 585 */
obj_t BgL_arg1310z00_3603;
if(
PROCEDURE_CORRECT_ARITYP(BgL_hashnz00_3601, ((long)1)))
{ /* Llib/weakhash.scm 585 */
BgL_arg1310z00_3603 = 
PROCEDURE_ENTRY(BgL_hashnz00_3601)(BgL_hashnz00_3601, BgL_arg1635z00_1794, BEOA); }  else 
{ /* Llib/weakhash.scm 585 */
FAILURE(BGl_string3443z00zz__weakhashz00,BGl_list3444z00zz__weakhashz00,BgL_hashnz00_3601);} 
{ /* Llib/weakhash.scm 585 */
long BgL_nz00_3609;
{ /* Llib/weakhash.scm 585 */
obj_t BgL_tmpz00_9722;
if(
INTEGERP(BgL_arg1310z00_3603))
{ /* Llib/weakhash.scm 585 */
BgL_tmpz00_9722 = BgL_arg1310z00_3603
; }  else 
{ 
obj_t BgL_auxz00_9725;
BgL_auxz00_9725 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)22390)), BGl_string3442z00zz__weakhashz00, BGl_string3324z00zz__weakhashz00, BgL_arg1310z00_3603); 
FAILURE(BgL_auxz00_9725,BFALSE,BFALSE);} 
BgL_nz00_3609 = 
(long)CINT(BgL_tmpz00_9722); } 
if(
(BgL_nz00_3609<((long)0)))
{ /* Llib/weakhash.scm 585 */
BgL_res2352z00_3616 = 
NEG(BgL_nz00_3609); }  else 
{ /* Llib/weakhash.scm 585 */
BgL_res2352z00_3616 = BgL_nz00_3609; } } }  else 
{ /* Llib/weakhash.scm 585 */
BgL_res2352z00_3616 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_arg1635z00_1794); } } 
BgL_arg1634z00_1793 = BgL_res2352z00_3616; } } 
{ /* Llib/weakhash.scm 584 */
long BgL_res2358z00_3635;
{ /* Llib/weakhash.scm 584 */
long BgL_n1z00_3617;long BgL_n2z00_3618;
BgL_n1z00_3617 = BgL_arg1634z00_1793; 
BgL_n2z00_3618 = BgL_newzd2buckszd2lenz00_1772; 
{ /* Llib/weakhash.scm 584 */
bool_t BgL_test4229z00_9734;
{ /* Llib/weakhash.scm 584 */
long BgL_arg1836z00_3620;
BgL_arg1836z00_3620 = 
(((BgL_n1z00_3617) | (BgL_n2z00_3618)) & -2147483648); 
BgL_test4229z00_9734 = 
(BgL_arg1836z00_3620==((long)0)); } 
if(BgL_test4229z00_9734)
{ /* Llib/weakhash.scm 584 */
int32_t BgL_arg1832z00_3621;
{ /* Llib/weakhash.scm 584 */
int32_t BgL_arg1833z00_3622;int32_t BgL_arg1835z00_3623;
{ /* Llib/weakhash.scm 584 */
int32_t BgL_res2354z00_3627;
BgL_res2354z00_3627 = 
(int32_t)(BgL_n1z00_3617); 
BgL_arg1833z00_3622 = BgL_res2354z00_3627; } 
{ /* Llib/weakhash.scm 584 */
int32_t BgL_res2355z00_3629;
BgL_res2355z00_3629 = 
(int32_t)(BgL_n2z00_3618); 
BgL_arg1835z00_3623 = BgL_res2355z00_3629; } 
BgL_arg1832z00_3621 = 
(BgL_arg1833z00_3622%BgL_arg1835z00_3623); } 
{ /* Llib/weakhash.scm 584 */
long BgL_res2357z00_3634;
{ /* Llib/weakhash.scm 584 */
long BgL_arg1940z00_3631;
BgL_arg1940z00_3631 = 
(long)(BgL_arg1832z00_3621); 
{ /* Llib/weakhash.scm 584 */
long BgL_res2356z00_3633;
BgL_res2356z00_3633 = 
(long)(BgL_arg1940z00_3631); 
BgL_res2357z00_3634 = BgL_res2356z00_3633; } } 
BgL_res2358z00_3635 = BgL_res2357z00_3634; } }  else 
{ /* Llib/weakhash.scm 584 */
BgL_res2358z00_3635 = 
(BgL_n1z00_3617%BgL_n2z00_3618); } } } 
BgL_hz00_1790 = BgL_res2358z00_3635; } } 
{ /* Llib/weakhash.scm 592 */
obj_t BgL_arg1632z00_1791;
{ /* Llib/weakhash.scm 592 */
obj_t BgL_arg1633z00_1792;
{ /* Llib/weakhash.scm 592 */
bool_t BgL_test4230z00_9743;
{ /* Llib/weakhash.scm 592 */
long BgL_tmpz00_9744;
BgL_tmpz00_9744 = 
VECTOR_LENGTH(BgL_newzd2buckszd2_1773); 
BgL_test4230z00_9743 = 
BOUND_CHECK(BgL_hz00_1790, BgL_tmpz00_9744); } 
if(BgL_test4230z00_9743)
{ /* Llib/weakhash.scm 592 */
BgL_arg1633z00_1792 = 
VECTOR_REF(BgL_newzd2buckszd2_1773,BgL_hz00_1790); }  else 
{ 
obj_t BgL_auxz00_9748;
BgL_auxz00_9748 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)22536)), BGl_string3326z00zz__weakhashz00, BgL_newzd2buckszd2_1773, 
(int)(
VECTOR_LENGTH(BgL_newzd2buckszd2_1773)), 
(int)(BgL_hz00_1790)); 
FAILURE(BgL_auxz00_9748,BFALSE,BFALSE);} } 
BgL_arg1632z00_1791 = 
MAKE_YOUNG_PAIR(BgL_cellz00_1789, BgL_arg1633z00_1792); } 
{ /* Llib/weakhash.scm 588 */
bool_t BgL_test4231z00_9756;
{ /* Llib/weakhash.scm 588 */
long BgL_tmpz00_9757;
BgL_tmpz00_9757 = 
VECTOR_LENGTH(BgL_newzd2buckszd2_1773); 
BgL_test4231z00_9756 = 
BOUND_CHECK(BgL_hz00_1790, BgL_tmpz00_9757); } 
if(BgL_test4231z00_9756)
{ /* Llib/weakhash.scm 588 */
VECTOR_SET(BgL_newzd2buckszd2_1773,BgL_hz00_1790,BgL_arg1632z00_1791); }  else 
{ 
obj_t BgL_auxz00_9761;
BgL_auxz00_9761 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)22478)), BGl_string3331z00zz__weakhashz00, BgL_newzd2buckszd2_1773, 
(int)(
VECTOR_LENGTH(BgL_newzd2buckszd2_1773)), 
(int)(BgL_hz00_1790)); 
FAILURE(BgL_auxz00_9761,BFALSE,BFALSE);} } } } } 
{ 
obj_t BgL_l1115z00_9768;
BgL_l1115z00_9768 = 
CDR(BgL_l1115z00_1786); 
BgL_l1115z00_1786 = BgL_l1115z00_9768; 
goto BgL_zc3z04anonymousza31630ze3z87_1787;} }  else 
{ /* Llib/weakhash.scm 524 */
if(
NULLP(BgL_l1115z00_1786))
{ /* Llib/weakhash.scm 524 */BTRUE; }  else 
{ /* Llib/weakhash.scm 524 */
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3433z00zz__weakhashz00, BGl_string3434z00zz__weakhashz00, BgL_l1115z00_1786); } } } } 
{ 
long BgL_iz00_9773;
BgL_iz00_9773 = 
(BgL_iz00_1781+((long)1)); 
BgL_iz00_1781 = BgL_iz00_9773; 
goto BgL_zc3z04anonymousza31628ze3z87_1782;} }  else 
{ /* Llib/weakhash.scm 524 */((bool_t)0); } } 
{ /* Llib/weakhash.scm 524 */
bool_t BgL_test4233z00_9775;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_tmpz00_9776;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_res2361z00_3647;
{ /* Llib/weakhash.scm 524 */
obj_t BgL_aux3314z00_5002;
BgL_aux3314z00_5002 = 
STRUCT_KEY(BgL_tablez00_86); 
if(
SYMBOLP(BgL_aux3314z00_5002))
{ /* Llib/weakhash.scm 524 */
BgL_res2361z00_3647 = BgL_aux3314z00_5002; }  else 
{ 
obj_t BgL_auxz00_9780;
BgL_auxz00_9780 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3430z00zz__weakhashz00, BGl_string3320z00zz__weakhashz00, BgL_aux3314z00_5002); 
FAILURE(BgL_auxz00_9780,BFALSE,BFALSE);} } 
BgL_tmpz00_9776 = BgL_res2361z00_3647; } 
BgL_test4233z00_9775 = 
(BgL_tmpz00_9776==BGl_symbol3321z00zz__weakhashz00); } 
if(BgL_test4233z00_9775)
{ /* Llib/weakhash.scm 524 */
int BgL_tmpz00_9785;
BgL_tmpz00_9785 = 
(int)(((long)0)); 
return 
STRUCT_SET(BgL_tablez00_86, BgL_tmpz00_9785, BgL_countz00_1774);}  else 
{ /* Llib/weakhash.scm 524 */
return 
BGl_errorz00zz__errorz00(BGl_string3330z00zz__weakhashz00, BGl_string3322z00zz__weakhashz00, BgL_tablez00_86);} } } } } } } } } } } } 

}



/* &weak-hashtable-expand! */
obj_t BGl_z62weakzd2hashtablezd2expandz12z70zz__weakhashz00(obj_t BgL_envz00_4082, obj_t BgL_tablez00_4083)
{
{ /* Llib/weakhash.scm 523 */
{ /* Llib/weakhash.scm 524 */
obj_t BgL_auxz00_9789;
if(
STRUCTP(BgL_tablez00_4083))
{ /* Llib/weakhash.scm 524 */
BgL_auxz00_9789 = BgL_tablez00_4083
; }  else 
{ 
obj_t BgL_auxz00_9792;
BgL_auxz00_9792 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3318z00zz__weakhashz00, 
BINT(((long)20385)), BGl_string3447z00zz__weakhashz00, BGl_string3358z00zz__weakhashz00, BgL_tablez00_4083); 
FAILURE(BgL_auxz00_9792,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00(BgL_auxz00_9789);} } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__weakhashz00()
{
{ /* Llib/weakhash.scm 18 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__weakhashz00()
{
{ /* Llib/weakhash.scm 18 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__weakhashz00()
{
{ /* Llib/weakhash.scm 18 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__weakhashz00()
{
{ /* Llib/weakhash.scm 18 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string3448z00zz__weakhashz00)); 
BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long)460263341), 
BSTRING_TO_STRING(BGl_string3448z00zz__weakhashz00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string3448z00zz__weakhashz00)); 
BGl_modulezd2initializa7ationz75zz__hashz00(((long)214649622), 
BSTRING_TO_STRING(BGl_string3448z00zz__weakhashz00)); 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)340267996), 
BSTRING_TO_STRING(BGl_string3448z00zz__weakhashz00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)193422032), 
BSTRING_TO_STRING(BGl_string3448z00zz__weakhashz00)); 
return 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)224967910), 
BSTRING_TO_STRING(BGl_string3448z00zz__weakhashz00));} 

}

#ifdef __cplusplus
}
#endif
