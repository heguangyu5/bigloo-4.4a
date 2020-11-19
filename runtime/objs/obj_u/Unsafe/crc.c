/*===========================================================================*/
/*   (Unsafe/crc.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Unsafe/crc.scm -indent -o objs/obj_u/Unsafe/crc.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62crczd2longzd2lez62zz__crcz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__crcz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2crcsza2z00zz__crcz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_crczd2lengthzd2zz__crcz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_crczd2polynomialzd2lez00zz__crcz00(obj_t);
	extern obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__crcz00();
	static obj_t BGl_z62crczd2lengthzb0zz__crcz00(obj_t, obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62crczd2polynomialzb0zz__crcz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__crcz00();
	extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__crcz00();
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62crczd2llongzd2lez62zz__crcz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL long BGl_crczd2elongzd2lez00zz__crcz00(unsigned char, long,
		long, long);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62registerzd2crcz12za2zz__crcz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__crczd2stringzd2zz__crcz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__crcz00();
	static obj_t BGl_list3214z00zz__crcz00 = BUNSPEC;
	extern obj_t BGl_readzd2charzd2zz__r4_input_6_10_2z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_crczd2polynomialzd2zz__crcz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_crczd2stringzd2zz__crcz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__crczd2portzd2zz__crcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_crczd2portzd2zz__crcz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t bgl_close_input_port(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31613ze33015ze5zz__crcz00(obj_t);
	static obj_t BGl__crczd2mmapzd2zz__crcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_crczd2mmapzd2zz__crcz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_crczd2fastzd2portz00zz__crcz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62crczd2polynomialzd2lez62zz__crcz00(obj_t, obj_t);
	static obj_t BGl_z62crczd2nameszb0zz__crcz00(obj_t);
	static obj_t BGl_crczd2fastzd2mmapz00zz__crcz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31613ze3ze5zz__crcz00(obj_t);
	extern obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_getzd2crczd2zz__crcz00(obj_t);
	static obj_t BGl_z62crczd2longzb0zz__crcz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__crcz00(long,
		char *);
	static obj_t BGl_keyword3215z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_keyword3217z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_keyword3219z00zz__crcz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_crczd2nameszd2zz__crcz00();
	static obj_t BGl_cnstzd2initzd2zz__crcz00();
	static obj_t BGl_z62crczd2llongzb0zz__crcz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_registerzd2crcz12zc0zz__crcz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__crcz00();
	static obj_t BGl_symbol3201z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3203z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3205z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_z62crczd2elongzd2lez62zz__crcz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol3207z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3139z00zz__crcz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_crcz00zz__crcz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL long BGl_crczd2longzd2lez00zz__crcz00(unsigned char, long,
		long, long);
	static obj_t BGl_symbol3221z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3141z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3143z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3145z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3228z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3147z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_z62crczd2elongzb0zz__crcz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_crczd2llongzd2zz__crcz00(unsigned char,
		BGL_LONGLONG_T, BGL_LONGLONG_T, long);
	static obj_t BGl_symbol3152z00zz__crcz00 = BUNSPEC;
	BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_crczd2llongzd2lez00zz__crcz00(unsigned
		char, BGL_LONGLONG_T, BGL_LONGLONG_T, long);
	static obj_t BGl_symbol3234z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3155z00zz__crcz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_crczd2polynomialzd2bezd2ze3lez31zz__crcz00(obj_t,
		obj_t);
	static obj_t BGl_symbol3237z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3157z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3159z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3240z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3161z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3163z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3165z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3167z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3169z00zz__crcz00 = BUNSPEC;
	extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	static obj_t BGl_symbol3171z00zz__crcz00 = BUNSPEC;
	static obj_t BGl__crczd2filezd2zz__crcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_crczd2filezd2zz__crcz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol3173z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3175z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3177z00zz__crcz00 = BUNSPEC;
	BGL_EXPORTED_DECL long BGl_crczd2longzd2zz__crcz00(unsigned char, long, long,
		long);
	extern obj_t bstring_to_keyword(obj_t);
	static obj_t BGl_symbol3181z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3184z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3188z00zz__crcz00 = BUNSPEC;
	static obj_t BGl__crcz00zz__crcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_crczd2elongzd2zz__crcz00(unsigned char, long, long,
		long);
	static obj_t BGl_z62crczd2polynomialzd2bezd2ze3lez53zz__crcz00(obj_t, obj_t,
		obj_t);
	static obj_t *__cnst;


	extern obj_t BGl_bitzd2orelongzd2envz00zz__bitz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_registerzd2crcz12zd2envz12zz__crcz00,
		BgL_bgl_za762registerza7d2cr3245z00, BGl_z62registerzd2crcz12za2zz__crcz00,
		0L, BUNSPEC, 3);
	extern obj_t BGl_bitzd2rshllongzd2envz00zz__bitz00;
	   
		 
		DEFINE_STRING(BGl_string3200z00zz__crcz00,
		BgL_bgl_string3200za700za7za7_3246za7, "&crc-llong-le", 13);
	      DEFINE_STRING(BGl_string3202z00zz__crcz00,
		BgL_bgl_string3202za700za7za7_3247za7, "long", 4);
	      DEFINE_STRING(BGl_string3204z00zz__crcz00,
		BgL_bgl_string3204za700za7za7_3248za7, "elong", 5);
	      DEFINE_STRING(BGl_string3206z00zz__crcz00,
		BgL_bgl_string3206za700za7za7_3249za7, "llong", 5);
	      DEFINE_STRING(BGl_string3208z00zz__crcz00,
		BgL_bgl_string3208za700za7za7_3250za7, "crc-gen", 7);
	      DEFINE_STRING(BGl_string3209z00zz__crcz00,
		BgL_bgl_string3209za700za7za7_3251za7, "could not determine type", 24);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2longzd2lezd2envzd2zz__crcz00,
		BgL_bgl_za762crcza7d2longza7d23252za7, BGl_z62crczd2longzd2lez62zz__crcz00,
		0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string3216z00zz__crcz00,
		BgL_bgl_string3216za700za7za7_3253za7, "big-endian?", 11);
	      DEFINE_STRING(BGl_string3218z00zz__crcz00,
		BgL_bgl_string3218za700za7za7_3254za7, "final-xor", 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2elongzd2envz00zz__crcz00,
		BgL_bgl_za762crcza7d2elongza7b3255za7, BGl_z62crczd2elongzb0zz__crcz00, 0L,
		BUNSPEC, 4);
	      DEFINE_STRING(BGl_string3220z00zz__crcz00,
		BgL_bgl_string3220za700za7za7_3256za7, "init", 4);
	      DEFINE_STRING(BGl_string3140z00zz__crcz00,
		BgL_bgl_string3140za700za7za7_3257za7, "ieee-32", 7);
	      DEFINE_STRING(BGl_string3222z00zz__crcz00,
		BgL_bgl_string3222za700za7za7_3258za7, "crc", 3);
	      DEFINE_STRING(BGl_string3223z00zz__crcz00,
		BgL_bgl_string3223za700za7za7_3259za7, "Illegal keyword argument", 24);
	      DEFINE_STRING(BGl_string3142z00zz__crcz00,
		BgL_bgl_string3142za700za7za7_3260za7, "radix-64-24", 11);
	      DEFINE_STRING(BGl_string3224z00zz__crcz00,
		BgL_bgl_string3224za700za7za7_3261za7,
		"wrong number of arguments: [2..5] expected, provided", 52);
	      DEFINE_STRING(BGl_string3225z00zz__crcz00,
		BgL_bgl_string3225za700za7za7_3262za7, "_crc", 4);
	      DEFINE_STRING(BGl_string3144z00zz__crcz00,
		BgL_bgl_string3144za700za7za7_3263za7, "ccitt-16", 8);
	      DEFINE_STRING(BGl_string3226z00zz__crcz00,
		BgL_bgl_string3226za700za7za7_3264za7, "mmap", 4);
	      DEFINE_STRING(BGl_string3227z00zz__crcz00,
		BgL_bgl_string3227za700za7za7_3265za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string3146z00zz__crcz00,
		BgL_bgl_string3146za700za7za7_3266za7, "dnp-16", 6);
	      DEFINE_STRING(BGl_string3229z00zz__crcz00,
		BgL_bgl_string3229za700za7za7_3267za7, "crc-file", 8);
	      DEFINE_STRING(BGl_string3148z00zz__crcz00,
		BgL_bgl_string3148za700za7za7_3268za7, "ibm-16", 6);
	      DEFINE_STRING(BGl_string3230z00zz__crcz00,
		BgL_bgl_string3230za700za7za7_3269za7, "_crc-file", 9);
	      DEFINE_STRING(BGl_string3231z00zz__crcz00,
		BgL_bgl_string3231za700za7za7_3270za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3232z00zz__crcz00,
		BgL_bgl_string3232za700za7za7_3271za7, "Could not open file", 19);
	      DEFINE_STRING(BGl_string3233z00zz__crcz00,
		BgL_bgl_string3233za700za7za7_3272za7, "input-port", 10);
	      DEFINE_STRING(BGl_string3153z00zz__crcz00,
		BgL_bgl_string3153za700za7za7_3273za7, "c-32", 4);
	      DEFINE_STRING(BGl_string3235z00zz__crcz00,
		BgL_bgl_string3235za700za7za7_3274za7, "crc-string", 10);
	      DEFINE_STRING(BGl_string3236z00zz__crcz00,
		BgL_bgl_string3236za700za7za7_3275za7, "_crc-string", 11);
	      DEFINE_STRING(BGl_string3156z00zz__crcz00,
		BgL_bgl_string3156za700za7za7_3276za7, "k-32", 4);
	      DEFINE_STRING(BGl_string3238z00zz__crcz00,
		BgL_bgl_string3238za700za7za7_3277za7, "crc-port", 8);
	      DEFINE_STRING(BGl_string3239z00zz__crcz00,
		BgL_bgl_string3239za700za7za7_3278za7, "_crc-port", 9);
	      DEFINE_STRING(BGl_string3158z00zz__crcz00,
		BgL_bgl_string3158za700za7za7_3279za7, "q-32", 4);
	extern obj_t BGl_bitzd2lshzd2envz00zz__bitz00;
	   
		 
		DEFINE_STRING(BGl_string3241z00zz__crcz00,
		BgL_bgl_string3241za700za7za7_3280za7, "crc-mmap", 8);
	      DEFINE_STRING(BGl_string3160z00zz__crcz00,
		BgL_bgl_string3160za700za7za7_3281za7, "itu-4", 5);
	      DEFINE_STRING(BGl_string3242z00zz__crcz00,
		BgL_bgl_string3242za700za7za7_3282za7, "_crc-mmap", 9);
	      DEFINE_STRING(BGl_string3243z00zz__crcz00,
		BgL_bgl_string3243za700za7za7_3283za7, "Could not find crc", 18);
	      DEFINE_STRING(BGl_string3162z00zz__crcz00,
		BgL_bgl_string3162za700za7za7_3284za7, "epc-5", 5);
	      DEFINE_STRING(BGl_string3244z00zz__crcz00,
		BgL_bgl_string3244za700za7za7_3285za7, "bad polynomial", 14);
	extern obj_t BGl_bitzd2lshelongzd2envz00zz__bitz00;
	   
		 
		DEFINE_STRING(BGl_string3164z00zz__crcz00,
		BgL_bgl_string3164za700za7za7_3286za7, "itu-5", 5);
	      DEFINE_STRING(BGl_string3166z00zz__crcz00,
		BgL_bgl_string3166za700za7za7_3287za7, "usb-5", 5);
	      DEFINE_STRING(BGl_string3168z00zz__crcz00,
		BgL_bgl_string3168za700za7za7_3288za7, "itu-6", 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2elongzd2lezd2envzd2zz__crcz00,
		BgL_bgl_za762crcza7d2elongza7d3289za7, BGl_z62crczd2elongzd2lez62zz__crcz00,
		0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string3170z00zz__crcz00,
		BgL_bgl_string3170za700za7za7_3290za7, "atm-8", 5);
	      DEFINE_STRING(BGl_string3172z00zz__crcz00,
		BgL_bgl_string3172za700za7za7_3291za7, "ccitt-8", 7);
	      DEFINE_STRING(BGl_string3174z00zz__crcz00,
		BgL_bgl_string3174za700za7za7_3292za7, "dallas/maxim-8", 14);
	      DEFINE_STRING(BGl_string3176z00zz__crcz00,
		BgL_bgl_string3176za700za7za7_3293za7, "sae-j1850-8", 11);
	      DEFINE_STRING(BGl_string3178z00zz__crcz00,
		BgL_bgl_string3178za700za7za7_3294za7, "can-15", 6);
	      DEFINE_STRING(BGl_string3182z00zz__crcz00,
		BgL_bgl_string3182za700za7za7_3295za7, "bit-andellong", 13);
	      DEFINE_STRING(BGl_string3185z00zz__crcz00,
		BgL_bgl_string3185za700za7za7_3296za7, "iso-64", 6);
	extern obj_t BGl_bitzd2rshelongzd2envz00zz__bitz00;
	   
		 
		DEFINE_STRING(BGl_string3189z00zz__crcz00,
		BgL_bgl_string3189za700za7za7_3297za7, "ecma-182-64", 11);
	      DEFINE_LLONG(BGl_llong3211z00zz__crcz00,
		BgL_bgl_llong3211za700za7za7__3298za7, ((BGL_LONGLONG_T) 1));
	      DEFINE_LLONG(BGl_llong3213z00zz__crcz00,
		BgL_bgl_llong3213za700za7za7__3299za7, ((BGL_LONGLONG_T) 0));
	      DEFINE_STRING(BGl_string3190z00zz__crcz00,
		BgL_bgl_string3190za700za7za7_3300za7, "/tmp/4.4a/runtime/Unsafe/crc.scm",
		32);
	      DEFINE_STRING(BGl_string3191z00zz__crcz00,
		BgL_bgl_string3191za700za7za7_3301za7, "&crc-long", 9);
	      DEFINE_STRING(BGl_string3192z00zz__crcz00,
		BgL_bgl_string3192za700za7za7_3302za7, "bchar", 5);
	      DEFINE_STRING(BGl_string3193z00zz__crcz00,
		BgL_bgl_string3193za700za7za7_3303za7, "bint", 4);
	      DEFINE_STRING(BGl_string3194z00zz__crcz00,
		BgL_bgl_string3194za700za7za7_3304za7, "&crc-elong", 10);
	      DEFINE_STRING(BGl_string3195z00zz__crcz00,
		BgL_bgl_string3195za700za7za7_3305za7, "belong", 6);
	      DEFINE_STRING(BGl_string3196z00zz__crcz00,
		BgL_bgl_string3196za700za7za7_3306za7, "&crc-llong", 10);
	      DEFINE_STRING(BGl_string3197z00zz__crcz00,
		BgL_bgl_string3197za700za7za7_3307za7, "bllong", 6);
	      DEFINE_STRING(BGl_string3198z00zz__crcz00,
		BgL_bgl_string3198za700za7za7_3308za7, "&crc-long-le", 12);
	      DEFINE_STRING(BGl_string3199z00zz__crcz00,
		BgL_bgl_string3199za700za7za7_3309za7, "&crc-elong-le", 13);
	extern obj_t BGl_bitzd2rshzd2envz00zz__bitz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2mmapzd2envz00zz__crcz00,
		BgL_bgl__crcza7d2mmapza7d2za7za73310z00, opt_generic_entry,
		BGl__crczd2mmapzd2zz__crcz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2polynomialzd2envz00zz__crcz00,
		BgL_bgl_za762crcza7d2polynom3311z00, BGl_z62crczd2polynomialzb0zz__crcz00,
		0L, BUNSPEC, 1);
	      DEFINE_LLONG(BGl_llong3179z00zz__crcz00,
		BgL_bgl_llong3179za700za7za7__3312za7,
		(-(0 + ((BGL_LONGLONG_T) 65536 * ((0 + ((BGL_LONGLONG_T) 65536 * ((0 +
										((BGL_LONGLONG_T) 65536 *
											(((BGL_LONGLONG_T) 10240))))))))))));
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2filezd2envz00zz__crcz00,
		BgL_bgl__crcza7d2fileza7d2za7za73313z00, opt_generic_entry,
		BGl__crczd2filezd2zz__crcz00, BFALSE, -1);
	      DEFINE_LLONG(BGl_llong3180z00zz__crcz00,
		BgL_bgl_llong3180za700za7za7__3314za7, (-((BGL_LONGLONG_T) 1)));
	      DEFINE_LLONG(BGl_llong3183z00zz__crcz00,
		BgL_bgl_llong3183za700za7za7__3315za7, ((BGL_LONGLONG_T) 27));
	      DEFINE_LLONG(BGl_llong3186z00zz__crcz00,
		BgL_bgl_llong3186za700za7za7__3316za7,
		(-(61630 + ((BGL_LONGLONG_T) 65536 * ((10360 +
							((BGL_LONGLONG_T) 65536 * ((43114 +
										((BGL_LONGLONG_T) 65536 *
											(((BGL_LONGLONG_T) 13971))))))))))));
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2longzd2envz00zz__crcz00,
		BgL_bgl_za762crcza7d2longza7b03317za7, BGl_z62crczd2longzb0zz__crcz00, 0L,
		BUNSPEC, 4);
	      DEFINE_LLONG(BGl_llong3187z00zz__crcz00,
		BgL_bgl_llong3187za700za7za7__3318za7,
		(13971 + ((BGL_LONGLONG_T) 65536 * ((43498 +
						((BGL_LONGLONG_T) 65536 * ((57835 +
									((BGL_LONGLONG_T) 65536 * (((BGL_LONGLONG_T) 17136)))))))))));
	extern obj_t BGl_bitzd2andllongzd2envz00zz__bitz00;
	   
		 
		DEFINE_ELONG(BGl_elong3210z00zz__crcz00,
		BgL_bgl_elong3210za700za7za7__3319za7, 1);
	      DEFINE_ELONG(BGl_elong3212z00zz__crcz00,
		BgL_bgl_elong3212za700za7za7__3320za7, 0);
	      DEFINE_ELONG(BGl_elong3138z00zz__crcz00,
		BgL_bgl_elong3138za700za7za7__3321za7, 79764919);
	      DEFINE_ELONG(BGl_elong3149z00zz__crcz00,
		BgL_bgl_elong3149za700za7za7__3322za7, 1021788929);
	      DEFINE_ELONG(BGl_elong3150z00zz__crcz00,
		BgL_bgl_elong3150za700za7za7__3323za7, 540064207);
	      DEFINE_ELONG(BGl_elong3151z00zz__crcz00,
		BgL_bgl_elong3151za700za7za7__3324za7, 517762881);
	      DEFINE_ELONG(BGl_elong3154z00zz__crcz00,
		BgL_bgl_elong3154za700za7za7__3325za7, 1947962583);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2portzd2envz00zz__crcz00,
		BgL_bgl__crcza7d2portza7d2za7za73326z00, opt_generic_entry,
		BGl__crczd2portzd2zz__crcz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2llongzd2lezd2envzd2zz__crcz00,
		BgL_bgl_za762crcza7d2llongza7d3327za7, BGl_z62crczd2llongzd2lez62zz__crcz00,
		0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2nameszd2envz00zz__crcz00,
		BgL_bgl_za762crcza7d2namesza7b3328za7, BGl_z62crczd2nameszb0zz__crcz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2envzd2zz__crcz00,
		BgL_bgl__crcza700za7za7__crcza703329z00, opt_generic_entry,
		BGl__crcz00zz__crcz00, BFALSE, -1);
	extern obj_t BGl_bitzd2andelongzd2envz00zz__bitz00;
	extern obj_t BGl_bitzd2orllongzd2envz00zz__bitz00;
	extern obj_t BGl_bitzd2andzd2envz00zz__bitz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2stringzd2envz00zz__crcz00,
		BgL_bgl__crcza7d2stringza7d23330z00, opt_generic_entry,
		BGl__crczd2stringzd2zz__crcz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2llongzd2envz00zz__crcz00,
		BgL_bgl_za762crcza7d2llongza7b3331za7, BGl_z62crczd2llongzb0zz__crcz00, 0L,
		BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_crczd2polynomialzd2bezd2ze3lezd2envze3zz__crcz00,
		BgL_bgl_za762crcza7d2polynom3332z00,
		BGl_z62crczd2polynomialzd2bezd2ze3lez53zz__crcz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2lengthzd2envz00zz__crcz00,
		BgL_bgl_za762crcza7d2lengthza73333za7, BGl_z62crczd2lengthzb0zz__crcz00, 0L,
		BUNSPEC, 1);
	extern obj_t BGl_bitzd2orzd2envz00zz__bitz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2polynomialzd2lezd2envzd2zz__crcz00,
		BgL_bgl_za762crcza7d2polynom3334z00,
		BGl_z62crczd2polynomialzd2lez62zz__crcz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_bitzd2lshllongzd2envz00zz__bitz00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__crcz00));
		     ADD_ROOT((void *) (&BGl_za2crcsza2z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_list3214z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_keyword3215z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_keyword3217z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_keyword3219z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3201z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3203z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3205z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3207z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3139z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3221z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3141z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3143z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3145z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3228z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3147z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3152z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3234z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3155z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3237z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3157z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3159z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3240z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3161z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3163z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3165z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3167z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3169z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3171z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3173z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3175z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3177z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3181z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3184z00zz__crcz00));
		     ADD_ROOT((void *) (&BGl_symbol3188z00zz__crcz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__crcz00(long
		BgL_checksumz00_6436, char *BgL_fromz00_6437)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__crcz00))
				{
					BGl_requirezd2initializa7ationz75zz__crcz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__crcz00();
					BGl_cnstzd2initzd2zz__crcz00();
					return BGl_toplevelzd2initzd2zz__crcz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__crcz00()
	{
		{	/* Unsafe/crc.scm 15 */
			BGl_symbol3139z00zz__crcz00 =
				bstring_to_symbol(BGl_string3140z00zz__crcz00);
			BGl_symbol3141z00zz__crcz00 =
				bstring_to_symbol(BGl_string3142z00zz__crcz00);
			BGl_symbol3143z00zz__crcz00 =
				bstring_to_symbol(BGl_string3144z00zz__crcz00);
			BGl_symbol3145z00zz__crcz00 =
				bstring_to_symbol(BGl_string3146z00zz__crcz00);
			BGl_symbol3147z00zz__crcz00 =
				bstring_to_symbol(BGl_string3148z00zz__crcz00);
			BGl_symbol3152z00zz__crcz00 =
				bstring_to_symbol(BGl_string3153z00zz__crcz00);
			BGl_symbol3155z00zz__crcz00 =
				bstring_to_symbol(BGl_string3156z00zz__crcz00);
			BGl_symbol3157z00zz__crcz00 =
				bstring_to_symbol(BGl_string3158z00zz__crcz00);
			BGl_symbol3159z00zz__crcz00 =
				bstring_to_symbol(BGl_string3160z00zz__crcz00);
			BGl_symbol3161z00zz__crcz00 =
				bstring_to_symbol(BGl_string3162z00zz__crcz00);
			BGl_symbol3163z00zz__crcz00 =
				bstring_to_symbol(BGl_string3164z00zz__crcz00);
			BGl_symbol3165z00zz__crcz00 =
				bstring_to_symbol(BGl_string3166z00zz__crcz00);
			BGl_symbol3167z00zz__crcz00 =
				bstring_to_symbol(BGl_string3168z00zz__crcz00);
			BGl_symbol3169z00zz__crcz00 =
				bstring_to_symbol(BGl_string3170z00zz__crcz00);
			BGl_symbol3171z00zz__crcz00 =
				bstring_to_symbol(BGl_string3172z00zz__crcz00);
			BGl_symbol3173z00zz__crcz00 =
				bstring_to_symbol(BGl_string3174z00zz__crcz00);
			BGl_symbol3175z00zz__crcz00 =
				bstring_to_symbol(BGl_string3176z00zz__crcz00);
			BGl_symbol3177z00zz__crcz00 =
				bstring_to_symbol(BGl_string3178z00zz__crcz00);
			BGl_symbol3181z00zz__crcz00 =
				bstring_to_symbol(BGl_string3182z00zz__crcz00);
			BGl_symbol3184z00zz__crcz00 =
				bstring_to_symbol(BGl_string3185z00zz__crcz00);
			BGl_symbol3188z00zz__crcz00 =
				bstring_to_symbol(BGl_string3189z00zz__crcz00);
			BGl_symbol3201z00zz__crcz00 =
				bstring_to_symbol(BGl_string3202z00zz__crcz00);
			BGl_symbol3203z00zz__crcz00 =
				bstring_to_symbol(BGl_string3204z00zz__crcz00);
			BGl_symbol3205z00zz__crcz00 =
				bstring_to_symbol(BGl_string3206z00zz__crcz00);
			BGl_symbol3207z00zz__crcz00 =
				bstring_to_symbol(BGl_string3208z00zz__crcz00);
			BGl_keyword3215z00zz__crcz00 =
				bstring_to_keyword(BGl_string3216z00zz__crcz00);
			BGl_keyword3217z00zz__crcz00 =
				bstring_to_keyword(BGl_string3218z00zz__crcz00);
			BGl_keyword3219z00zz__crcz00 =
				bstring_to_keyword(BGl_string3220z00zz__crcz00);
			BGl_list3214z00zz__crcz00 =
				MAKE_YOUNG_PAIR(BGl_keyword3215z00zz__crcz00,
				MAKE_YOUNG_PAIR(BGl_keyword3217z00zz__crcz00,
					MAKE_YOUNG_PAIR(BGl_keyword3219z00zz__crcz00, BNIL)));
			BGl_symbol3221z00zz__crcz00 =
				bstring_to_symbol(BGl_string3222z00zz__crcz00);
			BGl_symbol3228z00zz__crcz00 =
				bstring_to_symbol(BGl_string3229z00zz__crcz00);
			BGl_symbol3234z00zz__crcz00 =
				bstring_to_symbol(BGl_string3235z00zz__crcz00);
			BGl_symbol3237z00zz__crcz00 =
				bstring_to_symbol(BGl_string3238z00zz__crcz00);
			return (BGl_symbol3240z00zz__crcz00 =
				bstring_to_symbol(BGl_string3241z00zz__crcz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__crcz00()
	{
		{	/* Unsafe/crc.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__crcz00()
	{
		{	/* Unsafe/crc.scm 15 */
			{	/* Unsafe/crc.scm 242 */
				obj_t BgL_arg1258z00_1329;
				obj_t BgL_arg1263z00_1330;

				{	/* Unsafe/crc.scm 242 */
					obj_t BgL_arg1268z00_1331;

					{	/* Unsafe/crc.scm 242 */
						obj_t BgL_arg1270z00_1332;

						{	/* Unsafe/crc.scm 242 */
							obj_t BgL_arg1271z00_1333;

							{	/* Unsafe/crc.scm 242 */
								long BgL_arg1273z00_1334;

								BgL_arg1273z00_1334 =
									(((long) 4294967295) & ((long) -306674912));
								BgL_arg1271z00_1333 =
									MAKE_YOUNG_PAIR(make_belong(BgL_arg1273z00_1334), BNIL);
							}
							BgL_arg1270z00_1332 =
								MAKE_YOUNG_PAIR(BGl_elong3138z00zz__crcz00,
								BgL_arg1271z00_1333);
						}
						BgL_arg1268z00_1331 =
							MAKE_YOUNG_PAIR(BINT(((long) 32)), BgL_arg1270z00_1332);
					}
					BgL_arg1258z00_1329 =
						MAKE_YOUNG_PAIR(BGl_symbol3139z00zz__crcz00, BgL_arg1268z00_1331);
				}
				{	/* Unsafe/crc.scm 243 */
					obj_t BgL_arg1274z00_1335;
					obj_t BgL_arg1275z00_1336;

					{	/* Unsafe/crc.scm 243 */
						obj_t BgL_arg1276z00_1337;

						{	/* Unsafe/crc.scm 243 */
							obj_t BgL_arg1277z00_1338;

							{	/* Unsafe/crc.scm 243 */
								obj_t BgL_arg1280z00_1339;

								BgL_arg1280z00_1339 =
									MAKE_YOUNG_PAIR(BINT(((long) 14627425)), BNIL);
								BgL_arg1277z00_1338 =
									MAKE_YOUNG_PAIR(BINT(((long) 8801531)), BgL_arg1280z00_1339);
							}
							BgL_arg1276z00_1337 =
								MAKE_YOUNG_PAIR(BINT(((long) 24)), BgL_arg1277z00_1338);
						}
						BgL_arg1274z00_1335 =
							MAKE_YOUNG_PAIR(BGl_symbol3141z00zz__crcz00, BgL_arg1276z00_1337);
					}
					{	/* Unsafe/crc.scm 244 */
						obj_t BgL_arg1281z00_1340;
						obj_t BgL_arg1282z00_1341;

						{	/* Unsafe/crc.scm 244 */
							obj_t BgL_arg1284z00_1342;

							{	/* Unsafe/crc.scm 244 */
								obj_t BgL_arg1285z00_1343;

								{	/* Unsafe/crc.scm 244 */
									obj_t BgL_arg1286z00_1344;

									BgL_arg1286z00_1344 =
										MAKE_YOUNG_PAIR(BINT(((long) 33800)), BNIL);
									BgL_arg1285z00_1343 =
										MAKE_YOUNG_PAIR(BINT(((long) 4129)), BgL_arg1286z00_1344);
								}
								BgL_arg1284z00_1342 =
									MAKE_YOUNG_PAIR(BINT(((long) 16)), BgL_arg1285z00_1343);
							}
							BgL_arg1281z00_1340 =
								MAKE_YOUNG_PAIR(BGl_symbol3143z00zz__crcz00,
								BgL_arg1284z00_1342);
						}
						{	/* Unsafe/crc.scm 245 */
							obj_t BgL_arg1287z00_1345;
							obj_t BgL_arg1288z00_1346;

							{	/* Unsafe/crc.scm 245 */
								obj_t BgL_arg1289z00_1347;

								{	/* Unsafe/crc.scm 245 */
									obj_t BgL_arg1290z00_1348;

									{	/* Unsafe/crc.scm 245 */
										obj_t BgL_arg1291z00_1349;

										BgL_arg1291z00_1349 =
											MAKE_YOUNG_PAIR(BINT(((long) 42684)), BNIL);
										BgL_arg1290z00_1348 =
											MAKE_YOUNG_PAIR(BINT(((long) 15717)),
											BgL_arg1291z00_1349);
									}
									BgL_arg1289z00_1347 =
										MAKE_YOUNG_PAIR(BINT(((long) 16)), BgL_arg1290z00_1348);
								}
								BgL_arg1287z00_1345 =
									MAKE_YOUNG_PAIR(BGl_symbol3145z00zz__crcz00,
									BgL_arg1289z00_1347);
							}
							{	/* Unsafe/crc.scm 246 */
								obj_t BgL_arg1292z00_1350;
								obj_t BgL_arg1295z00_1351;

								{	/* Unsafe/crc.scm 246 */
									obj_t BgL_arg1296z00_1352;

									{	/* Unsafe/crc.scm 246 */
										obj_t BgL_arg1297z00_1353;

										{	/* Unsafe/crc.scm 246 */
											obj_t BgL_arg1298z00_1354;

											BgL_arg1298z00_1354 =
												MAKE_YOUNG_PAIR(BINT(((long) 40961)), BNIL);
											BgL_arg1297z00_1353 =
												MAKE_YOUNG_PAIR(BINT(((long) 32773)),
												BgL_arg1298z00_1354);
										}
										BgL_arg1296z00_1352 =
											MAKE_YOUNG_PAIR(BINT(((long) 16)), BgL_arg1297z00_1353);
									}
									BgL_arg1292z00_1350 =
										MAKE_YOUNG_PAIR(BGl_symbol3147z00zz__crcz00,
										BgL_arg1296z00_1352);
								}
								{	/* Unsafe/crc.scm 247 */
									obj_t BgL_arg1299z00_1355;
									obj_t BgL_arg1300z00_1356;

									{	/* Unsafe/crc.scm 247 */
										obj_t BgL_arg1301z00_1357;

										{	/* Unsafe/crc.scm 247 */
											obj_t BgL_arg1302z00_1358;

											{	/* Unsafe/crc.scm 247 */
												obj_t BgL_arg1303z00_1359;

												BgL_arg1303z00_1359 =
													MAKE_YOUNG_PAIR(BINT(((long) 13874874)), BNIL);
												BgL_arg1302z00_1358 =
													MAKE_YOUNG_PAIR(BINT(((long) 6122955)),
													BgL_arg1303z00_1359);
											}
											BgL_arg1301z00_1357 =
												MAKE_YOUNG_PAIR(BINT(((long) 24)), BgL_arg1302z00_1358);
										}
										BgL_arg1299z00_1355 =
											MAKE_YOUNG_PAIR(BINT(((long) 24)), BgL_arg1301z00_1357);
									}
									{	/* Unsafe/crc.scm 248 */
										obj_t BgL_arg1304z00_1360;
										obj_t BgL_arg1306z00_1361;

										{	/* Unsafe/crc.scm 248 */
											obj_t BgL_arg1307z00_1362;

											{	/* Unsafe/crc.scm 248 */
												obj_t BgL_arg1308z00_1363;

												{	/* Unsafe/crc.scm 248 */
													obj_t BgL_arg1309z00_1364;

													BgL_arg1309z00_1364 =
														MAKE_YOUNG_PAIR(BGl_elong3149z00zz__crcz00, BNIL);
													BgL_arg1308z00_1363 =
														MAKE_YOUNG_PAIR(BGl_elong3150z00zz__crcz00,
														BgL_arg1309z00_1364);
												}
												BgL_arg1307z00_1362 =
													MAKE_YOUNG_PAIR(BINT(((long) 30)),
													BgL_arg1308z00_1363);
											}
											BgL_arg1304z00_1360 =
												MAKE_YOUNG_PAIR(BINT(((long) 30)), BgL_arg1307z00_1362);
										}
										{	/* Unsafe/crc.scm 249 */
											obj_t BgL_arg1310z00_1365;
											obj_t BgL_arg1311z00_1366;

											{	/* Unsafe/crc.scm 249 */
												obj_t BgL_arg1312z00_1367;

												{	/* Unsafe/crc.scm 249 */
													obj_t BgL_arg1313z00_1368;

													{	/* Unsafe/crc.scm 249 */
														obj_t BgL_arg1314z00_1369;

														{	/* Unsafe/crc.scm 249 */
															long BgL_arg1315z00_1370;

															BgL_arg1315z00_1370 =
																(((long) 4294967295) & ((long) -2097792136));
															BgL_arg1314z00_1369 =
																MAKE_YOUNG_PAIR(make_belong
																(BgL_arg1315z00_1370), BNIL);
														}
														BgL_arg1313z00_1368 =
															MAKE_YOUNG_PAIR(BGl_elong3151z00zz__crcz00,
															BgL_arg1314z00_1369);
													}
													BgL_arg1312z00_1367 =
														MAKE_YOUNG_PAIR(BINT(((long) 32)),
														BgL_arg1313z00_1368);
												}
												BgL_arg1310z00_1365 =
													MAKE_YOUNG_PAIR(BGl_symbol3152z00zz__crcz00,
													BgL_arg1312z00_1367);
											}
											{	/* Unsafe/crc.scm 250 */
												obj_t BgL_arg1316z00_1371;
												obj_t BgL_arg1317z00_1372;

												{	/* Unsafe/crc.scm 250 */
													obj_t BgL_arg1318z00_1373;

													{	/* Unsafe/crc.scm 250 */
														obj_t BgL_arg1319z00_1374;

														{	/* Unsafe/crc.scm 250 */
															obj_t BgL_arg1322z00_1375;

															{	/* Unsafe/crc.scm 250 */
																long BgL_arg1324z00_1376;

																BgL_arg1324z00_1376 =
																	(((long) 4294967295) & ((long) -349054930));
																BgL_arg1322z00_1375 =
																	MAKE_YOUNG_PAIR(make_belong
																	(BgL_arg1324z00_1376), BNIL);
															}
															BgL_arg1319z00_1374 =
																MAKE_YOUNG_PAIR(BGl_elong3154z00zz__crcz00,
																BgL_arg1322z00_1375);
														}
														BgL_arg1318z00_1373 =
															MAKE_YOUNG_PAIR(BINT(((long) 32)),
															BgL_arg1319z00_1374);
													}
													BgL_arg1316z00_1371 =
														MAKE_YOUNG_PAIR(BGl_symbol3155z00zz__crcz00,
														BgL_arg1318z00_1373);
												}
												{	/* Unsafe/crc.scm 252 */
													obj_t BgL_arg1325z00_1377;
													obj_t BgL_arg1326z00_1378;

													{	/* Unsafe/crc.scm 252 */
														obj_t BgL_arg1327z00_1379;

														{	/* Unsafe/crc.scm 252 */
															obj_t BgL_arg1328z00_1380;

															{	/* Unsafe/crc.scm 252 */
																long BgL_arg1329z00_1381;
																obj_t BgL_arg1330z00_1382;

																BgL_arg1329z00_1381 =
																	(((long) 4294967295) & ((long) -2126429781));
																{	/* Unsafe/crc.scm 253 */
																	long BgL_arg1331z00_1383;

																	BgL_arg1331z00_1383 =
																		(((long) 4294967295) & ((long) -712867199));
																	BgL_arg1330z00_1382 =
																		MAKE_YOUNG_PAIR(make_belong
																		(BgL_arg1331z00_1383), BNIL);
																}
																BgL_arg1328z00_1380 =
																	MAKE_YOUNG_PAIR(make_belong
																	(BgL_arg1329z00_1381), BgL_arg1330z00_1382);
															}
															BgL_arg1327z00_1379 =
																MAKE_YOUNG_PAIR(BINT(((long) 32)),
																BgL_arg1328z00_1380);
														}
														BgL_arg1325z00_1377 =
															MAKE_YOUNG_PAIR(BGl_symbol3157z00zz__crcz00,
															BgL_arg1327z00_1379);
													}
													{	/* Unsafe/crc.scm 254 */
														obj_t BgL_arg1333z00_1384;
														obj_t BgL_arg1334z00_1385;

														{	/* Unsafe/crc.scm 254 */
															obj_t BgL_arg1335z00_1386;

															{	/* Unsafe/crc.scm 254 */
																obj_t BgL_arg1337z00_1387;

																{	/* Unsafe/crc.scm 254 */
																	obj_t BgL_arg1338z00_1388;

																	BgL_arg1338z00_1388 =
																		MAKE_YOUNG_PAIR(BINT(((long) 12)), BNIL);
																	BgL_arg1337z00_1387 =
																		MAKE_YOUNG_PAIR(BINT(((long) 3)),
																		BgL_arg1338z00_1388);
																}
																BgL_arg1335z00_1386 =
																	MAKE_YOUNG_PAIR(BINT(((long) 4)),
																	BgL_arg1337z00_1387);
															}
															BgL_arg1333z00_1384 =
																MAKE_YOUNG_PAIR(BGl_symbol3159z00zz__crcz00,
																BgL_arg1335z00_1386);
														}
														{	/* Unsafe/crc.scm 255 */
															obj_t BgL_arg1339z00_1389;
															obj_t BgL_arg1340z00_1390;

															{	/* Unsafe/crc.scm 255 */
																obj_t BgL_arg1341z00_1391;

																{	/* Unsafe/crc.scm 255 */
																	obj_t BgL_arg1342z00_1392;

																	{	/* Unsafe/crc.scm 255 */
																		obj_t BgL_arg1343z00_1393;

																		BgL_arg1343z00_1393 =
																			MAKE_YOUNG_PAIR(BINT(((long) 18)), BNIL);
																		BgL_arg1342z00_1392 =
																			MAKE_YOUNG_PAIR(BINT(((long) 9)),
																			BgL_arg1343z00_1393);
																	}
																	BgL_arg1341z00_1391 =
																		MAKE_YOUNG_PAIR(BINT(((long) 5)),
																		BgL_arg1342z00_1392);
																}
																BgL_arg1339z00_1389 =
																	MAKE_YOUNG_PAIR(BGl_symbol3161z00zz__crcz00,
																	BgL_arg1341z00_1391);
															}
															{	/* Unsafe/crc.scm 256 */
																obj_t BgL_arg1344z00_1394;
																obj_t BgL_arg1345z00_1395;

																{	/* Unsafe/crc.scm 256 */
																	obj_t BgL_arg1346z00_1396;

																	{	/* Unsafe/crc.scm 256 */
																		obj_t BgL_arg1347z00_1397;

																		{	/* Unsafe/crc.scm 256 */
																			obj_t BgL_arg1348z00_1398;

																			BgL_arg1348z00_1398 =
																				MAKE_YOUNG_PAIR(BINT(((long) 21)),
																				BNIL);
																			BgL_arg1347z00_1397 =
																				MAKE_YOUNG_PAIR(BINT(((long) 21)),
																				BgL_arg1348z00_1398);
																		}
																		BgL_arg1346z00_1396 =
																			MAKE_YOUNG_PAIR(BINT(((long) 5)),
																			BgL_arg1347z00_1397);
																	}
																	BgL_arg1344z00_1394 =
																		MAKE_YOUNG_PAIR(BGl_symbol3163z00zz__crcz00,
																		BgL_arg1346z00_1396);
																}
																{	/* Unsafe/crc.scm 257 */
																	obj_t BgL_arg1350z00_1399;
																	obj_t BgL_arg1351z00_1400;

																	{	/* Unsafe/crc.scm 257 */
																		obj_t BgL_arg1352z00_1401;

																		{	/* Unsafe/crc.scm 257 */
																			obj_t BgL_arg1353z00_1402;

																			{	/* Unsafe/crc.scm 257 */
																				obj_t BgL_arg1354z00_1403;

																				BgL_arg1354z00_1403 =
																					MAKE_YOUNG_PAIR(BINT(((long) 20)),
																					BNIL);
																				BgL_arg1353z00_1402 =
																					MAKE_YOUNG_PAIR(BINT(((long) 5)),
																					BgL_arg1354z00_1403);
																			}
																			BgL_arg1352z00_1401 =
																				MAKE_YOUNG_PAIR(BINT(((long) 5)),
																				BgL_arg1353z00_1402);
																		}
																		BgL_arg1350z00_1399 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol3165z00zz__crcz00,
																			BgL_arg1352z00_1401);
																	}
																	{	/* Unsafe/crc.scm 258 */
																		obj_t BgL_arg1355z00_1404;
																		obj_t BgL_arg1356z00_1405;

																		{	/* Unsafe/crc.scm 258 */
																			obj_t BgL_arg1357z00_1406;

																			{	/* Unsafe/crc.scm 258 */
																				obj_t BgL_arg1359z00_1407;

																				{	/* Unsafe/crc.scm 258 */
																					obj_t BgL_arg1360z00_1408;

																					BgL_arg1360z00_1408 =
																						MAKE_YOUNG_PAIR(BINT(((long) 48)),
																						BNIL);
																					BgL_arg1359z00_1407 =
																						MAKE_YOUNG_PAIR(BINT(((long) 3)),
																						BgL_arg1360z00_1408);
																				}
																				BgL_arg1357z00_1406 =
																					MAKE_YOUNG_PAIR(BINT(((long) 6)),
																					BgL_arg1359z00_1407);
																			}
																			BgL_arg1355z00_1404 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol3167z00zz__crcz00,
																				BgL_arg1357z00_1406);
																		}
																		{	/* Unsafe/crc.scm 259 */
																			obj_t BgL_arg1361z00_1409;
																			obj_t BgL_arg1362z00_1410;

																			{	/* Unsafe/crc.scm 259 */
																				obj_t BgL_arg1363z00_1411;

																				{	/* Unsafe/crc.scm 259 */
																					obj_t BgL_arg1364z00_1412;

																					{	/* Unsafe/crc.scm 259 */
																						obj_t BgL_arg1365z00_1413;

																						BgL_arg1365z00_1413 =
																							MAKE_YOUNG_PAIR(BINT(((long) 72)),
																							BNIL);
																						BgL_arg1364z00_1412 =
																							MAKE_YOUNG_PAIR(BINT(((long) 9)),
																							BgL_arg1365z00_1413);
																					}
																					BgL_arg1363z00_1411 =
																						MAKE_YOUNG_PAIR(BINT(((long) 7)),
																						BgL_arg1364z00_1412);
																				}
																				BgL_arg1361z00_1409 =
																					MAKE_YOUNG_PAIR(BINT(((long) 7)),
																					BgL_arg1363z00_1411);
																			}
																			{	/* Unsafe/crc.scm 260 */
																				obj_t BgL_arg1367z00_1414;
																				obj_t BgL_arg1368z00_1415;

																				{	/* Unsafe/crc.scm 260 */
																					obj_t BgL_arg1370z00_1416;

																					{	/* Unsafe/crc.scm 260 */
																						obj_t BgL_arg1371z00_1417;

																						{	/* Unsafe/crc.scm 260 */
																							obj_t BgL_arg1372z00_1418;

																							BgL_arg1372z00_1418 =
																								MAKE_YOUNG_PAIR(BINT(((long)
																										224)), BNIL);
																							BgL_arg1371z00_1417 =
																								MAKE_YOUNG_PAIR(BINT(((long)
																										7)), BgL_arg1372z00_1418);
																						}
																						BgL_arg1370z00_1416 =
																							MAKE_YOUNG_PAIR(BINT(((long) 8)),
																							BgL_arg1371z00_1417);
																					}
																					BgL_arg1367z00_1414 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol3169z00zz__crcz00,
																						BgL_arg1370z00_1416);
																				}
																				{	/* Unsafe/crc.scm 261 */
																					obj_t BgL_arg1373z00_1419;
																					obj_t BgL_arg1374z00_1420;

																					{	/* Unsafe/crc.scm 261 */
																						obj_t BgL_arg1375z00_1421;

																						{	/* Unsafe/crc.scm 261 */
																							obj_t BgL_arg1376z00_1422;

																							{	/* Unsafe/crc.scm 261 */
																								obj_t BgL_arg1377z00_1423;

																								BgL_arg1377z00_1423 =
																									MAKE_YOUNG_PAIR(BINT(((long)
																											177)), BNIL);
																								BgL_arg1376z00_1422 =
																									MAKE_YOUNG_PAIR(BINT(((long)
																											141)),
																									BgL_arg1377z00_1423);
																							}
																							BgL_arg1375z00_1421 =
																								MAKE_YOUNG_PAIR(BINT(((long)
																										8)), BgL_arg1376z00_1422);
																						}
																						BgL_arg1373z00_1419 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol3171z00zz__crcz00,
																							BgL_arg1375z00_1421);
																					}
																					{	/* Unsafe/crc.scm 262 */
																						obj_t BgL_arg1378z00_1424;
																						obj_t BgL_arg1379z00_1425;

																						{	/* Unsafe/crc.scm 262 */
																							obj_t BgL_arg1380z00_1426;

																							{	/* Unsafe/crc.scm 262 */
																								obj_t BgL_arg1381z00_1427;

																								{	/* Unsafe/crc.scm 262 */
																									obj_t BgL_arg1382z00_1428;

																									BgL_arg1382z00_1428 =
																										MAKE_YOUNG_PAIR(BINT(((long)
																												140)), BNIL);
																									BgL_arg1381z00_1427 =
																										MAKE_YOUNG_PAIR(BINT(((long)
																												49)),
																										BgL_arg1382z00_1428);
																								}
																								BgL_arg1380z00_1426 =
																									MAKE_YOUNG_PAIR(BINT(((long)
																											8)), BgL_arg1381z00_1427);
																							}
																							BgL_arg1378z00_1424 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol3173z00zz__crcz00,
																								BgL_arg1380z00_1426);
																						}
																						{	/* Unsafe/crc.scm 263 */
																							obj_t BgL_arg1383z00_1429;
																							obj_t BgL_arg1384z00_1430;

																							{	/* Unsafe/crc.scm 263 */
																								obj_t BgL_arg1385z00_1431;

																								{	/* Unsafe/crc.scm 263 */
																									obj_t BgL_arg1386z00_1432;

																									{	/* Unsafe/crc.scm 263 */
																										obj_t BgL_arg1387z00_1433;

																										BgL_arg1387z00_1433 =
																											MAKE_YOUNG_PAIR(BINT((
																													(long) 171)), BNIL);
																										BgL_arg1386z00_1432 =
																											MAKE_YOUNG_PAIR(BINT((
																													(long) 213)),
																											BgL_arg1387z00_1433);
																									}
																									BgL_arg1385z00_1431 =
																										MAKE_YOUNG_PAIR(BINT(((long)
																												8)),
																										BgL_arg1386z00_1432);
																								}
																								BgL_arg1383z00_1429 =
																									MAKE_YOUNG_PAIR(BINT(((long)
																											8)), BgL_arg1385z00_1431);
																							}
																							{	/* Unsafe/crc.scm 264 */
																								obj_t BgL_arg1388z00_1434;
																								obj_t BgL_arg1389z00_1435;

																								{	/* Unsafe/crc.scm 264 */
																									obj_t BgL_arg1390z00_1436;

																									{	/* Unsafe/crc.scm 264 */
																										obj_t BgL_arg1391z00_1437;

																										{	/* Unsafe/crc.scm 264 */
																											obj_t BgL_arg1392z00_1438;

																											BgL_arg1392z00_1438 =
																												MAKE_YOUNG_PAIR(BINT((
																														(long) 184)), BNIL);
																											BgL_arg1391z00_1437 =
																												MAKE_YOUNG_PAIR(BINT((
																														(long) 29)),
																												BgL_arg1392z00_1438);
																										}
																										BgL_arg1390z00_1436 =
																											MAKE_YOUNG_PAIR(BINT((
																													(long) 8)),
																											BgL_arg1391z00_1437);
																									}
																									BgL_arg1388z00_1434 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol3175z00zz__crcz00,
																										BgL_arg1390z00_1436);
																								}
																								{	/* Unsafe/crc.scm 265 */
																									obj_t BgL_arg1393z00_1439;
																									obj_t BgL_arg1394z00_1440;

																									{	/* Unsafe/crc.scm 265 */
																										obj_t BgL_arg1395z00_1441;

																										{	/* Unsafe/crc.scm 265 */
																											obj_t BgL_arg1396z00_1442;

																											{	/* Unsafe/crc.scm 265 */
																												obj_t
																													BgL_arg1397z00_1443;
																												BgL_arg1397z00_1443 =
																													MAKE_YOUNG_PAIR(BINT((
																															(long) 817)),
																													BNIL);
																												BgL_arg1396z00_1442 =
																													MAKE_YOUNG_PAIR(BINT((
																															(long) 563)),
																													BgL_arg1397z00_1443);
																											}
																											BgL_arg1395z00_1441 =
																												MAKE_YOUNG_PAIR(BINT((
																														(long) 10)),
																												BgL_arg1396z00_1442);
																										}
																										BgL_arg1393z00_1439 =
																											MAKE_YOUNG_PAIR(BINT((
																													(long) 10)),
																											BgL_arg1395z00_1441);
																									}
																									{	/* Unsafe/crc.scm 266 */
																										obj_t BgL_arg1398z00_1444;
																										obj_t BgL_arg1399z00_1445;

																										{	/* Unsafe/crc.scm 266 */
																											obj_t BgL_arg1400z00_1446;

																											{	/* Unsafe/crc.scm 266 */
																												obj_t
																													BgL_arg1401z00_1447;
																												{	/* Unsafe/crc.scm 266 */
																													obj_t
																														BgL_arg1402z00_1448;
																													BgL_arg1402z00_1448 =
																														MAKE_YOUNG_PAIR(BINT
																														(((long) 1294)),
																														BNIL);
																													BgL_arg1401z00_1447 =
																														MAKE_YOUNG_PAIR(BINT
																														(((long) 901)),
																														BgL_arg1402z00_1448);
																												}
																												BgL_arg1400z00_1446 =
																													MAKE_YOUNG_PAIR(BINT((
																															(long) 11)),
																													BgL_arg1401z00_1447);
																											}
																											BgL_arg1398z00_1444 =
																												MAKE_YOUNG_PAIR(BINT((
																														(long) 11)),
																												BgL_arg1400z00_1446);
																										}
																										{	/* Unsafe/crc.scm 267 */
																											obj_t BgL_arg1404z00_1449;
																											obj_t BgL_arg1405z00_1450;

																											{	/* Unsafe/crc.scm 267 */
																												obj_t
																													BgL_arg1406z00_1451;
																												{	/* Unsafe/crc.scm 267 */
																													obj_t
																														BgL_arg1407z00_1452;
																													{	/* Unsafe/crc.scm 267 */
																														obj_t
																															BgL_arg1409z00_1453;
																														BgL_arg1409z00_1453
																															=
																															MAKE_YOUNG_PAIR
																															(BINT(((long)
																																	3841)), BNIL);
																														BgL_arg1407z00_1452
																															=
																															MAKE_YOUNG_PAIR
																															(BINT(((long)
																																	2063)),
																															BgL_arg1409z00_1453);
																													}
																													BgL_arg1406z00_1451 =
																														MAKE_YOUNG_PAIR(BINT
																														(((long) 12)),
																														BgL_arg1407z00_1452);
																												}
																												BgL_arg1404z00_1449 =
																													MAKE_YOUNG_PAIR(BINT((
																															(long) 12)),
																													BgL_arg1406z00_1451);
																											}
																											{	/* Unsafe/crc.scm 268 */
																												obj_t
																													BgL_arg1410z00_1454;
																												obj_t
																													BgL_arg1411z00_1455;
																												{	/* Unsafe/crc.scm 268 */
																													obj_t
																														BgL_arg1412z00_1456;
																													{	/* Unsafe/crc.scm 268 */
																														obj_t
																															BgL_arg1413z00_1457;
																														{	/* Unsafe/crc.scm 268 */
																															obj_t
																																BgL_arg1414z00_1458;
																															BgL_arg1414z00_1458
																																=
																																MAKE_YOUNG_PAIR
																																(BINT(((long)
																																		19665)),
																																BNIL);
																															BgL_arg1413z00_1457
																																=
																																MAKE_YOUNG_PAIR
																																(BINT(((long)
																																		17817)),
																																BgL_arg1414z00_1458);
																														}
																														BgL_arg1412z00_1456
																															=
																															MAKE_YOUNG_PAIR
																															(BINT(((long)
																																	15)),
																															BgL_arg1413z00_1457);
																													}
																													BgL_arg1410z00_1454 =
																														MAKE_YOUNG_PAIR
																														(BGl_symbol3177z00zz__crcz00,
																														BgL_arg1412z00_1456);
																												}
																												{	/* Unsafe/crc.scm 269 */
																													obj_t
																														BgL_arg1415z00_1459;
																													obj_t
																														BgL_arg1416z00_1460;
																													{	/* Unsafe/crc.scm 269 */
																														obj_t
																															BgL_arg1417z00_1461;
																														{	/* Unsafe/crc.scm 269 */
																															obj_t
																																BgL_arg1418z00_1462;
																															{	/* Unsafe/crc.scm 269 */
																																obj_t
																																	BgL_arg1419z00_1463;
																																{	/* Unsafe/crc.scm 269 */
																																	obj_t
																																		BgL_arg1420z00_1464;
																																	{	/* Unsafe/crc.scm 269 */
																																		obj_t
																																			BgL_arg1421z00_1465;
																																		{	/* Unsafe/crc.scm 269 */
																																			obj_t
																																				BgL_arg1422z00_1466;
																																			BgL_arg1422z00_1466
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_llong3179z00zz__crcz00,
																																				BNIL);
																																			BgL_arg1421z00_1465
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_llong3180z00zz__crcz00,
																																				BgL_arg1422z00_1466);
																																		}
																																		BgL_arg1420z00_1464
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_symbol3181z00zz__crcz00,
																																			BgL_arg1421z00_1465);
																																	}
																																	BgL_arg1419z00_1463
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1420z00_1464,
																																		BNIL);
																																}
																																BgL_arg1418z00_1462
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_llong3183z00zz__crcz00,
																																	BgL_arg1419z00_1463);
																															}
																															BgL_arg1417z00_1461
																																=
																																MAKE_YOUNG_PAIR
																																(BINT(((long)
																																		64)),
																																BgL_arg1418z00_1462);
																														}
																														BgL_arg1415z00_1459
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol3184z00zz__crcz00,
																															BgL_arg1417z00_1461);
																													}
																													{	/* Unsafe/crc.scm 272 */
																														obj_t
																															BgL_arg1424z00_1467;
																														{	/* Unsafe/crc.scm 272 */
																															obj_t
																																BgL_arg1425z00_1468;
																															{	/* Unsafe/crc.scm 272 */
																																obj_t
																																	BgL_arg1426z00_1469;
																																{	/* Unsafe/crc.scm 272 */
																																	obj_t
																																		BgL_arg1427z00_1470;
																																	{	/* Unsafe/crc.scm 272 */
																																		obj_t
																																			BgL_arg1428z00_1471;
																																		{	/* Unsafe/crc.scm 272 */
																																			obj_t
																																				BgL_arg1429z00_1472;
																																			{	/* Unsafe/crc.scm 272 */
																																				obj_t
																																					BgL_arg1430z00_1473;
																																				BgL_arg1430z00_1473
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_llong3186z00zz__crcz00,
																																					BNIL);
																																				BgL_arg1429z00_1472
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_llong3180z00zz__crcz00,
																																					BgL_arg1430z00_1473);
																																			}
																																			BgL_arg1428z00_1471
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_symbol3181z00zz__crcz00,
																																				BgL_arg1429z00_1472);
																																		}
																																		BgL_arg1427z00_1470
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1428z00_1471,
																																			BNIL);
																																	}
																																	BgL_arg1426z00_1469
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_llong3187z00zz__crcz00,
																																		BgL_arg1427z00_1470);
																																}
																																BgL_arg1425z00_1468
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BINT(((long)
																																			64)),
																																	BgL_arg1426z00_1469);
																															}
																															BgL_arg1424z00_1467
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol3188z00zz__crcz00,
																																BgL_arg1425z00_1468);
																														}
																														BgL_arg1416z00_1460
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1424z00_1467,
																															BNIL);
																													}
																													BgL_arg1411z00_1455 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1415z00_1459,
																														BgL_arg1416z00_1460);
																												}
																												BgL_arg1405z00_1450 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1410z00_1454,
																													BgL_arg1411z00_1455);
																											}
																											BgL_arg1399z00_1445 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1404z00_1449,
																												BgL_arg1405z00_1450);
																										}
																										BgL_arg1394z00_1440 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1398z00_1444,
																											BgL_arg1399z00_1445);
																									}
																									BgL_arg1389z00_1435 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1393z00_1439,
																										BgL_arg1394z00_1440);
																								}
																								BgL_arg1384z00_1430 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1388z00_1434,
																									BgL_arg1389z00_1435);
																							}
																							BgL_arg1379z00_1425 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1383z00_1429,
																								BgL_arg1384z00_1430);
																						}
																						BgL_arg1374z00_1420 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1378z00_1424,
																							BgL_arg1379z00_1425);
																					}
																					BgL_arg1368z00_1415 =
																						MAKE_YOUNG_PAIR(BgL_arg1373z00_1419,
																						BgL_arg1374z00_1420);
																				}
																				BgL_arg1362z00_1410 =
																					MAKE_YOUNG_PAIR(BgL_arg1367z00_1414,
																					BgL_arg1368z00_1415);
																			}
																			BgL_arg1356z00_1405 =
																				MAKE_YOUNG_PAIR(BgL_arg1361z00_1409,
																				BgL_arg1362z00_1410);
																		}
																		BgL_arg1351z00_1400 =
																			MAKE_YOUNG_PAIR(BgL_arg1355z00_1404,
																			BgL_arg1356z00_1405);
																	}
																	BgL_arg1345z00_1395 =
																		MAKE_YOUNG_PAIR(BgL_arg1350z00_1399,
																		BgL_arg1351z00_1400);
																}
																BgL_arg1340z00_1390 =
																	MAKE_YOUNG_PAIR(BgL_arg1344z00_1394,
																	BgL_arg1345z00_1395);
															}
															BgL_arg1334z00_1385 =
																MAKE_YOUNG_PAIR(BgL_arg1339z00_1389,
																BgL_arg1340z00_1390);
														}
														BgL_arg1326z00_1378 =
															MAKE_YOUNG_PAIR(BgL_arg1333z00_1384,
															BgL_arg1334z00_1385);
													}
													BgL_arg1317z00_1372 =
														MAKE_YOUNG_PAIR(BgL_arg1325z00_1377,
														BgL_arg1326z00_1378);
												}
												BgL_arg1311z00_1366 =
													MAKE_YOUNG_PAIR(BgL_arg1316z00_1371,
													BgL_arg1317z00_1372);
											}
											BgL_arg1306z00_1361 =
												MAKE_YOUNG_PAIR(BgL_arg1310z00_1365,
												BgL_arg1311z00_1366);
										}
										BgL_arg1300z00_1356 =
											MAKE_YOUNG_PAIR(BgL_arg1304z00_1360, BgL_arg1306z00_1361);
									}
									BgL_arg1295z00_1351 =
										MAKE_YOUNG_PAIR(BgL_arg1299z00_1355, BgL_arg1300z00_1356);
								}
								BgL_arg1288z00_1346 =
									MAKE_YOUNG_PAIR(BgL_arg1292z00_1350, BgL_arg1295z00_1351);
							}
							BgL_arg1282z00_1341 =
								MAKE_YOUNG_PAIR(BgL_arg1287z00_1345, BgL_arg1288z00_1346);
						}
						BgL_arg1275z00_1336 =
							MAKE_YOUNG_PAIR(BgL_arg1281z00_1340, BgL_arg1282z00_1341);
					}
					BgL_arg1263z00_1330 =
						MAKE_YOUNG_PAIR(BgL_arg1274z00_1335, BgL_arg1275z00_1336);
				}
				return (BGl_za2crcsza2z00zz__crcz00 =
					MAKE_YOUNG_PAIR(BgL_arg1258z00_1329, BgL_arg1263z00_1330), BUNSPEC);
			}
		}

	}



/* crc-long */
	BGL_EXPORTED_DEF long BGl_crczd2longzd2zz__crcz00(unsigned char BgL_cz00_3,
		long BgL_crcz00_4, long BgL_polyz00_5, long BgL_lenz00_6)
	{
		{	/* Unsafe/crc.scm 69 */
			{

				if ((BgL_lenz00_6 >= ((long) 8)))
					{	/* Unsafe/crc.scm 111 */
						{	/* Unsafe/crc.scm 76 */
							long BgL_mz00_6349;

							BgL_mz00_6349 =
								(((long) 1) << (int) ((BgL_lenz00_6 - ((long) 1))));
							{	/* Unsafe/crc.scm 77 */

								{
									long BgL_iz00_6351;
									long BgL_crcz00_6352;

									BgL_iz00_6351 = ((long) 0);
									BgL_crcz00_6352 =
										(BgL_crcz00_4 ^
										(((unsigned char) (BgL_cz00_3)) <<
											(int) ((BgL_lenz00_6 - ((long) 8)))));
								BgL_loopz00_6350:
									if ((BgL_iz00_6351 == ((long) 8)))
										{	/* Unsafe/crc.scm 80 */
											return BgL_crcz00_6352;
										}
									else
										{
											long BgL_crcz00_6715;
											long BgL_iz00_6713;

											BgL_iz00_6713 = (BgL_iz00_6351 + ((long) 1));
											BgL_crcz00_6715 =
												(
												(((BgL_mz00_6349 & BgL_crcz00_6352) >>
														(int) (
															(BgL_lenz00_6 - ((long) 1)))) * BgL_polyz00_5) ^
												(BgL_crcz00_6352 << (int) (((long) 1))));
											BgL_crcz00_6352 = BgL_crcz00_6715;
											BgL_iz00_6351 = BgL_iz00_6713;
											goto BgL_loopz00_6350;
										}
								}
							}
						}
					}
				else
					{	/* Unsafe/crc.scm 111 */
						{	/* Unsafe/crc.scm 92 */
							long BgL_mz00_6353;

							BgL_mz00_6353 =
								(((long) 1) << (int) ((BgL_lenz00_6 - ((long) 1))));
							{	/* Unsafe/crc.scm 94 */

								{
									long BgL_iz00_6355;
									long BgL_crcz00_6356;
									long BgL_shiftedzd2valuezd2_6357;

									BgL_iz00_6355 = ((long) 0);
									BgL_crcz00_6356 = BgL_crcz00_4;
									BgL_shiftedzd2valuezd2_6357 =
										(((unsigned char) (BgL_cz00_3)) << (int) (BgL_lenz00_6));
								BgL_loopz00_6354:
									if ((BgL_iz00_6355 == ((long) 8)))
										{	/* Unsafe/crc.scm 98 */
											return BgL_crcz00_6356;
										}
									else
										{	/* Unsafe/crc.scm 100 */
											long BgL_crc2z00_6358;

											BgL_crc2z00_6358 =
												(BgL_crcz00_6356 ^
												(BgL_mz00_6353 &
													(BgL_shiftedzd2valuezd2_6357 >> (int) (((long) 8)))));
											{	/* Unsafe/crc.scm 104 */

												{
													long BgL_shiftedzd2valuezd2_6750;
													long BgL_crcz00_6741;
													long BgL_iz00_6739;

													BgL_iz00_6739 = (BgL_iz00_6355 + ((long) 1));
													BgL_crcz00_6741 =
														(
														(((BgL_mz00_6353 & BgL_crc2z00_6358) >>
																(int) (
																	(BgL_lenz00_6 -
																		((long) 1)))) *
															BgL_polyz00_5) ^ (BgL_crc2z00_6358 <<
															(int) (((long) 1))));
													BgL_shiftedzd2valuezd2_6750 =
														(BgL_shiftedzd2valuezd2_6357 << (int) (((long) 1)));
													BgL_shiftedzd2valuezd2_6357 =
														BgL_shiftedzd2valuezd2_6750;
													BgL_crcz00_6356 = BgL_crcz00_6741;
													BgL_iz00_6355 = BgL_iz00_6739;
													goto BgL_loopz00_6354;
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



/* &crc-long */
	obj_t BGl_z62crczd2longzb0zz__crcz00(obj_t BgL_envz00_6139,
		obj_t BgL_cz00_6140, obj_t BgL_crcz00_6141, obj_t BgL_polyz00_6142,
		obj_t BgL_lenz00_6143)
	{
		{	/* Unsafe/crc.scm 69 */
			{	/* Unsafe/crc.scm 75 */
				long BgL_tmpz00_6757;

				{	/* Unsafe/crc.scm 75 */
					long BgL_auxz00_6785;
					long BgL_auxz00_6776;
					long BgL_auxz00_6767;
					unsigned char BgL_auxz00_6758;

					{	/* Unsafe/crc.scm 75 */
						obj_t BgL_tmpz00_6786;

						if (INTEGERP(BgL_lenz00_6143))
							{	/* Unsafe/crc.scm 75 */
								BgL_tmpz00_6786 = BgL_lenz00_6143;
							}
						else
							{
								obj_t BgL_auxz00_6789;

								BgL_auxz00_6789 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 2995)), BGl_string3191z00zz__crcz00,
									BGl_string3193z00zz__crcz00, BgL_lenz00_6143);
								FAILURE(BgL_auxz00_6789, BFALSE, BFALSE);
							}
						BgL_auxz00_6785 = (long) CINT(BgL_tmpz00_6786);
					}
					{	/* Unsafe/crc.scm 75 */
						obj_t BgL_tmpz00_6777;

						if (INTEGERP(BgL_polyz00_6142))
							{	/* Unsafe/crc.scm 75 */
								BgL_tmpz00_6777 = BgL_polyz00_6142;
							}
						else
							{
								obj_t BgL_auxz00_6780;

								BgL_auxz00_6780 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 2995)), BGl_string3191z00zz__crcz00,
									BGl_string3193z00zz__crcz00, BgL_polyz00_6142);
								FAILURE(BgL_auxz00_6780, BFALSE, BFALSE);
							}
						BgL_auxz00_6776 = (long) CINT(BgL_tmpz00_6777);
					}
					{	/* Unsafe/crc.scm 75 */
						obj_t BgL_tmpz00_6768;

						if (INTEGERP(BgL_crcz00_6141))
							{	/* Unsafe/crc.scm 75 */
								BgL_tmpz00_6768 = BgL_crcz00_6141;
							}
						else
							{
								obj_t BgL_auxz00_6771;

								BgL_auxz00_6771 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 2995)), BGl_string3191z00zz__crcz00,
									BGl_string3193z00zz__crcz00, BgL_crcz00_6141);
								FAILURE(BgL_auxz00_6771, BFALSE, BFALSE);
							}
						BgL_auxz00_6767 = (long) CINT(BgL_tmpz00_6768);
					}
					{	/* Unsafe/crc.scm 75 */
						obj_t BgL_tmpz00_6759;

						if (CHARP(BgL_cz00_6140))
							{	/* Unsafe/crc.scm 75 */
								BgL_tmpz00_6759 = BgL_cz00_6140;
							}
						else
							{
								obj_t BgL_auxz00_6762;

								BgL_auxz00_6762 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 2995)), BGl_string3191z00zz__crcz00,
									BGl_string3192z00zz__crcz00, BgL_cz00_6140);
								FAILURE(BgL_auxz00_6762, BFALSE, BFALSE);
							}
						BgL_auxz00_6758 = CCHAR(BgL_tmpz00_6759);
					}
					BgL_tmpz00_6757 =
						BGl_crczd2longzd2zz__crcz00(BgL_auxz00_6758, BgL_auxz00_6767,
						BgL_auxz00_6776, BgL_auxz00_6785);
				}
				return BINT(BgL_tmpz00_6757);
			}
		}

	}



/* crc-elong */
	BGL_EXPORTED_DEF long BGl_crczd2elongzd2zz__crcz00(unsigned char BgL_cz00_7,
		long BgL_crcz00_8, long BgL_polyz00_9, long BgL_lenz00_10)
	{
		{	/* Unsafe/crc.scm 120 */
			if ((BgL_lenz00_10 >= ((long) 8)))
				{	/* Unsafe/crc.scm 122 */
					long BgL_octetz00_6359;

					BgL_octetz00_6359 = ((unsigned char) (BgL_cz00_7));
					{	/* Unsafe/crc.scm 123 */
						long BgL_valuez00_6360;
						long BgL_mz00_6361;

						{	/* Unsafe/crc.scm 123 */
							long BgL_arg1469z00_6362;
							long BgL_arg1470z00_6363;

							{	/* Unsafe/crc.scm 123 */
								long BgL_res2159z00_6364;

								BgL_res2159z00_6364 = (long) (BgL_octetz00_6359);
								BgL_arg1469z00_6362 = BgL_res2159z00_6364;
							}
							BgL_arg1470z00_6363 = (BgL_lenz00_10 - ((long) 8));
							BgL_valuez00_6360 =
								(BgL_arg1469z00_6362 << (int) (BgL_arg1470z00_6363));
						}
						BgL_mz00_6361 =
							(((long) 1) << (int) ((BgL_lenz00_10 - ((long) 1))));
						{
							long BgL_iz00_6366;
							long BgL_crcz00_6367;

							BgL_iz00_6366 = ((long) 0);
							BgL_crcz00_6367 = (BgL_crcz00_8 ^ BgL_valuez00_6360);
						BgL_loopz00_6365:
							if ((BgL_iz00_6366 == ((long) 8)))
								{	/* Unsafe/crc.scm 127 */
									return BgL_crcz00_6367;
								}
							else
								{	/* Unsafe/crc.scm 129 */
									long BgL_newzd2crczd2_6368;

									BgL_newzd2crczd2_6368 =
										(BgL_crcz00_6367 << (int) (((long) 1)));
									if ((((long) 0) == (BgL_mz00_6361 & BgL_crcz00_6367)))
										{
											long BgL_crcz00_6816;
											long BgL_iz00_6814;

											BgL_iz00_6814 = (BgL_iz00_6366 + ((long) 1));
											BgL_crcz00_6816 = BgL_newzd2crczd2_6368;
											BgL_crcz00_6367 = BgL_crcz00_6816;
											BgL_iz00_6366 = BgL_iz00_6814;
											goto BgL_loopz00_6365;
										}
									else
										{
											long BgL_crcz00_6819;
											long BgL_iz00_6817;

											BgL_iz00_6817 = (BgL_iz00_6366 + ((long) 1));
											BgL_crcz00_6819 = (BgL_newzd2crczd2_6368 ^ BgL_polyz00_9);
											BgL_crcz00_6367 = BgL_crcz00_6819;
											BgL_iz00_6366 = BgL_iz00_6817;
											goto BgL_loopz00_6365;
										}
								}
						}
					}
				}
			else
				{	/* Unsafe/crc.scm 133 */
					long BgL_arg1472z00_6369;

					{	/* Unsafe/crc.scm 133 */
						long BgL_arg1473z00_6370;
						long BgL_arg1474z00_6371;

						{	/* Unsafe/crc.scm 133 */
							long BgL_res2172z00_6372;

							BgL_res2172z00_6372 = (long) (BgL_crcz00_8);
							BgL_arg1473z00_6370 = BgL_res2172z00_6372;
						}
						{	/* Unsafe/crc.scm 133 */
							long BgL_res2173z00_6373;

							BgL_res2173z00_6373 = (long) (BgL_polyz00_9);
							BgL_arg1474z00_6371 = BgL_res2173z00_6373;
						}
						{

							if ((BgL_lenz00_10 >= ((long) 8)))
								{	/* Unsafe/crc.scm 111 */
									{	/* Unsafe/crc.scm 76 */
										long BgL_mz00_6376;

										BgL_mz00_6376 =
											(((long) 1) << (int) ((BgL_lenz00_10 - ((long) 1))));
										{	/* Unsafe/crc.scm 77 */

											{
												long BgL_iz00_6378;
												long BgL_crcz00_6379;

												BgL_iz00_6378 = ((long) 0);
												BgL_crcz00_6379 =
													(BgL_arg1473z00_6370 ^
													(((unsigned char) (BgL_cz00_7)) <<
														(int) ((BgL_lenz00_10 - ((long) 8)))));
											BgL_loopz00_6377:
												if ((BgL_iz00_6378 == ((long) 8)))
													{	/* Unsafe/crc.scm 80 */
														BgL_arg1472z00_6369 = BgL_crcz00_6379;
													}
												else
													{
														long BgL_crcz00_6833;
														long BgL_iz00_6831;

														BgL_iz00_6831 = (BgL_iz00_6378 + ((long) 1));
														BgL_crcz00_6833 =
															(
															(((BgL_mz00_6376 & BgL_crcz00_6379) >>
																	(int) (
																		(BgL_lenz00_10 -
																			((long) 1)))) *
																BgL_arg1474z00_6371) ^ (BgL_crcz00_6379 <<
																(int) (((long) 1))));
														BgL_crcz00_6379 = BgL_crcz00_6833;
														BgL_iz00_6378 = BgL_iz00_6831;
														goto BgL_loopz00_6377;
													}
											}
										}
									}
								}
							else
								{	/* Unsafe/crc.scm 111 */
									{	/* Unsafe/crc.scm 92 */
										long BgL_mz00_6380;

										BgL_mz00_6380 =
											(((long) 1) << (int) ((BgL_lenz00_10 - ((long) 1))));
										{	/* Unsafe/crc.scm 94 */

											{
												long BgL_iz00_6382;
												long BgL_crcz00_6383;
												long BgL_shiftedzd2valuezd2_6384;

												BgL_iz00_6382 = ((long) 0);
												BgL_crcz00_6383 = BgL_arg1473z00_6370;
												BgL_shiftedzd2valuezd2_6384 =
													(
													((unsigned char) (BgL_cz00_7)) <<
													(int) (BgL_lenz00_10));
											BgL_loopz00_6381:
												if ((BgL_iz00_6382 == ((long) 8)))
													{	/* Unsafe/crc.scm 98 */
														BgL_arg1472z00_6369 = BgL_crcz00_6383;
													}
												else
													{	/* Unsafe/crc.scm 100 */
														long BgL_crc2z00_6385;

														BgL_crc2z00_6385 =
															(BgL_crcz00_6383 ^
															(BgL_mz00_6380 &
																(BgL_shiftedzd2valuezd2_6384 >>
																	(int) (((long) 8)))));
														{	/* Unsafe/crc.scm 104 */

															{
																long BgL_shiftedzd2valuezd2_6868;
																long BgL_crcz00_6859;
																long BgL_iz00_6857;

																BgL_iz00_6857 = (BgL_iz00_6382 + ((long) 1));
																BgL_crcz00_6859 =
																	(
																	(((BgL_mz00_6380 & BgL_crc2z00_6385) >>
																			(int) (
																				(BgL_lenz00_10 -
																					((long) 1)))) *
																		BgL_arg1474z00_6371) ^ (BgL_crc2z00_6385 <<
																		(int) (((long) 1))));
																BgL_shiftedzd2valuezd2_6868 =
																	(BgL_shiftedzd2valuezd2_6384 << (int) (((long)
																			1)));
																BgL_shiftedzd2valuezd2_6384 =
																	BgL_shiftedzd2valuezd2_6868;
																BgL_crcz00_6383 = BgL_crcz00_6859;
																BgL_iz00_6382 = BgL_iz00_6857;
																goto BgL_loopz00_6381;
															}
														}
													}
											}
										}
									}
								}
						}
					}
					{	/* Unsafe/crc.scm 133 */
						long BgL_res2206z00_6386;

						BgL_res2206z00_6386 = (long) (BgL_arg1472z00_6369);
						return BgL_res2206z00_6386;
					}
				}
		}

	}



/* &crc-elong */
	obj_t BGl_z62crczd2elongzb0zz__crcz00(obj_t BgL_envz00_6144,
		obj_t BgL_cz00_6145, obj_t BgL_crcz00_6146, obj_t BgL_polyz00_6147,
		obj_t BgL_lenz00_6148)
	{
		{	/* Unsafe/crc.scm 120 */
			{	/* Unsafe/crc.scm 121 */
				long BgL_tmpz00_6876;

				{	/* Unsafe/crc.scm 121 */
					long BgL_auxz00_6904;
					long BgL_auxz00_6895;
					long BgL_auxz00_6886;
					unsigned char BgL_auxz00_6877;

					{	/* Unsafe/crc.scm 121 */
						obj_t BgL_tmpz00_6905;

						if (INTEGERP(BgL_lenz00_6148))
							{	/* Unsafe/crc.scm 121 */
								BgL_tmpz00_6905 = BgL_lenz00_6148;
							}
						else
							{
								obj_t BgL_auxz00_6908;

								BgL_auxz00_6908 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 4747)), BGl_string3194z00zz__crcz00,
									BGl_string3193z00zz__crcz00, BgL_lenz00_6148);
								FAILURE(BgL_auxz00_6908, BFALSE, BFALSE);
							}
						BgL_auxz00_6904 = (long) CINT(BgL_tmpz00_6905);
					}
					{	/* Unsafe/crc.scm 121 */
						obj_t BgL_tmpz00_6896;

						if (ELONGP(BgL_polyz00_6147))
							{	/* Unsafe/crc.scm 121 */
								BgL_tmpz00_6896 = BgL_polyz00_6147;
							}
						else
							{
								obj_t BgL_auxz00_6899;

								BgL_auxz00_6899 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 4747)), BGl_string3194z00zz__crcz00,
									BGl_string3195z00zz__crcz00, BgL_polyz00_6147);
								FAILURE(BgL_auxz00_6899, BFALSE, BFALSE);
							}
						BgL_auxz00_6895 = BELONG_TO_LONG(BgL_tmpz00_6896);
					}
					{	/* Unsafe/crc.scm 121 */
						obj_t BgL_tmpz00_6887;

						if (ELONGP(BgL_crcz00_6146))
							{	/* Unsafe/crc.scm 121 */
								BgL_tmpz00_6887 = BgL_crcz00_6146;
							}
						else
							{
								obj_t BgL_auxz00_6890;

								BgL_auxz00_6890 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 4747)), BGl_string3194z00zz__crcz00,
									BGl_string3195z00zz__crcz00, BgL_crcz00_6146);
								FAILURE(BgL_auxz00_6890, BFALSE, BFALSE);
							}
						BgL_auxz00_6886 = BELONG_TO_LONG(BgL_tmpz00_6887);
					}
					{	/* Unsafe/crc.scm 121 */
						obj_t BgL_tmpz00_6878;

						if (CHARP(BgL_cz00_6145))
							{	/* Unsafe/crc.scm 121 */
								BgL_tmpz00_6878 = BgL_cz00_6145;
							}
						else
							{
								obj_t BgL_auxz00_6881;

								BgL_auxz00_6881 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 4747)), BGl_string3194z00zz__crcz00,
									BGl_string3192z00zz__crcz00, BgL_cz00_6145);
								FAILURE(BgL_auxz00_6881, BFALSE, BFALSE);
							}
						BgL_auxz00_6877 = CCHAR(BgL_tmpz00_6878);
					}
					BgL_tmpz00_6876 =
						BGl_crczd2elongzd2zz__crcz00(BgL_auxz00_6877, BgL_auxz00_6886,
						BgL_auxz00_6895, BgL_auxz00_6904);
				}
				return make_belong(BgL_tmpz00_6876);
			}
		}

	}



/* crc-llong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_crczd2llongzd2zz__crcz00(unsigned char
		BgL_cz00_11, BGL_LONGLONG_T BgL_crcz00_12, BGL_LONGLONG_T BgL_polyz00_13,
		long BgL_lenz00_14)
	{
		{	/* Unsafe/crc.scm 140 */
			if ((BgL_lenz00_14 >= ((long) 8)))
				{	/* Unsafe/crc.scm 142 */
					long BgL_octetz00_6387;

					BgL_octetz00_6387 = ((unsigned char) (BgL_cz00_11));
					{	/* Unsafe/crc.scm 143 */
						BGL_LONGLONG_T BgL_valuez00_6388;
						BGL_LONGLONG_T BgL_mz00_6389;

						{	/* Unsafe/crc.scm 143 */
							BGL_LONGLONG_T BgL_arg1486z00_6390;
							long BgL_arg1487z00_6391;

							{	/* Unsafe/crc.scm 143 */
								BGL_LONGLONG_T BgL_res2209z00_6392;

								BgL_res2209z00_6392 = LONG_TO_LLONG(BgL_octetz00_6387);
								BgL_arg1486z00_6390 = BgL_res2209z00_6392;
							}
							BgL_arg1487z00_6391 = (BgL_lenz00_14 - ((long) 8));
							BgL_valuez00_6388 =
								(BgL_arg1486z00_6390 << (int) (BgL_arg1487z00_6391));
						}
						BgL_mz00_6389 =
							(((BGL_LONGLONG_T) 1) << (int) ((BgL_lenz00_14 - ((long) 1))));
						{
							long BgL_iz00_6394;
							BGL_LONGLONG_T BgL_crcz00_6395;

							BgL_iz00_6394 = ((long) 0);
							BgL_crcz00_6395 = (BgL_crcz00_12 ^ BgL_valuez00_6388);
						BgL_loopz00_6393:
							if ((BgL_iz00_6394 == ((long) 8)))
								{	/* Unsafe/crc.scm 147 */
									return BgL_crcz00_6395;
								}
							else
								{	/* Unsafe/crc.scm 149 */
									BGL_LONGLONG_T BgL_newzd2crczd2_6396;

									BgL_newzd2crczd2_6396 =
										(BgL_crcz00_6395 << (int) (((long) 1)));
									if (
										(((BGL_LONGLONG_T) 0) == (BgL_mz00_6389 & BgL_crcz00_6395)))
										{
											BGL_LONGLONG_T BgL_crcz00_6935;
											long BgL_iz00_6933;

											BgL_iz00_6933 = (BgL_iz00_6394 + ((long) 1));
											BgL_crcz00_6935 = BgL_newzd2crczd2_6396;
											BgL_crcz00_6395 = BgL_crcz00_6935;
											BgL_iz00_6394 = BgL_iz00_6933;
											goto BgL_loopz00_6393;
										}
									else
										{
											BGL_LONGLONG_T BgL_crcz00_6938;
											long BgL_iz00_6936;

											BgL_iz00_6936 = (BgL_iz00_6394 + ((long) 1));
											BgL_crcz00_6938 =
												(BgL_newzd2crczd2_6396 ^ BgL_polyz00_13);
											BgL_crcz00_6395 = BgL_crcz00_6938;
											BgL_iz00_6394 = BgL_iz00_6936;
											goto BgL_loopz00_6393;
										}
								}
						}
					}
				}
			else
				{	/* Unsafe/crc.scm 153 */
					long BgL_arg1491z00_6397;

					{	/* Unsafe/crc.scm 153 */
						long BgL_arg1492z00_6398;
						long BgL_arg1493z00_6399;

						{	/* Unsafe/crc.scm 153 */
							long BgL_res2222z00_6400;

							BgL_res2222z00_6400 = LLONG_TO_LONG(BgL_crcz00_12);
							BgL_arg1492z00_6398 = BgL_res2222z00_6400;
						}
						{	/* Unsafe/crc.scm 153 */
							long BgL_res2223z00_6401;

							BgL_res2223z00_6401 = LLONG_TO_LONG(BgL_polyz00_13);
							BgL_arg1493z00_6399 = BgL_res2223z00_6401;
						}
						{

							if ((BgL_lenz00_14 >= ((long) 8)))
								{	/* Unsafe/crc.scm 111 */
									{	/* Unsafe/crc.scm 76 */
										long BgL_mz00_6404;

										BgL_mz00_6404 =
											(((long) 1) << (int) ((BgL_lenz00_14 - ((long) 1))));
										{	/* Unsafe/crc.scm 77 */

											{
												long BgL_iz00_6406;
												long BgL_crcz00_6407;

												BgL_iz00_6406 = ((long) 0);
												BgL_crcz00_6407 =
													(BgL_arg1492z00_6398 ^
													(((unsigned char) (BgL_cz00_11)) <<
														(int) ((BgL_lenz00_14 - ((long) 8)))));
											BgL_loopz00_6405:
												if ((BgL_iz00_6406 == ((long) 8)))
													{	/* Unsafe/crc.scm 80 */
														BgL_arg1491z00_6397 = BgL_crcz00_6407;
													}
												else
													{
														long BgL_crcz00_6952;
														long BgL_iz00_6950;

														BgL_iz00_6950 = (BgL_iz00_6406 + ((long) 1));
														BgL_crcz00_6952 =
															(
															(((BgL_mz00_6404 & BgL_crcz00_6407) >>
																	(int) (
																		(BgL_lenz00_14 -
																			((long) 1)))) *
																BgL_arg1493z00_6399) ^ (BgL_crcz00_6407 <<
																(int) (((long) 1))));
														BgL_crcz00_6407 = BgL_crcz00_6952;
														BgL_iz00_6406 = BgL_iz00_6950;
														goto BgL_loopz00_6405;
													}
											}
										}
									}
								}
							else
								{	/* Unsafe/crc.scm 111 */
									{	/* Unsafe/crc.scm 92 */
										long BgL_mz00_6408;

										BgL_mz00_6408 =
											(((long) 1) << (int) ((BgL_lenz00_14 - ((long) 1))));
										{	/* Unsafe/crc.scm 94 */

											{
												long BgL_iz00_6410;
												long BgL_crcz00_6411;
												long BgL_shiftedzd2valuezd2_6412;

												BgL_iz00_6410 = ((long) 0);
												BgL_crcz00_6411 = BgL_arg1492z00_6398;
												BgL_shiftedzd2valuezd2_6412 =
													(
													((unsigned char) (BgL_cz00_11)) <<
													(int) (BgL_lenz00_14));
											BgL_loopz00_6409:
												if ((BgL_iz00_6410 == ((long) 8)))
													{	/* Unsafe/crc.scm 98 */
														BgL_arg1491z00_6397 = BgL_crcz00_6411;
													}
												else
													{	/* Unsafe/crc.scm 100 */
														long BgL_crc2z00_6413;

														BgL_crc2z00_6413 =
															(BgL_crcz00_6411 ^
															(BgL_mz00_6408 &
																(BgL_shiftedzd2valuezd2_6412 >>
																	(int) (((long) 8)))));
														{	/* Unsafe/crc.scm 104 */

															{
																long BgL_shiftedzd2valuezd2_6987;
																long BgL_crcz00_6978;
																long BgL_iz00_6976;

																BgL_iz00_6976 = (BgL_iz00_6410 + ((long) 1));
																BgL_crcz00_6978 =
																	(
																	(((BgL_mz00_6408 & BgL_crc2z00_6413) >>
																			(int) (
																				(BgL_lenz00_14 -
																					((long) 1)))) *
																		BgL_arg1493z00_6399) ^ (BgL_crc2z00_6413 <<
																		(int) (((long) 1))));
																BgL_shiftedzd2valuezd2_6987 =
																	(BgL_shiftedzd2valuezd2_6412 << (int) (((long)
																			1)));
																BgL_shiftedzd2valuezd2_6412 =
																	BgL_shiftedzd2valuezd2_6987;
																BgL_crcz00_6411 = BgL_crcz00_6978;
																BgL_iz00_6410 = BgL_iz00_6976;
																goto BgL_loopz00_6409;
															}
														}
													}
											}
										}
									}
								}
						}
					}
					{	/* Unsafe/crc.scm 153 */
						BGL_LONGLONG_T BgL_res2256z00_6414;

						BgL_res2256z00_6414 = LONG_TO_LLONG(BgL_arg1491z00_6397);
						return BgL_res2256z00_6414;
					}
				}
		}

	}



/* &crc-llong */
	obj_t BGl_z62crczd2llongzb0zz__crcz00(obj_t BgL_envz00_6149,
		obj_t BgL_cz00_6150, obj_t BgL_crcz00_6151, obj_t BgL_polyz00_6152,
		obj_t BgL_lenz00_6153)
	{
		{	/* Unsafe/crc.scm 140 */
			{	/* Unsafe/crc.scm 141 */
				BGL_LONGLONG_T BgL_tmpz00_6995;

				{	/* Unsafe/crc.scm 141 */
					long BgL_auxz00_7023;
					BGL_LONGLONG_T BgL_auxz00_7014;
					BGL_LONGLONG_T BgL_auxz00_7005;
					unsigned char BgL_auxz00_6996;

					{	/* Unsafe/crc.scm 141 */
						obj_t BgL_tmpz00_7024;

						if (INTEGERP(BgL_lenz00_6153))
							{	/* Unsafe/crc.scm 141 */
								BgL_tmpz00_7024 = BgL_lenz00_6153;
							}
						else
							{
								obj_t BgL_auxz00_7027;

								BgL_auxz00_7027 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 5724)), BGl_string3196z00zz__crcz00,
									BGl_string3193z00zz__crcz00, BgL_lenz00_6153);
								FAILURE(BgL_auxz00_7027, BFALSE, BFALSE);
							}
						BgL_auxz00_7023 = (long) CINT(BgL_tmpz00_7024);
					}
					{	/* Unsafe/crc.scm 141 */
						obj_t BgL_tmpz00_7015;

						if (LLONGP(BgL_polyz00_6152))
							{	/* Unsafe/crc.scm 141 */
								BgL_tmpz00_7015 = BgL_polyz00_6152;
							}
						else
							{
								obj_t BgL_auxz00_7018;

								BgL_auxz00_7018 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 5724)), BGl_string3196z00zz__crcz00,
									BGl_string3197z00zz__crcz00, BgL_polyz00_6152);
								FAILURE(BgL_auxz00_7018, BFALSE, BFALSE);
							}
						BgL_auxz00_7014 = BLLONG_TO_LLONG(BgL_tmpz00_7015);
					}
					{	/* Unsafe/crc.scm 141 */
						obj_t BgL_tmpz00_7006;

						if (LLONGP(BgL_crcz00_6151))
							{	/* Unsafe/crc.scm 141 */
								BgL_tmpz00_7006 = BgL_crcz00_6151;
							}
						else
							{
								obj_t BgL_auxz00_7009;

								BgL_auxz00_7009 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 5724)), BGl_string3196z00zz__crcz00,
									BGl_string3197z00zz__crcz00, BgL_crcz00_6151);
								FAILURE(BgL_auxz00_7009, BFALSE, BFALSE);
							}
						BgL_auxz00_7005 = BLLONG_TO_LLONG(BgL_tmpz00_7006);
					}
					{	/* Unsafe/crc.scm 141 */
						obj_t BgL_tmpz00_6997;

						if (CHARP(BgL_cz00_6150))
							{	/* Unsafe/crc.scm 141 */
								BgL_tmpz00_6997 = BgL_cz00_6150;
							}
						else
							{
								obj_t BgL_auxz00_7000;

								BgL_auxz00_7000 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 5724)), BGl_string3196z00zz__crcz00,
									BGl_string3192z00zz__crcz00, BgL_cz00_6150);
								FAILURE(BgL_auxz00_7000, BFALSE, BFALSE);
							}
						BgL_auxz00_6996 = CCHAR(BgL_tmpz00_6997);
					}
					BgL_tmpz00_6995 =
						BGl_crczd2llongzd2zz__crcz00(BgL_auxz00_6996, BgL_auxz00_7005,
						BgL_auxz00_7014, BgL_auxz00_7023);
				}
				return make_bllong(BgL_tmpz00_6995);
			}
		}

	}



/* crc-long-le */
	BGL_EXPORTED_DEF long BGl_crczd2longzd2lez00zz__crcz00(unsigned char
		BgL_cz00_15, long BgL_crcz00_16, long BgL_polyz00_17, long BgL_lenz00_18)
	{
		{	/* Unsafe/crc.scm 160 */
			{
				long BgL_iz00_6416;
				long BgL_crcz00_6417;

				BgL_iz00_6416 = ((long) 0);
				BgL_crcz00_6417 = (BgL_crcz00_16 ^ ((unsigned char) (BgL_cz00_15)));
			BgL_loopz00_6415:
				if ((BgL_iz00_6416 == ((long) 8)))
					{	/* Unsafe/crc.scm 164 */
						return BgL_crcz00_6417;
					}
				else
					{
						long BgL_crcz00_7038;
						long BgL_iz00_7036;

						BgL_iz00_7036 = (BgL_iz00_6416 + ((long) 1));
						BgL_crcz00_7038 =
							(
							((((long) 1) & BgL_crcz00_6417) * BgL_polyz00_17) ^
							(long) (
								((unsigned long) (BgL_crcz00_6417) >> (int) (((long) 1)))));
						BgL_crcz00_6417 = BgL_crcz00_7038;
						BgL_iz00_6416 = BgL_iz00_7036;
						goto BgL_loopz00_6415;
					}
			}
		}

	}



/* &crc-long-le */
	obj_t BGl_z62crczd2longzd2lez62zz__crcz00(obj_t BgL_envz00_6154,
		obj_t BgL_cz00_6155, obj_t BgL_crcz00_6156, obj_t BgL_polyz00_6157,
		obj_t BgL_lenz00_6158)
	{
		{	/* Unsafe/crc.scm 160 */
			{	/* Unsafe/crc.scm 161 */
				long BgL_tmpz00_7049;

				{	/* Unsafe/crc.scm 161 */
					long BgL_auxz00_7077;
					long BgL_auxz00_7068;
					long BgL_auxz00_7059;
					unsigned char BgL_auxz00_7050;

					{	/* Unsafe/crc.scm 161 */
						obj_t BgL_tmpz00_7078;

						if (INTEGERP(BgL_lenz00_6158))
							{	/* Unsafe/crc.scm 161 */
								BgL_tmpz00_7078 = BgL_lenz00_6158;
							}
						else
							{
								obj_t BgL_auxz00_7081;

								BgL_auxz00_7081 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 6700)), BGl_string3198z00zz__crcz00,
									BGl_string3193z00zz__crcz00, BgL_lenz00_6158);
								FAILURE(BgL_auxz00_7081, BFALSE, BFALSE);
							}
						BgL_auxz00_7077 = (long) CINT(BgL_tmpz00_7078);
					}
					{	/* Unsafe/crc.scm 161 */
						obj_t BgL_tmpz00_7069;

						if (INTEGERP(BgL_polyz00_6157))
							{	/* Unsafe/crc.scm 161 */
								BgL_tmpz00_7069 = BgL_polyz00_6157;
							}
						else
							{
								obj_t BgL_auxz00_7072;

								BgL_auxz00_7072 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 6700)), BGl_string3198z00zz__crcz00,
									BGl_string3193z00zz__crcz00, BgL_polyz00_6157);
								FAILURE(BgL_auxz00_7072, BFALSE, BFALSE);
							}
						BgL_auxz00_7068 = (long) CINT(BgL_tmpz00_7069);
					}
					{	/* Unsafe/crc.scm 161 */
						obj_t BgL_tmpz00_7060;

						if (INTEGERP(BgL_crcz00_6156))
							{	/* Unsafe/crc.scm 161 */
								BgL_tmpz00_7060 = BgL_crcz00_6156;
							}
						else
							{
								obj_t BgL_auxz00_7063;

								BgL_auxz00_7063 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 6700)), BGl_string3198z00zz__crcz00,
									BGl_string3193z00zz__crcz00, BgL_crcz00_6156);
								FAILURE(BgL_auxz00_7063, BFALSE, BFALSE);
							}
						BgL_auxz00_7059 = (long) CINT(BgL_tmpz00_7060);
					}
					{	/* Unsafe/crc.scm 161 */
						obj_t BgL_tmpz00_7051;

						if (CHARP(BgL_cz00_6155))
							{	/* Unsafe/crc.scm 161 */
								BgL_tmpz00_7051 = BgL_cz00_6155;
							}
						else
							{
								obj_t BgL_auxz00_7054;

								BgL_auxz00_7054 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 6700)), BGl_string3198z00zz__crcz00,
									BGl_string3192z00zz__crcz00, BgL_cz00_6155);
								FAILURE(BgL_auxz00_7054, BFALSE, BFALSE);
							}
						BgL_auxz00_7050 = CCHAR(BgL_tmpz00_7051);
					}
					BgL_tmpz00_7049 =
						BGl_crczd2longzd2lez00zz__crcz00(BgL_auxz00_7050, BgL_auxz00_7059,
						BgL_auxz00_7068, BgL_auxz00_7077);
				}
				return BINT(BgL_tmpz00_7049);
			}
		}

	}



/* crc-elong-le */
	BGL_EXPORTED_DEF long BGl_crczd2elongzd2lez00zz__crcz00(unsigned char
		BgL_cz00_19, long BgL_crcz00_20, long BgL_polyz00_21, long BgL_lenz00_22)
	{
		{	/* Unsafe/crc.scm 174 */
			{	/* Unsafe/crc.scm 175 */
				long BgL_octetz00_6418;

				BgL_octetz00_6418 = ((unsigned char) (BgL_cz00_19));
				{	/* Unsafe/crc.scm 176 */
					long BgL_g1043z00_6419;

					{	/* Unsafe/crc.scm 177 */
						long BgL_arg1509z00_6420;

						{	/* Unsafe/crc.scm 177 */
							long BgL_res2266z00_6421;

							BgL_res2266z00_6421 = (long) (BgL_octetz00_6418);
							BgL_arg1509z00_6420 = BgL_res2266z00_6421;
						}
						BgL_g1043z00_6419 = (BgL_crcz00_20 ^ BgL_arg1509z00_6420);
					}
					{
						long BgL_iz00_6423;
						long BgL_crcz00_6424;

						BgL_iz00_6423 = ((long) 0);
						BgL_crcz00_6424 = BgL_g1043z00_6419;
					BgL_loopz00_6422:
						if ((BgL_iz00_6423 == ((long) 8)))
							{	/* Unsafe/crc.scm 178 */
								return BgL_crcz00_6424;
							}
						else
							{	/* Unsafe/crc.scm 180 */
								long BgL_newzd2crczd2_6425;

								{	/* Unsafe/crc.scm 180 */
									unsigned long BgL_xz00_6426;

									BgL_xz00_6426 = (unsigned long) (BgL_crcz00_6424);
									{	/* Unsafe/crc.scm 180 */
										unsigned long BgL_tmpz00_7095;

										BgL_tmpz00_7095 = (BgL_xz00_6426 >> (int) (((long) 1)));
										BgL_newzd2crczd2_6425 = (long) (BgL_tmpz00_7095);
								}}
								{
									long BgL_crcz00_7101;
									long BgL_iz00_7099;

									BgL_iz00_7099 = (BgL_iz00_6423 + ((long) 1));
									BgL_crcz00_7101 =
										(
										((((long) 1) & BgL_crcz00_6424) *
											BgL_polyz00_21) ^ BgL_newzd2crczd2_6425);
									BgL_crcz00_6424 = BgL_crcz00_7101;
									BgL_iz00_6423 = BgL_iz00_7099;
									goto BgL_loopz00_6422;
								}
							}
					}
				}
			}
		}

	}



/* &crc-elong-le */
	obj_t BGl_z62crczd2elongzd2lez62zz__crcz00(obj_t BgL_envz00_6159,
		obj_t BgL_cz00_6160, obj_t BgL_crcz00_6161, obj_t BgL_polyz00_6162,
		obj_t BgL_lenz00_6163)
	{
		{	/* Unsafe/crc.scm 174 */
			{	/* Unsafe/crc.scm 175 */
				long BgL_tmpz00_7105;

				{	/* Unsafe/crc.scm 175 */
					long BgL_auxz00_7133;
					long BgL_auxz00_7124;
					long BgL_auxz00_7115;
					unsigned char BgL_auxz00_7106;

					{	/* Unsafe/crc.scm 175 */
						obj_t BgL_tmpz00_7134;

						if (INTEGERP(BgL_lenz00_6163))
							{	/* Unsafe/crc.scm 175 */
								BgL_tmpz00_7134 = BgL_lenz00_6163;
							}
						else
							{
								obj_t BgL_auxz00_7137;

								BgL_auxz00_7137 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 7255)), BGl_string3199z00zz__crcz00,
									BGl_string3193z00zz__crcz00, BgL_lenz00_6163);
								FAILURE(BgL_auxz00_7137, BFALSE, BFALSE);
							}
						BgL_auxz00_7133 = (long) CINT(BgL_tmpz00_7134);
					}
					{	/* Unsafe/crc.scm 175 */
						obj_t BgL_tmpz00_7125;

						if (ELONGP(BgL_polyz00_6162))
							{	/* Unsafe/crc.scm 175 */
								BgL_tmpz00_7125 = BgL_polyz00_6162;
							}
						else
							{
								obj_t BgL_auxz00_7128;

								BgL_auxz00_7128 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 7255)), BGl_string3199z00zz__crcz00,
									BGl_string3195z00zz__crcz00, BgL_polyz00_6162);
								FAILURE(BgL_auxz00_7128, BFALSE, BFALSE);
							}
						BgL_auxz00_7124 = BELONG_TO_LONG(BgL_tmpz00_7125);
					}
					{	/* Unsafe/crc.scm 175 */
						obj_t BgL_tmpz00_7116;

						if (ELONGP(BgL_crcz00_6161))
							{	/* Unsafe/crc.scm 175 */
								BgL_tmpz00_7116 = BgL_crcz00_6161;
							}
						else
							{
								obj_t BgL_auxz00_7119;

								BgL_auxz00_7119 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 7255)), BGl_string3199z00zz__crcz00,
									BGl_string3195z00zz__crcz00, BgL_crcz00_6161);
								FAILURE(BgL_auxz00_7119, BFALSE, BFALSE);
							}
						BgL_auxz00_7115 = BELONG_TO_LONG(BgL_tmpz00_7116);
					}
					{	/* Unsafe/crc.scm 175 */
						obj_t BgL_tmpz00_7107;

						if (CHARP(BgL_cz00_6160))
							{	/* Unsafe/crc.scm 175 */
								BgL_tmpz00_7107 = BgL_cz00_6160;
							}
						else
							{
								obj_t BgL_auxz00_7110;

								BgL_auxz00_7110 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 7255)), BGl_string3199z00zz__crcz00,
									BGl_string3192z00zz__crcz00, BgL_cz00_6160);
								FAILURE(BgL_auxz00_7110, BFALSE, BFALSE);
							}
						BgL_auxz00_7106 = CCHAR(BgL_tmpz00_7107);
					}
					BgL_tmpz00_7105 =
						BGl_crczd2elongzd2lez00zz__crcz00(BgL_auxz00_7106, BgL_auxz00_7115,
						BgL_auxz00_7124, BgL_auxz00_7133);
				}
				return make_belong(BgL_tmpz00_7105);
			}
		}

	}



/* crc-llong-le */
	BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_crczd2llongzd2lez00zz__crcz00(unsigned
		char BgL_cz00_23, BGL_LONGLONG_T BgL_crcz00_24,
		BGL_LONGLONG_T BgL_polyz00_25, long BgL_lenz00_26)
	{
		{	/* Unsafe/crc.scm 188 */
			{	/* Unsafe/crc.scm 189 */
				long BgL_octetz00_6427;

				BgL_octetz00_6427 = ((unsigned char) (BgL_cz00_23));
				{	/* Unsafe/crc.scm 190 */
					BGL_LONGLONG_T BgL_g1044z00_6428;

					{	/* Unsafe/crc.scm 191 */
						BGL_LONGLONG_T BgL_arg1516z00_6429;

						{	/* Unsafe/crc.scm 191 */
							BGL_LONGLONG_T BgL_res2275z00_6430;

							BgL_res2275z00_6430 = LONG_TO_LLONG(BgL_octetz00_6427);
							BgL_arg1516z00_6429 = BgL_res2275z00_6430;
						}
						BgL_g1044z00_6428 = (BgL_crcz00_24 ^ BgL_arg1516z00_6429);
					}
					{
						long BgL_iz00_6432;
						BGL_LONGLONG_T BgL_crcz00_6433;

						BgL_iz00_6432 = ((long) 0);
						BgL_crcz00_6433 = BgL_g1044z00_6428;
					BgL_loopz00_6431:
						if ((BgL_iz00_6432 == ((long) 8)))
							{	/* Unsafe/crc.scm 192 */
								return BgL_crcz00_6433;
							}
						else
							{	/* Unsafe/crc.scm 194 */
								BGL_LONGLONG_T BgL_newzd2crczd2_6434;

								{	/* Unsafe/crc.scm 194 */
									unsigned BGL_LONGLONG_T BgL_xz00_6435;

									BgL_xz00_6435 = (unsigned BGL_LONGLONG_T) (BgL_crcz00_6433);
									{	/* Unsafe/crc.scm 194 */
										unsigned BGL_LONGLONG_T BgL_tmpz00_7151;

										BgL_tmpz00_7151 = (BgL_xz00_6435 >> (int) (((long) 1)));
										BgL_newzd2crczd2_6434 = (BGL_LONGLONG_T) (BgL_tmpz00_7151);
								}}
								{
									BGL_LONGLONG_T BgL_crcz00_7157;
									long BgL_iz00_7155;

									BgL_iz00_7155 = (BgL_iz00_6432 + ((long) 1));
									BgL_crcz00_7157 =
										(
										((((BGL_LONGLONG_T) 1) & BgL_crcz00_6433) *
											BgL_polyz00_25) ^ BgL_newzd2crczd2_6434);
									BgL_crcz00_6433 = BgL_crcz00_7157;
									BgL_iz00_6432 = BgL_iz00_7155;
									goto BgL_loopz00_6431;
								}
							}
					}
				}
			}
		}

	}



/* &crc-llong-le */
	obj_t BGl_z62crczd2llongzd2lez62zz__crcz00(obj_t BgL_envz00_6164,
		obj_t BgL_cz00_6165, obj_t BgL_crcz00_6166, obj_t BgL_polyz00_6167,
		obj_t BgL_lenz00_6168)
	{
		{	/* Unsafe/crc.scm 188 */
			{	/* Unsafe/crc.scm 189 */
				BGL_LONGLONG_T BgL_tmpz00_7161;

				{	/* Unsafe/crc.scm 189 */
					long BgL_auxz00_7189;
					BGL_LONGLONG_T BgL_auxz00_7180;
					BGL_LONGLONG_T BgL_auxz00_7171;
					unsigned char BgL_auxz00_7162;

					{	/* Unsafe/crc.scm 189 */
						obj_t BgL_tmpz00_7190;

						if (INTEGERP(BgL_lenz00_6168))
							{	/* Unsafe/crc.scm 189 */
								BgL_tmpz00_7190 = BgL_lenz00_6168;
							}
						else
							{
								obj_t BgL_auxz00_7193;

								BgL_auxz00_7193 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 7851)), BGl_string3200z00zz__crcz00,
									BGl_string3193z00zz__crcz00, BgL_lenz00_6168);
								FAILURE(BgL_auxz00_7193, BFALSE, BFALSE);
							}
						BgL_auxz00_7189 = (long) CINT(BgL_tmpz00_7190);
					}
					{	/* Unsafe/crc.scm 189 */
						obj_t BgL_tmpz00_7181;

						if (LLONGP(BgL_polyz00_6167))
							{	/* Unsafe/crc.scm 189 */
								BgL_tmpz00_7181 = BgL_polyz00_6167;
							}
						else
							{
								obj_t BgL_auxz00_7184;

								BgL_auxz00_7184 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 7851)), BGl_string3200z00zz__crcz00,
									BGl_string3197z00zz__crcz00, BgL_polyz00_6167);
								FAILURE(BgL_auxz00_7184, BFALSE, BFALSE);
							}
						BgL_auxz00_7180 = BLLONG_TO_LLONG(BgL_tmpz00_7181);
					}
					{	/* Unsafe/crc.scm 189 */
						obj_t BgL_tmpz00_7172;

						if (LLONGP(BgL_crcz00_6166))
							{	/* Unsafe/crc.scm 189 */
								BgL_tmpz00_7172 = BgL_crcz00_6166;
							}
						else
							{
								obj_t BgL_auxz00_7175;

								BgL_auxz00_7175 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 7851)), BGl_string3200z00zz__crcz00,
									BGl_string3197z00zz__crcz00, BgL_crcz00_6166);
								FAILURE(BgL_auxz00_7175, BFALSE, BFALSE);
							}
						BgL_auxz00_7171 = BLLONG_TO_LLONG(BgL_tmpz00_7172);
					}
					{	/* Unsafe/crc.scm 189 */
						obj_t BgL_tmpz00_7163;

						if (CHARP(BgL_cz00_6165))
							{	/* Unsafe/crc.scm 189 */
								BgL_tmpz00_7163 = BgL_cz00_6165;
							}
						else
							{
								obj_t BgL_auxz00_7166;

								BgL_auxz00_7166 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3190z00zz__crcz00,
									BINT(((long) 7851)), BGl_string3200z00zz__crcz00,
									BGl_string3192z00zz__crcz00, BgL_cz00_6165);
								FAILURE(BgL_auxz00_7166, BFALSE, BFALSE);
							}
						BgL_auxz00_7162 = CCHAR(BgL_tmpz00_7163);
					}
					BgL_tmpz00_7161 =
						BGl_crczd2llongzd2lez00zz__crcz00(BgL_auxz00_7162, BgL_auxz00_7171,
						BgL_auxz00_7180, BgL_auxz00_7189);
				}
				return make_bllong(BgL_tmpz00_7161);
			}
		}

	}



/* crc-polynomial-be->le */
	BGL_EXPORTED_DEF obj_t BGl_crczd2polynomialzd2bezd2ze3lez31zz__crcz00(obj_t
		BgL_lenz00_27, obj_t BgL_polyz00_28)
	{
		{	/* Unsafe/crc.scm 202 */
			{	/* Unsafe/crc.scm 203 */
				obj_t BgL_typez00_1619;

				if (INTEGERP(BgL_polyz00_28))
					{	/* Unsafe/crc.scm 205 */
						BgL_typez00_1619 = BGl_symbol3201z00zz__crcz00;
					}
				else
					{	/* Unsafe/crc.scm 205 */
						if (ELONGP(BgL_polyz00_28))
							{	/* Unsafe/crc.scm 206 */
								BgL_typez00_1619 = BGl_symbol3203z00zz__crcz00;
							}
						else
							{	/* Unsafe/crc.scm 206 */
								if (LLONGP(BgL_polyz00_28))
									{	/* Unsafe/crc.scm 207 */
										BgL_typez00_1619 = BGl_symbol3205z00zz__crcz00;
									}
								else
									{	/* Unsafe/crc.scm 207 */
										BgL_typez00_1619 =
											BGl_errorz00zz__errorz00(BGl_symbol3207z00zz__crcz00,
											BGl_string3209z00zz__crcz00, BgL_polyz00_28);
									}
							}
					}
				{	/* Unsafe/crc.scm 203 */
					obj_t BgL_onez00_1620;

					if ((BgL_typez00_1619 == BGl_symbol3201z00zz__crcz00))
						{	/* Unsafe/crc.scm 210 */
							BgL_onez00_1620 = BINT(((long) 1));
						}
					else
						{	/* Unsafe/crc.scm 210 */
							if ((BgL_typez00_1619 == BGl_symbol3203z00zz__crcz00))
								{	/* Unsafe/crc.scm 210 */
									BgL_onez00_1620 = BGl_elong3210z00zz__crcz00;
								}
							else
								{	/* Unsafe/crc.scm 210 */
									if ((BgL_typez00_1619 == BGl_symbol3205z00zz__crcz00))
										{	/* Unsafe/crc.scm 210 */
											BgL_onez00_1620 = BGl_llong3211z00zz__crcz00;
										}
									else
										{	/* Unsafe/crc.scm 210 */
											BgL_onez00_1620 = BUNSPEC;
										}
								}
						}
					{	/* Unsafe/crc.scm 210 */
						obj_t BgL_za7eroza7_1621;

						if ((BgL_typez00_1619 == BGl_symbol3201z00zz__crcz00))
							{	/* Unsafe/crc.scm 211 */
								BgL_za7eroza7_1621 = BINT(((long) 0));
							}
						else
							{	/* Unsafe/crc.scm 211 */
								if ((BgL_typez00_1619 == BGl_symbol3203z00zz__crcz00))
									{	/* Unsafe/crc.scm 211 */
										BgL_za7eroza7_1621 = BGl_elong3212z00zz__crcz00;
									}
								else
									{	/* Unsafe/crc.scm 211 */
										if ((BgL_typez00_1619 == BGl_symbol3205z00zz__crcz00))
											{	/* Unsafe/crc.scm 211 */
												BgL_za7eroza7_1621 = BGl_llong3213z00zz__crcz00;
											}
										else
											{	/* Unsafe/crc.scm 211 */
												BgL_za7eroza7_1621 = BUNSPEC;
											}
									}
							}
						{	/* Unsafe/crc.scm 211 */
							obj_t BgL_lshz00_1622;

							if ((BgL_typez00_1619 == BGl_symbol3201z00zz__crcz00))
								{	/* Unsafe/crc.scm 212 */
									BgL_lshz00_1622 = BGl_bitzd2lshzd2envz00zz__bitz00;
								}
							else
								{	/* Unsafe/crc.scm 212 */
									if ((BgL_typez00_1619 == BGl_symbol3203z00zz__crcz00))
										{	/* Unsafe/crc.scm 212 */
											BgL_lshz00_1622 = BGl_bitzd2lshelongzd2envz00zz__bitz00;
										}
									else
										{	/* Unsafe/crc.scm 212 */
											if ((BgL_typez00_1619 == BGl_symbol3205z00zz__crcz00))
												{	/* Unsafe/crc.scm 212 */
													BgL_lshz00_1622 =
														BGl_bitzd2lshllongzd2envz00zz__bitz00;
												}
											else
												{	/* Unsafe/crc.scm 212 */
													BgL_lshz00_1622 = BUNSPEC;
												}
										}
								}
							{	/* Unsafe/crc.scm 212 */
								obj_t BgL_rshz00_1623;

								if ((BgL_typez00_1619 == BGl_symbol3201z00zz__crcz00))
									{	/* Unsafe/crc.scm 215 */
										BgL_rshz00_1623 = BGl_bitzd2rshzd2envz00zz__bitz00;
									}
								else
									{	/* Unsafe/crc.scm 215 */
										if ((BgL_typez00_1619 == BGl_symbol3203z00zz__crcz00))
											{	/* Unsafe/crc.scm 215 */
												BgL_rshz00_1623 = BGl_bitzd2rshelongzd2envz00zz__bitz00;
											}
										else
											{	/* Unsafe/crc.scm 215 */
												if ((BgL_typez00_1619 == BGl_symbol3205z00zz__crcz00))
													{	/* Unsafe/crc.scm 215 */
														BgL_rshz00_1623 =
															BGl_bitzd2rshllongzd2envz00zz__bitz00;
													}
												else
													{	/* Unsafe/crc.scm 215 */
														BgL_rshz00_1623 = BUNSPEC;
													}
											}
									}
								{	/* Unsafe/crc.scm 215 */
									obj_t BgL_bzd2andzd2_1624;

									if ((BgL_typez00_1619 == BGl_symbol3201z00zz__crcz00))
										{	/* Unsafe/crc.scm 218 */
											BgL_bzd2andzd2_1624 = BGl_bitzd2andzd2envz00zz__bitz00;
										}
									else
										{	/* Unsafe/crc.scm 218 */
											if ((BgL_typez00_1619 == BGl_symbol3203z00zz__crcz00))
												{	/* Unsafe/crc.scm 218 */
													BgL_bzd2andzd2_1624 =
														BGl_bitzd2andelongzd2envz00zz__bitz00;
												}
											else
												{	/* Unsafe/crc.scm 218 */
													if ((BgL_typez00_1619 == BGl_symbol3205z00zz__crcz00))
														{	/* Unsafe/crc.scm 218 */
															BgL_bzd2andzd2_1624 =
																BGl_bitzd2andllongzd2envz00zz__bitz00;
														}
													else
														{	/* Unsafe/crc.scm 218 */
															BgL_bzd2andzd2_1624 = BUNSPEC;
														}
												}
										}
									{	/* Unsafe/crc.scm 218 */
										obj_t BgL_bzd2orzd2_1625;

										if ((BgL_typez00_1619 == BGl_symbol3201z00zz__crcz00))
											{	/* Unsafe/crc.scm 221 */
												BgL_bzd2orzd2_1625 = BGl_bitzd2orzd2envz00zz__bitz00;
											}
										else
											{	/* Unsafe/crc.scm 221 */
												if ((BgL_typez00_1619 == BGl_symbol3203z00zz__crcz00))
													{	/* Unsafe/crc.scm 221 */
														BgL_bzd2orzd2_1625 =
															BGl_bitzd2orelongzd2envz00zz__bitz00;
													}
												else
													{	/* Unsafe/crc.scm 221 */
														if (
															(BgL_typez00_1619 == BGl_symbol3205z00zz__crcz00))
															{	/* Unsafe/crc.scm 221 */
																BgL_bzd2orzd2_1625 =
																	BGl_bitzd2orllongzd2envz00zz__bitz00;
															}
														else
															{	/* Unsafe/crc.scm 221 */
																BgL_bzd2orzd2_1625 = BUNSPEC;
															}
													}
											}
										{	/* Unsafe/crc.scm 221 */

											{
												long BgL_iz00_3118;
												obj_t BgL_polyz00_3119;
												obj_t BgL_resz00_3120;

												BgL_iz00_3118 = ((long) 0);
												BgL_polyz00_3119 = BgL_polyz00_28;
												BgL_resz00_3120 = BgL_za7eroza7_1621;
											BgL_loopz00_3117:
												if ((BgL_iz00_3118 >= (long) CINT(BgL_lenz00_27)))
													{	/* Unsafe/crc.scm 227 */
														return BgL_resz00_3120;
													}
												else
													{	/* Unsafe/crc.scm 229 */
														long BgL_arg1519z00_3128;
														obj_t BgL_arg1520z00_3129;
														obj_t BgL_arg1521z00_3130;

														BgL_arg1519z00_3128 = (BgL_iz00_3118 + ((long) 1));
														BgL_arg1520z00_3129 =
															PROCEDURE_ENTRY(BgL_rshz00_1623) (BgL_rshz00_1623,
															BgL_polyz00_3119, BINT(((long) 1)), BEOA);
														{	/* Unsafe/crc.scm 231 */
															obj_t BgL_arg1523z00_3131;
															obj_t BgL_arg1524z00_3132;

															BgL_arg1523z00_3131 =
																PROCEDURE_ENTRY(BgL_lshz00_1622)
																(BgL_lshz00_1622, BgL_resz00_3120,
																BINT(((long) 1)), BEOA);
															BgL_arg1524z00_3132 =
																PROCEDURE_ENTRY(BgL_bzd2andzd2_1624)
																(BgL_bzd2andzd2_1624, BgL_onez00_1620,
																BgL_polyz00_3119, BEOA);
															BgL_arg1521z00_3130 =
																PROCEDURE_ENTRY(BgL_bzd2orzd2_1625)
																(BgL_bzd2orzd2_1625, BgL_arg1523z00_3131,
																BgL_arg1524z00_3132, BEOA);
														}
														{
															obj_t BgL_resz00_7273;
															obj_t BgL_polyz00_7272;
															long BgL_iz00_7271;

															BgL_iz00_7271 = BgL_arg1519z00_3128;
															BgL_polyz00_7272 = BgL_arg1520z00_3129;
															BgL_resz00_7273 = BgL_arg1521z00_3130;
															BgL_resz00_3120 = BgL_resz00_7273;
															BgL_polyz00_3119 = BgL_polyz00_7272;
															BgL_iz00_3118 = BgL_iz00_7271;
															goto BgL_loopz00_3117;
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



/* &crc-polynomial-be->le */
	obj_t BGl_z62crczd2polynomialzd2bezd2ze3lez53zz__crcz00(obj_t BgL_envz00_6169,
		obj_t BgL_lenz00_6170, obj_t BgL_polyz00_6171)
	{
		{	/* Unsafe/crc.scm 202 */
			return
				BGl_crczd2polynomialzd2bezd2ze3lez31zz__crcz00(BgL_lenz00_6170,
				BgL_polyz00_6171);
		}

	}



/* register-crc! */
	BGL_EXPORTED_DEF obj_t BGl_registerzd2crcz12zc0zz__crcz00(obj_t
		BgL_namez00_29, obj_t BgL_polyz00_30, obj_t BgL_lenz00_31)
	{
		{	/* Unsafe/crc.scm 277 */
			{	/* Unsafe/crc.scm 279 */
				obj_t BgL_arg1546z00_3138;

				{	/* Unsafe/crc.scm 279 */
					obj_t BgL_arg1547z00_3139;

					BgL_arg1547z00_3139 =
						BGl_crczd2polynomialzd2bezd2ze3lez31zz__crcz00(BgL_polyz00_30,
						BgL_lenz00_31);
					{	/* Unsafe/crc.scm 279 */
						obj_t BgL_list1548z00_3140;

						{	/* Unsafe/crc.scm 279 */
							obj_t BgL_arg1551z00_3141;

							{	/* Unsafe/crc.scm 279 */
								obj_t BgL_arg1552z00_3142;

								{	/* Unsafe/crc.scm 279 */
									obj_t BgL_arg1553z00_3143;

									BgL_arg1553z00_3143 =
										MAKE_YOUNG_PAIR(BgL_arg1547z00_3139, BNIL);
									BgL_arg1552z00_3142 =
										MAKE_YOUNG_PAIR(BgL_polyz00_30, BgL_arg1553z00_3143);
								}
								BgL_arg1551z00_3141 =
									MAKE_YOUNG_PAIR(BgL_lenz00_31, BgL_arg1552z00_3142);
							}
							BgL_list1548z00_3140 =
								MAKE_YOUNG_PAIR(BgL_namez00_29, BgL_arg1551z00_3141);
						}
						BgL_arg1546z00_3138 = BgL_list1548z00_3140;
					}
				}
				return (BGl_za2crcsza2z00zz__crcz00 =
					MAKE_YOUNG_PAIR(BgL_arg1546z00_3138, BGl_za2crcsza2z00zz__crcz00),
					BUNSPEC);
			}
		}

	}



/* &register-crc! */
	obj_t BGl_z62registerzd2crcz12za2zz__crcz00(obj_t BgL_envz00_6208,
		obj_t BgL_namez00_6209, obj_t BgL_polyz00_6210, obj_t BgL_lenz00_6211)
	{
		{	/* Unsafe/crc.scm 277 */
			return
				BGl_registerzd2crcz12zc0zz__crcz00(BgL_namez00_6209, BgL_polyz00_6210,
				BgL_lenz00_6211);
		}

	}



/* crc-polynomial */
	BGL_EXPORTED_DEF obj_t BGl_crczd2polynomialzd2zz__crcz00(obj_t BgL_namez00_32)
	{
		{	/* Unsafe/crc.scm 284 */
			{	/* Unsafe/crc.scm 285 */
				obj_t BgL_tz00_3145;

				BgL_tz00_3145 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_namez00_32,
					BGl_za2crcsza2z00zz__crcz00);
				if (CBOOL(BgL_tz00_3145))
					{	/* Unsafe/crc.scm 286 */
						obj_t BgL_pairz00_3152;

						{	/* Unsafe/crc.scm 286 */
							obj_t BgL_pairz00_3151;

							BgL_pairz00_3151 = CDR(((obj_t) BgL_tz00_3145));
							BgL_pairz00_3152 = CDR(BgL_pairz00_3151);
						}
						return CAR(BgL_pairz00_3152);
					}
				else
					{	/* Unsafe/crc.scm 286 */
						return BFALSE;
					}
			}
		}

	}



/* &crc-polynomial */
	obj_t BGl_z62crczd2polynomialzb0zz__crcz00(obj_t BgL_envz00_6212,
		obj_t BgL_namez00_6213)
	{
		{	/* Unsafe/crc.scm 284 */
			return BGl_crczd2polynomialzd2zz__crcz00(BgL_namez00_6213);
		}

	}



/* crc-polynomial-le */
	BGL_EXPORTED_DEF obj_t BGl_crczd2polynomialzd2lez00zz__crcz00(obj_t
		BgL_namez00_33)
	{
		{	/* Unsafe/crc.scm 291 */
			{	/* Unsafe/crc.scm 292 */
				obj_t BgL_tz00_3153;

				BgL_tz00_3153 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_namez00_33,
					BGl_za2crcsza2z00zz__crcz00);
				if (CBOOL(BgL_tz00_3153))
					{	/* Unsafe/crc.scm 293 */
						obj_t BgL_pairz00_3162;

						{	/* Unsafe/crc.scm 293 */
							obj_t BgL_pairz00_3161;

							{	/* Unsafe/crc.scm 293 */
								obj_t BgL_pairz00_3160;

								BgL_pairz00_3160 = CDR(((obj_t) BgL_tz00_3153));
								BgL_pairz00_3161 = CDR(BgL_pairz00_3160);
							}
							BgL_pairz00_3162 = CDR(BgL_pairz00_3161);
						}
						return CAR(BgL_pairz00_3162);
					}
				else
					{	/* Unsafe/crc.scm 293 */
						return BFALSE;
					}
			}
		}

	}



/* &crc-polynomial-le */
	obj_t BGl_z62crczd2polynomialzd2lez62zz__crcz00(obj_t BgL_envz00_6214,
		obj_t BgL_namez00_6215)
	{
		{	/* Unsafe/crc.scm 291 */
			return BGl_crczd2polynomialzd2lez00zz__crcz00(BgL_namez00_6215);
		}

	}



/* crc-length */
	BGL_EXPORTED_DEF obj_t BGl_crczd2lengthzd2zz__crcz00(obj_t BgL_namez00_34)
	{
		{	/* Unsafe/crc.scm 298 */
			{	/* Unsafe/crc.scm 299 */
				obj_t BgL_tz00_3163;

				BgL_tz00_3163 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_namez00_34,
					BGl_za2crcsza2z00zz__crcz00);
				if (CBOOL(BgL_tz00_3163))
					{	/* Unsafe/crc.scm 300 */
						obj_t BgL_pairz00_3168;

						BgL_pairz00_3168 = CDR(((obj_t) BgL_tz00_3163));
						return CAR(BgL_pairz00_3168);
					}
				else
					{	/* Unsafe/crc.scm 300 */
						return BFALSE;
					}
			}
		}

	}



/* &crc-length */
	obj_t BGl_z62crczd2lengthzb0zz__crcz00(obj_t BgL_envz00_6216,
		obj_t BgL_namez00_6217)
	{
		{	/* Unsafe/crc.scm 298 */
			return BGl_crczd2lengthzd2zz__crcz00(BgL_namez00_6217);
		}

	}



/* crc-names */
	BGL_EXPORTED_DEF obj_t BGl_crczd2nameszd2zz__crcz00()
	{
		{	/* Unsafe/crc.scm 305 */
			{	/* Unsafe/crc.scm 306 */
				obj_t BgL_l1101z00_1677;

				BgL_l1101z00_1677 = BGl_za2crcsza2z00zz__crcz00;
				{	/* Unsafe/crc.scm 306 */
					obj_t BgL_head1103z00_1679;

					{	/* Unsafe/crc.scm 306 */
						obj_t BgL_arg1561z00_1691;

						BgL_arg1561z00_1691 = CAR(CAR(BgL_l1101z00_1677));
						{	/* Unsafe/crc.scm 306 */
							obj_t BgL_res2312z00_3172;

							BgL_res2312z00_3172 = MAKE_YOUNG_PAIR(BgL_arg1561z00_1691, BNIL);
							BgL_head1103z00_1679 = BgL_res2312z00_3172;
						}
					}
					{	/* Unsafe/crc.scm 306 */
						obj_t BgL_g1106z00_1680;

						BgL_g1106z00_1680 = CDR(BgL_l1101z00_1677);
						{
							obj_t BgL_l1101z00_3197;
							obj_t BgL_tail1104z00_3198;

							BgL_l1101z00_3197 = BgL_g1106z00_1680;
							BgL_tail1104z00_3198 = BgL_head1103z00_1679;
						BgL_zc3z04anonymousza31555ze3z87_3196:
							if (NULLP(BgL_l1101z00_3197))
								{	/* Unsafe/crc.scm 306 */
									return BgL_head1103z00_1679;
								}
							else
								{	/* Unsafe/crc.scm 306 */
									obj_t BgL_newtail1105z00_3205;

									{	/* Unsafe/crc.scm 306 */
										obj_t BgL_arg1558z00_3206;

										{	/* Unsafe/crc.scm 306 */
											obj_t BgL_pairz00_3211;

											BgL_pairz00_3211 = CAR(((obj_t) BgL_l1101z00_3197));
											BgL_arg1558z00_3206 = CAR(BgL_pairz00_3211);
										}
										{	/* Unsafe/crc.scm 306 */
											obj_t BgL_res2318z00_3212;

											BgL_res2318z00_3212 =
												MAKE_YOUNG_PAIR(BgL_arg1558z00_3206, BNIL);
											BgL_newtail1105z00_3205 = BgL_res2318z00_3212;
										}
									}
									SET_CDR(BgL_tail1104z00_3198, BgL_newtail1105z00_3205);
									{	/* Unsafe/crc.scm 306 */
										obj_t BgL_arg1557z00_3208;

										BgL_arg1557z00_3208 = CDR(((obj_t) BgL_l1101z00_3197));
										{
											obj_t BgL_tail1104z00_7320;
											obj_t BgL_l1101z00_7319;

											BgL_l1101z00_7319 = BgL_arg1557z00_3208;
											BgL_tail1104z00_7320 = BgL_newtail1105z00_3205;
											BgL_tail1104z00_3198 = BgL_tail1104z00_7320;
											BgL_l1101z00_3197 = BgL_l1101z00_7319;
											goto BgL_zc3z04anonymousza31555ze3z87_3196;
										}
									}
								}
						}
					}
				}
			}
		}

	}



/* &crc-names */
	obj_t BGl_z62crczd2nameszb0zz__crcz00(obj_t BgL_envz00_6218)
	{
		{	/* Unsafe/crc.scm 305 */
			return BGl_crczd2nameszd2zz__crcz00();
		}

	}



/* _crc */
	obj_t BGl__crcz00zz__crcz00(obj_t BgL_env1132z00_41, obj_t BgL_opt1131z00_40)
	{
		{	/* Unsafe/crc.scm 311 */
			{	/* Unsafe/crc.scm 311 */
				obj_t BgL_namez00_1697;
				obj_t BgL_objz00_1698;

				BgL_namez00_1697 = VECTOR_REF(BgL_opt1131z00_40, ((long) 0));
				BgL_objz00_1698 = VECTOR_REF(BgL_opt1131z00_40, ((long) 1));
				{	/* Unsafe/crc.scm 311 */
					obj_t BgL_bigzd2endianzf3z21_1699;

					BgL_bigzd2endianzf3z21_1699 = BTRUE;
					{	/* Unsafe/crc.scm 311 */
						obj_t BgL_finalzd2xorzd2_1700;

						BgL_finalzd2xorzd2_1700 = BINT(((long) 0));
						{	/* Unsafe/crc.scm 311 */
							obj_t BgL_initz00_1701;

							BgL_initz00_1701 = BINT(((long) 0));
							{	/* Unsafe/crc.scm 311 */

								{
									long BgL_iz00_1702;

									BgL_iz00_1702 = ((long) 2);
								BgL_check1135z00_1703:
									if ((BgL_iz00_1702 == VECTOR_LENGTH(BgL_opt1131z00_40)))
										{	/* Unsafe/crc.scm 311 */
											BNIL;
										}
									else
										{	/* Unsafe/crc.scm 311 */
											bool_t BgL_test3405z00_7329;

											{	/* Unsafe/crc.scm 311 */
												obj_t BgL_arg1568z00_1709;

												BgL_arg1568z00_1709 =
													VECTOR_REF(BgL_opt1131z00_40, BgL_iz00_1702);
												BgL_test3405z00_7329 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1568z00_1709, BGl_list3214z00zz__crcz00));
											}
											if (BgL_test3405z00_7329)
												{
													long BgL_iz00_7333;

													BgL_iz00_7333 = (BgL_iz00_1702 + ((long) 2));
													BgL_iz00_1702 = BgL_iz00_7333;
													goto BgL_check1135z00_1703;
												}
											else
												{	/* Unsafe/crc.scm 311 */
													obj_t BgL_arg1567z00_1708;

													BgL_arg1567z00_1708 =
														VECTOR_REF(BgL_opt1131z00_40, BgL_iz00_1702);
													BGl_errorz00zz__errorz00(BGl_symbol3221z00zz__crcz00,
														BGl_string3223z00zz__crcz00, BgL_arg1567z00_1708);
												}
										}
								}
								{	/* Unsafe/crc.scm 311 */
									obj_t BgL_index1137z00_1710;

									{
										long BgL_iz00_3238;

										BgL_iz00_3238 = ((long) 2);
									BgL_search1134z00_3237:
										if ((BgL_iz00_3238 == VECTOR_LENGTH(BgL_opt1131z00_40)))
											{	/* Unsafe/crc.scm 311 */
												BgL_index1137z00_1710 = BINT(((long) -1));
											}
										else
											{	/* Unsafe/crc.scm 311 */
												if (
													(BgL_iz00_3238 ==
														(VECTOR_LENGTH(BgL_opt1131z00_40) - ((long) 1))))
													{	/* Unsafe/crc.scm 311 */
														BgL_index1137z00_1710 =
															BGl_errorz00zz__errorz00
															(BGl_symbol3221z00zz__crcz00,
															BGl_string3224z00zz__crcz00,
															BINT(VECTOR_LENGTH(BgL_opt1131z00_40)));
													}
												else
													{	/* Unsafe/crc.scm 311 */
														obj_t BgL_vz00_3251;

														BgL_vz00_3251 =
															VECTOR_REF(BgL_opt1131z00_40, BgL_iz00_3238);
														if ((BgL_vz00_3251 == BGl_keyword3215z00zz__crcz00))
															{	/* Unsafe/crc.scm 311 */
																BgL_index1137z00_1710 =
																	BINT((BgL_iz00_3238 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_7353;

																BgL_iz00_7353 = (BgL_iz00_3238 + ((long) 2));
																BgL_iz00_3238 = BgL_iz00_7353;
																goto BgL_search1134z00_3237;
															}
													}
											}
									}
									{	/* Unsafe/crc.scm 311 */
										bool_t BgL_test3409z00_7355;

										{	/* Unsafe/crc.scm 311 */
											long BgL_n1z00_3258;

											{	/* Unsafe/crc.scm 311 */
												obj_t BgL_tmpz00_7356;

												if (INTEGERP(BgL_index1137z00_1710))
													{	/* Unsafe/crc.scm 311 */
														BgL_tmpz00_7356 = BgL_index1137z00_1710;
													}
												else
													{
														obj_t BgL_auxz00_7359;

														BgL_auxz00_7359 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3190z00zz__crcz00,
															BINT(((long) 12674)), BGl_string3225z00zz__crcz00,
															BGl_string3193z00zz__crcz00,
															BgL_index1137z00_1710);
														FAILURE(BgL_auxz00_7359, BFALSE, BFALSE);
													}
												BgL_n1z00_3258 = (long) CINT(BgL_tmpz00_7356);
											}
											BgL_test3409z00_7355 = (BgL_n1z00_3258 >= ((long) 0));
										}
										if (BgL_test3409z00_7355)
											{
												long BgL_auxz00_7365;

												{	/* Unsafe/crc.scm 311 */
													obj_t BgL_tmpz00_7366;

													if (INTEGERP(BgL_index1137z00_1710))
														{	/* Unsafe/crc.scm 311 */
															BgL_tmpz00_7366 = BgL_index1137z00_1710;
														}
													else
														{
															obj_t BgL_auxz00_7369;

															BgL_auxz00_7369 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3190z00zz__crcz00,
																BINT(((long) 12674)),
																BGl_string3225z00zz__crcz00,
																BGl_string3193z00zz__crcz00,
																BgL_index1137z00_1710);
															FAILURE(BgL_auxz00_7369, BFALSE, BFALSE);
														}
													BgL_auxz00_7365 = (long) CINT(BgL_tmpz00_7366);
												}
												BgL_bigzd2endianzf3z21_1699 =
													VECTOR_REF(BgL_opt1131z00_40, BgL_auxz00_7365);
											}
										else
											{	/* Unsafe/crc.scm 311 */
												BFALSE;
											}
									}
								}
								{	/* Unsafe/crc.scm 311 */
									obj_t BgL_index1138z00_1712;

									{
										long BgL_iz00_3261;

										BgL_iz00_3261 = ((long) 2);
									BgL_search1134z00_3260:
										if ((BgL_iz00_3261 == VECTOR_LENGTH(BgL_opt1131z00_40)))
											{	/* Unsafe/crc.scm 311 */
												BgL_index1138z00_1712 = BINT(((long) -1));
											}
										else
											{	/* Unsafe/crc.scm 311 */
												if (
													(BgL_iz00_3261 ==
														(VECTOR_LENGTH(BgL_opt1131z00_40) - ((long) 1))))
													{	/* Unsafe/crc.scm 311 */
														BgL_index1138z00_1712 =
															BGl_errorz00zz__errorz00
															(BGl_symbol3221z00zz__crcz00,
															BGl_string3224z00zz__crcz00,
															BINT(VECTOR_LENGTH(BgL_opt1131z00_40)));
													}
												else
													{	/* Unsafe/crc.scm 311 */
														obj_t BgL_vz00_3274;

														BgL_vz00_3274 =
															VECTOR_REF(BgL_opt1131z00_40, BgL_iz00_3261);
														if ((BgL_vz00_3274 == BGl_keyword3217z00zz__crcz00))
															{	/* Unsafe/crc.scm 311 */
																BgL_index1138z00_1712 =
																	BINT((BgL_iz00_3261 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_7391;

																BgL_iz00_7391 = (BgL_iz00_3261 + ((long) 2));
																BgL_iz00_3261 = BgL_iz00_7391;
																goto BgL_search1134z00_3260;
															}
													}
											}
									}
									{	/* Unsafe/crc.scm 311 */
										bool_t BgL_test3415z00_7393;

										{	/* Unsafe/crc.scm 311 */
											long BgL_n1z00_3281;

											{	/* Unsafe/crc.scm 311 */
												obj_t BgL_tmpz00_7394;

												if (INTEGERP(BgL_index1138z00_1712))
													{	/* Unsafe/crc.scm 311 */
														BgL_tmpz00_7394 = BgL_index1138z00_1712;
													}
												else
													{
														obj_t BgL_auxz00_7397;

														BgL_auxz00_7397 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3190z00zz__crcz00,
															BINT(((long) 12674)), BGl_string3225z00zz__crcz00,
															BGl_string3193z00zz__crcz00,
															BgL_index1138z00_1712);
														FAILURE(BgL_auxz00_7397, BFALSE, BFALSE);
													}
												BgL_n1z00_3281 = (long) CINT(BgL_tmpz00_7394);
											}
											BgL_test3415z00_7393 = (BgL_n1z00_3281 >= ((long) 0));
										}
										if (BgL_test3415z00_7393)
											{
												long BgL_auxz00_7403;

												{	/* Unsafe/crc.scm 311 */
													obj_t BgL_tmpz00_7404;

													if (INTEGERP(BgL_index1138z00_1712))
														{	/* Unsafe/crc.scm 311 */
															BgL_tmpz00_7404 = BgL_index1138z00_1712;
														}
													else
														{
															obj_t BgL_auxz00_7407;

															BgL_auxz00_7407 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3190z00zz__crcz00,
																BINT(((long) 12674)),
																BGl_string3225z00zz__crcz00,
																BGl_string3193z00zz__crcz00,
																BgL_index1138z00_1712);
															FAILURE(BgL_auxz00_7407, BFALSE, BFALSE);
														}
													BgL_auxz00_7403 = (long) CINT(BgL_tmpz00_7404);
												}
												BgL_finalzd2xorzd2_1700 =
													VECTOR_REF(BgL_opt1131z00_40, BgL_auxz00_7403);
											}
										else
											{	/* Unsafe/crc.scm 311 */
												BFALSE;
											}
									}
								}
								{	/* Unsafe/crc.scm 311 */
									obj_t BgL_index1139z00_1714;

									{
										long BgL_iz00_3284;

										BgL_iz00_3284 = ((long) 2);
									BgL_search1134z00_3283:
										if ((BgL_iz00_3284 == VECTOR_LENGTH(BgL_opt1131z00_40)))
											{	/* Unsafe/crc.scm 311 */
												BgL_index1139z00_1714 = BINT(((long) -1));
											}
										else
											{	/* Unsafe/crc.scm 311 */
												if (
													(BgL_iz00_3284 ==
														(VECTOR_LENGTH(BgL_opt1131z00_40) - ((long) 1))))
													{	/* Unsafe/crc.scm 311 */
														BgL_index1139z00_1714 =
															BGl_errorz00zz__errorz00
															(BGl_symbol3221z00zz__crcz00,
															BGl_string3224z00zz__crcz00,
															BINT(VECTOR_LENGTH(BgL_opt1131z00_40)));
													}
												else
													{	/* Unsafe/crc.scm 311 */
														obj_t BgL_vz00_3297;

														BgL_vz00_3297 =
															VECTOR_REF(BgL_opt1131z00_40, BgL_iz00_3284);
														if ((BgL_vz00_3297 == BGl_keyword3219z00zz__crcz00))
															{	/* Unsafe/crc.scm 311 */
																BgL_index1139z00_1714 =
																	BINT((BgL_iz00_3284 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_7429;

																BgL_iz00_7429 = (BgL_iz00_3284 + ((long) 2));
																BgL_iz00_3284 = BgL_iz00_7429;
																goto BgL_search1134z00_3283;
															}
													}
											}
									}
									{	/* Unsafe/crc.scm 311 */
										bool_t BgL_test3421z00_7431;

										{	/* Unsafe/crc.scm 311 */
											long BgL_n1z00_3304;

											{	/* Unsafe/crc.scm 311 */
												obj_t BgL_tmpz00_7432;

												if (INTEGERP(BgL_index1139z00_1714))
													{	/* Unsafe/crc.scm 311 */
														BgL_tmpz00_7432 = BgL_index1139z00_1714;
													}
												else
													{
														obj_t BgL_auxz00_7435;

														BgL_auxz00_7435 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3190z00zz__crcz00,
															BINT(((long) 12674)), BGl_string3225z00zz__crcz00,
															BGl_string3193z00zz__crcz00,
															BgL_index1139z00_1714);
														FAILURE(BgL_auxz00_7435, BFALSE, BFALSE);
													}
												BgL_n1z00_3304 = (long) CINT(BgL_tmpz00_7432);
											}
											BgL_test3421z00_7431 = (BgL_n1z00_3304 >= ((long) 0));
										}
										if (BgL_test3421z00_7431)
											{
												long BgL_auxz00_7441;

												{	/* Unsafe/crc.scm 311 */
													obj_t BgL_tmpz00_7442;

													if (INTEGERP(BgL_index1139z00_1714))
														{	/* Unsafe/crc.scm 311 */
															BgL_tmpz00_7442 = BgL_index1139z00_1714;
														}
													else
														{
															obj_t BgL_auxz00_7445;

															BgL_auxz00_7445 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3190z00zz__crcz00,
																BINT(((long) 12674)),
																BGl_string3225z00zz__crcz00,
																BGl_string3193z00zz__crcz00,
																BgL_index1139z00_1714);
															FAILURE(BgL_auxz00_7445, BFALSE, BFALSE);
														}
													BgL_auxz00_7441 = (long) CINT(BgL_tmpz00_7442);
												}
												BgL_initz00_1701 =
													VECTOR_REF(BgL_opt1131z00_40, BgL_auxz00_7441);
											}
										else
											{	/* Unsafe/crc.scm 311 */
												BFALSE;
											}
									}
								}
								{	/* Unsafe/crc.scm 311 */
									obj_t BgL_arg1573z00_1716;
									obj_t BgL_arg1574z00_1717;

									BgL_arg1573z00_1716 =
										VECTOR_REF(BgL_opt1131z00_40, ((long) 0));
									BgL_arg1574z00_1717 =
										VECTOR_REF(BgL_opt1131z00_40, ((long) 1));
									{	/* Unsafe/crc.scm 311 */
										obj_t BgL_bigzd2endianzf3z21_1718;

										BgL_bigzd2endianzf3z21_1718 = BgL_bigzd2endianzf3z21_1699;
										{	/* Unsafe/crc.scm 311 */
											obj_t BgL_finalzd2xorzd2_1719;

											BgL_finalzd2xorzd2_1719 = BgL_finalzd2xorzd2_1700;
											{	/* Unsafe/crc.scm 311 */
												obj_t BgL_initz00_1720;

												BgL_initz00_1720 = BgL_initz00_1701;
												if (STRINGP(BgL_arg1574z00_1717))
													{	/* Unsafe/crc.scm 314 */
														obj_t BgL_arg1587z00_3307;

														{	/* Unsafe/crc.scm 314 */
															long BgL_endz00_3310;

															BgL_endz00_3310 =
																STRING_LENGTH(BgL_arg1574z00_1717);
															{	/* Unsafe/crc.scm 314 */

																BgL_arg1587z00_3307 =
																	BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
																	(BgL_arg1574z00_1717, BINT(((long) 0)),
																	BINT(BgL_endz00_3310));
														}}
														return
															BGl_crczd2fastzd2portz00zz__crcz00
															(BgL_arg1573z00_1716, BgL_arg1587z00_3307,
															BgL_initz00_1720, BgL_finalzd2xorzd2_1719,
															BgL_bigzd2endianzf3z21_1718);
													}
												else
													{	/* Unsafe/crc.scm 313 */
														if (INPUT_PORTP(BgL_arg1574z00_1717))
															{	/* Unsafe/crc.scm 315 */
																return
																	BGl_crczd2fastzd2portz00zz__crcz00
																	(BgL_arg1573z00_1716, BgL_arg1574z00_1717,
																	BgL_initz00_1720, BgL_finalzd2xorzd2_1719,
																	BgL_bigzd2endianzf3z21_1718);
															}
														else
															{	/* Unsafe/crc.scm 317 */
																bool_t BgL_test3426z00_7463;

																{	/* Unsafe/crc.scm 317 */
																	bool_t BgL_res2331z00_3316;

																	BgL_res2331z00_3316 =
																		BGL_MMAPP(BgL_arg1574z00_1717);
																	BgL_test3426z00_7463 = BgL_res2331z00_3316;
																}
																if (BgL_test3426z00_7463)
																	{	/* Unsafe/crc.scm 318 */
																		obj_t BgL_auxz00_7465;

																		if (BGL_MMAPP(BgL_arg1574z00_1717))
																			{	/* Unsafe/crc.scm 318 */
																				BgL_auxz00_7465 = BgL_arg1574z00_1717;
																			}
																		else
																			{
																				obj_t BgL_auxz00_7468;

																				BgL_auxz00_7468 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3190z00zz__crcz00,
																					BINT(((long) 12984)),
																					BGl_string3225z00zz__crcz00,
																					BGl_string3226z00zz__crcz00,
																					BgL_arg1574z00_1717);
																				FAILURE(BgL_auxz00_7468, BFALSE,
																					BFALSE);
																			}
																		return
																			BGl_crczd2fastzd2mmapz00zz__crcz00
																			(BgL_arg1573z00_1716, BgL_auxz00_7465,
																			BgL_initz00_1720, BgL_finalzd2xorzd2_1719,
																			BgL_bigzd2endianzf3z21_1718);
																	}
																else
																	{	/* Unsafe/crc.scm 317 */
																		return
																			BGl_errorz00zz__errorz00
																			(BGl_symbol3221z00zz__crcz00,
																			BGl_string3227z00zz__crcz00,
																			BgL_arg1574z00_1717);
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



/* crc */
	BGL_EXPORTED_DEF obj_t BGl_crcz00zz__crcz00(obj_t BgL_namez00_35,
		obj_t BgL_objz00_36, obj_t BgL_bigzd2endianzf3z21_37,
		obj_t BgL_finalzd2xorzd2_38, obj_t BgL_initz00_39)
	{
		{	/* Unsafe/crc.scm 311 */
			if (STRINGP(BgL_objz00_36))
				{	/* Unsafe/crc.scm 314 */
					obj_t BgL_arg1587z00_3318;

					{	/* Unsafe/crc.scm 314 */
						long BgL_endz00_3321;

						BgL_endz00_3321 = STRING_LENGTH(BgL_objz00_36);
						{	/* Unsafe/crc.scm 314 */

							BgL_arg1587z00_3318 =
								BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
								(BgL_objz00_36, BINT(((long) 0)), BINT(BgL_endz00_3321));
					}}
					return
						BGl_crczd2fastzd2portz00zz__crcz00(BgL_namez00_35,
						BgL_arg1587z00_3318, BgL_initz00_39, BgL_finalzd2xorzd2_38,
						BgL_bigzd2endianzf3z21_37);
				}
			else
				{	/* Unsafe/crc.scm 313 */
					if (INPUT_PORTP(BgL_objz00_36))
						{	/* Unsafe/crc.scm 315 */
							return
								BGl_crczd2fastzd2portz00zz__crcz00(BgL_namez00_35,
								BgL_objz00_36, BgL_initz00_39, BgL_finalzd2xorzd2_38,
								BgL_bigzd2endianzf3z21_37);
						}
					else
						{	/* Unsafe/crc.scm 317 */
							bool_t BgL_test3430z00_7484;

							{	/* Unsafe/crc.scm 317 */
								bool_t BgL_res2334z00_3327;

								BgL_res2334z00_3327 = BGL_MMAPP(BgL_objz00_36);
								BgL_test3430z00_7484 = BgL_res2334z00_3327;
							}
							if (BgL_test3430z00_7484)
								{	/* Unsafe/crc.scm 317 */
									return
										BGl_crczd2fastzd2mmapz00zz__crcz00(BgL_namez00_35,
										BgL_objz00_36, BgL_initz00_39, BgL_finalzd2xorzd2_38,
										BgL_bigzd2endianzf3z21_37);
								}
							else
								{	/* Unsafe/crc.scm 317 */
									return
										BGl_errorz00zz__errorz00(BGl_symbol3221z00zz__crcz00,
										BGl_string3227z00zz__crcz00, BgL_objz00_36);
								}
						}
				}
		}

	}



/* _crc-file */
	obj_t BGl__crczd2filezd2zz__crcz00(obj_t BgL_env1141z00_48,
		obj_t BgL_opt1140z00_47)
	{
		{	/* Unsafe/crc.scm 325 */
			{	/* Unsafe/crc.scm 325 */
				obj_t BgL_namez00_1740;
				obj_t BgL_fz00_1741;

				BgL_namez00_1740 = VECTOR_REF(BgL_opt1140z00_47, ((long) 0));
				BgL_fz00_1741 = VECTOR_REF(BgL_opt1140z00_47, ((long) 1));
				{	/* Unsafe/crc.scm 325 */
					obj_t BgL_bigzd2endianzf3z21_1742;

					BgL_bigzd2endianzf3z21_1742 = BTRUE;
					{	/* Unsafe/crc.scm 325 */
						obj_t BgL_finalzd2xorzd2_1743;

						BgL_finalzd2xorzd2_1743 = BINT(((long) 0));
						{	/* Unsafe/crc.scm 325 */
							obj_t BgL_initz00_1744;

							BgL_initz00_1744 = BINT(((long) 0));
							{	/* Unsafe/crc.scm 325 */

								{
									long BgL_iz00_1745;

									BgL_iz00_1745 = ((long) 2);
								BgL_check1144z00_1746:
									if ((BgL_iz00_1745 == VECTOR_LENGTH(BgL_opt1140z00_47)))
										{	/* Unsafe/crc.scm 325 */
											BNIL;
										}
									else
										{	/* Unsafe/crc.scm 325 */
											bool_t BgL_test3432z00_7495;

											{	/* Unsafe/crc.scm 325 */
												obj_t BgL_arg1598z00_1752;

												BgL_arg1598z00_1752 =
													VECTOR_REF(BgL_opt1140z00_47, BgL_iz00_1745);
												BgL_test3432z00_7495 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1598z00_1752, BGl_list3214z00zz__crcz00));
											}
											if (BgL_test3432z00_7495)
												{
													long BgL_iz00_7499;

													BgL_iz00_7499 = (BgL_iz00_1745 + ((long) 2));
													BgL_iz00_1745 = BgL_iz00_7499;
													goto BgL_check1144z00_1746;
												}
											else
												{	/* Unsafe/crc.scm 325 */
													obj_t BgL_arg1597z00_1751;

													BgL_arg1597z00_1751 =
														VECTOR_REF(BgL_opt1140z00_47, BgL_iz00_1745);
													BGl_errorz00zz__errorz00(BGl_symbol3228z00zz__crcz00,
														BGl_string3223z00zz__crcz00, BgL_arg1597z00_1751);
												}
										}
								}
								{	/* Unsafe/crc.scm 325 */
									obj_t BgL_index1146z00_1753;

									{
										long BgL_iz00_3351;

										BgL_iz00_3351 = ((long) 2);
									BgL_search1143z00_3350:
										if ((BgL_iz00_3351 == VECTOR_LENGTH(BgL_opt1140z00_47)))
											{	/* Unsafe/crc.scm 325 */
												BgL_index1146z00_1753 = BINT(((long) -1));
											}
										else
											{	/* Unsafe/crc.scm 325 */
												if (
													(BgL_iz00_3351 ==
														(VECTOR_LENGTH(BgL_opt1140z00_47) - ((long) 1))))
													{	/* Unsafe/crc.scm 325 */
														BgL_index1146z00_1753 =
															BGl_errorz00zz__errorz00
															(BGl_symbol3228z00zz__crcz00,
															BGl_string3224z00zz__crcz00,
															BINT(VECTOR_LENGTH(BgL_opt1140z00_47)));
													}
												else
													{	/* Unsafe/crc.scm 325 */
														obj_t BgL_vz00_3364;

														BgL_vz00_3364 =
															VECTOR_REF(BgL_opt1140z00_47, BgL_iz00_3351);
														if ((BgL_vz00_3364 == BGl_keyword3215z00zz__crcz00))
															{	/* Unsafe/crc.scm 325 */
																BgL_index1146z00_1753 =
																	BINT((BgL_iz00_3351 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_7519;

																BgL_iz00_7519 = (BgL_iz00_3351 + ((long) 2));
																BgL_iz00_3351 = BgL_iz00_7519;
																goto BgL_search1143z00_3350;
															}
													}
											}
									}
									{	/* Unsafe/crc.scm 325 */
										bool_t BgL_test3436z00_7521;

										{	/* Unsafe/crc.scm 325 */
											long BgL_n1z00_3371;

											{	/* Unsafe/crc.scm 325 */
												obj_t BgL_tmpz00_7522;

												if (INTEGERP(BgL_index1146z00_1753))
													{	/* Unsafe/crc.scm 325 */
														BgL_tmpz00_7522 = BgL_index1146z00_1753;
													}
												else
													{
														obj_t BgL_auxz00_7525;

														BgL_auxz00_7525 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3190z00zz__crcz00,
															BINT(((long) 13298)), BGl_string3230z00zz__crcz00,
															BGl_string3193z00zz__crcz00,
															BgL_index1146z00_1753);
														FAILURE(BgL_auxz00_7525, BFALSE, BFALSE);
													}
												BgL_n1z00_3371 = (long) CINT(BgL_tmpz00_7522);
											}
											BgL_test3436z00_7521 = (BgL_n1z00_3371 >= ((long) 0));
										}
										if (BgL_test3436z00_7521)
											{
												long BgL_auxz00_7531;

												{	/* Unsafe/crc.scm 325 */
													obj_t BgL_tmpz00_7532;

													if (INTEGERP(BgL_index1146z00_1753))
														{	/* Unsafe/crc.scm 325 */
															BgL_tmpz00_7532 = BgL_index1146z00_1753;
														}
													else
														{
															obj_t BgL_auxz00_7535;

															BgL_auxz00_7535 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3190z00zz__crcz00,
																BINT(((long) 13298)),
																BGl_string3230z00zz__crcz00,
																BGl_string3193z00zz__crcz00,
																BgL_index1146z00_1753);
															FAILURE(BgL_auxz00_7535, BFALSE, BFALSE);
														}
													BgL_auxz00_7531 = (long) CINT(BgL_tmpz00_7532);
												}
												BgL_bigzd2endianzf3z21_1742 =
													VECTOR_REF(BgL_opt1140z00_47, BgL_auxz00_7531);
											}
										else
											{	/* Unsafe/crc.scm 325 */
												BFALSE;
											}
									}
								}
								{	/* Unsafe/crc.scm 325 */
									obj_t BgL_index1147z00_1755;

									{
										long BgL_iz00_3374;

										BgL_iz00_3374 = ((long) 2);
									BgL_search1143z00_3373:
										if ((BgL_iz00_3374 == VECTOR_LENGTH(BgL_opt1140z00_47)))
											{	/* Unsafe/crc.scm 325 */
												BgL_index1147z00_1755 = BINT(((long) -1));
											}
										else
											{	/* Unsafe/crc.scm 325 */
												if (
													(BgL_iz00_3374 ==
														(VECTOR_LENGTH(BgL_opt1140z00_47) - ((long) 1))))
													{	/* Unsafe/crc.scm 325 */
														BgL_index1147z00_1755 =
															BGl_errorz00zz__errorz00
															(BGl_symbol3228z00zz__crcz00,
															BGl_string3224z00zz__crcz00,
															BINT(VECTOR_LENGTH(BgL_opt1140z00_47)));
													}
												else
													{	/* Unsafe/crc.scm 325 */
														obj_t BgL_vz00_3387;

														BgL_vz00_3387 =
															VECTOR_REF(BgL_opt1140z00_47, BgL_iz00_3374);
														if ((BgL_vz00_3387 == BGl_keyword3217z00zz__crcz00))
															{	/* Unsafe/crc.scm 325 */
																BgL_index1147z00_1755 =
																	BINT((BgL_iz00_3374 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_7557;

																BgL_iz00_7557 = (BgL_iz00_3374 + ((long) 2));
																BgL_iz00_3374 = BgL_iz00_7557;
																goto BgL_search1143z00_3373;
															}
													}
											}
									}
									{	/* Unsafe/crc.scm 325 */
										bool_t BgL_test3442z00_7559;

										{	/* Unsafe/crc.scm 325 */
											long BgL_n1z00_3394;

											{	/* Unsafe/crc.scm 325 */
												obj_t BgL_tmpz00_7560;

												if (INTEGERP(BgL_index1147z00_1755))
													{	/* Unsafe/crc.scm 325 */
														BgL_tmpz00_7560 = BgL_index1147z00_1755;
													}
												else
													{
														obj_t BgL_auxz00_7563;

														BgL_auxz00_7563 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3190z00zz__crcz00,
															BINT(((long) 13298)), BGl_string3230z00zz__crcz00,
															BGl_string3193z00zz__crcz00,
															BgL_index1147z00_1755);
														FAILURE(BgL_auxz00_7563, BFALSE, BFALSE);
													}
												BgL_n1z00_3394 = (long) CINT(BgL_tmpz00_7560);
											}
											BgL_test3442z00_7559 = (BgL_n1z00_3394 >= ((long) 0));
										}
										if (BgL_test3442z00_7559)
											{
												long BgL_auxz00_7569;

												{	/* Unsafe/crc.scm 325 */
													obj_t BgL_tmpz00_7570;

													if (INTEGERP(BgL_index1147z00_1755))
														{	/* Unsafe/crc.scm 325 */
															BgL_tmpz00_7570 = BgL_index1147z00_1755;
														}
													else
														{
															obj_t BgL_auxz00_7573;

															BgL_auxz00_7573 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3190z00zz__crcz00,
																BINT(((long) 13298)),
																BGl_string3230z00zz__crcz00,
																BGl_string3193z00zz__crcz00,
																BgL_index1147z00_1755);
															FAILURE(BgL_auxz00_7573, BFALSE, BFALSE);
														}
													BgL_auxz00_7569 = (long) CINT(BgL_tmpz00_7570);
												}
												BgL_finalzd2xorzd2_1743 =
													VECTOR_REF(BgL_opt1140z00_47, BgL_auxz00_7569);
											}
										else
											{	/* Unsafe/crc.scm 325 */
												BFALSE;
											}
									}
								}
								{	/* Unsafe/crc.scm 325 */
									obj_t BgL_index1148z00_1757;

									{
										long BgL_iz00_3397;

										BgL_iz00_3397 = ((long) 2);
									BgL_search1143z00_3396:
										if ((BgL_iz00_3397 == VECTOR_LENGTH(BgL_opt1140z00_47)))
											{	/* Unsafe/crc.scm 325 */
												BgL_index1148z00_1757 = BINT(((long) -1));
											}
										else
											{	/* Unsafe/crc.scm 325 */
												if (
													(BgL_iz00_3397 ==
														(VECTOR_LENGTH(BgL_opt1140z00_47) - ((long) 1))))
													{	/* Unsafe/crc.scm 325 */
														BgL_index1148z00_1757 =
															BGl_errorz00zz__errorz00
															(BGl_symbol3228z00zz__crcz00,
															BGl_string3224z00zz__crcz00,
															BINT(VECTOR_LENGTH(BgL_opt1140z00_47)));
													}
												else
													{	/* Unsafe/crc.scm 325 */
														obj_t BgL_vz00_3410;

														BgL_vz00_3410 =
															VECTOR_REF(BgL_opt1140z00_47, BgL_iz00_3397);
														if ((BgL_vz00_3410 == BGl_keyword3219z00zz__crcz00))
															{	/* Unsafe/crc.scm 325 */
																BgL_index1148z00_1757 =
																	BINT((BgL_iz00_3397 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_7595;

																BgL_iz00_7595 = (BgL_iz00_3397 + ((long) 2));
																BgL_iz00_3397 = BgL_iz00_7595;
																goto BgL_search1143z00_3396;
															}
													}
											}
									}
									{	/* Unsafe/crc.scm 325 */
										bool_t BgL_test3448z00_7597;

										{	/* Unsafe/crc.scm 325 */
											long BgL_n1z00_3417;

											{	/* Unsafe/crc.scm 325 */
												obj_t BgL_tmpz00_7598;

												if (INTEGERP(BgL_index1148z00_1757))
													{	/* Unsafe/crc.scm 325 */
														BgL_tmpz00_7598 = BgL_index1148z00_1757;
													}
												else
													{
														obj_t BgL_auxz00_7601;

														BgL_auxz00_7601 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3190z00zz__crcz00,
															BINT(((long) 13298)), BGl_string3230z00zz__crcz00,
															BGl_string3193z00zz__crcz00,
															BgL_index1148z00_1757);
														FAILURE(BgL_auxz00_7601, BFALSE, BFALSE);
													}
												BgL_n1z00_3417 = (long) CINT(BgL_tmpz00_7598);
											}
											BgL_test3448z00_7597 = (BgL_n1z00_3417 >= ((long) 0));
										}
										if (BgL_test3448z00_7597)
											{
												long BgL_auxz00_7607;

												{	/* Unsafe/crc.scm 325 */
													obj_t BgL_tmpz00_7608;

													if (INTEGERP(BgL_index1148z00_1757))
														{	/* Unsafe/crc.scm 325 */
															BgL_tmpz00_7608 = BgL_index1148z00_1757;
														}
													else
														{
															obj_t BgL_auxz00_7611;

															BgL_auxz00_7611 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3190z00zz__crcz00,
																BINT(((long) 13298)),
																BGl_string3230z00zz__crcz00,
																BGl_string3193z00zz__crcz00,
																BgL_index1148z00_1757);
															FAILURE(BgL_auxz00_7611, BFALSE, BFALSE);
														}
													BgL_auxz00_7607 = (long) CINT(BgL_tmpz00_7608);
												}
												BgL_initz00_1744 =
													VECTOR_REF(BgL_opt1140z00_47, BgL_auxz00_7607);
											}
										else
											{	/* Unsafe/crc.scm 325 */
												BFALSE;
											}
									}
								}
								{	/* Unsafe/crc.scm 325 */
									obj_t BgL_arg1602z00_1759;
									obj_t BgL_arg1603z00_1760;

									BgL_arg1602z00_1759 =
										VECTOR_REF(BgL_opt1140z00_47, ((long) 0));
									BgL_arg1603z00_1760 =
										VECTOR_REF(BgL_opt1140z00_47, ((long) 1));
									{	/* Unsafe/crc.scm 325 */
										obj_t BgL_bigzd2endianzf3z21_1761;

										BgL_bigzd2endianzf3z21_1761 = BgL_bigzd2endianzf3z21_1742;
										{	/* Unsafe/crc.scm 325 */
											obj_t BgL_finalzd2xorzd2_1762;

											BgL_finalzd2xorzd2_1762 = BgL_finalzd2xorzd2_1743;
											{	/* Unsafe/crc.scm 325 */
												obj_t BgL_initz00_1763;

												BgL_initz00_1763 = BgL_initz00_1744;
												{	/* Unsafe/crc.scm 325 */
													obj_t BgL_fz00_3419;

													if (STRINGP(BgL_arg1603z00_1760))
														{	/* Unsafe/crc.scm 325 */
															BgL_fz00_3419 = BgL_arg1603z00_1760;
														}
													else
														{
															obj_t BgL_auxz00_7621;

															BgL_auxz00_7621 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3190z00zz__crcz00,
																BINT(((long) 13298)),
																BGl_string3230z00zz__crcz00,
																BGl_string3231z00zz__crcz00,
																BgL_arg1603z00_1760);
															FAILURE(BgL_auxz00_7621, BFALSE, BFALSE);
														}
													{	/* Unsafe/crc.scm 326 */
														obj_t BgL_pz00_3420;

														{	/* Unsafe/crc.scm 326 */

															BgL_pz00_3420 =
																BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
																(BgL_fz00_3419, BTRUE, BINT(((long) 5000000)));
														}
														if (CBOOL(BgL_pz00_3420))
															{	/* Unsafe/crc.scm 327 */
																BFALSE;
															}
														else
															{	/* Unsafe/crc.scm 327 */
																BGl_errorz00zz__errorz00
																	(BGl_symbol3228z00zz__crcz00,
																	BGl_string3232z00zz__crcz00, BgL_fz00_3419);
															}
														{	/* Unsafe/crc.scm 328 */
															obj_t BgL_exitd1050z00_3424;

															BgL_exitd1050z00_3424 = BGL_EXITD_TOP_AS_OBJ();
															{	/* Unsafe/crc.scm 330 */
																obj_t BgL_zc3z04anonymousza31613ze3z87_6219;

																BgL_zc3z04anonymousza31613ze3z87_6219 =
																	MAKE_FX_PROCEDURE
																	(BGl_z62zc3z04anonymousza31613ze3ze5zz__crcz00,
																	(int) (((long) 0)), (int) (((long) 1)));
																PROCEDURE_SET
																	(BgL_zc3z04anonymousza31613ze3z87_6219,
																	(int) (((long) 0)), BgL_pz00_3420);
																BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
																	(BgL_exitd1050z00_3424,
																	BgL_zc3z04anonymousza31613ze3z87_6219);
																{	/* Unsafe/crc.scm 329 */
																	obj_t BgL_tmp1052z00_3426;

																	{	/* Unsafe/crc.scm 329 */
																		obj_t BgL_auxz00_7637;

																		if (INPUT_PORTP(BgL_pz00_3420))
																			{	/* Unsafe/crc.scm 329 */
																				BgL_auxz00_7637 = BgL_pz00_3420;
																			}
																		else
																			{
																				obj_t BgL_auxz00_7640;

																				BgL_auxz00_7640 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3190z00zz__crcz00,
																					BINT(((long) 13516)),
																					BGl_string3230z00zz__crcz00,
																					BGl_string3233z00zz__crcz00,
																					BgL_pz00_3420);
																				FAILURE(BgL_auxz00_7640, BFALSE,
																					BFALSE);
																			}
																		BgL_tmp1052z00_3426 =
																			BGl_crczd2fastzd2portz00zz__crcz00
																			(BgL_arg1602z00_1759, BgL_auxz00_7637,
																			BgL_initz00_1763, BgL_finalzd2xorzd2_1762,
																			BgL_bigzd2endianzf3z21_1761);
																	}
																	BGl_exitdzd2popzd2protectz12z12zz__bexitz00
																		(BgL_exitd1050z00_3424);
																	{	/* Unsafe/crc.scm 330 */
																		obj_t BgL_portz00_3428;

																		if (INPUT_PORTP(BgL_pz00_3420))
																			{	/* Unsafe/crc.scm 330 */
																				BgL_portz00_3428 = BgL_pz00_3420;
																			}
																		else
																			{
																				obj_t BgL_auxz00_7648;

																				BgL_auxz00_7648 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3190z00zz__crcz00,
																					BINT(((long) 13566)),
																					BGl_string3230z00zz__crcz00,
																					BGl_string3233z00zz__crcz00,
																					BgL_pz00_3420);
																				FAILURE(BgL_auxz00_7648, BFALSE,
																					BFALSE);
																			}
																		bgl_close_input_port(BgL_portz00_3428);
																	}
																	return BgL_tmp1052z00_3426;
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



/* &<@anonymous:1613> */
	obj_t BGl_z62zc3z04anonymousza31613ze3ze5zz__crcz00(obj_t BgL_envz00_6220)
	{
		{	/* Unsafe/crc.scm 328 */
			{	/* Unsafe/crc.scm 330 */
				obj_t BgL_pz00_6221;

				BgL_pz00_6221 = PROCEDURE_REF(BgL_envz00_6220, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_pz00_6221));
			}
		}

	}



/* crc-file */
	BGL_EXPORTED_DEF obj_t BGl_crczd2filezd2zz__crcz00(obj_t BgL_namez00_42,
		obj_t BgL_fz00_43, obj_t BgL_bigzd2endianzf3z21_44,
		obj_t BgL_finalzd2xorzd2_45, obj_t BgL_initz00_46)
	{
		{	/* Unsafe/crc.scm 325 */
			{	/* Unsafe/crc.scm 326 */
				obj_t BgL_pz00_3429;

				{	/* Unsafe/crc.scm 326 */

					BgL_pz00_3429 =
						BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_fz00_43, BTRUE,
						BINT(((long) 5000000)));
				}
				if (CBOOL(BgL_pz00_3429))
					{	/* Unsafe/crc.scm 327 */
						BFALSE;
					}
				else
					{	/* Unsafe/crc.scm 327 */
						BGl_errorz00zz__errorz00(BGl_symbol3228z00zz__crcz00,
							BGl_string3232z00zz__crcz00, BgL_fz00_43);
					}
				{	/* Unsafe/crc.scm 328 */
					obj_t BgL_exitd1050z00_3433;

					BgL_exitd1050z00_3433 = BGL_EXITD_TOP_AS_OBJ();
					{	/* Unsafe/crc.scm 330 */
						obj_t BgL_zc3z04anonymousza31613ze3z87_6222;

						BgL_zc3z04anonymousza31613ze3z87_6222 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31613ze33015ze5zz__crcz00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31613ze3z87_6222,
							(int) (((long) 0)), BgL_pz00_3429);
						BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1050z00_3433,
							BgL_zc3z04anonymousza31613ze3z87_6222);
						{	/* Unsafe/crc.scm 329 */
							obj_t BgL_tmp1052z00_3435;

							BgL_tmp1052z00_3435 =
								BGl_crczd2fastzd2portz00zz__crcz00(BgL_namez00_42,
								BgL_pz00_3429, BgL_initz00_46, BgL_finalzd2xorzd2_45,
								BgL_bigzd2endianzf3z21_44);
							BGl_exitdzd2popzd2protectz12z12zz__bexitz00
								(BgL_exitd1050z00_3433);
							bgl_close_input_port(((obj_t) BgL_pz00_3429));
							return BgL_tmp1052z00_3435;
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1613>3015 */
	obj_t BGl_z62zc3z04anonymousza31613ze33015ze5zz__crcz00(obj_t BgL_envz00_6223)
	{
		{	/* Unsafe/crc.scm 328 */
			{	/* Unsafe/crc.scm 330 */
				obj_t BgL_pz00_6224;

				BgL_pz00_6224 = PROCEDURE_REF(BgL_envz00_6223, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_pz00_6224));
			}
		}

	}



/* _crc-string */
	obj_t BGl__crczd2stringzd2zz__crcz00(obj_t BgL_env1150z00_55,
		obj_t BgL_opt1149z00_54)
	{
		{	/* Unsafe/crc.scm 335 */
			{	/* Unsafe/crc.scm 335 */
				obj_t BgL_namez00_1785;
				obj_t BgL_strz00_1786;

				BgL_namez00_1785 = VECTOR_REF(BgL_opt1149z00_54, ((long) 0));
				BgL_strz00_1786 = VECTOR_REF(BgL_opt1149z00_54, ((long) 1));
				{	/* Unsafe/crc.scm 335 */
					obj_t BgL_bigzd2endianzf3z21_1787;

					BgL_bigzd2endianzf3z21_1787 = BTRUE;
					{	/* Unsafe/crc.scm 335 */
						obj_t BgL_finalzd2xorzd2_1788;

						BgL_finalzd2xorzd2_1788 = BINT(((long) 0));
						{	/* Unsafe/crc.scm 335 */
							obj_t BgL_initz00_1789;

							BgL_initz00_1789 = BINT(((long) 0));
							{	/* Unsafe/crc.scm 335 */

								{
									long BgL_iz00_1790;

									BgL_iz00_1790 = ((long) 2);
								BgL_check1153z00_1791:
									if ((BgL_iz00_1790 == VECTOR_LENGTH(BgL_opt1149z00_54)))
										{	/* Unsafe/crc.scm 335 */
											BNIL;
										}
									else
										{	/* Unsafe/crc.scm 335 */
											bool_t BgL_test3457z00_7684;

											{	/* Unsafe/crc.scm 335 */
												obj_t BgL_arg1620z00_1797;

												BgL_arg1620z00_1797 =
													VECTOR_REF(BgL_opt1149z00_54, BgL_iz00_1790);
												BgL_test3457z00_7684 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1620z00_1797, BGl_list3214z00zz__crcz00));
											}
											if (BgL_test3457z00_7684)
												{
													long BgL_iz00_7688;

													BgL_iz00_7688 = (BgL_iz00_1790 + ((long) 2));
													BgL_iz00_1790 = BgL_iz00_7688;
													goto BgL_check1153z00_1791;
												}
											else
												{	/* Unsafe/crc.scm 335 */
													obj_t BgL_arg1619z00_1796;

													BgL_arg1619z00_1796 =
														VECTOR_REF(BgL_opt1149z00_54, BgL_iz00_1790);
													BGl_errorz00zz__errorz00(BGl_symbol3234z00zz__crcz00,
														BGl_string3223z00zz__crcz00, BgL_arg1619z00_1796);
												}
										}
								}
								{	/* Unsafe/crc.scm 335 */
									obj_t BgL_index1155z00_1798;

									{
										long BgL_iz00_3461;

										BgL_iz00_3461 = ((long) 2);
									BgL_search1152z00_3460:
										if ((BgL_iz00_3461 == VECTOR_LENGTH(BgL_opt1149z00_54)))
											{	/* Unsafe/crc.scm 335 */
												BgL_index1155z00_1798 = BINT(((long) -1));
											}
										else
											{	/* Unsafe/crc.scm 335 */
												if (
													(BgL_iz00_3461 ==
														(VECTOR_LENGTH(BgL_opt1149z00_54) - ((long) 1))))
													{	/* Unsafe/crc.scm 335 */
														BgL_index1155z00_1798 =
															BGl_errorz00zz__errorz00
															(BGl_symbol3234z00zz__crcz00,
															BGl_string3224z00zz__crcz00,
															BINT(VECTOR_LENGTH(BgL_opt1149z00_54)));
													}
												else
													{	/* Unsafe/crc.scm 335 */
														obj_t BgL_vz00_3474;

														BgL_vz00_3474 =
															VECTOR_REF(BgL_opt1149z00_54, BgL_iz00_3461);
														if ((BgL_vz00_3474 == BGl_keyword3215z00zz__crcz00))
															{	/* Unsafe/crc.scm 335 */
																BgL_index1155z00_1798 =
																	BINT((BgL_iz00_3461 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_7708;

																BgL_iz00_7708 = (BgL_iz00_3461 + ((long) 2));
																BgL_iz00_3461 = BgL_iz00_7708;
																goto BgL_search1152z00_3460;
															}
													}
											}
									}
									{	/* Unsafe/crc.scm 335 */
										bool_t BgL_test3461z00_7710;

										{	/* Unsafe/crc.scm 335 */
											long BgL_n1z00_3481;

											{	/* Unsafe/crc.scm 335 */
												obj_t BgL_tmpz00_7711;

												if (INTEGERP(BgL_index1155z00_1798))
													{	/* Unsafe/crc.scm 335 */
														BgL_tmpz00_7711 = BgL_index1155z00_1798;
													}
												else
													{
														obj_t BgL_auxz00_7714;

														BgL_auxz00_7714 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3190z00zz__crcz00,
															BINT(((long) 13795)), BGl_string3236z00zz__crcz00,
															BGl_string3193z00zz__crcz00,
															BgL_index1155z00_1798);
														FAILURE(BgL_auxz00_7714, BFALSE, BFALSE);
													}
												BgL_n1z00_3481 = (long) CINT(BgL_tmpz00_7711);
											}
											BgL_test3461z00_7710 = (BgL_n1z00_3481 >= ((long) 0));
										}
										if (BgL_test3461z00_7710)
											{
												long BgL_auxz00_7720;

												{	/* Unsafe/crc.scm 335 */
													obj_t BgL_tmpz00_7721;

													if (INTEGERP(BgL_index1155z00_1798))
														{	/* Unsafe/crc.scm 335 */
															BgL_tmpz00_7721 = BgL_index1155z00_1798;
														}
													else
														{
															obj_t BgL_auxz00_7724;

															BgL_auxz00_7724 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3190z00zz__crcz00,
																BINT(((long) 13795)),
																BGl_string3236z00zz__crcz00,
																BGl_string3193z00zz__crcz00,
																BgL_index1155z00_1798);
															FAILURE(BgL_auxz00_7724, BFALSE, BFALSE);
														}
													BgL_auxz00_7720 = (long) CINT(BgL_tmpz00_7721);
												}
												BgL_bigzd2endianzf3z21_1787 =
													VECTOR_REF(BgL_opt1149z00_54, BgL_auxz00_7720);
											}
										else
											{	/* Unsafe/crc.scm 335 */
												BFALSE;
											}
									}
								}
								{	/* Unsafe/crc.scm 335 */
									obj_t BgL_index1156z00_1800;

									{
										long BgL_iz00_3484;

										BgL_iz00_3484 = ((long) 2);
									BgL_search1152z00_3483:
										if ((BgL_iz00_3484 == VECTOR_LENGTH(BgL_opt1149z00_54)))
											{	/* Unsafe/crc.scm 335 */
												BgL_index1156z00_1800 = BINT(((long) -1));
											}
										else
											{	/* Unsafe/crc.scm 335 */
												if (
													(BgL_iz00_3484 ==
														(VECTOR_LENGTH(BgL_opt1149z00_54) - ((long) 1))))
													{	/* Unsafe/crc.scm 335 */
														BgL_index1156z00_1800 =
															BGl_errorz00zz__errorz00
															(BGl_symbol3234z00zz__crcz00,
															BGl_string3224z00zz__crcz00,
															BINT(VECTOR_LENGTH(BgL_opt1149z00_54)));
													}
												else
													{	/* Unsafe/crc.scm 335 */
														obj_t BgL_vz00_3497;

														BgL_vz00_3497 =
															VECTOR_REF(BgL_opt1149z00_54, BgL_iz00_3484);
														if ((BgL_vz00_3497 == BGl_keyword3217z00zz__crcz00))
															{	/* Unsafe/crc.scm 335 */
																BgL_index1156z00_1800 =
																	BINT((BgL_iz00_3484 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_7746;

																BgL_iz00_7746 = (BgL_iz00_3484 + ((long) 2));
																BgL_iz00_3484 = BgL_iz00_7746;
																goto BgL_search1152z00_3483;
															}
													}
											}
									}
									{	/* Unsafe/crc.scm 335 */
										bool_t BgL_test3467z00_7748;

										{	/* Unsafe/crc.scm 335 */
											long BgL_n1z00_3504;

											{	/* Unsafe/crc.scm 335 */
												obj_t BgL_tmpz00_7749;

												if (INTEGERP(BgL_index1156z00_1800))
													{	/* Unsafe/crc.scm 335 */
														BgL_tmpz00_7749 = BgL_index1156z00_1800;
													}
												else
													{
														obj_t BgL_auxz00_7752;

														BgL_auxz00_7752 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3190z00zz__crcz00,
															BINT(((long) 13795)), BGl_string3236z00zz__crcz00,
															BGl_string3193z00zz__crcz00,
															BgL_index1156z00_1800);
														FAILURE(BgL_auxz00_7752, BFALSE, BFALSE);
													}
												BgL_n1z00_3504 = (long) CINT(BgL_tmpz00_7749);
											}
											BgL_test3467z00_7748 = (BgL_n1z00_3504 >= ((long) 0));
										}
										if (BgL_test3467z00_7748)
											{
												long BgL_auxz00_7758;

												{	/* Unsafe/crc.scm 335 */
													obj_t BgL_tmpz00_7759;

													if (INTEGERP(BgL_index1156z00_1800))
														{	/* Unsafe/crc.scm 335 */
															BgL_tmpz00_7759 = BgL_index1156z00_1800;
														}
													else
														{
															obj_t BgL_auxz00_7762;

															BgL_auxz00_7762 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3190z00zz__crcz00,
																BINT(((long) 13795)),
																BGl_string3236z00zz__crcz00,
																BGl_string3193z00zz__crcz00,
																BgL_index1156z00_1800);
															FAILURE(BgL_auxz00_7762, BFALSE, BFALSE);
														}
													BgL_auxz00_7758 = (long) CINT(BgL_tmpz00_7759);
												}
												BgL_finalzd2xorzd2_1788 =
													VECTOR_REF(BgL_opt1149z00_54, BgL_auxz00_7758);
											}
										else
											{	/* Unsafe/crc.scm 335 */
												BFALSE;
											}
									}
								}
								{	/* Unsafe/crc.scm 335 */
									obj_t BgL_index1157z00_1802;

									{
										long BgL_iz00_3507;

										BgL_iz00_3507 = ((long) 2);
									BgL_search1152z00_3506:
										if ((BgL_iz00_3507 == VECTOR_LENGTH(BgL_opt1149z00_54)))
											{	/* Unsafe/crc.scm 335 */
												BgL_index1157z00_1802 = BINT(((long) -1));
											}
										else
											{	/* Unsafe/crc.scm 335 */
												if (
													(BgL_iz00_3507 ==
														(VECTOR_LENGTH(BgL_opt1149z00_54) - ((long) 1))))
													{	/* Unsafe/crc.scm 335 */
														BgL_index1157z00_1802 =
															BGl_errorz00zz__errorz00
															(BGl_symbol3234z00zz__crcz00,
															BGl_string3224z00zz__crcz00,
															BINT(VECTOR_LENGTH(BgL_opt1149z00_54)));
													}
												else
													{	/* Unsafe/crc.scm 335 */
														obj_t BgL_vz00_3520;

														BgL_vz00_3520 =
															VECTOR_REF(BgL_opt1149z00_54, BgL_iz00_3507);
														if ((BgL_vz00_3520 == BGl_keyword3219z00zz__crcz00))
															{	/* Unsafe/crc.scm 335 */
																BgL_index1157z00_1802 =
																	BINT((BgL_iz00_3507 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_7784;

																BgL_iz00_7784 = (BgL_iz00_3507 + ((long) 2));
																BgL_iz00_3507 = BgL_iz00_7784;
																goto BgL_search1152z00_3506;
															}
													}
											}
									}
									{	/* Unsafe/crc.scm 335 */
										bool_t BgL_test3473z00_7786;

										{	/* Unsafe/crc.scm 335 */
											long BgL_n1z00_3527;

											{	/* Unsafe/crc.scm 335 */
												obj_t BgL_tmpz00_7787;

												if (INTEGERP(BgL_index1157z00_1802))
													{	/* Unsafe/crc.scm 335 */
														BgL_tmpz00_7787 = BgL_index1157z00_1802;
													}
												else
													{
														obj_t BgL_auxz00_7790;

														BgL_auxz00_7790 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3190z00zz__crcz00,
															BINT(((long) 13795)), BGl_string3236z00zz__crcz00,
															BGl_string3193z00zz__crcz00,
															BgL_index1157z00_1802);
														FAILURE(BgL_auxz00_7790, BFALSE, BFALSE);
													}
												BgL_n1z00_3527 = (long) CINT(BgL_tmpz00_7787);
											}
											BgL_test3473z00_7786 = (BgL_n1z00_3527 >= ((long) 0));
										}
										if (BgL_test3473z00_7786)
											{
												long BgL_auxz00_7796;

												{	/* Unsafe/crc.scm 335 */
													obj_t BgL_tmpz00_7797;

													if (INTEGERP(BgL_index1157z00_1802))
														{	/* Unsafe/crc.scm 335 */
															BgL_tmpz00_7797 = BgL_index1157z00_1802;
														}
													else
														{
															obj_t BgL_auxz00_7800;

															BgL_auxz00_7800 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3190z00zz__crcz00,
																BINT(((long) 13795)),
																BGl_string3236z00zz__crcz00,
																BGl_string3193z00zz__crcz00,
																BgL_index1157z00_1802);
															FAILURE(BgL_auxz00_7800, BFALSE, BFALSE);
														}
													BgL_auxz00_7796 = (long) CINT(BgL_tmpz00_7797);
												}
												BgL_initz00_1789 =
													VECTOR_REF(BgL_opt1149z00_54, BgL_auxz00_7796);
											}
										else
											{	/* Unsafe/crc.scm 335 */
												BFALSE;
											}
									}
								}
								{	/* Unsafe/crc.scm 335 */
									obj_t BgL_arg1624z00_1804;
									obj_t BgL_arg1626z00_1805;

									BgL_arg1624z00_1804 =
										VECTOR_REF(BgL_opt1149z00_54, ((long) 0));
									BgL_arg1626z00_1805 =
										VECTOR_REF(BgL_opt1149z00_54, ((long) 1));
									{	/* Unsafe/crc.scm 335 */
										obj_t BgL_bigzd2endianzf3z21_1806;

										BgL_bigzd2endianzf3z21_1806 = BgL_bigzd2endianzf3z21_1787;
										{	/* Unsafe/crc.scm 335 */
											obj_t BgL_finalzd2xorzd2_1807;

											BgL_finalzd2xorzd2_1807 = BgL_finalzd2xorzd2_1788;
											{	/* Unsafe/crc.scm 335 */
												obj_t BgL_initz00_1808;

												BgL_initz00_1808 = BgL_initz00_1789;
												{	/* Unsafe/crc.scm 335 */
													obj_t BgL_strz00_3529;

													if (STRINGP(BgL_arg1626z00_1805))
														{	/* Unsafe/crc.scm 335 */
															BgL_strz00_3529 = BgL_arg1626z00_1805;
														}
													else
														{
															obj_t BgL_auxz00_7810;

															BgL_auxz00_7810 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3190z00zz__crcz00,
																BINT(((long) 13795)),
																BGl_string3236z00zz__crcz00,
																BGl_string3231z00zz__crcz00,
																BgL_arg1626z00_1805);
															FAILURE(BgL_auxz00_7810, BFALSE, BFALSE);
														}
													{	/* Unsafe/crc.scm 336 */
														obj_t BgL_arg1634z00_3530;

														{	/* Unsafe/crc.scm 336 */
															long BgL_endz00_3533;

															BgL_endz00_3533 = STRING_LENGTH(BgL_strz00_3529);
															{	/* Unsafe/crc.scm 336 */

																BgL_arg1634z00_3530 =
																	BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
																	(BgL_strz00_3529, BINT(((long) 0)),
																	BINT(BgL_endz00_3533));
														}}
														return
															BGl_crczd2fastzd2portz00zz__crcz00
															(BgL_arg1624z00_1804, BgL_arg1634z00_3530,
															BgL_initz00_1808, BgL_finalzd2xorzd2_1807,
															BgL_bigzd2endianzf3z21_1806);
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



/* crc-string */
	BGL_EXPORTED_DEF obj_t BGl_crczd2stringzd2zz__crcz00(obj_t BgL_namez00_49,
		obj_t BgL_strz00_50, obj_t BgL_bigzd2endianzf3z21_51,
		obj_t BgL_finalzd2xorzd2_52, obj_t BgL_initz00_53)
	{
		{	/* Unsafe/crc.scm 335 */
			{	/* Unsafe/crc.scm 336 */
				obj_t BgL_arg1634z00_3536;

				{	/* Unsafe/crc.scm 336 */
					long BgL_endz00_3539;

					BgL_endz00_3539 = STRING_LENGTH(BgL_strz00_50);
					{	/* Unsafe/crc.scm 336 */

						BgL_arg1634z00_3536 =
							BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_strz00_50,
							BINT(((long) 0)), BINT(BgL_endz00_3539));
				}}
				return
					BGl_crczd2fastzd2portz00zz__crcz00(BgL_namez00_49,
					BgL_arg1634z00_3536, BgL_initz00_53, BgL_finalzd2xorzd2_52,
					BgL_bigzd2endianzf3z21_51);
			}
		}

	}



/* _crc-port */
	obj_t BGl__crczd2portzd2zz__crcz00(obj_t BgL_env1159z00_62,
		obj_t BgL_opt1158z00_61)
	{
		{	/* Unsafe/crc.scm 341 */
			{	/* Unsafe/crc.scm 341 */
				obj_t BgL_namez00_1825;
				obj_t BgL_pz00_1826;

				BgL_namez00_1825 = VECTOR_REF(BgL_opt1158z00_61, ((long) 0));
				BgL_pz00_1826 = VECTOR_REF(BgL_opt1158z00_61, ((long) 1));
				{	/* Unsafe/crc.scm 341 */
					obj_t BgL_bigzd2endianzf3z21_1827;

					BgL_bigzd2endianzf3z21_1827 = BTRUE;
					{	/* Unsafe/crc.scm 341 */
						obj_t BgL_finalzd2xorzd2_1828;

						BgL_finalzd2xorzd2_1828 = BINT(((long) 0));
						{	/* Unsafe/crc.scm 341 */
							obj_t BgL_initz00_1829;

							BgL_initz00_1829 = BINT(((long) 0));
							{	/* Unsafe/crc.scm 341 */

								{
									long BgL_iz00_1830;

									BgL_iz00_1830 = ((long) 2);
								BgL_check1162z00_1831:
									if ((BgL_iz00_1830 == VECTOR_LENGTH(BgL_opt1158z00_61)))
										{	/* Unsafe/crc.scm 341 */
											BNIL;
										}
									else
										{	/* Unsafe/crc.scm 341 */
											bool_t BgL_test3478z00_7831;

											{	/* Unsafe/crc.scm 341 */
												obj_t BgL_arg1641z00_1837;

												BgL_arg1641z00_1837 =
													VECTOR_REF(BgL_opt1158z00_61, BgL_iz00_1830);
												BgL_test3478z00_7831 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1641z00_1837, BGl_list3214z00zz__crcz00));
											}
											if (BgL_test3478z00_7831)
												{
													long BgL_iz00_7835;

													BgL_iz00_7835 = (BgL_iz00_1830 + ((long) 2));
													BgL_iz00_1830 = BgL_iz00_7835;
													goto BgL_check1162z00_1831;
												}
											else
												{	/* Unsafe/crc.scm 341 */
													obj_t BgL_arg1640z00_1836;

													BgL_arg1640z00_1836 =
														VECTOR_REF(BgL_opt1158z00_61, BgL_iz00_1830);
													BGl_errorz00zz__errorz00(BGl_symbol3237z00zz__crcz00,
														BGl_string3223z00zz__crcz00, BgL_arg1640z00_1836);
												}
										}
								}
								{	/* Unsafe/crc.scm 341 */
									obj_t BgL_index1164z00_1838;

									{
										long BgL_iz00_3565;

										BgL_iz00_3565 = ((long) 2);
									BgL_search1161z00_3564:
										if ((BgL_iz00_3565 == VECTOR_LENGTH(BgL_opt1158z00_61)))
											{	/* Unsafe/crc.scm 341 */
												BgL_index1164z00_1838 = BINT(((long) -1));
											}
										else
											{	/* Unsafe/crc.scm 341 */
												if (
													(BgL_iz00_3565 ==
														(VECTOR_LENGTH(BgL_opt1158z00_61) - ((long) 1))))
													{	/* Unsafe/crc.scm 341 */
														BgL_index1164z00_1838 =
															BGl_errorz00zz__errorz00
															(BGl_symbol3237z00zz__crcz00,
															BGl_string3224z00zz__crcz00,
															BINT(VECTOR_LENGTH(BgL_opt1158z00_61)));
													}
												else
													{	/* Unsafe/crc.scm 341 */
														obj_t BgL_vz00_3578;

														BgL_vz00_3578 =
															VECTOR_REF(BgL_opt1158z00_61, BgL_iz00_3565);
														if ((BgL_vz00_3578 == BGl_keyword3215z00zz__crcz00))
															{	/* Unsafe/crc.scm 341 */
																BgL_index1164z00_1838 =
																	BINT((BgL_iz00_3565 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_7855;

																BgL_iz00_7855 = (BgL_iz00_3565 + ((long) 2));
																BgL_iz00_3565 = BgL_iz00_7855;
																goto BgL_search1161z00_3564;
															}
													}
											}
									}
									{	/* Unsafe/crc.scm 341 */
										bool_t BgL_test3482z00_7857;

										{	/* Unsafe/crc.scm 341 */
											long BgL_n1z00_3585;

											{	/* Unsafe/crc.scm 341 */
												obj_t BgL_tmpz00_7858;

												if (INTEGERP(BgL_index1164z00_1838))
													{	/* Unsafe/crc.scm 341 */
														BgL_tmpz00_7858 = BgL_index1164z00_1838;
													}
												else
													{
														obj_t BgL_auxz00_7861;

														BgL_auxz00_7861 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3190z00zz__crcz00,
															BINT(((long) 14180)), BGl_string3239z00zz__crcz00,
															BGl_string3193z00zz__crcz00,
															BgL_index1164z00_1838);
														FAILURE(BgL_auxz00_7861, BFALSE, BFALSE);
													}
												BgL_n1z00_3585 = (long) CINT(BgL_tmpz00_7858);
											}
											BgL_test3482z00_7857 = (BgL_n1z00_3585 >= ((long) 0));
										}
										if (BgL_test3482z00_7857)
											{
												long BgL_auxz00_7867;

												{	/* Unsafe/crc.scm 341 */
													obj_t BgL_tmpz00_7868;

													if (INTEGERP(BgL_index1164z00_1838))
														{	/* Unsafe/crc.scm 341 */
															BgL_tmpz00_7868 = BgL_index1164z00_1838;
														}
													else
														{
															obj_t BgL_auxz00_7871;

															BgL_auxz00_7871 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3190z00zz__crcz00,
																BINT(((long) 14180)),
																BGl_string3239z00zz__crcz00,
																BGl_string3193z00zz__crcz00,
																BgL_index1164z00_1838);
															FAILURE(BgL_auxz00_7871, BFALSE, BFALSE);
														}
													BgL_auxz00_7867 = (long) CINT(BgL_tmpz00_7868);
												}
												BgL_bigzd2endianzf3z21_1827 =
													VECTOR_REF(BgL_opt1158z00_61, BgL_auxz00_7867);
											}
										else
											{	/* Unsafe/crc.scm 341 */
												BFALSE;
											}
									}
								}
								{	/* Unsafe/crc.scm 341 */
									obj_t BgL_index1165z00_1840;

									{
										long BgL_iz00_3588;

										BgL_iz00_3588 = ((long) 2);
									BgL_search1161z00_3587:
										if ((BgL_iz00_3588 == VECTOR_LENGTH(BgL_opt1158z00_61)))
											{	/* Unsafe/crc.scm 341 */
												BgL_index1165z00_1840 = BINT(((long) -1));
											}
										else
											{	/* Unsafe/crc.scm 341 */
												if (
													(BgL_iz00_3588 ==
														(VECTOR_LENGTH(BgL_opt1158z00_61) - ((long) 1))))
													{	/* Unsafe/crc.scm 341 */
														BgL_index1165z00_1840 =
															BGl_errorz00zz__errorz00
															(BGl_symbol3237z00zz__crcz00,
															BGl_string3224z00zz__crcz00,
															BINT(VECTOR_LENGTH(BgL_opt1158z00_61)));
													}
												else
													{	/* Unsafe/crc.scm 341 */
														obj_t BgL_vz00_3601;

														BgL_vz00_3601 =
															VECTOR_REF(BgL_opt1158z00_61, BgL_iz00_3588);
														if ((BgL_vz00_3601 == BGl_keyword3217z00zz__crcz00))
															{	/* Unsafe/crc.scm 341 */
																BgL_index1165z00_1840 =
																	BINT((BgL_iz00_3588 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_7893;

																BgL_iz00_7893 = (BgL_iz00_3588 + ((long) 2));
																BgL_iz00_3588 = BgL_iz00_7893;
																goto BgL_search1161z00_3587;
															}
													}
											}
									}
									{	/* Unsafe/crc.scm 341 */
										bool_t BgL_test3488z00_7895;

										{	/* Unsafe/crc.scm 341 */
											long BgL_n1z00_3608;

											{	/* Unsafe/crc.scm 341 */
												obj_t BgL_tmpz00_7896;

												if (INTEGERP(BgL_index1165z00_1840))
													{	/* Unsafe/crc.scm 341 */
														BgL_tmpz00_7896 = BgL_index1165z00_1840;
													}
												else
													{
														obj_t BgL_auxz00_7899;

														BgL_auxz00_7899 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3190z00zz__crcz00,
															BINT(((long) 14180)), BGl_string3239z00zz__crcz00,
															BGl_string3193z00zz__crcz00,
															BgL_index1165z00_1840);
														FAILURE(BgL_auxz00_7899, BFALSE, BFALSE);
													}
												BgL_n1z00_3608 = (long) CINT(BgL_tmpz00_7896);
											}
											BgL_test3488z00_7895 = (BgL_n1z00_3608 >= ((long) 0));
										}
										if (BgL_test3488z00_7895)
											{
												long BgL_auxz00_7905;

												{	/* Unsafe/crc.scm 341 */
													obj_t BgL_tmpz00_7906;

													if (INTEGERP(BgL_index1165z00_1840))
														{	/* Unsafe/crc.scm 341 */
															BgL_tmpz00_7906 = BgL_index1165z00_1840;
														}
													else
														{
															obj_t BgL_auxz00_7909;

															BgL_auxz00_7909 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3190z00zz__crcz00,
																BINT(((long) 14180)),
																BGl_string3239z00zz__crcz00,
																BGl_string3193z00zz__crcz00,
																BgL_index1165z00_1840);
															FAILURE(BgL_auxz00_7909, BFALSE, BFALSE);
														}
													BgL_auxz00_7905 = (long) CINT(BgL_tmpz00_7906);
												}
												BgL_finalzd2xorzd2_1828 =
													VECTOR_REF(BgL_opt1158z00_61, BgL_auxz00_7905);
											}
										else
											{	/* Unsafe/crc.scm 341 */
												BFALSE;
											}
									}
								}
								{	/* Unsafe/crc.scm 341 */
									obj_t BgL_index1166z00_1842;

									{
										long BgL_iz00_3611;

										BgL_iz00_3611 = ((long) 2);
									BgL_search1161z00_3610:
										if ((BgL_iz00_3611 == VECTOR_LENGTH(BgL_opt1158z00_61)))
											{	/* Unsafe/crc.scm 341 */
												BgL_index1166z00_1842 = BINT(((long) -1));
											}
										else
											{	/* Unsafe/crc.scm 341 */
												if (
													(BgL_iz00_3611 ==
														(VECTOR_LENGTH(BgL_opt1158z00_61) - ((long) 1))))
													{	/* Unsafe/crc.scm 341 */
														BgL_index1166z00_1842 =
															BGl_errorz00zz__errorz00
															(BGl_symbol3237z00zz__crcz00,
															BGl_string3224z00zz__crcz00,
															BINT(VECTOR_LENGTH(BgL_opt1158z00_61)));
													}
												else
													{	/* Unsafe/crc.scm 341 */
														obj_t BgL_vz00_3624;

														BgL_vz00_3624 =
															VECTOR_REF(BgL_opt1158z00_61, BgL_iz00_3611);
														if ((BgL_vz00_3624 == BGl_keyword3219z00zz__crcz00))
															{	/* Unsafe/crc.scm 341 */
																BgL_index1166z00_1842 =
																	BINT((BgL_iz00_3611 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_7931;

																BgL_iz00_7931 = (BgL_iz00_3611 + ((long) 2));
																BgL_iz00_3611 = BgL_iz00_7931;
																goto BgL_search1161z00_3610;
															}
													}
											}
									}
									{	/* Unsafe/crc.scm 341 */
										bool_t BgL_test3494z00_7933;

										{	/* Unsafe/crc.scm 341 */
											long BgL_n1z00_3631;

											{	/* Unsafe/crc.scm 341 */
												obj_t BgL_tmpz00_7934;

												if (INTEGERP(BgL_index1166z00_1842))
													{	/* Unsafe/crc.scm 341 */
														BgL_tmpz00_7934 = BgL_index1166z00_1842;
													}
												else
													{
														obj_t BgL_auxz00_7937;

														BgL_auxz00_7937 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3190z00zz__crcz00,
															BINT(((long) 14180)), BGl_string3239z00zz__crcz00,
															BGl_string3193z00zz__crcz00,
															BgL_index1166z00_1842);
														FAILURE(BgL_auxz00_7937, BFALSE, BFALSE);
													}
												BgL_n1z00_3631 = (long) CINT(BgL_tmpz00_7934);
											}
											BgL_test3494z00_7933 = (BgL_n1z00_3631 >= ((long) 0));
										}
										if (BgL_test3494z00_7933)
											{
												long BgL_auxz00_7943;

												{	/* Unsafe/crc.scm 341 */
													obj_t BgL_tmpz00_7944;

													if (INTEGERP(BgL_index1166z00_1842))
														{	/* Unsafe/crc.scm 341 */
															BgL_tmpz00_7944 = BgL_index1166z00_1842;
														}
													else
														{
															obj_t BgL_auxz00_7947;

															BgL_auxz00_7947 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3190z00zz__crcz00,
																BINT(((long) 14180)),
																BGl_string3239z00zz__crcz00,
																BGl_string3193z00zz__crcz00,
																BgL_index1166z00_1842);
															FAILURE(BgL_auxz00_7947, BFALSE, BFALSE);
														}
													BgL_auxz00_7943 = (long) CINT(BgL_tmpz00_7944);
												}
												BgL_initz00_1829 =
													VECTOR_REF(BgL_opt1158z00_61, BgL_auxz00_7943);
											}
										else
											{	/* Unsafe/crc.scm 341 */
												BFALSE;
											}
									}
								}
								{	/* Unsafe/crc.scm 341 */
									obj_t BgL_arg1645z00_1844;
									obj_t BgL_arg1648z00_1845;

									BgL_arg1645z00_1844 =
										VECTOR_REF(BgL_opt1158z00_61, ((long) 0));
									BgL_arg1648z00_1845 =
										VECTOR_REF(BgL_opt1158z00_61, ((long) 1));
									{	/* Unsafe/crc.scm 341 */
										obj_t BgL_bigzd2endianzf3z21_1846;

										BgL_bigzd2endianzf3z21_1846 = BgL_bigzd2endianzf3z21_1827;
										{	/* Unsafe/crc.scm 341 */
											obj_t BgL_finalzd2xorzd2_1847;

											BgL_finalzd2xorzd2_1847 = BgL_finalzd2xorzd2_1828;
											{	/* Unsafe/crc.scm 341 */
												obj_t BgL_initz00_1848;

												BgL_initz00_1848 = BgL_initz00_1829;
												{	/* Unsafe/crc.scm 341 */
													obj_t BgL_pz00_3633;

													if (INPUT_PORTP(BgL_arg1648z00_1845))
														{	/* Unsafe/crc.scm 341 */
															BgL_pz00_3633 = BgL_arg1648z00_1845;
														}
													else
														{
															obj_t BgL_auxz00_7957;

															BgL_auxz00_7957 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3190z00zz__crcz00,
																BINT(((long) 14180)),
																BGl_string3239z00zz__crcz00,
																BGl_string3233z00zz__crcz00,
																BgL_arg1648z00_1845);
															FAILURE(BgL_auxz00_7957, BFALSE, BFALSE);
														}
													return
														BGl_crczd2fastzd2portz00zz__crcz00
														(BgL_arg1645z00_1844, BgL_pz00_3633,
														BgL_initz00_1848, BgL_finalzd2xorzd2_1847,
														BgL_bigzd2endianzf3z21_1846);
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



/* crc-port */
	BGL_EXPORTED_DEF obj_t BGl_crczd2portzd2zz__crcz00(obj_t BgL_namez00_56,
		obj_t BgL_pz00_57, obj_t BgL_bigzd2endianzf3z21_58,
		obj_t BgL_finalzd2xorzd2_59, obj_t BgL_initz00_60)
	{
		{	/* Unsafe/crc.scm 341 */
			return
				BGl_crczd2fastzd2portz00zz__crcz00(BgL_namez00_56, BgL_pz00_57,
				BgL_initz00_60, BgL_finalzd2xorzd2_59, BgL_bigzd2endianzf3z21_58);
		}

	}



/* _crc-mmap */
	obj_t BGl__crczd2mmapzd2zz__crcz00(obj_t BgL_env1168z00_69,
		obj_t BgL_opt1167z00_68)
	{
		{	/* Unsafe/crc.scm 347 */
			{	/* Unsafe/crc.scm 347 */
				obj_t BgL_namez00_1861;
				obj_t BgL_mz00_1862;

				BgL_namez00_1861 = VECTOR_REF(BgL_opt1167z00_68, ((long) 0));
				BgL_mz00_1862 = VECTOR_REF(BgL_opt1167z00_68, ((long) 1));
				{	/* Unsafe/crc.scm 347 */
					obj_t BgL_bigzd2endianzf3z21_1863;

					BgL_bigzd2endianzf3z21_1863 = BTRUE;
					{	/* Unsafe/crc.scm 347 */
						obj_t BgL_finalzd2xorzd2_1864;

						BgL_finalzd2xorzd2_1864 = BINT(((long) 0));
						{	/* Unsafe/crc.scm 347 */
							obj_t BgL_initz00_1865;

							BgL_initz00_1865 = BINT(((long) 0));
							{	/* Unsafe/crc.scm 347 */

								{
									long BgL_iz00_1866;

									BgL_iz00_1866 = ((long) 2);
								BgL_check1171z00_1867:
									if ((BgL_iz00_1866 == VECTOR_LENGTH(BgL_opt1167z00_68)))
										{	/* Unsafe/crc.scm 347 */
											BNIL;
										}
									else
										{	/* Unsafe/crc.scm 347 */
											bool_t BgL_test3499z00_7970;

											{	/* Unsafe/crc.scm 347 */
												obj_t BgL_arg1662z00_1873;

												BgL_arg1662z00_1873 =
													VECTOR_REF(BgL_opt1167z00_68, BgL_iz00_1866);
												BgL_test3499z00_7970 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1662z00_1873, BGl_list3214z00zz__crcz00));
											}
											if (BgL_test3499z00_7970)
												{
													long BgL_iz00_7974;

													BgL_iz00_7974 = (BgL_iz00_1866 + ((long) 2));
													BgL_iz00_1866 = BgL_iz00_7974;
													goto BgL_check1171z00_1867;
												}
											else
												{	/* Unsafe/crc.scm 347 */
													obj_t BgL_arg1661z00_1872;

													BgL_arg1661z00_1872 =
														VECTOR_REF(BgL_opt1167z00_68, BgL_iz00_1866);
													BGl_errorz00zz__errorz00(BGl_symbol3240z00zz__crcz00,
														BGl_string3223z00zz__crcz00, BgL_arg1661z00_1872);
												}
										}
								}
								{	/* Unsafe/crc.scm 347 */
									obj_t BgL_index1173z00_1874;

									{
										long BgL_iz00_3657;

										BgL_iz00_3657 = ((long) 2);
									BgL_search1170z00_3656:
										if ((BgL_iz00_3657 == VECTOR_LENGTH(BgL_opt1167z00_68)))
											{	/* Unsafe/crc.scm 347 */
												BgL_index1173z00_1874 = BINT(((long) -1));
											}
										else
											{	/* Unsafe/crc.scm 347 */
												if (
													(BgL_iz00_3657 ==
														(VECTOR_LENGTH(BgL_opt1167z00_68) - ((long) 1))))
													{	/* Unsafe/crc.scm 347 */
														BgL_index1173z00_1874 =
															BGl_errorz00zz__errorz00
															(BGl_symbol3240z00zz__crcz00,
															BGl_string3224z00zz__crcz00,
															BINT(VECTOR_LENGTH(BgL_opt1167z00_68)));
													}
												else
													{	/* Unsafe/crc.scm 347 */
														obj_t BgL_vz00_3670;

														BgL_vz00_3670 =
															VECTOR_REF(BgL_opt1167z00_68, BgL_iz00_3657);
														if ((BgL_vz00_3670 == BGl_keyword3215z00zz__crcz00))
															{	/* Unsafe/crc.scm 347 */
																BgL_index1173z00_1874 =
																	BINT((BgL_iz00_3657 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_7994;

																BgL_iz00_7994 = (BgL_iz00_3657 + ((long) 2));
																BgL_iz00_3657 = BgL_iz00_7994;
																goto BgL_search1170z00_3656;
															}
													}
											}
									}
									{	/* Unsafe/crc.scm 347 */
										bool_t BgL_test3503z00_7996;

										{	/* Unsafe/crc.scm 347 */
											long BgL_n1z00_3677;

											{	/* Unsafe/crc.scm 347 */
												obj_t BgL_tmpz00_7997;

												if (INTEGERP(BgL_index1173z00_1874))
													{	/* Unsafe/crc.scm 347 */
														BgL_tmpz00_7997 = BgL_index1173z00_1874;
													}
												else
													{
														obj_t BgL_auxz00_8000;

														BgL_auxz00_8000 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3190z00zz__crcz00,
															BINT(((long) 14542)), BGl_string3242z00zz__crcz00,
															BGl_string3193z00zz__crcz00,
															BgL_index1173z00_1874);
														FAILURE(BgL_auxz00_8000, BFALSE, BFALSE);
													}
												BgL_n1z00_3677 = (long) CINT(BgL_tmpz00_7997);
											}
											BgL_test3503z00_7996 = (BgL_n1z00_3677 >= ((long) 0));
										}
										if (BgL_test3503z00_7996)
											{
												long BgL_auxz00_8006;

												{	/* Unsafe/crc.scm 347 */
													obj_t BgL_tmpz00_8007;

													if (INTEGERP(BgL_index1173z00_1874))
														{	/* Unsafe/crc.scm 347 */
															BgL_tmpz00_8007 = BgL_index1173z00_1874;
														}
													else
														{
															obj_t BgL_auxz00_8010;

															BgL_auxz00_8010 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3190z00zz__crcz00,
																BINT(((long) 14542)),
																BGl_string3242z00zz__crcz00,
																BGl_string3193z00zz__crcz00,
																BgL_index1173z00_1874);
															FAILURE(BgL_auxz00_8010, BFALSE, BFALSE);
														}
													BgL_auxz00_8006 = (long) CINT(BgL_tmpz00_8007);
												}
												BgL_bigzd2endianzf3z21_1863 =
													VECTOR_REF(BgL_opt1167z00_68, BgL_auxz00_8006);
											}
										else
											{	/* Unsafe/crc.scm 347 */
												BFALSE;
											}
									}
								}
								{	/* Unsafe/crc.scm 347 */
									obj_t BgL_index1174z00_1876;

									{
										long BgL_iz00_3680;

										BgL_iz00_3680 = ((long) 2);
									BgL_search1170z00_3679:
										if ((BgL_iz00_3680 == VECTOR_LENGTH(BgL_opt1167z00_68)))
											{	/* Unsafe/crc.scm 347 */
												BgL_index1174z00_1876 = BINT(((long) -1));
											}
										else
											{	/* Unsafe/crc.scm 347 */
												if (
													(BgL_iz00_3680 ==
														(VECTOR_LENGTH(BgL_opt1167z00_68) - ((long) 1))))
													{	/* Unsafe/crc.scm 347 */
														BgL_index1174z00_1876 =
															BGl_errorz00zz__errorz00
															(BGl_symbol3240z00zz__crcz00,
															BGl_string3224z00zz__crcz00,
															BINT(VECTOR_LENGTH(BgL_opt1167z00_68)));
													}
												else
													{	/* Unsafe/crc.scm 347 */
														obj_t BgL_vz00_3693;

														BgL_vz00_3693 =
															VECTOR_REF(BgL_opt1167z00_68, BgL_iz00_3680);
														if ((BgL_vz00_3693 == BGl_keyword3217z00zz__crcz00))
															{	/* Unsafe/crc.scm 347 */
																BgL_index1174z00_1876 =
																	BINT((BgL_iz00_3680 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_8032;

																BgL_iz00_8032 = (BgL_iz00_3680 + ((long) 2));
																BgL_iz00_3680 = BgL_iz00_8032;
																goto BgL_search1170z00_3679;
															}
													}
											}
									}
									{	/* Unsafe/crc.scm 347 */
										bool_t BgL_test3509z00_8034;

										{	/* Unsafe/crc.scm 347 */
											long BgL_n1z00_3700;

											{	/* Unsafe/crc.scm 347 */
												obj_t BgL_tmpz00_8035;

												if (INTEGERP(BgL_index1174z00_1876))
													{	/* Unsafe/crc.scm 347 */
														BgL_tmpz00_8035 = BgL_index1174z00_1876;
													}
												else
													{
														obj_t BgL_auxz00_8038;

														BgL_auxz00_8038 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3190z00zz__crcz00,
															BINT(((long) 14542)), BGl_string3242z00zz__crcz00,
															BGl_string3193z00zz__crcz00,
															BgL_index1174z00_1876);
														FAILURE(BgL_auxz00_8038, BFALSE, BFALSE);
													}
												BgL_n1z00_3700 = (long) CINT(BgL_tmpz00_8035);
											}
											BgL_test3509z00_8034 = (BgL_n1z00_3700 >= ((long) 0));
										}
										if (BgL_test3509z00_8034)
											{
												long BgL_auxz00_8044;

												{	/* Unsafe/crc.scm 347 */
													obj_t BgL_tmpz00_8045;

													if (INTEGERP(BgL_index1174z00_1876))
														{	/* Unsafe/crc.scm 347 */
															BgL_tmpz00_8045 = BgL_index1174z00_1876;
														}
													else
														{
															obj_t BgL_auxz00_8048;

															BgL_auxz00_8048 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3190z00zz__crcz00,
																BINT(((long) 14542)),
																BGl_string3242z00zz__crcz00,
																BGl_string3193z00zz__crcz00,
																BgL_index1174z00_1876);
															FAILURE(BgL_auxz00_8048, BFALSE, BFALSE);
														}
													BgL_auxz00_8044 = (long) CINT(BgL_tmpz00_8045);
												}
												BgL_finalzd2xorzd2_1864 =
													VECTOR_REF(BgL_opt1167z00_68, BgL_auxz00_8044);
											}
										else
											{	/* Unsafe/crc.scm 347 */
												BFALSE;
											}
									}
								}
								{	/* Unsafe/crc.scm 347 */
									obj_t BgL_index1175z00_1878;

									{
										long BgL_iz00_3703;

										BgL_iz00_3703 = ((long) 2);
									BgL_search1170z00_3702:
										if ((BgL_iz00_3703 == VECTOR_LENGTH(BgL_opt1167z00_68)))
											{	/* Unsafe/crc.scm 347 */
												BgL_index1175z00_1878 = BINT(((long) -1));
											}
										else
											{	/* Unsafe/crc.scm 347 */
												if (
													(BgL_iz00_3703 ==
														(VECTOR_LENGTH(BgL_opt1167z00_68) - ((long) 1))))
													{	/* Unsafe/crc.scm 347 */
														BgL_index1175z00_1878 =
															BGl_errorz00zz__errorz00
															(BGl_symbol3240z00zz__crcz00,
															BGl_string3224z00zz__crcz00,
															BINT(VECTOR_LENGTH(BgL_opt1167z00_68)));
													}
												else
													{	/* Unsafe/crc.scm 347 */
														obj_t BgL_vz00_3716;

														BgL_vz00_3716 =
															VECTOR_REF(BgL_opt1167z00_68, BgL_iz00_3703);
														if ((BgL_vz00_3716 == BGl_keyword3219z00zz__crcz00))
															{	/* Unsafe/crc.scm 347 */
																BgL_index1175z00_1878 =
																	BINT((BgL_iz00_3703 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_8070;

																BgL_iz00_8070 = (BgL_iz00_3703 + ((long) 2));
																BgL_iz00_3703 = BgL_iz00_8070;
																goto BgL_search1170z00_3702;
															}
													}
											}
									}
									{	/* Unsafe/crc.scm 347 */
										bool_t BgL_test3515z00_8072;

										{	/* Unsafe/crc.scm 347 */
											long BgL_n1z00_3723;

											{	/* Unsafe/crc.scm 347 */
												obj_t BgL_tmpz00_8073;

												if (INTEGERP(BgL_index1175z00_1878))
													{	/* Unsafe/crc.scm 347 */
														BgL_tmpz00_8073 = BgL_index1175z00_1878;
													}
												else
													{
														obj_t BgL_auxz00_8076;

														BgL_auxz00_8076 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3190z00zz__crcz00,
															BINT(((long) 14542)), BGl_string3242z00zz__crcz00,
															BGl_string3193z00zz__crcz00,
															BgL_index1175z00_1878);
														FAILURE(BgL_auxz00_8076, BFALSE, BFALSE);
													}
												BgL_n1z00_3723 = (long) CINT(BgL_tmpz00_8073);
											}
											BgL_test3515z00_8072 = (BgL_n1z00_3723 >= ((long) 0));
										}
										if (BgL_test3515z00_8072)
											{
												long BgL_auxz00_8082;

												{	/* Unsafe/crc.scm 347 */
													obj_t BgL_tmpz00_8083;

													if (INTEGERP(BgL_index1175z00_1878))
														{	/* Unsafe/crc.scm 347 */
															BgL_tmpz00_8083 = BgL_index1175z00_1878;
														}
													else
														{
															obj_t BgL_auxz00_8086;

															BgL_auxz00_8086 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3190z00zz__crcz00,
																BINT(((long) 14542)),
																BGl_string3242z00zz__crcz00,
																BGl_string3193z00zz__crcz00,
																BgL_index1175z00_1878);
															FAILURE(BgL_auxz00_8086, BFALSE, BFALSE);
														}
													BgL_auxz00_8082 = (long) CINT(BgL_tmpz00_8083);
												}
												BgL_initz00_1865 =
													VECTOR_REF(BgL_opt1167z00_68, BgL_auxz00_8082);
											}
										else
											{	/* Unsafe/crc.scm 347 */
												BFALSE;
											}
									}
								}
								{	/* Unsafe/crc.scm 347 */
									obj_t BgL_arg1667z00_1880;
									obj_t BgL_arg1668z00_1881;

									BgL_arg1667z00_1880 =
										VECTOR_REF(BgL_opt1167z00_68, ((long) 0));
									BgL_arg1668z00_1881 =
										VECTOR_REF(BgL_opt1167z00_68, ((long) 1));
									{	/* Unsafe/crc.scm 347 */
										obj_t BgL_bigzd2endianzf3z21_1882;

										BgL_bigzd2endianzf3z21_1882 = BgL_bigzd2endianzf3z21_1863;
										{	/* Unsafe/crc.scm 347 */
											obj_t BgL_finalzd2xorzd2_1883;

											BgL_finalzd2xorzd2_1883 = BgL_finalzd2xorzd2_1864;
											{	/* Unsafe/crc.scm 347 */
												obj_t BgL_initz00_1884;

												BgL_initz00_1884 = BgL_initz00_1865;
												{	/* Unsafe/crc.scm 347 */
													obj_t BgL_mz00_3725;

													if (BGL_MMAPP(BgL_arg1668z00_1881))
														{	/* Unsafe/crc.scm 347 */
															BgL_mz00_3725 = BgL_arg1668z00_1881;
														}
													else
														{
															obj_t BgL_auxz00_8096;

															BgL_auxz00_8096 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3190z00zz__crcz00,
																BINT(((long) 14542)),
																BGl_string3242z00zz__crcz00,
																BGl_string3226z00zz__crcz00,
																BgL_arg1668z00_1881);
															FAILURE(BgL_auxz00_8096, BFALSE, BFALSE);
														}
													return
														BGl_crczd2fastzd2mmapz00zz__crcz00
														(BgL_arg1667z00_1880, BgL_mz00_3725,
														BgL_initz00_1884, BgL_finalzd2xorzd2_1883,
														BgL_bigzd2endianzf3z21_1882);
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



/* crc-mmap */
	BGL_EXPORTED_DEF obj_t BGl_crczd2mmapzd2zz__crcz00(obj_t BgL_namez00_63,
		obj_t BgL_mz00_64, obj_t BgL_bigzd2endianzf3z21_65,
		obj_t BgL_finalzd2xorzd2_66, obj_t BgL_initz00_67)
	{
		{	/* Unsafe/crc.scm 347 */
			return
				BGl_crczd2fastzd2mmapz00zz__crcz00(BgL_namez00_63, BgL_mz00_64,
				BgL_initz00_67, BgL_finalzd2xorzd2_66, BgL_bigzd2endianzf3z21_65);
		}

	}



/* get-crc */
	obj_t BGl_getzd2crczd2zz__crcz00(obj_t BgL_namez00_70)
	{
		{	/* Unsafe/crc.scm 353 */
			{	/* Unsafe/crc.scm 354 */
				obj_t BgL_crczd2desczd2_1893;

				BgL_crczd2desczd2_1893 =
					BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_namez00_70,
					BGl_za2crcsza2z00zz__crcz00);
				if (CBOOL(BgL_crczd2desczd2_1893))
					{	/* Unsafe/crc.scm 355 */
						BFALSE;
					}
				else
					{	/* Unsafe/crc.scm 355 */
						BGl_errorz00zz__errorz00(BGl_symbol3221z00zz__crcz00,
							BGl_string3243z00zz__crcz00, BgL_namez00_70);
					}
				{	/* Unsafe/crc.scm 357 */
					obj_t BgL_lenz00_1894;
					obj_t BgL_polyz00_1895;
					obj_t BgL_lsbzd2polyzd2_1896;

					{	/* Unsafe/crc.scm 357 */
						obj_t BgL_pairz00_3729;

						BgL_pairz00_3729 = CDR(((obj_t) BgL_crczd2desczd2_1893));
						BgL_lenz00_1894 = CAR(BgL_pairz00_3729);
					}
					{	/* Unsafe/crc.scm 358 */
						obj_t BgL_pairz00_3735;

						{	/* Unsafe/crc.scm 358 */
							obj_t BgL_pairz00_3734;

							BgL_pairz00_3734 = CDR(((obj_t) BgL_crczd2desczd2_1893));
							BgL_pairz00_3735 = CDR(BgL_pairz00_3734);
						}
						BgL_polyz00_1895 = CAR(BgL_pairz00_3735);
					}
					{	/* Unsafe/crc.scm 359 */
						obj_t BgL_pairz00_3743;

						{	/* Unsafe/crc.scm 359 */
							obj_t BgL_pairz00_3742;

							{	/* Unsafe/crc.scm 359 */
								obj_t BgL_pairz00_3741;

								BgL_pairz00_3741 = CDR(((obj_t) BgL_crczd2desczd2_1893));
								BgL_pairz00_3742 = CDR(BgL_pairz00_3741);
							}
							BgL_pairz00_3743 = CDR(BgL_pairz00_3742);
						}
						BgL_lsbzd2polyzd2_1896 = CAR(BgL_pairz00_3743);
					}
					{	/* Unsafe/crc.scm 360 */
						int BgL_res2377z00_3744;

						{	/* Unsafe/crc.scm 360 */
							int BgL_tmpz00_8118;

							BgL_tmpz00_8118 = (int) (((long) 3));
							BgL_res2377z00_3744 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_8118);
						} BgL_res2377z00_3744;
					}
					{	/* Unsafe/crc.scm 360 */
						int BgL_tmpz00_8121;

						BgL_tmpz00_8121 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_8121, BgL_polyz00_1895);
					}
					{	/* Unsafe/crc.scm 360 */
						int BgL_tmpz00_8124;

						BgL_tmpz00_8124 = (int) (((long) 2));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_8124, BgL_lsbzd2polyzd2_1896);
					}
					return BgL_lenz00_1894;
				}
			}
		}

	}



/* crc-fast-port */
	obj_t BGl_crczd2fastzd2portz00zz__crcz00(obj_t BgL_namez00_73,
		obj_t BgL_pz00_74, obj_t BgL_initz00_75, obj_t BgL_finalzd2xorzd2_76,
		obj_t BgL_bigzd2endianzf3z21_77)
	{
		{	/* Unsafe/crc.scm 382 */
			{	/* Unsafe/crc.scm 383 */
				obj_t BgL_lenz00_1903;

				BgL_lenz00_1903 = BGl_getzd2crczd2zz__crcz00(BgL_namez00_73);
				{	/* Unsafe/crc.scm 384 */
					obj_t BgL_polyz00_1904;
					obj_t BgL_lsbzd2polyzd2_1905;

					{	/* Unsafe/crc.scm 386 */
						int BgL_tmpz00_8128;

						BgL_tmpz00_8128 = (int) (((long) 1));
						BgL_polyz00_1904 = BGL_MVALUES_VAL(BgL_tmpz00_8128);
					}
					{	/* Unsafe/crc.scm 386 */
						int BgL_tmpz00_8131;

						BgL_tmpz00_8131 = (int) (((long) 2));
						BgL_lsbzd2polyzd2_1905 = BGL_MVALUES_VAL(BgL_tmpz00_8131);
					}
					if (INTEGERP(BgL_polyz00_1904))
						{	/* Unsafe/crc.scm 386 */
							if (CBOOL(BgL_bigzd2endianzf3z21_77))
								{	/* Unsafe/crc.scm 388 */
									long BgL_res2426z00_3915;

									{	/* Unsafe/crc.scm 388 */
										long BgL_initz00_3759;
										long BgL_finalzd2xorzd2_3760;
										long BgL_polyz00_3761;
										long BgL_crczd2lenzd2_3762;

										BgL_initz00_3759 = (long) CINT(BgL_initz00_75);
										BgL_finalzd2xorzd2_3760 =
											(long) CINT(BgL_finalzd2xorzd2_76);
										BgL_polyz00_3761 = (long) CINT(BgL_polyz00_1904);
										BgL_crczd2lenzd2_3762 = (long) CINT(BgL_lenz00_1903);
										{	/* Unsafe/crc.scm 497 */
											long BgL_mz00_3763;

											BgL_mz00_3763 =
												(
												(((long) 1) <<
													(int) (
														(BgL_crczd2lenzd2_3762 - ((long) 1)))) +
												((((long) 1) <<
														(int) (
															(BgL_crczd2lenzd2_3762 - ((long) 1)))) -
													((long) 1)));
											{
												long BgL_crcz00_3770;

												BgL_crcz00_3770 = BgL_initz00_3759;
											BgL_loopz00_3769:
												{	/* Unsafe/crc.scm 504 */
													obj_t BgL_cz00_3771;

													BgL_cz00_3771 =
														BGl_readzd2charzd2zz__r4_input_6_10_2z00
														(BgL_pz00_74);
													{	/* Unsafe/crc.scm 505 */
														bool_t BgL_test3522z00_8151;

														{	/* Unsafe/crc.scm 505 */
															bool_t BgL_res2391z00_3788;

															BgL_res2391z00_3788 = EOF_OBJECTP(BgL_cz00_3771);
															BgL_test3522z00_8151 = BgL_res2391z00_3788;
														}
														if (BgL_test3522z00_8151)
															{	/* Unsafe/crc.scm 505 */
																BgL_res2426z00_3915 =
																	(
																	(BgL_finalzd2xorzd2_3760 ^ BgL_crcz00_3770) &
																	BgL_mz00_3763);
															}
														else
															{	/* Unsafe/crc.scm 507 */
																long BgL_arg1756z00_3774;

																{	/* Unsafe/crc.scm 507 */
																	unsigned char BgL_cz00_3795;

																	BgL_cz00_3795 = CCHAR(BgL_cz00_3771);
																	{

																		if ((BgL_crczd2lenzd2_3762 >= ((long) 8)))
																			{	/* Unsafe/crc.scm 111 */
																				{	/* Unsafe/crc.scm 76 */
																					long BgL_mz00_3804;

																					BgL_mz00_3804 =
																						(((long) 1) <<
																						(int) (
																							(BgL_crczd2lenzd2_3762 -
																								((long) 1))));
																					{	/* Unsafe/crc.scm 77 */

																						{
																							long BgL_iz00_3808;
																							long BgL_crcz00_3809;

																							BgL_iz00_3808 = ((long) 0);
																							BgL_crcz00_3809 =
																								(BgL_crcz00_3770 ^
																								(((unsigned
																											char) (BgL_cz00_3795)) <<
																									(int) ((BgL_crczd2lenzd2_3762
																											- ((long) 8)))));
																						BgL_loopz00_3807:
																							if ((BgL_iz00_3808 == ((long) 8)))
																								{	/* Unsafe/crc.scm 80 */
																									BgL_arg1756z00_3774 =
																										BgL_crcz00_3809;
																								}
																							else
																								{
																									long BgL_crcz00_8165;
																									long BgL_iz00_8163;

																									BgL_iz00_8163 =
																										(BgL_iz00_3808 +
																										((long) 1));
																									BgL_crcz00_8165 =
																										((((BgL_mz00_3804 &
																													BgL_crcz00_3809) >>
																												(int) (
																													(BgL_crczd2lenzd2_3762
																														-
																														((long) 1)))) *
																											BgL_polyz00_3761) ^
																										(BgL_crcz00_3809 <<
																											(int) (((long) 1))));
																									BgL_crcz00_3809 =
																										BgL_crcz00_8165;
																									BgL_iz00_3808 = BgL_iz00_8163;
																									goto BgL_loopz00_3807;
																								}
																						}
																					}
																				}
																			}
																		else
																			{	/* Unsafe/crc.scm 111 */
																				{	/* Unsafe/crc.scm 92 */
																					long BgL_mz00_3819;

																					BgL_mz00_3819 =
																						(((long) 1) <<
																						(int) (
																							(BgL_crczd2lenzd2_3762 -
																								((long) 1))));
																					{	/* Unsafe/crc.scm 94 */

																						{
																							long BgL_iz00_3823;
																							long BgL_crcz00_3824;
																							long BgL_shiftedzd2valuezd2_3825;

																							BgL_iz00_3823 = ((long) 0);
																							BgL_crcz00_3824 = BgL_crcz00_3770;
																							BgL_shiftedzd2valuezd2_3825 =
																								(
																								((unsigned
																										char) (BgL_cz00_3795)) <<
																								(int) (BgL_crczd2lenzd2_3762));
																						BgL_loopz00_3822:
																							if ((BgL_iz00_3823 == ((long) 8)))
																								{	/* Unsafe/crc.scm 98 */
																									BgL_arg1756z00_3774 =
																										BgL_crcz00_3824;
																								}
																							else
																								{	/* Unsafe/crc.scm 100 */
																									long BgL_crc2z00_3827;

																									BgL_crc2z00_3827 =
																										(BgL_crcz00_3824 ^
																										(BgL_mz00_3819 &
																											(BgL_shiftedzd2valuezd2_3825
																												>> (int) (((long)
																														8)))));
																									{	/* Unsafe/crc.scm 104 */

																										{
																											long
																												BgL_shiftedzd2valuezd2_8200;
																											long BgL_crcz00_8191;
																											long BgL_iz00_8189;

																											BgL_iz00_8189 =
																												(BgL_iz00_3823 +
																												((long) 1));
																											BgL_crcz00_8191 =
																												((((BgL_mz00_3819 &
																															BgL_crc2z00_3827)
																														>>
																														(int) (
																															(BgL_crczd2lenzd2_3762
																																-
																																((long) 1)))) *
																													BgL_polyz00_3761) ^
																												(BgL_crc2z00_3827 <<
																													(int) (((long) 1))));
																											BgL_shiftedzd2valuezd2_8200
																												=
																												(BgL_shiftedzd2valuezd2_3825
																												<< (int) (((long) 1)));
																											BgL_shiftedzd2valuezd2_3825
																												=
																												BgL_shiftedzd2valuezd2_8200;
																											BgL_crcz00_3824 =
																												BgL_crcz00_8191;
																											BgL_iz00_3823 =
																												BgL_iz00_8189;
																											goto BgL_loopz00_3822;
																										}
																									}
																								}
																						}
																					}
																				}
																			}
																	}
																}
																{
																	long BgL_crcz00_8207;

																	BgL_crcz00_8207 = BgL_arg1756z00_3774;
																	BgL_crcz00_3770 = BgL_crcz00_8207;
																	goto BgL_loopz00_3769;
																}
															}
													}
												}
											}
										}
									}
									return BINT(BgL_res2426z00_3915);
								}
							else
								{	/* Unsafe/crc.scm 389 */
									long BgL_res2445z00_3988;

									{	/* Unsafe/crc.scm 389 */
										long BgL_initz00_3917;
										long BgL_finalzd2xorzd2_3918;
										long BgL_polyz00_3919;
										long BgL_crczd2lenzd2_3920;

										BgL_initz00_3917 = (long) CINT(BgL_initz00_75);
										BgL_finalzd2xorzd2_3918 =
											(long) CINT(BgL_finalzd2xorzd2_76);
										BgL_polyz00_3919 = (long) CINT(BgL_lsbzd2polyzd2_1905);
										BgL_crczd2lenzd2_3920 = (long) CINT(BgL_lenz00_1903);
										{	/* Unsafe/crc.scm 497 */
											long BgL_mz00_3921;

											BgL_mz00_3921 =
												(
												(((long) 1) <<
													(int) (
														(BgL_crczd2lenzd2_3920 - ((long) 1)))) +
												((((long) 1) <<
														(int) (
															(BgL_crczd2lenzd2_3920 - ((long) 1)))) -
													((long) 1)));
											{
												long BgL_crcz00_3928;

												BgL_crcz00_3928 = BgL_initz00_3917;
											BgL_loopz00_3927:
												{	/* Unsafe/crc.scm 504 */
													obj_t BgL_cz00_3929;

													BgL_cz00_3929 =
														BGl_readzd2charzd2zz__r4_input_6_10_2z00
														(BgL_pz00_74);
													{	/* Unsafe/crc.scm 505 */
														bool_t BgL_test3526z00_8222;

														{	/* Unsafe/crc.scm 505 */
															bool_t BgL_res2433z00_3946;

															BgL_res2433z00_3946 = EOF_OBJECTP(BgL_cz00_3929);
															BgL_test3526z00_8222 = BgL_res2433z00_3946;
														}
														if (BgL_test3526z00_8222)
															{	/* Unsafe/crc.scm 505 */
																BgL_res2445z00_3988 =
																	(
																	(BgL_finalzd2xorzd2_3918 ^ BgL_crcz00_3928) &
																	BgL_mz00_3921);
															}
														else
															{	/* Unsafe/crc.scm 507 */
																long BgL_arg1756z00_3932;

																{
																	long BgL_iz00_3960;
																	long BgL_crcz00_3961;

																	BgL_iz00_3960 = ((long) 0);
																	BgL_crcz00_3961 =
																		(BgL_crcz00_3928 ^
																		((unsigned char) (CCHAR(BgL_cz00_3929))));
																BgL_loopz00_3959:
																	if ((BgL_iz00_3960 == ((long) 8)))
																		{	/* Unsafe/crc.scm 164 */
																			BgL_arg1756z00_3932 = BgL_crcz00_3961;
																		}
																	else
																		{
																			long BgL_crcz00_8230;
																			long BgL_iz00_8228;

																			BgL_iz00_8228 =
																				(BgL_iz00_3960 + ((long) 1));
																			BgL_crcz00_8230 =
																				(
																				((((long) 1) & BgL_crcz00_3961) *
																					BgL_polyz00_3919) ^ (long) (((unsigned
																							long) (BgL_crcz00_3961) >>
																						(int) (((long) 1)))));
																			BgL_crcz00_3961 = BgL_crcz00_8230;
																			BgL_iz00_3960 = BgL_iz00_8228;
																			goto BgL_loopz00_3959;
																		}
																}
																{
																	long BgL_crcz00_8242;

																	BgL_crcz00_8242 = BgL_arg1756z00_3932;
																	BgL_crcz00_3928 = BgL_crcz00_8242;
																	goto BgL_loopz00_3927;
																}
															}
													}
												}
											}
										}
									}
									return BINT(BgL_res2445z00_3988);
								}
						}
					else
						{	/* Unsafe/crc.scm 386 */
							if (ELONGP(BgL_polyz00_1904))
								{	/* Unsafe/crc.scm 390 */
									if (CBOOL(BgL_bigzd2endianzf3z21_77))
										{	/* Unsafe/crc.scm 392 */
											obj_t BgL_arg1691z00_1908;
											obj_t BgL_arg1692z00_1909;

											if (INTEGERP(BgL_initz00_75))
												{	/* Unsafe/crc.scm 367 */
													long BgL_res2448z00_3993;

													{	/* Unsafe/crc.scm 367 */
														long BgL_tmpz00_8250;

														BgL_tmpz00_8250 = (long) CINT(BgL_initz00_75);
														BgL_res2448z00_3993 = (long) (BgL_tmpz00_8250);
													}
													BgL_arg1691z00_1908 =
														make_belong(BgL_res2448z00_3993);
												}
											else
												{	/* Unsafe/crc.scm 366 */
													BgL_arg1691z00_1908 = BgL_initz00_75;
												}
											if (INTEGERP(BgL_finalzd2xorzd2_76))
												{	/* Unsafe/crc.scm 367 */
													long BgL_res2450z00_3997;

													{	/* Unsafe/crc.scm 367 */
														long BgL_tmpz00_8256;

														BgL_tmpz00_8256 =
															(long) CINT(BgL_finalzd2xorzd2_76);
														BgL_res2450z00_3997 = (long) (BgL_tmpz00_8256);
													}
													BgL_arg1692z00_1909 =
														make_belong(BgL_res2450z00_3997);
												}
											else
												{	/* Unsafe/crc.scm 366 */
													BgL_arg1692z00_1909 = BgL_finalzd2xorzd2_76;
												}
											{	/* Unsafe/crc.scm 392 */
												long BgL_res2511z00_4226;

												{	/* Unsafe/crc.scm 392 */
													long BgL_initz00_3999;
													long BgL_finalzd2xorzd2_4000;
													long BgL_polyz00_4001;
													long BgL_crczd2lenzd2_4002;

													BgL_initz00_3999 =
														BELONG_TO_LONG(BgL_arg1691z00_1908);
													BgL_finalzd2xorzd2_4000 =
														BELONG_TO_LONG(BgL_arg1692z00_1909);
													BgL_polyz00_4001 = BELONG_TO_LONG(BgL_polyz00_1904);
													BgL_crczd2lenzd2_4002 = (long) CINT(BgL_lenz00_1903);
													{	/* Unsafe/crc.scm 514 */
														long BgL_mz00_4003;

														{	/* Unsafe/crc.scm 517 */
															long BgL_tmpz00_8264;

															{	/* Unsafe/crc.scm 518 */
																long BgL_res2455z00_4027;

																{	/* Unsafe/crc.scm 518 */
																	long BgL_tmpz00_8268;

																	BgL_tmpz00_8268 =
																		(
																		(((long) 1) <<
																			(int) (
																				(BgL_crczd2lenzd2_4002 - ((long) 1)))) -
																		((long) 1));
																	BgL_res2455z00_4027 =
																		(long) (BgL_tmpz00_8268);
																}
																BgL_tmpz00_8264 = BgL_res2455z00_4027;
															}
															BgL_mz00_4003 =
																(
																(((long) 1) <<
																	(int) (
																		(BgL_crczd2lenzd2_4002 - ((long) 1)))) +
																BgL_tmpz00_8264);
														}
														{
															long BgL_crcz00_4010;

															BgL_crcz00_4010 = BgL_initz00_3999;
														BgL_loopz00_4009:
															{	/* Unsafe/crc.scm 521 */
																obj_t BgL_cz00_4011;

																BgL_cz00_4011 =
																	BGl_readzd2charzd2zz__r4_input_6_10_2z00
																	(BgL_pz00_74);
																{	/* Unsafe/crc.scm 522 */
																	bool_t BgL_test3532z00_8276;

																	{	/* Unsafe/crc.scm 522 */
																		bool_t BgL_res2457z00_4031;

																		BgL_res2457z00_4031 =
																			EOF_OBJECTP(BgL_cz00_4011);
																		BgL_test3532z00_8276 = BgL_res2457z00_4031;
																	}
																	if (BgL_test3532z00_8276)
																		{	/* Unsafe/crc.scm 522 */
																			BgL_res2511z00_4226 =
																				(
																				(BgL_finalzd2xorzd2_4000 ^
																					BgL_crcz00_4010) & BgL_mz00_4003);
																		}
																	else
																		{	/* Unsafe/crc.scm 524 */
																			long BgL_arg1766z00_4014;

																			{	/* Unsafe/crc.scm 524 */
																				long BgL_res2510z00_4225;

																				{	/* Unsafe/crc.scm 524 */
																					unsigned char BgL_cz00_4038;

																					BgL_cz00_4038 = CCHAR(BgL_cz00_4011);
																					if (
																						(BgL_crczd2lenzd2_4002 >=
																							((long) 8)))
																						{	/* Unsafe/crc.scm 122 */
																							long BgL_octetz00_4043;

																							BgL_octetz00_4043 =
																								(
																								(unsigned
																									char) (BgL_cz00_4038));
																							{	/* Unsafe/crc.scm 123 */
																								long BgL_valuez00_4044;
																								long BgL_mz00_4045;

																								{	/* Unsafe/crc.scm 123 */
																									long BgL_arg1469z00_4046;
																									long BgL_arg1470z00_4047;

																									{	/* Unsafe/crc.scm 123 */
																										long BgL_res2462z00_4068;

																										BgL_res2462z00_4068 =
																											(long)
																											(BgL_octetz00_4043);
																										BgL_arg1469z00_4046 =
																											BgL_res2462z00_4068;
																									}
																									BgL_arg1470z00_4047 =
																										(BgL_crczd2lenzd2_4002 -
																										((long) 8));
																									BgL_valuez00_4044 =
																										(BgL_arg1469z00_4046 <<
																										(int)
																										(BgL_arg1470z00_4047));
																								}
																								BgL_mz00_4045 =
																									(((long) 1) <<
																									(int) (
																										(BgL_crczd2lenzd2_4002 -
																											((long) 1))));
																								{
																									long BgL_iz00_4051;
																									long BgL_crcz00_4052;

																									BgL_iz00_4051 = ((long) 0);
																									BgL_crcz00_4052 =
																										(BgL_crcz00_4010 ^
																										BgL_valuez00_4044);
																								BgL_loopz00_4050:
																									if (
																										(BgL_iz00_4051 ==
																											((long) 8)))
																										{	/* Unsafe/crc.scm 127 */
																											BgL_res2510z00_4225 =
																												BgL_crcz00_4052;
																										}
																									else
																										{	/* Unsafe/crc.scm 129 */
																											long
																												BgL_newzd2crczd2_4054;
																											BgL_newzd2crczd2_4054 =
																												(BgL_crcz00_4052 <<
																												(int) (((long) 1)));
																											if ((((long) 0) ==
																													(BgL_mz00_4045 &
																														BgL_crcz00_4052)))
																												{
																													long BgL_crcz00_8301;
																													long BgL_iz00_8299;

																													BgL_iz00_8299 =
																														(BgL_iz00_4051 +
																														((long) 1));
																													BgL_crcz00_8301 =
																														BgL_newzd2crczd2_4054;
																													BgL_crcz00_4052 =
																														BgL_crcz00_8301;
																													BgL_iz00_4051 =
																														BgL_iz00_8299;
																													goto BgL_loopz00_4050;
																												}
																											else
																												{
																													long BgL_crcz00_8304;
																													long BgL_iz00_8302;

																													BgL_iz00_8302 =
																														(BgL_iz00_4051 +
																														((long) 1));
																													BgL_crcz00_8304 =
																														(BgL_newzd2crczd2_4054
																														^ BgL_polyz00_4001);
																													BgL_crcz00_4052 =
																														BgL_crcz00_8304;
																													BgL_iz00_4051 =
																														BgL_iz00_8302;
																													goto BgL_loopz00_4050;
																												}
																										}
																								}
																							}
																						}
																					else
																						{	/* Unsafe/crc.scm 133 */
																							long BgL_arg1472z00_4060;

																							{	/* Unsafe/crc.scm 133 */
																								long BgL_arg1473z00_4061;
																								long BgL_arg1474z00_4062;

																								{	/* Unsafe/crc.scm 133 */
																									long BgL_res2475z00_4100;

																									BgL_res2475z00_4100 =
																										(long) (BgL_crcz00_4010);
																									BgL_arg1473z00_4061 =
																										BgL_res2475z00_4100;
																								}
																								{	/* Unsafe/crc.scm 133 */
																									long BgL_res2476z00_4102;

																									BgL_res2476z00_4102 =
																										(long) (BgL_polyz00_4001);
																									BgL_arg1474z00_4062 =
																										BgL_res2476z00_4102;
																								}
																								{

																									if (
																										(BgL_crczd2lenzd2_4002 >=
																											((long) 8)))
																										{	/* Unsafe/crc.scm 111 */
																											{	/* Unsafe/crc.scm 76 */
																												long BgL_mz00_4112;

																												BgL_mz00_4112 =
																													(((long) 1) <<
																													(int) (
																														(BgL_crczd2lenzd2_4002
																															- ((long) 1))));
																												{	/* Unsafe/crc.scm 77 */

																													{
																														long BgL_iz00_4116;
																														long
																															BgL_crcz00_4117;
																														BgL_iz00_4116 =
																															((long) 0);
																														BgL_crcz00_4117 =
																															(BgL_arg1473z00_4061
																															^ (((unsigned
																																		char)
																																	(BgL_cz00_4038))
																																<<
																																(int) (
																																	(BgL_crczd2lenzd2_4002
																																		-
																																		((long)
																																			8)))));
																													BgL_loopz00_4115:
																														if (
																															(BgL_iz00_4116 ==
																																((long) 8)))
																															{	/* Unsafe/crc.scm 80 */
																																BgL_arg1472z00_4060
																																	=
																																	BgL_crcz00_4117;
																															}
																														else
																															{
																																long
																																	BgL_crcz00_8318;
																																long
																																	BgL_iz00_8316;
																																BgL_iz00_8316 =
																																	(BgL_iz00_4116
																																	+ ((long) 1));
																																BgL_crcz00_8318
																																	=
																																	((((BgL_mz00_4112 & BgL_crcz00_4117) >> (int) ((BgL_crczd2lenzd2_4002 - ((long) 1)))) * BgL_arg1474z00_4062) ^ (BgL_crcz00_4117 << (int) (((long) 1))));
																																BgL_crcz00_4117
																																	=
																																	BgL_crcz00_8318;
																																BgL_iz00_4116 =
																																	BgL_iz00_8316;
																																goto
																																	BgL_loopz00_4115;
																															}
																													}
																												}
																											}
																										}
																									else
																										{	/* Unsafe/crc.scm 111 */
																											{	/* Unsafe/crc.scm 92 */
																												long BgL_mz00_4127;

																												BgL_mz00_4127 =
																													(((long) 1) <<
																													(int) (
																														(BgL_crczd2lenzd2_4002
																															- ((long) 1))));
																												{	/* Unsafe/crc.scm 94 */

																													{
																														long BgL_iz00_4131;
																														long
																															BgL_crcz00_4132;
																														long
																															BgL_shiftedzd2valuezd2_4133;
																														BgL_iz00_4131 =
																															((long) 0);
																														BgL_crcz00_4132 =
																															BgL_arg1473z00_4061;
																														BgL_shiftedzd2valuezd2_4133
																															=
																															(((unsigned
																																	char)
																																(BgL_cz00_4038))
																															<<
																															(int)
																															(BgL_crczd2lenzd2_4002));
																													BgL_loopz00_4130:
																														if (
																															(BgL_iz00_4131 ==
																																((long) 8)))
																															{	/* Unsafe/crc.scm 98 */
																																BgL_arg1472z00_4060
																																	=
																																	BgL_crcz00_4132;
																															}
																														else
																															{	/* Unsafe/crc.scm 100 */
																																long
																																	BgL_crc2z00_4135;
																																BgL_crc2z00_4135
																																	=
																																	(BgL_crcz00_4132
																																	^
																																	(BgL_mz00_4127
																																		&
																																		(BgL_shiftedzd2valuezd2_4133
																																			>>
																																			(int) ((
																																					(long)
																																					8)))));
																																{	/* Unsafe/crc.scm 104 */

																																	{
																																		long
																																			BgL_shiftedzd2valuezd2_8353;
																																		long
																																			BgL_crcz00_8344;
																																		long
																																			BgL_iz00_8342;
																																		BgL_iz00_8342
																																			=
																																			(BgL_iz00_4131
																																			+
																																			((long)
																																				1));
																																		BgL_crcz00_8344
																																			=
																																			((((BgL_mz00_4127 & BgL_crc2z00_4135) >> (int) ((BgL_crczd2lenzd2_4002 - ((long) 1)))) * BgL_arg1474z00_4062) ^ (BgL_crc2z00_4135 << (int) (((long) 1))));
																																		BgL_shiftedzd2valuezd2_8353
																																			=
																																			(BgL_shiftedzd2valuezd2_4133
																																			<<
																																			(int) ((
																																					(long)
																																					1)));
																																		BgL_shiftedzd2valuezd2_4133
																																			=
																																			BgL_shiftedzd2valuezd2_8353;
																																		BgL_crcz00_4132
																																			=
																																			BgL_crcz00_8344;
																																		BgL_iz00_4131
																																			=
																																			BgL_iz00_8342;
																																		goto
																																			BgL_loopz00_4130;
																																	}
																																}
																															}
																													}
																												}
																											}
																										}
																								}
																							}
																							{	/* Unsafe/crc.scm 133 */
																								long BgL_res2509z00_4224;

																								BgL_res2509z00_4224 =
																									(long) (BgL_arg1472z00_4060);
																								BgL_res2510z00_4225 =
																									BgL_res2509z00_4224;
																				}}}
																				BgL_arg1766z00_4014 =
																					BgL_res2510z00_4225;
																			}
																			{
																				long BgL_crcz00_8361;

																				BgL_crcz00_8361 = BgL_arg1766z00_4014;
																				BgL_crcz00_4010 = BgL_crcz00_8361;
																				goto BgL_loopz00_4009;
																			}
																		}
																}
															}
														}
													}
												}
												return make_belong(BgL_res2511z00_4226);
											}
										}
									else
										{	/* Unsafe/crc.scm 394 */
											obj_t BgL_arg1693z00_1910;
											obj_t BgL_arg1695z00_1911;

											if (INTEGERP(BgL_initz00_75))
												{	/* Unsafe/crc.scm 367 */
													long BgL_res2513z00_4230;

													{	/* Unsafe/crc.scm 367 */
														long BgL_tmpz00_8365;

														BgL_tmpz00_8365 = (long) CINT(BgL_initz00_75);
														BgL_res2513z00_4230 = (long) (BgL_tmpz00_8365);
													}
													BgL_arg1693z00_1910 =
														make_belong(BgL_res2513z00_4230);
												}
											else
												{	/* Unsafe/crc.scm 366 */
													BgL_arg1693z00_1910 = BgL_initz00_75;
												}
											if (INTEGERP(BgL_finalzd2xorzd2_76))
												{	/* Unsafe/crc.scm 367 */
													long BgL_res2515z00_4234;

													{	/* Unsafe/crc.scm 367 */
														long BgL_tmpz00_8371;

														BgL_tmpz00_8371 =
															(long) CINT(BgL_finalzd2xorzd2_76);
														BgL_res2515z00_4234 = (long) (BgL_tmpz00_8371);
													}
													BgL_arg1695z00_1911 =
														make_belong(BgL_res2515z00_4234);
												}
											else
												{	/* Unsafe/crc.scm 366 */
													BgL_arg1695z00_1911 = BgL_finalzd2xorzd2_76;
												}
											{	/* Unsafe/crc.scm 394 */
												long BgL_res2535z00_4314;

												{	/* Unsafe/crc.scm 394 */
													long BgL_initz00_4236;
													long BgL_finalzd2xorzd2_4237;
													long BgL_polyz00_4238;
													long BgL_crczd2lenzd2_4239;

													BgL_initz00_4236 =
														BELONG_TO_LONG(BgL_arg1693z00_1910);
													BgL_finalzd2xorzd2_4237 =
														BELONG_TO_LONG(BgL_arg1695z00_1911);
													BgL_polyz00_4238 =
														BELONG_TO_LONG(BgL_lsbzd2polyzd2_1905);
													BgL_crczd2lenzd2_4239 = (long) CINT(BgL_lenz00_1903);
													{	/* Unsafe/crc.scm 514 */
														long BgL_mz00_4240;

														{	/* Unsafe/crc.scm 517 */
															long BgL_tmpz00_8379;

															{	/* Unsafe/crc.scm 518 */
																long BgL_res2520z00_4264;

																{	/* Unsafe/crc.scm 518 */
																	long BgL_tmpz00_8383;

																	BgL_tmpz00_8383 =
																		(
																		(((long) 1) <<
																			(int) (
																				(BgL_crczd2lenzd2_4239 - ((long) 1)))) -
																		((long) 1));
																	BgL_res2520z00_4264 =
																		(long) (BgL_tmpz00_8383);
																}
																BgL_tmpz00_8379 = BgL_res2520z00_4264;
															}
															BgL_mz00_4240 =
																(
																(((long) 1) <<
																	(int) (
																		(BgL_crczd2lenzd2_4239 - ((long) 1)))) +
																BgL_tmpz00_8379);
														}
														{
															long BgL_crcz00_4247;

															BgL_crcz00_4247 = BgL_initz00_4236;
														BgL_loopz00_4246:
															{	/* Unsafe/crc.scm 521 */
																obj_t BgL_cz00_4248;

																BgL_cz00_4248 =
																	BGl_readzd2charzd2zz__r4_input_6_10_2z00
																	(BgL_pz00_74);
																{	/* Unsafe/crc.scm 522 */
																	bool_t BgL_test3541z00_8391;

																	{	/* Unsafe/crc.scm 522 */
																		bool_t BgL_res2522z00_4268;

																		BgL_res2522z00_4268 =
																			EOF_OBJECTP(BgL_cz00_4248);
																		BgL_test3541z00_8391 = BgL_res2522z00_4268;
																	}
																	if (BgL_test3541z00_8391)
																		{	/* Unsafe/crc.scm 522 */
																			BgL_res2535z00_4314 =
																				(
																				(BgL_finalzd2xorzd2_4237 ^
																					BgL_crcz00_4247) & BgL_mz00_4240);
																		}
																	else
																		{	/* Unsafe/crc.scm 524 */
																			long BgL_arg1766z00_4251;

																			{	/* Unsafe/crc.scm 524 */
																				long BgL_res2534z00_4313;

																				{	/* Unsafe/crc.scm 524 */
																					unsigned char BgL_cz00_4275;

																					BgL_cz00_4275 = CCHAR(BgL_cz00_4248);
																					{	/* Unsafe/crc.scm 175 */
																						long BgL_octetz00_4279;

																						BgL_octetz00_4279 =
																							((unsigned char) (BgL_cz00_4275));
																						{	/* Unsafe/crc.scm 176 */
																							long BgL_g1043z00_4280;

																							{	/* Unsafe/crc.scm 177 */
																								long BgL_arg1509z00_4281;

																								{	/* Unsafe/crc.scm 177 */
																									long BgL_res2526z00_4294;

																									BgL_res2526z00_4294 =
																										(long) (BgL_octetz00_4279);
																									BgL_arg1509z00_4281 =
																										BgL_res2526z00_4294;
																								}
																								BgL_g1043z00_4280 =
																									(BgL_crcz00_4247 ^
																									BgL_arg1509z00_4281);
																							}
																							{
																								long BgL_iz00_4283;
																								long BgL_crcz00_4284;

																								BgL_iz00_4283 = ((long) 0);
																								BgL_crcz00_4284 =
																									BgL_g1043z00_4280;
																							BgL_loopz00_4282:
																								if (
																									(BgL_iz00_4283 == ((long) 8)))
																									{	/* Unsafe/crc.scm 178 */
																										BgL_res2534z00_4313 =
																											BgL_crcz00_4284;
																									}
																								else
																									{	/* Unsafe/crc.scm 180 */
																										long BgL_newzd2crczd2_4286;

																										{	/* Unsafe/crc.scm 180 */
																											unsigned long
																												BgL_xz00_4300;
																											BgL_xz00_4300 =
																												(unsigned
																												long) (BgL_crcz00_4284);
																											{	/* Unsafe/crc.scm 180 */
																												unsigned long
																													BgL_tmpz00_8403;
																												BgL_tmpz00_8403 =
																													(BgL_xz00_4300 >>
																													(int) (((long) 1)));
																												BgL_newzd2crczd2_4286 =
																													(long)
																													(BgL_tmpz00_8403);
																										}}
																										{
																											long BgL_crcz00_8409;
																											long BgL_iz00_8407;

																											BgL_iz00_8407 =
																												(BgL_iz00_4283 +
																												((long) 1));
																											BgL_crcz00_8409 =
																												(((((long) 1) &
																														BgL_crcz00_4284) *
																													BgL_polyz00_4238) ^
																												BgL_newzd2crczd2_4286);
																											BgL_crcz00_4284 =
																												BgL_crcz00_8409;
																											BgL_iz00_4283 =
																												BgL_iz00_8407;
																											goto BgL_loopz00_4282;
																										}
																									}
																							}
																						}
																					}
																				}
																				BgL_arg1766z00_4251 =
																					BgL_res2534z00_4313;
																			}
																			{
																				long BgL_crcz00_8413;

																				BgL_crcz00_8413 = BgL_arg1766z00_4251;
																				BgL_crcz00_4247 = BgL_crcz00_8413;
																				goto BgL_loopz00_4246;
																			}
																		}
																}
															}
														}
													}
												}
												return make_belong(BgL_res2535z00_4314);
											}
										}
								}
							else
								{	/* Unsafe/crc.scm 390 */
									if (LLONGP(BgL_polyz00_1904))
										{	/* Unsafe/crc.scm 396 */
											if (CBOOL(BgL_bigzd2endianzf3z21_77))
												{	/* Unsafe/crc.scm 398 */
													obj_t BgL_arg1697z00_1913;
													obj_t BgL_arg1698z00_1914;

													if (INTEGERP(BgL_initz00_75))
														{	/* Unsafe/crc.scm 375 */
															BGL_LONGLONG_T BgL_res2538z00_4320;

															{	/* Unsafe/crc.scm 375 */
																long BgL_tmpz00_8421;

																BgL_tmpz00_8421 = (long) CINT(BgL_initz00_75);
																BgL_res2538z00_4320 =
																	LONG_TO_LLONG(BgL_tmpz00_8421);
															}
															BgL_arg1697z00_1913 =
																make_bllong(BgL_res2538z00_4320);
														}
													else
														{	/* Unsafe/crc.scm 375 */
															if (ELONGP(BgL_initz00_75))
																{	/* Unsafe/crc.scm 376 */
																	long BgL_xz00_4322;

																	BgL_xz00_4322 =
																		BELONG_TO_LONG(BgL_initz00_75);
																	BgL_arg1697z00_1913 =
																		make_bllong(
																		(BGL_LONGLONG_T) (BgL_xz00_4322));
																}
															else
																{	/* Unsafe/crc.scm 376 */
																	BgL_arg1697z00_1913 = BgL_initz00_75;
																}
														}
													if (INTEGERP(BgL_finalzd2xorzd2_76))
														{	/* Unsafe/crc.scm 375 */
															BGL_LONGLONG_T BgL_res2542z00_4328;

															{	/* Unsafe/crc.scm 375 */
																long BgL_tmpz00_8432;

																BgL_tmpz00_8432 =
																	(long) CINT(BgL_finalzd2xorzd2_76);
																BgL_res2542z00_4328 =
																	LONG_TO_LLONG(BgL_tmpz00_8432);
															}
															BgL_arg1698z00_1914 =
																make_bllong(BgL_res2542z00_4328);
														}
													else
														{	/* Unsafe/crc.scm 375 */
															if (ELONGP(BgL_finalzd2xorzd2_76))
																{	/* Unsafe/crc.scm 376 */
																	long BgL_xz00_4330;

																	BgL_xz00_4330 =
																		BELONG_TO_LONG(BgL_finalzd2xorzd2_76);
																	BgL_arg1698z00_1914 =
																		make_bllong(
																		(BGL_LONGLONG_T) (BgL_xz00_4330));
																}
															else
																{	/* Unsafe/crc.scm 376 */
																	BgL_arg1698z00_1914 = BgL_finalzd2xorzd2_76;
																}
														}
													{	/* Unsafe/crc.scm 398 */
														BGL_LONGLONG_T BgL_res2605z00_4560;

														{	/* Unsafe/crc.scm 398 */
															BGL_LONGLONG_T BgL_initz00_4333;
															BGL_LONGLONG_T BgL_finalzd2xorzd2_4334;
															BGL_LONGLONG_T BgL_polyz00_4335;
															long BgL_crczd2lenzd2_4336;

															BgL_initz00_4333 =
																BLLONG_TO_LLONG(BgL_arg1697z00_1913);
															BgL_finalzd2xorzd2_4334 =
																BLLONG_TO_LLONG(BgL_arg1698z00_1914);
															BgL_polyz00_4335 =
																BLLONG_TO_LLONG(BgL_polyz00_1904);
															BgL_crczd2lenzd2_4336 =
																(long) CINT(BgL_lenz00_1903);
															{	/* Unsafe/crc.scm 531 */
																BGL_LONGLONG_T BgL_mz00_4337;

																BgL_mz00_4337 =
																	(
																	(((BGL_LONGLONG_T) 1) <<
																		(int) (
																			(BgL_crczd2lenzd2_4336 - ((long) 1)))) +
																	((((BGL_LONGLONG_T) 1) <<
																			(int) (
																				(BgL_crczd2lenzd2_4336 - ((long) 1)))) -
																		((BGL_LONGLONG_T) 1)));
																{
																	BGL_LONGLONG_T BgL_crcz00_4344;

																	BgL_crcz00_4344 = BgL_initz00_4333;
																BgL_loopz00_4343:
																	{	/* Unsafe/crc.scm 538 */
																		obj_t BgL_cz00_4345;

																		BgL_cz00_4345 =
																			BGl_readzd2charzd2zz__r4_input_6_10_2z00
																			(BgL_pz00_74);
																		{	/* Unsafe/crc.scm 539 */
																			bool_t BgL_test3549z00_8454;

																			{	/* Unsafe/crc.scm 539 */
																				bool_t BgL_res2551z00_4365;

																				BgL_res2551z00_4365 =
																					EOF_OBJECTP(BgL_cz00_4345);
																				BgL_test3549z00_8454 =
																					BgL_res2551z00_4365;
																			}
																			if (BgL_test3549z00_8454)
																				{	/* Unsafe/crc.scm 539 */
																					BgL_res2605z00_4560 =
																						(
																						(BgL_finalzd2xorzd2_4334 ^
																							BgL_crcz00_4344) & BgL_mz00_4337);
																				}
																			else
																				{	/* Unsafe/crc.scm 541 */
																					BGL_LONGLONG_T BgL_arg1776z00_4348;

																					{	/* Unsafe/crc.scm 541 */
																						BGL_LONGLONG_T BgL_res2604z00_4559;

																						{	/* Unsafe/crc.scm 541 */
																							unsigned char BgL_cz00_4372;

																							BgL_cz00_4372 =
																								CCHAR(BgL_cz00_4345);
																							if (
																								(BgL_crczd2lenzd2_4336 >=
																									((long) 8)))
																								{	/* Unsafe/crc.scm 142 */
																									long BgL_octetz00_4377;

																									BgL_octetz00_4377 =
																										(
																										(unsigned
																											char) (BgL_cz00_4372));
																									{	/* Unsafe/crc.scm 143 */
																										BGL_LONGLONG_T
																											BgL_valuez00_4378;
																										BGL_LONGLONG_T
																											BgL_mz00_4379;
																										{	/* Unsafe/crc.scm 143 */
																											BGL_LONGLONG_T
																												BgL_arg1486z00_4380;
																											long BgL_arg1487z00_4381;

																											{	/* Unsafe/crc.scm 143 */
																												BGL_LONGLONG_T
																													BgL_res2556z00_4402;
																												BgL_res2556z00_4402 =
																													LONG_TO_LLONG
																													(BgL_octetz00_4377);
																												BgL_arg1486z00_4380 =
																													BgL_res2556z00_4402;
																											}
																											BgL_arg1487z00_4381 =
																												(BgL_crczd2lenzd2_4336 -
																												((long) 8));
																											BgL_valuez00_4378 =
																												(BgL_arg1486z00_4380 <<
																												(int)
																												(BgL_arg1487z00_4381));
																										}
																										BgL_mz00_4379 =
																											(((BGL_LONGLONG_T) 1) <<
																											(int) (
																												(BgL_crczd2lenzd2_4336 -
																													((long) 1))));
																										{
																											long BgL_iz00_4385;
																											BGL_LONGLONG_T
																												BgL_crcz00_4386;
																											BgL_iz00_4385 =
																												((long) 0);
																											BgL_crcz00_4386 =
																												(BgL_crcz00_4344 ^
																												BgL_valuez00_4378);
																										BgL_loopz00_4384:
																											if (
																												(BgL_iz00_4385 ==
																													((long) 8)))
																												{	/* Unsafe/crc.scm 147 */
																													BgL_res2604z00_4559 =
																														BgL_crcz00_4386;
																												}
																											else
																												{	/* Unsafe/crc.scm 149 */
																													BGL_LONGLONG_T
																														BgL_newzd2crczd2_4388;
																													BgL_newzd2crczd2_4388
																														=
																														(BgL_crcz00_4386 <<
																														(int) (((long) 1)));
																													if ((((BGL_LONGLONG_T)
																																0) ==
																															(BgL_mz00_4379 &
																																BgL_crcz00_4386)))
																														{
																															BGL_LONGLONG_T
																																BgL_crcz00_8479;
																															long
																																BgL_iz00_8477;
																															BgL_iz00_8477 =
																																(BgL_iz00_4385 +
																																((long) 1));
																															BgL_crcz00_8479 =
																																BgL_newzd2crczd2_4388;
																															BgL_crcz00_4386 =
																																BgL_crcz00_8479;
																															BgL_iz00_4385 =
																																BgL_iz00_8477;
																															goto
																																BgL_loopz00_4384;
																														}
																													else
																														{
																															BGL_LONGLONG_T
																																BgL_crcz00_8482;
																															long
																																BgL_iz00_8480;
																															BgL_iz00_8480 =
																																(BgL_iz00_4385 +
																																((long) 1));
																															BgL_crcz00_8482 =
																																(BgL_newzd2crczd2_4388
																																^
																																BgL_polyz00_4335);
																															BgL_crcz00_4386 =
																																BgL_crcz00_8482;
																															BgL_iz00_4385 =
																																BgL_iz00_8480;
																															goto
																																BgL_loopz00_4384;
																														}
																												}
																										}
																									}
																								}
																							else
																								{	/* Unsafe/crc.scm 153 */
																									long BgL_arg1491z00_4394;

																									{	/* Unsafe/crc.scm 153 */
																										long BgL_arg1492z00_4395;
																										long BgL_arg1493z00_4396;

																										{	/* Unsafe/crc.scm 153 */
																											long BgL_res2569z00_4434;

																											BgL_res2569z00_4434 =
																												LLONG_TO_LONG
																												(BgL_crcz00_4344);
																											BgL_arg1492z00_4395 =
																												BgL_res2569z00_4434;
																										}
																										{	/* Unsafe/crc.scm 153 */
																											long BgL_res2570z00_4436;

																											BgL_res2570z00_4436 =
																												LLONG_TO_LONG
																												(BgL_polyz00_4335);
																											BgL_arg1493z00_4396 =
																												BgL_res2570z00_4436;
																										}
																										{

																											if (
																												(BgL_crczd2lenzd2_4336
																													>= ((long) 8)))
																												{	/* Unsafe/crc.scm 111 */
																													{	/* Unsafe/crc.scm 76 */
																														long BgL_mz00_4446;

																														BgL_mz00_4446 =
																															(((long) 1) <<
																															(int) (
																																(BgL_crczd2lenzd2_4336
																																	-
																																	((long) 1))));
																														{	/* Unsafe/crc.scm 77 */

																															{
																																long
																																	BgL_iz00_4450;
																																long
																																	BgL_crcz00_4451;
																																BgL_iz00_4450 =
																																	((long) 0);
																																BgL_crcz00_4451
																																	=
																																	(BgL_arg1492z00_4395
																																	^ (((unsigned
																																				char)
																																			(BgL_cz00_4372))
																																		<<
																																		(int) (
																																			(BgL_crczd2lenzd2_4336
																																				-
																																				((long)
																																					8)))));
																															BgL_loopz00_4449:
																																if (
																																	(BgL_iz00_4450
																																		==
																																		((long) 8)))
																																	{	/* Unsafe/crc.scm 80 */
																																		BgL_arg1491z00_4394
																																			=
																																			BgL_crcz00_4451;
																																	}
																																else
																																	{
																																		long
																																			BgL_crcz00_8496;
																																		long
																																			BgL_iz00_8494;
																																		BgL_iz00_8494
																																			=
																																			(BgL_iz00_4450
																																			+
																																			((long)
																																				1));
																																		BgL_crcz00_8496
																																			=
																																			((((BgL_mz00_4446 & BgL_crcz00_4451) >> (int) ((BgL_crczd2lenzd2_4336 - ((long) 1)))) * BgL_arg1493z00_4396) ^ (BgL_crcz00_4451 << (int) (((long) 1))));
																																		BgL_crcz00_4451
																																			=
																																			BgL_crcz00_8496;
																																		BgL_iz00_4450
																																			=
																																			BgL_iz00_8494;
																																		goto
																																			BgL_loopz00_4449;
																																	}
																															}
																														}
																													}
																												}
																											else
																												{	/* Unsafe/crc.scm 111 */
																													{	/* Unsafe/crc.scm 92 */
																														long BgL_mz00_4461;

																														BgL_mz00_4461 =
																															(((long) 1) <<
																															(int) (
																																(BgL_crczd2lenzd2_4336
																																	-
																																	((long) 1))));
																														{	/* Unsafe/crc.scm 94 */

																															{
																																long
																																	BgL_iz00_4465;
																																long
																																	BgL_crcz00_4466;
																																long
																																	BgL_shiftedzd2valuezd2_4467;
																																BgL_iz00_4465 =
																																	((long) 0);
																																BgL_crcz00_4466
																																	=
																																	BgL_arg1492z00_4395;
																																BgL_shiftedzd2valuezd2_4467
																																	=
																																	(((unsigned
																																			char)
																																		(BgL_cz00_4372))
																																	<<
																																	(int)
																																	(BgL_crczd2lenzd2_4336));
																															BgL_loopz00_4464:
																																if (
																																	(BgL_iz00_4465
																																		==
																																		((long) 8)))
																																	{	/* Unsafe/crc.scm 98 */
																																		BgL_arg1491z00_4394
																																			=
																																			BgL_crcz00_4466;
																																	}
																																else
																																	{	/* Unsafe/crc.scm 100 */
																																		long
																																			BgL_crc2z00_4469;
																																		BgL_crc2z00_4469
																																			=
																																			(BgL_crcz00_4466
																																			^
																																			(BgL_mz00_4461
																																				&
																																				(BgL_shiftedzd2valuezd2_4467
																																					>>
																																					(int)
																																					(((long) 8)))));
																																		{	/* Unsafe/crc.scm 104 */

																																			{
																																				long
																																					BgL_shiftedzd2valuezd2_8531;
																																				long
																																					BgL_crcz00_8522;
																																				long
																																					BgL_iz00_8520;
																																				BgL_iz00_8520
																																					=
																																					(BgL_iz00_4465
																																					+
																																					((long) 1));
																																				BgL_crcz00_8522
																																					=
																																					((((BgL_mz00_4461 & BgL_crc2z00_4469) >> (int) ((BgL_crczd2lenzd2_4336 - ((long) 1)))) * BgL_arg1493z00_4396) ^ (BgL_crc2z00_4469 << (int) (((long) 1))));
																																				BgL_shiftedzd2valuezd2_8531
																																					=
																																					(BgL_shiftedzd2valuezd2_4467
																																					<<
																																					(int)
																																					(((long) 1)));
																																				BgL_shiftedzd2valuezd2_4467
																																					=
																																					BgL_shiftedzd2valuezd2_8531;
																																				BgL_crcz00_4466
																																					=
																																					BgL_crcz00_8522;
																																				BgL_iz00_4465
																																					=
																																					BgL_iz00_8520;
																																				goto
																																					BgL_loopz00_4464;
																																			}
																																		}
																																	}
																															}
																														}
																													}
																												}
																										}
																									}
																									{	/* Unsafe/crc.scm 153 */
																										BGL_LONGLONG_T
																											BgL_res2603z00_4558;
																										BgL_res2603z00_4558 =
																											LONG_TO_LLONG
																											(BgL_arg1491z00_4394);
																										BgL_res2604z00_4559 =
																											BgL_res2603z00_4558;
																									}
																								}
																						}
																						BgL_arg1776z00_4348 =
																							BgL_res2604z00_4559;
																					}
																					{
																						BGL_LONGLONG_T BgL_crcz00_8539;

																						BgL_crcz00_8539 =
																							BgL_arg1776z00_4348;
																						BgL_crcz00_4344 = BgL_crcz00_8539;
																						goto BgL_loopz00_4343;
																					}
																				}
																		}
																	}
																}
															}
														}
														return make_bllong(BgL_res2605z00_4560);
													}
												}
											else
												{	/* Unsafe/crc.scm 400 */
													obj_t BgL_arg1699z00_1915;
													obj_t BgL_arg1700z00_1916;

													if (INTEGERP(BgL_initz00_75))
														{	/* Unsafe/crc.scm 375 */
															BGL_LONGLONG_T BgL_res2607z00_4565;

															{	/* Unsafe/crc.scm 375 */
																long BgL_tmpz00_8543;

																BgL_tmpz00_8543 = (long) CINT(BgL_initz00_75);
																BgL_res2607z00_4565 =
																	LONG_TO_LLONG(BgL_tmpz00_8543);
															}
															BgL_arg1699z00_1915 =
																make_bllong(BgL_res2607z00_4565);
														}
													else
														{	/* Unsafe/crc.scm 375 */
															if (ELONGP(BgL_initz00_75))
																{	/* Unsafe/crc.scm 376 */
																	long BgL_xz00_4567;

																	BgL_xz00_4567 =
																		BELONG_TO_LONG(BgL_initz00_75);
																	BgL_arg1699z00_1915 =
																		make_bllong(
																		(BGL_LONGLONG_T) (BgL_xz00_4567));
																}
															else
																{	/* Unsafe/crc.scm 376 */
																	BgL_arg1699z00_1915 = BgL_initz00_75;
																}
														}
													if (INTEGERP(BgL_finalzd2xorzd2_76))
														{	/* Unsafe/crc.scm 375 */
															BGL_LONGLONG_T BgL_res2611z00_4573;

															{	/* Unsafe/crc.scm 375 */
																long BgL_tmpz00_8554;

																BgL_tmpz00_8554 =
																	(long) CINT(BgL_finalzd2xorzd2_76);
																BgL_res2611z00_4573 =
																	LONG_TO_LLONG(BgL_tmpz00_8554);
															}
															BgL_arg1700z00_1916 =
																make_bllong(BgL_res2611z00_4573);
														}
													else
														{	/* Unsafe/crc.scm 375 */
															if (ELONGP(BgL_finalzd2xorzd2_76))
																{	/* Unsafe/crc.scm 376 */
																	long BgL_xz00_4575;

																	BgL_xz00_4575 =
																		BELONG_TO_LONG(BgL_finalzd2xorzd2_76);
																	BgL_arg1700z00_1916 =
																		make_bllong(
																		(BGL_LONGLONG_T) (BgL_xz00_4575));
																}
															else
																{	/* Unsafe/crc.scm 376 */
																	BgL_arg1700z00_1916 = BgL_finalzd2xorzd2_76;
																}
														}
													{	/* Unsafe/crc.scm 400 */
														BGL_LONGLONG_T BgL_res2633z00_4656;

														{	/* Unsafe/crc.scm 400 */
															BGL_LONGLONG_T BgL_initz00_4578;
															BGL_LONGLONG_T BgL_finalzd2xorzd2_4579;
															BGL_LONGLONG_T BgL_polyz00_4580;
															long BgL_crczd2lenzd2_4581;

															BgL_initz00_4578 =
																BLLONG_TO_LLONG(BgL_arg1699z00_1915);
															BgL_finalzd2xorzd2_4579 =
																BLLONG_TO_LLONG(BgL_arg1700z00_1916);
															BgL_polyz00_4580 =
																BLLONG_TO_LLONG(BgL_lsbzd2polyzd2_1905);
															BgL_crczd2lenzd2_4581 =
																(long) CINT(BgL_lenz00_1903);
															{	/* Unsafe/crc.scm 531 */
																BGL_LONGLONG_T BgL_mz00_4582;

																BgL_mz00_4582 =
																	(
																	(((BGL_LONGLONG_T) 1) <<
																		(int) (
																			(BgL_crczd2lenzd2_4581 - ((long) 1)))) +
																	((((BGL_LONGLONG_T) 1) <<
																			(int) (
																				(BgL_crczd2lenzd2_4581 - ((long) 1)))) -
																		((BGL_LONGLONG_T) 1)));
																{
																	BGL_LONGLONG_T BgL_crcz00_4589;

																	BgL_crcz00_4589 = BgL_initz00_4578;
																BgL_loopz00_4588:
																	{	/* Unsafe/crc.scm 538 */
																		obj_t BgL_cz00_4590;

																		BgL_cz00_4590 =
																			BGl_readzd2charzd2zz__r4_input_6_10_2z00
																			(BgL_pz00_74);
																		{	/* Unsafe/crc.scm 539 */
																			bool_t BgL_test3560z00_8576;

																			{	/* Unsafe/crc.scm 539 */
																				bool_t BgL_res2620z00_4610;

																				BgL_res2620z00_4610 =
																					EOF_OBJECTP(BgL_cz00_4590);
																				BgL_test3560z00_8576 =
																					BgL_res2620z00_4610;
																			}
																			if (BgL_test3560z00_8576)
																				{	/* Unsafe/crc.scm 539 */
																					BgL_res2633z00_4656 =
																						(
																						(BgL_finalzd2xorzd2_4579 ^
																							BgL_crcz00_4589) & BgL_mz00_4582);
																				}
																			else
																				{	/* Unsafe/crc.scm 541 */
																					BGL_LONGLONG_T BgL_arg1776z00_4593;

																					{	/* Unsafe/crc.scm 541 */
																						BGL_LONGLONG_T BgL_res2632z00_4655;

																						{	/* Unsafe/crc.scm 541 */
																							unsigned char BgL_cz00_4617;

																							BgL_cz00_4617 =
																								CCHAR(BgL_cz00_4590);
																							{	/* Unsafe/crc.scm 189 */
																								long BgL_octetz00_4621;

																								BgL_octetz00_4621 =
																									(
																									(unsigned
																										char) (BgL_cz00_4617));
																								{	/* Unsafe/crc.scm 190 */
																									BGL_LONGLONG_T
																										BgL_g1044z00_4622;
																									{	/* Unsafe/crc.scm 191 */
																										BGL_LONGLONG_T
																											BgL_arg1516z00_4623;
																										{	/* Unsafe/crc.scm 191 */
																											BGL_LONGLONG_T
																												BgL_res2624z00_4636;
																											BgL_res2624z00_4636 =
																												LONG_TO_LLONG
																												(BgL_octetz00_4621);
																											BgL_arg1516z00_4623 =
																												BgL_res2624z00_4636;
																										}
																										BgL_g1044z00_4622 =
																											(BgL_crcz00_4589 ^
																											BgL_arg1516z00_4623);
																									}
																									{
																										long BgL_iz00_4625;
																										BGL_LONGLONG_T
																											BgL_crcz00_4626;
																										BgL_iz00_4625 = ((long) 0);
																										BgL_crcz00_4626 =
																											BgL_g1044z00_4622;
																									BgL_loopz00_4624:
																										if (
																											(BgL_iz00_4625 ==
																												((long) 8)))
																											{	/* Unsafe/crc.scm 192 */
																												BgL_res2632z00_4655 =
																													BgL_crcz00_4626;
																											}
																										else
																											{	/* Unsafe/crc.scm 194 */
																												BGL_LONGLONG_T
																													BgL_newzd2crczd2_4628;
																												{	/* Unsafe/crc.scm 194 */
																													unsigned
																														BGL_LONGLONG_T
																														BgL_xz00_4642;
																													BgL_xz00_4642 =
																														(unsigned
																														BGL_LONGLONG_T)
																														(BgL_crcz00_4626);
																													{	/* Unsafe/crc.scm 194 */
																														unsigned
																															BGL_LONGLONG_T
																															BgL_tmpz00_8588;
																														BgL_tmpz00_8588 =
																															(BgL_xz00_4642 >>
																															(int) (((long)
																																	1)));
																														BgL_newzd2crczd2_4628
																															=
																															(BGL_LONGLONG_T)
																															(BgL_tmpz00_8588);
																												}}
																												{
																													BGL_LONGLONG_T
																														BgL_crcz00_8594;
																													long BgL_iz00_8592;

																													BgL_iz00_8592 =
																														(BgL_iz00_4625 +
																														((long) 1));
																													BgL_crcz00_8594 =
																														(((((BGL_LONGLONG_T)
																																	1) &
																																BgL_crcz00_4626)
																															*
																															BgL_polyz00_4580)
																														^
																														BgL_newzd2crczd2_4628);
																													BgL_crcz00_4626 =
																														BgL_crcz00_8594;
																													BgL_iz00_4625 =
																														BgL_iz00_8592;
																													goto BgL_loopz00_4624;
																												}
																											}
																									}
																								}
																							}
																						}
																						BgL_arg1776z00_4593 =
																							BgL_res2632z00_4655;
																					}
																					{
																						BGL_LONGLONG_T BgL_crcz00_8598;

																						BgL_crcz00_8598 =
																							BgL_arg1776z00_4593;
																						BgL_crcz00_4589 = BgL_crcz00_8598;
																						goto BgL_loopz00_4588;
																					}
																				}
																		}
																	}
																}
															}
														}
														return make_bllong(BgL_res2633z00_4656);
													}
												}
										}
									else
										{	/* Unsafe/crc.scm 396 */
											return
												BGl_errorz00zz__errorz00(BGl_symbol3221z00zz__crcz00,
												BGl_string3244z00zz__crcz00, BgL_polyz00_1904);
										}
								}
						}
				}
			}
		}

	}



/* crc-fast-mmap */
	obj_t BGl_crczd2fastzd2mmapz00zz__crcz00(obj_t BgL_namez00_78,
		obj_t BgL_mz00_79, obj_t BgL_initz00_80, obj_t BgL_finalzd2xorzd2_81,
		obj_t BgL_bigzd2endianzf3z21_82)
	{
		{	/* Unsafe/crc.scm 408 */
			{	/* Unsafe/crc.scm 409 */
				obj_t BgL_lenz00_1917;

				BgL_lenz00_1917 = BGl_getzd2crczd2zz__crcz00(BgL_namez00_78);
				{	/* Unsafe/crc.scm 410 */
					obj_t BgL_polyz00_1918;
					obj_t BgL_lsbzd2polyzd2_1919;

					{	/* Unsafe/crc.scm 412 */
						int BgL_tmpz00_8602;

						BgL_tmpz00_8602 = (int) (((long) 1));
						BgL_polyz00_1918 = BGL_MVALUES_VAL(BgL_tmpz00_8602);
					}
					{	/* Unsafe/crc.scm 412 */
						int BgL_tmpz00_8605;

						BgL_tmpz00_8605 = (int) (((long) 2));
						BgL_lsbzd2polyzd2_1919 = BGL_MVALUES_VAL(BgL_tmpz00_8605);
					}
					if (INTEGERP(BgL_polyz00_1918))
						{	/* Unsafe/crc.scm 412 */
							if (CBOOL(BgL_bigzd2endianzf3z21_82))
								{	/* Unsafe/crc.scm 414 */
									long BgL_res2678z00_4823;

									{	/* Unsafe/crc.scm 414 */
										long BgL_initz00_4658;
										long BgL_finalzd2xorzd2_4659;
										long BgL_polyz00_4660;
										long BgL_crczd2lenzd2_4661;

										BgL_initz00_4658 = (long) CINT(BgL_initz00_80);
										BgL_finalzd2xorzd2_4659 =
											(long) CINT(BgL_finalzd2xorzd2_81);
										BgL_polyz00_4660 = (long) CINT(BgL_polyz00_1918);
										BgL_crczd2lenzd2_4661 = (long) CINT(BgL_lenz00_1917);
										{	/* Unsafe/crc.scm 434 */
											long BgL_mz00_4662;

											BgL_mz00_4662 =
												(
												(((long) 1) <<
													(int) (
														(BgL_crczd2lenzd2_4661 - ((long) 1)))) +
												((((long) 1) <<
														(int) (
															(BgL_crczd2lenzd2_4661 - ((long) 1)))) -
													((long) 1)));
											{	/* Unsafe/crc.scm 443 */
												long BgL_lenz00_4668;

												{	/* Unsafe/crc.scm 443 */
													long BgL_res2641z00_4691;

													BgL_res2641z00_4691 = BGL_MMAP_LENGTH(BgL_mz00_79);
													BgL_lenz00_4668 = BgL_res2641z00_4691;
												}
												{
													long BgL_iz00_4670;
													long BgL_crcz00_4671;

													BgL_iz00_4670 = ((long) 0);
													BgL_crcz00_4671 = BgL_initz00_4658;
												BgL_loopz00_4669:
													{	/* Unsafe/crc.scm 446 */
														bool_t BgL_test3564z00_8625;

														{	/* Unsafe/crc.scm 446 */
															long BgL_n2z00_4693;

															BgL_n2z00_4693 = (long) (BgL_lenz00_4668);
															BgL_test3564z00_8625 =
																(BgL_iz00_4670 == BgL_n2z00_4693);
														}
														if (BgL_test3564z00_8625)
															{	/* Unsafe/crc.scm 446 */
																BgL_res2678z00_4823 =
																	(
																	(BgL_finalzd2xorzd2_4659 ^ BgL_crcz00_4671) &
																	BgL_mz00_4662);
															}
														else
															{	/* Unsafe/crc.scm 448 */
																long BgL_arg1720z00_4674;
																long BgL_arg1721z00_4675;

																BgL_arg1720z00_4674 =
																	(BgL_iz00_4670 + ((long) 1));
																{	/* Unsafe/crc.scm 449 */
																	unsigned char BgL_arg1722z00_4676;

																	{	/* Unsafe/crc.scm 449 */
																		long BgL_tmpz00_8631;

																		BgL_tmpz00_8631 = (long) (BgL_iz00_4670);
																		BgL_arg1722z00_4676 =
																			BGL_MMAP_REF(BgL_mz00_79,
																			BgL_tmpz00_8631);
																	}
																	{	/* Unsafe/crc.scm 449 */
																		unsigned char BgL_cz00_4703;

																		BgL_cz00_4703 =
																			(char) (BgL_arg1722z00_4676);
																		{

																			if ((BgL_crczd2lenzd2_4661 >= ((long) 8)))
																				{	/* Unsafe/crc.scm 111 */
																					{	/* Unsafe/crc.scm 76 */
																						long BgL_mz00_4712;

																						BgL_mz00_4712 =
																							(((long) 1) <<
																							(int) (
																								(BgL_crczd2lenzd2_4661 -
																									((long) 1))));
																						{	/* Unsafe/crc.scm 77 */

																							{
																								long BgL_iz00_4716;
																								long BgL_crcz00_4717;

																								BgL_iz00_4716 = ((long) 0);
																								BgL_crcz00_4717 =
																									(BgL_crcz00_4671 ^
																									(((unsigned
																												char) (BgL_cz00_4703))
																										<<
																										(int) (
																											(BgL_crczd2lenzd2_4661 -
																												((long) 8)))));
																							BgL_loopz00_4715:
																								if (
																									(BgL_iz00_4716 == ((long) 8)))
																									{	/* Unsafe/crc.scm 80 */
																										BgL_arg1721z00_4675 =
																											BgL_crcz00_4717;
																									}
																								else
																									{
																										long BgL_crcz00_8644;
																										long BgL_iz00_8642;

																										BgL_iz00_8642 =
																											(BgL_iz00_4716 +
																											((long) 1));
																										BgL_crcz00_8644 =
																											((((BgL_mz00_4712 &
																														BgL_crcz00_4717) >>
																													(int) (
																														(BgL_crczd2lenzd2_4661
																															-
																															((long) 1)))) *
																												BgL_polyz00_4660) ^
																											(BgL_crcz00_4717 <<
																												(int) (((long) 1))));
																										BgL_crcz00_4717 =
																											BgL_crcz00_8644;
																										BgL_iz00_4716 =
																											BgL_iz00_8642;
																										goto BgL_loopz00_4715;
																									}
																							}
																						}
																					}
																				}
																			else
																				{	/* Unsafe/crc.scm 111 */
																					{	/* Unsafe/crc.scm 92 */
																						long BgL_mz00_4727;

																						BgL_mz00_4727 =
																							(((long) 1) <<
																							(int) (
																								(BgL_crczd2lenzd2_4661 -
																									((long) 1))));
																						{	/* Unsafe/crc.scm 94 */

																							{
																								long BgL_iz00_4731;
																								long BgL_crcz00_4732;
																								long
																									BgL_shiftedzd2valuezd2_4733;
																								BgL_iz00_4731 = ((long) 0);
																								BgL_crcz00_4732 =
																									BgL_crcz00_4671;
																								BgL_shiftedzd2valuezd2_4733 =
																									(((unsigned
																											char) (BgL_cz00_4703)) <<
																									(int)
																									(BgL_crczd2lenzd2_4661));
																							BgL_loopz00_4730:
																								if (
																									(BgL_iz00_4731 == ((long) 8)))
																									{	/* Unsafe/crc.scm 98 */
																										BgL_arg1721z00_4675 =
																											BgL_crcz00_4732;
																									}
																								else
																									{	/* Unsafe/crc.scm 100 */
																										long BgL_crc2z00_4735;

																										BgL_crc2z00_4735 =
																											(BgL_crcz00_4732 ^
																											(BgL_mz00_4727 &
																												(BgL_shiftedzd2valuezd2_4733
																													>> (int) (((long)
																															8)))));
																										{	/* Unsafe/crc.scm 104 */

																											{
																												long
																													BgL_shiftedzd2valuezd2_8679;
																												long BgL_crcz00_8670;
																												long BgL_iz00_8668;

																												BgL_iz00_8668 =
																													(BgL_iz00_4731 +
																													((long) 1));
																												BgL_crcz00_8670 =
																													((((BgL_mz00_4727 &
																																BgL_crc2z00_4735)
																															>>
																															(int) (
																																(BgL_crczd2lenzd2_4661
																																	-
																																	((long) 1))))
																														*
																														BgL_polyz00_4660) ^
																													(BgL_crc2z00_4735 <<
																														(int) (((long)
																																1))));
																												BgL_shiftedzd2valuezd2_8679
																													=
																													(BgL_shiftedzd2valuezd2_4733
																													<< (int) (((long)
																															1)));
																												BgL_shiftedzd2valuezd2_4733
																													=
																													BgL_shiftedzd2valuezd2_8679;
																												BgL_crcz00_4732 =
																													BgL_crcz00_8670;
																												BgL_iz00_4731 =
																													BgL_iz00_8668;
																												goto BgL_loopz00_4730;
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
																{
																	long BgL_crcz00_8687;
																	long BgL_iz00_8686;

																	BgL_iz00_8686 = BgL_arg1720z00_4674;
																	BgL_crcz00_8687 = BgL_arg1721z00_4675;
																	BgL_crcz00_4671 = BgL_crcz00_8687;
																	BgL_iz00_4670 = BgL_iz00_8686;
																	goto BgL_loopz00_4669;
																}
															}
													}
												}
											}
										}
									}
									return BINT(BgL_res2678z00_4823);
								}
							else
								{	/* Unsafe/crc.scm 415 */
									long BgL_res2699z00_4904;

									{	/* Unsafe/crc.scm 415 */
										long BgL_initz00_4824;
										long BgL_finalzd2xorzd2_4825;
										long BgL_polyz00_4826;
										long BgL_crczd2lenzd2_4827;

										BgL_initz00_4824 = (long) CINT(BgL_initz00_80);
										BgL_finalzd2xorzd2_4825 =
											(long) CINT(BgL_finalzd2xorzd2_81);
										BgL_polyz00_4826 = (long) CINT(BgL_lsbzd2polyzd2_1919);
										BgL_crczd2lenzd2_4827 = (long) CINT(BgL_lenz00_1917);
										{	/* Unsafe/crc.scm 434 */
											long BgL_mz00_4828;

											BgL_mz00_4828 =
												(
												(((long) 1) <<
													(int) (
														(BgL_crczd2lenzd2_4827 - ((long) 1)))) +
												((((long) 1) <<
														(int) (
															(BgL_crczd2lenzd2_4827 - ((long) 1)))) -
													((long) 1)));
											{	/* Unsafe/crc.scm 443 */
												long BgL_lenz00_4834;

												{	/* Unsafe/crc.scm 443 */
													long BgL_res2685z00_4857;

													BgL_res2685z00_4857 = BGL_MMAP_LENGTH(BgL_mz00_79);
													BgL_lenz00_4834 = BgL_res2685z00_4857;
												}
												{
													long BgL_iz00_4836;
													long BgL_crcz00_4837;

													BgL_iz00_4836 = ((long) 0);
													BgL_crcz00_4837 = BgL_initz00_4824;
												BgL_loopz00_4835:
													{	/* Unsafe/crc.scm 446 */
														bool_t BgL_test3568z00_8702;

														{	/* Unsafe/crc.scm 446 */
															long BgL_n2z00_4859;

															BgL_n2z00_4859 = (long) (BgL_lenz00_4834);
															BgL_test3568z00_8702 =
																(BgL_iz00_4836 == BgL_n2z00_4859);
														}
														if (BgL_test3568z00_8702)
															{	/* Unsafe/crc.scm 446 */
																BgL_res2699z00_4904 =
																	(
																	(BgL_finalzd2xorzd2_4825 ^ BgL_crcz00_4837) &
																	BgL_mz00_4828);
															}
														else
															{	/* Unsafe/crc.scm 448 */
																long BgL_arg1720z00_4840;
																long BgL_arg1721z00_4841;

																BgL_arg1720z00_4840 =
																	(BgL_iz00_4836 + ((long) 1));
																{	/* Unsafe/crc.scm 449 */
																	unsigned char BgL_arg1722z00_4842;

																	{	/* Unsafe/crc.scm 449 */
																		long BgL_tmpz00_8708;

																		BgL_tmpz00_8708 = (long) (BgL_iz00_4836);
																		BgL_arg1722z00_4842 =
																			BGL_MMAP_REF(BgL_mz00_79,
																			BgL_tmpz00_8708);
																	}
																	{
																		long BgL_iz00_4876;
																		long BgL_crcz00_4877;

																		BgL_iz00_4876 = ((long) 0);
																		BgL_crcz00_4877 =
																			(BgL_crcz00_4837 ^
																			((unsigned char) (
																					(char) (BgL_arg1722z00_4842))));
																	BgL_loopz00_4875:
																		if ((BgL_iz00_4876 == ((long) 8)))
																			{	/* Unsafe/crc.scm 164 */
																				BgL_arg1721z00_4841 = BgL_crcz00_4877;
																			}
																		else
																			{
																				long BgL_crcz00_8715;
																				long BgL_iz00_8713;

																				BgL_iz00_8713 =
																					(BgL_iz00_4876 + ((long) 1));
																				BgL_crcz00_8715 =
																					(
																					((((long) 1) & BgL_crcz00_4877) *
																						BgL_polyz00_4826) ^
																					(long) (((unsigned
																								long) (BgL_crcz00_4877) >>
																							(int) (((long) 1)))));
																				BgL_crcz00_4877 = BgL_crcz00_8715;
																				BgL_iz00_4876 = BgL_iz00_8713;
																				goto BgL_loopz00_4875;
																			}
																	}
																}
																{
																	long BgL_crcz00_8728;
																	long BgL_iz00_8727;

																	BgL_iz00_8727 = BgL_arg1720z00_4840;
																	BgL_crcz00_8728 = BgL_arg1721z00_4841;
																	BgL_crcz00_4837 = BgL_crcz00_8728;
																	BgL_iz00_4836 = BgL_iz00_8727;
																	goto BgL_loopz00_4835;
																}
															}
													}
												}
											}
										}
									}
									return BINT(BgL_res2699z00_4904);
								}
						}
					else
						{	/* Unsafe/crc.scm 412 */
							if (ELONGP(BgL_polyz00_1918))
								{	/* Unsafe/crc.scm 416 */
									if (CBOOL(BgL_bigzd2endianzf3z21_82))
										{	/* Unsafe/crc.scm 418 */
											obj_t BgL_arg1704z00_1922;
											obj_t BgL_arg1707z00_1923;

											if (INTEGERP(BgL_initz00_80))
												{	/* Unsafe/crc.scm 367 */
													long BgL_res2702z00_4909;

													{	/* Unsafe/crc.scm 367 */
														long BgL_tmpz00_8736;

														BgL_tmpz00_8736 = (long) CINT(BgL_initz00_80);
														BgL_res2702z00_4909 = (long) (BgL_tmpz00_8736);
													}
													BgL_arg1704z00_1922 =
														make_belong(BgL_res2702z00_4909);
												}
											else
												{	/* Unsafe/crc.scm 366 */
													BgL_arg1704z00_1922 = BgL_initz00_80;
												}
											if (INTEGERP(BgL_finalzd2xorzd2_81))
												{	/* Unsafe/crc.scm 367 */
													long BgL_res2704z00_4913;

													{	/* Unsafe/crc.scm 367 */
														long BgL_tmpz00_8742;

														BgL_tmpz00_8742 =
															(long) CINT(BgL_finalzd2xorzd2_81);
														BgL_res2704z00_4913 = (long) (BgL_tmpz00_8742);
													}
													BgL_arg1707z00_1923 =
														make_belong(BgL_res2704z00_4913);
												}
											else
												{	/* Unsafe/crc.scm 366 */
													BgL_arg1707z00_1923 = BgL_finalzd2xorzd2_81;
												}
											{	/* Unsafe/crc.scm 418 */
												long BgL_res2767z00_5150;

												{	/* Unsafe/crc.scm 418 */
													long BgL_initz00_4914;
													long BgL_finalzd2xorzd2_4915;
													long BgL_polyz00_4916;
													long BgL_crczd2lenzd2_4917;

													BgL_initz00_4914 =
														BELONG_TO_LONG(BgL_arg1704z00_1922);
													BgL_finalzd2xorzd2_4915 =
														BELONG_TO_LONG(BgL_arg1707z00_1923);
													BgL_polyz00_4916 = BELONG_TO_LONG(BgL_polyz00_1918);
													BgL_crczd2lenzd2_4917 = (long) CINT(BgL_lenz00_1917);
													{	/* Unsafe/crc.scm 457 */
														long BgL_mz00_4918;

														{	/* Unsafe/crc.scm 460 */
															long BgL_tmpz00_8750;

															{	/* Unsafe/crc.scm 461 */
																long BgL_res2709z00_4945;

																{	/* Unsafe/crc.scm 461 */
																	long BgL_tmpz00_8754;

																	BgL_tmpz00_8754 =
																		(
																		(((long) 1) <<
																			(int) (
																				(BgL_crczd2lenzd2_4917 - ((long) 1)))) -
																		((long) 1));
																	BgL_res2709z00_4945 =
																		(long) (BgL_tmpz00_8754);
																}
																BgL_tmpz00_8750 = BgL_res2709z00_4945;
															}
															BgL_mz00_4918 =
																(
																(((long) 1) <<
																	(int) (
																		(BgL_crczd2lenzd2_4917 - ((long) 1)))) +
																BgL_tmpz00_8750);
														}
														{	/* Unsafe/crc.scm 463 */
															long BgL_lenz00_4924;

															{	/* Unsafe/crc.scm 463 */
																long BgL_res2711z00_4950;

																BgL_res2711z00_4950 =
																	BGL_MMAP_LENGTH(BgL_mz00_79);
																BgL_lenz00_4924 = BgL_res2711z00_4950;
															}
															{
																long BgL_iz00_4926;
																long BgL_crcz00_4927;

																BgL_iz00_4926 = ((long) 0);
																BgL_crcz00_4927 = BgL_initz00_4914;
															BgL_loopz00_4925:
																{	/* Unsafe/crc.scm 466 */
																	bool_t BgL_test3574z00_8762;

																	{	/* Unsafe/crc.scm 466 */
																		long BgL_n2z00_4952;

																		BgL_n2z00_4952 = (long) (BgL_lenz00_4924);
																		BgL_test3574z00_8762 =
																			(BgL_iz00_4926 == BgL_n2z00_4952);
																	}
																	if (BgL_test3574z00_8762)
																		{	/* Unsafe/crc.scm 466 */
																			BgL_res2767z00_5150 =
																				(
																				(BgL_finalzd2xorzd2_4915 ^
																					BgL_crcz00_4927) & BgL_mz00_4918);
																		}
																	else
																		{	/* Unsafe/crc.scm 468 */
																			long BgL_arg1732z00_4930;
																			long BgL_arg1733z00_4931;

																			BgL_arg1732z00_4930 =
																				(BgL_iz00_4926 + ((long) 1));
																			{	/* Unsafe/crc.scm 469 */
																				unsigned char BgL_arg1734z00_4932;

																				{	/* Unsafe/crc.scm 469 */
																					long BgL_tmpz00_8768;

																					BgL_tmpz00_8768 =
																						(long) (BgL_iz00_4926);
																					BgL_arg1734z00_4932 =
																						BGL_MMAP_REF(BgL_mz00_79,
																						BgL_tmpz00_8768);
																				}
																				{	/* Unsafe/crc.scm 469 */
																					long BgL_res2766z00_5149;

																					{	/* Unsafe/crc.scm 469 */
																						unsigned char BgL_cz00_4962;

																						BgL_cz00_4962 =
																							(char) (BgL_arg1734z00_4932);
																						if (
																							(BgL_crczd2lenzd2_4917 >=
																								((long) 8)))
																							{	/* Unsafe/crc.scm 122 */
																								long BgL_octetz00_4967;

																								BgL_octetz00_4967 =
																									(
																									(unsigned
																										char) (BgL_cz00_4962));
																								{	/* Unsafe/crc.scm 123 */
																									long BgL_valuez00_4968;
																									long BgL_mz00_4969;

																									{	/* Unsafe/crc.scm 123 */
																										long BgL_arg1469z00_4970;
																										long BgL_arg1470z00_4971;

																										{	/* Unsafe/crc.scm 123 */
																											long BgL_res2718z00_4992;

																											BgL_res2718z00_4992 =
																												(long)
																												(BgL_octetz00_4967);
																											BgL_arg1469z00_4970 =
																												BgL_res2718z00_4992;
																										}
																										BgL_arg1470z00_4971 =
																											(BgL_crczd2lenzd2_4917 -
																											((long) 8));
																										BgL_valuez00_4968 =
																											(BgL_arg1469z00_4970 <<
																											(int)
																											(BgL_arg1470z00_4971));
																									}
																									BgL_mz00_4969 =
																										(((long) 1) <<
																										(int) (
																											(BgL_crczd2lenzd2_4917 -
																												((long) 1))));
																									{
																										long BgL_iz00_4975;
																										long BgL_crcz00_4976;

																										BgL_iz00_4975 = ((long) 0);
																										BgL_crcz00_4976 =
																											(BgL_crcz00_4927 ^
																											BgL_valuez00_4968);
																									BgL_loopz00_4974:
																										if (
																											(BgL_iz00_4975 ==
																												((long) 8)))
																											{	/* Unsafe/crc.scm 127 */
																												BgL_res2766z00_5149 =
																													BgL_crcz00_4976;
																											}
																										else
																											{	/* Unsafe/crc.scm 129 */
																												long
																													BgL_newzd2crczd2_4978;
																												BgL_newzd2crczd2_4978 =
																													(BgL_crcz00_4976 <<
																													(int) (((long) 1)));
																												if ((((long) 0) ==
																														(BgL_mz00_4969 &
																															BgL_crcz00_4976)))
																													{
																														long
																															BgL_crcz00_8792;
																														long BgL_iz00_8790;

																														BgL_iz00_8790 =
																															(BgL_iz00_4975 +
																															((long) 1));
																														BgL_crcz00_8792 =
																															BgL_newzd2crczd2_4978;
																														BgL_crcz00_4976 =
																															BgL_crcz00_8792;
																														BgL_iz00_4975 =
																															BgL_iz00_8790;
																														goto
																															BgL_loopz00_4974;
																													}
																												else
																													{
																														long
																															BgL_crcz00_8795;
																														long BgL_iz00_8793;

																														BgL_iz00_8793 =
																															(BgL_iz00_4975 +
																															((long) 1));
																														BgL_crcz00_8795 =
																															(BgL_newzd2crczd2_4978
																															^
																															BgL_polyz00_4916);
																														BgL_crcz00_4976 =
																															BgL_crcz00_8795;
																														BgL_iz00_4975 =
																															BgL_iz00_8793;
																														goto
																															BgL_loopz00_4974;
																													}
																											}
																									}
																								}
																							}
																						else
																							{	/* Unsafe/crc.scm 133 */
																								long BgL_arg1472z00_4984;

																								{	/* Unsafe/crc.scm 133 */
																									long BgL_arg1473z00_4985;
																									long BgL_arg1474z00_4986;

																									{	/* Unsafe/crc.scm 133 */
																										long BgL_res2731z00_5024;

																										BgL_res2731z00_5024 =
																											(long) (BgL_crcz00_4927);
																										BgL_arg1473z00_4985 =
																											BgL_res2731z00_5024;
																									}
																									{	/* Unsafe/crc.scm 133 */
																										long BgL_res2732z00_5026;

																										BgL_res2732z00_5026 =
																											(long) (BgL_polyz00_4916);
																										BgL_arg1474z00_4986 =
																											BgL_res2732z00_5026;
																									}
																									{

																										if (
																											(BgL_crczd2lenzd2_4917 >=
																												((long) 8)))
																											{	/* Unsafe/crc.scm 111 */
																												{	/* Unsafe/crc.scm 76 */
																													long BgL_mz00_5036;

																													BgL_mz00_5036 =
																														(((long) 1) <<
																														(int) (
																															(BgL_crczd2lenzd2_4917
																																- ((long) 1))));
																													{	/* Unsafe/crc.scm 77 */

																														{
																															long
																																BgL_iz00_5040;
																															long
																																BgL_crcz00_5041;
																															BgL_iz00_5040 =
																																((long) 0);
																															BgL_crcz00_5041 =
																																(BgL_arg1473z00_4985
																																^ (((unsigned
																																			char)
																																		(BgL_cz00_4962))
																																	<<
																																	(int) (
																																		(BgL_crczd2lenzd2_4917
																																			-
																																			((long)
																																				8)))));
																														BgL_loopz00_5039:
																															if (
																																(BgL_iz00_5040
																																	==
																																	((long) 8)))
																																{	/* Unsafe/crc.scm 80 */
																																	BgL_arg1472z00_4984
																																		=
																																		BgL_crcz00_5041;
																																}
																															else
																																{
																																	long
																																		BgL_crcz00_8809;
																																	long
																																		BgL_iz00_8807;
																																	BgL_iz00_8807
																																		=
																																		(BgL_iz00_5040
																																		+
																																		((long) 1));
																																	BgL_crcz00_8809
																																		=
																																		((((BgL_mz00_5036 & BgL_crcz00_5041) >> (int) ((BgL_crczd2lenzd2_4917 - ((long) 1)))) * BgL_arg1474z00_4986) ^ (BgL_crcz00_5041 << (int) (((long) 1))));
																																	BgL_crcz00_5041
																																		=
																																		BgL_crcz00_8809;
																																	BgL_iz00_5040
																																		=
																																		BgL_iz00_8807;
																																	goto
																																		BgL_loopz00_5039;
																																}
																														}
																													}
																												}
																											}
																										else
																											{	/* Unsafe/crc.scm 111 */
																												{	/* Unsafe/crc.scm 92 */
																													long BgL_mz00_5051;

																													BgL_mz00_5051 =
																														(((long) 1) <<
																														(int) (
																															(BgL_crczd2lenzd2_4917
																																- ((long) 1))));
																													{	/* Unsafe/crc.scm 94 */

																														{
																															long
																																BgL_iz00_5055;
																															long
																																BgL_crcz00_5056;
																															long
																																BgL_shiftedzd2valuezd2_5057;
																															BgL_iz00_5055 =
																																((long) 0);
																															BgL_crcz00_5056 =
																																BgL_arg1473z00_4985;
																															BgL_shiftedzd2valuezd2_5057
																																=
																																(((unsigned
																																		char)
																																	(BgL_cz00_4962))
																																<<
																																(int)
																																(BgL_crczd2lenzd2_4917));
																														BgL_loopz00_5054:
																															if (
																																(BgL_iz00_5055
																																	==
																																	((long) 8)))
																																{	/* Unsafe/crc.scm 98 */
																																	BgL_arg1472z00_4984
																																		=
																																		BgL_crcz00_5056;
																																}
																															else
																																{	/* Unsafe/crc.scm 100 */
																																	long
																																		BgL_crc2z00_5059;
																																	BgL_crc2z00_5059
																																		=
																																		(BgL_crcz00_5056
																																		^
																																		(BgL_mz00_5051
																																			&
																																			(BgL_shiftedzd2valuezd2_5057
																																				>>
																																				(int) ((
																																						(long)
																																						8)))));
																																	{	/* Unsafe/crc.scm 104 */

																																		{
																																			long
																																				BgL_shiftedzd2valuezd2_8844;
																																			long
																																				BgL_crcz00_8835;
																																			long
																																				BgL_iz00_8833;
																																			BgL_iz00_8833
																																				=
																																				(BgL_iz00_5055
																																				+
																																				((long)
																																					1));
																																			BgL_crcz00_8835
																																				=
																																				((((BgL_mz00_5051 & BgL_crc2z00_5059) >> (int) ((BgL_crczd2lenzd2_4917 - ((long) 1)))) * BgL_arg1474z00_4986) ^ (BgL_crc2z00_5059 << (int) (((long) 1))));
																																			BgL_shiftedzd2valuezd2_8844
																																				=
																																				(BgL_shiftedzd2valuezd2_5057
																																				<<
																																				(int) ((
																																						(long)
																																						1)));
																																			BgL_shiftedzd2valuezd2_5057
																																				=
																																				BgL_shiftedzd2valuezd2_8844;
																																			BgL_crcz00_5056
																																				=
																																				BgL_crcz00_8835;
																																			BgL_iz00_5055
																																				=
																																				BgL_iz00_8833;
																																			goto
																																				BgL_loopz00_5054;
																																		}
																																	}
																																}
																														}
																													}
																												}
																											}
																									}
																								}
																								{	/* Unsafe/crc.scm 133 */
																									long BgL_res2765z00_5148;

																									BgL_res2765z00_5148 =
																										(long)
																										(BgL_arg1472z00_4984);
																									BgL_res2766z00_5149 =
																										BgL_res2765z00_5148;
																					}}}
																					BgL_arg1733z00_4931 =
																						BgL_res2766z00_5149;
																			}}
																			{
																				long BgL_crcz00_8853;
																				long BgL_iz00_8852;

																				BgL_iz00_8852 = BgL_arg1732z00_4930;
																				BgL_crcz00_8853 = BgL_arg1733z00_4931;
																				BgL_crcz00_4927 = BgL_crcz00_8853;
																				BgL_iz00_4926 = BgL_iz00_8852;
																				goto BgL_loopz00_4925;
																			}
																		}
																}
															}
														}
													}
												}
												return make_belong(BgL_res2767z00_5150);
											}
										}
									else
										{	/* Unsafe/crc.scm 420 */
											obj_t BgL_arg1708z00_1924;
											obj_t BgL_arg1709z00_1925;

											if (INTEGERP(BgL_initz00_80))
												{	/* Unsafe/crc.scm 367 */
													long BgL_res2769z00_5154;

													{	/* Unsafe/crc.scm 367 */
														long BgL_tmpz00_8857;

														BgL_tmpz00_8857 = (long) CINT(BgL_initz00_80);
														BgL_res2769z00_5154 = (long) (BgL_tmpz00_8857);
													}
													BgL_arg1708z00_1924 =
														make_belong(BgL_res2769z00_5154);
												}
											else
												{	/* Unsafe/crc.scm 366 */
													BgL_arg1708z00_1924 = BgL_initz00_80;
												}
											if (INTEGERP(BgL_finalzd2xorzd2_81))
												{	/* Unsafe/crc.scm 367 */
													long BgL_res2771z00_5158;

													{	/* Unsafe/crc.scm 367 */
														long BgL_tmpz00_8863;

														BgL_tmpz00_8863 =
															(long) CINT(BgL_finalzd2xorzd2_81);
														BgL_res2771z00_5158 = (long) (BgL_tmpz00_8863);
													}
													BgL_arg1709z00_1925 =
														make_belong(BgL_res2771z00_5158);
												}
											else
												{	/* Unsafe/crc.scm 366 */
													BgL_arg1709z00_1925 = BgL_finalzd2xorzd2_81;
												}
											{	/* Unsafe/crc.scm 420 */
												long BgL_res2793z00_5246;

												{	/* Unsafe/crc.scm 420 */
													long BgL_initz00_5159;
													long BgL_finalzd2xorzd2_5160;
													long BgL_polyz00_5161;
													long BgL_crczd2lenzd2_5162;

													BgL_initz00_5159 =
														BELONG_TO_LONG(BgL_arg1708z00_1924);
													BgL_finalzd2xorzd2_5160 =
														BELONG_TO_LONG(BgL_arg1709z00_1925);
													BgL_polyz00_5161 =
														BELONG_TO_LONG(BgL_lsbzd2polyzd2_1919);
													BgL_crczd2lenzd2_5162 = (long) CINT(BgL_lenz00_1917);
													{	/* Unsafe/crc.scm 457 */
														long BgL_mz00_5163;

														{	/* Unsafe/crc.scm 460 */
															long BgL_tmpz00_8871;

															{	/* Unsafe/crc.scm 461 */
																long BgL_res2776z00_5190;

																{	/* Unsafe/crc.scm 461 */
																	long BgL_tmpz00_8875;

																	BgL_tmpz00_8875 =
																		(
																		(((long) 1) <<
																			(int) (
																				(BgL_crczd2lenzd2_5162 - ((long) 1)))) -
																		((long) 1));
																	BgL_res2776z00_5190 =
																		(long) (BgL_tmpz00_8875);
																}
																BgL_tmpz00_8871 = BgL_res2776z00_5190;
															}
															BgL_mz00_5163 =
																(
																(((long) 1) <<
																	(int) (
																		(BgL_crczd2lenzd2_5162 - ((long) 1)))) +
																BgL_tmpz00_8871);
														}
														{	/* Unsafe/crc.scm 463 */
															long BgL_lenz00_5169;

															{	/* Unsafe/crc.scm 463 */
																long BgL_res2778z00_5195;

																BgL_res2778z00_5195 =
																	BGL_MMAP_LENGTH(BgL_mz00_79);
																BgL_lenz00_5169 = BgL_res2778z00_5195;
															}
															{
																long BgL_iz00_5171;
																long BgL_crcz00_5172;

																BgL_iz00_5171 = ((long) 0);
																BgL_crcz00_5172 = BgL_initz00_5159;
															BgL_loopz00_5170:
																{	/* Unsafe/crc.scm 466 */
																	bool_t BgL_test3583z00_8883;

																	{	/* Unsafe/crc.scm 466 */
																		long BgL_n2z00_5197;

																		BgL_n2z00_5197 = (long) (BgL_lenz00_5169);
																		BgL_test3583z00_8883 =
																			(BgL_iz00_5171 == BgL_n2z00_5197);
																	}
																	if (BgL_test3583z00_8883)
																		{	/* Unsafe/crc.scm 466 */
																			BgL_res2793z00_5246 =
																				(
																				(BgL_finalzd2xorzd2_5160 ^
																					BgL_crcz00_5172) & BgL_mz00_5163);
																		}
																	else
																		{	/* Unsafe/crc.scm 468 */
																			long BgL_arg1732z00_5175;
																			long BgL_arg1733z00_5176;

																			BgL_arg1732z00_5175 =
																				(BgL_iz00_5171 + ((long) 1));
																			{	/* Unsafe/crc.scm 469 */
																				unsigned char BgL_arg1734z00_5177;

																				{	/* Unsafe/crc.scm 469 */
																					long BgL_tmpz00_8889;

																					BgL_tmpz00_8889 =
																						(long) (BgL_iz00_5171);
																					BgL_arg1734z00_5177 =
																						BGL_MMAP_REF(BgL_mz00_79,
																						BgL_tmpz00_8889);
																				}
																				{	/* Unsafe/crc.scm 469 */
																					long BgL_res2792z00_5245;

																					{	/* Unsafe/crc.scm 469 */
																						unsigned char BgL_cz00_5207;

																						BgL_cz00_5207 =
																							(char) (BgL_arg1734z00_5177);
																						{	/* Unsafe/crc.scm 175 */
																							long BgL_octetz00_5211;

																							BgL_octetz00_5211 =
																								(
																								(unsigned
																									char) (BgL_cz00_5207));
																							{	/* Unsafe/crc.scm 176 */
																								long BgL_g1043z00_5212;

																								{	/* Unsafe/crc.scm 177 */
																									long BgL_arg1509z00_5213;

																									{	/* Unsafe/crc.scm 177 */
																										long BgL_res2784z00_5226;

																										BgL_res2784z00_5226 =
																											(long)
																											(BgL_octetz00_5211);
																										BgL_arg1509z00_5213 =
																											BgL_res2784z00_5226;
																									}
																									BgL_g1043z00_5212 =
																										(BgL_crcz00_5172 ^
																										BgL_arg1509z00_5213);
																								}
																								{
																									long BgL_iz00_5215;
																									long BgL_crcz00_5216;

																									BgL_iz00_5215 = ((long) 0);
																									BgL_crcz00_5216 =
																										BgL_g1043z00_5212;
																								BgL_loopz00_5214:
																									if (
																										(BgL_iz00_5215 ==
																											((long) 8)))
																										{	/* Unsafe/crc.scm 178 */
																											BgL_res2792z00_5245 =
																												BgL_crcz00_5216;
																										}
																									else
																										{	/* Unsafe/crc.scm 180 */
																											long
																												BgL_newzd2crczd2_5218;
																											{	/* Unsafe/crc.scm 180 */
																												unsigned long
																													BgL_xz00_5232;
																												BgL_xz00_5232 =
																													(unsigned
																													long)
																													(BgL_crcz00_5216);
																												{	/* Unsafe/crc.scm 180 */
																													unsigned long
																														BgL_tmpz00_8900;
																													BgL_tmpz00_8900 =
																														(BgL_xz00_5232 >>
																														(int) (((long) 1)));
																													BgL_newzd2crczd2_5218
																														=
																														(long)
																														(BgL_tmpz00_8900);
																											}}
																											{
																												long BgL_crcz00_8906;
																												long BgL_iz00_8904;

																												BgL_iz00_8904 =
																													(BgL_iz00_5215 +
																													((long) 1));
																												BgL_crcz00_8906 =
																													(((((long) 1) &
																															BgL_crcz00_5216) *
																														BgL_polyz00_5161) ^
																													BgL_newzd2crczd2_5218);
																												BgL_crcz00_5216 =
																													BgL_crcz00_8906;
																												BgL_iz00_5215 =
																													BgL_iz00_8904;
																												goto BgL_loopz00_5214;
																											}
																										}
																								}
																							}
																						}
																					}
																					BgL_arg1733z00_5176 =
																						BgL_res2792z00_5245;
																				}
																			}
																			{
																				long BgL_crcz00_8911;
																				long BgL_iz00_8910;

																				BgL_iz00_8910 = BgL_arg1732z00_5175;
																				BgL_crcz00_8911 = BgL_arg1733z00_5176;
																				BgL_crcz00_5172 = BgL_crcz00_8911;
																				BgL_iz00_5171 = BgL_iz00_8910;
																				goto BgL_loopz00_5170;
																			}
																		}
																}
															}
														}
													}
												}
												return make_belong(BgL_res2793z00_5246);
											}
										}
								}
							else
								{	/* Unsafe/crc.scm 416 */
									if (LLONGP(BgL_polyz00_1918))
										{	/* Unsafe/crc.scm 422 */
											if (CBOOL(BgL_bigzd2endianzf3z21_82))
												{	/* Unsafe/crc.scm 424 */
													obj_t BgL_arg1711z00_1927;
													obj_t BgL_arg1712z00_1928;

													if (INTEGERP(BgL_initz00_80))
														{	/* Unsafe/crc.scm 375 */
															BGL_LONGLONG_T BgL_res2796z00_5252;

															{	/* Unsafe/crc.scm 375 */
																long BgL_tmpz00_8919;

																BgL_tmpz00_8919 = (long) CINT(BgL_initz00_80);
																BgL_res2796z00_5252 =
																	LONG_TO_LLONG(BgL_tmpz00_8919);
															}
															BgL_arg1711z00_1927 =
																make_bllong(BgL_res2796z00_5252);
														}
													else
														{	/* Unsafe/crc.scm 375 */
															if (ELONGP(BgL_initz00_80))
																{	/* Unsafe/crc.scm 376 */
																	long BgL_xz00_5254;

																	BgL_xz00_5254 =
																		BELONG_TO_LONG(BgL_initz00_80);
																	BgL_arg1711z00_1927 =
																		make_bllong(
																		(BGL_LONGLONG_T) (BgL_xz00_5254));
																}
															else
																{	/* Unsafe/crc.scm 376 */
																	BgL_arg1711z00_1927 = BgL_initz00_80;
																}
														}
													if (INTEGERP(BgL_finalzd2xorzd2_81))
														{	/* Unsafe/crc.scm 375 */
															BGL_LONGLONG_T BgL_res2800z00_5260;

															{	/* Unsafe/crc.scm 375 */
																long BgL_tmpz00_8930;

																BgL_tmpz00_8930 =
																	(long) CINT(BgL_finalzd2xorzd2_81);
																BgL_res2800z00_5260 =
																	LONG_TO_LLONG(BgL_tmpz00_8930);
															}
															BgL_arg1712z00_1928 =
																make_bllong(BgL_res2800z00_5260);
														}
													else
														{	/* Unsafe/crc.scm 375 */
															if (ELONGP(BgL_finalzd2xorzd2_81))
																{	/* Unsafe/crc.scm 376 */
																	long BgL_xz00_5262;

																	BgL_xz00_5262 =
																		BELONG_TO_LONG(BgL_finalzd2xorzd2_81);
																	BgL_arg1712z00_1928 =
																		make_bllong(
																		(BGL_LONGLONG_T) (BgL_xz00_5262));
																}
															else
																{	/* Unsafe/crc.scm 376 */
																	BgL_arg1712z00_1928 = BgL_finalzd2xorzd2_81;
																}
														}
													{	/* Unsafe/crc.scm 424 */
														BGL_LONGLONG_T BgL_res2865z00_5500;

														{	/* Unsafe/crc.scm 424 */
															BGL_LONGLONG_T BgL_initz00_5264;
															BGL_LONGLONG_T BgL_finalzd2xorzd2_5265;
															BGL_LONGLONG_T BgL_polyz00_5266;
															long BgL_crczd2lenzd2_5267;

															BgL_initz00_5264 =
																BLLONG_TO_LLONG(BgL_arg1711z00_1927);
															BgL_finalzd2xorzd2_5265 =
																BLLONG_TO_LLONG(BgL_arg1712z00_1928);
															BgL_polyz00_5266 =
																BLLONG_TO_LLONG(BgL_polyz00_1918);
															BgL_crczd2lenzd2_5267 =
																(long) CINT(BgL_lenz00_1917);
															{	/* Unsafe/crc.scm 477 */
																BGL_LONGLONG_T BgL_mz00_5268;

																BgL_mz00_5268 =
																	(
																	(((BGL_LONGLONG_T) 1) <<
																		(int) (
																			(BgL_crczd2lenzd2_5267 - ((long) 1)))) +
																	((((BGL_LONGLONG_T) 1) <<
																			(int) (
																				(BgL_crczd2lenzd2_5267 - ((long) 1)))) -
																		((BGL_LONGLONG_T) 1)));
																{	/* Unsafe/crc.scm 483 */
																	long BgL_lenz00_5274;

																	{	/* Unsafe/crc.scm 483 */
																		long BgL_res2809z00_5300;

																		BgL_res2809z00_5300 =
																			BGL_MMAP_LENGTH(BgL_mz00_79);
																		BgL_lenz00_5274 = BgL_res2809z00_5300;
																	}
																	{
																		long BgL_iz00_5276;
																		BGL_LONGLONG_T BgL_crcz00_5277;

																		BgL_iz00_5276 = ((long) 0);
																		BgL_crcz00_5277 = BgL_initz00_5264;
																	BgL_loopz00_5275:
																		{	/* Unsafe/crc.scm 486 */
																			bool_t BgL_test3591z00_8952;

																			{	/* Unsafe/crc.scm 486 */
																				long BgL_n2z00_5302;

																				BgL_n2z00_5302 =
																					(long) (BgL_lenz00_5274);
																				BgL_test3591z00_8952 =
																					(BgL_iz00_5276 == BgL_n2z00_5302);
																			}
																			if (BgL_test3591z00_8952)
																				{	/* Unsafe/crc.scm 486 */
																					BgL_res2865z00_5500 =
																						(
																						(BgL_finalzd2xorzd2_5265 ^
																							BgL_crcz00_5277) & BgL_mz00_5268);
																				}
																			else
																				{	/* Unsafe/crc.scm 488 */
																					long BgL_arg1744z00_5280;
																					BGL_LONGLONG_T BgL_arg1745z00_5281;

																					BgL_arg1744z00_5280 =
																						(BgL_iz00_5276 + ((long) 1));
																					{	/* Unsafe/crc.scm 489 */
																						unsigned char BgL_arg1746z00_5282;

																						{	/* Unsafe/crc.scm 489 */
																							long BgL_tmpz00_8958;

																							BgL_tmpz00_8958 =
																								(long) (BgL_iz00_5276);
																							BgL_arg1746z00_5282 =
																								BGL_MMAP_REF(BgL_mz00_79,
																								BgL_tmpz00_8958);
																						}
																						{	/* Unsafe/crc.scm 489 */
																							BGL_LONGLONG_T
																								BgL_res2864z00_5499;
																							{	/* Unsafe/crc.scm 489 */
																								unsigned char BgL_cz00_5312;

																								BgL_cz00_5312 =
																									(char) (BgL_arg1746z00_5282);
																								if (
																									(BgL_crczd2lenzd2_5267 >=
																										((long) 8)))
																									{	/* Unsafe/crc.scm 142 */
																										long BgL_octetz00_5317;

																										BgL_octetz00_5317 =
																											(
																											(unsigned
																												char) (BgL_cz00_5312));
																										{	/* Unsafe/crc.scm 143 */
																											BGL_LONGLONG_T
																												BgL_valuez00_5318;
																											BGL_LONGLONG_T
																												BgL_mz00_5319;
																											{	/* Unsafe/crc.scm 143 */
																												BGL_LONGLONG_T
																													BgL_arg1486z00_5320;
																												long
																													BgL_arg1487z00_5321;
																												{	/* Unsafe/crc.scm 143 */
																													BGL_LONGLONG_T
																														BgL_res2816z00_5342;
																													BgL_res2816z00_5342 =
																														LONG_TO_LLONG
																														(BgL_octetz00_5317);
																													BgL_arg1486z00_5320 =
																														BgL_res2816z00_5342;
																												}
																												BgL_arg1487z00_5321 =
																													(BgL_crczd2lenzd2_5267
																													- ((long) 8));
																												BgL_valuez00_5318 =
																													(BgL_arg1486z00_5320
																													<<
																													(int)
																													(BgL_arg1487z00_5321));
																											}
																											BgL_mz00_5319 =
																												(((BGL_LONGLONG_T) 1) <<
																												(int) (
																													(BgL_crczd2lenzd2_5267
																														- ((long) 1))));
																											{
																												long BgL_iz00_5325;
																												BGL_LONGLONG_T
																													BgL_crcz00_5326;
																												BgL_iz00_5325 =
																													((long) 0);
																												BgL_crcz00_5326 =
																													(BgL_crcz00_5277 ^
																													BgL_valuez00_5318);
																											BgL_loopz00_5324:
																												if (
																													(BgL_iz00_5325 ==
																														((long) 8)))
																													{	/* Unsafe/crc.scm 147 */
																														BgL_res2864z00_5499
																															= BgL_crcz00_5326;
																													}
																												else
																													{	/* Unsafe/crc.scm 149 */
																														BGL_LONGLONG_T
																															BgL_newzd2crczd2_5328;
																														BgL_newzd2crczd2_5328
																															=
																															(BgL_crcz00_5326
																															<< (int) (((long)
																																	1)));
																														if ((((BGL_LONGLONG_T) 0) == (BgL_mz00_5319 & BgL_crcz00_5326)))
																															{
																																BGL_LONGLONG_T
																																	BgL_crcz00_8982;
																																long
																																	BgL_iz00_8980;
																																BgL_iz00_8980 =
																																	(BgL_iz00_5325
																																	+ ((long) 1));
																																BgL_crcz00_8982
																																	=
																																	BgL_newzd2crczd2_5328;
																																BgL_crcz00_5326
																																	=
																																	BgL_crcz00_8982;
																																BgL_iz00_5325 =
																																	BgL_iz00_8980;
																																goto
																																	BgL_loopz00_5324;
																															}
																														else
																															{
																																BGL_LONGLONG_T
																																	BgL_crcz00_8985;
																																long
																																	BgL_iz00_8983;
																																BgL_iz00_8983 =
																																	(BgL_iz00_5325
																																	+ ((long) 1));
																																BgL_crcz00_8985
																																	=
																																	(BgL_newzd2crczd2_5328
																																	^
																																	BgL_polyz00_5266);
																																BgL_crcz00_5326
																																	=
																																	BgL_crcz00_8985;
																																BgL_iz00_5325 =
																																	BgL_iz00_8983;
																																goto
																																	BgL_loopz00_5324;
																															}
																													}
																											}
																										}
																									}
																								else
																									{	/* Unsafe/crc.scm 153 */
																										long BgL_arg1491z00_5334;

																										{	/* Unsafe/crc.scm 153 */
																											long BgL_arg1492z00_5335;
																											long BgL_arg1493z00_5336;

																											{	/* Unsafe/crc.scm 153 */
																												long
																													BgL_res2829z00_5374;
																												BgL_res2829z00_5374 =
																													LLONG_TO_LONG
																													(BgL_crcz00_5277);
																												BgL_arg1492z00_5335 =
																													BgL_res2829z00_5374;
																											}
																											{	/* Unsafe/crc.scm 153 */
																												long
																													BgL_res2830z00_5376;
																												BgL_res2830z00_5376 =
																													LLONG_TO_LONG
																													(BgL_polyz00_5266);
																												BgL_arg1493z00_5336 =
																													BgL_res2830z00_5376;
																											}
																											{

																												if (
																													(BgL_crczd2lenzd2_5267
																														>= ((long) 8)))
																													{	/* Unsafe/crc.scm 111 */
																														{	/* Unsafe/crc.scm 76 */
																															long
																																BgL_mz00_5386;
																															BgL_mz00_5386 =
																																(((long) 1) <<
																																(int) (
																																	(BgL_crczd2lenzd2_5267
																																		-
																																		((long)
																																			1))));
																															{	/* Unsafe/crc.scm 77 */

																																{
																																	long
																																		BgL_iz00_5390;
																																	long
																																		BgL_crcz00_5391;
																																	BgL_iz00_5390
																																		=
																																		((long) 0);
																																	BgL_crcz00_5391
																																		=
																																		(BgL_arg1492z00_5335
																																		^
																																		(((unsigned
																																					char)
																																				(BgL_cz00_5312))
																																			<<
																																			(int) (
																																				(BgL_crczd2lenzd2_5267
																																					-
																																					((long) 8)))));
																																BgL_loopz00_5389:
																																	if (
																																		(BgL_iz00_5390
																																			==
																																			((long)
																																				8)))
																																		{	/* Unsafe/crc.scm 80 */
																																			BgL_arg1491z00_5334
																																				=
																																				BgL_crcz00_5391;
																																		}
																																	else
																																		{
																																			long
																																				BgL_crcz00_8999;
																																			long
																																				BgL_iz00_8997;
																																			BgL_iz00_8997
																																				=
																																				(BgL_iz00_5390
																																				+
																																				((long)
																																					1));
																																			BgL_crcz00_8999
																																				=
																																				((((BgL_mz00_5386 & BgL_crcz00_5391) >> (int) ((BgL_crczd2lenzd2_5267 - ((long) 1)))) * BgL_arg1493z00_5336) ^ (BgL_crcz00_5391 << (int) (((long) 1))));
																																			BgL_crcz00_5391
																																				=
																																				BgL_crcz00_8999;
																																			BgL_iz00_5390
																																				=
																																				BgL_iz00_8997;
																																			goto
																																				BgL_loopz00_5389;
																																		}
																																}
																															}
																														}
																													}
																												else
																													{	/* Unsafe/crc.scm 111 */
																														{	/* Unsafe/crc.scm 92 */
																															long
																																BgL_mz00_5401;
																															BgL_mz00_5401 =
																																(((long) 1) <<
																																(int) (
																																	(BgL_crczd2lenzd2_5267
																																		-
																																		((long)
																																			1))));
																															{	/* Unsafe/crc.scm 94 */

																																{
																																	long
																																		BgL_iz00_5405;
																																	long
																																		BgL_crcz00_5406;
																																	long
																																		BgL_shiftedzd2valuezd2_5407;
																																	BgL_iz00_5405
																																		=
																																		((long) 0);
																																	BgL_crcz00_5406
																																		=
																																		BgL_arg1492z00_5335;
																																	BgL_shiftedzd2valuezd2_5407
																																		=
																																		(((unsigned
																																				char)
																																			(BgL_cz00_5312))
																																		<<
																																		(int)
																																		(BgL_crczd2lenzd2_5267));
																																BgL_loopz00_5404:
																																	if (
																																		(BgL_iz00_5405
																																			==
																																			((long)
																																				8)))
																																		{	/* Unsafe/crc.scm 98 */
																																			BgL_arg1491z00_5334
																																				=
																																				BgL_crcz00_5406;
																																		}
																																	else
																																		{	/* Unsafe/crc.scm 100 */
																																			long
																																				BgL_crc2z00_5409;
																																			BgL_crc2z00_5409
																																				=
																																				(BgL_crcz00_5406
																																				^
																																				(BgL_mz00_5401
																																					&
																																					(BgL_shiftedzd2valuezd2_5407
																																						>>
																																						(int)
																																						(((long) 8)))));
																																			{	/* Unsafe/crc.scm 104 */

																																				{
																																					long
																																						BgL_shiftedzd2valuezd2_9034;
																																					long
																																						BgL_crcz00_9025;
																																					long
																																						BgL_iz00_9023;
																																					BgL_iz00_9023
																																						=
																																						(BgL_iz00_5405
																																						+
																																						((long) 1));
																																					BgL_crcz00_9025
																																						=
																																						((((BgL_mz00_5401 & BgL_crc2z00_5409) >> (int) ((BgL_crczd2lenzd2_5267 - ((long) 1)))) * BgL_arg1493z00_5336) ^ (BgL_crc2z00_5409 << (int) (((long) 1))));
																																					BgL_shiftedzd2valuezd2_9034
																																						=
																																						(BgL_shiftedzd2valuezd2_5407
																																						<<
																																						(int)
																																						(((long) 1)));
																																					BgL_shiftedzd2valuezd2_5407
																																						=
																																						BgL_shiftedzd2valuezd2_9034;
																																					BgL_crcz00_5406
																																						=
																																						BgL_crcz00_9025;
																																					BgL_iz00_5405
																																						=
																																						BgL_iz00_9023;
																																					goto
																																						BgL_loopz00_5404;
																																				}
																																			}
																																		}
																																}
																															}
																														}
																													}
																											}
																										}
																										{	/* Unsafe/crc.scm 153 */
																											BGL_LONGLONG_T
																												BgL_res2863z00_5498;
																											BgL_res2863z00_5498 =
																												LONG_TO_LLONG
																												(BgL_arg1491z00_5334);
																											BgL_res2864z00_5499 =
																												BgL_res2863z00_5498;
																										}
																									}
																							}
																							BgL_arg1745z00_5281 =
																								BgL_res2864z00_5499;
																						}
																					}
																					{
																						BGL_LONGLONG_T BgL_crcz00_9043;
																						long BgL_iz00_9042;

																						BgL_iz00_9042 = BgL_arg1744z00_5280;
																						BgL_crcz00_9043 =
																							BgL_arg1745z00_5281;
																						BgL_crcz00_5277 = BgL_crcz00_9043;
																						BgL_iz00_5276 = BgL_iz00_9042;
																						goto BgL_loopz00_5275;
																					}
																				}
																		}
																	}
																}
															}
														}
														return make_bllong(BgL_res2865z00_5500);
													}
												}
											else
												{	/* Unsafe/crc.scm 426 */
													obj_t BgL_arg1713z00_1929;
													obj_t BgL_arg1716z00_1930;

													if (INTEGERP(BgL_initz00_80))
														{	/* Unsafe/crc.scm 375 */
															BGL_LONGLONG_T BgL_res2867z00_5505;

															{	/* Unsafe/crc.scm 375 */
																long BgL_tmpz00_9047;

																BgL_tmpz00_9047 = (long) CINT(BgL_initz00_80);
																BgL_res2867z00_5505 =
																	LONG_TO_LLONG(BgL_tmpz00_9047);
															}
															BgL_arg1713z00_1929 =
																make_bllong(BgL_res2867z00_5505);
														}
													else
														{	/* Unsafe/crc.scm 375 */
															if (ELONGP(BgL_initz00_80))
																{	/* Unsafe/crc.scm 376 */
																	long BgL_xz00_5507;

																	BgL_xz00_5507 =
																		BELONG_TO_LONG(BgL_initz00_80);
																	BgL_arg1713z00_1929 =
																		make_bllong(
																		(BGL_LONGLONG_T) (BgL_xz00_5507));
																}
															else
																{	/* Unsafe/crc.scm 376 */
																	BgL_arg1713z00_1929 = BgL_initz00_80;
																}
														}
													if (INTEGERP(BgL_finalzd2xorzd2_81))
														{	/* Unsafe/crc.scm 375 */
															BGL_LONGLONG_T BgL_res2871z00_5513;

															{	/* Unsafe/crc.scm 375 */
																long BgL_tmpz00_9058;

																BgL_tmpz00_9058 =
																	(long) CINT(BgL_finalzd2xorzd2_81);
																BgL_res2871z00_5513 =
																	LONG_TO_LLONG(BgL_tmpz00_9058);
															}
															BgL_arg1716z00_1930 =
																make_bllong(BgL_res2871z00_5513);
														}
													else
														{	/* Unsafe/crc.scm 375 */
															if (ELONGP(BgL_finalzd2xorzd2_81))
																{	/* Unsafe/crc.scm 376 */
																	long BgL_xz00_5515;

																	BgL_xz00_5515 =
																		BELONG_TO_LONG(BgL_finalzd2xorzd2_81);
																	BgL_arg1716z00_1930 =
																		make_bllong(
																		(BGL_LONGLONG_T) (BgL_xz00_5515));
																}
															else
																{	/* Unsafe/crc.scm 376 */
																	BgL_arg1716z00_1930 = BgL_finalzd2xorzd2_81;
																}
														}
													{	/* Unsafe/crc.scm 426 */
														BGL_LONGLONG_T BgL_res2895z00_5604;

														{	/* Unsafe/crc.scm 426 */
															BGL_LONGLONG_T BgL_initz00_5517;
															BGL_LONGLONG_T BgL_finalzd2xorzd2_5518;
															BGL_LONGLONG_T BgL_polyz00_5519;
															long BgL_crczd2lenzd2_5520;

															BgL_initz00_5517 =
																BLLONG_TO_LLONG(BgL_arg1713z00_1929);
															BgL_finalzd2xorzd2_5518 =
																BLLONG_TO_LLONG(BgL_arg1716z00_1930);
															BgL_polyz00_5519 =
																BLLONG_TO_LLONG(BgL_lsbzd2polyzd2_1919);
															BgL_crczd2lenzd2_5520 =
																(long) CINT(BgL_lenz00_1917);
															{	/* Unsafe/crc.scm 477 */
																BGL_LONGLONG_T BgL_mz00_5521;

																BgL_mz00_5521 =
																	(
																	(((BGL_LONGLONG_T) 1) <<
																		(int) (
																			(BgL_crczd2lenzd2_5520 - ((long) 1)))) +
																	((((BGL_LONGLONG_T) 1) <<
																			(int) (
																				(BgL_crczd2lenzd2_5520 - ((long) 1)))) -
																		((BGL_LONGLONG_T) 1)));
																{	/* Unsafe/crc.scm 483 */
																	long BgL_lenz00_5527;

																	{	/* Unsafe/crc.scm 483 */
																		long BgL_res2880z00_5553;

																		BgL_res2880z00_5553 =
																			BGL_MMAP_LENGTH(BgL_mz00_79);
																		BgL_lenz00_5527 = BgL_res2880z00_5553;
																	}
																	{
																		long BgL_iz00_5529;
																		BGL_LONGLONG_T BgL_crcz00_5530;

																		BgL_iz00_5529 = ((long) 0);
																		BgL_crcz00_5530 = BgL_initz00_5517;
																	BgL_loopz00_5528:
																		{	/* Unsafe/crc.scm 486 */
																			bool_t BgL_test3602z00_9080;

																			{	/* Unsafe/crc.scm 486 */
																				long BgL_n2z00_5555;

																				BgL_n2z00_5555 =
																					(long) (BgL_lenz00_5527);
																				BgL_test3602z00_9080 =
																					(BgL_iz00_5529 == BgL_n2z00_5555);
																			}
																			if (BgL_test3602z00_9080)
																				{	/* Unsafe/crc.scm 486 */
																					BgL_res2895z00_5604 =
																						(
																						(BgL_finalzd2xorzd2_5518 ^
																							BgL_crcz00_5530) & BgL_mz00_5521);
																				}
																			else
																				{	/* Unsafe/crc.scm 488 */
																					long BgL_arg1744z00_5533;
																					BGL_LONGLONG_T BgL_arg1745z00_5534;

																					BgL_arg1744z00_5533 =
																						(BgL_iz00_5529 + ((long) 1));
																					{	/* Unsafe/crc.scm 489 */
																						unsigned char BgL_arg1746z00_5535;

																						{	/* Unsafe/crc.scm 489 */
																							long BgL_tmpz00_9086;

																							BgL_tmpz00_9086 =
																								(long) (BgL_iz00_5529);
																							BgL_arg1746z00_5535 =
																								BGL_MMAP_REF(BgL_mz00_79,
																								BgL_tmpz00_9086);
																						}
																						{	/* Unsafe/crc.scm 489 */
																							BGL_LONGLONG_T
																								BgL_res2894z00_5603;
																							{	/* Unsafe/crc.scm 489 */
																								unsigned char BgL_cz00_5565;

																								BgL_cz00_5565 =
																									(char) (BgL_arg1746z00_5535);
																								{	/* Unsafe/crc.scm 189 */
																									long BgL_octetz00_5569;

																									BgL_octetz00_5569 =
																										(
																										(unsigned
																											char) (BgL_cz00_5565));
																									{	/* Unsafe/crc.scm 190 */
																										BGL_LONGLONG_T
																											BgL_g1044z00_5570;
																										{	/* Unsafe/crc.scm 191 */
																											BGL_LONGLONG_T
																												BgL_arg1516z00_5571;
																											{	/* Unsafe/crc.scm 191 */
																												BGL_LONGLONG_T
																													BgL_res2886z00_5584;
																												BgL_res2886z00_5584 =
																													LONG_TO_LLONG
																													(BgL_octetz00_5569);
																												BgL_arg1516z00_5571 =
																													BgL_res2886z00_5584;
																											}
																											BgL_g1044z00_5570 =
																												(BgL_crcz00_5530 ^
																												BgL_arg1516z00_5571);
																										}
																										{
																											long BgL_iz00_5573;
																											BGL_LONGLONG_T
																												BgL_crcz00_5574;
																											BgL_iz00_5573 =
																												((long) 0);
																											BgL_crcz00_5574 =
																												BgL_g1044z00_5570;
																										BgL_loopz00_5572:
																											if (
																												(BgL_iz00_5573 ==
																													((long) 8)))
																												{	/* Unsafe/crc.scm 192 */
																													BgL_res2894z00_5603 =
																														BgL_crcz00_5574;
																												}
																											else
																												{	/* Unsafe/crc.scm 194 */
																													BGL_LONGLONG_T
																														BgL_newzd2crczd2_5576;
																													{	/* Unsafe/crc.scm 194 */
																														unsigned
																															BGL_LONGLONG_T
																															BgL_xz00_5590;
																														BgL_xz00_5590 =
																															(unsigned
																															BGL_LONGLONG_T)
																															(BgL_crcz00_5574);
																														{	/* Unsafe/crc.scm 194 */
																															unsigned
																																BGL_LONGLONG_T
																																BgL_tmpz00_9097;
																															BgL_tmpz00_9097 =
																																(BgL_xz00_5590
																																>>
																																(int) (((long)
																																		1)));
																															BgL_newzd2crczd2_5576
																																=
																																(BGL_LONGLONG_T)
																																(BgL_tmpz00_9097);
																													}}
																													{
																														BGL_LONGLONG_T
																															BgL_crcz00_9103;
																														long BgL_iz00_9101;

																														BgL_iz00_9101 =
																															(BgL_iz00_5573 +
																															((long) 1));
																														BgL_crcz00_9103 =
																															(((((BGL_LONGLONG_T) 1) & BgL_crcz00_5574) * BgL_polyz00_5519) ^ BgL_newzd2crczd2_5576);
																														BgL_crcz00_5574 =
																															BgL_crcz00_9103;
																														BgL_iz00_5573 =
																															BgL_iz00_9101;
																														goto
																															BgL_loopz00_5572;
																													}
																												}
																										}
																									}
																								}
																							}
																							BgL_arg1745z00_5534 =
																								BgL_res2894z00_5603;
																						}
																					}
																					{
																						BGL_LONGLONG_T BgL_crcz00_9108;
																						long BgL_iz00_9107;

																						BgL_iz00_9107 = BgL_arg1744z00_5533;
																						BgL_crcz00_9108 =
																							BgL_arg1745z00_5534;
																						BgL_crcz00_5530 = BgL_crcz00_9108;
																						BgL_iz00_5529 = BgL_iz00_9107;
																						goto BgL_loopz00_5528;
																					}
																				}
																		}
																	}
																}
															}
														}
														return make_bllong(BgL_res2895z00_5604);
													}
												}
										}
									else
										{	/* Unsafe/crc.scm 422 */
											return
												BGl_errorz00zz__errorz00(BGl_symbol3221z00zz__crcz00,
												BGl_string3244z00zz__crcz00, BgL_polyz00_1918);
										}
								}
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__crcz00()
	{
		{	/* Unsafe/crc.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__crcz00()
	{
		{	/* Unsafe/crc.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__crcz00()
	{
		{	/* Unsafe/crc.scm 15 */
			return BUNSPEC;
		}

	}

#ifdef __cplusplus
}
#endif
