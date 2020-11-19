/*===========================================================================*/
/*   (Unsafe/bignumber.scm)                                                  */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Unsafe/bignumber.scm -indent -o objs/obj_u/Unsafe/bignumber.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

/* User header */
#if( BGL_HAVE_GMP == 0 )
#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62z42z42bignumzd2ze3flonumz53zz__bignumz00(obj_t, obj_t);
	static BGL_LONGLONG_T
		BGl_bignumzd2minzd2llongzd2divzd2radixz00zz__bignumz00();
	extern obj_t BGl_u8vectorzd2ze3listz31zz__srfi4z00(obj_t);
	extern obj_t BGl_makezd2u8vectorzd2zz__srfi4z00(long, uint8_t);
	static obj_t BGl_z62z42z42stringzd2ze3bignumz53zz__bignumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t bgl_bignum_neg(obj_t);
	static obj_t BGl_z62z42z42za2bxzc0zz__bignumz00(obj_t, obj_t, obj_t);
	static obj_t BGl_bignumzd2ze3fixnumzd2listze3zz__bignumz00(obj_t, long);
	static obj_t BGl_requirezd2initializa7ationz75zz__bignumz00 = BUNSPEC;
	static obj_t BGl_z62z42z42quotientbxz62zz__bignumz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62z42z42randbxz62zz__bignumz00(obj_t, obj_t);
	static obj_t BGl_bignumzd2sum2zd2zz__bignumz00(obj_t, obj_t, long, long);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t bgl_bignum_sub(obj_t, obj_t);
	static obj_t BGl_z62z42z42zb2bxzd0zz__bignumz00(obj_t, obj_t, obj_t);
	static obj_t BGl_bignumzd2exptzd2zz__bignumz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__bignumz00();
	static obj_t BGl_z62z42z42uint64zd2ze3bignumz53zz__bignumz00(obj_t, obj_t);
	static obj_t BGl_convertze70ze7zz__bignumz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_assvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t bgl_reverse(obj_t);
	static obj_t BGl_z62z42z42positivebxzf3z91zz__bignumz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__bignumz00();
	static long BGl_bignumzd2signzd2zz__bignumz00(obj_t);
	extern long bgl_bignum_to_long(obj_t);
	static obj_t BGl_objectzd2initzd2zz__bignumz00();
	extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	extern obj_t bgl_bignum_mul(obj_t, obj_t);
	extern obj_t BGl_memvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62z42z42zd2bxzb0zz__bignumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long bgl_bignum_to_long(obj_t);
	static obj_t BGl_z62z42z42gcdbxz62zz__bignumz00(obj_t, obj_t, obj_t);
	static obj_t BGl_bignumzd2removezd2leadingzd2za7eroesz75zz__bignumz00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t make_vector(long, obj_t);
	BGL_EXPORTED_DECL bool_t BXNEGATIVE(obj_t);
	static obj_t BGl_methodzd2initzd2zz__bignumz00();
	static obj_t BGl_list3219z00zz__bignumz00 = BUNSPEC;
	static bool_t BGl_z42zc3bxz81zz__bignumz00(obj_t, obj_t);
	static obj_t BGl_z62z42z42evenbxzf3z91zz__bignumz00(obj_t, obj_t);
	static obj_t BGl_z62z42z42absbxz62zz__bignumz00(obj_t, obj_t);
	static obj_t BGl_list3222z00zz__bignumz00 = BUNSPEC;
	static obj_t BGl_list3223z00zz__bignumz00 = BUNSPEC;
	static obj_t BGl_list3224z00zz__bignumz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t bgl_rand_bignum(obj_t);
	static obj_t BGl_list3225z00zz__bignumz00 = BUNSPEC;
	static obj_t BGl_list3226z00zz__bignumz00 = BUNSPEC;
	static obj_t BGl_z62z42z42za7erobxzf3z36zz__bignumz00(obj_t, obj_t);
	static obj_t BGl_list3227z00zz__bignumz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t bgl_llong_to_bignum(BGL_LONGLONG_T);
	static obj_t BGl_z62z42z42llongzd2ze3bignumz53zz__bignumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_string_to_integer_obj(char *, long);
	static obj_t BGl_bignumzd2divzd2zz__bignumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_bignum_div(obj_t, obj_t);
	extern obj_t bgl_long_to_bignum(long);
	extern obj_t BGl_quotientz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl_z62z42z42bignumzd2ze3fixnumz53zz__bignumz00(obj_t, obj_t);
	static obj_t BGl_z62z42z42lcmbxz62zz__bignumz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t bgl_bignum_even(obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T bgl_bignum_to_llong(obj_t);
	BGL_EXPORTED_DECL int bgl_bignum_cmp(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_seed_rand(long);
	static obj_t BGl_z62z42z42bignumzd2ze3llongz53zz__bignumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BXZERO(obj_t);
	extern long BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(long, long);
	static obj_t BGl_z62z42z42divrembxz62zz__bignumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_long_to_bignum(long);
	static obj_t BGl_fixnumzd2listzd2ze3bignumze3zz__bignumz00(obj_t, long);
	static obj_t BGl_z62z42z42negbxz62zz__bignumz00(obj_t, obj_t);
	static obj_t BGl_z62z42z42remainderbxz62zz__bignumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_flonum_to_bignum(double);
	static obj_t BGl_z62z42z42stringzd2ze3integerzd2objz81zz__bignumz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BXPOSITIVE(obj_t);
	static obj_t BGl_z62z42z42oddbxzf3z91zz__bignumz00(obj_t, obj_t);
	extern obj_t BGl_makezd2u16vectorzd2zz__srfi4z00(long, uint16_t);
	BGL_EXPORTED_DECL obj_t bgl_bignum_to_string(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL long bgl_bignum_to_elong(obj_t);
	static obj_t BGl_z62z42z42bignumzd2ze3elongz53zz__bignumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_bignum_quotient(obj_t, obj_t);
	static obj_t BGl_z42z42fixnumzd2ze3bignumzd2freshze3zz__bignumz00(long);
	static long BGl_bignumzd2integerzd2lengthz00zz__bignumz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__bignumz00();
	static obj_t BGl_makezd2randomzd2u8vectorz00zz__bignumz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__bignumz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__bignumz00();
	static obj_t BGl_z62z42z42fixnumzd2ze3bignumz53zz__bignumz00(obj_t, obj_t);
	static obj_t BGl_bignumzd2signzd2setz12z12zz__bignumz00(obj_t, int);
	static obj_t BGl_z62z42z42flonumzd2ze3bignumz53zz__bignumz00(obj_t, obj_t);
	static obj_t BGl_symbol3210z00zz__bignumz00 = BUNSPEC;
	static obj_t BGl_bignumzd2shrinkzd2zz__bignumz00(obj_t, long);
	static obj_t BGl_z62z42z42seedzd2randzb0zz__bignumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_bignum_gcd(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_elong_to_bignum(long);
	static obj_t BGl_z62z42z42elongzd2ze3bignumz53zz__bignumz00(obj_t, obj_t);
	static obj_t BGl_z62z42z42bignumzd2ze3stringz53zz__bignumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL double bgl_bignum_to_flonum(obj_t);
	extern obj_t BGl_moduloz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl_preallocatedzd2bignumszd2zz__bignumz00 = BUNSPEC;
	static obj_t BGl_bignumzd2subzd2nonnegz00zz__bignumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_string_to_bignum(char *, int);
	extern obj_t bgl_make_bignum(obj_t);
	BGL_EXPORTED_DECL obj_t bgl_bignum_abs(obj_t);
	BGL_EXPORTED_DECL bool_t bgl_bignum_odd(obj_t);
	BGL_EXPORTED_DECL obj_t bgl_bignum_remainder(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_bignum_mul(obj_t, obj_t);
	static obj_t BGl_bignumzd2addzd2nonnegz00zz__bignumz00(obj_t, obj_t);
	static long BGl_bignumzd2minzd2elongzd2divzd2radixz00zz__bignumz00();
	static obj_t BGl_z62z42z42bignumzd2cmpzb0zz__bignumz00(obj_t, obj_t, obj_t);
	extern bool_t BGl_evenzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_bignumzd2za7eroz75zz__bignumz00 = BUNSPEC;
	static long BGl_bignumzd2lengthzd2zz__bignumz00(obj_t);
	extern long BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		long, long);
	BGL_EXPORTED_DECL obj_t bgl_bignum_lcm(obj_t, obj_t);
	static obj_t BGl_z62z42z42negativebxzf3z91zz__bignumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_uint64_to_bignum(uint64_t);
	BGL_EXPORTED_DECL obj_t bgl_bignum_add(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42z42remainderbxzd2envzd2zz__bignumz00,
		BgL_bgl_za762za742za742remaind3238za7,
		BGl_z62z42z42remainderbxz62zz__bignumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42z42positivebxzf3zd2envz21zz__bignumz00,
		BgL_bgl_za762za742za742positiv3239za7,
		BGl_z62z42z42positivebxzf3z91zz__bignumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z42z42bignumzd2ze3stringzd2envze3zz__bignumz00,
		BgL_bgl_za762za742za742bignumza73240z00,
		BGl_z62z42z42bignumzd2ze3stringz53zz__bignumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3200z00zz__bignumz00,
		BgL_bgl_string3200za700za7za7_3241za7, "bignum", 6);
	      DEFINE_STRING(BGl_string3201z00zz__bignumz00,
		BgL_bgl_string3201za700za7za7_3242za7, "&$$negativebx?", 14);
	      DEFINE_STRING(BGl_string3202z00zz__bignumz00,
		BgL_bgl_string3202za700za7za7_3243za7, "&$$positivebx?", 14);
	      DEFINE_STRING(BGl_string3203z00zz__bignumz00,
		BgL_bgl_string3203za700za7za7_3244za7, "&$$evenbx?", 10);
	      DEFINE_STRING(BGl_string3204z00zz__bignumz00,
		BgL_bgl_string3204za700za7za7_3245za7, "&$$oddbx?", 9);
	      DEFINE_STRING(BGl_string3205z00zz__bignumz00,
		BgL_bgl_string3205za700za7za7_3246za7, "&$$bignum-cmp", 13);
	      DEFINE_STRING(BGl_string3206z00zz__bignumz00,
		BgL_bgl_string3206za700za7za7_3247za7, "&$$+bx", 6);
	      DEFINE_STRING(BGl_string3207z00zz__bignumz00,
		BgL_bgl_string3207za700za7za7_3248za7, "&$$-bx", 6);
	      DEFINE_STRING(BGl_string3208z00zz__bignumz00,
		BgL_bgl_string3208za700za7za7_3249za7, "&$$negbx", 8);
	      DEFINE_STRING(BGl_string3209z00zz__bignumz00,
		BgL_bgl_string3209za700za7za7_3250za7, "&$$*bx", 6);
	      DEFINE_STRING(BGl_string3211z00zz__bignumz00,
		BgL_bgl_string3211za700za7za7_3251za7, "/bx", 3);
	      DEFINE_STRING(BGl_string3212z00zz__bignumz00,
		BgL_bgl_string3212za700za7za7_3252za7, "divide by zero", 14);
	      DEFINE_STRING(BGl_string3213z00zz__bignumz00,
		BgL_bgl_string3213za700za7za7_3253za7, "&$$divrembx", 11);
	      DEFINE_STRING(BGl_string3214z00zz__bignumz00,
		BgL_bgl_string3214za700za7za7_3254za7, "&$$quotientbx", 13);
	      DEFINE_STRING(BGl_string3215z00zz__bignumz00,
		BgL_bgl_string3215za700za7za7_3255za7, "&$$remainderbx", 14);
	      DEFINE_STRING(BGl_string3216z00zz__bignumz00,
		BgL_bgl_string3216za700za7za7_3256za7, "&$$absbx", 8);
	      DEFINE_STRING(BGl_string3217z00zz__bignumz00,
		BgL_bgl_string3217za700za7za7_3257za7, "&$$gcdbx", 8);
	      DEFINE_STRING(BGl_string3218z00zz__bignumz00,
		BgL_bgl_string3218za700za7za7_3258za7, "&$$lcmbx", 8);
	      DEFINE_STRING(BGl_string3220z00zz__bignumz00,
		BgL_bgl_string3220za700za7za7_3259za7,
		"0123456789abcdefghijklmnopqrstuvwxyz", 36);
	      DEFINE_STRING(BGl_string3221z00zz__bignumz00,
		BgL_bgl_string3221za700za7za7_3260za7, "&$$bignum->string", 17);
	      DEFINE_STRING(BGl_string3228z00zz__bignumz00,
		BgL_bgl_string3228za700za7za7_3261za7, "&$$string->bignum", 17);
	      DEFINE_STRING(BGl_string3229z00zz__bignumz00,
		BgL_bgl_string3229za700za7za7_3262za7, "&$$bignum->fixnum", 17);
	      DEFINE_STRING(BGl_string3230z00zz__bignumz00,
		BgL_bgl_string3230za700za7za7_3263za7, "&$$bignum->elong", 16);
	      DEFINE_STRING(BGl_string3231z00zz__bignumz00,
		BgL_bgl_string3231za700za7za7_3264za7, "&$$bignum->llong", 16);
	      DEFINE_STRING(BGl_string3232z00zz__bignumz00,
		BgL_bgl_string3232za700za7za7_3265za7, "&$$seed-rand", 12);
	      DEFINE_STRING(BGl_string3233z00zz__bignumz00,
		BgL_bgl_string3233za700za7za7_3266za7, "&$$randbx", 9);
	      DEFINE_STRING(BGl_string3234z00zz__bignumz00,
		BgL_bgl_string3234za700za7za7_3267za7, "&$$flonum->bignum", 17);
	      DEFINE_STRING(BGl_string3235z00zz__bignumz00,
		BgL_bgl_string3235za700za7za7_3268za7, "real", 4);
	      DEFINE_STRING(BGl_string3236z00zz__bignumz00,
		BgL_bgl_string3236za700za7za7_3269za7, "&$$bignum->flonum", 17);
	      DEFINE_STRING(BGl_string3237z00zz__bignumz00,
		BgL_bgl_string3237za700za7za7_3270za7, "__bignum", 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42z42randbxzd2envzd2zz__bignumz00,
		BgL_bgl_za762za742za742randbxza73271z00,
		BGl_z62z42z42randbxz62zz__bignumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z42z42flonumzd2ze3bignumzd2envze3zz__bignumz00,
		BgL_bgl_za762za742za742flonumza73272z00,
		BGl_z62z42z42flonumzd2ze3bignumz53zz__bignumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3188z00zz__bignumz00,
		BgL_bgl_string3188za700za7za7_3273za7,
		"/tmp/4.4a/runtime/Unsafe/bignumber.scm", 38);
	      DEFINE_STRING(BGl_string3189z00zz__bignumz00,
		BgL_bgl_string3189za700za7za7_3274za7, "&$$string->integer-obj", 22);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z42z42stringzd2ze3bignumzd2envze3zz__bignumz00,
		BgL_bgl_za762za742za742stringza73275z00,
		BGl_z62z42z42stringzd2ze3bignumz53zz__bignumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3190z00zz__bignumz00,
		BgL_bgl_string3190za700za7za7_3276za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3191z00zz__bignumz00,
		BgL_bgl_string3191za700za7za7_3277za7, "bint", 4);
	      DEFINE_STRING(BGl_string3192z00zz__bignumz00,
		BgL_bgl_string3192za700za7za7_3278za7, "&$$elong->bignum", 16);
	      DEFINE_STRING(BGl_string3193z00zz__bignumz00,
		BgL_bgl_string3193za700za7za7_3279za7, "belong", 6);
	      DEFINE_STRING(BGl_string3194z00zz__bignumz00,
		BgL_bgl_string3194za700za7za7_3280za7, "&$$llong->bignum", 16);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42z42evenbxzf3zd2envz21zz__bignumz00,
		BgL_bgl_za762za742za742evenbxza73281z00,
		BGl_z62z42z42evenbxzf3z91zz__bignumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3195z00zz__bignumz00,
		BgL_bgl_string3195za700za7za7_3282za7, "bllong", 6);
	      DEFINE_STRING(BGl_string3196z00zz__bignumz00,
		BgL_bgl_string3196za700za7za7_3283za7, "&$$uint64->bignum", 17);
	      DEFINE_STRING(BGl_string3197z00zz__bignumz00,
		BgL_bgl_string3197za700za7za7_3284za7, "buint64", 7);
	      DEFINE_STRING(BGl_string3198z00zz__bignumz00,
		BgL_bgl_string3198za700za7za7_3285za7, "&$$fixnum->bignum", 17);
	      DEFINE_STRING(BGl_string3199z00zz__bignumz00,
		BgL_bgl_string3199za700za7za7_3286za7, "&$$zerobx?", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42z42bignumzd2cmpzd2envz00zz__bignumz00,
		BgL_bgl_za762za742za742bignumza73287z00,
		BGl_z62z42z42bignumzd2cmpzb0zz__bignumz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42z42za2bxzd2envz70zz__bignumz00,
		BgL_bgl_za762za742za742za7a2bxza7c3288za7,
		BGl_z62z42z42za2bxzc0zz__bignumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z42z42stringzd2ze3integerzd2objzd2envz31zz__bignumz00,
		BgL_bgl_za762za742za742stringza73289z00,
		BGl_z62z42z42stringzd2ze3integerzd2objz81zz__bignumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z42z42llongzd2ze3bignumzd2envze3zz__bignumz00,
		BgL_bgl_za762za742za742llongza7d3290z00,
		BGl_z62z42z42llongzd2ze3bignumz53zz__bignumz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42z42negbxzd2envzd2zz__bignumz00,
		BgL_bgl_za762za742za742negbxza763291z00, BGl_z62z42z42negbxz62zz__bignumz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z42z42bignumzd2ze3flonumzd2envze3zz__bignumz00,
		BgL_bgl_za762za742za742bignumza73292z00,
		BGl_z62z42z42bignumzd2ze3flonumz53zz__bignumz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42z42divrembxzd2envzd2zz__bignumz00,
		BgL_bgl_za762za742za742divremb3293za7,
		BGl_z62z42z42divrembxz62zz__bignumz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42z42zb2bxzd2envz60zz__bignumz00,
		BgL_bgl_za762za742za742za7b2bxza7d3294za7,
		BGl_z62z42z42zb2bxzd0zz__bignumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z42z42bignumzd2ze3llongzd2envze3zz__bignumz00,
		BgL_bgl_za762za742za742bignumza73295z00,
		BGl_z62z42z42bignumzd2ze3llongz53zz__bignumz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42z42za7erobxzf3zd2envz86zz__bignumz00,
		BgL_bgl_za762za742za742za7a7erob3296z00,
		BGl_z62z42z42za7erobxzf3z36zz__bignumz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42z42lcmbxzd2envzd2zz__bignumz00,
		BgL_bgl_za762za742za742lcmbxza763297z00, BGl_z62z42z42lcmbxz62zz__bignumz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42z42gcdbxzd2envzd2zz__bignumz00,
		BgL_bgl_za762za742za742gcdbxza763298z00, BGl_z62z42z42gcdbxz62zz__bignumz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z42z42bignumzd2ze3fixnumzd2envze3zz__bignumz00,
		BgL_bgl_za762za742za742bignumza73299z00,
		BGl_z62z42z42bignumzd2ze3fixnumz53zz__bignumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42z42negativebxzf3zd2envz21zz__bignumz00,
		BgL_bgl_za762za742za742negativ3300za7,
		BGl_z62z42z42negativebxzf3z91zz__bignumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z42z42uint64zd2ze3bignumzd2envze3zz__bignumz00,
		BgL_bgl_za762za742za742uint64za73301z00,
		BGl_z62z42z42uint64zd2ze3bignumz53zz__bignumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z42z42bignumzd2ze3elongzd2envze3zz__bignumz00,
		BgL_bgl_za762za742za742bignumza73302z00,
		BGl_z62z42z42bignumzd2ze3elongz53zz__bignumz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42z42absbxzd2envzd2zz__bignumz00,
		BgL_bgl_za762za742za742absbxza763303z00, BGl_z62z42z42absbxz62zz__bignumz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42z42oddbxzf3zd2envz21zz__bignumz00,
		BgL_bgl_za762za742za742oddbxza7f3304z00,
		BGl_z62z42z42oddbxzf3z91zz__bignumz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42z42seedzd2randzd2envz00zz__bignumz00,
		BgL_bgl_za762za742za742seedza7d23305z00,
		BGl_z62z42z42seedzd2randzb0zz__bignumz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42z42zd2bxzd2envz00zz__bignumz00,
		BgL_bgl_za762za742za742za7d2bxza7b3306za7,
		BGl_z62z42z42zd2bxzb0zz__bignumz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42z42quotientbxzd2envzd2zz__bignumz00,
		BgL_bgl_za762za742za742quotien3307za7,
		BGl_z62z42z42quotientbxz62zz__bignumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z42z42elongzd2ze3bignumzd2envze3zz__bignumz00,
		BgL_bgl_za762za742za742elongza7d3308z00,
		BGl_z62z42z42elongzd2ze3bignumz53zz__bignumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z42z42fixnumzd2ze3bignumzd2envze3zz__bignumz00,
		BgL_bgl_za762za742za742fixnumza73309z00,
		BGl_z62z42z42fixnumzd2ze3bignumz53zz__bignumz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__bignumz00));
		     ADD_ROOT((void *) (&BGl_list3219z00zz__bignumz00));
		     ADD_ROOT((void *) (&BGl_list3222z00zz__bignumz00));
		     ADD_ROOT((void *) (&BGl_list3223z00zz__bignumz00));
		     ADD_ROOT((void *) (&BGl_list3224z00zz__bignumz00));
		     ADD_ROOT((void *) (&BGl_list3225z00zz__bignumz00));
		     ADD_ROOT((void *) (&BGl_list3226z00zz__bignumz00));
		     ADD_ROOT((void *) (&BGl_list3227z00zz__bignumz00));
		     ADD_ROOT((void *) (&BGl_symbol3210z00zz__bignumz00));
		     ADD_ROOT((void *) (&BGl_preallocatedzd2bignumszd2zz__bignumz00));
		     ADD_ROOT((void *) (&BGl_bignumzd2za7eroz75zz__bignumz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long
		BgL_checksumz00_6185, char *BgL_fromz00_6186)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__bignumz00))
				{
					BGl_requirezd2initializa7ationz75zz__bignumz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__bignumz00();
					BGl_cnstzd2initzd2zz__bignumz00();
					BGl_importedzd2moduleszd2initz00zz__bignumz00();
					return BGl_toplevelzd2initzd2zz__bignumz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__bignumz00()
	{
		{	/* Unsafe/bignumber.scm 45 */
			BGl_symbol3210z00zz__bignumz00 =
				bstring_to_symbol(BGl_string3211z00zz__bignumz00);
			BGl_list3219z00zz__bignumz00 = MAKE_YOUNG_PAIR(BINT(((long) 0)), BNIL);
			BGl_list3222z00zz__bignumz00 =
				MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '+')),
				MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '-')), BNIL));
			BGl_list3224z00zz__bignumz00 =
				MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 'x')), BINT(((long) 16)));
			BGl_list3225z00zz__bignumz00 =
				MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 'd')), BINT(((long) 10)));
			BGl_list3226z00zz__bignumz00 =
				MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 'o')), BINT(((long) 8)));
			BGl_list3227z00zz__bignumz00 =
				MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 'b')), BINT(((long) 2)));
			return (BGl_list3223z00zz__bignumz00 =
				MAKE_YOUNG_PAIR(BGl_list3224z00zz__bignumz00,
					MAKE_YOUNG_PAIR(BGl_list3225z00zz__bignumz00,
						MAKE_YOUNG_PAIR(BGl_list3226z00zz__bignumz00,
							MAKE_YOUNG_PAIR(BGl_list3227z00zz__bignumz00, BNIL)))), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__bignumz00()
	{
		{	/* Unsafe/bignumber.scm 45 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__bignumz00()
	{
		{	/* Unsafe/bignumber.scm 45 */
			{	/* Unsafe/bignumber.scm 353 */
				obj_t BgL_vz00_1213;

				BgL_vz00_1213 = make_vector(((long) 33), BFALSE);
				{
					long BgL_iz00_2634;
					long BgL_nz00_2635;

					BgL_iz00_2634 = ((long) 0);
					BgL_nz00_2635 = ((long) -16);
				BgL_loopz00_2633:
					if ((((long) 16) < BgL_nz00_2635))
						{	/* Unsafe/bignumber.scm 355 */
							BGl_preallocatedzd2bignumszd2zz__bignumz00 = BgL_vz00_1213;
						}
					else
						{	/* Unsafe/bignumber.scm 355 */
							VECTOR_SET(BgL_vz00_1213, BgL_iz00_2634,
								BGl_z42z42fixnumzd2ze3bignumzd2freshze3zz__bignumz00
								(BgL_nz00_2635));
							{
								long BgL_nz00_6225;
								long BgL_iz00_6223;

								BgL_iz00_6223 = (BgL_iz00_2634 + ((long) 1));
								BgL_nz00_6225 = (BgL_nz00_2635 + ((long) 1));
								BgL_nz00_2635 = BgL_nz00_6225;
								BgL_iz00_2634 = BgL_iz00_6223;
								goto BgL_loopz00_2633;
							}
						}
				}
			}
			{	/* Unsafe/bignumber.scm 367 */
				obj_t BgL_res2251z00_2660;

				{	/* Unsafe/bignumber.scm 362 */
					bool_t BgL_test3312z00_6227;

					if ((((long) 0) < ((long) -16)))
						{	/* Unsafe/bignumber.scm 362 */
							BgL_test3312z00_6227 = ((bool_t) 1);
						}
					else
						{	/* Unsafe/bignumber.scm 362 */
							BgL_test3312z00_6227 = (((long) 16) < ((long) 0));
						}
					if (BgL_test3312z00_6227)
						{	/* Unsafe/bignumber.scm 362 */
							BgL_res2251z00_2660 =
								BGl_z42z42fixnumzd2ze3bignumzd2freshze3zz__bignumz00(((long)
									0));
						}
					else
						{	/* Unsafe/bignumber.scm 362 */
							BgL_res2251z00_2660 =
								VECTOR_REF(BGl_preallocatedzd2bignumszd2zz__bignumz00,
								(((long) 0) + ((long) 16)));
				}}
				return (BGl_bignumzd2za7eroz75zz__bignumz00 =
					BgL_res2251z00_2660, BUNSPEC);
			}
		}

	}



/* $$string->integer-obj */
	BGL_EXPORTED_DEF obj_t bgl_string_to_integer_obj(char *BgL_strz00_3,
		long BgL_radixz00_4)
	{
		{	/* Unsafe/bignumber.scm 170 */
			{	/* Unsafe/bignumber.scm 171 */

				return
					BINT(BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00
					(string_to_bstring(BgL_strz00_3), BgL_radixz00_4, ((long) 0)));
		}}

	}



/* &$$string->integer-obj */
	obj_t BGl_z62z42z42stringzd2ze3integerzd2objz81zz__bignumz00(obj_t
		BgL_envz00_6029, obj_t BgL_strz00_6030, obj_t BgL_radixz00_6031)
	{
		{	/* Unsafe/bignumber.scm 170 */
			{	/* Unsafe/bignumber.scm 171 */
				long BgL_auxz00_6246;
				char *BgL_auxz00_6237;

				{	/* Unsafe/bignumber.scm 171 */
					obj_t BgL_tmpz00_6247;

					if (INTEGERP(BgL_radixz00_6031))
						{	/* Unsafe/bignumber.scm 171 */
							BgL_tmpz00_6247 = BgL_radixz00_6031;
						}
					else
						{
							obj_t BgL_auxz00_6250;

							BgL_auxz00_6250 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 7353)), BGl_string3189z00zz__bignumz00,
								BGl_string3191z00zz__bignumz00, BgL_radixz00_6031);
							FAILURE(BgL_auxz00_6250, BFALSE, BFALSE);
						}
					BgL_auxz00_6246 = (long) CINT(BgL_tmpz00_6247);
				}
				{	/* Unsafe/bignumber.scm 171 */
					obj_t BgL_tmpz00_6238;

					if (STRINGP(BgL_strz00_6030))
						{	/* Unsafe/bignumber.scm 171 */
							BgL_tmpz00_6238 = BgL_strz00_6030;
						}
					else
						{
							obj_t BgL_auxz00_6241;

							BgL_auxz00_6241 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 7353)), BGl_string3189z00zz__bignumz00,
								BGl_string3190z00zz__bignumz00, BgL_strz00_6030);
							FAILURE(BgL_auxz00_6241, BFALSE, BFALSE);
						}
					BgL_auxz00_6237 = BSTRING_TO_STRING(BgL_tmpz00_6238);
				}
				return bgl_string_to_integer_obj(BgL_auxz00_6237, BgL_auxz00_6246);
			}
		}

	}



/* bignum-min-elong-div-radix */
	long BGl_bignumzd2minzd2elongzd2divzd2radixz00zz__bignumz00()
	{
		{	/* Unsafe/bignumber.scm 210 */
			{	/* Unsafe/bignumber.scm 211 */
				long BgL_arg1211z00_1235;

				BgL_arg1211z00_1235 =
					(((long) -2) * ((long) (((long) 1)) << (int) (((long) 30))));
				{	/* Unsafe/bignumber.scm 211 */
					long BgL_res2258z00_2680;

					BgL_res2258z00_2680 = (BgL_arg1211z00_1235 / ((long) 16384));
					return BgL_res2258z00_2680;
				}
			}
		}

	}



/* bignum-min-llong-div-radix */
	BGL_LONGLONG_T BGl_bignumzd2minzd2llongzd2divzd2radixz00zz__bignumz00()
	{
		{	/* Unsafe/bignumber.scm 219 */
			{	/* Unsafe/bignumber.scm 220 */
				BGL_LONGLONG_T BgL_arg1223z00_1238;

				BgL_arg1223z00_1238 =
					((-((BGL_LONGLONG_T) 2)) *
					(LONG_TO_LLONG(((long) 1)) << (int) (((long) 60))));
				{	/* Unsafe/bignumber.scm 220 */
					BGL_LONGLONG_T BgL_res2265z00_2698;

					BgL_res2265z00_2698 =
						(BgL_arg1223z00_1238 / ((BGL_LONGLONG_T) 32768));
					return BgL_res2265z00_2698;
				}
			}
		}

	}



/* bignum-length */
	long BGl_bignumzd2lengthzd2zz__bignumz00(obj_t BgL_bnz00_6)
	{
		{	/* Unsafe/bignumber.scm 227 */
			{	/* Unsafe/bignumber.scm 228 */
				long BgL_arg1229z00_2702;

				{	/* Unsafe/bignumber.scm 228 */
					obj_t BgL_arg1232z00_2703;

					BgL_arg1232z00_2703 = BGL_BIGNUM_U16VECT(BgL_bnz00_6);
					{	/* Unsafe/bignumber.scm 228 */
						long BgL_res2266z00_2705;

						BgL_res2266z00_2705 = BGL_HVECTOR_LENGTH(BgL_arg1232z00_2703);
						BgL_arg1229z00_2702 = BgL_res2266z00_2705;
				}}
				{	/* Unsafe/bignumber.scm 228 */
					long BgL_res2268z00_2710;

					{	/* Unsafe/bignumber.scm 228 */
						uint16_t BgL_xz00_2706;

						BgL_xz00_2706 = (uint16_t) (BgL_arg1229z00_2702);
						{	/* Unsafe/bignumber.scm 228 */
							long BgL_arg2198z00_2707;

							BgL_arg2198z00_2707 = (long) (BgL_xz00_2706);
							{	/* Unsafe/bignumber.scm 228 */
								long BgL_res2267z00_2709;

								BgL_res2267z00_2709 = (long) (BgL_arg2198z00_2707);
								BgL_res2268z00_2710 = BgL_res2267z00_2709;
					}}}
					return BgL_res2268z00_2710;
				}
			}
		}

	}



/* bignum-sign */
	long BGl_bignumzd2signzd2zz__bignumz00(obj_t BgL_bnz00_7)
	{
		{	/* Unsafe/bignumber.scm 229 */
			{	/* Unsafe/bignumber.scm 230 */
				uint16_t BgL_arg1239z00_2711;

				{	/* Unsafe/bignumber.scm 230 */
					obj_t BgL_arg1242z00_2712;

					BgL_arg1242z00_2712 = BGL_BIGNUM_U16VECT(BgL_bnz00_7);
					BgL_arg1239z00_2711 = BGL_U16VREF(BgL_arg1242z00_2712, ((long) 0));
				}
				{	/* Unsafe/bignumber.scm 230 */
					long BgL_res2270z00_2717;

					{	/* Unsafe/bignumber.scm 230 */
						long BgL_arg2198z00_2714;

						BgL_arg2198z00_2714 = (long) (BgL_arg1239z00_2711);
						{	/* Unsafe/bignumber.scm 230 */
							long BgL_res2269z00_2716;

							BgL_res2269z00_2716 = (long) (BgL_arg2198z00_2714);
							BgL_res2270z00_2717 = BgL_res2269z00_2716;
					}}
					return BgL_res2270z00_2717;
				}
			}
		}

	}



/* bignum-sign-set! */
	obj_t BGl_bignumzd2signzd2setz12z12zz__bignumz00(obj_t BgL_bnz00_8,
		int BgL_signz00_9)
	{
		{	/* Unsafe/bignumber.scm 231 */
			{	/* Unsafe/bignumber.scm 232 */
				obj_t BgL_arg1243z00_2718;
				uint16_t BgL_arg1245z00_2719;

				BgL_arg1243z00_2718 = BGL_BIGNUM_U16VECT(BgL_bnz00_8);
				{	/* Unsafe/bignumber.scm 232 */
					uint16_t BgL_res2271z00_2721;

					{	/* Unsafe/bignumber.scm 232 */
						long BgL_tmpz00_6276;

						BgL_tmpz00_6276 = (long) (BgL_signz00_9);
						BgL_res2271z00_2721 = (uint16_t) (BgL_tmpz00_6276);
					}
					BgL_arg1245z00_2719 = BgL_res2271z00_2721;
				}
				BGL_U16VSET(BgL_arg1243z00_2718, ((long) 0), BgL_arg1245z00_2719);
				return BUNSPEC;
			}
		}

	}



/* bignum-shrink */
	obj_t BGl_bignumzd2shrinkzd2zz__bignumz00(obj_t BgL_xz00_17,
		long BgL_lenz00_18)
	{
		{	/* Unsafe/bignumber.scm 245 */
			{	/* Unsafe/bignumber.scm 246 */
				obj_t BgL_yz00_1253;

				{	/* Unsafe/bignumber.scm 246 */
					obj_t BgL_res2277z00_2745;

					{	/* Unsafe/bignumber.scm 246 */
						int BgL_lenz00_2741;

						BgL_lenz00_2741 = (int) (BgL_lenz00_18);
						{	/* Unsafe/bignumber.scm 226 */
							obj_t BgL_arg1227z00_2742;

							{	/* Unsafe/bignumber.scm 226 */

								BgL_arg1227z00_2742 =
									BGl_makezd2u16vectorzd2zz__srfi4z00(
									(long) (BgL_lenz00_2741), (uint16_t) (0));
							}
							BgL_res2277z00_2745 = bgl_make_bignum(BgL_arg1227z00_2742);
					}}
					BgL_yz00_1253 = BgL_res2277z00_2745;
				}
				{	/* Unsafe/bignumber.scm 247 */
					long BgL_g1042z00_1254;

					BgL_g1042z00_1254 = (BgL_lenz00_18 - ((long) 1));
					{
						long BgL_iz00_1256;

						BgL_iz00_1256 = BgL_g1042z00_1254;
					BgL_zc3z04anonymousza31253ze3z87_1257:
						if ((BgL_iz00_1256 < ((long) 0)))
							{	/* Unsafe/bignumber.scm 248 */
								return BgL_yz00_1253;
							}
						else
							{	/* Unsafe/bignumber.scm 248 */
								{	/* Unsafe/bignumber.scm 251 */
									long BgL_arg1256z00_1259;

									{	/* Unsafe/bignumber.scm 251 */
										int BgL_iz00_2751;

										BgL_iz00_2751 = (int) (BgL_iz00_1256);
										{	/* Unsafe/bignumber.scm 234 */
											uint16_t BgL_arg1246z00_2752;

											{	/* Unsafe/bignumber.scm 234 */
												obj_t BgL_arg1247z00_2753;

												BgL_arg1247z00_2753 = BGL_BIGNUM_U16VECT(BgL_xz00_17);
												{	/* Unsafe/bignumber.scm 234 */
													long BgL_tmpz00_6289;

													BgL_tmpz00_6289 = (long) (BgL_iz00_2751);
													BgL_arg1246z00_2752 =
														BGL_U16VREF(BgL_arg1247z00_2753, BgL_tmpz00_6289);
											}}
											{	/* Unsafe/bignumber.scm 234 */
												long BgL_res2281z00_2758;

												{	/* Unsafe/bignumber.scm 234 */
													long BgL_arg2198z00_2755;

													BgL_arg2198z00_2755 = (long) (BgL_arg1246z00_2752);
													{	/* Unsafe/bignumber.scm 234 */
														long BgL_res2280z00_2757;

														BgL_res2280z00_2757 = (long) (BgL_arg2198z00_2755);
														BgL_res2281z00_2758 = BgL_res2280z00_2757;
												}}
												BgL_arg1256z00_1259 = BgL_res2281z00_2758;
									}}}
									{	/* Unsafe/bignumber.scm 251 */
										int BgL_iz00_2760;
										int BgL_digitz00_2761;

										BgL_iz00_2760 = (int) (BgL_iz00_1256);
										BgL_digitz00_2761 = (int) (BgL_arg1256z00_1259);
										{	/* Unsafe/bignumber.scm 236 */
											obj_t BgL_arg1250z00_2762;
											uint16_t BgL_arg1252z00_2763;

											BgL_arg1250z00_2762 = BGL_BIGNUM_U16VECT(BgL_yz00_1253);
											{	/* Unsafe/bignumber.scm 236 */
												uint16_t BgL_res2282z00_2765;

												{	/* Unsafe/bignumber.scm 236 */
													long BgL_tmpz00_6297;

													BgL_tmpz00_6297 = (long) (BgL_digitz00_2761);
													BgL_res2282z00_2765 = (uint16_t) (BgL_tmpz00_6297);
												}
												BgL_arg1252z00_2763 = BgL_res2282z00_2765;
											}
											{	/* Unsafe/bignumber.scm 236 */
												long BgL_tmpz00_6300;

												BgL_tmpz00_6300 = (long) (BgL_iz00_2760);
												BGL_U16VSET(BgL_arg1250z00_2762, BgL_tmpz00_6300,
													BgL_arg1252z00_2763);
											} BUNSPEC;
								}}}
								{
									long BgL_iz00_6303;

									BgL_iz00_6303 = (BgL_iz00_1256 - ((long) 1));
									BgL_iz00_1256 = BgL_iz00_6303;
									goto BgL_zc3z04anonymousza31253ze3z87_1257;
								}
							}
					}
				}
			}
		}

	}



/* bignum-remove-leading-zeroes */
	obj_t BGl_bignumzd2removezd2leadingzd2za7eroesz75zz__bignumz00(obj_t
		BgL_xz00_19)
	{
		{	/* Unsafe/bignumber.scm 254 */
			{	/* Unsafe/bignumber.scm 255 */
				long BgL_signz00_1262;

				{	/* Unsafe/bignumber.scm 230 */
					uint16_t BgL_arg1239z00_2769;

					{	/* Unsafe/bignumber.scm 230 */
						obj_t BgL_arg1242z00_2770;

						BgL_arg1242z00_2770 = BGL_BIGNUM_U16VECT(BgL_xz00_19);
						BgL_arg1239z00_2769 = BGL_U16VREF(BgL_arg1242z00_2770, ((long) 0));
					}
					{	/* Unsafe/bignumber.scm 230 */
						long BgL_res2285z00_2775;

						{	/* Unsafe/bignumber.scm 230 */
							long BgL_arg2198z00_2772;

							BgL_arg2198z00_2772 = (long) (BgL_arg1239z00_2769);
							{	/* Unsafe/bignumber.scm 230 */
								long BgL_res2284z00_2774;

								BgL_res2284z00_2774 = (long) (BgL_arg2198z00_2772);
								BgL_res2285z00_2775 = BgL_res2284z00_2774;
						}}
						BgL_signz00_1262 = BgL_res2285z00_2775;
				}}
				{	/* Unsafe/bignumber.scm 232 */
					obj_t BgL_arg1243z00_2778;
					uint16_t BgL_arg1245z00_2779;

					BgL_arg1243z00_2778 = BGL_BIGNUM_U16VECT(BgL_xz00_19);
					{	/* Unsafe/bignumber.scm 232 */
						uint16_t BgL_res2286z00_2780;

						BgL_res2286z00_2780 = (uint16_t) (((long) 1));
						BgL_arg1245z00_2779 = BgL_res2286z00_2780;
					}
					BGL_U16VSET(BgL_arg1243z00_2778, ((long) 0), BgL_arg1245z00_2779);
					BUNSPEC;
				}
				{	/* Unsafe/bignumber.scm 257 */
					long BgL_g1043z00_1263;

					{	/* Unsafe/bignumber.scm 257 */
						long BgL_arg1277z00_1279;

						{	/* Unsafe/bignumber.scm 228 */
							long BgL_arg1229z00_2782;

							{	/* Unsafe/bignumber.scm 228 */
								obj_t BgL_arg1232z00_2783;

								BgL_arg1232z00_2783 = BGL_BIGNUM_U16VECT(BgL_xz00_19);
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_res2287z00_2785;

									BgL_res2287z00_2785 = BGL_HVECTOR_LENGTH(BgL_arg1232z00_2783);
									BgL_arg1229z00_2782 = BgL_res2287z00_2785;
							}}
							{	/* Unsafe/bignumber.scm 228 */
								long BgL_res2289z00_2790;

								{	/* Unsafe/bignumber.scm 228 */
									uint16_t BgL_xz00_2786;

									BgL_xz00_2786 = (uint16_t) (BgL_arg1229z00_2782);
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_arg2198z00_2787;

										BgL_arg2198z00_2787 = (long) (BgL_xz00_2786);
										{	/* Unsafe/bignumber.scm 228 */
											long BgL_res2288z00_2789;

											BgL_res2288z00_2789 = (long) (BgL_arg2198z00_2787);
											BgL_res2289z00_2790 = BgL_res2288z00_2789;
								}}}
								BgL_arg1277z00_1279 = BgL_res2289z00_2790;
						}}
						BgL_g1043z00_1263 = (BgL_arg1277z00_1279 - ((long) 1));
					}
					{
						long BgL_iz00_1265;

						BgL_iz00_1265 = BgL_g1043z00_1263;
					BgL_zc3z04anonymousza31259ze3z87_1266:
						{	/* Unsafe/bignumber.scm 258 */
							bool_t BgL_test3317z00_6318;

							{	/* Unsafe/bignumber.scm 258 */
								long BgL_arg1276z00_1277;

								{	/* Unsafe/bignumber.scm 258 */
									int BgL_iz00_2794;

									BgL_iz00_2794 = (int) (BgL_iz00_1265);
									{	/* Unsafe/bignumber.scm 234 */
										uint16_t BgL_arg1246z00_2795;

										{	/* Unsafe/bignumber.scm 234 */
											obj_t BgL_arg1247z00_2796;

											BgL_arg1247z00_2796 = BGL_BIGNUM_U16VECT(BgL_xz00_19);
											{	/* Unsafe/bignumber.scm 234 */
												long BgL_tmpz00_6321;

												BgL_tmpz00_6321 = (long) (BgL_iz00_2794);
												BgL_arg1246z00_2795 =
													BGL_U16VREF(BgL_arg1247z00_2796, BgL_tmpz00_6321);
										}}
										{	/* Unsafe/bignumber.scm 234 */
											long BgL_res2292z00_2801;

											{	/* Unsafe/bignumber.scm 234 */
												long BgL_arg2198z00_2798;

												BgL_arg2198z00_2798 = (long) (BgL_arg1246z00_2795);
												{	/* Unsafe/bignumber.scm 234 */
													long BgL_res2291z00_2800;

													BgL_res2291z00_2800 = (long) (BgL_arg2198z00_2798);
													BgL_res2292z00_2801 = BgL_res2291z00_2800;
											}}
											BgL_arg1276z00_1277 = BgL_res2292z00_2801;
								}}}
								BgL_test3317z00_6318 = (BgL_arg1276z00_1277 == ((long) 0));
							}
							if (BgL_test3317z00_6318)
								{
									long BgL_iz00_6327;

									BgL_iz00_6327 = (BgL_iz00_1265 - ((long) 1));
									BgL_iz00_1265 = BgL_iz00_6327;
									goto BgL_zc3z04anonymousza31259ze3z87_1266;
								}
							else
								{	/* Unsafe/bignumber.scm 258 */
									if ((BgL_iz00_1265 == ((long) 0)))
										{	/* Unsafe/bignumber.scm 260 */
											return BGl_bignumzd2za7eroz75zz__bignumz00;
										}
									else
										{	/* Unsafe/bignumber.scm 260 */
											{	/* Unsafe/bignumber.scm 263 */
												int BgL_signz00_2809;

												BgL_signz00_2809 = (int) (BgL_signz00_1262);
												{	/* Unsafe/bignumber.scm 232 */
													obj_t BgL_arg1243z00_2810;
													uint16_t BgL_arg1245z00_2811;

													BgL_arg1243z00_2810 = BGL_BIGNUM_U16VECT(BgL_xz00_19);
													{	/* Unsafe/bignumber.scm 232 */
														uint16_t BgL_res2296z00_2813;

														{	/* Unsafe/bignumber.scm 232 */
															long BgL_tmpz00_6333;

															BgL_tmpz00_6333 = (long) (BgL_signz00_2809);
															BgL_res2296z00_2813 =
																(uint16_t) (BgL_tmpz00_6333);
														}
														BgL_arg1245z00_2811 = BgL_res2296z00_2813;
													}
													BGL_U16VSET(BgL_arg1243z00_2810, ((long) 0),
														BgL_arg1245z00_2811);
													BUNSPEC;
											}}
											{	/* Unsafe/bignumber.scm 264 */
												bool_t BgL_test3319z00_6337;

												{	/* Unsafe/bignumber.scm 264 */
													long BgL_arg1274z00_1275;

													{	/* Unsafe/bignumber.scm 264 */
														long BgL_arg1275z00_1276;

														{	/* Unsafe/bignumber.scm 228 */
															long BgL_arg1229z00_2815;

															{	/* Unsafe/bignumber.scm 228 */
																obj_t BgL_arg1232z00_2816;

																BgL_arg1232z00_2816 =
																	BGL_BIGNUM_U16VECT(BgL_xz00_19);
																{	/* Unsafe/bignumber.scm 228 */
																	long BgL_res2297z00_2818;

																	BgL_res2297z00_2818 =
																		BGL_HVECTOR_LENGTH(BgL_arg1232z00_2816);
																	BgL_arg1229z00_2815 = BgL_res2297z00_2818;
															}}
															{	/* Unsafe/bignumber.scm 228 */
																long BgL_res2299z00_2823;

																{	/* Unsafe/bignumber.scm 228 */
																	uint16_t BgL_xz00_2819;

																	BgL_xz00_2819 =
																		(uint16_t) (BgL_arg1229z00_2815);
																	{	/* Unsafe/bignumber.scm 228 */
																		long BgL_arg2198z00_2820;

																		BgL_arg2198z00_2820 =
																			(long) (BgL_xz00_2819);
																		{	/* Unsafe/bignumber.scm 228 */
																			long BgL_res2298z00_2822;

																			BgL_res2298z00_2822 =
																				(long) (BgL_arg2198z00_2820);
																			BgL_res2299z00_2823 = BgL_res2298z00_2822;
																}}}
																BgL_arg1275z00_1276 = BgL_res2299z00_2823;
														}}
														BgL_arg1274z00_1275 =
															(BgL_arg1275z00_1276 - ((long) 1));
													}
													BgL_test3319z00_6337 =
														(BgL_iz00_1265 == BgL_arg1274z00_1275);
												}
												if (BgL_test3319z00_6337)
													{	/* Unsafe/bignumber.scm 264 */
														return BgL_xz00_19;
													}
												else
													{	/* Unsafe/bignumber.scm 264 */
														return
															BGl_bignumzd2shrinkzd2zz__bignumz00(BgL_xz00_19,
															(BgL_iz00_1265 + ((long) 1)));
		}}}}}}}}}

	}



/* $$fixnum->bignum-fresh */
	obj_t BGl_z42z42fixnumzd2ze3bignumzd2freshze3zz__bignumz00(long BgL_nz00_21)
	{
		{	/* Unsafe/bignumber.scm 272 */
			{	/* Unsafe/bignumber.scm 273 */
				long BgL_negzd2nzd2_1280;

				if ((BgL_nz00_21 < ((long) 0)))
					{	/* Unsafe/bignumber.scm 273 */
						BgL_negzd2nzd2_1280 = BgL_nz00_21;
					}
				else
					{	/* Unsafe/bignumber.scm 273 */
						BgL_negzd2nzd2_1280 = (((long) 0) - BgL_nz00_21);
					}
				{
					long BgL_nbzd2digitszd2_1282;
					long BgL_xz00_1283;

					BgL_nbzd2digitszd2_1282 = ((long) 0);
					BgL_xz00_1283 = BgL_negzd2nzd2_1280;
				BgL_zc3z04anonymousza31278ze3z87_1284:
					if ((BgL_xz00_1283 == ((long) 0)))
						{	/* Unsafe/bignumber.scm 278 */
							obj_t BgL_rz00_1286;

							{	/* Unsafe/bignumber.scm 278 */
								long BgL_arg1290z00_1300;

								BgL_arg1290z00_1300 = (BgL_nbzd2digitszd2_1282 + ((long) 1));
								{	/* Unsafe/bignumber.scm 278 */
									obj_t BgL_res2307z00_2843;

									{	/* Unsafe/bignumber.scm 278 */
										int BgL_lenz00_2839;

										BgL_lenz00_2839 = (int) (BgL_arg1290z00_1300);
										{	/* Unsafe/bignumber.scm 226 */
											obj_t BgL_arg1227z00_2840;

											{	/* Unsafe/bignumber.scm 226 */

												BgL_arg1227z00_2840 =
													BGl_makezd2u16vectorzd2zz__srfi4z00(
													(long) (BgL_lenz00_2839), (uint16_t) (0));
											}
											BgL_res2307z00_2843 =
												bgl_make_bignum(BgL_arg1227z00_2840);
									}}
									BgL_rz00_1286 = BgL_res2307z00_2843;
							}}
							if ((BgL_nz00_21 < ((long) 0)))
								{	/* Unsafe/bignumber.scm 232 */
									obj_t BgL_arg1243z00_2848;
									uint16_t BgL_arg1245z00_2849;

									BgL_arg1243z00_2848 = BGL_BIGNUM_U16VECT(BgL_rz00_1286);
									{	/* Unsafe/bignumber.scm 232 */
										uint16_t BgL_res2309z00_2850;

										BgL_res2309z00_2850 = (uint16_t) (((long) 0));
										BgL_arg1245z00_2849 = BgL_res2309z00_2850;
									}
									BGL_U16VSET(BgL_arg1243z00_2848, ((long) 0),
										BgL_arg1245z00_2849);
									BUNSPEC;
								}
							else
								{	/* Unsafe/bignumber.scm 232 */
									obj_t BgL_arg1243z00_2853;
									uint16_t BgL_arg1245z00_2854;

									BgL_arg1243z00_2853 = BGL_BIGNUM_U16VECT(BgL_rz00_1286);
									{	/* Unsafe/bignumber.scm 232 */
										uint16_t BgL_res2310z00_2855;

										BgL_res2310z00_2855 = (uint16_t) (((long) 1));
										BgL_arg1245z00_2854 = BgL_res2310z00_2855;
									}
									BGL_U16VSET(BgL_arg1243z00_2853, ((long) 0),
										BgL_arg1245z00_2854);
									BUNSPEC;
								}
							{
								long BgL_iz00_2892;
								long BgL_xz00_2893;

								BgL_iz00_2892 = ((long) 1);
								BgL_xz00_2893 = BgL_negzd2nzd2_1280;
							BgL_loop2z00_2891:
								if ((BgL_xz00_2893 == ((long) 0)))
									{	/* Unsafe/bignumber.scm 283 */
										return BgL_rz00_1286;
									}
								else
									{	/* Unsafe/bignumber.scm 283 */
										{	/* Unsafe/bignumber.scm 288 */
											long BgL_arg1284z00_2897;

											{	/* Unsafe/bignumber.scm 288 */
												long BgL_arg1285z00_2898;

												{	/* Unsafe/bignumber.scm 288 */
													long BgL_res2317z00_2900;

													{	/* Unsafe/bignumber.scm 288 */
														long BgL_n1z00_2901;
														long BgL_n2z00_2902;

														BgL_n1z00_2901 = BgL_xz00_2893;
														BgL_n2z00_2902 = ((long) 16384);
														{	/* Unsafe/bignumber.scm 288 */
															bool_t BgL_test3324z00_6367;

															{	/* Unsafe/bignumber.scm 288 */
																long BgL_arg2102z00_2904;

																BgL_arg2102z00_2904 =
																	(((BgL_n1z00_2901) | (BgL_n2z00_2902)) &
																	-2147483648);
																BgL_test3324z00_6367 =
																	(BgL_arg2102z00_2904 == ((long) 0));
															}
															if (BgL_test3324z00_6367)
																{	/* Unsafe/bignumber.scm 288 */
																	int32_t BgL_arg2098z00_2907;

																	{	/* Unsafe/bignumber.scm 288 */
																		int32_t BgL_arg2100z00_2908;
																		int32_t BgL_arg2101z00_2909;

																		{	/* Unsafe/bignumber.scm 288 */
																			int32_t BgL_res2313z00_2910;

																			BgL_res2313z00_2910 =
																				(int32_t) (BgL_n1z00_2901);
																			BgL_arg2100z00_2908 = BgL_res2313z00_2910;
																		}
																		{	/* Unsafe/bignumber.scm 288 */
																			int32_t BgL_res2314z00_2912;

																			BgL_res2314z00_2912 =
																				(int32_t) (BgL_n2z00_2902);
																			BgL_arg2101z00_2909 = BgL_res2314z00_2912;
																		}
																		BgL_arg2098z00_2907 =
																			(BgL_arg2100z00_2908 %
																			BgL_arg2101z00_2909);
																	}
																	{	/* Unsafe/bignumber.scm 288 */
																		long BgL_res2316z00_2914;

																		{	/* Unsafe/bignumber.scm 288 */
																			long BgL_arg2197z00_2916;

																			BgL_arg2197z00_2916 =
																				(long) (BgL_arg2098z00_2907);
																			{	/* Unsafe/bignumber.scm 288 */
																				long BgL_res2315z00_2917;

																				BgL_res2315z00_2917 =
																					(long) (BgL_arg2197z00_2916);
																				BgL_res2316z00_2914 =
																					BgL_res2315z00_2917;
																		}}
																		BgL_res2317z00_2900 = BgL_res2316z00_2914;
																}}
															else
																{	/* Unsafe/bignumber.scm 288 */
																	BgL_res2317z00_2900 =
																		(BgL_n1z00_2901 % BgL_n2z00_2902);
																}
														}
													}
													BgL_arg1285z00_2898 = BgL_res2317z00_2900;
												}
												BgL_arg1284z00_2897 =
													(((long) 0) - BgL_arg1285z00_2898);
											}
											{	/* Unsafe/bignumber.scm 285 */
												int BgL_iz00_2922;
												int BgL_digitz00_2923;

												BgL_iz00_2922 = (int) (BgL_iz00_2892);
												BgL_digitz00_2923 = (int) (BgL_arg1284z00_2897);
												{	/* Unsafe/bignumber.scm 236 */
													obj_t BgL_arg1250z00_2924;
													uint16_t BgL_arg1252z00_2925;

													BgL_arg1250z00_2924 =
														BGL_BIGNUM_U16VECT(BgL_rz00_1286);
													{	/* Unsafe/bignumber.scm 236 */
														uint16_t BgL_res2319z00_2926;

														{	/* Unsafe/bignumber.scm 236 */
															long BgL_tmpz00_6380;

															BgL_tmpz00_6380 = (long) (BgL_digitz00_2923);
															BgL_res2319z00_2926 =
																(uint16_t) (BgL_tmpz00_6380);
														}
														BgL_arg1252z00_2925 = BgL_res2319z00_2926;
													}
													{	/* Unsafe/bignumber.scm 236 */
														long BgL_tmpz00_6383;

														BgL_tmpz00_6383 = (long) (BgL_iz00_2922);
														BGL_U16VSET(BgL_arg1250z00_2924, BgL_tmpz00_6383,
															BgL_arg1252z00_2925);
													} BUNSPEC;
										}}}
										{	/* Unsafe/bignumber.scm 289 */
											long BgL_arg1287z00_2928;
											long BgL_arg1288z00_2929;

											BgL_arg1287z00_2928 = (BgL_iz00_2892 + ((long) 1));
											{	/* Unsafe/bignumber.scm 289 */
												long BgL_res2321z00_2933;

												BgL_res2321z00_2933 = (BgL_xz00_2893 / ((long) 16384));
												BgL_arg1288z00_2929 = BgL_res2321z00_2933;
											}
											{
												long BgL_xz00_6389;
												long BgL_iz00_6388;

												BgL_iz00_6388 = BgL_arg1287z00_2928;
												BgL_xz00_6389 = BgL_arg1288z00_2929;
												BgL_xz00_2893 = BgL_xz00_6389;
												BgL_iz00_2892 = BgL_iz00_6388;
												goto BgL_loop2z00_2891;
											}
										}
									}
							}
						}
					else
						{	/* Unsafe/bignumber.scm 277 */
							long BgL_arg1291z00_1301;
							long BgL_arg1292z00_1302;

							BgL_arg1291z00_1301 = (BgL_nbzd2digitszd2_1282 + ((long) 1));
							{	/* Unsafe/bignumber.scm 277 */
								long BgL_res2323z00_2940;

								BgL_res2323z00_2940 = (BgL_xz00_1283 / ((long) 16384));
								BgL_arg1292z00_1302 = BgL_res2323z00_2940;
							}
							{
								long BgL_xz00_6393;
								long BgL_nbzd2digitszd2_6392;

								BgL_nbzd2digitszd2_6392 = BgL_arg1291z00_1301;
								BgL_xz00_6393 = BgL_arg1292z00_1302;
								BgL_xz00_1283 = BgL_xz00_6393;
								BgL_nbzd2digitszd2_1282 = BgL_nbzd2digitszd2_6392;
								goto BgL_zc3z04anonymousza31278ze3z87_1284;
							}
						}
				}
			}
		}

	}



/* $$elong->bignum */
	BGL_EXPORTED_DEF obj_t bgl_elong_to_bignum(long BgL_nz00_22)
	{
		{	/* Unsafe/bignumber.scm 292 */
			{	/* Unsafe/bignumber.scm 293 */
				long BgL_negzd2nzd2_1306;

				if ((BgL_nz00_22 < ((long) 0)))
					{	/* Unsafe/bignumber.scm 293 */
						BgL_negzd2nzd2_1306 = BgL_nz00_22;
					}
				else
					{	/* Unsafe/bignumber.scm 293 */
						long BgL_res2325z00_2946;

						{	/* Unsafe/bignumber.scm 293 */
							long BgL_tmpz00_6396;

							BgL_tmpz00_6396 = (((long) 0) - BgL_nz00_22);
							BgL_res2325z00_2946 = (long) (BgL_tmpz00_6396);
						}
						BgL_negzd2nzd2_1306 = BgL_res2325z00_2946;
					}
				{
					long BgL_nbzd2digitszd2_1308;
					long BgL_xz00_1309;

					BgL_nbzd2digitszd2_1308 = ((long) 0);
					BgL_xz00_1309 = BgL_negzd2nzd2_1306;
				BgL_zc3z04anonymousza31297ze3z87_1310:
					if ((BgL_xz00_1309 == (long) (((long) 0))))
						{	/* Unsafe/bignumber.scm 298 */
							obj_t BgL_rz00_1312;

							{	/* Unsafe/bignumber.scm 298 */
								long BgL_arg1311z00_1328;

								BgL_arg1311z00_1328 = (BgL_nbzd2digitszd2_1308 + ((long) 1));
								{	/* Unsafe/bignumber.scm 298 */
									obj_t BgL_res2328z00_2956;

									{	/* Unsafe/bignumber.scm 298 */
										int BgL_lenz00_2952;

										BgL_lenz00_2952 = (int) (BgL_arg1311z00_1328);
										{	/* Unsafe/bignumber.scm 226 */
											obj_t BgL_arg1227z00_2953;

											{	/* Unsafe/bignumber.scm 226 */

												BgL_arg1227z00_2953 =
													BGl_makezd2u16vectorzd2zz__srfi4z00(
													(long) (BgL_lenz00_2952), (uint16_t) (0));
											}
											BgL_res2328z00_2956 =
												bgl_make_bignum(BgL_arg1227z00_2953);
									}}
									BgL_rz00_1312 = BgL_res2328z00_2956;
							}}
							if ((BgL_nz00_22 < ((long) 0)))
								{	/* Unsafe/bignumber.scm 232 */
									obj_t BgL_arg1243z00_2962;
									uint16_t BgL_arg1245z00_2963;

									BgL_arg1243z00_2962 = BGL_BIGNUM_U16VECT(BgL_rz00_1312);
									{	/* Unsafe/bignumber.scm 232 */
										uint16_t BgL_res2330z00_2964;

										BgL_res2330z00_2964 = (uint16_t) (((long) 0));
										BgL_arg1245z00_2963 = BgL_res2330z00_2964;
									}
									BGL_U16VSET(BgL_arg1243z00_2962, ((long) 0),
										BgL_arg1245z00_2963);
									BUNSPEC;
								}
							else
								{	/* Unsafe/bignumber.scm 232 */
									obj_t BgL_arg1243z00_2967;
									uint16_t BgL_arg1245z00_2968;

									BgL_arg1243z00_2967 = BGL_BIGNUM_U16VECT(BgL_rz00_1312);
									{	/* Unsafe/bignumber.scm 232 */
										uint16_t BgL_res2331z00_2969;

										BgL_res2331z00_2969 = (uint16_t) (((long) 1));
										BgL_arg1245z00_2968 = BgL_res2331z00_2969;
									}
									BGL_U16VSET(BgL_arg1243z00_2967, ((long) 0),
										BgL_arg1245z00_2968);
									BUNSPEC;
								}
							{
								int BgL_iz00_2991;
								long BgL_xz00_2992;

								BgL_iz00_2991 = (int) (((long) 1));
								BgL_xz00_2992 = BgL_negzd2nzd2_1306;
							BgL_loop2z00_2990:
								if ((BgL_xz00_2992 == ((long) 0)))
									{	/* Unsafe/bignumber.scm 303 */
										return BgL_rz00_1312;
									}
								else
									{	/* Unsafe/bignumber.scm 303 */
										{	/* Unsafe/bignumber.scm 308 */
											long BgL_arg1302z00_2997;

											{	/* Unsafe/bignumber.scm 308 */
												long BgL_arg1303z00_2998;

												{	/* Unsafe/bignumber.scm 308 */
													long BgL_arg1304z00_2999;

													{	/* Unsafe/bignumber.scm 308 */
														long BgL_arg1306z00_3000;

														BgL_arg1306z00_3000 = (long) (((long) 16384));
														{	/* Unsafe/bignumber.scm 308 */
															long BgL_res2333z00_3002;

															BgL_res2333z00_3002 =
																(BgL_xz00_2992 % BgL_arg1306z00_3000);
															BgL_arg1304z00_2999 = BgL_res2333z00_3002;
													}}
													BgL_arg1303z00_2998 = (long) (BgL_arg1304z00_2999);
												}
												BgL_arg1302z00_2997 =
													(((long) 0) - BgL_arg1303z00_2998);
											}
											{	/* Unsafe/bignumber.scm 305 */
												int BgL_digitz00_3009;

												BgL_digitz00_3009 = (int) (BgL_arg1302z00_2997);
												{	/* Unsafe/bignumber.scm 236 */
													obj_t BgL_arg1250z00_3010;
													uint16_t BgL_arg1252z00_3011;

													BgL_arg1250z00_3010 =
														BGL_BIGNUM_U16VECT(BgL_rz00_1312);
													{	/* Unsafe/bignumber.scm 236 */
														uint16_t BgL_res2335z00_3012;

														{	/* Unsafe/bignumber.scm 236 */
															long BgL_tmpz00_6423;

															BgL_tmpz00_6423 = (long) (BgL_digitz00_3009);
															BgL_res2335z00_3012 =
																(uint16_t) (BgL_tmpz00_6423);
														}
														BgL_arg1252z00_3011 = BgL_res2335z00_3012;
													}
													{	/* Unsafe/bignumber.scm 236 */
														long BgL_tmpz00_6426;

														BgL_tmpz00_6426 = (long) (BgL_iz00_2991);
														BGL_U16VSET(BgL_arg1250z00_3010, BgL_tmpz00_6426,
															BgL_arg1252z00_3011);
													} BUNSPEC;
										}}}
										{	/* Unsafe/bignumber.scm 309 */
											long BgL_arg1308z00_3014;
											long BgL_arg1309z00_3015;

											BgL_arg1308z00_3014 =
												((long) (BgL_iz00_2991) + ((long) 1));
											{	/* Unsafe/bignumber.scm 309 */
												long BgL_res2337z00_3019;

												{	/* Unsafe/bignumber.scm 309 */
													long BgL_n2z00_3021;

													BgL_n2z00_3021 = (long) (((long) 16384));
													BgL_res2337z00_3019 =
														(BgL_xz00_2992 / BgL_n2z00_3021);
												}
												BgL_arg1309z00_3015 = BgL_res2337z00_3019;
											}
											{
												long BgL_xz00_6435;
												int BgL_iz00_6433;

												BgL_iz00_6433 = (int) (BgL_arg1308z00_3014);
												BgL_xz00_6435 = BgL_arg1309z00_3015;
												BgL_xz00_2992 = BgL_xz00_6435;
												BgL_iz00_2991 = BgL_iz00_6433;
												goto BgL_loop2z00_2990;
											}
										}
									}
							}
						}
					else
						{	/* Unsafe/bignumber.scm 297 */
							long BgL_arg1312z00_1329;
							long BgL_arg1313z00_1330;

							BgL_arg1312z00_1329 = (BgL_nbzd2digitszd2_1308 + ((long) 1));
							{	/* Unsafe/bignumber.scm 297 */
								long BgL_arg1314z00_1331;

								BgL_arg1314z00_1331 =
									((long) (((long) 1)) << (int) (((long) 15)));
								{	/* Unsafe/bignumber.scm 297 */
									long BgL_res2340z00_3028;

									BgL_res2340z00_3028 = (BgL_xz00_1309 / BgL_arg1314z00_1331);
									BgL_arg1313z00_1330 = BgL_res2340z00_3028;
							}}
							{
								long BgL_xz00_6443;
								long BgL_nbzd2digitszd2_6442;

								BgL_nbzd2digitszd2_6442 = BgL_arg1312z00_1329;
								BgL_xz00_6443 = BgL_arg1313z00_1330;
								BgL_xz00_1309 = BgL_xz00_6443;
								BgL_nbzd2digitszd2_1308 = BgL_nbzd2digitszd2_6442;
								goto BgL_zc3z04anonymousza31297ze3z87_1310;
							}
						}
				}
			}
		}

	}



/* &$$elong->bignum */
	obj_t BGl_z62z42z42elongzd2ze3bignumz53zz__bignumz00(obj_t BgL_envz00_6032,
		obj_t BgL_nz00_6033)
	{
		{	/* Unsafe/bignumber.scm 292 */
			{	/* Unsafe/bignumber.scm 293 */
				long BgL_auxz00_6444;

				{	/* Unsafe/bignumber.scm 293 */
					obj_t BgL_tmpz00_6445;

					if (ELONGP(BgL_nz00_6033))
						{	/* Unsafe/bignumber.scm 293 */
							BgL_tmpz00_6445 = BgL_nz00_6033;
						}
					else
						{
							obj_t BgL_auxz00_6448;

							BgL_auxz00_6448 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 11460)), BGl_string3192z00zz__bignumz00,
								BGl_string3193z00zz__bignumz00, BgL_nz00_6033);
							FAILURE(BgL_auxz00_6448, BFALSE, BFALSE);
						}
					BgL_auxz00_6444 = BELONG_TO_LONG(BgL_tmpz00_6445);
				}
				return bgl_elong_to_bignum(BgL_auxz00_6444);
			}
		}

	}



/* $$llong->bignum */
	BGL_EXPORTED_DEF obj_t bgl_llong_to_bignum(BGL_LONGLONG_T BgL_nz00_23)
	{
		{	/* Unsafe/bignumber.scm 312 */
			{	/* Unsafe/bignumber.scm 313 */
				BGL_LONGLONG_T BgL_negzd2nzd2_1334;

				if ((BgL_nz00_23 < ((BGL_LONGLONG_T) 0)))
					{	/* Unsafe/bignumber.scm 313 */
						BgL_negzd2nzd2_1334 = BgL_nz00_23;
					}
				else
					{	/* Unsafe/bignumber.scm 313 */
						BgL_negzd2nzd2_1334 = (((BGL_LONGLONG_T) 0) - BgL_nz00_23);
					}
				{
					long BgL_nbzd2digitszd2_1336;
					BGL_LONGLONG_T BgL_xz00_1337;

					BgL_nbzd2digitszd2_1336 = ((long) 0);
					BgL_xz00_1337 = BgL_negzd2nzd2_1334;
				BgL_zc3z04anonymousza31316ze3z87_1338:
					if ((BgL_xz00_1337 == LONG_TO_LLONG(((long) 0))))
						{	/* Unsafe/bignumber.scm 318 */
							obj_t BgL_rz00_1340;

							{	/* Unsafe/bignumber.scm 318 */
								long BgL_arg1331z00_1356;

								BgL_arg1331z00_1356 = (BgL_nbzd2digitszd2_1336 + ((long) 1));
								{	/* Unsafe/bignumber.scm 318 */
									obj_t BgL_res2345z00_3044;

									{	/* Unsafe/bignumber.scm 318 */
										int BgL_lenz00_3040;

										BgL_lenz00_3040 = (int) (BgL_arg1331z00_1356);
										{	/* Unsafe/bignumber.scm 226 */
											obj_t BgL_arg1227z00_3041;

											{	/* Unsafe/bignumber.scm 226 */

												BgL_arg1227z00_3041 =
													BGl_makezd2u16vectorzd2zz__srfi4z00(
													(long) (BgL_lenz00_3040), (uint16_t) (0));
											}
											BgL_res2345z00_3044 =
												bgl_make_bignum(BgL_arg1227z00_3041);
									}}
									BgL_rz00_1340 = BgL_res2345z00_3044;
							}}
							if ((BgL_nz00_23 < ((BGL_LONGLONG_T) 0)))
								{	/* Unsafe/bignumber.scm 232 */
									obj_t BgL_arg1243z00_3050;
									uint16_t BgL_arg1245z00_3051;

									BgL_arg1243z00_3050 = BGL_BIGNUM_U16VECT(BgL_rz00_1340);
									{	/* Unsafe/bignumber.scm 232 */
										uint16_t BgL_res2347z00_3052;

										BgL_res2347z00_3052 = (uint16_t) (((long) 0));
										BgL_arg1245z00_3051 = BgL_res2347z00_3052;
									}
									BGL_U16VSET(BgL_arg1243z00_3050, ((long) 0),
										BgL_arg1245z00_3051);
									BUNSPEC;
								}
							else
								{	/* Unsafe/bignumber.scm 232 */
									obj_t BgL_arg1243z00_3055;
									uint16_t BgL_arg1245z00_3056;

									BgL_arg1243z00_3055 = BGL_BIGNUM_U16VECT(BgL_rz00_1340);
									{	/* Unsafe/bignumber.scm 232 */
										uint16_t BgL_res2348z00_3057;

										BgL_res2348z00_3057 = (uint16_t) (((long) 1));
										BgL_arg1245z00_3056 = BgL_res2348z00_3057;
									}
									BGL_U16VSET(BgL_arg1243z00_3055, ((long) 0),
										BgL_arg1245z00_3056);
									BUNSPEC;
								}
							{
								long BgL_iz00_3079;
								BGL_LONGLONG_T BgL_xz00_3080;

								BgL_iz00_3079 = ((long) 1);
								BgL_xz00_3080 = BgL_negzd2nzd2_1334;
							BgL_loop2z00_3078:
								if ((BgL_xz00_3080 == ((BGL_LONGLONG_T) 0)))
									{	/* Unsafe/bignumber.scm 323 */
										return BgL_rz00_1340;
									}
								else
									{	/* Unsafe/bignumber.scm 323 */
										{	/* Unsafe/bignumber.scm 328 */
											long BgL_arg1322z00_3085;

											{	/* Unsafe/bignumber.scm 328 */
												long BgL_arg1324z00_3086;

												{	/* Unsafe/bignumber.scm 328 */
													BGL_LONGLONG_T BgL_arg1325z00_3087;

													{	/* Unsafe/bignumber.scm 328 */
														BGL_LONGLONG_T BgL_arg1326z00_3088;

														BgL_arg1326z00_3088 = LONG_TO_LLONG(((long) 16384));
														{	/* Unsafe/bignumber.scm 328 */
															BGL_LONGLONG_T BgL_res2350z00_3090;

															BgL_res2350z00_3090 =
																(BgL_xz00_3080 % BgL_arg1326z00_3088);
															BgL_arg1325z00_3087 = BgL_res2350z00_3090;
													}}
													BgL_arg1324z00_3086 =
														LLONG_TO_LONG(BgL_arg1325z00_3087);
												}
												BgL_arg1322z00_3085 =
													(((long) 0) - BgL_arg1324z00_3086);
											}
											{	/* Unsafe/bignumber.scm 325 */
												int BgL_iz00_3096;
												int BgL_digitz00_3097;

												BgL_iz00_3096 = (int) (BgL_iz00_3079);
												BgL_digitz00_3097 = (int) (BgL_arg1322z00_3085);
												{	/* Unsafe/bignumber.scm 236 */
													obj_t BgL_arg1250z00_3098;
													uint16_t BgL_arg1252z00_3099;

													BgL_arg1250z00_3098 =
														BGL_BIGNUM_U16VECT(BgL_rz00_1340);
													{	/* Unsafe/bignumber.scm 236 */
														uint16_t BgL_res2352z00_3100;

														{	/* Unsafe/bignumber.scm 236 */
															long BgL_tmpz00_6482;

															BgL_tmpz00_6482 = (long) (BgL_digitz00_3097);
															BgL_res2352z00_3100 =
																(uint16_t) (BgL_tmpz00_6482);
														}
														BgL_arg1252z00_3099 = BgL_res2352z00_3100;
													}
													{	/* Unsafe/bignumber.scm 236 */
														long BgL_tmpz00_6485;

														BgL_tmpz00_6485 = (long) (BgL_iz00_3096);
														BGL_U16VSET(BgL_arg1250z00_3098, BgL_tmpz00_6485,
															BgL_arg1252z00_3099);
													} BUNSPEC;
										}}}
										{	/* Unsafe/bignumber.scm 329 */
											long BgL_arg1328z00_3102;
											BGL_LONGLONG_T BgL_arg1329z00_3103;

											BgL_arg1328z00_3102 = (BgL_iz00_3079 + ((long) 1));
											{	/* Unsafe/bignumber.scm 329 */
												BGL_LONGLONG_T BgL_res2354z00_3107;

												{	/* Unsafe/bignumber.scm 329 */
													BGL_LONGLONG_T BgL_n2z00_3109;

													BgL_n2z00_3109 = LONG_TO_LLONG(((long) 16384));
													BgL_res2354z00_3107 =
														(BgL_xz00_3080 / BgL_n2z00_3109);
												}
												BgL_arg1329z00_3103 = BgL_res2354z00_3107;
											}
											{
												BGL_LONGLONG_T BgL_xz00_6492;
												long BgL_iz00_6491;

												BgL_iz00_6491 = BgL_arg1328z00_3102;
												BgL_xz00_6492 = BgL_arg1329z00_3103;
												BgL_xz00_3080 = BgL_xz00_6492;
												BgL_iz00_3079 = BgL_iz00_6491;
												goto BgL_loop2z00_3078;
											}
										}
									}
							}
						}
					else
						{	/* Unsafe/bignumber.scm 317 */
							long BgL_arg1333z00_1357;
							BGL_LONGLONG_T BgL_arg1334z00_1358;

							BgL_arg1333z00_1357 = (BgL_nbzd2digitszd2_1336 + ((long) 1));
							{	/* Unsafe/bignumber.scm 317 */
								BGL_LONGLONG_T BgL_arg1335z00_1359;

								BgL_arg1335z00_1359 =
									(LONG_TO_LLONG(((long) 1)) << (int) (((long) 30)));
								{	/* Unsafe/bignumber.scm 317 */
									BGL_LONGLONG_T BgL_res2357z00_3116;

									BgL_res2357z00_3116 = (BgL_xz00_1337 / BgL_arg1335z00_1359);
									BgL_arg1334z00_1358 = BgL_res2357z00_3116;
							}}
							{
								BGL_LONGLONG_T BgL_xz00_6499;
								long BgL_nbzd2digitszd2_6498;

								BgL_nbzd2digitszd2_6498 = BgL_arg1333z00_1357;
								BgL_xz00_6499 = BgL_arg1334z00_1358;
								BgL_xz00_1337 = BgL_xz00_6499;
								BgL_nbzd2digitszd2_1336 = BgL_nbzd2digitszd2_6498;
								goto BgL_zc3z04anonymousza31316ze3z87_1338;
							}
						}
				}
			}
		}

	}



/* &$$llong->bignum */
	obj_t BGl_z62z42z42llongzd2ze3bignumz53zz__bignumz00(obj_t BgL_envz00_6034,
		obj_t BgL_nz00_6035)
	{
		{	/* Unsafe/bignumber.scm 312 */
			{	/* Unsafe/bignumber.scm 313 */
				BGL_LONGLONG_T BgL_auxz00_6500;

				{	/* Unsafe/bignumber.scm 313 */
					obj_t BgL_tmpz00_6501;

					if (LLONGP(BgL_nz00_6035))
						{	/* Unsafe/bignumber.scm 313 */
							BgL_tmpz00_6501 = BgL_nz00_6035;
						}
					else
						{
							obj_t BgL_auxz00_6504;

							BgL_auxz00_6504 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 12150)), BGl_string3194z00zz__bignumz00,
								BGl_string3195z00zz__bignumz00, BgL_nz00_6035);
							FAILURE(BgL_auxz00_6504, BFALSE, BFALSE);
						}
					BgL_auxz00_6500 = BLLONG_TO_LLONG(BgL_tmpz00_6501);
				}
				return bgl_llong_to_bignum(BgL_auxz00_6500);
			}
		}

	}



/* $$uint64->bignum */
	BGL_EXPORTED_DEF obj_t bgl_uint64_to_bignum(uint64_t BgL_nz00_24)
	{
		{	/* Unsafe/bignumber.scm 332 */
			{	/* Unsafe/bignumber.scm 333 */
				uint64_t BgL_negzd2nzd2_1362;

				if ((BgL_nz00_24 < (uint64_t) (0)))
					{	/* Unsafe/bignumber.scm 333 */
						BgL_negzd2nzd2_1362 = BgL_nz00_24;
					}
				else
					{	/* Unsafe/bignumber.scm 333 */
						BgL_negzd2nzd2_1362 = ((uint64_t) (0) - BgL_nz00_24);
					}
				{
					long BgL_nbzd2digitszd2_1364;
					uint64_t BgL_xz00_1365;

					BgL_nbzd2digitszd2_1364 = ((long) 0);
					BgL_xz00_1365 = BgL_negzd2nzd2_1362;
				BgL_zc3z04anonymousza31337ze3z87_1366:
					{	/* Unsafe/bignumber.scm 336 */
						bool_t BgL_test3336z00_6513;

						{	/* Unsafe/bignumber.scm 336 */
							bool_t BgL_res2360z00_3125;

							BgL_res2360z00_3125 = (BgL_xz00_1365 == (uint64_t) (0));
							BgL_test3336z00_6513 = BgL_res2360z00_3125;
						}
						if (BgL_test3336z00_6513)
							{	/* Unsafe/bignumber.scm 338 */
								obj_t BgL_rz00_1368;

								{	/* Unsafe/bignumber.scm 338 */
									long BgL_arg1351z00_1384;

									BgL_arg1351z00_1384 = (BgL_nbzd2digitszd2_1364 + ((long) 1));
									{	/* Unsafe/bignumber.scm 338 */
										obj_t BgL_res2362z00_3132;

										{	/* Unsafe/bignumber.scm 338 */
											int BgL_lenz00_3128;

											BgL_lenz00_3128 = (int) (BgL_arg1351z00_1384);
											{	/* Unsafe/bignumber.scm 226 */
												obj_t BgL_arg1227z00_3129;

												{	/* Unsafe/bignumber.scm 226 */

													BgL_arg1227z00_3129 =
														BGl_makezd2u16vectorzd2zz__srfi4z00(
														(long) (BgL_lenz00_3128), (uint16_t) (0));
												}
												BgL_res2362z00_3132 =
													bgl_make_bignum(BgL_arg1227z00_3129);
										}}
										BgL_rz00_1368 = BgL_res2362z00_3132;
								}}
								if ((BgL_nz00_24 < (uint64_t) (0)))
									{	/* Unsafe/bignumber.scm 232 */
										obj_t BgL_arg1243z00_3138;
										uint16_t BgL_arg1245z00_3139;

										BgL_arg1243z00_3138 = BGL_BIGNUM_U16VECT(BgL_rz00_1368);
										{	/* Unsafe/bignumber.scm 232 */
											uint16_t BgL_res2364z00_3140;

											BgL_res2364z00_3140 = (uint16_t) (((long) 0));
											BgL_arg1245z00_3139 = BgL_res2364z00_3140;
										}
										BGL_U16VSET(BgL_arg1243z00_3138, ((long) 0),
											BgL_arg1245z00_3139);
										BUNSPEC;
									}
								else
									{	/* Unsafe/bignumber.scm 232 */
										obj_t BgL_arg1243z00_3143;
										uint16_t BgL_arg1245z00_3144;

										BgL_arg1243z00_3143 = BGL_BIGNUM_U16VECT(BgL_rz00_1368);
										{	/* Unsafe/bignumber.scm 232 */
											uint16_t BgL_res2365z00_3145;

											BgL_res2365z00_3145 = (uint16_t) (((long) 1));
											BgL_arg1245z00_3144 = BgL_res2365z00_3145;
										}
										BGL_U16VSET(BgL_arg1243z00_3143, ((long) 0),
											BgL_arg1245z00_3144);
										BUNSPEC;
									}
								{
									long BgL_iz00_3172;
									uint64_t BgL_xz00_3173;

									BgL_iz00_3172 = ((long) 1);
									BgL_xz00_3173 = BgL_negzd2nzd2_1362;
								BgL_loop2z00_3171:
									{	/* Unsafe/bignumber.scm 343 */
										bool_t BgL_test3338z00_6528;

										{	/* Unsafe/bignumber.scm 343 */
											bool_t BgL_res2366z00_3175;

											BgL_res2366z00_3175 = (BgL_xz00_3173 == (uint64_t) (0));
											BgL_test3338z00_6528 = BgL_res2366z00_3175;
										}
										if (BgL_test3338z00_6528)
											{	/* Unsafe/bignumber.scm 343 */
												return BgL_rz00_1368;
											}
										else
											{	/* Unsafe/bignumber.scm 343 */
												{	/* Unsafe/bignumber.scm 348 */
													long BgL_arg1342z00_3178;

													{	/* Unsafe/bignumber.scm 348 */
														long BgL_arg1343z00_3179;

														{	/* Unsafe/bignumber.scm 348 */
															uint64_t BgL_arg1344z00_3180;

															{	/* Unsafe/bignumber.scm 348 */
																uint64_t BgL_arg1345z00_3181;

																BgL_arg1345z00_3181 =
																	(uint64_t) (((long) 16384));
																{	/* Unsafe/bignumber.scm 348 */
																	uint64_t BgL_res2367z00_3183;

																	{	/* Unsafe/bignumber.scm 348 */
																		int64_t BgL_tmpz00_6531;

																		BgL_tmpz00_6531 =
																			(int64_t) (BgL_arg1345z00_3181);
																		BgL_res2367z00_3183 =
																			(BgL_xz00_3173 % BgL_tmpz00_6531);
																	}
																	BgL_arg1344z00_3180 = BgL_res2367z00_3183;
															}}
															{	/* Unsafe/bignumber.scm 348 */
																long BgL_res2369z00_3186;

																{	/* Unsafe/bignumber.scm 348 */
																	long BgL_arg2195z00_3188;

																	BgL_arg2195z00_3188 =
																		(long) (BgL_arg1344z00_3180);
																	{	/* Unsafe/bignumber.scm 348 */
																		long BgL_res2368z00_3189;

																		BgL_res2368z00_3189 =
																			(long) (BgL_arg2195z00_3188);
																		BgL_res2369z00_3186 = BgL_res2368z00_3189;
																}}
																BgL_arg1343z00_3179 = BgL_res2369z00_3186;
														}}
														BgL_arg1342z00_3178 =
															(((long) 0) - BgL_arg1343z00_3179);
													}
													{	/* Unsafe/bignumber.scm 345 */
														int BgL_iz00_3194;
														int BgL_digitz00_3195;

														BgL_iz00_3194 = (int) (BgL_iz00_3172);
														BgL_digitz00_3195 = (int) (BgL_arg1342z00_3178);
														{	/* Unsafe/bignumber.scm 236 */
															obj_t BgL_arg1250z00_3196;
															uint16_t BgL_arg1252z00_3197;

															BgL_arg1250z00_3196 =
																BGL_BIGNUM_U16VECT(BgL_rz00_1368);
															{	/* Unsafe/bignumber.scm 236 */
																uint16_t BgL_res2371z00_3198;

																{	/* Unsafe/bignumber.scm 236 */
																	long BgL_tmpz00_6540;

																	BgL_tmpz00_6540 = (long) (BgL_digitz00_3195);
																	BgL_res2371z00_3198 =
																		(uint16_t) (BgL_tmpz00_6540);
																}
																BgL_arg1252z00_3197 = BgL_res2371z00_3198;
															}
															{	/* Unsafe/bignumber.scm 236 */
																long BgL_tmpz00_6543;

																BgL_tmpz00_6543 = (long) (BgL_iz00_3194);
																BGL_U16VSET(BgL_arg1250z00_3196,
																	BgL_tmpz00_6543, BgL_arg1252z00_3197);
															} BUNSPEC;
												}}}
												{	/* Unsafe/bignumber.scm 349 */
													long BgL_arg1347z00_3200;
													uint64_t BgL_arg1348z00_3201;

													BgL_arg1347z00_3200 = (BgL_iz00_3172 + ((long) 1));
													{	/* Unsafe/bignumber.scm 349 */
														uint64_t BgL_res2373z00_3205;

														{	/* Unsafe/bignumber.scm 349 */
															uint64_t BgL_n2z00_3207;

															BgL_n2z00_3207 = (uint64_t) (((long) 16384));
															{	/* Unsafe/bignumber.scm 349 */
																int64_t BgL_tmpz00_6548;

																BgL_tmpz00_6548 = (int64_t) (BgL_n2z00_3207);
																BgL_res2373z00_3205 =
																	(BgL_xz00_3173 / BgL_tmpz00_6548);
														}}
														BgL_arg1348z00_3201 = BgL_res2373z00_3205;
													}
													{
														uint64_t BgL_xz00_6552;
														long BgL_iz00_6551;

														BgL_iz00_6551 = BgL_arg1347z00_3200;
														BgL_xz00_6552 = BgL_arg1348z00_3201;
														BgL_xz00_3173 = BgL_xz00_6552;
														BgL_iz00_3172 = BgL_iz00_6551;
														goto BgL_loop2z00_3171;
													}
												}
											}
									}
								}
							}
						else
							{	/* Unsafe/bignumber.scm 337 */
								long BgL_arg1352z00_1385;
								uint64_t BgL_arg1353z00_1386;

								BgL_arg1352z00_1385 = (BgL_nbzd2digitszd2_1364 + ((long) 1));
								{	/* Unsafe/bignumber.scm 337 */
									BGL_LONGLONG_T BgL_arg1354z00_1387;

									BgL_arg1354z00_1387 =
										(LONG_TO_LLONG(((long) 1)) << (int) (((long) 30)));
									{	/* Unsafe/bignumber.scm 337 */
										uint64_t BgL_res2376z00_3214;

										{	/* Unsafe/bignumber.scm 337 */
											uint64_t BgL_n2z00_3213;

											BgL_n2z00_3213 = (uint64_t) (BgL_arg1354z00_1387);
											{	/* Unsafe/bignumber.scm 337 */
												int64_t BgL_tmpz00_6558;

												BgL_tmpz00_6558 = (int64_t) (BgL_n2z00_3213);
												BgL_res2376z00_3214 = (BgL_xz00_1365 / BgL_tmpz00_6558);
										}}
										BgL_arg1353z00_1386 = BgL_res2376z00_3214;
								}}
								{
									uint64_t BgL_xz00_6562;
									long BgL_nbzd2digitszd2_6561;

									BgL_nbzd2digitszd2_6561 = BgL_arg1352z00_1385;
									BgL_xz00_6562 = BgL_arg1353z00_1386;
									BgL_xz00_1365 = BgL_xz00_6562;
									BgL_nbzd2digitszd2_1364 = BgL_nbzd2digitszd2_6561;
									goto BgL_zc3z04anonymousza31337ze3z87_1366;
								}
							}
					}
				}
			}
		}

	}



/* &$$uint64->bignum */
	obj_t BGl_z62z42z42uint64zd2ze3bignumz53zz__bignumz00(obj_t BgL_envz00_6036,
		obj_t BgL_nz00_6037)
	{
		{	/* Unsafe/bignumber.scm 332 */
			{	/* Unsafe/bignumber.scm 333 */
				uint64_t BgL_auxz00_6563;

				{	/* Unsafe/bignumber.scm 333 */
					obj_t BgL_tmpz00_6564;

					if (BGL_UINT64P(BgL_nz00_6037))
						{	/* Unsafe/bignumber.scm 333 */
							BgL_tmpz00_6564 = BgL_nz00_6037;
						}
					else
						{
							obj_t BgL_auxz00_6567;

							BgL_auxz00_6567 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 12829)), BGl_string3196z00zz__bignumz00,
								BGl_string3197z00zz__bignumz00, BgL_nz00_6037);
							FAILURE(BgL_auxz00_6567, BFALSE, BFALSE);
						}
					BgL_auxz00_6563 = BGL_BINT64_TO_INT64(BgL_tmpz00_6564);
				}
				return bgl_uint64_to_bignum(BgL_auxz00_6563);
			}
		}

	}



/* $$fixnum->bignum */
	BGL_EXPORTED_DEF obj_t bgl_long_to_bignum(long BgL_nz00_25)
	{
		{	/* Unsafe/bignumber.scm 361 */
			{	/* Unsafe/bignumber.scm 362 */
				bool_t BgL_test3340z00_6573;

				if ((BgL_nz00_25 < ((long) -16)))
					{	/* Unsafe/bignumber.scm 362 */
						BgL_test3340z00_6573 = ((bool_t) 1);
					}
				else
					{	/* Unsafe/bignumber.scm 362 */
						BgL_test3340z00_6573 = (((long) 16) < BgL_nz00_25);
					}
				if (BgL_test3340z00_6573)
					{	/* Unsafe/bignumber.scm 362 */
						return
							BGl_z42z42fixnumzd2ze3bignumzd2freshze3zz__bignumz00(BgL_nz00_25);
					}
				else
					{	/* Unsafe/bignumber.scm 362 */
						return
							VECTOR_REF(BGl_preallocatedzd2bignumszd2zz__bignumz00,
							(BgL_nz00_25 + ((long) 16)));
		}}}

	}



/* &$$fixnum->bignum */
	obj_t BGl_z62z42z42fixnumzd2ze3bignumz53zz__bignumz00(obj_t BgL_envz00_6038,
		obj_t BgL_nz00_6039)
	{
		{	/* Unsafe/bignumber.scm 361 */
			{	/* Unsafe/bignumber.scm 362 */
				long BgL_auxz00_6580;

				{	/* Unsafe/bignumber.scm 362 */
					obj_t BgL_tmpz00_6581;

					if (INTEGERP(BgL_nz00_6039))
						{	/* Unsafe/bignumber.scm 362 */
							BgL_tmpz00_6581 = BgL_nz00_6039;
						}
					else
						{
							obj_t BgL_auxz00_6584;

							BgL_auxz00_6584 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 13729)), BGl_string3198z00zz__bignumz00,
								BGl_string3191z00zz__bignumz00, BgL_nz00_6039);
							FAILURE(BgL_auxz00_6584, BFALSE, BFALSE);
						}
					BgL_auxz00_6580 = (long) CINT(BgL_tmpz00_6581);
				}
				return bgl_long_to_bignum(BgL_auxz00_6580);
			}
		}

	}



/* $<bx */
	bool_t BGl_z42zc3bxz81zz__bignumz00(obj_t BgL_xz00_28, obj_t BgL_yz00_29)
	{
		{	/* Unsafe/bignumber.scm 386 */
			{	/* Unsafe/bignumber.scm 387 */
				bool_t BgL_test3343z00_6590;

				{	/* Unsafe/bignumber.scm 387 */
					long BgL_arg1388z00_1435;
					long BgL_arg1389z00_1436;

					{	/* Unsafe/bignumber.scm 230 */
						uint16_t BgL_arg1239z00_3224;

						{	/* Unsafe/bignumber.scm 230 */
							obj_t BgL_arg1242z00_3225;

							BgL_arg1242z00_3225 = BGL_BIGNUM_U16VECT(BgL_xz00_28);
							BgL_arg1239z00_3224 =
								BGL_U16VREF(BgL_arg1242z00_3225, ((long) 0));
						}
						{	/* Unsafe/bignumber.scm 230 */
							long BgL_res2381z00_3230;

							{	/* Unsafe/bignumber.scm 230 */
								long BgL_arg2198z00_3227;

								BgL_arg2198z00_3227 = (long) (BgL_arg1239z00_3224);
								{	/* Unsafe/bignumber.scm 230 */
									long BgL_res2380z00_3229;

									BgL_res2380z00_3229 = (long) (BgL_arg2198z00_3227);
									BgL_res2381z00_3230 = BgL_res2380z00_3229;
							}}
							BgL_arg1388z00_1435 = BgL_res2381z00_3230;
					}}
					{	/* Unsafe/bignumber.scm 230 */
						uint16_t BgL_arg1239z00_3232;

						{	/* Unsafe/bignumber.scm 230 */
							obj_t BgL_arg1242z00_3233;

							BgL_arg1242z00_3233 = BGL_BIGNUM_U16VECT(BgL_yz00_29);
							BgL_arg1239z00_3232 =
								BGL_U16VREF(BgL_arg1242z00_3233, ((long) 0));
						}
						{	/* Unsafe/bignumber.scm 230 */
							long BgL_res2383z00_3238;

							{	/* Unsafe/bignumber.scm 230 */
								long BgL_arg2198z00_3235;

								BgL_arg2198z00_3235 = (long) (BgL_arg1239z00_3232);
								{	/* Unsafe/bignumber.scm 230 */
									long BgL_res2382z00_3237;

									BgL_res2382z00_3237 = (long) (BgL_arg2198z00_3235);
									BgL_res2383z00_3238 = BgL_res2382z00_3237;
							}}
							BgL_arg1389z00_1436 = BgL_res2383z00_3238;
					}}
					BgL_test3343z00_6590 = (BgL_arg1388z00_1435 == BgL_arg1389z00_1436);
				}
				if (BgL_test3343z00_6590)
					{	/* Unsafe/bignumber.scm 389 */
						long BgL_lenxz00_1418;
						long BgL_lenyz00_1419;

						{	/* Unsafe/bignumber.scm 228 */
							long BgL_arg1229z00_3243;

							{	/* Unsafe/bignumber.scm 228 */
								obj_t BgL_arg1232z00_3244;

								BgL_arg1232z00_3244 = BGL_BIGNUM_U16VECT(BgL_xz00_28);
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_res2385z00_3246;

									BgL_res2385z00_3246 = BGL_HVECTOR_LENGTH(BgL_arg1232z00_3244);
									BgL_arg1229z00_3243 = BgL_res2385z00_3246;
							}}
							{	/* Unsafe/bignumber.scm 228 */
								long BgL_res2387z00_3251;

								{	/* Unsafe/bignumber.scm 228 */
									uint16_t BgL_xz00_3247;

									BgL_xz00_3247 = (uint16_t) (BgL_arg1229z00_3243);
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_arg2198z00_3248;

										BgL_arg2198z00_3248 = (long) (BgL_xz00_3247);
										{	/* Unsafe/bignumber.scm 228 */
											long BgL_res2386z00_3250;

											BgL_res2386z00_3250 = (long) (BgL_arg2198z00_3248);
											BgL_res2387z00_3251 = BgL_res2386z00_3250;
								}}}
								BgL_lenxz00_1418 = BgL_res2387z00_3251;
						}}
						{	/* Unsafe/bignumber.scm 228 */
							long BgL_arg1229z00_3253;

							{	/* Unsafe/bignumber.scm 228 */
								obj_t BgL_arg1232z00_3254;

								BgL_arg1232z00_3254 = BGL_BIGNUM_U16VECT(BgL_yz00_29);
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_res2388z00_3256;

									BgL_res2388z00_3256 = BGL_HVECTOR_LENGTH(BgL_arg1232z00_3254);
									BgL_arg1229z00_3253 = BgL_res2388z00_3256;
							}}
							{	/* Unsafe/bignumber.scm 228 */
								long BgL_res2390z00_3261;

								{	/* Unsafe/bignumber.scm 228 */
									uint16_t BgL_xz00_3257;

									BgL_xz00_3257 = (uint16_t) (BgL_arg1229z00_3253);
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_arg2198z00_3258;

										BgL_arg2198z00_3258 = (long) (BgL_xz00_3257);
										{	/* Unsafe/bignumber.scm 228 */
											long BgL_res2389z00_3260;

											BgL_res2389z00_3260 = (long) (BgL_arg2198z00_3258);
											BgL_res2390z00_3261 = BgL_res2389z00_3260;
								}}}
								BgL_lenyz00_1419 = BgL_res2390z00_3261;
						}}
						if ((BgL_lenxz00_1418 < BgL_lenyz00_1419))
							{	/* Unsafe/bignumber.scm 392 */
								bool_t BgL_test3345z00_6612;

								{	/* Unsafe/bignumber.scm 392 */
									bool_t BgL_res2395z00_3277;

									{	/* Unsafe/bignumber.scm 418 */
										long BgL_arg1393z00_3266;

										{	/* Unsafe/bignumber.scm 230 */
											uint16_t BgL_arg1239z00_3268;

											{	/* Unsafe/bignumber.scm 230 */
												obj_t BgL_arg1242z00_3269;

												BgL_arg1242z00_3269 = BGL_BIGNUM_U16VECT(BgL_xz00_28);
												BgL_arg1239z00_3268 =
													BGL_U16VREF(BgL_arg1242z00_3269, ((long) 0));
											}
											{	/* Unsafe/bignumber.scm 230 */
												long BgL_res2393z00_3274;

												{	/* Unsafe/bignumber.scm 230 */
													long BgL_arg2198z00_3271;

													BgL_arg2198z00_3271 = (long) (BgL_arg1239z00_3268);
													{	/* Unsafe/bignumber.scm 230 */
														long BgL_res2392z00_3273;

														BgL_res2392z00_3273 = (long) (BgL_arg2198z00_3271);
														BgL_res2393z00_3274 = BgL_res2392z00_3273;
												}}
												BgL_arg1393z00_3266 = BgL_res2393z00_3274;
										}}
										BgL_res2395z00_3277 = (BgL_arg1393z00_3266 == ((long) 0));
									}
									BgL_test3345z00_6612 = BgL_res2395z00_3277;
								}
								if (BgL_test3345z00_6612)
									{	/* Unsafe/bignumber.scm 392 */
										return ((bool_t) 0);
									}
								else
									{	/* Unsafe/bignumber.scm 392 */
										return ((bool_t) 1);
									}
							}
						else
							{	/* Unsafe/bignumber.scm 391 */
								if ((BgL_lenyz00_1419 < BgL_lenxz00_1418))
									{	/* Unsafe/bignumber.scm 394 */
										bool_t BgL_res2400z00_3293;

										{	/* Unsafe/bignumber.scm 418 */
											long BgL_arg1393z00_3282;

											{	/* Unsafe/bignumber.scm 230 */
												uint16_t BgL_arg1239z00_3284;

												{	/* Unsafe/bignumber.scm 230 */
													obj_t BgL_arg1242z00_3285;

													BgL_arg1242z00_3285 = BGL_BIGNUM_U16VECT(BgL_xz00_28);
													BgL_arg1239z00_3284 =
														BGL_U16VREF(BgL_arg1242z00_3285, ((long) 0));
												}
												{	/* Unsafe/bignumber.scm 230 */
													long BgL_res2398z00_3290;

													{	/* Unsafe/bignumber.scm 230 */
														long BgL_arg2198z00_3287;

														BgL_arg2198z00_3287 = (long) (BgL_arg1239z00_3284);
														{	/* Unsafe/bignumber.scm 230 */
															long BgL_res2397z00_3289;

															BgL_res2397z00_3289 =
																(long) (BgL_arg2198z00_3287);
															BgL_res2398z00_3290 = BgL_res2397z00_3289;
													}}
													BgL_arg1393z00_3282 = BgL_res2398z00_3290;
											}}
											BgL_res2400z00_3293 = (BgL_arg1393z00_3282 == ((long) 0));
										}
										return BgL_res2400z00_3293;
									}
								else
									{	/* Unsafe/bignumber.scm 396 */
										long BgL_g1045z00_1423;

										BgL_g1045z00_1423 = (BgL_lenxz00_1418 - ((long) 1));
										{
											long BgL_iz00_1425;

											BgL_iz00_1425 = BgL_g1045z00_1423;
										BgL_zc3z04anonymousza31382ze3z87_1426:
											if ((((long) 0) < BgL_iz00_1425))
												{	/* Unsafe/bignumber.scm 398 */
													long BgL_dxz00_1428;
													long BgL_dyz00_1429;

													{	/* Unsafe/bignumber.scm 398 */
														int BgL_iz00_3299;

														BgL_iz00_3299 = (int) (BgL_iz00_1425);
														{	/* Unsafe/bignumber.scm 234 */
															uint16_t BgL_arg1246z00_3300;

															{	/* Unsafe/bignumber.scm 234 */
																obj_t BgL_arg1247z00_3301;

																BgL_arg1247z00_3301 =
																	BGL_BIGNUM_U16VECT(BgL_xz00_28);
																{	/* Unsafe/bignumber.scm 234 */
																	long BgL_tmpz00_6630;

																	BgL_tmpz00_6630 = (long) (BgL_iz00_3299);
																	BgL_arg1246z00_3300 =
																		BGL_U16VREF(BgL_arg1247z00_3301,
																		BgL_tmpz00_6630);
															}}
															{	/* Unsafe/bignumber.scm 234 */
																long BgL_res2404z00_3306;

																{	/* Unsafe/bignumber.scm 234 */
																	long BgL_arg2198z00_3303;

																	BgL_arg2198z00_3303 =
																		(long) (BgL_arg1246z00_3300);
																	{	/* Unsafe/bignumber.scm 234 */
																		long BgL_res2403z00_3305;

																		BgL_res2403z00_3305 =
																			(long) (BgL_arg2198z00_3303);
																		BgL_res2404z00_3306 = BgL_res2403z00_3305;
																}}
																BgL_dxz00_1428 = BgL_res2404z00_3306;
													}}}
													{	/* Unsafe/bignumber.scm 399 */
														int BgL_iz00_3308;

														BgL_iz00_3308 = (int) (BgL_iz00_1425);
														{	/* Unsafe/bignumber.scm 234 */
															uint16_t BgL_arg1246z00_3309;

															{	/* Unsafe/bignumber.scm 234 */
																obj_t BgL_arg1247z00_3310;

																BgL_arg1247z00_3310 =
																	BGL_BIGNUM_U16VECT(BgL_yz00_29);
																{	/* Unsafe/bignumber.scm 234 */
																	long BgL_tmpz00_6637;

																	BgL_tmpz00_6637 = (long) (BgL_iz00_3308);
																	BgL_arg1246z00_3309 =
																		BGL_U16VREF(BgL_arg1247z00_3310,
																		BgL_tmpz00_6637);
															}}
															{	/* Unsafe/bignumber.scm 234 */
																long BgL_res2406z00_3315;

																{	/* Unsafe/bignumber.scm 234 */
																	long BgL_arg2198z00_3312;

																	BgL_arg2198z00_3312 =
																		(long) (BgL_arg1246z00_3309);
																	{	/* Unsafe/bignumber.scm 234 */
																		long BgL_res2405z00_3314;

																		BgL_res2405z00_3314 =
																			(long) (BgL_arg2198z00_3312);
																		BgL_res2406z00_3315 = BgL_res2405z00_3314;
																}}
																BgL_dyz00_1429 = BgL_res2406z00_3315;
													}}}
													if ((BgL_dxz00_1428 < BgL_dyz00_1429))
														{	/* Unsafe/bignumber.scm 400 */
															bool_t BgL_test3349z00_6644;

															{	/* Unsafe/bignumber.scm 400 */
																bool_t BgL_res2411z00_3331;

																{	/* Unsafe/bignumber.scm 418 */
																	long BgL_arg1393z00_3320;

																	{	/* Unsafe/bignumber.scm 230 */
																		uint16_t BgL_arg1239z00_3322;

																		{	/* Unsafe/bignumber.scm 230 */
																			obj_t BgL_arg1242z00_3323;

																			BgL_arg1242z00_3323 =
																				BGL_BIGNUM_U16VECT(BgL_xz00_28);
																			BgL_arg1239z00_3322 =
																				BGL_U16VREF(BgL_arg1242z00_3323,
																				((long) 0));
																		}
																		{	/* Unsafe/bignumber.scm 230 */
																			long BgL_res2409z00_3328;

																			{	/* Unsafe/bignumber.scm 230 */
																				long BgL_arg2198z00_3325;

																				BgL_arg2198z00_3325 =
																					(long) (BgL_arg1239z00_3322);
																				{	/* Unsafe/bignumber.scm 230 */
																					long BgL_res2408z00_3327;

																					BgL_res2408z00_3327 =
																						(long) (BgL_arg2198z00_3325);
																					BgL_res2409z00_3328 =
																						BgL_res2408z00_3327;
																			}}
																			BgL_arg1393z00_3320 = BgL_res2409z00_3328;
																	}}
																	BgL_res2411z00_3331 =
																		(BgL_arg1393z00_3320 == ((long) 0));
																}
																BgL_test3349z00_6644 = BgL_res2411z00_3331;
															}
															if (BgL_test3349z00_6644)
																{	/* Unsafe/bignumber.scm 400 */
																	return ((bool_t) 0);
																}
															else
																{	/* Unsafe/bignumber.scm 400 */
																	return ((bool_t) 1);
																}
														}
													else
														{	/* Unsafe/bignumber.scm 400 */
															if ((BgL_dyz00_1429 < BgL_dxz00_1428))
																{	/* Unsafe/bignumber.scm 401 */
																	bool_t BgL_res2416z00_3347;

																	{	/* Unsafe/bignumber.scm 418 */
																		long BgL_arg1393z00_3336;

																		{	/* Unsafe/bignumber.scm 230 */
																			uint16_t BgL_arg1239z00_3338;

																			{	/* Unsafe/bignumber.scm 230 */
																				obj_t BgL_arg1242z00_3339;

																				BgL_arg1242z00_3339 =
																					BGL_BIGNUM_U16VECT(BgL_xz00_28);
																				BgL_arg1239z00_3338 =
																					BGL_U16VREF(BgL_arg1242z00_3339,
																					((long) 0));
																			}
																			{	/* Unsafe/bignumber.scm 230 */
																				long BgL_res2414z00_3344;

																				{	/* Unsafe/bignumber.scm 230 */
																					long BgL_arg2198z00_3341;

																					BgL_arg2198z00_3341 =
																						(long) (BgL_arg1239z00_3338);
																					{	/* Unsafe/bignumber.scm 230 */
																						long BgL_res2413z00_3343;

																						BgL_res2413z00_3343 =
																							(long) (BgL_arg2198z00_3341);
																						BgL_res2414z00_3344 =
																							BgL_res2413z00_3343;
																				}}
																				BgL_arg1393z00_3336 =
																					BgL_res2414z00_3344;
																		}}
																		BgL_res2416z00_3347 =
																			(BgL_arg1393z00_3336 == ((long) 0));
																	}
																	return BgL_res2416z00_3347;
																}
															else
																{
																	long BgL_iz00_6657;

																	BgL_iz00_6657 = (BgL_iz00_1425 - ((long) 1));
																	BgL_iz00_1425 = BgL_iz00_6657;
																	goto BgL_zc3z04anonymousza31382ze3z87_1426;
																}
														}
												}
											else
												{	/* Unsafe/bignumber.scm 397 */
													return ((bool_t) 0);
												}
										}
									}
							}
					}
				else
					{	/* Unsafe/bignumber.scm 388 */
						bool_t BgL_res2421z00_3362;

						{	/* Unsafe/bignumber.scm 418 */
							long BgL_arg1393z00_3351;

							{	/* Unsafe/bignumber.scm 230 */
								uint16_t BgL_arg1239z00_3353;

								{	/* Unsafe/bignumber.scm 230 */
									obj_t BgL_arg1242z00_3354;

									BgL_arg1242z00_3354 = BGL_BIGNUM_U16VECT(BgL_xz00_28);
									BgL_arg1239z00_3353 =
										BGL_U16VREF(BgL_arg1242z00_3354, ((long) 0));
								}
								{	/* Unsafe/bignumber.scm 230 */
									long BgL_res2419z00_3359;

									{	/* Unsafe/bignumber.scm 230 */
										long BgL_arg2198z00_3356;

										BgL_arg2198z00_3356 = (long) (BgL_arg1239z00_3353);
										{	/* Unsafe/bignumber.scm 230 */
											long BgL_res2418z00_3358;

											BgL_res2418z00_3358 = (long) (BgL_arg2198z00_3356);
											BgL_res2419z00_3359 = BgL_res2418z00_3358;
									}}
									BgL_arg1393z00_3351 = BgL_res2419z00_3359;
							}}
							BgL_res2421z00_3362 = (BgL_arg1393z00_3351 == ((long) 0));
						}
						return BgL_res2421z00_3362;
					}
			}
		}

	}



/* $$zerobx? */
	BGL_EXPORTED_DEF bool_t BXZERO(obj_t BgL_xz00_36)
	{
		{	/* Unsafe/bignumber.scm 414 */
			{	/* Unsafe/bignumber.scm 415 */
				long BgL_arg1392z00_3364;

				{	/* Unsafe/bignumber.scm 228 */
					long BgL_arg1229z00_3366;

					{	/* Unsafe/bignumber.scm 228 */
						obj_t BgL_arg1232z00_3367;

						BgL_arg1232z00_3367 = BGL_BIGNUM_U16VECT(BgL_xz00_36);
						{	/* Unsafe/bignumber.scm 228 */
							long BgL_res2422z00_3369;

							BgL_res2422z00_3369 = BGL_HVECTOR_LENGTH(BgL_arg1232z00_3367);
							BgL_arg1229z00_3366 = BgL_res2422z00_3369;
					}}
					{	/* Unsafe/bignumber.scm 228 */
						long BgL_res2424z00_3374;

						{	/* Unsafe/bignumber.scm 228 */
							uint16_t BgL_xz00_3370;

							BgL_xz00_3370 = (uint16_t) (BgL_arg1229z00_3366);
							{	/* Unsafe/bignumber.scm 228 */
								long BgL_arg2198z00_3371;

								BgL_arg2198z00_3371 = (long) (BgL_xz00_3370);
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_res2423z00_3373;

									BgL_res2423z00_3373 = (long) (BgL_arg2198z00_3371);
									BgL_res2424z00_3374 = BgL_res2423z00_3373;
						}}}
						BgL_arg1392z00_3364 = BgL_res2424z00_3374;
				}}
				return (BgL_arg1392z00_3364 == ((long) 1));
		}}

	}



/* &$$zerobx? */
	obj_t BGl_z62z42z42za7erobxzf3z36zz__bignumz00(obj_t BgL_envz00_6040,
		obj_t BgL_xz00_6041)
	{
		{	/* Unsafe/bignumber.scm 414 */
			{	/* Unsafe/bignumber.scm 415 */
				bool_t BgL_tmpz00_6670;

				{	/* Unsafe/bignumber.scm 415 */
					obj_t BgL_auxz00_6671;

					if (BIGNUMP(BgL_xz00_6041))
						{	/* Unsafe/bignumber.scm 415 */
							BgL_auxz00_6671 = BgL_xz00_6041;
						}
					else
						{
							obj_t BgL_auxz00_6674;

							BgL_auxz00_6674 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 15155)), BGl_string3199z00zz__bignumz00,
								BGl_string3200z00zz__bignumz00, BgL_xz00_6041);
							FAILURE(BgL_auxz00_6674, BFALSE, BFALSE);
						}
					BgL_tmpz00_6670 = BXZERO(BgL_auxz00_6671);
				}
				return BBOOL(BgL_tmpz00_6670);
			}
		}

	}



/* $$negativebx? */
	BGL_EXPORTED_DEF bool_t BXNEGATIVE(obj_t BgL_xz00_37)
	{
		{	/* Unsafe/bignumber.scm 417 */
			{	/* Unsafe/bignumber.scm 418 */
				long BgL_arg1393z00_3377;

				{	/* Unsafe/bignumber.scm 230 */
					uint16_t BgL_arg1239z00_3379;

					{	/* Unsafe/bignumber.scm 230 */
						obj_t BgL_arg1242z00_3380;

						BgL_arg1242z00_3380 = BGL_BIGNUM_U16VECT(BgL_xz00_37);
						BgL_arg1239z00_3379 = BGL_U16VREF(BgL_arg1242z00_3380, ((long) 0));
					}
					{	/* Unsafe/bignumber.scm 230 */
						long BgL_res2427z00_3385;

						{	/* Unsafe/bignumber.scm 230 */
							long BgL_arg2198z00_3382;

							BgL_arg2198z00_3382 = (long) (BgL_arg1239z00_3379);
							{	/* Unsafe/bignumber.scm 230 */
								long BgL_res2426z00_3384;

								BgL_res2426z00_3384 = (long) (BgL_arg2198z00_3382);
								BgL_res2427z00_3385 = BgL_res2426z00_3384;
						}}
						BgL_arg1393z00_3377 = BgL_res2427z00_3385;
				}}
				return (BgL_arg1393z00_3377 == ((long) 0));
		}}

	}



/* &$$negativebx? */
	obj_t BGl_z62z42z42negativebxzf3z91zz__bignumz00(obj_t BgL_envz00_6042,
		obj_t BgL_xz00_6043)
	{
		{	/* Unsafe/bignumber.scm 417 */
			{	/* Unsafe/bignumber.scm 418 */
				bool_t BgL_tmpz00_6685;

				{	/* Unsafe/bignumber.scm 418 */
					obj_t BgL_auxz00_6686;

					if (BIGNUMP(BgL_xz00_6043))
						{	/* Unsafe/bignumber.scm 418 */
							BgL_auxz00_6686 = BgL_xz00_6043;
						}
					else
						{
							obj_t BgL_auxz00_6689;

							BgL_auxz00_6689 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 15212)), BGl_string3201z00zz__bignumz00,
								BGl_string3200z00zz__bignumz00, BgL_xz00_6043);
							FAILURE(BgL_auxz00_6689, BFALSE, BFALSE);
						}
					BgL_tmpz00_6685 = BXNEGATIVE(BgL_auxz00_6686);
				}
				return BBOOL(BgL_tmpz00_6685);
			}
		}

	}



/* $$positivebx? */
	BGL_EXPORTED_DEF bool_t BXPOSITIVE(obj_t BgL_xz00_38)
	{
		{	/* Unsafe/bignumber.scm 420 */
			{	/* Unsafe/bignumber.scm 421 */
				bool_t BgL_test3353z00_6695;

				{	/* Unsafe/bignumber.scm 421 */
					bool_t BgL_test3354z00_6696;

					{	/* Unsafe/bignumber.scm 421 */
						bool_t BgL_res2433z00_3404;

						{	/* Unsafe/bignumber.scm 415 */
							long BgL_arg1392z00_3391;

							{	/* Unsafe/bignumber.scm 228 */
								long BgL_arg1229z00_3393;

								{	/* Unsafe/bignumber.scm 228 */
									obj_t BgL_arg1232z00_3394;

									BgL_arg1232z00_3394 = BGL_BIGNUM_U16VECT(BgL_xz00_38);
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_res2429z00_3396;

										BgL_res2429z00_3396 =
											BGL_HVECTOR_LENGTH(BgL_arg1232z00_3394);
										BgL_arg1229z00_3393 = BgL_res2429z00_3396;
								}}
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_res2431z00_3401;

									{	/* Unsafe/bignumber.scm 228 */
										uint16_t BgL_xz00_3397;

										BgL_xz00_3397 = (uint16_t) (BgL_arg1229z00_3393);
										{	/* Unsafe/bignumber.scm 228 */
											long BgL_arg2198z00_3398;

											BgL_arg2198z00_3398 = (long) (BgL_xz00_3397);
											{	/* Unsafe/bignumber.scm 228 */
												long BgL_res2430z00_3400;

												BgL_res2430z00_3400 = (long) (BgL_arg2198z00_3398);
												BgL_res2431z00_3401 = BgL_res2430z00_3400;
									}}}
									BgL_arg1392z00_3391 = BgL_res2431z00_3401;
							}}
							BgL_res2433z00_3404 = (BgL_arg1392z00_3391 == ((long) 1));
						}
						BgL_test3354z00_6696 = BgL_res2433z00_3404;
					}
					if (BgL_test3354z00_6696)
						{	/* Unsafe/bignumber.scm 421 */
							BgL_test3353z00_6695 = ((bool_t) 1);
						}
					else
						{	/* Unsafe/bignumber.scm 421 */
							bool_t BgL_res2437z00_3417;

							{	/* Unsafe/bignumber.scm 418 */
								long BgL_arg1393z00_3406;

								{	/* Unsafe/bignumber.scm 230 */
									uint16_t BgL_arg1239z00_3408;

									{	/* Unsafe/bignumber.scm 230 */
										obj_t BgL_arg1242z00_3409;

										BgL_arg1242z00_3409 = BGL_BIGNUM_U16VECT(BgL_xz00_38);
										BgL_arg1239z00_3408 =
											BGL_U16VREF(BgL_arg1242z00_3409, ((long) 0));
									}
									{	/* Unsafe/bignumber.scm 230 */
										long BgL_res2435z00_3414;

										{	/* Unsafe/bignumber.scm 230 */
											long BgL_arg2198z00_3411;

											BgL_arg2198z00_3411 = (long) (BgL_arg1239z00_3408);
											{	/* Unsafe/bignumber.scm 230 */
												long BgL_res2434z00_3413;

												BgL_res2434z00_3413 = (long) (BgL_arg2198z00_3411);
												BgL_res2435z00_3414 = BgL_res2434z00_3413;
										}}
										BgL_arg1393z00_3406 = BgL_res2435z00_3414;
								}}
								BgL_res2437z00_3417 = (BgL_arg1393z00_3406 == ((long) 0));
							}
							BgL_test3353z00_6695 = BgL_res2437z00_3417;
				}}
				if (BgL_test3353z00_6695)
					{	/* Unsafe/bignumber.scm 421 */
						return ((bool_t) 0);
					}
				else
					{	/* Unsafe/bignumber.scm 421 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* &$$positivebx? */
	obj_t BGl_z62z42z42positivebxzf3z91zz__bignumz00(obj_t BgL_envz00_6044,
		obj_t BgL_xz00_6045)
	{
		{	/* Unsafe/bignumber.scm 420 */
			{	/* Unsafe/bignumber.scm 421 */
				bool_t BgL_tmpz00_6708;

				{	/* Unsafe/bignumber.scm 421 */
					obj_t BgL_auxz00_6709;

					if (BIGNUMP(BgL_xz00_6045))
						{	/* Unsafe/bignumber.scm 421 */
							BgL_auxz00_6709 = BgL_xz00_6045;
						}
					else
						{
							obj_t BgL_auxz00_6712;

							BgL_auxz00_6712 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 15262)), BGl_string3202z00zz__bignumz00,
								BGl_string3200z00zz__bignumz00, BgL_xz00_6045);
							FAILURE(BgL_auxz00_6712, BFALSE, BFALSE);
						}
					BgL_tmpz00_6708 = BXPOSITIVE(BgL_auxz00_6709);
				}
				return BBOOL(BgL_tmpz00_6708);
			}
		}

	}



/* $$evenbx? */
	BGL_EXPORTED_DEF bool_t bgl_bignum_even(obj_t BgL_xz00_39)
	{
		{	/* Unsafe/bignumber.scm 423 */
			{	/* Unsafe/bignumber.scm 424 */
				bool_t BgL__ortest_1046z00_3418;

				{	/* Unsafe/bignumber.scm 424 */
					bool_t BgL_res2442z00_3434;

					{	/* Unsafe/bignumber.scm 415 */
						long BgL_arg1392z00_3421;

						{	/* Unsafe/bignumber.scm 228 */
							long BgL_arg1229z00_3423;

							{	/* Unsafe/bignumber.scm 228 */
								obj_t BgL_arg1232z00_3424;

								BgL_arg1232z00_3424 = BGL_BIGNUM_U16VECT(BgL_xz00_39);
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_res2438z00_3426;

									BgL_res2438z00_3426 = BGL_HVECTOR_LENGTH(BgL_arg1232z00_3424);
									BgL_arg1229z00_3423 = BgL_res2438z00_3426;
							}}
							{	/* Unsafe/bignumber.scm 228 */
								long BgL_res2440z00_3431;

								{	/* Unsafe/bignumber.scm 228 */
									uint16_t BgL_xz00_3427;

									BgL_xz00_3427 = (uint16_t) (BgL_arg1229z00_3423);
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_arg2198z00_3428;

										BgL_arg2198z00_3428 = (long) (BgL_xz00_3427);
										{	/* Unsafe/bignumber.scm 228 */
											long BgL_res2439z00_3430;

											BgL_res2439z00_3430 = (long) (BgL_arg2198z00_3428);
											BgL_res2440z00_3431 = BgL_res2439z00_3430;
								}}}
								BgL_arg1392z00_3421 = BgL_res2440z00_3431;
						}}
						BgL_res2442z00_3434 = (BgL_arg1392z00_3421 == ((long) 1));
					}
					BgL__ortest_1046z00_3418 = BgL_res2442z00_3434;
				}
				if (BgL__ortest_1046z00_3418)
					{	/* Unsafe/bignumber.scm 424 */
						return BgL__ortest_1046z00_3418;
					}
				else
					{	/* Unsafe/bignumber.scm 424 */
						long BgL_arg1396z00_3419;

						{	/* Unsafe/bignumber.scm 234 */
							uint16_t BgL_arg1246z00_3436;

							{	/* Unsafe/bignumber.scm 234 */
								obj_t BgL_arg1247z00_3437;

								BgL_arg1247z00_3437 = BGL_BIGNUM_U16VECT(BgL_xz00_39);
								BgL_arg1246z00_3436 =
									BGL_U16VREF(BgL_arg1247z00_3437, ((long) 1));
							}
							{	/* Unsafe/bignumber.scm 234 */
								long BgL_res2444z00_3442;

								{	/* Unsafe/bignumber.scm 234 */
									long BgL_arg2198z00_3439;

									BgL_arg2198z00_3439 = (long) (BgL_arg1246z00_3436);
									{	/* Unsafe/bignumber.scm 234 */
										long BgL_res2443z00_3441;

										BgL_res2443z00_3441 = (long) (BgL_arg2198z00_3439);
										BgL_res2444z00_3442 = BgL_res2443z00_3441;
								}}
								BgL_arg1396z00_3419 = BgL_res2444z00_3442;
						}}
						return
							BGl_evenzf3zf3zz__r4_numbers_6_5_fixnumz00(BINT
							(BgL_arg1396z00_3419));
					}
			}
		}

	}



/* &$$evenbx? */
	obj_t BGl_z62z42z42evenbxzf3z91zz__bignumz00(obj_t BgL_envz00_6046,
		obj_t BgL_xz00_6047)
	{
		{	/* Unsafe/bignumber.scm 423 */
			{	/* Unsafe/bignumber.scm 424 */
				bool_t BgL_tmpz00_6731;

				{	/* Unsafe/bignumber.scm 424 */
					obj_t BgL_auxz00_6732;

					if (BIGNUMP(BgL_xz00_6047))
						{	/* Unsafe/bignumber.scm 424 */
							BgL_auxz00_6732 = BgL_xz00_6047;
						}
					else
						{
							obj_t BgL_auxz00_6735;

							BgL_auxz00_6735 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 15336)), BGl_string3203z00zz__bignumz00,
								BGl_string3200z00zz__bignumz00, BgL_xz00_6047);
							FAILURE(BgL_auxz00_6735, BFALSE, BFALSE);
						}
					BgL_tmpz00_6731 = bgl_bignum_even(BgL_auxz00_6732);
				}
				return BBOOL(BgL_tmpz00_6731);
			}
		}

	}



/* $$oddbx? */
	BGL_EXPORTED_DEF bool_t bgl_bignum_odd(obj_t BgL_xz00_40)
	{
		{	/* Unsafe/bignumber.scm 426 */
			{	/* Unsafe/bignumber.scm 427 */
				bool_t BgL_test3358z00_6741;

				{	/* Unsafe/bignumber.scm 427 */
					bool_t BgL_res2449z00_3460;

					{	/* Unsafe/bignumber.scm 424 */
						bool_t BgL__ortest_1046z00_3445;

						BgL__ortest_1046z00_3445 =
							(BGl_bignumzd2lengthzd2zz__bignumz00(BgL_xz00_40) == ((long) 1));
						if (BgL__ortest_1046z00_3445)
							{	/* Unsafe/bignumber.scm 424 */
								BgL_res2449z00_3460 = BgL__ortest_1046z00_3445;
							}
						else
							{	/* Unsafe/bignumber.scm 424 */
								long BgL_arg1396z00_3446;

								{	/* Unsafe/bignumber.scm 234 */
									uint16_t BgL_arg1246z00_3453;

									{	/* Unsafe/bignumber.scm 234 */
										obj_t BgL_arg1247z00_3454;

										BgL_arg1247z00_3454 = BGL_BIGNUM_U16VECT(BgL_xz00_40);
										BgL_arg1246z00_3453 =
											BGL_U16VREF(BgL_arg1247z00_3454, ((long) 1));
									}
									{	/* Unsafe/bignumber.scm 234 */
										long BgL_res2448z00_3459;

										{	/* Unsafe/bignumber.scm 234 */
											long BgL_arg2198z00_3456;

											BgL_arg2198z00_3456 = (long) (BgL_arg1246z00_3453);
											{	/* Unsafe/bignumber.scm 234 */
												long BgL_res2447z00_3458;

												BgL_res2447z00_3458 = (long) (BgL_arg2198z00_3456);
												BgL_res2448z00_3459 = BgL_res2447z00_3458;
										}}
										BgL_arg1396z00_3446 = BgL_res2448z00_3459;
								}}
								BgL_res2449z00_3460 =
									BGl_evenzf3zf3zz__r4_numbers_6_5_fixnumz00(BINT
									(BgL_arg1396z00_3446));
					}}
					BgL_test3358z00_6741 = BgL_res2449z00_3460;
				}
				if (BgL_test3358z00_6741)
					{	/* Unsafe/bignumber.scm 427 */
						return ((bool_t) 0);
					}
				else
					{	/* Unsafe/bignumber.scm 427 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* &$$oddbx? */
	obj_t BGl_z62z42z42oddbxzf3z91zz__bignumz00(obj_t BgL_envz00_6048,
		obj_t BgL_xz00_6049)
	{
		{	/* Unsafe/bignumber.scm 426 */
			{	/* Unsafe/bignumber.scm 427 */
				bool_t BgL_tmpz00_6751;

				{	/* Unsafe/bignumber.scm 427 */
					obj_t BgL_auxz00_6752;

					if (BIGNUMP(BgL_xz00_6049))
						{	/* Unsafe/bignumber.scm 427 */
							BgL_auxz00_6752 = BgL_xz00_6049;
						}
					else
						{
							obj_t BgL_auxz00_6755;

							BgL_auxz00_6755 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 15408)), BGl_string3204z00zz__bignumz00,
								BGl_string3200z00zz__bignumz00, BgL_xz00_6049);
							FAILURE(BgL_auxz00_6755, BFALSE, BFALSE);
						}
					BgL_tmpz00_6751 = bgl_bignum_odd(BgL_auxz00_6752);
				}
				return BBOOL(BgL_tmpz00_6751);
			}
		}

	}



/* $$bignum-cmp */
	BGL_EXPORTED_DEF int bgl_bignum_cmp(obj_t BgL_n1z00_41, obj_t BgL_n2z00_42)
	{
		{	/* Unsafe/bignumber.scm 429 */
			if (BGl_z42zc3bxz81zz__bignumz00(BgL_n1z00_41, BgL_n2z00_42))
				{	/* Unsafe/bignumber.scm 431 */
					return (int) (((long) -1));
				}
			else
				{	/* Unsafe/bignumber.scm 431 */
					if (BGl_z42zc3bxz81zz__bignumz00(BgL_n2z00_42, BgL_n1z00_41))
						{	/* Unsafe/bignumber.scm 432 */
							return (int) (((long) 1));
						}
					else
						{	/* Unsafe/bignumber.scm 432 */
							return (int) (((long) 0));
		}}}

	}



/* &$$bignum-cmp */
	obj_t BGl_z62z42z42bignumzd2cmpzb0zz__bignumz00(obj_t BgL_envz00_6050,
		obj_t BgL_n1z00_6051, obj_t BgL_n2z00_6052)
	{
		{	/* Unsafe/bignumber.scm 429 */
			{	/* Unsafe/bignumber.scm 431 */
				int BgL_tmpz00_6768;

				{	/* Unsafe/bignumber.scm 431 */
					obj_t BgL_auxz00_6776;
					obj_t BgL_auxz00_6769;

					if (BIGNUMP(BgL_n2z00_6052))
						{	/* Unsafe/bignumber.scm 431 */
							BgL_auxz00_6776 = BgL_n2z00_6052;
						}
					else
						{
							obj_t BgL_auxz00_6779;

							BgL_auxz00_6779 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 15474)), BGl_string3205z00zz__bignumz00,
								BGl_string3200z00zz__bignumz00, BgL_n2z00_6052);
							FAILURE(BgL_auxz00_6779, BFALSE, BFALSE);
						}
					if (BIGNUMP(BgL_n1z00_6051))
						{	/* Unsafe/bignumber.scm 431 */
							BgL_auxz00_6769 = BgL_n1z00_6051;
						}
					else
						{
							obj_t BgL_auxz00_6772;

							BgL_auxz00_6772 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 15474)), BGl_string3205z00zz__bignumz00,
								BGl_string3200z00zz__bignumz00, BgL_n1z00_6051);
							FAILURE(BgL_auxz00_6772, BFALSE, BFALSE);
						}
					BgL_tmpz00_6768 = bgl_bignum_cmp(BgL_auxz00_6769, BgL_auxz00_6776);
				}
				return BINT(BgL_tmpz00_6768);
			}
		}

	}



/* bignum-add-nonneg */
	obj_t BGl_bignumzd2addzd2nonnegz00zz__bignumz00(obj_t BgL_xz00_43,
		obj_t BgL_yz00_44)
	{
		{	/* Unsafe/bignumber.scm 438 */
			{
				obj_t BgL_xz00_1453;
				obj_t BgL_yz00_1454;
				long BgL_lenxz00_1455;
				long BgL_lenyz00_1456;

				{	/* Unsafe/bignumber.scm 477 */
					long BgL_lenxz00_1450;
					long BgL_lenyz00_1451;

					{	/* Unsafe/bignumber.scm 228 */
						long BgL_arg1229z00_3575;

						{	/* Unsafe/bignumber.scm 228 */
							obj_t BgL_arg1232z00_3576;

							BgL_arg1232z00_3576 = BGL_BIGNUM_U16VECT(BgL_xz00_43);
							{	/* Unsafe/bignumber.scm 228 */
								long BgL_res2478z00_3578;

								BgL_res2478z00_3578 = BGL_HVECTOR_LENGTH(BgL_arg1232z00_3576);
								BgL_arg1229z00_3575 = BgL_res2478z00_3578;
						}}
						{	/* Unsafe/bignumber.scm 228 */
							long BgL_res2480z00_3583;

							{	/* Unsafe/bignumber.scm 228 */
								uint16_t BgL_xz00_3579;

								BgL_xz00_3579 = (uint16_t) (BgL_arg1229z00_3575);
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_arg2198z00_3580;

									BgL_arg2198z00_3580 = (long) (BgL_xz00_3579);
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_res2479z00_3582;

										BgL_res2479z00_3582 = (long) (BgL_arg2198z00_3580);
										BgL_res2480z00_3583 = BgL_res2479z00_3582;
							}}}
							BgL_lenxz00_1450 = BgL_res2480z00_3583;
					}}
					{	/* Unsafe/bignumber.scm 228 */
						long BgL_arg1229z00_3585;

						{	/* Unsafe/bignumber.scm 228 */
							obj_t BgL_arg1232z00_3586;

							BgL_arg1232z00_3586 = BGL_BIGNUM_U16VECT(BgL_yz00_44);
							{	/* Unsafe/bignumber.scm 228 */
								long BgL_res2481z00_3588;

								BgL_res2481z00_3588 = BGL_HVECTOR_LENGTH(BgL_arg1232z00_3586);
								BgL_arg1229z00_3585 = BgL_res2481z00_3588;
						}}
						{	/* Unsafe/bignumber.scm 228 */
							long BgL_res2483z00_3593;

							{	/* Unsafe/bignumber.scm 228 */
								uint16_t BgL_xz00_3589;

								BgL_xz00_3589 = (uint16_t) (BgL_arg1229z00_3585);
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_arg2198z00_3590;

									BgL_arg2198z00_3590 = (long) (BgL_xz00_3589);
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_res2482z00_3592;

										BgL_res2482z00_3592 = (long) (BgL_arg2198z00_3590);
										BgL_res2483z00_3593 = BgL_res2482z00_3592;
							}}}
							BgL_lenyz00_1451 = BgL_res2483z00_3593;
					}}
					if ((BgL_lenxz00_1450 < BgL_lenyz00_1451))
						{	/* Unsafe/bignumber.scm 479 */
							BgL_xz00_1453 = BgL_yz00_44;
							BgL_yz00_1454 = BgL_xz00_43;
							BgL_lenxz00_1455 = BgL_lenyz00_1451;
							BgL_lenyz00_1456 = BgL_lenxz00_1450;
						BgL_zc3z04anonymousza31401ze3z87_1457:
							{	/* Unsafe/bignumber.scm 441 */
								obj_t BgL_rz00_1458;

								{	/* Unsafe/bignumber.scm 441 */
									long BgL_arg1427z00_1492;

									BgL_arg1427z00_1492 = (BgL_lenxz00_1455 + ((long) 1));
									{	/* Unsafe/bignumber.scm 441 */
										obj_t BgL_res2451z00_3469;

										{	/* Unsafe/bignumber.scm 441 */
											int BgL_lenz00_3465;

											BgL_lenz00_3465 = (int) (BgL_arg1427z00_1492);
											{	/* Unsafe/bignumber.scm 226 */
												obj_t BgL_arg1227z00_3466;

												{	/* Unsafe/bignumber.scm 226 */

													BgL_arg1227z00_3466 =
														BGl_makezd2u16vectorzd2zz__srfi4z00(
														(long) (BgL_lenz00_3465), (uint16_t) (0));
												}
												BgL_res2451z00_3469 =
													bgl_make_bignum(BgL_arg1227z00_3466);
										}}
										BgL_rz00_1458 = BgL_res2451z00_3469;
								}}
								{	/* Unsafe/bignumber.scm 232 */
									obj_t BgL_arg1243z00_3472;
									uint16_t BgL_arg1245z00_3473;

									BgL_arg1243z00_3472 = BGL_BIGNUM_U16VECT(BgL_rz00_1458);
									{	/* Unsafe/bignumber.scm 232 */
										uint16_t BgL_res2452z00_3474;

										BgL_res2452z00_3474 = (uint16_t) (((long) 1));
										BgL_arg1245z00_3473 = BgL_res2452z00_3474;
									}
									BGL_U16VSET(BgL_arg1243z00_3472, ((long) 0),
										BgL_arg1245z00_3473);
									BUNSPEC;
								}
								{
									long BgL_iz00_1460;
									long BgL_cz00_1461;

									BgL_iz00_1460 = ((long) 1);
									BgL_cz00_1461 = ((long) 0);
								BgL_zc3z04anonymousza31402ze3z87_1462:
									if ((BgL_iz00_1460 < BgL_lenyz00_1456))
										{	/* Unsafe/bignumber.scm 448 */
											long BgL_wz00_1464;

											{	/* Unsafe/bignumber.scm 448 */
												long BgL_arg1412z00_1472;

												{	/* Unsafe/bignumber.scm 448 */
													long BgL_arg1413z00_1473;
													long BgL_arg1414z00_1474;

													{	/* Unsafe/bignumber.scm 448 */
														int BgL_iz00_3479;

														BgL_iz00_3479 = (int) (BgL_iz00_1460);
														{	/* Unsafe/bignumber.scm 234 */
															uint16_t BgL_arg1246z00_3480;

															{	/* Unsafe/bignumber.scm 234 */
																obj_t BgL_arg1247z00_3481;

																BgL_arg1247z00_3481 =
																	BGL_BIGNUM_U16VECT(BgL_xz00_1453);
																{	/* Unsafe/bignumber.scm 234 */
																	long BgL_tmpz00_6809;

																	BgL_tmpz00_6809 = (long) (BgL_iz00_3479);
																	BgL_arg1246z00_3480 =
																		BGL_U16VREF(BgL_arg1247z00_3481,
																		BgL_tmpz00_6809);
															}}
															{	/* Unsafe/bignumber.scm 234 */
																long BgL_res2455z00_3486;

																{	/* Unsafe/bignumber.scm 234 */
																	long BgL_arg2198z00_3483;

																	BgL_arg2198z00_3483 =
																		(long) (BgL_arg1246z00_3480);
																	{	/* Unsafe/bignumber.scm 234 */
																		long BgL_res2454z00_3485;

																		BgL_res2454z00_3485 =
																			(long) (BgL_arg2198z00_3483);
																		BgL_res2455z00_3486 = BgL_res2454z00_3485;
																}}
																BgL_arg1413z00_1473 = BgL_res2455z00_3486;
													}}}
													{	/* Unsafe/bignumber.scm 449 */
														int BgL_iz00_3488;

														BgL_iz00_3488 = (int) (BgL_iz00_1460);
														{	/* Unsafe/bignumber.scm 234 */
															uint16_t BgL_arg1246z00_3489;

															{	/* Unsafe/bignumber.scm 234 */
																obj_t BgL_arg1247z00_3490;

																BgL_arg1247z00_3490 =
																	BGL_BIGNUM_U16VECT(BgL_yz00_1454);
																{	/* Unsafe/bignumber.scm 234 */
																	long BgL_tmpz00_6816;

																	BgL_tmpz00_6816 = (long) (BgL_iz00_3488);
																	BgL_arg1246z00_3489 =
																		BGL_U16VREF(BgL_arg1247z00_3490,
																		BgL_tmpz00_6816);
															}}
															{	/* Unsafe/bignumber.scm 234 */
																long BgL_res2457z00_3495;

																{	/* Unsafe/bignumber.scm 234 */
																	long BgL_arg2198z00_3492;

																	BgL_arg2198z00_3492 =
																		(long) (BgL_arg1246z00_3489);
																	{	/* Unsafe/bignumber.scm 234 */
																		long BgL_res2456z00_3494;

																		BgL_res2456z00_3494 =
																			(long) (BgL_arg2198z00_3492);
																		BgL_res2457z00_3495 = BgL_res2456z00_3494;
																}}
																BgL_arg1414z00_1474 = BgL_res2457z00_3495;
													}}}
													BgL_arg1412z00_1472 =
														(BgL_arg1413z00_1473 + BgL_arg1414z00_1474);
												}
												BgL_wz00_1464 = (BgL_arg1412z00_1472 + BgL_cz00_1461);
											}
											if ((BgL_wz00_1464 < ((long) 16384)))
												{	/* Unsafe/bignumber.scm 451 */
													{	/* Unsafe/bignumber.scm 453 */
														int BgL_iz00_3506;
														int BgL_digitz00_3507;

														BgL_iz00_3506 = (int) (BgL_iz00_1460);
														BgL_digitz00_3507 = (int) (BgL_wz00_1464);
														{	/* Unsafe/bignumber.scm 236 */
															obj_t BgL_arg1250z00_3508;
															uint16_t BgL_arg1252z00_3509;

															BgL_arg1250z00_3508 =
																BGL_BIGNUM_U16VECT(BgL_rz00_1458);
															{	/* Unsafe/bignumber.scm 236 */
																uint16_t BgL_res2461z00_3511;

																{	/* Unsafe/bignumber.scm 236 */
																	long BgL_tmpz00_6828;

																	BgL_tmpz00_6828 = (long) (BgL_digitz00_3507);
																	BgL_res2461z00_3511 =
																		(uint16_t) (BgL_tmpz00_6828);
																}
																BgL_arg1252z00_3509 = BgL_res2461z00_3511;
															}
															{	/* Unsafe/bignumber.scm 236 */
																long BgL_tmpz00_6831;

																BgL_tmpz00_6831 = (long) (BgL_iz00_3506);
																BGL_U16VSET(BgL_arg1250z00_3508,
																	BgL_tmpz00_6831, BgL_arg1252z00_3509);
															} BUNSPEC;
													}}
													{
														long BgL_cz00_6836;
														long BgL_iz00_6834;

														BgL_iz00_6834 = (BgL_iz00_1460 + ((long) 1));
														BgL_cz00_6836 = ((long) 0);
														BgL_cz00_1461 = BgL_cz00_6836;
														BgL_iz00_1460 = BgL_iz00_6834;
														goto BgL_zc3z04anonymousza31402ze3z87_1462;
													}
												}
											else
												{	/* Unsafe/bignumber.scm 451 */
													{	/* Unsafe/bignumber.scm 456 */
														long BgL_arg1407z00_1468;

														BgL_arg1407z00_1468 =
															(BgL_wz00_1464 - ((long) 16384));
														{	/* Unsafe/bignumber.scm 456 */
															int BgL_iz00_3518;
															int BgL_digitz00_3519;

															BgL_iz00_3518 = (int) (BgL_iz00_1460);
															BgL_digitz00_3519 = (int) (BgL_arg1407z00_1468);
															{	/* Unsafe/bignumber.scm 236 */
																obj_t BgL_arg1250z00_3520;
																uint16_t BgL_arg1252z00_3521;

																BgL_arg1250z00_3520 =
																	BGL_BIGNUM_U16VECT(BgL_rz00_1458);
																{	/* Unsafe/bignumber.scm 236 */
																	uint16_t BgL_res2464z00_3523;

																	{	/* Unsafe/bignumber.scm 236 */
																		long BgL_tmpz00_6841;

																		BgL_tmpz00_6841 =
																			(long) (BgL_digitz00_3519);
																		BgL_res2464z00_3523 =
																			(uint16_t) (BgL_tmpz00_6841);
																	}
																	BgL_arg1252z00_3521 = BgL_res2464z00_3523;
																}
																{	/* Unsafe/bignumber.scm 236 */
																	long BgL_tmpz00_6844;

																	BgL_tmpz00_6844 = (long) (BgL_iz00_3518);
																	BGL_U16VSET(BgL_arg1250z00_3520,
																		BgL_tmpz00_6844, BgL_arg1252z00_3521);
																} BUNSPEC;
													}}}
													{
														long BgL_cz00_6849;
														long BgL_iz00_6847;

														BgL_iz00_6847 = (BgL_iz00_1460 + ((long) 1));
														BgL_cz00_6849 = ((long) 1);
														BgL_cz00_1461 = BgL_cz00_6849;
														BgL_iz00_1460 = BgL_iz00_6847;
														goto BgL_zc3z04anonymousza31402ze3z87_1462;
													}
												}
										}
									else
										{
											long BgL_iz00_1476;
											long BgL_cz00_1477;

											BgL_iz00_1476 = BgL_iz00_1460;
											BgL_cz00_1477 = BgL_cz00_1461;
										BgL_zc3z04anonymousza31415ze3z87_1478:
											if ((BgL_iz00_1476 < BgL_lenxz00_1455))
												{	/* Unsafe/bignumber.scm 462 */
													long BgL_wz00_1480;

													{	/* Unsafe/bignumber.scm 462 */
														long BgL_arg1425z00_1488;

														{	/* Unsafe/bignumber.scm 462 */
															int BgL_iz00_3530;

															BgL_iz00_3530 = (int) (BgL_iz00_1476);
															{	/* Unsafe/bignumber.scm 234 */
																uint16_t BgL_arg1246z00_3531;

																{	/* Unsafe/bignumber.scm 234 */
																	obj_t BgL_arg1247z00_3532;

																	BgL_arg1247z00_3532 =
																		BGL_BIGNUM_U16VECT(BgL_xz00_1453);
																	{	/* Unsafe/bignumber.scm 234 */
																		long BgL_tmpz00_6854;

																		BgL_tmpz00_6854 = (long) (BgL_iz00_3530);
																		BgL_arg1246z00_3531 =
																			BGL_U16VREF(BgL_arg1247z00_3532,
																			BgL_tmpz00_6854);
																}}
																{	/* Unsafe/bignumber.scm 234 */
																	long BgL_res2468z00_3537;

																	{	/* Unsafe/bignumber.scm 234 */
																		long BgL_arg2198z00_3534;

																		BgL_arg2198z00_3534 =
																			(long) (BgL_arg1246z00_3531);
																		{	/* Unsafe/bignumber.scm 234 */
																			long BgL_res2467z00_3536;

																			BgL_res2467z00_3536 =
																				(long) (BgL_arg2198z00_3534);
																			BgL_res2468z00_3537 = BgL_res2467z00_3536;
																	}}
																	BgL_arg1425z00_1488 = BgL_res2468z00_3537;
														}}}
														BgL_wz00_1480 =
															(BgL_arg1425z00_1488 + BgL_cz00_1477);
													}
													if ((BgL_wz00_1480 < ((long) 16384)))
														{	/* Unsafe/bignumber.scm 463 */
															{	/* Unsafe/bignumber.scm 465 */
																int BgL_iz00_3545;
																int BgL_digitz00_3546;

																BgL_iz00_3545 = (int) (BgL_iz00_1476);
																BgL_digitz00_3546 = (int) (BgL_wz00_1480);
																{	/* Unsafe/bignumber.scm 236 */
																	obj_t BgL_arg1250z00_3547;
																	uint16_t BgL_arg1252z00_3548;

																	BgL_arg1250z00_3547 =
																		BGL_BIGNUM_U16VECT(BgL_rz00_1458);
																	{	/* Unsafe/bignumber.scm 236 */
																		uint16_t BgL_res2471z00_3550;

																		{	/* Unsafe/bignumber.scm 236 */
																			long BgL_tmpz00_6865;

																			BgL_tmpz00_6865 =
																				(long) (BgL_digitz00_3546);
																			BgL_res2471z00_3550 =
																				(uint16_t) (BgL_tmpz00_6865);
																		}
																		BgL_arg1252z00_3548 = BgL_res2471z00_3550;
																	}
																	{	/* Unsafe/bignumber.scm 236 */
																		long BgL_tmpz00_6868;

																		BgL_tmpz00_6868 = (long) (BgL_iz00_3545);
																		BGL_U16VSET(BgL_arg1250z00_3547,
																			BgL_tmpz00_6868, BgL_arg1252z00_3548);
																	} BUNSPEC;
															}}
															{
																long BgL_cz00_6873;
																long BgL_iz00_6871;

																BgL_iz00_6871 = (BgL_iz00_1476 + ((long) 1));
																BgL_cz00_6873 = ((long) 0);
																BgL_cz00_1477 = BgL_cz00_6873;
																BgL_iz00_1476 = BgL_iz00_6871;
																goto BgL_zc3z04anonymousza31415ze3z87_1478;
															}
														}
													else
														{	/* Unsafe/bignumber.scm 463 */
															{	/* Unsafe/bignumber.scm 468 */
																long BgL_arg1420z00_1484;

																BgL_arg1420z00_1484 =
																	(BgL_wz00_1480 - ((long) 16384));
																{	/* Unsafe/bignumber.scm 468 */
																	int BgL_iz00_3557;
																	int BgL_digitz00_3558;

																	BgL_iz00_3557 = (int) (BgL_iz00_1476);
																	BgL_digitz00_3558 =
																		(int) (BgL_arg1420z00_1484);
																	{	/* Unsafe/bignumber.scm 236 */
																		obj_t BgL_arg1250z00_3559;
																		uint16_t BgL_arg1252z00_3560;

																		BgL_arg1250z00_3559 =
																			BGL_BIGNUM_U16VECT(BgL_rz00_1458);
																		{	/* Unsafe/bignumber.scm 236 */
																			uint16_t BgL_res2474z00_3562;

																			{	/* Unsafe/bignumber.scm 236 */
																				long BgL_tmpz00_6878;

																				BgL_tmpz00_6878 =
																					(long) (BgL_digitz00_3558);
																				BgL_res2474z00_3562 =
																					(uint16_t) (BgL_tmpz00_6878);
																			}
																			BgL_arg1252z00_3560 = BgL_res2474z00_3562;
																		}
																		{	/* Unsafe/bignumber.scm 236 */
																			long BgL_tmpz00_6881;

																			BgL_tmpz00_6881 = (long) (BgL_iz00_3557);
																			BGL_U16VSET(BgL_arg1250z00_3559,
																				BgL_tmpz00_6881, BgL_arg1252z00_3560);
																		} BUNSPEC;
															}}}
															{
																long BgL_cz00_6886;
																long BgL_iz00_6884;

																BgL_iz00_6884 = (BgL_iz00_1476 + ((long) 1));
																BgL_cz00_6886 = ((long) 1);
																BgL_cz00_1477 = BgL_cz00_6886;
																BgL_iz00_1476 = BgL_iz00_6884;
																goto BgL_zc3z04anonymousza31415ze3z87_1478;
															}
														}
												}
											else
												{	/* Unsafe/bignumber.scm 460 */
													if ((BgL_cz00_1477 == ((long) 0)))
														{	/* Unsafe/bignumber.scm 471 */
															return
																BGl_bignumzd2shrinkzd2zz__bignumz00
																(BgL_rz00_1458, BgL_lenxz00_1455);
														}
													else
														{	/* Unsafe/bignumber.scm 471 */
															{	/* Unsafe/bignumber.scm 474 */
																int BgL_iz00_3568;
																int BgL_digitz00_3569;

																BgL_iz00_3568 = (int) (BgL_lenxz00_1455);
																BgL_digitz00_3569 = (int) (BgL_cz00_1477);
																{	/* Unsafe/bignumber.scm 236 */
																	obj_t BgL_arg1250z00_3570;
																	uint16_t BgL_arg1252z00_3571;

																	BgL_arg1250z00_3570 =
																		BGL_BIGNUM_U16VECT(BgL_rz00_1458);
																	{	/* Unsafe/bignumber.scm 236 */
																		uint16_t BgL_res2477z00_3573;

																		{	/* Unsafe/bignumber.scm 236 */
																			long BgL_tmpz00_6893;

																			BgL_tmpz00_6893 =
																				(long) (BgL_digitz00_3569);
																			BgL_res2477z00_3573 =
																				(uint16_t) (BgL_tmpz00_6893);
																		}
																		BgL_arg1252z00_3571 = BgL_res2477z00_3573;
																	}
																	{	/* Unsafe/bignumber.scm 236 */
																		long BgL_tmpz00_6896;

																		BgL_tmpz00_6896 = (long) (BgL_iz00_3568);
																		BGL_U16VSET(BgL_arg1250z00_3570,
																			BgL_tmpz00_6896, BgL_arg1252z00_3571);
																	} BUNSPEC;
															}}
															return BgL_rz00_1458;
														}
												}
										}
								}
							}
						}
					else
						{
							long BgL_lenyz00_6902;
							long BgL_lenxz00_6901;
							obj_t BgL_yz00_6900;
							obj_t BgL_xz00_6899;

							BgL_xz00_6899 = BgL_xz00_43;
							BgL_yz00_6900 = BgL_yz00_44;
							BgL_lenxz00_6901 = BgL_lenxz00_1450;
							BgL_lenyz00_6902 = BgL_lenyz00_1451;
							BgL_lenyz00_1456 = BgL_lenyz00_6902;
							BgL_lenxz00_1455 = BgL_lenxz00_6901;
							BgL_yz00_1454 = BgL_yz00_6900;
							BgL_xz00_1453 = BgL_xz00_6899;
							goto BgL_zc3z04anonymousza31401ze3z87_1457;
						}
				}
			}
		}

	}



/* bignum-sub-nonneg */
	obj_t BGl_bignumzd2subzd2nonnegz00zz__bignumz00(obj_t BgL_xz00_45,
		obj_t BgL_yz00_46)
	{
		{	/* Unsafe/bignumber.scm 483 */
			{
				obj_t BgL_xz00_1514;
				obj_t BgL_yz00_1515;
				long BgL_lenxz00_1516;
				long BgL_lenyz00_1517;
				obj_t BgL_rz00_1498;

				{	/* Unsafe/bignumber.scm 536 */
					long BgL_arg1428z00_1496;
					long BgL_arg1429z00_1497;

					{	/* Unsafe/bignumber.scm 228 */
						long BgL_arg1229z00_3749;

						{	/* Unsafe/bignumber.scm 228 */
							obj_t BgL_arg1232z00_3750;

							BgL_arg1232z00_3750 = BGL_BIGNUM_U16VECT(BgL_xz00_45);
							{	/* Unsafe/bignumber.scm 228 */
								long BgL_res2525z00_3752;

								BgL_res2525z00_3752 = BGL_HVECTOR_LENGTH(BgL_arg1232z00_3750);
								BgL_arg1229z00_3749 = BgL_res2525z00_3752;
						}}
						{	/* Unsafe/bignumber.scm 228 */
							long BgL_res2527z00_3757;

							{	/* Unsafe/bignumber.scm 228 */
								uint16_t BgL_xz00_3753;

								BgL_xz00_3753 = (uint16_t) (BgL_arg1229z00_3749);
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_arg2198z00_3754;

									BgL_arg2198z00_3754 = (long) (BgL_xz00_3753);
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_res2526z00_3756;

										BgL_res2526z00_3756 = (long) (BgL_arg2198z00_3754);
										BgL_res2527z00_3757 = BgL_res2526z00_3756;
							}}}
							BgL_arg1428z00_1496 = BgL_res2527z00_3757;
					}}
					{	/* Unsafe/bignumber.scm 228 */
						long BgL_arg1229z00_3759;

						{	/* Unsafe/bignumber.scm 228 */
							obj_t BgL_arg1232z00_3760;

							BgL_arg1232z00_3760 = BGL_BIGNUM_U16VECT(BgL_yz00_46);
							{	/* Unsafe/bignumber.scm 228 */
								long BgL_res2528z00_3762;

								BgL_res2528z00_3762 = BGL_HVECTOR_LENGTH(BgL_arg1232z00_3760);
								BgL_arg1229z00_3759 = BgL_res2528z00_3762;
						}}
						{	/* Unsafe/bignumber.scm 228 */
							long BgL_res2530z00_3767;

							{	/* Unsafe/bignumber.scm 228 */
								uint16_t BgL_xz00_3763;

								BgL_xz00_3763 = (uint16_t) (BgL_arg1229z00_3759);
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_arg2198z00_3764;

									BgL_arg2198z00_3764 = (long) (BgL_xz00_3763);
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_res2529z00_3766;

										BgL_res2529z00_3766 = (long) (BgL_arg2198z00_3764);
										BgL_res2530z00_3767 = BgL_res2529z00_3766;
							}}}
							BgL_arg1429z00_1497 = BgL_res2530z00_3767;
					}}
					BgL_xz00_1514 = BgL_xz00_45;
					BgL_yz00_1515 = BgL_yz00_46;
					BgL_lenxz00_1516 = BgL_arg1428z00_1496;
					BgL_lenyz00_1517 = BgL_arg1429z00_1497;
					{	/* Unsafe/bignumber.scm 500 */
						obj_t BgL_rz00_1519;

						{	/* Unsafe/bignumber.scm 500 */
							obj_t BgL_res2498z00_3647;

							{	/* Unsafe/bignumber.scm 500 */
								int BgL_lenz00_3643;

								BgL_lenz00_3643 = (int) (BgL_lenxz00_1516);
								{	/* Unsafe/bignumber.scm 226 */
									obj_t BgL_arg1227z00_3644;

									{	/* Unsafe/bignumber.scm 226 */

										BgL_arg1227z00_3644 =
											BGl_makezd2u16vectorzd2zz__srfi4z00(
											(long) (BgL_lenz00_3643), (uint16_t) (0));
									}
									BgL_res2498z00_3647 = bgl_make_bignum(BgL_arg1227z00_3644);
							}}
							BgL_rz00_1519 = BgL_res2498z00_3647;
						}
						{
							long BgL_iz00_1521;
							long BgL_bz00_1522;

							BgL_iz00_1521 = ((long) 1);
							BgL_bz00_1522 = ((long) 0);
						BgL_zc3z04anonymousza31440ze3z87_1523:
							if ((BgL_iz00_1521 < BgL_lenyz00_1517))
								{	/* Unsafe/bignumber.scm 505 */
									long BgL_wz00_1525;

									{	/* Unsafe/bignumber.scm 505 */
										long BgL_arg1448z00_1531;

										{	/* Unsafe/bignumber.scm 505 */
											long BgL_arg1449z00_1532;
											long BgL_arg1451z00_1533;

											{	/* Unsafe/bignumber.scm 505 */
												int BgL_iz00_3652;

												BgL_iz00_3652 = (int) (BgL_iz00_1521);
												{	/* Unsafe/bignumber.scm 234 */
													uint16_t BgL_arg1246z00_3653;

													{	/* Unsafe/bignumber.scm 234 */
														obj_t BgL_arg1247z00_3654;

														BgL_arg1247z00_3654 =
															BGL_BIGNUM_U16VECT(BgL_xz00_1514);
														{	/* Unsafe/bignumber.scm 234 */
															long BgL_tmpz00_6921;

															BgL_tmpz00_6921 = (long) (BgL_iz00_3652);
															BgL_arg1246z00_3653 =
																BGL_U16VREF(BgL_arg1247z00_3654,
																BgL_tmpz00_6921);
													}}
													{	/* Unsafe/bignumber.scm 234 */
														long BgL_res2501z00_3659;

														{	/* Unsafe/bignumber.scm 234 */
															long BgL_arg2198z00_3656;

															BgL_arg2198z00_3656 =
																(long) (BgL_arg1246z00_3653);
															{	/* Unsafe/bignumber.scm 234 */
																long BgL_res2500z00_3658;

																BgL_res2500z00_3658 =
																	(long) (BgL_arg2198z00_3656);
																BgL_res2501z00_3659 = BgL_res2500z00_3658;
														}}
														BgL_arg1449z00_1532 = BgL_res2501z00_3659;
											}}}
											{	/* Unsafe/bignumber.scm 506 */
												int BgL_iz00_3661;

												BgL_iz00_3661 = (int) (BgL_iz00_1521);
												{	/* Unsafe/bignumber.scm 234 */
													uint16_t BgL_arg1246z00_3662;

													{	/* Unsafe/bignumber.scm 234 */
														obj_t BgL_arg1247z00_3663;

														BgL_arg1247z00_3663 =
															BGL_BIGNUM_U16VECT(BgL_yz00_1515);
														{	/* Unsafe/bignumber.scm 234 */
															long BgL_tmpz00_6928;

															BgL_tmpz00_6928 = (long) (BgL_iz00_3661);
															BgL_arg1246z00_3662 =
																BGL_U16VREF(BgL_arg1247z00_3663,
																BgL_tmpz00_6928);
													}}
													{	/* Unsafe/bignumber.scm 234 */
														long BgL_res2503z00_3668;

														{	/* Unsafe/bignumber.scm 234 */
															long BgL_arg2198z00_3665;

															BgL_arg2198z00_3665 =
																(long) (BgL_arg1246z00_3662);
															{	/* Unsafe/bignumber.scm 234 */
																long BgL_res2502z00_3667;

																BgL_res2502z00_3667 =
																	(long) (BgL_arg2198z00_3665);
																BgL_res2503z00_3668 = BgL_res2502z00_3667;
														}}
														BgL_arg1451z00_1533 = BgL_res2503z00_3668;
											}}}
											BgL_arg1448z00_1531 =
												(BgL_arg1449z00_1532 - BgL_arg1451z00_1533);
										}
										BgL_wz00_1525 = (BgL_arg1448z00_1531 - BgL_bz00_1522);
									}
									if ((BgL_wz00_1525 < ((long) 0)))
										{	/* Unsafe/bignumber.scm 508 */
											{	/* Unsafe/bignumber.scm 510 */
												long BgL_arg1443z00_1527;

												BgL_arg1443z00_1527 = (BgL_wz00_1525 + ((long) 16384));
												{	/* Unsafe/bignumber.scm 510 */
													int BgL_iz00_3681;
													int BgL_digitz00_3682;

													BgL_iz00_3681 = (int) (BgL_iz00_1521);
													BgL_digitz00_3682 = (int) (BgL_arg1443z00_1527);
													{	/* Unsafe/bignumber.scm 236 */
														obj_t BgL_arg1250z00_3683;
														uint16_t BgL_arg1252z00_3684;

														BgL_arg1250z00_3683 =
															BGL_BIGNUM_U16VECT(BgL_rz00_1519);
														{	/* Unsafe/bignumber.scm 236 */
															uint16_t BgL_res2508z00_3686;

															{	/* Unsafe/bignumber.scm 236 */
																long BgL_tmpz00_6941;

																BgL_tmpz00_6941 = (long) (BgL_digitz00_3682);
																BgL_res2508z00_3686 =
																	(uint16_t) (BgL_tmpz00_6941);
															}
															BgL_arg1252z00_3684 = BgL_res2508z00_3686;
														}
														{	/* Unsafe/bignumber.scm 236 */
															long BgL_tmpz00_6944;

															BgL_tmpz00_6944 = (long) (BgL_iz00_3681);
															BGL_U16VSET(BgL_arg1250z00_3683, BgL_tmpz00_6944,
																BgL_arg1252z00_3684);
														} BUNSPEC;
											}}}
											{
												long BgL_bz00_6949;
												long BgL_iz00_6947;

												BgL_iz00_6947 = (BgL_iz00_1521 + ((long) 1));
												BgL_bz00_6949 = ((long) 1);
												BgL_bz00_1522 = BgL_bz00_6949;
												BgL_iz00_1521 = BgL_iz00_6947;
												goto BgL_zc3z04anonymousza31440ze3z87_1523;
											}
										}
									else
										{	/* Unsafe/bignumber.scm 508 */
											{	/* Unsafe/bignumber.scm 513 */
												int BgL_iz00_3690;
												int BgL_digitz00_3691;

												BgL_iz00_3690 = (int) (BgL_iz00_1521);
												BgL_digitz00_3691 = (int) (BgL_wz00_1525);
												{	/* Unsafe/bignumber.scm 236 */
													obj_t BgL_arg1250z00_3692;
													uint16_t BgL_arg1252z00_3693;

													BgL_arg1250z00_3692 =
														BGL_BIGNUM_U16VECT(BgL_rz00_1519);
													{	/* Unsafe/bignumber.scm 236 */
														uint16_t BgL_res2510z00_3695;

														{	/* Unsafe/bignumber.scm 236 */
															long BgL_tmpz00_6953;

															BgL_tmpz00_6953 = (long) (BgL_digitz00_3691);
															BgL_res2510z00_3695 =
																(uint16_t) (BgL_tmpz00_6953);
														}
														BgL_arg1252z00_3693 = BgL_res2510z00_3695;
													}
													{	/* Unsafe/bignumber.scm 236 */
														long BgL_tmpz00_6956;

														BgL_tmpz00_6956 = (long) (BgL_iz00_3690);
														BGL_U16VSET(BgL_arg1250z00_3692, BgL_tmpz00_6956,
															BgL_arg1252z00_3693);
													} BUNSPEC;
											}}
											{
												long BgL_bz00_6961;
												long BgL_iz00_6959;

												BgL_iz00_6959 = (BgL_iz00_1521 + ((long) 1));
												BgL_bz00_6961 = ((long) 0);
												BgL_bz00_1522 = BgL_bz00_6961;
												BgL_iz00_1521 = BgL_iz00_6959;
												goto BgL_zc3z04anonymousza31440ze3z87_1523;
											}
										}
								}
							else
								{
									long BgL_iz00_1535;
									long BgL_bz00_1536;

									BgL_iz00_1535 = BgL_iz00_1521;
									BgL_bz00_1536 = BgL_bz00_1522;
								BgL_zc3z04anonymousza31452ze3z87_1537:
									if ((BgL_iz00_1535 < BgL_lenxz00_1516))
										{	/* Unsafe/bignumber.scm 519 */
											long BgL_wz00_1539;

											{	/* Unsafe/bignumber.scm 519 */
												long BgL_arg1459z00_1545;

												{	/* Unsafe/bignumber.scm 519 */
													int BgL_iz00_3702;

													BgL_iz00_3702 = (int) (BgL_iz00_1535);
													{	/* Unsafe/bignumber.scm 234 */
														uint16_t BgL_arg1246z00_3703;

														{	/* Unsafe/bignumber.scm 234 */
															obj_t BgL_arg1247z00_3704;

															BgL_arg1247z00_3704 =
																BGL_BIGNUM_U16VECT(BgL_xz00_1514);
															{	/* Unsafe/bignumber.scm 234 */
																long BgL_tmpz00_6966;

																BgL_tmpz00_6966 = (long) (BgL_iz00_3702);
																BgL_arg1246z00_3703 =
																	BGL_U16VREF(BgL_arg1247z00_3704,
																	BgL_tmpz00_6966);
														}}
														{	/* Unsafe/bignumber.scm 234 */
															long BgL_res2514z00_3709;

															{	/* Unsafe/bignumber.scm 234 */
																long BgL_arg2198z00_3706;

																BgL_arg2198z00_3706 =
																	(long) (BgL_arg1246z00_3703);
																{	/* Unsafe/bignumber.scm 234 */
																	long BgL_res2513z00_3708;

																	BgL_res2513z00_3708 =
																		(long) (BgL_arg2198z00_3706);
																	BgL_res2514z00_3709 = BgL_res2513z00_3708;
															}}
															BgL_arg1459z00_1545 = BgL_res2514z00_3709;
												}}}
												BgL_wz00_1539 = (BgL_arg1459z00_1545 - BgL_bz00_1536);
											}
											if ((BgL_wz00_1539 < ((long) 0)))
												{	/* Unsafe/bignumber.scm 520 */
													{	/* Unsafe/bignumber.scm 522 */
														long BgL_arg1455z00_1541;

														BgL_arg1455z00_1541 =
															(BgL_wz00_1539 + ((long) 16384));
														{	/* Unsafe/bignumber.scm 522 */
															int BgL_iz00_3719;
															int BgL_digitz00_3720;

															BgL_iz00_3719 = (int) (BgL_iz00_1535);
															BgL_digitz00_3720 = (int) (BgL_arg1455z00_1541);
															{	/* Unsafe/bignumber.scm 236 */
																obj_t BgL_arg1250z00_3721;
																uint16_t BgL_arg1252z00_3722;

																BgL_arg1250z00_3721 =
																	BGL_BIGNUM_U16VECT(BgL_rz00_1519);
																{	/* Unsafe/bignumber.scm 236 */
																	uint16_t BgL_res2518z00_3724;

																	{	/* Unsafe/bignumber.scm 236 */
																		long BgL_tmpz00_6978;

																		BgL_tmpz00_6978 =
																			(long) (BgL_digitz00_3720);
																		BgL_res2518z00_3724 =
																			(uint16_t) (BgL_tmpz00_6978);
																	}
																	BgL_arg1252z00_3722 = BgL_res2518z00_3724;
																}
																{	/* Unsafe/bignumber.scm 236 */
																	long BgL_tmpz00_6981;

																	BgL_tmpz00_6981 = (long) (BgL_iz00_3719);
																	BGL_U16VSET(BgL_arg1250z00_3721,
																		BgL_tmpz00_6981, BgL_arg1252z00_3722);
																} BUNSPEC;
													}}}
													{
														long BgL_bz00_6986;
														long BgL_iz00_6984;

														BgL_iz00_6984 = (BgL_iz00_1535 + ((long) 1));
														BgL_bz00_6986 = ((long) 1);
														BgL_bz00_1536 = BgL_bz00_6986;
														BgL_iz00_1535 = BgL_iz00_6984;
														goto BgL_zc3z04anonymousza31452ze3z87_1537;
													}
												}
											else
												{	/* Unsafe/bignumber.scm 520 */
													{	/* Unsafe/bignumber.scm 525 */
														int BgL_iz00_3728;
														int BgL_digitz00_3729;

														BgL_iz00_3728 = (int) (BgL_iz00_1535);
														BgL_digitz00_3729 = (int) (BgL_wz00_1539);
														{	/* Unsafe/bignumber.scm 236 */
															obj_t BgL_arg1250z00_3730;
															uint16_t BgL_arg1252z00_3731;

															BgL_arg1250z00_3730 =
																BGL_BIGNUM_U16VECT(BgL_rz00_1519);
															{	/* Unsafe/bignumber.scm 236 */
																uint16_t BgL_res2520z00_3733;

																{	/* Unsafe/bignumber.scm 236 */
																	long BgL_tmpz00_6990;

																	BgL_tmpz00_6990 = (long) (BgL_digitz00_3729);
																	BgL_res2520z00_3733 =
																		(uint16_t) (BgL_tmpz00_6990);
																}
																BgL_arg1252z00_3731 = BgL_res2520z00_3733;
															}
															{	/* Unsafe/bignumber.scm 236 */
																long BgL_tmpz00_6993;

																BgL_tmpz00_6993 = (long) (BgL_iz00_3728);
																BGL_U16VSET(BgL_arg1250z00_3730,
																	BgL_tmpz00_6993, BgL_arg1252z00_3731);
															} BUNSPEC;
													}}
													{
														long BgL_bz00_6998;
														long BgL_iz00_6996;

														BgL_iz00_6996 = (BgL_iz00_1535 + ((long) 1));
														BgL_bz00_6998 = ((long) 0);
														BgL_bz00_1536 = BgL_bz00_6998;
														BgL_iz00_1535 = BgL_iz00_6996;
														goto BgL_zc3z04anonymousza31452ze3z87_1537;
													}
												}
										}
									else
										{	/* Unsafe/bignumber.scm 517 */
											if ((BgL_bz00_1536 == ((long) 0)))
												{	/* Unsafe/bignumber.scm 232 */
													obj_t BgL_arg1243z00_3740;
													uint16_t BgL_arg1245z00_3741;

													BgL_arg1243z00_3740 =
														BGL_BIGNUM_U16VECT(BgL_rz00_1519);
													{	/* Unsafe/bignumber.scm 232 */
														uint16_t BgL_res2523z00_3742;

														BgL_res2523z00_3742 = (uint16_t) (((long) 1));
														BgL_arg1245z00_3741 = BgL_res2523z00_3742;
													}
													BGL_U16VSET(BgL_arg1243z00_3740, ((long) 0),
														BgL_arg1245z00_3741);
													BUNSPEC;
												}
											else
												{	/* Unsafe/bignumber.scm 528 */
													{	/* Unsafe/bignumber.scm 232 */
														obj_t BgL_arg1243z00_3745;
														uint16_t BgL_arg1245z00_3746;

														BgL_arg1243z00_3745 =
															BGL_BIGNUM_U16VECT(BgL_rz00_1519);
														{	/* Unsafe/bignumber.scm 232 */
															uint16_t BgL_res2524z00_3747;

															BgL_res2524z00_3747 = (uint16_t) (((long) 0));
															BgL_arg1245z00_3746 = BgL_res2524z00_3747;
														}
														BGL_U16VSET(BgL_arg1243z00_3745, ((long) 0),
															BgL_arg1245z00_3746);
														BUNSPEC;
													}
													{	/* Unsafe/bignumber.scm 532 */
														bool_t BgL_tmpz00_7007;

														BgL_rz00_1498 = BgL_rz00_1519;
														{	/* Unsafe/bignumber.scm 486 */
															long BgL_lrz00_1500;

															{	/* Unsafe/bignumber.scm 228 */
																long BgL_arg1229z00_3598;

																{	/* Unsafe/bignumber.scm 228 */
																	obj_t BgL_arg1232z00_3599;

																	BgL_arg1232z00_3599 =
																		BGL_BIGNUM_U16VECT(BgL_rz00_1498);
																	{	/* Unsafe/bignumber.scm 228 */
																		long BgL_res2485z00_3601;

																		BgL_res2485z00_3601 =
																			BGL_HVECTOR_LENGTH(BgL_arg1232z00_3599);
																		BgL_arg1229z00_3598 = BgL_res2485z00_3601;
																}}
																{	/* Unsafe/bignumber.scm 228 */
																	long BgL_res2487z00_3606;

																	{	/* Unsafe/bignumber.scm 228 */
																		uint16_t BgL_xz00_3602;

																		BgL_xz00_3602 =
																			(uint16_t) (BgL_arg1229z00_3598);
																		{	/* Unsafe/bignumber.scm 228 */
																			long BgL_arg2198z00_3603;

																			BgL_arg2198z00_3603 =
																				(long) (BgL_xz00_3602);
																			{	/* Unsafe/bignumber.scm 228 */
																				long BgL_res2486z00_3605;

																				BgL_res2486z00_3605 =
																					(long) (BgL_arg2198z00_3603);
																				BgL_res2487z00_3606 =
																					BgL_res2486z00_3605;
																	}}}
																	BgL_lrz00_1500 = BgL_res2487z00_3606;
															}}
															{
																long BgL_iz00_1502;
																long BgL_cz00_1503;

																BgL_iz00_1502 = ((long) 1);
																BgL_cz00_1503 = ((long) 0);
															BgL_zc3z04anonymousza31431ze3z87_1504:
																if ((BgL_iz00_1502 < BgL_lrz00_1500))
																	{	/* Unsafe/bignumber.scm 490 */
																		long BgL_wz00_1506;

																		{	/* Unsafe/bignumber.scm 490 */
																			long BgL_arg1438z00_1512;

																			{	/* Unsafe/bignumber.scm 490 */
																				int BgL_iz00_3611;

																				BgL_iz00_3611 = (int) (BgL_iz00_1502);
																				{	/* Unsafe/bignumber.scm 234 */
																					uint16_t BgL_arg1246z00_3612;

																					{	/* Unsafe/bignumber.scm 234 */
																						obj_t BgL_arg1247z00_3613;

																						BgL_arg1247z00_3613 =
																							BGL_BIGNUM_U16VECT(BgL_rz00_1498);
																						{	/* Unsafe/bignumber.scm 234 */
																							long BgL_tmpz00_7017;

																							BgL_tmpz00_7017 =
																								(long) (BgL_iz00_3611);
																							BgL_arg1246z00_3612 =
																								BGL_U16VREF(BgL_arg1247z00_3613,
																								BgL_tmpz00_7017);
																					}}
																					{	/* Unsafe/bignumber.scm 234 */
																						long BgL_res2490z00_3618;

																						{	/* Unsafe/bignumber.scm 234 */
																							long BgL_arg2198z00_3615;

																							BgL_arg2198z00_3615 =
																								(long) (BgL_arg1246z00_3612);
																							{	/* Unsafe/bignumber.scm 234 */
																								long BgL_res2489z00_3617;

																								BgL_res2489z00_3617 =
																									(long) (BgL_arg2198z00_3615);
																								BgL_res2490z00_3618 =
																									BgL_res2489z00_3617;
																						}}
																						BgL_arg1438z00_1512 =
																							BgL_res2490z00_3618;
																			}}}
																			BgL_wz00_1506 =
																				(BgL_arg1438z00_1512 + BgL_cz00_1503);
																		}
																		if ((((long) 0) < BgL_wz00_1506))
																			{	/* Unsafe/bignumber.scm 491 */
																				{	/* Unsafe/bignumber.scm 493 */
																					long BgL_arg1434z00_1508;

																					BgL_arg1434z00_1508 =
																						(((long) 16384) - BgL_wz00_1506);
																					{	/* Unsafe/bignumber.scm 493 */
																						int BgL_iz00_3628;
																						int BgL_digitz00_3629;

																						BgL_iz00_3628 =
																							(int) (BgL_iz00_1502);
																						BgL_digitz00_3629 =
																							(int) (BgL_arg1434z00_1508);
																						{	/* Unsafe/bignumber.scm 236 */
																							obj_t BgL_arg1250z00_3630;
																							uint16_t BgL_arg1252z00_3631;

																							BgL_arg1250z00_3630 =
																								BGL_BIGNUM_U16VECT
																								(BgL_rz00_1498);
																							{	/* Unsafe/bignumber.scm 236 */
																								uint16_t BgL_res2494z00_3633;

																								{	/* Unsafe/bignumber.scm 236 */
																									long BgL_tmpz00_7029;

																									BgL_tmpz00_7029 =
																										(long) (BgL_digitz00_3629);
																									BgL_res2494z00_3633 =
																										(uint16_t)
																										(BgL_tmpz00_7029);
																								}
																								BgL_arg1252z00_3631 =
																									BgL_res2494z00_3633;
																							}
																							{	/* Unsafe/bignumber.scm 236 */
																								long BgL_tmpz00_7032;

																								BgL_tmpz00_7032 =
																									(long) (BgL_iz00_3628);
																								BGL_U16VSET(BgL_arg1250z00_3630,
																									BgL_tmpz00_7032,
																									BgL_arg1252z00_3631);
																							} BUNSPEC;
																				}}}
																				{
																					long BgL_cz00_7037;
																					long BgL_iz00_7035;

																					BgL_iz00_7035 =
																						(BgL_iz00_1502 + ((long) 1));
																					BgL_cz00_7037 = ((long) 1);
																					BgL_cz00_1503 = BgL_cz00_7037;
																					BgL_iz00_1502 = BgL_iz00_7035;
																					goto
																						BgL_zc3z04anonymousza31431ze3z87_1504;
																				}
																			}
																		else
																			{	/* Unsafe/bignumber.scm 491 */
																				{	/* Unsafe/bignumber.scm 496 */
																					int BgL_iz00_3637;

																					BgL_iz00_3637 = (int) (BgL_iz00_1502);
																					{	/* Unsafe/bignumber.scm 236 */
																						obj_t BgL_arg1250z00_3638;
																						uint16_t BgL_arg1252z00_3639;

																						BgL_arg1250z00_3638 =
																							BGL_BIGNUM_U16VECT(BgL_rz00_1498);
																						{	/* Unsafe/bignumber.scm 236 */
																							uint16_t BgL_res2496z00_3640;

																							BgL_res2496z00_3640 =
																								(uint16_t) (((long) 0));
																							BgL_arg1252z00_3639 =
																								BgL_res2496z00_3640;
																						}
																						{	/* Unsafe/bignumber.scm 236 */
																							long BgL_tmpz00_7041;

																							BgL_tmpz00_7041 =
																								(long) (BgL_iz00_3637);
																							BGL_U16VSET(BgL_arg1250z00_3638,
																								BgL_tmpz00_7041,
																								BgL_arg1252z00_3639);
																						} BUNSPEC;
																				}}
																				{
																					long BgL_cz00_7046;
																					long BgL_iz00_7044;

																					BgL_iz00_7044 =
																						(BgL_iz00_1502 + ((long) 1));
																					BgL_cz00_7046 = ((long) 0);
																					BgL_cz00_1503 = BgL_cz00_7046;
																					BgL_iz00_1502 = BgL_iz00_7044;
																					goto
																						BgL_zc3z04anonymousza31431ze3z87_1504;
																				}
																			}
																	}
																else
																	{	/* Unsafe/bignumber.scm 488 */
																		BgL_tmpz00_7007 = ((bool_t) 0);
																	}
															}
														}
														BBOOL(BgL_tmpz00_7007);
													}
												}
										}
								}
						}
						return
							BGl_bignumzd2removezd2leadingzd2za7eroesz75zz__bignumz00
							(BgL_rz00_1519);
					}
				}
			}
		}

	}



/* bignum-sum2 */
	obj_t BGl_bignumzd2sum2zd2zz__bignumz00(obj_t BgL_xz00_47, obj_t BgL_yz00_48,
		long BgL_signzd2xzd2_49, long BgL_signzd2yzd2_50)
	{
		{	/* Unsafe/bignumber.scm 538 */
			if ((BgL_signzd2xzd2_49 == BgL_signzd2yzd2_50))
				{	/* Unsafe/bignumber.scm 547 */
					obj_t BgL_arg1462z00_1553;

					BgL_arg1462z00_1553 =
						BGl_bignumzd2addzd2nonnegz00zz__bignumz00(BgL_xz00_47, BgL_yz00_48);
					{	/* Unsafe/bignumber.scm 541 */
						bool_t BgL_test3379z00_7052;

						{	/* Unsafe/bignumber.scm 541 */
							long BgL_arg1473z00_3796;

							{	/* Unsafe/bignumber.scm 230 */
								uint16_t BgL_arg1239z00_3799;

								{	/* Unsafe/bignumber.scm 230 */
									obj_t BgL_arg1242z00_3800;

									BgL_arg1242z00_3800 = BGL_BIGNUM_U16VECT(BgL_arg1462z00_1553);
									BgL_arg1239z00_3799 =
										BGL_U16VREF(BgL_arg1242z00_3800, ((long) 0));
								}
								{	/* Unsafe/bignumber.scm 230 */
									long BgL_res2538z00_3805;

									{	/* Unsafe/bignumber.scm 230 */
										long BgL_arg2198z00_3802;

										BgL_arg2198z00_3802 = (long) (BgL_arg1239z00_3799);
										{	/* Unsafe/bignumber.scm 230 */
											long BgL_res2537z00_3804;

											BgL_res2537z00_3804 = (long) (BgL_arg2198z00_3802);
											BgL_res2538z00_3805 = BgL_res2537z00_3804;
									}}
									BgL_arg1473z00_3796 = BgL_res2538z00_3805;
							}}
							BgL_test3379z00_7052 =
								(BgL_arg1473z00_3796 == BgL_signzd2xzd2_49);
						}
						if (BgL_test3379z00_7052)
							{	/* Unsafe/bignumber.scm 541 */
								BGl_bignumzd2signzd2setz12z12zz__bignumz00(BgL_arg1462z00_1553,
									(int) (((long) 1)));
							}
						else
							{	/* Unsafe/bignumber.scm 541 */
								BGl_bignumzd2signzd2setz12z12zz__bignumz00(BgL_arg1462z00_1553,
									(int) (((long) 0)));
					}}
					return
						BGl_bignumzd2removezd2leadingzd2za7eroesz75zz__bignumz00
						(BgL_arg1462z00_1553);
				}
			else
				{	/* Unsafe/bignumber.scm 548 */
					bool_t BgL_test3380z00_7063;

					{	/* Unsafe/bignumber.scm 548 */
						long BgL_arg1468z00_1559;
						long BgL_arg1469z00_1560;

						{	/* Unsafe/bignumber.scm 228 */
							long BgL_arg1229z00_3812;

							{	/* Unsafe/bignumber.scm 228 */
								obj_t BgL_arg1232z00_3813;

								BgL_arg1232z00_3813 = BGL_BIGNUM_U16VECT(BgL_xz00_47);
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_res2540z00_3815;

									BgL_res2540z00_3815 = BGL_HVECTOR_LENGTH(BgL_arg1232z00_3813);
									BgL_arg1229z00_3812 = BgL_res2540z00_3815;
							}}
							{	/* Unsafe/bignumber.scm 228 */
								long BgL_res2542z00_3820;

								{	/* Unsafe/bignumber.scm 228 */
									uint16_t BgL_xz00_3816;

									BgL_xz00_3816 = (uint16_t) (BgL_arg1229z00_3812);
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_arg2198z00_3817;

										BgL_arg2198z00_3817 = (long) (BgL_xz00_3816);
										{	/* Unsafe/bignumber.scm 228 */
											long BgL_res2541z00_3819;

											BgL_res2541z00_3819 = (long) (BgL_arg2198z00_3817);
											BgL_res2542z00_3820 = BgL_res2541z00_3819;
								}}}
								BgL_arg1468z00_1559 = BgL_res2542z00_3820;
						}}
						{	/* Unsafe/bignumber.scm 228 */
							long BgL_arg1229z00_3822;

							{	/* Unsafe/bignumber.scm 228 */
								obj_t BgL_arg1232z00_3823;

								BgL_arg1232z00_3823 = BGL_BIGNUM_U16VECT(BgL_yz00_48);
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_res2543z00_3825;

									BgL_res2543z00_3825 = BGL_HVECTOR_LENGTH(BgL_arg1232z00_3823);
									BgL_arg1229z00_3822 = BgL_res2543z00_3825;
							}}
							{	/* Unsafe/bignumber.scm 228 */
								long BgL_res2545z00_3830;

								{	/* Unsafe/bignumber.scm 228 */
									uint16_t BgL_xz00_3826;

									BgL_xz00_3826 = (uint16_t) (BgL_arg1229z00_3822);
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_arg2198z00_3827;

										BgL_arg2198z00_3827 = (long) (BgL_xz00_3826);
										{	/* Unsafe/bignumber.scm 228 */
											long BgL_res2544z00_3829;

											BgL_res2544z00_3829 = (long) (BgL_arg2198z00_3827);
											BgL_res2545z00_3830 = BgL_res2544z00_3829;
								}}}
								BgL_arg1469z00_1560 = BgL_res2545z00_3830;
						}}
						BgL_test3380z00_7063 = (BgL_arg1468z00_1559 < BgL_arg1469z00_1560);
					}
					if (BgL_test3380z00_7063)
						{	/* Unsafe/bignumber.scm 549 */
							obj_t BgL_arg1466z00_1557;

							BgL_arg1466z00_1557 =
								BGl_bignumzd2subzd2nonnegz00zz__bignumz00(BgL_yz00_48,
								BgL_xz00_47);
							{	/* Unsafe/bignumber.scm 541 */
								bool_t BgL_test3381z00_7076;

								{	/* Unsafe/bignumber.scm 541 */
									long BgL_arg1473z00_3835;

									{	/* Unsafe/bignumber.scm 230 */
										uint16_t BgL_arg1239z00_3838;

										{	/* Unsafe/bignumber.scm 230 */
											obj_t BgL_arg1242z00_3839;

											BgL_arg1242z00_3839 =
												BGL_BIGNUM_U16VECT(BgL_arg1466z00_1557);
											BgL_arg1239z00_3838 =
												BGL_U16VREF(BgL_arg1242z00_3839, ((long) 0));
										}
										{	/* Unsafe/bignumber.scm 230 */
											long BgL_res2548z00_3844;

											{	/* Unsafe/bignumber.scm 230 */
												long BgL_arg2198z00_3841;

												BgL_arg2198z00_3841 = (long) (BgL_arg1239z00_3838);
												{	/* Unsafe/bignumber.scm 230 */
													long BgL_res2547z00_3843;

													BgL_res2547z00_3843 = (long) (BgL_arg2198z00_3841);
													BgL_res2548z00_3844 = BgL_res2547z00_3843;
											}}
											BgL_arg1473z00_3835 = BgL_res2548z00_3844;
									}}
									BgL_test3381z00_7076 =
										(BgL_arg1473z00_3835 == BgL_signzd2yzd2_50);
								}
								if (BgL_test3381z00_7076)
									{	/* Unsafe/bignumber.scm 541 */
										BGl_bignumzd2signzd2setz12z12zz__bignumz00
											(BgL_arg1466z00_1557, (int) (((long) 1)));
									}
								else
									{	/* Unsafe/bignumber.scm 541 */
										BGl_bignumzd2signzd2setz12z12zz__bignumz00
											(BgL_arg1466z00_1557, (int) (((long) 0)));
							}}
							return
								BGl_bignumzd2removezd2leadingzd2za7eroesz75zz__bignumz00
								(BgL_arg1466z00_1557);
						}
					else
						{	/* Unsafe/bignumber.scm 551 */
							obj_t BgL_arg1467z00_1558;

							BgL_arg1467z00_1558 =
								BGl_bignumzd2subzd2nonnegz00zz__bignumz00(BgL_xz00_47,
								BgL_yz00_48);
							{	/* Unsafe/bignumber.scm 541 */
								bool_t BgL_test3382z00_7088;

								{	/* Unsafe/bignumber.scm 541 */
									long BgL_arg1473z00_3851;

									{	/* Unsafe/bignumber.scm 230 */
										uint16_t BgL_arg1239z00_3854;

										{	/* Unsafe/bignumber.scm 230 */
											obj_t BgL_arg1242z00_3855;

											BgL_arg1242z00_3855 =
												BGL_BIGNUM_U16VECT(BgL_arg1467z00_1558);
											BgL_arg1239z00_3854 =
												BGL_U16VREF(BgL_arg1242z00_3855, ((long) 0));
										}
										{	/* Unsafe/bignumber.scm 230 */
											long BgL_res2551z00_3860;

											{	/* Unsafe/bignumber.scm 230 */
												long BgL_arg2198z00_3857;

												BgL_arg2198z00_3857 = (long) (BgL_arg1239z00_3854);
												{	/* Unsafe/bignumber.scm 230 */
													long BgL_res2550z00_3859;

													BgL_res2550z00_3859 = (long) (BgL_arg2198z00_3857);
													BgL_res2551z00_3860 = BgL_res2550z00_3859;
											}}
											BgL_arg1473z00_3851 = BgL_res2551z00_3860;
									}}
									BgL_test3382z00_7088 =
										(BgL_arg1473z00_3851 == BgL_signzd2xzd2_49);
								}
								if (BgL_test3382z00_7088)
									{	/* Unsafe/bignumber.scm 541 */
										BGl_bignumzd2signzd2setz12z12zz__bignumz00
											(BgL_arg1467z00_1558, (int) (((long) 1)));
									}
								else
									{	/* Unsafe/bignumber.scm 541 */
										BGl_bignumzd2signzd2setz12z12zz__bignumz00
											(BgL_arg1467z00_1558, (int) (((long) 0)));
							}}
							return
								BGl_bignumzd2removezd2leadingzd2za7eroesz75zz__bignumz00
								(BgL_arg1467z00_1558);
						}
				}
		}

	}



/* $$+bx */
	BGL_EXPORTED_DEF obj_t bgl_bignum_add(obj_t BgL_xz00_51, obj_t BgL_yz00_52)
	{
		{	/* Unsafe/bignumber.scm 553 */
			{	/* Unsafe/bignumber.scm 554 */
				long BgL_arg1475z00_3866;
				long BgL_arg1476z00_3867;

				{	/* Unsafe/bignumber.scm 230 */
					uint16_t BgL_arg1239z00_3869;

					{	/* Unsafe/bignumber.scm 230 */
						obj_t BgL_arg1242z00_3870;

						BgL_arg1242z00_3870 = BGL_BIGNUM_U16VECT(BgL_xz00_51);
						BgL_arg1239z00_3869 = BGL_U16VREF(BgL_arg1242z00_3870, ((long) 0));
					}
					{	/* Unsafe/bignumber.scm 230 */
						long BgL_res2554z00_3875;

						{	/* Unsafe/bignumber.scm 230 */
							long BgL_arg2198z00_3872;

							BgL_arg2198z00_3872 = (long) (BgL_arg1239z00_3869);
							{	/* Unsafe/bignumber.scm 230 */
								long BgL_res2553z00_3874;

								BgL_res2553z00_3874 = (long) (BgL_arg2198z00_3872);
								BgL_res2554z00_3875 = BgL_res2553z00_3874;
						}}
						BgL_arg1475z00_3866 = BgL_res2554z00_3875;
				}}
				{	/* Unsafe/bignumber.scm 230 */
					uint16_t BgL_arg1239z00_3877;

					{	/* Unsafe/bignumber.scm 230 */
						obj_t BgL_arg1242z00_3878;

						BgL_arg1242z00_3878 = BGL_BIGNUM_U16VECT(BgL_yz00_52);
						BgL_arg1239z00_3877 = BGL_U16VREF(BgL_arg1242z00_3878, ((long) 0));
					}
					{	/* Unsafe/bignumber.scm 230 */
						long BgL_res2556z00_3883;

						{	/* Unsafe/bignumber.scm 230 */
							long BgL_arg2198z00_3880;

							BgL_arg2198z00_3880 = (long) (BgL_arg1239z00_3877);
							{	/* Unsafe/bignumber.scm 230 */
								long BgL_res2555z00_3882;

								BgL_res2555z00_3882 = (long) (BgL_arg2198z00_3880);
								BgL_res2556z00_3883 = BgL_res2555z00_3882;
						}}
						BgL_arg1476z00_3867 = BgL_res2556z00_3883;
				}}
				return
					BGl_bignumzd2sum2zd2zz__bignumz00(BgL_xz00_51, BgL_yz00_52,
					BgL_arg1475z00_3866, BgL_arg1476z00_3867);
			}
		}

	}



/* &$$+bx */
	obj_t BGl_z62z42z42zb2bxzd0zz__bignumz00(obj_t BgL_envz00_6053,
		obj_t BgL_xz00_6054, obj_t BgL_yz00_6055)
	{
		{	/* Unsafe/bignumber.scm 553 */
			{	/* Unsafe/bignumber.scm 554 */
				obj_t BgL_auxz00_7115;
				obj_t BgL_auxz00_7108;

				if (BIGNUMP(BgL_yz00_6055))
					{	/* Unsafe/bignumber.scm 554 */
						BgL_auxz00_7115 = BgL_yz00_6055;
					}
				else
					{
						obj_t BgL_auxz00_7118;

						BgL_auxz00_7118 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
							BINT(((long) 18732)), BGl_string3206z00zz__bignumz00,
							BGl_string3200z00zz__bignumz00, BgL_yz00_6055);
						FAILURE(BgL_auxz00_7118, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_xz00_6054))
					{	/* Unsafe/bignumber.scm 554 */
						BgL_auxz00_7108 = BgL_xz00_6054;
					}
				else
					{
						obj_t BgL_auxz00_7111;

						BgL_auxz00_7111 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
							BINT(((long) 18732)), BGl_string3206z00zz__bignumz00,
							BGl_string3200z00zz__bignumz00, BgL_xz00_6054);
						FAILURE(BgL_auxz00_7111, BFALSE, BFALSE);
					}
				return bgl_bignum_add(BgL_auxz00_7108, BgL_auxz00_7115);
			}
		}

	}



/* $$-bx */
	BGL_EXPORTED_DEF obj_t bgl_bignum_sub(obj_t BgL_xz00_53, obj_t BgL_yz00_54)
	{
		{	/* Unsafe/bignumber.scm 556 */
			{	/* Unsafe/bignumber.scm 557 */
				long BgL_arg1477z00_3884;
				long BgL_arg1478z00_3885;

				{	/* Unsafe/bignumber.scm 230 */
					uint16_t BgL_arg1239z00_3888;

					{	/* Unsafe/bignumber.scm 230 */
						obj_t BgL_arg1242z00_3889;

						BgL_arg1242z00_3889 = BGL_BIGNUM_U16VECT(BgL_xz00_53);
						BgL_arg1239z00_3888 = BGL_U16VREF(BgL_arg1242z00_3889, ((long) 0));
					}
					{	/* Unsafe/bignumber.scm 230 */
						long BgL_res2558z00_3894;

						{	/* Unsafe/bignumber.scm 230 */
							long BgL_arg2198z00_3891;

							BgL_arg2198z00_3891 = (long) (BgL_arg1239z00_3888);
							{	/* Unsafe/bignumber.scm 230 */
								long BgL_res2557z00_3893;

								BgL_res2557z00_3893 = (long) (BgL_arg2198z00_3891);
								BgL_res2558z00_3894 = BgL_res2557z00_3893;
						}}
						BgL_arg1477z00_3884 = BgL_res2558z00_3894;
				}}
				{	/* Unsafe/bignumber.scm 557 */
					long BgL_arg1479z00_3886;

					{	/* Unsafe/bignumber.scm 230 */
						uint16_t BgL_arg1239z00_3896;

						{	/* Unsafe/bignumber.scm 230 */
							obj_t BgL_arg1242z00_3897;

							BgL_arg1242z00_3897 = BGL_BIGNUM_U16VECT(BgL_yz00_54);
							BgL_arg1239z00_3896 =
								BGL_U16VREF(BgL_arg1242z00_3897, ((long) 0));
						}
						{	/* Unsafe/bignumber.scm 230 */
							long BgL_res2560z00_3902;

							{	/* Unsafe/bignumber.scm 230 */
								long BgL_arg2198z00_3899;

								BgL_arg2198z00_3899 = (long) (BgL_arg1239z00_3896);
								{	/* Unsafe/bignumber.scm 230 */
									long BgL_res2559z00_3901;

									BgL_res2559z00_3901 = (long) (BgL_arg2198z00_3899);
									BgL_res2560z00_3902 = BgL_res2559z00_3901;
							}}
							BgL_arg1479z00_3886 = BgL_res2560z00_3902;
					}}
					BgL_arg1478z00_3885 = (((long) 1) - BgL_arg1479z00_3886);
				}
				return
					BGl_bignumzd2sum2zd2zz__bignumz00(BgL_xz00_53, BgL_yz00_54,
					BgL_arg1477z00_3884, BgL_arg1478z00_3885);
			}
		}

	}



/* &$$-bx */
	obj_t BGl_z62z42z42zd2bxzb0zz__bignumz00(obj_t BgL_envz00_6056,
		obj_t BgL_xz00_6057, obj_t BgL_yz00_6058)
	{
		{	/* Unsafe/bignumber.scm 556 */
			{	/* Unsafe/bignumber.scm 557 */
				obj_t BgL_auxz00_7140;
				obj_t BgL_auxz00_7133;

				if (BIGNUMP(BgL_yz00_6058))
					{	/* Unsafe/bignumber.scm 557 */
						BgL_auxz00_7140 = BgL_yz00_6058;
					}
				else
					{
						obj_t BgL_auxz00_7143;

						BgL_auxz00_7143 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
							BINT(((long) 18807)), BGl_string3207z00zz__bignumz00,
							BGl_string3200z00zz__bignumz00, BgL_yz00_6058);
						FAILURE(BgL_auxz00_7143, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_xz00_6057))
					{	/* Unsafe/bignumber.scm 557 */
						BgL_auxz00_7133 = BgL_xz00_6057;
					}
				else
					{
						obj_t BgL_auxz00_7136;

						BgL_auxz00_7136 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
							BINT(((long) 18807)), BGl_string3207z00zz__bignumz00,
							BGl_string3200z00zz__bignumz00, BgL_xz00_6057);
						FAILURE(BgL_auxz00_7136, BFALSE, BFALSE);
					}
				return bgl_bignum_sub(BgL_auxz00_7133, BgL_auxz00_7140);
			}
		}

	}



/* $$negbx */
	BGL_EXPORTED_DEF obj_t bgl_bignum_neg(obj_t BgL_xz00_55)
	{
		{	/* Unsafe/bignumber.scm 559 */
			{	/* Unsafe/bignumber.scm 560 */
				obj_t BgL_res2567z00_3928;

				{	/* Unsafe/bignumber.scm 560 */
					obj_t BgL_xz00_3905;

					BgL_xz00_3905 = BGl_bignumzd2za7eroz75zz__bignumz00;
					{	/* Unsafe/bignumber.scm 557 */
						long BgL_arg1477z00_3907;
						long BgL_arg1478z00_3908;

						{	/* Unsafe/bignumber.scm 230 */
							uint16_t BgL_arg1239z00_3911;

							{	/* Unsafe/bignumber.scm 230 */
								obj_t BgL_arg1242z00_3912;

								BgL_arg1242z00_3912 = BGL_BIGNUM_U16VECT(BgL_xz00_3905);
								BgL_arg1239z00_3911 =
									BGL_U16VREF(BgL_arg1242z00_3912, ((long) 0));
							}
							{	/* Unsafe/bignumber.scm 230 */
								long BgL_res2563z00_3917;

								{	/* Unsafe/bignumber.scm 230 */
									long BgL_arg2198z00_3914;

									BgL_arg2198z00_3914 = (long) (BgL_arg1239z00_3911);
									{	/* Unsafe/bignumber.scm 230 */
										long BgL_res2562z00_3916;

										BgL_res2562z00_3916 = (long) (BgL_arg2198z00_3914);
										BgL_res2563z00_3917 = BgL_res2562z00_3916;
								}}
								BgL_arg1477z00_3907 = BgL_res2563z00_3917;
						}}
						{	/* Unsafe/bignumber.scm 557 */
							long BgL_arg1479z00_3909;

							{	/* Unsafe/bignumber.scm 230 */
								uint16_t BgL_arg1239z00_3919;

								{	/* Unsafe/bignumber.scm 230 */
									obj_t BgL_arg1242z00_3920;

									BgL_arg1242z00_3920 = BGL_BIGNUM_U16VECT(BgL_xz00_55);
									BgL_arg1239z00_3919 =
										BGL_U16VREF(BgL_arg1242z00_3920, ((long) 0));
								}
								{	/* Unsafe/bignumber.scm 230 */
									long BgL_res2565z00_3925;

									{	/* Unsafe/bignumber.scm 230 */
										long BgL_arg2198z00_3922;

										BgL_arg2198z00_3922 = (long) (BgL_arg1239z00_3919);
										{	/* Unsafe/bignumber.scm 230 */
											long BgL_res2564z00_3924;

											BgL_res2564z00_3924 = (long) (BgL_arg2198z00_3922);
											BgL_res2565z00_3925 = BgL_res2564z00_3924;
									}}
									BgL_arg1479z00_3909 = BgL_res2565z00_3925;
							}}
							BgL_arg1478z00_3908 = (((long) 1) - BgL_arg1479z00_3909);
						}
						BgL_res2567z00_3928 =
							BGl_bignumzd2sum2zd2zz__bignumz00(BgL_xz00_3905, BgL_xz00_55,
							BgL_arg1477z00_3907, BgL_arg1478z00_3908);
				}}
				return BgL_res2567z00_3928;
			}
		}

	}



/* &$$negbx */
	obj_t BGl_z62z42z42negbxz62zz__bignumz00(obj_t BgL_envz00_6059,
		obj_t BgL_xz00_6060)
	{
		{	/* Unsafe/bignumber.scm 559 */
			{	/* Unsafe/bignumber.scm 560 */
				obj_t BgL_auxz00_7158;

				if (BIGNUMP(BgL_xz00_6060))
					{	/* Unsafe/bignumber.scm 560 */
						BgL_auxz00_7158 = BgL_xz00_6060;
					}
				else
					{
						obj_t BgL_auxz00_7161;

						BgL_auxz00_7161 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
							BINT(((long) 18873)), BGl_string3208z00zz__bignumz00,
							BGl_string3200z00zz__bignumz00, BgL_xz00_6060);
						FAILURE(BgL_auxz00_7161, BFALSE, BFALSE);
					}
				return bgl_bignum_neg(BgL_auxz00_7158);
			}
		}

	}



/* $$*bx */
	BGL_EXPORTED_DEF obj_t bgl_bignum_mul(obj_t BgL_xz00_59, obj_t BgL_yz00_60)
	{
		{	/* Unsafe/bignumber.scm 581 */
			{
				obj_t BgL_xz00_1600;
				obj_t BgL_yz00_1601;
				long BgL_lenxz00_1602;
				long BgL_lenyz00_1603;

				{	/* Unsafe/bignumber.scm 612 */
					obj_t BgL_arg1493z00_1597;

					{	/* Unsafe/bignumber.scm 612 */
						long BgL_arg1494z00_1598;
						long BgL_arg1495z00_1599;

						{	/* Unsafe/bignumber.scm 228 */
							long BgL_arg1229z00_4038;

							{	/* Unsafe/bignumber.scm 228 */
								obj_t BgL_arg1232z00_4039;

								BgL_arg1232z00_4039 = BGL_BIGNUM_U16VECT(BgL_xz00_59);
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_res2597z00_4041;

									BgL_res2597z00_4041 = BGL_HVECTOR_LENGTH(BgL_arg1232z00_4039);
									BgL_arg1229z00_4038 = BgL_res2597z00_4041;
							}}
							{	/* Unsafe/bignumber.scm 228 */
								long BgL_res2599z00_4046;

								{	/* Unsafe/bignumber.scm 228 */
									uint16_t BgL_xz00_4042;

									BgL_xz00_4042 = (uint16_t) (BgL_arg1229z00_4038);
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_arg2198z00_4043;

										BgL_arg2198z00_4043 = (long) (BgL_xz00_4042);
										{	/* Unsafe/bignumber.scm 228 */
											long BgL_res2598z00_4045;

											BgL_res2598z00_4045 = (long) (BgL_arg2198z00_4043);
											BgL_res2599z00_4046 = BgL_res2598z00_4045;
								}}}
								BgL_arg1494z00_1598 = BgL_res2599z00_4046;
						}}
						{	/* Unsafe/bignumber.scm 228 */
							long BgL_arg1229z00_4048;

							{	/* Unsafe/bignumber.scm 228 */
								obj_t BgL_arg1232z00_4049;

								BgL_arg1232z00_4049 = BGL_BIGNUM_U16VECT(BgL_yz00_60);
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_res2600z00_4051;

									BgL_res2600z00_4051 = BGL_HVECTOR_LENGTH(BgL_arg1232z00_4049);
									BgL_arg1229z00_4048 = BgL_res2600z00_4051;
							}}
							{	/* Unsafe/bignumber.scm 228 */
								long BgL_res2602z00_4056;

								{	/* Unsafe/bignumber.scm 228 */
									uint16_t BgL_xz00_4052;

									BgL_xz00_4052 = (uint16_t) (BgL_arg1229z00_4048);
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_arg2198z00_4053;

										BgL_arg2198z00_4053 = (long) (BgL_xz00_4052);
										{	/* Unsafe/bignumber.scm 228 */
											long BgL_res2601z00_4055;

											BgL_res2601z00_4055 = (long) (BgL_arg2198z00_4053);
											BgL_res2602z00_4056 = BgL_res2601z00_4055;
								}}}
								BgL_arg1495z00_1599 = BgL_res2602z00_4056;
						}}
						BgL_xz00_1600 = BgL_xz00_59;
						BgL_yz00_1601 = BgL_yz00_60;
						BgL_lenxz00_1602 = BgL_arg1494z00_1598;
						BgL_lenyz00_1603 = BgL_arg1495z00_1599;
						{	/* Unsafe/bignumber.scm 584 */
							obj_t BgL_rz00_1605;

							{	/* Unsafe/bignumber.scm 584 */
								long BgL_arg1521z00_1638;

								BgL_arg1521z00_1638 =
									((BgL_lenxz00_1602 + BgL_lenyz00_1603) - ((long) 1));
								{	/* Unsafe/bignumber.scm 584 */
									obj_t BgL_res2570z00_3938;

									{	/* Unsafe/bignumber.scm 584 */
										int BgL_lenz00_3934;

										BgL_lenz00_3934 = (int) (BgL_arg1521z00_1638);
										{	/* Unsafe/bignumber.scm 226 */
											obj_t BgL_arg1227z00_3935;

											{	/* Unsafe/bignumber.scm 226 */

												BgL_arg1227z00_3935 =
													BGl_makezd2u16vectorzd2zz__srfi4z00(
													(long) (BgL_lenz00_3934), (uint16_t) (0));
											}
											BgL_res2570z00_3938 =
												bgl_make_bignum(BgL_arg1227z00_3935);
									}}
									BgL_rz00_1605 = BgL_res2570z00_3938;
							}}
							{	/* Unsafe/bignumber.scm 586 */
								bool_t BgL_test3388z00_7182;

								{	/* Unsafe/bignumber.scm 586 */
									long BgL_arg1500z00_1609;
									long BgL_arg1502z00_1610;

									{	/* Unsafe/bignumber.scm 230 */
										uint16_t BgL_arg1239z00_3940;

										{	/* Unsafe/bignumber.scm 230 */
											obj_t BgL_arg1242z00_3941;

											BgL_arg1242z00_3941 = BGL_BIGNUM_U16VECT(BgL_xz00_1600);
											BgL_arg1239z00_3940 =
												BGL_U16VREF(BgL_arg1242z00_3941, ((long) 0));
										}
										{	/* Unsafe/bignumber.scm 230 */
											long BgL_res2572z00_3946;

											{	/* Unsafe/bignumber.scm 230 */
												long BgL_arg2198z00_3943;

												BgL_arg2198z00_3943 = (long) (BgL_arg1239z00_3940);
												{	/* Unsafe/bignumber.scm 230 */
													long BgL_res2571z00_3945;

													BgL_res2571z00_3945 = (long) (BgL_arg2198z00_3943);
													BgL_res2572z00_3946 = BgL_res2571z00_3945;
											}}
											BgL_arg1500z00_1609 = BgL_res2572z00_3946;
									}}
									{	/* Unsafe/bignumber.scm 230 */
										uint16_t BgL_arg1239z00_3948;

										{	/* Unsafe/bignumber.scm 230 */
											obj_t BgL_arg1242z00_3949;

											BgL_arg1242z00_3949 = BGL_BIGNUM_U16VECT(BgL_yz00_1601);
											BgL_arg1239z00_3948 =
												BGL_U16VREF(BgL_arg1242z00_3949, ((long) 0));
										}
										{	/* Unsafe/bignumber.scm 230 */
											long BgL_res2574z00_3954;

											{	/* Unsafe/bignumber.scm 230 */
												long BgL_arg2198z00_3951;

												BgL_arg2198z00_3951 = (long) (BgL_arg1239z00_3948);
												{	/* Unsafe/bignumber.scm 230 */
													long BgL_res2573z00_3953;

													BgL_res2573z00_3953 = (long) (BgL_arg2198z00_3951);
													BgL_res2574z00_3954 = BgL_res2573z00_3953;
											}}
											BgL_arg1502z00_1610 = BgL_res2574z00_3954;
									}}
									BgL_test3388z00_7182 =
										(BgL_arg1500z00_1609 == BgL_arg1502z00_1610);
								}
								if (BgL_test3388z00_7182)
									{	/* Unsafe/bignumber.scm 232 */
										obj_t BgL_arg1243z00_3960;
										uint16_t BgL_arg1245z00_3961;

										BgL_arg1243z00_3960 = BGL_BIGNUM_U16VECT(BgL_rz00_1605);
										{	/* Unsafe/bignumber.scm 232 */
											uint16_t BgL_res2576z00_3962;

											BgL_res2576z00_3962 = (uint16_t) (((long) 1));
											BgL_arg1245z00_3961 = BgL_res2576z00_3962;
										}
										BGL_U16VSET(BgL_arg1243z00_3960, ((long) 0),
											BgL_arg1245z00_3961);
										BUNSPEC;
									}
								else
									{	/* Unsafe/bignumber.scm 232 */
										obj_t BgL_arg1243z00_3965;
										uint16_t BgL_arg1245z00_3966;

										BgL_arg1243z00_3965 = BGL_BIGNUM_U16VECT(BgL_rz00_1605);
										{	/* Unsafe/bignumber.scm 232 */
											uint16_t BgL_res2577z00_3967;

											BgL_res2577z00_3967 = (uint16_t) (((long) 0));
											BgL_arg1245z00_3966 = BgL_res2577z00_3967;
										}
										BGL_U16VSET(BgL_arg1243z00_3965, ((long) 0),
											BgL_arg1245z00_3966);
										BUNSPEC;
							}}
							{
								long BgL_jz00_1612;

								BgL_jz00_1612 = ((long) 1);
							BgL_zc3z04anonymousza31503ze3z87_1613:
								if ((BgL_jz00_1612 < BgL_lenyz00_1603))
									{	/* Unsafe/bignumber.scm 593 */
										long BgL_dz00_1615;

										{	/* Unsafe/bignumber.scm 593 */
											int BgL_iz00_3972;

											BgL_iz00_3972 = (int) (BgL_jz00_1612);
											{	/* Unsafe/bignumber.scm 234 */
												uint16_t BgL_arg1246z00_3973;

												{	/* Unsafe/bignumber.scm 234 */
													obj_t BgL_arg1247z00_3974;

													BgL_arg1247z00_3974 =
														BGL_BIGNUM_U16VECT(BgL_yz00_1601);
													{	/* Unsafe/bignumber.scm 234 */
														long BgL_tmpz00_7202;

														BgL_tmpz00_7202 = (long) (BgL_iz00_3972);
														BgL_arg1246z00_3973 =
															BGL_U16VREF(BgL_arg1247z00_3974, BgL_tmpz00_7202);
												}}
												{	/* Unsafe/bignumber.scm 234 */
													long BgL_res2580z00_3979;

													{	/* Unsafe/bignumber.scm 234 */
														long BgL_arg2198z00_3976;

														BgL_arg2198z00_3976 = (long) (BgL_arg1246z00_3973);
														{	/* Unsafe/bignumber.scm 234 */
															long BgL_res2579z00_3978;

															BgL_res2579z00_3978 =
																(long) (BgL_arg2198z00_3976);
															BgL_res2580z00_3979 = BgL_res2579z00_3978;
													}}
													BgL_dz00_1615 = BgL_res2580z00_3979;
										}}}
										if ((BgL_dz00_1615 == ((long) 0)))
											{
												long BgL_jz00_7209;

												BgL_jz00_7209 = (BgL_jz00_1612 + ((long) 1));
												BgL_jz00_1612 = BgL_jz00_7209;
												goto BgL_zc3z04anonymousza31503ze3z87_1613;
											}
										else
											{
												long BgL_iz00_1619;
												long BgL_kz00_1620;
												long BgL_cz00_1621;

												BgL_iz00_1619 = ((long) 1);
												BgL_kz00_1620 = BgL_jz00_1612;
												BgL_cz00_1621 = ((long) 0);
											BgL_zc3z04anonymousza31507ze3z87_1622:
												if ((BgL_iz00_1619 < BgL_lenxz00_1602))
													{	/* Unsafe/bignumber.scm 599 */
														long BgL_wz00_1624;

														{	/* Unsafe/bignumber.scm 599 */
															long BgL_arg1515z00_1631;
															long BgL_arg1516z00_1632;

															{	/* Unsafe/bignumber.scm 599 */
																long BgL_arg1518z00_1633;

																{	/* Unsafe/bignumber.scm 599 */
																	int BgL_iz00_3988;

																	BgL_iz00_3988 = (int) (BgL_kz00_1620);
																	{	/* Unsafe/bignumber.scm 234 */
																		uint16_t BgL_arg1246z00_3989;

																		{	/* Unsafe/bignumber.scm 234 */
																			obj_t BgL_arg1247z00_3990;

																			BgL_arg1247z00_3990 =
																				BGL_BIGNUM_U16VECT(BgL_rz00_1605);
																			{	/* Unsafe/bignumber.scm 234 */
																				long BgL_tmpz00_7215;

																				BgL_tmpz00_7215 =
																					(long) (BgL_iz00_3988);
																				BgL_arg1246z00_3989 =
																					BGL_U16VREF(BgL_arg1247z00_3990,
																					BgL_tmpz00_7215);
																		}}
																		{	/* Unsafe/bignumber.scm 234 */
																			long BgL_res2585z00_3995;

																			{	/* Unsafe/bignumber.scm 234 */
																				long BgL_arg2198z00_3992;

																				BgL_arg2198z00_3992 =
																					(long) (BgL_arg1246z00_3989);
																				{	/* Unsafe/bignumber.scm 234 */
																					long BgL_res2584z00_3994;

																					BgL_res2584z00_3994 =
																						(long) (BgL_arg2198z00_3992);
																					BgL_res2585z00_3995 =
																						BgL_res2584z00_3994;
																			}}
																			BgL_arg1518z00_1633 = BgL_res2585z00_3995;
																}}}
																BgL_arg1515z00_1631 =
																	(BgL_arg1518z00_1633 + BgL_cz00_1621);
															}
															{	/* Unsafe/bignumber.scm 600 */
																long BgL_arg1519z00_1634;

																{	/* Unsafe/bignumber.scm 600 */
																	int BgL_iz00_4000;

																	BgL_iz00_4000 = (int) (BgL_iz00_1619);
																	{	/* Unsafe/bignumber.scm 234 */
																		uint16_t BgL_arg1246z00_4001;

																		{	/* Unsafe/bignumber.scm 234 */
																			obj_t BgL_arg1247z00_4002;

																			BgL_arg1247z00_4002 =
																				BGL_BIGNUM_U16VECT(BgL_xz00_1600);
																			{	/* Unsafe/bignumber.scm 234 */
																				long BgL_tmpz00_7223;

																				BgL_tmpz00_7223 =
																					(long) (BgL_iz00_4000);
																				BgL_arg1246z00_4001 =
																					BGL_U16VREF(BgL_arg1247z00_4002,
																					BgL_tmpz00_7223);
																		}}
																		{	/* Unsafe/bignumber.scm 234 */
																			long BgL_res2588z00_4007;

																			{	/* Unsafe/bignumber.scm 234 */
																				long BgL_arg2198z00_4004;

																				BgL_arg2198z00_4004 =
																					(long) (BgL_arg1246z00_4001);
																				{	/* Unsafe/bignumber.scm 234 */
																					long BgL_res2587z00_4006;

																					BgL_res2587z00_4006 =
																						(long) (BgL_arg2198z00_4004);
																					BgL_res2588z00_4007 =
																						BgL_res2587z00_4006;
																			}}
																			BgL_arg1519z00_1634 = BgL_res2588z00_4007;
																}}}
																BgL_arg1516z00_1632 =
																	(BgL_arg1519z00_1634 * BgL_dz00_1615);
															}
															BgL_wz00_1624 =
																(BgL_arg1515z00_1631 + BgL_arg1516z00_1632);
														}
														{	/* Unsafe/bignumber.scm 601 */
															obj_t BgL_arg1509z00_1625;

															BgL_arg1509z00_1625 =
																BGl_moduloz00zz__r4_numbers_6_5_fixnumz00(BINT
																(BgL_wz00_1624), BINT(((long) 16384)));
															{	/* Unsafe/bignumber.scm 601 */
																int BgL_iz00_4015;
																int BgL_digitz00_4016;

																BgL_iz00_4015 = (int) (BgL_kz00_1620);
																BgL_digitz00_4016 = CINT(BgL_arg1509z00_1625);
																{	/* Unsafe/bignumber.scm 236 */
																	obj_t BgL_arg1250z00_4017;
																	uint16_t BgL_arg1252z00_4018;

																	BgL_arg1250z00_4017 =
																		BGL_BIGNUM_U16VECT(BgL_rz00_1605);
																	{	/* Unsafe/bignumber.scm 236 */
																		uint16_t BgL_res2591z00_4020;

																		{	/* Unsafe/bignumber.scm 236 */
																			long BgL_tmpz00_7236;

																			BgL_tmpz00_7236 =
																				(long) (BgL_digitz00_4016);
																			BgL_res2591z00_4020 =
																				(uint16_t) (BgL_tmpz00_7236);
																		}
																		BgL_arg1252z00_4018 = BgL_res2591z00_4020;
																	}
																	{	/* Unsafe/bignumber.scm 236 */
																		long BgL_tmpz00_7239;

																		BgL_tmpz00_7239 = (long) (BgL_iz00_4015);
																		BGL_U16VSET(BgL_arg1250z00_4017,
																			BgL_tmpz00_7239, BgL_arg1252z00_4018);
																	} BUNSPEC;
														}}}
														{	/* Unsafe/bignumber.scm 602 */
															long BgL_arg1511z00_1627;
															long BgL_arg1512z00_1628;
															long BgL_arg1513z00_1629;

															BgL_arg1511z00_1627 =
																(BgL_iz00_1619 + ((long) 1));
															BgL_arg1512z00_1628 =
																(BgL_kz00_1620 + ((long) 1));
															{	/* Unsafe/bignumber.scm 604 */
																long BgL_res2594z00_4027;

																BgL_res2594z00_4027 =
																	(BgL_wz00_1624 / ((long) 16384));
																BgL_arg1513z00_1629 = BgL_res2594z00_4027;
															}
															{
																long BgL_cz00_7247;
																long BgL_kz00_7246;
																long BgL_iz00_7245;

																BgL_iz00_7245 = BgL_arg1511z00_1627;
																BgL_kz00_7246 = BgL_arg1512z00_1628;
																BgL_cz00_7247 = BgL_arg1513z00_1629;
																BgL_cz00_1621 = BgL_cz00_7247;
																BgL_kz00_1620 = BgL_kz00_7246;
																BgL_iz00_1619 = BgL_iz00_7245;
																goto BgL_zc3z04anonymousza31507ze3z87_1622;
															}
														}
													}
												else
													{	/* Unsafe/bignumber.scm 597 */
														{	/* Unsafe/bignumber.scm 607 */
															int BgL_iz00_4029;
															int BgL_digitz00_4030;

															BgL_iz00_4029 = (int) (BgL_kz00_1620);
															BgL_digitz00_4030 = (int) (BgL_cz00_1621);
															{	/* Unsafe/bignumber.scm 236 */
																obj_t BgL_arg1250z00_4031;
																uint16_t BgL_arg1252z00_4032;

																BgL_arg1250z00_4031 =
																	BGL_BIGNUM_U16VECT(BgL_rz00_1605);
																{	/* Unsafe/bignumber.scm 236 */
																	uint16_t BgL_res2595z00_4034;

																	{	/* Unsafe/bignumber.scm 236 */
																		long BgL_tmpz00_7251;

																		BgL_tmpz00_7251 =
																			(long) (BgL_digitz00_4030);
																		BgL_res2595z00_4034 =
																			(uint16_t) (BgL_tmpz00_7251);
																	}
																	BgL_arg1252z00_4032 = BgL_res2595z00_4034;
																}
																{	/* Unsafe/bignumber.scm 236 */
																	long BgL_tmpz00_7254;

																	BgL_tmpz00_7254 = (long) (BgL_iz00_4029);
																	BGL_U16VSET(BgL_arg1250z00_4031,
																		BgL_tmpz00_7254, BgL_arg1252z00_4032);
																} BUNSPEC;
														}}
														{
															long BgL_jz00_7257;

															BgL_jz00_7257 = (BgL_jz00_1612 + ((long) 1));
															BgL_jz00_1612 = BgL_jz00_7257;
															goto BgL_zc3z04anonymousza31503ze3z87_1613;
														}
													}
											}
									}
								else
									{	/* Unsafe/bignumber.scm 591 */
										((bool_t) 0);
									}
							}
							BgL_arg1493z00_1597 =
								BGl_bignumzd2removezd2leadingzd2za7eroesz75zz__bignumz00
								(BgL_rz00_1605);
						}
					}
					return BgL_arg1493z00_1597;
				}
			}
		}

	}



/* &$$*bx */
	obj_t BGl_z62z42z42za2bxzc0zz__bignumz00(obj_t BgL_envz00_6061,
		obj_t BgL_xz00_6062, obj_t BgL_yz00_6063)
	{
		{	/* Unsafe/bignumber.scm 581 */
			{	/* Unsafe/bignumber.scm 584 */
				obj_t BgL_auxz00_7267;
				obj_t BgL_auxz00_7260;

				if (BIGNUMP(BgL_yz00_6063))
					{	/* Unsafe/bignumber.scm 584 */
						BgL_auxz00_7267 = BgL_yz00_6063;
					}
				else
					{
						obj_t BgL_auxz00_7270;

						BgL_auxz00_7270 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
							BINT(((long) 19551)), BGl_string3209z00zz__bignumz00,
							BGl_string3200z00zz__bignumz00, BgL_yz00_6063);
						FAILURE(BgL_auxz00_7270, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_xz00_6062))
					{	/* Unsafe/bignumber.scm 584 */
						BgL_auxz00_7260 = BgL_xz00_6062;
					}
				else
					{
						obj_t BgL_auxz00_7263;

						BgL_auxz00_7263 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
							BINT(((long) 19551)), BGl_string3209z00zz__bignumz00,
							BGl_string3200z00zz__bignumz00, BgL_xz00_6062);
						FAILURE(BgL_auxz00_7263, BFALSE, BFALSE);
					}
				return bgl_bignum_mul(BgL_auxz00_7260, BgL_auxz00_7267);
			}
		}

	}



/* bignum-div */
	obj_t BGl_bignumzd2divzd2zz__bignumz00(obj_t BgL_xz00_62, obj_t BgL_yz00_63)
	{
		{	/* Unsafe/bignumber.scm 625 */
			{
				obj_t BgL_xz00_1852;
				obj_t BgL_yz00_1853;
				long BgL_lenxz00_1854;
				long BgL_lenyz00_1855;
				obj_t BgL_xz00_1684;
				obj_t BgL_yz00_1685;
				long BgL_lenxz00_1686;
				long BgL_lenyz00_1687;
				obj_t BgL_rz00_1688;
				obj_t BgL_xz00_1659;
				obj_t BgL_yz00_1660;
				long BgL_lenxz00_1661;
				long BgL_lenyz00_1662;
				obj_t BgL_rz00_1663;

				{	/* Unsafe/bignumber.scm 788 */
					bool_t BgL_test3394z00_7275;

					{	/* Unsafe/bignumber.scm 788 */
						bool_t BgL_res2765z00_4721;

						{	/* Unsafe/bignumber.scm 415 */
							long BgL_arg1392z00_4708;

							{	/* Unsafe/bignumber.scm 228 */
								long BgL_arg1229z00_4710;

								{	/* Unsafe/bignumber.scm 228 */
									obj_t BgL_arg1232z00_4711;

									{	/* Unsafe/bignumber.scm 228 */
										obj_t BgL_tmpz00_7276;

										BgL_tmpz00_7276 = ((obj_t) BgL_yz00_63);
										BgL_arg1232z00_4711 = BGL_BIGNUM_U16VECT(BgL_tmpz00_7276);
									}
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_res2761z00_4713;

										BgL_res2761z00_4713 =
											BGL_HVECTOR_LENGTH(BgL_arg1232z00_4711);
										BgL_arg1229z00_4710 = BgL_res2761z00_4713;
								}}
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_res2763z00_4718;

									{	/* Unsafe/bignumber.scm 228 */
										uint16_t BgL_xz00_4714;

										BgL_xz00_4714 = (uint16_t) (BgL_arg1229z00_4710);
										{	/* Unsafe/bignumber.scm 228 */
											long BgL_arg2198z00_4715;

											BgL_arg2198z00_4715 = (long) (BgL_xz00_4714);
											{	/* Unsafe/bignumber.scm 228 */
												long BgL_res2762z00_4717;

												BgL_res2762z00_4717 = (long) (BgL_arg2198z00_4715);
												BgL_res2763z00_4718 = BgL_res2762z00_4717;
									}}}
									BgL_arg1392z00_4708 = BgL_res2763z00_4718;
							}}
							BgL_res2765z00_4721 = (BgL_arg1392z00_4708 == ((long) 1));
						}
						BgL_test3394z00_7275 = BgL_res2765z00_4721;
					}
					if (BgL_test3394z00_7275)
						{	/* Unsafe/bignumber.scm 788 */
							return
								BGl_errorz00zz__errorz00(BGl_symbol3210z00zz__bignumz00,
								BGl_string3212z00zz__bignumz00, BgL_xz00_62);
						}
					else
						{	/* Unsafe/bignumber.scm 790 */
							long BgL_arg1533z00_1657;
							long BgL_arg1534z00_1658;

							{	/* Unsafe/bignumber.scm 228 */
								long BgL_arg1229z00_4723;

								{	/* Unsafe/bignumber.scm 228 */
									obj_t BgL_arg1232z00_4724;

									{	/* Unsafe/bignumber.scm 228 */
										obj_t BgL_tmpz00_7285;

										BgL_tmpz00_7285 = ((obj_t) BgL_xz00_62);
										BgL_arg1232z00_4724 = BGL_BIGNUM_U16VECT(BgL_tmpz00_7285);
									}
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_res2766z00_4726;

										BgL_res2766z00_4726 =
											BGL_HVECTOR_LENGTH(BgL_arg1232z00_4724);
										BgL_arg1229z00_4723 = BgL_res2766z00_4726;
								}}
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_res2768z00_4731;

									{	/* Unsafe/bignumber.scm 228 */
										uint16_t BgL_xz00_4727;

										BgL_xz00_4727 = (uint16_t) (BgL_arg1229z00_4723);
										{	/* Unsafe/bignumber.scm 228 */
											long BgL_arg2198z00_4728;

											BgL_arg2198z00_4728 = (long) (BgL_xz00_4727);
											{	/* Unsafe/bignumber.scm 228 */
												long BgL_res2767z00_4730;

												BgL_res2767z00_4730 = (long) (BgL_arg2198z00_4728);
												BgL_res2768z00_4731 = BgL_res2767z00_4730;
									}}}
									BgL_arg1533z00_1657 = BgL_res2768z00_4731;
							}}
							{	/* Unsafe/bignumber.scm 228 */
								long BgL_arg1229z00_4733;

								{	/* Unsafe/bignumber.scm 228 */
									obj_t BgL_arg1232z00_4734;

									{	/* Unsafe/bignumber.scm 228 */
										obj_t BgL_tmpz00_7292;

										BgL_tmpz00_7292 = ((obj_t) BgL_yz00_63);
										BgL_arg1232z00_4734 = BGL_BIGNUM_U16VECT(BgL_tmpz00_7292);
									}
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_res2769z00_4736;

										BgL_res2769z00_4736 =
											BGL_HVECTOR_LENGTH(BgL_arg1232z00_4734);
										BgL_arg1229z00_4733 = BgL_res2769z00_4736;
								}}
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_res2771z00_4741;

									{	/* Unsafe/bignumber.scm 228 */
										uint16_t BgL_xz00_4737;

										BgL_xz00_4737 = (uint16_t) (BgL_arg1229z00_4733);
										{	/* Unsafe/bignumber.scm 228 */
											long BgL_arg2198z00_4738;

											BgL_arg2198z00_4738 = (long) (BgL_xz00_4737);
											{	/* Unsafe/bignumber.scm 228 */
												long BgL_res2770z00_4740;

												BgL_res2770z00_4740 = (long) (BgL_arg2198z00_4738);
												BgL_res2771z00_4741 = BgL_res2770z00_4740;
									}}}
									BgL_arg1534z00_1658 = BgL_res2771z00_4741;
							}}
							BgL_xz00_1852 = BgL_xz00_62;
							BgL_yz00_1853 = BgL_yz00_63;
							BgL_lenxz00_1854 = BgL_arg1533z00_1657;
							BgL_lenyz00_1855 = BgL_arg1534z00_1658;
							if ((BgL_lenxz00_1854 < BgL_lenyz00_1855))
								{	/* Unsafe/bignumber.scm 774 */
									return
										MAKE_YOUNG_PAIR(BGl_bignumzd2za7eroz75zz__bignumz00,
										BgL_xz00_1852);
								}
							else
								{	/* Unsafe/bignumber.scm 778 */
									obj_t BgL_rz00_1858;

									{	/* Unsafe/bignumber.scm 778 */
										long BgL_arg1698z00_1865;

										BgL_arg1698z00_1865 =
											((BgL_lenxz00_1854 - BgL_lenyz00_1855) + ((long) 2));
										{	/* Unsafe/bignumber.scm 778 */
											obj_t BgL_res2752z00_4675;

											{	/* Unsafe/bignumber.scm 778 */
												int BgL_lenz00_4671;

												BgL_lenz00_4671 = (int) (BgL_arg1698z00_1865);
												{	/* Unsafe/bignumber.scm 226 */
													obj_t BgL_arg1227z00_4672;

													{	/* Unsafe/bignumber.scm 226 */

														BgL_arg1227z00_4672 =
															BGl_makezd2u16vectorzd2zz__srfi4z00(
															(long) (BgL_lenz00_4671), (uint16_t) (0));
													}
													BgL_res2752z00_4675 =
														bgl_make_bignum(BgL_arg1227z00_4672);
											}}
											BgL_rz00_1858 = BgL_res2752z00_4675;
									}}
									{	/* Unsafe/bignumber.scm 780 */
										bool_t BgL_test3396z00_7308;

										{	/* Unsafe/bignumber.scm 780 */
											long BgL_arg1695z00_1862;
											long BgL_arg1696z00_1863;

											{	/* Unsafe/bignumber.scm 230 */
												uint16_t BgL_arg1239z00_4677;

												{	/* Unsafe/bignumber.scm 230 */
													obj_t BgL_arg1242z00_4678;

													{	/* Unsafe/bignumber.scm 230 */
														obj_t BgL_tmpz00_7309;

														BgL_tmpz00_7309 = ((obj_t) BgL_xz00_1852);
														BgL_arg1242z00_4678 =
															BGL_BIGNUM_U16VECT(BgL_tmpz00_7309);
													}
													BgL_arg1239z00_4677 =
														BGL_U16VREF(BgL_arg1242z00_4678, ((long) 0));
												}
												{	/* Unsafe/bignumber.scm 230 */
													long BgL_res2754z00_4683;

													{	/* Unsafe/bignumber.scm 230 */
														long BgL_arg2198z00_4680;

														BgL_arg2198z00_4680 = (long) (BgL_arg1239z00_4677);
														{	/* Unsafe/bignumber.scm 230 */
															long BgL_res2753z00_4682;

															BgL_res2753z00_4682 =
																(long) (BgL_arg2198z00_4680);
															BgL_res2754z00_4683 = BgL_res2753z00_4682;
													}}
													BgL_arg1695z00_1862 = BgL_res2754z00_4683;
											}}
											{	/* Unsafe/bignumber.scm 230 */
												uint16_t BgL_arg1239z00_4685;

												{	/* Unsafe/bignumber.scm 230 */
													obj_t BgL_arg1242z00_4686;

													{	/* Unsafe/bignumber.scm 230 */
														obj_t BgL_tmpz00_7315;

														BgL_tmpz00_7315 = ((obj_t) BgL_yz00_1853);
														BgL_arg1242z00_4686 =
															BGL_BIGNUM_U16VECT(BgL_tmpz00_7315);
													}
													BgL_arg1239z00_4685 =
														BGL_U16VREF(BgL_arg1242z00_4686, ((long) 0));
												}
												{	/* Unsafe/bignumber.scm 230 */
													long BgL_res2756z00_4691;

													{	/* Unsafe/bignumber.scm 230 */
														long BgL_arg2198z00_4688;

														BgL_arg2198z00_4688 = (long) (BgL_arg1239z00_4685);
														{	/* Unsafe/bignumber.scm 230 */
															long BgL_res2755z00_4690;

															BgL_res2755z00_4690 =
																(long) (BgL_arg2198z00_4688);
															BgL_res2756z00_4691 = BgL_res2755z00_4690;
													}}
													BgL_arg1696z00_1863 = BgL_res2756z00_4691;
											}}
											BgL_test3396z00_7308 =
												(BgL_arg1695z00_1862 == BgL_arg1696z00_1863);
										}
										if (BgL_test3396z00_7308)
											{	/* Unsafe/bignumber.scm 232 */
												obj_t BgL_arg1243z00_4697;
												uint16_t BgL_arg1245z00_4698;

												BgL_arg1243z00_4697 = BGL_BIGNUM_U16VECT(BgL_rz00_1858);
												{	/* Unsafe/bignumber.scm 232 */
													uint16_t BgL_res2758z00_4699;

													BgL_res2758z00_4699 = (uint16_t) (((long) 1));
													BgL_arg1245z00_4698 = BgL_res2758z00_4699;
												}
												BGL_U16VSET(BgL_arg1243z00_4697, ((long) 0),
													BgL_arg1245z00_4698);
												BUNSPEC;
											}
										else
											{	/* Unsafe/bignumber.scm 232 */
												obj_t BgL_arg1243z00_4702;
												uint16_t BgL_arg1245z00_4703;

												BgL_arg1243z00_4702 = BGL_BIGNUM_U16VECT(BgL_rz00_1858);
												{	/* Unsafe/bignumber.scm 232 */
													uint16_t BgL_res2759z00_4704;

													BgL_res2759z00_4704 = (uint16_t) (((long) 0));
													BgL_arg1245z00_4703 = BgL_res2759z00_4704;
												}
												BGL_U16VSET(BgL_arg1243z00_4702, ((long) 0),
													BgL_arg1245z00_4703);
												BUNSPEC;
									}}
									if ((BgL_lenyz00_1855 == ((long) 2)))
										{	/* Unsafe/bignumber.scm 784 */
											BgL_xz00_1659 = BgL_xz00_1852;
											BgL_yz00_1660 = BgL_yz00_1853;
											BgL_lenxz00_1661 = BgL_lenxz00_1854;
											BgL_lenyz00_1662 = BgL_lenyz00_1855;
											BgL_rz00_1663 = BgL_rz00_1858;
											{	/* Unsafe/bignumber.scm 631 */
												long BgL_dz00_1665;

												{	/* Unsafe/bignumber.scm 234 */
													uint16_t BgL_arg1246z00_4058;

													{	/* Unsafe/bignumber.scm 234 */
														obj_t BgL_arg1247z00_4059;

														{	/* Unsafe/bignumber.scm 234 */
															obj_t BgL_tmpz00_7330;

															BgL_tmpz00_7330 = ((obj_t) BgL_yz00_1660);
															BgL_arg1247z00_4059 =
																BGL_BIGNUM_U16VECT(BgL_tmpz00_7330);
														}
														BgL_arg1246z00_4058 =
															BGL_U16VREF(BgL_arg1247z00_4059, ((long) 1));
													}
													{	/* Unsafe/bignumber.scm 234 */
														long BgL_res2604z00_4064;

														{	/* Unsafe/bignumber.scm 234 */
															long BgL_arg2198z00_4061;

															BgL_arg2198z00_4061 =
																(long) (BgL_arg1246z00_4058);
															{	/* Unsafe/bignumber.scm 234 */
																long BgL_res2603z00_4063;

																BgL_res2603z00_4063 =
																	(long) (BgL_arg2198z00_4061);
																BgL_res2604z00_4064 = BgL_res2603z00_4063;
														}}
														BgL_dz00_1665 = BgL_res2604z00_4064;
												}}
												{	/* Unsafe/bignumber.scm 632 */
													long BgL_g1051z00_1666;

													BgL_g1051z00_1666 = (BgL_lenxz00_1661 - ((long) 1));
													{
														long BgL_iz00_1668;
														long BgL_kz00_1669;

														BgL_iz00_1668 = BgL_g1051z00_1666;
														BgL_kz00_1669 = ((long) 0);
													BgL_zc3z04anonymousza31536ze3z87_1670:
														if ((((long) 0) < BgL_iz00_1668))
															{	/* Unsafe/bignumber.scm 634 */
																long BgL_wz00_1672;

																{	/* Unsafe/bignumber.scm 634 */
																	long BgL_arg1544z00_1676;
																	long BgL_arg1545z00_1677;

																	BgL_arg1544z00_1676 =
																		(BgL_kz00_1669 * ((long) 16384));
																	{	/* Unsafe/bignumber.scm 634 */
																		int BgL_iz00_4073;

																		BgL_iz00_4073 = (int) (BgL_iz00_1668);
																		{	/* Unsafe/bignumber.scm 234 */
																			uint16_t BgL_arg1246z00_4074;

																			{	/* Unsafe/bignumber.scm 234 */
																				obj_t BgL_arg1247z00_4075;

																				{	/* Unsafe/bignumber.scm 234 */
																					obj_t BgL_tmpz00_7341;

																					BgL_tmpz00_7341 =
																						((obj_t) BgL_xz00_1659);
																					BgL_arg1247z00_4075 =
																						BGL_BIGNUM_U16VECT(BgL_tmpz00_7341);
																				}
																				{	/* Unsafe/bignumber.scm 234 */
																					long BgL_tmpz00_7344;

																					BgL_tmpz00_7344 =
																						(long) (BgL_iz00_4073);
																					BgL_arg1246z00_4074 =
																						BGL_U16VREF(BgL_arg1247z00_4075,
																						BgL_tmpz00_7344);
																			}}
																			{	/* Unsafe/bignumber.scm 234 */
																				long BgL_res2609z00_4080;

																				{	/* Unsafe/bignumber.scm 234 */
																					long BgL_arg2198z00_4077;

																					BgL_arg2198z00_4077 =
																						(long) (BgL_arg1246z00_4074);
																					{	/* Unsafe/bignumber.scm 234 */
																						long BgL_res2608z00_4079;

																						BgL_res2608z00_4079 =
																							(long) (BgL_arg2198z00_4077);
																						BgL_res2609z00_4080 =
																							BgL_res2608z00_4079;
																				}}
																				BgL_arg1545z00_1677 =
																					BgL_res2609z00_4080;
																	}}}
																	BgL_wz00_1672 =
																		(BgL_arg1544z00_1676 + BgL_arg1545z00_1677);
																}
																{	/* Unsafe/bignumber.scm 635 */
																	long BgL_arg1540z00_1673;

																	{	/* Unsafe/bignumber.scm 635 */
																		long BgL_res2611z00_4086;

																		BgL_res2611z00_4086 =
																			(BgL_wz00_1672 / BgL_dz00_1665);
																		BgL_arg1540z00_1673 = BgL_res2611z00_4086;
																	}
																	{	/* Unsafe/bignumber.scm 635 */
																		int BgL_iz00_4088;
																		int BgL_digitz00_4089;

																		BgL_iz00_4088 = (int) (BgL_iz00_1668);
																		BgL_digitz00_4089 =
																			(int) (BgL_arg1540z00_1673);
																		{	/* Unsafe/bignumber.scm 236 */
																			obj_t BgL_arg1250z00_4090;
																			uint16_t BgL_arg1252z00_4091;

																			BgL_arg1250z00_4090 =
																				BGL_BIGNUM_U16VECT(BgL_rz00_1663);
																			{	/* Unsafe/bignumber.scm 236 */
																				uint16_t BgL_res2612z00_4093;

																				{	/* Unsafe/bignumber.scm 236 */
																					long BgL_tmpz00_7354;

																					BgL_tmpz00_7354 =
																						(long) (BgL_digitz00_4089);
																					BgL_res2612z00_4093 =
																						(uint16_t) (BgL_tmpz00_7354);
																				}
																				BgL_arg1252z00_4091 =
																					BgL_res2612z00_4093;
																			}
																			{	/* Unsafe/bignumber.scm 236 */
																				long BgL_tmpz00_7357;

																				BgL_tmpz00_7357 =
																					(long) (BgL_iz00_4088);
																				BGL_U16VSET(BgL_arg1250z00_4090,
																					BgL_tmpz00_7357, BgL_arg1252z00_4091);
																			} BUNSPEC;
																}}}
																{	/* Unsafe/bignumber.scm 636 */
																	long BgL_arg1541z00_1674;
																	long BgL_arg1542z00_1675;

																	BgL_arg1541z00_1674 =
																		(BgL_iz00_1668 - ((long) 1));
																	{	/* Unsafe/bignumber.scm 636 */
																		long BgL_res2619z00_4114;

																		{	/* Unsafe/bignumber.scm 636 */
																			long BgL_n1z00_4096;
																			long BgL_n2z00_4097;

																			BgL_n1z00_4096 = BgL_wz00_1672;
																			BgL_n2z00_4097 = BgL_dz00_1665;
																			{	/* Unsafe/bignumber.scm 636 */
																				bool_t BgL_test3399z00_7361;

																				{	/* Unsafe/bignumber.scm 636 */
																					long BgL_arg2102z00_4099;

																					BgL_arg2102z00_4099 =
																						(((BgL_n1z00_4096) |
																							(BgL_n2z00_4097)) & -2147483648);
																					BgL_test3399z00_7361 =
																						(BgL_arg2102z00_4099 == ((long) 0));
																				}
																				if (BgL_test3399z00_7361)
																					{	/* Unsafe/bignumber.scm 636 */
																						int32_t BgL_arg2098z00_4100;

																						{	/* Unsafe/bignumber.scm 636 */
																							int32_t BgL_arg2100z00_4101;
																							int32_t BgL_arg2101z00_4102;

																							{	/* Unsafe/bignumber.scm 636 */
																								int32_t BgL_res2615z00_4106;

																								BgL_res2615z00_4106 =
																									(int32_t) (BgL_n1z00_4096);
																								BgL_arg2100z00_4101 =
																									BgL_res2615z00_4106;
																							}
																							{	/* Unsafe/bignumber.scm 636 */
																								int32_t BgL_res2616z00_4108;

																								BgL_res2616z00_4108 =
																									(int32_t) (BgL_n2z00_4097);
																								BgL_arg2101z00_4102 =
																									BgL_res2616z00_4108;
																							}
																							BgL_arg2098z00_4100 =
																								(BgL_arg2100z00_4101 %
																								BgL_arg2101z00_4102);
																						}
																						{	/* Unsafe/bignumber.scm 636 */
																							long BgL_res2618z00_4113;

																							{	/* Unsafe/bignumber.scm 636 */
																								long BgL_arg2197z00_4110;

																								BgL_arg2197z00_4110 =
																									(long) (BgL_arg2098z00_4100);
																								{	/* Unsafe/bignumber.scm 636 */
																									long BgL_res2617z00_4112;

																									BgL_res2617z00_4112 =
																										(long)
																										(BgL_arg2197z00_4110);
																									BgL_res2618z00_4113 =
																										BgL_res2617z00_4112;
																							}}
																							BgL_res2619z00_4114 =
																								BgL_res2618z00_4113;
																					}}
																				else
																					{	/* Unsafe/bignumber.scm 636 */
																						BgL_res2619z00_4114 =
																							(BgL_n1z00_4096 % BgL_n2z00_4097);
																					}
																			}
																		}
																		BgL_arg1542z00_1675 = BgL_res2619z00_4114;
																	}
																	{
																		long BgL_kz00_7371;
																		long BgL_iz00_7370;

																		BgL_iz00_7370 = BgL_arg1541z00_1674;
																		BgL_kz00_7371 = BgL_arg1542z00_1675;
																		BgL_kz00_1669 = BgL_kz00_7371;
																		BgL_iz00_1668 = BgL_iz00_7370;
																		goto BgL_zc3z04anonymousza31536ze3z87_1670;
																	}
																}
															}
														else
															{	/* Unsafe/bignumber.scm 637 */
																obj_t BgL_arg1547z00_1679;
																obj_t BgL_arg1551z00_1680;

																BgL_arg1547z00_1679 =
																	BGl_bignumzd2removezd2leadingzd2za7eroesz75zz__bignumz00
																	(BgL_rz00_1663);
																{	/* Unsafe/bignumber.scm 639 */
																	long BgL_arg1552z00_1681;

																	{	/* Unsafe/bignumber.scm 639 */
																		bool_t BgL_test3400z00_7373;

																		{	/* Unsafe/bignumber.scm 639 */
																			bool_t BgL_res2623z00_4127;

																			{	/* Unsafe/bignumber.scm 418 */
																				long BgL_arg1393z00_4116;

																				{	/* Unsafe/bignumber.scm 230 */
																					uint16_t BgL_arg1239z00_4118;

																					{	/* Unsafe/bignumber.scm 230 */
																						obj_t BgL_arg1242z00_4119;

																						{	/* Unsafe/bignumber.scm 230 */
																							obj_t BgL_tmpz00_7374;

																							BgL_tmpz00_7374 =
																								((obj_t) BgL_xz00_1659);
																							BgL_arg1242z00_4119 =
																								BGL_BIGNUM_U16VECT
																								(BgL_tmpz00_7374);
																						}
																						BgL_arg1239z00_4118 =
																							BGL_U16VREF(BgL_arg1242z00_4119,
																							((long) 0));
																					}
																					{	/* Unsafe/bignumber.scm 230 */
																						long BgL_res2621z00_4124;

																						{	/* Unsafe/bignumber.scm 230 */
																							long BgL_arg2198z00_4121;

																							BgL_arg2198z00_4121 =
																								(long) (BgL_arg1239z00_4118);
																							{	/* Unsafe/bignumber.scm 230 */
																								long BgL_res2620z00_4123;

																								BgL_res2620z00_4123 =
																									(long) (BgL_arg2198z00_4121);
																								BgL_res2621z00_4124 =
																									BgL_res2620z00_4123;
																						}}
																						BgL_arg1393z00_4116 =
																							BgL_res2621z00_4124;
																				}}
																				BgL_res2623z00_4127 =
																					(BgL_arg1393z00_4116 == ((long) 0));
																			}
																			BgL_test3400z00_7373 =
																				BgL_res2623z00_4127;
																		}
																		if (BgL_test3400z00_7373)
																			{	/* Unsafe/bignumber.scm 639 */
																				BgL_arg1552z00_1681 =
																					(((long) 0) - BgL_kz00_1669);
																			}
																		else
																			{	/* Unsafe/bignumber.scm 639 */
																				BgL_arg1552z00_1681 = BgL_kz00_1669;
																			}
																	}
																	BgL_arg1551z00_1680 =
																		bgl_long_to_bignum(BgL_arg1552z00_1681);
																}
																return
																	MAKE_YOUNG_PAIR(BgL_arg1547z00_1679,
																	BgL_arg1551z00_1680);
															}
													}
												}
											}
										}
									else
										{	/* Unsafe/bignumber.scm 784 */
											BgL_xz00_1684 = BgL_xz00_1852;
											BgL_yz00_1685 = BgL_yz00_1853;
											BgL_lenxz00_1686 = BgL_lenxz00_1854;
											BgL_lenyz00_1687 = BgL_lenyz00_1855;
											BgL_rz00_1688 = BgL_rz00_1858;
											{	/* Unsafe/bignumber.scm 647 */
												long BgL_g1052z00_1690;

												{	/* Unsafe/bignumber.scm 648 */
													long BgL_arg1687z00_1850;

													{	/* Unsafe/bignumber.scm 648 */
														long BgL_arg1688z00_1851;

														BgL_arg1688z00_1851 =
															(BgL_lenyz00_1687 - ((long) 1));
														{	/* Unsafe/bignumber.scm 648 */
															int BgL_iz00_4133;

															BgL_iz00_4133 = (int) (BgL_arg1688z00_1851);
															{	/* Unsafe/bignumber.scm 234 */
																uint16_t BgL_arg1246z00_4134;

																{	/* Unsafe/bignumber.scm 234 */
																	obj_t BgL_arg1247z00_4135;

																	{	/* Unsafe/bignumber.scm 234 */
																		obj_t BgL_tmpz00_7386;

																		BgL_tmpz00_7386 = ((obj_t) BgL_yz00_1685);
																		BgL_arg1247z00_4135 =
																			BGL_BIGNUM_U16VECT(BgL_tmpz00_7386);
																	}
																	{	/* Unsafe/bignumber.scm 234 */
																		long BgL_tmpz00_7389;

																		BgL_tmpz00_7389 = (long) (BgL_iz00_4133);
																		BgL_arg1246z00_4134 =
																			BGL_U16VREF(BgL_arg1247z00_4135,
																			BgL_tmpz00_7389);
																}}
																{	/* Unsafe/bignumber.scm 234 */
																	long BgL_res2627z00_4140;

																	{	/* Unsafe/bignumber.scm 234 */
																		long BgL_arg2198z00_4137;

																		BgL_arg2198z00_4137 =
																			(long) (BgL_arg1246z00_4134);
																		{	/* Unsafe/bignumber.scm 234 */
																			long BgL_res2626z00_4139;

																			BgL_res2626z00_4139 =
																				(long) (BgL_arg2198z00_4137);
																			BgL_res2627z00_4140 = BgL_res2626z00_4139;
																	}}
																	BgL_arg1687z00_1850 = BgL_res2627z00_4140;
													}}}}
													BgL_g1052z00_1690 =
														(BgL_arg1687z00_1850 * ((long) 2));
												}
												{
													long BgL_shiftz00_1692;
													long BgL_nz00_1693;

													BgL_shiftz00_1692 = ((long) 1);
													BgL_nz00_1693 = BgL_g1052z00_1690;
												BgL_zc3z04anonymousza31555ze3z87_1694:
													if ((BgL_nz00_1693 < ((long) 16384)))
														{
															long BgL_nz00_7399;
															long BgL_shiftz00_7397;

															BgL_shiftz00_7397 =
																(BgL_shiftz00_1692 * ((long) 2));
															BgL_nz00_7399 = (BgL_nz00_1693 * ((long) 2));
															BgL_nz00_1693 = BgL_nz00_7399;
															BgL_shiftz00_1692 = BgL_shiftz00_7397;
															goto BgL_zc3z04anonymousza31555ze3z87_1694;
														}
													else
														{	/* Unsafe/bignumber.scm 652 */
															obj_t BgL_nxz00_1699;
															obj_t BgL_nyz00_1700;

															{	/* Unsafe/bignumber.scm 652 */
																long BgL_arg1685z00_1847;

																BgL_arg1685z00_1847 =
																	(BgL_lenxz00_1686 + ((long) 1));
																{	/* Unsafe/bignumber.scm 652 */
																	obj_t BgL_res2633z00_4156;

																	{	/* Unsafe/bignumber.scm 652 */
																		int BgL_lenz00_4152;

																		BgL_lenz00_4152 =
																			(int) (BgL_arg1685z00_1847);
																		{	/* Unsafe/bignumber.scm 226 */
																			obj_t BgL_arg1227z00_4153;

																			{	/* Unsafe/bignumber.scm 226 */

																				BgL_arg1227z00_4153 =
																					BGl_makezd2u16vectorzd2zz__srfi4z00(
																					(long) (BgL_lenz00_4152),
																					(uint16_t) (0));
																			}
																			BgL_res2633z00_4156 =
																				bgl_make_bignum(BgL_arg1227z00_4153);
																	}}
																	BgL_nxz00_1699 = BgL_res2633z00_4156;
															}}
															{	/* Unsafe/bignumber.scm 653 */
																obj_t BgL_res2634z00_4161;

																{	/* Unsafe/bignumber.scm 653 */
																	int BgL_lenz00_4157;

																	BgL_lenz00_4157 = (int) (BgL_lenyz00_1687);
																	{	/* Unsafe/bignumber.scm 226 */
																		obj_t BgL_arg1227z00_4158;

																		{	/* Unsafe/bignumber.scm 226 */

																			BgL_arg1227z00_4158 =
																				BGl_makezd2u16vectorzd2zz__srfi4z00(
																				(long) (BgL_lenz00_4157),
																				(uint16_t) (0));
																		}
																		BgL_res2634z00_4161 =
																			bgl_make_bignum(BgL_arg1227z00_4158);
																}}
																BgL_nyz00_1700 = BgL_res2634z00_4161;
															}
															{	/* Unsafe/bignumber.scm 655 */
																long BgL_arg1561z00_1701;

																{	/* Unsafe/bignumber.scm 230 */
																	uint16_t BgL_arg1239z00_4163;

																	{	/* Unsafe/bignumber.scm 230 */
																		obj_t BgL_arg1242z00_4164;

																		{	/* Unsafe/bignumber.scm 230 */
																			obj_t BgL_tmpz00_7410;

																			BgL_tmpz00_7410 = ((obj_t) BgL_xz00_1684);
																			BgL_arg1242z00_4164 =
																				BGL_BIGNUM_U16VECT(BgL_tmpz00_7410);
																		}
																		BgL_arg1239z00_4163 =
																			BGL_U16VREF(BgL_arg1242z00_4164,
																			((long) 0));
																	}
																	{	/* Unsafe/bignumber.scm 230 */
																		long BgL_res2636z00_4169;

																		{	/* Unsafe/bignumber.scm 230 */
																			long BgL_arg2198z00_4166;

																			BgL_arg2198z00_4166 =
																				(long) (BgL_arg1239z00_4163);
																			{	/* Unsafe/bignumber.scm 230 */
																				long BgL_res2635z00_4168;

																				BgL_res2635z00_4168 =
																					(long) (BgL_arg2198z00_4166);
																				BgL_res2636z00_4169 =
																					BgL_res2635z00_4168;
																		}}
																		BgL_arg1561z00_1701 = BgL_res2636z00_4169;
																}}
																{	/* Unsafe/bignumber.scm 655 */
																	int BgL_signz00_4171;

																	BgL_signz00_4171 =
																		(int) (BgL_arg1561z00_1701);
																	{	/* Unsafe/bignumber.scm 232 */
																		obj_t BgL_arg1243z00_4172;
																		uint16_t BgL_arg1245z00_4173;

																		BgL_arg1243z00_4172 =
																			BGL_BIGNUM_U16VECT(BgL_nxz00_1699);
																		{	/* Unsafe/bignumber.scm 232 */
																			uint16_t BgL_res2637z00_4175;

																			{	/* Unsafe/bignumber.scm 232 */
																				long BgL_tmpz00_7418;

																				BgL_tmpz00_7418 =
																					(long) (BgL_signz00_4171);
																				BgL_res2637z00_4175 =
																					(uint16_t) (BgL_tmpz00_7418);
																			}
																			BgL_arg1245z00_4173 = BgL_res2637z00_4175;
																		}
																		BGL_U16VSET(BgL_arg1243z00_4172, ((long) 0),
																			BgL_arg1245z00_4173);
																		BUNSPEC;
															}}}
															{
																long BgL_iz00_4214;
																long BgL_cz00_4215;

																BgL_iz00_4214 = ((long) 1);
																BgL_cz00_4215 = ((long) 0);
															BgL_loop3z00_4213:
																if ((BgL_iz00_4214 < BgL_lenxz00_1686))
																	{	/* Unsafe/bignumber.scm 659 */
																		long BgL_wz00_4220;

																		{	/* Unsafe/bignumber.scm 659 */
																			long BgL_arg1569z00_4221;

																			{	/* Unsafe/bignumber.scm 659 */
																				long BgL_arg1570z00_4222;

																				{	/* Unsafe/bignumber.scm 659 */
																					int BgL_iz00_4224;

																					BgL_iz00_4224 = (int) (BgL_iz00_4214);
																					{	/* Unsafe/bignumber.scm 234 */
																						uint16_t BgL_arg1246z00_4225;

																						{	/* Unsafe/bignumber.scm 234 */
																							obj_t BgL_arg1247z00_4226;

																							{	/* Unsafe/bignumber.scm 234 */
																								obj_t BgL_tmpz00_7425;

																								BgL_tmpz00_7425 =
																									((obj_t) BgL_xz00_1684);
																								BgL_arg1247z00_4226 =
																									BGL_BIGNUM_U16VECT
																									(BgL_tmpz00_7425);
																							}
																							{	/* Unsafe/bignumber.scm 234 */
																								long BgL_tmpz00_7428;

																								BgL_tmpz00_7428 =
																									(long) (BgL_iz00_4224);
																								BgL_arg1246z00_4225 =
																									BGL_U16VREF
																									(BgL_arg1247z00_4226,
																									BgL_tmpz00_7428);
																						}}
																						{	/* Unsafe/bignumber.scm 234 */
																							long BgL_res2640z00_4227;

																							{	/* Unsafe/bignumber.scm 234 */
																								long BgL_arg2198z00_4229;

																								BgL_arg2198z00_4229 =
																									(long) (BgL_arg1246z00_4225);
																								{	/* Unsafe/bignumber.scm 234 */
																									long BgL_res2639z00_4230;

																									BgL_res2639z00_4230 =
																										(long)
																										(BgL_arg2198z00_4229);
																									BgL_res2640z00_4227 =
																										BgL_res2639z00_4230;
																							}}
																							BgL_arg1570z00_4222 =
																								BgL_res2640z00_4227;
																				}}}
																				BgL_arg1569z00_4221 =
																					(BgL_arg1570z00_4222 *
																					BgL_shiftz00_1692);
																			}
																			BgL_wz00_4220 =
																				(BgL_arg1569z00_4221 + BgL_cz00_4215);
																		}
																		{	/* Unsafe/bignumber.scm 660 */
																			obj_t BgL_arg1564z00_4238;

																			BgL_arg1564z00_4238 =
																				BGl_moduloz00zz__r4_numbers_6_5_fixnumz00
																				(BINT(BgL_wz00_4220),
																				BINT(((long) 16384)));
																			{	/* Unsafe/bignumber.scm 660 */
																				int BgL_iz00_4241;
																				int BgL_digitz00_4242;

																				BgL_iz00_4241 = (int) (BgL_iz00_4214);
																				BgL_digitz00_4242 =
																					CINT(BgL_arg1564z00_4238);
																				{	/* Unsafe/bignumber.scm 236 */
																					obj_t BgL_arg1250z00_4243;
																					uint16_t BgL_arg1252z00_4244;

																					BgL_arg1250z00_4243 =
																						BGL_BIGNUM_U16VECT(BgL_nxz00_1699);
																					{	/* Unsafe/bignumber.scm 236 */
																						uint16_t BgL_res2643z00_4245;

																						{	/* Unsafe/bignumber.scm 236 */
																							long BgL_tmpz00_7441;

																							BgL_tmpz00_7441 =
																								(long) (BgL_digitz00_4242);
																							BgL_res2643z00_4245 =
																								(uint16_t) (BgL_tmpz00_7441);
																						}
																						BgL_arg1252z00_4244 =
																							BgL_res2643z00_4245;
																					}
																					{	/* Unsafe/bignumber.scm 236 */
																						long BgL_tmpz00_7444;

																						BgL_tmpz00_7444 =
																							(long) (BgL_iz00_4241);
																						BGL_U16VSET(BgL_arg1250z00_4243,
																							BgL_tmpz00_7444,
																							BgL_arg1252z00_4244);
																					} BUNSPEC;
																		}}}
																		{	/* Unsafe/bignumber.scm 661 */
																			long BgL_arg1566z00_4247;
																			long BgL_arg1567z00_4248;

																			BgL_arg1566z00_4247 =
																				(BgL_iz00_4214 + ((long) 1));
																			{	/* Unsafe/bignumber.scm 661 */
																				long BgL_res2645z00_4252;

																				BgL_res2645z00_4252 =
																					(BgL_wz00_4220 / ((long) 16384));
																				BgL_arg1567z00_4248 =
																					BgL_res2645z00_4252;
																			}
																			{
																				long BgL_cz00_7450;
																				long BgL_iz00_7449;

																				BgL_iz00_7449 = BgL_arg1566z00_4247;
																				BgL_cz00_7450 = BgL_arg1567z00_4248;
																				BgL_cz00_4215 = BgL_cz00_7450;
																				BgL_iz00_4214 = BgL_iz00_7449;
																				goto BgL_loop3z00_4213;
																			}
																		}
																	}
																else
																	{	/* Unsafe/bignumber.scm 662 */
																		int BgL_iz00_4256;
																		int BgL_digitz00_4257;

																		BgL_iz00_4256 = (int) (BgL_iz00_4214);
																		BgL_digitz00_4257 = (int) (BgL_cz00_4215);
																		{	/* Unsafe/bignumber.scm 236 */
																			obj_t BgL_arg1250z00_4258;
																			uint16_t BgL_arg1252z00_4259;

																			BgL_arg1250z00_4258 =
																				BGL_BIGNUM_U16VECT(BgL_nxz00_1699);
																			{	/* Unsafe/bignumber.scm 236 */
																				uint16_t BgL_res2646z00_4260;

																				{	/* Unsafe/bignumber.scm 236 */
																					long BgL_tmpz00_7454;

																					BgL_tmpz00_7454 =
																						(long) (BgL_digitz00_4257);
																					BgL_res2646z00_4260 =
																						(uint16_t) (BgL_tmpz00_7454);
																				}
																				BgL_arg1252z00_4259 =
																					BgL_res2646z00_4260;
																			}
																			{	/* Unsafe/bignumber.scm 236 */
																				long BgL_tmpz00_7457;

																				BgL_tmpz00_7457 =
																					(long) (BgL_iz00_4256);
																				BGL_U16VSET(BgL_arg1250z00_4258,
																					BgL_tmpz00_7457, BgL_arg1252z00_4259);
																			} BUNSPEC;
															}}}
															{
																long BgL_iz00_4293;
																long BgL_cz00_4294;

																BgL_iz00_4293 = ((long) 1);
																BgL_cz00_4294 = ((long) 0);
															BgL_loop4z00_4292:
																if ((BgL_iz00_4293 < BgL_lenyz00_1687))
																	{	/* Unsafe/bignumber.scm 666 */
																		long BgL_wz00_4299;

																		{	/* Unsafe/bignumber.scm 666 */
																			long BgL_arg1579z00_4300;

																			{	/* Unsafe/bignumber.scm 666 */
																				long BgL_arg1580z00_4301;

																				{	/* Unsafe/bignumber.scm 666 */
																					int BgL_iz00_4303;

																					BgL_iz00_4303 = (int) (BgL_iz00_4293);
																					{	/* Unsafe/bignumber.scm 234 */
																						uint16_t BgL_arg1246z00_4304;

																						{	/* Unsafe/bignumber.scm 234 */
																							obj_t BgL_arg1247z00_4305;

																							{	/* Unsafe/bignumber.scm 234 */
																								obj_t BgL_tmpz00_7463;

																								BgL_tmpz00_7463 =
																									((obj_t) BgL_yz00_1685);
																								BgL_arg1247z00_4305 =
																									BGL_BIGNUM_U16VECT
																									(BgL_tmpz00_7463);
																							}
																							{	/* Unsafe/bignumber.scm 234 */
																								long BgL_tmpz00_7466;

																								BgL_tmpz00_7466 =
																									(long) (BgL_iz00_4303);
																								BgL_arg1246z00_4304 =
																									BGL_U16VREF
																									(BgL_arg1247z00_4305,
																									BgL_tmpz00_7466);
																						}}
																						{	/* Unsafe/bignumber.scm 234 */
																							long BgL_res2649z00_4306;

																							{	/* Unsafe/bignumber.scm 234 */
																								long BgL_arg2198z00_4308;

																								BgL_arg2198z00_4308 =
																									(long) (BgL_arg1246z00_4304);
																								{	/* Unsafe/bignumber.scm 234 */
																									long BgL_res2648z00_4309;

																									BgL_res2648z00_4309 =
																										(long)
																										(BgL_arg2198z00_4308);
																									BgL_res2649z00_4306 =
																										BgL_res2648z00_4309;
																							}}
																							BgL_arg1580z00_4301 =
																								BgL_res2649z00_4306;
																				}}}
																				BgL_arg1579z00_4300 =
																					(BgL_arg1580z00_4301 *
																					BgL_shiftz00_1692);
																			}
																			BgL_wz00_4299 =
																				(BgL_arg1579z00_4300 + BgL_cz00_4294);
																		}
																		{	/* Unsafe/bignumber.scm 667 */
																			obj_t BgL_arg1573z00_4317;

																			BgL_arg1573z00_4317 =
																				BGl_moduloz00zz__r4_numbers_6_5_fixnumz00
																				(BINT(BgL_wz00_4299),
																				BINT(((long) 16384)));
																			{	/* Unsafe/bignumber.scm 667 */
																				int BgL_iz00_4320;
																				int BgL_digitz00_4321;

																				BgL_iz00_4320 = (int) (BgL_iz00_4293);
																				BgL_digitz00_4321 =
																					CINT(BgL_arg1573z00_4317);
																				{	/* Unsafe/bignumber.scm 236 */
																					obj_t BgL_arg1250z00_4322;
																					uint16_t BgL_arg1252z00_4323;

																					BgL_arg1250z00_4322 =
																						BGL_BIGNUM_U16VECT(BgL_nyz00_1700);
																					{	/* Unsafe/bignumber.scm 236 */
																						uint16_t BgL_res2652z00_4324;

																						{	/* Unsafe/bignumber.scm 236 */
																							long BgL_tmpz00_7479;

																							BgL_tmpz00_7479 =
																								(long) (BgL_digitz00_4321);
																							BgL_res2652z00_4324 =
																								(uint16_t) (BgL_tmpz00_7479);
																						}
																						BgL_arg1252z00_4323 =
																							BgL_res2652z00_4324;
																					}
																					{	/* Unsafe/bignumber.scm 236 */
																						long BgL_tmpz00_7482;

																						BgL_tmpz00_7482 =
																							(long) (BgL_iz00_4320);
																						BGL_U16VSET(BgL_arg1250z00_4322,
																							BgL_tmpz00_7482,
																							BgL_arg1252z00_4323);
																					} BUNSPEC;
																		}}}
																		{	/* Unsafe/bignumber.scm 668 */
																			long BgL_arg1575z00_4326;
																			long BgL_arg1577z00_4327;

																			BgL_arg1575z00_4326 =
																				(BgL_iz00_4293 + ((long) 1));
																			{	/* Unsafe/bignumber.scm 668 */
																				long BgL_res2654z00_4331;

																				BgL_res2654z00_4331 =
																					(BgL_wz00_4299 / ((long) 16384));
																				BgL_arg1577z00_4327 =
																					BgL_res2654z00_4331;
																			}
																			{
																				long BgL_cz00_7488;
																				long BgL_iz00_7487;

																				BgL_iz00_7487 = BgL_arg1575z00_4326;
																				BgL_cz00_7488 = BgL_arg1577z00_4327;
																				BgL_cz00_4294 = BgL_cz00_7488;
																				BgL_iz00_4293 = BgL_iz00_7487;
																				goto BgL_loop4z00_4292;
																			}
																		}
																	}
																else
																	{	/* Unsafe/bignumber.scm 665 */
																		((bool_t) 0);
																	}
															}
															{
																long BgL_iz00_1731;

																BgL_iz00_1731 = BgL_lenxz00_1686;
															BgL_zc3z04anonymousza31581ze3z87_1732:
																if ((BgL_iz00_1731 < BgL_lenyz00_1687))
																	{	/* Unsafe/bignumber.scm 671 */
																		((bool_t) 0);
																	}
																else
																	{	/* Unsafe/bignumber.scm 675 */
																		long BgL_msdzd2ofzd2nyz00_1734;
																		long BgL_nextzd2msdzd2ofzd2nyzd2_1735;
																		long BgL_msdzd2ofzd2nxz00_1736;
																		long BgL_nextzd2msdzd2ofzd2nxzd2_1737;
																		long
																			BgL_nextzd2nextzd2msdzd2ofzd2nxz00_1738;
																		{	/* Unsafe/bignumber.scm 676 */
																			long BgL_arg1659z00_1826;

																			BgL_arg1659z00_1826 =
																				(BgL_lenyz00_1687 - ((long) 1));
																			{	/* Unsafe/bignumber.scm 676 */
																				int BgL_iz00_4340;

																				BgL_iz00_4340 =
																					(int) (BgL_arg1659z00_1826);
																				{	/* Unsafe/bignumber.scm 234 */
																					uint16_t BgL_arg1246z00_4341;

																					{	/* Unsafe/bignumber.scm 234 */
																						obj_t BgL_arg1247z00_4342;

																						BgL_arg1247z00_4342 =
																							BGL_BIGNUM_U16VECT
																							(BgL_nyz00_1700);
																						{	/* Unsafe/bignumber.scm 234 */
																							long BgL_tmpz00_7494;

																							BgL_tmpz00_7494 =
																								(long) (BgL_iz00_4340);
																							BgL_arg1246z00_4341 =
																								BGL_U16VREF(BgL_arg1247z00_4342,
																								BgL_tmpz00_7494);
																					}}
																					{	/* Unsafe/bignumber.scm 234 */
																						long BgL_res2658z00_4347;

																						{	/* Unsafe/bignumber.scm 234 */
																							long BgL_arg2198z00_4344;

																							BgL_arg2198z00_4344 =
																								(long) (BgL_arg1246z00_4341);
																							{	/* Unsafe/bignumber.scm 234 */
																								long BgL_res2657z00_4346;

																								BgL_res2657z00_4346 =
																									(long) (BgL_arg2198z00_4344);
																								BgL_res2658z00_4347 =
																									BgL_res2657z00_4346;
																						}}
																						BgL_msdzd2ofzd2nyz00_1734 =
																							BgL_res2658z00_4347;
																		}}}}
																		{	/* Unsafe/bignumber.scm 678 */
																			long BgL_arg1660z00_1827;

																			BgL_arg1660z00_1827 =
																				(BgL_lenyz00_1687 - ((long) 2));
																			{	/* Unsafe/bignumber.scm 678 */
																				int BgL_iz00_4351;

																				BgL_iz00_4351 =
																					(int) (BgL_arg1660z00_1827);
																				{	/* Unsafe/bignumber.scm 234 */
																					uint16_t BgL_arg1246z00_4352;

																					{	/* Unsafe/bignumber.scm 234 */
																						obj_t BgL_arg1247z00_4353;

																						BgL_arg1247z00_4353 =
																							BGL_BIGNUM_U16VECT
																							(BgL_nyz00_1700);
																						{	/* Unsafe/bignumber.scm 234 */
																							long BgL_tmpz00_7502;

																							BgL_tmpz00_7502 =
																								(long) (BgL_iz00_4351);
																							BgL_arg1246z00_4352 =
																								BGL_U16VREF(BgL_arg1247z00_4353,
																								BgL_tmpz00_7502);
																					}}
																					{	/* Unsafe/bignumber.scm 234 */
																						long BgL_res2661z00_4358;

																						{	/* Unsafe/bignumber.scm 234 */
																							long BgL_arg2198z00_4355;

																							BgL_arg2198z00_4355 =
																								(long) (BgL_arg1246z00_4352);
																							{	/* Unsafe/bignumber.scm 234 */
																								long BgL_res2660z00_4357;

																								BgL_res2660z00_4357 =
																									(long) (BgL_arg2198z00_4355);
																								BgL_res2661z00_4358 =
																									BgL_res2660z00_4357;
																						}}
																						BgL_nextzd2msdzd2ofzd2nyzd2_1735 =
																							BgL_res2661z00_4358;
																		}}}}
																		{	/* Unsafe/bignumber.scm 680 */
																			int BgL_iz00_4360;

																			BgL_iz00_4360 = (int) (BgL_iz00_1731);
																			{	/* Unsafe/bignumber.scm 234 */
																				uint16_t BgL_arg1246z00_4361;

																				{	/* Unsafe/bignumber.scm 234 */
																					obj_t BgL_arg1247z00_4362;

																					BgL_arg1247z00_4362 =
																						BGL_BIGNUM_U16VECT(BgL_nxz00_1699);
																					{	/* Unsafe/bignumber.scm 234 */
																						long BgL_tmpz00_7509;

																						BgL_tmpz00_7509 =
																							(long) (BgL_iz00_4360);
																						BgL_arg1246z00_4361 =
																							BGL_U16VREF(BgL_arg1247z00_4362,
																							BgL_tmpz00_7509);
																				}}
																				{	/* Unsafe/bignumber.scm 234 */
																					long BgL_res2663z00_4367;

																					{	/* Unsafe/bignumber.scm 234 */
																						long BgL_arg2198z00_4364;

																						BgL_arg2198z00_4364 =
																							(long) (BgL_arg1246z00_4361);
																						{	/* Unsafe/bignumber.scm 234 */
																							long BgL_res2662z00_4366;

																							BgL_res2662z00_4366 =
																								(long) (BgL_arg2198z00_4364);
																							BgL_res2663z00_4367 =
																								BgL_res2662z00_4366;
																					}}
																					BgL_msdzd2ofzd2nxz00_1736 =
																						BgL_res2663z00_4367;
																		}}}
																		{	/* Unsafe/bignumber.scm 682 */
																			long BgL_arg1661z00_1828;

																			BgL_arg1661z00_1828 =
																				(BgL_iz00_1731 - ((long) 1));
																			{	/* Unsafe/bignumber.scm 682 */
																				int BgL_iz00_4371;

																				BgL_iz00_4371 =
																					(int) (BgL_arg1661z00_1828);
																				{	/* Unsafe/bignumber.scm 234 */
																					uint16_t BgL_arg1246z00_4372;

																					{	/* Unsafe/bignumber.scm 234 */
																						obj_t BgL_arg1247z00_4373;

																						BgL_arg1247z00_4373 =
																							BGL_BIGNUM_U16VECT
																							(BgL_nxz00_1699);
																						{	/* Unsafe/bignumber.scm 234 */
																							long BgL_tmpz00_7517;

																							BgL_tmpz00_7517 =
																								(long) (BgL_iz00_4371);
																							BgL_arg1246z00_4372 =
																								BGL_U16VREF(BgL_arg1247z00_4373,
																								BgL_tmpz00_7517);
																					}}
																					{	/* Unsafe/bignumber.scm 234 */
																						long BgL_res2666z00_4378;

																						{	/* Unsafe/bignumber.scm 234 */
																							long BgL_arg2198z00_4375;

																							BgL_arg2198z00_4375 =
																								(long) (BgL_arg1246z00_4372);
																							{	/* Unsafe/bignumber.scm 234 */
																								long BgL_res2665z00_4377;

																								BgL_res2665z00_4377 =
																									(long) (BgL_arg2198z00_4375);
																								BgL_res2666z00_4378 =
																									BgL_res2665z00_4377;
																						}}
																						BgL_nextzd2msdzd2ofzd2nxzd2_1737 =
																							BgL_res2666z00_4378;
																		}}}}
																		{	/* Unsafe/bignumber.scm 684 */
																			long BgL_arg1662z00_1829;

																			BgL_arg1662z00_1829 =
																				(BgL_iz00_1731 - ((long) 2));
																			{	/* Unsafe/bignumber.scm 684 */
																				int BgL_iz00_4382;

																				BgL_iz00_4382 =
																					(int) (BgL_arg1662z00_1829);
																				{	/* Unsafe/bignumber.scm 234 */
																					uint16_t BgL_arg1246z00_4383;

																					{	/* Unsafe/bignumber.scm 234 */
																						obj_t BgL_arg1247z00_4384;

																						BgL_arg1247z00_4384 =
																							BGL_BIGNUM_U16VECT
																							(BgL_nxz00_1699);
																						{	/* Unsafe/bignumber.scm 234 */
																							long BgL_tmpz00_7525;

																							BgL_tmpz00_7525 =
																								(long) (BgL_iz00_4382);
																							BgL_arg1246z00_4383 =
																								BGL_U16VREF(BgL_arg1247z00_4384,
																								BgL_tmpz00_7525);
																					}}
																					{	/* Unsafe/bignumber.scm 234 */
																						long BgL_res2669z00_4389;

																						{	/* Unsafe/bignumber.scm 234 */
																							long BgL_arg2198z00_4386;

																							BgL_arg2198z00_4386 =
																								(long) (BgL_arg1246z00_4383);
																							{	/* Unsafe/bignumber.scm 234 */
																								long BgL_res2668z00_4388;

																								BgL_res2668z00_4388 =
																									(long) (BgL_arg2198z00_4386);
																								BgL_res2669z00_4389 =
																									BgL_res2668z00_4388;
																						}}
																						BgL_nextzd2nextzd2msdzd2ofzd2nxz00_1738
																							= BgL_res2669z00_4389;
																		}}}}
																		{
																			long BgL_qz00_1805;
																			long BgL_uz00_1806;

																			{	/* Unsafe/bignumber.scm 698 */
																				long BgL_qz00_1740;

																				if (
																					(BgL_msdzd2ofzd2nxz00_1736 ==
																						BgL_msdzd2ofzd2nyz00_1734))
																					{	/* Unsafe/bignumber.scm 698 */
																						BgL_qz00_1805 = ((long) 16383);
																						BgL_uz00_1806 =
																							(BgL_msdzd2ofzd2nyz00_1734 +
																							BgL_nextzd2msdzd2ofzd2nxzd2_1737);
																					BgL_zc3z04anonymousza31644ze3z87_1807:
																						if (
																							(BgL_uz00_1806 < ((long) 16384)))
																							{	/* Unsafe/bignumber.scm 688 */
																								long BgL_temp1z00_1810;

																								BgL_temp1z00_1810 =
																									(BgL_qz00_1805 *
																									BgL_nextzd2msdzd2ofzd2nyzd2_1735);
																								{	/* Unsafe/bignumber.scm 688 */
																									long BgL_temp2z00_1811;

																									{	/* Unsafe/bignumber.scm 689 */
																										long BgL_res2672z00_4398;

																										BgL_res2672z00_4398 =
																											(BgL_temp1z00_1810 /
																											((long) 16384));
																										BgL_temp2z00_1811 =
																											BgL_res2672z00_4398;
																									}
																									{	/* Unsafe/bignumber.scm 689 */

																										{	/* Unsafe/bignumber.scm 690 */
																											bool_t
																												BgL_test3407z00_7536;
																											if ((BgL_uz00_1806 <
																													BgL_temp2z00_1811))
																												{	/* Unsafe/bignumber.scm 690 */
																													BgL_test3407z00_7536 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Unsafe/bignumber.scm 690 */
																													if (
																														(BgL_temp2z00_1811
																															== BgL_uz00_1806))
																														{	/* Unsafe/bignumber.scm 693 */
																															long
																																BgL_arg1654z00_1821;
																															{	/* Unsafe/bignumber.scm 693 */
																																long
																																	BgL_res2680z00_4423;
																																{	/* Unsafe/bignumber.scm 693 */
																																	long
																																		BgL_n1z00_4405;
																																	long
																																		BgL_n2z00_4406;
																																	BgL_n1z00_4405
																																		=
																																		BgL_temp1z00_1810;
																																	BgL_n2z00_4406
																																		=
																																		((long)
																																		16384);
																																	{	/* Unsafe/bignumber.scm 693 */
																																		bool_t
																																			BgL_test3410z00_7541;
																																		{	/* Unsafe/bignumber.scm 693 */
																																			long
																																				BgL_arg2102z00_4408;
																																			BgL_arg2102z00_4408
																																				=
																																				(((BgL_n1z00_4405) | (BgL_n2z00_4406)) & -2147483648);
																																			BgL_test3410z00_7541
																																				=
																																				(BgL_arg2102z00_4408
																																				==
																																				((long)
																																					0));
																																		}
																																		if (BgL_test3410z00_7541)
																																			{	/* Unsafe/bignumber.scm 693 */
																																				int32_t
																																					BgL_arg2098z00_4409;
																																				{	/* Unsafe/bignumber.scm 693 */
																																					int32_t
																																						BgL_arg2100z00_4410;
																																					int32_t
																																						BgL_arg2101z00_4411;
																																					{	/* Unsafe/bignumber.scm 693 */
																																						int32_t
																																							BgL_res2676z00_4415;
																																						BgL_res2676z00_4415
																																							=
																																							(int32_t)
																																							(BgL_n1z00_4405);
																																						BgL_arg2100z00_4410
																																							=
																																							BgL_res2676z00_4415;
																																					}
																																					{	/* Unsafe/bignumber.scm 693 */
																																						int32_t
																																							BgL_res2677z00_4417;
																																						BgL_res2677z00_4417
																																							=
																																							(int32_t)
																																							(BgL_n2z00_4406);
																																						BgL_arg2101z00_4411
																																							=
																																							BgL_res2677z00_4417;
																																					}
																																					BgL_arg2098z00_4409
																																						=
																																						(BgL_arg2100z00_4410
																																						%
																																						BgL_arg2101z00_4411);
																																				}
																																				{	/* Unsafe/bignumber.scm 693 */
																																					long
																																						BgL_res2679z00_4422;
																																					{	/* Unsafe/bignumber.scm 693 */
																																						long
																																							BgL_arg2197z00_4419;
																																						BgL_arg2197z00_4419
																																							=
																																							(long)
																																							(BgL_arg2098z00_4409);
																																						{	/* Unsafe/bignumber.scm 693 */
																																							long
																																								BgL_res2678z00_4421;
																																							BgL_res2678z00_4421
																																								=
																																								(long)
																																								(BgL_arg2197z00_4419);
																																							BgL_res2679z00_4422
																																								=
																																								BgL_res2678z00_4421;
																																					}}
																																					BgL_res2680z00_4423
																																						=
																																						BgL_res2679z00_4422;
																																			}}
																																		else
																																			{	/* Unsafe/bignumber.scm 693 */
																																				BgL_res2680z00_4423
																																					=
																																					(BgL_n1z00_4405
																																					%
																																					BgL_n2z00_4406);
																																			}
																																	}
																																}
																																BgL_arg1654z00_1821
																																	=
																																	BgL_res2680z00_4423;
																															}
																															BgL_test3407z00_7536
																																=
																																(BgL_nextzd2nextzd2msdzd2ofzd2nxz00_1738
																																<
																																BgL_arg1654z00_1821);
																														}
																													else
																														{	/* Unsafe/bignumber.scm 691 */
																															BgL_test3407z00_7536
																																= ((bool_t) 0);
																														}
																												}
																											if (BgL_test3407z00_7536)
																												{
																													long BgL_uz00_7553;
																													long BgL_qz00_7551;

																													BgL_qz00_7551 =
																														(BgL_qz00_1805 -
																														((long) 1));
																													BgL_uz00_7553 =
																														(BgL_uz00_1806 +
																														BgL_msdzd2ofzd2nyz00_1734);
																													BgL_uz00_1806 =
																														BgL_uz00_7553;
																													BgL_qz00_1805 =
																														BgL_qz00_7551;
																													goto
																														BgL_zc3z04anonymousza31644ze3z87_1807;
																												}
																											else
																												{	/* Unsafe/bignumber.scm 690 */
																													BgL_qz00_1740 =
																														BgL_qz00_1805;
																												}
																										}
																									}
																								}
																							}
																						else
																							{	/* Unsafe/bignumber.scm 687 */
																								BgL_qz00_1740 = BgL_qz00_1805;
																							}
																					}
																				else
																					{	/* Unsafe/bignumber.scm 701 */
																						long BgL_tempz00_1800;

																						BgL_tempz00_1800 =
																							(
																							(BgL_msdzd2ofzd2nxz00_1736 *
																								((long) 16384)) +
																							BgL_nextzd2msdzd2ofzd2nxzd2_1737);
																						{	/* Unsafe/bignumber.scm 703 */
																							long BgL_arg1640z00_1801;
																							long BgL_arg1641z00_1802;

																							{	/* Unsafe/bignumber.scm 703 */
																								long BgL_res2688z00_4446;

																								BgL_res2688z00_4446 =
																									(BgL_tempz00_1800 /
																									BgL_msdzd2ofzd2nyz00_1734);
																								BgL_arg1640z00_1801 =
																									BgL_res2688z00_4446;
																							}
																							BgL_arg1641z00_1802 =
																								BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00
																								(BgL_tempz00_1800,
																								BgL_msdzd2ofzd2nyz00_1734);
																							{
																								long BgL_uz00_7561;
																								long BgL_qz00_7560;

																								BgL_qz00_7560 =
																									BgL_arg1640z00_1801;
																								BgL_uz00_7561 =
																									BgL_arg1641z00_1802;
																								BgL_uz00_1806 = BgL_uz00_7561;
																								BgL_qz00_1805 = BgL_qz00_7560;
																								goto
																									BgL_zc3z04anonymousza31644ze3z87_1807;
																							}
																						}
																					}
																				{	/* Unsafe/bignumber.scm 708 */
																					long BgL_g1054z00_1741;

																					BgL_g1054z00_1741 =
																						(BgL_iz00_1731 -
																						(BgL_lenyz00_1687 - ((long) 1)));
																					{
																						long BgL_jz00_1743;
																						long BgL_kz00_1744;
																						long BgL_bz00_1745;

																						BgL_jz00_1743 = ((long) 1);
																						BgL_kz00_1744 = BgL_g1054z00_1741;
																						BgL_bz00_1745 = ((long) 0);
																					BgL_zc3z04anonymousza31583ze3z87_1746:
																						if (
																							(BgL_jz00_1743 <
																								BgL_lenyz00_1687))
																							{	/* Unsafe/bignumber.scm 713 */
																								long BgL_wz00_1748;

																								{	/* Unsafe/bignumber.scm 713 */
																									long BgL_arg1599z00_1757;
																									long BgL_arg1602z00_1758;

																									{	/* Unsafe/bignumber.scm 713 */
																										long BgL_arg1603z00_1759;

																										{	/* Unsafe/bignumber.scm 713 */
																											int BgL_iz00_4456;

																											BgL_iz00_4456 =
																												(int) (BgL_kz00_1744);
																											{	/* Unsafe/bignumber.scm 234 */
																												uint16_t
																													BgL_arg1246z00_4457;
																												{	/* Unsafe/bignumber.scm 234 */
																													obj_t
																														BgL_arg1247z00_4458;
																													BgL_arg1247z00_4458 =
																														BGL_BIGNUM_U16VECT
																														(BgL_nxz00_1699);
																													{	/* Unsafe/bignumber.scm 234 */
																														long
																															BgL_tmpz00_7568;
																														BgL_tmpz00_7568 =
																															(long)
																															(BgL_iz00_4456);
																														BgL_arg1246z00_4457
																															=
																															BGL_U16VREF
																															(BgL_arg1247z00_4458,
																															BgL_tmpz00_7568);
																												}}
																												{	/* Unsafe/bignumber.scm 234 */
																													long
																														BgL_res2693z00_4463;
																													{	/* Unsafe/bignumber.scm 234 */
																														long
																															BgL_arg2198z00_4460;
																														BgL_arg2198z00_4460
																															=
																															(long)
																															(BgL_arg1246z00_4457);
																														{	/* Unsafe/bignumber.scm 234 */
																															long
																																BgL_res2692z00_4462;
																															BgL_res2692z00_4462
																																=
																																(long)
																																(BgL_arg2198z00_4460);
																															BgL_res2693z00_4463
																																=
																																BgL_res2692z00_4462;
																													}}
																													BgL_arg1603z00_1759 =
																														BgL_res2693z00_4463;
																										}}}
																										BgL_arg1599z00_1757 =
																											(BgL_arg1603z00_1759 +
																											BgL_bz00_1745);
																									}
																									{	/* Unsafe/bignumber.scm 714 */
																										long BgL_arg1604z00_1760;

																										{	/* Unsafe/bignumber.scm 714 */
																											int BgL_iz00_4468;

																											BgL_iz00_4468 =
																												(int) (BgL_jz00_1743);
																											{	/* Unsafe/bignumber.scm 234 */
																												uint16_t
																													BgL_arg1246z00_4469;
																												{	/* Unsafe/bignumber.scm 234 */
																													obj_t
																														BgL_arg1247z00_4470;
																													BgL_arg1247z00_4470 =
																														BGL_BIGNUM_U16VECT
																														(BgL_nyz00_1700);
																													{	/* Unsafe/bignumber.scm 234 */
																														long
																															BgL_tmpz00_7576;
																														BgL_tmpz00_7576 =
																															(long)
																															(BgL_iz00_4468);
																														BgL_arg1246z00_4469
																															=
																															BGL_U16VREF
																															(BgL_arg1247z00_4470,
																															BgL_tmpz00_7576);
																												}}
																												{	/* Unsafe/bignumber.scm 234 */
																													long
																														BgL_res2696z00_4475;
																													{	/* Unsafe/bignumber.scm 234 */
																														long
																															BgL_arg2198z00_4472;
																														BgL_arg2198z00_4472
																															=
																															(long)
																															(BgL_arg1246z00_4469);
																														{	/* Unsafe/bignumber.scm 234 */
																															long
																																BgL_res2695z00_4474;
																															BgL_res2695z00_4474
																																=
																																(long)
																																(BgL_arg2198z00_4472);
																															BgL_res2696z00_4475
																																=
																																BgL_res2695z00_4474;
																													}}
																													BgL_arg1604z00_1760 =
																														BgL_res2696z00_4475;
																										}}}
																										BgL_arg1602z00_1758 =
																											(BgL_arg1604z00_1760 *
																											BgL_qz00_1740);
																									}
																									BgL_wz00_1748 =
																										(BgL_arg1599z00_1757 -
																										BgL_arg1602z00_1758);
																								}
																								{	/* Unsafe/bignumber.scm 718 */
																									obj_t BgL_arg1587z00_1749;

																									BgL_arg1587z00_1749 =
																										BGl_moduloz00zz__r4_numbers_6_5_fixnumz00
																										(BINT(BgL_wz00_1748),
																										BINT(((long) 16384)));
																									{	/* Unsafe/bignumber.scm 715 */
																										int BgL_iz00_4483;
																										int BgL_digitz00_4484;

																										BgL_iz00_4483 =
																											(int) (BgL_kz00_1744);
																										BgL_digitz00_4484 =
																											CINT(BgL_arg1587z00_1749);
																										{	/* Unsafe/bignumber.scm 236 */
																											obj_t BgL_arg1250z00_4485;
																											uint16_t
																												BgL_arg1252z00_4486;
																											BgL_arg1250z00_4485 =
																												BGL_BIGNUM_U16VECT
																												(BgL_nxz00_1699);
																											{	/* Unsafe/bignumber.scm 236 */
																												uint16_t
																													BgL_res2699z00_4488;
																												{	/* Unsafe/bignumber.scm 236 */
																													long BgL_tmpz00_7589;

																													BgL_tmpz00_7589 =
																														(long)
																														(BgL_digitz00_4484);
																													BgL_res2699z00_4488 =
																														(uint16_t)
																														(BgL_tmpz00_7589);
																												}
																												BgL_arg1252z00_4486 =
																													BgL_res2699z00_4488;
																											}
																											{	/* Unsafe/bignumber.scm 236 */
																												long BgL_tmpz00_7592;

																												BgL_tmpz00_7592 =
																													(long)
																													(BgL_iz00_4483);
																												BGL_U16VSET
																													(BgL_arg1250z00_4485,
																													BgL_tmpz00_7592,
																													BgL_arg1252z00_4486);
																											} BUNSPEC;
																								}}}
																								{	/* Unsafe/bignumber.scm 719 */
																									long BgL_arg1589z00_1751;
																									long BgL_arg1592z00_1752;
																									long BgL_arg1593z00_1753;

																									BgL_arg1589z00_1751 =
																										(BgL_jz00_1743 +
																										((long) 1));
																									BgL_arg1592z00_1752 =
																										(BgL_kz00_1744 +
																										((long) 1));
																									{	/* Unsafe/bignumber.scm 721 */
																										long BgL_arg1596z00_1754;

																										BgL_arg1596z00_1754 =
																											(BgL_wz00_1748 -
																											((long) 16383));
																										{	/* Unsafe/bignumber.scm 721 */
																											long BgL_res2703z00_4498;

																											BgL_res2703z00_4498 =
																												(BgL_arg1596z00_1754 /
																												((long) 16384));
																											BgL_arg1593z00_1753 =
																												BgL_res2703z00_4498;
																									}}
																									{
																										long BgL_bz00_7601;
																										long BgL_kz00_7600;
																										long BgL_jz00_7599;

																										BgL_jz00_7599 =
																											BgL_arg1589z00_1751;
																										BgL_kz00_7600 =
																											BgL_arg1592z00_1752;
																										BgL_bz00_7601 =
																											BgL_arg1593z00_1753;
																										BgL_bz00_1745 =
																											BgL_bz00_7601;
																										BgL_kz00_1744 =
																											BgL_kz00_7600;
																										BgL_jz00_1743 =
																											BgL_jz00_7599;
																										goto
																											BgL_zc3z04anonymousza31583ze3z87_1746;
																									}
																								}
																							}
																						else
																							{	/* Unsafe/bignumber.scm 724 */
																								long BgL_wz00_1761;

																								{	/* Unsafe/bignumber.scm 724 */
																									long BgL_arg1634z00_1794;

																									{	/* Unsafe/bignumber.scm 724 */
																										int BgL_iz00_4500;

																										BgL_iz00_4500 =
																											(int) (BgL_kz00_1744);
																										{	/* Unsafe/bignumber.scm 234 */
																											uint16_t
																												BgL_arg1246z00_4501;
																											{	/* Unsafe/bignumber.scm 234 */
																												obj_t
																													BgL_arg1247z00_4502;
																												BgL_arg1247z00_4502 =
																													BGL_BIGNUM_U16VECT
																													(BgL_nxz00_1699);
																												{	/* Unsafe/bignumber.scm 234 */
																													long BgL_tmpz00_7604;

																													BgL_tmpz00_7604 =
																														(long)
																														(BgL_iz00_4500);
																													BgL_arg1246z00_4501 =
																														BGL_U16VREF
																														(BgL_arg1247z00_4502,
																														BgL_tmpz00_7604);
																											}}
																											{	/* Unsafe/bignumber.scm 234 */
																												long
																													BgL_res2705z00_4507;
																												{	/* Unsafe/bignumber.scm 234 */
																													long
																														BgL_arg2198z00_4504;
																													BgL_arg2198z00_4504 =
																														(long)
																														(BgL_arg1246z00_4501);
																													{	/* Unsafe/bignumber.scm 234 */
																														long
																															BgL_res2704z00_4506;
																														BgL_res2704z00_4506
																															=
																															(long)
																															(BgL_arg2198z00_4504);
																														BgL_res2705z00_4507
																															=
																															BgL_res2704z00_4506;
																												}}
																												BgL_arg1634z00_1794 =
																													BgL_res2705z00_4507;
																									}}}
																									BgL_wz00_1761 =
																										(BgL_arg1634z00_1794 +
																										BgL_bz00_1745);
																								}
																								{	/* Unsafe/bignumber.scm 728 */
																									obj_t BgL_arg1605z00_1762;

																									BgL_arg1605z00_1762 =
																										BGl_moduloz00zz__r4_numbers_6_5_fixnumz00
																										(BINT(BgL_wz00_1761),
																										BINT(((long) 16384)));
																									{	/* Unsafe/bignumber.scm 725 */
																										int BgL_iz00_4512;
																										int BgL_digitz00_4513;

																										BgL_iz00_4512 =
																											(int) (BgL_kz00_1744);
																										BgL_digitz00_4513 =
																											CINT(BgL_arg1605z00_1762);
																										{	/* Unsafe/bignumber.scm 236 */
																											obj_t BgL_arg1250z00_4514;
																											uint16_t
																												BgL_arg1252z00_4515;
																											BgL_arg1250z00_4514 =
																												BGL_BIGNUM_U16VECT
																												(BgL_nxz00_1699);
																											{	/* Unsafe/bignumber.scm 236 */
																												uint16_t
																													BgL_res2707z00_4517;
																												{	/* Unsafe/bignumber.scm 236 */
																													long BgL_tmpz00_7616;

																													BgL_tmpz00_7616 =
																														(long)
																														(BgL_digitz00_4513);
																													BgL_res2707z00_4517 =
																														(uint16_t)
																														(BgL_tmpz00_7616);
																												}
																												BgL_arg1252z00_4515 =
																													BgL_res2707z00_4517;
																											}
																											{	/* Unsafe/bignumber.scm 236 */
																												long BgL_tmpz00_7619;

																												BgL_tmpz00_7619 =
																													(long)
																													(BgL_iz00_4512);
																												BGL_U16VSET
																													(BgL_arg1250z00_4514,
																													BgL_tmpz00_7619,
																													BgL_arg1252z00_4515);
																											} BUNSPEC;
																								}}}
																								if (
																									(BgL_wz00_1761 < ((long) 0)))
																									{	/* Unsafe/bignumber.scm 729 */
																										{	/* Unsafe/bignumber.scm 733 */
																											long BgL_arg1608z00_1765;
																											long BgL_arg1611z00_1766;

																											BgL_arg1608z00_1765 =
																												(BgL_iz00_1731 -
																												(BgL_lenyz00_1687 -
																													((long) 1)));
																											BgL_arg1611z00_1766 =
																												(BgL_qz00_1740 -
																												((long) 1));
																											{	/* Unsafe/bignumber.scm 731 */
																												int BgL_iz00_4528;
																												int BgL_digitz00_4529;

																												BgL_iz00_4528 =
																													(int)
																													(BgL_arg1608z00_1765);
																												BgL_digitz00_4529 =
																													(int)
																													(BgL_arg1611z00_1766);
																												{	/* Unsafe/bignumber.scm 236 */
																													obj_t
																														BgL_arg1250z00_4530;
																													uint16_t
																														BgL_arg1252z00_4531;
																													BgL_arg1250z00_4530 =
																														BGL_BIGNUM_U16VECT
																														(BgL_rz00_1688);
																													{	/* Unsafe/bignumber.scm 236 */
																														uint16_t
																															BgL_res2712z00_4533;
																														{	/* Unsafe/bignumber.scm 236 */
																															long
																																BgL_tmpz00_7630;
																															BgL_tmpz00_7630 =
																																(long)
																																(BgL_digitz00_4529);
																															BgL_res2712z00_4533
																																=
																																(uint16_t)
																																(BgL_tmpz00_7630);
																														}
																														BgL_arg1252z00_4531
																															=
																															BgL_res2712z00_4533;
																													}
																													{	/* Unsafe/bignumber.scm 236 */
																														long
																															BgL_tmpz00_7633;
																														BgL_tmpz00_7633 =
																															(long)
																															(BgL_iz00_4528);
																														BGL_U16VSET
																															(BgL_arg1250z00_4530,
																															BgL_tmpz00_7633,
																															BgL_arg1252z00_4531);
																													} BUNSPEC;
																										}}}
																										{	/* Unsafe/bignumber.scm 735 */
																											long BgL_g1055z00_1768;

																											BgL_g1055z00_1768 =
																												(BgL_iz00_1731 -
																												(BgL_lenyz00_1687 -
																													((long) 1)));
																											{
																												long BgL_jz00_1770;
																												long BgL_kz00_1771;
																												long BgL_cz00_1772;

																												BgL_jz00_1770 =
																													((long) 1);
																												BgL_kz00_1771 =
																													BgL_g1055z00_1768;
																												BgL_cz00_1772 =
																													((long) 0);
																											BgL_zc3z04anonymousza31613ze3z87_1773:
																												if (
																													(BgL_jz00_1770 <
																														BgL_lenyz00_1687))
																													{	/* Unsafe/bignumber.scm 740 */
																														long BgL_wz00_1775;

																														{	/* Unsafe/bignumber.scm 742 */
																															long
																																BgL_arg1621z00_1782;
																															{	/* Unsafe/bignumber.scm 742 */
																																long
																																	BgL_arg1623z00_1783;
																																long
																																	BgL_arg1624z00_1784;
																																{	/* Unsafe/bignumber.scm 742 */
																																	int
																																		BgL_iz00_4543;
																																	BgL_iz00_4543
																																		=
																																		(int)
																																		(BgL_kz00_1771);
																																	{	/* Unsafe/bignumber.scm 234 */
																																		uint16_t
																																			BgL_arg1246z00_4544;
																																		{	/* Unsafe/bignumber.scm 234 */
																																			obj_t
																																				BgL_arg1247z00_4545;
																																			BgL_arg1247z00_4545
																																				=
																																				BGL_BIGNUM_U16VECT
																																				(BgL_nxz00_1699);
																																			{	/* Unsafe/bignumber.scm 234 */
																																				long
																																					BgL_tmpz00_7642;
																																				BgL_tmpz00_7642
																																					=
																																					(long)
																																					(BgL_iz00_4543);
																																				BgL_arg1246z00_4544
																																					=
																																					BGL_U16VREF
																																					(BgL_arg1247z00_4545,
																																					BgL_tmpz00_7642);
																																		}}
																																		{	/* Unsafe/bignumber.scm 234 */
																																			long
																																				BgL_res2717z00_4550;
																																			{	/* Unsafe/bignumber.scm 234 */
																																				long
																																					BgL_arg2198z00_4547;
																																				BgL_arg2198z00_4547
																																					=
																																					(long)
																																					(BgL_arg1246z00_4544);
																																				{	/* Unsafe/bignumber.scm 234 */
																																					long
																																						BgL_res2716z00_4549;
																																					BgL_res2716z00_4549
																																						=
																																						(long)
																																						(BgL_arg2198z00_4547);
																																					BgL_res2717z00_4550
																																						=
																																						BgL_res2716z00_4549;
																																			}}
																																			BgL_arg1623z00_1783
																																				=
																																				BgL_res2717z00_4550;
																																}}}
																																{	/* Unsafe/bignumber.scm 743 */
																																	int
																																		BgL_iz00_4552;
																																	BgL_iz00_4552
																																		=
																																		(int)
																																		(BgL_jz00_1770);
																																	{	/* Unsafe/bignumber.scm 234 */
																																		uint16_t
																																			BgL_arg1246z00_4553;
																																		{	/* Unsafe/bignumber.scm 234 */
																																			obj_t
																																				BgL_arg1247z00_4554;
																																			BgL_arg1247z00_4554
																																				=
																																				BGL_BIGNUM_U16VECT
																																				(BgL_nyz00_1700);
																																			{	/* Unsafe/bignumber.scm 234 */
																																				long
																																					BgL_tmpz00_7649;
																																				BgL_tmpz00_7649
																																					=
																																					(long)
																																					(BgL_iz00_4552);
																																				BgL_arg1246z00_4553
																																					=
																																					BGL_U16VREF
																																					(BgL_arg1247z00_4554,
																																					BgL_tmpz00_7649);
																																		}}
																																		{	/* Unsafe/bignumber.scm 234 */
																																			long
																																				BgL_res2719z00_4559;
																																			{	/* Unsafe/bignumber.scm 234 */
																																				long
																																					BgL_arg2198z00_4556;
																																				BgL_arg2198z00_4556
																																					=
																																					(long)
																																					(BgL_arg1246z00_4553);
																																				{	/* Unsafe/bignumber.scm 234 */
																																					long
																																						BgL_res2718z00_4558;
																																					BgL_res2718z00_4558
																																						=
																																						(long)
																																						(BgL_arg2198z00_4556);
																																					BgL_res2719z00_4559
																																						=
																																						BgL_res2718z00_4558;
																																			}}
																																			BgL_arg1624z00_1784
																																				=
																																				BgL_res2719z00_4559;
																																}}}
																																BgL_arg1621z00_1782
																																	=
																																	(BgL_arg1623z00_1783
																																	+
																																	BgL_arg1624z00_1784);
																															}
																															BgL_wz00_1775 =
																																(BgL_arg1621z00_1782
																																+
																																BgL_cz00_1772);
																														}
																														{	/* Unsafe/bignumber.scm 748 */
																															obj_t
																																BgL_arg1615z00_1776;
																															BgL_arg1615z00_1776
																																=
																																BGl_moduloz00zz__r4_numbers_6_5_fixnumz00
																																(BINT
																																(BgL_wz00_1775),
																																BINT(((long)
																																		16384)));
																															{	/* Unsafe/bignumber.scm 745 */
																																int
																																	BgL_iz00_4567;
																																int
																																	BgL_digitz00_4568;
																																BgL_iz00_4567 =
																																	(int)
																																	(BgL_kz00_1771);
																																BgL_digitz00_4568
																																	=
																																	CINT
																																	(BgL_arg1615z00_1776);
																																{	/* Unsafe/bignumber.scm 236 */
																																	obj_t
																																		BgL_arg1250z00_4569;
																																	uint16_t
																																		BgL_arg1252z00_4570;
																																	BgL_arg1250z00_4569
																																		=
																																		BGL_BIGNUM_U16VECT
																																		(BgL_nxz00_1699);
																																	{	/* Unsafe/bignumber.scm 236 */
																																		uint16_t
																																			BgL_res2722z00_4572;
																																		{	/* Unsafe/bignumber.scm 236 */
																																			long
																																				BgL_tmpz00_7662;
																																			BgL_tmpz00_7662
																																				=
																																				(long)
																																				(BgL_digitz00_4568);
																																			BgL_res2722z00_4572
																																				=
																																				(uint16_t)
																																				(BgL_tmpz00_7662);
																																		}
																																		BgL_arg1252z00_4570
																																			=
																																			BgL_res2722z00_4572;
																																	}
																																	{	/* Unsafe/bignumber.scm 236 */
																																		long
																																			BgL_tmpz00_7665;
																																		BgL_tmpz00_7665
																																			=
																																			(long)
																																			(BgL_iz00_4567);
																																		BGL_U16VSET
																																			(BgL_arg1250z00_4569,
																																			BgL_tmpz00_7665,
																																			BgL_arg1252z00_4570);
																																	} BUNSPEC;
																														}}}
																														{	/* Unsafe/bignumber.scm 750 */
																															long
																																BgL_arg1617z00_1778;
																															long
																																BgL_arg1618z00_1779;
																															long
																																BgL_arg1619z00_1780;
																															BgL_arg1617z00_1778
																																=
																																(BgL_jz00_1770 +
																																((long) 1));
																															BgL_arg1618z00_1779
																																=
																																(BgL_kz00_1771 +
																																((long) 1));
																															{	/* Unsafe/bignumber.scm 752 */
																																long
																																	BgL_res2725z00_4579;
																																BgL_res2725z00_4579
																																	=
																																	(BgL_wz00_1775
																																	/
																																	((long)
																																		16384));
																																BgL_arg1619z00_1780
																																	=
																																	BgL_res2725z00_4579;
																															}
																															{
																																long
																																	BgL_cz00_7673;
																																long
																																	BgL_kz00_7672;
																																long
																																	BgL_jz00_7671;
																																BgL_jz00_7671 =
																																	BgL_arg1617z00_1778;
																																BgL_kz00_7672 =
																																	BgL_arg1618z00_1779;
																																BgL_cz00_7673 =
																																	BgL_arg1619z00_1780;
																																BgL_cz00_1772 =
																																	BgL_cz00_7673;
																																BgL_kz00_1771 =
																																	BgL_kz00_7672;
																																BgL_jz00_1770 =
																																	BgL_jz00_7671;
																																goto
																																	BgL_zc3z04anonymousza31613ze3z87_1773;
																															}
																														}
																													}
																												else
																													{	/* Unsafe/bignumber.scm 757 */
																														obj_t
																															BgL_arg1626z00_1785;
																														{	/* Unsafe/bignumber.scm 757 */
																															long
																																BgL_arg1627z00_1786;
																															{	/* Unsafe/bignumber.scm 757 */
																																long
																																	BgL_arg1629z00_1788;
																																{	/* Unsafe/bignumber.scm 757 */
																																	int
																																		BgL_iz00_4581;
																																	BgL_iz00_4581
																																		=
																																		(int)
																																		(BgL_kz00_1771);
																																	{	/* Unsafe/bignumber.scm 234 */
																																		uint16_t
																																			BgL_arg1246z00_4582;
																																		{	/* Unsafe/bignumber.scm 234 */
																																			obj_t
																																				BgL_arg1247z00_4583;
																																			BgL_arg1247z00_4583
																																				=
																																				BGL_BIGNUM_U16VECT
																																				(BgL_nxz00_1699);
																																			{	/* Unsafe/bignumber.scm 234 */
																																				long
																																					BgL_tmpz00_7676;
																																				BgL_tmpz00_7676
																																					=
																																					(long)
																																					(BgL_iz00_4581);
																																				BgL_arg1246z00_4582
																																					=
																																					BGL_U16VREF
																																					(BgL_arg1247z00_4583,
																																					BgL_tmpz00_7676);
																																		}}
																																		{	/* Unsafe/bignumber.scm 234 */
																																			long
																																				BgL_res2727z00_4588;
																																			{	/* Unsafe/bignumber.scm 234 */
																																				long
																																					BgL_arg2198z00_4585;
																																				BgL_arg2198z00_4585
																																					=
																																					(long)
																																					(BgL_arg1246z00_4582);
																																				{	/* Unsafe/bignumber.scm 234 */
																																					long
																																						BgL_res2726z00_4587;
																																					BgL_res2726z00_4587
																																						=
																																						(long)
																																						(BgL_arg2198z00_4585);
																																					BgL_res2727z00_4588
																																						=
																																						BgL_res2726z00_4587;
																																			}}
																																			BgL_arg1629z00_1788
																																				=
																																				BgL_res2727z00_4588;
																																}}}
																																BgL_arg1627z00_1786
																																	=
																																	(BgL_arg1629z00_1788
																																	+
																																	BgL_cz00_1772);
																															}
																															BgL_arg1626z00_1785
																																=
																																BGl_moduloz00zz__r4_numbers_6_5_fixnumz00
																																(BINT
																																(BgL_arg1627z00_1786),
																																BINT(((long)
																																		16384)));
																														}
																														{	/* Unsafe/bignumber.scm 753 */
																															int BgL_iz00_4593;
																															int
																																BgL_digitz00_4594;
																															BgL_iz00_4593 =
																																(int)
																																(BgL_kz00_1771);
																															BgL_digitz00_4594
																																=
																																CINT
																																(BgL_arg1626z00_1785);
																															{	/* Unsafe/bignumber.scm 236 */
																																obj_t
																																	BgL_arg1250z00_4595;
																																uint16_t
																																	BgL_arg1252z00_4596;
																																BgL_arg1250z00_4595
																																	=
																																	BGL_BIGNUM_U16VECT
																																	(BgL_nxz00_1699);
																																{	/* Unsafe/bignumber.scm 236 */
																																	uint16_t
																																		BgL_res2729z00_4598;
																																	{	/* Unsafe/bignumber.scm 236 */
																																		long
																																			BgL_tmpz00_7688;
																																		BgL_tmpz00_7688
																																			=
																																			(long)
																																			(BgL_digitz00_4594);
																																		BgL_res2729z00_4598
																																			=
																																			(uint16_t)
																																			(BgL_tmpz00_7688);
																																	}
																																	BgL_arg1252z00_4596
																																		=
																																		BgL_res2729z00_4598;
																																}
																																{	/* Unsafe/bignumber.scm 236 */
																																	long
																																		BgL_tmpz00_7691;
																																	BgL_tmpz00_7691
																																		=
																																		(long)
																																		(BgL_iz00_4593);
																																	BGL_U16VSET
																																		(BgL_arg1250z00_4595,
																																		BgL_tmpz00_7691,
																																		BgL_arg1252z00_4596);
																																} BUNSPEC;
																									}}}}}}
																								else
																									{	/* Unsafe/bignumber.scm 759 */
																										long BgL_arg1631z00_1791;

																										BgL_arg1631z00_1791 =
																											(BgL_iz00_1731 -
																											(BgL_lenyz00_1687 -
																												((long) 1)));
																										{	/* Unsafe/bignumber.scm 759 */
																											int BgL_iz00_4605;
																											int BgL_digitz00_4606;

																											BgL_iz00_4605 =
																												(int)
																												(BgL_arg1631z00_1791);
																											BgL_digitz00_4606 =
																												(int) (BgL_qz00_1740);
																											{	/* Unsafe/bignumber.scm 236 */
																												obj_t
																													BgL_arg1250z00_4607;
																												uint16_t
																													BgL_arg1252z00_4608;
																												BgL_arg1250z00_4607 =
																													BGL_BIGNUM_U16VECT
																													(BgL_rz00_1688);
																												{	/* Unsafe/bignumber.scm 236 */
																													uint16_t
																														BgL_res2732z00_4610;
																													{	/* Unsafe/bignumber.scm 236 */
																														long
																															BgL_tmpz00_7699;
																														BgL_tmpz00_7699 =
																															(long)
																															(BgL_digitz00_4606);
																														BgL_res2732z00_4610
																															=
																															(uint16_t)
																															(BgL_tmpz00_7699);
																													}
																													BgL_arg1252z00_4608 =
																														BgL_res2732z00_4610;
																												}
																												{	/* Unsafe/bignumber.scm 236 */
																													long BgL_tmpz00_7702;

																													BgL_tmpz00_7702 =
																														(long)
																														(BgL_iz00_4605);
																													BGL_U16VSET
																														(BgL_arg1250z00_4607,
																														BgL_tmpz00_7702,
																														BgL_arg1252z00_4608);
																												} BUNSPEC;
																									}}}
																								{
																									long BgL_iz00_7705;

																									BgL_iz00_7705 =
																										(BgL_iz00_1731 -
																										((long) 1));
																									BgL_iz00_1731 = BgL_iz00_7705;
																									goto
																										BgL_zc3z04anonymousza31581ze3z87_1732;
																								}
																							}
																					}
																				}
																			}
																		}
																	}
															}
															{	/* Unsafe/bignumber.scm 762 */
																long BgL_g1056z00_1831;

																BgL_g1056z00_1831 =
																	(BgL_lenyz00_1687 - ((long) 1));
																{
																	long BgL_iz00_1833;
																	long BgL_kz00_1834;

																	BgL_iz00_1833 = BgL_g1056z00_1831;
																	BgL_kz00_1834 = ((long) 0);
																BgL_zc3z04anonymousza31663ze3z87_1835:
																	if ((((long) 0) < BgL_iz00_1833))
																		{	/* Unsafe/bignumber.scm 764 */
																			long BgL_wz00_1837;

																			{	/* Unsafe/bignumber.scm 764 */
																				long BgL_arg1669z00_1841;
																				long BgL_arg1672z00_1842;

																				BgL_arg1669z00_1841 =
																					(BgL_kz00_1834 * ((long) 16384));
																				{	/* Unsafe/bignumber.scm 765 */
																					int BgL_iz00_4621;

																					BgL_iz00_4621 = (int) (BgL_iz00_1833);
																					{	/* Unsafe/bignumber.scm 234 */
																						uint16_t BgL_arg1246z00_4622;

																						{	/* Unsafe/bignumber.scm 234 */
																							obj_t BgL_arg1247z00_4623;

																							BgL_arg1247z00_4623 =
																								BGL_BIGNUM_U16VECT
																								(BgL_nxz00_1699);
																							{	/* Unsafe/bignumber.scm 234 */
																								long BgL_tmpz00_7713;

																								BgL_tmpz00_7713 =
																									(long) (BgL_iz00_4621);
																								BgL_arg1246z00_4622 =
																									BGL_U16VREF
																									(BgL_arg1247z00_4623,
																									BgL_tmpz00_7713);
																						}}
																						{	/* Unsafe/bignumber.scm 234 */
																							long BgL_res2738z00_4628;

																							{	/* Unsafe/bignumber.scm 234 */
																								long BgL_arg2198z00_4625;

																								BgL_arg2198z00_4625 =
																									(long) (BgL_arg1246z00_4622);
																								{	/* Unsafe/bignumber.scm 234 */
																									long BgL_res2737z00_4627;

																									BgL_res2737z00_4627 =
																										(long)
																										(BgL_arg2198z00_4625);
																									BgL_res2738z00_4628 =
																										BgL_res2737z00_4627;
																							}}
																							BgL_arg1672z00_1842 =
																								BgL_res2738z00_4628;
																				}}}
																				BgL_wz00_1837 =
																					(BgL_arg1669z00_1841 +
																					BgL_arg1672z00_1842);
																			}
																			{	/* Unsafe/bignumber.scm 766 */
																				long BgL_arg1665z00_1838;

																				{	/* Unsafe/bignumber.scm 766 */
																					long BgL_res2740z00_4634;

																					BgL_res2740z00_4634 =
																						(BgL_wz00_1837 / BgL_shiftz00_1692);
																					BgL_arg1665z00_1838 =
																						BgL_res2740z00_4634;
																				}
																				{	/* Unsafe/bignumber.scm 766 */
																					int BgL_iz00_4636;
																					int BgL_digitz00_4637;

																					BgL_iz00_4636 = (int) (BgL_iz00_1833);
																					BgL_digitz00_4637 =
																						(int) (BgL_arg1665z00_1838);
																					{	/* Unsafe/bignumber.scm 236 */
																						obj_t BgL_arg1250z00_4638;
																						uint16_t BgL_arg1252z00_4639;

																						BgL_arg1250z00_4638 =
																							BGL_BIGNUM_U16VECT
																							(BgL_nxz00_1699);
																						{	/* Unsafe/bignumber.scm 236 */
																							uint16_t BgL_res2741z00_4641;

																							{	/* Unsafe/bignumber.scm 236 */
																								long BgL_tmpz00_7723;

																								BgL_tmpz00_7723 =
																									(long) (BgL_digitz00_4637);
																								BgL_res2741z00_4641 =
																									(uint16_t) (BgL_tmpz00_7723);
																							}
																							BgL_arg1252z00_4639 =
																								BgL_res2741z00_4641;
																						}
																						{	/* Unsafe/bignumber.scm 236 */
																							long BgL_tmpz00_7726;

																							BgL_tmpz00_7726 =
																								(long) (BgL_iz00_4636);
																							BGL_U16VSET(BgL_arg1250z00_4638,
																								BgL_tmpz00_7726,
																								BgL_arg1252z00_4639);
																						} BUNSPEC;
																			}}}
																			{	/* Unsafe/bignumber.scm 767 */
																				long BgL_arg1667z00_1839;
																				long BgL_arg1668z00_1840;

																				BgL_arg1667z00_1839 =
																					(BgL_iz00_1833 - ((long) 1));
																				{	/* Unsafe/bignumber.scm 768 */
																					long BgL_res2748z00_4662;

																					{	/* Unsafe/bignumber.scm 768 */
																						long BgL_n1z00_4644;
																						long BgL_n2z00_4645;

																						BgL_n1z00_4644 = BgL_wz00_1837;
																						BgL_n2z00_4645 = BgL_shiftz00_1692;
																						{	/* Unsafe/bignumber.scm 768 */
																							bool_t BgL_test3415z00_7730;

																							{	/* Unsafe/bignumber.scm 768 */
																								long BgL_arg2102z00_4647;

																								BgL_arg2102z00_4647 =
																									(((BgL_n1z00_4644) |
																										(BgL_n2z00_4645)) &
																									-2147483648);
																								BgL_test3415z00_7730 =
																									(BgL_arg2102z00_4647 ==
																									((long) 0));
																							}
																							if (BgL_test3415z00_7730)
																								{	/* Unsafe/bignumber.scm 768 */
																									int32_t BgL_arg2098z00_4648;

																									{	/* Unsafe/bignumber.scm 768 */
																										int32_t BgL_arg2100z00_4649;
																										int32_t BgL_arg2101z00_4650;

																										{	/* Unsafe/bignumber.scm 768 */
																											int32_t
																												BgL_res2744z00_4654;
																											BgL_res2744z00_4654 =
																												(int32_t)
																												(BgL_n1z00_4644);
																											BgL_arg2100z00_4649 =
																												BgL_res2744z00_4654;
																										}
																										{	/* Unsafe/bignumber.scm 768 */
																											int32_t
																												BgL_res2745z00_4656;
																											BgL_res2745z00_4656 =
																												(int32_t)
																												(BgL_n2z00_4645);
																											BgL_arg2101z00_4650 =
																												BgL_res2745z00_4656;
																										}
																										BgL_arg2098z00_4648 =
																											(BgL_arg2100z00_4649 %
																											BgL_arg2101z00_4650);
																									}
																									{	/* Unsafe/bignumber.scm 768 */
																										long BgL_res2747z00_4661;

																										{	/* Unsafe/bignumber.scm 768 */
																											long BgL_arg2197z00_4658;

																											BgL_arg2197z00_4658 =
																												(long)
																												(BgL_arg2098z00_4648);
																											{	/* Unsafe/bignumber.scm 768 */
																												long
																													BgL_res2746z00_4660;
																												BgL_res2746z00_4660 =
																													(long)
																													(BgL_arg2197z00_4658);
																												BgL_res2747z00_4661 =
																													BgL_res2746z00_4660;
																										}}
																										BgL_res2748z00_4662 =
																											BgL_res2747z00_4661;
																								}}
																							else
																								{	/* Unsafe/bignumber.scm 768 */
																									BgL_res2748z00_4662 =
																										(BgL_n1z00_4644 %
																										BgL_n2z00_4645);
																								}
																						}
																					}
																					BgL_arg1668z00_1840 =
																						BgL_res2748z00_4662;
																				}
																				{
																					long BgL_kz00_7740;
																					long BgL_iz00_7739;

																					BgL_iz00_7739 = BgL_arg1667z00_1839;
																					BgL_kz00_7740 = BgL_arg1668z00_1840;
																					BgL_kz00_1834 = BgL_kz00_7740;
																					BgL_iz00_1833 = BgL_iz00_7739;
																					goto
																						BgL_zc3z04anonymousza31663ze3z87_1835;
																				}
																			}
																		}
																	else
																		{	/* Unsafe/bignumber.scm 763 */
																			((bool_t) 0);
																		}
																}
															}
															return
																MAKE_YOUNG_PAIR
																(BGl_bignumzd2removezd2leadingzd2za7eroesz75zz__bignumz00
																(BgL_rz00_1688),
																BGl_bignumzd2removezd2leadingzd2za7eroesz75zz__bignumz00
																(BgL_nxz00_1699));
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



/* $$divrembx */
	BGL_EXPORTED_DEF obj_t bgl_bignum_div(obj_t BgL_xz00_64, obj_t BgL_yz00_65)
	{
		{	/* Unsafe/bignumber.scm 792 */
			{	/* Unsafe/bignumber.scm 793 */
				obj_t BgL_vz00_4742;

				BgL_vz00_4742 =
					BGl_bignumzd2divzd2zz__bignumz00(BgL_xz00_64, BgL_yz00_65);
				{	/* Unsafe/bignumber.scm 794 */
					obj_t BgL_val0_1097z00_4743;
					obj_t BgL_val1_1098z00_4744;

					BgL_val0_1097z00_4743 = CAR(((obj_t) BgL_vz00_4742));
					BgL_val1_1098z00_4744 = CDR(((obj_t) BgL_vz00_4742));
					{	/* Unsafe/bignumber.scm 794 */
						int BgL_res2772z00_4747;

						{	/* Unsafe/bignumber.scm 794 */
							int BgL_tmpz00_7749;

							BgL_tmpz00_7749 = (int) (((long) 2));
							BgL_res2772z00_4747 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_7749);
						} BgL_res2772z00_4747;
					}
					{	/* Unsafe/bignumber.scm 794 */
						int BgL_tmpz00_7752;

						BgL_tmpz00_7752 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_7752, BgL_val1_1098z00_4744);
					}
					return BgL_val0_1097z00_4743;
				}
			}
		}

	}



/* &$$divrembx */
	obj_t BGl_z62z42z42divrembxz62zz__bignumz00(obj_t BgL_envz00_6064,
		obj_t BgL_xz00_6065, obj_t BgL_yz00_6066)
	{
		{	/* Unsafe/bignumber.scm 792 */
			{	/* Unsafe/bignumber.scm 793 */
				obj_t BgL_auxz00_7762;
				obj_t BgL_auxz00_7755;

				if (BIGNUMP(BgL_yz00_6066))
					{	/* Unsafe/bignumber.scm 793 */
						BgL_auxz00_7762 = BgL_yz00_6066;
					}
				else
					{
						obj_t BgL_auxz00_7765;

						BgL_auxz00_7765 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
							BINT(((long) 25654)), BGl_string3213z00zz__bignumz00,
							BGl_string3200z00zz__bignumz00, BgL_yz00_6066);
						FAILURE(BgL_auxz00_7765, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_xz00_6065))
					{	/* Unsafe/bignumber.scm 793 */
						BgL_auxz00_7755 = BgL_xz00_6065;
					}
				else
					{
						obj_t BgL_auxz00_7758;

						BgL_auxz00_7758 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
							BINT(((long) 25654)), BGl_string3213z00zz__bignumz00,
							BGl_string3200z00zz__bignumz00, BgL_xz00_6065);
						FAILURE(BgL_auxz00_7758, BFALSE, BFALSE);
					}
				return bgl_bignum_div(BgL_auxz00_7755, BgL_auxz00_7762);
			}
		}

	}



/* $$quotientbx */
	BGL_EXPORTED_DEF obj_t bgl_bignum_quotient(obj_t BgL_xz00_66,
		obj_t BgL_yz00_67)
	{
		{	/* Unsafe/bignumber.scm 796 */
			{	/* Unsafe/bignumber.scm 797 */
				obj_t BgL_arg1700z00_4748;

				{	/* Unsafe/bignumber.scm 797 */
					obj_t BgL_arg1701z00_4749;

					BgL_arg1701z00_4749 =
						BGl_bignumzd2divzd2zz__bignumz00(BgL_xz00_66, BgL_yz00_67);
					BgL_arg1700z00_4748 = CAR(((obj_t) BgL_arg1701z00_4749));
				}
				return BgL_arg1700z00_4748;
			}
		}

	}



/* &$$quotientbx */
	obj_t BGl_z62z42z42quotientbxz62zz__bignumz00(obj_t BgL_envz00_6067,
		obj_t BgL_xz00_6068, obj_t BgL_yz00_6069)
	{
		{	/* Unsafe/bignumber.scm 796 */
			{	/* Unsafe/bignumber.scm 797 */
				obj_t BgL_auxz00_7780;
				obj_t BgL_auxz00_7773;

				if (BIGNUMP(BgL_yz00_6069))
					{	/* Unsafe/bignumber.scm 797 */
						BgL_auxz00_7780 = BgL_yz00_6069;
					}
				else
					{
						obj_t BgL_auxz00_7783;

						BgL_auxz00_7783 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
							BINT(((long) 25769)), BGl_string3214z00zz__bignumz00,
							BGl_string3200z00zz__bignumz00, BgL_yz00_6069);
						FAILURE(BgL_auxz00_7783, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_xz00_6068))
					{	/* Unsafe/bignumber.scm 797 */
						BgL_auxz00_7773 = BgL_xz00_6068;
					}
				else
					{
						obj_t BgL_auxz00_7776;

						BgL_auxz00_7776 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
							BINT(((long) 25769)), BGl_string3214z00zz__bignumz00,
							BGl_string3200z00zz__bignumz00, BgL_xz00_6068);
						FAILURE(BgL_auxz00_7776, BFALSE, BFALSE);
					}
				return bgl_bignum_quotient(BgL_auxz00_7773, BgL_auxz00_7780);
			}
		}

	}



/* $$remainderbx */
	BGL_EXPORTED_DEF obj_t bgl_bignum_remainder(obj_t BgL_xz00_68,
		obj_t BgL_yz00_69)
	{
		{	/* Unsafe/bignumber.scm 799 */
			{	/* Unsafe/bignumber.scm 800 */
				obj_t BgL_arg1702z00_4751;

				{	/* Unsafe/bignumber.scm 800 */
					obj_t BgL_arg1704z00_4752;

					BgL_arg1704z00_4752 =
						BGl_bignumzd2divzd2zz__bignumz00(BgL_xz00_68, BgL_yz00_69);
					BgL_arg1702z00_4751 = CDR(((obj_t) BgL_arg1704z00_4752));
				}
				return BgL_arg1702z00_4751;
			}
		}

	}



/* &$$remainderbx */
	obj_t BGl_z62z42z42remainderbxz62zz__bignumz00(obj_t BgL_envz00_6070,
		obj_t BgL_xz00_6071, obj_t BgL_yz00_6072)
	{
		{	/* Unsafe/bignumber.scm 799 */
			{	/* Unsafe/bignumber.scm 800 */
				obj_t BgL_auxz00_7798;
				obj_t BgL_auxz00_7791;

				if (BIGNUMP(BgL_yz00_6072))
					{	/* Unsafe/bignumber.scm 800 */
						BgL_auxz00_7798 = BgL_yz00_6072;
					}
				else
					{
						obj_t BgL_auxz00_7801;

						BgL_auxz00_7801 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
							BINT(((long) 25844)), BGl_string3215z00zz__bignumz00,
							BGl_string3200z00zz__bignumz00, BgL_yz00_6072);
						FAILURE(BgL_auxz00_7801, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_xz00_6071))
					{	/* Unsafe/bignumber.scm 800 */
						BgL_auxz00_7791 = BgL_xz00_6071;
					}
				else
					{
						obj_t BgL_auxz00_7794;

						BgL_auxz00_7794 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
							BINT(((long) 25844)), BGl_string3215z00zz__bignumz00,
							BGl_string3200z00zz__bignumz00, BgL_xz00_6071);
						FAILURE(BgL_auxz00_7794, BFALSE, BFALSE);
					}
				return bgl_bignum_remainder(BgL_auxz00_7791, BgL_auxz00_7798);
			}
		}

	}



/* $$absbx */
	BGL_EXPORTED_DEF obj_t bgl_bignum_abs(obj_t BgL_xz00_80)
	{
		{	/* Unsafe/bignumber.scm 831 */
			{	/* Unsafe/bignumber.scm 832 */
				bool_t BgL_test3422z00_7806;

				{	/* Unsafe/bignumber.scm 832 */
					bool_t BgL_res2776z00_4767;

					{	/* Unsafe/bignumber.scm 418 */
						long BgL_arg1393z00_4756;

						{	/* Unsafe/bignumber.scm 230 */
							uint16_t BgL_arg1239z00_4758;

							{	/* Unsafe/bignumber.scm 230 */
								obj_t BgL_arg1242z00_4759;

								BgL_arg1242z00_4759 = BGL_BIGNUM_U16VECT(BgL_xz00_80);
								BgL_arg1239z00_4758 =
									BGL_U16VREF(BgL_arg1242z00_4759, ((long) 0));
							}
							{	/* Unsafe/bignumber.scm 230 */
								long BgL_res2774z00_4764;

								{	/* Unsafe/bignumber.scm 230 */
									long BgL_arg2198z00_4761;

									BgL_arg2198z00_4761 = (long) (BgL_arg1239z00_4758);
									{	/* Unsafe/bignumber.scm 230 */
										long BgL_res2773z00_4763;

										BgL_res2773z00_4763 = (long) (BgL_arg2198z00_4761);
										BgL_res2774z00_4764 = BgL_res2773z00_4763;
								}}
								BgL_arg1393z00_4756 = BgL_res2774z00_4764;
						}}
						BgL_res2776z00_4767 = (BgL_arg1393z00_4756 == ((long) 0));
					}
					BgL_test3422z00_7806 = BgL_res2776z00_4767;
				}
				if (BgL_test3422z00_7806)
					{	/* Unsafe/bignumber.scm 832 */
						return
							bgl_bignum_sub(BGl_bignumzd2za7eroz75zz__bignumz00, BgL_xz00_80);
					}
				else
					{	/* Unsafe/bignumber.scm 832 */
						return BgL_xz00_80;
					}
			}
		}

	}



/* &$$absbx */
	obj_t BGl_z62z42z42absbxz62zz__bignumz00(obj_t BgL_envz00_6073,
		obj_t BgL_xz00_6074)
	{
		{	/* Unsafe/bignumber.scm 831 */
			{	/* Unsafe/bignumber.scm 832 */
				obj_t BgL_auxz00_7813;

				if (BIGNUMP(BgL_xz00_6074))
					{	/* Unsafe/bignumber.scm 832 */
						BgL_auxz00_7813 = BgL_xz00_6074;
					}
				else
					{
						obj_t BgL_auxz00_7816;

						BgL_auxz00_7816 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
							BINT(((long) 26685)), BGl_string3216z00zz__bignumz00,
							BGl_string3200z00zz__bignumz00, BgL_xz00_6074);
						FAILURE(BgL_auxz00_7816, BFALSE, BFALSE);
					}
				return bgl_bignum_abs(BgL_auxz00_7813);
			}
		}

	}



/* $$gcdbx */
	BGL_EXPORTED_DEF obj_t bgl_bignum_gcd(obj_t BgL_xz00_81, obj_t BgL_yz00_82)
	{
		{	/* Unsafe/bignumber.scm 836 */
			{	/* Unsafe/bignumber.scm 837 */
				obj_t BgL_g1057z00_4770;
				obj_t BgL_g1058z00_4771;

				{	/* Unsafe/bignumber.scm 837 */
					obj_t BgL_res2781z00_4786;

					if ((BGl_bignumzd2signzd2zz__bignumz00(BgL_xz00_81) == ((long) 0)))
						{	/* Unsafe/bignumber.scm 832 */
							BgL_res2781z00_4786 =
								bgl_bignum_sub(BGl_bignumzd2za7eroz75zz__bignumz00,
								BgL_xz00_81);
						}
					else
						{	/* Unsafe/bignumber.scm 832 */
							BgL_res2781z00_4786 = BgL_xz00_81;
						}
					BgL_g1057z00_4770 = BgL_res2781z00_4786;
				}
				{	/* Unsafe/bignumber.scm 837 */
					obj_t BgL_res2785z00_4796;

					if ((BGl_bignumzd2signzd2zz__bignumz00(BgL_yz00_82) == ((long) 0)))
						{	/* Unsafe/bignumber.scm 832 */
							BgL_res2785z00_4796 =
								bgl_bignum_sub(BGl_bignumzd2za7eroz75zz__bignumz00,
								BgL_yz00_82);
						}
					else
						{	/* Unsafe/bignumber.scm 832 */
							BgL_res2785z00_4796 = BgL_yz00_82;
						}
					BgL_g1058z00_4771 = BgL_res2785z00_4796;
				}
				if (BXZERO(BgL_g1058z00_4771))
					{	/* Unsafe/bignumber.scm 838 */
						return BgL_g1057z00_4770;
					}
				else
					{	/* Unsafe/bignumber.scm 840 */
						obj_t BgL_arg1733z00_4856;

						BgL_arg1733z00_4856 =
							bgl_bignum_remainder(BgL_g1057z00_4770, BgL_g1058z00_4771);
						{
							obj_t BgL_xz00_4836;
							obj_t BgL_yz00_4837;

							BgL_xz00_4836 = BgL_g1058z00_4771;
							BgL_yz00_4837 = BgL_arg1733z00_4856;
						BgL_loopz00_4835:
							if (
								(BGl_bignumzd2lengthzd2zz__bignumz00(BgL_yz00_4837) ==
									((long) 1)))
								{	/* Unsafe/bignumber.scm 838 */
									return BgL_xz00_4836;
								}
							else
								{	/* Unsafe/bignumber.scm 840 */
									obj_t BgL_arg1733z00_4841;

									{	/* Unsafe/bignumber.scm 840 */
										obj_t BgL_res2797z00_4852;

										{	/* Unsafe/bignumber.scm 800 */
											obj_t BgL_arg1702z00_4849;

											{	/* Unsafe/bignumber.scm 800 */
												obj_t BgL_arg1704z00_4850;

												BgL_arg1704z00_4850 =
													BGl_bignumzd2divzd2zz__bignumz00(BgL_xz00_4836,
													BgL_yz00_4837);
												BgL_arg1702z00_4849 =
													CDR(((obj_t) BgL_arg1704z00_4850));
											}
											BgL_res2797z00_4852 = BgL_arg1702z00_4849;
										}
										BgL_arg1733z00_4841 = BgL_res2797z00_4852;
									}
									if (BXZERO(BgL_arg1733z00_4841))
										{	/* Unsafe/bignumber.scm 838 */
											return BgL_yz00_4837;
										}
									else
										{
											obj_t BgL_yz00_7841;
											obj_t BgL_xz00_7840;

											BgL_xz00_7840 = BgL_arg1733z00_4841;
											BgL_yz00_7841 =
												bgl_bignum_remainder(BgL_yz00_4837,
												BgL_arg1733z00_4841);
											BgL_yz00_4837 = BgL_yz00_7841;
											BgL_xz00_4836 = BgL_xz00_7840;
											goto BgL_loopz00_4835;
										}
								}
						}
					}
			}
		}

	}



/* &$$gcdbx */
	obj_t BGl_z62z42z42gcdbxz62zz__bignumz00(obj_t BgL_envz00_6075,
		obj_t BgL_xz00_6076, obj_t BgL_yz00_6077)
	{
		{	/* Unsafe/bignumber.scm 836 */
			{	/* Unsafe/bignumber.scm 837 */
				obj_t BgL_auxz00_7850;
				obj_t BgL_auxz00_7843;

				if (BIGNUMP(BgL_yz00_6077))
					{	/* Unsafe/bignumber.scm 837 */
						BgL_auxz00_7850 = BgL_yz00_6077;
					}
				else
					{
						obj_t BgL_auxz00_7853;

						BgL_auxz00_7853 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
							BINT(((long) 26763)), BGl_string3217z00zz__bignumz00,
							BGl_string3200z00zz__bignumz00, BgL_yz00_6077);
						FAILURE(BgL_auxz00_7853, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_xz00_6076))
					{	/* Unsafe/bignumber.scm 837 */
						BgL_auxz00_7843 = BgL_xz00_6076;
					}
				else
					{
						obj_t BgL_auxz00_7846;

						BgL_auxz00_7846 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
							BINT(((long) 26763)), BGl_string3217z00zz__bignumz00,
							BGl_string3200z00zz__bignumz00, BgL_xz00_6076);
						FAILURE(BgL_auxz00_7846, BFALSE, BFALSE);
					}
				return bgl_bignum_gcd(BgL_auxz00_7843, BgL_auxz00_7850);
			}
		}

	}



/* $$lcmbx */
	BGL_EXPORTED_DEF obj_t bgl_bignum_lcm(obj_t BgL_xz00_83, obj_t BgL_yz00_84)
	{
		{	/* Unsafe/bignumber.scm 842 */
			{	/* Unsafe/bignumber.scm 843 */
				bool_t BgL_test3431z00_7858;

				{	/* Unsafe/bignumber.scm 843 */
					bool_t BgL_test3432z00_7859;

					{	/* Unsafe/bignumber.scm 843 */
						bool_t BgL_res2802z00_4876;

						{	/* Unsafe/bignumber.scm 415 */
							long BgL_arg1392z00_4863;

							{	/* Unsafe/bignumber.scm 228 */
								long BgL_arg1229z00_4865;

								{	/* Unsafe/bignumber.scm 228 */
									obj_t BgL_arg1232z00_4866;

									BgL_arg1232z00_4866 = BGL_BIGNUM_U16VECT(BgL_xz00_83);
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_res2798z00_4868;

										BgL_res2798z00_4868 =
											BGL_HVECTOR_LENGTH(BgL_arg1232z00_4866);
										BgL_arg1229z00_4865 = BgL_res2798z00_4868;
								}}
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_res2800z00_4873;

									{	/* Unsafe/bignumber.scm 228 */
										uint16_t BgL_xz00_4869;

										BgL_xz00_4869 = (uint16_t) (BgL_arg1229z00_4865);
										{	/* Unsafe/bignumber.scm 228 */
											long BgL_arg2198z00_4870;

											BgL_arg2198z00_4870 = (long) (BgL_xz00_4869);
											{	/* Unsafe/bignumber.scm 228 */
												long BgL_res2799z00_4872;

												BgL_res2799z00_4872 = (long) (BgL_arg2198z00_4870);
												BgL_res2800z00_4873 = BgL_res2799z00_4872;
									}}}
									BgL_arg1392z00_4863 = BgL_res2800z00_4873;
							}}
							BgL_res2802z00_4876 = (BgL_arg1392z00_4863 == ((long) 1));
						}
						BgL_test3432z00_7859 = BgL_res2802z00_4876;
					}
					if (BgL_test3432z00_7859)
						{	/* Unsafe/bignumber.scm 843 */
							BgL_test3431z00_7858 = ((bool_t) 1);
						}
					else
						{	/* Unsafe/bignumber.scm 843 */
							bool_t BgL_res2807z00_4891;

							{	/* Unsafe/bignumber.scm 415 */
								long BgL_arg1392z00_4878;

								{	/* Unsafe/bignumber.scm 228 */
									long BgL_arg1229z00_4880;

									{	/* Unsafe/bignumber.scm 228 */
										obj_t BgL_arg1232z00_4881;

										BgL_arg1232z00_4881 = BGL_BIGNUM_U16VECT(BgL_yz00_84);
										{	/* Unsafe/bignumber.scm 228 */
											long BgL_res2803z00_4883;

											BgL_res2803z00_4883 =
												BGL_HVECTOR_LENGTH(BgL_arg1232z00_4881);
											BgL_arg1229z00_4880 = BgL_res2803z00_4883;
									}}
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_res2805z00_4888;

										{	/* Unsafe/bignumber.scm 228 */
											uint16_t BgL_xz00_4884;

											BgL_xz00_4884 = (uint16_t) (BgL_arg1229z00_4880);
											{	/* Unsafe/bignumber.scm 228 */
												long BgL_arg2198z00_4885;

												BgL_arg2198z00_4885 = (long) (BgL_xz00_4884);
												{	/* Unsafe/bignumber.scm 228 */
													long BgL_res2804z00_4887;

													BgL_res2804z00_4887 = (long) (BgL_arg2198z00_4885);
													BgL_res2805z00_4888 = BgL_res2804z00_4887;
										}}}
										BgL_arg1392z00_4878 = BgL_res2805z00_4888;
								}}
								BgL_res2807z00_4891 = (BgL_arg1392z00_4878 == ((long) 1));
							}
							BgL_test3431z00_7858 = BgL_res2807z00_4891;
				}}
				if (BgL_test3431z00_7858)
					{	/* Unsafe/bignumber.scm 843 */
						return BGl_bignumzd2za7eroz75zz__bignumz00;
					}
				else
					{	/* Unsafe/bignumber.scm 846 */
						obj_t BgL_arg1736z00_4859;
						obj_t BgL_arg1737z00_4860;

						{	/* Unsafe/bignumber.scm 846 */
							obj_t BgL_arg1738z00_4861;

							BgL_arg1738z00_4861 = bgl_bignum_mul(BgL_xz00_83, BgL_yz00_84);
							{	/* Unsafe/bignumber.scm 846 */
								obj_t BgL_res2811z00_4901;

								if (
									(BGl_bignumzd2signzd2zz__bignumz00(BgL_arg1738z00_4861) ==
										((long) 0)))
									{	/* Unsafe/bignumber.scm 832 */
										BgL_res2811z00_4901 =
											bgl_bignum_sub(BGl_bignumzd2za7eroz75zz__bignumz00,
											BgL_arg1738z00_4861);
									}
								else
									{	/* Unsafe/bignumber.scm 832 */
										BgL_res2811z00_4901 = BgL_arg1738z00_4861;
									}
								BgL_arg1736z00_4859 = BgL_res2811z00_4901;
							}
						}
						{	/* Unsafe/bignumber.scm 847 */
							obj_t BgL_res2819z00_4943;

							{	/* Unsafe/bignumber.scm 837 */
								obj_t BgL_g1057z00_4904;
								obj_t BgL_g1058z00_4905;

								{	/* Unsafe/bignumber.scm 837 */
									obj_t BgL_res2813z00_4915;

									if (BXNEGATIVE(BgL_xz00_83))
										{	/* Unsafe/bignumber.scm 832 */
											BgL_res2813z00_4915 =
												bgl_bignum_sub(BGl_bignumzd2za7eroz75zz__bignumz00,
												BgL_xz00_83);
										}
									else
										{	/* Unsafe/bignumber.scm 832 */
											BgL_res2813z00_4915 = BgL_xz00_83;
										}
									BgL_g1057z00_4904 = BgL_res2813z00_4915;
								}
								{	/* Unsafe/bignumber.scm 837 */
									obj_t BgL_res2815z00_4920;

									if (BXNEGATIVE(BgL_yz00_84))
										{	/* Unsafe/bignumber.scm 832 */
											BgL_res2815z00_4920 =
												bgl_bignum_sub(BGl_bignumzd2za7eroz75zz__bignumz00,
												BgL_yz00_84);
										}
									else
										{	/* Unsafe/bignumber.scm 832 */
											BgL_res2815z00_4920 = BgL_yz00_84;
										}
									BgL_g1058z00_4905 = BgL_res2815z00_4920;
								}
								{
									obj_t BgL_xz00_4937;
									obj_t BgL_yz00_4938;

									BgL_xz00_4937 = BgL_g1057z00_4904;
									BgL_yz00_4938 = BgL_g1058z00_4905;
								BgL_loopz00_4936:
									if (BXZERO(BgL_yz00_4938))
										{	/* Unsafe/bignumber.scm 838 */
											BgL_res2819z00_4943 = BgL_xz00_4937;
										}
									else
										{
											obj_t BgL_yz00_7886;
											obj_t BgL_xz00_7885;

											BgL_xz00_7885 = BgL_yz00_4938;
											BgL_yz00_7886 =
												bgl_bignum_remainder(BgL_xz00_4937, BgL_yz00_4938);
											BgL_yz00_4938 = BgL_yz00_7886;
											BgL_xz00_4937 = BgL_xz00_7885;
											goto BgL_loopz00_4936;
										}
								}
							}
							BgL_arg1737z00_4860 = BgL_res2819z00_4943;
						}
						{	/* Unsafe/bignumber.scm 845 */
							obj_t BgL_res2820z00_4949;

							{	/* Unsafe/bignumber.scm 797 */
								obj_t BgL_arg1700z00_4946;

								{	/* Unsafe/bignumber.scm 797 */
									obj_t BgL_arg1701z00_4947;

									BgL_arg1701z00_4947 =
										BGl_bignumzd2divzd2zz__bignumz00(BgL_arg1736z00_4859,
										BgL_arg1737z00_4860);
									BgL_arg1700z00_4946 = CAR(((obj_t) BgL_arg1701z00_4947));
								}
								BgL_res2820z00_4949 = BgL_arg1700z00_4946;
							}
							return BgL_res2820z00_4949;
						}
					}
			}
		}

	}



/* &$$lcmbx */
	obj_t BGl_z62z42z42lcmbxz62zz__bignumz00(obj_t BgL_envz00_6078,
		obj_t BgL_xz00_6079, obj_t BgL_yz00_6080)
	{
		{	/* Unsafe/bignumber.scm 842 */
			{	/* Unsafe/bignumber.scm 843 */
				obj_t BgL_auxz00_7898;
				obj_t BgL_auxz00_7891;

				if (BIGNUMP(BgL_yz00_6080))
					{	/* Unsafe/bignumber.scm 843 */
						BgL_auxz00_7898 = BgL_yz00_6080;
					}
				else
					{
						obj_t BgL_auxz00_7901;

						BgL_auxz00_7901 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
							BINT(((long) 26897)), BGl_string3218z00zz__bignumz00,
							BGl_string3200z00zz__bignumz00, BgL_yz00_6080);
						FAILURE(BgL_auxz00_7901, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_xz00_6079))
					{	/* Unsafe/bignumber.scm 843 */
						BgL_auxz00_7891 = BgL_xz00_6079;
					}
				else
					{
						obj_t BgL_auxz00_7894;

						BgL_auxz00_7894 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
							BINT(((long) 26897)), BGl_string3218z00zz__bignumz00,
							BGl_string3200z00zz__bignumz00, BgL_xz00_6079);
						FAILURE(BgL_auxz00_7894, BFALSE, BFALSE);
					}
				return bgl_bignum_lcm(BgL_auxz00_7891, BgL_auxz00_7898);
			}
		}

	}



/* bignum-expt */
	obj_t BGl_bignumzd2exptzd2zz__bignumz00(obj_t BgL_xz00_85, obj_t BgL_yz00_86)
	{
		{	/* Unsafe/bignumber.scm 852 */
		BGl_bignumzd2exptzd2zz__bignumz00:
			{	/* Unsafe/bignumber.scm 853 */
				bool_t BgL_test3439z00_7906;

				{	/* Unsafe/bignumber.scm 853 */
					bool_t BgL_res2825z00_4964;

					{	/* Unsafe/bignumber.scm 415 */
						long BgL_arg1392z00_4951;

						{	/* Unsafe/bignumber.scm 228 */
							long BgL_arg1229z00_4953;

							{	/* Unsafe/bignumber.scm 228 */
								obj_t BgL_arg1232z00_4954;

								BgL_arg1232z00_4954 = BGL_BIGNUM_U16VECT(BgL_yz00_86);
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_res2821z00_4956;

									BgL_res2821z00_4956 = BGL_HVECTOR_LENGTH(BgL_arg1232z00_4954);
									BgL_arg1229z00_4953 = BgL_res2821z00_4956;
							}}
							{	/* Unsafe/bignumber.scm 228 */
								long BgL_res2823z00_4961;

								{	/* Unsafe/bignumber.scm 228 */
									uint16_t BgL_xz00_4957;

									BgL_xz00_4957 = (uint16_t) (BgL_arg1229z00_4953);
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_arg2198z00_4958;

										BgL_arg2198z00_4958 = (long) (BgL_xz00_4957);
										{	/* Unsafe/bignumber.scm 228 */
											long BgL_res2822z00_4960;

											BgL_res2822z00_4960 = (long) (BgL_arg2198z00_4958);
											BgL_res2823z00_4961 = BgL_res2822z00_4960;
								}}}
								BgL_arg1392z00_4951 = BgL_res2823z00_4961;
						}}
						BgL_res2825z00_4964 = (BgL_arg1392z00_4951 == ((long) 1));
					}
					BgL_test3439z00_7906 = BgL_res2825z00_4964;
				}
				if (BgL_test3439z00_7906)
					{	/* Unsafe/bignumber.scm 854 */
						obj_t BgL_res2826z00_4976;

						{	/* Unsafe/bignumber.scm 362 */
							bool_t BgL_test3440z00_7913;

							if ((((long) 1) < ((long) -16)))
								{	/* Unsafe/bignumber.scm 362 */
									BgL_test3440z00_7913 = ((bool_t) 1);
								}
							else
								{	/* Unsafe/bignumber.scm 362 */
									BgL_test3440z00_7913 = (((long) 16) < ((long) 1));
								}
							if (BgL_test3440z00_7913)
								{	/* Unsafe/bignumber.scm 362 */
									BgL_res2826z00_4976 =
										BGl_z42z42fixnumzd2ze3bignumzd2freshze3zz__bignumz00(((long)
											1));
								}
							else
								{	/* Unsafe/bignumber.scm 362 */
									BgL_res2826z00_4976 =
										VECTOR_REF(BGl_preallocatedzd2bignumszd2zz__bignumz00,
										(((long) 1) + ((long) 16)));
						}}
						return BgL_res2826z00_4976;
					}
				else
					{	/* Unsafe/bignumber.scm 855 */
						bool_t BgL_test3442z00_7920;

						{	/* Unsafe/bignumber.scm 855 */
							bool_t BgL_res2831z00_4993;

							{	/* Unsafe/bignumber.scm 424 */
								bool_t BgL__ortest_1046z00_4978;

								BgL__ortest_1046z00_4978 =
									(BGl_bignumzd2lengthzd2zz__bignumz00(BgL_yz00_86) ==
									((long) 1));
								if (BgL__ortest_1046z00_4978)
									{	/* Unsafe/bignumber.scm 424 */
										BgL_res2831z00_4993 = BgL__ortest_1046z00_4978;
									}
								else
									{	/* Unsafe/bignumber.scm 424 */
										long BgL_arg1396z00_4979;

										{	/* Unsafe/bignumber.scm 234 */
											uint16_t BgL_arg1246z00_4986;

											{	/* Unsafe/bignumber.scm 234 */
												obj_t BgL_arg1247z00_4987;

												BgL_arg1247z00_4987 = BGL_BIGNUM_U16VECT(BgL_yz00_86);
												BgL_arg1246z00_4986 =
													BGL_U16VREF(BgL_arg1247z00_4987, ((long) 1));
											}
											{	/* Unsafe/bignumber.scm 234 */
												long BgL_res2830z00_4992;

												{	/* Unsafe/bignumber.scm 234 */
													long BgL_arg2198z00_4989;

													BgL_arg2198z00_4989 = (long) (BgL_arg1246z00_4986);
													{	/* Unsafe/bignumber.scm 234 */
														long BgL_res2829z00_4991;

														BgL_res2829z00_4991 = (long) (BgL_arg2198z00_4989);
														BgL_res2830z00_4992 = BgL_res2829z00_4991;
												}}
												BgL_arg1396z00_4979 = BgL_res2830z00_4992;
										}}
										BgL_res2831z00_4993 =
											BGl_evenzf3zf3zz__r4_numbers_6_5_fixnumz00(BINT
											(BgL_arg1396z00_4979));
							}}
							BgL_test3442z00_7920 = BgL_res2831z00_4993;
						}
						if (BgL_test3442z00_7920)
							{	/* Unsafe/bignumber.scm 857 */
								obj_t BgL_arg1741z00_1926;
								obj_t BgL_arg1742z00_1927;

								BgL_arg1741z00_1926 = bgl_bignum_mul(BgL_xz00_85, BgL_xz00_85);
								{	/* Unsafe/bignumber.scm 858 */
									obj_t BgL_arg1743z00_1928;

									{	/* Unsafe/bignumber.scm 858 */
										obj_t BgL_res2832z00_5005;

										{	/* Unsafe/bignumber.scm 362 */
											bool_t BgL_test3444z00_7931;

											if ((((long) 2) < ((long) -16)))
												{	/* Unsafe/bignumber.scm 362 */
													BgL_test3444z00_7931 = ((bool_t) 1);
												}
											else
												{	/* Unsafe/bignumber.scm 362 */
													BgL_test3444z00_7931 = (((long) 16) < ((long) 2));
												}
											if (BgL_test3444z00_7931)
												{	/* Unsafe/bignumber.scm 362 */
													BgL_res2832z00_5005 =
														BGl_z42z42fixnumzd2ze3bignumzd2freshze3zz__bignumz00
														(((long) 2));
												}
											else
												{	/* Unsafe/bignumber.scm 362 */
													BgL_res2832z00_5005 =
														VECTOR_REF
														(BGl_preallocatedzd2bignumszd2zz__bignumz00,
														(((long) 2) + ((long) 16)));
										}}
										BgL_arg1743z00_1928 = BgL_res2832z00_5005;
									}
									{	/* Unsafe/bignumber.scm 858 */
										obj_t BgL_res2833z00_5011;

										{	/* Unsafe/bignumber.scm 797 */
											obj_t BgL_arg1700z00_5008;

											{	/* Unsafe/bignumber.scm 797 */
												obj_t BgL_arg1701z00_5009;

												BgL_arg1701z00_5009 =
													BGl_bignumzd2divzd2zz__bignumz00(BgL_yz00_86,
													BgL_arg1743z00_1928);
												BgL_arg1700z00_5008 =
													CAR(((obj_t) BgL_arg1701z00_5009));
											}
											BgL_res2833z00_5011 = BgL_arg1700z00_5008;
										}
										BgL_arg1742z00_1927 = BgL_res2833z00_5011;
								}}
								{
									obj_t BgL_yz00_7942;
									obj_t BgL_xz00_7941;

									BgL_xz00_7941 = BgL_arg1741z00_1926;
									BgL_yz00_7942 = BgL_arg1742z00_1927;
									BgL_yz00_86 = BgL_yz00_7942;
									BgL_xz00_85 = BgL_xz00_7941;
									goto BGl_bignumzd2exptzd2zz__bignumz00;
								}
							}
						else
							{	/* Unsafe/bignumber.scm 860 */
								obj_t BgL_arg1744z00_1929;

								{	/* Unsafe/bignumber.scm 860 */
									obj_t BgL_arg1745z00_1930;

									{	/* Unsafe/bignumber.scm 860 */
										obj_t BgL_arg1746z00_1931;

										{	/* Unsafe/bignumber.scm 860 */
											obj_t BgL_res2834z00_5023;

											{	/* Unsafe/bignumber.scm 362 */
												bool_t BgL_test3446z00_7943;

												if ((((long) 1) < ((long) -16)))
													{	/* Unsafe/bignumber.scm 362 */
														BgL_test3446z00_7943 = ((bool_t) 1);
													}
												else
													{	/* Unsafe/bignumber.scm 362 */
														BgL_test3446z00_7943 = (((long) 16) < ((long) 1));
													}
												if (BgL_test3446z00_7943)
													{	/* Unsafe/bignumber.scm 362 */
														BgL_res2834z00_5023 =
															BGl_z42z42fixnumzd2ze3bignumzd2freshze3zz__bignumz00
															(((long) 1));
													}
												else
													{	/* Unsafe/bignumber.scm 362 */
														BgL_res2834z00_5023 =
															VECTOR_REF
															(BGl_preallocatedzd2bignumszd2zz__bignumz00,
															(((long) 1) + ((long) 16)));
											}}
											BgL_arg1746z00_1931 = BgL_res2834z00_5023;
										}
										{	/* Unsafe/bignumber.scm 860 */
											obj_t BgL_res2840z00_5047;

											{	/* Unsafe/bignumber.scm 557 */
												long BgL_arg1477z00_5026;
												long BgL_arg1478z00_5027;

												{	/* Unsafe/bignumber.scm 230 */
													uint16_t BgL_arg1239z00_5030;

													{	/* Unsafe/bignumber.scm 230 */
														obj_t BgL_arg1242z00_5031;

														BgL_arg1242z00_5031 =
															BGL_BIGNUM_U16VECT(BgL_yz00_86);
														BgL_arg1239z00_5030 =
															BGL_U16VREF(BgL_arg1242z00_5031, ((long) 0));
													}
													{	/* Unsafe/bignumber.scm 230 */
														long BgL_res2836z00_5036;

														{	/* Unsafe/bignumber.scm 230 */
															long BgL_arg2198z00_5033;

															BgL_arg2198z00_5033 =
																(long) (BgL_arg1239z00_5030);
															{	/* Unsafe/bignumber.scm 230 */
																long BgL_res2835z00_5035;

																BgL_res2835z00_5035 =
																	(long) (BgL_arg2198z00_5033);
																BgL_res2836z00_5036 = BgL_res2835z00_5035;
														}}
														BgL_arg1477z00_5026 = BgL_res2836z00_5036;
												}}
												{	/* Unsafe/bignumber.scm 557 */
													long BgL_arg1479z00_5028;

													{	/* Unsafe/bignumber.scm 230 */
														uint16_t BgL_arg1239z00_5038;

														{	/* Unsafe/bignumber.scm 230 */
															obj_t BgL_arg1242z00_5039;

															BgL_arg1242z00_5039 =
																BGL_BIGNUM_U16VECT(BgL_arg1746z00_1931);
															BgL_arg1239z00_5038 =
																BGL_U16VREF(BgL_arg1242z00_5039, ((long) 0));
														}
														{	/* Unsafe/bignumber.scm 230 */
															long BgL_res2838z00_5044;

															{	/* Unsafe/bignumber.scm 230 */
																long BgL_arg2198z00_5041;

																BgL_arg2198z00_5041 =
																	(long) (BgL_arg1239z00_5038);
																{	/* Unsafe/bignumber.scm 230 */
																	long BgL_res2837z00_5043;

																	BgL_res2837z00_5043 =
																		(long) (BgL_arg2198z00_5041);
																	BgL_res2838z00_5044 = BgL_res2837z00_5043;
															}}
															BgL_arg1479z00_5028 = BgL_res2838z00_5044;
													}}
													BgL_arg1478z00_5027 =
														(((long) 1) - BgL_arg1479z00_5028);
												}
												BgL_res2840z00_5047 =
													BGl_bignumzd2sum2zd2zz__bignumz00(BgL_yz00_86,
													BgL_arg1746z00_1931, BgL_arg1477z00_5026,
													BgL_arg1478z00_5027);
											}
											BgL_arg1745z00_1930 = BgL_res2840z00_5047;
									}}
									BgL_arg1744z00_1929 =
										BGl_bignumzd2exptzd2zz__bignumz00(BgL_xz00_85,
										BgL_arg1745z00_1930);
								}
								return bgl_bignum_mul(BgL_xz00_85, BgL_arg1744z00_1929);
							}
					}
			}
		}

	}



/* bignum-integer-length */
	long BGl_bignumzd2integerzd2lengthz00zz__bignumz00(obj_t BgL_xz00_88)
	{
		{	/* Unsafe/bignumber.scm 871 */
			{	/* Unsafe/bignumber.scm 872 */
				obj_t BgL_nz00_1933;

				{	/* Unsafe/bignumber.scm 872 */
					bool_t BgL_test3448z00_7962;

					{	/* Unsafe/bignumber.scm 872 */
						bool_t BgL_res2851z00_5097;

						{	/* Unsafe/bignumber.scm 418 */
							long BgL_arg1393z00_5086;

							{	/* Unsafe/bignumber.scm 230 */
								uint16_t BgL_arg1239z00_5088;

								{	/* Unsafe/bignumber.scm 230 */
									obj_t BgL_arg1242z00_5089;

									BgL_arg1242z00_5089 = BGL_BIGNUM_U16VECT(BgL_xz00_88);
									BgL_arg1239z00_5088 =
										BGL_U16VREF(BgL_arg1242z00_5089, ((long) 0));
								}
								{	/* Unsafe/bignumber.scm 230 */
									long BgL_res2849z00_5094;

									{	/* Unsafe/bignumber.scm 230 */
										long BgL_arg2198z00_5091;

										BgL_arg2198z00_5091 = (long) (BgL_arg1239z00_5088);
										{	/* Unsafe/bignumber.scm 230 */
											long BgL_res2848z00_5093;

											BgL_res2848z00_5093 = (long) (BgL_arg2198z00_5091);
											BgL_res2849z00_5094 = BgL_res2848z00_5093;
									}}
									BgL_arg1393z00_5086 = BgL_res2849z00_5094;
							}}
							BgL_res2851z00_5097 = (BgL_arg1393z00_5086 == ((long) 0));
						}
						BgL_test3448z00_7962 = BgL_res2851z00_5097;
					}
					if (BgL_test3448z00_7962)
						{	/* Unsafe/bignumber.scm 872 */
							BgL_nz00_1933 =
								bgl_bignum_sub(bgl_long_to_bignum(((long) -1)), BgL_xz00_88);
						}
					else
						{	/* Unsafe/bignumber.scm 872 */
							BgL_nz00_1933 = BgL_xz00_88;
						}
				}
				{	/* Unsafe/bignumber.scm 872 */
					long BgL_nbzd2digitszd2_1934;

					{	/* Unsafe/bignumber.scm 873 */
						long BgL_arg1756z00_1948;

						{	/* Unsafe/bignumber.scm 228 */
							long BgL_arg1229z00_5100;

							{	/* Unsafe/bignumber.scm 228 */
								obj_t BgL_arg1232z00_5101;

								BgL_arg1232z00_5101 = BGL_BIGNUM_U16VECT(BgL_nz00_1933);
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_res2852z00_5103;

									BgL_res2852z00_5103 = BGL_HVECTOR_LENGTH(BgL_arg1232z00_5101);
									BgL_arg1229z00_5100 = BgL_res2852z00_5103;
							}}
							{	/* Unsafe/bignumber.scm 228 */
								long BgL_res2854z00_5108;

								{	/* Unsafe/bignumber.scm 228 */
									uint16_t BgL_xz00_5104;

									BgL_xz00_5104 = (uint16_t) (BgL_arg1229z00_5100);
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_arg2198z00_5105;

										BgL_arg2198z00_5105 = (long) (BgL_xz00_5104);
										{	/* Unsafe/bignumber.scm 228 */
											long BgL_res2853z00_5107;

											BgL_res2853z00_5107 = (long) (BgL_arg2198z00_5105);
											BgL_res2854z00_5108 = BgL_res2853z00_5107;
								}}}
								BgL_arg1756z00_1948 = BgL_res2854z00_5108;
						}}
						BgL_nbzd2digitszd2_1934 = (BgL_arg1756z00_1948 - ((long) 1));
					}
					{	/* Unsafe/bignumber.scm 873 */

						if ((BgL_nbzd2digitszd2_1934 == ((long) 0)))
							{	/* Unsafe/bignumber.scm 874 */
								return ((long) 0);
							}
						else
							{	/* Unsafe/bignumber.scm 876 */
								long BgL_g1059z00_1936;
								long BgL_g1060z00_1937;

								{	/* Unsafe/bignumber.scm 876 */
									int BgL_iz00_5114;

									BgL_iz00_5114 = (int) (BgL_nbzd2digitszd2_1934);
									{	/* Unsafe/bignumber.scm 234 */
										uint16_t BgL_arg1246z00_5115;

										{	/* Unsafe/bignumber.scm 234 */
											obj_t BgL_arg1247z00_5116;

											BgL_arg1247z00_5116 = BGL_BIGNUM_U16VECT(BgL_nz00_1933);
											{	/* Unsafe/bignumber.scm 234 */
												long BgL_tmpz00_7980;

												BgL_tmpz00_7980 = (long) (BgL_iz00_5114);
												BgL_arg1246z00_5115 =
													BGL_U16VREF(BgL_arg1247z00_5116, BgL_tmpz00_7980);
										}}
										{	/* Unsafe/bignumber.scm 234 */
											long BgL_res2858z00_5121;

											{	/* Unsafe/bignumber.scm 234 */
												long BgL_arg2198z00_5118;

												BgL_arg2198z00_5118 = (long) (BgL_arg1246z00_5115);
												{	/* Unsafe/bignumber.scm 234 */
													long BgL_res2857z00_5120;

													BgL_res2857z00_5120 = (long) (BgL_arg2198z00_5118);
													BgL_res2858z00_5121 = BgL_res2857z00_5120;
											}}
											BgL_g1059z00_1936 = BgL_res2858z00_5121;
								}}}
								BgL_g1060z00_1937 =
									((BgL_nbzd2digitszd2_1934 - ((long) 1)) * ((long) 14));
								{
									long BgL_dz00_5146;
									long BgL_lenz00_5147;

									BgL_dz00_5146 = BgL_g1059z00_1936;
									BgL_lenz00_5147 = BgL_g1060z00_1937;
								BgL_loopz00_5145:
									if ((((long) 0) < BgL_dz00_5146))
										{	/* Unsafe/bignumber.scm 879 */
											long BgL_arg1751z00_5152;
											long BgL_arg1752z00_5153;

											{	/* Unsafe/bignumber.scm 879 */
												long BgL_res2868z00_5157;

												BgL_res2868z00_5157 = (BgL_dz00_5146 / ((long) 2));
												BgL_arg1751z00_5152 = BgL_res2868z00_5157;
											}
											BgL_arg1752z00_5153 = (BgL_lenz00_5147 + ((long) 1));
											{
												long BgL_lenz00_7992;
												long BgL_dz00_7991;

												BgL_dz00_7991 = BgL_arg1751z00_5152;
												BgL_lenz00_7992 = BgL_arg1752z00_5153;
												BgL_lenz00_5147 = BgL_lenz00_7992;
												BgL_dz00_5146 = BgL_dz00_7991;
												goto BgL_loopz00_5145;
											}
										}
									else
										{	/* Unsafe/bignumber.scm 878 */
											return BgL_lenz00_5147;
										}
								}
							}
					}
				}
			}
		}

	}



/* $$bignum->string */
	BGL_EXPORTED_DEF obj_t bgl_bignum_to_string(obj_t BgL_xz00_89,
		long BgL_radixz00_90)
	{
		{	/* Unsafe/bignumber.scm 886 */
			{
				obj_t BgL_signz00_1956;
				obj_t BgL_nz00_1957;

				{	/* Unsafe/bignumber.scm 899 */
					bool_t BgL_test3451z00_7993;

					{	/* Unsafe/bignumber.scm 899 */
						bool_t BgL_res2892z00_5246;

						{	/* Unsafe/bignumber.scm 418 */
							long BgL_arg1393z00_5235;

							{	/* Unsafe/bignumber.scm 230 */
								uint16_t BgL_arg1239z00_5237;

								{	/* Unsafe/bignumber.scm 230 */
									obj_t BgL_arg1242z00_5238;

									BgL_arg1242z00_5238 = BGL_BIGNUM_U16VECT(BgL_xz00_89);
									BgL_arg1239z00_5237 =
										BGL_U16VREF(BgL_arg1242z00_5238, ((long) 0));
								}
								{	/* Unsafe/bignumber.scm 230 */
									long BgL_res2890z00_5243;

									{	/* Unsafe/bignumber.scm 230 */
										long BgL_arg2198z00_5240;

										BgL_arg2198z00_5240 = (long) (BgL_arg1239z00_5237);
										{	/* Unsafe/bignumber.scm 230 */
											long BgL_res2889z00_5242;

											BgL_res2889z00_5242 = (long) (BgL_arg2198z00_5240);
											BgL_res2890z00_5243 = BgL_res2889z00_5242;
									}}
									BgL_arg1393z00_5235 = BgL_res2890z00_5243;
							}}
							BgL_res2892z00_5246 = (BgL_arg1393z00_5235 == ((long) 0));
						}
						BgL_test3451z00_7993 = BgL_res2892z00_5246;
					}
					if (BgL_test3451z00_7993)
						{	/* Unsafe/bignumber.scm 899 */
							BgL_signz00_1956 = BCHAR(((unsigned char) '-'));
							BgL_nz00_1957 =
								bgl_bignum_sub(BGl_bignumzd2za7eroz75zz__bignumz00,
								BgL_xz00_89);
						BgL_zc3z04anonymousza31761ze3z87_1958:
							{	/* Unsafe/bignumber.scm 892 */
								obj_t BgL_digitsz00_1959;

								{	/* Unsafe/bignumber.scm 893 */
									obj_t BgL_l1099z00_1961;

									{	/* Unsafe/bignumber.scm 894 */
										bool_t BgL_test3452z00_7999;

										{	/* Unsafe/bignumber.scm 894 */
											bool_t BgL_res2875z00_5177;

											{	/* Unsafe/bignumber.scm 415 */
												long BgL_arg1392z00_5164;

												{	/* Unsafe/bignumber.scm 228 */
													long BgL_arg1229z00_5166;

													{	/* Unsafe/bignumber.scm 228 */
														obj_t BgL_arg1232z00_5167;

														BgL_arg1232z00_5167 =
															BGL_BIGNUM_U16VECT(BgL_nz00_1957);
														{	/* Unsafe/bignumber.scm 228 */
															long BgL_res2871z00_5169;

															BgL_res2871z00_5169 =
																BGL_HVECTOR_LENGTH(BgL_arg1232z00_5167);
															BgL_arg1229z00_5166 = BgL_res2871z00_5169;
													}}
													{	/* Unsafe/bignumber.scm 228 */
														long BgL_res2873z00_5174;

														{	/* Unsafe/bignumber.scm 228 */
															uint16_t BgL_xz00_5170;

															BgL_xz00_5170 = (uint16_t) (BgL_arg1229z00_5166);
															{	/* Unsafe/bignumber.scm 228 */
																long BgL_arg2198z00_5171;

																BgL_arg2198z00_5171 = (long) (BgL_xz00_5170);
																{	/* Unsafe/bignumber.scm 228 */
																	long BgL_res2872z00_5173;

																	BgL_res2872z00_5173 =
																		(long) (BgL_arg2198z00_5171);
																	BgL_res2873z00_5174 = BgL_res2872z00_5173;
														}}}
														BgL_arg1392z00_5164 = BgL_res2873z00_5174;
												}}
												BgL_res2875z00_5177 =
													(BgL_arg1392z00_5164 == ((long) 1));
											}
											BgL_test3452z00_7999 = BgL_res2875z00_5177;
										}
										if (BgL_test3452z00_7999)
											{	/* Unsafe/bignumber.scm 894 */
												BgL_l1099z00_1961 = BGl_list3219z00zz__bignumz00;
											}
										else
											{	/* Unsafe/bignumber.scm 894 */
												BgL_l1099z00_1961 =
													bgl_reverse
													(BGl_bignumzd2ze3fixnumzd2listze3zz__bignumz00
													(BgL_nz00_1957, (BgL_radixz00_90 - ((long) 1))));
									}}
									if (NULLP(BgL_l1099z00_1961))
										{	/* Unsafe/bignumber.scm 893 */
											BgL_digitsz00_1959 = BNIL;
										}
									else
										{	/* Unsafe/bignumber.scm 893 */
											obj_t BgL_head1101z00_1963;

											{	/* Unsafe/bignumber.scm 893 */
												unsigned char BgL_arg1770z00_1975;

												BgL_arg1770z00_1975 =
													STRING_REF(BGl_string3220z00zz__bignumz00,
													(long) CINT(CAR(BgL_l1099z00_1961)));
												{	/* Unsafe/bignumber.scm 893 */
													obj_t BgL_res2879z00_5185;

													BgL_res2879z00_5185 =
														MAKE_YOUNG_PAIR(BCHAR(BgL_arg1770z00_1975), BNIL);
													BgL_head1101z00_1963 = BgL_res2879z00_5185;
											}}
											{	/* Unsafe/bignumber.scm 893 */
												obj_t BgL_g1104z00_1964;

												BgL_g1104z00_1964 = CDR(BgL_l1099z00_1961);
												{
													obj_t BgL_l1099z00_5214;
													obj_t BgL_tail1102z00_5215;

													BgL_l1099z00_5214 = BgL_g1104z00_1964;
													BgL_tail1102z00_5215 = BgL_head1101z00_1963;
												BgL_zc3z04anonymousza31764ze3z87_5213:
													if (NULLP(BgL_l1099z00_5214))
														{	/* Unsafe/bignumber.scm 893 */
															BgL_digitsz00_1959 = BgL_head1101z00_1963;
														}
													else
														{	/* Unsafe/bignumber.scm 893 */
															obj_t BgL_newtail1103z00_5222;

															{	/* Unsafe/bignumber.scm 893 */
																unsigned char BgL_arg1768z00_5223;

																BgL_arg1768z00_5223 =
																	STRING_REF(BGl_string3220z00zz__bignumz00,
																	(long) CINT(CAR(
																			((obj_t) BgL_l1099z00_5214))));
																{	/* Unsafe/bignumber.scm 893 */
																	obj_t BgL_res2888z00_5231;

																	BgL_res2888z00_5231 =
																		MAKE_YOUNG_PAIR(BCHAR(BgL_arg1768z00_5223),
																		BNIL);
																	BgL_newtail1103z00_5222 = BgL_res2888z00_5231;
															}}
															SET_CDR(BgL_tail1102z00_5215,
																BgL_newtail1103z00_5222);
															{	/* Unsafe/bignumber.scm 893 */
																obj_t BgL_arg1766z00_5225;

																BgL_arg1766z00_5225 =
																	CDR(((obj_t) BgL_l1099z00_5214));
																{
																	obj_t BgL_tail1102z00_8029;
																	obj_t BgL_l1099z00_8028;

																	BgL_l1099z00_8028 = BgL_arg1766z00_5225;
																	BgL_tail1102z00_8029 =
																		BgL_newtail1103z00_5222;
																	BgL_tail1102z00_5215 = BgL_tail1102z00_8029;
																	BgL_l1099z00_5214 = BgL_l1099z00_8028;
																	goto BgL_zc3z04anonymousza31764ze3z87_5213;
																}
															}
														}
												}
											}
										}
								}
								{	/* Unsafe/bignumber.scm 897 */
									obj_t BgL_arg1762z00_1960;

									if (CBOOL(BgL_signz00_1956))
										{	/* Unsafe/bignumber.scm 897 */
											BgL_arg1762z00_1960 =
												MAKE_YOUNG_PAIR(BgL_signz00_1956, BgL_digitsz00_1959);
										}
									else
										{	/* Unsafe/bignumber.scm 897 */
											BgL_arg1762z00_1960 = BgL_digitsz00_1959;
										}
									return
										BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
										(BgL_arg1762z00_1960);
								}
							}
						}
					else
						{
							obj_t BgL_nz00_8037;
							obj_t BgL_signz00_8036;

							BgL_signz00_8036 = BFALSE;
							BgL_nz00_8037 = BgL_xz00_89;
							BgL_nz00_1957 = BgL_nz00_8037;
							BgL_signz00_1956 = BgL_signz00_8036;
							goto BgL_zc3z04anonymousza31761ze3z87_1958;
						}
				}
			}
		}

	}



/* &$$bignum->string */
	obj_t BGl_z62z42z42bignumzd2ze3stringz53zz__bignumz00(obj_t BgL_envz00_6081,
		obj_t BgL_xz00_6082, obj_t BgL_radixz00_6083)
	{
		{	/* Unsafe/bignumber.scm 886 */
			{	/* Unsafe/bignumber.scm 889 */
				long BgL_auxz00_8045;
				obj_t BgL_auxz00_8038;

				{	/* Unsafe/bignumber.scm 889 */
					obj_t BgL_tmpz00_8046;

					if (INTEGERP(BgL_radixz00_6083))
						{	/* Unsafe/bignumber.scm 889 */
							BgL_tmpz00_8046 = BgL_radixz00_6083;
						}
					else
						{
							obj_t BgL_auxz00_8049;

							BgL_auxz00_8049 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 28672)), BGl_string3221z00zz__bignumz00,
								BGl_string3191z00zz__bignumz00, BgL_radixz00_6083);
							FAILURE(BgL_auxz00_8049, BFALSE, BFALSE);
						}
					BgL_auxz00_8045 = (long) CINT(BgL_tmpz00_8046);
				}
				if (BIGNUMP(BgL_xz00_6082))
					{	/* Unsafe/bignumber.scm 889 */
						BgL_auxz00_8038 = BgL_xz00_6082;
					}
				else
					{
						obj_t BgL_auxz00_8041;

						BgL_auxz00_8041 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
							BINT(((long) 28672)), BGl_string3221z00zz__bignumz00,
							BGl_string3200z00zz__bignumz00, BgL_xz00_6082);
						FAILURE(BgL_auxz00_8041, BFALSE, BFALSE);
					}
				return bgl_bignum_to_string(BgL_auxz00_8038, BgL_auxz00_8045);
			}
		}

	}



/* $$string->bignum */
	BGL_EXPORTED_DEF obj_t bgl_string_to_bignum(char *BgL_strz00_91,
		int BgL_radixz00_92)
	{
		{	/* Unsafe/bignumber.scm 903 */
			{
				long BgL_iz00_2052;
				obj_t BgL_radz00_2036;
				long BgL_iz00_2037;
				obj_t BgL_radz00_2011;
				obj_t BgL_signz00_2012;
				long BgL_iz00_2013;
				unsigned char BgL_cz00_1986;
				obj_t BgL_radz00_1987;

				BgL_iz00_2052 = ((long) 0);
				{	/* Unsafe/bignumber.scm 943 */
					obj_t BgL_g1064z00_2054;

					if (
						((BgL_iz00_2052 + ((long) 3)) <=
							STRING_LENGTH(string_to_bstring(BgL_strz00_91))))
						{	/* Unsafe/bignumber.scm 943 */
							if (
								(STRING_REF(string_to_bstring(BgL_strz00_91),
										BgL_iz00_2052) == ((unsigned char) '#')))
								{	/* Unsafe/bignumber.scm 944 */
									BgL_g1064z00_2054 =
										BGl_assvz00zz__r4_pairs_and_lists_6_3z00(BCHAR(tolower
											(STRING_REF(string_to_bstring(BgL_strz00_91),
													(BgL_iz00_2052 + ((long) 1))))),
										BGl_list3223z00zz__bignumz00);
								}
							else
								{	/* Unsafe/bignumber.scm 944 */
									BgL_g1064z00_2054 = BFALSE;
								}
						}
					else
						{	/* Unsafe/bignumber.scm 943 */
							BgL_g1064z00_2054 = BFALSE;
						}
					if (CBOOL(BgL_g1064z00_2054))
						{	/* Unsafe/bignumber.scm 952 */
							obj_t BgL_arg1823z00_2057;
							long BgL_arg1824z00_2058;

							BgL_arg1823z00_2057 = CDR(((obj_t) BgL_g1064z00_2054));
							BgL_arg1824z00_2058 = (BgL_iz00_2052 + ((long) 2));
							BgL_radz00_2036 = BgL_arg1823z00_2057;
							BgL_iz00_2037 = BgL_arg1824z00_2058;
						BgL_zc3z04anonymousza31809ze3z87_2038:
							{	/* Unsafe/bignumber.scm 936 */
								bool_t BgL_test3461z00_8075;

								if (
									((BgL_iz00_2037 + ((long) 2)) <=
										STRING_LENGTH(string_to_bstring(BgL_strz00_91))))
									{	/* Unsafe/bignumber.scm 936 */
										BgL_test3461z00_8075 =
											CBOOL(BGl_memvz00zz__r4_pairs_and_lists_6_3z00(BCHAR
												(STRING_REF(string_to_bstring(BgL_strz00_91),
														BgL_iz00_2037)), BGl_list3222z00zz__bignumz00));
									}
								else
									{	/* Unsafe/bignumber.scm 936 */
										BgL_test3461z00_8075 = ((bool_t) 0);
									}
								if (BgL_test3461z00_8075)
									{	/* Unsafe/bignumber.scm 938 */
										unsigned char BgL_arg1817z00_2046;
										long BgL_arg1818z00_2047;

										BgL_arg1817z00_2046 =
											STRING_REF(string_to_bstring(BgL_strz00_91),
											BgL_iz00_2037);
										BgL_arg1818z00_2047 = (BgL_iz00_2037 + ((long) 1));
										BgL_radz00_2011 = BgL_radz00_2036;
										BgL_signz00_2012 = BCHAR(BgL_arg1817z00_2046);
										BgL_iz00_2013 = BgL_arg1818z00_2047;
									BgL_zc3z04anonymousza31792ze3z87_2014:
										if (
											((BgL_iz00_2013 + ((long) 1)) <=
												STRING_LENGTH(string_to_bstring(BgL_strz00_91))))
											{
												long BgL_iz00_2020;
												obj_t BgL_digitsz00_2021;

												BgL_iz00_2020 = BgL_iz00_2013;
												BgL_digitsz00_2021 = BNIL;
											BgL_zc3z04anonymousza31797ze3z87_2022:
												if (
													(BgL_iz00_2020 <
														STRING_LENGTH(string_to_bstring(BgL_strz00_91))))
													{	/* Unsafe/bignumber.scm 925 */
														obj_t BgL_dz00_2025;

														BgL_cz00_1986 =
															STRING_REF(string_to_bstring(BgL_strz00_91),
															BgL_iz00_2020);
														BgL_radz00_1987 = BgL_radz00_2011;
														{	/* Unsafe/bignumber.scm 912 */
															bool_t BgL_test3465z00_8098;

															if ((BgL_cz00_1986 >= ((unsigned char) '0')))
																{	/* Unsafe/bignumber.scm 912 */
																	BgL_test3465z00_8098 =
																		(BgL_cz00_1986 <= ((unsigned char) '9'));
																}
															else
																{	/* Unsafe/bignumber.scm 912 */
																	BgL_test3465z00_8098 = ((bool_t) 0);
																}
															if (BgL_test3465z00_8098)
																{	/* Unsafe/bignumber.scm 913 */
																	long BgL_arg1778z00_1992;

																	BgL_arg1778z00_1992 =
																		((BgL_cz00_1986) - ((long) 48));
																	if (
																		(BgL_arg1778z00_1992 <
																			(long) CINT(BgL_radz00_1987)))
																		{	/* Unsafe/bignumber.scm 908 */
																			BgL_dz00_2025 = BINT(BgL_arg1778z00_1992);
																		}
																	else
																		{	/* Unsafe/bignumber.scm 908 */
																			BgL_dz00_2025 = BFALSE;
																		}
																}
															else
																{	/* Unsafe/bignumber.scm 914 */
																	bool_t BgL_test3468z00_8108;

																	if ((BgL_cz00_1986 >= ((unsigned char) 'a')))
																		{	/* Unsafe/bignumber.scm 914 */
																			BgL_test3468z00_8108 =
																				(BgL_cz00_1986 <=
																				((unsigned char) 'z'));
																		}
																	else
																		{	/* Unsafe/bignumber.scm 914 */
																			BgL_test3468z00_8108 = ((bool_t) 0);
																		}
																	if (BgL_test3468z00_8108)
																		{	/* Unsafe/bignumber.scm 915 */
																			long BgL_arg1782z00_1996;

																			BgL_arg1782z00_1996 =
																				(((long) 10) +
																				((BgL_cz00_1986) - ((long) 97)));
																			if (
																				(BgL_arg1782z00_1996 <
																					(long) CINT(BgL_radz00_1987)))
																				{	/* Unsafe/bignumber.scm 908 */
																					BgL_dz00_2025 =
																						BINT(BgL_arg1782z00_1996);
																				}
																			else
																				{	/* Unsafe/bignumber.scm 908 */
																					BgL_dz00_2025 = BFALSE;
																				}
																		}
																	else
																		{	/* Unsafe/bignumber.scm 916 */
																			bool_t BgL_test3471z00_8119;

																			if (
																				(BgL_cz00_1986 >=
																					((unsigned char) 'A')))
																				{	/* Unsafe/bignumber.scm 916 */
																					BgL_test3471z00_8119 =
																						(BgL_cz00_1986 <=
																						((unsigned char) 'Z'));
																				}
																			else
																				{	/* Unsafe/bignumber.scm 916 */
																					BgL_test3471z00_8119 = ((bool_t) 0);
																				}
																			if (BgL_test3471z00_8119)
																				{	/* Unsafe/bignumber.scm 917 */
																					long BgL_arg1787z00_2001;

																					BgL_arg1787z00_2001 =
																						(((long) 10) +
																						((BgL_cz00_1986) - ((long) 65)));
																					if (
																						(BgL_arg1787z00_2001 <
																							(long) CINT(BgL_radz00_1987)))
																						{	/* Unsafe/bignumber.scm 908 */
																							BgL_dz00_2025 =
																								BINT(BgL_arg1787z00_2001);
																						}
																					else
																						{	/* Unsafe/bignumber.scm 908 */
																							BgL_dz00_2025 = BFALSE;
																						}
																				}
																			else
																				{	/* Unsafe/bignumber.scm 916 */
																					BgL_dz00_2025 = BFALSE;
																				}
																		}
																}
														}
														if (CBOOL(BgL_dz00_2025))
															{	/* Unsafe/bignumber.scm 927 */
																long BgL_arg1800z00_2026;
																obj_t BgL_arg1801z00_2027;

																BgL_arg1800z00_2026 =
																	(BgL_iz00_2020 + ((long) 1));
																BgL_arg1801z00_2027 =
																	MAKE_YOUNG_PAIR(BgL_dz00_2025,
																	BgL_digitsz00_2021);
																{
																	obj_t BgL_digitsz00_8137;
																	long BgL_iz00_8136;

																	BgL_iz00_8136 = BgL_arg1800z00_2026;
																	BgL_digitsz00_8137 = BgL_arg1801z00_2027;
																	BgL_digitsz00_2021 = BgL_digitsz00_8137;
																	BgL_iz00_2020 = BgL_iz00_8136;
																	goto BgL_zc3z04anonymousza31797ze3z87_2022;
																}
															}
														else
															{	/* Unsafe/bignumber.scm 926 */
																return
																	BGl_z42z42fixnumzd2ze3bignumzd2freshze3zz__bignumz00
																	(((long) 0));
													}}
												else
													{	/* Unsafe/bignumber.scm 929 */
														obj_t BgL_nz00_2029;

														BgL_nz00_2029 =
															BGl_fixnumzd2listzd2ze3bignumze3zz__bignumz00
															(BgL_digitsz00_2021,
															((long) CINT(BgL_radz00_2011) - ((long) 1)));
														{	/* Unsafe/bignumber.scm 930 */
															bool_t BgL_test3475z00_8142;

															if (CBOOL(BgL_signz00_2012))
																{	/* Unsafe/bignumber.scm 930 */
																	BgL_test3475z00_8142 =
																		(CCHAR(BgL_signz00_2012) ==
																		((unsigned char) '-'));
																}
															else
																{	/* Unsafe/bignumber.scm 930 */
																	BgL_test3475z00_8142 = ((bool_t) 0);
																}
															if (BgL_test3475z00_8142)
																{	/* Unsafe/bignumber.scm 930 */
																	return
																		bgl_bignum_sub
																		(BGl_bignumzd2za7eroz75zz__bignumz00,
																		BgL_nz00_2029);
																}
															else
																{	/* Unsafe/bignumber.scm 930 */
																	return BgL_nz00_2029;
																}
														}
													}
											}
										else
											{	/* Unsafe/bignumber.scm 922 */
												return
													BGl_z42z42fixnumzd2ze3bignumzd2freshze3zz__bignumz00((
														(long) 0));
									}}
								else
									{
										long BgL_iz00_8152;
										obj_t BgL_signz00_8151;
										obj_t BgL_radz00_8150;

										BgL_radz00_8150 = BgL_radz00_2036;
										BgL_signz00_8151 = BFALSE;
										BgL_iz00_8152 = BgL_iz00_2037;
										BgL_iz00_2013 = BgL_iz00_8152;
										BgL_signz00_2012 = BgL_signz00_8151;
										BgL_radz00_2011 = BgL_radz00_8150;
										goto BgL_zc3z04anonymousza31792ze3z87_2014;
									}
							}
						}
					else
						{
							long BgL_iz00_8155;
							obj_t BgL_radz00_8153;

							BgL_radz00_8153 = BINT(BgL_radixz00_92);
							BgL_iz00_8155 = BgL_iz00_2052;
							BgL_iz00_2037 = BgL_iz00_8155;
							BgL_radz00_2036 = BgL_radz00_8153;
							goto BgL_zc3z04anonymousza31809ze3z87_2038;
						}
				}
			}
		}

	}



/* &$$string->bignum */
	obj_t BGl_z62z42z42stringzd2ze3bignumz53zz__bignumz00(obj_t BgL_envz00_6084,
		obj_t BgL_strz00_6085, obj_t BgL_radixz00_6086)
	{
		{	/* Unsafe/bignumber.scm 903 */
			{	/* Unsafe/bignumber.scm 908 */
				int BgL_auxz00_8165;
				char *BgL_auxz00_8156;

				{	/* Unsafe/bignumber.scm 908 */
					obj_t BgL_tmpz00_8166;

					if (INTEGERP(BgL_radixz00_6086))
						{	/* Unsafe/bignumber.scm 908 */
							BgL_tmpz00_8166 = BgL_radixz00_6086;
						}
					else
						{
							obj_t BgL_auxz00_8169;

							BgL_auxz00_8169 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 29237)), BGl_string3228z00zz__bignumz00,
								BGl_string3191z00zz__bignumz00, BgL_radixz00_6086);
							FAILURE(BgL_auxz00_8169, BFALSE, BFALSE);
						}
					BgL_auxz00_8165 = CINT(BgL_tmpz00_8166);
				}
				{	/* Unsafe/bignumber.scm 908 */
					obj_t BgL_tmpz00_8157;

					if (STRINGP(BgL_strz00_6085))
						{	/* Unsafe/bignumber.scm 908 */
							BgL_tmpz00_8157 = BgL_strz00_6085;
						}
					else
						{
							obj_t BgL_auxz00_8160;

							BgL_auxz00_8160 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 29237)), BGl_string3228z00zz__bignumz00,
								BGl_string3190z00zz__bignumz00, BgL_strz00_6085);
							FAILURE(BgL_auxz00_8160, BFALSE, BFALSE);
						}
					BgL_auxz00_8156 = BSTRING_TO_STRING(BgL_tmpz00_8157);
				}
				return bgl_string_to_bignum(BgL_auxz00_8156, BgL_auxz00_8165);
			}
		}

	}



/* bignum->fixnum-list */
	obj_t BGl_bignumzd2ze3fixnumzd2listze3zz__bignumz00(obj_t BgL_xz00_93,
		long BgL_radixzd2minuszd21z00_94)
	{
		{	/* Unsafe/bignumber.scm 961 */
			{	/* Unsafe/bignumber.scm 962 */
				obj_t BgL_bigzd2radixzd2_2071;

				{	/* Unsafe/bignumber.scm 964 */
					obj_t BgL_arg1842z00_2100;
					obj_t BgL_arg1845z00_2101;

					BgL_arg1842z00_2100 = bgl_long_to_bignum(BgL_radixzd2minuszd21z00_94);
					{	/* Unsafe/bignumber.scm 965 */
						obj_t BgL_res2937z00_5372;

						{	/* Unsafe/bignumber.scm 362 */
							bool_t BgL_test3479z00_8176;

							if ((((long) 1) < ((long) -16)))
								{	/* Unsafe/bignumber.scm 362 */
									BgL_test3479z00_8176 = ((bool_t) 1);
								}
							else
								{	/* Unsafe/bignumber.scm 362 */
									BgL_test3479z00_8176 = (((long) 16) < ((long) 1));
								}
							if (BgL_test3479z00_8176)
								{	/* Unsafe/bignumber.scm 362 */
									BgL_res2937z00_5372 =
										BGl_z42z42fixnumzd2ze3bignumzd2freshze3zz__bignumz00(((long)
											1));
								}
							else
								{	/* Unsafe/bignumber.scm 362 */
									BgL_res2937z00_5372 =
										VECTOR_REF(BGl_preallocatedzd2bignumszd2zz__bignumz00,
										(((long) 1) + ((long) 16)));
						}}
						BgL_arg1845z00_2101 = BgL_res2937z00_5372;
					}
					{	/* Unsafe/bignumber.scm 963 */
						obj_t BgL_res2942z00_5393;

						{	/* Unsafe/bignumber.scm 554 */
							long BgL_arg1475z00_5375;
							long BgL_arg1476z00_5376;

							{	/* Unsafe/bignumber.scm 230 */
								uint16_t BgL_arg1239z00_5378;

								{	/* Unsafe/bignumber.scm 230 */
									obj_t BgL_arg1242z00_5379;

									BgL_arg1242z00_5379 = BGL_BIGNUM_U16VECT(BgL_arg1842z00_2100);
									BgL_arg1239z00_5378 =
										BGL_U16VREF(BgL_arg1242z00_5379, ((long) 0));
								}
								{	/* Unsafe/bignumber.scm 230 */
									long BgL_res2939z00_5384;

									{	/* Unsafe/bignumber.scm 230 */
										long BgL_arg2198z00_5381;

										BgL_arg2198z00_5381 = (long) (BgL_arg1239z00_5378);
										{	/* Unsafe/bignumber.scm 230 */
											long BgL_res2938z00_5383;

											BgL_res2938z00_5383 = (long) (BgL_arg2198z00_5381);
											BgL_res2939z00_5384 = BgL_res2938z00_5383;
									}}
									BgL_arg1475z00_5375 = BgL_res2939z00_5384;
							}}
							{	/* Unsafe/bignumber.scm 230 */
								uint16_t BgL_arg1239z00_5386;

								{	/* Unsafe/bignumber.scm 230 */
									obj_t BgL_arg1242z00_5387;

									BgL_arg1242z00_5387 = BGL_BIGNUM_U16VECT(BgL_arg1845z00_2101);
									BgL_arg1239z00_5386 =
										BGL_U16VREF(BgL_arg1242z00_5387, ((long) 0));
								}
								{	/* Unsafe/bignumber.scm 230 */
									long BgL_res2941z00_5392;

									{	/* Unsafe/bignumber.scm 230 */
										long BgL_arg2198z00_5389;

										BgL_arg2198z00_5389 = (long) (BgL_arg1239z00_5386);
										{	/* Unsafe/bignumber.scm 230 */
											long BgL_res2940z00_5391;

											BgL_res2940z00_5391 = (long) (BgL_arg2198z00_5389);
											BgL_res2941z00_5392 = BgL_res2940z00_5391;
									}}
									BgL_arg1476z00_5376 = BgL_res2941z00_5392;
							}}
							BgL_res2942z00_5393 =
								BGl_bignumzd2sum2zd2zz__bignumz00(BgL_arg1842z00_2100,
								BgL_arg1845z00_2101, BgL_arg1475z00_5375, BgL_arg1476z00_5376);
						}
						BgL_bigzd2radixzd2_2071 = BgL_res2942z00_5393;
				}}
				{	/* Unsafe/bignumber.scm 962 */
					obj_t BgL_squarezd2serieszd2_2072;

					{	/* Unsafe/bignumber.scm 967 */
						obj_t BgL_g1066z00_2090;

						{	/* Unsafe/bignumber.scm 968 */
							obj_t BgL_list1841z00_2099;

							BgL_list1841z00_2099 =
								MAKE_YOUNG_PAIR(BgL_bigzd2radixzd2_2071, BNIL);
							BgL_g1066z00_2090 = BgL_list1841z00_2099;
						}
						{
							obj_t BgL_squarez00_5402;
							obj_t BgL_squarezd2listzd2_5403;

							BgL_squarez00_5402 = BgL_bigzd2radixzd2_2071;
							BgL_squarezd2listzd2_5403 = BgL_g1066z00_2090;
						BgL_loopz00_5401:
							{	/* Unsafe/bignumber.scm 969 */
								obj_t BgL_newzd2squarezd2_5407;

								BgL_newzd2squarezd2_5407 =
									bgl_bignum_mul(BgL_squarez00_5402, BgL_squarez00_5402);
								if (BGl_z42zc3bxz81zz__bignumz00(BgL_xz00_93,
										BgL_newzd2squarezd2_5407))
									{	/* Unsafe/bignumber.scm 971 */
										BgL_squarezd2serieszd2_2072 = BgL_squarezd2listzd2_5403;
									}
								else
									{	/* Unsafe/bignumber.scm 974 */
										obj_t BgL_arg1840z00_5409;

										BgL_arg1840z00_5409 =
											MAKE_YOUNG_PAIR(BgL_newzd2squarezd2_5407,
											BgL_squarezd2listzd2_5403);
										{
											obj_t BgL_squarezd2listzd2_8198;
											obj_t BgL_squarez00_8197;

											BgL_squarez00_8197 = BgL_newzd2squarezd2_5407;
											BgL_squarezd2listzd2_8198 = BgL_arg1840z00_5409;
											BgL_squarezd2listzd2_5403 = BgL_squarezd2listzd2_8198;
											BgL_squarez00_5402 = BgL_squarez00_8197;
											goto BgL_loopz00_5401;
										}
									}
							}
						}
					}
					{	/* Unsafe/bignumber.scm 966 */

						return
							BGl_convertze70ze7zz__bignumz00(BgL_xz00_93,
							BgL_squarezd2serieszd2_2072, BNIL);
					}
				}
			}
		}

	}



/* convert~0 */
	obj_t BGl_convertze70ze7zz__bignumz00(obj_t BgL_nz00_2074,
		obj_t BgL_squarezd2serieszd2_2075, obj_t BgL_tailz00_2076)
	{
		{	/* Unsafe/bignumber.scm 991 */
		BGl_convertze70ze7zz__bignumz00:
			if (PAIRP(BgL_squarezd2serieszd2_2075))
				{	/* Unsafe/bignumber.scm 978 */
					obj_t BgL_qrz00_2079;

					BgL_qrz00_2079 =
						BGl_bignumzd2divzd2zz__bignumz00(BgL_nz00_2074,
						CAR(BgL_squarezd2serieszd2_2075));
					{	/* Unsafe/bignumber.scm 978 */
						obj_t BgL_qz00_2080;

						BgL_qz00_2080 = CAR(((obj_t) BgL_qrz00_2079));
						{	/* Unsafe/bignumber.scm 979 */
							obj_t BgL_rz00_2081;

							BgL_rz00_2081 = CDR(((obj_t) BgL_qrz00_2079));
							{	/* Unsafe/bignumber.scm 980 */
								obj_t BgL_newzd2squarezd2seriesz00_2082;

								BgL_newzd2squarezd2seriesz00_2082 =
									CDR(BgL_squarezd2serieszd2_2075);
								{	/* Unsafe/bignumber.scm 981 */

									{
										obj_t BgL_tailz00_8211;
										obj_t BgL_squarezd2serieszd2_8210;
										obj_t BgL_nz00_8209;

										BgL_nz00_8209 = BgL_rz00_2081;
										BgL_squarezd2serieszd2_8210 =
											BgL_newzd2squarezd2seriesz00_2082;
										BgL_tailz00_8211 =
											BGl_convertze70ze7zz__bignumz00(BgL_qz00_2080,
											BgL_newzd2squarezd2seriesz00_2082, BgL_tailz00_2076);
										BgL_tailz00_2076 = BgL_tailz00_8211;
										BgL_squarezd2serieszd2_2075 = BgL_squarezd2serieszd2_8210;
										BgL_nz00_2074 = BgL_nz00_8209;
										goto BGl_convertze70ze7zz__bignumz00;
									}
								}
							}
						}
					}
				}
			else
				{	/* Unsafe/bignumber.scm 987 */
					long BgL_dz00_2085;

					{	/* Unsafe/bignumber.scm 987 */
						long BgL_res2945z00_5416;

						BgL_res2945z00_5416 = bgl_bignum_to_long(((obj_t) BgL_nz00_2074));
						BgL_dz00_2085 = BgL_res2945z00_5416;
					}
					{	/* Unsafe/bignumber.scm 988 */
						bool_t BgL_test3483z00_8215;

						if (NULLP(BgL_tailz00_2076))
							{	/* Unsafe/bignumber.scm 988 */
								BgL_test3483z00_8215 = (BgL_dz00_2085 == ((long) 0));
							}
						else
							{	/* Unsafe/bignumber.scm 988 */
								BgL_test3483z00_8215 = ((bool_t) 0);
							}
						if (BgL_test3483z00_8215)
							{	/* Unsafe/bignumber.scm 988 */
								return BgL_tailz00_2076;
							}
						else
							{	/* Unsafe/bignumber.scm 988 */
								return MAKE_YOUNG_PAIR(BINT(BgL_dz00_2085), BgL_tailz00_2076);
							}
					}
				}
		}

	}



/* fixnum-list->bignum */
	obj_t BGl_fixnumzd2listzd2ze3bignumze3zz__bignumz00(obj_t
		BgL_digitzd2listzd2_95, long BgL_radixzd2minuszd21z00_96)
	{
		{	/* Unsafe/bignumber.scm 995 */
			{	/* Unsafe/bignumber.scm 999 */
				obj_t BgL_bigzd2radixzd2_2102;

				{	/* Unsafe/bignumber.scm 1001 */
					obj_t BgL_arg1855z00_2115;
					obj_t BgL_arg1856z00_2116;

					BgL_arg1855z00_2115 = bgl_long_to_bignum(BgL_radixzd2minuszd21z00_96);
					{	/* Unsafe/bignumber.scm 1002 */
						obj_t BgL_res2948z00_5431;

						{	/* Unsafe/bignumber.scm 362 */
							bool_t BgL_test3485z00_8222;

							if ((((long) 1) < ((long) -16)))
								{	/* Unsafe/bignumber.scm 362 */
									BgL_test3485z00_8222 = ((bool_t) 1);
								}
							else
								{	/* Unsafe/bignumber.scm 362 */
									BgL_test3485z00_8222 = (((long) 16) < ((long) 1));
								}
							if (BgL_test3485z00_8222)
								{	/* Unsafe/bignumber.scm 362 */
									BgL_res2948z00_5431 =
										BGl_z42z42fixnumzd2ze3bignumzd2freshze3zz__bignumz00(((long)
											1));
								}
							else
								{	/* Unsafe/bignumber.scm 362 */
									BgL_res2948z00_5431 =
										VECTOR_REF(BGl_preallocatedzd2bignumszd2zz__bignumz00,
										(((long) 1) + ((long) 16)));
						}}
						BgL_arg1856z00_2116 = BgL_res2948z00_5431;
					}
					{	/* Unsafe/bignumber.scm 1000 */
						obj_t BgL_res2953z00_5452;

						{	/* Unsafe/bignumber.scm 554 */
							long BgL_arg1475z00_5434;
							long BgL_arg1476z00_5435;

							{	/* Unsafe/bignumber.scm 230 */
								uint16_t BgL_arg1239z00_5437;

								{	/* Unsafe/bignumber.scm 230 */
									obj_t BgL_arg1242z00_5438;

									BgL_arg1242z00_5438 = BGL_BIGNUM_U16VECT(BgL_arg1855z00_2115);
									BgL_arg1239z00_5437 =
										BGL_U16VREF(BgL_arg1242z00_5438, ((long) 0));
								}
								{	/* Unsafe/bignumber.scm 230 */
									long BgL_res2950z00_5443;

									{	/* Unsafe/bignumber.scm 230 */
										long BgL_arg2198z00_5440;

										BgL_arg2198z00_5440 = (long) (BgL_arg1239z00_5437);
										{	/* Unsafe/bignumber.scm 230 */
											long BgL_res2949z00_5442;

											BgL_res2949z00_5442 = (long) (BgL_arg2198z00_5440);
											BgL_res2950z00_5443 = BgL_res2949z00_5442;
									}}
									BgL_arg1475z00_5434 = BgL_res2950z00_5443;
							}}
							{	/* Unsafe/bignumber.scm 230 */
								uint16_t BgL_arg1239z00_5445;

								{	/* Unsafe/bignumber.scm 230 */
									obj_t BgL_arg1242z00_5446;

									BgL_arg1242z00_5446 = BGL_BIGNUM_U16VECT(BgL_arg1856z00_2116);
									BgL_arg1239z00_5445 =
										BGL_U16VREF(BgL_arg1242z00_5446, ((long) 0));
								}
								{	/* Unsafe/bignumber.scm 230 */
									long BgL_res2952z00_5451;

									{	/* Unsafe/bignumber.scm 230 */
										long BgL_arg2198z00_5448;

										BgL_arg2198z00_5448 = (long) (BgL_arg1239z00_5445);
										{	/* Unsafe/bignumber.scm 230 */
											long BgL_res2951z00_5450;

											BgL_res2951z00_5450 = (long) (BgL_arg2198z00_5448);
											BgL_res2952z00_5451 = BgL_res2951z00_5450;
									}}
									BgL_arg1476z00_5435 = BgL_res2952z00_5451;
							}}
							BgL_res2953z00_5452 =
								BGl_bignumzd2sum2zd2zz__bignumz00(BgL_arg1855z00_2115,
								BgL_arg1856z00_2116, BgL_arg1475z00_5434, BgL_arg1476z00_5435);
						}
						BgL_bigzd2radixzd2_2102 = BgL_res2953z00_5452;
				}}
				{	/* Unsafe/bignumber.scm 1003 */
					obj_t BgL_g1067z00_2103;

					BgL_g1067z00_2103 = bgl_reverse(BgL_digitzd2listzd2_95);
					{
						obj_t BgL_nz00_5498;
						obj_t BgL_lstz00_5499;

						BgL_nz00_5498 = BGl_bignumzd2za7eroz75zz__bignumz00;
						BgL_lstz00_5499 = BgL_g1067z00_2103;
					BgL_loopz00_5497:
						if (PAIRP(BgL_lstz00_5499))
							{	/* Unsafe/bignumber.scm 1005 */
								obj_t BgL_arg1848z00_5507;
								obj_t BgL_arg1850z00_5508;

								{	/* Unsafe/bignumber.scm 1005 */
									obj_t BgL_arg1851z00_5509;
									obj_t BgL_arg1852z00_5510;

									BgL_arg1851z00_5509 =
										bgl_bignum_mul(BgL_nz00_5498, BgL_bigzd2radixzd2_2102);
									{	/* Unsafe/bignumber.scm 1006 */
										obj_t BgL_arg1853z00_5511;

										BgL_arg1853z00_5511 = CAR(BgL_lstz00_5499);
										BgL_arg1852z00_5510 =
											bgl_long_to_bignum((long) CINT(BgL_arg1853z00_5511));
									}
									BgL_arg1848z00_5507 =
										BGl_bignumzd2sum2zd2zz__bignumz00(BgL_arg1851z00_5509,
										BgL_arg1852z00_5510,
										BGl_bignumzd2signzd2zz__bignumz00(BgL_arg1851z00_5509),
										BGl_bignumzd2signzd2zz__bignumz00(BgL_arg1852z00_5510));
								}
								BgL_arg1850z00_5508 = CDR(BgL_lstz00_5499);
								{
									obj_t BgL_lstz00_8250;
									obj_t BgL_nz00_8249;

									BgL_nz00_8249 = BgL_arg1848z00_5507;
									BgL_lstz00_8250 = BgL_arg1850z00_5508;
									BgL_lstz00_5499 = BgL_lstz00_8250;
									BgL_nz00_5498 = BgL_nz00_8249;
									goto BgL_loopz00_5497;
								}
							}
						else
							{	/* Unsafe/bignumber.scm 1004 */
								return BgL_nz00_5498;
							}
					}
				}
			}
		}

	}



/* $$bignum->fixnum */
	BGL_EXPORTED_DEF long bgl_bignum_to_long(obj_t BgL_xz00_97)
	{
		{	/* Unsafe/bignumber.scm 1010 */
			{	/* Unsafe/bignumber.scm 1011 */
				long BgL_lenxzd2minuszd21z00_2117;

				{	/* Unsafe/bignumber.scm 1011 */
					long BgL_arg1877z00_2141;

					{	/* Unsafe/bignumber.scm 228 */
						long BgL_arg1229z00_5521;

						{	/* Unsafe/bignumber.scm 228 */
							obj_t BgL_arg1232z00_5522;

							BgL_arg1232z00_5522 = BGL_BIGNUM_U16VECT(BgL_xz00_97);
							{	/* Unsafe/bignumber.scm 228 */
								long BgL_res2964z00_5524;

								BgL_res2964z00_5524 = BGL_HVECTOR_LENGTH(BgL_arg1232z00_5522);
								BgL_arg1229z00_5521 = BgL_res2964z00_5524;
						}}
						{	/* Unsafe/bignumber.scm 228 */
							long BgL_res2966z00_5529;

							{	/* Unsafe/bignumber.scm 228 */
								uint16_t BgL_xz00_5525;

								BgL_xz00_5525 = (uint16_t) (BgL_arg1229z00_5521);
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_arg2198z00_5526;

									BgL_arg2198z00_5526 = (long) (BgL_xz00_5525);
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_res2965z00_5528;

										BgL_res2965z00_5528 = (long) (BgL_arg2198z00_5526);
										BgL_res2966z00_5529 = BgL_res2965z00_5528;
							}}}
							BgL_arg1877z00_2141 = BgL_res2966z00_5529;
					}}
					BgL_lenxzd2minuszd21z00_2117 = (BgL_arg1877z00_2141 - ((long) 1));
				}
				{
					long BgL_nz00_2119;
					long BgL_iz00_2120;

					{	/* Unsafe/bignumber.scm 1012 */
						obj_t BgL_tmpz00_8257;

						BgL_nz00_2119 = ((long) 0);
						BgL_iz00_2120 = BgL_lenxzd2minuszd21z00_2117;
					BgL_zc3z04anonymousza31857ze3z87_2121:
						if ((((long) 0) < BgL_iz00_2120))
							{	/* Unsafe/bignumber.scm 1014 */
								bool_t BgL_test3489z00_8260;

								{	/* Unsafe/bignumber.scm 1014 */
									long BgL_arg1872z00_2135;

									{	/* Unsafe/bignumber.scm 204 */
										long BgL_res2969z00_5534;

										BgL_res2969z00_5534 =
											(((long) -536870912) / ((long) 16384));
										BgL_arg1872z00_2135 = BgL_res2969z00_5534;
									}
									BgL_test3489z00_8260 = (BgL_nz00_2119 < BgL_arg1872z00_2135);
								}
								if (BgL_test3489z00_8260)
									{	/* Unsafe/bignumber.scm 1014 */
										BgL_tmpz00_8257 = BFALSE;
									}
								else
									{	/* Unsafe/bignumber.scm 1016 */
										long BgL_mz00_2125;
										long BgL_dz00_2126;

										BgL_mz00_2125 = (BgL_nz00_2119 * ((long) 16384));
										{	/* Unsafe/bignumber.scm 1017 */
											int BgL_iz00_5542;

											BgL_iz00_5542 = (int) (BgL_iz00_2120);
											{	/* Unsafe/bignumber.scm 234 */
												uint16_t BgL_arg1246z00_5543;

												{	/* Unsafe/bignumber.scm 234 */
													obj_t BgL_arg1247z00_5544;

													BgL_arg1247z00_5544 = BGL_BIGNUM_U16VECT(BgL_xz00_97);
													{	/* Unsafe/bignumber.scm 234 */
														long BgL_tmpz00_8266;

														BgL_tmpz00_8266 = (long) (BgL_iz00_5542);
														BgL_arg1246z00_5543 =
															BGL_U16VREF(BgL_arg1247z00_5544, BgL_tmpz00_8266);
												}}
												{	/* Unsafe/bignumber.scm 234 */
													long BgL_res2973z00_5549;

													{	/* Unsafe/bignumber.scm 234 */
														long BgL_arg2198z00_5546;

														BgL_arg2198z00_5546 = (long) (BgL_arg1246z00_5543);
														{	/* Unsafe/bignumber.scm 234 */
															long BgL_res2972z00_5548;

															BgL_res2972z00_5548 =
																(long) (BgL_arg2198z00_5546);
															BgL_res2973z00_5549 = BgL_res2972z00_5548;
													}}
													BgL_dz00_2126 = BgL_res2973z00_5549;
										}}}
										if ((BgL_mz00_2125 < (((long) -536870912) + BgL_dz00_2126)))
											{	/* Unsafe/bignumber.scm 1018 */
												BgL_tmpz00_8257 = BFALSE;
											}
										else
											{
												long BgL_iz00_8276;
												long BgL_nz00_8274;

												BgL_nz00_8274 = (BgL_mz00_2125 - BgL_dz00_2126);
												BgL_iz00_8276 = (BgL_iz00_2120 - ((long) 1));
												BgL_iz00_2120 = BgL_iz00_8276;
												BgL_nz00_2119 = BgL_nz00_8274;
												goto BgL_zc3z04anonymousza31857ze3z87_2121;
											}
									}
							}
						else
							{	/* Unsafe/bignumber.scm 1022 */
								bool_t BgL_test3491z00_8278;

								{	/* Unsafe/bignumber.scm 1022 */
									bool_t BgL_res2981z00_5573;

									{	/* Unsafe/bignumber.scm 418 */
										long BgL_arg1393z00_5562;

										{	/* Unsafe/bignumber.scm 230 */
											uint16_t BgL_arg1239z00_5564;

											{	/* Unsafe/bignumber.scm 230 */
												obj_t BgL_arg1242z00_5565;

												BgL_arg1242z00_5565 = BGL_BIGNUM_U16VECT(BgL_xz00_97);
												BgL_arg1239z00_5564 =
													BGL_U16VREF(BgL_arg1242z00_5565, ((long) 0));
											}
											{	/* Unsafe/bignumber.scm 230 */
												long BgL_res2979z00_5570;

												{	/* Unsafe/bignumber.scm 230 */
													long BgL_arg2198z00_5567;

													BgL_arg2198z00_5567 = (long) (BgL_arg1239z00_5564);
													{	/* Unsafe/bignumber.scm 230 */
														long BgL_res2978z00_5569;

														BgL_res2978z00_5569 = (long) (BgL_arg2198z00_5567);
														BgL_res2979z00_5570 = BgL_res2978z00_5569;
												}}
												BgL_arg1393z00_5562 = BgL_res2979z00_5570;
										}}
										BgL_res2981z00_5573 = (BgL_arg1393z00_5562 == ((long) 0));
									}
									BgL_test3491z00_8278 = BgL_res2981z00_5573;
								}
								if (BgL_test3491z00_8278)
									{	/* Unsafe/bignumber.scm 1022 */
										BgL_tmpz00_8257 = BINT(BgL_nz00_2119);
									}
								else
									{	/* Unsafe/bignumber.scm 1022 */
										if ((BgL_nz00_2119 == ((long) -536870912)))
											{	/* Unsafe/bignumber.scm 1024 */
												BgL_tmpz00_8257 = BFALSE;
											}
										else
											{	/* Unsafe/bignumber.scm 1024 */
												BgL_tmpz00_8257 = BINT((((long) 0) - BgL_nz00_2119));
							}}}
						return (long) CINT(BgL_tmpz00_8257);
		}}}}

	}



/* &$$bignum->fixnum */
	obj_t BGl_z62z42z42bignumzd2ze3fixnumz53zz__bignumz00(obj_t BgL_envz00_6087,
		obj_t BgL_xz00_6088)
	{
		{	/* Unsafe/bignumber.scm 1010 */
			{	/* Unsafe/bignumber.scm 1011 */
				long BgL_tmpz00_8290;

				{	/* Unsafe/bignumber.scm 1011 */
					obj_t BgL_auxz00_8291;

					if (BIGNUMP(BgL_xz00_6088))
						{	/* Unsafe/bignumber.scm 1011 */
							BgL_auxz00_8291 = BgL_xz00_6088;
						}
					else
						{
							obj_t BgL_auxz00_8294;

							BgL_auxz00_8294 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 32362)), BGl_string3229z00zz__bignumz00,
								BGl_string3200z00zz__bignumz00, BgL_xz00_6088);
							FAILURE(BgL_auxz00_8294, BFALSE, BFALSE);
						}
					BgL_tmpz00_8290 = bgl_bignum_to_long(BgL_auxz00_8291);
				}
				return BINT(BgL_tmpz00_8290);
			}
		}

	}



/* $$bignum->elong */
	BGL_EXPORTED_DEF long bgl_bignum_to_elong(obj_t BgL_xz00_98)
	{
		{	/* Unsafe/bignumber.scm 1029 */
			{	/* Unsafe/bignumber.scm 1030 */
				long BgL_lenxzd2minuszd21z00_2142;

				{	/* Unsafe/bignumber.scm 1030 */
					long BgL_arg1898z00_2167;

					{	/* Unsafe/bignumber.scm 228 */
						long BgL_arg1229z00_5580;

						{	/* Unsafe/bignumber.scm 228 */
							obj_t BgL_arg1232z00_5581;

							BgL_arg1232z00_5581 = BGL_BIGNUM_U16VECT(BgL_xz00_98);
							{	/* Unsafe/bignumber.scm 228 */
								long BgL_res2984z00_5583;

								BgL_res2984z00_5583 = BGL_HVECTOR_LENGTH(BgL_arg1232z00_5581);
								BgL_arg1229z00_5580 = BgL_res2984z00_5583;
						}}
						{	/* Unsafe/bignumber.scm 228 */
							long BgL_res2986z00_5588;

							{	/* Unsafe/bignumber.scm 228 */
								uint16_t BgL_xz00_5584;

								BgL_xz00_5584 = (uint16_t) (BgL_arg1229z00_5580);
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_arg2198z00_5585;

									BgL_arg2198z00_5585 = (long) (BgL_xz00_5584);
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_res2985z00_5587;

										BgL_res2985z00_5587 = (long) (BgL_arg2198z00_5585);
										BgL_res2986z00_5588 = BgL_res2985z00_5587;
							}}}
							BgL_arg1898z00_2167 = BgL_res2986z00_5588;
					}}
					BgL_lenxzd2minuszd21z00_2142 = (BgL_arg1898z00_2167 - ((long) 1));
				}
				{
					long BgL_nz00_2144;
					long BgL_iz00_2145;

					{	/* Unsafe/bignumber.scm 1031 */
						obj_t BgL_tmpz00_8306;

						BgL_nz00_2144 = ((long) 0);
						BgL_iz00_2145 = BgL_lenxzd2minuszd21z00_2142;
					BgL_zc3z04anonymousza31878ze3z87_2146:
						if ((((long) 0) < BgL_iz00_2145))
							{	/* Unsafe/bignumber.scm 1032 */
								if (
									(BgL_nz00_2144 <
										BGl_bignumzd2minzd2elongzd2divzd2radixz00zz__bignumz00()))
									{	/* Unsafe/bignumber.scm 1033 */
										BgL_tmpz00_8306 = BFALSE;
									}
								else
									{	/* Unsafe/bignumber.scm 1035 */
										long BgL_mz00_2150;
										long BgL_dz00_2151;

										BgL_mz00_2150 =
											(BgL_nz00_2144 *
											((long) (((long) 1)) << (int) (((long) 15))));
										{	/* Unsafe/bignumber.scm 1036 */
											long BgL_arg1892z00_2160;

											{	/* Unsafe/bignumber.scm 1036 */
												int BgL_iz00_5602;

												BgL_iz00_5602 = (int) (BgL_iz00_2145);
												{	/* Unsafe/bignumber.scm 234 */
													uint16_t BgL_arg1246z00_5603;

													{	/* Unsafe/bignumber.scm 234 */
														obj_t BgL_arg1247z00_5604;

														BgL_arg1247z00_5604 =
															BGL_BIGNUM_U16VECT(BgL_xz00_98);
														{	/* Unsafe/bignumber.scm 234 */
															long BgL_tmpz00_8318;

															BgL_tmpz00_8318 = (long) (BgL_iz00_5602);
															BgL_arg1246z00_5603 =
																BGL_U16VREF(BgL_arg1247z00_5604,
																BgL_tmpz00_8318);
													}}
													{	/* Unsafe/bignumber.scm 234 */
														long BgL_res2993z00_5609;

														{	/* Unsafe/bignumber.scm 234 */
															long BgL_arg2198z00_5606;

															BgL_arg2198z00_5606 =
																(long) (BgL_arg1246z00_5603);
															{	/* Unsafe/bignumber.scm 234 */
																long BgL_res2992z00_5608;

																BgL_res2992z00_5608 =
																	(long) (BgL_arg2198z00_5606);
																BgL_res2993z00_5609 = BgL_res2992z00_5608;
														}}
														BgL_arg1892z00_2160 = BgL_res2993z00_5609;
											}}}
											BgL_dz00_2151 = (long) (BgL_arg1892z00_2160);
										}
										if (
											(BgL_mz00_2150 <
												((((long) -2) *
														((long) (((long) 1)) <<
															(int) (((long) 30)))) + BgL_dz00_2151)))
											{	/* Unsafe/bignumber.scm 1037 */
												BgL_tmpz00_8306 = BFALSE;
											}
										else
											{	/* Unsafe/bignumber.scm 1039 */
												long BgL_arg1886z00_2155;
												long BgL_arg1887z00_2156;

												{	/* Unsafe/bignumber.scm 1039 */
													long BgL_res2998z00_5624;

													{	/* Unsafe/bignumber.scm 1039 */
														long BgL_tmpz00_8331;

														BgL_tmpz00_8331 = (BgL_mz00_2150 - BgL_dz00_2151);
														BgL_res2998z00_5624 = (long) (BgL_tmpz00_8331);
													}
													BgL_arg1886z00_2155 = BgL_res2998z00_5624;
												}
												BgL_arg1887z00_2156 = (BgL_iz00_2145 - ((long) 1));
												{
													long BgL_iz00_8336;
													long BgL_nz00_8335;

													BgL_nz00_8335 = BgL_arg1886z00_2155;
													BgL_iz00_8336 = BgL_arg1887z00_2156;
													BgL_iz00_2145 = BgL_iz00_8336;
													BgL_nz00_2144 = BgL_nz00_8335;
													goto BgL_zc3z04anonymousza31878ze3z87_2146;
												}
											}
									}
							}
						else
							{	/* Unsafe/bignumber.scm 1041 */
								bool_t BgL_test3497z00_8337;

								{	/* Unsafe/bignumber.scm 1041 */
									bool_t BgL_res3003z00_5639;

									{	/* Unsafe/bignumber.scm 418 */
										long BgL_arg1393z00_5628;

										{	/* Unsafe/bignumber.scm 230 */
											uint16_t BgL_arg1239z00_5630;

											{	/* Unsafe/bignumber.scm 230 */
												obj_t BgL_arg1242z00_5631;

												BgL_arg1242z00_5631 = BGL_BIGNUM_U16VECT(BgL_xz00_98);
												BgL_arg1239z00_5630 =
													BGL_U16VREF(BgL_arg1242z00_5631, ((long) 0));
											}
											{	/* Unsafe/bignumber.scm 230 */
												long BgL_res3001z00_5636;

												{	/* Unsafe/bignumber.scm 230 */
													long BgL_arg2198z00_5633;

													BgL_arg2198z00_5633 = (long) (BgL_arg1239z00_5630);
													{	/* Unsafe/bignumber.scm 230 */
														long BgL_res3000z00_5635;

														BgL_res3000z00_5635 = (long) (BgL_arg2198z00_5633);
														BgL_res3001z00_5636 = BgL_res3000z00_5635;
												}}
												BgL_arg1393z00_5628 = BgL_res3001z00_5636;
										}}
										BgL_res3003z00_5639 = (BgL_arg1393z00_5628 == ((long) 0));
									}
									BgL_test3497z00_8337 = BgL_res3003z00_5639;
								}
								if (BgL_test3497z00_8337)
									{	/* Unsafe/bignumber.scm 1041 */
										BgL_tmpz00_8306 = make_belong(BgL_nz00_2144);
									}
								else
									{	/* Unsafe/bignumber.scm 1041 */
										if (
											(BgL_nz00_2144 ==
												(((long) -2) *
													((long) (((long) 1)) << (int) (((long) 30))))))
											{	/* Unsafe/bignumber.scm 1043 */
												BgL_tmpz00_8306 = BFALSE;
											}
										else
											{	/* Unsafe/bignumber.scm 1044 */
												long BgL_res3007z00_5651;

												{	/* Unsafe/bignumber.scm 1044 */
													long BgL_tmpz00_8350;

													BgL_tmpz00_8350 = (((long) 0) - BgL_nz00_2144);
													BgL_res3007z00_5651 = (long) (BgL_tmpz00_8350);
												}
												BgL_tmpz00_8306 = make_belong(BgL_res3007z00_5651);
							}}}
						return BELONG_TO_LONG(BgL_tmpz00_8306);
					}
				}
			}
		}

	}



/* &$$bignum->elong */
	obj_t BGl_z62z42z42bignumzd2ze3elongz53zz__bignumz00(obj_t BgL_envz00_6089,
		obj_t BgL_xz00_6090)
	{
		{	/* Unsafe/bignumber.scm 1029 */
			{	/* Unsafe/bignumber.scm 1030 */
				long BgL_tmpz00_8355;

				{	/* Unsafe/bignumber.scm 1030 */
					obj_t BgL_auxz00_8356;

					if (BIGNUMP(BgL_xz00_6090))
						{	/* Unsafe/bignumber.scm 1030 */
							BgL_auxz00_8356 = BgL_xz00_6090;
						}
					else
						{
							obj_t BgL_auxz00_8359;

							BgL_auxz00_8359 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 32872)), BGl_string3230z00zz__bignumz00,
								BGl_string3200z00zz__bignumz00, BgL_xz00_6090);
							FAILURE(BgL_auxz00_8359, BFALSE, BFALSE);
						}
					BgL_tmpz00_8355 = bgl_bignum_to_elong(BgL_auxz00_8356);
				}
				return make_belong(BgL_tmpz00_8355);
			}
		}

	}



/* $$bignum->llong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T bgl_bignum_to_llong(obj_t BgL_xz00_99)
	{
		{	/* Unsafe/bignumber.scm 1048 */
			{	/* Unsafe/bignumber.scm 1049 */
				long BgL_lenxzd2minuszd21z00_2168;

				{	/* Unsafe/bignumber.scm 1049 */
					long BgL_arg1917z00_2193;

					{	/* Unsafe/bignumber.scm 228 */
						long BgL_arg1229z00_5653;

						{	/* Unsafe/bignumber.scm 228 */
							obj_t BgL_arg1232z00_5654;

							BgL_arg1232z00_5654 = BGL_BIGNUM_U16VECT(BgL_xz00_99);
							{	/* Unsafe/bignumber.scm 228 */
								long BgL_res3008z00_5656;

								BgL_res3008z00_5656 = BGL_HVECTOR_LENGTH(BgL_arg1232z00_5654);
								BgL_arg1229z00_5653 = BgL_res3008z00_5656;
						}}
						{	/* Unsafe/bignumber.scm 228 */
							long BgL_res3010z00_5661;

							{	/* Unsafe/bignumber.scm 228 */
								uint16_t BgL_xz00_5657;

								BgL_xz00_5657 = (uint16_t) (BgL_arg1229z00_5653);
								{	/* Unsafe/bignumber.scm 228 */
									long BgL_arg2198z00_5658;

									BgL_arg2198z00_5658 = (long) (BgL_xz00_5657);
									{	/* Unsafe/bignumber.scm 228 */
										long BgL_res3009z00_5660;

										BgL_res3009z00_5660 = (long) (BgL_arg2198z00_5658);
										BgL_res3010z00_5661 = BgL_res3009z00_5660;
							}}}
							BgL_arg1917z00_2193 = BgL_res3010z00_5661;
					}}
					BgL_lenxzd2minuszd21z00_2168 = (BgL_arg1917z00_2193 - ((long) 1));
				}
				{
					BGL_LONGLONG_T BgL_nz00_2170;
					long BgL_iz00_2171;

					{	/* Unsafe/bignumber.scm 1050 */
						obj_t BgL_tmpz00_8371;

						BgL_nz00_2170 = ((BGL_LONGLONG_T) 0);
						BgL_iz00_2171 = BgL_lenxzd2minuszd21z00_2168;
					BgL_zc3z04anonymousza31899ze3z87_2172:
						if ((((long) 0) < BgL_iz00_2171))
							{	/* Unsafe/bignumber.scm 1051 */
								if (
									(BgL_nz00_2170 <
										BGl_bignumzd2minzd2llongzd2divzd2radixz00zz__bignumz00()))
									{	/* Unsafe/bignumber.scm 1052 */
										BgL_tmpz00_8371 = BFALSE;
									}
								else
									{	/* Unsafe/bignumber.scm 1054 */
										BGL_LONGLONG_T BgL_mz00_2176;
										BGL_LONGLONG_T BgL_dz00_2177;

										BgL_mz00_2176 =
											(BgL_nz00_2170 *
											(LONG_TO_LLONG(((long) 1)) << (int) (((long) 30))));
										{	/* Unsafe/bignumber.scm 1055 */
											long BgL_arg1911z00_2186;

											{	/* Unsafe/bignumber.scm 1055 */
												int BgL_iz00_5675;

												BgL_iz00_5675 = (int) (BgL_iz00_2171);
												{	/* Unsafe/bignumber.scm 234 */
													uint16_t BgL_arg1246z00_5676;

													{	/* Unsafe/bignumber.scm 234 */
														obj_t BgL_arg1247z00_5677;

														BgL_arg1247z00_5677 =
															BGL_BIGNUM_U16VECT(BgL_xz00_99);
														{	/* Unsafe/bignumber.scm 234 */
															long BgL_tmpz00_8383;

															BgL_tmpz00_8383 = (long) (BgL_iz00_5675);
															BgL_arg1246z00_5676 =
																BGL_U16VREF(BgL_arg1247z00_5677,
																BgL_tmpz00_8383);
													}}
													{	/* Unsafe/bignumber.scm 234 */
														long BgL_res3017z00_5682;

														{	/* Unsafe/bignumber.scm 234 */
															long BgL_arg2198z00_5679;

															BgL_arg2198z00_5679 =
																(long) (BgL_arg1246z00_5676);
															{	/* Unsafe/bignumber.scm 234 */
																long BgL_res3016z00_5681;

																BgL_res3016z00_5681 =
																	(long) (BgL_arg2198z00_5679);
																BgL_res3017z00_5682 = BgL_res3016z00_5681;
														}}
														BgL_arg1911z00_2186 = BgL_res3017z00_5682;
											}}}
											BgL_dz00_2177 = LONG_TO_LLONG(BgL_arg1911z00_2186);
										}
										if (
											(BgL_mz00_2176 <
												(((-((BGL_LONGLONG_T) 2)) *
														(LONG_TO_LLONG(((long) 1)) <<
															(int) (((long) 30)))) + BgL_dz00_2177)))
											{	/* Unsafe/bignumber.scm 1056 */
												BgL_tmpz00_8371 = BFALSE;
											}
										else
											{
												long BgL_iz00_8398;
												BGL_LONGLONG_T BgL_nz00_8396;

												BgL_nz00_8396 = (BgL_mz00_2176 - BgL_dz00_2177);
												BgL_iz00_8398 = (BgL_iz00_2171 - ((long) 1));
												BgL_iz00_2171 = BgL_iz00_8398;
												BgL_nz00_2170 = BgL_nz00_8396;
												goto BgL_zc3z04anonymousza31899ze3z87_2172;
											}
									}
							}
						else
							{	/* Unsafe/bignumber.scm 1060 */
								bool_t BgL_test3503z00_8400;

								{	/* Unsafe/bignumber.scm 1060 */
									bool_t BgL_res3027z00_5712;

									{	/* Unsafe/bignumber.scm 418 */
										long BgL_arg1393z00_5701;

										{	/* Unsafe/bignumber.scm 230 */
											uint16_t BgL_arg1239z00_5703;

											{	/* Unsafe/bignumber.scm 230 */
												obj_t BgL_arg1242z00_5704;

												BgL_arg1242z00_5704 = BGL_BIGNUM_U16VECT(BgL_xz00_99);
												BgL_arg1239z00_5703 =
													BGL_U16VREF(BgL_arg1242z00_5704, ((long) 0));
											}
											{	/* Unsafe/bignumber.scm 230 */
												long BgL_res3025z00_5709;

												{	/* Unsafe/bignumber.scm 230 */
													long BgL_arg2198z00_5706;

													BgL_arg2198z00_5706 = (long) (BgL_arg1239z00_5703);
													{	/* Unsafe/bignumber.scm 230 */
														long BgL_res3024z00_5708;

														BgL_res3024z00_5708 = (long) (BgL_arg2198z00_5706);
														BgL_res3025z00_5709 = BgL_res3024z00_5708;
												}}
												BgL_arg1393z00_5701 = BgL_res3025z00_5709;
										}}
										BgL_res3027z00_5712 = (BgL_arg1393z00_5701 == ((long) 0));
									}
									BgL_test3503z00_8400 = BgL_res3027z00_5712;
								}
								if (BgL_test3503z00_8400)
									{	/* Unsafe/bignumber.scm 1060 */
										BgL_tmpz00_8371 = make_bllong(BgL_nz00_2170);
									}
								else
									{	/* Unsafe/bignumber.scm 1060 */
										if (
											(BgL_nz00_2170 ==
												((-((BGL_LONGLONG_T) 2)) *
													(LONG_TO_LLONG(((long) 1)) << (int) (((long) 30))))))
											{	/* Unsafe/bignumber.scm 1062 */
												BgL_tmpz00_8371 = BFALSE;
											}
										else
											{	/* Unsafe/bignumber.scm 1062 */
												BgL_tmpz00_8371 =
													make_bllong((((BGL_LONGLONG_T) 0) - BgL_nz00_2170));
											}
									}
							}
						return BLLONG_TO_LLONG(BgL_tmpz00_8371);
					}
				}
			}
		}

	}



/* &$$bignum->llong */
	obj_t BGl_z62z42z42bignumzd2ze3llongz53zz__bignumz00(obj_t BgL_envz00_6091,
		obj_t BgL_xz00_6092)
	{
		{	/* Unsafe/bignumber.scm 1048 */
			{	/* Unsafe/bignumber.scm 1049 */
				BGL_LONGLONG_T BgL_tmpz00_8416;

				{	/* Unsafe/bignumber.scm 1049 */
					obj_t BgL_auxz00_8417;

					if (BIGNUMP(BgL_xz00_6092))
						{	/* Unsafe/bignumber.scm 1049 */
							BgL_auxz00_8417 = BgL_xz00_6092;
						}
					else
						{
							obj_t BgL_auxz00_8420;

							BgL_auxz00_8420 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 33432)), BGl_string3231z00zz__bignumz00,
								BGl_string3200z00zz__bignumz00, BgL_xz00_6092);
							FAILURE(BgL_auxz00_8420, BFALSE, BFALSE);
						}
					BgL_tmpz00_8416 = bgl_bignum_to_llong(BgL_auxz00_8417);
				}
				return make_bllong(BgL_tmpz00_8416);
			}
		}

	}



/* $$seed-rand */
	BGL_EXPORTED_DEF obj_t bgl_seed_rand(long BgL_seedz00_100)
	{
		{	/* Unsafe/bignumber.scm 1070 */
			{	/* Unsafe/bignumber.scm 1071 */
				int BgL_tmpz00_8426;

				BgL_tmpz00_8426 = (int) (BgL_seedz00_100);
				srand(BgL_tmpz00_8426);
			} BUNSPEC;
			return BINT(BgL_seedz00_100);
		}

	}



/* &$$seed-rand */
	obj_t BGl_z62z42z42seedzd2randzb0zz__bignumz00(obj_t BgL_envz00_6093,
		obj_t BgL_seedz00_6094)
	{
		{	/* Unsafe/bignumber.scm 1070 */
			{	/* Unsafe/bignumber.scm 1071 */
				long BgL_auxz00_8430;

				{	/* Unsafe/bignumber.scm 1071 */
					obj_t BgL_tmpz00_8431;

					if (INTEGERP(BgL_seedz00_6094))
						{	/* Unsafe/bignumber.scm 1071 */
							BgL_tmpz00_8431 = BgL_seedz00_6094;
						}
					else
						{
							obj_t BgL_auxz00_8434;

							BgL_auxz00_8434 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 34192)), BGl_string3232z00zz__bignumz00,
								BGl_string3191z00zz__bignumz00, BgL_seedz00_6094);
							FAILURE(BgL_auxz00_8434, BFALSE, BFALSE);
						}
					BgL_auxz00_8430 = (long) CINT(BgL_tmpz00_8431);
				}
				return bgl_seed_rand(BgL_auxz00_8430);
			}
		}

	}



/* make-random-u8vector */
	obj_t BGl_makezd2randomzd2u8vectorz00zz__bignumz00(obj_t BgL_lenz00_101)
	{
		{	/* Unsafe/bignumber.scm 1077 */
			{
				obj_t BgL_vecz00_2198;

				{	/* Unsafe/bignumber.scm 1085 */
					obj_t BgL_arg1918z00_2195;

					{	/* Llib/srfi4.scm 447 */

						BgL_arg1918z00_2195 =
							BGl_makezd2u8vectorzd2zz__srfi4z00(
							(long) CINT(BgL_lenz00_101), (uint8_t) (0));
					}
					BgL_vecz00_2198 = BgL_arg1918z00_2195;
					{	/* Unsafe/bignumber.scm 1079 */
						long BgL_g1068z00_2200;

						{	/* Unsafe/bignumber.scm 1079 */
							long BgL_arg1925z00_2208;

							{	/* Unsafe/bignumber.scm 1079 */
								long BgL_res3032z00_5726;

								BgL_res3032z00_5726 = BGL_HVECTOR_LENGTH(BgL_vecz00_2198);
								BgL_arg1925z00_2208 = BgL_res3032z00_5726;
							}
							BgL_g1068z00_2200 = (BgL_arg1925z00_2208 - ((long) 1));
						}
						{
							long BgL_iz00_2202;

							BgL_iz00_2202 = BgL_g1068z00_2200;
						BgL_zc3z04anonymousza31921ze3z87_2203:
							if ((BgL_iz00_2202 == ((long) -1)))
								{	/* Unsafe/bignumber.scm 1080 */
									return BgL_vecz00_2198;
								}
							else
								{	/* Unsafe/bignumber.scm 1080 */
									{	/* Unsafe/bignumber.scm 1083 */
										long BgL_arg1923z00_2205;

										{	/* Unsafe/bignumber.scm 1083 */
											long BgL_res3036z00_5734;

											{	/* Unsafe/bignumber.scm 1083 */
												int BgL_arg2095z00_5732;

												BgL_arg2095z00_5732 = rand();
												BgL_res3036z00_5734 =
													BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
													(long) (BgL_arg2095z00_5732), ((long) 256));
											}
											BgL_arg1923z00_2205 = BgL_res3036z00_5734;
										}
										{	/* Unsafe/bignumber.scm 1083 */
											uint8_t BgL_tmpz00_8449;

											BgL_tmpz00_8449 = (uint8_t) (BgL_arg1923z00_2205);
											BGL_U8VSET(BgL_vecz00_2198, BgL_iz00_2202,
												BgL_tmpz00_8449);
										} BUNSPEC;
									}
									{
										long BgL_iz00_8452;

										BgL_iz00_8452 = (BgL_iz00_2202 - ((long) 1));
										BgL_iz00_2202 = BgL_iz00_8452;
										goto BgL_zc3z04anonymousza31921ze3z87_2203;
									}
								}
						}
					}
				}
			}
		}

	}



/* $$randbx */
	BGL_EXPORTED_DEF obj_t bgl_rand_bignum(obj_t BgL_rangez00_102)
	{
		{	/* Unsafe/bignumber.scm 1090 */
			{	/* Unsafe/bignumber.scm 1091 */
				long BgL_rangezd2bitszd2_2210;

				BgL_rangezd2bitszd2_2210 =
					BGl_bignumzd2integerzd2lengthz00zz__bignumz00(BgL_rangez00_102);
				{	/* Unsafe/bignumber.scm 1091 */
					obj_t BgL_lenz00_2211;

					{	/* Unsafe/bignumber.scm 1092 */
						long BgL_arg1931z00_2224;

						BgL_arg1931z00_2224 = (BgL_rangezd2bitszd2_2210 + ((long) 20));
						BgL_lenz00_2211 =
							BGl_quotientz00zz__r4_numbers_6_5_fixnumz00(BINT
							(BgL_arg1931z00_2224), BINT(((long) 8)));
					}
					{	/* Unsafe/bignumber.scm 1092 */
						obj_t BgL_nz00_2212;

						BgL_nz00_2212 =
							BGl_bignumzd2exptzd2zz__bignumz00(bgl_long_to_bignum(((long)
									256)), bgl_long_to_bignum((long) CINT(BgL_lenz00_2211)));
						{	/* Unsafe/bignumber.scm 1093 */
							obj_t BgL_divisorz00_2213;

							{	/* Unsafe/bignumber.scm 1094 */
								obj_t BgL_res3041z00_5747;

								{	/* Unsafe/bignumber.scm 797 */
									obj_t BgL_arg1700z00_5744;

									{	/* Unsafe/bignumber.scm 797 */
										obj_t BgL_arg1701z00_5745;

										BgL_arg1701z00_5745 =
											BGl_bignumzd2divzd2zz__bignumz00(BgL_nz00_2212,
											BgL_rangez00_102);
										BgL_arg1700z00_5744 = CAR(((obj_t) BgL_arg1701z00_5745));
									}
									BgL_res3041z00_5747 = BgL_arg1700z00_5744;
								}
								BgL_divisorz00_2213 = BgL_res3041z00_5747;
							}
							{	/* Unsafe/bignumber.scm 1094 */
								obj_t BgL_limitz00_2214;

								BgL_limitz00_2214 =
									bgl_bignum_mul(BgL_divisorz00_2213, BgL_rangez00_102);
								{	/* Unsafe/bignumber.scm 1095 */

									{

									BgL_zc3z04anonymousza31926ze3z87_2216:
										{	/* Unsafe/bignumber.scm 1097 */
											obj_t BgL_u8vectz00_2217;

											BgL_u8vectz00_2217 =
												BGl_makezd2randomzd2u8vectorz00zz__bignumz00
												(BgL_lenz00_2211);
											{	/* Unsafe/bignumber.scm 1097 */
												obj_t BgL_xz00_2218;

												BgL_xz00_2218 =
													BGl_fixnumzd2listzd2ze3bignumze3zz__bignumz00
													(BGl_u8vectorzd2ze3listz31zz__srfi4z00
													(BgL_u8vectz00_2217), ((long) 255));
												{	/* Unsafe/bignumber.scm 1098 */

													{	/* Unsafe/bignumber.scm 1099 */
														bool_t BgL_test3508z00_8470;

														if (BGl_z42zc3bxz81zz__bignumz00(BgL_xz00_2218,
																BgL_limitz00_2214))
															{	/* Unsafe/bignumber.scm 412 */
																BgL_test3508z00_8470 = ((bool_t) 0);
															}
														else
															{	/* Unsafe/bignumber.scm 412 */
																BgL_test3508z00_8470 = ((bool_t) 1);
															}
														if (BgL_test3508z00_8470)
															{	/* Unsafe/bignumber.scm 1099 */
																goto BgL_zc3z04anonymousza31926ze3z87_2216;
															}
														else
															{	/* Unsafe/bignumber.scm 1101 */
																obj_t BgL_res3043z00_5757;

																{	/* Unsafe/bignumber.scm 797 */
																	obj_t BgL_arg1700z00_5754;

																	{	/* Unsafe/bignumber.scm 797 */
																		obj_t BgL_arg1701z00_5755;

																		BgL_arg1701z00_5755 =
																			BGl_bignumzd2divzd2zz__bignumz00
																			(BgL_xz00_2218, BgL_divisorz00_2213);
																		BgL_arg1700z00_5754 =
																			CAR(((obj_t) BgL_arg1701z00_5755));
																	}
																	BgL_res3043z00_5757 = BgL_arg1700z00_5754;
																}
																return BgL_res3043z00_5757;
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



/* &$$randbx */
	obj_t BGl_z62z42z42randbxz62zz__bignumz00(obj_t BgL_envz00_6095,
		obj_t BgL_rangez00_6096)
	{
		{	/* Unsafe/bignumber.scm 1090 */
			{	/* Unsafe/bignumber.scm 1091 */
				obj_t BgL_auxz00_8476;

				if (BIGNUMP(BgL_rangez00_6096))
					{	/* Unsafe/bignumber.scm 1091 */
						BgL_auxz00_8476 = BgL_rangez00_6096;
					}
				else
					{
						obj_t BgL_auxz00_8479;

						BgL_auxz00_8479 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
							BINT(((long) 34959)), BGl_string3233z00zz__bignumz00,
							BGl_string3200z00zz__bignumz00, BgL_rangez00_6096);
						FAILURE(BgL_auxz00_8479, BFALSE, BFALSE);
					}
				return bgl_rand_bignum(BgL_auxz00_8476);
			}
		}

	}



/* $$flonum->bignum */
	BGL_EXPORTED_DEF obj_t bgl_flonum_to_bignum(double BgL_nz00_103)
	{
		{	/* Unsafe/bignumber.scm 1106 */
			{	/* Unsafe/bignumber.scm 1107 */
				long BgL_arg1932z00_5758;

				BgL_arg1932z00_5758 = (long) (BgL_nz00_103);
				return bgl_long_to_bignum(BgL_arg1932z00_5758);
			}
		}

	}



/* &$$flonum->bignum */
	obj_t BGl_z62z42z42flonumzd2ze3bignumz53zz__bignumz00(obj_t BgL_envz00_6097,
		obj_t BgL_nz00_6098)
	{
		{	/* Unsafe/bignumber.scm 1106 */
			{	/* Unsafe/bignumber.scm 1107 */
				double BgL_auxz00_8486;

				{	/* Unsafe/bignumber.scm 1107 */
					obj_t BgL_tmpz00_8487;

					if (REALP(BgL_nz00_6098))
						{	/* Unsafe/bignumber.scm 1107 */
							BgL_tmpz00_8487 = BgL_nz00_6098;
						}
					else
						{
							obj_t BgL_auxz00_8490;

							BgL_auxz00_8490 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 35640)), BGl_string3234z00zz__bignumz00,
								BGl_string3235z00zz__bignumz00, BgL_nz00_6098);
							FAILURE(BgL_auxz00_8490, BFALSE, BFALSE);
						}
					BgL_auxz00_8486 = REAL_TO_DOUBLE(BgL_tmpz00_8487);
				}
				return bgl_flonum_to_bignum(BgL_auxz00_8486);
			}
		}

	}



/* $$bignum->flonum */
	BGL_EXPORTED_DEF double bgl_bignum_to_flonum(obj_t BgL_nz00_104)
	{
		{	/* Unsafe/bignumber.scm 1109 */
			{	/* Unsafe/bignumber.scm 1110 */
				long BgL_tmpz00_8496;

				BgL_tmpz00_8496 = bgl_bignum_to_long(BgL_nz00_104);
				return (double) (BgL_tmpz00_8496);
		}}

	}



/* &$$bignum->flonum */
	obj_t BGl_z62z42z42bignumzd2ze3flonumz53zz__bignumz00(obj_t BgL_envz00_6099,
		obj_t BgL_nz00_6100)
	{
		{	/* Unsafe/bignumber.scm 1109 */
			{	/* Unsafe/bignumber.scm 1110 */
				double BgL_tmpz00_8499;

				{	/* Unsafe/bignumber.scm 1110 */
					obj_t BgL_auxz00_8500;

					if (BIGNUMP(BgL_nz00_6100))
						{	/* Unsafe/bignumber.scm 1110 */
							BgL_auxz00_8500 = BgL_nz00_6100;
						}
					else
						{
							obj_t BgL_auxz00_8503;

							BgL_auxz00_8503 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3188z00zz__bignumz00,
								BINT(((long) 35712)), BGl_string3236z00zz__bignumz00,
								BGl_string3200z00zz__bignumz00, BgL_nz00_6100);
							FAILURE(BgL_auxz00_8503, BFALSE, BFALSE);
						}
					BgL_tmpz00_8499 = bgl_bignum_to_flonum(BgL_auxz00_8500);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_8499);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__bignumz00()
	{
		{	/* Unsafe/bignumber.scm 45 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__bignumz00()
	{
		{	/* Unsafe/bignumber.scm 45 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__bignumz00()
	{
		{	/* Unsafe/bignumber.scm 45 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__bignumz00()
	{
		{	/* Unsafe/bignumber.scm 45 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string3237z00zz__bignumz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string3237z00zz__bignumz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string3237z00zz__bignumz00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string3237z00zz__bignumz00));
		}

	}

#ifdef __cplusplus
}
#endif
#endif
