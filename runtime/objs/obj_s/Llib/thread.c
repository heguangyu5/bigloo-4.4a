/*===========================================================================*/
/*   (Llib/thread.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/thread.scm -indent -o objs/obj_s/Llib/thread.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif

/* object type definitions */
typedef struct BgL_nothreadzd2backendzd2_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_namez00;
} *BgL_nothreadzd2backendzd2_bglt;

typedef struct BgL_threadzd2backendzd2_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_namez00;
} *BgL_threadzd2backendzd2_bglt;

typedef struct BgL_threadz00_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_namez00;
} *BgL_threadz00_bglt;

typedef struct BgL_nothreadz00_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_namez00;
   obj_t BgL_bodyz00;
   obj_t BgL_z52specificz52;
   obj_t BgL_z52cleanupz52;
   obj_t BgL_endzd2resultzd2;
   obj_t BgL_endzd2exceptionzd2;
} *BgL_nothreadz00_bglt;


BGL_EXPORTED_DECL obj_t BGl_tbzd2currentzd2threadz00zz__threadz00(BgL_threadzd2backendzd2_bglt);
static obj_t BGl_symbol2802z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2641z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2561z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2805z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2807z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2726z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2646z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2569z00zz__threadz00 = BUNSPEC;
static obj_t BGl_z52currentzd2threadz80zz__threadz00();
extern obj_t bgl_make_nil_condvar();
BGL_EXPORTED_DECL obj_t BGl_tbzd2condvarzd2initializa7ez12zb5zz__threadz00(BgL_threadzd2backendzd2_bglt, obj_t);
static obj_t BGl__makezd2mutexzd2zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62threadzd2joinz12za2zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2810z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2730z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2650z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2813z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2733z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2571z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2735z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2818z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2737z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2576z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2739z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_mutexzd2lockz12zc0zz__threadz00(obj_t, long);
static obj_t BGl_symbol2659z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2578z00zz__threadz00 = BUNSPEC;
extern obj_t BGl_raisez00zz__errorz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_threadzd2specificzd2zz__threadz00(BgL_threadz00_bglt);
BGL_EXPORTED_DECL obj_t BGl_withzd2lockzd2zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62threadzd2specificzb0zz__threadz00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2821z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2741z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2661z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2824z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2743z00zz__threadz00 = BUNSPEC;
static obj_t BGl_z62threadzd2startzd2joinabl1179z62zz__threadz00(obj_t, obj_t);
static obj_t BGl_symbol2582z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2745z00zz__threadz00 = BUNSPEC;
static obj_t BGl_z62z52userzd2threadzd2sleepz121202z22zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2829z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2748z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_threadzd2cleanupzd2setz12z12zz__threadz00(BgL_threadz00_bglt, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2mutexzd2zz__threadz00(obj_t);
extern obj_t BGl_za2classesza2z00zz__objectz00;
BGL_EXPORTED_DECL obj_t BGl_threadzd2sleepz12zc0zz__threadz00(obj_t);
static obj_t BGl_symbol2912z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2750z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2832z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2752z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2590z00zz__threadz00 = BUNSPEC;
static obj_t BGl_z62tbzd2mutexzd2initializa7ez12zd7zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2754z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2592z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2838z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2596z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2759z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2597z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_conditionzd2variablezd2broadcastz12z12zz__threadz00(obj_t);
static obj_t BGl_z62threadzd2parameterzb0zz__threadz00(obj_t, obj_t);
extern obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol2920z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2761z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2843z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2766z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2848z00zz__threadz00 = BUNSPEC;
static obj_t BGl_toplevelzd2initzd2zz__threadz00();
static obj_t BGl_z62threadzd2startz12zd2nothre1207z70zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_nothreadzd2backendzd2zz__threadz00 = BUNSPEC;
extern obj_t bgl_make_nil_mutex();
BGL_EXPORTED_DECL obj_t BGl_z52userzd2threadzd2yieldz12z40zz__threadz00(BgL_threadz00_bglt);
BGL_EXPORTED_DECL obj_t BGl_withzd2timedzd2lockz00zz__threadz00(obj_t, int, obj_t);
static obj_t BGl_z62threadzd2startzd2joinablez12z70zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62conditionzd2variablezd2namez62zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62withzd2timedzd2lockz62zz__threadz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_tbzd2mutexzd2initializa7ez12zb5zz__threadz00(BgL_threadzd2backendzd2_bglt, obj_t);
static obj_t BGl_symbol2850z00zz__threadz00 = BUNSPEC;
static BgL_nothreadzd2backendzd2_bglt BGl_za2nothreadzd2backendza2zd2zz__threadz00;
static obj_t BGl_symbol2772z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_currentzd2threadzd2backendz00zz__threadz00();
static obj_t BGl_symbol2855z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2939z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2778z00zz__threadz00 = BUNSPEC;
static obj_t BGl_z62threadzd2terminatez121184za2zz__threadz00(obj_t, obj_t);
static obj_t BGl_zc3z04exitza31529ze3ze70z60zz__threadz00(BgL_nothreadz00_bglt, obj_t);
extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62currentzd2dynamiczd2envz62zz__threadz00(obj_t);
static obj_t BGl_genericzd2initzd2zz__threadz00();
BGL_EXPORTED_DECL obj_t BGl_mutexzd2namezd2zz__threadz00(obj_t);
extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
static obj_t BGl_symbol2941z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2860z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2780z00zz__threadz00 = BUNSPEC;
static obj_t BGl_z62mutexzd2nilzb0zz__threadz00(obj_t);
static obj_t BGl_symbol2865z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2784z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2867z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2786z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2789z00zz__threadz00 = BUNSPEC;
static obj_t BGl__makezd2spinlockzd2zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62objectzd2writezd2thread1172z62zz__threadz00(obj_t, obj_t, obj_t);
extern obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62threadzd2terminatez12zd2no1213z70zz__threadz00(obj_t, obj_t);
extern obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t);
static obj_t BGl_objectzd2initzd2zz__threadz00();
BGL_EXPORTED_DECL obj_t BGl_currentzd2threadzd2backendzd2setz12zc0zz__threadz00(BgL_threadzd2backendzd2_bglt);
static obj_t BGl_symbol2872z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2874z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2793z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2795z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2879z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2798z00zz__threadz00 = BUNSPEC;
static obj_t BGl_z62defaultzd2threadzd2backendzd2setz12za2zz__threadz00(obj_t, obj_t);
extern obj_t BGl_z62exceptionz62zz__objectz00;
static obj_t BGl_z62threadzd2specificzd2setz12z70zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62mutexzd2namezb0zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31402ze3ze5zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62z52userzd2threadzd2sleepz12z22zz__threadz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_threadzd2specificzd2setz12z12zz__threadz00(BgL_threadz00_bglt, obj_t);
extern obj_t bstring_to_symbol(obj_t);
extern bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62threadzd2initializa7ez121175z05zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_dynamiczd2envzf3z21zz__threadz00(obj_t);
static obj_t BGl_z62threadzd2terminatez12za2zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62threadzd2startz12za2zz__threadz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_mutexzd2nilzd2zz__threadz00();
static obj_t BGl_z62getzd2threadzd2backendz62zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62mutexzd2unlockz12za2zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62threadzd2cleanupzb0zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62tbzd2condvarzd2initializa7ez12zd7zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62tbzd2makezd2thread1157z62zz__threadz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zz__threadz00();
static obj_t BGl_z62threadzd2initializa7ez12z05zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62threadzd2yieldz12za2zz__threadz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2spinlockzd2zz__threadz00(obj_t);
extern obj_t BGl_objectzd2writezd2zz__objectz00(BgL_objectz00_bglt, obj_t);
static obj_t BGl_z62zc3z04anonymousza31510ze3ze5zz__threadz00(obj_t);
BGL_EXPORTED_DEF obj_t BGl_nothreadz00zz__threadz00 = BUNSPEC;
static obj_t BGl_z62tbzd2currentzd2threadz62zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_threadzd2parameterzd2setz12z12zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_mutexzf3zf3zz__threadz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31430ze3ze5zz__threadz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31422ze3ze5zz__threadz00(obj_t);
static obj_t BGl_z62objectzd2displayzd2threa1170z62zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62threadzd2specific1186zb0zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62threadzd2specificzd2noth1215z62zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_currentzd2dynamiczd2envz00zz__threadz00();
static obj_t BGl_z62zc3z04anonymousza31415ze3ze5zz__threadz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31326ze3ze5zz__threadz00(obj_t);
static obj_t BGl_z62z52userzd2threadzd2yieldz121204z22zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_conditionzd2variablezd2waitz12z12zz__threadz00(obj_t, obj_t, long);
static obj_t BGl_za2conditionzd2variablezd2nilza2z00zz__threadz00 = BUNSPEC;
static obj_t BGl_z62z52userzd2currentzd2thread1200z30zz__threadz00(obj_t, obj_t);
static obj_t BGl__makezd2conditionzd2variablez00zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62currentzd2threadzb0zz__threadz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31343ze3ze5zz__threadz00(obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62currentzd2threadzd2backendzd2setz12za2zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62currentzd2threadzd2backendz62zz__threadz00(obj_t);
BGL_EXPORTED_DEF obj_t BGl_threadzd2backendzd2zz__threadz00 = BUNSPEC;
static obj_t BGl_z62tbzd2currentzd2threadzd2no1164zb0zz__threadz00(obj_t, obj_t);
extern obj_t BGl_callzd2virtualzd2setterz00zz__objectz00(BgL_objectz00_bglt, int, obj_t);
BGL_EXPORTED_DECL obj_t BGl_threadzd2cleanupzd2zz__threadz00(BgL_threadz00_bglt);
static obj_t BGl_z62threadzd2parameterzd2setz12z70zz__threadz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_z52userzd2threadzd2sleepz12z40zz__threadz00(BgL_threadz00_bglt, obj_t);
static obj_t BGl_z62z52userzd2currentzd2threadz30zz__threadz00(obj_t, obj_t);
extern obj_t BGl_classzd2constructorzd2zz__objectz00(obj_t);
extern obj_t bgl_remq_bang(obj_t, obj_t);
extern obj_t BGl_exitz00zz__errorz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31532ze3ze5zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31370ze3ze5zz__threadz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_conditionzd2variablezd2nilz00zz__threadz00();
static obj_t BGl_za2threadzd2backendsza2zd2zz__threadz00 = BUNSPEC;
extern void bgl_sleep(long);
static obj_t BGl_z62threadzd2cleanupzd2nothr1219z62zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_threadzd2joinz12zc0zz__threadz00(BgL_threadz00_bglt, obj_t);
BGL_EXPORTED_DECL obj_t BGl_z52userzd2currentzd2threadz52zz__threadz00(BgL_threadz00_bglt);
static obj_t BGl_list2800z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list2801z00zz__threadz00 = BUNSPEC;
extern obj_t BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_list2804z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_defaultzd2threadzd2backendz00zz__threadz00();
static obj_t BGl_list2809z00zz__threadz00 = BUNSPEC;
static BgL_nothreadz00_bglt BGl_z62lambda1400z62zz__threadz00(obj_t);
static obj_t BGl_list2568z00zz__threadz00 = BUNSPEC;
extern bool_t BGl_classzf3zf3zz__objectz00(obj_t);
extern obj_t BGl_callzd2virtualzd2getterz00zz__objectz00(BgL_objectz00_bglt, int);
extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
static obj_t BGl_z62lambda1407z62zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62lambda1408z62zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31380ze3ze5zz__threadz00(obj_t, obj_t);
extern obj_t bgl_nanoseconds_to_date(BGL_LONGLONG_T);
static obj_t BGl_z62zc3z04anonymousza31534ze3ze5zz__threadz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31364ze3ze5zz__threadz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31356ze3ze5zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31437ze3ze5zz__threadz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_mutexzd2statezd2zz__threadz00(obj_t);
static obj_t BGl_list2812z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list2817z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_currentzd2threadzd2zz__threadz00();
static obj_t BGl_z62tbzd2currentzd2thread1159z62zz__threadz00(obj_t, obj_t);
static obj_t BGl_list2658z00zz__threadz00 = BUNSPEC;
static obj_t BGl_z62lambda1413z62zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62lambda1414z62zz__threadz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_conditionzd2variablezd2namez00zz__threadz00(obj_t);
static BgL_threadzd2backendzd2_bglt BGl_z62lambda1339z62zz__threadz00(obj_t, obj_t);
static obj_t BGl_list2823z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list2826z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list2827z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list2828z00zz__threadz00 = BUNSPEC;
static obj_t BGl_z62lambda1420z62zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62lambda1421z62zz__threadz00(obj_t, obj_t, obj_t);
static BgL_threadzd2backendzd2_bglt BGl_z62lambda1341z62zz__threadz00(obj_t);
static obj_t BGl_z62lambda1347z62zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62lambda1428z62zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_threadzd2startz12zc0zz__threadz00(BgL_threadz00_bglt, obj_t);
static obj_t BGl_cnstzd2initzd2zz__threadz00();
static obj_t BGl_z62lambda1348z62zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31390ze3ze5zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62lambda1429z62zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31382ze3ze5zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31536ze3ze5zz__threadz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31374ze3ze5zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31447ze3ze5zz__threadz00(obj_t, obj_t);
extern long bgl_list_length(obj_t);
static obj_t BGl_z62threadzd2specificzd2setz121217z70zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_list2911z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list2831z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list2834z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list2837z00zz__threadz00 = BUNSPEC;
extern obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list2919z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list2758z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_mutexzd2unlockz12zc0zz__threadz00(obj_t);
static BgL_threadz00_bglt BGl_z62tbzd2makezd2threadz62zz__threadz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__threadz00();
static BgL_threadz00_bglt BGl_z62lambda1354z62zz__threadz00(obj_t);
static obj_t BGl_z62lambda1435z62zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62mutexzf3z91zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62lambda1436z62zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__threadz00();
static obj_t BGl_z62zc3z04anonymousza31375ze3ze5zz__threadz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_threadzd2yieldz12zc0zz__threadz00();
static obj_t BGl__makezd2threadzd2zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62threadzd2cleanupzd2setz121193z70zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62conditionzd2variablezf3z43zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62threadzd2sleepz12za2zz__threadz00(obj_t, obj_t);
static obj_t BGl_list2842z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list2765z00zz__threadz00 = BUNSPEC;
static obj_t BGl_z62threadzd2joinz12zd2nothrea1211z70zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_list2847z00zz__threadz00 = BUNSPEC;
extern obj_t BGl_objectz00zz__objectz00;
static obj_t BGl_z62lambda1362z62zz__threadz00(obj_t, obj_t);
static BgL_nothreadzd2backendzd2_bglt BGl_z62lambda1443z62zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62lambda1363z62zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62conditionzd2variablezd2broadcastz12z70zz__threadz00(obj_t, obj_t);
static BgL_nothreadzd2backendzd2_bglt BGl_z62lambda1445z62zz__threadz00(obj_t);
extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_getzd2threadzd2backendz00zz__threadz00(obj_t);
static obj_t BGl_z62dynamiczd2envzf3z43zz__threadz00(obj_t, obj_t);
static obj_t BGl_list2771z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list2854z00zz__threadz00 = BUNSPEC;
static obj_t BGl_z62threadzd2joinz121181za2zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_list2938z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list2777z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list2859z00zz__threadz00 = BUNSPEC;
static obj_t BGl_z62threadzd2startz121177za2zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62tbzd2mutexzd2initializa7ez121165zd7zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31369ze3ze5zz__threadz00(obj_t, obj_t);
extern obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_threadzd2initializa7ez12z67zz__threadz00(BgL_threadz00_bglt);
extern obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
static obj_t BGl_list2864z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list2783z00zz__threadz00 = BUNSPEC;
static obj_t BGl_z62threadzd2cleanupzd2setz12zd21221za2zz__threadz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL BgL_threadz00_bglt BGl_makezd2threadzd2zz__threadz00(obj_t, obj_t);
extern BGL_LONGLONG_T bgl_current_nanoseconds();
static obj_t BGl_list2871z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list2792z00zz__threadz00 = BUNSPEC;
extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_threadzd2startzd2joinablez12z12zz__threadz00(BgL_threadz00_bglt);
static obj_t BGl_list2878z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list2797z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_conditionzd2variablezd2signalz12z12zz__threadz00(obj_t);
static obj_t BGl_z62objectzd2printzd2thread1174z62zz__threadz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62threadzd2cleanupzd2setz12z70zz__threadz00(obj_t, obj_t, obj_t);
static BgL_nothreadz00_bglt BGl_z62lambda1397z62zz__threadz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static BgL_threadz00_bglt BGl_z62tbzd2makezd2threadzd2nothr1162zb0zz__threadz00(obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
extern obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62threadzd2specificzd2setz121189z70zz__threadz00(obj_t, obj_t, obj_t);
extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31493ze3ze5zz__threadz00(obj_t);
static obj_t BGl_z62conditionzd2variablezd2nilz62zz__threadz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31388ze3ze5zz__threadz00(obj_t, obj_t);
static obj_t BGl_symbol2602z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2606z00zz__threadz00 = BUNSPEC;
static obj_t BGl_z62mutexzd2statezb0zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DECL BgL_threadz00_bglt BGl_tbzd2makezd2threadz00zz__threadz00(BgL_threadzd2backendzd2_bglt, obj_t, obj_t);
extern long bgl_date_to_seconds(obj_t);
static obj_t BGl_z62conditionzd2variablezd2signalz12z70zz__threadz00(obj_t, obj_t);
static obj_t BGl_z62z52userzd2threadzd2yieldz12z22zz__threadz00(obj_t, obj_t);
static obj_t BGl_symbol2610z00zz__threadz00 = BUNSPEC;
static obj_t BGl_z62threadzd2startzd2joinabl1209z62zz__threadz00(obj_t, obj_t);
static obj_t BGl_za2nothreadzd2currentza2zd2zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2536z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2539z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_threadzd2parameterzd2zz__threadz00(obj_t);
static obj_t BGl_z62tbzd2condvarzd2initializa71167zc5zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62defaultzd2threadzd2backendz62zz__threadz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2conditionzd2variablez00zz__threadz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_threadzd2terminatez12zc0zz__threadz00(BgL_threadz00_bglt);
static obj_t BGl_z62withzd2lockzb0zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_za2mutexzd2nilza2zd2zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2620z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2622z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2626z00zz__threadz00 = BUNSPEC;
static obj_t BGl__conditionzd2variablezd2waitz12z12zz__threadz00(obj_t, obj_t);
static obj_t BGl__mutexzd2lockz12zc0zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_threadz00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2631z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_conditionzd2variablezf3z21zz__threadz00(obj_t);
static obj_t BGl_symbol2551z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2554z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2636z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol2556z00zz__threadz00 = BUNSPEC;
static obj_t BGl_z62threadzd2cleanup1191zb0zz__threadz00(obj_t, obj_t);
static obj_t BGl_symbol2558z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_defaultzd2threadzd2backendzd2setz12zc0zz__threadz00(BgL_threadzd2backendzd2_bglt);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_GENERIC( BGl_tbzd2condvarzd2initializa7ez12zd2envz67zz__threadz00, BgL_bgl_za762tbza7d2condvarza72947za7, BGl_z62tbzd2condvarzd2initializa7ez12zd7zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_conditionzd2variablezd2waitz12zd2envzc0zz__threadz00, BgL_bgl__conditionza7d2var2948za7, opt_generic_entry, BGl__conditionzd2variablezd2waitz12z12zz__threadz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_conditionzd2variablezf3zd2envzf3zz__threadz00, BgL_bgl_za762conditionza7d2v2949z00, BGl_z62conditionzd2variablezf3z43zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2threadzd2backendzd2setz12zd2envz12zz__threadz00, BgL_bgl_za762currentza7d2thr2950z00, BGl_z62currentzd2threadzd2backendzd2setz12za2zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_defaultzd2threadzd2backendzd2setz12zd2envz12zz__threadz00, BgL_bgl_za762defaultza7d2thr2951z00, BGl_z62defaultzd2threadzd2backendzd2setz12za2zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2spinlockzd2envz00zz__threadz00, BgL_bgl__makeza7d2spinlock2952za7, opt_generic_entry, BGl__makezd2spinlockzd2zz__threadz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_GENERIC( BGl_threadzd2cleanupzd2envz00zz__threadz00, BgL_bgl_za762threadza7d2clea2953z00, BGl_z62threadzd2cleanupzb0zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_GENERIC( BGl_threadzd2startz12zd2envz12zz__threadz00, BgL_bgl_za762threadza7d2star2954z00, va_generic_entry, BGl_z62threadzd2startz12za2zz__threadz00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2threadzd2envz00zz__threadz00, BgL_bgl__makeza7d2threadza7d2955z00, opt_generic_entry, BGl__makezd2threadzd2zz__threadz00, BFALSE, -1 );
extern obj_t BGl_objectzd2writezd2envz00zz__objectz00;
DEFINE_STRING( BGl_string2603z00zz__threadz00, BgL_bgl_string2603za700za7za7_2956za7, "obj", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mutexzd2lockz12zd2envz12zz__threadz00, BgL_bgl__mutexza7d2lockza7122957z00, opt_generic_entry, BGl__mutexzd2lockz12zc0zz__threadz00, BFALSE, -1 );
DEFINE_STRING( BGl_string2607z00zz__threadz00, BgL_bgl_string2607za700za7za7_2958za7, "specific", 8 );
DEFINE_STRING( BGl_string2526z00zz__threadz00, BgL_bgl_string2526za700za7za7_2959za7, "nothread", 8 );
DEFINE_STRING( BGl_string2527z00zz__threadz00, BgL_bgl_string2527za700za7za7_2960za7, "/tmp/4.4a/runtime/Llib/thread.scm", 33 );
DEFINE_STRING( BGl_string2528z00zz__threadz00, BgL_bgl_string2528za700za7za7_2961za7, "&current-thread-backend-set!", 28 );
DEFINE_STRING( BGl_string2529z00zz__threadz00, BgL_bgl_string2529za700za7za7_2962za7, "thread-backend", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2lockzd2envz00zz__threadz00, BgL_bgl_za762withza7d2lockza7b2963za7, BGl_z62withzd2lockzb0zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2600z00zz__threadz00, BgL_bgl_za762lambda1363za7622964z00, BGl_z62lambda1363z62zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2601z00zz__threadz00, BgL_bgl_za762lambda1362za7622965z00, BGl_z62lambda1362z62zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mutexzd2namezd2envz00zz__threadz00, BgL_bgl_za762mutexza7d2nameza72966za7, BGl_z62mutexzd2namezb0zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2604z00zz__threadz00, BgL_bgl_za762za7c3za704anonymo2967za7, BGl_z62zc3z04anonymousza31370ze3ze5zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2605z00zz__threadz00, BgL_bgl_za762za7c3za704anonymo2968za7, BGl_z62zc3z04anonymousza31369ze3ze5zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2611z00zz__threadz00, BgL_bgl_string2611za700za7za7_2969za7, "cleanup", 7 );
DEFINE_STRING( BGl_string2530z00zz__threadz00, BgL_bgl_string2530za700za7za7_2970za7, "default-thread-backend", 22 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2608z00zz__threadz00, BgL_bgl_za762za7c3za704anonymo2971za7, BGl_z62zc3z04anonymousza31375ze3ze5zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2531z00zz__threadz00, BgL_bgl_string2531za700za7za7_2972za7, "pair", 4 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2609z00zz__threadz00, BgL_bgl_za762za7c3za704anonymo2973za7, BGl_z62zc3z04anonymousza31374ze3ze5zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2532z00zz__threadz00, BgL_bgl_string2532za700za7za7_2974za7, "&default-thread-backend-set!", 28 );
DEFINE_STRING( BGl_string2533z00zz__threadz00, BgL_bgl_string2533za700za7za7_2975za7, "loop", 4 );
DEFINE_STRING( BGl_string2534z00zz__threadz00, BgL_bgl_string2534za700za7za7_2976za7, "&get-thread-backend", 19 );
DEFINE_STRING( BGl_string2535z00zz__threadz00, BgL_bgl_string2535za700za7za7_2977za7, "bstring", 7 );
extern obj_t BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00;
DEFINE_STRING( BGl_string2537z00zz__threadz00, BgL_bgl_string2537za700za7za7_2978za7, "make-thread", 11 );
DEFINE_STRING( BGl_string2538z00zz__threadz00, BgL_bgl_string2538za700za7za7_2979za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mutexzd2unlockz12zd2envz12zz__threadz00, BgL_bgl_za762mutexza7d2unloc2980z00, BGl_z62mutexzd2unlockz12za2zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_GENERIC( BGl_threadzd2joinz12zd2envz12zz__threadz00, BgL_bgl_za762threadza7d2join2981z00, va_generic_entry, BGl_z62threadzd2joinz12za2zz__threadz00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_threadzd2yieldz12zd2envz12zz__threadz00, BgL_bgl_za762threadza7d2yiel2982z00, BGl_z62threadzd2yieldz12za2zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2612z00zz__threadz00, BgL_bgl_za762za7c3za704anonymo2983za7, BGl_z62zc3z04anonymousza31380ze3ze5zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2613z00zz__threadz00, BgL_bgl_za762za7c3za704anonymo2984za7, BGl_z62zc3z04anonymousza31382ze3ze5zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2614z00zz__threadz00, BgL_bgl_za762za7c3za704anonymo2985za7, BGl_z62zc3z04anonymousza31388ze3ze5zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2615z00zz__threadz00, BgL_bgl_za762za7c3za704anonymo2986za7, BGl_z62zc3z04anonymousza31390ze3ze5zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2701z00zz__threadz00, BgL_bgl_string2701za700za7za7_2987za7, "thread-start!1177", 17 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2616z00zz__threadz00, BgL_bgl_za762za7c3za704anonymo2988za7, BGl_z62zc3z04anonymousza31356ze3ze5zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2621z00zz__threadz00, BgL_bgl_string2621za700za7za7_2989za7, "body", 4 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2617z00zz__threadz00, BgL_bgl_za762lambda1354za7622990z00, BGl_z62lambda1354z62zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2540z00zz__threadz00, BgL_bgl_string2540za700za7za7_2991za7, "thread", 6 );
DEFINE_STRING( BGl_string2703z00zz__threadz00, BgL_bgl_string2703za700za7za7_2992za7, "thread-start-joinabl1179", 24 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2618z00zz__threadz00, BgL_bgl_za762lambda1408za7622993z00, BGl_z62lambda1408z62zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2541z00zz__threadz00, BgL_bgl_string2541za700za7za7_2994za7, "_make-thread", 12 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2619z00zz__threadz00, BgL_bgl_za762lambda1407za7622995z00, BGl_z62lambda1407z62zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2542z00zz__threadz00, BgL_bgl_string2542za700za7za7_2996za7, "procedure", 9 );
DEFINE_STRING( BGl_string2705z00zz__threadz00, BgL_bgl_string2705za700za7za7_2997za7, "thread-join!1181", 16 );
DEFINE_STRING( BGl_string2543z00zz__threadz00, BgL_bgl_string2543za700za7za7_2998za7, "thread-sleep!", 13 );
DEFINE_STRING( BGl_string2544z00zz__threadz00, BgL_bgl_string2544za700za7za7_2999za7, "thread-yield!", 13 );
DEFINE_STRING( BGl_string2707z00zz__threadz00, BgL_bgl_string2707za700za7za7_3000za7, "thread-terminate!1184", 21 );
DEFINE_STRING( BGl_string2545z00zz__threadz00, BgL_bgl_string2545za700za7za7_3001za7, "thread-parameter", 16 );
DEFINE_STRING( BGl_string2627z00zz__threadz00, BgL_bgl_string2627za700za7za7_3002za7, "%specific", 9 );
DEFINE_STRING( BGl_string2546z00zz__threadz00, BgL_bgl_string2546za700za7za7_3003za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string2709z00zz__threadz00, BgL_bgl_string2709za700za7za7_3004za7, "thread-specific1186", 19 );
DEFINE_STRING( BGl_string2547z00zz__threadz00, BgL_bgl_string2547za700za7za7_3005za7, "&thread-parameter", 17 );
DEFINE_STRING( BGl_string2548z00zz__threadz00, BgL_bgl_string2548za700za7za7_3006za7, "symbol", 6 );
DEFINE_STRING( BGl_string2549z00zz__threadz00, BgL_bgl_string2549za700za7za7_3007za7, "thread-parameter-set!", 21 );
DEFINE_EXPORT_BGL_GENERIC( BGl_tbzd2currentzd2threadzd2envzd2zz__threadz00, BgL_bgl_za762tbza7d2currentza73008za7, BGl_z62tbzd2currentzd2threadz62zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_REAL( BGl_real2724z00zz__threadz00, BgL_bgl_real2724za700za7za7__t3009za7, 1000000.0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2700z00zz__threadz00, BgL_bgl_za762threadza7d2star3010z00, va_generic_entry, BGl_z62threadzd2startz121177za2zz__threadz00, BUNSPEC, -2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2702z00zz__threadz00, BgL_bgl_za762threadza7d2star3011z00, BGl_z62threadzd2startzd2joinabl1179z62zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2704z00zz__threadz00, BgL_bgl_za762threadza7d2join3012z00, va_generic_entry, BGl_z62threadzd2joinz121181za2zz__threadz00, BUNSPEC, -2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2623z00zz__threadz00, BgL_bgl_za762za7c3za704anonymo3013za7, BGl_z62zc3z04anonymousza31415ze3ze5zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2624z00zz__threadz00, BgL_bgl_za762lambda1414za7623014z00, BGl_z62lambda1414z62zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2706z00zz__threadz00, BgL_bgl_za762threadza7d2term3015z00, BGl_z62threadzd2terminatez121184za2zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2625z00zz__threadz00, BgL_bgl_za762lambda1413za7623016z00, BGl_z62lambda1413z62zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2711z00zz__threadz00, BgL_bgl_string2711za700za7za7_3017za7, "thread-specific-set!1189", 24 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2708z00zz__threadz00, BgL_bgl_za762threadza7d2spec3018z00, BGl_z62threadzd2specific1186zb0zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2550z00zz__threadz00, BgL_bgl_string2550za700za7za7_3019za7, "&thread-parameter-set!", 22 );
DEFINE_STRING( BGl_string2713z00zz__threadz00, BgL_bgl_string2713za700za7za7_3020za7, "thread-cleanup1191", 18 );
DEFINE_STRING( BGl_string2632z00zz__threadz00, BgL_bgl_string2632za700za7za7_3021za7, "%cleanup", 8 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2628z00zz__threadz00, BgL_bgl_za762za7c3za704anonymo3022za7, BGl_z62zc3z04anonymousza31422ze3ze5zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2629z00zz__threadz00, BgL_bgl_za762lambda1421za7623023z00, BGl_z62lambda1421z62zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2552z00zz__threadz00, BgL_bgl_string2552za700za7za7_3024za7, "make-mutex", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_threadzd2parameterzd2setz12zd2envzc0zz__threadz00, BgL_bgl_za762threadza7d2para3025z00, BGl_z62threadzd2parameterzd2setz12z70zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2715z00zz__threadz00, BgL_bgl_string2715za700za7za7_3026za7, "thread-cleanup-set!1193", 23 );
DEFINE_STRING( BGl_string2553z00zz__threadz00, BgL_bgl_string2553za700za7za7_3027za7, "wrong number of arguments: [0..1] expected, provided", 52 );
DEFINE_STRING( BGl_string2717z00zz__threadz00, BgL_bgl_string2717za700za7za7_3028za7, "%user-current-thread1200", 24 );
DEFINE_STRING( BGl_string2555z00zz__threadz00, BgL_bgl_string2555za700za7za7_3029za7, "mutex", 5 );
DEFINE_STRING( BGl_string2637z00zz__threadz00, BgL_bgl_string2637za700za7za7_3030za7, "end-result", 10 );
DEFINE_STRING( BGl_string2719z00zz__threadz00, BgL_bgl_string2719za700za7za7_3031za7, "%user-thread-sleep!1202", 23 );
DEFINE_STRING( BGl_string2557z00zz__threadz00, BgL_bgl_string2557za700za7za7_3032za7, "make-spinlock", 13 );
DEFINE_STRING( BGl_string2559z00zz__threadz00, BgL_bgl_string2559za700za7za7_3033za7, "spinlock", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2timedzd2lockzd2envzd2zz__threadz00, BgL_bgl_za762withza7d2timedza73034za7, BGl_z62withzd2timedzd2lockz62zz__threadz00, 0L, BUNSPEC, 3 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2710z00zz__threadz00, BgL_bgl_za762threadza7d2spec3035z00, BGl_z62threadzd2specificzd2setz121189z70zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2630z00zz__threadz00, BgL_bgl_za762lambda1420za7623036z00, BGl_z62lambda1420z62zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2712z00zz__threadz00, BgL_bgl_za762threadza7d2clea3037z00, BGl_z62threadzd2cleanup1191zb0zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2714z00zz__threadz00, BgL_bgl_za762threadza7d2clea3038z00, BGl_z62threadzd2cleanupzd2setz121193z70zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2633z00zz__threadz00, BgL_bgl_za762za7c3za704anonymo3039za7, BGl_z62zc3z04anonymousza31430ze3ze5zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2634z00zz__threadz00, BgL_bgl_za762lambda1429za7623040z00, BGl_z62lambda1429z62zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2716z00zz__threadz00, BgL_bgl_za762za752userza7d2cur3041za7, BGl_z62z52userzd2currentzd2thread1200z30zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2635z00zz__threadz00, BgL_bgl_za762lambda1428za7623042z00, BGl_z62lambda1428z62zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2721z00zz__threadz00, BgL_bgl_string2721za700za7za7_3043za7, "%user-thread-yield!1204", 23 );
DEFINE_STRING( BGl_string2803z00zz__threadz00, BgL_bgl_string2803za700za7za7_3044za7, "list1484", 8 );
DEFINE_STRING( BGl_string2722z00zz__threadz00, BgL_bgl_string2722za700za7za7_3045za7, "&%user-thread-yield!1204", 24 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2718z00zz__threadz00, BgL_bgl_za762za752userza7d2thr3046za7, BGl_z62z52userzd2threadzd2sleepz121202z22zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2560z00zz__threadz00, BgL_bgl_string2560za700za7za7_3047za7, "&mutex-name", 11 );
DEFINE_STRING( BGl_string2723z00zz__threadz00, BgL_bgl_string2723za700za7za7_3048za7, "belong", 6 );
DEFINE_STRING( BGl_string2642z00zz__threadz00, BgL_bgl_string2642za700za7za7_3049za7, "end-exception", 13 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2638z00zz__threadz00, BgL_bgl_za762za7c3za704anonymo3050za7, BGl_z62zc3z04anonymousza31437ze3ze5zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2639z00zz__threadz00, BgL_bgl_za762lambda1436za7623051z00, BGl_z62lambda1436z62zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2562z00zz__threadz00, BgL_bgl_string2562za700za7za7_3052za7, "mutex-lock!", 11 );
DEFINE_STRING( BGl_string2806z00zz__threadz00, BgL_bgl_string2806za700za7za7_3053za7, "$cons", 5 );
DEFINE_STRING( BGl_string2725z00zz__threadz00, BgL_bgl_string2725za700za7za7_3054za7, "real", 4 );
DEFINE_STRING( BGl_string2563z00zz__threadz00, BgL_bgl_string2563za700za7za7_3055za7, "_mutex-lock!", 12 );
DEFINE_STRING( BGl_string2564z00zz__threadz00, BgL_bgl_string2564za700za7za7_3056za7, "bint", 4 );
DEFINE_STRING( BGl_string2808z00zz__threadz00, BgL_bgl_string2808za700za7za7_3057za7, "sc", 2 );
DEFINE_STRING( BGl_string2727z00zz__threadz00, BgL_bgl_string2727za700za7za7_3058za7, "date, real, or integer", 22 );
DEFINE_STRING( BGl_string2565z00zz__threadz00, BgL_bgl_string2565za700za7za7_3059za7, "&mutex-unlock!", 14 );
DEFINE_STRING( BGl_string2728z00zz__threadz00, BgL_bgl_string2728za700za7za7_3060za7, "&%user-thread-sleep!1202", 24 );
DEFINE_STRING( BGl_string2566z00zz__threadz00, BgL_bgl_string2566za700za7za7_3061za7, "&mutex-state", 12 );
DEFINE_EXPORT_BGL_GENERIC( BGl_threadzd2specificzd2envz00zz__threadz00, BgL_bgl_za762threadza7d2spec3062z00, BGl_z62threadzd2specificzb0zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2729z00zz__threadz00, BgL_bgl_string2729za700za7za7_3063za7, "&%user-current-thread1200", 25 );
DEFINE_STRING( BGl_string2567z00zz__threadz00, BgL_bgl_string2567za700za7za7_3064za7, "with-lock:Wrong number of arguments", 35 );
extern obj_t BGl_objectzd2printzd2envz00zz__objectz00;
extern obj_t BGl_objectzd2displayzd2envz00zz__objectz00;
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2720z00zz__threadz00, BgL_bgl_za762za752userza7d2thr3065za7, BGl_z62z52userzd2threadzd2yieldz121204z22zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2640z00zz__threadz00, BgL_bgl_za762lambda1435za7623066z00, BGl_z62lambda1435z62zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2643z00zz__threadz00, BgL_bgl_za762za7c3za704anonymo3067za7, BGl_z62zc3z04anonymousza31402ze3ze5zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2644z00zz__threadz00, BgL_bgl_za762lambda1400za7623068z00, BGl_z62lambda1400z62zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2811z00zz__threadz00, BgL_bgl_string2811za700za7za7_3069za7, "quote", 5 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2645z00zz__threadz00, BgL_bgl_za762lambda1397za7623070z00, BGl_z62lambda1397z62zz__threadz00, 0L, BUNSPEC, 6 );
DEFINE_STRING( BGl_string2731z00zz__threadz00, BgL_bgl_string2731za700za7za7_3071za7, "No method for this object", 25 );
DEFINE_STRING( BGl_string2732z00zz__threadz00, BgL_bgl_string2732za700za7za7_3072za7, "&thread-cleanup-set!1193", 24 );
DEFINE_STRING( BGl_string2651z00zz__threadz00, BgL_bgl_string2651za700za7za7_3073za7, "nothread-backend", 16 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2647z00zz__threadz00, BgL_bgl_za762za7c3za704anonymo3074za7, BGl_z62zc3z04anonymousza31447ze3ze5zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2570z00zz__threadz00, BgL_bgl_string2570za700za7za7_3075za7, "funcall", 7 );
DEFINE_STRING( BGl_string2814z00zz__threadz00, BgL_bgl_string2814za700za7za7_3076za7, "cons*", 5 );
DEFINE_STRING( BGl_string2652z00zz__threadz00, BgL_bgl_string2652za700za7za7_3077za7, "", 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2648z00zz__threadz00, BgL_bgl_za762lambda1445za7623078z00, BGl_z62lambda1445z62zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2815z00zz__threadz00, BgL_bgl_string2815za700za7za7_3079za7, "&thread-start!", 14 );
DEFINE_STRING( BGl_string2734z00zz__threadz00, BgL_bgl_string2734za700za7za7_3080za7, "&thread-cleanup1191", 19 );
DEFINE_STRING( BGl_string2653z00zz__threadz00, BgL_bgl_string2653za700za7za7_3081za7, "&<@anonymous:1447>", 18 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2649z00zz__threadz00, BgL_bgl_za762lambda1443za7623082z00, BGl_z62lambda1443z62zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2572z00zz__threadz00, BgL_bgl_string2572za700za7za7_3083za7, "thunk", 5 );
DEFINE_STRING( BGl_string2816z00zz__threadz00, BgL_bgl_string2816za700za7za7_3084za7, "thread-start-joinable!:Wrong number of arguments", 48 );
DEFINE_STRING( BGl_string2654z00zz__threadz00, BgL_bgl_string2654za700za7za7_3085za7, "&lambda1443", 11 );
DEFINE_STRING( BGl_string2573z00zz__threadz00, BgL_bgl_string2573za700za7za7_3086za7, "&with-lock", 10 );
DEFINE_STRING( BGl_string2736z00zz__threadz00, BgL_bgl_string2736za700za7za7_3087za7, "&thread-specific-set!1189", 25 );
DEFINE_STRING( BGl_string2655z00zz__threadz00, BgL_bgl_string2655za700za7za7_3088za7, "&<@anonymous:1402>", 18 );
DEFINE_STRING( BGl_string2574z00zz__threadz00, BgL_bgl_string2574za700za7za7_3089za7, "with-timed-lock:Wrong number of arguments", 41 );
DEFINE_STRING( BGl_string2656z00zz__threadz00, BgL_bgl_string2656za700za7za7_3090za7, "lambda1397", 10 );
DEFINE_STRING( BGl_string2575z00zz__threadz00, BgL_bgl_string2575za700za7za7_3091za7, "&with-timed-lock", 16 );
DEFINE_STRING( BGl_string2819z00zz__threadz00, BgL_bgl_string2819za700za7za7_3092za7, "method1180", 10 );
DEFINE_STRING( BGl_string2738z00zz__threadz00, BgL_bgl_string2738za700za7za7_3093za7, "&thread-specific1186", 20 );
DEFINE_STRING( BGl_string2657z00zz__threadz00, BgL_bgl_string2657za700za7za7_3094za7, "lambda1397:Wrong number of arguments", 36 );
DEFINE_EXPORT_BGL_GENERIC( BGl_threadzd2startzd2joinablez12zd2envzc0zz__threadz00, BgL_bgl_za762threadza7d2star3095z00, BGl_z62threadzd2startzd2joinablez12z70zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2577z00zz__threadz00, BgL_bgl_string2577za700za7za7_3096za7, "make-condition-variable", 23 );
DEFINE_STRING( BGl_string2579z00zz__threadz00, BgL_bgl_string2579za700za7za7_3097za7, "condition-variable", 18 );
DEFINE_STRING( BGl_string2900z00zz__threadz00, BgL_bgl_string2900za700za7za7_3098za7, "thread-specific-set!", 20 );
DEFINE_STRING( BGl_string2820z00zz__threadz00, BgL_bgl_string2820za700za7za7_3099za7, "&thread-start-joinable!", 23 );
DEFINE_STRING( BGl_string2902z00zz__threadz00, BgL_bgl_string2902za700za7za7_3100za7, "thread-cleanup", 14 );
DEFINE_STRING( BGl_string2740z00zz__threadz00, BgL_bgl_string2740za700za7za7_3101za7, "&thread-terminate!1184", 22 );
DEFINE_STRING( BGl_string2822z00zz__threadz00, BgL_bgl_string2822za700za7za7_3102za7, "thread-join!", 12 );
DEFINE_STRING( BGl_string2660z00zz__threadz00, BgL_bgl_string2660za700za7za7_3103za7, "fun1398", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_defaultzd2threadzd2backendzd2envzd2zz__threadz00, BgL_bgl_za762defaultza7d2thr3104z00, BGl_z62defaultzd2threadzd2backendz62zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2904z00zz__threadz00, BgL_bgl_string2904za700za7za7_3105za7, "thread-cleanup-set!", 19 );
DEFINE_STRING( BGl_string2742z00zz__threadz00, BgL_bgl_string2742za700za7za7_3106za7, "&thread-join!1181", 17 );
DEFINE_STRING( BGl_string2580z00zz__threadz00, BgL_bgl_string2580za700za7za7_3107za7, "&condition-variable-name", 24 );
DEFINE_STRING( BGl_string2905z00zz__threadz00, BgL_bgl_string2905za700za7za7_3108za7, "&thread-cleanup-set!-1221", 25 );
DEFINE_STRING( BGl_string2662z00zz__threadz00, BgL_bgl_string2662za700za7za7_3109za7, "new1104", 7 );
DEFINE_STRING( BGl_string2581z00zz__threadz00, BgL_bgl_string2581za700za7za7_3110za7, "condvar", 7 );
DEFINE_STRING( BGl_string2906z00zz__threadz00, BgL_bgl_string2906za700za7za7_3111za7, "&thread-cleanup-nothr1219", 25 );
DEFINE_STRING( BGl_string2825z00zz__threadz00, BgL_bgl_string2825za700za7za7_3112za7, "method1183", 10 );
DEFINE_STRING( BGl_string2744z00zz__threadz00, BgL_bgl_string2744za700za7za7_3113za7, "&thread-start-joinabl1179", 25 );
DEFINE_STRING( BGl_string2663z00zz__threadz00, BgL_bgl_string2663za700za7za7_3114za7, "&lambda1397", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_conditionzd2variablezd2broadcastz12zd2envzc0zz__threadz00, BgL_bgl_za762conditionza7d2v3115z00, BGl_z62conditionzd2variablezd2broadcastz12z70zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2907z00zz__threadz00, BgL_bgl_string2907za700za7za7_3116za7, "&thread-specific-set!1217", 25 );
DEFINE_STRING( BGl_string2664z00zz__threadz00, BgL_bgl_string2664za700za7za7_3117za7, "&lambda1436", 11 );
DEFINE_STRING( BGl_string2583z00zz__threadz00, BgL_bgl_string2583za700za7za7_3118za7, "condition-variable-wait!", 24 );
DEFINE_STRING( BGl_string2908z00zz__threadz00, BgL_bgl_string2908za700za7za7_3119za7, "&thread-specific-noth1215", 25 );
DEFINE_STRING( BGl_string2746z00zz__threadz00, BgL_bgl_string2746za700za7za7_3120za7, "&thread-start!1177", 18 );
DEFINE_STRING( BGl_string2665z00zz__threadz00, BgL_bgl_string2665za700za7za7_3121za7, "&lambda1435", 11 );
DEFINE_STRING( BGl_string2584z00zz__threadz00, BgL_bgl_string2584za700za7za7_3122za7, "wrong number of arguments: [2..3] expected, provided", 52 );
DEFINE_STRING( BGl_string2909z00zz__threadz00, BgL_bgl_string2909za700za7za7_3123za7, "thread-terminate!-no1213", 24 );
DEFINE_STRING( BGl_string2747z00zz__threadz00, BgL_bgl_string2747za700za7za7_3124za7, "&thread-initialize!1175", 23 );
DEFINE_STRING( BGl_string2666z00zz__threadz00, BgL_bgl_string2666za700za7za7_3125za7, "&lambda1429", 11 );
DEFINE_STRING( BGl_string2585z00zz__threadz00, BgL_bgl_string2585za700za7za7_3126za7, "_condition-variable-wait!", 25 );
DEFINE_STRING( BGl_string2667z00zz__threadz00, BgL_bgl_string2667za700za7za7_3127za7, "&lambda1428", 11 );
DEFINE_STRING( BGl_string2586z00zz__threadz00, BgL_bgl_string2586za700za7za7_3128za7, "&condition-variable-signal!", 27 );
DEFINE_STRING( BGl_string2749z00zz__threadz00, BgL_bgl_string2749za700za7za7_3129za7, "&tb-condvar-initializ1167", 25 );
DEFINE_STRING( BGl_string2668z00zz__threadz00, BgL_bgl_string2668za700za7za7_3130za7, "&lambda1421", 11 );
DEFINE_STRING( BGl_string2587z00zz__threadz00, BgL_bgl_string2587za700za7za7_3131za7, "&condition-variable-broadcast!", 30 );
DEFINE_STRING( BGl_string2669z00zz__threadz00, BgL_bgl_string2669za700za7za7_3132za7, "&lambda1420", 11 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2901z00zz__threadz00, BgL_bgl_za762threadza7d2clea3133z00, BGl_z62threadzd2cleanupzd2nothr1219z62zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2903z00zz__threadz00, BgL_bgl_za762threadza7d2clea3134z00, BGl_z62threadzd2cleanupzd2setz12zd21221za2zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2910z00zz__threadz00, BgL_bgl_string2910za700za7za7_3135za7, "thread-terminate!-no1213:Wrong number of arguments", 50 );
DEFINE_STRING( BGl_string2830z00zz__threadz00, BgL_bgl_string2830za700za7za7_3136za7, "list1485", 8 );
DEFINE_STRING( BGl_string2913z00zz__threadz00, BgL_bgl_string2913za700za7za7_3137za7, "fun1548", 7 );
DEFINE_STRING( BGl_string2751z00zz__threadz00, BgL_bgl_string2751za700za7za7_3138za7, "&tb-mutex-initialize!1165", 25 );
DEFINE_STRING( BGl_string2670z00zz__threadz00, BgL_bgl_string2670za700za7za7_3139za7, "&lambda1414", 11 );
DEFINE_STRING( BGl_string2914z00zz__threadz00, BgL_bgl_string2914za700za7za7_3140za7, "&thread-terminate!-no1213", 25 );
DEFINE_STRING( BGl_string2833z00zz__threadz00, BgL_bgl_string2833za700za7za7_3141za7, "timeout", 7 );
DEFINE_STRING( BGl_string2671z00zz__threadz00, BgL_bgl_string2671za700za7za7_3142za7, "&lambda1413", 11 );
DEFINE_STRING( BGl_string2915z00zz__threadz00, BgL_bgl_string2915za700za7za7_3143za7, "&thread-join!-nothrea1211", 25 );
DEFINE_STRING( BGl_string2753z00zz__threadz00, BgL_bgl_string2753za700za7za7_3144za7, "&tb-current-thread1159", 22 );
DEFINE_STRING( BGl_string2672z00zz__threadz00, BgL_bgl_string2672za700za7za7_3145za7, "&lambda1408", 11 );
DEFINE_STRING( BGl_string2591z00zz__threadz00, BgL_bgl_string2591za700za7za7_3146za7, "name", 4 );
DEFINE_STRING( BGl_string2916z00zz__threadz00, BgL_bgl_string2916za700za7za7_3147za7, "&thread-start-joinabl1209", 25 );
DEFINE_STRING( BGl_string2835z00zz__threadz00, BgL_bgl_string2835za700za7za7_3148za7, "&thread-join!", 13 );
DEFINE_STRING( BGl_string2673z00zz__threadz00, BgL_bgl_string2673za700za7za7_3149za7, "&lambda1407", 11 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2588z00zz__threadz00, BgL_bgl_za762lambda1348za7623150z00, BGl_z62lambda1348z62zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2917z00zz__threadz00, BgL_bgl_string2917za700za7za7_3151za7, "&thread-start!-nothre1207", 25 );
DEFINE_STRING( BGl_string2836z00zz__threadz00, BgL_bgl_string2836za700za7za7_3152za7, "thread-terminate!:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string2755z00zz__threadz00, BgL_bgl_string2755za700za7za7_3153za7, "&tb-make-thread1157", 19 );
DEFINE_STRING( BGl_string2674z00zz__threadz00, BgL_bgl_string2674za700za7za7_3154za7, "&<@anonymous:1356>", 18 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2589z00zz__threadz00, BgL_bgl_za762lambda1347za7623155z00, BGl_z62lambda1347z62zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2918z00zz__threadz00, BgL_bgl_string2918za700za7za7_3156za7, "<@exit:1529>~0:Wrong number of arguments", 40 );
DEFINE_STRING( BGl_string2756z00zz__threadz00, BgL_bgl_string2756za700za7za7_3157za7, "tb-make-thread", 14 );
DEFINE_STRING( BGl_string2675z00zz__threadz00, BgL_bgl_string2675za700za7za7_3158za7, "<@anonymous:1390>", 17 );
DEFINE_STRING( BGl_string2757z00zz__threadz00, BgL_bgl_string2757za700za7za7_3159za7, "tb-make-thread:Wrong number of arguments", 40 );
DEFINE_STRING( BGl_string2676z00zz__threadz00, BgL_bgl_string2676za700za7za7_3160za7, "<@anonymous:1388>", 17 );
DEFINE_STRING( BGl_string2839z00zz__threadz00, BgL_bgl_string2839za700za7za7_3161za7, "method1185", 10 );
DEFINE_STRING( BGl_string2677z00zz__threadz00, BgL_bgl_string2677za700za7za7_3162za7, "<@anonymous:1382>", 17 );
DEFINE_STRING( BGl_string2678z00zz__threadz00, BgL_bgl_string2678za700za7za7_3163za7, "<@anonymous:1380>", 17 );
DEFINE_STRING( BGl_string2679z00zz__threadz00, BgL_bgl_string2679za700za7za7_3164za7, "<@anonymous:1375>", 17 );
DEFINE_STRING( BGl_string2598z00zz__threadz00, BgL_bgl_string2598za700za7za7_3165za7, "__thread", 8 );
DEFINE_EXPORT_BGL_GENERIC( BGl_z52userzd2threadzd2sleepz12zd2envz92zz__threadz00, BgL_bgl_za762za752userza7d2thr3166za7, BGl_z62z52userzd2threadzd2sleepz12z22zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2921z00zz__threadz00, BgL_bgl_string2921za700za7za7_3167za7, "fun1533", 7 );
DEFINE_STRING( BGl_string2840z00zz__threadz00, BgL_bgl_string2840za700za7za7_3168za7, "&thread-terminate!", 18 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2593z00zz__threadz00, BgL_bgl_za762za7c3za704anonymo3169za7, BGl_z62zc3z04anonymousza31343ze3ze5zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2922z00zz__threadz00, BgL_bgl_string2922za700za7za7_3170za7, "&object-print-thread1174", 24 );
DEFINE_STRING( BGl_string2841z00zz__threadz00, BgL_bgl_string2841za700za7za7_3171za7, "thread-specific:Wrong number of arguments", 41 );
DEFINE_STRING( BGl_string2760z00zz__threadz00, BgL_bgl_string2760za700za7za7_3172za7, "method1158", 10 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2594z00zz__threadz00, BgL_bgl_za762lambda1341za7623173z00, BGl_z62lambda1341z62zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2923z00zz__threadz00, BgL_bgl_string2923za700za7za7_3174za7, "object-write-thread1172", 23 );
DEFINE_STRING( BGl_string2680z00zz__threadz00, BgL_bgl_string2680za700za7za7_3175za7, "object", 6 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2595z00zz__threadz00, BgL_bgl_za762lambda1339za7623176z00, BGl_z62lambda1339z62zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2924z00zz__threadz00, BgL_bgl_string2924za700za7za7_3177za7, "output-port", 11 );
DEFINE_STRING( BGl_string2762z00zz__threadz00, BgL_bgl_string2762za700za7za7_3178za7, "tb", 2 );
DEFINE_STRING( BGl_string2681z00zz__threadz00, BgL_bgl_string2681za700za7za7_3179za7, "<@anonymous:1374>", 17 );
DEFINE_STRING( BGl_string2925z00zz__threadz00, BgL_bgl_string2925za700za7za7_3180za7, "&object-write-thread1172", 24 );
DEFINE_STRING( BGl_string2844z00zz__threadz00, BgL_bgl_string2844za700za7za7_3181za7, "method1188", 10 );
DEFINE_STRING( BGl_string2763z00zz__threadz00, BgL_bgl_string2763za700za7za7_3182za7, "&tb-make-thread", 15 );
DEFINE_STRING( BGl_string2682z00zz__threadz00, BgL_bgl_string2682za700za7za7_3183za7, "<@anonymous:1370>", 17 );
DEFINE_STRING( BGl_string2926z00zz__threadz00, BgL_bgl_string2926za700za7za7_3184za7, "<@anonymous:1510>", 17 );
DEFINE_STRING( BGl_string2845z00zz__threadz00, BgL_bgl_string2845za700za7za7_3185za7, "&thread-specific", 16 );
DEFINE_STRING( BGl_string2764z00zz__threadz00, BgL_bgl_string2764za700za7za7_3186za7, "tb-current-thread:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string2683z00zz__threadz00, BgL_bgl_string2683za700za7za7_3187za7, "<@anonymous:1369>", 17 );
DEFINE_STRING( BGl_string2927z00zz__threadz00, BgL_bgl_string2927za700za7za7_3188za7, "vector", 6 );
DEFINE_STRING( BGl_string2846z00zz__threadz00, BgL_bgl_string2846za700za7za7_3189za7, "thread-specific-set!:Wrong number of arguments", 46 );
DEFINE_STRING( BGl_string2684z00zz__threadz00, BgL_bgl_string2684za700za7za7_3190za7, "&lambda1363", 11 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2599z00zz__threadz00, BgL_bgl_za762za7c3za704anonymo3191za7, BGl_z62zc3z04anonymousza31364ze3ze5zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2928z00zz__threadz00, BgL_bgl_string2928za700za7za7_3192za7, "class", 5 );
DEFINE_STRING( BGl_string2685z00zz__threadz00, BgL_bgl_string2685za700za7za7_3193za7, "&lambda1362", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2conditionzd2variablezd2envzd2zz__threadz00, BgL_bgl__makeza7d2conditio3194za7, opt_generic_entry, BGl__makezd2conditionzd2variablez00zz__threadz00, BFALSE, -1 );
DEFINE_STRING( BGl_string2929z00zz__threadz00, BgL_bgl_string2929za700za7za7_3195za7, ">", 1 );
DEFINE_STRING( BGl_string2767z00zz__threadz00, BgL_bgl_string2767za700za7za7_3196za7, "method1160", 10 );
DEFINE_STRING( BGl_string2686z00zz__threadz00, BgL_bgl_string2686za700za7za7_3197za7, "&<@anonymous:1343>", 18 );
DEFINE_STRING( BGl_string2849z00zz__threadz00, BgL_bgl_string2849za700za7za7_3198za7, "method1190", 10 );
DEFINE_STRING( BGl_string2768z00zz__threadz00, BgL_bgl_string2768za700za7za7_3199za7, "&tb-current-thread", 18 );
DEFINE_STRING( BGl_string2687z00zz__threadz00, BgL_bgl_string2687za700za7za7_3200za7, "&lambda1339", 11 );
DEFINE_STRING( BGl_string2769z00zz__threadz00, BgL_bgl_string2769za700za7za7_3201za7, "tb-mutex-initialize!", 20 );
DEFINE_STRING( BGl_string2688z00zz__threadz00, BgL_bgl_string2688za700za7za7_3202za7, "&lambda1348", 11 );
DEFINE_STRING( BGl_string2689z00zz__threadz00, BgL_bgl_string2689za700za7za7_3203za7, "&lambda1347", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dynamiczd2envzf3zd2envzf3zz__threadz00, BgL_bgl_za762dynamicza7d2env3204z00, BGl_z62dynamiczd2envzf3z43zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2930z00zz__threadz00, BgL_bgl_string2930za700za7za7_3205za7, ":", 1 );
DEFINE_STRING( BGl_string2931z00zz__threadz00, BgL_bgl_string2931za700za7za7_3206za7, "#<", 2 );
DEFINE_STRING( BGl_string2932z00zz__threadz00, BgL_bgl_string2932za700za7za7_3207za7, "object-display-threa1170", 24 );
DEFINE_STRING( BGl_string2851z00zz__threadz00, BgL_bgl_string2851za700za7za7_3208za7, "v", 1 );
DEFINE_STRING( BGl_string2770z00zz__threadz00, BgL_bgl_string2770za700za7za7_3209za7, "tb-mutex-initialize!:Wrong number of arguments", 46 );
DEFINE_STRING( BGl_string2933z00zz__threadz00, BgL_bgl_string2933za700za7za7_3210za7, "&object-display-threa1170", 25 );
DEFINE_STRING( BGl_string2852z00zz__threadz00, BgL_bgl_string2852za700za7za7_3211za7, "&thread-specific-set!", 21 );
DEFINE_STRING( BGl_string2934z00zz__threadz00, BgL_bgl_string2934za700za7za7_3212za7, "<@anonymous:1493>", 17 );
DEFINE_STRING( BGl_string2853z00zz__threadz00, BgL_bgl_string2853za700za7za7_3213za7, "thread-cleanup:Wrong number of arguments", 40 );
DEFINE_STRING( BGl_string2691z00zz__threadz00, BgL_bgl_string2691za700za7za7_3214za7, "tb-make-thread1157", 18 );
DEFINE_STRING( BGl_string2935z00zz__threadz00, BgL_bgl_string2935za700za7za7_3215za7, "&tb-current-thread-no1164", 25 );
DEFINE_STRING( BGl_string2773z00zz__threadz00, BgL_bgl_string2773za700za7za7_3216za7, "method1166", 10 );
DEFINE_STRING( BGl_string2936z00zz__threadz00, BgL_bgl_string2936za700za7za7_3217za7, "tb-make-thread-nothr1162", 24 );
DEFINE_STRING( BGl_string2774z00zz__threadz00, BgL_bgl_string2774za700za7za7_3218za7, "&tb-mutex-initialize!", 21 );
DEFINE_STRING( BGl_string2693z00zz__threadz00, BgL_bgl_string2693za700za7za7_3219za7, "tb-current-thread1159", 21 );
DEFINE_STRING( BGl_string2937z00zz__threadz00, BgL_bgl_string2937za700za7za7_3220za7, "tb-make-thread-nothr1162:Wrong number of arguments", 50 );
DEFINE_STRING( BGl_string2856z00zz__threadz00, BgL_bgl_string2856za700za7za7_3221za7, "method1192", 10 );
DEFINE_STRING( BGl_string2775z00zz__threadz00, BgL_bgl_string2775za700za7za7_3222za7, "tb-condvar-initialize!", 22 );
DEFINE_STRING( BGl_string2857z00zz__threadz00, BgL_bgl_string2857za700za7za7_3223za7, "&thread-cleanup", 15 );
DEFINE_STRING( BGl_string2776z00zz__threadz00, BgL_bgl_string2776za700za7za7_3224za7, "tb-condvar-initialize!:Wrong number of arguments", 48 );
DEFINE_STRING( BGl_string2695z00zz__threadz00, BgL_bgl_string2695za700za7za7_3225za7, "tb-mutex-initialize!1165", 24 );
DEFINE_STRING( BGl_string2858z00zz__threadz00, BgL_bgl_string2858za700za7za7_3226za7, "thread-cleanup-set!:Wrong number of arguments", 45 );
DEFINE_STRING( BGl_string2697z00zz__threadz00, BgL_bgl_string2697za700za7za7_3227za7, "tb-condvar-initializ1167", 24 );
DEFINE_STRING( BGl_string2779z00zz__threadz00, BgL_bgl_string2779za700za7za7_3228za7, "method1168", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_conditionzd2variablezd2signalz12zd2envzc0zz__threadz00, BgL_bgl_za762conditionza7d2v3229z00, BGl_z62conditionzd2variablezd2signalz12z70zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2699z00zz__threadz00, BgL_bgl_string2699za700za7za7_3230za7, "thread-initialize!1175", 22 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2690z00zz__threadz00, BgL_bgl_za762tbza7d2makeza7d2t3231za7, BGl_z62tbzd2makezd2thread1157z62zz__threadz00, 0L, BUNSPEC, 3 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2692z00zz__threadz00, BgL_bgl_za762tbza7d2currentza73232za7, BGl_z62tbzd2currentzd2thread1159z62zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2940z00zz__threadz00, BgL_bgl_string2940za700za7za7_3233za7, "fun1486", 7 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2694z00zz__threadz00, BgL_bgl_za762tbza7d2mutexza7d23234za7, BGl_z62tbzd2mutexzd2initializa7ez121165zd7zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2942z00zz__threadz00, BgL_bgl_string2942za700za7za7_3235za7, "new1060", 7 );
DEFINE_STRING( BGl_string2861z00zz__threadz00, BgL_bgl_string2861za700za7za7_3236za7, "method1194", 10 );
DEFINE_STRING( BGl_string2943z00zz__threadz00, BgL_bgl_string2943za700za7za7_3237za7, "&tb-make-thread-nothr1162", 25 );
DEFINE_STRING( BGl_string2862z00zz__threadz00, BgL_bgl_string2862za700za7za7_3238za7, "&thread-cleanup-set!", 20 );
DEFINE_STRING( BGl_string2781z00zz__threadz00, BgL_bgl_string2781za700za7za7_3239za7, "&tb-condvar-initialize!", 23 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2696z00zz__threadz00, BgL_bgl_za762tbza7d2condvarza73240za7, BGl_z62tbzd2condvarzd2initializa71167zc5zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2863z00zz__threadz00, BgL_bgl_string2863za700za7za7_3241za7, "%user-current-thread:Wrong number of arguments", 46 );
DEFINE_STRING( BGl_string2782z00zz__threadz00, BgL_bgl_string2782za700za7za7_3242za7, "thread-initialize!:Wrong number of arguments", 44 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2698z00zz__threadz00, BgL_bgl_za762threadza7d2init3243z00, BGl_z62threadzd2initializa7ez121175z05zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2866z00zz__threadz00, BgL_bgl_string2866za700za7za7_3244za7, "method1201", 10 );
DEFINE_STRING( BGl_string2785z00zz__threadz00, BgL_bgl_string2785za700za7za7_3245za7, "method1176", 10 );
DEFINE_STRING( BGl_string2868z00zz__threadz00, BgL_bgl_string2868za700za7za7_3246za7, "o", 1 );
DEFINE_STRING( BGl_string2787z00zz__threadz00, BgL_bgl_string2787za700za7za7_3247za7, "th", 2 );
DEFINE_STRING( BGl_string2869z00zz__threadz00, BgL_bgl_string2869za700za7za7_3248za7, "&%user-current-thread", 21 );
DEFINE_STRING( BGl_string2788z00zz__threadz00, BgL_bgl_string2788za700za7za7_3249za7, "&thread-initialize!", 19 );
DEFINE_EXPORT_BGL_GENERIC( BGl_tbzd2makezd2threadzd2envzd2zz__threadz00, BgL_bgl_za762tbza7d2makeza7d2t3250za7, BGl_z62tbzd2makezd2threadz62zz__threadz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2threadzd2envz00zz__threadz00, BgL_bgl_za762currentza7d2thr3251z00, BGl_z62currentzd2threadzb0zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2870z00zz__threadz00, BgL_bgl_string2870za700za7za7_3252za7, "%user-thread-sleep!:Wrong number of arguments", 45 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mutexzf3zd2envz21zz__threadz00, BgL_bgl_za762mutexza7f3za791za7za73253za7, BGl_z62mutexzf3z91zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2790z00zz__threadz00, BgL_bgl_string2790za700za7za7_3254za7, "thread-start!", 13 );
DEFINE_STRING( BGl_string2791z00zz__threadz00, BgL_bgl_string2791za700za7za7_3255za7, "Wrong number of arguments", 25 );
DEFINE_STRING( BGl_string2873z00zz__threadz00, BgL_bgl_string2873za700za7za7_3256za7, "method1203", 10 );
DEFINE_STRING( BGl_string2875z00zz__threadz00, BgL_bgl_string2875za700za7za7_3257za7, "d", 1 );
DEFINE_STRING( BGl_string2794z00zz__threadz00, BgL_bgl_string2794za700za7za7_3258za7, "apply", 5 );
DEFINE_STRING( BGl_string2876z00zz__threadz00, BgL_bgl_string2876za700za7za7_3259za7, "&%user-thread-sleep!", 20 );
DEFINE_STRING( BGl_string2877z00zz__threadz00, BgL_bgl_string2877za700za7za7_3260za7, "%user-thread-yield!:Wrong number of arguments", 45 );
DEFINE_STRING( BGl_string2796z00zz__threadz00, BgL_bgl_string2796za700za7za7_3261za7, "method1178", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_conditionzd2variablezd2namezd2envzd2zz__threadz00, BgL_bgl_za762conditionza7d2v3262z00, BGl_z62conditionzd2variablezd2namez62zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2799z00zz__threadz00, BgL_bgl_string2799za700za7za7_3263za7, "let", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_threadzd2parameterzd2envz00zz__threadz00, BgL_bgl_za762threadza7d2para3264z00, BGl_z62threadzd2parameterzb0zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2880z00zz__threadz00, BgL_bgl_string2880za700za7za7_3265za7, "method1205", 10 );
DEFINE_STRING( BGl_string2881z00zz__threadz00, BgL_bgl_string2881za700za7za7_3266za7, "&%user-thread-yield!", 20 );
DEFINE_STRING( BGl_string2884z00zz__threadz00, BgL_bgl_string2884za700za7za7_3267za7, "tb-current-thread", 17 );
DEFINE_STRING( BGl_string2886z00zz__threadz00, BgL_bgl_string2886za700za7za7_3268za7, "object-display", 14 );
DEFINE_STRING( BGl_string2888z00zz__threadz00, BgL_bgl_string2888za700za7za7_3269za7, "object-write", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mutexzd2nilzd2envz00zz__threadz00, BgL_bgl_za762mutexza7d2nilza7b3270za7, BGl_z62mutexzd2nilzb0zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2882z00zz__threadz00, BgL_bgl_za762tbza7d2makeza7d2t3271za7, BGl_z62tbzd2makezd2threadzd2nothr1162zb0zz__threadz00, 0L, BUNSPEC, 3 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2883z00zz__threadz00, BgL_bgl_za762tbza7d2currentza73272za7, BGl_z62tbzd2currentzd2threadzd2no1164zb0zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2885z00zz__threadz00, BgL_bgl_za762objectza7d2disp3273z00, va_generic_entry, BGl_z62objectzd2displayzd2threa1170z62zz__threadz00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string2890z00zz__threadz00, BgL_bgl_string2890za700za7za7_3274za7, "object-print", 12 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2887z00zz__threadz00, BgL_bgl_za762objectza7d2writ3275z00, va_generic_entry, BGl_z62objectzd2writezd2thread1172z62zz__threadz00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string2893z00zz__threadz00, BgL_bgl_string2893za700za7za7_3276za7, "thread-start-joinable!", 22 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2889z00zz__threadz00, BgL_bgl_za762objectza7d2prin3277z00, BGl_z62objectzd2printzd2thread1174z62zz__threadz00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string2896z00zz__threadz00, BgL_bgl_string2896za700za7za7_3278za7, "thread-terminate!", 17 );
DEFINE_STRING( BGl_string2898z00zz__threadz00, BgL_bgl_string2898za700za7za7_3279za7, "thread-specific", 15 );
DEFINE_EXPORT_BGL_GENERIC( BGl_z52userzd2currentzd2threadzd2envz80zz__threadz00, BgL_bgl_za762za752userza7d2cur3280za7, BGl_z62z52userzd2currentzd2threadz30zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2891z00zz__threadz00, BgL_bgl_za762threadza7d2star3281z00, va_generic_entry, BGl_z62threadzd2startz12zd2nothre1207z70zz__threadz00, BUNSPEC, -2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2892z00zz__threadz00, BgL_bgl_za762threadza7d2star3282z00, BGl_z62threadzd2startzd2joinabl1209z62zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2894z00zz__threadz00, BgL_bgl_za762threadza7d2join3283z00, va_generic_entry, BGl_z62threadzd2joinz12zd2nothrea1211z70zz__threadz00, BUNSPEC, -2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2895z00zz__threadz00, BgL_bgl_za762threadza7d2term3284z00, BGl_z62threadzd2terminatez12zd2no1213z70zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2897z00zz__threadz00, BgL_bgl_za762threadza7d2spec3285z00, BGl_z62threadzd2specificzd2noth1215z62zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2899z00zz__threadz00, BgL_bgl_za762threadza7d2spec3286z00, BGl_z62threadzd2specificzd2setz121217z70zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mutexzd2statezd2envz00zz__threadz00, BgL_bgl_za762mutexza7d2state3287z00, BGl_z62mutexzd2statezb0zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_GENERIC( BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00, BgL_bgl_za762threadza7d2init3288z00, BGl_z62threadzd2initializa7ez12z05zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2threadzd2backendzd2envzd2zz__threadz00, BgL_bgl_za762currentza7d2thr3289z00, BGl_z62currentzd2threadzd2backendz62zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2dynamiczd2envzd2envzd2zz__threadz00, BgL_bgl_za762currentza7d2dyn3290z00, BGl_z62currentzd2dynamiczd2envz62zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_GENERIC( BGl_threadzd2terminatez12zd2envz12zz__threadz00, BgL_bgl_za762threadza7d2term3291z00, BGl_z62threadzd2terminatez12za2zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_conditionzd2variablezd2nilzd2envzd2zz__threadz00, BgL_bgl_za762conditionza7d2v3292z00, BGl_z62conditionzd2variablezd2nilz62zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2mutexzd2envz00zz__threadz00, BgL_bgl__makeza7d2mutexza7d23293z00, opt_generic_entry, BGl__makezd2mutexzd2zz__threadz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_GENERIC( BGl_z52userzd2threadzd2yieldz12zd2envz92zz__threadz00, BgL_bgl_za762za752userza7d2thr3294za7, BGl_z62z52userzd2threadzd2yieldz12z22zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_GENERIC( BGl_tbzd2mutexzd2initializa7ez12zd2envz67zz__threadz00, BgL_bgl_za762tbza7d2mutexza7d23295za7, BGl_z62tbzd2mutexzd2initializa7ez12zd7zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_GENERIC( BGl_threadzd2specificzd2setz12zd2envzc0zz__threadz00, BgL_bgl_za762threadza7d2spec3296z00, BGl_z62threadzd2specificzd2setz12z70zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_GENERIC( BGl_threadzd2cleanupzd2setz12zd2envzc0zz__threadz00, BgL_bgl_za762threadza7d2clea3297z00, BGl_z62threadzd2cleanupzd2setz12z70zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_threadzd2sleepz12zd2envz12zz__threadz00, BgL_bgl_za762threadza7d2slee3298z00, BGl_z62threadzd2sleepz12za2zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2threadzd2backendzd2envzd2zz__threadz00, BgL_bgl_za762getza7d2threadza73299za7, BGl_z62getzd2threadzd2backendz62zz__threadz00, 0L, BUNSPEC, 1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_symbol2802z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2641z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2561z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2805z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2807z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2726z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2646z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2569z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2810z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2730z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2650z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2813z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2733z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2571z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2735z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2818z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2737z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2576z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2739z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2659z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2578z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2821z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2741z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2661z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2824z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2743z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2582z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2745z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2829z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2748z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2912z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2750z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2832z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2752z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2590z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2754z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2592z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2838z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2596z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2759z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2597z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2920z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2761z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2843z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2766z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2848z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_nothreadzd2backendzd2zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2850z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_za2nothreadzd2backendza2zd2zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2772z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2855z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2939z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2778z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2941z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2860z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2780z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2865z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2784z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2867z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2786z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2789z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2872z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2874z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2793z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2795z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2879z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2798z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_nothreadz00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_za2conditionzd2variablezd2nilza2z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_threadzd2backendzd2zz__threadz00) );
ADD_ROOT( (void *)(&BGl_za2threadzd2backendsza2zd2zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2800z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2801z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2804z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2809z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2568z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2812z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2817z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2658z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2823z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2826z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2827z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2828z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2911z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2831z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2834z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2837z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2919z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2758z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2842z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2765z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2847z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2771z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2854z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2938z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2777z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2859z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2864z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2783z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2871z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2792z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2878z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_list2797z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2602z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2606z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2610z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_za2nothreadzd2currentza2zd2zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2536z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2539z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_za2mutexzd2nilza2zd2zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2620z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2622z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2626z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_threadz00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2631z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2551z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2554z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2636z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2556z00zz__threadz00) );
ADD_ROOT( (void *)(&BGl_symbol2558z00zz__threadz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long BgL_checksumz00_4302, char * BgL_fromz00_4303)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__threadz00))
{ 
BGl_requirezd2initializa7ationz75zz__threadz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__threadz00(); 
BGl_cnstzd2initzd2zz__threadz00(); 
BGl_importedzd2moduleszd2initz00zz__threadz00(); 
BGl_objectzd2initzd2zz__threadz00(); 
BGl_genericzd2initzd2zz__threadz00(); 
BGl_methodzd2initzd2zz__threadz00(); 
return 
BGl_toplevelzd2initzd2zz__threadz00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__threadz00()
{
{ /* Llib/thread.scm 17 */
BGl_symbol2536z00zz__threadz00 = 
bstring_to_symbol(BGl_string2537z00zz__threadz00); 
BGl_symbol2539z00zz__threadz00 = 
bstring_to_symbol(BGl_string2540z00zz__threadz00); 
BGl_symbol2551z00zz__threadz00 = 
bstring_to_symbol(BGl_string2552z00zz__threadz00); 
BGl_symbol2554z00zz__threadz00 = 
bstring_to_symbol(BGl_string2555z00zz__threadz00); 
BGl_symbol2556z00zz__threadz00 = 
bstring_to_symbol(BGl_string2557z00zz__threadz00); 
BGl_symbol2558z00zz__threadz00 = 
bstring_to_symbol(BGl_string2559z00zz__threadz00); 
BGl_symbol2561z00zz__threadz00 = 
bstring_to_symbol(BGl_string2562z00zz__threadz00); 
BGl_symbol2569z00zz__threadz00 = 
bstring_to_symbol(BGl_string2570z00zz__threadz00); 
BGl_symbol2571z00zz__threadz00 = 
bstring_to_symbol(BGl_string2572z00zz__threadz00); 
BGl_list2568z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2569z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2571z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2571z00zz__threadz00, BNIL))); 
BGl_symbol2576z00zz__threadz00 = 
bstring_to_symbol(BGl_string2577z00zz__threadz00); 
BGl_symbol2578z00zz__threadz00 = 
bstring_to_symbol(BGl_string2579z00zz__threadz00); 
BGl_symbol2582z00zz__threadz00 = 
bstring_to_symbol(BGl_string2583z00zz__threadz00); 
BGl_symbol2590z00zz__threadz00 = 
bstring_to_symbol(BGl_string2591z00zz__threadz00); 
BGl_symbol2592z00zz__threadz00 = 
bstring_to_symbol(BGl_string2535z00zz__threadz00); 
BGl_symbol2596z00zz__threadz00 = 
bstring_to_symbol(BGl_string2529z00zz__threadz00); 
BGl_symbol2597z00zz__threadz00 = 
bstring_to_symbol(BGl_string2598z00zz__threadz00); 
BGl_symbol2602z00zz__threadz00 = 
bstring_to_symbol(BGl_string2603z00zz__threadz00); 
BGl_symbol2606z00zz__threadz00 = 
bstring_to_symbol(BGl_string2607z00zz__threadz00); 
BGl_symbol2610z00zz__threadz00 = 
bstring_to_symbol(BGl_string2611z00zz__threadz00); 
BGl_symbol2620z00zz__threadz00 = 
bstring_to_symbol(BGl_string2621z00zz__threadz00); 
BGl_symbol2622z00zz__threadz00 = 
bstring_to_symbol(BGl_string2542z00zz__threadz00); 
BGl_symbol2626z00zz__threadz00 = 
bstring_to_symbol(BGl_string2627z00zz__threadz00); 
BGl_symbol2631z00zz__threadz00 = 
bstring_to_symbol(BGl_string2632z00zz__threadz00); 
BGl_symbol2636z00zz__threadz00 = 
bstring_to_symbol(BGl_string2637z00zz__threadz00); 
BGl_symbol2641z00zz__threadz00 = 
bstring_to_symbol(BGl_string2642z00zz__threadz00); 
BGl_symbol2646z00zz__threadz00 = 
bstring_to_symbol(BGl_string2526z00zz__threadz00); 
BGl_symbol2650z00zz__threadz00 = 
bstring_to_symbol(BGl_string2651z00zz__threadz00); 
BGl_symbol2659z00zz__threadz00 = 
bstring_to_symbol(BGl_string2660z00zz__threadz00); 
BGl_symbol2661z00zz__threadz00 = 
bstring_to_symbol(BGl_string2662z00zz__threadz00); 
BGl_list2658z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2569z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2659z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2659z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2661z00zz__threadz00, BNIL)))); 
BGl_symbol2726z00zz__threadz00 = 
bstring_to_symbol(BGl_string2543z00zz__threadz00); 
BGl_symbol2730z00zz__threadz00 = 
bstring_to_symbol(BGl_string2715z00zz__threadz00); 
BGl_symbol2733z00zz__threadz00 = 
bstring_to_symbol(BGl_string2713z00zz__threadz00); 
BGl_symbol2735z00zz__threadz00 = 
bstring_to_symbol(BGl_string2711z00zz__threadz00); 
BGl_symbol2737z00zz__threadz00 = 
bstring_to_symbol(BGl_string2709z00zz__threadz00); 
BGl_symbol2739z00zz__threadz00 = 
bstring_to_symbol(BGl_string2707z00zz__threadz00); 
BGl_symbol2741z00zz__threadz00 = 
bstring_to_symbol(BGl_string2705z00zz__threadz00); 
BGl_symbol2743z00zz__threadz00 = 
bstring_to_symbol(BGl_string2703z00zz__threadz00); 
BGl_symbol2745z00zz__threadz00 = 
bstring_to_symbol(BGl_string2701z00zz__threadz00); 
BGl_symbol2748z00zz__threadz00 = 
bstring_to_symbol(BGl_string2697z00zz__threadz00); 
BGl_symbol2750z00zz__threadz00 = 
bstring_to_symbol(BGl_string2695z00zz__threadz00); 
BGl_symbol2752z00zz__threadz00 = 
bstring_to_symbol(BGl_string2693z00zz__threadz00); 
BGl_symbol2754z00zz__threadz00 = 
bstring_to_symbol(BGl_string2691z00zz__threadz00); 
BGl_symbol2759z00zz__threadz00 = 
bstring_to_symbol(BGl_string2760z00zz__threadz00); 
BGl_symbol2761z00zz__threadz00 = 
bstring_to_symbol(BGl_string2762z00zz__threadz00); 
BGl_list2758z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2569z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2759z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2759z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2761z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2620z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2590z00zz__threadz00, BNIL)))))); 
BGl_symbol2766z00zz__threadz00 = 
bstring_to_symbol(BGl_string2767z00zz__threadz00); 
BGl_list2765z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2569z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2766z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2766z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2761z00zz__threadz00, BNIL)))); 
BGl_symbol2772z00zz__threadz00 = 
bstring_to_symbol(BGl_string2773z00zz__threadz00); 
BGl_list2771z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2569z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2772z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2772z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2761z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2554z00zz__threadz00, BNIL))))); 
BGl_symbol2778z00zz__threadz00 = 
bstring_to_symbol(BGl_string2779z00zz__threadz00); 
BGl_symbol2780z00zz__threadz00 = 
bstring_to_symbol(BGl_string2581z00zz__threadz00); 
BGl_list2777z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2569z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2778z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2778z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2761z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2780z00zz__threadz00, BNIL))))); 
BGl_symbol2784z00zz__threadz00 = 
bstring_to_symbol(BGl_string2785z00zz__threadz00); 
BGl_symbol2786z00zz__threadz00 = 
bstring_to_symbol(BGl_string2787z00zz__threadz00); 
BGl_list2783z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2569z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2784z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2784z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2786z00zz__threadz00, BNIL)))); 
BGl_symbol2789z00zz__threadz00 = 
bstring_to_symbol(BGl_string2790z00zz__threadz00); 
BGl_symbol2793z00zz__threadz00 = 
bstring_to_symbol(BGl_string2794z00zz__threadz00); 
BGl_symbol2795z00zz__threadz00 = 
bstring_to_symbol(BGl_string2796z00zz__threadz00); 
BGl_symbol2798z00zz__threadz00 = 
bstring_to_symbol(BGl_string2799z00zz__threadz00); 
BGl_symbol2802z00zz__threadz00 = 
bstring_to_symbol(BGl_string2803z00zz__threadz00); 
BGl_symbol2805z00zz__threadz00 = 
bstring_to_symbol(BGl_string2806z00zz__threadz00); 
BGl_symbol2807z00zz__threadz00 = 
bstring_to_symbol(BGl_string2808z00zz__threadz00); 
BGl_symbol2810z00zz__threadz00 = 
bstring_to_symbol(BGl_string2811z00zz__threadz00); 
BGl_list2809z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2810z00zz__threadz00, 
MAKE_YOUNG_PAIR(BNIL, BNIL)); 
BGl_list2804z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2805z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2807z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_list2809z00zz__threadz00, BNIL))); 
BGl_list2801z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2802z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_list2804z00zz__threadz00, BNIL)); 
BGl_list2800z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_list2801z00zz__threadz00, BNIL); 
BGl_symbol2813z00zz__threadz00 = 
bstring_to_symbol(BGl_string2814z00zz__threadz00); 
BGl_list2812z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2813z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2786z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2802z00zz__threadz00, BNIL))); 
BGl_list2797z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2798z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_list2800z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_list2812z00zz__threadz00, BNIL))); 
BGl_list2792z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2793z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2795z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_list2797z00zz__threadz00, BNIL))); 
BGl_symbol2818z00zz__threadz00 = 
bstring_to_symbol(BGl_string2819z00zz__threadz00); 
BGl_list2817z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2569z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2818z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2818z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2786z00zz__threadz00, BNIL)))); 
BGl_symbol2821z00zz__threadz00 = 
bstring_to_symbol(BGl_string2822z00zz__threadz00); 
BGl_symbol2824z00zz__threadz00 = 
bstring_to_symbol(BGl_string2825z00zz__threadz00); 
BGl_symbol2829z00zz__threadz00 = 
bstring_to_symbol(BGl_string2830z00zz__threadz00); 
BGl_symbol2832z00zz__threadz00 = 
bstring_to_symbol(BGl_string2833z00zz__threadz00); 
BGl_list2831z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2805z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2832z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_list2809z00zz__threadz00, BNIL))); 
BGl_list2828z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2829z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_list2831z00zz__threadz00, BNIL)); 
BGl_list2827z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_list2828z00zz__threadz00, BNIL); 
BGl_list2834z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2813z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2786z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2829z00zz__threadz00, BNIL))); 
BGl_list2826z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2798z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_list2827z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_list2834z00zz__threadz00, BNIL))); 
BGl_list2823z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2793z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2824z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_list2826z00zz__threadz00, BNIL))); 
BGl_symbol2838z00zz__threadz00 = 
bstring_to_symbol(BGl_string2839z00zz__threadz00); 
BGl_list2837z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2569z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2838z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2838z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2786z00zz__threadz00, BNIL)))); 
BGl_symbol2843z00zz__threadz00 = 
bstring_to_symbol(BGl_string2844z00zz__threadz00); 
BGl_list2842z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2569z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2843z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2843z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2786z00zz__threadz00, BNIL)))); 
BGl_symbol2848z00zz__threadz00 = 
bstring_to_symbol(BGl_string2849z00zz__threadz00); 
BGl_symbol2850z00zz__threadz00 = 
bstring_to_symbol(BGl_string2851z00zz__threadz00); 
BGl_list2847z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2569z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2848z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2848z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2786z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2850z00zz__threadz00, BNIL))))); 
BGl_symbol2855z00zz__threadz00 = 
bstring_to_symbol(BGl_string2856z00zz__threadz00); 
BGl_list2854z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2569z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2855z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2855z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2786z00zz__threadz00, BNIL)))); 
BGl_symbol2860z00zz__threadz00 = 
bstring_to_symbol(BGl_string2861z00zz__threadz00); 
BGl_list2859z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2569z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2860z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2860z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2786z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2850z00zz__threadz00, BNIL))))); 
BGl_symbol2865z00zz__threadz00 = 
bstring_to_symbol(BGl_string2866z00zz__threadz00); 
BGl_symbol2867z00zz__threadz00 = 
bstring_to_symbol(BGl_string2868z00zz__threadz00); 
BGl_list2864z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2569z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2865z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2865z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2867z00zz__threadz00, BNIL)))); 
BGl_symbol2872z00zz__threadz00 = 
bstring_to_symbol(BGl_string2873z00zz__threadz00); 
BGl_symbol2874z00zz__threadz00 = 
bstring_to_symbol(BGl_string2875z00zz__threadz00); 
BGl_list2871z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2569z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2872z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2872z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2867z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2874z00zz__threadz00, BNIL))))); 
BGl_symbol2879z00zz__threadz00 = 
bstring_to_symbol(BGl_string2880z00zz__threadz00); 
BGl_list2878z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2569z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2879z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2879z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2867z00zz__threadz00, BNIL)))); 
BGl_symbol2912z00zz__threadz00 = 
bstring_to_symbol(BGl_string2913z00zz__threadz00); 
BGl_list2911z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2569z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2912z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2912z00zz__threadz00, BNIL))); 
BGl_symbol2920z00zz__threadz00 = 
bstring_to_symbol(BGl_string2921z00zz__threadz00); 
BGl_list2919z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2569z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2920z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2920z00zz__threadz00, BNIL))); 
BGl_symbol2939z00zz__threadz00 = 
bstring_to_symbol(BGl_string2940z00zz__threadz00); 
BGl_symbol2941z00zz__threadz00 = 
bstring_to_symbol(BGl_string2942z00zz__threadz00); 
return ( 
BGl_list2938z00zz__threadz00 = 
MAKE_YOUNG_PAIR(BGl_symbol2569z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2939z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2939z00zz__threadz00, 
MAKE_YOUNG_PAIR(BGl_symbol2941z00zz__threadz00, BNIL)))), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__threadz00()
{
{ /* Llib/thread.scm 17 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__threadz00()
{
{ /* Llib/thread.scm 17 */
{ /* Llib/thread.scm 268 */
BgL_nothreadzd2backendzd2_bglt BgL_new1057z00_1156;
{ /* Llib/thread.scm 269 */
BgL_nothreadzd2backendzd2_bglt BgL_new1056z00_1157;
BgL_new1056z00_1157 = 
((BgL_nothreadzd2backendzd2_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_nothreadzd2backendzd2_bgl) ))); 
{ /* Llib/thread.scm 269 */
long BgL_arg1284z00_1158;
{ /* Llib/thread.scm 269 */
long BgL_res1893z00_2111;
BgL_res1893z00_2111 = 
BGL_CLASS_INDEX(BGl_nothreadzd2backendzd2zz__threadz00); 
BgL_arg1284z00_1158 = BgL_res1893z00_2111; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1056z00_1157), BgL_arg1284z00_1158); } 
BgL_new1057z00_1156 = BgL_new1056z00_1157; } 
((((BgL_threadzd2backendzd2_bglt)COBJECT(
((BgL_threadzd2backendzd2_bglt)BgL_new1057z00_1156)))->BgL_namez00)=((obj_t)BGl_string2526z00zz__threadz00),BUNSPEC); 
BGl_za2nothreadzd2backendza2zd2zz__threadz00 = BgL_new1057z00_1156; } 
{ /* Llib/thread.scm 275 */
obj_t BgL_list1285z00_1159;
BgL_list1285z00_1159 = 
MAKE_YOUNG_PAIR(
((obj_t)BGl_za2nothreadzd2backendza2zd2zz__threadz00), BNIL); 
BGl_za2threadzd2backendsza2zd2zz__threadz00 = BgL_list1285z00_1159; } 
BGl_za2nothreadzd2currentza2zd2zz__threadz00 = BFALSE; 
BGl_za2mutexzd2nilza2zd2zz__threadz00 = 
bgl_make_nil_mutex(); 
return ( 
BGl_za2conditionzd2variablezd2nilza2z00zz__threadz00 = 
bgl_make_nil_condvar(), BUNSPEC) ;} 

}



/* dynamic-env? */
BGL_EXPORTED_DEF bool_t BGl_dynamiczd2envzf3z21zz__threadz00(obj_t BgL_objz00_3)
{
{ /* Llib/thread.scm 255 */
return 
BGL_DYNAMIC_ENVP(BgL_objz00_3);} 

}



/* &dynamic-env? */
obj_t BGl_z62dynamiczd2envzf3z43zz__threadz00(obj_t BgL_envz00_3236, obj_t BgL_objz00_3237)
{
{ /* Llib/thread.scm 255 */
return 
BBOOL(
BGl_dynamiczd2envzf3z21zz__threadz00(BgL_objz00_3237));} 

}



/* current-dynamic-env */
BGL_EXPORTED_DEF obj_t BGl_currentzd2dynamiczd2envz00zz__threadz00()
{
{ /* Llib/thread.scm 261 */
return 
BGL_CURRENT_DYNAMIC_ENV();} 

}



/* &current-dynamic-env */
obj_t BGl_z62currentzd2dynamiczd2envz62zz__threadz00(obj_t BgL_envz00_3238)
{
{ /* Llib/thread.scm 261 */
return 
BGl_currentzd2dynamiczd2envz00zz__threadz00();} 

}



/* current-thread-backend */
BGL_EXPORTED_DEF obj_t BGl_currentzd2threadzd2backendz00zz__threadz00()
{
{ /* Llib/thread.scm 280 */
return 
BGL_THREAD_BACKEND();} 

}



/* &current-thread-backend */
obj_t BGl_z62currentzd2threadzd2backendz62zz__threadz00(obj_t BgL_envz00_3239)
{
{ /* Llib/thread.scm 280 */
return 
BGl_currentzd2threadzd2backendz00zz__threadz00();} 

}



/* current-thread-backend-set! */
BGL_EXPORTED_DEF obj_t BGl_currentzd2threadzd2backendzd2setz12zc0zz__threadz00(BgL_threadzd2backendzd2_bglt BgL_tbz00_4)
{
{ /* Llib/thread.scm 286 */
{ /* Llib/thread.scm 287 */
obj_t BgL_tmpz00_4523;
BgL_tmpz00_4523 = 
((obj_t)BgL_tbz00_4); 
BGL_THREAD_BACKEND_SET(BgL_tmpz00_4523); } BUNSPEC; 
return 
((obj_t)BgL_tbz00_4);} 

}



/* &current-thread-backend-set! */
obj_t BGl_z62currentzd2threadzd2backendzd2setz12za2zz__threadz00(obj_t BgL_envz00_3240, obj_t BgL_tbz00_3241)
{
{ /* Llib/thread.scm 286 */
{ /* Llib/thread.scm 287 */
BgL_threadzd2backendzd2_bglt BgL_auxz00_4527;
if(
BGl_isazf3zf3zz__objectz00(BgL_tbz00_3241, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 287 */
BgL_auxz00_4527 = 
((BgL_threadzd2backendzd2_bglt)BgL_tbz00_3241)
; }  else 
{ 
obj_t BgL_auxz00_4531;
BgL_auxz00_4531 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)11022)), BGl_string2528z00zz__threadz00, BGl_string2529z00zz__threadz00, BgL_tbz00_3241); 
FAILURE(BgL_auxz00_4531,BFALSE,BFALSE);} 
return 
BGl_currentzd2threadzd2backendzd2setz12zc0zz__threadz00(BgL_auxz00_4527);} } 

}



/* default-thread-backend */
BGL_EXPORTED_DEF obj_t BGl_defaultzd2threadzd2backendz00zz__threadz00()
{
{ /* Llib/thread.scm 293 */
{ /* Llib/thread.scm 294 */
obj_t BgL_pairz00_2115;
{ /* Llib/thread.scm 294 */
obj_t BgL_aux2212z00_3592;
BgL_aux2212z00_3592 = BGl_za2threadzd2backendsza2zd2zz__threadz00; 
if(
PAIRP(BgL_aux2212z00_3592))
{ /* Llib/thread.scm 294 */
BgL_pairz00_2115 = BgL_aux2212z00_3592; }  else 
{ 
obj_t BgL_auxz00_4538;
BgL_auxz00_4538 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)11301)), BGl_string2530z00zz__threadz00, BGl_string2531z00zz__threadz00, BgL_aux2212z00_3592); 
FAILURE(BgL_auxz00_4538,BFALSE,BFALSE);} } 
return 
CAR(BgL_pairz00_2115);} } 

}



/* &default-thread-backend */
obj_t BGl_z62defaultzd2threadzd2backendz62zz__threadz00(obj_t BgL_envz00_3242)
{
{ /* Llib/thread.scm 293 */
return 
BGl_defaultzd2threadzd2backendz00zz__threadz00();} 

}



/* default-thread-backend-set! */
BGL_EXPORTED_DEF obj_t BGl_defaultzd2threadzd2backendzd2setz12zc0zz__threadz00(BgL_threadzd2backendzd2_bglt BgL_tbz00_5)
{
{ /* Llib/thread.scm 299 */
BGl_za2threadzd2backendsza2zd2zz__threadz00 = 
bgl_remq_bang(
((obj_t)BgL_tbz00_5), BGl_za2threadzd2backendsza2zd2zz__threadz00); 
return ( 
BGl_za2threadzd2backendsza2zd2zz__threadz00 = 
MAKE_YOUNG_PAIR(
((obj_t)BgL_tbz00_5), BGl_za2threadzd2backendsza2zd2zz__threadz00), BUNSPEC) ;} 

}



/* &default-thread-backend-set! */
obj_t BGl_z62defaultzd2threadzd2backendzd2setz12za2zz__threadz00(obj_t BgL_envz00_3243, obj_t BgL_tbz00_3244)
{
{ /* Llib/thread.scm 299 */
{ /* Llib/thread.scm 300 */
BgL_threadzd2backendzd2_bglt BgL_auxz00_4548;
if(
BGl_isazf3zf3zz__objectz00(BgL_tbz00_3244, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 300 */
BgL_auxz00_4548 = 
((BgL_threadzd2backendzd2_bglt)BgL_tbz00_3244)
; }  else 
{ 
obj_t BgL_auxz00_4552;
BgL_auxz00_4552 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)11640)), BGl_string2532z00zz__threadz00, BGl_string2529z00zz__threadz00, BgL_tbz00_3244); 
FAILURE(BgL_auxz00_4552,BFALSE,BFALSE);} 
return 
BGl_defaultzd2threadzd2backendzd2setz12zc0zz__threadz00(BgL_auxz00_4548);} } 

}



/* get-thread-backend */
BGL_EXPORTED_DEF obj_t BGl_getzd2threadzd2backendz00zz__threadz00(obj_t BgL_namez00_6)
{
{ /* Llib/thread.scm 306 */
{ 
obj_t BgL_tbsz00_1169;
BgL_tbsz00_1169 = BGl_za2threadzd2backendsza2zd2zz__threadz00; 
BgL_zc3z04anonymousza31289ze3z87_1170:
if(
PAIRP(BgL_tbsz00_1169))
{ /* Llib/thread.scm 309 */
BgL_threadzd2backendzd2_bglt BgL_i1058z00_1172;
{ /* Llib/thread.scm 309 */
obj_t BgL_aux2216z00_3598;
BgL_aux2216z00_3598 = 
CAR(BgL_tbsz00_1169); 
if(
BGl_isazf3zf3zz__objectz00(BgL_aux2216z00_3598, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 309 */
BgL_i1058z00_1172 = 
((BgL_threadzd2backendzd2_bglt)BgL_aux2216z00_3598); }  else 
{ 
obj_t BgL_auxz00_4563;
BgL_auxz00_4563 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)12050)), BGl_string2533z00zz__threadz00, BGl_string2529z00zz__threadz00, BgL_aux2216z00_3598); 
FAILURE(BgL_auxz00_4563,BFALSE,BFALSE);} } 
{ /* Llib/thread.scm 310 */
bool_t BgL_test3306z00_4567;
{ /* Llib/thread.scm 310 */
obj_t BgL_arg1296z00_1176;
BgL_arg1296z00_1176 = 
(((BgL_threadzd2backendzd2_bglt)COBJECT(BgL_i1058z00_1172))->BgL_namez00); 
{ /* Llib/thread.scm 310 */
bool_t BgL_res1900z00_2133;
{ /* Llib/thread.scm 310 */
long BgL_l1z00_2120;
BgL_l1z00_2120 = 
STRING_LENGTH(BgL_arg1296z00_1176); 
if(
(BgL_l1z00_2120==
STRING_LENGTH(BgL_namez00_6)))
{ /* Llib/thread.scm 310 */
int BgL_arg1620z00_2123;
{ /* Llib/thread.scm 310 */
char * BgL_auxz00_4575;char * BgL_tmpz00_4573;
BgL_auxz00_4575 = 
BSTRING_TO_STRING(BgL_namez00_6); 
BgL_tmpz00_4573 = 
BSTRING_TO_STRING(BgL_arg1296z00_1176); 
BgL_arg1620z00_2123 = 
memcmp(BgL_tmpz00_4573, BgL_auxz00_4575, BgL_l1z00_2120); } 
BgL_res1900z00_2133 = 
(
(long)(BgL_arg1620z00_2123)==((long)0)); }  else 
{ /* Llib/thread.scm 310 */
BgL_res1900z00_2133 = ((bool_t)0); } } 
BgL_test3306z00_4567 = BgL_res1900z00_2133; } } 
if(BgL_test3306z00_4567)
{ /* Llib/thread.scm 310 */
return 
CAR(BgL_tbsz00_1169);}  else 
{ 
obj_t BgL_tbsz00_4581;
BgL_tbsz00_4581 = 
CDR(BgL_tbsz00_1169); 
BgL_tbsz00_1169 = BgL_tbsz00_4581; 
goto BgL_zc3z04anonymousza31289ze3z87_1170;} } }  else 
{ /* Llib/thread.scm 308 */
return BFALSE;} } } 

}



/* &get-thread-backend */
obj_t BGl_z62getzd2threadzd2backendz62zz__threadz00(obj_t BgL_envz00_3245, obj_t BgL_namez00_3246)
{
{ /* Llib/thread.scm 306 */
{ /* Llib/thread.scm 308 */
obj_t BgL_auxz00_4583;
if(
STRINGP(BgL_namez00_3246))
{ /* Llib/thread.scm 308 */
BgL_auxz00_4583 = BgL_namez00_3246
; }  else 
{ 
obj_t BgL_auxz00_4586;
BgL_auxz00_4586 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)12001)), BGl_string2534z00zz__threadz00, BGl_string2535z00zz__threadz00, BgL_namez00_3246); 
FAILURE(BgL_auxz00_4586,BFALSE,BFALSE);} 
return 
BGl_getzd2threadzd2backendz00zz__threadz00(BgL_auxz00_4583);} } 

}



/* _make-thread */
obj_t BGl__makezd2threadzd2zz__threadz00(obj_t BgL_env1196z00_42, obj_t BgL_opt1195z00_41)
{
{ /* Llib/thread.scm 426 */
{ /* Llib/thread.scm 426 */
obj_t BgL_g1197z00_4089;
BgL_g1197z00_4089 = 
VECTOR_REF(BgL_opt1195z00_41,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1195z00_41)) { case ((long)1) : 

{ /* Llib/thread.scm 426 */
obj_t BgL_namez00_4091;
BgL_namez00_4091 = 
BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol2539z00zz__threadz00); 
{ /* Llib/thread.scm 426 */

{ /* Llib/thread.scm 426 */
BgL_threadz00_bglt BgL_res1901z00_4092;
{ /* Llib/thread.scm 426 */
obj_t BgL_bodyz00_4093;
if(
PROCEDUREP(BgL_g1197z00_4089))
{ /* Llib/thread.scm 426 */
BgL_bodyz00_4093 = BgL_g1197z00_4089; }  else 
{ 
obj_t BgL_auxz00_4595;
BgL_auxz00_4595 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)18146)), BGl_string2541z00zz__threadz00, BGl_string2542z00zz__threadz00, BgL_g1197z00_4089); 
FAILURE(BgL_auxz00_4595,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 427 */
obj_t BgL_arg1299z00_4094;
BgL_arg1299z00_4094 = 
BGl_defaultzd2threadzd2backendz00zz__threadz00(); 
{ /* Llib/thread.scm 427 */
BgL_threadzd2backendzd2_bglt BgL_auxz00_4600;
if(
BGl_isazf3zf3zz__objectz00(BgL_arg1299z00_4094, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 427 */
BgL_auxz00_4600 = 
((BgL_threadzd2backendzd2_bglt)BgL_arg1299z00_4094)
; }  else 
{ 
obj_t BgL_auxz00_4604;
BgL_auxz00_4604 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)18257)), BGl_string2541z00zz__threadz00, BGl_string2529z00zz__threadz00, BgL_arg1299z00_4094); 
FAILURE(BgL_auxz00_4604,BFALSE,BFALSE);} 
BgL_res1901z00_4092 = 
BGl_tbzd2makezd2threadz00zz__threadz00(BgL_auxz00_4600, BgL_bodyz00_4093, BgL_namez00_4091); } } } 
return 
((obj_t)BgL_res1901z00_4092);} } } break;case ((long)2) : 

{ /* Llib/thread.scm 426 */
obj_t BgL_namez00_4095;
BgL_namez00_4095 = 
VECTOR_REF(BgL_opt1195z00_41,((long)1)); 
{ /* Llib/thread.scm 426 */

{ /* Llib/thread.scm 426 */
BgL_threadz00_bglt BgL_res1902z00_4096;
{ /* Llib/thread.scm 426 */
obj_t BgL_bodyz00_4097;
if(
PROCEDUREP(BgL_g1197z00_4089))
{ /* Llib/thread.scm 426 */
BgL_bodyz00_4097 = BgL_g1197z00_4089; }  else 
{ 
obj_t BgL_auxz00_4613;
BgL_auxz00_4613 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)18146)), BGl_string2541z00zz__threadz00, BGl_string2542z00zz__threadz00, BgL_g1197z00_4089); 
FAILURE(BgL_auxz00_4613,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 427 */
obj_t BgL_arg1299z00_4098;
BgL_arg1299z00_4098 = 
BGl_defaultzd2threadzd2backendz00zz__threadz00(); 
{ /* Llib/thread.scm 427 */
BgL_threadzd2backendzd2_bglt BgL_auxz00_4618;
if(
BGl_isazf3zf3zz__objectz00(BgL_arg1299z00_4098, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 427 */
BgL_auxz00_4618 = 
((BgL_threadzd2backendzd2_bglt)BgL_arg1299z00_4098)
; }  else 
{ 
obj_t BgL_auxz00_4622;
BgL_auxz00_4622 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)18257)), BGl_string2541z00zz__threadz00, BGl_string2529z00zz__threadz00, BgL_arg1299z00_4098); 
FAILURE(BgL_auxz00_4622,BFALSE,BFALSE);} 
BgL_res1902z00_4096 = 
BGl_tbzd2makezd2threadz00zz__threadz00(BgL_auxz00_4618, BgL_bodyz00_4097, BgL_namez00_4095); } } } 
return 
((obj_t)BgL_res1902z00_4096);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2536z00zz__threadz00, BGl_string2538z00zz__threadz00, 
BINT(
VECTOR_LENGTH(BgL_opt1195z00_41)));} } } } 

}



/* make-thread */
BGL_EXPORTED_DEF BgL_threadz00_bglt BGl_makezd2threadzd2zz__threadz00(obj_t BgL_bodyz00_39, obj_t BgL_namez00_40)
{
{ /* Llib/thread.scm 426 */
{ /* Llib/thread.scm 427 */
obj_t BgL_arg1299z00_4099;
BgL_arg1299z00_4099 = 
BGl_defaultzd2threadzd2backendz00zz__threadz00(); 
{ /* Llib/thread.scm 427 */
BgL_threadzd2backendzd2_bglt BgL_auxz00_4634;
if(
BGl_isazf3zf3zz__objectz00(BgL_arg1299z00_4099, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 427 */
BgL_auxz00_4634 = 
((BgL_threadzd2backendzd2_bglt)BgL_arg1299z00_4099)
; }  else 
{ 
obj_t BgL_auxz00_4638;
BgL_auxz00_4638 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)18257)), BGl_string2537z00zz__threadz00, BGl_string2529z00zz__threadz00, BgL_arg1299z00_4099); 
FAILURE(BgL_auxz00_4638,BFALSE,BFALSE);} 
return 
BGl_tbzd2makezd2threadz00zz__threadz00(BgL_auxz00_4634, BgL_bodyz00_39, BgL_namez00_40);} } } 

}



/* %current-thread */
obj_t BGl_z52currentzd2threadz80zz__threadz00()
{
{ /* Llib/thread.scm 438 */
{ /* Llib/thread.scm 439 */
obj_t BgL_tbz00_1186;
BgL_tbz00_1186 = 
BGL_THREAD_BACKEND(); 
if(
BGl_isazf3zf3zz__objectz00(BgL_tbz00_1186, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 440 */
return 
BGl_tbzd2currentzd2threadz00zz__threadz00(
((BgL_threadzd2backendzd2_bglt)BgL_tbz00_1186));}  else 
{ /* Llib/thread.scm 440 */
return BFALSE;} } } 

}



/* current-thread */
BGL_EXPORTED_DEF obj_t BGl_currentzd2threadzd2zz__threadz00()
{
{ /* Llib/thread.scm 446 */
{ /* Llib/thread.scm 447 */
obj_t BgL_thz00_1188;
BgL_thz00_1188 = 
BGl_z52currentzd2threadz80zz__threadz00(); 
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_1188, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 448 */
return 
BGl_z52userzd2currentzd2threadz52zz__threadz00(
((BgL_threadz00_bglt)BgL_thz00_1188));}  else 
{ /* Llib/thread.scm 448 */
return BFALSE;} } } 

}



/* &current-thread */
obj_t BGl_z62currentzd2threadzb0zz__threadz00(obj_t BgL_envz00_3247)
{
{ /* Llib/thread.scm 446 */
return 
BGl_currentzd2threadzd2zz__threadz00();} 

}



/* thread-sleep! */
BGL_EXPORTED_DEF obj_t BGl_threadzd2sleepz12zc0zz__threadz00(obj_t BgL_objz00_46)
{
{ /* Llib/thread.scm 475 */
{ /* Llib/thread.scm 476 */
obj_t BgL_arg1302z00_4100;
BgL_arg1302z00_4100 = 
BGl_currentzd2threadzd2zz__threadz00(); 
{ /* Llib/thread.scm 476 */
BgL_threadz00_bglt BgL_auxz00_4655;
if(
BGl_isazf3zf3zz__objectz00(BgL_arg1302z00_4100, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 476 */
BgL_auxz00_4655 = 
((BgL_threadz00_bglt)BgL_arg1302z00_4100)
; }  else 
{ 
obj_t BgL_auxz00_4659;
BgL_auxz00_4659 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)20333)), BGl_string2543z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_arg1302z00_4100); 
FAILURE(BgL_auxz00_4659,BFALSE,BFALSE);} 
return 
BGl_z52userzd2threadzd2sleepz12z40zz__threadz00(BgL_auxz00_4655, BgL_objz00_46);} } } 

}



/* &thread-sleep! */
obj_t BGl_z62threadzd2sleepz12za2zz__threadz00(obj_t BgL_envz00_3248, obj_t BgL_objz00_3249)
{
{ /* Llib/thread.scm 475 */
return 
BGl_threadzd2sleepz12zc0zz__threadz00(BgL_objz00_3249);} 

}



/* thread-yield! */
BGL_EXPORTED_DEF obj_t BGl_threadzd2yieldz12zc0zz__threadz00()
{
{ /* Llib/thread.scm 487 */
{ /* Llib/thread.scm 488 */
obj_t BgL_arg1303z00_4101;
BgL_arg1303z00_4101 = 
BGl_currentzd2threadzd2zz__threadz00(); 
{ /* Llib/thread.scm 488 */
BgL_threadz00_bglt BgL_auxz00_4666;
if(
BGl_isazf3zf3zz__objectz00(BgL_arg1303z00_4101, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 488 */
BgL_auxz00_4666 = 
((BgL_threadz00_bglt)BgL_arg1303z00_4101)
; }  else 
{ 
obj_t BgL_auxz00_4670;
BgL_auxz00_4670 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)20924)), BGl_string2544z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_arg1303z00_4101); 
FAILURE(BgL_auxz00_4670,BFALSE,BFALSE);} 
return 
BGl_z52userzd2threadzd2yieldz12z40zz__threadz00(BgL_auxz00_4666);} } } 

}



/* &thread-yield! */
obj_t BGl_z62threadzd2yieldz12za2zz__threadz00(obj_t BgL_envz00_3250)
{
{ /* Llib/thread.scm 487 */
return 
BGl_threadzd2yieldz12zc0zz__threadz00();} 

}



/* thread-parameter */
BGL_EXPORTED_DEF obj_t BGl_threadzd2parameterzd2zz__threadz00(obj_t BgL_idz00_48)
{
{ /* Llib/thread.scm 493 */
{ /* Llib/thread.scm 494 */
obj_t BgL_cz00_2152;
{ /* Llib/thread.scm 494 */
obj_t BgL_arg1306z00_2153;
BgL_arg1306z00_2153 = 
BGL_PARAMETERS(); 
{ /* Llib/thread.scm 494 */
obj_t BgL_auxz00_4677;
{ /* Llib/thread.scm 494 */
bool_t BgL_test3318z00_4678;
if(
PAIRP(BgL_arg1306z00_2153))
{ /* Llib/thread.scm 494 */
BgL_test3318z00_4678 = ((bool_t)1)
; }  else 
{ /* Llib/thread.scm 494 */
BgL_test3318z00_4678 = 
NULLP(BgL_arg1306z00_2153)
; } 
if(BgL_test3318z00_4678)
{ /* Llib/thread.scm 494 */
BgL_auxz00_4677 = BgL_arg1306z00_2153
; }  else 
{ 
obj_t BgL_auxz00_4682;
BgL_auxz00_4682 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)21224)), BGl_string2545z00zz__threadz00, BGl_string2546z00zz__threadz00, BgL_arg1306z00_2153); 
FAILURE(BgL_auxz00_4682,BFALSE,BFALSE);} } 
BgL_cz00_2152 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_48, BgL_auxz00_4677); } } 
if(
PAIRP(BgL_cz00_2152))
{ /* Llib/thread.scm 495 */
return 
CDR(BgL_cz00_2152);}  else 
{ /* Llib/thread.scm 495 */
return BFALSE;} } } 

}



/* &thread-parameter */
obj_t BGl_z62threadzd2parameterzb0zz__threadz00(obj_t BgL_envz00_3251, obj_t BgL_idz00_3252)
{
{ /* Llib/thread.scm 493 */
{ /* Llib/thread.scm 494 */
obj_t BgL_auxz00_4690;
if(
SYMBOLP(BgL_idz00_3252))
{ /* Llib/thread.scm 494 */
BgL_auxz00_4690 = BgL_idz00_3252
; }  else 
{ 
obj_t BgL_auxz00_4693;
BgL_auxz00_4693 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)21187)), BGl_string2547z00zz__threadz00, BGl_string2548z00zz__threadz00, BgL_idz00_3252); 
FAILURE(BgL_auxz00_4693,BFALSE,BFALSE);} 
return 
BGl_threadzd2parameterzd2zz__threadz00(BgL_auxz00_4690);} } 

}



/* thread-parameter-set! */
BGL_EXPORTED_DEF obj_t BGl_threadzd2parameterzd2setz12z12zz__threadz00(obj_t BgL_idz00_49, obj_t BgL_valz00_50)
{
{ /* Llib/thread.scm 502 */
{ /* Llib/thread.scm 503 */
obj_t BgL_cz00_1195;
{ /* Llib/thread.scm 503 */
obj_t BgL_arg1311z00_1200;
BgL_arg1311z00_1200 = 
BGL_PARAMETERS(); 
{ /* Llib/thread.scm 503 */
obj_t BgL_auxz00_4699;
{ /* Llib/thread.scm 503 */
bool_t BgL_test3322z00_4700;
if(
PAIRP(BgL_arg1311z00_1200))
{ /* Llib/thread.scm 503 */
BgL_test3322z00_4700 = ((bool_t)1)
; }  else 
{ /* Llib/thread.scm 503 */
BgL_test3322z00_4700 = 
NULLP(BgL_arg1311z00_1200)
; } 
if(BgL_test3322z00_4700)
{ /* Llib/thread.scm 503 */
BgL_auxz00_4699 = BgL_arg1311z00_1200
; }  else 
{ 
obj_t BgL_auxz00_4704;
BgL_auxz00_4704 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)21571)), BGl_string2549z00zz__threadz00, BGl_string2546z00zz__threadz00, BgL_arg1311z00_1200); 
FAILURE(BgL_auxz00_4704,BFALSE,BFALSE);} } 
BgL_cz00_1195 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_49, BgL_auxz00_4699); } } 
if(
PAIRP(BgL_cz00_1195))
{ /* Llib/thread.scm 504 */
return 
SET_CDR(BgL_cz00_1195, BgL_valz00_50);}  else 
{ /* Llib/thread.scm 504 */
{ /* Llib/thread.scm 508 */
obj_t BgL_arg1308z00_1197;
{ /* Llib/thread.scm 508 */
obj_t BgL_arg1309z00_1198;obj_t BgL_arg1310z00_1199;
BgL_arg1309z00_1198 = 
MAKE_YOUNG_PAIR(BgL_idz00_49, BgL_valz00_50); 
BgL_arg1310z00_1199 = 
BGL_PARAMETERS(); 
BgL_arg1308z00_1197 = 
MAKE_YOUNG_PAIR(BgL_arg1309z00_1198, BgL_arg1310z00_1199); } 
BGL_PARAMETERS_SET(BgL_arg1308z00_1197); } 
return BgL_valz00_50;} } } 

}



/* &thread-parameter-set! */
obj_t BGl_z62threadzd2parameterzd2setz12z70zz__threadz00(obj_t BgL_envz00_3253, obj_t BgL_idz00_3254, obj_t BgL_valz00_3255)
{
{ /* Llib/thread.scm 502 */
{ /* Llib/thread.scm 503 */
obj_t BgL_auxz00_4716;
if(
SYMBOLP(BgL_idz00_3254))
{ /* Llib/thread.scm 503 */
BgL_auxz00_4716 = BgL_idz00_3254
; }  else 
{ 
obj_t BgL_auxz00_4719;
BgL_auxz00_4719 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)21534)), BGl_string2550z00zz__threadz00, BGl_string2548z00zz__threadz00, BgL_idz00_3254); 
FAILURE(BgL_auxz00_4719,BFALSE,BFALSE);} 
return 
BGl_threadzd2parameterzd2setz12z12zz__threadz00(BgL_auxz00_4716, BgL_valz00_3255);} } 

}



/* mutex? */
BGL_EXPORTED_DEF bool_t BGl_mutexzf3zf3zz__threadz00(obj_t BgL_objz00_63)
{
{ /* Llib/thread.scm 577 */
return 
BGL_MUTEXP(BgL_objz00_63);} 

}



/* &mutex? */
obj_t BGl_z62mutexzf3z91zz__threadz00(obj_t BgL_envz00_3256, obj_t BgL_objz00_3257)
{
{ /* Llib/thread.scm 577 */
return 
BBOOL(
BGl_mutexzf3zf3zz__threadz00(BgL_objz00_3257));} 

}



/* _make-mutex */
obj_t BGl__makezd2mutexzd2zz__threadz00(obj_t BgL_env1223z00_66, obj_t BgL_opt1222z00_65)
{
{ /* Llib/thread.scm 583 */
{ /* Llib/thread.scm 583 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1222z00_65)) { case ((long)0) : 

{ /* Llib/thread.scm 583 */
obj_t BgL_namez00_4111;
BgL_namez00_4111 = 
BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol2554z00zz__threadz00); 
{ /* Llib/thread.scm 583 */

{ /* Llib/thread.scm 583 */
obj_t BgL_res1905z00_4112;
BgL_res1905z00_4112 = 
bgl_make_mutex(BgL_namez00_4111); 
return BgL_res1905z00_4112;} } } break;case ((long)1) : 

{ /* Llib/thread.scm 583 */
obj_t BgL_namez00_4113;
BgL_namez00_4113 = 
VECTOR_REF(BgL_opt1222z00_65,((long)0)); 
{ /* Llib/thread.scm 583 */

{ /* Llib/thread.scm 583 */
obj_t BgL_res1906z00_4114;
BgL_res1906z00_4114 = 
bgl_make_mutex(BgL_namez00_4113); 
return BgL_res1906z00_4114;} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2551z00zz__threadz00, BGl_string2553z00zz__threadz00, 
BINT(
VECTOR_LENGTH(BgL_opt1222z00_65)));} } } } 

}



/* make-mutex */
BGL_EXPORTED_DEF obj_t BGl_makezd2mutexzd2zz__threadz00(obj_t BgL_namez00_64)
{
{ /* Llib/thread.scm 583 */
return 
bgl_make_mutex(BgL_namez00_64);} 

}



/* _make-spinlock */
obj_t BGl__makezd2spinlockzd2zz__threadz00(obj_t BgL_env1227z00_69, obj_t BgL_opt1226z00_68)
{
{ /* Llib/thread.scm 589 */
{ /* Llib/thread.scm 589 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1226z00_68)) { case ((long)0) : 

{ /* Llib/thread.scm 589 */
obj_t BgL_namez00_4116;
BgL_namez00_4116 = 
BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol2558z00zz__threadz00); 
{ /* Llib/thread.scm 589 */

{ /* Llib/thread.scm 589 */
obj_t BgL_res1907z00_4117;
BgL_res1907z00_4117 = 
bgl_make_spinlock(BgL_namez00_4116); 
return BgL_res1907z00_4117;} } } break;case ((long)1) : 

{ /* Llib/thread.scm 589 */
obj_t BgL_namez00_4118;
BgL_namez00_4118 = 
VECTOR_REF(BgL_opt1226z00_68,((long)0)); 
{ /* Llib/thread.scm 589 */

{ /* Llib/thread.scm 589 */
obj_t BgL_res1908z00_4119;
BgL_res1908z00_4119 = 
bgl_make_spinlock(BgL_namez00_4118); 
return BgL_res1908z00_4119;} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2556z00zz__threadz00, BGl_string2553z00zz__threadz00, 
BINT(
VECTOR_LENGTH(BgL_opt1226z00_68)));} } } } 

}



/* make-spinlock */
BGL_EXPORTED_DEF obj_t BGl_makezd2spinlockzd2zz__threadz00(obj_t BgL_namez00_67)
{
{ /* Llib/thread.scm 589 */
return 
bgl_make_spinlock(BgL_namez00_67);} 

}



/* mutex-nil */
BGL_EXPORTED_DEF obj_t BGl_mutexzd2nilzd2zz__threadz00()
{
{ /* Llib/thread.scm 596 */
return BGl_za2mutexzd2nilza2zd2zz__threadz00;} 

}



/* &mutex-nil */
obj_t BGl_z62mutexzd2nilzb0zz__threadz00(obj_t BgL_envz00_3258)
{
{ /* Llib/thread.scm 596 */
return 
BGl_mutexzd2nilzd2zz__threadz00();} 

}



/* mutex-name */
BGL_EXPORTED_DEF obj_t BGl_mutexzd2namezd2zz__threadz00(obj_t BgL_objz00_70)
{
{ /* Llib/thread.scm 601 */
return 
BGL_MUTEX_NAME(BgL_objz00_70);} 

}



/* &mutex-name */
obj_t BGl_z62mutexzd2namezb0zz__threadz00(obj_t BgL_envz00_3259, obj_t BgL_objz00_3260)
{
{ /* Llib/thread.scm 601 */
{ /* Llib/thread.scm 602 */
obj_t BgL_auxz00_4749;
if(
BGL_MUTEXP(BgL_objz00_3260))
{ /* Llib/thread.scm 602 */
BgL_auxz00_4749 = BgL_objz00_3260
; }  else 
{ 
obj_t BgL_auxz00_4752;
BgL_auxz00_4752 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)26155)), BGl_string2560z00zz__threadz00, BGl_string2555z00zz__threadz00, BgL_objz00_3260); 
FAILURE(BgL_auxz00_4752,BFALSE,BFALSE);} 
return 
BGl_mutexzd2namezd2zz__threadz00(BgL_auxz00_4749);} } 

}



/* _mutex-lock! */
obj_t BGl__mutexzd2lockz12zc0zz__threadz00(obj_t BgL_env1231z00_74, obj_t BgL_opt1230z00_73)
{
{ /* Llib/thread.scm 607 */
{ /* Llib/thread.scm 607 */
obj_t BgL_g1232z00_4120;
BgL_g1232z00_4120 = 
VECTOR_REF(BgL_opt1230z00_73,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1230z00_73)) { case ((long)1) : 

{ /* Llib/thread.scm 607 */

{ /* Llib/thread.scm 607 */
obj_t BgL_mz00_4122;
if(
BGL_MUTEXP(BgL_g1232z00_4120))
{ /* Llib/thread.scm 607 */
BgL_mz00_4122 = BgL_g1232z00_4120; }  else 
{ 
obj_t BgL_auxz00_4760;
BgL_auxz00_4760 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)26397)), BGl_string2563z00zz__threadz00, BGl_string2555z00zz__threadz00, BgL_g1232z00_4120); 
FAILURE(BgL_auxz00_4760,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 609 */
int BgL_arg1319z00_4123;
BgL_arg1319z00_4123 = 
BGL_MUTEX_LOCK(BgL_mz00_4122); 
return 
BBOOL(
(
(long)(BgL_arg1319z00_4123)==((long)0)));} } } break;case ((long)2) : 

{ /* Llib/thread.scm 607 */
obj_t BgL_timeoutz00_4124;
BgL_timeoutz00_4124 = 
VECTOR_REF(BgL_opt1230z00_73,((long)1)); 
{ /* Llib/thread.scm 607 */

{ /* Llib/thread.scm 607 */
obj_t BgL_mz00_4125;long BgL_timeoutz00_4126;
if(
BGL_MUTEXP(BgL_g1232z00_4120))
{ /* Llib/thread.scm 607 */
BgL_mz00_4125 = BgL_g1232z00_4120; }  else 
{ 
obj_t BgL_auxz00_4771;
BgL_auxz00_4771 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)26397)), BGl_string2563z00zz__threadz00, BGl_string2555z00zz__threadz00, BgL_g1232z00_4120); 
FAILURE(BgL_auxz00_4771,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 607 */
obj_t BgL_tmpz00_4775;
if(
INTEGERP(BgL_timeoutz00_4124))
{ /* Llib/thread.scm 607 */
BgL_tmpz00_4775 = BgL_timeoutz00_4124
; }  else 
{ 
obj_t BgL_auxz00_4778;
BgL_auxz00_4778 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)26397)), BGl_string2563z00zz__threadz00, BGl_string2564z00zz__threadz00, BgL_timeoutz00_4124); 
FAILURE(BgL_auxz00_4778,BFALSE,BFALSE);} 
BgL_timeoutz00_4126 = 
(long)CINT(BgL_tmpz00_4775); } 
if(
(BgL_timeoutz00_4126==((long)0)))
{ /* Llib/thread.scm 609 */
int BgL_arg1319z00_4127;
BgL_arg1319z00_4127 = 
BGL_MUTEX_LOCK(BgL_mz00_4125); 
return 
BBOOL(
(
(long)(BgL_arg1319z00_4127)==((long)0)));}  else 
{ /* Llib/thread.scm 610 */
int BgL_arg1322z00_4128;
BgL_arg1322z00_4128 = 
BGL_MUTEX_TIMED_LOCK(BgL_mz00_4125, BgL_timeoutz00_4126); 
return 
BBOOL(
(
(long)(BgL_arg1322z00_4128)==((long)0)));} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2561z00zz__threadz00, BGl_string2538z00zz__threadz00, 
BINT(
VECTOR_LENGTH(BgL_opt1230z00_73)));} } } } 

}



/* mutex-lock! */
BGL_EXPORTED_DEF obj_t BGl_mutexzd2lockz12zc0zz__threadz00(obj_t BgL_mz00_71, long BgL_timeoutz00_72)
{
{ /* Llib/thread.scm 607 */
if(
(BgL_timeoutz00_72==((long)0)))
{ /* Llib/thread.scm 609 */
int BgL_arg1319z00_4129;
BgL_arg1319z00_4129 = 
BGL_MUTEX_LOCK(BgL_mz00_71); 
return 
BBOOL(
(
(long)(BgL_arg1319z00_4129)==((long)0)));}  else 
{ /* Llib/thread.scm 610 */
int BgL_arg1322z00_4130;
BgL_arg1322z00_4130 = 
BGL_MUTEX_TIMED_LOCK(BgL_mz00_71, BgL_timeoutz00_72); 
return 
BBOOL(
(
(long)(BgL_arg1322z00_4130)==((long)0)));} } 

}



/* mutex-unlock! */
BGL_EXPORTED_DEF obj_t BGl_mutexzd2unlockz12zc0zz__threadz00(obj_t BgL_mz00_75)
{
{ /* Llib/thread.scm 615 */
{ /* Llib/thread.scm 616 */
int BgL_arg1324z00_4131;
BgL_arg1324z00_4131 = 
BGL_MUTEX_UNLOCK(BgL_mz00_75); 
return 
BBOOL(
(
(long)(BgL_arg1324z00_4131)==((long)0)));} } 

}



/* &mutex-unlock! */
obj_t BGl_z62mutexzd2unlockz12za2zz__threadz00(obj_t BgL_envz00_3261, obj_t BgL_mz00_3262)
{
{ /* Llib/thread.scm 615 */
{ /* Llib/thread.scm 616 */
obj_t BgL_auxz00_4812;
if(
BGL_MUTEXP(BgL_mz00_3262))
{ /* Llib/thread.scm 616 */
BgL_auxz00_4812 = BgL_mz00_3262
; }  else 
{ 
obj_t BgL_auxz00_4815;
BgL_auxz00_4815 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)26822)), BGl_string2565z00zz__threadz00, BGl_string2555z00zz__threadz00, BgL_mz00_3262); 
FAILURE(BgL_auxz00_4815,BFALSE,BFALSE);} 
return 
BGl_mutexzd2unlockz12zc0zz__threadz00(BgL_auxz00_4812);} } 

}



/* mutex-state */
BGL_EXPORTED_DEF obj_t BGl_mutexzd2statezd2zz__threadz00(obj_t BgL_mutexz00_76)
{
{ /* Llib/thread.scm 621 */
return 
BGL_MUTEX_STATE(BgL_mutexz00_76);} 

}



/* &mutex-state */
obj_t BGl_z62mutexzd2statezb0zz__threadz00(obj_t BgL_envz00_3263, obj_t BgL_mutexz00_3264)
{
{ /* Llib/thread.scm 621 */
{ /* Llib/thread.scm 622 */
obj_t BgL_auxz00_4821;
if(
BGL_MUTEXP(BgL_mutexz00_3264))
{ /* Llib/thread.scm 622 */
BgL_auxz00_4821 = BgL_mutexz00_3264
; }  else 
{ 
obj_t BgL_auxz00_4824;
BgL_auxz00_4824 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)27105)), BGl_string2566z00zz__threadz00, BGl_string2555z00zz__threadz00, BgL_mutexz00_3264); 
FAILURE(BgL_auxz00_4824,BFALSE,BFALSE);} 
return 
BGl_mutexzd2statezd2zz__threadz00(BgL_auxz00_4821);} } 

}



/* with-lock */
BGL_EXPORTED_DEF obj_t BGl_withzd2lockzd2zz__threadz00(obj_t BgL_mutexz00_78, obj_t BgL_thunkz00_79)
{
{ /* Llib/thread.scm 633 */
{ /* Llib/thread.scm 634 */
obj_t BgL_top3335z00_4830;
BgL_top3335z00_4830 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BgL_mutexz00_78); 
BGL_EXITD_PUSH_PROTECT(BgL_top3335z00_4830, BgL_mutexz00_78); BUNSPEC; 
{ /* Llib/thread.scm 634 */
obj_t BgL_tmp3334z00_4829;
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_79, ((long)0)))
{ /* Llib/thread.scm 635 */
BgL_tmp3334z00_4829 = 
PROCEDURE_ENTRY(BgL_thunkz00_79)(BgL_thunkz00_79, BEOA); }  else 
{ /* Llib/thread.scm 635 */
FAILURE(BGl_string2567z00zz__threadz00,BGl_list2568z00zz__threadz00,BgL_thunkz00_79);} 
BGL_EXITD_POP_PROTECT(BgL_top3335z00_4830); BUNSPEC; 
BGL_MUTEX_UNLOCK(BgL_mutexz00_78); 
return BgL_tmp3334z00_4829;} } } 

}



/* &with-lock */
obj_t BGl_z62withzd2lockzb0zz__threadz00(obj_t BgL_envz00_3265, obj_t BgL_mutexz00_3266, obj_t BgL_thunkz00_3267)
{
{ /* Llib/thread.scm 633 */
{ /* Llib/thread.scm 634 */
obj_t BgL_auxz00_4849;obj_t BgL_auxz00_4842;
if(
PROCEDUREP(BgL_thunkz00_3267))
{ /* Llib/thread.scm 634 */
BgL_auxz00_4849 = BgL_thunkz00_3267
; }  else 
{ 
obj_t BgL_auxz00_4852;
BgL_auxz00_4852 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)27668)), BGl_string2573z00zz__threadz00, BGl_string2542z00zz__threadz00, BgL_thunkz00_3267); 
FAILURE(BgL_auxz00_4852,BFALSE,BFALSE);} 
if(
BGL_MUTEXP(BgL_mutexz00_3266))
{ /* Llib/thread.scm 634 */
BgL_auxz00_4842 = BgL_mutexz00_3266
; }  else 
{ 
obj_t BgL_auxz00_4845;
BgL_auxz00_4845 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)27668)), BGl_string2573z00zz__threadz00, BGl_string2555z00zz__threadz00, BgL_mutexz00_3266); 
FAILURE(BgL_auxz00_4845,BFALSE,BFALSE);} 
return 
BGl_withzd2lockzd2zz__threadz00(BgL_auxz00_4842, BgL_auxz00_4849);} } 

}



/* with-timed-lock */
BGL_EXPORTED_DEF obj_t BGl_withzd2timedzd2lockz00zz__threadz00(obj_t BgL_mutexz00_80, int BgL_timeoutz00_81, obj_t BgL_thunkz00_82)
{
{ /* Llib/thread.scm 640 */
{ /* Llib/thread.scm 641 */
bool_t BgL_test3339z00_4857;
{ /* Llib/thread.scm 641 */
long BgL_timeoutz00_2221;
BgL_timeoutz00_2221 = 
(long)(BgL_timeoutz00_81); 
if(
(BgL_timeoutz00_2221==((long)0)))
{ /* Llib/thread.scm 609 */
int BgL_arg1319z00_2223;
BgL_arg1319z00_2223 = 
BGL_MUTEX_LOCK(BgL_mutexz00_80); 
BgL_test3339z00_4857 = 
(
(long)(BgL_arg1319z00_2223)==((long)0)); }  else 
{ /* Llib/thread.scm 610 */
int BgL_arg1322z00_2224;
BgL_arg1322z00_2224 = 
BGL_MUTEX_TIMED_LOCK(BgL_mutexz00_80, BgL_timeoutz00_2221); 
BgL_test3339z00_4857 = 
(
(long)(BgL_arg1322z00_2224)==((long)0)); } } 
if(BgL_test3339z00_4857)
{ /* Llib/thread.scm 642 */
obj_t BgL_exitd1093z00_2217;
BgL_exitd1093z00_2217 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Llib/thread.scm 644 */
obj_t BgL_zc3z04anonymousza31326ze3z87_3268;
BgL_zc3z04anonymousza31326ze3z87_3268 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31326ze3ze5zz__threadz00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31326ze3z87_3268, 
(int)(((long)0)), BgL_mutexz00_80); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1093z00_2217, BgL_zc3z04anonymousza31326ze3z87_3268); 
{ /* Llib/thread.scm 643 */
obj_t BgL_tmp1095z00_2219;
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_82, ((long)0)))
{ /* Llib/thread.scm 643 */
BgL_tmp1095z00_2219 = 
PROCEDURE_ENTRY(BgL_thunkz00_82)(BgL_thunkz00_82, BEOA); }  else 
{ /* Llib/thread.scm 643 */
FAILURE(BGl_string2574z00zz__threadz00,BGl_list2568z00zz__threadz00,BgL_thunkz00_82);} 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1093z00_2217); 
{ /* Llib/thread.scm 616 */
int BgL_arg1324z00_2236;
BgL_arg1324z00_2236 = 
BGL_MUTEX_UNLOCK(BgL_mutexz00_80); 
(
(long)(BgL_arg1324z00_2236)==((long)0)); } 
return BgL_tmp1095z00_2219;} } }  else 
{ /* Llib/thread.scm 641 */
return BFALSE;} } } 

}



/* &with-timed-lock */
obj_t BGl_z62withzd2timedzd2lockz62zz__threadz00(obj_t BgL_envz00_3269, obj_t BgL_mutexz00_3270, obj_t BgL_timeoutz00_3271, obj_t BgL_thunkz00_3272)
{
{ /* Llib/thread.scm 640 */
{ /* Llib/thread.scm 641 */
obj_t BgL_auxz00_4900;int BgL_auxz00_4891;obj_t BgL_auxz00_4884;
if(
PROCEDUREP(BgL_thunkz00_3272))
{ /* Llib/thread.scm 641 */
BgL_auxz00_4900 = BgL_thunkz00_3272
; }  else 
{ 
obj_t BgL_auxz00_4903;
BgL_auxz00_4903 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)27975)), BGl_string2575z00zz__threadz00, BGl_string2542z00zz__threadz00, BgL_thunkz00_3272); 
FAILURE(BgL_auxz00_4903,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 641 */
obj_t BgL_tmpz00_4892;
if(
INTEGERP(BgL_timeoutz00_3271))
{ /* Llib/thread.scm 641 */
BgL_tmpz00_4892 = BgL_timeoutz00_3271
; }  else 
{ 
obj_t BgL_auxz00_4895;
BgL_auxz00_4895 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)27975)), BGl_string2575z00zz__threadz00, BGl_string2564z00zz__threadz00, BgL_timeoutz00_3271); 
FAILURE(BgL_auxz00_4895,BFALSE,BFALSE);} 
BgL_auxz00_4891 = 
CINT(BgL_tmpz00_4892); } 
if(
BGL_MUTEXP(BgL_mutexz00_3270))
{ /* Llib/thread.scm 641 */
BgL_auxz00_4884 = BgL_mutexz00_3270
; }  else 
{ 
obj_t BgL_auxz00_4887;
BgL_auxz00_4887 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)27975)), BGl_string2575z00zz__threadz00, BGl_string2555z00zz__threadz00, BgL_mutexz00_3270); 
FAILURE(BgL_auxz00_4887,BFALSE,BFALSE);} 
return 
BGl_withzd2timedzd2lockz00zz__threadz00(BgL_auxz00_4884, BgL_auxz00_4891, BgL_auxz00_4900);} } 

}



/* &<@anonymous:1326> */
obj_t BGl_z62zc3z04anonymousza31326ze3ze5zz__threadz00(obj_t BgL_envz00_3273)
{
{ /* Llib/thread.scm 642 */
{ /* Llib/thread.scm 644 */
obj_t BgL_mutexz00_3274;
BgL_mutexz00_3274 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3273, 
(int)(((long)0)))); 
{ /* Llib/thread.scm 644 */
bool_t BgL_tmpz00_4911;
{ /* Llib/thread.scm 616 */
int BgL_arg1324z00_4132;
BgL_arg1324z00_4132 = 
BGL_MUTEX_UNLOCK(BgL_mutexz00_3274); 
BgL_tmpz00_4911 = 
(
(long)(BgL_arg1324z00_4132)==((long)0)); } 
return 
BBOOL(BgL_tmpz00_4911);} } } 

}



/* condition-variable? */
BGL_EXPORTED_DEF bool_t BGl_conditionzd2variablezf3z21zz__threadz00(obj_t BgL_objz00_83)
{
{ /* Llib/thread.scm 649 */
return 
BGL_CONDVARP(BgL_objz00_83);} 

}



/* &condition-variable? */
obj_t BGl_z62conditionzd2variablezf3z43zz__threadz00(obj_t BgL_envz00_3275, obj_t BgL_objz00_3276)
{
{ /* Llib/thread.scm 649 */
return 
BBOOL(
BGl_conditionzd2variablezf3z21zz__threadz00(BgL_objz00_3276));} 

}



/* _make-condition-variable */
obj_t BGl__makezd2conditionzd2variablez00zz__threadz00(obj_t BgL_env1236z00_86, obj_t BgL_opt1235z00_85)
{
{ /* Llib/thread.scm 655 */
{ /* Llib/thread.scm 655 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1235z00_85)) { case ((long)0) : 

{ /* Llib/thread.scm 656 */
obj_t BgL_namez00_4134;
BgL_namez00_4134 = 
BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol2578z00zz__threadz00); 
{ /* Llib/thread.scm 655 */

{ /* Llib/thread.scm 655 */
obj_t BgL_res1924z00_4135;
BgL_res1924z00_4135 = 
bgl_make_condvar(BgL_namez00_4134); 
return BgL_res1924z00_4135;} } } break;case ((long)1) : 

{ /* Llib/thread.scm 655 */
obj_t BgL_namez00_4136;
BgL_namez00_4136 = 
VECTOR_REF(BgL_opt1235z00_85,((long)0)); 
{ /* Llib/thread.scm 655 */

{ /* Llib/thread.scm 655 */
obj_t BgL_res1925z00_4137;
BgL_res1925z00_4137 = 
bgl_make_condvar(BgL_namez00_4136); 
return BgL_res1925z00_4137;} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2576z00zz__threadz00, BGl_string2553z00zz__threadz00, 
BINT(
VECTOR_LENGTH(BgL_opt1235z00_85)));} } } } 

}



/* make-condition-variable */
BGL_EXPORTED_DEF obj_t BGl_makezd2conditionzd2variablez00zz__threadz00(obj_t BgL_namez00_84)
{
{ /* Llib/thread.scm 655 */
return 
bgl_make_condvar(BgL_namez00_84);} 

}



/* condition-variable-nil */
BGL_EXPORTED_DEF obj_t BGl_conditionzd2variablezd2nilz00zz__threadz00()
{
{ /* Llib/thread.scm 663 */
return BGl_za2conditionzd2variablezd2nilza2z00zz__threadz00;} 

}



/* &condition-variable-nil */
obj_t BGl_z62conditionzd2variablezd2nilz62zz__threadz00(obj_t BgL_envz00_3277)
{
{ /* Llib/thread.scm 663 */
return 
BGl_conditionzd2variablezd2nilz00zz__threadz00();} 

}



/* condition-variable-name */
BGL_EXPORTED_DEF obj_t BGl_conditionzd2variablezd2namez00zz__threadz00(obj_t BgL_objz00_87)
{
{ /* Llib/thread.scm 668 */
return 
BGL_CONDVAR_NAME(BgL_objz00_87);} 

}



/* &condition-variable-name */
obj_t BGl_z62conditionzd2variablezd2namez62zz__threadz00(obj_t BgL_envz00_3278, obj_t BgL_objz00_3279)
{
{ /* Llib/thread.scm 668 */
{ /* Llib/thread.scm 669 */
obj_t BgL_auxz00_4931;
if(
BGL_CONDVARP(BgL_objz00_3279))
{ /* Llib/thread.scm 669 */
BgL_auxz00_4931 = BgL_objz00_3279
; }  else 
{ 
obj_t BgL_auxz00_4934;
BgL_auxz00_4934 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)29300)), BGl_string2580z00zz__threadz00, BGl_string2581z00zz__threadz00, BgL_objz00_3279); 
FAILURE(BgL_auxz00_4934,BFALSE,BFALSE);} 
return 
BGl_conditionzd2variablezd2namez00zz__threadz00(BgL_auxz00_4931);} } 

}



/* _condition-variable-wait! */
obj_t BGl__conditionzd2variablezd2waitz12z12zz__threadz00(obj_t BgL_env1240z00_92, obj_t BgL_opt1239z00_91)
{
{ /* Llib/thread.scm 674 */
{ /* Llib/thread.scm 674 */
obj_t BgL_g1241z00_4138;obj_t BgL_g1242z00_4139;
BgL_g1241z00_4138 = 
VECTOR_REF(BgL_opt1239z00_91,((long)0)); 
BgL_g1242z00_4139 = 
VECTOR_REF(BgL_opt1239z00_91,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1239z00_91)) { case ((long)2) : 

{ /* Llib/thread.scm 674 */

{ /* Llib/thread.scm 674 */
bool_t BgL_res1927z00_4141;
{ /* Llib/thread.scm 674 */
obj_t BgL_cz00_4142;obj_t BgL_mz00_4143;
if(
BGL_CONDVARP(BgL_g1241z00_4138))
{ /* Llib/thread.scm 674 */
BgL_cz00_4142 = BgL_g1241z00_4138; }  else 
{ 
obj_t BgL_auxz00_4943;
BgL_auxz00_4943 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)29544)), BGl_string2585z00zz__threadz00, BGl_string2581z00zz__threadz00, BgL_g1241z00_4138); 
FAILURE(BgL_auxz00_4943,BFALSE,BFALSE);} 
if(
BGL_MUTEXP(BgL_g1242z00_4139))
{ /* Llib/thread.scm 674 */
BgL_mz00_4143 = BgL_g1242z00_4139; }  else 
{ 
obj_t BgL_auxz00_4949;
BgL_auxz00_4949 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)29544)), BGl_string2585z00zz__threadz00, BGl_string2555z00zz__threadz00, BgL_g1242z00_4139); 
FAILURE(BgL_auxz00_4949,BFALSE,BFALSE);} 
BgL_res1927z00_4141 = 
BGL_CONDVAR_WAIT(BgL_cz00_4142, BgL_mz00_4143); } 
return 
BBOOL(BgL_res1927z00_4141);} } break;case ((long)3) : 

{ /* Llib/thread.scm 674 */
obj_t BgL_timeoutz00_4144;
BgL_timeoutz00_4144 = 
VECTOR_REF(BgL_opt1239z00_91,((long)2)); 
{ /* Llib/thread.scm 674 */

{ /* Llib/thread.scm 674 */
bool_t BgL_res1929z00_4145;
{ /* Llib/thread.scm 674 */
obj_t BgL_cz00_4146;obj_t BgL_mz00_4147;long BgL_timeoutz00_4148;
if(
BGL_CONDVARP(BgL_g1241z00_4138))
{ /* Llib/thread.scm 674 */
BgL_cz00_4146 = BgL_g1241z00_4138; }  else 
{ 
obj_t BgL_auxz00_4958;
BgL_auxz00_4958 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)29544)), BGl_string2585z00zz__threadz00, BGl_string2581z00zz__threadz00, BgL_g1241z00_4138); 
FAILURE(BgL_auxz00_4958,BFALSE,BFALSE);} 
if(
BGL_MUTEXP(BgL_g1242z00_4139))
{ /* Llib/thread.scm 674 */
BgL_mz00_4147 = BgL_g1242z00_4139; }  else 
{ 
obj_t BgL_auxz00_4964;
BgL_auxz00_4964 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)29544)), BGl_string2585z00zz__threadz00, BGl_string2555z00zz__threadz00, BgL_g1242z00_4139); 
FAILURE(BgL_auxz00_4964,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 674 */
obj_t BgL_tmpz00_4968;
if(
INTEGERP(BgL_timeoutz00_4144))
{ /* Llib/thread.scm 674 */
BgL_tmpz00_4968 = BgL_timeoutz00_4144
; }  else 
{ 
obj_t BgL_auxz00_4971;
BgL_auxz00_4971 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)29544)), BGl_string2585z00zz__threadz00, BGl_string2564z00zz__threadz00, BgL_timeoutz00_4144); 
FAILURE(BgL_auxz00_4971,BFALSE,BFALSE);} 
BgL_timeoutz00_4148 = 
(long)CINT(BgL_tmpz00_4968); } 
if(
(BgL_timeoutz00_4148==((long)0)))
{ /* Llib/thread.scm 675 */
BgL_res1929z00_4145 = 
BGL_CONDVAR_WAIT(BgL_cz00_4146, BgL_mz00_4147); }  else 
{ /* Llib/thread.scm 675 */
BgL_res1929z00_4145 = 
BGL_CONDVAR_TIMED_WAIT(BgL_cz00_4146, BgL_mz00_4147, BgL_timeoutz00_4148); } } 
return 
BBOOL(BgL_res1929z00_4145);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2582z00zz__threadz00, BGl_string2584z00zz__threadz00, 
BINT(
VECTOR_LENGTH(BgL_opt1239z00_91)));} } } } 

}



/* condition-variable-wait! */
BGL_EXPORTED_DEF bool_t BGl_conditionzd2variablezd2waitz12z12zz__threadz00(obj_t BgL_cz00_88, obj_t BgL_mz00_89, long BgL_timeoutz00_90)
{
{ /* Llib/thread.scm 674 */
if(
(BgL_timeoutz00_90==((long)0)))
{ /* Llib/thread.scm 675 */
return 
BGL_CONDVAR_WAIT(BgL_cz00_88, BgL_mz00_89);}  else 
{ /* Llib/thread.scm 675 */
return 
BGL_CONDVAR_TIMED_WAIT(BgL_cz00_88, BgL_mz00_89, BgL_timeoutz00_90);} } 

}



/* condition-variable-signal! */
BGL_EXPORTED_DEF bool_t BGl_conditionzd2variablezd2signalz12z12zz__threadz00(obj_t BgL_cz00_93)
{
{ /* Llib/thread.scm 682 */
return 
BGL_CONDVAR_SIGNAL(BgL_cz00_93);} 

}



/* &condition-variable-signal! */
obj_t BGl_z62conditionzd2variablezd2signalz12z70zz__threadz00(obj_t BgL_envz00_3280, obj_t BgL_cz00_3281)
{
{ /* Llib/thread.scm 682 */
{ /* Llib/thread.scm 683 */
bool_t BgL_tmpz00_4991;
{ /* Llib/thread.scm 683 */
obj_t BgL_auxz00_4992;
if(
BGL_CONDVARP(BgL_cz00_3281))
{ /* Llib/thread.scm 683 */
BgL_auxz00_4992 = BgL_cz00_3281
; }  else 
{ 
obj_t BgL_auxz00_4995;
BgL_auxz00_4995 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)29986)), BGl_string2586z00zz__threadz00, BGl_string2581z00zz__threadz00, BgL_cz00_3281); 
FAILURE(BgL_auxz00_4995,BFALSE,BFALSE);} 
BgL_tmpz00_4991 = 
BGl_conditionzd2variablezd2signalz12z12zz__threadz00(BgL_auxz00_4992); } 
return 
BBOOL(BgL_tmpz00_4991);} } 

}



/* condition-variable-broadcast! */
BGL_EXPORTED_DEF bool_t BGl_conditionzd2variablezd2broadcastz12z12zz__threadz00(obj_t BgL_cz00_94)
{
{ /* Llib/thread.scm 688 */
return 
BGL_CONDVAR_BROADCAST(BgL_cz00_94);} 

}



/* &condition-variable-broadcast! */
obj_t BGl_z62conditionzd2variablezd2broadcastz12z70zz__threadz00(obj_t BgL_envz00_3282, obj_t BgL_cz00_3283)
{
{ /* Llib/thread.scm 688 */
{ /* Llib/thread.scm 689 */
bool_t BgL_tmpz00_5002;
{ /* Llib/thread.scm 689 */
obj_t BgL_auxz00_5003;
if(
BGL_CONDVARP(BgL_cz00_3283))
{ /* Llib/thread.scm 689 */
BgL_auxz00_5003 = BgL_cz00_3283
; }  else 
{ 
obj_t BgL_auxz00_5006;
BgL_auxz00_5006 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)30283)), BGl_string2587z00zz__threadz00, BGl_string2581z00zz__threadz00, BgL_cz00_3283); 
FAILURE(BgL_auxz00_5006,BFALSE,BFALSE);} 
BgL_tmpz00_5002 = 
BGl_conditionzd2variablezd2broadcastz12z12zz__threadz00(BgL_auxz00_5003); } 
return 
BBOOL(BgL_tmpz00_5002);} } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__threadz00()
{
{ /* Llib/thread.scm 17 */
{ /* Llib/thread.scm 161 */
obj_t BgL_arg1337z00_1248;obj_t BgL_arg1338z00_1249;
{ /* Llib/thread.scm 161 */
obj_t BgL_v1142z00_1260;
BgL_v1142z00_1260 = 
create_vector(((long)1)); 
VECTOR_SET(BgL_v1142z00_1260,((long)0),
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol2590z00zz__threadz00, BGl_proc2589z00zz__threadz00, BGl_proc2588z00zz__threadz00, ((bool_t)1), ((bool_t)0), BFALSE, BFALSE, BGl_symbol2592z00zz__threadz00)); 
BgL_arg1337z00_1248 = BgL_v1142z00_1260; } 
{ /* Llib/thread.scm 161 */
obj_t BgL_v1143z00_1271;
BgL_v1143z00_1271 = 
create_vector(((long)0)); 
BgL_arg1338z00_1249 = BgL_v1143z00_1271; } 
BGl_threadzd2backendzd2zz__threadz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol2596z00zz__threadz00, BGl_symbol2597z00zz__threadz00, BGl_objectz00zz__objectz00, ((long)19580), BGl_proc2595z00zz__threadz00, BGl_proc2594z00zz__threadz00, BFALSE, BGl_proc2593z00zz__threadz00, BFALSE, BgL_arg1337z00_1248, BgL_arg1338z00_1249); } 
{ /* Llib/thread.scm 164 */
obj_t BgL_arg1352z00_1277;obj_t BgL_arg1353z00_1278;
{ /* Llib/thread.scm 164 */
obj_t BgL_v1144z00_1284;
BgL_v1144z00_1284 = 
create_vector(((long)3)); 
VECTOR_SET(BgL_v1144z00_1284,((long)0),
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol2590z00zz__threadz00, BGl_proc2601z00zz__threadz00, BGl_proc2600z00zz__threadz00, ((bool_t)0), ((bool_t)0), BFALSE, BGl_proc2599z00zz__threadz00, BGl_symbol2602z00zz__threadz00)); 
VECTOR_SET(BgL_v1144z00_1284,((long)1),
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol2606z00zz__threadz00, BGl_proc2605z00zz__threadz00, BGl_proc2604z00zz__threadz00, ((bool_t)0), ((bool_t)1), BFALSE, BFALSE, BGl_symbol2602z00zz__threadz00)); 
VECTOR_SET(BgL_v1144z00_1284,((long)2),
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol2610z00zz__threadz00, BGl_proc2609z00zz__threadz00, BGl_proc2608z00zz__threadz00, ((bool_t)0), ((bool_t)1), BFALSE, BFALSE, BGl_symbol2602z00zz__threadz00)); 
BgL_arg1352z00_1277 = BgL_v1144z00_1284; } 
{ /* Llib/thread.scm 164 */
obj_t BgL_v1145z00_1318;
BgL_v1145z00_1318 = 
create_vector(((long)2)); 
{ /* Llib/thread.scm 167 */
obj_t BgL_arg1376z00_1319;
{ /* Llib/thread.scm 167 */
obj_t BgL_arg1377z00_1320;
BgL_arg1377z00_1320 = 
MAKE_YOUNG_PAIR(BGl_proc2612z00zz__threadz00, BGl_proc2613z00zz__threadz00); 
BgL_arg1376z00_1319 = 
MAKE_YOUNG_PAIR(
BINT(((long)0)), BgL_arg1377z00_1320); } 
VECTOR_SET(BgL_v1145z00_1318,((long)0),BgL_arg1376z00_1319); } 
{ /* Llib/thread.scm 168 */
obj_t BgL_arg1384z00_1336;
{ /* Llib/thread.scm 168 */
obj_t BgL_arg1385z00_1337;
BgL_arg1385z00_1337 = 
MAKE_YOUNG_PAIR(BGl_proc2614z00zz__threadz00, BGl_proc2615z00zz__threadz00); 
BgL_arg1384z00_1336 = 
MAKE_YOUNG_PAIR(
BINT(((long)1)), BgL_arg1385z00_1337); } 
VECTOR_SET(BgL_v1145z00_1318,((long)1),BgL_arg1384z00_1336); } 
BgL_arg1353z00_1278 = BgL_v1145z00_1318; } 
BGl_threadz00zz__threadz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol2539z00zz__threadz00, BGl_symbol2597z00zz__threadz00, BGl_objectz00zz__objectz00, ((long)35644), BFALSE, BGl_proc2617z00zz__threadz00, BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00, BGl_proc2616z00zz__threadz00, BFALSE, BgL_arg1352z00_1277, BgL_arg1353z00_1278); } 
{ /* Llib/thread.scm 170 */
obj_t BgL_arg1395z00_1358;obj_t BgL_arg1396z00_1359;
{ /* Llib/thread.scm 170 */
obj_t BgL_v1146z00_1376;
BgL_v1146z00_1376 = 
create_vector(((long)5)); 
VECTOR_SET(BgL_v1146z00_1376,((long)0),
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol2620z00zz__threadz00, BGl_proc2619z00zz__threadz00, BGl_proc2618z00zz__threadz00, ((bool_t)1), ((bool_t)0), BFALSE, BFALSE, BGl_symbol2622z00zz__threadz00)); 
VECTOR_SET(BgL_v1146z00_1376,((long)1),
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol2626z00zz__threadz00, BGl_proc2625z00zz__threadz00, BGl_proc2624z00zz__threadz00, ((bool_t)0), ((bool_t)0), BFALSE, BGl_proc2623z00zz__threadz00, BGl_symbol2602z00zz__threadz00)); 
VECTOR_SET(BgL_v1146z00_1376,((long)2),
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol2631z00zz__threadz00, BGl_proc2630z00zz__threadz00, BGl_proc2629z00zz__threadz00, ((bool_t)0), ((bool_t)0), BFALSE, BGl_proc2628z00zz__threadz00, BGl_symbol2602z00zz__threadz00)); 
VECTOR_SET(BgL_v1146z00_1376,((long)3),
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol2636z00zz__threadz00, BGl_proc2635z00zz__threadz00, BGl_proc2634z00zz__threadz00, ((bool_t)0), ((bool_t)0), BFALSE, BGl_proc2633z00zz__threadz00, BGl_symbol2602z00zz__threadz00)); 
VECTOR_SET(BgL_v1146z00_1376,((long)4),
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol2641z00zz__threadz00, BGl_proc2640z00zz__threadz00, BGl_proc2639z00zz__threadz00, ((bool_t)0), ((bool_t)0), BFALSE, BGl_proc2638z00zz__threadz00, BGl_symbol2602z00zz__threadz00)); 
BgL_arg1395z00_1358 = BgL_v1146z00_1376; } 
{ /* Llib/thread.scm 170 */
obj_t BgL_v1147z00_1439;
BgL_v1147z00_1439 = 
create_vector(((long)0)); 
BgL_arg1396z00_1359 = BgL_v1147z00_1439; } 
BGl_nothreadz00zz__threadz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol2646z00zz__threadz00, BGl_symbol2597z00zz__threadz00, BGl_threadz00zz__threadz00, ((long)37909), BGl_proc2645z00zz__threadz00, BGl_proc2644z00zz__threadz00, BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00, BGl_proc2643z00zz__threadz00, BFALSE, BgL_arg1395z00_1358, BgL_arg1396z00_1359); } 
{ /* Llib/thread.scm 159 */
obj_t BgL_arg1441z00_1446;obj_t BgL_arg1442z00_1447;
{ /* Llib/thread.scm 159 */
obj_t BgL_v1148z00_1458;
BgL_v1148z00_1458 = 
create_vector(((long)0)); 
BgL_arg1441z00_1446 = BgL_v1148z00_1458; } 
{ /* Llib/thread.scm 159 */
obj_t BgL_v1149z00_1459;
BgL_v1149z00_1459 = 
create_vector(((long)0)); 
BgL_arg1442z00_1447 = BgL_v1149z00_1459; } 
return ( 
BGl_nothreadzd2backendzd2zz__threadz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol2650z00zz__threadz00, BGl_symbol2597z00zz__threadz00, BGl_threadzd2backendzd2zz__threadz00, ((long)1497), BGl_proc2649z00zz__threadz00, BGl_proc2648z00zz__threadz00, BFALSE, BGl_proc2647z00zz__threadz00, BFALSE, BgL_arg1441z00_1446, BgL_arg1442z00_1447), BUNSPEC) ;} } 

}



/* &<@anonymous:1447> */
obj_t BGl_z62zc3z04anonymousza31447ze3ze5zz__threadz00(obj_t BgL_envz00_3325, obj_t BgL_new1055z00_3326)
{
{ /* Llib/thread.scm 159 */
{ 
BgL_nothreadzd2backendzd2_bglt BgL_auxz00_5050;
{ /* Llib/thread.scm 159 */
BgL_nothreadzd2backendzd2_bglt BgL_new1055z00_4149;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1055z00_3326, BGl_nothreadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 159 */
BgL_new1055z00_4149 = 
((BgL_nothreadzd2backendzd2_bglt)BgL_new1055z00_3326); }  else 
{ 
obj_t BgL_auxz00_5054;
BgL_auxz00_5054 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)5661)), BGl_string2653z00zz__threadz00, BGl_string2651z00zz__threadz00, BgL_new1055z00_3326); 
FAILURE(BgL_auxz00_5054,BFALSE,BFALSE);} 
((((BgL_threadzd2backendzd2_bglt)COBJECT(
((BgL_threadzd2backendzd2_bglt)BgL_new1055z00_4149)))->BgL_namez00)=((obj_t)BGl_string2652z00zz__threadz00),BUNSPEC); 
BgL_auxz00_5050 = BgL_new1055z00_4149; } 
return 
((obj_t)BgL_auxz00_5050);} } 

}



/* &lambda1445 */
BgL_nothreadzd2backendzd2_bglt BGl_z62lambda1445z62zz__threadz00(obj_t BgL_envz00_3327)
{
{ /* Llib/thread.scm 159 */
{ /* Llib/thread.scm 159 */
BgL_nothreadzd2backendzd2_bglt BgL_new1054z00_4150;
BgL_new1054z00_4150 = 
((BgL_nothreadzd2backendzd2_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_nothreadzd2backendzd2_bgl) ))); 
{ /* Llib/thread.scm 159 */
long BgL_arg1446z00_4151;
{ /* Llib/thread.scm 159 */
long BgL_res1937z00_4152;
BgL_res1937z00_4152 = 
BGL_CLASS_INDEX(BGl_nothreadzd2backendzd2zz__threadz00); 
BgL_arg1446z00_4151 = BgL_res1937z00_4152; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1054z00_4150), BgL_arg1446z00_4151); } 
return BgL_new1054z00_4150;} } 

}



/* &lambda1443 */
BgL_nothreadzd2backendzd2_bglt BGl_z62lambda1443z62zz__threadz00(obj_t BgL_envz00_3328, obj_t BgL_name1053z00_3329)
{
{ /* Llib/thread.scm 159 */
{ /* Llib/thread.scm 159 */
obj_t BgL_name1053z00_4153;
if(
STRINGP(BgL_name1053z00_3329))
{ /* Llib/thread.scm 159 */
BgL_name1053z00_4153 = BgL_name1053z00_3329; }  else 
{ 
obj_t BgL_auxz00_5067;
BgL_auxz00_5067 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)5661)), BGl_string2654z00zz__threadz00, BGl_string2535z00zz__threadz00, BgL_name1053z00_3329); 
FAILURE(BgL_auxz00_5067,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 159 */
BgL_nothreadzd2backendzd2_bglt BgL_new1106z00_4154;
{ /* Llib/thread.scm 159 */
BgL_nothreadzd2backendzd2_bglt BgL_new1105z00_4155;
BgL_new1105z00_4155 = 
((BgL_nothreadzd2backendzd2_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_nothreadzd2backendzd2_bgl) ))); 
{ /* Llib/thread.scm 159 */
long BgL_arg1444z00_4156;
{ /* Llib/thread.scm 159 */
long BgL_res1936z00_4157;
BgL_res1936z00_4157 = 
BGL_CLASS_INDEX(BGl_nothreadzd2backendzd2zz__threadz00); 
BgL_arg1444z00_4156 = BgL_res1936z00_4157; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1105z00_4155), BgL_arg1444z00_4156); } 
BgL_new1106z00_4154 = BgL_new1105z00_4155; } 
((((BgL_threadzd2backendzd2_bglt)COBJECT(
((BgL_threadzd2backendzd2_bglt)BgL_new1106z00_4154)))->BgL_namez00)=((obj_t)BgL_name1053z00_4153),BUNSPEC); 
return BgL_new1106z00_4154;} } } 

}



/* &<@anonymous:1402> */
obj_t BGl_z62zc3z04anonymousza31402ze3ze5zz__threadz00(obj_t BgL_envz00_3330, obj_t BgL_new1051z00_3331)
{
{ /* Llib/thread.scm 170 */
{ 
BgL_nothreadz00_bglt BgL_auxz00_5077;
{ /* Llib/thread.scm 170 */
BgL_nothreadz00_bglt BgL_new1051z00_4158;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1051z00_3331, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 170 */
BgL_new1051z00_4158 = 
((BgL_nothreadz00_bglt)BgL_new1051z00_3331); }  else 
{ 
obj_t BgL_auxz00_5081;
BgL_auxz00_5081 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)6013)), BGl_string2655z00zz__threadz00, BGl_string2526z00zz__threadz00, BgL_new1051z00_3331); 
FAILURE(BgL_auxz00_5081,BFALSE,BFALSE);} 
((((BgL_threadz00_bglt)COBJECT(
((BgL_threadz00_bglt)BgL_new1051z00_4158)))->BgL_namez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_nothreadz00_bglt)COBJECT(BgL_new1051z00_4158))->BgL_bodyz00)=((obj_t)BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00),BUNSPEC); 
((((BgL_nothreadz00_bglt)COBJECT(BgL_new1051z00_4158))->BgL_z52specificz52)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_nothreadz00_bglt)COBJECT(BgL_new1051z00_4158))->BgL_z52cleanupz52)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_nothreadz00_bglt)COBJECT(BgL_new1051z00_4158))->BgL_endzd2resultzd2)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_nothreadz00_bglt)COBJECT(BgL_new1051z00_4158))->BgL_endzd2exceptionzd2)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_5077 = BgL_new1051z00_4158; } 
return 
((obj_t)BgL_auxz00_5077);} } 

}



/* &lambda1400 */
BgL_nothreadz00_bglt BGl_z62lambda1400z62zz__threadz00(obj_t BgL_envz00_3332)
{
{ /* Llib/thread.scm 170 */
{ /* Llib/thread.scm 170 */
BgL_nothreadz00_bglt BgL_new1050z00_4159;
BgL_new1050z00_4159 = 
((BgL_nothreadz00_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_nothreadz00_bgl) ))); 
{ /* Llib/thread.scm 170 */
long BgL_arg1401z00_4160;
{ /* Llib/thread.scm 170 */
long BgL_res1935z00_4161;
BgL_res1935z00_4161 = 
BGL_CLASS_INDEX(BGl_nothreadz00zz__threadz00); 
BgL_arg1401z00_4160 = BgL_res1935z00_4161; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1050z00_4159), BgL_arg1401z00_4160); } 
return BgL_new1050z00_4159;} } 

}



/* &lambda1397 */
BgL_nothreadz00_bglt BGl_z62lambda1397z62zz__threadz00(obj_t BgL_envz00_3333, obj_t BgL_name1044z00_3334, obj_t BgL_body1045z00_3335, obj_t BgL_z52specific1046z52_3336, obj_t BgL_z52cleanup1047z52_3337, obj_t BgL_endzd2result1048zd2_3338, obj_t BgL_endzd2exception1049zd2_3339)
{
{ /* Llib/thread.scm 170 */
{ /* Llib/thread.scm 170 */
obj_t BgL_body1045z00_4162;
if(
PROCEDUREP(BgL_body1045z00_3335))
{ /* Llib/thread.scm 170 */
BgL_body1045z00_4162 = BgL_body1045z00_3335; }  else 
{ 
obj_t BgL_auxz00_5099;
BgL_auxz00_5099 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)6013)), BGl_string2663z00zz__threadz00, BGl_string2542z00zz__threadz00, BgL_body1045z00_3335); 
FAILURE(BgL_auxz00_5099,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 170 */
BgL_nothreadz00_bglt BgL_new1104z00_4163;
{ /* Llib/thread.scm 170 */
BgL_nothreadz00_bglt BgL_new1103z00_4164;
BgL_new1103z00_4164 = 
((BgL_nothreadz00_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_nothreadz00_bgl) ))); 
{ /* Llib/thread.scm 170 */
long BgL_arg1399z00_4165;
{ /* Llib/thread.scm 170 */
long BgL_res1934z00_4166;
BgL_res1934z00_4166 = 
BGL_CLASS_INDEX(BGl_nothreadz00zz__threadz00); 
BgL_arg1399z00_4165 = BgL_res1934z00_4166; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1103z00_4164), BgL_arg1399z00_4165); } 
BgL_new1104z00_4163 = BgL_new1103z00_4164; } 
((((BgL_threadz00_bglt)COBJECT(
((BgL_threadz00_bglt)BgL_new1104z00_4163)))->BgL_namez00)=((obj_t)BgL_name1044z00_3334),BUNSPEC); 
((((BgL_nothreadz00_bglt)COBJECT(BgL_new1104z00_4163))->BgL_bodyz00)=((obj_t)BgL_body1045z00_4162),BUNSPEC); 
((((BgL_nothreadz00_bglt)COBJECT(BgL_new1104z00_4163))->BgL_z52specificz52)=((obj_t)BgL_z52specific1046z52_3336),BUNSPEC); 
((((BgL_nothreadz00_bglt)COBJECT(BgL_new1104z00_4163))->BgL_z52cleanupz52)=((obj_t)BgL_z52cleanup1047z52_3337),BUNSPEC); 
((((BgL_nothreadz00_bglt)COBJECT(BgL_new1104z00_4163))->BgL_endzd2resultzd2)=((obj_t)BgL_endzd2result1048zd2_3338),BUNSPEC); 
((((BgL_nothreadz00_bglt)COBJECT(BgL_new1104z00_4163))->BgL_endzd2exceptionzd2)=((obj_t)BgL_endzd2exception1049zd2_3339),BUNSPEC); 
{ /* Llib/thread.scm 170 */
obj_t BgL_fun1398z00_4167;
BgL_fun1398z00_4167 = 
BGl_classzd2constructorzd2zz__objectz00(BGl_nothreadz00zz__threadz00); 
{ /* Llib/thread.scm 170 */
obj_t BgL_funz00_4168;
if(
PROCEDUREP(BgL_fun1398z00_4167))
{ /* Llib/thread.scm 170 */
BgL_funz00_4168 = BgL_fun1398z00_4167; }  else 
{ 
obj_t BgL_auxz00_5117;
BgL_auxz00_5117 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)6013)), BGl_string2656z00zz__threadz00, BGl_string2542z00zz__threadz00, BgL_fun1398z00_4167); 
FAILURE(BgL_auxz00_5117,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4168, ((long)1)))
{ /* Llib/thread.scm 170 */
PROCEDURE_ENTRY(BgL_funz00_4168)(BgL_fun1398z00_4167, 
((obj_t)BgL_new1104z00_4163), BEOA); }  else 
{ /* Llib/thread.scm 170 */
FAILURE(BGl_string2657z00zz__threadz00,BGl_list2658z00zz__threadz00,BgL_funz00_4168);} } } 
return BgL_new1104z00_4163;} } } 

}



/* &<@anonymous:1437> */
obj_t BGl_z62zc3z04anonymousza31437ze3ze5zz__threadz00(obj_t BgL_envz00_3340)
{
{ /* Llib/thread.scm 170 */
return BUNSPEC;} 

}



/* &lambda1436 */
obj_t BGl_z62lambda1436z62zz__threadz00(obj_t BgL_envz00_3341, obj_t BgL_oz00_3342, obj_t BgL_vz00_3343)
{
{ /* Llib/thread.scm 170 */
{ /* Llib/thread.scm 170 */
BgL_nothreadz00_bglt BgL_oz00_4169;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3342, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 170 */
BgL_oz00_4169 = 
((BgL_nothreadz00_bglt)BgL_oz00_3342); }  else 
{ 
obj_t BgL_auxz00_5132;
BgL_auxz00_5132 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)6013)), BGl_string2664z00zz__threadz00, BGl_string2526z00zz__threadz00, BgL_oz00_3342); 
FAILURE(BgL_auxz00_5132,BFALSE,BFALSE);} 
return 
((((BgL_nothreadz00_bglt)COBJECT(BgL_oz00_4169))->BgL_endzd2exceptionzd2)=((obj_t)BgL_vz00_3343),BUNSPEC);} } 

}



/* &lambda1435 */
obj_t BGl_z62lambda1435z62zz__threadz00(obj_t BgL_envz00_3344, obj_t BgL_oz00_3345)
{
{ /* Llib/thread.scm 170 */
{ /* Llib/thread.scm 170 */
BgL_nothreadz00_bglt BgL_oz00_4170;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3345, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 170 */
BgL_oz00_4170 = 
((BgL_nothreadz00_bglt)BgL_oz00_3345); }  else 
{ 
obj_t BgL_auxz00_5140;
BgL_auxz00_5140 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)6013)), BGl_string2665z00zz__threadz00, BGl_string2526z00zz__threadz00, BgL_oz00_3345); 
FAILURE(BgL_auxz00_5140,BFALSE,BFALSE);} 
return 
(((BgL_nothreadz00_bglt)COBJECT(BgL_oz00_4170))->BgL_endzd2exceptionzd2);} } 

}



/* &<@anonymous:1430> */
obj_t BGl_z62zc3z04anonymousza31430ze3ze5zz__threadz00(obj_t BgL_envz00_3346)
{
{ /* Llib/thread.scm 170 */
return BUNSPEC;} 

}



/* &lambda1429 */
obj_t BGl_z62lambda1429z62zz__threadz00(obj_t BgL_envz00_3347, obj_t BgL_oz00_3348, obj_t BgL_vz00_3349)
{
{ /* Llib/thread.scm 170 */
{ /* Llib/thread.scm 170 */
BgL_nothreadz00_bglt BgL_oz00_4171;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3348, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 170 */
BgL_oz00_4171 = 
((BgL_nothreadz00_bglt)BgL_oz00_3348); }  else 
{ 
obj_t BgL_auxz00_5148;
BgL_auxz00_5148 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)6013)), BGl_string2666z00zz__threadz00, BGl_string2526z00zz__threadz00, BgL_oz00_3348); 
FAILURE(BgL_auxz00_5148,BFALSE,BFALSE);} 
return 
((((BgL_nothreadz00_bglt)COBJECT(BgL_oz00_4171))->BgL_endzd2resultzd2)=((obj_t)BgL_vz00_3349),BUNSPEC);} } 

}



/* &lambda1428 */
obj_t BGl_z62lambda1428z62zz__threadz00(obj_t BgL_envz00_3350, obj_t BgL_oz00_3351)
{
{ /* Llib/thread.scm 170 */
{ /* Llib/thread.scm 170 */
BgL_nothreadz00_bglt BgL_oz00_4172;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3351, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 170 */
BgL_oz00_4172 = 
((BgL_nothreadz00_bglt)BgL_oz00_3351); }  else 
{ 
obj_t BgL_auxz00_5156;
BgL_auxz00_5156 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)6013)), BGl_string2667z00zz__threadz00, BGl_string2526z00zz__threadz00, BgL_oz00_3351); 
FAILURE(BgL_auxz00_5156,BFALSE,BFALSE);} 
return 
(((BgL_nothreadz00_bglt)COBJECT(BgL_oz00_4172))->BgL_endzd2resultzd2);} } 

}



/* &<@anonymous:1422> */
obj_t BGl_z62zc3z04anonymousza31422ze3ze5zz__threadz00(obj_t BgL_envz00_3352)
{
{ /* Llib/thread.scm 170 */
return 
BBOOL(((bool_t)0));} 

}



/* &lambda1421 */
obj_t BGl_z62lambda1421z62zz__threadz00(obj_t BgL_envz00_3353, obj_t BgL_oz00_3354, obj_t BgL_vz00_3355)
{
{ /* Llib/thread.scm 170 */
{ /* Llib/thread.scm 170 */
BgL_nothreadz00_bglt BgL_oz00_4173;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3354, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 170 */
BgL_oz00_4173 = 
((BgL_nothreadz00_bglt)BgL_oz00_3354); }  else 
{ 
obj_t BgL_auxz00_5165;
BgL_auxz00_5165 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)6013)), BGl_string2668z00zz__threadz00, BGl_string2526z00zz__threadz00, BgL_oz00_3354); 
FAILURE(BgL_auxz00_5165,BFALSE,BFALSE);} 
return 
((((BgL_nothreadz00_bglt)COBJECT(BgL_oz00_4173))->BgL_z52cleanupz52)=((obj_t)BgL_vz00_3355),BUNSPEC);} } 

}



/* &lambda1420 */
obj_t BGl_z62lambda1420z62zz__threadz00(obj_t BgL_envz00_3356, obj_t BgL_oz00_3357)
{
{ /* Llib/thread.scm 170 */
{ /* Llib/thread.scm 170 */
BgL_nothreadz00_bglt BgL_oz00_4174;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3357, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 170 */
BgL_oz00_4174 = 
((BgL_nothreadz00_bglt)BgL_oz00_3357); }  else 
{ 
obj_t BgL_auxz00_5173;
BgL_auxz00_5173 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)6013)), BGl_string2669z00zz__threadz00, BGl_string2526z00zz__threadz00, BgL_oz00_3357); 
FAILURE(BgL_auxz00_5173,BFALSE,BFALSE);} 
return 
(((BgL_nothreadz00_bglt)COBJECT(BgL_oz00_4174))->BgL_z52cleanupz52);} } 

}



/* &<@anonymous:1415> */
obj_t BGl_z62zc3z04anonymousza31415ze3ze5zz__threadz00(obj_t BgL_envz00_3358)
{
{ /* Llib/thread.scm 170 */
return BUNSPEC;} 

}



/* &lambda1414 */
obj_t BGl_z62lambda1414z62zz__threadz00(obj_t BgL_envz00_3359, obj_t BgL_oz00_3360, obj_t BgL_vz00_3361)
{
{ /* Llib/thread.scm 170 */
{ /* Llib/thread.scm 170 */
BgL_nothreadz00_bglt BgL_oz00_4175;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3360, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 170 */
BgL_oz00_4175 = 
((BgL_nothreadz00_bglt)BgL_oz00_3360); }  else 
{ 
obj_t BgL_auxz00_5181;
BgL_auxz00_5181 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)6013)), BGl_string2670z00zz__threadz00, BGl_string2526z00zz__threadz00, BgL_oz00_3360); 
FAILURE(BgL_auxz00_5181,BFALSE,BFALSE);} 
return 
((((BgL_nothreadz00_bglt)COBJECT(BgL_oz00_4175))->BgL_z52specificz52)=((obj_t)BgL_vz00_3361),BUNSPEC);} } 

}



/* &lambda1413 */
obj_t BGl_z62lambda1413z62zz__threadz00(obj_t BgL_envz00_3362, obj_t BgL_oz00_3363)
{
{ /* Llib/thread.scm 170 */
{ /* Llib/thread.scm 170 */
BgL_nothreadz00_bglt BgL_oz00_4176;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3363, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 170 */
BgL_oz00_4176 = 
((BgL_nothreadz00_bglt)BgL_oz00_3363); }  else 
{ 
obj_t BgL_auxz00_5189;
BgL_auxz00_5189 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)6013)), BGl_string2671z00zz__threadz00, BGl_string2526z00zz__threadz00, BgL_oz00_3363); 
FAILURE(BgL_auxz00_5189,BFALSE,BFALSE);} 
return 
(((BgL_nothreadz00_bglt)COBJECT(BgL_oz00_4176))->BgL_z52specificz52);} } 

}



/* &lambda1408 */
obj_t BGl_z62lambda1408z62zz__threadz00(obj_t BgL_envz00_3364, obj_t BgL_oz00_3365, obj_t BgL_vz00_3366)
{
{ /* Llib/thread.scm 170 */
{ /* Llib/thread.scm 170 */
BgL_nothreadz00_bglt BgL_oz00_4177;obj_t BgL_vz00_4178;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3365, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 170 */
BgL_oz00_4177 = 
((BgL_nothreadz00_bglt)BgL_oz00_3365); }  else 
{ 
obj_t BgL_auxz00_5197;
BgL_auxz00_5197 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)6013)), BGl_string2672z00zz__threadz00, BGl_string2526z00zz__threadz00, BgL_oz00_3365); 
FAILURE(BgL_auxz00_5197,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_vz00_3366))
{ /* Llib/thread.scm 170 */
BgL_vz00_4178 = BgL_vz00_3366; }  else 
{ 
obj_t BgL_auxz00_5203;
BgL_auxz00_5203 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)6013)), BGl_string2672z00zz__threadz00, BGl_string2542z00zz__threadz00, BgL_vz00_3366); 
FAILURE(BgL_auxz00_5203,BFALSE,BFALSE);} 
return 
((((BgL_nothreadz00_bglt)COBJECT(BgL_oz00_4177))->BgL_bodyz00)=((obj_t)BgL_vz00_4178),BUNSPEC);} } 

}



/* &lambda1407 */
obj_t BGl_z62lambda1407z62zz__threadz00(obj_t BgL_envz00_3367, obj_t BgL_oz00_3368)
{
{ /* Llib/thread.scm 170 */
{ /* Llib/thread.scm 170 */
BgL_nothreadz00_bglt BgL_oz00_4179;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3368, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 170 */
BgL_oz00_4179 = 
((BgL_nothreadz00_bglt)BgL_oz00_3368); }  else 
{ 
obj_t BgL_auxz00_5211;
BgL_auxz00_5211 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)6013)), BGl_string2673z00zz__threadz00, BGl_string2526z00zz__threadz00, BgL_oz00_3368); 
FAILURE(BgL_auxz00_5211,BFALSE,BFALSE);} 
return 
(((BgL_nothreadz00_bglt)COBJECT(BgL_oz00_4179))->BgL_bodyz00);} } 

}



/* &<@anonymous:1356> */
obj_t BGl_z62zc3z04anonymousza31356ze3ze5zz__threadz00(obj_t BgL_envz00_3369, obj_t BgL_new1042z00_3370)
{
{ /* Llib/thread.scm 164 */
{ 
BgL_threadz00_bglt BgL_auxz00_5216;
{ /* Llib/thread.scm 164 */
BgL_threadz00_bglt BgL_new1042z00_4180;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1042z00_3370, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 164 */
BgL_new1042z00_4180 = 
((BgL_threadz00_bglt)BgL_new1042z00_3370); }  else 
{ 
obj_t BgL_auxz00_5220;
BgL_auxz00_5220 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)5779)), BGl_string2674z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_new1042z00_3370); 
FAILURE(BgL_auxz00_5220,BFALSE,BFALSE);} 
((((BgL_threadz00_bglt)COBJECT(BgL_new1042z00_4180))->BgL_namez00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_5216 = BgL_new1042z00_4180; } 
return 
((obj_t)BgL_auxz00_5216);} } 

}



/* &lambda1354 */
BgL_threadz00_bglt BGl_z62lambda1354z62zz__threadz00(obj_t BgL_envz00_3371)
{
{ /* Llib/thread.scm 164 */
{ /* Llib/thread.scm 164 */
BgL_threadz00_bglt BgL_new1041z00_4181;
BgL_new1041z00_4181 = 
((BgL_threadz00_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_threadz00_bgl) ))); 
{ /* Llib/thread.scm 164 */
long BgL_arg1355z00_4182;
{ /* Llib/thread.scm 164 */
long BgL_res1933z00_4183;
BgL_res1933z00_4183 = 
BGL_CLASS_INDEX(BGl_threadz00zz__threadz00); 
BgL_arg1355z00_4182 = BgL_res1933z00_4183; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1041z00_4181), BgL_arg1355z00_4182); } 
return BgL_new1041z00_4181;} } 

}



/* &<@anonymous:1390> */
obj_t BGl_z62zc3z04anonymousza31390ze3ze5zz__threadz00(obj_t BgL_envz00_3372, obj_t BgL_oz00_3373, obj_t BgL_vz00_3374)
{
{ /* Llib/thread.scm 168 */
{ /* Llib/thread.scm 168 */
BgL_threadz00_bglt BgL_auxz00_5230;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3373, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 168 */
BgL_auxz00_5230 = 
((BgL_threadz00_bglt)BgL_oz00_3373)
; }  else 
{ 
obj_t BgL_auxz00_5234;
BgL_auxz00_5234 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)5949)), BGl_string2675z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_oz00_3373); 
FAILURE(BgL_auxz00_5234,BFALSE,BFALSE);} 
return 
BGl_threadzd2cleanupzd2setz12z12zz__threadz00(BgL_auxz00_5230, BgL_vz00_3374);} } 

}



/* &<@anonymous:1388> */
obj_t BGl_z62zc3z04anonymousza31388ze3ze5zz__threadz00(obj_t BgL_envz00_3375, obj_t BgL_oz00_3376)
{
{ /* Llib/thread.scm 168 */
{ /* Llib/thread.scm 168 */
BgL_threadz00_bglt BgL_auxz00_5239;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3376, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 168 */
BgL_auxz00_5239 = 
((BgL_threadz00_bglt)BgL_oz00_3376)
; }  else 
{ 
obj_t BgL_auxz00_5243;
BgL_auxz00_5243 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)5949)), BGl_string2676z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_oz00_3376); 
FAILURE(BgL_auxz00_5243,BFALSE,BFALSE);} 
return 
BGl_threadzd2cleanupzd2zz__threadz00(BgL_auxz00_5239);} } 

}



/* &<@anonymous:1382> */
obj_t BGl_z62zc3z04anonymousza31382ze3ze5zz__threadz00(obj_t BgL_envz00_3377, obj_t BgL_oz00_3378, obj_t BgL_vz00_3379)
{
{ /* Llib/thread.scm 167 */
{ /* Llib/thread.scm 167 */
BgL_threadz00_bglt BgL_auxz00_5248;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3378, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 167 */
BgL_auxz00_5248 = 
((BgL_threadz00_bglt)BgL_oz00_3378)
; }  else 
{ 
obj_t BgL_auxz00_5252;
BgL_auxz00_5252 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)5881)), BGl_string2677z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_oz00_3378); 
FAILURE(BgL_auxz00_5252,BFALSE,BFALSE);} 
return 
BGl_threadzd2specificzd2setz12z12zz__threadz00(BgL_auxz00_5248, BgL_vz00_3379);} } 

}



/* &<@anonymous:1380> */
obj_t BGl_z62zc3z04anonymousza31380ze3ze5zz__threadz00(obj_t BgL_envz00_3380, obj_t BgL_oz00_3381)
{
{ /* Llib/thread.scm 167 */
{ /* Llib/thread.scm 167 */
BgL_threadz00_bglt BgL_auxz00_5257;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3381, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 167 */
BgL_auxz00_5257 = 
((BgL_threadz00_bglt)BgL_oz00_3381)
; }  else 
{ 
obj_t BgL_auxz00_5261;
BgL_auxz00_5261 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)5881)), BGl_string2678z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_oz00_3381); 
FAILURE(BgL_auxz00_5261,BFALSE,BFALSE);} 
return 
BGl_threadzd2specificzd2zz__threadz00(BgL_auxz00_5257);} } 

}



/* &<@anonymous:1375> */
obj_t BGl_z62zc3z04anonymousza31375ze3ze5zz__threadz00(obj_t BgL_envz00_3382, obj_t BgL_oz00_3383, obj_t BgL_vz00_3384)
{
{ /* Llib/thread.scm 164 */
{ /* Llib/thread.scm 164 */
BgL_objectz00_bglt BgL_auxz00_5266;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3383, BGl_objectz00zz__objectz00))
{ /* Llib/thread.scm 164 */
BgL_auxz00_5266 = 
((BgL_objectz00_bglt)BgL_oz00_3383)
; }  else 
{ 
obj_t BgL_auxz00_5270;
BgL_auxz00_5270 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)5779)), BGl_string2679z00zz__threadz00, BGl_string2680z00zz__threadz00, BgL_oz00_3383); 
FAILURE(BgL_auxz00_5270,BFALSE,BFALSE);} 
return 
BGl_callzd2virtualzd2setterz00zz__objectz00(BgL_auxz00_5266, 
(int)(((long)1)), BgL_vz00_3384);} } 

}



/* &<@anonymous:1374> */
obj_t BGl_z62zc3z04anonymousza31374ze3ze5zz__threadz00(obj_t BgL_envz00_3385, obj_t BgL_oz00_3386)
{
{ /* Llib/thread.scm 164 */
{ /* Llib/thread.scm 164 */
BgL_objectz00_bglt BgL_auxz00_5276;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3386, BGl_objectz00zz__objectz00))
{ /* Llib/thread.scm 164 */
BgL_auxz00_5276 = 
((BgL_objectz00_bglt)BgL_oz00_3386)
; }  else 
{ 
obj_t BgL_auxz00_5280;
BgL_auxz00_5280 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)5779)), BGl_string2681z00zz__threadz00, BGl_string2680z00zz__threadz00, BgL_oz00_3386); 
FAILURE(BgL_auxz00_5280,BFALSE,BFALSE);} 
return 
BGl_callzd2virtualzd2getterz00zz__objectz00(BgL_auxz00_5276, 
(int)(((long)1)));} } 

}



/* &<@anonymous:1370> */
obj_t BGl_z62zc3z04anonymousza31370ze3ze5zz__threadz00(obj_t BgL_envz00_3387, obj_t BgL_oz00_3388, obj_t BgL_vz00_3389)
{
{ /* Llib/thread.scm 164 */
{ /* Llib/thread.scm 164 */
BgL_objectz00_bglt BgL_auxz00_5286;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3388, BGl_objectz00zz__objectz00))
{ /* Llib/thread.scm 164 */
BgL_auxz00_5286 = 
((BgL_objectz00_bglt)BgL_oz00_3388)
; }  else 
{ 
obj_t BgL_auxz00_5290;
BgL_auxz00_5290 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)5779)), BGl_string2682z00zz__threadz00, BGl_string2680z00zz__threadz00, BgL_oz00_3388); 
FAILURE(BgL_auxz00_5290,BFALSE,BFALSE);} 
return 
BGl_callzd2virtualzd2setterz00zz__objectz00(BgL_auxz00_5286, 
(int)(((long)0)), BgL_vz00_3389);} } 

}



/* &<@anonymous:1369> */
obj_t BGl_z62zc3z04anonymousza31369ze3ze5zz__threadz00(obj_t BgL_envz00_3390, obj_t BgL_oz00_3391)
{
{ /* Llib/thread.scm 164 */
{ /* Llib/thread.scm 164 */
BgL_objectz00_bglt BgL_auxz00_5296;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3391, BGl_objectz00zz__objectz00))
{ /* Llib/thread.scm 164 */
BgL_auxz00_5296 = 
((BgL_objectz00_bglt)BgL_oz00_3391)
; }  else 
{ 
obj_t BgL_auxz00_5300;
BgL_auxz00_5300 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)5779)), BGl_string2683z00zz__threadz00, BGl_string2680z00zz__threadz00, BgL_oz00_3391); 
FAILURE(BgL_auxz00_5300,BFALSE,BFALSE);} 
return 
BGl_callzd2virtualzd2getterz00zz__objectz00(BgL_auxz00_5296, 
(int)(((long)0)));} } 

}



/* &<@anonymous:1364> */
obj_t BGl_z62zc3z04anonymousza31364ze3ze5zz__threadz00(obj_t BgL_envz00_3392)
{
{ /* Llib/thread.scm 164 */
return 
BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol2539z00zz__threadz00);} 

}



/* &lambda1363 */
obj_t BGl_z62lambda1363z62zz__threadz00(obj_t BgL_envz00_3393, obj_t BgL_oz00_3394, obj_t BgL_vz00_3395)
{
{ /* Llib/thread.scm 164 */
{ /* Llib/thread.scm 164 */
BgL_threadz00_bglt BgL_oz00_4184;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3394, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 164 */
BgL_oz00_4184 = 
((BgL_threadz00_bglt)BgL_oz00_3394); }  else 
{ 
obj_t BgL_auxz00_5310;
BgL_auxz00_5310 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)5779)), BGl_string2684z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_oz00_3394); 
FAILURE(BgL_auxz00_5310,BFALSE,BFALSE);} 
return 
((((BgL_threadz00_bglt)COBJECT(BgL_oz00_4184))->BgL_namez00)=((obj_t)BgL_vz00_3395),BUNSPEC);} } 

}



/* &lambda1362 */
obj_t BGl_z62lambda1362z62zz__threadz00(obj_t BgL_envz00_3396, obj_t BgL_oz00_3397)
{
{ /* Llib/thread.scm 164 */
{ /* Llib/thread.scm 164 */
BgL_threadz00_bglt BgL_oz00_4185;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3397, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 164 */
BgL_oz00_4185 = 
((BgL_threadz00_bglt)BgL_oz00_3397); }  else 
{ 
obj_t BgL_auxz00_5318;
BgL_auxz00_5318 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)5779)), BGl_string2685z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_oz00_3397); 
FAILURE(BgL_auxz00_5318,BFALSE,BFALSE);} 
return 
(((BgL_threadz00_bglt)COBJECT(BgL_oz00_4185))->BgL_namez00);} } 

}



/* &<@anonymous:1343> */
obj_t BGl_z62zc3z04anonymousza31343ze3ze5zz__threadz00(obj_t BgL_envz00_3398, obj_t BgL_new1039z00_3399)
{
{ /* Llib/thread.scm 161 */
{ 
BgL_threadzd2backendzd2_bglt BgL_auxz00_5323;
{ /* Llib/thread.scm 161 */
BgL_threadzd2backendzd2_bglt BgL_new1039z00_4186;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1039z00_3399, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 161 */
BgL_new1039z00_4186 = 
((BgL_threadzd2backendzd2_bglt)BgL_new1039z00_3399); }  else 
{ 
obj_t BgL_auxz00_5327;
BgL_auxz00_5327 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)5716)), BGl_string2686z00zz__threadz00, BGl_string2529z00zz__threadz00, BgL_new1039z00_3399); 
FAILURE(BgL_auxz00_5327,BFALSE,BFALSE);} 
((((BgL_threadzd2backendzd2_bglt)COBJECT(BgL_new1039z00_4186))->BgL_namez00)=((obj_t)BGl_string2652z00zz__threadz00),BUNSPEC); 
BgL_auxz00_5323 = BgL_new1039z00_4186; } 
return 
((obj_t)BgL_auxz00_5323);} } 

}



/* &lambda1341 */
BgL_threadzd2backendzd2_bglt BGl_z62lambda1341z62zz__threadz00(obj_t BgL_envz00_3400)
{
{ /* Llib/thread.scm 161 */
{ /* Llib/thread.scm 161 */
BgL_threadzd2backendzd2_bglt BgL_new1038z00_4187;
BgL_new1038z00_4187 = 
((BgL_threadzd2backendzd2_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_threadzd2backendzd2_bgl) ))); 
{ /* Llib/thread.scm 161 */
long BgL_arg1342z00_4188;
{ /* Llib/thread.scm 161 */
long BgL_res1932z00_4189;
BgL_res1932z00_4189 = 
BGL_CLASS_INDEX(BGl_threadzd2backendzd2zz__threadz00); 
BgL_arg1342z00_4188 = BgL_res1932z00_4189; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1038z00_4187), BgL_arg1342z00_4188); } 
return BgL_new1038z00_4187;} } 

}



/* &lambda1339 */
BgL_threadzd2backendzd2_bglt BGl_z62lambda1339z62zz__threadz00(obj_t BgL_envz00_3401, obj_t BgL_name1037z00_3402)
{
{ /* Llib/thread.scm 161 */
{ /* Llib/thread.scm 161 */
obj_t BgL_name1037z00_4190;
if(
STRINGP(BgL_name1037z00_3402))
{ /* Llib/thread.scm 161 */
BgL_name1037z00_4190 = BgL_name1037z00_3402; }  else 
{ 
obj_t BgL_auxz00_5339;
BgL_auxz00_5339 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)5716)), BGl_string2687z00zz__threadz00, BGl_string2535z00zz__threadz00, BgL_name1037z00_3402); 
FAILURE(BgL_auxz00_5339,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 161 */
BgL_threadzd2backendzd2_bglt BgL_new1102z00_4191;
{ /* Llib/thread.scm 161 */
BgL_threadzd2backendzd2_bglt BgL_new1100z00_4192;
BgL_new1100z00_4192 = 
((BgL_threadzd2backendzd2_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_threadzd2backendzd2_bgl) ))); 
{ /* Llib/thread.scm 161 */
long BgL_arg1340z00_4193;
{ /* Llib/thread.scm 161 */
long BgL_res1931z00_4194;
BgL_res1931z00_4194 = 
BGL_CLASS_INDEX(BGl_threadzd2backendzd2zz__threadz00); 
BgL_arg1340z00_4193 = BgL_res1931z00_4194; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1100z00_4192), BgL_arg1340z00_4193); } 
BgL_new1102z00_4191 = BgL_new1100z00_4192; } 
((((BgL_threadzd2backendzd2_bglt)COBJECT(BgL_new1102z00_4191))->BgL_namez00)=((obj_t)BgL_name1037z00_4190),BUNSPEC); 
return BgL_new1102z00_4191;} } } 

}



/* &lambda1348 */
obj_t BGl_z62lambda1348z62zz__threadz00(obj_t BgL_envz00_3403, obj_t BgL_oz00_3404, obj_t BgL_vz00_3405)
{
{ /* Llib/thread.scm 161 */
{ /* Llib/thread.scm 161 */
BgL_threadzd2backendzd2_bglt BgL_oz00_4195;obj_t BgL_vz00_4196;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3404, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 161 */
BgL_oz00_4195 = 
((BgL_threadzd2backendzd2_bglt)BgL_oz00_3404); }  else 
{ 
obj_t BgL_auxz00_5351;
BgL_auxz00_5351 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)5716)), BGl_string2688z00zz__threadz00, BGl_string2529z00zz__threadz00, BgL_oz00_3404); 
FAILURE(BgL_auxz00_5351,BFALSE,BFALSE);} 
if(
STRINGP(BgL_vz00_3405))
{ /* Llib/thread.scm 161 */
BgL_vz00_4196 = BgL_vz00_3405; }  else 
{ 
obj_t BgL_auxz00_5357;
BgL_auxz00_5357 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)5716)), BGl_string2688z00zz__threadz00, BGl_string2535z00zz__threadz00, BgL_vz00_3405); 
FAILURE(BgL_auxz00_5357,BFALSE,BFALSE);} 
return 
((((BgL_threadzd2backendzd2_bglt)COBJECT(BgL_oz00_4195))->BgL_namez00)=((obj_t)BgL_vz00_4196),BUNSPEC);} } 

}



/* &lambda1347 */
obj_t BGl_z62lambda1347z62zz__threadz00(obj_t BgL_envz00_3406, obj_t BgL_oz00_3407)
{
{ /* Llib/thread.scm 161 */
{ /* Llib/thread.scm 161 */
BgL_threadzd2backendzd2_bglt BgL_oz00_4197;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3407, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 161 */
BgL_oz00_4197 = 
((BgL_threadzd2backendzd2_bglt)BgL_oz00_3407); }  else 
{ 
obj_t BgL_auxz00_5365;
BgL_auxz00_5365 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)5716)), BGl_string2689z00zz__threadz00, BGl_string2529z00zz__threadz00, BgL_oz00_3407); 
FAILURE(BgL_auxz00_5365,BFALSE,BFALSE);} 
return 
(((BgL_threadzd2backendzd2_bglt)COBJECT(BgL_oz00_4197))->BgL_namez00);} } 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__threadz00()
{
{ /* Llib/thread.scm 17 */
BGl_registerzd2genericz12zc0zz__objectz00(BGl_tbzd2makezd2threadzd2envzd2zz__threadz00, BGl_proc2690z00zz__threadz00, BGl_threadzd2backendzd2zz__threadz00, BGl_string2691z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_tbzd2currentzd2threadzd2envzd2zz__threadz00, BGl_proc2692z00zz__threadz00, BGl_threadzd2backendzd2zz__threadz00, BGl_string2693z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_tbzd2mutexzd2initializa7ez12zd2envz67zz__threadz00, BGl_proc2694z00zz__threadz00, BGl_threadzd2backendzd2zz__threadz00, BGl_string2695z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_tbzd2condvarzd2initializa7ez12zd2envz67zz__threadz00, BGl_proc2696z00zz__threadz00, BGl_threadzd2backendzd2zz__threadz00, BGl_string2697z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00, BGl_proc2698z00zz__threadz00, BGl_threadz00zz__threadz00, BGl_string2699z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_threadzd2startz12zd2envz12zz__threadz00, BGl_proc2700z00zz__threadz00, BGl_threadz00zz__threadz00, BGl_string2701z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_threadzd2startzd2joinablez12zd2envzc0zz__threadz00, BGl_proc2702z00zz__threadz00, BGl_threadz00zz__threadz00, BGl_string2703z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_threadzd2joinz12zd2envz12zz__threadz00, BGl_proc2704z00zz__threadz00, BGl_threadz00zz__threadz00, BGl_string2705z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_threadzd2terminatez12zd2envz12zz__threadz00, BGl_proc2706z00zz__threadz00, BGl_threadz00zz__threadz00, BGl_string2707z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_threadzd2specificzd2envz00zz__threadz00, BGl_proc2708z00zz__threadz00, BGl_threadz00zz__threadz00, BGl_string2709z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_threadzd2specificzd2setz12zd2envzc0zz__threadz00, BGl_proc2710z00zz__threadz00, BGl_threadz00zz__threadz00, BGl_string2711z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_threadzd2cleanupzd2envz00zz__threadz00, BGl_proc2712z00zz__threadz00, BGl_threadz00zz__threadz00, BGl_string2713z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_threadzd2cleanupzd2setz12zd2envzc0zz__threadz00, BGl_proc2714z00zz__threadz00, BGl_threadz00zz__threadz00, BGl_string2715z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_z52userzd2currentzd2threadzd2envz80zz__threadz00, BGl_proc2716z00zz__threadz00, BGl_threadz00zz__threadz00, BGl_string2717z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_z52userzd2threadzd2sleepz12zd2envz92zz__threadz00, BGl_proc2718z00zz__threadz00, BGl_threadz00zz__threadz00, BGl_string2719z00zz__threadz00); 
return 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_z52userzd2threadzd2yieldz12zd2envz92zz__threadz00, BGl_proc2720z00zz__threadz00, BGl_threadz00zz__threadz00, BGl_string2721z00zz__threadz00);} 

}



/* &%user-thread-yield!1204 */
obj_t BGl_z62z52userzd2threadzd2yieldz121204z22zz__threadz00(obj_t BgL_envz00_3426, obj_t BgL_oz00_3427)
{
{ /* Llib/thread.scm 481 */
{ /* Llib/thread.scm 481 */
BgL_threadz00_bglt BgL_oz00_4198;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3427, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 481 */
BgL_oz00_4198 = 
((BgL_threadz00_bglt)BgL_oz00_3427); }  else 
{ 
obj_t BgL_auxz00_5389;
BgL_auxz00_5389 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)20564)), BGl_string2722z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_oz00_3427); 
FAILURE(BgL_auxz00_5389,BFALSE,BFALSE);} 
return BUNSPEC;} } 

}



/* &%user-thread-sleep!1202 */
obj_t BGl_z62z52userzd2threadzd2sleepz121202z22zz__threadz00(obj_t BgL_envz00_3428, obj_t BgL_oz00_3429, obj_t BgL_dz00_3430)
{
{ /* Llib/thread.scm 454 */
{ /* Llib/thread.scm 456 */
BgL_threadz00_bglt BgL_oz00_4199;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3429, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 456 */
BgL_oz00_4199 = 
((BgL_threadz00_bglt)BgL_oz00_3429); }  else 
{ 
obj_t BgL_auxz00_5396;
BgL_auxz00_5396 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)19533)), BGl_string2728z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_oz00_3429); 
FAILURE(BgL_auxz00_5396,BFALSE,BFALSE);} 
if(
BGL_DATEP(BgL_dz00_3430))
{ /* Llib/thread.scm 457 */
long BgL_cdtz00_4200;
BgL_cdtz00_4200 = 
bgl_date_to_seconds(
bgl_nanoseconds_to_date(
bgl_current_nanoseconds())); 
{ /* Llib/thread.scm 457 */
long BgL_dtz00_4202;
BgL_dtz00_4202 = 
bgl_date_to_seconds(BgL_dz00_3430); 
{ /* Llib/thread.scm 458 */
obj_t BgL_az00_4203;
{ /* Llib/thread.scm 459 */
obj_t BgL_auxz00_5406;
{ /* Llib/thread.scm 459 */
long BgL_res1942z00_4204;
{ /* Llib/thread.scm 459 */
long BgL_tmpz00_5407;
BgL_tmpz00_5407 = 
(BgL_dtz00_4202-BgL_cdtz00_4200); 
BgL_res1942z00_4204 = 
(long)(BgL_tmpz00_5407); } 
BgL_auxz00_5406 = 
make_belong(BgL_res1942z00_4204); } 
BgL_az00_4203 = 
BGl_2za2za2zz__r4_numbers_6_5z00(BgL_auxz00_5406, 
BINT(((long)1000000))); } 
{ /* Llib/thread.scm 459 */

{ /* Llib/thread.scm 460 */
bool_t BgL_test3391z00_5413;
{ /* Llib/thread.scm 460 */
long BgL_n1z00_4205;
{ /* Llib/thread.scm 460 */
obj_t BgL_tmpz00_5414;
if(
ELONGP(BgL_az00_4203))
{ /* Llib/thread.scm 460 */
BgL_tmpz00_5414 = BgL_az00_4203
; }  else 
{ 
obj_t BgL_auxz00_5417;
BgL_auxz00_5417 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)19682)), BGl_string2719z00zz__threadz00, BGl_string2723z00zz__threadz00, BgL_az00_4203); 
FAILURE(BgL_auxz00_5417,BFALSE,BFALSE);} 
BgL_n1z00_4205 = 
BELONG_TO_LONG(BgL_tmpz00_5414); } 
BgL_test3391z00_5413 = 
(BgL_n1z00_4205>((long)0)); } 
if(BgL_test3391z00_5413)
{ /* Llib/thread.scm 460 */
long BgL_arg1466z00_4206;
{ /* Llib/thread.scm 460 */
long BgL_res1944z00_4207;
{ /* Llib/thread.scm 460 */
long BgL_xz00_4208;
{ /* Llib/thread.scm 460 */
obj_t BgL_tmpz00_5423;
if(
ELONGP(BgL_az00_4203))
{ /* Llib/thread.scm 460 */
BgL_tmpz00_5423 = BgL_az00_4203
; }  else 
{ 
obj_t BgL_auxz00_5426;
BgL_auxz00_5426 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)19711)), BGl_string2719z00zz__threadz00, BGl_string2723z00zz__threadz00, BgL_az00_4203); 
FAILURE(BgL_auxz00_5426,BFALSE,BFALSE);} 
BgL_xz00_4208 = 
BELONG_TO_LONG(BgL_tmpz00_5423); } 
BgL_res1944z00_4207 = 
(long)(BgL_xz00_4208); } 
BgL_arg1466z00_4206 = BgL_res1944z00_4207; } 
bgl_sleep(BgL_arg1466z00_4206); BUNSPEC; 
return 
BINT(BgL_arg1466z00_4206);}  else 
{ /* Llib/thread.scm 460 */
return BFALSE;} } } } } }  else 
{ /* Llib/thread.scm 456 */
if(
INTEGERP(BgL_dz00_3430))
{ /* Llib/thread.scm 462 */
obj_t BgL_arg1470z00_4209;
BgL_arg1470z00_4209 = 
BINT(
(
(long)CINT(BgL_dz00_3430)*((long)1000))); 
{ /* Llib/thread.scm 462 */
long BgL_msz00_4210;
{ /* Llib/thread.scm 462 */
obj_t BgL_tmpz00_5439;
if(
INTEGERP(BgL_arg1470z00_4209))
{ /* Llib/thread.scm 462 */
BgL_tmpz00_5439 = BgL_arg1470z00_4209
; }  else 
{ 
obj_t BgL_auxz00_5442;
BgL_auxz00_5442 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)19760)), BGl_string2719z00zz__threadz00, BGl_string2564z00zz__threadz00, BgL_arg1470z00_4209); 
FAILURE(BgL_auxz00_5442,BFALSE,BFALSE);} 
BgL_msz00_4210 = 
(long)CINT(BgL_tmpz00_5439); } 
bgl_sleep(BgL_msz00_4210); BUNSPEC; 
return 
BINT(BgL_msz00_4210);} }  else 
{ /* Llib/thread.scm 461 */
if(
ELONGP(BgL_dz00_3430))
{ /* Llib/thread.scm 464 */
long BgL_arg1473z00_4211;
{ /* Llib/thread.scm 464 */
long BgL_arg1474z00_4212;
{ /* Llib/thread.scm 464 */
long BgL_res1949z00_4213;
{ /* Llib/thread.scm 464 */
long BgL_xz00_4214;
BgL_xz00_4214 = 
BELONG_TO_LONG(BgL_dz00_3430); 
BgL_res1949z00_4213 = 
(long)(BgL_xz00_4214); } 
BgL_arg1474z00_4212 = BgL_res1949z00_4213; } 
{ /* Llib/thread.scm 464 */
obj_t BgL_tmpz00_5453;
{ /* Llib/thread.scm 464 */
obj_t BgL_aux2358z00_4215;
BgL_aux2358z00_4215 = 
BGl_2za2za2zz__r4_numbers_6_5z00(
BINT(BgL_arg1474z00_4212), 
BINT(((long)1000))); 
if(
INTEGERP(BgL_aux2358z00_4215))
{ /* Llib/thread.scm 464 */
BgL_tmpz00_5453 = BgL_aux2358z00_4215
; }  else 
{ 
obj_t BgL_auxz00_5459;
BgL_auxz00_5459 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)19796)), BGl_string2719z00zz__threadz00, BGl_string2564z00zz__threadz00, BgL_aux2358z00_4215); 
FAILURE(BgL_auxz00_5459,BFALSE,BFALSE);} } 
BgL_arg1473z00_4211 = 
(long)CINT(BgL_tmpz00_5453); } } 
bgl_sleep(BgL_arg1473z00_4211); BUNSPEC; 
return 
BINT(BgL_arg1473z00_4211);}  else 
{ /* Llib/thread.scm 463 */
if(
LLONGP(BgL_dz00_3430))
{ /* Llib/thread.scm 466 */
long BgL_arg1476z00_4216;
{ /* Llib/thread.scm 466 */
long BgL_arg1477z00_4217;
{ /* Llib/thread.scm 466 */
long BgL_res1953z00_4218;
{ /* Llib/thread.scm 466 */
BGL_LONGLONG_T BgL_tmpz00_5468;
BgL_tmpz00_5468 = 
BLLONG_TO_LLONG(BgL_dz00_3430); 
BgL_res1953z00_4218 = 
LLONG_TO_LONG(BgL_tmpz00_5468); } 
BgL_arg1477z00_4217 = BgL_res1953z00_4218; } 
{ /* Llib/thread.scm 466 */
obj_t BgL_tmpz00_5471;
{ /* Llib/thread.scm 466 */
obj_t BgL_aux2360z00_4219;
BgL_aux2360z00_4219 = 
BGl_2za2za2zz__r4_numbers_6_5z00(
BINT(BgL_arg1477z00_4217), 
BINT(((long)1000))); 
if(
INTEGERP(BgL_aux2360z00_4219))
{ /* Llib/thread.scm 466 */
BgL_tmpz00_5471 = BgL_aux2360z00_4219
; }  else 
{ 
obj_t BgL_auxz00_5477;
BgL_auxz00_5477 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)19857)), BGl_string2719z00zz__threadz00, BGl_string2564z00zz__threadz00, BgL_aux2360z00_4219); 
FAILURE(BgL_auxz00_5477,BFALSE,BFALSE);} } 
BgL_arg1476z00_4216 = 
(long)CINT(BgL_tmpz00_5471); } } 
bgl_sleep(BgL_arg1476z00_4216); BUNSPEC; 
return 
BINT(BgL_arg1476z00_4216);}  else 
{ /* Llib/thread.scm 467 */
bool_t BgL_test3400z00_5484;
if(
INTEGERP(BgL_dz00_3430))
{ /* Llib/thread.scm 467 */
BgL_test3400z00_5484 = ((bool_t)1)
; }  else 
{ /* Llib/thread.scm 467 */
BgL_test3400z00_5484 = 
REALP(BgL_dz00_3430)
; } 
if(BgL_test3400z00_5484)
{ /* Llib/thread.scm 468 */
long BgL_arg1479z00_4220;
{ /* Llib/thread.scm 468 */
double BgL_xz00_4221;
{ /* Llib/thread.scm 468 */
obj_t BgL_tmpz00_5488;
{ /* Llib/thread.scm 468 */
obj_t BgL_aux2362z00_4222;
BgL_aux2362z00_4222 = 
BGl_2za2za2zz__r4_numbers_6_5z00(BgL_dz00_3430, BGL_REAL_CNST( BGl_real2724z00zz__threadz00)); 
if(
REALP(BgL_aux2362z00_4222))
{ /* Llib/thread.scm 468 */
BgL_tmpz00_5488 = BgL_aux2362z00_4222
; }  else 
{ 
obj_t BgL_auxz00_5492;
BgL_auxz00_5492 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)19933)), BGl_string2719z00zz__threadz00, BGl_string2725z00zz__threadz00, BgL_aux2362z00_4222); 
FAILURE(BgL_auxz00_5492,BFALSE,BFALSE);} } 
BgL_xz00_4221 = 
REAL_TO_DOUBLE(BgL_tmpz00_5488); } 
BgL_arg1479z00_4220 = 
(long)(BgL_xz00_4221); } 
bgl_sleep(BgL_arg1479z00_4220); BUNSPEC; 
return 
BINT(BgL_arg1479z00_4220);}  else 
{ /* Llib/thread.scm 467 */
return 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_symbol2726z00zz__threadz00, BGl_string2727z00zz__threadz00, BgL_dz00_3430);} } } } } } } 

}



/* &%user-current-thread1200 */
obj_t BGl_z62z52userzd2currentzd2thread1200z30zz__threadz00(obj_t BgL_envz00_3431, obj_t BgL_oz00_3432)
{
{ /* Llib/thread.scm 432 */
{ 
BgL_threadz00_bglt BgL_auxz00_5501;
{ /* Llib/thread.scm 432 */
BgL_threadz00_bglt BgL_oz00_4223;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3432, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 432 */
BgL_oz00_4223 = 
((BgL_threadz00_bglt)BgL_oz00_3432); }  else 
{ 
obj_t BgL_auxz00_5505;
BgL_auxz00_5505 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)18494)), BGl_string2729z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_oz00_3432); 
FAILURE(BgL_auxz00_5505,BFALSE,BFALSE);} 
BgL_auxz00_5501 = BgL_oz00_4223; } 
return 
((obj_t)BgL_auxz00_5501);} } 

}



/* &thread-cleanup-set!1193 */
obj_t BGl_z62threadzd2cleanupzd2setz121193z70zz__threadz00(obj_t BgL_envz00_3433, obj_t BgL_thz00_3434, obj_t BgL_vz00_3435)
{
{ /* Llib/thread.scm 421 */
{ /* Llib/thread.scm 421 */
BgL_threadz00_bglt BgL_thz00_4224;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3434, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 421 */
BgL_thz00_4224 = 
((BgL_threadz00_bglt)BgL_thz00_3434); }  else 
{ 
obj_t BgL_auxz00_5513;
BgL_auxz00_5513 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)17866)), BGl_string2732z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_thz00_3434); 
FAILURE(BgL_auxz00_5513,BFALSE,BFALSE);} 
return 
BGl_errorz00zz__errorz00(BGl_symbol2730z00zz__threadz00, BGl_string2731z00zz__threadz00, 
((obj_t)BgL_thz00_4224));} } 

}



/* &thread-cleanup1191 */
obj_t BGl_z62threadzd2cleanup1191zb0zz__threadz00(obj_t BgL_envz00_3436, obj_t BgL_thz00_3437)
{
{ /* Llib/thread.scm 416 */
{ /* Llib/thread.scm 416 */
BgL_threadz00_bglt BgL_thz00_4225;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3437, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 416 */
BgL_thz00_4225 = 
((BgL_threadz00_bglt)BgL_thz00_3437); }  else 
{ 
obj_t BgL_auxz00_5522;
BgL_auxz00_5522 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)17598)), BGl_string2734z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_thz00_3437); 
FAILURE(BgL_auxz00_5522,BFALSE,BFALSE);} 
return 
BGl_errorz00zz__errorz00(BGl_symbol2733z00zz__threadz00, BGl_string2731z00zz__threadz00, 
((obj_t)BgL_thz00_4225));} } 

}



/* &thread-specific-set!1189 */
obj_t BGl_z62threadzd2specificzd2setz121189z70zz__threadz00(obj_t BgL_envz00_3438, obj_t BgL_thz00_3439, obj_t BgL_vz00_3440)
{
{ /* Llib/thread.scm 411 */
{ /* Llib/thread.scm 411 */
BgL_threadz00_bglt BgL_thz00_4226;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3439, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 411 */
BgL_thz00_4226 = 
((BgL_threadz00_bglt)BgL_thz00_3439); }  else 
{ 
obj_t BgL_auxz00_5531;
BgL_auxz00_5531 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)17317)), BGl_string2736z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_thz00_3439); 
FAILURE(BgL_auxz00_5531,BFALSE,BFALSE);} 
return 
BGl_errorz00zz__errorz00(BGl_symbol2735z00zz__threadz00, BGl_string2731z00zz__threadz00, 
((obj_t)BgL_thz00_4226));} } 

}



/* &thread-specific1186 */
obj_t BGl_z62threadzd2specific1186zb0zz__threadz00(obj_t BgL_envz00_3441, obj_t BgL_thz00_3442)
{
{ /* Llib/thread.scm 406 */
{ /* Llib/thread.scm 406 */
BgL_threadz00_bglt BgL_thz00_4227;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3442, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 406 */
BgL_thz00_4227 = 
((BgL_threadz00_bglt)BgL_thz00_3442); }  else 
{ 
obj_t BgL_auxz00_5540;
BgL_auxz00_5540 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)17048)), BGl_string2738z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_thz00_3442); 
FAILURE(BgL_auxz00_5540,BFALSE,BFALSE);} 
return 
BGl_errorz00zz__errorz00(BGl_symbol2737z00zz__threadz00, BGl_string2731z00zz__threadz00, 
((obj_t)BgL_thz00_4227));} } 

}



/* &thread-terminate!1184 */
obj_t BGl_z62threadzd2terminatez121184za2zz__threadz00(obj_t BgL_envz00_3443, obj_t BgL_thz00_3444)
{
{ /* Llib/thread.scm 401 */
{ /* Llib/thread.scm 401 */
BgL_threadz00_bglt BgL_thz00_4228;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3444, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 401 */
BgL_thz00_4228 = 
((BgL_threadz00_bglt)BgL_thz00_3444); }  else 
{ 
obj_t BgL_auxz00_5549;
BgL_auxz00_5549 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)16777)), BGl_string2740z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_thz00_3444); 
FAILURE(BgL_auxz00_5549,BFALSE,BFALSE);} 
return 
BGl_errorz00zz__errorz00(BGl_symbol2739z00zz__threadz00, BGl_string2731z00zz__threadz00, 
((obj_t)BgL_thz00_4228));} } 

}



/* &thread-join!1181 */
obj_t BGl_z62threadzd2joinz121181za2zz__threadz00(obj_t BgL_envz00_3445, obj_t BgL_thz00_3446, obj_t BgL_timeoutz00_3447)
{
{ /* Llib/thread.scm 396 */
{ /* Llib/thread.scm 396 */
BgL_threadz00_bglt BgL_thz00_4229;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3446, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 396 */
BgL_thz00_4229 = 
((BgL_threadz00_bglt)BgL_thz00_3446); }  else 
{ 
obj_t BgL_auxz00_5558;
BgL_auxz00_5558 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)16501)), BGl_string2742z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_thz00_3446); 
FAILURE(BgL_auxz00_5558,BFALSE,BFALSE);} 
return 
BGl_errorz00zz__errorz00(BGl_symbol2741z00zz__threadz00, BGl_string2731z00zz__threadz00, 
((obj_t)BgL_thz00_4229));} } 

}



/* &thread-start-joinabl1179 */
obj_t BGl_z62threadzd2startzd2joinabl1179z62zz__threadz00(obj_t BgL_envz00_3448, obj_t BgL_thz00_3449)
{
{ /* Llib/thread.scm 391 */
{ /* Llib/thread.scm 391 */
BgL_threadz00_bglt BgL_thz00_4230;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3449, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 391 */
BgL_thz00_4230 = 
((BgL_threadz00_bglt)BgL_thz00_3449); }  else 
{ 
obj_t BgL_auxz00_5567;
BgL_auxz00_5567 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)16225)), BGl_string2744z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_thz00_3449); 
FAILURE(BgL_auxz00_5567,BFALSE,BFALSE);} 
return 
BGl_errorz00zz__errorz00(BGl_symbol2743z00zz__threadz00, BGl_string2731z00zz__threadz00, 
((obj_t)BgL_thz00_4230));} } 

}



/* &thread-start!1177 */
obj_t BGl_z62threadzd2startz121177za2zz__threadz00(obj_t BgL_envz00_3450, obj_t BgL_thz00_3451, obj_t BgL_scz00_3452)
{
{ /* Llib/thread.scm 386 */
{ /* Llib/thread.scm 386 */
BgL_threadz00_bglt BgL_thz00_4231;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3451, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 386 */
BgL_thz00_4231 = 
((BgL_threadz00_bglt)BgL_thz00_3451); }  else 
{ 
obj_t BgL_auxz00_5576;
BgL_auxz00_5576 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)15953)), BGl_string2746z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_thz00_3451); 
FAILURE(BgL_auxz00_5576,BFALSE,BFALSE);} 
return 
BGl_errorz00zz__errorz00(BGl_symbol2745z00zz__threadz00, BGl_string2731z00zz__threadz00, 
((obj_t)BgL_thz00_4231));} } 

}



/* &thread-initialize!1175 */
obj_t BGl_z62threadzd2initializa7ez121175z05zz__threadz00(obj_t BgL_envz00_3453, obj_t BgL_thz00_3454)
{
{ /* Llib/thread.scm 380 */
{ 
BgL_threadz00_bglt BgL_auxz00_5582;
{ /* Llib/thread.scm 380 */
BgL_threadz00_bglt BgL_thz00_4232;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3454, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 380 */
BgL_thz00_4232 = 
((BgL_threadz00_bglt)BgL_thz00_3454); }  else 
{ 
obj_t BgL_auxz00_5586;
BgL_auxz00_5586 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)15675)), BGl_string2747z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_thz00_3454); 
FAILURE(BgL_auxz00_5586,BFALSE,BFALSE);} 
BgL_auxz00_5582 = BgL_thz00_4232; } 
return 
((obj_t)BgL_auxz00_5582);} } 

}



/* &tb-condvar-initializ1167 */
obj_t BGl_z62tbzd2condvarzd2initializa71167zc5zz__threadz00(obj_t BgL_envz00_3455, obj_t BgL_tbz00_3456, obj_t BgL_condvarz00_3457)
{
{ /* Llib/thread.scm 351 */
{ /* Llib/thread.scm 351 */
BgL_threadzd2backendzd2_bglt BgL_tbz00_4233;obj_t BgL_condvarz00_4234;
if(
BGl_isazf3zf3zz__objectz00(BgL_tbz00_3456, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 351 */
BgL_tbz00_4233 = 
((BgL_threadzd2backendzd2_bglt)BgL_tbz00_3456); }  else 
{ 
obj_t BgL_auxz00_5594;
BgL_auxz00_5594 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)14124)), BGl_string2749z00zz__threadz00, BGl_string2529z00zz__threadz00, BgL_tbz00_3456); 
FAILURE(BgL_auxz00_5594,BFALSE,BFALSE);} 
if(
BGL_CONDVARP(BgL_condvarz00_3457))
{ /* Llib/thread.scm 351 */
BgL_condvarz00_4234 = BgL_condvarz00_3457; }  else 
{ 
obj_t BgL_auxz00_5600;
BgL_auxz00_5600 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)14124)), BGl_string2749z00zz__threadz00, BGl_string2581z00zz__threadz00, BgL_condvarz00_3457); 
FAILURE(BgL_auxz00_5600,BFALSE,BFALSE);} 
return 
BGl_errorz00zz__errorz00(BGl_symbol2748z00zz__threadz00, BGl_string2731z00zz__threadz00, 
((obj_t)BgL_tbz00_4233));} } 

}



/* &tb-mutex-initialize!1165 */
obj_t BGl_z62tbzd2mutexzd2initializa7ez121165zd7zz__threadz00(obj_t BgL_envz00_3458, obj_t BgL_tbz00_3459, obj_t BgL_mutexz00_3460)
{
{ /* Llib/thread.scm 346 */
{ /* Llib/thread.scm 346 */
BgL_threadzd2backendzd2_bglt BgL_tbz00_4235;obj_t BgL_mutexz00_4236;
if(
BGl_isazf3zf3zz__objectz00(BgL_tbz00_3459, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 346 */
BgL_tbz00_4235 = 
((BgL_threadzd2backendzd2_bglt)BgL_tbz00_3459); }  else 
{ 
obj_t BgL_auxz00_5609;
BgL_auxz00_5609 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)13836)), BGl_string2751z00zz__threadz00, BGl_string2529z00zz__threadz00, BgL_tbz00_3459); 
FAILURE(BgL_auxz00_5609,BFALSE,BFALSE);} 
if(
BGL_MUTEXP(BgL_mutexz00_3460))
{ /* Llib/thread.scm 346 */
BgL_mutexz00_4236 = BgL_mutexz00_3460; }  else 
{ 
obj_t BgL_auxz00_5615;
BgL_auxz00_5615 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)13836)), BGl_string2751z00zz__threadz00, BGl_string2555z00zz__threadz00, BgL_mutexz00_3460); 
FAILURE(BgL_auxz00_5615,BFALSE,BFALSE);} 
return 
BGl_errorz00zz__errorz00(BGl_symbol2750z00zz__threadz00, BGl_string2731z00zz__threadz00, 
((obj_t)BgL_tbz00_4235));} } 

}



/* &tb-current-thread1159 */
obj_t BGl_z62tbzd2currentzd2thread1159z62zz__threadz00(obj_t BgL_envz00_3461, obj_t BgL_tbz00_3462)
{
{ /* Llib/thread.scm 322 */
{ /* Llib/thread.scm 322 */
BgL_threadzd2backendzd2_bglt BgL_tbz00_4237;
if(
BGl_isazf3zf3zz__objectz00(BgL_tbz00_3462, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 322 */
BgL_tbz00_4237 = 
((BgL_threadzd2backendzd2_bglt)BgL_tbz00_3462); }  else 
{ 
obj_t BgL_auxz00_5624;
BgL_auxz00_5624 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)12651)), BGl_string2753z00zz__threadz00, BGl_string2529z00zz__threadz00, BgL_tbz00_3462); 
FAILURE(BgL_auxz00_5624,BFALSE,BFALSE);} 
return 
BGl_errorz00zz__errorz00(BGl_symbol2752z00zz__threadz00, BGl_string2731z00zz__threadz00, 
((obj_t)BgL_tbz00_4237));} } 

}



/* &tb-make-thread1157 */
obj_t BGl_z62tbzd2makezd2thread1157z62zz__threadz00(obj_t BgL_envz00_3463, obj_t BgL_tbz00_3464, obj_t BgL_bodyz00_3465, obj_t BgL_namez00_3466)
{
{ /* Llib/thread.scm 317 */
{ /* Llib/thread.scm 317 */
BgL_threadzd2backendzd2_bglt BgL_tbz00_4238;obj_t BgL_bodyz00_4239;
if(
BGl_isazf3zf3zz__objectz00(BgL_tbz00_3464, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 317 */
BgL_tbz00_4238 = 
((BgL_threadzd2backendzd2_bglt)BgL_tbz00_3464); }  else 
{ 
obj_t BgL_auxz00_5633;
BgL_auxz00_5633 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)12365)), BGl_string2755z00zz__threadz00, BGl_string2529z00zz__threadz00, BgL_tbz00_3464); 
FAILURE(BgL_auxz00_5633,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_bodyz00_3465))
{ /* Llib/thread.scm 317 */
BgL_bodyz00_4239 = BgL_bodyz00_3465; }  else 
{ 
obj_t BgL_auxz00_5639;
BgL_auxz00_5639 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)12365)), BGl_string2755z00zz__threadz00, BGl_string2542z00zz__threadz00, BgL_bodyz00_3465); 
FAILURE(BgL_auxz00_5639,BFALSE,BFALSE);} 
return 
BGl_errorz00zz__errorz00(BGl_symbol2754z00zz__threadz00, BGl_string2731z00zz__threadz00, 
((obj_t)BgL_tbz00_4238));} } 

}



/* tb-make-thread */
BGL_EXPORTED_DEF BgL_threadz00_bglt BGl_tbzd2makezd2threadz00zz__threadz00(BgL_threadzd2backendzd2_bglt BgL_tbz00_7, obj_t BgL_bodyz00_8, obj_t BgL_namez00_9)
{
{ /* Llib/thread.scm 317 */
{ /* Llib/thread.scm 317 */
obj_t BgL_method1158z00_1556;
{ /* Llib/thread.scm 317 */
obj_t BgL_res1967z00_2385;
{ /* Llib/thread.scm 317 */
long BgL_objzd2classzd2numz00_2350;
{ /* Llib/thread.scm 317 */
long BgL_res1956z00_2353;
BgL_res1956z00_2353 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_tbz00_7)); 
BgL_objzd2classzd2numz00_2350 = BgL_res1956z00_2353; } 
{ /* Llib/thread.scm 317 */
obj_t BgL_arg1885z00_2351;
BgL_arg1885z00_2351 = 
PROCEDURE_REF(BGl_tbzd2makezd2threadzd2envzd2zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 317 */
int BgL_offsetz00_2355;
BgL_offsetz00_2355 = 
(int)(BgL_objzd2classzd2numz00_2350); 
{ /* Llib/thread.scm 317 */
long BgL_offsetz00_2356;
BgL_offsetz00_2356 = 
(
(long)(BgL_offsetz00_2355)-OBJECT_TYPE); 
{ /* Llib/thread.scm 317 */
long BgL_modz00_2357;
BgL_modz00_2357 = 
(BgL_offsetz00_2356 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/thread.scm 317 */
long BgL_restz00_2359;
BgL_restz00_2359 = 
(BgL_offsetz00_2356 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/thread.scm 317 */

{ /* Llib/thread.scm 317 */
obj_t BgL_bucketz00_2361;
BgL_bucketz00_2361 = 
VECTOR_REF(
((obj_t)BgL_arg1885z00_2351),BgL_modz00_2357); 
BgL_res1967z00_2385 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_2361),BgL_restz00_2359); } } } } } } } } 
BgL_method1158z00_1556 = BgL_res1967z00_2385; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1158z00_1556, ((long)3)))
{ /* Llib/thread.scm 317 */
obj_t BgL_aux2401z00_3882;
BgL_aux2401z00_3882 = 
PROCEDURE_ENTRY(BgL_method1158z00_1556)(BgL_method1158z00_1556, 
((obj_t)BgL_tbz00_7), BgL_bodyz00_8, BgL_namez00_9, BEOA); 
if(
BGl_isazf3zf3zz__objectz00(BgL_aux2401z00_3882, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 317 */
return 
((BgL_threadz00_bglt)BgL_aux2401z00_3882);}  else 
{ 
obj_t BgL_auxz00_5682;
BgL_auxz00_5682 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)12365)), BGl_string2756z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_aux2401z00_3882); 
FAILURE(BgL_auxz00_5682,BFALSE,BFALSE);} }  else 
{ /* Llib/thread.scm 317 */
FAILURE(BGl_string2757z00zz__threadz00,BGl_list2758z00zz__threadz00,BgL_method1158z00_1556);} } } 

}



/* &tb-make-thread */
BgL_threadz00_bglt BGl_z62tbzd2makezd2threadz62zz__threadz00(obj_t BgL_envz00_3467, obj_t BgL_tbz00_3468, obj_t BgL_bodyz00_3469, obj_t BgL_namez00_3470)
{
{ /* Llib/thread.scm 317 */
{ /* Llib/thread.scm 317 */
obj_t BgL_auxz00_5695;BgL_threadzd2backendzd2_bglt BgL_auxz00_5687;
if(
PROCEDUREP(BgL_bodyz00_3469))
{ /* Llib/thread.scm 317 */
BgL_auxz00_5695 = BgL_bodyz00_3469
; }  else 
{ 
obj_t BgL_auxz00_5698;
BgL_auxz00_5698 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)12365)), BGl_string2763z00zz__threadz00, BGl_string2542z00zz__threadz00, BgL_bodyz00_3469); 
FAILURE(BgL_auxz00_5698,BFALSE,BFALSE);} 
if(
BGl_isazf3zf3zz__objectz00(BgL_tbz00_3468, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 317 */
BgL_auxz00_5687 = 
((BgL_threadzd2backendzd2_bglt)BgL_tbz00_3468)
; }  else 
{ 
obj_t BgL_auxz00_5691;
BgL_auxz00_5691 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)12365)), BGl_string2763z00zz__threadz00, BGl_string2529z00zz__threadz00, BgL_tbz00_3468); 
FAILURE(BgL_auxz00_5691,BFALSE,BFALSE);} 
return 
BGl_tbzd2makezd2threadz00zz__threadz00(BgL_auxz00_5687, BgL_auxz00_5695, BgL_namez00_3470);} } 

}



/* tb-current-thread */
BGL_EXPORTED_DEF obj_t BGl_tbzd2currentzd2threadz00zz__threadz00(BgL_threadzd2backendzd2_bglt BgL_tbz00_10)
{
{ /* Llib/thread.scm 322 */
{ /* Llib/thread.scm 322 */
obj_t BgL_method1160z00_1557;
{ /* Llib/thread.scm 322 */
obj_t BgL_res1979z00_2422;
{ /* Llib/thread.scm 322 */
long BgL_objzd2classzd2numz00_2387;
{ /* Llib/thread.scm 322 */
long BgL_res1969z00_2390;
BgL_res1969z00_2390 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_tbz00_10)); 
BgL_objzd2classzd2numz00_2387 = BgL_res1969z00_2390; } 
{ /* Llib/thread.scm 322 */
obj_t BgL_arg1885z00_2388;
BgL_arg1885z00_2388 = 
PROCEDURE_REF(BGl_tbzd2currentzd2threadzd2envzd2zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 322 */
int BgL_offsetz00_2392;
BgL_offsetz00_2392 = 
(int)(BgL_objzd2classzd2numz00_2387); 
{ /* Llib/thread.scm 322 */
long BgL_offsetz00_2393;
BgL_offsetz00_2393 = 
(
(long)(BgL_offsetz00_2392)-OBJECT_TYPE); 
{ /* Llib/thread.scm 322 */
long BgL_modz00_2394;
BgL_modz00_2394 = 
(BgL_offsetz00_2393 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/thread.scm 322 */
long BgL_restz00_2396;
BgL_restz00_2396 = 
(BgL_offsetz00_2393 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/thread.scm 322 */

{ /* Llib/thread.scm 322 */
obj_t BgL_bucketz00_2398;
BgL_bucketz00_2398 = 
VECTOR_REF(
((obj_t)BgL_arg1885z00_2388),BgL_modz00_2394); 
BgL_res1979z00_2422 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_2398),BgL_restz00_2396); } } } } } } } } 
BgL_method1160z00_1557 = BgL_res1979z00_2422; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1160z00_1557, ((long)1)))
{ /* Llib/thread.scm 322 */
return 
PROCEDURE_ENTRY(BgL_method1160z00_1557)(BgL_method1160z00_1557, 
((obj_t)BgL_tbz00_10), BEOA);}  else 
{ /* Llib/thread.scm 322 */
FAILURE(BGl_string2764z00zz__threadz00,BGl_list2765z00zz__threadz00,BgL_method1160z00_1557);} } } 

}



/* &tb-current-thread */
obj_t BGl_z62tbzd2currentzd2threadz62zz__threadz00(obj_t BgL_envz00_3471, obj_t BgL_tbz00_3472)
{
{ /* Llib/thread.scm 322 */
{ /* Llib/thread.scm 322 */
BgL_threadzd2backendzd2_bglt BgL_auxz00_5736;
if(
BGl_isazf3zf3zz__objectz00(BgL_tbz00_3472, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 322 */
BgL_auxz00_5736 = 
((BgL_threadzd2backendzd2_bglt)BgL_tbz00_3472)
; }  else 
{ 
obj_t BgL_auxz00_5740;
BgL_auxz00_5740 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)12651)), BGl_string2768z00zz__threadz00, BGl_string2529z00zz__threadz00, BgL_tbz00_3472); 
FAILURE(BgL_auxz00_5740,BFALSE,BFALSE);} 
return 
BGl_tbzd2currentzd2threadz00zz__threadz00(BgL_auxz00_5736);} } 

}



/* tb-mutex-initialize! */
BGL_EXPORTED_DEF obj_t BGl_tbzd2mutexzd2initializa7ez12zb5zz__threadz00(BgL_threadzd2backendzd2_bglt BgL_tbz00_15, obj_t BgL_mutexz00_16)
{
{ /* Llib/thread.scm 346 */
{ /* Llib/thread.scm 346 */
obj_t BgL_method1166z00_1558;
{ /* Llib/thread.scm 346 */
obj_t BgL_res1990z00_2459;
{ /* Llib/thread.scm 346 */
long BgL_objzd2classzd2numz00_2424;
{ /* Llib/thread.scm 346 */
long BgL_res1980z00_2427;
BgL_res1980z00_2427 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_tbz00_15)); 
BgL_objzd2classzd2numz00_2424 = BgL_res1980z00_2427; } 
{ /* Llib/thread.scm 346 */
obj_t BgL_arg1885z00_2425;
BgL_arg1885z00_2425 = 
PROCEDURE_REF(BGl_tbzd2mutexzd2initializa7ez12zd2envz67zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 346 */
int BgL_offsetz00_2429;
BgL_offsetz00_2429 = 
(int)(BgL_objzd2classzd2numz00_2424); 
{ /* Llib/thread.scm 346 */
long BgL_offsetz00_2430;
BgL_offsetz00_2430 = 
(
(long)(BgL_offsetz00_2429)-OBJECT_TYPE); 
{ /* Llib/thread.scm 346 */
long BgL_modz00_2431;
BgL_modz00_2431 = 
(BgL_offsetz00_2430 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/thread.scm 346 */
long BgL_restz00_2433;
BgL_restz00_2433 = 
(BgL_offsetz00_2430 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/thread.scm 346 */

{ /* Llib/thread.scm 346 */
obj_t BgL_bucketz00_2435;
BgL_bucketz00_2435 = 
VECTOR_REF(
((obj_t)BgL_arg1885z00_2425),BgL_modz00_2431); 
BgL_res1990z00_2459 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_2435),BgL_restz00_2433); } } } } } } } } 
BgL_method1166z00_1558 = BgL_res1990z00_2459; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1166z00_1558, ((long)2)))
{ /* Llib/thread.scm 346 */
obj_t BgL_aux2413z00_3902;
BgL_aux2413z00_3902 = 
PROCEDURE_ENTRY(BgL_method1166z00_1558)(BgL_method1166z00_1558, 
((obj_t)BgL_tbz00_15), BgL_mutexz00_16, BEOA); 
if(
BGL_MUTEXP(BgL_aux2413z00_3902))
{ /* Llib/thread.scm 346 */
return BgL_aux2413z00_3902;}  else 
{ 
obj_t BgL_auxz00_5780;
BgL_auxz00_5780 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)13836)), BGl_string2769z00zz__threadz00, BGl_string2555z00zz__threadz00, BgL_aux2413z00_3902); 
FAILURE(BgL_auxz00_5780,BFALSE,BFALSE);} }  else 
{ /* Llib/thread.scm 346 */
FAILURE(BGl_string2770z00zz__threadz00,BGl_list2771z00zz__threadz00,BgL_method1166z00_1558);} } } 

}



/* &tb-mutex-initialize! */
obj_t BGl_z62tbzd2mutexzd2initializa7ez12zd7zz__threadz00(obj_t BgL_envz00_3473, obj_t BgL_tbz00_3474, obj_t BgL_mutexz00_3475)
{
{ /* Llib/thread.scm 346 */
{ /* Llib/thread.scm 346 */
obj_t BgL_auxz00_5793;BgL_threadzd2backendzd2_bglt BgL_auxz00_5785;
if(
BGL_MUTEXP(BgL_mutexz00_3475))
{ /* Llib/thread.scm 346 */
BgL_auxz00_5793 = BgL_mutexz00_3475
; }  else 
{ 
obj_t BgL_auxz00_5796;
BgL_auxz00_5796 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)13836)), BGl_string2774z00zz__threadz00, BGl_string2555z00zz__threadz00, BgL_mutexz00_3475); 
FAILURE(BgL_auxz00_5796,BFALSE,BFALSE);} 
if(
BGl_isazf3zf3zz__objectz00(BgL_tbz00_3474, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 346 */
BgL_auxz00_5785 = 
((BgL_threadzd2backendzd2_bglt)BgL_tbz00_3474)
; }  else 
{ 
obj_t BgL_auxz00_5789;
BgL_auxz00_5789 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)13836)), BGl_string2774z00zz__threadz00, BGl_string2529z00zz__threadz00, BgL_tbz00_3474); 
FAILURE(BgL_auxz00_5789,BFALSE,BFALSE);} 
return 
BGl_tbzd2mutexzd2initializa7ez12zb5zz__threadz00(BgL_auxz00_5785, BgL_auxz00_5793);} } 

}



/* tb-condvar-initialize! */
BGL_EXPORTED_DEF obj_t BGl_tbzd2condvarzd2initializa7ez12zb5zz__threadz00(BgL_threadzd2backendzd2_bglt BgL_tbz00_17, obj_t BgL_condvarz00_18)
{
{ /* Llib/thread.scm 351 */
{ /* Llib/thread.scm 351 */
obj_t BgL_method1168z00_1559;
{ /* Llib/thread.scm 351 */
obj_t BgL_res2001z00_2496;
{ /* Llib/thread.scm 351 */
long BgL_objzd2classzd2numz00_2461;
{ /* Llib/thread.scm 351 */
long BgL_res1991z00_2464;
BgL_res1991z00_2464 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_tbz00_17)); 
BgL_objzd2classzd2numz00_2461 = BgL_res1991z00_2464; } 
{ /* Llib/thread.scm 351 */
obj_t BgL_arg1885z00_2462;
BgL_arg1885z00_2462 = 
PROCEDURE_REF(BGl_tbzd2condvarzd2initializa7ez12zd2envz67zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 351 */
int BgL_offsetz00_2466;
BgL_offsetz00_2466 = 
(int)(BgL_objzd2classzd2numz00_2461); 
{ /* Llib/thread.scm 351 */
long BgL_offsetz00_2467;
BgL_offsetz00_2467 = 
(
(long)(BgL_offsetz00_2466)-OBJECT_TYPE); 
{ /* Llib/thread.scm 351 */
long BgL_modz00_2468;
BgL_modz00_2468 = 
(BgL_offsetz00_2467 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/thread.scm 351 */
long BgL_restz00_2470;
BgL_restz00_2470 = 
(BgL_offsetz00_2467 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/thread.scm 351 */

{ /* Llib/thread.scm 351 */
obj_t BgL_bucketz00_2472;
BgL_bucketz00_2472 = 
VECTOR_REF(
((obj_t)BgL_arg1885z00_2462),BgL_modz00_2468); 
BgL_res2001z00_2496 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_2472),BgL_restz00_2470); } } } } } } } } 
BgL_method1168z00_1559 = BgL_res2001z00_2496; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1168z00_1559, ((long)2)))
{ /* Llib/thread.scm 351 */
obj_t BgL_aux2421z00_3913;
BgL_aux2421z00_3913 = 
PROCEDURE_ENTRY(BgL_method1168z00_1559)(BgL_method1168z00_1559, 
((obj_t)BgL_tbz00_17), BgL_condvarz00_18, BEOA); 
if(
BGL_CONDVARP(BgL_aux2421z00_3913))
{ /* Llib/thread.scm 351 */
return BgL_aux2421z00_3913;}  else 
{ 
obj_t BgL_auxz00_5836;
BgL_auxz00_5836 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)14124)), BGl_string2775z00zz__threadz00, BGl_string2581z00zz__threadz00, BgL_aux2421z00_3913); 
FAILURE(BgL_auxz00_5836,BFALSE,BFALSE);} }  else 
{ /* Llib/thread.scm 351 */
FAILURE(BGl_string2776z00zz__threadz00,BGl_list2777z00zz__threadz00,BgL_method1168z00_1559);} } } 

}



/* &tb-condvar-initialize! */
obj_t BGl_z62tbzd2condvarzd2initializa7ez12zd7zz__threadz00(obj_t BgL_envz00_3476, obj_t BgL_tbz00_3477, obj_t BgL_condvarz00_3478)
{
{ /* Llib/thread.scm 351 */
{ /* Llib/thread.scm 351 */
obj_t BgL_auxz00_5849;BgL_threadzd2backendzd2_bglt BgL_auxz00_5841;
if(
BGL_CONDVARP(BgL_condvarz00_3478))
{ /* Llib/thread.scm 351 */
BgL_auxz00_5849 = BgL_condvarz00_3478
; }  else 
{ 
obj_t BgL_auxz00_5852;
BgL_auxz00_5852 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)14124)), BGl_string2781z00zz__threadz00, BGl_string2581z00zz__threadz00, BgL_condvarz00_3478); 
FAILURE(BgL_auxz00_5852,BFALSE,BFALSE);} 
if(
BGl_isazf3zf3zz__objectz00(BgL_tbz00_3477, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 351 */
BgL_auxz00_5841 = 
((BgL_threadzd2backendzd2_bglt)BgL_tbz00_3477)
; }  else 
{ 
obj_t BgL_auxz00_5845;
BgL_auxz00_5845 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)14124)), BGl_string2781z00zz__threadz00, BGl_string2529z00zz__threadz00, BgL_tbz00_3477); 
FAILURE(BgL_auxz00_5845,BFALSE,BFALSE);} 
return 
BGl_tbzd2condvarzd2initializa7ez12zb5zz__threadz00(BgL_auxz00_5841, BgL_auxz00_5849);} } 

}



/* thread-initialize! */
BGL_EXPORTED_DEF obj_t BGl_threadzd2initializa7ez12z67zz__threadz00(BgL_threadz00_bglt BgL_thz00_26)
{
{ /* Llib/thread.scm 380 */
{ /* Llib/thread.scm 380 */
obj_t BgL_method1176z00_1560;
{ /* Llib/thread.scm 380 */
obj_t BgL_res2012z00_2533;
{ /* Llib/thread.scm 380 */
long BgL_objzd2classzd2numz00_2498;
{ /* Llib/thread.scm 380 */
long BgL_res2002z00_2501;
BgL_res2002z00_2501 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_thz00_26)); 
BgL_objzd2classzd2numz00_2498 = BgL_res2002z00_2501; } 
{ /* Llib/thread.scm 380 */
obj_t BgL_arg1885z00_2499;
BgL_arg1885z00_2499 = 
PROCEDURE_REF(BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 380 */
int BgL_offsetz00_2503;
BgL_offsetz00_2503 = 
(int)(BgL_objzd2classzd2numz00_2498); 
{ /* Llib/thread.scm 380 */
long BgL_offsetz00_2504;
BgL_offsetz00_2504 = 
(
(long)(BgL_offsetz00_2503)-OBJECT_TYPE); 
{ /* Llib/thread.scm 380 */
long BgL_modz00_2505;
BgL_modz00_2505 = 
(BgL_offsetz00_2504 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/thread.scm 380 */
long BgL_restz00_2507;
BgL_restz00_2507 = 
(BgL_offsetz00_2504 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/thread.scm 380 */

{ /* Llib/thread.scm 380 */
obj_t BgL_bucketz00_2509;
BgL_bucketz00_2509 = 
VECTOR_REF(
((obj_t)BgL_arg1885z00_2499),BgL_modz00_2505); 
BgL_res2012z00_2533 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_2509),BgL_restz00_2507); } } } } } } } } 
BgL_method1176z00_1560 = BgL_res2012z00_2533; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1176z00_1560, ((long)1)))
{ /* Llib/thread.scm 380 */
return 
PROCEDURE_ENTRY(BgL_method1176z00_1560)(BgL_method1176z00_1560, 
((obj_t)BgL_thz00_26), BEOA);}  else 
{ /* Llib/thread.scm 380 */
FAILURE(BGl_string2782z00zz__threadz00,BGl_list2783z00zz__threadz00,BgL_method1176z00_1560);} } } 

}



/* &thread-initialize! */
obj_t BGl_z62threadzd2initializa7ez12z05zz__threadz00(obj_t BgL_envz00_3408, obj_t BgL_thz00_3409)
{
{ /* Llib/thread.scm 380 */
{ /* Llib/thread.scm 380 */
BgL_threadz00_bglt BgL_auxz00_5890;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3409, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 380 */
BgL_auxz00_5890 = 
((BgL_threadz00_bglt)BgL_thz00_3409)
; }  else 
{ 
obj_t BgL_auxz00_5894;
BgL_auxz00_5894 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)15675)), BGl_string2788z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_thz00_3409); 
FAILURE(BgL_auxz00_5894,BFALSE,BFALSE);} 
return 
BGl_threadzd2initializa7ez12z67zz__threadz00(BgL_auxz00_5890);} } 

}



/* thread-start! */
BGL_EXPORTED_DEF obj_t BGl_threadzd2startz12zc0zz__threadz00(BgL_threadz00_bglt BgL_thz00_27, obj_t BgL_scz00_28)
{
{ /* Llib/thread.scm 386 */
{ /* Llib/thread.scm 386 */
obj_t BgL_method1178z00_1561;
{ /* Llib/thread.scm 386 */
obj_t BgL_res2023z00_2570;
{ /* Llib/thread.scm 386 */
long BgL_objzd2classzd2numz00_2535;
{ /* Llib/thread.scm 386 */
long BgL_res2013z00_2538;
BgL_res2013z00_2538 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_thz00_27)); 
BgL_objzd2classzd2numz00_2535 = BgL_res2013z00_2538; } 
{ /* Llib/thread.scm 386 */
obj_t BgL_arg1885z00_2536;
BgL_arg1885z00_2536 = 
PROCEDURE_REF(BGl_threadzd2startz12zd2envz12zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 386 */
int BgL_offsetz00_2540;
BgL_offsetz00_2540 = 
(int)(BgL_objzd2classzd2numz00_2535); 
{ /* Llib/thread.scm 386 */
long BgL_offsetz00_2541;
BgL_offsetz00_2541 = 
(
(long)(BgL_offsetz00_2540)-OBJECT_TYPE); 
{ /* Llib/thread.scm 386 */
long BgL_modz00_2542;
BgL_modz00_2542 = 
(BgL_offsetz00_2541 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/thread.scm 386 */
long BgL_restz00_2544;
BgL_restz00_2544 = 
(BgL_offsetz00_2541 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/thread.scm 386 */

{ /* Llib/thread.scm 386 */
obj_t BgL_bucketz00_2546;
BgL_bucketz00_2546 = 
VECTOR_REF(
((obj_t)BgL_arg1885z00_2536),BgL_modz00_2542); 
BgL_res2023z00_2570 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_2546),BgL_restz00_2544); } } } } } } } } 
BgL_method1178z00_1561 = BgL_res2023z00_2570; } 
{ /* Llib/thread.scm 386 */
obj_t BgL_valz00_3931;
{ /* Llib/thread.scm 386 */
obj_t BgL_list1484z00_1562;
BgL_list1484z00_1562 = 
MAKE_YOUNG_PAIR(BgL_scz00_28, BNIL); 
BgL_valz00_3931 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
((obj_t)BgL_thz00_27), BgL_list1484z00_1562); } 
{ /* Llib/thread.scm 386 */
int BgL_len2432z00_3932;
BgL_len2432z00_3932 = 
(int)(
bgl_list_length(BgL_valz00_3931)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1178z00_1561, BgL_len2432z00_3932))
{ /* Llib/thread.scm 386 */
return 
apply(BgL_method1178z00_1561, BgL_valz00_3931);}  else 
{ /* Llib/thread.scm 386 */
FAILURE(BGl_symbol2789z00zz__threadz00,BGl_string2791z00zz__threadz00,BGl_list2792z00zz__threadz00);} } } } } 

}



/* &thread-start! */
obj_t BGl_z62threadzd2startz12za2zz__threadz00(obj_t BgL_envz00_3479, obj_t BgL_thz00_3480, obj_t BgL_scz00_3481)
{
{ /* Llib/thread.scm 386 */
{ /* Llib/thread.scm 386 */
BgL_threadz00_bglt BgL_auxz00_5934;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3480, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 386 */
BgL_auxz00_5934 = 
((BgL_threadz00_bglt)BgL_thz00_3480)
; }  else 
{ 
obj_t BgL_auxz00_5938;
BgL_auxz00_5938 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)15953)), BGl_string2815z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_thz00_3480); 
FAILURE(BgL_auxz00_5938,BFALSE,BFALSE);} 
return 
BGl_threadzd2startz12zc0zz__threadz00(BgL_auxz00_5934, BgL_scz00_3481);} } 

}



/* thread-start-joinable! */
BGL_EXPORTED_DEF obj_t BGl_threadzd2startzd2joinablez12z12zz__threadz00(BgL_threadz00_bglt BgL_thz00_29)
{
{ /* Llib/thread.scm 391 */
{ /* Llib/thread.scm 391 */
obj_t BgL_method1180z00_1563;
{ /* Llib/thread.scm 391 */
obj_t BgL_res2034z00_2607;
{ /* Llib/thread.scm 391 */
long BgL_objzd2classzd2numz00_2572;
{ /* Llib/thread.scm 391 */
long BgL_res2024z00_2575;
BgL_res2024z00_2575 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_thz00_29)); 
BgL_objzd2classzd2numz00_2572 = BgL_res2024z00_2575; } 
{ /* Llib/thread.scm 391 */
obj_t BgL_arg1885z00_2573;
BgL_arg1885z00_2573 = 
PROCEDURE_REF(BGl_threadzd2startzd2joinablez12zd2envzc0zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 391 */
int BgL_offsetz00_2577;
BgL_offsetz00_2577 = 
(int)(BgL_objzd2classzd2numz00_2572); 
{ /* Llib/thread.scm 391 */
long BgL_offsetz00_2578;
BgL_offsetz00_2578 = 
(
(long)(BgL_offsetz00_2577)-OBJECT_TYPE); 
{ /* Llib/thread.scm 391 */
long BgL_modz00_2579;
BgL_modz00_2579 = 
(BgL_offsetz00_2578 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/thread.scm 391 */
long BgL_restz00_2581;
BgL_restz00_2581 = 
(BgL_offsetz00_2578 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/thread.scm 391 */

{ /* Llib/thread.scm 391 */
obj_t BgL_bucketz00_2583;
BgL_bucketz00_2583 = 
VECTOR_REF(
((obj_t)BgL_arg1885z00_2573),BgL_modz00_2579); 
BgL_res2034z00_2607 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_2583),BgL_restz00_2581); } } } } } } } } 
BgL_method1180z00_1563 = BgL_res2034z00_2607; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1180z00_1563, ((long)1)))
{ /* Llib/thread.scm 391 */
return 
PROCEDURE_ENTRY(BgL_method1180z00_1563)(BgL_method1180z00_1563, 
((obj_t)BgL_thz00_29), BEOA);}  else 
{ /* Llib/thread.scm 391 */
FAILURE(BGl_string2816z00zz__threadz00,BGl_list2817z00zz__threadz00,BgL_method1180z00_1563);} } } 

}



/* &thread-start-joinable! */
obj_t BGl_z62threadzd2startzd2joinablez12z70zz__threadz00(obj_t BgL_envz00_3482, obj_t BgL_thz00_3483)
{
{ /* Llib/thread.scm 391 */
{ /* Llib/thread.scm 391 */
BgL_threadz00_bglt BgL_auxz00_5976;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3483, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 391 */
BgL_auxz00_5976 = 
((BgL_threadz00_bglt)BgL_thz00_3483)
; }  else 
{ 
obj_t BgL_auxz00_5980;
BgL_auxz00_5980 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)16225)), BGl_string2820z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_thz00_3483); 
FAILURE(BgL_auxz00_5980,BFALSE,BFALSE);} 
return 
BGl_threadzd2startzd2joinablez12z12zz__threadz00(BgL_auxz00_5976);} } 

}



/* thread-join! */
BGL_EXPORTED_DEF obj_t BGl_threadzd2joinz12zc0zz__threadz00(BgL_threadz00_bglt BgL_thz00_30, obj_t BgL_timeoutz00_31)
{
{ /* Llib/thread.scm 396 */
{ /* Llib/thread.scm 396 */
obj_t BgL_method1183z00_1564;
{ /* Llib/thread.scm 396 */
obj_t BgL_res2045z00_2644;
{ /* Llib/thread.scm 396 */
long BgL_objzd2classzd2numz00_2609;
{ /* Llib/thread.scm 396 */
long BgL_res2035z00_2612;
BgL_res2035z00_2612 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_thz00_30)); 
BgL_objzd2classzd2numz00_2609 = BgL_res2035z00_2612; } 
{ /* Llib/thread.scm 396 */
obj_t BgL_arg1885z00_2610;
BgL_arg1885z00_2610 = 
PROCEDURE_REF(BGl_threadzd2joinz12zd2envz12zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 396 */
int BgL_offsetz00_2614;
BgL_offsetz00_2614 = 
(int)(BgL_objzd2classzd2numz00_2609); 
{ /* Llib/thread.scm 396 */
long BgL_offsetz00_2615;
BgL_offsetz00_2615 = 
(
(long)(BgL_offsetz00_2614)-OBJECT_TYPE); 
{ /* Llib/thread.scm 396 */
long BgL_modz00_2616;
BgL_modz00_2616 = 
(BgL_offsetz00_2615 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/thread.scm 396 */
long BgL_restz00_2618;
BgL_restz00_2618 = 
(BgL_offsetz00_2615 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/thread.scm 396 */

{ /* Llib/thread.scm 396 */
obj_t BgL_bucketz00_2620;
BgL_bucketz00_2620 = 
VECTOR_REF(
((obj_t)BgL_arg1885z00_2610),BgL_modz00_2616); 
BgL_res2045z00_2644 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_2620),BgL_restz00_2618); } } } } } } } } 
BgL_method1183z00_1564 = BgL_res2045z00_2644; } 
{ /* Llib/thread.scm 396 */
obj_t BgL_valz00_3946;
{ /* Llib/thread.scm 396 */
obj_t BgL_list1485z00_1565;
BgL_list1485z00_1565 = 
MAKE_YOUNG_PAIR(BgL_timeoutz00_31, BNIL); 
BgL_valz00_3946 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
((obj_t)BgL_thz00_30), BgL_list1485z00_1565); } 
{ /* Llib/thread.scm 396 */
int BgL_len2440z00_3947;
BgL_len2440z00_3947 = 
(int)(
bgl_list_length(BgL_valz00_3946)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1183z00_1564, BgL_len2440z00_3947))
{ /* Llib/thread.scm 396 */
return 
apply(BgL_method1183z00_1564, BgL_valz00_3946);}  else 
{ /* Llib/thread.scm 396 */
FAILURE(BGl_symbol2821z00zz__threadz00,BGl_string2791z00zz__threadz00,BGl_list2823z00zz__threadz00);} } } } } 

}



/* &thread-join! */
obj_t BGl_z62threadzd2joinz12za2zz__threadz00(obj_t BgL_envz00_3484, obj_t BgL_thz00_3485, obj_t BgL_timeoutz00_3486)
{
{ /* Llib/thread.scm 396 */
{ /* Llib/thread.scm 396 */
BgL_threadz00_bglt BgL_auxz00_6020;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3485, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 396 */
BgL_auxz00_6020 = 
((BgL_threadz00_bglt)BgL_thz00_3485)
; }  else 
{ 
obj_t BgL_auxz00_6024;
BgL_auxz00_6024 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)16501)), BGl_string2835z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_thz00_3485); 
FAILURE(BgL_auxz00_6024,BFALSE,BFALSE);} 
return 
BGl_threadzd2joinz12zc0zz__threadz00(BgL_auxz00_6020, BgL_timeoutz00_3486);} } 

}



/* thread-terminate! */
BGL_EXPORTED_DEF obj_t BGl_threadzd2terminatez12zc0zz__threadz00(BgL_threadz00_bglt BgL_thz00_32)
{
{ /* Llib/thread.scm 401 */
{ /* Llib/thread.scm 401 */
obj_t BgL_method1185z00_1566;
{ /* Llib/thread.scm 401 */
obj_t BgL_res2056z00_2681;
{ /* Llib/thread.scm 401 */
long BgL_objzd2classzd2numz00_2646;
{ /* Llib/thread.scm 401 */
long BgL_res2046z00_2649;
BgL_res2046z00_2649 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_thz00_32)); 
BgL_objzd2classzd2numz00_2646 = BgL_res2046z00_2649; } 
{ /* Llib/thread.scm 401 */
obj_t BgL_arg1885z00_2647;
BgL_arg1885z00_2647 = 
PROCEDURE_REF(BGl_threadzd2terminatez12zd2envz12zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 401 */
int BgL_offsetz00_2651;
BgL_offsetz00_2651 = 
(int)(BgL_objzd2classzd2numz00_2646); 
{ /* Llib/thread.scm 401 */
long BgL_offsetz00_2652;
BgL_offsetz00_2652 = 
(
(long)(BgL_offsetz00_2651)-OBJECT_TYPE); 
{ /* Llib/thread.scm 401 */
long BgL_modz00_2653;
BgL_modz00_2653 = 
(BgL_offsetz00_2652 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/thread.scm 401 */
long BgL_restz00_2655;
BgL_restz00_2655 = 
(BgL_offsetz00_2652 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/thread.scm 401 */

{ /* Llib/thread.scm 401 */
obj_t BgL_bucketz00_2657;
BgL_bucketz00_2657 = 
VECTOR_REF(
((obj_t)BgL_arg1885z00_2647),BgL_modz00_2653); 
BgL_res2056z00_2681 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_2657),BgL_restz00_2655); } } } } } } } } 
BgL_method1185z00_1566 = BgL_res2056z00_2681; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1185z00_1566, ((long)1)))
{ /* Llib/thread.scm 401 */
return 
PROCEDURE_ENTRY(BgL_method1185z00_1566)(BgL_method1185z00_1566, 
((obj_t)BgL_thz00_32), BEOA);}  else 
{ /* Llib/thread.scm 401 */
FAILURE(BGl_string2836z00zz__threadz00,BGl_list2837z00zz__threadz00,BgL_method1185z00_1566);} } } 

}



/* &thread-terminate! */
obj_t BGl_z62threadzd2terminatez12za2zz__threadz00(obj_t BgL_envz00_3487, obj_t BgL_thz00_3488)
{
{ /* Llib/thread.scm 401 */
{ /* Llib/thread.scm 401 */
BgL_threadz00_bglt BgL_auxz00_6062;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3488, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 401 */
BgL_auxz00_6062 = 
((BgL_threadz00_bglt)BgL_thz00_3488)
; }  else 
{ 
obj_t BgL_auxz00_6066;
BgL_auxz00_6066 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)16777)), BGl_string2840z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_thz00_3488); 
FAILURE(BgL_auxz00_6066,BFALSE,BFALSE);} 
return 
BGl_threadzd2terminatez12zc0zz__threadz00(BgL_auxz00_6062);} } 

}



/* thread-specific */
BGL_EXPORTED_DEF obj_t BGl_threadzd2specificzd2zz__threadz00(BgL_threadz00_bglt BgL_thz00_33)
{
{ /* Llib/thread.scm 406 */
{ /* Llib/thread.scm 406 */
obj_t BgL_method1188z00_1567;
{ /* Llib/thread.scm 406 */
obj_t BgL_res2067z00_2718;
{ /* Llib/thread.scm 406 */
long BgL_objzd2classzd2numz00_2683;
{ /* Llib/thread.scm 406 */
long BgL_res2057z00_2686;
BgL_res2057z00_2686 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_thz00_33)); 
BgL_objzd2classzd2numz00_2683 = BgL_res2057z00_2686; } 
{ /* Llib/thread.scm 406 */
obj_t BgL_arg1885z00_2684;
BgL_arg1885z00_2684 = 
PROCEDURE_REF(BGl_threadzd2specificzd2envz00zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 406 */
int BgL_offsetz00_2688;
BgL_offsetz00_2688 = 
(int)(BgL_objzd2classzd2numz00_2683); 
{ /* Llib/thread.scm 406 */
long BgL_offsetz00_2689;
BgL_offsetz00_2689 = 
(
(long)(BgL_offsetz00_2688)-OBJECT_TYPE); 
{ /* Llib/thread.scm 406 */
long BgL_modz00_2690;
BgL_modz00_2690 = 
(BgL_offsetz00_2689 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/thread.scm 406 */
long BgL_restz00_2692;
BgL_restz00_2692 = 
(BgL_offsetz00_2689 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/thread.scm 406 */

{ /* Llib/thread.scm 406 */
obj_t BgL_bucketz00_2694;
BgL_bucketz00_2694 = 
VECTOR_REF(
((obj_t)BgL_arg1885z00_2684),BgL_modz00_2690); 
BgL_res2067z00_2718 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_2694),BgL_restz00_2692); } } } } } } } } 
BgL_method1188z00_1567 = BgL_res2067z00_2718; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1188z00_1567, ((long)1)))
{ /* Llib/thread.scm 406 */
return 
PROCEDURE_ENTRY(BgL_method1188z00_1567)(BgL_method1188z00_1567, 
((obj_t)BgL_thz00_33), BEOA);}  else 
{ /* Llib/thread.scm 406 */
FAILURE(BGl_string2841z00zz__threadz00,BGl_list2842z00zz__threadz00,BgL_method1188z00_1567);} } } 

}



/* &thread-specific */
obj_t BGl_z62threadzd2specificzb0zz__threadz00(obj_t BgL_envz00_3489, obj_t BgL_thz00_3490)
{
{ /* Llib/thread.scm 406 */
{ /* Llib/thread.scm 406 */
BgL_threadz00_bglt BgL_auxz00_6104;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3490, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 406 */
BgL_auxz00_6104 = 
((BgL_threadz00_bglt)BgL_thz00_3490)
; }  else 
{ 
obj_t BgL_auxz00_6108;
BgL_auxz00_6108 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)17048)), BGl_string2845z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_thz00_3490); 
FAILURE(BgL_auxz00_6108,BFALSE,BFALSE);} 
return 
BGl_threadzd2specificzd2zz__threadz00(BgL_auxz00_6104);} } 

}



/* thread-specific-set! */
BGL_EXPORTED_DEF obj_t BGl_threadzd2specificzd2setz12z12zz__threadz00(BgL_threadz00_bglt BgL_thz00_34, obj_t BgL_vz00_35)
{
{ /* Llib/thread.scm 411 */
{ /* Llib/thread.scm 411 */
obj_t BgL_method1190z00_1568;
{ /* Llib/thread.scm 411 */
obj_t BgL_res2078z00_2755;
{ /* Llib/thread.scm 411 */
long BgL_objzd2classzd2numz00_2720;
{ /* Llib/thread.scm 411 */
long BgL_res2068z00_2723;
BgL_res2068z00_2723 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_thz00_34)); 
BgL_objzd2classzd2numz00_2720 = BgL_res2068z00_2723; } 
{ /* Llib/thread.scm 411 */
obj_t BgL_arg1885z00_2721;
BgL_arg1885z00_2721 = 
PROCEDURE_REF(BGl_threadzd2specificzd2setz12zd2envzc0zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 411 */
int BgL_offsetz00_2725;
BgL_offsetz00_2725 = 
(int)(BgL_objzd2classzd2numz00_2720); 
{ /* Llib/thread.scm 411 */
long BgL_offsetz00_2726;
BgL_offsetz00_2726 = 
(
(long)(BgL_offsetz00_2725)-OBJECT_TYPE); 
{ /* Llib/thread.scm 411 */
long BgL_modz00_2727;
BgL_modz00_2727 = 
(BgL_offsetz00_2726 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/thread.scm 411 */
long BgL_restz00_2729;
BgL_restz00_2729 = 
(BgL_offsetz00_2726 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/thread.scm 411 */

{ /* Llib/thread.scm 411 */
obj_t BgL_bucketz00_2731;
BgL_bucketz00_2731 = 
VECTOR_REF(
((obj_t)BgL_arg1885z00_2721),BgL_modz00_2727); 
BgL_res2078z00_2755 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_2731),BgL_restz00_2729); } } } } } } } } 
BgL_method1190z00_1568 = BgL_res2078z00_2755; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1190z00_1568, ((long)2)))
{ /* Llib/thread.scm 411 */
return 
PROCEDURE_ENTRY(BgL_method1190z00_1568)(BgL_method1190z00_1568, 
((obj_t)BgL_thz00_34), BgL_vz00_35, BEOA);}  else 
{ /* Llib/thread.scm 411 */
FAILURE(BGl_string2846z00zz__threadz00,BGl_list2847z00zz__threadz00,BgL_method1190z00_1568);} } } 

}



/* &thread-specific-set! */
obj_t BGl_z62threadzd2specificzd2setz12z70zz__threadz00(obj_t BgL_envz00_3491, obj_t BgL_thz00_3492, obj_t BgL_vz00_3493)
{
{ /* Llib/thread.scm 411 */
{ /* Llib/thread.scm 411 */
BgL_threadz00_bglt BgL_auxz00_6147;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3492, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 411 */
BgL_auxz00_6147 = 
((BgL_threadz00_bglt)BgL_thz00_3492)
; }  else 
{ 
obj_t BgL_auxz00_6151;
BgL_auxz00_6151 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)17317)), BGl_string2852z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_thz00_3492); 
FAILURE(BgL_auxz00_6151,BFALSE,BFALSE);} 
return 
BGl_threadzd2specificzd2setz12z12zz__threadz00(BgL_auxz00_6147, BgL_vz00_3493);} } 

}



/* thread-cleanup */
BGL_EXPORTED_DEF obj_t BGl_threadzd2cleanupzd2zz__threadz00(BgL_threadz00_bglt BgL_thz00_36)
{
{ /* Llib/thread.scm 416 */
{ /* Llib/thread.scm 416 */
obj_t BgL_method1192z00_1569;
{ /* Llib/thread.scm 416 */
obj_t BgL_res2089z00_2792;
{ /* Llib/thread.scm 416 */
long BgL_objzd2classzd2numz00_2757;
{ /* Llib/thread.scm 416 */
long BgL_res2079z00_2760;
BgL_res2079z00_2760 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_thz00_36)); 
BgL_objzd2classzd2numz00_2757 = BgL_res2079z00_2760; } 
{ /* Llib/thread.scm 416 */
obj_t BgL_arg1885z00_2758;
BgL_arg1885z00_2758 = 
PROCEDURE_REF(BGl_threadzd2cleanupzd2envz00zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 416 */
int BgL_offsetz00_2762;
BgL_offsetz00_2762 = 
(int)(BgL_objzd2classzd2numz00_2757); 
{ /* Llib/thread.scm 416 */
long BgL_offsetz00_2763;
BgL_offsetz00_2763 = 
(
(long)(BgL_offsetz00_2762)-OBJECT_TYPE); 
{ /* Llib/thread.scm 416 */
long BgL_modz00_2764;
BgL_modz00_2764 = 
(BgL_offsetz00_2763 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/thread.scm 416 */
long BgL_restz00_2766;
BgL_restz00_2766 = 
(BgL_offsetz00_2763 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/thread.scm 416 */

{ /* Llib/thread.scm 416 */
obj_t BgL_bucketz00_2768;
BgL_bucketz00_2768 = 
VECTOR_REF(
((obj_t)BgL_arg1885z00_2758),BgL_modz00_2764); 
BgL_res2089z00_2792 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_2768),BgL_restz00_2766); } } } } } } } } 
BgL_method1192z00_1569 = BgL_res2089z00_2792; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1192z00_1569, ((long)1)))
{ /* Llib/thread.scm 416 */
return 
PROCEDURE_ENTRY(BgL_method1192z00_1569)(BgL_method1192z00_1569, 
((obj_t)BgL_thz00_36), BEOA);}  else 
{ /* Llib/thread.scm 416 */
FAILURE(BGl_string2853z00zz__threadz00,BGl_list2854z00zz__threadz00,BgL_method1192z00_1569);} } } 

}



/* &thread-cleanup */
obj_t BGl_z62threadzd2cleanupzb0zz__threadz00(obj_t BgL_envz00_3494, obj_t BgL_thz00_3495)
{
{ /* Llib/thread.scm 416 */
{ /* Llib/thread.scm 416 */
BgL_threadz00_bglt BgL_auxz00_6189;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3495, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 416 */
BgL_auxz00_6189 = 
((BgL_threadz00_bglt)BgL_thz00_3495)
; }  else 
{ 
obj_t BgL_auxz00_6193;
BgL_auxz00_6193 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)17598)), BGl_string2857z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_thz00_3495); 
FAILURE(BgL_auxz00_6193,BFALSE,BFALSE);} 
return 
BGl_threadzd2cleanupzd2zz__threadz00(BgL_auxz00_6189);} } 

}



/* thread-cleanup-set! */
BGL_EXPORTED_DEF obj_t BGl_threadzd2cleanupzd2setz12z12zz__threadz00(BgL_threadz00_bglt BgL_thz00_37, obj_t BgL_vz00_38)
{
{ /* Llib/thread.scm 421 */
{ /* Llib/thread.scm 421 */
obj_t BgL_method1194z00_1570;
{ /* Llib/thread.scm 421 */
obj_t BgL_res2100z00_2829;
{ /* Llib/thread.scm 421 */
long BgL_objzd2classzd2numz00_2794;
{ /* Llib/thread.scm 421 */
long BgL_res2090z00_2797;
BgL_res2090z00_2797 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_thz00_37)); 
BgL_objzd2classzd2numz00_2794 = BgL_res2090z00_2797; } 
{ /* Llib/thread.scm 421 */
obj_t BgL_arg1885z00_2795;
BgL_arg1885z00_2795 = 
PROCEDURE_REF(BGl_threadzd2cleanupzd2setz12zd2envzc0zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 421 */
int BgL_offsetz00_2799;
BgL_offsetz00_2799 = 
(int)(BgL_objzd2classzd2numz00_2794); 
{ /* Llib/thread.scm 421 */
long BgL_offsetz00_2800;
BgL_offsetz00_2800 = 
(
(long)(BgL_offsetz00_2799)-OBJECT_TYPE); 
{ /* Llib/thread.scm 421 */
long BgL_modz00_2801;
BgL_modz00_2801 = 
(BgL_offsetz00_2800 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/thread.scm 421 */
long BgL_restz00_2803;
BgL_restz00_2803 = 
(BgL_offsetz00_2800 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/thread.scm 421 */

{ /* Llib/thread.scm 421 */
obj_t BgL_bucketz00_2805;
BgL_bucketz00_2805 = 
VECTOR_REF(
((obj_t)BgL_arg1885z00_2795),BgL_modz00_2801); 
BgL_res2100z00_2829 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_2805),BgL_restz00_2803); } } } } } } } } 
BgL_method1194z00_1570 = BgL_res2100z00_2829; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1194z00_1570, ((long)2)))
{ /* Llib/thread.scm 421 */
return 
PROCEDURE_ENTRY(BgL_method1194z00_1570)(BgL_method1194z00_1570, 
((obj_t)BgL_thz00_37), BgL_vz00_38, BEOA);}  else 
{ /* Llib/thread.scm 421 */
FAILURE(BGl_string2858z00zz__threadz00,BGl_list2859z00zz__threadz00,BgL_method1194z00_1570);} } } 

}



/* &thread-cleanup-set! */
obj_t BGl_z62threadzd2cleanupzd2setz12z70zz__threadz00(obj_t BgL_envz00_3496, obj_t BgL_thz00_3497, obj_t BgL_vz00_3498)
{
{ /* Llib/thread.scm 421 */
{ /* Llib/thread.scm 421 */
BgL_threadz00_bglt BgL_auxz00_6232;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3497, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 421 */
BgL_auxz00_6232 = 
((BgL_threadz00_bglt)BgL_thz00_3497)
; }  else 
{ 
obj_t BgL_auxz00_6236;
BgL_auxz00_6236 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)17866)), BGl_string2862z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_thz00_3497); 
FAILURE(BgL_auxz00_6236,BFALSE,BFALSE);} 
return 
BGl_threadzd2cleanupzd2setz12z12zz__threadz00(BgL_auxz00_6232, BgL_vz00_3498);} } 

}



/* %user-current-thread */
BGL_EXPORTED_DEF obj_t BGl_z52userzd2currentzd2threadz52zz__threadz00(BgL_threadz00_bglt BgL_oz00_43)
{
{ /* Llib/thread.scm 432 */
{ /* Llib/thread.scm 432 */
obj_t BgL_method1201z00_1571;
{ /* Llib/thread.scm 432 */
obj_t BgL_res2111z00_2866;
{ /* Llib/thread.scm 432 */
long BgL_objzd2classzd2numz00_2831;
{ /* Llib/thread.scm 432 */
long BgL_res2101z00_2834;
BgL_res2101z00_2834 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_oz00_43)); 
BgL_objzd2classzd2numz00_2831 = BgL_res2101z00_2834; } 
{ /* Llib/thread.scm 432 */
obj_t BgL_arg1885z00_2832;
BgL_arg1885z00_2832 = 
PROCEDURE_REF(BGl_z52userzd2currentzd2threadzd2envz80zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 432 */
int BgL_offsetz00_2836;
BgL_offsetz00_2836 = 
(int)(BgL_objzd2classzd2numz00_2831); 
{ /* Llib/thread.scm 432 */
long BgL_offsetz00_2837;
BgL_offsetz00_2837 = 
(
(long)(BgL_offsetz00_2836)-OBJECT_TYPE); 
{ /* Llib/thread.scm 432 */
long BgL_modz00_2838;
BgL_modz00_2838 = 
(BgL_offsetz00_2837 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/thread.scm 432 */
long BgL_restz00_2840;
BgL_restz00_2840 = 
(BgL_offsetz00_2837 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/thread.scm 432 */

{ /* Llib/thread.scm 432 */
obj_t BgL_bucketz00_2842;
BgL_bucketz00_2842 = 
VECTOR_REF(
((obj_t)BgL_arg1885z00_2832),BgL_modz00_2838); 
BgL_res2111z00_2866 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_2842),BgL_restz00_2840); } } } } } } } } 
BgL_method1201z00_1571 = BgL_res2111z00_2866; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1201z00_1571, ((long)1)))
{ /* Llib/thread.scm 432 */
return 
PROCEDURE_ENTRY(BgL_method1201z00_1571)(BgL_method1201z00_1571, 
((obj_t)BgL_oz00_43), BEOA);}  else 
{ /* Llib/thread.scm 432 */
FAILURE(BGl_string2863z00zz__threadz00,BGl_list2864z00zz__threadz00,BgL_method1201z00_1571);} } } 

}



/* &%user-current-thread */
obj_t BGl_z62z52userzd2currentzd2threadz30zz__threadz00(obj_t BgL_envz00_3499, obj_t BgL_oz00_3500)
{
{ /* Llib/thread.scm 432 */
{ /* Llib/thread.scm 432 */
BgL_threadz00_bglt BgL_auxz00_6274;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3500, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 432 */
BgL_auxz00_6274 = 
((BgL_threadz00_bglt)BgL_oz00_3500)
; }  else 
{ 
obj_t BgL_auxz00_6278;
BgL_auxz00_6278 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)18494)), BGl_string2869z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_oz00_3500); 
FAILURE(BgL_auxz00_6278,BFALSE,BFALSE);} 
return 
BGl_z52userzd2currentzd2threadz52zz__threadz00(BgL_auxz00_6274);} } 

}



/* %user-thread-sleep! */
BGL_EXPORTED_DEF obj_t BGl_z52userzd2threadzd2sleepz12z40zz__threadz00(BgL_threadz00_bglt BgL_oz00_44, obj_t BgL_dz00_45)
{
{ /* Llib/thread.scm 454 */
{ /* Llib/thread.scm 454 */
obj_t BgL_method1203z00_1572;
{ /* Llib/thread.scm 454 */
obj_t BgL_res2122z00_2903;
{ /* Llib/thread.scm 454 */
long BgL_objzd2classzd2numz00_2868;
{ /* Llib/thread.scm 454 */
long BgL_res2112z00_2871;
BgL_res2112z00_2871 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_oz00_44)); 
BgL_objzd2classzd2numz00_2868 = BgL_res2112z00_2871; } 
{ /* Llib/thread.scm 454 */
obj_t BgL_arg1885z00_2869;
BgL_arg1885z00_2869 = 
PROCEDURE_REF(BGl_z52userzd2threadzd2sleepz12zd2envz92zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 454 */
int BgL_offsetz00_2873;
BgL_offsetz00_2873 = 
(int)(BgL_objzd2classzd2numz00_2868); 
{ /* Llib/thread.scm 454 */
long BgL_offsetz00_2874;
BgL_offsetz00_2874 = 
(
(long)(BgL_offsetz00_2873)-OBJECT_TYPE); 
{ /* Llib/thread.scm 454 */
long BgL_modz00_2875;
BgL_modz00_2875 = 
(BgL_offsetz00_2874 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/thread.scm 454 */
long BgL_restz00_2877;
BgL_restz00_2877 = 
(BgL_offsetz00_2874 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/thread.scm 454 */

{ /* Llib/thread.scm 454 */
obj_t BgL_bucketz00_2879;
BgL_bucketz00_2879 = 
VECTOR_REF(
((obj_t)BgL_arg1885z00_2869),BgL_modz00_2875); 
BgL_res2122z00_2903 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_2879),BgL_restz00_2877); } } } } } } } } 
BgL_method1203z00_1572 = BgL_res2122z00_2903; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1203z00_1572, ((long)2)))
{ /* Llib/thread.scm 454 */
return 
PROCEDURE_ENTRY(BgL_method1203z00_1572)(BgL_method1203z00_1572, 
((obj_t)BgL_oz00_44), BgL_dz00_45, BEOA);}  else 
{ /* Llib/thread.scm 454 */
FAILURE(BGl_string2870z00zz__threadz00,BGl_list2871z00zz__threadz00,BgL_method1203z00_1572);} } } 

}



/* &%user-thread-sleep! */
obj_t BGl_z62z52userzd2threadzd2sleepz12z22zz__threadz00(obj_t BgL_envz00_3501, obj_t BgL_oz00_3502, obj_t BgL_dz00_3503)
{
{ /* Llib/thread.scm 454 */
{ /* Llib/thread.scm 454 */
BgL_threadz00_bglt BgL_auxz00_6317;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3502, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 454 */
BgL_auxz00_6317 = 
((BgL_threadz00_bglt)BgL_oz00_3502)
; }  else 
{ 
obj_t BgL_auxz00_6321;
BgL_auxz00_6321 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)19468)), BGl_string2876z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_oz00_3502); 
FAILURE(BgL_auxz00_6321,BFALSE,BFALSE);} 
return 
BGl_z52userzd2threadzd2sleepz12z40zz__threadz00(BgL_auxz00_6317, BgL_dz00_3503);} } 

}



/* %user-thread-yield! */
BGL_EXPORTED_DEF obj_t BGl_z52userzd2threadzd2yieldz12z40zz__threadz00(BgL_threadz00_bglt BgL_oz00_47)
{
{ /* Llib/thread.scm 481 */
{ /* Llib/thread.scm 481 */
obj_t BgL_method1205z00_1573;
{ /* Llib/thread.scm 481 */
obj_t BgL_res2133z00_2940;
{ /* Llib/thread.scm 481 */
long BgL_objzd2classzd2numz00_2905;
{ /* Llib/thread.scm 481 */
long BgL_res2123z00_2908;
BgL_res2123z00_2908 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_oz00_47)); 
BgL_objzd2classzd2numz00_2905 = BgL_res2123z00_2908; } 
{ /* Llib/thread.scm 481 */
obj_t BgL_arg1885z00_2906;
BgL_arg1885z00_2906 = 
PROCEDURE_REF(BGl_z52userzd2threadzd2yieldz12zd2envz92zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 481 */
int BgL_offsetz00_2910;
BgL_offsetz00_2910 = 
(int)(BgL_objzd2classzd2numz00_2905); 
{ /* Llib/thread.scm 481 */
long BgL_offsetz00_2911;
BgL_offsetz00_2911 = 
(
(long)(BgL_offsetz00_2910)-OBJECT_TYPE); 
{ /* Llib/thread.scm 481 */
long BgL_modz00_2912;
BgL_modz00_2912 = 
(BgL_offsetz00_2911 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/thread.scm 481 */
long BgL_restz00_2914;
BgL_restz00_2914 = 
(BgL_offsetz00_2911 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/thread.scm 481 */

{ /* Llib/thread.scm 481 */
obj_t BgL_bucketz00_2916;
BgL_bucketz00_2916 = 
VECTOR_REF(
((obj_t)BgL_arg1885z00_2906),BgL_modz00_2912); 
BgL_res2133z00_2940 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_2916),BgL_restz00_2914); } } } } } } } } 
BgL_method1205z00_1573 = BgL_res2133z00_2940; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1205z00_1573, ((long)1)))
{ /* Llib/thread.scm 481 */
return 
PROCEDURE_ENTRY(BgL_method1205z00_1573)(BgL_method1205z00_1573, 
((obj_t)BgL_oz00_47), BEOA);}  else 
{ /* Llib/thread.scm 481 */
FAILURE(BGl_string2877z00zz__threadz00,BGl_list2878z00zz__threadz00,BgL_method1205z00_1573);} } } 

}



/* &%user-thread-yield! */
obj_t BGl_z62z52userzd2threadzd2yieldz12z22zz__threadz00(obj_t BgL_envz00_3504, obj_t BgL_oz00_3505)
{
{ /* Llib/thread.scm 481 */
{ /* Llib/thread.scm 481 */
BgL_threadz00_bglt BgL_auxz00_6359;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3505, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 481 */
BgL_auxz00_6359 = 
((BgL_threadz00_bglt)BgL_oz00_3505)
; }  else 
{ 
obj_t BgL_auxz00_6363;
BgL_auxz00_6363 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)20564)), BGl_string2881z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_oz00_3505); 
FAILURE(BgL_auxz00_6363,BFALSE,BFALSE);} 
return 
BGl_z52userzd2threadzd2yieldz12z40zz__threadz00(BgL_auxz00_6359);} } 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__threadz00()
{
{ /* Llib/thread.scm 17 */
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_tbzd2makezd2threadzd2envzd2zz__threadz00, BGl_nothreadzd2backendzd2zz__threadz00, BGl_proc2882z00zz__threadz00, BGl_string2756z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_tbzd2currentzd2threadzd2envzd2zz__threadz00, BGl_nothreadzd2backendzd2zz__threadz00, BGl_proc2883z00zz__threadz00, BGl_string2884z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_objectzd2displayzd2envz00zz__objectz00, BGl_threadz00zz__threadz00, BGl_proc2885z00zz__threadz00, BGl_string2886z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_objectzd2writezd2envz00zz__objectz00, BGl_threadz00zz__threadz00, BGl_proc2887z00zz__threadz00, BGl_string2888z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_objectzd2printzd2envz00zz__objectz00, BGl_threadz00zz__threadz00, BGl_proc2889z00zz__threadz00, BGl_string2890z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_threadzd2startz12zd2envz12zz__threadz00, BGl_nothreadz00zz__threadz00, BGl_proc2891z00zz__threadz00, BGl_string2790z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_threadzd2startzd2joinablez12zd2envzc0zz__threadz00, BGl_nothreadz00zz__threadz00, BGl_proc2892z00zz__threadz00, BGl_string2893z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_threadzd2joinz12zd2envz12zz__threadz00, BGl_nothreadz00zz__threadz00, BGl_proc2894z00zz__threadz00, BGl_string2822z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_threadzd2terminatez12zd2envz12zz__threadz00, BGl_nothreadz00zz__threadz00, BGl_proc2895z00zz__threadz00, BGl_string2896z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_threadzd2specificzd2envz00zz__threadz00, BGl_nothreadz00zz__threadz00, BGl_proc2897z00zz__threadz00, BGl_string2898z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_threadzd2specificzd2setz12zd2envzc0zz__threadz00, BGl_nothreadz00zz__threadz00, BGl_proc2899z00zz__threadz00, BGl_string2900z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_threadzd2cleanupzd2envz00zz__threadz00, BGl_nothreadz00zz__threadz00, BGl_proc2901z00zz__threadz00, BGl_string2902z00zz__threadz00); 
return 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_threadzd2cleanupzd2setz12zd2envzc0zz__threadz00, BGl_nothreadz00zz__threadz00, BGl_proc2903z00zz__threadz00, BGl_string2904z00zz__threadz00);} 

}



/* &thread-cleanup-set!-1221 */
obj_t BGl_z62threadzd2cleanupzd2setz12zd21221za2zz__threadz00(obj_t BgL_envz00_3524, obj_t BgL_thz00_3525, obj_t BgL_vz00_3526)
{
{ /* Llib/thread.scm 571 */
{ /* Llib/thread.scm 572 */
BgL_nothreadz00_bglt BgL_thz00_4240;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3525, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 572 */
BgL_thz00_4240 = 
((BgL_nothreadz00_bglt)BgL_thz00_3525); }  else 
{ 
obj_t BgL_auxz00_6384;
BgL_auxz00_6384 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)24651)), BGl_string2905z00zz__threadz00, BGl_string2526z00zz__threadz00, BgL_thz00_3525); 
FAILURE(BgL_auxz00_6384,BFALSE,BFALSE);} 
return 
((((BgL_nothreadz00_bglt)COBJECT(BgL_thz00_4240))->BgL_z52cleanupz52)=((obj_t)BgL_vz00_3526),BUNSPEC);} } 

}



/* &thread-cleanup-nothr1219 */
obj_t BGl_z62threadzd2cleanupzd2nothr1219z62zz__threadz00(obj_t BgL_envz00_3527, obj_t BgL_thz00_3528)
{
{ /* Llib/thread.scm 565 */
{ /* Llib/thread.scm 566 */
BgL_nothreadz00_bglt BgL_thz00_4241;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3528, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 566 */
BgL_thz00_4241 = 
((BgL_nothreadz00_bglt)BgL_thz00_3528); }  else 
{ 
obj_t BgL_auxz00_6392;
BgL_auxz00_6392 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)24325)), BGl_string2906z00zz__threadz00, BGl_string2526z00zz__threadz00, BgL_thz00_3528); 
FAILURE(BgL_auxz00_6392,BFALSE,BFALSE);} 
return 
(((BgL_nothreadz00_bglt)COBJECT(BgL_thz00_4241))->BgL_z52cleanupz52);} } 

}



/* &thread-specific-set!1217 */
obj_t BGl_z62threadzd2specificzd2setz121217z70zz__threadz00(obj_t BgL_envz00_3529, obj_t BgL_thz00_3530, obj_t BgL_vz00_3531)
{
{ /* Llib/thread.scm 559 */
{ /* Llib/thread.scm 560 */
BgL_nothreadz00_bglt BgL_thz00_4242;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3530, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 560 */
BgL_thz00_4242 = 
((BgL_nothreadz00_bglt)BgL_thz00_3530); }  else 
{ 
obj_t BgL_auxz00_6400;
BgL_auxz00_6400 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)23995)), BGl_string2907z00zz__threadz00, BGl_string2526z00zz__threadz00, BgL_thz00_3530); 
FAILURE(BgL_auxz00_6400,BFALSE,BFALSE);} 
return 
((((BgL_nothreadz00_bglt)COBJECT(BgL_thz00_4242))->BgL_z52specificz52)=((obj_t)BgL_vz00_3531),BUNSPEC);} } 

}



/* &thread-specific-noth1215 */
obj_t BGl_z62threadzd2specificzd2noth1215z62zz__threadz00(obj_t BgL_envz00_3532, obj_t BgL_thz00_3533)
{
{ /* Llib/thread.scm 553 */
{ /* Llib/thread.scm 554 */
BgL_nothreadz00_bglt BgL_thz00_4243;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3533, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 554 */
BgL_thz00_4243 = 
((BgL_nothreadz00_bglt)BgL_thz00_3533); }  else 
{ 
obj_t BgL_auxz00_6408;
BgL_auxz00_6408 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)23666)), BGl_string2908z00zz__threadz00, BGl_string2526z00zz__threadz00, BgL_thz00_3533); 
FAILURE(BgL_auxz00_6408,BFALSE,BFALSE);} 
return 
(((BgL_nothreadz00_bglt)COBJECT(BgL_thz00_4243))->BgL_z52specificz52);} } 

}



/* &thread-terminate!-no1213 */
obj_t BGl_z62threadzd2terminatez12zd2no1213z70zz__threadz00(obj_t BgL_envz00_3534, obj_t BgL_thz00_3535)
{
{ /* Llib/thread.scm 545 */
{ /* Llib/thread.scm 546 */
BgL_nothreadz00_bglt BgL_thz00_4244;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3535, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 546 */
BgL_thz00_4244 = 
((BgL_nothreadz00_bglt)BgL_thz00_3535); }  else 
{ 
obj_t BgL_auxz00_6416;
BgL_auxz00_6416 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)23294)), BGl_string2914z00zz__threadz00, BGl_string2526z00zz__threadz00, BgL_thz00_3535); 
FAILURE(BgL_auxz00_6416,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 547 */
bool_t BgL_test3463z00_6420;
{ /* Llib/thread.scm 547 */
obj_t BgL_tmpz00_6421;
BgL_tmpz00_6421 = 
(((BgL_nothreadz00_bglt)COBJECT(BgL_thz00_4244))->BgL_z52cleanupz52); 
BgL_test3463z00_6420 = 
PROCEDUREP(BgL_tmpz00_6421); } 
if(BgL_test3463z00_6420)
{ /* Llib/thread.scm 547 */
obj_t BgL_fun1548z00_4245;
BgL_fun1548z00_4245 = 
(((BgL_nothreadz00_bglt)COBJECT(BgL_thz00_4244))->BgL_z52cleanupz52); 
{ /* Llib/thread.scm 547 */
obj_t BgL_funz00_4246;
if(
PROCEDUREP(BgL_fun1548z00_4245))
{ /* Llib/thread.scm 547 */
BgL_funz00_4246 = BgL_fun1548z00_4245; }  else 
{ 
obj_t BgL_auxz00_6427;
BgL_auxz00_6427 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)23365)), BGl_string2909z00zz__threadz00, BGl_string2542z00zz__threadz00, BgL_fun1548z00_4245); 
FAILURE(BgL_auxz00_6427,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4246, ((long)0)))
{ /* Llib/thread.scm 547 */
PROCEDURE_ENTRY(BgL_funz00_4246)(BgL_fun1548z00_4245, BEOA); }  else 
{ /* Llib/thread.scm 547 */
FAILURE(BGl_string2910z00zz__threadz00,BGl_list2911z00zz__threadz00,BgL_funz00_4246);} } }  else 
{ /* Llib/thread.scm 547 */BFALSE; } } 
{ /* Llib/thread.scm 548 */
obj_t BgL_list1552z00_4247;
BgL_list1552z00_4247 = 
MAKE_YOUNG_PAIR(
BINT(((long)0)), BNIL); 
return 
BGl_exitz00zz__errorz00(BgL_list1552z00_4247);} } } 

}



/* &thread-join!-nothrea1211 */
obj_t BGl_z62threadzd2joinz12zd2nothrea1211z70zz__threadz00(obj_t BgL_envz00_3536, obj_t BgL_thz00_3537, obj_t BgL_timeoutz00_3538)
{
{ /* Llib/thread.scm 536 */
{ /* Llib/thread.scm 537 */
BgL_nothreadz00_bglt BgL_thz00_4248;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3537, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 537 */
BgL_thz00_4248 = 
((BgL_nothreadz00_bglt)BgL_thz00_3537); }  else 
{ 
obj_t BgL_auxz00_6443;
BgL_auxz00_6443 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)22883)), BGl_string2915z00zz__threadz00, BGl_string2526z00zz__threadz00, BgL_thz00_3537); 
FAILURE(BgL_auxz00_6443,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 538 */
bool_t BgL_test3467z00_6447;
{ /* Llib/thread.scm 538 */
obj_t BgL_arg1544z00_4249;
BgL_arg1544z00_4249 = 
(((BgL_nothreadz00_bglt)COBJECT(BgL_thz00_4248))->BgL_endzd2exceptionzd2); 
BgL_test3467z00_6447 = 
BGl_isazf3zf3zz__objectz00(BgL_arg1544z00_4249, BGl_z62exceptionz62zz__objectz00); } 
if(BgL_test3467z00_6447)
{ /* Llib/thread.scm 538 */
return 
BGl_raisez00zz__errorz00(
(((BgL_nothreadz00_bglt)COBJECT(BgL_thz00_4248))->BgL_endzd2exceptionzd2));}  else 
{ /* Llib/thread.scm 538 */
return 
(((BgL_nothreadz00_bglt)COBJECT(BgL_thz00_4248))->BgL_endzd2resultzd2);} } } } 

}



/* &thread-start-joinabl1209 */
obj_t BGl_z62threadzd2startzd2joinabl1209z62zz__threadz00(obj_t BgL_envz00_3539, obj_t BgL_thz00_3540)
{
{ /* Llib/thread.scm 530 */
{ /* Llib/thread.scm 531 */
BgL_nothreadz00_bglt BgL_thz00_4250;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3540, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 531 */
BgL_thz00_4250 = 
((BgL_nothreadz00_bglt)BgL_thz00_3540); }  else 
{ 
obj_t BgL_auxz00_6456;
BgL_auxz00_6456 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)22584)), BGl_string2916z00zz__threadz00, BGl_string2526z00zz__threadz00, BgL_thz00_3540); 
FAILURE(BgL_auxz00_6456,BFALSE,BFALSE);} 
return 
BGl_threadzd2startz12zc0zz__threadz00(
((BgL_threadz00_bglt)BgL_thz00_4250), BNIL);} } 

}



/* &thread-start!-nothre1207 */
obj_t BGl_z62threadzd2startz12zd2nothre1207z70zz__threadz00(obj_t BgL_envz00_3541, obj_t BgL_thz00_3542, obj_t BgL_scdz00_3543)
{
{ /* Llib/thread.scm 514 */
{ /* Llib/thread.scm 515 */
BgL_nothreadz00_bglt BgL_thz00_4251;
if(
BGl_isazf3zf3zz__objectz00(BgL_thz00_3542, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 515 */
BgL_thz00_4251 = 
((BgL_nothreadz00_bglt)BgL_thz00_3542); }  else 
{ 
obj_t BgL_auxz00_6465;
BgL_auxz00_6465 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)21992)), BGl_string2917z00zz__threadz00, BGl_string2526z00zz__threadz00, BgL_thz00_3542); 
FAILURE(BgL_auxz00_6465,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 515 */
obj_t BgL_threadz00_4252;
BgL_threadz00_4252 = BGl_za2nothreadzd2currentza2zd2zz__threadz00; 
{ /* Llib/thread.scm 516 */
obj_t BgL_exitd1065z00_4253;
BgL_exitd1065z00_4253 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Llib/thread.scm 525 */
obj_t BgL_zc3z04anonymousza31536ze3z87_4254;
BgL_zc3z04anonymousza31536ze3z87_4254 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31536ze3ze5zz__threadz00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31536ze3z87_4254, 
(int)(((long)0)), BgL_threadz00_4252); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1065z00_4253, BgL_zc3z04anonymousza31536ze3z87_4254); 
{ /* Llib/thread.scm 517 */
BgL_nothreadz00_bglt BgL_tmp1067z00_4255;
BGl_za2nothreadzd2currentza2zd2zz__threadz00 = 
((obj_t)BgL_thz00_4251); 
{ /* Llib/thread.scm 519 */
obj_t BgL_res1071z00_4256;
BgL_res1071z00_4256 = 
MAKE_CELL(BUNSPEC); 
if(
CBOOL(
BGl_zc3z04exitza31529ze3ze70z60zz__threadz00(BgL_thz00_4251, BgL_res1071z00_4256)))
{ /* Llib/thread.scm 519 */
obj_t BgL_ez00_4257;
BgL_ez00_4257 = 
CELL_REF(BgL_res1071z00_4256); 
((((BgL_nothreadz00_bglt)COBJECT(BgL_thz00_4251))->BgL_endzd2exceptionzd2)=((obj_t)BgL_ez00_4257),BUNSPEC); 
BGl_raisez00zz__errorz00(BgL_ez00_4257); }  else 
{ /* Llib/thread.scm 519 */
CELL_REF(BgL_res1071z00_4256); } } 
BgL_tmp1067z00_4255 = BgL_thz00_4251; 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1065z00_4253); 
BGl_za2nothreadzd2currentza2zd2zz__threadz00 = BgL_threadz00_4252; 
return 
((obj_t)BgL_tmp1067z00_4255);} } } } } } 

}



/* <@exit:1529>~0 */
obj_t BGl_zc3z04exitza31529ze3ze70z60zz__threadz00(BgL_nothreadz00_bglt BgL_i1068z00_3587, obj_t BgL_res1071z00_3586)
{
{ /* Llib/thread.scm 519 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit1077z00_1666;
if( SET_EXIT(BgL_an_exit1077z00_1666) ) { 
return 
BGL_EXIT_VALUE();
} else {
#if( SIGSETJMP_SAVESIGS == 0 )
  bgl_restore_signal_handlers();
#endif

BgL_an_exit1077z00_1666 = 
(void *)jmpbuf; 
{ /* Llib/thread.scm 519 */

PUSH_EXIT(BgL_an_exit1077z00_1666, ((long)1)); 
{ /* Llib/thread.scm 519 */
obj_t BgL_an_exitd1078z00_1667;
BgL_an_exitd1078z00_1667 = 
((obj_t)(&exitd)); 
{ /* Llib/thread.scm 519 */
bool_t BgL_res1080z00_1670;
{ /* Llib/thread.scm 519 */
obj_t BgL_ohs1069z00_1671;
BgL_ohs1069z00_1671 = 
BGL_ERROR_HANDLER_GET(); 
{ /* Llib/thread.scm 519 */
obj_t BgL_exitd1074z00_1672;
BgL_exitd1074z00_1672 = 
((obj_t)(&exitd)); 
{ 
obj_t BgL_zc3z04anonymousza31534ze3z87_3514;
BgL_zc3z04anonymousza31534ze3z87_3514 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31534ze3ze5zz__threadz00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31534ze3z87_3514, 
(int)(((long)0)), BgL_ohs1069z00_1671); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1074z00_1672, BgL_zc3z04anonymousza31534ze3z87_3514); 
{ /* Llib/thread.scm 519 */
bool_t BgL_tmp1076z00_1674;
{ /* Llib/thread.scm 519 */
obj_t BgL_arg1530z00_1675;
{ /* Llib/thread.scm 519 */
obj_t BgL_zc3z04anonymousza31532ze3z87_3515;
BgL_zc3z04anonymousza31532ze3z87_3515 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31532ze3ze5zz__threadz00, 
(int)(((long)1)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31532ze3z87_3515, 
(int)(((long)0)), 
((obj_t)BgL_res1071z00_3586)); 
PROCEDURE_SET(BgL_zc3z04anonymousza31532ze3z87_3515, 
(int)(((long)1)), BgL_an_exitd1078z00_1667); 
BgL_arg1530z00_1675 = 
MAKE_YOUNG_PAIR(BgL_zc3z04anonymousza31532ze3z87_3515, BgL_ohs1069z00_1671); } 
BGL_ERROR_HANDLER_SET(BgL_arg1530z00_1675); BUNSPEC; } 
{ /* Llib/thread.scm 519 */
obj_t BgL_auxz00_3545;
{ 
obj_t BgL_auxz00_6504;
{ /* Llib/thread.scm 523 */
obj_t BgL_fun1533z00_1680;
BgL_fun1533z00_1680 = 
(((BgL_nothreadz00_bglt)COBJECT(BgL_i1068z00_3587))->BgL_bodyz00); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fun1533z00_1680, ((long)0)))
{ /* Llib/thread.scm 523 */
BgL_auxz00_6504 = 
PROCEDURE_ENTRY(BgL_fun1533z00_1680)(BgL_fun1533z00_1680, BEOA)
; }  else 
{ /* Llib/thread.scm 523 */
FAILURE(BGl_string2918z00zz__threadz00,BGl_list2919z00zz__threadz00,BgL_fun1533z00_1680);} } 
BgL_auxz00_3545 = 
((((BgL_nothreadz00_bglt)COBJECT(BgL_i1068z00_3587))->BgL_endzd2resultzd2)=((obj_t)BgL_auxz00_6504),BUNSPEC); } 
CELL_SET(BgL_res1071z00_3586, BgL_auxz00_3545); } 
BgL_tmp1076z00_1674 = ((bool_t)0); 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1074z00_1672); 
BGL_ERROR_HANDLER_SET(BgL_ohs1069z00_1671); BUNSPEC; 
BgL_res1080z00_1670 = BgL_tmp1076z00_1674; } } } } 
POP_EXIT(); 
return 
BBOOL(BgL_res1080z00_1670);} } } 
} } 

}



/* &<@anonymous:1532> */
obj_t BGl_z62zc3z04anonymousza31532ze3ze5zz__threadz00(obj_t BgL_envz00_3547, obj_t BgL_ez00_3550)
{
{ /* Llib/thread.scm 519 */
{ /* Llib/thread.scm 519 */
obj_t BgL_res1071z00_3548;obj_t BgL_an_exitd1078z00_3549;
BgL_res1071z00_3548 = 
PROCEDURE_REF(BgL_envz00_3547, 
(int)(((long)0))); 
BgL_an_exitd1078z00_3549 = 
PROCEDURE_REF(BgL_envz00_3547, 
(int)(((long)1))); 
CELL_SET(BgL_res1071z00_3548, BgL_ez00_3550); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1078z00_3549, BTRUE);} } 

}



/* &<@anonymous:1534> */
obj_t BGl_z62zc3z04anonymousza31534ze3ze5zz__threadz00(obj_t BgL_envz00_3552)
{
{ /* Llib/thread.scm 519 */
{ 
obj_t BgL_ohs1069z00_3553;
BgL_ohs1069z00_3553 = 
PROCEDURE_REF(BgL_envz00_3552, 
(int)(((long)0))); 
BGL_ERROR_HANDLER_SET(BgL_ohs1069z00_3553); 
return BUNSPEC;} } 

}



/* &<@anonymous:1536> */
obj_t BGl_z62zc3z04anonymousza31536ze3ze5zz__threadz00(obj_t BgL_envz00_3554)
{
{ /* Llib/thread.scm 516 */
{ /* Llib/thread.scm 525 */
obj_t BgL_threadz00_3555;
BgL_threadz00_3555 = 
PROCEDURE_REF(BgL_envz00_3554, 
(int)(((long)0))); 
return ( 
BGl_za2nothreadzd2currentza2zd2zz__threadz00 = BgL_threadz00_3555, BUNSPEC) ;} } 

}



/* &object-print-thread1174 */
obj_t BGl_z62objectzd2printzd2thread1174z62zz__threadz00(obj_t BgL_envz00_3556, obj_t BgL_oz00_3557, obj_t BgL_portz00_3558, obj_t BgL_printzd2slotzd2_3559)
{
{ /* Llib/thread.scm 374 */
{ /* Llib/thread.scm 375 */
BgL_threadz00_bglt BgL_oz00_4258;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3557, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 375 */
BgL_oz00_4258 = 
((BgL_threadz00_bglt)BgL_oz00_3557); }  else 
{ 
obj_t BgL_auxz00_6530;
BgL_auxz00_6530 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)15429)), BGl_string2922z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_oz00_3557); 
FAILURE(BgL_auxz00_6530,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 375 */
obj_t BgL_list1521z00_4259;
BgL_list1521z00_4259 = 
MAKE_YOUNG_PAIR(BgL_portz00_3558, BNIL); 
return 
BGl_objectzd2writezd2zz__objectz00(
((BgL_objectz00_bglt)BgL_oz00_4258), BgL_list1521z00_4259);} } } 

}



/* &object-write-thread1172 */
obj_t BGl_z62objectzd2writezd2thread1172z62zz__threadz00(obj_t BgL_envz00_3560, obj_t BgL_oz00_3561, obj_t BgL_portz00_3562)
{
{ /* Llib/thread.scm 365 */
{ /* Llib/thread.scm 366 */
BgL_threadz00_bglt BgL_oz00_4260;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3561, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 366 */
BgL_oz00_4260 = 
((BgL_threadz00_bglt)BgL_oz00_3561); }  else 
{ 
obj_t BgL_auxz00_6540;
BgL_auxz00_6540 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)14965)), BGl_string2925z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_oz00_3561); 
FAILURE(BgL_auxz00_6540,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 366 */
obj_t BgL_arg1507z00_4261;
if(
PAIRP(BgL_portz00_3562))
{ /* Llib/thread.scm 366 */
BgL_arg1507z00_4261 = 
CAR(BgL_portz00_3562); }  else 
{ /* Llib/thread.scm 366 */
obj_t BgL_res2140z00_4262;
{ /* Llib/thread.scm 366 */
obj_t BgL_tmpz00_6547;
BgL_tmpz00_6547 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2140z00_4262 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6547); } 
BgL_arg1507z00_4261 = BgL_res2140z00_4262; } 
{ /* Llib/thread.scm 368 */
obj_t BgL_zc3z04anonymousza31510ze3z87_4263;
BgL_zc3z04anonymousza31510ze3z87_4263 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31510ze3ze5zz__threadz00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31510ze3z87_4263, 
(int)(((long)0)), 
((obj_t)BgL_oz00_4260)); 
{ /* Llib/thread.scm 366 */
obj_t BgL_auxz00_6556;
if(
OUTPUT_PORTP(BgL_arg1507z00_4261))
{ /* Llib/thread.scm 366 */
BgL_auxz00_6556 = BgL_arg1507z00_4261
; }  else 
{ 
obj_t BgL_auxz00_6559;
BgL_auxz00_6559 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)15014)), BGl_string2923z00zz__threadz00, BGl_string2924z00zz__threadz00, BgL_arg1507z00_4261); 
FAILURE(BgL_auxz00_6559,BFALSE,BFALSE);} 
return 
BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(BgL_auxz00_6556, BgL_zc3z04anonymousza31510ze3z87_4263);} } } } } 

}



/* &<@anonymous:1510> */
obj_t BGl_z62zc3z04anonymousza31510ze3ze5zz__threadz00(obj_t BgL_envz00_3563)
{
{ /* Llib/thread.scm 367 */
{ /* Llib/thread.scm 368 */
BgL_threadz00_bglt BgL_oz00_3564;
BgL_oz00_3564 = 
((BgL_threadz00_bglt)
PROCEDURE_REF(BgL_envz00_3563, 
(int)(((long)0)))); 
{ /* Llib/thread.scm 369 */
obj_t BgL_arg1511z00_4264;obj_t BgL_arg1512z00_4265;
{ /* Llib/thread.scm 369 */
obj_t BgL_arg1519z00_4266;
{ /* Llib/thread.scm 369 */
long BgL_arg1888z00_4267;
{ /* Llib/thread.scm 369 */
long BgL_arg1889z00_4268;
{ /* Llib/thread.scm 369 */
long BgL_res2141z00_4269;
BgL_res2141z00_4269 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_oz00_3564)); 
BgL_arg1889z00_4268 = BgL_res2141z00_4269; } 
BgL_arg1888z00_4267 = 
(BgL_arg1889z00_4268-OBJECT_TYPE); } 
{ /* Llib/thread.scm 369 */
obj_t BgL_vectorz00_4270;
{ /* Llib/thread.scm 369 */
obj_t BgL_aux2504z00_4271;
BgL_aux2504z00_4271 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux2504z00_4271))
{ /* Llib/thread.scm 369 */
BgL_vectorz00_4270 = BgL_aux2504z00_4271; }  else 
{ 
obj_t BgL_auxz00_6572;
BgL_auxz00_6572 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)15111)), BGl_string2926z00zz__threadz00, BGl_string2927z00zz__threadz00, BgL_aux2504z00_4271); 
FAILURE(BgL_auxz00_6572,BFALSE,BFALSE);} } 
BgL_arg1519z00_4266 = 
VECTOR_REF(BgL_vectorz00_4270,BgL_arg1888z00_4267); } } 
{ /* Llib/thread.scm 369 */
obj_t BgL_auxz00_6577;
if(
BGl_classzf3zf3zz__objectz00(BgL_arg1519z00_4266))
{ /* Llib/thread.scm 369 */
BgL_auxz00_6577 = BgL_arg1519z00_4266
; }  else 
{ 
obj_t BgL_auxz00_6580;
BgL_auxz00_6580 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)15126)), BGl_string2926z00zz__threadz00, BGl_string2928z00zz__threadz00, BgL_arg1519z00_4266); 
FAILURE(BgL_auxz00_6580,BFALSE,BFALSE);} 
BgL_arg1511z00_4264 = 
BGl_classzd2namezd2zz__objectz00(BgL_auxz00_6577); } } 
BgL_arg1512z00_4265 = 
(((BgL_threadz00_bglt)COBJECT(BgL_oz00_3564))->BgL_namez00); 
{ /* Llib/thread.scm 369 */
obj_t BgL_list1513z00_4272;
{ /* Llib/thread.scm 369 */
obj_t BgL_arg1514z00_4273;
{ /* Llib/thread.scm 369 */
obj_t BgL_arg1515z00_4274;
{ /* Llib/thread.scm 369 */
obj_t BgL_arg1516z00_4275;
{ /* Llib/thread.scm 369 */
obj_t BgL_arg1518z00_4276;
BgL_arg1518z00_4276 = 
MAKE_YOUNG_PAIR(BGl_string2929z00zz__threadz00, BNIL); 
BgL_arg1516z00_4275 = 
MAKE_YOUNG_PAIR(BgL_arg1512z00_4265, BgL_arg1518z00_4276); } 
BgL_arg1515z00_4274 = 
MAKE_YOUNG_PAIR(BGl_string2930z00zz__threadz00, BgL_arg1516z00_4275); } 
BgL_arg1514z00_4273 = 
MAKE_YOUNG_PAIR(BgL_arg1511z00_4264, BgL_arg1515z00_4274); } 
BgL_list1513z00_4272 = 
MAKE_YOUNG_PAIR(BGl_string2931z00zz__threadz00, BgL_arg1514z00_4273); } 
return 
BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list1513z00_4272);} } } } 

}



/* &object-display-threa1170 */
obj_t BGl_z62objectzd2displayzd2threa1170z62zz__threadz00(obj_t BgL_envz00_3565, obj_t BgL_oz00_3566, obj_t BgL_portz00_3567)
{
{ /* Llib/thread.scm 356 */
{ /* Llib/thread.scm 357 */
BgL_threadz00_bglt BgL_oz00_4277;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_3566, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 357 */
BgL_oz00_4277 = 
((BgL_threadz00_bglt)BgL_oz00_3566); }  else 
{ 
obj_t BgL_auxz00_6595;
BgL_auxz00_6595 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)14489)), BGl_string2933z00zz__threadz00, BGl_string2540z00zz__threadz00, BgL_oz00_3566); 
FAILURE(BgL_auxz00_6595,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 357 */
obj_t BgL_arg1489z00_4278;
if(
PAIRP(BgL_portz00_3567))
{ /* Llib/thread.scm 357 */
BgL_arg1489z00_4278 = 
CAR(BgL_portz00_3567); }  else 
{ /* Llib/thread.scm 357 */
obj_t BgL_res2136z00_4279;
{ /* Llib/thread.scm 357 */
obj_t BgL_tmpz00_6602;
BgL_tmpz00_6602 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2136z00_4279 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6602); } 
BgL_arg1489z00_4278 = BgL_res2136z00_4279; } 
{ /* Llib/thread.scm 359 */
obj_t BgL_zc3z04anonymousza31493ze3z87_4280;
BgL_zc3z04anonymousza31493ze3z87_4280 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31493ze3ze5zz__threadz00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31493ze3z87_4280, 
(int)(((long)0)), 
((obj_t)BgL_oz00_4277)); 
{ /* Llib/thread.scm 357 */
obj_t BgL_auxz00_6611;
if(
OUTPUT_PORTP(BgL_arg1489z00_4278))
{ /* Llib/thread.scm 357 */
BgL_auxz00_6611 = BgL_arg1489z00_4278
; }  else 
{ 
obj_t BgL_auxz00_6614;
BgL_auxz00_6614 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)14538)), BGl_string2932z00zz__threadz00, BGl_string2924z00zz__threadz00, BgL_arg1489z00_4278); 
FAILURE(BgL_auxz00_6614,BFALSE,BFALSE);} 
return 
BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(BgL_auxz00_6611, BgL_zc3z04anonymousza31493ze3z87_4280);} } } } } 

}



/* &<@anonymous:1493> */
obj_t BGl_z62zc3z04anonymousza31493ze3ze5zz__threadz00(obj_t BgL_envz00_3568)
{
{ /* Llib/thread.scm 358 */
{ /* Llib/thread.scm 359 */
BgL_threadz00_bglt BgL_oz00_3569;
BgL_oz00_3569 = 
((BgL_threadz00_bglt)
PROCEDURE_REF(BgL_envz00_3568, 
(int)(((long)0)))); 
{ /* Llib/thread.scm 360 */
obj_t BgL_arg1494z00_4281;obj_t BgL_arg1495z00_4282;
{ /* Llib/thread.scm 360 */
obj_t BgL_arg1505z00_4283;
{ /* Llib/thread.scm 360 */
long BgL_arg1888z00_4284;
{ /* Llib/thread.scm 360 */
long BgL_arg1889z00_4285;
{ /* Llib/thread.scm 360 */
long BgL_res2137z00_4286;
BgL_res2137z00_4286 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_oz00_3569)); 
BgL_arg1889z00_4285 = BgL_res2137z00_4286; } 
BgL_arg1888z00_4284 = 
(BgL_arg1889z00_4285-OBJECT_TYPE); } 
{ /* Llib/thread.scm 360 */
obj_t BgL_vectorz00_4287;
{ /* Llib/thread.scm 360 */
obj_t BgL_aux2512z00_4288;
BgL_aux2512z00_4288 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux2512z00_4288))
{ /* Llib/thread.scm 360 */
BgL_vectorz00_4287 = BgL_aux2512z00_4288; }  else 
{ 
obj_t BgL_auxz00_6627;
BgL_auxz00_6627 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)14635)), BGl_string2934z00zz__threadz00, BGl_string2927z00zz__threadz00, BgL_aux2512z00_4288); 
FAILURE(BgL_auxz00_6627,BFALSE,BFALSE);} } 
BgL_arg1505z00_4283 = 
VECTOR_REF(BgL_vectorz00_4287,BgL_arg1888z00_4284); } } 
{ /* Llib/thread.scm 360 */
obj_t BgL_auxz00_6632;
if(
BGl_classzf3zf3zz__objectz00(BgL_arg1505z00_4283))
{ /* Llib/thread.scm 360 */
BgL_auxz00_6632 = BgL_arg1505z00_4283
; }  else 
{ 
obj_t BgL_auxz00_6635;
BgL_auxz00_6635 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)14650)), BGl_string2934z00zz__threadz00, BGl_string2928z00zz__threadz00, BgL_arg1505z00_4283); 
FAILURE(BgL_auxz00_6635,BFALSE,BFALSE);} 
BgL_arg1494z00_4281 = 
BGl_classzd2namezd2zz__objectz00(BgL_auxz00_6632); } } 
BgL_arg1495z00_4282 = 
(((BgL_threadz00_bglt)COBJECT(BgL_oz00_3569))->BgL_namez00); 
{ /* Llib/thread.scm 360 */
obj_t BgL_list1496z00_4289;
{ /* Llib/thread.scm 360 */
obj_t BgL_arg1497z00_4290;
{ /* Llib/thread.scm 360 */
obj_t BgL_arg1498z00_4291;
{ /* Llib/thread.scm 360 */
obj_t BgL_arg1500z00_4292;
{ /* Llib/thread.scm 360 */
obj_t BgL_arg1502z00_4293;
BgL_arg1502z00_4293 = 
MAKE_YOUNG_PAIR(BGl_string2929z00zz__threadz00, BNIL); 
BgL_arg1500z00_4292 = 
MAKE_YOUNG_PAIR(BgL_arg1495z00_4282, BgL_arg1502z00_4293); } 
BgL_arg1498z00_4291 = 
MAKE_YOUNG_PAIR(BGl_string2930z00zz__threadz00, BgL_arg1500z00_4292); } 
BgL_arg1497z00_4290 = 
MAKE_YOUNG_PAIR(BgL_arg1494z00_4281, BgL_arg1498z00_4291); } 
BgL_list1496z00_4289 = 
MAKE_YOUNG_PAIR(BGl_string2931z00zz__threadz00, BgL_arg1497z00_4290); } 
return 
BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list1496z00_4289);} } } } 

}



/* &tb-current-thread-no1164 */
obj_t BGl_z62tbzd2currentzd2threadzd2no1164zb0zz__threadz00(obj_t BgL_envz00_3570, obj_t BgL_tbz00_3571)
{
{ /* Llib/thread.scm 340 */
{ /* Llib/thread.scm 340 */
BgL_nothreadzd2backendzd2_bglt BgL_tbz00_4294;
if(
BGl_isazf3zf3zz__objectz00(BgL_tbz00_3571, BGl_nothreadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 340 */
BgL_tbz00_4294 = 
((BgL_nothreadzd2backendzd2_bglt)BgL_tbz00_3571); }  else 
{ 
obj_t BgL_auxz00_6650;
BgL_auxz00_6650 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)13534)), BGl_string2935z00zz__threadz00, BGl_string2651z00zz__threadz00, BgL_tbz00_3571); 
FAILURE(BgL_auxz00_6650,BFALSE,BFALSE);} 
return BGl_za2nothreadzd2currentza2zd2zz__threadz00;} } 

}



/* &tb-make-thread-nothr1162 */
BgL_threadz00_bglt BGl_z62tbzd2makezd2threadzd2nothr1162zb0zz__threadz00(obj_t BgL_envz00_3572, obj_t BgL_tbz00_3573, obj_t BgL_bodyz00_3574, obj_t BgL_namez00_3575)
{
{ /* Llib/thread.scm 332 */
{ /* Llib/thread.scm 333 */
BgL_nothreadzd2backendzd2_bglt BgL_tbz00_4295;
if(
BGl_isazf3zf3zz__objectz00(BgL_tbz00_3573, BGl_nothreadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 333 */
BgL_tbz00_4295 = 
((BgL_nothreadzd2backendzd2_bglt)BgL_tbz00_3573); }  else 
{ 
obj_t BgL_auxz00_6657;
BgL_auxz00_6657 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)13250)), BGl_string2943z00zz__threadz00, BGl_string2651z00zz__threadz00, BgL_tbz00_3573); 
FAILURE(BgL_auxz00_6657,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 333 */
BgL_nothreadz00_bglt BgL_new1060z00_4296;
{ /* Llib/thread.scm 335 */
BgL_nothreadz00_bglt BgL_new1059z00_4297;
BgL_new1059z00_4297 = 
((BgL_nothreadz00_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_nothreadz00_bgl) ))); 
{ /* Llib/thread.scm 335 */
long BgL_arg1487z00_4298;
{ /* Llib/thread.scm 335 */
long BgL_res2134z00_4299;
BgL_res2134z00_4299 = 
BGL_CLASS_INDEX(BGl_nothreadz00zz__threadz00); 
BgL_arg1487z00_4298 = BgL_res2134z00_4299; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1059z00_4297), BgL_arg1487z00_4298); } 
BgL_new1060z00_4296 = BgL_new1059z00_4297; } 
((((BgL_threadz00_bglt)COBJECT(
((BgL_threadz00_bglt)BgL_new1060z00_4296)))->BgL_namez00)=((obj_t)BgL_namez00_3575),BUNSPEC); 
{ 
obj_t BgL_auxz00_6667;
if(
PROCEDUREP(BgL_bodyz00_3574))
{ /* Llib/thread.scm 334 */
BgL_auxz00_6667 = BgL_bodyz00_3574
; }  else 
{ 
obj_t BgL_auxz00_6670;
BgL_auxz00_6670 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)13279)), BGl_string2936z00zz__threadz00, BGl_string2542z00zz__threadz00, BgL_bodyz00_3574); 
FAILURE(BgL_auxz00_6670,BFALSE,BFALSE);} 
((((BgL_nothreadz00_bglt)COBJECT(BgL_new1060z00_4296))->BgL_bodyz00)=((obj_t)BgL_auxz00_6667),BUNSPEC); } 
((((BgL_nothreadz00_bglt)COBJECT(BgL_new1060z00_4296))->BgL_z52specificz52)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_nothreadz00_bglt)COBJECT(BgL_new1060z00_4296))->BgL_z52cleanupz52)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_nothreadz00_bglt)COBJECT(BgL_new1060z00_4296))->BgL_endzd2resultzd2)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_nothreadz00_bglt)COBJECT(BgL_new1060z00_4296))->BgL_endzd2exceptionzd2)=((obj_t)BUNSPEC),BUNSPEC); 
{ /* Llib/thread.scm 333 */
obj_t BgL_fun1486z00_4300;
BgL_fun1486z00_4300 = 
BGl_classzd2constructorzd2zz__objectz00(BGl_nothreadz00zz__threadz00); 
{ /* Llib/thread.scm 333 */
obj_t BgL_funz00_4301;
if(
PROCEDUREP(BgL_fun1486z00_4300))
{ /* Llib/thread.scm 333 */
BgL_funz00_4301 = BgL_fun1486z00_4300; }  else 
{ 
obj_t BgL_auxz00_6682;
BgL_auxz00_6682 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2527z00zz__threadz00, 
BINT(((long)13250)), BGl_string2936z00zz__threadz00, BGl_string2542z00zz__threadz00, BgL_fun1486z00_4300); 
FAILURE(BgL_auxz00_6682,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4301, ((long)1)))
{ /* Llib/thread.scm 333 */
PROCEDURE_ENTRY(BgL_funz00_4301)(BgL_fun1486z00_4300, 
((obj_t)BgL_new1060z00_4296), BEOA); }  else 
{ /* Llib/thread.scm 333 */
FAILURE(BGl_string2937z00zz__threadz00,BGl_list2938z00zz__threadz00,BgL_funz00_4301);} } } 
return 
((BgL_threadz00_bglt)BgL_new1060z00_4296);} } } 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__threadz00()
{
{ /* Llib/thread.scm 17 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string2598z00zz__threadz00)); 
return 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)193422032), 
BSTRING_TO_STRING(BGl_string2598z00zz__threadz00));} 

}

#ifdef __cplusplus
}
#endif
