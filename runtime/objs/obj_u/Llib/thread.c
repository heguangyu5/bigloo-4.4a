/*===========================================================================*/
/*   (Llib/thread.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/thread.scm -indent -o objs/obj_u/Llib/thread.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_nothreadzd2backendzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_namez00;
	}                            *BgL_nothreadzd2backendzd2_bglt;

	typedef struct BgL_threadzd2backendzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_namez00;
	}                          *BgL_threadzd2backendzd2_bglt;

	typedef struct BgL_threadz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_namez00;
	}                *BgL_threadz00_bglt;

	typedef struct BgL_nothreadz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_namez00;
		obj_t BgL_bodyz00;
		obj_t BgL_z52specificz52;
		obj_t BgL_z52cleanupz52;
		obj_t BgL_endzd2resultzd2;
		obj_t BgL_endzd2exceptionzd2;
	}                  *BgL_nothreadz00_bglt;


	BGL_EXPORTED_DECL obj_t
		BGl_tbzd2currentzd2threadz00zz__threadz00(BgL_threadzd2backendzd2_bglt);
	static obj_t BGl_z52currentzd2threadz80zz__threadz00();
	extern obj_t bgl_make_nil_condvar();
	BGL_EXPORTED_DECL obj_t
		BGl_tbzd2condvarzd2initializa7ez12zb5zz__threadz00
		(BgL_threadzd2backendzd2_bglt, obj_t);
	static obj_t BGl__makezd2mutexzd2zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62threadzd2joinz12za2zz__threadz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_mutexzd2lockz12zc0zz__threadz00(obj_t, long);
	extern obj_t BGl_raisez00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_threadzd2specificzd2zz__threadz00(BgL_threadz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_withzd2lockzd2zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62threadzd2specificzb0zz__threadz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__threadz00 = BUNSPEC;
	static obj_t BGl_z62threadzd2startzd2joinabl1179z62zz__threadz00(obj_t,
		obj_t);
	static obj_t BGl_z62z52userzd2threadzd2sleepz121202z22zz__threadz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_threadzd2cleanupzd2setz12z12zz__threadz00(BgL_threadz00_bglt, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2mutexzd2zz__threadz00(obj_t);
	extern obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_EXPORTED_DECL obj_t BGl_threadzd2sleepz12zc0zz__threadz00(obj_t);
	static obj_t BGl_z62tbzd2mutexzd2initializa7ez12zd7zz__threadz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_conditionzd2variablezd2broadcastz12z12zz__threadz00(obj_t);
	static obj_t BGl_z62threadzd2parameterzb0zz__threadz00(obj_t, obj_t);
	extern obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__threadz00();
	static obj_t BGl_z62threadzd2startz12zd2nothre1207z70zz__threadz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_nothreadzd2backendzd2zz__threadz00 = BUNSPEC;
	extern obj_t bgl_make_nil_mutex();
	BGL_EXPORTED_DECL obj_t
		BGl_z52userzd2threadzd2yieldz12z40zz__threadz00(BgL_threadz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_withzd2timedzd2lockz00zz__threadz00(obj_t, int,
		obj_t);
	static obj_t BGl_z62threadzd2startzd2joinablez12z70zz__threadz00(obj_t,
		obj_t);
	static obj_t BGl_z62conditionzd2variablezd2namez62zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62withzd2timedzd2lockz62zz__threadz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tbzd2mutexzd2initializa7ez12zb5zz__threadz00
		(BgL_threadzd2backendzd2_bglt, obj_t);
	static BgL_nothreadzd2backendzd2_bglt
		BGl_za2nothreadzd2backendza2zd2zz__threadz00;
	BGL_EXPORTED_DECL obj_t BGl_currentzd2threadzd2backendz00zz__threadz00();
	static obj_t BGl_z62threadzd2terminatez121184za2zz__threadz00(obj_t, obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62currentzd2dynamiczd2envz62zz__threadz00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__threadz00();
	BGL_EXPORTED_DECL obj_t BGl_mutexzd2namezd2zz__threadz00(obj_t);
	extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_z62mutexzd2nilzb0zz__threadz00(obj_t);
	static obj_t BGl__makezd2spinlockzd2zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62objectzd2writezd2thread1172z62zz__threadz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62threadzd2terminatez12zd2no1213z70zz__threadz00(obj_t,
		obj_t);
	extern obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__threadz00();
	BGL_EXPORTED_DECL obj_t
		BGl_currentzd2threadzd2backendzd2setz12zc0zz__threadz00
		(BgL_threadzd2backendzd2_bglt);
	static obj_t BGl_z62defaultzd2threadzd2backendzd2setz12za2zz__threadz00(obj_t,
		obj_t);
	extern obj_t BGl_z62exceptionz62zz__objectz00;
	static obj_t BGl_z62threadzd2specificzd2setz12z70zz__threadz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62mutexzd2namezb0zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31410ze3ze5zz__threadz00(obj_t);
	static obj_t BGl_z62z52userzd2threadzd2sleepz12z22zz__threadz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_threadzd2specificzd2setz12z12zz__threadz00(BgL_threadz00_bglt, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31403ze3ze5zz__threadz00(obj_t);
	extern bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62threadzd2initializa7ez121175z05zz__threadz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_dynamiczd2envzf3z21zz__threadz00(obj_t);
	static obj_t BGl_z62threadzd2terminatez12za2zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62threadzd2startz12za2zz__threadz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_mutexzd2nilzd2zz__threadz00();
	static obj_t BGl_z62getzd2threadzd2backendz62zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62mutexzd2unlockz12za2zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62threadzd2cleanupzb0zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62tbzd2condvarzd2initializa7ez12zd7zz__threadz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tbzd2makezd2thread1157z62zz__threadz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__threadz00();
	static obj_t BGl_z62threadzd2initializa7ez12z05zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62threadzd2yieldz12za2zz__threadz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2spinlockzd2zz__threadz00(obj_t);
	extern obj_t BGl_objectzd2writezd2zz__objectz00(BgL_objectz00_bglt, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_nothreadz00zz__threadz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31332ze3ze5zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62tbzd2currentzd2threadz62zz__threadz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_threadzd2parameterzd2setz12z12zz__threadz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_mutexzf3zf3zz__threadz00(obj_t);
	static obj_t BGl_z62objectzd2displayzd2threa1170z62zz__threadz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62threadzd2specific1186zb0zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62threadzd2specificzd2noth1215z62zz__threadz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_currentzd2dynamiczd2envz00zz__threadz00();
	static obj_t BGl_z62zc3z04anonymousza31318ze3ze5zz__threadz00(obj_t);
	static obj_t BGl_z62z52userzd2threadzd2yieldz121204z22zz__threadz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_conditionzd2variablezd2waitz12z12zz__threadz00(obj_t, obj_t, long);
	static obj_t BGl_za2conditionzd2variablezd2nilza2z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_z62z52userzd2currentzd2thread1200z30zz__threadz00(obj_t,
		obj_t);
	static obj_t BGl__makezd2conditionzd2variablez00zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62currentzd2threadzb0zz__threadz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31351ze3ze5zz__threadz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31424ze3ze5zz__threadz00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62currentzd2threadzd2backendzd2setz12za2zz__threadz00(obj_t,
		obj_t);
	static obj_t BGl_z62currentzd2threadzd2backendz62zz__threadz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_threadzd2backendzd2zz__threadz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31522ze3ze5zz__threadz00(obj_t);
	static obj_t BGl_z62tbzd2currentzd2threadzd2no1164zb0zz__threadz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31344ze3ze5zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31417ze3ze5zz__threadz00(obj_t);
	extern obj_t BGl_callzd2virtualzd2setterz00zz__objectz00(BgL_objectz00_bglt,
		int, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_threadzd2cleanupzd2zz__threadz00(BgL_threadz00_bglt);
	static obj_t BGl_z62threadzd2parameterzd2setz12z70zz__threadz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31361ze3ze5zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31434ze3ze5zz__threadz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_z52userzd2threadzd2sleepz12z40zz__threadz00(BgL_threadz00_bglt, obj_t);
	static obj_t BGl_z62z52userzd2currentzd2threadz30zz__threadz00(obj_t, obj_t);
	extern obj_t BGl_classzd2constructorzd2zz__objectz00(obj_t);
	extern obj_t bgl_remq_bang(obj_t, obj_t);
	extern obj_t BGl_exitz00zz__errorz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31370ze3ze5zz__threadz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_conditionzd2variablezd2nilz00zz__threadz00();
	static obj_t BGl_z62zc3z04anonymousza31524ze3ze5zz__threadz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31362ze3ze5zz__threadz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2threadzd2backendsza2zd2zz__threadz00 = BUNSPEC;
	extern void bgl_sleep(long);
	static obj_t BGl_z62threadzd2cleanupzd2nothr1219z62zz__threadz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_threadzd2joinz12zc0zz__threadz00(BgL_threadz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31355ze3ze5zz__threadz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_z52userzd2currentzd2threadz52zz__threadz00(BgL_threadz00_bglt);
	extern obj_t BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_defaultzd2threadzd2backendz00zz__threadz00();
	static obj_t BGl_z62lambda1401z62zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1402z62zz__threadz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_callzd2virtualzd2getterz00zz__objectz00(BgL_objectz00_bglt,
		int);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1408z62zz__threadz00(obj_t, obj_t);
	static BgL_threadzd2backendzd2_bglt BGl_z62lambda1328z62zz__threadz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1409z62zz__threadz00(obj_t, obj_t, obj_t);
	extern obj_t bgl_nanoseconds_to_date(BGL_LONGLONG_T);
	static obj_t BGl_z62zc3z04anonymousza31356ze3ze5zz__threadz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_mutexzd2statezd2zz__threadz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_currentzd2threadzd2zz__threadz00();
	static obj_t BGl_z62tbzd2currentzd2thread1159z62zz__threadz00(obj_t, obj_t);
	static BgL_threadzd2backendzd2_bglt BGl_z62lambda1330z62zz__threadz00(obj_t);
	static obj_t BGl_z62lambda1415z62zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1416z62zz__threadz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1336z62zz__threadz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conditionzd2variablezd2namez00zz__threadz00(obj_t);
	static obj_t BGl_z62lambda1337z62zz__threadz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31519ze3ze5zz__threadz00(obj_t, obj_t);
	static obj_t
		BGl_zc3z04exitza31515ze3ze70z60zz__threadz00(BgL_nothreadz00_bglt, obj_t);
	static obj_t BGl_z62lambda1422z62zz__threadz00(obj_t, obj_t);
	static BgL_threadz00_bglt BGl_z62lambda1342z62zz__threadz00(obj_t);
	static obj_t BGl_z62lambda1423z62zz__threadz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_threadzd2startz12zc0zz__threadz00(BgL_threadz00_bglt, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__threadz00();
	static obj_t BGl_z62lambda1349z62zz__threadz00(obj_t, obj_t);
	static obj_t BGl_symbol2303z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2305z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_z62threadzd2specificzd2setz121217z70zz__threadz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_nothreadzd2backendzd2_bglt BGl_z62lambda1430z62zz__threadz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_mutexzd2unlockz12zc0zz__threadz00(obj_t);
	static BgL_threadz00_bglt BGl_z62tbzd2makezd2threadz62zz__threadz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1350z62zz__threadz00(obj_t, obj_t, obj_t);
	static BgL_nothreadzd2backendzd2_bglt
		BGl_z62lambda1432z62zz__threadz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__threadz00();
	static obj_t BGl_z62mutexzf3z91zz__threadz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__threadz00();
	static obj_t BGl_z62zc3z04anonymousza31391ze3ze5zz__threadz00(obj_t, obj_t);
	static obj_t BGl_symbol2314z00zz__threadz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_threadzd2yieldz12zc0zz__threadz00();
	static obj_t BGl__makezd2threadzd2zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62threadzd2cleanupzd2setz121193z70zz__threadz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62conditionzd2variablezf3z43zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62threadzd2sleepz12za2zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62threadzd2joinz12zd2nothrea1211z70zz__threadz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_objectz00zz__objectz00;
	static obj_t BGl_z62conditionzd2variablezd2broadcastz12z70zz__threadz00(obj_t,
		obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31376ze3ze5zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31368ze3ze5zz__threadz00(obj_t, obj_t);
	static obj_t BGl_symbol2323z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2325z00zz__threadz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_getzd2threadzd2backendz00zz__threadz00(obj_t);
	static obj_t BGl_z62dynamiczd2envzf3z43zz__threadz00(obj_t, obj_t);
	static obj_t BGl_symbol2329z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_z62threadzd2joinz121181za2zz__threadz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62threadzd2startz121177za2zz__threadz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62tbzd2mutexzd2initializa7ez121165zd7zz__threadz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2330z00zz__threadz00 = BUNSPEC;
	extern obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_threadzd2initializa7ez12z67zz__threadz00(BgL_threadz00_bglt);
	static obj_t BGl_symbol2335z00zz__threadz00 = BUNSPEC;
	extern obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	static obj_t BGl_symbol2419z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2339z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_z62threadzd2cleanupzd2setz12zd21221za2zz__threadz00(obj_t,
		obj_t, obj_t);
	static BgL_nothreadz00_bglt BGl_z62lambda1385z62zz__threadz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_nothreadz00_bglt BGl_z62lambda1389z62zz__threadz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31378ze3ze5zz__threadz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2422z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2424z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2343z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2425z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2426z00zz__threadz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_threadz00_bglt BGl_makezd2threadzd2zz__threadz00(obj_t,
		obj_t);
	static obj_t BGl_symbol2427z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2428z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2429z00zz__threadz00 = BUNSPEC;
	extern BGL_LONGLONG_T bgl_current_nanoseconds();
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_threadzd2startzd2joinablez12z12zz__threadz00(BgL_threadz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_conditionzd2variablezd2signalz12z12zz__threadz00(obj_t);
	static obj_t BGl_z62objectzd2printzd2thread1174z62zz__threadz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62threadzd2cleanupzd2setz12z70zz__threadz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1395z62zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1396z62zz__threadz00(obj_t, obj_t, obj_t);
	static BgL_threadz00_bglt
		BGl_z62tbzd2makezd2threadzd2nothr1162zb0zz__threadz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2430z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2431z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2432z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2433z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2434z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2353z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2355z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2359z00zz__threadz00 = BUNSPEC;
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62threadzd2specificzd2setz121189z70zz__threadz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31493ze3ze5zz__threadz00(obj_t);
	static obj_t BGl_z62conditionzd2variablezd2nilz62zz__threadz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31477ze3ze5zz__threadz00(obj_t);
	static obj_t BGl_symbol2364z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_z62mutexzd2statezb0zz__threadz00(obj_t, obj_t);
	static obj_t BGl_symbol2369z00zz__threadz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_threadz00_bglt
		BGl_tbzd2makezd2threadz00zz__threadz00(BgL_threadzd2backendzd2_bglt, obj_t,
		obj_t);
	extern long bgl_date_to_seconds(obj_t);
	static obj_t BGl_z62conditionzd2variablezd2signalz12z70zz__threadz00(obj_t,
		obj_t);
	static obj_t BGl_z62z52userzd2threadzd2yieldz12z22zz__threadz00(obj_t, obj_t);
	static obj_t BGl_z62threadzd2startzd2joinabl1209z62zz__threadz00(obj_t,
		obj_t);
	static obj_t BGl_za2nothreadzd2currentza2zd2zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2374z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2296z00zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2379z00zz__threadz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_threadzd2parameterzd2zz__threadz00(obj_t);
	static obj_t BGl_z62tbzd2condvarzd2initializa71167zc5zz__threadz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62defaultzd2threadzd2backendz62zz__threadz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2conditionzd2variablez00zz__threadz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_threadzd2terminatez12zc0zz__threadz00(BgL_threadz00_bglt);
	static obj_t BGl_z62withzd2lockzb0zz__threadz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2mutexzd2nilza2zd2zz__threadz00 = BUNSPEC;
	static obj_t BGl_symbol2383z00zz__threadz00 = BUNSPEC;
	static obj_t BGl__conditionzd2variablezd2waitz12z12zz__threadz00(obj_t,
		obj_t);
	static obj_t BGl__mutexzd2lockz12zc0zz__threadz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_threadz00zz__threadz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_conditionzd2variablezf3z21zz__threadz00(obj_t);
	static obj_t BGl_z62threadzd2cleanup1191zb0zz__threadz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_defaultzd2threadzd2backendzd2setz12zc0zz__threadz00
		(BgL_threadzd2backendzd2_bglt);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_tbzd2condvarzd2initializa7ez12zd2envz67zz__threadz00,
		BgL_bgl_za762tbza7d2condvarza72480za7,
		BGl_z62tbzd2condvarzd2initializa7ez12zd7zz__threadz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conditionzd2variablezd2waitz12zd2envzc0zz__threadz00,
		BgL_bgl__conditionza7d2var2481za7, opt_generic_entry,
		BGl__conditionzd2variablezd2waitz12z12zz__threadz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2300z00zz__threadz00,
		BgL_bgl_string2300za700za7za7_2482za7, "&thread-parameter", 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conditionzd2variablezf3zd2envzf3zz__threadz00,
		BgL_bgl_za762conditionza7d2v2483z00,
		BGl_z62conditionzd2variablezf3z43zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2301z00zz__threadz00,
		BgL_bgl_string2301za700za7za7_2484za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2302z00zz__threadz00,
		BgL_bgl_string2302za700za7za7_2485za7, "&thread-parameter-set!", 22);
	      DEFINE_STRING(BGl_string2304z00zz__threadz00,
		BgL_bgl_string2304za700za7za7_2486za7, "mutex", 5);
	      DEFINE_STRING(BGl_string2306z00zz__threadz00,
		BgL_bgl_string2306za700za7za7_2487za7, "spinlock", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_currentzd2threadzd2backendzd2setz12zd2envz12zz__threadz00,
		BgL_bgl_za762currentza7d2thr2488z00,
		BGl_z62currentzd2threadzd2backendzd2setz12za2zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2307z00zz__threadz00,
		BgL_bgl_string2307za700za7za7_2489za7, "&mutex-name", 11);
	      DEFINE_STRING(BGl_string2308z00zz__threadz00,
		BgL_bgl_string2308za700za7za7_2490za7, "_mutex-lock!", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_defaultzd2threadzd2backendzd2setz12zd2envz12zz__threadz00,
		BgL_bgl_za762defaultza7d2thr2491z00,
		BGl_z62defaultzd2threadzd2backendzd2setz12za2zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2309z00zz__threadz00,
		BgL_bgl_string2309za700za7za7_2492za7, "bint", 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2spinlockzd2envz00zz__threadz00,
		BgL_bgl__makeza7d2spinlock2493za7, opt_generic_entry,
		BGl__makezd2spinlockzd2zz__threadz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2310z00zz__threadz00,
		BgL_bgl_string2310za700za7za7_2494za7, "&mutex-unlock!", 14);
	      DEFINE_STRING(BGl_string2311z00zz__threadz00,
		BgL_bgl_string2311za700za7za7_2495za7, "&mutex-state", 12);
	      DEFINE_STRING(BGl_string2312z00zz__threadz00,
		BgL_bgl_string2312za700za7za7_2496za7, "&with-lock", 10);
	      DEFINE_STRING(BGl_string2313z00zz__threadz00,
		BgL_bgl_string2313za700za7za7_2497za7, "&with-timed-lock", 16);
	      DEFINE_STRING(BGl_string2315z00zz__threadz00,
		BgL_bgl_string2315za700za7za7_2498za7, "condition-variable", 18);
	      DEFINE_STRING(BGl_string2316z00zz__threadz00,
		BgL_bgl_string2316za700za7za7_2499za7, "&condition-variable-name", 24);
	      DEFINE_STRING(BGl_string2317z00zz__threadz00,
		BgL_bgl_string2317za700za7za7_2500za7, "condvar", 7);
	      DEFINE_STRING(BGl_string2318z00zz__threadz00,
		BgL_bgl_string2318za700za7za7_2501za7, "_condition-variable-wait!", 25);
	      DEFINE_STRING(BGl_string2319z00zz__threadz00,
		BgL_bgl_string2319za700za7za7_2502za7, "&condition-variable-signal!", 27);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_threadzd2cleanupzd2envz00zz__threadz00,
		BgL_bgl_za762threadza7d2clea2503z00,
		BGl_z62threadzd2cleanupzb0zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_REAL(BGl_real2418z00zz__threadz00,
		BgL_bgl_real2418za700za7za7__t2504za7, 1000000.0);
	      DEFINE_STRING(BGl_string2401z00zz__threadz00,
		BgL_bgl_string2401za700za7za7_2505za7, "thread-join!1181", 16);
	      DEFINE_STRING(BGl_string2320z00zz__threadz00,
		BgL_bgl_string2320za700za7za7_2506za7, "&condition-variable-broadcast!",
		30);
	      DEFINE_STRING(BGl_string2403z00zz__threadz00,
		BgL_bgl_string2403za700za7za7_2507za7, "thread-terminate!1184", 21);
	      DEFINE_STRING(BGl_string2405z00zz__threadz00,
		BgL_bgl_string2405za700za7za7_2508za7, "thread-specific1186", 19);
	      DEFINE_STRING(BGl_string2324z00zz__threadz00,
		BgL_bgl_string2324za700za7za7_2509za7, "name", 4);
	      DEFINE_STRING(BGl_string2407z00zz__threadz00,
		BgL_bgl_string2407za700za7za7_2510za7, "thread-specific-set!1189", 24);
	      DEFINE_STRING(BGl_string2409z00zz__threadz00,
		BgL_bgl_string2409za700za7za7_2511za7, "thread-cleanup1191", 18);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_threadzd2startz12zd2envz12zz__threadz00,
		BgL_bgl_za762threadza7d2star2512z00, va_generic_entry,
		BGl_z62threadzd2startz12za2zz__threadz00, BUNSPEC, -2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2400z00zz__threadz00,
		BgL_bgl_za762threadza7d2join2513z00, va_generic_entry,
		BGl_z62threadzd2joinz121181za2zz__threadz00, BUNSPEC, -2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2402z00zz__threadz00,
		BgL_bgl_za762threadza7d2term2514z00,
		BGl_z62threadzd2terminatez121184za2zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2321z00zz__threadz00,
		BgL_bgl_za762lambda1337za7622515z00, BGl_z62lambda1337z62zz__threadz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2322z00zz__threadz00,
		BgL_bgl_za762lambda1336za7622516z00, BGl_z62lambda1336z62zz__threadz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2404z00zz__threadz00,
		BgL_bgl_za762threadza7d2spec2517z00,
		BGl_z62threadzd2specific1186zb0zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2406z00zz__threadz00,
		BgL_bgl_za762threadza7d2spec2518z00,
		BGl_z62threadzd2specificzd2setz121189z70zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2threadzd2envz00zz__threadz00,
		BgL_bgl__makeza7d2threadza7d2519z00, opt_generic_entry,
		BGl__makezd2threadzd2zz__threadz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2411z00zz__threadz00,
		BgL_bgl_string2411za700za7za7_2520za7, "thread-cleanup-set!1193", 23);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2326z00zz__threadz00,
		BgL_bgl_za762za7c3za704anonymo2521za7,
		BGl_z62zc3z04anonymousza31332ze3ze5zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2408z00zz__threadz00,
		BgL_bgl_za762threadza7d2clea2522z00,
		BGl_z62threadzd2cleanup1191zb0zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2331z00zz__threadz00,
		BgL_bgl_string2331za700za7za7_2523za7, "__thread", 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2327z00zz__threadz00,
		BgL_bgl_za762lambda1330za7622524z00, BGl_z62lambda1330z62zz__threadz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2413z00zz__threadz00,
		BgL_bgl_string2413za700za7za7_2525za7, "%user-current-thread1200", 24);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2328z00zz__threadz00,
		BgL_bgl_za762lambda1328za7622526z00, BGl_z62lambda1328z62zz__threadz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2415z00zz__threadz00,
		BgL_bgl_string2415za700za7za7_2527za7, "%user-thread-sleep!1202", 23);
	      DEFINE_STRING(BGl_string2417z00zz__threadz00,
		BgL_bgl_string2417za700za7za7_2528za7, "%user-thread-yield!1204", 23);
	      DEFINE_STRING(BGl_string2336z00zz__threadz00,
		BgL_bgl_string2336za700za7za7_2529za7, "obj", 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2410z00zz__threadz00,
		BgL_bgl_za762threadza7d2clea2530z00,
		BGl_z62threadzd2cleanupzd2setz121193z70zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2412z00zz__threadz00,
		BgL_bgl_za762za752userza7d2cur2531za7,
		BGl_z62z52userzd2currentzd2thread1200z30zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2332z00zz__threadz00,
		BgL_bgl_za762za7c3za704anonymo2532za7,
		BGl_z62zc3z04anonymousza31351ze3ze5zz__threadz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2414z00zz__threadz00,
		BgL_bgl_za762za752userza7d2thr2533za7,
		BGl_z62z52userzd2threadzd2sleepz121202z22zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2333z00zz__threadz00,
		BgL_bgl_za762lambda1350za7622534z00, BGl_z62lambda1350z62zz__threadz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2334z00zz__threadz00,
		BgL_bgl_za762lambda1349za7622535z00, BGl_z62lambda1349z62zz__threadz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2420z00zz__threadz00,
		BgL_bgl_string2420za700za7za7_2536za7, "thread-sleep!", 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2416z00zz__threadz00,
		BgL_bgl_za762za752userza7d2thr2537za7,
		BGl_z62z52userzd2threadzd2yieldz121204z22zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2421z00zz__threadz00,
		BgL_bgl_string2421za700za7za7_2538za7, "date, real, or integer", 22);
	      DEFINE_STRING(BGl_string2340z00zz__threadz00,
		BgL_bgl_string2340za700za7za7_2539za7, "specific", 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2337z00zz__threadz00,
		BgL_bgl_za762za7c3za704anonymo2540za7,
		BGl_z62zc3z04anonymousza31356ze3ze5zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2423z00zz__threadz00,
		BgL_bgl_string2423za700za7za7_2541za7, "No method for this object", 25);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2338z00zz__threadz00,
		BgL_bgl_za762za7c3za704anonymo2542za7,
		BGl_z62zc3z04anonymousza31355ze3ze5zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2344z00zz__threadz00,
		BgL_bgl_string2344za700za7za7_2543za7, "cleanup", 7);
	extern obj_t BGl_objectzd2writezd2envz00zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2341z00zz__threadz00,
		BgL_bgl_za762za7c3za704anonymo2544za7,
		BGl_z62zc3z04anonymousza31362ze3ze5zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2342z00zz__threadz00,
		BgL_bgl_za762za7c3za704anonymo2545za7,
		BGl_z62zc3z04anonymousza31361ze3ze5zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2345z00zz__threadz00,
		BgL_bgl_za762za7c3za704anonymo2546za7,
		BGl_z62zc3z04anonymousza31368ze3ze5zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2346z00zz__threadz00,
		BgL_bgl_za762za7c3za704anonymo2547za7,
		BGl_z62zc3z04anonymousza31370ze3ze5zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2347z00zz__threadz00,
		BgL_bgl_za762za7c3za704anonymo2548za7,
		BGl_z62zc3z04anonymousza31376ze3ze5zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2348z00zz__threadz00,
		BgL_bgl_za762za7c3za704anonymo2549za7,
		BGl_z62zc3z04anonymousza31378ze3ze5zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2349z00zz__threadz00,
		BgL_bgl_za762za7c3za704anonymo2550za7,
		BGl_z62zc3z04anonymousza31344ze3ze5zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2435z00zz__threadz00,
		BgL_bgl_string2435za700za7za7_2551za7, "&tb-make-thread", 15);
	      DEFINE_STRING(BGl_string2354z00zz__threadz00,
		BgL_bgl_string2354za700za7za7_2552za7, "body", 4);
	      DEFINE_STRING(BGl_string2436z00zz__threadz00,
		BgL_bgl_string2436za700za7za7_2553za7, "&tb-current-thread", 18);
	      DEFINE_STRING(BGl_string2437z00zz__threadz00,
		BgL_bgl_string2437za700za7za7_2554za7, "&tb-mutex-initialize!", 21);
	      DEFINE_STRING(BGl_string2438z00zz__threadz00,
		BgL_bgl_string2438za700za7za7_2555za7, "&tb-condvar-initialize!", 23);
	      DEFINE_STRING(BGl_string2439z00zz__threadz00,
		BgL_bgl_string2439za700za7za7_2556za7, "&thread-initialize!", 19);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2350z00zz__threadz00,
		BgL_bgl_za762lambda1342za7622557z00, BGl_z62lambda1342z62zz__threadz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2351z00zz__threadz00,
		BgL_bgl_za762lambda1396za7622558z00, BGl_z62lambda1396z62zz__threadz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2352z00zz__threadz00,
		BgL_bgl_za762lambda1395za7622559z00, BGl_z62lambda1395z62zz__threadz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2440z00zz__threadz00,
		BgL_bgl_string2440za700za7za7_2560za7, "&thread-start!", 14);
	      DEFINE_STRING(BGl_string2441z00zz__threadz00,
		BgL_bgl_string2441za700za7za7_2561za7, "&thread-start-joinable!", 23);
	      DEFINE_STRING(BGl_string2360z00zz__threadz00,
		BgL_bgl_string2360za700za7za7_2562za7, "%specific", 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2356z00zz__threadz00,
		BgL_bgl_za762za7c3za704anonymo2563za7,
		BGl_z62zc3z04anonymousza31403ze3ze5zz__threadz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2442z00zz__threadz00,
		BgL_bgl_string2442za700za7za7_2564za7, "&thread-join!", 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2357z00zz__threadz00,
		BgL_bgl_za762lambda1402za7622565z00, BGl_z62lambda1402z62zz__threadz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2443z00zz__threadz00,
		BgL_bgl_string2443za700za7za7_2566za7, "&thread-terminate!", 18);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2358z00zz__threadz00,
		BgL_bgl_za762lambda1401za7622567z00, BGl_z62lambda1401z62zz__threadz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2444z00zz__threadz00,
		BgL_bgl_string2444za700za7za7_2568za7, "&thread-specific", 16);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mutexzd2lockz12zd2envz12zz__threadz00,
		BgL_bgl__mutexza7d2lockza7122569z00, opt_generic_entry,
		BGl__mutexzd2lockz12zc0zz__threadz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2445z00zz__threadz00,
		BgL_bgl_string2445za700za7za7_2570za7, "&thread-specific-set!", 21);
	      DEFINE_STRING(BGl_string2446z00zz__threadz00,
		BgL_bgl_string2446za700za7za7_2571za7, "&thread-cleanup", 15);
	      DEFINE_STRING(BGl_string2365z00zz__threadz00,
		BgL_bgl_string2365za700za7za7_2572za7, "%cleanup", 8);
	      DEFINE_STRING(BGl_string2447z00zz__threadz00,
		BgL_bgl_string2447za700za7za7_2573za7, "&thread-cleanup-set!", 20);
	      DEFINE_STRING(BGl_string2448z00zz__threadz00,
		BgL_bgl_string2448za700za7za7_2574za7, "&%user-current-thread", 21);
	      DEFINE_STRING(BGl_string2449z00zz__threadz00,
		BgL_bgl_string2449za700za7za7_2575za7, "&%user-thread-sleep!", 20);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_withzd2lockzd2envz00zz__threadz00,
		BgL_bgl_za762withza7d2lockza7b2576za7, BGl_z62withzd2lockzb0zz__threadz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2289z00zz__threadz00,
		BgL_bgl_string2289za700za7za7_2577za7, "nothread", 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mutexzd2namezd2envz00zz__threadz00,
		BgL_bgl_za762mutexza7d2nameza72578za7, BGl_z62mutexzd2namezb0zz__threadz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2361z00zz__threadz00,
		BgL_bgl_za762za7c3za704anonymo2579za7,
		BGl_z62zc3z04anonymousza31410ze3ze5zz__threadz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2362z00zz__threadz00,
		BgL_bgl_za762lambda1409za7622580z00, BGl_z62lambda1409z62zz__threadz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2363z00zz__threadz00,
		BgL_bgl_za762lambda1408za7622581z00, BGl_z62lambda1408z62zz__threadz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2450z00zz__threadz00,
		BgL_bgl_string2450za700za7za7_2582za7, "&%user-thread-yield!", 20);
	      DEFINE_STRING(BGl_string2370z00zz__threadz00,
		BgL_bgl_string2370za700za7za7_2583za7, "end-result", 10);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2366z00zz__threadz00,
		BgL_bgl_za762za7c3za704anonymo2584za7,
		BGl_z62zc3z04anonymousza31417ze3ze5zz__threadz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2452z00zz__threadz00,
		BgL_bgl_string2452za700za7za7_2585za7, "tb-make-thread", 14);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2367z00zz__threadz00,
		BgL_bgl_za762lambda1416za7622586z00, BGl_z62lambda1416z62zz__threadz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2290z00zz__threadz00,
		BgL_bgl_string2290za700za7za7_2587za7, "/tmp/4.4a/runtime/Llib/thread.scm",
		33);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2368z00zz__threadz00,
		BgL_bgl_za762lambda1415za7622588z00, BGl_z62lambda1415z62zz__threadz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2291z00zz__threadz00,
		BgL_bgl_string2291za700za7za7_2589za7, "&current-thread-backend-set!", 28);
	      DEFINE_STRING(BGl_string2454z00zz__threadz00,
		BgL_bgl_string2454za700za7za7_2590za7, "tb-current-thread", 17);
	      DEFINE_STRING(BGl_string2292z00zz__threadz00,
		BgL_bgl_string2292za700za7za7_2591za7, "thread-backend", 14);
	      DEFINE_STRING(BGl_string2293z00zz__threadz00,
		BgL_bgl_string2293za700za7za7_2592za7, "&default-thread-backend-set!", 28);
	extern obj_t BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00;
	   
		 
		DEFINE_STRING(BGl_string2456z00zz__threadz00,
		BgL_bgl_string2456za700za7za7_2593za7, "object-display", 14);
	      DEFINE_STRING(BGl_string2375z00zz__threadz00,
		BgL_bgl_string2375za700za7za7_2594za7, "end-exception", 13);
	      DEFINE_STRING(BGl_string2294z00zz__threadz00,
		BgL_bgl_string2294za700za7za7_2595za7, "&get-thread-backend", 19);
	      DEFINE_STRING(BGl_string2295z00zz__threadz00,
		BgL_bgl_string2295za700za7za7_2596za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2458z00zz__threadz00,
		BgL_bgl_string2458za700za7za7_2597za7, "object-write", 12);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mutexzd2unlockz12zd2envz12zz__threadz00,
		BgL_bgl_za762mutexza7d2unloc2598z00,
		BGl_z62mutexzd2unlockz12za2zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2297z00zz__threadz00,
		BgL_bgl_string2297za700za7za7_2599za7, "thread", 6);
	      DEFINE_STRING(BGl_string2298z00zz__threadz00,
		BgL_bgl_string2298za700za7za7_2600za7, "_make-thread", 12);
	      DEFINE_STRING(BGl_string2299z00zz__threadz00,
		BgL_bgl_string2299za700za7za7_2601za7, "procedure", 9);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_threadzd2joinz12zd2envz12zz__threadz00,
		BgL_bgl_za762threadza7d2join2602z00, va_generic_entry,
		BGl_z62threadzd2joinz12za2zz__threadz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_threadzd2yieldz12zd2envz12zz__threadz00,
		BgL_bgl_za762threadza7d2yiel2603z00,
		BGl_z62threadzd2yieldz12za2zz__threadz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2451z00zz__threadz00,
		BgL_bgl_za762tbza7d2makeza7d2t2604za7,
		BGl_z62tbzd2makezd2threadzd2nothr1162zb0zz__threadz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2371z00zz__threadz00,
		BgL_bgl_za762za7c3za704anonymo2605za7,
		BGl_z62zc3z04anonymousza31424ze3ze5zz__threadz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2453z00zz__threadz00,
		BgL_bgl_za762tbza7d2currentza72606za7,
		BGl_z62tbzd2currentzd2threadzd2no1164zb0zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2372z00zz__threadz00,
		BgL_bgl_za762lambda1423za7622607z00, BGl_z62lambda1423z62zz__threadz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2373z00zz__threadz00,
		BgL_bgl_za762lambda1422za7622608z00, BGl_z62lambda1422z62zz__threadz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2455z00zz__threadz00,
		BgL_bgl_za762objectza7d2disp2609z00, va_generic_entry,
		BGl_z62objectzd2displayzd2threa1170z62zz__threadz00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2460z00zz__threadz00,
		BgL_bgl_string2460za700za7za7_2610za7, "object-print", 12);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2457z00zz__threadz00,
		BgL_bgl_za762objectza7d2writ2611z00, va_generic_entry,
		BGl_z62objectzd2writezd2thread1172z62zz__threadz00, BUNSPEC, -2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2376z00zz__threadz00,
		BgL_bgl_za762za7c3za704anonymo2612za7,
		BGl_z62zc3z04anonymousza31391ze3ze5zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2462z00zz__threadz00,
		BgL_bgl_string2462za700za7za7_2613za7, "thread-start!", 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2377z00zz__threadz00,
		BgL_bgl_za762lambda1389za7622614z00, BGl_z62lambda1389z62zz__threadz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2459z00zz__threadz00,
		BgL_bgl_za762objectza7d2prin2615z00,
		BGl_z62objectzd2printzd2thread1174z62zz__threadz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2378z00zz__threadz00,
		BgL_bgl_za762lambda1385za7622616z00, BGl_z62lambda1385z62zz__threadz00, 0L,
		BUNSPEC, 6);
	      DEFINE_STRING(BGl_string2464z00zz__threadz00,
		BgL_bgl_string2464za700za7za7_2617za7, "thread-start-joinable!", 22);
	      DEFINE_STRING(BGl_string2384z00zz__threadz00,
		BgL_bgl_string2384za700za7za7_2618za7, "nothread-backend", 16);
	      DEFINE_STRING(BGl_string2466z00zz__threadz00,
		BgL_bgl_string2466za700za7za7_2619za7, "thread-join!", 12);
	      DEFINE_STRING(BGl_string2385z00zz__threadz00,
		BgL_bgl_string2385za700za7za7_2620za7, "", 0);
	      DEFINE_STRING(BGl_string2468z00zz__threadz00,
		BgL_bgl_string2468za700za7za7_2621za7, "thread-terminate!", 17);
	      DEFINE_STRING(BGl_string2387z00zz__threadz00,
		BgL_bgl_string2387za700za7za7_2622za7, "tb-make-thread1157", 18);
	     
		DEFINE_EXPORT_BGL_GENERIC(BGl_tbzd2currentzd2threadzd2envzd2zz__threadz00,
		BgL_bgl_za762tbza7d2currentza72623za7,
		BGl_z62tbzd2currentzd2threadz62zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2389z00zz__threadz00,
		BgL_bgl_string2389za700za7za7_2624za7, "tb-current-thread1159", 21);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2461z00zz__threadz00,
		BgL_bgl_za762threadza7d2star2625z00, va_generic_entry,
		BGl_z62threadzd2startz12zd2nothre1207z70zz__threadz00, BUNSPEC, -2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2380z00zz__threadz00,
		BgL_bgl_za762za7c3za704anonymo2626za7,
		BGl_z62zc3z04anonymousza31434ze3ze5zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2381z00zz__threadz00,
		BgL_bgl_za762lambda1432za7622627z00, BGl_z62lambda1432z62zz__threadz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2463z00zz__threadz00,
		BgL_bgl_za762threadza7d2star2628z00,
		BGl_z62threadzd2startzd2joinabl1209z62zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2382z00zz__threadz00,
		BgL_bgl_za762lambda1430za7622629z00, BGl_z62lambda1430z62zz__threadz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2465z00zz__threadz00,
		BgL_bgl_za762threadza7d2join2630z00, va_generic_entry,
		BGl_z62threadzd2joinz12zd2nothrea1211z70zz__threadz00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2470z00zz__threadz00,
		BgL_bgl_string2470za700za7za7_2631za7, "thread-specific", 15);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2467z00zz__threadz00,
		BgL_bgl_za762threadza7d2term2632z00,
		BGl_z62threadzd2terminatez12zd2no1213z70zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2386z00zz__threadz00,
		BgL_bgl_za762tbza7d2makeza7d2t2633za7,
		BGl_z62tbzd2makezd2thread1157z62zz__threadz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_threadzd2parameterzd2setz12zd2envzc0zz__threadz00,
		BgL_bgl_za762threadza7d2para2634z00,
		BGl_z62threadzd2parameterzd2setz12z70zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2472z00zz__threadz00,
		BgL_bgl_string2472za700za7za7_2635za7, "thread-specific-set!", 20);
	      DEFINE_STRING(BGl_string2391z00zz__threadz00,
		BgL_bgl_string2391za700za7za7_2636za7, "tb-mutex-initialize!1165", 24);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2469z00zz__threadz00,
		BgL_bgl_za762threadza7d2spec2637z00,
		BGl_z62threadzd2specificzd2noth1215z62zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2388z00zz__threadz00,
		BgL_bgl_za762tbza7d2currentza72638za7,
		BGl_z62tbzd2currentzd2thread1159z62zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2474z00zz__threadz00,
		BgL_bgl_string2474za700za7za7_2639za7, "thread-cleanup", 14);
	      DEFINE_STRING(BGl_string2393z00zz__threadz00,
		BgL_bgl_string2393za700za7za7_2640za7, "tb-condvar-initializ1167", 24);
	      DEFINE_STRING(BGl_string2476z00zz__threadz00,
		BgL_bgl_string2476za700za7za7_2641za7, "thread-cleanup-set!", 19);
	      DEFINE_STRING(BGl_string2395z00zz__threadz00,
		BgL_bgl_string2395za700za7za7_2642za7, "thread-initialize!1175", 22);
	      DEFINE_STRING(BGl_string2477z00zz__threadz00,
		BgL_bgl_string2477za700za7za7_2643za7, ">", 1);
	      DEFINE_STRING(BGl_string2478z00zz__threadz00,
		BgL_bgl_string2478za700za7za7_2644za7, ":", 1);
	      DEFINE_STRING(BGl_string2397z00zz__threadz00,
		BgL_bgl_string2397za700za7za7_2645za7, "thread-start!1177", 17);
	      DEFINE_STRING(BGl_string2479z00zz__threadz00,
		BgL_bgl_string2479za700za7za7_2646za7, "#<", 2);
	      DEFINE_STRING(BGl_string2399z00zz__threadz00,
		BgL_bgl_string2399za700za7za7_2647za7, "thread-start-joinabl1179", 24);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_withzd2timedzd2lockzd2envzd2zz__threadz00,
		BgL_bgl_za762withza7d2timedza72648za7,
		BGl_z62withzd2timedzd2lockz62zz__threadz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2471z00zz__threadz00,
		BgL_bgl_za762threadza7d2spec2649z00,
		BGl_z62threadzd2specificzd2setz121217z70zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2390z00zz__threadz00,
		BgL_bgl_za762tbza7d2mutexza7d22650za7,
		BGl_z62tbzd2mutexzd2initializa7ez121165zd7zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2473z00zz__threadz00,
		BgL_bgl_za762threadza7d2clea2651z00,
		BGl_z62threadzd2cleanupzd2nothr1219z62zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2392z00zz__threadz00,
		BgL_bgl_za762tbza7d2condvarza72652za7,
		BGl_z62tbzd2condvarzd2initializa71167zc5zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2475z00zz__threadz00,
		BgL_bgl_za762threadza7d2clea2653z00,
		BGl_z62threadzd2cleanupzd2setz12zd21221za2zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2394z00zz__threadz00,
		BgL_bgl_za762threadza7d2init2654z00,
		BGl_z62threadzd2initializa7ez121175z05zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2396z00zz__threadz00,
		BgL_bgl_za762threadza7d2star2655z00, va_generic_entry,
		BGl_z62threadzd2startz121177za2zz__threadz00, BUNSPEC, -2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2398z00zz__threadz00,
		BgL_bgl_za762threadza7d2star2656z00,
		BGl_z62threadzd2startzd2joinabl1179z62zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_threadzd2specificzd2envz00zz__threadz00,
		BgL_bgl_za762threadza7d2spec2657z00,
		BGl_z62threadzd2specificzb0zz__threadz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_objectzd2printzd2envz00zz__objectz00;
	extern obj_t BGl_objectzd2displayzd2envz00zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_threadzd2startzd2joinablez12zd2envzc0zz__threadz00,
		BgL_bgl_za762threadza7d2star2658z00,
		BGl_z62threadzd2startzd2joinablez12z70zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_defaultzd2threadzd2backendzd2envzd2zz__threadz00,
		BgL_bgl_za762defaultza7d2thr2659z00,
		BGl_z62defaultzd2threadzd2backendz62zz__threadz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conditionzd2variablezd2broadcastz12zd2envzc0zz__threadz00,
		BgL_bgl_za762conditionza7d2v2660z00,
		BGl_z62conditionzd2variablezd2broadcastz12z70zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_z52userzd2threadzd2sleepz12zd2envz92zz__threadz00,
		BgL_bgl_za762za752userza7d2thr2661za7,
		BGl_z62z52userzd2threadzd2sleepz12z22zz__threadz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2conditionzd2variablezd2envzd2zz__threadz00,
		BgL_bgl__makeza7d2conditio2662za7, opt_generic_entry,
		BGl__makezd2conditionzd2variablez00zz__threadz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_dynamiczd2envzf3zd2envzf3zz__threadz00,
		BgL_bgl_za762dynamicza7d2env2663z00,
		BGl_z62dynamiczd2envzf3z43zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conditionzd2variablezd2signalz12zd2envzc0zz__threadz00,
		BgL_bgl_za762conditionza7d2v2664z00,
		BGl_z62conditionzd2variablezd2signalz12z70zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_tbzd2makezd2threadzd2envzd2zz__threadz00,
		BgL_bgl_za762tbza7d2makeza7d2t2665za7,
		BGl_z62tbzd2makezd2threadz62zz__threadz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_currentzd2threadzd2envz00zz__threadz00,
		BgL_bgl_za762currentza7d2thr2666z00,
		BGl_z62currentzd2threadzb0zz__threadz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mutexzf3zd2envz21zz__threadz00,
		BgL_bgl_za762mutexza7f3za791za7za72667za7, BGl_z62mutexzf3z91zz__threadz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conditionzd2variablezd2namezd2envzd2zz__threadz00,
		BgL_bgl_za762conditionza7d2v2668z00,
		BGl_z62conditionzd2variablezd2namez62zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_threadzd2parameterzd2envz00zz__threadz00,
		BgL_bgl_za762threadza7d2para2669z00,
		BGl_z62threadzd2parameterzb0zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mutexzd2nilzd2envz00zz__threadz00,
		BgL_bgl_za762mutexza7d2nilza7b2670za7, BGl_z62mutexzd2nilzb0zz__threadz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_z52userzd2currentzd2threadzd2envz80zz__threadz00,
		BgL_bgl_za762za752userza7d2cur2671za7,
		BGl_z62z52userzd2currentzd2threadz30zz__threadz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mutexzd2statezd2envz00zz__threadz00,
		BgL_bgl_za762mutexza7d2state2672z00, BGl_z62mutexzd2statezb0zz__threadz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00,
		BgL_bgl_za762threadza7d2init2673z00,
		BGl_z62threadzd2initializa7ez12z05zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_currentzd2threadzd2backendzd2envzd2zz__threadz00,
		BgL_bgl_za762currentza7d2thr2674z00,
		BGl_z62currentzd2threadzd2backendz62zz__threadz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_currentzd2dynamiczd2envzd2envzd2zz__threadz00,
		BgL_bgl_za762currentza7d2dyn2675z00,
		BGl_z62currentzd2dynamiczd2envz62zz__threadz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_GENERIC(BGl_threadzd2terminatez12zd2envz12zz__threadz00,
		BgL_bgl_za762threadza7d2term2676z00,
		BGl_z62threadzd2terminatez12za2zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conditionzd2variablezd2nilzd2envzd2zz__threadz00,
		BgL_bgl_za762conditionza7d2v2677z00,
		BGl_z62conditionzd2variablezd2nilz62zz__threadz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2mutexzd2envz00zz__threadz00,
		BgL_bgl__makeza7d2mutexza7d22678z00, opt_generic_entry,
		BGl__makezd2mutexzd2zz__threadz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_z52userzd2threadzd2yieldz12zd2envz92zz__threadz00,
		BgL_bgl_za762za752userza7d2thr2679za7,
		BGl_z62z52userzd2threadzd2yieldz12z22zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_tbzd2mutexzd2initializa7ez12zd2envz67zz__threadz00,
		BgL_bgl_za762tbza7d2mutexza7d22680za7,
		BGl_z62tbzd2mutexzd2initializa7ez12zd7zz__threadz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_threadzd2specificzd2setz12zd2envzc0zz__threadz00,
		BgL_bgl_za762threadza7d2spec2681z00,
		BGl_z62threadzd2specificzd2setz12z70zz__threadz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_threadzd2cleanupzd2setz12zd2envzc0zz__threadz00,
		BgL_bgl_za762threadza7d2clea2682z00,
		BGl_z62threadzd2cleanupzd2setz12z70zz__threadz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_threadzd2sleepz12zd2envz12zz__threadz00,
		BgL_bgl_za762threadza7d2slee2683z00,
		BGl_z62threadzd2sleepz12za2zz__threadz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2threadzd2backendzd2envzd2zz__threadz00,
		BgL_bgl_za762getza7d2threadza72684za7,
		BGl_z62getzd2threadzd2backendz62zz__threadz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__threadz00));
		     ADD_ROOT((void *) (&BGl_nothreadzd2backendzd2zz__threadz00));
		     ADD_ROOT((void *) (&BGl_za2nothreadzd2backendza2zd2zz__threadz00));
		     ADD_ROOT((void *) (&BGl_nothreadz00zz__threadz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2conditionzd2variablezd2nilza2z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_threadzd2backendzd2zz__threadz00));
		     ADD_ROOT((void *) (&BGl_za2threadzd2backendsza2zd2zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2303z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2305z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2314z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2323z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2325z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2329z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2330z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2335z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2419z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2339z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2422z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2424z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2343z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2425z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2426z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2427z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2428z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2429z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2430z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2431z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2432z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2433z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2434z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2353z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2355z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2359z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2364z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2369z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_za2nothreadzd2currentza2zd2zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2374z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2296z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2379z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_za2mutexzd2nilza2zd2zz__threadz00));
		     ADD_ROOT((void *) (&BGl_symbol2383z00zz__threadz00));
		     ADD_ROOT((void *) (&BGl_threadz00zz__threadz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long
		BgL_checksumz00_3911, char *BgL_fromz00_3912)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__threadz00))
				{
					BGl_requirezd2initializa7ationz75zz__threadz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__threadz00();
					BGl_cnstzd2initzd2zz__threadz00();
					BGl_importedzd2moduleszd2initz00zz__threadz00();
					BGl_objectzd2initzd2zz__threadz00();
					BGl_genericzd2initzd2zz__threadz00();
					BGl_methodzd2initzd2zz__threadz00();
					return BGl_toplevelzd2initzd2zz__threadz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__threadz00()
	{
		{	/* Llib/thread.scm 17 */
			BGl_symbol2296z00zz__threadz00 =
				bstring_to_symbol(BGl_string2297z00zz__threadz00);
			BGl_symbol2303z00zz__threadz00 =
				bstring_to_symbol(BGl_string2304z00zz__threadz00);
			BGl_symbol2305z00zz__threadz00 =
				bstring_to_symbol(BGl_string2306z00zz__threadz00);
			BGl_symbol2314z00zz__threadz00 =
				bstring_to_symbol(BGl_string2315z00zz__threadz00);
			BGl_symbol2323z00zz__threadz00 =
				bstring_to_symbol(BGl_string2324z00zz__threadz00);
			BGl_symbol2325z00zz__threadz00 =
				bstring_to_symbol(BGl_string2295z00zz__threadz00);
			BGl_symbol2329z00zz__threadz00 =
				bstring_to_symbol(BGl_string2292z00zz__threadz00);
			BGl_symbol2330z00zz__threadz00 =
				bstring_to_symbol(BGl_string2331z00zz__threadz00);
			BGl_symbol2335z00zz__threadz00 =
				bstring_to_symbol(BGl_string2336z00zz__threadz00);
			BGl_symbol2339z00zz__threadz00 =
				bstring_to_symbol(BGl_string2340z00zz__threadz00);
			BGl_symbol2343z00zz__threadz00 =
				bstring_to_symbol(BGl_string2344z00zz__threadz00);
			BGl_symbol2353z00zz__threadz00 =
				bstring_to_symbol(BGl_string2354z00zz__threadz00);
			BGl_symbol2355z00zz__threadz00 =
				bstring_to_symbol(BGl_string2299z00zz__threadz00);
			BGl_symbol2359z00zz__threadz00 =
				bstring_to_symbol(BGl_string2360z00zz__threadz00);
			BGl_symbol2364z00zz__threadz00 =
				bstring_to_symbol(BGl_string2365z00zz__threadz00);
			BGl_symbol2369z00zz__threadz00 =
				bstring_to_symbol(BGl_string2370z00zz__threadz00);
			BGl_symbol2374z00zz__threadz00 =
				bstring_to_symbol(BGl_string2375z00zz__threadz00);
			BGl_symbol2379z00zz__threadz00 =
				bstring_to_symbol(BGl_string2289z00zz__threadz00);
			BGl_symbol2383z00zz__threadz00 =
				bstring_to_symbol(BGl_string2384z00zz__threadz00);
			BGl_symbol2419z00zz__threadz00 =
				bstring_to_symbol(BGl_string2420z00zz__threadz00);
			BGl_symbol2422z00zz__threadz00 =
				bstring_to_symbol(BGl_string2411z00zz__threadz00);
			BGl_symbol2424z00zz__threadz00 =
				bstring_to_symbol(BGl_string2409z00zz__threadz00);
			BGl_symbol2425z00zz__threadz00 =
				bstring_to_symbol(BGl_string2407z00zz__threadz00);
			BGl_symbol2426z00zz__threadz00 =
				bstring_to_symbol(BGl_string2405z00zz__threadz00);
			BGl_symbol2427z00zz__threadz00 =
				bstring_to_symbol(BGl_string2403z00zz__threadz00);
			BGl_symbol2428z00zz__threadz00 =
				bstring_to_symbol(BGl_string2401z00zz__threadz00);
			BGl_symbol2429z00zz__threadz00 =
				bstring_to_symbol(BGl_string2399z00zz__threadz00);
			BGl_symbol2430z00zz__threadz00 =
				bstring_to_symbol(BGl_string2397z00zz__threadz00);
			BGl_symbol2431z00zz__threadz00 =
				bstring_to_symbol(BGl_string2393z00zz__threadz00);
			BGl_symbol2432z00zz__threadz00 =
				bstring_to_symbol(BGl_string2391z00zz__threadz00);
			BGl_symbol2433z00zz__threadz00 =
				bstring_to_symbol(BGl_string2389z00zz__threadz00);
			return (BGl_symbol2434z00zz__threadz00 =
				bstring_to_symbol(BGl_string2387z00zz__threadz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__threadz00()
	{
		{	/* Llib/thread.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__threadz00()
	{
		{	/* Llib/thread.scm 17 */
			{	/* Llib/thread.scm 268 */
				BgL_nothreadzd2backendzd2_bglt BgL_new1057z00_1156;

				{	/* Llib/thread.scm 269 */
					BgL_nothreadzd2backendzd2_bglt BgL_new1056z00_1157;

					BgL_new1056z00_1157 =
						((BgL_nothreadzd2backendzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_nothreadzd2backendzd2_bgl))));
					{	/* Llib/thread.scm 269 */
						long BgL_arg1284z00_1158;

						{	/* Llib/thread.scm 269 */
							long BgL_res1878z00_2099;

							BgL_res1878z00_2099 =
								BGL_CLASS_INDEX(BGl_nothreadzd2backendzd2zz__threadz00);
							BgL_arg1284z00_1158 = BgL_res1878z00_2099;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1056z00_1157), BgL_arg1284z00_1158);
					}
					BgL_new1057z00_1156 = BgL_new1056z00_1157;
				}
				((((BgL_threadzd2backendzd2_bglt) COBJECT(
								((BgL_threadzd2backendzd2_bglt) BgL_new1057z00_1156)))->
						BgL_namez00) = ((obj_t) BGl_string2289z00zz__threadz00), BUNSPEC);
				BGl_za2nothreadzd2backendza2zd2zz__threadz00 = BgL_new1057z00_1156;
			}
			{	/* Llib/thread.scm 275 */
				obj_t BgL_list1285z00_1159;

				BgL_list1285z00_1159 =
					MAKE_YOUNG_PAIR(
					((obj_t) BGl_za2nothreadzd2backendza2zd2zz__threadz00), BNIL);
				BGl_za2threadzd2backendsza2zd2zz__threadz00 = BgL_list1285z00_1159;
			}
			BGl_za2nothreadzd2currentza2zd2zz__threadz00 = BFALSE;
			BGl_za2mutexzd2nilza2zd2zz__threadz00 = bgl_make_nil_mutex();
			return (BGl_za2conditionzd2variablezd2nilza2z00zz__threadz00 =
				bgl_make_nil_condvar(), BUNSPEC);
		}

	}



/* dynamic-env? */
	BGL_EXPORTED_DEF bool_t BGl_dynamiczd2envzf3z21zz__threadz00(obj_t
		BgL_objz00_3)
	{
		{	/* Llib/thread.scm 255 */
			return BGL_DYNAMIC_ENVP(BgL_objz00_3);
		}

	}



/* &dynamic-env? */
	obj_t BGl_z62dynamiczd2envzf3z43zz__threadz00(obj_t BgL_envz00_3237,
		obj_t BgL_objz00_3238)
	{
		{	/* Llib/thread.scm 255 */
			return BBOOL(BGl_dynamiczd2envzf3z21zz__threadz00(BgL_objz00_3238));
		}

	}



/* current-dynamic-env */
	BGL_EXPORTED_DEF obj_t BGl_currentzd2dynamiczd2envz00zz__threadz00()
	{
		{	/* Llib/thread.scm 261 */
			return BGL_CURRENT_DYNAMIC_ENV();
		}

	}



/* &current-dynamic-env */
	obj_t BGl_z62currentzd2dynamiczd2envz62zz__threadz00(obj_t BgL_envz00_3239)
	{
		{	/* Llib/thread.scm 261 */
			return BGl_currentzd2dynamiczd2envz00zz__threadz00();
		}

	}



/* current-thread-backend */
	BGL_EXPORTED_DEF obj_t BGl_currentzd2threadzd2backendz00zz__threadz00()
	{
		{	/* Llib/thread.scm 280 */
			return BGL_THREAD_BACKEND();
		}

	}



/* &current-thread-backend */
	obj_t BGl_z62currentzd2threadzd2backendz62zz__threadz00(obj_t BgL_envz00_3240)
	{
		{	/* Llib/thread.scm 280 */
			return BGl_currentzd2threadzd2backendz00zz__threadz00();
		}

	}



/* current-thread-backend-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_currentzd2threadzd2backendzd2setz12zc0zz__threadz00
		(BgL_threadzd2backendzd2_bglt BgL_tbz00_4)
	{
		{	/* Llib/thread.scm 286 */
			{	/* Llib/thread.scm 287 */
				obj_t BgL_tmpz00_3973;

				BgL_tmpz00_3973 = ((obj_t) BgL_tbz00_4);
				BGL_THREAD_BACKEND_SET(BgL_tmpz00_3973);
			}
			BUNSPEC;
			return ((obj_t) BgL_tbz00_4);
		}

	}



/* &current-thread-backend-set! */
	obj_t BGl_z62currentzd2threadzd2backendzd2setz12za2zz__threadz00(obj_t
		BgL_envz00_3241, obj_t BgL_tbz00_3242)
	{
		{	/* Llib/thread.scm 286 */
			{	/* Llib/thread.scm 287 */
				BgL_threadzd2backendzd2_bglt BgL_auxz00_3977;

				if (BGl_isazf3zf3zz__objectz00(BgL_tbz00_3242,
						BGl_threadzd2backendzd2zz__threadz00))
					{	/* Llib/thread.scm 287 */
						BgL_auxz00_3977 = ((BgL_threadzd2backendzd2_bglt) BgL_tbz00_3242);
					}
				else
					{
						obj_t BgL_auxz00_3981;

						BgL_auxz00_3981 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 11022)), BGl_string2291z00zz__threadz00,
							BGl_string2292z00zz__threadz00, BgL_tbz00_3242);
						FAILURE(BgL_auxz00_3981, BFALSE, BFALSE);
					}
				return
					BGl_currentzd2threadzd2backendzd2setz12zc0zz__threadz00
					(BgL_auxz00_3977);
			}
		}

	}



/* default-thread-backend */
	BGL_EXPORTED_DEF obj_t BGl_defaultzd2threadzd2backendz00zz__threadz00()
	{
		{	/* Llib/thread.scm 293 */
			return CAR(BGl_za2threadzd2backendsza2zd2zz__threadz00);
		}

	}



/* &default-thread-backend */
	obj_t BGl_z62defaultzd2threadzd2backendz62zz__threadz00(obj_t BgL_envz00_3243)
	{
		{	/* Llib/thread.scm 293 */
			return BGl_defaultzd2threadzd2backendz00zz__threadz00();
		}

	}



/* default-thread-backend-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_defaultzd2threadzd2backendzd2setz12zc0zz__threadz00
		(BgL_threadzd2backendzd2_bglt BgL_tbz00_5)
	{
		{	/* Llib/thread.scm 299 */
			BGl_za2threadzd2backendsza2zd2zz__threadz00 =
				bgl_remq_bang(
				((obj_t) BgL_tbz00_5), BGl_za2threadzd2backendsza2zd2zz__threadz00);
			return (BGl_za2threadzd2backendsza2zd2zz__threadz00 =
				MAKE_YOUNG_PAIR(
					((obj_t) BgL_tbz00_5), BGl_za2threadzd2backendsza2zd2zz__threadz00),
				BUNSPEC);
		}

	}



/* &default-thread-backend-set! */
	obj_t BGl_z62defaultzd2threadzd2backendzd2setz12za2zz__threadz00(obj_t
		BgL_envz00_3244, obj_t BgL_tbz00_3245)
	{
		{	/* Llib/thread.scm 299 */
			{	/* Llib/thread.scm 300 */
				BgL_threadzd2backendzd2_bglt BgL_auxz00_3992;

				if (BGl_isazf3zf3zz__objectz00(BgL_tbz00_3245,
						BGl_threadzd2backendzd2zz__threadz00))
					{	/* Llib/thread.scm 300 */
						BgL_auxz00_3992 = ((BgL_threadzd2backendzd2_bglt) BgL_tbz00_3245);
					}
				else
					{
						obj_t BgL_auxz00_3996;

						BgL_auxz00_3996 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 11640)), BGl_string2293z00zz__threadz00,
							BGl_string2292z00zz__threadz00, BgL_tbz00_3245);
						FAILURE(BgL_auxz00_3996, BFALSE, BFALSE);
					}
				return
					BGl_defaultzd2threadzd2backendzd2setz12zc0zz__threadz00
					(BgL_auxz00_3992);
			}
		}

	}



/* get-thread-backend */
	BGL_EXPORTED_DEF obj_t BGl_getzd2threadzd2backendz00zz__threadz00(obj_t
		BgL_namez00_6)
	{
		{	/* Llib/thread.scm 306 */
			{
				obj_t BgL_tbsz00_1169;

				BgL_tbsz00_1169 = BGl_za2threadzd2backendsza2zd2zz__threadz00;
			BgL_zc3z04anonymousza31289ze3z87_1170:
				if (PAIRP(BgL_tbsz00_1169))
					{	/* Llib/thread.scm 309 */
						BgL_threadzd2backendzd2_bglt BgL_i1058z00_1172;

						BgL_i1058z00_1172 =
							((BgL_threadzd2backendzd2_bglt) CAR(BgL_tbsz00_1169));
						{	/* Llib/thread.scm 310 */
							bool_t BgL_test2689z00_4005;

							{	/* Llib/thread.scm 310 */
								obj_t BgL_arg1296z00_1176;

								BgL_arg1296z00_1176 =
									(((BgL_threadzd2backendzd2_bglt) COBJECT(BgL_i1058z00_1172))->
									BgL_namez00);
								{	/* Llib/thread.scm 310 */
									bool_t BgL_res1885z00_2121;

									{	/* Llib/thread.scm 310 */
										long BgL_l1z00_2108;

										BgL_l1z00_2108 = STRING_LENGTH(BgL_arg1296z00_1176);
										if ((BgL_l1z00_2108 == STRING_LENGTH(BgL_namez00_6)))
											{	/* Llib/thread.scm 310 */
												int BgL_arg1606z00_2111;

												{	/* Llib/thread.scm 310 */
													char *BgL_auxz00_4013;
													char *BgL_tmpz00_4011;

													BgL_auxz00_4013 = BSTRING_TO_STRING(BgL_namez00_6);
													BgL_tmpz00_4011 =
														BSTRING_TO_STRING(BgL_arg1296z00_1176);
													BgL_arg1606z00_2111 =
														memcmp(BgL_tmpz00_4011, BgL_auxz00_4013,
														BgL_l1z00_2108);
												}
												BgL_res1885z00_2121 =
													((long) (BgL_arg1606z00_2111) == ((long) 0));
											}
										else
											{	/* Llib/thread.scm 310 */
												BgL_res1885z00_2121 = ((bool_t) 0);
											}
									}
									BgL_test2689z00_4005 = BgL_res1885z00_2121;
								}
							}
							if (BgL_test2689z00_4005)
								{	/* Llib/thread.scm 310 */
									return CAR(BgL_tbsz00_1169);
								}
							else
								{
									obj_t BgL_tbsz00_4019;

									BgL_tbsz00_4019 = CDR(BgL_tbsz00_1169);
									BgL_tbsz00_1169 = BgL_tbsz00_4019;
									goto BgL_zc3z04anonymousza31289ze3z87_1170;
								}
						}
					}
				else
					{	/* Llib/thread.scm 308 */
						return BFALSE;
					}
			}
		}

	}



/* &get-thread-backend */
	obj_t BGl_z62getzd2threadzd2backendz62zz__threadz00(obj_t BgL_envz00_3246,
		obj_t BgL_namez00_3247)
	{
		{	/* Llib/thread.scm 306 */
			{	/* Llib/thread.scm 308 */
				obj_t BgL_auxz00_4021;

				if (STRINGP(BgL_namez00_3247))
					{	/* Llib/thread.scm 308 */
						BgL_auxz00_4021 = BgL_namez00_3247;
					}
				else
					{
						obj_t BgL_auxz00_4024;

						BgL_auxz00_4024 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 12001)), BGl_string2294z00zz__threadz00,
							BGl_string2295z00zz__threadz00, BgL_namez00_3247);
						FAILURE(BgL_auxz00_4024, BFALSE, BFALSE);
					}
				return BGl_getzd2threadzd2backendz00zz__threadz00(BgL_auxz00_4021);
			}
		}

	}



/* _make-thread */
	obj_t BGl__makezd2threadzd2zz__threadz00(obj_t BgL_env1196z00_42,
		obj_t BgL_opt1195z00_41)
	{
		{	/* Llib/thread.scm 426 */
			{	/* Llib/thread.scm 426 */
				obj_t BgL_g1197z00_3723;

				BgL_g1197z00_3723 = VECTOR_REF(BgL_opt1195z00_41, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1195z00_41))
					{
					case ((long) 1):

						{	/* Llib/thread.scm 426 */
							obj_t BgL_namez00_3724;

							BgL_namez00_3724 =
								BGl_gensymz00zz__r4_symbols_6_4z00
								(BGl_symbol2296z00zz__threadz00);
							{	/* Llib/thread.scm 426 */

								{	/* Llib/thread.scm 426 */
									BgL_threadz00_bglt BgL_res1886z00_3725;

									{	/* Llib/thread.scm 426 */
										obj_t BgL_bodyz00_3726;

										if (PROCEDUREP(BgL_g1197z00_3723))
											{	/* Llib/thread.scm 426 */
												BgL_bodyz00_3726 = BgL_g1197z00_3723;
											}
										else
											{
												obj_t BgL_auxz00_4033;

												BgL_auxz00_4033 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2290z00zz__threadz00, BINT(((long) 18146)),
													BGl_string2298z00zz__threadz00,
													BGl_string2299z00zz__threadz00, BgL_g1197z00_3723);
												FAILURE(BgL_auxz00_4033, BFALSE, BFALSE);
											}
										{	/* Llib/thread.scm 427 */
											obj_t BgL_arg1298z00_3727;

											BgL_arg1298z00_3727 =
												BGl_defaultzd2threadzd2backendz00zz__threadz00();
											{	/* Llib/thread.scm 427 */
												BgL_threadzd2backendzd2_bglt BgL_auxz00_4038;

												if (BGl_isazf3zf3zz__objectz00(BgL_arg1298z00_3727,
														BGl_threadzd2backendzd2zz__threadz00))
													{	/* Llib/thread.scm 427 */
														BgL_auxz00_4038 =
															((BgL_threadzd2backendzd2_bglt)
															BgL_arg1298z00_3727);
													}
												else
													{
														obj_t BgL_auxz00_4042;

														BgL_auxz00_4042 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2290z00zz__threadz00,
															BINT(((long) 18257)),
															BGl_string2298z00zz__threadz00,
															BGl_string2292z00zz__threadz00,
															BgL_arg1298z00_3727);
														FAILURE(BgL_auxz00_4042, BFALSE, BFALSE);
													}
												BgL_res1886z00_3725 =
													BGl_tbzd2makezd2threadz00zz__threadz00
													(BgL_auxz00_4038, BgL_bodyz00_3726, BgL_namez00_3724);
									}}}
									return ((obj_t) BgL_res1886z00_3725);
								}
							}
						}
						break;
					case ((long) 2):

						{	/* Llib/thread.scm 426 */
							obj_t BgL_namez00_3728;

							BgL_namez00_3728 = VECTOR_REF(BgL_opt1195z00_41, ((long) 1));
							{	/* Llib/thread.scm 426 */

								{	/* Llib/thread.scm 426 */
									BgL_threadz00_bglt BgL_res1887z00_3729;

									{	/* Llib/thread.scm 426 */
										obj_t BgL_bodyz00_3730;

										if (PROCEDUREP(BgL_g1197z00_3723))
											{	/* Llib/thread.scm 426 */
												BgL_bodyz00_3730 = BgL_g1197z00_3723;
											}
										else
											{
												obj_t BgL_auxz00_4051;

												BgL_auxz00_4051 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2290z00zz__threadz00, BINT(((long) 18146)),
													BGl_string2298z00zz__threadz00,
													BGl_string2299z00zz__threadz00, BgL_g1197z00_3723);
												FAILURE(BgL_auxz00_4051, BFALSE, BFALSE);
											}
										{	/* Llib/thread.scm 427 */
											obj_t BgL_arg1298z00_3731;

											BgL_arg1298z00_3731 =
												BGl_defaultzd2threadzd2backendz00zz__threadz00();
											{	/* Llib/thread.scm 427 */
												BgL_threadzd2backendzd2_bglt BgL_auxz00_4056;

												if (BGl_isazf3zf3zz__objectz00(BgL_arg1298z00_3731,
														BGl_threadzd2backendzd2zz__threadz00))
													{	/* Llib/thread.scm 427 */
														BgL_auxz00_4056 =
															((BgL_threadzd2backendzd2_bglt)
															BgL_arg1298z00_3731);
													}
												else
													{
														obj_t BgL_auxz00_4060;

														BgL_auxz00_4060 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2290z00zz__threadz00,
															BINT(((long) 18257)),
															BGl_string2298z00zz__threadz00,
															BGl_string2292z00zz__threadz00,
															BgL_arg1298z00_3731);
														FAILURE(BgL_auxz00_4060, BFALSE, BFALSE);
													}
												BgL_res1887z00_3729 =
													BGl_tbzd2makezd2threadz00zz__threadz00
													(BgL_auxz00_4056, BgL_bodyz00_3730, BgL_namez00_3728);
									}}}
									return ((obj_t) BgL_res1887z00_3729);
								}
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* make-thread */
	BGL_EXPORTED_DEF BgL_threadz00_bglt BGl_makezd2threadzd2zz__threadz00(obj_t
		BgL_bodyz00_39, obj_t BgL_namez00_40)
	{
		{	/* Llib/thread.scm 426 */
			{	/* Llib/thread.scm 427 */
				obj_t BgL_arg1298z00_3732;

				BgL_arg1298z00_3732 = BGl_defaultzd2threadzd2backendz00zz__threadz00();
				return
					BGl_tbzd2makezd2threadz00zz__threadz00(
					((BgL_threadzd2backendzd2_bglt) BgL_arg1298z00_3732), BgL_bodyz00_39,
					BgL_namez00_40);
			}
		}

	}



/* %current-thread */
	obj_t BGl_z52currentzd2threadz80zz__threadz00()
	{
		{	/* Llib/thread.scm 438 */
			{	/* Llib/thread.scm 439 */
				obj_t BgL_tbz00_1185;

				BgL_tbz00_1185 = BGL_THREAD_BACKEND();
				if (BGl_isazf3zf3zz__objectz00(BgL_tbz00_1185,
						BGl_threadzd2backendzd2zz__threadz00))
					{	/* Llib/thread.scm 440 */
						return
							BGl_tbzd2currentzd2threadz00zz__threadz00(
							((BgL_threadzd2backendzd2_bglt) BgL_tbz00_1185));
					}
				else
					{	/* Llib/thread.scm 440 */
						return BFALSE;
					}
			}
		}

	}



/* current-thread */
	BGL_EXPORTED_DEF obj_t BGl_currentzd2threadzd2zz__threadz00()
	{
		{	/* Llib/thread.scm 446 */
			{	/* Llib/thread.scm 447 */
				obj_t BgL_thz00_1187;

				BgL_thz00_1187 = BGl_z52currentzd2threadz80zz__threadz00();
				if (BGl_isazf3zf3zz__objectz00(BgL_thz00_1187,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 448 */
						return
							BGl_z52userzd2currentzd2threadz52zz__threadz00(
							((BgL_threadz00_bglt) BgL_thz00_1187));
					}
				else
					{	/* Llib/thread.scm 448 */
						return BFALSE;
					}
			}
		}

	}



/* &current-thread */
	obj_t BGl_z62currentzd2threadzb0zz__threadz00(obj_t BgL_envz00_3248)
	{
		{	/* Llib/thread.scm 446 */
			return BGl_currentzd2threadzd2zz__threadz00();
		}

	}



/* thread-sleep! */
	BGL_EXPORTED_DEF obj_t BGl_threadzd2sleepz12zc0zz__threadz00(obj_t
		BgL_objz00_46)
	{
		{	/* Llib/thread.scm 475 */
			{	/* Llib/thread.scm 476 */
				obj_t BgL_arg1301z00_3733;

				BgL_arg1301z00_3733 = BGl_currentzd2threadzd2zz__threadz00();
				return
					BGl_z52userzd2threadzd2sleepz12z40zz__threadz00(
					((BgL_threadz00_bglt) BgL_arg1301z00_3733), BgL_objz00_46);
			}
		}

	}



/* &thread-sleep! */
	obj_t BGl_z62threadzd2sleepz12za2zz__threadz00(obj_t BgL_envz00_3249,
		obj_t BgL_objz00_3250)
	{
		{	/* Llib/thread.scm 475 */
			return BGl_threadzd2sleepz12zc0zz__threadz00(BgL_objz00_3250);
		}

	}



/* thread-yield! */
	BGL_EXPORTED_DEF obj_t BGl_threadzd2yieldz12zc0zz__threadz00()
	{
		{	/* Llib/thread.scm 487 */
			{	/* Llib/thread.scm 488 */
				obj_t BgL_arg1302z00_3734;

				BgL_arg1302z00_3734 = BGl_currentzd2threadzd2zz__threadz00();
				return
					BGl_z52userzd2threadzd2yieldz12z40zz__threadz00(
					((BgL_threadz00_bglt) BgL_arg1302z00_3734));
			}
		}

	}



/* &thread-yield! */
	obj_t BGl_z62threadzd2yieldz12za2zz__threadz00(obj_t BgL_envz00_3251)
	{
		{	/* Llib/thread.scm 487 */
			return BGl_threadzd2yieldz12zc0zz__threadz00();
		}

	}



/* thread-parameter */
	BGL_EXPORTED_DEF obj_t BGl_threadzd2parameterzd2zz__threadz00(obj_t
		BgL_idz00_48)
	{
		{	/* Llib/thread.scm 493 */
			{	/* Llib/thread.scm 494 */
				obj_t BgL_cz00_2139;

				{	/* Llib/thread.scm 494 */
					obj_t BgL_arg1304z00_2140;

					BgL_arg1304z00_2140 = BGL_PARAMETERS();
					BgL_cz00_2139 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_48,
						BgL_arg1304z00_2140);
				}
				if (PAIRP(BgL_cz00_2139))
					{	/* Llib/thread.scm 495 */
						return CDR(BgL_cz00_2139);
					}
				else
					{	/* Llib/thread.scm 495 */
						return BFALSE;
					}
			}
		}

	}



/* &thread-parameter */
	obj_t BGl_z62threadzd2parameterzb0zz__threadz00(obj_t BgL_envz00_3252,
		obj_t BgL_idz00_3253)
	{
		{	/* Llib/thread.scm 493 */
			{	/* Llib/thread.scm 494 */
				obj_t BgL_auxz00_4095;

				if (SYMBOLP(BgL_idz00_3253))
					{	/* Llib/thread.scm 494 */
						BgL_auxz00_4095 = BgL_idz00_3253;
					}
				else
					{
						obj_t BgL_auxz00_4098;

						BgL_auxz00_4098 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 21187)), BGl_string2300z00zz__threadz00,
							BGl_string2301z00zz__threadz00, BgL_idz00_3253);
						FAILURE(BgL_auxz00_4098, BFALSE, BFALSE);
					}
				return BGl_threadzd2parameterzd2zz__threadz00(BgL_auxz00_4095);
			}
		}

	}



/* thread-parameter-set! */
	BGL_EXPORTED_DEF obj_t BGl_threadzd2parameterzd2setz12z12zz__threadz00(obj_t
		BgL_idz00_49, obj_t BgL_valz00_50)
	{
		{	/* Llib/thread.scm 502 */
			{	/* Llib/thread.scm 503 */
				obj_t BgL_cz00_2144;

				{	/* Llib/thread.scm 503 */
					obj_t BgL_arg1309z00_2145;

					BgL_arg1309z00_2145 = BGL_PARAMETERS();
					BgL_cz00_2144 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_49,
						BgL_arg1309z00_2145);
				}
				if (PAIRP(BgL_cz00_2144))
					{	/* Llib/thread.scm 504 */
						return SET_CDR(BgL_cz00_2144, BgL_valz00_50);
					}
				else
					{	/* Llib/thread.scm 504 */
						{	/* Llib/thread.scm 508 */
							obj_t BgL_arg1306z00_2147;

							{	/* Llib/thread.scm 508 */
								obj_t BgL_arg1307z00_2148;
								obj_t BgL_arg1308z00_2149;

								BgL_arg1307z00_2148 =
									MAKE_YOUNG_PAIR(BgL_idz00_49, BgL_valz00_50);
								BgL_arg1308z00_2149 = BGL_PARAMETERS();
								BgL_arg1306z00_2147 =
									MAKE_YOUNG_PAIR(BgL_arg1307z00_2148, BgL_arg1308z00_2149);
							}
							BGL_PARAMETERS_SET(BgL_arg1306z00_2147);
						}
						return BgL_valz00_50;
					}
			}
		}

	}



/* &thread-parameter-set! */
	obj_t BGl_z62threadzd2parameterzd2setz12z70zz__threadz00(obj_t
		BgL_envz00_3254, obj_t BgL_idz00_3255, obj_t BgL_valz00_3256)
	{
		{	/* Llib/thread.scm 502 */
			{	/* Llib/thread.scm 503 */
				obj_t BgL_auxz00_4112;

				if (SYMBOLP(BgL_idz00_3255))
					{	/* Llib/thread.scm 503 */
						BgL_auxz00_4112 = BgL_idz00_3255;
					}
				else
					{
						obj_t BgL_auxz00_4115;

						BgL_auxz00_4115 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 21534)), BGl_string2302z00zz__threadz00,
							BGl_string2301z00zz__threadz00, BgL_idz00_3255);
						FAILURE(BgL_auxz00_4115, BFALSE, BFALSE);
					}
				return
					BGl_threadzd2parameterzd2setz12z12zz__threadz00(BgL_auxz00_4112,
					BgL_valz00_3256);
			}
		}

	}



/* mutex? */
	BGL_EXPORTED_DEF bool_t BGl_mutexzf3zf3zz__threadz00(obj_t BgL_objz00_63)
	{
		{	/* Llib/thread.scm 577 */
			return BGL_MUTEXP(BgL_objz00_63);
		}

	}



/* &mutex? */
	obj_t BGl_z62mutexzf3z91zz__threadz00(obj_t BgL_envz00_3257,
		obj_t BgL_objz00_3258)
	{
		{	/* Llib/thread.scm 577 */
			return BBOOL(BGl_mutexzf3zf3zz__threadz00(BgL_objz00_3258));
		}

	}



/* _make-mutex */
	obj_t BGl__makezd2mutexzd2zz__threadz00(obj_t BgL_env1223z00_66,
		obj_t BgL_opt1222z00_65)
	{
		{	/* Llib/thread.scm 583 */
			{	/* Llib/thread.scm 583 */

				switch (VECTOR_LENGTH(BgL_opt1222z00_65))
					{
					case ((long) 0):

						{	/* Llib/thread.scm 583 */
							obj_t BgL_namez00_3735;

							BgL_namez00_3735 =
								BGl_gensymz00zz__r4_symbols_6_4z00
								(BGl_symbol2303z00zz__threadz00);
							{	/* Llib/thread.scm 583 */

								{	/* Llib/thread.scm 583 */
									obj_t BgL_res1890z00_3736;

									BgL_res1890z00_3736 = bgl_make_mutex(BgL_namez00_3735);
									return BgL_res1890z00_3736;
								}
							}
						}
						break;
					case ((long) 1):

						{	/* Llib/thread.scm 583 */
							obj_t BgL_namez00_3737;

							BgL_namez00_3737 = VECTOR_REF(BgL_opt1222z00_65, ((long) 0));
							{	/* Llib/thread.scm 583 */

								{	/* Llib/thread.scm 583 */
									obj_t BgL_res1891z00_3738;

									BgL_res1891z00_3738 = bgl_make_mutex(BgL_namez00_3737);
									return BgL_res1891z00_3738;
								}
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* make-mutex */
	BGL_EXPORTED_DEF obj_t BGl_makezd2mutexzd2zz__threadz00(obj_t BgL_namez00_64)
	{
		{	/* Llib/thread.scm 583 */
			return bgl_make_mutex(BgL_namez00_64);
		}

	}



/* _make-spinlock */
	obj_t BGl__makezd2spinlockzd2zz__threadz00(obj_t BgL_env1227z00_69,
		obj_t BgL_opt1226z00_68)
	{
		{	/* Llib/thread.scm 589 */
			{	/* Llib/thread.scm 589 */

				switch (VECTOR_LENGTH(BgL_opt1226z00_68))
					{
					case ((long) 0):

						{	/* Llib/thread.scm 589 */
							obj_t BgL_namez00_3739;

							BgL_namez00_3739 =
								BGl_gensymz00zz__r4_symbols_6_4z00
								(BGl_symbol2305z00zz__threadz00);
							{	/* Llib/thread.scm 589 */

								{	/* Llib/thread.scm 589 */
									obj_t BgL_res1892z00_3740;

									BgL_res1892z00_3740 = bgl_make_spinlock(BgL_namez00_3739);
									return BgL_res1892z00_3740;
								}
							}
						}
						break;
					case ((long) 1):

						{	/* Llib/thread.scm 589 */
							obj_t BgL_namez00_3741;

							BgL_namez00_3741 = VECTOR_REF(BgL_opt1226z00_68, ((long) 0));
							{	/* Llib/thread.scm 589 */

								{	/* Llib/thread.scm 589 */
									obj_t BgL_res1893z00_3742;

									BgL_res1893z00_3742 = bgl_make_spinlock(BgL_namez00_3741);
									return BgL_res1893z00_3742;
								}
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* make-spinlock */
	BGL_EXPORTED_DEF obj_t BGl_makezd2spinlockzd2zz__threadz00(obj_t
		BgL_namez00_67)
	{
		{	/* Llib/thread.scm 589 */
			return bgl_make_spinlock(BgL_namez00_67);
		}

	}



/* mutex-nil */
	BGL_EXPORTED_DEF obj_t BGl_mutexzd2nilzd2zz__threadz00()
	{
		{	/* Llib/thread.scm 596 */
			return BGl_za2mutexzd2nilza2zd2zz__threadz00;
		}

	}



/* &mutex-nil */
	obj_t BGl_z62mutexzd2nilzb0zz__threadz00(obj_t BgL_envz00_3259)
	{
		{	/* Llib/thread.scm 596 */
			return BGl_mutexzd2nilzd2zz__threadz00();
		}

	}



/* mutex-name */
	BGL_EXPORTED_DEF obj_t BGl_mutexzd2namezd2zz__threadz00(obj_t BgL_objz00_70)
	{
		{	/* Llib/thread.scm 601 */
			return BGL_MUTEX_NAME(BgL_objz00_70);
		}

	}



/* &mutex-name */
	obj_t BGl_z62mutexzd2namezb0zz__threadz00(obj_t BgL_envz00_3260,
		obj_t BgL_objz00_3261)
	{
		{	/* Llib/thread.scm 601 */
			{	/* Llib/thread.scm 602 */
				obj_t BgL_auxz00_4139;

				if (BGL_MUTEXP(BgL_objz00_3261))
					{	/* Llib/thread.scm 602 */
						BgL_auxz00_4139 = BgL_objz00_3261;
					}
				else
					{
						obj_t BgL_auxz00_4142;

						BgL_auxz00_4142 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 26155)), BGl_string2307z00zz__threadz00,
							BGl_string2304z00zz__threadz00, BgL_objz00_3261);
						FAILURE(BgL_auxz00_4142, BFALSE, BFALSE);
					}
				return BGl_mutexzd2namezd2zz__threadz00(BgL_auxz00_4139);
			}
		}

	}



/* _mutex-lock! */
	obj_t BGl__mutexzd2lockz12zc0zz__threadz00(obj_t BgL_env1231z00_74,
		obj_t BgL_opt1230z00_73)
	{
		{	/* Llib/thread.scm 607 */
			{	/* Llib/thread.scm 607 */
				obj_t BgL_g1232z00_3743;

				BgL_g1232z00_3743 = VECTOR_REF(BgL_opt1230z00_73, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1230z00_73))
					{
					case ((long) 1):

						{	/* Llib/thread.scm 607 */

							{	/* Llib/thread.scm 607 */
								obj_t BgL_mz00_3744;

								if (BGL_MUTEXP(BgL_g1232z00_3743))
									{	/* Llib/thread.scm 607 */
										BgL_mz00_3744 = BgL_g1232z00_3743;
									}
								else
									{
										obj_t BgL_auxz00_4150;

										BgL_auxz00_4150 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2290z00zz__threadz00, BINT(((long) 26397)),
											BGl_string2308z00zz__threadz00,
											BGl_string2304z00zz__threadz00, BgL_g1232z00_3743);
										FAILURE(BgL_auxz00_4150, BFALSE, BFALSE);
									}
								{	/* Llib/thread.scm 609 */
									int BgL_arg1314z00_3745;

									BgL_arg1314z00_3745 = BGL_MUTEX_LOCK(BgL_mz00_3744);
									return BBOOL(((long) (BgL_arg1314z00_3745) == ((long) 0)));
						}}} break;
					case ((long) 2):

						{	/* Llib/thread.scm 607 */
							obj_t BgL_timeoutz00_3746;

							BgL_timeoutz00_3746 = VECTOR_REF(BgL_opt1230z00_73, ((long) 1));
							{	/* Llib/thread.scm 607 */

								{	/* Llib/thread.scm 607 */
									obj_t BgL_mz00_3747;
									long BgL_timeoutz00_3748;

									if (BGL_MUTEXP(BgL_g1232z00_3743))
										{	/* Llib/thread.scm 607 */
											BgL_mz00_3747 = BgL_g1232z00_3743;
										}
									else
										{
											obj_t BgL_auxz00_4161;

											BgL_auxz00_4161 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2290z00zz__threadz00, BINT(((long) 26397)),
												BGl_string2308z00zz__threadz00,
												BGl_string2304z00zz__threadz00, BgL_g1232z00_3743);
											FAILURE(BgL_auxz00_4161, BFALSE, BFALSE);
										}
									{	/* Llib/thread.scm 607 */
										obj_t BgL_tmpz00_4165;

										if (INTEGERP(BgL_timeoutz00_3746))
											{	/* Llib/thread.scm 607 */
												BgL_tmpz00_4165 = BgL_timeoutz00_3746;
											}
										else
											{
												obj_t BgL_auxz00_4168;

												BgL_auxz00_4168 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2290z00zz__threadz00, BINT(((long) 26397)),
													BGl_string2308z00zz__threadz00,
													BGl_string2309z00zz__threadz00, BgL_timeoutz00_3746);
												FAILURE(BgL_auxz00_4168, BFALSE, BFALSE);
											}
										BgL_timeoutz00_3748 = (long) CINT(BgL_tmpz00_4165);
									}
									if ((BgL_timeoutz00_3748 == ((long) 0)))
										{	/* Llib/thread.scm 609 */
											int BgL_arg1314z00_3749;

											BgL_arg1314z00_3749 = BGL_MUTEX_LOCK(BgL_mz00_3747);
											return
												BBOOL(((long) (BgL_arg1314z00_3749) == ((long) 0)));
										}
									else
										{	/* Llib/thread.scm 610 */
											int BgL_arg1315z00_3750;

											BgL_arg1315z00_3750 =
												BGL_MUTEX_TIMED_LOCK(BgL_mz00_3747,
												BgL_timeoutz00_3748);
											return BBOOL(((long) (BgL_arg1315z00_3750) ==
													((long) 0)));
						}}}} break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* mutex-lock! */
	BGL_EXPORTED_DEF obj_t BGl_mutexzd2lockz12zc0zz__threadz00(obj_t BgL_mz00_71,
		long BgL_timeoutz00_72)
	{
		{	/* Llib/thread.scm 607 */
			if ((BgL_timeoutz00_72 == ((long) 0)))
				{	/* Llib/thread.scm 609 */
					int BgL_arg1314z00_3751;

					BgL_arg1314z00_3751 = BGL_MUTEX_LOCK(BgL_mz00_71);
					return BBOOL(((long) (BgL_arg1314z00_3751) == ((long) 0)));
				}
			else
				{	/* Llib/thread.scm 610 */
					int BgL_arg1315z00_3752;

					BgL_arg1315z00_3752 =
						BGL_MUTEX_TIMED_LOCK(BgL_mz00_71, BgL_timeoutz00_72);
					return BBOOL(((long) (BgL_arg1315z00_3752) == ((long) 0)));
		}}

	}



/* mutex-unlock! */
	BGL_EXPORTED_DEF obj_t BGl_mutexzd2unlockz12zc0zz__threadz00(obj_t
		BgL_mz00_75)
	{
		{	/* Llib/thread.scm 615 */
			{	/* Llib/thread.scm 616 */
				int BgL_arg1316z00_3753;

				BgL_arg1316z00_3753 = BGL_MUTEX_UNLOCK(BgL_mz00_75);
				return BBOOL(((long) (BgL_arg1316z00_3753) == ((long) 0)));
		}}

	}



/* &mutex-unlock! */
	obj_t BGl_z62mutexzd2unlockz12za2zz__threadz00(obj_t BgL_envz00_3262,
		obj_t BgL_mz00_3263)
	{
		{	/* Llib/thread.scm 615 */
			{	/* Llib/thread.scm 616 */
				obj_t BgL_auxz00_4199;

				if (BGL_MUTEXP(BgL_mz00_3263))
					{	/* Llib/thread.scm 616 */
						BgL_auxz00_4199 = BgL_mz00_3263;
					}
				else
					{
						obj_t BgL_auxz00_4202;

						BgL_auxz00_4202 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 26822)), BGl_string2310z00zz__threadz00,
							BGl_string2304z00zz__threadz00, BgL_mz00_3263);
						FAILURE(BgL_auxz00_4202, BFALSE, BFALSE);
					}
				return BGl_mutexzd2unlockz12zc0zz__threadz00(BgL_auxz00_4199);
			}
		}

	}



/* mutex-state */
	BGL_EXPORTED_DEF obj_t BGl_mutexzd2statezd2zz__threadz00(obj_t
		BgL_mutexz00_76)
	{
		{	/* Llib/thread.scm 621 */
			return BGL_MUTEX_STATE(BgL_mutexz00_76);
		}

	}



/* &mutex-state */
	obj_t BGl_z62mutexzd2statezb0zz__threadz00(obj_t BgL_envz00_3264,
		obj_t BgL_mutexz00_3265)
	{
		{	/* Llib/thread.scm 621 */
			{	/* Llib/thread.scm 622 */
				obj_t BgL_auxz00_4208;

				if (BGL_MUTEXP(BgL_mutexz00_3265))
					{	/* Llib/thread.scm 622 */
						BgL_auxz00_4208 = BgL_mutexz00_3265;
					}
				else
					{
						obj_t BgL_auxz00_4211;

						BgL_auxz00_4211 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 27105)), BGl_string2311z00zz__threadz00,
							BGl_string2304z00zz__threadz00, BgL_mutexz00_3265);
						FAILURE(BgL_auxz00_4211, BFALSE, BFALSE);
					}
				return BGl_mutexzd2statezd2zz__threadz00(BgL_auxz00_4208);
			}
		}

	}



/* with-lock */
	BGL_EXPORTED_DEF obj_t BGl_withzd2lockzd2zz__threadz00(obj_t BgL_mutexz00_78,
		obj_t BgL_thunkz00_79)
	{
		{	/* Llib/thread.scm 633 */
			{	/* Llib/thread.scm 634 */
				obj_t BgL_top2711z00_4217;

				BgL_top2711z00_4217 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BgL_mutexz00_78);
				BGL_EXITD_PUSH_PROTECT(BgL_top2711z00_4217, BgL_mutexz00_78);
				BUNSPEC;
				{	/* Llib/thread.scm 634 */
					obj_t BgL_tmp2710z00_4216;

					BgL_tmp2710z00_4216 =
						PROCEDURE_ENTRY(BgL_thunkz00_79) (BgL_thunkz00_79, BEOA);
					BGL_EXITD_POP_PROTECT(BgL_top2711z00_4217);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BgL_mutexz00_78);
					return BgL_tmp2710z00_4216;
				}
			}
		}

	}



/* &with-lock */
	obj_t BGl_z62withzd2lockzb0zz__threadz00(obj_t BgL_envz00_3266,
		obj_t BgL_mutexz00_3267, obj_t BgL_thunkz00_3268)
	{
		{	/* Llib/thread.scm 633 */
			{	/* Llib/thread.scm 634 */
				obj_t BgL_auxz00_4233;
				obj_t BgL_auxz00_4226;

				if (PROCEDUREP(BgL_thunkz00_3268))
					{	/* Llib/thread.scm 634 */
						BgL_auxz00_4233 = BgL_thunkz00_3268;
					}
				else
					{
						obj_t BgL_auxz00_4236;

						BgL_auxz00_4236 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 27668)), BGl_string2312z00zz__threadz00,
							BGl_string2299z00zz__threadz00, BgL_thunkz00_3268);
						FAILURE(BgL_auxz00_4236, BFALSE, BFALSE);
					}
				if (BGL_MUTEXP(BgL_mutexz00_3267))
					{	/* Llib/thread.scm 634 */
						BgL_auxz00_4226 = BgL_mutexz00_3267;
					}
				else
					{
						obj_t BgL_auxz00_4229;

						BgL_auxz00_4229 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 27668)), BGl_string2312z00zz__threadz00,
							BGl_string2304z00zz__threadz00, BgL_mutexz00_3267);
						FAILURE(BgL_auxz00_4229, BFALSE, BFALSE);
					}
				return
					BGl_withzd2lockzd2zz__threadz00(BgL_auxz00_4226, BgL_auxz00_4233);
			}
		}

	}



/* with-timed-lock */
	BGL_EXPORTED_DEF obj_t BGl_withzd2timedzd2lockz00zz__threadz00(obj_t
		BgL_mutexz00_80, int BgL_timeoutz00_81, obj_t BgL_thunkz00_82)
	{
		{	/* Llib/thread.scm 640 */
			{	/* Llib/thread.scm 641 */
				bool_t BgL_test2714z00_4241;

				{	/* Llib/thread.scm 641 */
					long BgL_timeoutz00_2211;

					BgL_timeoutz00_2211 = (long) (BgL_timeoutz00_81);
					if ((BgL_timeoutz00_2211 == ((long) 0)))
						{	/* Llib/thread.scm 609 */
							int BgL_arg1314z00_2213;

							BgL_arg1314z00_2213 = BGL_MUTEX_LOCK(BgL_mutexz00_80);
							BgL_test2714z00_4241 =
								((long) (BgL_arg1314z00_2213) == ((long) 0));
						}
					else
						{	/* Llib/thread.scm 610 */
							int BgL_arg1315z00_2214;

							BgL_arg1315z00_2214 =
								BGL_MUTEX_TIMED_LOCK(BgL_mutexz00_80, BgL_timeoutz00_2211);
							BgL_test2714z00_4241 =
								((long) (BgL_arg1315z00_2214) == ((long) 0));
				}}
				if (BgL_test2714z00_4241)
					{	/* Llib/thread.scm 642 */
						obj_t BgL_exitd1093z00_2207;

						BgL_exitd1093z00_2207 = BGL_EXITD_TOP_AS_OBJ();
						{	/* Llib/thread.scm 644 */
							obj_t BgL_zc3z04anonymousza31318ze3z87_3269;

							BgL_zc3z04anonymousza31318ze3z87_3269 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31318ze3ze5zz__threadz00,
								(int) (((long) 0)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31318ze3z87_3269,
								(int) (((long) 0)), BgL_mutexz00_80);
							BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
								(BgL_exitd1093z00_2207, BgL_zc3z04anonymousza31318ze3z87_3269);
							{	/* Llib/thread.scm 643 */
								obj_t BgL_tmp1095z00_2209;

								BgL_tmp1095z00_2209 =
									PROCEDURE_ENTRY(BgL_thunkz00_82) (BgL_thunkz00_82, BEOA);
								BGl_exitdzd2popzd2protectz12z12zz__bexitz00
									(BgL_exitd1093z00_2207);
								{	/* Llib/thread.scm 616 */
									int BgL_arg1316z00_2226;

									BgL_arg1316z00_2226 = BGL_MUTEX_UNLOCK(BgL_mutexz00_80);
									((long) (BgL_arg1316z00_2226) == ((long) 0));
								}
								return BgL_tmp1095z00_2209;
							}
						}
					}
				else
					{	/* Llib/thread.scm 641 */
						return BFALSE;
					}
			}
		}

	}



/* &with-timed-lock */
	obj_t BGl_z62withzd2timedzd2lockz62zz__threadz00(obj_t BgL_envz00_3270,
		obj_t BgL_mutexz00_3271, obj_t BgL_timeoutz00_3272, obj_t BgL_thunkz00_3273)
	{
		{	/* Llib/thread.scm 640 */
			{	/* Llib/thread.scm 641 */
				obj_t BgL_auxz00_4281;
				int BgL_auxz00_4272;
				obj_t BgL_auxz00_4265;

				if (PROCEDUREP(BgL_thunkz00_3273))
					{	/* Llib/thread.scm 641 */
						BgL_auxz00_4281 = BgL_thunkz00_3273;
					}
				else
					{
						obj_t BgL_auxz00_4284;

						BgL_auxz00_4284 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 27975)), BGl_string2313z00zz__threadz00,
							BGl_string2299z00zz__threadz00, BgL_thunkz00_3273);
						FAILURE(BgL_auxz00_4284, BFALSE, BFALSE);
					}
				{	/* Llib/thread.scm 641 */
					obj_t BgL_tmpz00_4273;

					if (INTEGERP(BgL_timeoutz00_3272))
						{	/* Llib/thread.scm 641 */
							BgL_tmpz00_4273 = BgL_timeoutz00_3272;
						}
					else
						{
							obj_t BgL_auxz00_4276;

							BgL_auxz00_4276 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
								BINT(((long) 27975)), BGl_string2313z00zz__threadz00,
								BGl_string2309z00zz__threadz00, BgL_timeoutz00_3272);
							FAILURE(BgL_auxz00_4276, BFALSE, BFALSE);
						}
					BgL_auxz00_4272 = CINT(BgL_tmpz00_4273);
				}
				if (BGL_MUTEXP(BgL_mutexz00_3271))
					{	/* Llib/thread.scm 641 */
						BgL_auxz00_4265 = BgL_mutexz00_3271;
					}
				else
					{
						obj_t BgL_auxz00_4268;

						BgL_auxz00_4268 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 27975)), BGl_string2313z00zz__threadz00,
							BGl_string2304z00zz__threadz00, BgL_mutexz00_3271);
						FAILURE(BgL_auxz00_4268, BFALSE, BFALSE);
					}
				return
					BGl_withzd2timedzd2lockz00zz__threadz00(BgL_auxz00_4265,
					BgL_auxz00_4272, BgL_auxz00_4281);
			}
		}

	}



/* &<@anonymous:1318> */
	obj_t BGl_z62zc3z04anonymousza31318ze3ze5zz__threadz00(obj_t BgL_envz00_3274)
	{
		{	/* Llib/thread.scm 642 */
			{	/* Llib/thread.scm 644 */
				obj_t BgL_mutexz00_3275;

				BgL_mutexz00_3275 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3274, (int) (((long) 0))));
				{	/* Llib/thread.scm 644 */
					bool_t BgL_tmpz00_4292;

					{	/* Llib/thread.scm 616 */
						int BgL_arg1316z00_3754;

						BgL_arg1316z00_3754 = BGL_MUTEX_UNLOCK(BgL_mutexz00_3275);
						BgL_tmpz00_4292 = ((long) (BgL_arg1316z00_3754) == ((long) 0));
					}
					return BBOOL(BgL_tmpz00_4292);
				}
			}
		}

	}



/* condition-variable? */
	BGL_EXPORTED_DEF bool_t BGl_conditionzd2variablezf3z21zz__threadz00(obj_t
		BgL_objz00_83)
	{
		{	/* Llib/thread.scm 649 */
			return BGL_CONDVARP(BgL_objz00_83);
		}

	}



/* &condition-variable? */
	obj_t BGl_z62conditionzd2variablezf3z43zz__threadz00(obj_t BgL_envz00_3276,
		obj_t BgL_objz00_3277)
	{
		{	/* Llib/thread.scm 649 */
			return
				BBOOL(BGl_conditionzd2variablezf3z21zz__threadz00(BgL_objz00_3277));
		}

	}



/* _make-condition-variable */
	obj_t BGl__makezd2conditionzd2variablez00zz__threadz00(obj_t
		BgL_env1236z00_86, obj_t BgL_opt1235z00_85)
	{
		{	/* Llib/thread.scm 655 */
			{	/* Llib/thread.scm 655 */

				switch (VECTOR_LENGTH(BgL_opt1235z00_85))
					{
					case ((long) 0):

						{	/* Llib/thread.scm 656 */
							obj_t BgL_namez00_3755;

							BgL_namez00_3755 =
								BGl_gensymz00zz__r4_symbols_6_4z00
								(BGl_symbol2314z00zz__threadz00);
							{	/* Llib/thread.scm 655 */

								{	/* Llib/thread.scm 655 */
									obj_t BgL_res1909z00_3756;

									BgL_res1909z00_3756 = bgl_make_condvar(BgL_namez00_3755);
									return BgL_res1909z00_3756;
								}
							}
						}
						break;
					case ((long) 1):

						{	/* Llib/thread.scm 655 */
							obj_t BgL_namez00_3757;

							BgL_namez00_3757 = VECTOR_REF(BgL_opt1235z00_85, ((long) 0));
							{	/* Llib/thread.scm 655 */

								{	/* Llib/thread.scm 655 */
									obj_t BgL_res1910z00_3758;

									BgL_res1910z00_3758 = bgl_make_condvar(BgL_namez00_3757);
									return BgL_res1910z00_3758;
								}
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* make-condition-variable */
	BGL_EXPORTED_DEF obj_t BGl_makezd2conditionzd2variablez00zz__threadz00(obj_t
		BgL_namez00_84)
	{
		{	/* Llib/thread.scm 655 */
			return bgl_make_condvar(BgL_namez00_84);
		}

	}



/* condition-variable-nil */
	BGL_EXPORTED_DEF obj_t BGl_conditionzd2variablezd2nilz00zz__threadz00()
	{
		{	/* Llib/thread.scm 663 */
			return BGl_za2conditionzd2variablezd2nilza2z00zz__threadz00;
		}

	}



/* &condition-variable-nil */
	obj_t BGl_z62conditionzd2variablezd2nilz62zz__threadz00(obj_t BgL_envz00_3278)
	{
		{	/* Llib/thread.scm 663 */
			return BGl_conditionzd2variablezd2nilz00zz__threadz00();
		}

	}



/* condition-variable-name */
	BGL_EXPORTED_DEF obj_t BGl_conditionzd2variablezd2namez00zz__threadz00(obj_t
		BgL_objz00_87)
	{
		{	/* Llib/thread.scm 668 */
			return BGL_CONDVAR_NAME(BgL_objz00_87);
		}

	}



/* &condition-variable-name */
	obj_t BGl_z62conditionzd2variablezd2namez62zz__threadz00(obj_t
		BgL_envz00_3279, obj_t BgL_objz00_3280)
	{
		{	/* Llib/thread.scm 668 */
			{	/* Llib/thread.scm 669 */
				obj_t BgL_auxz00_4309;

				if (BGL_CONDVARP(BgL_objz00_3280))
					{	/* Llib/thread.scm 669 */
						BgL_auxz00_4309 = BgL_objz00_3280;
					}
				else
					{
						obj_t BgL_auxz00_4312;

						BgL_auxz00_4312 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 29300)), BGl_string2316z00zz__threadz00,
							BGl_string2317z00zz__threadz00, BgL_objz00_3280);
						FAILURE(BgL_auxz00_4312, BFALSE, BFALSE);
					}
				return BGl_conditionzd2variablezd2namez00zz__threadz00(BgL_auxz00_4309);
			}
		}

	}



/* _condition-variable-wait! */
	obj_t BGl__conditionzd2variablezd2waitz12z12zz__threadz00(obj_t
		BgL_env1240z00_92, obj_t BgL_opt1239z00_91)
	{
		{	/* Llib/thread.scm 674 */
			{	/* Llib/thread.scm 674 */
				obj_t BgL_g1241z00_3759;
				obj_t BgL_g1242z00_3760;

				BgL_g1241z00_3759 = VECTOR_REF(BgL_opt1239z00_91, ((long) 0));
				BgL_g1242z00_3760 = VECTOR_REF(BgL_opt1239z00_91, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1239z00_91))
					{
					case ((long) 2):

						{	/* Llib/thread.scm 674 */

							{	/* Llib/thread.scm 674 */
								bool_t BgL_res1912z00_3761;

								{	/* Llib/thread.scm 674 */
									obj_t BgL_cz00_3762;
									obj_t BgL_mz00_3763;

									if (BGL_CONDVARP(BgL_g1241z00_3759))
										{	/* Llib/thread.scm 674 */
											BgL_cz00_3762 = BgL_g1241z00_3759;
										}
									else
										{
											obj_t BgL_auxz00_4321;

											BgL_auxz00_4321 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2290z00zz__threadz00, BINT(((long) 29544)),
												BGl_string2318z00zz__threadz00,
												BGl_string2317z00zz__threadz00, BgL_g1241z00_3759);
											FAILURE(BgL_auxz00_4321, BFALSE, BFALSE);
										}
									if (BGL_MUTEXP(BgL_g1242z00_3760))
										{	/* Llib/thread.scm 674 */
											BgL_mz00_3763 = BgL_g1242z00_3760;
										}
									else
										{
											obj_t BgL_auxz00_4327;

											BgL_auxz00_4327 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2290z00zz__threadz00, BINT(((long) 29544)),
												BGl_string2318z00zz__threadz00,
												BGl_string2304z00zz__threadz00, BgL_g1242z00_3760);
											FAILURE(BgL_auxz00_4327, BFALSE, BFALSE);
										}
									BgL_res1912z00_3761 =
										BGL_CONDVAR_WAIT(BgL_cz00_3762, BgL_mz00_3763);
								}
								return BBOOL(BgL_res1912z00_3761);
							}
						}
						break;
					case ((long) 3):

						{	/* Llib/thread.scm 674 */
							obj_t BgL_timeoutz00_3764;

							BgL_timeoutz00_3764 = VECTOR_REF(BgL_opt1239z00_91, ((long) 2));
							{	/* Llib/thread.scm 674 */

								{	/* Llib/thread.scm 674 */
									bool_t BgL_res1914z00_3765;

									{	/* Llib/thread.scm 674 */
										obj_t BgL_cz00_3766;
										obj_t BgL_mz00_3767;
										long BgL_timeoutz00_3768;

										if (BGL_CONDVARP(BgL_g1241z00_3759))
											{	/* Llib/thread.scm 674 */
												BgL_cz00_3766 = BgL_g1241z00_3759;
											}
										else
											{
												obj_t BgL_auxz00_4336;

												BgL_auxz00_4336 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2290z00zz__threadz00, BINT(((long) 29544)),
													BGl_string2318z00zz__threadz00,
													BGl_string2317z00zz__threadz00, BgL_g1241z00_3759);
												FAILURE(BgL_auxz00_4336, BFALSE, BFALSE);
											}
										if (BGL_MUTEXP(BgL_g1242z00_3760))
											{	/* Llib/thread.scm 674 */
												BgL_mz00_3767 = BgL_g1242z00_3760;
											}
										else
											{
												obj_t BgL_auxz00_4342;

												BgL_auxz00_4342 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2290z00zz__threadz00, BINT(((long) 29544)),
													BGl_string2318z00zz__threadz00,
													BGl_string2304z00zz__threadz00, BgL_g1242z00_3760);
												FAILURE(BgL_auxz00_4342, BFALSE, BFALSE);
											}
										{	/* Llib/thread.scm 674 */
											obj_t BgL_tmpz00_4346;

											if (INTEGERP(BgL_timeoutz00_3764))
												{	/* Llib/thread.scm 674 */
													BgL_tmpz00_4346 = BgL_timeoutz00_3764;
												}
											else
												{
													obj_t BgL_auxz00_4349;

													BgL_auxz00_4349 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2290z00zz__threadz00,
														BINT(((long) 29544)),
														BGl_string2318z00zz__threadz00,
														BGl_string2309z00zz__threadz00,
														BgL_timeoutz00_3764);
													FAILURE(BgL_auxz00_4349, BFALSE, BFALSE);
												}
											BgL_timeoutz00_3768 = (long) CINT(BgL_tmpz00_4346);
										}
										if ((BgL_timeoutz00_3768 == ((long) 0)))
											{	/* Llib/thread.scm 675 */
												BgL_res1914z00_3765 =
													BGL_CONDVAR_WAIT(BgL_cz00_3766, BgL_mz00_3767);
											}
										else
											{	/* Llib/thread.scm 675 */
												BgL_res1914z00_3765 =
													BGL_CONDVAR_TIMED_WAIT(BgL_cz00_3766, BgL_mz00_3767,
													BgL_timeoutz00_3768);
											}
									}
									return BBOOL(BgL_res1914z00_3765);
								}
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* condition-variable-wait! */
	BGL_EXPORTED_DEF bool_t
		BGl_conditionzd2variablezd2waitz12z12zz__threadz00(obj_t BgL_cz00_88,
		obj_t BgL_mz00_89, long BgL_timeoutz00_90)
	{
		{	/* Llib/thread.scm 674 */
			if ((BgL_timeoutz00_90 == ((long) 0)))
				{	/* Llib/thread.scm 675 */
					return BGL_CONDVAR_WAIT(BgL_cz00_88, BgL_mz00_89);
				}
			else
				{	/* Llib/thread.scm 675 */
					return
						BGL_CONDVAR_TIMED_WAIT(BgL_cz00_88, BgL_mz00_89, BgL_timeoutz00_90);
				}
		}

	}



/* condition-variable-signal! */
	BGL_EXPORTED_DEF bool_t
		BGl_conditionzd2variablezd2signalz12z12zz__threadz00(obj_t BgL_cz00_93)
	{
		{	/* Llib/thread.scm 682 */
			return BGL_CONDVAR_SIGNAL(BgL_cz00_93);
		}

	}



/* &condition-variable-signal! */
	obj_t BGl_z62conditionzd2variablezd2signalz12z70zz__threadz00(obj_t
		BgL_envz00_3281, obj_t BgL_cz00_3282)
	{
		{	/* Llib/thread.scm 682 */
			{	/* Llib/thread.scm 683 */
				bool_t BgL_tmpz00_4366;

				{	/* Llib/thread.scm 683 */
					obj_t BgL_auxz00_4367;

					if (BGL_CONDVARP(BgL_cz00_3282))
						{	/* Llib/thread.scm 683 */
							BgL_auxz00_4367 = BgL_cz00_3282;
						}
					else
						{
							obj_t BgL_auxz00_4370;

							BgL_auxz00_4370 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
								BINT(((long) 29986)), BGl_string2319z00zz__threadz00,
								BGl_string2317z00zz__threadz00, BgL_cz00_3282);
							FAILURE(BgL_auxz00_4370, BFALSE, BFALSE);
						}
					BgL_tmpz00_4366 =
						BGl_conditionzd2variablezd2signalz12z12zz__threadz00
						(BgL_auxz00_4367);
				}
				return BBOOL(BgL_tmpz00_4366);
			}
		}

	}



/* condition-variable-broadcast! */
	BGL_EXPORTED_DEF bool_t
		BGl_conditionzd2variablezd2broadcastz12z12zz__threadz00(obj_t BgL_cz00_94)
	{
		{	/* Llib/thread.scm 688 */
			return BGL_CONDVAR_BROADCAST(BgL_cz00_94);
		}

	}



/* &condition-variable-broadcast! */
	obj_t BGl_z62conditionzd2variablezd2broadcastz12z70zz__threadz00(obj_t
		BgL_envz00_3283, obj_t BgL_cz00_3284)
	{
		{	/* Llib/thread.scm 688 */
			{	/* Llib/thread.scm 689 */
				bool_t BgL_tmpz00_4377;

				{	/* Llib/thread.scm 689 */
					obj_t BgL_auxz00_4378;

					if (BGL_CONDVARP(BgL_cz00_3284))
						{	/* Llib/thread.scm 689 */
							BgL_auxz00_4378 = BgL_cz00_3284;
						}
					else
						{
							obj_t BgL_auxz00_4381;

							BgL_auxz00_4381 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
								BINT(((long) 30283)), BGl_string2320z00zz__threadz00,
								BGl_string2317z00zz__threadz00, BgL_cz00_3284);
							FAILURE(BgL_auxz00_4381, BFALSE, BFALSE);
						}
					BgL_tmpz00_4377 =
						BGl_conditionzd2variablezd2broadcastz12z12zz__threadz00
						(BgL_auxz00_4378);
				}
				return BBOOL(BgL_tmpz00_4377);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__threadz00()
	{
		{	/* Llib/thread.scm 17 */
			{	/* Llib/thread.scm 161 */
				obj_t BgL_arg1326z00_1242;
				obj_t BgL_arg1327z00_1243;

				{	/* Llib/thread.scm 161 */
					obj_t BgL_v1142z00_1254;

					BgL_v1142z00_1254 = create_vector(((long) 1));
					VECTOR_SET(BgL_v1142z00_1254, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2323z00zz__threadz00, BGl_proc2322z00zz__threadz00,
							BGl_proc2321z00zz__threadz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_symbol2325z00zz__threadz00));
					BgL_arg1326z00_1242 = BgL_v1142z00_1254;
				}
				{	/* Llib/thread.scm 161 */
					obj_t BgL_v1143z00_1265;

					BgL_v1143z00_1265 = create_vector(((long) 0));
					BgL_arg1327z00_1243 = BgL_v1143z00_1265;
				}
				BGl_threadzd2backendzd2zz__threadz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2329z00zz__threadz00, BGl_symbol2330z00zz__threadz00,
					BGl_objectz00zz__objectz00, ((long) 19580),
					BGl_proc2328z00zz__threadz00, BGl_proc2327z00zz__threadz00, BFALSE,
					BGl_proc2326z00zz__threadz00, BFALSE, BgL_arg1326z00_1242,
					BgL_arg1327z00_1243);
			}
			{	/* Llib/thread.scm 164 */
				obj_t BgL_arg1340z00_1271;
				obj_t BgL_arg1341z00_1272;

				{	/* Llib/thread.scm 164 */
					obj_t BgL_v1144z00_1278;

					BgL_v1144z00_1278 = create_vector(((long) 3));
					VECTOR_SET(BgL_v1144z00_1278, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2323z00zz__threadz00, BGl_proc2334z00zz__threadz00,
							BGl_proc2333z00zz__threadz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2332z00zz__threadz00, BGl_symbol2335z00zz__threadz00));
					VECTOR_SET(BgL_v1144z00_1278, ((long) 1),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2339z00zz__threadz00, BGl_proc2338z00zz__threadz00,
							BGl_proc2337z00zz__threadz00, ((bool_t) 0), ((bool_t) 1), BFALSE,
							BFALSE, BGl_symbol2335z00zz__threadz00));
					VECTOR_SET(BgL_v1144z00_1278, ((long) 2),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2343z00zz__threadz00, BGl_proc2342z00zz__threadz00,
							BGl_proc2341z00zz__threadz00, ((bool_t) 0), ((bool_t) 1), BFALSE,
							BFALSE, BGl_symbol2335z00zz__threadz00));
					BgL_arg1340z00_1271 = BgL_v1144z00_1278;
				}
				{	/* Llib/thread.scm 164 */
					obj_t BgL_v1145z00_1312;

					BgL_v1145z00_1312 = create_vector(((long) 2));
					{	/* Llib/thread.scm 167 */
						obj_t BgL_arg1363z00_1313;

						{	/* Llib/thread.scm 167 */
							obj_t BgL_arg1364z00_1314;

							BgL_arg1364z00_1314 =
								MAKE_YOUNG_PAIR(BGl_proc2345z00zz__threadz00,
								BGl_proc2346z00zz__threadz00);
							BgL_arg1363z00_1313 =
								MAKE_YOUNG_PAIR(BINT(((long) 0)), BgL_arg1364z00_1314);
						}
						VECTOR_SET(BgL_v1145z00_1312, ((long) 0), BgL_arg1363z00_1313);
					}
					{	/* Llib/thread.scm 168 */
						obj_t BgL_arg1372z00_1330;

						{	/* Llib/thread.scm 168 */
							obj_t BgL_arg1373z00_1331;

							BgL_arg1373z00_1331 =
								MAKE_YOUNG_PAIR(BGl_proc2347z00zz__threadz00,
								BGl_proc2348z00zz__threadz00);
							BgL_arg1372z00_1330 =
								MAKE_YOUNG_PAIR(BINT(((long) 1)), BgL_arg1373z00_1331);
						}
						VECTOR_SET(BgL_v1145z00_1312, ((long) 1), BgL_arg1372z00_1330);
					}
					BgL_arg1341z00_1272 = BgL_v1145z00_1312;
				}
				BGl_threadz00zz__threadz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2296z00zz__threadz00, BGl_symbol2330z00zz__threadz00,
					BGl_objectz00zz__objectz00, ((long) 35644), BFALSE,
					BGl_proc2350z00zz__threadz00,
					BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00,
					BGl_proc2349z00zz__threadz00, BFALSE, BgL_arg1340z00_1271,
					BgL_arg1341z00_1272);
			}
			{	/* Llib/thread.scm 170 */
				obj_t BgL_arg1383z00_1352;
				obj_t BgL_arg1384z00_1353;

				{	/* Llib/thread.scm 170 */
					obj_t BgL_v1146z00_1370;

					BgL_v1146z00_1370 = create_vector(((long) 5));
					VECTOR_SET(BgL_v1146z00_1370, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2353z00zz__threadz00, BGl_proc2352z00zz__threadz00,
							BGl_proc2351z00zz__threadz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_symbol2355z00zz__threadz00));
					VECTOR_SET(BgL_v1146z00_1370, ((long) 1),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2359z00zz__threadz00, BGl_proc2358z00zz__threadz00,
							BGl_proc2357z00zz__threadz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2356z00zz__threadz00, BGl_symbol2335z00zz__threadz00));
					VECTOR_SET(BgL_v1146z00_1370, ((long) 2),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2364z00zz__threadz00, BGl_proc2363z00zz__threadz00,
							BGl_proc2362z00zz__threadz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2361z00zz__threadz00, BGl_symbol2335z00zz__threadz00));
					VECTOR_SET(BgL_v1146z00_1370, ((long) 3),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2369z00zz__threadz00, BGl_proc2368z00zz__threadz00,
							BGl_proc2367z00zz__threadz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2366z00zz__threadz00, BGl_symbol2335z00zz__threadz00));
					VECTOR_SET(BgL_v1146z00_1370, ((long) 4),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2374z00zz__threadz00, BGl_proc2373z00zz__threadz00,
							BGl_proc2372z00zz__threadz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2371z00zz__threadz00, BGl_symbol2335z00zz__threadz00));
					BgL_arg1383z00_1352 = BgL_v1146z00_1370;
				}
				{	/* Llib/thread.scm 170 */
					obj_t BgL_v1147z00_1433;

					BgL_v1147z00_1433 = create_vector(((long) 0));
					BgL_arg1384z00_1353 = BgL_v1147z00_1433;
				}
				BGl_nothreadz00zz__threadz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2379z00zz__threadz00, BGl_symbol2330z00zz__threadz00,
					BGl_threadz00zz__threadz00, ((long) 37909),
					BGl_proc2378z00zz__threadz00, BGl_proc2377z00zz__threadz00,
					BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00,
					BGl_proc2376z00zz__threadz00, BFALSE, BgL_arg1383z00_1352,
					BgL_arg1384z00_1353);
			}
			{	/* Llib/thread.scm 159 */
				obj_t BgL_arg1428z00_1440;
				obj_t BgL_arg1429z00_1441;

				{	/* Llib/thread.scm 159 */
					obj_t BgL_v1148z00_1452;

					BgL_v1148z00_1452 = create_vector(((long) 0));
					BgL_arg1428z00_1440 = BgL_v1148z00_1452;
				}
				{	/* Llib/thread.scm 159 */
					obj_t BgL_v1149z00_1453;

					BgL_v1149z00_1453 = create_vector(((long) 0));
					BgL_arg1429z00_1441 = BgL_v1149z00_1453;
				}
				return (BGl_nothreadzd2backendzd2zz__threadz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2383z00zz__threadz00, BGl_symbol2330z00zz__threadz00,
						BGl_threadzd2backendzd2zz__threadz00, ((long) 1497),
						BGl_proc2382z00zz__threadz00, BGl_proc2381z00zz__threadz00, BFALSE,
						BGl_proc2380z00zz__threadz00, BFALSE, BgL_arg1428z00_1440,
						BgL_arg1429z00_1441), BUNSPEC);
		}}

	}



/* &<@anonymous:1434> */
	obj_t BGl_z62zc3z04anonymousza31434ze3ze5zz__threadz00(obj_t BgL_envz00_3326,
		obj_t BgL_new1055z00_3327)
	{
		{	/* Llib/thread.scm 159 */
			{
				BgL_nothreadzd2backendzd2_bglt BgL_auxz00_4425;

				((((BgL_threadzd2backendzd2_bglt) COBJECT(
								((BgL_threadzd2backendzd2_bglt)
									((BgL_nothreadzd2backendzd2_bglt) BgL_new1055z00_3327))))->
						BgL_namez00) = ((obj_t) BGl_string2385z00zz__threadz00), BUNSPEC);
				BgL_auxz00_4425 =
					((BgL_nothreadzd2backendzd2_bglt) BgL_new1055z00_3327);
				return ((obj_t) BgL_auxz00_4425);
			}
		}

	}



/* &lambda1432 */
	BgL_nothreadzd2backendzd2_bglt BGl_z62lambda1432z62zz__threadz00(obj_t
		BgL_envz00_3328)
	{
		{	/* Llib/thread.scm 159 */
			{	/* Llib/thread.scm 159 */
				BgL_nothreadzd2backendzd2_bglt BgL_new1054z00_3770;

				BgL_new1054z00_3770 =
					((BgL_nothreadzd2backendzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_nothreadzd2backendzd2_bgl))));
				{	/* Llib/thread.scm 159 */
					long BgL_arg1433z00_3771;

					{	/* Llib/thread.scm 159 */
						long BgL_res1922z00_3772;

						BgL_res1922z00_3772 =
							BGL_CLASS_INDEX(BGl_nothreadzd2backendzd2zz__threadz00);
						BgL_arg1433z00_3771 = BgL_res1922z00_3772;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1054z00_3770), BgL_arg1433z00_3771);
				}
				return BgL_new1054z00_3770;
			}
		}

	}



/* &lambda1430 */
	BgL_nothreadzd2backendzd2_bglt BGl_z62lambda1430z62zz__threadz00(obj_t
		BgL_envz00_3329, obj_t BgL_name1053z00_3330)
	{
		{	/* Llib/thread.scm 159 */
			{	/* Llib/thread.scm 159 */
				BgL_nothreadzd2backendzd2_bglt BgL_new1106z00_3774;

				{	/* Llib/thread.scm 159 */
					BgL_nothreadzd2backendzd2_bglt BgL_new1105z00_3775;

					BgL_new1105z00_3775 =
						((BgL_nothreadzd2backendzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_nothreadzd2backendzd2_bgl))));
					{	/* Llib/thread.scm 159 */
						long BgL_arg1431z00_3776;

						{	/* Llib/thread.scm 159 */
							long BgL_res1921z00_3777;

							BgL_res1921z00_3777 =
								BGL_CLASS_INDEX(BGl_nothreadzd2backendzd2zz__threadz00);
							BgL_arg1431z00_3776 = BgL_res1921z00_3777;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1105z00_3775), BgL_arg1431z00_3776);
					}
					BgL_new1106z00_3774 = BgL_new1105z00_3775;
				}
				((((BgL_threadzd2backendzd2_bglt) COBJECT(
								((BgL_threadzd2backendzd2_bglt) BgL_new1106z00_3774)))->
						BgL_namez00) = ((obj_t) ((obj_t) BgL_name1053z00_3330)), BUNSPEC);
				return BgL_new1106z00_3774;
			}
		}

	}



/* &<@anonymous:1391> */
	obj_t BGl_z62zc3z04anonymousza31391ze3ze5zz__threadz00(obj_t BgL_envz00_3331,
		obj_t BgL_new1051z00_3332)
	{
		{	/* Llib/thread.scm 170 */
			{
				BgL_nothreadz00_bglt BgL_auxz00_4442;

				((((BgL_threadz00_bglt) COBJECT(
								((BgL_threadz00_bglt)
									((BgL_nothreadz00_bglt) BgL_new1051z00_3332))))->
						BgL_namez00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nothreadz00_bglt) COBJECT(((BgL_nothreadz00_bglt)
									BgL_new1051z00_3332)))->BgL_bodyz00) =
					((obj_t) BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00), BUNSPEC);
				((((BgL_nothreadz00_bglt) COBJECT(((BgL_nothreadz00_bglt)
									BgL_new1051z00_3332)))->BgL_z52specificz52) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nothreadz00_bglt) COBJECT(((BgL_nothreadz00_bglt)
									BgL_new1051z00_3332)))->BgL_z52cleanupz52) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nothreadz00_bglt) COBJECT(((BgL_nothreadz00_bglt)
									BgL_new1051z00_3332)))->BgL_endzd2resultzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nothreadz00_bglt) COBJECT(((BgL_nothreadz00_bglt)
									BgL_new1051z00_3332)))->BgL_endzd2exceptionzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_4442 = ((BgL_nothreadz00_bglt) BgL_new1051z00_3332);
				return ((obj_t) BgL_auxz00_4442);
			}
		}

	}



/* &lambda1389 */
	BgL_nothreadz00_bglt BGl_z62lambda1389z62zz__threadz00(obj_t BgL_envz00_3333)
	{
		{	/* Llib/thread.scm 170 */
			{	/* Llib/thread.scm 170 */
				BgL_nothreadz00_bglt BgL_new1050z00_3779;

				BgL_new1050z00_3779 =
					((BgL_nothreadz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_nothreadz00_bgl))));
				{	/* Llib/thread.scm 170 */
					long BgL_arg1390z00_3780;

					{	/* Llib/thread.scm 170 */
						long BgL_res1920z00_3781;

						BgL_res1920z00_3781 = BGL_CLASS_INDEX(BGl_nothreadz00zz__threadz00);
						BgL_arg1390z00_3780 = BgL_res1920z00_3781;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1050z00_3779), BgL_arg1390z00_3780);
				}
				return BgL_new1050z00_3779;
			}
		}

	}



/* &lambda1385 */
	BgL_nothreadz00_bglt BGl_z62lambda1385z62zz__threadz00(obj_t BgL_envz00_3334,
		obj_t BgL_name1044z00_3335, obj_t BgL_body1045z00_3336,
		obj_t BgL_z52specific1046z52_3337, obj_t BgL_z52cleanup1047z52_3338,
		obj_t BgL_endzd2result1048zd2_3339, obj_t BgL_endzd2exception1049zd2_3340)
	{
		{	/* Llib/thread.scm 170 */
			{	/* Llib/thread.scm 170 */
				BgL_nothreadz00_bglt BgL_new1104z00_3783;

				{	/* Llib/thread.scm 170 */
					BgL_nothreadz00_bglt BgL_new1103z00_3784;

					BgL_new1103z00_3784 =
						((BgL_nothreadz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_nothreadz00_bgl))));
					{	/* Llib/thread.scm 170 */
						long BgL_arg1388z00_3785;

						{	/* Llib/thread.scm 170 */
							long BgL_res1919z00_3786;

							BgL_res1919z00_3786 =
								BGL_CLASS_INDEX(BGl_nothreadz00zz__threadz00);
							BgL_arg1388z00_3785 = BgL_res1919z00_3786;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1103z00_3784), BgL_arg1388z00_3785);
					}
					BgL_new1104z00_3783 = BgL_new1103z00_3784;
				}
				((((BgL_threadz00_bglt) COBJECT(
								((BgL_threadz00_bglt) BgL_new1104z00_3783)))->BgL_namez00) =
					((obj_t) BgL_name1044z00_3335), BUNSPEC);
				((((BgL_nothreadz00_bglt) COBJECT(BgL_new1104z00_3783))->BgL_bodyz00) =
					((obj_t) ((obj_t) BgL_body1045z00_3336)), BUNSPEC);
				((((BgL_nothreadz00_bglt) COBJECT(BgL_new1104z00_3783))->
						BgL_z52specificz52) =
					((obj_t) BgL_z52specific1046z52_3337), BUNSPEC);
				((((BgL_nothreadz00_bglt) COBJECT(BgL_new1104z00_3783))->
						BgL_z52cleanupz52) = ((obj_t) BgL_z52cleanup1047z52_3338), BUNSPEC);
				((((BgL_nothreadz00_bglt) COBJECT(BgL_new1104z00_3783))->
						BgL_endzd2resultzd2) =
					((obj_t) BgL_endzd2result1048zd2_3339), BUNSPEC);
				((((BgL_nothreadz00_bglt) COBJECT(BgL_new1104z00_3783))->
						BgL_endzd2exceptionzd2) =
					((obj_t) BgL_endzd2exception1049zd2_3340), BUNSPEC);
				{	/* Llib/thread.scm 170 */
					obj_t BgL_fun1387z00_3787;

					BgL_fun1387z00_3787 =
						BGl_classzd2constructorzd2zz__objectz00
						(BGl_nothreadz00zz__threadz00);
					PROCEDURE_ENTRY(BgL_fun1387z00_3787) (BgL_fun1387z00_3787,
						((obj_t) BgL_new1104z00_3783), BEOA);
				}
				return BgL_new1104z00_3783;
			}
		}

	}



/* &<@anonymous:1424> */
	obj_t BGl_z62zc3z04anonymousza31424ze3ze5zz__threadz00(obj_t BgL_envz00_3341)
	{
		{	/* Llib/thread.scm 170 */
			return BUNSPEC;
		}

	}



/* &lambda1423 */
	obj_t BGl_z62lambda1423z62zz__threadz00(obj_t BgL_envz00_3342,
		obj_t BgL_oz00_3343, obj_t BgL_vz00_3344)
	{
		{	/* Llib/thread.scm 170 */
			return
				((((BgL_nothreadz00_bglt) COBJECT(
							((BgL_nothreadz00_bglt) BgL_oz00_3343)))->
					BgL_endzd2exceptionzd2) = ((obj_t) BgL_vz00_3344), BUNSPEC);
		}

	}



/* &lambda1422 */
	obj_t BGl_z62lambda1422z62zz__threadz00(obj_t BgL_envz00_3345,
		obj_t BgL_oz00_3346)
	{
		{	/* Llib/thread.scm 170 */
			return
				(((BgL_nothreadz00_bglt) COBJECT(
						((BgL_nothreadz00_bglt) BgL_oz00_3346)))->BgL_endzd2exceptionzd2);
		}

	}



/* &<@anonymous:1417> */
	obj_t BGl_z62zc3z04anonymousza31417ze3ze5zz__threadz00(obj_t BgL_envz00_3347)
	{
		{	/* Llib/thread.scm 170 */
			return BUNSPEC;
		}

	}



/* &lambda1416 */
	obj_t BGl_z62lambda1416z62zz__threadz00(obj_t BgL_envz00_3348,
		obj_t BgL_oz00_3349, obj_t BgL_vz00_3350)
	{
		{	/* Llib/thread.scm 170 */
			return
				((((BgL_nothreadz00_bglt) COBJECT(
							((BgL_nothreadz00_bglt) BgL_oz00_3349)))->BgL_endzd2resultzd2) =
				((obj_t) BgL_vz00_3350), BUNSPEC);
		}

	}



/* &lambda1415 */
	obj_t BGl_z62lambda1415z62zz__threadz00(obj_t BgL_envz00_3351,
		obj_t BgL_oz00_3352)
	{
		{	/* Llib/thread.scm 170 */
			return
				(((BgL_nothreadz00_bglt) COBJECT(
						((BgL_nothreadz00_bglt) BgL_oz00_3352)))->BgL_endzd2resultzd2);
		}

	}



/* &<@anonymous:1410> */
	obj_t BGl_z62zc3z04anonymousza31410ze3ze5zz__threadz00(obj_t BgL_envz00_3353)
	{
		{	/* Llib/thread.scm 170 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1409 */
	obj_t BGl_z62lambda1409z62zz__threadz00(obj_t BgL_envz00_3354,
		obj_t BgL_oz00_3355, obj_t BgL_vz00_3356)
	{
		{	/* Llib/thread.scm 170 */
			return
				((((BgL_nothreadz00_bglt) COBJECT(
							((BgL_nothreadz00_bglt) BgL_oz00_3355)))->BgL_z52cleanupz52) =
				((obj_t) BgL_vz00_3356), BUNSPEC);
		}

	}



/* &lambda1408 */
	obj_t BGl_z62lambda1408z62zz__threadz00(obj_t BgL_envz00_3357,
		obj_t BgL_oz00_3358)
	{
		{	/* Llib/thread.scm 170 */
			return
				(((BgL_nothreadz00_bglt) COBJECT(
						((BgL_nothreadz00_bglt) BgL_oz00_3358)))->BgL_z52cleanupz52);
		}

	}



/* &<@anonymous:1403> */
	obj_t BGl_z62zc3z04anonymousza31403ze3ze5zz__threadz00(obj_t BgL_envz00_3359)
	{
		{	/* Llib/thread.scm 170 */
			return BUNSPEC;
		}

	}



/* &lambda1402 */
	obj_t BGl_z62lambda1402z62zz__threadz00(obj_t BgL_envz00_3360,
		obj_t BgL_oz00_3361, obj_t BgL_vz00_3362)
	{
		{	/* Llib/thread.scm 170 */
			return
				((((BgL_nothreadz00_bglt) COBJECT(
							((BgL_nothreadz00_bglt) BgL_oz00_3361)))->BgL_z52specificz52) =
				((obj_t) BgL_vz00_3362), BUNSPEC);
		}

	}



/* &lambda1401 */
	obj_t BGl_z62lambda1401z62zz__threadz00(obj_t BgL_envz00_3363,
		obj_t BgL_oz00_3364)
	{
		{	/* Llib/thread.scm 170 */
			return
				(((BgL_nothreadz00_bglt) COBJECT(
						((BgL_nothreadz00_bglt) BgL_oz00_3364)))->BgL_z52specificz52);
		}

	}



/* &lambda1396 */
	obj_t BGl_z62lambda1396z62zz__threadz00(obj_t BgL_envz00_3365,
		obj_t BgL_oz00_3366, obj_t BgL_vz00_3367)
	{
		{	/* Llib/thread.scm 170 */
			return
				((((BgL_nothreadz00_bglt) COBJECT(
							((BgL_nothreadz00_bglt) BgL_oz00_3366)))->BgL_bodyz00) = ((obj_t)
					((obj_t) BgL_vz00_3367)), BUNSPEC);
		}

	}



/* &lambda1395 */
	obj_t BGl_z62lambda1395z62zz__threadz00(obj_t BgL_envz00_3368,
		obj_t BgL_oz00_3369)
	{
		{	/* Llib/thread.scm 170 */
			return
				(((BgL_nothreadz00_bglt) COBJECT(
						((BgL_nothreadz00_bglt) BgL_oz00_3369)))->BgL_bodyz00);
		}

	}



/* &<@anonymous:1344> */
	obj_t BGl_z62zc3z04anonymousza31344ze3ze5zz__threadz00(obj_t BgL_envz00_3370,
		obj_t BgL_new1042z00_3371)
	{
		{	/* Llib/thread.scm 164 */
			{
				BgL_threadz00_bglt BgL_auxz00_4502;

				((((BgL_threadz00_bglt) COBJECT(
								((BgL_threadz00_bglt) BgL_new1042z00_3371)))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_4502 = ((BgL_threadz00_bglt) BgL_new1042z00_3371);
				return ((obj_t) BgL_auxz00_4502);
			}
		}

	}



/* &lambda1342 */
	BgL_threadz00_bglt BGl_z62lambda1342z62zz__threadz00(obj_t BgL_envz00_3372)
	{
		{	/* Llib/thread.scm 164 */
			{	/* Llib/thread.scm 164 */
				BgL_threadz00_bglt BgL_new1041z00_3800;

				BgL_new1041z00_3800 =
					((BgL_threadz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_threadz00_bgl))));
				{	/* Llib/thread.scm 164 */
					long BgL_arg1343z00_3801;

					{	/* Llib/thread.scm 164 */
						long BgL_res1918z00_3802;

						BgL_res1918z00_3802 = BGL_CLASS_INDEX(BGl_threadz00zz__threadz00);
						BgL_arg1343z00_3801 = BgL_res1918z00_3802;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1041z00_3800), BgL_arg1343z00_3801);
				}
				return BgL_new1041z00_3800;
			}
		}

	}



/* &<@anonymous:1378> */
	obj_t BGl_z62zc3z04anonymousza31378ze3ze5zz__threadz00(obj_t BgL_envz00_3373,
		obj_t BgL_oz00_3374, obj_t BgL_vz00_3375)
	{
		{	/* Llib/thread.scm 168 */
			return
				BGl_threadzd2cleanupzd2setz12z12zz__threadz00(
				((BgL_threadz00_bglt) BgL_oz00_3374), BgL_vz00_3375);
		}

	}



/* &<@anonymous:1376> */
	obj_t BGl_z62zc3z04anonymousza31376ze3ze5zz__threadz00(obj_t BgL_envz00_3376,
		obj_t BgL_oz00_3377)
	{
		{	/* Llib/thread.scm 168 */
			return
				BGl_threadzd2cleanupzd2zz__threadz00(
				((BgL_threadz00_bglt) BgL_oz00_3377));
		}

	}



/* &<@anonymous:1370> */
	obj_t BGl_z62zc3z04anonymousza31370ze3ze5zz__threadz00(obj_t BgL_envz00_3378,
		obj_t BgL_oz00_3379, obj_t BgL_vz00_3380)
	{
		{	/* Llib/thread.scm 167 */
			return
				BGl_threadzd2specificzd2setz12z12zz__threadz00(
				((BgL_threadz00_bglt) BgL_oz00_3379), BgL_vz00_3380);
		}

	}



/* &<@anonymous:1368> */
	obj_t BGl_z62zc3z04anonymousza31368ze3ze5zz__threadz00(obj_t BgL_envz00_3381,
		obj_t BgL_oz00_3382)
	{
		{	/* Llib/thread.scm 167 */
			return
				BGl_threadzd2specificzd2zz__threadz00(
				((BgL_threadz00_bglt) BgL_oz00_3382));
		}

	}



/* &<@anonymous:1362> */
	obj_t BGl_z62zc3z04anonymousza31362ze3ze5zz__threadz00(obj_t BgL_envz00_3383,
		obj_t BgL_oz00_3384, obj_t BgL_vz00_3385)
	{
		{	/* Llib/thread.scm 164 */
			return
				BGl_callzd2virtualzd2setterz00zz__objectz00(
				((BgL_objectz00_bglt) BgL_oz00_3384),
				(int) (((long) 1)), BgL_vz00_3385);
		}

	}



/* &<@anonymous:1361> */
	obj_t BGl_z62zc3z04anonymousza31361ze3ze5zz__threadz00(obj_t BgL_envz00_3386,
		obj_t BgL_oz00_3387)
	{
		{	/* Llib/thread.scm 164 */
			return
				BGl_callzd2virtualzd2getterz00zz__objectz00(
				((BgL_objectz00_bglt) BgL_oz00_3387), (int) (((long) 1)));
		}

	}



/* &<@anonymous:1356> */
	obj_t BGl_z62zc3z04anonymousza31356ze3ze5zz__threadz00(obj_t BgL_envz00_3388,
		obj_t BgL_oz00_3389, obj_t BgL_vz00_3390)
	{
		{	/* Llib/thread.scm 164 */
			return
				BGl_callzd2virtualzd2setterz00zz__objectz00(
				((BgL_objectz00_bglt) BgL_oz00_3389),
				(int) (((long) 0)), BgL_vz00_3390);
		}

	}



/* &<@anonymous:1355> */
	obj_t BGl_z62zc3z04anonymousza31355ze3ze5zz__threadz00(obj_t BgL_envz00_3391,
		obj_t BgL_oz00_3392)
	{
		{	/* Llib/thread.scm 164 */
			return
				BGl_callzd2virtualzd2getterz00zz__objectz00(
				((BgL_objectz00_bglt) BgL_oz00_3392), (int) (((long) 0)));
		}

	}



/* &<@anonymous:1351> */
	obj_t BGl_z62zc3z04anonymousza31351ze3ze5zz__threadz00(obj_t BgL_envz00_3393)
	{
		{	/* Llib/thread.scm 164 */
			return BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol2296z00zz__threadz00);
		}

	}



/* &lambda1350 */
	obj_t BGl_z62lambda1350z62zz__threadz00(obj_t BgL_envz00_3394,
		obj_t BgL_oz00_3395, obj_t BgL_vz00_3396)
	{
		{	/* Llib/thread.scm 164 */
			return
				((((BgL_threadz00_bglt) COBJECT(
							((BgL_threadz00_bglt) BgL_oz00_3395)))->BgL_namez00) =
				((obj_t) BgL_vz00_3396), BUNSPEC);
		}

	}



/* &lambda1349 */
	obj_t BGl_z62lambda1349z62zz__threadz00(obj_t BgL_envz00_3397,
		obj_t BgL_oz00_3398)
	{
		{	/* Llib/thread.scm 164 */
			return
				(((BgL_threadz00_bglt) COBJECT(
						((BgL_threadz00_bglt) BgL_oz00_3398)))->BgL_namez00);
		}

	}



/* &<@anonymous:1332> */
	obj_t BGl_z62zc3z04anonymousza31332ze3ze5zz__threadz00(obj_t BgL_envz00_3399,
		obj_t BgL_new1039z00_3400)
	{
		{	/* Llib/thread.scm 161 */
			{
				BgL_threadzd2backendzd2_bglt BgL_auxz00_4536;

				((((BgL_threadzd2backendzd2_bglt) COBJECT(
								((BgL_threadzd2backendzd2_bglt) BgL_new1039z00_3400)))->
						BgL_namez00) = ((obj_t) BGl_string2385z00zz__threadz00), BUNSPEC);
				BgL_auxz00_4536 = ((BgL_threadzd2backendzd2_bglt) BgL_new1039z00_3400);
				return ((obj_t) BgL_auxz00_4536);
			}
		}

	}



/* &lambda1330 */
	BgL_threadzd2backendzd2_bglt BGl_z62lambda1330z62zz__threadz00(obj_t
		BgL_envz00_3401)
	{
		{	/* Llib/thread.scm 161 */
			{	/* Llib/thread.scm 161 */
				BgL_threadzd2backendzd2_bglt BgL_new1038z00_3806;

				BgL_new1038z00_3806 =
					((BgL_threadzd2backendzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_threadzd2backendzd2_bgl))));
				{	/* Llib/thread.scm 161 */
					long BgL_arg1331z00_3807;

					{	/* Llib/thread.scm 161 */
						long BgL_res1917z00_3808;

						BgL_res1917z00_3808 =
							BGL_CLASS_INDEX(BGl_threadzd2backendzd2zz__threadz00);
						BgL_arg1331z00_3807 = BgL_res1917z00_3808;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1038z00_3806), BgL_arg1331z00_3807);
				}
				return BgL_new1038z00_3806;
			}
		}

	}



/* &lambda1328 */
	BgL_threadzd2backendzd2_bglt BGl_z62lambda1328z62zz__threadz00(obj_t
		BgL_envz00_3402, obj_t BgL_name1037z00_3403)
	{
		{	/* Llib/thread.scm 161 */
			{	/* Llib/thread.scm 161 */
				BgL_threadzd2backendzd2_bglt BgL_new1102z00_3810;

				{	/* Llib/thread.scm 161 */
					BgL_threadzd2backendzd2_bglt BgL_new1100z00_3811;

					BgL_new1100z00_3811 =
						((BgL_threadzd2backendzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_threadzd2backendzd2_bgl))));
					{	/* Llib/thread.scm 161 */
						long BgL_arg1329z00_3812;

						{	/* Llib/thread.scm 161 */
							long BgL_res1916z00_3813;

							BgL_res1916z00_3813 =
								BGL_CLASS_INDEX(BGl_threadzd2backendzd2zz__threadz00);
							BgL_arg1329z00_3812 = BgL_res1916z00_3813;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1100z00_3811), BgL_arg1329z00_3812);
					}
					BgL_new1102z00_3810 = BgL_new1100z00_3811;
				}
				((((BgL_threadzd2backendzd2_bglt) COBJECT(BgL_new1102z00_3810))->
						BgL_namez00) = ((obj_t) ((obj_t) BgL_name1037z00_3403)), BUNSPEC);
				return BgL_new1102z00_3810;
			}
		}

	}



/* &lambda1337 */
	obj_t BGl_z62lambda1337z62zz__threadz00(obj_t BgL_envz00_3404,
		obj_t BgL_oz00_3405, obj_t BgL_vz00_3406)
	{
		{	/* Llib/thread.scm 161 */
			return
				((((BgL_threadzd2backendzd2_bglt) COBJECT(
							((BgL_threadzd2backendzd2_bglt) BgL_oz00_3405)))->BgL_namez00) =
				((obj_t) ((obj_t) BgL_vz00_3406)), BUNSPEC);
		}

	}



/* &lambda1336 */
	obj_t BGl_z62lambda1336z62zz__threadz00(obj_t BgL_envz00_3407,
		obj_t BgL_oz00_3408)
	{
		{	/* Llib/thread.scm 161 */
			return
				(((BgL_threadzd2backendzd2_bglt) COBJECT(
						((BgL_threadzd2backendzd2_bglt) BgL_oz00_3408)))->BgL_namez00);
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__threadz00()
	{
		{	/* Llib/thread.scm 17 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_tbzd2makezd2threadzd2envzd2zz__threadz00,
				BGl_proc2386z00zz__threadz00, BGl_threadzd2backendzd2zz__threadz00,
				BGl_string2387z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_tbzd2currentzd2threadzd2envzd2zz__threadz00,
				BGl_proc2388z00zz__threadz00, BGl_threadzd2backendzd2zz__threadz00,
				BGl_string2389z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_tbzd2mutexzd2initializa7ez12zd2envz67zz__threadz00,
				BGl_proc2390z00zz__threadz00, BGl_threadzd2backendzd2zz__threadz00,
				BGl_string2391z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_tbzd2condvarzd2initializa7ez12zd2envz67zz__threadz00,
				BGl_proc2392z00zz__threadz00, BGl_threadzd2backendzd2zz__threadz00,
				BGl_string2393z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00,
				BGl_proc2394z00zz__threadz00, BGl_threadz00zz__threadz00,
				BGl_string2395z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_threadzd2startz12zd2envz12zz__threadz00,
				BGl_proc2396z00zz__threadz00, BGl_threadz00zz__threadz00,
				BGl_string2397z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_threadzd2startzd2joinablez12zd2envzc0zz__threadz00,
				BGl_proc2398z00zz__threadz00, BGl_threadz00zz__threadz00,
				BGl_string2399z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_threadzd2joinz12zd2envz12zz__threadz00,
				BGl_proc2400z00zz__threadz00, BGl_threadz00zz__threadz00,
				BGl_string2401z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_threadzd2terminatez12zd2envz12zz__threadz00,
				BGl_proc2402z00zz__threadz00, BGl_threadz00zz__threadz00,
				BGl_string2403z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_threadzd2specificzd2envz00zz__threadz00,
				BGl_proc2404z00zz__threadz00, BGl_threadz00zz__threadz00,
				BGl_string2405z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_threadzd2specificzd2setz12zd2envzc0zz__threadz00,
				BGl_proc2406z00zz__threadz00, BGl_threadz00zz__threadz00,
				BGl_string2407z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_threadzd2cleanupzd2envz00zz__threadz00,
				BGl_proc2408z00zz__threadz00, BGl_threadz00zz__threadz00,
				BGl_string2409z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_threadzd2cleanupzd2setz12zd2envzc0zz__threadz00,
				BGl_proc2410z00zz__threadz00, BGl_threadz00zz__threadz00,
				BGl_string2411z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_z52userzd2currentzd2threadzd2envz80zz__threadz00,
				BGl_proc2412z00zz__threadz00, BGl_threadz00zz__threadz00,
				BGl_string2413z00zz__threadz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_z52userzd2threadzd2sleepz12zd2envz92zz__threadz00,
				BGl_proc2414z00zz__threadz00, BGl_threadz00zz__threadz00,
				BGl_string2415z00zz__threadz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_z52userzd2threadzd2yieldz12zd2envz92zz__threadz00,
				BGl_proc2416z00zz__threadz00, BGl_threadz00zz__threadz00,
				BGl_string2417z00zz__threadz00);
		}

	}



/* &%user-thread-yield!1204 */
	obj_t BGl_z62z52userzd2threadzd2yieldz121204z22zz__threadz00(obj_t
		BgL_envz00_3427, obj_t BgL_oz00_3428)
	{
		{	/* Llib/thread.scm 481 */
			return BUNSPEC;
		}

	}



/* &%user-thread-sleep!1202 */
	obj_t BGl_z62z52userzd2threadzd2sleepz121202z22zz__threadz00(obj_t
		BgL_envz00_3429, obj_t BgL_oz00_3430, obj_t BgL_dz00_3431)
	{
		{	/* Llib/thread.scm 454 */
			if (BGL_DATEP(BgL_dz00_3431))
				{	/* Llib/thread.scm 457 */
					long BgL_cdtz00_3819;

					BgL_cdtz00_3819 =
						bgl_date_to_seconds(bgl_nanoseconds_to_date(bgl_current_nanoseconds
							()));
					{	/* Llib/thread.scm 457 */
						long BgL_dtz00_3821;

						BgL_dtz00_3821 = bgl_date_to_seconds(BgL_dz00_3431);
						{	/* Llib/thread.scm 458 */
							obj_t BgL_az00_3822;

							{	/* Llib/thread.scm 459 */
								obj_t BgL_auxz00_4578;

								{	/* Llib/thread.scm 459 */
									long BgL_res1927z00_3823;

									{	/* Llib/thread.scm 459 */
										long BgL_tmpz00_4579;

										BgL_tmpz00_4579 = (BgL_dtz00_3821 - BgL_cdtz00_3819);
										BgL_res1927z00_3823 = (long) (BgL_tmpz00_4579);
									}
									BgL_auxz00_4578 = make_belong(BgL_res1927z00_3823);
								}
								BgL_az00_3822 =
									BGl_2za2za2zz__r4_numbers_6_5z00(BgL_auxz00_4578,
									BINT(((long) 1000000)));
							}
							{	/* Llib/thread.scm 459 */

								{	/* Llib/thread.scm 460 */
									bool_t BgL_test2730z00_4585;

									{	/* Llib/thread.scm 460 */
										long BgL_n1z00_3824;

										BgL_n1z00_3824 = BELONG_TO_LONG(BgL_az00_3822);
										BgL_test2730z00_4585 = (BgL_n1z00_3824 > ((long) 0));
									}
									if (BgL_test2730z00_4585)
										{	/* Llib/thread.scm 460 */
											long BgL_arg1454z00_3825;

											{	/* Llib/thread.scm 460 */
												long BgL_res1929z00_3826;

												{	/* Llib/thread.scm 460 */
													long BgL_xz00_3827;

													BgL_xz00_3827 = BELONG_TO_LONG(BgL_az00_3822);
													BgL_res1929z00_3826 = (long) (BgL_xz00_3827);
												}
												BgL_arg1454z00_3825 = BgL_res1929z00_3826;
											}
											bgl_sleep(BgL_arg1454z00_3825);
											BUNSPEC;
											return BINT(BgL_arg1454z00_3825);
										}
									else
										{	/* Llib/thread.scm 460 */
											return BFALSE;
										}
								}
							}
						}
					}
				}
			else
				{	/* Llib/thread.scm 456 */
					if (INTEGERP(BgL_dz00_3431))
						{	/* Llib/thread.scm 462 */
							obj_t BgL_arg1458z00_3828;

							BgL_arg1458z00_3828 =
								BINT(((long) CINT(BgL_dz00_3431) * ((long) 1000)));
							{	/* Llib/thread.scm 462 */
								long BgL_msz00_3829;

								BgL_msz00_3829 = (long) CINT(BgL_arg1458z00_3828);
								bgl_sleep(BgL_msz00_3829);
								BUNSPEC;
								return BINT(BgL_msz00_3829);
							}
						}
					else
						{	/* Llib/thread.scm 461 */
							if (ELONGP(BgL_dz00_3431))
								{	/* Llib/thread.scm 464 */
									long BgL_arg1461z00_3830;

									{	/* Llib/thread.scm 464 */
										long BgL_arg1462z00_3831;

										{	/* Llib/thread.scm 464 */
											long BgL_res1934z00_3832;

											{	/* Llib/thread.scm 464 */
												long BgL_xz00_3833;

												BgL_xz00_3833 = BELONG_TO_LONG(BgL_dz00_3431);
												BgL_res1934z00_3832 = (long) (BgL_xz00_3833);
											}
											BgL_arg1462z00_3831 = BgL_res1934z00_3832;
										}
										BgL_arg1461z00_3830 =
											(long)
											CINT(BGl_2za2za2zz__r4_numbers_6_5z00(BINT
												(BgL_arg1462z00_3831), BINT(((long) 1000))));
									}
									bgl_sleep(BgL_arg1461z00_3830);
									BUNSPEC;
									return BINT(BgL_arg1461z00_3830);
								}
							else
								{	/* Llib/thread.scm 463 */
									if (LLONGP(BgL_dz00_3431))
										{	/* Llib/thread.scm 466 */
											long BgL_arg1464z00_3834;

											{	/* Llib/thread.scm 466 */
												long BgL_arg1465z00_3835;

												{	/* Llib/thread.scm 466 */
													long BgL_res1936z00_3836;

													{	/* Llib/thread.scm 466 */
														BGL_LONGLONG_T BgL_tmpz00_4612;

														BgL_tmpz00_4612 = BLLONG_TO_LLONG(BgL_dz00_3431);
														BgL_res1936z00_3836 =
															LLONG_TO_LONG(BgL_tmpz00_4612);
													}
													BgL_arg1465z00_3835 = BgL_res1936z00_3836;
												}
												BgL_arg1464z00_3834 =
													(long)
													CINT(BGl_2za2za2zz__r4_numbers_6_5z00(BINT
														(BgL_arg1465z00_3835), BINT(((long) 1000))));
											}
											bgl_sleep(BgL_arg1464z00_3834);
											BUNSPEC;
											return BINT(BgL_arg1464z00_3834);
										}
									else
										{	/* Llib/thread.scm 467 */
											bool_t BgL_test2734z00_4621;

											if (INTEGERP(BgL_dz00_3431))
												{	/* Llib/thread.scm 467 */
													BgL_test2734z00_4621 = ((bool_t) 1);
												}
											else
												{	/* Llib/thread.scm 467 */
													BgL_test2734z00_4621 = REALP(BgL_dz00_3431);
												}
											if (BgL_test2734z00_4621)
												{	/* Llib/thread.scm 468 */
													long BgL_arg1467z00_3837;

													BgL_arg1467z00_3837 =
														(long) (REAL_TO_DOUBLE
														(BGl_2za2za2zz__r4_numbers_6_5z00(BgL_dz00_3431,
																BGL_REAL_CNST(BGl_real2418z00zz__threadz00))));
													bgl_sleep(BgL_arg1467z00_3837);
													BUNSPEC;
													return BINT(BgL_arg1467z00_3837);
												}
											else
												{	/* Llib/thread.scm 467 */
													return
														BGl_bigloozd2typezd2errorz00zz__errorz00
														(BGl_symbol2419z00zz__threadz00,
														BGl_string2421z00zz__threadz00, BgL_dz00_3431);
												}
										}
								}
						}
				}
		}

	}



/* &%user-current-thread1200 */
	obj_t BGl_z62z52userzd2currentzd2thread1200z30zz__threadz00(obj_t
		BgL_envz00_3432, obj_t BgL_oz00_3433)
	{
		{	/* Llib/thread.scm 432 */
			return ((obj_t) ((BgL_threadz00_bglt) BgL_oz00_3433));
		}

	}



/* &thread-cleanup-set!1193 */
	obj_t BGl_z62threadzd2cleanupzd2setz121193z70zz__threadz00(obj_t
		BgL_envz00_3434, obj_t BgL_thz00_3435, obj_t BgL_vz00_3436)
	{
		{	/* Llib/thread.scm 421 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2422z00zz__threadz00,
				BGl_string2423z00zz__threadz00,
				((obj_t) ((BgL_threadz00_bglt) BgL_thz00_3435)));
		}

	}



/* &thread-cleanup1191 */
	obj_t BGl_z62threadzd2cleanup1191zb0zz__threadz00(obj_t BgL_envz00_3437,
		obj_t BgL_thz00_3438)
	{
		{	/* Llib/thread.scm 416 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2424z00zz__threadz00,
				BGl_string2423z00zz__threadz00,
				((obj_t) ((BgL_threadz00_bglt) BgL_thz00_3438)));
		}

	}



/* &thread-specific-set!1189 */
	obj_t BGl_z62threadzd2specificzd2setz121189z70zz__threadz00(obj_t
		BgL_envz00_3439, obj_t BgL_thz00_3440, obj_t BgL_vz00_3441)
	{
		{	/* Llib/thread.scm 411 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2425z00zz__threadz00,
				BGl_string2423z00zz__threadz00,
				((obj_t) ((BgL_threadz00_bglt) BgL_thz00_3440)));
		}

	}



/* &thread-specific1186 */
	obj_t BGl_z62threadzd2specific1186zb0zz__threadz00(obj_t BgL_envz00_3442,
		obj_t BgL_thz00_3443)
	{
		{	/* Llib/thread.scm 406 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2426z00zz__threadz00,
				BGl_string2423z00zz__threadz00,
				((obj_t) ((BgL_threadz00_bglt) BgL_thz00_3443)));
		}

	}



/* &thread-terminate!1184 */
	obj_t BGl_z62threadzd2terminatez121184za2zz__threadz00(obj_t BgL_envz00_3444,
		obj_t BgL_thz00_3445)
	{
		{	/* Llib/thread.scm 401 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2427z00zz__threadz00,
				BGl_string2423z00zz__threadz00,
				((obj_t) ((BgL_threadz00_bglt) BgL_thz00_3445)));
		}

	}



/* &thread-join!1181 */
	obj_t BGl_z62threadzd2joinz121181za2zz__threadz00(obj_t BgL_envz00_3446,
		obj_t BgL_thz00_3447, obj_t BgL_timeoutz00_3448)
	{
		{	/* Llib/thread.scm 396 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2428z00zz__threadz00,
				BGl_string2423z00zz__threadz00,
				((obj_t) ((BgL_threadz00_bglt) BgL_thz00_3447)));
		}

	}



/* &thread-start-joinabl1179 */
	obj_t BGl_z62threadzd2startzd2joinabl1179z62zz__threadz00(obj_t
		BgL_envz00_3449, obj_t BgL_thz00_3450)
	{
		{	/* Llib/thread.scm 391 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2429z00zz__threadz00,
				BGl_string2423z00zz__threadz00,
				((obj_t) ((BgL_threadz00_bglt) BgL_thz00_3450)));
		}

	}



/* &thread-start!1177 */
	obj_t BGl_z62threadzd2startz121177za2zz__threadz00(obj_t BgL_envz00_3451,
		obj_t BgL_thz00_3452, obj_t BgL_scz00_3453)
	{
		{	/* Llib/thread.scm 386 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2430z00zz__threadz00,
				BGl_string2423z00zz__threadz00,
				((obj_t) ((BgL_threadz00_bglt) BgL_thz00_3452)));
		}

	}



/* &thread-initialize!1175 */
	obj_t BGl_z62threadzd2initializa7ez121175z05zz__threadz00(obj_t
		BgL_envz00_3454, obj_t BgL_thz00_3455)
	{
		{	/* Llib/thread.scm 380 */
			return ((obj_t) ((BgL_threadz00_bglt) BgL_thz00_3455));
		}

	}



/* &tb-condvar-initializ1167 */
	obj_t BGl_z62tbzd2condvarzd2initializa71167zc5zz__threadz00(obj_t
		BgL_envz00_3456, obj_t BgL_tbz00_3457, obj_t BgL_condvarz00_3458)
	{
		{	/* Llib/thread.scm 351 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2431z00zz__threadz00,
				BGl_string2423z00zz__threadz00,
				((obj_t) ((BgL_threadzd2backendzd2_bglt) BgL_tbz00_3457)));
		}

	}



/* &tb-mutex-initialize!1165 */
	obj_t BGl_z62tbzd2mutexzd2initializa7ez121165zd7zz__threadz00(obj_t
		BgL_envz00_3459, obj_t BgL_tbz00_3460, obj_t BgL_mutexz00_3461)
	{
		{	/* Llib/thread.scm 346 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2432z00zz__threadz00,
				BGl_string2423z00zz__threadz00,
				((obj_t) ((BgL_threadzd2backendzd2_bglt) BgL_tbz00_3460)));
		}

	}



/* &tb-current-thread1159 */
	obj_t BGl_z62tbzd2currentzd2thread1159z62zz__threadz00(obj_t BgL_envz00_3462,
		obj_t BgL_tbz00_3463)
	{
		{	/* Llib/thread.scm 322 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2433z00zz__threadz00,
				BGl_string2423z00zz__threadz00,
				((obj_t) ((BgL_threadzd2backendzd2_bglt) BgL_tbz00_3463)));
		}

	}



/* &tb-make-thread1157 */
	obj_t BGl_z62tbzd2makezd2thread1157z62zz__threadz00(obj_t BgL_envz00_3464,
		obj_t BgL_tbz00_3465, obj_t BgL_bodyz00_3466, obj_t BgL_namez00_3467)
	{
		{	/* Llib/thread.scm 317 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol2434z00zz__threadz00,
				BGl_string2423z00zz__threadz00,
				((obj_t) ((BgL_threadzd2backendzd2_bglt) BgL_tbz00_3465)));
		}

	}



/* tb-make-thread */
	BGL_EXPORTED_DEF BgL_threadz00_bglt
		BGl_tbzd2makezd2threadz00zz__threadz00(BgL_threadzd2backendzd2_bglt
		BgL_tbz00_7, obj_t BgL_bodyz00_8, obj_t BgL_namez00_9)
	{
		{	/* Llib/thread.scm 317 */
			{	/* Llib/thread.scm 317 */
				obj_t BgL_method1158z00_1550;

				{	/* Llib/thread.scm 317 */
					obj_t BgL_res1949z00_2387;

					{	/* Llib/thread.scm 317 */
						long BgL_objzd2classzd2numz00_2352;

						{	/* Llib/thread.scm 317 */
							long BgL_res1939z00_2355;

							BgL_res1939z00_2355 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_tbz00_7));
							BgL_objzd2classzd2numz00_2352 = BgL_res1939z00_2355;
						}
						{	/* Llib/thread.scm 317 */
							obj_t BgL_arg1870z00_2353;

							BgL_arg1870z00_2353 =
								PROCEDURE_REF(BGl_tbzd2makezd2threadzd2envzd2zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 317 */
								int BgL_offsetz00_2357;

								BgL_offsetz00_2357 = (int) (BgL_objzd2classzd2numz00_2352);
								{	/* Llib/thread.scm 317 */
									long BgL_offsetz00_2358;

									BgL_offsetz00_2358 =
										((long) (BgL_offsetz00_2357) - OBJECT_TYPE);
									{	/* Llib/thread.scm 317 */
										long BgL_modz00_2359;

										BgL_modz00_2359 =
											(BgL_offsetz00_2358 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/thread.scm 317 */
											long BgL_restz00_2361;

											BgL_restz00_2361 =
												(BgL_offsetz00_2358 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/thread.scm 317 */

												{	/* Llib/thread.scm 317 */
													obj_t BgL_bucketz00_2363;

													BgL_bucketz00_2363 =
														VECTOR_REF(
														((obj_t) BgL_arg1870z00_2353), BgL_modz00_2359);
													BgL_res1949z00_2387 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2363), BgL_restz00_2361);
					}}}}}}}}
					BgL_method1158z00_1550 = BgL_res1949z00_2387;
				}
				return
					((BgL_threadz00_bglt)
					PROCEDURE_ENTRY(BgL_method1158z00_1550) (BgL_method1158z00_1550,
						((obj_t) BgL_tbz00_7), BgL_bodyz00_8, BgL_namez00_9, BEOA));
			}
		}

	}



/* &tb-make-thread */
	BgL_threadz00_bglt BGl_z62tbzd2makezd2threadz62zz__threadz00(obj_t
		BgL_envz00_3468, obj_t BgL_tbz00_3469, obj_t BgL_bodyz00_3470,
		obj_t BgL_namez00_3471)
	{
		{	/* Llib/thread.scm 317 */
			{	/* Llib/thread.scm 317 */
				obj_t BgL_auxz00_4712;
				BgL_threadzd2backendzd2_bglt BgL_auxz00_4704;

				if (PROCEDUREP(BgL_bodyz00_3470))
					{	/* Llib/thread.scm 317 */
						BgL_auxz00_4712 = BgL_bodyz00_3470;
					}
				else
					{
						obj_t BgL_auxz00_4715;

						BgL_auxz00_4715 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 12365)), BGl_string2435z00zz__threadz00,
							BGl_string2299z00zz__threadz00, BgL_bodyz00_3470);
						FAILURE(BgL_auxz00_4715, BFALSE, BFALSE);
					}
				if (BGl_isazf3zf3zz__objectz00(BgL_tbz00_3469,
						BGl_threadzd2backendzd2zz__threadz00))
					{	/* Llib/thread.scm 317 */
						BgL_auxz00_4704 = ((BgL_threadzd2backendzd2_bglt) BgL_tbz00_3469);
					}
				else
					{
						obj_t BgL_auxz00_4708;

						BgL_auxz00_4708 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 12365)), BGl_string2435z00zz__threadz00,
							BGl_string2292z00zz__threadz00, BgL_tbz00_3469);
						FAILURE(BgL_auxz00_4708, BFALSE, BFALSE);
					}
				return
					BGl_tbzd2makezd2threadz00zz__threadz00(BgL_auxz00_4704,
					BgL_auxz00_4712, BgL_namez00_3471);
			}
		}

	}



/* tb-current-thread */
	BGL_EXPORTED_DEF obj_t
		BGl_tbzd2currentzd2threadz00zz__threadz00(BgL_threadzd2backendzd2_bglt
		BgL_tbz00_10)
	{
		{	/* Llib/thread.scm 322 */
			{	/* Llib/thread.scm 322 */
				obj_t BgL_method1160z00_1551;

				{	/* Llib/thread.scm 322 */
					obj_t BgL_res1962z00_2424;

					{	/* Llib/thread.scm 322 */
						long BgL_objzd2classzd2numz00_2389;

						{	/* Llib/thread.scm 322 */
							long BgL_res1951z00_2392;

							BgL_res1951z00_2392 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_tbz00_10));
							BgL_objzd2classzd2numz00_2389 = BgL_res1951z00_2392;
						}
						{	/* Llib/thread.scm 322 */
							obj_t BgL_arg1870z00_2390;

							BgL_arg1870z00_2390 =
								PROCEDURE_REF(BGl_tbzd2currentzd2threadzd2envzd2zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 322 */
								int BgL_offsetz00_2394;

								BgL_offsetz00_2394 = (int) (BgL_objzd2classzd2numz00_2389);
								{	/* Llib/thread.scm 322 */
									long BgL_offsetz00_2395;

									BgL_offsetz00_2395 =
										((long) (BgL_offsetz00_2394) - OBJECT_TYPE);
									{	/* Llib/thread.scm 322 */
										long BgL_modz00_2396;

										BgL_modz00_2396 =
											(BgL_offsetz00_2395 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/thread.scm 322 */
											long BgL_restz00_2398;

											BgL_restz00_2398 =
												(BgL_offsetz00_2395 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/thread.scm 322 */

												{	/* Llib/thread.scm 322 */
													obj_t BgL_bucketz00_2400;

													BgL_bucketz00_2400 =
														VECTOR_REF(
														((obj_t) BgL_arg1870z00_2390), BgL_modz00_2396);
													BgL_res1962z00_2424 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2400), BgL_restz00_2398);
					}}}}}}}}
					BgL_method1160z00_1551 = BgL_res1962z00_2424;
				}
				return
					PROCEDURE_ENTRY(BgL_method1160z00_1551) (BgL_method1160z00_1551,
					((obj_t) BgL_tbz00_10), BEOA);
			}
		}

	}



/* &tb-current-thread */
	obj_t BGl_z62tbzd2currentzd2threadz62zz__threadz00(obj_t BgL_envz00_3472,
		obj_t BgL_tbz00_3473)
	{
		{	/* Llib/thread.scm 322 */
			{	/* Llib/thread.scm 322 */
				BgL_threadzd2backendzd2_bglt BgL_auxz00_4750;

				if (BGl_isazf3zf3zz__objectz00(BgL_tbz00_3473,
						BGl_threadzd2backendzd2zz__threadz00))
					{	/* Llib/thread.scm 322 */
						BgL_auxz00_4750 = ((BgL_threadzd2backendzd2_bglt) BgL_tbz00_3473);
					}
				else
					{
						obj_t BgL_auxz00_4754;

						BgL_auxz00_4754 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 12651)), BGl_string2436z00zz__threadz00,
							BGl_string2292z00zz__threadz00, BgL_tbz00_3473);
						FAILURE(BgL_auxz00_4754, BFALSE, BFALSE);
					}
				return BGl_tbzd2currentzd2threadz00zz__threadz00(BgL_auxz00_4750);
			}
		}

	}



/* tb-mutex-initialize! */
	BGL_EXPORTED_DEF obj_t
		BGl_tbzd2mutexzd2initializa7ez12zb5zz__threadz00
		(BgL_threadzd2backendzd2_bglt BgL_tbz00_15, obj_t BgL_mutexz00_16)
	{
		{	/* Llib/thread.scm 346 */
			{	/* Llib/thread.scm 346 */
				obj_t BgL_method1166z00_1552;

				{	/* Llib/thread.scm 346 */
					obj_t BgL_res1975z00_2461;

					{	/* Llib/thread.scm 346 */
						long BgL_objzd2classzd2numz00_2426;

						{	/* Llib/thread.scm 346 */
							long BgL_res1963z00_2429;

							BgL_res1963z00_2429 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_tbz00_15));
							BgL_objzd2classzd2numz00_2426 = BgL_res1963z00_2429;
						}
						{	/* Llib/thread.scm 346 */
							obj_t BgL_arg1870z00_2427;

							BgL_arg1870z00_2427 =
								PROCEDURE_REF
								(BGl_tbzd2mutexzd2initializa7ez12zd2envz67zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 346 */
								int BgL_offsetz00_2431;

								BgL_offsetz00_2431 = (int) (BgL_objzd2classzd2numz00_2426);
								{	/* Llib/thread.scm 346 */
									long BgL_offsetz00_2432;

									BgL_offsetz00_2432 =
										((long) (BgL_offsetz00_2431) - OBJECT_TYPE);
									{	/* Llib/thread.scm 346 */
										long BgL_modz00_2433;

										BgL_modz00_2433 =
											(BgL_offsetz00_2432 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/thread.scm 346 */
											long BgL_restz00_2435;

											BgL_restz00_2435 =
												(BgL_offsetz00_2432 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/thread.scm 346 */

												{	/* Llib/thread.scm 346 */
													obj_t BgL_bucketz00_2437;

													BgL_bucketz00_2437 =
														VECTOR_REF(
														((obj_t) BgL_arg1870z00_2427), BgL_modz00_2433);
													BgL_res1975z00_2461 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2437), BgL_restz00_2435);
					}}}}}}}}
					BgL_method1166z00_1552 = BgL_res1975z00_2461;
				}
				return
					PROCEDURE_ENTRY(BgL_method1166z00_1552) (BgL_method1166z00_1552,
					((obj_t) BgL_tbz00_15), BgL_mutexz00_16, BEOA);
			}
		}

	}



/* &tb-mutex-initialize! */
	obj_t BGl_z62tbzd2mutexzd2initializa7ez12zd7zz__threadz00(obj_t
		BgL_envz00_3474, obj_t BgL_tbz00_3475, obj_t BgL_mutexz00_3476)
	{
		{	/* Llib/thread.scm 346 */
			{	/* Llib/thread.scm 346 */
				obj_t BgL_auxz00_4798;
				BgL_threadzd2backendzd2_bglt BgL_auxz00_4790;

				if (BGL_MUTEXP(BgL_mutexz00_3476))
					{	/* Llib/thread.scm 346 */
						BgL_auxz00_4798 = BgL_mutexz00_3476;
					}
				else
					{
						obj_t BgL_auxz00_4801;

						BgL_auxz00_4801 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 13836)), BGl_string2437z00zz__threadz00,
							BGl_string2304z00zz__threadz00, BgL_mutexz00_3476);
						FAILURE(BgL_auxz00_4801, BFALSE, BFALSE);
					}
				if (BGl_isazf3zf3zz__objectz00(BgL_tbz00_3475,
						BGl_threadzd2backendzd2zz__threadz00))
					{	/* Llib/thread.scm 346 */
						BgL_auxz00_4790 = ((BgL_threadzd2backendzd2_bglt) BgL_tbz00_3475);
					}
				else
					{
						obj_t BgL_auxz00_4794;

						BgL_auxz00_4794 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 13836)), BGl_string2437z00zz__threadz00,
							BGl_string2292z00zz__threadz00, BgL_tbz00_3475);
						FAILURE(BgL_auxz00_4794, BFALSE, BFALSE);
					}
				return
					BGl_tbzd2mutexzd2initializa7ez12zb5zz__threadz00(BgL_auxz00_4790,
					BgL_auxz00_4798);
			}
		}

	}



/* tb-condvar-initialize! */
	BGL_EXPORTED_DEF obj_t
		BGl_tbzd2condvarzd2initializa7ez12zb5zz__threadz00
		(BgL_threadzd2backendzd2_bglt BgL_tbz00_17, obj_t BgL_condvarz00_18)
	{
		{	/* Llib/thread.scm 351 */
			{	/* Llib/thread.scm 351 */
				obj_t BgL_method1168z00_1553;

				{	/* Llib/thread.scm 351 */
					obj_t BgL_res1986z00_2498;

					{	/* Llib/thread.scm 351 */
						long BgL_objzd2classzd2numz00_2463;

						{	/* Llib/thread.scm 351 */
							long BgL_res1976z00_2466;

							BgL_res1976z00_2466 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_tbz00_17));
							BgL_objzd2classzd2numz00_2463 = BgL_res1976z00_2466;
						}
						{	/* Llib/thread.scm 351 */
							obj_t BgL_arg1870z00_2464;

							BgL_arg1870z00_2464 =
								PROCEDURE_REF
								(BGl_tbzd2condvarzd2initializa7ez12zd2envz67zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 351 */
								int BgL_offsetz00_2468;

								BgL_offsetz00_2468 = (int) (BgL_objzd2classzd2numz00_2463);
								{	/* Llib/thread.scm 351 */
									long BgL_offsetz00_2469;

									BgL_offsetz00_2469 =
										((long) (BgL_offsetz00_2468) - OBJECT_TYPE);
									{	/* Llib/thread.scm 351 */
										long BgL_modz00_2470;

										BgL_modz00_2470 =
											(BgL_offsetz00_2469 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/thread.scm 351 */
											long BgL_restz00_2472;

											BgL_restz00_2472 =
												(BgL_offsetz00_2469 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/thread.scm 351 */

												{	/* Llib/thread.scm 351 */
													obj_t BgL_bucketz00_2474;

													BgL_bucketz00_2474 =
														VECTOR_REF(
														((obj_t) BgL_arg1870z00_2464), BgL_modz00_2470);
													BgL_res1986z00_2498 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2474), BgL_restz00_2472);
					}}}}}}}}
					BgL_method1168z00_1553 = BgL_res1986z00_2498;
				}
				return
					PROCEDURE_ENTRY(BgL_method1168z00_1553) (BgL_method1168z00_1553,
					((obj_t) BgL_tbz00_17), BgL_condvarz00_18, BEOA);
			}
		}

	}



/* &tb-condvar-initialize! */
	obj_t BGl_z62tbzd2condvarzd2initializa7ez12zd7zz__threadz00(obj_t
		BgL_envz00_3477, obj_t BgL_tbz00_3478, obj_t BgL_condvarz00_3479)
	{
		{	/* Llib/thread.scm 351 */
			{	/* Llib/thread.scm 351 */
				obj_t BgL_auxz00_4845;
				BgL_threadzd2backendzd2_bglt BgL_auxz00_4837;

				if (BGL_CONDVARP(BgL_condvarz00_3479))
					{	/* Llib/thread.scm 351 */
						BgL_auxz00_4845 = BgL_condvarz00_3479;
					}
				else
					{
						obj_t BgL_auxz00_4848;

						BgL_auxz00_4848 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 14124)), BGl_string2438z00zz__threadz00,
							BGl_string2317z00zz__threadz00, BgL_condvarz00_3479);
						FAILURE(BgL_auxz00_4848, BFALSE, BFALSE);
					}
				if (BGl_isazf3zf3zz__objectz00(BgL_tbz00_3478,
						BGl_threadzd2backendzd2zz__threadz00))
					{	/* Llib/thread.scm 351 */
						BgL_auxz00_4837 = ((BgL_threadzd2backendzd2_bglt) BgL_tbz00_3478);
					}
				else
					{
						obj_t BgL_auxz00_4841;

						BgL_auxz00_4841 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 14124)), BGl_string2438z00zz__threadz00,
							BGl_string2292z00zz__threadz00, BgL_tbz00_3478);
						FAILURE(BgL_auxz00_4841, BFALSE, BFALSE);
					}
				return
					BGl_tbzd2condvarzd2initializa7ez12zb5zz__threadz00(BgL_auxz00_4837,
					BgL_auxz00_4845);
			}
		}

	}



/* thread-initialize! */
	BGL_EXPORTED_DEF obj_t
		BGl_threadzd2initializa7ez12z67zz__threadz00(BgL_threadz00_bglt
		BgL_thz00_26)
	{
		{	/* Llib/thread.scm 380 */
			{	/* Llib/thread.scm 380 */
				obj_t BgL_method1176z00_1554;

				{	/* Llib/thread.scm 380 */
					obj_t BgL_res1997z00_2535;

					{	/* Llib/thread.scm 380 */
						long BgL_objzd2classzd2numz00_2500;

						{	/* Llib/thread.scm 380 */
							long BgL_res1987z00_2503;

							BgL_res1987z00_2503 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_thz00_26));
							BgL_objzd2classzd2numz00_2500 = BgL_res1987z00_2503;
						}
						{	/* Llib/thread.scm 380 */
							obj_t BgL_arg1870z00_2501;

							BgL_arg1870z00_2501 =
								PROCEDURE_REF
								(BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 380 */
								int BgL_offsetz00_2505;

								BgL_offsetz00_2505 = (int) (BgL_objzd2classzd2numz00_2500);
								{	/* Llib/thread.scm 380 */
									long BgL_offsetz00_2506;

									BgL_offsetz00_2506 =
										((long) (BgL_offsetz00_2505) - OBJECT_TYPE);
									{	/* Llib/thread.scm 380 */
										long BgL_modz00_2507;

										BgL_modz00_2507 =
											(BgL_offsetz00_2506 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/thread.scm 380 */
											long BgL_restz00_2509;

											BgL_restz00_2509 =
												(BgL_offsetz00_2506 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/thread.scm 380 */

												{	/* Llib/thread.scm 380 */
													obj_t BgL_bucketz00_2511;

													BgL_bucketz00_2511 =
														VECTOR_REF(
														((obj_t) BgL_arg1870z00_2501), BgL_modz00_2507);
													BgL_res1997z00_2535 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2511), BgL_restz00_2509);
					}}}}}}}}
					BgL_method1176z00_1554 = BgL_res1997z00_2535;
				}
				return
					PROCEDURE_ENTRY(BgL_method1176z00_1554) (BgL_method1176z00_1554,
					((obj_t) BgL_thz00_26), BEOA);
			}
		}

	}



/* &thread-initialize! */
	obj_t BGl_z62threadzd2initializa7ez12z05zz__threadz00(obj_t BgL_envz00_3409,
		obj_t BgL_thz00_3410)
	{
		{	/* Llib/thread.scm 380 */
			{	/* Llib/thread.scm 380 */
				BgL_threadz00_bglt BgL_auxz00_4883;

				if (BGl_isazf3zf3zz__objectz00(BgL_thz00_3410,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 380 */
						BgL_auxz00_4883 = ((BgL_threadz00_bglt) BgL_thz00_3410);
					}
				else
					{
						obj_t BgL_auxz00_4887;

						BgL_auxz00_4887 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 15675)), BGl_string2439z00zz__threadz00,
							BGl_string2297z00zz__threadz00, BgL_thz00_3410);
						FAILURE(BgL_auxz00_4887, BFALSE, BFALSE);
					}
				return BGl_threadzd2initializa7ez12z67zz__threadz00(BgL_auxz00_4883);
			}
		}

	}



/* thread-start! */
	BGL_EXPORTED_DEF obj_t
		BGl_threadzd2startz12zc0zz__threadz00(BgL_threadz00_bglt BgL_thz00_27,
		obj_t BgL_scz00_28)
	{
		{	/* Llib/thread.scm 386 */
			{	/* Llib/thread.scm 386 */
				obj_t BgL_method1178z00_1555;

				{	/* Llib/thread.scm 386 */
					obj_t BgL_res2008z00_2572;

					{	/* Llib/thread.scm 386 */
						long BgL_objzd2classzd2numz00_2537;

						{	/* Llib/thread.scm 386 */
							long BgL_res1998z00_2540;

							BgL_res1998z00_2540 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_thz00_27));
							BgL_objzd2classzd2numz00_2537 = BgL_res1998z00_2540;
						}
						{	/* Llib/thread.scm 386 */
							obj_t BgL_arg1870z00_2538;

							BgL_arg1870z00_2538 =
								PROCEDURE_REF(BGl_threadzd2startz12zd2envz12zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 386 */
								int BgL_offsetz00_2542;

								BgL_offsetz00_2542 = (int) (BgL_objzd2classzd2numz00_2537);
								{	/* Llib/thread.scm 386 */
									long BgL_offsetz00_2543;

									BgL_offsetz00_2543 =
										((long) (BgL_offsetz00_2542) - OBJECT_TYPE);
									{	/* Llib/thread.scm 386 */
										long BgL_modz00_2544;

										BgL_modz00_2544 =
											(BgL_offsetz00_2543 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/thread.scm 386 */
											long BgL_restz00_2546;

											BgL_restz00_2546 =
												(BgL_offsetz00_2543 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/thread.scm 386 */

												{	/* Llib/thread.scm 386 */
													obj_t BgL_bucketz00_2548;

													BgL_bucketz00_2548 =
														VECTOR_REF(
														((obj_t) BgL_arg1870z00_2538), BgL_modz00_2544);
													BgL_res2008z00_2572 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2548), BgL_restz00_2546);
					}}}}}}}}
					BgL_method1178z00_1555 = BgL_res2008z00_2572;
				}
				{	/* Llib/thread.scm 386 */
					obj_t BgL_auxz00_4917;

					{	/* Llib/thread.scm 386 */
						obj_t BgL_list1470z00_1556;

						BgL_list1470z00_1556 = MAKE_YOUNG_PAIR(BgL_scz00_28, BNIL);
						BgL_auxz00_4917 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
							((obj_t) BgL_thz00_27), BgL_list1470z00_1556);
					}
					return apply(BgL_method1178z00_1555, BgL_auxz00_4917);
				}
			}
		}

	}



/* &thread-start! */
	obj_t BGl_z62threadzd2startz12za2zz__threadz00(obj_t BgL_envz00_3480,
		obj_t BgL_thz00_3481, obj_t BgL_scz00_3482)
	{
		{	/* Llib/thread.scm 386 */
			{	/* Llib/thread.scm 386 */
				BgL_threadz00_bglt BgL_auxz00_4922;

				if (BGl_isazf3zf3zz__objectz00(BgL_thz00_3481,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 386 */
						BgL_auxz00_4922 = ((BgL_threadz00_bglt) BgL_thz00_3481);
					}
				else
					{
						obj_t BgL_auxz00_4926;

						BgL_auxz00_4926 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 15953)), BGl_string2440z00zz__threadz00,
							BGl_string2297z00zz__threadz00, BgL_thz00_3481);
						FAILURE(BgL_auxz00_4926, BFALSE, BFALSE);
					}
				return
					BGl_threadzd2startz12zc0zz__threadz00(BgL_auxz00_4922,
					BgL_scz00_3482);
			}
		}

	}



/* thread-start-joinable! */
	BGL_EXPORTED_DEF obj_t
		BGl_threadzd2startzd2joinablez12z12zz__threadz00(BgL_threadz00_bglt
		BgL_thz00_29)
	{
		{	/* Llib/thread.scm 391 */
			{	/* Llib/thread.scm 391 */
				obj_t BgL_method1180z00_1557;

				{	/* Llib/thread.scm 391 */
					obj_t BgL_res2019z00_2609;

					{	/* Llib/thread.scm 391 */
						long BgL_objzd2classzd2numz00_2574;

						{	/* Llib/thread.scm 391 */
							long BgL_res2009z00_2577;

							BgL_res2009z00_2577 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_thz00_29));
							BgL_objzd2classzd2numz00_2574 = BgL_res2009z00_2577;
						}
						{	/* Llib/thread.scm 391 */
							obj_t BgL_arg1870z00_2575;

							BgL_arg1870z00_2575 =
								PROCEDURE_REF
								(BGl_threadzd2startzd2joinablez12zd2envzc0zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 391 */
								int BgL_offsetz00_2579;

								BgL_offsetz00_2579 = (int) (BgL_objzd2classzd2numz00_2574);
								{	/* Llib/thread.scm 391 */
									long BgL_offsetz00_2580;

									BgL_offsetz00_2580 =
										((long) (BgL_offsetz00_2579) - OBJECT_TYPE);
									{	/* Llib/thread.scm 391 */
										long BgL_modz00_2581;

										BgL_modz00_2581 =
											(BgL_offsetz00_2580 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/thread.scm 391 */
											long BgL_restz00_2583;

											BgL_restz00_2583 =
												(BgL_offsetz00_2580 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/thread.scm 391 */

												{	/* Llib/thread.scm 391 */
													obj_t BgL_bucketz00_2585;

													BgL_bucketz00_2585 =
														VECTOR_REF(
														((obj_t) BgL_arg1870z00_2575), BgL_modz00_2581);
													BgL_res2019z00_2609 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2585), BgL_restz00_2583);
					}}}}}}}}
					BgL_method1180z00_1557 = BgL_res2019z00_2609;
				}
				return
					PROCEDURE_ENTRY(BgL_method1180z00_1557) (BgL_method1180z00_1557,
					((obj_t) BgL_thz00_29), BEOA);
			}
		}

	}



/* &thread-start-joinable! */
	obj_t BGl_z62threadzd2startzd2joinablez12z70zz__threadz00(obj_t
		BgL_envz00_3483, obj_t BgL_thz00_3484)
	{
		{	/* Llib/thread.scm 391 */
			{	/* Llib/thread.scm 391 */
				BgL_threadz00_bglt BgL_auxz00_4961;

				if (BGl_isazf3zf3zz__objectz00(BgL_thz00_3484,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 391 */
						BgL_auxz00_4961 = ((BgL_threadz00_bglt) BgL_thz00_3484);
					}
				else
					{
						obj_t BgL_auxz00_4965;

						BgL_auxz00_4965 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 16225)), BGl_string2441z00zz__threadz00,
							BGl_string2297z00zz__threadz00, BgL_thz00_3484);
						FAILURE(BgL_auxz00_4965, BFALSE, BFALSE);
					}
				return
					BGl_threadzd2startzd2joinablez12z12zz__threadz00(BgL_auxz00_4961);
			}
		}

	}



/* thread-join! */
	BGL_EXPORTED_DEF obj_t BGl_threadzd2joinz12zc0zz__threadz00(BgL_threadz00_bglt
		BgL_thz00_30, obj_t BgL_timeoutz00_31)
	{
		{	/* Llib/thread.scm 396 */
			{	/* Llib/thread.scm 396 */
				obj_t BgL_method1183z00_1558;

				{	/* Llib/thread.scm 396 */
					obj_t BgL_res2030z00_2646;

					{	/* Llib/thread.scm 396 */
						long BgL_objzd2classzd2numz00_2611;

						{	/* Llib/thread.scm 396 */
							long BgL_res2020z00_2614;

							BgL_res2020z00_2614 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_thz00_30));
							BgL_objzd2classzd2numz00_2611 = BgL_res2020z00_2614;
						}
						{	/* Llib/thread.scm 396 */
							obj_t BgL_arg1870z00_2612;

							BgL_arg1870z00_2612 =
								PROCEDURE_REF(BGl_threadzd2joinz12zd2envz12zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 396 */
								int BgL_offsetz00_2616;

								BgL_offsetz00_2616 = (int) (BgL_objzd2classzd2numz00_2611);
								{	/* Llib/thread.scm 396 */
									long BgL_offsetz00_2617;

									BgL_offsetz00_2617 =
										((long) (BgL_offsetz00_2616) - OBJECT_TYPE);
									{	/* Llib/thread.scm 396 */
										long BgL_modz00_2618;

										BgL_modz00_2618 =
											(BgL_offsetz00_2617 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/thread.scm 396 */
											long BgL_restz00_2620;

											BgL_restz00_2620 =
												(BgL_offsetz00_2617 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/thread.scm 396 */

												{	/* Llib/thread.scm 396 */
													obj_t BgL_bucketz00_2622;

													BgL_bucketz00_2622 =
														VECTOR_REF(
														((obj_t) BgL_arg1870z00_2612), BgL_modz00_2618);
													BgL_res2030z00_2646 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2622), BgL_restz00_2620);
					}}}}}}}}
					BgL_method1183z00_1558 = BgL_res2030z00_2646;
				}
				{	/* Llib/thread.scm 396 */
					obj_t BgL_auxz00_4995;

					{	/* Llib/thread.scm 396 */
						obj_t BgL_list1471z00_1559;

						BgL_list1471z00_1559 = MAKE_YOUNG_PAIR(BgL_timeoutz00_31, BNIL);
						BgL_auxz00_4995 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
							((obj_t) BgL_thz00_30), BgL_list1471z00_1559);
					}
					return apply(BgL_method1183z00_1558, BgL_auxz00_4995);
				}
			}
		}

	}



/* &thread-join! */
	obj_t BGl_z62threadzd2joinz12za2zz__threadz00(obj_t BgL_envz00_3485,
		obj_t BgL_thz00_3486, obj_t BgL_timeoutz00_3487)
	{
		{	/* Llib/thread.scm 396 */
			{	/* Llib/thread.scm 396 */
				BgL_threadz00_bglt BgL_auxz00_5000;

				if (BGl_isazf3zf3zz__objectz00(BgL_thz00_3486,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 396 */
						BgL_auxz00_5000 = ((BgL_threadz00_bglt) BgL_thz00_3486);
					}
				else
					{
						obj_t BgL_auxz00_5004;

						BgL_auxz00_5004 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 16501)), BGl_string2442z00zz__threadz00,
							BGl_string2297z00zz__threadz00, BgL_thz00_3486);
						FAILURE(BgL_auxz00_5004, BFALSE, BFALSE);
					}
				return
					BGl_threadzd2joinz12zc0zz__threadz00(BgL_auxz00_5000,
					BgL_timeoutz00_3487);
			}
		}

	}



/* thread-terminate! */
	BGL_EXPORTED_DEF obj_t
		BGl_threadzd2terminatez12zc0zz__threadz00(BgL_threadz00_bglt BgL_thz00_32)
	{
		{	/* Llib/thread.scm 401 */
			{	/* Llib/thread.scm 401 */
				obj_t BgL_method1185z00_1560;

				{	/* Llib/thread.scm 401 */
					obj_t BgL_res2041z00_2683;

					{	/* Llib/thread.scm 401 */
						long BgL_objzd2classzd2numz00_2648;

						{	/* Llib/thread.scm 401 */
							long BgL_res2031z00_2651;

							BgL_res2031z00_2651 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_thz00_32));
							BgL_objzd2classzd2numz00_2648 = BgL_res2031z00_2651;
						}
						{	/* Llib/thread.scm 401 */
							obj_t BgL_arg1870z00_2649;

							BgL_arg1870z00_2649 =
								PROCEDURE_REF(BGl_threadzd2terminatez12zd2envz12zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 401 */
								int BgL_offsetz00_2653;

								BgL_offsetz00_2653 = (int) (BgL_objzd2classzd2numz00_2648);
								{	/* Llib/thread.scm 401 */
									long BgL_offsetz00_2654;

									BgL_offsetz00_2654 =
										((long) (BgL_offsetz00_2653) - OBJECT_TYPE);
									{	/* Llib/thread.scm 401 */
										long BgL_modz00_2655;

										BgL_modz00_2655 =
											(BgL_offsetz00_2654 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/thread.scm 401 */
											long BgL_restz00_2657;

											BgL_restz00_2657 =
												(BgL_offsetz00_2654 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/thread.scm 401 */

												{	/* Llib/thread.scm 401 */
													obj_t BgL_bucketz00_2659;

													BgL_bucketz00_2659 =
														VECTOR_REF(
														((obj_t) BgL_arg1870z00_2649), BgL_modz00_2655);
													BgL_res2041z00_2683 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2659), BgL_restz00_2657);
					}}}}}}}}
					BgL_method1185z00_1560 = BgL_res2041z00_2683;
				}
				return
					PROCEDURE_ENTRY(BgL_method1185z00_1560) (BgL_method1185z00_1560,
					((obj_t) BgL_thz00_32), BEOA);
			}
		}

	}



/* &thread-terminate! */
	obj_t BGl_z62threadzd2terminatez12za2zz__threadz00(obj_t BgL_envz00_3488,
		obj_t BgL_thz00_3489)
	{
		{	/* Llib/thread.scm 401 */
			{	/* Llib/thread.scm 401 */
				BgL_threadz00_bglt BgL_auxz00_5039;

				if (BGl_isazf3zf3zz__objectz00(BgL_thz00_3489,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 401 */
						BgL_auxz00_5039 = ((BgL_threadz00_bglt) BgL_thz00_3489);
					}
				else
					{
						obj_t BgL_auxz00_5043;

						BgL_auxz00_5043 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 16777)), BGl_string2443z00zz__threadz00,
							BGl_string2297z00zz__threadz00, BgL_thz00_3489);
						FAILURE(BgL_auxz00_5043, BFALSE, BFALSE);
					}
				return BGl_threadzd2terminatez12zc0zz__threadz00(BgL_auxz00_5039);
			}
		}

	}



/* thread-specific */
	BGL_EXPORTED_DEF obj_t
		BGl_threadzd2specificzd2zz__threadz00(BgL_threadz00_bglt BgL_thz00_33)
	{
		{	/* Llib/thread.scm 406 */
			{	/* Llib/thread.scm 406 */
				obj_t BgL_method1188z00_1561;

				{	/* Llib/thread.scm 406 */
					obj_t BgL_res2052z00_2720;

					{	/* Llib/thread.scm 406 */
						long BgL_objzd2classzd2numz00_2685;

						{	/* Llib/thread.scm 406 */
							long BgL_res2042z00_2688;

							BgL_res2042z00_2688 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_thz00_33));
							BgL_objzd2classzd2numz00_2685 = BgL_res2042z00_2688;
						}
						{	/* Llib/thread.scm 406 */
							obj_t BgL_arg1870z00_2686;

							BgL_arg1870z00_2686 =
								PROCEDURE_REF(BGl_threadzd2specificzd2envz00zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 406 */
								int BgL_offsetz00_2690;

								BgL_offsetz00_2690 = (int) (BgL_objzd2classzd2numz00_2685);
								{	/* Llib/thread.scm 406 */
									long BgL_offsetz00_2691;

									BgL_offsetz00_2691 =
										((long) (BgL_offsetz00_2690) - OBJECT_TYPE);
									{	/* Llib/thread.scm 406 */
										long BgL_modz00_2692;

										BgL_modz00_2692 =
											(BgL_offsetz00_2691 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/thread.scm 406 */
											long BgL_restz00_2694;

											BgL_restz00_2694 =
												(BgL_offsetz00_2691 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/thread.scm 406 */

												{	/* Llib/thread.scm 406 */
													obj_t BgL_bucketz00_2696;

													BgL_bucketz00_2696 =
														VECTOR_REF(
														((obj_t) BgL_arg1870z00_2686), BgL_modz00_2692);
													BgL_res2052z00_2720 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2696), BgL_restz00_2694);
					}}}}}}}}
					BgL_method1188z00_1561 = BgL_res2052z00_2720;
				}
				return
					PROCEDURE_ENTRY(BgL_method1188z00_1561) (BgL_method1188z00_1561,
					((obj_t) BgL_thz00_33), BEOA);
			}
		}

	}



/* &thread-specific */
	obj_t BGl_z62threadzd2specificzb0zz__threadz00(obj_t BgL_envz00_3490,
		obj_t BgL_thz00_3491)
	{
		{	/* Llib/thread.scm 406 */
			{	/* Llib/thread.scm 406 */
				BgL_threadz00_bglt BgL_auxz00_5078;

				if (BGl_isazf3zf3zz__objectz00(BgL_thz00_3491,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 406 */
						BgL_auxz00_5078 = ((BgL_threadz00_bglt) BgL_thz00_3491);
					}
				else
					{
						obj_t BgL_auxz00_5082;

						BgL_auxz00_5082 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 17048)), BGl_string2444z00zz__threadz00,
							BGl_string2297z00zz__threadz00, BgL_thz00_3491);
						FAILURE(BgL_auxz00_5082, BFALSE, BFALSE);
					}
				return BGl_threadzd2specificzd2zz__threadz00(BgL_auxz00_5078);
			}
		}

	}



/* thread-specific-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_threadzd2specificzd2setz12z12zz__threadz00(BgL_threadz00_bglt
		BgL_thz00_34, obj_t BgL_vz00_35)
	{
		{	/* Llib/thread.scm 411 */
			{	/* Llib/thread.scm 411 */
				obj_t BgL_method1190z00_1562;

				{	/* Llib/thread.scm 411 */
					obj_t BgL_res2063z00_2757;

					{	/* Llib/thread.scm 411 */
						long BgL_objzd2classzd2numz00_2722;

						{	/* Llib/thread.scm 411 */
							long BgL_res2053z00_2725;

							BgL_res2053z00_2725 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_thz00_34));
							BgL_objzd2classzd2numz00_2722 = BgL_res2053z00_2725;
						}
						{	/* Llib/thread.scm 411 */
							obj_t BgL_arg1870z00_2723;

							BgL_arg1870z00_2723 =
								PROCEDURE_REF
								(BGl_threadzd2specificzd2setz12zd2envzc0zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 411 */
								int BgL_offsetz00_2727;

								BgL_offsetz00_2727 = (int) (BgL_objzd2classzd2numz00_2722);
								{	/* Llib/thread.scm 411 */
									long BgL_offsetz00_2728;

									BgL_offsetz00_2728 =
										((long) (BgL_offsetz00_2727) - OBJECT_TYPE);
									{	/* Llib/thread.scm 411 */
										long BgL_modz00_2729;

										BgL_modz00_2729 =
											(BgL_offsetz00_2728 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/thread.scm 411 */
											long BgL_restz00_2731;

											BgL_restz00_2731 =
												(BgL_offsetz00_2728 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/thread.scm 411 */

												{	/* Llib/thread.scm 411 */
													obj_t BgL_bucketz00_2733;

													BgL_bucketz00_2733 =
														VECTOR_REF(
														((obj_t) BgL_arg1870z00_2723), BgL_modz00_2729);
													BgL_res2063z00_2757 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2733), BgL_restz00_2731);
					}}}}}}}}
					BgL_method1190z00_1562 = BgL_res2063z00_2757;
				}
				return
					PROCEDURE_ENTRY(BgL_method1190z00_1562) (BgL_method1190z00_1562,
					((obj_t) BgL_thz00_34), BgL_vz00_35, BEOA);
			}
		}

	}



/* &thread-specific-set! */
	obj_t BGl_z62threadzd2specificzd2setz12z70zz__threadz00(obj_t BgL_envz00_3492,
		obj_t BgL_thz00_3493, obj_t BgL_vz00_3494)
	{
		{	/* Llib/thread.scm 411 */
			{	/* Llib/thread.scm 411 */
				BgL_threadz00_bglt BgL_auxz00_5118;

				if (BGl_isazf3zf3zz__objectz00(BgL_thz00_3493,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 411 */
						BgL_auxz00_5118 = ((BgL_threadz00_bglt) BgL_thz00_3493);
					}
				else
					{
						obj_t BgL_auxz00_5122;

						BgL_auxz00_5122 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 17317)), BGl_string2445z00zz__threadz00,
							BGl_string2297z00zz__threadz00, BgL_thz00_3493);
						FAILURE(BgL_auxz00_5122, BFALSE, BFALSE);
					}
				return
					BGl_threadzd2specificzd2setz12z12zz__threadz00(BgL_auxz00_5118,
					BgL_vz00_3494);
			}
		}

	}



/* thread-cleanup */
	BGL_EXPORTED_DEF obj_t BGl_threadzd2cleanupzd2zz__threadz00(BgL_threadz00_bglt
		BgL_thz00_36)
	{
		{	/* Llib/thread.scm 416 */
			{	/* Llib/thread.scm 416 */
				obj_t BgL_method1192z00_1563;

				{	/* Llib/thread.scm 416 */
					obj_t BgL_res2074z00_2794;

					{	/* Llib/thread.scm 416 */
						long BgL_objzd2classzd2numz00_2759;

						{	/* Llib/thread.scm 416 */
							long BgL_res2064z00_2762;

							BgL_res2064z00_2762 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_thz00_36));
							BgL_objzd2classzd2numz00_2759 = BgL_res2064z00_2762;
						}
						{	/* Llib/thread.scm 416 */
							obj_t BgL_arg1870z00_2760;

							BgL_arg1870z00_2760 =
								PROCEDURE_REF(BGl_threadzd2cleanupzd2envz00zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 416 */
								int BgL_offsetz00_2764;

								BgL_offsetz00_2764 = (int) (BgL_objzd2classzd2numz00_2759);
								{	/* Llib/thread.scm 416 */
									long BgL_offsetz00_2765;

									BgL_offsetz00_2765 =
										((long) (BgL_offsetz00_2764) - OBJECT_TYPE);
									{	/* Llib/thread.scm 416 */
										long BgL_modz00_2766;

										BgL_modz00_2766 =
											(BgL_offsetz00_2765 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/thread.scm 416 */
											long BgL_restz00_2768;

											BgL_restz00_2768 =
												(BgL_offsetz00_2765 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/thread.scm 416 */

												{	/* Llib/thread.scm 416 */
													obj_t BgL_bucketz00_2770;

													BgL_bucketz00_2770 =
														VECTOR_REF(
														((obj_t) BgL_arg1870z00_2760), BgL_modz00_2766);
													BgL_res2074z00_2794 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2770), BgL_restz00_2768);
					}}}}}}}}
					BgL_method1192z00_1563 = BgL_res2074z00_2794;
				}
				return
					PROCEDURE_ENTRY(BgL_method1192z00_1563) (BgL_method1192z00_1563,
					((obj_t) BgL_thz00_36), BEOA);
			}
		}

	}



/* &thread-cleanup */
	obj_t BGl_z62threadzd2cleanupzb0zz__threadz00(obj_t BgL_envz00_3495,
		obj_t BgL_thz00_3496)
	{
		{	/* Llib/thread.scm 416 */
			{	/* Llib/thread.scm 416 */
				BgL_threadz00_bglt BgL_auxz00_5157;

				if (BGl_isazf3zf3zz__objectz00(BgL_thz00_3496,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 416 */
						BgL_auxz00_5157 = ((BgL_threadz00_bglt) BgL_thz00_3496);
					}
				else
					{
						obj_t BgL_auxz00_5161;

						BgL_auxz00_5161 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 17598)), BGl_string2446z00zz__threadz00,
							BGl_string2297z00zz__threadz00, BgL_thz00_3496);
						FAILURE(BgL_auxz00_5161, BFALSE, BFALSE);
					}
				return BGl_threadzd2cleanupzd2zz__threadz00(BgL_auxz00_5157);
			}
		}

	}



/* thread-cleanup-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_threadzd2cleanupzd2setz12z12zz__threadz00(BgL_threadz00_bglt
		BgL_thz00_37, obj_t BgL_vz00_38)
	{
		{	/* Llib/thread.scm 421 */
			{	/* Llib/thread.scm 421 */
				obj_t BgL_method1194z00_1564;

				{	/* Llib/thread.scm 421 */
					obj_t BgL_res2085z00_2831;

					{	/* Llib/thread.scm 421 */
						long BgL_objzd2classzd2numz00_2796;

						{	/* Llib/thread.scm 421 */
							long BgL_res2075z00_2799;

							BgL_res2075z00_2799 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_thz00_37));
							BgL_objzd2classzd2numz00_2796 = BgL_res2075z00_2799;
						}
						{	/* Llib/thread.scm 421 */
							obj_t BgL_arg1870z00_2797;

							BgL_arg1870z00_2797 =
								PROCEDURE_REF
								(BGl_threadzd2cleanupzd2setz12zd2envzc0zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 421 */
								int BgL_offsetz00_2801;

								BgL_offsetz00_2801 = (int) (BgL_objzd2classzd2numz00_2796);
								{	/* Llib/thread.scm 421 */
									long BgL_offsetz00_2802;

									BgL_offsetz00_2802 =
										((long) (BgL_offsetz00_2801) - OBJECT_TYPE);
									{	/* Llib/thread.scm 421 */
										long BgL_modz00_2803;

										BgL_modz00_2803 =
											(BgL_offsetz00_2802 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/thread.scm 421 */
											long BgL_restz00_2805;

											BgL_restz00_2805 =
												(BgL_offsetz00_2802 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/thread.scm 421 */

												{	/* Llib/thread.scm 421 */
													obj_t BgL_bucketz00_2807;

													BgL_bucketz00_2807 =
														VECTOR_REF(
														((obj_t) BgL_arg1870z00_2797), BgL_modz00_2803);
													BgL_res2085z00_2831 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2807), BgL_restz00_2805);
					}}}}}}}}
					BgL_method1194z00_1564 = BgL_res2085z00_2831;
				}
				return
					PROCEDURE_ENTRY(BgL_method1194z00_1564) (BgL_method1194z00_1564,
					((obj_t) BgL_thz00_37), BgL_vz00_38, BEOA);
			}
		}

	}



/* &thread-cleanup-set! */
	obj_t BGl_z62threadzd2cleanupzd2setz12z70zz__threadz00(obj_t BgL_envz00_3497,
		obj_t BgL_thz00_3498, obj_t BgL_vz00_3499)
	{
		{	/* Llib/thread.scm 421 */
			{	/* Llib/thread.scm 421 */
				BgL_threadz00_bglt BgL_auxz00_5197;

				if (BGl_isazf3zf3zz__objectz00(BgL_thz00_3498,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 421 */
						BgL_auxz00_5197 = ((BgL_threadz00_bglt) BgL_thz00_3498);
					}
				else
					{
						obj_t BgL_auxz00_5201;

						BgL_auxz00_5201 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 17866)), BGl_string2447z00zz__threadz00,
							BGl_string2297z00zz__threadz00, BgL_thz00_3498);
						FAILURE(BgL_auxz00_5201, BFALSE, BFALSE);
					}
				return
					BGl_threadzd2cleanupzd2setz12z12zz__threadz00(BgL_auxz00_5197,
					BgL_vz00_3499);
			}
		}

	}



/* %user-current-thread */
	BGL_EXPORTED_DEF obj_t
		BGl_z52userzd2currentzd2threadz52zz__threadz00(BgL_threadz00_bglt
		BgL_oz00_43)
	{
		{	/* Llib/thread.scm 432 */
			{	/* Llib/thread.scm 432 */
				obj_t BgL_method1201z00_1565;

				{	/* Llib/thread.scm 432 */
					obj_t BgL_res2096z00_2868;

					{	/* Llib/thread.scm 432 */
						long BgL_objzd2classzd2numz00_2833;

						{	/* Llib/thread.scm 432 */
							long BgL_res2086z00_2836;

							BgL_res2086z00_2836 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_oz00_43));
							BgL_objzd2classzd2numz00_2833 = BgL_res2086z00_2836;
						}
						{	/* Llib/thread.scm 432 */
							obj_t BgL_arg1870z00_2834;

							BgL_arg1870z00_2834 =
								PROCEDURE_REF
								(BGl_z52userzd2currentzd2threadzd2envz80zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 432 */
								int BgL_offsetz00_2838;

								BgL_offsetz00_2838 = (int) (BgL_objzd2classzd2numz00_2833);
								{	/* Llib/thread.scm 432 */
									long BgL_offsetz00_2839;

									BgL_offsetz00_2839 =
										((long) (BgL_offsetz00_2838) - OBJECT_TYPE);
									{	/* Llib/thread.scm 432 */
										long BgL_modz00_2840;

										BgL_modz00_2840 =
											(BgL_offsetz00_2839 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/thread.scm 432 */
											long BgL_restz00_2842;

											BgL_restz00_2842 =
												(BgL_offsetz00_2839 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/thread.scm 432 */

												{	/* Llib/thread.scm 432 */
													obj_t BgL_bucketz00_2844;

													BgL_bucketz00_2844 =
														VECTOR_REF(
														((obj_t) BgL_arg1870z00_2834), BgL_modz00_2840);
													BgL_res2096z00_2868 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2844), BgL_restz00_2842);
					}}}}}}}}
					BgL_method1201z00_1565 = BgL_res2096z00_2868;
				}
				return
					PROCEDURE_ENTRY(BgL_method1201z00_1565) (BgL_method1201z00_1565,
					((obj_t) BgL_oz00_43), BEOA);
			}
		}

	}



/* &%user-current-thread */
	obj_t BGl_z62z52userzd2currentzd2threadz30zz__threadz00(obj_t BgL_envz00_3500,
		obj_t BgL_oz00_3501)
	{
		{	/* Llib/thread.scm 432 */
			{	/* Llib/thread.scm 432 */
				BgL_threadz00_bglt BgL_auxz00_5236;

				if (BGl_isazf3zf3zz__objectz00(BgL_oz00_3501,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 432 */
						BgL_auxz00_5236 = ((BgL_threadz00_bglt) BgL_oz00_3501);
					}
				else
					{
						obj_t BgL_auxz00_5240;

						BgL_auxz00_5240 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 18494)), BGl_string2448z00zz__threadz00,
							BGl_string2297z00zz__threadz00, BgL_oz00_3501);
						FAILURE(BgL_auxz00_5240, BFALSE, BFALSE);
					}
				return BGl_z52userzd2currentzd2threadz52zz__threadz00(BgL_auxz00_5236);
			}
		}

	}



/* %user-thread-sleep! */
	BGL_EXPORTED_DEF obj_t
		BGl_z52userzd2threadzd2sleepz12z40zz__threadz00(BgL_threadz00_bglt
		BgL_oz00_44, obj_t BgL_dz00_45)
	{
		{	/* Llib/thread.scm 454 */
			{	/* Llib/thread.scm 454 */
				obj_t BgL_method1203z00_1566;

				{	/* Llib/thread.scm 454 */
					obj_t BgL_res2107z00_2905;

					{	/* Llib/thread.scm 454 */
						long BgL_objzd2classzd2numz00_2870;

						{	/* Llib/thread.scm 454 */
							long BgL_res2097z00_2873;

							BgL_res2097z00_2873 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_oz00_44));
							BgL_objzd2classzd2numz00_2870 = BgL_res2097z00_2873;
						}
						{	/* Llib/thread.scm 454 */
							obj_t BgL_arg1870z00_2871;

							BgL_arg1870z00_2871 =
								PROCEDURE_REF
								(BGl_z52userzd2threadzd2sleepz12zd2envz92zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 454 */
								int BgL_offsetz00_2875;

								BgL_offsetz00_2875 = (int) (BgL_objzd2classzd2numz00_2870);
								{	/* Llib/thread.scm 454 */
									long BgL_offsetz00_2876;

									BgL_offsetz00_2876 =
										((long) (BgL_offsetz00_2875) - OBJECT_TYPE);
									{	/* Llib/thread.scm 454 */
										long BgL_modz00_2877;

										BgL_modz00_2877 =
											(BgL_offsetz00_2876 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/thread.scm 454 */
											long BgL_restz00_2879;

											BgL_restz00_2879 =
												(BgL_offsetz00_2876 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/thread.scm 454 */

												{	/* Llib/thread.scm 454 */
													obj_t BgL_bucketz00_2881;

													BgL_bucketz00_2881 =
														VECTOR_REF(
														((obj_t) BgL_arg1870z00_2871), BgL_modz00_2877);
													BgL_res2107z00_2905 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2881), BgL_restz00_2879);
					}}}}}}}}
					BgL_method1203z00_1566 = BgL_res2107z00_2905;
				}
				return
					PROCEDURE_ENTRY(BgL_method1203z00_1566) (BgL_method1203z00_1566,
					((obj_t) BgL_oz00_44), BgL_dz00_45, BEOA);
			}
		}

	}



/* &%user-thread-sleep! */
	obj_t BGl_z62z52userzd2threadzd2sleepz12z22zz__threadz00(obj_t
		BgL_envz00_3502, obj_t BgL_oz00_3503, obj_t BgL_dz00_3504)
	{
		{	/* Llib/thread.scm 454 */
			{	/* Llib/thread.scm 454 */
				BgL_threadz00_bglt BgL_auxz00_5276;

				if (BGl_isazf3zf3zz__objectz00(BgL_oz00_3503,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 454 */
						BgL_auxz00_5276 = ((BgL_threadz00_bglt) BgL_oz00_3503);
					}
				else
					{
						obj_t BgL_auxz00_5280;

						BgL_auxz00_5280 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 19468)), BGl_string2449z00zz__threadz00,
							BGl_string2297z00zz__threadz00, BgL_oz00_3503);
						FAILURE(BgL_auxz00_5280, BFALSE, BFALSE);
					}
				return
					BGl_z52userzd2threadzd2sleepz12z40zz__threadz00(BgL_auxz00_5276,
					BgL_dz00_3504);
			}
		}

	}



/* %user-thread-yield! */
	BGL_EXPORTED_DEF obj_t
		BGl_z52userzd2threadzd2yieldz12z40zz__threadz00(BgL_threadz00_bglt
		BgL_oz00_47)
	{
		{	/* Llib/thread.scm 481 */
			{	/* Llib/thread.scm 481 */
				obj_t BgL_method1205z00_1567;

				{	/* Llib/thread.scm 481 */
					obj_t BgL_res2118z00_2942;

					{	/* Llib/thread.scm 481 */
						long BgL_objzd2classzd2numz00_2907;

						{	/* Llib/thread.scm 481 */
							long BgL_res2108z00_2910;

							BgL_res2108z00_2910 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_oz00_47));
							BgL_objzd2classzd2numz00_2907 = BgL_res2108z00_2910;
						}
						{	/* Llib/thread.scm 481 */
							obj_t BgL_arg1870z00_2908;

							BgL_arg1870z00_2908 =
								PROCEDURE_REF
								(BGl_z52userzd2threadzd2yieldz12zd2envz92zz__threadz00,
								(int) (((long) 1)));
							{	/* Llib/thread.scm 481 */
								int BgL_offsetz00_2912;

								BgL_offsetz00_2912 = (int) (BgL_objzd2classzd2numz00_2907);
								{	/* Llib/thread.scm 481 */
									long BgL_offsetz00_2913;

									BgL_offsetz00_2913 =
										((long) (BgL_offsetz00_2912) - OBJECT_TYPE);
									{	/* Llib/thread.scm 481 */
										long BgL_modz00_2914;

										BgL_modz00_2914 =
											(BgL_offsetz00_2913 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/thread.scm 481 */
											long BgL_restz00_2916;

											BgL_restz00_2916 =
												(BgL_offsetz00_2913 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/thread.scm 481 */

												{	/* Llib/thread.scm 481 */
													obj_t BgL_bucketz00_2918;

													BgL_bucketz00_2918 =
														VECTOR_REF(
														((obj_t) BgL_arg1870z00_2908), BgL_modz00_2914);
													BgL_res2118z00_2942 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2918), BgL_restz00_2916);
					}}}}}}}}
					BgL_method1205z00_1567 = BgL_res2118z00_2942;
				}
				return
					PROCEDURE_ENTRY(BgL_method1205z00_1567) (BgL_method1205z00_1567,
					((obj_t) BgL_oz00_47), BEOA);
			}
		}

	}



/* &%user-thread-yield! */
	obj_t BGl_z62z52userzd2threadzd2yieldz12z22zz__threadz00(obj_t
		BgL_envz00_3505, obj_t BgL_oz00_3506)
	{
		{	/* Llib/thread.scm 481 */
			{	/* Llib/thread.scm 481 */
				BgL_threadz00_bglt BgL_auxz00_5315;

				if (BGl_isazf3zf3zz__objectz00(BgL_oz00_3506,
						BGl_threadz00zz__threadz00))
					{	/* Llib/thread.scm 481 */
						BgL_auxz00_5315 = ((BgL_threadz00_bglt) BgL_oz00_3506);
					}
				else
					{
						obj_t BgL_auxz00_5319;

						BgL_auxz00_5319 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2290z00zz__threadz00,
							BINT(((long) 20564)), BGl_string2450z00zz__threadz00,
							BGl_string2297z00zz__threadz00, BgL_oz00_3506);
						FAILURE(BgL_auxz00_5319, BFALSE, BFALSE);
					}
				return BGl_z52userzd2threadzd2yieldz12z40zz__threadz00(BgL_auxz00_5315);
			}
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__threadz00()
	{
		{	/* Llib/thread.scm 17 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tbzd2makezd2threadzd2envzd2zz__threadz00,
				BGl_nothreadzd2backendzd2zz__threadz00, BGl_proc2451z00zz__threadz00,
				BGl_string2452z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tbzd2currentzd2threadzd2envzd2zz__threadz00,
				BGl_nothreadzd2backendzd2zz__threadz00, BGl_proc2453z00zz__threadz00,
				BGl_string2454z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2displayzd2envz00zz__objectz00, BGl_threadz00zz__threadz00,
				BGl_proc2455z00zz__threadz00, BGl_string2456z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2writezd2envz00zz__objectz00, BGl_threadz00zz__threadz00,
				BGl_proc2457z00zz__threadz00, BGl_string2458z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2printzd2envz00zz__objectz00, BGl_threadz00zz__threadz00,
				BGl_proc2459z00zz__threadz00, BGl_string2460z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_threadzd2startz12zd2envz12zz__threadz00,
				BGl_nothreadz00zz__threadz00, BGl_proc2461z00zz__threadz00,
				BGl_string2462z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_threadzd2startzd2joinablez12zd2envzc0zz__threadz00,
				BGl_nothreadz00zz__threadz00, BGl_proc2463z00zz__threadz00,
				BGl_string2464z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_threadzd2joinz12zd2envz12zz__threadz00,
				BGl_nothreadz00zz__threadz00, BGl_proc2465z00zz__threadz00,
				BGl_string2466z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_threadzd2terminatez12zd2envz12zz__threadz00,
				BGl_nothreadz00zz__threadz00, BGl_proc2467z00zz__threadz00,
				BGl_string2468z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_threadzd2specificzd2envz00zz__threadz00,
				BGl_nothreadz00zz__threadz00, BGl_proc2469z00zz__threadz00,
				BGl_string2470z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_threadzd2specificzd2setz12zd2envzc0zz__threadz00,
				BGl_nothreadz00zz__threadz00, BGl_proc2471z00zz__threadz00,
				BGl_string2472z00zz__threadz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_threadzd2cleanupzd2envz00zz__threadz00,
				BGl_nothreadz00zz__threadz00, BGl_proc2473z00zz__threadz00,
				BGl_string2474z00zz__threadz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_threadzd2cleanupzd2setz12zd2envzc0zz__threadz00,
				BGl_nothreadz00zz__threadz00, BGl_proc2475z00zz__threadz00,
				BGl_string2476z00zz__threadz00);
		}

	}



/* &thread-cleanup-set!-1221 */
	obj_t BGl_z62threadzd2cleanupzd2setz12zd21221za2zz__threadz00(obj_t
		BgL_envz00_3525, obj_t BgL_thz00_3526, obj_t BgL_vz00_3527)
	{
		{	/* Llib/thread.scm 571 */
			return
				((((BgL_nothreadz00_bglt) COBJECT(
							((BgL_nothreadz00_bglt) BgL_thz00_3526)))->BgL_z52cleanupz52) =
				((obj_t) BgL_vz00_3527), BUNSPEC);
		}

	}



/* &thread-cleanup-nothr1219 */
	obj_t BGl_z62threadzd2cleanupzd2nothr1219z62zz__threadz00(obj_t
		BgL_envz00_3528, obj_t BgL_thz00_3529)
	{
		{	/* Llib/thread.scm 565 */
			return
				(((BgL_nothreadz00_bglt) COBJECT(
						((BgL_nothreadz00_bglt) BgL_thz00_3529)))->BgL_z52cleanupz52);
		}

	}



/* &thread-specific-set!1217 */
	obj_t BGl_z62threadzd2specificzd2setz121217z70zz__threadz00(obj_t
		BgL_envz00_3530, obj_t BgL_thz00_3531, obj_t BgL_vz00_3532)
	{
		{	/* Llib/thread.scm 559 */
			return
				((((BgL_nothreadz00_bglt) COBJECT(
							((BgL_nothreadz00_bglt) BgL_thz00_3531)))->BgL_z52specificz52) =
				((obj_t) BgL_vz00_3532), BUNSPEC);
		}

	}



/* &thread-specific-noth1215 */
	obj_t BGl_z62threadzd2specificzd2noth1215z62zz__threadz00(obj_t
		BgL_envz00_3533, obj_t BgL_thz00_3534)
	{
		{	/* Llib/thread.scm 553 */
			return
				(((BgL_nothreadz00_bglt) COBJECT(
						((BgL_nothreadz00_bglt) BgL_thz00_3534)))->BgL_z52specificz52);
		}

	}



/* &thread-terminate!-no1213 */
	obj_t BGl_z62threadzd2terminatez12zd2no1213z70zz__threadz00(obj_t
		BgL_envz00_3535, obj_t BgL_thz00_3536)
	{
		{	/* Llib/thread.scm 545 */
			{	/* Llib/thread.scm 547 */
				bool_t BgL_test2755z00_5345;

				{	/* Llib/thread.scm 547 */
					obj_t BgL_tmpz00_5346;

					BgL_tmpz00_5346 =
						(((BgL_nothreadz00_bglt) COBJECT(
								((BgL_nothreadz00_bglt) BgL_thz00_3536)))->BgL_z52cleanupz52);
					BgL_test2755z00_5345 = PROCEDUREP(BgL_tmpz00_5346);
				}
				if (BgL_test2755z00_5345)
					{	/* Llib/thread.scm 547 */
						obj_t BgL_fun1535z00_3860;

						BgL_fun1535z00_3860 =
							(((BgL_nothreadz00_bglt) COBJECT(
									((BgL_nothreadz00_bglt) BgL_thz00_3536)))->BgL_z52cleanupz52);
						PROCEDURE_ENTRY(BgL_fun1535z00_3860) (BgL_fun1535z00_3860, BEOA);
					}
				else
					{	/* Llib/thread.scm 547 */
						BFALSE;
					}
			}
			{	/* Llib/thread.scm 548 */
				obj_t BgL_list1537z00_3861;

				BgL_list1537z00_3861 = MAKE_YOUNG_PAIR(BINT(((long) 0)), BNIL);
				return BGl_exitz00zz__errorz00(BgL_list1537z00_3861);
			}
		}

	}



/* &thread-join!-nothrea1211 */
	obj_t BGl_z62threadzd2joinz12zd2nothrea1211z70zz__threadz00(obj_t
		BgL_envz00_3537, obj_t BgL_thz00_3538, obj_t BgL_timeoutz00_3539)
	{
		{	/* Llib/thread.scm 536 */
			{	/* Llib/thread.scm 538 */
				bool_t BgL_test2756z00_5358;

				{	/* Llib/thread.scm 538 */
					obj_t BgL_arg1531z00_3863;

					BgL_arg1531z00_3863 =
						(((BgL_nothreadz00_bglt) COBJECT(
								((BgL_nothreadz00_bglt) BgL_thz00_3538)))->
						BgL_endzd2exceptionzd2);
					BgL_test2756z00_5358 =
						BGl_isazf3zf3zz__objectz00(BgL_arg1531z00_3863,
						BGl_z62exceptionz62zz__objectz00);
				}
				if (BgL_test2756z00_5358)
					{	/* Llib/thread.scm 538 */
						return
							BGl_raisez00zz__errorz00(
							(((BgL_nothreadz00_bglt) COBJECT(
										((BgL_nothreadz00_bglt) BgL_thz00_3538)))->
								BgL_endzd2exceptionzd2));
					}
				else
					{	/* Llib/thread.scm 538 */
						return
							(((BgL_nothreadz00_bglt) COBJECT(
									((BgL_nothreadz00_bglt) BgL_thz00_3538)))->
							BgL_endzd2resultzd2);
					}
			}
		}

	}



/* &thread-start-joinabl1209 */
	obj_t BGl_z62threadzd2startzd2joinabl1209z62zz__threadz00(obj_t
		BgL_envz00_3540, obj_t BgL_thz00_3541)
	{
		{	/* Llib/thread.scm 530 */
			return
				BGl_threadzd2startz12zc0zz__threadz00(
				((BgL_threadz00_bglt) ((BgL_nothreadz00_bglt) BgL_thz00_3541)), BNIL);
		}

	}



/* &thread-start!-nothre1207 */
	obj_t BGl_z62threadzd2startz12zd2nothre1207z70zz__threadz00(obj_t
		BgL_envz00_3542, obj_t BgL_thz00_3543, obj_t BgL_scdz00_3544)
	{
		{	/* Llib/thread.scm 514 */
			{	/* Llib/thread.scm 515 */
				obj_t BgL_threadz00_3866;

				BgL_threadz00_3866 = BGl_za2nothreadzd2currentza2zd2zz__threadz00;
				{	/* Llib/thread.scm 516 */
					obj_t BgL_exitd1065z00_3867;

					BgL_exitd1065z00_3867 = BGL_EXITD_TOP_AS_OBJ();
					{	/* Llib/thread.scm 525 */
						obj_t BgL_zc3z04anonymousza31524ze3z87_3868;

						BgL_zc3z04anonymousza31524ze3z87_3868 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31524ze3ze5zz__threadz00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31524ze3z87_3868,
							(int) (((long) 0)), BgL_threadz00_3866);
						BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1065z00_3867,
							BgL_zc3z04anonymousza31524ze3z87_3868);
						{	/* Llib/thread.scm 517 */
							BgL_nothreadz00_bglt BgL_tmp1067z00_3869;

							BGl_za2nothreadzd2currentza2zd2zz__threadz00 =
								((obj_t) ((BgL_nothreadz00_bglt) BgL_thz00_3543));
							{	/* Llib/thread.scm 519 */
								obj_t BgL_res1071z00_3870;

								BgL_res1071z00_3870 = MAKE_CELL(BUNSPEC);
								if (CBOOL(BGl_zc3z04exitza31515ze3ze70z60zz__threadz00(
											((BgL_nothreadz00_bglt) BgL_thz00_3543),
											BgL_res1071z00_3870)))
									{	/* Llib/thread.scm 519 */
										obj_t BgL_ez00_3871;

										BgL_ez00_3871 = CELL_REF(BgL_res1071z00_3870);
										((((BgL_nothreadz00_bglt) COBJECT(
														((BgL_nothreadz00_bglt) BgL_thz00_3543)))->
												BgL_endzd2exceptionzd2) =
											((obj_t) BgL_ez00_3871), BUNSPEC);
										BGl_raisez00zz__errorz00(BgL_ez00_3871);
									}
								else
									{	/* Llib/thread.scm 519 */
										CELL_REF(BgL_res1071z00_3870);
									}
							}
							BgL_tmp1067z00_3869 = ((BgL_nothreadz00_bglt) BgL_thz00_3543);
							BGl_exitdzd2popzd2protectz12z12zz__bexitz00
								(BgL_exitd1065z00_3867);
							BGl_za2nothreadzd2currentza2zd2zz__threadz00 = BgL_threadz00_3866;
							return ((obj_t) BgL_tmp1067z00_3869);
						}
					}
				}
			}
		}

	}



/* <@exit:1515>~0 */
	obj_t BGl_zc3z04exitza31515ze3ze70z60zz__threadz00(BgL_nothreadz00_bglt
		BgL_i1068z00_3588, obj_t BgL_res1071z00_3587)
	{
		{	/* Llib/thread.scm 519 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1077z00_1660;

			if (SET_EXIT(BgL_an_exit1077z00_1660))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1077z00_1660 = (void *) jmpbuf;
					{	/* Llib/thread.scm 519 */

						PUSH_EXIT(BgL_an_exit1077z00_1660, ((long) 1));
						{	/* Llib/thread.scm 519 */
							obj_t BgL_an_exitd1078z00_1661;

							BgL_an_exitd1078z00_1661 = ((obj_t) (&exitd));
							{	/* Llib/thread.scm 519 */
								bool_t BgL_res1080z00_1664;

								{	/* Llib/thread.scm 519 */
									obj_t BgL_ohs1069z00_1665;

									BgL_ohs1069z00_1665 = BGL_ERROR_HANDLER_GET();
									{	/* Llib/thread.scm 519 */
										obj_t BgL_exitd1074z00_1666;

										BgL_exitd1074z00_1666 = ((obj_t) (&exitd));
										{
											obj_t BgL_zc3z04anonymousza31522ze3z87_3515;

											BgL_zc3z04anonymousza31522ze3z87_3515 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31522ze3ze5zz__threadz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31522ze3z87_3515,
												(int) (((long) 0)), BgL_ohs1069z00_1665);
											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
												(BgL_exitd1074z00_1666,
												BgL_zc3z04anonymousza31522ze3z87_3515);
											{	/* Llib/thread.scm 519 */
												bool_t BgL_tmp1076z00_1668;

												{	/* Llib/thread.scm 519 */
													obj_t BgL_arg1516z00_1669;

													{	/* Llib/thread.scm 519 */
														obj_t BgL_zc3z04anonymousza31519ze3z87_3516;

														BgL_zc3z04anonymousza31519ze3z87_3516 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31519ze3ze5zz__threadz00,
															(int) (((long) 1)), (int) (((long) 2)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31519ze3z87_3516,
															(int) (((long) 0)),
															((obj_t) BgL_res1071z00_3587));
														PROCEDURE_SET(BgL_zc3z04anonymousza31519ze3z87_3516,
															(int) (((long) 1)), BgL_an_exitd1078z00_1661);
														BgL_arg1516z00_1669 =
															MAKE_YOUNG_PAIR
															(BgL_zc3z04anonymousza31519ze3z87_3516,
															BgL_ohs1069z00_1665);
													}
													BGL_ERROR_HANDLER_SET(BgL_arg1516z00_1669);
													BUNSPEC;
												}
												{	/* Llib/thread.scm 519 */
													obj_t BgL_auxz00_3546;

													{
														obj_t BgL_auxz00_5409;

														{	/* Llib/thread.scm 523 */
															obj_t BgL_fun1521z00_1674;

															BgL_fun1521z00_1674 =
																(((BgL_nothreadz00_bglt)
																	COBJECT(BgL_i1068z00_3588))->BgL_bodyz00);
															BgL_auxz00_5409 =
																PROCEDURE_ENTRY(BgL_fun1521z00_1674)
																(BgL_fun1521z00_1674, BEOA);
														}
														BgL_auxz00_3546 =
															((((BgL_nothreadz00_bglt)
																	COBJECT(BgL_i1068z00_3588))->
																BgL_endzd2resultzd2) =
															((obj_t) BgL_auxz00_5409), BUNSPEC);
													}
													CELL_SET(BgL_res1071z00_3587, BgL_auxz00_3546);
												}
												BgL_tmp1076z00_1668 = ((bool_t) 0);
												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
													(BgL_exitd1074z00_1666);
												BGL_ERROR_HANDLER_SET(BgL_ohs1069z00_1665);
												BUNSPEC;
												BgL_res1080z00_1664 = BgL_tmp1076z00_1668;
								}}}}
								POP_EXIT();
								return BBOOL(BgL_res1080z00_1664);
							}
						}
					}
				}
		}

	}



/* &<@anonymous:1519> */
	obj_t BGl_z62zc3z04anonymousza31519ze3ze5zz__threadz00(obj_t BgL_envz00_3548,
		obj_t BgL_ez00_3551)
	{
		{	/* Llib/thread.scm 519 */
			{	/* Llib/thread.scm 519 */
				obj_t BgL_res1071z00_3549;
				obj_t BgL_an_exitd1078z00_3550;

				BgL_res1071z00_3549 =
					PROCEDURE_REF(BgL_envz00_3548, (int) (((long) 0)));
				BgL_an_exitd1078z00_3550 =
					PROCEDURE_REF(BgL_envz00_3548, (int) (((long) 1)));
				CELL_SET(BgL_res1071z00_3549, BgL_ez00_3551);
				return
					BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1078z00_3550, BTRUE);
			}
		}

	}



/* &<@anonymous:1522> */
	obj_t BGl_z62zc3z04anonymousza31522ze3ze5zz__threadz00(obj_t BgL_envz00_3553)
	{
		{	/* Llib/thread.scm 519 */
			{
				obj_t BgL_ohs1069z00_3554;

				BgL_ohs1069z00_3554 =
					PROCEDURE_REF(BgL_envz00_3553, (int) (((long) 0)));
				BGL_ERROR_HANDLER_SET(BgL_ohs1069z00_3554);
				return BUNSPEC;
			}
		}

	}



/* &<@anonymous:1524> */
	obj_t BGl_z62zc3z04anonymousza31524ze3ze5zz__threadz00(obj_t BgL_envz00_3555)
	{
		{	/* Llib/thread.scm 516 */
			{	/* Llib/thread.scm 525 */
				obj_t BgL_threadz00_3556;

				BgL_threadz00_3556 = PROCEDURE_REF(BgL_envz00_3555, (int) (((long) 0)));
				return (BGl_za2nothreadzd2currentza2zd2zz__threadz00 =
					BgL_threadz00_3556, BUNSPEC);
			}
		}

	}



/* &object-print-thread1174 */
	obj_t BGl_z62objectzd2printzd2thread1174z62zz__threadz00(obj_t
		BgL_envz00_3557, obj_t BgL_oz00_3558, obj_t BgL_portz00_3559,
		obj_t BgL_printzd2slotzd2_3560)
	{
		{	/* Llib/thread.scm 374 */
			{	/* Llib/thread.scm 375 */
				obj_t BgL_list1507z00_3873;

				BgL_list1507z00_3873 = MAKE_YOUNG_PAIR(BgL_portz00_3559, BNIL);
				return
					BGl_objectzd2writezd2zz__objectz00(
					((BgL_objectz00_bglt)
						((BgL_threadz00_bglt) BgL_oz00_3558)), BgL_list1507z00_3873);
			}
		}

	}



/* &object-write-thread1172 */
	obj_t BGl_z62objectzd2writezd2thread1172z62zz__threadz00(obj_t
		BgL_envz00_3561, obj_t BgL_oz00_3562, obj_t BgL_portz00_3563)
	{
		{	/* Llib/thread.scm 365 */
			{	/* Llib/thread.scm 366 */
				obj_t BgL_arg1489z00_3875;

				if (PAIRP(BgL_portz00_3563))
					{	/* Llib/thread.scm 366 */
						BgL_arg1489z00_3875 = CAR(BgL_portz00_3563);
					}
				else
					{	/* Llib/thread.scm 366 */
						obj_t BgL_res2125z00_3876;

						{	/* Llib/thread.scm 366 */
							obj_t BgL_tmpz00_5436;

							BgL_tmpz00_5436 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2125z00_3876 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5436);
						}
						BgL_arg1489z00_3875 = BgL_res2125z00_3876;
					}
				{	/* Llib/thread.scm 368 */
					obj_t BgL_zc3z04anonymousza31493ze3z87_3877;

					BgL_zc3z04anonymousza31493ze3z87_3877 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31493ze3ze5zz__threadz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31493ze3z87_3877,
						(int) (((long) 0)), ((obj_t) ((BgL_threadz00_bglt) BgL_oz00_3562)));
					return
						BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00
						(BgL_arg1489z00_3875, BgL_zc3z04anonymousza31493ze3z87_3877);
				}
			}
		}

	}



/* &<@anonymous:1493> */
	obj_t BGl_z62zc3z04anonymousza31493ze3ze5zz__threadz00(obj_t BgL_envz00_3564)
	{
		{	/* Llib/thread.scm 367 */
			{	/* Llib/thread.scm 368 */
				BgL_threadz00_bglt BgL_oz00_3565;

				BgL_oz00_3565 =
					((BgL_threadz00_bglt)
					PROCEDURE_REF(BgL_envz00_3564, (int) (((long) 0))));
				{	/* Llib/thread.scm 369 */
					obj_t BgL_arg1494z00_3878;
					obj_t BgL_arg1495z00_3879;

					{	/* Llib/thread.scm 369 */
						obj_t BgL_arg1505z00_3880;

						{	/* Llib/thread.scm 369 */
							long BgL_arg1873z00_3881;

							{	/* Llib/thread.scm 369 */
								long BgL_arg1874z00_3882;

								{	/* Llib/thread.scm 369 */
									long BgL_res2126z00_3883;

									BgL_res2126z00_3883 =
										BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_oz00_3565));
									BgL_arg1874z00_3882 = BgL_res2126z00_3883;
								}
								BgL_arg1873z00_3881 = (BgL_arg1874z00_3882 - OBJECT_TYPE);
							}
							BgL_arg1505z00_3880 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1873z00_3881);
						}
						BgL_arg1494z00_3878 =
							BGl_classzd2namezd2zz__objectz00(BgL_arg1505z00_3880);
					}
					BgL_arg1495z00_3879 =
						(((BgL_threadz00_bglt) COBJECT(BgL_oz00_3565))->BgL_namez00);
					{	/* Llib/thread.scm 369 */
						obj_t BgL_list1496z00_3884;

						{	/* Llib/thread.scm 369 */
							obj_t BgL_arg1497z00_3885;

							{	/* Llib/thread.scm 369 */
								obj_t BgL_arg1498z00_3886;

								{	/* Llib/thread.scm 369 */
									obj_t BgL_arg1500z00_3887;

									{	/* Llib/thread.scm 369 */
										obj_t BgL_arg1502z00_3888;

										BgL_arg1502z00_3888 =
											MAKE_YOUNG_PAIR(BGl_string2477z00zz__threadz00, BNIL);
										BgL_arg1500z00_3887 =
											MAKE_YOUNG_PAIR(BgL_arg1495z00_3879, BgL_arg1502z00_3888);
									}
									BgL_arg1498z00_3886 =
										MAKE_YOUNG_PAIR(BGl_string2478z00zz__threadz00,
										BgL_arg1500z00_3887);
								}
								BgL_arg1497z00_3885 =
									MAKE_YOUNG_PAIR(BgL_arg1494z00_3878, BgL_arg1498z00_3886);
							}
							BgL_list1496z00_3884 =
								MAKE_YOUNG_PAIR(BGl_string2479z00zz__threadz00,
								BgL_arg1497z00_3885);
						}
						return
							BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list1496z00_3884);
					}
				}
			}
		}

	}



/* &object-display-threa1170 */
	obj_t BGl_z62objectzd2displayzd2threa1170z62zz__threadz00(obj_t
		BgL_envz00_3566, obj_t BgL_oz00_3567, obj_t BgL_portz00_3568)
	{
		{	/* Llib/thread.scm 356 */
			{	/* Llib/thread.scm 357 */
				obj_t BgL_arg1474z00_3890;

				if (PAIRP(BgL_portz00_3568))
					{	/* Llib/thread.scm 357 */
						BgL_arg1474z00_3890 = CAR(BgL_portz00_3568);
					}
				else
					{	/* Llib/thread.scm 357 */
						obj_t BgL_res2121z00_3891;

						{	/* Llib/thread.scm 357 */
							obj_t BgL_tmpz00_5465;

							BgL_tmpz00_5465 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2121z00_3891 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5465);
						}
						BgL_arg1474z00_3890 = BgL_res2121z00_3891;
					}
				{	/* Llib/thread.scm 359 */
					obj_t BgL_zc3z04anonymousza31477ze3z87_3892;

					BgL_zc3z04anonymousza31477ze3z87_3892 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31477ze3ze5zz__threadz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31477ze3z87_3892,
						(int) (((long) 0)), ((obj_t) ((BgL_threadz00_bglt) BgL_oz00_3567)));
					return
						BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00
						(BgL_arg1474z00_3890, BgL_zc3z04anonymousza31477ze3z87_3892);
				}
			}
		}

	}



/* &<@anonymous:1477> */
	obj_t BGl_z62zc3z04anonymousza31477ze3ze5zz__threadz00(obj_t BgL_envz00_3569)
	{
		{	/* Llib/thread.scm 358 */
			{	/* Llib/thread.scm 359 */
				BgL_threadz00_bglt BgL_oz00_3570;

				BgL_oz00_3570 =
					((BgL_threadz00_bglt)
					PROCEDURE_REF(BgL_envz00_3569, (int) (((long) 0))));
				{	/* Llib/thread.scm 360 */
					obj_t BgL_arg1478z00_3893;
					obj_t BgL_arg1479z00_3894;

					{	/* Llib/thread.scm 360 */
						obj_t BgL_arg1487z00_3895;

						{	/* Llib/thread.scm 360 */
							long BgL_arg1873z00_3896;

							{	/* Llib/thread.scm 360 */
								long BgL_arg1874z00_3897;

								{	/* Llib/thread.scm 360 */
									long BgL_res2122z00_3898;

									BgL_res2122z00_3898 =
										BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_oz00_3570));
									BgL_arg1874z00_3897 = BgL_res2122z00_3898;
								}
								BgL_arg1873z00_3896 = (BgL_arg1874z00_3897 - OBJECT_TYPE);
							}
							BgL_arg1487z00_3895 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1873z00_3896);
						}
						BgL_arg1478z00_3893 =
							BGl_classzd2namezd2zz__objectz00(BgL_arg1487z00_3895);
					}
					BgL_arg1479z00_3894 =
						(((BgL_threadz00_bglt) COBJECT(BgL_oz00_3570))->BgL_namez00);
					{	/* Llib/thread.scm 360 */
						obj_t BgL_list1480z00_3899;

						{	/* Llib/thread.scm 360 */
							obj_t BgL_arg1483z00_3900;

							{	/* Llib/thread.scm 360 */
								obj_t BgL_arg1484z00_3901;

								{	/* Llib/thread.scm 360 */
									obj_t BgL_arg1485z00_3902;

									{	/* Llib/thread.scm 360 */
										obj_t BgL_arg1486z00_3903;

										BgL_arg1486z00_3903 =
											MAKE_YOUNG_PAIR(BGl_string2477z00zz__threadz00, BNIL);
										BgL_arg1485z00_3902 =
											MAKE_YOUNG_PAIR(BgL_arg1479z00_3894, BgL_arg1486z00_3903);
									}
									BgL_arg1484z00_3901 =
										MAKE_YOUNG_PAIR(BGl_string2478z00zz__threadz00,
										BgL_arg1485z00_3902);
								}
								BgL_arg1483z00_3900 =
									MAKE_YOUNG_PAIR(BgL_arg1478z00_3893, BgL_arg1484z00_3901);
							}
							BgL_list1480z00_3899 =
								MAKE_YOUNG_PAIR(BGl_string2479z00zz__threadz00,
								BgL_arg1483z00_3900);
						}
						return
							BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list1480z00_3899);
					}
				}
			}
		}

	}



/* &tb-current-thread-no1164 */
	obj_t BGl_z62tbzd2currentzd2threadzd2no1164zb0zz__threadz00(obj_t
		BgL_envz00_3571, obj_t BgL_tbz00_3572)
	{
		{	/* Llib/thread.scm 340 */
			return BGl_za2nothreadzd2currentza2zd2zz__threadz00;
		}

	}



/* &tb-make-thread-nothr1162 */
	BgL_threadz00_bglt BGl_z62tbzd2makezd2threadzd2nothr1162zb0zz__threadz00(obj_t
		BgL_envz00_3573, obj_t BgL_tbz00_3574, obj_t BgL_bodyz00_3575,
		obj_t BgL_namez00_3576)
	{
		{	/* Llib/thread.scm 332 */
			{	/* Llib/thread.scm 333 */
				BgL_nothreadz00_bglt BgL_new1060z00_3906;

				{	/* Llib/thread.scm 335 */
					BgL_nothreadz00_bglt BgL_new1059z00_3907;

					BgL_new1059z00_3907 =
						((BgL_nothreadz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_nothreadz00_bgl))));
					{	/* Llib/thread.scm 335 */
						long BgL_arg1473z00_3908;

						{	/* Llib/thread.scm 335 */
							long BgL_res2119z00_3909;

							BgL_res2119z00_3909 =
								BGL_CLASS_INDEX(BGl_nothreadz00zz__threadz00);
							BgL_arg1473z00_3908 = BgL_res2119z00_3909;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1059z00_3907), BgL_arg1473z00_3908);
					}
					BgL_new1060z00_3906 = BgL_new1059z00_3907;
				}
				((((BgL_threadz00_bglt) COBJECT(
								((BgL_threadz00_bglt) BgL_new1060z00_3906)))->BgL_namez00) =
					((obj_t) BgL_namez00_3576), BUNSPEC);
				((((BgL_nothreadz00_bglt) COBJECT(BgL_new1060z00_3906))->BgL_bodyz00) =
					((obj_t) BgL_bodyz00_3575), BUNSPEC);
				((((BgL_nothreadz00_bglt) COBJECT(BgL_new1060z00_3906))->
						BgL_z52specificz52) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nothreadz00_bglt) COBJECT(BgL_new1060z00_3906))->
						BgL_z52cleanupz52) = ((obj_t) BFALSE), BUNSPEC);
				((((BgL_nothreadz00_bglt) COBJECT(BgL_new1060z00_3906))->
						BgL_endzd2resultzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nothreadz00_bglt) COBJECT(BgL_new1060z00_3906))->
						BgL_endzd2exceptionzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				{	/* Llib/thread.scm 333 */
					obj_t BgL_fun1472z00_3910;

					BgL_fun1472z00_3910 =
						BGl_classzd2constructorzd2zz__objectz00
						(BGl_nothreadz00zz__threadz00);
					PROCEDURE_ENTRY(BgL_fun1472z00_3910) (BgL_fun1472z00_3910,
						((obj_t) BgL_new1060z00_3906), BEOA);
				}
				return ((BgL_threadz00_bglt) BgL_new1060z00_3906);
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__threadz00()
	{
		{	/* Llib/thread.scm 17 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2331z00zz__threadz00));
			return
				BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2331z00zz__threadz00));
		}

	}

#ifdef __cplusplus
}
#endif
